/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXOnlineFoundation_functions.h
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

// Function SFXOnlineFoundation.SFXOnlineComponent.IsEventPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eEventType                     ( CPF_Parm )
// int                            nEventId                       ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineComponent::IsEventPending ( unsigned char eEventType, int nEventId )
{
	static UFunction* pFnIsEventPending = NULL;

	if ( ! pFnIsEventPending )
		pFnIsEventPending = (UFunction*) UObject::GObjObjects()->Data[ 28210 ];

	USFXOnlineComponent_execIsEventPending_Parms IsEventPending_Parms;
	IsEventPending_Parms.eEventType = eEventType;
	IsEventPending_Parms.nEventId = nEventId;

	pFnIsEventPending->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsEventPending, &IsEventPending_Parms, NULL );

	pFnIsEventPending->FunctionFlags |= 0x400;

	return IsEventPending_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eEventType                     ( CPF_Parm )
// int                            nEventId                       ( CPF_OptionalParm | CPF_Parm )

class USFXOnlineEvent* USFXOnlineComponent::GetEvent ( unsigned char eEventType, int nEventId )
{
	static UFunction* pFnGetEvent = NULL;

	if ( ! pFnGetEvent )
		pFnGetEvent = (UFunction*) UObject::GObjObjects()->Data[ 28206 ];

	USFXOnlineComponent_execGetEvent_Parms GetEvent_Parms;
	GetEvent_Parms.eEventType = eEventType;
	GetEvent_Parms.nEventId = nEventId;

	pFnGetEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEvent, &GetEvent_Parms, NULL );

	pFnGetEvent->FunctionFlags |= 0x400;

	return GetEvent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkSetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< class USFXOnlineEvent* > aOnlineEventSet                ( CPF_Parm | CPF_NeedCtorLink )
// struct FScriptDelegate         fnWorkComplete                 ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponent::WaitingForWorkSetObject ( TArray< class USFXOnlineEvent* > aOnlineEventSet, struct FScriptDelegate fnWorkComplete )
{
	static UFunction* pFnWaitingForWorkSetObject = NULL;

	if ( ! pFnWaitingForWorkSetObject )
		pFnWaitingForWorkSetObject = (UFunction*) UObject::GObjObjects()->Data[ 28202 ];

	USFXOnlineComponent_execWaitingForWorkSetObject_Parms WaitingForWorkSetObject_Parms;
	memcpy ( &WaitingForWorkSetObject_Parms.aOnlineEventSet, &aOnlineEventSet, 0xC );
	memcpy ( &WaitingForWorkSetObject_Parms.fnWorkComplete, &fnWorkComplete, 0xC );

	pFnWaitingForWorkSetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWaitingForWorkSetObject, &WaitingForWorkSetObject_Parms, NULL );

	pFnWaitingForWorkSetObject->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkSetType
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        aWorkUnits                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FScriptDelegate         fnWorkComplete                 ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponent::WaitingForWorkSetType ( TArray< unsigned char > aWorkUnits, struct FScriptDelegate fnWorkComplete )
{
	static UFunction* pFnWaitingForWorkSetType = NULL;

	if ( ! pFnWaitingForWorkSetType )
		pFnWaitingForWorkSetType = (UFunction*) UObject::GObjObjects()->Data[ 28198 ];

	USFXOnlineComponent_execWaitingForWorkSetType_Parms WaitingForWorkSetType_Parms;
	memcpy ( &WaitingForWorkSetType_Parms.aWorkUnits, &aWorkUnits, 0xC );
	memcpy ( &WaitingForWorkSetType_Parms.fnWorkComplete, &fnWorkComplete, 0xC );

	pFnWaitingForWorkSetType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWaitingForWorkSetType, &WaitingForWorkSetType_Parms, NULL );

	pFnWaitingForWorkSetType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )
// struct FScriptDelegate         fnWorkComplete                 ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponent::WaitingForWorkObject ( class USFXOnlineEvent* oEvent, struct FScriptDelegate fnWorkComplete )
{
	static UFunction* pFnWaitingForWorkObject = NULL;

	if ( ! pFnWaitingForWorkObject )
		pFnWaitingForWorkObject = (UFunction*) UObject::GObjObjects()->Data[ 28195 ];

	USFXOnlineComponent_execWaitingForWorkObject_Parms WaitingForWorkObject_Parms;
	WaitingForWorkObject_Parms.oEvent = oEvent;
	memcpy ( &WaitingForWorkObject_Parms.fnWorkComplete, &fnWorkComplete, 0xC );

	pFnWaitingForWorkObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWaitingForWorkObject, &WaitingForWorkObject_Parms, NULL );

	pFnWaitingForWorkObject->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkType
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eWork                          ( CPF_Parm )
// struct FScriptDelegate         fnWorkComplete                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            nEventId                       ( CPF_OptionalParm | CPF_Parm )

void USFXOnlineComponent::WaitingForWorkType ( unsigned char eWork, struct FScriptDelegate fnWorkComplete, int nEventId )
{
	static UFunction* pFnWaitingForWorkType = NULL;

	if ( ! pFnWaitingForWorkType )
		pFnWaitingForWorkType = (UFunction*) UObject::GObjObjects()->Data[ 28191 ];

	USFXOnlineComponent_execWaitingForWorkType_Parms WaitingForWorkType_Parms;
	WaitingForWorkType_Parms.eWork = eWork;
	memcpy ( &WaitingForWorkType_Parms.fnWorkComplete, &fnWorkComplete, 0xC );
	WaitingForWorkType_Parms.nEventId = nEventId;

	pFnWaitingForWorkType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWaitingForWorkType, &WaitingForWorkType_Parms, NULL );

	pFnWaitingForWorkType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkFinishedObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )
// unsigned char                  eStatusFinished                ( CPF_OptionalParm | CPF_Parm )

void USFXOnlineComponent::NotifyWorkFinishedObject ( class USFXOnlineEvent* oEvent, unsigned char eStatusFinished )
{
	static UFunction* pFnNotifyWorkFinishedObject = NULL;

	if ( ! pFnNotifyWorkFinishedObject )
		pFnNotifyWorkFinishedObject = (UFunction*) UObject::GObjObjects()->Data[ 28188 ];

	USFXOnlineComponent_execNotifyWorkFinishedObject_Parms NotifyWorkFinishedObject_Parms;
	NotifyWorkFinishedObject_Parms.oEvent = oEvent;
	NotifyWorkFinishedObject_Parms.eStatusFinished = eStatusFinished;

	pFnNotifyWorkFinishedObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyWorkFinishedObject, &NotifyWorkFinishedObject_Parms, NULL );

	pFnNotifyWorkFinishedObject->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkFinishedType
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eWork                          ( CPF_Parm )
// unsigned char                  eStatusFinished                ( CPF_OptionalParm | CPF_Parm )
// int                            nEventId                       ( CPF_OptionalParm | CPF_Parm )

void USFXOnlineComponent::NotifyWorkFinishedType ( unsigned char eWork, unsigned char eStatusFinished, int nEventId )
{
	static UFunction* pFnNotifyWorkFinishedType = NULL;

	if ( ! pFnNotifyWorkFinishedType )
		pFnNotifyWorkFinishedType = (UFunction*) UObject::GObjObjects()->Data[ 28184 ];

	USFXOnlineComponent_execNotifyWorkFinishedType_Parms NotifyWorkFinishedType_Parms;
	NotifyWorkFinishedType_Parms.eWork = eWork;
	NotifyWorkFinishedType_Parms.eStatusFinished = eStatusFinished;
	NotifyWorkFinishedType_Parms.nEventId = nEventId;

	pFnNotifyWorkFinishedType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyWorkFinishedType, &NotifyWorkFinishedType_Parms, NULL );

	pFnNotifyWorkFinishedType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkStartedObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )
// unsigned char                  eEventType                     ( CPF_OptionalParm | CPF_Parm )

void USFXOnlineComponent::NotifyWorkStartedObject ( class USFXOnlineEvent* oEvent, unsigned char eEventType )
{
	static UFunction* pFnNotifyWorkStartedObject = NULL;

	if ( ! pFnNotifyWorkStartedObject )
		pFnNotifyWorkStartedObject = (UFunction*) UObject::GObjObjects()->Data[ 28181 ];

	USFXOnlineComponent_execNotifyWorkStartedObject_Parms NotifyWorkStartedObject_Parms;
	NotifyWorkStartedObject_Parms.oEvent = oEvent;
	NotifyWorkStartedObject_Parms.eEventType = eEventType;

	pFnNotifyWorkStartedObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyWorkStartedObject, &NotifyWorkStartedObject_Parms, NULL );

	pFnNotifyWorkStartedObject->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkStartedType
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eWork                          ( CPF_Parm )
// int                            nEventId                       ( CPF_OptionalParm | CPF_Parm )
// float                          fTimeOut                       ( CPF_OptionalParm | CPF_Parm )

void USFXOnlineComponent::NotifyWorkStartedType ( unsigned char eWork, int nEventId, float fTimeOut )
{
	static UFunction* pFnNotifyWorkStartedType = NULL;

	if ( ! pFnNotifyWorkStartedType )
		pFnNotifyWorkStartedType = (UFunction*) UObject::GObjObjects()->Data[ 28177 ];

	USFXOnlineComponent_execNotifyWorkStartedType_Parms NotifyWorkStartedType_Parms;
	NotifyWorkStartedType_Parms.eWork = eWork;
	NotifyWorkStartedType_Parms.nEventId = nEventId;
	NotifyWorkStartedType_Parms.fTimeOut = fTimeOut;

	pFnNotifyWorkStartedType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyWorkStartedType, &NotifyWorkStartedType_Parms, NULL );

	pFnNotifyWorkStartedType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyEventObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

void USFXOnlineComponent::NotifyEventObject ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnNotifyEventObject = NULL;

	if ( ! pFnNotifyEventObject )
		pFnNotifyEventObject = (UFunction*) UObject::GObjObjects()->Data[ 28175 ];

	USFXOnlineComponent_execNotifyEventObject_Parms NotifyEventObject_Parms;
	NotifyEventObject_Parms.oEvent = oEvent;

	pFnNotifyEventObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyEventObject, &NotifyEventObject_Parms, NULL );

	pFnNotifyEventObject->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eEventType                     ( CPF_Parm )
// unsigned char                  eStatus                        ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  eOutcome                       ( CPF_OptionalParm | CPF_Parm )

void USFXOnlineComponent::NotifyEventType ( unsigned char eEventType, unsigned char eStatus, unsigned char eOutcome )
{
	static UFunction* pFnNotifyEventType = NULL;

	if ( ! pFnNotifyEventType )
		pFnNotifyEventType = (UFunction*) UObject::GObjObjects()->Data[ 28171 ];

	USFXOnlineComponent_execNotifyEventType_Parms NotifyEventType_Parms;
	NotifyEventType_Parms.eEventType = eEventType;
	NotifyEventType_Parms.eStatus = eStatus;
	NotifyEventType_Parms.eOutcome = eOutcome;

	pFnNotifyEventType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyEventType, &NotifyEventType_Parms, NULL );

	pFnNotifyEventType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.StopWaitingForAllWork
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UObject*                 oCallbackTarget                ( CPF_Parm )

void USFXOnlineComponent::StopWaitingForAllWork ( class UObject* oCallbackTarget )
{
	static UFunction* pFnStopWaitingForAllWork = NULL;

	if ( ! pFnStopWaitingForAllWork )
		pFnStopWaitingForAllWork = (UFunction*) UObject::GObjObjects()->Data[ 28167 ];

	USFXOnlineComponent_execStopWaitingForAllWork_Parms StopWaitingForAllWork_Parms;
	StopWaitingForAllWork_Parms.oCallbackTarget = oCallbackTarget;

	pFnStopWaitingForAllWork->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopWaitingForAllWork, &StopWaitingForAllWork_Parms, NULL );

	pFnStopWaitingForAllWork->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.UnsubscribeFromAllEvents
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UObject*                 oCallbackTarget                ( CPF_Parm )

void USFXOnlineComponent::UnsubscribeFromAllEvents ( class UObject* oCallbackTarget )
{
	static UFunction* pFnUnsubscribeFromAllEvents = NULL;

	if ( ! pFnUnsubscribeFromAllEvents )
		pFnUnsubscribeFromAllEvents = (UFunction*) UObject::GObjObjects()->Data[ 28165 ];

	USFXOnlineComponent_execUnsubscribeFromAllEvents_Parms UnsubscribeFromAllEvents_Parms;
	UnsubscribeFromAllEvents_Parms.oCallbackTarget = oCallbackTarget;

	pFnUnsubscribeFromAllEvents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnsubscribeFromAllEvents, &UnsubscribeFromAllEvents_Parms, NULL );

	pFnUnsubscribeFromAllEvents->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.UnsubscribeFromEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  oEventType                     ( CPF_Parm )
// struct FScriptDelegate         fnEventCallback                ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponent::UnsubscribeFromEvent ( unsigned char oEventType, struct FScriptDelegate fnEventCallback )
{
	static UFunction* pFnUnsubscribeFromEvent = NULL;

	if ( ! pFnUnsubscribeFromEvent )
		pFnUnsubscribeFromEvent = (UFunction*) UObject::GObjObjects()->Data[ 28162 ];

	USFXOnlineComponent_execUnsubscribeFromEvent_Parms UnsubscribeFromEvent_Parms;
	UnsubscribeFromEvent_Parms.oEventType = oEventType;
	memcpy ( &UnsubscribeFromEvent_Parms.fnEventCallback, &fnEventCallback, 0xC );

	pFnUnsubscribeFromEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnsubscribeFromEvent, &UnsubscribeFromEvent_Parms, NULL );

	pFnUnsubscribeFromEvent->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.SubscribeToEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eEventType                     ( CPF_Parm )
// struct FScriptDelegate         fnEventCallback                ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponent::SubscribeToEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback )
{
	static UFunction* pFnSubscribeToEvent = NULL;

	if ( ! pFnSubscribeToEvent )
		pFnSubscribeToEvent = (UFunction*) UObject::GObjObjects()->Data[ 28159 ];

	USFXOnlineComponent_execSubscribeToEvent_Parms SubscribeToEvent_Parms;
	SubscribeToEvent_Parms.eEventType = eEventType;
	memcpy ( &SubscribeToEvent_Parms.fnEventCallback, &fnEventCallback, 0xC );

	pFnSubscribeToEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubscribeToEvent, &SubscribeToEvent_Parms, NULL );

	pFnSubscribeToEvent->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnEvent
// [0x00120000] 
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

void USFXOnlineComponent::OnEvent ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnOnEvent = NULL;

	if ( ! pFnOnEvent )
		pFnOnEvent = (UFunction*) UObject::GObjObjects()->Data[ 28145 ];

	USFXOnlineComponent_execOnEvent_Parms OnEvent_Parms;
	OnEvent_Parms.oEvent = oEvent;

	this->ProcessEvent ( pFnOnEvent, &OnEvent_Parms, NULL );
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetAPIName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineComponent::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 28156 ];

	USFXOnlineComponent_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnRelease
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponent::OnRelease ( )
{
	static UFunction* pFnOnRelease = NULL;

	if ( ! pFnOnRelease )
		pFnOnRelease = (UFunction*) UObject::GObjObjects()->Data[ 28155 ];

	USFXOnlineComponent_execOnRelease_Parms OnRelease_Parms;

	pFnOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRelease, &OnRelease_Parms, NULL );

	pFnOnRelease->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnInitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineSubsystem*     oOnlineSubsystem               ( CPF_Parm )

void USFXOnlineComponent::OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem )
{
	static UFunction* pFnOnInitialize = NULL;

	if ( ! pFnOnInitialize )
		pFnOnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 28153 ];

	USFXOnlineComponent_execOnInitialize_Parms OnInitialize_Parms;
	OnInitialize_Parms.oOnlineSubsystem = oOnlineSubsystem;

	pFnOnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInitialize, &OnInitialize_Parms, NULL );

	pFnOnInitialize->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponent.SubscribeToEvents
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void USFXOnlineComponent::SubscribeToEvents ( )
{
	static UFunction* pFnSubscribeToEvents = NULL;

	if ( ! pFnSubscribeToEvents )
		pFnSubscribeToEvents = (UFunction*) UObject::GObjObjects()->Data[ 28152 ];

	USFXOnlineComponent_execSubscribeToEvents_Parms SubscribeToEvents_Parms;

	pFnSubscribeToEvents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubscribeToEvents, &SubscribeToEvents_Parms, NULL );

	pFnSubscribeToEvents->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.Update
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

void USFXOnlineEvent::Update ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 28831 ];

	USFXOnlineEvent_execUpdate_Parms Update_Parms;
	Update_Parms.oEvent = oEvent;

	pFnUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	pFnUpdate->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsComplete
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineEvent::IsComplete ( )
{
	static UFunction* pFnIsComplete = NULL;

	if ( ! pFnIsComplete )
		pFnIsComplete = (UFunction*) UObject::GObjObjects()->Data[ 28829 ];

	USFXOnlineEvent_execIsComplete_Parms IsComplete_Parms;

	pFnIsComplete->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsComplete, &IsComplete_Parms, NULL );

	pFnIsComplete->FunctionFlags |= 0x400;

	return IsComplete_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineEvent::IsPending ( )
{
	static UFunction* pFnIsPending = NULL;

	if ( ! pFnIsPending )
		pFnIsPending = (UFunction*) UObject::GObjObjects()->Data[ 28827 ];

	USFXOnlineEvent_execIsPending_Parms IsPending_Parms;

	pFnIsPending->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPending, &IsPending_Parms, NULL );

	pFnIsPending->FunctionFlags |= 0x400;

	return IsPending_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.CompleteAndSucceeded
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineEvent::CompleteAndSucceeded ( )
{
	static UFunction* pFnCompleteAndSucceeded = NULL;

	if ( ! pFnCompleteAndSucceeded )
		pFnCompleteAndSucceeded = (UFunction*) UObject::GObjObjects()->Data[ 28825 ];

	USFXOnlineEvent_execCompleteAndSucceeded_Parms CompleteAndSucceeded_Parms;

	pFnCompleteAndSucceeded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCompleteAndSucceeded, &CompleteAndSucceeded_Parms, NULL );

	pFnCompleteAndSucceeded->FunctionFlags |= 0x400;

	return CompleteAndSucceeded_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.HasTimedOut
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineEvent::HasTimedOut ( )
{
	static UFunction* pFnHasTimedOut = NULL;

	if ( ! pFnHasTimedOut )
		pFnHasTimedOut = (UFunction*) UObject::GObjObjects()->Data[ 28823 ];

	USFXOnlineEvent_execHasTimedOut_Parms HasTimedOut_Parms;

	pFnHasTimedOut->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasTimedOut, &HasTimedOut_Parms, NULL );

	pFnHasTimedOut->FunctionFlags |= 0x400;

	return HasTimedOut_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsTimeoutEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineEvent::IsTimeoutEnabled ( )
{
	static UFunction* pFnIsTimeoutEnabled = NULL;

	if ( ! pFnIsTimeoutEnabled )
		pFnIsTimeoutEnabled = (UFunction*) UObject::GObjObjects()->Data[ 28821 ];

	USFXOnlineEvent_execIsTimeoutEnabled_Parms IsTimeoutEnabled_Parms;

	pFnIsTimeoutEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsTimeoutEnabled, &IsTimeoutEnabled_Parms, NULL );

	pFnIsTimeoutEnabled->FunctionFlags |= 0x400;

	return IsTimeoutEnabled_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.DisableTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void USFXOnlineEvent::DisableTimeout ( )
{
	static UFunction* pFnDisableTimeout = NULL;

	if ( ! pFnDisableTimeout )
		pFnDisableTimeout = (UFunction*) UObject::GObjObjects()->Data[ 28820 ];

	USFXOnlineEvent_execDisableTimeout_Parms DisableTimeout_Parms;

	pFnDisableTimeout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisableTimeout, &DisableTimeout_Parms, NULL );

	pFnDisableTimeout->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.EnableTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void USFXOnlineEvent::EnableTimeout ( )
{
	static UFunction* pFnEnableTimeout = NULL;

	if ( ! pFnEnableTimeout )
		pFnEnableTimeout = (UFunction*) UObject::GObjObjects()->Data[ 28819 ];

	USFXOnlineEvent_execEnableTimeout_Parms EnableTimeout_Parms;

	pFnEnableTimeout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableTimeout, &EnableTimeout_Parms, NULL );

	pFnEnableTimeout->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          fEventTimeout                  ( CPF_Parm )

void USFXOnlineEvent::SetTimeout ( float fEventTimeout )
{
	static UFunction* pFnSetTimeout = NULL;

	if ( ! pFnSetTimeout )
		pFnSetTimeout = (UFunction*) UObject::GObjObjects()->Data[ 28817 ];

	USFXOnlineEvent_execSetTimeout_Parms SetTimeout_Parms;
	SetTimeout_Parms.fEventTimeout = fEventTimeout;

	pFnSetTimeout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTimeout, &SetTimeout_Parms, NULL );

	pFnSetTimeout->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXOnlineEvent::GetTimeout ( )
{
	static UFunction* pFnGetTimeout = NULL;

	if ( ! pFnGetTimeout )
		pFnGetTimeout = (UFunction*) UObject::GObjObjects()->Data[ 28815 ];

	USFXOnlineEvent_execGetTimeout_Parms GetTimeout_Parms;

	pFnGetTimeout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTimeout, &GetTimeout_Parms, NULL );

	pFnGetTimeout->FunctionFlags |= 0x400;

	return GetTimeout_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetErrorString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineEvent::SetErrorString ( struct FString sMessage )
{
	static UFunction* pFnSetErrorString = NULL;

	if ( ! pFnSetErrorString )
		pFnSetErrorString = (UFunction*) UObject::GObjObjects()->Data[ 28813 ];

	USFXOnlineEvent_execSetErrorString_Parms SetErrorString_Parms;
	memcpy ( &SetErrorString_Parms.sMessage, &sMessage, 0xC );

	pFnSetErrorString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetErrorString, &SetErrorString_Parms, NULL );

	pFnSetErrorString->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetErrorString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXOnlineEvent::GetErrorString ( )
{
	static UFunction* pFnGetErrorString = NULL;

	if ( ! pFnGetErrorString )
		pFnGetErrorString = (UFunction*) UObject::GObjObjects()->Data[ 28811 ];

	USFXOnlineEvent_execGetErrorString_Parms GetErrorString_Parms;

	pFnGetErrorString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetErrorString, &GetErrorString_Parms, NULL );

	pFnGetErrorString->FunctionFlags |= 0x400;

	return GetErrorString_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetErrorCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nCode                          ( CPF_Parm )

void USFXOnlineEvent::SetErrorCode ( int nCode )
{
	static UFunction* pFnSetErrorCode = NULL;

	if ( ! pFnSetErrorCode )
		pFnSetErrorCode = (UFunction*) UObject::GObjObjects()->Data[ 28809 ];

	USFXOnlineEvent_execSetErrorCode_Parms SetErrorCode_Parms;
	SetErrorCode_Parms.nCode = nCode;

	pFnSetErrorCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetErrorCode, &SetErrorCode_Parms, NULL );

	pFnSetErrorCode->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetErrorCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXOnlineEvent::GetErrorCode ( )
{
	static UFunction* pFnGetErrorCode = NULL;

	if ( ! pFnGetErrorCode )
		pFnGetErrorCode = (UFunction*) UObject::GObjObjects()->Data[ 28807 ];

	USFXOnlineEvent_execGetErrorCode_Parms GetErrorCode_Parms;

	pFnGetErrorCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetErrorCode, &GetErrorCode_Parms, NULL );

	pFnGetErrorCode->FunctionFlags |= 0x400;

	return GetErrorCode_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eNewStatus                     ( CPF_Parm )

void USFXOnlineEvent::SetStatus ( unsigned char eNewStatus )
{
	static UFunction* pFnSetStatus = NULL;

	if ( ! pFnSetStatus )
		pFnSetStatus = (UFunction*) UObject::GObjObjects()->Data[ 28805 ];

	USFXOnlineEvent_execSetStatus_Parms SetStatus_Parms;
	SetStatus_Parms.eNewStatus = eNewStatus;

	pFnSetStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetStatus, &SetStatus_Parms, NULL );

	pFnSetStatus->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char USFXOnlineEvent::GetStatus ( )
{
	static UFunction* pFnGetStatus = NULL;

	if ( ! pFnGetStatus )
		pFnGetStatus = (UFunction*) UObject::GObjObjects()->Data[ 28803 ];

	USFXOnlineEvent_execGetStatus_Parms GetStatus_Parms;

	pFnGetStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStatus, &GetStatus_Parms, NULL );

	pFnGetStatus->FunctionFlags |= 0x400;

	return GetStatus_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetOutcome
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eStatusFinished                ( CPF_Parm )

void USFXOnlineEvent::SetOutcome ( unsigned char eStatusFinished )
{
	static UFunction* pFnSetOutcome = NULL;

	if ( ! pFnSetOutcome )
		pFnSetOutcome = (UFunction*) UObject::GObjObjects()->Data[ 28801 ];

	USFXOnlineEvent_execSetOutcome_Parms SetOutcome_Parms;
	SetOutcome_Parms.eStatusFinished = eStatusFinished;

	pFnSetOutcome->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOutcome, &SetOutcome_Parms, NULL );

	pFnSetOutcome->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetOutcome
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char USFXOnlineEvent::GetOutcome ( )
{
	static UFunction* pFnGetOutcome = NULL;

	if ( ! pFnGetOutcome )
		pFnGetOutcome = (UFunction*) UObject::GObjObjects()->Data[ 28799 ];

	USFXOnlineEvent_execGetOutcome_Parms GetOutcome_Parms;

	pFnGetOutcome->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOutcome, &GetOutcome_Parms, NULL );

	pFnGetOutcome->FunctionFlags |= 0x400;

	return GetOutcome_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEventId
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nNewEventId                    ( CPF_Parm )

void USFXOnlineEvent::SetEventId ( int nNewEventId )
{
	static UFunction* pFnSetEventId = NULL;

	if ( ! pFnSetEventId )
		pFnSetEventId = (UFunction*) UObject::GObjObjects()->Data[ 28797 ];

	USFXOnlineEvent_execSetEventId_Parms SetEventId_Parms;
	SetEventId_Parms.nNewEventId = nNewEventId;

	pFnSetEventId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEventId, &SetEventId_Parms, NULL );

	pFnSetEventId->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventId
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXOnlineEvent::GetEventId ( )
{
	static UFunction* pFnGetEventId = NULL;

	if ( ! pFnGetEventId )
		pFnGetEventId = (UFunction*) UObject::GObjObjects()->Data[ 28795 ];

	USFXOnlineEvent_execGetEventId_Parms GetEventId_Parms;

	pFnGetEventId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEventId, &GetEventId_Parms, NULL );

	pFnGetEventId->FunctionFlags |= 0x400;

	return GetEventId_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eNewEventType                  ( CPF_Parm )

void USFXOnlineEvent::SetEventType ( unsigned char eNewEventType )
{
	static UFunction* pFnSetEventType = NULL;

	if ( ! pFnSetEventType )
		pFnSetEventType = (UFunction*) UObject::GObjObjects()->Data[ 28793 ];

	USFXOnlineEvent_execSetEventType_Parms SetEventType_Parms;
	SetEventType_Parms.eNewEventType = eNewEventType;

	pFnSetEventType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEventType, &SetEventType_Parms, NULL );

	pFnSetEventType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char USFXOnlineEvent::GetEventType ( )
{
	static UFunction* pFnGetEventType = NULL;

	if ( ! pFnGetEventType )
		pFnGetEventType = (UFunction*) UObject::GObjObjects()->Data[ 28791 ];

	USFXOnlineEvent_execGetEventType_Parms GetEventType_Parms;

	pFnGetEventType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEventType, &GetEventType_Parms, NULL );

	pFnGetEventType->FunctionFlags |= 0x400;

	return GetEventType_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Integer.SetInteger
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nInteger                       ( CPF_Parm )

void USFXOnlineEvent_Integer::SetInteger ( int nInteger )
{
	static UFunction* pFnSetInteger = NULL;

	if ( ! pFnSetInteger )
		pFnSetInteger = (UFunction*) UObject::GObjObjects()->Data[ 28836 ];

	USFXOnlineEvent_Integer_execSetInteger_Parms SetInteger_Parms;
	SetInteger_Parms.nInteger = nInteger;

	pFnSetInteger->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetInteger, &SetInteger_Parms, NULL );

	pFnSetInteger->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Integer.GetInteger
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXOnlineEvent_Integer::GetInteger ( )
{
	static UFunction* pFnGetInteger = NULL;

	if ( ! pFnGetInteger )
		pFnGetInteger = (UFunction*) UObject::GObjObjects()->Data[ 28834 ];

	USFXOnlineEvent_Integer_execGetInteger_Parms GetInteger_Parms;

	pFnGetInteger->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInteger, &GetInteger_Parms, NULL );

	pFnGetInteger->FunctionFlags |= 0x400;

	return GetInteger_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent_String.SetStringData
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sStringData                    ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineEvent_String::SetStringData ( struct FString sStringData )
{
	static UFunction* pFnSetStringData = NULL;

	if ( ! pFnSetStringData )
		pFnSetStringData = (UFunction*) UObject::GObjObjects()->Data[ 28841 ];

	USFXOnlineEvent_String_execSetStringData_Parms SetStringData_Parms;
	memcpy ( &SetStringData_Parms.sStringData, &sStringData, 0xC );

	pFnSetStringData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetStringData, &SetStringData_Parms, NULL );

	pFnSetStringData->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent_String.GetStringData
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXOnlineEvent_String::GetStringData ( )
{
	static UFunction* pFnGetStringData = NULL;

	if ( ! pFnGetStringData )
		pFnGetStringData = (UFunction*) UObject::GObjObjects()->Data[ 28839 ];

	USFXOnlineEvent_String_execGetStringData_Parms GetStringData_Parms;

	pFnGetStringData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStringData, &GetStringData_Parms, NULL );

	pFnGetStringData->FunctionFlags |= 0x400;

	return GetStringData_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.SetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nPriority                      ( CPF_Parm )

void USFXOnlineEvent_Notification::SetPriority ( int nPriority )
{
	static UFunction* pFnSetPriority = NULL;

	if ( ! pFnSetPriority )
		pFnSetPriority = (UFunction*) UObject::GObjObjects()->Data[ 28851 ];

	USFXOnlineEvent_Notification_execSetPriority_Parms SetPriority_Parms;
	SetPriority_Parms.nPriority = nPriority;

	pFnSetPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPriority, &SetPriority_Parms, NULL );

	pFnSetPriority->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.GetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXOnlineEvent_Notification::GetPriority ( )
{
	static UFunction* pFnGetPriority = NULL;

	if ( ! pFnGetPriority )
		pFnGetPriority = (UFunction*) UObject::GObjObjects()->Data[ 28849 ];

	USFXOnlineEvent_Notification_execGetPriority_Parms GetPriority_Parms;

	pFnGetPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPriority, &GetPriority_Parms, NULL );

	pFnGetPriority->FunctionFlags |= 0x400;

	return GetPriority_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.SetImageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sImageName                     ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineEvent_Notification::SetImageName ( struct FString sImageName )
{
	static UFunction* pFnSetImageName = NULL;

	if ( ! pFnSetImageName )
		pFnSetImageName = (UFunction*) UObject::GObjObjects()->Data[ 28847 ];

	USFXOnlineEvent_Notification_execSetImageName_Parms SetImageName_Parms;
	memcpy ( &SetImageName_Parms.sImageName, &sImageName, 0xC );

	pFnSetImageName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetImageName, &SetImageName_Parms, NULL );

	pFnSetImageName->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.GetImageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXOnlineEvent_Notification::GetImageName ( )
{
	static UFunction* pFnGetImageName = NULL;

	if ( ! pFnGetImageName )
		pFnGetImageName = (UFunction*) UObject::GObjObjects()->Data[ 28845 ];

	USFXOnlineEvent_Notification_execGetImageName_Parms GetImageName_Parms;

	pFnGetImageName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetImageName, &GetImageName_Parms, NULL );

	pFnGetImageName->FunctionFlags |= 0x400;

	return GetImageName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetNextTimedOutEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USFXOnlineEvent* USFXOnlineEventList::GetNextTimedOutEvent ( )
{
	static UFunction* pFnGetNextTimedOutEvent = NULL;

	if ( ! pFnGetNextTimedOutEvent )
		pFnGetNextTimedOutEvent = (UFunction*) UObject::GObjObjects()->Data[ 28882 ];

	USFXOnlineEventList_execGetNextTimedOutEvent_Parms GetNextTimedOutEvent_Parms;

	pFnGetNextTimedOutEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNextTimedOutEvent, &GetNextTimedOutEvent_Parms, NULL );

	pFnGetNextTimedOutEvent->FunctionFlags |= 0x400;

	return GetNextTimedOutEvent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEventList.RemoveEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

bool USFXOnlineEventList::RemoveEvent ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnRemoveEvent = NULL;

	if ( ! pFnRemoveEvent )
		pFnRemoveEvent = (UFunction*) UObject::GObjObjects()->Data[ 28879 ];

	USFXOnlineEventList_execRemoveEvent_Parms RemoveEvent_Parms;
	RemoveEvent_Parms.oEvent = oEvent;

	pFnRemoveEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveEvent, &RemoveEvent_Parms, NULL );

	pFnRemoveEvent->FunctionFlags |= 0x400;

	return RemoveEvent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEventList.FindEventByType
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eEventType                     ( CPF_Parm )
// int                            nEventId                       ( CPF_Parm )

int USFXOnlineEventList::FindEventByType ( unsigned char eEventType, int nEventId )
{
	static UFunction* pFnFindEventByType = NULL;

	if ( ! pFnFindEventByType )
		pFnFindEventByType = (UFunction*) UObject::GObjObjects()->Data[ 28875 ];

	USFXOnlineEventList_execFindEventByType_Parms FindEventByType_Parms;
	FindEventByType_Parms.eEventType = eEventType;
	FindEventByType_Parms.nEventId = nEventId;

	pFnFindEventByType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindEventByType, &FindEventByType_Parms, NULL );

	pFnFindEventByType->FunctionFlags |= 0x400;

	return FindEventByType_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEventList.FindEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

int USFXOnlineEventList::FindEvent ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnFindEvent = NULL;

	if ( ! pFnFindEvent )
		pFnFindEvent = (UFunction*) UObject::GObjObjects()->Data[ 28872 ];

	USFXOnlineEventList_execFindEvent_Parms FindEvent_Parms;
	FindEvent_Parms.oEvent = oEvent;

	pFnFindEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindEvent, &FindEvent_Parms, NULL );

	pFnFindEvent->FunctionFlags |= 0x400;

	return FindEvent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetEventAtIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nEventIndex                    ( CPF_Parm )

class USFXOnlineEvent* USFXOnlineEventList::GetEventAtIndex ( int nEventIndex )
{
	static UFunction* pFnGetEventAtIndex = NULL;

	if ( ! pFnGetEventAtIndex )
		pFnGetEventAtIndex = (UFunction*) UObject::GObjObjects()->Data[ 28869 ];

	USFXOnlineEventList_execGetEventAtIndex_Parms GetEventAtIndex_Parms;
	GetEventAtIndex_Parms.nEventIndex = nEventIndex;

	pFnGetEventAtIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEventAtIndex, &GetEventAtIndex_Parms, NULL );

	pFnGetEventAtIndex->FunctionFlags |= 0x400;

	return GetEventAtIndex_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

class USFXOnlineEvent* USFXOnlineEventList::GetEvent ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnGetEvent = NULL;

	if ( ! pFnGetEvent )
		pFnGetEvent = (UFunction*) UObject::GObjObjects()->Data[ 28866 ];

	USFXOnlineEventList_execGetEvent_Parms GetEvent_Parms;
	GetEvent_Parms.oEvent = oEvent;

	pFnGetEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEvent, &GetEvent_Parms, NULL );

	pFnGetEvent->FunctionFlags |= 0x400;

	return GetEvent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineEventList.AddEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

bool USFXOnlineEventList::AddEvent ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnAddEvent = NULL;

	if ( ! pFnAddEvent )
		pFnAddEvent = (UFunction*) UObject::GObjObjects()->Data[ 28863 ];

	USFXOnlineEventList_execAddEvent_Parms AddEvent_Parms;
	AddEvent_Parms.oEvent = oEvent;

	pFnAddEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddEvent, &AddEvent_Parms, NULL );

	pFnAddEvent->FunctionFlags |= 0x400;

	return AddEvent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.GetAPIName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName UISFXOnlineComponent::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 27822 ];

	UISFXOnlineComponent_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.OnRelease
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponent::OnRelease ( )
{
	static UFunction* pFnOnRelease = NULL;

	if ( ! pFnOnRelease )
		pFnOnRelease = (UFunction*) UObject::GObjObjects()->Data[ 27821 ];

	UISFXOnlineComponent_execOnRelease_Parms OnRelease_Parms;

	pFnOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRelease, &OnRelease_Parms, NULL );

	pFnOnRelease->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.OnInitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineSubsystem*     oOnlineSubsystem               ( CPF_Parm )

void UISFXOnlineComponent::OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem )
{
	static UFunction* pFnOnInitialize = NULL;

	if ( ! pFnOnInitialize )
		pFnOnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 27819 ];

	UISFXOnlineComponent_execOnInitialize_Parms OnInitialize_Parms;
	OnInitialize_Parms.oOnlineSubsystem = oOnlineSubsystem;

	pFnOnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInitialize, &OnInitialize_Parms, NULL );

	pFnOnInitialize->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.IsGranted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sAchievement                   ( CPF_Parm | CPF_NeedCtorLink )

bool UISFXOnlineComponentAchievement::IsGranted ( struct FString sAchievement )
{
	static UFunction* pFnIsGranted = NULL;

	if ( ! pFnIsGranted )
		pFnIsGranted = (UFunction*) UObject::GObjObjects()->Data[ 27826 ];

	UISFXOnlineComponentAchievement_execIsGranted_Parms IsGranted_Parms;
	memcpy ( &IsGranted_Parms.sAchievement, &sAchievement, 0xC );

	pFnIsGranted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsGranted, &IsGranted_Parms, NULL );

	pFnIsGranted->FunctionFlags |= 0x400;

	return IsGranted_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.Grant
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sAchievement                   ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentAchievement::Grant ( struct FString sAchievement )
{
	static UFunction* pFnGrant = NULL;

	if ( ! pFnGrant )
		pFnGrant = (UFunction*) UObject::GObjObjects()->Data[ 27824 ];

	UISFXOnlineComponentAchievement_execGrant_Parms Grant_Parms;
	memcpy ( &Grant_Parms.sAchievement, &sAchievement, 0xC );

	pFnGrant->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGrant, &Grant_Parms, NULL );

	pFnGrant->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetConnectionState
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UISFXOnlineComponentLogin::GetConnectionState ( )
{
	static UFunction* pFnGetConnectionState = NULL;

	if ( ! pFnGetConnectionState )
		pFnGetConnectionState = (UFunction*) UObject::GObjObjects()->Data[ 27935 ];

	UISFXOnlineComponentLogin_execGetConnectionState_Parms GetConnectionState_Parms;

	pFnGetConnectionState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetConnectionState, &GetConnectionState_Parms, NULL );

	pFnGetConnectionState->FunctionFlags |= 0x400;

	return GetConnectionState_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char UISFXOnlineComponentLogin::CanShowPresenceInformation ( int nUserIndex )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 27931 ];

	UISFXOnlineComponentLogin_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.nUserIndex = nUserIndex;

	pFnCanShowPresenceInformation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	pFnCanShowPresenceInformation->FunctionFlags |= 0x400;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char UISFXOnlineComponentLogin::CanViewPlayerProfiles ( int nUserIndex )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 27928 ];

	UISFXOnlineComponentLogin_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.nUserIndex = nUserIndex;

	pFnCanViewPlayerProfiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	pFnCanViewPlayerProfiles->FunctionFlags |= 0x400;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char UISFXOnlineComponentLogin::CanPurchaseContent ( int nUserIndex )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 27925 ];

	UISFXOnlineComponentLogin_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.nUserIndex = nUserIndex;

	pFnCanPurchaseContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	pFnCanPurchaseContent->FunctionFlags |= 0x400;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char UISFXOnlineComponentLogin::CanDownloadUserContent ( int nUserIndex )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 27922 ];

	UISFXOnlineComponentLogin_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.nUserIndex = nUserIndex;

	pFnCanDownloadUserContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	pFnCanDownloadUserContent->FunctionFlags |= 0x400;

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char UISFXOnlineComponentLogin::CanCommunicate ( int nUserIndex )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 27919 ];

	UISFXOnlineComponentLogin_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.nUserIndex = nUserIndex;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanPlayOnline
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char UISFXOnlineComponentLogin::CanPlayOnline ( int nUserIndex )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 27916 ];

	UISFXOnlineComponentLogin_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.nUserIndex = nUserIndex;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.EnterCDKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sKey                           ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentLogin::EnterCDKey ( struct FString sKey )
{
	static UFunction* pFnEnterCDKey = NULL;

	if ( ! pFnEnterCDKey )
		pFnEnterCDKey = (UFunction*) UObject::GObjObjects()->Data[ 27914 ];

	UISFXOnlineComponentLogin_execEnterCDKey_Parms EnterCDKey_Parms;
	memcpy ( &EnterCDKey_Parms.sKey, &sKey, 0xC );

	pFnEnterCDKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnterCDKey, &EnterCDKey_Parms, NULL );

	pFnEnterCDKey->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnDownloadOffersUICompleted
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentLogin::OnDownloadOffersUICompleted ( )
{
	static UFunction* pFnOnDownloadOffersUICompleted = NULL;

	if ( ! pFnOnDownloadOffersUICompleted )
		pFnOnDownloadOffersUICompleted = (UFunction*) UObject::GObjObjects()->Data[ 27913 ];

	UISFXOnlineComponentLogin_execOnDownloadOffersUICompleted_Parms OnDownloadOffersUICompleted_Parms;

	pFnOnDownloadOffersUICompleted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDownloadOffersUICompleted, &OnDownloadOffersUICompleted_Parms, NULL );

	pFnOnDownloadOffersUICompleted->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnDLCInfoLoaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentLogin::OnDLCInfoLoaded ( )
{
	static UFunction* pFnOnDLCInfoLoaded = NULL;

	if ( ! pFnOnDLCInfoLoaded )
		pFnOnDLCInfoLoaded = (UFunction*) UObject::GObjObjects()->Data[ 27912 ];

	UISFXOnlineComponentLogin_execOnDLCInfoLoaded_Parms OnDLCInfoLoaded_Parms;

	pFnOnDLCInfoLoaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDLCInfoLoaded, &OnDLCInfoLoaded_Parms, NULL );

	pFnOnDLCInfoLoaded->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OpenCerberusUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentLogin::OpenCerberusUI ( )
{
	static UFunction* pFnOpenCerberusUI = NULL;

	if ( ! pFnOpenCerberusUI )
		pFnOpenCerberusUI = (UFunction*) UObject::GObjObjects()->Data[ 27911 ];

	UISFXOnlineComponentLogin_execOpenCerberusUI_Parms OpenCerberusUI_Parms;

	pFnOpenCerberusUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenCerberusUI, &OpenCerberusUI_Parms, NULL );

	pFnOpenCerberusUI->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CheckEntitlement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sGroup                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sTag                           ( CPF_Parm | CPF_NeedCtorLink )

bool UISFXOnlineComponentLogin::CheckEntitlement ( struct FString sGroup, struct FString sTag )
{
	static UFunction* pFnCheckEntitlement = NULL;

	if ( ! pFnCheckEntitlement )
		pFnCheckEntitlement = (UFunction*) UObject::GObjObjects()->Data[ 27907 ];

	UISFXOnlineComponentLogin_execCheckEntitlement_Parms CheckEntitlement_Parms;
	memcpy ( &CheckEntitlement_Parms.sGroup, &sGroup, 0xC );
	memcpy ( &CheckEntitlement_Parms.sTag, &sTag, 0xC );

	pFnCheckEntitlement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckEntitlement, &CheckEntitlement_Parms, NULL );

	pFnCheckEntitlement->FunctionFlags |= 0x400;

	return CheckEntitlement_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsCerberusMember
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UISFXOnlineComponentLogin::IsCerberusMember ( )
{
	static UFunction* pFnIsCerberusMember = NULL;

	if ( ! pFnIsCerberusMember )
		pFnIsCerberusMember = (UFunction*) UObject::GObjObjects()->Data[ 27905 ];

	UISFXOnlineComponentLogin_execIsCerberusMember_Parms IsCerberusMember_Parms;

	pFnIsCerberusMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCerberusMember, &IsCerberusMember_Parms, NULL );

	pFnIsCerberusMember->FunctionFlags |= 0x400;

	return IsCerberusMember_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.DisablePersona
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPersonaNonGrata               ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentLogin::DisablePersona ( struct FString sPersonaNonGrata )
{
	static UFunction* pFnDisablePersona = NULL;

	if ( ! pFnDisablePersona )
		pFnDisablePersona = (UFunction*) UObject::GObjObjects()->Data[ 27903 ];

	UISFXOnlineComponentLogin_execDisablePersona_Parms DisablePersona_Parms;
	memcpy ( &DisablePersona_Parms.sPersonaNonGrata, &sPersonaNonGrata, 0xC );

	pFnDisablePersona->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisablePersona, &DisablePersona_Parms, NULL );

	pFnDisablePersona->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CreatePersona
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPersonaName                   ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentLogin::CreatePersona ( struct FString sPersonaName )
{
	static UFunction* pFnCreatePersona = NULL;

	if ( ! pFnCreatePersona )
		pFnCreatePersona = (UFunction*) UObject::GObjObjects()->Data[ 27901 ];

	UISFXOnlineComponentLogin_execCreatePersona_Parms CreatePersona_Parms;
	memcpy ( &CreatePersona_Parms.sPersonaName, &sPersonaName, 0xC );

	pFnCreatePersona->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreatePersona, &CreatePersona_Parms, NULL );

	pFnCreatePersona->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SelectPersona
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPersonaName                   ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentLogin::SelectPersona ( struct FString sPersonaName )
{
	static UFunction* pFnSelectPersona = NULL;

	if ( ! pFnSelectPersona )
		pFnSelectPersona = (UFunction*) UObject::GObjObjects()->Data[ 27899 ];

	UISFXOnlineComponentLogin_execSelectPersona_Parms SelectPersona_Parms;
	memcpy ( &SelectPersona_Parms.sPersonaName, &sPersonaName, 0xC );

	pFnSelectPersona->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectPersona, &SelectPersona_Parms, NULL );

	pFnSelectPersona->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.AcceptTOS
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bAccepted                      ( CPF_Parm )

void UISFXOnlineComponentLogin::AcceptTOS ( unsigned long bAccepted )
{
	static UFunction* pFnAcceptTOS = NULL;

	if ( ! pFnAcceptTOS )
		pFnAcceptTOS = (UFunction*) UObject::GObjObjects()->Data[ 27897 ];

	UISFXOnlineComponentLogin_execAcceptTOS_Parms AcceptTOS_Parms;
	AcceptTOS_Parms.bAccepted = bAccepted;

	pFnAcceptTOS->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptTOS, &AcceptTOS_Parms, NULL );

	pFnAcceptTOS->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Disconnect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentLogin::Disconnect ( )
{
	static UFunction* pFnDisconnect = NULL;

	if ( ! pFnDisconnect )
		pFnDisconnect = (UFunction*) UObject::GObjObjects()->Data[ 27896 ];

	UISFXOnlineComponentLogin_execDisconnect_Parms Disconnect_Parms;

	pFnDisconnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisconnect, &Disconnect_Parms, NULL );

	pFnDisconnect->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitStore
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< int >                  aiChosen                       ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentLogin::SubmitStore ( TArray< int > aiChosen )
{
	static UFunction* pFnSubmitStore = NULL;

	if ( ! pFnSubmitStore )
		pFnSubmitStore = (UFunction*) UObject::GObjObjects()->Data[ 27893 ];

	UISFXOnlineComponentLogin_execSubmitStore_Parms SubmitStore_Parms;
	memcpy ( &SubmitStore_Parms.aiChosen, &aiChosen, 0xC );

	pFnSubmitStore->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitStore, &SubmitStore_Parms, NULL );

	pFnSubmitStore->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEmail                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sPassword                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bEAProducts                    ( CPF_Parm )
// unsigned long                  bThirdParty                    ( CPF_Parm )
// unsigned long                  bBioWareProducts               ( CPF_Parm )
// struct FString                 i_sCountryCode                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            BirthDay                       ( CPF_Parm )
// int                            BirthMonth                     ( CPF_Parm )
// int                            BirthYear                      ( CPF_Parm )
// struct FString                 i_sLanguageCode                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bSubmit                        ( CPF_Parm )

void UISFXOnlineComponentLogin::SubmitCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, unsigned long bSubmit )
{
	static UFunction* pFnSubmitCreateNucleusAccountEx = NULL;

	if ( ! pFnSubmitCreateNucleusAccountEx )
		pFnSubmitCreateNucleusAccountEx = (UFunction*) UObject::GObjObjects()->Data[ 27881 ];

	UISFXOnlineComponentLogin_execSubmitCreateNucleusAccountEx_Parms SubmitCreateNucleusAccountEx_Parms;
	memcpy ( &SubmitCreateNucleusAccountEx_Parms.sEmail, &sEmail, 0xC );
	memcpy ( &SubmitCreateNucleusAccountEx_Parms.sPassword, &sPassword, 0xC );
	SubmitCreateNucleusAccountEx_Parms.bEAProducts = bEAProducts;
	SubmitCreateNucleusAccountEx_Parms.bThirdParty = bThirdParty;
	SubmitCreateNucleusAccountEx_Parms.bBioWareProducts = bBioWareProducts;
	memcpy ( &SubmitCreateNucleusAccountEx_Parms.i_sCountryCode, &i_sCountryCode, 0xC );
	SubmitCreateNucleusAccountEx_Parms.BirthDay = BirthDay;
	SubmitCreateNucleusAccountEx_Parms.BirthMonth = BirthMonth;
	SubmitCreateNucleusAccountEx_Parms.BirthYear = BirthYear;
	memcpy ( &SubmitCreateNucleusAccountEx_Parms.i_sLanguageCode, &i_sLanguageCode, 0xC );
	SubmitCreateNucleusAccountEx_Parms.bSubmit = bSubmit;

	pFnSubmitCreateNucleusAccountEx->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitCreateNucleusAccountEx, &SubmitCreateNucleusAccountEx_Parms, NULL );

	pFnSubmitCreateNucleusAccountEx->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Email                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// int                            eReturnCode                    ( CPF_Parm )

void UISFXOnlineComponentLogin::SubmitEmailPasswordMismatch ( struct FString Email, struct FString Password, int eReturnCode )
{
	static UFunction* pFnSubmitEmailPasswordMismatch = NULL;

	if ( ! pFnSubmitEmailPasswordMismatch )
		pFnSubmitEmailPasswordMismatch = (UFunction*) UObject::GObjObjects()->Data[ 27877 ];

	UISFXOnlineComponentLogin_execSubmitEmailPasswordMismatch_Parms SubmitEmailPasswordMismatch_Parms;
	memcpy ( &SubmitEmailPasswordMismatch_Parms.Email, &Email, 0xC );
	memcpy ( &SubmitEmailPasswordMismatch_Parms.Password, &Password, 0xC );
	SubmitEmailPasswordMismatch_Parms.eReturnCode = eReturnCode;

	pFnSubmitEmailPasswordMismatch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitEmailPasswordMismatch, &SubmitEmailPasswordMismatch_Parms, NULL );

	pFnSubmitEmailPasswordMismatch->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitMessageBox
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            eReturnCode                    ( CPF_Parm )

void UISFXOnlineComponentLogin::SubmitMessageBox ( int eReturnCode )
{
	static UFunction* pFnSubmitMessageBox = NULL;

	if ( ! pFnSubmitMessageBox )
		pFnSubmitMessageBox = (UFunction*) UObject::GObjObjects()->Data[ 27875 ];

	UISFXOnlineComponentLogin_execSubmitMessageBox_Parms SubmitMessageBox_Parms;
	SubmitMessageBox_Parms.eReturnCode = eReturnCode;

	pFnSubmitMessageBox->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitMessageBox, &SubmitMessageBox_Parms, NULL );

	pFnSubmitMessageBox->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitRedeemCode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bContinue                      ( CPF_Parm )
// struct FString                 i_sCode                        ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentLogin::SubmitRedeemCode ( unsigned long bContinue, struct FString i_sCode )
{
	static UFunction* pFnSubmitRedeemCode = NULL;

	if ( ! pFnSubmitRedeemCode )
		pFnSubmitRedeemCode = (UFunction*) UObject::GObjObjects()->Data[ 27872 ];

	UISFXOnlineComponentLogin_execSubmitRedeemCode_Parms SubmitRedeemCode_Parms;
	SubmitRedeemCode_Parms.bContinue = bContinue;
	memcpy ( &SubmitRedeemCode_Parms.i_sCode, &i_sCode, 0xC );

	pFnSubmitRedeemCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitRedeemCode, &SubmitRedeemCode_Parms, NULL );

	pFnSubmitRedeemCode->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentLogin::SubmitCerberusWelcomeMessage ( )
{
	static UFunction* pFnSubmitCerberusWelcomeMessage = NULL;

	if ( ! pFnSubmitCerberusWelcomeMessage )
		pFnSubmitCerberusWelcomeMessage = (UFunction*) UObject::GObjObjects()->Data[ 27871 ];

	UISFXOnlineComponentLogin_execSubmitCerberusWelcomeMessage_Parms SubmitCerberusWelcomeMessage_Parms;

	pFnSubmitCerberusWelcomeMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitCerberusWelcomeMessage, &SubmitCerberusWelcomeMessage_Parms, NULL );

	pFnSubmitCerberusWelcomeMessage->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCerberusIntro
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            eReturnCode                    ( CPF_Parm )

void UISFXOnlineComponentLogin::SubmitCerberusIntro ( int eReturnCode )
{
	static UFunction* pFnSubmitCerberusIntro = NULL;

	if ( ! pFnSubmitCerberusIntro )
		pFnSubmitCerberusIntro = (UFunction*) UObject::GObjObjects()->Data[ 27869 ];

	UISFXOnlineComponentLogin_execSubmitCerberusIntro_Parms SubmitCerberusIntro_Parms;
	SubmitCerberusIntro_Parms.eReturnCode = eReturnCode;

	pFnSubmitCerberusIntro->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitCerberusIntro, &SubmitCerberusIntro_Parms, NULL );

	pFnSubmitCerberusIntro->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentLogin::SubmitNucleusWelcomeMessage ( )
{
	static UFunction* pFnSubmitNucleusWelcomeMessage = NULL;

	if ( ! pFnSubmitNucleusWelcomeMessage )
		pFnSubmitNucleusWelcomeMessage = (UFunction*) UObject::GObjObjects()->Data[ 27868 ];

	UISFXOnlineComponentLogin_execSubmitNucleusWelcomeMessage_Parms SubmitNucleusWelcomeMessage_Parms;

	pFnSubmitNucleusWelcomeMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitNucleusWelcomeMessage, &SubmitNucleusWelcomeMessage_Parms, NULL );

	pFnSubmitNucleusWelcomeMessage->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEmail                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sPassword                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bEAProducts                    ( CPF_Parm )
// unsigned long                  bThirdParty                    ( CPF_Parm )
// unsigned long                  bBioWareProducts               ( CPF_Parm )
// unsigned long                  bSubmit                        ( CPF_Parm )

void UISFXOnlineComponentLogin::SubmitCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, unsigned long bSubmit )
{
	static UFunction* pFnSubmitCreateNucleusAccount = NULL;

	if ( ! pFnSubmitCreateNucleusAccount )
		pFnSubmitCreateNucleusAccount = (UFunction*) UObject::GObjObjects()->Data[ 27861 ];

	UISFXOnlineComponentLogin_execSubmitCreateNucleusAccount_Parms SubmitCreateNucleusAccount_Parms;
	memcpy ( &SubmitCreateNucleusAccount_Parms.sEmail, &sEmail, 0xC );
	memcpy ( &SubmitCreateNucleusAccount_Parms.sPassword, &sPassword, 0xC );
	SubmitCreateNucleusAccount_Parms.bEAProducts = bEAProducts;
	SubmitCreateNucleusAccount_Parms.bThirdParty = bThirdParty;
	SubmitCreateNucleusAccount_Parms.bBioWareProducts = bBioWareProducts;
	SubmitCreateNucleusAccount_Parms.bSubmit = bSubmit;

	pFnSubmitCreateNucleusAccount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitCreateNucleusAccount, &SubmitCreateNucleusAccount_Parms, NULL );

	pFnSubmitCreateNucleusAccount->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitParentEmail
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bContinue                      ( CPF_Parm )
// struct FString                 ParentEmail                    ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentLogin::SubmitParentEmail ( unsigned long bContinue, struct FString ParentEmail )
{
	static UFunction* pFnSubmitParentEmail = NULL;

	if ( ! pFnSubmitParentEmail )
		pFnSubmitParentEmail = (UFunction*) UObject::GObjObjects()->Data[ 27858 ];

	UISFXOnlineComponentLogin_execSubmitParentEmail_Parms SubmitParentEmail_Parms;
	SubmitParentEmail_Parms.bContinue = bContinue;
	memcpy ( &SubmitParentEmail_Parms.ParentEmail, &ParentEmail, 0xC );

	pFnSubmitParentEmail->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitParentEmail, &SubmitParentEmail_Parms, NULL );

	pFnSubmitParentEmail->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitNucleusLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Email                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  eReturnCode                    ( CPF_Parm )

void UISFXOnlineComponentLogin::SubmitNucleusLogin ( struct FString Email, struct FString Password, unsigned char eReturnCode )
{
	static UFunction* pFnSubmitNucleusLogin = NULL;

	if ( ! pFnSubmitNucleusLogin )
		pFnSubmitNucleusLogin = (UFunction*) UObject::GObjObjects()->Data[ 27854 ];

	UISFXOnlineComponentLogin_execSubmitNucleusLogin_Parms SubmitNucleusLogin_Parms;
	memcpy ( &SubmitNucleusLogin_Parms.Email, &Email, 0xC );
	memcpy ( &SubmitNucleusLogin_Parms.Password, &Password, 0xC );
	SubmitNucleusLogin_Parms.eReturnCode = eReturnCode;

	pFnSubmitNucleusLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitNucleusLogin, &SubmitNucleusLogin_Parms, NULL );

	pFnSubmitNucleusLogin->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitIntroPage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bContinue                      ( CPF_Parm )
// unsigned long                  bSimulated                     ( CPF_Parm )

void UISFXOnlineComponentLogin::SubmitIntroPage ( unsigned long bContinue, unsigned long bSimulated )
{
	static UFunction* pFnSubmitIntroPage = NULL;

	if ( ! pFnSubmitIntroPage )
		pFnSubmitIntroPage = (UFunction*) UObject::GObjObjects()->Data[ 27851 ];

	UISFXOnlineComponentLogin_execSubmitIntroPage_Parms SubmitIntroPage_Parms;
	SubmitIntroPage_Parms.bContinue = bContinue;
	SubmitIntroPage_Parms.bSimulated = bSimulated;

	pFnSubmitIntroPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitIntroPage, &SubmitIntroPage_Parms, NULL );

	pFnSubmitIntroPage->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Connect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  connectMode                    ( CPF_Parm )

void UISFXOnlineComponentLogin::Connect ( unsigned char connectMode )
{
	static UFunction* pFnConnect = NULL;

	if ( ! pFnConnect )
		pFnConnect = (UFunction*) UObject::GObjObjects()->Data[ 27849 ];

	UISFXOnlineComponentLogin_execConnect_Parms Connect_Parms;
	Connect_Parms.connectMode = connectMode;

	pFnConnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConnect, &Connect_Parms, NULL );

	pFnConnect->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GoBackInUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentLogin::GoBackInUI ( )
{
	static UFunction* pFnGoBackInUI = NULL;

	if ( ! pFnGoBackInUI )
		pFnGoBackInUI = (UFunction*) UObject::GObjObjects()->Data[ 27848 ];

	UISFXOnlineComponentLogin_execGoBackInUI_Parms GoBackInUI_Parms;

	pFnGoBackInUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGoBackInUI, &GoBackInUI_Parms, NULL );

	pFnGoBackInUI->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Cancel
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentLogin::Cancel ( )
{
	static UFunction* pFnCancel = NULL;

	if ( ! pFnCancel )
		pFnCancel = (UFunction*) UObject::GObjObjects()->Data[ 27847 ];

	UISFXOnlineComponentLogin_execCancel_Parms Cancel_Parms;

	pFnCancel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancel, &Cancel_Parms, NULL );

	pFnCancel->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetUserId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FUniqueNetId UISFXOnlineComponentLogin::GetUserId ( )
{
	static UFunction* pFnGetUserId = NULL;

	if ( ! pFnGetUserId )
		pFnGetUserId = (UFunction*) UObject::GObjObjects()->Data[ 27845 ];

	UISFXOnlineComponentLogin_execGetUserId_Parms GetUserId_Parms;

	pFnGetUserId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUserId, &GetUserId_Parms, NULL );

	pFnGetUserId->FunctionFlags |= 0x400;

	return GetUserId_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetPersonaName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UISFXOnlineComponentLogin::GetPersonaName ( )
{
	static UFunction* pFnGetPersonaName = NULL;

	if ( ! pFnGetPersonaName )
		pFnGetPersonaName = (UFunction*) UObject::GObjObjects()->Data[ 27843 ];

	UISFXOnlineComponentLogin_execGetPersonaName_Parms GetPersonaName_Parms;

	pFnGetPersonaName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPersonaName, &GetPersonaName_Parms, NULL );

	pFnGetPersonaName->FunctionFlags |= 0x400;

	return GetPersonaName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsSignedIn
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UISFXOnlineComponentLogin::IsSignedIn ( )
{
	static UFunction* pFnIsSignedIn = NULL;

	if ( ! pFnIsSignedIn )
		pFnIsSignedIn = (UFunction*) UObject::GObjObjects()->Data[ 27841 ];

	UISFXOnlineComponentLogin_execIsSignedIn_Parms IsSignedIn_Parms;

	pFnIsSignedIn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsSignedIn, &IsSignedIn_Parms, NULL );

	pFnIsSignedIn->FunctionFlags |= 0x400;

	return IsSignedIn_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UISFXOnlineComponentLogin::IsConnected ( )
{
	static UFunction* pFnIsConnected = NULL;

	if ( ! pFnIsConnected )
		pFnIsConnected = (UFunction*) UObject::GObjObjects()->Data[ 27839 ];

	UISFXOnlineComponentLogin_execIsConnected_Parms IsConnected_Parms;

	pFnIsConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsConnected, &IsConnected_Parms, NULL );

	pFnIsConnected->FunctionFlags |= 0x400;

	return IsConnected_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SwitchActiveUserIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nNewIndex                      ( CPF_Parm )

void UISFXOnlineComponentLogin::SwitchActiveUserIndex ( int nNewIndex )
{
	static UFunction* pFnSwitchActiveUserIndex = NULL;

	if ( ! pFnSwitchActiveUserIndex )
		pFnSwitchActiveUserIndex = (UFunction*) UObject::GObjObjects()->Data[ 27837 ];

	UISFXOnlineComponentLogin_execSwitchActiveUserIndex_Parms SwitchActiveUserIndex_Parms;
	SwitchActiveUserIndex_Parms.nNewIndex = nNewIndex;

	pFnSwitchActiveUserIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSwitchActiveUserIndex, &SwitchActiveUserIndex_Parms, NULL );

	pFnSwitchActiveUserIndex->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetActiveUserIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UISFXOnlineComponentLogin::GetActiveUserIndex ( )
{
	static UFunction* pFnGetActiveUserIndex = NULL;

	if ( ! pFnGetActiveUserIndex )
		pFnGetActiveUserIndex = (UFunction*) UObject::GObjObjects()->Data[ 27835 ];

	UISFXOnlineComponentLogin_execGetActiveUserIndex_Parms GetActiveUserIndex_Parms;

	pFnGetActiveUserIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetActiveUserIndex, &GetActiveUserIndex_Parms, NULL );

	pFnGetActiveUserIndex->FunctionFlags |= 0x400;

	return GetActiveUserIndex_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UISFXOnlineComponentLogin::GetLoginStatus ( )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 27833 ];

	UISFXOnlineComponentLogin_execGetLoginStatus_Parms GetLoginStatus_Parms;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetTargetOfferInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FSFXOnlineTargetOfferInfo ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  nSource                        ( CPF_Parm )

struct FSFXOnlineTargetOfferInfo UISFXOnlineComponentNotification::GetTargetOfferInfo ( unsigned char nSource )
{
	static UFunction* pFnGetTargetOfferInfo = NULL;

	if ( ! pFnGetTargetOfferInfo )
		pFnGetTargetOfferInfo = (UFunction*) UObject::GObjObjects()->Data[ 28000 ];

	UISFXOnlineComponentNotification_execGetTargetOfferInfo_Parms GetTargetOfferInfo_Parms;
	GetTargetOfferInfo_Parms.nSource = nSource;

	pFnGetTargetOfferInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTargetOfferInfo, &GetTargetOfferInfo_Parms, NULL );

	pFnGetTargetOfferInfo->FunctionFlags |= 0x400;

	return GetTargetOfferInfo_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.HasUserPurchasedAnOffer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FSFXOnline_OfferID      aOfferId                       ( CPF_Parm )

unsigned char UISFXOnlineComponentNotification::HasUserPurchasedAnOffer ( struct FSFXOnline_OfferID aOfferId )
{
	static UFunction* pFnHasUserPurchasedAnOffer = NULL;

	if ( ! pFnHasUserPurchasedAnOffer )
		pFnHasUserPurchasedAnOffer = (UFunction*) UObject::GObjObjects()->Data[ 27996 ];

	UISFXOnlineComponentNotification_execHasUserPurchasedAnOffer_Parms HasUserPurchasedAnOffer_Parms;
	memcpy ( &HasUserPurchasedAnOffer_Parms.aOfferId, &aOfferId, 0x8 );

	pFnHasUserPurchasedAnOffer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasUserPurchasedAnOffer, &HasUserPurchasedAnOffer_Parms, NULL );

	pFnHasUserPurchasedAnOffer->FunctionFlags |= 0x400;

	return HasUserPurchasedAnOffer_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.DownloadOffers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FSFXOnline_OfferID > aOfferIds                      ( CPF_Parm | CPF_NeedCtorLink )

bool UISFXOnlineComponentNotification::DownloadOffers ( TArray< struct FSFXOnline_OfferID > aOfferIds )
{
	static UFunction* pFnDownloadOffers = NULL;

	if ( ! pFnDownloadOffers )
		pFnDownloadOffers = (UFunction*) UObject::GObjObjects()->Data[ 27992 ];

	UISFXOnlineComponentNotification_execDownloadOffers_Parms DownloadOffers_Parms;
	memcpy ( &DownloadOffers_Parms.aOfferIds, &aOfferIds, 0xC );

	pFnDownloadOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDownloadOffers, &DownloadOffers_Parms, NULL );

	pFnDownloadOffers->FunctionFlags |= 0x400;

	return DownloadOffers_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetOfferKeyIfEntitled
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            internalId                     ( CPF_Parm )

struct FString UISFXOnlineComponentNotification::GetOfferKeyIfEntitled ( int internalId )
{
	static UFunction* pFnGetOfferKeyIfEntitled = NULL;

	if ( ! pFnGetOfferKeyIfEntitled )
		pFnGetOfferKeyIfEntitled = (UFunction*) UObject::GObjObjects()->Data[ 27989 ];

	UISFXOnlineComponentNotification_execGetOfferKeyIfEntitled_Parms GetOfferKeyIfEntitled_Parms;
	GetOfferKeyIfEntitled_Parms.internalId = internalId;

	pFnGetOfferKeyIfEntitled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOfferKeyIfEntitled, &GetOfferKeyIfEntitled_Parms, NULL );

	pFnGetOfferKeyIfEntitled->FunctionFlags |= 0x400;

	return GetOfferKeyIfEntitled_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetGrantingOffers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSFXOfferDescriptor > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FSFXOfferDescriptor > UISFXOnlineComponentNotification::GetGrantingOffers ( )
{
	static UFunction* pFnGetGrantingOffers = NULL;

	if ( ! pFnGetGrantingOffers )
		pFnGetGrantingOffers = (UFunction*) UObject::GObjObjects()->Data[ 27986 ];

	UISFXOnlineComponentNotification_execGetGrantingOffers_Parms GetGrantingOffers_Parms;

	pFnGetGrantingOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGrantingOffers, &GetGrantingOffers_Parms, NULL );

	pFnGetGrantingOffers->FunctionFlags |= 0x400;

	return GetGrantingOffers_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetEntitledDLCInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSFXOfferDescriptor > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FSFXOfferDescriptor > UISFXOnlineComponentNotification::GetEntitledDLCInfo ( )
{
	static UFunction* pFnGetEntitledDLCInfo = NULL;

	if ( ! pFnGetEntitledDLCInfo )
		pFnGetEntitledDLCInfo = (UFunction*) UObject::GObjObjects()->Data[ 27973 ];

	UISFXOnlineComponentNotification_execGetEntitledDLCInfo_Parms GetEntitledDLCInfo_Parms;

	pFnGetEntitledDLCInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEntitledDLCInfo, &GetEntitledDLCInfo_Parms, NULL );

	pFnGetEntitledDLCInfo->FunctionFlags |= 0x400;

	return GetEntitledDLCInfo_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RefreshEntitlementFlags
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentNotification::RefreshEntitlementFlags ( )
{
	static UFunction* pFnRefreshEntitlementFlags = NULL;

	if ( ! pFnRefreshEntitlementFlags )
		pFnRefreshEntitlementFlags = (UFunction*) UObject::GObjObjects()->Data[ 27972 ];

	UISFXOnlineComponentNotification_execRefreshEntitlementFlags_Parms RefreshEntitlementFlags_Parms;

	pFnRefreshEntitlementFlags->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshEntitlementFlags, &RefreshEntitlementFlags_Parms, NULL );

	pFnRefreshEntitlementFlags->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetEntitlementGroups
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSFXOnlineEntitlementGroupInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FSFXOnlineEntitlementGroupInfo > UISFXOnlineComponentNotification::GetEntitlementGroups ( )
{
	static UFunction* pFnGetEntitlementGroups = NULL;

	if ( ! pFnGetEntitlementGroups )
		pFnGetEntitlementGroups = (UFunction*) UObject::GObjObjects()->Data[ 27969 ];

	UISFXOnlineComponentNotification_execGetEntitlementGroups_Parms GetEntitlementGroups_Parms;

	pFnGetEntitlementGroups->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEntitlementGroups, &GetEntitlementGroups_Parms, NULL );

	pFnGetEntitlementGroups->FunctionFlags |= 0x400;

	return GetEntitlementGroups_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetDaysSinceCerberusRegistration
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UISFXOnlineComponentNotification::GetDaysSinceCerberusRegistration ( )
{
	static UFunction* pFnGetDaysSinceCerberusRegistration = NULL;

	if ( ! pFnGetDaysSinceCerberusRegistration )
		pFnGetDaysSinceCerberusRegistration = (UFunction*) UObject::GObjObjects()->Data[ 27967 ];

	UISFXOnlineComponentNotification_execGetDaysSinceCerberusRegistration_Parms GetDaysSinceCerberusRegistration_Parms;

	pFnGetDaysSinceCerberusRegistration->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDaysSinceCerberusRegistration, &GetDaysSinceCerberusRegistration_Parms, NULL );

	pFnGetDaysSinceCerberusRegistration->FunctionFlags |= 0x400;

	return GetDaysSinceCerberusRegistration_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.IsCalendarUnlockEarned
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nDay                           ( CPF_Parm )

bool UISFXOnlineComponentNotification::IsCalendarUnlockEarned ( int nDay )
{
	static UFunction* pFnIsCalendarUnlockEarned = NULL;

	if ( ! pFnIsCalendarUnlockEarned )
		pFnIsCalendarUnlockEarned = (UFunction*) UObject::GObjObjects()->Data[ 27964 ];

	UISFXOnlineComponentNotification_execIsCalendarUnlockEarned_Parms IsCalendarUnlockEarned_Parms;
	IsCalendarUnlockEarned_Parms.nDay = nDay;

	pFnIsCalendarUnlockEarned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCalendarUnlockEarned, &IsCalendarUnlockEarned_Parms, NULL );

	pFnIsCalendarUnlockEarned->FunctionFlags |= 0x400;

	return IsCalendarUnlockEarned_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestServerInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentNotification::RequestServerInfo ( )
{
	static UFunction* pFnRequestServerInfo = NULL;

	if ( ! pFnRequestServerInfo )
		pFnRequestServerInfo = (UFunction*) UObject::GObjObjects()->Data[ 27963 ];

	UISFXOnlineComponentNotification_execRequestServerInfo_Parms RequestServerInfo_Parms;

	pFnRequestServerInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestServerInfo, &RequestServerInfo_Parms, NULL );

	pFnRequestServerInfo->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentNotification::RequestData ( )
{
	static UFunction* pFnRequestData = NULL;

	if ( ! pFnRequestData )
		pFnRequestData = (UFunction*) UObject::GObjObjects()->Data[ 27962 ];

	UISFXOnlineComponentNotification_execRequestData_Parms RequestData_Parms;

	pFnRequestData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestData, &RequestData_Parms, NULL );

	pFnRequestData->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_Parm )
// struct FUniqueNetId            oUserXuid                      ( CPF_Parm | CPF_OutParm )

bool UISFXOnlineComponentPlatform::GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid )
{
	static UFunction* pFnGetOnlineXuid = NULL;

	if ( ! pFnGetOnlineXuid )
		pFnGetOnlineXuid = (UFunction*) UObject::GObjObjects()->Data[ 28069 ];

	UISFXOnlineComponentPlatform_execGetOnlineXuid_Parms GetOnlineXuid_Parms;
	GetOnlineXuid_Parms.nUserIndex = nUserIndex;

	pFnGetOnlineXuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOnlineXuid, &GetOnlineXuid_Parms, NULL );

	pFnGetOnlineXuid->FunctionFlags |= 0x400;

	if ( oUserXuid )
		memcpy ( oUserXuid, &GetOnlineXuid_Parms.oUserXuid, 0x8 );

	return GetOnlineXuid_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_Parm )
// struct FUniqueNetId            oUserXuid                      ( CPF_Parm | CPF_OutParm )

bool UISFXOnlineComponentPlatform::GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid )
{
	static UFunction* pFnGetOfflineXuid = NULL;

	if ( ! pFnGetOfflineXuid )
		pFnGetOfflineXuid = (UFunction*) UObject::GObjObjects()->Data[ 28065 ];

	UISFXOnlineComponentPlatform_execGetOfflineXuid_Parms GetOfflineXuid_Parms;
	GetOfflineXuid_Parms.nUserIndex = nUserIndex;

	pFnGetOfflineXuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOfflineXuid, &GetOfflineXuid_Parms, NULL );

	pFnGetOfflineXuid->FunctionFlags |= 0x400;

	if ( oUserXuid )
		memcpy ( oUserXuid, &GetOfflineXuid_Parms.oUserXuid, 0x8 );

	return GetOfflineXuid_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.AddRecentPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )
// struct FString                 sDescription                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UISFXOnlineComponentPlatform::AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription )
{
	static UFunction* pFnAddRecentPlayer = NULL;

	if ( ! pFnAddRecentPlayer )
		pFnAddRecentPlayer = (UFunction*) UObject::GObjObjects()->Data[ 28061 ];

	UISFXOnlineComponentPlatform_execAddRecentPlayer_Parms AddRecentPlayer_Parms;
	memcpy ( &AddRecentPlayer_Parms.oPlayerId, &oPlayerId, 0x8 );
	memcpy ( &AddRecentPlayer_Parms.sDescription, &sDescription, 0xC );

	pFnAddRecentPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddRecentPlayer, &AddRecentPlayer_Parms, NULL );

	pFnAddRecentPlayer->FunctionFlags |= 0x400;

	return AddRecentPlayer_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowKeyboardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )
// struct FString                 sTitleText                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDescriptionText               ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRouteThroughConsole           ( CPF_OptionalParm | CPF_Parm )
// struct FString                 sDefaultText                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            nMaxResultLength               ( CPF_OptionalParm | CPF_Parm )

bool UISFXOnlineComponentPlatform::ShowKeyboardUI ( unsigned char byLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 28052 ];

	UISFXOnlineComponentPlatform_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.byLocalUserNum = byLocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.sTitleText, &sTitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.sDescriptionText, &sDescriptionText, 0xC );
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	ShowKeyboardUI_Parms.bRouteThroughConsole = bRouteThroughConsole;
	memcpy ( &ShowKeyboardUI_Parms.sDefaultText, &sDefaultText, 0xC );
	ShowKeyboardUI_Parms.nMaxResultLength = nMaxResultLength;

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

bool UISFXOnlineComponentPlatform::ShowAchievementsUI ( unsigned char byLocalUserNum )
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if ( ! pFnShowAchievementsUI )
		pFnShowAchievementsUI = (UFunction*) UObject::GObjObjects()->Data[ 28049 ];

	UISFXOnlineComponentPlatform_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.byLocalUserNum = byLocalUserNum;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL );

	pFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )

bool UISFXOnlineComponentPlatform::ShowFeedbackUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId )
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if ( ! pFnShowFeedbackUI )
		pFnShowFeedbackUI = (UFunction*) UObject::GObjObjects()->Data[ 28045 ];

	UISFXOnlineComponentPlatform_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.byLocalUserNum = byLocalUserNum;
	memcpy ( &ShowFeedbackUI_Parms.oPlayerId, &oPlayerId, 0x8 );

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL );

	pFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )

bool UISFXOnlineComponentPlatform::ShowGamerCardUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId )
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if ( ! pFnShowGamerCardUI )
		pFnShowGamerCardUI = (UFunction*) UObject::GObjObjects()->Data[ 28041 ];

	UISFXOnlineComponentPlatform_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.byLocalUserNum = byLocalUserNum;
	memcpy ( &ShowGamerCardUI_Parms.oPlayerId, &oPlayerId, 0x8 );

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL );

	pFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )

bool UISFXOnlineComponentPlatform::ShowFriendsInviteUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId )
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if ( ! pFnShowFriendsInviteUI )
		pFnShowFriendsInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 28037 ];

	UISFXOnlineComponentPlatform_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.byLocalUserNum = byLocalUserNum;
	memcpy ( &ShowFriendsInviteUI_Parms.oPlayerId, &oPlayerId, 0x8 );

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL );

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

bool UISFXOnlineComponentPlatform::ShowFriendsUI ( unsigned char byLocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 28034 ];

	UISFXOnlineComponentPlatform_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.byLocalUserNum = byLocalUserNum;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	pFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

unsigned char UISFXOnlineComponentPlatform::CanShowPresenceInformation ( unsigned char byLocalUserNum )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 28031 ];

	UISFXOnlineComponentPlatform_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.byLocalUserNum = byLocalUserNum;

	pFnCanShowPresenceInformation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	pFnCanShowPresenceInformation->FunctionFlags |= 0x400;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

unsigned char UISFXOnlineComponentPlatform::CanViewPlayerProfiles ( unsigned char byLocalUserNum )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 28028 ];

	UISFXOnlineComponentPlatform_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.byLocalUserNum = byLocalUserNum;

	pFnCanViewPlayerProfiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	pFnCanViewPlayerProfiles->FunctionFlags |= 0x400;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

unsigned char UISFXOnlineComponentPlatform::CanPurchaseContent ( unsigned char byLocalUserNum )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 28025 ];

	UISFXOnlineComponentPlatform_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.byLocalUserNum = byLocalUserNum;

	pFnCanPurchaseContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	pFnCanPurchaseContent->FunctionFlags |= 0x400;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

unsigned char UISFXOnlineComponentPlatform::CanDownloadUserContent ( unsigned char byLocalUserNum )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 28022 ];

	UISFXOnlineComponentPlatform_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.byLocalUserNum = byLocalUserNum;

	pFnCanDownloadUserContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	pFnCanDownloadUserContent->FunctionFlags |= 0x400;

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

unsigned char UISFXOnlineComponentPlatform::CanCommunicate ( unsigned char byLocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 28019 ];

	UISFXOnlineComponentPlatform_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.byLocalUserNum = byLocalUserNum;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanPlayOnline
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

unsigned char UISFXOnlineComponentPlatform::CanPlayOnline ( unsigned char byLocalUserNum )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 28016 ];

	UISFXOnlineComponentPlatform_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.byLocalUserNum = byLocalUserNum;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.SetRichPresence
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  byLocalUserNum                 ( CPF_Parm )
// int                            nPresenceMode                  ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > aLocalizedStringSettings       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > aProperties                    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UISFXOnlineComponentPlatform::SetRichPresence ( unsigned char byLocalUserNum, int nPresenceMode, TArray< struct FLocalizedStringSetting >* aLocalizedStringSettings, TArray< struct FSettingsProperty >* aProperties )
{
	static UFunction* pFnSetRichPresence = NULL;

	if ( ! pFnSetRichPresence )
		pFnSetRichPresence = (UFunction*) UObject::GObjObjects()->Data[ 28009 ];

	UISFXOnlineComponentPlatform_execSetRichPresence_Parms SetRichPresence_Parms;
	SetRichPresence_Parms.byLocalUserNum = byLocalUserNum;
	SetRichPresence_Parms.nPresenceMode = nPresenceMode;

	pFnSetRichPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRichPresence, &SetRichPresence_Parms, NULL );

	pFnSetRichPresence->FunctionFlags |= 0x400;

	if ( aLocalizedStringSettings )
		memcpy ( aLocalizedStringSettings, &SetRichPresence_Parms.aLocalizedStringSettings, 0xC );

	if ( aProperties )
		memcpy ( aProperties, &SetRichPresence_Parms.aProperties, 0xC );
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowLoginUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool UISFXOnlineComponentPlatform::ShowLoginUI ( unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 28006 ];

	UISFXOnlineComponentPlatform_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	pFnShowLoginUI->FunctionFlags |= 0x400;

	return ShowLoginUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

unsigned char UISFXOnlineComponentPlatform::GetLoginStatus ( unsigned char byLocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 28003 ];

	UISFXOnlineComponentPlatform_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.byLocalUserNum = byLocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowStore
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// TArray< struct FSFXOfferDescriptor > aOffers                        ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentUserInterface::eventShowStore ( TArray< struct FSFXOfferDescriptor > aOffers )
{
	static UFunction* pFnShowStore = NULL;

	if ( ! pFnShowStore )
		pFnShowStore = (UFunction*) UObject::GObjObjects()->Data[ 28138 ];

	UISFXOnlineComponentUserInterface_eventShowStore_Parms ShowStore_Parms;
	memcpy ( &ShowStore_Parms.aOffers, &aOffers, 0xC );

	this->ProcessEvent ( pFnShowStore, &ShowStore_Parms, NULL );
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.HasCerberusDLC
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bVal                           ( CPF_Parm )

void UISFXOnlineComponentUserInterface::eventHasCerberusDLC ( unsigned long bVal )
{
	static UFunction* pFnHasCerberusDLC = NULL;

	if ( ! pFnHasCerberusDLC )
		pFnHasCerberusDLC = (UFunction*) UObject::GObjObjects()->Data[ 28136 ];

	UISFXOnlineComponentUserInterface_eventHasCerberusDLC_Parms HasCerberusDLC_Parms;
	HasCerberusDLC_Parms.bVal = bVal;

	this->ProcessEvent ( pFnHasCerberusDLC, &HasCerberusDLC_Parms, NULL );
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.OnDisplayNotification
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )
// struct FString                 MessageData                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Image                          ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentUserInterface::eventOnDisplayNotification ( unsigned char Type, struct FString MessageData, struct FString Title, struct FString Image )
{
	static UFunction* pFnOnDisplayNotification = NULL;

	if ( ! pFnOnDisplayNotification )
		pFnOnDisplayNotification = (UFunction*) UObject::GObjObjects()->Data[ 28131 ];

	UISFXOnlineComponentUserInterface_eventOnDisplayNotification_Parms OnDisplayNotification_Parms;
	OnDisplayNotification_Parms.Type = Type;
	memcpy ( &OnDisplayNotification_Parms.MessageData, &MessageData, 0xC );
	memcpy ( &OnDisplayNotification_Parms.Title, &Title, 0xC );
	memcpy ( &OnDisplayNotification_Parms.Image, &Image, 0xC );

	this->ProcessEvent ( pFnOnDisplayNotification, &OnDisplayNotification_Parms, NULL );
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ClearNotifications
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UISFXOnlineComponentUserInterface::eventClearNotifications ( )
{
	static UFunction* pFnClearNotifications = NULL;

	if ( ! pFnClearNotifications )
		pFnClearNotifications = (UFunction*) UObject::GObjObjects()->Data[ 28130 ];

	UISFXOnlineComponentUserInterface_eventClearNotifications_Parms ClearNotifications_Parms;

	this->ProcessEvent ( pFnClearNotifications, &ClearNotifications_Parms, NULL );
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.CloseEANetworking
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UISFXOnlineComponentUserInterface::eventCloseEANetworking ( )
{
	static UFunction* pFnCloseEANetworking = NULL;

	if ( ! pFnCloseEANetworking )
		pFnCloseEANetworking = (UFunction*) UObject::GObjObjects()->Data[ 28129 ];

	UISFXOnlineComponentUserInterface_eventCloseEANetworking_Parms CloseEANetworking_Parms;

	this->ProcessEvent ( pFnCloseEANetworking, &CloseEANetworking_Parms, NULL );
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.SetState
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// unsigned char                  eState                         ( CPF_Parm )

void UISFXOnlineComponentUserInterface::eventSetState ( unsigned char eState )
{
	static UFunction* pFnSetState = NULL;

	if ( ! pFnSetState )
		pFnSetState = (UFunction*) UObject::GObjObjects()->Data[ 28127 ];

	UISFXOnlineComponentUserInterface_eventSetState_Parms SetState_Parms;
	SetState_Parms.eState = eState;

	this->ProcessEvent ( pFnSetState, &SetState_Parms, NULL );
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Email                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentUserInterface::ShowEmailPasswordMismatch ( struct FString Email, struct FString Password )
{
	static UFunction* pFnShowEmailPasswordMismatch = NULL;

	if ( ! pFnShowEmailPasswordMismatch )
		pFnShowEmailPasswordMismatch = (UFunction*) UObject::GObjObjects()->Data[ 28124 ];

	UISFXOnlineComponentUserInterface_execShowEmailPasswordMismatch_Parms ShowEmailPasswordMismatch_Parms;
	memcpy ( &ShowEmailPasswordMismatch_Parms.Email, &Email, 0xC );
	memcpy ( &ShowEmailPasswordMismatch_Parms.Password, &Password, 0xC );

	pFnShowEmailPasswordMismatch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowEmailPasswordMismatch, &ShowEmailPasswordMismatch_Parms, NULL );

	pFnShowEmailPasswordMismatch->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBoxWait
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentUserInterface::ShowMessageBoxWait ( )
{
	static UFunction* pFnShowMessageBoxWait = NULL;

	if ( ! pFnShowMessageBoxWait )
		pFnShowMessageBoxWait = (UFunction*) UObject::GObjObjects()->Data[ 28120 ];

	UISFXOnlineComponentUserInterface_execShowMessageBoxWait_Parms ShowMessageBoxWait_Parms;

	pFnShowMessageBoxWait->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMessageBoxWait, &ShowMessageBoxWait_Parms, NULL );

	pFnShowMessageBoxWait->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBox
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sTitle                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sButton1Text                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sButton2Text                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sButton3Text                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentUserInterface::ShowMessageBox ( struct FString sTitle, struct FString sMessage, struct FString sButton1Text, struct FString sButton2Text, struct FString sButton3Text )
{
	static UFunction* pFnShowMessageBox = NULL;

	if ( ! pFnShowMessageBox )
		pFnShowMessageBox = (UFunction*) UObject::GObjObjects()->Data[ 28114 ];

	UISFXOnlineComponentUserInterface_execShowMessageBox_Parms ShowMessageBox_Parms;
	memcpy ( &ShowMessageBox_Parms.sTitle, &sTitle, 0xC );
	memcpy ( &ShowMessageBox_Parms.sMessage, &sMessage, 0xC );
	memcpy ( &ShowMessageBox_Parms.sButton1Text, &sButton1Text, 0xC );
	memcpy ( &ShowMessageBox_Parms.sButton2Text, &sButton2Text, 0xC );
	memcpy ( &ShowMessageBox_Parms.sButton3Text, &sButton3Text, 0xC );

	pFnShowMessageBox->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMessageBox, &ShowMessageBox_Parms, NULL );

	pFnShowMessageBox->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEmail                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sPassword                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bEAProducts                    ( CPF_Parm )
// unsigned long                  bThirdParty                    ( CPF_Parm )
// unsigned long                  bBioWareProducts               ( CPF_Parm )
// struct FString                 i_sCountryCode                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            BirthDay                       ( CPF_Parm )
// int                            BirthMonth                     ( CPF_Parm )
// int                            BirthYear                      ( CPF_Parm )
// struct FString                 i_sLanguageCode                ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       m_CountryCodeList              ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       m_CountryDisplayList           ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentUserInterface::ShowCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, TArray< struct FString > m_CountryCodeList, TArray< struct FString > m_CountryDisplayList )
{
	static UFunction* pFnShowCreateNucleusAccountEx = NULL;

	if ( ! pFnShowCreateNucleusAccountEx )
		pFnShowCreateNucleusAccountEx = (UFunction*) UObject::GObjObjects()->Data[ 28099 ];

	UISFXOnlineComponentUserInterface_execShowCreateNucleusAccountEx_Parms ShowCreateNucleusAccountEx_Parms;
	memcpy ( &ShowCreateNucleusAccountEx_Parms.sEmail, &sEmail, 0xC );
	memcpy ( &ShowCreateNucleusAccountEx_Parms.sPassword, &sPassword, 0xC );
	ShowCreateNucleusAccountEx_Parms.bEAProducts = bEAProducts;
	ShowCreateNucleusAccountEx_Parms.bThirdParty = bThirdParty;
	ShowCreateNucleusAccountEx_Parms.bBioWareProducts = bBioWareProducts;
	memcpy ( &ShowCreateNucleusAccountEx_Parms.i_sCountryCode, &i_sCountryCode, 0xC );
	ShowCreateNucleusAccountEx_Parms.BirthDay = BirthDay;
	ShowCreateNucleusAccountEx_Parms.BirthMonth = BirthMonth;
	ShowCreateNucleusAccountEx_Parms.BirthYear = BirthYear;
	memcpy ( &ShowCreateNucleusAccountEx_Parms.i_sLanguageCode, &i_sLanguageCode, 0xC );
	memcpy ( &ShowCreateNucleusAccountEx_Parms.m_CountryCodeList, &m_CountryCodeList, 0xC );
	memcpy ( &ShowCreateNucleusAccountEx_Parms.m_CountryDisplayList, &m_CountryDisplayList, 0xC );

	pFnShowCreateNucleusAccountEx->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCreateNucleusAccountEx, &ShowCreateNucleusAccountEx_Parms, NULL );

	pFnShowCreateNucleusAccountEx->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentUserInterface::ShowCerberusWelcomeMessage ( )
{
	static UFunction* pFnShowCerberusWelcomeMessage = NULL;

	if ( ! pFnShowCerberusWelcomeMessage )
		pFnShowCerberusWelcomeMessage = (UFunction*) UObject::GObjObjects()->Data[ 28098 ];

	UISFXOnlineComponentUserInterface_execShowCerberusWelcomeMessage_Parms ShowCerberusWelcomeMessage_Parms;

	pFnShowCerberusWelcomeMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCerberusWelcomeMessage, &ShowCerberusWelcomeMessage_Parms, NULL );

	pFnShowCerberusWelcomeMessage->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowRedeemCode
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentUserInterface::ShowRedeemCode ( )
{
	static UFunction* pFnShowRedeemCode = NULL;

	if ( ! pFnShowRedeemCode )
		pFnShowRedeemCode = (UFunction*) UObject::GObjObjects()->Data[ 28097 ];

	UISFXOnlineComponentUserInterface_execShowRedeemCode_Parms ShowRedeemCode_Parms;

	pFnShowRedeemCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowRedeemCode, &ShowRedeemCode_Parms, NULL );

	pFnShowRedeemCode->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCerberusIntro
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentUserInterface::ShowCerberusIntro ( )
{
	static UFunction* pFnShowCerberusIntro = NULL;

	if ( ! pFnShowCerberusIntro )
		pFnShowCerberusIntro = (UFunction*) UObject::GObjObjects()->Data[ 28096 ];

	UISFXOnlineComponentUserInterface_execShowCerberusIntro_Parms ShowCerberusIntro_Parms;

	pFnShowCerberusIntro->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCerberusIntro, &ShowCerberusIntro_Parms, NULL );

	pFnShowCerberusIntro->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentUserInterface::ShowNucleusWelcomeMessage ( )
{
	static UFunction* pFnShowNucleusWelcomeMessage = NULL;

	if ( ! pFnShowNucleusWelcomeMessage )
		pFnShowNucleusWelcomeMessage = (UFunction*) UObject::GObjObjects()->Data[ 28095 ];

	UISFXOnlineComponentUserInterface_execShowNucleusWelcomeMessage_Parms ShowNucleusWelcomeMessage_Parms;

	pFnShowNucleusWelcomeMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowNucleusWelcomeMessage, &ShowNucleusWelcomeMessage_Parms, NULL );

	pFnShowNucleusWelcomeMessage->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEmail                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sPassword                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bEAProducts                    ( CPF_Parm )
// unsigned long                  bThirdParty                    ( CPF_Parm )
// unsigned long                  bRegisterProduct               ( CPF_Parm )
// unsigned long                  bBioWareProducts               ( CPF_Parm )
// unsigned long                  bUnderage                      ( CPF_Parm )

void UISFXOnlineComponentUserInterface::ShowCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bRegisterProduct, unsigned long bBioWareProducts, unsigned long bUnderage )
{
	static UFunction* pFnShowCreateNucleusAccount = NULL;

	if ( ! pFnShowCreateNucleusAccount )
		pFnShowCreateNucleusAccount = (UFunction*) UObject::GObjObjects()->Data[ 28087 ];

	UISFXOnlineComponentUserInterface_execShowCreateNucleusAccount_Parms ShowCreateNucleusAccount_Parms;
	memcpy ( &ShowCreateNucleusAccount_Parms.sEmail, &sEmail, 0xC );
	memcpy ( &ShowCreateNucleusAccount_Parms.sPassword, &sPassword, 0xC );
	ShowCreateNucleusAccount_Parms.bEAProducts = bEAProducts;
	ShowCreateNucleusAccount_Parms.bThirdParty = bThirdParty;
	ShowCreateNucleusAccount_Parms.bRegisterProduct = bRegisterProduct;
	ShowCreateNucleusAccount_Parms.bBioWareProducts = bBioWareProducts;
	ShowCreateNucleusAccount_Parms.bUnderage = bUnderage;

	pFnShowCreateNucleusAccount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCreateNucleusAccount, &ShowCreateNucleusAccount_Parms, NULL );

	pFnShowCreateNucleusAccount->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowParentEmail
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentUserInterface::ShowParentEmail ( )
{
	static UFunction* pFnShowParentEmail = NULL;

	if ( ! pFnShowParentEmail )
		pFnShowParentEmail = (UFunction*) UObject::GObjObjects()->Data[ 28086 ];

	UISFXOnlineComponentUserInterface_execShowParentEmail_Parms ShowParentEmail_Parms;

	pFnShowParentEmail->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowParentEmail, &ShowParentEmail_Parms, NULL );

	pFnShowParentEmail->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowAccountDemographics
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       m_CountryCodeList              ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       m_CountryDisplayList           ( CPF_Parm | CPF_NeedCtorLink )

void UISFXOnlineComponentUserInterface::ShowAccountDemographics ( TArray< struct FString > m_CountryCodeList, TArray< struct FString > m_CountryDisplayList )
{
	static UFunction* pFnShowAccountDemographics = NULL;

	if ( ! pFnShowAccountDemographics )
		pFnShowAccountDemographics = (UFunction*) UObject::GObjObjects()->Data[ 28081 ];

	UISFXOnlineComponentUserInterface_execShowAccountDemographics_Parms ShowAccountDemographics_Parms;
	memcpy ( &ShowAccountDemographics_Parms.m_CountryCodeList, &m_CountryCodeList, 0xC );
	memcpy ( &ShowAccountDemographics_Parms.m_CountryDisplayList, &m_CountryDisplayList, 0xC );

	pFnShowAccountDemographics->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowAccountDemographics, &ShowAccountDemographics_Parms, NULL );

	pFnShowAccountDemographics->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowTermsOfService
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 i_sTermsOfService              ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bTOSChanged                    ( CPF_OptionalParm | CPF_Parm )

void UISFXOnlineComponentUserInterface::ShowTermsOfService ( struct FString i_sTermsOfService, unsigned long bTOSChanged )
{
	static UFunction* pFnShowTermsOfService = NULL;

	if ( ! pFnShowTermsOfService )
		pFnShowTermsOfService = (UFunction*) UObject::GObjObjects()->Data[ 28078 ];

	UISFXOnlineComponentUserInterface_execShowTermsOfService_Parms ShowTermsOfService_Parms;
	memcpy ( &ShowTermsOfService_Parms.i_sTermsOfService, &i_sTermsOfService, 0xC );
	ShowTermsOfService_Parms.bTOSChanged = bTOSChanged;

	pFnShowTermsOfService->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowTermsOfService, &ShowTermsOfService_Parms, NULL );

	pFnShowTermsOfService->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowNucleusLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Email                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// int                            eScreenState                   ( CPF_Parm )

void UISFXOnlineComponentUserInterface::ShowNucleusLogin ( struct FString Email, struct FString Password, int eScreenState )
{
	static UFunction* pFnShowNucleusLogin = NULL;

	if ( ! pFnShowNucleusLogin )
		pFnShowNucleusLogin = (UFunction*) UObject::GObjObjects()->Data[ 28074 ];

	UISFXOnlineComponentUserInterface_execShowNucleusLogin_Parms ShowNucleusLogin_Parms;
	memcpy ( &ShowNucleusLogin_Parms.Email, &Email, 0xC );
	memcpy ( &ShowNucleusLogin_Parms.Password, &Password, 0xC );
	ShowNucleusLogin_Parms.eScreenState = eScreenState;

	pFnShowNucleusLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowNucleusLogin, &ShowNucleusLogin_Parms, NULL );

	pFnShowNucleusLogin->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowIntroPage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UISFXOnlineComponentUserInterface::ShowIntroPage ( )
{
	static UFunction* pFnShowIntroPage = NULL;

	if ( ! pFnShowIntroPage )
		pFnShowIntroPage = (UFunction*) UObject::GObjObjects()->Data[ 28073 ];

	UISFXOnlineComponentUserInterface_execShowIntroPage_Parms ShowIntroPage_Parms;

	pFnShowIntroPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowIntroPage, &ShowIntroPage_Parms, NULL );

	pFnShowIntroPage->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetAPIName
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineComponentCoordinator::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 28534 ];

	USFXOnlineComponentCoordinator_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnRelease
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void USFXOnlineComponentCoordinator::OnRelease ( )
{
	static UFunction* pFnOnRelease = NULL;

	if ( ! pFnOnRelease )
		pFnOnRelease = (UFunction*) UObject::GObjObjects()->Data[ 28533 ];

	USFXOnlineComponentCoordinator_execOnRelease_Parms OnRelease_Parms;

	pFnOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRelease, &OnRelease_Parms, NULL );

	pFnOnRelease->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnInitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineSubsystem*     oOnlineSubsystem               ( CPF_Parm )

void USFXOnlineComponentCoordinator::OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem )
{
	static UFunction* pFnOnInitialize = NULL;

	if ( ! pFnOnInitialize )
		pFnOnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 28531 ];

	USFXOnlineComponentCoordinator_execOnInitialize_Parms OnInitialize_Parms;
	OnInitialize_Parms.oOnlineSubsystem = oOnlineSubsystem;

	pFnOnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInitialize, &OnInitialize_Parms, NULL );

	pFnOnInitialize->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.StopWaitingForAllWork
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UObject*                 oCallbackTarget                ( CPF_Parm )

void USFXOnlineComponentCoordinator::StopWaitingForAllWork ( class UObject* oCallbackTarget )
{
	static UFunction* pFnStopWaitingForAllWork = NULL;

	if ( ! pFnStopWaitingForAllWork )
		pFnStopWaitingForAllWork = (UFunction*) UObject::GObjObjects()->Data[ 28529 ];

	USFXOnlineComponentCoordinator_execStopWaitingForAllWork_Parms StopWaitingForAllWork_Parms;
	StopWaitingForAllWork_Parms.oCallbackTarget = oCallbackTarget;

	pFnStopWaitingForAllWork->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopWaitingForAllWork, &StopWaitingForAllWork_Parms, NULL );

	pFnStopWaitingForAllWork->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkSetObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< class USFXOnlineEvent* > aEventObjects                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FScriptDelegate         fnWorkComplete                 ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentCoordinator::WaitingForWorkSetObject ( TArray< class USFXOnlineEvent* > aEventObjects, struct FScriptDelegate fnWorkComplete )
{
	static UFunction* pFnWaitingForWorkSetObject = NULL;

	if ( ! pFnWaitingForWorkSetObject )
		pFnWaitingForWorkSetObject = (UFunction*) UObject::GObjObjects()->Data[ 28525 ];

	USFXOnlineComponentCoordinator_execWaitingForWorkSetObject_Parms WaitingForWorkSetObject_Parms;
	memcpy ( &WaitingForWorkSetObject_Parms.aEventObjects, &aEventObjects, 0xC );
	memcpy ( &WaitingForWorkSetObject_Parms.fnWorkComplete, &fnWorkComplete, 0xC );

	pFnWaitingForWorkSetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWaitingForWorkSetObject, &WaitingForWorkSetObject_Parms, NULL );

	pFnWaitingForWorkSetObject->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkSetType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        aEventTypes                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FScriptDelegate         fnWorkComplete                 ( CPF_Parm | CPF_NeedCtorLink )
// TArray< int >                  aWorkEventIds                  ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentCoordinator::WaitingForWorkSetType ( TArray< unsigned char > aEventTypes, struct FScriptDelegate fnWorkComplete, TArray< int > aWorkEventIds )
{
	static UFunction* pFnWaitingForWorkSetType = NULL;

	if ( ! pFnWaitingForWorkSetType )
		pFnWaitingForWorkSetType = (UFunction*) UObject::GObjObjects()->Data[ 28519 ];

	USFXOnlineComponentCoordinator_execWaitingForWorkSetType_Parms WaitingForWorkSetType_Parms;
	memcpy ( &WaitingForWorkSetType_Parms.aEventTypes, &aEventTypes, 0xC );
	memcpy ( &WaitingForWorkSetType_Parms.fnWorkComplete, &fnWorkComplete, 0xC );
	memcpy ( &WaitingForWorkSetType_Parms.aWorkEventIds, &aWorkEventIds, 0xC );

	pFnWaitingForWorkSetType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWaitingForWorkSetType, &WaitingForWorkSetType_Parms, NULL );

	pFnWaitingForWorkSetType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )
// struct FScriptDelegate         fnWorkComplete                 ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentCoordinator::WaitingForWorkObject ( class USFXOnlineEvent* oEvent, struct FScriptDelegate fnWorkComplete )
{
	static UFunction* pFnWaitingForWorkObject = NULL;

	if ( ! pFnWaitingForWorkObject )
		pFnWaitingForWorkObject = (UFunction*) UObject::GObjObjects()->Data[ 28516 ];

	USFXOnlineComponentCoordinator_execWaitingForWorkObject_Parms WaitingForWorkObject_Parms;
	WaitingForWorkObject_Parms.oEvent = oEvent;
	memcpy ( &WaitingForWorkObject_Parms.fnWorkComplete, &fnWorkComplete, 0xC );

	pFnWaitingForWorkObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWaitingForWorkObject, &WaitingForWorkObject_Parms, NULL );

	pFnWaitingForWorkObject->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eEventType                     ( CPF_Parm )
// struct FScriptDelegate         fnWorkComplete                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            nEventId                       ( CPF_OptionalParm | CPF_Parm )

void USFXOnlineComponentCoordinator::WaitingForWorkType ( unsigned char eEventType, struct FScriptDelegate fnWorkComplete, int nEventId )
{
	static UFunction* pFnWaitingForWorkType = NULL;

	if ( ! pFnWaitingForWorkType )
		pFnWaitingForWorkType = (UFunction*) UObject::GObjObjects()->Data[ 28512 ];

	USFXOnlineComponentCoordinator_execWaitingForWorkType_Parms WaitingForWorkType_Parms;
	WaitingForWorkType_Parms.eEventType = eEventType;
	memcpy ( &WaitingForWorkType_Parms.fnWorkComplete, &fnWorkComplete, 0xC );
	WaitingForWorkType_Parms.nEventId = nEventId;

	pFnWaitingForWorkType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWaitingForWorkType, &WaitingForWorkType_Parms, NULL );

	pFnWaitingForWorkType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.IsEventPending
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eEventType                     ( CPF_Parm )
// int                            nEventId                       ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineComponentCoordinator::IsEventPending ( unsigned char eEventType, int nEventId )
{
	static UFunction* pFnIsEventPending = NULL;

	if ( ! pFnIsEventPending )
		pFnIsEventPending = (UFunction*) UObject::GObjObjects()->Data[ 28508 ];

	USFXOnlineComponentCoordinator_execIsEventPending_Parms IsEventPending_Parms;
	IsEventPending_Parms.eEventType = eEventType;
	IsEventPending_Parms.nEventId = nEventId;

	pFnIsEventPending->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsEventPending, &IsEventPending_Parms, NULL );

	pFnIsEventPending->FunctionFlags |= 0x400;

	return IsEventPending_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eEventType                     ( CPF_Parm )
// int                            nEventId                       ( CPF_OptionalParm | CPF_Parm )

class USFXOnlineEvent* USFXOnlineComponentCoordinator::GetEvent ( unsigned char eEventType, int nEventId )
{
	static UFunction* pFnGetEvent = NULL;

	if ( ! pFnGetEvent )
		pFnGetEvent = (UFunction*) UObject::GObjObjects()->Data[ 28504 ];

	USFXOnlineComponentCoordinator_execGetEvent_Parms GetEvent_Parms;
	GetEvent_Parms.eEventType = eEventType;
	GetEvent_Parms.nEventId = nEventId;

	pFnGetEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEvent, &GetEvent_Parms, NULL );

	pFnGetEvent->FunctionFlags |= 0x400;

	return GetEvent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.UnsubscribeFromAllEvents
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UObject*                 oCallbackTarget                ( CPF_Parm )

void USFXOnlineComponentCoordinator::UnsubscribeFromAllEvents ( class UObject* oCallbackTarget )
{
	static UFunction* pFnUnsubscribeFromAllEvents = NULL;

	if ( ! pFnUnsubscribeFromAllEvents )
		pFnUnsubscribeFromAllEvents = (UFunction*) UObject::GObjObjects()->Data[ 28502 ];

	USFXOnlineComponentCoordinator_execUnsubscribeFromAllEvents_Parms UnsubscribeFromAllEvents_Parms;
	UnsubscribeFromAllEvents_Parms.oCallbackTarget = oCallbackTarget;

	pFnUnsubscribeFromAllEvents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnsubscribeFromAllEvents, &UnsubscribeFromAllEvents_Parms, NULL );

	pFnUnsubscribeFromAllEvents->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.UnsubscribeFromEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eEventType                     ( CPF_Parm )
// struct FScriptDelegate         fnEventCallback                ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentCoordinator::UnsubscribeFromEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback )
{
	static UFunction* pFnUnsubscribeFromEvent = NULL;

	if ( ! pFnUnsubscribeFromEvent )
		pFnUnsubscribeFromEvent = (UFunction*) UObject::GObjObjects()->Data[ 28499 ];

	USFXOnlineComponentCoordinator_execUnsubscribeFromEvent_Parms UnsubscribeFromEvent_Parms;
	UnsubscribeFromEvent_Parms.eEventType = eEventType;
	memcpy ( &UnsubscribeFromEvent_Parms.fnEventCallback, &fnEventCallback, 0xC );

	pFnUnsubscribeFromEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnsubscribeFromEvent, &UnsubscribeFromEvent_Parms, NULL );

	pFnUnsubscribeFromEvent->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.SubscribeToEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eEventType                     ( CPF_Parm )
// struct FScriptDelegate         fnEventCallback                ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentCoordinator::SubscribeToEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback )
{
	static UFunction* pFnSubscribeToEvent = NULL;

	if ( ! pFnSubscribeToEvent )
		pFnSubscribeToEvent = (UFunction*) UObject::GObjObjects()->Data[ 28496 ];

	USFXOnlineComponentCoordinator_execSubscribeToEvent_Parms SubscribeToEvent_Parms;
	SubscribeToEvent_Parms.eEventType = eEventType;
	memcpy ( &SubscribeToEvent_Parms.fnEventCallback, &fnEventCallback, 0xC );

	pFnSubscribeToEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubscribeToEvent, &SubscribeToEvent_Parms, NULL );

	pFnSubscribeToEvent->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkFinishedObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )
// unsigned char                  eStatusFinished                ( CPF_Parm )

void USFXOnlineComponentCoordinator::NotifyWorkFinishedObject ( class USFXOnlineEvent* oEvent, unsigned char eStatusFinished )
{
	static UFunction* pFnNotifyWorkFinishedObject = NULL;

	if ( ! pFnNotifyWorkFinishedObject )
		pFnNotifyWorkFinishedObject = (UFunction*) UObject::GObjObjects()->Data[ 28493 ];

	USFXOnlineComponentCoordinator_execNotifyWorkFinishedObject_Parms NotifyWorkFinishedObject_Parms;
	NotifyWorkFinishedObject_Parms.oEvent = oEvent;
	NotifyWorkFinishedObject_Parms.eStatusFinished = eStatusFinished;

	pFnNotifyWorkFinishedObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyWorkFinishedObject, &NotifyWorkFinishedObject_Parms, NULL );

	pFnNotifyWorkFinishedObject->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkFinishedType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eEventType                     ( CPF_Parm )
// unsigned char                  eStatusFinished                ( CPF_Parm )
// int                            nEventId                       ( CPF_Parm )

void USFXOnlineComponentCoordinator::NotifyWorkFinishedType ( unsigned char eEventType, unsigned char eStatusFinished, int nEventId )
{
	static UFunction* pFnNotifyWorkFinishedType = NULL;

	if ( ! pFnNotifyWorkFinishedType )
		pFnNotifyWorkFinishedType = (UFunction*) UObject::GObjObjects()->Data[ 28489 ];

	USFXOnlineComponentCoordinator_execNotifyWorkFinishedType_Parms NotifyWorkFinishedType_Parms;
	NotifyWorkFinishedType_Parms.eEventType = eEventType;
	NotifyWorkFinishedType_Parms.eStatusFinished = eStatusFinished;
	NotifyWorkFinishedType_Parms.nEventId = nEventId;

	pFnNotifyWorkFinishedType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyWorkFinishedType, &NotifyWorkFinishedType_Parms, NULL );

	pFnNotifyWorkFinishedType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkStartedObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )
// unsigned char                  eEventType                     ( CPF_Parm )

void USFXOnlineComponentCoordinator::NotifyWorkStartedObject ( class USFXOnlineEvent* oEvent, unsigned char eEventType )
{
	static UFunction* pFnNotifyWorkStartedObject = NULL;

	if ( ! pFnNotifyWorkStartedObject )
		pFnNotifyWorkStartedObject = (UFunction*) UObject::GObjObjects()->Data[ 28486 ];

	USFXOnlineComponentCoordinator_execNotifyWorkStartedObject_Parms NotifyWorkStartedObject_Parms;
	NotifyWorkStartedObject_Parms.oEvent = oEvent;
	NotifyWorkStartedObject_Parms.eEventType = eEventType;

	pFnNotifyWorkStartedObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyWorkStartedObject, &NotifyWorkStartedObject_Parms, NULL );

	pFnNotifyWorkStartedObject->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkStartedType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eEventType                     ( CPF_Parm )
// int                            nEventId                       ( CPF_OptionalParm | CPF_Parm )
// float                          fTimeOut                       ( CPF_OptionalParm | CPF_Parm )

void USFXOnlineComponentCoordinator::NotifyWorkStartedType ( unsigned char eEventType, int nEventId, float fTimeOut )
{
	static UFunction* pFnNotifyWorkStartedType = NULL;

	if ( ! pFnNotifyWorkStartedType )
		pFnNotifyWorkStartedType = (UFunction*) UObject::GObjObjects()->Data[ 28482 ];

	USFXOnlineComponentCoordinator_execNotifyWorkStartedType_Parms NotifyWorkStartedType_Parms;
	NotifyWorkStartedType_Parms.eEventType = eEventType;
	NotifyWorkStartedType_Parms.nEventId = nEventId;
	NotifyWorkStartedType_Parms.fTimeOut = fTimeOut;

	pFnNotifyWorkStartedType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyWorkStartedType, &NotifyWorkStartedType_Parms, NULL );

	pFnNotifyWorkStartedType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyEventObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

void USFXOnlineComponentCoordinator::NotifyEventObject ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnNotifyEventObject = NULL;

	if ( ! pFnNotifyEventObject )
		pFnNotifyEventObject = (UFunction*) UObject::GObjObjects()->Data[ 28480 ];

	USFXOnlineComponentCoordinator_execNotifyEventObject_Parms NotifyEventObject_Parms;
	NotifyEventObject_Parms.oEvent = oEvent;

	pFnNotifyEventObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyEventObject, &NotifyEventObject_Parms, NULL );

	pFnNotifyEventObject->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyEventType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eEventType                     ( CPF_Parm )
// unsigned char                  eStatus                        ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  eOutcome                       ( CPF_OptionalParm | CPF_Parm )

void USFXOnlineComponentCoordinator::NotifyEventType ( unsigned char eEventType, unsigned char eStatus, unsigned char eOutcome )
{
	static UFunction* pFnNotifyEventType = NULL;

	if ( ! pFnNotifyEventType )
		pFnNotifyEventType = (UFunction*) UObject::GObjObjects()->Data[ 28476 ];

	USFXOnlineComponentCoordinator_execNotifyEventType_Parms NotifyEventType_Parms;
	NotifyEventType_Parms.eEventType = eEventType;
	NotifyEventType_Parms.eStatus = eStatus;
	NotifyEventType_Parms.eOutcome = eOutcome;

	pFnNotifyEventType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyEventType, &NotifyEventType_Parms, NULL );

	pFnNotifyEventType->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

void USFXOnlineComponentCoordinator::OnTick ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnOnTick = NULL;

	if ( ! pFnOnTick )
		pFnOnTick = (UFunction*) UObject::GObjObjects()->Data[ 28474 ];

	USFXOnlineComponentCoordinator_execOnTick_Parms OnTick_Parms;
	OnTick_Parms.oEvent = oEvent;

	pFnOnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnTick, &OnTick_Parms, NULL );

	pFnOnTick->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnEvent
// [0x00120000] 
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

void USFXOnlineComponentCoordinator::OnEvent ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnOnEvent = NULL;

	if ( ! pFnOnEvent )
		pFnOnEvent = (UFunction*) UObject::GObjObjects()->Data[ 28464 ];

	USFXOnlineComponentCoordinator_execOnEvent_Parms OnEvent_Parms;
	OnEvent_Parms.oEvent = oEvent;

	this->ProcessEvent ( pFnOnEvent, &OnEvent_Parms, NULL );
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShowConsoleRoutedKeyboardUI
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FString                 sTitleText                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDescriptionText               ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 sDefaultText                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            nMaxResultLength               ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineSubsystem::ShowConsoleRoutedKeyboardUI ( unsigned char eLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString sDefaultText, int nMaxResultLength )
{
	static UFunction* pFnShowConsoleRoutedKeyboardUI = NULL;

	if ( ! pFnShowConsoleRoutedKeyboardUI )
		pFnShowConsoleRoutedKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 28990 ];

	USFXOnlineSubsystem_execShowConsoleRoutedKeyboardUI_Parms ShowConsoleRoutedKeyboardUI_Parms;
	ShowConsoleRoutedKeyboardUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowConsoleRoutedKeyboardUI_Parms.sTitleText, &sTitleText, 0xC );
	memcpy ( &ShowConsoleRoutedKeyboardUI_Parms.sDescriptionText, &sDescriptionText, 0xC );
	ShowConsoleRoutedKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowConsoleRoutedKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowConsoleRoutedKeyboardUI_Parms.sDefaultText, &sDefaultText, 0xC );
	ShowConsoleRoutedKeyboardUI_Parms.nMaxResultLength = nMaxResultLength;

	this->ProcessEvent ( pFnShowConsoleRoutedKeyboardUI, &ShowConsoleRoutedKeyboardUI_Parms, NULL );

	return ShowConsoleRoutedKeyboardUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShowKeyboardUI
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FString                 sTitleText                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDescriptionText               ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 sDefaultText                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            nMaxResultLength               ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineSubsystem::ShowKeyboardUI ( unsigned char eLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString sDefaultText, int nMaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 28981 ];

	USFXOnlineSubsystem_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.sTitleText, &sTitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.sDescriptionText, &sDescriptionText, 0xC );
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowKeyboardUI_Parms.sDefaultText, &sDefaultText, 0xC );
	ShowKeyboardUI_Parms.nMaxResultLength = nMaxResultLength;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.FormatTime
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// float                          fInSeconds                     ( CPF_Parm )
// unsigned long                  bShowHours                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShowMins                      ( CPF_OptionalParm | CPF_Parm )

struct FString USFXOnlineSubsystem::FormatTime ( float fInSeconds, unsigned long bShowHours, unsigned long bShowMins )
{
	static UFunction* pFnFormatTime = NULL;

	if ( ! pFnFormatTime )
		pFnFormatTime = (UFunction*) UObject::GObjObjects()->Data[ 28976 ];

	USFXOnlineSubsystem_execFormatTime_Parms FormatTime_Parms;
	FormatTime_Parms.fInSeconds = fInSeconds;
	FormatTime_Parms.bShowHours = bShowHours;
	FormatTime_Parms.bShowMins = bShowMins;

	pFnFormatTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFormatTime, &FormatTime_Parms, NULL );

	pFnFormatTime->FunctionFlags |= 0x400;

	return FormatTime_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.CheckEntitlement
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sGroup                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sTag                           ( CPF_Parm | CPF_NeedCtorLink )

bool USFXOnlineSubsystem::CheckEntitlement ( struct FString sGroup, struct FString sTag )
{
	static UFunction* pFnCheckEntitlement = NULL;

	if ( ! pFnCheckEntitlement )
		pFnCheckEntitlement = (UFunction*) UObject::GObjObjects()->Data[ 28972 ];

	USFXOnlineSubsystem_execCheckEntitlement_Parms CheckEntitlement_Parms;
	memcpy ( &CheckEntitlement_Parms.sGroup, &sGroup, 0xC );
	memcpy ( &CheckEntitlement_Parms.sTag, &sTag, 0xC );

	this->ProcessEvent ( pFnCheckEntitlement, &CheckEntitlement_Parms, NULL );

	return CheckEntitlement_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.IsCerberusMember
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineSubsystem::IsCerberusMember ( )
{
	static UFunction* pFnIsCerberusMember = NULL;

	if ( ! pFnIsCerberusMember )
		pFnIsCerberusMember = (UFunction*) UObject::GObjObjects()->Data[ 28970 ];

	USFXOnlineSubsystem_execIsCerberusMember_Parms IsCerberusMember_Parms;

	this->ProcessEvent ( pFnIsCerberusMember, &IsCerberusMember_Parms, NULL );

	return IsCerberusMember_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetUniqueIdFromConnection
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerReplicationInfo*  oPRI                           ( CPF_Parm )

struct FUniqueNetId USFXOnlineSubsystem::GetUniqueIdFromConnection ( class APlayerReplicationInfo* oPRI )
{
	static UFunction* pFnGetUniqueIdFromConnection = NULL;

	if ( ! pFnGetUniqueIdFromConnection )
		pFnGetUniqueIdFromConnection = (UFunction*) UObject::GObjObjects()->Data[ 28967 ];

	USFXOnlineSubsystem_execGetUniqueIdFromConnection_Parms GetUniqueIdFromConnection_Parms;
	GetUniqueIdFromConnection_Parms.oPRI = oPRI;

	pFnGetUniqueIdFromConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUniqueIdFromConnection, &GetUniqueIdFromConnection_Parms, NULL );

	pFnGetUniqueIdFromConnection->FunctionFlags |= 0x400;

	return GetUniqueIdFromConnection_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.MD5HashString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 InStr                          ( CPF_Parm | CPF_NeedCtorLink )

struct FString USFXOnlineSubsystem::MD5HashString ( struct FString InStr )
{
	static UFunction* pFnMD5HashString = NULL;

	if ( ! pFnMD5HashString )
		pFnMD5HashString = (UFunction*) UObject::GObjObjects()->Data[ 28964 ];

	USFXOnlineSubsystem_execMD5HashString_Parms MD5HashString_Parms;
	memcpy ( &MD5HashString_Parms.InStr, &InStr, 0xC );

	pFnMD5HashString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMD5HashString, &MD5HashString_Parms, NULL );

	pFnMD5HashString->FunctionFlags |= 0x400;

	return MD5HashString_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetProjectID
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXOnlineSubsystem::GetProjectID ( )
{
	static UFunction* pFnGetProjectID = NULL;

	if ( ! pFnGetProjectID )
		pFnGetProjectID = (UFunction*) UObject::GObjObjects()->Data[ 28962 ];

	USFXOnlineSubsystem_execGetProjectID_Parms GetProjectID_Parms;

	pFnGetProjectID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetProjectID, &GetProjectID_Parms, NULL );

	pFnGetProjectID->FunctionFlags |= 0x400;

	return GetProjectID_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetCDKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXOnlineSubsystem::GetCDKey ( )
{
	static UFunction* pFnGetCDKey = NULL;

	if ( ! pFnGetCDKey )
		pFnGetCDKey = (UFunction*) UObject::GObjObjects()->Data[ 28960 ];

	USFXOnlineSubsystem_execGetCDKey_Parms GetCDKey_Parms;

	pFnGetCDKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCDKey, &GetCDKey_Parms, NULL );

	pFnGetCDKey->FunctionFlags |= 0x400;

	return GetCDKey_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetLanguage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXOnlineSubsystem::GetLanguage ( )
{
	static UFunction* pFnGetLanguage = NULL;

	if ( ! pFnGetLanguage )
		pFnGetLanguage = (UFunction*) UObject::GObjObjects()->Data[ 28958 ];

	USFXOnlineSubsystem_execGetLanguage_Parms GetLanguage_Parms;

	pFnGetLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLanguage, &GetLanguage_Parms, NULL );

	pFnGetLanguage->FunctionFlags |= 0x400;

	return GetLanguage_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetPlatform
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineSubsystem::GetPlatform ( )
{
	static UFunction* pFnGetPlatform = NULL;

	if ( ! pFnGetPlatform )
		pFnGetPlatform = (UFunction*) UObject::GObjObjects()->Data[ 28956 ];

	USFXOnlineSubsystem_execGetPlatform_Parms GetPlatform_Parms;

	pFnGetPlatform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlatform, &GetPlatform_Parms, NULL );

	pFnGetPlatform->FunctionFlags |= 0x400;

	return GetPlatform_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShutDown
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void USFXOnlineSubsystem::eventShutDown ( )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 28955 ];

	USFXOnlineSubsystem_eventShutDown_Parms ShutDown_Parms;

	pFnShutDown->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );

	pFnShutDown->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.NativeInit
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineSubsystem::NativeInit ( )
{
	static UFunction* pFnNativeInit = NULL;

	if ( ! pFnNativeInit )
		pFnNativeInit = (UFunction*) UObject::GObjObjects()->Data[ 28953 ];

	USFXOnlineSubsystem_execNativeInit_Parms NativeInit_Parms;

	pFnNativeInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeInit, &NativeInit_Parms, NULL );

	pFnNativeInit->FunctionFlags |= 0x400;

	return NativeInit_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetGameListenPort
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXOnlineSubsystem::GetGameListenPort ( )
{
	static UFunction* pFnGetGameListenPort = NULL;

	if ( ! pFnGetGameListenPort )
		pFnGetGameListenPort = (UFunction*) UObject::GObjObjects()->Data[ 28951 ];

	USFXOnlineSubsystem_execGetGameListenPort_Parms GetGameListenPort_Parms;

	pFnGetGameListenPort->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameListenPort, &GetGameListenPort_Parms, NULL );

	pFnGetGameListenPort->FunctionFlags |= 0x400;

	return GetGameListenPort_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetReserveTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXOnlineSubsystem::GetReserveTimeout ( )
{
	static UFunction* pFnGetReserveTimeout = NULL;

	if ( ! pFnGetReserveTimeout )
		pFnGetReserveTimeout = (UFunction*) UObject::GObjObjects()->Data[ 28949 ];

	USFXOnlineSubsystem_execGetReserveTimeout_Parms GetReserveTimeout_Parms;

	pFnGetReserveTimeout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetReserveTimeout, &GetReserveTimeout_Parms, NULL );

	pFnGetReserveTimeout->FunctionFlags |= 0x400;

	return GetReserveTimeout_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetMaxObserverCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXOnlineSubsystem::GetMaxObserverCount ( )
{
	static UFunction* pFnGetMaxObserverCount = NULL;

	if ( ! pFnGetMaxObserverCount )
		pFnGetMaxObserverCount = (UFunction*) UObject::GObjObjects()->Data[ 28947 ];

	USFXOnlineSubsystem_execGetMaxObserverCount_Parms GetMaxObserverCount_Parms;

	pFnGetMaxObserverCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMaxObserverCount, &GetMaxObserverCount_Parms, NULL );

	pFnGetMaxObserverCount->FunctionFlags |= 0x400;

	return GetMaxObserverCount_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetMaxPlayerCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXOnlineSubsystem::GetMaxPlayerCount ( )
{
	static UFunction* pFnGetMaxPlayerCount = NULL;

	if ( ! pFnGetMaxPlayerCount )
		pFnGetMaxPlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 28945 ];

	USFXOnlineSubsystem_execGetMaxPlayerCount_Parms GetMaxPlayerCount_Parms;

	pFnGetMaxPlayerCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMaxPlayerCount, &GetMaxPlayerCount_Parms, NULL );

	pFnGetMaxPlayerCount->FunctionFlags |= 0x400;

	return GetMaxPlayerCount_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.SetMaxPlayerCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nMaxPlayers                    ( CPF_Parm )

void USFXOnlineSubsystem::SetMaxPlayerCount ( int nMaxPlayers )
{
	static UFunction* pFnSetMaxPlayerCount = NULL;

	if ( ! pFnSetMaxPlayerCount )
		pFnSetMaxPlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 28943 ];

	USFXOnlineSubsystem_execSetMaxPlayerCount_Parms SetMaxPlayerCount_Parms;
	SetMaxPlayerCount_Parms.nMaxPlayers = nMaxPlayers;

	pFnSetMaxPlayerCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMaxPlayerCount, &SetMaxPlayerCount_Parms, NULL );

	pFnSetMaxPlayerCount->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetGameProtocolVersion
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXOnlineSubsystem::GetGameProtocolVersion ( )
{
	static UFunction* pFnGetGameProtocolVersion = NULL;

	if ( ! pFnGetGameProtocolVersion )
		pFnGetGameProtocolVersion = (UFunction*) UObject::GObjObjects()->Data[ 28941 ];

	USFXOnlineSubsystem_execGetGameProtocolVersion_Parms GetGameProtocolVersion_Parms;

	pFnGetGameProtocolVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameProtocolVersion, &GetGameProtocolVersion_Parms, NULL );

	pFnGetGameProtocolVersion->FunctionFlags |= 0x400;

	return GetGameProtocolVersion_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UISFXOnlineComponentNotification* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UISFXOnlineComponentNotification* USFXOnlineSubsystem::GetComponentNotification ( )
{
	static UFunction* pFnGetComponentNotification = NULL;

	if ( ! pFnGetComponentNotification )
		pFnGetComponentNotification = (UFunction*) UObject::GObjObjects()->Data[ 28939 ];

	USFXOnlineSubsystem_execGetComponentNotification_Parms GetComponentNotification_Parms;

	pFnGetComponentNotification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetComponentNotification, &GetComponentNotification_Parms, NULL );

	pFnGetComponentNotification->FunctionFlags |= 0x400;

	return GetComponentNotification_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetCoordinator
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineComponentCoordinator* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USFXOnlineComponentCoordinator* USFXOnlineSubsystem::GetCoordinator ( )
{
	static UFunction* pFnGetCoordinator = NULL;

	if ( ! pFnGetCoordinator )
		pFnGetCoordinator = (UFunction*) UObject::GObjObjects()->Data[ 28937 ];

	USFXOnlineSubsystem_execGetCoordinator_Parms GetCoordinator_Parms;

	pFnGetCoordinator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCoordinator, &GetCoordinator_Parms, NULL );

	pFnGetCoordinator->FunctionFlags |= 0x400;

	return GetCoordinator_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUserInterface
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UISFXOnlineComponentUserInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UISFXOnlineComponentUserInterface* USFXOnlineSubsystem::GetComponentUserInterface ( )
{
	static UFunction* pFnGetComponentUserInterface = NULL;

	if ( ! pFnGetComponentUserInterface )
		pFnGetComponentUserInterface = (UFunction*) UObject::GObjObjects()->Data[ 28935 ];

	USFXOnlineSubsystem_execGetComponentUserInterface_Parms GetComponentUserInterface_Parms;

	pFnGetComponentUserInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetComponentUserInterface, &GetComponentUserInterface_Parms, NULL );

	pFnGetComponentUserInterface->FunctionFlags |= 0x400;

	return GetComponentUserInterface_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentLogin
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UISFXOnlineComponentLogin* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UISFXOnlineComponentLogin* USFXOnlineSubsystem::GetComponentLogin ( )
{
	static UFunction* pFnGetComponentLogin = NULL;

	if ( ! pFnGetComponentLogin )
		pFnGetComponentLogin = (UFunction*) UObject::GObjObjects()->Data[ 28933 ];

	USFXOnlineSubsystem_execGetComponentLogin_Parms GetComponentLogin_Parms;

	pFnGetComponentLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetComponentLogin, &GetComponentLogin_Parms, NULL );

	pFnGetComponentLogin->FunctionFlags |= 0x400;

	return GetComponentLogin_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAPI
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UISFXOnlineComponentAPI* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UISFXOnlineComponentAPI* USFXOnlineSubsystem::GetComponentAPI ( )
{
	static UFunction* pFnGetComponentAPI = NULL;

	if ( ! pFnGetComponentAPI )
		pFnGetComponentAPI = (UFunction*) UObject::GObjObjects()->Data[ 28931 ];

	USFXOnlineSubsystem_execGetComponentAPI_Parms GetComponentAPI_Parms;

	pFnGetComponentAPI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetComponentAPI, &GetComponentAPI_Parms, NULL );

	pFnGetComponentAPI->FunctionFlags |= 0x400;

	return GetComponentAPI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAchievement
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UISFXOnlineComponentAchievement* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UISFXOnlineComponentAchievement* USFXOnlineSubsystem::GetComponentAchievement ( )
{
	static UFunction* pFnGetComponentAchievement = NULL;

	if ( ! pFnGetComponentAchievement )
		pFnGetComponentAchievement = (UFunction*) UObject::GObjObjects()->Data[ 28929 ];

	USFXOnlineSubsystem_execGetComponentAchievement_Parms GetComponentAchievement_Parms;

	pFnGetComponentAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetComponentAchievement, &GetComponentAchievement_Parms, NULL );

	pFnGetComponentAchievement->FunctionFlags |= 0x400;

	return GetComponentAchievement_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentPlatform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UISFXOnlineComponentPlatform* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UISFXOnlineComponentPlatform* USFXOnlineSubsystem::GetComponentPlatform ( )
{
	static UFunction* pFnGetComponentPlatform = NULL;

	if ( ! pFnGetComponentPlatform )
		pFnGetComponentPlatform = (UFunction*) UObject::GObjObjects()->Data[ 28927 ];

	USFXOnlineSubsystem_execGetComponentPlatform_Parms GetComponentPlatform_Parms;

	pFnGetComponentPlatform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetComponentPlatform, &GetComponentPlatform_Parms, NULL );

	pFnGetComponentPlatform->FunctionFlags |= 0x400;

	return GetComponentPlatform_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.StripBadPWCharacters
// [0x00080002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 sPassword                      ( CPF_Parm | CPF_NeedCtorLink )

struct FString USFXOnlineSubsystem::StripBadPWCharacters ( struct FString sPassword )
{
	static UFunction* pFnStripBadPWCharacters = NULL;

	if ( ! pFnStripBadPWCharacters )
		pFnStripBadPWCharacters = (UFunction*) UObject::GObjObjects()->Data[ 28921 ];

	USFXOnlineSubsystem_execStripBadPWCharacters_Parms StripBadPWCharacters_Parms;
	memcpy ( &StripBadPWCharacters_Parms.sPassword, &sPassword, 0xC );

	this->ProcessEvent ( pFnStripBadPWCharacters, &StripBadPWCharacters_Parms, NULL );

	return StripBadPWCharacters_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetURL
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXOnlineSubsystem::eventGetURL ( )
{
	static UFunction* pFnGetURL = NULL;

	if ( ! pFnGetURL )
		pFnGetURL = (UFunction*) UObject::GObjObjects()->Data[ 28918 ];

	USFXOnlineSubsystem_eventGetURL_Parms GetURL_Parms;

	this->ProcessEvent ( pFnGetURL, &GetURL_Parms, NULL );

	return GetURL_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.CreateComponents
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void USFXOnlineSubsystem::CreateComponents ( )
{
	static UFunction* pFnCreateComponents = NULL;

	if ( ! pFnCreateComponents )
		pFnCreateComponents = (UFunction*) UObject::GObjObjects()->Data[ 28915 ];

	USFXOnlineSubsystem_execCreateComponents_Parms CreateComponents_Parms;

	this->ProcessEvent ( pFnCreateComponents, &CreateComponents_Parms, NULL );
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.InitGameProtocolVersion
// [0x00040001] ( FUNC_Final )
// Parameters infos:

void USFXOnlineSubsystem::InitGameProtocolVersion ( )
{
	static UFunction* pFnInitGameProtocolVersion = NULL;

	if ( ! pFnInitGameProtocolVersion )
		pFnInitGameProtocolVersion = (UFunction*) UObject::GObjObjects()->Data[ 28914 ];

	USFXOnlineSubsystem_execInitGameProtocolVersion_Parms InitGameProtocolVersion_Parms;

	this->ProcessEvent ( pFnInitGameProtocolVersion, &InitGameProtocolVersion_Parms, NULL );
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.Init
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineSubsystem::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 28912 ];

	USFXOnlineSubsystem_eventInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	return Init_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetAchievementList
// [0x00020002] 
// Parameters infos:
// TArray< struct FSFXOnlineAchievement > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FSFXOnlineAchievement > USFXOnlineSubsystem::GetAchievementList ( )
{
	static UFunction* pFnGetAchievementList = NULL;

	if ( ! pFnGetAchievementList )
		pFnGetAchievementList = (UFunction*) UObject::GObjObjects()->Data[ 28909 ];

	USFXOnlineSubsystem_execGetAchievementList_Parms GetAchievementList_Parms;

	this->ProcessEvent ( pFnGetAchievementList, &GetAchievementList_Parms, NULL );

	return GetAchievementList_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm | CPF_OutParm )

bool USFXOnlineComponentPlatformPC::GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid )
{
	static UFunction* pFnGetOnlineXuid = NULL;

	if ( ! pFnGetOnlineXuid )
		pFnGetOnlineXuid = (UFunction*) UObject::GObjObjects()->Data[ 28608 ];

	USFXOnlineComponentPlatformPC_execGetOnlineXuid_Parms GetOnlineXuid_Parms;
	GetOnlineXuid_Parms.nUserIndex = nUserIndex;

	pFnGetOnlineXuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOnlineXuid, &GetOnlineXuid_Parms, NULL );

	pFnGetOnlineXuid->FunctionFlags |= 0x400;

	if ( oPlayerXuid )
		memcpy ( oPlayerXuid, &GetOnlineXuid_Parms.oPlayerXuid, 0x8 );

	return GetOnlineXuid_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm | CPF_OutParm )

bool USFXOnlineComponentPlatformPC::GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid )
{
	static UFunction* pFnGetOfflineXuid = NULL;

	if ( ! pFnGetOfflineXuid )
		pFnGetOfflineXuid = (UFunction*) UObject::GObjObjects()->Data[ 28604 ];

	USFXOnlineComponentPlatformPC_execGetOfflineXuid_Parms GetOfflineXuid_Parms;
	GetOfflineXuid_Parms.nUserIndex = nUserIndex;

	pFnGetOfflineXuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOfflineXuid, &GetOfflineXuid_Parms, NULL );

	pFnGetOfflineXuid->FunctionFlags |= 0x400;

	if ( oPlayerXuid )
		memcpy ( oPlayerXuid, &GetOfflineXuid_Parms.oPlayerXuid, 0x8 );

	return GetOfflineXuid_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowKeyboardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 sTitleText                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDescriptionText               ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRouteThroughConsole           ( CPF_OptionalParm | CPF_Parm )
// struct FString                 sDefaultText                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            nMaxResultLength               ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineComponentPlatformPC::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 28595 ];

	USFXOnlineComponentPlatformPC_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.sTitleText, &sTitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.sDescriptionText, &sDescriptionText, 0xC );
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	ShowKeyboardUI_Parms.bRouteThroughConsole = bRouteThroughConsole;
	memcpy ( &ShowKeyboardUI_Parms.sDefaultText, &sDefaultText, 0xC );
	ShowKeyboardUI_Parms.nMaxResultLength = nMaxResultLength;

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm )

bool USFXOnlineComponentPlatformPC::ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid )
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if ( ! pFnShowFriendsInviteUI )
		pFnShowFriendsInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 28591 ];

	USFXOnlineComponentPlatformPC_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowFriendsInviteUI_Parms.oPlayerXuid, &oPlayerXuid, 0x8 );

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL );

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

bool USFXOnlineComponentPlatformPC::ShowFriendsUI ( unsigned char eLocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 28588 ];

	USFXOnlineComponentPlatformPC_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.eLocalUserNum = eLocalUserNum;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	pFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

bool USFXOnlineComponentPlatformPC::ShowAchievementsUI ( unsigned char byLocalUserNum )
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if ( ! pFnShowAchievementsUI )
		pFnShowAchievementsUI = (UFunction*) UObject::GObjObjects()->Data[ 28585 ];

	USFXOnlineComponentPlatformPC_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.byLocalUserNum = byLocalUserNum;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL );

	pFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )

bool USFXOnlineComponentPlatformPC::ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId )
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if ( ! pFnShowFeedbackUI )
		pFnShowFeedbackUI = (UFunction*) UObject::GObjObjects()->Data[ 28581 ];

	USFXOnlineComponentPlatformPC_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowFeedbackUI_Parms.oPlayerId, &oPlayerId, 0x8 );

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL );

	pFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )

bool USFXOnlineComponentPlatformPC::ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId )
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if ( ! pFnShowGamerCardUI )
		pFnShowGamerCardUI = (UFunction*) UObject::GObjObjects()->Data[ 28577 ];

	USFXOnlineComponentPlatformPC_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowGamerCardUI_Parms.oPlayerId, &oPlayerId, 0x8 );

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL );

	pFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPC::CanShowPresenceInformation ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 28574 ];

	USFXOnlineComponentPlatformPC_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanShowPresenceInformation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	pFnCanShowPresenceInformation->FunctionFlags |= 0x400;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPC::CanViewPlayerProfiles ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 28571 ];

	USFXOnlineComponentPlatformPC_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanViewPlayerProfiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	pFnCanViewPlayerProfiles->FunctionFlags |= 0x400;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPC::CanPurchaseContent ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 28568 ];

	USFXOnlineComponentPlatformPC_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanPurchaseContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	pFnCanPurchaseContent->FunctionFlags |= 0x400;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPC::CanDownloadUserContent ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 28565 ];

	USFXOnlineComponentPlatformPC_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanDownloadUserContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	pFnCanDownloadUserContent->FunctionFlags |= 0x400;

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPC::CanCommunicate ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 28562 ];

	USFXOnlineComponentPlatformPC_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanPlayOnline
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPC::CanPlayOnline ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 28559 ];

	USFXOnlineComponentPlatformPC_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.SetRichPresence
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// int                            nPresenceMode                  ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > aLocalizedStringSettings       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > aProperties                    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXOnlineComponentPlatformPC::SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, TArray< struct FLocalizedStringSetting >* aLocalizedStringSettings, TArray< struct FSettingsProperty >* aProperties )
{
	static UFunction* pFnSetRichPresence = NULL;

	if ( ! pFnSetRichPresence )
		pFnSetRichPresence = (UFunction*) UObject::GObjObjects()->Data[ 28552 ];

	USFXOnlineComponentPlatformPC_execSetRichPresence_Parms SetRichPresence_Parms;
	SetRichPresence_Parms.eLocalUserNum = eLocalUserNum;
	SetRichPresence_Parms.nPresenceMode = nPresenceMode;

	pFnSetRichPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRichPresence, &SetRichPresence_Parms, NULL );

	pFnSetRichPresence->FunctionFlags |= 0x400;

	if ( aLocalizedStringSettings )
		memcpy ( aLocalizedStringSettings, &SetRichPresence_Parms.aLocalizedStringSettings, 0xC );

	if ( aProperties )
		memcpy ( aProperties, &SetRichPresence_Parms.aProperties, 0xC );
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowLoginUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineComponentPlatformPC::ShowLoginUI ( unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 28549 ];

	USFXOnlineComponentPlatformPC_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	pFnShowLoginUI->FunctionFlags |= 0x400;

	return ShowLoginUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPC::GetLoginStatus ( unsigned char eLocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 28546 ];

	USFXOnlineComponentPlatformPC_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.eLocalUserNum = eLocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.AddRecentPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )
// struct FString                 sDescription                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool USFXOnlineComponentPlatformPC::AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription )
{
	static UFunction* pFnAddRecentPlayer = NULL;

	if ( ! pFnAddRecentPlayer )
		pFnAddRecentPlayer = (UFunction*) UObject::GObjObjects()->Data[ 28542 ];

	USFXOnlineComponentPlatformPC_execAddRecentPlayer_Parms AddRecentPlayer_Parms;
	memcpy ( &AddRecentPlayer_Parms.oPlayerId, &oPlayerId, 0x8 );
	memcpy ( &AddRecentPlayer_Parms.sDescription, &sDescription, 0xC );

	pFnAddRecentPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddRecentPlayer, &AddRecentPlayer_Parms, NULL );

	pFnAddRecentPlayer->FunctionFlags |= 0x400;

	return AddRecentPlayer_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetAPIName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineComponentPlatformPC::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 28540 ];

	USFXOnlineComponentPlatformPC_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.OnRelease
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentPlatformPC::OnRelease ( )
{
	static UFunction* pFnOnRelease = NULL;

	if ( ! pFnOnRelease )
		pFnOnRelease = (UFunction*) UObject::GObjObjects()->Data[ 28539 ];

	USFXOnlineComponentPlatformPC_execOnRelease_Parms OnRelease_Parms;

	pFnOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRelease, &OnRelease_Parms, NULL );

	pFnOnRelease->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.OnInitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineSubsystem*     oOnlineSubsystem               ( CPF_Parm )

void USFXOnlineComponentPlatformPC::OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem )
{
	static UFunction* pFnOnInitialize = NULL;

	if ( ! pFnOnInitialize )
		pFnOnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 28537 ];

	USFXOnlineComponentPlatformPC_execOnInitialize_Parms OnInitialize_Parms;
	OnInitialize_Parms.oOnlineSubsystem = oOnlineSubsystem;

	pFnOnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInitialize, &OnInitialize_Parms, NULL );

	pFnOnInitialize->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetAPIName
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineComponentAchievementXenon::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 28224 ];

	USFXOnlineComponentAchievementXenon_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.OnRelease
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void USFXOnlineComponentAchievementXenon::OnRelease ( )
{
	static UFunction* pFnOnRelease = NULL;

	if ( ! pFnOnRelease )
		pFnOnRelease = (UFunction*) UObject::GObjObjects()->Data[ 28223 ];

	USFXOnlineComponentAchievementXenon_execOnRelease_Parms OnRelease_Parms;

	pFnOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRelease, &OnRelease_Parms, NULL );

	pFnOnRelease->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.OnInitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineSubsystem*     oOnlineSubsystem               ( CPF_Parm )

void USFXOnlineComponentAchievementXenon::OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem )
{
	static UFunction* pFnOnInitialize = NULL;

	if ( ! pFnOnInitialize )
		pFnOnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 28221 ];

	USFXOnlineComponentAchievementXenon_execOnInitialize_Parms OnInitialize_Parms;
	OnInitialize_Parms.oOnlineSubsystem = oOnlineSubsystem;

	pFnOnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInitialize, &OnInitialize_Parms, NULL );

	pFnOnInitialize->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sAchievement                   ( CPF_Parm | CPF_NeedCtorLink )

bool USFXOnlineComponentAchievementXenon::IsGranted ( struct FString sAchievement )
{
	static UFunction* pFnIsGranted = NULL;

	if ( ! pFnIsGranted )
		pFnIsGranted = (UFunction*) UObject::GObjObjects()->Data[ 28218 ];

	USFXOnlineComponentAchievementXenon_execIsGranted_Parms IsGranted_Parms;
	memcpy ( &IsGranted_Parms.sAchievement, &sAchievement, 0xC );

	pFnIsGranted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsGranted, &IsGranted_Parms, NULL );

	pFnIsGranted->FunctionFlags |= 0x400;

	return IsGranted_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sAchievement                   ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentAchievementXenon::Grant ( struct FString sAchievement )
{
	static UFunction* pFnGrant = NULL;

	if ( ! pFnGrant )
		pFnGrant = (UFunction*) UObject::GObjObjects()->Data[ 28216 ];

	USFXOnlineComponentAchievementXenon_execGrant_Parms Grant_Parms;
	memcpy ( &Grant_Parms.sAchievement, &sAchievement, 0xC );

	pFnGrant->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGrant, &Grant_Parms, NULL );

	pFnGrant->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm | CPF_OutParm )

bool USFXOnlineComponentPlatformXenon::GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid )
{
	static UFunction* pFnGetOnlineXuid = NULL;

	if ( ! pFnGetOnlineXuid )
		pFnGetOnlineXuid = (UFunction*) UObject::GObjObjects()->Data[ 28778 ];

	USFXOnlineComponentPlatformXenon_execGetOnlineXuid_Parms GetOnlineXuid_Parms;
	GetOnlineXuid_Parms.nUserIndex = nUserIndex;

	pFnGetOnlineXuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOnlineXuid, &GetOnlineXuid_Parms, NULL );

	pFnGetOnlineXuid->FunctionFlags |= 0x400;

	if ( oPlayerXuid )
		memcpy ( oPlayerXuid, &GetOnlineXuid_Parms.oPlayerXuid, 0x8 );

	return GetOnlineXuid_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm | CPF_OutParm )

bool USFXOnlineComponentPlatformXenon::GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid )
{
	static UFunction* pFnGetOfflineXuid = NULL;

	if ( ! pFnGetOfflineXuid )
		pFnGetOfflineXuid = (UFunction*) UObject::GObjObjects()->Data[ 28774 ];

	USFXOnlineComponentPlatformXenon_execGetOfflineXuid_Parms GetOfflineXuid_Parms;
	GetOfflineXuid_Parms.nUserIndex = nUserIndex;

	pFnGetOfflineXuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOfflineXuid, &GetOfflineXuid_Parms, NULL );

	pFnGetOfflineXuid->FunctionFlags |= 0x400;

	if ( oPlayerXuid )
		memcpy ( oPlayerXuid, &GetOfflineXuid_Parms.oPlayerXuid, 0x8 );

	return GetOfflineXuid_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowKeyboardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 sTitleText                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDescriptionText               ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRouteThroughConsole           ( CPF_OptionalParm | CPF_Parm )
// struct FString                 sDefaultText                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            nMaxResultLength               ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineComponentPlatformXenon::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 28765 ];

	USFXOnlineComponentPlatformXenon_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.sTitleText, &sTitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.sDescriptionText, &sDescriptionText, 0xC );
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	ShowKeyboardUI_Parms.bRouteThroughConsole = bRouteThroughConsole;
	memcpy ( &ShowKeyboardUI_Parms.sDefaultText, &sDefaultText, 0xC );
	ShowKeyboardUI_Parms.nMaxResultLength = nMaxResultLength;

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm )

bool USFXOnlineComponentPlatformXenon::ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid )
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if ( ! pFnShowFriendsInviteUI )
		pFnShowFriendsInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 28761 ];

	USFXOnlineComponentPlatformXenon_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowFriendsInviteUI_Parms.oPlayerXuid, &oPlayerXuid, 0x8 );

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL );

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

bool USFXOnlineComponentPlatformXenon::ShowFriendsUI ( unsigned char eLocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 28758 ];

	USFXOnlineComponentPlatformXenon_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.eLocalUserNum = eLocalUserNum;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	pFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

bool USFXOnlineComponentPlatformXenon::ShowAchievementsUI ( unsigned char byLocalUserNum )
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if ( ! pFnShowAchievementsUI )
		pFnShowAchievementsUI = (UFunction*) UObject::GObjObjects()->Data[ 28755 ];

	USFXOnlineComponentPlatformXenon_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.byLocalUserNum = byLocalUserNum;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL );

	pFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm )

bool USFXOnlineComponentPlatformXenon::ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid )
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if ( ! pFnShowFeedbackUI )
		pFnShowFeedbackUI = (UFunction*) UObject::GObjObjects()->Data[ 28751 ];

	USFXOnlineComponentPlatformXenon_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowFeedbackUI_Parms.oPlayerXuid, &oPlayerXuid, 0x8 );

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL );

	pFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm )

bool USFXOnlineComponentPlatformXenon::ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid )
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if ( ! pFnShowGamerCardUI )
		pFnShowGamerCardUI = (UFunction*) UObject::GObjObjects()->Data[ 28747 ];

	USFXOnlineComponentPlatformXenon_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowGamerCardUI_Parms.oPlayerXuid, &oPlayerXuid, 0x8 );

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL );

	pFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformXenon::CanShowPresenceInformation ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 28744 ];

	USFXOnlineComponentPlatformXenon_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanShowPresenceInformation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	pFnCanShowPresenceInformation->FunctionFlags |= 0x400;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformXenon::CanViewPlayerProfiles ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 28741 ];

	USFXOnlineComponentPlatformXenon_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanViewPlayerProfiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	pFnCanViewPlayerProfiles->FunctionFlags |= 0x400;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformXenon::CanPurchaseContent ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 28738 ];

	USFXOnlineComponentPlatformXenon_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanPurchaseContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	pFnCanPurchaseContent->FunctionFlags |= 0x400;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformXenon::CanDownloadUserContent ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 28735 ];

	USFXOnlineComponentPlatformXenon_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanDownloadUserContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	pFnCanDownloadUserContent->FunctionFlags |= 0x400;

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformXenon::CanCommunicate ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 28732 ];

	USFXOnlineComponentPlatformXenon_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanPlayOnline
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformXenon::CanPlayOnline ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 28729 ];

	USFXOnlineComponentPlatformXenon_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SetRichPresence
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// int                            nPresenceMode                  ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > aLocalizedStringSettings       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > aProperties                    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXOnlineComponentPlatformXenon::SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, TArray< struct FLocalizedStringSetting >* aLocalizedStringSettings, TArray< struct FSettingsProperty >* aProperties )
{
	static UFunction* pFnSetRichPresence = NULL;

	if ( ! pFnSetRichPresence )
		pFnSetRichPresence = (UFunction*) UObject::GObjObjects()->Data[ 28722 ];

	USFXOnlineComponentPlatformXenon_execSetRichPresence_Parms SetRichPresence_Parms;
	SetRichPresence_Parms.eLocalUserNum = eLocalUserNum;
	SetRichPresence_Parms.nPresenceMode = nPresenceMode;

	pFnSetRichPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRichPresence, &SetRichPresence_Parms, NULL );

	pFnSetRichPresence->FunctionFlags |= 0x400;

	if ( aLocalizedStringSettings )
		memcpy ( aLocalizedStringSettings, &SetRichPresence_Parms.aLocalizedStringSettings, 0xC );

	if ( aProperties )
		memcpy ( aProperties, &SetRichPresence_Parms.aProperties, 0xC );
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowLoginUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineComponentPlatformXenon::ShowLoginUI ( unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 28719 ];

	USFXOnlineComponentPlatformXenon_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	pFnShowLoginUI->FunctionFlags |= 0x400;

	return ShowLoginUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformXenon::GetLoginStatus ( unsigned char eLocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 28716 ];

	USFXOnlineComponentPlatformXenon_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.eLocalUserNum = eLocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.TickAsyncTasks
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void USFXOnlineComponentPlatformXenon::TickAsyncTasks ( )
{
	static UFunction* pFnTickAsyncTasks = NULL;

	if ( ! pFnTickAsyncTasks )
		pFnTickAsyncTasks = (UFunction*) UObject::GObjObjects()->Data[ 28715 ];

	USFXOnlineComponentPlatformXenon_execTickAsyncTasks_Parms TickAsyncTasks_Parms;

	pFnTickAsyncTasks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTickAsyncTasks, &TickAsyncTasks_Parms, NULL );

	pFnTickAsyncTasks->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

void USFXOnlineComponentPlatformXenon::OnTick ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnOnTick = NULL;

	if ( ! pFnOnTick )
		pFnOnTick = (UFunction*) UObject::GObjObjects()->Data[ 28713 ];

	USFXOnlineComponentPlatformXenon_execOnTick_Parms OnTick_Parms;
	OnTick_Parms.oEvent = oEvent;

	pFnOnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnTick, &OnTick_Parms, NULL );

	pFnOnTick->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.AddRecentPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )
// struct FString                 sDescription                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool USFXOnlineComponentPlatformXenon::AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription )
{
	static UFunction* pFnAddRecentPlayer = NULL;

	if ( ! pFnAddRecentPlayer )
		pFnAddRecentPlayer = (UFunction*) UObject::GObjObjects()->Data[ 28709 ];

	USFXOnlineComponentPlatformXenon_execAddRecentPlayer_Parms AddRecentPlayer_Parms;
	memcpy ( &AddRecentPlayer_Parms.oPlayerId, &oPlayerId, 0x8 );
	memcpy ( &AddRecentPlayer_Parms.sDescription, &sDescription, 0xC );

	pFnAddRecentPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddRecentPlayer, &AddRecentPlayer_Parms, NULL );

	pFnAddRecentPlayer->FunctionFlags |= 0x400;

	return AddRecentPlayer_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetAPIName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineComponentPlatformXenon::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 28707 ];

	USFXOnlineComponentPlatformXenon_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnRelease
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentPlatformXenon::OnRelease ( )
{
	static UFunction* pFnOnRelease = NULL;

	if ( ! pFnOnRelease )
		pFnOnRelease = (UFunction*) UObject::GObjObjects()->Data[ 28706 ];

	USFXOnlineComponentPlatformXenon_execOnRelease_Parms OnRelease_Parms;

	pFnOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRelease, &OnRelease_Parms, NULL );

	pFnOnRelease->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnInitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineSubsystem*     oOnlineSubsystem               ( CPF_Parm )

void USFXOnlineComponentPlatformXenon::OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem )
{
	static UFunction* pFnOnInitialize = NULL;

	if ( ! pFnOnInitialize )
		pFnOnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 28704 ];

	USFXOnlineComponentPlatformXenon_execOnInitialize_Parms OnInitialize_Parms;
	OnInitialize_Parms.oOnlineSubsystem = oOnlineSubsystem;

	pFnOnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInitialize, &OnInitialize_Parms, NULL );

	pFnOnInitialize->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm | CPF_OutParm )

bool USFXOnlineComponentPlatformPS3::GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid )
{
	static UFunction* pFnGetOnlineXuid = NULL;

	if ( ! pFnGetOnlineXuid )
		pFnGetOnlineXuid = (UFunction*) UObject::GObjObjects()->Data[ 28688 ];

	USFXOnlineComponentPlatformPS3_execGetOnlineXuid_Parms GetOnlineXuid_Parms;
	GetOnlineXuid_Parms.nUserIndex = nUserIndex;

	pFnGetOnlineXuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOnlineXuid, &GetOnlineXuid_Parms, NULL );

	pFnGetOnlineXuid->FunctionFlags |= 0x400;

	if ( oPlayerXuid )
		memcpy ( oPlayerXuid, &GetOnlineXuid_Parms.oPlayerXuid, 0x8 );

	return GetOnlineXuid_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm | CPF_OutParm )

bool USFXOnlineComponentPlatformPS3::GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid )
{
	static UFunction* pFnGetOfflineXuid = NULL;

	if ( ! pFnGetOfflineXuid )
		pFnGetOfflineXuid = (UFunction*) UObject::GObjObjects()->Data[ 28684 ];

	USFXOnlineComponentPlatformPS3_execGetOfflineXuid_Parms GetOfflineXuid_Parms;
	GetOfflineXuid_Parms.nUserIndex = nUserIndex;

	pFnGetOfflineXuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOfflineXuid, &GetOfflineXuid_Parms, NULL );

	pFnGetOfflineXuid->FunctionFlags |= 0x400;

	if ( oPlayerXuid )
		memcpy ( oPlayerXuid, &GetOfflineXuid_Parms.oPlayerXuid, 0x8 );

	return GetOfflineXuid_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowKeyboardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 sTitleText                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDescriptionText               ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRouteThroughConsole           ( CPF_OptionalParm | CPF_Parm )
// struct FString                 sDefaultText                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            nMaxResultLength               ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineComponentPlatformPS3::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 28675 ];

	USFXOnlineComponentPlatformPS3_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.sTitleText, &sTitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.sDescriptionText, &sDescriptionText, 0xC );
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	ShowKeyboardUI_Parms.bRouteThroughConsole = bRouteThroughConsole;
	memcpy ( &ShowKeyboardUI_Parms.sDefaultText, &sDefaultText, 0xC );
	ShowKeyboardUI_Parms.nMaxResultLength = nMaxResultLength;

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FUniqueNetId            oPlayerXuid                    ( CPF_Parm )

bool USFXOnlineComponentPlatformPS3::ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid )
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if ( ! pFnShowFriendsInviteUI )
		pFnShowFriendsInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 28671 ];

	USFXOnlineComponentPlatformPS3_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowFriendsInviteUI_Parms.oPlayerXuid, &oPlayerXuid, 0x8 );

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL );

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

bool USFXOnlineComponentPlatformPS3::ShowFriendsUI ( unsigned char eLocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 28668 ];

	USFXOnlineComponentPlatformPS3_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.eLocalUserNum = eLocalUserNum;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	pFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  byLocalUserNum                 ( CPF_Parm )

bool USFXOnlineComponentPlatformPS3::ShowAchievementsUI ( unsigned char byLocalUserNum )
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if ( ! pFnShowAchievementsUI )
		pFnShowAchievementsUI = (UFunction*) UObject::GObjObjects()->Data[ 28665 ];

	USFXOnlineComponentPlatformPS3_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.byLocalUserNum = byLocalUserNum;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL );

	pFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )

bool USFXOnlineComponentPlatformPS3::ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId )
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if ( ! pFnShowFeedbackUI )
		pFnShowFeedbackUI = (UFunction*) UObject::GObjObjects()->Data[ 28661 ];

	USFXOnlineComponentPlatformPS3_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowFeedbackUI_Parms.oPlayerId, &oPlayerId, 0x8 );

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL );

	pFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )

bool USFXOnlineComponentPlatformPS3::ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId )
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if ( ! pFnShowGamerCardUI )
		pFnShowGamerCardUI = (UFunction*) UObject::GObjObjects()->Data[ 28657 ];

	USFXOnlineComponentPlatformPS3_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.eLocalUserNum = eLocalUserNum;
	memcpy ( &ShowGamerCardUI_Parms.oPlayerId, &oPlayerId, 0x8 );

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL );

	pFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPS3::CanShowPresenceInformation ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 28654 ];

	USFXOnlineComponentPlatformPS3_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanShowPresenceInformation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	pFnCanShowPresenceInformation->FunctionFlags |= 0x400;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPS3::CanViewPlayerProfiles ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 28651 ];

	USFXOnlineComponentPlatformPS3_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanViewPlayerProfiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	pFnCanViewPlayerProfiles->FunctionFlags |= 0x400;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPS3::CanPurchaseContent ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 28648 ];

	USFXOnlineComponentPlatformPS3_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanPurchaseContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	pFnCanPurchaseContent->FunctionFlags |= 0x400;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPS3::CanDownloadUserContent ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 28645 ];

	USFXOnlineComponentPlatformPS3_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanDownloadUserContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	pFnCanDownloadUserContent->FunctionFlags |= 0x400;

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPS3::CanCommunicate ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 28642 ];

	USFXOnlineComponentPlatformPS3_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanPlayOnline
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPS3::CanPlayOnline ( unsigned char eLocalUserNum )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 28639 ];

	USFXOnlineComponentPlatformPS3_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.eLocalUserNum = eLocalUserNum;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.SetRichPresence
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eLocalUserNum                  ( CPF_Parm )
// int                            nPresenceMode                  ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > aLocalizedStringSettings       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > aProperties                    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXOnlineComponentPlatformPS3::SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, TArray< struct FLocalizedStringSetting >* aLocalizedStringSettings, TArray< struct FSettingsProperty >* aProperties )
{
	static UFunction* pFnSetRichPresence = NULL;

	if ( ! pFnSetRichPresence )
		pFnSetRichPresence = (UFunction*) UObject::GObjObjects()->Data[ 28632 ];

	USFXOnlineComponentPlatformPS3_execSetRichPresence_Parms SetRichPresence_Parms;
	SetRichPresence_Parms.eLocalUserNum = eLocalUserNum;
	SetRichPresence_Parms.nPresenceMode = nPresenceMode;

	pFnSetRichPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRichPresence, &SetRichPresence_Parms, NULL );

	pFnSetRichPresence->FunctionFlags |= 0x400;

	if ( aLocalizedStringSettings )
		memcpy ( aLocalizedStringSettings, &SetRichPresence_Parms.aLocalizedStringSettings, 0xC );

	if ( aProperties )
		memcpy ( aProperties, &SetRichPresence_Parms.aProperties, 0xC );
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowLoginUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineComponentPlatformPS3::ShowLoginUI ( unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 28629 ];

	USFXOnlineComponentPlatformPS3_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	pFnShowLoginUI->FunctionFlags |= 0x400;

	return ShowLoginUI_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eLocalUserNum                  ( CPF_Parm )

unsigned char USFXOnlineComponentPlatformPS3::GetLoginStatus ( unsigned char eLocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 28626 ];

	USFXOnlineComponentPlatformPS3_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.eLocalUserNum = eLocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.AddRecentPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            oPlayerId                      ( CPF_Parm )
// struct FString                 sDescription                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool USFXOnlineComponentPlatformPS3::AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription )
{
	static UFunction* pFnAddRecentPlayer = NULL;

	if ( ! pFnAddRecentPlayer )
		pFnAddRecentPlayer = (UFunction*) UObject::GObjObjects()->Data[ 28622 ];

	USFXOnlineComponentPlatformPS3_execAddRecentPlayer_Parms AddRecentPlayer_Parms;
	memcpy ( &AddRecentPlayer_Parms.oPlayerId, &oPlayerId, 0x8 );
	memcpy ( &AddRecentPlayer_Parms.sDescription, &sDescription, 0xC );

	pFnAddRecentPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddRecentPlayer, &AddRecentPlayer_Parms, NULL );

	pFnAddRecentPlayer->FunctionFlags |= 0x400;

	return AddRecentPlayer_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

void USFXOnlineComponentPlatformPS3::OnTick ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnOnTick = NULL;

	if ( ! pFnOnTick )
		pFnOnTick = (UFunction*) UObject::GObjObjects()->Data[ 28620 ];

	USFXOnlineComponentPlatformPS3_execOnTick_Parms OnTick_Parms;
	OnTick_Parms.oEvent = oEvent;

	pFnOnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnTick, &OnTick_Parms, NULL );

	pFnOnTick->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetAPIName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineComponentPlatformPS3::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 28618 ];

	USFXOnlineComponentPlatformPS3_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnRelease
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentPlatformPS3::OnRelease ( )
{
	static UFunction* pFnOnRelease = NULL;

	if ( ! pFnOnRelease )
		pFnOnRelease = (UFunction*) UObject::GObjObjects()->Data[ 28617 ];

	USFXOnlineComponentPlatformPS3_execOnRelease_Parms OnRelease_Parms;

	pFnOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRelease, &OnRelease_Parms, NULL );

	pFnOnRelease->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnInitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineSubsystem*     oOnlineSubsystem               ( CPF_Parm )

void USFXOnlineComponentPlatformPS3::OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem )
{
	static UFunction* pFnOnInitialize = NULL;

	if ( ! pFnOnInitialize )
		pFnOnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 28615 ];

	USFXOnlineComponentPlatformPS3_execOnInitialize_Parms OnInitialize_Parms;
	OnInitialize_Parms.oOnlineSubsystem = oOnlineSubsystem;

	pFnOnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInitialize, &OnInitialize_Parms, NULL );

	pFnOnInitialize->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlaze.GetAPIName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineComponentBlaze::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 28226 ];

	USFXOnlineComponentBlaze_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

void USFXOnlineComponentBlazeHub::OnTick ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnOnTick = NULL;

	if ( ! pFnOnTick )
		pFnOnTick = (UFunction*) UObject::GObjObjects()->Data[ 28242 ];

	USFXOnlineComponentBlazeHub_execOnTick_Parms OnTick_Parms;
	OnTick_Parms.oEvent = oEvent;

	pFnOnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnTick, &OnTick_Parms, NULL );

	pFnOnTick->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.GetAPIName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineComponentBlazeHub::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 28240 ];

	USFXOnlineComponentBlazeHub_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.ConnectDirtySock
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineComponentBlazeHub::ConnectDirtySock ( )
{
	static UFunction* pFnConnectDirtySock = NULL;

	if ( ! pFnConnectDirtySock )
		pFnConnectDirtySock = (UFunction*) UObject::GObjObjects()->Data[ 28238 ];

	USFXOnlineComponentBlazeHub_execConnectDirtySock_Parms ConnectDirtySock_Parms;

	pFnConnectDirtySock->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConnectDirtySock, &ConnectDirtySock_Parms, NULL );

	pFnConnectDirtySock->FunctionFlags |= 0x400;

	return ConnectDirtySock_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.OnRelease
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeHub::OnRelease ( )
{
	static UFunction* pFnOnRelease = NULL;

	if ( ! pFnOnRelease )
		pFnOnRelease = (UFunction*) UObject::GObjObjects()->Data[ 28237 ];

	USFXOnlineComponentBlazeHub_execOnRelease_Parms OnRelease_Parms;

	pFnOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRelease, &OnRelease_Parms, NULL );

	pFnOnRelease->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.OnInitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineSubsystem*     oOnlineSubsystem               ( CPF_Parm )

void USFXOnlineComponentBlazeHub::OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem )
{
	static UFunction* pFnOnInitialize = NULL;

	if ( ! pFnOnInitialize )
		pFnOnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 28235 ];

	USFXOnlineComponentBlazeHub_execOnInitialize_Parms OnInitialize_Parms;
	OnInitialize_Parms.oOnlineSubsystem = oOnlineSubsystem;

	pFnOnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInitialize, &OnInitialize_Parms, NULL );

	pFnOnInitialize->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetConnectionState
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char USFXOnlineComponentBlazeLogin::GetConnectionState ( )
{
	static UFunction* pFnGetConnectionState = NULL;

	if ( ! pFnGetConnectionState )
		pFnGetConnectionState = (UFunction*) UObject::GObjObjects()->Data[ 28402 ];

	USFXOnlineComponentBlazeLogin_execGetConnectionState_Parms GetConnectionState_Parms;

	pFnGetConnectionState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetConnectionState, &GetConnectionState_Parms, NULL );

	pFnGetConnectionState->FunctionFlags |= 0x400;

	return GetConnectionState_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.ComputeTargetOfferURL
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  nSource                        ( CPF_Parm )

struct FString USFXOnlineComponentBlazeLogin::ComputeTargetOfferURL ( unsigned char nSource )
{
	static UFunction* pFnComputeTargetOfferURL = NULL;

	if ( ! pFnComputeTargetOfferURL )
		pFnComputeTargetOfferURL = (UFunction*) UObject::GObjObjects()->Data[ 28399 ];

	USFXOnlineComponentBlazeLogin_execComputeTargetOfferURL_Parms ComputeTargetOfferURL_Parms;
	ComputeTargetOfferURL_Parms.nSource = nSource;

	pFnComputeTargetOfferURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnComputeTargetOfferURL, &ComputeTargetOfferURL_Parms, NULL );

	pFnComputeTargetOfferURL->FunctionFlags |= 0x400;

	return ComputeTargetOfferURL_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetTargetOfferURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXOnlineComponentBlazeLogin::GetTargetOfferURL ( )
{
	static UFunction* pFnGetTargetOfferURL = NULL;

	if ( ! pFnGetTargetOfferURL )
		pFnGetTargetOfferURL = (UFunction*) UObject::GObjObjects()->Data[ 28397 ];

	USFXOnlineComponentBlazeLogin_execGetTargetOfferURL_Parms GetTargetOfferURL_Parms;

	pFnGetTargetOfferURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTargetOfferURL, &GetTargetOfferURL_Parms, NULL );

	pFnGetTargetOfferURL->FunctionFlags |= 0x400;

	return GetTargetOfferURL_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char USFXOnlineComponentBlazeLogin::CanShowPresenceInformation ( int nUserIndex )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 28394 ];

	USFXOnlineComponentBlazeLogin_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.nUserIndex = nUserIndex;

	pFnCanShowPresenceInformation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	pFnCanShowPresenceInformation->FunctionFlags |= 0x400;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char USFXOnlineComponentBlazeLogin::CanViewPlayerProfiles ( int nUserIndex )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 28391 ];

	USFXOnlineComponentBlazeLogin_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.nUserIndex = nUserIndex;

	pFnCanViewPlayerProfiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	pFnCanViewPlayerProfiles->FunctionFlags |= 0x400;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char USFXOnlineComponentBlazeLogin::CanPurchaseContent ( int nUserIndex )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 28388 ];

	USFXOnlineComponentBlazeLogin_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.nUserIndex = nUserIndex;

	pFnCanPurchaseContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	pFnCanPurchaseContent->FunctionFlags |= 0x400;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char USFXOnlineComponentBlazeLogin::CanDownloadUserContent ( int nUserIndex )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 28385 ];

	USFXOnlineComponentBlazeLogin_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.nUserIndex = nUserIndex;

	pFnCanDownloadUserContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	pFnCanDownloadUserContent->FunctionFlags |= 0x400;

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char USFXOnlineComponentBlazeLogin::CanCommunicate ( int nUserIndex )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 28382 ];

	USFXOnlineComponentBlazeLogin_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.nUserIndex = nUserIndex;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanPlayOnline
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nUserIndex                     ( CPF_OptionalParm | CPF_Parm )

unsigned char USFXOnlineComponentBlazeLogin::CanPlayOnline ( int nUserIndex )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 28379 ];

	USFXOnlineComponentBlazeLogin_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.nUserIndex = nUserIndex;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnDownloadOffersUICompleted
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::OnDownloadOffersUICompleted ( )
{
	static UFunction* pFnOnDownloadOffersUICompleted = NULL;

	if ( ! pFnOnDownloadOffersUICompleted )
		pFnOnDownloadOffersUICompleted = (UFunction*) UObject::GObjObjects()->Data[ 28378 ];

	USFXOnlineComponentBlazeLogin_execOnDownloadOffersUICompleted_Parms OnDownloadOffersUICompleted_Parms;

	pFnOnDownloadOffersUICompleted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDownloadOffersUICompleted, &OnDownloadOffersUICompleted_Parms, NULL );

	pFnOnDownloadOffersUICompleted->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnDLCInfoLoaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::OnDLCInfoLoaded ( )
{
	static UFunction* pFnOnDLCInfoLoaded = NULL;

	if ( ! pFnOnDLCInfoLoaded )
		pFnOnDLCInfoLoaded = (UFunction*) UObject::GObjObjects()->Data[ 28377 ];

	USFXOnlineComponentBlazeLogin_execOnDLCInfoLoaded_Parms OnDLCInfoLoaded_Parms;

	pFnOnDLCInfoLoaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDLCInfoLoaded, &OnDLCInfoLoaded_Parms, NULL );

	pFnOnDLCInfoLoaded->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OpenCerberusUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::OpenCerberusUI ( )
{
	static UFunction* pFnOpenCerberusUI = NULL;

	if ( ! pFnOpenCerberusUI )
		pFnOpenCerberusUI = (UFunction*) UObject::GObjObjects()->Data[ 28376 ];

	USFXOnlineComponentBlazeLogin_execOpenCerberusUI_Parms OpenCerberusUI_Parms;

	pFnOpenCerberusUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenCerberusUI, &OpenCerberusUI_Parms, NULL );

	pFnOpenCerberusUI->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.EnterCDKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sKey                           ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentBlazeLogin::EnterCDKey ( struct FString sKey )
{
	static UFunction* pFnEnterCDKey = NULL;

	if ( ! pFnEnterCDKey )
		pFnEnterCDKey = (UFunction*) UObject::GObjObjects()->Data[ 28374 ];

	USFXOnlineComponentBlazeLogin_execEnterCDKey_Parms EnterCDKey_Parms;
	memcpy ( &EnterCDKey_Parms.sKey, &sKey, 0xC );

	pFnEnterCDKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnterCDKey, &EnterCDKey_Parms, NULL );

	pFnEnterCDKey->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Buy
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  nPurchaseSource                ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::Buy ( unsigned char nPurchaseSource )
{
	static UFunction* pFnBuy = NULL;

	if ( ! pFnBuy )
		pFnBuy = (UFunction*) UObject::GObjObjects()->Data[ 28372 ];

	USFXOnlineComponentBlazeLogin_execBuy_Parms Buy_Parms;
	Buy_Parms.nPurchaseSource = nPurchaseSource;

	pFnBuy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBuy, &Buy_Parms, NULL );

	pFnBuy->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GrantEntitlement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sGroup                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sTag                           ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentBlazeLogin::GrantEntitlement ( struct FString sGroup, struct FString sTag )
{
	static UFunction* pFnGrantEntitlement = NULL;

	if ( ! pFnGrantEntitlement )
		pFnGrantEntitlement = (UFunction*) UObject::GObjObjects()->Data[ 28369 ];

	USFXOnlineComponentBlazeLogin_execGrantEntitlement_Parms GrantEntitlement_Parms;
	memcpy ( &GrantEntitlement_Parms.sGroup, &sGroup, 0xC );
	memcpy ( &GrantEntitlement_Parms.sTag, &sTag, 0xC );

	pFnGrantEntitlement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGrantEntitlement, &GrantEntitlement_Parms, NULL );

	pFnGrantEntitlement->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CheckEntitlement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sGroup                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sTag                           ( CPF_Parm | CPF_NeedCtorLink )

bool USFXOnlineComponentBlazeLogin::CheckEntitlement ( struct FString sGroup, struct FString sTag )
{
	static UFunction* pFnCheckEntitlement = NULL;

	if ( ! pFnCheckEntitlement )
		pFnCheckEntitlement = (UFunction*) UObject::GObjObjects()->Data[ 28365 ];

	USFXOnlineComponentBlazeLogin_execCheckEntitlement_Parms CheckEntitlement_Parms;
	memcpy ( &CheckEntitlement_Parms.sGroup, &sGroup, 0xC );
	memcpy ( &CheckEntitlement_Parms.sTag, &sTag, 0xC );

	pFnCheckEntitlement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckEntitlement, &CheckEntitlement_Parms, NULL );

	pFnCheckEntitlement->FunctionFlags |= 0x400;

	return CheckEntitlement_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.BuildEntitlementList
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bFirstCallUponLogin            ( CPF_Parm )
// int                            nPage                          ( CPF_OptionalParm | CPF_Parm )

bool USFXOnlineComponentBlazeLogin::BuildEntitlementList ( unsigned long bFirstCallUponLogin, int nPage )
{
	static UFunction* pFnBuildEntitlementList = NULL;

	if ( ! pFnBuildEntitlementList )
		pFnBuildEntitlementList = (UFunction*) UObject::GObjObjects()->Data[ 28361 ];

	USFXOnlineComponentBlazeLogin_execBuildEntitlementList_Parms BuildEntitlementList_Parms;
	BuildEntitlementList_Parms.bFirstCallUponLogin = bFirstCallUponLogin;
	BuildEntitlementList_Parms.nPage = nPage;

	pFnBuildEntitlementList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBuildEntitlementList, &BuildEntitlementList_Parms, NULL );

	pFnBuildEntitlementList->FunctionFlags |= 0x400;

	return BuildEntitlementList_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsCerberusMember
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineComponentBlazeLogin::IsCerberusMember ( )
{
	static UFunction* pFnIsCerberusMember = NULL;

	if ( ! pFnIsCerberusMember )
		pFnIsCerberusMember = (UFunction*) UObject::GObjObjects()->Data[ 28359 ];

	USFXOnlineComponentBlazeLogin_execIsCerberusMember_Parms IsCerberusMember_Parms;

	pFnIsCerberusMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCerberusMember, &IsCerberusMember_Parms, NULL );

	pFnIsCerberusMember->FunctionFlags |= 0x400;

	return IsCerberusMember_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.DisablePersona
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPersonaNonGrata               ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentBlazeLogin::DisablePersona ( struct FString sPersonaNonGrata )
{
	static UFunction* pFnDisablePersona = NULL;

	if ( ! pFnDisablePersona )
		pFnDisablePersona = (UFunction*) UObject::GObjObjects()->Data[ 28357 ];

	USFXOnlineComponentBlazeLogin_execDisablePersona_Parms DisablePersona_Parms;
	memcpy ( &DisablePersona_Parms.sPersonaNonGrata, &sPersonaNonGrata, 0xC );

	pFnDisablePersona->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisablePersona, &DisablePersona_Parms, NULL );

	pFnDisablePersona->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CreatePersona
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPersonaName                   ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentBlazeLogin::CreatePersona ( struct FString sPersonaName )
{
	static UFunction* pFnCreatePersona = NULL;

	if ( ! pFnCreatePersona )
		pFnCreatePersona = (UFunction*) UObject::GObjObjects()->Data[ 28355 ];

	USFXOnlineComponentBlazeLogin_execCreatePersona_Parms CreatePersona_Parms;
	memcpy ( &CreatePersona_Parms.sPersonaName, &sPersonaName, 0xC );

	pFnCreatePersona->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreatePersona, &CreatePersona_Parms, NULL );

	pFnCreatePersona->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SelectPersona
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPersonaName                   ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentBlazeLogin::SelectPersona ( struct FString sPersonaName )
{
	static UFunction* pFnSelectPersona = NULL;

	if ( ! pFnSelectPersona )
		pFnSelectPersona = (UFunction*) UObject::GObjObjects()->Data[ 28353 ];

	USFXOnlineComponentBlazeLogin_execSelectPersona_Parms SelectPersona_Parms;
	memcpy ( &SelectPersona_Parms.sPersonaName, &sPersonaName, 0xC );

	pFnSelectPersona->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectPersona, &SelectPersona_Parms, NULL );

	pFnSelectPersona->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.AcceptTOS
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bAccepted                      ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::AcceptTOS ( unsigned long bAccepted )
{
	static UFunction* pFnAcceptTOS = NULL;

	if ( ! pFnAcceptTOS )
		pFnAcceptTOS = (UFunction*) UObject::GObjObjects()->Data[ 28351 ];

	USFXOnlineComponentBlazeLogin_execAcceptTOS_Parms AcceptTOS_Parms;
	AcceptTOS_Parms.bAccepted = bAccepted;

	pFnAcceptTOS->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptTOS, &AcceptTOS_Parms, NULL );

	pFnAcceptTOS->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Disconnect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::Disconnect ( )
{
	static UFunction* pFnDisconnect = NULL;

	if ( ! pFnDisconnect )
		pFnDisconnect = (UFunction*) UObject::GObjObjects()->Data[ 28350 ];

	USFXOnlineComponentBlazeLogin_execDisconnect_Parms Disconnect_Parms;

	pFnDisconnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisconnect, &Disconnect_Parms, NULL );

	pFnDisconnect->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CompleteLoginProcess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::CompleteLoginProcess ( )
{
	static UFunction* pFnCompleteLoginProcess = NULL;

	if ( ! pFnCompleteLoginProcess )
		pFnCompleteLoginProcess = (UFunction*) UObject::GObjObjects()->Data[ 28349 ];

	USFXOnlineComponentBlazeLogin_execCompleteLoginProcess_Parms CompleteLoginProcess_Parms;

	pFnCompleteLoginProcess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCompleteLoginProcess, &CompleteLoginProcess_Parms, NULL );

	pFnCompleteLoginProcess->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.StartCerberusLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::StartCerberusLogin ( )
{
	static UFunction* pFnStartCerberusLogin = NULL;

	if ( ! pFnStartCerberusLogin )
		pFnStartCerberusLogin = (UFunction*) UObject::GObjObjects()->Data[ 28348 ];

	USFXOnlineComponentBlazeLogin_execStartCerberusLogin_Parms StartCerberusLogin_Parms;

	pFnStartCerberusLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartCerberusLogin, &StartCerberusLogin_Parms, NULL );

	pFnStartCerberusLogin->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitStore
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< int >                  aiChosen                       ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentBlazeLogin::SubmitStore ( TArray< int > aiChosen )
{
	static UFunction* pFnSubmitStore = NULL;

	if ( ! pFnSubmitStore )
		pFnSubmitStore = (UFunction*) UObject::GObjObjects()->Data[ 28345 ];

	USFXOnlineComponentBlazeLogin_execSubmitStore_Parms SubmitStore_Parms;
	memcpy ( &SubmitStore_Parms.aiChosen, &aiChosen, 0xC );

	pFnSubmitStore->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitStore, &SubmitStore_Parms, NULL );

	pFnSubmitStore->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEmail                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sPassword                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bEAProducts                    ( CPF_Parm )
// unsigned long                  bThirdParty                    ( CPF_Parm )
// unsigned long                  bBioWareProducts               ( CPF_Parm )
// struct FString                 i_sCountryCode                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            BirthDay                       ( CPF_Parm )
// int                            BirthMonth                     ( CPF_Parm )
// int                            BirthYear                      ( CPF_Parm )
// struct FString                 i_sLanguageCode                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bSubmit                        ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::SubmitCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, unsigned long bSubmit )
{
	static UFunction* pFnSubmitCreateNucleusAccountEx = NULL;

	if ( ! pFnSubmitCreateNucleusAccountEx )
		pFnSubmitCreateNucleusAccountEx = (UFunction*) UObject::GObjObjects()->Data[ 28333 ];

	USFXOnlineComponentBlazeLogin_execSubmitCreateNucleusAccountEx_Parms SubmitCreateNucleusAccountEx_Parms;
	memcpy ( &SubmitCreateNucleusAccountEx_Parms.sEmail, &sEmail, 0xC );
	memcpy ( &SubmitCreateNucleusAccountEx_Parms.sPassword, &sPassword, 0xC );
	SubmitCreateNucleusAccountEx_Parms.bEAProducts = bEAProducts;
	SubmitCreateNucleusAccountEx_Parms.bThirdParty = bThirdParty;
	SubmitCreateNucleusAccountEx_Parms.bBioWareProducts = bBioWareProducts;
	memcpy ( &SubmitCreateNucleusAccountEx_Parms.i_sCountryCode, &i_sCountryCode, 0xC );
	SubmitCreateNucleusAccountEx_Parms.BirthDay = BirthDay;
	SubmitCreateNucleusAccountEx_Parms.BirthMonth = BirthMonth;
	SubmitCreateNucleusAccountEx_Parms.BirthYear = BirthYear;
	memcpy ( &SubmitCreateNucleusAccountEx_Parms.i_sLanguageCode, &i_sLanguageCode, 0xC );
	SubmitCreateNucleusAccountEx_Parms.bSubmit = bSubmit;

	pFnSubmitCreateNucleusAccountEx->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitCreateNucleusAccountEx, &SubmitCreateNucleusAccountEx_Parms, NULL );

	pFnSubmitCreateNucleusAccountEx->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Email                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// int                            eReturnCode                    ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::SubmitEmailPasswordMismatch ( struct FString Email, struct FString Password, int eReturnCode )
{
	static UFunction* pFnSubmitEmailPasswordMismatch = NULL;

	if ( ! pFnSubmitEmailPasswordMismatch )
		pFnSubmitEmailPasswordMismatch = (UFunction*) UObject::GObjObjects()->Data[ 28329 ];

	USFXOnlineComponentBlazeLogin_execSubmitEmailPasswordMismatch_Parms SubmitEmailPasswordMismatch_Parms;
	memcpy ( &SubmitEmailPasswordMismatch_Parms.Email, &Email, 0xC );
	memcpy ( &SubmitEmailPasswordMismatch_Parms.Password, &Password, 0xC );
	SubmitEmailPasswordMismatch_Parms.eReturnCode = eReturnCode;

	pFnSubmitEmailPasswordMismatch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitEmailPasswordMismatch, &SubmitEmailPasswordMismatch_Parms, NULL );

	pFnSubmitEmailPasswordMismatch->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitMessageBox
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            eReturnCode                    ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::SubmitMessageBox ( int eReturnCode )
{
	static UFunction* pFnSubmitMessageBox = NULL;

	if ( ! pFnSubmitMessageBox )
		pFnSubmitMessageBox = (UFunction*) UObject::GObjObjects()->Data[ 28327 ];

	USFXOnlineComponentBlazeLogin_execSubmitMessageBox_Parms SubmitMessageBox_Parms;
	SubmitMessageBox_Parms.eReturnCode = eReturnCode;

	pFnSubmitMessageBox->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitMessageBox, &SubmitMessageBox_Parms, NULL );

	pFnSubmitMessageBox->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitRedeemCode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bContinue                      ( CPF_Parm )
