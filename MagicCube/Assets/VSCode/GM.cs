using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class GM : MonoBehaviour
{
    public static float vertVel = 0;
    public static int coinTotal = 0;
    public static float timeTotal = 0;
    public static float zVelAdj = 1;
    public static string lvlCompStatus = "";
    public float waitToLoad = 0;
    public float zScenePos = 62;
    public Transform bbNoPit;
    public Transform bbPitMid;
    public Transform coinObj;
    public Transform obstObj;
    public Transform capsuleObj;
    public int randNum;

    // Start is called before the first frame update
    void Start()
    {
        Instantiate(bbNoPit, new Vector3(0, 2.28f, 42), bbNoPit.rotation);
        Instantiate(bbNoPit, new Vector3(0,2.28f,46), bbNoPit.rotation);
        Instantiate(bbNoPit, new Vector3(0, 2.28f, 50), bbNoPit.rotation);
        Instantiate(bbPitMid, new Vector3(0, 2.28f, 54), bbPitMid.rotation);
        Instantiate(bbNoPit, new Vector3(0, 2.28f, 58), bbNoPit.rotation);
        
        
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
            waitToLoad += Time.deltaTime;
        }
        if(waitToLoad > 1)
        {
            SceneManager.LoadScene("levelcomp");
        }
    }
}
