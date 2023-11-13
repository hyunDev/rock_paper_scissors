using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class endPopup : MonoBehaviour
{
    //retry 버튼
    public Button retryBtn;
    // exit 버튼
    public Button exitBtn;
    // endPopup
    public GameObject endPopup;
    // startView
    public GameObject CoverImage;
    // Start is called before the first frame update

    [Header("Variable")]
    public RewardedAd rewardedAD; //보상형 광고 관리 변수
    public Action onUserEarnedRewardAction; //보상형 광고 실행 후 실행되는 함수

    [Header("Cache")]
    private readonly bool enableTestAD; //테스트 광고 활성화 여부
    private readonly string rewardADID = "ca-app-pub-3599250716372898/8589343014"; //보상형 광고 ID
    private readonly string rewardTestADID = "ca-app-pub-3940256099942544/5224354917"; //보상형 테스트 광고 ID
    void Start()
    {
        RequestConfiguration requestConfiguration = new RequestConfiguration.Builder().build();
        MobileAds.SetRequestConfiguration(requestConfiguration);

        LoadRewardAD(); //보상형 광고 불러오기
    }

    public void onClickRetryBtn() {

    }

    public void onClickExitBtn() {

    }
    // Update is called once per frame
    void Update()
    {
        
    }

    /* 보상형 광고를 불러오는 함수 */
    public void LoadRewardAD()
    {
        rewardedAD = new RewardedAd(enableTestAD ? rewardTestADID : rewardADID); //'보상형 광고' 또는 '보상형 테스트 광고'
        rewardedAD.LoadAd(GetADRequest());
        rewardedAD.OnUserEarnedReward += (obj, reward) =>
        {
            onUserEarnedRewardAction();
        }; //보상형 광고 실행 후 실행되는 함수 지정
    }

    /* 보상형 광고를 실행하는 함수 */
    public void ShowRewardAD()
    {
        if (rewardedAD.IsLoaded()) //광고를 불러왔다면
        {
            rewardedAD.Show();
            LoadRewardAD(); //광고를 보여주는 동시에 보상형 광고 불러오기
        }
    }

    /* 광고 요청을 가져오는 함수 */
    private AdRequest GetADRequest()
    {
        return new AdRequest.Builder().Build();
    }
}
