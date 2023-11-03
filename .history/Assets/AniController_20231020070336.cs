using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AniController : MonoBehaviour
{
    public Animation animation;
    // Start is called before the first frame update
    void Start()
    {
       animation = GetComponent<Animation>(); 
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1)) {
            animation.SetTrigger("scissors");
        }
    }
}
