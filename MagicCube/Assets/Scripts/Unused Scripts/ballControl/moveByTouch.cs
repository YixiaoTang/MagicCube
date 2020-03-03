using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class moveByTouch : MonoBehaviour
{
    // Start is called before the first frame update
    public Joystick joystick;

    float verticalMove = 0f;
    float horizontalMove = 0f;

    public static float xVel = 0;
    public static float yVel = 0;
    public static float zVel = 0;
    public static float deVel = 0.02f;

    private String[] obstTags = { "obst-lv1(Clone)", "obst-lv2(Clone)", "obst-lv3(Clone)", "obst-lv4(Clone)", "obst-lv5(Clone)" };

    private Vector3 initBallScale;
    private Rigidbody rb;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        initBallScale = rb.transform.localScale;
    }

    // Update is called once per frame
    void Update()
    {
        yVel = rb.velocity.y;

        //Debug.Log(GetComponent<Rigidbody>().velocity);

        //Vector3 originVel = GetComponent<Rigidbody>().velocity;
        horizontalMove = joystick.Horizontal;
        verticalMove = joystick.Vertical;
        //Debug.Log(horizontalMove);
        //Debug.Log(verticalMove);

        xVel += horizontalMove / 4;
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
        zVel += verticalMove / 4;
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

        //xVel *= GM.ballVel;
        //zVel *= GM.ballVel;
        //Debug.Log(new Vector3(xVel, yVel, zVel));

        GetComponent<Rigidbody>().velocity = new Vector3(xVel, yVel, zVel);

        if (transform.localScale.x < GM.ballSizeMax)
        {
            transform.localScale = initBallScale * GM.ballSize;
        }
    }
            // 如果碰到了柱子
    private void OnCollisionEnter(Collision other)
    {
        Debug.Log(other.gameObject.name);
        for (int i = 0; i < obstTags.Length; i++)
        {
            if (other.gameObject.name == obstTags[i])
            {
                if (GM.ballSize < i + 1)
                {
                    // obst is bigger
                    GM.ballSize = GM.initBallSize;
                    GM.ballVel = GM.initBallVel;
                    Vector3 currentVel = GetComponent<Rigidbody>().velocity;
                    GetComponent<Rigidbody>().velocity = new Vector3(xVel, 0, zVel) * GM.ballVel;
                    transform.localScale = initBallScale * GM.ballSize;
                    //GetComponent<Rigidbody>().AddForce(new Vector3(0, 1, 0));
                }
                else
                {
                    // obst is small
                    Destroy(other.gameObject);
                }
                break;
            }
        }
    }
        //如果碰到了硬币
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
                SceneManager.LoadScene("Round Finish");
                GM.level1CompleteEvent();
            }
        }
    }
