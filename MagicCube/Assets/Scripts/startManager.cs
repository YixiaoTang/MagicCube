﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class startManager : MonoBehaviour
{
    public void Begin()
    {
        SceneManager.LoadScene("round1");
    }
}
