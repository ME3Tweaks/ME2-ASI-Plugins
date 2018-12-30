/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WwiseAudio_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function WwiseAudio.WwiseAudioComponent.SetLocation
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// struct FVector                 NewLocation                    ( CPF_Parm )

void UWwiseAudioComponent::SetLocation ( struct FVector NewLocation )
{
	static UFunction* pFnSetLocation = NULL;

	if ( ! pFnSetLocation )
		pFnSetLocation = (UFunction*) UObject::GObjObjects()->Data[ 27653 ];

	UWwiseAudioComponent_execSetLocation_Parms SetLocation_Parms;
	memcpy ( &SetLocation_Parms.NewLocation, &NewLocation, 0xC );

	this->ProcessEvent ( pFnSetLocation, &SetLocation_Parms, NULL );
};

// Function WwiseAudio.WwiseAudioComponent.Set3D
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UWwiseAudioComponent::Set3D ( )
{
	static UFunction* pFnSet3D = NULL;

	if ( ! pFnSet3D )
		pFnSet3D = (UFunction*) UObject::GObjObjects()->Data[ 27652 ];

	UWwiseAudioComponent_execSet3D_Parms Set3D_Parms;

	pFnSet3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet3D, &Set3D_Parms, NULL );

	pFnSet3D->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.Set2D
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UWwiseAudioComponent::Set2D ( )
{
	static UFunction* pFnSet2D = NULL;

	if ( ! pFnSet2D )
		pFnSet2D = (UFunction*) UObject::GObjObjects()->Data[ 27651 ];

	UWwiseAudioComponent_execSet2D_Parms Set2D_Parms;

	pFnSet2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet2D, &Set2D_Parms, NULL );

	pFnSet2D->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.RegisterGameObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::RegisterGameObject ( )
{
	static UFunction* pFnRegisterGameObject = NULL;

	if ( ! pFnRegisterGameObject )
		pFnRegisterGameObject = (UFunction*) UObject::GObjObjects()->Data[ 27649 ];

	UWwiseAudioComponent_execRegisterGameObject_Parms RegisterGameObject_Parms;

	pFnRegisterGameObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterGameObject, &RegisterGameObject_Parms, NULL );

	pFnRegisterGameObject->FunctionFlags |= 0x400;

	return RegisterGameObject_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.UnregisterGameObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::UnregisterGameObject ( )
{
	static UFunction* pFnUnregisterGameObject = NULL;

	if ( ! pFnUnregisterGameObject )
		pFnUnregisterGameObject = (UFunction*) UObject::GObjObjects()->Data[ 27647 ];

	UWwiseAudioComponent_execUnregisterGameObject_Parms UnregisterGameObject_Parms;

	pFnUnregisterGameObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterGameObject, &UnregisterGameObject_Parms, NULL );

	pFnUnregisterGameObject->FunctionFlags |= 0x400;

	return UnregisterGameObject_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.GetDistanceToListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UWwiseAudioComponent::GetDistanceToListener ( )
{
	static UFunction* pFnGetDistanceToListener = NULL;

	if ( ! pFnGetDistanceToListener )
		pFnGetDistanceToListener = (UFunction*) UObject::GObjObjects()->Data[ 27645 ];

	UWwiseAudioComponent_execGetDistanceToListener_Parms GetDistanceToListener_Parms;

	pFnGetDistanceToListener->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDistanceToListener, &GetDistanceToListener_Parms, NULL );

	pFnGetDistanceToListener->FunctionFlags |= 0x400;

	return GetDistanceToListener_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  i_bValue                       ( CPF_Parm )

void UWwiseAudioComponent::SetObstructionOcclusionEnabled ( unsigned long i_bValue )
{
	static UFunction* pFnSetObstructionOcclusionEnabled = NULL;

	if ( ! pFnSetObstructionOcclusionEnabled )
		pFnSetObstructionOcclusionEnabled = (UFunction*) UObject::GObjObjects()->Data[ 27643 ];

	UWwiseAudioComponent_execSetObstructionOcclusionEnabled_Parms SetObstructionOcclusionEnabled_Parms;
	SetObstructionOcclusionEnabled_Parms.i_bValue = i_bValue;

	pFnSetObstructionOcclusionEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetObstructionOcclusionEnabled, &SetObstructionOcclusionEnabled_Parms, NULL );

	pFnSetObstructionOcclusionEnabled->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.SetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  i_bValue                       ( CPF_Parm )

void UWwiseAudioComponent::SetEnvironmentalAudioEnabled ( unsigned long i_bValue )
{
	static UFunction* pFnSetEnvironmentalAudioEnabled = NULL;

	if ( ! pFnSetEnvironmentalAudioEnabled )
		pFnSetEnvironmentalAudioEnabled = (UFunction*) UObject::GObjObjects()->Data[ 27641 ];

	UWwiseAudioComponent_execSetEnvironmentalAudioEnabled_Parms SetEnvironmentalAudioEnabled_Parms;
	SetEnvironmentalAudioEnabled_Parms.i_bValue = i_bValue;

	pFnSetEnvironmentalAudioEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEnvironmentalAudioEnabled, &SetEnvironmentalAudioEnabled_Parms, NULL );

	pFnSetEnvironmentalAudioEnabled->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.GetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::GetObstructionOcclusionEnabled ( )
{
	static UFunction* pFnGetObstructionOcclusionEnabled = NULL;

	if ( ! pFnGetObstructionOcclusionEnabled )
		pFnGetObstructionOcclusionEnabled = (UFunction*) UObject::GObjObjects()->Data[ 27639 ];

	UWwiseAudioComponent_execGetObstructionOcclusionEnabled_Parms GetObstructionOcclusionEnabled_Parms;

	pFnGetObstructionOcclusionEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetObstructionOcclusionEnabled, &GetObstructionOcclusionEnabled_Parms, NULL );

	pFnGetObstructionOcclusionEnabled->FunctionFlags |= 0x400;

	return GetObstructionOcclusionEnabled_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.GetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::GetEnvironmentalAudioEnabled ( )
{
	static UFunction* pFnGetEnvironmentalAudioEnabled = NULL;

	if ( ! pFnGetEnvironmentalAudioEnabled )
		pFnGetEnvironmentalAudioEnabled = (UFunction*) UObject::GObjObjects()->Data[ 27637 ];

	UWwiseAudioComponent_execGetEnvironmentalAudioEnabled_Parms GetEnvironmentalAudioEnabled_Parms;

	pFnGetEnvironmentalAudioEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEnvironmentalAudioEnabled, &GetEnvironmentalAudioEnabled_Parms, NULL );

	pFnGetEnvironmentalAudioEnabled->FunctionFlags |= 0x400;

	return GetEnvironmentalAudioEnabled_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.GetMicPosition
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UWwiseAudioComponent::GetMicPosition ( )
{
	static UFunction* pFnGetMicPosition = NULL;

	if ( ! pFnGetMicPosition )
		pFnGetMicPosition = (UFunction*) UObject::GObjObjects()->Data[ 27635 ];

	UWwiseAudioComponent_execGetMicPosition_Parms GetMicPosition_Parms;

	pFnGetMicPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMicPosition, &GetMicPosition_Parms, NULL );

	pFnGetMicPosition->FunctionFlags |= 0x400;

	return GetMicPosition_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetGlobalRTPCFromScript
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 in_pszRtpcName                 ( CPF_Parm | CPF_NeedCtorLink )
// float                          in_value                       ( CPF_Parm )

