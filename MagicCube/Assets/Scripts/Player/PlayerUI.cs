using UnityEngine;
using UnityEngine.UI;


using System.Collections;


namespace Com.MyCompany.MyGame
{
    public class PlayerUI : MonoBehaviour
    {
        #region Private Fields


        [Tooltip("UI Text to display Player's Name")]
        [SerializeField]
        private Text playerNameText;


        [Tooltip("UI Slider to display Player's Health")]
        [SerializeField]
        private Slider playerLevelSlider;

        [Tooltip("UI Text to display Player's Name")]
        [SerializeField]
        private Text coinHint;

        [Tooltip("UI Text to display Player's Name")]
        [SerializeField]
        private Text coinNum;

        [Tooltip("Pixel offset from the player target")]
        [SerializeField]
        private Vector3 screenOffset = new Vector3(0f, 30f, 0f);

        //[SerializeField]
        private playerMovement target;
       
        float characterControllerHeight = 0f;
        Transform targetTransform;
        Renderer targetRenderer;
        CanvasGroup _canvasGroup;
        Vector3 targetPosition;

        #endregion


        #region MonoBehaviour Callbacks

        void Awake()
        {
            this.transform.SetParent(GameObject.Find("Canvas").GetComponent<Transform>(), false);
            _canvasGroup = this.GetComponent<CanvasGroup>();
       
        }

        void Update()
        {

            // Reflect the Player Health
            if (playerLevelSlider != null)
            {
                if (target.ballCurrentLevel == 5)
                    playerLevelSlider.value = 1;
                else
                    playerLevelSlider.value = target.ballCurrentLevel / 5f;

            }

            // Reflect the Player Coins
            if (coinNum != null)
            {
                coinNum.text = target.coinsum.ToString();

            }

            if (target == null)
            {
                Destroy(this.gameObject);
                return;
            }
        }

        void LateUpdate()
        {
            // Do not show the UI if we are not visible to the camera, thus avoid potential bugs with seeing the UI, but not the player itself.
            if (targetRenderer != null)
            {
                this._canvasGroup.alpha = targetRenderer.isVisible ? 1f : 0f;
            }


            // #Critical
            // Follow the Target GameObject on screen.
            if (targetTransform != null)
            {
                targetPosition = targetTransform.position;
                targetPosition.y += characterControllerHeight;
                
                this.transform.position = Camera.main.WorldToScreenPoint(targetPosition) + screenOffset;
            }
        }

        #endregion


        #region Public Methods

        //这边不显示调用，而是在玩家初始化的时候，用远程RPC调用初始化这个prefab
        //使得playerUI中脚本中target绑定为玩家的值。
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
            CharacterController characterController = _target.GetComponent<CharacterController>();
            // Get data from the Player that won't change during the lifetime of this Component
            if (characterController != null)
            {
                characterControllerHeight = characterController.height;
            }
            if (playerNameText != null)
            {
                playerNameText.text = target.photonView.Owner.NickName;
            }

            if (coinHint != null)
            {
                coinHint.text = "coins:";

            }


        }


        #endregion


    }
}