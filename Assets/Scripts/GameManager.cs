using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public int health = 10;
    public float damage = 1f;
    public float fireRate = 0.2f;
    public float shieldTime = 10f;
    public int coins;
    public int curedEnemies;
    public int simpleUpgradeCost = 5;
    public int upgradeCost = 10;
    public int maxPointToNextStage = 20;

    public static GameManager gameManager;

    // Start is called before the first frame update
    void Awake()
    {
        if (gameManager == null)
        {
            gameManager = this;
        }
        else
        {
            Destroy(gameObject);
        }

        DontDestroyOnLoad(gameObject);

        if(PlayerPrefs.GetInt("simpleCost") != 0)
        {
            simpleUpgradeCost = PlayerPrefs.GetInt("simpleCost");
        }

        if(PlayerPrefs.GetInt("cost") != 0)
        {
            upgradeCost = PlayerPrefs.GetInt("cost");
        }

        if(PlayerPrefs.GetFloat("damage") != 0f)
        {
            damage = PlayerPrefs.GetFloat("damage");
        }

        if(PlayerPrefs.GetFloat("shieldTime") != 0f)
        {
            shieldTime = PlayerPrefs.GetFloat("shieldTime");
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
