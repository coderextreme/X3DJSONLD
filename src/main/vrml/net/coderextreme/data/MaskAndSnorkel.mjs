let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "MaskAndSnorkel.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Diving mask and snorkel tube.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Etsuko Lippi";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "January 24, 2001";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "23 May 2020";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "identifier";
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "generator";
meta8.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "license";
meta9.content = "../license.html";
head1.meta[7] = meta9;

head = head1;

let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.title = "MaskAndSnorkel.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo11;

let Background12 = browser.currentScene.createNode("Background");
Background12.skyColor = new MFColor(new float[0,0,0.9]);
browser.currentScene.children[1] = Background12;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "maskAndSnorkel";
let Transform14 = browser.currentScene.createNode("Transform");
let Shape15 = browser.currentScene.createNode("Shape");
Shape15.DEF = "maskFrame";
let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.DEF = "frameColor";
Material17.diffuseColor = new SFColor(new float[0,0,0]);
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

let IndexedFaceSet18 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet18.coordIndex = new MFInt32(new int[0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
IndexedFaceSet18.creaseAngle = 1.45;
IndexedFaceSet18.solid = False;
let Coordinate19 = browser.currentScene.createNode("Coordinate");
Coordinate19.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet18.coord = Coordinate19;

Shape15.geometry = IndexedFaceSet18;

Transform14.child = new undefined();

Transform14.child[0] = Shape15;

Transform13.children = new MFNode();

Transform13.children[0] = Transform14;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "snorkelHoldRing";
Transform20.translation = new SFVec3f(new float[0.075,0.075,-0.02]);
let Shape21 = browser.currentScene.createNode("Shape");
let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.USE = "frameColor";
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

let Cylinder24 = browser.currentScene.createNode("Cylinder");
Cylinder24.height = 0.003;
Cylinder24.radius = 0.015;
Shape21.geometry = Cylinder24;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

Transform13.children[1] = Transform20;

let Group25 = browser.currentScene.createNode("Group");
Group25.DEF = "snorkel";
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = new SFVec3f(new float[0,-0.02,0]);
let Transform27 = browser.currentScene.createNode("Transform");
Transform27.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform27.translation = new SFVec3f(new float[0.035,-0.07,-0.02]);
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.DEF = "snorkelTube";
Material30.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material30.transparency = 0.4;
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let Extrusion31 = browser.currentScene.createNode("Extrusion");
Extrusion31.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion31.spine = new MFVec3f(new float[-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03]);
Shape28.geometry = Extrusion31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Transform26.children = new MFNode();

Transform26.children[0] = Transform27;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform32.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform32.translation = new SFVec3f(new float[0.01,-0.04,-0.02]);
let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.DEF = "Mouthpiece";
Material35.diffuseColor = new SFColor(new float[0.678,1,0.8]);
Material35.transparency = 0.4;
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

let Extrusion36 = browser.currentScene.createNode("Extrusion");
Extrusion36.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion36.spine = new MFVec3f(new float[-0.01,-0.03,0,0,0,0,0.02,0.01,0]);
Shape33.geometry = Extrusion36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

Transform26.children[1] = Transform32;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.rotation = new SFRotation(new float[0,0,1,-0.85]);
Transform37.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform37.translation = new SFVec3f(new float[0.005,-0.01,-0.02]);
let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.USE = "Mouthpiece";
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let Extrusion41 = browser.currentScene.createNode("Extrusion");
Extrusion41.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion41.spine = new MFVec3f(new float[-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0]);
Shape38.geometry = Extrusion41;

Transform37.child = new undefined();

Transform37.child[0] = Shape38;

Transform26.children[2] = Transform37;

Group25.children = new MFNode();

Group25.children[0] = Transform26;

Transform13.children[2] = Group25;

let Transform42 = browser.currentScene.createNode("Transform");
let Shape43 = browser.currentScene.createNode("Shape");
Shape43.DEF = "maskLensR";
let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.DEF = "plastic";
Material45.diffuseColor = new SFColor(new float[0.941,0.973,1]);
Material45.transparency = 0.8;
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

let IndexedFaceSet46 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet46.coordIndex = new MFInt32(new int[12,13,14,15,16,17,18,12,-1]);
IndexedFaceSet46.creaseAngle = 1.45;
IndexedFaceSet46.solid = False;
let Coordinate47 = browser.currentScene.createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet46.coord = Coordinate47;

Shape43.geometry = IndexedFaceSet46;

Transform42.child = new undefined();

Transform42.child[0] = Shape43;

Transform13.children[3] = Transform42;

let Transform48 = browser.currentScene.createNode("Transform");
let Shape49 = browser.currentScene.createNode("Shape");
Shape49.DEF = "maskLensL";
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.USE = "plastic";
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

let IndexedFaceSet52 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet52.coordIndex = new MFInt32(new int[19,20,21,22,23,24,25,19,-1]);
IndexedFaceSet52.creaseAngle = 1.45;
IndexedFaceSet52.solid = False;
let Coordinate53 = browser.currentScene.createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet52.coord = Coordinate53;

Shape49.geometry = IndexedFaceSet52;

Transform48.child = new undefined();

Transform48.child[0] = Shape49;

Transform13.children[4] = Transform48;

let Transform54 = browser.currentScene.createNode("Transform");
let Shape55 = browser.currentScene.createNode("Shape");
Shape55.DEF = "nose";
let Appearance56 = browser.currentScene.createNode("Appearance");
let Material57 = browser.currentScene.createNode("Material");
Material57.DEF = "plasticFit";
Material57.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material57.transparency = 0.7;
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

let IndexedFaceSet58 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet58.coordIndex = new MFInt32(new int[0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
IndexedFaceSet58.creaseAngle = 1.45;
IndexedFaceSet58.solid = False;
let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet58.coord = Coordinate59;

Shape55.geometry = IndexedFaceSet58;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

Transform13.children[5] = Transform54;

let Transform60 = browser.currentScene.createNode("Transform");
let Shape61 = browser.currentScene.createNode("Shape");
Shape61.DEF = "faceFit";
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.USE = "plasticFit";
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

let IndexedFaceSet64 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet64.coordIndex = new MFInt32(new int[1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
IndexedFaceSet64.creaseAngle = 1.45;
IndexedFaceSet64.solid = False;
let Coordinate65 = browser.currentScene.createNode("Coordinate");
Coordinate65.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet64.coord = Coordinate65;

Shape61.geometry = IndexedFaceSet64;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

Transform13.children[6] = Transform60;

let Transform66 = browser.currentScene.createNode("Transform");
let Shape67 = browser.currentScene.createNode("Shape");
Shape67.DEF = "belt";
let Appearance68 = browser.currentScene.createNode("Appearance");
let Material69 = browser.currentScene.createNode("Material");
Material69.USE = "plastic";
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

let IndexedFaceSet70 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet70.coordIndex = new MFInt32(new int[3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
IndexedFaceSet70.creaseAngle = 1.45;
IndexedFaceSet70.solid = False;
let Coordinate71 = browser.currentScene.createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175]);
IndexedFaceSet70.coord = Coordinate71;

Shape67.geometry = IndexedFaceSet70;

Transform66.child = new undefined();

Transform66.child[0] = Shape67;

Transform13.children[7] = Transform66;

browser.currentScene.children[2] = Transform13;

