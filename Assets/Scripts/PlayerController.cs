using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float speed;
    public float jumpForce;
    public float damageTime = 1f;
    public AudioClip jumpSound;
    public AudioClip damageSound;

    public GameObject damageParticle;
    public GameObject shield;

    public bool isJumping;
    public bool isDead;
    public bool isProtected;
    private Rigidbody2D rigidBody;

    private Animator animator;

    public Joystick joystick;

    public GameObject gameOverText;
    private int health;
    private int maxHealth;
    private bool tookDamage = false;

    GameManager gameManager;

    public UIManager uIManager;

    void Start()
    {
        Time.timeScale = 1;
        rigidBody = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        gameManager = GameManager.gameManager;

        SetPlayerStatus();
        health = maxHealth;

        UpdateHealthUI();
    }

    void Update()
    {
        Move();
        ManageProtection();
        // Jump();
    }

    void Move()
    {
        Vector3 movement = new Vector3(joystick.Horizontal, 0f, 0f);
        transform.position += movement * Time.deltaTime * speed;

        if (joystick.Horizontal > 0f)
        {
            animator.SetBool("run", true);
            transform.eulerAngles = new Vector3(0f, 0f, 0f);
        }

        if (joystick.Horizontal < 0f)
        {
            animator.SetBool("run", true);
            transform.eulerAngles = new Vector3(0f, 180f, 0f);
        }

        if (joystick.Horizontal == 0f)
        {
            animator.SetBool("run", false);
        }
    }

    void Jump()
    {
        float verticalMove = joystick.Vertical;

        if (verticalMove >= .5f && !isJumping)
        {
            rigidBody.AddForce(new Vector2(0f, jumpForce), ForceMode2D.Impulse);
            animator.SetBool("jump", true);
        }
    }

    public void HandleJump()
    {
        if(!isJumping)      
        {
            AudioController.audioInstance.PlayOneShot(jumpSound);

            rigidBody.AddForce(new Vector2(0f, jumpForce), ForceMode2D.Impulse);
            animator.SetBool("jump", true);
        }
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.layer == 8)
        {
            isJumping = false;
            animator.SetBool("jump", false);
        }

        if(collision.gameObject.CompareTag("Enemy") && !tookDamage)
        {
            StartCoroutine(TookDamage(1));
        }

        if(collision.gameObject.CompareTag("InfectedArea") && !tookDamage)
        {
            health = 0;
            isDead = true;
            uIManager.GameOver();
        }

        if(collision.gameObject.CompareTag("Coin"))
        {
            uIManager.ManageCoins();
        }

        // if(collision.gameObject.CompareTag("Support"))
        // {
        //     HealLife(2);
        // }
    }

    void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.layer == 8)
        {
            isJumping = true;
        }
    }

    public void SetPlayerStatus()
    {
        Weapon weapon = GetComponent<Weapon>();
        weapon.fireRate = gameManager.fireRate;
        maxHealth = gameManager.health;
    }

    void UpdateHealthUI()
    {
        FindObjectOfType<UIManager>().UpdateHealth(health);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.CompareTag("Enemy") && !tookDamage)
        {
            StartCoroutine(TookDamage(1));
        }
    }

    void ManageProtection()
    {
        Invoke("NoShield", GameManager.gameManager.shieldTime);
    }

    void NoShield()
    {
        isProtected = false;
        shield.SetActive(false);
    }

    IEnumerator TookDamage(int damage)
    {
        if(!isProtected)
        {
            tookDamage = true;
            health -= damage;
            Instantiate(damageParticle, transform.position, transform.rotation);
            AudioController.audioInstance.PlayOneShot(damageSound);
            UpdateHealthUI();
            if(health <= 0)
            {
                isDead = true;
                uIManager.GameOver();
                // gameOverText.SetActive(true);
                // Invoke("ReloadScene", 2f);
            }
            else
            {
                Physics2D.IgnoreLayerCollision(9, 10);
                for (float i = 0; i < damageTime; i += 0.2f)
                {
                    GetComponent<SpriteRenderer>().enabled = false;
                    yield return new WaitForSeconds(0.1f);
                    GetComponent<SpriteRenderer>().enabled = true;
                    yield return new WaitForSeconds(0.1f);
                }
                Physics2D.IgnoreLayerCollision(9, 10, false);
                tookDamage = false;
            }
        }
    }

    public void HealLife(int cureQuantity)
    {
        health += cureQuantity;
        if (health > maxHealth)
        {
            health = maxHealth;
        }
        UpdateHealthUI();
    }
}
