using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MedicKit : MonoBehaviour
{
    public int cureQuantity = 2;
    public int destructionTime;

    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject, destructionTime);
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        PlayerController player = collision.gameObject.GetComponent<PlayerController>();

        if(collision.gameObject.CompareTag("Player"))
        {
            player.HealLife(2);
            Destroy(gameObject);
        }
    }
}
