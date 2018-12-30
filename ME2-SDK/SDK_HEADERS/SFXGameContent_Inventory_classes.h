/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_Inventory_classes.h
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

// Class SFXGameContent_Inventory.SFXDamageType_SniperRifle
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_SniperRifle : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96850 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_SniperRifle::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXWeapon_SniperRifle
// 0x0008 (0x0784 - 0x077C)
class ASFXWeapon_SniperRifle : public ASFXWeapon_SniperRifle_Base
{
public:
	class UWwiseEvent*                                 ActivateSniperZoomWwiseEvent;                     		// 0x077C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 DeActivateSniperZoomWwiseEvent;                   		// 0x0780 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96854 ];

		return pClassPointer;
	};

	void SetZoomed ( unsigned long bState );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

UClass* ASFXWeapon_SniperRifle::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXDamageType_HeavyPistol
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_HeavyPistol : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97883 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_HeavyPistol::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXWeapon_HeavyPistol
// 0x0000 (0x077C - 0x077C)
class ASFXWeapon_HeavyPistol : public ASFXWeapon_HeavyPistol_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97887 ];

		return pClassPointer;
	};

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

UClass* ASFXWeapon_HeavyPistol::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXDamageType_HeavyWeapon
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_HeavyWeapon : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98156 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_HeavyWeapon::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXDamageType_Grenade
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_Grenade : public USFXDamageType_HeavyWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98158 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_Grenade::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXHeavyWeapon_GrenadeLauncher
// 0x0000 (0x077C - 0x077C)
class ASFXHeavyWeapon_GrenadeLauncher : public ASFXHeavyWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98160 ];

		return pClassPointer;
	};

};

UClass* ASFXHeavyWeapon_GrenadeLauncher::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXProjectile_Grenade
// 0x0010 (0x02C0 - 0x02B0)
class ASFXProjectile_Grenade : public ASFXProjectile_Explosive
{
public:
	class ABioPawn*                                    WeaponOwner;                                      		// 0x02B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ASFXHeavyWeapon*                             Weapon;                                           		// 0x02B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      AcquiredTarget;                                   		// 0x02B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MaxAngleChange;                                   		// 0x02BC (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98171 ];

		return pClassPointer;
	};

	void Recycle ( );
	void DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage );
	void Tick ( float DeltaTime );
	struct FVector GetAimLocation ( );
	void Init ( struct FVector Direction );
};

UClass* ASFXProjectile_Grenade::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXDamageType_AntiMatRifle
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_AntiMatRifle : public USFXDamageType_SniperRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 100979 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_AntiMatRifle::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXWeapon_AntiMatRifle
// 0x0000 (0x0784 - 0x0784)
class ASFXWeapon_AntiMatRifle : public ASFXWeapon_SniperRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 100981 ];

		return pClassPointer;
	};

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
	void InitDefaultDecalProperties ( );
};

UClass* ASFXWeapon_AntiMatRifle::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXDamageType_AutoPistol
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_AutoPistol : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101717 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_AutoPistol::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXDamageType_SMG
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_SMG : public USFXDamageType_AutoPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101719 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_SMG::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXWeapon_AutoPistol
// 0x0000 (0x077C - 0x077C)
class ASFXWeapon_AutoPistol : public ASFXWeapon_AutoPistol_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101721 ];

		return pClassPointer;
	};

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

UClass* ASFXWeapon_AutoPistol::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXWeapon_SMG
// 0x0000 (0x077C - 0x077C)
class ASFXWeapon_SMG : public ASFXWeapon_AutoPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101756 ];

		return pClassPointer;
	};

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

UClass* ASFXWeapon_SMG::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXDamageType_HandCannon
// 0x0000 (0x00D0 - 0x00D0)
class USFXDamageType_HandCannon : public USFXDamageType_HeavyPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 102150 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_HandCannon::pClassPointer = NULL;

// Class SFXGameContent_Inventory.SFXWeapon_HandCannon
// 0x0000 (0x077C - 0x077C)
class ASFXWeapon_HandCannon : public ASFXWeapon_HeavyPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 102152 ];

		return pClassPointer;
	};

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

UClass* ASFXWeapon_HandCannon::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif