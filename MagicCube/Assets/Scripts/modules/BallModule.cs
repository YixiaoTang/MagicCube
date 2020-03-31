using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallModule : MonoBehaviour, IComparable
{
    public float ballSizeInit = 1f;
    public float ballSizeCurrent = 1f;
    public float balVelInit = 1f;
    public float ballVelCurrent = 2f;
    public int coinTotal = 0;
    public float ballVelMax = 6f;
    public float ballSizeMax = 5f;
    public new string name;
    public int ballCurrentLevel = 1;
    public bool canMove = true;

    private BallModule self;

    public Material[] levelMatrials = new Material[5];

    /// <summary>
    /// Start is called on the frame when a script is enabled just before
    /// any of the Update methods is called the first time.
    /// </summary>
    void Start()
    {
        self = gameObject.GetComponent<BallModule>();
        gameObject.GetComponent<Renderer>().material = levelMatrials[ballCurrentLevel - 1];
        ballSizeCurrent = ballSizeInit + 5 * GM.Instance.ballSizeStep * (ballCurrentLevel - 1);
        gameObject.transform.localScale += new Vector3(1, 1, 1) * (ballSizeCurrent - 1) * GM.Instance.ballSizeStep;
    }

    private void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.tag == "obstacle")
        {
            Obst obst = (Obst)col.gameObject.GetComponent<Obst>();
            if (ballCurrentLevel < obst.obstLevel)
            {
                GM.Instance.levelDown++;
                LevelInit();
            }
            else if (ballCurrentLevel >= obst.obstLevel)
            {
                LevelUp();
                Destroy(col.gameObject);
            }
        }
        if (col.gameObject.tag == "enemy")
        {
            BallModule enemy = (BallModule)col.gameObject.GetComponent<BallModule>();
            // if (ballCurrentLevel < enemy.ballCurrentLevel)
            // {
            //     GM.Instance.smallerInCollision++;
            //     LevelDown();
            //     int CoinNum = 0;
            //     BallBounce(gameObject);
            //     if (coinTotal > 5)
            //     {
            //         CoinNum = 5;
            //         coinTotal -= 5;
            //     }
            //     else
            //     {
            //         CoinNum = coinTotal;
            //         coinTotal = 0;
            //     }
            //     enemy.SpreadCoins(CoinNum);
            // }
            if (ballCurrentLevel > enemy.ballCurrentLevel)
            {
                GM.Instance.biggerInCollision++;
                enemy.LevelDown();
                int CoinNum = 0;
                BallBounce(col.gameObject);
                if (enemy.coinTotal > 5)
                {
                    CoinNum = 5;
                    enemy.coinTotal -= 5;
                }
                else
                {
                    CoinNum = enemy.coinTotal;
                    enemy.coinTotal = 0;
                }
                enemy.SpreadCoins(CoinNum);
            }
            GM.Instance.totalCollision++;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "coin")
        {
            Destroy(other.gameObject);
            coinTotal++;
        }
    }

    private void BallBounce(GameObject other)
    {
        Vector3 positionDelta = gameObject.transform.position - other.transform.position;
        positionDelta.y = 0f;
        other.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
        other.GetComponent<playerMovement>().xVel = 0;
        other.GetComponent<playerMovement>().zVel = 0;
        other.GetComponent<Rigidbody>().ResetInertiaTensor();
        playerMovement.playerBall.canMove = false;
        other.GetComponent<Rigidbody>().AddForce(-positionDelta * 500f);
        StartCoroutine(resumeMovement(0.45f));
    }

    IEnumerator resumeMovement(float time)
    {
        yield return new WaitForSeconds(time);
        playerMovement.playerBall.canMove = true;
        // playerMovement.xVel = 0;
        // playerMovement.zVel = 0;
    }

    private void LevelUp()
    {
        if (ballCurrentLevel < GM.Instance.MaxLevel)
        {
            ballCurrentLevel++;
            gameObject.GetComponent<Renderer>().material = levelMatrials[ballCurrentLevel - 1];
            ballSizeCurrent = ballSizeInit + 5 * GM.Instance.ballSizeStep * (ballCurrentLevel - 1);
            gameObject.transform.localScale += new Vector3(1, 1, 1) * GM.Instance.ballSizeStep;
            GM.Instance.levelUp++;
        }
    }

    private void LevelDown()
    {
        if (ballCurrentLevel > 1)
        {
            ballCurrentLevel--;
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
        if (obj.GetType() == typeof(BallModule))
        {
            return ((BallModule)obj).coinTotal - coinTotal;
        }
        else
        {
            return -1;
        }
    }

    public void SpreadCoins(int num)
    {
        GM.Instance.SpreadCoins(gameObject.transform.position, num);
    }
}