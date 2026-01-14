const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("X_ITE", 1));
scene.addMetaData("title", "Bobble Spheres Full Animation (Final Working)");
scene.addMetaData("description", "Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions.");
scene.addMetaData("creator", "Generated from Python script");
await browser .loadComponents (scene);
let WorldInfo7 = browser.currentScene.createNode("WorldInfo");
WorldInfo7.title = "Bobble Spheres (PBR Full Animation)";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo7;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo8;

let Background9 = browser.currentScene.createNode("Background");
Background9.skyAngle = new X3D.MFFloat([1.57]);
Background9.skyColor = new X3D.MFColor([0.15,0.25,0.8,0.9,0.9,0.9]);
browser.currentScene.children[2] = Background9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.description = "Initial Camera";
Viewpoint10.position = new X3D.SFVec3f([-70,15,-25]);
Viewpoint10.orientation = new X3D.SFRotation([0.147,0.989,0.005,-1.82]);
Viewpoint10.fieldOfView = 0.349;
browser.currentScene.children[3] = Viewpoint10;

let DirectionalLight11 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight11.direction = new X3D.SFVec3f([-0.5,-1,-0.5]);
DirectionalLight11.intensity = 2;
browser.currentScene.children[4] = DirectionalLight11;

//Static objects
let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new X3D.SFVec3f([0,-1000,-1]);
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let PhysicalMaterial15 = browser.currentScene.createNode("PhysicalMaterial");
PhysicalMaterial15.baseColor = new X3D.SFColor([0.5,0.5,0.5]);
material = PhysicalMaterial15;

appearance = Appearance14;

let Sphere16 = browser.currentScene.createNode("Sphere");
Sphere16.radius = 1000;
geometry = Sphere16;

Transform12YYY.child = new X3D.undefined();

Transform12ZZZ.child[0] = Shape13;

browser.currentScene.children[5] = Transform12;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.translation = new X3D.SFVec3f([0,1,0]);
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let PhysicalMaterial20 = browser.currentScene.createNode("PhysicalMaterial");
PhysicalMaterial20.baseColor = new X3D.SFColor([0.9,0.9,0.9]);
PhysicalMaterial20.transmissionFactor = "0.9";
PhysicalMaterial20.roughness = 0;
PhysicalMaterial20.indexOfRefraction = "1.5";
material = PhysicalMaterial20;

appearance = Appearance19;

let Sphere21 = browser.currentScene.createNode("Sphere");
geometry = Sphere21;

Transform17YYY.child = new X3D.undefined();

Transform17ZZZ.child[0] = Shape18;

browser.currentScene.children[6] = Transform17;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = new X3D.SFVec3f([-4,1,0]);
let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let PhysicalMaterial25 = browser.currentScene.createNode("PhysicalMaterial");
PhysicalMaterial25.baseColor = new X3D.SFColor([1,0.95,0.9]);
PhysicalMaterial25.transmissionFactor = "0.8";
PhysicalMaterial25.roughness = 0.05;
PhysicalMaterial25.indexOfRefraction = "1.1";
material = PhysicalMaterial25;

appearance = Appearance24;

let Sphere26 = browser.currentScene.createNode("Sphere");
geometry = Sphere26;

Transform22YYY.child = new X3D.undefined();

Transform22ZZZ.child[0] = Shape23;

browser.currentScene.children[7] = Transform22;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.translation = new X3D.SFVec3f([4,1,0]);
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let PhysicalMaterial30 = browser.currentScene.createNode("PhysicalMaterial");
PhysicalMaterial30.baseColor = new X3D.SFColor([0.7,0.6,0.5]);
PhysicalMaterial30.roughness = 0.1;
material = PhysicalMaterial30;

appearance = Appearance29;

let Sphere31 = browser.currentScene.createNode("Sphere");
geometry = Sphere31;

Transform27YYY.child = new X3D.undefined();

Transform27ZZZ.child[0] = Shape28;

browser.currentScene.children[8] = Transform27;

//=== DYNAMICALLY GENERATED SPHERES ===
//Example: Matte Sphere with animated color and roughness (Using initialize())
let Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "T_0";
Transform32.translation = new X3D.SFVec3f([-10.871,0.2,-10.453]);
let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let PhysicalMaterial35 = browser.currentScene.createNode("PhysicalMaterial");
PhysicalMaterial35.DEF = "M_0";
PhysicalMaterial35.baseColor = new X3D.SFColor([0.627,0.003,0.165]);
material = PhysicalMaterial35;

appearance = Appearance34;

let Sphere36 = browser.currentScene.createNode("Sphere");
Sphere36.radius = 0.2;
geometry = Sphere36;

Transform32YYY.child = new X3D.undefined();

Transform32ZZZ.child[0] = Shape33;

browser.currentScene.children[9] = Transform32;

let TimeSensor37 = browser.currentScene.createNode("TimeSensor");
TimeSensor37.DEF = "C_0";
TimeSensor37.cycleInterval = 5.21;
TimeSensor37.loop = True;
browser.currentScene.children[10] = TimeSensor37;

let PositionInterpolator38 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator38.DEF = "PI_0";
PositionInterpolator38.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator38.keyValue = new X3D.MFVec3f([-10.871,0.2,-10.453,-10.871,0.6,-10.453,-10.871,0.2,-10.453]);
browser.currentScene.children[11] = PositionInterpolator38;

let ColorInterpolator39 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator39.DEF = "CI_0";
ColorInterpolator39.key = new X3D.MFFloat([0,0.5,1]);
ColorInterpolator39.keyValue = new X3D.MFColor([0.627,0.003,0.165,0.011,0.583,0.443,0.627,0.003,0.165]);
browser.currentScene.children[12] = ColorInterpolator39;

let ScalarInterpolator40 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator40.DEF = "SI_0";
ScalarInterpolator40.key = new X3D.MFFloat([0,0.5,1]);
ScalarInterpolator40.keyValue = new X3D.MFFloat([1,0.4,1]);
browser.currentScene.children[13] = ScalarInterpolator40;

let Script41 = browser.currentScene.createNode("Script");
Script41.DEF = "Animator_0";
Script42.getField("set_color")Script41YYY.field = new X3D.MFNode();

Script43.getField("set_roughness")Script41YYY.field = new X3D.MFNode();

Script44.getField("targetMaterial")let PhysicalMaterial45 = browser.currentScene.createNode("PhysicalMaterial");
PhysicalMaterial45.USE = "M_0";
field44YYY.children = new X3D.MFNode();

field44ZZZ.children[0] = PhysicalMaterial45;

Script41YYY.field = new X3D.MFNode();


Script41.setSourceCode(`ecmascript:\n"+
"        var matNode = null; // Variable to hold the material node reference\n"+
"\n"+
"        function initialize() {\n"+
"          // This function runs AFTER the targetMaterial field is connected.\n"+
"          // We safely store the reference to the actual material node.\n"+
"          matNode = targetMaterial.value;\n"+
"        }\n"+
"\n"+
"        function set_color(value, timestamp) {\n"+
"          if (matNode) { // Check if the node reference was stored\n"+
"            matNode.baseColor = value;\n"+
"          }\n"+
"        }\n"+
"        function set_roughness(value, timestamp) {\n"+
"          if (matNode) {\n"+
"            matNode.roughness = value;\n"+
"          }\n"+
"        }`)
browser.currentScene.children[14] = Script41;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromNode = "C_0";
ROUTE46.fromField = "fraction_changed";
ROUTE46.toNode = "PI_0";
ROUTE46.toField = "set_fraction";
browser.currentScene.children[15] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "PI_0";
ROUTE47.fromField = "value_changed";
ROUTE47.toNode = "T_0";
ROUTE47.toField = "set_translation";
browser.currentScene.children[16] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "C_0";
ROUTE48.fromField = "fraction_changed";
ROUTE48.toNode = "CI_0";
ROUTE48.toField = "set_fraction";
browser.currentScene.children[17] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "CI_0";
ROUTE49.fromField = "value_changed";
ROUTE49.toNode = "Animator_0";
ROUTE49.toField = "set_color";
browser.currentScene.children[18] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "C_0";
ROUTE50.fromField = "fraction_changed";
ROUTE50.toNode = "SI_0";
ROUTE50.toField = "set_fraction";
browser.currentScene.children[19] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "SI_0";
ROUTE51.fromField = "value_changed";
ROUTE51.toNode = "Animator_0";
ROUTE51.toField = "set_roughness";
browser.currentScene.children[20] = ROUTE51;

//Example: Metal Sphere with animated roughness (Using initialize())
let Transform52 = browser.currentScene.createNode("Transform");
Transform52.DEF = "T_1";
Transform52.translation = new X3D.SFVec3f([-10.411,0.2,-9.16]);
let Shape53 = browser.currentScene.createNode("Shape");
let Appearance54 = browser.currentScene.createNode("Appearance");
let PhysicalMaterial55 = browser.currentScene.createNode("PhysicalMaterial");
PhysicalMaterial55.DEF = "M_1";
PhysicalMaterial55.baseColor = new X3D.SFColor([0.707,0.888,0.536]);
PhysicalMaterial55.roughness = 0.2;
material = PhysicalMaterial55;

appearance = Appearance54;

let Sphere56 = browser.currentScene.createNode("Sphere");
Sphere56.radius = 0.2;
geometry = Sphere56;

Transform52YYY.child = new X3D.undefined();

Transform52ZZZ.child[0] = Shape53;

browser.currentScene.children[21] = Transform52;

let TimeSensor57 = browser.currentScene.createNode("TimeSensor");
TimeSensor57.DEF = "C_1";
TimeSensor57.cycleInterval = 4.15;
TimeSensor57.loop = True;
browser.currentScene.children[22] = TimeSensor57;

let PositionInterpolator58 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator58.DEF = "PI_1";
PositionInterpolator58.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator58.keyValue = new X3D.MFVec3f([-10.411,0.2,-9.16,-10.411,0.6,-9.16,-10.411,0.2,-9.16]);
browser.currentScene.children[23] = PositionInterpolator58;

let ScalarInterpolator59 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator59.DEF = "SI_1";
ScalarInterpolator59.key = new X3D.MFFloat([0,0.5,1]);
ScalarInterpolator59.keyValue = new X3D.MFFloat([0.5,0,0.5]);
browser.currentScene.children[24] = ScalarInterpolator59;

let Script60 = browser.currentScene.createNode("Script");
Script60.DEF = "Animator_1";
Script61.getField("set_roughness")Script60YYY.field = new X3D.MFNode();

Script62.getField("targetMaterial")let PhysicalMaterial63 = browser.currentScene.createNode("PhysicalMaterial");
PhysicalMaterial63.USE = "M_1";
field62YYY.children = new X3D.MFNode();

field62ZZZ.children[0] = PhysicalMaterial63;

Script60YYY.field = new X3D.MFNode();


Script60.setSourceCode(`ecmascript:\n"+
"        var matNode = null;\n"+
"\n"+
"        function initialize() {\n"+
"          matNode = targetMaterial.value;\n"+
"        }\n"+
"\n"+
"        function set_roughness(value, timestamp) {\n"+
"          if (matNode) {\n"+
"            matNode.roughness = value;\n"+
"          }\n"+
"        }`)
browser.currentScene.children[25] = Script60;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "C_1";
ROUTE64.fromField = "fraction_changed";
ROUTE64.toNode = "PI_1";
ROUTE64.toField = "set_fraction";
browser.currentScene.children[26] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "PI_1";
ROUTE65.fromField = "value_changed";
ROUTE65.toNode = "T_1";
ROUTE65.toField = "set_translation";
browser.currentScene.children[27] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "C_1";
ROUTE66.fromField = "fraction_changed";
ROUTE66.toNode = "SI_1";
ROUTE66.toField = "set_fraction";
browser.currentScene.children[28] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "SI_1";
ROUTE67.fromField = "value_changed";
ROUTE67.toNode = "Animator_1";
ROUTE67.toField = "set_roughness";
browser.currentScene.children[29] = ROUTE67;

//The extension-based spheres were already correct and need no changes
let Transform68 = browser.currentScene.createNode("Transform");
Transform68.DEF = "T_2";
Transform68.translation = new X3D.SFVec3f([-10.155,0.2,-8.324]);
let Shape69 = browser.currentScene.createNode("Shape");
let Appearance70 = browser.currentScene.createNode("Appearance");
let PhysicalMaterial71 = browser.currentScene.createNode("PhysicalMaterial");
PhysicalMaterial71.transmissionFactor = "0.95";
PhysicalMaterial71.roughness = 0.05;
let IORMaterialExtension72 = browser.currentScene.createNode("IORMaterialExtension");
IORMaterialExtension72.DEF = "IOR_2";
IORMaterialExtension72.indexOfRefraction = "1.5";
iORMaterialExtension = IORMaterialExtension72;

material = PhysicalMaterial71;

appearance = Appearance70;

let Sphere73 = browser.currentScene.createNode("Sphere");
Sphere73.radius = 0.2;
geometry = Sphere73;

Transform68YYY.child = new X3D.undefined();

Transform68ZZZ.child[0] = Shape69;

browser.currentScene.children[30] = Transform68;

let TimeSensor74 = browser.currentScene.createNode("TimeSensor");
TimeSensor74.DEF = "C_2";
TimeSensor74.cycleInterval = 3.88;
TimeSensor74.loop = True;
browser.currentScene.children[31] = TimeSensor74;

let PositionInterpolator75 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator75.DEF = "PI_2";
PositionInterpolator75.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator75.keyValue = new X3D.MFVec3f([-10.155,0.2,-8.324,-10.155,0.6,-8.324,-10.155,0.2,-8.324]);
browser.currentScene.children[32] = PositionInterpolator75;

let ScalarInterpolator76 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator76.DEF = "SI_2";
ScalarInterpolator76.key = new X3D.MFFloat([0,0.5,1]);
ScalarInterpolator76.keyValue = new X3D.MFFloat([1.4,1.7,1.4]);
browser.currentScene.children[33] = ScalarInterpolator76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "C_2";
ROUTE77.fromField = "fraction_changed";
ROUTE77.toNode = "PI_2";
ROUTE77.toField = "set_fraction";
browser.currentScene.children[34] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "PI_2";
ROUTE78.fromField = "value_changed";
ROUTE78.toNode = "T_2";
ROUTE78.toField = "set_translation";
browser.currentScene.children[35] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "C_2";
ROUTE79.fromField = "fraction_changed";
ROUTE79.toNode = "SI_2";
ROUTE79.toField = "set_fraction";
browser.currentScene.children[36] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "SI_2";
ROUTE80.fromField = "value_changed";
ROUTE80.toNode = "IOR_2";
ROUTE80.toField = "set_indexOfRefraction";
browser.currentScene.children[37] = ROUTE80;

let Transform81 = browser.currentScene.createNode("Transform");
Transform81.DEF = "T_3";
Transform81.translation = new X3D.SFVec3f([-10.518,0.2,-7.283]);
let Shape82 = browser.currentScene.createNode("Shape");
let Appearance83 = browser.currentScene.createNode("Appearance");
let PhysicalMaterial84 = browser.currentScene.createNode("PhysicalMaterial");
PhysicalMaterial84.transmissionFactor = "0.95";
PhysicalMaterial84.roughness = 0.05;
PhysicalMaterial84.indexOfRefraction = "1.33";
let IridescenceMaterialExtension85 = browser.currentScene.createNode("IridescenceMaterialExtension");
IridescenceMaterialExtension85.DEF = "IRI_3";
IridescenceMaterialExtension85.iridescence = "1";
IridescenceMaterialExtension85.iridescenceIndexOfRefraction = "1.3";
IridescenceMaterialExtension85.iridescenceThicknessMinimum = "100";
iridescenceMaterialExtension = IridescenceMaterialExtension85;

material = PhysicalMaterial84;

appearance = Appearance83;

let Sphere86 = browser.currentScene.createNode("Sphere");
Sphere86.radius = 0.2;
geometry = Sphere86;

Transform81YYY.child = new X3D.undefined();

Transform81ZZZ.child[0] = Shape82;

browser.currentScene.children[38] = Transform81;

let TimeSensor87 = browser.currentScene.createNode("TimeSensor");
TimeSensor87.DEF = "C_3";
TimeSensor87.cycleInterval = 6;
TimeSensor87.loop = True;
browser.currentScene.children[39] = TimeSensor87;

let PositionInterpolator88 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator88.DEF = "PI_3";
PositionInterpolator88.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator88.keyValue = new X3D.MFVec3f([-10.518,0.2,-7.283,-10.518,0.6,-7.283,-10.518,0.2,-7.283]);
browser.currentScene.children[40] = PositionInterpolator88;

let ScalarInterpolator89 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator89.DEF = "SI_3";
ScalarInterpolator89.key = new X3D.MFFloat([0,0.5,1]);
ScalarInterpolator89.keyValue = new X3D.MFFloat([100,700,100]);
browser.currentScene.children[41] = ScalarInterpolator89;

let ROUTE90 = browser.currentScene.createNode("ROUTE");
ROUTE90.fromNode = "C_3";
ROUTE90.fromField = "fraction_changed";
ROUTE90.toNode = "PI_3";
ROUTE90.toField = "set_fraction";
browser.currentScene.children[42] = ROUTE90;

let ROUTE91 = browser.currentScene.createNode("ROUTE");
ROUTE91.fromNode = "PI_3";
ROUTE91.fromField = "value_changed";
ROUTE91.toNode = "T_3";
ROUTE91.toField = "set_translation";
browser.currentScene.children[43] = ROUTE91;

let ROUTE92 = browser.currentScene.createNode("ROUTE");
ROUTE92.fromNode = "C_3";
ROUTE92.fromField = "fraction_changed";
ROUTE92.toNode = "SI_3";
ROUTE92.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE92;

let ROUTE93 = browser.currentScene.createNode("ROUTE");
ROUTE93.fromNode = "SI_3";
ROUTE93.fromField = "value_changed";
ROUTE93.toNode = "IRI_3";
ROUTE93.toField = "set_iridescenceThicknessMaximum";
browser.currentScene.children[45] = ROUTE93;

}
main ();
