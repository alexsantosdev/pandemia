using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PlayGame()
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
