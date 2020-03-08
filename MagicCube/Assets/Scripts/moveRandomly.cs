using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class moveRandomly : MonoBehaviour
{
    private float rand1;
    private float rand2;

    // Rigidbody rb;

    // void Start()
    // {
    //     InvokeRepeating("SetRandomVel", 0, 0.5f);
    //     rb = GetComponent<Rigidbody>();
    // }

    // void Update()
    // {
    // }

    // void SetRandomVel()
    // {
    //     rand1 = UnityEngine.Random.Range(-2.0f, 2.0f) * 4;
    //     rand2 = UnityEngine.Random.Range(-2.0f, 2.0f) * 4;
    //     GetComponent<Rigidbody>().velocity = new Vector3(rand1, rb.velocity.y, rand2);
    // }

    int ballID = 1;

    ballModule myInfo = new ballModule();
    Vector3 ballScale;
    Rigidbody rb;
    
    float verticalMove = 0f;
    float horizontalMove = 0f;

    public static float xVel = 0;
    public static float yVel = 0;
    public static float zVel = 0;
    public static float deVel = 0.02f;
    public static float ballSize = 1f;

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

        InvokeRepeating("SetRandomVel", 0, 0.5f);
    }
    void FixedUpdate()
    {
        Movement();
    }

    void Movement()
    {
        
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
                ballSize++;
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
            myInfo.coinTotal += 1;
        }
    }

    void sizeCheck()
    {
        transform.localScale = ballScale * myInfo.ballSizeCurrent;
        if (ballScale.x <= myInfo.ballSizeMax)
        {
            transform.localScale = ballScale * myInfo.ballSizeCurrent;
        } 
        // else if (ballScale.x > myInfo.ballSizeInit)
        // {
        //     transform.localScale = ballScale * .9f;
        // }
    }

    void onCollection(){
        myInfo.ballSizeCurrent += 0.1f;
    }
    void SetRandomVel()
    {
        rand1 = UnityEngine.Random.Range(-2.0f, 2.0f) * 4;
        rand2 = UnityEngine.Random.Range(-2.0f, 2.0f) * 4;
        GetComponent<Rigidbody>().velocity = new Vector3(rand1, rb.velocity.y, rand2);
    }
}
