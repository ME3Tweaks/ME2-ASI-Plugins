/*
#############################################################################################
# Mass Effect 2 (1.2.1604.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_classes.h
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

// Enum GFxUI.GFxMovie.GFxRenderTextureMode
/*enum GFxRenderTextureMode
{
	RTM_Opaque                                         = 0,
	RTM_Alpha                                          = 1,
	RTM_AlphaComposite                                 = 2,
	RTM_MAX                                            = 3
};*/

// Enum GFxUI.GFxMovie.GFxTimingMode
/*enum GFxTimingMode
{
	TM_Game                                            = 0,
	TM_Real                                            = 1,
	TM_MAX                                             = 2
};*/

// Enum GFxUI.GFxMovie.ASType
/*enum ASType
{
	AS_Undefined                                       = 0,
	AS_Null                                            = 1,
	AS_Number                                          = 2,
	AS_String                                          = 3,
	AS_Boolean                                         = 4,
	AS_MAX                                             = 5
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GFxUI.GFxEngine
// 0x0010 (0x004C - 0x003C)
class UGFxEngine : public UObject
{
public:
	TArray< struct FGCReference >                      GCReferences;                                     		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                RefCount;                                         		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1108 ];

		return pClassPointer;
	};

};

UClass* UGFxEngine::pClassPointer = NULL;

// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1109 ];

		return pClassPointer;
	};

	bool eventFSCommand ( class UGFxMovie* Movie, struct FString Cmd, struct FString arg );
};

UClass* UGFxFSCmdHandler::pClassPointer = NULL;

// Class GFxUI.GFxGameViewportClient
// 0x0008 (0x012C - 0x0124)
class UGFxGameViewportClient : public UGameViewportClient
{
public:
	class UClass*                                      GFxUIControllerClass;                             		// 0x0124 (0x0004) [0x0000000000000000]              
	class UGFxInteraction*                             GFxUIController;                                  		// 0x0128 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1110 ];

		return pClassPointer;
	};

	bool eventInit ( struct FString* OutError );
};

UClass* UGFxGameViewportClient::pClassPointer = NULL;

// Class GFxUI.GFxInteraction
// 0x0004 (0x0070 - 0x006C)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x006C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1111 ];

		return pClassPointer;
	};

	void NotifyGameSessionEnded ( );
	class UGFxMovie* GetFocusMovie ( );
	bool SetFocusMovie ( struct FString MovieName, unsigned long captureInput );
};

UClass* UGFxInteraction::pClassPointer = NULL;

// Class GFxUI.GFxMovie
// 0x0048 (0x0084 - 0x003C)
class UGFxMovie : public UObject
{
public:
	class UGFxMovieInfo*                               MovieInfo;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPointer                                    pMovie;                                           		// 0x0044 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    pCaptureKeys;                                     		// 0x0048 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UGFxFSCmdHandler*                            FSCmdHandler;                                     		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     ExternalInterface;                                		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             CaptureKeys;                                      		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nZOrder;                                          		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CreationTime;                                     		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fRenderTime;                                      		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAdvanceTime;                                     		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FExternalTexture >                  ExternalTextures;                                 		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      TimingMode;                                       		// 0x007C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x007D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bGammaCorrection : 1;                             		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1112 ];

		return pClassPointer;
	};

	void ActionScript ( struct FString Path );
	void SetExternalInterface ( class UObject* H );
	void SetFsCmdHandler ( class UGFxFSCmdHandler* H );
	bool SetVariableStringArray ( struct FString Path, int Index, TArray< struct FString > arg );
	bool SetVariableFloatArray ( struct FString Path, int Index, TArray< float > arg );
	bool SetVariableIntArray ( struct FString Path, int Index, TArray< int > arg );
	bool SetVariableArray ( struct FString Path, int Index, TArray< struct FASValue > arg );
	bool GetVariableStringArray ( struct FString Path, int Index, TArray< struct FString >* arg );
	bool GetVariableFloatArray ( struct FString Path, int Index, TArray< float >* arg );
	bool GetVariableIntArray ( struct FString Path, int Index, TArray< int >* arg );
	bool GetVariableArray ( struct FString Path, int Index, TArray< struct FASValue >* arg );
	void SetVariableString ( struct FString Path, struct FString S );
	void SetVariableNumber ( struct FString Path, float F );
	void SetVariableBool ( struct FString Path, unsigned long B );
	void SetVariable ( struct FString Path, struct FASValue arg );
	struct FString GetVariableString ( struct FString Path );
	float GetVariableNumber ( struct FString Path );
	bool GetVariableBool ( struct FString Path );
	struct FASValue GetVariable ( struct FString Path );
	struct FASValue Invoke ( struct FString method, TArray< struct FASValue > args );
	void SetTimingMode ( unsigned char Mode );
	void Pause ( unsigned long pauseplay );
	void Advance ( float Time );
	bool SetExternalTexture ( struct FString Resource, class UTexture* Texture );
	void ClearCaptureKeys ( );
	void AddCaptureKey ( struct FName Key );
	void SetFocus ( unsigned long captureInput, unsigned long Focus );
	void SetViewport ( int X, int Y, int Width, int Height );
	class UGameViewportClient* GetGameViewportClient ( );
	void SetMovieInfo ( class UGFxMovieInfo* Data );
	void eventOnClose ( );
	void Close ( unsigned long Unload );
	bool eventStart ( unsigned long StartPaused );
};

UClass* UGFxMovie::pClassPointer = NULL;

// Class GFxUI.GFxMovieInfo
// 0x004C (0x0088 - 0x003C)
class UGFxMovieInfo : public UObject
{
public:
	TArray< unsigned char >                            RawData;                                          		// 0x003C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UObject* >                           References;                                       		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           UserReferences;                                   		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUsesFontlib : 1;                                 		// 0x0060 (0x0004) [0x0000000000020001] [0x00000001] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bUseGFxExport : 1;                                		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseCompressedTextures : 1;                       		// 0x0060 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FString                                     SourceFile;                                       		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GFxExportCmdLine;                                 		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           CompressedTextureReferences;                      		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1113 ];

		return pClassPointer;
	};

};

UClass* UGFxMovieInfo::pClassPointer = NULL;

// Class GFxUI.GFxAction_CloseMovie
// 0x0004 (0x00F4 - 0x00F0)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1114 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_CloseMovie::pClassPointer = NULL;

// Class GFxUI.GFxAction_GetVariable
// 0x0010 (0x0100 - 0x00F0)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Variable;                                         		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1115 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_GetVariable::pClassPointer = NULL;

// Class GFxUI.GFxAction_Invoke
// 0x001C (0x010C - 0x00F0)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MethodName;                                       		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FASValue >                          Arguments;                                        		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1116 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_Invoke::pClassPointer = NULL;

// Class GFxUI.GFxAction_OpenMovie
// 0x0008 (0x00F8 - 0x00F0)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTakeFocus : 1;                                   		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bStartPaused : 1;                                 		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1117 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_OpenMovie::pClassPointer = NULL;

// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0010 (0x0100 - 0x00F0)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             CaptureKeys;                                      		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1118 ];

		return pClassPointer;
	};

};

UClass* UGFxAction_SetCaptureKeys::pClassPointer = NULL;

// Class GFxUI.GFxAction_SetFocus
// 0x0008 (0x00F8 - 0x00F0)
class UGFxAction_SetFocus : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1119 ];

		return pClassPointer;
	};

};

UClass* UGFxAction_SetFocus::pClassPointer = NULL;

// Class GFxUI.GFxAction_SetVariable
// 0x0010 (0x0100 - 0x00F0)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Variable;                                         		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1120 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_SetVariable::pClassPointer = NULL;

// Class GFxUI.GFxEvent_FsCommand
// 0x0010 (0x0128 - 0x0118)
class UGFxEvent_FsCommand : public USequenceEvent
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     FSCommand;                                        		// 0x011C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1121 ];

		return pClassPointer;
	};

};

UClass* UGFxEvent_FsCommand::pClassPointer = NULL;

// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0014 (0x0050 - 0x003C)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x003C (0x0014) UNKNOWN PROPERTY: MapProperty GFxUI.GFxFSCmdHandler_Kismet.Events

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1122 ];

		return pClassPointer;
	};

	bool eventFSCommand ( class UGFxMovie* Movie, struct FString Cmd, struct FString arg );
};

UClass* UGFxFSCmdHandler_Kismet::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif