#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Api.AdError>
struct Action_1_t51FFDE30BDF903C1EBBDB7D4601AB153386E7FD9;
// System.Action`1<GoogleMobileAds.Api.AdValue>
struct Action_1_tC07F1102F2A241255FB51FC0C00CF2522DB2789F;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_t89BFB4ED006417A4EC114C83D068A2672DE132B3;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t6F9E7F70FBDCF668C8D223536FD8E12FE8D6DA85;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t51D0DAA0D0445DF2E88FDFD413A8499CDD0A86A7;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tDEA3E18AEA7E36A1A5404BD1686B1700EBD2D546;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t3BE2E70C31BF7B6E3FE9457A64789A9D94AE308A;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// GoogleMobileAds.Api.AdError
struct AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_tE145979C35C743715445B2A05B11B32F99C23977;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t32DDA912B1EEA224F107BDD96FD925AA97A6E9FE;
// GoogleMobileAds.Api.AdValue
struct AdValue_t806DD55342062227A4009E24834AE96A38A57F28;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t050DFD8F179EA2AC3AEFD033D5BF853689FF5AF1;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.IClientFactory
struct IClientFactory_t3E0D382AEC6761A542347C53837626C91373E2CF;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_tCFF53556724C482881F279A0FE92DA88431159DF;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_t2B9D58A333B5B512F328C71F59F2F967E7C7C134;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_tEA06A2783B8A99A8BE3B746AC5F17D78BAAAFECD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// GoogleMobileAds.Api.ResponseInfo
struct ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0;
// GoogleMobileAds.Api.Reward
struct Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// GoogleMobileAds.Api.MobileAds/<RaiseAction>c__AnonStorey4
struct U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673;
// GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0
struct U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69;
// GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey2
struct U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0;
// GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey3
struct U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F;
// GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey4
struct U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF;
// GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0/<Load>c__AnonStorey1
struct U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t51D0DAA0D0445DF2E88FDFD413A8499CDD0A86A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t6F9E7F70FBDCF668C8D223536FD8E12FE8D6DA85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t89BFB4ED006417A4EC114C83D068A2672DE132B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tDEA3E18AEA7E36A1A5404BD1686B1700EBD2D546_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_t3E0D382AEC6761A542347C53837626C91373E2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m364520A4413605029A9531BF6C918840A2897FE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m442DE17B948DCF6504FFA75781D7BB8770EDDE0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m90C7BA2D650F4D4A4B59BD5F475BCD2DAF36B72A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mC6EF72F6A3CCD50F4B2A19FA91F7680A746D68E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m0B3B4742D424596D7C16D6CFFA089E3AC640F10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mC71C41B1816877BB771ABC806330A115C83A8AA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mE4B93DB2BED943B031C1B33DC5CBD164524ED261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mEC33B8B61097B3D7AB7CF0D338B798ABF7C9E471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_mBB9C0F59D916B464F0355F5E4D77C736EE0E4797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__0_mAEB8B50B32D272E4C7619E7DCC33B523F94BE5EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__1_m141DE54DA1D602B3EB716134CE0FBADCD2144744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__2_m5EEEB3616932EC86B7C5F2F182C77890C1AFD5BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__3_mF6E35C54409557EB2C616968A93848D0C76274E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__4_m2A8445A99D60F80091ACF715A44698A34FF64C2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__5_m1964F8BF3D5D2B871688F810CCC93C0B1988CC3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__6_m02BAE62EBD229AAE3E055A27950B6BDA2348DDEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__7_m3363873E5ED93C748889CBBA82F729836EEEF341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__8_m07B5B43AAD0578F38B75424B547CCF128B4993BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__9_m31BBA6C3DE03F61AA0AD2F9BAD77099FE7299902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__A_mA16151D456016AA5B967CA38D0E6C26D3138F9CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m743183A467410BD696AB884EFBD625BC2534FAAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_m4A5DA47A71334D0CBF420977C3D35A43447BEBA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__2_mD91B2B52A30D48F377A674E4721A16EA2B8D3F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey1_U3CU3Em__0_m2835D1C5F7BEA5B05901A30106F40347E5B8A42A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRaiseActionU3Ec__AnonStorey4_U3CU3Em__0_mBD5D966DAE68B53DF0169B4643CAD0F1B3032275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegisterAdEventsU3Ec__AnonStorey2_U3CU3Em__0_mA8BE0B9BAF1204516DBA55A83E82BA4ED277C3B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegisterAdEventsU3Ec__AnonStorey3_U3CU3Em__0_m5AF6FD0C0E1EEE656F43621BCADE752A803FF5F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegisterAdEventsU3Ec__AnonStorey4_U3CU3Em__0_m92D3C38FF40FD078475098EC1C40431383E37BEE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t973BF0EF2B0F3EC9B6850C73ACB0F7B0411F60D3 
{
public:

public:
};


// System.Object


// GoogleMobileAds.Api.AdError
struct AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::_client
	RuntimeObject* ____client_0;

public:
	inline static int32_t get_offset_of__client_0() { return static_cast<int32_t>(offsetof(AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB, ____client_0)); }
	inline RuntimeObject* get__client_0() const { return ____client_0; }
	inline RuntimeObject** get_address_of__client_0() { return &____client_0; }
	inline void set__client_0(RuntimeObject* value)
	{
		____client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_t32DDA912B1EEA224F107BDD96FD925AA97A6E9FE  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::Keywords
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___Keywords_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::Extras
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___Extras_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::MediationExtras
	List_1_t3BE2E70C31BF7B6E3FE9457A64789A9D94AE308A * ___MediationExtras_3;

public:
	inline static int32_t get_offset_of_Keywords_1() { return static_cast<int32_t>(offsetof(AdRequest_t32DDA912B1EEA224F107BDD96FD925AA97A6E9FE, ___Keywords_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_Keywords_1() const { return ___Keywords_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_Keywords_1() { return &___Keywords_1; }
	inline void set_Keywords_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___Keywords_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Keywords_1), (void*)value);
	}

	inline static int32_t get_offset_of_Extras_2() { return static_cast<int32_t>(offsetof(AdRequest_t32DDA912B1EEA224F107BDD96FD925AA97A6E9FE, ___Extras_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_Extras_2() const { return ___Extras_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_Extras_2() { return &___Extras_2; }
	inline void set_Extras_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___Extras_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extras_2), (void*)value);
	}

	inline static int32_t get_offset_of_MediationExtras_3() { return static_cast<int32_t>(offsetof(AdRequest_t32DDA912B1EEA224F107BDD96FD925AA97A6E9FE, ___MediationExtras_3)); }
	inline List_1_t3BE2E70C31BF7B6E3FE9457A64789A9D94AE308A * get_MediationExtras_3() const { return ___MediationExtras_3; }
	inline List_1_t3BE2E70C31BF7B6E3FE9457A64789A9D94AE308A ** get_address_of_MediationExtras_3() { return &___MediationExtras_3; }
	inline void set_MediationExtras_3(List_1_t3BE2E70C31BF7B6E3FE9457A64789A9D94AE308A * value)
	{
		___MediationExtras_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MediationExtras_3), (void*)value);
	}
};

struct AdRequest_t32DDA912B1EEA224F107BDD96FD925AA97A6E9FE_StaticFields
{
public:
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_t32DDA912B1EEA224F107BDD96FD925AA97A6E9FE_StaticFields, ___U3CVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Api.MobileAds
struct MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D  : public RuntimeObject
{
public:

public:
};

struct MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_0;
	// System.Threading.SynchronizationContext GoogleMobileAds.Api.MobileAds::_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____synchronizationContext_1;
	// System.Int32 GoogleMobileAds.Api.MobileAds::_unityMainThreadId
	int32_t ____unityMainThreadId_2;
	// System.Boolean GoogleMobileAds.Api.MobileAds::<RaiseAdEventsOnUnityMainThread>k__BackingField
	bool ___U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_clientFactory_0() { return static_cast<int32_t>(offsetof(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields, ___clientFactory_0)); }
	inline RuntimeObject* get_clientFactory_0() const { return ___clientFactory_0; }
	inline RuntimeObject** get_address_of_clientFactory_0() { return &___clientFactory_0; }
	inline void set_clientFactory_0(RuntimeObject* value)
	{
		___clientFactory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_0), (void*)value);
	}

	inline static int32_t get_offset_of__synchronizationContext_1() { return static_cast<int32_t>(offsetof(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields, ____synchronizationContext_1)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__synchronizationContext_1() const { return ____synchronizationContext_1; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__synchronizationContext_1() { return &____synchronizationContext_1; }
	inline void set__synchronizationContext_1(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____synchronizationContext_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____synchronizationContext_1), (void*)value);
	}

	inline static int32_t get_offset_of__unityMainThreadId_2() { return static_cast<int32_t>(offsetof(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields, ____unityMainThreadId_2)); }
	inline int32_t get__unityMainThreadId_2() const { return ____unityMainThreadId_2; }
	inline int32_t* get_address_of__unityMainThreadId_2() { return &____unityMainThreadId_2; }
	inline void set__unityMainThreadId_2(int32_t value)
	{
		____unityMainThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields, ___U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3)); }
	inline bool get_U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3() const { return ___U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3() { return &___U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3; }
	inline void set_U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3(bool value)
	{
		___U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3 = value;
	}
};


// GoogleMobileAds.Api.ResponseInfo
struct ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Api.ResponseInfo::_client
	RuntimeObject* ____client_0;

