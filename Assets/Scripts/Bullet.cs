using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public float speed = 20f;
    public int damage = 1;
    public Rigidbody2D rb;
    public float destroyTime = 1.5f;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        rb.velocity = transform.right * speed;
        Destroy(gameObject, destroyTime);
    }

    void OnTriggerEnter2D(Collider2D hitInfo)
    {
        Destroy(gameObject);
        
        Enemy otherEnemy = hitInfo.GetComponent<Enemy>();
        if(otherEnemy != null)
        {
            otherEnemy.TookDamage(damage);
        }

    }
}
