using UnityEngine;
using System.Collections;

public class moveCam : MonoBehaviour {

    public GameObject player;

    private Vector3 offset;

    void Start ()
    {
        //摄像头的transform.position直接减去绑定的GameObject的位置
        offset = transform.position - player.transform.position;
    }
    
    void LateUpdate ()
    {
        //摄像头 
        transform.position = player.transform.position + offset;
    }



}