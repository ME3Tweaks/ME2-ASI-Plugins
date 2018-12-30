/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXOnlineFoundation_structs.h
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

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLogin.SFXOnlineAccountCountryListItem
// 0x0018
struct FSFXOnlineAccountCountryListItem
{
	struct FString                                     ISOCode;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.SFXOnline_OfferID
// 0x0008
struct FSFXOnline_OfferID
{
	int                                                nHigh;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLow;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineDLCInfo
// 0x0074
struct FSFXOnlineDLCInfo
{
	int                                                internalId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSFXOnline_OfferID                          externalId;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Price;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     entitlementGroup;                                 		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     entitlementName;                                  		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     grantEntitlementGroup;                            		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     grantEntitlementName;                             		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Image;                                            		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     offerKey;                                         		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      isEntitled : 1;                                   		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineEntitlementGroupInfo
// 0x0018
struct FSFXOnlineEntitlementGroupInfo
{
	struct FString                                     GroupName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     entitlementName;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineTargetOfferInfo
// 0x0018
struct FSFXOnlineTargetOfferInfo
{
	struct FString                                     offerType;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     offerId;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.SFXOfferDescriptor
// 0x0050
struct FSFXOfferDescriptor
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Price;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     Image;                                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      UserHasIt : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     grantEntitlementName;                             		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     grantEntitlementGroup;                            		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                internalId;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FSFXOnline_OfferID                          externalId;                                       		// 0x0048 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponent.SFXOnlineSubscriberEventType
// 0x000C
struct FSFXOnlineSubscriberEventType
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       EventCallback;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.SFXOnlineMOTDInfo
// 0x0044
struct FSFXOnlineMOTDInfo
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Type;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     Image;                                            		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     offerId;                                          		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     offerType;                                        		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentCoordinator.SFXOnlineEventNotify
// 0x0018
struct FSFXOnlineEventNotify
{
	TArray< struct FScriptDelegate >                   Subscribers;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   Waiters;                                          		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SFXOnlineXenonCustomPlayerListButton
// 0x0010
struct FSFXOnlineXenonCustomPlayerListButton
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     CustomText;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineSubsystem.SFXOnlineAchievement
// 0x0010
struct FSFXOnlineAchievement
{
	struct FString                                     AchievementName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Xbox360Id;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineSubsystem.SFXOnlineComponentDescription
// 0x000D
struct FSFXOnlineComponentDescription
{
	class UClass*                                      ClassName;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       PlatformName;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      ComponentType;                                    		// 0x000C (0x0001) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif