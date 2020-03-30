using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowNameBar : MonoBehaviour
{
    public GameObject TrackObject;
    public Vector3 Offset;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void FixedUpdate()
    {
        gameObject.transform.position = Camera.main.WorldToScreenPoint(TrackObject.transform.position) + Offset;
    }
}