bool UWwiseAudioComponent::SetGlobalRTPCFromScript ( struct FString in_pszRtpcName, float in_value )
{
	static UFunction* pFnSetGlobalRTPCFromScript = NULL;

	if ( ! pFnSetGlobalRTPCFromScript )
		pFnSetGlobalRTPCFromScript = (UFunction*) UObject::GObjObjects()->Data[ 27631 ];

	UWwiseAudioComponent_execSetGlobalRTPCFromScript_Parms SetGlobalRTPCFromScript_Parms;
	memcpy ( &SetGlobalRTPCFromScript_Parms.in_pszRtpcName, &in_pszRtpcName, 0xC );
	SetGlobalRTPCFromScript_Parms.in_value = in_value;

	pFnSetGlobalRTPCFromScript->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetGlobalRTPCFromScript, &SetGlobalRTPCFromScript_Parms, NULL );

	pFnSetGlobalRTPCFromScript->FunctionFlags |= 0x400;

	return SetGlobalRTPCFromScript_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.CreateComponentFromScript
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UWwiseAudioComponent*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class AActor*                  pActor                         ( CPF_Parm )
// struct FString                 Label                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ComponentGroup                 ( CPF_OptionalParm | CPF_Parm )
// struct FName                   AttachBone                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRegister                      ( CPF_OptionalParm | CPF_Parm )

class UWwiseAudioComponent* UWwiseAudioComponent::CreateComponentFromScript ( class AActor* pActor, struct FString Label, struct FName ComponentGroup, struct FName AttachBone, unsigned long bRegister )
{
	static UFunction* pFnCreateComponentFromScript = NULL;

	if ( ! pFnCreateComponentFromScript )
		pFnCreateComponentFromScript = (UFunction*) UObject::GObjObjects()->Data[ 27624 ];

	UWwiseAudioComponent_execCreateComponentFromScript_Parms CreateComponentFromScript_Parms;
	CreateComponentFromScript_Parms.pActor = pActor;
	memcpy ( &CreateComponentFromScript_Parms.Label, &Label, 0xC );
	memcpy ( &CreateComponentFromScript_Parms.ComponentGroup, &ComponentGroup, 0x8 );
	memcpy ( &CreateComponentFromScript_Parms.AttachBone, &AttachBone, 0x8 );
	CreateComponentFromScript_Parms.bRegister = bRegister;

	pFnCreateComponentFromScript->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateComponentFromScript, &CreateComponentFromScript_Parms, NULL );

	pFnCreateComponentFromScript->FunctionFlags |= 0x400;

	return CreateComponentFromScript_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.IsEventPlaying
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

bool UWwiseAudioComponent::IsEventPlaying ( int Index )
{
	static UFunction* pFnIsEventPlaying = NULL;

	if ( ! pFnIsEventPlaying )
		pFnIsEventPlaying = (UFunction*) UObject::GObjObjects()->Data[ 27621 ];

	UWwiseAudioComponent_execIsEventPlaying_Parms IsEventPlaying_Parms;
	IsEventPlaying_Parms.Index = Index;

	pFnIsEventPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsEventPlaying, &IsEventPlaying_Parms, NULL );

	pFnIsEventPlaying->FunctionFlags |= 0x400;

	return IsEventPlaying_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.IsPlaying
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Event                          ( CPF_OptionalParm | CPF_Parm )

bool UWwiseAudioComponent::IsPlaying ( class UWwiseBaseSoundObject* Event )
{
	static UFunction* pFnIsPlaying = NULL;

	if ( ! pFnIsPlaying )
		pFnIsPlaying = (UFunction*) UObject::GObjObjects()->Data[ 27618 ];

	UWwiseAudioComponent_execIsPlaying_Parms IsPlaying_Parms;
	IsPlaying_Parms.Event = Event;

	pFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlaying, &IsPlaying_Parms, NULL );

	pFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.PostGlobalEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   GlobalEventName                ( CPF_Parm )

bool UWwiseAudioComponent::PostGlobalEvent ( struct FName GlobalEventName )
{
	static UFunction* pFnPostGlobalEvent = NULL;

	if ( ! pFnPostGlobalEvent )
		pFnPostGlobalEvent = (UFunction*) UObject::GObjObjects()->Data[ 27615 ];

	UWwiseAudioComponent_execPostGlobalEvent_Parms PostGlobalEvent_Parms;
	memcpy ( &PostGlobalEvent_Parms.GlobalEventName, &GlobalEventName, 0x8 );

	pFnPostGlobalEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostGlobalEvent, &PostGlobalEvent_Parms, NULL );

	pFnPostGlobalEvent->FunctionFlags |= 0x400;

	return PostGlobalEvent_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseTrigger
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sTrigger                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWwiseAudioComponent::SetWwiseTrigger ( struct FString sTrigger )
{
	static UFunction* pFnSetWwiseTrigger = NULL;

	if ( ! pFnSetWwiseTrigger )
		pFnSetWwiseTrigger = (UFunction*) UObject::GObjObjects()->Data[ 27612 ];

	UWwiseAudioComponent_execSetWwiseTrigger_Parms SetWwiseTrigger_Parms;
	memcpy ( &SetWwiseTrigger_Parms.sTrigger, &sTrigger, 0xC );

	pFnSetWwiseTrigger->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseTrigger, &SetWwiseTrigger_Parms, NULL );

	pFnSetWwiseTrigger->FunctionFlags |= 0x400;

	return SetWwiseTrigger_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseSwitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sGroup                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sState                         ( CPF_Parm | CPF_NeedCtorLink )

bool UWwiseAudioComponent::SetWwiseSwitch ( struct FString sGroup, struct FString sState )
{
	static UFunction* pFnSetWwiseSwitch = NULL;

	if ( ! pFnSetWwiseSwitch )
		pFnSetWwiseSwitch = (UFunction*) UObject::GObjObjects()->Data[ 27608 ];

	UWwiseAudioComponent_execSetWwiseSwitch_Parms SetWwiseSwitch_Parms;
	memcpy ( &SetWwiseSwitch_Parms.sGroup, &sGroup, 0xC );
	memcpy ( &SetWwiseSwitch_Parms.sState, &sState, 0xC );

	pFnSetWwiseSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseSwitch, &SetWwiseSwitch_Parms, NULL );

	pFnSetWwiseSwitch->FunctionFlags |= 0x400;

	return SetWwiseSwitch_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPC
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// float                          fValue                         ( CPF_Parm )

bool UWwiseAudioComponent::SetWwiseRTPC ( struct FString sName, float fValue )
{
	static UFunction* pFnSetWwiseRTPC = NULL;

	if ( ! pFnSetWwiseRTPC )
		pFnSetWwiseRTPC = (UFunction*) UObject::GObjObjects()->Data[ 27604 ];

	UWwiseAudioComponent_execSetWwiseRTPC_Parms SetWwiseRTPC_Parms;
	memcpy ( &SetWwiseRTPC_Parms.sName, &sName, 0xC );
	SetWwiseRTPC_Parms.fValue = fValue;

	pFnSetWwiseRTPC->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseRTPC, &SetWwiseRTPC_Parms, NULL );

	pFnSetWwiseRTPC->FunctionFlags |= 0x400;

	return SetWwiseRTPC_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Base                           ( CPF_Parm )

bool UWwiseAudioComponent::Stop ( class UWwiseBaseSoundObject* Base )
{
	static UFunction* pFnStop = NULL;

	if ( ! pFnStop )
		pFnStop = (UFunction*) UObject::GObjObjects()->Data[ 27601 ];

	UWwiseAudioComponent_execStop_Parms Stop_Parms;
	Stop_Parms.Base = Base;

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStop, &Stop_Parms, NULL );

	pFnStop->FunctionFlags |= 0x400;

	return Stop_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.StopWwiseEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FWwiseEventPair         AudioEvent                     ( CPF_Parm )

bool UWwiseAudioComponent::StopWwiseEvent ( struct FWwiseEventPair AudioEvent )
{
	static UFunction* pFnStopWwiseEvent = NULL;

	if ( ! pFnStopWwiseEvent )
		pFnStopWwiseEvent = (UFunction*) UObject::GObjObjects()->Data[ 27598 ];

	UWwiseAudioComponent_execStopWwiseEvent_Parms StopWwiseEvent_Parms;
	memcpy ( &StopWwiseEvent_Parms.AudioEvent, &AudioEvent, 0x8 );

	pFnStopWwiseEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopWwiseEvent, &StopWwiseEvent_Parms, NULL );

	pFnStopWwiseEvent->FunctionFlags |= 0x400;

	return StopWwiseEvent_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.Play
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Base                           ( CPF_Parm )
// unsigned long                  bTrackPosition                 ( CPF_OptionalParm | CPF_Parm )

bool UWwiseAudioComponent::Play ( class UWwiseBaseSoundObject* Base, unsigned long bTrackPosition )
{
	static UFunction* pFnPlay = NULL;

	if ( ! pFnPlay )
		pFnPlay = (UFunction*) UObject::GObjObjects()->Data[ 27594 ];

	UWwiseAudioComponent_execPlay_Parms Play_Parms;
	Play_Parms.Base = Base;
	Play_Parms.bTrackPosition = bTrackPosition;

	pFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlay, &Play_Parms, NULL );

	pFnPlay->FunctionFlags |= 0x400;

	return Play_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.PlayWwiseEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FWwiseEventPair         AudioEvent                     ( CPF_Parm )
// unsigned long                  bTrackPosition                 ( CPF_OptionalParm | CPF_Parm )

bool UWwiseAudioComponent::PlayWwiseEvent ( struct FWwiseEventPair AudioEvent, unsigned long bTrackPosition )
{
	static UFunction* pFnPlayWwiseEvent = NULL;

	if ( ! pFnPlayWwiseEvent )
		pFnPlayWwiseEvent = (UFunction*) UObject::GObjObjects()->Data[ 27590 ];

	UWwiseAudioComponent_execPlayWwiseEvent_Parms PlayWwiseEvent_Parms;
	memcpy ( &PlayWwiseEvent_Parms.AudioEvent, &AudioEvent, 0x8 );
	PlayWwiseEvent_Parms.bTrackPosition = bTrackPosition;

	pFnPlayWwiseEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayWwiseEvent, &PlayWwiseEvent_Parms, NULL );

	pFnPlayWwiseEvent->FunctionFlags |= 0x400;

	return PlayWwiseEvent_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.InstancePosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

float UWwiseAudioComponent::InstancePosition ( int Index )
{
	static UFunction* pFnInstancePosition = NULL;

	if ( ! pFnInstancePosition )
		pFnInstancePosition = (UFunction*) UObject::GObjObjects()->Data[ 27587 ];

	UWwiseAudioComponent_execInstancePosition_Parms InstancePosition_Parms;
	InstancePosition_Parms.Index = Index;

	pFnInstancePosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInstancePosition, &InstancePosition_Parms, NULL );

	pFnInstancePosition->FunctionFlags |= 0x400;

	return InstancePosition_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.StopAll
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::StopAll ( )
{
	static UFunction* pFnStopAll = NULL;

	if ( ! pFnStopAll )
		pFnStopAll = (UFunction*) UObject::GObjObjects()->Data[ 27585 ];

	UWwiseAudioComponent_execStopAll_Parms StopAll_Parms;

	pFnStopAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopAll, &StopAll_Parms, NULL );

	pFnStopAll->FunctionFlags |= 0x400;

	return StopAll_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.StopInstance
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

bool UWwiseAudioComponent::StopInstance ( int Index )
{
	static UFunction* pFnStopInstance = NULL;

	if ( ! pFnStopInstance )
		pFnStopInstance = (UFunction*) UObject::GObjObjects()->Data[ 27582 ];

	UWwiseAudioComponent_execStopInstance_Parms StopInstance_Parms;
	StopInstance_Parms.Index = Index;

	pFnStopInstance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopInstance, &StopInstance_Parms, NULL );

	pFnStopInstance->FunctionFlags |= 0x400;

	return StopInstance_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.PlayInstance
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// unsigned long                  bTrackPosition                 ( CPF_OptionalParm | CPF_Parm )

bool UWwiseAudioComponent::PlayInstance ( int Index, unsigned long bTrackPosition )
{
	static UFunction* pFnPlayInstance = NULL;

	if ( ! pFnPlayInstance )
		pFnPlayInstance = (UFunction*) UObject::GObjObjects()->Data[ 27578 ];

	UWwiseAudioComponent_execPlayInstance_Parms PlayInstance_Parms;
	PlayInstance_Parms.Index = Index;
	PlayInstance_Parms.bTrackPosition = bTrackPosition;

	pFnPlayInstance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayInstance, &PlayInstance_Parms, NULL );

	pFnPlayInstance->FunctionFlags |= 0x400;

	return PlayInstance_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.FindInstanceIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   BaseSound                      ( CPF_Parm )
