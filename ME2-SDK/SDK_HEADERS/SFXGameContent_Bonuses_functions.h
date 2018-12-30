/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_Bonuses_functions.h
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

// Function SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyDamageBonus.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AchievementPartyDamageBonus::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = (UFunction*) UObject::GObjObjects()->Data[ 77794 ];

	USFXGameEffect_AchievementPartyDamageBonus_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyDamageBonus.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AchievementPartyDamageBonus::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = (UFunction*) UObject::GObjObjects()->Data[ 77792 ];

	USFXGameEffect_AchievementPartyDamageBonus_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif