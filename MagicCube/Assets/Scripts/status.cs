using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
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
        List<BallModule> lst = GM.Instance.getPlayers();
        lst.Sort();

        setText(rankText1, "1." + lst[0].name, lst[0]);
        setText(scoreText1, "" + lst[0].coinTotal, lst[0]);
        if(lst.Count > 1)
        {
            setText(rankText2, "2." + lst[1].name, lst[1]);
            setText(scoreText2, "" + lst[1].coinTotal, lst[1]);
        }
        if (lst.Count > 2)
        {
            setText(rankText3, "3." + lst[2].name, lst[2]);
            setText(scoreText3, "" + lst[2].coinTotal, lst[2]);
        }
        

    }
    private void setText(Text text, string content, BallModule ball)
    {
        if(ball == GM.Instance.getPlayer())
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
