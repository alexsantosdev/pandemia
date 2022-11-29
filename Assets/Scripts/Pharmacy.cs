using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Pharmacy : MonoBehaviour
{
    public TextMeshProUGUI astronazecaText;
    public TextMeshProUGUI pifazerText;
    public TextMeshProUGUI jhansomText;
    public TextMeshProUGUI maskText;
    public AudioClip buySound;
    PlayerController player;

    GameManager gameManager;

    // Start is called before the first frame update
    void Start()
    {
        player = FindObjectOfType<PlayerController>();
        gameManager = GameManager.gameManager;
        UpdateUI();
    }

    void UpdateUI()
    {
        astronazecaText.text = gameManager.simpleUpgradeCost.ToString();
        pifazerText.text = GameManager.gameManager.upgradeCost.ToString();
        // jhansomText.text = gameManager.upgradeCost.ToString();
        maskText.text = GameManager.gameManager.upgradeCost.ToString();
    }

    public void setAstronazeca()
    {
        if (GameManager.gameManager.coins >= GameManager.gameManager.simpleUpgradeCost)
        {
            AudioController.audioInstance.PlayOneShot(buySound);
            GameManager.gameManager.damage += 0.5f;
            SetCoins(GameManager.gameManager.simpleUpgradeCost);
            GameManager.gameManager.simpleUpgradeCost += (GameManager.gameManager.simpleUpgradeCost / 5);
            PlayerPrefs.SetInt("simpleCost", GameManager.gameManager.simpleUpgradeCost);
            PlayerPrefs.SetFloat("damage", GameManager.gameManager.damage);
            PlayerPrefs.SetInt("coin", GameManager.gameManager.coins);

            UpdateUI();
        }
    }
    public void setPifazer()
    {
        if (GameManager.gameManager.coins >= GameManager.gameManager.upgradeCost)
        {
            GameManager.gameManager.damage += 0.7f;
            SetCoins(GameManager.gameManager.upgradeCost);
            GameManager.gameManager.upgradeCost += (GameManager.gameManager.upgradeCost / 5);
            PlayerPrefs.SetInt("cost", GameManager.gameManager.upgradeCost);
            PlayerPrefs.SetFloat("damage", GameManager.gameManager.damage);
            PlayerPrefs.SetInt("coin", GameManager.gameManager.coins);

            UpdateUI();
        }
    }

    public void setJhansom()
    {
        if (GameManager.gameManager.coins >= GameManager.gameManager.upgradeCost)
        {
            GameManager.gameManager.damage += 1f;
            SetCoins(GameManager.gameManager.upgradeCost);
            GameManager.gameManager.upgradeCost += (GameManager.gameManager.upgradeCost / 5);
            // PlayerPrefs.SetInt("cost", GameManager.gameManager.upgradeCost);
            PlayerPrefs.SetFloat("damage", GameManager.gameManager.damage);

            UpdateUI();
        }
    }

    public void setMaskTime()
    {
        if (GameManager.gameManager.coins >= GameManager.gameManager.upgradeCost)
        {
            GameManager.gameManager.shieldTime += 1f;
            SetCoins(GameManager.gameManager.upgradeCost);
            GameManager.gameManager.upgradeCost += (GameManager.gameManager.upgradeCost / 5);
            PlayerPrefs.SetInt("cost", GameManager.gameManager.upgradeCost);
            PlayerPrefs.SetFloat("shieldTime", GameManager.gameManager.shieldTime);
            PlayerPrefs.SetInt("coin", GameManager.gameManager.coins);

            UpdateUI();
        }
    }

    void SetCoins(int coin)
    {
        GameManager.gameManager.coins -= coin;
        FindObjectOfType<UIManager>().UpdateVirusCoins();
    }
}
