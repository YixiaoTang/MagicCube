using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scoreManager : MonoBehaviour
{
    public static float scoreTotal;
    public static float enemyScoreTotal;

    // Update is called once per frame
    void Update()
    {
        scoreTotal = playerMovement.myInfo.ballSizeCurrent * 2.5f;
        enemyScoreTotal = moveRandomly.ballSize * 2.5f;
    }
}
