using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class startManager : MonoBehaviour
{

    private void Start()
    {
        Handheld.PlayFullScreenMovie("C:\\Users\\yixia\\Documents\\oCam\\1.mp4");
    }
    public void Begin()
    {
        SceneManager.LoadScene("round1");
    }
}
