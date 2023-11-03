using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class main : MonoBehaviour
{
    // 선택한 가위바위보 결과 이미지
    // public Image objUser;
    // public Image objCom;

    // 현재 가지고 있는 돈
    public Text totMoney;
    // 판돈
    public Text plusMoney;

    public Text resMsg;
    public Text resMsg2;

    public Animation anim;

    public GameObject objUser;
    public GameObject objCom;
    public GameObject popup;

    public Button scissorBtn;
    public Button rockBtn;
    public Button paperBtn;

    public Image objComImage;
    public Image objUserImage;
    private Animator userAnim;
    private Animator comAnim;

    private bool isStart = false;

    // Start is called before the first frame update
    void Start() {
        userAnim = objUser.GetComponent<Animator>();
        comAnim = objCom.GetComponent<Animator>();
        popup.SetActive(false);
    }

    // Update is called once per frame
    void Update() {
       if (isStart == true && popup.activeSelf == true) {
            Invoke("endGame", 2f);
        }
    }

    public void popupActive() {
        popup.SetActive(true);
    }

    public void endGame() {
        //comAnim.SetTrigger("defaultState");
        //userAnim.SetTrigger("defaultState");
        isStart = false;
        activeBtn();
    }
    // 승패 처리
    public void startGame(int choice) {
        isStart = true;
        inActiveBtn();
        // choice 1,2,3 가위 바위 보
        // 컴퓨터 결과
        int com = Random.Range(1,4); // 1~3 난수
        
        // com 선택 animation 실행
        //comAnim.SetTrigger("comChoice");
        // user, com 선택 결과 이미지 표시
        /* setComImage(com);
        objUser.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite; */
        objUserImage.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite;
        startComImageAnim(com);
        if (com == 1) {
            // Invoke("comChoiceScissors", 1f);
        } else if (com == 2) {
            // Invoke("comChoiceRock", 1f);
        } else {
            // Invoke("comChoicePaper", 1f);
        }
        
        // popup.SetActive(true);
        Invoke("popupActive", 3.5f);

        int res = choice - com;
        int _totMoney = int.Parse(totMoney.text);
        int _plusMoney = int.Parse(plusMoney.text);

        if (res == 0) {
            resMsg.text = "Draw Game";
            resMsg2.text = "Earning Money : 0";
        } else if (res == 1 || res == -2) {
            resMsg.text = "You WIN!";
            resMsg2.text = "Earning Money : " + _plusMoney.ToString();
            int calMoney = _totMoney + _plusMoney;
            totMoney.text = calMoney.ToString();
        } else {
            resMsg.text = "You Lose!";
            resMsg2.text = "Earning Money : -" + _plusMoney.ToString();
            int calMoney = _totMoney - _plusMoney;
            totMoney.text = calMoney > 0 ? calMoney.ToString() : "0";
        }
    }
    
    /* // 컴퓨터 선택한 것 보여주기
    public void setComImage(int choice) {
        objCom.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite;
    } */

    public void startComImageAnim(int choice) {
        objComImage.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite;
    }
    public void comChoiceScissors() {
        comAnim.SetTrigger("scissors");
    }
    public void comChoiceRock() {
        comAnim.SetTrigger("rock");
    }
    public void comChoicePaper() {
        comAnim.SetTrigger("paper");
    }
    // 가위 선택
    public void choiceScissors() {
        // userAnim.SetTrigger("scissors");
        startGame(1);
    }
    // 바위 선택
    public void choiceRock() {
        // userAnim.SetTrigger("rock");
        startGame(2);
    }
    // 보 선택
    public void choicePaper() {
        // userAnim.SetTrigger("paper");
        startGame(3);
    }

    public void inActiveBtn() {
        scissorBtn.gameObject.SetActive(false);
        rockBtn.gameObject.SetActive(false);
        paperBtn.gameObject.SetActive(false);
    }

    public void activeBtn() {
        scissorBtn.gameObject.SetActive(true);
        rockBtn.gameObject.SetActive(true);
        paperBtn.gameObject.SetActive(true);
    }
}

