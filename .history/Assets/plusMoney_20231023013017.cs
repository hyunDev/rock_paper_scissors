using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class plusMoney : MonoBehaviour
{
    public Text totMoney;
    public Text plusMoney;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void checkMaxMoney(int money) {
        int _totMoney = int.Parse(totMoney.text);
        if (money > _totMoney) {
            plusMoney.text = _totMoney.ToString();
        } else if (money < 0) {
            plusMoney.text = 0;
        }
    }
}