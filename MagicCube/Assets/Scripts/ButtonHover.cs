using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ButtonHover: MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{

    public Text theText;

    public void OnPointerEnter(PointerEventData eventData)
    {
        theText.color = new Color(255f / 255f, 45f / 255f, 140f / 255f); //Or however you do your color
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        theText.color = new Color(50f / 255f, 50f / 255f, 50f / 255f); //Or however you do your color
    }
}
