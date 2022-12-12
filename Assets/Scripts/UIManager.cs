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
    public GameObject objective1Check;
    public GameObject objective2Check;
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
        PlayerPrefs.SetInt("maxEnemiesCured", GameManager.gameManager.curedEnemies);
        enemyText.text = GameManager.gameManager.curedEnemies.ToString();
    }

    public void ManageTutorial()
    {
        int firstTime = PlayerPrefs.GetInt("firstTime");
        if(firstTime == 0) {
            Time.timeScale = 0;
            tutorialPanel.SetActive(true);
        }else {
            Time.timeScale = 1;
            tutorialPanel.SetActive(false);
            PlayerPrefs.SetInt("firstTime", 1);
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

        int aliveTime = (int) (Time.timeSinceLevelLoad / 60);

        if(PlayerPrefs.GetInt("maxEnemiesCured") >= 40 || PlayerPrefs.GetInt("objective2") == 1)
        {
            objective2Check.SetActive(true);
            PlayerPrefs.SetInt("objective2", 1);
        }

        if(aliveTime >= 3 || PlayerPrefs.GetInt("objective1") == 1)
        {
            objective1Check.SetActive(true);
            PlayerPrefs.SetInt("objective1", 1);
        }
    }

    public void ManagePause()
    {
        Time.timeScale = 1;
        pausePanel.SetActive(false);
    }

    public void GoToMainMenu()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene("main");
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
        if(PlayerPrefs.GetInt("objective1") == 1 && PlayerPrefs.GetInt("objective2") == 1)
        {
            SceneManager.LoadScene("game1");
        }
        else
        {
            SceneManager.LoadScene("game");
        }
    }
}
