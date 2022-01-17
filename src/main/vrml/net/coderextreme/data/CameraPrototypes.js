let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "CameraPrototypes.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman and Jeff Weekley";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "16 March 2009";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "25 October 2016";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "TODO";
meta7.content = "Schematron rules, backed up by initialize() checks";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "BeyondViewpointCameraNodesWeb3D2009.pdf";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "subject";
meta10.content = "Camera nodes for Viewpoint navigation control";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "CameraExamples.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "license";
meta15.content = "../license.html";
head1.meta[13] = meta15;

head = head1;

//=============== Camera ==============
let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Camera" appinfo="Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images." ><ProtoInterface><!--Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields--><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this Camera" type="SFString"></field>
<field name="position" accessType="inputOutput" appinfo="Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated" type="SFVec3f" value="0 0 10"></field>
<field name="orientation" accessType="inputOutput" appinfo="Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated" type="SFRotation" value="0 0 1 0"></field>
<field name="fieldOfView" accessType="inputOutput" appinfo="pi/4" type="SFFloat" value="0.7854"></field>
<field name="set_fraction" accessType="inputOnly" appinfo="input fraction drives interpolators" type="SFFloat"></field>
<field name="set_bind" accessType="inputOnly" appinfo="input event binds or unbinds this Camera" type="SFBool"></field>
<field name="bindTime" accessType="outputOnly" appinfo="output event indicates when this Camera is bound" type="SFTime"></field>
<field name="isBound" accessType="outputOnly" appinfo="output event indicates whether this Camera is bound or unbound" type="SFBool"></field>
<field name="nearClipPlane" accessType="inputOutput" appinfo="Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]" type="SFFloat" value="0.25"></field>
<field name="farClipPlane" accessType="inputOutput" appinfo="Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit" type="SFFloat" value="0"></field>
<field name="shots" accessType="inputOutput" appinfo="Array of CameraShot nodes which in turn contain CameraMovement nodes" type="MFNode"><!--initialization nodes (if any) go here--></field>
<field name="headlight" accessType="inputOutput" appinfo="Whether camera headlight is on or off" type="SFBool" value="true"></field>
<field name="headlightColor" accessType="inputOutput" appinfo="Camera headlight color" type="SFColor" value="1 1 1"></field>
<field name="headlightIntensity" accessType="inputOutput" appinfo="Camera headlight intensity" type="SFFloat" value="1"></field>
<field name="filterColor" accessType="inputOutput" appinfo="Camera filter color that modifies virtual lens capture" type="SFColor" value="1 1 1"></field>
<field name="filterTransparency" accessType="inputOutput" appinfo="Camera filter transparency that modifies virtual lens capture" type="SFFloat" value="1"></field>
<field name="upVector" accessType="inputOutput" appinfo="upVector changes modify camera orientation (and possibly vice versa)" type="SFVec3f" value="0 1 0"></field>
<field name="fStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat" value="5.6"></field>
<field name="focusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat" value="10"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="totalDuration" accessType="outputOnly" appinfo="Total duration of contained enabled CameraShot (and thus CameraMovement) move durations" type="SFTime"></field>
<field name="offlineRender" accessType="inputOutput" appinfo="OfflineRender node" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Viewpoint DEF="CameraViewpoint"><IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="position" protoField="position"></connect>
<connect nodeField="orientation" protoField="orientation"></connect>
<connect nodeField="fieldOfView" protoField="fieldOfView"></connect>
<connect nodeField="set_bind" protoField="set_bind"></connect>
<connect nodeField="bindTime" protoField="bindTime"></connect>
<connect nodeField="isBound" protoField="isBound"></connect>
</IS>
</Viewpoint>
<!--NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation--><NavigationInfo DEF="CameraNavInfo" type="&quot;EXAMINE&quot; &quot;FLY&quot; &quot;ANY&quot;"><IS><connect nodeField="set_bind" protoField="set_bind"></connect>
<connect nodeField="headlight" protoField="headlight"></connect>
<connect nodeField="visibilityLimit" protoField="farClipPlane"></connect>
<!--No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.--></IS>
</NavigationInfo>
<!--this DirectionalLight replaces NavigationInfo headlight in order to add color capability--><DirectionalLight DEF="CameraDirectionalLight" global="true"><!--TODO confirm other default field values match NavigationInfo spec--><IS><connect nodeField="on" protoField="headlight"></connect>
<connect nodeField="color" protoField="headlightColor"></connect>
<connect nodeField="intensity" protoField="headlightIntensity"></connect>
</IS>
</DirectionalLight>
<PositionInterpolator DEF="CameraPositionInterpolator" key="0 1" keyValue="0 0 0 0 0 0"><IS><connect nodeField="set_fraction" protoField="set_fraction"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="CameraOrientationInterpolator" key="0 1" keyValue="0 1 0 0 0 1 0 0"><IS><connect nodeField="set_fraction" protoField="set_fraction"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="value_changed" fromNode="CameraPositionInterpolator" toField="position" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="value_changed" fromNode="CameraOrientationInterpolator" toField="orientation" toNode="CameraViewpoint"></ROUTE>
<Script DEF="CameraScript" directOutput="true" mustEvaluate="true"><!--binding is controlled externally, all camera operations proceed the same regardless of whether bound or not--><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this Camera" type="SFString"></field>
<field name="position" accessType="inputOutput" appinfo="Camera position in local transformation frame" type="SFVec3f"></field>
<field name="orientation" accessType="inputOutput" appinfo="Camera rotation in local transformation frame" type="SFRotation"></field>
<field name="set_fraction" accessType="inputOnly" appinfo="input fraction drives interpolators" type="SFFloat"></field>
<field name="set_bind" accessType="inputOnly" appinfo="input event binds or unbinds this Camera" type="SFBool"></field>
<field name="fieldOfView" accessType="inputOutput" appinfo="pi/4" type="SFFloat"></field>
<field name="nearClipPlane" accessType="inputOutput" appinfo="Vector distance to near clipping plane" type="SFFloat"></field>
<field name="farClipPlane" accessType="inputOutput" appinfo="Vector distance to far clipping plane" type="SFFloat"></field>
<field name="shots" accessType="inputOutput" appinfo="Array of CameraShot nodes which in turn contain CameraMovement nodes" type="MFNode"><!--initialization nodes (if any) go here--></field>
<field name="filterColor" accessType="inputOutput" appinfo="Camera filter color that modifies virtual lens capture" type="SFColor"></field>
<field name="filterTransparency" accessType="inputOutput" appinfo="Camera filter transparency that modifies virtual lens capture" type="SFFloat"></field>
<field name="upVector" accessType="inputOutput" appinfo="upVector changes modify camera orientation (and possibly vice versa)" type="SFVec3f"></field>
<field name="fStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat"></field>
<field name="focusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="totalDuration" accessType="outputOnly" appinfo="Total duration of contained enabled CameraShot (and thus CameraMovement) move durations" type="SFTime"></field>
<field name="offlineRender" accessType="inputOutput" appinfo="OfflineRender node" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="ViewpointNode" accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" type="SFNode"><Viewpoint USE="CameraViewpoint"></Viewpoint>
</field>
<field name="NavInfoNode" accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" type="SFNode"><NavigationInfo USE="CameraNavInfo"></NavigationInfo>
</field>
<field name="CameraPI" accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" type="SFNode"><PositionInterpolator USE="CameraPositionInterpolator"></PositionInterpolator>
</field>
<field name="CameraOI" accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" type="SFNode"><OrientationInterpolator USE="CameraOrientationInterpolator"></OrientationInterpolator>
</field>
<field name="key" accessType="inputOutput" appinfo="key array for interpolators" type="MFFloat"></field>
<field name="keyValuePosition" accessType="inputOutput" appinfo="keyValue array for PositionInterpolator" type="MFVec3f"></field>
<field name="keyValueOrientation" accessType="inputOutput" appinfo="keyValue array for OrientationInterpolator" type="MFRotation"></field>
<field name="animated" accessType="inputOutput" appinfo="whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events" type="SFBool" value="false"></field>
<field name="initialized" accessType="initializeOnly" appinfo="perform checkShots() function once immediately after initialization" type="SFBool" value="false"></field>
<field name="shotCount" accessType="initializeOnly" appinfo="how many CameraShot nodes are contained in shots array" type="SFInt32" value="0"></field>
<field name="movesCount" accessType="initializeOnly" appinfo="how many CameraMove nodes are contained in moves array" type="SFInt32" value="0"></field>
<field name="frameCount" accessType="initializeOnly" appinfo="how many frames were created in current loop" type="SFFloat" value="0"></field>
<field name="startTime" accessType="initializeOnly" appinfo="holding variable" type="SFTime" value="0"></field>
<field name="priorTraceTime" accessType="initializeOnly" appinfo="holding variable" type="SFTime" value="0"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool"></field>
<IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="position" protoField="position"></connect>
<connect nodeField="orientation" protoField="orientation"></connect>
<connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="set_bind" protoField="set_bind"></connect>
<connect nodeField="fieldOfView" protoField="fieldOfView"></connect>
<connect nodeField="nearClipPlane" protoField="nearClipPlane"></connect>
<connect nodeField="farClipPlane" protoField="farClipPlane"></connect>
<connect nodeField="shots" protoField="shots"></connect>
<connect nodeField="filterColor" protoField="filterColor"></connect>
<connect nodeField="filterTransparency" protoField="filterTransparency"></connect>
<connect nodeField="upVector" protoField="upVector"></connect>
<connect nodeField="fStop" protoField="fStop"></connect>
<connect nodeField="focusDistance" protoField="focusDistance"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="totalDuration" protoField="totalDuration"></connect>
<connect nodeField="offlineRender" protoField="offlineRender"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
<#sourceCode/>
</Script>
<ROUTE fromField="position" fromNode="CameraScript" toField="position" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="orientation" fromNode="CameraScript" toField="orientation" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="isActive" fromNode="CameraScript" toField="set_bind" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="isActive" fromNode="CameraScript" toField="set_bind" toNode="CameraNavInfo"></ROUTE>
<ROUTE fromField="isActive" fromNode="CameraScript" toField="on" toNode="CameraDirectionalLight"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Camera";
ProtoDeclare17.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.";
let ProtoInterface18 = browser.currentScene.createNode("ProtoInterface");
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
let field19 = browser.currentScene.createNode("field");
field19.name = "description";
field19.accessType = "inputOutput";
field19.appinfo = "Text description to be displayed for this Camera";
field19.type = "SFString";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "position";
field20.accessType = "inputOutput";
field20.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field20.type = "SFVec3f";
field20.value = "0 0 10";
ProtoInterface18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "orientation";
field21.accessType = "inputOutput";
field21.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field21.type = "SFRotation";
field21.value = "0 0 1 0";
ProtoInterface18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "fieldOfView";
field22.accessType = "inputOutput";
field22.appinfo = "pi/4";
field22.type = "SFFloat";
field22.value = "0.7854";
ProtoInterface18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "set_fraction";
field23.accessType = "inputOnly";
field23.appinfo = "input fraction drives interpolators";
field23.type = "SFFloat";
ProtoInterface18.field[4] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "set_bind";
field24.accessType = "inputOnly";
field24.appinfo = "input event binds or unbinds this Camera";
field24.type = "SFBool";
ProtoInterface18.field[5] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "bindTime";
field25.accessType = "outputOnly";
field25.appinfo = "output event indicates when this Camera is bound";
field25.type = "SFTime";
ProtoInterface18.field[6] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "isBound";
field26.accessType = "outputOnly";
field26.appinfo = "output event indicates whether this Camera is bound or unbound";
field26.type = "SFBool";
ProtoInterface18.field[7] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "nearClipPlane";
field27.accessType = "inputOutput";
field27.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]";
field27.type = "SFFloat";
field27.value = "0.25";
ProtoInterface18.field[8] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "farClipPlane";
field28.accessType = "inputOutput";
field28.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit";
field28.type = "SFFloat";
field28.value = "0";
ProtoInterface18.field[9] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "shots";
field29.accessType = "inputOutput";
field29.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field29.type = "MFNode";
//initialization nodes (if any) go here
ProtoInterface18.field[10] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "headlight";
field30.accessType = "inputOutput";
field30.appinfo = "Whether camera headlight is on or off";
field30.type = "SFBool";
field30.value = "true";
ProtoInterface18.field[11] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "headlightColor";
field31.accessType = "inputOutput";
field31.appinfo = "Camera headlight color";
field31.type = "SFColor";
field31.value = "1 1 1";
ProtoInterface18.field[12] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "headlightIntensity";
field32.accessType = "inputOutput";
field32.appinfo = "Camera headlight intensity";
field32.type = "SFFloat";
field32.value = "1";
ProtoInterface18.field[13] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "filterColor";
field33.accessType = "inputOutput";
field33.appinfo = "Camera filter color that modifies virtual lens capture";
field33.type = "SFColor";
field33.value = "1 1 1";
ProtoInterface18.field[14] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "filterTransparency";
field34.accessType = "inputOutput";
field34.appinfo = "Camera filter transparency that modifies virtual lens capture";
field34.type = "SFFloat";
field34.value = "1";
ProtoInterface18.field[15] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "upVector";
field35.accessType = "inputOutput";
field35.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field35.type = "SFVec3f";
field35.value = "0 1 0";
ProtoInterface18.field[16] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "fStop";
field36.accessType = "inputOutput";
field36.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field36.type = "SFFloat";
field36.value = "5.6";
ProtoInterface18.field[17] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "focusDistance";
field37.accessType = "inputOutput";
field37.appinfo = "Distance to focal plane of sharpest focus";
field37.type = "SFFloat";
field37.value = "10";
ProtoInterface18.field[18] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "isActive";
field38.accessType = "outputOnly";
field38.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field38.type = "SFBool";
ProtoInterface18.field[19] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "totalDuration";
field39.accessType = "outputOnly";
field39.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field39.type = "SFTime";
ProtoInterface18.field[20] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "offlineRender";
field40.accessType = "inputOutput";
field40.appinfo = "OfflineRender node";
field40.type = "SFNode";
//initialization node (if any) goes here
ProtoInterface18.field[21] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "traceEnabled";
field41.accessType = "initializeOnly";
field41.appinfo = "enable console output to trace script computations and prototype progress";
field41.type = "SFBool";
field41.value = "false";
ProtoInterface18.field[22] = field41;

ProtoDeclare17.protoInterface = ProtoInterface18;

let ProtoBody42 = browser.currentScene.createNode("ProtoBody");
let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.DEF = "CameraViewpoint";
let IS44 = browser.currentScene.createNode("IS");
let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "description";
connect45.protoField = "description";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "position";
connect46.protoField = "position";
IS44.connect[1] = connect46;

let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "orientation";
connect47.protoField = "orientation";
IS44.connect[2] = connect47;

let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "fieldOfView";
connect48.protoField = "fieldOfView";
IS44.connect[3] = connect48;

let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "set_bind";
connect49.protoField = "set_bind";
IS44.connect[4] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "bindTime";
connect50.protoField = "bindTime";
IS44.connect[5] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "isBound";
connect51.protoField = "isBound";
IS44.connect[6] = connect51;

Viewpoint43.iS = IS44;

ProtoBody42.children = new MFNode();

ProtoBody42.children[0] = Viewpoint43;

//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
let NavigationInfo52 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo52.DEF = "CameraNavInfo";
NavigationInfo52.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
let IS53 = browser.currentScene.createNode("IS");
let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "set_bind";
connect54.protoField = "set_bind";
IS53.connect = new MFNode();

IS53.connect[0] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "headlight";
connect55.protoField = "headlight";
IS53.connect[1] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "visibilityLimit";
connect56.protoField = "farClipPlane";
IS53.connect[2] = connect56;

//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
NavigationInfo52.iS = IS53;

ProtoBody42.children[1] = NavigationInfo52;

//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
let DirectionalLight57 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight57.DEF = "CameraDirectionalLight";
DirectionalLight57.global = True;
//TODO confirm other default field values match NavigationInfo spec
let IS58 = browser.currentScene.createNode("IS");
let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "on";
connect59.protoField = "headlight";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "color";
connect60.protoField = "headlightColor";
IS58.connect[1] = connect60;

let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "intensity";
connect61.protoField = "headlightIntensity";
IS58.connect[2] = connect61;

DirectionalLight57.iS = IS58;

ProtoBody42.children[2] = DirectionalLight57;

let PositionInterpolator62 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator62.DEF = "CameraPositionInterpolator";
PositionInterpolator62.key = new MFFloat(new float[0,1]);
PositionInterpolator62.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
let IS63 = browser.currentScene.createNode("IS");
let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "set_fraction";
connect64.protoField = "set_fraction";
IS63.connect = new MFNode();

IS63.connect[0] = connect64;

PositionInterpolator62.iS = IS63;

ProtoBody42.children[3] = PositionInterpolator62;

let OrientationInterpolator65 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator65.DEF = "CameraOrientationInterpolator";
OrientationInterpolator65.key = new MFFloat(new float[0,1]);
OrientationInterpolator65.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
let IS66 = browser.currentScene.createNode("IS");
let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "set_fraction";
connect67.protoField = "set_fraction";
IS66.connect = new MFNode();

IS66.connect[0] = connect67;

OrientationInterpolator65.iS = IS66;

ProtoBody42.children[4] = OrientationInterpolator65;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "value_changed";
ROUTE68.fromNode = "CameraPositionInterpolator";
ROUTE68.toField = "position";
ROUTE68.toNode = "CameraViewpoint";
ProtoBody42.children[5] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "value_changed";
ROUTE69.fromNode = "CameraOrientationInterpolator";
ROUTE69.toField = "orientation";
ROUTE69.toNode = "CameraViewpoint";
ProtoBody42.children[6] = ROUTE69;

let Script70 = browser.currentScene.createNode("Script");
Script70.DEF = "CameraScript";
Script70.directOutput = True;
Script70.mustEvaluate = True;
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
let field71 = browser.currentScene.createNode("field");
field71.name = "description";
field71.accessType = "inputOutput";
field71.appinfo = "Text description to be displayed for this Camera";
field71.type = "SFString";
Script70.field = new MFNode();

Script70.field[0] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "position";
field72.accessType = "inputOutput";
field72.appinfo = "Camera position in local transformation frame";
field72.type = "SFVec3f";
Script70.field[1] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "orientation";
field73.accessType = "inputOutput";
field73.appinfo = "Camera rotation in local transformation frame";
field73.type = "SFRotation";
Script70.field[2] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "set_fraction";
field74.accessType = "inputOnly";
field74.appinfo = "input fraction drives interpolators";
field74.type = "SFFloat";
Script70.field[3] = field74;

let field75 = browser.currentScene.createNode("field");
field75.name = "set_bind";
field75.accessType = "inputOnly";
field75.appinfo = "input event binds or unbinds this Camera";
field75.type = "SFBool";
Script70.field[4] = field75;

let field76 = browser.currentScene.createNode("field");
field76.name = "fieldOfView";
field76.accessType = "inputOutput";
field76.appinfo = "pi/4";
field76.type = "SFFloat";
Script70.field[5] = field76;

let field77 = browser.currentScene.createNode("field");
field77.name = "nearClipPlane";
field77.accessType = "inputOutput";
field77.appinfo = "Vector distance to near clipping plane";
field77.type = "SFFloat";
Script70.field[6] = field77;

let field78 = browser.currentScene.createNode("field");
field78.name = "farClipPlane";
field78.accessType = "inputOutput";
field78.appinfo = "Vector distance to far clipping plane";
field78.type = "SFFloat";
Script70.field[7] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "shots";
field79.accessType = "inputOutput";
field79.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field79.type = "MFNode";
//initialization nodes (if any) go here
Script70.field[8] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "filterColor";
field80.accessType = "inputOutput";
field80.appinfo = "Camera filter color that modifies virtual lens capture";
field80.type = "SFColor";
Script70.field[9] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "filterTransparency";
field81.accessType = "inputOutput";
field81.appinfo = "Camera filter transparency that modifies virtual lens capture";
field81.type = "SFFloat";
Script70.field[10] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "upVector";
field82.accessType = "inputOutput";
field82.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field82.type = "SFVec3f";
Script70.field[11] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "fStop";
field83.accessType = "inputOutput";
field83.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field83.type = "SFFloat";
Script70.field[12] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "focusDistance";
field84.accessType = "inputOutput";
field84.appinfo = "Distance to focal plane of sharpest focus";
field84.type = "SFFloat";
Script70.field[13] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "isActive";
field85.accessType = "outputOnly";
field85.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field85.type = "SFBool";
Script70.field[14] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "totalDuration";
field86.accessType = "outputOnly";
field86.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field86.type = "SFTime";
Script70.field[15] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "offlineRender";
field87.accessType = "inputOutput";
field87.appinfo = "OfflineRender node";
field87.type = "SFNode";
//initialization node (if any) goes here
Script70.field[16] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "ViewpointNode";
field88.accessType = "initializeOnly";
field88.appinfo = "node reference to permit getting setting fields from within Script";
field88.type = "SFNode";
let Viewpoint89 = browser.currentScene.createNode("Viewpoint");
Viewpoint89.USE = "CameraViewpoint";
field88.children = new MFNode();

field88.children[0] = Viewpoint89;

Script70.field[17] = field88;

let field90 = browser.currentScene.createNode("field");
field90.name = "NavInfoNode";
field90.accessType = "initializeOnly";
field90.appinfo = "node reference to permit getting setting fields from within Script";
field90.type = "SFNode";
let NavigationInfo91 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo91.USE = "CameraNavInfo";
field90.children = new MFNode();

field90.children[0] = NavigationInfo91;

Script70.field[18] = field90;

let field92 = browser.currentScene.createNode("field");
field92.name = "CameraPI";
field92.accessType = "initializeOnly";
field92.appinfo = "node reference to permit getting setting fields from within Script";
field92.type = "SFNode";
let PositionInterpolator93 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator93.USE = "CameraPositionInterpolator";
field92.children = new MFNode();

field92.children[0] = PositionInterpolator93;

Script70.field[19] = field92;

let field94 = browser.currentScene.createNode("field");
field94.name = "CameraOI";
field94.accessType = "initializeOnly";
field94.appinfo = "node reference to permit getting setting fields from within Script";
field94.type = "SFNode";
let OrientationInterpolator95 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator95.USE = "CameraOrientationInterpolator";
field94.children = new MFNode();

field94.children[0] = OrientationInterpolator95;

Script70.field[20] = field94;

let field96 = browser.currentScene.createNode("field");
field96.name = "key";
field96.accessType = "inputOutput";
field96.appinfo = "key array for interpolators";
field96.type = "MFFloat";
Script70.field[21] = field96;

let field97 = browser.currentScene.createNode("field");
field97.name = "keyValuePosition";
field97.accessType = "inputOutput";
field97.appinfo = "keyValue array for PositionInterpolator";
field97.type = "MFVec3f";
Script70.field[22] = field97;

let field98 = browser.currentScene.createNode("field");
field98.name = "keyValueOrientation";
field98.accessType = "inputOutput";
field98.appinfo = "keyValue array for OrientationInterpolator";
field98.type = "MFRotation";
Script70.field[23] = field98;

let field99 = browser.currentScene.createNode("field");
field99.name = "animated";
field99.accessType = "inputOutput";
field99.appinfo = "whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events";
field99.type = "SFBool";
field99.value = "false";
Script70.field[24] = field99;

let field100 = browser.currentScene.createNode("field");
field100.name = "initialized";
field100.accessType = "initializeOnly";
field100.appinfo = "perform checkShots() function once immediately after initialization";
field100.type = "SFBool";
field100.value = "false";
Script70.field[25] = field100;

let field101 = browser.currentScene.createNode("field");
field101.name = "shotCount";
field101.accessType = "initializeOnly";
field101.appinfo = "how many CameraShot nodes are contained in shots array";
field101.type = "SFInt32";
field101.value = "0";
Script70.field[26] = field101;

let field102 = browser.currentScene.createNode("field");
field102.name = "movesCount";
field102.accessType = "initializeOnly";
field102.appinfo = "how many CameraMove nodes are contained in moves array";
field102.type = "SFInt32";
field102.value = "0";
Script70.field[27] = field102;

let field103 = browser.currentScene.createNode("field");
field103.name = "frameCount";
field103.accessType = "initializeOnly";
field103.appinfo = "how many frames were created in current loop";
field103.type = "SFFloat";
field103.value = "0";
Script70.field[28] = field103;

let field104 = browser.currentScene.createNode("field");
field104.name = "startTime";
field104.accessType = "initializeOnly";
field104.appinfo = "holding variable";
field104.type = "SFTime";
field104.value = "0";
Script70.field[29] = field104;

let field105 = browser.currentScene.createNode("field");
field105.name = "priorTraceTime";
field105.accessType = "initializeOnly";
field105.appinfo = "holding variable";
field105.type = "SFTime";
field105.value = "0";
Script70.field[30] = field105;

let field106 = browser.currentScene.createNode("field");
field106.name = "traceEnabled";
field106.accessType = "initializeOnly";
field106.appinfo = "enable console output to trace script computations and prototype progress";
field106.type = "SFBool";
Script70.field[31] = field106;

let IS107 = browser.currentScene.createNode("IS");
let connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "description";
connect108.protoField = "description";
IS107.connect = new MFNode();

IS107.connect[0] = connect108;

let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "position";
connect109.protoField = "position";
IS107.connect[1] = connect109;

let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "orientation";
connect110.protoField = "orientation";
IS107.connect[2] = connect110;

let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "set_fraction";
connect111.protoField = "set_fraction";
IS107.connect[3] = connect111;

let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "set_bind";
connect112.protoField = "set_bind";
IS107.connect[4] = connect112;

let connect113 = browser.currentScene.createNode("connect");
connect113.nodeField = "fieldOfView";
connect113.protoField = "fieldOfView";
IS107.connect[5] = connect113;

let connect114 = browser.currentScene.createNode("connect");
connect114.nodeField = "nearClipPlane";
connect114.protoField = "nearClipPlane";
IS107.connect[6] = connect114;

let connect115 = browser.currentScene.createNode("connect");
connect115.nodeField = "farClipPlane";
connect115.protoField = "farClipPlane";
IS107.connect[7] = connect115;

let connect116 = browser.currentScene.createNode("connect");
connect116.nodeField = "shots";
connect116.protoField = "shots";
IS107.connect[8] = connect116;

let connect117 = browser.currentScene.createNode("connect");
connect117.nodeField = "filterColor";
connect117.protoField = "filterColor";
IS107.connect[9] = connect117;

let connect118 = browser.currentScene.createNode("connect");
connect118.nodeField = "filterTransparency";
connect118.protoField = "filterTransparency";
IS107.connect[10] = connect118;

let connect119 = browser.currentScene.createNode("connect");
connect119.nodeField = "upVector";
connect119.protoField = "upVector";
IS107.connect[11] = connect119;

let connect120 = browser.currentScene.createNode("connect");
connect120.nodeField = "fStop";
connect120.protoField = "fStop";
IS107.connect[12] = connect120;

let connect121 = browser.currentScene.createNode("connect");
connect121.nodeField = "focusDistance";
connect121.protoField = "focusDistance";
IS107.connect[13] = connect121;

let connect122 = browser.currentScene.createNode("connect");
connect122.nodeField = "isActive";
connect122.protoField = "isActive";
IS107.connect[14] = connect122;

let connect123 = browser.currentScene.createNode("connect");
connect123.nodeField = "totalDuration";
connect123.protoField = "totalDuration";
IS107.connect[15] = connect123;

let connect124 = browser.currentScene.createNode("connect");
connect124.nodeField = "offlineRender";
connect124.protoField = "offlineRender";
IS107.connect[16] = connect124;

let connect125 = browser.currentScene.createNode("connect");
connect125.nodeField = "traceEnabled";
connect125.protoField = "traceEnabled";
IS107.connect[17] = connect125;

Script70.iS = IS107;

let #sourceCode126 = browser.currentScene.createNode("#sourceCode");
Script70.#sourceCode[32] = #sourceCode126;

ProtoBody42.children[7] = Script70;

let ROUTE127 = browser.currentScene.createNode("ROUTE");
ROUTE127.fromField = "position";
ROUTE127.fromNode = "CameraScript";
ROUTE127.toField = "position";
ROUTE127.toNode = "CameraViewpoint";
ProtoBody42.children[8] = ROUTE127;

let ROUTE128 = browser.currentScene.createNode("ROUTE");
ROUTE128.fromField = "orientation";
ROUTE128.fromNode = "CameraScript";
ROUTE128.toField = "orientation";
ROUTE128.toNode = "CameraViewpoint";
ProtoBody42.children[9] = ROUTE128;

let ROUTE129 = browser.currentScene.createNode("ROUTE");
ROUTE129.fromField = "isActive";
ROUTE129.fromNode = "CameraScript";
ROUTE129.toField = "set_bind";
ROUTE129.toNode = "CameraViewpoint";
ProtoBody42.children[10] = ROUTE129;

let ROUTE130 = browser.currentScene.createNode("ROUTE");
ROUTE130.fromField = "isActive";
ROUTE130.fromNode = "CameraScript";
ROUTE130.toField = "set_bind";
ROUTE130.toNode = "CameraNavInfo";
ProtoBody42.children[11] = ROUTE130;

let ROUTE131 = browser.currentScene.createNode("ROUTE");
ROUTE131.fromField = "isActive";
ROUTE131.fromNode = "CameraScript";
ROUTE131.toField = "on";
ROUTE131.toNode = "CameraDirectionalLight";
ProtoBody42.children[12] = ROUTE131;

ProtoDeclare17.protoBody = ProtoBody42;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare17;

//=============== CameraShot ==============
let ProtoDeclare132 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CameraShot" appinfo="CameraShot collects a specific set of CameraMovement animations that make up an individual shot." ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this CameraShot" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this CameraShot can be activated" type="SFBool" value="true"></field>
<field name="moves" accessType="inputOutput" appinfo="Set of CameraMovement nodes" type="MFNode"><!--initializing CameraMovement nodes are inserted here by scene author using ProtoInstance--></field>
<field name="initialPosition" accessType="inputOutput" appinfo="Setup to reinitialize camera position for this shot" type="SFVec3f" value="0 0 10"></field>
<field name="initialOrientation" accessType="inputOutput" appinfo="Setup to reinitialize camera rotation for this shot" type="SFRotation" value="0 0 1 0"></field>
<field name="initialAimPoint" accessType="inputOutput" appinfo="Setup to reinitialize aimpoint (relative location for camera direction) for this shot" type="SFVec3f" value="0 0 0"></field>
<field name="initialFieldOfView" accessType="inputOutput" appinfo="pi/4" type="SFFloat" value="0.7854"></field>
<field name="initialFStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat" value="5.6"></field>
<field name="initialFocusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat" value="10"></field>
<field name="shotDuration" accessType="outputOnly" appinfo="Subtotal duration of contained CameraMovement move durations" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Script DEF="CameraShotScript" directOutput="true" mustEvaluate="true"><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this CameraShot" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this CameraShot can be activated" type="SFBool"></field>
<field name="moves" accessType="inputOutput" appinfo="Set of CameraMovement nodes" type="MFNode"><!--initialization nodes (if any) go here--></field>
<field name="initialPosition" accessType="inputOutput" appinfo="Setup to reinitialize camera position for this shot" type="SFVec3f"></field>
<field name="initialOrientation" accessType="inputOutput" appinfo="Setup to reinitialize camera rotation for this shot" type="SFRotation"></field>
<field name="initialAimPoint" accessType="inputOutput" appinfo="Setup to reinitialize aimpoint (relative location for camera direction) for this shot" type="SFVec3f"></field>
<field name="initialFieldOfView" accessType="inputOutput" appinfo="pi/4" type="SFFloat"></field>
<field name="initialFStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat"></field>
<field name="initialFocusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat"></field>
<field name="shotDuration" accessType="outputOnly" appinfo="Subtotal duration of contained CameraMovement move durations" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool"></field>
<field name="key" accessType="inputOutput" appinfo="key array for interpolators" type="MFFloat"></field>
<field name="keyValuePosition" accessType="inputOutput" appinfo="keyValue array for PositionInterpolator" type="MFVec3f"></field>
<field name="keyValueOrientation" accessType="inputOutput" appinfo="keyValue array for OrientationInterpolator" type="MFRotation"></field>
<IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="moves" protoField="moves"></connect>
<connect nodeField="initialPosition" protoField="initialPosition"></connect>
<connect nodeField="initialOrientation" protoField="initialOrientation"></connect>
<connect nodeField="initialAimPoint" protoField="initialAimPoint"></connect>
<connect nodeField="initialFieldOfView" protoField="initialFieldOfView"></connect>
<connect nodeField="initialFStop" protoField="initialFStop"></connect>
<connect nodeField="initialFocusDistance" protoField="initialFocusDistance"></connect>
<connect nodeField="shotDuration" protoField="shotDuration"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
<#sourceCode/>
</Script>
<!--Add any ROUTEs here, going from Script to other nodes within ProtoBody--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare132.name = "CameraShot";
ProtoDeclare132.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot.";
let ProtoInterface133 = browser.currentScene.createNode("ProtoInterface");
let field134 = browser.currentScene.createNode("field");
field134.name = "description";
field134.accessType = "inputOutput";
field134.appinfo = "Text description to be displayed for this CameraShot";
field134.type = "SFString";
ProtoInterface133.field = new MFNode();

ProtoInterface133.field[0] = field134;

let field135 = browser.currentScene.createNode("field");
field135.name = "enabled";
field135.accessType = "inputOutput";
field135.appinfo = "Whether this CameraShot can be activated";
field135.type = "SFBool";
field135.value = "true";
ProtoInterface133.field[1] = field135;

let field136 = browser.currentScene.createNode("field");
field136.name = "moves";
field136.accessType = "inputOutput";
field136.appinfo = "Set of CameraMovement nodes";
field136.type = "MFNode";
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ProtoInterface133.field[2] = field136;

let field137 = browser.currentScene.createNode("field");
field137.name = "initialPosition";
field137.accessType = "inputOutput";
field137.appinfo = "Setup to reinitialize camera position for this shot";
field137.type = "SFVec3f";
field137.value = "0 0 10";
ProtoInterface133.field[3] = field137;

let field138 = browser.currentScene.createNode("field");
field138.name = "initialOrientation";
field138.accessType = "inputOutput";
field138.appinfo = "Setup to reinitialize camera rotation for this shot";
field138.type = "SFRotation";
field138.value = "0 0 1 0";
ProtoInterface133.field[4] = field138;

let field139 = browser.currentScene.createNode("field");
field139.name = "initialAimPoint";
field139.accessType = "inputOutput";
field139.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field139.type = "SFVec3f";
field139.value = "0 0 0";
ProtoInterface133.field[5] = field139;

let field140 = browser.currentScene.createNode("field");
field140.name = "initialFieldOfView";
field140.accessType = "inputOutput";
field140.appinfo = "pi/4";
field140.type = "SFFloat";
field140.value = "0.7854";
ProtoInterface133.field[6] = field140;

let field141 = browser.currentScene.createNode("field");
field141.name = "initialFStop";
field141.accessType = "inputOutput";
field141.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field141.type = "SFFloat";
field141.value = "5.6";
ProtoInterface133.field[7] = field141;

let field142 = browser.currentScene.createNode("field");
field142.name = "initialFocusDistance";
field142.accessType = "inputOutput";
field142.appinfo = "Distance to focal plane of sharpest focus";
field142.type = "SFFloat";
field142.value = "10";
ProtoInterface133.field[8] = field142;

let field143 = browser.currentScene.createNode("field");
field143.name = "shotDuration";
field143.accessType = "outputOnly";
field143.appinfo = "Subtotal duration of contained CameraMovement move durations";
field143.type = "SFTime";
ProtoInterface133.field[9] = field143;

let field144 = browser.currentScene.createNode("field");
field144.name = "isActive";
field144.accessType = "outputOnly";
field144.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field144.type = "SFBool";
ProtoInterface133.field[10] = field144;

let field145 = browser.currentScene.createNode("field");
field145.name = "traceEnabled";
field145.accessType = "initializeOnly";
field145.appinfo = "enable console output to trace script computations and prototype progress";
field145.type = "SFBool";
field145.value = "false";
ProtoInterface133.field[11] = field145;

ProtoDeclare132.protoInterface = ProtoInterface133;

let ProtoBody146 = browser.currentScene.createNode("ProtoBody");
let Script147 = browser.currentScene.createNode("Script");
Script147.DEF = "CameraShotScript";
Script147.directOutput = True;
Script147.mustEvaluate = True;
let field148 = browser.currentScene.createNode("field");
field148.name = "description";
field148.accessType = "inputOutput";
field148.appinfo = "Text description to be displayed for this CameraShot";
field148.type = "SFString";
Script147.field = new MFNode();

Script147.field[0] = field148;

let field149 = browser.currentScene.createNode("field");
field149.name = "enabled";
field149.accessType = "inputOutput";
field149.appinfo = "Whether this CameraShot can be activated";
field149.type = "SFBool";
Script147.field[1] = field149;

let field150 = browser.currentScene.createNode("field");
field150.name = "moves";
field150.accessType = "inputOutput";
field150.appinfo = "Set of CameraMovement nodes";
field150.type = "MFNode";
//initialization nodes (if any) go here
Script147.field[2] = field150;

let field151 = browser.currentScene.createNode("field");
field151.name = "initialPosition";
field151.accessType = "inputOutput";
field151.appinfo = "Setup to reinitialize camera position for this shot";
field151.type = "SFVec3f";
Script147.field[3] = field151;

let field152 = browser.currentScene.createNode("field");
field152.name = "initialOrientation";
field152.accessType = "inputOutput";
field152.appinfo = "Setup to reinitialize camera rotation for this shot";
field152.type = "SFRotation";
Script147.field[4] = field152;

let field153 = browser.currentScene.createNode("field");
field153.name = "initialAimPoint";
field153.accessType = "inputOutput";
field153.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field153.type = "SFVec3f";
Script147.field[5] = field153;

let field154 = browser.currentScene.createNode("field");
field154.name = "initialFieldOfView";
field154.accessType = "inputOutput";
field154.appinfo = "pi/4";
field154.type = "SFFloat";
Script147.field[6] = field154;

let field155 = browser.currentScene.createNode("field");
field155.name = "initialFStop";
field155.accessType = "inputOutput";
field155.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field155.type = "SFFloat";
Script147.field[7] = field155;

let field156 = browser.currentScene.createNode("field");
field156.name = "initialFocusDistance";
field156.accessType = "inputOutput";
field156.appinfo = "Distance to focal plane of sharpest focus";
field156.type = "SFFloat";
Script147.field[8] = field156;

let field157 = browser.currentScene.createNode("field");
field157.name = "shotDuration";
field157.accessType = "outputOnly";
field157.appinfo = "Subtotal duration of contained CameraMovement move durations";
field157.type = "SFTime";
Script147.field[9] = field157;

let field158 = browser.currentScene.createNode("field");
field158.name = "isActive";
field158.accessType = "outputOnly";
field158.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field158.type = "SFBool";
Script147.field[10] = field158;

let field159 = browser.currentScene.createNode("field");
field159.name = "traceEnabled";
field159.accessType = "initializeOnly";
field159.appinfo = "enable console output to trace script computations and prototype progress";
field159.type = "SFBool";
Script147.field[11] = field159;

let field160 = browser.currentScene.createNode("field");
field160.name = "key";
field160.accessType = "inputOutput";
field160.appinfo = "key array for interpolators";
field160.type = "MFFloat";
Script147.field[12] = field160;

let field161 = browser.currentScene.createNode("field");
field161.name = "keyValuePosition";
field161.accessType = "inputOutput";
field161.appinfo = "keyValue array for PositionInterpolator";
field161.type = "MFVec3f";
Script147.field[13] = field161;

let field162 = browser.currentScene.createNode("field");
field162.name = "keyValueOrientation";
field162.accessType = "inputOutput";
field162.appinfo = "keyValue array for OrientationInterpolator";
field162.type = "MFRotation";
Script147.field[14] = field162;

let IS163 = browser.currentScene.createNode("IS");
let connect164 = browser.currentScene.createNode("connect");
connect164.nodeField = "description";
connect164.protoField = "description";
IS163.connect = new MFNode();

IS163.connect[0] = connect164;

let connect165 = browser.currentScene.createNode("connect");
connect165.nodeField = "enabled";
connect165.protoField = "enabled";
IS163.connect[1] = connect165;

let connect166 = browser.currentScene.createNode("connect");
connect166.nodeField = "moves";
connect166.protoField = "moves";
IS163.connect[2] = connect166;

let connect167 = browser.currentScene.createNode("connect");
connect167.nodeField = "initialPosition";
connect167.protoField = "initialPosition";
IS163.connect[3] = connect167;

let connect168 = browser.currentScene.createNode("connect");
connect168.nodeField = "initialOrientation";
connect168.protoField = "initialOrientation";
IS163.connect[4] = connect168;

let connect169 = browser.currentScene.createNode("connect");
connect169.nodeField = "initialAimPoint";
connect169.protoField = "initialAimPoint";
IS163.connect[5] = connect169;

let connect170 = browser.currentScene.createNode("connect");
connect170.nodeField = "initialFieldOfView";
connect170.protoField = "initialFieldOfView";
IS163.connect[6] = connect170;

let connect171 = browser.currentScene.createNode("connect");
connect171.nodeField = "initialFStop";
connect171.protoField = "initialFStop";
IS163.connect[7] = connect171;

let connect172 = browser.currentScene.createNode("connect");
connect172.nodeField = "initialFocusDistance";
connect172.protoField = "initialFocusDistance";
IS163.connect[8] = connect172;

let connect173 = browser.currentScene.createNode("connect");
connect173.nodeField = "shotDuration";
connect173.protoField = "shotDuration";
IS163.connect[9] = connect173;

let connect174 = browser.currentScene.createNode("connect");
connect174.nodeField = "isActive";
connect174.protoField = "isActive";
IS163.connect[10] = connect174;

let connect175 = browser.currentScene.createNode("connect");
connect175.nodeField = "traceEnabled";
connect175.protoField = "traceEnabled";
IS163.connect[11] = connect175;

Script147.iS = IS163;

let #sourceCode176 = browser.currentScene.createNode("#sourceCode");
Script147.#sourceCode[15] = #sourceCode176;

ProtoBody146.children = new MFNode();

ProtoBody146.children[0] = Script147;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare132.protoBody = ProtoBody146;

browser.currentScene.children[1] = ProtoDeclare132;

//=============== CameraMovement ==============
let ProtoDeclare177 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CameraMovement" appinfo="CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView." ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this CameraMovement" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this CameraMovement can be activated" type="SFBool" value="true"></field>
<field name="duration" accessType="inputOutput" appinfo="Duration in seconds for this move" type="SFFloat" value="0"></field>
<field name="goalPosition" accessType="inputOutput" appinfo="Goal camera position for this move" type="SFVec3f" value="0 0 10"></field>
<field name="goalOrientation" accessType="inputOutput" appinfo="Goal camera rotation for this move" type="SFRotation" value="0 0 1 0"></field>
<field name="tracking" accessType="inputOutput" appinfo="Whether or not camera direction is tracking towards the aimPoint" type="SFBool" value="false"></field>
<field name="goalAimPoint" accessType="inputOutput" appinfo="Goal aimPoint for this move, ignored if tracking=false" type="SFVec3f" value="0 0 0"></field>
<field name="goalFieldOfView" accessType="inputOutput" appinfo="Goal fieldOfView for this move" type="SFFloat" value="0.7854"></field>
<field name="goalFStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat" value="5.6"></field>
<field name="goalFocusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat" value="10"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><!--First node determines node type of this prototype--><!--Subsequent nodes do not render, but still must be a valid X3D subgraph--><!--Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events--><Script DEF="CameraMovementScript" directOutput="true" mustEvaluate="true"><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this CameraMovement" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this CameraMovement can be activated" type="SFBool"></field>
<field name="duration" accessType="inputOutput" appinfo="Duration in seconds for this move" type="SFFloat"></field>
<field name="goalPosition" accessType="inputOutput" appinfo="Goal camera position for this move" type="SFVec3f"></field>
<field name="goalOrientation" accessType="inputOutput" appinfo="Goal camera rotation for this move" type="SFRotation"></field>
<field name="tracking" accessType="inputOutput" appinfo="Whether or not camera direction is tracking towards the aimPoint" type="SFBool"></field>
<field name="goalAimPoint" accessType="inputOutput" appinfo="Goal aimPoint for this move, ignored if tracking=false" type="SFVec3f"></field>
<field name="goalFieldOfView" accessType="inputOutput" appinfo="Goal fieldOfView for this move" type="SFFloat"></field>
<field name="goalFStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat"></field>
<field name="goalFocusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool"></field>
<IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="duration" protoField="duration"></connect>
<connect nodeField="goalPosition" protoField="goalPosition"></connect>
<connect nodeField="goalOrientation" protoField="goalOrientation"></connect>
<connect nodeField="tracking" protoField="tracking"></connect>
<connect nodeField="goalAimPoint" protoField="goalAimPoint"></connect>
<connect nodeField="goalFieldOfView" protoField="goalFieldOfView"></connect>
<connect nodeField="goalFStop" protoField="goalFStop"></connect>
<connect nodeField="goalFocusDistance" protoField="goalFocusDistance"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
<#sourceCode/>
</Script>
<!--Add any ROUTEs here, going from Script to other nodes within ProtoBody--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare177.name = "CameraMovement";
ProtoDeclare177.appinfo = "CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.";
let ProtoInterface178 = browser.currentScene.createNode("ProtoInterface");
let field179 = browser.currentScene.createNode("field");
field179.name = "description";
field179.accessType = "inputOutput";
field179.appinfo = "Text description to be displayed for this CameraMovement";
field179.type = "SFString";
ProtoInterface178.field = new MFNode();

ProtoInterface178.field[0] = field179;

let field180 = browser.currentScene.createNode("field");
field180.name = "enabled";
field180.accessType = "inputOutput";
field180.appinfo = "Whether this CameraMovement can be activated";
field180.type = "SFBool";
field180.value = "true";
ProtoInterface178.field[1] = field180;

let field181 = browser.currentScene.createNode("field");
field181.name = "duration";
field181.accessType = "inputOutput";
field181.appinfo = "Duration in seconds for this move";
field181.type = "SFFloat";
field181.value = "0";
ProtoInterface178.field[2] = field181;

let field182 = browser.currentScene.createNode("field");
field182.name = "goalPosition";
field182.accessType = "inputOutput";
field182.appinfo = "Goal camera position for this move";
field182.type = "SFVec3f";
field182.value = "0 0 10";
ProtoInterface178.field[3] = field182;

let field183 = browser.currentScene.createNode("field");
field183.name = "goalOrientation";
field183.accessType = "inputOutput";
field183.appinfo = "Goal camera rotation for this move";
field183.type = "SFRotation";
field183.value = "0 0 1 0";
ProtoInterface178.field[4] = field183;

let field184 = browser.currentScene.createNode("field");
field184.name = "tracking";
field184.accessType = "inputOutput";
field184.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field184.type = "SFBool";
field184.value = "false";
ProtoInterface178.field[5] = field184;

let field185 = browser.currentScene.createNode("field");
field185.name = "goalAimPoint";
field185.accessType = "inputOutput";
field185.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field185.type = "SFVec3f";
field185.value = "0 0 0";
ProtoInterface178.field[6] = field185;

let field186 = browser.currentScene.createNode("field");
field186.name = "goalFieldOfView";
field186.accessType = "inputOutput";
field186.appinfo = "Goal fieldOfView for this move";
field186.type = "SFFloat";
field186.value = "0.7854";
ProtoInterface178.field[7] = field186;

let field187 = browser.currentScene.createNode("field");
field187.name = "goalFStop";
field187.accessType = "inputOutput";
field187.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field187.type = "SFFloat";
field187.value = "5.6";
ProtoInterface178.field[8] = field187;

let field188 = browser.currentScene.createNode("field");
field188.name = "goalFocusDistance";
field188.accessType = "inputOutput";
field188.appinfo = "Distance to focal plane of sharpest focus";
field188.type = "SFFloat";
field188.value = "10";
ProtoInterface178.field[9] = field188;

let field189 = browser.currentScene.createNode("field");
field189.name = "isActive";
field189.accessType = "outputOnly";
field189.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field189.type = "SFBool";
ProtoInterface178.field[10] = field189;

let field190 = browser.currentScene.createNode("field");
field190.name = "traceEnabled";
field190.accessType = "initializeOnly";
field190.appinfo = "enable console output to trace script computations and prototype progress";
field190.type = "SFBool";
field190.value = "false";
ProtoInterface178.field[11] = field190;

ProtoDeclare177.protoInterface = ProtoInterface178;

let ProtoBody191 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
let Script192 = browser.currentScene.createNode("Script");
Script192.DEF = "CameraMovementScript";
Script192.directOutput = True;
Script192.mustEvaluate = True;
let field193 = browser.currentScene.createNode("field");
field193.name = "description";
field193.accessType = "inputOutput";
field193.appinfo = "Text description to be displayed for this CameraMovement";
field193.type = "SFString";
Script192.field = new MFNode();

Script192.field[0] = field193;

let field194 = browser.currentScene.createNode("field");
field194.name = "enabled";
field194.accessType = "inputOutput";
field194.appinfo = "Whether this CameraMovement can be activated";
field194.type = "SFBool";
Script192.field[1] = field194;

let field195 = browser.currentScene.createNode("field");
field195.name = "duration";
field195.accessType = "inputOutput";
field195.appinfo = "Duration in seconds for this move";
field195.type = "SFFloat";
Script192.field[2] = field195;

let field196 = browser.currentScene.createNode("field");
field196.name = "goalPosition";
field196.accessType = "inputOutput";
field196.appinfo = "Goal camera position for this move";
field196.type = "SFVec3f";
Script192.field[3] = field196;

let field197 = browser.currentScene.createNode("field");
field197.name = "goalOrientation";
field197.accessType = "inputOutput";
field197.appinfo = "Goal camera rotation for this move";
field197.type = "SFRotation";
Script192.field[4] = field197;

let field198 = browser.currentScene.createNode("field");
field198.name = "tracking";
field198.accessType = "inputOutput";
field198.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field198.type = "SFBool";
Script192.field[5] = field198;

let field199 = browser.currentScene.createNode("field");
field199.name = "goalAimPoint";
field199.accessType = "inputOutput";
field199.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field199.type = "SFVec3f";
Script192.field[6] = field199;

let field200 = browser.currentScene.createNode("field");
field200.name = "goalFieldOfView";
field200.accessType = "inputOutput";
field200.appinfo = "Goal fieldOfView for this move";
field200.type = "SFFloat";
Script192.field[7] = field200;

let field201 = browser.currentScene.createNode("field");
field201.name = "goalFStop";
field201.accessType = "inputOutput";
field201.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field201.type = "SFFloat";
Script192.field[8] = field201;

let field202 = browser.currentScene.createNode("field");
field202.name = "goalFocusDistance";
field202.accessType = "inputOutput";
field202.appinfo = "Distance to focal plane of sharpest focus";
field202.type = "SFFloat";
Script192.field[9] = field202;

let field203 = browser.currentScene.createNode("field");
field203.name = "isActive";
field203.accessType = "outputOnly";
field203.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field203.type = "SFBool";
Script192.field[10] = field203;

let field204 = browser.currentScene.createNode("field");
field204.name = "traceEnabled";
field204.accessType = "initializeOnly";
field204.appinfo = "enable console output to trace script computations and prototype progress";
field204.type = "SFBool";
Script192.field[11] = field204;

let IS205 = browser.currentScene.createNode("IS");
let connect206 = browser.currentScene.createNode("connect");
connect206.nodeField = "description";
connect206.protoField = "description";
IS205.connect = new MFNode();

IS205.connect[0] = connect206;

let connect207 = browser.currentScene.createNode("connect");
connect207.nodeField = "enabled";
connect207.protoField = "enabled";
IS205.connect[1] = connect207;

let connect208 = browser.currentScene.createNode("connect");
connect208.nodeField = "duration";
connect208.protoField = "duration";
IS205.connect[2] = connect208;

let connect209 = browser.currentScene.createNode("connect");
connect209.nodeField = "goalPosition";
connect209.protoField = "goalPosition";
IS205.connect[3] = connect209;

let connect210 = browser.currentScene.createNode("connect");
connect210.nodeField = "goalOrientation";
connect210.protoField = "goalOrientation";
IS205.connect[4] = connect210;

let connect211 = browser.currentScene.createNode("connect");
connect211.nodeField = "tracking";
connect211.protoField = "tracking";
IS205.connect[5] = connect211;

let connect212 = browser.currentScene.createNode("connect");
connect212.nodeField = "goalAimPoint";
connect212.protoField = "goalAimPoint";
IS205.connect[6] = connect212;

let connect213 = browser.currentScene.createNode("connect");
connect213.nodeField = "goalFieldOfView";
connect213.protoField = "goalFieldOfView";
IS205.connect[7] = connect213;

let connect214 = browser.currentScene.createNode("connect");
connect214.nodeField = "goalFStop";
connect214.protoField = "goalFStop";
IS205.connect[8] = connect214;

let connect215 = browser.currentScene.createNode("connect");
connect215.nodeField = "goalFocusDistance";
connect215.protoField = "goalFocusDistance";
IS205.connect[9] = connect215;

let connect216 = browser.currentScene.createNode("connect");
connect216.nodeField = "isActive";
connect216.protoField = "isActive";
IS205.connect[10] = connect216;

let connect217 = browser.currentScene.createNode("connect");
connect217.nodeField = "traceEnabled";
connect217.protoField = "traceEnabled";
IS205.connect[11] = connect217;

Script192.iS = IS205;

let #sourceCode218 = browser.currentScene.createNode("#sourceCode");
Script192.#sourceCode[12] = #sourceCode218;

ProtoBody191.children = new MFNode();

ProtoBody191.children[0] = Script192;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare177.protoBody = ProtoBody191;

browser.currentScene.children[2] = ProtoDeclare177;

//=============== OfflineRender ==============
let ProtoDeclare219 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="OfflineRender" appinfo="OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)." ><ProtoInterface><!--TODO non-photorealistic rendering (NPR) parameters--><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this OfflineRender" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this OfflineRender can be activated" type="SFBool" value="true"></field>
<field name="frameRate" accessType="inputOutput" appinfo="Frames per second recorded for this rendering" type="SFFloat" value="30"></field>
<field name="frameSize" accessType="inputOutput" appinfo="Size of frame in number of pixels width and height" type="SFVec2f" value="640 480"></field>
<field name="pixelAspectRatio" accessType="inputOutput" appinfo="Relative dimensions of pixel height/width typically 1.33 or 1" type="SFFloat" value="1.33"></field>
<field name="set_startTime" accessType="inputOnly" appinfo="Begin render operation" type="SFTime"></field>
<field name="progress" accessType="outputOnly" appinfo="Progress performing render operation (0..1)" type="SFFloat"></field>
<field name="renderCompleteTime" accessType="outputOnly" appinfo="Render operation complete" type="SFTime"></field>
<field name="movieFormat" accessType="initializeOnly" appinfo="Format of rendered output movie (mpeg mp4 etc.), use first supported format" type="MFString" value="&quot;mpeg&quot;"></field>
<field name="imageFormat" accessType="initializeOnly" appinfo="Format of rendered output images (png jpeg gif tiff etc.) use first supported format" type="MFString" value="&quot;png&quot;"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><!--First node determines node type of this prototype--><!--Subsequent nodes do not render, but still must be a valid X3D subgraph--><Script DEF="OfflineRenderScript" mustEvaluate="true"><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this OfflineRender" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this OfflineRender can be activated" type="SFBool"></field>
<field name="frameRate" accessType="inputOutput" appinfo="Frames per second recorded for this rendering" type="SFFloat"></field>
<field name="frameSize" accessType="inputOutput" appinfo="Size of frame in number of pixels width and height" type="SFVec2f"></field>
<field name="pixelAspectRatio" accessType="inputOutput" appinfo="Relative dimensions of pixel height/width typically 1.33 or 1" type="SFFloat"></field>
<field name="set_startTime" accessType="inputOnly" appinfo="Begin render operation" type="SFTime"></field>
<field name="progress" accessType="outputOnly" appinfo="Progress performing render operation (0..1)" type="SFFloat"></field>
<field name="renderCompleteTime" accessType="outputOnly" appinfo="Render operation complete" type="SFTime"></field>
<field name="movieFormat" accessType="initializeOnly" appinfo="Format of rendered output movie (mpeg mp4 etc.)" type="MFString"></field>
<field name="imageFormat" accessType="initializeOnly" appinfo="Format of rendered output images (png jpeg gif tiff etc.)" type="MFString"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool"></field>
<IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="frameRate" protoField="frameRate"></connect>
<connect nodeField="frameSize" protoField="frameSize"></connect>
<connect nodeField="pixelAspectRatio" protoField="pixelAspectRatio"></connect>
<connect nodeField="set_startTime" protoField="set_startTime"></connect>
<connect nodeField="progress" protoField="progress"></connect>
<connect nodeField="renderCompleteTime" protoField="renderCompleteTime"></connect>
<connect nodeField="movieFormat" protoField="movieFormat"></connect>
<connect nodeField="imageFormat" protoField="imageFormat"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
<#sourceCode/>
</Script>
<!--Add any ROUTEs here, going from Script to other nodes within ProtoBody--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare219.name = "OfflineRender";
ProtoDeclare219.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).";
let ProtoInterface220 = browser.currentScene.createNode("ProtoInterface");
//TODO non-photorealistic rendering (NPR) parameters
let field221 = browser.currentScene.createNode("field");
field221.name = "description";
field221.accessType = "inputOutput";
field221.appinfo = "Text description to be displayed for this OfflineRender";
field221.type = "SFString";
ProtoInterface220.field = new MFNode();

ProtoInterface220.field[0] = field221;

let field222 = browser.currentScene.createNode("field");
field222.name = "enabled";
field222.accessType = "inputOutput";
field222.appinfo = "Whether this OfflineRender can be activated";
field222.type = "SFBool";
field222.value = "true";
ProtoInterface220.field[1] = field222;

let field223 = browser.currentScene.createNode("field");
field223.name = "frameRate";
field223.accessType = "inputOutput";
field223.appinfo = "Frames per second recorded for this rendering";
field223.type = "SFFloat";
field223.value = "30";
ProtoInterface220.field[2] = field223;

let field224 = browser.currentScene.createNode("field");
field224.name = "frameSize";
field224.accessType = "inputOutput";
field224.appinfo = "Size of frame in number of pixels width and height";
field224.type = "SFVec2f";
field224.value = "640 480";
ProtoInterface220.field[3] = field224;

let field225 = browser.currentScene.createNode("field");
field225.name = "pixelAspectRatio";
field225.accessType = "inputOutput";
field225.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field225.type = "SFFloat";
field225.value = "1.33";
ProtoInterface220.field[4] = field225;

let field226 = browser.currentScene.createNode("field");
field226.name = "set_startTime";
field226.accessType = "inputOnly";
field226.appinfo = "Begin render operation";
field226.type = "SFTime";
ProtoInterface220.field[5] = field226;

let field227 = browser.currentScene.createNode("field");
field227.name = "progress";
field227.accessType = "outputOnly";
field227.appinfo = "Progress performing render operation (0..1)";
field227.type = "SFFloat";
ProtoInterface220.field[6] = field227;

let field228 = browser.currentScene.createNode("field");
field228.name = "renderCompleteTime";
field228.accessType = "outputOnly";
field228.appinfo = "Render operation complete";
field228.type = "SFTime";
ProtoInterface220.field[7] = field228;

let field229 = browser.currentScene.createNode("field");
field229.name = "movieFormat";
field229.accessType = "initializeOnly";
field229.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format";
field229.type = "MFString";
field229.value = "\"mpeg\"";
ProtoInterface220.field[8] = field229;

let field230 = browser.currentScene.createNode("field");
field230.name = "imageFormat";
field230.accessType = "initializeOnly";
field230.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format";
field230.type = "MFString";
field230.value = "\"png\"";
ProtoInterface220.field[9] = field230;

let field231 = browser.currentScene.createNode("field");
field231.name = "traceEnabled";
field231.accessType = "initializeOnly";
field231.appinfo = "enable console output to trace script computations and prototype progress";
field231.type = "SFBool";
field231.value = "false";
ProtoInterface220.field[10] = field231;

ProtoDeclare219.protoInterface = ProtoInterface220;

let ProtoBody232 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
let Script233 = browser.currentScene.createNode("Script");
Script233.DEF = "OfflineRenderScript";
Script233.mustEvaluate = True;
let field234 = browser.currentScene.createNode("field");
field234.name = "description";
field234.accessType = "inputOutput";
field234.appinfo = "Text description to be displayed for this OfflineRender";
field234.type = "SFString";
Script233.field = new MFNode();

Script233.field[0] = field234;

let field235 = browser.currentScene.createNode("field");
field235.name = "enabled";
field235.accessType = "inputOutput";
field235.appinfo = "Whether this OfflineRender can be activated";
field235.type = "SFBool";
Script233.field[1] = field235;

let field236 = browser.currentScene.createNode("field");
field236.name = "frameRate";
field236.accessType = "inputOutput";
field236.appinfo = "Frames per second recorded for this rendering";
field236.type = "SFFloat";
Script233.field[2] = field236;

let field237 = browser.currentScene.createNode("field");
field237.name = "frameSize";
field237.accessType = "inputOutput";
field237.appinfo = "Size of frame in number of pixels width and height";
field237.type = "SFVec2f";
Script233.field[3] = field237;

let field238 = browser.currentScene.createNode("field");
field238.name = "pixelAspectRatio";
field238.accessType = "inputOutput";
field238.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field238.type = "SFFloat";
Script233.field[4] = field238;

let field239 = browser.currentScene.createNode("field");
field239.name = "set_startTime";
field239.accessType = "inputOnly";
field239.appinfo = "Begin render operation";
field239.type = "SFTime";
Script233.field[5] = field239;

let field240 = browser.currentScene.createNode("field");
field240.name = "progress";
field240.accessType = "outputOnly";
field240.appinfo = "Progress performing render operation (0..1)";
field240.type = "SFFloat";
Script233.field[6] = field240;

let field241 = browser.currentScene.createNode("field");
field241.name = "renderCompleteTime";
field241.accessType = "outputOnly";
field241.appinfo = "Render operation complete";
field241.type = "SFTime";
Script233.field[7] = field241;

let field242 = browser.currentScene.createNode("field");
field242.name = "movieFormat";
field242.accessType = "initializeOnly";
field242.appinfo = "Format of rendered output movie (mpeg mp4 etc.)";
field242.type = "MFString";
Script233.field[8] = field242;

let field243 = browser.currentScene.createNode("field");
field243.name = "imageFormat";
field243.accessType = "initializeOnly";
field243.appinfo = "Format of rendered output images (png jpeg gif tiff etc.)";
field243.type = "MFString";
Script233.field[9] = field243;

let field244 = browser.currentScene.createNode("field");
field244.name = "traceEnabled";
field244.accessType = "initializeOnly";
field244.appinfo = "enable console output to trace script computations and prototype progress";
field244.type = "SFBool";
Script233.field[10] = field244;

let IS245 = browser.currentScene.createNode("IS");
let connect246 = browser.currentScene.createNode("connect");
connect246.nodeField = "description";
connect246.protoField = "description";
IS245.connect = new MFNode();

IS245.connect[0] = connect246;

let connect247 = browser.currentScene.createNode("connect");
connect247.nodeField = "enabled";
connect247.protoField = "enabled";
IS245.connect[1] = connect247;

let connect248 = browser.currentScene.createNode("connect");
connect248.nodeField = "frameRate";
connect248.protoField = "frameRate";
IS245.connect[2] = connect248;

let connect249 = browser.currentScene.createNode("connect");
connect249.nodeField = "frameSize";
connect249.protoField = "frameSize";
IS245.connect[3] = connect249;

let connect250 = browser.currentScene.createNode("connect");
connect250.nodeField = "pixelAspectRatio";
connect250.protoField = "pixelAspectRatio";
IS245.connect[4] = connect250;

let connect251 = browser.currentScene.createNode("connect");
connect251.nodeField = "set_startTime";
connect251.protoField = "set_startTime";
IS245.connect[5] = connect251;

let connect252 = browser.currentScene.createNode("connect");
connect252.nodeField = "progress";
connect252.protoField = "progress";
IS245.connect[6] = connect252;

let connect253 = browser.currentScene.createNode("connect");
connect253.nodeField = "renderCompleteTime";
connect253.protoField = "renderCompleteTime";
IS245.connect[7] = connect253;

let connect254 = browser.currentScene.createNode("connect");
connect254.nodeField = "movieFormat";
connect254.protoField = "movieFormat";
IS245.connect[8] = connect254;

let connect255 = browser.currentScene.createNode("connect");
connect255.nodeField = "imageFormat";
connect255.protoField = "imageFormat";
IS245.connect[9] = connect255;

let connect256 = browser.currentScene.createNode("connect");
connect256.nodeField = "traceEnabled";
connect256.protoField = "traceEnabled";
IS245.connect[10] = connect256;

Script233.iS = IS245;

let #sourceCode257 = browser.currentScene.createNode("#sourceCode");
Script233.#sourceCode[11] = #sourceCode257;

ProtoBody232.children = new MFNode();

ProtoBody232.children[0] = Script233;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare219.protoBody = ProtoBody232;

browser.currentScene.children[3] = ProtoDeclare219;

//=============== Launch Prototype Example ==============
let Background258 = browser.currentScene.createNode("Background");
Background258.skyColor = new MFColor(new float[0.282353,0.380392,0.470588]);
browser.currentScene.children[4] = Background258;

let Anchor259 = browser.currentScene.createNode("Anchor");
Anchor259.description = "launch CameraExample scene";
Anchor259.url = new MFString(new java.lang.String["CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]);
let Transform260 = browser.currentScene.createNode("Transform");
let Shape261 = browser.currentScene.createNode("Shape");
let Text262 = browser.currentScene.createNode("Text");
Text262.string = new MFString(new java.lang.String["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]);
let FontStyle263 = browser.currentScene.createNode("FontStyle");
FontStyle263.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text262.fontStyle = FontStyle263;

Shape261.geometry = Text262;

let Appearance264 = browser.currentScene.createNode("Appearance");
let Material265 = browser.currentScene.createNode("Material");
Material265.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance264.material = Material265;

Shape261.appearance = Appearance264;

Transform260.children = new MFNode();

Transform260.children[0] = Shape261;

Anchor259.children = new MFNode();

Anchor259.children[0] = Transform260;

browser.currentScene.children[5] = Anchor259;

