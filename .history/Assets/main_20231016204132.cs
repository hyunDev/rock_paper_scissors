using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class main : MonoBehaviour
{
    // 선택한 가위바위보 결과 이미지
    public Image objUser;
    public Image objCom;

    // 현재 가지고 있는 돈
    public int totMoney;
    // 판돈
    public int plusMoney;

    public Text resMsg;

    // 승패 처리
    public void startGame(choice) {
        // choice 1,2,3 가위 바위 보
        // 컴퓨터 결과
        int com = Random.Range(1,4); // 1~3 난수
        int res = choice - com;
         
        if (res == 0) {

        } else if (res == 1 || res == -2) {
            resMsg = "You WIN!";
            totMoney += plusMoney;
        } else {
            resMsg = "You Lose!";
            totMoney -= plusMoney;
        }
    }

    // 컴퓨터 선택 결과 화면에 표시
    public void displayComRes(choice) {
        if (choice == 1) {
            // objCom = "가위";
        } else if (choice == 2) {

        } else {

        }
    }
    // 가위 선택
    public void choiceScissors() {
        // user 선택 화면 가위로 바꿈
        // objUser = "가위";
        startGame(1);
    }
    // 바위 선택
    public void choiceRock() {
        // user 선택 화면 바위로 바꿈
        // objUser = "바위";
        startGame(2);
    }
    // 보 선택
    public void choicePaper() {
        // user 선택 화면 보로 바꿈
        // objUser = "보";
        startGame(3);
    }
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
