using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using System.Threading;
using GoogleMobileAds;
using GoogleMobileAds.Api;

public class main : MonoBehaviour
{
    // 첫화면
    public GameObject CoverImage;
    // 첫화면 타이틀
    public Text GameTitle;
    // 타이틀 깜박임 애니메이션을 위한 시간
    float titleAnimTime;
    // 현재 가지고 있는 돈
    public Text totMoney;
    // 판돈
    public Text plusMoney;
    // 판돈 input field
    public InputField plusInputMoney;
    // 게임 결과 메세지 1 (승리 유무)
    public Text resMsg;
    // 게임 결과 메세지 2 (얻은 돈)
    public Text resMsg2;

    // game 결과 popup 창
    public GameObject gameResPopup;
    
    // 가위,바위,보 선택 버튼
    public Button scissorBtn;
    public Button rockBtn;
    public Button paperBtn;

    // 선택한 가위바위보 결과 이미지
    public Image objComImage;
    public Image objUserImage;

    // 역대 게임 최고점수
    public Text bestScore;
    // 이번 게임의 최고점수
    public Text currentBestScore;

    // end Popup Start
    // end popup
    public GameObject endPopup;
    //retry 버튼
    public Button retryBtn;
    // exit 버튼
    public Button endPopupExitBtn;

    // sound
    public AudioSource buttonClickSound;
    public AudioClip btnClickSound;

    //보상형 광고 관리 변수
    public RewardedAd rewardedAD; 

    private readonly string rewardADID = "ca-app-pub-3599250716372898/8589343014"; //보상형 광고 ID
    private readonly string rewardTestADID = "ca-app-pub-3940256099942544/5224354917"; //보상형 테스트 광고 ID

    // Start is called before the first frame update
    void Start() {
        // 광고 로드
        LoadRewardedAd();

        // 팝업 창 없애기
        gameResPopup.SetActive(false);
        endPopup.SetActive(false);
        
        // 데이터 불러오기
        PlayerData playerData = loadData();
        
        // 화면에 불러온 데이터 표시
        bestScore.text = playerData.bestScore.ToString();
        currentBestScore.text = playerData.currentBestScore.ToString();
        
        int currentScore = playerData.currentScore;
        
        if (currentScore != 0) {
            totMoney.text = currentScore.ToString();
        } else {
            totMoney.text = "10";
        }
    }

    // Update is called once per frame
    void Update() {
        // 돈이 0이 되면 게임 종료
        if (totMoney.text == "0") {
            endPopup.SetActive(true);
        }

        // 첫 화면 타이틀 깜박임 애니메이션 효과
        if (titleAnimTime < 0.5f) {
            GameTitle.color = new Color(1,1,1,1 - titleAnimTime);
        } else {
            GameTitle.color = new Color(1,1,1, titleAnimTime);
            if (titleAnimTime > 1f) {
                titleAnimTime = 0;
            }
        }
        titleAnimTime += Time.deltaTime;
    }

    // 게임 상태 초기화
    public void gameInit() {
        LoadRewardedAd();
        gameResPopup.SetActive(false);
        endPopup.SetActive(false);
        // 게임이 중간에 종료 되어서 진행 중인 상태가 있을 경우
        if (totMoney.text == "0") {
            totMoney.text = "10";
        }
        currentBestScore.text = "10";
        plusMoney.text = "1";
        setComImage(0);
        setUserImage(0);
    }

    public void gameResPopupActive() {
        gameResPopup.SetActive(true);
    }

    // 매 게임 종료시 수행할 내용, 데이터 저장
    public void endGame() {
        int currentScore = int.Parse(totMoney.text);
        if (currentScore > int.Parse(bestScore.text)) {
            bestScore.text = currentScore.ToString();
        }
        if (currentScore > int.Parse(currentBestScore.text)) {
            currentBestScore.text = currentScore.ToString();
        }
        saveScore(currentScore, int.Parse(bestScore.text));
        activeBtn();
    }

    public void saveScore(int currentScore,int bestScore) {
        PlayerData playerData = new PlayerData();
        playerData.currentScore = currentScore;
        playerData.bestScore =  bestScore;
        playerData.currentBestScore = int.Parse(currentBestScore.text);
        string json = JsonUtility.ToJson(playerData);
        System.IO.File.WriteAllText(Application.persistentDataPath + "/scissorsRockPaper.json", json);
    }

    public PlayerData loadData() {
        PlayerData playerData = new PlayerData();
        if (System.IO.File.Exists(Application.persistentDataPath + "/scissorsRockPaper.json")) {
            string loadedJson = System.IO.File.ReadAllText(Application.persistentDataPath + "/scissorsRockPaper.json");
            PlayerData loadedData = JsonUtility.FromJson<PlayerData>(loadedJson);
            return playerData;
        }
        return null;
    }

    // 승패 처리
    public void startGame(int choice) {       
        // 가위바위보 버튼 비활성화
        inActiveBtn();
        // choice 1,2,3 가위 바위 보
        // 컴퓨터 결과
        int com = Random.Range(1,4); // 1~3 난수
        
        // user, com 선택 결과 이미지 표시
        objUserImage.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite;
        // com 선택 animation 실행
        StartCoroutine(startComImageAnim(com));
        
        Invoke("gameResPopupActive", 2.5f);
        
        int res = choice - com;

        StartCoroutine(displayResult(res));

        Invoke("endGame", 3f);
    }
    
    // 컴퓨터 선택한 것 보여주기
    public void setComImage(int choice) {
        objComImage.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite;
    }

    // 유저 선택한 것 보여주기
    public void setUserImage(int choice) {
        objUserImage.GetComponent<Image>().sprite = Resources.Load<Sprite>("Image_" + choice) as Sprite;
    }
    IEnumerator startComImageAnim(int choice) {
        
        float changeTime = 10f;
        int curOrder = 0;

        while(true) {
            if (changeTime <= 0f ) {
                break;
            }
            changeTime -= 1f;
            setComImage(curOrder % 3 + 1);
            curOrder++;
            yield return new WaitForSeconds(0.2f);
        }
        setComImage(choice);
    }
    
    // 가위 선택
    public void choiceScissors() {
        checkStakeMoney();
        startGame(1);
    }
    // 바위 선택
    public void choiceRock() {
        checkStakeMoney();
        startGame(2);
    }
    // 보 선택
    public void choicePaper() {
        checkStakeMoney();
        startGame(3);
    }

    // 판돈이 0원이 아닌지 체크
    public void checkStakeMoney() {
        if (string.IsNullOrWhiteSpace(plusInputMoney.text) || int.Parse(plusInputMoney.text) > int.Parse(totMoney.text)) {
            plusInputMoney.text = "1";
        }
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

    public void OnClickCoverStartButton() {
        CoverImage.SetActive(false);
        gameInit();
    }

    public void onClickCoverExitButton() {
        Application.Quit();
    }

    public void onClickRetryBtn() {
        ShowRewardedAd();
    }

    public void onClickExitBtn() {
        endPopup.SetActive(false);
        CoverImage.SetActive(true);
        
    }

    public void LoadRewardedAd() {
        // Clean up the old ad before loading a new one.
        if (rewardedAD != null)
        {
                rewardedAD.Destroy();
                rewardedAD = null;
        }

        Debug.Log("Loading the rewarded ad.");

        // create our request used to load the ad.
        var adRequest = new AdRequest();

        // send the request to load the ad.
        RewardedAd.Load(rewardTestADID, adRequest,
            (RewardedAd ad, LoadAdError error) => {
                // if error is not null, the load request failed.
                if (error != null || ad == null)
                {
                    Debug.LogError("Rewarded ad failed to load an ad " +
                                    "with error : " + error);
                    return;
                }

                Debug.Log("Rewarded ad loaded with response : "
                            + ad.GetResponseInfo());

                rewardedAD = ad;
            });
    }
    public void ShowRewardedAd() {
        const string rewardMsg =
            "Rewarded ad rewarded the user. Type: {0}, amount: {1}.";

        if (rewardedAD != null && rewardedAD.CanShowAd())
        {
            rewardedAD.Show((Reward reward) =>
            {
                // TODO: Reward the user.
                Debug.Log(" " + rewardMsg + reward.Type + reward.Amount);
                gameInit();
            });
        }
    }

    public void playBtnClickSound() {
        AudioSource audioSource;
        audioSource.clip = btnClickSound;
        audioSource.Play();
    }
}

