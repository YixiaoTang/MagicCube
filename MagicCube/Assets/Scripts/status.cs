using System;
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

    private BallModule player;
    // 显示分数
    void Update()
    {
        coinText.text = "" + GM.Instance.coinTotal;
        timer.text = "" + GM.Instance.counterTotal;

        player = GameObject.FindGameObjectWithTag("Player").GetComponent<BallModule>();
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("enemy");
        BallModule enemy1 = enemies[0].GetComponent<BallModule>();
        BallModule enemy2 = enemies[1].GetComponent<BallModule>();
        List<BallModule> lst = new List<BallModule> { player, enemy1, enemy2 };
        lst.Sort();

        setText(rankText1, "1." + lst[0].name, lst[0]);
        setText(rankText2, "2." + lst[1].name, lst[1]);
        setText(rankText3, "3." + lst[2].name, lst[2]);

        setText(scoreText1, "" + lst[0].coinTotal, lst[0]);
        setText(scoreText2, "" + lst[1].coinTotal, lst[1]);
        setText(scoreText3, "" + lst[2].coinTotal, lst[2]);

    }
    private void setText(Text text, string content, BallModule ball)
    {
        if(ball == player)
        {
            text.color = Color.yellow;
        }
        else
        {
            text.color = Color.black;
        }
        text.text = content;
    }
}
