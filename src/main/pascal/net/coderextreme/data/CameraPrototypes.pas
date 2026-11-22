unit CameraPrototypes;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateCameraPrototypes: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group16: TGroupNode;
X3DPrototype17: TX3DPrototype;
X3DInterfaceDeclaration18: TX3DInterfaceDeclaration;
SFString19: TSFString;
SFVec3f20: TSFVec3f;
SFRotation21: TSFRotation;
SFFloat22: TSFFloat;
SFFloat23: TSFFloat;
SFBool24: TSFBool;
SFTime25: TSFTime;
SFBool26: TSFBool;
SFFloat27: TSFFloat;
SFFloat28: TSFFloat;
MFNode29: TMFNode;
SFBool30: TSFBool;
SFColor31: TSFColor;
SFFloat32: TSFFloat;
SFColor33: TSFColor;
SFFloat34: TSFFloat;
SFVec3f35: TSFVec3f;
SFFloat36: TSFFloat;
SFFloat37: TSFFloat;
SFBool38: TSFBool;
SFTime39: TSFTime;
SFNode40: TSFNode;
SFBool41: TSFBool;
X3DPrototype42: TX3DPrototype;
Viewpoint43: TViewpointNode;
IS44: TIS;
connect45: Tconnect;
connect46: Tconnect;
connect47: Tconnect;
connect48: Tconnect;
connect49: Tconnect;
connect50: Tconnect;
connect51: Tconnect;
NavigationInfo52: TNavigationInfoNode;
IS53: TIS;
connect54: Tconnect;
connect55: Tconnect;
connect56: Tconnect;
DirectionalLight57: TDirectionalLightNode;
IS58: TIS;
connect59: Tconnect;
connect60: Tconnect;
connect61: Tconnect;
PositionInterpolator62: TPositionInterpolatorNode;
IS63: TIS;
connect64: Tconnect;
OrientationInterpolator65: TOrientationInterpolatorNode;
IS66: TIS;
connect67: Tconnect;
Script70: TScriptNode;
SFString71: TSFString;
SFVec3f72: TSFVec3f;
SFRotation73: TSFRotation;
SFFloat74: TSFFloat;
SFBool75: TSFBool;
SFFloat76: TSFFloat;
SFFloat77: TSFFloat;
SFFloat78: TSFFloat;
MFNode79: TMFNode;
SFColor80: TSFColor;
SFFloat81: TSFFloat;
SFVec3f82: TSFVec3f;
SFFloat83: TSFFloat;
SFFloat84: TSFFloat;
SFBool85: TSFBool;
SFTime86: TSFTime;
SFNode87: TSFNode;
SFNode88: TSFNode;
Viewpoint89: TViewpointNode;
SFNode90: TSFNode;
NavigationInfo91: TNavigationInfoNode;
SFNode92: TSFNode;
PositionInterpolator93: TPositionInterpolatorNode;
SFNode94: TSFNode;
OrientationInterpolator95: TOrientationInterpolatorNode;
MFFloat96: TMFFloat;
MFVec3f97: TMFVec3f;
MFRotation98: TMFRotation;
SFBool99: TSFBool;
SFBool100: TSFBool;
SFInt32101: TSFInt32;
SFInt32102: TSFInt32;
SFFloat103: TSFFloat;
SFTime104: TSFTime;
SFTime105: TSFTime;
SFBool106: TSFBool;
IS107: TIS;
connect108: Tconnect;
connect109: Tconnect;
connect110: Tconnect;
connect111: Tconnect;
connect112: Tconnect;
connect113: Tconnect;
connect114: Tconnect;
connect115: Tconnect;
connect116: Tconnect;
connect117: Tconnect;
connect118: Tconnect;
connect119: Tconnect;
connect120: Tconnect;
connect121: Tconnect;
connect122: Tconnect;
connect123: Tconnect;
connect124: Tconnect;
connect125: Tconnect;
X3DPrototype131: TX3DPrototype;
X3DInterfaceDeclaration132: TX3DInterfaceDeclaration;
SFString133: TSFString;
SFBool134: TSFBool;
MFNode135: TMFNode;
SFVec3f136: TSFVec3f;
SFRotation137: TSFRotation;
SFVec3f138: TSFVec3f;
SFFloat139: TSFFloat;
SFFloat140: TSFFloat;
SFFloat141: TSFFloat;
SFTime142: TSFTime;
SFBool143: TSFBool;
SFBool144: TSFBool;
X3DPrototype145: TX3DPrototype;
Script146: TScriptNode;
SFString147: TSFString;
SFBool148: TSFBool;
MFNode149: TMFNode;
SFVec3f150: TSFVec3f;
SFRotation151: TSFRotation;
SFVec3f152: TSFVec3f;
SFFloat153: TSFFloat;
SFFloat154: TSFFloat;
SFFloat155: TSFFloat;
SFTime156: TSFTime;
SFBool157: TSFBool;
SFBool158: TSFBool;
MFFloat159: TMFFloat;
MFVec3f160: TMFVec3f;
MFRotation161: TMFRotation;
IS162: TIS;
connect163: Tconnect;
connect164: Tconnect;
connect165: Tconnect;
connect166: Tconnect;
connect167: Tconnect;
connect168: Tconnect;
connect169: Tconnect;
connect170: Tconnect;
connect171: Tconnect;
connect172: Tconnect;
connect173: Tconnect;
connect174: Tconnect;
X3DPrototype175: TX3DPrototype;
X3DInterfaceDeclaration176: TX3DInterfaceDeclaration;
SFString177: TSFString;
SFBool178: TSFBool;
SFFloat179: TSFFloat;
SFVec3f180: TSFVec3f;
SFRotation181: TSFRotation;
SFBool182: TSFBool;
SFVec3f183: TSFVec3f;
SFFloat184: TSFFloat;
SFFloat185: TSFFloat;
SFFloat186: TSFFloat;
SFBool187: TSFBool;
SFBool188: TSFBool;
X3DPrototype189: TX3DPrototype;
Script190: TScriptNode;
SFString191: TSFString;
SFBool192: TSFBool;
SFFloat193: TSFFloat;
SFVec3f194: TSFVec3f;
SFRotation195: TSFRotation;
SFBool196: TSFBool;
SFVec3f197: TSFVec3f;
SFFloat198: TSFFloat;
SFFloat199: TSFFloat;
SFFloat200: TSFFloat;
SFBool201: TSFBool;
SFBool202: TSFBool;
IS203: TIS;
connect204: Tconnect;
connect205: Tconnect;
connect206: Tconnect;
connect207: Tconnect;
connect208: Tconnect;
connect209: Tconnect;
connect210: Tconnect;
connect211: Tconnect;
connect212: Tconnect;
connect213: Tconnect;
connect214: Tconnect;
connect215: Tconnect;
X3DPrototype216: TX3DPrototype;
X3DInterfaceDeclaration217: TX3DInterfaceDeclaration;
SFString218: TSFString;
SFBool219: TSFBool;
SFFloat220: TSFFloat;
SFVec2f221: TSFVec2f;
SFFloat222: TSFFloat;
SFTime223: TSFTime;
SFFloat224: TSFFloat;
SFTime225: TSFTime;
MFString226: TMFString;
MFString227: TMFString;
SFBool228: TSFBool;
X3DPrototype229: TX3DPrototype;
Script230: TScriptNode;
SFString231: TSFString;
SFBool232: TSFBool;
SFFloat233: TSFFloat;
SFVec2f234: TSFVec2f;
SFFloat235: TSFFloat;
SFTime236: TSFTime;
SFFloat237: TSFFloat;
SFTime238: TSFTime;
MFString239: TMFString;
MFString240: TMFString;
SFBool241: TSFBool;
IS242: TIS;
connect243: Tconnect;
connect244: Tconnect;
connect245: Tconnect;
connect246: Tconnect;
connect247: Tconnect;
connect248: Tconnect;
connect249: Tconnect;
connect250: Tconnect;
connect251: Tconnect;
connect252: Tconnect;
connect253: Tconnect;
Background254: TBackgroundNode;
Anchor255: TAnchorNode;
Transform256: TTransformNode;
Shape257: TShapeNode;
Text258: TTextNode;
FontStyle259: TFontStyleNode;
Appearance260: TAppearanceNode;
Material261: TMaterialNode;

procedure InitCameraPrototypesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'CameraPrototypes.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman and Jeff Weekley';
{ METHOD .Meta }
X3D0.Meta['created'] := '16 March 2009';
{ METHOD .Meta }
X3D0.Meta['modified'] := '25 October 2016';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'Schematron rules, backed up by initialize() checks';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'BeyondViewpointCameraNodesWeb3D2009.pdf';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'Camera nodes for Viewpoint navigation control';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'CameraExamples.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group16 := TGroupNode.Create;
{ =============== Camera ============== }
X3DPrototype17 := TX3DPrototype.Create;
X3DPrototype17.Appinfo := 'Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.';
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);
{ Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields }
SFString19 := TSFString.CreateUndefined(X3DInterfaceDeclaration18, false, 'description');
SFString19.Appinfo := 'Text description to be displayed for this Camera';
{ METHOD .AddSFString }
X3DInterfaceDeclaration18.AddSFString([SFString19]);
SFVec3f20 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration18, false, 'position');
SFVec3f20.Appinfo := 'Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated';
SFVec3f20.Value := '0 0 10';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration18.AddSFVec3f([SFVec3f20]);
SFRotation21 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration18, false, 'orientation');
SFRotation21.Appinfo := 'Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated';
SFRotation21.Value := '0 0 1 0';
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration18.AddSFRotation([SFRotation21]);
SFFloat22 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'fieldOfView');
SFFloat22.Appinfo := 'pi/4';
SFFloat22.Value := '0.7854';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat22]);
SFFloat23 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'set_fraction');
SFFloat23.Appinfo := 'input fraction drives interpolators';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat23]);
end;

procedure InitCameraPrototypesPart1;
begin

SFBool24 := TSFBool.CreateUndefined(X3DInterfaceDeclaration18, false, 'set_bind');
SFBool24.Appinfo := 'input event binds or unbinds this Camera';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration18.AddSFBool([SFBool24]);
SFTime25 := TSFTime.CreateUndefined(X3DInterfaceDeclaration18, false, 'bindTime');
SFTime25.Appinfo := 'output event indicates when this Camera is bound';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration18.AddSFTime([SFTime25]);
SFBool26 := TSFBool.CreateUndefined(X3DInterfaceDeclaration18, false, 'isBound');
SFBool26.Appinfo := 'output event indicates whether this Camera is bound or unbound';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration18.AddSFBool([SFBool26]);
SFFloat27 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'nearClipPlane');
SFFloat27.Appinfo := 'Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]';
SFFloat27.Value := '0.25';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat27]);
SFFloat28 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'farClipPlane');
SFFloat28.Appinfo := 'Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit';
SFFloat28.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat28]);
MFNode29 := TMFNode.CreateUndefined(X3DInterfaceDeclaration18, false, 'shots');
MFNode29.Appinfo := 'Array of CameraShot nodes which in turn contain CameraMovement nodes';
{ initialization nodes (if any) go here }
{ METHOD .AddMFNode }
X3DInterfaceDeclaration18.AddMFNode([MFNode29]);
SFBool30 := TSFBool.CreateUndefined(X3DInterfaceDeclaration18, false, 'headlight');
SFBool30.Appinfo := 'Whether camera headlight is on or off';
SFBool30.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration18.AddSFBool([SFBool30]);
SFColor31 := TSFColor.CreateUndefined(X3DInterfaceDeclaration18, false, 'headlightColor');
SFColor31.Appinfo := 'Camera headlight color';
SFColor31.Value := '1 1 1';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration18.AddSFColor([SFColor31]);
SFFloat32 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'headlightIntensity');
SFFloat32.Appinfo := 'Camera headlight intensity';
SFFloat32.Value := '1';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat32]);
SFColor33 := TSFColor.CreateUndefined(X3DInterfaceDeclaration18, false, 'filterColor');
SFColor33.Appinfo := 'Camera filter color that modifies virtual lens capture';
SFColor33.Value := '1 1 1';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration18.AddSFColor([SFColor33]);
SFFloat34 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'filterTransparency');
SFFloat34.Appinfo := 'Camera filter transparency that modifies virtual lens capture';
SFFloat34.Value := '1';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat34]);
end;

procedure InitCameraPrototypesPart2;
begin

SFVec3f35 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration18, false, 'upVector');
SFVec3f35.Appinfo := 'upVector changes modify camera orientation (and possibly vice versa)';
SFVec3f35.Value := '0 1 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration18.AddSFVec3f([SFVec3f35]);
SFFloat36 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'fStop');
SFFloat36.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
SFFloat36.Value := '5.6';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat36]);
SFFloat37 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'focusDistance');
SFFloat37.Appinfo := 'Distance to focal plane of sharpest focus';
SFFloat37.Value := '10';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat37]);
SFBool38 := TSFBool.CreateUndefined(X3DInterfaceDeclaration18, false, 'isActive');
SFBool38.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration18.AddSFBool([SFBool38]);
SFTime39 := TSFTime.CreateUndefined(X3DInterfaceDeclaration18, false, 'totalDuration');
SFTime39.Appinfo := 'Total duration of contained enabled CameraShot (and thus CameraMovement) move durations';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration18.AddSFTime([SFTime39]);
SFNode40 := TSFNode.CreateUndefined(X3DInterfaceDeclaration18, false, 'offlineRender');
SFNode40.Appinfo := 'OfflineRender node';
{ initialization node (if any) goes here }
{ METHOD .AddSFNode }
X3DInterfaceDeclaration18.AddSFNode([SFNode40]);
SFBool41 := TSFBool.CreateUndefined(X3DInterfaceDeclaration18, false, 'traceEnabled');
SFBool41.Appinfo := 'enable console output to trace script computations and prototype progress';
SFBool41.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration18.AddSFBool([SFBool41]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype17.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration18]);
X3DPrototype42 := TX3DPrototype.Create;
Viewpoint43 := TViewpointNode.Create;
IS44 := TIS.Create;
connect45 := Tconnect.Create;
connect45.NodeField := 'description';
connect45.ProtoField := 'description';
{ METHOD .Connect }
IS44.Connect := connect45;
connect46 := Tconnect.Create;
connect46.NodeField := 'position';
connect46.ProtoField := 'position';
{ METHOD .Connect }
IS44.Connect := connect46;
connect47 := Tconnect.Create;
connect47.NodeField := 'orientation';
connect47.ProtoField := 'orientation';
end;

procedure InitCameraPrototypesPart3;
begin

{ METHOD .Connect }
IS44.Connect := connect47;
connect48 := Tconnect.Create;
connect48.NodeField := 'fieldOfView';
connect48.ProtoField := 'fieldOfView';
{ METHOD .Connect }
IS44.Connect := connect48;
connect49 := Tconnect.Create;
connect49.NodeField := 'set_bind';
connect49.ProtoField := 'set_bind';
{ METHOD .Connect }
IS44.Connect := connect49;
connect50 := Tconnect.Create;
connect50.NodeField := 'bindTime';
connect50.ProtoField := 'bindTime';
{ METHOD .Connect }
IS44.Connect := connect50;
connect51 := Tconnect.Create;
connect51.NodeField := 'isBound';
connect51.ProtoField := 'isBound';
{ METHOD .Connect }
IS44.Connect := connect51;
{ METHOD .IS }
Viewpoint43.IS := IS44;
{ METHOD .AddViewpoint }
X3DPrototype42.AddViewpoint([Viewpoint43]);
{ NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation }
NavigationInfo52 := TNavigationInfoNode.Create;
NavigationInfo52.SetType(['EXAMINE','FLY','ANY']);
IS53 := TIS.Create;
connect54 := Tconnect.Create;
connect54.NodeField := 'set_bind';
connect54.ProtoField := 'set_bind';
{ METHOD .Connect }
IS53.Connect := connect54;
connect55 := Tconnect.Create;
connect55.NodeField := 'headlight';
connect55.ProtoField := 'headlight';
{ METHOD .Connect }
IS53.Connect := connect55;
connect56 := Tconnect.Create;
connect56.NodeField := 'visibilityLimit';
connect56.ProtoField := 'farClipPlane';
{ METHOD .Connect }
IS53.Connect := connect56;
{ No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing. }
{ METHOD .IS }
NavigationInfo52.IS := IS53;
{ METHOD .AddNavigationInfo }
X3DPrototype42.AddNavigationInfo([NavigationInfo52]);
{ this DirectionalLight replaces NavigationInfo headlight in order to add color capability }
DirectionalLight57 := TDirectionalLightNode.Create;
DirectionalLight57.Global := True;
{ TODO confirm other default field values match NavigationInfo spec }
IS58 := TIS.Create;
connect59 := Tconnect.Create;
end;

procedure InitCameraPrototypesPart4;
begin

connect59.NodeField := 'on';
connect59.ProtoField := 'headlight';
{ METHOD .Connect }
IS58.Connect := connect59;
connect60 := Tconnect.Create;
connect60.NodeField := 'color';
connect60.ProtoField := 'headlightColor';
{ METHOD .Connect }
IS58.Connect := connect60;
connect61 := Tconnect.Create;
connect61.NodeField := 'intensity';
connect61.ProtoField := 'headlightIntensity';
{ METHOD .Connect }
IS58.Connect := connect61;
{ METHOD .IS }
DirectionalLight57.IS := IS58;
{ METHOD .AddDirectionalLight }
X3DPrototype42.AddDirectionalLight([DirectionalLight57]);
PositionInterpolator62 := TPositionInterpolatorNode.Create;
PositionInterpolator62.SetKey([0,1]);
PositionInterpolator62.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0)]);
IS63 := TIS.Create;
connect64 := Tconnect.Create;
connect64.NodeField := 'set_fraction';
connect64.ProtoField := 'set_fraction';
{ METHOD .Connect }
IS63.Connect := connect64;
{ METHOD .IS }
PositionInterpolator62.IS := IS63;
{ METHOD .AddPositionInterpolator }
X3DPrototype42.AddPositionInterpolator([PositionInterpolator62]);
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;
OrientationInterpolator65.SetKey([0,1]);
OrientationInterpolator65.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
IS66 := TIS.Create;
connect67 := Tconnect.Create;
connect67.NodeField := 'set_fraction';
connect67.ProtoField := 'set_fraction';
{ METHOD .Connect }
IS66.Connect := connect67;
{ METHOD .IS }
OrientationInterpolator65.IS := IS66;
{ METHOD .AddOrientationInterpolator }
X3DPrototype42.AddOrientationInterpolator([OrientationInterpolator65]);
{ Original "CameraPositionInterpolator.EventValue_changed TO CameraViewpoint.position }
{ Sample CameraPositionInterpolator.EventValue_changed TO CameraViewpoint.position}
X3DPrototype42.AddRoute(PositionInterpolator62.EventValue_changed, Viewpoint43.set_position);
{ METHOD .AddX3DROUTE }
{ Original "CameraOrientationInterpolator.EventValue_changed TO CameraViewpoint.orientation }
{ Sample CameraOrientationInterpolator.EventValue_changed TO CameraViewpoint.orientation}
X3DPrototype42.AddRoute(OrientationInterpolator65.EventValue_changed, Viewpoint43.set_orientation);
{ METHOD .AddX3DROUTE }
Script70 := TScriptNode.Create;
Script70.DirectOutput := True;
Script70.MustEvaluate := True;
{ binding is controlled externally, all camera operations proceed the same regardless of whether bound or not }
SFString71 := TSFString.CreateUndefined(Script70, false, 'description');
SFString71.Appinfo := 'Text description to be displayed for this Camera';
end;

procedure InitCameraPrototypesPart5;
begin

{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFString71);
SFVec3f72 := TSFVec3f.CreateUndefined(Script70, false, 'position');
SFVec3f72.Appinfo := 'Camera position in local transformation frame';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFVec3f72);
SFRotation73 := TSFRotation.CreateUndefined(Script70, false, 'orientation');
SFRotation73.Appinfo := 'Camera rotation in local transformation frame';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFRotation73);
SFFloat74 := TSFFloat.CreateUndefined(Script70, false, 'set_fraction');
SFFloat74.Appinfo := 'input fraction drives interpolators';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFFloat74);
SFBool75 := TSFBool.CreateUndefined(Script70, false, 'set_bind');
SFBool75.Appinfo := 'input event binds or unbinds this Camera';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFBool75);
SFFloat76 := TSFFloat.CreateUndefined(Script70, false, 'fieldOfView');
SFFloat76.Appinfo := 'pi/4';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFFloat76);
SFFloat77 := TSFFloat.CreateUndefined(Script70, false, 'nearClipPlane');
SFFloat77.Appinfo := 'Vector distance to near clipping plane';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFFloat77);
SFFloat78 := TSFFloat.CreateUndefined(Script70, false, 'farClipPlane');
SFFloat78.Appinfo := 'Vector distance to far clipping plane';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFFloat78);
MFNode79 := TMFNode.CreateUndefined(Script70, false, 'shots');
MFNode79.Appinfo := 'Array of CameraShot nodes which in turn contain CameraMovement nodes';
{ initialization nodes (if any) go here }
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(MFNode79);
SFColor80 := TSFColor.CreateUndefined(Script70, false, 'filterColor');
SFColor80.Appinfo := 'Camera filter color that modifies virtual lens capture';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFColor80);
SFFloat81 := TSFFloat.CreateUndefined(Script70, false, 'filterTransparency');
SFFloat81.Appinfo := 'Camera filter transparency that modifies virtual lens capture';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFFloat81);
SFVec3f82 := TSFVec3f.CreateUndefined(Script70, false, 'upVector');
SFVec3f82.Appinfo := 'upVector changes modify camera orientation (and possibly vice versa)';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFVec3f82);
SFFloat83 := TSFFloat.CreateUndefined(Script70, false, 'fStop');
SFFloat83.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFFloat83);
SFFloat84 := TSFFloat.CreateUndefined(Script70, false, 'focusDistance');
SFFloat84.Appinfo := 'Distance to focal plane of sharpest focus';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFFloat84);
end;

procedure InitCameraPrototypesPart6;
begin

SFBool85 := TSFBool.CreateUndefined(Script70, false, 'isActive');
SFBool85.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFBool85);
SFTime86 := TSFTime.CreateUndefined(Script70, false, 'totalDuration');
SFTime86.Appinfo := 'Total duration of contained enabled CameraShot (and thus CameraMovement) move durations';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFTime86);
SFNode87 := TSFNode.CreateUndefined(Script70, false, 'offlineRender');
SFNode87.Appinfo := 'OfflineRender node';
{ initialization node (if any) goes here }
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFNode87);
SFNode88 := TSFNode.CreateUndefined(Script70, false, 'ViewpointNode');
SFNode88.Appinfo := 'node reference to permit getting setting fields from within Script';
{ METHOD .AddViewpoint }
SFNode88.AddViewpoint([Viewpoint43]);
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFNode88);
SFNode90 := TSFNode.CreateUndefined(Script70, false, 'NavInfoNode');
SFNode90.Appinfo := 'node reference to permit getting setting fields from within Script';
{ METHOD .AddNavigationInfo }
SFNode90.AddNavigationInfo([NavigationInfo52]);
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFNode90);
SFNode92 := TSFNode.CreateUndefined(Script70, false, 'CameraPI');
SFNode92.Appinfo := 'node reference to permit getting setting fields from within Script';
{ METHOD .AddPositionInterpolator }
SFNode92.AddPositionInterpolator([PositionInterpolator62]);
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFNode92);
SFNode94 := TSFNode.CreateUndefined(Script70, false, 'CameraOI');
SFNode94.Appinfo := 'node reference to permit getting setting fields from within Script';
{ METHOD .AddOrientationInterpolator }
SFNode94.AddOrientationInterpolator([OrientationInterpolator65]);
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFNode94);
MFFloat96 := TMFFloat.CreateUndefined(Script70, false, 'key');
MFFloat96.Appinfo := 'key array for interpolators';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(MFFloat96);
MFVec3f97 := TMFVec3f.CreateUndefined(Script70, false, 'keyValuePosition');
MFVec3f97.Appinfo := 'keyValue array for PositionInterpolator';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(MFVec3f97);
MFRotation98 := TMFRotation.CreateUndefined(Script70, false, 'keyValueOrientation');
MFRotation98.Appinfo := 'keyValue array for OrientationInterpolator';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(MFRotation98);
SFBool99 := TSFBool.CreateUndefined(Script70, false, 'animated');
SFBool99.Appinfo := 'whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events';
SFBool99.Value := 'false';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFBool99);
SFBool100 := TSFBool.CreateUndefined(Script70, false, 'initialized');
SFBool100.Appinfo := 'perform checkShots() function once immediately after initialization';
end;

procedure InitCameraPrototypesPart7;
begin

SFBool100.Value := 'false';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFBool100);
SFInt32101 := TSFInt32.CreateUndefined(Script70, false, 'shotCount');
SFInt32101.Appinfo := 'how many CameraShot nodes are contained in shots array';
SFInt32101.Value := '0';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFInt32101);
SFInt32102 := TSFInt32.CreateUndefined(Script70, false, 'movesCount');
SFInt32102.Appinfo := 'how many CameraMove nodes are contained in moves array';
SFInt32102.Value := '0';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFInt32102);
SFFloat103 := TSFFloat.CreateUndefined(Script70, false, 'frameCount');
SFFloat103.Appinfo := 'how many frames were created in current loop';
SFFloat103.Value := '0';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFFloat103);
SFTime104 := TSFTime.CreateUndefined(Script70, false, 'startTime');
SFTime104.Appinfo := 'holding variable';
SFTime104.Value := '0';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFTime104);
SFTime105 := TSFTime.CreateUndefined(Script70, false, 'priorTraceTime');
SFTime105.Appinfo := 'holding variable';
SFTime105.Value := '0';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFTime105);
SFBool106 := TSFBool.CreateUndefined(Script70, false, 'traceEnabled');
SFBool106.Appinfo := 'enable console output to trace script computations and prototype progress';
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFBool106);
IS107 := TIS.Create;
connect108 := Tconnect.Create;
connect108.NodeField := 'description';
connect108.ProtoField := 'description';
{ METHOD .Connect }
IS107.Connect := connect108;
connect109 := Tconnect.Create;
connect109.NodeField := 'position';
connect109.ProtoField := 'position';
{ METHOD .Connect }
IS107.Connect := connect109;
connect110 := Tconnect.Create;
connect110.NodeField := 'orientation';
connect110.ProtoField := 'orientation';
{ METHOD .Connect }
IS107.Connect := connect110;
connect111 := Tconnect.Create;
connect111.NodeField := 'set_fraction';
end;

procedure InitCameraPrototypesPart8;
begin

connect111.ProtoField := 'set_fraction';
{ METHOD .Connect }
IS107.Connect := connect111;
connect112 := Tconnect.Create;
connect112.NodeField := 'set_bind';
connect112.ProtoField := 'set_bind';
{ METHOD .Connect }
IS107.Connect := connect112;
connect113 := Tconnect.Create;
connect113.NodeField := 'fieldOfView';
connect113.ProtoField := 'fieldOfView';
{ METHOD .Connect }
IS107.Connect := connect113;
connect114 := Tconnect.Create;
connect114.NodeField := 'nearClipPlane';
connect114.ProtoField := 'nearClipPlane';
{ METHOD .Connect }
IS107.Connect := connect114;
connect115 := Tconnect.Create;
connect115.NodeField := 'farClipPlane';
connect115.ProtoField := 'farClipPlane';
{ METHOD .Connect }
IS107.Connect := connect115;
connect116 := Tconnect.Create;
connect116.NodeField := 'shots';
connect116.ProtoField := 'shots';
{ METHOD .Connect }
IS107.Connect := connect116;
connect117 := Tconnect.Create;
connect117.NodeField := 'filterColor';
connect117.ProtoField := 'filterColor';
{ METHOD .Connect }
IS107.Connect := connect117;
connect118 := Tconnect.Create;
connect118.NodeField := 'filterTransparency';
connect118.ProtoField := 'filterTransparency';
{ METHOD .Connect }
IS107.Connect := connect118;
connect119 := Tconnect.Create;
connect119.NodeField := 'upVector';
connect119.ProtoField := 'upVector';
{ METHOD .Connect }
IS107.Connect := connect119;
connect120 := Tconnect.Create;
connect120.NodeField := 'fStop';
connect120.ProtoField := 'fStop';
{ METHOD .Connect }
IS107.Connect := connect120;
connect121 := Tconnect.Create;
connect121.NodeField := 'focusDistance';
end;

procedure InitCameraPrototypesPart9;
begin

connect121.ProtoField := 'focusDistance';
{ METHOD .Connect }
IS107.Connect := connect121;
connect122 := Tconnect.Create;
connect122.NodeField := 'isActive';
connect122.ProtoField := 'isActive';
{ METHOD .Connect }
IS107.Connect := connect122;
connect123 := Tconnect.Create;
connect123.NodeField := 'totalDuration';
connect123.ProtoField := 'totalDuration';
{ METHOD .Connect }
IS107.Connect := connect123;
connect124 := Tconnect.Create;
connect124.NodeField := 'offlineRender';
connect124.ProtoField := 'offlineRender';
{ METHOD .Connect }
IS107.Connect := connect124;
connect125 := Tconnect.Create;
connect125.NodeField := 'traceEnabled';
connect125.ProtoField := 'traceEnabled';
{ METHOD .Connect }
IS107.Connect := connect125;
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(IS107);

Script70.SetSourceCode('''ecmascript:\n"+
"function initialize () // CameraScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n\\n    NavInfoNode.avatarSize[0]   = nearClipPlane;\\n\\n    // remaining setups deferred to invocation of checkShots() method\\n    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\\n    alwaysPrint ('initialize complete');\\n}\\n\\nfunction checkShots (eventValue)\\n{\\n    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\\n\\n    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\\n    totalDuration= 0;\\n    shotCount  = shots.length;\\n    movesCount = 0;\\n    for (i = 0; i < shotCount; i++) // shots index\\n    {\\n       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\\n       movesCount   += shots[i].moves.length;\\n       totalDuration = totalDuration + shots[i].shotDuration;\\n       if (shots[i].moves.length == 0)\\n       {\\n          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\\n       }\\n    }\\n    // size checks before proceeding\\n    if (shotCount == 0)\\n    {\\n       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\\n       return;\\n    }\\n    else if (movesCount == 0)\\n    {\\n       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\\n       return;\\n    }\\n    else if (totalDuration == 0)\\n    {\\n       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\\n       return;\\n    }\\n    tracePrint ('number of contained CameraShot nodes=' + shotCount);\\n    tracePrint ('number of contained CameraMove nodes=' + movesCount);\\n    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\\n\\n    // compute interpolators\\n    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\\n    for (i = 0; i < shotCount; i++) // shots index\\n    {\\n        if (i==0) // initial entries\\n        {\\n           key[0]                   = 0.0; // no previous move\\n           keyValuePosition[0]      = shots[i].initialPosition;\\n           keyValueOrientation[0]   = shots[i].initialOrientation;\\n        }\\n        else     // new shot repositions, reorients camera as clean break from preceding shot/move\\n        {\\n           key[k+1]                 = key[k]; // start from end from previous move\\n           keyValuePosition[k+1]    = shots[i].initialPosition;\\n           keyValueOrientation[k+1] = shots[i].initialOrientation;\\n           k++;\\n        }\\n        tracePrint (shots[i].description);\\n        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\\n\\n        for (j = 0; j < shots[i].moves.length; j++) // moves index\\n        {\\n            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\\n            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\\n            //  tracePrint ('durationFloat=' + durationFloat);\\n            key[k+1]               = key[k] + (durationFloat / totalDuration);\\n            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\\n            if (!animated)\\n            {\\n                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\\n            }\\n            else\\n            {\\n                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\\n                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\\n\\n                // test if difference vector is zero, if so maintain previous rotation\\n                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\\n                if (shotVector.length() >= 0)\\n                {\\n                    // default view direction is along -Z axis\\n                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\\n                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\\n                }\\n                else // note (k > 0)\\n                {\\n                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\\n                }\\n\\n                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\\n                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\\n                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\\n                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\\n                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\\n                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\\n            }\\n            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\\n\\n            // check animated parameter:  set true if any of moves are tracking moves\\n            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\\n         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\\n\\n            // intermediate trace\\n            tracePrint ('                key=' + key);\\n            tracePrint ('   keyValuePosition=' + keyValuePosition);\\n            tracePrint ('keyValueOrientation=' + keyValueOrientation);\\n            tracePrint ('- ' + shots[i].moves[j].description);\\n        }\\n    }\\n    tracePrint ('                key=' + key);\\n    tracePrint ('   keyValuePosition=' + keyValuePosition);\\n    tracePrint ('keyValueOrientation=' + keyValueOrientation);\\n    if (key.length != keyValuePosition.length)\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  'keyValuePosition.length=' + keyValuePosition.length);\\n    }\\n    if (key.length != keyValueOrientation.length)\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  'keyValueOrientation.length=' + keyValueOrientation.length);\\n    }\\n    if (key.length != (shotCount + movesCount))\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  '(shotCount + movesCount)=' + (shotCount + movesCount));\\n    }\\n    tracePrint ('           animated=' + animated);\\n    // set node values\\n    CameraPI.key      = key;\\n    CameraOI.key      = key;\\n    CameraPI.keyValue = keyValuePosition;\\n    CameraOI.keyValue = keyValueOrientation;\\n\\n    if (!animated) // output results\\n    {\\n        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n    }\\n    tracePrint ('checkShots() complete');\\n}\\n\\nfunction stripBrackets (fieldArray)\\n{\\n    // some browsers add brackets to array output strings, this function strips them\\n    outputString = '';\\n    for (i = 0; i < fieldArray.length; i++)\\n    {\\n       outputString += fieldArray[i].toString();\\n       if (i < fieldArray.length - 1) outputString += ' ';\\n    }\\n    return outputString;\\n}\\n\\nfunction set_fraction (eventValue, timestamp) // input event received for inputOnly field\\n{\\n   // traceEnabled = false;  // for testing purposes\\n\\n   // if Camera is being animated, immediately recompute interpolator settings\\n   if (animated) checkShots (true);\\n\\n   // trace progress on console with reduced output frequency\\n   if (frameCount == 0)\\n   {\\n      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\\n      startTime      = timestamp;\\n      priorTraceTime = timestamp;\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n      }\\n   }\\n   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\\n   {\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n      priorTraceTime = timestamp;\\n\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n      }\\n   }\\n   if (eventValue == 0)\\n   {\\n      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\\n      frameCount++;\\n   }\\n   else if (eventValue == 1)\\n   {\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n      }\\n      alwaysPrint ('Animation loop complete.');\\n      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\\n   }\\n   else\\n   {\\n      frameCount++;\\n   }\\n}\\n\\nfunction set_bind (eventValue) // input event received for inputOnly field\\n{\\n   // need to ensure CameraShot nodes are properly initialized\\n   if (initialized == false)\\n   {\\n      checkShots (true);\\n      initialized = true;\\n   }\\n   if (eventValue)\\n   {\\n       tracePrint ('Camera has been bound');\\n   }\\n   else\\n   {\\n       tracePrint ('Camera has been unbound');\\n   }\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_position (eventValue) // input event received for inputOutput field\\n{\\n    position = eventValue;\\n}\\n\\nfunction set_orientation (eventValue) // input event received for inputOutput field\\n{\\n    orientation = eventValue;\\n}\\n\\nfunction set_fieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    fieldOfView = eventValue;\\n}\\n\\nfunction set_nearClipPlane (eventValue) // input event received for inputOutput field\\n{\\n    nearClipPlane = eventValue;\\n}\\n\\nfunction set_farClipPlane (eventValue) // input event received for inputOutput field\\n{\\n    farClipPlane = eventValue;\\n}\\n\\nfunction set_shots (eventValue) // input event received for inputOutput field\\n{\\n    shots = eventValue;\\n}\\n\\nfunction set_filterColor (eventValue) // input event received for inputOutput field\\n{\\n    filterColor = eventValue;\\n}\\n\\nfunction set_filterTransparency (eventValue) // input event received for inputOutput field\\n{\\n    filterTransparency = eventValue;\\n}\\n\\nfunction set_upVector (eventValue) // input event received for inputOutput field\\n{\\n    upVector = eventValue;\\n}\\n\\nfunction set_fStop (eventValue) // input event received for inputOutput field\\n{\\n    fStop = eventValue;\\n}\\n\\nfunction set_focusDistance (eventValue) // input event received for inputOutput field\\n{\\n    focusDistance = eventValue;\\n}\\n\\nfunction set_offlineRender (eventValue) // input event received for inputOutput field\\n{\\n    offlineRender = eventValue;\\n}\\n\\nfunction set_key (eventValue) // input event received for inputOutput field\\n{\\n    key = eventValue;\\n}\\n\\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\\n{\\n    keyValuePosition = eventValue;\\n}\\n\\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\\n{\\n    keyValueOrientation = eventValue;\\n}\\n\\nfunction set_animated (eventValue) // input event received for inputOutput field\\n{\\n    animated = eventValue;\\n}\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\nfunction alwaysPrint (outputValue)\\n{\\n    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[Camera] ' + outputString + '\\n');\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype42.AddScript([Script70]);
{ Original "CameraScript.position TO CameraViewpoint.position }
{ Sample CameraScript.position TO CameraViewpoint.position}
X3DPrototype42.AddRoute(CameraScript.[object Object], Viewpoint43.set_position);
{ METHOD .AddX3DROUTE }
{ Original "CameraScript.EventOrientation TO CameraViewpoint.orientation }
{ Sample CameraScript.EventOrientation TO CameraViewpoint.orientation}
X3DPrototype42.AddRoute(Script70.EventOrientation, Viewpoint43.set_orientation);
{ METHOD .AddX3DROUTE }
{ Original "CameraScript.EventIsActive TO CameraViewpoint.EventSet_bind }
{ Sample CameraScript.EventIsActive TO CameraViewpoint.EventSet_bind}
X3DPrototype42.AddRoute(Script70.EventIsActive, Viewpoint43.set_EventSet_bind);
{ METHOD .AddX3DROUTE }
{ Original "CameraScript.EventIsActive TO CameraNavInfo.EventSet_bind }
{ Sample CameraScript.EventIsActive TO CameraNavInfo.EventSet_bind}
X3DPrototype42.AddRoute(Script70.EventIsActive, NavigationInfo52.set_EventSet_bind);
{ METHOD .AddX3DROUTE }
{ Original "CameraScript.EventIsActive TO CameraDirectionalLight.on }
{ Sample CameraScript.EventIsActive TO CameraDirectionalLight.on}
X3DPrototype42.AddRoute(Script70.EventIsActive, DirectionalLight57.set_on);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype17.AddX3DPrototype([X3DPrototype42]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype17]);
{ =============== CameraShot ============== }
X3DPrototype131 := TX3DPrototype.Create;
X3DPrototype131.Appinfo := 'CameraShot collects a specific set of CameraMovement animations that make up an individual shot.';
X3DInterfaceDeclaration132 := TX3DInterfaceDeclaration.Create(nil);
SFString133 := TSFString.CreateUndefined(X3DInterfaceDeclaration132, false, 'description');
SFString133.Appinfo := 'Text description to be displayed for this CameraShot';
{ METHOD .AddSFString }
X3DInterfaceDeclaration132.AddSFString([SFString133]);
SFBool134 := TSFBool.CreateUndefined(X3DInterfaceDeclaration132, false, 'enabled');
SFBool134.Appinfo := 'Whether this CameraShot can be activated';
SFBool134.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration132.AddSFBool([SFBool134]);
MFNode135 := TMFNode.CreateUndefined(X3DInterfaceDeclaration132, false, 'moves');
MFNode135.Appinfo := 'Set of CameraMovement nodes';
{ initializing CameraMovement nodes are inserted here by scene author using ProtoInstance }
{ METHOD .AddMFNode }
X3DInterfaceDeclaration132.AddMFNode([MFNode135]);
SFVec3f136 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration132, false, 'initialPosition');
SFVec3f136.Appinfo := 'Setup to reinitialize camera position for this shot';
SFVec3f136.Value := '0 0 10';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration132.AddSFVec3f([SFVec3f136]);
SFRotation137 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration132, false, 'initialOrientation');
SFRotation137.Appinfo := 'Setup to reinitialize camera rotation for this shot';
SFRotation137.Value := '0 0 1 0';
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration132.AddSFRotation([SFRotation137]);
SFVec3f138 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration132, false, 'initialAimPoint');
SFVec3f138.Appinfo := 'Setup to reinitialize aimpoint (relative location for camera direction) for this shot';
SFVec3f138.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration132.AddSFVec3f([SFVec3f138]);
SFFloat139 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration132, false, 'initialFieldOfView');
SFFloat139.Appinfo := 'pi/4';
SFFloat139.Value := '0.7854';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration132.AddSFFloat([SFFloat139]);
SFFloat140 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration132, false, 'initialFStop');
SFFloat140.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
SFFloat140.Value := '5.6';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration132.AddSFFloat([SFFloat140]);
SFFloat141 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration132, false, 'initialFocusDistance');
SFFloat141.Appinfo := 'Distance to focal plane of sharpest focus';
SFFloat141.Value := '10';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration132.AddSFFloat([SFFloat141]);
SFTime142 := TSFTime.CreateUndefined(X3DInterfaceDeclaration132, false, 'shotDuration');
SFTime142.Appinfo := 'Subtotal duration of contained CameraMovement move durations';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration132.AddSFTime([SFTime142]);
SFBool143 := TSFBool.CreateUndefined(X3DInterfaceDeclaration132, false, 'isActive');
SFBool143.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration132.AddSFBool([SFBool143]);
SFBool144 := TSFBool.CreateUndefined(X3DInterfaceDeclaration132, false, 'traceEnabled');
SFBool144.Appinfo := 'enable console output to trace script computations and prototype progress';
SFBool144.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration132.AddSFBool([SFBool144]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype131.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration132]);
X3DPrototype145 := TX3DPrototype.Create;
Script146 := TScriptNode.Create;
Script146.DirectOutput := True;
Script146.MustEvaluate := True;
SFString147 := TSFString.CreateUndefined(Script146, false, 'description');
SFString147.Appinfo := 'Text description to be displayed for this CameraShot';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFString147);
SFBool148 := TSFBool.CreateUndefined(Script146, false, 'enabled');
SFBool148.Appinfo := 'Whether this CameraShot can be activated';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFBool148);
MFNode149 := TMFNode.CreateUndefined(Script146, false, 'moves');
MFNode149.Appinfo := 'Set of CameraMovement nodes';
{ initialization nodes (if any) go here }
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(MFNode149);
SFVec3f150 := TSFVec3f.CreateUndefined(Script146, false, 'initialPosition');
SFVec3f150.Appinfo := 'Setup to reinitialize camera position for this shot';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFVec3f150);
SFRotation151 := TSFRotation.CreateUndefined(Script146, false, 'initialOrientation');
SFRotation151.Appinfo := 'Setup to reinitialize camera rotation for this shot';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFRotation151);
SFVec3f152 := TSFVec3f.CreateUndefined(Script146, false, 'initialAimPoint');
SFVec3f152.Appinfo := 'Setup to reinitialize aimpoint (relative location for camera direction) for this shot';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFVec3f152);
SFFloat153 := TSFFloat.CreateUndefined(Script146, false, 'initialFieldOfView');
SFFloat153.Appinfo := 'pi/4';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFFloat153);
SFFloat154 := TSFFloat.CreateUndefined(Script146, false, 'initialFStop');
SFFloat154.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFFloat154);
SFFloat155 := TSFFloat.CreateUndefined(Script146, false, 'initialFocusDistance');
SFFloat155.Appinfo := 'Distance to focal plane of sharpest focus';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFFloat155);
SFTime156 := TSFTime.CreateUndefined(Script146, false, 'shotDuration');
SFTime156.Appinfo := 'Subtotal duration of contained CameraMovement move durations';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFTime156);
SFBool157 := TSFBool.CreateUndefined(Script146, false, 'isActive');
SFBool157.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFBool157);
SFBool158 := TSFBool.CreateUndefined(Script146, false, 'traceEnabled');
SFBool158.Appinfo := 'enable console output to trace script computations and prototype progress';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFBool158);
MFFloat159 := TMFFloat.CreateUndefined(Script146, false, 'key');
MFFloat159.Appinfo := 'key array for interpolators';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(MFFloat159);
MFVec3f160 := TMFVec3f.CreateUndefined(Script146, false, 'keyValuePosition');
MFVec3f160.Appinfo := 'keyValue array for PositionInterpolator';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(MFVec3f160);
MFRotation161 := TMFRotation.CreateUndefined(Script146, false, 'keyValueOrientation');
MFRotation161.Appinfo := 'keyValue array for OrientationInterpolator';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(MFRotation161);
IS162 := TIS.Create;
connect163 := Tconnect.Create;
connect163.NodeField := 'description';
connect163.ProtoField := 'description';
{ METHOD .Connect }
IS162.Connect := connect163;
connect164 := Tconnect.Create;
connect164.NodeField := 'enabled';
connect164.ProtoField := 'enabled';
{ METHOD .Connect }
IS162.Connect := connect164;
connect165 := Tconnect.Create;
connect165.NodeField := 'moves';
connect165.ProtoField := 'moves';
{ METHOD .Connect }
IS162.Connect := connect165;
connect166 := Tconnect.Create;
connect166.NodeField := 'initialPosition';
connect166.ProtoField := 'initialPosition';
{ METHOD .Connect }
IS162.Connect := connect166;
connect167 := Tconnect.Create;
connect167.NodeField := 'initialOrientation';
connect167.ProtoField := 'initialOrientation';
{ METHOD .Connect }
IS162.Connect := connect167;
connect168 := Tconnect.Create;
connect168.NodeField := 'initialAimPoint';
connect168.ProtoField := 'initialAimPoint';
{ METHOD .Connect }
IS162.Connect := connect168;
connect169 := Tconnect.Create;
connect169.NodeField := 'initialFieldOfView';
connect169.ProtoField := 'initialFieldOfView';
{ METHOD .Connect }
IS162.Connect := connect169;
connect170 := Tconnect.Create;
connect170.NodeField := 'initialFStop';
connect170.ProtoField := 'initialFStop';
{ METHOD .Connect }
IS162.Connect := connect170;
connect171 := Tconnect.Create;
connect171.NodeField := 'initialFocusDistance';
connect171.ProtoField := 'initialFocusDistance';
{ METHOD .Connect }
IS162.Connect := connect171;
connect172 := Tconnect.Create;
connect172.NodeField := 'shotDuration';
connect172.ProtoField := 'shotDuration';
{ METHOD .Connect }
IS162.Connect := connect172;
connect173 := Tconnect.Create;
connect173.NodeField := 'isActive';
connect173.ProtoField := 'isActive';
{ METHOD .Connect }
IS162.Connect := connect173;
connect174 := Tconnect.Create;
connect174.NodeField := 'traceEnabled';
connect174.ProtoField := 'traceEnabled';
{ METHOD .Connect }
IS162.Connect := connect174;
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(IS162);

Script146.SetSourceCode('''ecmascript:\n"+
"function initialize () // CameraShotScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n\\n    // compute shotDuration by summing durations from contained CameraMovement nodes\\n    shotDuration = 0;\\n    for (i = 0; i < moves.length; i++)\\n    {\\n        shotDuration = shotDuration + moves[i].duration;\\n    }\\n    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\\n\\n//  tracePrint ('... initialize() complete');\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_moves (eventValue) // input event received for inputOutput field\\n{\\n    moves = eventValue;\\n}\\n\\nfunction set_initialPosition (eventValue) // input event received for inputOutput field\\n{\\n    initialPosition = eventValue;\\n}\\n\\nfunction set_initialOrientation (eventValue) // input event received for inputOutput field\\n{\\n    initialOrientation = eventValue;\\n}\\n\\nfunction set_initialAimPoint (eventValue) // input event received for inputOutput field\\n{\\n    initialAimPoint = eventValue;\\n}\\n\\nfunction set_initialFieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    initialFieldOfView = eventValue;\\n}\\n\\nfunction set_initialFStop (eventValue) // input event received for inputOutput field\\n{\\n    initialFStop = eventValue;\\n}\\n\\nfunction set_initialFocusDistance (eventValue) // input event received for inputOutput field\\n{\\n    initialFocusDistance = eventValue;\\n}\\n\\nfunction set_key (eventValue) // input event received for inputOutput field\\n{\\n    key = eventValue;\\n}\\n\\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\\n{\\n    keyValuePosition = eventValue;\\n}\\n\\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\\n{\\n    keyValueOrientation = eventValue;\\n}\\n\\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[CameraShot] ' + outputString + '\\n');\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype145.AddScript([Script146]);
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
{ METHOD .AddX3DPrototype }
X3DPrototype131.AddX3DPrototype([X3DPrototype145]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype131]);
{ =============== CameraMovement ============== }
X3DPrototype175 := TX3DPrototype.Create;
X3DPrototype175.Appinfo := 'CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.';
X3DInterfaceDeclaration176 := TX3DInterfaceDeclaration.Create(nil);
SFString177 := TSFString.CreateUndefined(X3DInterfaceDeclaration176, false, 'description');
SFString177.Appinfo := 'Text description to be displayed for this CameraMovement';
{ METHOD .AddSFString }
X3DInterfaceDeclaration176.AddSFString([SFString177]);
SFBool178 := TSFBool.CreateUndefined(X3DInterfaceDeclaration176, false, 'enabled');
SFBool178.Appinfo := 'Whether this CameraMovement can be activated';
SFBool178.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration176.AddSFBool([SFBool178]);
SFFloat179 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration176, false, 'duration');
SFFloat179.Appinfo := 'Duration in seconds for this move';
SFFloat179.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration176.AddSFFloat([SFFloat179]);
SFVec3f180 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration176, false, 'goalPosition');
SFVec3f180.Appinfo := 'Goal camera position for this move';
SFVec3f180.Value := '0 0 10';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration176.AddSFVec3f([SFVec3f180]);
SFRotation181 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration176, false, 'goalOrientation');
SFRotation181.Appinfo := 'Goal camera rotation for this move';
SFRotation181.Value := '0 0 1 0';
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration176.AddSFRotation([SFRotation181]);
SFBool182 := TSFBool.CreateUndefined(X3DInterfaceDeclaration176, false, 'tracking');
SFBool182.Appinfo := 'Whether or not camera direction is tracking towards the aimPoint';
SFBool182.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration176.AddSFBool([SFBool182]);
SFVec3f183 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration176, false, 'goalAimPoint');
SFVec3f183.Appinfo := 'Goal aimPoint for this move, ignored if tracking=false';
SFVec3f183.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration176.AddSFVec3f([SFVec3f183]);
SFFloat184 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration176, false, 'goalFieldOfView');
SFFloat184.Appinfo := 'Goal fieldOfView for this move';
SFFloat184.Value := '0.7854';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration176.AddSFFloat([SFFloat184]);
SFFloat185 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration176, false, 'goalFStop');
SFFloat185.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
SFFloat185.Value := '5.6';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration176.AddSFFloat([SFFloat185]);
SFFloat186 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration176, false, 'goalFocusDistance');
SFFloat186.Appinfo := 'Distance to focal plane of sharpest focus';
SFFloat186.Value := '10';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration176.AddSFFloat([SFFloat186]);
SFBool187 := TSFBool.CreateUndefined(X3DInterfaceDeclaration176, false, 'isActive');
SFBool187.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration176.AddSFBool([SFBool187]);
SFBool188 := TSFBool.CreateUndefined(X3DInterfaceDeclaration176, false, 'traceEnabled');
SFBool188.Appinfo := 'enable console output to trace script computations and prototype progress';
SFBool188.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration176.AddSFBool([SFBool188]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype175.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration176]);
X3DPrototype189 := TX3DPrototype.Create;
{ First node determines node type of this prototype }
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
{ Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events }
Script190 := TScriptNode.Create;
Script190.DirectOutput := True;
Script190.MustEvaluate := True;
SFString191 := TSFString.CreateUndefined(Script190, false, 'description');
SFString191.Appinfo := 'Text description to be displayed for this CameraMovement';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFString191);
SFBool192 := TSFBool.CreateUndefined(Script190, false, 'enabled');
SFBool192.Appinfo := 'Whether this CameraMovement can be activated';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFBool192);
SFFloat193 := TSFFloat.CreateUndefined(Script190, false, 'duration');
SFFloat193.Appinfo := 'Duration in seconds for this move';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFFloat193);
SFVec3f194 := TSFVec3f.CreateUndefined(Script190, false, 'goalPosition');
SFVec3f194.Appinfo := 'Goal camera position for this move';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFVec3f194);
SFRotation195 := TSFRotation.CreateUndefined(Script190, false, 'goalOrientation');
SFRotation195.Appinfo := 'Goal camera rotation for this move';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFRotation195);
SFBool196 := TSFBool.CreateUndefined(Script190, false, 'tracking');
SFBool196.Appinfo := 'Whether or not camera direction is tracking towards the aimPoint';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFBool196);
SFVec3f197 := TSFVec3f.CreateUndefined(Script190, false, 'goalAimPoint');
SFVec3f197.Appinfo := 'Goal aimPoint for this move, ignored if tracking=false';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFVec3f197);
SFFloat198 := TSFFloat.CreateUndefined(Script190, false, 'goalFieldOfView');
SFFloat198.Appinfo := 'Goal fieldOfView for this move';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFFloat198);
SFFloat199 := TSFFloat.CreateUndefined(Script190, false, 'goalFStop');
SFFloat199.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFFloat199);
SFFloat200 := TSFFloat.CreateUndefined(Script190, false, 'goalFocusDistance');
SFFloat200.Appinfo := 'Distance to focal plane of sharpest focus';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFFloat200);
SFBool201 := TSFBool.CreateUndefined(Script190, false, 'isActive');
SFBool201.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFBool201);
SFBool202 := TSFBool.CreateUndefined(Script190, false, 'traceEnabled');
SFBool202.Appinfo := 'enable console output to trace script computations and prototype progress';
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(SFBool202);
IS203 := TIS.Create;
connect204 := Tconnect.Create;
connect204.NodeField := 'description';
connect204.ProtoField := 'description';
{ METHOD .Connect }
IS203.Connect := connect204;
connect205 := Tconnect.Create;
connect205.NodeField := 'enabled';
connect205.ProtoField := 'enabled';
{ METHOD .Connect }
IS203.Connect := connect205;
connect206 := Tconnect.Create;
connect206.NodeField := 'duration';
connect206.ProtoField := 'duration';
{ METHOD .Connect }
IS203.Connect := connect206;
connect207 := Tconnect.Create;
connect207.NodeField := 'goalPosition';
connect207.ProtoField := 'goalPosition';
{ METHOD .Connect }
IS203.Connect := connect207;
connect208 := Tconnect.Create;
connect208.NodeField := 'goalOrientation';
connect208.ProtoField := 'goalOrientation';
{ METHOD .Connect }
IS203.Connect := connect208;
connect209 := Tconnect.Create;
connect209.NodeField := 'tracking';
connect209.ProtoField := 'tracking';
{ METHOD .Connect }
IS203.Connect := connect209;
connect210 := Tconnect.Create;
connect210.NodeField := 'goalAimPoint';
connect210.ProtoField := 'goalAimPoint';
{ METHOD .Connect }
IS203.Connect := connect210;
connect211 := Tconnect.Create;
connect211.NodeField := 'goalFieldOfView';
connect211.ProtoField := 'goalFieldOfView';
{ METHOD .Connect }
IS203.Connect := connect211;
connect212 := Tconnect.Create;
connect212.NodeField := 'goalFStop';
connect212.ProtoField := 'goalFStop';
{ METHOD .Connect }
IS203.Connect := connect212;
connect213 := Tconnect.Create;
connect213.NodeField := 'goalFocusDistance';
connect213.ProtoField := 'goalFocusDistance';
{ METHOD .Connect }
IS203.Connect := connect213;
connect214 := Tconnect.Create;
connect214.NodeField := 'isActive';
connect214.ProtoField := 'isActive';
{ METHOD .Connect }
IS203.Connect := connect214;
connect215 := Tconnect.Create;
connect215.NodeField := 'traceEnabled';
connect215.ProtoField := 'traceEnabled';
{ METHOD .Connect }
IS203.Connect := connect215;
{ METHOD .Fd.AddCustomField }
Script190.AddCustomField(IS203);

Script190.SetSourceCode('''ecmascript:\n"+
"function initialize () // CameraMovementScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\\n                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\\n                           );\\n    if (duration < 0)\\n    {\\n       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\\n       duration = 0;\\n    }\\n    else if (duration == 0)\\n    {\\n       alwaysPrint ('warning: duration=0, nothing to do!');\\n    }\\n    tracePrint ('... initialize complete');\\n}\\n\\nfunction set_goalAimPoint (eventValue) // input event received for inputOutput field\\n{\\n    goalAimPoint_changed = eventValue;\\n    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\\n\\n    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_duration (eventValue) // input event received for inputOutput field\\n{\\n    duration = eventValue;\\n}\\n\\nfunction set_goalPosition (eventValue) // input event received for inputOutput field\\n{\\n    goalPosition = eventValue;\\n}\\n\\nfunction set_goalOrientation (eventValue) // input event received for inputOutput field\\n{\\n    goalOrientation = eventValue;\\n}\\n\\nfunction set_tracking (eventValue) // input event received for inputOutput field\\n{\\n    tracking = eventValue;\\n}\\n\\nfunction set_goalFieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    goalFieldOfView = eventValue;\\n}\\n\\nfunction set_goalFStop (eventValue) // input event received for inputOutput field\\n{\\n    goalFStop = eventValue;\\n}\\n\\nfunction set_goalFocusDistance (eventValue) // input event received for inputOutput field\\n{\\n    goalFocusDistance = eventValue;\\n}\\n\\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\n\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[CameraMovement] ' + outputString + '\\n');\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype189.AddScript([Script190]);
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
{ METHOD .AddX3DPrototype }
X3DPrototype175.AddX3DPrototype([X3DPrototype189]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype175]);
{ =============== OfflineRender ============== }
X3DPrototype216 := TX3DPrototype.Create;
X3DPrototype216.Appinfo := 'OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).';
X3DInterfaceDeclaration217 := TX3DInterfaceDeclaration.Create(nil);
{ TODO non-photorealistic rendering (NPR) parameters }
SFString218 := TSFString.CreateUndefined(X3DInterfaceDeclaration217, false, 'description');
SFString218.Appinfo := 'Text description to be displayed for this OfflineRender';
{ METHOD .AddSFString }
X3DInterfaceDeclaration217.AddSFString([SFString218]);
SFBool219 := TSFBool.CreateUndefined(X3DInterfaceDeclaration217, false, 'enabled');
SFBool219.Appinfo := 'Whether this OfflineRender can be activated';
SFBool219.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration217.AddSFBool([SFBool219]);
SFFloat220 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration217, false, 'frameRate');
SFFloat220.Appinfo := 'Frames per second recorded for this rendering';
SFFloat220.Value := '30';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration217.AddSFFloat([SFFloat220]);
SFVec2f221 := TSFVec2f.CreateUndefined(X3DInterfaceDeclaration217, false, 'frameSize');
SFVec2f221.Appinfo := 'Size of frame in number of pixels width and height';
SFVec2f221.Value := '640 480';
{ METHOD .AddSFVec2f }
X3DInterfaceDeclaration217.AddSFVec2f([SFVec2f221]);
SFFloat222 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration217, false, 'pixelAspectRatio');
SFFloat222.Appinfo := 'Relative dimensions of pixel height/width typically 1.33 or 1';
SFFloat222.Value := '1.33';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration217.AddSFFloat([SFFloat222]);
SFTime223 := TSFTime.CreateUndefined(X3DInterfaceDeclaration217, false, 'set_startTime');
SFTime223.Appinfo := 'Begin render operation';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration217.AddSFTime([SFTime223]);
SFFloat224 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration217, false, 'progress');
SFFloat224.Appinfo := 'Progress performing render operation (0..1)';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration217.AddSFFloat([SFFloat224]);
SFTime225 := TSFTime.CreateUndefined(X3DInterfaceDeclaration217, false, 'renderCompleteTime');
SFTime225.Appinfo := 'Render operation complete';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration217.AddSFTime([SFTime225]);
MFString226 := TMFString.CreateUndefined(X3DInterfaceDeclaration217, false, 'movieFormat');
MFString226.Appinfo := 'Format of rendered output movie (mpeg mp4 etc.), use first supported format';
MFString226.Value := '\"mpeg\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration217.AddMFString([MFString226]);
MFString227 := TMFString.CreateUndefined(X3DInterfaceDeclaration217, false, 'imageFormat');
MFString227.Appinfo := 'Format of rendered output images (png jpeg gif tiff etc.) use first supported format';
MFString227.Value := '\"png\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration217.AddMFString([MFString227]);
SFBool228 := TSFBool.CreateUndefined(X3DInterfaceDeclaration217, false, 'traceEnabled');
SFBool228.Appinfo := 'enable console output to trace script computations and prototype progress';
SFBool228.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration217.AddSFBool([SFBool228]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype216.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration217]);
X3DPrototype229 := TX3DPrototype.Create;
{ First node determines node type of this prototype }
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
Script230 := TScriptNode.Create;
Script230.MustEvaluate := True;
SFString231 := TSFString.CreateUndefined(Script230, false, 'description');
SFString231.Appinfo := 'Text description to be displayed for this OfflineRender';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(SFString231);
SFBool232 := TSFBool.CreateUndefined(Script230, false, 'enabled');
SFBool232.Appinfo := 'Whether this OfflineRender can be activated';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(SFBool232);
SFFloat233 := TSFFloat.CreateUndefined(Script230, false, 'frameRate');
SFFloat233.Appinfo := 'Frames per second recorded for this rendering';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(SFFloat233);
SFVec2f234 := TSFVec2f.CreateUndefined(Script230, false, 'frameSize');
SFVec2f234.Appinfo := 'Size of frame in number of pixels width and height';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(SFVec2f234);
SFFloat235 := TSFFloat.CreateUndefined(Script230, false, 'pixelAspectRatio');
SFFloat235.Appinfo := 'Relative dimensions of pixel height/width typically 1.33 or 1';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(SFFloat235);
SFTime236 := TSFTime.CreateUndefined(Script230, false, 'set_startTime');
SFTime236.Appinfo := 'Begin render operation';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(SFTime236);
SFFloat237 := TSFFloat.CreateUndefined(Script230, false, 'progress');
SFFloat237.Appinfo := 'Progress performing render operation (0..1)';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(SFFloat237);
SFTime238 := TSFTime.CreateUndefined(Script230, false, 'renderCompleteTime');
SFTime238.Appinfo := 'Render operation complete';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(SFTime238);
MFString239 := TMFString.CreateUndefined(Script230, false, 'movieFormat');
MFString239.Appinfo := 'Format of rendered output movie (mpeg mp4 etc.)';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(MFString239);
MFString240 := TMFString.CreateUndefined(Script230, false, 'imageFormat');
MFString240.Appinfo := 'Format of rendered output images (png jpeg gif tiff etc.)';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(MFString240);
SFBool241 := TSFBool.CreateUndefined(Script230, false, 'traceEnabled');
SFBool241.Appinfo := 'enable console output to trace script computations and prototype progress';
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(SFBool241);
IS242 := TIS.Create;
connect243 := Tconnect.Create;
connect243.NodeField := 'description';
connect243.ProtoField := 'description';
{ METHOD .Connect }
IS242.Connect := connect243;
connect244 := Tconnect.Create;
connect244.NodeField := 'enabled';
connect244.ProtoField := 'enabled';
{ METHOD .Connect }
IS242.Connect := connect244;
connect245 := Tconnect.Create;
connect245.NodeField := 'frameRate';
connect245.ProtoField := 'frameRate';
{ METHOD .Connect }
IS242.Connect := connect245;
connect246 := Tconnect.Create;
connect246.NodeField := 'frameSize';
connect246.ProtoField := 'frameSize';
{ METHOD .Connect }
IS242.Connect := connect246;
connect247 := Tconnect.Create;
connect247.NodeField := 'pixelAspectRatio';
connect247.ProtoField := 'pixelAspectRatio';
{ METHOD .Connect }
IS242.Connect := connect247;
connect248 := Tconnect.Create;
connect248.NodeField := 'set_startTime';
connect248.ProtoField := 'set_startTime';
{ METHOD .Connect }
IS242.Connect := connect248;
connect249 := Tconnect.Create;
connect249.NodeField := 'progress';
connect249.ProtoField := 'progress';
{ METHOD .Connect }
IS242.Connect := connect249;
connect250 := Tconnect.Create;
connect250.NodeField := 'renderCompleteTime';
connect250.ProtoField := 'renderCompleteTime';
{ METHOD .Connect }
IS242.Connect := connect250;
connect251 := Tconnect.Create;
connect251.NodeField := 'movieFormat';
connect251.ProtoField := 'movieFormat';
{ METHOD .Connect }
IS242.Connect := connect251;
connect252 := Tconnect.Create;
connect252.NodeField := 'imageFormat';
connect252.ProtoField := 'imageFormat';
{ METHOD .Connect }
IS242.Connect := connect252;
connect253 := Tconnect.Create;
connect253.NodeField := 'traceEnabled';
connect253.ProtoField := 'traceEnabled';
{ METHOD .Connect }
IS242.Connect := connect253;
{ METHOD .Fd.AddCustomField }
Script230.AddCustomField(IS242);

Script230.SetSourceCode('''ecmascript:\n"+
"function initialize () // OfflineRenderScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n\\n    tracePrint ('... initialize complete');\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_frameRate (eventValue) // input event received for inputOutput field\\n{\\n    frameRate = eventValue;\\n}\\n\\nfunction set_frameSize (eventValue) // input event received for inputOutput field\\n{\\n    frameSize = eventValue;\\n}\\n\\nfunction set_pixelAspectRatio (eventValue) // input event received for inputOutput field\\n{\\n    pixelAspectRatio = eventValue;\\n}\\n\\nfunction set_startTime (eventValue) // input event received for inputOnly field\\n{\\n   // do something with input eventValue;\\n}\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\n\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[OfflineRender] ' + outputString + '\\n');\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype229.AddScript([Script230]);
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
{ METHOD .AddX3DPrototype }
X3DPrototype216.AddX3DPrototype([X3DPrototype229]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype216]);
{ =============== Launch Prototype Example ============== }
Background254 := TBackgroundNode.Create;
Background254.SetSkyColor([Vector3(0.282353,0.380392,0.470588)]);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Background254);
Anchor255 := TAnchorNode.Create;
Anchor255.Description := 'launch CameraExample scene';
Anchor255.SetUrl(['CameraExamples.x3d','https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d','CameraExamples.wrl','https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl']);
Transform256 := TTransformNode.Create;
Shape257 := TShapeNode.Create;
Text258 := TTextNode.Create;
Text258.SetText(['CameraPrototypes.x3d','defines multiple prototype nodes','Click on this text to see','CameraExamples.x3d scene']);
FontStyle259 := TFontStyleNode.Create;
FontStyle259.Justify := fjMIDDLE;
FontStyle259.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
Text258.FontStyle := FontStyle259;
{ METHOD .Geometry }
Shape257.Geometry := Text258;
Appearance260 := TAppearanceNode.Create;
Material261 := TMaterialNode.Create;
Material261.DiffuseColor := Vector3(1,1,0.2);
{ METHOD .SetMaterial }
Appearance260.Material := Material261;
{ METHOD .Appearance }
Shape257.Appearance := Appearance260;
{ METHOD .FdChildren.Add }
Transform256.FdChildren.Add(Shape257);
{ METHOD .FdChildren.Add }
Anchor255.FdChildren.Add(Transform256);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Anchor255);
{ METHOD .AddGroup }
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
Result := X3D0;
end;

begin
end.
