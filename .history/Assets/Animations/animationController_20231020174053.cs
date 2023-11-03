using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animationController : MonoBehaviour
{
    public Animator animation;
    // Start is called before the first frame update
    void Start()
    {
       animation = GetComponent<Animator>(); 
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1)) {
            animation.SetTrigger("scissors");
        }

        if (Input.GetKeyDown(KeyCode.Alpha2)) {
            animation.SetTrigger("defaultState");
        }
    }
}
