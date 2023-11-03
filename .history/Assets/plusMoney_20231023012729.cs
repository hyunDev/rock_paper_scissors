using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class plusMoney : MonoBehaviour
{
    public Text totMoney;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    checkMaxMoney(int money) {
        int _totMoney = int.Parse(totMoney.text);
        if (money > _totMoney) {
            return _totMoney;
        } else if (money < 0) {
            return 0;
        } else {
            return money;
        }
    }
}
