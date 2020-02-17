using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class moveorb : MonoBehaviour
{
    public KeyCode moveL;
    public KeyCode moveR;

    public float horizVel = 0;
    public int laneNum = 2;
    public string controlLocked = "n";
    public float maxScale = 1.2f;
    public Transform boomObj;
    private Rigidbody rb;
    private Vector3 initSnowBallScale;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        initSnowBallScale = rb.transform.localScale;
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyUp(moveL) || Input.GetKeyUp(moveR) || transform.position.x <= GM.leftLineBondary || transform.position.x >= GM.rightLineBondary)
        {
            horizVel = 0;
        }
        
        if ((Input.GetKeyDown(moveL)) && transform.position.x > GM.leftLineBondary)
        {
            horizVel = -2;
        }
        if ((Input.GetKeyDown(moveR)) && transform.position.x < GM.rightLineBondary)
        {
            horizVel = 2;
        }
        if(transform.localScale.x < maxScale && transform.localScale.y < maxScale && transform.localScale.z < maxScale)
        {
            
            transform.localScale = initSnowBallScale * (1 + GM.Instance.getSnowBallSizeCoefficient());
        }
        rb.velocity = new Vector3(horizVel, GM.Instance.vertVel, GM.Instance.zVel);
    }

    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.CompareTag("lethal"))
        {
            GM.Instance.snowBallSizeCoefficient = 1;
            Destroy(other.gameObject);
            transform.localScale = initSnowBallScale * (1 + GM.Instance.getSnowBallSizeCoefficient());
            /*GM.zVel = 0;
            Instantiate(boomObj, transform.position, boomObj.rotation);
            GM.lvlCompStatus = "Fail";*/
        }
        //power-up
        if(other.gameObject.name == "Capsule(Clone)")
        {
            Destroy(other.gameObject);
        }

        if (other.gameObject.name == "coin(Clone)")
        {
            Destroy(other.gameObject);
            GM.Instance.coinTotal += 1;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.name == "rampBottomTrig")
        {
            GM.Instance.vertVel = 2;
        }
        if (other.gameObject.name == "rampTopTrig")
        {
            GM.Instance.vertVel = 0;
        }
        if(other.gameObject.name == "exit")
        {
            GM.Instance.lvlCompStatus = "Success";
            SceneManager.LoadScene("LevelComp");
        }

        

    }
    IEnumerator stopSlide()
    {
        yield return new WaitForSeconds(.5f);
        horizVel = 0;
        controlLocked = "n";
    }
}
