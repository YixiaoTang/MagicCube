﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.SceneManagement;

public class GM : MonoBehaviour
{
    /**
     * Singleton model. Everytime want to use the GM value of function, the way to call is GM.Instance first. 
     */
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

    // Public variables. All these variables can be changed easily in Unity Inspector.
    public int xRange = 30;
    public int zRange = 30;
    public float initBallVel = 1f, ballVel = 1f;    // ??
    public float ballVelMax = 8f, ballSizeMax = 4f;
    public float ballSizeStep = 0.3f; // The step for the ball size change every time.
    public int fakePlayerNum = 3;
    public int MaxLevel = 5;

    //================================== configuration ===================================
    public static int obst1Num = 50;
    public static int obst2Num = 10;
    public static int obst3Num = 10;
    public static int obst4Num = 10;
    public static int obst5Num = 5;
    public static int coinNum = 100;
    public static float timeTotal = 60 * 30f; // 60 frames/sec * secs


    //================================== Statistics ===================================
    public int coinTotal = 0; // The number of player coin collection.
    static float countdown = 60;
    public int counterTotal;


    //private variables
    private float rand1, rand2;

    [SerializeField] Transform coinObj;
    /// static GameObject mainCamera;
    [SerializeField] int[] obstNumList = { obst1Num, obst2Num, obst3Num, obst4Num, obst5Num };
    [SerializeField] Transform[] obstList = {};

    

    // [SerializeField] ballModule[] ballList = {};
    public List<BallModule> ballList = new List<BallModule>();



    void Start()
    {
        //RemoteSetting();
        Application.targetFrameRate = 60;
        GenerateStaffs();
        RemoteSetting();

        // InvokeRepeating("generateStaffs", 0, 5f);
        for(int i = 0; i < fakePlayerNum; i++)
        {
            ballList.Add(new BallModule());
        }
        
    }

    public void GenerateStaffs()
    {
        for (int t = 0; t < obstList.Length; t++)
        {
            for (int n = 0; n < obstNumList[t]; n++)
            {
                Spawn(obstList[t]);
            }
        }

        for (int i = 0; i < coinNum; i++)
        {
            Spawn(coinObj);
        }
    }

    public void Spawn(Transform obj)
    {
        rand1 = Random.Range(-xRange, xRange);
        rand2 = Random.Range(-zRange, zRange);
        Instantiate(obj, new Vector3(rand1, 1, rand2), obj.rotation);
    }

    public void OnCollection(int id)
    {
        // id or the object in ballList, now hardcoded
        if (ballList[id].ballSizeCurrent < ballSizeMax)
        {
            ballList[id].ballSizeCurrent += ballSizeStep;
        }
    }

    void Update()
    {

        countdown -= Time.deltaTime;
        counterTotal = Mathf.FloorToInt(countdown);

        if (counterTotal <= 0)
        {
            SceneManager.LoadScene("Round Finish");
        }
    }

    public static float getBallSizeFactor()
    {
        return 1f;
    }

    private void RemoteSetting()
    {
        UnityEngine.RemoteSettings.ForceUpdate();
        coinNum = UnityEngine.RemoteSettings.GetInt("coinNum");
        obst1Num = UnityEngine.RemoteSettings.GetInt("Obst1Num");
        obst2Num = UnityEngine.RemoteSettings.GetInt("Obst2Num");
        timeTotal = UnityEngine.RemoteSettings.GetFloat("TimeTotal");
    }

    public void Level1CompleteEvent()
    {
        AnalyticsEvent.Custom("level 1 Complete", new Dictionary<string, object>
        {
            { "Total Coin", coinTotal }
        });
    }
}
