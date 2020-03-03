using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class playerMovement : MonoBehaviour
{
    Vector3 ballScale;
    Rigidbody rb;
    
    [SerializeField] Joystick joystick;
    [SerializeField] float speed = 1000f;

    float drag = 1.0f;
    float movementLR = 1;
    float movementUD = 1;
    void Start()
    { 
    }
    void FixedUpdate()
    {
        rb = GetComponent<Rigidbody>();
        ballScale = rb.transform.localScale;
        movementLR = joystick.Horizontal * speed * Time.deltaTime;
        movementUD = joystick.Vertical * speed * Time.deltaTime;
        ///  movementLR = Input.GetAxis("Horizontal") * speed * Time.deltaTime;
        /// movementUD = Input.GetAxis("Vertical") * speed * Time.deltaTime;
        rb.velocity = new Vector3(movementLR, rb.velocity.y, movementUD);
    }

    void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.tag == "obstacle")
        {
            if (col.gameObject.transform.localScale.y >= ballScale.y)
            {
                this.transform.position = new Vector3(transform.position.x, 1, transform.position.z);
                MinSizeCheck();
            }
            else
            {
                FindObjectOfType<GM>().OnCollection();
                MaxSizeCheck();
                Destroy(col.gameObject);
            }
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
    void MaxSizeCheck()
    {
        if (ballScale.x <= GM.ballSizeMax)
        {
            transform.localScale = ballScale * GM.ballSize;
        }
    }
    void MinSizeCheck()
    {
        if (ballScale.x > GM.initBallSize)
        {
            transform.localScale = ballScale * .9f;
        }
    }
}
