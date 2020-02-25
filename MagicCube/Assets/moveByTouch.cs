using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class moveByTouch : MonoBehaviour
{
    // Start is called before the first frame update
    public Transform mainCamera;
    public Joystick joystick;

    float verticalMove = 0f;
    float horizontalMove = 0f;

    public static float xVel = 0;
    public static float zVel = 0;
    public static float deVel = 0.05f;

    private Vector3 initBallScale;
    private Rigidbody rb;

    void Start()
    {
        Debug.Log(Camera.main);
        rb = GetComponent<Rigidbody>();
        initBallScale = rb.transform.localScale;
    }

    // Update is called once per frame
    void Update()
    {
        //if (Input.touchCount > 0)
        //{
        //    for(int i = 0; i < Input.touchCount; i++)
        //    {
        //        var screenPosition = new Vector3(Input.touches[i].position.x, Input.touches[i].position.y, mainCamera.transform.position.z * -1);
        //        Vector3 touchPosition = Camera.main.ScreenToWorldPoint(screenPosition);
        //        Debug.Log(touchPosition);
        //        Debug.Log(gameObject.transform.position);
        //        Debug.DrawLine(gameObject.transform.position, touchPosition, Color.red);
        //    }
        //}
        Debug.Log(GetComponent<Rigidbody>().velocity);


        horizontalMove = joystick.Horizontal;
        verticalMove = joystick.Vertical;
        Debug.Log(horizontalMove);
        Debug.Log(verticalMove);

        xVel += horizontalMove/4;
        if (System.Math.Abs(xVel) > GM.ballVelMax)
        {
            if (xVel < 0)
            {
                xVel = -GM.ballVelMax;
            }
            else
            {
                xVel = GM.ballVelMax;
            }
        }
        zVel += verticalMove/4;
        if (System.Math.Abs(zVel) > GM.ballVelMax)
        {
            if (zVel < 0)
            {
                zVel = -GM.ballVelMax;
            }
            else
            {
                zVel = GM.ballVelMax;
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

        GetComponent<Rigidbody>().velocity = new Vector3(xVel, 0, zVel) * GM.ballVel;

        if (transform.localScale.x < GM.ballSizeMax)
        {
            transform.localScale = initBallScale * GM.ballSize;
        }
    }
    // 如果碰到了柱子
    private void OnCollisionEnter(Collision other)
    {
        // 不动的柱子
        if (other.gameObject.tag == "obst1")
        {
            //球的状态都还原
            GM.ballSize = GM.initBallSize;
            GM.ballVel = GM.initBallVel;
            //速度
            GetComponent<Rigidbody>().velocity = new Vector3(xVel, 0, zVel) * GM.ballVel;
            //？？
            transform.localScale = initBallScale * GM.ballSize;
        }
        //会动的柱子
        if (other.gameObject.tag == "obst2")
        {
            Destroy(other.gameObject);  // 消失
        }
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
            SceneManager.LoadScene("finish");
        }
    }
}
