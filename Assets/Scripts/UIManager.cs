using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UIManager : MonoBehaviour
{
    public TextMeshProUGUI enemyText;
    public TextMeshProUGUI virusCoinText;
    public Slider healthBar;

    // Start is called before the first frame update
    void Awake()
    {
        UpdateHealthBar();
        UpdateVirusCoins();
    }

    public void UpdateHealth(int health)
    {
        healthBar.value = health;
    }

    public void UpdateVirusCoins()
    {
        virusCoinText.text = GameManager.gameManager.coins.ToString();
    }

    public void UpdateHealthBar()
    {
        healthBar.maxValue = GameManager.gameManager.health;
    }
}
