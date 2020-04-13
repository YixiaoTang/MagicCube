using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class startManager : MonoBehaviour
{

    private void Start()
    {
        bool result = Handheld.PlayFullScreenMovie("C:\\Users\\yixia\\Documents\\oCam\\1.mp4");
        print(result);
    }
    public void Begin()
    {
        SceneManager.LoadScene("round1");
    }
}
