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
Transform4.DEF = "G1";
Transform4.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform4.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform5 = browser.currentScene.createNode("Transform");
Transform5.DEF = "DECLpoint_INSTANCE_node";
Transform5.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape6 = browser.currentScene.createNode("Shape");
Shape6.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape6.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere7 = browser.currentScene.createNode("Sphere");
Sphere7.radius = 0.1;
Shape6.geometry = Sphere7;

let Appearance8 = browser.currentScene.createNode("Appearance");
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[1,0,0]);
Appearance8.material = Material9;

Shape6.appearance = Appearance8;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

let PositionInterpolator10 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator10.DEF = "DECLpoint_INSTANCE_PI1";
PositionInterpolator10.key = new MFFloat(new float[0,1]);
PositionInterpolator10.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform5.children[1] = PositionInterpolator10;

let TimeSensor11 = browser.currentScene.createNode("TimeSensor");
TimeSensor11.DEF = "DECLpoint_INSTANCE_CL1";
TimeSensor11.cycleInterval = 3;
TimeSensor11.loop = True;
Transform5.children[2] = TimeSensor11;

let ROUTE12 = browser.currentScene.createNode("ROUTE");
ROUTE12.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE12.fromField = "cycleTime";
ROUTE12.toNode = "DECLpoint_INSTANCE_MB1";
ROUTE12.toField = "set_location";
Transform5.children[3] = ROUTE12;

let ROUTE13 = browser.currentScene.createNode("ROUTE");
ROUTE13.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE13.fromField = "fraction_changed";
ROUTE13.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE13.toField = "set_fraction";
Transform5.children[4] = ROUTE13;

let ROUTE14 = browser.currentScene.createNode("ROUTE");
ROUTE14.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE14.fromField = "keyValue";
ROUTE14.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE14.toField = "keyValue";
Transform5.children[5] = ROUTE14;

let ROUTE15 = browser.currentScene.createNode("ROUTE");
ROUTE15.fromNode = "DECLpoint_INSTANCE_PI1";
ROUTE15.fromField = "value_changed";
ROUTE15.toNode = "DECLpoint_INSTANCE_node";
ROUTE15.toField = "set_translation";
Transform5.children[6] = ROUTE15;

let ROUTE16 = browser.currentScene.createNode("ROUTE");
ROUTE16.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE16.fromField = "translation_changed";
ROUTE16.toNode = "DECLpoint_INSTANCE_node";
ROUTE16.toField = "set_translation";
Transform5.children[7] = ROUTE16;

let X3DScript17 = browser.currentScene.createNode("X3DScript");
X3DScript17.DEF = "DECLpoint_INSTANCE_MB1";
let field18 = browser.currentScene.createNode("field");
field18.name = "translation";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
X3DScript17.field = new MFNode();

X3DScript17.field[0] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "old";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
X3DScript17.field[1] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "set_location";
field20.accessType = "inputOnly";
field20.type = "SFTime";
X3DScript17.field[2] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "keyValue";
field21.accessType = "inputOutput";
field21.type = "MFVec3f";
field21.value = "0 0 0 0 5 0";
X3DScript17.field[3] = field21;

Transform5.x3DScript[8] = X3DScript17;

Transform4.children = new MFNode();

Transform4.children[0] = Transform5;

browser.currentScene.children[2] = Transform4;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "G2";
Transform22.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform22.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "DECLpoint_INSTANCE1000_node";
Transform23.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform23.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape24.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere25 = browser.currentScene.createNode("Sphere");
Sphere25.radius = 0.1;
Shape24.geometry = Sphere25;

let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new SFColor(new float[1,0,0]);
Appearance26.material = Material27;

Shape24.appearance = Appearance26;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

let PositionInterpolator28 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator28.DEF = "DECLpoint_INSTANCE1000_PI1";
PositionInterpolator28.key = new MFFloat(new float[0,1]);
PositionInterpolator28.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform23.children[1] = PositionInterpolator28;

let TimeSensor29 = browser.currentScene.createNode("TimeSensor");
TimeSensor29.DEF = "DECLpoint_INSTANCE1000_CL1";
TimeSensor29.cycleInterval = 3;
TimeSensor29.loop = True;
Transform23.children[2] = TimeSensor29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE30.fromField = "cycleTime";
ROUTE30.toNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE30.toField = "set_location";
Transform23.children[3] = ROUTE30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE31.fromField = "fraction_changed";
ROUTE31.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE31.toField = "set_fraction";
Transform23.children[4] = ROUTE31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE32.fromField = "keyValue";
ROUTE32.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE32.toField = "keyValue";
Transform23.children[5] = ROUTE32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE33.fromField = "value_changed";
ROUTE33.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE33.toField = "set_translation";
Transform23.children[6] = ROUTE33;

let ROUTE34 = browser.currentScene.createNode("ROUTE");
ROUTE34.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE34.fromField = "translation_changed";
ROUTE34.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE34.toField = "set_translation";
Transform23.children[7] = ROUTE34;

let X3DScript35 = browser.currentScene.createNode("X3DScript");
X3DScript35.DEF = "DECLpoint_INSTANCE1000_MB1";
let field36 = browser.currentScene.createNode("field");
field36.name = "translation";
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
field36.value = "0 0 0";
X3DScript35.field = new MFNode();

X3DScript35.field[0] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "old";
field37.accessType = "inputOutput";
field37.type = "SFVec3f";
field37.value = "0 0 0";
X3DScript35.field[1] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "set_location";
field38.accessType = "inputOnly";
field38.type = "SFTime";
X3DScript35.field[2] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "keyValue";
field39.accessType = "inputOutput";
field39.type = "MFVec3f";
field39.value = "0 0 0 0 5 0";
X3DScript35.field[3] = field39;

Transform23.x3DScript[8] = X3DScript35;

Transform22.children = new MFNode();

Transform22.children[0] = Transform23;

browser.currentScene.children[3] = Transform22;

let Transform40 = browser.currentScene.createNode("Transform");
Transform40.DEF = "transC1";
Transform40.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform40.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "rotscaleC1";
Transform41.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform41.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape42 = browser.currentScene.createNode("Shape");
Shape42.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape42.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material44.transparency = 0.5;
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let Cylinder45 = browser.currentScene.createNode("Cylinder");
Cylinder45.radius = 0.05;
Shape42.geometry = Cylinder45;

Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

browser.currentScene.children[4] = Transform40;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromNode = "G1";
ROUTE46.fromField = "translation_changed";
ROUTE46.toNode = "DECLx3dconnector_connector1_S1";
ROUTE46.toField = "set_startpoint";
browser.currentScene.children[5] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "G2";
ROUTE47.fromField = "translation_changed";
ROUTE47.toNode = "DECLx3dconnector_connector1_S1";
ROUTE47.toField = "set_endpoint";
browser.currentScene.children[6] = ROUTE47;

