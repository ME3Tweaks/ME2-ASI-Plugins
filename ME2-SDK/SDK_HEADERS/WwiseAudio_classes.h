/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WwiseAudio_classes.h
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

#define CONST_AUDIO_DISTANCE_FACTOR                              0.01

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum WwiseAudio.WwiseEvent.WwiseEventPrepareState
/*enum WwiseEventPrepareState
{
	WwiseEvent_Unprepared                              = 0,
	WwiseEvent_Preparing                               = 1,
	WwiseEvent_PrepareSuccess                          = 2,
	WwiseEvent_PrepareFailed                           = 3,
	WwiseEvent_UnPrepareFailed                         = 4,
	WwiseEvent_MAX                                     = 5
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WwiseAudio.ActorFactoryWwiseAmbientSound
// 0x0008 (0x006C - 0x0064)
class UActorFactoryWwiseAmbientSound : public UActorFactory
{
public:
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x0064 (0x0008) [0x0000000020000001]              ( CPF_Edit | CPF_Deprecated )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1123 ];

		return pClassPointer;
	};

};

UClass* UActorFactoryWwiseAmbientSound::pClassPointer = NULL;

// Class WwiseAudio.AnimNotify_WwiseEvent
// 0x0014 (0x0050 - 0x003C)
class UAnimNotify_WwiseEvent : public UAnimNotify
{
public:
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFollowActor : 1;                                 		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       BoneName;                                         		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1124 ];

		return pClassPointer;
	};

};

UClass* UAnimNotify_WwiseEvent::pClassPointer = NULL;

// Class WwiseAudio.InterpTrackInstWwiseEvent
// 0x0004 (0x0040 - 0x003C)
class UInterpTrackInstWwiseEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1125 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstWwiseEvent::pClassPointer = NULL;

// Class WwiseAudio.InterpTrackInstWwiseRTPC
// 0x0014 (0x0050 - 0x003C)
class UInterpTrackInstWwiseRTPC : public UInterpTrackInst
{
public:
	struct FWwiseRTPCForActorHandler                   m_RTPCHandler;                                    		// 0x003C (0x0014) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1126 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstWwiseRTPC::pClassPointer = NULL;

// Class WwiseAudio.InterpTrackWwiseEvent
// 0x0010 (0x0068 - 0x0058)
class UInterpTrackWwiseEvent : public UInterpTrack
{
public:
	TArray< struct FWwiseEventTrackKey >               WwiseEvents;                                      		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bRequiresPreload : 1;                           		// 0x0064 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1127 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackWwiseEvent::pClassPointer = NULL;

// Class WwiseAudio.InterpTrackWwiseRTPC
// 0x000C (0x0078 - 0x006C)
class UInterpTrackWwiseRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                            		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1128 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackWwiseRTPC::pClassPointer = NULL;

// Class WwiseAudio.InterpTrackWwiseSoundEffect
// 0x0004 (0x006C - 0x0068)
class UInterpTrackWwiseSoundEffect : public UInterpTrackWwiseEvent
{
public:
	class UWwiseAudioComponent*                        m_pComponent;                                     		// 0x0068 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1129 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackWwiseSoundEffect::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseClearBanks
// 0x0000 (0x00F0 - 0x00F0)
class USeqAct_WwiseClearBanks : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1130 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseClearBanks::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseLoadBank
// 0x000C (0x010C - 0x0100)
class USeqAct_WwiseLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                        		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UWwiseBank*                                  Bank;                                             		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Signal;                                           		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1131 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseLoadBank::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseLockMic
// 0x0000 (0x00F0 - 0x00F0)
class USeqAct_WwiseLockMic : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1132 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseLockMic::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseMusicVolumeDisable
// 0x0004 (0x00F4 - 0x00F0)
class USeqAct_WwiseMusicVolumeDisable : public USequenceAction
{
public:
	class AWwiseMusicVolume*                           m_MusicVolume;                                    		// 0x00F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1133 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseMusicVolumeDisable::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseMusicVolumeEnable
// 0x0004 (0x00F4 - 0x00F0)
class USeqAct_WwiseMusicVolumeEnable : public USequenceAction
{
public:
	class AWwiseMusicVolume*                           m_MusicVolume;                                    		// 0x00F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1134 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseMusicVolumeEnable::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwisePostEvent
// 0x0018 (0x0118 - 0x0100)
class USeqAct_WwisePostEvent : public USeqAct_Latent
{
public:
	struct FPointer                                    VfTable_IWwiseComponentCallback;                  		// 0x0100 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UWwiseBaseSoundObject*                       WwiseObject;                                      		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPointer                                    CriticalSection;                                  		// 0x0108 (0x0004) [0x0000000000023002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_EditConst )
	TArray< class UWwiseAudioComponent* >              ActiveComponents;                                 		// 0x010C (0x000C) [0x00000000044A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1135 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwisePostEvent::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwisePostTrigger
// 0x000C (0x00FC - 0x00F0)
class USeqAct_WwisePostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                          		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1136 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwisePostTrigger::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseSetRTPCValue
// 0x0020 (0x0120 - 0x0100)
class USeqAct_WwiseSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                            		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Running : 1;                                      		// 0x0110 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	TArray< struct FWwiseRTPCForActorHandler >         m_RTPCHandlers;                                   		// 0x0114 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1137 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseSetRTPCValue::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseSetState
// 0x0018 (0x0108 - 0x00F0)
class USeqAct_WwiseSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                       		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     State;                                            		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1138 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseSetState::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseSetSwitch
// 0x0018 (0x0108 - 0x00F0)
class USeqAct_WwiseSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                      		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Switch;                                           		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1139 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseSetSwitch::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseStartAudioObjects
// 0x0000 (0x00F0 - 0x00F0)
class USeqAct_WwiseStartAudioObjects : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1140 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseStartAudioObjects::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseStopAll
// 0x0000 (0x00F0 - 0x00F0)
class USeqAct_WwiseStopAll : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1141 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseStopAll::pClassPointer = NULL;

// Class WwiseAudio.WwiseAmbientSound
// 0x0010 (0x020C - 0x01FC)
class AWwiseAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                    		// 0x01FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsPlaying : 1;                                   		// 0x01FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasPlaying : 1;                                  		// 0x01FC (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x0200 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseAudioComponent*                        AudioComponent;                                   		// 0x0208 (0x0004) [0x00000000040A200B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Transient | CPF_EditConst | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1142 ];

		return pClassPointer;
	};

};

UClass* AWwiseAmbientSound::pClassPointer = NULL;

// Class WwiseAudio.WwiseAudioComponent
// 0x00B2 (0x0108 - 0x0056)
class UWwiseAudioComponent : public UActorComponent
{
public:
	unsigned long                                      bUseOwnerLocation : 1;                            		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bEnableEnvAudio : 1;                            		// 0x0058 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bEnableObstructionOcclusion : 1;                		// 0x0058 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bUpdateAudioEnginePosition : 1;                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     Location;                                         		// 0x005C (0x000C) [0x0000000000201000]              ( CPF_Native )
	struct FVector                                     Orientation;                                      		// 0x0068 (0x000C) [0x0000000000201000]              ( CPF_Native )
	struct FVector                                     ComponentLocation;                                		// 0x0074 (0x000C) [0x0000000000201002]              ( CPF_Const | CPF_Native )
	struct FVector                                     ComponentOrientation;                             		// 0x0080 (0x000C) [0x0000000000201002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_pNotifyCriticalSection;                         		// 0x008C (0x0004) [0x0000000000203000]              ( CPF_Native | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x0090 (0x0014) UNKNOWN PROPERTY: MapProperty WwiseAudio.WwiseAudioComponent.WwiseEvents
	int                                                NextWwiseEventIndex;                              		// 0x00A4 (0x0004) [0x0000000000202000]              ( CPF_Transient )
	TArray< class UWwiseEventInstance* >               WwiseEventsPendingStop;                           		// 0x00A8 (0x000C) [0x0000000000203000]              ( CPF_Native | CPF_Transient )
	struct FName                                       m_ComponentGroup;                                 		// 0x00B4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nAttachBoneIndex;                               		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWwiseComponentCallbackInfo >       Callbacks;                                        		// 0x00C0 (0x000C) [0x0000000000622002]              ( CPF_Const | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink )
	int                                                Cleaned;                                          		// 0x00CC (0x0004) [0x0000000000222002]              ( CPF_Const | CPF_Transient | CPF_EditConst )
	float                                              m_fDistanceToListener;                            		// 0x00D0 (0x0004) [0x0000000000201000]              ( CPF_Native )
	float                                              m_fMaxAudible3DSoundDistance;                     		// 0x00D4 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nMaxAudible3DSoundEventIndex;                   		// 0x00D8 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOf3DSoundsPlaying;                       		// 0x00DC (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOfSoundsUseAttenuation;                  		// 0x00E0 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOfSoundsWithUserDefinedPositioning;      		// 0x00E4 (0x0004) [0x0000000000201000]              ( CPF_Native )
	float                                              m_fTargetOcclusion;                               		// 0x00E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fTargetObstruction;                             		// 0x00EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fCurrentOcclusion;                              		// 0x00F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fCurrentObstruction;                            		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FDouble                                     m_fLastObstructionUpdate;                         		// 0x00F8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              ObstructionUpdateSpeed;                           		// 0x0100 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      m_bIsRegistered : 1;                              		// 0x0104 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1143 ];

		return pClassPointer;
	};

	void SetLocation ( struct FVector NewLocation );
	void Set3D ( );
	void Set2D ( );
	bool RegisterGameObject ( );
	bool UnregisterGameObject ( );
	float GetDistanceToListener ( );
	void SetObstructionOcclusionEnabled ( unsigned long i_bValue );
	void SetEnvironmentalAudioEnabled ( unsigned long i_bValue );
	bool GetObstructionOcclusionEnabled ( );
	bool GetEnvironmentalAudioEnabled ( );
	struct FVector GetMicPosition ( );
	bool SetGlobalRTPCFromScript ( struct FString in_pszRtpcName, float in_value );
	class UWwiseAudioComponent* CreateComponentFromScript ( class AActor* pActor, struct FString Label, struct FName ComponentGroup, struct FName AttachBone, unsigned long bRegister );
	bool IsEventPlaying ( int Index );
	bool IsPlaying ( class UWwiseBaseSoundObject* Event );
	bool PostGlobalEvent ( struct FName GlobalEventName );
	bool SetWwiseTrigger ( struct FString sTrigger );
	bool SetWwiseSwitch ( struct FString sGroup, struct FString sState );
	bool SetWwiseRTPC ( struct FString sName, float fValue );
	bool Stop ( class UWwiseBaseSoundObject* Base );
	bool StopWwiseEvent ( struct FWwiseEventPair AudioEvent );
	bool Play ( class UWwiseBaseSoundObject* Base, unsigned long bTrackPosition );
	bool PlayWwiseEvent ( struct FWwiseEventPair AudioEvent, unsigned long bTrackPosition );
	float InstancePosition ( int Index );
	bool StopAll ( );
	bool StopInstance ( int Index );
	bool PlayInstance ( int Index, unsigned long bTrackPosition );
	int FindInstanceIndex ( class UWwiseBaseSoundObject* BaseSound, class UWwiseEvent* StopEvent );
	int AddInstance ( class UWwiseBaseSoundObject* BaseSound, class UWwiseEvent* StopEvent );
	void SetRTPCWithHandler ( float fValue, struct FWwiseRTPCForActorHandler* RTPCHandler );
};

UClass* UWwiseAudioComponent::pClassPointer = NULL;

// Class WwiseAudio.WwiseAudioComponentMultiLoc
// 0x0014 (0x011C - 0x0108)
class UWwiseAudioComponentMultiLoc : public UWwiseAudioComponent
{
public:
	struct FMap_Mirror                                 m_Locations;                                      		// 0x0108 (0x0014) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1144 ];

		return pClassPointer;
	};

	void Set3D ( );
};

UClass* UWwiseAudioComponentMultiLoc::pClassPointer = NULL;

// Class WwiseAudio.WwiseAudioDevice
// 0x00DC (0x01F8 - 0x011C)
class UWwiseAudioDevice : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[ 0xDC ];                            		// 0x011C (0x00DC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1146 ];

		return pClassPointer;
	};

};

UClass* UWwiseAudioDevice::pClassPointer = NULL;

// Class WwiseAudio.WwiseVolume
// 0x0004 (0x023C - 0x0238)
class AWwiseVolume : public AVolume
{
public:
	class AWwiseVolumeTimer*                           m_oTrackTimer;                                    		// 0x0238 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1147 ];

		return pClassPointer;
	};

	void TimerPop ( class AWwiseVolumeTimer* T );
	void PostBeginPlay ( );
};

UClass* AWwiseVolume::pClassPointer = NULL;

// Class WwiseAudio.WwiseAudioVolume
// 0x0034 (0x0270 - 0x023C)
class AWwiseAudioVolume : public AWwiseVolume
{
public:
	TArray< struct FWwiseEventPair >                   WwiseEventArray;                                  		// 0x023C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UWwiseAudioComponentMultiLoc*                AudioComponent;                                   		// 0x0248 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class APawn*                                       m_oTrackPawn;                                     		// 0x024C (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	unsigned long                                      bPawnIsInsideVolume : 1;                          		// 0x0250 (0x0004) [0x0000000020000000] [0x00000001] ( CPF_Deprecated )
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0250 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< struct FKConvexElem >                      aConvexElems;                                     		// 0x0254 (0x000C) [0x0000000020400000]              ( CPF_NeedCtorLink | CPF_Deprecated )
	TArray< struct FKBoxElem >                         aBoxElems;                                        		// 0x0260 (0x000C) [0x0000000020400000]              ( CPF_NeedCtorLink | CPF_Deprecated )
	unsigned long                                      bWasPlaying : 1;                                  		// 0x026C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      DrawSoundLocations : 1;                           		// 0x026C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1148 ];

		return pClassPointer;
	};

	void Stop ( );
	void Start ( );
	void myTimerPop ( );
	void TimerPop ( class AWwiseVolumeTimer* T );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void PostBeginPlay ( );
};

UClass* AWwiseAudioVolume::pClassPointer = NULL;

// Class WwiseAudio.WwiseBank
// 0x0058 (0x0094 - 0x003C)
class UWwiseBank : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x003C (0x0014) UNKNOWN PROPERTY: MapProperty WwiseAudio.WwiseBank.Data
	struct FWwiseSHA1Digests                           SHA1s;                                            		// 0x0050 (0x0014) [0x0000000000000000]              
	struct FWwiseSHA1Digests                           InitBankSHA1s;                                    		// 0x0064 (0x0014) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0078 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	int                                                InternalBankId;                                   		// 0x007C (0x0004) [0x0000000000022003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst )
	unsigned long                                      IsLoaded : 1;                                     		// 0x0080 (0x0004) [0x0000000000022003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst )
	unsigned long                                      IsLocalised : 1;                                  		// 0x0080 (0x0004) [0x0000000000020003] [0x00000002] ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      IsInitBank : 1;                                   		// 0x0080 (0x0004) [0x0000000000020003] [0x00000004] ( CPF_Edit | CPF_Const | CPF_EditConst )
	class UWwiseBank*                                  Parent;                                           		// 0x0084 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< struct FPointer >                          Children;                                         		// 0x0088 (0x000C) [0x0000000000023002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1149 ];

		return pClassPointer;
	};

};

UClass* UWwiseBank::pClassPointer = NULL;

// Class WwiseAudio.WwiseCollection
// 0x003C (0x0078 - 0x003C)
class UWwiseCollection : public UObject
{
public:
	class UWwiseBank*                                  Bank;                                             		// 0x003C (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< class UWwiseEvent* >                       Events;                                           		// 0x0040 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UWwiseEventPairObject* >             EventPairs;                                       		// 0x004C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UWwiseStream* >                      Streams;                                          		// 0x0058 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FWwiseSHA1Digest                            SHA1Digest;                                       		// 0x0064 (0x0014) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1150 ];

		return pClassPointer;
	};

};

UClass* UWwiseCollection::pClassPointer = NULL;

// Class WwiseAudio.WwiseComponentCallback
// 0x0000 (0x003C - 0x003C)
class UWwiseComponentCallback : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1151 ];

		return pClassPointer;
	};

};

UClass* UWwiseComponentCallback::pClassPointer = NULL;

// Class WwiseAudio.WwiseEvent
// 0x0054 (0x0090 - 0x003C)
class UWwiseEvent : public UWwiseBaseSoundObject
{
public:
	int                                                Id;                                               		// 0x003C (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x0040 (0x0014) UNKNOWN PROPERTY: MapProperty WwiseAudio.WwiseEvent.References
	int                                                PrepareState;                                     		// 0x0054 (0x0004) [0x0000000000022003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst )
	struct FString                                     WwisePath;                                        		// 0x0058 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     Notes;                                            		// 0x0064 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FDouble                                     DurationMS;                                       		// 0x0070 (0x0008) [0x0000000020020002]              ( CPF_Const | CPF_EditConst | CPF_Deprecated )
	float                                              DurationMilliseconds;                             		// 0x0078 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      IsLocalised : 1;                                  		// 0x007C (0x0004) [0x0000000000020003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      m_bHasEnvironmentalSettings : 1;                  		// 0x007C (0x0004) [0x0000000000201000] [0x00000002] ( CPF_Native )
	float                                              m_fMaxAudible3DSoundDistance;                     		// 0x0080 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOf3DSoundsPlaying;                       		// 0x0084 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOfSoundsUseAttenuation;                  		// 0x0088 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOfSoundsWithUserDefinedPositioning;      		// 0x008C (0x0004) [0x0000000000201000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1152 ];

		return pClassPointer;
	};

};

UClass* UWwiseEvent::pClassPointer = NULL;

// Class WwiseAudio.WwiseDialogueEvent
// 0x000C (0x009C - 0x0090)
class UWwiseDialogueEvent : public UWwiseEvent
{
public:
	TArray< struct FWwiseDialogueArgument >            Arguments;                                        		// 0x0090 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1153 ];

		return pClassPointer;
	};

};

UClass* UWwiseDialogueEvent::pClassPointer = NULL;

// Class WwiseAudio.WwiseEnvironmentSettings
// 0x0020 (0x005C - 0x003C)
class UWwiseEnvironmentSettings : public UObject
{
public:
	struct FString                                     Environment;                                      		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIdResolved : 1;                                  		// 0x004C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              fPrimaryControlValue;                             		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverrideLowerPriorityEnvironments : 1;           		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fOverrideControlValue;                            		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1154 ];

		return pClassPointer;
	};

};

UClass* UWwiseEnvironmentSettings::pClassPointer = NULL;

// Class WwiseAudio.WwiseEnvironmentVolume
// 0x0008 (0x0240 - 0x0238)
class AWwiseEnvironmentVolume : public AVolume
{
public:
	float                                              Priority;                                         		// 0x0238 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEnvironmentSettings*                   Settings;                                         		// 0x023C (0x0004) [0x0000000004420009]              ( CPF_Edit | CPF_ExportObject | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1155 ];

		return pClassPointer;
	};

};

UClass* AWwiseEnvironmentVolume::pClassPointer = NULL;

// Class WwiseAudio.WwiseEventPairObject
// 0x0008 (0x0044 - 0x003C)
class UWwiseEventPairObject : public UWwiseBaseSoundObject
{
public:
	class UWwiseEvent*                                 Play;                                             		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 Stop;                                             		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1156 ];

		return pClassPointer;
	};

};

UClass* UWwiseEventPairObject::pClassPointer = NULL;

// Class WwiseAudio.WwiseEventInstance
// 0x0004 (0x0048 - 0x0044)
class UWwiseEventInstance : public UWwiseEventPairObject
{
public:
	int                                                WwisePlayingID;                                   		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1157 ];

		return pClassPointer;
	};

};

UClass* UWwiseEventInstance::pClassPointer = NULL;

// Class WwiseAudio.WwiseFaceFXStopper
// 0x0010 (0x004C - 0x003C)
class UWwiseFaceFXStopper : public UObject
{
public:
	struct FPointer                                    VfTable_IWwiseComponentCallback;                  		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class USkeletalMeshComponent*                      m_SkelMeshComp;                                   		// 0x0040 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWwiseAudioComponent*                        m_WwiseAudioComp;                                 		// 0x0044 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWwiseEvent*                                 m_WwiseAudioEvent;                                		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1158 ];

		return pClassPointer;
	};

};

UClass* UWwiseFaceFXStopper::pClassPointer = NULL;

// Class WwiseAudio.WwiseMicPosOrient
// 0x0000 (0x01FC - 0x01FC)
class AWwiseMicPosOrient : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1159 ];

		return pClassPointer;
	};

	struct FVector GetUpVector ( );
	struct FVector GetFrontVector ( );
};

UClass* AWwiseMicPosOrient::pClassPointer = NULL;

// Class WwiseAudio.WwiseMusicVolume
// 0x0020 (0x025C - 0x023C)
class AWwiseMusicVolume : public AWwiseVolume
{
public:
	struct FName                                       MusicID;                                          		// 0x023C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MusicPriority;                                    		// 0x0244 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      InitiallyEnabled : 1;                             		// 0x0248 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bContainsPawn : 1;                              		// 0x0248 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bMyMusicIsPlaying : 1;                          		// 0x0248 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bEnabled : 1;                                   		// 0x0248 (0x0004) [0x0000000000000000] [0x00000008] 
	class UWwiseEventPairObject*                       m_pMusicEventPair;                                		// 0x024C (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UWwiseAudioComponent*                        m_pWwiseComponent;                                		// 0x0250 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class APawn*                                       m_oTrackPawn;                                     		// 0x0254 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentMusicState;                             		// 0x0258 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1160 ];

		return pClassPointer;
	};

	void myTimerPop ( );
	void SetContainsPlayer ( unsigned long bContainsPlayer );
	void SetEnabled ( unsigned long bEnabled );
	void StopMusic ( );
	void StartMusic ( );
	bool CheckPriority ( );
	void TimerPop ( class AWwiseVolumeTimer* T );
	void PostBeginPlay ( );
};

UClass* AWwiseMusicVolume::pClassPointer = NULL;

// Class WwiseAudio.WwiseStream
// 0x0078 (0x00B4 - 0x003C)
class UWwiseStream : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x003C (0x0014) UNKNOWN PROPERTY: MapProperty WwiseAudio.WwiseStream.Data
	int                                                Id;                                               		// 0x0050 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      IsLocalised : 1;                                  		// 0x0054 (0x0004) [0x0000000020020002] [0x00000001] ( CPF_Const | CPF_EditConst | CPF_Deprecated )
	struct FName                                       Language;                                         		// 0x0058 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      IsRegistered : 1;                                 		// 0x0060 (0x0004) [0x0000000000022003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst )
	struct FName                                       Filename;                                         		// 0x0064 (0x0008) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )
	struct FString                                     OrigPath;                                         		// 0x006C (0x000C) [0x0000000020400002]              ( CPF_Const | CPF_NeedCtorLink | CPF_Deprecated )
	struct FString                                     OriginalName;                                     		// 0x0078 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FWwiseSHA1Digests                           SHA1s;                                            		// 0x0084 (0x0014) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )
	struct FWwiseFileCacheGuids                        FileCacheGuids;                                   		// 0x0098 (0x0014) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       BankName;                                         		// 0x00AC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1161 ];

		return pClassPointer;
	};

};

UClass* UWwiseStream::pClassPointer = NULL;

// Class WwiseAudio.WwiseVolumeTimer
// 0x0004 (0x0200 - 0x01FC)
class AWwiseVolumeTimer : public AInfo
{
public:
	class AWwiseVolume*                                m_oVolume;                                        		// 0x01FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1162 ];

		return pClassPointer;
	};

	void Timer ( );
};

UClass* AWwiseVolumeTimer::pClassPointer = NULL;

// Class WwiseAudio.ActorFactoryWwiseDistanceRTPC
// 0x0000 (0x0064 - 0x0064)
class UActorFactoryWwiseDistanceRTPC : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 27485 ];

		return pClassPointer;
	};

};

UClass* UActorFactoryWwiseDistanceRTPC::pClassPointer = NULL;

// Class WwiseAudio.WwiseDistanceRTPC
// 0x0014 (0x0210 - 0x01FC)
class AWwiseDistanceRTPC : public AActor
{
public:
	struct FString                                     RTPCName;                                         		// 0x01FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              TickDelay;                                        		// 0x0208 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fTimeSinceLastUpdate;                           		// 0x020C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 27487 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
};

UClass* AWwiseDistanceRTPC::pClassPointer = NULL;

// Class WwiseAudio.ActorFactoryWwiseMicPosOrient
// 0x0000 (0x0064 - 0x0064)
class UActorFactoryWwiseMicPosOrient : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 27488 ];

		return pClassPointer;
	};

};

UClass* UActorFactoryWwiseMicPosOrient::pClassPointer = NULL;

// Class WwiseAudio.WwiseOcclusionVolume
// 0x0000 (0x0238 - 0x0238)
class AWwiseOcclusionVolume : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 27795 ];

		return pClassPointer;
	};

};

UClass* AWwiseOcclusionVolume::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif