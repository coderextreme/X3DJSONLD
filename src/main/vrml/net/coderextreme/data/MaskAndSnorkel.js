let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "MaskAndSnorkel.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = new MFColor(new float[0,0,0.9]);
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "maskAndSnorkel";
let Transform5 = browser.currentScene.createNode("Transform");
let Shape6 = browser.currentScene.createNode("Shape");
Shape6.DEF = "maskFrame";
let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.DEF = "frameColor";
Material8.diffuseColor = new SFColor(new float[0,0,0]);
Appearance7.material = Material8;

Shape6.appearance = Appearance7;

let IndexedFaceSet9 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet9.coordIndex = new MFInt32(new int[0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
IndexedFaceSet9.creaseAngle = 1.45;
IndexedFaceSet9.solid = False;
let Coordinate10 = browser.currentScene.createNode("Coordinate");
Coordinate10.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet9.coord = Coordinate10;

Shape6.geometry = IndexedFaceSet9;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

Transform4.children = new MFNode();

Transform4.children[0] = Transform5;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "snorkelHoldRing";
Transform11.translation = new SFVec3f(new float[0.075,0.075,-0.02]);
let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.USE = "frameColor";
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let Cylinder15 = browser.currentScene.createNode("Cylinder");
Cylinder15.height = 0.003;
Cylinder15.radius = 0.015;
Shape12.geometry = Cylinder15;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

Transform4.children[1] = Transform11;

let Group16 = browser.currentScene.createNode("Group");
Group16.DEF = "snorkel";
let Transform17 = browser.currentScene.createNode("Transform");
Transform17.translation = new SFVec3f(new float[0,-0.02,0]);
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform18.translation = new SFVec3f(new float[0.035,-0.07,-0.02]);
let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.DEF = "snorkelTube";
Material21.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material21.transparency = 0.4;
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

let Extrusion22 = browser.currentScene.createNode("Extrusion");
Extrusion22.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion22.spine = new MFVec3f(new float[-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03]);
Shape19.geometry = Extrusion22;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform23.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform23.translation = new SFVec3f(new float[0.01,-0.04,-0.02]);
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.DEF = "Mouthpiece";
Material26.diffuseColor = new SFColor(new float[0.678,1,0.8]);
Material26.transparency = 0.4;
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let Extrusion27 = browser.currentScene.createNode("Extrusion");
Extrusion27.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion27.spine = new MFVec3f(new float[-0.01,-0.03,0,0,0,0,0.02,0.01,0]);
Shape24.geometry = Extrusion27;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Transform17.children[1] = Transform23;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.rotation = new SFRotation(new float[0,0,1,-0.85]);
Transform28.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform28.translation = new SFVec3f(new float[0.005,-0.01,-0.02]);
let Shape29 = browser.currentScene.createNode("Shape");
let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
Material31.USE = "Mouthpiece";
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

let Extrusion32 = browser.currentScene.createNode("Extrusion");
Extrusion32.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion32.spine = new MFVec3f(new float[-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0]);
Shape29.geometry = Extrusion32;

Transform28.children = new MFNode();

Transform28.children[0] = Shape29;

Transform17.children[2] = Transform28;

Group16.children = new MFNode();

Group16.children[0] = Transform17;

Transform4.children[2] = Group16;

let Transform33 = browser.currentScene.createNode("Transform");
let Shape34 = browser.currentScene.createNode("Shape");
Shape34.DEF = "maskLensR";
let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.DEF = "plastic";
Material36.diffuseColor = new SFColor(new float[0.941,0.973,1]);
Material36.transparency = 0.8;
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

let IndexedFaceSet37 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet37.coordIndex = new MFInt32(new int[12,13,14,15,16,17,18,12,-1]);
IndexedFaceSet37.creaseAngle = 1.45;
IndexedFaceSet37.solid = False;
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet37.coord = Coordinate38;

Shape34.geometry = IndexedFaceSet37;

Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

Transform4.children[3] = Transform33;

let Transform39 = browser.currentScene.createNode("Transform");
let Shape40 = browser.currentScene.createNode("Shape");
Shape40.DEF = "maskLensL";
let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.USE = "plastic";
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

let IndexedFaceSet43 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet43.coordIndex = new MFInt32(new int[19,20,21,22,23,24,25,19,-1]);
IndexedFaceSet43.creaseAngle = 1.45;
IndexedFaceSet43.solid = False;
let Coordinate44 = browser.currentScene.createNode("Coordinate");
Coordinate44.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet43.coord = Coordinate44;

Shape40.geometry = IndexedFaceSet43;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

Transform4.children[4] = Transform39;

let Transform45 = browser.currentScene.createNode("Transform");
let Shape46 = browser.currentScene.createNode("Shape");
Shape46.DEF = "nose";
let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.DEF = "plasticFit";
Material48.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material48.transparency = 0.7;
Appearance47.material = Material48;

Shape46.appearance = Appearance47;

let IndexedFaceSet49 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet49.coordIndex = new MFInt32(new int[0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
IndexedFaceSet49.creaseAngle = 1.45;
IndexedFaceSet49.solid = False;
let Coordinate50 = browser.currentScene.createNode("Coordinate");
Coordinate50.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet49.coord = Coordinate50;

Shape46.geometry = IndexedFaceSet49;

Transform45.children = new MFNode();

Transform45.children[0] = Shape46;

Transform4.children[5] = Transform45;

let Transform51 = browser.currentScene.createNode("Transform");
let Shape52 = browser.currentScene.createNode("Shape");
Shape52.DEF = "faceFit";
let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.USE = "plasticFit";
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

let IndexedFaceSet55 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet55.coordIndex = new MFInt32(new int[1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
IndexedFaceSet55.creaseAngle = 1.45;
IndexedFaceSet55.solid = False;
let Coordinate56 = browser.currentScene.createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet55.coord = Coordinate56;

Shape52.geometry = IndexedFaceSet55;

Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

Transform4.children[6] = Transform51;

let Transform57 = browser.currentScene.createNode("Transform");
let Shape58 = browser.currentScene.createNode("Shape");
Shape58.DEF = "belt";
let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.USE = "plastic";
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

let IndexedFaceSet61 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet61.coordIndex = new MFInt32(new int[3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
IndexedFaceSet61.creaseAngle = 1.45;
IndexedFaceSet61.solid = False;
let Coordinate62 = browser.currentScene.createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175]);
IndexedFaceSet61.coord = Coordinate62;

Shape58.geometry = IndexedFaceSet61;

Transform57.children = new MFNode();

Transform57.children[0] = Shape58;

Transform4.children[7] = Transform57;

browser.currentScene.children[2] = Transform4;

