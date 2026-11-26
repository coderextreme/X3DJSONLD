unit CameraPrototypes;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function CreateCameraPrototypes: TX3DRootNode;
procedure RegisterCameraPrototypesScripts(const Scene: TCastleSceneCore);

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors, Math, X3DTime;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

type
  TScript50Script = class
  private
    Fdescription: String;
    FField_description: TSFString;
    FDirty_description: Boolean;
    Fposition: TVector3;
    FField_position: TSFVec3f;
    FDirty_position: Boolean;
    Forientation: TVector4;
    FField_orientation: TSFRotation;
    FDirty_orientation: Boolean;
    FfieldOfView: Single;
    FField_fieldOfView: TSFFloat;
    FDirty_fieldOfView: Boolean;
    FnearClipPlane: Single;
    FField_nearClipPlane: TSFFloat;
    FDirty_nearClipPlane: Boolean;
    FfarClipPlane: Single;
    FField_farClipPlane: TSFFloat;
    FDirty_farClipPlane: Boolean;
    Fshots: array of TX3DNode;
    FField_shots: TMFNode;
    FDirty_shots: Boolean;
    FfilterColor: TVector3;
    FField_filterColor: TSFColor;
    FDirty_filterColor: Boolean;
    FfilterTransparency: Single;
    FField_filterTransparency: TSFFloat;
    FDirty_filterTransparency: Boolean;
    FupVector: TVector3;
    FField_upVector: TSFVec3f;
    FDirty_upVector: Boolean;
    FfStop: Single;
    FField_fStop: TSFFloat;
    FDirty_fStop: Boolean;
    FfocusDistance: Single;
    FField_focusDistance: TSFFloat;
    FDirty_focusDistance: Boolean;
    FisActive: Boolean;
    FEvent_isActive: TX3DEvent;
    FBack_isActive: TSFBool;
    FDirty_isActive: Boolean;
    FtotalDuration: Double;
    FEvent_totalDuration: TX3DEvent;
    FBack_totalDuration: TSFTime;
    FDirty_totalDuration: Boolean;
    FofflineRender: TX3DNode;
    FField_offlineRender: TSFNode;
    FDirty_offlineRender: Boolean;
    FViewpointNode: TX3DNode;
    FNavInfoNode: TX3DNode;
    FCameraPI: TX3DNode;
    FCameraOI: TX3DNode;
    Fkey: array of Single;
    FField_key: TMFFloat;
    FDirty_key: Boolean;
    FkeyValuePosition: array of TVector3;
    FField_keyValuePosition: TMFVec3f;
    FDirty_keyValuePosition: Boolean;
    FkeyValueOrientation: array of TVector4;
    FField_keyValueOrientation: TMFRotation;
    FDirty_keyValueOrientation: Boolean;
    Fanimated: Boolean;
    FField_animated: TSFBool;
    FDirty_animated: Boolean;
    Finitialized: Boolean;
    FshotCount: Int32;
    FmovesCount: Int32;
    FframeCount: Single;
    FstartTime: Double;
    FpriorTraceTime: Double;
    FtraceEnabled: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_description: TSFString; const AField_position: TSFVec3f; const AField_orientation: TSFRotation; const AField_fieldOfView: TSFFloat; const AField_nearClipPlane: TSFFloat; const AField_farClipPlane: TSFFloat; const AField_shots: TMFNode; const AField_filterColor: TSFColor; const AField_filterTransparency: TSFFloat; const AField_upVector: TSFVec3f; const AField_fStop: TSFFloat; const AField_focusDistance: TSFFloat; const AEvent_isActive: TX3DEvent; const AEvent_totalDuration: TX3DEvent; const AField_offlineRender: TSFNode; const AField_ViewpointNode: TSFNode; const AField_NavInfoNode: TSFNode; const AField_CameraPI: TSFNode; const AField_CameraOI: TSFNode; const AField_key: TMFFloat; const AField_keyValuePosition: TMFVec3f; const AField_keyValueOrientation: TMFRotation; const AField_animated: TSFBool; const AField_initialized: TSFBool; const AField_shotCount: TSFInt32; const AField_movesCount: TSFInt32; const AField_frameCount: TSFFloat; const AField_startTime: TSFTime; const AField_priorTraceTime: TSFTime; const AField_traceEnabled: TSFBool);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure CheckShots(const eventValue: Single; const Time: TX3DTime);
    procedure StripBrackets(const fieldArray: Single; const Time: TX3DTime);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
    procedure Set_bind(Value: TX3DField; const Time: TX3DTime);
    procedure Set_description(Value: TX3DField; const Time: TX3DTime);
    procedure Set_position(Value: TX3DField; const Time: TX3DTime);
    procedure Set_orientation(Value: TX3DField; const Time: TX3DTime);
    procedure Set_fieldOfView(Value: TX3DField; const Time: TX3DTime);
    procedure Set_nearClipPlane(Value: TX3DField; const Time: TX3DTime);
    procedure Set_farClipPlane(Value: TX3DField; const Time: TX3DTime);
    procedure Set_shots(Value: TX3DField; const Time: TX3DTime);
    procedure Set_filterColor(Value: TX3DField; const Time: TX3DTime);
    procedure Set_filterTransparency(Value: TX3DField; const Time: TX3DTime);
    procedure Set_upVector(Value: TX3DField; const Time: TX3DTime);
    procedure Set_fStop(Value: TX3DField; const Time: TX3DTime);
    procedure Set_focusDistance(Value: TX3DField; const Time: TX3DTime);
    procedure Set_offlineRender(Value: TX3DField; const Time: TX3DTime);
    procedure Set_key(Value: TX3DField; const Time: TX3DTime);
    procedure Set_keyValuePosition(Value: TX3DField; const Time: TX3DTime);
    procedure Set_keyValueOrientation(Value: TX3DField; const Time: TX3DTime);
    procedure Set_animated(Value: TX3DField; const Time: TX3DTime);
    procedure TracePrint(const outputValue: Single; const Time: TX3DTime);
    procedure AlwaysPrint(const outputValue: Single; const Time: TX3DTime);
  end;

  TScript107Script = class
  private
    Fdescription: String;
    FField_description: TSFString;
    FDirty_description: Boolean;
    Fenabled: Boolean;
    FField_enabled: TSFBool;
    FDirty_enabled: Boolean;
    Fmoves: array of TX3DNode;
    FField_moves: TMFNode;
    FDirty_moves: Boolean;
    FinitialPosition: TVector3;
    FField_initialPosition: TSFVec3f;
    FDirty_initialPosition: Boolean;
    FinitialOrientation: TVector4;
    FField_initialOrientation: TSFRotation;
    FDirty_initialOrientation: Boolean;
    FinitialAimPoint: TVector3;
    FField_initialAimPoint: TSFVec3f;
    FDirty_initialAimPoint: Boolean;
    FinitialFieldOfView: Single;
    FField_initialFieldOfView: TSFFloat;
    FDirty_initialFieldOfView: Boolean;
    FinitialFStop: Single;
    FField_initialFStop: TSFFloat;
    FDirty_initialFStop: Boolean;
    FinitialFocusDistance: Single;
    FField_initialFocusDistance: TSFFloat;
    FDirty_initialFocusDistance: Boolean;
    FshotDuration: Double;
    FEvent_shotDuration: TX3DEvent;
    FBack_shotDuration: TSFTime;
    FDirty_shotDuration: Boolean;
    FisActive: Boolean;
    FEvent_isActive: TX3DEvent;
    FBack_isActive: TSFBool;
    FDirty_isActive: Boolean;
    FtraceEnabled: Boolean;
    Fkey: array of Single;
    FField_key: TMFFloat;
    FDirty_key: Boolean;
    FkeyValuePosition: array of TVector3;
    FField_keyValuePosition: TMFVec3f;
    FDirty_keyValuePosition: Boolean;
    FkeyValueOrientation: array of TVector4;
    FField_keyValueOrientation: TMFRotation;
    FDirty_keyValueOrientation: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_description: TSFString; const AField_enabled: TSFBool; const AField_moves: TMFNode; const AField_initialPosition: TSFVec3f; const AField_initialOrientation: TSFRotation; const AField_initialAimPoint: TSFVec3f; const AField_initialFieldOfView: TSFFloat; const AField_initialFStop: TSFFloat; const AField_initialFocusDistance: TSFFloat; const AEvent_shotDuration: TX3DEvent; const AEvent_isActive: TX3DEvent; const AField_traceEnabled: TSFBool; const AField_key: TMFFloat; const AField_keyValuePosition: TMFVec3f; const AField_keyValueOrientation: TMFRotation);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_description(Value: TX3DField; const Time: TX3DTime);
    procedure Set_enabled(Value: TX3DField; const Time: TX3DTime);
    procedure Set_moves(Value: TX3DField; const Time: TX3DTime);
    procedure Set_initialPosition(Value: TX3DField; const Time: TX3DTime);
    procedure Set_initialOrientation(Value: TX3DField; const Time: TX3DTime);
    procedure Set_initialAimPoint(Value: TX3DField; const Time: TX3DTime);
    procedure Set_initialFieldOfView(Value: TX3DField; const Time: TX3DTime);
    procedure Set_initialFStop(Value: TX3DField; const Time: TX3DTime);
    procedure Set_initialFocusDistance(Value: TX3DField; const Time: TX3DTime);
    procedure Set_key(Value: TX3DField; const Time: TX3DTime);
    procedure Set_keyValuePosition(Value: TX3DField; const Time: TX3DTime);
    procedure Set_keyValueOrientation(Value: TX3DField; const Time: TX3DTime);
    procedure TracePrint(const outputValue: Single; const Time: TX3DTime);
    procedure AlwaysPrint(const outputValue: Single; const Time: TX3DTime);
  end;

  TScript138Script = class
  private
    Fdescription: String;
    FField_description: TSFString;
    FDirty_description: Boolean;
    Fenabled: Boolean;
    FField_enabled: TSFBool;
    FDirty_enabled: Boolean;
    Fduration: Single;
    FField_duration: TSFFloat;
    FDirty_duration: Boolean;
    FgoalPosition: TVector3;
    FField_goalPosition: TSFVec3f;
    FDirty_goalPosition: Boolean;
    FgoalOrientation: TVector4;
    FField_goalOrientation: TSFRotation;
    FDirty_goalOrientation: Boolean;
    Ftracking: Boolean;
    FField_tracking: TSFBool;
    FDirty_tracking: Boolean;
    FgoalAimPoint: TVector3;
    FField_goalAimPoint: TSFVec3f;
    FDirty_goalAimPoint: Boolean;
    FgoalFieldOfView: Single;
    FField_goalFieldOfView: TSFFloat;
    FDirty_goalFieldOfView: Boolean;
    FgoalFStop: Single;
    FField_goalFStop: TSFFloat;
    FDirty_goalFStop: Boolean;
    FgoalFocusDistance: Single;
    FField_goalFocusDistance: TSFFloat;
    FDirty_goalFocusDistance: Boolean;
    FisActive: Boolean;
    FEvent_isActive: TX3DEvent;
    FBack_isActive: TSFBool;
    FDirty_isActive: Boolean;
    FtraceEnabled: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_description: TSFString; const AField_enabled: TSFBool; const AField_duration: TSFFloat; const AField_goalPosition: TSFVec3f; const AField_goalOrientation: TSFRotation; const AField_tracking: TSFBool; const AField_goalAimPoint: TSFVec3f; const AField_goalFieldOfView: TSFFloat; const AField_goalFStop: TSFFloat; const AField_goalFocusDistance: TSFFloat; const AEvent_isActive: TX3DEvent; const AField_traceEnabled: TSFBool);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_goalAimPoint(Value: TX3DField; const Time: TX3DTime);
    procedure Set_description(Value: TX3DField; const Time: TX3DTime);
    procedure Set_enabled(Value: TX3DField; const Time: TX3DTime);
    procedure Set_duration(Value: TX3DField; const Time: TX3DTime);
    procedure Set_goalPosition(Value: TX3DField; const Time: TX3DTime);
    procedure Set_goalOrientation(Value: TX3DField; const Time: TX3DTime);
    procedure Set_tracking(Value: TX3DField; const Time: TX3DTime);
    procedure Set_goalFieldOfView(Value: TX3DField; const Time: TX3DTime);
    procedure Set_goalFStop(Value: TX3DField; const Time: TX3DTime);
    procedure Set_goalFocusDistance(Value: TX3DField; const Time: TX3DTime);
    procedure TracePrint(const outputValue: Single; const Time: TX3DTime);
    procedure AlwaysPrint(const outputValue: Single; const Time: TX3DTime);
  end;

  TScript165Script = class
  private
    Fdescription: String;
    FField_description: TSFString;
    FDirty_description: Boolean;
    Fenabled: Boolean;
    FField_enabled: TSFBool;
    FDirty_enabled: Boolean;
    FframeRate: Single;
    FField_frameRate: TSFFloat;
    FDirty_frameRate: Boolean;
    FframeSize: TVector2;
    FField_frameSize: TSFVec2f;
    FDirty_frameSize: Boolean;
    FpixelAspectRatio: Single;
    FField_pixelAspectRatio: TSFFloat;
    FDirty_pixelAspectRatio: Boolean;
    Fprogress: Single;
    FEvent_progress: TX3DEvent;
    FBack_progress: TSFFloat;
    FDirty_progress: Boolean;
    FrenderCompleteTime: Double;
    FEvent_renderCompleteTime: TX3DEvent;
    FBack_renderCompleteTime: TSFTime;
    FDirty_renderCompleteTime: Boolean;
    FmovieFormat: array of String;
    FimageFormat: array of String;
    FtraceEnabled: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_description: TSFString; const AField_enabled: TSFBool; const AField_frameRate: TSFFloat; const AField_frameSize: TSFVec2f; const AField_pixelAspectRatio: TSFFloat; const AEvent_progress: TX3DEvent; const AEvent_renderCompleteTime: TX3DEvent; const AField_movieFormat: TMFString; const AField_imageFormat: TMFString; const AField_traceEnabled: TSFBool);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_description(Value: TX3DField; const Time: TX3DTime);
    procedure Set_enabled(Value: TX3DField; const Time: TX3DTime);
    procedure Set_frameRate(Value: TX3DField; const Time: TX3DTime);
    procedure Set_frameSize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_pixelAspectRatio(Value: TX3DField; const Time: TX3DTime);
    procedure Set_startTime(Value: TX3DField; const Time: TX3DTime);
    procedure TracePrint(const outputValue: Single; const Time: TX3DTime);
    procedure AlwaysPrint(const outputValue: Single; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group16: TGroupNode;
  ProtoDeclare17: TX3DPrototype;
  FieldDecl19: TX3DInterfaceDeclaration;
  FieldVal19: TSFString;
  FieldDecl20: TX3DInterfaceDeclaration;
  FieldVal20: TSFVec3f;
  FieldDecl21: TX3DInterfaceDeclaration;
  FieldVal21: TSFRotation;
  FieldDecl22: TX3DInterfaceDeclaration;
  FieldVal22: TSFFloat;
  FieldDecl23: TX3DInterfaceDeclaration;
  FieldVal23: TX3DEvent;
  FieldDecl24: TX3DInterfaceDeclaration;
  FieldVal24: TX3DEvent;
  FieldDecl25: TX3DInterfaceDeclaration;
  FieldVal25: TX3DEvent;
  FieldDecl26: TX3DInterfaceDeclaration;
  FieldVal26: TX3DEvent;
  FieldDecl27: TX3DInterfaceDeclaration;
  FieldVal27: TSFFloat;
  FieldDecl28: TX3DInterfaceDeclaration;
  FieldVal28: TSFFloat;
  FieldDecl29: TX3DInterfaceDeclaration;
  FieldVal29: TMFNode;
  FieldDecl30: TX3DInterfaceDeclaration;
  FieldVal30: TSFBool;
  FieldDecl31: TX3DInterfaceDeclaration;
  FieldVal31: TSFColor;
  FieldDecl32: TX3DInterfaceDeclaration;
  FieldVal32: TSFFloat;
  FieldDecl33: TX3DInterfaceDeclaration;
  FieldVal33: TSFColor;
  FieldDecl34: TX3DInterfaceDeclaration;
  FieldVal34: TSFFloat;
  FieldDecl35: TX3DInterfaceDeclaration;
  FieldVal35: TSFVec3f;
  FieldDecl36: TX3DInterfaceDeclaration;
  FieldVal36: TSFFloat;
  FieldDecl37: TX3DInterfaceDeclaration;
  FieldVal37: TSFFloat;
  FieldDecl38: TX3DInterfaceDeclaration;
  FieldVal38: TX3DEvent;
  FieldDecl39: TX3DInterfaceDeclaration;
  FieldVal39: TX3DEvent;
  FieldDecl40: TX3DInterfaceDeclaration;
  FieldVal40: TSFNode;
  FieldDecl41: TX3DInterfaceDeclaration;
  FieldVal41: TSFBool;
  Viewpoint43: TViewpointNode;
  NavigationInfo44: TNavigationInfoNode;
  DirectionalLight45: TDirectionalLightNode;
  PositionInterpolator46: TPositionInterpolatorNode;
  OrientationInterpolator47: TOrientationInterpolatorNode;
  Script50: TScriptNode;
  FieldVal51: TSFString;
  FieldVal52: TSFVec3f;
  FieldVal53: TSFRotation;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  FieldVal56: TSFFloat;
  FieldVal57: TSFFloat;
  FieldVal58: TSFFloat;
  FieldVal59: TMFNode;
  FieldVal60: TSFColor;
  FieldVal61: TSFFloat;
  FieldVal62: TSFVec3f;
  FieldVal63: TSFFloat;
  FieldVal64: TSFFloat;
  FieldVal65: TX3DEvent;
  FieldVal66: TX3DEvent;
  FieldVal67: TSFNode;
  FieldVal68: TSFNode;
  FieldVal70: TSFNode;
  FieldVal72: TSFNode;
  FieldVal74: TSFNode;
  FieldVal76: TMFFloat;
  FieldVal77: TMFVec3f;
  FieldVal78: TMFRotation;
  FieldVal79: TSFBool;
  FieldVal80: TSFBool;
  FieldVal81: TSFInt32;
  FieldVal82: TSFInt32;
  FieldVal83: TSFFloat;
  FieldVal84: TSFTime;
  FieldVal85: TSFTime;
  FieldVal86: TSFBool;
  CompiledScript50: TScript50Script;
  ProtoDeclare92: TX3DPrototype;
  FieldDecl94: TX3DInterfaceDeclaration;
  FieldVal94: TSFString;
  FieldDecl95: TX3DInterfaceDeclaration;
  FieldVal95: TSFBool;
  FieldDecl96: TX3DInterfaceDeclaration;
  FieldVal96: TMFNode;
  FieldDecl97: TX3DInterfaceDeclaration;
  FieldVal97: TSFVec3f;
  FieldDecl98: TX3DInterfaceDeclaration;
  FieldVal98: TSFRotation;
  FieldDecl99: TX3DInterfaceDeclaration;
  FieldVal99: TSFVec3f;
  FieldDecl100: TX3DInterfaceDeclaration;
  FieldVal100: TSFFloat;
  FieldDecl101: TX3DInterfaceDeclaration;
  FieldVal101: TSFFloat;
  FieldDecl102: TX3DInterfaceDeclaration;
  FieldVal102: TSFFloat;
  FieldDecl103: TX3DInterfaceDeclaration;
  FieldVal103: TX3DEvent;
  FieldDecl104: TX3DInterfaceDeclaration;
  FieldVal104: TX3DEvent;
  FieldDecl105: TX3DInterfaceDeclaration;
  FieldVal105: TSFBool;
  Script107: TScriptNode;
  FieldVal108: TSFString;
  FieldVal109: TSFBool;
  FieldVal110: TMFNode;
  FieldVal111: TSFVec3f;
  FieldVal112: TSFRotation;
  FieldVal113: TSFVec3f;
  FieldVal114: TSFFloat;
  FieldVal115: TSFFloat;
  FieldVal116: TSFFloat;
  FieldVal117: TX3DEvent;
  FieldVal118: TX3DEvent;
  FieldVal119: TSFBool;
  FieldVal120: TMFFloat;
  FieldVal121: TMFVec3f;
  FieldVal122: TMFRotation;
  CompiledScript107: TScript107Script;
  ProtoDeclare123: TX3DPrototype;
  FieldDecl125: TX3DInterfaceDeclaration;
  FieldVal125: TSFString;
  FieldDecl126: TX3DInterfaceDeclaration;
  FieldVal126: TSFBool;
  FieldDecl127: TX3DInterfaceDeclaration;
  FieldVal127: TSFFloat;
  FieldDecl128: TX3DInterfaceDeclaration;
  FieldVal128: TSFVec3f;
  FieldDecl129: TX3DInterfaceDeclaration;
  FieldVal129: TSFRotation;
  FieldDecl130: TX3DInterfaceDeclaration;
  FieldVal130: TSFBool;
  FieldDecl131: TX3DInterfaceDeclaration;
  FieldVal131: TSFVec3f;
  FieldDecl132: TX3DInterfaceDeclaration;
  FieldVal132: TSFFloat;
  FieldDecl133: TX3DInterfaceDeclaration;
  FieldVal133: TSFFloat;
  FieldDecl134: TX3DInterfaceDeclaration;
  FieldVal134: TSFFloat;
  FieldDecl135: TX3DInterfaceDeclaration;
  FieldVal135: TX3DEvent;
  FieldDecl136: TX3DInterfaceDeclaration;
  FieldVal136: TSFBool;
  Script138: TScriptNode;
  FieldVal139: TSFString;
  FieldVal140: TSFBool;
  FieldVal141: TSFFloat;
  FieldVal142: TSFVec3f;
  FieldVal143: TSFRotation;
  FieldVal144: TSFBool;
  FieldVal145: TSFVec3f;
  FieldVal146: TSFFloat;
  FieldVal147: TSFFloat;
  FieldVal148: TSFFloat;
  FieldVal149: TX3DEvent;
  FieldVal150: TSFBool;
  CompiledScript138: TScript138Script;
  ProtoDeclare151: TX3DPrototype;
  FieldDecl153: TX3DInterfaceDeclaration;
  FieldVal153: TSFString;
  FieldDecl154: TX3DInterfaceDeclaration;
  FieldVal154: TSFBool;
  FieldDecl155: TX3DInterfaceDeclaration;
  FieldVal155: TSFFloat;
  FieldDecl156: TX3DInterfaceDeclaration;
  FieldVal156: TSFVec2f;
  FieldDecl157: TX3DInterfaceDeclaration;
  FieldVal157: TSFFloat;
  FieldDecl158: TX3DInterfaceDeclaration;
  FieldVal158: TX3DEvent;
  FieldDecl159: TX3DInterfaceDeclaration;
  FieldVal159: TX3DEvent;
  FieldDecl160: TX3DInterfaceDeclaration;
  FieldVal160: TX3DEvent;
  FieldDecl161: TX3DInterfaceDeclaration;
  FieldVal161: TMFString;
  FieldDecl162: TX3DInterfaceDeclaration;
  FieldVal162: TMFString;
  FieldDecl163: TX3DInterfaceDeclaration;
  FieldVal163: TSFBool;
  Script165: TScriptNode;
  FieldVal166: TSFString;
  FieldVal167: TSFBool;
  FieldVal168: TSFFloat;
  FieldVal169: TSFVec2f;
  FieldVal170: TSFFloat;
  FieldVal171: TX3DEvent;
  FieldVal172: TX3DEvent;
  FieldVal173: TX3DEvent;
  FieldVal174: TMFString;
  FieldVal175: TMFString;
  FieldVal176: TSFBool;
  CompiledScript165: TScript165Script;
  Background177: TBackgroundNode;
  Anchor178: TAnchorNode;
  Transform179: TTransformNode;
  Shape180: TShapeNode;
  Text181: TTextNode;
  FontStyle182: TFontStyleNode;
  Appearance183: TAppearanceNode;
  Material184: TMaterialNode;

constructor TScript50Script.Create(const AField_description: TSFString; const AField_position: TSFVec3f; const AField_orientation: TSFRotation; const AField_fieldOfView: TSFFloat; const AField_nearClipPlane: TSFFloat; const AField_farClipPlane: TSFFloat; const AField_shots: TMFNode; const AField_filterColor: TSFColor; const AField_filterTransparency: TSFFloat; const AField_upVector: TSFVec3f; const AField_fStop: TSFFloat; const AField_focusDistance: TSFFloat; const AEvent_isActive: TX3DEvent; const AEvent_totalDuration: TX3DEvent; const AField_offlineRender: TSFNode; const AField_ViewpointNode: TSFNode; const AField_NavInfoNode: TSFNode; const AField_CameraPI: TSFNode; const AField_CameraOI: TSFNode; const AField_key: TMFFloat; const AField_keyValuePosition: TMFVec3f; const AField_keyValueOrientation: TMFRotation; const AField_animated: TSFBool; const AField_initialized: TSFBool; const AField_shotCount: TSFInt32; const AField_movesCount: TSFInt32; const AField_frameCount: TSFFloat; const AField_startTime: TSFTime; const AField_priorTraceTime: TSFTime; const AField_traceEnabled: TSFBool);
begin
  inherited Create;
  Fdescription := '';
  FField_description := nil;
  FDirty_description := False;
  Fposition := Vector3(0, 0, 0);
  FField_position := nil;
  FDirty_position := False;
  Forientation := Vector4(0, 0, 1, 0);
  FField_orientation := nil;
  FDirty_orientation := False;
  FfieldOfView := 0.0;
  FField_fieldOfView := nil;
  FDirty_fieldOfView := False;
  FnearClipPlane := 0.0;
  FField_nearClipPlane := nil;
  FDirty_nearClipPlane := False;
  FfarClipPlane := 0.0;
  FField_farClipPlane := nil;
  FDirty_farClipPlane := False;
  Fshots := 0;
  FField_shots := nil;
  FDirty_shots := False;
  FfilterColor := Vector3(0, 0, 0);
  FField_filterColor := nil;
  FDirty_filterColor := False;
  FfilterTransparency := 0.0;
  FField_filterTransparency := nil;
  FDirty_filterTransparency := False;
  FupVector := Vector3(0, 0, 0);
  FField_upVector := nil;
  FDirty_upVector := False;
  FfStop := 0.0;
  FField_fStop := nil;
  FDirty_fStop := False;
  FfocusDistance := 0.0;
  FField_focusDistance := nil;
  FDirty_focusDistance := False;
  FisActive := False;
  FEvent_isActive := nil;
  FBack_isActive := TSFBool.Create(nil, False, 'isActive', False);
  FDirty_isActive := False;
  FtotalDuration := 0.0;
  FEvent_totalDuration := nil;
  FBack_totalDuration := TSFTime.Create(nil, False, 'totalDuration', 0.0);
  FDirty_totalDuration := False;
  FofflineRender := nil;
  FField_offlineRender := nil;
  FDirty_offlineRender := False;
  FViewpointNode := nil;
  FNavInfoNode := nil;
  FCameraPI := nil;
  FCameraOI := nil;
  Fkey := 0;
  FField_key := nil;
  FDirty_key := False;
  FkeyValuePosition := 0;
  FField_keyValuePosition := nil;
  FDirty_keyValuePosition := False;
  FkeyValueOrientation := 0;
  FField_keyValueOrientation := nil;
  FDirty_keyValueOrientation := False;
  Fanimated := False;
  FField_animated := nil;
  FDirty_animated := False;
  Finitialized := False;
  FshotCount := 0;
  FmovesCount := 0;
  FframeCount := 0.0;
  FstartTime := 0.0;
  FpriorTraceTime := 0.0;
  FtraceEnabled := False;
  FField_description := AField_description;
  if AField_description <> nil then Fdescription := AField_description.Value;
  FField_position := AField_position;
  if AField_position <> nil then Fposition := AField_position.Value;
  FField_orientation := AField_orientation;
  if AField_orientation <> nil then Forientation := AField_orientation.Value;
  FField_fieldOfView := AField_fieldOfView;
  if AField_fieldOfView <> nil then FfieldOfView := AField_fieldOfView.Value;
  FField_nearClipPlane := AField_nearClipPlane;
  if AField_nearClipPlane <> nil then FnearClipPlane := AField_nearClipPlane.Value;
  FField_farClipPlane := AField_farClipPlane;
  if AField_farClipPlane <> nil then FfarClipPlane := AField_farClipPlane.Value;
  FField_shots := AField_shots;
  if AField_shots <> nil then Fshots := AField_shots.Value;
  FField_filterColor := AField_filterColor;
  if AField_filterColor <> nil then FfilterColor := AField_filterColor.Value;
  FField_filterTransparency := AField_filterTransparency;
  if AField_filterTransparency <> nil then FfilterTransparency := AField_filterTransparency.Value;
  FField_upVector := AField_upVector;
  if AField_upVector <> nil then FupVector := AField_upVector.Value;
  FField_fStop := AField_fStop;
  if AField_fStop <> nil then FfStop := AField_fStop.Value;
  FField_focusDistance := AField_focusDistance;
  if AField_focusDistance <> nil then FfocusDistance := AField_focusDistance.Value;
  FEvent_isActive := AEvent_isActive;
  FEvent_totalDuration := AEvent_totalDuration;
  FField_offlineRender := AField_offlineRender;
  if AField_offlineRender <> nil then FofflineRender := AField_offlineRender.Value;
  if AField_ViewpointNode <> nil then FViewpointNode := AField_ViewpointNode.Value;
  if AField_NavInfoNode <> nil then FNavInfoNode := AField_NavInfoNode.Value;
  if AField_CameraPI <> nil then FCameraPI := AField_CameraPI.Value;
  if AField_CameraOI <> nil then FCameraOI := AField_CameraOI.Value;
  FField_key := AField_key;
  if AField_key <> nil then Fkey := AField_key.Value;
  FField_keyValuePosition := AField_keyValuePosition;
  if AField_keyValuePosition <> nil then FkeyValuePosition := AField_keyValuePosition.Value;
  FField_keyValueOrientation := AField_keyValueOrientation;
  if AField_keyValueOrientation <> nil then FkeyValueOrientation := AField_keyValueOrientation.Value;
  FField_animated := AField_animated;
  if AField_animated <> nil then Fanimated := AField_animated.Value;
  if AField_initialized <> nil then Finitialized := AField_initialized.Value;
  if AField_shotCount <> nil then FshotCount := AField_shotCount.Value;
  if AField_movesCount <> nil then FmovesCount := AField_movesCount.Value;
  if AField_frameCount <> nil then FframeCount := AField_frameCount.Value;
  if AField_startTime <> nil then FstartTime := AField_startTime.Value;
  if AField_priorTraceTime <> nil then FpriorTraceTime := AField_priorTraceTime.Value;
  if AField_traceEnabled <> nil then FtraceEnabled := AField_traceEnabled.Value;
end;

destructor TScript50Script.Destroy;
begin
  FreeAndNil(FBack_isActive);
  FreeAndNil(FBack_totalDuration);
  inherited Destroy;
end;

procedure TScript50Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_description then
  begin
    FDirty_description := False;
    if FField_description <> nil then
      FField_description.Send(Fdescription, Time);
  end;
  if FDirty_position then
  begin
    FDirty_position := False;
    if FField_position <> nil then
      FField_position.Send(Fposition, Time);
  end;
  if FDirty_orientation then
  begin
    FDirty_orientation := False;
    if FField_orientation <> nil then
      FField_orientation.Send(Forientation, Time);
  end;
  if FDirty_fieldOfView then
  begin
    FDirty_fieldOfView := False;
    if FField_fieldOfView <> nil then
      FField_fieldOfView.Send(FfieldOfView, Time);
  end;
  if FDirty_nearClipPlane then
  begin
    FDirty_nearClipPlane := False;
    if FField_nearClipPlane <> nil then
      FField_nearClipPlane.Send(FnearClipPlane, Time);
  end;
  if FDirty_farClipPlane then
  begin
    FDirty_farClipPlane := False;
    if FField_farClipPlane <> nil then
      FField_farClipPlane.Send(FfarClipPlane, Time);
  end;
  if FDirty_shots then
  begin
    FDirty_shots := False;
    if FField_shots <> nil then
      FField_shots.Send(Fshots, Time);
  end;
  if FDirty_filterColor then
  begin
    FDirty_filterColor := False;
    if FField_filterColor <> nil then
      FField_filterColor.Send(FfilterColor, Time);
  end;
  if FDirty_filterTransparency then
  begin
    FDirty_filterTransparency := False;
    if FField_filterTransparency <> nil then
      FField_filterTransparency.Send(FfilterTransparency, Time);
  end;
  if FDirty_upVector then
  begin
    FDirty_upVector := False;
    if FField_upVector <> nil then
      FField_upVector.Send(FupVector, Time);
  end;
  if FDirty_fStop then
  begin
    FDirty_fStop := False;
    if FField_fStop <> nil then
      FField_fStop.Send(FfStop, Time);
  end;
  if FDirty_focusDistance then
  begin
    FDirty_focusDistance := False;
    if FField_focusDistance <> nil then
      FField_focusDistance.Send(FfocusDistance, Time);
  end;
  if FDirty_isActive then
  begin
    FDirty_isActive := False;
    if FEvent_isActive <> nil then
    begin
      FBack_isActive.Value := FisActive;
      FEvent_isActive.Send(FBack_isActive, Time);
    end;
  end;
  if FDirty_totalDuration then
  begin
    FDirty_totalDuration := False;
    if FEvent_totalDuration <> nil then
    begin
      FBack_totalDuration.Value := FtotalDuration;
      FEvent_totalDuration.Send(FBack_totalDuration, Time);
    end;
  end;
  if FDirty_offlineRender then
  begin
    FDirty_offlineRender := False;
    if FField_offlineRender <> nil then
      FField_offlineRender.Send(FofflineRender, Time);
  end;
  if FDirty_key then
  begin
    FDirty_key := False;
    if FField_key <> nil then
      FField_key.Send(Fkey, Time);
  end;
  if FDirty_keyValuePosition then
  begin
    FDirty_keyValuePosition := False;
    if FField_keyValuePosition <> nil then
      FField_keyValuePosition.Send(FkeyValuePosition, Time);
  end;
  if FDirty_keyValueOrientation then
  begin
    FDirty_keyValueOrientation := False;
    if FField_keyValueOrientation <> nil then
      FField_keyValueOrientation.Send(FkeyValueOrientation, Time);
  end;
  if FDirty_animated then
  begin
    FDirty_animated := False;
    if FField_animated <> nil then
      FField_animated.Send(Fanimated, Time);
  end;
end;

procedure TScript50Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script50_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script50_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
  Scene.RegisterCompiledScript('Script50_set_bind', {$ifdef FPC}@{$endif}Set_bind);
  Scene.RegisterCompiledScript('Script50_set_description', {$ifdef FPC}@{$endif}Set_description);
  Scene.RegisterCompiledScript('Script50_set_position', {$ifdef FPC}@{$endif}Set_position);
  Scene.RegisterCompiledScript('Script50_set_orientation', {$ifdef FPC}@{$endif}Set_orientation);
  Scene.RegisterCompiledScript('Script50_set_fieldOfView', {$ifdef FPC}@{$endif}Set_fieldOfView);
  Scene.RegisterCompiledScript('Script50_set_nearClipPlane', {$ifdef FPC}@{$endif}Set_nearClipPlane);
  Scene.RegisterCompiledScript('Script50_set_farClipPlane', {$ifdef FPC}@{$endif}Set_farClipPlane);
  Scene.RegisterCompiledScript('Script50_set_shots', {$ifdef FPC}@{$endif}Set_shots);
  Scene.RegisterCompiledScript('Script50_set_filterColor', {$ifdef FPC}@{$endif}Set_filterColor);
  Scene.RegisterCompiledScript('Script50_set_filterTransparency', {$ifdef FPC}@{$endif}Set_filterTransparency);
  Scene.RegisterCompiledScript('Script50_set_upVector', {$ifdef FPC}@{$endif}Set_upVector);
  Scene.RegisterCompiledScript('Script50_set_fStop', {$ifdef FPC}@{$endif}Set_fStop);
  Scene.RegisterCompiledScript('Script50_set_focusDistance', {$ifdef FPC}@{$endif}Set_focusDistance);
  Scene.RegisterCompiledScript('Script50_set_offlineRender', {$ifdef FPC}@{$endif}Set_offlineRender);
  Scene.RegisterCompiledScript('Script50_set_key', {$ifdef FPC}@{$endif}Set_key);
  Scene.RegisterCompiledScript('Script50_set_keyValuePosition', {$ifdef FPC}@{$endif}Set_keyValuePosition);
  Scene.RegisterCompiledScript('Script50_set_keyValueOrientation', {$ifdef FPC}@{$endif}Set_keyValueOrientation);
  Scene.RegisterCompiledScript('Script50_set_animated', {$ifdef FPC}@{$endif}Set_animated);
end;

procedure TScript50Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  FNavInfoNode.avatarSize[0] := FnearClipPlane;
  AlwaysPrint('initialize complete', Time);
  FlushOutputs(Time);
end;

procedure TScript50Script.CheckShots(const eventValue: Single; const Time: TX3DTime);
var
  k: Integer;
  durationFloat: Single;
  shotVector: Single;
begin
  TracePrint('checkShots() method should only occur after initialize() methods in all other Scripts are complete', Time);
  FtotalDuration := 0; FDirty_totalDuration := True;
  FshotCount := Length(Fshots);
  FmovesCount := 0;
  for i := 0 to (FshotCount) - 1 do
  begin
    TracePrint('shots[' + i + '].moves.length=' + Length(Fshots[i].moves), Time);
    FmovesCount := FmovesCount + (Length(Fshots[i].moves));
    FtotalDuration := FtotalDuration + Fshots[i].shotDuration; FDirty_totalDuration := True;
    if Length(Fshots[i].moves) = 0 then
    begin
      AlwaysPrint('warning: CameraShot[' + i + '][' + Fshots[i].description + '] has no contained CameraMove nodes', Time);
    end;
  end;
  if FshotCount = 0 then
  begin
    AlwaysPrint('warning: no CameraShot nodes found for the shots, nothing to do!', Time);
    Exit;
  end
  else if FmovesCount = 0 then
  begin
    AlwaysPrint('warning: no CameraMove nodes found for the shots, nothing to do!', Time);
    Exit;
  end
  else if FtotalDuration = 0 then
  begin
    AlwaysPrint('warning: totalDuration = 0 seconds, nothing to do!', Time);
    Exit;
  end;
  TracePrint('number of contained CameraShot nodes=' + FshotCount, Time);
  TracePrint('number of contained CameraMove nodes=' + FmovesCount, Time);
  TracePrint('totalDuration=' + FtotalDuration + ' seconds for all shots and moves', Time);
  k := 0;
  for i := 0 to (FshotCount) - 1 do
  begin
    if i = 0 then
    begin
      Fkey[0] := 0.0; FDirty_key := True;
      FkeyValuePosition[0] := Fshots[i].initialPosition; FDirty_keyValuePosition := True;
      FkeyValueOrientation[0] := Fshots[i].initialOrientation; FDirty_keyValueOrientation := True;
    end
    else
    begin
      Fkey[k + 1] := Fkey[k]; FDirty_key := True;
      FkeyValuePosition[k + 1] := Fshots[i].initialPosition; FDirty_keyValuePosition := True;
      FkeyValueOrientation[k + 1] := Fshots[i].initialOrientation; FDirty_keyValueOrientation := True;
      k := k + 1;
    end;
    TracePrint(Fshots[i].description, Time);
    TracePrint('shots[i].moves.length=' + Length(Fshots[i].moves), Time);
    for j := 0 to (Length(Fshots[i].moves)) - 1 do
    begin
      durationFloat := Fshots[i].moves[j].duration;
      Fkey[k + 1] := Fkey[k] + durationFloat / FtotalDuration; FDirty_key := True;
      FkeyValuePosition[k + 1] := Fshots[i].moves[j].goalPosition; FDirty_keyValuePosition := True;
      if not (Fanimated) then
      begin
        FkeyValueOrientation[k + 1] := Fshots[i].moves[j].goalOrientation; FDirty_keyValueOrientation := True;
      end
      else
      begin
        shotVector := FViewpointNode.position.subtract(Fshots[i].moves[j].goalAimPoint).Normalize;
        if shotVector.Length >= 0 then
        begin
          Fshots[i].moves[j].goalOrientation := Vector4(Vector3(0, 0, 1), shotVector); FDirty_shots := True;
          FkeyValueOrientation[k + 1] := Fshots[i].moves[j].goalOrientation; FDirty_keyValueOrientation := True;
        end
        else
        begin
          FkeyValueOrientation[k + 1] := FkeyValueOrientation[k]; FDirty_keyValueOrientation := True;
        end;
        TracePrint('shots[' + i + '].moves[' + j + '].goalAimPoint=' + Fshots[i].moves[j].goalAimPoint.toString(), Time);
        TracePrint('        ViewpointNode.position=' + FViewpointNode.position.toString(), Time);
        TracePrint('          shotVector     delta=' + FViewpointNode.position.subtract(Fshots[i].moves[j].goalAimPoint).toString(), Time);
        TracePrint('          shotVector normalize=' + FViewpointNode.position.subtract(Fshots[i].moves[j].goalAimPoint).Normalize.toString(), Time);
        TracePrint('               goalOrientation=' + Fshots[i].moves[j].goalOrientation.toString(), Time);
        TracePrint('      keyValueOrientation[k+1]=' + FkeyValueOrientation[k + 1].toString() + #10, Time);
      end;
      k := k + 1;
      if not (Fanimated) then
        Fanimated := Fshots[i].moves[j].tracking; FDirty_animated := True;
      TracePrint('                key=' + Fkey, Time);
      TracePrint('   keyValuePosition=' + FkeyValuePosition, Time);
      TracePrint('keyValueOrientation=' + FkeyValueOrientation, Time);
      TracePrint('- ' + Fshots[i].moves[j].description, Time);
    end;
  end;
  TracePrint('                key=' + Fkey, Time);
  TracePrint('   keyValuePosition=' + FkeyValuePosition, Time);
  TracePrint('keyValueOrientation=' + FkeyValueOrientation, Time);
  if Length(Fkey) <> Length(FkeyValuePosition) then
  begin
    AlwaysPrint('warning: internal error during array construction, ' + 'key.length=' + Length(Fkey) + ' must equal ' + 'keyValuePosition.length=' + Length(FkeyValuePosition), Time);
  end;
  if Length(Fkey) <> Length(FkeyValueOrientation) then
  begin
    AlwaysPrint('warning: internal error during array construction, ' + 'key.length=' + Length(Fkey) + ' must equal ' + 'keyValueOrientation.length=' + Length(FkeyValueOrientation), Time);
  end;
  if Length(Fkey) <> FshotCount + FmovesCount then
  begin
    AlwaysPrint('warning: internal error during array construction, ' + 'key.length=' + Length(Fkey) + ' must equal ' + '(shotCount + movesCount)=' + FshotCount + FmovesCount, Time);
  end;
  TracePrint('           animated=' + Fanimated, Time);
  FCameraPI.key := Fkey;
  FCameraOI.key := Fkey;
  FCameraPI.keyValue := FkeyValuePosition;
  FCameraOI.keyValue := FkeyValueOrientation;
  if not (Fanimated) then
  begin
    TracePrint('<PositionInterpolator    DEF=''CameraPositionInterpolator''    key=''' + StripBrackets(FCameraPI.key, Time) + ''' keyValue=''' + StripBrackets(FCameraPI.keyValue, Time) + '''/>', Time);
    TracePrint('<OrientationInterpolator DEF=''CameraOrientationInterpolator'' key=''' + StripBrackets(FCameraOI.key, Time) + ''' keyValue=''' + StripBrackets(FCameraOI.keyValue, Time) + '''/>', Time);
  end;
  TracePrint('checkShots() complete', Time);
end;

procedure TScript50Script.StripBrackets(const fieldArray: Single; const Time: TX3DTime);
begin
  outputString := '';
  for i := 0 to (Length(fieldArray)) - 1 do
  begin
    outputString := outputString + (fieldArray[i].toString());
    if i < Length(fieldArray) - 1 then
      outputString := outputString + (' ');
  end;
  Result := outputString;
  Exit;
end;

procedure TScript50Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
begin
  if Fanimated then
    CheckShots(True, Time);
  if FframeCount = 0 then
  begin
    AlwaysPrint('Animation loop commencing, timestamp=' + timestamp, Time);
    FstartTime := timestamp;
    FpriorTraceTime := timestamp;
    AlwaysPrint('shotClock=' + timestamp - FstartTime + ' seconds, frameCount=' + FframeCount + ', fraction=' + (Value as TSFFloat).Value + ', position=' + FViewpointNode.position.toString() + ', orientation=' + FViewpointNode.orientation.toString(), Time);
    if Fanimated then
    begin
      TracePrint('  <PositionInterpolator    DEF=''CameraPositionInterpolator''    key=''' + StripBrackets(FCameraPI.key, Time) + ''' keyValue=''' + StripBrackets(FCameraPI.keyValue, Time) + '''/>', Time);
      TracePrint('  <OrientationInterpolator DEF=''CameraOrientationInterpolator'' key=''' + StripBrackets(FCameraOI.key, Time) + ''' keyValue=''' + StripBrackets(FCameraOI.keyValue, Time) + '''/>', Time);
    end;
  end
  else if timestamp - FpriorTraceTime >= 1.0 then
  begin
    AlwaysPrint('shotClock=' + timestamp - FstartTime + ' seconds, frameCount=' + FframeCount + ', fraction=' + (Value as TSFFloat).Value + ', position=' + FViewpointNode.position.toString() + ', orientation=' + FViewpointNode.orientation.toString(), Time);
    FpriorTraceTime := timestamp;
    if Fanimated then
    begin
      TracePrint('  <PositionInterpolator    DEF=''CameraPositionInterpolator''    key=''' + StripBrackets(FCameraPI.key, Time) + ''' keyValue=''' + StripBrackets(FCameraPI.keyValue, Time) + '''/>', Time);
      AlwaysPrint('  <OrientationInterpolator DEF=''CameraOrientationInterpolator'' key=''' + StripBrackets(FCameraOI.key, Time) + ''' keyValue=''' + StripBrackets(FCameraOI.keyValue, Time) + '''/>', Time);
    end;
  end;
  if (Value as TSFFloat).Value = 0 then
  begin
    FframeCount := FframeCount + 1;
  end
  else if (Value as TSFFloat).Value = 1 then
  begin
    AlwaysPrint('shotClock=' + timestamp - FstartTime + ', frameCount=' + FframeCount + ', fraction=' + (Value as TSFFloat).Value + ', position=' + FViewpointNode.position.toString() + ', orientation=' + FViewpointNode.orientation.toString(), Time);
    if Fanimated then
    begin
    end;
    AlwaysPrint('Animation loop complete.', Time);
  end
  else
  begin
    FframeCount := FframeCount + 1;
  end;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_bind(Value: TX3DField; const Time: TX3DTime);
begin
  if Finitialized = False then
  begin
    CheckShots(True, Time);
    Finitialized := True;
  end;
  if (Value as TSFBool).Value then
  begin
    TracePrint('Camera has been bound', Time);
  end
  else
  begin
    TracePrint('Camera has been unbound', Time);
  end;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_description(Value: TX3DField; const Time: TX3DTime);
begin
  Fdescription := (Value as TSFString).Value; FDirty_description := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_position(Value: TX3DField; const Time: TX3DTime);
begin
  Fposition := (Value as TSFVec3f).Value; FDirty_position := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_orientation(Value: TX3DField; const Time: TX3DTime);
begin
  Forientation := (Value as TSFRotation).Value; FDirty_orientation := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_fieldOfView(Value: TX3DField; const Time: TX3DTime);
begin
  FfieldOfView := (Value as TSFFloat).Value; FDirty_fieldOfView := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_nearClipPlane(Value: TX3DField; const Time: TX3DTime);
begin
  FnearClipPlane := (Value as TSFFloat).Value; FDirty_nearClipPlane := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_farClipPlane(Value: TX3DField; const Time: TX3DTime);
begin
  FfarClipPlane := (Value as TSFFloat).Value; FDirty_farClipPlane := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_shots(Value: TX3DField; const Time: TX3DTime);
begin
  Fshots := (Value as TMFNode).Value; FDirty_shots := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_filterColor(Value: TX3DField; const Time: TX3DTime);
begin
  FfilterColor := (Value as TSFColor).Value; FDirty_filterColor := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_filterTransparency(Value: TX3DField; const Time: TX3DTime);
begin
  FfilterTransparency := (Value as TSFFloat).Value; FDirty_filterTransparency := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_upVector(Value: TX3DField; const Time: TX3DTime);
begin
  FupVector := (Value as TSFVec3f).Value; FDirty_upVector := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_fStop(Value: TX3DField; const Time: TX3DTime);
begin
  FfStop := (Value as TSFFloat).Value; FDirty_fStop := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_focusDistance(Value: TX3DField; const Time: TX3DTime);
begin
  FfocusDistance := (Value as TSFFloat).Value; FDirty_focusDistance := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_offlineRender(Value: TX3DField; const Time: TX3DTime);
begin
  FofflineRender := (Value as TSFNode).Value; FDirty_offlineRender := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_key(Value: TX3DField; const Time: TX3DTime);
begin
  Fkey := (Value as TMFFloat).Value; FDirty_key := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_keyValuePosition(Value: TX3DField; const Time: TX3DTime);
begin
  FkeyValuePosition := (Value as TMFVec3f).Value; FDirty_keyValuePosition := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_keyValueOrientation(Value: TX3DField; const Time: TX3DTime);
begin
  FkeyValueOrientation := (Value as TMFRotation).Value; FDirty_keyValueOrientation := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.Set_animated(Value: TX3DField; const Time: TX3DTime);
begin
  Fanimated := (Value as TSFBool).Value; FDirty_animated := True;
  FlushOutputs(Time);
end;

procedure TScript50Script.TracePrint(const outputValue: Single; const Time: TX3DTime);
begin
  if FtraceEnabled then
    AlwaysPrint(outputValue, Time);
end;

procedure TScript50Script.AlwaysPrint(const outputValue: Single; const Time: TX3DTime);
var
  outputString: Single;
begin
  outputString := outputValue.toString();
  if outputString = nil then
    outputString := outputValue;
  if Length(Fdescription) > 0 then
    WriteLn('[Camera: ' + Fdescription + '] ' + outputString + #10);
  else
    WriteLn('[Camera] ' + outputString + #10);
end;

constructor TScript107Script.Create(const AField_description: TSFString; const AField_enabled: TSFBool; const AField_moves: TMFNode; const AField_initialPosition: TSFVec3f; const AField_initialOrientation: TSFRotation; const AField_initialAimPoint: TSFVec3f; const AField_initialFieldOfView: TSFFloat; const AField_initialFStop: TSFFloat; const AField_initialFocusDistance: TSFFloat; const AEvent_shotDuration: TX3DEvent; const AEvent_isActive: TX3DEvent; const AField_traceEnabled: TSFBool; const AField_key: TMFFloat; const AField_keyValuePosition: TMFVec3f; const AField_keyValueOrientation: TMFRotation);
begin
  inherited Create;
  Fdescription := '';
  FField_description := nil;
  FDirty_description := False;
  Fenabled := False;
  FField_enabled := nil;
  FDirty_enabled := False;
  Fmoves := 0;
  FField_moves := nil;
  FDirty_moves := False;
  FinitialPosition := Vector3(0, 0, 0);
  FField_initialPosition := nil;
  FDirty_initialPosition := False;
  FinitialOrientation := Vector4(0, 0, 1, 0);
  FField_initialOrientation := nil;
  FDirty_initialOrientation := False;
  FinitialAimPoint := Vector3(0, 0, 0);
  FField_initialAimPoint := nil;
  FDirty_initialAimPoint := False;
  FinitialFieldOfView := 0.0;
  FField_initialFieldOfView := nil;
  FDirty_initialFieldOfView := False;
  FinitialFStop := 0.0;
  FField_initialFStop := nil;
  FDirty_initialFStop := False;
  FinitialFocusDistance := 0.0;
  FField_initialFocusDistance := nil;
  FDirty_initialFocusDistance := False;
  FshotDuration := 0.0;
  FEvent_shotDuration := nil;
  FBack_shotDuration := TSFTime.Create(nil, False, 'shotDuration', 0.0);
  FDirty_shotDuration := False;
  FisActive := False;
  FEvent_isActive := nil;
  FBack_isActive := TSFBool.Create(nil, False, 'isActive', False);
  FDirty_isActive := False;
  FtraceEnabled := False;
  Fkey := 0;
  FField_key := nil;
  FDirty_key := False;
  FkeyValuePosition := 0;
  FField_keyValuePosition := nil;
  FDirty_keyValuePosition := False;
  FkeyValueOrientation := 0;
  FField_keyValueOrientation := nil;
  FDirty_keyValueOrientation := False;
  FField_description := AField_description;
  if AField_description <> nil then Fdescription := AField_description.Value;
  FField_enabled := AField_enabled;
  if AField_enabled <> nil then Fenabled := AField_enabled.Value;
  FField_moves := AField_moves;
  if AField_moves <> nil then Fmoves := AField_moves.Value;
  FField_initialPosition := AField_initialPosition;
  if AField_initialPosition <> nil then FinitialPosition := AField_initialPosition.Value;
  FField_initialOrientation := AField_initialOrientation;
  if AField_initialOrientation <> nil then FinitialOrientation := AField_initialOrientation.Value;
  FField_initialAimPoint := AField_initialAimPoint;
  if AField_initialAimPoint <> nil then FinitialAimPoint := AField_initialAimPoint.Value;
  FField_initialFieldOfView := AField_initialFieldOfView;
  if AField_initialFieldOfView <> nil then FinitialFieldOfView := AField_initialFieldOfView.Value;
  FField_initialFStop := AField_initialFStop;
  if AField_initialFStop <> nil then FinitialFStop := AField_initialFStop.Value;
  FField_initialFocusDistance := AField_initialFocusDistance;
  if AField_initialFocusDistance <> nil then FinitialFocusDistance := AField_initialFocusDistance.Value;
  FEvent_shotDuration := AEvent_shotDuration;
  FEvent_isActive := AEvent_isActive;
  if AField_traceEnabled <> nil then FtraceEnabled := AField_traceEnabled.Value;
  FField_key := AField_key;
  if AField_key <> nil then Fkey := AField_key.Value;
  FField_keyValuePosition := AField_keyValuePosition;
  if AField_keyValuePosition <> nil then FkeyValuePosition := AField_keyValuePosition.Value;
  FField_keyValueOrientation := AField_keyValueOrientation;
  if AField_keyValueOrientation <> nil then FkeyValueOrientation := AField_keyValueOrientation.Value;
end;

destructor TScript107Script.Destroy;
begin
  FreeAndNil(FBack_shotDuration);
  FreeAndNil(FBack_isActive);
  inherited Destroy;
end;

procedure TScript107Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_description then
  begin
    FDirty_description := False;
    if FField_description <> nil then
      FField_description.Send(Fdescription, Time);
  end;
  if FDirty_enabled then
  begin
    FDirty_enabled := False;
    if FField_enabled <> nil then
      FField_enabled.Send(Fenabled, Time);
  end;
  if FDirty_moves then
  begin
    FDirty_moves := False;
    if FField_moves <> nil then
      FField_moves.Send(Fmoves, Time);
  end;
  if FDirty_initialPosition then
  begin
    FDirty_initialPosition := False;
    if FField_initialPosition <> nil then
      FField_initialPosition.Send(FinitialPosition, Time);
  end;
  if FDirty_initialOrientation then
  begin
    FDirty_initialOrientation := False;
    if FField_initialOrientation <> nil then
      FField_initialOrientation.Send(FinitialOrientation, Time);
  end;
  if FDirty_initialAimPoint then
  begin
    FDirty_initialAimPoint := False;
    if FField_initialAimPoint <> nil then
      FField_initialAimPoint.Send(FinitialAimPoint, Time);
  end;
  if FDirty_initialFieldOfView then
  begin
    FDirty_initialFieldOfView := False;
    if FField_initialFieldOfView <> nil then
      FField_initialFieldOfView.Send(FinitialFieldOfView, Time);
  end;
  if FDirty_initialFStop then
  begin
    FDirty_initialFStop := False;
    if FField_initialFStop <> nil then
      FField_initialFStop.Send(FinitialFStop, Time);
  end;
  if FDirty_initialFocusDistance then
  begin
    FDirty_initialFocusDistance := False;
    if FField_initialFocusDistance <> nil then
      FField_initialFocusDistance.Send(FinitialFocusDistance, Time);
  end;
  if FDirty_shotDuration then
  begin
    FDirty_shotDuration := False;
    if FEvent_shotDuration <> nil then
    begin
      FBack_shotDuration.Value := FshotDuration;
      FEvent_shotDuration.Send(FBack_shotDuration, Time);
    end;
  end;
  if FDirty_isActive then
  begin
    FDirty_isActive := False;
    if FEvent_isActive <> nil then
    begin
      FBack_isActive.Value := FisActive;
      FEvent_isActive.Send(FBack_isActive, Time);
    end;
  end;
  if FDirty_key then
  begin
    FDirty_key := False;
    if FField_key <> nil then
      FField_key.Send(Fkey, Time);
  end;
  if FDirty_keyValuePosition then
  begin
    FDirty_keyValuePosition := False;
    if FField_keyValuePosition <> nil then
      FField_keyValuePosition.Send(FkeyValuePosition, Time);
  end;
  if FDirty_keyValueOrientation then
  begin
    FDirty_keyValueOrientation := False;
    if FField_keyValueOrientation <> nil then
      FField_keyValueOrientation.Send(FkeyValueOrientation, Time);
  end;
end;

procedure TScript107Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script107_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script107_set_description', {$ifdef FPC}@{$endif}Set_description);
  Scene.RegisterCompiledScript('Script107_set_enabled', {$ifdef FPC}@{$endif}Set_enabled);
  Scene.RegisterCompiledScript('Script107_set_moves', {$ifdef FPC}@{$endif}Set_moves);
  Scene.RegisterCompiledScript('Script107_set_initialPosition', {$ifdef FPC}@{$endif}Set_initialPosition);
  Scene.RegisterCompiledScript('Script107_set_initialOrientation', {$ifdef FPC}@{$endif}Set_initialOrientation);
  Scene.RegisterCompiledScript('Script107_set_initialAimPoint', {$ifdef FPC}@{$endif}Set_initialAimPoint);
  Scene.RegisterCompiledScript('Script107_set_initialFieldOfView', {$ifdef FPC}@{$endif}Set_initialFieldOfView);
  Scene.RegisterCompiledScript('Script107_set_initialFStop', {$ifdef FPC}@{$endif}Set_initialFStop);
  Scene.RegisterCompiledScript('Script107_set_initialFocusDistance', {$ifdef FPC}@{$endif}Set_initialFocusDistance);
  Scene.RegisterCompiledScript('Script107_set_key', {$ifdef FPC}@{$endif}Set_key);
  Scene.RegisterCompiledScript('Script107_set_keyValuePosition', {$ifdef FPC}@{$endif}Set_keyValuePosition);
  Scene.RegisterCompiledScript('Script107_set_keyValueOrientation', {$ifdef FPC}@{$endif}Set_keyValueOrientation);
end;

procedure TScript107Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  FshotDuration := 0; FDirty_shotDuration := True;
  for i := 0 to (Length(Fmoves)) - 1 do
  begin
    FshotDuration := FshotDuration + Fmoves[i].duration; FDirty_shotDuration := True;
  end;
  AlwaysPrint('number of contained CameraMove nodes=' + Length(Fmoves) + ', shotDuration=' + FshotDuration + ' seconds', Time);
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_description(Value: TX3DField; const Time: TX3DTime);
begin
  Fdescription := (Value as TSFString).Value; FDirty_description := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_enabled(Value: TX3DField; const Time: TX3DTime);
begin
  Fenabled := (Value as TSFBool).Value; FDirty_enabled := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_moves(Value: TX3DField; const Time: TX3DTime);
begin
  Fmoves := (Value as TMFNode).Value; FDirty_moves := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_initialPosition(Value: TX3DField; const Time: TX3DTime);
begin
  FinitialPosition := (Value as TSFVec3f).Value; FDirty_initialPosition := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_initialOrientation(Value: TX3DField; const Time: TX3DTime);
begin
  FinitialOrientation := (Value as TSFRotation).Value; FDirty_initialOrientation := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_initialAimPoint(Value: TX3DField; const Time: TX3DTime);
begin
  FinitialAimPoint := (Value as TSFVec3f).Value; FDirty_initialAimPoint := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_initialFieldOfView(Value: TX3DField; const Time: TX3DTime);
begin
  FinitialFieldOfView := (Value as TSFFloat).Value; FDirty_initialFieldOfView := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_initialFStop(Value: TX3DField; const Time: TX3DTime);
begin
  FinitialFStop := (Value as TSFFloat).Value; FDirty_initialFStop := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_initialFocusDistance(Value: TX3DField; const Time: TX3DTime);
begin
  FinitialFocusDistance := (Value as TSFFloat).Value; FDirty_initialFocusDistance := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_key(Value: TX3DField; const Time: TX3DTime);
begin
  Fkey := (Value as TMFFloat).Value; FDirty_key := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_keyValuePosition(Value: TX3DField; const Time: TX3DTime);
begin
  FkeyValuePosition := (Value as TMFVec3f).Value; FDirty_keyValuePosition := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.Set_keyValueOrientation(Value: TX3DField; const Time: TX3DTime);
begin
  FkeyValueOrientation := (Value as TMFRotation).Value; FDirty_keyValueOrientation := True;
  FlushOutputs(Time);
end;

procedure TScript107Script.TracePrint(const outputValue: Single; const Time: TX3DTime);
begin
  if FtraceEnabled then
    AlwaysPrint(outputValue, Time);
end;

procedure TScript107Script.AlwaysPrint(const outputValue: Single; const Time: TX3DTime);
var
  outputString: Single;
begin
  outputString := outputValue.toString();
  if outputString = nil then
    outputString := outputValue;
  if Length(Fdescription) > 0 then
    WriteLn('[CameraShot: ' + Fdescription + '] ' + outputString + #10);
  else
    WriteLn('[CameraShot] ' + outputString + #10);
end;

constructor TScript138Script.Create(const AField_description: TSFString; const AField_enabled: TSFBool; const AField_duration: TSFFloat; const AField_goalPosition: TSFVec3f; const AField_goalOrientation: TSFRotation; const AField_tracking: TSFBool; const AField_goalAimPoint: TSFVec3f; const AField_goalFieldOfView: TSFFloat; const AField_goalFStop: TSFFloat; const AField_goalFocusDistance: TSFFloat; const AEvent_isActive: TX3DEvent; const AField_traceEnabled: TSFBool);
begin
  inherited Create;
  Fdescription := '';
  FField_description := nil;
  FDirty_description := False;
  Fenabled := False;
  FField_enabled := nil;
  FDirty_enabled := False;
  Fduration := 0.0;
  FField_duration := nil;
  FDirty_duration := False;
  FgoalPosition := Vector3(0, 0, 0);
  FField_goalPosition := nil;
  FDirty_goalPosition := False;
  FgoalOrientation := Vector4(0, 0, 1, 0);
  FField_goalOrientation := nil;
  FDirty_goalOrientation := False;
  Ftracking := False;
  FField_tracking := nil;
  FDirty_tracking := False;
  FgoalAimPoint := Vector3(0, 0, 0);
  FField_goalAimPoint := nil;
  FDirty_goalAimPoint := False;
  FgoalFieldOfView := 0.0;
  FField_goalFieldOfView := nil;
  FDirty_goalFieldOfView := False;
  FgoalFStop := 0.0;
  FField_goalFStop := nil;
  FDirty_goalFStop := False;
  FgoalFocusDistance := 0.0;
  FField_goalFocusDistance := nil;
  FDirty_goalFocusDistance := False;
  FisActive := False;
  FEvent_isActive := nil;
  FBack_isActive := TSFBool.Create(nil, False, 'isActive', False);
  FDirty_isActive := False;
  FtraceEnabled := False;
  FField_description := AField_description;
  if AField_description <> nil then Fdescription := AField_description.Value;
  FField_enabled := AField_enabled;
  if AField_enabled <> nil then Fenabled := AField_enabled.Value;
  FField_duration := AField_duration;
  if AField_duration <> nil then Fduration := AField_duration.Value;
  FField_goalPosition := AField_goalPosition;
  if AField_goalPosition <> nil then FgoalPosition := AField_goalPosition.Value;
  FField_goalOrientation := AField_goalOrientation;
  if AField_goalOrientation <> nil then FgoalOrientation := AField_goalOrientation.Value;
  FField_tracking := AField_tracking;
  if AField_tracking <> nil then Ftracking := AField_tracking.Value;
  FField_goalAimPoint := AField_goalAimPoint;
  if AField_goalAimPoint <> nil then FgoalAimPoint := AField_goalAimPoint.Value;
  FField_goalFieldOfView := AField_goalFieldOfView;
  if AField_goalFieldOfView <> nil then FgoalFieldOfView := AField_goalFieldOfView.Value;
  FField_goalFStop := AField_goalFStop;
  if AField_goalFStop <> nil then FgoalFStop := AField_goalFStop.Value;
  FField_goalFocusDistance := AField_goalFocusDistance;
  if AField_goalFocusDistance <> nil then FgoalFocusDistance := AField_goalFocusDistance.Value;
  FEvent_isActive := AEvent_isActive;
  if AField_traceEnabled <> nil then FtraceEnabled := AField_traceEnabled.Value;
end;

destructor TScript138Script.Destroy;
begin
  FreeAndNil(FBack_isActive);
  inherited Destroy;
end;

procedure TScript138Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_description then
  begin
    FDirty_description := False;
    if FField_description <> nil then
      FField_description.Send(Fdescription, Time);
  end;
  if FDirty_enabled then
  begin
    FDirty_enabled := False;
    if FField_enabled <> nil then
      FField_enabled.Send(Fenabled, Time);
  end;
  if FDirty_duration then
  begin
    FDirty_duration := False;
    if FField_duration <> nil then
      FField_duration.Send(Fduration, Time);
  end;
  if FDirty_goalPosition then
  begin
    FDirty_goalPosition := False;
    if FField_goalPosition <> nil then
      FField_goalPosition.Send(FgoalPosition, Time);
  end;
  if FDirty_goalOrientation then
  begin
    FDirty_goalOrientation := False;
    if FField_goalOrientation <> nil then
      FField_goalOrientation.Send(FgoalOrientation, Time);
  end;
  if FDirty_tracking then
  begin
    FDirty_tracking := False;
    if FField_tracking <> nil then
      FField_tracking.Send(Ftracking, Time);
  end;
  if FDirty_goalAimPoint then
  begin
    FDirty_goalAimPoint := False;
    if FField_goalAimPoint <> nil then
      FField_goalAimPoint.Send(FgoalAimPoint, Time);
  end;
  if FDirty_goalFieldOfView then
  begin
    FDirty_goalFieldOfView := False;
    if FField_goalFieldOfView <> nil then
      FField_goalFieldOfView.Send(FgoalFieldOfView, Time);
  end;
  if FDirty_goalFStop then
  begin
    FDirty_goalFStop := False;
    if FField_goalFStop <> nil then
      FField_goalFStop.Send(FgoalFStop, Time);
  end;
  if FDirty_goalFocusDistance then
  begin
    FDirty_goalFocusDistance := False;
    if FField_goalFocusDistance <> nil then
      FField_goalFocusDistance.Send(FgoalFocusDistance, Time);
  end;
  if FDirty_isActive then
  begin
    FDirty_isActive := False;
    if FEvent_isActive <> nil then
    begin
      FBack_isActive.Value := FisActive;
      FEvent_isActive.Send(FBack_isActive, Time);
    end;
  end;
end;

procedure TScript138Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script138_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script138_set_goalAimPoint', {$ifdef FPC}@{$endif}Set_goalAimPoint);
  Scene.RegisterCompiledScript('Script138_set_description', {$ifdef FPC}@{$endif}Set_description);
  Scene.RegisterCompiledScript('Script138_set_enabled', {$ifdef FPC}@{$endif}Set_enabled);
  Scene.RegisterCompiledScript('Script138_set_duration', {$ifdef FPC}@{$endif}Set_duration);
  Scene.RegisterCompiledScript('Script138_set_goalPosition', {$ifdef FPC}@{$endif}Set_goalPosition);
  Scene.RegisterCompiledScript('Script138_set_goalOrientation', {$ifdef FPC}@{$endif}Set_goalOrientation);
  Scene.RegisterCompiledScript('Script138_set_tracking', {$ifdef FPC}@{$endif}Set_tracking);
  Scene.RegisterCompiledScript('Script138_set_goalFieldOfView', {$ifdef FPC}@{$endif}Set_goalFieldOfView);
  Scene.RegisterCompiledScript('Script138_set_goalFStop', {$ifdef FPC}@{$endif}Set_goalFStop);
  Scene.RegisterCompiledScript('Script138_set_goalFocusDistance', {$ifdef FPC}@{$endif}Set_goalFocusDistance);
end;

procedure TScript138Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  AlwaysPrint('initialize goalPosition=' + FgoalPosition.toString() + ', goalOrientation=' + FgoalOrientation.toString() + ', goalAimPoint=' + FgoalAimPoint.toString(), Time);
  if Fduration < 0 then
  begin
    AlwaysPrint('error: negative duration=' + Fduration + ', reset to 0 and ignored', Time);
    Fduration := 0; FDirty_duration := True;
  end
  else if Fduration = 0 then
  begin
    AlwaysPrint('warning: duration=0, nothing to do!', Time);
  end;
  TracePrint('... initialize complete', Time);
  FlushOutputs(Time);
end;

procedure TScript138Script.Set_goalAimPoint(Value: TX3DField; const Time: TX3DTime);
begin
  goalAimPoint_changed := (Value as TSFVec3f).Value;
  TracePrint('goalAimPoint=' + FgoalAimPoint.toString(), Time);
  FlushOutputs(Time);
end;

procedure TScript138Script.Set_description(Value: TX3DField; const Time: TX3DTime);
begin
  Fdescription := (Value as TSFString).Value; FDirty_description := True;
  FlushOutputs(Time);
end;

procedure TScript138Script.Set_enabled(Value: TX3DField; const Time: TX3DTime);
begin
  Fenabled := (Value as TSFBool).Value; FDirty_enabled := True;
  FlushOutputs(Time);
end;

procedure TScript138Script.Set_duration(Value: TX3DField; const Time: TX3DTime);
begin
  Fduration := (Value as TSFFloat).Value; FDirty_duration := True;
  FlushOutputs(Time);
end;

procedure TScript138Script.Set_goalPosition(Value: TX3DField; const Time: TX3DTime);
begin
  FgoalPosition := (Value as TSFVec3f).Value; FDirty_goalPosition := True;
  FlushOutputs(Time);
end;

procedure TScript138Script.Set_goalOrientation(Value: TX3DField; const Time: TX3DTime);
begin
  FgoalOrientation := (Value as TSFRotation).Value; FDirty_goalOrientation := True;
  FlushOutputs(Time);
end;

procedure TScript138Script.Set_tracking(Value: TX3DField; const Time: TX3DTime);
begin
  Ftracking := (Value as TSFBool).Value; FDirty_tracking := True;
  FlushOutputs(Time);
end;

procedure TScript138Script.Set_goalFieldOfView(Value: TX3DField; const Time: TX3DTime);
begin
  FgoalFieldOfView := (Value as TSFFloat).Value; FDirty_goalFieldOfView := True;
  FlushOutputs(Time);
end;

procedure TScript138Script.Set_goalFStop(Value: TX3DField; const Time: TX3DTime);
begin
  FgoalFStop := (Value as TSFFloat).Value; FDirty_goalFStop := True;
  FlushOutputs(Time);
end;

procedure TScript138Script.Set_goalFocusDistance(Value: TX3DField; const Time: TX3DTime);
begin
  FgoalFocusDistance := (Value as TSFFloat).Value; FDirty_goalFocusDistance := True;
  FlushOutputs(Time);
end;

procedure TScript138Script.TracePrint(const outputValue: Single; const Time: TX3DTime);
begin
  if FtraceEnabled then
    AlwaysPrint(outputValue, Time);
end;

procedure TScript138Script.AlwaysPrint(const outputValue: Single; const Time: TX3DTime);
var
  outputString: Single;
begin
  outputString := outputValue.toString();
  if outputString = nil then
    outputString := outputValue;
  if Length(Fdescription) > 0 then
    WriteLn('[CameraMovement: ' + Fdescription + '] ' + outputString + #10);
  else
    WriteLn('[CameraMovement] ' + outputString + #10);
end;

constructor TScript165Script.Create(const AField_description: TSFString; const AField_enabled: TSFBool; const AField_frameRate: TSFFloat; const AField_frameSize: TSFVec2f; const AField_pixelAspectRatio: TSFFloat; const AEvent_progress: TX3DEvent; const AEvent_renderCompleteTime: TX3DEvent; const AField_movieFormat: TMFString; const AField_imageFormat: TMFString; const AField_traceEnabled: TSFBool);
begin
  inherited Create;
  Fdescription := '';
  FField_description := nil;
  FDirty_description := False;
  Fenabled := False;
  FField_enabled := nil;
  FDirty_enabled := False;
  FframeRate := 0.0;
  FField_frameRate := nil;
  FDirty_frameRate := False;
  FframeSize := Vector2(0, 0);
  FField_frameSize := nil;
  FDirty_frameSize := False;
  FpixelAspectRatio := 0.0;
  FField_pixelAspectRatio := nil;
  FDirty_pixelAspectRatio := False;
  Fprogress := 0.0;
  FEvent_progress := nil;
  FBack_progress := TSFFloat.Create(nil, False, 'progress', 0.0);
  FDirty_progress := False;
  FrenderCompleteTime := 0.0;
  FEvent_renderCompleteTime := nil;
  FBack_renderCompleteTime := TSFTime.Create(nil, False, 'renderCompleteTime', 0.0);
  FDirty_renderCompleteTime := False;
  FmovieFormat := 0;
  FimageFormat := 0;
  FtraceEnabled := False;
  FField_description := AField_description;
  if AField_description <> nil then Fdescription := AField_description.Value;
  FField_enabled := AField_enabled;
  if AField_enabled <> nil then Fenabled := AField_enabled.Value;
  FField_frameRate := AField_frameRate;
  if AField_frameRate <> nil then FframeRate := AField_frameRate.Value;
  FField_frameSize := AField_frameSize;
  if AField_frameSize <> nil then FframeSize := AField_frameSize.Value;
  FField_pixelAspectRatio := AField_pixelAspectRatio;
  if AField_pixelAspectRatio <> nil then FpixelAspectRatio := AField_pixelAspectRatio.Value;
  FEvent_progress := AEvent_progress;
  FEvent_renderCompleteTime := AEvent_renderCompleteTime;
  if AField_movieFormat <> nil then FmovieFormat := AField_movieFormat.Value;
  if AField_imageFormat <> nil then FimageFormat := AField_imageFormat.Value;
  if AField_traceEnabled <> nil then FtraceEnabled := AField_traceEnabled.Value;
end;

destructor TScript165Script.Destroy;
begin
  FreeAndNil(FBack_progress);
  FreeAndNil(FBack_renderCompleteTime);
  inherited Destroy;
end;

procedure TScript165Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_description then
  begin
    FDirty_description := False;
    if FField_description <> nil then
      FField_description.Send(Fdescription, Time);
  end;
  if FDirty_enabled then
  begin
    FDirty_enabled := False;
    if FField_enabled <> nil then
      FField_enabled.Send(Fenabled, Time);
  end;
  if FDirty_frameRate then
  begin
    FDirty_frameRate := False;
    if FField_frameRate <> nil then
      FField_frameRate.Send(FframeRate, Time);
  end;
  if FDirty_frameSize then
  begin
    FDirty_frameSize := False;
    if FField_frameSize <> nil then
      FField_frameSize.Send(FframeSize, Time);
  end;
  if FDirty_pixelAspectRatio then
  begin
    FDirty_pixelAspectRatio := False;
    if FField_pixelAspectRatio <> nil then
      FField_pixelAspectRatio.Send(FpixelAspectRatio, Time);
  end;
  if FDirty_progress then
  begin
    FDirty_progress := False;
    if FEvent_progress <> nil then
    begin
      FBack_progress.Value := Fprogress;
      FEvent_progress.Send(FBack_progress, Time);
    end;
  end;
  if FDirty_renderCompleteTime then
  begin
    FDirty_renderCompleteTime := False;
    if FEvent_renderCompleteTime <> nil then
    begin
      FBack_renderCompleteTime.Value := FrenderCompleteTime;
      FEvent_renderCompleteTime.Send(FBack_renderCompleteTime, Time);
    end;
  end;
end;

procedure TScript165Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script165_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script165_set_description', {$ifdef FPC}@{$endif}Set_description);
  Scene.RegisterCompiledScript('Script165_set_enabled', {$ifdef FPC}@{$endif}Set_enabled);
  Scene.RegisterCompiledScript('Script165_set_frameRate', {$ifdef FPC}@{$endif}Set_frameRate);
  Scene.RegisterCompiledScript('Script165_set_frameSize', {$ifdef FPC}@{$endif}Set_frameSize);
  Scene.RegisterCompiledScript('Script165_set_pixelAspectRatio', {$ifdef FPC}@{$endif}Set_pixelAspectRatio);
  Scene.RegisterCompiledScript('Script165_set_startTime', {$ifdef FPC}@{$endif}Set_startTime);
end;

procedure TScript165Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  TracePrint('... initialize complete', Time);
  FlushOutputs(Time);
end;

procedure TScript165Script.Set_description(Value: TX3DField; const Time: TX3DTime);
begin
  Fdescription := (Value as TSFString).Value; FDirty_description := True;
  FlushOutputs(Time);
end;

procedure TScript165Script.Set_enabled(Value: TX3DField; const Time: TX3DTime);
begin
  Fenabled := (Value as TSFBool).Value; FDirty_enabled := True;
  FlushOutputs(Time);
end;

procedure TScript165Script.Set_frameRate(Value: TX3DField; const Time: TX3DTime);
begin
  FframeRate := (Value as TSFFloat).Value; FDirty_frameRate := True;
  FlushOutputs(Time);
end;

procedure TScript165Script.Set_frameSize(Value: TX3DField; const Time: TX3DTime);
begin
  FframeSize := (Value as TSFVec2f).Value; FDirty_frameSize := True;
  FlushOutputs(Time);
end;

procedure TScript165Script.Set_pixelAspectRatio(Value: TX3DField; const Time: TX3DTime);
begin
  FpixelAspectRatio := (Value as TSFFloat).Value; FDirty_pixelAspectRatio := True;
  FlushOutputs(Time);
end;

procedure TScript165Script.Set_startTime(Value: TX3DField; const Time: TX3DTime);
begin
  FlushOutputs(Time);
end;

procedure TScript165Script.TracePrint(const outputValue: Single; const Time: TX3DTime);
begin
  if FtraceEnabled then
    AlwaysPrint(outputValue, Time);
end;

procedure TScript165Script.AlwaysPrint(const outputValue: Single; const Time: TX3DTime);
var
  outputString: Single;
begin
  outputString := outputValue.toString();
  if outputString = nil then
    outputString := outputValue;
  if Length(Fdescription) > 0 then
    WriteLn('[OfflineRender: ' + Fdescription + '] ' + outputString + #10);
  else
    WriteLn('[OfflineRender] ' + outputString + #10);
end;

procedure InitCameraPrototypesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'CameraPrototypes.x3d';
X3D0.Meta['description'] := 'Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.';
X3D0.Meta['creator'] := 'Don Brutzman and Jeff Weekley';
X3D0.Meta['created'] := '16 March 2009';
X3D0.Meta['modified'] := '25 October 2016';
X3D0.Meta['TODO'] := 'Schematron rules, backed up by initialize() checks';
X3D0.Meta['reference'] := 'BeyondViewpointCameraNodesWeb3D2009.pdf';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html';
X3D0.Meta['subject'] := 'Camera nodes for Viewpoint navigation control';
X3D0.Meta['reference'] := 'CameraExamples.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d';
X3D0.Meta['reference'] := 'https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group16 := TGroupNode.Create;
{ =============== Camera ============== }
ProtoDeclare17 := CreateEmptyPrototype('Camera');
ProtoDeclare17.X3DName := 'Camera';
ProtoDeclare17.Appinfo := 'Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.';
FieldVal19 := TSFString.CreateUndefined(nil, True, 'description');
FieldDecl19 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl19.FieldOrEvent := FieldVal19;
FieldVal19.ParentInterfaceDeclaration := FieldDecl19;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl19);
FieldVal20 := TSFVec3f.Create(nil, True, 'position', Vector3(0, 0, 10));
FieldDecl20 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl20.FieldOrEvent := FieldVal20;
FieldVal20.ParentInterfaceDeclaration := FieldDecl20;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl20);
FieldVal21 := TSFRotation.Create(nil, True, 'orientation', Vector4(0, 0, 1, 0));
FieldDecl21 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl21.FieldOrEvent := FieldVal21;
FieldVal21.ParentInterfaceDeclaration := FieldDecl21;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl21);
FieldVal22 := TSFFloat.Create(nil, True, 'fieldOfView', 0.7854);
FieldDecl22 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure InitCameraPrototypesPart1;
begin
FieldDecl22.FieldOrEvent := FieldVal22;
FieldVal22.ParentInterfaceDeclaration := FieldDecl22;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl22);
FieldVal23 := TSFFloat.CreateEvent(nil, 'set_fraction', True);
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl23);
FieldVal24 := TSFBool.CreateEvent(nil, 'set_bind', True);
FieldDecl24 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl24.FieldOrEvent := FieldVal24;
FieldVal24.ParentInterfaceDeclaration := FieldDecl24;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl24);
FieldVal25 := TSFTime.CreateEvent(nil, 'bindTime', False);
FieldDecl25 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl25.FieldOrEvent := FieldVal25;
FieldVal25.ParentInterfaceDeclaration := FieldDecl25;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl25);
FieldVal26 := TSFBool.CreateEvent(nil, 'isBound', False);
FieldDecl26 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl26.FieldOrEvent := FieldVal26;
FieldVal26.ParentInterfaceDeclaration := FieldDecl26;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl26);
FieldVal27 := TSFFloat.Create(nil, True, 'nearClipPlane', 0.25);
FieldDecl27 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl27.FieldOrEvent := FieldVal27;
FieldVal27.ParentInterfaceDeclaration := FieldDecl27;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl27);
FieldVal28 := TSFFloat.Create(nil, True, 'farClipPlane', 0);
FieldDecl28 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl28.FieldOrEvent := FieldVal28;
FieldVal28.ParentInterfaceDeclaration := FieldDecl28;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl28);
FieldVal29 := TMFNode.CreateUndefined(nil, True, 'shots');
FieldDecl29 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl29.FieldOrEvent := FieldVal29;
FieldVal29.ParentInterfaceDeclaration := FieldDecl29;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl29);
FieldVal30 := TSFBool.Create(nil, True, 'headlight', True);
FieldDecl30 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure InitCameraPrototypesPart2;
begin
FieldDecl30.FieldOrEvent := FieldVal30;
FieldVal30.ParentInterfaceDeclaration := FieldDecl30;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl30);
FieldVal31 := TSFColor.Create(nil, True, 'headlightColor', Vector3(1, 1, 1));
FieldDecl31 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl31.FieldOrEvent := FieldVal31;
FieldVal31.ParentInterfaceDeclaration := FieldDecl31;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl31);
FieldVal32 := TSFFloat.Create(nil, True, 'headlightIntensity', 1);
FieldDecl32 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl32.FieldOrEvent := FieldVal32;
FieldVal32.ParentInterfaceDeclaration := FieldDecl32;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl32);
FieldVal33 := TSFColor.Create(nil, True, 'filterColor', Vector3(1, 1, 1));
FieldDecl33 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl33.FieldOrEvent := FieldVal33;
FieldVal33.ParentInterfaceDeclaration := FieldDecl33;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl33);
FieldVal34 := TSFFloat.Create(nil, True, 'filterTransparency', 1);
FieldDecl34 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl34.FieldOrEvent := FieldVal34;
FieldVal34.ParentInterfaceDeclaration := FieldDecl34;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl34);
FieldVal35 := TSFVec3f.Create(nil, True, 'upVector', Vector3(0, 1, 0));
FieldDecl35 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl35.FieldOrEvent := FieldVal35;
FieldVal35.ParentInterfaceDeclaration := FieldDecl35;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl35);
FieldVal36 := TSFFloat.Create(nil, True, 'fStop', 5.6);
FieldDecl36 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl36.FieldOrEvent := FieldVal36;
FieldVal36.ParentInterfaceDeclaration := FieldDecl36;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl36);
FieldVal37 := TSFFloat.Create(nil, True, 'focusDistance', 10);
FieldDecl37 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl37.FieldOrEvent := FieldVal37;
FieldVal37.ParentInterfaceDeclaration := FieldDecl37;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl37);
FieldVal38 := TSFBool.CreateEvent(nil, 'isActive', False);
FieldDecl38 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure InitCameraPrototypesPart3;
begin
FieldDecl38.FieldOrEvent := FieldVal38;
FieldVal38.ParentInterfaceDeclaration := FieldDecl38;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl38);
FieldVal39 := TSFTime.CreateEvent(nil, 'totalDuration', False);
FieldDecl39 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl39.FieldOrEvent := FieldVal39;
FieldVal39.ParentInterfaceDeclaration := FieldDecl39;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl39);
FieldVal40 := TSFNode.CreateUndefined(nil, True, 'offlineRender');
FieldDecl40 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl40.FieldOrEvent := FieldVal40;
FieldVal40.ParentInterfaceDeclaration := FieldDecl40;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl40);
FieldVal41 := TSFBool.Create(nil, False, 'traceEnabled', False);
FieldDecl41 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl41.FieldOrEvent := FieldVal41;
FieldVal41.ParentInterfaceDeclaration := FieldDecl41;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl41);
Viewpoint43 := TViewpointNode.Create;
Viewpoint43.X3DName := 'CameraViewpoint';
Viewpoint43.FieldOrEvent('description', True).IsClauseNamesAdd('description');
Viewpoint43.FieldOrEvent('position', True).IsClauseNamesAdd('position');
Viewpoint43.FieldOrEvent('orientation', True).IsClauseNamesAdd('orientation');
Viewpoint43.FieldOrEvent('fieldOfView', True).IsClauseNamesAdd('fieldOfView');
Viewpoint43.FieldOrEvent('set_bind', True).IsClauseNamesAdd('set_bind');
Viewpoint43.FieldOrEvent('bindTime', True).IsClauseNamesAdd('bindTime');
Viewpoint43.FieldOrEvent('isBound', True).IsClauseNamesAdd('isBound');
ProtoDeclare17.Node.AddChildren([Viewpoint43]);
{ NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation }
NavigationInfo44 := TNavigationInfoNode.Create;
NavigationInfo44.X3DName := 'CameraNavInfo';
NavigationInfo44.SetType(['EXAMINE', 'FLY', 'ANY']);
NavigationInfo44.FieldOrEvent('set_bind', True).IsClauseNamesAdd('set_bind');
NavigationInfo44.FieldOrEvent('headlight', True).IsClauseNamesAdd('headlight');
NavigationInfo44.FieldOrEvent('visibilityLimit', True).IsClauseNamesAdd('farClipPlane');
ProtoDeclare17.Node.AddChildren([NavigationInfo44]);
{ this DirectionalLight replaces NavigationInfo headlight in order to add color capability }
DirectionalLight45 := TDirectionalLightNode.Create;
DirectionalLight45.X3DName := 'CameraDirectionalLight';
DirectionalLight45.Global := True;
end;

procedure InitCameraPrototypesPart4;
begin
{ TODO confirm other default field values match NavigationInfo spec }
DirectionalLight45.FieldOrEvent('on', True).IsClauseNamesAdd('headlight');
DirectionalLight45.FieldOrEvent('color', True).IsClauseNamesAdd('headlightColor');
DirectionalLight45.FieldOrEvent('intensity', True).IsClauseNamesAdd('headlightIntensity');
ProtoDeclare17.Node.AddChildren([DirectionalLight45]);
PositionInterpolator46 := TPositionInterpolatorNode.Create;
PositionInterpolator46.X3DName := 'CameraPositionInterpolator';
PositionInterpolator46.SetKey([0, 1]);
PositionInterpolator46.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 0, 0)]);
PositionInterpolator46.FieldOrEvent('set_fraction', True).IsClauseNamesAdd('set_fraction');
ProtoDeclare17.Node.AddChildren([PositionInterpolator46]);
OrientationInterpolator47 := TOrientationInterpolatorNode.Create;
OrientationInterpolator47.X3DName := 'CameraOrientationInterpolator';
OrientationInterpolator47.SetKey([0, 1]);
OrientationInterpolator47.SetKeyValue([Vector4(0, 1, 0, 0), Vector4(0, 1, 0, 0)]);
OrientationInterpolator47.FieldOrEvent('set_fraction', True).IsClauseNamesAdd('set_fraction');
ProtoDeclare17.Node.AddChildren([OrientationInterpolator47]);
{ ROUTE CameraPositionInterpolator.value_changed TO CameraViewpoint.position }
ProtoDeclare17.Node.AddRoute(PositionInterpolator46.EventValue_changed, Viewpoint43.position);
{ ROUTE CameraOrientationInterpolator.value_changed TO CameraViewpoint.orientation }
ProtoDeclare17.Node.AddRoute(OrientationInterpolator47.EventValue_changed, Viewpoint43.orientation);
Script50 := TScriptNode.Create;
Script50.X3DName := 'CameraScript';
Script50.DirectOutput := True;
Script50.MustEvaluate := True;
{ binding is controlled externally, all camera operations proceed the same regardless of whether bound or not }
FieldVal51 := TSFString.CreateUndefined(Script50, True, 'description');
Script50.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFVec3f.CreateUndefined(Script50, True, 'position');
Script50.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFRotation.CreateUndefined(Script50, True, 'orientation');
Script50.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.CreateEvent(Script50, 'set_fraction', True);
Script50.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFBool.CreateEvent(Script50, 'set_bind', True);
Script50.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.CreateUndefined(Script50, True, 'fieldOfView');
Script50.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.CreateUndefined(Script50, True, 'nearClipPlane');
Script50.AddCustomFieldOrEvent(FieldVal57);
end;

procedure InitCameraPrototypesPart5;
begin
FieldVal58 := TSFFloat.CreateUndefined(Script50, True, 'farClipPlane');
Script50.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TMFNode.CreateUndefined(Script50, True, 'shots');
Script50.AddCustomFieldOrEvent(FieldVal59);
FieldVal60 := TSFColor.CreateUndefined(Script50, True, 'filterColor');
Script50.AddCustomFieldOrEvent(FieldVal60);
FieldVal61 := TSFFloat.CreateUndefined(Script50, True, 'filterTransparency');
Script50.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TSFVec3f.CreateUndefined(Script50, True, 'upVector');
Script50.AddCustomFieldOrEvent(FieldVal62);
FieldVal63 := TSFFloat.CreateUndefined(Script50, True, 'fStop');
Script50.AddCustomFieldOrEvent(FieldVal63);
FieldVal64 := TSFFloat.CreateUndefined(Script50, True, 'focusDistance');
Script50.AddCustomFieldOrEvent(FieldVal64);
FieldVal65 := TSFBool.CreateEvent(Script50, 'isActive', False);
Script50.AddCustomFieldOrEvent(FieldVal65);
FieldVal66 := TSFTime.CreateEvent(Script50, 'totalDuration', False);
Script50.AddCustomFieldOrEvent(FieldVal66);
FieldVal67 := TSFNode.CreateUndefined(Script50, True, 'offlineRender');
Script50.AddCustomFieldOrEvent(FieldVal67);
FieldVal68 := TSFNode.CreateUndefined(Script50, False, 'ViewpointNode');
Script50.AddCustomFieldOrEvent(FieldVal68);
FieldVal68.Value := Viewpoint43;
FieldVal70 := TSFNode.CreateUndefined(Script50, False, 'NavInfoNode');
Script50.AddCustomFieldOrEvent(FieldVal70);
FieldVal70.Value := NavigationInfo44;
FieldVal72 := TSFNode.CreateUndefined(Script50, False, 'CameraPI');
Script50.AddCustomFieldOrEvent(FieldVal72);
FieldVal72.Value := PositionInterpolator46;
FieldVal74 := TSFNode.CreateUndefined(Script50, False, 'CameraOI');
Script50.AddCustomFieldOrEvent(FieldVal74);
FieldVal74.Value := OrientationInterpolator47;
FieldVal76 := TMFFloat.CreateUndefined(Script50, True, 'key');
Script50.AddCustomFieldOrEvent(FieldVal76);
FieldVal77 := TMFVec3f.CreateUndefined(Script50, True, 'keyValuePosition');
Script50.AddCustomFieldOrEvent(FieldVal77);
FieldVal78 := TMFRotation.CreateUndefined(Script50, True, 'keyValueOrientation');
Script50.AddCustomFieldOrEvent(FieldVal78);
FieldVal79 := TSFBool.Create(Script50, True, 'animated', False);
Script50.AddCustomFieldOrEvent(FieldVal79);
end;

procedure InitCameraPrototypesPart6;
begin
FieldVal80 := TSFBool.Create(Script50, False, 'initialized', False);
Script50.AddCustomFieldOrEvent(FieldVal80);
FieldVal81 := TSFInt32.Create(Script50, False, 'shotCount', 0);
Script50.AddCustomFieldOrEvent(FieldVal81);
FieldVal82 := TSFInt32.Create(Script50, False, 'movesCount', 0);
Script50.AddCustomFieldOrEvent(FieldVal82);
FieldVal83 := TSFFloat.Create(Script50, False, 'frameCount', 0);
Script50.AddCustomFieldOrEvent(FieldVal83);
FieldVal84 := TSFTime.Create(Script50, False, 'startTime', 0);
Script50.AddCustomFieldOrEvent(FieldVal84);
FieldVal85 := TSFTime.Create(Script50, False, 'priorTraceTime', 0);
Script50.AddCustomFieldOrEvent(FieldVal85);
FieldVal86 := TSFBool.CreateUndefined(Script50, False, 'traceEnabled');
Script50.AddCustomFieldOrEvent(FieldVal86);
Script50.FieldOrEvent('description', True).IsClauseNamesAdd('description');
Script50.FieldOrEvent('position', True).IsClauseNamesAdd('position');
Script50.FieldOrEvent('orientation', True).IsClauseNamesAdd('orientation');
Script50.FieldOrEvent('set_fraction', True).IsClauseNamesAdd('set_fraction');
Script50.FieldOrEvent('set_bind', True).IsClauseNamesAdd('set_bind');
Script50.FieldOrEvent('fieldOfView', True).IsClauseNamesAdd('fieldOfView');
Script50.FieldOrEvent('nearClipPlane', True).IsClauseNamesAdd('nearClipPlane');
Script50.FieldOrEvent('farClipPlane', True).IsClauseNamesAdd('farClipPlane');
Script50.FieldOrEvent('shots', True).IsClauseNamesAdd('shots');
Script50.FieldOrEvent('filterColor', True).IsClauseNamesAdd('filterColor');
Script50.FieldOrEvent('filterTransparency', True).IsClauseNamesAdd('filterTransparency');
Script50.FieldOrEvent('upVector', True).IsClauseNamesAdd('upVector');
Script50.FieldOrEvent('fStop', True).IsClauseNamesAdd('fStop');
Script50.FieldOrEvent('focusDistance', True).IsClauseNamesAdd('focusDistance');
Script50.FieldOrEvent('isActive', True).IsClauseNamesAdd('isActive');
Script50.FieldOrEvent('totalDuration', True).IsClauseNamesAdd('totalDuration');
Script50.FieldOrEvent('offlineRender', True).IsClauseNamesAdd('offlineRender');
Script50.FieldOrEvent('traceEnabled', True).IsClauseNamesAdd('traceEnabled');
FreeAndNil(CompiledScript50);
CompiledScript50 := TScript50Script.Create(FieldVal51, FieldVal52, FieldVal53, FieldVal56, FieldVal57, FieldVal58, FieldVal59, FieldVal60, FieldVal61, FieldVal62, FieldVal63, FieldVal64, FieldVal65, FieldVal66, FieldVal67, FieldVal68, FieldVal70, FieldVal72, FieldVal74, FieldVal76, FieldVal77, FieldVal78, FieldVal79, FieldVal80, FieldVal81, FieldVal82, FieldVal83, FieldVal84, FieldVal85, FieldVal86);
Script50.SetUrl(['compiled:' + LineEnding +
  'initialize=Script50_initialize' + LineEnding +
  'set_fraction=Script50_set_fraction' + LineEnding +
  'set_bind=Script50_set_bind' + LineEnding +
  'set_description=Script50_set_description' + LineEnding +
  'set_position=Script50_set_position' + LineEnding +
  'set_orientation=Script50_set_orientation' + LineEnding +
  'set_fieldOfView=Script50_set_fieldOfView' + LineEnding +
  'set_nearClipPlane=Script50_set_nearClipPlane' + LineEnding +
  'set_farClipPlane=Script50_set_farClipPlane' + LineEnding +
  'set_shots=Script50_set_shots' + LineEnding +
  'set_filterColor=Script50_set_filterColor' + LineEnding +
  'set_filterTransparency=Script50_set_filterTransparency' + LineEnding +
  'set_upVector=Script50_set_upVector' + LineEnding +
  'set_fStop=Script50_set_fStop' + LineEnding +
  'set_focusDistance=Script50_set_focusDistance' + LineEnding +
  'set_offlineRender=Script50_set_offlineRender' + LineEnding +
  'set_key=Script50_set_key' + LineEnding +
  'set_keyValuePosition=Script50_set_keyValuePosition' + LineEnding +
  'set_keyValueOrientation=Script50_set_keyValueOrientation' + LineEnding +
  'set_animated=Script50_set_animated']);
ProtoDeclare17.Node.AddChildren([Script50]);
{ ROUTE CameraScript.position TO CameraViewpoint.position }
ProtoDeclare17.Node.AddRoute(FieldVal52.EventOut, Viewpoint43.position);
{ ROUTE CameraScript.orientation TO CameraViewpoint.orientation }
ProtoDeclare17.Node.AddRoute(FieldVal53.EventOut, Viewpoint43.orientation);
end;

procedure InitCameraPrototypesPart7;
begin
{ ROUTE CameraScript.isActive TO CameraViewpoint.set_bind }
ProtoDeclare17.Node.AddRoute(FieldVal65, Viewpoint43.EventSet_bind);
{ ROUTE CameraScript.isActive TO CameraNavInfo.set_bind }
ProtoDeclare17.Node.AddRoute(FieldVal65, NavigationInfo44.EventSet_bind);
{ ROUTE CameraScript.isActive TO CameraDirectionalLight.on }
ProtoDeclare17.Node.AddRoute(FieldVal65, DirectionalLight45.on);
X3D0.AddPrototype(ProtoDeclare17);
{ =============== CameraShot ============== }
ProtoDeclare92 := CreateEmptyPrototype('CameraShot');
ProtoDeclare92.X3DName := 'CameraShot';
ProtoDeclare92.Appinfo := 'CameraShot collects a specific set of CameraMovement animations that make up an individual shot.';
FieldVal94 := TSFString.CreateUndefined(nil, True, 'description');
FieldDecl94 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl94.FieldOrEvent := FieldVal94;
FieldVal94.ParentInterfaceDeclaration := FieldDecl94;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl94);
FieldVal95 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl95 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl95.FieldOrEvent := FieldVal95;
FieldVal95.ParentInterfaceDeclaration := FieldDecl95;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl95);
FieldVal96 := TMFNode.CreateUndefined(nil, True, 'moves');
FieldDecl96 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl96.FieldOrEvent := FieldVal96;
FieldVal96.ParentInterfaceDeclaration := FieldDecl96;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl96);
FieldVal97 := TSFVec3f.Create(nil, True, 'initialPosition', Vector3(0, 0, 10));
FieldDecl97 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl97.FieldOrEvent := FieldVal97;
FieldVal97.ParentInterfaceDeclaration := FieldDecl97;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl97);
FieldVal98 := TSFRotation.Create(nil, True, 'initialOrientation', Vector4(0, 0, 1, 0));
FieldDecl98 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl98.FieldOrEvent := FieldVal98;
FieldVal98.ParentInterfaceDeclaration := FieldDecl98;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl98);
FieldVal99 := TSFVec3f.Create(nil, True, 'initialAimPoint', Vector3(0, 0, 0));
FieldDecl99 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl99.FieldOrEvent := FieldVal99;
FieldVal99.ParentInterfaceDeclaration := FieldDecl99;
end;

procedure InitCameraPrototypesPart8;
begin
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl99);
FieldVal100 := TSFFloat.Create(nil, True, 'initialFieldOfView', 0.7854);
FieldDecl100 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl100.FieldOrEvent := FieldVal100;
FieldVal100.ParentInterfaceDeclaration := FieldDecl100;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl100);
FieldVal101 := TSFFloat.Create(nil, True, 'initialFStop', 5.6);
FieldDecl101 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl101.FieldOrEvent := FieldVal101;
FieldVal101.ParentInterfaceDeclaration := FieldDecl101;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl101);
FieldVal102 := TSFFloat.Create(nil, True, 'initialFocusDistance', 10);
FieldDecl102 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl102.FieldOrEvent := FieldVal102;
FieldVal102.ParentInterfaceDeclaration := FieldDecl102;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl102);
FieldVal103 := TSFTime.CreateEvent(nil, 'shotDuration', False);
FieldDecl103 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl103.FieldOrEvent := FieldVal103;
FieldVal103.ParentInterfaceDeclaration := FieldDecl103;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl103);
FieldVal104 := TSFBool.CreateEvent(nil, 'isActive', False);
FieldDecl104 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl104.FieldOrEvent := FieldVal104;
FieldVal104.ParentInterfaceDeclaration := FieldDecl104;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl104);
FieldVal105 := TSFBool.Create(nil, False, 'traceEnabled', False);
FieldDecl105 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl105.FieldOrEvent := FieldVal105;
FieldVal105.ParentInterfaceDeclaration := FieldDecl105;
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl105);
Script107 := TScriptNode.Create;
Script107.X3DName := 'CameraShotScript';
Script107.DirectOutput := True;
Script107.MustEvaluate := True;
FieldVal108 := TSFString.CreateUndefined(Script107, True, 'description');
Script107.AddCustomFieldOrEvent(FieldVal108);
FieldVal109 := TSFBool.CreateUndefined(Script107, True, 'enabled');
Script107.AddCustomFieldOrEvent(FieldVal109);
FieldVal110 := TMFNode.CreateUndefined(Script107, True, 'moves');
end;

procedure InitCameraPrototypesPart9;
begin
Script107.AddCustomFieldOrEvent(FieldVal110);
FieldVal111 := TSFVec3f.CreateUndefined(Script107, True, 'initialPosition');
Script107.AddCustomFieldOrEvent(FieldVal111);
FieldVal112 := TSFRotation.CreateUndefined(Script107, True, 'initialOrientation');
Script107.AddCustomFieldOrEvent(FieldVal112);
FieldVal113 := TSFVec3f.CreateUndefined(Script107, True, 'initialAimPoint');
Script107.AddCustomFieldOrEvent(FieldVal113);
FieldVal114 := TSFFloat.CreateUndefined(Script107, True, 'initialFieldOfView');
Script107.AddCustomFieldOrEvent(FieldVal114);
FieldVal115 := TSFFloat.CreateUndefined(Script107, True, 'initialFStop');
Script107.AddCustomFieldOrEvent(FieldVal115);
FieldVal116 := TSFFloat.CreateUndefined(Script107, True, 'initialFocusDistance');
Script107.AddCustomFieldOrEvent(FieldVal116);
FieldVal117 := TSFTime.CreateEvent(Script107, 'shotDuration', False);
Script107.AddCustomFieldOrEvent(FieldVal117);
FieldVal118 := TSFBool.CreateEvent(Script107, 'isActive', False);
Script107.AddCustomFieldOrEvent(FieldVal118);
FieldVal119 := TSFBool.CreateUndefined(Script107, False, 'traceEnabled');
Script107.AddCustomFieldOrEvent(FieldVal119);
FieldVal120 := TMFFloat.CreateUndefined(Script107, True, 'key');
Script107.AddCustomFieldOrEvent(FieldVal120);
FieldVal121 := TMFVec3f.CreateUndefined(Script107, True, 'keyValuePosition');
Script107.AddCustomFieldOrEvent(FieldVal121);
FieldVal122 := TMFRotation.CreateUndefined(Script107, True, 'keyValueOrientation');
Script107.AddCustomFieldOrEvent(FieldVal122);
Script107.FieldOrEvent('description', True).IsClauseNamesAdd('description');
Script107.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
Script107.FieldOrEvent('moves', True).IsClauseNamesAdd('moves');
Script107.FieldOrEvent('initialPosition', True).IsClauseNamesAdd('initialPosition');
Script107.FieldOrEvent('initialOrientation', True).IsClauseNamesAdd('initialOrientation');
Script107.FieldOrEvent('initialAimPoint', True).IsClauseNamesAdd('initialAimPoint');
Script107.FieldOrEvent('initialFieldOfView', True).IsClauseNamesAdd('initialFieldOfView');
Script107.FieldOrEvent('initialFStop', True).IsClauseNamesAdd('initialFStop');
Script107.FieldOrEvent('initialFocusDistance', True).IsClauseNamesAdd('initialFocusDistance');
Script107.FieldOrEvent('shotDuration', True).IsClauseNamesAdd('shotDuration');
Script107.FieldOrEvent('isActive', True).IsClauseNamesAdd('isActive');
Script107.FieldOrEvent('traceEnabled', True).IsClauseNamesAdd('traceEnabled');
FreeAndNil(CompiledScript107);
CompiledScript107 := TScript107Script.Create(FieldVal108, FieldVal109, FieldVal110, FieldVal111, FieldVal112, FieldVal113, FieldVal114, FieldVal115, FieldVal116, FieldVal117, FieldVal118, FieldVal119, FieldVal120, FieldVal121, FieldVal122);
Script107.SetUrl(['compiled:' + LineEnding +
  'initialize=Script107_initialize' + LineEnding +
  'set_description=Script107_set_description' + LineEnding +
  'set_enabled=Script107_set_enabled' + LineEnding +
  'set_moves=Script107_set_moves' + LineEnding +
  'set_initialPosition=Script107_set_initialPosition' + LineEnding +
  'set_initialOrientation=Script107_set_initialOrientation' + LineEnding +
  'set_initialAimPoint=Script107_set_initialAimPoint' + LineEnding +
  'set_initialFieldOfView=Script107_set_initialFieldOfView' + LineEnding +
  'set_initialFStop=Script107_set_initialFStop' + LineEnding +
  'set_initialFocusDistance=Script107_set_initialFocusDistance' + LineEnding +
  'set_key=Script107_set_key' + LineEnding +
  'set_keyValuePosition=Script107_set_keyValuePosition' + LineEnding +
  'set_keyValueOrientation=Script107_set_keyValueOrientation']);
end;

procedure InitCameraPrototypesPart10;
begin
ProtoDeclare92.Node.AddChildren([Script107]);
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
X3D0.AddPrototype(ProtoDeclare92);
{ =============== CameraMovement ============== }
ProtoDeclare123 := CreateEmptyPrototype('CameraMovement');
ProtoDeclare123.X3DName := 'CameraMovement';
ProtoDeclare123.Appinfo := 'CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.';
FieldVal125 := TSFString.CreateUndefined(nil, True, 'description');
FieldDecl125 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl125.FieldOrEvent := FieldVal125;
FieldVal125.ParentInterfaceDeclaration := FieldDecl125;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl125);
FieldVal126 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl126 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl126.FieldOrEvent := FieldVal126;
FieldVal126.ParentInterfaceDeclaration := FieldDecl126;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl126);
FieldVal127 := TSFFloat.Create(nil, True, 'duration', 0);
FieldDecl127 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl127.FieldOrEvent := FieldVal127;
FieldVal127.ParentInterfaceDeclaration := FieldDecl127;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl127);
FieldVal128 := TSFVec3f.Create(nil, True, 'goalPosition', Vector3(0, 0, 10));
FieldDecl128 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl128.FieldOrEvent := FieldVal128;
FieldVal128.ParentInterfaceDeclaration := FieldDecl128;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl128);
FieldVal129 := TSFRotation.Create(nil, True, 'goalOrientation', Vector4(0, 0, 1, 0));
FieldDecl129 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl129.FieldOrEvent := FieldVal129;
FieldVal129.ParentInterfaceDeclaration := FieldDecl129;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl129);
FieldVal130 := TSFBool.Create(nil, True, 'tracking', False);
FieldDecl130 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl130.FieldOrEvent := FieldVal130;
FieldVal130.ParentInterfaceDeclaration := FieldDecl130;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl130);
FieldVal131 := TSFVec3f.Create(nil, True, 'goalAimPoint', Vector3(0, 0, 0));
FieldDecl131 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl131.FieldOrEvent := FieldVal131;
end;

procedure InitCameraPrototypesPart11;
begin
FieldVal131.ParentInterfaceDeclaration := FieldDecl131;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl131);
FieldVal132 := TSFFloat.Create(nil, True, 'goalFieldOfView', 0.7854);
FieldDecl132 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl132.FieldOrEvent := FieldVal132;
FieldVal132.ParentInterfaceDeclaration := FieldDecl132;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl132);
FieldVal133 := TSFFloat.Create(nil, True, 'goalFStop', 5.6);
FieldDecl133 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl133.FieldOrEvent := FieldVal133;
FieldVal133.ParentInterfaceDeclaration := FieldDecl133;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl133);
FieldVal134 := TSFFloat.Create(nil, True, 'goalFocusDistance', 10);
FieldDecl134 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl134.FieldOrEvent := FieldVal134;
FieldVal134.ParentInterfaceDeclaration := FieldDecl134;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl134);
FieldVal135 := TSFBool.CreateEvent(nil, 'isActive', False);
FieldDecl135 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl135.FieldOrEvent := FieldVal135;
FieldVal135.ParentInterfaceDeclaration := FieldDecl135;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl135);
FieldVal136 := TSFBool.Create(nil, False, 'traceEnabled', False);
FieldDecl136 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl136.FieldOrEvent := FieldVal136;
FieldVal136.ParentInterfaceDeclaration := FieldDecl136;
ProtoDeclare123.InterfaceDeclarations.Add(FieldDecl136);
{ First node determines node type of this prototype }
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
{ Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events }
Script138 := TScriptNode.Create;
Script138.X3DName := 'CameraMovementScript';
Script138.DirectOutput := True;
Script138.MustEvaluate := True;
FieldVal139 := TSFString.CreateUndefined(Script138, True, 'description');
Script138.AddCustomFieldOrEvent(FieldVal139);
FieldVal140 := TSFBool.CreateUndefined(Script138, True, 'enabled');
Script138.AddCustomFieldOrEvent(FieldVal140);
FieldVal141 := TSFFloat.CreateUndefined(Script138, True, 'duration');
Script138.AddCustomFieldOrEvent(FieldVal141);
end;

procedure InitCameraPrototypesPart12;
begin
FieldVal142 := TSFVec3f.CreateUndefined(Script138, True, 'goalPosition');
Script138.AddCustomFieldOrEvent(FieldVal142);
FieldVal143 := TSFRotation.CreateUndefined(Script138, True, 'goalOrientation');
Script138.AddCustomFieldOrEvent(FieldVal143);
FieldVal144 := TSFBool.CreateUndefined(Script138, True, 'tracking');
Script138.AddCustomFieldOrEvent(FieldVal144);
FieldVal145 := TSFVec3f.CreateUndefined(Script138, True, 'goalAimPoint');
Script138.AddCustomFieldOrEvent(FieldVal145);
FieldVal146 := TSFFloat.CreateUndefined(Script138, True, 'goalFieldOfView');
Script138.AddCustomFieldOrEvent(FieldVal146);
FieldVal147 := TSFFloat.CreateUndefined(Script138, True, 'goalFStop');
Script138.AddCustomFieldOrEvent(FieldVal147);
FieldVal148 := TSFFloat.CreateUndefined(Script138, True, 'goalFocusDistance');
Script138.AddCustomFieldOrEvent(FieldVal148);
FieldVal149 := TSFBool.CreateEvent(Script138, 'isActive', False);
Script138.AddCustomFieldOrEvent(FieldVal149);
FieldVal150 := TSFBool.CreateUndefined(Script138, False, 'traceEnabled');
Script138.AddCustomFieldOrEvent(FieldVal150);
Script138.FieldOrEvent('description', True).IsClauseNamesAdd('description');
Script138.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
Script138.FieldOrEvent('duration', True).IsClauseNamesAdd('duration');
Script138.FieldOrEvent('goalPosition', True).IsClauseNamesAdd('goalPosition');
Script138.FieldOrEvent('goalOrientation', True).IsClauseNamesAdd('goalOrientation');
Script138.FieldOrEvent('tracking', True).IsClauseNamesAdd('tracking');
Script138.FieldOrEvent('goalAimPoint', True).IsClauseNamesAdd('goalAimPoint');
Script138.FieldOrEvent('goalFieldOfView', True).IsClauseNamesAdd('goalFieldOfView');
Script138.FieldOrEvent('goalFStop', True).IsClauseNamesAdd('goalFStop');
Script138.FieldOrEvent('goalFocusDistance', True).IsClauseNamesAdd('goalFocusDistance');
Script138.FieldOrEvent('isActive', True).IsClauseNamesAdd('isActive');
Script138.FieldOrEvent('traceEnabled', True).IsClauseNamesAdd('traceEnabled');
FreeAndNil(CompiledScript138);
CompiledScript138 := TScript138Script.Create(FieldVal139, FieldVal140, FieldVal141, FieldVal142, FieldVal143, FieldVal144, FieldVal145, FieldVal146, FieldVal147, FieldVal148, FieldVal149, FieldVal150);
Script138.SetUrl(['compiled:' + LineEnding +
  'initialize=Script138_initialize' + LineEnding +
  'set_goalAimPoint=Script138_set_goalAimPoint' + LineEnding +
  'set_description=Script138_set_description' + LineEnding +
  'set_enabled=Script138_set_enabled' + LineEnding +
  'set_duration=Script138_set_duration' + LineEnding +
  'set_goalPosition=Script138_set_goalPosition' + LineEnding +
  'set_goalOrientation=Script138_set_goalOrientation' + LineEnding +
  'set_tracking=Script138_set_tracking' + LineEnding +
  'set_goalFieldOfView=Script138_set_goalFieldOfView' + LineEnding +
  'set_goalFStop=Script138_set_goalFStop' + LineEnding +
  'set_goalFocusDistance=Script138_set_goalFocusDistance']);
ProtoDeclare123.Node.AddChildren([Script138]);
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
X3D0.AddPrototype(ProtoDeclare123);
{ =============== OfflineRender ============== }
ProtoDeclare151 := CreateEmptyPrototype('OfflineRender');
ProtoDeclare151.X3DName := 'OfflineRender';
ProtoDeclare151.Appinfo := 'OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).';
end;

procedure InitCameraPrototypesPart13;
begin
FieldVal153 := TSFString.CreateUndefined(nil, True, 'description');
FieldDecl153 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl153.FieldOrEvent := FieldVal153;
FieldVal153.ParentInterfaceDeclaration := FieldDecl153;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl153);
FieldVal154 := TSFBool.Create(nil, True, 'enabled', True);
FieldDecl154 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl154.FieldOrEvent := FieldVal154;
FieldVal154.ParentInterfaceDeclaration := FieldDecl154;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl154);
FieldVal155 := TSFFloat.Create(nil, True, 'frameRate', 30);
FieldDecl155 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl155.FieldOrEvent := FieldVal155;
FieldVal155.ParentInterfaceDeclaration := FieldDecl155;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl155);
FieldVal156 := TSFVec2f.Create(nil, True, 'frameSize', Vector2(640, 480));
FieldDecl156 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl156.FieldOrEvent := FieldVal156;
FieldVal156.ParentInterfaceDeclaration := FieldDecl156;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl156);
FieldVal157 := TSFFloat.Create(nil, True, 'pixelAspectRatio', 1.33);
FieldDecl157 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl157.FieldOrEvent := FieldVal157;
FieldVal157.ParentInterfaceDeclaration := FieldDecl157;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl157);
FieldVal158 := TSFTime.CreateEvent(nil, 'set_startTime', True);
FieldDecl158 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl158.FieldOrEvent := FieldVal158;
FieldVal158.ParentInterfaceDeclaration := FieldDecl158;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl158);
FieldVal159 := TSFFloat.CreateEvent(nil, 'progress', False);
FieldDecl159 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl159.FieldOrEvent := FieldVal159;
FieldVal159.ParentInterfaceDeclaration := FieldDecl159;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl159);
FieldVal160 := TSFTime.CreateEvent(nil, 'renderCompleteTime', False);
FieldDecl160 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl160.FieldOrEvent := FieldVal160;
FieldVal160.ParentInterfaceDeclaration := FieldDecl160;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl160);
end;

procedure InitCameraPrototypesPart14;
begin
FieldVal161 := TMFString.Create(nil, False, 'movieFormat', ['mpeg']);
FieldDecl161 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl161.FieldOrEvent := FieldVal161;
FieldVal161.ParentInterfaceDeclaration := FieldDecl161;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl161);
FieldVal162 := TMFString.Create(nil, False, 'imageFormat', ['png']);
FieldDecl162 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl162.FieldOrEvent := FieldVal162;
FieldVal162.ParentInterfaceDeclaration := FieldDecl162;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl162);
FieldVal163 := TSFBool.Create(nil, False, 'traceEnabled', False);
FieldDecl163 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl163.FieldOrEvent := FieldVal163;
FieldVal163.ParentInterfaceDeclaration := FieldDecl163;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl163);
{ First node determines node type of this prototype }
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
Script165 := TScriptNode.Create;
Script165.X3DName := 'OfflineRenderScript';
Script165.MustEvaluate := True;
FieldVal166 := TSFString.CreateUndefined(Script165, True, 'description');
Script165.AddCustomFieldOrEvent(FieldVal166);
FieldVal167 := TSFBool.CreateUndefined(Script165, True, 'enabled');
Script165.AddCustomFieldOrEvent(FieldVal167);
FieldVal168 := TSFFloat.CreateUndefined(Script165, True, 'frameRate');
Script165.AddCustomFieldOrEvent(FieldVal168);
FieldVal169 := TSFVec2f.CreateUndefined(Script165, True, 'frameSize');
Script165.AddCustomFieldOrEvent(FieldVal169);
FieldVal170 := TSFFloat.CreateUndefined(Script165, True, 'pixelAspectRatio');
Script165.AddCustomFieldOrEvent(FieldVal170);
FieldVal171 := TSFTime.CreateEvent(Script165, 'set_startTime', True);
Script165.AddCustomFieldOrEvent(FieldVal171);
FieldVal172 := TSFFloat.CreateEvent(Script165, 'progress', False);
Script165.AddCustomFieldOrEvent(FieldVal172);
FieldVal173 := TSFTime.CreateEvent(Script165, 'renderCompleteTime', False);
Script165.AddCustomFieldOrEvent(FieldVal173);
FieldVal174 := TMFString.CreateUndefined(Script165, False, 'movieFormat');
Script165.AddCustomFieldOrEvent(FieldVal174);
FieldVal175 := TMFString.CreateUndefined(Script165, False, 'imageFormat');
Script165.AddCustomFieldOrEvent(FieldVal175);
end;

procedure InitCameraPrototypesPart15;
begin
FieldVal176 := TSFBool.CreateUndefined(Script165, False, 'traceEnabled');
Script165.AddCustomFieldOrEvent(FieldVal176);
Script165.FieldOrEvent('description', True).IsClauseNamesAdd('description');
Script165.FieldOrEvent('enabled', True).IsClauseNamesAdd('enabled');
Script165.FieldOrEvent('frameRate', True).IsClauseNamesAdd('frameRate');
Script165.FieldOrEvent('frameSize', True).IsClauseNamesAdd('frameSize');
Script165.FieldOrEvent('pixelAspectRatio', True).IsClauseNamesAdd('pixelAspectRatio');
Script165.FieldOrEvent('set_startTime', True).IsClauseNamesAdd('set_startTime');
Script165.FieldOrEvent('progress', True).IsClauseNamesAdd('progress');
Script165.FieldOrEvent('renderCompleteTime', True).IsClauseNamesAdd('renderCompleteTime');
Script165.FieldOrEvent('movieFormat', True).IsClauseNamesAdd('movieFormat');
Script165.FieldOrEvent('imageFormat', True).IsClauseNamesAdd('imageFormat');
Script165.FieldOrEvent('traceEnabled', True).IsClauseNamesAdd('traceEnabled');
FreeAndNil(CompiledScript165);
CompiledScript165 := TScript165Script.Create(FieldVal166, FieldVal167, FieldVal168, FieldVal169, FieldVal170, FieldVal172, FieldVal173, FieldVal174, FieldVal175, FieldVal176);
Script165.SetUrl(['compiled:' + LineEnding +
  'initialize=Script165_initialize' + LineEnding +
  'set_description=Script165_set_description' + LineEnding +
  'set_enabled=Script165_set_enabled' + LineEnding +
  'set_frameRate=Script165_set_frameRate' + LineEnding +
  'set_frameSize=Script165_set_frameSize' + LineEnding +
  'set_pixelAspectRatio=Script165_set_pixelAspectRatio' + LineEnding +
  'set_startTime=Script165_set_startTime']);
ProtoDeclare151.Node.AddChildren([Script165]);
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
X3D0.AddPrototype(ProtoDeclare151);
{ =============== Launch Prototype Example ============== }
Background177 := TBackgroundNode.Create;
Background177.SetSkyColor([Vector3(0.282353, 0.380392, 0.470588)]);
Group16.FdChildren.Add(Background177);
Anchor178 := TAnchorNode.Create;
Anchor178.Description := 'launch CameraExample scene';
Anchor178.SetUrl(['CameraExamples.x3d', 'https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d', 'CameraExamples.wrl', 'https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl']);
Transform179 := TTransformNode.Create;
Shape180 := TShapeNode.Create;
Text181 := TTextNode.Create;
Text181.SetText(['CameraPrototypes.x3d', 'defines multiple prototype nodes', 'Click on this text to see', 'CameraExamples.x3d scene']);
FontStyle182 := TFontStyleNode.Create;
FontStyle182.Justify := fjMiddle;
FontStyle182.JustifyMinor := fjMiddle;
Text181.FontStyle := FontStyle182;
Shape180.Geometry := Text181;
Appearance183 := TAppearanceNode.Create;
Material184 := TMaterialNode.Create;
Material184.DiffuseColor := Vector3(1, 1, 0.2);
Appearance183.Material := Material184;
Shape180.Appearance := Appearance183;
end;

procedure InitCameraPrototypesPart16;
begin
Transform179.FdChildren.Add(Shape180);
Anchor178.FdChildren.Add(Transform179);
Group16.FdChildren.Add(Anchor178);
X3D0.AddChildren([Group16]);
end;

function CreateCameraPrototypes: TX3DRootNode;
begin
  InitCameraPrototypesPart0;
  InitCameraPrototypesPart1;
  InitCameraPrototypesPart2;
  InitCameraPrototypesPart3;
  InitCameraPrototypesPart4;
  InitCameraPrototypesPart5;
  InitCameraPrototypesPart6;
  InitCameraPrototypesPart7;
  InitCameraPrototypesPart8;
  InitCameraPrototypesPart9;
  InitCameraPrototypesPart10;
  InitCameraPrototypesPart11;
  InitCameraPrototypesPart12;
  InitCameraPrototypesPart13;
  InitCameraPrototypesPart14;
  InitCameraPrototypesPart15;
  InitCameraPrototypesPart16;
  Result := X3D0;
end;

procedure RegisterCameraPrototypesScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript50 <> nil then
    CompiledScript50.RegisterHandlers(Scene);
  if CompiledScript107 <> nil then
    CompiledScript107.RegisterHandlers(Scene);
  if CompiledScript138 <> nil then
    CompiledScript138.RegisterHandlers(Scene);
  if CompiledScript165 <> nil then
    CompiledScript165.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript50);
  FreeAndNil(CompiledScript107);
  FreeAndNil(CompiledScript138);
  FreeAndNil(CompiledScript165);
end.