// class UWwiseEvent*             StopEvent                      ( CPF_OptionalParm | CPF_Parm )

int UWwiseAudioComponent::FindInstanceIndex ( class UWwiseBaseSoundObject* BaseSound, class UWwiseEvent* StopEvent )
{
	static UFunction* pFnFindInstanceIndex = NULL;

	if ( ! pFnFindInstanceIndex )
		pFnFindInstanceIndex = (UFunction*) UObject::GObjObjects()->Data[ 27574 ];

	UWwiseAudioComponent_execFindInstanceIndex_Parms FindInstanceIndex_Parms;
	FindInstanceIndex_Parms.BaseSound = BaseSound;
	FindInstanceIndex_Parms.StopEvent = StopEvent;

	pFnFindInstanceIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindInstanceIndex, &FindInstanceIndex_Parms, NULL );

	pFnFindInstanceIndex->FunctionFlags |= 0x400;

	return FindInstanceIndex_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.AddInstance
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   BaseSound                      ( CPF_Parm )
// class UWwiseEvent*             StopEvent                      ( CPF_OptionalParm | CPF_Parm )

int UWwiseAudioComponent::AddInstance ( class UWwiseBaseSoundObject* BaseSound, class UWwiseEvent* StopEvent )
{
	static UFunction* pFnAddInstance = NULL;

	if ( ! pFnAddInstance )
		pFnAddInstance = (UFunction*) UObject::GObjObjects()->Data[ 27570 ];

	UWwiseAudioComponent_execAddInstance_Parms AddInstance_Parms;
	AddInstance_Parms.BaseSound = BaseSound;
	AddInstance_Parms.StopEvent = StopEvent;

	pFnAddInstance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddInstance, &AddInstance_Parms, NULL );

	pFnAddInstance->FunctionFlags |= 0x400;

	return AddInstance_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetRTPCWithHandler
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          fValue                         ( CPF_Parm )
// struct FWwiseRTPCForActorHandler RTPCHandler                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWwiseAudioComponent::SetRTPCWithHandler ( float fValue, struct FWwiseRTPCForActorHandler* RTPCHandler )
{
	static UFunction* pFnSetRTPCWithHandler = NULL;

	if ( ! pFnSetRTPCWithHandler )
		pFnSetRTPCWithHandler = (UFunction*) UObject::GObjObjects()->Data[ 27567 ];

	UWwiseAudioComponent_execSetRTPCWithHandler_Parms SetRTPCWithHandler_Parms;
	SetRTPCWithHandler_Parms.fValue = fValue;

	pFnSetRTPCWithHandler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRTPCWithHandler, &SetRTPCWithHandler_Parms, NULL );

	pFnSetRTPCWithHandler->FunctionFlags |= 0x400;

	if ( RTPCHandler )
		memcpy ( RTPCHandler, &SetRTPCWithHandler_Parms.RTPCHandler, 0x14 );
};

// Function WwiseAudio.WwiseAudioComponentMultiLoc.Set3D
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UWwiseAudioComponentMultiLoc::Set3D ( )
{
	static UFunction* pFnSet3D = NULL;

	if ( ! pFnSet3D )
		pFnSet3D = (UFunction*) UObject::GObjObjects()->Data[ 27656 ];

	UWwiseAudioComponentMultiLoc_execSet3D_Parms Set3D_Parms;

	pFnSet3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet3D, &Set3D_Parms, NULL );

	pFnSet3D->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseVolume.TimerPop
// [0x00020000] 
// Parameters infos:
// class AWwiseVolumeTimer*       T                              ( CPF_Parm )

void AWwiseVolume::TimerPop ( class AWwiseVolumeTimer* T )
{
	static UFunction* pFnTimerPop = NULL;

	if ( ! pFnTimerPop )
		pFnTimerPop = (UFunction*) UObject::GObjObjects()->Data[ 27660 ];

	AWwiseVolume_execTimerPop_Parms TimerPop_Parms;
	TimerPop_Parms.T = T;

	this->ProcessEvent ( pFnTimerPop, &TimerPop_Parms, NULL );
};

// Function WwiseAudio.WwiseVolume.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AWwiseVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 27658 ];

	AWwiseVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function WwiseAudio.WwiseAudioVolume.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::Stop ( )
{
	static UFunction* pFnStop = NULL;

	if ( ! pFnStop )
		pFnStop = (UFunction*) UObject::GObjObjects()->Data[ 27687 ];

	AWwiseAudioVolume_execStop_Parms Stop_Parms;

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStop, &Stop_Parms, NULL );

	pFnStop->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.Start
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::Start ( )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 27686 ];

	AWwiseAudioVolume_execStart_Parms Start_Parms;

	pFnStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	pFnStart->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::myTimerPop ( )
{
	static UFunction* pFnmyTimerPop = NULL;

	if ( ! pFnmyTimerPop )
		pFnmyTimerPop = (UFunction*) UObject::GObjObjects()->Data[ 27685 ];

	AWwiseAudioVolume_execmyTimerPop_Parms myTimerPop_Parms;

	pFnmyTimerPop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnmyTimerPop, &myTimerPop_Parms, NULL );

	pFnmyTimerPop->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.TimerPop
// [0x00020002] 
// Parameters infos:
// class AWwiseVolumeTimer*       T                              ( CPF_Parm )

void AWwiseAudioVolume::TimerPop ( class AWwiseVolumeTimer* T )
{
	static UFunction* pFnTimerPop = NULL;

	if ( ! pFnTimerPop )
		pFnTimerPop = (UFunction*) UObject::GObjObjects()->Data[ 27683 ];

	AWwiseAudioVolume_execTimerPop_Parms TimerPop_Parms;
	TimerPop_Parms.T = T;

	this->ProcessEvent ( pFnTimerPop, &TimerPop_Parms, NULL );
};

// Function WwiseAudio.WwiseAudioVolume.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AWwiseAudioVolume::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 27681 ];

	AWwiseAudioVolume_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function WwiseAudio.WwiseAudioVolume.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AWwiseAudioVolume::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 27676 ];

	AWwiseAudioVolume_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function WwiseAudio.WwiseAudioVolume.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AWwiseAudioVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 27675 ];

	AWwiseAudioVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function WwiseAudio.WwiseMicPosOrient.GetUpVector
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector AWwiseMicPosOrient::GetUpVector ( )
{
	static UFunction* pFnGetUpVector = NULL;

	if ( ! pFnGetUpVector )
		pFnGetUpVector = (UFunction*) UObject::GObjObjects()->Data[ 27769 ];

	AWwiseMicPosOrient_execGetUpVector_Parms GetUpVector_Parms;

	pFnGetUpVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUpVector, &GetUpVector_Parms, NULL );

	pFnGetUpVector->FunctionFlags |= 0x400;

	return GetUpVector_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseMicPosOrient.GetFrontVector
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector AWwiseMicPosOrient::GetFrontVector ( )
{
	static UFunction* pFnGetFrontVector = NULL;

	if ( ! pFnGetFrontVector )
		pFnGetFrontVector = (UFunction*) UObject::GObjObjects()->Data[ 27767 ];

	AWwiseMicPosOrient_execGetFrontVector_Parms GetFrontVector_Parms;

	pFnGetFrontVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFrontVector, &GetFrontVector_Parms, NULL );

	pFnGetFrontVector->FunctionFlags |= 0x400;

	return GetFrontVector_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseMusicVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMusicVolume::myTimerPop ( )
{
	static UFunction* pFnmyTimerPop = NULL;

	if ( ! pFnmyTimerPop )
		pFnmyTimerPop = (UFunction*) UObject::GObjObjects()->Data[ 27784 ];

	AWwiseMusicVolume_execmyTimerPop_Parms myTimerPop_Parms;

	pFnmyTimerPop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnmyTimerPop, &myTimerPop_Parms, NULL );

	pFnmyTimerPop->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.SetContainsPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bContainsPlayer                ( CPF_Parm )

void AWwiseMusicVolume::SetContainsPlayer ( unsigned long bContainsPlayer )
{
	static UFunction* pFnSetContainsPlayer = NULL;

	if ( ! pFnSetContainsPlayer )
		pFnSetContainsPlayer = (UFunction*) UObject::GObjObjects()->Data[ 27791 ];

	AWwiseMusicVolume_execSetContainsPlayer_Parms SetContainsPlayer_Parms;
	SetContainsPlayer_Parms.bContainsPlayer = bContainsPlayer;

	pFnSetContainsPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContainsPlayer, &SetContainsPlayer_Parms, NULL );

	pFnSetContainsPlayer->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.SetEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void AWwiseMusicVolume::SetEnabled ( unsigned long bEnabled )
{
	static UFunction* pFnSetEnabled = NULL;

	if ( ! pFnSetEnabled )
		pFnSetEnabled = (UFunction*) UObject::GObjObjects()->Data[ 27789 ];

	AWwiseMusicVolume_execSetEnabled_Parms SetEnabled_Parms;
	SetEnabled_Parms.bEnabled = bEnabled;

	pFnSetEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEnabled, &SetEnabled_Parms, NULL );

	pFnSetEnabled->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.StopMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMusicVolume::StopMusic ( )
{
	static UFunction* pFnStopMusic = NULL;

	if ( ! pFnStopMusic )
		pFnStopMusic = (UFunction*) UObject::GObjObjects()->Data[ 27788 ];

	AWwiseMusicVolume_execStopMusic_Parms StopMusic_Parms;

	pFnStopMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopMusic, &StopMusic_Parms, NULL );

	pFnStopMusic->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.StartMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMusicVolume::StartMusic ( )
{
	static UFunction* pFnStartMusic = NULL;

	if ( ! pFnStartMusic )
		pFnStartMusic = (UFunction*) UObject::GObjObjects()->Data[ 27787 ];

	AWwiseMusicVolume_execStartMusic_Parms StartMusic_Parms;

	pFnStartMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartMusic, &StartMusic_Parms, NULL );

	pFnStartMusic->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.CheckPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMusicVolume::CheckPriority ( )
{
	static UFunction* pFnCheckPriority = NULL;

	if ( ! pFnCheckPriority )
		pFnCheckPriority = (UFunction*) UObject::GObjObjects()->Data[ 27785 ];

	AWwiseMusicVolume_execCheckPriority_Parms CheckPriority_Parms;

	pFnCheckPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckPriority, &CheckPriority_Parms, NULL );

	pFnCheckPriority->FunctionFlags |= 0x400;

	return CheckPriority_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseMusicVolume.TimerPop
// [0x00020002] 
// Parameters infos:
// class AWwiseVolumeTimer*       T                              ( CPF_Parm )

void AWwiseMusicVolume::TimerPop ( class AWwiseVolumeTimer* T )
{
	static UFunction* pFnTimerPop = NULL;

	if ( ! pFnTimerPop )
		pFnTimerPop = (UFunction*) UObject::GObjObjects()->Data[ 27782 ];

	AWwiseMusicVolume_execTimerPop_Parms TimerPop_Parms;
	TimerPop_Parms.T = T;

	this->ProcessEvent ( pFnTimerPop, &TimerPop_Parms, NULL );
};

// Function WwiseAudio.WwiseMusicVolume.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AWwiseMusicVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 27781 ];

	AWwiseMusicVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function WwiseAudio.WwiseVolumeTimer.Timer
// [0x00020002] 
// Parameters infos:

void AWwiseVolumeTimer::Timer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 27811 ];

	AWwiseVolumeTimer_execTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function WwiseAudio.WwiseDistanceRTPC.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AWwiseDistanceRTPC::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 27744 ];

	AWwiseDistanceRTPC_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif