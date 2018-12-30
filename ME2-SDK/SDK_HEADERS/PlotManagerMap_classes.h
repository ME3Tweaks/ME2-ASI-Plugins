/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlotManagerMap_classes.h
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

// Enum PlotManagerMap.BioPlotEnums.EBioRegionAutoSet
/*enum EBioRegionAutoSet
{
	Region_Unset                                       = 0,
	Region_MAX                                         = 1
};*/

// Enum PlotManagerMap.BioPlotEnums.EBioPlotAutoSet
/*enum EBioPlotAutoSet
{
	Plot_Unset                                         = 0,
	Plot_MAX                                           = 1
};*/

// Enum PlotManagerMap.BioPlotEnums.EBioAutoSet
/*enum EBioAutoSet
{
	Unset                                              = 0,
	EBioAutoSet_MAX                                    = 1
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class PlotManagerMap.BioPlotEnums
// 0x0000 (0x003C - 0x003C)
class UBioPlotEnums : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 27814 ];

		return pClassPointer;
	};

};

UClass* UBioPlotEnums::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif