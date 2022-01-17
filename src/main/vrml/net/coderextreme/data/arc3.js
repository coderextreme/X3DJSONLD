let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "arc3.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "Lost, Doug Sanden I think";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "a generic proto to connect two objects";
head1.meta[4] = meta6;

head = head1;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.position = new SFVec3f(new float[0,0,5]);
Viewpoint8.description = "Only Viewpoint";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint8;

let Background9 = browser.currentScene.createNode("Background");
Background9.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[1] = Background9;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "DECLpoint_G1_node";
let Shape11 = browser.currentScene.createNode("Shape");
let Sphere12 = browser.currentScene.createNode("Sphere");
Sphere12.radius = 0.1;
Shape11.geometry = Sphere12;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,0,0]);
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

let PositionInterpolator15 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator15.DEF = "DECLpoint_G1_PI1";
PositionInterpolator15.key = new MFFloat(new float[0,1]);
PositionInterpolator15.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform10.children[1] = PositionInterpolator15;

let Script16 = browser.currentScene.createNode("Script");
Script16.DEF = "DECLpoint_G1_MB1";
let field17 = browser.currentScene.createNode("field");
field17.name = "translation";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0 0 0";
Script16.field = new MFNode();

Script16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "old";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
Script16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "set_location";
field19.accessType = "inputOnly";
field19.type = "SFTime";
Script16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "keyValue";
field20.accessType = "inputOutput";
field20.type = "MFVec3f";
field20.value = "0 0 0 0 5 0";
Script16.field[3] = field20;

let #sourceCode21 = browser.currentScene.createNode("#sourceCode");
Script16.#sourceCode[4] = #sourceCode21;

Transform10.children[2] = Script16;

let TimeSensor22 = browser.currentScene.createNode("TimeSensor");
TimeSensor22.DEF = "DECLpoint_G1_CL1";
TimeSensor22.cycleInterval = 3;
TimeSensor22.loop = True;
Transform10.children[3] = TimeSensor22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "DECLpoint_G1_CL1";
ROUTE23.fromField = "cycleTime";
ROUTE23.toNode = "DECLpoint_G1_MB1";
ROUTE23.toField = "set_location";
Transform10.children[4] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "DECLpoint_G1_CL1";
ROUTE24.fromField = "fraction_changed";
ROUTE24.toNode = "DECLpoint_G1_PI1";
ROUTE24.toField = "set_fraction";
Transform10.children[5] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "DECLpoint_G1_MB1";
ROUTE25.fromField = "keyValue";
ROUTE25.toNode = "DECLpoint_G1_PI1";
ROUTE25.toField = "keyValue";
Transform10.children[6] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "DECLpoint_G1_PI1";
ROUTE26.fromField = "value_changed";
ROUTE26.toNode = "DECLpoint_G1_node";
ROUTE26.toField = "set_translation";
Transform10.children[7] = ROUTE26;

browser.currentScene.children[2] = Transform10;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "DECLpoint_G2_node";
let Shape28 = browser.currentScene.createNode("Shape");
let Sphere29 = browser.currentScene.createNode("Sphere");
Sphere29.radius = 0.1;
Shape28.geometry = Sphere29;

let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = new SFColor(new float[1,0,0]);
Appearance30.material = Material31;

Shape28.appearance = Appearance30;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

let PositionInterpolator32 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator32.DEF = "DECLpoint_G2_PI1";
PositionInterpolator32.key = new MFFloat(new float[0,1]);
PositionInterpolator32.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform27.children[1] = PositionInterpolator32;

let Script33 = browser.currentScene.createNode("Script");
Script33.DEF = "DECLpoint_G2_MB1";
let field34 = browser.currentScene.createNode("field");
field34.name = "translation";
field34.accessType = "inputOutput";
field34.type = "SFVec3f";
field34.value = "0 0 0";
Script33.field = new MFNode();

Script33.field[0] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "old";
field35.accessType = "inputOutput";
field35.type = "SFVec3f";
field35.value = "0 0 0";
Script33.field[1] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "set_location";
field36.accessType = "inputOnly";
field36.type = "SFTime";
Script33.field[2] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "keyValue";
field37.accessType = "inputOutput";
field37.type = "MFVec3f";
field37.value = "0 0 0 0 5 0";
Script33.field[3] = field37;

let #sourceCode38 = browser.currentScene.createNode("#sourceCode");
Script33.#sourceCode[4] = #sourceCode38;

Transform27.children[2] = Script33;

let TimeSensor39 = browser.currentScene.createNode("TimeSensor");
TimeSensor39.DEF = "DECLpoint_G2_CL1";
TimeSensor39.cycleInterval = 3;
TimeSensor39.loop = True;
Transform27.children[3] = TimeSensor39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "DECLpoint_G2_CL1";
ROUTE40.fromField = "cycleTime";
ROUTE40.toNode = "DECLpoint_G2_MB1";
ROUTE40.toField = "set_location";
Transform27.children[4] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "DECLpoint_G2_CL1";
ROUTE41.fromField = "fraction_changed";
ROUTE41.toNode = "DECLpoint_G2_PI1";
ROUTE41.toField = "set_fraction";
Transform27.children[5] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "DECLpoint_G2_MB1";
ROUTE42.fromField = "keyValue";
ROUTE42.toNode = "DECLpoint_G2_PI1";
ROUTE42.toField = "keyValue";
Transform27.children[6] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "DECLpoint_G2_PI1";
ROUTE43.fromField = "value_changed";
ROUTE43.toNode = "DECLpoint_G2_node";
ROUTE43.toField = "set_translation";
Transform27.children[7] = ROUTE43;

browser.currentScene.children[3] = Transform27;

let Group44 = browser.currentScene.createNode("Group");
let Transform45 = browser.currentScene.createNode("Transform");
Transform45.DEF = "DECLx3dconnector_connector1_trans";
let Transform46 = browser.currentScene.createNode("Transform");
Transform46.DEF = "DECLx3dconnector_connector1_rotscale";
let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material49.transparency = 0.5;
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let Cylinder50 = browser.currentScene.createNode("Cylinder");
Cylinder50.radius = 0.05;
Shape47.geometry = Cylinder50;

Transform46.children = new MFNode();

Transform46.children[0] = Shape47;

Transform45.children = new MFNode();

Transform45.children[0] = Transform46;

Group44.children = new MFNode();

Group44.children[0] = Transform45;

let Script51 = browser.currentScene.createNode("Script");
Script51.DEF = "DECLx3dconnector_connector1_S1";
let field52 = browser.currentScene.createNode("field");
field52.name = "startnode";
field52.accessType = "initializeOnly";
field52.type = "SFNode";
let Group53 = browser.currentScene.createNode("Group");
Group53.USE = "DECLpoint_G1_node";
field52.children = new MFNode();

field52.children[0] = Group53;

Script51.field = new MFNode();

Script51.field[0] = field52;

let field54 = browser.currentScene.createNode("field");
field54.name = "endnode";
field54.accessType = "initializeOnly";
field54.type = "SFNode";
let Group55 = browser.currentScene.createNode("Group");
Group55.USE = "DECLpoint_G2_node";
field54.children = new MFNode();

field54.children[0] = Group55;

Script51.field[1] = field54;

let field56 = browser.currentScene.createNode("field");
field56.name = "position";
field56.accessType = "inputOutput";
field56.type = "SFNode";
let Transform57 = browser.currentScene.createNode("Transform");
Transform57.USE = "DECLx3dconnector_connector1_trans";
field56.children = new MFNode();

field56.children[0] = Transform57;

Script51.field[2] = field56;

let field58 = browser.currentScene.createNode("field");
field58.name = "rotscale";
field58.accessType = "inputOutput";
field58.type = "SFNode";
let Transform59 = browser.currentScene.createNode("Transform");
Transform59.USE = "DECLx3dconnector_connector1_rotscale";
field58.children = new MFNode();

field58.children[0] = Transform59;

Script51.field[3] = field58;

let field60 = browser.currentScene.createNode("field");
field60.name = "set_startpoint";
field60.accessType = "inputOnly";
field60.type = "SFVec3f";
Script51.field[4] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "set_endpoint";
field61.accessType = "inputOnly";
field61.type = "SFVec3f";
Script51.field[5] = field61;

let #sourceCode62 = browser.currentScene.createNode("#sourceCode");
Script51.#sourceCode[6] = #sourceCode62;

Group44.children[1] = Script51;

browser.currentScene.children[4] = Group44;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "DECLpoint_G1_node";
ROUTE63.fromField = "translation";
ROUTE63.toNode = "DECLx3dconnector_connector1_S1";
ROUTE63.toField = "set_startpoint";
browser.currentScene.children[5] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "DECLpoint_G2_node";
ROUTE64.fromField = "translation";
ROUTE64.toNode = "DECLx3dconnector_connector1_S1";
ROUTE64.toField = "set_endpoint";
browser.currentScene.children[6] = ROUTE64;

