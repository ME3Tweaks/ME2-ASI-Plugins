/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_Powers_classes.h
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContent_Powers.SFXGameEffect_PowerBonus
// 0x0004 (0x006C - 0x0068)
class USFXGameEffect_PowerBonus : public USFXGameEffect
{
public:
	class UClass*                                      PowerClass;                                       		// 0x0068 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77776 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_PowerBonus::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXGameEffect_DamageBonus
// 0x000C (0x0078 - 0x006C)
class USFXGameEffect_DamageBonus_Powers : public USFXGameEffect_PowerBonus
{
public:
	TArray< class USFXPower* >                         AffectedPowers;                                   		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77779 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_DamageBonus_Powers::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_PlayerMelee
// 0x0008 (0x0154 - 0x014C)
class USFXPower_PlayerMelee : public USFXPower
{
public:
	class UWwiseEvent*                                 WwiseImpactEvent;                                 		// 0x014C (0x0004) [0x0000000000000000]              
	int                                                MaxPhysicsLevel;                                  		// 0x0150 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97226 ];

		return pClassPointer;
	};

};

UClass* USFXPower_PlayerMelee::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_PlayerMeleePistol
// 0x0000 (0x0154 - 0x0154)
class USFXPower_PlayerMeleePistol : public USFXPower_PlayerMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96658 ];

		return pClassPointer;
	};

};

UClass* USFXPower_PlayerMeleePistol::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_Overload
// 0x0084 (0x0144 - 0x00C0)
class USFXPowerScript_Overload : public UBioPowerScriptDesign
{
public:
	class USFXPower_Overload*                          m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x00C8 (0x0004) [0x0000000000000000]              
	struct FScreenShakeStruct                          DetonationCameraShake;                            		// 0x00CC (0x0070) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x013C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 HeavyImpactSound;                                 		// 0x0140 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96666 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	void SpawnBigImpactVFX ( class AActor* oImpacted );
	void ExplodeEnemy ( class ABioPawn* oPawn, class ABioPawn* oCaster );
	bool CanEnemyBeExploded ( class ABioPawn* oPawn );
	void TurnOnDeathPower ( class AActor* oImpacted );
	void StunRobot ( class ABioPawn* oPawn, float fDuration );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* USFXPowerScript_Overload::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXProjectile_Power_Seeking
// 0x0028 (0x0348 - 0x0320)
class ASFXProjectile_Power_Seeking : public ASFXProjectile_Power
{
public:
	class AActor*                                      AcquiredTarget;                                   		// 0x0320 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeAlive;                                        		// 0x0324 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurveShape;                                       		// 0x0328 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FQuat                                       StartRotation;                                    		// 0x032C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bExplodeNextFrame : 1;                            		// 0x033C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              UpperBound;                                       		// 0x0340 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InterpRate;                                       		// 0x0344 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96740 ];

		return pClassPointer;
	};

	void Recycle ( );
	void InitializeRotation ( class APawn* oCasterPawn );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class UBioPower* oPower );
	bool CanLockOn ( class AActor* Target, class APawn* CasterPawn );
	void Tick ( float DeltaTime );
	bool ShouldModifyVelocity ( );
	float ChordLength ( float ChordLen, float Theta );
	struct FVector GetAimLocation ( class AActor* Target );
	void AcquireTarget ( class AActor* Target );
};

UClass* ASFXProjectile_Power_Seeking::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC
// 0x0008 (0x0350 - 0x0348)
class ASFXProjectile_Power_Seeking_NPC : public ASFXProjectile_Power_Seeking
{
public:
	float                                              MaxAngleChange;                                   		// 0x0348 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bHoming : 1;                                      		// 0x034C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96681 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	struct FVector GetAimLocation ( class AActor* Target );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class UBioPower* oPower );
};

UClass* ASFXProjectile_Power_Seeking_NPC::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Incinerate
// 0x002C (0x0178 - 0x014C)
class USFXPower_Incinerate : public USFXPower
{
public:
	float                                              RobotDamageMultiplier;                            		// 0x014C (0x0004) [0x0000000000000000]              
	unsigned long                                      StopHealthRegen : 1;                              		// 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      CanPlayAnimatedReaction : 1;                      		// 0x0150 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< float >                                    LargeFlameCount;                                  		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    DoTDamagePercent;                                 		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            AnimatedReactions;                                		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96713 ];

		return pClassPointer;
	};

	float GetDuration ( );
};

UClass* USFXPower_Incinerate::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Incinerate_NPC
// 0x0008 (0x0180 - 0x0178)
class USFXPower_Incinerate_NPC : public USFXPower_Incinerate
{
public:
	struct FVector2D                                   DamageNPC;                                        		// 0x0178 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96686 ];

		return pClassPointer;
	};

	float GetDamage ( );
};

UClass* USFXPower_Incinerate_NPC::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Overload
// 0x001C (0x0168 - 0x014C)
class USFXPower_Overload : public USFXPower
{
public:
	unsigned long                                      bExplodesRobots : 1;                              		// 0x014C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< float >                                    RobotStunLength;                                  		// 0x0150 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    OverheatLength;                                   		// 0x015C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96690 ];

		return pClassPointer;
	};

	float GetOverheatLength ( );
	float GetRobotStunLength ( );
};

UClass* USFXPower_Overload::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Overload_Radius
// 0x0000 (0x0168 - 0x0168)
class USFXPower_Overload_Radius : public USFXPower_Overload
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96688 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Overload_Radius::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Overload_Heavy
// 0x0000 (0x0168 - 0x0168)
class USFXPower_Overload_Heavy : public USFXPower_Overload
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96689 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Overload_Heavy::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Overload_Engineer
// 0x0000 (0x0168 - 0x0168)
class USFXPower_Overload_Engineer : public USFXPower_Overload
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96691 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Overload_Engineer::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Incinerate_Engineer
// 0x0000 (0x0178 - 0x0178)
class USFXPower_Incinerate_Engineer : public USFXPower_Incinerate
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96693 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Incinerate_Engineer::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Incinerate_Radius
// 0x0000 (0x0178 - 0x0178)
class USFXPower_Incinerate_Radius : public USFXPower_Incinerate
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96694 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Incinerate_Radius::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Incinerate_Heavy
// 0x0000 (0x0178 - 0x0178)
class USFXPower_Incinerate_Heavy : public USFXPower_Incinerate
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96695 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Incinerate_Heavy::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXProjectile_Power_SuperSeeking
// 0x0000 (0x0348 - 0x0348)
class ASFXProjectile_Power_SuperSeeking : public ASFXProjectile_Power_Seeking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96741 ];

		return pClassPointer;
	};

	void InitializeRotation ( class APawn* oCasterPawn );
};

UClass* ASFXProjectile_Power_SuperSeeking::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXProjectile_Incinerate
// 0x0000 (0x0348 - 0x0348)
class ASFXProjectile_Incinerate : public ASFXProjectile_Power_SuperSeeking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96696 ];

		return pClassPointer;
	};

};

UClass* ASFXProjectile_Incinerate::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_Incinerate
// 0x0098 (0x0158 - 0x00C0)
class USFXPowerScript_Incinerate : public UBioPowerScriptDesign
{
public:
	class USFXPower_Incinerate*                        m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PS_FlameImpactEffect;                             		// 0x00C4 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_SmallFlameEffect;                              		// 0x00C8 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_LargeFlameEffect;                              		// 0x00CC (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_FlameExplosionEffect;                          		// 0x00D0 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x00D4 (0x0004) [0x0000000000000000]              
	struct FScreenShakeStruct                          HitShake;                                         		// 0x00D8 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x0148 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x014C (0x0004) [0x0000000000000000]              
	float                                              DoTDuration;                                      		// 0x0150 (0x0004) [0x0000000000000000]              
	float                                              DoTDamagePerSecond;                               		// 0x0154 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96697 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	void ExplodeEnemy ( class ABioPawn* oPawn, class ABioPawn* oCaster );
	bool CanEnemyBeExploded ( class ABioPawn* oPawn );
	void CauseAnimatedReaction ( class AActor* oHitActor, float fDelay );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* USFXPowerScript_Incinerate::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_FirstAid
// 0x0008 (0x00C8 - 0x00C0)
class USFXPowerScript_FirstAid : public UBioPowerScriptDesign
{
public:
	class USFXPower_FirstAid*                          m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96714 ];

		return pClassPointer;
	};

	struct FString GetHUDWheelIconInfo ( class ABioPawn* OwnerPawn );
	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	int CountMediGel ( class ABioPlayerSquad* oPlayerSquad );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool eventCanStartPower ( class AActor* oCaster );
};

UClass* USFXPowerScript_FirstAid::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_FirstAid
// 0x0000 (0x014C - 0x014C)
class USFXPower_FirstAid : public USFXPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96718 ];

		return pClassPointer;
	};

};

UClass* USFXPower_FirstAid::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_EngineerPassive
// 0x003C (0x0194 - 0x0158)
class USFXPower_EngineerPassive : public USFXPower_PassivePower
{
public:
	TArray< float >                                    HealthBonus;                                      		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    CooldownReduction;                                		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    PowerDurationIncrease;                            		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    PowerDamageIncrease;                              		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    ResearchCost;                                     		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96736 ];

		return pClassPointer;
	};

};

UClass* USFXPower_EngineerPassive::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_EngineerPassive_Evolved2
// 0x0000 (0x0194 - 0x0194)
class USFXPower_EngineerPassive_Evolved2 : public USFXPower_EngineerPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96721 ];

		return pClassPointer;
	};

};

UClass* USFXPower_EngineerPassive_Evolved2::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_EngineerPassive_Evolved1
// 0x0000 (0x0194 - 0x0194)
class USFXPower_EngineerPassive_Evolved1 : public USFXPower_EngineerPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96722 ];

		return pClassPointer;
	};

};

UClass* USFXPower_EngineerPassive_Evolved1::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_PassivePower
// 0x0000 (0x00C0 - 0x00C0)
class USFXPowerScript_PassivePower : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96723 ];

		return pClassPointer;
	};

	void RemovePowerBonusEffect ( class AActor* oTarget, class UClass* ClassName, struct FName nmCategory, class UClass* PowerClass );
	void ApplyPowerBonusEffect ( class AActor* oTarget, class UClass* ClassName, float fEffectValue, struct FName nmCategory, class UClass* PowerClass );
	void ApplyHealthModifier ( float fHealthModifier, class AActor* Target );
	void ApplyWeaponDamageModifier ( float fDamageModifier, class AActor* Target );
	void ApplyPowerCooldownModifier ( float fCooldownModifier, class AActor* Target );
	void ApplyPassiveBonus ( class UClass* EffectClass, float fModifier, class AActor* Target );
	void ApplyGlobalBonus ( );
	void OnSquadMemberAdded ( class APawn* Pawn );
	void OnPowersLoaded ( );
	void OnPowerRankIncreased ( );
	void eventInitializePowerScript ( );
};

UClass* USFXPowerScript_PassivePower::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_EngineerPassive
// 0x0000 (0x00C0 - 0x00C0)
class USFXPowerScript_EngineerPassive : public USFXPowerScript_PassivePower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96724 ];

		return pClassPointer;
	};

	void ApplyGlobalBonus ( );
};

UClass* USFXPowerScript_EngineerPassive::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_CryoFreeze
// 0x0008 (0x00C8 - 0x00C0)
class USFXPowerScript_CryoFreeze : public UBioPowerScriptDesign
{
public:
	class USFXPower_CryoFreeze*                        m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96742 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* USFXPowerScript_CryoFreeze::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CombatDroneAttack
// 0x0014 (0x0160 - 0x014C)
class USFXPower_CombatDroneAttack : public USFXPower
{
public:
	unsigned long                                      bPlayAnimatedReaction : 1;                        		// 0x014C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< unsigned char >                            AnimatedReactions;                                		// 0x0150 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      DamageClass;                                      		// 0x015C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96796 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CombatDroneAttack::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CombatDroneShock
// 0x0000 (0x0160 - 0x0160)
class USFXPower_CombatDroneShock : public USFXPower_CombatDroneAttack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96750 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CombatDroneShock::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath
// 0x0008 (0x00C8 - 0x00C0)
class USFXPowerScript_CombatDroneDeath : public UBioPowerScriptDesign
{
public:
	class USFXPower_CombatDroneDeath*                  m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PS_DeathVFX;                                      		// 0x00C4 (0x0004) [0x0000000004000000]              ( CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96751 ];

		return pClassPointer;
	};

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* USFXPowerScript_CombatDroneDeath::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CombatDroneDeath
// 0x0000 (0x014C - 0x014C)
class USFXPower_CombatDroneDeath : public USFXPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96753 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CombatDroneDeath::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC
// 0x000C (0x00CC - 0x00C0)
class USFXPowerScript_CombatDroneAttack_NPC : public UBioPowerScriptDesign
{
public:
	class USFXPower_CombatDroneAttack_NPC*             m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      ImpactShake;                                      		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x00C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96754 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* USFXPowerScript_CombatDroneAttack_NPC::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CombatDroneAttack_NPC
// 0x000C (0x0158 - 0x014C)
class USFXPower_CombatDroneAttack_NPC : public USFXPower
{
public:
	TArray< unsigned char >                            AnimatedReactions;                                		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96782 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CombatDroneAttack_NPC::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack
// 0x000C (0x00CC - 0x00C0)
class USFXPowerScript_CombatDroneAttack : public UBioPowerScriptDesign
{
public:
	class USFXPower_CombatDroneAttack*                 m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x00C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96783 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* USFXPowerScript_CombatDroneAttack::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CombatDrone
// 0x0038 (0x0184 - 0x014C)
class USFXPower_CombatDrone : public USFXPower
{
public:
	class UClass*                                      DroneClass;                                       		// 0x014C (0x0004) [0x0000000000000000]              
	unsigned long                                      bCustomDroneColor : 1;                            		// 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCustomDroneColor2 : 1;                           		// 0x0150 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     CustomDroneColor;                                 		// 0x0154 (0x000C) [0x0000000000000000]              
	struct FVector                                     CustomDroneColor2;                                		// 0x0160 (0x000C) [0x0000000000000000]              
	TArray< float >                                    DroneAttackRate;                                  		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    DroneHealthMultiplier;                            		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97371 ];

		return pClassPointer;
	};

	float GetHealthMultiplier ( );
};

UClass* USFXPower_CombatDrone::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CombatDrone_Engineer
// 0x0000 (0x0184 - 0x0184)
class USFXPower_CombatDrone_Engineer : public USFXPower_CombatDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96800 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CombatDrone_Engineer::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CombatDrone_Rocket
// 0x0000 (0x0184 - 0x0184)
class USFXPower_CombatDrone_Rocket : public USFXPower_CombatDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96804 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CombatDrone_Rocket::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Cloak
// 0x0010 (0x015C - 0x014C)
class USFXPower_Cloak : public USFXPower
{
public:
	unsigned long                                      bBreakCloakOnAttack : 1;                          		// 0x014C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< float >                                    DamageBonus;                                      		// 0x0150 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96849 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Cloak::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Cloak_NPC
// 0x0000 (0x015C - 0x015C)
class USFXPower_Cloak_NPC : public USFXPower_Cloak
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96817 ];

		return pClassPointer;
	};

	float GetDamageMultiplier ( );
};

UClass* USFXPower_Cloak_NPC::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Cloak_Enhanced
// 0x0000 (0x015C - 0x015C)
class USFXPower_Cloak_Enhanced : public USFXPower_Cloak
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96827 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Cloak_Enhanced::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Cloak_Damage
// 0x0000 (0x015C - 0x015C)
class USFXPower_Cloak_Damage : public USFXPower_Cloak
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96828 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Cloak_Damage::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_Cloak
// 0x0010 (0x00D0 - 0x00C0)
class USFXPowerScript_Cloak : public UBioPowerScriptDesign
{
public:
	class USFXPower_Cloak*                             m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FName                                       EffectCategory;                                   		// 0x00C4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bCloakEnded : 1;                                  		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96829 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	void OnCloakEnded ( );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventAdjustCooldown ( float* fCoolDownTime );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* USFXPowerScript_Cloak::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CryoFreeze
// 0x000C (0x0158 - 0x014C)
class USFXPower_CryoFreeze : public USFXPower
{
public:
	TArray< unsigned char >                            AnimatedReactions;                                		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96891 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CryoFreeze::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CryoFreeze_Evolved2
// 0x0000 (0x0158 - 0x0158)
class USFXPower_CryoFreeze_Evolved2 : public USFXPower_CryoFreeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96889 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CryoFreeze_Evolved2::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CryoFreeze_Evolved1
// 0x0000 (0x0158 - 0x0158)
class USFXPower_CryoFreeze_Evolved1 : public USFXPower_CryoFreeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96890 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CryoFreeze_Evolved1::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CryoFreeze_Engineer
// 0x0000 (0x0158 - 0x0158)
class USFXPower_CryoFreeze_Engineer : public USFXPower_CryoFreeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96892 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CryoFreeze_Engineer::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_AIHacking
// 0x000C (0x0158 - 0x014C)
class USFXPower_AIHacking : public USFXPower
{
public:
	TArray< float >                                    ShieldStrength;                                   		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97294 ];

		return pClassPointer;
	};

};

UClass* USFXPower_AIHacking::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_AIHacking_Engineer
// 0x0000 (0x0158 - 0x0158)
class USFXPower_AIHacking_Engineer : public USFXPower_AIHacking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96894 ];

		return pClassPointer;
	};

};

UClass* USFXPower_AIHacking_Engineer::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_AIHacking_Radius
// 0x0000 (0x0158 - 0x0158)
class USFXPower_AIHacking_Radius : public USFXPower_AIHacking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96895 ];

		return pClassPointer;
	};

};

UClass* USFXPower_AIHacking_Radius::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_AIHacking_Heavy
// 0x0000 (0x0158 - 0x0158)
class USFXPower_AIHacking_Heavy : public USFXPower_AIHacking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96896 ];

		return pClassPointer;
	};

};

UClass* USFXPower_AIHacking_Heavy::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CombatDrone_Tech
// 0x0008 (0x018C - 0x0184)
class USFXPower_CombatDrone_Tech : public USFXPower_CombatDrone
{
public:
	float                                              ExplosionRadius;                                  		// 0x0184 (0x0004) [0x0000000000000000]              
	float                                              ExplosionDamage;                                  		// 0x0188 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96932 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CombatDrone_Tech::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPawn_EngineerCombatDrone
// 0x0038 (0x08A4 - 0x086C)
class ASFXPawn_EngineerCombatDrone : public ASFXPawn
{
public:
	class ABioPawn*                                    Caster;                                           		// 0x086C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_Active;                                       		// 0x0870 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    PSC_Spawn;                                        		// 0x0874 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PS_DeathVFX;                                      		// 0x0878 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	unsigned long                                      bCustomColor : 1;                                 		// 0x087C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCustomColor2 : 1;                                		// 0x087C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     DroneColor;                                       		// 0x0880 (0x000C) [0x0000000000000000]              
	struct FVector                                     DroneColor2;                                      		// 0x088C (0x000C) [0x0000000000000000]              
	struct FScriptDelegate                             __OnDroneKilled__Delegate;                        		// 0x0898 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97327 ];

		return pClassPointer;
	};

	void PlayDeathVocalization ( class ABioPawn* Killer );
	void eventDestroyed ( );
	bool eventDied ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void SetDroneColor2 ( struct FVector NewColor );
	void SetDroneColor ( struct FVector NewColor );
	void PostBeginPlay ( );
	void OnDroneKilled ( );
};

UClass* ASFXPawn_EngineerCombatDrone::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPawn_EngineerTechDrone
// 0x0014 (0x08B8 - 0x08A4)
class ASFXPawn_EngineerTechDrone : public ASFXPawn_EngineerCombatDrone
{
public:
	TArray< unsigned char >                            AnimatedReactions;                                		// 0x08A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             DeathEffect;                                      		// 0x08B0 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UWwiseEvent*                                 ExplosionSound;                                   		// 0x08B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96940 ];

		return pClassPointer;
	};

	void SpawnDeathVFX ( );
	bool eventDied ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
};

UClass* ASFXPawn_EngineerTechDrone::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPawn_EngineerRocketDrone
// 0x0000 (0x08A4 - 0x08A4)
class ASFXPawn_EngineerRocketDrone : public ASFXPawn_EngineerCombatDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96965 ];

		return pClassPointer;
	};

};

UClass* ASFXPawn_EngineerRocketDrone::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPawn_EngineerCombatDrone_NPC
// 0x0000 (0x08A4 - 0x08A4)
class ASFXPawn_EngineerCombatDrone_NPC : public ASFXPawn_EngineerCombatDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96988 ];

		return pClassPointer;
	};

};

UClass* ASFXPawn_EngineerCombatDrone_NPC::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXGameEffect_OverheatWeapons
// 0x0014 (0x007C - 0x0068)
class USFXGameEffect_OverheatWeapons : public USFXGameEffect
{
public:
	class ABioPawn*                                    Pawn;                                             		// 0x0068 (0x0004) [0x0000000000000000]              
	class ASFXWeapon*                                  Weapon;                                           		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              OverheatFrequency;                                		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              OverheatTimer;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    OverheatPSCO;                                     		// 0x0078 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97079 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OverheatWeapon ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

UClass* USFXGameEffect_OverheatWeapons::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXGameEffect_CloakVFX
// 0x0044 (0x00AC - 0x0068)
class USFXGameEffect_CloakVFX : public USFXGameEffect
{
public:
	class UMaterialInstance*                           EyeInvisibleMaterial;                             		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           InvisibleMaterial;                                		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             StartCrustVFX;                                    		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             EndCrustVFX;                                      		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ABioVisualEffect*                            StartCrust;                                       		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TransitionPosition;                               		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              ParameterTransitionTime;                          		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              CrustEffectTime;                                  		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              EndTransitionDeltaTime;                           		// 0x0088 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMaterialsSwapped : 1;                            		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bScaleDownParameter : 1;                          		// 0x008C (0x0004) [0x0000000000000000] [0x00000002] 
	class UWwiseEvent*                                 CloakActivatedSound;                              		// 0x0090 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 CloakDeactivatedSound;                            		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                MaleEyesMaterialID;                               		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                FemaleEyesMaterialID;                             		// 0x009C (0x0004) [0x0000000000000000]              
	TArray< struct FMaterialMapStruct >                MaterialMap;                                      		// 0x00A0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97170 ];

		return pClassPointer;
	};

	void EndStealthVFX ( );
	void RestoreMeshMaterials ( class USkeletalMeshComponent* Mesh );
	void TransitionOff ( );
	void DelayedTransitionOff ( );
	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void StartTransition ( );
	void SwapMeshMaterials ( class USkeletalMeshComponent* oSkeletalMesh );
	void SwapInvisibleMaterials ( );
	void StoreMeshMaterials ( class USkeletalMeshComponent* oSkeletalMesh );
	void StoreStartingMaterials ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_CloakVFX::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXDamageType_CryoFreeze
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_CryoFreeze : public USFXDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97172 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_CryoFreeze::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXDamageType_CombatDroneShock
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_CombatDroneShock : public USFXDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97174 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_CombatDroneShock::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXDamageType_CombatDroneAttack_NPC
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_CombatDroneAttack_NPC : public USFXDamageType_Default
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97176 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_CombatDroneAttack_NPC::pClassPointer = NULL;

// Class SFXGameContent_Powers.BioReactionPowerScript
// 0x0018 (0x00D8 - 0x00C0)
class UBioReactionPowerScript : public UBioPowerScriptDesign
{
public:
	unsigned char                                      Rank1Reactions[ 0x6 ];                            		// 0x00C0 (0x0006) [0x0000000000000000]              
	unsigned char                                      Rank2Reactions[ 0x6 ];                            		// 0x00C6 (0x0006) [0x0000000000000000]              
	unsigned char                                      Rank3Reactions[ 0x6 ];                            		// 0x00CC (0x0006) [0x0000000000000000]              
	unsigned char                                      Rank4Reactions[ 0x6 ];                            		// 0x00D2 (0x0006) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97246 ];

		return pClassPointer;
	};

	unsigned char GetIncreasedReaction ( class AActor* oTarget, unsigned char Reaction );
	unsigned char GetCombatReaction ( int PowerRank, class AActor* oTarget, unsigned long ReactionStacks );
};

UClass* UBioReactionPowerScript::pClassPointer = NULL;

// Class SFXGameContent_Powers.BioPlayerMeleeScript
// 0x00AC (0x0184 - 0x00D8)
class UBioPlayerMeleeScript : public UBioReactionPowerScript
{
public:
	float                                              RecentlyMeleedTime;                               		// 0x00D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MeleeCooldown;                                    		// 0x00DC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     m_vCasterLocation;                                		// 0x00E0 (0x000C) [0x0000000000000000]              
	struct FScreenShakeStruct                          Shake;                                            		// 0x00EC (0x0070) [0x0000000000000000]              
	struct FInterpCurveFloat                           SlowDown;                                         		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UForceFeedbackWaveform*                      PlayerPerformsMeleeWaveForm;                      		// 0x016C (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x0170 (0x0004) [0x0000000000000000]              
	class USFXPower_PlayerMelee*                       m_oPower;                                         		// 0x0174 (0x0004) [0x0000000000000000]              
	struct FVector                                     LungeDirection;                                   		// 0x0178 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97229 ];

		return pClassPointer;
	};

	bool eventEndPhase ( unsigned char ePhase, class AActor* oCaster );
	void RemoveMeleeEffects ( class ABioPawn* oPawn );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	void Tick ( float DeltaTime );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* UBioPlayerMeleeScript::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_HenchmenIgnorePawn : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97275 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_HenchmenIgnorePawn::pClassPointer = NULL;

// Class SFXGameContent_Powers.BioHackingScript
// 0x0018 (0x00D8 - 0x00C0)
class UBioHackingScript : public UBioPowerScriptDesign
{
public:
	class USFXPower_AIHacking*                         m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_VFXTemplate;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            m_oCurrentHackedTargets;                          		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWwiseEvent*                                 ImpactSound;                                      		// 0x00D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97300 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	bool IsHacked ( class ABioPawn* oPawn );
	bool RemoveWeakerHack ( class ABioPawn* oPawn, float fNewDuration );
	void UnHackPreviousTargets ( class AActor* oCaster );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* UBioHackingScript::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXGameEffect_IgnorePawn
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_IgnorePawn : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97311 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_IgnorePawn::pClassPointer = NULL;

// Class SFXGameContent_Powers.BioCombatDroneScript
// 0x0018 (0x00D8 - 0x00C0)
class UBioCombatDroneScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDroneOffset;                                   		// 0x00C0 (0x0004) [0x0000000000000000]              
	class AActor*                                      DroneActor;                                       		// 0x00C4 (0x0004) [0x0000000000000000]              
	class USFXPower_CombatDrone*                       m_oPower;                                         		// 0x00C8 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00CC (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGameContent_Powers.BioCombatDroneScript.NotRecommended_DroneDeployed
	float                                              PlayerRightYawOffset;                             		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              PlayerLeftYawOffset;                              		// 0x00D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97376 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	void OnDroneKilled ( );
	void DespawnDrone ( );
	void OnOwnerDied ( );
	void OnPowerRankIncreased ( );
	class ABioPawn* SpawnDrone ( class ABioPawn* oCaster, class UClass* DroneClass, struct FVector Location, struct FRotator Rotation, float HealthMultiplier, float Lifetime, unsigned long bCustomColor, struct FVector CustomColor, unsigned long bCustomColor2, struct FVector CustomColor2, class AActor* DroneTarget );
	struct FVector GetSpawnLocation ( );
	struct FVector GetBackLocation ( class AActor* Target );
	struct FVector GetFrontLocation ( class AActor* Target, float YawOffset );
	bool IsSafeSpawnLocation ( struct FVector* SpawnLocation );
	bool IsDroneAlive ( );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool eventCanStartPower ( class AActor* oCaster );
};

UClass* UBioCombatDroneScript::pClassPointer = NULL;

// Class SFXGameContent_Powers.BioWeaponPowerScript
// 0x0020 (0x00E0 - 0x00C0)
class UBioWeaponPowerScript : public UBioPowerScriptDesign
{
public:
	unsigned long                                      bModifyTracer : 1;                                		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModifyImpactVFX : 1;                             		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bModifyMuzzle : 1;                                		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000004] 
	class UStaticMesh*                                 oTracer;                                          		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             oImpactVFX;                                       		// 0x00C8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleVFX;                                       		// 0x00CC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleLoopVFX;                                   		// 0x00D0 (0x0004) [0x0000000000000000]              
	class UClass*                                      WeaponPowerEffectClass;                           		// 0x00D4 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00D8 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGameContent_Powers.BioWeaponPowerScript.NotRecommended_HeavyWeaponEquipped
	class AActor*                                      m_oCaster;                                        		// 0x00DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103978 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	bool SetWeaponPower ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon, unsigned long bOverrideCurrentPower );
	void ReloadAmmoPower ( class ABioPawn* Target, class ASFXWeapon* Weapon );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool ApplyToSquadMembers ( );
	float GetDuration ( );
	float GetElapsedTime ( );
	bool eventCanStartPower ( class AActor* oCaster );
};

UClass* UBioWeaponPowerScript::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXGameEffect_AmmoPower
// 0x0020 (0x0088 - 0x0068)
class USFXGameEffect_AmmoPower : public USFXGameEffect
{
public:
	class UParticleSystem*                             HologramTemplate;                                 		// 0x0068 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             IconTemplate;                                     		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              BulletsPerSecond;                                 		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWeaponUnequipped : 1;                            		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	class ASFXWeapon*                                  OwnerWeapon;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x007C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x0080 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 WeaponFireSound;                                  		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103982 ];

		return pClassPointer;
	};

	void RemoveWeaponHologram ( );
	void EnableWeaponHologram ( );
	void OnWeaponUnequip ( class ASFXWeapon* Weapon );
	void OnWeaponEquip ( class ASFXWeapon* Weapon );
	void OnWeaponReload ( class ASFXWeapon* Weapon );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_AmmoPower::pClassPointer = NULL;

// Class SFXGameContent_Powers.BioSniperCritScript
// 0x0004 (0x00E4 - 0x00E0)
class UBioSniperCritScript : public UBioWeaponPowerScript
{
public:
	class USFXPower_ArmorPiercingAmmo*                 m_oPower;                                         		// 0x00E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104033 ];

		return pClassPointer;
	};

	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool ApplyToSquadMembers ( );
	void eventInitializePowerScript ( );
};

UClass* UBioSniperCritScript::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_ArmorPiercingAmmo
// 0x0010 (0x015C - 0x014C)
class USFXPower_ArmorPiercingAmmo : public USFXPower
{
public:
	TArray< float >                                    VFXSpawnChance;                                   		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSquadPower : 1;                                  		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104035 ];

		return pClassPointer;
	};

};

UClass* USFXPower_ArmorPiercingAmmo::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXGameEffect_ArmorPiercingAmmo
// 0x0010 (0x0098 - 0x0088)
class USFXGameEffect_ArmorPiercingAmmo : public USFXGameEffect_AmmoPower
{
public:
	float                                              Damage;                                           		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              VFXSpawnChance;                                   		// 0x008C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PS_OrganicImpactEffect;                           		// 0x0090 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_NonOrganicImpactEffect;                        		// 0x0094 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104050 ];

		return pClassPointer;
	};

	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
};

UClass* USFXGameEffect_ArmorPiercingAmmo::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_ArmorPiercingAmmo_Heavy
// 0x0000 (0x015C - 0x015C)
class USFXPower_ArmorPiercingAmmo_Heavy : public USFXPower_ArmorPiercingAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104106 ];

		return pClassPointer;
	};

};

UClass* USFXPower_ArmorPiercingAmmo_Heavy::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_ArmorPiercingAmmo_Squad
// 0x0000 (0x015C - 0x015C)
class USFXPower_ArmorPiercingAmmo_Squad : public USFXPower_ArmorPiercingAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104107 ];

		return pClassPointer;
	};

};

UClass* USFXPower_ArmorPiercingAmmo_Squad::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_LoyaltyRequirement
// 0x0000 (0x014C - 0x014C)
class USFXPower_LoyaltyRequirement : public USFXPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104108 ];

		return pClassPointer;
	};

};

UClass* USFXPower_LoyaltyRequirement::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_ArmorPiercingAmmo_Heavy_Player
// 0x0000 (0x015C - 0x015C)
class USFXPower_ArmorPiercingAmmo_Heavy_Player : public USFXPower_ArmorPiercingAmmo_Heavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104110 ];

		return pClassPointer;
	};

};

UClass* USFXPower_ArmorPiercingAmmo_Heavy_Player::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_ArmorPiercingAmmo_Player
// 0x0000 (0x015C - 0x015C)
class USFXPower_ArmorPiercingAmmo_Player : public USFXPower_ArmorPiercingAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104112 ];

		return pClassPointer;
	};

};

UClass* USFXPower_ArmorPiercingAmmo_Player::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_ArmorPiercingAmmo_Squad_Player
// 0x0000 (0x015C - 0x015C)
class USFXPower_ArmorPiercingAmmo_Squad_Player : public USFXPower_ArmorPiercingAmmo_Squad
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104114 ];

		return pClassPointer;
	};

};

UClass* USFXPower_ArmorPiercingAmmo_Squad_Player::pClassPointer = NULL;

// Class SFXGameContent_Powers.BioNeuralShockScript
// 0x0014 (0x00D4 - 0x00C0)
class UBioNeuralShockScript : public UBioPowerScriptDesign
{
public:
	class USFXPower_NeuralShock*                       m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            m_oCurrentAffectedTargets;                        		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x00D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126328 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	void UnaffectPreviousTargets ( class AActor* oCaster );
	void DisablePowers ( class AActor* oImpacted );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* UBioNeuralShockScript::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_NeuralShock
// 0x0000 (0x014C - 0x014C)
class USFXPower_NeuralShock : public USFXPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126333 ];

		return pClassPointer;
	};

	bool DisablePowers ( );
	float GetAccuracyPenalty ( );
};

UClass* USFXPower_NeuralShock::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXGameEffect_DelayedNeuralShock
// 0x000C (0x0080 - 0x0074)
class USFXGameEffect_DelayedNeuralShock : public USFXGameEffect_DelayedCustomAction
{
public:
	float                                              RagdollDuration;                                  		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FName                                       PowerName;                                        		// 0x0078 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126342 ];

		return pClassPointer;
	};

	void OnRemoved ( );
};

UClass* USFXGameEffect_DelayedNeuralShock::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CryoFreezeInstant
// 0x0000 (0x0158 - 0x0158)
class USFXPower_CryoFreezeInstant : public USFXPower_CryoFreeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126378 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CryoFreezeInstant::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CryoFreezeInstant_Evolved1
// 0x0000 (0x0158 - 0x0158)
class USFXPower_CryoFreezeInstant_Evolved1 : public USFXPower_CryoFreeze_Evolved1
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126381 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CryoFreezeInstant_Evolved1::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CryoFreezeInstant_Evolved2
// 0x0000 (0x0158 - 0x0158)
class USFXPower_CryoFreezeInstant_Evolved2 : public USFXPower_CryoFreeze_Evolved2
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126382 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CryoFreezeInstant_Evolved2::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_CryoFreeze_Mordin
// 0x0000 (0x0158 - 0x0158)
class USFXPower_CryoFreeze_Mordin : public USFXPower_CryoFreezeInstant
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126383 ];

		return pClassPointer;
	};

};

UClass* USFXPower_CryoFreeze_Mordin::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_IncinerateInstant
// 0x0000 (0x0178 - 0x0178)
class USFXPower_IncinerateInstant : public USFXPower_Incinerate
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126386 ];

		return pClassPointer;
	};

};

UClass* USFXPower_IncinerateInstant::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Incinerate_Mordin
// 0x0000 (0x0178 - 0x0178)
class USFXPower_Incinerate_Mordin : public USFXPower_IncinerateInstant
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126385 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Incinerate_Mordin::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_IncinerateInstant_Heavy
// 0x0000 (0x0178 - 0x0178)
class USFXPower_IncinerateInstant_Heavy : public USFXPower_Incinerate_Heavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126388 ];

		return pClassPointer;
	};

};

UClass* USFXPower_IncinerateInstant_Heavy::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Incinerate_Heavy_Hench
// 0x0000 (0x0178 - 0x0178)
class USFXPower_Incinerate_Heavy_Hench : public USFXPower_IncinerateInstant_Heavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126387 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Incinerate_Heavy_Hench::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_IncinerateInstant_Radius
// 0x0000 (0x0178 - 0x0178)
class USFXPower_IncinerateInstant_Radius : public USFXPower_Incinerate_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126390 ];

		return pClassPointer;
	};

};

UClass* USFXPower_IncinerateInstant_Radius::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Incinerate_Radius_Hench
// 0x0000 (0x0178 - 0x0178)
class USFXPower_Incinerate_Radius_Hench : public USFXPower_IncinerateInstant_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126389 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Incinerate_Radius_Hench::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_HenchmanPassive
// 0x0018 (0x0170 - 0x0158)
class USFXPower_HenchmanPassive : public USFXPower_PassivePower
{
public:
	TArray< float >                                    HealthBonus;                                      		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    WeaponDamageBonus;                                		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126393 ];

		return pClassPointer;
	};

};

UClass* USFXPower_HenchmanPassive::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_MordinPassive
// 0x000C (0x017C - 0x0170)
class USFXPower_MordinPassive : public USFXPower_HenchmanPassive
{
public:
	TArray< float >                                    ShieldBonus;                                      		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126406 ];

		return pClassPointer;
	};

};

UClass* USFXPower_MordinPassive::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_HenchmanPassive
// 0x0000 (0x00C0 - 0x00C0)
class USFXPowerScript_HenchmanPassive : public USFXPowerScript_PassivePower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126411 ];

		return pClassPointer;
	};

	void ApplyGlobalBonus ( );
};

UClass* USFXPowerScript_HenchmanPassive::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_MordinPassive
// 0x0000 (0x00C0 - 0x00C0)
class USFXPowerScript_MordinPassive : public USFXPowerScript_HenchmanPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126410 ];

		return pClassPointer;
	};

	void ApplyGlobalBonus ( );
};

UClass* USFXPowerScript_MordinPassive::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_MordinPassive_Evolved1
// 0x0000 (0x017C - 0x017C)
class USFXPower_MordinPassive_Evolved1 : public USFXPower_MordinPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126412 ];

		return pClassPointer;
	};

};

UClass* USFXPower_MordinPassive_Evolved1::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_MordinPassive_Evolved2
// 0x0000 (0x017C - 0x017C)
class USFXPower_MordinPassive_Evolved2 : public USFXPower_MordinPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126413 ];

		return pClassPointer;
	};

};

UClass* USFXPower_MordinPassive_Evolved2::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_NeuralShock_Heavy
// 0x0000 (0x014C - 0x014C)
class USFXPower_NeuralShock_Heavy : public USFXPower_NeuralShock
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126424 ];

		return pClassPointer;
	};

};

UClass* USFXPower_NeuralShock_Heavy::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_NeuralShock_Radius
// 0x0000 (0x014C - 0x014C)
class USFXPower_NeuralShock_Radius : public USFXPower_NeuralShock
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126425 ];

		return pClassPointer;
	};

};

UClass* USFXPower_NeuralShock_Radius::pClassPointer = NULL;

// Class SFXGameContent_Powers.BioCarnageScript
// 0x0004 (0x00E4 - 0x00E0)
class UBioCarnageScript : public UBioWeaponPowerScript
{
public:
	class USFXPower_IncendiaryAmmo*                    m_oPower;                                         		// 0x00E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129884 ];

		return pClassPointer;
	};

	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool ApplyToSquadMembers ( );
	void eventInitializePowerScript ( );
};

UClass* UBioCarnageScript::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo
// 0x0024 (0x0170 - 0x014C)
class USFXPower_IncendiaryAmmo : public USFXPower
{
public:
	float                                              AreaExplosionRadius;                              		// 0x014C (0x0004) [0x0000000000000000]              
	float                                              AreaExplosionChance;                              		// 0x0150 (0x0004) [0x0000000000000000]              
	float                                              AreaExplosionDamage;                              		// 0x0154 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSquadPower : 1;                                  		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSpawnImpactFlames : 1;                           		// 0x0158 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< float >                                    ReactionChance;                                   		// 0x015C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              RobotDamageMultiplier;                            		// 0x0168 (0x0004) [0x0000000000000000]              
	float                                              fFlameDuration;                                   		// 0x016C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129886 ];

		return pClassPointer;
	};

};

UClass* USFXPower_IncendiaryAmmo::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo
// 0x002C (0x00B4 - 0x0088)
class USFXGameEffect_IncendiaryAmmo : public USFXGameEffect_AmmoPower
{
public:
	float                                              AreaExplosionChance;                              		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              AreaExplosionDamage;                              		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              AreaExplosionRadius;                              		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              RobotDamageMultiplier;                            		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              AnimatedReactionChance;                           		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSpawnImpactFlames : 1;                           		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DamageDuration;                                   		// 0x00A4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PS_ImpactEffect;                                  		// 0x00A8 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_FlameEffect;                                   		// 0x00AC (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_FireSpreadEffect;                              		// 0x00B0 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129906 ];

		return pClassPointer;
	};

	void CauseAnimatedReaction ( class AActor* oHitActor, float fDelay );
	void AddGameEffects ( class AActor* oTarget, float fDuration, float fDamagePerSecond, class ABioPawn* BPInstigator );
	void DoEvolvedAoEImpact ( struct FImpactInfo Impact, class ABioPawn* WeaponOwner, class ASFXWeapon* Weapon );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
};

UClass* USFXGameEffect_IncendiaryAmmo::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_DefensiveShieldBase
// 0x001C (0x0168 - 0x014C)
class USFXPower_DefensiveShieldBase : public USFXPower
{
public:
	class UBioVFXTemplate*                             CrustEffect;                                      		// 0x014C (0x0004) [0x0000000000000000]              
	TArray< float >                                    ShieldValue;                                      		// 0x0150 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ShieldClass;                                      		// 0x015C (0x0004) [0x0000000000000000]              
	float                                              AIShieldDestroyedDelay;                           		// 0x0160 (0x0004) [0x0000000000000000]              
	float                                              AIShotAtDelay;                                    		// 0x0164 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129971 ];

		return pClassPointer;
	};

	float GetShieldValue ( );
};

UClass* USFXPower_DefensiveShieldBase::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase
// 0x0008 (0x00C8 - 0x00C0)
class USFXPowerScript_DefensiveShieldBase : public UBioPowerScriptDesign
{
public:
	class USFXPower_DefensiveShieldBase*               m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	class ABioVisualEffect*                            ShieldVFX;                                        		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129981 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	void OnShieldDestroyed ( class AActor* ShieldActor, class ASFXShield_Base* Shield );
	void eventInitializePowerScript ( );
};

UClass* USFXPowerScript_DefensiveShieldBase::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Barrier
// 0x0000 (0x0168 - 0x0168)
class USFXPower_Barrier : public USFXPower_DefensiveShieldBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129982 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Barrier::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_Barrier
// 0x0000 (0x00C8 - 0x00C8)
class USFXPowerScript_Barrier : public USFXPowerScript_DefensiveShieldBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129986 ];

		return pClassPointer;
	};

};

UClass* USFXPowerScript_Barrier::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Barrier_Heavy
// 0x0000 (0x0168 - 0x0168)
class USFXPower_Barrier_Heavy : public USFXPower_Barrier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129987 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Barrier_Heavy::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Barrier_Damage
// 0x0000 (0x0168 - 0x0168)
class USFXPower_Barrier_Damage : public USFXPower_Barrier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129988 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Barrier_Damage::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Radius
// 0x0000 (0x0170 - 0x0170)
class USFXPower_IncendiaryAmmo_Radius : public USFXPower_IncendiaryAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129993 ];

		return pClassPointer;
	};

};

UClass* USFXPower_IncendiaryAmmo_Radius::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Squad
// 0x0000 (0x0170 - 0x0170)
class USFXPower_IncendiaryAmmo_Squad : public USFXPower_IncendiaryAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129994 ];

		return pClassPointer;
	};

};

UClass* USFXPower_IncendiaryAmmo_Squad::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Jacob
// 0x0000 (0x0170 - 0x0170)
class USFXPower_IncendiaryAmmo_Jacob : public USFXPower_IncendiaryAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129995 ];

		return pClassPointer;
	};

};

UClass* USFXPower_IncendiaryAmmo_Jacob::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Radius_Hench
// 0x0000 (0x0170 - 0x0170)
class USFXPower_IncendiaryAmmo_Radius_Hench : public USFXPower_IncendiaryAmmo_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129997 ];

		return pClassPointer;
	};

};

UClass* USFXPower_IncendiaryAmmo_Radius_Hench::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Squad_Hench
// 0x0000 (0x0170 - 0x0170)
class USFXPower_IncendiaryAmmo_Squad_Hench : public USFXPower_IncendiaryAmmo_Squad
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129998 ];

		return pClassPointer;
	};

};

UClass* USFXPower_IncendiaryAmmo_Squad_Hench::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_JacobPassive
// 0x0000 (0x0170 - 0x0170)
class USFXPower_JacobPassive : public USFXPower_HenchmanPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130003 ];

		return pClassPointer;
	};

};

UClass* USFXPower_JacobPassive::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_JacobPassive
// 0x0000 (0x00C0 - 0x00C0)
class USFXPowerScript_JacobPassive : public USFXPowerScript_HenchmanPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130005 ];

		return pClassPointer;
	};

};

UClass* USFXPowerScript_JacobPassive::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_JacobPassive_Evolved1
// 0x0000 (0x0170 - 0x0170)
class USFXPower_JacobPassive_Evolved1 : public USFXPower_JacobPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130006 ];

		return pClassPointer;
	};

};

UClass* USFXPower_JacobPassive_Evolved1::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_JacobPassive_Evolved2
// 0x0000 (0x0170 - 0x0170)
class USFXPower_JacobPassive_Evolved2 : public USFXPower_JacobPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130007 ];

		return pClassPointer;
	};

};

UClass* USFXPower_JacobPassive_Evolved2::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Pull
// 0x0028 (0x0174 - 0x014C)
class USFXPower_Pull : public USFXPower
{
public:
	unsigned long                                      bSingleTarget : 1;                                		// 0x014C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PhysicsImpactDamageMult;                          		// 0x0150 (0x0004) [0x0000000000000000]              
	TArray< float >                                    GravityRampUpTime;                                		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            AnimatedReactions;                                		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MinimumVelocity;                                  		// 0x016C (0x0004) [0x0000000000000000]              
	float                                              MinimumVelocityForceMult;                         		// 0x0170 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130010 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Pull::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPowerScript_PullProjectile
// 0x0024 (0x00E4 - 0x00C0)
class USFXPowerScript_PullProjectile : public UBioPowerScriptDesign
{
public:
	class USFXPower_Pull*                              m_oPower;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x00C4 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            m_oCurrentPulledTargets;                          		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDroppedTargets : 1;                              		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
	class UWwiseEvent*                                 ResistanceImpactSound;                            		// 0x00D8 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x00DC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PS_AoE;                                           		// 0x00E0 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130024 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, struct FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void DropCurrentTargets ( );
	void EffectPull ( class ABioPawn* oCasterPawn, class AActor* oImpacted, float fDuration, struct FName nmCategory, struct FVector vForce, float fGravityRampUpTime, float fMinVelocity, float fMinForceMult, struct FName nmPowerName );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	void OnProjectileExploded ( class AActor* oCaster, struct FVector HitLocation, struct FVector HitNormal, struct FVector Velocity );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

UClass* USFXPowerScript_PullProjectile::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Pull_Heavy
// 0x0000 (0x0174 - 0x0174)
class USFXPower_Pull_Heavy : public USFXPower_Pull
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130025 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Pull_Heavy::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Pull_Radius
// 0x0000 (0x0174 - 0x0174)
class USFXPower_Pull_Radius : public USFXPower_Pull
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130026 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Pull_Radius::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Pull_Heavy_Hench
// 0x0000 (0x0174 - 0x0174)
class USFXPower_Pull_Heavy_Hench : public USFXPower_Pull_Heavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130028 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Pull_Heavy_Hench::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Pull_Hench
// 0x0000 (0x0174 - 0x0174)
class USFXPower_Pull_Hench : public USFXPower_Pull
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130030 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Pull_Hench::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Pull_Radius_Hench
// 0x0000 (0x0174 - 0x0174)
class USFXPower_Pull_Radius_Hench : public USFXPower_Pull_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130032 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Pull_Radius_Hench::pClassPointer = NULL;

// Class SFXGameContent_Powers.SFXPower_Pull_Jacob
// 0x0000 (0x0174 - 0x0174)
class USFXPower_Pull_Jacob : public USFXPower_Pull_Hench
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130033 ];

		return pClassPointer;
	};

};

UClass* USFXPower_Pull_Jacob::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif