using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Status : MonoBehaviour
{
    [SerializeField] Text coinText;
    [SerializeField] Text timer;

    [SerializeField] Text scoreText1;
    [SerializeField] Text scoreText2;
    [SerializeField] Text scoreText3;

    [SerializeField] Text rankText1;
    [SerializeField] Text rankText2;
    [SerializeField] Text rankText3;

    // 显示分数
    void Update()
    {
        coinText.text = "" + GM.Instance.coinTotal;
        timer.text = "" + GM.Instance.counterTotal;

        rankText1.text = "1." + GameObject.FindGameObjectWithTag("Player");
        rankText2.text = "2." + GameObject.FindGameObjectWithTag("enemy");
        rankText3.text = "3." + GameObject.FindGameObjectsWithTag("enemy");

        scoreText1.text = "" + scoreManager.scoreTotal;
        scoreText2.text = "" + scoreManager.enemyScoreTotal;
        scoreText3.text = "" + scoreManager.enemyScoreTotal;
    }
}
