/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_Powers_functions.h
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

// Function SFXGameContent_Powers.SFXGameEffect_DamageBonus.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_DamageBonus_Powers::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = (UFunction*) UObject::GObjObjects()->Data[ 77786 ];

	USFXGameEffect_DamageBonus_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_DamageBonus.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_DamageBonus_Powers::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = (UFunction*) UObject::GObjObjects()->Data[ 77782 ];

	USFXGameEffect_DamageBonus_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_Overload::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 96115 ];

	USFXPowerScript_Overload_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.SpawnBigImpactVFX
// [0x00020002] 
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )

void USFXPowerScript_Overload::SpawnBigImpactVFX ( class AActor* oImpacted )
{
	static UFunction* pFnSpawnBigImpactVFX = NULL;

	if ( ! pFnSpawnBigImpactVFX )
		pFnSpawnBigImpactVFX = (UFunction*) UObject::GObjObjects()->Data[ 96121 ];

	USFXPowerScript_Overload_execSpawnBigImpactVFX_Parms SpawnBigImpactVFX_Parms;
	SpawnBigImpactVFX_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnSpawnBigImpactVFX, &SpawnBigImpactVFX_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.ExplodeEnemy
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ABioPawn*                oCaster                        ( CPF_Parm )

void USFXPowerScript_Overload::ExplodeEnemy ( class ABioPawn* oPawn, class ABioPawn* oCaster )
{
	static UFunction* pFnExplodeEnemy = NULL;

	if ( ! pFnExplodeEnemy )
		pFnExplodeEnemy = (UFunction*) UObject::GObjObjects()->Data[ 96124 ];

	USFXPowerScript_Overload_execExplodeEnemy_Parms ExplodeEnemy_Parms;
	ExplodeEnemy_Parms.oPawn = oPawn;
	ExplodeEnemy_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnExplodeEnemy, &ExplodeEnemy_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.CanEnemyBeExploded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )

bool USFXPowerScript_Overload::CanEnemyBeExploded ( class ABioPawn* oPawn )
{
	static UFunction* pFnCanEnemyBeExploded = NULL;

	if ( ! pFnCanEnemyBeExploded )
		pFnCanEnemyBeExploded = (UFunction*) UObject::GObjObjects()->Data[ 96127 ];

	USFXPowerScript_Overload_execCanEnemyBeExploded_Parms CanEnemyBeExploded_Parms;
	CanEnemyBeExploded_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnCanEnemyBeExploded, &CanEnemyBeExploded_Parms, NULL );

	return CanEnemyBeExploded_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.TurnOnDeathPower
// [0x00020002] 
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )

void USFXPowerScript_Overload::TurnOnDeathPower ( class AActor* oImpacted )
{
	static UFunction* pFnTurnOnDeathPower = NULL;

	if ( ! pFnTurnOnDeathPower )
		pFnTurnOnDeathPower = (UFunction*) UObject::GObjObjects()->Data[ 96130 ];

	USFXPowerScript_Overload_execTurnOnDeathPower_Parms TurnOnDeathPower_Parms;
	TurnOnDeathPower_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnTurnOnDeathPower, &TurnOnDeathPower_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.StunRobot
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

void USFXPowerScript_Overload::StunRobot ( class ABioPawn* oPawn, float fDuration )
{
	static UFunction* pFnStunRobot = NULL;

	if ( ! pFnStunRobot )
		pFnStunRobot = (UFunction*) UObject::GObjObjects()->Data[ 96135 ];

	USFXPowerScript_Overload_execStunRobot_Parms StunRobot_Parms;
	StunRobot_Parms.oPawn = oPawn;
	StunRobot_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStunRobot, &StunRobot_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_Overload::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 96162 ];

	USFXPowerScript_Overload_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_Overload::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 96169 ];

	USFXPowerScript_Overload_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_Power_Seeking_NPC::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 95926 ];

	ASFXProjectile_Power_Seeking_NPC_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.GetAimLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )

struct FVector ASFXProjectile_Power_Seeking_NPC::GetAimLocation ( class AActor* Target )
{
	static UFunction* pFnGetAimLocation = NULL;

	if ( ! pFnGetAimLocation )
		pFnGetAimLocation = (UFunction*) UObject::GObjObjects()->Data[ 95947 ];

	ASFXProjectile_Power_Seeking_NPC_execGetAimLocation_Parms GetAimLocation_Parms;
	GetAimLocation_Parms.Target = Target;

	this->ProcessEvent ( pFnGetAimLocation, &GetAimLocation_Parms, NULL );

