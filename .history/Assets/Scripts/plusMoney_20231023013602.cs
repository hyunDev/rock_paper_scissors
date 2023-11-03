using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class plusMoneyFn : MonoBehaviour
{
    public Text totMoney;
    public Text _plusMoney;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void checkMaxMoney() {
        int _totMoney = int.Parse(totMoney.text);
        int money = int.Parse(_plusMoney.text);
        if (money > _totMoney) {
            _plusMoney.text = _totMoney.ToString();
        } else if (money < 0) {
            _plusMoney.text = "0";
        }
    }
}
