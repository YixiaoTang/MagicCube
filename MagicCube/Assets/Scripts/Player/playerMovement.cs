using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;
using PhotonHashTable = ExitGames.Client.Photon.Hashtable;

namespace Com.MyCompany.MyGame
{

    public class playerMovement : MonoBehaviourPunCallbacks, IPunObservable
    {
        int ballID = 0;
        public float ballVelMax = 6f;

        // public static BallModule playerBall = new BallModule();
        Vector3 ballScale;
        Rigidbody rb;
        protected Quaternion LookRotation;
        protected Collider MainCollider;

        /* //不知道这个变量是否需要和球体绑定，要绑定的话会特别麻烦，但是我看PUNTEST里面也没有对其特别说明
         [Tooltip("The local player instance. Use this to know if the local player is represented in the Scene")]
         public static GameObject LocalPlayerInstance;*/

        float verticalMove = 0f;
        float horizontalMove = 0f;

        public static float xVel = 0;
        public static float yVel = 0;
        public static float zVel = 0;
        public static float deVel = 0.02f;
        //不加static
        public int ballCurrentLevel = 1;
        public Material[] levelMatrials = new Material[5];

        [Tooltip("The current coins of our player")]
        public int coinsum = 0;

        [SerializeField] Joystick joystick;


        [Tooltip("The Player's UI GameObject Prefab")]
        [SerializeField]
        public GameObject PlayerUiPrefab;


        [Tooltip("The Player's UI GameObject StatusTracker")]
        [SerializeField]
        public GameObject PlayerStatusPrefab;

        [Tooltip("The Player's UI GameObject BoardPrefab")]
        [SerializeField]
        public GameObject PlayerBoardPrefab;

        
        [Tooltip("The local player instance. Use this to know if the local player is represented in the Scene")]
        public static GameObject LocalPlayerInstance;

        //        public float ballSizeStep = 0.3f;

        public float ballSizeStep = 0.5f;
        public float ballSizeInit = 1f;
        public float ballSizeCurrent = 1f;
        public bool canMove = true;
        PhotonHashTable setScore = new PhotonHashTable();

        static float countdown = 120;
        public int counterTotal=1;

        //public string playername = PhotonNetwork.LocalPlayer.NickName;

        #region MonoBehaviour CallBacks
        void Awake()
        {

            if (photonView.IsMine)
            {
                playerMovement.LocalPlayerInstance = this.gameObject;
            }
            // #Critical
            // we flag as don't destroy on load so that instance survives level synchronization, thus giving a seamless experience when levels load.
            DontDestroyOnLoad(this.gameObject);
        }

        void Start()

        {

            setScore.Add("score", coinsum);
            PhotonNetwork.SetPlayerCustomProperties(setScore);
            //---------------------------------------球体大小控制---------------

            //-----------------------------------------UI控制-----------------------------------
            if (PlayerUiPrefab != null)
            {
                GameObject _uiGo_1 = Instantiate(PlayerUiPrefab);
                _uiGo_1.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
            }
            else
            {
                Debug.LogWarning("<Color=Red><a>Missing</a></Color> PlayerUiPrefab reference on player Prefab.", this);
            }


            //----------------------------------------金币和时间tracker---------------------------------
            //Tracker必须要加用户验证，否则一个客户端会显示所有人的tracker。
            if (photonView.IsMine == true)
            {
                if (PlayerStatusPrefab != null)
                {
                    GameObject _uiGo_2 = Instantiate(PlayerStatusPrefab);
                    _uiGo_2.SendMessage("SetTrackerTarget", this, SendMessageOptions.RequireReceiver);
                }
                else
                {
                    Debug.LogWarning("<Color=Red><a>Missing</a></Color> PlayerStatusPrefab reference on player Prefab.", this);
                }
            }
            //-------------------------------------------

/*            setScore["score"] = coinsum;
            PhotonNetwork.LocalPlayer.CustomProperties = setScore;*/
             
            if (photonView.IsMine == true)
            {
                if (PlayerBoardPrefab != null)
                {
                    GameObject _uiGo_3 = Instantiate(PlayerBoardPrefab);
                    _uiGo_3.SendMessage("SetBoardTarget", this, SendMessageOptions.RequireReceiver);
                }
                else
                {
                    Debug.LogWarning("<Color=Red><a>Missing</a></Color> PlayerBoardPrefab reference on player Prefab.", this);
                }
            }
            //-----------------------------------------用于改变player模型--------------------------
            rb = GetComponent<Rigidbody>();
            ballScale = rb.transform.localScale;

/*            UnityEngine.SceneManagement.SceneManager.sceneLoaded += (scene, loadingMode) =>
            {
                this.CalledOnLevelWasLoaded(scene.buildIndex);
            };*/
            CameraWork _cameraWork = this.gameObject.GetComponent<CameraWork>();


            if (_cameraWork != null)
            {
                if (photonView.IsMine)
                {
                    _cameraWork.OnStartFollowing();
                }
            }
            else
            {
                Debug.LogError("<Color=Red><a>Missing</a></Color> CameraWork Component on playerPrefab.", this);
            }

            //---------------------------------------计分板控制


        }

/*        void Update()
        {
            countdown -= Time.deltaTime;
            counterTotal = Mathf.FloorToInt(countdown);
        }*/
        void Update()
        {
            if(photonView.IsMine == true)
            {
                countdown -= Time.deltaTime;
                counterTotal = Mathf.FloorToInt(countdown);
            }

        }
        void FixedUpdate()
        {



            /*            if (!photonView.IsMine && PhotonNetwork.IsConnected)
                            return;
                  */

            //photonView.Ismain根本就没卵用啊，完全无法验证玩家自己？
            //似乎这个IsMine不能时常在update中调用更新？
            /*            if (photonView.IsMine)
                        {
                            Movement();
                        }*/
            if (canMove == true)
            {
                Movement();
            }


/*            if (counterTotal <= 0)
            {
                Debug.Log("Time Over,Do something");
            }*/

        }

        #endregion


        void Movement()
        {
            yVel = rb.velocity.y;

            //Debug.Log(GetComponent<Rigidbody>().velocity);

            //Vector3 originVel = GetComponent<Rigidbody>().velocity;
            horizontalMove = joystick.Horizontal;
            verticalMove = joystick.Vertical;
            //Debug.Log(horizontalMove);
            //Debug.Log(verticalMove);

            xVel += (horizontalMove / 2);
            if (System.Math.Abs(xVel) > ballVelMax)
            {
                if (xVel < 0)
                {
                    xVel = -ballVelMax;
                }
                else
                {
                    xVel = ballVelMax;
                }
            }
            zVel += (verticalMove / 2);
            if (System.Math.Abs(zVel) > ballVelMax)
            {
                if (zVel < 0)
                {
                    zVel = -ballVelMax;
                }
                else
                {
                    zVel = ballVelMax;
                }
            }

            if (xVel < 0)
            {
                xVel += deVel;
            }
            if (xVel > 0)
            {
                xVel -= deVel;
            }

            if (zVel < 0)
            {
                zVel += deVel;
            }
            if (zVel > 0)
            {
                zVel -= deVel;
            }

            GetComponent<Rigidbody>().velocity = new Vector3(xVel, yVel, zVel);
        }


        /*        void OnTriggerEnter(Collider other)
                {
                    if (other.gameObject.tag == "coin")
                    {
                        GameManager.Instance.coinTotal += 1;
                        return ;
                    }
                }*/


