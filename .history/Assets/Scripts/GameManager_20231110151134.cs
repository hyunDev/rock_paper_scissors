using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject CoverImage;
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
        
    }
}
