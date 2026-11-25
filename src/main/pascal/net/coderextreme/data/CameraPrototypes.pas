unit CameraPrototypes;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateCameraPrototypes: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

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
  Background177: TBackgroundNode;
  Anchor178: TAnchorNode;
  Transform179: TTransformNode;
  Shape180: TShapeNode;
  Text181: TTextNode;
  FontStyle182: TFontStyleNode;
  Appearance183: TAppearanceNode;
  Material184: TMaterialNode;

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
ProtoBody42.AddRoute(PositionInterpolator46.EventValue_changed, Viewpoint43.position);
{ ROUTE CameraOrientationInterpolator.value_changed TO CameraViewpoint.orientation }
ProtoBody42.AddRoute(OrientationInterpolator47.EventValue_changed, Viewpoint43.orientation);
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
end;

procedure InitCameraPrototypesPart7;
begin
Script50.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize () // CameraScript' + LineEnding +
  '{' + LineEnding +
  '//  tracePrint (''initialize start...'');\n\n    NavInfoNode.avatarSize[0]   = nearClipPlane;\n\n    // remaining setups deferred to invocation of checkShots() method\n    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\n    alwaysPrint (''initialize complete'');\n}\n\nfunction checkShots (eventValue)\n{\n    tracePrint (''checkShots() method should only occur after initialize() methods in all other Scripts are complete'');\n\n    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\n    totalDuration= 0;\n    shotCount  = shots.length;\n    movesCount = 0;\n    for (i = 0; i < shotCount; i++) // shots index\n    {\n       tracePrint (''shots['' + i + ''].moves.length='' + shots[i].moves.length);\n       movesCount   += shots[i].moves.length;\n       totalDuration = totalDuration + shots[i].shotDuration;\n       if (shots[i].moves.length == 0)\n       {\n          alwaysPrint (''warning: CameraShot['' + i + '']['' + shots[i].description + ''] has no contained CameraMove nodes'');\n       }\n    }\n    // size checks before proceeding\n    if (shotCount == 0)\n    {\n       alwaysPrint (''warning: no CameraShot nodes found for the shots, nothing to do!'');\n       return;\n    }\n    else if (movesCount == 0)\n    {\n       alwaysPrint (''warning: no CameraMove nodes found for the shots, nothing to do!'');\n       return;\n    }\n    else if (totalDuration == 0)\n    {\n       alwaysPrint (''warning: totalDuration = 0 seconds, nothing to do!'');\n       return;\n    }\n    tracePrint (''number of contained CameraShot nodes='' + shotCount);\n    tracePrint (''number of contained CameraMove nodes='' + movesCount);\n    tracePrint (''totalDuration='' + totalDuration + '' seconds for all shots and moves'');\n\n    // compute interpolators\n    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\n    for (i = 0; i < shotCount; i++) // shots index\n    {\n        if (i==0) // initial entries\n        {\n           key[0]                   = 0.0; // no previous move\n           keyValuePosition[0]      = shots[i].initialPosition;\n           keyValueOrientation[0]   = shots[i].initialOrientation;\n        }\n        else     // new shot repositions, reorients camera as clean break from preceding shot/move\n        {\n           key[k+1]                 = key[k]; // start from end from previous move\n           keyValuePosition[k+1]    = shots[i].initialPosition;\n           keyValueOrientation[k+1] = shots[i].initialOrientation;\n           k++;\n        }\n        tracePrint (shots[i].description);\n        tracePrint (''shots[i].moves.length='' + shots[i].moves.length);\n\n        for (j = 0; j < shots[i].moves.length; j++) // moves index\n        {\n            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\n            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\n            //  tracePrint (''durationFloat='' + durationFloat);\n            key[k+1]               = key[k] + (durationFloat / totalDuration);\n            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\n            if (!animated)\n            {\n                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n            }\n            else\n            {\n                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\n                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\n\n                // test if difference vector is zero, if so maintain previous rotation\n                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\n                if (shotVector.length() >= 0)\n                {\n                    // default view direction is along -Z axis\n                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\n                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n                }\n                else // note (k > 0)\n                {\n                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\n                }\n\n                tracePrint (''shots['' + i + ''].moves['' + j + ''].goalAimPoint='' + shots[i].moves[j].goalAimPoint.toString());\n                tracePrint (''        ViewpointNode.position='' + ViewpointNode.position.toString());\n                tracePrint (''          shotVector     delta='' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\n                tracePrint (''          shotVector normalize='' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\n                tracePrint (''               goalOrientation='' + shots[i].moves[j].goalOrientation.toString());\n                tracePrint (''      keyValueOrientation[k+1]='' + keyValueOrientation[k+1].toString() + ''\n'');\n            }\n            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\n\n            // check animated parameter:  set true if any of moves are tracking moves\n            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\n         // tracePrint (''shots['' + i + ''].moves['' + j + ''].tracking='' + shots[i].moves[j].tracking + '', animated='' + animated);\n\n            // intermediate trace\n            tracePrint (''                key='' + key);\n            tracePrint (''   keyValuePosition='' + keyValuePosition);\n            tracePrint (''keyValueOrientation='' + keyValueOrientation);\n            tracePrint (''- '' + shots[i].moves[j].description);\n        }\n    }\n    tracePrint (''                key='' + key);\n    tracePrint (''   keyValuePosition='' + keyValuePosition);\n    tracePrint (''keyValueOrientation='' + keyValueOrientation);\n    if (key.length != keyValuePosition.length)\n    {\n      alwaysPrint (''warning: internal error during array construction, '' +\n                  ''key.length='' + key.length + '' must equal '' +\n                  ''keyValuePosition.length='' + keyValuePosition.length);\n    }\n    if (key.length != keyValueOrientation.length)\n    {\n      alwaysPrint (''warning: internal error during array construction, '' +\n                  ''key.length='' + key.length + '' must equal '' +\n                  ''keyValueOrientation.length='' + keyValueOrientation.length);\n    }\n    if (key.length != (shotCount + movesCount))\n    {\n      alwaysPrint (''warning: internal error during array construction, '' +\n                  ''key.length='' + key.length + '' must equal '' +\n                  ''(shotCount + movesCount)='' + (shotCount + movesCount));\n    }\n    tracePrint (''           animated='' + animated);\n    // set node values\n    CameraPI.key      = key;\n    CameraOI.key      = key;\n    CameraPI.keyValue = keyValuePosition;\n    CameraOI.keyValue = keyValueOrientation;\n\n    if (!animated) // output results\n    {\n        tracePrint (''<PositionInterpolator    DEF=\''CameraPositionInterpolator\''    key=\'''' + stripBrackets(CameraPI.key) + ''\'' keyValue=\'''' + stripBrackets(CameraPI.keyValue) + ''\''/>'');\n        tracePrint (''<OrientationInterpolator DEF=\''CameraOrientationInterpolator\'' key=\'''' + stripBrackets(CameraOI.key) + ''\'' keyValue=\'''' + stripBrackets(CameraOI.keyValue) + ''\''/>'');\n    }\n    tracePrint (''checkShots() complete'');\n}\n\nfunction stripBrackets (fieldArray)\n{\n    // some browsers add brackets to array output strings, this function strips them\n    outputString = '''';\n    for (i = 0; i < fieldArray.length; i++)\n    {\n       outputString += fieldArray[i].toString();\n       if (i < fieldArray.length - 1) outputString += '' '';\n    }\n    return outputString;\n}\n\nfunction set_fraction (eventValue, timestamp) // input event received for inputOnly field\n{\n   // traceEnabled = false;  // for testing purposes\n\n   // if Camera is being animated, immediately recompute interpolator settings\n   if (animated) checkShots (true);\n\n   // trace progress on console with reduced output frequency\n   if (frameCount == 0)\n   {\n      alwaysPrint (''Animation loop commencing, timestamp='' + timestamp);\n      startTime      = timestamp;\n      priorTraceTime = timestamp;\n      alwaysPrint (''shotClock='' + (timestamp - startTime) + '' seconds, frameCount='' + frameCount + '', fraction='' + eventValue + '', position='' + ViewpointNode.position.toString() + '', orientation='' + ViewpointNode.orientation.toString());\n\n      if (animated) // output results\n      {\n        // TODO how to report or speed up response?  alwaysPrint (''  aimPoint='' + aimPoint.toString());\n        tracePrint (''  <PositionInterpolator    DEF=\''CameraPositionInterpolator\''    key=\'''' + stripBrackets(CameraPI.key) + ''\'' keyValue=\'''' + stripBrackets(CameraPI.keyValue) + ''\''/>'');\n        tracePrint (''  <OrientationInterpolator DEF=\''CameraOrientationInterpolator\'' key=\'''' + stripBrackets(CameraOI.key) + ''\'' keyValue=\'''' + stripBrackets(CameraOI.keyValue) + ''\''/>'');\n      }\n   }\n   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\n   {\n      alwaysPrint (''shotClock='' + (timestamp - startTime) + '' seconds, frameCount='' + frameCount + '', fraction='' + eventValue + '', position='' + ViewpointNode.position.toString() + '', orientation='' + ViewpointNode.orientation.toString());\n      priorTraceTime = timestamp;\n\n      if (animated) // output results\n      {\n        // TODO how to report or speed up response?  alwaysPrint (''  aimPoint='' + aimPoint.toString());\n        tracePrint (''  <PositionInterpolator    DEF=\''CameraPositionInterpolator\''    key=\'''' + stripBrackets(CameraPI.key) + ''\'' keyValue=\'''' + stripBrackets(CameraPI.keyValue) + ''\''/>'');\n        alwaysPrint (''  <OrientationInterpolator DEF=\''CameraOrientationInterpolator\'' key=\'''' + stripBrackets(CameraOI.key) + ''\'' keyValue=\'''' + stripBrackets(CameraOI.keyValue) + ''\''/>'');\n      }\n   }\n   if (eventValue == 0)\n   {\n      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\n      frameCount++;\n   }\n   else if (eventValue == 1)\n   {\n      alwaysPrint (''shotClock='' + (timestamp - startTime) + '', frameCount='' + frameCount + '', fraction='' + eventValue + '', position='' + ViewpointNode.position.toString() + '', orientation='' + ViewpointNode.orientation.toString());\n      if (animated) // output results\n      {\n        // TODO how to report or speed up response?  alwaysPrint (''  aimPoint='' + aimPoint.toString());\n      }\n      alwaysPrint (''Animation loop complete.'');\n      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\n   }\n   else\n   {\n      frameCount++;\n   }\n}\n\nfunction set_bind (eventValue) // input event received for inputOnly field\n{\n   // need to ensure CameraShot nodes are properly initialized\n   if (initialized == false)\n   {\n      checkShots (true);\n      initialized = true;\n   }\n   if (eventValue)\n   {\n       tracePrint (''Camera has been bound'');\n   }\n   else\n   {\n       tracePrint (''Camera has been unbound'');\n   }\n}\n\nfunction set_description (eventValue) // input event received for inputOutput field\n{\n    description = eventValue;\n}\n\nfunction set_position (eventValue) // input event received for inputOutput field\n{\n    position = eventValue;\n}\n\nfunction set_orientation (eventValue) // input event received for inputOutput field\n{\n    orientation = eventValue;\n}\n\nfunction set_fieldOfView (eventValue) // input event received for inputOutput field\n{\n    fieldOfView = eventValue;\n}\n\nfunction set_nearClipPlane (eventValue) // input event received for inputOutput field\n{\n    nearClipPlane = eventValue;\n}\n\nfunction set_farClipPlane (eventValue) // input event received for inputOutput field\n{\n    farClipPlane = eventValue;\n}\n\nfunction set_shots (eventValue) // input event received for inputOutput field\n{\n    shots = eventValue;\n}\n\nfunction set_filterColor (eventValue) // input event received for inputOutput field\n{\n    filterColor = eventValue;\n}\n\nfunction set_filterTransparency (eventValue) // input event received for inputOutput field\n{\n    filterTransparency = eventValue;\n}\n\nfunction set_upVector (eventValue) // input event received for inputOutput field\n{\n    upVector = eventValue;\n}\n\nfunction set_fStop (eventValue) // input event received for inputOutput field\n{\n    fStop = eventValue;\n}\n\nfunction set_focusDistance (eventValue) // input event received for inputOutput field\n{\n    focusDistance = eventValue;\n}\n\nfunction set_offlineRender (eventValue) // input event received for inputOutput field\n{\n    offlineRender = eventValue;\n}\n\nfunction set_key (eventValue) // input event received for inputOutput field\n{\n    key = eventValue;\n}\n\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\n{\n    keyValuePosition = eventValue;\n}\n\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\n{\n    keyValueOrientation = eventValue;\n}\n\nfunction set_animated (eventValue) // input event received for inputOutput field\n{\n    animated = eventValue;\n}\n\nfunction tracePrint (outputValue)\n{\n	if (traceEnabled) alwaysPrint (outputValue);\n}\nfunction alwaysPrint (outputValue)\n{\n    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\n    var outputString = outputValue.toString(); // utility function according to spec\n    if (outputString == null) outputString = outputValue; // direct cast\n\n    if  (description.length > 0)\n         Browser.print (''[Camera: '' + description + ''] '' + outputString + ''\n'');\n    else\n         Browser.print (''[Camera] '' + outputString + ''\n'');' + LineEnding +
  '}');
end;

procedure InitCameraPrototypesPart8;
begin
ProtoDeclare17.Node.AddChildren([Script50]);
{ ROUTE CameraScript.position TO CameraViewpoint.position }
ProtoBody42.AddRoute(FieldVal52, Viewpoint43.position);
{ ROUTE CameraScript.orientation TO CameraViewpoint.orientation }
ProtoBody42.AddRoute(FieldVal53, Viewpoint43.orientation);
{ ROUTE CameraScript.isActive TO CameraViewpoint.set_bind }
ProtoBody42.AddRoute(FieldVal65, Viewpoint43.EventSet_bind);
{ ROUTE CameraScript.isActive TO CameraNavInfo.set_bind }
ProtoBody42.AddRoute(FieldVal65, NavigationInfo44.EventSet_bind);
{ ROUTE CameraScript.isActive TO CameraDirectionalLight.on }
ProtoBody42.AddRoute(FieldVal65, DirectionalLight45.on);
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
end;

procedure InitCameraPrototypesPart9;
begin
ProtoDeclare92.InterfaceDeclarations.Add(FieldDecl98);
FieldVal99 := TSFVec3f.Create(nil, True, 'initialAimPoint', Vector3(0, 0, 0));
FieldDecl99 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl99.FieldOrEvent := FieldVal99;
FieldVal99.ParentInterfaceDeclaration := FieldDecl99;
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
end;

