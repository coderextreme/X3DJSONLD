unit CameraPrototypes;

interface

uses X3DNodes;

function CreateCameraPrototypes: TX3DRootNode;

implementation

uses CastleVectors;

function CreateCameraPrototypes: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
X3DPrototype17: TX3DPrototype;
X3DInterfaceDeclaration18: TX3DInterfaceDeclaration;
X3DField19: TX3DField;
X3DField20: TX3DField;
X3DField21: TX3DField;
X3DField22: TX3DField;
X3DField23: TX3DField;
X3DField24: TX3DField;
X3DField25: TX3DField;
X3DField26: TX3DField;
X3DField27: TX3DField;
X3DField28: TX3DField;
X3DField29: TX3DField;
X3DField30: TX3DField;
X3DField31: TX3DField;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
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
X3DField71: TX3DField;
X3DField72: TX3DField;
X3DField73: TX3DField;
X3DField74: TX3DField;
X3DField75: TX3DField;
X3DField76: TX3DField;
X3DField77: TX3DField;
X3DField78: TX3DField;
X3DField79: TX3DField;
X3DField80: TX3DField;
X3DField81: TX3DField;
X3DField82: TX3DField;
X3DField83: TX3DField;
X3DField84: TX3DField;
X3DField85: TX3DField;
X3DField86: TX3DField;
X3DField87: TX3DField;
X3DField88: TX3DField;
Viewpoint89: TViewpointNode;
X3DField90: TX3DField;
NavigationInfo91: TNavigationInfoNode;
X3DField92: TX3DField;
PositionInterpolator93: TPositionInterpolatorNode;
X3DField94: TX3DField;
OrientationInterpolator95: TOrientationInterpolatorNode;
X3DField96: TX3DField;
X3DField97: TX3DField;
X3DField98: TX3DField;
X3DField99: TX3DField;
X3DField100: TX3DField;
X3DField101: TX3DField;
X3DField102: TX3DField;
X3DField103: TX3DField;
X3DField104: TX3DField;
X3DField105: TX3DField;
X3DField106: TX3DField;
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
X3DField133: TX3DField;
X3DField134: TX3DField;
X3DField135: TX3DField;
X3DField136: TX3DField;
X3DField137: TX3DField;
X3DField138: TX3DField;
X3DField139: TX3DField;
X3DField140: TX3DField;
X3DField141: TX3DField;
X3DField142: TX3DField;
X3DField143: TX3DField;
X3DField144: TX3DField;
X3DPrototype145: TX3DPrototype;
Script146: TScriptNode;
X3DField147: TX3DField;
X3DField148: TX3DField;
X3DField149: TX3DField;
X3DField150: TX3DField;
X3DField151: TX3DField;
X3DField152: TX3DField;
X3DField153: TX3DField;
X3DField154: TX3DField;
X3DField155: TX3DField;
X3DField156: TX3DField;
X3DField157: TX3DField;
X3DField158: TX3DField;
X3DField159: TX3DField;
X3DField160: TX3DField;
X3DField161: TX3DField;
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
X3DField177: TX3DField;
X3DField178: TX3DField;
X3DField179: TX3DField;
X3DField180: TX3DField;
X3DField181: TX3DField;
X3DField182: TX3DField;
X3DField183: TX3DField;
X3DField184: TX3DField;
X3DField185: TX3DField;
X3DField186: TX3DField;
X3DField187: TX3DField;
X3DField188: TX3DField;
X3DPrototype189: TX3DPrototype;
Script190: TScriptNode;
X3DField191: TX3DField;
X3DField192: TX3DField;
X3DField193: TX3DField;
X3DField194: TX3DField;
X3DField195: TX3DField;
X3DField196: TX3DField;
X3DField197: TX3DField;
X3DField198: TX3DField;
X3DField199: TX3DField;
X3DField200: TX3DField;
X3DField201: TX3DField;
X3DField202: TX3DField;
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
X3DField218: TX3DField;
X3DField219: TX3DField;
X3DField220: TX3DField;
X3DField221: TX3DField;
X3DField222: TX3DField;
X3DField223: TX3DField;
X3DField224: TX3DField;
X3DField225: TX3DField;
X3DField226: TX3DField;
X3DField227: TX3DField;
X3DField228: TX3DField;
X3DPrototype229: TX3DPrototype;
Script230: TScriptNode;
X3DField231: TX3DField;
X3DField232: TX3DField;
X3DField233: TX3DField;
X3DField234: TX3DField;
X3DField235: TX3DField;
X3DField236: TX3DField;
X3DField237: TX3DField;
X3DField238: TX3DField;
X3DField239: TX3DField;
X3DField240: TX3DField;
X3DField241: TX3DField;
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
X3DPrototype17 := TX3DPrototype.Create;
X3DPrototype17.NameField := 'Camera';
X3DPrototype17.Appinfo := 'Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.';
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);
{ Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields }
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'description';
X3DField19.AccessType := 'inputOutput';
X3DField19.Appinfo := 'Text description to be displayed for this Camera';
X3DField19.Type := 'SFString';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField19;
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'position';
X3DField20.AccessType := 'inputOutput';
X3DField20.Appinfo := 'Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated';
X3DField20.Type := 'SFVec3f';
X3DField20.Value := '0 0 10';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField20;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'orientation';
X3DField21.AccessType := 'inputOutput';
X3DField21.Appinfo := 'Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated';
X3DField21.Type := 'SFRotation';
X3DField21.Value := '0 0 1 0';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField21;
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'fieldOfView';
X3DField22.AccessType := 'inputOutput';
X3DField22.Appinfo := 'pi/4';
X3DField22.Type := 'SFFloat';
X3DField22.Value := '0.7854';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField22;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'set_fraction';
X3DField23.AccessType := 'inputOnly';
X3DField23.Appinfo := 'input fraction drives interpolators';
X3DField23.Type := 'SFFloat';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField23;
X3DField24 := TX3DField.Create;
X3DField24.NameField := 'set_bind';
X3DField24.AccessType := 'inputOnly';
X3DField24.Appinfo := 'input event binds or unbinds this Camera';
X3DField24.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField24;
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'bindTime';
X3DField25.AccessType := 'outputOnly';
X3DField25.Appinfo := 'output event indicates when this Camera is bound';
X3DField25.Type := 'SFTime';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'isBound';
X3DField26.AccessType := 'outputOnly';
X3DField26.Appinfo := 'output event indicates whether this Camera is bound or unbound';
X3DField26.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField26;
X3DField27 := TX3DField.Create;
X3DField27.NameField := 'nearClipPlane';
X3DField27.AccessType := 'inputOutput';
X3DField27.Appinfo := 'Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]';
X3DField27.Type := 'SFFloat';
X3DField27.Value := '0.25';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField27;
X3DField28 := TX3DField.Create;
X3DField28.NameField := 'farClipPlane';
X3DField28.AccessType := 'inputOutput';
X3DField28.Appinfo := 'Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit';
X3DField28.Type := 'SFFloat';
X3DField28.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField28;
X3DField29 := TX3DField.Create;
X3DField29.NameField := 'shots';
X3DField29.AccessType := 'inputOutput';
X3DField29.Appinfo := 'Array of CameraShot nodes which in turn contain CameraMovement nodes';
X3DField29.Type := 'MFNode';
{ initialization nodes (if any) go here }
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField29;
X3DField30 := TX3DField.Create;
X3DField30.NameField := 'headlight';
X3DField30.AccessType := 'inputOutput';
X3DField30.Appinfo := 'Whether camera headlight is on or off';
X3DField30.Type := 'SFBool';
X3DField30.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField30;
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'headlightColor';
X3DField31.AccessType := 'inputOutput';
X3DField31.Appinfo := 'Camera headlight color';
X3DField31.Type := 'SFColor';
X3DField31.Value := '1 1 1';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'headlightIntensity';
X3DField32.AccessType := 'inputOutput';
X3DField32.Appinfo := 'Camera headlight intensity';
X3DField32.Type := 'SFFloat';
X3DField32.Value := '1';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'filterColor';
X3DField33.AccessType := 'inputOutput';
X3DField33.Appinfo := 'Camera filter color that modifies virtual lens capture';
X3DField33.Type := 'SFColor';
X3DField33.Value := '1 1 1';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'filterTransparency';
X3DField34.AccessType := 'inputOutput';
X3DField34.Appinfo := 'Camera filter transparency that modifies virtual lens capture';
X3DField34.Type := 'SFFloat';
X3DField34.Value := '1';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'upVector';
X3DField35.AccessType := 'inputOutput';
X3DField35.Appinfo := 'upVector changes modify camera orientation (and possibly vice versa)';
X3DField35.Type := 'SFVec3f';
X3DField35.Value := '0 1 0';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'fStop';
X3DField36.AccessType := 'inputOutput';
X3DField36.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
X3DField36.Type := 'SFFloat';
X3DField36.Value := '5.6';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'focusDistance';
X3DField37.AccessType := 'inputOutput';
X3DField37.Appinfo := 'Distance to focal plane of sharpest focus';
X3DField37.Type := 'SFFloat';
X3DField37.Value := '10';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'isActive';
X3DField38.AccessType := 'outputOnly';
X3DField38.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
X3DField38.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'totalDuration';
X3DField39.AccessType := 'outputOnly';
X3DField39.Appinfo := 'Total duration of contained enabled CameraShot (and thus CameraMovement) move durations';
X3DField39.Type := 'SFTime';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'offlineRender';
X3DField40.AccessType := 'inputOutput';
X3DField40.Appinfo := 'OfflineRender node';
X3DField40.Type := 'SFNode';
{ initialization node (if any) goes here }
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'traceEnabled';
X3DField41.AccessType := 'initializeOnly';
X3DField41.Appinfo := 'enable console output to trace script computations and prototype progress';
X3DField41.Type := 'SFBool';
X3DField41.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField41;
{ .SetX3DInterfaceDeclaration }
X3DPrototype17.X3DInterfaceDeclaration := X3DInterfaceDeclaration18;
X3DPrototype42 := TX3DPrototype.Create;
Viewpoint43 := TViewpointNode.Create;
IS44 := TIS.Create;
connect45 := Tconnect.Create;
connect45.NodeField := 'description';
connect45.ProtoField := 'description';
{ .AddConnect }
IS44.Connect := connect45;
connect46 := Tconnect.Create;
connect46.NodeField := 'position';
connect46.ProtoField := 'position';
{ .AddConnect }
IS44.Connect := connect46;
connect47 := Tconnect.Create;
connect47.NodeField := 'orientation';
connect47.ProtoField := 'orientation';
{ .AddConnect }
IS44.Connect := connect47;
connect48 := Tconnect.Create;
connect48.NodeField := 'fieldOfView';
connect48.ProtoField := 'fieldOfView';
{ .AddConnect }
IS44.Connect := connect48;
connect49 := Tconnect.Create;
connect49.NodeField := 'set_bind';
connect49.ProtoField := 'set_bind';
{ .AddConnect }
IS44.Connect := connect49;
connect50 := Tconnect.Create;
connect50.NodeField := 'bindTime';
connect50.ProtoField := 'bindTime';
{ .AddConnect }
IS44.Connect := connect50;
connect51 := Tconnect.Create;
connect51.NodeField := 'isBound';
connect51.ProtoField := 'isBound';
{ .AddConnect }
IS44.Connect := connect51;
{ .SetIS }
Viewpoint43.IS := IS44;
{ .SetViewpoint }
X3DPrototype42.Viewpoint := Viewpoint43;
{ NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation }
NavigationInfo52 := TNavigationInfoNode.Create;
NavigationInfo52.SetType(['EXAMINE','FLY','ANY']);
IS53 := TIS.Create;
connect54 := Tconnect.Create;
connect54.NodeField := 'set_bind';
connect54.ProtoField := 'set_bind';
{ .AddConnect }
IS53.Connect := connect54;
connect55 := Tconnect.Create;
connect55.NodeField := 'headlight';
connect55.ProtoField := 'headlight';
{ .AddConnect }
IS53.Connect := connect55;
connect56 := Tconnect.Create;
connect56.NodeField := 'visibilityLimit';
connect56.ProtoField := 'farClipPlane';
{ .AddConnect }
IS53.Connect := connect56;
{ No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing. }
{ .SetIS }
NavigationInfo52.IS := IS53;
{ .AddNavigationInfo }
X3DPrototype42.NavigationInfo := NavigationInfo52;
{ this DirectionalLight replaces NavigationInfo headlight in order to add color capability }
DirectionalLight57 := TDirectionalLightNode.Create;
DirectionalLight57.Global := True;
{ TODO confirm other default field values match NavigationInfo spec }
IS58 := TIS.Create;
connect59 := Tconnect.Create;
connect59.NodeField := 'on';
connect59.ProtoField := 'headlight';
{ .AddConnect }
IS58.Connect := connect59;
connect60 := Tconnect.Create;
connect60.NodeField := 'color';
connect60.ProtoField := 'headlightColor';
{ .AddConnect }
IS58.Connect := connect60;
connect61 := Tconnect.Create;
connect61.NodeField := 'intensity';
connect61.ProtoField := 'headlightIntensity';
{ .AddConnect }
IS58.Connect := connect61;
{ .SetIS }
DirectionalLight57.IS := IS58;
{ .AddDirectionalLight }
X3DPrototype42.DirectionalLight := DirectionalLight57;
PositionInterpolator62 := TPositionInterpolatorNode.Create;
PositionInterpolator62.SetKey([0,1]);
PositionInterpolator62.SetKeyValue([Vector3(0,0,0),Vector3(0,0,0)]);
IS63 := TIS.Create;
connect64 := Tconnect.Create;
connect64.NodeField := 'set_fraction';
connect64.ProtoField := 'set_fraction';
{ .AddConnect }
IS63.Connect := connect64;
{ .SetIS }
PositionInterpolator62.IS := IS63;
{ .AddPositionInterpolator }
X3DPrototype42.PositionInterpolator := PositionInterpolator62;
OrientationInterpolator65 := TOrientationInterpolatorNode.Create;
OrientationInterpolator65.SetKey([0,1]);
OrientationInterpolator65.SetKeyValue([Vector4(0,1,0,0),Vector4(0,1,0,0)]);
IS66 := TIS.Create;
connect67 := Tconnect.Create;
connect67.NodeField := 'set_fraction';
connect67.ProtoField := 'set_fraction';
{ .AddConnect }
IS66.Connect := connect67;
{ .SetIS }
OrientationInterpolator65.IS := IS66;
{ .AddOrientationInterpolator }
X3DPrototype42.OrientationInterpolator := OrientationInterpolator65;
X3DPrototype42.AddRoute(PositionInterpolator62.EventValue_changed, Viewpoint43.FdPosition);
{ .AddX3DRoute }
X3DPrototype42.AddRoute(OrientationInterpolator65.EventValue_changed, Viewpoint43.FdOrientation);
{ .AddX3DRoute }
Script70 := TScriptNode.Create;
Script70.DirectOutput := True;
Script70.MustEvaluate := True;
{ binding is controlled externally, all camera operations proceed the same regardless of whether bound or not }
X3DField71 := TX3DField.Create;
X3DField71.NameField := 'description';
X3DField71.AccessType := 'inputOutput';
X3DField71.Appinfo := 'Text description to be displayed for this Camera';
X3DField71.Type := 'SFString';
{ .AddX3DField }
Script70.X3DField := X3DField71;
X3DField72 := TX3DField.Create;
X3DField72.NameField := 'position';
X3DField72.AccessType := 'inputOutput';
X3DField72.Appinfo := 'Camera position in local transformation frame';
X3DField72.Type := 'SFVec3f';
{ .AddX3DField }
Script70.X3DField := X3DField72;
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'orientation';
X3DField73.AccessType := 'inputOutput';
X3DField73.Appinfo := 'Camera rotation in local transformation frame';
X3DField73.Type := 'SFRotation';
{ .AddX3DField }
Script70.X3DField := X3DField73;
X3DField74 := TX3DField.Create;
X3DField74.NameField := 'set_fraction';
X3DField74.AccessType := 'inputOnly';
X3DField74.Appinfo := 'input fraction drives interpolators';
X3DField74.Type := 'SFFloat';
{ .AddX3DField }
Script70.X3DField := X3DField74;
X3DField75 := TX3DField.Create;
X3DField75.NameField := 'set_bind';
X3DField75.AccessType := 'inputOnly';
X3DField75.Appinfo := 'input event binds or unbinds this Camera';
X3DField75.Type := 'SFBool';
{ .AddX3DField }
Script70.X3DField := X3DField75;
X3DField76 := TX3DField.Create;
X3DField76.NameField := 'fieldOfView';
X3DField76.AccessType := 'inputOutput';
X3DField76.Appinfo := 'pi/4';
X3DField76.Type := 'SFFloat';
{ .AddX3DField }
Script70.X3DField := X3DField76;
X3DField77 := TX3DField.Create;
X3DField77.NameField := 'nearClipPlane';
X3DField77.AccessType := 'inputOutput';
X3DField77.Appinfo := 'Vector distance to near clipping plane';
X3DField77.Type := 'SFFloat';
{ .AddX3DField }
Script70.X3DField := X3DField77;
X3DField78 := TX3DField.Create;
X3DField78.NameField := 'farClipPlane';
X3DField78.AccessType := 'inputOutput';
X3DField78.Appinfo := 'Vector distance to far clipping plane';
X3DField78.Type := 'SFFloat';
{ .AddX3DField }
Script70.X3DField := X3DField78;
X3DField79 := TX3DField.Create;
X3DField79.NameField := 'shots';
X3DField79.AccessType := 'inputOutput';
X3DField79.Appinfo := 'Array of CameraShot nodes which in turn contain CameraMovement nodes';
X3DField79.Type := 'MFNode';
{ initialization nodes (if any) go here }
{ .AddX3DField }
Script70.X3DField := X3DField79;
X3DField80 := TX3DField.Create;
X3DField80.NameField := 'filterColor';
X3DField80.AccessType := 'inputOutput';
X3DField80.Appinfo := 'Camera filter color that modifies virtual lens capture';
X3DField80.Type := 'SFColor';
{ .AddX3DField }
Script70.X3DField := X3DField80;
X3DField81 := TX3DField.Create;
X3DField81.NameField := 'filterTransparency';
X3DField81.AccessType := 'inputOutput';
X3DField81.Appinfo := 'Camera filter transparency that modifies virtual lens capture';
X3DField81.Type := 'SFFloat';
{ .AddX3DField }
Script70.X3DField := X3DField81;
X3DField82 := TX3DField.Create;
X3DField82.NameField := 'upVector';
X3DField82.AccessType := 'inputOutput';
X3DField82.Appinfo := 'upVector changes modify camera orientation (and possibly vice versa)';
X3DField82.Type := 'SFVec3f';
{ .AddX3DField }
Script70.X3DField := X3DField82;
X3DField83 := TX3DField.Create;
X3DField83.NameField := 'fStop';
X3DField83.AccessType := 'inputOutput';
X3DField83.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
X3DField83.Type := 'SFFloat';
{ .AddX3DField }
Script70.X3DField := X3DField83;
X3DField84 := TX3DField.Create;
X3DField84.NameField := 'focusDistance';
X3DField84.AccessType := 'inputOutput';
X3DField84.Appinfo := 'Distance to focal plane of sharpest focus';
X3DField84.Type := 'SFFloat';
{ .AddX3DField }
Script70.X3DField := X3DField84;
X3DField85 := TX3DField.Create;
X3DField85.NameField := 'isActive';
X3DField85.AccessType := 'outputOnly';
X3DField85.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
X3DField85.Type := 'SFBool';
{ .AddX3DField }
Script70.X3DField := X3DField85;
X3DField86 := TX3DField.Create;
X3DField86.NameField := 'totalDuration';
X3DField86.AccessType := 'outputOnly';
X3DField86.Appinfo := 'Total duration of contained enabled CameraShot (and thus CameraMovement) move durations';
X3DField86.Type := 'SFTime';
{ .AddX3DField }
Script70.X3DField := X3DField86;
X3DField87 := TX3DField.Create;
X3DField87.NameField := 'offlineRender';
X3DField87.AccessType := 'inputOutput';
X3DField87.Appinfo := 'OfflineRender node';
X3DField87.Type := 'SFNode';
{ initialization node (if any) goes here }
{ .AddX3DField }
Script70.X3DField := X3DField87;
X3DField88 := TX3DField.Create;
X3DField88.NameField := 'ViewpointNode';
X3DField88.AccessType := 'initializeOnly';
X3DField88.Appinfo := 'node reference to permit getting setting fields from within Script';
X3DField88.Type := 'SFNode';
Viewpoint89 := Viewpoint43;
{ .SetViewpoint }
X3DField88.Viewpoint := Viewpoint89;
{ .AddX3DField }
Script70.X3DField := X3DField88;
X3DField90 := TX3DField.Create;
X3DField90.NameField := 'NavInfoNode';
X3DField90.AccessType := 'initializeOnly';
X3DField90.Appinfo := 'node reference to permit getting setting fields from within Script';
X3DField90.Type := 'SFNode';
NavigationInfo91 := NavigationInfo52;
{ .SetNavigationInfo }
X3DField90.NavigationInfo := NavigationInfo91;
{ .AddX3DField }
Script70.X3DField := X3DField90;
X3DField92 := TX3DField.Create;
X3DField92.NameField := 'CameraPI';
X3DField92.AccessType := 'initializeOnly';
X3DField92.Appinfo := 'node reference to permit getting setting fields from within Script';
X3DField92.Type := 'SFNode';
PositionInterpolator93 := PositionInterpolator62;
{ .SetPositionInterpolator }
X3DField92.PositionInterpolator := PositionInterpolator93;
{ .AddX3DField }
Script70.X3DField := X3DField92;
X3DField94 := TX3DField.Create;
X3DField94.NameField := 'CameraOI';
X3DField94.AccessType := 'initializeOnly';
X3DField94.Appinfo := 'node reference to permit getting setting fields from within Script';
X3DField94.Type := 'SFNode';
OrientationInterpolator95 := OrientationInterpolator65;
{ .SetOrientationInterpolator }
X3DField94.OrientationInterpolator := OrientationInterpolator95;
{ .AddX3DField }
Script70.X3DField := X3DField94;
X3DField96 := TX3DField.Create;
X3DField96.NameField := 'key';
X3DField96.AccessType := 'inputOutput';
X3DField96.Appinfo := 'key array for interpolators';
X3DField96.Type := 'MFFloat';
{ .AddX3DField }
Script70.X3DField := X3DField96;
X3DField97 := TX3DField.Create;
X3DField97.NameField := 'keyValuePosition';
X3DField97.AccessType := 'inputOutput';
X3DField97.Appinfo := 'keyValue array for PositionInterpolator';
X3DField97.Type := 'MFVec3f';
{ .AddX3DField }
Script70.X3DField := X3DField97;
X3DField98 := TX3DField.Create;
X3DField98.NameField := 'keyValueOrientation';
X3DField98.AccessType := 'inputOutput';
X3DField98.Appinfo := 'keyValue array for OrientationInterpolator';
X3DField98.Type := 'MFRotation';
{ .AddX3DField }
Script70.X3DField := X3DField98;
X3DField99 := TX3DField.Create;
X3DField99.NameField := 'animated';
X3DField99.AccessType := 'inputOutput';
X3DField99.Appinfo := 'whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events';
X3DField99.Type := 'SFBool';
X3DField99.Value := 'false';
{ .AddX3DField }
Script70.X3DField := X3DField99;
X3DField100 := TX3DField.Create;
X3DField100.NameField := 'initialized';
X3DField100.AccessType := 'initializeOnly';
X3DField100.Appinfo := 'perform checkShots() function once immediately after initialization';
X3DField100.Type := 'SFBool';
X3DField100.Value := 'false';
{ .AddX3DField }
Script70.X3DField := X3DField100;
X3DField101 := TX3DField.Create;
X3DField101.NameField := 'shotCount';
X3DField101.AccessType := 'initializeOnly';
X3DField101.Appinfo := 'how many CameraShot nodes are contained in shots array';
X3DField101.Type := 'SFInt32';
X3DField101.Value := '0';
{ .AddX3DField }
Script70.X3DField := X3DField101;
X3DField102 := TX3DField.Create;
X3DField102.NameField := 'movesCount';
X3DField102.AccessType := 'initializeOnly';
X3DField102.Appinfo := 'how many CameraMove nodes are contained in moves array';
X3DField102.Type := 'SFInt32';
X3DField102.Value := '0';
{ .AddX3DField }
Script70.X3DField := X3DField102;
X3DField103 := TX3DField.Create;
X3DField103.NameField := 'frameCount';
X3DField103.AccessType := 'initializeOnly';
X3DField103.Appinfo := 'how many frames were created in current loop';
X3DField103.Type := 'SFFloat';
X3DField103.Value := '0';
{ .AddX3DField }
Script70.X3DField := X3DField103;
X3DField104 := TX3DField.Create;
X3DField104.NameField := 'startTime';
X3DField104.AccessType := 'initializeOnly';
X3DField104.Appinfo := 'holding variable';
X3DField104.Type := 'SFTime';
X3DField104.Value := '0';
{ .AddX3DField }
Script70.X3DField := X3DField104;
X3DField105 := TX3DField.Create;
X3DField105.NameField := 'priorTraceTime';
X3DField105.AccessType := 'initializeOnly';
X3DField105.Appinfo := 'holding variable';
X3DField105.Type := 'SFTime';
X3DField105.Value := '0';
{ .AddX3DField }
Script70.X3DField := X3DField105;
X3DField106 := TX3DField.Create;
X3DField106.NameField := 'traceEnabled';
X3DField106.AccessType := 'initializeOnly';
X3DField106.Appinfo := 'enable console output to trace script computations and prototype progress';
X3DField106.Type := 'SFBool';
{ .AddX3DField }
Script70.X3DField := X3DField106;
IS107 := TIS.Create;
connect108 := Tconnect.Create;
connect108.NodeField := 'description';
connect108.ProtoField := 'description';
{ .AddConnect }
IS107.Connect := connect108;
connect109 := Tconnect.Create;
connect109.NodeField := 'position';
connect109.ProtoField := 'position';
{ .AddConnect }
IS107.Connect := connect109;
connect110 := Tconnect.Create;
connect110.NodeField := 'orientation';
connect110.ProtoField := 'orientation';
{ .AddConnect }
IS107.Connect := connect110;
connect111 := Tconnect.Create;
connect111.NodeField := 'set_fraction';
connect111.ProtoField := 'set_fraction';
{ .AddConnect }
IS107.Connect := connect111;
connect112 := Tconnect.Create;
connect112.NodeField := 'set_bind';
connect112.ProtoField := 'set_bind';
{ .AddConnect }
IS107.Connect := connect112;
connect113 := Tconnect.Create;
connect113.NodeField := 'fieldOfView';
connect113.ProtoField := 'fieldOfView';
{ .AddConnect }
IS107.Connect := connect113;
connect114 := Tconnect.Create;
connect114.NodeField := 'nearClipPlane';
connect114.ProtoField := 'nearClipPlane';
{ .AddConnect }
IS107.Connect := connect114;
connect115 := Tconnect.Create;
connect115.NodeField := 'farClipPlane';
connect115.ProtoField := 'farClipPlane';
{ .AddConnect }
IS107.Connect := connect115;
connect116 := Tconnect.Create;
connect116.NodeField := 'shots';
connect116.ProtoField := 'shots';
{ .AddConnect }
IS107.Connect := connect116;
connect117 := Tconnect.Create;
connect117.NodeField := 'filterColor';
connect117.ProtoField := 'filterColor';
{ .AddConnect }
IS107.Connect := connect117;
connect118 := Tconnect.Create;
connect118.NodeField := 'filterTransparency';
connect118.ProtoField := 'filterTransparency';
{ .AddConnect }
IS107.Connect := connect118;
connect119 := Tconnect.Create;
connect119.NodeField := 'upVector';
connect119.ProtoField := 'upVector';
{ .AddConnect }
IS107.Connect := connect119;
connect120 := Tconnect.Create;
connect120.NodeField := 'fStop';
connect120.ProtoField := 'fStop';
{ .AddConnect }
IS107.Connect := connect120;
connect121 := Tconnect.Create;
connect121.NodeField := 'focusDistance';
connect121.ProtoField := 'focusDistance';
{ .AddConnect }
IS107.Connect := connect121;
connect122 := Tconnect.Create;
connect122.NodeField := 'isActive';
connect122.ProtoField := 'isActive';
{ .AddConnect }
IS107.Connect := connect122;
connect123 := Tconnect.Create;
connect123.NodeField := 'totalDuration';
connect123.ProtoField := 'totalDuration';
{ .AddConnect }
IS107.Connect := connect123;
connect124 := Tconnect.Create;
connect124.NodeField := 'offlineRender';
connect124.ProtoField := 'offlineRender';
{ .AddConnect }
IS107.Connect := connect124;
connect125 := Tconnect.Create;
connect125.NodeField := 'traceEnabled';
connect125.ProtoField := 'traceEnabled';
{ .AddConnect }
IS107.Connect := connect125;
{ .SetIS }
Script70.IS := IS107;

Script70.SetSourceCode('''ecmascript:\n"+
"function initialize () // CameraScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n\\n    NavInfoNode.avatarSize[0]   = nearClipPlane;\\n\\n    // remaining setups deferred to invocation of checkShots() method\\n    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\\n    alwaysPrint ('initialize complete');\\n}\\n\\nfunction checkShots (eventValue)\\n{\\n    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\\n\\n    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\\n    totalDuration= 0;\\n    shotCount  = shots.length;\\n    movesCount = 0;\\n    for (i = 0; i < shotCount; i++) // shots index\\n    {\\n       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\\n       movesCount   += shots[i].moves.length;\\n       totalDuration = totalDuration + shots[i].shotDuration;\\n       if (shots[i].moves.length == 0)\\n       {\\n          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\\n       }\\n    }\\n    // size checks before proceeding\\n    if (shotCount == 0)\\n    {\\n       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\\n       return;\\n    }\\n    else if (movesCount == 0)\\n    {\\n       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\\n       return;\\n    }\\n    else if (totalDuration == 0)\\n    {\\n       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\\n       return;\\n    }\\n    tracePrint ('number of contained CameraShot nodes=' + shotCount);\\n    tracePrint ('number of contained CameraMove nodes=' + movesCount);\\n    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\\n\\n    // compute interpolators\\n    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\\n    for (i = 0; i < shotCount; i++) // shots index\\n    {\\n        if (i==0) // initial entries\\n        {\\n           key[0]                   = 0.0; // no previous move\\n           keyValuePosition[0]      = shots[i].initialPosition;\\n           keyValueOrientation[0]   = shots[i].initialOrientation;\\n        }\\n        else     // new shot repositions, reorients camera as clean break from preceding shot/move\\n        {\\n           key[k+1]                 = key[k]; // start from end from previous move\\n           keyValuePosition[k+1]    = shots[i].initialPosition;\\n           keyValueOrientation[k+1] = shots[i].initialOrientation;\\n           k++;\\n        }\\n        tracePrint (shots[i].description);\\n        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\\n\\n        for (j = 0; j < shots[i].moves.length; j++) // moves index\\n        {\\n            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\\n            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\\n            //  tracePrint ('durationFloat=' + durationFloat);\\n            key[k+1]               = key[k] + (durationFloat / totalDuration);\\n            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\\n            if (!animated)\\n            {\\n                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\\n            }\\n            else\\n            {\\n                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\\n                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\\n\\n                // test if difference vector is zero, if so maintain previous rotation\\n                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\\n                if (shotVector.length() >= 0)\\n                {\\n                    // default view direction is along -Z axis\\n                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\\n                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\\n                }\\n                else // note (k > 0)\\n                {\\n                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\\n                }\\n\\n                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\\n                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\\n                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\\n                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\\n                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\\n                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\\n            }\\n            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\\n\\n            // check animated parameter:  set true if any of moves are tracking moves\\n            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\\n         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\\n\\n            // intermediate trace\\n            tracePrint ('                key=' + key);\\n            tracePrint ('   keyValuePosition=' + keyValuePosition);\\n            tracePrint ('keyValueOrientation=' + keyValueOrientation);\\n            tracePrint ('- ' + shots[i].moves[j].description);\\n        }\\n    }\\n    tracePrint ('                key=' + key);\\n    tracePrint ('   keyValuePosition=' + keyValuePosition);\\n    tracePrint ('keyValueOrientation=' + keyValueOrientation);\\n    if (key.length != keyValuePosition.length)\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  'keyValuePosition.length=' + keyValuePosition.length);\\n    }\\n    if (key.length != keyValueOrientation.length)\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  'keyValueOrientation.length=' + keyValueOrientation.length);\\n    }\\n    if (key.length != (shotCount + movesCount))\\n    {\\n      alwaysPrint ('warning: internal error during array construction, ' +\\n                  'key.length=' + key.length + ' must equal ' +\\n                  '(shotCount + movesCount)=' + (shotCount + movesCount));\\n    }\\n    tracePrint ('           animated=' + animated);\\n    // set node values\\n    CameraPI.key      = key;\\n    CameraOI.key      = key;\\n    CameraPI.keyValue = keyValuePosition;\\n    CameraOI.keyValue = keyValueOrientation;\\n\\n    if (!animated) // output results\\n    {\\n        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n    }\\n    tracePrint ('checkShots() complete');\\n}\\n\\nfunction stripBrackets (fieldArray)\\n{\\n    // some browsers add brackets to array output strings, this function strips them\\n    outputString = '';\\n    for (i = 0; i < fieldArray.length; i++)\\n    {\\n       outputString += fieldArray[i].toString();\\n       if (i < fieldArray.length - 1) outputString += ' ';\\n    }\\n    return outputString;\\n}\\n\\nfunction set_fraction (eventValue, timestamp) // input event received for inputOnly field\\n{\\n   // traceEnabled = false;  // for testing purposes\\n\\n   // if Camera is being animated, immediately recompute interpolator settings\\n   if (animated) checkShots (true);\\n\\n   // trace progress on console with reduced output frequency\\n   if (frameCount == 0)\\n   {\\n      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\\n      startTime      = timestamp;\\n      priorTraceTime = timestamp;\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n      }\\n   }\\n   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\\n   {\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n      priorTraceTime = timestamp;\\n\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\\n        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\\n      }\\n   }\\n   if (eventValue == 0)\\n   {\\n      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\\n      frameCount++;\\n   }\\n   else if (eventValue == 1)\\n   {\\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\\n      if (animated) // output results\\n      {\\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\\n      }\\n      alwaysPrint ('Animation loop complete.');\\n      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\\n   }\\n   else\\n   {\\n      frameCount++;\\n   }\\n}\\n\\nfunction set_bind (eventValue) // input event received for inputOnly field\\n{\\n   // need to ensure CameraShot nodes are properly initialized\\n   if (initialized == false)\\n   {\\n      checkShots (true);\\n      initialized = true;\\n   }\\n   if (eventValue)\\n   {\\n       tracePrint ('Camera has been bound');\\n   }\\n   else\\n   {\\n       tracePrint ('Camera has been unbound');\\n   }\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_position (eventValue) // input event received for inputOutput field\\n{\\n    position = eventValue;\\n}\\n\\nfunction set_orientation (eventValue) // input event received for inputOutput field\\n{\\n    orientation = eventValue;\\n}\\n\\nfunction set_fieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    fieldOfView = eventValue;\\n}\\n\\nfunction set_nearClipPlane (eventValue) // input event received for inputOutput field\\n{\\n    nearClipPlane = eventValue;\\n}\\n\\nfunction set_farClipPlane (eventValue) // input event received for inputOutput field\\n{\\n    farClipPlane = eventValue;\\n}\\n\\nfunction set_shots (eventValue) // input event received for inputOutput field\\n{\\n    shots = eventValue;\\n}\\n\\nfunction set_filterColor (eventValue) // input event received for inputOutput field\\n{\\n    filterColor = eventValue;\\n}\\n\\nfunction set_filterTransparency (eventValue) // input event received for inputOutput field\\n{\\n    filterTransparency = eventValue;\\n}\\n\\nfunction set_upVector (eventValue) // input event received for inputOutput field\\n{\\n    upVector = eventValue;\\n}\\n\\nfunction set_fStop (eventValue) // input event received for inputOutput field\\n{\\n    fStop = eventValue;\\n}\\n\\nfunction set_focusDistance (eventValue) // input event received for inputOutput field\\n{\\n    focusDistance = eventValue;\\n}\\n\\nfunction set_offlineRender (eventValue) // input event received for inputOutput field\\n{\\n    offlineRender = eventValue;\\n}\\n\\nfunction set_key (eventValue) // input event received for inputOutput field\\n{\\n    key = eventValue;\\n}\\n\\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\\n{\\n    keyValuePosition = eventValue;\\n}\\n\\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\\n{\\n    keyValueOrientation = eventValue;\\n}\\n\\nfunction set_animated (eventValue) // input event received for inputOutput field\\n{\\n    animated = eventValue;\\n}\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\nfunction alwaysPrint (outputValue)\\n{\\n    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[Camera] ' + outputString + '\\n');\n"+
"}''');
{ .AddScript }
X3DPrototype42.Script := Script70;
X3DPrototype42.AddRoute(Script70.FdPosition, Viewpoint43.FdPosition);
{ .AddX3DRoute }
X3DPrototype42.AddRoute(Script70.FdOrientation, Viewpoint43.FdOrientation);
{ .AddX3DRoute }
X3DPrototype42.AddRoute(Script70.FdIsactive, Viewpoint43.EventSet_bind);
{ .AddX3DRoute }
X3DPrototype42.AddRoute(Script70.FdIsactive, NavigationInfo52.EventSet_bind);
{ .AddX3DRoute }
X3DPrototype42.AddRoute(Script70.FdIsactive, DirectionalLight57.FdOn);
{ .AddX3DRoute }
{ .AddX3DPrototype }
X3DPrototype17.X3DPrototype := X3DPrototype42;
{ .AddX3DPrototype }
Group16.X3DPrototype := X3DPrototype17;
{ =============== CameraShot ============== }
X3DPrototype131 := TX3DPrototype.Create;
X3DPrototype131.NameField := 'CameraShot';
X3DPrototype131.Appinfo := 'CameraShot collects a specific set of CameraMovement animations that make up an individual shot.';
X3DInterfaceDeclaration132 := TX3DInterfaceDeclaration.Create(nil);
X3DField133 := TX3DField.Create;
X3DField133.NameField := 'description';
X3DField133.AccessType := 'inputOutput';
X3DField133.Appinfo := 'Text description to be displayed for this CameraShot';
X3DField133.Type := 'SFString';
{ .SetX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField133;
X3DField134 := TX3DField.Create;
X3DField134.NameField := 'enabled';
X3DField134.AccessType := 'inputOutput';
X3DField134.Appinfo := 'Whether this CameraShot can be activated';
X3DField134.Type := 'SFBool';
X3DField134.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField134;
X3DField135 := TX3DField.Create;
X3DField135.NameField := 'moves';
X3DField135.AccessType := 'inputOutput';
X3DField135.Appinfo := 'Set of CameraMovement nodes';
X3DField135.Type := 'MFNode';
{ initializing CameraMovement nodes are inserted here by scene author using ProtoInstance }
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField135;
X3DField136 := TX3DField.Create;
X3DField136.NameField := 'initialPosition';
X3DField136.AccessType := 'inputOutput';
X3DField136.Appinfo := 'Setup to reinitialize camera position for this shot';
X3DField136.Type := 'SFVec3f';
X3DField136.Value := '0 0 10';
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField136;
X3DField137 := TX3DField.Create;
X3DField137.NameField := 'initialOrientation';
X3DField137.AccessType := 'inputOutput';
X3DField137.Appinfo := 'Setup to reinitialize camera rotation for this shot';
X3DField137.Type := 'SFRotation';
X3DField137.Value := '0 0 1 0';
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField137;
X3DField138 := TX3DField.Create;
X3DField138.NameField := 'initialAimPoint';
X3DField138.AccessType := 'inputOutput';
X3DField138.Appinfo := 'Setup to reinitialize aimpoint (relative location for camera direction) for this shot';
X3DField138.Type := 'SFVec3f';
X3DField138.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField138;
X3DField139 := TX3DField.Create;
X3DField139.NameField := 'initialFieldOfView';
X3DField139.AccessType := 'inputOutput';
X3DField139.Appinfo := 'pi/4';
X3DField139.Type := 'SFFloat';
X3DField139.Value := '0.7854';
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField139;
X3DField140 := TX3DField.Create;
X3DField140.NameField := 'initialFStop';
X3DField140.AccessType := 'inputOutput';
X3DField140.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
X3DField140.Type := 'SFFloat';
X3DField140.Value := '5.6';
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField140;
X3DField141 := TX3DField.Create;
X3DField141.NameField := 'initialFocusDistance';
X3DField141.AccessType := 'inputOutput';
X3DField141.Appinfo := 'Distance to focal plane of sharpest focus';
X3DField141.Type := 'SFFloat';
X3DField141.Value := '10';
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField141;
X3DField142 := TX3DField.Create;
X3DField142.NameField := 'shotDuration';
X3DField142.AccessType := 'outputOnly';
X3DField142.Appinfo := 'Subtotal duration of contained CameraMovement move durations';
X3DField142.Type := 'SFTime';
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField142;
X3DField143 := TX3DField.Create;
X3DField143.NameField := 'isActive';
X3DField143.AccessType := 'outputOnly';
X3DField143.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
X3DField143.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField143;
X3DField144 := TX3DField.Create;
X3DField144.NameField := 'traceEnabled';
X3DField144.AccessType := 'initializeOnly';
X3DField144.Appinfo := 'enable console output to trace script computations and prototype progress';
X3DField144.Type := 'SFBool';
X3DField144.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration132.X3DField := X3DField144;
{ .SetX3DInterfaceDeclaration }
X3DPrototype131.X3DInterfaceDeclaration := X3DInterfaceDeclaration132;
X3DPrototype145 := TX3DPrototype.Create;
Script146 := TScriptNode.Create;
Script146.DirectOutput := True;
Script146.MustEvaluate := True;
X3DField147 := TX3DField.Create;
X3DField147.NameField := 'description';
X3DField147.AccessType := 'inputOutput';
X3DField147.Appinfo := 'Text description to be displayed for this CameraShot';
X3DField147.Type := 'SFString';
{ .SetX3DField }
Script146.X3DField := X3DField147;
X3DField148 := TX3DField.Create;
X3DField148.NameField := 'enabled';
X3DField148.AccessType := 'inputOutput';
X3DField148.Appinfo := 'Whether this CameraShot can be activated';
X3DField148.Type := 'SFBool';
{ .AddX3DField }
Script146.X3DField := X3DField148;
X3DField149 := TX3DField.Create;
X3DField149.NameField := 'moves';
X3DField149.AccessType := 'inputOutput';
X3DField149.Appinfo := 'Set of CameraMovement nodes';
X3DField149.Type := 'MFNode';
{ initialization nodes (if any) go here }
{ .AddX3DField }
Script146.X3DField := X3DField149;
X3DField150 := TX3DField.Create;
X3DField150.NameField := 'initialPosition';
X3DField150.AccessType := 'inputOutput';
X3DField150.Appinfo := 'Setup to reinitialize camera position for this shot';
X3DField150.Type := 'SFVec3f';
{ .AddX3DField }
Script146.X3DField := X3DField150;
X3DField151 := TX3DField.Create;
X3DField151.NameField := 'initialOrientation';
X3DField151.AccessType := 'inputOutput';
X3DField151.Appinfo := 'Setup to reinitialize camera rotation for this shot';
X3DField151.Type := 'SFRotation';
{ .AddX3DField }
Script146.X3DField := X3DField151;
X3DField152 := TX3DField.Create;
X3DField152.NameField := 'initialAimPoint';
X3DField152.AccessType := 'inputOutput';
X3DField152.Appinfo := 'Setup to reinitialize aimpoint (relative location for camera direction) for this shot';
X3DField152.Type := 'SFVec3f';
{ .AddX3DField }
Script146.X3DField := X3DField152;
X3DField153 := TX3DField.Create;
X3DField153.NameField := 'initialFieldOfView';
X3DField153.AccessType := 'inputOutput';
X3DField153.Appinfo := 'pi/4';
X3DField153.Type := 'SFFloat';
{ .AddX3DField }
Script146.X3DField := X3DField153;
X3DField154 := TX3DField.Create;
X3DField154.NameField := 'initialFStop';
X3DField154.AccessType := 'inputOutput';
X3DField154.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
X3DField154.Type := 'SFFloat';
{ .AddX3DField }
Script146.X3DField := X3DField154;
X3DField155 := TX3DField.Create;
X3DField155.NameField := 'initialFocusDistance';
X3DField155.AccessType := 'inputOutput';
X3DField155.Appinfo := 'Distance to focal plane of sharpest focus';
X3DField155.Type := 'SFFloat';
{ .AddX3DField }
Script146.X3DField := X3DField155;
X3DField156 := TX3DField.Create;
X3DField156.NameField := 'shotDuration';
X3DField156.AccessType := 'outputOnly';
X3DField156.Appinfo := 'Subtotal duration of contained CameraMovement move durations';
X3DField156.Type := 'SFTime';
{ .AddX3DField }
Script146.X3DField := X3DField156;
X3DField157 := TX3DField.Create;
X3DField157.NameField := 'isActive';
X3DField157.AccessType := 'outputOnly';
X3DField157.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
X3DField157.Type := 'SFBool';
{ .AddX3DField }
Script146.X3DField := X3DField157;
X3DField158 := TX3DField.Create;
X3DField158.NameField := 'traceEnabled';
X3DField158.AccessType := 'initializeOnly';
X3DField158.Appinfo := 'enable console output to trace script computations and prototype progress';
X3DField158.Type := 'SFBool';
{ .AddX3DField }
Script146.X3DField := X3DField158;
X3DField159 := TX3DField.Create;
X3DField159.NameField := 'key';
X3DField159.AccessType := 'inputOutput';
X3DField159.Appinfo := 'key array for interpolators';
X3DField159.Type := 'MFFloat';
{ .AddX3DField }
Script146.X3DField := X3DField159;
X3DField160 := TX3DField.Create;
X3DField160.NameField := 'keyValuePosition';
X3DField160.AccessType := 'inputOutput';
X3DField160.Appinfo := 'keyValue array for PositionInterpolator';
X3DField160.Type := 'MFVec3f';
{ .AddX3DField }
Script146.X3DField := X3DField160;
X3DField161 := TX3DField.Create;
X3DField161.NameField := 'keyValueOrientation';
X3DField161.AccessType := 'inputOutput';
X3DField161.Appinfo := 'keyValue array for OrientationInterpolator';
X3DField161.Type := 'MFRotation';
{ .AddX3DField }
Script146.X3DField := X3DField161;
IS162 := TIS.Create;
connect163 := Tconnect.Create;
connect163.NodeField := 'description';
connect163.ProtoField := 'description';
{ .AddConnect }
IS162.Connect := connect163;
connect164 := Tconnect.Create;
connect164.NodeField := 'enabled';
connect164.ProtoField := 'enabled';
{ .AddConnect }
IS162.Connect := connect164;
connect165 := Tconnect.Create;
connect165.NodeField := 'moves';
connect165.ProtoField := 'moves';
{ .AddConnect }
IS162.Connect := connect165;
connect166 := Tconnect.Create;
connect166.NodeField := 'initialPosition';
connect166.ProtoField := 'initialPosition';
{ .AddConnect }
IS162.Connect := connect166;
connect167 := Tconnect.Create;
connect167.NodeField := 'initialOrientation';
connect167.ProtoField := 'initialOrientation';
{ .AddConnect }
IS162.Connect := connect167;
connect168 := Tconnect.Create;
connect168.NodeField := 'initialAimPoint';
connect168.ProtoField := 'initialAimPoint';
{ .AddConnect }
IS162.Connect := connect168;
connect169 := Tconnect.Create;
connect169.NodeField := 'initialFieldOfView';
connect169.ProtoField := 'initialFieldOfView';
{ .AddConnect }
IS162.Connect := connect169;
connect170 := Tconnect.Create;
connect170.NodeField := 'initialFStop';
connect170.ProtoField := 'initialFStop';
{ .AddConnect }
IS162.Connect := connect170;
connect171 := Tconnect.Create;
connect171.NodeField := 'initialFocusDistance';
connect171.ProtoField := 'initialFocusDistance';
{ .AddConnect }
IS162.Connect := connect171;
connect172 := Tconnect.Create;
connect172.NodeField := 'shotDuration';
connect172.ProtoField := 'shotDuration';
{ .AddConnect }
IS162.Connect := connect172;
connect173 := Tconnect.Create;
connect173.NodeField := 'isActive';
connect173.ProtoField := 'isActive';
{ .AddConnect }
IS162.Connect := connect173;
connect174 := Tconnect.Create;
connect174.NodeField := 'traceEnabled';
connect174.ProtoField := 'traceEnabled';
{ .AddConnect }
IS162.Connect := connect174;
{ .SetIS }
Script146.IS := IS162;

Script146.SetSourceCode('''ecmascript:\n"+
"function initialize () // CameraShotScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n\\n    // compute shotDuration by summing durations from contained CameraMovement nodes\\n    shotDuration = 0;\\n    for (i = 0; i < moves.length; i++)\\n    {\\n        shotDuration = shotDuration + moves[i].duration;\\n    }\\n    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\\n\\n//  tracePrint ('... initialize() complete');\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_moves (eventValue) // input event received for inputOutput field\\n{\\n    moves = eventValue;\\n}\\n\\nfunction set_initialPosition (eventValue) // input event received for inputOutput field\\n{\\n    initialPosition = eventValue;\\n}\\n\\nfunction set_initialOrientation (eventValue) // input event received for inputOutput field\\n{\\n    initialOrientation = eventValue;\\n}\\n\\nfunction set_initialAimPoint (eventValue) // input event received for inputOutput field\\n{\\n    initialAimPoint = eventValue;\\n}\\n\\nfunction set_initialFieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    initialFieldOfView = eventValue;\\n}\\n\\nfunction set_initialFStop (eventValue) // input event received for inputOutput field\\n{\\n    initialFStop = eventValue;\\n}\\n\\nfunction set_initialFocusDistance (eventValue) // input event received for inputOutput field\\n{\\n    initialFocusDistance = eventValue;\\n}\\n\\nfunction set_key (eventValue) // input event received for inputOutput field\\n{\\n    key = eventValue;\\n}\\n\\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\\n{\\n    keyValuePosition = eventValue;\\n}\\n\\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\\n{\\n    keyValueOrientation = eventValue;\\n}\\n\\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[CameraShot] ' + outputString + '\\n');\n"+
"}''');
{ .SetScript }
X3DPrototype145.Script := Script146;
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
{ .AddX3DPrototype }
X3DPrototype131.X3DPrototype := X3DPrototype145;
{ .AddX3DPrototype }
Group16.X3DPrototype := X3DPrototype131;
{ =============== CameraMovement ============== }
X3DPrototype175 := TX3DPrototype.Create;
X3DPrototype175.NameField := 'CameraMovement';
X3DPrototype175.Appinfo := 'CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.';
X3DInterfaceDeclaration176 := TX3DInterfaceDeclaration.Create(nil);
X3DField177 := TX3DField.Create;
X3DField177.NameField := 'description';
X3DField177.AccessType := 'inputOutput';
X3DField177.Appinfo := 'Text description to be displayed for this CameraMovement';
X3DField177.Type := 'SFString';
{ .SetX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField177;
X3DField178 := TX3DField.Create;
X3DField178.NameField := 'enabled';
X3DField178.AccessType := 'inputOutput';
X3DField178.Appinfo := 'Whether this CameraMovement can be activated';
X3DField178.Type := 'SFBool';
X3DField178.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField178;
X3DField179 := TX3DField.Create;
X3DField179.NameField := 'duration';
X3DField179.AccessType := 'inputOutput';
X3DField179.Appinfo := 'Duration in seconds for this move';
X3DField179.Type := 'SFFloat';
X3DField179.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField179;
X3DField180 := TX3DField.Create;
X3DField180.NameField := 'goalPosition';
X3DField180.AccessType := 'inputOutput';
X3DField180.Appinfo := 'Goal camera position for this move';
X3DField180.Type := 'SFVec3f';
X3DField180.Value := '0 0 10';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField180;
X3DField181 := TX3DField.Create;
X3DField181.NameField := 'goalOrientation';
X3DField181.AccessType := 'inputOutput';
X3DField181.Appinfo := 'Goal camera rotation for this move';
X3DField181.Type := 'SFRotation';
X3DField181.Value := '0 0 1 0';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField181;
X3DField182 := TX3DField.Create;
X3DField182.NameField := 'tracking';
X3DField182.AccessType := 'inputOutput';
X3DField182.Appinfo := 'Whether or not camera direction is tracking towards the aimPoint';
X3DField182.Type := 'SFBool';
X3DField182.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField182;
X3DField183 := TX3DField.Create;
X3DField183.NameField := 'goalAimPoint';
X3DField183.AccessType := 'inputOutput';
X3DField183.Appinfo := 'Goal aimPoint for this move, ignored if tracking=false';
X3DField183.Type := 'SFVec3f';
X3DField183.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField183;
X3DField184 := TX3DField.Create;
X3DField184.NameField := 'goalFieldOfView';
X3DField184.AccessType := 'inputOutput';
X3DField184.Appinfo := 'Goal fieldOfView for this move';
X3DField184.Type := 'SFFloat';
X3DField184.Value := '0.7854';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField184;
X3DField185 := TX3DField.Create;
X3DField185.NameField := 'goalFStop';
X3DField185.AccessType := 'inputOutput';
X3DField185.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
X3DField185.Type := 'SFFloat';
X3DField185.Value := '5.6';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField185;
X3DField186 := TX3DField.Create;
X3DField186.NameField := 'goalFocusDistance';
X3DField186.AccessType := 'inputOutput';
X3DField186.Appinfo := 'Distance to focal plane of sharpest focus';
X3DField186.Type := 'SFFloat';
X3DField186.Value := '10';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField186;
X3DField187 := TX3DField.Create;
X3DField187.NameField := 'isActive';
X3DField187.AccessType := 'outputOnly';
X3DField187.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
X3DField187.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField187;
X3DField188 := TX3DField.Create;
X3DField188.NameField := 'traceEnabled';
X3DField188.AccessType := 'initializeOnly';
X3DField188.Appinfo := 'enable console output to trace script computations and prototype progress';
X3DField188.Type := 'SFBool';
X3DField188.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration176.X3DField := X3DField188;
{ .SetX3DInterfaceDeclaration }
X3DPrototype175.X3DInterfaceDeclaration := X3DInterfaceDeclaration176;
X3DPrototype189 := TX3DPrototype.Create;
{ First node determines node type of this prototype }
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
{ Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events }
Script190 := TScriptNode.Create;
Script190.DirectOutput := True;
Script190.MustEvaluate := True;
X3DField191 := TX3DField.Create;
X3DField191.NameField := 'description';
X3DField191.AccessType := 'inputOutput';
X3DField191.Appinfo := 'Text description to be displayed for this CameraMovement';
X3DField191.Type := 'SFString';
{ .SetX3DField }
Script190.X3DField := X3DField191;
X3DField192 := TX3DField.Create;
X3DField192.NameField := 'enabled';
X3DField192.AccessType := 'inputOutput';
X3DField192.Appinfo := 'Whether this CameraMovement can be activated';
X3DField192.Type := 'SFBool';
{ .AddX3DField }
Script190.X3DField := X3DField192;
X3DField193 := TX3DField.Create;
X3DField193.NameField := 'duration';
X3DField193.AccessType := 'inputOutput';
X3DField193.Appinfo := 'Duration in seconds for this move';
X3DField193.Type := 'SFFloat';
{ .AddX3DField }
Script190.X3DField := X3DField193;
X3DField194 := TX3DField.Create;
X3DField194.NameField := 'goalPosition';
X3DField194.AccessType := 'inputOutput';
X3DField194.Appinfo := 'Goal camera position for this move';
X3DField194.Type := 'SFVec3f';
{ .AddX3DField }
Script190.X3DField := X3DField194;
X3DField195 := TX3DField.Create;
X3DField195.NameField := 'goalOrientation';
X3DField195.AccessType := 'inputOutput';
X3DField195.Appinfo := 'Goal camera rotation for this move';
X3DField195.Type := 'SFRotation';
{ .AddX3DField }
Script190.X3DField := X3DField195;
X3DField196 := TX3DField.Create;
X3DField196.NameField := 'tracking';
X3DField196.AccessType := 'inputOutput';
X3DField196.Appinfo := 'Whether or not camera direction is tracking towards the aimPoint';
X3DField196.Type := 'SFBool';
{ .AddX3DField }
Script190.X3DField := X3DField196;
X3DField197 := TX3DField.Create;
X3DField197.NameField := 'goalAimPoint';
X3DField197.AccessType := 'inputOutput';
X3DField197.Appinfo := 'Goal aimPoint for this move, ignored if tracking=false';
X3DField197.Type := 'SFVec3f';
{ .AddX3DField }
Script190.X3DField := X3DField197;
X3DField198 := TX3DField.Create;
X3DField198.NameField := 'goalFieldOfView';
X3DField198.AccessType := 'inputOutput';
X3DField198.Appinfo := 'Goal fieldOfView for this move';
X3DField198.Type := 'SFFloat';
{ .AddX3DField }
Script190.X3DField := X3DField198;
X3DField199 := TX3DField.Create;
X3DField199.NameField := 'goalFStop';
X3DField199.AccessType := 'inputOutput';
X3DField199.Appinfo := 'Focal length divided effective aperture diameter indicating width of focal plane';
X3DField199.Type := 'SFFloat';
{ .AddX3DField }
Script190.X3DField := X3DField199;
X3DField200 := TX3DField.Create;
X3DField200.NameField := 'goalFocusDistance';
X3DField200.AccessType := 'inputOutput';
X3DField200.Appinfo := 'Distance to focal plane of sharpest focus';
X3DField200.Type := 'SFFloat';
{ .AddX3DField }
Script190.X3DField := X3DField200;
X3DField201 := TX3DField.Create;
X3DField201.NameField := 'isActive';
X3DField201.AccessType := 'outputOnly';
X3DField201.Appinfo := 'Mark start/stop with true/false output respectively useful to trigger external animations';
X3DField201.Type := 'SFBool';
{ .AddX3DField }
Script190.X3DField := X3DField201;
X3DField202 := TX3DField.Create;
X3DField202.NameField := 'traceEnabled';
X3DField202.AccessType := 'initializeOnly';
X3DField202.Appinfo := 'enable console output to trace script computations and prototype progress';
X3DField202.Type := 'SFBool';
{ .AddX3DField }
Script190.X3DField := X3DField202;
IS203 := TIS.Create;
connect204 := Tconnect.Create;
connect204.NodeField := 'description';
connect204.ProtoField := 'description';
{ .AddConnect }
IS203.Connect := connect204;
connect205 := Tconnect.Create;
connect205.NodeField := 'enabled';
connect205.ProtoField := 'enabled';
{ .AddConnect }
IS203.Connect := connect205;
connect206 := Tconnect.Create;
connect206.NodeField := 'duration';
connect206.ProtoField := 'duration';
{ .AddConnect }
IS203.Connect := connect206;
connect207 := Tconnect.Create;
connect207.NodeField := 'goalPosition';
connect207.ProtoField := 'goalPosition';
{ .AddConnect }
IS203.Connect := connect207;
connect208 := Tconnect.Create;
connect208.NodeField := 'goalOrientation';
connect208.ProtoField := 'goalOrientation';
{ .AddConnect }
IS203.Connect := connect208;
connect209 := Tconnect.Create;
connect209.NodeField := 'tracking';
connect209.ProtoField := 'tracking';
{ .AddConnect }
IS203.Connect := connect209;
connect210 := Tconnect.Create;
connect210.NodeField := 'goalAimPoint';
connect210.ProtoField := 'goalAimPoint';
{ .AddConnect }
IS203.Connect := connect210;
connect211 := Tconnect.Create;
connect211.NodeField := 'goalFieldOfView';
connect211.ProtoField := 'goalFieldOfView';
{ .AddConnect }
IS203.Connect := connect211;
connect212 := Tconnect.Create;
connect212.NodeField := 'goalFStop';
connect212.ProtoField := 'goalFStop';
{ .AddConnect }
IS203.Connect := connect212;
connect213 := Tconnect.Create;
connect213.NodeField := 'goalFocusDistance';
connect213.ProtoField := 'goalFocusDistance';
{ .AddConnect }
IS203.Connect := connect213;
connect214 := Tconnect.Create;
connect214.NodeField := 'isActive';
connect214.ProtoField := 'isActive';
{ .AddConnect }
IS203.Connect := connect214;
connect215 := Tconnect.Create;
connect215.NodeField := 'traceEnabled';
connect215.ProtoField := 'traceEnabled';
{ .AddConnect }
IS203.Connect := connect215;
{ .SetIS }
Script190.IS := IS203;

Script190.SetSourceCode('''ecmascript:\n"+
"function initialize () // CameraMovementScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\\n                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\\n                           );\\n    if (duration < 0)\\n    {\\n       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\\n       duration = 0;\\n    }\\n    else if (duration == 0)\\n    {\\n       alwaysPrint ('warning: duration=0, nothing to do!');\\n    }\\n    tracePrint ('... initialize complete');\\n}\\n\\nfunction set_goalAimPoint (eventValue) // input event received for inputOutput field\\n{\\n    goalAimPoint_changed = eventValue;\\n    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\\n\\n    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_duration (eventValue) // input event received for inputOutput field\\n{\\n    duration = eventValue;\\n}\\n\\nfunction set_goalPosition (eventValue) // input event received for inputOutput field\\n{\\n    goalPosition = eventValue;\\n}\\n\\nfunction set_goalOrientation (eventValue) // input event received for inputOutput field\\n{\\n    goalOrientation = eventValue;\\n}\\n\\nfunction set_tracking (eventValue) // input event received for inputOutput field\\n{\\n    tracking = eventValue;\\n}\\n\\nfunction set_goalFieldOfView (eventValue) // input event received for inputOutput field\\n{\\n    goalFieldOfView = eventValue;\\n}\\n\\nfunction set_goalFStop (eventValue) // input event received for inputOutput field\\n{\\n    goalFStop = eventValue;\\n}\\n\\nfunction set_goalFocusDistance (eventValue) // input event received for inputOutput field\\n{\\n    goalFocusDistance = eventValue;\\n}\\n\\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\n\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[CameraMovement] ' + outputString + '\\n');\n"+
"}''');
{ .AddScript }
X3DPrototype189.Script := Script190;
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
{ .AddX3DPrototype }
X3DPrototype175.X3DPrototype := X3DPrototype189;
{ .AddX3DPrototype }
Group16.X3DPrototype := X3DPrototype175;
{ =============== OfflineRender ============== }
X3DPrototype216 := TX3DPrototype.Create;
X3DPrototype216.NameField := 'OfflineRender';
X3DPrototype216.Appinfo := 'OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).';
X3DInterfaceDeclaration217 := TX3DInterfaceDeclaration.Create(nil);
{ TODO non-photorealistic rendering (NPR) parameters }
X3DField218 := TX3DField.Create;
X3DField218.NameField := 'description';
X3DField218.AccessType := 'inputOutput';
X3DField218.Appinfo := 'Text description to be displayed for this OfflineRender';
X3DField218.Type := 'SFString';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField218;
X3DField219 := TX3DField.Create;
X3DField219.NameField := 'enabled';
X3DField219.AccessType := 'inputOutput';
X3DField219.Appinfo := 'Whether this OfflineRender can be activated';
X3DField219.Type := 'SFBool';
X3DField219.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField219;
X3DField220 := TX3DField.Create;
X3DField220.NameField := 'frameRate';
X3DField220.AccessType := 'inputOutput';
X3DField220.Appinfo := 'Frames per second recorded for this rendering';
X3DField220.Type := 'SFFloat';
X3DField220.Value := '30';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField220;
X3DField221 := TX3DField.Create;
X3DField221.NameField := 'frameSize';
X3DField221.AccessType := 'inputOutput';
X3DField221.Appinfo := 'Size of frame in number of pixels width and height';
X3DField221.Type := 'SFVec2f';
X3DField221.Value := '640 480';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField221;
X3DField222 := TX3DField.Create;
X3DField222.NameField := 'pixelAspectRatio';
X3DField222.AccessType := 'inputOutput';
X3DField222.Appinfo := 'Relative dimensions of pixel height/width typically 1.33 or 1';
X3DField222.Type := 'SFFloat';
X3DField222.Value := '1.33';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField222;
X3DField223 := TX3DField.Create;
X3DField223.NameField := 'set_startTime';
X3DField223.AccessType := 'inputOnly';
X3DField223.Appinfo := 'Begin render operation';
X3DField223.Type := 'SFTime';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField223;
X3DField224 := TX3DField.Create;
X3DField224.NameField := 'progress';
X3DField224.AccessType := 'outputOnly';
X3DField224.Appinfo := 'Progress performing render operation (0..1)';
X3DField224.Type := 'SFFloat';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField224;
X3DField225 := TX3DField.Create;
X3DField225.NameField := 'renderCompleteTime';
X3DField225.AccessType := 'outputOnly';
X3DField225.Appinfo := 'Render operation complete';
X3DField225.Type := 'SFTime';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField225;
X3DField226 := TX3DField.Create;
X3DField226.NameField := 'movieFormat';
X3DField226.AccessType := 'initializeOnly';
X3DField226.Appinfo := 'Format of rendered output movie (mpeg mp4 etc.), use first supported format';
X3DField226.Type := 'MFString';
X3DField226.Value := '\'mpeg\'';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField226;
X3DField227 := TX3DField.Create;
X3DField227.NameField := 'imageFormat';
X3DField227.AccessType := 'initializeOnly';
X3DField227.Appinfo := 'Format of rendered output images (png jpeg gif tiff etc.) use first supported format';
X3DField227.Type := 'MFString';
X3DField227.Value := '\'png\'';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField227;
X3DField228 := TX3DField.Create;
X3DField228.NameField := 'traceEnabled';
X3DField228.AccessType := 'initializeOnly';
X3DField228.Appinfo := 'enable console output to trace script computations and prototype progress';
X3DField228.Type := 'SFBool';
X3DField228.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration217.X3DField := X3DField228;
{ .SetX3DInterfaceDeclaration }
X3DPrototype216.X3DInterfaceDeclaration := X3DInterfaceDeclaration217;
X3DPrototype229 := TX3DPrototype.Create;
{ First node determines node type of this prototype }
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
Script230 := TScriptNode.Create;
Script230.MustEvaluate := True;
X3DField231 := TX3DField.Create;
X3DField231.NameField := 'description';
X3DField231.AccessType := 'inputOutput';
X3DField231.Appinfo := 'Text description to be displayed for this OfflineRender';
X3DField231.Type := 'SFString';
{ .SetX3DField }
Script230.X3DField := X3DField231;
X3DField232 := TX3DField.Create;
X3DField232.NameField := 'enabled';
X3DField232.AccessType := 'inputOutput';
X3DField232.Appinfo := 'Whether this OfflineRender can be activated';
X3DField232.Type := 'SFBool';
{ .AddX3DField }
Script230.X3DField := X3DField232;
X3DField233 := TX3DField.Create;
X3DField233.NameField := 'frameRate';
X3DField233.AccessType := 'inputOutput';
X3DField233.Appinfo := 'Frames per second recorded for this rendering';
X3DField233.Type := 'SFFloat';
{ .AddX3DField }
Script230.X3DField := X3DField233;
X3DField234 := TX3DField.Create;
X3DField234.NameField := 'frameSize';
X3DField234.AccessType := 'inputOutput';
X3DField234.Appinfo := 'Size of frame in number of pixels width and height';
X3DField234.Type := 'SFVec2f';
{ .AddX3DField }
Script230.X3DField := X3DField234;
X3DField235 := TX3DField.Create;
X3DField235.NameField := 'pixelAspectRatio';
X3DField235.AccessType := 'inputOutput';
X3DField235.Appinfo := 'Relative dimensions of pixel height/width typically 1.33 or 1';
X3DField235.Type := 'SFFloat';
{ .AddX3DField }
Script230.X3DField := X3DField235;
X3DField236 := TX3DField.Create;
X3DField236.NameField := 'set_startTime';
X3DField236.AccessType := 'inputOnly';
X3DField236.Appinfo := 'Begin render operation';
X3DField236.Type := 'SFTime';
{ .AddX3DField }
Script230.X3DField := X3DField236;
X3DField237 := TX3DField.Create;
X3DField237.NameField := 'progress';
X3DField237.AccessType := 'outputOnly';
X3DField237.Appinfo := 'Progress performing render operation (0..1)';
X3DField237.Type := 'SFFloat';
{ .AddX3DField }
Script230.X3DField := X3DField237;
X3DField238 := TX3DField.Create;
X3DField238.NameField := 'renderCompleteTime';
X3DField238.AccessType := 'outputOnly';
X3DField238.Appinfo := 'Render operation complete';
X3DField238.Type := 'SFTime';
{ .AddX3DField }
Script230.X3DField := X3DField238;
X3DField239 := TX3DField.Create;
X3DField239.NameField := 'movieFormat';
X3DField239.AccessType := 'initializeOnly';
X3DField239.Appinfo := 'Format of rendered output movie (mpeg mp4 etc.)';
X3DField239.Type := 'MFString';
{ .AddX3DField }
Script230.X3DField := X3DField239;
X3DField240 := TX3DField.Create;
X3DField240.NameField := 'imageFormat';
X3DField240.AccessType := 'initializeOnly';
X3DField240.Appinfo := 'Format of rendered output images (png jpeg gif tiff etc.)';
X3DField240.Type := 'MFString';
{ .AddX3DField }
Script230.X3DField := X3DField240;
X3DField241 := TX3DField.Create;
X3DField241.NameField := 'traceEnabled';
X3DField241.AccessType := 'initializeOnly';
X3DField241.Appinfo := 'enable console output to trace script computations and prototype progress';
X3DField241.Type := 'SFBool';
{ .AddX3DField }
Script230.X3DField := X3DField241;
IS242 := TIS.Create;
connect243 := Tconnect.Create;
connect243.NodeField := 'description';
connect243.ProtoField := 'description';
{ .AddConnect }
IS242.Connect := connect243;
connect244 := Tconnect.Create;
connect244.NodeField := 'enabled';
connect244.ProtoField := 'enabled';
{ .AddConnect }
IS242.Connect := connect244;
connect245 := Tconnect.Create;
connect245.NodeField := 'frameRate';
connect245.ProtoField := 'frameRate';
{ .AddConnect }
IS242.Connect := connect245;
connect246 := Tconnect.Create;
connect246.NodeField := 'frameSize';
connect246.ProtoField := 'frameSize';
{ .AddConnect }
IS242.Connect := connect246;
connect247 := Tconnect.Create;
connect247.NodeField := 'pixelAspectRatio';
connect247.ProtoField := 'pixelAspectRatio';
{ .AddConnect }
IS242.Connect := connect247;
connect248 := Tconnect.Create;
connect248.NodeField := 'set_startTime';
connect248.ProtoField := 'set_startTime';
{ .AddConnect }
IS242.Connect := connect248;
connect249 := Tconnect.Create;
connect249.NodeField := 'progress';
connect249.ProtoField := 'progress';
{ .AddConnect }
IS242.Connect := connect249;
connect250 := Tconnect.Create;
connect250.NodeField := 'renderCompleteTime';
connect250.ProtoField := 'renderCompleteTime';
{ .AddConnect }
IS242.Connect := connect250;
connect251 := Tconnect.Create;
connect251.NodeField := 'movieFormat';
connect251.ProtoField := 'movieFormat';
{ .AddConnect }
IS242.Connect := connect251;
connect252 := Tconnect.Create;
connect252.NodeField := 'imageFormat';
connect252.ProtoField := 'imageFormat';
{ .AddConnect }
IS242.Connect := connect252;
connect253 := Tconnect.Create;
connect253.NodeField := 'traceEnabled';
connect253.ProtoField := 'traceEnabled';
{ .AddConnect }
IS242.Connect := connect253;
{ .SetIS }
Script230.IS := IS242;

Script230.SetSourceCode('''ecmascript:\n"+
"function initialize () // OfflineRenderScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\\n\\n    tracePrint ('... initialize complete');\\n}\\n\\nfunction set_description (eventValue) // input event received for inputOutput field\\n{\\n    description = eventValue;\\n}\\n\\nfunction set_enabled (eventValue) // input event received for inputOutput field\\n{\\n    enabled = eventValue;\\n}\\n\\nfunction set_frameRate (eventValue) // input event received for inputOutput field\\n{\\n    frameRate = eventValue;\\n}\\n\\nfunction set_frameSize (eventValue) // input event received for inputOutput field\\n{\\n    frameSize = eventValue;\\n}\\n\\nfunction set_pixelAspectRatio (eventValue) // input event received for inputOutput field\\n{\\n    pixelAspectRatio = eventValue;\\n}\\n\\nfunction set_startTime (eventValue) // input event received for inputOnly field\\n{\\n   // do something with input eventValue;\\n}\\n\\nfunction tracePrint (outputValue)\\n{\\n	if (traceEnabled) alwaysPrint (outputValue);\\n}\\n\\nfunction alwaysPrint (outputValue)\\n{\\n	// try to ensure outputValue is converted to string despite browser idiosyncracies\\n    var outputString = outputValue.toString(); // utility function according to spec\\n    if (outputString == null) outputString = outputValue; // direct cast\\n\\n    if  (description.length > 0)\\n         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\\n    else\\n         Browser.print ('[OfflineRender] ' + outputString + '\\n');\n"+
"}''');
{ .AddScript }
X3DPrototype229.Script := Script230;
{ Add any ROUTEs here, going from Script to other nodes within ProtoBody }
{ .AddX3DPrototype }
X3DPrototype216.X3DPrototype := X3DPrototype229;
{ .AddX3DPrototype }
Group16.X3DPrototype := X3DPrototype216;
{ =============== Launch Prototype Example ============== }
Background254 := TBackgroundNode.Create;
Background254.SetSkyColor([Vector3(0.282353,0.380392,0.470588)]);
{ .AddChildren }
Group16.AddChildren([Background254]);
Anchor255 := TAnchorNode.Create;
Anchor255.Description := 'launch CameraExample scene';
Anchor255.SetUrl(['CameraExamples.x3d','https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d','CameraExamples.wrl','https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl']);
Transform256 := TTransformNode.Create;
Shape257 := TShapeNode.Create;
Text258 := TTextNode.Create;
Text258.SetText(['CameraPrototypes.x3d','defines multiple prototype nodes','Click on this text to see','CameraExamples.x3d scene']);
FontStyle259 := TFontStyleNode.Create;
FontStyle259.Justify := fjMiddle;
FontStyle259.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text258.FontStyle := FontStyle259;
{ .SetGeometry }
Shape257.Geometry := Text258;
Appearance260 := TAppearanceNode.Create;
Material261 := TMaterialNode.Create;
Material261.DiffuseColor := Vector3(1,1,0.2);
{ .SetMaterial }
Appearance260.Material := Material261;
{ .SetAppearance }
Shape257.Appearance := Appearance260;
{ .AddChild }
Transform256.AddChildren([Shape257]);
{ .AddChildren }
Anchor255.AddChildren([Transform256]);
{ .AddChildren }
Group16.AddChildren([Anchor255]);
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;

begin
end.
