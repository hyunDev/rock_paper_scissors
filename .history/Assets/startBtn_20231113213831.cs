using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class startBtn : MonoBehaviour
{
    public AudioSource btnClickAudioSource;
    // Start is called before the first frame update
    void Start()
    {
        // 오디오 소스 생성해서 추가
        // audioSource = GetComponent<AudioSource>();
        // 뮤트: true일 경우 소리가 나지 않음
        // audioSource.mute = false;

        // 루핑: true일 경우 반복 재생
        // audioSource.loop = false;

        // 자동 재생: true일 경우 자동 재생
        // audioSource.playOnAwake = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void playSound() {
        // Debug.Log(this.audioSource);
        btnClickAudioSource.play();
        // this.audioSource.Play();
    }
}
