/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_Bonuses_classes.h
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

// Class SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyDamageBonus
// 0x0004 (0x007C - 0x0078)
class USFXGameEffect_AchievementPartyDamageBonus : public USFXGameEffect_DamageBonus_Powers
{
public:
	class USFXGameEffect*                              PassiveWeaponDmg;                                 		// 0x0078 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77790 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_AchievementPartyDamageBonus::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyHealthBonus
// 0x0000 (0x006C - 0x006C)
class USFXGameEffect_AchievementPartyHealthBonus : public USFXGameEffect_PassiveHealthBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77797 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_AchievementPartyHealthBonus::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77799 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Garrus
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower_Garrus : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77801 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower_Garrus::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Grunt
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower_Grunt : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77803 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower_Grunt::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Jack
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower_Jack : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77805 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower_Jack::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Jacob
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower_Jacob : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77807 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower_Jacob::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Legion
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower_Legion : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77809 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower_Legion::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Miranda
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower_Miranda : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77811 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower_Miranda::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Mordin
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower_Mordin : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77813 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower_Mordin::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Samara
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower_Samara : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77815 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower_Samara::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Tali
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower_Tali : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77817 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower_Tali::pClassPointer = NULL;

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Thane
// 0x0000 (0x0068 - 0x0068)
class USFXGameEffect_UnlockPower_Thane : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77819 ];

		return pClassPointer;
	};

};

UClass* USFXGameEffect_UnlockPower_Thane::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif