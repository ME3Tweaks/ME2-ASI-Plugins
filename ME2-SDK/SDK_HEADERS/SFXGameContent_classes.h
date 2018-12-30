/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_classes.h
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

#define CONST_DIV_MAX                                            1.05
#define CONST_DIV_HEROIC                                         1.3
#define CONST_DIV_HARD                                           2.0
#define CONST_DIV_COMMON                                         4.0
#define CONST_DIV_EASY                                           10.0
#define CONST_SKILL4                                             2.0
#define CONST_SKILL3                                             1.7
#define CONST_SKILL2                                             1.4
#define CONST_SKILL1                                             1.2
#define CONST_INDEX_INTIM_MAX                                    592
#define CONST_INDEX_INTIM_HEROIC                                 591
#define CONST_INDEX_INTIM_HARD                                   590
#define CONST_INDEX_INTIM_COMMON                                 589
#define CONST_INDEX_INTIM_EASY                                   588
#define CONST_INDEX_CHARM_MAX                                    587
#define CONST_INDEX_CHARM_HEROIC                                 586
#define CONST_INDEX_CHARM_HARD                                   585
#define CONST_INDEX_CHARM_COMMON                                 584
#define CONST_INDEX_CHARM_EASY                                   583
#define CONST_INDEX_RENEGADE_POTENTIAL                           582
#define CONST_INDEX_PARAGON_POTENTIAL                            581
#define CONST_INDEX_MISSIONS_TOTAL                               168

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContent.BioSeqAct_GetMembersOfSquad
// 0x0028 (0x0118 - 0x00F0)
class UBioSeqAct_GetMembersOfSquad : public USequenceAction
{
public:
	int                                                m_nIndex;                                         		// 0x00F0 (0x0004) [0x0000000000000000]              
	TArray< class APawn* >                             m_aoActorList;                                    		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bAlsoReturnDeadMembers : 1;                     		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class APawn*                                       m_oCurrentMember;                                 		// 0x0104 (0x0004) [0x0000000000000000]              
	class APawn*                                       m_oOutputCurrentMember;                           		// 0x0108 (0x0004) [0x0000000000000000]              
	TArray< class UObject* >                           m_aoPassSquads;                                   		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88706 ];

		return pClassPointer;
	};

	void Activated ( );
	class APawn* FindAPawn ( );
};

UClass* UBioSeqAct_GetMembersOfSquad::pClassPointer = NULL;

// Class SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI
// 0x00C0 (0x01C4 - 0x0104)
class USFXSeqAct_HenchmenPowerChoiceGUI : public UBioSequenceLatentAction
{
public:
	unsigned long                                      m_bFinished : 1;                                  		// 0x0104 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      m_bAborted : 1;                                   		// 0x0104 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      m_bWasPaused : 1;                                 		// 0x0104 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      m_bMessageBoxActivated : 1;                       		// 0x0104 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	class UBioSFHandler_ChoiceGUI*                     m_ChoiceGUIHandler;                               		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXGameChoiceGUIData_HenchmenPowers*        m_ChoiceGUIData;                                  		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FHenchmanPowerData >                m_PowerChoices;                                   		// 0x0110 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FHenchmanPowerData                          m_ChosenPowerData;                                		// 0x011C (0x00A0) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UBioSFHandler_MessageBox*                    m_oMsgBox;                                        		// 0x01BC (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x01C0 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGameContent.SFXSeqAct_HenchmenPowerChoiceGUI.srText

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90617 ];

		return pClassPointer;
	};

	class UTexture2D* GetPowerImage ( struct FString Path );
	void PowerChosen ( );
	void ChoiceGUIInputPressed ( unsigned long bAPressed, int nContext );
	bool UpdateOp ( float fDeltaT );
	bool HasLoyalHenchman ( class ABioWorldInfo* WorldInfo );
	void PopulateFromAchievements ( );
	void Activated ( );
	void eventDeactivated ( );
};

UClass* USFXSeqAct_HenchmenPowerChoiceGUI::pClassPointer = NULL;

// Class SFXGameContent.SFXSeqAct_ToggleAppearance
// 0x0000 (0x00F0 - 0x00F0)
class USFXSeqAct_ToggleAppearance : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93638 ];

		return pClassPointer;
	};

	void Activated ( );
};

UClass* USFXSeqAct_ToggleAppearance::pClassPointer = NULL;

// Class SFXGameContent.SFXSeqAct_SaveGame
// 0x000C (0x010C - 0x0100)
class USFXSeqAct_SaveGame : public USeqAct_Latent
{
public:
	class USFXEngine*                                  CachedEngine;                                     		// 0x0100 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFiredOutPin : 1;                                 		// 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ElapsedTime;                                      		// 0x0108 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93693 ];

		return pClassPointer;
	};

	void Deactivated ( );
	bool Update ( float DeltaTime );
	void Activated ( );
	bool CanSave ( class ABioPlayerController* PC );
};

UClass* USFXSeqAct_SaveGame::pClassPointer = NULL;

// Class SFXGameContent.SFXSeqAct_SystemsHandleResearch
// 0x0044 (0x0134 - 0x00F0)
class USFXSeqAct_SystemsHandleResearch : public USequenceAction
{
public:
	int                                                GruntShotgunTech;                                 		// 0x00F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GruntShotgunEquipped;                             		// 0x00F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                LegionSniperTech;                                 		// 0x00F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                LegionSniperEquipped;                             		// 0x00FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ShepardMachineGunTech;                            		// 0x0100 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ShepardMachineGunEquipped;                        		// 0x0104 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ShepardFlakGunTech;                               		// 0x0108 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ShepardFlakGunEquipped;                           		// 0x010C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ShepardMassCanTech;                               		// 0x0110 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ShepardMassCanEquipped;                           		// 0x0114 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Tec_Retrain;                                      		// 0x0118 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Tre_Tec_Retrain;                                  		// 0x011C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Tre_Tec_Facelift;                                 		// 0x0120 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                StateFaceliftUnlocked;                            		// 0x0124 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< int >                                      HenchmanLoyalty;                                  		// 0x0128 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93702 ];

		return pClassPointer;
	};

	void HandleResetTalentPoints ( class ABioWorldInfo* oWorldInfo, class UBioGlobalVariableTable* VarTable );
	void HandleNewHeavyWeapons ( class UBioGlobalVariableTable* VarTable );
	void HandleFacelift ( class UBioGlobalVariableTable* VarTable );
	void Activated ( );
};

UClass* USFXSeqAct_SystemsHandleResearch::pClassPointer = NULL;

// Class SFXGameContent.SFXSeqAct_HandleResearchNotifications
// 0x003C (0x012C - 0x00F0)
class USFXSeqAct_HandleResearchNotifications : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00F0 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGameContent.SFXSeqAct_HandleResearchNotifications.srResearchUnlockedTitle
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00F4 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGameContent.SFXSeqAct_HandleResearchNotifications.srResearchUnlockedMessage
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00F8 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGameContent.SFXSeqAct_HandleResearchNotifications.srNewTechTitle
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00FC (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGameContent.SFXSeqAct_HandleResearchNotifications.srNewTechName
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0100 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGameContent.SFXSeqAct_HandleResearchNotifications.srNewTechText
	int                                                nLastUnlockedResearch;                            		// 0x0104 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nProfessorInParty;                                		// 0x0108 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nProfessorIsDead;                                 		// 0x010C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Tre_Tec_LoyaltyPower;                             		// 0x0110 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Tec_CounterForLoyaltyPower;                       		// 0x0114 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Tec_CounterForRetrain;                            		// 0x0118 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                TechCounterForUnlocks;                            		// 0x011C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                State_CR1_Done;                                   		// 0x0120 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                IntFaceliftMessage;                               		// 0x0124 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Dep_Tec_Facelift;                                 		// 0x0128 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96840 ];

		return pClassPointer;
	};

	int CountLoyalHenchman ( class ABioWorldInfo* WorldInfo );
	void UnlockRetrain ( class ABioWorldInfo* oWorldInfo );
	void UnlockLoyaltyPower ( class ABioWorldInfo* oWorldInfo );
	void CheckForUpdates ( class ABioWorldInfo* oWorldInfo, unsigned long bFireHints );
	void UnlockFacelift ( class ABioWorldInfo* oWorldInfo );
	void Activated ( );
};

UClass* USFXSeqAct_HandleResearchNotifications::pClassPointer = NULL;

