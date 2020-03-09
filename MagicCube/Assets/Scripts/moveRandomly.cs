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

    BallModule myInfo = new BallModule();
    Vector3 ballScale;
    Rigidbody rb;
    

    public static float xVel = 0;
    public static float yVel = 0;
    public static float zVel = 0;
    public static float deVel = 0.02f;
    public static float ballSize = 1f;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        ballScale = rb.transform.localScale;

        InvokeRepeating("SetRandomVel", 0, 0.5f);
    }


    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "coin")
        {
            Destroy(other.gameObject);
            myInfo.coinTotal += 1;
        }
    }


    void SetRandomVel()
    {
        rand1 = UnityEngine.Random.Range(-2.0f, 2.0f) * 4;
        rand2 = UnityEngine.Random.Range(-2.0f, 2.0f) * 4;
        GetComponent<Rigidbody>().velocity = new Vector3(rand1, rb.velocity.y, rand2);
    }
}
