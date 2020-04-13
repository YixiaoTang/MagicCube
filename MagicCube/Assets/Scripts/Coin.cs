using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Com.MyCompany.MyGame
{
    public class Coin : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        // 让硬币旋转？
        void FixedUpdate()
        {
            //这个判断是基于unity自己项目工程的一个设置，在Edit->project settings->Tags and layers可以找到，然后就能给object赋予专属的tag了。
            if (gameObject.tag == "coin")
            {
                transform.Rotate(0, 0, 1);
            }



        }


        void OnTriggerEnter(Collider other)
        {
            var player = other.GetComponent<playerMovement>();
            if (player != null)
            {
                gameObject.SetActive(false);

            }
        }
    }

}
