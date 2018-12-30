/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGamePawns_classes.h
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

// Class SFXGamePawns.SFXPawn_EDI
// 0x0000 (0x086C - 0x086C)
class ASFXPawn_EDI : public ASFXPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90563 ];

		return pClassPointer;
	};

};

UClass* ASFXPawn_EDI::pClassPointer = NULL;

// Class SFXGamePawns.SFXCharacterClass_Engineer
// 0x0000 (0x0075 - 0x0075)
class USFXCharacterClass_Engineer : public USFXCharacterClass
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 95915 ];

		return pClassPointer;
	};

};

UClass* USFXCharacterClass_Engineer::pClassPointer = NULL;

// Class SFXGamePawns.SFXPawn_Mordin
// 0x0000 (0x08A0 - 0x08A0)
class ASFXPawn_Mordin : public ASFXPawn_Henchman
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126437 ];

		return pClassPointer;
	};

};

UClass* ASFXPawn_Mordin::pClassPointer = NULL;

// Class SFXGamePawns.SFXPawn_Jacob
// 0x0000 (0x08A0 - 0x08A0)
class ASFXPawn_Jacob : public ASFXPawn_Henchman
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 130135 ];

		return pClassPointer;
	};

};

UClass* ASFXPawn_Jacob::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif