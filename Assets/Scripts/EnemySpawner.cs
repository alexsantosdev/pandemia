using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    public Transform[] spawnPoints;

    [SerializeField]
    private GameObject[] enemiesPrefab;
    [SerializeField]
    private float enemyGeneratorTime = 1.5f;

    private GameObject player;
    private int maximumAliveEnemies = 12;
    private int aliveEnemiesCount;
    private float playerDistanceForGeneration = 10f;
    private float timerCount = 0;
    private float nearTimeToIncreaseDifficulty = 8f;
    private float difficultyIncreaseCounter;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindWithTag("Player");
        difficultyIncreaseCounter = nearTimeToIncreaseDifficulty;
        for(int i = 0; i < 1; i++)
        {
            StartCoroutine(spawnEnemy(enemiesPrefab[0], spawnPoints[0]));
        }
    }

    // Update is called once per frame
    void Update()
    {
        int radomEnemy = Random.Range(0, enemiesPrefab.Length);
        int randomPoint = Random.Range(0, spawnPoints.Length);

        bool generateNewEnemy = Vector3.Distance(spawnPoints[randomPoint].position, player.transform.position) > playerDistanceForGeneration;

        if(generateNewEnemy && aliveEnemiesCount < maximumAliveEnemies)
        {
            timerCount += Time.deltaTime;

            if(timerCount >= enemyGeneratorTime)
            {
                StartCoroutine(spawnEnemy(enemiesPrefab[radomEnemy], spawnPoints[randomPoint]));
                // Invoke("spawnEnemy(enemiesPrefab[radomEnemy], spawnPoints[randomPoint])", enemyGeneratorTime);
                timerCount = 0;
            }
        }

        if(Time.timeSinceLevelLoad > difficultyIncreaseCounter)
        {
            maximumAliveEnemies++;
            difficultyIncreaseCounter = Time.timeSinceLevelLoad + nearTimeToIncreaseDifficulty;
        }
    }

    private IEnumerator spawnEnemy(GameObject enemy, Transform point)
    {
        GameObject newEnemy = Instantiate(enemy, new Vector3(Random.Range(point.position.x - 4f, point.position.x + 4f), point.position.y), Quaternion.identity);
        yield return null;

        aliveEnemiesCount++;
    }

    public void ReduceAliveEnemiesCount()
    {
        aliveEnemiesCount--;
    }
}
