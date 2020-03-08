using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.SceneManagement;

public class GM : MonoBehaviour
{
    int xRange = 45, zRange = 50;

    float rand1, rand2;

    public static float initBallSize = 1f, ballSizeCurrent = 1f;   //current ballSize

    public static float initBallVel = 1f, ballVel = 1f;    // ??

    public static float ballVelMax = 8f, ballSizeMax = 4f;

    //================================== configuration ===================================
    public static int obst1Num = 100;
    public static int obst2Num = 10;
    public static int obst3Num = 10;
    public static int obst4Num = 10;
    public static int obst5Num = 20;
    public static int coinNum = 1000;
    public static float timeTotal = 60 * 30f; // 60 frames/sec * secs


    //================================== Statistics ===================================
    public static int coinTotal = 0;
    static float countdown = 60;
    public static int counterTotal;


    [SerializeField] Transform coinObj;
    /// static GameObject mainCamera;
    [SerializeField] int[] obstNumList = { obst1Num, obst2Num, obst3Num, obst4Num, obst5Num };
    [SerializeField] Transform[] obstList = {};

    ballModule ball1 = new ballModule();
    ballModule ball2 = new ballModule();

    // [SerializeField] ballModule[] ballList = {};
    public List<ballModule> ballList = new List<ballModule>();

    void Start()
    {
        remoteSetting();
        Application.targetFrameRate = 60;
        generateStaffs();
        remoteSetting();

        InvokeRepeating("generateStaffs", 0, 5f);

        ballList.Add(ball1);
        ballList.Add(ball2);
    }

    public void generateStaffs()
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
            ballList[id].ballSizeCurrent += 0.1f;
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
