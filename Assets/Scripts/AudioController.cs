using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioController : MonoBehaviour
{
    private AudioSource audioSource;
    public static AudioSource audioInstance;

    void Awake()
    {
        audioSource = GetComponent<AudioSource>();
        audioInstance = audioSource;
    }
}
