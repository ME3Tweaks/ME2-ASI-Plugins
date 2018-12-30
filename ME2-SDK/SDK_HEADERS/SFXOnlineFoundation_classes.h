/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXOnlineFoundation_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentLogin.SFXOnlineConnectMode
/*enum SFXOnlineConnectMode
{
	SFXONLINE_CM_NONE                                  = 0,
	SFXONLINE_CM_IMPLICIT                              = 1,
	SFXONLINE_CM_EXPLICIT                              = 2,
	SFXONLINE_CM_SILENT                                = 3,
	SFXONLINE_CM_MAX                                   = 4
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineConnectionState
/*enum SFXOnlineConnectionState
{
	SFXONLINE_CONNECTIONSTATE_NONE                     = 0,
	SFXONLINE_CONNECTIONSTATE_NUCLEUS_CONNECTING       = 1,
	SFXONLINE_CONNECTIONSTATE_NUCLEUS_CONNECTED        = 2,
	SFXONLINE_CONNECTIONSTATE_CERBERUS_CONNECTING      = 3,
	SFXONLINE_CONNECTIONSTATE_CERBERUS_ENTITLED        = 4,
	SFXONLINE_CONNECTIONSTATE_CERBERUS_CONNECTED       = 5,
	SFXONLINE_CONNECTIONSTATE_MAX                      = 6
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineNotificationPriority
/*enum SFXOnlineNotificationPriority
{
	SFXONLINE_NOTIFICATION_PRIORITY_CERBERUS_CONTENT   = 0,
	SFXONLINE_NOTIFICATION_PRIORITY_NEW_UNLOCK         = 1,
	SFXONLINE_NOTIFICATION_PRIORITY_SOON_DLC           = 2,
	SFXONLINE_NOTIFICATION_PRIORITY_MOTD               = 3,
	SFXONLINE_NOTIFICATION_PRIORITY_UPCOMING_UNLOCK    = 4,
	SFXONLINE_NOTIFICATION_PRIORITY_UPCOMING_DLC       = 5,
	SFXONLINE_NOTIFICATION_PRIORITY_MAX                = 6
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineNotificationOfferPurchaseStatus
/*enum SFXOnlineNotificationOfferPurchaseStatus
{
	SFXONLINE_NOTIFICATION_PURHASE_UNKNOWN             = 0,
	SFXONLINE_NOTIFICATION_PURHASE_COMPLETED           = 1,
	SFXONLINE_NOTIFICATION_PURHASE_NONE                = 2,
	SFXONLINE_NOTIFICATION_PURHASE_MAX                 = 3
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlinePurchaseSource
/*enum SFXOnlinePurchaseSource
{
	SFXONLINE_PS_CERBERUS_MAIN                         = 0,
	SFXONLINE_PS_SHOW_LIVE_CONTENT                     = 1,
	SFXONLINE_PS_DLC_AVAILABLE                         = 2,
	SFXONLINE_PS_MARKETPLACE                           = 3,
	SFXONLINE_PS_MAX                                   = 4
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineConnection_MessageType
/*enum SFXOnlineConnection_MessageType
{
	SFXONLINE_MT_NORMAL                                = 0,
	SFXONLINE_MT_DOWNLOAD_PROMPT                       = 1,
	SFXONLINE_MT_MAX                                   = 2
};*/

// Enum SFXOnlineFoundation.SFXOnlineEvent.SFXOnlineEventType
/*enum SFXOnlineEventType
{
	SFXONLINE_EVENT_NONE                               = 0,
	SFXONLINE_EVENT_TICK                               = 1,
	SFXONLINE_EVENT_TIMER                              = 2,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE          = 3,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE01        = 4,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE02        = 5,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE03        = 6,
	SFXONLINE_EVENT_PLATFORM_CONNECT                   = 7,
	SFXONLINE_EVENT_PLATFORM_DISCONNECT                = 8,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE               = 9,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE01             = 10,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE02             = 11,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE03             = 12,
	SFXONLINE_EVENT_PLATFORM_UI_OPEN                   = 13,
	SFXONLINE_EVENT_PLATFORM_UI_CLOSE                  = 14,
	SFXONLINE_EVENT_PLATFORM_LOGINCANCEL               = 15,
	SFXONLINE_EVENT_PLATFORM_UI_KEYBOARD               = 16,
	SFXONLINE_EVENT_MAX                                = 17
};*/

