using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class playerMovement : MonoBehaviour
{
    int ballID = 0;

    public static BallModule playerBall = new BallModule();
    Vector3 ballScale;
    Rigidbody rb;

    

    float verticalMove = 0f;
    float horizontalMove = 0f;

    public float xVel = 0;
    public float yVel = 0;
    public float zVel = 0;
    public float deVel = 0.1f;

    [SerializeField] Joystick joystick;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        ballScale = rb.transform.localScale;
    }
    void FixedUpdate()
    {
        // Debug.Log(playerBall.canMove);
        if (playerBall.canMove == true)
        {
            Movement();
        }
    }

    void Movement()
    {
        // Debug.Log(GetComponent<Rigidbody>().velocity);
        horizontalMove = joystick.Horizontal;
        verticalMove = joystick.Vertical;

        xVel += horizontalMove/2;
        if (System.Math.Abs(xVel) > playerBall.ballVelMax)
        {
            if (xVel < 0)
            {
                xVel = -playerBall.ballVelMax;
            }
            else
            {
                xVel = playerBall.ballVelMax;
            }
        }
        zVel += verticalMove/2;
        if (System.Math.Abs(zVel) > playerBall.ballVelMax)
        {
            if (zVel < 0)
            {
                zVel = -playerBall.ballVelMax;
            }
            else
            {
                zVel = playerBall.ballVelMax;
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
        yVel = rb.velocity.y;
        GetComponent<Rigidbody>().velocity = new Vector3(xVel, yVel, zVel);

    }


    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "coin")
        {
            GM.Instance.coinTotal += 1;
            return ;
        }
        if (other.gameObject.tag == "exit")
        {
            Destroy(gameObject);
            SceneManager.LoadScene("finish");
            GM.Instance.Level1CompleteEvent();
            return ;
        }
    }
}