        public void OnTriggerEnter(Collider other)
        {
            if (!photonView.IsMine)
            {
                return;
            }


            if (other.gameObject.tag == "coin")
            {
                photonView.RPC("CoinCount", RpcTarget.All);
                print("Current coins:" + coinsum);

                //int test1 = 0;
                //int test2 = 0;
                // test1=(int)photonView.Owner.CustomProperties["score"];
                //test2 = (int)PhotonNetwork.LocalPlayer.CustomProperties["score"];

                //print("test1 properties: "+test1);
                //print("test2 properties: " + PhotonNetwork.LocalPlayer.CustomProperties["score"]);

                //Destroy(other.gameObject);
            }
        }
        private void OnCollisionEnter(Collision col)
        {
            if (!photonView.IsMine)
            {
                return;
            }

            if (col.gameObject.tag == "obstacle")
            {
                Obst obst = (Obst)col.gameObject.GetComponent<Obst>();
                print("Obst level:" + obst.obstLevel + " Ball Level: " + ballCurrentLevel);
                if (ballCurrentLevel < obst.obstLevel)
                {

                    photonView.RPC("LevelInit", RpcTarget.All);
                }
                else if (ballCurrentLevel == obst.obstLevel)
                {
                    //print("Obst level:" + obst.obstLevel + " Ball Level: " + ballCurrentLevel);
                    //Destroy(col.gameObject);
                    photonView.RPC("LevelUP", RpcTarget.All);
                    //Destroy(col.gameObject);
                    //PhotonNetwork.Destroy(col.gameObject);
                }
            }

/*            if (ballCurrentLevel > oppo.ballCurrentLevel)
            {
                GM.Instance.biggerInCollision++;
            }*/

            if (col.gameObject.tag == "Player")
            {
                playerMovement oppo = (playerMovement)col.gameObject.GetComponent<playerMovement>();

                Vector3 pos1 = oppo.transform.position;

                if (ballCurrentLevel >= oppo.ballCurrentLevel)
                {
                    //发动一次随机的ball弹跳
                    //调用RPC
                    photonView.RPC("BallBounce", RpcTarget.All);

                }
                if (ballCurrentLevel < oppo.ballCurrentLevel)
                {
                    //发动一次随机的ball弹跳
                    //调用RPC

                    photonView.RPC("BallBounce", RpcTarget.All);

                    //photonView.RPC("BallBounce", RpcTarget.All, oppo);
                    photonView.RPC("LevelDown", RpcTarget.All);
                    int coinForSpread = 0;
                    //获取可以用于金币爆发的金币数。
                    if (this.coinsum>5)
                    {
                        coinForSpread = 5;
                        coinsum -= 5;
                    }
                    else
                    {
                        coinForSpread = coinsum;
                        coinsum = 0;
                    }
                    photonView.RPC("SpreadCoins", RpcTarget.All,coinForSpread);
                    //PhotonNetwork.LocalPlayer.CustomProperties["score"] = (int)PhotonNetwork.LocalPlayer.CustomProperties["score"] - coinForSpread;

                    //发动一次所有人都可以看到的金币爆发。
                    //调用RPC
                }



            }
        }

        //考虑写一个RPC函数来存储他自己的金币数目以及删除金币操作。似乎非常可行

        [PunRPC]
        void LevelUP()
        {
            //当球的level=5，也就是材质为第五种时，不再发生变化。因此对于obstacle 最高只有4级，5级的球只能收到6级的陷阱影响。
            if (ballCurrentLevel < 5)
            {
                print("Yes, UP the ball");
                ballCurrentLevel++;
                gameObject.GetComponent<Renderer>().material = levelMatrials[ballCurrentLevel - 1];
                gameObject.transform.localScale += new Vector3(2, 2, 2) * ballSizeStep;
                //这边到时候加修改体积的函数。
            }
        }

        [PunRPC]
        void LevelDown()
        {
            if (ballCurrentLevel > 1)
            {
                print("Yes, Down the ball");
                ballCurrentLevel--;
                gameObject.GetComponent<Renderer>().material = levelMatrials[ballCurrentLevel - 1];
                gameObject.transform.localScale -= new Vector3(2, 2, 2) * ballSizeStep;
                //这边到时候加修改体积的函数。
            }
        }

        [PunRPC]
        void LevelInit()
        {
            gameObject.GetComponent<Renderer>().material = levelMatrials[0];
            ballCurrentLevel = 1;
            gameObject.transform.localScale = new Vector3(1, 1, 1) * ballSizeInit;

        }


        [PunRPC]
        void CoinCount()
        {
            coinsum++;
            PhotonNetwork.LocalPlayer.CustomProperties["score"] = ((int)PhotonNetwork.LocalPlayer.CustomProperties["score"]) + 1;

        }


        [PunRPC]
        /*        void BallBounce(object[] oppo)
                {
                    IEnumerator resumeMovement(float time)
                    {
                        yield return new WaitForSeconds(time);
                        canMove = true;
                    }

                    Vector3 oppotranspos=gameObject.transform.position;
                    oppotranspos[0] = (float)oppo[0];
                    oppotranspos[1] = (float)oppo[1];
                    oppotranspos[2] = (float)oppo[2];

                    Vector3 positionDelta = oppotranspos-gameObject.transform.position;


                    gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);



                    positionDelta.y = 0f;

                    canMove = false;
                    gameObject.GetComponent<Rigidbody>().AddForce(positionDelta * 2000f);
                    StartCoroutine(resumeMovement(0.45f));

                }*/
        void BallBounce()
        {
            IEnumerator resumeMovement(float time)
            {
                yield return new WaitForSeconds(time);
                canMove = true;
            }

            int num = 8;
            float radius = 1f;
            float theta = Random.Range(0, (float)(2 * System.Math.PI));
            float delta = 2 * (float)System.Math.PI / ((float)num);


            Vector3 force;
            float x = (float)(radius * System.Math.Cos(theta));
            float z = (float)(radius * System.Math.Sin(theta));
            force.x = x;
            force.z = z;
            force.y = 1f;
            canMove = false;
            gameObject.GetComponent<Rigidbody>().AddForce(force * 2000f);
            StartCoroutine(resumeMovement(0.45f));

        }


        [PunRPC]
        void SpreadCoins(int num)
        {
            Vector3 location = gameObject.transform.position;
            location.y = 6;
            Debug.Log("Success to spread coins");
            float radius = 1f;
            float theta = Random.Range(0, (float)(2 * System.Math.PI));
            float delta = 2 * (float)System.Math.PI / ((float)num);

            float x;
            float z;
            Vector3 force;
            Vector3 location_new;
            force.y = 1f;
            location_new.y = location.y;

            for (int i = 0; i < num; i++)
            {
                // circule version:
                x = (float)(radius * System.Math.Cos(theta));
                z = (float)(radius * System.Math.Sin(theta));
                theta += delta;

                force.x = x;
                force.z = z;
                location_new.x = location.x + x;
                location_new.z = location.z + z;

                if (PhotonNetwork.IsMasterClient)
                {
                    GameObject obj;
                    obj=PhotonNetwork.InstantiateSceneObject("Coin", location_new, Quaternion.Euler(90, 0, 0));
                    obj.GetComponent<Rigidbody>().AddForce(force * 500f);
                }

            }
            PhotonNetwork.LocalPlayer.CustomProperties["score"] = ((int)PhotonNetwork.LocalPlayer.CustomProperties["score"]) - num;

        }

        //该函数在用户加载level1之后立刻调用，所以在start调用。然后这边其实因为没有level了，所以传入的level参数没用
        //希望能够优化这一部分。
        /*        void CalledOnLevelWasLoaded(int level)
                {


                    // check if we are outside the Arena and if it's the case, spawn around the center of the arena in a safe zone
                    if (!Physics.Raycast(transform.position, -Vector3.up, 5f))
                    {
                        transform.position = new Vector3(0f, 5f, 0f);
                    }
                    GameObject _uiGo_3 = Instantiate(this.PlayerUiPrefab);
                    _uiGo_3.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
                }
        */

        #region IPunObservable implementation

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                // We own this player: send the others our data
                stream.SendNext(coinsum);
            }
            else
            {
                // Network player, receive data
                coinsum = (int)stream.ReceiveNext();
            }
        }

        #endregion

        //球体撞击函数



        //撞击后金币生草函数
    }
}