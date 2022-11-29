using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shield : MonoBehaviour
{
    private UIManager uIManager;
    private ProtectionSpawner protectionSpawner;
    // Start is called before the first frame update
    void Start()
    {
        uIManager = GameObject.FindObjectOfType(typeof(UIManager)) as UIManager;
        protectionSpawner = GameObject.FindObjectOfType(typeof(ProtectionSpawner)) as ProtectionSpawner;
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        PlayerController player = collision.gameObject.GetComponent<PlayerController>();

        if(collision.gameObject.CompareTag("Player"))
        {
            player.shield.SetActive(true);
            player.isProtected = true;
            Destroy(gameObject);
            protectionSpawner.masksInScene -= 1;
        }
    }
}
