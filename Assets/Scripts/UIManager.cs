using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
    public TextMeshProUGUI enemyText;
    public TextMeshProUGUI virusCoinText;
    public TextMeshProUGUI timerText;
    public Slider healthBar;
    public GameObject pausePanel;
    public GameObject tutorialPanel;
    public GameObject gameOverPanel;
    public TextMeshProUGUI aliveTimeText;
    public TextMeshProUGUI maxAliveTimeText;
    private float savedPoint;

    // Start is called before the first frame update
    void Awake()
    {
        UpdateHealthBar();
        Time.timeScale = 1;
    }

    void Start()
    {
        ManageTutorial();
        GameManager.gameManager.coins = PlayerPrefs.GetInt("coin");
        UpdateVirusCoins();
        savedPoint = PlayerPrefs.GetFloat("maxPoint");
    }

    void Update()
    {
        int minutes = (int)(Time.timeSinceLevelLoad / 60);
        int seconds = (int)(Time.timeSinceLevelLoad % 60);
        timerText.text = string.Format("{0}:{1}", minutes, seconds);
    }

    public void UpdateHealth(int health)
    {
        healthBar.value = health;
    }

    public void ManageCoins()
    {
        GameManager.gameManager.coins += 1;
        PlayerPrefs.SetInt("coin", GameManager.gameManager.coins);
        UpdateVirusCoins();
    }

    public void UpdateVirusCoins()
    {
        virusCoinText.text = GameManager.gameManager.coins.ToString();
    }

    public void UpdateHealthBar()
    {
        healthBar.maxValue = GameManager.gameManager.health;
    }

    public void UpdateCuredEnemiesQuantity()
    {
        GameManager.gameManager.curedEnemies += 1;
        enemyText.text = GameManager.gameManager.curedEnemies.ToString();
    }

    public void ManageTutorial()
    {
        int firstTime = PlayerPrefs.GetInt("firstTime");
        if(firstTime == 0) {
            tutorialPanel.SetActive(true);
            Time.timeScale = 0;
        }else {
            tutorialPanel.SetActive(false);
            PlayerPrefs.SetInt("firstTime", 1);
            Time.timeScale = 1;
        }
    }

    public void AcceptTutorial()
    {
        PlayerPrefs.SetInt("firstTime", 1);
        ManageTutorial();
    }

    public void PauseGame()
    {
        Time.timeScale = 0;

        int minutes = (int)(Time.timeSinceLevelLoad / 60);
        int seconds = (int)(Time.timeSinceLevelLoad % 60);

        aliveTimeText.text = minutes.ToString() + "min e " + seconds.ToString() + "s";

        AdjustMaxPoint(minutes, seconds);

        pausePanel.SetActive(true);
    }

    public void ManagePause()
    {
        Time.timeScale = 1;
        pausePanel.SetActive(false);
    }

    public void GameOver()
    {
        Time.timeScale = 0;

        int minutes = (int)(Time.timeSinceLevelLoad / 60);
        int seconds = (int)(Time.timeSinceLevelLoad % 60);

        aliveTimeText.text = minutes.ToString() + "min e " + seconds.ToString() + "s";

        AdjustMaxPoint(minutes, seconds);

        gameOverPanel.SetActive(true);
    }

    void AdjustMaxPoint(int min, int seg)
    {
        if(Time.timeSinceLevelLoad > savedPoint)
        {
            savedPoint = Time.timeSinceLevelLoad;
            maxAliveTimeText.text = string.Format("{0}min e {1}s", min, seg);

            PlayerPrefs.SetFloat("maxPoint", savedPoint);
        }

        if(maxAliveTimeText.text == "0s")
        {
            min = (int) savedPoint / 60;
            seg = (int) savedPoint % 60;

            maxAliveTimeText.text = string.Format("{0}min e {1}s", min, seg);
        }
    }

    public void ReloadScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