// struct FString                 i_sCode                        ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentBlazeLogin::SubmitRedeemCode ( unsigned long bContinue, struct FString i_sCode )
{
	static UFunction* pFnSubmitRedeemCode = NULL;

	if ( ! pFnSubmitRedeemCode )
		pFnSubmitRedeemCode = (UFunction*) UObject::GObjObjects()->Data[ 28324 ];

	USFXOnlineComponentBlazeLogin_execSubmitRedeemCode_Parms SubmitRedeemCode_Parms;
	SubmitRedeemCode_Parms.bContinue = bContinue;
	memcpy ( &SubmitRedeemCode_Parms.i_sCode, &i_sCode, 0xC );

	pFnSubmitRedeemCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitRedeemCode, &SubmitRedeemCode_Parms, NULL );

	pFnSubmitRedeemCode->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::SubmitCerberusWelcomeMessage ( )
{
	static UFunction* pFnSubmitCerberusWelcomeMessage = NULL;

	if ( ! pFnSubmitCerberusWelcomeMessage )
		pFnSubmitCerberusWelcomeMessage = (UFunction*) UObject::GObjObjects()->Data[ 28323 ];

	USFXOnlineComponentBlazeLogin_execSubmitCerberusWelcomeMessage_Parms SubmitCerberusWelcomeMessage_Parms;

	pFnSubmitCerberusWelcomeMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitCerberusWelcomeMessage, &SubmitCerberusWelcomeMessage_Parms, NULL );

	pFnSubmitCerberusWelcomeMessage->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCerberusIntro
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            eReturnCode                    ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::SubmitCerberusIntro ( int eReturnCode )
{
	static UFunction* pFnSubmitCerberusIntro = NULL;

	if ( ! pFnSubmitCerberusIntro )
		pFnSubmitCerberusIntro = (UFunction*) UObject::GObjObjects()->Data[ 28321 ];

	USFXOnlineComponentBlazeLogin_execSubmitCerberusIntro_Parms SubmitCerberusIntro_Parms;
	SubmitCerberusIntro_Parms.eReturnCode = eReturnCode;

	pFnSubmitCerberusIntro->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitCerberusIntro, &SubmitCerberusIntro_Parms, NULL );

	pFnSubmitCerberusIntro->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::SubmitNucleusWelcomeMessage ( )
{
	static UFunction* pFnSubmitNucleusWelcomeMessage = NULL;

	if ( ! pFnSubmitNucleusWelcomeMessage )
		pFnSubmitNucleusWelcomeMessage = (UFunction*) UObject::GObjObjects()->Data[ 28320 ];

	USFXOnlineComponentBlazeLogin_execSubmitNucleusWelcomeMessage_Parms SubmitNucleusWelcomeMessage_Parms;

	pFnSubmitNucleusWelcomeMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitNucleusWelcomeMessage, &SubmitNucleusWelcomeMessage_Parms, NULL );

	pFnSubmitNucleusWelcomeMessage->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEmail                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sPassword                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bEAProducts                    ( CPF_Parm )
// unsigned long                  bThirdParty                    ( CPF_Parm )
// unsigned long                  bBioWareProducts               ( CPF_Parm )
// unsigned long                  bSubmit                        ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::SubmitCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, unsigned long bSubmit )
{
	static UFunction* pFnSubmitCreateNucleusAccount = NULL;

	if ( ! pFnSubmitCreateNucleusAccount )
		pFnSubmitCreateNucleusAccount = (UFunction*) UObject::GObjObjects()->Data[ 28313 ];

	USFXOnlineComponentBlazeLogin_execSubmitCreateNucleusAccount_Parms SubmitCreateNucleusAccount_Parms;
	memcpy ( &SubmitCreateNucleusAccount_Parms.sEmail, &sEmail, 0xC );
	memcpy ( &SubmitCreateNucleusAccount_Parms.sPassword, &sPassword, 0xC );
	SubmitCreateNucleusAccount_Parms.bEAProducts = bEAProducts;
	SubmitCreateNucleusAccount_Parms.bThirdParty = bThirdParty;
	SubmitCreateNucleusAccount_Parms.bBioWareProducts = bBioWareProducts;
	SubmitCreateNucleusAccount_Parms.bSubmit = bSubmit;

	pFnSubmitCreateNucleusAccount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitCreateNucleusAccount, &SubmitCreateNucleusAccount_Parms, NULL );

	pFnSubmitCreateNucleusAccount->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitParentEmail
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bContinue                      ( CPF_Parm )
// struct FString                 ParentEmail                    ( CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentBlazeLogin::SubmitParentEmail ( unsigned long bContinue, struct FString ParentEmail )
{
	static UFunction* pFnSubmitParentEmail = NULL;

	if ( ! pFnSubmitParentEmail )
		pFnSubmitParentEmail = (UFunction*) UObject::GObjObjects()->Data[ 28310 ];

	USFXOnlineComponentBlazeLogin_execSubmitParentEmail_Parms SubmitParentEmail_Parms;
	SubmitParentEmail_Parms.bContinue = bContinue;
	memcpy ( &SubmitParentEmail_Parms.ParentEmail, &ParentEmail, 0xC );

	pFnSubmitParentEmail->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitParentEmail, &SubmitParentEmail_Parms, NULL );

	pFnSubmitParentEmail->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitNucleusLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Email                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  eReturnCode                    ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::SubmitNucleusLogin ( struct FString Email, struct FString Password, unsigned char eReturnCode )
{
	static UFunction* pFnSubmitNucleusLogin = NULL;

	if ( ! pFnSubmitNucleusLogin )
		pFnSubmitNucleusLogin = (UFunction*) UObject::GObjObjects()->Data[ 28306 ];

	USFXOnlineComponentBlazeLogin_execSubmitNucleusLogin_Parms SubmitNucleusLogin_Parms;
	memcpy ( &SubmitNucleusLogin_Parms.Email, &Email, 0xC );
	memcpy ( &SubmitNucleusLogin_Parms.Password, &Password, 0xC );
	SubmitNucleusLogin_Parms.eReturnCode = eReturnCode;

	pFnSubmitNucleusLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitNucleusLogin, &SubmitNucleusLogin_Parms, NULL );

	pFnSubmitNucleusLogin->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitIntroPage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bContinue                      ( CPF_Parm )
// unsigned long                  bSimulated                     ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::SubmitIntroPage ( unsigned long bContinue, unsigned long bSimulated )
{
	static UFunction* pFnSubmitIntroPage = NULL;

	if ( ! pFnSubmitIntroPage )
		pFnSubmitIntroPage = (UFunction*) UObject::GObjObjects()->Data[ 28303 ];

	USFXOnlineComponentBlazeLogin_execSubmitIntroPage_Parms SubmitIntroPage_Parms;
	SubmitIntroPage_Parms.bContinue = bContinue;
	SubmitIntroPage_Parms.bSimulated = bSimulated;

	pFnSubmitIntroPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitIntroPage, &SubmitIntroPage_Parms, NULL );

	pFnSubmitIntroPage->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Connect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  connectMode                    ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::Connect ( unsigned char connectMode )
{
	static UFunction* pFnConnect = NULL;

	if ( ! pFnConnect )
		pFnConnect = (UFunction*) UObject::GObjObjects()->Data[ 28301 ];

	USFXOnlineComponentBlazeLogin_execConnect_Parms Connect_Parms;
	Connect_Parms.connectMode = connectMode;

	pFnConnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConnect, &Connect_Parms, NULL );

	pFnConnect->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GoBackInUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::GoBackInUI ( )
{
	static UFunction* pFnGoBackInUI = NULL;

	if ( ! pFnGoBackInUI )
		pFnGoBackInUI = (UFunction*) UObject::GObjObjects()->Data[ 28300 ];

	USFXOnlineComponentBlazeLogin_execGoBackInUI_Parms GoBackInUI_Parms;

	pFnGoBackInUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGoBackInUI, &GoBackInUI_Parms, NULL );

	pFnGoBackInUI->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Cancel
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::Cancel ( )
{
	static UFunction* pFnCancel = NULL;

	if ( ! pFnCancel )
		pFnCancel = (UFunction*) UObject::GObjObjects()->Data[ 28299 ];

	USFXOnlineComponentBlazeLogin_execCancel_Parms Cancel_Parms;

	pFnCancel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancel, &Cancel_Parms, NULL );

	pFnCancel->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetUserId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FUniqueNetId USFXOnlineComponentBlazeLogin::GetUserId ( )
{
	static UFunction* pFnGetUserId = NULL;

	if ( ! pFnGetUserId )
		pFnGetUserId = (UFunction*) UObject::GObjObjects()->Data[ 28297 ];

	USFXOnlineComponentBlazeLogin_execGetUserId_Parms GetUserId_Parms;

	pFnGetUserId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUserId, &GetUserId_Parms, NULL );

	pFnGetUserId->FunctionFlags |= 0x400;

	return GetUserId_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetPersonaName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXOnlineComponentBlazeLogin::GetPersonaName ( )
{
	static UFunction* pFnGetPersonaName = NULL;

	if ( ! pFnGetPersonaName )
		pFnGetPersonaName = (UFunction*) UObject::GObjObjects()->Data[ 28295 ];

	USFXOnlineComponentBlazeLogin_execGetPersonaName_Parms GetPersonaName_Parms;

	pFnGetPersonaName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPersonaName, &GetPersonaName_Parms, NULL );

	pFnGetPersonaName->FunctionFlags |= 0x400;

	return GetPersonaName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsLive
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineComponentBlazeLogin::IsLive ( )
{
	static UFunction* pFnIsLive = NULL;

	if ( ! pFnIsLive )
		pFnIsLive = (UFunction*) UObject::GObjObjects()->Data[ 28293 ];

	USFXOnlineComponentBlazeLogin_execIsLive_Parms IsLive_Parms;

	pFnIsLive->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLive, &IsLive_Parms, NULL );

	pFnIsLive->FunctionFlags |= 0x400;

	return IsLive_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsSignedIn
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineComponentBlazeLogin::IsSignedIn ( )
{
	static UFunction* pFnIsSignedIn = NULL;

	if ( ! pFnIsSignedIn )
		pFnIsSignedIn = (UFunction*) UObject::GObjObjects()->Data[ 28291 ];

	USFXOnlineComponentBlazeLogin_execIsSignedIn_Parms IsSignedIn_Parms;

	pFnIsSignedIn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsSignedIn, &IsSignedIn_Parms, NULL );

	pFnIsSignedIn->FunctionFlags |= 0x400;

	return IsSignedIn_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXOnlineComponentBlazeLogin::IsConnected ( )
{
	static UFunction* pFnIsConnected = NULL;

	if ( ! pFnIsConnected )
		pFnIsConnected = (UFunction*) UObject::GObjObjects()->Data[ 28289 ];

	USFXOnlineComponentBlazeLogin_execIsConnected_Parms IsConnected_Parms;

	pFnIsConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsConnected, &IsConnected_Parms, NULL );

	pFnIsConnected->FunctionFlags |= 0x400;

	return IsConnected_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SwitchActiveUserIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nNewIndex                      ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::SwitchActiveUserIndex ( int nNewIndex )
{
	static UFunction* pFnSwitchActiveUserIndex = NULL;

	if ( ! pFnSwitchActiveUserIndex )
		pFnSwitchActiveUserIndex = (UFunction*) UObject::GObjObjects()->Data[ 28287 ];

	USFXOnlineComponentBlazeLogin_execSwitchActiveUserIndex_Parms SwitchActiveUserIndex_Parms;
	SwitchActiveUserIndex_Parms.nNewIndex = nNewIndex;

	pFnSwitchActiveUserIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSwitchActiveUserIndex, &SwitchActiveUserIndex_Parms, NULL );

	pFnSwitchActiveUserIndex->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetActiveUserIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXOnlineComponentBlazeLogin::GetActiveUserIndex ( )
{
	static UFunction* pFnGetActiveUserIndex = NULL;

	if ( ! pFnGetActiveUserIndex )
		pFnGetActiveUserIndex = (UFunction*) UObject::GObjObjects()->Data[ 28285 ];

	USFXOnlineComponentBlazeLogin_execGetActiveUserIndex_Parms GetActiveUserIndex_Parms;

	pFnGetActiveUserIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetActiveUserIndex, &GetActiveUserIndex_Parms, NULL );

	pFnGetActiveUserIndex->FunctionFlags |= 0x400;

	return GetActiveUserIndex_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char USFXOnlineComponentBlazeLogin::GetLoginStatus ( )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 28283 ];

	USFXOnlineComponentBlazeLogin_execGetLoginStatus_Parms GetLoginStatus_Parms;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetAPIName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineComponentBlazeLogin::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 28281 ];

	USFXOnlineComponentBlazeLogin_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnRelease
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeLogin::OnRelease ( )
{
	static UFunction* pFnOnRelease = NULL;

	if ( ! pFnOnRelease )
		pFnOnRelease = (UFunction*) UObject::GObjObjects()->Data[ 28280 ];

	USFXOnlineComponentBlazeLogin_execOnRelease_Parms OnRelease_Parms;

	pFnOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRelease, &OnRelease_Parms, NULL );

	pFnOnRelease->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnInitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineSubsystem*     oOnlineSubsystem               ( CPF_Parm )

void USFXOnlineComponentBlazeLogin::OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem )
{
	static UFunction* pFnOnInitialize = NULL;

	if ( ! pFnOnInitialize )
		pFnOnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 28278 ];

	USFXOnlineComponentBlazeLogin_execOnInitialize_Parms OnInitialize_Parms;
	OnInitialize_Parms.oOnlineSubsystem = oOnlineSubsystem;

	pFnOnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInitialize, &OnInitialize_Parms, NULL );

	pFnOnInitialize->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetTargetOfferInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FSFXOnlineTargetOfferInfo ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  nSource                        ( CPF_Parm )

struct FSFXOnlineTargetOfferInfo USFXOnlineComponentBlazeNotification::GetTargetOfferInfo ( unsigned char nSource )
{
	static UFunction* pFnGetTargetOfferInfo = NULL;

	if ( ! pFnGetTargetOfferInfo )
		pFnGetTargetOfferInfo = (UFunction*) UObject::GObjObjects()->Data[ 28460 ];

	USFXOnlineComponentBlazeNotification_execGetTargetOfferInfo_Parms GetTargetOfferInfo_Parms;
	GetTargetOfferInfo_Parms.nSource = nSource;

	pFnGetTargetOfferInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTargetOfferInfo, &GetTargetOfferInfo_Parms, NULL );

	pFnGetTargetOfferInfo->FunctionFlags |= 0x400;

	return GetTargetOfferInfo_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetEntitlementGroups
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSFXOnlineEntitlementGroupInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FSFXOnlineEntitlementGroupInfo > USFXOnlineComponentBlazeNotification::GetEntitlementGroups ( )
{
	static UFunction* pFnGetEntitlementGroups = NULL;

	if ( ! pFnGetEntitlementGroups )
		pFnGetEntitlementGroups = (UFunction*) UObject::GObjObjects()->Data[ 28457 ];

	USFXOnlineComponentBlazeNotification_execGetEntitlementGroups_Parms GetEntitlementGroups_Parms;

	pFnGetEntitlementGroups->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEntitlementGroups, &GetEntitlementGroups_Parms, NULL );

	pFnGetEntitlementGroups->FunctionFlags |= 0x400;

	return GetEntitlementGroups_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.HasUserPurchasedAnOffer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FSFXOnline_OfferID      aOfferId                       ( CPF_Parm )

unsigned char USFXOnlineComponentBlazeNotification::HasUserPurchasedAnOffer ( struct FSFXOnline_OfferID aOfferId )
{
	static UFunction* pFnHasUserPurchasedAnOffer = NULL;

	if ( ! pFnHasUserPurchasedAnOffer )
		pFnHasUserPurchasedAnOffer = (UFunction*) UObject::GObjObjects()->Data[ 28454 ];

	USFXOnlineComponentBlazeNotification_execHasUserPurchasedAnOffer_Parms HasUserPurchasedAnOffer_Parms;
	memcpy ( &HasUserPurchasedAnOffer_Parms.aOfferId, &aOfferId, 0x8 );

	pFnHasUserPurchasedAnOffer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasUserPurchasedAnOffer, &HasUserPurchasedAnOffer_Parms, NULL );

	pFnHasUserPurchasedAnOffer->FunctionFlags |= 0x400;

	return HasUserPurchasedAnOffer_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.DownloadOffers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FSFXOnline_OfferID > aOfferIds                      ( CPF_Parm | CPF_NeedCtorLink )

bool USFXOnlineComponentBlazeNotification::DownloadOffers ( TArray< struct FSFXOnline_OfferID > aOfferIds )
{
	static UFunction* pFnDownloadOffers = NULL;

	if ( ! pFnDownloadOffers )
		pFnDownloadOffers = (UFunction*) UObject::GObjObjects()->Data[ 28450 ];

	USFXOnlineComponentBlazeNotification_execDownloadOffers_Parms DownloadOffers_Parms;
	memcpy ( &DownloadOffers_Parms.aOfferIds, &aOfferIds, 0xC );

	pFnDownloadOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDownloadOffers, &DownloadOffers_Parms, NULL );

	pFnDownloadOffers->FunctionFlags |= 0x400;

	return DownloadOffers_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetOfferKeyIfEntitled
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            internalId                     ( CPF_Parm )

struct FString USFXOnlineComponentBlazeNotification::GetOfferKeyIfEntitled ( int internalId )
{
	static UFunction* pFnGetOfferKeyIfEntitled = NULL;

	if ( ! pFnGetOfferKeyIfEntitled )
		pFnGetOfferKeyIfEntitled = (UFunction*) UObject::GObjObjects()->Data[ 28447 ];

	USFXOnlineComponentBlazeNotification_execGetOfferKeyIfEntitled_Parms GetOfferKeyIfEntitled_Parms;
	GetOfferKeyIfEntitled_Parms.internalId = internalId;

	pFnGetOfferKeyIfEntitled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOfferKeyIfEntitled, &GetOfferKeyIfEntitled_Parms, NULL );

	pFnGetOfferKeyIfEntitled->FunctionFlags |= 0x400;

	return GetOfferKeyIfEntitled_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetGrantingOffers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSFXOfferDescriptor > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FSFXOfferDescriptor > USFXOnlineComponentBlazeNotification::GetGrantingOffers ( )
{
	static UFunction* pFnGetGrantingOffers = NULL;

	if ( ! pFnGetGrantingOffers )
		pFnGetGrantingOffers = (UFunction*) UObject::GObjObjects()->Data[ 28444 ];

	USFXOnlineComponentBlazeNotification_execGetGrantingOffers_Parms GetGrantingOffers_Parms;

	pFnGetGrantingOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGrantingOffers, &GetGrantingOffers_Parms, NULL );

	pFnGetGrantingOffers->FunctionFlags |= 0x400;

	return GetGrantingOffers_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetEntitledDLCInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSFXOfferDescriptor > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FSFXOfferDescriptor > USFXOnlineComponentBlazeNotification::GetEntitledDLCInfo ( )
{
	static UFunction* pFnGetEntitledDLCInfo = NULL;

	if ( ! pFnGetEntitledDLCInfo )
		pFnGetEntitledDLCInfo = (UFunction*) UObject::GObjObjects()->Data[ 28441 ];

	USFXOnlineComponentBlazeNotification_execGetEntitledDLCInfo_Parms GetEntitledDLCInfo_Parms;

	pFnGetEntitledDLCInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEntitledDLCInfo, &GetEntitledDLCInfo_Parms, NULL );

	pFnGetEntitledDLCInfo->FunctionFlags |= 0x400;

	return GetEntitledDLCInfo_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RefreshEntitlementFlags
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeNotification::RefreshEntitlementFlags ( )
{
	static UFunction* pFnRefreshEntitlementFlags = NULL;

	if ( ! pFnRefreshEntitlementFlags )
		pFnRefreshEntitlementFlags = (UFunction*) UObject::GObjObjects()->Data[ 28440 ];

	USFXOnlineComponentBlazeNotification_execRefreshEntitlementFlags_Parms RefreshEntitlementFlags_Parms;

	pFnRefreshEntitlementFlags->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshEntitlementFlags, &RefreshEntitlementFlags_Parms, NULL );

	pFnRefreshEntitlementFlags->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.SetDaysSinceCerberusRegistration
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nDays                          ( CPF_Parm )

void USFXOnlineComponentBlazeNotification::SetDaysSinceCerberusRegistration ( int nDays )
{
	static UFunction* pFnSetDaysSinceCerberusRegistration = NULL;

	if ( ! pFnSetDaysSinceCerberusRegistration )
		pFnSetDaysSinceCerberusRegistration = (UFunction*) UObject::GObjObjects()->Data[ 28438 ];

	USFXOnlineComponentBlazeNotification_execSetDaysSinceCerberusRegistration_Parms SetDaysSinceCerberusRegistration_Parms;
	SetDaysSinceCerberusRegistration_Parms.nDays = nDays;

	pFnSetDaysSinceCerberusRegistration->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDaysSinceCerberusRegistration, &SetDaysSinceCerberusRegistration_Parms, NULL );

	pFnSetDaysSinceCerberusRegistration->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetDaysSinceCerberusRegistration
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXOnlineComponentBlazeNotification::GetDaysSinceCerberusRegistration ( )
{
	static UFunction* pFnGetDaysSinceCerberusRegistration = NULL;

	if ( ! pFnGetDaysSinceCerberusRegistration )
		pFnGetDaysSinceCerberusRegistration = (UFunction*) UObject::GObjObjects()->Data[ 28436 ];

	USFXOnlineComponentBlazeNotification_execGetDaysSinceCerberusRegistration_Parms GetDaysSinceCerberusRegistration_Parms;

	pFnGetDaysSinceCerberusRegistration->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDaysSinceCerberusRegistration, &GetDaysSinceCerberusRegistration_Parms, NULL );

	pFnGetDaysSinceCerberusRegistration->FunctionFlags |= 0x400;

	return GetDaysSinceCerberusRegistration_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.IsCalendarUnlockEarned
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nDay                           ( CPF_Parm )

bool USFXOnlineComponentBlazeNotification::IsCalendarUnlockEarned ( int nDay )
{
	static UFunction* pFnIsCalendarUnlockEarned = NULL;

	if ( ! pFnIsCalendarUnlockEarned )
		pFnIsCalendarUnlockEarned = (UFunction*) UObject::GObjObjects()->Data[ 28433 ];

	USFXOnlineComponentBlazeNotification_execIsCalendarUnlockEarned_Parms IsCalendarUnlockEarned_Parms;
	IsCalendarUnlockEarned_Parms.nDay = nDay;

	pFnIsCalendarUnlockEarned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCalendarUnlockEarned, &IsCalendarUnlockEarned_Parms, NULL );

	pFnIsCalendarUnlockEarned->FunctionFlags |= 0x400;

	return IsCalendarUnlockEarned_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestEntitlementGroupInfo
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeNotification::RequestEntitlementGroupInfo ( )
{
	static UFunction* pFnRequestEntitlementGroupInfo = NULL;

	if ( ! pFnRequestEntitlementGroupInfo )
		pFnRequestEntitlementGroupInfo = (UFunction*) UObject::GObjObjects()->Data[ 28432 ];

	USFXOnlineComponentBlazeNotification_execRequestEntitlementGroupInfo_Parms RequestEntitlementGroupInfo_Parms;

	pFnRequestEntitlementGroupInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestEntitlementGroupInfo, &RequestEntitlementGroupInfo_Parms, NULL );

	pFnRequestEntitlementGroupInfo->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestDLCInfo
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sNextSection                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void USFXOnlineComponentBlazeNotification::RequestDLCInfo ( struct FString sNextSection )
{
	static UFunction* pFnRequestDLCInfo = NULL;

	if ( ! pFnRequestDLCInfo )
		pFnRequestDLCInfo = (UFunction*) UObject::GObjObjects()->Data[ 28430 ];

	USFXOnlineComponentBlazeNotification_execRequestDLCInfo_Parms RequestDLCInfo_Parms;
	memcpy ( &RequestDLCInfo_Parms.sNextSection, &sNextSection, 0xC );

	pFnRequestDLCInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestDLCInfo, &RequestDLCInfo_Parms, NULL );

	pFnRequestDLCInfo->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestServerInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeNotification::RequestServerInfo ( )
{
	static UFunction* pFnRequestServerInfo = NULL;

	if ( ! pFnRequestServerInfo )
		pFnRequestServerInfo = (UFunction*) UObject::GObjObjects()->Data[ 28429 ];

	USFXOnlineComponentBlazeNotification_execRequestServerInfo_Parms RequestServerInfo_Parms;

	pFnRequestServerInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestServerInfo, &RequestServerInfo_Parms, NULL );

	pFnRequestServerInfo->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeNotification::RequestData ( )
{
	static UFunction* pFnRequestData = NULL;

	if ( ! pFnRequestData )
		pFnRequestData = (UFunction*) UObject::GObjObjects()->Data[ 28428 ];

	USFXOnlineComponentBlazeNotification_execRequestData_Parms RequestData_Parms;

	pFnRequestData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestData, &RequestData_Parms, NULL );

	pFnRequestData->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetAPIName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXOnlineComponentBlazeNotification::GetAPIName ( )
{
	static UFunction* pFnGetAPIName = NULL;

	if ( ! pFnGetAPIName )
		pFnGetAPIName = (UFunction*) UObject::GObjObjects()->Data[ 28426 ];

	USFXOnlineComponentBlazeNotification_execGetAPIName_Parms GetAPIName_Parms;

	pFnGetAPIName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAPIName, &GetAPIName_Parms, NULL );

	pFnGetAPIName->FunctionFlags |= 0x400;

	return GetAPIName_Parms.ReturnValue;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.OnRelease
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void USFXOnlineComponentBlazeNotification::OnRelease ( )
{
	static UFunction* pFnOnRelease = NULL;

	if ( ! pFnOnRelease )
		pFnOnRelease = (UFunction*) UObject::GObjObjects()->Data[ 28425 ];

	USFXOnlineComponentBlazeNotification_execOnRelease_Parms OnRelease_Parms;

	pFnOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRelease, &OnRelease_Parms, NULL );

	pFnOnRelease->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.OnInitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXOnlineSubsystem*     oOnlineSubsystem               ( CPF_Parm )

void USFXOnlineComponentBlazeNotification::OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem )
{
	static UFunction* pFnOnInitialize = NULL;

	if ( ! pFnOnInitialize )
		pFnOnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 28423 ];

	USFXOnlineComponentBlazeNotification_execOnInitialize_Parms OnInitialize_Parms;
	OnInitialize_Parms.oOnlineSubsystem = oOnlineSubsystem;

	pFnOnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInitialize, &OnInitialize_Parms, NULL );

	pFnOnInitialize->FunctionFlags |= 0x400;
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXOnlineEvent*         oEvent                         ( CPF_Parm )

void USFXOnlineComponentBlazeNotification::OnTick ( class USFXOnlineEvent* oEvent )
{
	static UFunction* pFnOnTick = NULL;

	if ( ! pFnOnTick )
		pFnOnTick = (UFunction*) UObject::GObjObjects()->Data[ 28421 ];

	USFXOnlineComponentBlazeNotification_execOnTick_Parms OnTick_Parms;
	OnTick_Parms.oEvent = oEvent;

	pFnOnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnTick, &OnTick_Parms, NULL );

	pFnOnTick->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif