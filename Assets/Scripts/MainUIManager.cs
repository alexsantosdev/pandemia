using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class MainUIManager : MonoBehaviour
{

    public TextMeshProUGUI virusCoinText;
    public GameObject creditsPanel;
    // Start is called before the first frame update
    void Start()
    {
        virusCoinText.text = PlayerPrefs.GetInt("coin").ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OpenCredits()
    {
        Time.timeScale = 0;

        creditsPanel.SetActive(true);
    }

    public void CloseCredits()
    {
        Time.timeScale = 1;

        creditsPanel.SetActive(false);
    }
}
