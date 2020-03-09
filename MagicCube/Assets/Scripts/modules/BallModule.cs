using System;
using System.Collections.Generic;
using UnityEngine;

public class BallModule : MonoBehaviour, IComparable
{
    public float ballSizeInit = 1f;
    public float ballSizeCurrent = 1f;
    public float ballSizeTmp = 1f;
    public float balVelInit = 1f;
    public float ballVelCurrent = 2f;
    public int coinTotal = 0;
    public float ballVelMax = 6f;
    public float ballSizeMax = 5f;
    public new string name;
    public int ballCurrentLevel = 1;

    public Material[] levelMatrials = new Material[5];

    private void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.tag == "obstacle")
        {
            Obst obst = (Obst)col.gameObject.GetComponent<Obst>();
            print("Obst level:" + obst.obstLevel + " Ball Level: " + ballCurrentLevel);
            if (ballCurrentLevel < obst.obstLevel)
            {
                LevelInit();
            }else if(ballCurrentLevel >= obst.obstLevel)
            {
                LevelUp();
                Destroy(col.gameObject);
            }
        }
        if (col.gameObject.tag == "enemy")
        {
            BallModule enemy = (BallModule)col.gameObject.GetComponent<BallModule>();
            if (ballCurrentLevel > enemy.ballCurrentLevel)
            {
                Destroy(col.gameObject);
            }
            else if(ballCurrentLevel < enemy.ballCurrentLevel)
            {
                Destroy(gameObject);
            }
        }

    }
    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "coin")
        {
            Destroy(other.gameObject);
            coinTotal ++;
        }
    }

    private void LevelUp()
    {
        if(ballCurrentLevel < GM.Instance.MaxLevel)
        {
            ballCurrentLevel ++;
            gameObject.GetComponent<Renderer>().material = levelMatrials[ballCurrentLevel - 1];
            ballSizeCurrent = ballSizeInit  + 5 * GM.Instance.ballSizeStep * (ballCurrentLevel - 1);
            gameObject.transform.localScale += new Vector3(1, 1, 1) * GM.Instance.ballSizeStep;
        }
    }

    private void LevelDown()
    {
        if (ballCurrentLevel > 1)
        {
            ballCurrentLevel --;
            gameObject.GetComponent<Renderer>().material = levelMatrials[ballCurrentLevel - 1];
            ballSizeCurrent = ballSizeInit + GM.Instance.ballSizeStep * (ballCurrentLevel - 1);
            gameObject.transform.localScale -= new Vector3(1, 1, 1) * GM.Instance.ballSizeStep;
        }
    }

    private void LevelInit()
    {
        ballCurrentLevel = 1;
        gameObject.GetComponent<Renderer>().material = levelMatrials[0];
        ballSizeCurrent = ballSizeInit;
        gameObject.transform.localScale = new Vector3(1, 1, 1) * ballSizeInit;
    }

    public int CompareTo(object obj)
    {
        if(obj.GetType() == typeof(BallModule))
        {
            return ((BallModule)obj).coinTotal - coinTotal;
        }
        else
        {
            return -1;
        }
    }
}