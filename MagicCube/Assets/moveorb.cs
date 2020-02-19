//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using UnityEngine.SceneManagement;

//public class moveorb : MonoBehaviour
//{
//    public KeyCode moveL;
//    public KeyCode moveR;
//    public KeyCode moveU;
//    public KeyCode moveD;

//    public float xVel = 0;
//    public float zVel = 0;
//    public float deVel = 0.01f;

//    private Vector3 initBallScale;
//    private Rigidbody rb;

//    // Start is called before the first frame update
//    void Start()
//    {
//        rb = GetComponent<Rigidbody>();
//        initBallScale = rb.transform.localScale;
//    }

//    // Update is called once per frame
//    void Update()
//    {
//        if (Input.GetKey(moveL))
//        {
//            xVel = -2;
//        }
        
//        if (Input.GetKey(moveR))
//        {
//            xVel = 2;
//        }

//        if (Input.GetKey(moveU))
//        {
//            zVel = 2;
//        }

//        if (Input.GetKey(moveD))
//        {
//            zVel = -2;
//        }
//        GetComponent<Rigidbody>().velocity = new Vector3(xVel, 0, zVel) * GM.ballVel;

//        if(xVel<0){
//            xVel += deVel;
//        }
//        if(xVel > 0){
//            xVel -= deVel;
//        }

//        if(zVel<0){
//            zVel += deVel;
//        }
//        if(zVel > 0){
//            zVel -= deVel;
//        }


//        if (transform.localScale.x < GM.ballSizeMax)
//        {
//            transform.localScale = initBallScale * GM.ballSize;
//        }
//    }

//    private void OnCollisionEnter(Collision other)
//    {
//        if (other.gameObject.tag == "obst")
//        {
//            GM.ballSize = GM.initBallSize;
//            GM.ballVel = GM.initBallVel;
//            GetComponent<Rigidbody>().velocity = new Vector3(xVel, 0, zVel) * GM.ballVel;
//            transform.localScale = initBallScale * GM.ballSize;
//        }
//    }


//    public void OnTriggerEnter(Collider other)
//    {
//        if(other.gameObject.tag == "coin")
//        {
//            Destroy(other.gameObject);
//            GM.coinTotal += 1;
//        }

//        if (other.gameObject.tag == "exit")
//        {
//            Destroy(gameObject);
//            SceneManager.LoadScene("finish");
//        }
//    }
//}
