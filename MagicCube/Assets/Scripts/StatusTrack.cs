using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Pun.UtilityScripts;

namespace Com.MyCompany.MyGame
{

    public class StatusTrack : MonoBehaviour
    {
        private playerMovement target;

        int current_coin;
        [SerializeField] Text coinText;
        // Start is called before the first frame update
        void Start()
        {
            coinText.text = "0";
        }

        // Update is called once per frame
        void Update()
        {
            /*            if(PhotonNetwork.LocalPlayer!=null && target.coinsum != current_coin)
                        {
                            current_coin = target.coinsum;
                            PhotonNetwork.LocalPlayer.SetScore(target.coinsum);
                        }*/

            playerMovement player = (playerMovement)GetComponent<playerMovement>();
            //Obst obst = (Obst)col.gameObject.GetComponent<Obst>();


            coinText.text =player.coinsum.ToString();
            if (target !=null && coinText != null)
            {
                //PhotonNetwork.LocalPlayer.SetScore(target.coinsum);
            }


        }
    }


}
