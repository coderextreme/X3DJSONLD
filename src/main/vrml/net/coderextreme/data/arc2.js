let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "arc2.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d";
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
Transform10.DEF = "G1";
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "DECLpoint_INSTANCE_node";
let Shape12 = browser.currentScene.createNode("Shape");
let Sphere13 = browser.currentScene.createNode("Sphere");
Sphere13.radius = 0.1;
Shape12.geometry = Sphere13;

let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[1,0,0]);
Appearance14.material = Material15;

Shape12.appearance = Appearance14;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

let PositionInterpolator16 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator16.DEF = "DECLpoint_INSTANCE_PI1";
PositionInterpolator16.key = new MFFloat(new float[0,1]);
PositionInterpolator16.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform11.children[1] = PositionInterpolator16;

let Script17 = browser.currentScene.createNode("Script");
Script17.DEF = "DECLpoint_INSTANCE_MB1";
let field18 = browser.currentScene.createNode("field");
field18.name = "translation";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
Script17.field = new MFNode();

Script17.field[0] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "old";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
Script17.field[1] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "set_location";
field20.accessType = "inputOnly";
field20.type = "SFTime";
Script17.field[2] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "keyValue";
field21.accessType = "inputOutput";
field21.type = "MFVec3f";
field21.value = "0 0 0 0 5 0";
Script17.field[3] = field21;

let #sourceCode22 = browser.currentScene.createNode("#sourceCode");
Script17.#sourceCode[4] = #sourceCode22;

Transform11.children[2] = Script17;

let TimeSensor23 = browser.currentScene.createNode("TimeSensor");
TimeSensor23.DEF = "DECLpoint_INSTANCE_CL1";
TimeSensor23.cycleInterval = 3;
TimeSensor23.loop = True;
Transform11.children[3] = TimeSensor23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE24.fromField = "cycleTime";
ROUTE24.toNode = "DECLpoint_INSTANCE_MB1";
ROUTE24.toField = "set_location";
Transform11.children[4] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE25.fromField = "fraction_changed";
ROUTE25.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE25.toField = "set_fraction";
Transform11.children[5] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE26.fromField = "keyValue";
ROUTE26.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE26.toField = "keyValue";
Transform11.children[6] = ROUTE26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "DECLpoint_INSTANCE_PI1";
ROUTE27.fromField = "value_changed";
ROUTE27.toNode = "DECLpoint_INSTANCE_node";
ROUTE27.toField = "set_translation";
Transform11.children[7] = ROUTE27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE28.fromField = "translation_changed";
ROUTE28.toNode = "DECLpoint_INSTANCE_node";
ROUTE28.toField = "set_translation";
Transform11.children[8] = ROUTE28;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

browser.currentScene.children[2] = Transform10;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "G2";
let Transform30 = browser.currentScene.createNode("Transform");
Transform30.DEF = "DECLpoint_INSTANCE1000_node";
let Shape31 = browser.currentScene.createNode("Shape");
let Sphere32 = browser.currentScene.createNode("Sphere");
Sphere32.radius = 0.1;
Shape31.geometry = Sphere32;

let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[1,0,0]);
Appearance33.material = Material34;

Shape31.appearance = Appearance33;

Transform30.children = new MFNode();

Transform30.children[0] = Shape31;

let PositionInterpolator35 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator35.DEF = "DECLpoint_INSTANCE1000_PI1";
PositionInterpolator35.key = new MFFloat(new float[0,1]);
PositionInterpolator35.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform30.children[1] = PositionInterpolator35;

let Script36 = browser.currentScene.createNode("Script");
Script36.DEF = "DECLpoint_INSTANCE1000_MB1";
let field37 = browser.currentScene.createNode("field");
field37.name = "translation";
field37.accessType = "inputOutput";
field37.type = "SFVec3f";
field37.value = "0 0 0";
Script36.field = new MFNode();

Script36.field[0] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "old";
field38.accessType = "inputOutput";
field38.type = "SFVec3f";
field38.value = "0 0 0";
Script36.field[1] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "set_location";
field39.accessType = "inputOnly";
field39.type = "SFTime";
Script36.field[2] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "keyValue";
field40.accessType = "inputOutput";
field40.type = "MFVec3f";
field40.value = "0 0 0 0 5 0";
Script36.field[3] = field40;

let #sourceCode41 = browser.currentScene.createNode("#sourceCode");
Script36.#sourceCode[4] = #sourceCode41;

Transform30.children[2] = Script36;

let TimeSensor42 = browser.currentScene.createNode("TimeSensor");
TimeSensor42.DEF = "DECLpoint_INSTANCE1000_CL1";
TimeSensor42.cycleInterval = 3;
TimeSensor42.loop = True;
Transform30.children[3] = TimeSensor42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE43.fromField = "cycleTime";
ROUTE43.toNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE43.toField = "set_location";
Transform30.children[4] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE44.fromField = "fraction_changed";
ROUTE44.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE44.toField = "set_fraction";
Transform30.children[5] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE45.fromField = "keyValue";
ROUTE45.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE45.toField = "keyValue";
Transform30.children[6] = ROUTE45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE46.fromField = "value_changed";
ROUTE46.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE46.toField = "set_translation";
Transform30.children[7] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE47.fromField = "translation_changed";
ROUTE47.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE47.toField = "set_translation";
Transform30.children[8] = ROUTE47;

Transform29.children = new MFNode();

Transform29.children[0] = Transform30;

browser.currentScene.children[3] = Transform29;

let Transform48 = browser.currentScene.createNode("Transform");
Transform48.DEF = "transC1";
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.DEF = "rotscaleC1";
let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material52.transparency = 0.5;
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

let Cylinder53 = browser.currentScene.createNode("Cylinder");
Cylinder53.radius = 0.05;
Shape50.geometry = Cylinder53;

Transform49.children = new MFNode();

Transform49.children[0] = Shape50;

Transform48.children = new MFNode();

Transform48.children[0] = Transform49;

browser.currentScene.children[4] = Transform48;

let Script54 = browser.currentScene.createNode("Script");
Script54.DEF = "DECLx3dconnector_connector1_S1";
let field55 = browser.currentScene.createNode("field");
field55.name = "startnode";
field55.accessType = "initializeOnly";
field55.type = "SFNode";
let Transform56 = browser.currentScene.createNode("Transform");
Transform56.USE = "G1";
field55.children = new MFNode();

field55.children[0] = Transform56;

Script54.field = new MFNode();

Script54.field[0] = field55;

let field57 = browser.currentScene.createNode("field");
field57.name = "endnode";
field57.accessType = "initializeOnly";
field57.type = "SFNode";
let Transform58 = browser.currentScene.createNode("Transform");
Transform58.USE = "G2";
field57.children = new MFNode();

field57.children[0] = Transform58;

Script54.field[1] = field57;

let field59 = browser.currentScene.createNode("field");
field59.name = "transC1";
field59.accessType = "initializeOnly";
field59.type = "SFNode";
let Transform60 = browser.currentScene.createNode("Transform");
Transform60.USE = "transC1";
field59.children = new MFNode();

field59.children[0] = Transform60;

Script54.field[2] = field59;

let field61 = browser.currentScene.createNode("field");
field61.name = "rotscaleC1";
field61.accessType = "initializeOnly";
field61.type = "SFNode";
let Transform62 = browser.currentScene.createNode("Transform");
Transform62.USE = "rotscaleC1";
field61.children = new MFNode();

field61.children[0] = Transform62;

Script54.field[3] = field61;

let field63 = browser.currentScene.createNode("field");
field63.name = "set_startpoint";
field63.accessType = "inputOnly";
field63.type = "SFVec3f";
Script54.field[4] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "set_endpoint";
field64.accessType = "inputOnly";
field64.type = "SFVec3f";
Script54.field[5] = field64;

let #sourceCode65 = browser.currentScene.createNode("#sourceCode");
Script54.#sourceCode[6] = #sourceCode65;

browser.currentScene.children[5] = Script54;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "G1";
ROUTE66.fromField = "translation_changed";
ROUTE66.toNode = "DECLx3dconnector_connector1_S1";
ROUTE66.toField = "set_startpoint";
browser.currentScene.children[6] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "G2";
ROUTE67.fromField = "translation_changed";
ROUTE67.toNode = "DECLx3dconnector_connector1_S1";
ROUTE67.toField = "set_endpoint";
browser.currentScene.children[7] = ROUTE67;

