using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class GM : MonoBehaviour
{
    public float vertVel = 0;
    public int coinTotal = 0;
    public float timeTotal = 0;
    public float zVel = 2;
    public float scaleChange = 0.003f;
    public string lvlCompStatus = "";
    public float snowBallSizeCoefficient = 1f;
    public float waitToLoad = 0;
    public float zScenePos = 62;
    public Transform bbNoPit;
    public Transform bbPitMid;
    public Transform coinObj;
    public Transform obstObj;
    public Transform capsuleObj;
    public static float initSnowBallSizeCoefficient;
    public int randNum;
    public static int leftLineBondary = -1;
    public static int rightLineBondary = 1;

    static GM instance;

    public static GM Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType(typeof(GM)) as GM;
                if (instance == null)
                {
                    GameObject obj = new GameObject();
                    instance = (GM)obj.AddComponent(typeof(GM));
                }
            }
            return instance;
        }
    }


    // Start is called before the first frame update
    void Start()
    {
        Instantiate(bbNoPit, new Vector3(0, 2.28f, 42), bbNoPit.rotation);
        Instantiate(bbNoPit, new Vector3(0,2.28f,46), bbNoPit.rotation);
        Instantiate(bbNoPit, new Vector3(0, 2.28f, 50), bbNoPit.rotation);
        Instantiate(bbNoPit, new Vector3(0, 2.28f, 54), bbNoPit.rotation);
        Instantiate(bbNoPit, new Vector3(0, 2.28f, 58), bbNoPit.rotation);
        initSnowBallSizeCoefficient = snowBallSizeCoefficient;
    }

    // Update is called once per frame
    void Update()
    {
        if (zScenePos < 120)
        {
            randNum = Random.Range(0, 10);
            if(randNum < 3)
            {
                Instantiate(coinObj, new Vector3(-1, 3, zScenePos), coinObj.rotation);
            }
            if (randNum > 7)
            {
                Instantiate(coinObj, new Vector3(1, 3, zScenePos), coinObj.rotation);
            }
            if (randNum == 4)
            {
                Instantiate(obstObj, new Vector3(1, 3, zScenePos), obstObj.rotation);
            }
            if (randNum == 5)
            {
                Instantiate(obstObj, new Vector3(0, 3, zScenePos), obstObj.rotation);
            }
            Instantiate(bbNoPit, new Vector3(0, 2.28f, zScenePos), bbNoPit.rotation);
            zScenePos += 4;
        }
        timeTotal += Time.deltaTime;
        if(lvlCompStatus == "Fail")
        {
            waitToLoad = getVelocity();
        }
        if(waitToLoad > 1)
        {
            SceneManager.LoadScene("levelcomp");
        }
        if(snowBallSizeCoefficient < 4)
        {
            snowBallSizeCoefficient += 0.01f;
        }
        if(zVel < 8)
        {
            zVel = getVelocity();
        }
    }

    public float getVelocity()
    {
        return 1 * snowBallSizeCoefficient;
    } 
    public float getSnowBallSizeCoefficient()
    {
        return (snowBallSizeCoefficient - 1f)*0.2f;
    }
}
