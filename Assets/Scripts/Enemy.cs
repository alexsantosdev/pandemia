using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : EnemyController
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    protected override void Update()
    {
        base.Update();

        if (Mathf.Abs(targetDistance) < attackDistance)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position,speed * Time.deltaTime);
            MoveAnimation(true);
        }
        else
        {
            MoveAnimation(false);
        }
    }

    private void FixedUpdate()
    {
        if(targetDistance > 0)
        {
            // rigidBody.velocity = new Vector2(-speed, rigidBody.velocity.y);
            transform.eulerAngles = new Vector3(0f, 180f, 0f);
        }
        else
        {
            // rigidBody.velocity = new Vector2(speed, rigidBody.velocity.y);
            transform.eulerAngles = new Vector3(0f, 0f, 0f);
        }
    }
}