// Class SFXGameContent.SFXSeqAct_HandleHenchTalk
// 0x007C (0x016C - 0x00F0)
class USFXSeqAct_HandleHenchTalk : public USequenceAction
{
public:
	int                                                VixenFlag;                                        		// 0x00F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                LeadingFlag;                                      		// 0x00F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ConvictFlag;                                      		// 0x00F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GethFlag;                                         		// 0x00FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AssassinFlag;                                     		// 0x0100 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ProfessorFlag;                                    		// 0x0104 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GruntFlag;                                        		// 0x0108 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MysticFlag;                                       		// 0x010C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GarrusFlag;                                       		// 0x0110 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                TaliFlag;                                         		// 0x0114 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                VixenUnlock;                                      		// 0x0118 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                LeadingUnlock;                                    		// 0x011C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ConvictUnlock;                                    		// 0x0120 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GethUnlock;                                       		// 0x0124 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AssassinUnlock;                                   		// 0x0128 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ProfessorUnlock;                                  		// 0x012C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GruntUnlock;                                      		// 0x0130 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MysticUnlock;                                     		// 0x0134 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GarrusUnlock;                                     		// 0x0138 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                TaliUnlock;                                       		// 0x013C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                VixenTreasure;                                    		// 0x0140 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                LeadingTreasure;                                  		// 0x0144 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ConvictTreasure;                                  		// 0x0148 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GethTreasure;                                     		// 0x014C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AssassinTreasure;                                 		// 0x0150 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ProfessorTreasure;                                		// 0x0154 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GruntTreasure;                                    		// 0x0158 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MysticTreasure;                                   		// 0x015C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GarrusTreasure;                                   		// 0x0160 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                TaliTreasure;                                     		// 0x0164 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nLastUnlockedResearch;                            		// 0x0168 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98806 ];

		return pClassPointer;
	};

	void HandleSpecMissions ( );
	void Activated ( );
};

UClass* USFXSeqAct_HandleHenchTalk::pClassPointer = NULL;

// Class SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy
// 0x0000 (0x00F0 - 0x00F0)
class USFXSeqAct_SystemsHandleArriveOnNormandy : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98808 ];

		return pClassPointer;
	};

	void HandleRestockAmmo ( class ASFXInventoryManager* oInventory );
	void HandleRestockMediGel ( class ASFXInventoryManager* oInventory );
	void Activated ( );
};

UClass* USFXSeqAct_SystemsHandleArriveOnNormandy::pClassPointer = NULL;

// Class SFXGameContent.SFXSeqAct_ChooseLoadout
// 0x0000 (0x0198 - 0x0198)
class USFXSeqAct_ChooseLoadout : public USFXSeqAct_ChooseLoadoutBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98811 ];

		return pClassPointer;
	};

	void Activated ( );
};

UClass* USFXSeqAct_ChooseLoadout::pClassPointer = NULL;

// Class SFXGameContent.SFXGameChoiceGUIData_HenchmenPowers
// 0x000C (0x007C - 0x0070)
class USFXGameChoiceGUIData_HenchmenPowers : public USFXGameChoiceGUIData
{
public:
	TArray< struct FHenchmanPowerData >                HenchmanPowerArray;                               		// 0x0070 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98822 ];

		return pClassPointer;
	};

};

UClass* USFXGameChoiceGUIData_HenchmenPowers::pClassPointer = NULL;

// Class SFXGameContent.BioSeqAct_SetPlotPersuadeCheck
// 0x0000 (0x00F0 - 0x00F0)
class UBioSeqAct_SetPlotPersuadeCheck : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98873 ];

		return pClassPointer;
	};

	void eventActivated ( );
	class ABioWorldInfo* getWorld ( );
};

UClass* UBioSeqAct_SetPlotPersuadeCheck::pClassPointer = NULL;

// Class SFXGameContent.SFXSeqAct_SetInteractionStrings
// 0x0014 (0x0104 - 0x00F0)
class USFXSeqAct_SetInteractionStrings : public USequenceAction
{
public:
	TArray< class AActor* >                            m_aoTargets;                                      		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00FC (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGameContent.SFXSeqAct_SetInteractionStrings.m_srTargetTipText
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0100 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGameContent.SFXSeqAct_SetInteractionStrings.m_srGameName

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 105249 ];

		return pClassPointer;
	};

	void Activated ( );
};

UClass* USFXSeqAct_SetInteractionStrings::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif