using System.Collections;
using System.Collections.Generic;


using UnityEngine;
using UnityEngine.UI;

using Photon.Pun;
using Photon.Realtime;

namespace Com.MyCompany.MyGame
{
    public class ScoreBoard : MonoBehaviour
    {




        [SerializeField]
        private  Text Player1;
        [SerializeField]
        private Text Player2;
        [SerializeField]
        private Text Player3;
        [SerializeField]
        private  Text Player4;
        [SerializeField]
        private Text Score1;
        [SerializeField]
        private  Text Score2;
        [SerializeField]
        private  Text Score3;
        [SerializeField]
        private  Text Score4;

        private playerMovement target;


        public int con = 1;
        // Start is called before the first frame update

        float characterControllerHeight = 0f;
        Transform targetTransform;
        Renderer targetRenderer;
        CanvasGroup _canvasGroup;
        Vector3 targetPosition;

        void Awake()
        {
            this.transform.SetParent(GameObject.Find("Canvas").GetComponent<Transform>(), false);
            _canvasGroup = this.GetComponent<CanvasGroup>();

        }
        void Start()
        {

        }
        // Update is called once per frame
        public void Update()
        {

            foreach (Player netPlayer in PhotonNetwork.PlayerList)
            {
/*                if (netPlayer.CustomProperties.ContainsKey("score"))
                {
                    print("netplayername is " + netPlayer.NickName + " and its score is" + netPlayer.CustomProperties["score"]);
                    if (Player1 != null) Player1.text = netPlayer.NickName;
                    if (Score1 != null) Score1.text = netPlayer.CustomProperties["score"].ToString();*//*
                }*/
                if (netPlayer.CustomProperties.ContainsKey("score"))
                {
                    switch (con)
                    {
                        case 1:
                            Player1.text = netPlayer.NickName;
                            Score1.text = netPlayer.CustomProperties["score"].ToString();
                            break;
                        case 2:
                            Player2.text = netPlayer.NickName;
                            Score2.text = netPlayer.CustomProperties["score"].ToString();
                            break;
                        case 3:
                            Player3.text = netPlayer.NickName;
                            Score3.text = netPlayer.CustomProperties["score"].ToString();
                            break;
                        case 4:
                            Player4.text = netPlayer.NickName;
                            Score4.text = netPlayer.CustomProperties["score"].ToString();
                            break;
                    }
                    con++;

                }


            }
            con = 1;
            if (target == null)
            {
                Destroy(this.gameObject);
                return;
            }
        }

        public void SetBoardTarget(playerMovement _target)
        {
            if (_target == null)
            {
                Debug.LogError("<Color=Red><a>Missing</a></Color> PlayMakerManager target for PlayerUI.SetTarget.", this);
                return;
            }
            // Cache references for efficiency
            target = _target;
            targetTransform = this.target.GetComponent<Transform>();
            targetRenderer = this.target.GetComponent<Renderer>();
            CharacterController characterController = _target.GetComponent<CharacterController>();
            // Get data from the Player that won't change during the lifetime of this Component
            if (characterController != null)
            {
                characterControllerHeight = characterController.height;
            }
        }

    }
}