// Enum SFXOnlineFoundation.SFXOnlineEvent.SFXOnlineEventStatus
/*enum SFXOnlineEventStatus
{
	SFXONLINE_EVENT_STATUS_NONE                        = 0,
	SFXONLINE_EVENT_STATUS_PENDING                     = 1,
	SFXONLINE_EVENT_STATUS_COMPLETE                    = 2,
	SFXONLINE_EVENT_STATUS_MAX                         = 3
};*/

// Enum SFXOnlineFoundation.SFXOnlineEvent.SFXOnlineEventStatusFinished
/*enum SFXOnlineEventStatusFinished
{
	SFXONLINE_EVENT_STATUS_FINISHED_SUCCESS            = 0,
	SFXONLINE_EVENT_STATUS_FINISHED_FAILED             = 1,
	SFXONLINE_EVENT_STATUS_FINISHED_CANCELED           = 2,
	SFXONLINE_EVENT_STATUS_FINISHED_TIMEOUT            = 3,
	SFXONLINE_EVENT_STATUS_FINISHED_MAX                = 4
};*/

// Enum SFXOnlineFoundation.SFXOnlineComponentBlazeHub.SFXOnlineComponentBlazeHubEnvironment
/*enum SFXOnlineComponentBlazeHubEnvironment
{
	SFXONLINE_BLAZEHUB_ENV_DEV                         = 0,
	SFXONLINE_BLAZEHUB_ENV_TEST                        = 1,
	SFXONLINE_BLAZEHUB_ENV_CERT                        = 2,
	SFXONLINE_BLAZEHUB_ENV_PROD                        = 3,
	SFXONLINE_BLAZEHUB_ENV_MAX                         = 4
};*/

// Enum SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SFXOnlineXenonPlayerListButtonType
/*enum SFXOnlineXenonPlayerListButtonType
{
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_TITLECUSTOM = 0,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_PLAYERREVIEW = 1,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_GAMEINVITE  = 2,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_MESSAGE     = 3,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_FRIENDREQUEST = 4,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_NONE        = 5,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_MAX         = 6
};*/

