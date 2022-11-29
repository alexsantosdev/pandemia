using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProtectionSpawner : MonoBehaviour
{
    public Transform[] spawnPoints;
    public GameObject maskPrefab;
    public int maximumMasksInScene = 2;
    public int masksInScene;
    // Start is called before the first frame update
    void Start()
    {
        masksInScene = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(masksInScene < maximumMasksInScene)
        {
            int randomSpawn = Random.Range(0, spawnPoints.Length);
            Instantiate(maskPrefab, spawnPoints[randomSpawn].position, spawnPoints[randomSpawn].rotation);
            masksInScene += 1;
        }
    }
}