public:
	inline static int32_t get_offset_of__client_0() { return static_cast<int32_t>(offsetof(ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0, ____client_0)); }
	inline RuntimeObject* get__client_0() const { return ____client_0; }
	inline RuntimeObject** get_address_of__client_0() { return &____client_0; }
	inline void set__client_0(RuntimeObject* value)
	{
		____client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2  : public RuntimeObject
{
public:
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.RewardedAd::OnAdPaid
	Action_1_tC07F1102F2A241255FB51FC0C00CF2522DB2789F * ___OnAdPaid_0;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdClicked
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnAdClicked_1;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdImpressionRecorded
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnAdImpressionRecorded_2;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdFullScreenContentOpened
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnAdFullScreenContentOpened_3;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdFullScreenContentClosed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnAdFullScreenContentClosed_4;
	// System.Action`1<GoogleMobileAds.Api.AdError> GoogleMobileAds.Api.RewardedAd::OnAdFullScreenContentFailed
	Action_1_t51FFDE30BDF903C1EBBDB7D4601AB153386E7FD9 * ___OnAdFullScreenContentFailed_5;
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::_client
	RuntimeObject* ____client_6;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::_canShowAd
	bool ____canShowAd_7;
	// System.Action`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::_userRewardEarnedCallback
	Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 * ____userRewardEarnedCallback_8;

public:
	inline static int32_t get_offset_of_OnAdPaid_0() { return static_cast<int32_t>(offsetof(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2, ___OnAdPaid_0)); }
	inline Action_1_tC07F1102F2A241255FB51FC0C00CF2522DB2789F * get_OnAdPaid_0() const { return ___OnAdPaid_0; }
	inline Action_1_tC07F1102F2A241255FB51FC0C00CF2522DB2789F ** get_address_of_OnAdPaid_0() { return &___OnAdPaid_0; }
	inline void set_OnAdPaid_0(Action_1_tC07F1102F2A241255FB51FC0C00CF2522DB2789F * value)
	{
		___OnAdPaid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdPaid_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClicked_1() { return static_cast<int32_t>(offsetof(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2, ___OnAdClicked_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnAdClicked_1() const { return ___OnAdClicked_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnAdClicked_1() { return &___OnAdClicked_1; }
	inline void set_OnAdClicked_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnAdClicked_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClicked_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdImpressionRecorded_2() { return static_cast<int32_t>(offsetof(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2, ___OnAdImpressionRecorded_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnAdImpressionRecorded_2() const { return ___OnAdImpressionRecorded_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnAdImpressionRecorded_2() { return &___OnAdImpressionRecorded_2; }
	inline void set_OnAdImpressionRecorded_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnAdImpressionRecorded_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdImpressionRecorded_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFullScreenContentOpened_3() { return static_cast<int32_t>(offsetof(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2, ___OnAdFullScreenContentOpened_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnAdFullScreenContentOpened_3() const { return ___OnAdFullScreenContentOpened_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnAdFullScreenContentOpened_3() { return &___OnAdFullScreenContentOpened_3; }
	inline void set_OnAdFullScreenContentOpened_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnAdFullScreenContentOpened_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFullScreenContentOpened_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFullScreenContentClosed_4() { return static_cast<int32_t>(offsetof(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2, ___OnAdFullScreenContentClosed_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnAdFullScreenContentClosed_4() const { return ___OnAdFullScreenContentClosed_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnAdFullScreenContentClosed_4() { return &___OnAdFullScreenContentClosed_4; }
	inline void set_OnAdFullScreenContentClosed_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnAdFullScreenContentClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFullScreenContentClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFullScreenContentFailed_5() { return static_cast<int32_t>(offsetof(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2, ___OnAdFullScreenContentFailed_5)); }
	inline Action_1_t51FFDE30BDF903C1EBBDB7D4601AB153386E7FD9 * get_OnAdFullScreenContentFailed_5() const { return ___OnAdFullScreenContentFailed_5; }
	inline Action_1_t51FFDE30BDF903C1EBBDB7D4601AB153386E7FD9 ** get_address_of_OnAdFullScreenContentFailed_5() { return &___OnAdFullScreenContentFailed_5; }
	inline void set_OnAdFullScreenContentFailed_5(Action_1_t51FFDE30BDF903C1EBBDB7D4601AB153386E7FD9 * value)
	{
		___OnAdFullScreenContentFailed_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFullScreenContentFailed_5), (void*)value);
	}

	inline static int32_t get_offset_of__client_6() { return static_cast<int32_t>(offsetof(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2, ____client_6)); }
	inline RuntimeObject* get__client_6() const { return ____client_6; }
	inline RuntimeObject** get_address_of__client_6() { return &____client_6; }
	inline void set__client_6(RuntimeObject* value)
	{
		____client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____client_6), (void*)value);
	}

	inline static int32_t get_offset_of__canShowAd_7() { return static_cast<int32_t>(offsetof(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2, ____canShowAd_7)); }
	inline bool get__canShowAd_7() const { return ____canShowAd_7; }
	inline bool* get_address_of__canShowAd_7() { return &____canShowAd_7; }
	inline void set__canShowAd_7(bool value)
	{
		____canShowAd_7 = value;
	}

	inline static int32_t get_offset_of__userRewardEarnedCallback_8() { return static_cast<int32_t>(offsetof(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2, ____userRewardEarnedCallback_8)); }
	inline Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 * get__userRewardEarnedCallback_8() const { return ____userRewardEarnedCallback_8; }
	inline Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 ** get_address_of__userRewardEarnedCallback_8() { return &____userRewardEarnedCallback_8; }
	inline void set__userRewardEarnedCallback_8(Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 * value)
	{
		____userRewardEarnedCallback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userRewardEarnedCallback_8), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// GoogleMobileAds.Api.MobileAds/<RaiseAction>c__AnonStorey4
struct U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673  : public RuntimeObject
{
public:
	// System.Action GoogleMobileAds.Api.MobileAds/<RaiseAction>c__AnonStorey4::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673, ___action_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_0() const { return ___action_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0
struct U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69  : public RuntimeObject
{
public:
	// System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError> GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::adLoadCallback
	Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 * ___adLoadCallback_0;
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_adLoadCallback_0() { return static_cast<int32_t>(offsetof(U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69, ___adLoadCallback_0)); }
	inline Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 * get_adLoadCallback_0() const { return ___adLoadCallback_0; }
	inline Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 ** get_address_of_adLoadCallback_0() { return &___adLoadCallback_0; }
	inline void set_adLoadCallback_0(Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 * value)
	{
		___adLoadCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adLoadCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey2
struct U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey2::adError
	AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB * ___adError_0;
	// GoogleMobileAds.Api.RewardedAd GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey2::$this
	RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * ___U24this_1;

public:
	inline static int32_t get_offset_of_adError_0() { return static_cast<int32_t>(offsetof(U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0, ___adError_0)); }
	inline AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB * get_adError_0() const { return ___adError_0; }
	inline AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB ** get_address_of_adError_0() { return &___adError_0; }
	inline void set_adError_0(AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB * value)
	{
		___adError_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adError_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0, ___U24this_1)); }
	inline RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * get_U24this_1() const { return ___U24this_1; }
	inline RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey3
struct U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdValueEventArgs GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey3::args
	AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E * ___args_0;
	// GoogleMobileAds.Api.RewardedAd GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey3::$this
	RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * ___U24this_1;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F, ___args_0)); }
	inline AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E * get_args_0() const { return ___args_0; }
	inline AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E ** get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E * value)
	{
		___args_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F, ___U24this_1)); }
	inline RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * get_U24this_1() const { return ___U24this_1; }
	inline RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey4
struct U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.Reward GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey4::args
	Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB * ___args_0;
	// GoogleMobileAds.Api.RewardedAd GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey4::$this
	RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * ___U24this_1;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF, ___args_0)); }
	inline Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB * get_args_0() const { return ___args_0; }
	inline Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB ** get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB * value)
	{
		___args_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF, ___U24this_1)); }
	inline RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * get_U24this_1() const { return ___U24this_1; }
	inline RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0/<Load>c__AnonStorey1
struct U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0/<Load>c__AnonStorey1::loadAdError
	LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 * ___loadAdError_0;
	// GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0 GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0/<Load>c__AnonStorey1::<>f__ref$0
	U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * ___U3CU3Ef__refU240_1;

public:
	inline static int32_t get_offset_of_loadAdError_0() { return static_cast<int32_t>(offsetof(U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B, ___loadAdError_0)); }
	inline LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 * get_loadAdError_0() const { return ___loadAdError_0; }
	inline LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 ** get_address_of_loadAdError_0() { return &___loadAdError_0; }
	inline void set_loadAdError_0(LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 * value)
	{
		___loadAdError_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadAdError_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_1() { return static_cast<int32_t>(offsetof(U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B, ___U3CU3Ef__refU240_1)); }
	inline U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * get_U3CU3Ef__refU240_1() const { return ___U3CU3Ef__refU240_1; }
	inline U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 ** get_address_of_U3CU3Ef__refU240_1() { return &___U3CU3Ef__refU240_1; }
	inline void set_U3CU3Ef__refU240_1(U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * value)
	{
		___U3CU3Ef__refU240_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU240_1), (void*)value);
	}
};


// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_tE145979C35C743715445B2A05B11B32F99C23977  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorClientEventArgs_tE145979C35C743715445B2A05B11B32F99C23977, ___U3CAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAdErrorClientU3Ek__BackingField_1() const { return ___U3CAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAdErrorClientU3Ek__BackingField_1() { return &___U3CAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t806DD55342062227A4009E24834AE96A38A57F28 * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_t806DD55342062227A4009E24834AE96A38A57F28 * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_t806DD55342062227A4009E24834AE96A38A57F28 ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_t806DD55342062227A4009E24834AE96A38A57F28 * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdValueU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2  : public AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::_client
	RuntimeObject* ____client_1;

public:
	inline static int32_t get_offset_of__client_1() { return static_cast<int32_t>(offsetof(LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2, ____client_1)); }
	inline RuntimeObject* get__client_1() const { return ____client_1; }
	inline RuntimeObject** get_address_of__client_1() { return &____client_1; }
	inline void set__client_1(RuntimeObject* value)
	{
		____client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____client_1), (void*)value);
	}
};


// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_tEA06A2783B8A99A8BE3B746AC5F17D78BAAAFECD  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadAdErrorClientEventArgs_tEA06A2783B8A99A8BE3B746AC5F17D78BAAAFECD, ___U3CLoadAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoadAdErrorClientU3Ek__BackingField_1() const { return ___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return &___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoadAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.Reward
struct Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String GoogleMobileAds.Api.Reward::Type
	String_t* ___Type_1;
	// System.Double GoogleMobileAds.Api.Reward::Amount
	double ___Amount_2;

public:
	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_1), (void*)value);
	}

	inline static int32_t get_offset_of_Amount_2() { return static_cast<int32_t>(offsetof(Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB, ___Amount_2)); }
	inline double get_Amount_2() const { return ___Amount_2; }
	inline double* get_address_of_Amount_2() { return &___Amount_2; }
	inline void set_Amount_2(double value)
	{
		___Amount_2 = value;
	}
};


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// GoogleMobileAds.Api.AdValue/PrecisionType
struct PrecisionType_t467BB0058BDA0CFAB1146C47CF04BCB7BE2F8A14 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdValue/PrecisionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrecisionType_t467BB0058BDA0CFAB1146C47CF04BCB7BE2F8A14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdValue
struct AdValue_t806DD55342062227A4009E24834AE96A38A57F28  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdValue/PrecisionType GoogleMobileAds.Api.AdValue::<Precision>k__BackingField
	int32_t ___U3CPrecisionU3Ek__BackingField_0;
	// System.Int64 GoogleMobileAds.Api.AdValue::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdValue::<CurrencyCode>k__BackingField
	String_t* ___U3CCurrencyCodeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPrecisionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdValue_t806DD55342062227A4009E24834AE96A38A57F28, ___U3CPrecisionU3Ek__BackingField_0)); }
	inline int32_t get_U3CPrecisionU3Ek__BackingField_0() const { return ___U3CPrecisionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CPrecisionU3Ek__BackingField_0() { return &___U3CPrecisionU3Ek__BackingField_0; }
	inline void set_U3CPrecisionU3Ek__BackingField_0(int32_t value)
	{
		___U3CPrecisionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValue_t806DD55342062227A4009E24834AE96A38A57F28, ___U3CValueU3Ek__BackingField_1)); }
	inline int64_t get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(int64_t value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCurrencyCodeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdValue_t806DD55342062227A4009E24834AE96A38A57F28, ___U3CCurrencyCodeU3Ek__BackingField_2)); }
	inline String_t* get_U3CCurrencyCodeU3Ek__BackingField_2() const { return ___U3CCurrencyCodeU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CCurrencyCodeU3Ek__BackingField_2() { return &___U3CCurrencyCodeU3Ek__BackingField_2; }
	inline void set_U3CCurrencyCodeU3Ek__BackingField_2(String_t* value)
	{
		___U3CCurrencyCodeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrencyCodeU3Ek__BackingField_2), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<GoogleMobileAds.Api.AdError>
struct Action_1_t51FFDE30BDF903C1EBBDB7D4601AB153386E7FD9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Api.AdValue>
struct Action_1_tC07F1102F2A241255FB51FC0C00CF2522DB2789F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_t89BFB4ED006417A4EC114C83D068A2672DE132B3  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t6F9E7F70FBDCF668C8D223536FD8E12FE8D6DA85  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t51D0DAA0D0445DF2E88FDFD413A8499CDD0A86A7  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tDEA3E18AEA7E36A1A5404BD1686B1700EBD2D546  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m75162359A2D2A3EC74C4D93C4F1FCF39F8D4FAB4 (AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds::SetUnityMainThreadSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetUnityMainThreadSynchronizationContext_m57B0D93EE70DF4361A738A70BD539AF4C02856EE (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds/<RaiseAction>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseActionU3Ec__AnonStorey4__ctor_mD40D1E8675829115CBBB41B625B16808C2B442B8 (U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 * __this, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Api.MobileAds::get_RaiseAdEventsOnUnityMainThread()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MobileAds_get_RaiseAdEventsOnUnityMainThread_m666A82842C0649D1082F7093EEA4339F5040F86D_inline (const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942 (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_RegisterAdEvents_mD9C07CFE82774348721C15D2F75BB196550F59D1 (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0__ctor_m9F04B6A33CC486E2F33C68674100252B0C6350B1 (U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mBB9C0F59D916B464F0355F5E4D77C736EE0E4797 (const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mC71C41B1816877BB771ABC806330A115C83A8AA2 (EventHandler_1_t51D0DAA0D0445DF2E88FDFD413A8499CDD0A86A7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t51D0DAA0D0445DF2E88FDFD413A8499CDD0A86A7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean GoogleMobileAds.Api.RewardedAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_CanShowAd_m7D7482F53F2599086917F6FD0A6567F18E6AD95D (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.ResponseInfo::.ctor(GoogleMobileAds.Common.IResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfo__ctor_m7649C3E6FFBA6F4C0A434BD6DDC2EDECA4AA4DCA (ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mE4B93DB2BED943B031C1B33DC5CBD164524ED261 (EventHandler_1_t89BFB4ED006417A4EC114C83D068A2672DE132B3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t89BFB4ED006417A4EC114C83D068A2672DE132B3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mEC33B8B61097B3D7AB7CF0D338B798ABF7C9E471 (EventHandler_1_t6F9E7F70FBDCF668C8D223536FD8E12FE8D6DA85 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t6F9E7F70FBDCF668C8D223536FD8E12FE8D6DA85 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m0B3B4742D424596D7C16D6CFFA089E3AC640F10F (EventHandler_1_tDEA3E18AEA7E36A1A5404BD1686B1700EBD2D546 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDEA3E18AEA7E36A1A5404BD1686B1700EBD2D546 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::RaiseAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterAdEventsU3Ec__AnonStorey2__ctor_m80A53A73AB7B6C88A7716EF97DB7213DB13953B7 (U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0 * __this, const RuntimeMethod* method);
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_m5A802BFC28476C80B37BFCFC9613D33430BCC87A_inline (AdErrorClientEventArgs_tE145979C35C743715445B2A05B11B32F99C23977 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterAdEventsU3Ec__AnonStorey3__ctor_m7AE56F8868840992DE6BAE9EEC4F5910F5C1E059 (U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterAdEventsU3Ec__AnonStorey4__ctor_m9C5946CD95F68D8E1CE133F84406DB44F5AC25CE (U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0/<Load>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey1__ctor_m1598D3DE4C82B0879CEDEDBA19FBAD1E5DDCC694 (U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B * __this, const RuntimeMethod* method);
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mABB3784FB4183AFDED61523A41539741345DC175_inline (LoadAdErrorClientEventArgs_tEA06A2783B8A99A8BE3B746AC5F17D78BAAAFECD * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_mB9A53C4D050AA092D795A4A6F777A11C58A1BA38 (LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(GoogleMobileAds.Common.IRewardedAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_mBF4FD1B0A8126720B59CCA56740DBE631C5AC3E2 (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>::Invoke(!0,!1)
inline void Action_2_Invoke_mC6EF72F6A3CCD50F4B2A19FA91F7680A746D68E4 (Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 * __this, RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * ___arg10, LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 *, RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 *, LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 *, const RuntimeMethod*))Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`1<GoogleMobileAds.Api.AdError>::Invoke(!0)
inline void Action_1_Invoke_m90C7BA2D650F4D4A4B59BD5F475BCD2DAF36B72A (Action_1_t51FFDE30BDF903C1EBBDB7D4601AB153386E7FD9 * __this, AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t51FFDE30BDF903C1EBBDB7D4601AB153386E7FD9 *, AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::get_AdValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdValue_t806DD55342062227A4009E24834AE96A38A57F28 * AdValueEventArgs_get_AdValue_m47E07F15E141D9E7E4599AD72935E6CCCBFE047C_inline (AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.AdValue>::Invoke(!0)
inline void Action_1_Invoke_m442DE17B948DCF6504FFA75781D7BB8770EDDE0D (Action_1_tC07F1102F2A241255FB51FC0C00CF2522DB2789F * __this, AdValue_t806DD55342062227A4009E24834AE96A38A57F28 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC07F1102F2A241255FB51FC0C00CF2522DB2789F *, AdValue_t806DD55342062227A4009E24834AE96A38A57F28 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<GoogleMobileAds.Api.Reward>::Invoke(!0)
inline void Action_1_Invoke_m364520A4413605029A9531BF6C918840A2897FE7 (Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 * __this, Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 *, Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m75162359A2D2A3EC74C4D93C4F1FCF39F8D4FAB4 (AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set__client_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_m6B9BA7043A52DB62AF8646F8697E1A32743FCE88 (AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_mB9A53C4D050AA092D795A4A6F777A11C58A1BA38 (LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m75162359A2D2A3EC74C4D93C4F1FCF39F8D4FAB4(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___client0;
		__this->set__client_1(L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_mC4331750780379F9A2BD15E3D9FC58263527F3C3 (LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__client_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__cctor_m325501C5A17B90DE872C1ACF89C85B5782804073 (const RuntimeMethod* method)
{
	{
		MobileAds_SetUnityMainThreadSynchronizationContext_m57B0D93EE70DF4361A738A70BD539AF4C02856EE(/*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.MobileAds::get_RaiseAdEventsOnUnityMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileAds_get_RaiseAdEventsOnUnityMainThread_m666A82842C0649D1082F7093EEA4339F5040F86D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		bool L_0 = ((MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var))->get_U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3();
		return L_0;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mBB9C0F59D916B464F0355F5E4D77C736EE0E4797 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t3E0D382AEC6761A542347C53837626C91373E2CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_mBB9C0F59D916B464F0355F5E4D77C736EE0E4797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var))->get_clientFactory_0();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_3, MobileAds_GetClientFactory_mBB9C0F59D916B464F0355F5E4D77C736EE0E4797_RuntimeMethod_var);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		RuntimeObject * L_6;
		L_6 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		((MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var))->set_clientFactory_0(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_t3E0D382AEC6761A542347C53837626C91373E2CF_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var))->get_clientFactory_0();
		return L_7;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::RaiseAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRaiseActionU3Ec__AnonStorey4_U3CU3Em__0_mBD5D966DAE68B53DF0169B4643CAD0F1B3032275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 * V_0 = NULL;
	{
		U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 * L_0 = (U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 *)il2cpp_codegen_object_new(U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673_il2cpp_TypeInfo_var);
		U3CRaiseActionU3Ec__AnonStorey4__ctor_mD40D1E8675829115CBBB41B625B16808C2B442B8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 * L_1 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action0;
		NullCheck(L_1);
		L_1->set_action_0(L_2);
		U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 * L_3 = V_0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3->get_action_0();
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = MobileAds_get_RaiseAdEventsOnUnityMainThread_m666A82842C0649D1082F7093EEA4339F5040F86D_inline(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_6 = ((MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var))->get__synchronizationContext_1();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_7;
		L_7 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		int32_t L_9 = ((MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var))->get__unityMainThreadId_2();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_004d;
		}
	}

IL_0041:
	{
		U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 * L_10 = V_0;
		NullCheck(L_10);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = L_10->get_action_0();
		NullCheck(L_11);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_11, /*hidden argument*/NULL);
		return;
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_12 = ((MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var))->get__synchronizationContext_1();
		U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 * L_13 = V_0;
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_14 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_14, L_13, (intptr_t)((intptr_t)U3CRaiseActionU3Ec__AnonStorey4_U3CU3Em__0_mBD5D966DAE68B53DF0169B4643CAD0F1B3032275_RuntimeMethod_var), /*hidden argument*/NULL);
		U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 * L_15 = V_0;
		NullCheck(L_15);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = L_15->get_action_0();
		NullCheck(L_12);
		VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_12, L_14, L_16);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::SetUnityMainThreadSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetUnityMainThreadSynchronizationContext_m57B0D93EE70DF4361A738A70BD539AF4C02856EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0;
		L_0 = SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		((MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var))->set__synchronizationContext_1(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		((MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var))->set__unityMainThreadId_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.ResponseInfo::.ctor(GoogleMobileAds.Common.IResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfo__ctor_m7649C3E6FFBA6F4C0A434BD6DDC2EDECA4AA4DCA (ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set__client_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.ResponseInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseInfo_ToString_m882EFA31D94993E6DCBEE84FBF20E068A6069622 (ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(GoogleMobileAds.Common.IRewardedAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_mBF4FD1B0A8126720B59CCA56740DBE631C5AC3E2 (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set__canShowAd_7((bool)1);
		RuntimeObject* L_0 = ___client0;
		__this->set__client_6(L_0);
		RewardedAd_RegisterAdEvents_mD9C07CFE82774348721C15D2F75BB196550F59D1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Load(System.String,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Load_m1D4AB054F4D1471F6093EC64489802C8978ED23F (String_t* ___adUnitId0, AdRequest_t32DDA912B1EEA224F107BDD96FD925AA97A6E9FE * ___request1, Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 * ___adLoadCallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mC71C41B1816877BB771ABC806330A115C83A8AA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t51D0DAA0D0445DF2E88FDFD413A8499CDD0A86A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t3E0D382AEC6761A542347C53837626C91373E2CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m743183A467410BD696AB884EFBD625BC2534FAAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_m4A5DA47A71334D0CBF420977C3D35A43447BEBA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * V_0 = NULL;
	{
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_0 = (U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 *)il2cpp_codegen_object_new(U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69_il2cpp_TypeInfo_var);
		U3CLoadU3Ec__AnonStorey0__ctor_m9F04B6A33CC486E2F33C68674100252B0C6350B1(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_1 = V_0;
		Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 * L_2 = ___adLoadCallback2;
		NullCheck(L_1);
		L_1->set_adLoadCallback_0(L_2);
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_3 = V_0;
		NullCheck(L_3);
		Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 * L_4 = L_3->get_adLoadCallback_0();
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD, /*hidden argument*/NULL);
		return;
	}

IL_0023:
	{
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = MobileAds_GetClientFactory_mBB9C0F59D916B464F0355F5E4D77C736EE0E4797(/*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.IClientFactory::BuildRewardedAdClient() */, IClientFactory_t3E0D382AEC6761A542347C53837626C91373E2CF_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		L_5->set_client_1(L_7);
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->get_client_1();
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::CreateRewardedAd() */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_9);
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->get_client_1();
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_12 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_13 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_13, L_12, (intptr_t)((intptr_t)U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m743183A467410BD696AB884EFBD625BC2534FAAD_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_11, L_13);
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->get_client_1();
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_16 = V_0;
		EventHandler_1_t51D0DAA0D0445DF2E88FDFD413A8499CDD0A86A7 * L_17 = (EventHandler_1_t51D0DAA0D0445DF2E88FDFD413A8499CDD0A86A7 *)il2cpp_codegen_object_new(EventHandler_1_t51D0DAA0D0445DF2E88FDFD413A8499CDD0A86A7_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mC71C41B1816877BB771ABC806330A115C83A8AA2(L_17, L_16, (intptr_t)((intptr_t)U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_m4A5DA47A71334D0CBF420977C3D35A43447BEBA1_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mC71C41B1816877BB771ABC806330A115C83A8AA2_RuntimeMethod_var);
		NullCheck(L_15);
		InterfaceActionInvoker1< EventHandler_1_t51D0DAA0D0445DF2E88FDFD413A8499CDD0A86A7 * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_15, L_17);
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->get_client_1();
		String_t* L_20 = ___adUnitId0;
		AdRequest_t32DDA912B1EEA224F107BDD96FD925AA97A6E9FE * L_21 = ___request1;
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, AdRequest_t32DDA912B1EEA224F107BDD96FD925AA97A6E9FE * >::Invoke(19 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_19, L_20, L_21);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.RewardedAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_CanShowAd_m7D7482F53F2599086917F6FD0A6567F18E6AD95D (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->get__client_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->get__canShowAd_7();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Show(System.Action`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_mDF055BF09643F042DC3A45EA8A3F3E540169AD6B (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 * ___userRewardEarnedCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RewardedAd_CanShowAd_m7D7482F53F2599086917F6FD0A6567F18E6AD95D(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		__this->set__canShowAd_7((bool)0);
		Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 * L_1 = ___userRewardEarnedCallback0;
		__this->set__userRewardEarnedCallback_8(L_1);
		RuntimeObject* L_2 = __this->get__client_6();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(20 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::Show() */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_2);
	}

IL_0024:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Destroy_m69BD0C0C20AB57597D92F2784C10D0BB34FF713A (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__canShowAd_7((bool)0);
		RuntimeObject* L_0 = __this->get__client_6();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__client_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(22 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::DestroyRewardedAd() */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_1);
	}

IL_001d:
	{
		return;
	}
}
// GoogleMobileAds.Api.ResponseInfo GoogleMobileAds.Api.RewardedAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0 * RewardedAd_GetResponseInfo_mE1A521227882BAF1510E334AB65327DAB7E63ED1 (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0 * G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get__client_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0 *)(NULL));
		goto IL_0021;
	}

IL_0011:
	{
		RuntimeObject* L_1 = __this->get__client_6();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(21 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IRewardedAdClient::GetResponseInfoClient() */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_1);
		ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0 * L_3 = (ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0 *)il2cpp_codegen_object_new(ResponseInfo_t6C37DE5B78A16C5EEED5D35BD4FE0EFE88D183C0_il2cpp_TypeInfo_var);
		ResponseInfo__ctor_m7649C3E6FFBA6F4C0A434BD6DDC2EDECA4AA4DCA(L_3, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_RegisterAdEvents_mD9C07CFE82774348721C15D2F75BB196550F59D1 (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m0B3B4742D424596D7C16D6CFFA089E3AC640F10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mE4B93DB2BED943B031C1B33DC5CBD164524ED261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mEC33B8B61097B3D7AB7CF0D338B798ABF7C9E471_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t6F9E7F70FBDCF668C8D223536FD8E12FE8D6DA85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t89BFB4ED006417A4EC114C83D068A2672DE132B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDEA3E18AEA7E36A1A5404BD1686B1700EBD2D546_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__0_mAEB8B50B32D272E4C7619E7DCC33B523F94BE5EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__1_m141DE54DA1D602B3EB716134CE0FBADCD2144744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__2_m5EEEB3616932EC86B7C5F2F182C77890C1AFD5BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__3_mF6E35C54409557EB2C616968A93848D0C76274E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__4_m2A8445A99D60F80091ACF715A44698A34FF64C2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__5_m1964F8BF3D5D2B871688F810CCC93C0B1988CC3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__6_m02BAE62EBD229AAE3E055A27950B6BDA2348DDEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__client_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__0_mAEB8B50B32D272E4C7619E7DCC33B523F94BE5EC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(16 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdClicked(System.Action) */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->get__client_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_3, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__1_m141DE54DA1D602B3EB716134CE0FBADCD2144744_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->get__client_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__2_m5EEEB3616932EC86B7C5F2F182C77890C1AFD5BA_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get__client_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_7, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__3_mF6E35C54409557EB2C616968A93848D0C76274E0_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(14 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get__client_6();
		EventHandler_1_t89BFB4ED006417A4EC114C83D068A2672DE132B3 * L_9 = (EventHandler_1_t89BFB4ED006417A4EC114C83D068A2672DE132B3 *)il2cpp_codegen_object_new(EventHandler_1_t89BFB4ED006417A4EC114C83D068A2672DE132B3_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mE4B93DB2BED943B031C1B33DC5CBD164524ED261(L_9, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__4_m2A8445A99D60F80091ACF715A44698A34FF64C2F_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mE4B93DB2BED943B031C1B33DC5CBD164524ED261_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_t89BFB4ED006417A4EC114C83D068A2672DE132B3 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get__client_6();
		EventHandler_1_t6F9E7F70FBDCF668C8D223536FD8E12FE8D6DA85 * L_11 = (EventHandler_1_t6F9E7F70FBDCF668C8D223536FD8E12FE8D6DA85 *)il2cpp_codegen_object_new(EventHandler_1_t6F9E7F70FBDCF668C8D223536FD8E12FE8D6DA85_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mEC33B8B61097B3D7AB7CF0D338B798ABF7C9E471(L_11, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__5_m1964F8BF3D5D2B871688F810CCC93C0B1988CC3C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mEC33B8B61097B3D7AB7CF0D338B798ABF7C9E471_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_t6F9E7F70FBDCF668C8D223536FD8E12FE8D6DA85 * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get__client_6();
		EventHandler_1_tDEA3E18AEA7E36A1A5404BD1686B1700EBD2D546 * L_13 = (EventHandler_1_tDEA3E18AEA7E36A1A5404BD1686B1700EBD2D546 *)il2cpp_codegen_object_new(EventHandler_1_tDEA3E18AEA7E36A1A5404BD1686B1700EBD2D546_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m0B3B4742D424596D7C16D6CFFA089E3AC640F10F(L_13, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__6_m02BAE62EBD229AAE3E055A27950B6BDA2348DDEF_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m0B3B4742D424596D7C16D6CFFA089E3AC640F10F_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tDEA3E18AEA7E36A1A5404BD1686B1700EBD2D546 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>) */, IRewardedAdClient_t7255636C078712314B938A25DD1547F0C58C9019_il2cpp_TypeInfo_var, L_12, L_13);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__0_mAEB8B50B32D272E4C7619E7DCC33B523F94BE5EC (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__7_m3363873E5ED93C748889CBBA82F729836EEEF341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__7_m3363873E5ED93C748889CBBA82F729836EEEF341_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__1(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__1_m141DE54DA1D602B3EB716134CE0FBADCD2144744 (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__8_m07B5B43AAD0578F38B75424B547CCF128B4993BF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__8_m07B5B43AAD0578F38B75424B547CCF128B4993BF_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__2_m5EEEB3616932EC86B7C5F2F182C77890C1AFD5BA (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__9_m31BBA6C3DE03F61AA0AD2F9BAD77099FE7299902_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__9_m31BBA6C3DE03F61AA0AD2F9BAD77099FE7299902_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__3_mF6E35C54409557EB2C616968A93848D0C76274E0 (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__A_mA16151D456016AA5B967CA38D0E6C26D3138F9CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)RewardedAd_U3CRegisterAdEventsU3Em__A_mA16151D456016AA5B967CA38D0E6C26D3138F9CC_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__4_m2A8445A99D60F80091ACF715A44698A34FF64C2F (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_tE145979C35C743715445B2A05B11B32F99C23977 * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRegisterAdEventsU3Ec__AnonStorey2_U3CU3Em__0_mA8BE0B9BAF1204516DBA55A83E82BA4ED277C3B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0 * V_0 = NULL;
	{
		U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0 * L_0 = (U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0 *)il2cpp_codegen_object_new(U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0_il2cpp_TypeInfo_var);
		U3CRegisterAdEventsU3Ec__AnonStorey2__ctor_m80A53A73AB7B6C88A7716EF97DB7213DB13953B7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0 * L_2 = V_0;
		AdErrorClientEventArgs_tE145979C35C743715445B2A05B11B32F99C23977 * L_3 = ___error1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = AdErrorClientEventArgs_get_AdErrorClient_m5A802BFC28476C80B37BFCFC9613D33430BCC87A_inline(L_3, /*hidden argument*/NULL);
		AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB * L_5 = (AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB *)il2cpp_codegen_object_new(AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB_il2cpp_TypeInfo_var);
		AdError__ctor_m75162359A2D2A3EC74C4D93C4F1FCF39F8D4FAB4(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_adError_0(L_5);
		U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0 * L_6 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, L_6, (intptr_t)((intptr_t)U3CRegisterAdEventsU3Ec__AnonStorey2_U3CU3Em__0_mA8BE0B9BAF1204516DBA55A83E82BA4ED277C3B4_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381(L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__5(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__5_m1964F8BF3D5D2B871688F810CCC93C0B1988CC3C (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, RuntimeObject * ___sender0, AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRegisterAdEventsU3Ec__AnonStorey3_U3CU3Em__0_m5AF6FD0C0E1EEE656F43621BCADE752A803FF5F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F * V_0 = NULL;
	{
		U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F * L_0 = (U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F *)il2cpp_codegen_object_new(U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F_il2cpp_TypeInfo_var);
		U3CRegisterAdEventsU3Ec__AnonStorey3__ctor_m7AE56F8868840992DE6BAE9EEC4F5910F5C1E059(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F * L_1 = V_0;
		AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E * L_2 = ___args1;
		NullCheck(L_1);
		L_1->set_args_0(L_2);
		U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F * L_4 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, L_4, (intptr_t)((intptr_t)U3CRegisterAdEventsU3Ec__AnonStorey3_U3CU3Em__0_m5AF6FD0C0E1EEE656F43621BCADE752A803FF5F1_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__6(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__6_m02BAE62EBD229AAE3E055A27950B6BDA2348DDEF (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, RuntimeObject * ___sender0, Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRegisterAdEventsU3Ec__AnonStorey4_U3CU3Em__0_m92D3C38FF40FD078475098EC1C40431383E37BEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF * V_0 = NULL;
	{
		U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF * L_0 = (U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF *)il2cpp_codegen_object_new(U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF_il2cpp_TypeInfo_var);
		U3CRegisterAdEventsU3Ec__AnonStorey4__ctor_m9C5946CD95F68D8E1CE133F84406DB44F5AC25CE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF * L_1 = V_0;
		Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB * L_2 = ___args1;
		NullCheck(L_1);
		L_1->set_args_0(L_2);
		U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF * L_4 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, L_4, (intptr_t)((intptr_t)U3CRegisterAdEventsU3Ec__AnonStorey4_U3CU3Em__0_m92D3C38FF40FD078475098EC1C40431383E37BEE_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__7_m3363873E5ED93C748889CBBA82F729836EEEF341 (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnAdClicked_1();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnAdClicked_1();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__8_m07B5B43AAD0578F38B75424B547CCF128B4993BF (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnAdFullScreenContentClosed_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnAdFullScreenContentClosed_4();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__9_m31BBA6C3DE03F61AA0AD2F9BAD77099FE7299902 (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnAdFullScreenContentOpened_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnAdFullScreenContentOpened_3();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__A()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__A_mA16151D456016AA5B967CA38D0E6C26D3138F9CC (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * __this, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnAdImpressionRecorded_2();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnAdImpressionRecorded_2();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds/<RaiseAction>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseActionU3Ec__AnonStorey4__ctor_mD40D1E8675829115CBBB41B625B16808C2B442B8 (U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<RaiseAction>c__AnonStorey4::<>m__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseActionU3Ec__AnonStorey4_U3CU3Em__0_mBD5D966DAE68B53DF0169B4643CAD0F1B3032275 (U3CRaiseActionU3Ec__AnonStorey4_t19EBDC2629FB63E7C3847E892D22A896A0D32673 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_action_0();
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0__ctor_m9F04B6A33CC486E2F33C68674100252B0C6350B1 (U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::<>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m743183A467410BD696AB884EFBD625BC2534FAAD (U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__2_mD91B2B52A30D48F377A674E4721A16EA2B8D3F7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)U3CLoadU3Ec__AnonStorey0_U3CU3Em__2_mD91B2B52A30D48F377A674E4721A16EA2B8D3F7A_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::<>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_m4A5DA47A71334D0CBF420977C3D35A43447BEBA1 (U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_tEA06A2783B8A99A8BE3B746AC5F17D78BAAAFECD * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey1_U3CU3Em__0_m2835D1C5F7BEA5B05901A30106F40347E5B8A42A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B * V_0 = NULL;
	{
		U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B * L_0 = (U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B *)il2cpp_codegen_object_new(U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B_il2cpp_TypeInfo_var);
		U3CLoadU3Ec__AnonStorey1__ctor_m1598D3DE4C82B0879CEDEDBA19FBAD1E5DDCC694(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__refU240_1(__this);
		U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B * L_2 = V_0;
		LoadAdErrorClientEventArgs_tEA06A2783B8A99A8BE3B746AC5F17D78BAAAFECD * L_3 = ___error1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mABB3784FB4183AFDED61523A41539741345DC175_inline(L_3, /*hidden argument*/NULL);
		LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 * L_5 = (LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 *)il2cpp_codegen_object_new(LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2_il2cpp_TypeInfo_var);
		LoadAdError__ctor_mB9A53C4D050AA092D795A4A6F777A11C58A1BA38(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_loadAdError_0(L_5);
		U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B * L_6 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, L_6, (intptr_t)((intptr_t)U3CLoadU3Ec__AnonStorey1_U3CU3Em__0_m2835D1C5F7BEA5B05901A30106F40347E5B8A42A_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		MobileAds_RaiseAction_mF41F39A8B795CD04336A9A9A64808070FAFA4381(L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::<>m__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__2_mD91B2B52A30D48F377A674E4721A16EA2B8D3F7A (U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mC6EF72F6A3CCD50F4B2A19FA91F7680A746D68E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 * L_0 = __this->get_adLoadCallback_0();
		RuntimeObject* L_1 = __this->get_client_1();
		RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * L_2 = (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 *)il2cpp_codegen_object_new(RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2_il2cpp_TypeInfo_var);
		RewardedAd__ctor_mBF4FD1B0A8126720B59CCA56740DBE631C5AC3E2(L_2, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_2_Invoke_mC6EF72F6A3CCD50F4B2A19FA91F7680A746D68E4(L_0, L_2, (LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 *)NULL, /*hidden argument*/Action_2_Invoke_mC6EF72F6A3CCD50F4B2A19FA91F7680A746D68E4_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterAdEventsU3Ec__AnonStorey2__ctor_m80A53A73AB7B6C88A7716EF97DB7213DB13953B7 (U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterAdEventsU3Ec__AnonStorey2_U3CU3Em__0_mA8BE0B9BAF1204516DBA55A83E82BA4ED277C3B4 (U3CRegisterAdEventsU3Ec__AnonStorey2_tFF2B0B50DD39E1ECC7C160590C316F491E644CB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m90C7BA2D650F4D4A4B59BD5F475BCD2DAF36B72A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		Action_1_t51FFDE30BDF903C1EBBDB7D4601AB153386E7FD9 * L_1 = L_0->get_OnAdFullScreenContentFailed_5();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * L_2 = __this->get_U24this_1();
		NullCheck(L_2);
		Action_1_t51FFDE30BDF903C1EBBDB7D4601AB153386E7FD9 * L_3 = L_2->get_OnAdFullScreenContentFailed_5();
		AdError_tCAE686DFABCDCFA79295FA6FD7895FF60F7714AB * L_4 = __this->get_adError_0();
		NullCheck(L_3);
		Action_1_Invoke_m90C7BA2D650F4D4A4B59BD5F475BCD2DAF36B72A(L_3, L_4, /*hidden argument*/Action_1_Invoke_m90C7BA2D650F4D4A4B59BD5F475BCD2DAF36B72A_RuntimeMethod_var);
	}

IL_0026:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterAdEventsU3Ec__AnonStorey3__ctor_m7AE56F8868840992DE6BAE9EEC4F5910F5C1E059 (U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey3::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterAdEventsU3Ec__AnonStorey3_U3CU3Em__0_m5AF6FD0C0E1EEE656F43621BCADE752A803FF5F1 (U3CRegisterAdEventsU3Ec__AnonStorey3_tDAF748BBA63689110FA9BD0785EB994FDF2EA93F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m442DE17B948DCF6504FFA75781D7BB8770EDDE0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		Action_1_tC07F1102F2A241255FB51FC0C00CF2522DB2789F * L_1 = L_0->get_OnAdPaid_0();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * L_2 = __this->get_U24this_1();
		NullCheck(L_2);
		Action_1_tC07F1102F2A241255FB51FC0C00CF2522DB2789F * L_3 = L_2->get_OnAdPaid_0();
		AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E * L_4 = __this->get_args_0();
		NullCheck(L_4);
		AdValue_t806DD55342062227A4009E24834AE96A38A57F28 * L_5;
		L_5 = AdValueEventArgs_get_AdValue_m47E07F15E141D9E7E4599AD72935E6CCCBFE047C_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Action_1_Invoke_m442DE17B948DCF6504FFA75781D7BB8770EDDE0D(L_3, L_5, /*hidden argument*/Action_1_Invoke_m442DE17B948DCF6504FFA75781D7BB8770EDDE0D_RuntimeMethod_var);
	}

IL_002b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterAdEventsU3Ec__AnonStorey4__ctor_m9C5946CD95F68D8E1CE133F84406DB44F5AC25CE (U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd/<RegisterAdEvents>c__AnonStorey4::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterAdEventsU3Ec__AnonStorey4_U3CU3Em__0_m92D3C38FF40FD078475098EC1C40431383E37BEE (U3CRegisterAdEventsU3Ec__AnonStorey4_tD2D2B6288AD1D8E7E51B08E43914DBED2AA2ADCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m364520A4413605029A9531BF6C918840A2897FE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 * L_1 = L_0->get__userRewardEarnedCallback_8();
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * L_2 = __this->get_U24this_1();
		NullCheck(L_2);
		Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 * L_3 = L_2->get__userRewardEarnedCallback_8();
		Reward_t53574C3E2B34B29EE3862B9EAE8B8334C0BC2CDB * L_4 = __this->get_args_0();
		NullCheck(L_3);
		Action_1_Invoke_m364520A4413605029A9531BF6C918840A2897FE7(L_3, L_4, /*hidden argument*/Action_1_Invoke_m364520A4413605029A9531BF6C918840A2897FE7_RuntimeMethod_var);
		RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 * L_5 = __this->get_U24this_1();
		NullCheck(L_5);
		L_5->set__userRewardEarnedCallback_8((Action_1_t98391A847645114F2BA5B92EEE5468EC768B5F87 *)NULL);
	}

IL_0032:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0/<Load>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey1__ctor_m1598D3DE4C82B0879CEDEDBA19FBAD1E5DDCC694 (U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0/<Load>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey1_U3CU3Em__0_m2835D1C5F7BEA5B05901A30106F40347E5B8A42A (U3CLoadU3Ec__AnonStorey1_tCEB4057475B18306E4F2D507C08F257BA1947F0B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mC6EF72F6A3CCD50F4B2A19FA91F7680A746D68E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadU3Ec__AnonStorey0_t6041C919D2F462D1B29F9B1F6836C104707CBC69 * L_0 = __this->get_U3CU3Ef__refU240_1();
		NullCheck(L_0);
		Action_2_t7C87901D0FAA593DD7C7AFD84D329336BD62B102 * L_1 = L_0->get_adLoadCallback_0();
		LoadAdError_tC98C4056F61EE463CB20B281FE0BF663A32279B2 * L_2 = __this->get_loadAdError_0();
		NullCheck(L_1);
		Action_2_Invoke_mC6EF72F6A3CCD50F4B2A19FA91F7680A746D68E4(L_1, (RewardedAd_tE35A13E627AB27659F9C7DA24CF5BB4CA855ABB2 *)NULL, L_2, /*hidden argument*/Action_2_Invoke_mC6EF72F6A3CCD50F4B2A19FA91F7680A746D68E4_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MobileAds_get_RaiseAdEventsOnUnityMainThread_m666A82842C0649D1082F7093EEA4339F5040F86D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var);
		bool L_0 = ((MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t94FBD442C710E5C35536E85C517CE33B9333EA4D_il2cpp_TypeInfo_var))->get_U3CRaiseAdEventsOnUnityMainThreadU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_m5A802BFC28476C80B37BFCFC9613D33430BCC87A_inline (AdErrorClientEventArgs_tE145979C35C743715445B2A05B11B32F99C23977 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mABB3784FB4183AFDED61523A41539741345DC175_inline (LoadAdErrorClientEventArgs_tEA06A2783B8A99A8BE3B746AC5F17D78BAAAFECD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoadAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdValue_t806DD55342062227A4009E24834AE96A38A57F28 * AdValueEventArgs_get_AdValue_m47E07F15E141D9E7E4599AD72935E6CCCBFE047C_inline (AdValueEventArgs_t370093BE304A6D5E913DDA88544E062BE0B3D91E * __this, const RuntimeMethod* method)
{
	{
		AdValue_t806DD55342062227A4009E24834AE96A38A57F28 * L_0 = __this->get_U3CAdValueU3Ek__BackingField_1();
		return L_0;
	}
}
