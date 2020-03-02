using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveRandomly : MonoBehaviour
{
    private float rand1;
    private float rand2;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        rand1 = Random.Range(-2, 2);
        rand2 = Random.Range(-2, 2);
    }
}