procedure InitCameraPrototypesPart10;
begin
FieldVal108 := TSFString.CreateUndefined(Script107, True, 'description');
Script107.AddCustomFieldOrEvent(FieldVal108);
FieldVal109 := TSFBool.CreateUndefined(Script107, True, 'enabled');
Script107.AddCustomFieldOrEvent(FieldVal109);
FieldVal110 := TMFNode.CreateUndefined(Script107, True, 'moves');
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
end;

procedure InitCameraPrototypesPart11;
begin
Script107.FieldOrEvent('isActive', True).IsClauseNamesAdd('isActive');
Script107.FieldOrEvent('traceEnabled', True).IsClauseNamesAdd('traceEnabled');
Script107.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize () // CameraShotScript' + LineEnding +
  '{' + LineEnding +
  '//  tracePrint (''initialize start...'');\n\n    // compute shotDuration by summing durations from contained CameraMovement nodes\n    shotDuration = 0;\n    for (i = 0; i < moves.length; i++)\n    {\n        shotDuration = shotDuration + moves[i].duration;\n    }\n    alwaysPrint (''number of contained CameraMove nodes='' + moves.length + '', shotDuration='' + shotDuration + '' seconds'');\n\n//  tracePrint (''... initialize() complete'');\n}\n\nfunction set_description (eventValue) // input event received for inputOutput field\n{\n    description = eventValue;\n}\n\nfunction set_enabled (eventValue) // input event received for inputOutput field\n{\n    enabled = eventValue;\n}\n\nfunction set_moves (eventValue) // input event received for inputOutput field\n{\n    moves = eventValue;\n}\n\nfunction set_initialPosition (eventValue) // input event received for inputOutput field\n{\n    initialPosition = eventValue;\n}\n\nfunction set_initialOrientation (eventValue) // input event received for inputOutput field\n{\n    initialOrientation = eventValue;\n}\n\nfunction set_initialAimPoint (eventValue) // input event received for inputOutput field\n{\n    initialAimPoint = eventValue;\n}\n\nfunction set_initialFieldOfView (eventValue) // input event received for inputOutput field\n{\n    initialFieldOfView = eventValue;\n}\n\nfunction set_initialFStop (eventValue) // input event received for inputOutput field\n{\n    initialFStop = eventValue;\n}\n\nfunction set_initialFocusDistance (eventValue) // input event received for inputOutput field\n{\n    initialFocusDistance = eventValue;\n}\n\nfunction set_key (eventValue) // input event received for inputOutput field\n{\n    key = eventValue;\n}\n\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\n{\n    keyValuePosition = eventValue;\n}\n\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\n{\n    keyValueOrientation = eventValue;\n}\n\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n\nfunction tracePrint (outputValue)\n{\n	if (traceEnabled) alwaysPrint (outputValue);\n}\nfunction alwaysPrint (outputValue)\n{\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\n    var outputString = outputValue.toString(); // utility function according to spec\n    if (outputString == null) outputString = outputValue; // direct cast\n\n    if  (description.length > 0)\n         Browser.print (''[CameraShot: '' + description + ''] '' + outputString + ''\n'');\n    else\n         Browser.print (''[CameraShot] '' + outputString + ''\n'');' + LineEnding +
  '}');
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
end;

procedure InitCameraPrototypesPart12;
begin
FieldVal131 := TSFVec3f.Create(nil, True, 'goalAimPoint', Vector3(0, 0, 0));
FieldDecl131 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl131.FieldOrEvent := FieldVal131;
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
end;

procedure InitCameraPrototypesPart13;
begin
Script138.AddCustomFieldOrEvent(FieldVal140);
FieldVal141 := TSFFloat.CreateUndefined(Script138, True, 'duration');
Script138.AddCustomFieldOrEvent(FieldVal141);
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
Script138.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize () // CameraMovementScript' + LineEnding +
  '{' + LineEnding +
  '//  tracePrint (''initialize start...'');\n    alwaysPrint (''initialize goalPosition='' + goalPosition.toString() + '', goalOrientation='' + goalOrientation.toString() +\n                           '', goalAimPoint='' + goalAimPoint.toString() // + '', tracking='' + tracking.toString()\n                           );\n    if (duration < 0)\n    {\n       alwaysPrint (''error: negative duration='' + duration + '', reset to 0 and ignored'');\n       duration = 0;\n    }\n    else if (duration == 0)\n    {\n       alwaysPrint (''warning: duration=0, nothing to do!'');\n    }\n    tracePrint (''... initialize complete'');\n}\n\nfunction set_goalAimPoint (eventValue) // input event received for inputOutput field\n{\n    goalAimPoint_changed = eventValue;\n    tracePrint (''goalAimPoint='' + goalAimPoint.toString());\n\n    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\n}\n\nfunction set_description (eventValue) // input event received for inputOutput field\n{\n    description = eventValue;\n}\n\nfunction set_enabled (eventValue) // input event received for inputOutput field\n{\n    enabled = eventValue;\n}\n\nfunction set_duration (eventValue) // input event received for inputOutput field\n{\n    duration = eventValue;\n}\n\nfunction set_goalPosition (eventValue) // input event received for inputOutput field\n{\n    goalPosition = eventValue;\n}\n\nfunction set_goalOrientation (eventValue) // input event received for inputOutput field\n{\n    goalOrientation = eventValue;\n}\n\nfunction set_tracking (eventValue) // input event received for inputOutput field\n{\n    tracking = eventValue;\n}\n\nfunction set_goalFieldOfView (eventValue) // input event received for inputOutput field\n{\n    goalFieldOfView = eventValue;\n}\n\nfunction set_goalFStop (eventValue) // input event received for inputOutput field\n{\n    goalFStop = eventValue;\n}\n\nfunction set_goalFocusDistance (eventValue) // input event received for inputOutput field\n{\n    goalFocusDistance = eventValue;\n}\n\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n\nfunction tracePrint (outputValue)\n{\n	if (traceEnabled) alwaysPrint (outputValue);\n}\n\nfunction alwaysPrint (outputValue)\n{\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\n    var outputString = outputValue.toString(); // utility function according to spec\n    if (outputString == null) outputString = outputValue; // direct cast\n\n    if  (description.length > 0)\n         Browser.print (''[CameraMovement: '' + description + ''] '' + outputString + ''\n'');\n    else\n         Browser.print (''[CameraMovement] '' + outputString + ''\n'');' + LineEnding +
  '}');
ProtoDeclare123.Node.AddChildren([Script138]);
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
X3D0.AddPrototype(ProtoDeclare123);
{ =============== OfflineRender ============== }
ProtoDeclare151 := CreateEmptyPrototype('OfflineRender');
ProtoDeclare151.X3DName := 'OfflineRender';
end;

procedure InitCameraPrototypesPart14;
begin
ProtoDeclare151.Appinfo := 'OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).';
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
end;

procedure InitCameraPrototypesPart15;
begin
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl160);
FieldVal161 := TMFString.Create(nil, False, 'movieFormat', (['mpeg']));
FieldDecl161 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl161.FieldOrEvent := FieldVal161;
FieldVal161.ParentInterfaceDeclaration := FieldDecl161;
ProtoDeclare151.InterfaceDeclarations.Add(FieldDecl161);
FieldVal162 := TMFString.Create(nil, False, 'imageFormat', (['png']));
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
end;

procedure InitCameraPrototypesPart16;
begin
Script165.AddCustomFieldOrEvent(FieldVal175);
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
Script165.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize () // OfflineRenderScript' + LineEnding +
  '{' + LineEnding +
  '//  tracePrint (''initialize start...'');\n\n    tracePrint (''... initialize complete'');\n}\n\nfunction set_description (eventValue) // input event received for inputOutput field\n{\n    description = eventValue;\n}\n\nfunction set_enabled (eventValue) // input event received for inputOutput field\n{\n    enabled = eventValue;\n}\n\nfunction set_frameRate (eventValue) // input event received for inputOutput field\n{\n    frameRate = eventValue;\n}\n\nfunction set_frameSize (eventValue) // input event received for inputOutput field\n{\n    frameSize = eventValue;\n}\n\nfunction set_pixelAspectRatio (eventValue) // input event received for inputOutput field\n{\n    pixelAspectRatio = eventValue;\n}\n\nfunction set_startTime (eventValue) // input event received for inputOnly field\n{\n   // do something with input eventValue;\n}\n\nfunction tracePrint (outputValue)\n{\n	if (traceEnabled) alwaysPrint (outputValue);\n}\n\nfunction alwaysPrint (outputValue)\n{\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\n    var outputString = outputValue.toString(); // utility function according to spec\n    if (outputString == null) outputString = outputValue; // direct cast\n\n    if  (description.length > 0)\n         Browser.print (''[OfflineRender: '' + description + ''] '' + outputString + ''\n'');\n    else\n         Browser.print (''[OfflineRender] '' + outputString + ''\n'');' + LineEnding +
  '}');
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
Transform179.FdChildren.Add(Shape180);
end;

procedure InitCameraPrototypesPart17;
begin
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
  InitCameraPrototypesPart17;
  Result := X3D0;
end;

begin
end.
