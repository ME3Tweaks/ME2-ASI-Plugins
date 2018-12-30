/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_Inventory_f_structs.h
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

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.SetZoomed
// [0x00020102] 
struct ASFXWeapon_SniperRifle_execSetZoomed_Parms
{
	unsigned long                                      bState : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactSound
// [0x00020102] 
struct ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificDecalData
// [0x00420102] 
struct ASFXWeapon_SniperRifle_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificImpactSound
// [0x00020102] 
struct ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificDecalData
// [0x00420102] 
struct ASFXWeapon_HeavyPistol_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Recycle
// [0x00020102] 
struct ASFXProjectile_Grenade_execRecycle_Parms
{
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.DoImpact
// [0x00020002] 
struct ASFXProjectile_Grenade_execDoImpact_Parms
{
	class AActor*                                      InImpactedActor;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InInstigatorController;                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InDamageRadius;                                   		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ABioPawn*                                 HitPawn;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           RandomNumber;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         Parts;                                            		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Tick
// [0x00820102] 
struct ASFXProjectile_Grenade_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  DesiredOrientation;                               		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CurrentOrientation;                               		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           fAngle;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fTargetVelocity;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fAngleChange;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.GetAimLocation
// [0x00820002] 
struct ASFXProjectile_Grenade_execGetAimLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  NodeLocation;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Init
// [0x00020002] 
struct ASFXProjectile_Grenade_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPlayerController*                     PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Inventory.SFXWeapon_AntiMatRifle.GetWeaponSpecificImpactSound
// [0x00020102] 
struct ASFXWeapon_AntiMatRifle_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_AntiMatRifle.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct ASFXWeapon_AntiMatRifle_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_AntiMatRifle.GetWeaponSpecificDecalData
// [0x00420102] 
struct ASFXWeapon_AntiMatRifle_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Inventory.SFXWeapon_AntiMatRifle.InitDefaultDecalProperties
// [0x00020102] 
struct ASFXWeapon_AntiMatRifle_execInitDefaultDecalProperties_Parms
{
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificImpactSound
// [0x00020102] 
struct ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificDecalData
// [0x00420102] 
struct ASFXWeapon_AutoPistol_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificImpactSound
// [0x00020102] 
struct ASFXWeapon_SMG_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct ASFXWeapon_SMG_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificDecalData
// [0x00420102] 
struct ASFXWeapon_SMG_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificImpactSound
// [0x00020102] 
struct ASFXWeapon_HandCannon_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct ASFXWeapon_HandCannon_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificDecalData
// [0x00420102] 
struct ASFXWeapon_HandCannon_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif