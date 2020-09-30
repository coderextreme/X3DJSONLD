let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
//=============== Camera ==============
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
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
<X3DScript DEF="CameraScript" directOutput="true" mustEvaluate="true"><!--binding is controlled externally, all camera operations proceed the same regardless of whether bound or not--><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this Camera" type="SFString"></field>
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
</X3DScript>
<ROUTE fromField="position" fromNode="CameraScript" toField="position" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="orientation" fromNode="CameraScript" toField="orientation" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="isActive" fromNode="CameraScript" toField="set_bind" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="isActive" fromNode="CameraScript" toField="set_bind" toNode="CameraNavInfo"></ROUTE>
<ROUTE fromField="isActive" fromNode="CameraScript" toField="on" toNode="CameraDirectionalLight"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.name = "Camera";
ProtoDeclare2.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
let field4 = browser.currentScene.createNode("field");
field4.name = "description";
field4.accessType = "inputOutput";
field4.appinfo = "Text description to be displayed for this Camera";
field4.type = "SFString";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "position";
field5.accessType = "inputOutput";
field5.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field5.type = "SFVec3f";
field5.value = "0 0 10";
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "orientation";
field6.accessType = "inputOutput";
field6.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field6.type = "SFRotation";
field6.value = "0 0 1 0";
ProtoInterface3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "fieldOfView";
field7.accessType = "inputOutput";
field7.appinfo = "pi/4";
field7.type = "SFFloat";
field7.value = "0.7854";
ProtoInterface3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "set_fraction";
field8.accessType = "inputOnly";
field8.appinfo = "input fraction drives interpolators";
field8.type = "SFFloat";
ProtoInterface3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "set_bind";
field9.accessType = "inputOnly";
field9.appinfo = "input event binds or unbinds this Camera";
field9.type = "SFBool";
ProtoInterface3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "bindTime";
field10.accessType = "outputOnly";
field10.appinfo = "output event indicates when this Camera is bound";
field10.type = "SFTime";
ProtoInterface3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "isBound";
field11.accessType = "outputOnly";
field11.appinfo = "output event indicates whether this Camera is bound or unbound";
field11.type = "SFBool";
ProtoInterface3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "nearClipPlane";
field12.accessType = "inputOutput";
field12.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]";
field12.type = "SFFloat";
field12.value = "0.25";
ProtoInterface3.field[8] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "farClipPlane";
field13.accessType = "inputOutput";
field13.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit";
field13.type = "SFFloat";
field13.value = "0";
ProtoInterface3.field[9] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "shots";
field14.accessType = "inputOutput";
field14.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field14.type = "MFNode";
//initialization nodes (if any) go here
ProtoInterface3.field[10] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "headlight";
field15.accessType = "inputOutput";
field15.appinfo = "Whether camera headlight is on or off";
field15.type = "SFBool";
field15.value = "true";
ProtoInterface3.field[11] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "headlightColor";
field16.accessType = "inputOutput";
field16.appinfo = "Camera headlight color";
field16.type = "SFColor";
field16.value = "1 1 1";
ProtoInterface3.field[12] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "headlightIntensity";
field17.accessType = "inputOutput";
field17.appinfo = "Camera headlight intensity";
field17.type = "SFFloat";
field17.value = "1";
ProtoInterface3.field[13] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "filterColor";
field18.accessType = "inputOutput";
field18.appinfo = "Camera filter color that modifies virtual lens capture";
field18.type = "SFColor";
field18.value = "1 1 1";
ProtoInterface3.field[14] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "filterTransparency";
field19.accessType = "inputOutput";
field19.appinfo = "Camera filter transparency that modifies virtual lens capture";
field19.type = "SFFloat";
field19.value = "1";
ProtoInterface3.field[15] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "upVector";
field20.accessType = "inputOutput";
field20.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field20.type = "SFVec3f";
field20.value = "0 1 0";
ProtoInterface3.field[16] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "fStop";
field21.accessType = "inputOutput";
field21.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field21.type = "SFFloat";
field21.value = "5.6";
ProtoInterface3.field[17] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "focusDistance";
field22.accessType = "inputOutput";
field22.appinfo = "Distance to focal plane of sharpest focus";
field22.type = "SFFloat";
field22.value = "10";
ProtoInterface3.field[18] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "isActive";
field23.accessType = "outputOnly";
field23.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field23.type = "SFBool";
ProtoInterface3.field[19] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "totalDuration";
field24.accessType = "outputOnly";
field24.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field24.type = "SFTime";
ProtoInterface3.field[20] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "offlineRender";
field25.accessType = "inputOutput";
field25.appinfo = "OfflineRender node";
field25.type = "SFNode";
//initialization node (if any) goes here
ProtoInterface3.field[21] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "traceEnabled";
field26.accessType = "initializeOnly";
field26.appinfo = "enable console output to trace script computations and prototype progress";
field26.type = "SFBool";
field26.value = "false";
ProtoInterface3.field[22] = field26;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody27 = browser.currentScene.createNode("ProtoBody");
let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.DEF = "CameraViewpoint";
let IS29 = browser.currentScene.createNode("IS");
let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "description";
connect30.protoField = "description";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "position";
connect31.protoField = "position";
IS29.connect[1] = connect31;

let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "orientation";
connect32.protoField = "orientation";
IS29.connect[2] = connect32;

let connect33 = browser.currentScene.createNode("connect");
connect33.nodeField = "fieldOfView";
connect33.protoField = "fieldOfView";
IS29.connect[3] = connect33;

let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "set_bind";
connect34.protoField = "set_bind";
IS29.connect[4] = connect34;

let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "bindTime";
connect35.protoField = "bindTime";
IS29.connect[5] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "isBound";
connect36.protoField = "isBound";
IS29.connect[6] = connect36;

Viewpoint28.iS = IS29;

ProtoBody27.children = new MFNode();

ProtoBody27.children[0] = Viewpoint28;

//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
let NavigationInfo37 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo37.DEF = "CameraNavInfo";
NavigationInfo37.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
let IS38 = browser.currentScene.createNode("IS");
let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "set_bind";
connect39.protoField = "set_bind";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "headlight";
connect40.protoField = "headlight";
IS38.connect[1] = connect40;

let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "visibilityLimit";
connect41.protoField = "farClipPlane";
IS38.connect[2] = connect41;

//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
NavigationInfo37.iS = IS38;

ProtoBody27.children[1] = NavigationInfo37;

//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
let DirectionalLight42 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight42.DEF = "CameraDirectionalLight";
DirectionalLight42.global = True;
//TODO confirm other default field values match NavigationInfo spec
let IS43 = browser.currentScene.createNode("IS");
let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "on";
connect44.protoField = "headlight";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "color";
connect45.protoField = "headlightColor";
IS43.connect[1] = connect45;

let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "intensity";
connect46.protoField = "headlightIntensity";
IS43.connect[2] = connect46;

DirectionalLight42.iS = IS43;

ProtoBody27.children[2] = DirectionalLight42;

let PositionInterpolator47 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator47.DEF = "CameraPositionInterpolator";
PositionInterpolator47.key = new MFFloat(new float[0,1]);
PositionInterpolator47.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
let IS48 = browser.currentScene.createNode("IS");
let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "set_fraction";
connect49.protoField = "set_fraction";
IS48.connect = new MFNode();

IS48.connect[0] = connect49;

PositionInterpolator47.iS = IS48;

ProtoBody27.children[3] = PositionInterpolator47;

let OrientationInterpolator50 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator50.DEF = "CameraOrientationInterpolator";
OrientationInterpolator50.key = new MFFloat(new float[0,1]);
OrientationInterpolator50.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
let IS51 = browser.currentScene.createNode("IS");
let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "set_fraction";
connect52.protoField = "set_fraction";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

OrientationInterpolator50.iS = IS51;

ProtoBody27.children[4] = OrientationInterpolator50;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromField = "value_changed";
ROUTE53.fromNode = "CameraPositionInterpolator";
ROUTE53.toField = "position";
ROUTE53.toNode = "CameraViewpoint";
ProtoBody27.children[5] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "value_changed";
ROUTE54.fromNode = "CameraOrientationInterpolator";
ROUTE54.toField = "orientation";
ROUTE54.toNode = "CameraViewpoint";
ProtoBody27.children[6] = ROUTE54;

let X3DScript55 = browser.currentScene.createNode("X3DScript");
X3DScript55.DEF = "CameraScript";
X3DScript55.directOutput = True;
X3DScript55.mustEvaluate = True;
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
let field56 = browser.currentScene.createNode("field");
field56.name = "description";
field56.accessType = "inputOutput";
field56.appinfo = "Text description to be displayed for this Camera";
field56.type = "SFString";
X3DScript55.field = new MFNode();

X3DScript55.field[0] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "position";
field57.accessType = "inputOutput";
field57.appinfo = "Camera position in local transformation frame";
field57.type = "SFVec3f";
X3DScript55.field[1] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "orientation";
field58.accessType = "inputOutput";
field58.appinfo = "Camera rotation in local transformation frame";
field58.type = "SFRotation";
X3DScript55.field[2] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "set_fraction";
field59.accessType = "inputOnly";
field59.appinfo = "input fraction drives interpolators";
field59.type = "SFFloat";
X3DScript55.field[3] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "set_bind";
field60.accessType = "inputOnly";
field60.appinfo = "input event binds or unbinds this Camera";
field60.type = "SFBool";
X3DScript55.field[4] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "fieldOfView";
field61.accessType = "inputOutput";
field61.appinfo = "pi/4";
field61.type = "SFFloat";
X3DScript55.field[5] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "nearClipPlane";
field62.accessType = "inputOutput";
field62.appinfo = "Vector distance to near clipping plane";
field62.type = "SFFloat";
X3DScript55.field[6] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "farClipPlane";
field63.accessType = "inputOutput";
field63.appinfo = "Vector distance to far clipping plane";
field63.type = "SFFloat";
X3DScript55.field[7] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "shots";
field64.accessType = "inputOutput";
field64.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field64.type = "MFNode";
//initialization nodes (if any) go here
X3DScript55.field[8] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "filterColor";
field65.accessType = "inputOutput";
field65.appinfo = "Camera filter color that modifies virtual lens capture";
field65.type = "SFColor";
X3DScript55.field[9] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "filterTransparency";
field66.accessType = "inputOutput";
field66.appinfo = "Camera filter transparency that modifies virtual lens capture";
field66.type = "SFFloat";
X3DScript55.field[10] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "upVector";
field67.accessType = "inputOutput";
field67.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field67.type = "SFVec3f";
X3DScript55.field[11] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "fStop";
field68.accessType = "inputOutput";
field68.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field68.type = "SFFloat";
X3DScript55.field[12] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "focusDistance";
field69.accessType = "inputOutput";
field69.appinfo = "Distance to focal plane of sharpest focus";
field69.type = "SFFloat";
X3DScript55.field[13] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "isActive";
field70.accessType = "outputOnly";
field70.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field70.type = "SFBool";
X3DScript55.field[14] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "totalDuration";
field71.accessType = "outputOnly";
field71.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field71.type = "SFTime";
X3DScript55.field[15] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "offlineRender";
field72.accessType = "inputOutput";
field72.appinfo = "OfflineRender node";
field72.type = "SFNode";
//initialization node (if any) goes here
X3DScript55.field[16] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "ViewpointNode";
field73.accessType = "initializeOnly";
field73.appinfo = "node reference to permit getting setting fields from within Script";
field73.type = "SFNode";
let Viewpoint74 = browser.currentScene.createNode("Viewpoint");
Viewpoint74.USE = "CameraViewpoint";
field73.children = new MFNode();

field73.children[0] = Viewpoint74;

X3DScript55.field[17] = field73;

let field75 = browser.currentScene.createNode("field");
field75.name = "NavInfoNode";
field75.accessType = "initializeOnly";
field75.appinfo = "node reference to permit getting setting fields from within Script";
field75.type = "SFNode";
let NavigationInfo76 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo76.USE = "CameraNavInfo";
field75.children = new MFNode();

field75.children[0] = NavigationInfo76;

X3DScript55.field[18] = field75;

let field77 = browser.currentScene.createNode("field");
field77.name = "CameraPI";
field77.accessType = "initializeOnly";
field77.appinfo = "node reference to permit getting setting fields from within Script";
field77.type = "SFNode";
let PositionInterpolator78 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator78.USE = "CameraPositionInterpolator";
field77.children = new MFNode();

field77.children[0] = PositionInterpolator78;

X3DScript55.field[19] = field77;

let field79 = browser.currentScene.createNode("field");
field79.name = "CameraOI";
field79.accessType = "initializeOnly";
field79.appinfo = "node reference to permit getting setting fields from within Script";
field79.type = "SFNode";
let OrientationInterpolator80 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator80.USE = "CameraOrientationInterpolator";
field79.children = new MFNode();

field79.children[0] = OrientationInterpolator80;

X3DScript55.field[20] = field79;

let field81 = browser.currentScene.createNode("field");
field81.name = "key";
field81.accessType = "inputOutput";
field81.appinfo = "key array for interpolators";
field81.type = "MFFloat";
X3DScript55.field[21] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "keyValuePosition";
field82.accessType = "inputOutput";
field82.appinfo = "keyValue array for PositionInterpolator";
field82.type = "MFVec3f";
X3DScript55.field[22] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "keyValueOrientation";
field83.accessType = "inputOutput";
field83.appinfo = "keyValue array for OrientationInterpolator";
field83.type = "MFRotation";
X3DScript55.field[23] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "animated";
field84.accessType = "inputOutput";
field84.appinfo = "whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events";
field84.type = "SFBool";
field84.value = "false";
X3DScript55.field[24] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "initialized";
field85.accessType = "initializeOnly";
field85.appinfo = "perform checkShots() function once immediately after initialization";
field85.type = "SFBool";
field85.value = "false";
X3DScript55.field[25] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "shotCount";
field86.accessType = "initializeOnly";
field86.appinfo = "how many CameraShot nodes are contained in shots array";
field86.type = "SFInt32";
field86.value = "0";
X3DScript55.field[26] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "movesCount";
field87.accessType = "initializeOnly";
field87.appinfo = "how many CameraMove nodes are contained in moves array";
field87.type = "SFInt32";
field87.value = "0";
X3DScript55.field[27] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "frameCount";
field88.accessType = "initializeOnly";
field88.appinfo = "how many frames were created in current loop";
field88.type = "SFFloat";
field88.value = "0";
X3DScript55.field[28] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "startTime";
field89.accessType = "initializeOnly";
field89.appinfo = "holding variable";
field89.type = "SFTime";
field89.value = "0";
X3DScript55.field[29] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "priorTraceTime";
field90.accessType = "initializeOnly";
field90.appinfo = "holding variable";
field90.type = "SFTime";
field90.value = "0";
X3DScript55.field[30] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "traceEnabled";
field91.accessType = "initializeOnly";
field91.appinfo = "enable console output to trace script computations and prototype progress";
field91.type = "SFBool";
X3DScript55.field[31] = field91;

let IS92 = browser.currentScene.createNode("IS");
let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "description";
connect93.protoField = "description";
IS92.connect = new MFNode();

IS92.connect[0] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "position";
connect94.protoField = "position";
IS92.connect[1] = connect94;

let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "orientation";
connect95.protoField = "orientation";
IS92.connect[2] = connect95;

let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "set_fraction";
connect96.protoField = "set_fraction";
IS92.connect[3] = connect96;

let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "set_bind";
connect97.protoField = "set_bind";
IS92.connect[4] = connect97;

let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "fieldOfView";
connect98.protoField = "fieldOfView";
IS92.connect[5] = connect98;

let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "nearClipPlane";
connect99.protoField = "nearClipPlane";
IS92.connect[6] = connect99;

let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "farClipPlane";
connect100.protoField = "farClipPlane";
IS92.connect[7] = connect100;

let connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "shots";
connect101.protoField = "shots";
IS92.connect[8] = connect101;

let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "filterColor";
connect102.protoField = "filterColor";
IS92.connect[9] = connect102;

let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "filterTransparency";
connect103.protoField = "filterTransparency";
IS92.connect[10] = connect103;

let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "upVector";
connect104.protoField = "upVector";
IS92.connect[11] = connect104;

let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "fStop";
connect105.protoField = "fStop";
IS92.connect[12] = connect105;

let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "focusDistance";
connect106.protoField = "focusDistance";
IS92.connect[13] = connect106;

let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "isActive";
connect107.protoField = "isActive";
IS92.connect[14] = connect107;

let connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "totalDuration";
connect108.protoField = "totalDuration";
IS92.connect[15] = connect108;

let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "offlineRender";
connect109.protoField = "offlineRender";
IS92.connect[16] = connect109;

let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "traceEnabled";
connect110.protoField = "traceEnabled";
IS92.connect[17] = connect110;

X3DScript55.iS = IS92;

ProtoBody27.x3DScript[7] = X3DScript55;

let ROUTE111 = browser.currentScene.createNode("ROUTE");
ROUTE111.fromField = "position";
ROUTE111.fromNode = "CameraScript";
ROUTE111.toField = "position";
ROUTE111.toNode = "CameraViewpoint";
ProtoBody27.children[8] = ROUTE111;

let ROUTE112 = browser.currentScene.createNode("ROUTE");
ROUTE112.fromField = "orientation";
ROUTE112.fromNode = "CameraScript";
ROUTE112.toField = "orientation";
ROUTE112.toNode = "CameraViewpoint";
ProtoBody27.children[9] = ROUTE112;

let ROUTE113 = browser.currentScene.createNode("ROUTE");
ROUTE113.fromField = "isActive";
ROUTE113.fromNode = "CameraScript";
ROUTE113.toField = "set_bind";
ROUTE113.toNode = "CameraViewpoint";
ProtoBody27.children[10] = ROUTE113;

let ROUTE114 = browser.currentScene.createNode("ROUTE");
ROUTE114.fromField = "isActive";
ROUTE114.fromNode = "CameraScript";
ROUTE114.toField = "set_bind";
ROUTE114.toNode = "CameraNavInfo";
ProtoBody27.children[11] = ROUTE114;

let ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromField = "isActive";
ROUTE115.fromNode = "CameraScript";
ROUTE115.toField = "on";
ROUTE115.toNode = "CameraDirectionalLight";
ProtoBody27.children[12] = ROUTE115;

ProtoDeclare2.protoBody = ProtoBody27;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

//=============== CameraShot ==============
let ProtoDeclare116 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
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
<ProtoBody><X3DScript DEF="CameraShotScript" directOutput="true" mustEvaluate="true"><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this CameraShot" type="SFString"></field>
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
</X3DScript>
<!--Add any ROUTEs here, going from Script to other nodes within ProtoBody--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare116.name = "CameraShot";
ProtoDeclare116.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot.";
let ProtoInterface117 = browser.currentScene.createNode("ProtoInterface");
let field118 = browser.currentScene.createNode("field");
field118.name = "description";
field118.accessType = "inputOutput";
field118.appinfo = "Text description to be displayed for this CameraShot";
field118.type = "SFString";
ProtoInterface117.field = new MFNode();

ProtoInterface117.field[0] = field118;

let field119 = browser.currentScene.createNode("field");
field119.name = "enabled";
field119.accessType = "inputOutput";
field119.appinfo = "Whether this CameraShot can be activated";
field119.type = "SFBool";
field119.value = "true";
ProtoInterface117.field[1] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "moves";
field120.accessType = "inputOutput";
field120.appinfo = "Set of CameraMovement nodes";
field120.type = "MFNode";
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ProtoInterface117.field[2] = field120;

let field121 = browser.currentScene.createNode("field");
field121.name = "initialPosition";
field121.accessType = "inputOutput";
field121.appinfo = "Setup to reinitialize camera position for this shot";
field121.type = "SFVec3f";
field121.value = "0 0 10";
ProtoInterface117.field[3] = field121;

let field122 = browser.currentScene.createNode("field");
field122.name = "initialOrientation";
field122.accessType = "inputOutput";
field122.appinfo = "Setup to reinitialize camera rotation for this shot";
field122.type = "SFRotation";
field122.value = "0 0 1 0";
ProtoInterface117.field[4] = field122;

let field123 = browser.currentScene.createNode("field");
field123.name = "initialAimPoint";
field123.accessType = "inputOutput";
field123.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field123.type = "SFVec3f";
field123.value = "0 0 0";
ProtoInterface117.field[5] = field123;

let field124 = browser.currentScene.createNode("field");
field124.name = "initialFieldOfView";
field124.accessType = "inputOutput";
field124.appinfo = "pi/4";
field124.type = "SFFloat";
field124.value = "0.7854";
ProtoInterface117.field[6] = field124;

let field125 = browser.currentScene.createNode("field");
field125.name = "initialFStop";
field125.accessType = "inputOutput";
field125.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field125.type = "SFFloat";
field125.value = "5.6";
ProtoInterface117.field[7] = field125;

let field126 = browser.currentScene.createNode("field");
field126.name = "initialFocusDistance";
field126.accessType = "inputOutput";
field126.appinfo = "Distance to focal plane of sharpest focus";
field126.type = "SFFloat";
field126.value = "10";
ProtoInterface117.field[8] = field126;

let field127 = browser.currentScene.createNode("field");
field127.name = "shotDuration";
field127.accessType = "outputOnly";
field127.appinfo = "Subtotal duration of contained CameraMovement move durations";
field127.type = "SFTime";
ProtoInterface117.field[9] = field127;

let field128 = browser.currentScene.createNode("field");
field128.name = "isActive";
field128.accessType = "outputOnly";
field128.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field128.type = "SFBool";
ProtoInterface117.field[10] = field128;

let field129 = browser.currentScene.createNode("field");
field129.name = "traceEnabled";
field129.accessType = "initializeOnly";
field129.appinfo = "enable console output to trace script computations and prototype progress";
field129.type = "SFBool";
field129.value = "false";
ProtoInterface117.field[11] = field129;

ProtoDeclare116.protoInterface = ProtoInterface117;

let ProtoBody130 = browser.currentScene.createNode("ProtoBody");
let X3DScript131 = browser.currentScene.createNode("X3DScript");
X3DScript131.DEF = "CameraShotScript";
X3DScript131.directOutput = True;
X3DScript131.mustEvaluate = True;
let field132 = browser.currentScene.createNode("field");
field132.name = "description";
field132.accessType = "inputOutput";
field132.appinfo = "Text description to be displayed for this CameraShot";
field132.type = "SFString";
X3DScript131.field = new MFNode();

X3DScript131.field[0] = field132;

let field133 = browser.currentScene.createNode("field");
field133.name = "enabled";
field133.accessType = "inputOutput";
field133.appinfo = "Whether this CameraShot can be activated";
field133.type = "SFBool";
X3DScript131.field[1] = field133;

let field134 = browser.currentScene.createNode("field");
field134.name = "moves";
field134.accessType = "inputOutput";
field134.appinfo = "Set of CameraMovement nodes";
field134.type = "MFNode";
//initialization nodes (if any) go here
X3DScript131.field[2] = field134;

let field135 = browser.currentScene.createNode("field");
field135.name = "initialPosition";
field135.accessType = "inputOutput";
field135.appinfo = "Setup to reinitialize camera position for this shot";
field135.type = "SFVec3f";
X3DScript131.field[3] = field135;

let field136 = browser.currentScene.createNode("field");
field136.name = "initialOrientation";
field136.accessType = "inputOutput";
field136.appinfo = "Setup to reinitialize camera rotation for this shot";
field136.type = "SFRotation";
X3DScript131.field[4] = field136;

let field137 = browser.currentScene.createNode("field");
field137.name = "initialAimPoint";
field137.accessType = "inputOutput";
field137.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field137.type = "SFVec3f";
X3DScript131.field[5] = field137;

let field138 = browser.currentScene.createNode("field");
field138.name = "initialFieldOfView";
field138.accessType = "inputOutput";
field138.appinfo = "pi/4";
field138.type = "SFFloat";
X3DScript131.field[6] = field138;

let field139 = browser.currentScene.createNode("field");
field139.name = "initialFStop";
field139.accessType = "inputOutput";
field139.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field139.type = "SFFloat";
X3DScript131.field[7] = field139;

let field140 = browser.currentScene.createNode("field");
field140.name = "initialFocusDistance";
field140.accessType = "inputOutput";
field140.appinfo = "Distance to focal plane of sharpest focus";
field140.type = "SFFloat";
X3DScript131.field[8] = field140;

let field141 = browser.currentScene.createNode("field");
field141.name = "shotDuration";
field141.accessType = "outputOnly";
field141.appinfo = "Subtotal duration of contained CameraMovement move durations";
field141.type = "SFTime";
X3DScript131.field[9] = field141;

let field142 = browser.currentScene.createNode("field");
field142.name = "isActive";
field142.accessType = "outputOnly";
field142.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field142.type = "SFBool";
X3DScript131.field[10] = field142;

let field143 = browser.currentScene.createNode("field");
field143.name = "traceEnabled";
field143.accessType = "initializeOnly";
field143.appinfo = "enable console output to trace script computations and prototype progress";
field143.type = "SFBool";
X3DScript131.field[11] = field143;

let field144 = browser.currentScene.createNode("field");
field144.name = "key";
field144.accessType = "inputOutput";
field144.appinfo = "key array for interpolators";
field144.type = "MFFloat";
X3DScript131.field[12] = field144;

let field145 = browser.currentScene.createNode("field");
field145.name = "keyValuePosition";
field145.accessType = "inputOutput";
field145.appinfo = "keyValue array for PositionInterpolator";
field145.type = "MFVec3f";
X3DScript131.field[13] = field145;

let field146 = browser.currentScene.createNode("field");
field146.name = "keyValueOrientation";
field146.accessType = "inputOutput";
field146.appinfo = "keyValue array for OrientationInterpolator";
field146.type = "MFRotation";
X3DScript131.field[14] = field146;

let IS147 = browser.currentScene.createNode("IS");
let connect148 = browser.currentScene.createNode("connect");
connect148.nodeField = "description";
connect148.protoField = "description";
IS147.connect = new MFNode();

IS147.connect[0] = connect148;

let connect149 = browser.currentScene.createNode("connect");
connect149.nodeField = "enabled";
connect149.protoField = "enabled";
IS147.connect[1] = connect149;

let connect150 = browser.currentScene.createNode("connect");
connect150.nodeField = "moves";
connect150.protoField = "moves";
IS147.connect[2] = connect150;

let connect151 = browser.currentScene.createNode("connect");
connect151.nodeField = "initialPosition";
connect151.protoField = "initialPosition";
IS147.connect[3] = connect151;

let connect152 = browser.currentScene.createNode("connect");
connect152.nodeField = "initialOrientation";
connect152.protoField = "initialOrientation";
IS147.connect[4] = connect152;

let connect153 = browser.currentScene.createNode("connect");
connect153.nodeField = "initialAimPoint";
connect153.protoField = "initialAimPoint";
IS147.connect[5] = connect153;

let connect154 = browser.currentScene.createNode("connect");
connect154.nodeField = "initialFieldOfView";
connect154.protoField = "initialFieldOfView";
IS147.connect[6] = connect154;

let connect155 = browser.currentScene.createNode("connect");
connect155.nodeField = "initialFStop";
connect155.protoField = "initialFStop";
IS147.connect[7] = connect155;

let connect156 = browser.currentScene.createNode("connect");
connect156.nodeField = "initialFocusDistance";
connect156.protoField = "initialFocusDistance";
IS147.connect[8] = connect156;

let connect157 = browser.currentScene.createNode("connect");
connect157.nodeField = "shotDuration";
connect157.protoField = "shotDuration";
IS147.connect[9] = connect157;

let connect158 = browser.currentScene.createNode("connect");
connect158.nodeField = "isActive";
connect158.protoField = "isActive";
IS147.connect[10] = connect158;

let connect159 = browser.currentScene.createNode("connect");
connect159.nodeField = "traceEnabled";
connect159.protoField = "traceEnabled";
IS147.connect[11] = connect159;

X3DScript131.iS = IS147;

ProtoBody130.x3DScript = X3DScript131;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare116.protoBody = ProtoBody130;

browser.currentScene.children[1] = ProtoDeclare116;

//=============== CameraMovement ==============
let ProtoDeclare160 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
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
<ProtoBody><!--First node determines node type of this prototype--><!--Subsequent nodes do not render, but still must be a valid X3D subgraph--><!--Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events--><X3DScript DEF="CameraMovementScript" directOutput="true" mustEvaluate="true"><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this CameraMovement" type="SFString"></field>
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
</X3DScript>
<!--Add any ROUTEs here, going from Script to other nodes within ProtoBody--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare160.name = "CameraMovement";
ProtoDeclare160.appinfo = "CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.";
let ProtoInterface161 = browser.currentScene.createNode("ProtoInterface");
let field162 = browser.currentScene.createNode("field");
field162.name = "description";
field162.accessType = "inputOutput";
field162.appinfo = "Text description to be displayed for this CameraMovement";
field162.type = "SFString";
ProtoInterface161.field = new MFNode();

ProtoInterface161.field[0] = field162;

let field163 = browser.currentScene.createNode("field");
field163.name = "enabled";
field163.accessType = "inputOutput";
field163.appinfo = "Whether this CameraMovement can be activated";
field163.type = "SFBool";
field163.value = "true";
ProtoInterface161.field[1] = field163;

