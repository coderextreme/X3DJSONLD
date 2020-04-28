let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
//Utilize ExtrusionCrossSection ProtoInstance as a Shape node (with containerField=\"children\") rather than an Extrusion node (with containerField=\"geometry\").
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ExtrusionCrossSectionExampleShip.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "ExtrusionCrossSection";
ExternProtoDeclare3.appinfo = "Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point";
ExternProtoDeclare3.documentation = "https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d";
ExternProtoDeclare3.url = new MFString(new java.lang.String["ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection"]);
//run-time eventIn Extrusion-modification interfaces for VRML 97 compatibility
let field4 = browser.currentScene.createNode("field");
field4.name = "name";
field4.accessType = "initializeOnly";
field4.appinfo = "Extrusion name";
field4.type = "SFString";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "crossSection";
field5.accessType = "initializeOnly";
field5.appinfo = "Extrusion field";
field5.type = "MFVec2f";
ExternProtoDeclare3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "spine";
field6.accessType = "initializeOnly";
field6.appinfo = "Extrusion field";
field6.type = "MFVec3f";
ExternProtoDeclare3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "scale";
field7.accessType = "initializeOnly";
field7.appinfo = "Extrusion field";
field7.type = "MFVec2f";
ExternProtoDeclare3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "orientation";
field8.accessType = "initializeOnly";
field8.appinfo = "Extrusion field";
field8.type = "MFRotation";
ExternProtoDeclare3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "beginCap";
field9.accessType = "initializeOnly";
field9.appinfo = "Extrusion field";
field9.type = "SFBool";
ExternProtoDeclare3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "endCap";
field10.accessType = "initializeOnly";
field10.appinfo = "Extrusion field";
field10.type = "SFBool";
ExternProtoDeclare3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "ccw";
field11.accessType = "initializeOnly";
field11.appinfo = "Extrusion field";
field11.type = "SFBool";
ExternProtoDeclare3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "convex";
field12.accessType = "initializeOnly";
field12.appinfo = "Extrusion field";
field12.type = "SFBool";
ExternProtoDeclare3.field[8] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "creaseAngle";
field13.accessType = "initializeOnly";
field13.appinfo = "Extrusion field";
field13.type = "SFFloat";
ExternProtoDeclare3.field[9] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "solid";
field14.accessType = "initializeOnly";
field14.appinfo = "Extrusion field";
field14.type = "SFBool";
ExternProtoDeclare3.field[10] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "spineColor";
field15.accessType = "inputOutput";
field15.appinfo = "emissiveColor of spine";
field15.type = "SFColor";
ExternProtoDeclare3.field[11] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "crossSectionColor";
field16.accessType = "inputOutput";
field16.appinfo = "diffuseColor of crossSection";
field16.type = "SFColor";
ExternProtoDeclare3.field[12] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "crossSectionTransparency";
field17.accessType = "inputOutput";
field17.appinfo = "transparency of crossSection";
field17.type = "SFFloat";
ExternProtoDeclare3.field[13] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "extrusionColor";
field18.accessType = "inputOutput";
field18.appinfo = "diffuseColor of extrusion hull";
field18.type = "SFColor";
ExternProtoDeclare3.field[14] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "extrusionTransparency";
field19.accessType = "inputOutput";
field19.appinfo = "transparency of extrusion hull";
field19.type = "SFFloat";
ExternProtoDeclare3.field[15] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "extrusionImageTexture";
field20.accessType = "initializeOnly";
field20.appinfo = "Image to apply to Extrusion";
field20.type = "SFNode";
ExternProtoDeclare3.field[16] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "extrusionTextureTransform";
field21.accessType = "initializeOnly";
field21.appinfo = "TextureTransform coordinates of image applied to Extrusion";
field21.type = "SFNode";
ExternProtoDeclare3.field[17] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "set_crossSection";
field22.accessType = "inputOnly";
field22.appinfo = "Extrusion field";
field22.type = "MFVec2f";
ExternProtoDeclare3.field[18] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "set_spine";
field23.accessType = "inputOnly";
field23.appinfo = "Extrusion field";
field23.type = "MFVec3f";
ExternProtoDeclare3.field[19] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "set_scale";
field24.accessType = "inputOnly";
field24.appinfo = "Extrusion field";
field24.type = "MFVec2f";
ExternProtoDeclare3.field[20] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "set_orientation";
field25.accessType = "inputOnly";
field25.appinfo = "Extrusion field";
field25.type = "MFRotation";
ExternProtoDeclare3.field[21] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "traceEnabled";
field26.accessType = "initializeOnly";
field26.appinfo = "Whether to provide initialization trace statements showing node construction";
field26.type = "SFBool";
ExternProtoDeclare3.field[22] = field26;

browser.currentScene.children[1] = ExternProtoDeclare3;

//====================
//Example instance
let NavigationInfo27 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo27.speed = 4;
browser.currentScene.children[2] = NavigationInfo27;

let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.description = "ship hull";
Viewpoint28.position = new SFVec3f(new float[0,0,40]);
browser.currentScene.children[3] = Viewpoint28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.description = "stack";
Viewpoint29.position = new SFVec3f(new float[8,5,20]);
browser.currentScene.children[4] = Viewpoint29;

let Viewpoint30 = browser.currentScene.createNode("Viewpoint");
Viewpoint30.description = "smoke extrusion start";
Viewpoint30.position = new SFVec3f(new float[6.8,7,10]);
browser.currentScene.children[5] = Viewpoint30;

let Viewpoint31 = browser.currentScene.createNode("Viewpoint");
Viewpoint31.description = "forward starboard quarter";
Viewpoint31.orientation = new SFRotation(new float[0,1,0,0.5]);
Viewpoint31.position = new SFVec3f(new float[20,3,25]);
browser.currentScene.children[6] = Viewpoint31;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform32.translation = new SFVec3f(new float[15,30,0]);
let Viewpoint33 = browser.currentScene.createNode("Viewpoint");
Viewpoint33.description = "touch smoke to animate";
Viewpoint33.orientation = new SFRotation(new float[1,0,0,-1]);
Viewpoint33.position = new SFVec3f(new float[0,0,0]);
Transform32.children = new MFNode();

Transform32.children[0] = Viewpoint33;

browser.currentScene.children[7] = Transform32;

let Background34 = browser.currentScene.createNode("Background");
Background34.groundColor = new MFColor(new float[0.7,0.7,0.7]);
Background34.skyAngle = new MFFloat(new float[0.05,1.5,1.59]);
Background34.skyColor = new MFColor(new float[0.6,0.6,0.4,0.4,0.4,0.7,0.3,0.3,0.6,0.1,0.1,0.3]);
browser.currentScene.children[8] = Background34;

//====================
let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "SmokePosition";
Transform35.translation = new SFVec3f(new float[5.8,7,0]);
//Smoke shows that crossSection, spine, scale and orientation can be animated
let ProtoInstance36 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance36.name = "ExtrusionCrossSection";
ProtoInstance36.DEF = "Smoke";
let fieldValue37 = browser.currentScene.createNode("fieldValue");
fieldValue37.name = "name";
fieldValue37.value = "Smoke";
ProtoInstance36.fieldValue = new MFNode();

ProtoInstance36.fieldValue[0] = fieldValue37;

let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "crossSection";
fieldValue38.value = "0 1 -1 0 0 -0.5 1.5 0 0 1";
ProtoInstance36.fieldValue[1] = fieldValue38;

let fieldValue39 = browser.currentScene.createNode("fieldValue");
fieldValue39.name = "spine";
fieldValue39.value = "0 0 0 -1 0 0 -2 0 0 -3 0 0 -5 0 0";
ProtoInstance36.fieldValue[2] = fieldValue39;

let fieldValue40 = browser.currentScene.createNode("fieldValue");
fieldValue40.name = "scale";
fieldValue40.value = "0.8 0.7 0.7 0.6 0.6 0.5 0.5 0.3 0.4 0.2";
ProtoInstance36.fieldValue[3] = fieldValue40;

let fieldValue41 = browser.currentScene.createNode("fieldValue");
fieldValue41.name = "orientation";
fieldValue41.value = "0 1 0 0 0 1 0 0 0 1 0 -0.4 0 1 0 0 1 0 0 0.4";
ProtoInstance36.fieldValue[4] = fieldValue41;

let fieldValue42 = browser.currentScene.createNode("fieldValue");
fieldValue42.name = "creaseAngle";
fieldValue42.value = "1";
ProtoInstance36.fieldValue[5] = fieldValue42;

let fieldValue43 = browser.currentScene.createNode("fieldValue");
fieldValue43.name = "solid";
fieldValue43.value = "false";
ProtoInstance36.fieldValue[6] = fieldValue43;

let fieldValue44 = browser.currentScene.createNode("fieldValue");
fieldValue44.name = "spineColor";
fieldValue44.value = "1 1 1";
ProtoInstance36.fieldValue[7] = fieldValue44;

let fieldValue45 = browser.currentScene.createNode("fieldValue");
fieldValue45.name = "crossSectionColor";
fieldValue45.value = "0.2 0.2 0.6";
ProtoInstance36.fieldValue[8] = fieldValue45;

let fieldValue46 = browser.currentScene.createNode("fieldValue");
fieldValue46.name = "extrusionColor";
fieldValue46.value = "0 0.9 0.9";
ProtoInstance36.fieldValue[9] = fieldValue46;

