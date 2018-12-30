/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function GameFramework.GameBreakableActor.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameBreakableActor::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 27016 ];

	AGameBreakableActor_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameBreakableActor.HideAndDestroy
// [0x00020002] 
// Parameters infos:

void AGameBreakableActor::HideAndDestroy ( )
{
	static UFunction* pFnHideAndDestroy = NULL;

	if ( ! pFnHideAndDestroy )
		pFnHideAndDestroy = (UFunction*) UObject::GObjObjects()->Data[ 27015 ];

	AGameBreakableActor_execHideAndDestroy_Parms HideAndDestroy_Parms;

	this->ProcessEvent ( pFnHideAndDestroy, &HideAndDestroy_Parms, NULL );
};

// Function GameFramework.GameBreakableActor.BreakLastApart
// [0x00820002] 
// Parameters infos:
// class AController*             EventInstigator                ( CPF_Parm )

void AGameBreakableActor::BreakLastApart ( class AController* EventInstigator )
{
	static UFunction* pFnBreakLastApart = NULL;

	if ( ! pFnBreakLastApart )
		pFnBreakLastApart = (UFunction*) UObject::GObjObjects()->Data[ 27010 ];

	AGameBreakableActor_execBreakLastApart_Parms BreakLastApart_Parms;
	BreakLastApart_Parms.EventInstigator = EventInstigator;

	this->ProcessEvent ( pFnBreakLastApart, &BreakLastApart_Parms, NULL );
};

// Function GameFramework.GameBreakableActor.BreakStepApart
// [0x00820002] 
// Parameters infos:
// int                            BrokenStep                     ( CPF_Parm )

void AGameBreakableActor::BreakStepApart ( int BrokenStep )
{
	static UFunction* pFnBreakStepApart = NULL;

	if ( ! pFnBreakStepApart )
		pFnBreakStepApart = (UFunction*) UObject::GObjObjects()->Data[ 27005 ];

	AGameBreakableActor_execBreakStepApart_Parms BreakStepApart_Parms;
	BreakStepApart_Parms.BrokenStep = BrokenStep;

	this->ProcessEvent ( pFnBreakStepApart, &BreakStepApart_Parms, NULL );
};

// Function GameFramework.GameBreakableActor.IsValidDamageType
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  inDamageType                   ( CPF_Parm )

bool AGameBreakableActor::IsValidDamageType ( class UClass* inDamageType )
{
	static UFunction* pFnIsValidDamageType = NULL;

	if ( ! pFnIsValidDamageType )
		pFnIsValidDamageType = (UFunction*) UObject::GObjObjects()->Data[ 26991 ];

	AGameBreakableActor_execIsValidDamageType_Parms IsValidDamageType_Parms;
	IsValidDamageType_Parms.inDamageType = inDamageType;

	this->ProcessEvent ( pFnIsValidDamageType, &IsValidDamageType_Parms, NULL );

	return IsValidDamageType_Parms.ReturnValue;
};

// Function GameFramework.GameBreakableActor.TakeStepDamage
// [0x00020002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// unsigned long                  bIsBroken                      ( CPF_Parm )
// int                            BrokenStep                     ( CPF_Parm )

void AGameBreakableActor::TakeStepDamage ( int Damage, class AController* EventInstigator, unsigned long bIsBroken, int BrokenStep )
{
	static UFunction* pFnTakeStepDamage = NULL;

	if ( ! pFnTakeStepDamage )
		pFnTakeStepDamage = (UFunction*) UObject::GObjObjects()->Data[ 26997 ];

	AGameBreakableActor_execTakeStepDamage_Parms TakeStepDamage_Parms;
	TakeStepDamage_Parms.Damage = Damage;
	TakeStepDamage_Parms.EventInstigator = EventInstigator;
	TakeStepDamage_Parms.bIsBroken = bIsBroken;
	TakeStepDamage_Parms.BrokenStep = BrokenStep;

	this->ProcessEvent ( pFnTakeStepDamage, &TakeStepDamage_Parms, NULL );
};

// Function GameFramework.GameBreakableActor.TakeLastDamage
// [0x00020002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// unsigned long                  bIsBroken                      ( CPF_Parm )
// int                            BrokenStep                     ( CPF_Parm )

void AGameBreakableActor::TakeLastDamage ( int Damage, class AController* EventInstigator, unsigned long bIsBroken, int BrokenStep )
{
	static UFunction* pFnTakeLastDamage = NULL;

	if ( ! pFnTakeLastDamage )
		pFnTakeLastDamage = (UFunction*) UObject::GObjObjects()->Data[ 26992 ];

	AGameBreakableActor_execTakeLastDamage_Parms TakeLastDamage_Parms;
	TakeLastDamage_Parms.Damage = Damage;
	TakeLastDamage_Parms.EventInstigator = EventInstigator;
	TakeLastDamage_Parms.bIsBroken = bIsBroken;
	TakeLastDamage_Parms.BrokenStep = BrokenStep;

	this->ProcessEvent ( pFnTakeLastDamage, &TakeLastDamage_Parms, NULL );
};

// Function GameFramework.GameBreakableActor.TakeDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AGameBreakableActor::eventTakeDamage ( float Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 26983 ];

	AGameBreakableActor_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function GameFramework.GameBreakableActor.SetParticlesLighting
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AEmitter*                Emit                           ( CPF_Parm )

void AGameBreakableActor::SetParticlesLighting ( class AEmitter* Emit )
{
	static UFunction* pFnSetParticlesLighting = NULL;

	if ( ! pFnSetParticlesLighting )
		pFnSetParticlesLighting = (UFunction*) UObject::GObjObjects()->Data[ 26981 ];

	AGameBreakableActor_execSetParticlesLighting_Parms SetParticlesLighting_Parms;
	SetParticlesLighting_Parms.Emit = Emit;

	pFnSetParticlesLighting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetParticlesLighting, &SetParticlesLighting_Parms, NULL );

	pFnSetParticlesLighting->FunctionFlags |= 0x400;
};

// Function GameFramework.GameBreakableActor.GetOffsetToWorld
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Offset                         ( CPF_Parm )

struct FVector AGameBreakableActor::GetOffsetToWorld ( struct FVector Offset )
{
	static UFunction* pFnGetOffsetToWorld = NULL;

	if ( ! pFnGetOffsetToWorld )
		pFnGetOffsetToWorld = (UFunction*) UObject::GObjObjects()->Data[ 26978 ];

	AGameBreakableActor_execGetOffsetToWorld_Parms GetOffsetToWorld_Parms;
	memcpy ( &GetOffsetToWorld_Parms.Offset, &Offset, 0xC );

	pFnGetOffsetToWorld->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOffsetToWorld, &GetOffsetToWorld_Parms, NULL );

	pFnGetOffsetToWorld->FunctionFlags |= 0x400;

	return GetOffsetToWorld_Parms.ReturnValue;
};

// Function GameFramework.GameHUD.StopDrawingChapterTitle
// [0x00020102] 
// Parameters infos:

void AGameHUD::StopDrawingChapterTitle ( )
{
	static UFunction* pFnStopDrawingChapterTitle = NULL;

	if ( ! pFnStopDrawingChapterTitle )
		pFnStopDrawingChapterTitle = (UFunction*) UObject::GObjObjects()->Data[ 27033 ];

	AGameHUD_execStopDrawingChapterTitle_Parms StopDrawingChapterTitle_Parms;

	this->ProcessEvent ( pFnStopDrawingChapterTitle, &StopDrawingChapterTitle_Parms, NULL );
};

// Function GameFramework.GameHUD.StartDrawingChapterTitle
// [0x00020102] 
// Parameters infos:
// struct FString                 ChapterName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ActName                        ( CPF_Parm | CPF_NeedCtorLink )
// float                          TotalDrawTime                  ( CPF_Parm )
// float                          TotalFadeTime                  ( CPF_Parm )

void AGameHUD::StartDrawingChapterTitle ( struct FString ChapterName, struct FString ActName, float TotalDrawTime, float TotalFadeTime )
{
	static UFunction* pFnStartDrawingChapterTitle = NULL;

	if ( ! pFnStartDrawingChapterTitle )
		pFnStartDrawingChapterTitle = (UFunction*) UObject::GObjObjects()->Data[ 27028 ];

	AGameHUD_execStartDrawingChapterTitle_Parms StartDrawingChapterTitle_Parms;
	memcpy ( &StartDrawingChapterTitle_Parms.ChapterName, &ChapterName, 0xC );
	memcpy ( &StartDrawingChapterTitle_Parms.ActName, &ActName, 0xC );
	StartDrawingChapterTitle_Parms.TotalDrawTime = TotalDrawTime;
	StartDrawingChapterTitle_Parms.TotalFadeTime = TotalFadeTime;

	this->ProcessEvent ( pFnStartDrawingChapterTitle, &StartDrawingChapterTitle_Parms, NULL );
};

// Function GameFramework.GameHUD.SetHUDDrawColor
// [0x00020002] 
// Parameters infos:
// unsigned char                  eColor                         ( CPF_Parm )
// unsigned char                  Alpha                          ( CPF_OptionalParm | CPF_Parm )

void AGameHUD::SetHUDDrawColor ( unsigned char eColor, unsigned char Alpha )
{
	static UFunction* pFnSetHUDDrawColor = NULL;

	if ( ! pFnSetHUDDrawColor )
		pFnSetHUDDrawColor = (UFunction*) UObject::GObjObjects()->Data[ 27025 ];

	AGameHUD_execSetHUDDrawColor_Parms SetHUDDrawColor_Parms;
	SetHUDDrawColor_Parms.eColor = eColor;
	SetHUDDrawColor_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnSetHUDDrawColor, &SetHUDDrawColor_Parms, NULL );
};

// Function GameFramework.GamePawn.GetTargetFrictionCylinder
// [0x00420102] 
// Parameters infos:
// float                          CylinderRadius                 ( CPF_Parm | CPF_OutParm )
// float                          CylinderHeight                 ( CPF_Parm | CPF_OutParm )

void AGamePawn::GetTargetFrictionCylinder ( float* CylinderRadius, float* CylinderHeight )
{
	static UFunction* pFnGetTargetFrictionCylinder = NULL;

	if ( ! pFnGetTargetFrictionCylinder )
		pFnGetTargetFrictionCylinder = (UFunction*) UObject::GObjObjects()->Data[ 27034 ];

	AGamePawn_execGetTargetFrictionCylinder_Parms GetTargetFrictionCylinder_Parms;

	this->ProcessEvent ( pFnGetTargetFrictionCylinder, &GetTargetFrictionCylinder_Parms, NULL );

	if ( CylinderRadius )
		*CylinderRadius = GetTargetFrictionCylinder_Parms.CylinderRadius;

	if ( CylinderHeight )
		*CylinderHeight = GetTargetFrictionCylinder_Parms.CylinderHeight;
};

// Function GameFramework.GamePlayerController.ClientDisplayChapterTitle
// [0x010201C2] 
// Parameters infos:
// int                            DisplayChapter                 ( CPF_Parm )
// float                          TotalDisplayTime               ( CPF_Parm )
// float                          TotalFadeTime                  ( CPF_Parm )

void AGamePlayerController::ClientDisplayChapterTitle ( int DisplayChapter, float TotalDisplayTime, float TotalFadeTime )
{
	static UFunction* pFnClientDisplayChapterTitle = NULL;

	if ( ! pFnClientDisplayChapterTitle )
		pFnClientDisplayChapterTitle = (UFunction*) UObject::GObjObjects()->Data[ 27046 ];

	AGamePlayerController_execClientDisplayChapterTitle_Parms ClientDisplayChapterTitle_Parms;
	ClientDisplayChapterTitle_Parms.DisplayChapter = DisplayChapter;
	ClientDisplayChapterTitle_Parms.TotalDisplayTime = TotalDisplayTime;
	ClientDisplayChapterTitle_Parms.TotalFadeTime = TotalFadeTime;

	this->ProcessEvent ( pFnClientDisplayChapterTitle, &ClientDisplayChapterTitle_Parms, NULL );
};

// Function GameFramework.GamePlayerController.DisplayChapterTitle
// [0x00020102] 
// Parameters infos:
// int                            DisplayChapter                 ( CPF_Parm )
// float                          TotalDisplayTime               ( CPF_Parm )
// float                          TotalFadeTime                  ( CPF_Parm )

void AGamePlayerController::DisplayChapterTitle ( int DisplayChapter, float TotalDisplayTime, float TotalFadeTime )
{
	static UFunction* pFnDisplayChapterTitle = NULL;

	if ( ! pFnDisplayChapterTitle )
		pFnDisplayChapterTitle = (UFunction*) UObject::GObjObjects()->Data[ 27042 ];

	AGamePlayerController_execDisplayChapterTitle_Parms DisplayChapterTitle_Parms;
	DisplayChapterTitle_Parms.DisplayChapter = DisplayChapter;
	DisplayChapterTitle_Parms.TotalDisplayTime = TotalDisplayTime;
	DisplayChapterTitle_Parms.TotalFadeTime = TotalFadeTime;

	this->ProcessEvent ( pFnDisplayChapterTitle, &DisplayChapterTitle_Parms, NULL );
};

// Function GameFramework.GamePlayerController.GetChapterStrings
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            eChapter                       ( CPF_Parm )
// struct FString                 ChapterName                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 ActName                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGamePlayerController::GetChapterStrings ( int eChapter, struct FString* ChapterName, struct FString* ActName )
{
	static UFunction* pFnGetChapterStrings = NULL;

	if ( ! pFnGetChapterStrings )
		pFnGetChapterStrings = (UFunction*) UObject::GObjObjects()->Data[ 27038 ];

	AGamePlayerController_execGetChapterStrings_Parms GetChapterStrings_Parms;
	GetChapterStrings_Parms.eChapter = eChapter;

	pFnGetChapterStrings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetChapterStrings, &GetChapterStrings_Parms, NULL );

	pFnGetChapterStrings->FunctionFlags |= 0x400;

	if ( ChapterName )
		memcpy ( ChapterName, &GetChapterStrings_Parms.ChapterName, 0xC );

	if ( ActName )
		memcpy ( ActName, &GetChapterStrings_Parms.ActName, 0xC );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif