using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class moveRandomly : MonoBehaviour
{
    private float rand1;
    private float rand2;
    private String[] obstTags = { "obst1", "obst2", "obst3", "obst4", "obst5" };
    void Start()
    {
        InvokeRepeating("SetRandomVel", 0, 0.5f);
    }

    void Update()
    {
        //rand1 = Random.Range(-2.0f, 2.0f);
        //rand2 = Random.Range(-2.0f, 2.0f);
        //GetComponent<Rigidbody>().velocity = new Vector3(rand1, 0, rand2) * 10;
    }

    void SetRandomVel()
    {
        rand1 = UnityEngine.Random.Range(-2.0f, 2.0f);
        rand2 = UnityEngine.Random.Range(-2.0f, 2.0f);
        GetComponent<Rigidbody>().velocity = new Vector3(rand1, 0, rand2)*4;
    }

    private void OnCollisionEnter(Collision other)
    {
        for (int i = 0; i < obstTags.Length; i++)
        {
            if (other.gameObject.tag == obstTags[i])
            {
                if (GM.ballSize < i + 1)
                {
                    // obst is bigger
                    GM.ballSize = GM.initBallSize;
                    ///GM.ballVel = GM.initBallVel;
                    Vector3 currentVel = GetComponent<Rigidbody>().velocity;
                    GetComponent<Rigidbody>().AddForce(new Vector3(0, 50, 0));
                }
                else
                {
                    // obst is small
                    Destroy(other.gameObject);
                }
                break;
            }
        }
        //// 不动的柱子
        //if (other.gameObject.tag == "obst1")
        //{
        //    //球的状态都还原
        //    GM.ballSize = GM.initBallSize;
        //    GM.ballVel = GM.initBallVel;
        //    //速度
        //    GetComponent<Rigidbody>().velocity = new Vector3(xVel, 0, zVel) * GM.ballVel;
        //    //？？
        //    transform.localScale = initBallScale * GM.ballSize;
        //}
        ////会动的柱子
        //if (other.gameObject.tag == "obst2")
        //{
        //    Destroy(other.gameObject);  // 消失
        //}
    }

    // 如果碰到了硬币
    public void OnTriggerEnter(Collider other)
    {
        // tag为硬币
        if (other.gameObject.tag == "coin")
        {
            Destroy(other.gameObject);  // 消失
            GM.coinTotal += 1;  // 加分
        }

        // tag为退出
        if (other.gameObject.tag == "exit")
        {
            Destroy(gameObject);
            GM.level1CompleteEvent();
        }
    }
}
