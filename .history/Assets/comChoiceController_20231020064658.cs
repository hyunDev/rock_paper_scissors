using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class comChoiceController : MonoBehaviour
{
    private Animation animation;
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

    public void startComChoiceAnimation() {
        // animation.SetTrigger("comChoice");
    }

    public void startScissorAnimation() {
        // animation.SetTrigger("scissor");
    }

    public void startRockAnimation() {
        // animation.SetTrigger("rock");
    }

    public void startPaperAnimation() {
        // animation.SetTrigger("paper");
    }
}
