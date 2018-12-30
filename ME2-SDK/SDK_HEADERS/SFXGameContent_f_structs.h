/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_f_structs.h
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

// Function SFXGameContent.BioSeqAct_GetMembersOfSquad.Activated
// [0x00020002] 
struct UBioSeqAct_GetMembersOfSquad_execActivated_Parms
{
	// class ABioBaseSquad*                            oCurrentSquad;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             N;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.BioSeqAct_GetMembersOfSquad.FindAPawn
// [0x00040003] ( FUNC_Final )
struct UBioSeqAct_GetMembersOfSquad_execFindAPawn_Parms
{
	class APawn*                                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.GetPowerImage
// [0x00020002] 
struct USFXSeqAct_HenchmenPowerChoiceGUI_execGetPowerImage_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTexture2D*                                  ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UTexture2D*                               Image;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.PowerChosen
// [0x00020002] 
struct USFXSeqAct_HenchmenPowerChoiceGUI_execPowerChosen_Parms
{
	// class ABioPlayerController*                     Controller;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioWorldInfo*                            WorldInfo;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 PlayerPawn;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USFXPowerManager*                         PowerManager;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXPower*                                Power;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Refund;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Rank;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Rank1Cost;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bLastBonusHadRanks : 1;                           		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bHadBonusPower : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.ChoiceGUIInputPressed
// [0x00020003] ( FUNC_Final )
struct USFXSeqAct_HenchmenPowerChoiceGUI_execChoiceGUIInputPressed_Parms
{
	unsigned long                                      bAPressed : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nContext;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.UpdateOp
// [0x00020002] 
struct USFXSeqAct_HenchmenPowerChoiceGUI_execUpdateOp_Parms
{
	float                                              fDeltaT;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.HasLoyalHenchman
// [0x00822002] 
struct USFXSeqAct_HenchmenPowerChoiceGUI_execHasLoyalHenchman_Parms
{
	class ABioWorldInfo*                               WorldInfo;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FHenchmanPowerData                       PowerData;                                        		// 0x000C (0x00A0) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.PopulateFromAchievements
// [0x00820002] 
struct USFXSeqAct_HenchmenPowerChoiceGUI_execPopulateFromAchievements_Parms
{
	// class ABioWorldInfo*                            WorldInfo;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FHenchmanPowerData                       PowerData;                                        		// 0x0008 (0x00A0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXProfileSettings*                      Profile;                                          		// 0x00A8 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.Activated
// [0x00020002] 
struct USFXSeqAct_HenchmenPowerChoiceGUI_execActivated_Parms
{
	// class ABioPlayerController*                     Controller;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMassEffectGuiManager*                    Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ABioWorldInfo*                            WorldInfo;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.Deactivated
// [0x00020802] ( FUNC_Event )
struct USFXSeqAct_HenchmenPowerChoiceGUI_eventDeactivated_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioWorldInfo*                            WorldInfo;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_ToggleAppearance.Activated
// [0x00020002] 
struct USFXSeqAct_ToggleAppearance_execActivated_Parms
{
	// class UObject*                                  ChkObject;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFXPawn_Player*                          Player;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Deactivated
// [0x00020002] 
struct USFXSeqAct_SaveGame_execDeactivated_Parms
{
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Update
// [0x00020002] 
struct USFXSeqAct_SaveGame_execUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Activated
// [0x00020002] 
struct USFXSeqAct_SaveGame_execActivated_Parms
{
	// class UObject*                                  ChkTarget;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASFXPRI*                                  PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bOptionCanAutoSave : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXGameContent.SFXSeqAct_SaveGame.CanSave
// [0x00020002] 
struct USFXSeqAct_SaveGame_execCanSave_Parms
{
	class ABioPlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               Engine;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleResearch.HandleResetTalentPoints
// [0x00022002] 
struct USFXSeqAct_SystemsHandleResearch_execHandleResetTalentPoints_Parms
{
	class ABioWorldInfo*                               oWorldInfo;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UBioGlobalVariableTable*                     VarTable;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleResearch.HandleNewHeavyWeapons
// [0x00020002] 
struct USFXSeqAct_SystemsHandleResearch_execHandleNewHeavyWeapons_Parms
{
	class UBioGlobalVariableTable*                     VarTable;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleResearch.HandleFacelift
// [0x00022002] 
struct USFXSeqAct_SystemsHandleResearch_execHandleFacelift_Parms
{
	class UBioGlobalVariableTable*                     VarTable;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleResearch.Activated
// [0x00020002] 
struct USFXSeqAct_SystemsHandleResearch_execActivated_Parms
{
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UBioGlobalVariableTable*                  VarTable;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.CountLoyalHenchman
// [0x00822002] 
struct USFXSeqAct_HandleResearchNotifications_execCountLoyalHenchman_Parms
{
	class ABioWorldInfo*                               WorldInfo;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FHenchmanPowerData                       PowerData;                                        		// 0x000C (0x00A0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nLoyalHenchmen;                                   		// 0x00AC (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.UnlockRetrain
// [0x00822002] 
struct USFXSeqAct_HandleResearchNotifications_execUnlockRetrain_Parms
{
	class ABioWorldInfo*                               oWorldInfo;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UBioGlobalVariableTable*                  oGV;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FSTech                                   stTech;                                           		// 0x0008 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UTexture2D*                               oImage;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.UnlockLoyaltyPower
// [0x00822002] 
struct USFXSeqAct_HandleResearchNotifications_execUnlockLoyaltyPower_Parms
{
	class ABioWorldInfo*                               oWorldInfo;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UBioGlobalVariableTable*                  oGV;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHasLoyaltyPower : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bUnlockLoyaltyPower : 1;                          		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             nLoyaltyCount;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FSTech                                   stTech;                                           		// 0x0014 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UTexture2D*                               oImage;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPlayerBP;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	// class USFXPower*                                oPower;                                           		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.CheckForUpdates
// [0x00822002] 
struct USFXSeqAct_HandleResearchNotifications_execCheckForUpdates_Parms
{
	class ABioWorldInfo*                               oWorldInfo;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFireHints : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bQualifiesForTech : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bTechIsUnlocked : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FSTech                                   stTech;                                           		// 0x0014 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXPlotTreasure*                         oTreasure;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	// class USFXGameChoiceGUIData_Research*           m_ChoiceGUIData;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               oImage;                                           		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.UnlockFacelift
// [0x00022002] 
struct USFXSeqAct_HandleResearchNotifications_execUnlockFacelift_Parms
{
	class ABioWorldInfo*                               oWorldInfo;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UBioGlobalVariableTable*                  oGV;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.Activated
// [0x00020002] 
struct USFXSeqAct_HandleResearchNotifications_execActivated_Parms
{
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HandleHenchTalk.HandleSpecMissions
// [0x00020002] 
struct USFXSeqAct_HandleHenchTalk_execHandleSpecMissions_Parms
{
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UBioGlobalVariableTable*                  VarTable;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_HandleHenchTalk.Activated
// [0x00020002] 
struct USFXSeqAct_HandleHenchTalk_execActivated_Parms
{
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.HandleRestockAmmo
// [0x00022002] 
struct USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockAmmo_Parms
{
	class ASFXInventoryManager*                        oInventory;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXWeapon*                               Weapon;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.HandleRestockMediGel
// [0x00022002] 
struct USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockMediGel_Parms
{
	class ASFXInventoryManager*                        oInventory;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.Activated
// [0x00020002] 
struct USFXSeqAct_SystemsHandleArriveOnNormandy_execActivated_Parms
{
	// class ABioPawn*                                 Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASFXInventoryManager*                     oInventory;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_ChooseLoadout.Activated
// [0x00020002] 
struct USFXSeqAct_ChooseLoadout_execActivated_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.Activated
// [0x00020802] ( FUNC_Event )
struct UBioSeqAct_SetPlotPersuadeCheck_eventActivated_Parms
{
	// int                                             nMissionsTotal;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             nParagonPotential;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nRenegadePotential;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UBioGlobalVariableTable*                  gv;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.getWorld
// [0x00020002] 
struct UBioSeqAct_SetPlotPersuadeCheck_execgetWorld_Parms
{
	class ABioWorldInfo*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXSeqAct_SetInteractionStrings.Activated
// [0x00020002] 
struct USFXSeqAct_SetInteractionStrings_execActivated_Parms
{
	// class AActor*                                   oCurrent;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXSelectionModule*                      oModule;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif