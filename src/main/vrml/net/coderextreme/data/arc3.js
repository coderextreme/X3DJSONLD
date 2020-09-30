let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = new SFVec3f(new float[0,0,5]);
Viewpoint2.description = "Only Viewpoint";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = new MFColor(new float[0.4,0.4,0.4]);
Background3.transparency = 0;
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "DECLpoint_G1_node";
Transform4.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform4.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape5 = browser.currentScene.createNode("Shape");
Shape5.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere6 = browser.currentScene.createNode("Sphere");
Sphere6.radius = 0.1;
Shape5.geometry = Sphere6;

let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[1,0,0]);
Appearance7.material = Material8;

Shape5.appearance = Appearance7;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

let PositionInterpolator9 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator9.DEF = "DECLpoint_G1_PI1";
PositionInterpolator9.key = new MFFloat(new float[0,1]);
PositionInterpolator9.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform4.children[1] = PositionInterpolator9;

let TimeSensor10 = browser.currentScene.createNode("TimeSensor");
TimeSensor10.DEF = "DECLpoint_G1_CL1";
TimeSensor10.cycleInterval = 3;
TimeSensor10.loop = True;
Transform4.children[2] = TimeSensor10;

let ROUTE11 = browser.currentScene.createNode("ROUTE");
ROUTE11.fromNode = "DECLpoint_G1_CL1";
ROUTE11.fromField = "cycleTime";
ROUTE11.toNode = "DECLpoint_G1_MB1";
ROUTE11.toField = "set_location";
Transform4.children[3] = ROUTE11;

let ROUTE12 = browser.currentScene.createNode("ROUTE");
ROUTE12.fromNode = "DECLpoint_G1_CL1";
ROUTE12.fromField = "fraction_changed";
ROUTE12.toNode = "DECLpoint_G1_PI1";
ROUTE12.toField = "set_fraction";
Transform4.children[4] = ROUTE12;

let ROUTE13 = browser.currentScene.createNode("ROUTE");
ROUTE13.fromNode = "DECLpoint_G1_MB1";
ROUTE13.fromField = "keyValue";
ROUTE13.toNode = "DECLpoint_G1_PI1";
ROUTE13.toField = "keyValue";
Transform4.children[5] = ROUTE13;

let ROUTE14 = browser.currentScene.createNode("ROUTE");
ROUTE14.fromNode = "DECLpoint_G1_PI1";
ROUTE14.fromField = "value_changed";
ROUTE14.toNode = "DECLpoint_G1_node";
ROUTE14.toField = "set_translation";
Transform4.children[6] = ROUTE14;

let X3DScript15 = browser.currentScene.createNode("X3DScript");
X3DScript15.DEF = "DECLpoint_G1_MB1";
let field16 = browser.currentScene.createNode("field");
field16.name = "translation";
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.value = "0 0 0";
X3DScript15.field = new MFNode();

X3DScript15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "old";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0 0 0";
X3DScript15.field[1] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "set_location";
field18.accessType = "inputOnly";
field18.type = "SFTime";
X3DScript15.field[2] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "keyValue";
field19.accessType = "inputOutput";
field19.type = "MFVec3f";
field19.value = "0 0 0 0 5 0";
X3DScript15.field[3] = field19;

Transform4.x3DScript[7] = X3DScript15;

browser.currentScene.children[2] = Transform4;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "DECLpoint_G2_node";
Transform20.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform20.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape21 = browser.currentScene.createNode("Shape");
Shape21.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape21.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 0.1;
Shape21.geometry = Sphere22;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[1,0,0]);
Appearance23.material = Material24;

Shape21.appearance = Appearance23;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

let PositionInterpolator25 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator25.DEF = "DECLpoint_G2_PI1";
PositionInterpolator25.key = new MFFloat(new float[0,1]);
PositionInterpolator25.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform20.children[1] = PositionInterpolator25;

let TimeSensor26 = browser.currentScene.createNode("TimeSensor");
TimeSensor26.DEF = "DECLpoint_G2_CL1";
TimeSensor26.cycleInterval = 3;
TimeSensor26.loop = True;
Transform20.children[2] = TimeSensor26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "DECLpoint_G2_CL1";
ROUTE27.fromField = "cycleTime";
ROUTE27.toNode = "DECLpoint_G2_MB1";
ROUTE27.toField = "set_location";
Transform20.children[3] = ROUTE27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "DECLpoint_G2_CL1";
ROUTE28.fromField = "fraction_changed";
ROUTE28.toNode = "DECLpoint_G2_PI1";
ROUTE28.toField = "set_fraction";
Transform20.children[4] = ROUTE28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromNode = "DECLpoint_G2_MB1";
ROUTE29.fromField = "keyValue";
ROUTE29.toNode = "DECLpoint_G2_PI1";
ROUTE29.toField = "keyValue";
Transform20.children[5] = ROUTE29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "DECLpoint_G2_PI1";
ROUTE30.fromField = "value_changed";
ROUTE30.toNode = "DECLpoint_G2_node";
ROUTE30.toField = "set_translation";
Transform20.children[6] = ROUTE30;

let X3DScript31 = browser.currentScene.createNode("X3DScript");
X3DScript31.DEF = "DECLpoint_G2_MB1";
let field32 = browser.currentScene.createNode("field");
field32.name = "translation";
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.value = "0 0 0";
X3DScript31.field = new MFNode();

X3DScript31.field[0] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "old";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "0 0 0";
X3DScript31.field[1] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "set_location";
field34.accessType = "inputOnly";
field34.type = "SFTime";
X3DScript31.field[2] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "keyValue";
field35.accessType = "inputOutput";
field35.type = "MFVec3f";
field35.value = "0 0 0 0 5 0";
X3DScript31.field[3] = field35;

Transform20.x3DScript[7] = X3DScript31;

browser.currentScene.children[3] = Transform20;

let Group36 = browser.currentScene.createNode("Group");
Group36.bboxCenter = new SFVec3f(new float[0,0,0]);
Group36.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "DECLx3dconnector_connector1_trans";
Transform37.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform37.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "DECLx3dconnector_connector1_rotscale";
Transform38.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform38.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape39 = browser.currentScene.createNode("Shape");
Shape39.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape39.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material41.transparency = 0.5;
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

let Cylinder42 = browser.currentScene.createNode("Cylinder");
Cylinder42.radius = 0.05;
Shape39.geometry = Cylinder42;

Transform38.children = new MFNode();

Transform38.children[0] = Shape39;

Transform37.children = new MFNode();

Transform37.children[0] = Transform38;

Group36.children = new MFNode();

Group36.children[0] = Transform37;

let X3DScript43 = browser.currentScene.createNode("X3DScript");
X3DScript43.DEF = "DECLx3dconnector_connector1_S1";
let field44 = browser.currentScene.createNode("field");
field44.name = "startnode";
field44.accessType = "initializeOnly";
field44.type = "SFNode";
let Group45 = browser.currentScene.createNode("Group");
Group45.USE = "DECLpoint_G1_node";
field44.children = new MFNode();

field44.children[0] = Group45;

X3DScript43.field = new MFNode();

X3DScript43.field[0] = field44;

let field46 = browser.currentScene.createNode("field");
field46.name = "endnode";
field46.accessType = "initializeOnly";
field46.type = "SFNode";
let Group47 = browser.currentScene.createNode("Group");
Group47.USE = "DECLpoint_G2_node";
field46.children = new MFNode();

field46.children[0] = Group47;

X3DScript43.field[1] = field46;

let field48 = browser.currentScene.createNode("field");
field48.name = "position";
field48.accessType = "inputOutput";
field48.type = "SFNode";
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.USE = "DECLx3dconnector_connector1_trans";
field48.children = new MFNode();

field48.children[0] = Transform49;

X3DScript43.field[2] = field48;

let field50 = browser.currentScene.createNode("field");
field50.name = "rotscale";
field50.accessType = "inputOutput";
field50.type = "SFNode";
let Transform51 = browser.currentScene.createNode("Transform");
Transform51.USE = "DECLx3dconnector_connector1_rotscale";
field50.children = new MFNode();

field50.children[0] = Transform51;

X3DScript43.field[3] = field50;

let field52 = browser.currentScene.createNode("field");
field52.name = "set_startpoint";
field52.accessType = "inputOnly";
field52.type = "SFVec3f";
X3DScript43.field[4] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "set_endpoint";
field53.accessType = "inputOnly";
field53.type = "SFVec3f";
X3DScript43.field[5] = field53;

Group36.x3DScript[1] = X3DScript43;

browser.currentScene.children[4] = Group36;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "DECLpoint_G1_node";
ROUTE54.fromField = "translation";
ROUTE54.toNode = "DECLx3dconnector_connector1_S1";
ROUTE54.toField = "set_startpoint";
browser.currentScene.children[5] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "DECLpoint_G2_node";
ROUTE55.fromField = "translation";
ROUTE55.toNode = "DECLx3dconnector_connector1_S1";
ROUTE55.toField = "set_endpoint";
browser.currentScene.children[6] = ROUTE55;

