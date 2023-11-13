using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public GameObject CoverImage;
    float time;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void OnClickStartButton() {
        CoverImage.SetActive(false);
    }

    public void onClickExitButton() {
        Application.Quit();
    }
    // Update is called once per frame
    void Update()
    {
        // blinkAnimation
        if (time < 0.5f) {
            CoverImage.GetComponent<Text>().color = new Color(1,1,1,1 - time);
        } else {
            CoverImage.GetComponent<Text>().color = new Color(1,1,1, time);
            if (time > 1f) {
                time = 0;
            }
        }
        time += Time.deltaTime;
    }
}
