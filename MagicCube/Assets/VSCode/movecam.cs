using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movecam : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        float zVel = GameObject.Find("Sphere").GetComponent<Rigidbody>().velocity.z;
        GetComponent<Rigidbody>().velocity = new Vector3(0, GM.Instance.vertVel, zVel);
    }
}
