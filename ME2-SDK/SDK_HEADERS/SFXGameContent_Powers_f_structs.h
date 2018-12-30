/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_Powers_f_structs.h
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

// Function SFXGameContent_Powers.SFXGameEffect_DamageBonus.OnRemoved
// [0x00020002] 
struct USFXGameEffect_DamageBonus_execOnRemoved_Parms
{
	// class USFXPower*                                oPower;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_DamageBonus.OnApplied
// [0x00020002] 
struct USFXGameEffect_DamageBonus_execOnApplied_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXPower*                                oPower;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_Overload_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.SpawnBigImpactVFX
// [0x00020002] 
struct USFXPowerScript_Overload_execSpawnBigImpactVFX_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXGame*                                 oGame;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// class ABioVisualEffect*                         oVisualEffect;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.ExplodeEnemy
// [0x00020002] 
struct USFXPowerScript_Overload_execExplodeEnemy_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.CanEnemyBeExploded
// [0x00020002] 
struct USFXPowerScript_Overload_execCanEnemyBeExploded_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.TurnOnDeathPower
// [0x00020002] 
struct USFXPowerScript_Overload_execTurnOnDeathPower_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.StunRobot
// [0x00020002] 
struct USFXPowerScript_Overload_execStunRobot_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXAI_Core*                              AI;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           fStunLength;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_Overload_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           fStunLength;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fOverheatLength;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageClass;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsRobot : 1;                                     		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// class USFXPower*                                StealthPower;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	// class ASFXShield_Base*                          ShieldCheck;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHadEnergyShields : 1;                            		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// class ABioPlayerController*                     PC;                                               		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Overload_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.Tick
// [0x00820102] 
struct ASFXProjectile_Power_Seeking_NPC_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  DesiredOrientation;                               		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CurrentOrientation;                               		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           fAngle;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fTargetVelocity;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fAngleChange;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.GetAimLocation
// [0x00820002] 
struct ASFXProjectile_Power_Seeking_NPC_execGetAimLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AimLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           fDistance;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fTimeToHit;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fVelocity;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.InitializePowerProjectile
// [0x00020002] 
struct ASFXProjectile_Power_Seeking_NPC_execInitializePowerProjectile_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTravelSpeed;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRadius;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UBioPower*                                   oPower;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXGameContent_Powers.SFXPower_Incinerate_NPC.GetDamage
// [0x00020002] 
struct USFXPower_Incinerate_NPC_execGetDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_Overload.GetOverheatLength
// [0x00020002] 
struct USFXPower_Overload_execGetOverheatLength_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_Overload.GetRobotStunLength
// [0x00020002] 
struct USFXPower_Overload_execGetRobotStunLength_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_Incinerate_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.ExplodeEnemy
// [0x00020002] 
struct USFXPowerScript_Incinerate_execExplodeEnemy_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.CanEnemyBeExploded
// [0x00020002] 
struct USFXPowerScript_Incinerate_execCanEnemyBeExploded_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.CauseAnimatedReaction
// [0x00020002] 
struct USFXPowerScript_Incinerate_execCauseAnimatedReaction_Parms
{
	class AActor*                                      oHitActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDelay;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_DelayedCustomAction*       oEffect;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Random;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_Incinerate_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             nLargeFlameCount;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fFullDamage;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fInstantDamage;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           fDoTDamage;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsRobot : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ABioVisualEffect*                         Effect;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHadArmor : 1;                                    		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Incinerate_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_Incinerate.GetDuration
// [0x00020002] 
struct USFXPower_Incinerate_execGetDuration_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.GetHUDWheelIconInfo
// [0x00020002] 
struct USFXPowerScript_FirstAid_execGetHUDWheelIconInfo_Parms
{
	class ABioPawn*                                    OwnerPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class UBioEpicPawnBehavior*                     oBehavior;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ABioPlayerSquad*                          oPlayerSquad;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_FirstAid_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 BioCaster;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oBehavior;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 BioMember;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ABioAiController*                         oController;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ABioPlayerSquad*                          oPlayerSquad;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.CountMediGel
// [0x00020002] 
struct USFXPowerScript_FirstAid_execCountMediGel_Parms
{
	class ABioPlayerSquad*                             oPlayerSquad;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXInventoryManager*                     oInventory;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nCurrentAmount;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_FirstAid_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 BioCaster;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 BioMember;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ABioVisualEffect*                         Effect;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bActionTaken : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bApplyCrust : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             nHealCount;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_FirstAid_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.CanStartPower
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_FirstAid_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  EmptyString;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.RemovePowerBonusEffect
// [0x00020002] 
struct USFXPowerScript_PassivePower_execRemovePowerBonusEffect_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ClassName;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmCategory;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      PowerClass;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_PowerBonus*                Effect;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPowerBonusEffect
// [0x00020002] 
struct USFXPowerScript_PassivePower_execApplyPowerBonusEffect_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ClassName;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fEffectValue;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmCategory;                                       		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      PowerClass;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_PowerBonus*                Effect;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyHealthModifier
// [0x00020002] 
struct USFXPowerScript_PassivePower_execApplyHealthModifier_Parms
{
	float                                              fHealthModifier;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyWeaponDamageModifier
// [0x00020002] 
struct USFXPowerScript_PassivePower_execApplyWeaponDamageModifier_Parms
{
	float                                              fDamageModifier;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPowerCooldownModifier
// [0x00020002] 
struct USFXPowerScript_PassivePower_execApplyPowerCooldownModifier_Parms
{
	float                                              fCooldownModifier;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPassiveBonus
// [0x00020002] 
struct USFXPowerScript_PassivePower_execApplyPassiveBonus_Parms
{
	class UClass*                                      EffectClass;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fModifier;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyGlobalBonus
// [0x00020000] 
struct USFXPowerScript_PassivePower_execApplyGlobalBonus_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnSquadMemberAdded
// [0x00020002] 
struct USFXPowerScript_PassivePower_execOnSquadMemberAdded_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnPowersLoaded
// [0x00020002] 
struct USFXPowerScript_PassivePower_execOnPowersLoaded_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnPowerRankIncreased
// [0x00020002] 
struct USFXPowerScript_PassivePower_execOnPowerRankIncreased_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_PassivePower_eventInitializePowerScript_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_EngineerPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerScript_EngineerPassive_execApplyGlobalBonus_Parms
{
	// float                                           fCooldownReduction;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           fPowerDamageIncrease;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fPowerDurationIncrease;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           fResearchCostDecrease;                            		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXPower_EngineerPassive*                oPassivePower;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           fHealthIncrease;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.Recycle
// [0x00020102] 
struct ASFXProjectile_Power_Seeking_execRecycle_Parms
{
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.InitializeRotation
// [0x00020000] 
struct ASFXProjectile_Power_Seeking_execInitializeRotation_Parms
{
	class APawn*                                       oCasterPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.InitializePowerProjectile
// [0x00020002] 
struct ASFXProjectile_Power_Seeking_execInitializePowerProjectile_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTravelSpeed;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRadius;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UBioPower*                                   oPower;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oCasterPawn;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.CanLockOn
// [0x00020002] 
struct ASFXProjectile_Power_Seeking_execCanLockOn_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       CasterPawn;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AKActor*                                  oKActor;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXSelectionModule*                      Module;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.Tick
// [0x00820102] 
struct ASFXProjectile_Power_Seeking_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FQuat                                    Q;                                                		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FVector                                  V;                                                		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.ShouldModifyVelocity
// [0x00020002] 
struct ASFXProjectile_Power_Seeking_execShouldModifyVelocity_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.ChordLength
// [0x00020003] ( FUNC_Final )
struct ASFXProjectile_Power_Seeking_execChordLength_Parms
{
	float                                              ChordLen;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Theta;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           CircleRadius;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.GetAimLocation
// [0x00820002] 
struct ASFXProjectile_Power_Seeking_execGetAimLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AimLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.AcquireTarget
// [0x00820002] 
struct ASFXProjectile_Power_Seeking_execAcquireTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  V;                                                		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           RadsToTarget;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FQuat                                    Q;                                                		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_SuperSeeking.InitializeRotation
// [0x00820002] 
struct ASFXProjectile_Power_SuperSeeking_execInitializeRotation_Parms
{
	class APawn*                                       oCasterPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPlayerController*                     PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 Offset;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_CryoFreeze_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_CryoFreeze_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           fFreezeDuration;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           fPhysLevelResistance;                             		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_DelayedCryoFreeze*         FreezeEffect;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CryoFreeze_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneDeath_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXGame*                                 oGame;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  DirectionToSprayParticles;                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class AEmitter*                                 oEmitter;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ASFXPawn_EngineerCombatDrone*             CombatDrone;                                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneDeath_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_CombatDroneAttack_NPC_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneAttack_NPC_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneAttack_NPC_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_CombatDroneAttack_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneAttack_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ASFXAI_Core*                              oController;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneAttack_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_Cloak_NPC.GetDamageMultiplier
// [0x00020002] 
struct USFXPower_Cloak_NPC_execGetDamageMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_Cloak_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.OnCloakEnded
// [0x00020002] 
struct USFXPowerScript_Cloak_execOnCloakEnded_Parms
{
	// float                                           fCooldown;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Cloak_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class APawn*                                    oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_Cloak*                     oCloakEffect;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fDamageMultiplier;                                		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.AdjustCooldown
// [0x00420802] ( FUNC_Event )
struct USFXPowerScript_Cloak_eventAdjustCooldown_Parms
{
	float                                              fCoolDownTime;                                    		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Cloak_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPawn_EngineerTechDrone.SpawnDeathVFX
// [0x00020002] 
struct ASFXPawn_EngineerTechDrone_execSpawnDeathVFX_Parms
{
	// class ASFXGame*                                 oGame;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFXEmitter*                              oEmitter;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPawn_EngineerTechDrone.Died
// [0x00020802] ( FUNC_Event )
struct ASFXPawn_EngineerTechDrone_eventDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 HitPawn;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXPower_CombatDrone_Tech*               TechDronePower;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bResult : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnRemoved
// [0x00020002] 
struct USFXGameEffect_OverheatWeapons_execOnRemoved_Parms
{
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OverheatWeapon
// [0x00020002] 
struct USFXGameEffect_OverheatWeapons_execOverheatWeapon_Parms
{
	// class ASFXWeapon*                               oWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnUpdate
// [0x00020002] 
struct USFXGameEffect_OverheatWeapons_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnApplied
// [0x00020002] 
struct USFXGameEffect_OverheatWeapons_execOnApplied_Parms
{
	// class ASFXGame*                                 oGame;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   oSkeletalMesh;                                    		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.EndStealthVFX
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execEndStealthVFX_Parms
{
	// class UActorComponent*                          Comp;                                             		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ABioPawn*                                 oPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ABioVisualEffect*                         Effect;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASFXWeapon_HeavyPistol_Base*              Pistol;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.RestoreMeshMaterials
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execRestoreMeshMaterials_Parms
{
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nMatIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.TransitionOff
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execTransitionOff_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.DelayedTransitionOff
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execDelayedTransitionOff_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnRemoved
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execOnRemoved_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnUpdate
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StartTransition
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execStartTransition_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.SwapMeshMaterials
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execSwapMeshMaterials_Parms
{
	class USkeletalMeshComponent*                      oSkeletalMesh;                                    		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                Instance;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.SwapInvisibleMaterials
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execSwapInvisibleMaterials_Parms
{
	// class UActorComponent*                          Comp;                                             		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UMaterialInstanceConstant*                Instance;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASFXWeapon_HeavyPistol_Base*              Pistol;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class ASFXPawn_Player*                          PlayerPawn;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StoreMeshMaterials
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execStoreMeshMaterials_Parms
{
	class USkeletalMeshComponent*                      oSkeletalMesh;                                    		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// class UMaterialInterface*                       MatInterface;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StoreStartingMaterials
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execStoreStartingMaterials_Parms
{
	// class UActorComponent*                          Comp;                                             		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ABioPawn*                                 oPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFXWeapon_HeavyPistol_Base*              Pistol;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnApplied
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execOnApplied_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.EndPhase
// [0x00020802] ( FUNC_Event )
struct UBioPlayerMeleeScript_eventEndPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.RemoveMeleeEffects
// [0x00020002] 
struct UBioPlayerMeleeScript_execRemoveMeleeEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.OnImpact
// [0x00820802] ( FUNC_Event )
struct UBioPlayerMeleeScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             GEModule;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     oPlayerController;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	// class ASFXAI_Core*                              AI;                                               		// 0x0048 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             TargetGEModule;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             nMaxPhysicsLevel;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsRobot : 1;                                     		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< unsigned char >                         Parts;                                            		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.Tick
// [0x00020002] 
struct UBioPlayerMeleeScript_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.StartPhase
// [0x00820802] ( FUNC_Event )
struct UBioPlayerMeleeScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     Controller;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  EnemyDirection;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioReactionPowerScript.GetIncreasedReaction
// [0x00020002] 
struct UBioReactionPowerScript_execGetIncreasedReaction_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Reaction;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0005 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioReactionPowerScript.GetCombatReaction
// [0x00020002] 
struct UBioReactionPowerScript_execGetCombatReaction_Parms
{
	int                                                PowerRank;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oTarget;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReactionStacks : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             TargetPhysicsLevel;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned char                                   Reaction;                                         		// 0x0014 (0x0001) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn.OnRemoved
// [0x00020002] 
struct USFXGameEffect_HenchmenIgnorePawn_execOnRemoved_Parms
{
	// class ABioAiController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 PlayerPawn;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn.OnApplied
// [0x00020002] 
struct USFXGameEffect_HenchmenIgnorePawn_execOnApplied_Parms
{
	// class ABioAiController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 PlayerPawn;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASFXAI_Core*                              AICore;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.ShouldUsePower
// [0x00420002] 
struct UBioHackingScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.IsHacked
// [0x00020002] 
struct UBioHackingScript_execIsHacked_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.RemoveWeakerHack
// [0x00020002] 
struct UBioHackingScript_execRemoveWeakerHack_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fNewDuration;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FName                                    EffectCategory;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.UnHackPreviousTargets
// [0x00020002] 
struct UBioHackingScript_execUnHackPreviousTargets_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   oActor;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioHackingScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Duration;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_GiveShield*                Effect;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fShieldStrength;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_AIHacking*                 HackingEffect;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioHackingScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXGameEffect_IgnorePawn.OnRemoved
// [0x00020002] 
struct USFXGameEffect_IgnorePawn_execOnRemoved_Parms
{
	// class ASFXAI_Core*                              oController;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_IgnorePawn.OnApplied
// [0x00020002] 
struct USFXGameEffect_IgnorePawn_execOnApplied_Parms
{
	// class ASFXAI_Core*                              oController;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.PlayDeathVocalization
// [0x00020000] 
struct ASFXPawn_EngineerCombatDrone_execPlayDeathVocalization_Parms
{
	class ABioPawn*                                    Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.Destroyed
// [0x00820902] ( FUNC_Event )
struct ASFXPawn_EngineerCombatDrone_eventDestroyed_Parms
{
	// class ASFXGame*                                 oGame;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  DirectionToSprayParticles;                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// class AEmitter*                                 oEmitter;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// class USFXModule_Damage*                        DamageModule;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ASFXAI_Core*                              oAI;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.Died
// [0x00020802] ( FUNC_Event )
struct ASFXPawn_EngineerCombatDrone_eventDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.SetDroneColor2
// [0x00020002] 
struct ASFXPawn_EngineerCombatDrone_execSetDroneColor2_Parms
{
	struct FVector                                     NewColor;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.SetDroneColor
// [0x00020002] 
struct ASFXPawn_EngineerCombatDrone_execSetDroneColor_Parms
{
	struct FVector                                     NewColor;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.PostBeginPlay
// [0x00020002] 
struct ASFXPawn_EngineerCombatDrone_execPostBeginPlay_Parms
{
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.OnDroneKilled
// [0x00120000] 
struct ASFXPawn_EngineerCombatDrone_execOnDroneKilled_Parms
{
};

// Function SFXGameContent_Powers.SFXPower_CombatDrone.GetHealthMultiplier
// [0x00020002] 
struct USFXPower_CombatDrone_execGetHealthMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCombatDroneScript.ShouldUsePower
// [0x00420002] 
struct UBioCombatDroneScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnDroneKilled
// [0x00020002] 
struct UBioCombatDroneScript_execOnDroneKilled_Parms
{
};

// Function SFXGameContent_Powers.BioCombatDroneScript.DespawnDrone
// [0x00020002] 
struct UBioCombatDroneScript_execDespawnDrone_Parms
{
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnOwnerDied
// [0x00020002] 
struct UBioCombatDroneScript_execOnOwnerDied_Parms
{
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnPowerRankIncreased
// [0x00020002] 
struct UBioCombatDroneScript_execOnPowerRankIncreased_Parms
{
};

// Function SFXGameContent_Powers.BioCombatDroneScript.SpawnDrone
// [0x00020002] 
struct UBioCombatDroneScript_execSpawnDrone_Parms
{
	class ABioPawn*                                    oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DroneClass;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              HealthMultiplier;                                 		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Lifetime;                                         		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCustomColor : 1;                                 		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     CustomColor;                                      		// 0x002C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCustomColor2 : 1;                                		// 0x0038 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     CustomColor2;                                     		// 0x003C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DroneTarget;                                      		// 0x0048 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class ABioPawn*                                    ReturnValue;                                      		// 0x004C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_Damage*                        DamageModule;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	// class ASFXPawn_EngineerCombatDrone*             SFXDrone;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           fBonus;                                           		// 0x0058 (0x0004) [0x0000000000000000]              
	// class USFXPower*                                oPower;                                           		// 0x005C (0x0004) [0x0000000000000000]              
	// class ASFXAI_Core*                              DroneAI;                                          		// 0x0060 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bPlayerSquad : 1;                                 		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetSpawnLocation
// [0x00820002] 
struct UBioCombatDroneScript_execGetSpawnLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SpawnLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// TArray< struct FVector >                        SpawnLocations;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ABioPawn*                                 PlayerPartyTarget;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 CasterPawn;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetBackLocation
// [0x00020002] 
struct UBioCombatDroneScript_execGetBackLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetFrontLocation
// [0x00820002] 
struct UBioCombatDroneScript_execGetFrontLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YawOffset;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCombatDroneScript.IsSafeSpawnLocation
// [0x00C20002] 
struct UBioCombatDroneScript_execIsSafeSpawnLocation_Parms
{
	struct FVector                                     SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  FloorLocation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCombatDroneScript.IsDroneAlive
// [0x00020002] 
struct UBioCombatDroneScript_execIsDroneAlive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCombatDroneScript.StartPhase
// [0x00820802] ( FUNC_Event )
struct UBioCombatDroneScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vDroneLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCombatDroneScript.CanStartPower
// [0x00020802] ( FUNC_Event )
struct UBioCombatDroneScript_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ShouldUsePower
// [0x00420002] 
struct UBioWeaponPowerScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    CasterAsPawn;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ApplyPowerEffects
// [0x00020000] 
struct UBioWeaponPowerScript_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.SetWeaponPower
// [0x00020002] 
struct UBioWeaponPowerScript_execSetWeaponPower_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOverrideCurrentPower : 1;                        		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXHeavyWeapon*                          oHeavyWeapon;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_WeaponVFXChange*           WeaponVFXEffect;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ReloadAmmoPower
// [0x00020002] 
struct UBioWeaponPowerScript_execReloadAmmoPower_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  Weapon;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioWeaponPowerScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ABioBaseSquad*                            oSquad;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ApplyToSquadMembers
// [0x00020002] 
struct UBioWeaponPowerScript_execApplyToSquadMembers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.GetDuration
// [0x00020102] 
struct UBioWeaponPowerScript_execGetDuration_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.GetElapsedTime
// [0x00020102] 
struct UBioWeaponPowerScript_execGetElapsedTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.CanStartPower
// [0x00020802] ( FUNC_Event )
struct UBioWeaponPowerScript_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 CasterAsPawn;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.RemoveWeaponHologram
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execRemoveWeaponHologram_Parms
{
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.EnableWeaponHologram
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execEnableWeaponHologram_Parms
{
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponUnequip
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponUnequip_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponEquip
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponEquip_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponReload
// [0x00020000] 
struct USFXGameEffect_AmmoPower_execOnWeaponReload_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.GetDamageVocProbabilityMod
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execGetDamageVocProbabilityMod_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0004 (0x0044) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnRemoved
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnRemoved_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnApplied
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnApplied_Parms
{
};

// Function SFXGameContent_Powers.BioSniperCritScript.ApplyPowerEffects
// [0x00020002] 
struct UBioSniperCritScript_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_ArmorPiercingAmmo*         oEffect;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSniperCritScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioSniperCritScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bSuccess : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APawn*                                    oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSniperCritScript.ApplyToSquadMembers
// [0x00020002] 
struct UBioSniperCritScript_execApplyToSquadMembers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioSniperCritScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioSniperCritScript_eventInitializePowerScript_Parms
{
};

// Function SFXGameContent_Powers.SFXGameEffect_ArmorPiercingAmmo.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_ArmorPiercingAmmo_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0004 (0x0044) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           fExtraDamage;                                     		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioNeuralShockScript.ShouldUsePower
// [0x00420002] 
struct UBioNeuralShockScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioNeuralShockScript.UnaffectPreviousTargets
// [0x00020002] 
struct UBioNeuralShockScript_execUnaffectPreviousTargets_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   oActor;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioNeuralShockScript.DisablePowers
// [0x00020002] 
struct UBioNeuralShockScript_execDisablePowers_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UBioEpicPawnBehavior*                     oBehavior;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UBioPower*                                oPower;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioNeuralShockScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioNeuralShockScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fRagdollDuration;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fAccuracyPenalty;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_DelayedNeuralShock*        NeuralEffect;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioNeuralShockScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioNeuralShockScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_NeuralShock.DisablePowers
// [0x00020002] 
struct USFXPower_NeuralShock_execDisablePowers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_NeuralShock.GetAccuracyPenalty
// [0x00020002] 
struct USFXPower_NeuralShock_execGetAccuracyPenalty_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXGameEffect_DelayedNeuralShock.OnRemoved
// [0x00020002] 
struct USFXGameEffect_DelayedNeuralShock_execOnRemoved_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASFXAI_Core*                              AI;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UBioCustomAction*                         CurrentCustomAction;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USFXCustomAction_NeuralShock*             NeuralShockAction;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_MordinPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerScript_MordinPassive_execApplyGlobalBonus_Parms
{
	// float                                           fShieldIncrease;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXPower_MordinPassive*                  oPassivePower;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_HenchmanPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerScript_HenchmanPassive_execApplyGlobalBonus_Parms
{
	// float                                           fHealthIncrease;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           fWeaponDamageIncrease;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXPower_HenchmanPassive*                oPassivePower;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCarnageScript.ApplyPowerEffects
// [0x00020002] 
struct UBioCarnageScript_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_IncendiaryAmmo*            oEffect;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCarnageScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioCarnageScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bSuccess : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APawn*                                    oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCarnageScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioCarnageScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCarnageScript.ApplyToSquadMembers
// [0x00020002] 
struct UBioCarnageScript_execApplyToSquadMembers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCarnageScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioCarnageScript_eventInitializePowerScript_Parms
{
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.CauseAnimatedReaction
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execCauseAnimatedReaction_Parms
{
	class AActor*                                      oHitActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDelay;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_DelayedCustomAction*       oEffect;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Random;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.AddGameEffects
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execAddGameEffects_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamagePerSecond;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    BPInstigator;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_HeavyFireDamage*           Effect;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.DoEvolvedAoEImpact
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execDoEvolvedAoEImpact_Parms
{
	struct FImpactInfo                                 Impact;                                           		// 0x0000 (0x0044) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    WeaponOwner;                                      		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  Weapon;                                           		// 0x0048 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oNearbyPawn;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	// class ABioPlayerSquad*                          oPlayerSquad;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             nImpactedCount;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           fAnimatedReactionChance;                          		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.GetDamageVocProbabilityMod
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execGetDamageVocProbabilityMod_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0004 (0x0044) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// class AActor*                                   oHitActor;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           fExtraDamage;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 WeaponOwner;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           fAnimatedReactionChance;                          		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPower_DefensiveShieldBase.GetShieldValue
// [0x00020002] 
struct USFXPower_DefensiveShieldBase_execGetShieldValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_DefensiveShieldBase_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ASFXAI_Core*                              AI;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_DefensiveShieldBase_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_GiveShield*                ShieldEffect;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fVFXDuration;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fShieldBonus;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           fBaseMaxShields;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	// class ASFXShield_Base*                          Shields;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.OnShieldDestroyed
// [0x00020002] 
struct USFXPowerScript_DefensiveShieldBase_execOnShieldDestroyed_Parms
{
	class AActor*                                      ShieldActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXShield_Base*                             Shield;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_DefensiveShieldBase_eventInitializePowerScript_Parms
{
	// class ASFXShield_Base*                          Shield;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 OwnerPawn;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_PullProjectile_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerScript_PullProjectile_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.DropCurrentTargets
// [0x00020002] 
struct USFXPowerScript_PullProjectile_execDropCurrentTargets_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   oActor;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.EffectPull
// [0x00020002] 
struct USFXPowerScript_PullProjectile_execEffectPull_Parms
{
	class ABioPawn*                                    oCasterPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmCategory;                                       		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vForce;                                           		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fGravityRampUpTime;                               		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMinVelocity;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMinForceMult;                                    		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmPowerName;                                      		// 0x002C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_Pull*                      oPullEffect;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	// class ABioVisualEffect*                         oVisualEffect;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_PullProjectile_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Force;                                            		// 0x002C (0x000C) [0x0000000000000000]              
	// float                                           fGravityRampUpTime;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.OnProjectileExploded
// [0x00020002] 
struct USFXPowerScript_PullProjectile_execOnProjectileExploded_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Velocity;                                         		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_PullProjectile_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif