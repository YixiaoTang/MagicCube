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
    void Start()
    {
        List<BallModule> lst = GM.Instance.getPlayers();
        lst.Sort();

        setText(player1, "1." + lst[0].name + ": " + lst[0].coinTotal, lst[0]);
        if (lst.Count > 1)
        {
            setText(player2, "1." + lst[1].name + ": " + lst[1].coinTotal, lst[1]);
        }
        if (lst.Count > 2)
        {
            setText(player3, "1." + lst[2].name + ": " + lst[2].coinTotal, lst[2]);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void EndGame()
    {
        Application.Quit();
    }


    private void setText(Text text, string content, BallModule ball)
    {
        if (ball == GM.Instance.getPlayer())
        {
            text.color = Color.yellow;
        }
        else
        {
            text.color = Color.black;
        }
        text.text = content;
    }
}
