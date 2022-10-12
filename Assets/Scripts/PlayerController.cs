using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{
    public float speed;
    public float jumpForce;
    public float damageTime = 1f;
    public AudioClip jumpSound;
    public AudioClip damageSound;

    public GameObject damageParticle;

    public bool isJumping;
    public bool isDead;
    private Rigidbody2D rigidBody;

    private Animator animator;

    public Joystick joystick;

    private int health;
    private int maxHealth;
    private float fireRate = 0.5f;
    private bool tookDamage = false;

    GameManager gameManager;

    void Start()
    {
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
        Jump();
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
            StartCoroutine(TookDamage());
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
        fireRate = gameManager.fireRate;
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
            StartCoroutine(TookDamage());
        }
    }

    IEnumerator TookDamage()
    {
        tookDamage = true;
        health --;
        Instantiate(damageParticle, transform.position, transform.rotation);
        AudioController.audioInstance.PlayOneShot(damageSound);
        UpdateHealthUI();
        if(health <= 0)
        {
            isDead = true;
            Invoke("ReloadScene", 2f);
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

    public void HealLife(int cureQuantity)
    {
        health += cureQuantity;
        if (health > maxHealth)
        {
            health = maxHealth;
        }
        UpdateHealthUI();
    }

    void ReloadScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
