/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_structs.h
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

// ScriptStruct SFXGameContent.SFXGameChoiceGUIData_HenchmenPowers.HenchmanPowerData
// 0x00A0
struct FHenchmanPowerData
{
	struct FString                                     PowerClassName;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXChoiceEntry                             ChoiceEntry;                                      		// 0x000C (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       PlotName;                                         		// 0x0084 (0x0008) [0x0000000000000000]              
	int                                                AchievementId;                                    		// 0x008C (0x0004) [0x0000000000000000]              
	struct FString                                     PowerImage;                                       		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bMorinthSpecialCase : 1;                          		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif