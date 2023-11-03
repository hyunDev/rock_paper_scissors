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
    public Text totMoney;
    // 판돈
    public Text plusMoney;

    public Text resMsg;

    // 승패 처리
    public void startGame(int choice) {
        // choice 1,2,3 가위 바위 보
        // 컴퓨터 결과
        int com = Random.Range(1,4); // 1~3 난수
        
        // com 선택 전 animation
        setComAnimation();
        // user, com 선택 결과 이미지 표시
        setComImage(com);
        objUser.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite;
        
        int res = choice - com;
        int _totMoney = int.Parse(totMoney.text);
        int _plusMoney = int.Parse(plusMoney.text);

        if (res == 0) {
            resMsg.text = "Draw Game";
        } else if (res == 1 || res == -2) {
            resMsg.text = "You WIN!";
            int calMoney = _totMoney + _plusMoney;
            totMoney.text = calMoney.ToString();
        } else {
            resMsg.text = "You Lose!";
            int calMoney = _totMoney - _plusMoney;
            totMoney.text = calMoney > 0 ? calMoney.ToString() : "0";
        }
    }

    // 선택하는 과정을 애니메이션 효과 주기
    public void setComAnimation() {
        for (int i = 1;i < 11;i++) {
            StartCoroutine(ExecuteWithDelay(i));
        }
    }

    private IEnumerator ExecuteWithDelay(int choice) {
        float delayTime = 0.3f;
        yield return new WaitForSeconds(delayTime);
        setComImage(choice);
    }
    // 컴퓨터 선택한 것 보여주기
    public void setComImage(int choice) {
        objCom.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite;
    }
    // 가위 선택
    public void choiceScissors() {
        // objUser = "가위";
        startGame(1);
    }
    // 바위 선택
    public void choiceRock() {
        // objUser = "바위";
        startGame(2);
    }
    // 보 선택
    public void choicePaper() {
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
