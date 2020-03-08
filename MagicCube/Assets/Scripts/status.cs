using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class status : MonoBehaviour
{
    [SerializeField] Text coinText;
    [SerializeField] Text timer;

    [SerializeField] Text score1;
    [SerializeField] Text score2;
    [SerializeField] Text score3;

    [SerializeField] Text player1;
    [SerializeField] Text player2;
    [SerializeField] Text player3;
    // 显示分数
    void Update()
    {
        coinText.text = "" + GM.coinTotal;
        timer.text = "" + GM.counterTotal;
        score1.text = "" + scoreManager.scoreTotal;
        score2.text = "" + scoreManager.scoreTotal;
        score3.text = "" + scoreManager.scoreTotal;

        player1.text = "1." + GameObject.Find("Player");
        player2.text = "2." + GameObject.Find("Player");
        player3.text = "3." + GameObject.Find("Player");

    }
}
