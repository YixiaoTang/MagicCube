using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GM : MonoBehaviour
{
    //public static Camera mainCamera;

    private int xRange = 50;
    private int zRange = 50;

    private float rand1;
    private float rand2;

    public static float initBallSize = 1f;   //初始球大小
    public static float ballSize = 1f;

    public static float initBallVel = 1f;    // ??
    public static float ballVel = 2f;

    public static float ballVelMax = 4f;
    public static float ballSizeMax = 4f;

    public static int coinTotal = 0;

    public Transform coinObj;
    public Transform obstObj;
    public static GameObject mainCamera;

    public GameObject coinBar;

    public static float timeTotal = 60 * 0.5f;

    // Start is called before the first frame update
    void Start()
    {
        //生成硬币
        for(int i = 0; i < 1000; i++)
        {
            rand1 = Random.Range(-xRange, xRange);
            rand2 = Random.Range(-zRange, zRange);
            Instantiate(coinObj, new Vector3(rand1, 1, rand2), coinObj.rotation);
        }
        //生成柱子
        for (int i = 0; i < 50; i++)
        {
            rand1 = Random.Range(-xRange, xRange);
            rand2 = Random.Range(-zRange, zRange);
            Instantiate(obstObj, new Vector3(rand1, 1, rand2), obstObj.rotation);
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
}