// Enum SFXOnlineFoundation.SFXOnlineSubsystem.SFXOnlineComponentType
/*enum SFXOnlineComponentType
{
	SFXONLINE_COMPONENT_TYPE_COORDINATOR               = 0,
	SFXONLINE_COMPONENT_TYPE_ONLINE_UI                 = 1,
	SFXONLINE_COMPONENT_TYPE_PLATFORM                  = 2,
	SFXONLINE_COMPONENT_TYPE_ONLINE_API                = 3,
	SFXONLINE_COMPONENT_TYPE_LOGIN                     = 4,
	SFXONLINE_COMPONENT_TYPE_LEADERBOARD               = 5,
	SFXONLINE_COMPONENT_TYPE_STATS                     = 6,
	SFXONLINE_COMPONENT_TYPE_ACHIEVEMENT               = 7,
	SFXONLINE_COMPONENT_TYPE_PLAYGROUP                 = 8,
	SFXONLINE_COMPONENT_TYPE_MATCH_MAKER               = 9,
	SFXONLINE_COMPONENT_TYPE_GAME_MANAGER              = 10,
	SFXONLINE_COMPONENT_TYPE_VOICE                     = 11,
	SFXONLINE_COMPONENT_TYPE_ANTICHEAT                 = 12,
	SFXONLINE_COMPONENT_TYPE_SERVER_LIST               = 13,
	SFXONLINE_COMPONENT_TYPE_GAMEFLOW                  = 14,
	SFXONLINE_COMPONENT_TYPE_ASSOCIATION               = 15,
	SFXONLINE_COMPONENT_TYPE_UNREALINTERFACE           = 16,
	SFXONLINE_COMPONENT_TYPE_NOTIFICATION              = 17,
	SFXONLINE_COMPONENT_TYPE_MAX                       = 18
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXOnlineFoundation.SFXOnlineComponent
// 0x0028 (0x0064 - 0x003C)
class USFXOnlineComponent : public UObject
{
public:
	unsigned long                                      NeedsStateMachine : 1;                            		// 0x003C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FName                                       APIName;                                          		// 0x0040 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class USFXOnlineSubsystem*                         OnlineSubsystem;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< struct FSFXOnlineSubscriberEventType >     EventSubscriberTable;                             		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEvent__Delegate;                              		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1931 ];

		return pClassPointer;
	};

	bool IsEventPending ( unsigned char eEventType, int nEventId );
	class USFXOnlineEvent* GetEvent ( unsigned char eEventType, int nEventId );
	void WaitingForWorkSetObject ( TArray< class USFXOnlineEvent* > aOnlineEventSet, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkSetType ( TArray< unsigned char > aWorkUnits, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkObject ( class USFXOnlineEvent* oEvent, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkType ( unsigned char eWork, struct FScriptDelegate fnWorkComplete, int nEventId );
	void NotifyWorkFinishedObject ( class USFXOnlineEvent* oEvent, unsigned char eStatusFinished );
	void NotifyWorkFinishedType ( unsigned char eWork, unsigned char eStatusFinished, int nEventId );
	void NotifyWorkStartedObject ( class USFXOnlineEvent* oEvent, unsigned char eEventType );
	void NotifyWorkStartedType ( unsigned char eWork, int nEventId, float fTimeOut );
	void NotifyEventObject ( class USFXOnlineEvent* oEvent );
	void NotifyEventType ( unsigned char eEventType, unsigned char eStatus, unsigned char eOutcome );
	void StopWaitingForAllWork ( class UObject* oCallbackTarget );
	void UnsubscribeFromAllEvents ( class UObject* oCallbackTarget );
	void UnsubscribeFromEvent ( unsigned char oEventType, struct FScriptDelegate fnEventCallback );
	void SubscribeToEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback );
	void OnEvent ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void SubscribeToEvents ( );
};

UClass* USFXOnlineComponent::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEvent
// 0x0020 (0x005C - 0x003C)
class USFXOnlineEvent : public UObject
{
public:
	unsigned long                                      IsUnique : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      TimeOutEnabled : 1;                               		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      EventType;                                        		// 0x0040 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentStatus;                                    		// 0x0041 (0x0001) [0x0000000000000000]              
	unsigned char                                      Outcome;                                          		// 0x0042 (0x0001) [0x0000000000000000]              
	int                                                EventID;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              TimeOut;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                ErrorCode;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     ErrorString;                                      		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1933 ];

		return pClassPointer;
	};

	void Update ( class USFXOnlineEvent* oEvent );
	bool IsComplete ( );
	bool IsPending ( );
	bool CompleteAndSucceeded ( );
	bool HasTimedOut ( );
	bool IsTimeoutEnabled ( );
	void DisableTimeout ( );
	void EnableTimeout ( );
	void SetTimeout ( float fEventTimeout );
	float GetTimeout ( );
	void SetErrorString ( struct FString sMessage );
	struct FString GetErrorString ( );
	void SetErrorCode ( int nCode );
	int GetErrorCode ( );
	void SetStatus ( unsigned char eNewStatus );
	unsigned char GetStatus ( );
	void SetOutcome ( unsigned char eStatusFinished );
	unsigned char GetOutcome ( );
	void SetEventId ( int nNewEventId );
	int GetEventId ( );
	void SetEventType ( unsigned char eNewEventType );
	unsigned char GetEventType ( );
};

UClass* USFXOnlineEvent::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEvent_Integer
// 0x0004 (0x0060 - 0x005C)
class USFXOnlineEvent_Integer : public USFXOnlineEvent
{
public:
	int                                                m_nInteger;                                       		// 0x005C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1934 ];

		return pClassPointer;
	};

	void SetInteger ( int nInteger );
	int GetInteger ( );
};

UClass* USFXOnlineEvent_Integer::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEvent_String
// 0x000C (0x0068 - 0x005C)
class USFXOnlineEvent_String : public USFXOnlineEvent
{
public:
	struct FString                                     StringData;                                       		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1935 ];

		return pClassPointer;
	};

	void SetStringData ( struct FString sStringData );
	struct FString GetStringData ( );
};

UClass* USFXOnlineEvent_String::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEvent_Notification
// 0x0010 (0x0078 - 0x0068)
class USFXOnlineEvent_Notification : public USFXOnlineEvent_String
{
public:
	struct FString                                     m_sImageName;                                     		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nPriority;                                      		// 0x0074 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1936 ];

		return pClassPointer;
	};

	void SetPriority ( int nPriority );
	int GetPriority ( );
	void SetImageName ( struct FString sImageName );
	struct FString GetImageName ( );
};

UClass* USFXOnlineEvent_Notification::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEvent_PlatformKeyboardUI
// 0x003C (0x0098 - 0x005C)
class USFXOnlineEvent_PlatformKeyboardUI : public USFXOnlineEvent
{
public:
	struct FString                                     Response;                                         		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x0068 (0x0001) [0x0000000000000000]              
	struct FString                                     TitleText;                                        		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DefaultText;                                      		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      ShouldValidate : 1;                               		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      RouteThroughConsole : 1;                          		// 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FPointer                                    ResponseBuffer;                                   		// 0x0094 (0x0004) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1937 ];

		return pClassPointer;
	};

};

UClass* USFXOnlineEvent_PlatformKeyboardUI::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEventList
// 0x000C (0x0048 - 0x003C)
class USFXOnlineEventList : public UObject
{
public:
	TArray< class USFXOnlineEvent* >                   EventList;                                        		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1938 ];

		return pClassPointer;
	};

	class USFXOnlineEvent* GetNextTimedOutEvent ( );
	bool RemoveEvent ( class USFXOnlineEvent* oEvent );
	int FindEventByType ( unsigned char eEventType, int nEventId );
	int FindEvent ( class USFXOnlineEvent* oEvent );
	class USFXOnlineEvent* GetEventAtIndex ( int nEventIndex );
	class USFXOnlineEvent* GetEvent ( class USFXOnlineEvent* oEvent );
	bool AddEvent ( class USFXOnlineEvent* oEvent );
};

UClass* USFXOnlineEventList::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponent
// 0x0000 (0x003C - 0x003C)
class UISFXOnlineComponent : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1939 ];

		return pClassPointer;
	};

	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* UISFXOnlineComponent::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentAchievement
// 0x0000 (0x003C - 0x003C)
class UISFXOnlineComponentAchievement : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1940 ];

		return pClassPointer;
	};

	bool IsGranted ( struct FString sAchievement );
	void Grant ( struct FString sAchievement );
};

UClass* UISFXOnlineComponentAchievement::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentAPI
// 0x0000 (0x003C - 0x003C)
class UISFXOnlineComponentAPI : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1941 ];

		return pClassPointer;
	};

};

UClass* UISFXOnlineComponentAPI::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentLogin
// 0x0000 (0x003C - 0x003C)
class UISFXOnlineComponentLogin : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1942 ];

		return pClassPointer;
	};

	unsigned char GetConnectionState ( );
	unsigned char CanShowPresenceInformation ( int nUserIndex );
	unsigned char CanViewPlayerProfiles ( int nUserIndex );
	unsigned char CanPurchaseContent ( int nUserIndex );
	unsigned char CanDownloadUserContent ( int nUserIndex );
	unsigned char CanCommunicate ( int nUserIndex );
	unsigned char CanPlayOnline ( int nUserIndex );
	void EnterCDKey ( struct FString sKey );
	void OnDownloadOffersUICompleted ( );
	void OnDLCInfoLoaded ( );
	void OpenCerberusUI ( );
	bool CheckEntitlement ( struct FString sGroup, struct FString sTag );
	bool IsCerberusMember ( );
	void DisablePersona ( struct FString sPersonaNonGrata );
	void CreatePersona ( struct FString sPersonaName );
	void SelectPersona ( struct FString sPersonaName );
	void AcceptTOS ( unsigned long bAccepted );
	void Disconnect ( );
	void SubmitStore ( TArray< int > aiChosen );
	void SubmitCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, unsigned long bSubmit );
	void SubmitEmailPasswordMismatch ( struct FString Email, struct FString Password, int eReturnCode );
	void SubmitMessageBox ( int eReturnCode );
	void SubmitRedeemCode ( unsigned long bContinue, struct FString i_sCode );
	void SubmitCerberusWelcomeMessage ( );
	void SubmitCerberusIntro ( int eReturnCode );
	void SubmitNucleusWelcomeMessage ( );
	void SubmitCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, unsigned long bSubmit );
	void SubmitParentEmail ( unsigned long bContinue, struct FString ParentEmail );
	void SubmitNucleusLogin ( struct FString Email, struct FString Password, unsigned char eReturnCode );
	void SubmitIntroPage ( unsigned long bContinue, unsigned long bSimulated );
	void Connect ( unsigned char connectMode );
	void GoBackInUI ( );
	void Cancel ( );
	struct FUniqueNetId GetUserId ( );
	struct FString GetPersonaName ( );
	bool IsSignedIn ( );
	bool IsConnected ( );
	void SwitchActiveUserIndex ( int nNewIndex );
	int GetActiveUserIndex ( );
	unsigned char GetLoginStatus ( );
};

UClass* UISFXOnlineComponentLogin::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentNotification
// 0x0000 (0x003C - 0x003C)
class UISFXOnlineComponentNotification : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1943 ];

		return pClassPointer;
	};

	struct FSFXOnlineTargetOfferInfo GetTargetOfferInfo ( unsigned char nSource );
	unsigned char HasUserPurchasedAnOffer ( struct FSFXOnline_OfferID aOfferId );
	bool DownloadOffers ( TArray< struct FSFXOnline_OfferID > aOfferIds );
	struct FString GetOfferKeyIfEntitled ( int internalId );
	TArray< struct FSFXOfferDescriptor > GetGrantingOffers ( );
	TArray< struct FSFXOfferDescriptor > GetEntitledDLCInfo ( );
	void RefreshEntitlementFlags ( );
	TArray< struct FSFXOnlineEntitlementGroupInfo > GetEntitlementGroups ( );
	int GetDaysSinceCerberusRegistration ( );
	bool IsCalendarUnlockEarned ( int nDay );
	void RequestServerInfo ( );
	void RequestData ( );
};

UClass* UISFXOnlineComponentNotification::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentPlatform
// 0x0000 (0x003C - 0x003C)
class UISFXOnlineComponentPlatform : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1944 ];

		return pClassPointer;
	};

	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	bool ShowKeyboardUI ( unsigned char byLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowFriendsInviteUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowFriendsUI ( unsigned char byLocalUserNum );
	unsigned char CanShowPresenceInformation ( unsigned char byLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char byLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char byLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char byLocalUserNum );
	unsigned char CanCommunicate ( unsigned char byLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char byLocalUserNum );
	void SetRichPresence ( unsigned char byLocalUserNum, int nPresenceMode, TArray< struct FLocalizedStringSetting >* aLocalizedStringSettings, TArray< struct FSettingsProperty >* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char byLocalUserNum );
};

UClass* UISFXOnlineComponentPlatform::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentUserInterface
// 0x0000 (0x003C - 0x003C)
class UISFXOnlineComponentUserInterface : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1945 ];

		return pClassPointer;
	};

	void eventShowStore ( TArray< struct FSFXOfferDescriptor > aOffers );
	void eventHasCerberusDLC ( unsigned long bVal );
	void eventOnDisplayNotification ( unsigned char Type, struct FString MessageData, struct FString Title, struct FString Image );
	void eventClearNotifications ( );
	void eventCloseEANetworking ( );
	void eventSetState ( unsigned char eState );
	void ShowEmailPasswordMismatch ( struct FString Email, struct FString Password );
	void ShowMessageBoxWait ( );
	void ShowMessageBox ( struct FString sTitle, struct FString sMessage, struct FString sButton1Text, struct FString sButton2Text, struct FString sButton3Text );
	void ShowCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, TArray< struct FString > m_CountryCodeList, TArray< struct FString > m_CountryDisplayList );
	void ShowCerberusWelcomeMessage ( );
	void ShowRedeemCode ( );
	void ShowCerberusIntro ( );
	void ShowNucleusWelcomeMessage ( );
	void ShowCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bRegisterProduct, unsigned long bBioWareProducts, unsigned long bUnderage );
	void ShowParentEmail ( );
	void ShowAccountDemographics ( TArray< struct FString > m_CountryCodeList, TArray< struct FString > m_CountryDisplayList );
	void ShowTermsOfService ( struct FString i_sTermsOfService, unsigned long bTOSChanged );
	void ShowNucleusLogin ( struct FString Email, struct FString Password, int eScreenState );
	void ShowIntroPage ( );
};

UClass* UISFXOnlineComponentUserInterface::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineDefine
// 0x0000 (0x003C - 0x003C)
class USFXOnlineDefine : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1946 ];

		return pClassPointer;
	};

};

UClass* USFXOnlineDefine::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentCoordinator
// 0x01AC (0x01E8 - 0x003C)
class USFXOnlineComponentCoordinator : public UObject
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FSFXOnlineEventNotify                       OnlineEventNotifyTable[ 0x11 ];                   		// 0x0040 (0x0198) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXOnlineEventList*                         EventList;                                        		// 0x01D8 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnEvent__Delegate;                              		// 0x01DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1947 ];

		return pClassPointer;
	};

	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void StopWaitingForAllWork ( class UObject* oCallbackTarget );
	void WaitingForWorkSetObject ( TArray< class USFXOnlineEvent* > aEventObjects, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkSetType ( TArray< unsigned char > aEventTypes, struct FScriptDelegate fnWorkComplete, TArray< int > aWorkEventIds );
	void WaitingForWorkObject ( class USFXOnlineEvent* oEvent, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkType ( unsigned char eEventType, struct FScriptDelegate fnWorkComplete, int nEventId );
	bool IsEventPending ( unsigned char eEventType, int nEventId );
	class USFXOnlineEvent* GetEvent ( unsigned char eEventType, int nEventId );
	void UnsubscribeFromAllEvents ( class UObject* oCallbackTarget );
	void UnsubscribeFromEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback );
	void SubscribeToEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback );
	void NotifyWorkFinishedObject ( class USFXOnlineEvent* oEvent, unsigned char eStatusFinished );
	void NotifyWorkFinishedType ( unsigned char eEventType, unsigned char eStatusFinished, int nEventId );
	void NotifyWorkStartedObject ( class USFXOnlineEvent* oEvent, unsigned char eEventType );
	void NotifyWorkStartedType ( unsigned char eEventType, int nEventId, float fTimeOut );
	void NotifyEventObject ( class USFXOnlineEvent* oEvent );
	void NotifyEventType ( unsigned char eEventType, unsigned char eStatus, unsigned char eOutcome );
	void OnTick ( class USFXOnlineEvent* oEvent );
	void OnEvent ( class USFXOnlineEvent* oEvent );
};

UClass* USFXOnlineComponentCoordinator::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineSubsystem
// 0x00EC (0x0174 - 0x0088)
class USFXOnlineSubsystem : public UOnlineSubsystem
{
public:
	int                                                GameListenPort;                                   		// 0x0088 (0x0004) [0x0000000000000000]              
	struct FString                                     GameProtocolVersion;                              		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxPlayerCount;                                   		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                MaxObserverCount;                                 		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                ReserveTimeOut;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                GameNetworkTimeOutMS;                             		// 0x00A4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FSFXOnlineAchievement >             AchievementList;                                  		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      SuggestPersonaNames : 1;                          		// 0x00B4 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	TArray< struct FString >                           SuggestPersonaNameKeywords;                       		// 0x00B8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FSFXOnlineComponentDescription >    ComponentClassList;                               		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UISFXOnlineComponent*                        OnlineComponentList[ 0x12 ];                      		// 0x00D0 (0x0090) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0118 (0x0048) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class USFXOnlineEvent*                             TickEvent;                                        		// 0x0160 (0x0004) [0x0000000000000000]              
	struct FPointer                                    PlatformOnlineGameCallbackManager;                		// 0x0164 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FString                                     OnlineUIClass;                                    		// 0x0168 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1948 ];

		return pClassPointer;
	};

	bool ShowConsoleRoutedKeyboardUI ( unsigned char eLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString sDefaultText, int nMaxResultLength );
	bool ShowKeyboardUI ( unsigned char eLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString sDefaultText, int nMaxResultLength );
	struct FString FormatTime ( float fInSeconds, unsigned long bShowHours, unsigned long bShowMins );
	bool CheckEntitlement ( struct FString sGroup, struct FString sTag );
	bool IsCerberusMember ( );
	struct FUniqueNetId GetUniqueIdFromConnection ( class APlayerReplicationInfo* oPRI );
	struct FString MD5HashString ( struct FString InStr );
	struct FString GetProjectID ( );
	struct FString GetCDKey ( );
	struct FString GetLanguage ( );
	struct FName GetPlatform ( );
	void eventShutDown ( );
	bool NativeInit ( );
	int GetGameListenPort ( );
	int GetReserveTimeout ( );
	int GetMaxObserverCount ( );
	int GetMaxPlayerCount ( );
	void SetMaxPlayerCount ( int nMaxPlayers );
	struct FString GetGameProtocolVersion ( );
	class UISFXOnlineComponentNotification* GetComponentNotification ( );
	class USFXOnlineComponentCoordinator* GetCoordinator ( );
	class UISFXOnlineComponentUserInterface* GetComponentUserInterface ( );
	class UISFXOnlineComponentLogin* GetComponentLogin ( );
	class UISFXOnlineComponentAPI* GetComponentAPI ( );
	class UISFXOnlineComponentAchievement* GetComponentAchievement ( );
	class UISFXOnlineComponentPlatform* GetComponentPlatform ( );
	struct FString StripBadPWCharacters ( struct FString sPassword );
	struct FString eventGetURL ( );
	void CreateComponents ( );
	void InitGameProtocolVersion ( );
	bool eventInit ( );
	TArray< struct FSFXOnlineAchievement > GetAchievementList ( );
};

UClass* USFXOnlineSubsystem::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformPC
// 0x0004 (0x0068 - 0x0064)
class USFXOnlineComponentPlatformPC : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0064 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1949 ];

		return pClassPointer;
	};

	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, TArray< struct FLocalizedStringSetting >* aLocalizedStringSettings, TArray< struct FSettingsProperty >* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentPlatformPC::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementXenon
// 0x0008 (0x0044 - 0x003C)
class USFXOnlineComponentAchievementXenon : public UObject
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class USFXOnlineSubsystem*                         OnlineSubsystem;                                  		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1950 ];

		return pClassPointer;
	};

	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( struct FString sAchievement );
	void Grant ( struct FString sAchievement );
};

UClass* USFXOnlineComponentAchievementXenon::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformXenon
// 0x0024 (0x0088 - 0x0064)
class USFXOnlineComponentPlatformXenon : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0064 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    NotificationHandle;                               		// 0x0068 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                NumLogins;                                        		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsInSignInUI : 1;                                		// 0x0070 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned char                                      LoginStatus[ 0x4 ];                               		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                LastInputDeviceConnectedMask;                     		// 0x0078 (0x0004) [0x0000000000000000]              
	TArray< struct FPointer >                          OverlappedTasks;                                  		// 0x007C (0x000C) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1951 ];

		return pClassPointer;
	};

	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, TArray< struct FLocalizedStringSetting >* aLocalizedStringSettings, TArray< struct FSettingsProperty >* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	void TickAsyncTasks ( );
	void OnTick ( class USFXOnlineEvent* oEvent );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentPlatformXenon::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformPS3
// 0x0010 (0x0074 - 0x0064)
class USFXOnlineComponentPlatformPS3 : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0064 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FUniqueNetId >                      PendingRecentPlayers;                             		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1952 ];

		return pClassPointer;
	};

	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, TArray< struct FLocalizedStringSetting >* aLocalizedStringSettings, TArray< struct FSettingsProperty >* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	void OnTick ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentPlatformPS3::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentBlaze
// 0x0000 (0x0064 - 0x0064)
class USFXOnlineComponentBlaze : public USFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1953 ];

		return pClassPointer;
	};

	struct FName GetAPIName ( );
};

UClass* USFXOnlineComponentBlaze::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeHub
// 0x0028 (0x008C - 0x0064)
class USFXOnlineComponentBlazeHub : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAPI;                  		// 0x0064 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     BlazeServiceName;                                 		// 0x0068 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     BlazeClientName;                                  		// 0x0074 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	unsigned char                                      BlazeEnv;                                         		// 0x0080 (0x0001) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	struct FPointer                                    CurrentBlazeHub;                                  		// 0x0084 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    BlazeNetworkAdapter;                              		// 0x0088 (0x0004) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1954 ];

		return pClassPointer;
	};

	void OnTick ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	bool ConnectDirtySock ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentBlazeHub::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeLogin
// 0x00AC (0x0110 - 0x0064)
class USFXOnlineComponentBlazeLogin : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentLogin;                		// 0x0064 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__BlazeStateEventHandler;            		// 0x0068 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_Blaze__LoginManager__LoginManagerListener;		// 0x006C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    ConnectionMgr;                                    		// 0x0070 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    LoginMgr;                                         		// 0x0074 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_pAuthComponent;                                 		// 0x0078 (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FString >                           m_asEntitlements;                                 		// 0x007C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           m_asGrantedEntitlements;                          		// 0x0088 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      PendingConnectMode;                               		// 0x0094 (0x0001) [0x0000000000000000]              
	unsigned long                                      PendingConnectSilent : 1;                         		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      PendingConnectNucleusRefused : 1;                 		// 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      PendingConnectCerberusRefused : 1;                		// 0x0098 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      PendingConnectNucleusSuccessful : 1;              		// 0x0098 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      PendingConnectProfileChanged : 1;                 		// 0x0098 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                PendingConnectPreviousRegDays;                    		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      PendingConnectAccountCreation : 1;                		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     PendingConnectEmail;                              		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PendingConnectPassword;                           		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PendingConnectBirthDay;                           		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                PendingConnectBirthMonth;                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                PendingConnectBirthYear;                          		// 0x00C4 (0x0004) [0x0000000000000000]              
	struct FString                                     PendingConnectCountryCode;                        		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PendingConnectLanguageCode;                       		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PendingConnectParentalEmail;                      		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      PendingConnectEAProducts : 1;                     		// 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      PendingConnectThirdParty : 1;                     		// 0x00EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      PendingConnectSubscribeBWNewsLetter : 1;          		// 0x00EC (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     PendingBuyStoreURL;                               		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PendingConnectError;                              		// 0x00FC (0x0004) [0x0000000000000000]              
	int                                                PendingConnectBlazeError;                         		// 0x0100 (0x0004) [0x0000000000000000]              
	TArray< struct FSFXOfferDescriptor >               PendingBuyOffers;                                 		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1955 ];

		return pClassPointer;
	};

	unsigned char GetConnectionState ( );
	struct FString ComputeTargetOfferURL ( unsigned char nSource );
	struct FString GetTargetOfferURL ( );
	unsigned char CanShowPresenceInformation ( int nUserIndex );
	unsigned char CanViewPlayerProfiles ( int nUserIndex );
	unsigned char CanPurchaseContent ( int nUserIndex );
	unsigned char CanDownloadUserContent ( int nUserIndex );
	unsigned char CanCommunicate ( int nUserIndex );
	unsigned char CanPlayOnline ( int nUserIndex );
	void OnDownloadOffersUICompleted ( );
	void OnDLCInfoLoaded ( );
	void OpenCerberusUI ( );
	void EnterCDKey ( struct FString sKey );
	void Buy ( unsigned char nPurchaseSource );
	void GrantEntitlement ( struct FString sGroup, struct FString sTag );
	bool CheckEntitlement ( struct FString sGroup, struct FString sTag );
	bool BuildEntitlementList ( unsigned long bFirstCallUponLogin, int nPage );
	bool IsCerberusMember ( );
	void DisablePersona ( struct FString sPersonaNonGrata );
	void CreatePersona ( struct FString sPersonaName );
	void SelectPersona ( struct FString sPersonaName );
	void AcceptTOS ( unsigned long bAccepted );
	void Disconnect ( );
	void CompleteLoginProcess ( );
	void StartCerberusLogin ( );
	void SubmitStore ( TArray< int > aiChosen );
	void SubmitCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, unsigned long bSubmit );
	void SubmitEmailPasswordMismatch ( struct FString Email, struct FString Password, int eReturnCode );
	void SubmitMessageBox ( int eReturnCode );
	void SubmitRedeemCode ( unsigned long bContinue, struct FString i_sCode );
	void SubmitCerberusWelcomeMessage ( );
	void SubmitCerberusIntro ( int eReturnCode );
	void SubmitNucleusWelcomeMessage ( );
	void SubmitCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, unsigned long bSubmit );
	void SubmitParentEmail ( unsigned long bContinue, struct FString ParentEmail );
	void SubmitNucleusLogin ( struct FString Email, struct FString Password, unsigned char eReturnCode );
	void SubmitIntroPage ( unsigned long bContinue, unsigned long bSimulated );
	void Connect ( unsigned char connectMode );
	void GoBackInUI ( );
	void Cancel ( );
	struct FUniqueNetId GetUserId ( );
	struct FString GetPersonaName ( );
	bool IsLive ( );
	bool IsSignedIn ( );
	bool IsConnected ( );
	void SwitchActiveUserIndex ( int nNewIndex );
	int GetActiveUserIndex ( );
	unsigned char GetLoginStatus ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentBlazeLogin::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentBlazeNotification
// 0x0044 (0x00A8 - 0x0064)
class USFXOnlineComponentBlazeNotification : public USFXOnlineComponentBlaze
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentNotification;         		// 0x0064 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    m_pBlazeUtil;                                     		// 0x0068 (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FSFXOnlineDLCInfo >                 m_aDLCInfo;                                       		// 0x006C (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< struct FSFXOnlineEntitlementGroupInfo >    m_aEntitlementGroups;                             		// 0x0078 (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< struct FSFXOnlineMOTDInfo >                m_aMOTDInfo;                                      		// 0x0084 (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FSFXOnlineTargetOfferInfo                   CerberusOfferInfo;                                		// 0x0090 (0x0018) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1956 ];

		return pClassPointer;
	};

	struct FSFXOnlineTargetOfferInfo GetTargetOfferInfo ( unsigned char nSource );
	TArray< struct FSFXOnlineEntitlementGroupInfo > GetEntitlementGroups ( );
	unsigned char HasUserPurchasedAnOffer ( struct FSFXOnline_OfferID aOfferId );
	bool DownloadOffers ( TArray< struct FSFXOnline_OfferID > aOfferIds );
	struct FString GetOfferKeyIfEntitled ( int internalId );
	TArray< struct FSFXOfferDescriptor > GetGrantingOffers ( );
	TArray< struct FSFXOfferDescriptor > GetEntitledDLCInfo ( );
	void RefreshEntitlementFlags ( );
	void SetDaysSinceCerberusRegistration ( int nDays );
	int GetDaysSinceCerberusRegistration ( );
	bool IsCalendarUnlockEarned ( int nDay );
	void RequestEntitlementGroupInfo ( );
	void RequestDLCInfo ( struct FString sNextSection );
	void RequestServerInfo ( );
	void RequestData ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void OnTick ( class USFXOnlineEvent* oEvent );
};

UClass* USFXOnlineComponentBlazeNotification::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif