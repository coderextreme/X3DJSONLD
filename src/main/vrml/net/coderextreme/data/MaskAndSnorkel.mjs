let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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

head = head1;

let WorldInfo10 = browser.currentScene.createNode("WorldInfo");
WorldInfo10.title = "MaskAndSnorkel.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo10;

let Background11 = browser.currentScene.createNode("Background");
Background11.skyColor = new MFColor(new float[0,0,0.9]);
browser.currentScene.children[1] = Background11;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "maskAndSnorkel";
let Transform13 = browser.currentScene.createNode("Transform");
let Shape14 = browser.currentScene.createNode("Shape");
Shape14.DEF = "maskFrame";
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.DEF = "frameColor";
Material16.diffuseColor = new SFColor(new float[0,0,0]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

let IndexedFaceSet17 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet17.solid = False;
IndexedFaceSet17.creaseAngle = 1.45;
IndexedFaceSet17.coordIndex = new MFInt32(new int[0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
let Coordinate18 = browser.currentScene.createNode("Coordinate");
Coordinate18.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet17.coord = Coordinate18;

Shape14.geometry = IndexedFaceSet17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

Transform12.children = new MFNode();

Transform12.children[0] = Transform13;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "snorkelHoldRing";
Transform19.translation = new SFVec3f(new float[0.075,0.075,-0.02]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.USE = "frameColor";
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Cylinder23 = browser.currentScene.createNode("Cylinder");
Cylinder23.height = 0.003;
Cylinder23.radius = 0.015;
Shape20.geometry = Cylinder23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform12.children[1] = Transform19;

let Group24 = browser.currentScene.createNode("Group");
Group24.DEF = "snorkel";
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.translation = new SFVec3f(new float[0,-0.02,0]);
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = new SFVec3f(new float[0.035,-0.07,-0.02]);
Transform26.scale = new SFVec3f(new float[0.9,0.9,0.9]);
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
let Material29 = browser.currentScene.createNode("Material");
Material29.DEF = "snorkelTube";
Material29.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material29.transparency = 0.4;
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Extrusion30 = browser.currentScene.createNode("Extrusion");
Extrusion30.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion30.spine = new MFVec3f(new float[-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03]);
Shape27.geometry = Extrusion30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Transform25.children = new MFNode();

Transform25.children[0] = Transform26;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.translation = new SFVec3f(new float[0.01,-0.04,-0.02]);
Transform31.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform31.scale = new SFVec3f(new float[0.9,0.9,0.9]);
let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.DEF = "Mouthpiece";
Material34.diffuseColor = new SFColor(new float[0.678,1,0.8]);
Material34.transparency = 0.4;
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

let Extrusion35 = browser.currentScene.createNode("Extrusion");
Extrusion35.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion35.spine = new MFVec3f(new float[-0.01,-0.03,0,0,0,0,0.02,0.01,0]);
Shape32.geometry = Extrusion35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

Transform25.children[1] = Transform31;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.translation = new SFVec3f(new float[0.005,-0.01,-0.02]);
Transform36.rotation = new SFRotation(new float[0,0,1,-0.85]);
Transform36.scale = new SFVec3f(new float[0.9,0.9,0.9]);
let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
let Material39 = browser.currentScene.createNode("Material");
Material39.USE = "Mouthpiece";
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

let Extrusion40 = browser.currentScene.createNode("Extrusion");
Extrusion40.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion40.spine = new MFVec3f(new float[-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0]);
Shape37.geometry = Extrusion40;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

Transform25.children[2] = Transform36;

Group24.children = new MFNode();

Group24.children[0] = Transform25;

Transform12.children[2] = Group24;

let Transform41 = browser.currentScene.createNode("Transform");
let Shape42 = browser.currentScene.createNode("Shape");
Shape42.DEF = "maskLensR";
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.DEF = "plastic";
Material44.diffuseColor = new SFColor(new float[0.941,0.973,1]);
Material44.transparency = 0.8;
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let IndexedFaceSet45 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet45.solid = False;
IndexedFaceSet45.creaseAngle = 1.45;
IndexedFaceSet45.coordIndex = new MFInt32(new int[12,13,14,15,16,17,18,12,-1]);
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet45.coord = Coordinate46;

Shape42.geometry = IndexedFaceSet45;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Transform12.children[3] = Transform41;

let Transform47 = browser.currentScene.createNode("Transform");
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.DEF = "maskLensL";
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.USE = "plastic";
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

let IndexedFaceSet51 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet51.solid = False;
IndexedFaceSet51.creaseAngle = 1.45;
IndexedFaceSet51.coordIndex = new MFInt32(new int[19,20,21,22,23,24,25,19,-1]);
let Coordinate52 = browser.currentScene.createNode("Coordinate");
Coordinate52.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet51.coord = Coordinate52;

Shape48.geometry = IndexedFaceSet51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

Transform12.children[4] = Transform47;

let Transform53 = browser.currentScene.createNode("Transform");
let Shape54 = browser.currentScene.createNode("Shape");
Shape54.DEF = "nose";
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.DEF = "plasticFit";
Material56.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material56.transparency = 0.7;
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

let IndexedFaceSet57 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet57.solid = False;
IndexedFaceSet57.creaseAngle = 1.45;
IndexedFaceSet57.coordIndex = new MFInt32(new int[0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet57.coord = Coordinate58;

Shape54.geometry = IndexedFaceSet57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

Transform12.children[5] = Transform53;

let Transform59 = browser.currentScene.createNode("Transform");
let Shape60 = browser.currentScene.createNode("Shape");
Shape60.DEF = "faceFit";
let Appearance61 = browser.currentScene.createNode("Appearance");
let Material62 = browser.currentScene.createNode("Material");
Material62.USE = "plasticFit";
Appearance61.material = Material62;

Shape60.appearance = Appearance61;

let IndexedFaceSet63 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet63.solid = False;
IndexedFaceSet63.creaseAngle = 1.45;
IndexedFaceSet63.coordIndex = new MFInt32(new int[1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
let Coordinate64 = browser.currentScene.createNode("Coordinate");
Coordinate64.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet63.coord = Coordinate64;

Shape60.geometry = IndexedFaceSet63;

Transform59.child = new undefined();

Transform59.child[0] = Shape60;

Transform12.children[6] = Transform59;

let Transform65 = browser.currentScene.createNode("Transform");
let Shape66 = browser.currentScene.createNode("Shape");
Shape66.DEF = "belt";
let Appearance67 = browser.currentScene.createNode("Appearance");
let Material68 = browser.currentScene.createNode("Material");
Material68.USE = "plastic";
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

let IndexedFaceSet69 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet69.solid = False;
IndexedFaceSet69.creaseAngle = 1.45;
IndexedFaceSet69.coordIndex = new MFInt32(new int[3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
let Coordinate70 = browser.currentScene.createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175]);
IndexedFaceSet69.coord = Coordinate70;

Shape66.geometry = IndexedFaceSet69;

Transform65.child = new undefined();

Transform65.child[0] = Shape66;

Transform12.children[7] = Transform65;

browser.currentScene.children[2] = Transform12;

