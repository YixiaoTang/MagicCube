using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class playerMovement : MonoBehaviour
{
    int ballID = 0;

    ballModule myInfo = new ballModule();
    Vector3 ballScale;
    Rigidbody rb;
    
    float verticalMove = 0f;
    float horizontalMove = 0f;

    public static float xVel = 0;
    public static float yVel = 0;
    public static float zVel = 0;
    public static float deVel = 0.02f;

    [SerializeField] Joystick joystick;
    [SerializeField] float speed = 1000f;

    float drag = 1.0f;
    float movementLR = 1;
    float movementUD = 1;

    bool movementActive = true;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        ballScale = rb.transform.localScale;
    }
    void FixedUpdate()
    {
        Movement();
    }

    void Movement()
    {
        yVel = rb.velocity.y;

        //Debug.Log(GetComponent<Rigidbody>().velocity);

        //Vector3 originVel = GetComponent<Rigidbody>().velocity;
        horizontalMove = joystick.Horizontal;
        verticalMove = joystick.Vertical;
        //Debug.Log(horizontalMove);
        //Debug.Log(verticalMove);

        xVel += horizontalMove / 4;
        if (System.Math.Abs(xVel) > myInfo.ballVelMax)
        {
            if (xVel < 0)
            {
                xVel = -myInfo.ballVelMax;
            }
            else
            {
                xVel = myInfo.ballVelMax;
            }
        }
        zVel += verticalMove / 4;
        if (System.Math.Abs(zVel) > myInfo.ballVelMax)
        {
            if (zVel < 0)
            {
                zVel = -myInfo.ballVelMax;
            }
            else
            {
                zVel = myInfo.ballVelMax;
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


        //if (movementActive == true)
        //{
        //    rb = GetComponent<Rigidbody>();
        //    ballScale = rb.transform.localScale;
        //    movementLR = joystick.Horizontal * speed * Time.deltaTime;
        //    movementUD = joystick.Vertical * speed * Time.deltaTime;
        //    ///  movementLR = Input.GetAxis("Horizontal") * speed * Time.deltaTime;
        //    /// movementUD = Input.GetAxis("Vertical") * speed * Time.deltaTime;
        //    rb.velocity = new Vector3(movementLR, rb.velocity.y, movementUD);
        //    //movementActive = false;
        //}
    }

    void OnCollisionEnter(Collision col)
    {
        Debug.Log(col.gameObject);
        if (col.gameObject.tag == "obstacle")
        {
            if (col.gameObject.transform.localScale.y - 1 >= ballScale.y)
            {
                this.transform.position = new Vector3(transform.position.x, 1, transform.position.z);
                myInfo.ballSizeCurrent = myInfo.ballSizeInit;
            }
            else
            {
                onCollection();
                Destroy(col.gameObject);
            }
            sizeCheck();
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "coin")
        {
            Destroy(other.gameObject);
            GM.coinTotal += 1;
        }
        if (other.gameObject.tag == "exit")
        {
            Destroy(gameObject);
            SceneManager.LoadScene("finish");
            GM.level1CompleteEvent();
        }
    }

    void sizeCheck()
    {
        transform.localScale = ballScale * myInfo.ballSizeCurrent;
        if (ballScale.x <= myInfo.ballSizeMax)
        {
            transform.localScale = ballScale * myInfo.ballSizeCurrent;
        }
    }

    void onCollection(){
        myInfo.ballSizeCurrent += 0.1f;
    }
}
