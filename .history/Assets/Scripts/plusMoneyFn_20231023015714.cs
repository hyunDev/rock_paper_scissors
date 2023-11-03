using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class plusMoneyFn : MonoBehaviour
{
    public Text totMoney;
    public InputField plusMoney;
    private int previousValue;
    // public Text _plusMoney;
    // Start is called before the first frame update
    void Start()
    {
        previousValue = int.Parse(plusMoney.text);
        plusMoney.onValueChanged.AddListener(checkMaxMoney);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void checkMaxMoney(string newValue) {
        Debug.Log("newValue ::" + newValue);
        int _totMoney = int.Parse(totMoney.text);
        int money = int.Parse(newValue);
        // int money = int.Parse(_plusMoney.text);
        if (money > _totMoney) {
            plusMoney.text = _totMoney.ToString();
        } else if (money < 0) {
            plusMoney.text = "0";
        }
    }
}
