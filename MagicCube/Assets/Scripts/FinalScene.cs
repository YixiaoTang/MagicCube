using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FinalScene : MonoBehaviour
{
    // Start is called before the first frame update

    [SerializeField] Text player1;
    [SerializeField] Text player2;
    [SerializeField] Text player3;
    public BallModule enemy;
    void Start()
    {
        player1.text = "1.Player255  " + GM.Instance.coinTotal;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
