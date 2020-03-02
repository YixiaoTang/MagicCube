using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.SceneManagement;

public class GM : MonoBehaviour
{
    //public static Camera mainCamera;

    private int xRange = 45;
    private int zRange = 50;

    private float rand1;
    private float rand2;

    public static float initBallSize = 1f;   //初始球大小
    public static float ballSize = 1f;

    public static float initBallVel = 1f;    // ??
    public static float ballVel = 2f;

    public static float ballVelMax = 4f;
    public static float ballSizeMax = 4f;

    //================================== configuration ===================================
    public static int obst1Num = 10;
    public static int obst2Num = 10;
    public static int obst3Num = 10;
    public static int obst4Num = 10;
    public static int obst5Num = 20;
    public static int coinNum = 1000;
    public static float timeTotal = 60 * 30f; // 60 frames/sec * secs


    //================================== Statistics ===================================
    public static int coinTotal = 0;


    public Transform coinObj;
    public Transform obstObj1;
    public Transform obstObj2;
    public Transform obstObj3;
    public Transform obstObj4;
    public Transform obstObj5;

    int[] obstNumList = { obst1Num, obst2Num, obst3Num, obst4Num, obst5Num };
       

    public static GameObject mainCamera;

    public GameObject coinBar;

    // Start is called before the first frame update
    void Start()
    {
        Transform[] obstList = {obstObj1, obstObj2, obstObj3, obstObj4, obstObj5 };

        remoteSetting();
        Application.targetFrameRate = 60;

        for (int j = 0; j < obstNumList.Length; j++)
        {
            for (int i = 0; i < obstNumList[j]; i++)
            {
                rand1 = Random.Range(-xRange, xRange);
                rand2 = Random.Range(-zRange, zRange);
                Instantiate(obstList[j], new Vector3(rand1, (j + 1) / 2 + 1, rand2), obstList[j].rotation);
            }
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
            ballSize += 0.01f;  //球体积不断增加
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
