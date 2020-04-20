using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Com.MyCompany.MyGame
{
    public class PlayerStatus : MonoBehaviour
    {


        [SerializeField]
        private GameObject coinTracKBG;


        [SerializeField]
        private Text coinTracker;

        private playerMovement target;

        Transform targetTransform;
        Renderer targetRenderer;
        CanvasGroup _canvasGroup;
        Vector3 targetPosition;

        void Awake()
        {
            this.transform.SetParent(GameObject.Find("Canvas").GetComponent<Transform>(), false);
            _canvasGroup = this.GetComponent<CanvasGroup>();

        }


        // Update is called once per frame
        void Update()
        {
            if (coinTracker != null)
            {
                coinTracker.text = target.coinsum.ToString();

            }

            if (target == null)
            {
                Destroy(this.gameObject);
                return;
            }
        }


        public void SetTarget(playerMovement _target)
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
        }
    }

}
