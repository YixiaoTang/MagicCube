using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using System.Collections.Generic;
using UnityEngine.UI;

namespace Com.MyCompany.MyGame
{
    //定义了一个Launcher类,用于对应Launcher Scene
    public class Launcher : MonoBehaviourPunCallbacks
    {
        //私有可序列化字段


        public GameObject nameUI;
        public GameObject loginUI;
        public InputField roomName;
        public InputField playerName;
        private byte maxPlayersPerRoom = 4;

        void Awake()
        {
            // #Critical
            // this makes sure we can use PhotonNetwork.LoadLevel() on the master client and all clients in the same room sync their level automatically
            //这或许是主界面出错的原因？
            PhotonNetwork.AutomaticallySyncScene = true;
        }

        void Start()
        {
            //阶段0，打开游戏即连接服务器
            PhotonNetwork.ConnectUsingSettings();
        }

        //正在连接中时
        public override void OnConnectedToMaster()
        {
            //阶段1，连接服务器成功时显示NameUI

            nameUI.SetActive(true);
            Debug.Log("Hello,Jacky");
            //在实际连接上之后，用户在这里加入或者创建房间。
        }


        public void PlayButton()
        {
            if (roomName.text.Length < 2)
            {
                return;
            }
            nameUI.SetActive(false);
            PhotonNetwork.NickName = playerName.text;
            loginUI.SetActive(true);

        }

        public void JoinOrCreateButtion()
        {
            if (playerName.text.Length < 2)
            {
                return;
            }

            loginUI.SetActive(false);

            RoomOptions options = new RoomOptions { MaxPlayers = 4 };
            PhotonNetwork.JoinOrCreateRoom(roomName.text, options,default);

        }

        // 当成功加入或者创建房间时，我们进入onjoinedroom状态，此时可以转换加载场景
        public override void OnJoinedRoom()
        {   
            //加载到按顺序build的第二个界面，这边不包含实例化
            //此时会修改Playmovement内容，因为两者有冲突。
            PhotonNetwork.LoadLevel(1);
        }



        public override void OnJoinRandomFailed(short returnCode, string message)
        {
            Debug.Log("PUN Basics Tutorial/Launcher:OnJoinRandomFailed() was called by PUN. No random room available, so we create one.\nCalling: PhotonNetwork.CreateRoom");

            // #Critical: we failed to join a random room, maybe none exists or they are all full. No worries, we create a new room.
            PhotonNetwork.CreateRoom(null, new RoomOptions { MaxPlayers = maxPlayersPerRoom });
        }
    }
}
