using System.Collections;
using System.Collections.Generic;


using UnityEngine;


using Photon.Pun;
using Photon.Realtime;


namespace Com.MyCompany.MyGame
{

    public class GameManager : MonoBehaviourPunCallbacks
    {


        [HideInInspector]
        public playerMovement LocalPlayer;
        [HideInInspector]
        public int xRange = 30;
        [HideInInspector]
        public int zRange = 30;
        [HideInInspector]
        public float initBallVel = 1f, ballVel = 1f;    // ??
        [HideInInspector]
        public float ballVelMax = 8f, ballSizeMax = 4f;
        [HideInInspector]
        public float ballSizeStep = 0.3f; // The step for the ball size change every time.
        [HideInInspector]
        public int MaxLevel = 5;
        //这个实例似乎没用，基本是靠photon在进行实例化相关操作
        public static GameManager Instance;
        //123
        
        //添加必要的地图生成物参数
        public static int CoinNum = 100;
        public static int Obst1Num = 10;
        public static int Obst2Num = 10;
        public static int Obst3Num = 10;
        public static int Obst4Num = 10;
        public static int Obst5Num = 5;
        //[HideInInspector]
        //public GameObject player;
        [HideInInspector]
        public GameObject coin;
        [SerializeField] int[] obstNumList = { Obst1Num, Obst2Num, Obst3Num, Obst4Num, Obst5Num };
        [SerializeField] Transform[] obstList = { };

        private float rand1, rand2;



        public void Start()

        {

            //SpawnCoinsFirst();


            Debug.LogFormat("We are Instantiating LocalPlayer from {0}", SceneManagerHelper.ActiveSceneName);

            LocalPlayer = PhotonNetwork.Instantiate("Player", new Vector3(0f, 5f, 0f), Quaternion.identity, 0).GetComponent<playerMovement>();

            if (PhotonNetwork.IsMasterClient)
            {
                for (int i = 0; i < CoinNum; i++)
                {
                    /*                    rand1 = Random.Range(-xRange, xRange);
                                        rand2 = Random.Range(-zRange, zRange);*/
                    rand1 = Random.Range(-6, 36);
                    rand2 = Random.Range(-36, 8);
                    //Instantiate(coin, new Vector3(rand1, 1, rand2), coin.transform.rotation);

                    //Photon初始化的话，所有的参数都需要再设置一边，否则就是默认000的状态
                    PhotonNetwork.InstantiateSceneObject("Coin", new Vector3(rand1, 2, rand2), Quaternion.Euler(90,0,0));

                }
                for (int i = 0; i < CoinNum/2; i++)
                {
                    /*                    rand1 = Random.Range(-xRange, xRange);
                                        rand2 = Random.Range(-zRange, zRange);*/
                    rand1 = Random.Range(-36, 36);
                    rand2 = Random.Range(22, 34);
                    //Instantiate(coin, new Vector3(rand1, 1, rand2), coin.transform.rotation);

                    //Photon初始化的话，所有的参数都需要再设置一边，否则就是默认000的状态
                    PhotonNetwork.InstantiateSceneObject("Coin", new Vector3(rand1, 2, rand2), Quaternion.Euler(90, 0, 0));

                }
                for (int i = 0; i < CoinNum / 4; i++)
                {
                    /*                    rand1 = Random.Range(-xRange, xRange);
                                        rand2 = Random.Range(-zRange, zRange);*/
                    rand1 = Random.Range(-36, -8);
                    rand2 = Random.Range(-24, -36);
                    //Instantiate(coin, new Vector3(rand1, 1, rand2), coin.transform.rotation);

                    //Photon初始化的话，所有的参数都需要再设置一边，否则就是默认000的状态
                    PhotonNetwork.InstantiateSceneObject("Coin", new Vector3(rand1, 2, rand2), Quaternion.Euler(90, 0, 0));

                }

                // Here is the code for spawn pillar!!!!
/*                for (int i = 0; i < obstList.Length; i++)
                {
                    for(int m=0; m<obstNumList[i];m++)
                    {
                        rand1 = Random.Range(-xRange, xRange);
                        rand2 = Random.Range(-zRange, zRange);
                        switch(i)
                        {
                            case 0:
                                PhotonNetwork.InstantiateSceneObject("obst-lv1", new Vector3(rand1, 1, rand2), Quaternion.Euler(0, 0, 0));
                                break;
                            case 1:
                                PhotonNetwork.InstantiateSceneObject("obst-lv2", new Vector3(rand1, 1, rand2), Quaternion.Euler(0, 0, 0));
                                break;
                            case 2:
                                PhotonNetwork.InstantiateSceneObject("obst-lv3", new Vector3(rand1, 1, rand2), Quaternion.Euler(0, 0, 0));
                                break;
                            case 3:
                                PhotonNetwork.InstantiateSceneObject("obst-lv4", new Vector3(rand1, 1, rand2), Quaternion.Euler(0, 0, 0));
                                break;
                            case 4:
                                PhotonNetwork.InstantiateSceneObject("obst-lv5", new Vector3(rand1, 1, rand2), Quaternion.Euler(0, 0, 0));
                                break;

                        }
                    }



                }*/
            }
                //PhotonNetwork.InstantiateSceneObject("Coin", new Vector3(1, 1, 1), Quaternion.identity);
            //SpawnCoinsFirst();
        }


        private void SpawnCoinsFirst()
        {
            for (int i = 0; i < CoinNum; i++)
            {
                rand1 = Random.Range(-xRange, xRange);
                rand2 = Random.Range(-zRange, zRange);
                //Instantiate(coin, new Vector3(rand1, 1, rand2), coin.transform.rotation);

                PhotonNetwork.InstantiateSceneObject(this.coin.name, new Vector3(rand1, 0, rand2), Quaternion.identity, 0);

            }
        }

        private IEnumerator SpawnCoinsRoutine()
        {
            while (true)
            {

            }
        }


        public override void OnMasterClientSwitched(Player newMasterClient)
        {
            if (PhotonNetwork.LocalPlayer.ActorNumber == newMasterClient.ActorNumber)
            {
                SpawnCoinsFirst();
                StartCoroutine(SpawnCoinsRoutine());
            }
        }

    }
}







/*
 
        public void Start()

        {
            //SpawnCoinsFirst();
            if (player == null)
            {
                Debug.LogError("<Color=Red><a>Missing</a></Color> player Reference. Please set it up in GameObject 'Game Manager'", this);
            }
            else
            {
                if (playerMovement.LocalPlayerInstance == null)
                {

                    Debug.LogFormat("We are Instantiating LocalPlayer from {0}", SceneManagerHelper.ActiveSceneName);
                    // we're in a room. spawn a character for the local player. it gets synced by using PhotonNetwork.Instantiate
                    LocalPlayer=PhotonNetwork.Instantiate(this.player.name, new Vector3(0f, 5f, 0f), Quaternion.identity, 0).GetComponent<Player>(); 

                    if (PhotonNetwork.IsMasterClient)
                    {
                        SpawnCoinsFirst();
                        //StartCoroutine(SpawnCoinsRoutine());
                    }
                    else Debug.LogFormat("Cannot enter the IsMasterClient condition");

                }
                else
                {
                    Debug.LogFormat("Ignoring scene load for {0}", SceneManagerHelper.ActiveSceneName);
                }
            }

            SpawnCoinsFirst();
        }
*/