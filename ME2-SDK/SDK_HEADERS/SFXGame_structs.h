/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGame_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct SFXGame.BioBaseAppearance.MorphFeatureModelType
// 0x0010
struct FMorphFeatureModelType
{
	struct FName                                       sFeatureName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class USkeletalMeshComponent*                      MinModel;                                         		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      MaxModel;                                         		// 0x000C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct SFXGame.BioBaseAppearance.MorphFeatureType
// 0x0008
struct FMorphFeatureType
{
	struct FName                                       sFeatureName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomPatternValue
// 0x004C
struct FPlayerCustomPatternValue
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioDefine.PlayerCustomPatternValue.PatternName
	struct FName                                       Stripe1ParameterName;                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe1ParameterValue;                            		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe2ParameterName;                             		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe2ParameterValue;                            		// 0x0024 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe3ParameterName;                             		// 0x0034 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe3ParameterValue;                            		// 0x003C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomPatternColorValue
// 0x004C
struct FPlayerCustomPatternColorValue
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioDefine.PlayerCustomPatternColorValue.ColorName
	struct FName                                       Stripe1ColorName;                                 		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe1ColorValue;                                		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe2ColorName;                                 		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe2ColorValue;                                		// 0x0024 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe3ColorName;                                 		// 0x0034 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe3ColorValue;                                		// 0x003C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomSpecValue
// 0x003C
struct FPlayerCustomSpecValue
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioDefine.PlayerCustomSpecValue.SpecName
	struct FScalarParameterValue                       Spec;                                             		// 0x0004 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FScalarParameterValue                       SpecPwr;                                          		// 0x0020 (0x001C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor1Value
// 0x0034
struct FPlayerCustomColor1Value
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioDefine.PlayerCustomColor1Value.ColorName
	struct FName                                       ParameterName;                                    		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParameterValue;                                   		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhongParameterName;                               		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                PhongParameterValue;                              		// 0x0024 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor2Value
// 0x001C
struct FPlayerCustomColor2Value
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioDefine.PlayerCustomColor2Value.ColorName
	struct FName                                       ParameterName;                                    		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParameterValue;                                   		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor3Value
// 0x001C
struct FPlayerCustomColor3Value
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioDefine.PlayerCustomColor3Value.ColorName
	struct FName                                       ParameterName;                                    		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParameterValue;                                   		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerMeshInfo
// 0x0064
struct FPlayerMeshInfo
{
	struct FString                                     Male;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaleVisor;                                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaleFaceplate;                                    		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaleMaterialOverride;                             		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Female;                                           		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleVisor;                                      		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleFaceplate;                                  		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleMaterialOverride;                           		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bHasBreather : 1;                                 		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHideHead : 1;                                    		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bHideHair : 1;                                    		// 0x0060 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerSpecInfo
// 0x0038
struct FPlayerSpecInfo
{
	struct FScalarParameterValue                       SpecParam;                                        		// 0x0000 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FScalarParameterValue                       SpecPwrParam;                                     		// 0x001C (0x001C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerTintInfo
// 0x0050
struct FPlayerTintInfo
{
	struct FVectorParameterValue                       TintParam;                                        		// 0x0000 (0x0028) [0x0000000000000001]              ( CPF_Edit )
	struct FVectorParameterValue                       PhongParam;                                       		// 0x0028 (0x0028) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerPatternInfo
// 0x0078
struct FPlayerPatternInfo
{
	struct FVectorParameterValue                       Stripe1Param;                                     		// 0x0000 (0x0028) [0x0000000000000001]              ( CPF_Edit )
	struct FVectorParameterValue                       Stripe2Param;                                     		// 0x0028 (0x0028) [0x0000000000000001]              ( CPF_Edit )
	struct FVectorParameterValue                       Stripe3Param;                                     		// 0x0050 (0x0028) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.CustomizableElement
// 0x0188
struct FCustomizableElement
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCustomizable : 1;                                		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                Name;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Description;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FPlayerMeshInfo                             Mesh;                                             		// 0x0014 (0x0064) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPlayerSpecInfo                             Spec;                                             		// 0x0078 (0x0038) [0x0000000000000001]              ( CPF_Edit )
	struct FPlayerTintInfo                             Tint;                                             		// 0x00B0 (0x0050) [0x0000000000000001]              ( CPF_Edit )
	struct FPlayerPatternInfo                          Pattern;                                          		// 0x0100 (0x0078) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           GameEffects;                                      		// 0x0178 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PlotFlag;                                         		// 0x0184 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_HeadGear_Settings.BioHeadGearComponentSettings
// 0x000C
struct FBioHeadGearComponentSettings
{
	int                                                m_nMeshIndex;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nMaterialIndex;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bUseBodyMaterialConfig : 1;                     		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bIsHidden : 1;                                  		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bIsLoaded : 1;                                  		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character.LookAtBoneDef
// 0x0024
struct FLookAtBoneDef
{
	struct FName                                       m_nBoneName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fLimit;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fUpDownLimit;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fDelay;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_nLookAxis;                                      		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_nUpAxis;                                        		// 0x0015 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bSeparateUpDownLimit : 1;                       		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bUseUpAxis : 1;                                 		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bLookAtInverted : 1;                            		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bUpAxisInverted : 1;                            		// 0x0018 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              m_fSpeedFactor;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fConversationStrength;                          		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Body.ModelVariation
// 0x000C
struct FModelVariation
{
	int                                                NumVariations;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialsPerVariation;                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bHasHeadGear : 1;                               		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Body.ArmorTypes
// 0x0024
struct FArmorTypes
{
	unsigned char                                      ArmorType;                                        		// 0x0000 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FName                                       m_meshPackageName;                                		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_materialPackageName;                            		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FModelVariation >                   Variations;                                       		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UPhysicsAsset*                               ArmorPhysicsAsset;                                		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Body.WeaponAnimSpec
// 0x001C
struct FWeaponAnimSpec
{
	struct FString                                     AnimType;                                         		// 0x0000 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UAnimSet* >                          m_animSets;                                       		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimSet*                                    m_drawAnimSet;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Body.OverrideAnimTreeTemplate
// 0x0008
struct FOverrideAnimTreeTemplate
{
	unsigned char                                      eClassification;                                  		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Head.BioCharacterHeadAppearanceMaterialConfig
// 0x000C
struct FBioCharacterHeadAppearanceMaterialConfig
{
	TArray< class UMaterialInterface* >                m_aMaterials;                                     		// 0x0000 (0x000C) [0x0000000000400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Head.BioWrinkleConfig
// 0x0010
struct FBioWrinkleConfig
{
	struct FString                                     WrinkleParameterName;                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  WrinkleTexture;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_HeadGear.BioFacePlateMeshSpec
// 0x0008
struct FBioFacePlateMeshSpec
{
	unsigned long                                      m_bHidesVisor : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class USkeletalMesh*                               m_pMesh;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_HeadGear.BioHeadGearAppearanceModelSpec
// 0x000C
struct FBioHeadGearAppearanceModelSpec
{
	int                                                m_nMaterialConfigCount;                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nMaterialCountPerConfig;                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIsHairHidden : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bIsHeadHidden : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bSuppressFacePlate : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bSuppressVisor : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_HeadGear.BioHeadGearAppearanceArmorSpec
// 0x0018
struct FBioHeadGearAppearanceArmorSpec
{
	unsigned char                                      m_eArmorType;                                     		// 0x0000 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< struct FBioHeadGearAppearanceModelSpec >   m_aModelSpec;                                     		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       m_nmPackage;                                      		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioBaseAppearancePlaceable.AudioAPLStatePair
// 0x000C
struct FAudioAPLStatePair
{
	struct FName                                       m_nmAPLState;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   m_SoundCue;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioBaseAppearancePlaceable.VFXAPLStatePair
// 0x0009
struct FVFXAPLStatePair
{
	struct FName                                       m_nmAPLState;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_VFXState;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioBaseAppearancePlaceable.VisualEffectAttachment
// 0x0018
struct FVisualEffectAttachment
{
	class UBioVFXTemplate*                             m_oEffectTemplate;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmSocket;                                       		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FVFXAPLStatePair >                  m_States;                                         		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioBaseAppearancePlaceable.StaticAttachments
// 0x000C
struct FStaticAttachments
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioVisualEffect.InterpPropertyInfo
// 0x0008
struct FInterpPropertyInfo
{
	class UObject*                                     Outer;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Offset;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioVisualEffect.CachedInstanceParameter
// 0x001C
struct FCachedInstanceParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fCurrentValue;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FInterpPropertyInfo >               OffsetInfo;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bInited : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioActorBehavior.BioVOSettings
// 0x000C
struct FBioVOSettings
{
	struct FColor                                      cSubtitleColour;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      nSubtitleMode;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bSuppressSubtitlesIfVO : 1;                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAlert : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioActorBehavior.BioDamageReporter
// 0x001C
struct FBioDamageReporter
{
	float                                              fShieldDamage;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fShieldDamageCapacity;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fHealthDamage;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fToxicDamage;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fStabilityDamage;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fDamageResistance;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fToxicResistance;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAiController.EnemyInfo
// 0x0038
struct FEnemyInfo
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     KnownLocation;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     InterpLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              InterpTime;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	struct FCoverInfo                                  Cover;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
	float                                              InitialSeenTime;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              LastSeenTime;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              LastFailedPathTime;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioAiController.DelayUpdateInfo
// 0x0014
struct FDelayUpdateInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	class APawn*                                       Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              UpdateTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimCheckBlendOut.BioAnimCheckBlendOutNode
// 0x0008
struct FBioAnimCheckBlendOutNode
{
	class UAnimNodeBlendList*                          Node;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimCheckBlendOut.BioAnimCheckBlendOutPath
// 0x0010
struct FBioAnimCheckBlendOutPath
{
	TArray< struct FBioAnimCheckBlendOutNode >         Nodes;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    Next;                                             		// 0x000C (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioAnimMovementSync.BioAnimMovementSyncNode
// 0x0008
struct FBioAnimMovementSyncNode
{
	class UAnimNode*                                   Node;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAnimNode*                                   NodeWeight;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlend_TurnInPlace.RotTransitionInfo
// 0x0008
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ChildIndex;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendByAction.BlendTime
// 0x0008
struct FBlendTime
{
	unsigned char                                      m_eAnimNode;                                      		// 0x0000 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              m_fTime;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendByAim.BioAnimNodeBlendByAimLimits
// 0x0010
struct FBioAnimNodeBlendByAimLimits
{
	float                                              DegreesLeft;                                      		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DegreesRight;                                     		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DegreesUp;                                        		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DegreesDown;                                      		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SFXGame.BioAnimNodeBlendMultiAdditive.BioChildActivateData
// 0x0010
struct FBioChildActivateData
{
	unsigned long                                      bApplyData : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fFinalWeight;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fRemainingTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fTotalBlendTime;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendPoseAndGestures.BioChildPinData
// 0x0020
struct FBioChildPinData
{
	float                                              fEndBlendStartTime;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fEndBlendDuration;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fEndTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayUntilNext : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UBioGestChainTree* >                 aChainedTrees;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUseDynAnimSets : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioAnimNodeBlendPoseAndGestures.BioEndBlendData
// 0x0008
struct FBioEndBlendData
{
	float                                              fEndBlendStartTime;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fEndBlendDuration;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalar.BioScalarBlendParams
// 0x000C
struct FBioScalarBlendParams
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Peak;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalar.BioScalarPrecomputedValues
// 0x0008
struct FBioScalarPrecomputedValues
{
	float                                              fRangeLowerRatio;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fRangeUpperRatio;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalarBehavior.BioAnimScalarNodeChildDef
// 0x0014
struct FBioAnimScalarNodeChildDef
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FBioScalarBlendParams                       BlendParams;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalarBehavior.BioAnimScalarNodeBehaviorDef
// 0x0024
struct FBioAnimScalarNodeBehaviorDef
{
	TArray< struct FBioAnimScalarNodeChildDef >        Children;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      BlendInstant : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BlendPctPerSecond;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              DefaultScalar;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioAnimNodeBlendState.BioAnimBlendParams
// 0x000D
struct FBioAnimBlendParams
{
	TArray< float >                                    BlendToChildTimes;                                		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      PlayMode;                                         		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendStateBehavior.BioAnimStateNodeChildDef
// 0x001C
struct FBioAnimStateNodeChildDef
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              DefaultWeight;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FBioAnimBlendParams                         BlendParams;                                      		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioAnimNodeBlendStateBehavior.BioAnimStateNodeBehaviorDef
// 0x0018
struct FBioAnimStateNodeBehaviorDef
{
	TArray< struct FBioAnimStateNodeChildDef >         Children;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0018
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                  		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSequence*                               AnimSeq;                                          		// 0x0014 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct SFXGame.BioAppearanceItemSophisticated.BioAppearanceItemSophisticatedVariant
// 0x0020
struct FBioAppearanceItemSophisticatedVariant
{
	int                                                m_Label;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    m_oWeaponAnimSet;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   m_oWeaponAnimTree;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicsAsset*                               m_oPhysicsAsset;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               m_oModelMesh;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInterface* >                m_aMaterials;                                     		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioAppearanceItemSophisticated.WeaponEffects
// 0x001C
struct FWeaponEffects
{
	class UBioVISWeapon*                               VisualImpactSet;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxMuzzleFlash;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxMuzzleFlash2;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxTracer;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxCoolDown;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxSabotage;                                      		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxReload;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAppearanceItemWeapon.BioAppearanceItemWeaponVFXSpec
// 0x000C
struct FBioAppearanceItemWeaponVFXSpec
{
	int                                                m_type;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_Damage;                                         		// 0x0004 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	class UBioWeaponVFXAppearance*                     m_appearance;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAppearanceVehicle.BioVehicleAttachmentInfo
// 0x0018
struct FBioVehicleAttachmentInfo
{
	class UActorComponent*                             oComponentToAttach;                               		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       nmAttachSocket;                                   		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInterface* >                aMeshMaterials;                                   		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioAppearanceVehicle.BioVehicleTurretInfo
// 0x0028
struct FBioVehicleTurretInfo
{
	struct FName                                       nmAttachSocket;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmTurretYawBone;                                  		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmTurretPitchBone;                                		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmYawController;                                  		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmPitchController;                                		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAppearanceVehicle.BioVehicleThrusterInfo
// 0x0008
struct FBioVehicleThrusterInfo
{
	struct FName                                       nmThrusterSocket;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAppearanceVehicle.BioVehicleSoundEntityStateInfo
// 0x0018
struct FBioVehicleSoundEntityStateInfo
{
	struct FString                                     sStateName;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sStateValue;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioGamePropertyTimer.BioGPTimingData
// 0x0010
struct FBioGPTimingData
{
	float                                              fTime;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UBioGameProperty*                            oGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      eTimingType;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      bFrameTicked : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGamePropertyManager.BioGamePropertyManagerTimedOutTicked
// 0x0008
struct FBioGamePropertyManagerTimedOutTicked
{
	class UBioGameProperty*                            m_pGP;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fTimeRemaining;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioArtPlaceableRoles.ArtPlaceableProperty
// 0x0018
struct FArtPlaceableProperty
{
	struct FString                                     sPropertyName;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sPropertyValue;                                   		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioArtPlaceableRoles.ArtPlaceableRole
// 0x0018
struct FArtPlaceableRole
{
	struct FString                                     sRoleName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FArtPlaceableProperty >             aProperties;                                      		// 0x000C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct SFXGame.BioAttributes.BioComplexIntStructAttribute
// 0x0074
struct FBioComplexIntStructAttribute
{
	int                                                m_Base;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_modifiers[ 0x4 ];                               		// 0x0004 (0x0010) [0x0000000000000000]              
	unsigned long                                      m_isBaseOverrideInEffect : 1;                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< int >                                      m_baseOverrides;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            m_isBaseOverrideValid;                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_Current;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_Dirty : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_Max;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_Min;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_isModifierEnabled[ 0x4 ];                       		// 0x0040 (0x0010) [0x0000000000000000]              
	struct FPointer                                    m_Parent;                                         		// 0x0050 (0x0004) [0x0000000000001000]              ( CPF_Native )
	class UBio2DA*                                     m_LookupTable;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                m_TableColumn;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< struct FPointer >                          m_Children;                                       		// 0x005C (0x000C) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FPointer >                          m_FloatChildren;                                  		// 0x0068 (0x000C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioAttributes.BioComplexFloatStructAttribute
// 0x005C
struct FBioComplexFloatStructAttribute
{
	float                                              m_Base;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_modifiers[ 0x4 ];                               		// 0x0004 (0x0010) [0x0000000000000000]              
	unsigned long                                      m_isBaseOverrideInEffect : 1;                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< float >                                    m_baseOverrides;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            m_isBaseOverrideValid;                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_Current;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_Dirty : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_Max;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              m_Min;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_isModifierEnabled[ 0x4 ];                       		// 0x0040 (0x0010) [0x0000000000000000]              
	struct FPointer                                    m_Parent;                                         		// 0x0050 (0x0004) [0x0000000000001000]              ( CPF_Native )
	class UBio2DA*                                     m_LookupTable;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                m_TableColumn;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioBaseActivity.ActivityProp
// 0x000C
struct FActivityProp
{
	class UStaticMesh*                                 m_oStaticMesh;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nAttachlocation;                                		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioBaseSquad.MemberData
// 0x0030
struct FMemberData
{
	class APawn*                                       SquadMember;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class ABioTacticalMoveToIndicator*                 oDestinationIndicator;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMoveOrderAssigned : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       nmPower;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	struct FVector                                     vTarget;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     vHoldPosition;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	class AActor*                                      oOrderedAttackTarget;                             		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioProceduralCameraBasic.ActorInfo
// 0x0054
struct FActorInfo
{
	struct FVector                                     myPosition;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    myRotation;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     headBaseBonePosition;                             		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     headBonePosition;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     vCameraFocusPoint;                                		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     vProceduralCameraPosition;                        		// 0x003C (0x000C) [0x0000000000000000]              
	struct FRotator                                    rProceduralCameraRotation;                        		// 0x0048 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioProceduralCameraBasic.CameraInfo
// 0x0020
struct FCameraInfo
{
	struct FVector                                     vPosition;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rRotation;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              fFov;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fNearPlane;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCameraBehaviorGalaxy.SFXGalaxyMapSelector
// 0x0024
struct FSFXGalaxyMapSelector
{
	class USFXGalaxyMapObject*                         m_GalaxyMapObject;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      m_actor;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioCameraBehaviorGalaxy.SFXGalaxyMapSelector.m_Name
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x000C (0x000C) UNKNOWN PROPERTY: ArrayProperty SFXGame.BioCameraBehaviorGalaxy.SFXGalaxyMapSelector.m_PlotNames
	unsigned long                                      m_Visible : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_Visited;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_State;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXCameraModifier_ScreenShake.ShakeParams
// 0x0004
struct FShakeParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct SFXGame.SFXCameraModifier_ScreenShake.ScreenShakeStruct
// 0x0070
struct FScreenShakeStruct
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotAmplitude;                                     		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotFrequency;                                     		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                RotParam;                                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocAmplitude;                                     		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocFrequency;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocSinOffset;                                     		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                LocParam;                                         		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVAmplitude;                                     		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVFrequency;                                     		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVSinOffset;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned char                                      FOVParam;                                         		// 0x0064 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShakeName;                                        		// 0x0068 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioCameraBehaviorGalaxy.BioMassRelayLine
// 0x006C
struct FBioMassRelayLine
{
	int                                                m_nStartClusterIdx;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nEndClusterIdx;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_sStartClusterLabel;                             		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_sEndClusterLabel;                               		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     m_vLeftEndPosition;                               		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_vRightEndPosition;                              		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_vMiddlePosition;                                		// 0x0038 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_vDrawScale;                                     		// 0x0044 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_rOrientation;                                   		// 0x0050 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_pLeftEndActor;                                  		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_pRighEndActor;                                  		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_pMiddleActor;                                   		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIsGlowing : 1;                                 		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioCameraZoom.BioZoomFocusConfig
// 0x002C
struct FBioZoomFocusConfig
{
	float                                              m_fMaxFocusDistance;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fNearClipFactor;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fNearClipMax;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fMinRate;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fInnerRadiusFactor;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fFalloffExponent;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fBlurKernelSize;                                		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fMaxNearBlurAmount;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxFarBlurAmount;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FColor                                      m_clrModulateBlur;                                		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCameraZoom.BioZoomMagnificationConfig
// 0x0010
struct FBioZoomMagnificationConfig
{
	float                                              m_fCamSpeedFactor;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fFOVFactor;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nLevelCount;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fTransitionDuration;                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCheatManager.ProfileData
// 0x003C
struct FProfileData
{
	struct FName                                       Keyword;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Header;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNoTarget : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             Func;                                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             Utility;                                          		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationManagerNativeBase.SFXVocalizationEvent
// 0x0014
struct FSFXVocalizationEvent
{
	class ABioPawn*                                    Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    Recipient;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DelayTimeRemainingSec;                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                DebugIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationManagerNativeBase.SFXVocalization
// 0x0020
struct FSFXVocalization
{
	class ABioPawn*                                    Speaker;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSFXVocalizationEvent                       Event;                                            		// 0x0004 (0x0014) [0x0000000000000000]              
	unsigned char                                      Role;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                Specific;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationManagerNativeBase.SFXVocalizationEventProperties
// 0x0024
struct FSFXVocalizationEventProperties
{
	float                                              ChanceToPlay;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTimeBetweenSec;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeLastPlayed;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              delay;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              MaxWitnessDistSq;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bQueueIfBlocked : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanInterrupt : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanPlayIfDead : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanPlayIfRagdolled : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< unsigned char >                            Roles;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationLine
// 0x001C
struct FSFXVocalizationLine
{
	class UWwiseEvent*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            SpecificType;                                     		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      SpecificValue;                                    		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationVariation
// 0x000C
struct FSFXVocalizationVariation
{
	TArray< struct FSFXVocalizationLine >              Variations;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationRole
// 0x000C
struct FSFXVocalizationRole
{
	TArray< struct FSFXVocalizationVariation >         Roles;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXGame.ScaledFloat
// 0x0024
struct FScaledFloat
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxLevel;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< class USFXGameEffect* >                    Bonuses;                                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              StaticBonus;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlotTreasure.STreasure
// 0x0038
struct FSTreasure
{
	int                                                nTreasureId;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       nmLevel;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTreasure;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       nmTech;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	unsigned char                                      Resource;                                         		// 0x001C (0x0001) [0x0000000000000000]              
	int                                                ResourcePrice;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FName                                       nmRequiredTech;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	int                                                RequiredTechLevel;                                		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                DiscoverTechLevel;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoAnimation : 1;                                 		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMultiLevel : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.SFXPlotTreasure.SResourceBudget
// 0x0020
struct FSResourceBudget
{
	struct FName                                       nmLevel;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nCredits;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nEezo;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nIridium;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nPlatinum;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nPalladium;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nID;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlotTreasure.STech
// 0x0040
struct FSTech
{
	struct FName                                       nmTech;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmResearch;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     sImage;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLargeImage;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0028 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXPlotTreasure.STech.srTitle
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x002C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXPlotTreasure.STech.srName
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0030 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXPlotTreasure.STech.srMessage
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0034 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXPlotTreasure.STech.srDescription
	int                                                nLevels;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                UnlockId;                                         		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXModule_Damage.DamagePart
// 0x0008
struct FDamagePart
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsDetached : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGameConfig.TreasureBudget
// 0x0018
struct FTreasureBudget
{
	int                                                LevelId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Credits;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Eezo;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Palladium;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Platinum;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Iridium;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPRI.DamageCalculationAlgorithm
// 0x0038
struct FDamageCalculationAlgorithm
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              RangeMultiplier;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              PassiveGEMultiplier;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              GEMultiplier;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              StealthMultiplier;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              LastBulletMultiplier;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DifficultyMultiplier;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              PartBasedDamageMultiplier;                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              DamageScale;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              CoverLeanMultiplier;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              CoverMultiplier;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              StormMultiplier;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              RagdollMultiplier;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              AchievementBonusDamage;                           		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioTalentContainer.BioTalentSpecification
// 0x0044
struct FBioTalentSpecification
{
	class UBioTalent*                                  m_Talent;                                         		// 0x0000 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< int >                                      m_PrereqTalentIDArray;                            		// 0x0004 (0x000C) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< int >                                      m_PrereqTalentRankArray;                          		// 0x0010 (0x000C) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	int                                                m_MaxRank;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_LevelOffset;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_LevelsPerRank;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_OriginalRank;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_VisualOrder;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0030 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioTalentContainer.BioTalentSpecification.m_LocalizedName
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0034 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioTalentContainer.BioTalentSpecification.m_LocalizedDesc
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0038 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioTalentContainer.BioTalentSpecification.m_StringForUnlockReferences
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x003C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioTalentContainer.BioTalentSpecification.m_BlurbForUnlockReferences
	int                                                m_CostTemplateID;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioConversation.BioDialogReplyListDetails
// 0x0015
struct FBioDialogReplyListDetails
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioConversation.BioDialogReplyListDetails.srParaphrase
	struct FString                                     sParaphrase;                                      		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Category;                                         		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioDialogNode
// 0x0044
struct FBioDialogNode
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioConversation.BioDialogNode.srText
	struct FString                                     sText;                                            		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bFireConditional : 1;                             		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                nConditionalFunc;                                 		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nConditionalParam;                                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nStateTransition;                                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nStateTransitionParam;                            		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nExportID;                                        		// 0x0024 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                nScriptIndex;                                     		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAmbient : 1;                                     		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNonTextLine : 1;                                 		// 0x002C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class UWwiseBaseSoundObject*                       pCue;                                             		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bSoundLoaded : 1;                                 		// 0x0034 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      eGUIStyle;                                        		// 0x0038 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                nCameraIntimacy;                                  		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIgnoreBodyGestures : 1;                          		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioDialogEntryNode
// 0x0024(0x0068 - 0x0044)
struct FBioDialogEntryNode : FBioDialogNode
{
	TArray< struct FBioDialogReplyListDetails >        ReplyListNew;                                     		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nSpeakerIndex;                                    		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nListenerIndex;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSkippable : 1;                                   		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< int >                                      aSpeakerList;                                     		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioConversation.BioDialogReplyNode
// 0x0018(0x005C - 0x0044)
struct FBioDialogReplyNode : FBioDialogNode
{
	TArray< int >                                      EntryList;                                        		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      ReplyType;                                        		// 0x0050 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                nListenerIndex;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUnskippable : 1;                                 		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIllegal : 1;                                     		// 0x0058 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct SFXGame.BioConversation.BioDialogSpeaker
// 0x000C
struct FBioDialogSpeaker
{
	struct FName                                       sSpeakerTag;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      aSpeaker;                                         		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFXGame.BioConversation.BioDialogLookat
// 0x000C
struct FBioDialogLookat
{
	class AActor*                                      pActor;                                           		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fLookAtDelay;                                     		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      pLookAtTarget;                                    		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFXGame.BioConversation.BioDialogScript
// 0x0008
struct FBioDialogScript
{
	struct FName                                       sScriptTag;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioSavedActorPos
// 0x001C
struct FBioSavedActorPos
{
	class AActor*                                      pActor;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     vPos;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rRot;                                             		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioTlkFile.BioTlkSet
// 0x0008
struct FBioTlkSet
{
	class UBioTlkFile*                                 Male;                                             		// 0x0000 (0x0004) [0x0000000020020002]              ( CPF_Const | CPF_EditConst | CPF_Deprecated )
	class UBioTlkFile*                                 Female;                                           		// 0x0004 (0x0004) [0x0000000020020002]              ( CPF_Const | CPF_EditConst | CPF_Deprecated )
};

// ScriptStruct SFXGame.BioConversation.BioNextCamData
// 0x0038
struct FBioNextCamData
{
	float                                              fFov;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vPos;                                             		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    rRot;                                             		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseThis : 1;                                     		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fNearPlane;                                       		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       sCameraName;                                      		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FBioStageDOFData                            tDOFData;                                         		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioInterruptReplyInfo
// 0x0018
struct FBioInterruptReplyInfo
{
	unsigned char                                      eInterruptType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nReplyListIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fWindowStartTimeRemaining;                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fWindowTimeRemaining;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bActivated : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioConversation.BioConvLightingData
// 0x0044
struct FBioConvLightingData
{
	float                                              KeyLight_Scale_Red;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeyLight_Scale_Green;                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeyLight_Scale_Blue;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FillLight_Scale_Red;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FillLight_Scale_Green;                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FillLight_Scale_Blue;                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      RimLightColor;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RimLightScale;                                    		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RimLightYaw;                                      		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RimLightPitch;                                    		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RimLightControl;                                  		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LightingType;                                     		// 0x0029 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TargetBoneName;                                   		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BouncedLightingIntensity;                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BouncedKeyLightingIntensity;                      		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BouncedKeyLightingDesaturation;                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLockEnvironment : 1;                             		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTriggerFullUpdate : 1;                           		// 0x0040 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseForNextCamera : 1;                            		// 0x0040 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioNextLightingData
// 0x004C
struct FBioNextLightingData
{
	struct FBioConvLightingData                        tData;                                            		// 0x0000 (0x0044) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      pActor;                                           		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseThis : 1;                                     		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioConvPawnPropData
// 0x0028
struct FBioConvPawnPropData
{
	struct FMap_Mirror                                 mapMeshPropData;                                  		// 0x0000 (0x0014) [0x0000000000001000]              ( CPF_Native )
	struct FMap_Mirror                                 mapWeaponPropData;                                		// 0x0014 (0x0014) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioPawn.ReactionPart
// 0x0014
struct FReactionPart
{
	struct FName                                       BodyPart;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             BoneNames;                                        		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioPawn.RootMotionOverrideEntry
// 0x0006
struct FRootMotionOverrideEntry
{
	class UAnimNode*                                   Node;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      RMMode;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      RMRMode;                                          		// 0x0005 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.AttackReservation
// 0x0010
struct FAttackReservation
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTicketCost;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fTimeUntilExpiry;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsingTicket : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioPawn.RigidBodyCallback
// 0x0010
struct FRigidBodyCallback
{
	int                                                nPriority;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             RBCallback;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioPawn.AimAssistBox
// 0x0010
struct FAimAssistBox
{
	unsigned char                                      NodeType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Width;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SoftMargin;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPawn.BodyStance
// 0x000C
struct FBodyStance
{
	unsigned char                                      StanceID;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXDamageType.HitReaction
// 0x0015
struct FHitReaction
{
	struct FName                                       BodyPart;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AnimatedReaction;                                 		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReactionChance;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDeathReaction : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTriggerOnMove : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bTriggerOnIdle : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bFrontArc : 1;                                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bRearArc : 1;                                     		// 0x0010 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bFromCrouch : 1;                                  		// 0x0010 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bIgnoreShields : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned char                                      MaxRange;                                         		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXDamageType.ResistanceInfo
// 0x000C
struct FResistanceInfo
{
	float                                              Shield;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Armour;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Biotic;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGUIBox.CanvasProperties
// 0x0020
struct FCanvasProperties
{
	class UFont*                                       m_font;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nCurX;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nCurY;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nOrgX;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nOrgY;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nClipX;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nClipY;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FColor                                      m_color;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEffectsMaterialsPriorityMap.EffectMaterialPriority
// 0x0008
struct FEffectMaterialPriority
{
	unsigned char                                      eType;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEmissionAreaListBoneList.BoneAndWeight
// 0x000C
struct FBoneAndWeight
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoneWeight;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEmissionAreaListBoneList.BoneListEmissionArea
// 0x0018
struct FBoneListEmissionArea
{
	struct FName                                       AreaTag;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseNumVertsAsWeights : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FBoneAndWeight >                    Bones;                                            		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioEpicPawnBehavior.EpicPawnVisualEffect
// 0x0014
struct FEpicPawnVisualEffect
{
	struct FName                                       m_nmLabel;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             m_oVFXTemplate;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmTagOfActorAtVFXLocation;                      		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEventNotifier.BioDisplayNotice
// 0x002C
struct FBioDisplayNotice
{
	int                                                nEventType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTimeToLive;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nContext;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioEventNotifier.BioDisplayNotice.srTitle
	struct FString                                     strTitle;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nQuantity;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nQuantMin;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nQuantMax;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEventNotifier.BioTalentNotice
// 0x0014
struct FBioTalentNotice
{
	int                                                nIcon;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ABioPawn*                                    oCharacter;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackDOF.BioDOFTrackData
// 0x0030
struct FBioDOFTrackData
{
	unsigned long                                      bEnableDOF : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fFalloffExponent;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fBlurKernelSize;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxNearBlurAmount;                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxFarBlurAmount;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      cModulateBlurColor;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFocusInnerRadius;                                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFocusDistance;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vFocusPosition;                                   		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fInterpolateSeconds;                              		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackFuncShot.BioFuncShotData
// 0x0038
struct FBioFuncShotData
{
	unsigned char                                      eShotType;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     sActor1;                                          		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sActor2;                                          		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sStage;                                           		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nActor1PosNode;                                   		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseCamera : 1;                                   		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       nmShotName;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestTrackPriority
// 0x0008
struct FBioGestTrackPriority
{
	int                                                nTrackIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestureRenameData
// 0x0018
struct FBioGestureRenameData
{
	struct FName                                       nmOldAnim;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmNewSet;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmNewAnim;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestureData
// 0x0068
struct FBioGestureData
{
	unsigned char                                      ePoseFilter;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ePose;                                            		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eGestureFilter;                                   		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eGesture;                                         		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmPoseSet;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPoseAnim;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureSet;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureAnim;                                    		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionSet;                                  		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionAnim;                                 		// 0x002C (0x0008) [0x0000000000000000]              
	float                                              fPlayRate;                                        		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartOffset;                                     		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndOffset;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInvalidData : 1;                                 		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOneShotAnim : 1;                                 		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              fStartBlendDuration;                              		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndBlendDuration;                                		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fWeight;                                          		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bChainToPrevious : 1;                             		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlayUntilNext : 1;                               		// 0x0050 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< int >                                      aChainedGestures;                                 		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUseDynAnimSets : 1;                              		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSnapToPose : 1;                                  		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              fTransBlendTime;                                  		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGesturePinScrubData
// 0x0018
struct FBioGesturePinScrubData
{
	struct FName                                       nmAnimSet;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              fTime;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fWeight;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestureScrubData
// 0x0034(0x009C - 0x0068)
struct FBioGestureScrubData : FBioGestureData
{
	struct FName                                       nmNextPoseSet;                                    		// 0x0068 (0x0008) [0x0000000000000000]              
	struct FName                                       nmNextPoseAnim;                                   		// 0x0070 (0x0008) [0x0000000000000000]              
	float                                              fCurPoseTime;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              fNextPoseTime;                                    		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              fTransitionTime;                                  		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              fCurPoseWeight;                                   		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              fTransitionWeight;                                		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              fNextPoseWeight;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	TArray< struct FBioGesturePinScrubData >           aGestPins;                                        		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioEvtSysTrackInterrupt.BioInterruptTrackData
// 0x0004
struct FBioInterruptTrackData
{
	unsigned long                                      bShowInterrupt : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackLookAt.BioLookAtTrackData
// 0x0014
struct FBioLookAtTrackData
{
	struct FName                                       nmFindActor;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eFindActorMode;                                   		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnabled : 1;                                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackProp.BioPropTrackData
// 0x002C
struct FBioPropTrackData
{
	unsigned long                                      bEquip : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      eProp;                                            		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmProp;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      eAction;                                          		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmAction;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	float                                              fActionDuration;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	class UObject*                                     pPropMesh;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             pActionPartSys;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	class UClass*                                      pWeaponClass;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackProp.BioWeaponPropActionData
// 0x0008
struct FBioWeaponPropActionData
{
	class UFunction*                                   pfnExecute;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UFunction*                                   pfnGetTiming;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackPropInst.BioFoundWeaponData
// 0x0008
struct FBioFoundWeaponData
{
	class ASFXWeapon*                                  pWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSpawned : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioEvtSysTrackPropInst.BioUsedMeshPropData
// 0x0010
struct FBioUsedMeshPropData
{
	class UMeshComponent*                              pPropCmp;                                         		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UParticleSystemComponent* >          aEffects;                                         		// 0x0004 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct SFXGame.BioEvtSysTrackPropInst.BioActionPreviewResource
// 0x001C
struct FBioActionPreviewResource
{
	struct FName                                       nmAction;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    pPartSysCmp;                                      		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bEquipped : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	class UAnimSet*                                    pAnimSet;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FName                                       nmAnimation;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackPropInst.BioPropPreviewResource
// 0x0024
struct FBioPropPreviewResource
{
	struct FName                                       nmProp;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class UMeshComponent*                              pPropCmp;                                         		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bEquipped : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FMap_Mirror                                 mapActions;                                       		// 0x0010 (0x0014) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioEvtSysTrackSetFacing.BioSetFacingData
// 0x0014
struct FBioSetFacingData
{
	unsigned long                                      bApplyOrientation : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fOrientation;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eCurrentStageNode;                                		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmStageNode;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackSubtitles.BioSubtitleTrackData
// 0x000C
struct FBioSubtitleTrackData
{
	int                                                nStrRefID;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fLength;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShowAtTop : 1;                                   		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackSwitchCamera.BioCameraSwitchData
// 0x0020
struct FBioCameraSwitchData
{
	unsigned long                                      bForceCrossingLineOfAction : 1;                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       nmExplicitCamera;                                 		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                nIntimacy;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eStandardCamera;                                  		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eStageSpecificCamera;                             		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmStageSpecificCam;                               		// 0x0014 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUseForNextCamera : 1;                            		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioGameProperty.BioGamePropertyApplication
// 0x0008
struct FBioGamePropertyApplication
{
	class UObject*                                     m_pActualTarget;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UBioGameEffect*                              m_pGE;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamePropertyEffectLevelIterator.BioEffectLevelIteratorPair
// 0x0010
struct FBioEffectLevelIteratorPair
{
	int                                                m_nGameProperty;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_aGPEffectRows;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioGamePropertyImporter.BioGPLoadData
// 0x0024
struct FBioGPLoadData
{
	class UObject*                                     oOwner;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UBioGamePropertyContainer*                   oContainer;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nGamePropId;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class UBio2DA*                                     oFXLevelTable;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nPowerLevel;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< int >                                      aEffectLevelRows;                                 		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nMaxRanks;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureAnimSetMgr.SFXGestureData
// 0x0064
struct FSFXGestureData
{
	struct FName                                       nmPoseSet;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPoseAnim;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureSet;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureAnim;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionSet;                                  		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionAnim;                                 		// 0x0028 (0x0008) [0x0000000000000000]              
	float                                              fPlayRate;                                        		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartOffset;                                     		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndOffset;                                       		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInvalidData : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOneShotAnim : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              fStartBlendDuration;                              		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndBlendDuration;                                		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fWeight;                                          		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bChainToPrevious : 1;                             		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlayUntilNext : 1;                               		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< int >                                      aChainedGestures;                                 		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUseDynAnimSets : 1;                              		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSnapToPose : 1;                                  		// 0x005C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              fTransBlendTime;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureAnimSetMgr.BioGestDataKey
// 0x006C
struct FBioGestDataKey
{
	struct FSFXGestureData                             tRawData;                                         		// 0x0000 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioGestChainTree*                           pChainTree;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseDynamicAnimSets : 1;                          		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGestureRulesData.BioARPUBodyConfig
// 0x0024
struct FBioARPUBodyConfig
{
	struct FName                                       nmCurveName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUsesSingleKeyframe : 1;                          		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       nmAnimSet;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	float                                              fStartBlendDuration;                              		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fEndBlendDuration;                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRulesData.BioGestPose
// 0x0030
struct FBioGestPose
{
	struct FName                                       nmPose;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSet;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FIntPoint                                   tPosition;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGroup;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       nmFemaleNodeName;                                 		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRulesData.BioGestTransition
// 0x0010(0x0040 - 0x0030)
struct FBioGestTransition : FBioGestPose
{
	struct FName                                       nmDestPose;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	unsigned long                                      bNoTransAnim : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fTransBlendTime;                                  		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRulesData.BioGestGesture
// 0x0014(0x0044 - 0x0030)
struct FBioGestGesture : FBioGestPose
{
	struct FName                                       nmGesture;                                        		// 0x0030 (0x0008) [0x0000000000000000]              
	unsigned long                                      bOneShotAnim : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       nmGestureGroup;                                   		// 0x003C (0x0008) [0x0000000020000000]              ( CPF_Deprecated )
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioGestCharOverride
// 0x0048
struct FBioGestCharOverride
{
	struct FName                                       nmFemale;                                         		// 0x0000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmAsari;                                          		// 0x0008 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmTurian;                                         		// 0x0010 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmSalarian;                                       		// 0x0018 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmQuarian;                                        		// 0x0020 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmOther;                                          		// 0x0028 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmKrogan;                                         		// 0x0030 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmGeth;                                           		// 0x0038 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmOtherArtificial;                                		// 0x0040 (0x0008) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioWeaponPropData
// 0x0020
struct FBioWeaponPropData
{
	struct FName                                       nmWeaponBaseClassName;                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           aWeaponClassPrefixes;                             		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           aWeaponPackages;                                  		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioMeshPropActionData
// 0x0044
struct FBioMeshPropActionData
{
	struct FName                                       nmActionName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     sEffect;                                          		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bActivate : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       nmAttachTo;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FVector                                     vOffsetLocation;                                  		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rOffsetRotation;                                  		// 0x002C (0x000C) [0x0000000000000000]              
	struct FVector                                     vOffsetScale;                                     		// 0x0038 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioMeshPropData
// 0x0054
struct FBioMeshPropData
{
	struct FName                                       nmPropName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     sMesh;                                            		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       nmAttachTo;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector                                     vOffsetLocation;                                  		// 0x001C (0x000C) [0x0000000000000000]              
	struct FRotator                                    rOffsetRotation;                                  		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FVector                                     vOffsetScale;                                     		// 0x0034 (0x000C) [0x0000000000000000]              
	struct FMap_Mirror                                 mapActions;                                       		// 0x0040 (0x0014) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioGlobalVariableTable.TimedPlotUnlock_t
// 0x0008
struct FTimedPlotUnlock_t
{
	int                                                PlotBool;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UnlockDay;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHardLinks.BioHardLinkReference
// 0x0010
struct FBioHardLinkReference
{
	class UObject*                                     Object;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Comment;                                          		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioHintSystemBase.HintDefinition
// 0x003D
struct FHintDefinition
{
	struct FName                                       HintName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      Enabled : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioHintSystemBase.HintDefinition.DefaultText
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioHintSystemBase.HintDefinition.PS3Text
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0014 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioHintSystemBase.HintDefinition.PCText
	float                                              DisplayDuration;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              CooldownTime;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              UpdateTime;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              TimeRemaining;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MaxDifficulty;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FName                                       ClearEvent;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	struct FName                                       ClearContext;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	unsigned char                                      HintPosition;                                     		// 0x003C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHintSystemBase.SFXNotification
// 0x005C
struct FSFXNotification
{
	struct FName                                       nmType;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              CreationTime;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fDisplayTime;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     sTitle;                                           		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sSubtitle;                                        		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sBody;                                            		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTexture*                                    oImage;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FName                                       nRemoteEvent;                                     		// 0x003C (0x0008) [0x0000000000000000]              
	struct FName                                       nmSound;                                          		// 0x0044 (0x0008) [0x0000000000000000]              
	struct FName                                       nmStopSound;                                      		// 0x004C (0x0008) [0x0000000000000000]              
	int                                                nFlourishID;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                Data1;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHintSystemBase.SFXNotificationData
// 0x004C
struct FSFXNotificationData
{
	struct FName                                       nmType;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioHintSystemBase.SFXNotificationData.srTitle
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x000C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioHintSystemBase.SFXNotificationData.srSubtitle
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioHintSystemBase.SFXNotificationData.srBody
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0014 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioHintSystemBase.SFXNotificationData.srAltTitle
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0018 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioHintSystemBase.SFXNotificationData.srAltBody
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x001C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioHintSystemBase.SFXNotificationData.srAltSubtitle
	float                                              DisplayTime;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     sImageResource;                                   		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       nRemoteEvent;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	struct FName                                       nmSound;                                          		// 0x003C (0x0008) [0x0000000000000000]              
	int                                                nFlourishID;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanBeMerged : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioHintSystemBase.HintTrackingData
// 0x0038
struct FHintTrackingData
{
	int                                                Num;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastTime;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              FirstTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Times[ 0xA ];                                     		// 0x000C (0x0028) [0x0000000000000000]              
	int                                                QueueHead;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXProfileSettings.AchievementReward
// 0x0018
struct FAchievementReward
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AchievementId;                                    		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Effect;                                           		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXProfileSettings.AchievementData
// 0x002C
struct FAchievementData
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AchievementId;                                    		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                XboxAchievementID;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXProfileSettings.AchievementData.Title
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0014 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXProfileSettings.AchievementData.Incomplete
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0018 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXProfileSettings.AchievementData.Complete
	int                                                Points;                                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Icon;                                             		// 0x0020 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXProfileSettings.GrinderAchievement
// 0x0018
struct FGrinderAchievement
{
	unsigned char                                      AchievementId;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ProfileSettingId;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Goal;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Interval;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXProfileSettings.GrinderAchievement.Title
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0014 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXProfileSettings.GrinderAchievement.Description
};

// ScriptStruct SFXGame.BioPlayerController.LocalEnemy
// 0x0008
struct FLocalEnemy
{
	class APawn*                                       Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSeen : 1;                                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasLOS : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.BioPlayerController.PostProcessInfo
// 0x0014
struct FPostProcessInfo
{
	unsigned char                                      Preset;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Shadows;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MidTones;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              HighLights;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Desaturation;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioPPSettingsCallbackData
// 0x0008
struct FBioPPSettingsCallbackData
{
	struct FPointer                                    fpCallback;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pData;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerInput.StaticKeyBind
// 0x0018
struct FStaticKeyBind
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Control : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Shift : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Alt : 1;                                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDebug : 1;                                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SFXGame.BioPlayerInput.DebugMenuEntry
// 0x0018
struct FDebugMenuEntry
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioPlayerController.BioRadarData
// 0x0024
struct FBioRadarData
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fPassTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      eRadarType;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FVector                                     vPosition;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                nSize;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayerLockedOn : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nRelativeZ;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioDamageIndicatorData
// 0x0004
struct FBioDamageIndicatorData
{
	float                                              fCoolDownTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.PlayerOrder
// 0x0034
struct FPlayerOrder
{
	struct FName                                       nmPower;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      oTarget;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     vTarget;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	class ASFXWeapon*                                  oSwitchWeapon;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     vOriginalCameraLocation;                          		// 0x001C (0x000C) [0x0000000000000000]              
	struct FRotator                                    rOriginalCameraRotation;                          		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.SFXHotKeyDefinition
// 0x000C
struct FSFXHotKeyDefinition
{
	struct FName                                       nmPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nPowerID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.CameraRotationLog
// 0x0068
struct FCameraRotationLog
{
	struct FName                                       Trace[ 0xA ];                                     		// 0x0000 (0x0050) [0x0000000000000000]              
	struct FRotator                                    PrevRot;                                          		// 0x0050 (0x000C) [0x0000000000000000]              
	struct FRotator                                    PostRot;                                          		// 0x005C (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.TextureParameter
// 0x000C
struct FTextureParameter
{
	struct FName                                       nName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture*                                    m_pTexture;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.ColorParameter
// 0x0018
struct FColorParameter
{
	struct FName                                       nName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                cValue;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.ScalarParameter
// 0x000C
struct FScalarParameter
{
	struct FName                                       nName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              sValue;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioInterface_Appearance_Pawn.CreatureSpeeds
// 0x0060
struct FCreatureSpeeds
{
	float                                              fGroundSpeed;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAirSpeed;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fWaterSpeed;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fClimbSpeed;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fWalkSpeed;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSprintSpeed;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fExploreSprintSpeed;                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTacticalSpeed;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTacWalkSpeed;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTacCrouchSpeed;                                  		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTacCrouchWalkSpeed;                              		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTurnSpeedHigh;                                   		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTurnSpeedLow;                                    		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTurnSpeedCombat;                                 		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTurnSpeedCombatCrouch;                           		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTurnSpeedCombatSprint;                           		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStandardFriction;                                		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAccelRate;                                       		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSAccel;                                      		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSDecel;                                      		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSAccelTac;                                   		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSDecelTac;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSAccelTacCrouch;                             		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSDecelTacCrouch;                             		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioInterface_Appearance_Pawn.BioPawnLabelledHeadGearBool
// 0x0008
struct FBioPawnLabelledHeadGearBool
{
	unsigned char                                      m_eComponent;                                     		// 0x0000 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      m_bIsVisible : 1;                                 		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioInterface_Appearance_Pawn.BioPawnHeadGearVisibility
// 0x001C
struct FBioPawnHeadGearVisibility
{
	unsigned long                                      m_bOverride : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FBioPawnLabelledHeadGearBool                m_a[ 0x3 ];                                       		// 0x0004 (0x0018) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioInterfaceAppearanceVehicle.BioVehicleTurretRunTimeInfo
// 0x000C
struct FBioVehicleTurretRunTimeInfo
{
	unsigned long                                      m_bTurretAutoTrackYaw : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTurretAutoTrackPitch : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fCurrentTurretRelativeYaw;                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fCurrentTurretRelativePitch;                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioInterpTrackRotationMode.RotationModeTrackKey
// 0x0014
struct FRotationModeTrackKey
{
	float                                              InterpTime;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LookAtGroupName;                                  		// 0x0004 (0x0008) [0x0000000020000001]              ( CPF_Edit | CPF_Deprecated )
	struct FName                                       FindActorTag;                                     		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioLookAtDefinition.LookAtBoneDefinition
// 0x0044
struct FLookAtBoneDefinition
{
	struct FName                                       m_nBoneName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fLimit;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fUpDownLimit;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fDelay;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_nLookAxis;                                      		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_nUpAxis;                                        		// 0x0015 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bSeparateUpDownLimit : 1;                       		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bUseUpAxis : 1;                                 		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bUpAxisInLocalSpace : 1;                        		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bLookAtInverted : 1;                            		// 0x0018 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_bUpAxisInverted : 1;                            		// 0x0018 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      m_bUseAcceleration : 1;                           		// 0x0018 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	float                                              m_fSpeedFactor;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fMaxAcceleration;                               		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fMaxDeceleration;                               		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fConversationStrength;                          		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bUseMasterBone : 1;                             		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       m_nmMasterBoneName;                               		// 0x0030 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             m_anTargetBones;                                  		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFace.MorphFeature
// 0x000C
struct FMorphFeature
{
	struct FName                                       sFeatureName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Offset;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFace.OffsetBonePos
// 0x0014
struct FOffsetBonePos
{
	struct FName                                       nName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     vPos;                                             		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFace.BioDummyRenderCommandFence
// 0x0004
struct FBioDummyRenderCommandFence
{
	int                                                nDummy;                                           		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SFXGame.BioMorphUtility.TextureData
// 0x000C
struct FTextureData
{
	struct FName                                       m_nParamName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture*                                    m_oTexture;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.ScalarData
// 0x000C
struct FScalarData
{
	struct FName                                       m_nParamName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_fScalarValue;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.HairComponent
// 0x0048
struct FHairComponent
{
	struct FString                                     StyleName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MeshName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               HairMesh;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     ScalpMorphName;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ScalpMorphWeight;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      HairType;                                         		// 0x002C (0x0001) [0x0000000000000000]              
	TArray< struct FTextureData >                      m_aHairTextures;                                  		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScalarData >                       m_aHairScalars;                                   		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.HairData
// 0x0024
struct FHairData
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HairMorphSpecMaskName;                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FHairComponent >                    HairComponents;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialComponent
// 0x0040
struct FMaterialComponent
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Panel;                                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ParameterName;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Params;                                           		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialGroup
// 0x0018
struct FMaterialGroup
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialComponent >                Components;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialPanel
// 0x0018
struct FMaterialPanel
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialGroup >                    Groups;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialData
// 0x000C
struct FMaterialData
{
	TArray< struct FMaterialPanel >                    Panels;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.AdditionalData
// 0x0024
struct FAdditionalData
{
	struct FHairData                                   Hair;                                             		// 0x0000 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.BaseSliders
// 0x0010
struct FBaseSliders
{
	struct FString                                     m_sSliderName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fValue;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.BaseHeads
// 0x000C
struct FBaseHeads
{
	TArray< struct FBaseSliders >                      m_fBaseHeadSettings;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.SliderModifierSliderData
// 0x001C
struct FSliderModifierSliderData
{
	TArray< class UBioMorphFaceFESliderBase* >         m_aoSliderData;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    m_fRandWeights;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fRandWeightsTotal;                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.SliderModifier
// 0x0030
struct FSliderModifier
{
	struct FString                                     m_sName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    m_aRandMin;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    m_aRandMax;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSliderModifierSliderData >         m_aSliders;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.Slider
// 0x0054
struct FSlider
{
	struct FString                                     m_sName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_iValue;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bNotched : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_iSteps;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_iStringRef;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_iDescriptionStringRef;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< class UBioMorphFaceFESliderBase* >         m_aoSliderData;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    m_fRandWeights;                                   		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fRandWeightsTotal;                              		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_fRandMin;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              m_fRandMax;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< struct FSliderModifier >                   m_aSliderModifiers;                               		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.Category
// 0x0024
struct FCategory
{
	struct FString                                     m_sCatName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iCatIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_iStringRef;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_iDescriptionStringRef;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< struct FSlider >                           m_aoSliders;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.FaceData
// 0x0030
struct FFaceData
{
	struct FAdditionalData                             m_pAdditionalParams;                              		// 0x0000 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCategory >                         m_oCategories;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceSaveObject.VertexBuffer
// 0x000C
struct FVertexBuffer
{
	TArray< struct FVector >                           m_vPosition;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioParticleModuleLocationAttachedMesh.EmissionAreaWeight
// 0x000C
struct FEmissionAreaWeight
{
	struct FName                                       AreaTag;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPowerManager.PowerSaveInfo
// 0x001C
struct FPowerSaveInfo
{
	struct FName                                       PowerName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              CurrentRank;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     PowerClassName;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WheelDisplayIndex;                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGame.HenchPackageMap
// 0x0018
struct FHenchPackageMap
{
	struct FString                                     HenchTag;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     PackageName;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXGame.TimeDilationStruct
// 0x0020
struct FTimeDilationStruct
{
	struct FName                                       Identifier;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FInterpCurveFloat                           Curve;                                            		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TotalTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioTalentContainer.BioTalentStaticData
// 0x0018
struct FBioTalentStaticData
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioTalentContainer.BioTalentStaticData.m_TalentName
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0004 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioTalentContainer.BioTalentStaticData.m_TalentDesc
	int                                                m_MaxRank;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sUnlockDetails;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioTalentContainer.BioTalentDynamicData
// 0x0040
struct FBioTalentDynamicData
{
	unsigned long                                      m_IsUnlocked : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_CurrentRank;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_AvailableRank;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_MaxRank;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_RankIconArray;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x001C (0x000C) UNKNOWN PROPERTY: ArrayProperty SFXGame.BioTalentContainer.BioTalentDynamicData.m_RankNameArray
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0028 (0x000C) UNKNOWN PROPERTY: ArrayProperty SFXGame.BioTalentContainer.BioTalentDynamicData.m_RankDescArray
	unsigned char                                      UnknownData02[ 0xC ];                             		// 0x0034 (0x000C) UNKNOWN PROPERTY: ArrayProperty SFXGame.BioTalentContainer.BioTalentDynamicData.m_RankUnlockBlurbArray
};

// ScriptStruct SFXGame.BioTalentContainer.BioTalentDebugData
// 0x000C
struct FBioTalentDebugData
{
	int                                                m_ID;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_Rank;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioTalentContainer.BioTalentDebugData.m_Name
};

// ScriptStruct SFXGame.BioSaveGame.BioSimpleTalentSave
// 0x0008
struct FBioSimpleTalentSave
{
	int                                                m_TalentID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_Ranks;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSaveGame.BioComplexTalentSave
// 0x0030
struct FBioComplexTalentSave
{
	int                                                m_TalentID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_Ranks;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_MaxRank;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_LevelOffset;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_LevelsPerRank;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_VisualOrder;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_PrereqTalentIDArray;                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_PrereqTalentRankArray;                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioSaveGame.PlayerInfoEx
// 0x0034
struct FPlayerInfoEx
{
	class UClass*                                      CharacterClass;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFemale : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     FirstName;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Origin;                                           		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      Notoriety;                                        		// 0x0015 (0x0001) [0x0000000000000000]              
	class UBioMorphFace*                               MorphHead;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     BonusTalentClass;                                 		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FaceCode;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXLoadoutData.ShieldLoadout
// 0x0014
struct FShieldLoadout
{
	class UClass*                                      Shields;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ShieldLevelRange;                                 		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   MaxShields;                                       		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXLoadoutData.PowerLevelUp
// 0x000C
struct FPowerLevelUp
{
	class UClass*                                      PowerClass;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rank;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      EvolvedPowerClass;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPhysicsSounds.BioPhysicsSoundsInfo
// 0x000C
struct FBioPhysicsSoundsInfo
{
	int                                                nPriority;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             oAudioComp;                                       		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              fLastTimePlayed;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlanet.PlanetSun
// 0x0014
struct FPlanetSun
{
	struct FLinearColor                                SunColor;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              Brightness;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXWeapon.ZoomSnapInfo
// 0x0010
struct FZoomSnapInfo
{
	unsigned char                                      AimNode;                                          		// 0x0000 (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              OuterSnapAngle;                                   		// 0x0004 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              InnerSnapAngle;                                   		// 0x0008 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SnapOffsetMag;                                    		// 0x000C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
};

// ScriptStruct SFXGame.SFXCameraNativeBase.SFXCameraNativeBaseTraceInfo
// 0x0024
struct FSFXCameraNativeBaseTraceInfo
{
	struct FVector                                     m_vCollVectorLocation;                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vCollVectorNormal;                              		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      m_oCollVectorActor;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bCollDetected : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCollisionDirty : 1;                            		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDebugDraw : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	struct FColor                                      m_clrDebugDraw;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeapon.CoverLeanPosition
// 0x001C
struct FCoverLeanPosition
{
	struct FVector                                     Offset;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      Direction;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x000D (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            WeaponTypes;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXWeapon.TracerSpec
// 0x0020
struct FTracerSpec
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PSTemplate;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scale3D;                                          		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              AccelRate;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Speed;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeed;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_MessageBox.BioMessageBoxOptionalParams
// 0x001A
struct FBioMessageBoxOptionalParams
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_MessageBox.BioMessageBoxOptionalParams.srAText
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0004 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_MessageBox.BioMessageBoxOptionalParams.srBText
	unsigned long                                      bNoFade : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      nIconSet;                                         		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bModal : 1;                                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bForcePlayersOnly : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_SkinType;                                       		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_TextAlign;                                      		// 0x0019 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerSquad.SquadTargetData
// 0x0020
struct FSquadTargetData
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     vLocation;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	int                                                nActionIcon;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nSquadIcon;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActive : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              fTimeOut;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPowerManager.PowerReservation
// 0x0008
struct FPowerReservation
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fTimeUntilExpiry;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPowerVFXAppearance.PowerVFXData
// 0x0008
struct FPowerVFXData
{
	unsigned long                                      bUsePowerTime : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UBioVFXTemplate*                             m_EffectTemplate;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioProjectile.BioProjectilePhysicsCollisionContext
// 0x001C
struct FBioProjectilePhysicsCollisionContext
{
	class AActor*                                      m_oActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vHitLocation;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vHitNormal;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXLegacyData.SFXLegacyTalentSave
// 0x0008
struct FSFXLegacyTalentSave
{
	int                                                m_TalentID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_Ranks;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSaveGame.SaveGameRecord
// 0x006C
struct FSaveGameRecord
{
	struct FString                                     m_filename;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_saveName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_saveNameShort;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_sec;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_Min;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_hr;                                             		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_day;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_mo;                                             		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_year;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_secPlayed;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_minPlayed;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_hrPlayed;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FString                                     m_charId;                                         		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_ClassId;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                m_CharcterLevel;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bCanDelete : 1;                                 		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_DeviceId;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                m_SaveGameNumber;                                 		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsAutoSave : 1;                                		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsQuickSave : 1;                               		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioSeqAct_ActionStation.BioActionStationGestureData
// 0x0028
struct FBioActionStationGestureData
{
	struct FName                                       nmPoseSet;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPoseAnim;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionSet;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionAnim;                                 		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmEnumName;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSeqAct_ActionStation.ActionStationOffsetData
// 0x0020
struct FActionStationOffsetData
{
	struct FName                                       nmAnimSet;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vOffset;                                          		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    rRotation;                                        		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSeqAct_InteractProperty.BioPropertyMap
// 0x0010
struct FBioPropertyMap
{
	struct FName                                       sDisplayName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       sFuncPropName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSeqAct_InteractProperty.BioPropertyInfo
// 0x0015
struct FBioPropertyInfo
{
	struct FName                                       PropertyName;                                     		// 0x0000 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FName                                       ActualPropertyName;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bDisplayProperty : 1;                             		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOldDisplayProperty : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      ePropertyType;                                    		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioWorldInfo.SubPageState
// 0x0006
struct FSubPageState
{
	int                                                nPadding;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Page;                                             		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      State;                                            		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.PlotStreamingElement
// 0x0010
struct FPlotStreamingElement
{
	struct FName                                       ChunkName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Conditional;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFallback : 1;                                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.PlotStreamingSet
// 0x0014
struct FPlotStreamingSet
{
	struct FName                                       VirtualChunkName;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPlotStreamingElement >             Elements;                                         		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioWorldInfo.WorldStreamingState
// 0x000C
struct FWorldStreamingState
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Enabled : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.VFXTemplatePoolSizeSpec
// 0x000C
struct FVFXTemplatePoolSizeSpec
{
	class UBioVFXTemplate*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxPoolSize;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinPoolSize;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.VFXListNode
// 0x0010
struct FVFXListNode
{
	class ABioVisualEffect*                            Effect;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NextNode;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PrevNode;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      ValidNode : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioWorldInfo.EffectsMaterialPriority
// 0x000C
struct FEffectsMaterialPriority
{
	struct FName                                       EffectsMaterial;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Priority;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.WorldEnvironmentEffect
// 0x0028
struct FWorldEnvironmentEffect
{
	class ABioVisualEffect*                            m_Effect;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     m_vOffset;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              m_fBlendDuration;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fBlendTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fDesiredIntensity;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fCurrentIntensity;                              		// 0x001C (0x0004) [0x0000000000000000]              
	class AController*                                 m_TargetController;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAttachToCamera : 1;                            		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioWorldInfo.BoughtVFXListEnds
// 0x0008
struct FBoughtVFXListEnds
{
	int                                                HeadIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TailIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameChoiceGUIData.SFXChoiceEntry
// 0x0078
struct FSFXChoiceEntry
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXGameChoiceGUIData.SFXChoiceEntry.srChoiceName
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0004 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXGameChoiceGUIData.SFXChoiceEntry.srChoiceTitle
	class UTexture2D*                                  oChoiceImage;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x000C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXGameChoiceGUIData.SFXChoiceEntry.srChoiceImageTitle
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXGameChoiceGUIData.SFXChoiceEntry.srChoiceDescription
	int                                                nOptionalPaneItemValue;                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ChoiceColor;                                      		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                nChoiceID;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eResource;                                        		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0024 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXGameChoiceGUIData.SFXChoiceEntry.srActionText
	unsigned long                                      bDefaultSelection : 1;                            		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FSFXTokenMapping >                  m_mapTokenIDToActual;                             		// 0x002C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bDisabled : 1;                                    		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNested : 1;                                      		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOptionalPaneHideCost : 1;                        		// 0x0038 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FString                                     sChoiceName;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sChoiceTitle;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sChoiceImageTitle;                                		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sChoiceDescription;                               		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sActionText;                                      		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioSeqData_DEBUGInfo.AvoidanceLocations
// 0x002C
struct FAvoidanceLocations
{
	struct FVector                                     vLoc;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vVel;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    rRot;                                             		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              fCollision;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fExtendedCollision;                               		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSeqData_DEBUGInfo.AvoidanceLocationsArray
// 0x0034
struct FAvoidanceLocationsArray
{
	struct FVector                                     vPawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vStearing;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     vAdjustPoint;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              fSearchDist;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	TArray< struct FAvoidanceLocations >               aoObsticals;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioSeqData_DEBUGInfo.LastCompletionRecords
// 0x0014
struct FLastCompletionRecords
{
	struct FName                                       nmAction;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTech;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                nReason;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSeqData_DEBUGInfo.LOSLinesRecord
// 0x001C
struct FLOSLinesRecord
{
	struct FVector                                     vStart;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vEnd;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      bSaw : 1;                                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnemy : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioSFHandler_AdditionalContent.DLCInfo_t
// 0x002C
struct FDLCInfo_t
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_AdditionalContent.DLCInfo_t.sDisplayName
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0004 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_AdditionalContent.DLCInfo_t.sDescription
	struct FString                                     sImageResource;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sImageResourceFrame;                              		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCreditsSection;                                  		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXPowerLevelUpHelper.NewPowerInfo
// 0x000C
struct FNewPowerInfo
{
	class UClass*                                      PowerClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CurrentRank;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                WheelDisplayIndex;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPower.RankInfo
// 0x0010
struct FRankInfo
{
	int                                                Icon;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXPower.RankInfo.Name
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0008 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXPower.RankInfo.Description
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x000C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXPower.RankInfo.unlockBlurb
};

// ScriptStruct SFXGame.SFXPower.UnlockRequirement
// 0x000C
struct FUnlockRequirement
{
	class UClass*                                      PowerClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Rank;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXPower.UnlockRequirement.CustomUnlockText
};

// ScriptStruct SFXGame.BioSFHandler_BrowserWheel.BWPageStruct
// 0x0011
struct FBWPageStruct
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_BrowserWheel.BWPageStruct.srLabel
	class UBioSFHandler*                               oHandler;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Credits.BioCreditsDetails
// 0x000C
struct FBioCreditsDetails
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0000 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_Credits.BioCreditsDetails.srHeading
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0004 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_Credits.BioCreditsDetails.srTitle
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0008 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_Credits.BioCreditsDetails.srNames
};

// ScriptStruct SFXGame.BioSFHandler_DataCodex.DataCodexEntryDetails
// 0x0018
struct FDataCodexEntryDetails
{
	int                                                nSectionID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUpdated : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    pEntry;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_DataCodex.CodexImageDetails
// 0x0014
struct FCodexImageDetails
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  oTexture;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_DesignerUI.BioDUIPulseDetails
// 0x0010
struct FBioDUIPulseDetails
{
	unsigned char                                      nElement;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              fHalfCycleTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fMinAlpha;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fCurCycle;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_DesignerUI.BioDUITimerDetails
// 0x0014
struct FBioDUITimerDetails
{
	float                                              fCurTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fEndTime;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fIntervalTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fNextInterval;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIncrementing : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIntervalTriggered : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCompleted : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRunning : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bActive : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFirstUpdate : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct SFXGame.BioSFHandler_DesignerUI.BioDUIElementStatus
// 0x0004
struct FBioDUIElementStatus
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFading : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioSFHandler_Journal.GuiQuestInfo
// 0x0018
struct FGuiQuestInfo
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nAdded;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bComplete : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdated : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.SFXSaveGame.SaveTimeStamp
// 0x0010
struct FSaveTimeStamp
{
	int                                                SecondsSinceMidnight;                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Day;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Month;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Year;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_Load.SaveGUICareerRecord
// 0x0040
struct FSaveGUICareerRecord
{
	struct FString                                     CareerName;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FirstName;                                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Origin;                                           		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Notoriety;                                        		// 0x0019 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ClassName;                                        		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSaveTimeStamp                              CreationDate;                                     		// 0x0028 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bActiveCareer : 1;                                		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                DeviceID;                                         		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.DependentDLCRecord
// 0x0010
struct FDependentDLCRecord
{
	int                                                ModuleID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.LevelSaveRecord
// 0x0010
struct FLevelSaveRecord
{
	struct FString                                     LevelName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.StreamingStateSaveRecord
// 0x0010
struct FStreamingStateSaveRecord
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bActive : 1;                                      		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.KismetBoolSaveRecord
// 0x0014
struct FKismetBoolSaveRecord
{
	struct FGuid                                       BoolGUID;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bValue : 1;                                       		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.DoorSaveRecord
// 0x0012
struct FDoorSaveRecord
{
	struct FGuid                                       DoorGUID;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CurrentState;                                     		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      OldState;                                         		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PowerSaveRecord
// 0x0020
struct FPowerSaveRecord
{
	struct FString                                     PowerName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CurrentRank;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PowerClassName;                                   		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                WheelDisplayIndex;                                		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.HenchmanSaveRecord
// 0x0074
struct FHenchmanSaveRecord
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPowerSaveRecord >                  Powers;                                           		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CharacterLevel;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoints;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LoadoutWeapons[ 0x6 ];                            		// 0x0020 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MappedPower;                                      		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.ME1PlotTableRecord
// 0x0024
struct FME1PlotTableRecord
{
	TArray< int >                                      BoolVariables;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      IntVariables;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    FloatVariables;                                   		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.GalaxyMapSaveRecord.PlanetSaveRecord
// 0x0014
struct FPlanetSaveRecord
{
	int                                                PlanetID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bVisited : 1;                                     		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FVector2D >                         Probes;                                           		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.GalaxyMapSaveRecord
// 0x000C
struct FGalaxyMapSaveRecord
{
	TArray< struct FPlanetSaveRecord >                 Planets;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.PlotQuest
// 0x0014
struct FPlotQuest
{
	int                                                QuestCounter;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bQuestUpdated : 1;                                		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< int >                                      History;                                          		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.PlotCodex.PlotCodexPage
// 0x0008
struct FPlotCodexPage
{
	int                                                Page;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNew : 1;                                         		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.PlotCodex
// 0x000C
struct FPlotCodex
{
	TArray< struct FPlotCodexPage >                    Pages;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord
// 0x0058
struct FPlotTableSaveRecord
{
	TArray< int >                                      BoolVariables;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      IntVariables;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    FloatVariables;                                   		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                QuestProgressCounter;                             		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPlotQuest >                        QuestProgress;                                    		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      QuestIDs;                                         		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPlotCodex >                        CodexEntries;                                     		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      CodexIDs;                                         		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.MorphFeatureSaveRecord
// 0x0010
struct FMorphFeatureSaveRecord
{
	struct FString                                     Feature;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Offset;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.OffsetBoneSaveRecord
// 0x0018
struct FOffsetBoneSaveRecord
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     Offset;                                           		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.ScalarParameterSaveRecord
// 0x0010
struct FScalarParameterSaveRecord
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.VectorParameterSaveRecord
// 0x001C
struct FVectorParameterSaveRecord
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                Value;                                            		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.TextureParameterSaveRecord
// 0x0018
struct FTextureParameterSaveRecord
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Texture;                                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord
// 0x0084
struct FMorphHeadSaveRecord
{
	struct FString                                     HairMesh;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           AccessoryMeshes;                                  		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMorphFeatureSaveRecord >           MorphFeatures;                                    		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FOffsetBoneSaveRecord >             OffsetBones;                                      		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector >                           LOD0Vertices;                                     		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector >                           LOD1Vertices;                                     		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector >                           LOD2Vertices;                                     		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector >                           LOD3Vertices;                                     		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FScalarParameterSaveRecord >        ScalarParameters;                                 		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVectorParameterSaveRecord >        VectorParameters;                                 		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTextureParameterSaveRecord >       TextureParameters;                                		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.AppearanceSaveRecord
// 0x00C0
struct FAppearanceSaveRecord
{
	unsigned char                                      CombatAppearance;                                 		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                CasualID;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FullBodyID;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TorsoID;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShoulderID;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ArmID;                                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LegID;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpecID;                                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Tint1ID;                                          		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Tint2ID;                                          		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Tint3ID;                                          		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PatternID;                                        		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PatternColorID;                                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HelmetID;                                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHasMorphHead : 1;                                		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FMorphHeadSaveRecord                        MorphHead;                                        		// 0x003C (0x0084) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.WeaponSaveRecord
// 0x0024
struct FWeaponSaveRecord
{
	struct FString                                     WeaponClassName;                                  		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AmmoUsedCount;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TotalAmmo;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLastWeapon : 1;                                  		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCurrentWeapon : 1;                               		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FString                                     AmmoPowerName;                                    		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.HotKeySaveRecord
// 0x0010
struct FHotKeySaveRecord
{
	struct FString                                     PawnName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PowerID;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlayerSaveRecord
// 0x01B4
struct FPlayerSaveRecord
{
	unsigned long                                      bIsFemale : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     PlayerClassName;                                  		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      PlayerClass;                                      		// 0x0010 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	int                                                srClassFriendlyName;                              		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentXP;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     FirstName;                                        		// 0x0020 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                LastName;                                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Origin;                                           		// 0x0030 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Notoriety;                                        		// 0x0031 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoints;                                     		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MappedPower1;                                     		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MappedPower2;                                     		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MappedPower3;                                     		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FAppearanceSaveRecord                       Appearance;                                       		// 0x005C (0x00C0) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPowerSaveRecord >                  Powers;                                           		// 0x011C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FWeaponSaveRecord >                 Weapons;                                          		// 0x0128 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LoadoutWeapons[ 0x6 ];                            		// 0x0134 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FHotKeySaveRecord >                 HotKeys;                                          		// 0x017C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Credits;                                          		// 0x0188 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Medigel;                                          		// 0x018C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Eezo;                                             		// 0x0190 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Iridium;                                          		// 0x0194 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Palladium;                                        		// 0x0198 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Platinum;                                         		// 0x019C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Probes;                                           		// 0x01A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentFuel;                                      		// 0x01A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     FaceCode;                                         		// 0x01A8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.MassEffectGuiManager.BioMessageBoxData
// 0x003C
struct FBioMessageBoxData
{
	struct FName                                       m_nmName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nPriority;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class UObject*                                     m_pCallbackObject;                                		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       m_nmCallbackFunction;                             		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0018 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.MassEffectGuiManager.BioMessageBoxData.m_srMessage
	struct FBioMessageBoxOptionalParams                m_stParams;                                       		// 0x001C (0x001C) [0x0000000000000000]              
	int                                                m_nContext;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameChoiceGUIData_PRCShop.SFXChoiceEntryNoStrRef
// 0x0064
struct FSFXChoiceEntryNoStrRef
{
	struct FString                                     sChoiceName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sChoiceTitle;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  oChoiceImage;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     sChoiceImageTitle;                                		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sChoiceDescription;                               		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nOptionalPaneItemValue;                           		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ChoiceColor;                                      		// 0x0038 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                nChoiceID;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eResource;                                        		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     sActionText;                                      		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bDefaultSelection : 1;                            		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FSFXTokenMapping >                  m_mapTokenIDToActual;                             		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bDisabled : 1;                                    		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNested : 1;                                      		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_NewCharacter.BonusTalentData
// 0x0024
struct FBonusTalentData
{
	struct FString                                     PowerClassName;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AchievementId;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_NewCharacter.BonusTalentData.srChoiceName
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0014 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_NewCharacter.BonusTalentData.srChoiceTitle
	class UTexture2D*                                  oChoiceImage;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x001C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_NewCharacter.BonusTalentData.srChoiceDescription
	unsigned long                                      bMorinthSpecialCase : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioSFHandler_PartySelection.PartySelectMemberInfo
// 0x0060
struct FPartySelectMemberInfo
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       LoadoutTag;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                StrName;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ImageIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                KismetIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FName                                       DiscoveredLabel;                                  		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       AvailableLabel;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       InPartyLabel;                                     		// 0x002C (0x0008) [0x0000000000000000]              
	struct FName                                       IsLoyalLabel;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	struct FName                                       IsSpecializedLabel;                               		// 0x003C (0x0008) [0x0000000020000000]              ( CPF_Deprecated )
	struct FName                                       OldLoyaltyLabel;                                  		// 0x0044 (0x0008) [0x0000000000000000]              
	struct FName                                       AppearanceLabel;                                  		// 0x004C (0x0008) [0x0000000000000000]              
	int                                                DeadIndex;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                StrDossierText;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                StrSpecialty;                                     		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PartySelection.AdditionalAppearanceInfo
// 0x0010
struct FAdditionalAppearanceInfo
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                AddAppearance;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PlotFlag;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PartySelection.PartySelectDynamicInfo
// 0x0034
struct FPartySelectDynamicInfo
{
	int                                                Abilities[ 0x5 ];                                 		// 0x0000 (0x0014) [0x0000000000000000]              
	int                                                Ranks[ 0x5 ];                                     		// 0x0014 (0x0014) [0x0000000000000000]              
	int                                                Weapons[ 0x3 ];                                   		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.ModeAliasPair
// 0x000D
struct FModeAliasPair
{
	struct FString                                     Alias;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      GameMode;                                         		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.SubordinateDesc
// 0x0007(0x0014 - 0x000D)
struct FSubordinateDesc : FModeAliasPair
{
	unsigned long                                      bAllGameModes : 1;                                		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.GuiBind
// 0x005F(0x006C - 0x000D)
struct FGuiBind : FModeAliasPair
{
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioSFHandler_PCOptions.GuiBind.Name
	unsigned long                                      bCategory : 1;                                    		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FKeyBind                                    Keys[ 0x2 ];                                      		// 0x0018 (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     KeysLocName[ 0x2 ];                               		// 0x0048 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSubordinateDesc >                  Subordinates;                                     		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.NonBindableKeyDefinition
// 0x0018
struct FNonBindableKeyDefinition
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      Control : 1;                                      		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Shift : 1;                                        		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Alt : 1;                                          		// 0x0014 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      ModifierIndependent : 1;                          		// 0x0014 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFResources.BioSFSoundAssetResource
// 0x0010
struct FBioSFSoundAssetResource
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 StartEvent;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 StopEvent;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSkelControl_TurretConstrained.TurretConstraintData
// 0x000C
struct FTurretConstraintData
{
	int                                                PitchConstraint;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YawConstraint;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RollConstraint;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioStage.BioStageCameraCustom
// 0x002C
struct FBioStageCameraCustom
{
	struct FString                                     m_sCameraName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fCameraHeightDelta;                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fCameraPitchDelta;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraYawDelta;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraFOVDelta;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraNearPlaneDelta;                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fCameraFocusInnerRadiusDelta;                   		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraFocusDistanceDelta;                      		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bNewHeightAdjust : 1;                           		// 0x0028 (0x0004) [0x0000000020000000] [0x00000001] ( CPF_Deprecated )
	unsigned long                                      m_bDisableHeightAdjust : 1;                       		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDisableListenerAdjust : 1;                     		// 0x0028 (0x0004) [0x0000000020000000] [0x00000004] ( CPF_Deprecated )
};

// ScriptStruct SFXGame.BioStageType.BioStageCamera
// 0x001C
struct FBioStageCamera
{
	struct FName                                       sCameraTag;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFov;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fNearPlane;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FBioStageDOFData                            tDOFData;                                         		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioTalentImporter.BioSpecializationData
// 0x0010
struct FBioSpecializationData
{
	int                                                m_bonusID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_replaceTalentID;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioTalentImporter.BioSpecializationData.m_LocalizedName
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x000C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.BioTalentImporter.BioSpecializationData.m_LocalizedDesc
};

// ScriptStruct SFXGame.BioTierManager.TierDetails_t
// 0x0014
struct FTierDetails_t
{
	struct FName                                       TierName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsEnabled : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsGlobal : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsFloor : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                Priority;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioTimedActivity.TwitchRec
// 0x0008
struct FTwitchRec
{
	int                                                nTwitchAnim;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDelay;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioTimerList.BioTimer
// 0x0020
struct FBioTimer
{
	struct FScriptDelegate                             OnTimer;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UObject*                                     Params;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fTickTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     sTimerName;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioTriggerStream.BioStreamingState
// 0x004C
struct FBioStreamingState
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StateDescription;                                 		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       InChunkName;                                      		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ColorChunks : 1;                                  		// 0x001C (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	TArray< struct FName >                             VisibleChunkNames;                                		// 0x0020 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             VisibleSoonChunkNames;                            		// 0x002C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             LoadChunkNames;                                   		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DesignFudget;                                     		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArtFudget;                                        		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioUIWorld.AppliedVFXPair
// 0x0008
struct FAppliedVFXPair
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ABioVisualEffect*                            Effect;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioVehicleBehaviorBase.BioVehicleWeaponInfo
// 0x0010
struct FBioVehicleWeaponInfo
{
	int                                                nTurretIndex;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bClampToTurret : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fTurretYawHalfAngleInDeg;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fTurretPitchHalfAngleInDeg;                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioVehicleTrackSet.TrackParticleSystem
// 0x0008
struct FTrackParticleSystem
{
	class UPhysicalMaterial*                           oPhysMat;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             oParticleSystem;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioVisualEffectTrack.BioVisualEffectTrackKey
// 0x000C
struct FBioVisualEffectTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class ABioVisualEffect*                            m_Effect;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioWorldInteractionType.ActivityRecord
// 0x0030
struct FActivityRecord
{
	struct FName                                       m_nmActivityName;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          m_oMaleAnimations;                                		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UAnimSet* >                          m_oFemaleAnimations;                              		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   m_oActivitySoundCue;                              		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    m_faActivityTwitchWeighting;                      		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioWorldSaveObject.LevelLookup
// 0x0010
struct FLevelLookup
{
	struct FString                                     m_Name;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioLevelSaveObject*                         m_Save;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.CovGoal_AvoidEnemies.EnemyData
// 0x0014
struct FEnemyData
{
	class APawn*                                       Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     Direction;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.CovGoal_Enemies.ValidEnemyCacheDatum
// 0x000C
struct FValidEnemyCacheDatum
{
	class ABioPawn*                                    EnemyPawn;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FCoverInfo                                  EnemyCover;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAI_Henchman.HenchmanOrder
// 0x0024
struct FHenchmanOrder
{
	unsigned char                                      eOrderType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	class AActor*                                      oTargetActor;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     vTargetLocation;                                  		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FName                                       nmPower;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	class ASFXWeapon*                                  oWeapon;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bInstantOrder : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExecutingOrder : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPowerUseIsInstant : 1;                           		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXConvAuditionHelper.BioVOActorType
// 0x0018
struct FBioVOActorType
{
	struct FString                                     sTag;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sActorType;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXConvAuditionHelper.BioScrubFaceFXInfo
// 0x0028
struct FBioScrubFaceFXInfo
{
	class ABioPawn*                                    pPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UFaceFXAsset*                                pAsset;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UFaceFXAnimSet*                              pAnimSet;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     sAnimName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fAnimPos;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDirty : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	class UWwiseBaseSoundObject*                       pVOSound;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fLineLength;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXConvAuditionHelper.BioScrubbingCamData
// 0x002C
struct FBioScrubbingCamData
{
	struct FVector                                     vCamPos;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rCamRot;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              fFov;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fNearPlane;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fAspectRatio;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FName                                       nmStageCam;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXConvAuditionHelper.BioVOActorData
// 0x00F0
struct FBioVOActorData
{
	class AActor*                                      pActor;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSpawned : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     vPreAudPos;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rPreAudRot;                                       		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     vAudInitPos;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rAudInitRot;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	struct FName                                       nmAudInitNode;                                    		// 0x0038 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAudInitPose;                                    		// 0x0040 (0x0008) [0x0000000000000000]              
	struct FBioConvLightingData                        PreAuditionLightingData;                          		// 0x0048 (0x0044) [0x0000000000000000]              
	struct FBioConvLightingData                        LineInitialLightingData;                          		// 0x008C (0x0044) [0x0000000000000000]              
	struct FMap_Mirror                                 mapAudInitProps;                                  		// 0x00D0 (0x0014) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     sCollidesWith;                                    		// 0x00E4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXConvAuditionHelper.BioTrackInstPair
// 0x0008
struct FBioTrackInstPair
{
	class UBioInterpTrack*                             pTrack;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UBioInterpTrackInst*                         pInst;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPawn.VisualEffect
// 0x0008
struct FVisualEffect
{
	class UBioVFXTemplate*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class ABioVisualEffect*                            Effect;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXEngine.DynamicLoadInfo
// 0x001C
struct FDynamicLoadInfo
{
	struct FString                                     ObjectName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       SeekFreePackageName;                              		// 0x000C (0x0008) [0x0000000000000000]              
	class UObject*                                     CachedObjectHandle;                               		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UObject*                                     LoadedLinkerRoot;                                 		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFXGame.SFXEngine.PackageRemapInfo
// 0x0010
struct FPackageRemapInfo
{
	struct FName                                       PackageName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       SeekFreePackageName;                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXEngine.BlazeDataStore
// 0x0020
struct FBlazeDataStore
{
	int                                                DaysSinceRegistration;                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            LoginInfo;                                        		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            PersonaID;                                        		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bNucleusRefused : 1;                              		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNucleusSuccessful : 1;                           		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCerberusRefused : 1;                             		// 0x001C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAutoLogin : 1;                                   		// 0x001C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bDirty : 1;                                       		// 0x001C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGameChoiceGUIData_Research.TechData
// 0x0114
struct FTechData
{
	int                                                TechId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSFXChoiceEntry                             ChoiceEntry;                                      		// 0x0004 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       PlotName;                                         		// 0x007C (0x0008) [0x0000000000000000]              
	int                                                PlotID;                                           		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                TreasureId;                                       		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                UnlockId;                                         		// 0x008C (0x0004) [0x0000000000000000]              
	struct FSTech                                      stTech;                                           		// 0x0090 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSTreasure                                  stTreasure;                                       		// 0x00D0 (0x0038) [0x0000000000000000]              
	int                                                nContextId;                                       		// 0x0108 (0x0004) [0x0000000000000000]              
	int                                                RMode;                                            		// 0x010C (0x0004) [0x0000000000000000]              
	int                                                DisableId;                                        		// 0x0110 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameInterpTrackWwiseMicLock.BioMicLockData
// 0x0010
struct FBioMicLockData
{
	struct FName                                       m_nmFindActor;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eFindActorMode;                                 		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bLock : 1;                                      		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGameModeManager.LocalizedKeyName
// 0x000C
struct FLocalizedKeyName
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXGameModeManager.LocalizedKeyName.Name
};

// ScriptStruct SFXGame.SFXInterpTrackAttachCrustEffect.SFXAttachCrustEffectTrackData
// 0x0008
struct FSFXAttachCrustEffectTrackData
{
	unsigned long                                      m_bAttach : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              m_fLifeTime;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackBlackScreen.SFXBlackScreenTrackData
// 0x0008
struct FSFXBlackScreenTrackData
{
	unsigned char                                      BlackScreenState;                                 		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlaceHolder;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXInterpTrackLightEnvQuality.SFXLightEnvTrackData
// 0x0008
struct FSFXLightEnvTrackData
{
	unsigned char                                      Quality;                                          		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlaceHolder;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXInterpTrackMovieBase.SFXMoviePlayStateData
// 0x0008
struct FSFXMoviePlayStateData
{
	unsigned char                                      m_eState;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlaceHolder;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXInterpTrackPlayFaceOnlyVO.BioFOVOTrackData
// 0x0018
struct FBioFOVOTrackData
{
	class UBioConversation*                            pConversation;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nLineStrRef;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForceHideSubtitles : 1;                          		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fPadLineLength;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXInterpTrackPlayFaceOnlyVO.BioFOVOTrackData.srActorNameOverride
	unsigned long                                      bPlaySoundOnly : 1;                               		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisableDelayUntilPreload : 1;                    		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAllowInConversation : 1;                         		// 0x0014 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackSetEnvEffectIntensity.SFXEnvEffectIntensityTrackData
// 0x0008
struct FSFXEnvEffectIntensityTrackData
{
	float                                              m_fIntensity;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fBlendTime;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackSetPlayerNearClipPlane.SFXNearClipTrackData
// 0x0008
struct FSFXNearClipTrackData
{
	unsigned long                                      m_bUseDefaultValue : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              m_fValue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackSetWeaponInstant.SFXWeaponClassData
// 0x0004
struct FSFXWeaponClassData
{
	class UClass*                                      cWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackToggleBase.SFXToggleTrackData
// 0x0004
struct FSFXToggleTrackData
{
	unsigned long                                      m_bToggle : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bEnable : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolTracers
// 0x0048
struct FSFXObjectPoolTracers
{
	class UStaticMesh*                                 Mesh;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             Template;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class AProjectile*                                 Tracers[ 0xF ];                                   		// 0x0008 (0x003C) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolProjectiles
// 0x0014
struct FSFXObjectPoolProjectiles
{
	class UClass*                                      ProjectileClass;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class AProjectile* >                       Projectiles;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NextIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolDroppedAmmos
// 0x0014
struct FSFXObjectPoolDroppedAmmos
{
	class UClass*                                      DroppedAmmoClass;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class ADroppedPickup* >                    DroppedAmmos;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NextIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolImpactPSCs
// 0x0044
struct FSFXObjectPoolImpactPSCs
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSysComponents[ 0xF ];                            		// 0x0004 (0x003C) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                NextIdx;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolPSCs
// 0x0014
struct FSFXObjectPoolPSCs
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class UParticleSystemComponent* >          PSysComponents;                                   		// 0x0004 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	int                                                NextIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolEmitters
// 0x0014
struct FSFXObjectPoolEmitters
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class AEmitter* >                          Emitters;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NextIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolPathConstraintCaches
// 0x0010
struct FSFXObjectPoolPathConstraintCaches
{
	int                                                ListIdx;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UPathConstraint*                             List[ 0x3 ];                                      		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPath_AvoidFireFromCover.EnemyCoverInfo
// 0x000C
struct FEnemyCoverInfo
{
	class ABioPawn*                                    Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FCoverInfo                                  Cover;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.LoadoutWeaponInfo
// 0x001C
struct FLoadoutWeaponInfo
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       UnlockPlotId;                                     		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Rating;                                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNotRegularWeaponGUI : 1;                         		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPawn_Henchman.HenchmanInfoStruct
// 0x0034
struct FHenchmanInfoStruct
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Tag;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXPawn_Henchman.HenchmanInfoStruct.PrettyName
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0014 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXPawn_Henchman.HenchmanInfoStruct.AlternatePrettyName
	struct FName                                       AlternateHenchNamePlotFlag;                       		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                HenchAcquiredPlotID;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                HenchInSquadPlotID;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     HenchmanImage;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXPawn_Player.ScarInfo
// 0x0060
struct FScarInfo
{
	struct FVector2D                                   Threshold;                                        		// 0x0000 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     Emissive;                                         		// 0x0008 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Normal;                                           		// 0x0014 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     EyeEmissive;                                      		// 0x0020 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FemaleEmissive;                                   		// 0x002C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FemaleNormal;                                     		// 0x0038 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FemaleEyeEmissive;                                		// 0x0044 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FLinearColor                                Color;                                            		// 0x0050 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelIcon
// 0x001C
struct FSFXPowerWheelIcon
{
	struct FString                                     sPath;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sID;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fBoundary;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelButtonIcon
// 0x0010
struct FSFXPowerWheelButtonIcon
{
	unsigned char                                      eIcon;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     sPath;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelIconPower
// 0x0064(0x0080 - 0x001C)
struct FSFXPowerWheelIconPower : FSFXPowerWheelIcon
{
	unsigned char                                      eState;                                           		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      eDesiredState;                                    		// 0x001D (0x0001) [0x0000000000000000]              
	class USFXPower*                                   pPower;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    pPawn;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSelected : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVisible : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDelayedFlash : 1;                                		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                nIcon;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nCooldownValue;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMapped : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sName;                                            		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmPowerName;                                      		// 0x0050 (0x0008) [0x0000000000000000]              
	unsigned long                                      bDragHover : 1;                                   		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nPowerID;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      bQuickSlotIcon : 1;                               		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSFXPowerWheelButtonIcon                    oMappedIcon;                                      		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sMappedBGPath;                                    		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.PlotWeaponEditor
// 0x0014
struct FPlotWeaponEditor
{
	class UClass*                                      WeaponClass;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UnlockPlotId;                                     		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EquippedPlotId;                                   		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.PlotWeapon
// 0x001C
struct FPlotWeapon
{
	struct FString                                     WeaponClassName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       UnlockPlotId;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       EquippedPlotId;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.UnlockableWeaponClass
// 0x000C
struct FUnlockableWeaponClass
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UnlockPlotId;                                     		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.LoadoutInfo
// 0x0014
struct FLoadoutInfo
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< unsigned char >                            WeaponClasses;                                    		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.BonusWeaponInfo
// 0x000C
struct FBonusWeaponInfo
{
	unsigned char                                      WeaponClass;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       UnlockPlotName;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.SpecialWeaponInfo
// 0x0018
struct FSpecialWeaponInfo
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       HenchmanClassName;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       UnlockPlotName;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPRI.KillScore
// 0x0019
struct FKillScore
{
	struct FName                                       DamageClassName;                                  		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     Message;                                          		// 0x0008 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                Points;                                           		// 0x0014 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      GrinderAchievementId;                             		// 0x0018 (0x0001) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFXGame.SFXPRI.DamageRecordStruct
// 0x0008
struct FDamageRecordStruct
{
	class AController*                                 DamageCauser;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DamageDone;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPRI.ScoreEvent
// 0x0010
struct FScoreEvent
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ExpiryTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSeqAct_ResearchChoiceGUI.ResearchMenu
// 0x002C
struct FResearchMenu
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXSeqAct_ResearchChoiceGUI.ResearchMenu.srTitle
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0008 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXSeqAct_ResearchChoiceGUI.ResearchMenu.srSubtitle
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x000C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXSeqAct_ResearchChoiceGUI.ResearchMenu.srAboutLabel
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0010 (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXSeqAct_ResearchChoiceGUI.ResearchMenu.srAboutText
	struct FString                                     sImagePath;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTechData >                         m_ResearchChoices;                                		// 0x0020 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHudDmgIndicatorPaths
// 0x0018
struct FSFXHudDmgIndicatorPaths
{
	struct FString                                     _alpha;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     _visible;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDResistances
// 0x0014
struct FSFXHUDResistances
{
	unsigned long                                      bHasShield : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasArmour : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasBiotic : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHasHealth : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              fHealthPct;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fArmourPct;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fBioticPct;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fShieldPct;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDSquadMemberInfo
// 0x0094
struct FSFXHUDSquadMemberInfo
{
	struct FString                                     sPath;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIconImagePath;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ABioPawn*                                    pPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  pIcon;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	struct FSFXHUDResistances                          Resistances;                                      		// 0x0020 (0x0014) [0x0000000000000000]              
	struct FSFXHUDResistances                          DisplayedResistances;                             		// 0x0034 (0x0014) [0x0000000000000000]              
	float                                              fCooldown;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCooldownVisible : 1;                             		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sShieldPath;                                      		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sBioticPath;                                      		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sArmourPath;                                      		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sHealthPath;                                      		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPowerPath;                                       		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShieldVisible : 1;                               		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBioticVisible : 1;                               		// 0x008C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bArmourVisible : 1;                               		// 0x008C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHealthVisible : 1;                               		// 0x008C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bShieldDamage : 1;                                		// 0x008C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bBioticDamage : 1;                                		// 0x008C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bArmourDamage : 1;                                		// 0x008C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bHealthDamage : 1;                                		// 0x008C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bInvalidated : 1;                                 		// 0x008C (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bVisible : 1;                                     		// 0x008C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bUpdateResistance : 1;                            		// 0x008C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bUpdateHealth : 1;                                		// 0x008C (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bUpdatePower : 1;                                 		// 0x008C (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bUpdateIcon : 1;                                  		// 0x008C (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bDisplayVisible : 1;                              		// 0x008C (0x0004) [0x0000000000000000] [0x00004000] 
	float                                              fElapsedFullResistTime;                           		// 0x0090 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDTargetInfo
// 0x0034
struct FSFXHUDTargetInfo
{
	struct FSFXHUDResistances                          Resistances;                                      		// 0x0000 (0x0014) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatus;                                          		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bInteractive : 1;                                 		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHostile : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInRange : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                nStatusFlags;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_Save.SaveGUIAreaInfo
// 0x001C
struct FSaveGUIAreaInfo
{
	struct FString                                     AreaName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) UNKNOWN PROPERTY: StringRefProperty SFXGame.SFXSFHandler_Save.SaveGUIAreaInfo.AreaStrRef
	struct FString                                     ImageName;                                        		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSFHandler_Save.SaveGUIRecord
// 0x0025
struct FSaveGUIRecord
{
	class USFXSaveGame*                                SaveGame;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     FriendlyName;                                     		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  AreaImage;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ImagePath;                                        		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SaveIndex;                                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0024 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelIconWeapon
// 0x003C(0x0058 - 0x001C)
struct FSFXPowerWheelIconWeapon : FSFXPowerWheelIcon
{
	unsigned char                                      eWeaponState;                                     		// 0x001C (0x0001) [0x0000000000000000]              
	int                                                nWeaponIcon;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nAmmo;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bEquipped : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	class UClass*                                      oWeaponClass;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FString                                     sIconResource;                                    		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHenchIcon : 1;                                   		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXRadarElementData
// 0x0030
struct FSFXRadarElementData
{
	struct FVector                                     vActorLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vPosition;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                nSize;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocked : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eRadarType;                                       		// 0x0020 (0x0001) [0x0000000000000000]              
	int                                                nRelativeZ;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nID;                                              		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUpdate : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdateLock : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelPawnIndices
// 0x0024
struct FSFXPowerWheelPawnIndices
{
	TArray< int >                                      aPlayer;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      aHench1;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      aHench2;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSFHandler_PRCShop.PRCInfo_t
// 0x0018
struct FPRCInfo_t
{
	struct FString                                     sCreditsSection;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fFadeTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fHoldTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fScrollTime;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSkeletalMeshActor.SMAVectorParameter
// 0x0020
struct FSMAVectorParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Parameter;                                        		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Group;                                            		// 0x0018 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct SFXGame.SFXSkeletalMeshActor.SMAScalarParameter
// 0x0014
struct FSMAScalarParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Parameter;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Group;                                            		// 0x000C (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct SFXGame.SFXSkeletalMeshActor.SMATextureParameter
// 0x0014
struct FSMATextureParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    Parameter;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Group;                                            		// 0x000C (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationParam
// 0x0018
struct FSFXVocalizationParam
{
	TArray< unsigned char >                            SpecificType;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      SpecificValue;                                    		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationLineV2
// 0x0058
struct FSFXVocalizationLineV2
{
	struct FSFXVocalizationParam                       Instigator;                                       		// 0x0000 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXVocalizationParam                       Recipient;                                        		// 0x0018 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXVocalizationParam                       ThirdParam;                                       		// 0x0030 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWwiseEvent*                                 Sound;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     DebugText;                                        		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationEventV2
// 0x000C
struct FSFXVocalizationEventV2
{
	TArray< struct FSFXVocalizationLineV2 >            Lines;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationManager.VocEventLog
// 0x0010
struct FVocEventLog
{
	class APawn*                                       Speaker;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class APawn*                                       ReferredTo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Id;                                               		// 0x0008 (0x0001) [0x0000000000000000]              
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif