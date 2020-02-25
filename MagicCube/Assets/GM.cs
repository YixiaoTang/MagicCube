using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.SceneManagement;

public class GM : MonoBehaviour
{
    //public static Camera mainCamera;

    private int xRange = 50;
    private int zRange = 50;

    private float rand1;
    private float rand2;

    public static float initBallSize = 1f;
    public static float ballSize = 1f;

    public static float initBallVel = 1f;
    public static float ballVel = 2f;

    public static float ballVelMax = 4f;
    public static float ballSizeMax = 4f;

    //================================== configuration ===================================
    public static int obst1Num = 25;
    public static int obst2Num = 25;
    public static int obst3Num = 25;
    public static int obst4Num = 25;
    public static int obst5Num = 25;
    public static int coinNum = 1000;
    public static float timeTotal = 60 * 2f; // 60 frames/sec * secs


    //================================== Statistics ===================================
    public static int coinTotal = 0;

    public Transform coinObj;
    public Transform obstObj;
    public static GameObject mainCamera;

    public GameObject coinBar;

    // Start is called before the first frame update
    void Start()
    {
        remoteSetting();
        Application.targetFrameRate = 60;
        
        for (int i = 0; i < obst1Num; i++)
        {
            rand1 = Random.Range(-xRange, xRange);
            rand2 = Random.Range(-zRange, zRange);
            Instantiate(obstObj, new Vector3(rand1, 1, rand2), obstObj.rotation);
        }
        for (int i = 0; i < coinNum; i++)
        {
            rand1 = Random.Range(-xRange, xRange);
            rand2 = Random.Range(-zRange, zRange);
            Instantiate(coinObj, new Vector3(rand1, 1, rand2), coinObj.rotation);
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        if (ballSize < ballSizeMax)
        {
            ballSize += 0.01f;
        }

        if (ballVel < ballVelMax)
        {
            ballVel += 0.01f;
        }



        //timeTotal -= 1;
        //if (timeTotal == 0)
        //{
        //    SceneManager.LoadScene("finish");
        //}
    }

    public static float getBallSizeFactor()
    {
        return 1f;
    }

    private void remoteSetting()
    {
        UnityEngine.RemoteSettings.ForceUpdate();
        coinNum = UnityEngine.RemoteSettings.GetInt("coinNum");
        obst1Num = UnityEngine.RemoteSettings.GetInt("Obst1Num");
        obst2Num = UnityEngine.RemoteSettings.GetInt("Obst2Num");
        timeTotal = UnityEngine.RemoteSettings.GetFloat("TimeTotal");
    }

    public static void level1CompleteEvent()
    {
        AnalyticsEvent.Custom("level 1 Complete", new Dictionary<string, object>
        {
            { "Total Coin", coinTotal }
        });
    }
}
