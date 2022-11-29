using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public float speed = 20f;
    public Rigidbody2D rb;
    public float destroyTime = 2f;

    GameManager gameManager;

    void Start()
    {
        Physics2D.IgnoreLayerCollision(11, 12);
        rb = GetComponent<Rigidbody2D>();
        rb.velocity = transform.right * speed;
        Destroy(gameObject, destroyTime);
        gameManager = GameManager.gameManager;
    }

    void OnTriggerEnter2D(Collider2D hitInfo)
    {
        Destroy(gameObject);
        
        Enemy otherEnemy = hitInfo.GetComponent<Enemy>();
        if(otherEnemy != null)
        {
            otherEnemy.TookDamage(gameManager.damage);
        }

    }
}
