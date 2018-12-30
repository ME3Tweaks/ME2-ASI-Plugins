/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GameFramework.GameHUD.EGameHUDColor
/*enum EGameHUDColor
{
	GHD_WHITE                                          = 0,
	GHD_BLACK                                          = 1,
	GHD_MAX                                            = 2
};*/

// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
/*enum ERecoilStart
{
	ERS_Zero                                           = 0,
	ERS_Random                                         = 1,
	ERS_MAX                                            = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GameFramework.GameBreakableActor
// 0x0024 (0x02D8 - 0x02B4)
class AGameBreakableActor : public AKActor
{
public:
	TArray< class UClass* >                            DamageTypes;                                      		// 0x02B4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBreakableStep >                    BreakableSteps;                                   		// 0x02C0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CurrentBreakableStep;                             		// 0x02CC (0x0004) [0x0000000000000000]              
	struct FLightingChannelContainer                   ParticleLightingChannels;                         		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bParticlesAcceptLights : 1;                       		// 0x02D4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bParticlesAcceptDynamicLights : 1;                		// 0x02D4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1093 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void HideAndDestroy ( );
	void BreakLastApart ( class AController* EventInstigator );
	void BreakStepApart ( int BrokenStep );
	bool IsValidDamageType ( class UClass* inDamageType );
	void TakeStepDamage ( int Damage, class AController* EventInstigator, unsigned long bIsBroken, int BrokenStep );
	void TakeLastDamage ( int Damage, class AController* EventInstigator, unsigned long bIsBroken, int BrokenStep );
	void eventTakeDamage ( float Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void SetParticlesLighting ( class AEmitter* Emit );
	struct FVector GetOffsetToWorld ( struct FVector Offset );
};

UClass* AGameBreakableActor::pClassPointer = NULL;

// Class GameFramework.GameHUD
// 0x0024 (0x04A4 - 0x0480)
class AGameHUD : public AHUD
{
public:
	float                                              TotalTitleDrawTime;                               		// 0x0480 (0x0004) [0x0000000000000000]              
	float                                              TotalTitleFadeTime;                               		// 0x0484 (0x0004) [0x0000000000000000]              
	float                                              TitleDrawStartTime;                               		// 0x0488 (0x0004) [0x0000000000000000]              
	struct FString                                     ChapterTitleString;                               		// 0x048C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ActTitleString;                                   		// 0x0498 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1094 ];

		return pClassPointer;
	};

	void StopDrawingChapterTitle ( );
	void StartDrawingChapterTitle ( struct FString ChapterName, struct FString ActName, float TotalDrawTime, float TotalFadeTime );
	void SetHUDDrawColor ( unsigned char eColor, unsigned char Alpha );
};

UClass* AGameHUD::pClassPointer = NULL;

// Class GameFramework.GamePawn
// 0x0000 (0x041C - 0x041C)
class AGamePawn : public APawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1095 ];

		return pClassPointer;
	};

	void GetTargetFrictionCylinder ( float* CylinderRadius, float* CylinderHeight );
};

UClass* AGamePawn::pClassPointer = NULL;

// Class GameFramework.GamePlayerController
// 0x0000 (0x0578 - 0x0578)
class AGamePlayerController : public APlayerController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1096 ];

		return pClassPointer;
	};

	void ClientDisplayChapterTitle ( int DisplayChapter, float TotalDisplayTime, float TotalFadeTime );
	void DisplayChapterTitle ( int DisplayChapter, float TotalDisplayTime, float TotalFadeTime );
	void GetChapterStrings ( int eChapter, struct FString* ChapterName, struct FString* ActName );
};

UClass* AGamePlayerController::pClassPointer = NULL;

// Class GameFramework.GamePlayerInput
// 0x0000 (0x0150 - 0x0150)
class UGamePlayerInput : public UPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1097 ];

		return pClassPointer;
	};

};

UClass* UGamePlayerInput::pClassPointer = NULL;

// Class GameFramework.GameProjectile
// 0x0000 (0x0238 - 0x0238)
class AGameProjectile : public AProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1098 ];

		return pClassPointer;
	};

};

UClass* AGameProjectile::pClassPointer = NULL;

// Class GameFramework.GameTypes
// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1099 ];

		return pClassPointer;
	};

};

UClass* UGameTypes::pClassPointer = NULL;

// Class GameFramework.GameVehicle
// 0x0000 (0x05A0 - 0x05A0)
class AGameVehicle : public ASVehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1100 ];

		return pClassPointer;
	};

};

UClass* AGameVehicle::pClassPointer = NULL;

// Class GameFramework.GameWeapon
// 0x0000 (0x02E8 - 0x02E8)
class AGameWeapon : public AWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1101 ];

		return pClassPointer;
	};

};

UClass* AGameWeapon::pClassPointer = NULL;

// Class GameFramework.GameSkelCtrl_Recoil
// 0x0080 (0x0118 - 0x0098)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                             		// 0x0098 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FRecoilDef                                  Recoil;                                           		// 0x009C (0x0070) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Aim;                                              		// 0x010C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPlayRecoil : 1;                                  		// 0x0114 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	unsigned long                                      bOldPlayRecoil : 1;                               		// 0x0114 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bApplyControl : 1;                                		// 0x0114 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1102 ];

		return pClassPointer;
	};

};

UClass* UGameSkelCtrl_Recoil::pClassPointer = NULL;

// Class GameFramework.GameActorFactoryBreakable
// 0x0000 (0x0095 - 0x0095)
class UGameActorFactoryBreakable : public UActorFactoryRigidBody
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 26958 ];

		return pClassPointer;
	};

};

UClass* UGameActorFactoryBreakable::pClassPointer = NULL;

// Class GameFramework.SeqAct_DisplayChapterTitleBase
// 0x0008 (0x00F8 - 0x00F0)
class USeqAct_DisplayChapterTitleBase : public USequenceAction
{
public:
	float                                              TotalDisplayTime;                                 		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TotalFadeTime;                                    		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 27083 ];

		return pClassPointer;
	};

};

UClass* USeqAct_DisplayChapterTitleBase::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif