using UnityEngine;
using System.Collections;

using System;
using UnityEngine.SceneManagement;


using Photon.Pun;
using Photon.Realtime;

namespace Com.MyCompany.MyGame
{
    /// <summary>
    /// Camera work. Follow a target
    /// </summary>
    public class CameraWork : MonoBehaviour
    {

        //基本方法就是，设置一个偏移量offset，其=当前摄像机的位置减去当前玩家的位置。
        //也就是说偏移量固定，为初始化时摄像机与玩家之间的距离。
        //然后在lateUpdate中，给当前摄像机位置赋值，使其一直等于刷新后的玩家位置+偏移量。
        //public GameObject player;

        private Vector3 offset;


        [Tooltip("Set this as false if a component of a prefab being instanciated by Photon Network, and manually call OnStartFollowing() when and if needed.")]
        [SerializeField]
        private bool followOnStart = false;


        //--------------------PUN2的方法------------------------------
        private float distance = -2.0f;
        private float height = 2.0f;
        private float heightSmoothLag = 0.3f;
        private Vector3 centerOffset = Vector3.zero;


        //相机有可能丢失
        bool isFollowing;

        //设置一个高度速度
        private float heightVelocity;

        //因为这边transform需要去主动获取，因此不能直接去引用位置计算。
        Transform cameraTransform;

       

        void Start()
        {

            if(followOnStart)
            {
                OnStartFollowing();
            }
            //摄像头的transform.position直接减去绑定的GameObject的位置
            //offset = transform.position - player.transform.position;
        }

        void LateUpdate()
        {
            //摄像头 
            if(cameraTransform==null && isFollowing)
            {
                OnStartFollowing();
            }

            if (isFollowing)
            {
                Apply();
            }
            //transform.position = player.transform.position + offset;
        }


        public void OnStartFollowing()
        {
            cameraTransform = Camera.main.transform;
            isFollowing = true;
            //设定偏移量为当前主摄像机
            offset = cameraTransform.position - transform.position;
            offset.y = offset.y + height;
            offset.z = offset.z + distance;
            //因为我们没有cut，所以只需要在这边写apply，让摄像机的位置变动即可。
            Apply();
        }

        void Apply()
        {
            cameraTransform.position = transform.position + offset;

        }

    }
}