﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class stats : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(gameObject.name == "coinsTxt")
        {
            GetComponent<TextMesh>().text = "Coin : " + GM.Instance.coinTotal;
        }
        if(gameObject.name == "timeTxt")
        {
            GetComponent<TextMesh>().text = "Time : " + GM.Instance.timeTotal;
        }
        if (gameObject.name == "runstatus")
        {
            GetComponent<TextMesh>().text = GM.Instance.lvlCompStatus;
        }
    }
}