let field164 = browser.currentScene.createNode("field");
field164.name = "duration";
field164.accessType = "inputOutput";
field164.appinfo = "Duration in seconds for this move";
field164.type = "SFFloat";
field164.value = "0";
ProtoInterface161.field[2] = field164;

let field165 = browser.currentScene.createNode("field");
field165.name = "goalPosition";
field165.accessType = "inputOutput";
field165.appinfo = "Goal camera position for this move";
field165.type = "SFVec3f";
field165.value = "0 0 10";
ProtoInterface161.field[3] = field165;

let field166 = browser.currentScene.createNode("field");
field166.name = "goalOrientation";
field166.accessType = "inputOutput";
field166.appinfo = "Goal camera rotation for this move";
field166.type = "SFRotation";
field166.value = "0 0 1 0";
ProtoInterface161.field[4] = field166;

let field167 = browser.currentScene.createNode("field");
field167.name = "tracking";
field167.accessType = "inputOutput";
field167.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field167.type = "SFBool";
field167.value = "false";
ProtoInterface161.field[5] = field167;

let field168 = browser.currentScene.createNode("field");
field168.name = "goalAimPoint";
field168.accessType = "inputOutput";
field168.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field168.type = "SFVec3f";
field168.value = "0 0 0";
ProtoInterface161.field[6] = field168;

let field169 = browser.currentScene.createNode("field");
field169.name = "goalFieldOfView";
field169.accessType = "inputOutput";
field169.appinfo = "Goal fieldOfView for this move";
field169.type = "SFFloat";
field169.value = "0.7854";
ProtoInterface161.field[7] = field169;

let field170 = browser.currentScene.createNode("field");
field170.name = "goalFStop";
field170.accessType = "inputOutput";
field170.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field170.type = "SFFloat";
field170.value = "5.6";
ProtoInterface161.field[8] = field170;

let field171 = browser.currentScene.createNode("field");
field171.name = "goalFocusDistance";
field171.accessType = "inputOutput";
field171.appinfo = "Distance to focal plane of sharpest focus";
field171.type = "SFFloat";
field171.value = "10";
ProtoInterface161.field[9] = field171;

let field172 = browser.currentScene.createNode("field");
field172.name = "isActive";
field172.accessType = "outputOnly";
field172.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field172.type = "SFBool";
ProtoInterface161.field[10] = field172;

let field173 = browser.currentScene.createNode("field");
field173.name = "traceEnabled";
field173.accessType = "initializeOnly";
field173.appinfo = "enable console output to trace script computations and prototype progress";
field173.type = "SFBool";
field173.value = "false";
ProtoInterface161.field[11] = field173;

ProtoDeclare160.protoInterface = ProtoInterface161;

let ProtoBody174 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
let X3DScript175 = browser.currentScene.createNode("X3DScript");
X3DScript175.DEF = "CameraMovementScript";
X3DScript175.directOutput = True;
X3DScript175.mustEvaluate = True;
let field176 = browser.currentScene.createNode("field");
field176.name = "description";
field176.accessType = "inputOutput";
field176.appinfo = "Text description to be displayed for this CameraMovement";
field176.type = "SFString";
X3DScript175.field = new MFNode();

X3DScript175.field[0] = field176;

let field177 = browser.currentScene.createNode("field");
field177.name = "enabled";
field177.accessType = "inputOutput";
field177.appinfo = "Whether this CameraMovement can be activated";
field177.type = "SFBool";
X3DScript175.field[1] = field177;

let field178 = browser.currentScene.createNode("field");
field178.name = "duration";
field178.accessType = "inputOutput";
field178.appinfo = "Duration in seconds for this move";
field178.type = "SFFloat";
X3DScript175.field[2] = field178;

let field179 = browser.currentScene.createNode("field");
field179.name = "goalPosition";
field179.accessType = "inputOutput";
field179.appinfo = "Goal camera position for this move";
field179.type = "SFVec3f";
X3DScript175.field[3] = field179;

let field180 = browser.currentScene.createNode("field");
field180.name = "goalOrientation";
field180.accessType = "inputOutput";
field180.appinfo = "Goal camera rotation for this move";
field180.type = "SFRotation";
X3DScript175.field[4] = field180;

let field181 = browser.currentScene.createNode("field");
field181.name = "tracking";
field181.accessType = "inputOutput";
field181.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field181.type = "SFBool";
X3DScript175.field[5] = field181;

let field182 = browser.currentScene.createNode("field");
field182.name = "goalAimPoint";
field182.accessType = "inputOutput";
field182.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field182.type = "SFVec3f";
X3DScript175.field[6] = field182;

let field183 = browser.currentScene.createNode("field");
field183.name = "goalFieldOfView";
field183.accessType = "inputOutput";
field183.appinfo = "Goal fieldOfView for this move";
field183.type = "SFFloat";
X3DScript175.field[7] = field183;

let field184 = browser.currentScene.createNode("field");
field184.name = "goalFStop";
field184.accessType = "inputOutput";
field184.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field184.type = "SFFloat";
X3DScript175.field[8] = field184;

let field185 = browser.currentScene.createNode("field");
field185.name = "goalFocusDistance";
field185.accessType = "inputOutput";
field185.appinfo = "Distance to focal plane of sharpest focus";
field185.type = "SFFloat";
X3DScript175.field[9] = field185;

let field186 = browser.currentScene.createNode("field");
field186.name = "isActive";
field186.accessType = "outputOnly";
field186.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field186.type = "SFBool";
X3DScript175.field[10] = field186;

let field187 = browser.currentScene.createNode("field");
field187.name = "traceEnabled";
field187.accessType = "initializeOnly";
field187.appinfo = "enable console output to trace script computations and prototype progress";
field187.type = "SFBool";
X3DScript175.field[11] = field187;

let IS188 = browser.currentScene.createNode("IS");
let connect189 = browser.currentScene.createNode("connect");
connect189.nodeField = "description";
connect189.protoField = "description";
IS188.connect = new MFNode();

IS188.connect[0] = connect189;

let connect190 = browser.currentScene.createNode("connect");
connect190.nodeField = "enabled";
connect190.protoField = "enabled";
IS188.connect[1] = connect190;

let connect191 = browser.currentScene.createNode("connect");
connect191.nodeField = "duration";
connect191.protoField = "duration";
IS188.connect[2] = connect191;

let connect192 = browser.currentScene.createNode("connect");
connect192.nodeField = "goalPosition";
connect192.protoField = "goalPosition";
IS188.connect[3] = connect192;

let connect193 = browser.currentScene.createNode("connect");
connect193.nodeField = "goalOrientation";
connect193.protoField = "goalOrientation";
IS188.connect[4] = connect193;

let connect194 = browser.currentScene.createNode("connect");
connect194.nodeField = "tracking";
connect194.protoField = "tracking";
IS188.connect[5] = connect194;

let connect195 = browser.currentScene.createNode("connect");
connect195.nodeField = "goalAimPoint";
connect195.protoField = "goalAimPoint";
IS188.connect[6] = connect195;

let connect196 = browser.currentScene.createNode("connect");
connect196.nodeField = "goalFieldOfView";
connect196.protoField = "goalFieldOfView";
IS188.connect[7] = connect196;

let connect197 = browser.currentScene.createNode("connect");
connect197.nodeField = "goalFStop";
connect197.protoField = "goalFStop";
IS188.connect[8] = connect197;

let connect198 = browser.currentScene.createNode("connect");
connect198.nodeField = "goalFocusDistance";
connect198.protoField = "goalFocusDistance";
IS188.connect[9] = connect198;

let connect199 = browser.currentScene.createNode("connect");
connect199.nodeField = "isActive";
connect199.protoField = "isActive";
IS188.connect[10] = connect199;

let connect200 = browser.currentScene.createNode("connect");
connect200.nodeField = "traceEnabled";
connect200.protoField = "traceEnabled";
IS188.connect[11] = connect200;

X3DScript175.iS = IS188;

ProtoBody174.x3DScript = new undefined();

ProtoBody174.x3DScript[0] = X3DScript175;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare160.protoBody = ProtoBody174;

browser.currentScene.children[2] = ProtoDeclare160;

//=============== OfflineRender ==============
let ProtoDeclare201 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
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
<ProtoBody><!--First node determines node type of this prototype--><!--Subsequent nodes do not render, but still must be a valid X3D subgraph--><X3DScript DEF="OfflineRenderScript" mustEvaluate="true"><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this OfflineRender" type="SFString"></field>
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
</X3DScript>
<!--Add any ROUTEs here, going from Script to other nodes within ProtoBody--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare201.name = "OfflineRender";
ProtoDeclare201.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).";
let ProtoInterface202 = browser.currentScene.createNode("ProtoInterface");
//TODO non-photorealistic rendering (NPR) parameters
let field203 = browser.currentScene.createNode("field");
field203.name = "description";
field203.accessType = "inputOutput";
field203.appinfo = "Text description to be displayed for this OfflineRender";
field203.type = "SFString";
ProtoInterface202.field = new MFNode();

ProtoInterface202.field[0] = field203;

let field204 = browser.currentScene.createNode("field");
field204.name = "enabled";
field204.accessType = "inputOutput";
field204.appinfo = "Whether this OfflineRender can be activated";
field204.type = "SFBool";
field204.value = "true";
ProtoInterface202.field[1] = field204;

let field205 = browser.currentScene.createNode("field");
field205.name = "frameRate";
field205.accessType = "inputOutput";
field205.appinfo = "Frames per second recorded for this rendering";
field205.type = "SFFloat";
field205.value = "30";
ProtoInterface202.field[2] = field205;

let field206 = browser.currentScene.createNode("field");
field206.name = "frameSize";
field206.accessType = "inputOutput";
field206.appinfo = "Size of frame in number of pixels width and height";
field206.type = "SFVec2f";
field206.value = "640 480";
ProtoInterface202.field[3] = field206;

let field207 = browser.currentScene.createNode("field");
field207.name = "pixelAspectRatio";
field207.accessType = "inputOutput";
field207.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field207.type = "SFFloat";
field207.value = "1.33";
ProtoInterface202.field[4] = field207;

let field208 = browser.currentScene.createNode("field");
field208.name = "set_startTime";
field208.accessType = "inputOnly";
field208.appinfo = "Begin render operation";
field208.type = "SFTime";
ProtoInterface202.field[5] = field208;

let field209 = browser.currentScene.createNode("field");
field209.name = "progress";
field209.accessType = "outputOnly";
field209.appinfo = "Progress performing render operation (0..1)";
field209.type = "SFFloat";
ProtoInterface202.field[6] = field209;

let field210 = browser.currentScene.createNode("field");
field210.name = "renderCompleteTime";
field210.accessType = "outputOnly";
field210.appinfo = "Render operation complete";
field210.type = "SFTime";
ProtoInterface202.field[7] = field210;

let field211 = browser.currentScene.createNode("field");
field211.name = "movieFormat";
field211.accessType = "initializeOnly";
field211.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format";
field211.type = "MFString";
field211.value = "\"mpeg\"";
ProtoInterface202.field[8] = field211;

let field212 = browser.currentScene.createNode("field");
field212.name = "imageFormat";
field212.accessType = "initializeOnly";
field212.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format";
field212.type = "MFString";
field212.value = "\"png\"";
ProtoInterface202.field[9] = field212;

let field213 = browser.currentScene.createNode("field");
field213.name = "traceEnabled";
field213.accessType = "initializeOnly";
field213.appinfo = "enable console output to trace script computations and prototype progress";
field213.type = "SFBool";
field213.value = "false";
ProtoInterface202.field[10] = field213;

ProtoDeclare201.protoInterface = ProtoInterface202;

let ProtoBody214 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
let X3DScript215 = browser.currentScene.createNode("X3DScript");
X3DScript215.DEF = "OfflineRenderScript";
X3DScript215.mustEvaluate = True;
let field216 = browser.currentScene.createNode("field");
field216.name = "description";
field216.accessType = "inputOutput";
field216.appinfo = "Text description to be displayed for this OfflineRender";
field216.type = "SFString";
X3DScript215.field = new MFNode();

X3DScript215.field[0] = field216;

let field217 = browser.currentScene.createNode("field");
field217.name = "enabled";
field217.accessType = "inputOutput";
field217.appinfo = "Whether this OfflineRender can be activated";
field217.type = "SFBool";
X3DScript215.field[1] = field217;

let field218 = browser.currentScene.createNode("field");
field218.name = "frameRate";
field218.accessType = "inputOutput";
field218.appinfo = "Frames per second recorded for this rendering";
field218.type = "SFFloat";
X3DScript215.field[2] = field218;

let field219 = browser.currentScene.createNode("field");
field219.name = "frameSize";
field219.accessType = "inputOutput";
field219.appinfo = "Size of frame in number of pixels width and height";
field219.type = "SFVec2f";
X3DScript215.field[3] = field219;

let field220 = browser.currentScene.createNode("field");
field220.name = "pixelAspectRatio";
field220.accessType = "inputOutput";
field220.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field220.type = "SFFloat";
X3DScript215.field[4] = field220;

let field221 = browser.currentScene.createNode("field");
field221.name = "set_startTime";
field221.accessType = "inputOnly";
field221.appinfo = "Begin render operation";
field221.type = "SFTime";
X3DScript215.field[5] = field221;

let field222 = browser.currentScene.createNode("field");
field222.name = "progress";
field222.accessType = "outputOnly";
field222.appinfo = "Progress performing render operation (0..1)";
field222.type = "SFFloat";
X3DScript215.field[6] = field222;

let field223 = browser.currentScene.createNode("field");
field223.name = "renderCompleteTime";
field223.accessType = "outputOnly";
field223.appinfo = "Render operation complete";
field223.type = "SFTime";
X3DScript215.field[7] = field223;

let field224 = browser.currentScene.createNode("field");
field224.name = "movieFormat";
field224.accessType = "initializeOnly";
field224.appinfo = "Format of rendered output movie (mpeg mp4 etc.)";
field224.type = "MFString";
X3DScript215.field[8] = field224;

let field225 = browser.currentScene.createNode("field");
field225.name = "imageFormat";
field225.accessType = "initializeOnly";
field225.appinfo = "Format of rendered output images (png jpeg gif tiff etc.)";
field225.type = "MFString";
X3DScript215.field[9] = field225;

let field226 = browser.currentScene.createNode("field");
field226.name = "traceEnabled";
field226.accessType = "initializeOnly";
field226.appinfo = "enable console output to trace script computations and prototype progress";
field226.type = "SFBool";
X3DScript215.field[10] = field226;

let IS227 = browser.currentScene.createNode("IS");
let connect228 = browser.currentScene.createNode("connect");
connect228.nodeField = "description";
connect228.protoField = "description";
IS227.connect = new MFNode();

IS227.connect[0] = connect228;

let connect229 = browser.currentScene.createNode("connect");
connect229.nodeField = "enabled";
connect229.protoField = "enabled";
IS227.connect[1] = connect229;

let connect230 = browser.currentScene.createNode("connect");
connect230.nodeField = "frameRate";
connect230.protoField = "frameRate";
IS227.connect[2] = connect230;

let connect231 = browser.currentScene.createNode("connect");
connect231.nodeField = "frameSize";
connect231.protoField = "frameSize";
IS227.connect[3] = connect231;

let connect232 = browser.currentScene.createNode("connect");
connect232.nodeField = "pixelAspectRatio";
connect232.protoField = "pixelAspectRatio";
IS227.connect[4] = connect232;

let connect233 = browser.currentScene.createNode("connect");
connect233.nodeField = "set_startTime";
connect233.protoField = "set_startTime";
IS227.connect[5] = connect233;

let connect234 = browser.currentScene.createNode("connect");
connect234.nodeField = "progress";
connect234.protoField = "progress";
IS227.connect[6] = connect234;

let connect235 = browser.currentScene.createNode("connect");
connect235.nodeField = "renderCompleteTime";
connect235.protoField = "renderCompleteTime";
IS227.connect[7] = connect235;

let connect236 = browser.currentScene.createNode("connect");
connect236.nodeField = "movieFormat";
connect236.protoField = "movieFormat";
IS227.connect[8] = connect236;

let connect237 = browser.currentScene.createNode("connect");
connect237.nodeField = "imageFormat";
connect237.protoField = "imageFormat";
IS227.connect[9] = connect237;

let connect238 = browser.currentScene.createNode("connect");
connect238.nodeField = "traceEnabled";
connect238.protoField = "traceEnabled";
IS227.connect[10] = connect238;

X3DScript215.iS = IS227;

ProtoBody214.x3DScript = new undefined();

ProtoBody214.x3DScript[0] = X3DScript215;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare201.protoBody = ProtoBody214;

browser.currentScene.children[3] = ProtoDeclare201;

//=============== Launch Prototype Example ==============
let Background239 = browser.currentScene.createNode("Background");
Background239.skyColor = new MFColor(new float[0.282353,0.380392,0.470588]);
Background239.transparency = 0;
browser.currentScene.children[4] = Background239;

let Anchor240 = browser.currentScene.createNode("Anchor");
Anchor240.description = "launch CameraExample scene";
Anchor240.url = new MFString(new java.lang.String["CameraExamples.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]);
Anchor240.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor240.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform241 = browser.currentScene.createNode("Transform");
Transform241.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform241.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape242 = browser.currentScene.createNode("Shape");
Shape242.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape242.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Text243 = browser.currentScene.createNode("Text");
Text243.string = new MFString(new java.lang.String["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]);
let FontStyle244 = browser.currentScene.createNode("FontStyle");
FontStyle244.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text243.fontStyle = FontStyle244;

Shape242.geometry = Text243;

let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance245.material = Material246;

Shape242.appearance = Appearance245;

Transform241.children = new MFNode();

Transform241.children[0] = Shape242;

Anchor240.children = new MFNode();

Anchor240.children[0] = Transform241;

browser.currentScene.children[5] = Anchor240;

