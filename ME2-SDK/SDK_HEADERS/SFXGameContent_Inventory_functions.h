/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_Inventory_functions.h
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

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.SetZoomed
// [0x00020102] 
// Parameters infos:
// unsigned long                  bState                         ( CPF_Parm )

void ASFXWeapon_SniperRifle::SetZoomed ( unsigned long bState )
{
	static UFunction* pFnSetZoomed = NULL;

	if ( ! pFnSetZoomed )
		pFnSetZoomed = (UFunction*) UObject::GObjObjects()->Data[ 96868 ];

	ASFXWeapon_SniperRifle_execSetZoomed_Parms SetZoomed_Parms;
	SetZoomed_Parms.bState = bState;

	this->ProcessEvent ( pFnSetZoomed, &SetZoomed_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_SniperRifle::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 96865 ];

	ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_SniperRifle::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 96862 ];

	ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificDecalData
// [0x00420102] 
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_SniperRifle::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = (UFunction*) UObject::GObjObjects()->Data[ 96857 ];

	ASFXWeapon_SniperRifle_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_HeavyPistol::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 97896 ];

	ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_HeavyPistol::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 97893 ];

	ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificDecalData
// [0x00420102] 
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_HeavyPistol::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = (UFunction*) UObject::GObjObjects()->Data[ 97888 ];

	ASFXWeapon_HeavyPistol_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Recycle
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_Grenade::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 98202 ];

	ASFXProjectile_Grenade_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.DoImpact
// [0x00020002] 
// Parameters infos:
// class AActor*                  InImpactedActor                ( CPF_Parm )
// class AController*             InInstigatorController         ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          InDamageRadius                 ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )

void ASFXProjectile_Grenade::DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage )
{
	static UFunction* pFnDoImpact = NULL;

	if ( ! pFnDoImpact )
		pFnDoImpact = (UFunction*) UObject::GObjObjects()->Data[ 98190 ];

	ASFXProjectile_Grenade_execDoImpact_Parms DoImpact_Parms;
	DoImpact_Parms.InImpactedActor = InImpactedActor;
	DoImpact_Parms.InInstigatorController = InInstigatorController;
	DoImpact_Parms.BaseDamage = BaseDamage;
	DoImpact_Parms.InDamageRadius = InDamageRadius;
	DoImpact_Parms.Momentum = Momentum;
	memcpy ( &DoImpact_Parms.HurtOrigin, &HurtOrigin, 0xC );
	DoImpact_Parms.bFullDamage = bFullDamage;

	this->ProcessEvent ( pFnDoImpact, &DoImpact_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_Grenade::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 98183 ];

	ASFXProjectile_Grenade_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.GetAimLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ASFXProjectile_Grenade::GetAimLocation ( )
{
	static UFunction* pFnGetAimLocation = NULL;

	if ( ! pFnGetAimLocation )
		pFnGetAimLocation = (UFunction*) UObject::GObjObjects()->Data[ 98179 ];

	ASFXProjectile_Grenade_execGetAimLocation_Parms GetAimLocation_Parms;

	this->ProcessEvent ( pFnGetAimLocation, &GetAimLocation_Parms, NULL );

	return GetAimLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ASFXProjectile_Grenade::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 98176 ];

	ASFXProjectile_Grenade_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_AntiMatRifle.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_AntiMatRifle::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 100991 ];

	ASFXWeapon_AntiMatRifle_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AntiMatRifle.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_AntiMatRifle::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 100988 ];

	ASFXWeapon_AntiMatRifle_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AntiMatRifle.GetWeaponSpecificDecalData
// [0x00420102] 
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_AntiMatRifle::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = (UFunction*) UObject::GObjObjects()->Data[ 100983 ];

	ASFXWeapon_AntiMatRifle_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AntiMatRifle.InitDefaultDecalProperties
// [0x00020102] 
// Parameters infos:

void ASFXWeapon_AntiMatRifle::InitDefaultDecalProperties ( )
{
	static UFunction* pFnInitDefaultDecalProperties = NULL;

	if ( ! pFnInitDefaultDecalProperties )
		pFnInitDefaultDecalProperties = (UFunction*) UObject::GObjObjects()->Data[ 100982 ];

	ASFXWeapon_AntiMatRifle_execInitDefaultDecalProperties_Parms InitDefaultDecalProperties_Parms;

	this->ProcessEvent ( pFnInitDefaultDecalProperties, &InitDefaultDecalProperties_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_AutoPistol::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 101730 ];

	ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_AutoPistol::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 101727 ];

	ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificDecalData
// [0x00420102] 
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_AutoPistol::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = (UFunction*) UObject::GObjObjects()->Data[ 101722 ];

	ASFXWeapon_AutoPistol_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_SMG::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 101765 ];

	ASFXWeapon_SMG_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_SMG::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 101762 ];

	ASFXWeapon_SMG_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificDecalData
// [0x00420102] 
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_SMG::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = (UFunction*) UObject::GObjObjects()->Data[ 101757 ];

	ASFXWeapon_SMG_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_HandCannon::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 102161 ];

	ASFXWeapon_HandCannon_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_HandCannon::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 102158 ];

	ASFXWeapon_HandCannon_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificDecalData
// [0x00420102] 
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_HandCannon::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = (UFunction*) UObject::GObjObjects()->Data[ 102153 ];

	ASFXWeapon_HandCannon_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif