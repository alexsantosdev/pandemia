using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Parallax : MonoBehaviour
{
    public Transform target;
    private Vector3 previousPosition;
    public float parallaxSpeed;

    // Start is called before the first frame update
    void Start()
    {
        previousPosition = target.position;
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate((target.position.x - previousPosition.x) / parallaxSpeed, (target.position.y - previousPosition.y) / parallaxSpeed, 0);

        previousPosition = target.position;
    }
}
