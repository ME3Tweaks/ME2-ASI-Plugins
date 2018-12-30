/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_f_structs.h
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

// Function GameFramework.GameBreakableActor.Destroyed
// [0x00020802] ( FUNC_Event )
struct AGameBreakableActor_eventDestroyed_Parms
{
};

// Function GameFramework.GameBreakableActor.HideAndDestroy
// [0x00020002] 
struct AGameBreakableActor_execHideAndDestroy_Parms
{
};

// Function GameFramework.GameBreakableActor.BreakLastApart
// [0x00820002] 
struct AGameBreakableActor_execBreakLastApart_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AEmitterSpawnable*                        Emit;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameBreakableActor.BreakStepApart
// [0x00820002] 
struct AGameBreakableActor_execBreakStepApart_Parms
{
	int                                                BrokenStep;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AEmitterSpawnable*                        Emit;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameBreakableActor.IsValidDamageType
// [0x00020003] ( FUNC_Final )
struct AGameBreakableActor_execIsValidDamageType_Parms
{
	class UClass*                                      inDamageType;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bValid : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameBreakableActor.TakeStepDamage
// [0x00020002] 
struct AGameBreakableActor_execTakeStepDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsBroken : 1;                                    		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                BrokenStep;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameBreakableActor.TakeLastDamage
// [0x00020002] 
struct AGameBreakableActor_execTakeLastDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsBroken : 1;                                    		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                BrokenStep;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameBreakableActor.TakeDamage
// [0x00020802] ( FUNC_Event )
struct AGameBreakableActor_eventTakeDamage_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameBreakableActor.SetParticlesLighting
// [0x00020400] ( FUNC_Native )
struct AGameBreakableActor_execSetParticlesLighting_Parms
{
	class AEmitter*                                    Emit;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameBreakableActor.GetOffsetToWorld
// [0x00020400] ( FUNC_Native )
struct AGameBreakableActor_execGetOffsetToWorld_Parms
{
	struct FVector                                     Offset;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameHUD.StopDrawingChapterTitle
// [0x00020102] 
struct AGameHUD_execStopDrawingChapterTitle_Parms
{
};

// Function GameFramework.GameHUD.StartDrawingChapterTitle
// [0x00020102] 
struct AGameHUD_execStartDrawingChapterTitle_Parms
{
	struct FString                                     ChapterName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ActName;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              TotalDrawTime;                                    		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TotalFadeTime;                                    		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameHUD.SetHUDDrawColor
// [0x00020002] 
struct AGameHUD_execSetHUDDrawColor_Parms
{
	unsigned char                                      eColor;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Alpha;                                            		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GamePawn.GetTargetFrictionCylinder
// [0x00420102] 
struct AGamePawn_execGetTargetFrictionCylinder_Parms
{
	float                                              CylinderRadius;                                   		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              CylinderHeight;                                   		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GameFramework.GamePlayerController.ClientDisplayChapterTitle
// [0x010201C2] 
struct AGamePlayerController_execClientDisplayChapterTitle_Parms
{
	int                                                DisplayChapter;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TotalDisplayTime;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TotalFadeTime;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  ChapterName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ActName;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GameFramework.GamePlayerController.DisplayChapterTitle
// [0x00020102] 
struct AGamePlayerController_execDisplayChapterTitle_Parms
{
	int                                                DisplayChapter;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TotalDisplayTime;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TotalFadeTime;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GamePlayerController.GetChapterStrings
// [0x00420400] ( FUNC_Native )
struct AGamePlayerController_execGetChapterStrings_Parms
{
	int                                                eChapter;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ChapterName;                                      		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     ActName;                                          		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif