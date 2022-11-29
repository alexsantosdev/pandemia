using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayPharmacy : MonoBehaviour
{
    public GameObject shopPanel;

    private void OnTriggerEnter2D(Collider2D other)
    {
        PlayerController player = other.GetComponent<PlayerController>();
        if (player != null)
        {
            shopPanel.SetActive(true);
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        PlayerController player = other.GetComponent<PlayerController>();
        if (player != null)
        {
            shopPanel.SetActive(false);
        }
    }
}
