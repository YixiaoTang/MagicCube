﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class effects : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    // 让硬币旋转？
    void Update()
    {
        if(gameObject.tag == "coin")
        {
            transform.Rotate(0, 0, 3);
        }
    }
}
