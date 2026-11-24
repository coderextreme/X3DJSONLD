unit CameraPrototypes;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
NavigationInfo45: TNavigationInfoNode;
DirectionalLight47: TDirectionalLightNode;
PositionInterpolator49: TPositionInterpolatorNode;
OrientationInterpolator51: TOrientationInterpolatorNode;
Script55: TScriptNode;
SFString56: TSFString;
SFVec3f57: TSFVec3f;
SFRotation58: TSFRotation;
SFFloat59: TSFFloat;
SFBool60: TSFBool;
SFFloat61: TSFFloat;
SFFloat62: TSFFloat;
SFFloat63: TSFFloat;
MFNode64: TMFNode;
SFColor65: TSFColor;
SFFloat66: TSFFloat;
SFVec3f67: TSFVec3f;
SFFloat68: TSFFloat;
SFFloat69: TSFFloat;
SFBool70: TSFBool;
SFTime71: TSFTime;
SFNode72: TSFNode;
SFNode73: TSFNode;
Viewpoint74: TViewpointNode;
SFNode75: TSFNode;
NavigationInfo76: TNavigationInfoNode;
SFNode77: TSFNode;
PositionInterpolator78: TPositionInterpolatorNode;
SFNode79: TSFNode;
OrientationInterpolator80: TOrientationInterpolatorNode;
MFFloat81: TMFFloat;
MFVec3f82: TMFVec3f;
MFRotation83: TMFRotation;
SFBool84: TSFBool;
SFBool85: TSFBool;
SFInt3286: TSFInt32;
SFInt3287: TSFInt32;
SFFloat88: TSFFloat;
SFTime89: TSFTime;
SFTime90: TSFTime;
SFBool91: TSFBool;
X3DPrototype98: TX3DPrototype;
X3DInterfaceDeclaration99: TX3DInterfaceDeclaration;
SFString100: TSFString;
SFBool101: TSFBool;
MFNode102: TMFNode;
SFVec3f103: TSFVec3f;
SFRotation104: TSFRotation;
SFVec3f105: TSFVec3f;
SFFloat106: TSFFloat;
SFFloat107: TSFFloat;
SFFloat108: TSFFloat;
SFTime109: TSFTime;
SFBool110: TSFBool;
SFBool111: TSFBool;
X3DPrototype112: TX3DPrototype;
Script113: TScriptNode;
SFString114: TSFString;
SFBool115: TSFBool;
MFNode116: TMFNode;
SFVec3f117: TSFVec3f;
SFRotation118: TSFRotation;
SFVec3f119: TSFVec3f;
SFFloat120: TSFFloat;
SFFloat121: TSFFloat;
SFFloat122: TSFFloat;
SFTime123: TSFTime;
SFBool124: TSFBool;
SFBool125: TSFBool;
MFFloat126: TMFFloat;
MFVec3f127: TMFVec3f;
MFRotation128: TMFRotation;
X3DPrototype130: TX3DPrototype;
X3DInterfaceDeclaration131: TX3DInterfaceDeclaration;
SFString132: TSFString;
SFBool133: TSFBool;
SFFloat134: TSFFloat;
SFVec3f135: TSFVec3f;
SFRotation136: TSFRotation;
SFBool137: TSFBool;
SFVec3f138: TSFVec3f;
SFFloat139: TSFFloat;
SFFloat140: TSFFloat;
SFFloat141: TSFFloat;
SFBool142: TSFBool;
SFBool143: TSFBool;
X3DPrototype144: TX3DPrototype;
Script145: TScriptNode;
SFString146: TSFString;
SFBool147: TSFBool;
SFFloat148: TSFFloat;
SFVec3f149: TSFVec3f;
SFRotation150: TSFRotation;
SFBool151: TSFBool;
SFVec3f152: TSFVec3f;
SFFloat153: TSFFloat;
SFFloat154: TSFFloat;
SFFloat155: TSFFloat;
SFBool156: TSFBool;
SFBool157: TSFBool;
X3DPrototype159: TX3DPrototype;
X3DInterfaceDeclaration160: TX3DInterfaceDeclaration;
SFString161: TSFString;
SFBool162: TSFBool;
SFFloat163: TSFFloat;
SFVec2f164: TSFVec2f;
SFFloat165: TSFFloat;
SFTime166: TSFTime;
SFFloat167: TSFFloat;
SFTime168: TSFTime;
MFString169: TMFString;
MFString170: TMFString;
SFBool171: TSFBool;
X3DPrototype172: TX3DPrototype;
Script173: TScriptNode;
SFString174: TSFString;
SFBool175: TSFBool;
SFFloat176: TSFFloat;
SFVec2f177: TSFVec2f;
SFFloat178: TSFFloat;
SFTime179: TSFTime;
SFFloat180: TSFFloat;
SFTime181: TSFTime;
MFString182: TMFString;
MFString183: TMFString;
SFBool184: TSFBool;
Background186: TBackgroundNode;
Anchor187: TAnchorNode;
Transform188: TTransformNode;
Shape189: TShapeNode;
Text190: TTextNode;
FontStyle191: TFontStyleNode;
Appearance192: TAppearanceNode;
Material193: TMaterialNode;

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
Group16 := TGroupNode.Create;;
{ =============== Camera ============== }
X3DPrototype17 := TX3DPrototype.Create;;
X3DPrototype17.Appinfo := 'Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.';
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);;
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
end;

procedure InitCameraPrototypesPart1;
begin

SFFloat23 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration18, false, 'set_fraction');
SFFloat23.Appinfo := 'input fraction drives interpolators';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat23]);
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
end;

procedure InitCameraPrototypesPart2;
begin

SFFloat34.Appinfo := 'Camera filter transparency that modifies virtual lens capture';
SFFloat34.Value := '1';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration18.AddSFFloat([SFFloat34]);
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
X3DPrototype42 := TX3DPrototype.Create;;
Viewpoint43 := TViewpointNode.Create;;
{ METHOD .AddViewpoint }
X3DPrototype42.AddViewpoint([Viewpoint43]);
{ NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation }
NavigationInfo45 := TNavigationInfoNode.Create;;
NavigationInfo45.SetType(['EXAMINE','FLY','ANY']);
{ METHOD .AddNavigationInfo }
X3DPrototype42.AddNavigationInfo([NavigationInfo45]);
{ this DirectionalLight replaces NavigationInfo headlight in order to add color capability }
DirectionalLight47 := TDirectionalLightNode.Create;;
end;

procedure InitCameraPrototypesPart3;
begin

DirectionalLight47.Global := True;
{ TODO confirm other default field values match NavigationInfo spec }
{ METHOD .AddDirectionalLight }
X3DPrototype42.AddDirectionalLight([DirectionalLight47]);
PositionInterpolator49 := TPositionInterpolatorNode.Create;;
PositionInterpolator49.SetKey([0,1]);
PositionInterpolator49.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0)]);
{ METHOD .AddPositionInterpolator }
X3DPrototype42.AddPositionInterpolator([PositionInterpolator49]);
OrientationInterpolator51 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator51.SetKey([0,1]);
OrientationInterpolator51.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
{ METHOD .AddOrientationInterpolator }
X3DPrototype42.AddOrientationInterpolator([OrientationInterpolator51]);
{ Original "CameraPositionInterpolator.EventValue_changed TO CameraViewpoint.position }
{ Sample CameraPositionInterpolator.EventValue_changed TO CameraViewpoint.position}
X3DPrototype42.AddRoute(PositionInterpolator49.EventValue_changed, Viewpoint43.position);
{ METHOD .AddX3DROUTE }
{ Original "CameraOrientationInterpolator.EventValue_changed TO CameraViewpoint.orientation }
{ Sample CameraOrientationInterpolator.EventValue_changed TO CameraViewpoint.orientation}
X3DPrototype42.AddRoute(OrientationInterpolator51.EventValue_changed, Viewpoint43.orientation);
{ METHOD .AddX3DROUTE }
Script55 := TScriptNode.Create;;
Script55.DirectOutput := True;
Script55.MustEvaluate := True;
{ binding is controlled externally, all camera operations proceed the same regardless of whether bound or not }
SFString56 := TSFString.CreateUndefined(Script55, false, 'description');
SFString56.Appinfo := 'Text description to be displayed for this Camera';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFString56);
SFVec3f57 := TSFVec3f.CreateUndefined(Script55, false, 'position');
SFVec3f57.Appinfo := 'Camera position in local transformation frame';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFVec3f57);
SFRotation58 := TSFRotation.CreateUndefined(Script55, false, 'orientation');
SFRotation58.Appinfo := 'Camera rotation in local transformation frame';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFRotation58);
SFFloat59 := TSFFloat.CreateUndefined(Script55, false, 'set_fraction');
SFFloat59.Appinfo := 'input fraction drives interpolators';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFFloat59);
SFBool60 := TSFBool.CreateUndefined(Script55, false, 'set_bind');
SFBool60.Appinfo := 'input event binds or unbinds this Camera';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFBool60);
SFFloat61 := TSFFloat.CreateUndefined(Script55, false, 'fieldOfView');
SFFloat61.Appinfo := 'pi/4';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFFloat61);
SFFloat62 := TSFFloat.CreateUndefined(Script55, false, 'nearClipPlane');
SFFloat62.Appinfo := 'Vector distance to near clipping plane';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFFloat62);
SFFloat63 := TSFFloat.CreateUndefined(Script55, false, 'farClipPlane');
end;

procedure InitCameraPrototypesPart4;
begin

SFFloat63.Appinfo := 'Vector distance to far clipping plane';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFFloat63);
MFNode64 := TMFNode.CreateUndefined(Script55, false, 'shots');
MFNode64.Appinfo := 'Array of CameraShot nodes which in turn contain CameraMovement nodes';
{ initialization nodes (if any) go here }
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(MFNode64);
SFColor65 := TSFColor.CreateUndefined(Script55, false, 'filterColor');
SFColor65.Appinfo := 'Camera filter color that modifies virtual lens capture';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFColor65);
SFFloat66 := TSFFloat.CreateUndefined(Script55, false, 'filterTransparency');
SFFloat66.Appinfo := 'Camera filter transparency that modifies virtual lens capture';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFFloat66);
SFVec3f67 := TSFVec3f.CreateUndefined(Script55, false, 'upVector');
SFVec3f67.Appinfo := 'upVector changes modify camera orientation (and possibly vice versa)';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFVec3f67);
SFFloat68 := TSFFloat.CreateUndefined(Script55, false, 'fStop');
SFFloat68.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFFloat68);
SFFloat69 := TSFFloat.CreateUndefined(Script55, false, 'focusDistance');
SFFloat69.Appinfo := 'Distance to focal plane of sharpest focus';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFFloat69);
SFBool70 := TSFBool.CreateUndefined(Script55, false, 'isActive');
SFBool70.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFBool70);
SFTime71 := TSFTime.CreateUndefined(Script55, false, 'totalDuration');
SFTime71.Appinfo := 'Total duration of contained enabled CameraShot (and thus CameraMovement) move durations';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFTime71);
SFNode72 := TSFNode.CreateUndefined(Script55, false, 'offlineRender');
SFNode72.Appinfo := 'OfflineRender node';
{ initialization node (if any) goes here }
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFNode72);
SFNode73 := TSFNode.CreateUndefined(Script55, false, 'ViewpointNode');
SFNode73.Appinfo := 'node reference to permit getting setting fields from within Script';
{ METHOD .AddViewpoint }
SFNode73.AddViewpoint([Viewpoint43]);
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFNode73);
SFNode75 := TSFNode.CreateUndefined(Script55, false, 'NavInfoNode');
SFNode75.Appinfo := 'node reference to permit getting setting fields from within Script';
{ METHOD .AddNavigationInfo }
SFNode75.AddNavigationInfo([NavigationInfo45]);
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFNode75);
SFNode77 := TSFNode.CreateUndefined(Script55, false, 'CameraPI');
SFNode77.Appinfo := 'node reference to permit getting setting fields from within Script';
{ METHOD .AddPositionInterpolator }
SFNode77.AddPositionInterpolator([PositionInterpolator49]);
end;

procedure InitCameraPrototypesPart5;
begin

{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFNode77);
SFNode79 := TSFNode.CreateUndefined(Script55, false, 'CameraOI');
SFNode79.Appinfo := 'node reference to permit getting setting fields from within Script';
{ METHOD .AddOrientationInterpolator }
SFNode79.AddOrientationInterpolator([OrientationInterpolator51]);
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFNode79);
MFFloat81 := TMFFloat.CreateUndefined(Script55, false, 'key');
MFFloat81.Appinfo := 'key array for interpolators';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(MFFloat81);
MFVec3f82 := TMFVec3f.CreateUndefined(Script55, false, 'keyValuePosition');
MFVec3f82.Appinfo := 'keyValue array for PositionInterpolator';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(MFVec3f82);
MFRotation83 := TMFRotation.CreateUndefined(Script55, false, 'keyValueOrientation');
MFRotation83.Appinfo := 'keyValue array for OrientationInterpolator';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(MFRotation83);
SFBool84 := TSFBool.CreateUndefined(Script55, false, 'animated');
SFBool84.Appinfo := 'whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events';
SFBool84.Value := 'false';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFBool84);
SFBool85 := TSFBool.CreateUndefined(Script55, false, 'initialized');
SFBool85.Appinfo := 'perform checkShots() function once immediately after initialization';
SFBool85.Value := 'false';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFBool85);
SFInt3286 := TSFInt32.CreateUndefined(Script55, false, 'shotCount');
SFInt3286.Appinfo := 'how many CameraShot nodes are contained in shots array';
SFInt3286.Value := '0';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFInt3286);
SFInt3287 := TSFInt32.CreateUndefined(Script55, false, 'movesCount');
SFInt3287.Appinfo := 'how many CameraMove nodes are contained in moves array';
SFInt3287.Value := '0';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFInt3287);
SFFloat88 := TSFFloat.CreateUndefined(Script55, false, 'frameCount');
SFFloat88.Appinfo := 'how many frames were created in current loop';
SFFloat88.Value := '0';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFFloat88);
SFTime89 := TSFTime.CreateUndefined(Script55, false, 'startTime');
SFTime89.Appinfo := 'holding variable';
SFTime89.Value := '0';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFTime89);
SFTime90 := TSFTime.CreateUndefined(Script55, false, 'priorTraceTime');
SFTime90.Appinfo := 'holding variable';
end;

procedure InitCameraPrototypesPart6;
begin

SFTime90.Value := '0';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFTime90);
SFBool91 := TSFBool.CreateUndefined(Script55, false, 'traceEnabled');
SFBool91.Appinfo := 'enable console output to trace script computations and prototype progress';
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFBool91);

Script55.SetSourceCode('''ecmascript:\n"+
"function initialize () // CameraScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n\\n    NavInfoNode.avatarSize[0]   = nearClipPlane;\\n\\n    // remaining setups deferred to invocation of checkShots() method\\n    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\\n    alwaysPrint ('initialize complete');\\n}\\n\\nfunction checkShots (eventValue)\\n{\\n    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\\n\\n    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\\n    totalDuration= 0;\\n    shotCount  = shots.length;\\n    movesCount = 0;\\n    for (i = 0; i < shotCount; i++) // shots index\\n    {\\n       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\\n       movesCount   += shots[i].moves.length;\\n       totalDuration = totalDuration + shots[i].shotDuration;\\n       if (shots[i].moves.length == 0)\\n       {\\n          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\\n       }\\n    }\\n    // size checks before proceeding\\n    if (shotCount == 0)\\n    {\\n       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\\n       return;\\n    }\\n    else if (movesCount == 0)\\n    {\\n       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\\n       return;\\n    }\\n    else if (totalDuration == 0)\\n    {\\n       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\\n       return;\\n    }\\n    tracePrint ('number of contained CameraShot nodes=' + shotCount);\\n    tracePrint ('number of contained CameraMove nodes=' + movesCount);\\n    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\\n\\n    // compute interpolators\\n    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\\n    for (i = 0; i < shotCount; i++) // shots index\\n    {\\n        if (i==0) // initial entries\\n        {\\n           key[0]                   = 0.0; // no previous move\\n           keyValuePosition[0]      = shots[i].initialPosition;\\n           keyValueOrientation[0]   = shots[i].initialOrientation;\\n        }\\n        else     // new shot repositions, reorients camera as clean break from preceding shot/move\\n        {\\n           key[k+1]                 = key[k]; // start from end from previous move\\n           keyValuePosition[k+1]    = shots[i].initialPosition;\\n           keyValueOrientation[k+1] = shots[i].initialOrientation;\\n           k++;\\n        }\\n        tracePrint (shots[i].description);\\n        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\\n\\n        for (j = 0; j < shots[i].moves.length; j++) // moves index\\n        {\\n            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\\n            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\\n            //  tracePrint ('durationFloat=' + durationFloat);\\n            key[k+1]               = key[k] + (durationFloat / totalDuration);\\n            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\\n            if (!animated)\\n            {\\n                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\\n            }\\n            else\\n            {\\n                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\\n                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\\n\\n                // test if difference vector is zero, if so maintain previous rotation\\n                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\\n                if (shotVector.length() >= 0)\\n                {\\n                    // default view direction is along -Z axis\\n                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\\n                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\\n                }\\n                else // note (k > 0)\\n                {\\n                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\\n                }\\n\\n                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\\n                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\\n                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\\n                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\\n                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\\n                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\\n            }\\n            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\\n\\n            // check animated parameter:  set true if any of moves are tracking moves\\n            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\\n         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\\n\\n            // intermediate trace\\n            tracePrint ('                key=' + key);\\n            tracePrint ('   keyValuePosition=' + keyValuePosition);\\n            tracePrint ('keyValueOrientation=' + keyValueOrientation);\\n            tracePrint ('- ' + shots[i].moves[j].description);\\n        }\\n    }\\n    tracePrint ('                key=' + key);\\n    tracePrint ('   keyValuePosition=' + keyValuePosition);\\n    tracePrint ('keyValueOrientation=' + keyValueOrientation);\\n    if (key.length != keyValuePosition.length)\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  'keyValuePosition.length=' + keyValuePosition.length);\\n    }\\n    if (key.length != keyValueOrientation.length)\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  'keyValueOrientation.length=' + keyValueOrientation.length);\\n    }\\n    if (key.length != (shotCount + movesCount))\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  '(shotCount + movesCount)=' + (shotCount + movesCount));\\n    }\\n    tracePrint ('           animated=' + animated);\\n    // set node values\\n    CameraPI.key      = key;\\n    CameraOI.key      = key;\\n    CameraPI.keyValue = keyValuePosition;\\n    CameraOI.keyValue = keyValueOrientation;\\n\\n    if (!animated) // output results\\n    {\\n        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n    }\\n    tracePrint ('checkShots() complete');\\n}\\n\\nfunction stripBrackets (fieldArray)\\n{\\n    // some browsers add brackets to array output strings, this function strips them\\n    outputString = '';\\n    for (i = 0; i < fieldArray.length; i++)\\n    {\\n       outputString += fieldArray[i].toString();\\n       if (i < fieldArray.length - 1) outputString += ' ';\\n    }\\n    return outputString;\\n}\\n\\nfunction set_fraction (eventValue, timestamp) // input event received for inputOnly field\\n{\\n   // traceEnabled = false;  // for testing purposes\\n\\n   // if Camera is being animated, immediately recompute interpolator settings\\n   if (animated) checkShots (true);\\n\\n   // trace progress on console with reduced output frequency\\n   if (frameCount == 0)\\n   {\\n      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\\n      startTime      = timestamp;\\n      priorTraceTime = timestamp;\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n      }\\n   }\\n   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\\n   {\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n      priorTraceTime = timestamp;\\n\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n      }\\n   }\\n   if (eventValue == 0)\\n   {\\n      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\\n      frameCount++;\\n   }\\n   else if (eventValue == 1)\\n   {\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n      }\\n      alwaysPrint ('Animation loop complete.');\\n      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\\n   }\\n   else\\n   {\\n      frameCount++;\\n   }\\n}\\n\\nfunction set_bind (eventValue) // input event received for inputOnly field\\n{\\n   // need to ensure CameraShot nodes are properly initialized\\n   if (initialized == false)\\n   {\\n      checkShots (true);\\n      initialized = true;\\n   }\\n   if (eventValue)\\n   {\\n       tracePrint ('Camera has been bound');\\n   }\\n   else\\n   {\\n       tracePrint ('Camera has been unbound');\\n   }\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_position (eventValue) // input event received for inputOutput field\\n{\\n    position = eventValue;\\n}\\n\\nfunction set_orientation (eventValue) // input event received for inputOutput field\\n{\\n    orientation = eventValue;\\n}\\n\\nfunction set_fieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    fieldOfView = eventValue;\\n}\\n\\nfunction set_nearClipPlane (eventValue) // input event received for inputOutput field\\n{\\n    nearClipPlane = eventValue;\\n}\\n\\nfunction set_farClipPlane (eventValue) // input event received for inputOutput field\\n{\\n    farClipPlane = eventValue;\\n}\\n\\nfunction set_shots (eventValue) // input event received for inputOutput field\\n{\\n    shots = eventValue;\\n}\\n\\nfunction set_filterColor (eventValue) // input event received for inputOutput field\\n{\\n    filterColor = eventValue;\\n}\\n\\nfunction set_filterTransparency (eventValue) // input event received for inputOutput field\\n{\\n    filterTransparency = eventValue;\\n}\\n\\nfunction set_upVector (eventValue) // input event received for inputOutput field\\n{\\n    upVector = eventValue;\\n}\\n\\nfunction set_fStop (eventValue) // input event received for inputOutput field\\n{\\n    fStop = eventValue;\\n}\\n\\nfunction set_focusDistance (eventValue) // input event received for inputOutput field\\n{\\n    focusDistance = eventValue;\\n}\\n\\nfunction set_offlineRender (eventValue) // input event received for inputOutput field\\n{\\n    offlineRender = eventValue;\\n}\\n\\nfunction set_key (eventValue) // input event received for inputOutput field\\n{\\n    key = eventValue;\\n}\\n\\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\\n{\\n    keyValuePosition = eventValue;\\n}\\n\\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\\n{\\n    keyValueOrientation = eventValue;\\n}\\n\\nfunction set_animated (eventValue) // input event received for inputOutput field\\n{\\n    animated = eventValue;\\n}\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\nfunction alwaysPrint (outputValue)\\n{\\n    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[Camera] ' + outputString + '\\n');\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype42.AddScript([Script55]);
{ Original "CameraScript.position TO CameraViewpoint.position }
{ Sample CameraScript.position TO CameraViewpoint.position}
X3DPrototype42.AddRoute(CameraScript.undefined, Viewpoint43.position);
{ METHOD .AddX3DROUTE }
{ Original "CameraScript.EventOrientation TO CameraViewpoint.orientation }
{ Sample CameraScript.EventOrientation TO CameraViewpoint.orientation}
X3DPrototype42.AddRoute(Script55.EventOrientation, Viewpoint43.orientation);
{ METHOD .AddX3DROUTE }
{ Original "CameraScript.EventIsActive TO CameraViewpoint.EventSet_bind }
{ Sample CameraScript.EventIsActive TO CameraViewpoint.EventSet_bind}
X3DPrototype42.AddRoute(Script55.EventIsActive, Viewpoint43.EventSet_bind);
{ METHOD .AddX3DROUTE }
{ Original "CameraScript.EventIsActive TO CameraNavInfo.EventSet_bind }
{ Sample CameraScript.EventIsActive TO CameraNavInfo.EventSet_bind}
X3DPrototype42.AddRoute(Script55.EventIsActive, NavigationInfo45.EventSet_bind);
{ METHOD .AddX3DROUTE }
{ Original "CameraScript.EventIsActive TO CameraDirectionalLight.on }
{ Sample CameraScript.EventIsActive TO CameraDirectionalLight.on}
X3DPrototype42.AddRoute(Script55.EventIsActive, DirectionalLight47.on);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype17.AddX3DPrototype([X3DPrototype42]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype17]);
{ =============== CameraShot ============== }
X3DPrototype98 := TX3DPrototype.Create;;
X3DPrototype98.Appinfo := 'CameraShot collects a specific set of CameraMovement animations that make up an individual shot.';
X3DInterfaceDeclaration99 := TX3DInterfaceDeclaration.Create(nil);;
SFString100 := TSFString.CreateUndefined(X3DInterfaceDeclaration99, false, 'description');
SFString100.Appinfo := 'Text description to be displayed for this CameraShot';
{ METHOD .AddSFString }
X3DInterfaceDeclaration99.AddSFString([SFString100]);
SFBool101 := TSFBool.CreateUndefined(X3DInterfaceDeclaration99, false, 'enabled');
SFBool101.Appinfo := 'Whether this CameraShot can be activated';
SFBool101.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration99.AddSFBool([SFBool101]);
MFNode102 := TMFNode.CreateUndefined(X3DInterfaceDeclaration99, false, 'moves');
MFNode102.Appinfo := 'Set of CameraMovement nodes';
{ initializing CameraMovement nodes are inserted here by scene author using ProtoInstance }
{ METHOD .AddMFNode }
X3DInterfaceDeclaration99.AddMFNode([MFNode102]);
SFVec3f103 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration99, false, 'initialPosition');
SFVec3f103.Appinfo := 'Setup to reinitialize camera position for this shot';
SFVec3f103.Value := '0 0 10';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration99.AddSFVec3f([SFVec3f103]);
SFRotation104 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration99, false, 'initialOrientation');
SFRotation104.Appinfo := 'Setup to reinitialize camera rotation for this shot';
SFRotation104.Value := '0 0 1 0';
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration99.AddSFRotation([SFRotation104]);
SFVec3f105 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration99, false, 'initialAimPoint');
SFVec3f105.Appinfo := 'Setup to reinitialize aimpoint (relative location for camera direction) for this shot';
SFVec3f105.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration99.AddSFVec3f([SFVec3f105]);
SFFloat106 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration99, false, 'initialFieldOfView');
SFFloat106.Appinfo := 'pi/4';
SFFloat106.Value := '0.7854';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration99.AddSFFloat([SFFloat106]);
SFFloat107 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration99, false, 'initialFStop');
SFFloat107.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
SFFloat107.Value := '5.6';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration99.AddSFFloat([SFFloat107]);
SFFloat108 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration99, false, 'initialFocusDistance');
SFFloat108.Appinfo := 'Distance to focal plane of sharpest focus';
SFFloat108.Value := '10';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration99.AddSFFloat([SFFloat108]);
SFTime109 := TSFTime.CreateUndefined(X3DInterfaceDeclaration99, false, 'shotDuration');
SFTime109.Appinfo := 'Subtotal duration of contained CameraMovement move durations';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration99.AddSFTime([SFTime109]);
SFBool110 := TSFBool.CreateUndefined(X3DInterfaceDeclaration99, false, 'isActive');
SFBool110.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration99.AddSFBool([SFBool110]);
SFBool111 := TSFBool.CreateUndefined(X3DInterfaceDeclaration99, false, 'traceEnabled');
SFBool111.Appinfo := 'enable console output to trace script computations and prototype progress';
SFBool111.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration99.AddSFBool([SFBool111]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype98.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration99]);
X3DPrototype112 := TX3DPrototype.Create;;
Script113 := TScriptNode.Create;;
Script113.DirectOutput := True;
Script113.MustEvaluate := True;
SFString114 := TSFString.CreateUndefined(Script113, false, 'description');
SFString114.Appinfo := 'Text description to be displayed for this CameraShot';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFString114);
SFBool115 := TSFBool.CreateUndefined(Script113, false, 'enabled');
SFBool115.Appinfo := 'Whether this CameraShot can be activated';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFBool115);
MFNode116 := TMFNode.CreateUndefined(Script113, false, 'moves');
MFNode116.Appinfo := 'Set of CameraMovement nodes';
{ initialization nodes (if any) go here }
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(MFNode116);
SFVec3f117 := TSFVec3f.CreateUndefined(Script113, false, 'initialPosition');
SFVec3f117.Appinfo := 'Setup to reinitialize camera position for this shot';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFVec3f117);
SFRotation118 := TSFRotation.CreateUndefined(Script113, false, 'initialOrientation');
SFRotation118.Appinfo := 'Setup to reinitialize camera rotation for this shot';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFRotation118);
SFVec3f119 := TSFVec3f.CreateUndefined(Script113, false, 'initialAimPoint');
SFVec3f119.Appinfo := 'Setup to reinitialize aimpoint (relative location for camera direction) for this shot';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFVec3f119);
SFFloat120 := TSFFloat.CreateUndefined(Script113, false, 'initialFieldOfView');
SFFloat120.Appinfo := 'pi/4';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFFloat120);
SFFloat121 := TSFFloat.CreateUndefined(Script113, false, 'initialFStop');
SFFloat121.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFFloat121);
SFFloat122 := TSFFloat.CreateUndefined(Script113, false, 'initialFocusDistance');
SFFloat122.Appinfo := 'Distance to focal plane of sharpest focus';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFFloat122);
SFTime123 := TSFTime.CreateUndefined(Script113, false, 'shotDuration');
SFTime123.Appinfo := 'Subtotal duration of contained CameraMovement move durations';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFTime123);
SFBool124 := TSFBool.CreateUndefined(Script113, false, 'isActive');
SFBool124.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFBool124);
SFBool125 := TSFBool.CreateUndefined(Script113, false, 'traceEnabled');
SFBool125.Appinfo := 'enable console output to trace script computations and prototype progress';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(SFBool125);
MFFloat126 := TMFFloat.CreateUndefined(Script113, false, 'key');
MFFloat126.Appinfo := 'key array for interpolators';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(MFFloat126);
MFVec3f127 := TMFVec3f.CreateUndefined(Script113, false, 'keyValuePosition');
MFVec3f127.Appinfo := 'keyValue array for PositionInterpolator';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(MFVec3f127);
MFRotation128 := TMFRotation.CreateUndefined(Script113, false, 'keyValueOrientation');
MFRotation128.Appinfo := 'keyValue array for OrientationInterpolator';
{ METHOD .Fd.AddCustomField }
Script113.AddCustomField(MFRotation128);

Script113.SetSourceCode('''ecmascript:\n"+
"function initialize () // CameraShotScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n\\n    // compute shotDuration by summing durations from contained CameraMovement nodes\\n    shotDuration = 0;\\n    for (i = 0; i < moves.length; i++)\\n    {\\n        shotDuration = shotDuration + moves[i].duration;\\n    }\\n    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\\n\\n//  tracePrint ('... initialize() complete');\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_moves (eventValue) // input event received for inputOutput field\\n{\\n    moves = eventValue;\\n}\\n\\nfunction set_initialPosition (eventValue) // input event received for inputOutput field\\n{\\n    initialPosition = eventValue;\\n}\\n\\nfunction set_initialOrientation (eventValue) // input event received for inputOutput field\\n{\\n    initialOrientation = eventValue;\\n}\\n\\nfunction set_initialAimPoint (eventValue) // input event received for inputOutput field\\n{\\n    initialAimPoint = eventValue;\\n}\\n\\nfunction set_initialFieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    initialFieldOfView = eventValue;\\n}\\n\\nfunction set_initialFStop (eventValue) // input event received for inputOutput field\\n{\\n    initialFStop = eventValue;\\n}\\n\\nfunction set_initialFocusDistance (eventValue) // input event received for inputOutput field\\n{\\n    initialFocusDistance = eventValue;\\n}\\n\\nfunction set_key (eventValue) // input event received for inputOutput field\\n{\\n    key = eventValue;\\n}\\n\\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\\n{\\n    keyValuePosition = eventValue;\\n}\\n\\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\\n{\\n    keyValueOrientation = eventValue;\\n}\\n\\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[CameraShot] ' + outputString + '\\n');\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype112.AddScript([Script113]);
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
{ METHOD .AddX3DPrototype }
X3DPrototype98.AddX3DPrototype([X3DPrototype112]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype98]);
{ =============== CameraMovement ============== }
X3DPrototype130 := TX3DPrototype.Create;;
X3DPrototype130.Appinfo := 'CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.';
X3DInterfaceDeclaration131 := TX3DInterfaceDeclaration.Create(nil);;
SFString132 := TSFString.CreateUndefined(X3DInterfaceDeclaration131, false, 'description');
SFString132.Appinfo := 'Text description to be displayed for this CameraMovement';
{ METHOD .AddSFString }
X3DInterfaceDeclaration131.AddSFString([SFString132]);
SFBool133 := TSFBool.CreateUndefined(X3DInterfaceDeclaration131, false, 'enabled');
SFBool133.Appinfo := 'Whether this CameraMovement can be activated';
SFBool133.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration131.AddSFBool([SFBool133]);
SFFloat134 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration131, false, 'duration');
SFFloat134.Appinfo := 'Duration in seconds for this move';
SFFloat134.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration131.AddSFFloat([SFFloat134]);
SFVec3f135 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration131, false, 'goalPosition');
SFVec3f135.Appinfo := 'Goal camera position for this move';
SFVec3f135.Value := '0 0 10';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration131.AddSFVec3f([SFVec3f135]);
SFRotation136 := TSFRotation.CreateUndefined(X3DInterfaceDeclaration131, false, 'goalOrientation');
SFRotation136.Appinfo := 'Goal camera rotation for this move';
SFRotation136.Value := '0 0 1 0';
{ METHOD .AddSFRotation }
X3DInterfaceDeclaration131.AddSFRotation([SFRotation136]);
SFBool137 := TSFBool.CreateUndefined(X3DInterfaceDeclaration131, false, 'tracking');
SFBool137.Appinfo := 'Whether or not camera direction is tracking towards the aimPoint';
SFBool137.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration131.AddSFBool([SFBool137]);
SFVec3f138 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration131, false, 'goalAimPoint');
SFVec3f138.Appinfo := 'Goal aimPoint for this move, ignored if tracking=false';
SFVec3f138.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration131.AddSFVec3f([SFVec3f138]);
SFFloat139 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration131, false, 'goalFieldOfView');
SFFloat139.Appinfo := 'Goal fieldOfView for this move';
SFFloat139.Value := '0.7854';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration131.AddSFFloat([SFFloat139]);
SFFloat140 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration131, false, 'goalFStop');
SFFloat140.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
SFFloat140.Value := '5.6';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration131.AddSFFloat([SFFloat140]);
SFFloat141 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration131, false, 'goalFocusDistance');
SFFloat141.Appinfo := 'Distance to focal plane of sharpest focus';
SFFloat141.Value := '10';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration131.AddSFFloat([SFFloat141]);
SFBool142 := TSFBool.CreateUndefined(X3DInterfaceDeclaration131, false, 'isActive');
SFBool142.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration131.AddSFBool([SFBool142]);
SFBool143 := TSFBool.CreateUndefined(X3DInterfaceDeclaration131, false, 'traceEnabled');
SFBool143.Appinfo := 'enable console output to trace script computations and prototype progress';
SFBool143.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration131.AddSFBool([SFBool143]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype130.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration131]);
X3DPrototype144 := TX3DPrototype.Create;;
{ First node determines node type of this prototype }
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
{ Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events }
Script145 := TScriptNode.Create;;
Script145.DirectOutput := True;
Script145.MustEvaluate := True;
SFString146 := TSFString.CreateUndefined(Script145, false, 'description');
SFString146.Appinfo := 'Text description to be displayed for this CameraMovement';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFString146);
SFBool147 := TSFBool.CreateUndefined(Script145, false, 'enabled');
SFBool147.Appinfo := 'Whether this CameraMovement can be activated';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFBool147);
SFFloat148 := TSFFloat.CreateUndefined(Script145, false, 'duration');
SFFloat148.Appinfo := 'Duration in seconds for this move';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFFloat148);
SFVec3f149 := TSFVec3f.CreateUndefined(Script145, false, 'goalPosition');
SFVec3f149.Appinfo := 'Goal camera position for this move';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFVec3f149);
SFRotation150 := TSFRotation.CreateUndefined(Script145, false, 'goalOrientation');
SFRotation150.Appinfo := 'Goal camera rotation for this move';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFRotation150);
SFBool151 := TSFBool.CreateUndefined(Script145, false, 'tracking');
SFBool151.Appinfo := 'Whether or not camera direction is tracking towards the aimPoint';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFBool151);
SFVec3f152 := TSFVec3f.CreateUndefined(Script145, false, 'goalAimPoint');
SFVec3f152.Appinfo := 'Goal aimPoint for this move, ignored if tracking=false';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFVec3f152);
SFFloat153 := TSFFloat.CreateUndefined(Script145, false, 'goalFieldOfView');
SFFloat153.Appinfo := 'Goal fieldOfView for this move';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFFloat153);
SFFloat154 := TSFFloat.CreateUndefined(Script145, false, 'goalFStop');
SFFloat154.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFFloat154);
SFFloat155 := TSFFloat.CreateUndefined(Script145, false, 'goalFocusDistance');
SFFloat155.Appinfo := 'Distance to focal plane of sharpest focus';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFFloat155);
SFBool156 := TSFBool.CreateUndefined(Script145, false, 'isActive');
SFBool156.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFBool156);
SFBool157 := TSFBool.CreateUndefined(Script145, false, 'traceEnabled');
SFBool157.Appinfo := 'enable console output to trace script computations and prototype progress';
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFBool157);

Script145.SetSourceCode('''ecmascript:\n"+
"function initialize () // CameraMovementScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\\n                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\\n                           );\\n    if (duration < 0)\\n    {\\n       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\\n       duration = 0;\\n    }\\n    else if (duration == 0)\\n    {\\n       alwaysPrint ('warning: duration=0, nothing to do!');\\n    }\\n    tracePrint ('... initialize complete');\\n}\\n\\nfunction set_goalAimPoint (eventValue) // input event received for inputOutput field\\n{\\n    goalAimPoint_changed = eventValue;\\n    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\\n\\n    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_duration (eventValue) // input event received for inputOutput field\\n{\\n    duration = eventValue;\\n}\\n\\nfunction set_goalPosition (eventValue) // input event received for inputOutput field\\n{\\n    goalPosition = eventValue;\\n}\\n\\nfunction set_goalOrientation (eventValue) // input event received for inputOutput field\\n{\\n    goalOrientation = eventValue;\\n}\\n\\nfunction set_tracking (eventValue) // input event received for inputOutput field\\n{\\n    tracking = eventValue;\\n}\\n\\nfunction set_goalFieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    goalFieldOfView = eventValue;\\n}\\n\\nfunction set_goalFStop (eventValue) // input event received for inputOutput field\\n{\\n    goalFStop = eventValue;\\n}\\n\\nfunction set_goalFocusDistance (eventValue) // input event received for inputOutput field\\n{\\n    goalFocusDistance = eventValue;\\n}\\n\\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\n\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[CameraMovement] ' + outputString + '\\n');\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype144.AddScript([Script145]);
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
{ METHOD .AddX3DPrototype }
X3DPrototype130.AddX3DPrototype([X3DPrototype144]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype130]);
{ =============== OfflineRender ============== }
X3DPrototype159 := TX3DPrototype.Create;;
X3DPrototype159.Appinfo := 'OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).';
X3DInterfaceDeclaration160 := TX3DInterfaceDeclaration.Create(nil);;
{ TODO non-photorealistic rendering (NPR) parameters }
SFString161 := TSFString.CreateUndefined(X3DInterfaceDeclaration160, false, 'description');
SFString161.Appinfo := 'Text description to be displayed for this OfflineRender';
{ METHOD .AddSFString }
X3DInterfaceDeclaration160.AddSFString([SFString161]);
SFBool162 := TSFBool.CreateUndefined(X3DInterfaceDeclaration160, false, 'enabled');
SFBool162.Appinfo := 'Whether this OfflineRender can be activated';
SFBool162.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration160.AddSFBool([SFBool162]);
SFFloat163 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration160, false, 'frameRate');
SFFloat163.Appinfo := 'Frames per second recorded for this rendering';
SFFloat163.Value := '30';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration160.AddSFFloat([SFFloat163]);
SFVec2f164 := TSFVec2f.CreateUndefined(X3DInterfaceDeclaration160, false, 'frameSize');
SFVec2f164.Appinfo := 'Size of frame in number of pixels width and height';
SFVec2f164.Value := '640 480';
{ METHOD .AddSFVec2f }
X3DInterfaceDeclaration160.AddSFVec2f([SFVec2f164]);
SFFloat165 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration160, false, 'pixelAspectRatio');
SFFloat165.Appinfo := 'Relative dimensions of pixel height/width typically 1.33 or 1';
SFFloat165.Value := '1.33';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration160.AddSFFloat([SFFloat165]);
SFTime166 := TSFTime.CreateUndefined(X3DInterfaceDeclaration160, false, 'set_startTime');
SFTime166.Appinfo := 'Begin render operation';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration160.AddSFTime([SFTime166]);
SFFloat167 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration160, false, 'progress');
SFFloat167.Appinfo := 'Progress performing render operation (0..1)';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration160.AddSFFloat([SFFloat167]);
SFTime168 := TSFTime.CreateUndefined(X3DInterfaceDeclaration160, false, 'renderCompleteTime');
SFTime168.Appinfo := 'Render operation complete';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration160.AddSFTime([SFTime168]);
MFString169 := TMFString.CreateUndefined(X3DInterfaceDeclaration160, false, 'movieFormat');
MFString169.Appinfo := 'Format of rendered output movie (mpeg mp4 etc.), use first supported format';
MFString169.Value := '\"mpeg\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration160.AddMFString([MFString169]);
MFString170 := TMFString.CreateUndefined(X3DInterfaceDeclaration160, false, 'imageFormat');
MFString170.Appinfo := 'Format of rendered output images (png jpeg gif tiff etc.) use first supported format';
MFString170.Value := '\"png\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration160.AddMFString([MFString170]);
SFBool171 := TSFBool.CreateUndefined(X3DInterfaceDeclaration160, false, 'traceEnabled');
SFBool171.Appinfo := 'enable console output to trace script computations and prototype progress';
SFBool171.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration160.AddSFBool([SFBool171]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype159.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration160]);
X3DPrototype172 := TX3DPrototype.Create;;
{ First node determines node type of this prototype }
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
Script173 := TScriptNode.Create;;
Script173.MustEvaluate := True;
SFString174 := TSFString.CreateUndefined(Script173, false, 'description');
SFString174.Appinfo := 'Text description to be displayed for this OfflineRender';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(SFString174);
SFBool175 := TSFBool.CreateUndefined(Script173, false, 'enabled');
SFBool175.Appinfo := 'Whether this OfflineRender can be activated';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(SFBool175);
SFFloat176 := TSFFloat.CreateUndefined(Script173, false, 'frameRate');
SFFloat176.Appinfo := 'Frames per second recorded for this rendering';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(SFFloat176);
SFVec2f177 := TSFVec2f.CreateUndefined(Script173, false, 'frameSize');
SFVec2f177.Appinfo := 'Size of frame in number of pixels width and height';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(SFVec2f177);
SFFloat178 := TSFFloat.CreateUndefined(Script173, false, 'pixelAspectRatio');
SFFloat178.Appinfo := 'Relative dimensions of pixel height/width typically 1.33 or 1';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(SFFloat178);
SFTime179 := TSFTime.CreateUndefined(Script173, false, 'set_startTime');
SFTime179.Appinfo := 'Begin render operation';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(SFTime179);
SFFloat180 := TSFFloat.CreateUndefined(Script173, false, 'progress');
SFFloat180.Appinfo := 'Progress performing render operation (0..1)';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(SFFloat180);
SFTime181 := TSFTime.CreateUndefined(Script173, false, 'renderCompleteTime');
SFTime181.Appinfo := 'Render operation complete';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(SFTime181);
MFString182 := TMFString.CreateUndefined(Script173, false, 'movieFormat');
MFString182.Appinfo := 'Format of rendered output movie (mpeg mp4 etc.)';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(MFString182);
MFString183 := TMFString.CreateUndefined(Script173, false, 'imageFormat');
MFString183.Appinfo := 'Format of rendered output images (png jpeg gif tiff etc.)';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(MFString183);
SFBool184 := TSFBool.CreateUndefined(Script173, false, 'traceEnabled');
SFBool184.Appinfo := 'enable console output to trace script computations and prototype progress';
{ METHOD .Fd.AddCustomField }
Script173.AddCustomField(SFBool184);

Script173.SetSourceCode('''ecmascript:\n"+
"function initialize () // OfflineRenderScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n\\n    tracePrint ('... initialize complete');\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_frameRate (eventValue) // input event received for inputOutput field\\n{\\n    frameRate = eventValue;\\n}\\n\\nfunction set_frameSize (eventValue) // input event received for inputOutput field\\n{\\n    frameSize = eventValue;\\n}\\n\\nfunction set_pixelAspectRatio (eventValue) // input event received for inputOutput field\\n{\\n    pixelAspectRatio = eventValue;\\n}\\n\\nfunction set_startTime (eventValue) // input event received for inputOnly field\\n{\\n   // do something with input eventValue;\\n}\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\n\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[OfflineRender] ' + outputString + '\\n');\n"+
"}''');
{ METHOD .AddScript }
X3DPrototype172.AddScript([Script173]);
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
{ METHOD .AddX3DPrototype }
X3DPrototype159.AddX3DPrototype([X3DPrototype172]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype159]);
{ =============== Launch Prototype Example ============== }
Background186 := TBackgroundNode.Create;;
Background186.SetSkyColor([Vector3(0.282353,0.380392,0.470588)]);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Background186);
Anchor187 := TAnchorNode.Create;;
Anchor187.Description := 'launch CameraExample scene';
Anchor187.SetUrl(['CameraExamples.x3d','https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d','CameraExamples.wrl','https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl']);
Transform188 := TTransformNode.Create;;
Shape189 := TShapeNode.Create;;
Text190 := TTextNode.Create;;
Text190.SetText(['CameraPrototypes.x3d','defines multiple prototype nodes','Click on this text to see','CameraExamples.x3d scene']);
FontStyle191 := TFontStyleNode.Create;;
FontStyle191.Justify := fjMIDDLE;
FontStyle191.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text190.FontStyle := FontStyle191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape189.Geometry := Text190;
Appearance192 := TAppearanceNode.Create;;
Material193 := TMaterialNode.Create;;
Material193.DiffuseColor := Vector3(1,1,0.2);
{ METHOD .SetMaterial }
Appearance192.Material := Material193;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape189.Appearance := Appearance192;
{ METHOD .FdChildren.Add }
Transform188.FdChildren.Add(Shape189);
{ METHOD .FdChildren.Add }
Anchor187.FdChildren.Add(Transform188);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Anchor187);
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
Result := X3D0;
end;

begin
end.
