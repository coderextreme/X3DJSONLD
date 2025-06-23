const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "MaskAndSnorkel.x3d");
scene.addMetaData("description", "Diving mask and snorkel tube.");
scene.addMetaData("creator", "Etsuko Lippi");
scene.addMetaData("created", "January 24, 2001");
scene.addMetaData("modified", "23 May 2020");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.title = "MaskAndSnorkel.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo11;

let Background12 = browser.currentScene.createNode("Background");
Background12.skyColor = new X3D.MFColor([0,0,0.9]);
browser.currentScene.children[1] = Background12;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "maskAndSnorkel";
let Transform14 = browser.currentScene.createNode("Transform");
let Shape15 = browser.currentScene.createNode("Shape");
Shape15.DEF = "maskFrame";
let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.DEF = "frameColor";
Material17.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material17;

appearance = Appearance16;

let IndexedFaceSet18 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet18.coordIndex = new X3D.MFInt32([0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
IndexedFaceSet18.creaseAngle = 1.45;
IndexedFaceSet18.solid = False;
let Coordinate19 = browser.currentScene.createNode("Coordinate");
Coordinate19.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
coord = Coordinate19;

geometry = IndexedFaceSet18;

Transform14YYY.child = new X3D.undefined();

Transform14ZZZ.child[0] = Shape15;

Transform13YYY.children = new X3D.MFNode();

Transform13ZZZ.children[0] = Transform14;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "snorkelHoldRing";
Transform20.translation = new X3D.SFVec3f([0.075,0.075,-0.02]);
let Shape21 = browser.currentScene.createNode("Shape");
let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.USE = "frameColor";
material = Material23;

appearance = Appearance22;

let Cylinder24 = browser.currentScene.createNode("Cylinder");
Cylinder24.height = 0.003;
Cylinder24.radius = 0.015;
geometry = Cylinder24;

Transform20YYY.child = new X3D.undefined();

Transform20ZZZ.child[0] = Shape21;

Transform13ZZZ.children[1] = Transform20;

let Group25 = browser.currentScene.createNode("Group");
Group25.DEF = "snorkel";
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = new X3D.SFVec3f([0,-0.02,0]);
let Transform27 = browser.currentScene.createNode("Transform");
Transform27.scale = new X3D.SFVec3f([0.9,0.9,0.9]);
Transform27.translation = new X3D.SFVec3f([0.035,-0.07,-0.02]);
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.DEF = "snorkelTube";
Material30.diffuseColor = new X3D.SFColor([0.678,1,0.184]);
Material30.transparency = 0.4;
material = Material30;

appearance = Appearance29;

let Extrusion31 = browser.currentScene.createNode("Extrusion");
Extrusion31.crossSection = new X3D.MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion31.spine = new X3D.MFVec3f([-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03]);
geometry = Extrusion31;

Transform27YYY.child = new X3D.undefined();

Transform27ZZZ.child[0] = Shape28;

Transform26YYY.children = new X3D.MFNode();

Transform26ZZZ.children[0] = Transform27;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.rotation = new X3D.SFRotation([0,0,1,1.57]);
Transform32.scale = new X3D.SFVec3f([0.9,0.9,0.9]);
Transform32.translation = new X3D.SFVec3f([0.01,-0.04,-0.02]);
let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.DEF = "Mouthpiece";
Material35.diffuseColor = new X3D.SFColor([0.678,1,0.8]);
Material35.transparency = 0.4;
material = Material35;

appearance = Appearance34;

let Extrusion36 = browser.currentScene.createNode("Extrusion");
Extrusion36.crossSection = new X3D.MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion36.spine = new X3D.MFVec3f([-0.01,-0.03,0,0,0,0,0.02,0.01,0]);
geometry = Extrusion36;

Transform32YYY.child = new X3D.undefined();

Transform32ZZZ.child[0] = Shape33;

Transform26ZZZ.children[1] = Transform32;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.rotation = new X3D.SFRotation([0,0,1,-0.85]);
Transform37.scale = new X3D.SFVec3f([0.9,0.9,0.9]);
Transform37.translation = new X3D.SFVec3f([0.005,-0.01,-0.02]);
let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.USE = "Mouthpiece";
material = Material40;

appearance = Appearance39;

let Extrusion41 = browser.currentScene.createNode("Extrusion");
Extrusion41.crossSection = new X3D.MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion41.spine = new X3D.MFVec3f([-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0]);
geometry = Extrusion41;

Transform37YYY.child = new X3D.undefined();

Transform37ZZZ.child[0] = Shape38;

Transform26ZZZ.children[2] = Transform37;

Group25YYY.children = new X3D.MFNode();

Group25ZZZ.children[0] = Transform26;

Transform13ZZZ.children[2] = Group25;

let Transform42 = browser.currentScene.createNode("Transform");
let Shape43 = browser.currentScene.createNode("Shape");
Shape43.DEF = "maskLensR";
let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.DEF = "plastic";
Material45.diffuseColor = new X3D.SFColor([0.941,0.973,1]);
Material45.transparency = 0.8;
material = Material45;

appearance = Appearance44;

let IndexedFaceSet46 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet46.coordIndex = new X3D.MFInt32([12,13,14,15,16,17,18,12,-1]);
IndexedFaceSet46.creaseAngle = 1.45;
IndexedFaceSet46.solid = False;
let Coordinate47 = browser.currentScene.createNode("Coordinate");
Coordinate47.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
coord = Coordinate47;

geometry = IndexedFaceSet46;

Transform42YYY.child = new X3D.undefined();

Transform42ZZZ.child[0] = Shape43;

Transform13ZZZ.children[3] = Transform42;

let Transform48 = browser.currentScene.createNode("Transform");
let Shape49 = browser.currentScene.createNode("Shape");
Shape49.DEF = "maskLensL";
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.USE = "plastic";
material = Material51;

appearance = Appearance50;

let IndexedFaceSet52 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet52.coordIndex = new X3D.MFInt32([19,20,21,22,23,24,25,19,-1]);
IndexedFaceSet52.creaseAngle = 1.45;
IndexedFaceSet52.solid = False;
let Coordinate53 = browser.currentScene.createNode("Coordinate");
Coordinate53.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
coord = Coordinate53;

geometry = IndexedFaceSet52;

Transform48YYY.child = new X3D.undefined();

Transform48ZZZ.child[0] = Shape49;

Transform13ZZZ.children[4] = Transform48;

let Transform54 = browser.currentScene.createNode("Transform");
let Shape55 = browser.currentScene.createNode("Shape");
Shape55.DEF = "nose";
let Appearance56 = browser.currentScene.createNode("Appearance");
let Material57 = browser.currentScene.createNode("Material");
Material57.DEF = "plasticFit";
Material57.diffuseColor = new X3D.SFColor([0.678,1,0.184]);
Material57.transparency = 0.7;
material = Material57;

appearance = Appearance56;

let IndexedFaceSet58 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet58.coordIndex = new X3D.MFInt32([0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
IndexedFaceSet58.creaseAngle = 1.45;
IndexedFaceSet58.solid = False;
let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
coord = Coordinate59;

geometry = IndexedFaceSet58;

Transform54YYY.child = new X3D.undefined();

Transform54ZZZ.child[0] = Shape55;

Transform13ZZZ.children[5] = Transform54;

let Transform60 = browser.currentScene.createNode("Transform");
let Shape61 = browser.currentScene.createNode("Shape");
Shape61.DEF = "faceFit";
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.USE = "plasticFit";
material = Material63;

appearance = Appearance62;

let IndexedFaceSet64 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet64.coordIndex = new X3D.MFInt32([1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
IndexedFaceSet64.creaseAngle = 1.45;
IndexedFaceSet64.solid = False;
let Coordinate65 = browser.currentScene.createNode("Coordinate");
Coordinate65.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
coord = Coordinate65;

geometry = IndexedFaceSet64;

Transform60YYY.child = new X3D.undefined();

Transform60ZZZ.child[0] = Shape61;

Transform13ZZZ.children[6] = Transform60;

let Transform66 = browser.currentScene.createNode("Transform");
let Shape67 = browser.currentScene.createNode("Shape");
Shape67.DEF = "belt";
let Appearance68 = browser.currentScene.createNode("Appearance");
let Material69 = browser.currentScene.createNode("Material");
Material69.USE = "plastic";
material = Material69;

appearance = Appearance68;

let IndexedFaceSet70 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet70.coordIndex = new X3D.MFInt32([3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
IndexedFaceSet70.creaseAngle = 1.45;
IndexedFaceSet70.solid = False;
let Coordinate71 = browser.currentScene.createNode("Coordinate");
Coordinate71.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175]);
coord = Coordinate71;

geometry = IndexedFaceSet70;

Transform66YYY.child = new X3D.undefined();

Transform66ZZZ.child[0] = Shape67;

Transform13ZZZ.children[7] = Transform66;

browser.currentScene.children[2] = Transform13;

}
main ();
