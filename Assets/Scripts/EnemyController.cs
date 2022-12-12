using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnemyController : MonoBehaviour
{
    public float health;
    private int initialHealth = 5;
    public float speed;
    public float attackDistance;
    public GameObject civilian;
    public GameObject coin;
    public GameObject medicKit;
    public GameObject virusParticle;
    public AudioClip cureSound;
    private UIManager uIManager;

    private float medicKitGenerationPercentage = 0.1f;
    private float virusCoinGenerationPercentage = 0.6f;

    protected Animator anim;
    protected bool facingRight = true;
    protected Transform target;
    protected float targetDistance;
    protected Rigidbody2D rigidBody;
    protected SpriteRenderer sprite;
    public Slider sliderEnemy;

    // protected BoxCollider2D boxCollider;

    // Start is called before the first frame update
    void Awake()
    {
        anim = GetComponent<Animator>();
        target = GameObject.FindWithTag("Player").transform;
        rigidBody = GetComponent<Rigidbody2D>();
        // boxCollider = GetComponent<BoxCollider2D>();
        sprite = GetComponent<SpriteRenderer>();
        Physics2D.IgnoreLayerCollision(10, 12);
        // int generateEnemyType = Random.Range(0, 2);
        uIManager = GameObject.FindObjectOfType(typeof(UIManager)) as UIManager;
    }

    void Start()
    {
        sliderEnemy.maxValue = initialHealth;
        UpdateInterface();
    }

    // Update is called once per frame
    protected virtual void Update()
    {
        targetDistance = transform.position.x - target.position.x;
    }

    public void TookDamage(float damage) 
    {
        health -= damage;

        if(health <= 0)
        {
            BeCured();
        }
        else
        {
            StartCoroutine(TookDamageCoRoutine());
            UpdateInterface();
        }
    }

    IEnumerator TookDamageCoRoutine()
    {
        sprite.color = Color.red;
        yield return new WaitForSeconds(0.1f);
        sprite.color = Color.white;
    }

    public void BeCured()
    {
        Instantiate(virusParticle, transform.position, Quaternion.identity);
        AudioController.audioInstance.PlayOneShot(cureSound);
        this.enabled = false;
        // rigidBody.isKinematic = true;
        // boxCollider.enabled = false;
        Instantiate(civilian, transform.position, transform.rotation);
        Destroy(gameObject);
        BeCuredAnimation();
        VerifyVirusCoinGeneration(virusCoinGenerationPercentage);
        VerifyMedicKitGeneration(medicKitGenerationPercentage);
        uIManager.UpdateCuredEnemiesQuantity();
        EnemySpawner enemySpawner =  GameObject.FindObjectOfType(typeof(EnemySpawner)) as EnemySpawner;
        enemySpawner.ReduceAliveEnemiesCount();
    }

    public void VirusParticle()
    {
        Instantiate(virusParticle, transform.position, transform.rotation);
    }

    void VerifyMedicKitGeneration(float percentage)
    {
        if (Random.value <= percentage)
        {
            Instantiate(medicKit, transform.position, transform.rotation);
        }
    }

    void VerifyVirusCoinGeneration(float percentage)
    {
        if (Random.value <= percentage)
        {
            Instantiate(coin, transform.position, transform.rotation);
        }
    }

    public void MoveAnimation(bool moveValue)
    {
        anim.SetBool("move", moveValue);
    }

    public void BeCuredAnimation()
    {
        anim.SetTrigger("cured");
    }

    void UpdateInterface()
    {
        // sliderEnemy.value = health;
    }
}
