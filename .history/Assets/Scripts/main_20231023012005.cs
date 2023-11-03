using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using System.Threading;

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

    public GameObject popup;

    public Button scissorBtn;
    public Button rockBtn;
    public Button paperBtn;

    public Image objComImage;
    public Image objUserImage;

    private bool isStart = false;

    // Start is called before the first frame update
    void Start() {
        popup.SetActive(false);
        int loadedScore = loadScore();
        if (loadedScore != null) {
            totMoney.text = loadedScore.ToString();
        } else {
            totMoney.text = "10";
        }
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
        isStart = false;
        saveData();
        activeBtn();
    }

    public void saveData() {
        // Saving the score
        PlayerData playerData = new PlayerData();
        playerData.score = int.Parse(totMoney.text);;
        string json = JsonUtility.ToJson(playerData);
        System.IO.File.WriteAllText(Application.persistentDataPath + "/playerData.json", json);
    }

    public int loadScore() {
        PlayerData playerData = new PlayerData();
        if (System.IO.File.Exists(Application.persistentDataPath + "/playerData.json")) {
            string loadedJson = System.IO.File.ReadAllText(Application.persistentDataPath + "/playerData.json");
            PlayerData loadedData = JsonUtility.FromJson<PlayerData>(loadedJson);
            int loadedScore = loadedData.score;
            if (loadedScore != null) {
                return loadedScore;
            } else {
                return null;
            }
        }
    }

    // 승패 처리
    public void startGame(int choice) {
        isStart = true;        
        inActiveBtn();
        // choice 1,2,3 가위 바위 보
        // 컴퓨터 결과
        int com = Random.Range(1,4); // 1~3 난수
        
        
        // user, com 선택 결과 이미지 표시
        objUserImage.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite;
        // com 선택 animation 실행
        StartCoroutine(startComImageAnim(com));
        
        Invoke("popupActive", 2.5f);
        
        int res = choice - com;

        StartCoroutine(displayResult(res));
    }
    
    // 컴퓨터 선택한 것 보여주기
    public void setComImage(int choice) {
        objComImage.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite;
    }

    IEnumerator startComImageAnim(int choice) {
        
        float changeSpeed = 10f;
        int curOrder = 0;

        while(true) {
            if (changeSpeed <= 0f ) {
                break;
            }
            changeSpeed -= 1f;
            setComImage(curOrder % 3 + 1);
            curOrder++;
            yield return new WaitForSeconds(0.2f);
        }
        setComImage(choice);
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

    IEnumerator displayResult(int res) {
        yield return new WaitForSeconds(2.5f);

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
}

