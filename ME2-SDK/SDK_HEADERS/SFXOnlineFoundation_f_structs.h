/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXOnlineFoundation_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function SFXOnlineFoundation.SFXOnlineComponent.IsEventPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execIsEventPending_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execGetEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkSetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkSetObject_Parms
{
	TArray< class USFXOnlineEvent* >                   aOnlineEventSet;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkSetType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkSetType_Parms
{
	TArray< unsigned char >                            aWorkUnits;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nEventId;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkFinishedObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkFinishedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkFinishedType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkFinishedType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkStartedObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkStartedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEventType;                                       		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkStartedType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkStartedType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fTimeOut;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyEventObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyEventObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyEventType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatus;                                          		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      eOutcome;                                         		// 0x0002 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.StopWaitingForAllWork
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execStopWaitingForAllWork_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.UnsubscribeFromAllEvents
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execUnsubscribeFromAllEvents_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.UnsubscribeFromEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execUnsubscribeFromEvent_Parms
{
	unsigned char                                      oEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.SubscribeToEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execSubscribeToEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnEvent
// [0x00120000] 
struct USFXOnlineComponent_execOnEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.SubscribeToEvents
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execSubscribeToEvents_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineEvent.Update
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEvent_execUpdate_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsComplete
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsComplete_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsPending_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.CompleteAndSucceeded
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execCompleteAndSucceeded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.HasTimedOut
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execHasTimedOut_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsTimeoutEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsTimeoutEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.DisableTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execDisableTimeout_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineEvent.EnableTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execEnableTimeout_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetTimeout_Parms
{
	float                                              fEventTimeout;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetTimeout_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetErrorString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetErrorString_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetErrorString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetErrorString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetErrorCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetErrorCode_Parms
{
	int                                                nCode;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetErrorCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetErrorCode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetStatus_Parms
{
	unsigned char                                      eNewStatus;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetOutcome
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetOutcome_Parms
{
	unsigned char                                      eStatusFinished;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetOutcome
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetOutcome_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEventId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetEventId_Parms
{
	int                                                nNewEventId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetEventId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetEventType_Parms
{
	unsigned char                                      eNewEventType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetEventType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Integer.SetInteger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Integer_execSetInteger_Parms
{
	int                                                nInteger;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Integer.GetInteger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Integer_execGetInteger_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_String.SetStringData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_String_execSetStringData_Parms
{
	struct FString                                     sStringData;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_String.GetStringData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_String_execGetStringData_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.SetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execSetPriority_Parms
{
	int                                                nPriority;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.GetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execGetPriority_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.SetImageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execSetImageName_Parms
{
	struct FString                                     sImageName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.GetImageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execGetImageName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetNextTimedOutEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetNextTimedOutEvent_Parms
{
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.RemoveEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execRemoveEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.FindEventByType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execFindEventByType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.FindEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execFindEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetEventAtIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetEventAtIndex_Parms
{
	int                                                nEventIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.AddEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execAddEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.GetAPIName
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.OnRelease
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.OnInitialize
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.IsGranted
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAchievement_execIsGranted_Parms
{
	struct FString                                     sAchievement;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.Grant
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAchievement_execGrant_Parms
{
	struct FString                                     sAchievement;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetConnectionState
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetConnectionState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanShowPresenceInformation_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanViewPlayerProfiles_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanPurchaseContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanDownloadUserContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanCommunicate_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanPlayOnline_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.EnterCDKey
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execEnterCDKey_Parms
{
	struct FString                                     sKey;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnDownloadOffersUICompleted
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOnDownloadOffersUICompleted_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnDLCInfoLoaded
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOnDLCInfoLoaded_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OpenCerberusUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOpenCerberusUI_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CheckEntitlement
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCheckEntitlement_Parms
{
	struct FString                                     sGroup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsCerberusMember
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsCerberusMember_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.DisablePersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execDisablePersona_Parms
{
	struct FString                                     sPersonaNonGrata;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CreatePersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCreatePersona_Parms
{
	struct FString                                     sPersonaName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SelectPersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSelectPersona_Parms
{
	struct FString                                     sPersonaName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.AcceptTOS
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execAcceptTOS_Parms
{
	unsigned long                                      bAccepted : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Disconnect
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execDisconnect_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitStore
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitStore_Parms
{
	TArray< int >                                      aiChosen;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCreateNucleusAccountEx_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bThirdParty : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBioWareProducts : 1;                             		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     i_sCountryCode;                                   		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BirthDay;                                         		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthMonth;                                       		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthYear;                                        		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sLanguageCode;                                  		// 0x003C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bSubmit : 1;                                      		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitEmailPasswordMismatch_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                eReturnCode;                                      		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitMessageBox
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitMessageBox_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitRedeemCode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitRedeemCode_Parms
{
	unsigned long                                      bContinue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     i_sCode;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCerberusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCerberusIntro
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCerberusIntro_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitNucleusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCreateNucleusAccount_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bThirdParty : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBioWareProducts : 1;                             		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSubmit : 1;                                      		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitParentEmail
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitParentEmail_Parms
{
	unsigned long                                      bContinue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ParentEmail;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitNucleusLogin
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitNucleusLogin_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      eReturnCode;                                      		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitIntroPage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitIntroPage_Parms
{
	unsigned long                                      bContinue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSimulated : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Connect
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execConnect_Parms
{
	unsigned char                                      connectMode;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GoBackInUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGoBackInUI_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Cancel
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCancel_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetUserId
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetUserId_Parms
{
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetPersonaName
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetPersonaName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsSignedIn
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsSignedIn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsConnected
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsConnected_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SwitchActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSwitchActiveUserIndex_Parms
{
	int                                                nNewIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetActiveUserIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetLoginStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetTargetOfferInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetTargetOfferInfo_Parms
{
	unsigned char                                      nSource;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FSFXOnlineTargetOfferInfo                   ReturnValue;                                      		// 0x0004 (0x0018) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.HasUserPurchasedAnOffer
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execHasUserPurchasedAnOffer_Parms
{
	struct FSFXOnline_OfferID                          aOfferId;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.DownloadOffers
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execDownloadOffers_Parms
{
	TArray< struct FSFXOnline_OfferID >                aOfferIds;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetOfferKeyIfEntitled
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetOfferKeyIfEntitled_Parms
{
	int                                                internalId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetGrantingOffers
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetGrantingOffers_Parms
{
	TArray< struct FSFXOfferDescriptor >               ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetEntitledDLCInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetEntitledDLCInfo_Parms
{
	TArray< struct FSFXOfferDescriptor >               ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RefreshEntitlementFlags
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRefreshEntitlementFlags_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetEntitlementGroups
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetEntitlementGroups_Parms
{
	TArray< struct FSFXOnlineEntitlementGroupInfo >    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetDaysSinceCerberusRegistration
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetDaysSinceCerberusRegistration_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.IsCalendarUnlockEarned
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execIsCalendarUnlockEarned_Parms
{
	int                                                nDay;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestServerInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRequestServerInfo_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestData
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRequestData_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUserXuid;                                        		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUserXuid;                                        		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.AddRecentPlayer
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowKeyboardUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowKeyboardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShouldValidate : 1;                              		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole : 1;                         		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFeedbackUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowGamerCardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFriendsInviteUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFriendsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanShowPresenceInformation_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanPurchaseContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanDownloadUserContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanCommunicate_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanPlayOnline_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execSetRichPresence_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FLocalizedStringSetting >           aLocalizedStringSettings;                         		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSettingsProperty >                 aProperties;                                      		// 0x0014 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowLoginUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetLoginStatus_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowStore
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventShowStore_Parms
{
	TArray< struct FSFXOfferDescriptor >               aOffers;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.HasCerberusDLC
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventHasCerberusDLC_Parms
{
	unsigned long                                      bVal : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.OnDisplayNotification
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventOnDisplayNotification_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MessageData;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Image;                                            		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ClearNotifications
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventClearNotifications_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.CloseEANetworking
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventCloseEANetworking_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.SetState
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventSetState_Parms
{
	unsigned char                                      eState;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowEmailPasswordMismatch_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBoxWait
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowMessageBoxWait_Parms
{
	// UNKNOWN PROPERTY: StringRefProperty SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBoxWait.srMessage
	// UNKNOWN PROPERTY: StringRefProperty SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBoxWait.srButton1Text
	// UNKNOWN PROPERTY: StringRefProperty SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBoxWait.srButton2Text
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBox
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowMessageBox_Parms
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sButton1Text;                                     		// 0x0018 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sButton2Text;                                     		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sButton3Text;                                     		// 0x0030 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCreateNucleusAccountEx_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bThirdParty : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBioWareProducts : 1;                             		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     i_sCountryCode;                                   		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BirthDay;                                         		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthMonth;                                       		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthYear;                                        		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sLanguageCode;                                  		// 0x003C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FString >                           m_CountryCodeList;                                		// 0x0048 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FString >                           m_CountryDisplayList;                             		// 0x0054 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCerberusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowRedeemCode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowRedeemCode_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCerberusIntro
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCerberusIntro_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowNucleusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCreateNucleusAccount_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bThirdParty : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bRegisterProduct : 1;                             		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBioWareProducts : 1;                             		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bUnderage : 1;                                    		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowParentEmail
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowParentEmail_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowAccountDemographics
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowAccountDemographics_Parms
{
	TArray< struct FString >                           m_CountryCodeList;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FString >                           m_CountryDisplayList;                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowTermsOfService
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowTermsOfService_Parms
{
	struct FString                                     i_sTermsOfService;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bTOSChanged : 1;                                  		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowNucleusLogin
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowNucleusLogin_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                eScreenState;                                     		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowIntroPage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowIntroPage_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetAPIName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnRelease
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnInitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.StopWaitingForAllWork
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execStopWaitingForAllWork_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkSetObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkSetObject_Parms
{
	TArray< class USFXOnlineEvent* >                   aEventObjects;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkSetType
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkSetType_Parms
{
	TArray< unsigned char >                            aEventTypes;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< int >                                      aWorkEventIds;                                    		// 0x0018 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkType
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nEventId;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.IsEventPending
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execIsEventPending_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetEvent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execGetEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.UnsubscribeFromAllEvents
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execUnsubscribeFromAllEvents_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.UnsubscribeFromEvent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execUnsubscribeFromEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.SubscribeToEvent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execSubscribeToEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkFinishedObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkFinishedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkFinishedType
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkFinishedType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkStartedObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkStartedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEventType;                                       		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkStartedType
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkStartedType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fTimeOut;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyEventObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyEventObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyEventType
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyEventType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatus;                                          		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      eOutcome;                                         		// 0x0002 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnEvent
// [0x00120000] 
struct USFXOnlineComponentCoordinator_execOnEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShowConsoleRoutedKeyboardUI
// [0x00020102] 
struct USFXOnlineSubsystem_execShowConsoleRoutedKeyboardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShowKeyboardUI
// [0x00020002] 
struct USFXOnlineSubsystem_execShowKeyboardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.FormatTime
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execFormatTime_Parms
{
	float                                              fInSeconds;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShowHours : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowMins : 1;                                    		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.CheckEntitlement
// [0x00020002] 
struct USFXOnlineSubsystem_execCheckEntitlement_Parms
{
	struct FString                                     sGroup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.IsCerberusMember
// [0x00020002] 
struct USFXOnlineSubsystem_execIsCerberusMember_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetUniqueIdFromConnection
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetUniqueIdFromConnection_Parms
{
	class APlayerReplicationInfo*                      oPRI;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.MD5HashString
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execMD5HashString_Parms
{
	struct FString                                     InStr;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetProjectID
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetProjectID_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetCDKey
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetCDKey_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetLanguage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetLanguage_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetPlatform
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetPlatform_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShutDown
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct USFXOnlineSubsystem_eventShutDown_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.NativeInit
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execNativeInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetGameListenPort
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetGameListenPort_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetReserveTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetReserveTimeout_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetMaxObserverCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetMaxObserverCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetMaxPlayerCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetMaxPlayerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.SetMaxPlayerCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execSetMaxPlayerCount_Parms
{
	int                                                nMaxPlayers;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetGameProtocolVersion
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetGameProtocolVersion_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentNotification_Parms
{
	class UISFXOnlineComponentNotification*            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetCoordinator
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetCoordinator_Parms
{
	class USFXOnlineComponentCoordinator*              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUserInterface
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUserInterface_Parms
{
	class UISFXOnlineComponentUserInterface*           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentLogin
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentLogin_Parms
{
	class UISFXOnlineComponentLogin*                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAPI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentAPI_Parms
{
	class UISFXOnlineComponentAPI*                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAchievement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentAchievement_Parms
{
	class UISFXOnlineComponentAchievement*             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentPlatform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentPlatform_Parms
{
	class UISFXOnlineComponentPlatform*                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.StripBadPWCharacters
// [0x00080002] 
struct USFXOnlineSubsystem_execStripBadPWCharacters_Parms
{
	struct FString                                     sPassword;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  sStrippedPassword;                                		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nIndex;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FString                                  sBuffer;                                          		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetURL
// [0x00020902] ( FUNC_Event )
struct USFXOnlineSubsystem_eventGetURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  sURL;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.CreateComponents
// [0x00040003] ( FUNC_Final )
struct USFXOnlineSubsystem_execCreateComponents_Parms
{
	// struct FName                                    nmPlatformName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             nComponentIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.InitGameProtocolVersion
// [0x00040001] ( FUNC_Final )
struct USFXOnlineSubsystem_execInitGameProtocolVersion_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.Init
// [0x00020802] ( FUNC_Event )
struct USFXOnlineSubsystem_eventInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetAchievementList
// [0x00020002] 
struct USFXOnlineSubsystem_execGetAchievementList_Parms
{
	TArray< struct FSFXOnlineAchievement >             ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowKeyboardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShouldValidate : 1;                              		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole : 1;                         		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FLocalizedStringSetting >           aLocalizedStringSettings;                         		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSettingsProperty >                 aProperties;                                      		// 0x0014 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowLoginUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.AddRecentPlayer
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetAPIName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.OnRelease
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.OnInitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execIsGranted_Parms
{
	struct FString                                     sAchievement;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGrant_Parms
{
	struct FString                                     sAchievement;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowKeyboardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShouldValidate : 1;                              		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole : 1;                         		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FLocalizedStringSetting >           aLocalizedStringSettings;                         		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSettingsProperty >                 aProperties;                                      		// 0x0014 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowLoginUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.TickAsyncTasks
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execTickAsyncTasks_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.AddRecentPlayer
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowKeyboardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShouldValidate : 1;                              		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole : 1;                         		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FLocalizedStringSetting >           aLocalizedStringSettings;                         		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSettingsProperty >                 aProperties;                                      		// 0x0014 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowLoginUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.AddRecentPlayer
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlaze.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlaze_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeHub_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeHub_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.ConnectDirtySock
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeHub_execConnectDirtySock_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeHub_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeHub_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetConnectionState
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetConnectionState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.ComputeTargetOfferURL
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execComputeTargetOfferURL_Parms
{
	unsigned char                                      nSource;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetTargetOfferURL
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetTargetOfferURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanShowPresenceInformation_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanViewPlayerProfiles_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanPurchaseContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanDownloadUserContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanCommunicate_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanPlayOnline_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnDownloadOffersUICompleted
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnDownloadOffersUICompleted_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnDLCInfoLoaded
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnDLCInfoLoaded_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OpenCerberusUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOpenCerberusUI_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.EnterCDKey
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execEnterCDKey_Parms
{
	struct FString                                     sKey;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Buy
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execBuy_Parms
{
	unsigned char                                      nPurchaseSource;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GrantEntitlement
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGrantEntitlement_Parms
{
	struct FString                                     sGroup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CheckEntitlement
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCheckEntitlement_Parms
{
	struct FString                                     sGroup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.BuildEntitlementList
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execBuildEntitlementList_Parms
{
	unsigned long                                      bFirstCallUponLogin : 1;                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nPage;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsCerberusMember
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execIsCerberusMember_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.DisablePersona
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execDisablePersona_Parms
{
	struct FString                                     sPersonaNonGrata;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CreatePersona
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCreatePersona_Parms
{
	struct FString                                     sPersonaName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SelectPersona
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSelectPersona_Parms
{
	struct FString                                     sPersonaName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.AcceptTOS
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execAcceptTOS_Parms
{
	unsigned long                                      bAccepted : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Disconnect
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execDisconnect_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CompleteLoginProcess
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCompleteLoginProcess_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.StartCerberusLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execStartCerberusLogin_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitStore
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitStore_Parms
{
	TArray< int >                                      aiChosen;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitCreateNucleusAccountEx_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bThirdParty : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBioWareProducts : 1;                             		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     i_sCountryCode;                                   		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BirthDay;                                         		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthMonth;                                       		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthYear;                                        		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sLanguageCode;                                  		// 0x003C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bSubmit : 1;                                      		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitEmailPasswordMismatch_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                eReturnCode;                                      		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitMessageBox
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitMessageBox_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitRedeemCode
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitRedeemCode_Parms
{
	unsigned long                                      bContinue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     i_sCode;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitCerberusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCerberusIntro
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitCerberusIntro_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitNucleusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitCreateNucleusAccount_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bThirdParty : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBioWareProducts : 1;                             		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSubmit : 1;                                      		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitParentEmail
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitParentEmail_Parms
{
	unsigned long                                      bContinue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ParentEmail;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitNucleusLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitNucleusLogin_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      eReturnCode;                                      		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitIntroPage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitIntroPage_Parms
{
	unsigned long                                      bContinue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSimulated : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Connect
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execConnect_Parms
{
	unsigned char                                      connectMode;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GoBackInUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGoBackInUI_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Cancel
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCancel_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetUserId
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetUserId_Parms
{
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetPersonaName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetPersonaName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsLive
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execIsLive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsSignedIn
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execIsSignedIn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsConnected
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execIsConnected_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SwitchActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSwitchActiveUserIndex_Parms
{
	int                                                nNewIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetActiveUserIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetLoginStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetTargetOfferInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetTargetOfferInfo_Parms
{
	unsigned char                                      nSource;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FSFXOnlineTargetOfferInfo                   ReturnValue;                                      		// 0x0004 (0x0018) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetEntitlementGroups
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetEntitlementGroups_Parms
{
	TArray< struct FSFXOnlineEntitlementGroupInfo >    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.HasUserPurchasedAnOffer
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execHasUserPurchasedAnOffer_Parms
{
	struct FSFXOnline_OfferID                          aOfferId;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.DownloadOffers
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execDownloadOffers_Parms
{
	TArray< struct FSFXOnline_OfferID >                aOfferIds;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetOfferKeyIfEntitled
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetOfferKeyIfEntitled_Parms
{
	int                                                internalId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetGrantingOffers
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetGrantingOffers_Parms
{
	TArray< struct FSFXOfferDescriptor >               ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetEntitledDLCInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetEntitledDLCInfo_Parms
{
	TArray< struct FSFXOfferDescriptor >               ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RefreshEntitlementFlags
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRefreshEntitlementFlags_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.SetDaysSinceCerberusRegistration
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execSetDaysSinceCerberusRegistration_Parms
{
	int                                                nDays;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetDaysSinceCerberusRegistration
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetDaysSinceCerberusRegistration_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.IsCalendarUnlockEarned
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execIsCalendarUnlockEarned_Parms
{
	int                                                nDay;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestEntitlementGroupInfo
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRequestEntitlementGroupInfo_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestDLCInfo
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRequestDLCInfo_Parms
{
	struct FString                                     sNextSection;                                     		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestServerInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRequestServerInfo_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRequestData_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif