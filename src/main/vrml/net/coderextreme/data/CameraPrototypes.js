var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
//=============== Camera ==============
ProtoDeclare2 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare2.name = "Camera";
ProtoDeclare2.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.";
ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
field4 = browser.currentScene.createNode("field");
field4.name = "description";
field4.accessType = "inputOutput";
field4.appinfo = "Text description to be displayed for this Camera";
field4.type = "SFString";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

field5 = browser.currentScene.createNode("field");
field5.name = "position";
field5.accessType = "inputOutput";
field5.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field5.type = "SFVec3f";
field5.value = "0 0 10";
ProtoInterface3.field[1] = field5;

field6 = browser.currentScene.createNode("field");
field6.name = "orientation";
field6.accessType = "inputOutput";
field6.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field6.type = "SFRotation";
field6.value = "0 0 1 0";
ProtoInterface3.field[2] = field6;

field7 = browser.currentScene.createNode("field");
field7.name = "fieldOfView";
field7.accessType = "inputOutput";
field7.appinfo = "pi/4";
field7.type = "SFFloat";
field7.value = "0.7854";
ProtoInterface3.field[3] = field7;

field8 = browser.currentScene.createNode("field");
field8.name = "set_fraction";
field8.accessType = "inputOnly";
field8.appinfo = "input fraction drives interpolators";
field8.type = "SFFloat";
ProtoInterface3.field[4] = field8;

field9 = browser.currentScene.createNode("field");
field9.name = "set_bind";
field9.accessType = "inputOnly";
field9.appinfo = "input event binds or unbinds this Camera";
field9.type = "SFBool";
ProtoInterface3.field[5] = field9;

field10 = browser.currentScene.createNode("field");
field10.name = "bindTime";
field10.accessType = "outputOnly";
field10.appinfo = "output event indicates when this Camera is bound";
field10.type = "SFTime";
ProtoInterface3.field[6] = field10;

field11 = browser.currentScene.createNode("field");
field11.name = "isBound";
field11.accessType = "outputOnly";
field11.appinfo = "output event indicates whether this Camera is bound or unbound";
field11.type = "SFBool";
ProtoInterface3.field[7] = field11;

field12 = browser.currentScene.createNode("field");
field12.name = "nearClipPlane";
field12.accessType = "inputOutput";
field12.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]";
field12.type = "SFFloat";
field12.value = "0.25";
ProtoInterface3.field[8] = field12;

field13 = browser.currentScene.createNode("field");
field13.name = "farClipPlane";
field13.accessType = "inputOutput";
field13.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit";
field13.type = "SFFloat";
field13.value = "0";
ProtoInterface3.field[9] = field13;

field14 = browser.currentScene.createNode("field");
field14.name = "shots";
field14.accessType = "inputOutput";
field14.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field14.type = "MFNode";
//initialization nodes (if any) go here
ProtoInterface3.field[10] = field14;

field15 = browser.currentScene.createNode("field");
field15.name = "headlight";
field15.accessType = "inputOutput";
field15.appinfo = "Whether camera headlight is on or off";
field15.type = "SFBool";
field15.value = "true";
ProtoInterface3.field[11] = field15;

field16 = browser.currentScene.createNode("field");
field16.name = "headlightColor";
field16.accessType = "inputOutput";
field16.appinfo = "Camera headlight color";
field16.type = "SFColor";
field16.value = "1 1 1";
ProtoInterface3.field[12] = field16;

field17 = browser.currentScene.createNode("field");
field17.name = "headlightIntensity";
field17.accessType = "inputOutput";
field17.appinfo = "Camera headlight intensity";
field17.type = "SFFloat";
field17.value = "1";
ProtoInterface3.field[13] = field17;

field18 = browser.currentScene.createNode("field");
field18.name = "filterColor";
field18.accessType = "inputOutput";
field18.appinfo = "Camera filter color that modifies virtual lens capture";
field18.type = "SFColor";
field18.value = "1 1 1";
ProtoInterface3.field[14] = field18;

field19 = browser.currentScene.createNode("field");
field19.name = "filterTransparency";
field19.accessType = "inputOutput";
field19.appinfo = "Camera filter transparency that modifies virtual lens capture";
field19.type = "SFFloat";
field19.value = "1";
ProtoInterface3.field[15] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "upVector";
field20.accessType = "inputOutput";
field20.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field20.type = "SFVec3f";
field20.value = "0 1 0";
ProtoInterface3.field[16] = field20;

field21 = browser.currentScene.createNode("field");
field21.name = "fStop";
field21.accessType = "inputOutput";
field21.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field21.type = "SFFloat";
field21.value = "5.6";
ProtoInterface3.field[17] = field21;

field22 = browser.currentScene.createNode("field");
field22.name = "focusDistance";
field22.accessType = "inputOutput";
field22.appinfo = "Distance to focal plane of sharpest focus";
field22.type = "SFFloat";
field22.value = "10";
ProtoInterface3.field[18] = field22;

field23 = browser.currentScene.createNode("field");
field23.name = "isActive";
field23.accessType = "outputOnly";
field23.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field23.type = "SFBool";
ProtoInterface3.field[19] = field23;

field24 = browser.currentScene.createNode("field");
field24.name = "totalDuration";
field24.accessType = "outputOnly";
field24.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field24.type = "SFTime";
ProtoInterface3.field[20] = field24;

field25 = browser.currentScene.createNode("field");
field25.name = "offlineRender";
field25.accessType = "inputOutput";
field25.appinfo = "OfflineRender node";
field25.type = "SFNode";
//initialization node (if any) goes here
ProtoInterface3.field[21] = field25;

field26 = browser.currentScene.createNode("field");
field26.name = "traceEnabled";
field26.accessType = "initializeOnly";
field26.appinfo = "enable console output to trace script computations and prototype progress";
field26.type = "SFBool";
field26.value = "false";
ProtoInterface3.field[22] = field26;

ProtoDeclare2.protoInterface = ProtoInterface3;

ProtoBody27 = browser.currentScene.createNode("ProtoBody");
Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.DEF = "CameraViewpoint";
IS29 = browser.currentScene.createNode("IS");
connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "description";
connect30.protoField = "description";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "position";
connect31.protoField = "position";
IS29.connect[1] = connect31;

connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "orientation";
connect32.protoField = "orientation";
IS29.connect[2] = connect32;

connect33 = browser.currentScene.createNode("connect");
connect33.nodeField = "fieldOfView";
connect33.protoField = "fieldOfView";
IS29.connect[3] = connect33;

connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "set_bind";
connect34.protoField = "set_bind";
IS29.connect[4] = connect34;

connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "bindTime";
connect35.protoField = "bindTime";
IS29.connect[5] = connect35;

connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "isBound";
connect36.protoField = "isBound";
IS29.connect[6] = connect36;

Viewpoint28.iS = IS29;

ProtoBody27.children = new MFNode();

ProtoBody27.children[0] = Viewpoint28;

//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
NavigationInfo37 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo37.DEF = "CameraNavInfo";
NavigationInfo37.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
IS38 = browser.currentScene.createNode("IS");
connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "set_bind";
connect39.protoField = "set_bind";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "headlight";
connect40.protoField = "headlight";
IS38.connect[1] = connect40;

connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "visibilityLimit";
connect41.protoField = "farClipPlane";
IS38.connect[2] = connect41;

//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
NavigationInfo37.iS = IS38;

ProtoBody27.children[1] = NavigationInfo37;

//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
DirectionalLight42 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight42.DEF = "CameraDirectionalLight";
DirectionalLight42.global = True;
//TODO confirm other default field values match NavigationInfo spec
IS43 = browser.currentScene.createNode("IS");
connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "on";
connect44.protoField = "headlight";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "color";
connect45.protoField = "headlightColor";
IS43.connect[1] = connect45;

connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "intensity";
connect46.protoField = "headlightIntensity";
IS43.connect[2] = connect46;

DirectionalLight42.iS = IS43;

ProtoBody27.children[2] = DirectionalLight42;

PositionInterpolator47 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator47.DEF = "CameraPositionInterpolator";
PositionInterpolator47.key = new MFFloat(new float[0,1]);
PositionInterpolator47.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
IS48 = browser.currentScene.createNode("IS");
connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "set_fraction";
connect49.protoField = "set_fraction";
IS48.connect = new MFNode();

IS48.connect[0] = connect49;

PositionInterpolator47.iS = IS48;

ProtoBody27.children[3] = PositionInterpolator47;

OrientationInterpolator50 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator50.DEF = "CameraOrientationInterpolator";
OrientationInterpolator50.key = new MFFloat(new float[0,1]);
OrientationInterpolator50.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
IS51 = browser.currentScene.createNode("IS");
connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "set_fraction";
connect52.protoField = "set_fraction";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

OrientationInterpolator50.iS = IS51;

ProtoBody27.children[4] = OrientationInterpolator50;

ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromField = "value_changed";
ROUTE53.fromNode = "CameraPositionInterpolator";
ROUTE53.toField = "position";
ROUTE53.toNode = "CameraViewpoint";
ProtoBody27.children[5] = ROUTE53;

ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "value_changed";
ROUTE54.fromNode = "CameraOrientationInterpolator";
ROUTE54.toField = "orientation";
ROUTE54.toNode = "CameraViewpoint";
ProtoBody27.children[6] = ROUTE54;

Script55 = browser.currentScene.createNode("Script");
Script55.DEF = "CameraScript";
Script55.directOutput = True;
Script55.mustEvaluate = True;
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
field56 = browser.currentScene.createNode("field");
field56.name = "description";
field56.accessType = "inputOutput";
field56.appinfo = "Text description to be displayed for this Camera";
field56.type = "SFString";
Script55.field = new MFNode();

Script55.field[0] = field56;

field57 = browser.currentScene.createNode("field");
field57.name = "position";
field57.accessType = "inputOutput";
field57.appinfo = "Camera position in local transformation frame";
field57.type = "SFVec3f";
Script55.field[1] = field57;

field58 = browser.currentScene.createNode("field");
field58.name = "orientation";
field58.accessType = "inputOutput";
field58.appinfo = "Camera rotation in local transformation frame";
field58.type = "SFRotation";
Script55.field[2] = field58;

field59 = browser.currentScene.createNode("field");
field59.name = "set_fraction";
field59.accessType = "inputOnly";
field59.appinfo = "input fraction drives interpolators";
field59.type = "SFFloat";
Script55.field[3] = field59;

field60 = browser.currentScene.createNode("field");
field60.name = "set_bind";
field60.accessType = "inputOnly";
field60.appinfo = "input event binds or unbinds this Camera";
field60.type = "SFBool";
Script55.field[4] = field60;

field61 = browser.currentScene.createNode("field");
field61.name = "fieldOfView";
field61.accessType = "inputOutput";
field61.appinfo = "pi/4";
field61.type = "SFFloat";
Script55.field[5] = field61;

field62 = browser.currentScene.createNode("field");
field62.name = "nearClipPlane";
field62.accessType = "inputOutput";
field62.appinfo = "Vector distance to near clipping plane";
field62.type = "SFFloat";
Script55.field[6] = field62;

field63 = browser.currentScene.createNode("field");
field63.name = "farClipPlane";
field63.accessType = "inputOutput";
field63.appinfo = "Vector distance to far clipping plane";
field63.type = "SFFloat";
Script55.field[7] = field63;

field64 = browser.currentScene.createNode("field");
field64.name = "shots";
field64.accessType = "inputOutput";
field64.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field64.type = "MFNode";
//initialization nodes (if any) go here
Script55.field[8] = field64;

field65 = browser.currentScene.createNode("field");
field65.name = "filterColor";
field65.accessType = "inputOutput";
field65.appinfo = "Camera filter color that modifies virtual lens capture";
field65.type = "SFColor";
Script55.field[9] = field65;

field66 = browser.currentScene.createNode("field");
field66.name = "filterTransparency";
field66.accessType = "inputOutput";
field66.appinfo = "Camera filter transparency that modifies virtual lens capture";
field66.type = "SFFloat";
Script55.field[10] = field66;

field67 = browser.currentScene.createNode("field");
field67.name = "upVector";
field67.accessType = "inputOutput";
field67.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field67.type = "SFVec3f";
Script55.field[11] = field67;

field68 = browser.currentScene.createNode("field");
field68.name = "fStop";
field68.accessType = "inputOutput";
field68.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field68.type = "SFFloat";
Script55.field[12] = field68;

field69 = browser.currentScene.createNode("field");
field69.name = "focusDistance";
field69.accessType = "inputOutput";
field69.appinfo = "Distance to focal plane of sharpest focus";
field69.type = "SFFloat";
Script55.field[13] = field69;

field70 = browser.currentScene.createNode("field");
field70.name = "isActive";
field70.accessType = "outputOnly";
field70.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field70.type = "SFBool";
Script55.field[14] = field70;

field71 = browser.currentScene.createNode("field");
field71.name = "totalDuration";
field71.accessType = "outputOnly";
field71.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field71.type = "SFTime";
Script55.field[15] = field71;

field72 = browser.currentScene.createNode("field");
field72.name = "offlineRender";
field72.accessType = "inputOutput";
field72.appinfo = "OfflineRender node";
field72.type = "SFNode";
//initialization node (if any) goes here
Script55.field[16] = field72;

field73 = browser.currentScene.createNode("field");
field73.name = "ViewpointNode";
field73.accessType = "initializeOnly";
field73.appinfo = "node reference to permit getting setting fields from within Script";
field73.type = "SFNode";
Viewpoint74 = browser.currentScene.createNode("Viewpoint");
Viewpoint74.USE = "CameraViewpoint";
field73.children = new MFNode();

field73.children[0] = Viewpoint74;

Script55.field[17] = field73;

field75 = browser.currentScene.createNode("field");
field75.name = "NavInfoNode";
field75.accessType = "initializeOnly";
field75.appinfo = "node reference to permit getting setting fields from within Script";
field75.type = "SFNode";
NavigationInfo76 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo76.USE = "CameraNavInfo";
field75.children = new MFNode();

field75.children[0] = NavigationInfo76;

Script55.field[18] = field75;

field77 = browser.currentScene.createNode("field");
field77.name = "CameraPI";
field77.accessType = "initializeOnly";
field77.appinfo = "node reference to permit getting setting fields from within Script";
field77.type = "SFNode";
PositionInterpolator78 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator78.USE = "CameraPositionInterpolator";
field77.children = new MFNode();

field77.children[0] = PositionInterpolator78;

Script55.field[19] = field77;

field79 = browser.currentScene.createNode("field");
field79.name = "CameraOI";
field79.accessType = "initializeOnly";
field79.appinfo = "node reference to permit getting setting fields from within Script";
field79.type = "SFNode";
OrientationInterpolator80 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator80.USE = "CameraOrientationInterpolator";
field79.children = new MFNode();

field79.children[0] = OrientationInterpolator80;

Script55.field[20] = field79;

field81 = browser.currentScene.createNode("field");
field81.name = "key";
field81.accessType = "inputOutput";
field81.appinfo = "key array for interpolators";
field81.type = "MFFloat";
Script55.field[21] = field81;

field82 = browser.currentScene.createNode("field");
field82.name = "keyValuePosition";
field82.accessType = "inputOutput";
field82.appinfo = "keyValue array for PositionInterpolator";
field82.type = "MFVec3f";
Script55.field[22] = field82;

field83 = browser.currentScene.createNode("field");
field83.name = "keyValueOrientation";
field83.accessType = "inputOutput";
field83.appinfo = "keyValue array for OrientationInterpolator";
field83.type = "MFRotation";
Script55.field[23] = field83;

field84 = browser.currentScene.createNode("field");
field84.name = "animated";
field84.accessType = "inputOutput";
field84.appinfo = "whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events";
field84.type = "SFBool";
field84.value = "false";
Script55.field[24] = field84;

field85 = browser.currentScene.createNode("field");
field85.name = "initialized";
field85.accessType = "initializeOnly";
field85.appinfo = "perform checkShots() function once immediately after initialization";
field85.type = "SFBool";
field85.value = "false";
Script55.field[25] = field85;

field86 = browser.currentScene.createNode("field");
field86.name = "shotCount";
field86.accessType = "initializeOnly";
field86.appinfo = "how many CameraShot nodes are contained in shots array";
field86.type = "SFInt32";
field86.value = "0";
Script55.field[26] = field86;

field87 = browser.currentScene.createNode("field");
field87.name = "movesCount";
field87.accessType = "initializeOnly";
field87.appinfo = "how many CameraMove nodes are contained in moves array";
field87.type = "SFInt32";
field87.value = "0";
Script55.field[27] = field87;

field88 = browser.currentScene.createNode("field");
field88.name = "frameCount";
field88.accessType = "initializeOnly";
field88.appinfo = "how many frames were created in current loop";
field88.type = "SFFloat";
field88.value = "0";
Script55.field[28] = field88;

field89 = browser.currentScene.createNode("field");
field89.name = "startTime";
field89.accessType = "initializeOnly";
field89.appinfo = "holding variable";
field89.type = "SFTime";
field89.value = "0";
Script55.field[29] = field89;

field90 = browser.currentScene.createNode("field");
field90.name = "priorTraceTime";
field90.accessType = "initializeOnly";
field90.appinfo = "holding variable";
field90.type = "SFTime";
field90.value = "0";
Script55.field[30] = field90;

field91 = browser.currentScene.createNode("field");
field91.name = "traceEnabled";
field91.accessType = "initializeOnly";
field91.appinfo = "enable console output to trace script computations and prototype progress";
field91.type = "SFBool";
Script55.field[31] = field91;

IS92 = browser.currentScene.createNode("IS");
connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "description";
connect93.protoField = "description";
IS92.connect = new MFNode();

IS92.connect[0] = connect93;

connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "position";
connect94.protoField = "position";
IS92.connect[1] = connect94;

connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "orientation";
connect95.protoField = "orientation";
IS92.connect[2] = connect95;

connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "set_fraction";
connect96.protoField = "set_fraction";
IS92.connect[3] = connect96;

connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "set_bind";
connect97.protoField = "set_bind";
IS92.connect[4] = connect97;

connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "fieldOfView";
connect98.protoField = "fieldOfView";
IS92.connect[5] = connect98;

connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "nearClipPlane";
connect99.protoField = "nearClipPlane";
IS92.connect[6] = connect99;

connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "farClipPlane";
connect100.protoField = "farClipPlane";
IS92.connect[7] = connect100;

connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "shots";
connect101.protoField = "shots";
IS92.connect[8] = connect101;

connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "filterColor";
connect102.protoField = "filterColor";
IS92.connect[9] = connect102;

connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "filterTransparency";
connect103.protoField = "filterTransparency";
IS92.connect[10] = connect103;

connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "upVector";
connect104.protoField = "upVector";
IS92.connect[11] = connect104;

connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "fStop";
connect105.protoField = "fStop";
IS92.connect[12] = connect105;

connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "focusDistance";
connect106.protoField = "focusDistance";
IS92.connect[13] = connect106;

connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "isActive";
connect107.protoField = "isActive";
IS92.connect[14] = connect107;

connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "totalDuration";
connect108.protoField = "totalDuration";
IS92.connect[15] = connect108;

connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "offlineRender";
connect109.protoField = "offlineRender";
IS92.connect[16] = connect109;

connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "traceEnabled";
connect110.protoField = "traceEnabled";
IS92.connect[17] = connect110;

Script55.iS = IS92;


Script55.setSourceCode(`ecmascript:\n"+
"function initialize () // CameraScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    NavInfoNode.avatarSize[0]   = nearClipPlane;\n"+
"\n"+
"    // remaining setups deferred to invocation of checkShots() method\n"+
"    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\n"+
"    alwaysPrint ('initialize complete');\n"+
"}\n"+
"\n"+
"function checkShots (eventValue)\n"+
"{\n"+
"    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\n"+
"\n"+
"    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\n"+
"    totalDuration= 0;\n"+
"    shotCount  = shots.length;\n"+
"    movesCount = 0;\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\n"+
"       movesCount   += shots[i].moves.length;\n"+
"       totalDuration = totalDuration + shots[i].shotDuration;\n"+
"       if (shots[i].moves.length == 0)\n"+
"       {\n"+
"          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\n"+
"       }\n"+
"    }\n"+
"    // size checks before proceeding\n"+
"    if (shotCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (movesCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (totalDuration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    tracePrint ('number of contained CameraShot nodes=' + shotCount);\n"+
"    tracePrint ('number of contained CameraMove nodes=' + movesCount);\n"+
"    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\n"+
"\n"+
"    // compute interpolators\n"+
"    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"        if (i==0) // initial entries\n"+
"        {\n"+
"           key[0]                   = 0.0; // no previous move\n"+
"           keyValuePosition[0]      = shots[i].initialPosition;\n"+
"           keyValueOrientation[0]   = shots[i].initialOrientation;\n"+
"        }\n"+
"        else     // new shot repositions, reorients camera as clean break from preceding shot/move\n"+
"        {\n"+
"           key[k+1]                 = key[k]; // start from end from previous move\n"+
"           keyValuePosition[k+1]    = shots[i].initialPosition;\n"+
"           keyValueOrientation[k+1] = shots[i].initialOrientation;\n"+
"           k++;\n"+
"        }\n"+
"        tracePrint (shots[i].description);\n"+
"        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\n"+
"\n"+
"        for (j = 0; j < shots[i].moves.length; j++) // moves index\n"+
"        {\n"+
"            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\n"+
"            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\n"+
"            //  tracePrint ('durationFloat=' + durationFloat);\n"+
"            key[k+1]               = key[k] + (durationFloat / totalDuration);\n"+
"            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\n"+
"            if (!animated)\n"+
"            {\n"+
"                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"            }\n"+
"            else\n"+
"            {\n"+
"                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\n"+
"                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\n"+
"\n"+
"                // test if difference vector is zero, if so maintain previous rotation\n"+
"                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\n"+
"                if (shotVector.length() >= 0)\n"+
"                {\n"+
"                    // default view direction is along -Z axis\n"+
"                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\n"+
"                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"                }\n"+
"                else // note (k > 0)\n"+
"                {\n"+
"                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\n"+
"                }\n"+
"\n"+
"                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\n"+
"                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\n"+
"                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\n"+
"                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\n"+
"                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\n"+
"                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\n"+
"            }\n"+
"            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\n"+
"\n"+
"            // check animated parameter:  set true if any of moves are tracking moves\n"+
"            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\n"+
"         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\n"+
"\n"+
"            // intermediate trace\n"+
"            tracePrint ('                key=' + key);\n"+
"            tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"            tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"            tracePrint ('- ' + shots[i].moves[j].description);\n"+
"        }\n"+
"    }\n"+
"    tracePrint ('                key=' + key);\n"+
"    tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"    tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"    if (key.length != keyValuePosition.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValuePosition.length=' + keyValuePosition.length);\n"+
"    }\n"+
"    if (key.length != keyValueOrientation.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValueOrientation.length=' + keyValueOrientation.length);\n"+
"    }\n"+
"    if (key.length != (shotCount + movesCount))\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  '(shotCount + movesCount)=' + (shotCount + movesCount));\n"+
"    }\n"+
"    tracePrint ('           animated=' + animated);\n"+
"    // set node values\n"+
"    CameraPI.key      = key;\n"+
"    CameraOI.key      = key;\n"+
"    CameraPI.keyValue = keyValuePosition;\n"+
"    CameraOI.keyValue = keyValueOrientation;\n"+
"\n"+
"    if (!animated) // output results\n"+
"    {\n"+
"        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"    }\n"+
"    tracePrint ('checkShots() complete');\n"+
"}\n"+
"\n"+
"function stripBrackets (fieldArray)\n"+
"{\n"+
"    // some browsers add brackets to array output strings, this function strips them\n"+
"    outputString = '';\n"+
"    for (i = 0; i < fieldArray.length; i++)\n"+
"    {\n"+
"       outputString += fieldArray[i].toString();\n"+
"       if (i < fieldArray.length - 1) outputString += ' ';\n"+
"    }\n"+
"    return outputString;\n"+
"}\n"+
"\n"+
"function set_fraction (eventValue, timestamp) // input event received for inputOnly field\n"+
"{\n"+
"   // traceEnabled = false;  // for testing purposes\n"+
"\n"+
"   // if Camera is being animated, immediately recompute interpolator settings\n"+
"   if (animated) checkShots (true);\n"+
"\n"+
"   // trace progress on console with reduced output frequency\n"+
"   if (frameCount == 0)\n"+
"   {\n"+
"      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\n"+
"      startTime      = timestamp;\n"+
"      priorTraceTime = timestamp;\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      priorTraceTime = timestamp;\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   if (eventValue == 0)\n"+
"   {\n"+
"      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\n"+
"      frameCount++;\n"+
"   }\n"+
"   else if (eventValue == 1)\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"      }\n"+
"      alwaysPrint ('Animation loop complete.');\n"+
"      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"      frameCount++;\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_bind (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // need to ensure CameraShot nodes are properly initialized\n"+
"   if (initialized == false)\n"+
"   {\n"+
"      checkShots (true);\n"+
"      initialized = true;\n"+
"   }\n"+
"   if (eventValue)\n"+
"   {\n"+
"       tracePrint ('Camera has been bound');\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"       tracePrint ('Camera has been unbound');\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_position (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    position = eventValue;\n"+
"}\n"+
"\n"+
"function set_orientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    orientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_fieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_nearClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    nearClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_farClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    farClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_shots (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    shots = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterColor (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterColor = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterTransparency (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterTransparency = eventValue;\n"+
"}\n"+
"\n"+
"function set_upVector (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    upVector = eventValue;\n"+
"}\n"+
"\n"+
"function set_fStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_focusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    focusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_offlineRender (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    offlineRender = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_animated (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    animated = eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[Camera] ' + outputString + '\\n');\n"+
"}`)
ProtoBody27.children[7] = Script55;

ROUTE111 = browser.currentScene.createNode("ROUTE");
ROUTE111.fromField = "position";
ROUTE111.fromNode = "CameraScript";
ROUTE111.toField = "position";
ROUTE111.toNode = "CameraViewpoint";
ProtoBody27.children[8] = ROUTE111;

ROUTE112 = browser.currentScene.createNode("ROUTE");
ROUTE112.fromField = "orientation";
ROUTE112.fromNode = "CameraScript";
ROUTE112.toField = "orientation";
ROUTE112.toNode = "CameraViewpoint";
ProtoBody27.children[9] = ROUTE112;

ROUTE113 = browser.currentScene.createNode("ROUTE");
ROUTE113.fromField = "isActive";
ROUTE113.fromNode = "CameraScript";
ROUTE113.toField = "set_bind";
ROUTE113.toNode = "CameraViewpoint";
ProtoBody27.children[10] = ROUTE113;

ROUTE114 = browser.currentScene.createNode("ROUTE");
ROUTE114.fromField = "isActive";
ROUTE114.fromNode = "CameraScript";
ROUTE114.toField = "set_bind";
ROUTE114.toNode = "CameraNavInfo";
ProtoBody27.children[11] = ROUTE114;

ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromField = "isActive";
ROUTE115.fromNode = "CameraScript";
ROUTE115.toField = "on";
ROUTE115.toNode = "CameraDirectionalLight";
ProtoBody27.children[12] = ROUTE115;

ProtoDeclare2.protoBody = ProtoBody27;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

//=============== CameraShot ==============
ProtoDeclare116 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare116.name = "CameraShot";
ProtoDeclare116.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot.";
ProtoInterface117 = browser.currentScene.createNode("ProtoInterface");
field118 = browser.currentScene.createNode("field");
field118.name = "description";
field118.accessType = "inputOutput";
field118.appinfo = "Text description to be displayed for this CameraShot";
field118.type = "SFString";
ProtoInterface117.field = new MFNode();

ProtoInterface117.field[0] = field118;

field119 = browser.currentScene.createNode("field");
field119.name = "enabled";
field119.accessType = "inputOutput";
field119.appinfo = "Whether this CameraShot can be activated";
field119.type = "SFBool";
field119.value = "true";
ProtoInterface117.field[1] = field119;

field120 = browser.currentScene.createNode("field");
field120.name = "moves";
field120.accessType = "inputOutput";
field120.appinfo = "Set of CameraMovement nodes";
field120.type = "MFNode";
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ProtoInterface117.field[2] = field120;

field121 = browser.currentScene.createNode("field");
field121.name = "initialPosition";
field121.accessType = "inputOutput";
field121.appinfo = "Setup to reinitialize camera position for this shot";
field121.type = "SFVec3f";
field121.value = "0 0 10";
ProtoInterface117.field[3] = field121;

field122 = browser.currentScene.createNode("field");
field122.name = "initialOrientation";
field122.accessType = "inputOutput";
field122.appinfo = "Setup to reinitialize camera rotation for this shot";
field122.type = "SFRotation";
field122.value = "0 0 1 0";
ProtoInterface117.field[4] = field122;

field123 = browser.currentScene.createNode("field");
field123.name = "initialAimPoint";
field123.accessType = "inputOutput";
field123.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field123.type = "SFVec3f";
field123.value = "0 0 0";
ProtoInterface117.field[5] = field123;

field124 = browser.currentScene.createNode("field");
field124.name = "initialFieldOfView";
field124.accessType = "inputOutput";
field124.appinfo = "pi/4";
field124.type = "SFFloat";
field124.value = "0.7854";
ProtoInterface117.field[6] = field124;

field125 = browser.currentScene.createNode("field");
field125.name = "initialFStop";
field125.accessType = "inputOutput";
field125.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field125.type = "SFFloat";
field125.value = "5.6";
ProtoInterface117.field[7] = field125;

field126 = browser.currentScene.createNode("field");
field126.name = "initialFocusDistance";
field126.accessType = "inputOutput";
field126.appinfo = "Distance to focal plane of sharpest focus";
field126.type = "SFFloat";
field126.value = "10";
ProtoInterface117.field[8] = field126;

field127 = browser.currentScene.createNode("field");
field127.name = "shotDuration";
field127.accessType = "outputOnly";
field127.appinfo = "Subtotal duration of contained CameraMovement move durations";
field127.type = "SFTime";
ProtoInterface117.field[9] = field127;

field128 = browser.currentScene.createNode("field");
field128.name = "isActive";
field128.accessType = "outputOnly";
field128.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field128.type = "SFBool";
ProtoInterface117.field[10] = field128;

field129 = browser.currentScene.createNode("field");
field129.name = "traceEnabled";
field129.accessType = "initializeOnly";
field129.appinfo = "enable console output to trace script computations and prototype progress";
field129.type = "SFBool";
field129.value = "false";
ProtoInterface117.field[11] = field129;

ProtoDeclare116.protoInterface = ProtoInterface117;

ProtoBody130 = browser.currentScene.createNode("ProtoBody");
Script131 = browser.currentScene.createNode("Script");
Script131.DEF = "CameraShotScript";
Script131.directOutput = True;
Script131.mustEvaluate = True;
field132 = browser.currentScene.createNode("field");
field132.name = "description";
field132.accessType = "inputOutput";
field132.appinfo = "Text description to be displayed for this CameraShot";
field132.type = "SFString";
Script131.field = new MFNode();

Script131.field[0] = field132;

field133 = browser.currentScene.createNode("field");
field133.name = "enabled";
field133.accessType = "inputOutput";
field133.appinfo = "Whether this CameraShot can be activated";
field133.type = "SFBool";
Script131.field[1] = field133;

field134 = browser.currentScene.createNode("field");
field134.name = "moves";
field134.accessType = "inputOutput";
field134.appinfo = "Set of CameraMovement nodes";
field134.type = "MFNode";
//initialization nodes (if any) go here
Script131.field[2] = field134;

field135 = browser.currentScene.createNode("field");
field135.name = "initialPosition";
field135.accessType = "inputOutput";
field135.appinfo = "Setup to reinitialize camera position for this shot";
field135.type = "SFVec3f";
Script131.field[3] = field135;

field136 = browser.currentScene.createNode("field");
field136.name = "initialOrientation";
field136.accessType = "inputOutput";
field136.appinfo = "Setup to reinitialize camera rotation for this shot";
field136.type = "SFRotation";
Script131.field[4] = field136;

field137 = browser.currentScene.createNode("field");
field137.name = "initialAimPoint";
field137.accessType = "inputOutput";
field137.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field137.type = "SFVec3f";
Script131.field[5] = field137;

field138 = browser.currentScene.createNode("field");
field138.name = "initialFieldOfView";
field138.accessType = "inputOutput";
field138.appinfo = "pi/4";
field138.type = "SFFloat";
Script131.field[6] = field138;

field139 = browser.currentScene.createNode("field");
field139.name = "initialFStop";
field139.accessType = "inputOutput";
field139.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field139.type = "SFFloat";
Script131.field[7] = field139;

field140 = browser.currentScene.createNode("field");
field140.name = "initialFocusDistance";
field140.accessType = "inputOutput";
field140.appinfo = "Distance to focal plane of sharpest focus";
field140.type = "SFFloat";
Script131.field[8] = field140;

field141 = browser.currentScene.createNode("field");
field141.name = "shotDuration";
field141.accessType = "outputOnly";
field141.appinfo = "Subtotal duration of contained CameraMovement move durations";
field141.type = "SFTime";
Script131.field[9] = field141;

field142 = browser.currentScene.createNode("field");
field142.name = "isActive";
field142.accessType = "outputOnly";
field142.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field142.type = "SFBool";
Script131.field[10] = field142;

field143 = browser.currentScene.createNode("field");
field143.name = "traceEnabled";
field143.accessType = "initializeOnly";
field143.appinfo = "enable console output to trace script computations and prototype progress";
field143.type = "SFBool";
Script131.field[11] = field143;

field144 = browser.currentScene.createNode("field");
field144.name = "key";
field144.accessType = "inputOutput";
field144.appinfo = "key array for interpolators";
field144.type = "MFFloat";
Script131.field[12] = field144;

field145 = browser.currentScene.createNode("field");
field145.name = "keyValuePosition";
field145.accessType = "inputOutput";
field145.appinfo = "keyValue array for PositionInterpolator";
field145.type = "MFVec3f";
Script131.field[13] = field145;

field146 = browser.currentScene.createNode("field");
field146.name = "keyValueOrientation";
field146.accessType = "inputOutput";
field146.appinfo = "keyValue array for OrientationInterpolator";
field146.type = "MFRotation";
Script131.field[14] = field146;

IS147 = browser.currentScene.createNode("IS");
connect148 = browser.currentScene.createNode("connect");
connect148.nodeField = "description";
connect148.protoField = "description";
IS147.connect = new MFNode();

IS147.connect[0] = connect148;

connect149 = browser.currentScene.createNode("connect");
connect149.nodeField = "enabled";
connect149.protoField = "enabled";
IS147.connect[1] = connect149;

connect150 = browser.currentScene.createNode("connect");
connect150.nodeField = "moves";
connect150.protoField = "moves";
IS147.connect[2] = connect150;

connect151 = browser.currentScene.createNode("connect");
connect151.nodeField = "initialPosition";
connect151.protoField = "initialPosition";
IS147.connect[3] = connect151;

connect152 = browser.currentScene.createNode("connect");
connect152.nodeField = "initialOrientation";
connect152.protoField = "initialOrientation";
IS147.connect[4] = connect152;

connect153 = browser.currentScene.createNode("connect");
connect153.nodeField = "initialAimPoint";
connect153.protoField = "initialAimPoint";
IS147.connect[5] = connect153;

connect154 = browser.currentScene.createNode("connect");
connect154.nodeField = "initialFieldOfView";
connect154.protoField = "initialFieldOfView";
IS147.connect[6] = connect154;

connect155 = browser.currentScene.createNode("connect");
connect155.nodeField = "initialFStop";
connect155.protoField = "initialFStop";
IS147.connect[7] = connect155;

connect156 = browser.currentScene.createNode("connect");
connect156.nodeField = "initialFocusDistance";
connect156.protoField = "initialFocusDistance";
IS147.connect[8] = connect156;

connect157 = browser.currentScene.createNode("connect");
connect157.nodeField = "shotDuration";
connect157.protoField = "shotDuration";
IS147.connect[9] = connect157;

connect158 = browser.currentScene.createNode("connect");
connect158.nodeField = "isActive";
connect158.protoField = "isActive";
IS147.connect[10] = connect158;

connect159 = browser.currentScene.createNode("connect");
connect159.nodeField = "traceEnabled";
connect159.protoField = "traceEnabled";
IS147.connect[11] = connect159;

Script131.iS = IS147;


Script131.setSourceCode(`ecmascript:\n"+
"function initialize () // CameraShotScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    // compute shotDuration by summing durations from contained CameraMovement nodes\n"+
"    shotDuration = 0;\n"+
"    for (i = 0; i < moves.length; i++)\n"+
"    {\n"+
"        shotDuration = shotDuration + moves[i].duration;\n"+
"    }\n"+
"    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\n"+
"\n"+
"//  tracePrint ('... initialize() complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_moves (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    moves = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialAimPoint = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraShot] ' + outputString + '\\n');\n"+
"}`)
ProtoBody130.children = new MFNode();

ProtoBody130.children[0] = Script131;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare116.protoBody = ProtoBody130;

browser.currentScene.children[1] = ProtoDeclare116;

//=============== CameraMovement ==============
ProtoDeclare160 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare160.name = "CameraMovement";
ProtoDeclare160.appinfo = "CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.";
ProtoInterface161 = browser.currentScene.createNode("ProtoInterface");
field162 = browser.currentScene.createNode("field");
field162.name = "description";
field162.accessType = "inputOutput";
field162.appinfo = "Text description to be displayed for this CameraMovement";
field162.type = "SFString";
ProtoInterface161.field = new MFNode();

ProtoInterface161.field[0] = field162;

field163 = browser.currentScene.createNode("field");
field163.name = "enabled";
field163.accessType = "inputOutput";
field163.appinfo = "Whether this CameraMovement can be activated";
field163.type = "SFBool";
field163.value = "true";
ProtoInterface161.field[1] = field163;

field164 = browser.currentScene.createNode("field");
field164.name = "duration";
field164.accessType = "inputOutput";
field164.appinfo = "Duration in seconds for this move";
field164.type = "SFFloat";
field164.value = "0";
ProtoInterface161.field[2] = field164;

field165 = browser.currentScene.createNode("field");
field165.name = "goalPosition";
field165.accessType = "inputOutput";
field165.appinfo = "Goal camera position for this move";
field165.type = "SFVec3f";
field165.value = "0 0 10";
ProtoInterface161.field[3] = field165;

field166 = browser.currentScene.createNode("field");
field166.name = "goalOrientation";
field166.accessType = "inputOutput";
field166.appinfo = "Goal camera rotation for this move";
field166.type = "SFRotation";
field166.value = "0 0 1 0";
ProtoInterface161.field[4] = field166;

field167 = browser.currentScene.createNode("field");
field167.name = "tracking";
field167.accessType = "inputOutput";
field167.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field167.type = "SFBool";
field167.value = "false";
ProtoInterface161.field[5] = field167;

field168 = browser.currentScene.createNode("field");
field168.name = "goalAimPoint";
field168.accessType = "inputOutput";
field168.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field168.type = "SFVec3f";
field168.value = "0 0 0";
ProtoInterface161.field[6] = field168;

field169 = browser.currentScene.createNode("field");
field169.name = "goalFieldOfView";
field169.accessType = "inputOutput";
field169.appinfo = "Goal fieldOfView for this move";
field169.type = "SFFloat";
field169.value = "0.7854";
ProtoInterface161.field[7] = field169;

field170 = browser.currentScene.createNode("field");
field170.name = "goalFStop";
field170.accessType = "inputOutput";
field170.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field170.type = "SFFloat";
field170.value = "5.6";
ProtoInterface161.field[8] = field170;

field171 = browser.currentScene.createNode("field");
field171.name = "goalFocusDistance";
field171.accessType = "inputOutput";
field171.appinfo = "Distance to focal plane of sharpest focus";
field171.type = "SFFloat";
field171.value = "10";
ProtoInterface161.field[9] = field171;

field172 = browser.currentScene.createNode("field");
field172.name = "isActive";
field172.accessType = "outputOnly";
field172.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field172.type = "SFBool";
ProtoInterface161.field[10] = field172;

field173 = browser.currentScene.createNode("field");
field173.name = "traceEnabled";
field173.accessType = "initializeOnly";
field173.appinfo = "enable console output to trace script computations and prototype progress";
field173.type = "SFBool";
field173.value = "false";
ProtoInterface161.field[11] = field173;

ProtoDeclare160.protoInterface = ProtoInterface161;

ProtoBody174 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
Script175 = browser.currentScene.createNode("Script");
Script175.DEF = "CameraMovementScript";
Script175.directOutput = True;
Script175.mustEvaluate = True;
field176 = browser.currentScene.createNode("field");
field176.name = "description";
field176.accessType = "inputOutput";
field176.appinfo = "Text description to be displayed for this CameraMovement";
field176.type = "SFString";
Script175.field = new MFNode();

Script175.field[0] = field176;

field177 = browser.currentScene.createNode("field");
field177.name = "enabled";
field177.accessType = "inputOutput";
field177.appinfo = "Whether this CameraMovement can be activated";
field177.type = "SFBool";
Script175.field[1] = field177;

field178 = browser.currentScene.createNode("field");
field178.name = "duration";
field178.accessType = "inputOutput";
field178.appinfo = "Duration in seconds for this move";
field178.type = "SFFloat";
Script175.field[2] = field178;

field179 = browser.currentScene.createNode("field");
field179.name = "goalPosition";
field179.accessType = "inputOutput";
field179.appinfo = "Goal camera position for this move";
field179.type = "SFVec3f";
Script175.field[3] = field179;

field180 = browser.currentScene.createNode("field");
field180.name = "goalOrientation";
field180.accessType = "inputOutput";
field180.appinfo = "Goal camera rotation for this move";
field180.type = "SFRotation";
Script175.field[4] = field180;

field181 = browser.currentScene.createNode("field");
field181.name = "tracking";
field181.accessType = "inputOutput";
field181.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field181.type = "SFBool";
Script175.field[5] = field181;

field182 = browser.currentScene.createNode("field");
field182.name = "goalAimPoint";
field182.accessType = "inputOutput";
field182.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field182.type = "SFVec3f";
Script175.field[6] = field182;

field183 = browser.currentScene.createNode("field");
field183.name = "goalFieldOfView";
field183.accessType = "inputOutput";
field183.appinfo = "Goal fieldOfView for this move";
field183.type = "SFFloat";
Script175.field[7] = field183;

field184 = browser.currentScene.createNode("field");
field184.name = "goalFStop";
field184.accessType = "inputOutput";
field184.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field184.type = "SFFloat";
Script175.field[8] = field184;

field185 = browser.currentScene.createNode("field");
field185.name = "goalFocusDistance";
field185.accessType = "inputOutput";
field185.appinfo = "Distance to focal plane of sharpest focus";
field185.type = "SFFloat";
Script175.field[9] = field185;

field186 = browser.currentScene.createNode("field");
field186.name = "isActive";
field186.accessType = "outputOnly";
field186.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field186.type = "SFBool";
Script175.field[10] = field186;

field187 = browser.currentScene.createNode("field");
field187.name = "traceEnabled";
field187.accessType = "initializeOnly";
field187.appinfo = "enable console output to trace script computations and prototype progress";
field187.type = "SFBool";
Script175.field[11] = field187;

IS188 = browser.currentScene.createNode("IS");
connect189 = browser.currentScene.createNode("connect");
connect189.nodeField = "description";
connect189.protoField = "description";
IS188.connect = new MFNode();

IS188.connect[0] = connect189;

connect190 = browser.currentScene.createNode("connect");
connect190.nodeField = "enabled";
connect190.protoField = "enabled";
IS188.connect[1] = connect190;

connect191 = browser.currentScene.createNode("connect");
connect191.nodeField = "duration";
connect191.protoField = "duration";
IS188.connect[2] = connect191;

connect192 = browser.currentScene.createNode("connect");
connect192.nodeField = "goalPosition";
connect192.protoField = "goalPosition";
IS188.connect[3] = connect192;

connect193 = browser.currentScene.createNode("connect");
connect193.nodeField = "goalOrientation";
connect193.protoField = "goalOrientation";
IS188.connect[4] = connect193;

connect194 = browser.currentScene.createNode("connect");
connect194.nodeField = "tracking";
connect194.protoField = "tracking";
IS188.connect[5] = connect194;

connect195 = browser.currentScene.createNode("connect");
connect195.nodeField = "goalAimPoint";
connect195.protoField = "goalAimPoint";
IS188.connect[6] = connect195;

connect196 = browser.currentScene.createNode("connect");
connect196.nodeField = "goalFieldOfView";
connect196.protoField = "goalFieldOfView";
IS188.connect[7] = connect196;

connect197 = browser.currentScene.createNode("connect");
connect197.nodeField = "goalFStop";
connect197.protoField = "goalFStop";
IS188.connect[8] = connect197;

connect198 = browser.currentScene.createNode("connect");
connect198.nodeField = "goalFocusDistance";
connect198.protoField = "goalFocusDistance";
IS188.connect[9] = connect198;

connect199 = browser.currentScene.createNode("connect");
connect199.nodeField = "isActive";
connect199.protoField = "isActive";
IS188.connect[10] = connect199;

connect200 = browser.currentScene.createNode("connect");
connect200.nodeField = "traceEnabled";
connect200.protoField = "traceEnabled";
IS188.connect[11] = connect200;

Script175.iS = IS188;


Script175.setSourceCode(`ecmascript:\n"+
"function initialize () // CameraMovementScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\n"+
"                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\n"+
"                           );\n"+
"    if (duration < 0)\n"+
"    {\n"+
"       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\n"+
"       duration = 0;\n"+
"    }\n"+
"    else if (duration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: duration=0, nothing to do!');\n"+
"    }\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_goalAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalAimPoint_changed = eventValue;\n"+
"    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\n"+
"\n"+
"    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_duration (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    duration = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_tracking (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    tracking = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraMovement] ' + outputString + '\\n');\n"+
"}`)
ProtoBody174.children = new MFNode();

ProtoBody174.children[0] = Script175;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare160.protoBody = ProtoBody174;

browser.currentScene.children[2] = ProtoDeclare160;

//=============== OfflineRender ==============
ProtoDeclare201 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare201.name = "OfflineRender";
ProtoDeclare201.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).";
ProtoInterface202 = browser.currentScene.createNode("ProtoInterface");
//TODO non-photorealistic rendering (NPR) parameters
field203 = browser.currentScene.createNode("field");
field203.name = "description";
field203.accessType = "inputOutput";
field203.appinfo = "Text description to be displayed for this OfflineRender";
field203.type = "SFString";
ProtoInterface202.field = new MFNode();

ProtoInterface202.field[0] = field203;

field204 = browser.currentScene.createNode("field");
field204.name = "enabled";
field204.accessType = "inputOutput";
field204.appinfo = "Whether this OfflineRender can be activated";
field204.type = "SFBool";
field204.value = "true";
ProtoInterface202.field[1] = field204;

field205 = browser.currentScene.createNode("field");
field205.name = "frameRate";
field205.accessType = "inputOutput";
field205.appinfo = "Frames per second recorded for this rendering";
field205.type = "SFFloat";
field205.value = "30";
ProtoInterface202.field[2] = field205;

field206 = browser.currentScene.createNode("field");
field206.name = "frameSize";
field206.accessType = "inputOutput";
field206.appinfo = "Size of frame in number of pixels width and height";
field206.type = "SFVec2f";
field206.value = "640 480";
ProtoInterface202.field[3] = field206;

field207 = browser.currentScene.createNode("field");
field207.name = "pixelAspectRatio";
field207.accessType = "inputOutput";
field207.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field207.type = "SFFloat";
field207.value = "1.33";
ProtoInterface202.field[4] = field207;

field208 = browser.currentScene.createNode("field");
field208.name = "set_startTime";
field208.accessType = "inputOnly";
field208.appinfo = "Begin render operation";
field208.type = "SFTime";
ProtoInterface202.field[5] = field208;

field209 = browser.currentScene.createNode("field");
field209.name = "progress";
field209.accessType = "outputOnly";
field209.appinfo = "Progress performing render operation (0..1)";
field209.type = "SFFloat";
ProtoInterface202.field[6] = field209;

field210 = browser.currentScene.createNode("field");
field210.name = "renderCompleteTime";
field210.accessType = "outputOnly";
field210.appinfo = "Render operation complete";
field210.type = "SFTime";
ProtoInterface202.field[7] = field210;

field211 = browser.currentScene.createNode("field");
field211.name = "movieFormat";
field211.accessType = "initializeOnly";
field211.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format";
field211.type = "MFString";
field211.value = "\"mpeg\"";
ProtoInterface202.field[8] = field211;

field212 = browser.currentScene.createNode("field");
field212.name = "imageFormat";
field212.accessType = "initializeOnly";
field212.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format";
field212.type = "MFString";
field212.value = "\"png\"";
ProtoInterface202.field[9] = field212;

field213 = browser.currentScene.createNode("field");
field213.name = "traceEnabled";
field213.accessType = "initializeOnly";
field213.appinfo = "enable console output to trace script computations and prototype progress";
field213.type = "SFBool";
field213.value = "false";
ProtoInterface202.field[10] = field213;

ProtoDeclare201.protoInterface = ProtoInterface202;

ProtoBody214 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
Script215 = browser.currentScene.createNode("Script");
Script215.DEF = "OfflineRenderScript";
Script215.mustEvaluate = True;
field216 = browser.currentScene.createNode("field");
field216.name = "description";
field216.accessType = "inputOutput";
field216.appinfo = "Text description to be displayed for this OfflineRender";
field216.type = "SFString";
Script215.field = new MFNode();

Script215.field[0] = field216;

field217 = browser.currentScene.createNode("field");
field217.name = "enabled";
field217.accessType = "inputOutput";
field217.appinfo = "Whether this OfflineRender can be activated";
field217.type = "SFBool";
Script215.field[1] = field217;

field218 = browser.currentScene.createNode("field");
field218.name = "frameRate";
field218.accessType = "inputOutput";
field218.appinfo = "Frames per second recorded for this rendering";
field218.type = "SFFloat";
Script215.field[2] = field218;

field219 = browser.currentScene.createNode("field");
field219.name = "frameSize";
field219.accessType = "inputOutput";
field219.appinfo = "Size of frame in number of pixels width and height";
field219.type = "SFVec2f";
Script215.field[3] = field219;

field220 = browser.currentScene.createNode("field");
field220.name = "pixelAspectRatio";
field220.accessType = "inputOutput";
field220.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field220.type = "SFFloat";
Script215.field[4] = field220;

field221 = browser.currentScene.createNode("field");
field221.name = "set_startTime";
field221.accessType = "inputOnly";
field221.appinfo = "Begin render operation";
field221.type = "SFTime";
Script215.field[5] = field221;

field222 = browser.currentScene.createNode("field");
field222.name = "progress";
field222.accessType = "outputOnly";
field222.appinfo = "Progress performing render operation (0..1)";
field222.type = "SFFloat";
Script215.field[6] = field222;

field223 = browser.currentScene.createNode("field");
field223.name = "renderCompleteTime";
field223.accessType = "outputOnly";
field223.appinfo = "Render operation complete";
field223.type = "SFTime";
Script215.field[7] = field223;

field224 = browser.currentScene.createNode("field");
field224.name = "movieFormat";
field224.accessType = "initializeOnly";
field224.appinfo = "Format of rendered output movie (mpeg mp4 etc.)";
field224.type = "MFString";
Script215.field[8] = field224;

field225 = browser.currentScene.createNode("field");
field225.name = "imageFormat";
field225.accessType = "initializeOnly";
field225.appinfo = "Format of rendered output images (png jpeg gif tiff etc.)";
field225.type = "MFString";
Script215.field[9] = field225;

field226 = browser.currentScene.createNode("field");
field226.name = "traceEnabled";
field226.accessType = "initializeOnly";
field226.appinfo = "enable console output to trace script computations and prototype progress";
field226.type = "SFBool";
Script215.field[10] = field226;

IS227 = browser.currentScene.createNode("IS");
connect228 = browser.currentScene.createNode("connect");
connect228.nodeField = "description";
connect228.protoField = "description";
IS227.connect = new MFNode();

IS227.connect[0] = connect228;

connect229 = browser.currentScene.createNode("connect");
connect229.nodeField = "enabled";
connect229.protoField = "enabled";
IS227.connect[1] = connect229;

connect230 = browser.currentScene.createNode("connect");
connect230.nodeField = "frameRate";
connect230.protoField = "frameRate";
IS227.connect[2] = connect230;

connect231 = browser.currentScene.createNode("connect");
connect231.nodeField = "frameSize";
connect231.protoField = "frameSize";
IS227.connect[3] = connect231;

connect232 = browser.currentScene.createNode("connect");
connect232.nodeField = "pixelAspectRatio";
connect232.protoField = "pixelAspectRatio";
IS227.connect[4] = connect232;

connect233 = browser.currentScene.createNode("connect");
connect233.nodeField = "set_startTime";
connect233.protoField = "set_startTime";
IS227.connect[5] = connect233;

connect234 = browser.currentScene.createNode("connect");
connect234.nodeField = "progress";
connect234.protoField = "progress";
IS227.connect[6] = connect234;

connect235 = browser.currentScene.createNode("connect");
connect235.nodeField = "renderCompleteTime";
connect235.protoField = "renderCompleteTime";
IS227.connect[7] = connect235;

connect236 = browser.currentScene.createNode("connect");
connect236.nodeField = "movieFormat";
connect236.protoField = "movieFormat";
IS227.connect[8] = connect236;

connect237 = browser.currentScene.createNode("connect");
connect237.nodeField = "imageFormat";
connect237.protoField = "imageFormat";
IS227.connect[9] = connect237;

connect238 = browser.currentScene.createNode("connect");
connect238.nodeField = "traceEnabled";
connect238.protoField = "traceEnabled";
IS227.connect[10] = connect238;

Script215.iS = IS227;


Script215.setSourceCode(`ecmascript:\n"+
"function initialize () // OfflineRenderScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameRate (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameRate = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameSize (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameSize = eventValue;\n"+
"}\n"+
"\n"+
"function set_pixelAspectRatio (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    pixelAspectRatio = eventValue;\n"+
"}\n"+
"\n"+
"function set_startTime (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // do something with input eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[OfflineRender] ' + outputString + '\\n');\n"+
"}`)
ProtoBody214.children = new MFNode();

ProtoBody214.children[0] = Script215;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare201.protoBody = ProtoBody214;

browser.currentScene.children[3] = ProtoDeclare201;

//=============== Launch Prototype Example ==============
Background239 = browser.currentScene.createNode("Background");
Background239.skyColor = new MFColor(new float[0.282353,0.380392,0.470588]);
browser.currentScene.children[4] = Background239;

Anchor240 = browser.currentScene.createNode("Anchor");
Anchor240.description = "launch CameraExample scene";
Anchor240.url = new MFString(new java.lang.String["CameraExamples.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]);
Transform241 = browser.currentScene.createNode("Transform");
Shape242 = browser.currentScene.createNode("Shape");
Text243 = browser.currentScene.createNode("Text");
Text243.string = new MFString(new java.lang.String["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]);
FontStyle244 = browser.currentScene.createNode("FontStyle");
FontStyle244.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text243.fontStyle = FontStyle244;

Shape242.geometry = Text243;

Appearance245 = browser.currentScene.createNode("Appearance");
Material246 = browser.currentScene.createNode("Material");
Material246.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance245.material = Material246;

Shape242.appearance = Appearance245;

Transform241.children = new MFNode();

Transform241.children[0] = Shape242;

Anchor240.children = new MFNode();

Anchor240.children[0] = Transform241;

browser.currentScene.children[5] = Anchor240;

