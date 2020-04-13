using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

namespace Com.MyCompany.MyGame
{ 

    public class playerMovement : MonoBehaviourPunCallbacks,IPunObservable
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

        [Tooltip("The local player instance. Use this to know if the local player is represented in the Scene")]
        public static GameObject LocalPlayerInstance;

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

            //-----------------------------------------UI控制-----------------------------------
            if (PlayerUiPrefab != null)
            {
                GameObject _uiGo = Instantiate(PlayerUiPrefab);
                _uiGo.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
            }
            else
            {
                Debug.LogWarning("<Color=Red><a>Missing</a></Color> PlayerUiPrefab reference on player Prefab.", this);
            }

            //-----------------------------------------用于改变player模型--------------------------
            rb = GetComponent<Rigidbody>();
            ballScale = rb.transform.localScale;

            UnityEngine.SceneManagement.SceneManager.sceneLoaded += (scene, loadingMode) =>
            {
                this.CalledOnLevelWasLoaded(scene.buildIndex);
            };
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
            Movement();



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

            xVel += horizontalMove/2;
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
            zVel += verticalMove/2;
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

                //Destroy(other.gameObject);
            }
        }
        private void OnCollisionEnter(Collision col)
        {
            if (!photonView.IsMine)
            {
                return;
            }

            if(col.gameObject.tag=="obstacle")
            {
                Obst obst = (Obst)col.gameObject.GetComponent<Obst>();
                print("Obst level:" + obst.obstLevel + " Ball Level: " + ballCurrentLevel);
                if (ballCurrentLevel < obst.obstLevel)
                {

                    //LevelInit();
                }
                else if (ballCurrentLevel == obst.obstLevel)
                {
                    print("Obst level:" + obst.obstLevel + " Ball Level: " + ballCurrentLevel);
                    //Destroy(col.gameObject);
                    photonView.RPC("LevelUP", RpcTarget.All);
                    //Destroy(col.gameObject);
                    //PhotonNetwork.Destroy(col.gameObject);
                }
            }
/*                if (Input.GetKeyDown(KeyCode.E))
                {
                    photonView.RPC("LevelUP", RpcTarget.All, 1);
                }

                if (Input.GetKeyDown(KeyCode.P))
                {
                    photonView.RPC("ChangeHairColour", RpcTarget.All, 2);
                }*/
            //if (photonView.isMine)
        }

        //考虑写一个RPC函数来存储他自己的金币数目以及删除金币操作。似乎非常可行

        [PunRPC]
        void LevelUP()
        {
            if(ballCurrentLevel< 5)
            {
                print("Yes we enter the loop");
                ballCurrentLevel++;
                gameObject.GetComponent<Renderer>().material = levelMatrials[ballCurrentLevel - 1];
                
                //这边到时候加修改体积的函数。
            }
        }
        [PunRPC]
        void CoinCount()
        {
            coinsum++;

        }

        //该函数在用户加载level1之后立刻调用，所以在start调用。然后这边其实因为没有level了，所以传入的level参数没用
        //希望能够优化这一部分。
        void CalledOnLevelWasLoaded(int level)
        {
            // check if we are outside the Arena and if it's the case, spawn around the center of the arena in a safe zone
            if (!Physics.Raycast(transform.position, -Vector3.up, 5f))
            {
                transform.position = new Vector3(0f, 5f, 0f);
            }
            GameObject _uiGo = Instantiate(this.PlayerUiPrefab);
            _uiGo.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
        }


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
        
    }
}