	return GetAimLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.InitializePowerProjectile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fTravelSpeed                   ( CPF_Parm )
// float                          fRadius                        ( CPF_Parm )
// class UBioPower*               oPower                         ( CPF_Parm )

bool ASFXProjectile_Power_Seeking_NPC::InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class UBioPower* oPower )
{
	static UFunction* pFnInitializePowerProjectile = NULL;

	if ( ! pFnInitializePowerProjectile )
		pFnInitializePowerProjectile = (UFunction*) UObject::GObjObjects()->Data[ 95954 ];

	ASFXProjectile_Power_Seeking_NPC_execInitializePowerProjectile_Parms InitializePowerProjectile_Parms;
	InitializePowerProjectile_Parms.oCaster = oCaster;
	InitializePowerProjectile_Parms.fTravelSpeed = fTravelSpeed;
	InitializePowerProjectile_Parms.fRadius = fRadius;
	InitializePowerProjectile_Parms.oPower = oPower;

	this->ProcessEvent ( pFnInitializePowerProjectile, &InitializePowerProjectile_Parms, NULL );

	return InitializePowerProjectile_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPower_Incinerate_NPC.GetDamage
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Incinerate_NPC::GetDamage ( )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = (UFunction*) UObject::GObjObjects()->Data[ 96684 ];

	USFXPower_Incinerate_NPC_execGetDamage_Parms GetDamage_Parms;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPower_Overload.GetOverheatLength
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Overload::GetOverheatLength ( )
{
	static UFunction* pFnGetOverheatLength = NULL;

	if ( ! pFnGetOverheatLength )
		pFnGetOverheatLength = (UFunction*) UObject::GObjObjects()->Data[ 96672 ];

	USFXPower_Overload_execGetOverheatLength_Parms GetOverheatLength_Parms;

	this->ProcessEvent ( pFnGetOverheatLength, &GetOverheatLength_Parms, NULL );

	return GetOverheatLength_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPower_Overload.GetRobotStunLength
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Overload::GetRobotStunLength ( )
{
	static UFunction* pFnGetRobotStunLength = NULL;

	if ( ! pFnGetRobotStunLength )
		pFnGetRobotStunLength = (UFunction*) UObject::GObjObjects()->Data[ 96674 ];

	USFXPower_Overload_execGetRobotStunLength_Parms GetRobotStunLength_Parms;

	this->ProcessEvent ( pFnGetRobotStunLength, &GetRobotStunLength_Parms, NULL );

	return GetRobotStunLength_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_Incinerate::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 96195 ];

	USFXPowerScript_Incinerate_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.ExplodeEnemy
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ABioPawn*                oCaster                        ( CPF_Parm )

void USFXPowerScript_Incinerate::ExplodeEnemy ( class ABioPawn* oPawn, class ABioPawn* oCaster )
{
	static UFunction* pFnExplodeEnemy = NULL;

	if ( ! pFnExplodeEnemy )
		pFnExplodeEnemy = (UFunction*) UObject::GObjObjects()->Data[ 96200 ];

	USFXPowerScript_Incinerate_execExplodeEnemy_Parms ExplodeEnemy_Parms;
	ExplodeEnemy_Parms.oPawn = oPawn;
	ExplodeEnemy_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnExplodeEnemy, &ExplodeEnemy_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.CanEnemyBeExploded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )

bool USFXPowerScript_Incinerate::CanEnemyBeExploded ( class ABioPawn* oPawn )
{
	static UFunction* pFnCanEnemyBeExploded = NULL;

	if ( ! pFnCanEnemyBeExploded )
		pFnCanEnemyBeExploded = (UFunction*) UObject::GObjObjects()->Data[ 96203 ];

	USFXPowerScript_Incinerate_execCanEnemyBeExploded_Parms CanEnemyBeExploded_Parms;
	CanEnemyBeExploded_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnCanEnemyBeExploded, &CanEnemyBeExploded_Parms, NULL );

	return CanEnemyBeExploded_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.CauseAnimatedReaction
// [0x00020002] 
// Parameters infos:
// class AActor*                  oHitActor                      ( CPF_Parm )
// float                          fDelay                         ( CPF_Parm )

void USFXPowerScript_Incinerate::CauseAnimatedReaction ( class AActor* oHitActor, float fDelay )
{
	static UFunction* pFnCauseAnimatedReaction = NULL;

	if ( ! pFnCauseAnimatedReaction )
		pFnCauseAnimatedReaction = (UFunction*) UObject::GObjObjects()->Data[ 96222 ];

	USFXPowerScript_Incinerate_execCauseAnimatedReaction_Parms CauseAnimatedReaction_Parms;
	CauseAnimatedReaction_Parms.oHitActor = oHitActor;
	CauseAnimatedReaction_Parms.fDelay = fDelay;

	this->ProcessEvent ( pFnCauseAnimatedReaction, &CauseAnimatedReaction_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_Incinerate::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 96243 ];

	USFXPowerScript_Incinerate_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_Incinerate::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 96248 ];

	USFXPowerScript_Incinerate_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPower_Incinerate.GetDuration
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Incinerate::GetDuration ( )
{
	static UFunction* pFnGetDuration = NULL;

	if ( ! pFnGetDuration )
		pFnGetDuration = (UFunction*) UObject::GObjObjects()->Data[ 96703 ];

	USFXPower_Incinerate_execGetDuration_Parms GetDuration_Parms;

	this->ProcessEvent ( pFnGetDuration, &GetDuration_Parms, NULL );

	return GetDuration_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.GetHUDWheelIconInfo
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class ABioPawn*                OwnerPawn                      ( CPF_Parm )

struct FString USFXPowerScript_FirstAid::GetHUDWheelIconInfo ( class ABioPawn* OwnerPawn )
{
	static UFunction* pFnGetHUDWheelIconInfo = NULL;

	if ( ! pFnGetHUDWheelIconInfo )
		pFnGetHUDWheelIconInfo = (UFunction*) UObject::GObjObjects()->Data[ 96268 ];

	USFXPowerScript_FirstAid_execGetHUDWheelIconInfo_Parms GetHUDWheelIconInfo_Parms;
	GetHUDWheelIconInfo_Parms.OwnerPawn = OwnerPawn;

	this->ProcessEvent ( pFnGetHUDWheelIconInfo, &GetHUDWheelIconInfo_Parms, NULL );

	return GetHUDWheelIconInfo_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_FirstAid::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 96279 ];

	USFXPowerScript_FirstAid_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.CountMediGel
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPlayerSquad*         oPlayerSquad                   ( CPF_Parm )

int USFXPowerScript_FirstAid::CountMediGel ( class ABioPlayerSquad* oPlayerSquad )
{
	static UFunction* pFnCountMediGel = NULL;

	if ( ! pFnCountMediGel )
		pFnCountMediGel = (UFunction*) UObject::GObjObjects()->Data[ 96284 ];

	USFXPowerScript_FirstAid_execCountMediGel_Parms CountMediGel_Parms;
	CountMediGel_Parms.oPlayerSquad = oPlayerSquad;

	this->ProcessEvent ( pFnCountMediGel, &CountMediGel_Parms, NULL );

	return CountMediGel_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_FirstAid::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 96297 ];

	USFXPowerScript_FirstAid_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_FirstAid::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 96302 ];

	USFXPowerScript_FirstAid_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool USFXPowerScript_FirstAid::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = (UFunction*) UObject::GObjObjects()->Data[ 96306 ];

	USFXPowerScript_FirstAid_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.RemovePowerBonusEffect
// [0x00020002] 
// Parameters infos:
// class AActor*                  oTarget                        ( CPF_Parm )
// class UClass*                  ClassName                      ( CPF_Parm )
// struct FName                   nmCategory                     ( CPF_Parm )
// class UClass*                  PowerClass                     ( CPF_Parm )

void USFXPowerScript_PassivePower::RemovePowerBonusEffect ( class AActor* oTarget, class UClass* ClassName, struct FName nmCategory, class UClass* PowerClass )
{
	static UFunction* pFnRemovePowerBonusEffect = NULL;

	if ( ! pFnRemovePowerBonusEffect )
		pFnRemovePowerBonusEffect = (UFunction*) UObject::GObjObjects()->Data[ 96325 ];

	USFXPowerScript_PassivePower_execRemovePowerBonusEffect_Parms RemovePowerBonusEffect_Parms;
	RemovePowerBonusEffect_Parms.oTarget = oTarget;
	RemovePowerBonusEffect_Parms.ClassName = ClassName;
	memcpy ( &RemovePowerBonusEffect_Parms.nmCategory, &nmCategory, 0x8 );
	RemovePowerBonusEffect_Parms.PowerClass = PowerClass;

	this->ProcessEvent ( pFnRemovePowerBonusEffect, &RemovePowerBonusEffect_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPowerBonusEffect
// [0x00020002] 
// Parameters infos:
// class AActor*                  oTarget                        ( CPF_Parm )
// class UClass*                  ClassName                      ( CPF_Parm )
// float                          fEffectValue                   ( CPF_Parm )
// struct FName                   nmCategory                     ( CPF_Parm )
// class UClass*                  PowerClass                     ( CPF_Parm )

void USFXPowerScript_PassivePower::ApplyPowerBonusEffect ( class AActor* oTarget, class UClass* ClassName, float fEffectValue, struct FName nmCategory, class UClass* PowerClass )
{
	static UFunction* pFnApplyPowerBonusEffect = NULL;

	if ( ! pFnApplyPowerBonusEffect )
		pFnApplyPowerBonusEffect = (UFunction*) UObject::GObjObjects()->Data[ 96501 ];

	USFXPowerScript_PassivePower_execApplyPowerBonusEffect_Parms ApplyPowerBonusEffect_Parms;
	ApplyPowerBonusEffect_Parms.oTarget = oTarget;
	ApplyPowerBonusEffect_Parms.ClassName = ClassName;
	ApplyPowerBonusEffect_Parms.fEffectValue = fEffectValue;
	memcpy ( &ApplyPowerBonusEffect_Parms.nmCategory, &nmCategory, 0x8 );
	ApplyPowerBonusEffect_Parms.PowerClass = PowerClass;

	this->ProcessEvent ( pFnApplyPowerBonusEffect, &ApplyPowerBonusEffect_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyHealthModifier
// [0x00020002] 
// Parameters infos:
// float                          fHealthModifier                ( CPF_Parm )
// class AActor*                  Target                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerScript_PassivePower::ApplyHealthModifier ( float fHealthModifier, class AActor* Target )
{
	static UFunction* pFnApplyHealthModifier = NULL;

	if ( ! pFnApplyHealthModifier )
		pFnApplyHealthModifier = (UFunction*) UObject::GObjObjects()->Data[ 96504 ];

	USFXPowerScript_PassivePower_execApplyHealthModifier_Parms ApplyHealthModifier_Parms;
	ApplyHealthModifier_Parms.fHealthModifier = fHealthModifier;
	ApplyHealthModifier_Parms.Target = Target;

	this->ProcessEvent ( pFnApplyHealthModifier, &ApplyHealthModifier_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyWeaponDamageModifier
// [0x00020002] 
// Parameters infos:
// float                          fDamageModifier                ( CPF_Parm )
// class AActor*                  Target                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerScript_PassivePower::ApplyWeaponDamageModifier ( float fDamageModifier, class AActor* Target )
{
	static UFunction* pFnApplyWeaponDamageModifier = NULL;

	if ( ! pFnApplyWeaponDamageModifier )
		pFnApplyWeaponDamageModifier = (UFunction*) UObject::GObjObjects()->Data[ 96507 ];

	USFXPowerScript_PassivePower_execApplyWeaponDamageModifier_Parms ApplyWeaponDamageModifier_Parms;
	ApplyWeaponDamageModifier_Parms.fDamageModifier = fDamageModifier;
	ApplyWeaponDamageModifier_Parms.Target = Target;

	this->ProcessEvent ( pFnApplyWeaponDamageModifier, &ApplyWeaponDamageModifier_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPowerCooldownModifier
// [0x00020002] 
// Parameters infos:
// float                          fCooldownModifier              ( CPF_Parm )
// class AActor*                  Target                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerScript_PassivePower::ApplyPowerCooldownModifier ( float fCooldownModifier, class AActor* Target )
{
	static UFunction* pFnApplyPowerCooldownModifier = NULL;

	if ( ! pFnApplyPowerCooldownModifier )
		pFnApplyPowerCooldownModifier = (UFunction*) UObject::GObjObjects()->Data[ 96510 ];

	USFXPowerScript_PassivePower_execApplyPowerCooldownModifier_Parms ApplyPowerCooldownModifier_Parms;
	ApplyPowerCooldownModifier_Parms.fCooldownModifier = fCooldownModifier;
	ApplyPowerCooldownModifier_Parms.Target = Target;

	this->ProcessEvent ( pFnApplyPowerCooldownModifier, &ApplyPowerCooldownModifier_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPassiveBonus
// [0x00020002] 
// Parameters infos:
// class UClass*                  EffectClass                    ( CPF_Parm )
// float                          fModifier                      ( CPF_Parm )
// class AActor*                  Target                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerScript_PassivePower::ApplyPassiveBonus ( class UClass* EffectClass, float fModifier, class AActor* Target )
{
	static UFunction* pFnApplyPassiveBonus = NULL;

	if ( ! pFnApplyPassiveBonus )
		pFnApplyPassiveBonus = (UFunction*) UObject::GObjObjects()->Data[ 96515 ];

	USFXPowerScript_PassivePower_execApplyPassiveBonus_Parms ApplyPassiveBonus_Parms;
	ApplyPassiveBonus_Parms.EffectClass = EffectClass;
	ApplyPassiveBonus_Parms.fModifier = fModifier;
	ApplyPassiveBonus_Parms.Target = Target;

	this->ProcessEvent ( pFnApplyPassiveBonus, &ApplyPassiveBonus_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyGlobalBonus
// [0x00020000] 
// Parameters infos:

void USFXPowerScript_PassivePower::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = (UFunction*) UObject::GObjObjects()->Data[ 96516 ];

	USFXPowerScript_PassivePower_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnSquadMemberAdded
// [0x00020002] 
// Parameters infos:
// class APawn*                   Pawn                           ( CPF_Parm )

void USFXPowerScript_PassivePower::OnSquadMemberAdded ( class APawn* Pawn )
{
	static UFunction* pFnOnSquadMemberAdded = NULL;

	if ( ! pFnOnSquadMemberAdded )
		pFnOnSquadMemberAdded = (UFunction*) UObject::GObjObjects()->Data[ 96518 ];

	USFXPowerScript_PassivePower_execOnSquadMemberAdded_Parms OnSquadMemberAdded_Parms;
	OnSquadMemberAdded_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnOnSquadMemberAdded, &OnSquadMemberAdded_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnPowersLoaded
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_PassivePower::OnPowersLoaded ( )
{
	static UFunction* pFnOnPowersLoaded = NULL;

	if ( ! pFnOnPowersLoaded )
		pFnOnPowersLoaded = (UFunction*) UObject::GObjObjects()->Data[ 96519 ];

	USFXPowerScript_PassivePower_execOnPowersLoaded_Parms OnPowersLoaded_Parms;

	this->ProcessEvent ( pFnOnPowersLoaded, &OnPowersLoaded_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnPowerRankIncreased
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_PassivePower::OnPowerRankIncreased ( )
{
	static UFunction* pFnOnPowerRankIncreased = NULL;

	if ( ! pFnOnPowerRankIncreased )
		pFnOnPowerRankIncreased = (UFunction*) UObject::GObjObjects()->Data[ 96520 ];

	USFXPowerScript_PassivePower_execOnPowerRankIncreased_Parms OnPowerRankIncreased_Parms;

	this->ProcessEvent ( pFnOnPowerRankIncreased, &OnPowerRankIncreased_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXPowerScript_PassivePower::eventInitializePowerScript ( )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 96521 ];

	USFXPowerScript_PassivePower_eventInitializePowerScript_Parms InitializePowerScript_Parms;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_EngineerPassive.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_EngineerPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = (UFunction*) UObject::GObjObjects()->Data[ 96316 ];

	USFXPowerScript_EngineerPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.Recycle
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_Power_Seeking::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 95975 ];

	ASFXProjectile_Power_Seeking_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.InitializeRotation
// [0x00020000] 
// Parameters infos:
// class APawn*                   oCasterPawn                    ( CPF_Parm )

void ASFXProjectile_Power_Seeking::InitializeRotation ( class APawn* oCasterPawn )
{
	static UFunction* pFnInitializeRotation = NULL;

	if ( ! pFnInitializeRotation )
		pFnInitializeRotation = (UFunction*) UObject::GObjObjects()->Data[ 95977 ];

	ASFXProjectile_Power_Seeking_execInitializeRotation_Parms InitializeRotation_Parms;
	InitializeRotation_Parms.oCasterPawn = oCasterPawn;

	this->ProcessEvent ( pFnInitializeRotation, &InitializeRotation_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.InitializePowerProjectile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fTravelSpeed                   ( CPF_Parm )
// float                          fRadius                        ( CPF_Parm )
// class UBioPower*               oPower                         ( CPF_Parm )

bool ASFXProjectile_Power_Seeking::InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class UBioPower* oPower )
{
	static UFunction* pFnInitializePowerProjectile = NULL;

	if ( ! pFnInitializePowerProjectile )
		pFnInitializePowerProjectile = (UFunction*) UObject::GObjObjects()->Data[ 95984 ];

	ASFXProjectile_Power_Seeking_execInitializePowerProjectile_Parms InitializePowerProjectile_Parms;
	InitializePowerProjectile_Parms.oCaster = oCaster;
	InitializePowerProjectile_Parms.fTravelSpeed = fTravelSpeed;
	InitializePowerProjectile_Parms.fRadius = fRadius;
	InitializePowerProjectile_Parms.oPower = oPower;

	this->ProcessEvent ( pFnInitializePowerProjectile, &InitializePowerProjectile_Parms, NULL );

	return InitializePowerProjectile_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.CanLockOn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// class APawn*                   CasterPawn                     ( CPF_Parm )

bool ASFXProjectile_Power_Seeking::CanLockOn ( class AActor* Target, class APawn* CasterPawn )
{
	static UFunction* pFnCanLockOn = NULL;

	if ( ! pFnCanLockOn )
		pFnCanLockOn = (UFunction*) UObject::GObjObjects()->Data[ 95991 ];

	ASFXProjectile_Power_Seeking_execCanLockOn_Parms CanLockOn_Parms;
	CanLockOn_Parms.Target = Target;
	CanLockOn_Parms.CasterPawn = CasterPawn;

	this->ProcessEvent ( pFnCanLockOn, &CanLockOn_Parms, NULL );

	return CanLockOn_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_Power_Seeking::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 96002 ];

	ASFXProjectile_Power_Seeking_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.ShouldModifyVelocity
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXProjectile_Power_Seeking::ShouldModifyVelocity ( )
{
	static UFunction* pFnShouldModifyVelocity = NULL;

	if ( ! pFnShouldModifyVelocity )
		pFnShouldModifyVelocity = (UFunction*) UObject::GObjObjects()->Data[ 96018 ];

	ASFXProjectile_Power_Seeking_execShouldModifyVelocity_Parms ShouldModifyVelocity_Parms;

	this->ProcessEvent ( pFnShouldModifyVelocity, &ShouldModifyVelocity_Parms, NULL );

	return ShouldModifyVelocity_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.ChordLength
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          ChordLen                       ( CPF_Parm )
// float                          Theta                          ( CPF_Parm )

float ASFXProjectile_Power_Seeking::ChordLength ( float ChordLen, float Theta )
{
	static UFunction* pFnChordLength = NULL;

	if ( ! pFnChordLength )
		pFnChordLength = (UFunction*) UObject::GObjObjects()->Data[ 96091 ];

	ASFXProjectile_Power_Seeking_execChordLength_Parms ChordLength_Parms;
	ChordLength_Parms.ChordLen = ChordLen;
	ChordLength_Parms.Theta = Theta;

	this->ProcessEvent ( pFnChordLength, &ChordLength_Parms, NULL );

	return ChordLength_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.GetAimLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )

struct FVector ASFXProjectile_Power_Seeking::GetAimLocation ( class AActor* Target )
{
	static UFunction* pFnGetAimLocation = NULL;

	if ( ! pFnGetAimLocation )
		pFnGetAimLocation = (UFunction*) UObject::GObjObjects()->Data[ 96090 ];

	ASFXProjectile_Power_Seeking_execGetAimLocation_Parms GetAimLocation_Parms;
	GetAimLocation_Parms.Target = Target;

	this->ProcessEvent ( pFnGetAimLocation, &GetAimLocation_Parms, NULL );

	return GetAimLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.AcquireTarget
// [0x00820002] 
// Parameters infos:
// class AActor*                  Target                         ( CPF_Parm )

void ASFXProjectile_Power_Seeking::AcquireTarget ( class AActor* Target )
{
	static UFunction* pFnAcquireTarget = NULL;

	if ( ! pFnAcquireTarget )
		pFnAcquireTarget = (UFunction*) UObject::GObjObjects()->Data[ 96097 ];

	ASFXProjectile_Power_Seeking_execAcquireTarget_Parms AcquireTarget_Parms;
	AcquireTarget_Parms.Target = Target;

	this->ProcessEvent ( pFnAcquireTarget, &AcquireTarget_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXProjectile_Power_SuperSeeking.InitializeRotation
// [0x00820002] 
// Parameters infos:
// class APawn*                   oCasterPawn                    ( CPF_Parm )

void ASFXProjectile_Power_SuperSeeking::InitializeRotation ( class APawn* oCasterPawn )
{
	static UFunction* pFnInitializeRotation = NULL;

	if ( ! pFnInitializeRotation )
		pFnInitializeRotation = (UFunction*) UObject::GObjObjects()->Data[ 95972 ];

	ASFXProjectile_Power_SuperSeeking_execInitializeRotation_Parms InitializeRotation_Parms;
	InitializeRotation_Parms.oCasterPawn = oCasterPawn;

	this->ProcessEvent ( pFnInitializeRotation, &InitializeRotation_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_CryoFreeze::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 96529 ];

	USFXPowerScript_CryoFreeze_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_CryoFreeze::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 96543 ];

	USFXPowerScript_CryoFreeze_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_CryoFreeze::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 96548 ];

	USFXPowerScript_CryoFreeze_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_CombatDroneDeath::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 96563 ];

	USFXPowerScript_CombatDroneDeath_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_CombatDroneDeath::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 96568 ];

	USFXPowerScript_CombatDroneDeath_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_CombatDroneAttack_NPC::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 96577 ];

	USFXPowerScript_CombatDroneAttack_NPC_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_CombatDroneAttack_NPC::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 96587 ];

	USFXPowerScript_CombatDroneAttack_NPC_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_CombatDroneAttack_NPC::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 96592 ];

	USFXPowerScript_CombatDroneAttack_NPC_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_CombatDroneAttack::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 96603 ];

	USFXPowerScript_CombatDroneAttack_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_CombatDroneAttack::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 96614 ];

	USFXPowerScript_CombatDroneAttack_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_CombatDroneAttack::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 96619 ];

	USFXPowerScript_CombatDroneAttack_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPower_Cloak_NPC.GetDamageMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Cloak_NPC::GetDamageMultiplier ( )
{
	static UFunction* pFnGetDamageMultiplier = NULL;

	if ( ! pFnGetDamageMultiplier )
		pFnGetDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 96816 ];

	USFXPower_Cloak_NPC_execGetDamageMultiplier_Parms GetDamageMultiplier_Parms;

	this->ProcessEvent ( pFnGetDamageMultiplier, &GetDamageMultiplier_Parms, NULL );

	return GetDamageMultiplier_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_Cloak::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 96630 ];

	USFXPowerScript_Cloak_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.OnCloakEnded
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_Cloak::OnCloakEnded ( )
{
	static UFunction* pFnOnCloakEnded = NULL;

	if ( ! pFnOnCloakEnded )
		pFnOnCloakEnded = (UFunction*) UObject::GObjObjects()->Data[ 96632 ];

	USFXPowerScript_Cloak_execOnCloakEnded_Parms OnCloakEnded_Parms;

	this->ProcessEvent ( pFnOnCloakEnded, &OnCloakEnded_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_Cloak::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 96644 ];

	USFXPowerScript_Cloak_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.AdjustCooldown
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fCoolDownTime                  ( CPF_Parm | CPF_OutParm )

bool USFXPowerScript_Cloak::eventAdjustCooldown ( float* fCoolDownTime )
{
	static UFunction* pFnAdjustCooldown = NULL;

	if ( ! pFnAdjustCooldown )
		pFnAdjustCooldown = (UFunction*) UObject::GObjObjects()->Data[ 96647 ];

	USFXPowerScript_Cloak_eventAdjustCooldown_Parms AdjustCooldown_Parms;

	this->ProcessEvent ( pFnAdjustCooldown, &AdjustCooldown_Parms, NULL );

	if ( fCoolDownTime )
		*fCoolDownTime = AdjustCooldown_Parms.fCoolDownTime;

	return AdjustCooldown_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_Cloak::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 96652 ];

	USFXPowerScript_Cloak_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPawn_EngineerTechDrone.SpawnDeathVFX
// [0x00020002] 
// Parameters infos:

void ASFXPawn_EngineerTechDrone::SpawnDeathVFX ( )
{
	static UFunction* pFnSpawnDeathVFX = NULL;

	if ( ! pFnSpawnDeathVFX )
		pFnSpawnDeathVFX = (UFunction*) UObject::GObjObjects()->Data[ 96924 ];

	ASFXPawn_EngineerTechDrone_execSpawnDeathVFX_Parms SpawnDeathVFX_Parms;

	this->ProcessEvent ( pFnSpawnDeathVFX, &SpawnDeathVFX_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerTechDrone.Died
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ASFXPawn_EngineerTechDrone::eventDied ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 96935 ];

	ASFXPawn_EngineerTechDrone_eventDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_OverheatWeapons::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = (UFunction*) UObject::GObjObjects()->Data[ 97065 ];

	USFXGameEffect_OverheatWeapons_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OverheatWeapon
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_OverheatWeapons::OverheatWeapon ( )
{
	static UFunction* pFnOverheatWeapon = NULL;

	if ( ! pFnOverheatWeapon )
		pFnOverheatWeapon = (UFunction*) UObject::GObjObjects()->Data[ 97068 ];

	USFXGameEffect_OverheatWeapons_execOverheatWeapon_Parms OverheatWeapon_Parms;

	this->ProcessEvent ( pFnOverheatWeapon, &OverheatWeapon_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnUpdate
// [0x00020002] 
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_OverheatWeapons::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 97070 ];

	USFXGameEffect_OverheatWeapons_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_OverheatWeapons::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = (UFunction*) UObject::GObjObjects()->Data[ 97073 ];

	USFXGameEffect_OverheatWeapons_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.EndStealthVFX
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::EndStealthVFX ( )
{
	static UFunction* pFnEndStealthVFX = NULL;

	if ( ! pFnEndStealthVFX )
		pFnEndStealthVFX = (UFunction*) UObject::GObjObjects()->Data[ 97109 ];

	USFXGameEffect_CloakVFX_execEndStealthVFX_Parms EndStealthVFX_Parms;

	this->ProcessEvent ( pFnEndStealthVFX, &EndStealthVFX_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.RestoreMeshMaterials
// [0x00020002] 
// Parameters infos:
// class USkeletalMeshComponent*  Mesh                           ( CPF_Parm | CPF_EditInline )

void USFXGameEffect_CloakVFX::RestoreMeshMaterials ( class USkeletalMeshComponent* Mesh )
{
	static UFunction* pFnRestoreMeshMaterials = NULL;

	if ( ! pFnRestoreMeshMaterials )
		pFnRestoreMeshMaterials = (UFunction*) UObject::GObjObjects()->Data[ 97114 ];

	USFXGameEffect_CloakVFX_execRestoreMeshMaterials_Parms RestoreMeshMaterials_Parms;
	RestoreMeshMaterials_Parms.Mesh = Mesh;

	this->ProcessEvent ( pFnRestoreMeshMaterials, &RestoreMeshMaterials_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.TransitionOff
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::TransitionOff ( )
{
	static UFunction* pFnTransitionOff = NULL;

	if ( ! pFnTransitionOff )
		pFnTransitionOff = (UFunction*) UObject::GObjObjects()->Data[ 97116 ];

	USFXGameEffect_CloakVFX_execTransitionOff_Parms TransitionOff_Parms;

	this->ProcessEvent ( pFnTransitionOff, &TransitionOff_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.DelayedTransitionOff
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::DelayedTransitionOff ( )
{
	static UFunction* pFnDelayedTransitionOff = NULL;

	if ( ! pFnDelayedTransitionOff )
		pFnDelayedTransitionOff = (UFunction*) UObject::GObjObjects()->Data[ 97118 ];

	USFXGameEffect_CloakVFX_execDelayedTransitionOff_Parms DelayedTransitionOff_Parms;

	this->ProcessEvent ( pFnDelayedTransitionOff, &DelayedTransitionOff_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = (UFunction*) UObject::GObjObjects()->Data[ 97121 ];

	USFXGameEffect_CloakVFX_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnUpdate
// [0x00020002] 
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_CloakVFX::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 97124 ];

	USFXGameEffect_CloakVFX_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StartTransition
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::StartTransition ( )
{
	static UFunction* pFnStartTransition = NULL;

	if ( ! pFnStartTransition )
		pFnStartTransition = (UFunction*) UObject::GObjObjects()->Data[ 97126 ];

	USFXGameEffect_CloakVFX_execStartTransition_Parms StartTransition_Parms;

	this->ProcessEvent ( pFnStartTransition, &StartTransition_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.SwapMeshMaterials
// [0x00020002] 
// Parameters infos:
// class USkeletalMeshComponent*  oSkeletalMesh                  ( CPF_Parm | CPF_EditInline )

void USFXGameEffect_CloakVFX::SwapMeshMaterials ( class USkeletalMeshComponent* oSkeletalMesh )
{
	static UFunction* pFnSwapMeshMaterials = NULL;

	if ( ! pFnSwapMeshMaterials )
		pFnSwapMeshMaterials = (UFunction*) UObject::GObjObjects()->Data[ 97131 ];

	USFXGameEffect_CloakVFX_execSwapMeshMaterials_Parms SwapMeshMaterials_Parms;
	SwapMeshMaterials_Parms.oSkeletalMesh = oSkeletalMesh;

	this->ProcessEvent ( pFnSwapMeshMaterials, &SwapMeshMaterials_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.SwapInvisibleMaterials
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::SwapInvisibleMaterials ( )
{
	static UFunction* pFnSwapInvisibleMaterials = NULL;

	if ( ! pFnSwapInvisibleMaterials )
		pFnSwapInvisibleMaterials = (UFunction*) UObject::GObjObjects()->Data[ 97137 ];

	USFXGameEffect_CloakVFX_execSwapInvisibleMaterials_Parms SwapInvisibleMaterials_Parms;

	this->ProcessEvent ( pFnSwapInvisibleMaterials, &SwapInvisibleMaterials_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StoreMeshMaterials
// [0x00020002] 
// Parameters infos:
// class USkeletalMeshComponent*  oSkeletalMesh                  ( CPF_Parm | CPF_EditInline )

void USFXGameEffect_CloakVFX::StoreMeshMaterials ( class USkeletalMeshComponent* oSkeletalMesh )
{
	static UFunction* pFnStoreMeshMaterials = NULL;

	if ( ! pFnStoreMeshMaterials )
		pFnStoreMeshMaterials = (UFunction*) UObject::GObjObjects()->Data[ 97142 ];

	USFXGameEffect_CloakVFX_execStoreMeshMaterials_Parms StoreMeshMaterials_Parms;
	StoreMeshMaterials_Parms.oSkeletalMesh = oSkeletalMesh;

	this->ProcessEvent ( pFnStoreMeshMaterials, &StoreMeshMaterials_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StoreStartingMaterials
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::StoreStartingMaterials ( )
{
	static UFunction* pFnStoreStartingMaterials = NULL;

	if ( ! pFnStoreStartingMaterials )
		pFnStoreStartingMaterials = (UFunction*) UObject::GObjObjects()->Data[ 97146 ];

	USFXGameEffect_CloakVFX_execStoreStartingMaterials_Parms StoreStartingMaterials_Parms;

	this->ProcessEvent ( pFnStoreStartingMaterials, &StoreStartingMaterials_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = (UFunction*) UObject::GObjObjects()->Data[ 97148 ];

	USFXGameEffect_CloakVFX_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.EndPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioPlayerMeleeScript::eventEndPhase ( unsigned char ePhase, class AActor* oCaster )
{
	static UFunction* pFnEndPhase = NULL;

	if ( ! pFnEndPhase )
		pFnEndPhase = (UFunction*) UObject::GObjObjects()->Data[ 97183 ];

	UBioPlayerMeleeScript_eventEndPhase_Parms EndPhase_Parms;
	EndPhase_Parms.ePhase = ePhase;
	EndPhase_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnEndPhase, &EndPhase_Parms, NULL );

	return EndPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.RemoveMeleeEffects
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )

void UBioPlayerMeleeScript::RemoveMeleeEffects ( class ABioPawn* oPawn )
{
	static UFunction* pFnRemoveMeleeEffects = NULL;

	if ( ! pFnRemoveMeleeEffects )
		pFnRemoveMeleeEffects = (UFunction*) UObject::GObjObjects()->Data[ 97186 ];

	UBioPlayerMeleeScript_execRemoveMeleeEffects_Parms RemoveMeleeEffects_Parms;
	RemoveMeleeEffects_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnRemoveMeleeEffects, &RemoveMeleeEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioPlayerMeleeScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 97209 ];

	UBioPlayerMeleeScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UBioPlayerMeleeScript::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 97211 ];

	UBioPlayerMeleeScript_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.StartPhase
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioPlayerMeleeScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 97218 ];

	UBioPlayerMeleeScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioReactionPowerScript.GetIncreasedReaction
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )
// unsigned char                  Reaction                       ( CPF_Parm )

unsigned char UBioReactionPowerScript::GetIncreasedReaction ( class AActor* oTarget, unsigned char Reaction )
{
	static UFunction* pFnGetIncreasedReaction = NULL;

	if ( ! pFnGetIncreasedReaction )
		pFnGetIncreasedReaction = (UFunction*) UObject::GObjObjects()->Data[ 97234 ];

	UBioReactionPowerScript_execGetIncreasedReaction_Parms GetIncreasedReaction_Parms;
	GetIncreasedReaction_Parms.oTarget = oTarget;
	GetIncreasedReaction_Parms.Reaction = Reaction;

	this->ProcessEvent ( pFnGetIncreasedReaction, &GetIncreasedReaction_Parms, NULL );

	return GetIncreasedReaction_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioReactionPowerScript.GetCombatReaction
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PowerRank                      ( CPF_Parm )
// class AActor*                  oTarget                        ( CPF_Parm )
// unsigned long                  ReactionStacks                 ( CPF_OptionalParm | CPF_Parm )

unsigned char UBioReactionPowerScript::GetCombatReaction ( int PowerRank, class AActor* oTarget, unsigned long ReactionStacks )
{
	static UFunction* pFnGetCombatReaction = NULL;

	if ( ! pFnGetCombatReaction )
		pFnGetCombatReaction = (UFunction*) UObject::GObjObjects()->Data[ 97241 ];

	UBioReactionPowerScript_execGetCombatReaction_Parms GetCombatReaction_Parms;
	GetCombatReaction_Parms.PowerRank = PowerRank;
	GetCombatReaction_Parms.oTarget = oTarget;
	GetCombatReaction_Parms.ReactionStacks = ReactionStacks;

	this->ProcessEvent ( pFnGetCombatReaction, &GetCombatReaction_Parms, NULL );

	return GetCombatReaction_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_HenchmenIgnorePawn::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = (UFunction*) UObject::GObjObjects()->Data[ 97089 ];

	USFXGameEffect_HenchmenIgnorePawn_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_HenchmenIgnorePawn::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = (UFunction*) UObject::GObjObjects()->Data[ 97094 ];

	USFXGameEffect_HenchmenIgnorePawn_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function SFXGameContent_Powers.BioHackingScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioHackingScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 97257 ];

	UBioHackingScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHackingScript.IsHacked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )

bool UBioHackingScript::IsHacked ( class ABioPawn* oPawn )
{
	static UFunction* pFnIsHacked = NULL;

	if ( ! pFnIsHacked )
		pFnIsHacked = (UFunction*) UObject::GObjObjects()->Data[ 97262 ];

	UBioHackingScript_execIsHacked_Parms IsHacked_Parms;
	IsHacked_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnIsHacked, &IsHacked_Parms, NULL );

	return IsHacked_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHackingScript.RemoveWeakerHack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )
// float                          fNewDuration                   ( CPF_Parm )

bool UBioHackingScript::RemoveWeakerHack ( class ABioPawn* oPawn, float fNewDuration )
{
	static UFunction* pFnRemoveWeakerHack = NULL;

	if ( ! pFnRemoveWeakerHack )
		pFnRemoveWeakerHack = (UFunction*) UObject::GObjObjects()->Data[ 97269 ];

	UBioHackingScript_execRemoveWeakerHack_Parms RemoveWeakerHack_Parms;
	RemoveWeakerHack_Parms.oPawn = oPawn;
	RemoveWeakerHack_Parms.fNewDuration = fNewDuration;

	this->ProcessEvent ( pFnRemoveWeakerHack, &RemoveWeakerHack_Parms, NULL );

	return RemoveWeakerHack_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHackingScript.UnHackPreviousTargets
// [0x00020002] 
// Parameters infos:
// class AActor*                  oCaster                        ( CPF_Parm )

void UBioHackingScript::UnHackPreviousTargets ( class AActor* oCaster )
{
	static UFunction* pFnUnHackPreviousTargets = NULL;

	if ( ! pFnUnHackPreviousTargets )
		pFnUnHackPreviousTargets = (UFunction*) UObject::GObjObjects()->Data[ 97273 ];

	UBioHackingScript_execUnHackPreviousTargets_Parms UnHackPreviousTargets_Parms;
	UnHackPreviousTargets_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnUnHackPreviousTargets, &UnHackPreviousTargets_Parms, NULL );
};

// Function SFXGameContent_Powers.BioHackingScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioHackingScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 97288 ];

	UBioHackingScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHackingScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioHackingScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 97293 ];

	UBioHackingScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_IgnorePawn.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_IgnorePawn::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = (UFunction*) UObject::GObjObjects()->Data[ 97082 ];

	USFXGameEffect_IgnorePawn_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_IgnorePawn.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_IgnorePawn::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = (UFunction*) UObject::GObjObjects()->Data[ 97084 ];

	USFXGameEffect_IgnorePawn_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.PlayDeathVocalization
// [0x00020000] 
// Parameters infos:
// class ABioPawn*                Killer                         ( CPF_Parm )

void ASFXPawn_EngineerCombatDrone::PlayDeathVocalization ( class ABioPawn* Killer )
{
	static UFunction* pFnPlayDeathVocalization = NULL;

	if ( ! pFnPlayDeathVocalization )
		pFnPlayDeathVocalization = (UFunction*) UObject::GObjObjects()->Data[ 97036 ];

	ASFXPawn_EngineerCombatDrone_execPlayDeathVocalization_Parms PlayDeathVocalization_Parms;
	PlayDeathVocalization_Parms.Killer = Killer;

	this->ProcessEvent ( pFnPlayDeathVocalization, &PlayDeathVocalization_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.Destroyed
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ASFXPawn_EngineerCombatDrone::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 97043 ];

	ASFXPawn_EngineerCombatDrone_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.Died
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ASFXPawn_EngineerCombatDrone::eventDied ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 97049 ];

	ASFXPawn_EngineerCombatDrone_eventDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.SetDroneColor2
// [0x00020002] 
// Parameters infos:
// struct FVector                 NewColor                       ( CPF_Parm )

void ASFXPawn_EngineerCombatDrone::SetDroneColor2 ( struct FVector NewColor )
{
	static UFunction* pFnSetDroneColor2 = NULL;

	if ( ! pFnSetDroneColor2 )
		pFnSetDroneColor2 = (UFunction*) UObject::GObjObjects()->Data[ 97051 ];

	ASFXPawn_EngineerCombatDrone_execSetDroneColor2_Parms SetDroneColor2_Parms;
	memcpy ( &SetDroneColor2_Parms.NewColor, &NewColor, 0xC );

	this->ProcessEvent ( pFnSetDroneColor2, &SetDroneColor2_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.SetDroneColor
// [0x00020002] 
// Parameters infos:
// struct FVector                 NewColor                       ( CPF_Parm )

void ASFXPawn_EngineerCombatDrone::SetDroneColor ( struct FVector NewColor )
{
	static UFunction* pFnSetDroneColor = NULL;

	if ( ! pFnSetDroneColor )
		pFnSetDroneColor = (UFunction*) UObject::GObjObjects()->Data[ 97053 ];

	ASFXPawn_EngineerCombatDrone_execSetDroneColor_Parms SetDroneColor_Parms;
	memcpy ( &SetDroneColor_Parms.NewColor, &NewColor, 0xC );

	this->ProcessEvent ( pFnSetDroneColor, &SetDroneColor_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void ASFXPawn_EngineerCombatDrone::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 97054 ];

	ASFXPawn_EngineerCombatDrone_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.OnDroneKilled
// [0x00120000] 
// Parameters infos:

void ASFXPawn_EngineerCombatDrone::OnDroneKilled ( )
{
	static UFunction* pFnOnDroneKilled = NULL;

	if ( ! pFnOnDroneKilled )
		pFnOnDroneKilled = (UFunction*) UObject::GObjObjects()->Data[ 97062 ];

	ASFXPawn_EngineerCombatDrone_execOnDroneKilled_Parms OnDroneKilled_Parms;

	this->ProcessEvent ( pFnOnDroneKilled, &OnDroneKilled_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPower_CombatDrone.GetHealthMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_CombatDrone::GetHealthMultiplier ( )
{
	static UFunction* pFnGetHealthMultiplier = NULL;

	if ( ! pFnGetHealthMultiplier )
		pFnGetHealthMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 96809 ];

	USFXPower_CombatDrone_execGetHealthMultiplier_Parms GetHealthMultiplier_Parms;

	this->ProcessEvent ( pFnGetHealthMultiplier, &GetHealthMultiplier_Parms, NULL );

	return GetHealthMultiplier_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioCombatDroneScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 97306 ];

	UBioCombatDroneScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnDroneKilled
// [0x00020002] 
// Parameters infos:

void UBioCombatDroneScript::OnDroneKilled ( )
{
	static UFunction* pFnOnDroneKilled = NULL;

	if ( ! pFnOnDroneKilled )
		pFnOnDroneKilled = (UFunction*) UObject::GObjObjects()->Data[ 97307 ];

	UBioCombatDroneScript_execOnDroneKilled_Parms OnDroneKilled_Parms;

	this->ProcessEvent ( pFnOnDroneKilled, &OnDroneKilled_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCombatDroneScript.DespawnDrone
// [0x00020002] 
// Parameters infos:

void UBioCombatDroneScript::DespawnDrone ( )
{
	static UFunction* pFnDespawnDrone = NULL;

	if ( ! pFnDespawnDrone )
		pFnDespawnDrone = (UFunction*) UObject::GObjObjects()->Data[ 97308 ];

	UBioCombatDroneScript_execDespawnDrone_Parms DespawnDrone_Parms;

	this->ProcessEvent ( pFnDespawnDrone, &DespawnDrone_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnOwnerDied
// [0x00020002] 
// Parameters infos:

void UBioCombatDroneScript::OnOwnerDied ( )
{
	static UFunction* pFnOnOwnerDied = NULL;

	if ( ! pFnOnOwnerDied )
		pFnOnOwnerDied = (UFunction*) UObject::GObjObjects()->Data[ 97309 ];

	UBioCombatDroneScript_execOnOwnerDied_Parms OnOwnerDied_Parms;

	this->ProcessEvent ( pFnOnOwnerDied, &OnOwnerDied_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnPowerRankIncreased
// [0x00020002] 
// Parameters infos:

void UBioCombatDroneScript::OnPowerRankIncreased ( )
{
	static UFunction* pFnOnPowerRankIncreased = NULL;

	if ( ! pFnOnPowerRankIncreased )
		pFnOnPowerRankIncreased = (UFunction*) UObject::GObjObjects()->Data[ 97310 ];

	UBioCombatDroneScript_execOnPowerRankIncreased_Parms OnPowerRankIncreased_Parms;

	this->ProcessEvent ( pFnOnPowerRankIncreased, &OnPowerRankIncreased_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCombatDroneScript.SpawnDrone
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oCaster                        ( CPF_Parm )
// class UClass*                  DroneClass                     ( CPF_Parm )
// struct FVector                 Location                       ( CPF_Parm )
// struct FRotator                Rotation                       ( CPF_Parm )
// float                          HealthMultiplier               ( CPF_Parm )
// float                          Lifetime                       ( CPF_Parm )
// unsigned long                  bCustomColor                   ( CPF_Parm )
// struct FVector                 CustomColor                    ( CPF_Parm )
// unsigned long                  bCustomColor2                  ( CPF_Parm )
// struct FVector                 CustomColor2                   ( CPF_Parm )
// class AActor*                  DroneTarget                    ( CPF_OptionalParm | CPF_Parm )

class ABioPawn* UBioCombatDroneScript::SpawnDrone ( class ABioPawn* oCaster, class UClass* DroneClass, struct FVector Location, struct FRotator Rotation, float HealthMultiplier, float Lifetime, unsigned long bCustomColor, struct FVector CustomColor, unsigned long bCustomColor2, struct FVector CustomColor2, class AActor* DroneTarget )
{
	static UFunction* pFnSpawnDrone = NULL;

	if ( ! pFnSpawnDrone )
		pFnSpawnDrone = (UFunction*) UObject::GObjObjects()->Data[ 97333 ];

	UBioCombatDroneScript_execSpawnDrone_Parms SpawnDrone_Parms;
	SpawnDrone_Parms.oCaster = oCaster;
	SpawnDrone_Parms.DroneClass = DroneClass;
	memcpy ( &SpawnDrone_Parms.Location, &Location, 0xC );
	memcpy ( &SpawnDrone_Parms.Rotation, &Rotation, 0xC );
	SpawnDrone_Parms.HealthMultiplier = HealthMultiplier;
	SpawnDrone_Parms.Lifetime = Lifetime;
	SpawnDrone_Parms.bCustomColor = bCustomColor;
	memcpy ( &SpawnDrone_Parms.CustomColor, &CustomColor, 0xC );
	SpawnDrone_Parms.bCustomColor2 = bCustomColor2;
	memcpy ( &SpawnDrone_Parms.CustomColor2, &CustomColor2, 0xC );
	SpawnDrone_Parms.DroneTarget = DroneTarget;

	this->ProcessEvent ( pFnSpawnDrone, &SpawnDrone_Parms, NULL );

	return SpawnDrone_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetSpawnLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UBioCombatDroneScript::GetSpawnLocation ( )
{
	static UFunction* pFnGetSpawnLocation = NULL;

	if ( ! pFnGetSpawnLocation )
		pFnGetSpawnLocation = (UFunction*) UObject::GObjObjects()->Data[ 97340 ];

	UBioCombatDroneScript_execGetSpawnLocation_Parms GetSpawnLocation_Parms;

	this->ProcessEvent ( pFnGetSpawnLocation, &GetSpawnLocation_Parms, NULL );

	return GetSpawnLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetBackLocation
// [0x00020002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )

struct FVector UBioCombatDroneScript::GetBackLocation ( class AActor* Target )
{
	static UFunction* pFnGetBackLocation = NULL;

	if ( ! pFnGetBackLocation )
		pFnGetBackLocation = (UFunction*) UObject::GObjObjects()->Data[ 97343 ];

	UBioCombatDroneScript_execGetBackLocation_Parms GetBackLocation_Parms;
	GetBackLocation_Parms.Target = Target;

	this->ProcessEvent ( pFnGetBackLocation, &GetBackLocation_Parms, NULL );

	return GetBackLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetFrontLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// float                          YawOffset                      ( CPF_OptionalParm | CPF_Parm )

struct FVector UBioCombatDroneScript::GetFrontLocation ( class AActor* Target, float YawOffset )
{
	static UFunction* pFnGetFrontLocation = NULL;

	if ( ! pFnGetFrontLocation )
		pFnGetFrontLocation = (UFunction*) UObject::GObjObjects()->Data[ 97348 ];

	UBioCombatDroneScript_execGetFrontLocation_Parms GetFrontLocation_Parms;
	GetFrontLocation_Parms.Target = Target;
	GetFrontLocation_Parms.YawOffset = YawOffset;

	this->ProcessEvent ( pFnGetFrontLocation, &GetFrontLocation_Parms, NULL );

	return GetFrontLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.IsSafeSpawnLocation
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 SpawnLocation                  ( CPF_Parm | CPF_OutParm )

bool UBioCombatDroneScript::IsSafeSpawnLocation ( struct FVector* SpawnLocation )
{
	static UFunction* pFnIsSafeSpawnLocation = NULL;

	if ( ! pFnIsSafeSpawnLocation )
		pFnIsSafeSpawnLocation = (UFunction*) UObject::GObjObjects()->Data[ 97352 ];

	UBioCombatDroneScript_execIsSafeSpawnLocation_Parms IsSafeSpawnLocation_Parms;

	this->ProcessEvent ( pFnIsSafeSpawnLocation, &IsSafeSpawnLocation_Parms, NULL );

	if ( SpawnLocation )
		memcpy ( SpawnLocation, &IsSafeSpawnLocation_Parms.SpawnLocation, 0xC );

	return IsSafeSpawnLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.IsDroneAlive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBioCombatDroneScript::IsDroneAlive ( )
{
	static UFunction* pFnIsDroneAlive = NULL;

	if ( ! pFnIsDroneAlive )
		pFnIsDroneAlive = (UFunction*) UObject::GObjObjects()->Data[ 97354 ];

	UBioCombatDroneScript_execIsDroneAlive_Parms IsDroneAlive_Parms;

	this->ProcessEvent ( pFnIsDroneAlive, &IsDroneAlive_Parms, NULL );

	return IsDroneAlive_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.StartPhase
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioCombatDroneScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 97365 ];

	UBioCombatDroneScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioCombatDroneScript::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = (UFunction*) UObject::GObjObjects()->Data[ 97368 ];

	UBioCombatDroneScript_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioWeaponPowerScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 104023 ];

	UBioWeaponPowerScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ApplyPowerEffects
// [0x00020000] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )

void UBioWeaponPowerScript::ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon )
{
	static UFunction* pFnApplyPowerEffects = NULL;

	if ( ! pFnApplyPowerEffects )
		pFnApplyPowerEffects = (UFunction*) UObject::GObjObjects()->Data[ 104020 ];

	UBioWeaponPowerScript_execApplyPowerEffects_Parms ApplyPowerEffects_Parms;
	ApplyPowerEffects_Parms.oPawn = oPawn;
	ApplyPowerEffects_Parms.oWeapon = oWeapon;

	this->ProcessEvent ( pFnApplyPowerEffects, &ApplyPowerEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.SetWeaponPower
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )
// unsigned long                  bOverrideCurrentPower          ( CPF_Parm )

bool UBioWeaponPowerScript::SetWeaponPower ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon, unsigned long bOverrideCurrentPower )
{
	static UFunction* pFnSetWeaponPower = NULL;

	if ( ! pFnSetWeaponPower )
		pFnSetWeaponPower = (UFunction*) UObject::GObjObjects()->Data[ 104012 ];

	UBioWeaponPowerScript_execSetWeaponPower_Parms SetWeaponPower_Parms;
	SetWeaponPower_Parms.oPawn = oPawn;
	SetWeaponPower_Parms.oWeapon = oWeapon;
	SetWeaponPower_Parms.bOverrideCurrentPower = bOverrideCurrentPower;

	this->ProcessEvent ( pFnSetWeaponPower, &SetWeaponPower_Parms, NULL );

	return SetWeaponPower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ReloadAmmoPower
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void UBioWeaponPowerScript::ReloadAmmoPower ( class ABioPawn* Target, class ASFXWeapon* Weapon )
{
	static UFunction* pFnReloadAmmoPower = NULL;

	if ( ! pFnReloadAmmoPower )
		pFnReloadAmmoPower = (UFunction*) UObject::GObjObjects()->Data[ 104009 ];

	UBioWeaponPowerScript_execReloadAmmoPower_Parms ReloadAmmoPower_Parms;
	ReloadAmmoPower_Parms.Target = Target;
	ReloadAmmoPower_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnReloadAmmoPower, &ReloadAmmoPower_Parms, NULL );
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioWeaponPowerScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 104000 ];

	UBioWeaponPowerScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ApplyToSquadMembers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBioWeaponPowerScript::ApplyToSquadMembers ( )
{
	static UFunction* pFnApplyToSquadMembers = NULL;

	if ( ! pFnApplyToSquadMembers )
		pFnApplyToSquadMembers = (UFunction*) UObject::GObjObjects()->Data[ 103998 ];

	UBioWeaponPowerScript_execApplyToSquadMembers_Parms ApplyToSquadMembers_Parms;

	this->ProcessEvent ( pFnApplyToSquadMembers, &ApplyToSquadMembers_Parms, NULL );

	return ApplyToSquadMembers_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.GetDuration
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UBioWeaponPowerScript::GetDuration ( )
{
	static UFunction* pFnGetDuration = NULL;

	if ( ! pFnGetDuration )
		pFnGetDuration = (UFunction*) UObject::GObjObjects()->Data[ 103996 ];

	UBioWeaponPowerScript_execGetDuration_Parms GetDuration_Parms;

	this->ProcessEvent ( pFnGetDuration, &GetDuration_Parms, NULL );

	return GetDuration_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.GetElapsedTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UBioWeaponPowerScript::GetElapsedTime ( )
{
	static UFunction* pFnGetElapsedTime = NULL;

	if ( ! pFnGetElapsedTime )
		pFnGetElapsedTime = (UFunction*) UObject::GObjObjects()->Data[ 103994 ];

	UBioWeaponPowerScript_execGetElapsedTime_Parms GetElapsedTime_Parms;

	this->ProcessEvent ( pFnGetElapsedTime, &GetElapsedTime_Parms, NULL );

	return GetElapsedTime_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioWeaponPowerScript::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = (UFunction*) UObject::GObjObjects()->Data[ 103990 ];

	UBioWeaponPowerScript_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.RemoveWeaponHologram
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AmmoPower::RemoveWeaponHologram ( )
{
	static UFunction* pFnRemoveWeaponHologram = NULL;

	if ( ! pFnRemoveWeaponHologram )
		pFnRemoveWeaponHologram = (UFunction*) UObject::GObjObjects()->Data[ 104087 ];

	USFXGameEffect_AmmoPower_execRemoveWeaponHologram_Parms RemoveWeaponHologram_Parms;

	this->ProcessEvent ( pFnRemoveWeaponHologram, &RemoveWeaponHologram_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.EnableWeaponHologram
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AmmoPower::EnableWeaponHologram ( )
{
	static UFunction* pFnEnableWeaponHologram = NULL;

	if ( ! pFnEnableWeaponHologram )
		pFnEnableWeaponHologram = (UFunction*) UObject::GObjObjects()->Data[ 104086 ];

	USFXGameEffect_AmmoPower_execEnableWeaponHologram_Parms EnableWeaponHologram_Parms;

	this->ProcessEvent ( pFnEnableWeaponHologram, &EnableWeaponHologram_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponUnequip
// [0x00020002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponUnequip ( class ASFXWeapon* Weapon )
{
	static UFunction* pFnOnWeaponUnequip = NULL;

	if ( ! pFnOnWeaponUnequip )
		pFnOnWeaponUnequip = (UFunction*) UObject::GObjObjects()->Data[ 104084 ];

	USFXGameEffect_AmmoPower_execOnWeaponUnequip_Parms OnWeaponUnequip_Parms;
	OnWeaponUnequip_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnOnWeaponUnequip, &OnWeaponUnequip_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponEquip
// [0x00020002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponEquip ( class ASFXWeapon* Weapon )
{
	static UFunction* pFnOnWeaponEquip = NULL;

	if ( ! pFnOnWeaponEquip )
		pFnOnWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 104082 ];

	USFXGameEffect_AmmoPower_execOnWeaponEquip_Parms OnWeaponEquip_Parms;
	OnWeaponEquip_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnOnWeaponEquip, &OnWeaponEquip_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponReload
// [0x00020000] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponReload ( class ASFXWeapon* Weapon )
{
	static UFunction* pFnOnWeaponReload = NULL;

	if ( ! pFnOnWeaponReload )
		pFnOnWeaponReload = (UFunction*) UObject::GObjObjects()->Data[ 104080 ];

	USFXGameEffect_AmmoPower_execOnWeaponReload_Parms OnWeaponReload_Parms;
	OnWeaponReload_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnOnWeaponReload, &OnWeaponReload_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.GetDamageVocProbabilityMod
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXGameEffect_AmmoPower::GetDamageVocProbabilityMod ( )
{
	static UFunction* pFnGetDamageVocProbabilityMod = NULL;

	if ( ! pFnGetDamageVocProbabilityMod )
		pFnGetDamageVocProbabilityMod = (UFunction*) UObject::GObjObjects()->Data[ 104078 ];

	USFXGameEffect_AmmoPower_execGetDamageVocProbabilityMod_Parms GetDamageVocProbabilityMod_Parms;

	this->ProcessEvent ( pFnGetDamageVocProbabilityMod, &GetDamageVocProbabilityMod_Parms, NULL );

	return GetDamageVocProbabilityMod_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponImpact
// [0x00020002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact )
{
	static UFunction* pFnOnWeaponImpact = NULL;

	if ( ! pFnOnWeaponImpact )
		pFnOnWeaponImpact = (UFunction*) UObject::GObjObjects()->Data[ 104075 ];

	USFXGameEffect_AmmoPower_execOnWeaponImpact_Parms OnWeaponImpact_Parms;
	OnWeaponImpact_Parms.Weapon = Weapon;
	memcpy ( &OnWeaponImpact_Parms.Impact, &Impact, 0x44 );

	this->ProcessEvent ( pFnOnWeaponImpact, &OnWeaponImpact_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AmmoPower::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = (UFunction*) UObject::GObjObjects()->Data[ 104073 ];

	USFXGameEffect_AmmoPower_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AmmoPower::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = (UFunction*) UObject::GObjObjects()->Data[ 104072 ];

	USFXGameEffect_AmmoPower_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSniperCritScript.ApplyPowerEffects
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )

void UBioSniperCritScript::ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon )
{
	static UFunction* pFnApplyPowerEffects = NULL;

	if ( ! pFnApplyPowerEffects )
		pFnApplyPowerEffects = (UFunction*) UObject::GObjObjects()->Data[ 104048 ];

	UBioSniperCritScript_execApplyPowerEffects_Parms ApplyPowerEffects_Parms;
	ApplyPowerEffects_Parms.oPawn = oPawn;
	ApplyPowerEffects_Parms.oWeapon = oWeapon;

	this->ProcessEvent ( pFnApplyPowerEffects, &ApplyPowerEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSniperCritScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioSniperCritScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 104040 ];

	UBioSniperCritScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSniperCritScript.ApplyToSquadMembers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBioSniperCritScript::ApplyToSquadMembers ( )
{
	static UFunction* pFnApplyToSquadMembers = NULL;

	if ( ! pFnApplyToSquadMembers )
		pFnApplyToSquadMembers = (UFunction*) UObject::GObjObjects()->Data[ 104037 ];

	UBioSniperCritScript_execApplyToSquadMembers_Parms ApplyToSquadMembers_Parms;

	this->ProcessEvent ( pFnApplyToSquadMembers, &ApplyToSquadMembers_Parms, NULL );

	return ApplyToSquadMembers_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSniperCritScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UBioSniperCritScript::eventInitializePowerScript ( )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 104036 ];

	UBioSniperCritScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_ArmorPiercingAmmo.OnWeaponImpact
// [0x00020002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

void USFXGameEffect_ArmorPiercingAmmo::OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact )
{
	static UFunction* pFnOnWeaponImpact = NULL;

	if ( ! pFnOnWeaponImpact )
		pFnOnWeaponImpact = (UFunction*) UObject::GObjObjects()->Data[ 104091 ];

	USFXGameEffect_ArmorPiercingAmmo_execOnWeaponImpact_Parms OnWeaponImpact_Parms;
	OnWeaponImpact_Parms.Weapon = Weapon;
	memcpy ( &OnWeaponImpact_Parms.Impact, &Impact, 0x44 );

	this->ProcessEvent ( pFnOnWeaponImpact, &OnWeaponImpact_Parms, NULL );
};

// Function SFXGameContent_Powers.BioNeuralShockScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioNeuralShockScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 126364 ];

	UBioNeuralShockScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioNeuralShockScript.UnaffectPreviousTargets
// [0x00020002] 
// Parameters infos:
// class AActor*                  oCaster                        ( CPF_Parm )

void UBioNeuralShockScript::UnaffectPreviousTargets ( class AActor* oCaster )
{
	static UFunction* pFnUnaffectPreviousTargets = NULL;

	if ( ! pFnUnaffectPreviousTargets )
		pFnUnaffectPreviousTargets = (UFunction*) UObject::GObjObjects()->Data[ 126360 ];

	UBioNeuralShockScript_execUnaffectPreviousTargets_Parms UnaffectPreviousTargets_Parms;
	UnaffectPreviousTargets_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnUnaffectPreviousTargets, &UnaffectPreviousTargets_Parms, NULL );
};

// Function SFXGameContent_Powers.BioNeuralShockScript.DisablePowers
// [0x00020002] 
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )

void UBioNeuralShockScript::DisablePowers ( class AActor* oImpacted )
{
	static UFunction* pFnDisablePowers = NULL;

	if ( ! pFnDisablePowers )
		pFnDisablePowers = (UFunction*) UObject::GObjObjects()->Data[ 126355 ];

	UBioNeuralShockScript_execDisablePowers_Parms DisablePowers_Parms;
	DisablePowers_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnDisablePowers, &DisablePowers_Parms, NULL );
};

// Function SFXGameContent_Powers.BioNeuralShockScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioNeuralShockScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 126339 ];

	UBioNeuralShockScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioNeuralShockScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioNeuralShockScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 126334 ];

	UBioNeuralShockScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPower_NeuralShock.DisablePowers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXPower_NeuralShock::DisablePowers ( )
{
	static UFunction* pFnDisablePowers = NULL;

	if ( ! pFnDisablePowers )
		pFnDisablePowers = (UFunction*) UObject::GObjObjects()->Data[ 126418 ];

	USFXPower_NeuralShock_execDisablePowers_Parms DisablePowers_Parms;

	this->ProcessEvent ( pFnDisablePowers, &DisablePowers_Parms, NULL );

	return DisablePowers_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPower_NeuralShock.GetAccuracyPenalty
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_NeuralShock::GetAccuracyPenalty ( )
{
	static UFunction* pFnGetAccuracyPenalty = NULL;

	if ( ! pFnGetAccuracyPenalty )
		pFnGetAccuracyPenalty = (UFunction*) UObject::GObjObjects()->Data[ 126416 ];

	USFXPower_NeuralShock_execGetAccuracyPenalty_Parms GetAccuracyPenalty_Parms;

	this->ProcessEvent ( pFnGetAccuracyPenalty, &GetAccuracyPenalty_Parms, NULL );

	return GetAccuracyPenalty_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_DelayedNeuralShock.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_DelayedNeuralShock::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = (UFunction*) UObject::GObjObjects()->Data[ 126372 ];

	USFXGameEffect_DelayedNeuralShock_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_MordinPassive.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_MordinPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = (UFunction*) UObject::GObjObjects()->Data[ 126433 ];

	USFXPowerScript_MordinPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_HenchmanPassive.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_HenchmanPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = (UFunction*) UObject::GObjObjects()->Data[ 126428 ];

	USFXPowerScript_HenchmanPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCarnageScript.ApplyPowerEffects
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )

void UBioCarnageScript::ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon )
{
	static UFunction* pFnApplyPowerEffects = NULL;

	if ( ! pFnApplyPowerEffects )
		pFnApplyPowerEffects = (UFunction*) UObject::GObjObjects()->Data[ 129904 ];

	UBioCarnageScript_execApplyPowerEffects_Parms ApplyPowerEffects_Parms;
	ApplyPowerEffects_Parms.oPawn = oPawn;
	ApplyPowerEffects_Parms.oWeapon = oWeapon;

	this->ProcessEvent ( pFnApplyPowerEffects, &ApplyPowerEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCarnageScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioCarnageScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 129896 ];

	UBioCarnageScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCarnageScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioCarnageScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 129891 ];

	UBioCarnageScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCarnageScript.ApplyToSquadMembers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBioCarnageScript::ApplyToSquadMembers ( )
{
	static UFunction* pFnApplyToSquadMembers = NULL;

	if ( ! pFnApplyToSquadMembers )
		pFnApplyToSquadMembers = (UFunction*) UObject::GObjObjects()->Data[ 129888 ];

	UBioCarnageScript_execApplyToSquadMembers_Parms ApplyToSquadMembers_Parms;

	this->ProcessEvent ( pFnApplyToSquadMembers, &ApplyToSquadMembers_Parms, NULL );

	return ApplyToSquadMembers_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCarnageScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UBioCarnageScript::eventInitializePowerScript ( )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 129887 ];

	UBioCarnageScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.CauseAnimatedReaction
// [0x00020002] 
// Parameters infos:
// class AActor*                  oHitActor                      ( CPF_Parm )
// float                          fDelay                         ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::CauseAnimatedReaction ( class AActor* oHitActor, float fDelay )
{
	static UFunction* pFnCauseAnimatedReaction = NULL;

	if ( ! pFnCauseAnimatedReaction )
		pFnCauseAnimatedReaction = (UFunction*) UObject::GObjObjects()->Data[ 129959 ];

	USFXGameEffect_IncendiaryAmmo_execCauseAnimatedReaction_Parms CauseAnimatedReaction_Parms;
	CauseAnimatedReaction_Parms.oHitActor = oHitActor;
	CauseAnimatedReaction_Parms.fDelay = fDelay;

	this->ProcessEvent ( pFnCauseAnimatedReaction, &CauseAnimatedReaction_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.AddGameEffects
// [0x00020002] 
// Parameters infos:
// class AActor*                  oTarget                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fDamagePerSecond               ( CPF_Parm )
// class ABioPawn*                BPInstigator                   ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::AddGameEffects ( class AActor* oTarget, float fDuration, float fDamagePerSecond, class ABioPawn* BPInstigator )
{
	static UFunction* pFnAddGameEffects = NULL;

	if ( ! pFnAddGameEffects )
		pFnAddGameEffects = (UFunction*) UObject::GObjObjects()->Data[ 129952 ];

	USFXGameEffect_IncendiaryAmmo_execAddGameEffects_Parms AddGameEffects_Parms;
	AddGameEffects_Parms.oTarget = oTarget;
	AddGameEffects_Parms.fDuration = fDuration;
	AddGameEffects_Parms.fDamagePerSecond = fDamagePerSecond;
	AddGameEffects_Parms.BPInstigator = BPInstigator;

	this->ProcessEvent ( pFnAddGameEffects, &AddGameEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.DoEvolvedAoEImpact
// [0x00020002] 
// Parameters infos:
// struct FImpactInfo             Impact                         ( CPF_Parm )
// class ABioPawn*                WeaponOwner                    ( CPF_Parm )
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::DoEvolvedAoEImpact ( struct FImpactInfo Impact, class ABioPawn* WeaponOwner, class ASFXWeapon* Weapon )
{
	static UFunction* pFnDoEvolvedAoEImpact = NULL;

	if ( ! pFnDoEvolvedAoEImpact )
		pFnDoEvolvedAoEImpact = (UFunction*) UObject::GObjObjects()->Data[ 129941 ];

	USFXGameEffect_IncendiaryAmmo_execDoEvolvedAoEImpact_Parms DoEvolvedAoEImpact_Parms;
	memcpy ( &DoEvolvedAoEImpact_Parms.Impact, &Impact, 0x44 );
	DoEvolvedAoEImpact_Parms.WeaponOwner = WeaponOwner;
	DoEvolvedAoEImpact_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnDoEvolvedAoEImpact, &DoEvolvedAoEImpact_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.GetDamageVocProbabilityMod
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXGameEffect_IncendiaryAmmo::GetDamageVocProbabilityMod ( )
{
	static UFunction* pFnGetDamageVocProbabilityMod = NULL;

	if ( ! pFnGetDamageVocProbabilityMod )
		pFnGetDamageVocProbabilityMod = (UFunction*) UObject::GObjObjects()->Data[ 129939 ];

	USFXGameEffect_IncendiaryAmmo_execGetDamageVocProbabilityMod_Parms GetDamageVocProbabilityMod_Parms;

	this->ProcessEvent ( pFnGetDamageVocProbabilityMod, &GetDamageVocProbabilityMod_Parms, NULL );

	return GetDamageVocProbabilityMod_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.OnWeaponImpact
// [0x00020002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact )
{
	static UFunction* pFnOnWeaponImpact = NULL;

	if ( ! pFnOnWeaponImpact )
		pFnOnWeaponImpact = (UFunction*) UObject::GObjObjects()->Data[ 129931 ];

	USFXGameEffect_IncendiaryAmmo_execOnWeaponImpact_Parms OnWeaponImpact_Parms;
	OnWeaponImpact_Parms.Weapon = Weapon;
	memcpy ( &OnWeaponImpact_Parms.Impact, &Impact, 0x44 );

	this->ProcessEvent ( pFnOnWeaponImpact, &OnWeaponImpact_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPower_DefensiveShieldBase.GetShieldValue
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_DefensiveShieldBase::GetShieldValue ( )
{
	static UFunction* pFnGetShieldValue = NULL;

	if ( ! pFnGetShieldValue )
		pFnGetShieldValue = (UFunction*) UObject::GObjObjects()->Data[ 129978 ];

	USFXPower_DefensiveShieldBase_execGetShieldValue_Parms GetShieldValue_Parms;

	this->ProcessEvent ( pFnGetShieldValue, &GetShieldValue_Parms, NULL );

	return GetShieldValue_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_DefensiveShieldBase::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 130060 ];

	USFXPowerScript_DefensiveShieldBase_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_DefensiveShieldBase::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 130046 ];

	USFXPowerScript_DefensiveShieldBase_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.OnShieldDestroyed
// [0x00020002] 
// Parameters infos:
// class AActor*                  ShieldActor                    ( CPF_Parm )
// class ASFXShield_Base*         Shield                         ( CPF_Parm )

void USFXPowerScript_DefensiveShieldBase::OnShieldDestroyed ( class AActor* ShieldActor, class ASFXShield_Base* Shield )
{
	static UFunction* pFnOnShieldDestroyed = NULL;

	if ( ! pFnOnShieldDestroyed )
		pFnOnShieldDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 130042 ];

	USFXPowerScript_DefensiveShieldBase_execOnShieldDestroyed_Parms OnShieldDestroyed_Parms;
	OnShieldDestroyed_Parms.ShieldActor = ShieldActor;
	OnShieldDestroyed_Parms.Shield = Shield;

	this->ProcessEvent ( pFnOnShieldDestroyed, &OnShieldDestroyed_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXPowerScript_DefensiveShieldBase::eventInitializePowerScript ( )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 130039 ];

	USFXPowerScript_DefensiveShieldBase_eventInitializePowerScript_Parms InitializePowerScript_Parms;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FString                 sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_PullProjectile::ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = (UFunction*) UObject::GObjObjects()->Data[ 130124 ];

	USFXPowerScript_PullProjectile_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0xC );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.OnRagdollPhysicsImpact
// [0x00020002] 
// Parameters infos:
// class APawn*                   oPawn                          ( CPF_Parm )
// class AActor*                  oImpactActor                   ( CPF_Parm )
// struct FVector                 vImpactDir                     ( CPF_Parm )

void USFXPowerScript_PullProjectile::OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir )
{
	static UFunction* pFnOnRagdollPhysicsImpact = NULL;

	if ( ! pFnOnRagdollPhysicsImpact )
		pFnOnRagdollPhysicsImpact = (UFunction*) UObject::GObjObjects()->Data[ 130120 ];

	USFXPowerScript_PullProjectile_execOnRagdollPhysicsImpact_Parms OnRagdollPhysicsImpact_Parms;
	OnRagdollPhysicsImpact_Parms.oPawn = oPawn;
	OnRagdollPhysicsImpact_Parms.oImpactActor = oImpactActor;
	memcpy ( &OnRagdollPhysicsImpact_Parms.vImpactDir, &vImpactDir, 0xC );

	this->ProcessEvent ( pFnOnRagdollPhysicsImpact, &OnRagdollPhysicsImpact_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.DropCurrentTargets
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_PullProjectile::DropCurrentTargets ( )
{
	static UFunction* pFnDropCurrentTargets = NULL;

	if ( ! pFnDropCurrentTargets )
		pFnDropCurrentTargets = (UFunction*) UObject::GObjObjects()->Data[ 130116 ];

	USFXPowerScript_PullProjectile_execDropCurrentTargets_Parms DropCurrentTargets_Parms;

	this->ProcessEvent ( pFnDropCurrentTargets, &DropCurrentTargets_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.EffectPull
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oCasterPawn                    ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// struct FName                   nmCategory                     ( CPF_Parm )
// struct FVector                 vForce                         ( CPF_Parm )
// float                          fGravityRampUpTime             ( CPF_Parm )
// float                          fMinVelocity                   ( CPF_Parm )
// float                          fMinForceMult                  ( CPF_Parm )
// struct FName                   nmPowerName                    ( CPF_Parm )

void USFXPowerScript_PullProjectile::EffectPull ( class ABioPawn* oCasterPawn, class AActor* oImpacted, float fDuration, struct FName nmCategory, struct FVector vForce, float fGravityRampUpTime, float fMinVelocity, float fMinForceMult, struct FName nmPowerName )
{
	static UFunction* pFnEffectPull = NULL;

	if ( ! pFnEffectPull )
		pFnEffectPull = (UFunction*) UObject::GObjObjects()->Data[ 130102 ];

	USFXPowerScript_PullProjectile_execEffectPull_Parms EffectPull_Parms;
	EffectPull_Parms.oCasterPawn = oCasterPawn;
	EffectPull_Parms.oImpacted = oImpacted;
	EffectPull_Parms.fDuration = fDuration;
	memcpy ( &EffectPull_Parms.nmCategory, &nmCategory, 0x8 );
	memcpy ( &EffectPull_Parms.vForce, &vForce, 0xC );
	EffectPull_Parms.fGravityRampUpTime = fGravityRampUpTime;
	EffectPull_Parms.fMinVelocity = fMinVelocity;
	EffectPull_Parms.fMinForceMult = fMinForceMult;
	memcpy ( &EffectPull_Parms.nmPowerName, &nmPowerName, 0x8 );

	this->ProcessEvent ( pFnEffectPull, &EffectPull_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_PullProjectile::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 130089 ];

	USFXPowerScript_PullProjectile_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.OnProjectileExploded
// [0x00020002] 
// Parameters infos:
// class AActor*                  oCaster                        ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// struct FVector                 Velocity                       ( CPF_Parm )

void USFXPowerScript_PullProjectile::OnProjectileExploded ( class AActor* oCaster, struct FVector HitLocation, struct FVector HitNormal, struct FVector Velocity )
{
	static UFunction* pFnOnProjectileExploded = NULL;

	if ( ! pFnOnProjectileExploded )
		pFnOnProjectileExploded = (UFunction*) UObject::GObjObjects()->Data[ 130084 ];

	USFXPowerScript_PullProjectile_execOnProjectileExploded_Parms OnProjectileExploded_Parms;
	OnProjectileExploded_Parms.oCaster = oCaster;
	memcpy ( &OnProjectileExploded_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnProjectileExploded_Parms.HitNormal, &HitNormal, 0xC );
	memcpy ( &OnProjectileExploded_Parms.Velocity, &Velocity, 0xC );

	this->ProcessEvent ( pFnOnProjectileExploded, &OnProjectileExploded_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_PullProjectile::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 130079 ];

	USFXPowerScript_PullProjectile_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif