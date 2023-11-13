using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GoogleMobileAds;
using GoogleMobileAds.Api;
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

    public RewardedAd rewardedAD; //보상형 광고 관리 변수
    public Action onUserEarnedRewardAction; //보상형 광고 실행 후 실행되는 함수

    private readonly string rewardADID = "ca-app-pub-3599250716372898/8589343014"; //보상형 광고 ID
    private readonly string rewardTestADID = "ca-app-pub-3940256099942544/5224354917"; //보상형 테스트 광고 ID
    void Start()
    {
        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize((InitializationStatus initStatus) =>
        {
            // This callback is called once the MobileAds SDK is initialized.
        });
        LoadRewardAD();
    }

    public void onClickRetryBtn() {
        ShowRewardedAd();
    }

    public void onClickExitBtn() {
        endPopup.SetActive(false);
        CoverImage.SetActive(true);
    }
    // Update is called once per frame
    void Update()
    {
        
    }

    public void LoadRewardedAd() {
        // Clean up the old ad before loading a new one.
        if (_rewardedAd != null)
        {
                _rewardedAd.Destroy();
                _rewardedAd = null;
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

                _rewardedAd = ad;
            });
    }
    public void ShowRewardedAd() {
        const string rewardMsg =
            "Rewarded ad rewarded the user. Type: {0}, amount: {1}.";

        if (rewardedAd != null && rewardedAd.CanShowAd())
        {
            rewardedAd.Show((Reward reward) =>
            {
                // TODO: Reward the user.
                Debug.Log(String.Format(rewardMsg, reward.Type, reward.Amount));
            });
        }
    }
}
