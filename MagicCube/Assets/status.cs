using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class status : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(gameObject.name == "Coin Num")
        {
            GetComponent<TextMesh>().text = "Coins: " + GM.coinTotal;
        }
    }
}
