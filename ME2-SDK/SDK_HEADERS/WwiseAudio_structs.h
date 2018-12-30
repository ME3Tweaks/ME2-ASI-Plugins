/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WwiseAudio_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct WwiseAudio.WwiseEvent.WwiseEventPair
// 0x0008
struct FWwiseEventPair
{
	class UWwiseEvent*                                 Play;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 Stop;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WwiseAudio.WwiseComponentCallback.WwiseComponentCallbackInfo
// 0x0010
struct FWwiseComponentCallbackInfo
{
	int                                                CallbackFlags;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 TargetEvent;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UWwiseComponentCallback*                     TargetObject;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct WwiseAudio.WwiseAudioComponent.WwiseRTPCForActorHandler
// 0x0014
struct FWwiseRTPCForActorHandler
{
	class AActor*                                      m_actor;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sRTPCName;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_currentValue;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WwiseAudio.InterpTrackWwiseEvent.WwiseEventTrackKey
// 0x0008
struct FWwiseEventTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 Event;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WwiseAudio.WwiseBank.WwiseSHA1Digest
// 0x0014
struct FWwiseSHA1Digest
{
	unsigned char                                      Digest[ 0x14 ];                                   		// 0x0000 (0x0014) [0x0000000000000000]              
};

// ScriptStruct WwiseAudio.WwiseBank.WwiseSHA1Digests
// 0x0014
struct FWwiseSHA1Digests
{
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x0000 (0x0014) UNKNOWN PROPERTY: MapProperty WwiseAudio.WwiseBank.WwiseSHA1Digests.SHA1Data
};

// ScriptStruct WwiseAudio.WwiseEvent.WwiseRelationships
// 0x0010
struct FWwiseRelationships
{
	class UWwiseBank*                                  Bank;                                             		// 0x0000 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< class UWwiseStream* >                      Streams;                                          		// 0x0004 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct WwiseAudio.WwiseDialogueEvent.WwiseDialogueArgumentValue
// 0x000C
struct FWwiseDialogueArgumentValue
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WwiseAudio.WwiseDialogueEvent.WwiseDialogueArgument
// 0x0018
struct FWwiseDialogueArgument
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWwiseDialogueArgumentValue >       Values;                                           		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WwiseAudio.WwiseStream.WwiseFileCacheGuids
// 0x0014
struct FWwiseFileCacheGuids
{
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x0000 (0x0014) UNKNOWN PROPERTY: MapProperty WwiseAudio.WwiseStream.WwiseFileCacheGuids.Guids
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif