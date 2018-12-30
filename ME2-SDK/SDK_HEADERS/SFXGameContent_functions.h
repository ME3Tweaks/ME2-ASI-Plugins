/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_functions.h
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

// Function SFXGameContent.BioSeqAct_GetMembersOfSquad.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_GetMembersOfSquad::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 88687 ];

	UBioSeqAct_GetMembersOfSquad_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_GetMembersOfSquad.FindAPawn
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APawn* UBioSeqAct_GetMembersOfSquad::FindAPawn ( )
{
	static UFunction* pFnFindAPawn = NULL;

	if ( ! pFnFindAPawn )
		pFnFindAPawn = (UFunction*) UObject::GObjObjects()->Data[ 88689 ];

	UBioSeqAct_GetMembersOfSquad_execFindAPawn_Parms FindAPawn_Parms;

	this->ProcessEvent ( pFnFindAPawn, &FindAPawn_Parms, NULL );

	return FindAPawn_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.GetPowerImage
// [0x00020002] 
// Parameters infos:
// class UTexture2D*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

class UTexture2D* USFXSeqAct_HenchmenPowerChoiceGUI::GetPowerImage ( struct FString Path )
{
	static UFunction* pFnGetPowerImage = NULL;

	if ( ! pFnGetPowerImage )
		pFnGetPowerImage = (UFunction*) UObject::GObjObjects()->Data[ 90570 ];

	USFXSeqAct_HenchmenPowerChoiceGUI_execGetPowerImage_Parms GetPowerImage_Parms;
	memcpy ( &GetPowerImage_Parms.Path, &Path, 0xC );

	this->ProcessEvent ( pFnGetPowerImage, &GetPowerImage_Parms, NULL );

	return GetPowerImage_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.PowerChosen
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_HenchmenPowerChoiceGUI::PowerChosen ( )
{
	static UFunction* pFnPowerChosen = NULL;

	if ( ! pFnPowerChosen )
		pFnPowerChosen = (UFunction*) UObject::GObjObjects()->Data[ 90582 ];

	USFXSeqAct_HenchmenPowerChoiceGUI_execPowerChosen_Parms PowerChosen_Parms;

	this->ProcessEvent ( pFnPowerChosen, &PowerChosen_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.ChoiceGUIInputPressed
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bAPressed                      ( CPF_Parm )
// int                            nContext                       ( CPF_Parm )

void USFXSeqAct_HenchmenPowerChoiceGUI::ChoiceGUIInputPressed ( unsigned long bAPressed, int nContext )
{
	static UFunction* pFnChoiceGUIInputPressed = NULL;

	if ( ! pFnChoiceGUIInputPressed )
		pFnChoiceGUIInputPressed = (UFunction*) UObject::GObjObjects()->Data[ 90585 ];

	USFXSeqAct_HenchmenPowerChoiceGUI_execChoiceGUIInputPressed_Parms ChoiceGUIInputPressed_Parms;
	ChoiceGUIInputPressed_Parms.bAPressed = bAPressed;
	ChoiceGUIInputPressed_Parms.nContext = nContext;

	this->ProcessEvent ( pFnChoiceGUIInputPressed, &ChoiceGUIInputPressed_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.UpdateOp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaT                        ( CPF_Parm )

bool USFXSeqAct_HenchmenPowerChoiceGUI::UpdateOp ( float fDeltaT )
{
	static UFunction* pFnUpdateOp = NULL;

	if ( ! pFnUpdateOp )
		pFnUpdateOp = (UFunction*) UObject::GObjObjects()->Data[ 90588 ];

	USFXSeqAct_HenchmenPowerChoiceGUI_execUpdateOp_Parms UpdateOp_Parms;
	UpdateOp_Parms.fDeltaT = fDeltaT;

	this->ProcessEvent ( pFnUpdateOp, &UpdateOp_Parms, NULL );

	return UpdateOp_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.HasLoyalHenchman
// [0x00822002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           WorldInfo                      ( CPF_Parm )

bool USFXSeqAct_HenchmenPowerChoiceGUI::HasLoyalHenchman ( class ABioWorldInfo* WorldInfo )
{
	static UFunction* pFnHasLoyalHenchman = NULL;

	if ( ! pFnHasLoyalHenchman )
		pFnHasLoyalHenchman = (UFunction*) UObject::GObjObjects()->Data[ 90593 ];

	USFXSeqAct_HenchmenPowerChoiceGUI_execHasLoyalHenchman_Parms HasLoyalHenchman_Parms;
	HasLoyalHenchman_Parms.WorldInfo = WorldInfo;

	this->ProcessEvent ( pFnHasLoyalHenchman, &HasLoyalHenchman_Parms, NULL );

	return HasLoyalHenchman_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.PopulateFromAchievements
// [0x00820002] 
// Parameters infos:

void USFXSeqAct_HenchmenPowerChoiceGUI::PopulateFromAchievements ( )
{
	static UFunction* pFnPopulateFromAchievements = NULL;

	if ( ! pFnPopulateFromAchievements )
		pFnPopulateFromAchievements = (UFunction*) UObject::GObjObjects()->Data[ 90598 ];

	USFXSeqAct_HenchmenPowerChoiceGUI_execPopulateFromAchievements_Parms PopulateFromAchievements_Parms;

	this->ProcessEvent ( pFnPopulateFromAchievements, &PopulateFromAchievements_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_HenchmenPowerChoiceGUI::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 90602 ];

	USFXSeqAct_HenchmenPowerChoiceGUI_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.Deactivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXSeqAct_HenchmenPowerChoiceGUI::eventDeactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = (UFunction*) UObject::GObjObjects()->Data[ 90605 ];

	USFXSeqAct_HenchmenPowerChoiceGUI_eventDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_ToggleAppearance.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_ToggleAppearance::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 93637 ];

	USFXSeqAct_ToggleAppearance_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Deactivated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SaveGame::Deactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = (UFunction*) UObject::GObjObjects()->Data[ 93675 ];

	USFXSeqAct_SaveGame_execDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Update
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool USFXSeqAct_SaveGame::Update ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 93678 ];

	USFXSeqAct_SaveGame_execUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	return Update_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SaveGame::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 93684 ];

	USFXSeqAct_SaveGame_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SaveGame.CanSave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPlayerController*    PC                             ( CPF_Parm )

bool USFXSeqAct_SaveGame::CanSave ( class ABioPlayerController* PC )
{
	static UFunction* pFnCanSave = NULL;

	if ( ! pFnCanSave )
		pFnCanSave = (UFunction*) UObject::GObjObjects()->Data[ 93689 ];

	USFXSeqAct_SaveGame_execCanSave_Parms CanSave_Parms;
	CanSave_Parms.PC = PC;

	this->ProcessEvent ( pFnCanSave, &CanSave_Parms, NULL );

	return CanSave_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleResearch.HandleResetTalentPoints
// [0x00022002] 
// Parameters infos:
// class ABioWorldInfo*           oWorldInfo                     ( CPF_Parm )
// class UBioGlobalVariableTable* VarTable                       ( CPF_Parm )

void USFXSeqAct_SystemsHandleResearch::HandleResetTalentPoints ( class ABioWorldInfo* oWorldInfo, class UBioGlobalVariableTable* VarTable )
{
	static UFunction* pFnHandleResetTalentPoints = NULL;

	if ( ! pFnHandleResetTalentPoints )
		pFnHandleResetTalentPoints = (UFunction*) UObject::GObjObjects()->Data[ 93642 ];

	USFXSeqAct_SystemsHandleResearch_execHandleResetTalentPoints_Parms HandleResetTalentPoints_Parms;
	HandleResetTalentPoints_Parms.oWorldInfo = oWorldInfo;
	HandleResetTalentPoints_Parms.VarTable = VarTable;

	this->ProcessEvent ( pFnHandleResetTalentPoints, &HandleResetTalentPoints_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleResearch.HandleNewHeavyWeapons
// [0x00020002] 
// Parameters infos:
// class UBioGlobalVariableTable* VarTable                       ( CPF_Parm )

void USFXSeqAct_SystemsHandleResearch::HandleNewHeavyWeapons ( class UBioGlobalVariableTable* VarTable )
{
	static UFunction* pFnHandleNewHeavyWeapons = NULL;

	if ( ! pFnHandleNewHeavyWeapons )
		pFnHandleNewHeavyWeapons = (UFunction*) UObject::GObjObjects()->Data[ 93644 ];

	USFXSeqAct_SystemsHandleResearch_execHandleNewHeavyWeapons_Parms HandleNewHeavyWeapons_Parms;
	HandleNewHeavyWeapons_Parms.VarTable = VarTable;

	this->ProcessEvent ( pFnHandleNewHeavyWeapons, &HandleNewHeavyWeapons_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleResearch.HandleFacelift
// [0x00022002] 
// Parameters infos:
// class UBioGlobalVariableTable* VarTable                       ( CPF_Parm )

void USFXSeqAct_SystemsHandleResearch::HandleFacelift ( class UBioGlobalVariableTable* VarTable )
{
	static UFunction* pFnHandleFacelift = NULL;

	if ( ! pFnHandleFacelift )
		pFnHandleFacelift = (UFunction*) UObject::GObjObjects()->Data[ 93646 ];

	USFXSeqAct_SystemsHandleResearch_execHandleFacelift_Parms HandleFacelift_Parms;
	HandleFacelift_Parms.VarTable = VarTable;

	this->ProcessEvent ( pFnHandleFacelift, &HandleFacelift_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleResearch.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SystemsHandleResearch::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 93649 ];

	USFXSeqAct_SystemsHandleResearch_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.CountLoyalHenchman
// [0x00822002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           WorldInfo                      ( CPF_Parm )

int USFXSeqAct_HandleResearchNotifications::CountLoyalHenchman ( class ABioWorldInfo* WorldInfo )
{
	static UFunction* pFnCountLoyalHenchman = NULL;

	if ( ! pFnCountLoyalHenchman )
		pFnCountLoyalHenchman = (UFunction*) UObject::GObjObjects()->Data[ 93700 ];

	USFXSeqAct_HandleResearchNotifications_execCountLoyalHenchman_Parms CountLoyalHenchman_Parms;
	CountLoyalHenchman_Parms.WorldInfo = WorldInfo;

	this->ProcessEvent ( pFnCountLoyalHenchman, &CountLoyalHenchman_Parms, NULL );

	return CountLoyalHenchman_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.UnlockRetrain
// [0x00822002] 
// Parameters infos:
// class ABioWorldInfo*           oWorldInfo                     ( CPF_Parm )

void USFXSeqAct_HandleResearchNotifications::UnlockRetrain ( class ABioWorldInfo* oWorldInfo )
{
	static UFunction* pFnUnlockRetrain = NULL;

	if ( ! pFnUnlockRetrain )
		pFnUnlockRetrain = (UFunction*) UObject::GObjObjects()->Data[ 93707 ];

	USFXSeqAct_HandleResearchNotifications_execUnlockRetrain_Parms UnlockRetrain_Parms;
	UnlockRetrain_Parms.oWorldInfo = oWorldInfo;

	this->ProcessEvent ( pFnUnlockRetrain, &UnlockRetrain_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.UnlockLoyaltyPower
// [0x00822002] 
// Parameters infos:
// class ABioWorldInfo*           oWorldInfo                     ( CPF_Parm )

void USFXSeqAct_HandleResearchNotifications::UnlockLoyaltyPower ( class ABioWorldInfo* oWorldInfo )
{
	static UFunction* pFnUnlockLoyaltyPower = NULL;

	if ( ! pFnUnlockLoyaltyPower )
		pFnUnlockLoyaltyPower = (UFunction*) UObject::GObjObjects()->Data[ 93717 ];

	USFXSeqAct_HandleResearchNotifications_execUnlockLoyaltyPower_Parms UnlockLoyaltyPower_Parms;
	UnlockLoyaltyPower_Parms.oWorldInfo = oWorldInfo;

	this->ProcessEvent ( pFnUnlockLoyaltyPower, &UnlockLoyaltyPower_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.CheckForUpdates
// [0x00822002] 
// Parameters infos:
// class ABioWorldInfo*           oWorldInfo                     ( CPF_Parm )
// unsigned long                  bFireHints                     ( CPF_OptionalParm | CPF_Parm )

void USFXSeqAct_HandleResearchNotifications::CheckForUpdates ( class ABioWorldInfo* oWorldInfo, unsigned long bFireHints )
{
	static UFunction* pFnCheckForUpdates = NULL;

	if ( ! pFnCheckForUpdates )
		pFnCheckForUpdates = (UFunction*) UObject::GObjObjects()->Data[ 93727 ];

	USFXSeqAct_HandleResearchNotifications_execCheckForUpdates_Parms CheckForUpdates_Parms;
	CheckForUpdates_Parms.oWorldInfo = oWorldInfo;
	CheckForUpdates_Parms.bFireHints = bFireHints;

	this->ProcessEvent ( pFnCheckForUpdates, &CheckForUpdates_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.UnlockFacelift
// [0x00022002] 
// Parameters infos:
// class ABioWorldInfo*           oWorldInfo                     ( CPF_Parm )

void USFXSeqAct_HandleResearchNotifications::UnlockFacelift ( class ABioWorldInfo* oWorldInfo )
{
	static UFunction* pFnUnlockFacelift = NULL;

	if ( ! pFnUnlockFacelift )
		pFnUnlockFacelift = (UFunction*) UObject::GObjObjects()->Data[ 96005 ];

	USFXSeqAct_HandleResearchNotifications_execUnlockFacelift_Parms UnlockFacelift_Parms;
	UnlockFacelift_Parms.oWorldInfo = oWorldInfo;

	this->ProcessEvent ( pFnUnlockFacelift, &UnlockFacelift_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HandleResearchNotifications.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_HandleResearchNotifications::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 96007 ];

	USFXSeqAct_HandleResearchNotifications_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HandleHenchTalk.HandleSpecMissions
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_HandleHenchTalk::HandleSpecMissions ( )
{
	static UFunction* pFnHandleSpecMissions = NULL;

	if ( ! pFnHandleSpecMissions )
		pFnHandleSpecMissions = (UFunction*) UObject::GObjObjects()->Data[ 96844 ];

	USFXSeqAct_HandleHenchTalk_execHandleSpecMissions_Parms HandleSpecMissions_Parms;

	this->ProcessEvent ( pFnHandleSpecMissions, &HandleSpecMissions_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_HandleHenchTalk.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_HandleHenchTalk::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 96845 ];

	USFXSeqAct_HandleHenchTalk_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.HandleRestockAmmo
// [0x00022002] 
// Parameters infos:
// class ASFXInventoryManager*    oInventory                     ( CPF_Parm )

void USFXSeqAct_SystemsHandleArriveOnNormandy::HandleRestockAmmo ( class ASFXInventoryManager* oInventory )
{
	static UFunction* pFnHandleRestockAmmo = NULL;

	if ( ! pFnHandleRestockAmmo )
		pFnHandleRestockAmmo = (UFunction*) UObject::GObjObjects()->Data[ 93668 ];

	USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockAmmo_Parms HandleRestockAmmo_Parms;
	HandleRestockAmmo_Parms.oInventory = oInventory;

	this->ProcessEvent ( pFnHandleRestockAmmo, &HandleRestockAmmo_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.HandleRestockMediGel
// [0x00022002] 
// Parameters infos:
// class ASFXInventoryManager*    oInventory                     ( CPF_Parm )

void USFXSeqAct_SystemsHandleArriveOnNormandy::HandleRestockMediGel ( class ASFXInventoryManager* oInventory )
{
	static UFunction* pFnHandleRestockMediGel = NULL;

	if ( ! pFnHandleRestockMediGel )
		pFnHandleRestockMediGel = (UFunction*) UObject::GObjObjects()->Data[ 93670 ];

	USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockMediGel_Parms HandleRestockMediGel_Parms;
	HandleRestockMediGel_Parms.oInventory = oInventory;

	this->ProcessEvent ( pFnHandleRestockMediGel, &HandleRestockMediGel_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SystemsHandleArriveOnNormandy::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 93673 ];

	USFXSeqAct_SystemsHandleArriveOnNormandy_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_ChooseLoadout.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_ChooseLoadout::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 98810 ];

	USFXSeqAct_ChooseLoadout_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UBioSeqAct_SetPlotPersuadeCheck::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 98828 ];

	UBioSeqAct_SetPlotPersuadeCheck_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.getWorld
// [0x00020002] 
// Parameters infos:
// class ABioWorldInfo*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ABioWorldInfo* UBioSeqAct_SetPlotPersuadeCheck::getWorld ( )
{
	static UFunction* pFngetWorld = NULL;

	if ( ! pFngetWorld )
		pFngetWorld = (UFunction*) UObject::GObjObjects()->Data[ 98831 ];

	UBioSeqAct_SetPlotPersuadeCheck_execgetWorld_Parms getWorld_Parms;

	this->ProcessEvent ( pFngetWorld, &getWorld_Parms, NULL );

	return getWorld_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_SetInteractionStrings.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SetInteractionStrings::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 105254 ];

	USFXSeqAct_SetInteractionStrings_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif