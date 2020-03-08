using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class status : MonoBehaviour
{
    [SerializeField] Text coinText;
    [SerializeField] Text timer;
    // 显示分数
    void Update()
    {
        coinText.text = "" + GM.coinTotal;
        timer.text = "" + GM.counterTotal;
    }
}