let fieldValue47 = browser.currentScene.createNode("fieldValue");
fieldValue47.name = "extrusionTransparency";
fieldValue47.value = "0.5";
ProtoInstance36.fieldValue[10] = fieldValue47;

let fieldValue48 = browser.currentScene.createNode("fieldValue");
fieldValue48.name = "traceEnabled";
fieldValue48.value = "false";
ProtoInstance36.fieldValue[11] = fieldValue48;

Transform35.children = new MFNode();

Transform35.children[0] = ProtoInstance36;

let TouchSensor49 = browser.currentScene.createNode("TouchSensor");
TouchSensor49.DEF = "TouchSmoke";
TouchSensor49.description = "click smoke to animate";
Transform35.children[1] = TouchSensor49;

let TimeSensor50 = browser.currentScene.createNode("TimeSensor");
TimeSensor50.DEF = "SmokeClock";
TimeSensor50.cycleInterval = 30;
TimeSensor50.startTime = -1;
Transform35.children[2] = TimeSensor50;

let CoordinateInterpolator51 = browser.currentScene.createNode("CoordinateInterpolator");
CoordinateInterpolator51.DEF = "SmokeSpineInterpolator";
CoordinateInterpolator51.key = new MFFloat(new float[0,0.2,0.5,0.8,1]);
CoordinateInterpolator51.keyValue = new MFVec3f(new float[0,0,0,-1,0,0,-2,0,0,-3,0,0,-5,0,0,0,0,0,-2,0,0,-4,-0.5,0,-6,-1,0,-8,-2,0,0,0,0,-4,0,0,-8,-1,0,-13,-2,0,-20,-2.5,0,0,0,0,-2,0,0,-4,-0.5,0,-6,-1,0,-8,-2,0,0,0,0,-1,0,0,-2,0,0,-3,0,0,-5,0,0]);
Transform35.children[3] = CoordinateInterpolator51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromField = "touchTime";
ROUTE52.fromNode = "TouchSmoke";
ROUTE52.toField = "startTime";
ROUTE52.toNode = "SmokeClock";
Transform35.children[4] = ROUTE52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromField = "fraction_changed";
ROUTE53.fromNode = "SmokeClock";
ROUTE53.toField = "set_fraction";
ROUTE53.toNode = "SmokeSpineInterpolator";
Transform35.children[5] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "value_changed";
ROUTE54.fromNode = "SmokeSpineInterpolator";
ROUTE54.toField = "set_spine";
ROUTE54.toNode = "Smoke";
Transform35.children[6] = ROUTE54;

browser.currentScene.children[9] = Transform35;

let Transform55 = browser.currentScene.createNode("Transform");
Transform55.DEF = "SuperstructurePosition";
Transform55.translation = new SFVec3f(new float[12,1,0]);
let ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "ExtrusionCrossSection";
ProtoInstance56.DEF = "Superstructure";
let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "name";
fieldValue57.value = "Superstructure";
ProtoInstance56.fieldValue = new MFNode();

ProtoInstance56.fieldValue[0] = fieldValue57;

let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "crossSection";
fieldValue58.value = "0.1 1 0.1 -1 -1 -1 -1 1 0.1 1";
ProtoInstance56.fieldValue[1] = fieldValue58;

let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "spine";
fieldValue59.value = "0 0 0 0 1 0 0 1.95 0 0 1.96 0 0 3 0";
ProtoInstance56.fieldValue[2] = fieldValue59;

let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "scale";
fieldValue60.value = "6 2 6 2 6 2 1 1.8 1 1.8";
ProtoInstance56.fieldValue[3] = fieldValue60;

let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "spineColor";
fieldValue61.value = "0.7 0.7 0";
ProtoInstance56.fieldValue[4] = fieldValue61;

let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "ccw";
fieldValue62.value = "true";
ProtoInstance56.fieldValue[5] = fieldValue62;

let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "crossSectionColor";
fieldValue63.value = "0.6 0.6 0.2";
ProtoInstance56.fieldValue[6] = fieldValue63;

let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "extrusionColor";
fieldValue64.value = "0.3 0.6 0.6";
ProtoInstance56.fieldValue[7] = fieldValue64;

let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "extrusionTransparency";
fieldValue65.value = "0.6";
ProtoInstance56.fieldValue[8] = fieldValue65;

let fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "traceEnabled";
fieldValue66.value = "false";
ProtoInstance56.fieldValue[9] = fieldValue66;

Transform55.children = new MFNode();

Transform55.children[0] = ProtoInstance56;

browser.currentScene.children[10] = Transform55;

let Transform67 = browser.currentScene.createNode("Transform");
Transform67.DEF = "StackPosition";
Transform67.translation = new SFVec3f(new float[8,1,0]);
let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "ExtrusionCrossSection";
ProtoInstance68.DEF = "Stack";
let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "name";
fieldValue69.value = "Stack";
ProtoInstance68.fieldValue = new MFNode();

ProtoInstance68.fieldValue[0] = fieldValue69;

let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "crossSection";
fieldValue70.value = "0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1";
ProtoInstance68.fieldValue[1] = fieldValue70;

let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "spine";
fieldValue71.value = "0.1 2 0 0 5 0 -0.4 5.6 0 -1 6 0";
ProtoInstance68.fieldValue[2] = fieldValue71;

let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "scale";
fieldValue72.value = "1 1 1 1 0.9 0.85 0.8 0.4";
ProtoInstance68.fieldValue[3] = fieldValue72;

let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "orientation";
fieldValue73.value = "0 1 0 0 0 1 0 0 0 1 0 0 0 0 1 0.4";
ProtoInstance68.fieldValue[4] = fieldValue73;

let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "spineColor";
fieldValue74.value = "1 1 1";
ProtoInstance68.fieldValue[5] = fieldValue74;

let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "creaseAngle";
fieldValue75.value = "1";
ProtoInstance68.fieldValue[6] = fieldValue75;

let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "crossSectionColor";
fieldValue76.value = "0.8 0.2 0.2";
ProtoInstance68.fieldValue[7] = fieldValue76;

let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "crossSectionTransparency";
fieldValue77.value = "0.1";
ProtoInstance68.fieldValue[8] = fieldValue77;

let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "extrusionColor";
fieldValue78.value = "0.3 0.3 0.3";
ProtoInstance68.fieldValue[9] = fieldValue78;

let fieldValue79 = browser.currentScene.createNode("fieldValue");
fieldValue79.name = "extrusionTransparency";
fieldValue79.value = "0.5";
ProtoInstance68.fieldValue[10] = fieldValue79;

let fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "traceEnabled";
fieldValue80.value = "false";
ProtoInstance68.fieldValue[11] = fieldValue80;

Transform67.children = new MFNode();

Transform67.children[0] = ProtoInstance68;

browser.currentScene.children[11] = Transform67;

let Transform81 = browser.currentScene.createNode("Transform");
Transform81.DEF = "HullPosition";
Transform81.translation = new SFVec3f(new float[0,1,0]);
let ProtoInstance82 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance82.name = "ExtrusionCrossSection";
ProtoInstance82.DEF = "Hull";
let fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "name";
fieldValue83.value = "Hull";
ProtoInstance82.fieldValue = new MFNode();

ProtoInstance82.fieldValue[0] = fieldValue83;

let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "solid";
fieldValue84.value = "false";
ProtoInstance82.fieldValue[1] = fieldValue84;

let fieldValue85 = browser.currentScene.createNode("fieldValue");
fieldValue85.name = "crossSection";
fieldValue85.value = "0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1";
ProtoInstance82.fieldValue[2] = fieldValue85;

let fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "spine";
fieldValue86.value = "-20 0 0 -17 0 0 0 0 0 10 0 0 22 1 0";
ProtoInstance82.fieldValue[3] = fieldValue86;

let fieldValue87 = browser.currentScene.createNode("fieldValue");
fieldValue87.name = "scale";
fieldValue87.value = "3 4 4 4 4 4 4 4 5 0.1";
ProtoInstance82.fieldValue[4] = fieldValue87;

let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "orientation";
fieldValue88.value = "1 0 0 0 1 0 0 0 1 0 0 0 0 1 0 0 0 0 1 -0.5";
ProtoInstance82.fieldValue[5] = fieldValue88;

let fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "traceEnabled";
fieldValue89.value = "false";
ProtoInstance82.fieldValue[6] = fieldValue89;

Transform81.children = new MFNode();

Transform81.children[0] = ProtoInstance82;

browser.currentScene.children[12] = Transform81;

//====================
//Display world coordinate axes at (0 0 0)
let Transform90 = browser.currentScene.createNode("Transform");
Transform90.scale = new SFVec3f(new float[5,5,5]);
let Inline91 = browser.currentScene.createNode("Inline");
Inline91.DEF = "CoordinateAxes";
Inline91.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform90.children = new MFNode();

Transform90.children[0] = Inline91;

browser.currentScene.children[13] = Transform90;

//Display smoke extrusion coordinate axes: y along spine, x pointing up
let Transform92 = browser.currentScene.createNode("Transform");
Transform92.translation = new SFVec3f(new float[6,8.5,0]);
let Transform93 = browser.currentScene.createNode("Transform");
Transform93.rotation = new SFRotation(new float[0,0,1,1.57]);
let Inline94 = browser.currentScene.createNode("Inline");
Inline94.USE = "CoordinateAxes";
Transform93.children = new MFNode();

Transform93.children[0] = Inline94;

Transform92.children = new MFNode();

Transform92.children[0] = Transform93;

browser.currentScene.children[14] = Transform92;

