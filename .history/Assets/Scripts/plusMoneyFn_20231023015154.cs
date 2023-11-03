using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class plusMoneyFn : MonoBehaviour
{
    public InputField totMoney;
    public InputField plusMoney;
    // public Text _plusMoney;
    // Start is called before the first frame update
    void Start()
    {
        plusMoney.onValueChanged.AddListener(checkMaxMoney);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void checkMaxMoney(string newValue) {
        Debug.Log("newValue ::" + newValue);
        int _totMoney = int.Parse(totMoney.text);
        int money = int.Parse(newValue.text);
        // int money = int.Parse(_plusMoney.text);
        if (money > _totMoney) {
            plusMoney.text = _totMoney.ToString();
        } else if (money < 0) {
            plusMoney.text = "0";
        }
    }
}
