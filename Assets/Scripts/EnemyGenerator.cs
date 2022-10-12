using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyGenerator : MonoBehaviour
{
    public GameObject enemy;
    private float timerCount = 0;
    public float EnemyGeneratorTime = 1;
    public LayerMask enemyLayer;
    private float distanceGeneration = 3;
    private float playerDistanceForGeneration = 20;
    private GameObject player;
    private int maximumAliveEnemies = 2;
    private int aliveEnemiesCount;
    private float nearTimeToIncreaseDifficulty = 30;
    private float difficultyIncreaseCounter;

    private void Start()
    {
        player = GameObject.FindWithTag("Player");
        difficultyIncreaseCounter = nearTimeToIncreaseDifficulty;
        for (int i = 0; i < maximumAliveEnemies; i++)
        {
            StartCoroutine(GenerateNewEnemy());
        }
    }

    // Update is called once per frame
    void Update()
    {
        bool generateNewEnemy = Vector3.Distance(transform.position, player.transform.position) > playerDistanceForGeneration;

        if (generateNewEnemy && aliveEnemiesCount < maximumAliveEnemies)
        {
            timerCount += Time.deltaTime;

            if (timerCount >= EnemyGeneratorTime)
            {
                StartCoroutine(GenerateNewEnemy());
                timerCount = 0;
            }
        }

        if (Time.timeSinceLevelLoad > difficultyIncreaseCounter)
        {
            maximumAliveEnemies++;
            difficultyIncreaseCounter = Time.timeSinceLevelLoad + nearTimeToIncreaseDifficulty;
        }
    }

    void OnDrawGizmos()
    {
        Gizmos.color = Color.yellow;
        Gizmos.DrawWireSphere(transform.position, distanceGeneration);
    }

    IEnumerator GenerateNewEnemy()
    {
        Vector3 creationPoint = RandomizePosition();
        Collider[] collider = Physics.OverlapSphere(creationPoint, 1, enemyLayer);

        while (collider.Length > 0)
        {
            creationPoint = RandomizePosition();
            collider = Physics.OverlapSphere(creationPoint, 1, enemyLayer);
            yield return null;
        }

        EnemyController enemyController = Instantiate(enemy, creationPoint, transform.rotation).GetComponent<EnemyController>();
        //enemyController.meuGerador = this;
        aliveEnemiesCount++;
    }

    Vector3 RandomizePosition()
    {
        Vector3 position = Random.insideUnitSphere * distanceGeneration;
        position += transform.position;
        position.x = 0;

        return position;
    }

    public void ReduceAliveEnemiesCount()
    {
        aliveEnemiesCount--;
    }
}
