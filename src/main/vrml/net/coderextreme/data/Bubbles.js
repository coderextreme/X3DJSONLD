let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "Bubbles.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Bubble animation used by Nancy Diving example.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Etsuko Lippi";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "24 January 2001";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "23 May 2020";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "identifier";
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d";
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
WorldInfo11.title = "Bubbles.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo11;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "Bubbles";
let Group13 = browser.currentScene.createNode("Group");
Group13.DEF = "Bubble";
let TimeSensor14 = browser.currentScene.createNode("TimeSensor");
TimeSensor14.DEF = "BubbleClock";
TimeSensor14.cycleInterval = 6;
TimeSensor14.loop = True;
Group13.children = new MFNode();

Group13.children[0] = TimeSensor14;

let PositionInterpolator15 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator15.DEF = "BubblePath1";
PositionInterpolator15.key = new MFFloat(new float[0,0.5,0.8,0.9,1]);
PositionInterpolator15.keyValue = new MFVec3f(new float[0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509]);
Group13.children[1] = PositionInterpolator15;

let PositionInterpolator16 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator16.DEF = "BubblePath2";
PositionInterpolator16.key = new MFFloat(new float[0,0.3,0.64,0.85,1]);
PositionInterpolator16.keyValue = new MFVec3f(new float[0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373]);
Group13.children[2] = PositionInterpolator16;

let PositionInterpolator17 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator17.DEF = "BubblePath3";
PositionInterpolator17.key = new MFFloat(new float[0,0.1,0.45,0.7,1]);
PositionInterpolator17.keyValue = new MFVec3f(new float[0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734]);
Group13.children[3] = PositionInterpolator17;

let PositionInterpolator18 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator18.DEF = "BubblePath4";
PositionInterpolator18.key = new MFFloat(new float[0,0.5,0.6,0.8,1]);
PositionInterpolator18.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349]);
Group13.children[4] = PositionInterpolator18;

let PositionInterpolator19 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator19.DEF = "BubblePath5";
PositionInterpolator19.key = new MFFloat(new float[0,0.25,0.35,0.65,1]);
PositionInterpolator19.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1]);
Group13.children[5] = PositionInterpolator19;

let PositionInterpolator20 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator20.DEF = "BubblePath6";
PositionInterpolator20.key = new MFFloat(new float[0,0.15,0.22235,0.55565,1]);
PositionInterpolator20.keyValue = new MFVec3f(new float[0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14]);
Group13.children[6] = PositionInterpolator20;

let PositionInterpolator21 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator21.DEF = "BubblePath7";
PositionInterpolator21.key = new MFFloat(new float[0,0.2425,0.4535,0.6775,1]);
PositionInterpolator21.keyValue = new MFVec3f(new float[0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12]);
Group13.children[7] = PositionInterpolator21;

let PositionInterpolator22 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator22.DEF = "BubblePath8";
PositionInterpolator22.key = new MFFloat(new float[0,0.1125,0.5535,0.97865,1]);
PositionInterpolator22.keyValue = new MFVec3f(new float[0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86]);
Group13.children[8] = PositionInterpolator22;

let PositionInterpolator23 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator23.DEF = "BubblePath9";
PositionInterpolator23.key = new MFFloat(new float[0,0.0025,0.035,0.65,1]);
PositionInterpolator23.keyValue = new MFVec3f(new float[0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545]);
Group13.children[9] = PositionInterpolator23;

let PositionInterpolator24 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator24.DEF = "BubblePath10";
PositionInterpolator24.key = new MFFloat(new float[0,0.00025,0.035,0.6895,1]);
PositionInterpolator24.keyValue = new MFVec3f(new float[0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1]);
Group13.children[10] = PositionInterpolator24;

let Transform25 = browser.currentScene.createNode("Transform");
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "bubble1";
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new SFColor(new float[1,1,1]);
Material29.transparency = 0.8;
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Sphere30 = browser.currentScene.createNode("Sphere");
Sphere30.radius = 0.025;
Shape27.geometry = Sphere30;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

Transform25.children = new MFNode();

Transform25.children[0] = Transform26;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.DEF = "bubble2";
let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[1,1,1]);
Material34.transparency = 0.8;
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

let Sphere35 = browser.currentScene.createNode("Sphere");
Sphere35.radius = 0.055;
Shape32.geometry = Sphere35;

Transform31.children = new MFNode();

Transform31.children[0] = Shape32;

Transform25.children[1] = Transform31;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.DEF = "bubble3";
let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
let Material39 = browser.currentScene.createNode("Material");
Material39.diffuseColor = new SFColor(new float[1,1,1]);
Material39.transparency = 0.8;
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

let Sphere40 = browser.currentScene.createNode("Sphere");
Sphere40.radius = 0.065;
Shape37.geometry = Sphere40;

Transform36.children = new MFNode();

Transform36.children[0] = Shape37;

Transform25.children[2] = Transform36;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "bubble4";
let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new SFColor(new float[1,1,1]);
Material44.transparency = 0.8;
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let Sphere45 = browser.currentScene.createNode("Sphere");
Sphere45.radius = 0.015;
Shape42.geometry = Sphere45;

Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

Transform25.children[3] = Transform41;

let Transform46 = browser.currentScene.createNode("Transform");
Transform46.DEF = "bubble5";
let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new SFColor(new float[1,1,1]);
Material49.transparency = 0.8;
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let Sphere50 = browser.currentScene.createNode("Sphere");
Sphere50.radius = 0.075;
Shape47.geometry = Sphere50;

Transform46.children = new MFNode();

Transform46.children[0] = Shape47;

Transform25.children[4] = Transform46;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.DEF = "bubble6";
let Shape52 = browser.currentScene.createNode("Shape");
let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.diffuseColor = new SFColor(new float[1,1,1]);
Material54.transparency = 0.8;
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

let Sphere55 = browser.currentScene.createNode("Sphere");
Sphere55.radius = 0.005;
Shape52.geometry = Sphere55;

Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

Transform25.children[5] = Transform51;

let Transform56 = browser.currentScene.createNode("Transform");
Transform56.DEF = "bubble7";
let Shape57 = browser.currentScene.createNode("Shape");
let Appearance58 = browser.currentScene.createNode("Appearance");
let Material59 = browser.currentScene.createNode("Material");
Material59.diffuseColor = new SFColor(new float[1,1,1]);
Material59.transparency = 0.8;
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

let Sphere60 = browser.currentScene.createNode("Sphere");
Sphere60.radius = 0.035;
Shape57.geometry = Sphere60;

Transform56.children = new MFNode();

Transform56.children[0] = Shape57;

Transform25.children[6] = Transform56;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.DEF = "bubble8";
let Shape62 = browser.currentScene.createNode("Shape");
let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Material64.diffuseColor = new SFColor(new float[1,1,1]);
Material64.transparency = 0.8;
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

let Sphere65 = browser.currentScene.createNode("Sphere");
Sphere65.radius = 0.05;
Shape62.geometry = Sphere65;

Transform61.children = new MFNode();

Transform61.children[0] = Shape62;

Transform25.children[7] = Transform61;

let Transform66 = browser.currentScene.createNode("Transform");
Transform66.DEF = "bubble9";
let Shape67 = browser.currentScene.createNode("Shape");
let Appearance68 = browser.currentScene.createNode("Appearance");
let Material69 = browser.currentScene.createNode("Material");
Material69.diffuseColor = new SFColor(new float[1,1,1]);
Material69.transparency = 0.8;
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

let Sphere70 = browser.currentScene.createNode("Sphere");
Sphere70.radius = 0.045;
Shape67.geometry = Sphere70;

Transform66.children = new MFNode();

Transform66.children[0] = Shape67;

Transform25.children[8] = Transform66;

let Transform71 = browser.currentScene.createNode("Transform");
Transform71.DEF = "bubble10";
let Shape72 = browser.currentScene.createNode("Shape");
let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.diffuseColor = new SFColor(new float[1,1,1]);
Material74.transparency = 0.8;
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

let Sphere75 = browser.currentScene.createNode("Sphere");
Sphere75.radius = 0.035;
Shape72.geometry = Sphere75;

Transform71.children = new MFNode();

Transform71.children[0] = Shape72;

Transform25.children[9] = Transform71;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "fraction_changed";
ROUTE76.fromNode = "BubbleClock";
ROUTE76.toField = "set_fraction";
ROUTE76.toNode = "BubblePath1";
Transform25.children[10] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromField = "fraction_changed";
ROUTE77.fromNode = "BubbleClock";
ROUTE77.toField = "set_fraction";
ROUTE77.toNode = "BubblePath2";
Transform25.children[11] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromField = "fraction_changed";
ROUTE78.fromNode = "BubbleClock";
ROUTE78.toField = "set_fraction";
ROUTE78.toNode = "BubblePath3";
Transform25.children[12] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromField = "fraction_changed";
ROUTE79.fromNode = "BubbleClock";
ROUTE79.toField = "set_fraction";
ROUTE79.toNode = "BubblePath4";
Transform25.children[13] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromField = "fraction_changed";
ROUTE80.fromNode = "BubbleClock";
ROUTE80.toField = "set_fraction";
ROUTE80.toNode = "BubblePath5";
Transform25.children[14] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromField = "fraction_changed";
ROUTE81.fromNode = "BubbleClock";
ROUTE81.toField = "set_fraction";
ROUTE81.toNode = "BubblePath6";
Transform25.children[15] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromField = "fraction_changed";
ROUTE82.fromNode = "BubbleClock";
ROUTE82.toField = "set_fraction";
ROUTE82.toNode = "BubblePath7";
Transform25.children[16] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromField = "fraction_changed";
ROUTE83.fromNode = "BubbleClock";
ROUTE83.toField = "set_fraction";
ROUTE83.toNode = "BubblePath8";
Transform25.children[17] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromField = "fraction_changed";
ROUTE84.fromNode = "BubbleClock";
ROUTE84.toField = "set_fraction";
ROUTE84.toNode = "BubblePath9";
Transform25.children[18] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromField = "fraction_changed";
ROUTE85.fromNode = "BubbleClock";
ROUTE85.toField = "set_fraction";
ROUTE85.toNode = "BubblePath10";
Transform25.children[19] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromField = "value_changed";
ROUTE86.fromNode = "BubblePath1";
ROUTE86.toField = "set_translation";
ROUTE86.toNode = "bubble1";
Transform25.children[20] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromField = "value_changed";
ROUTE87.fromNode = "BubblePath2";
ROUTE87.toField = "set_translation";
ROUTE87.toNode = "bubble2";
Transform25.children[21] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromField = "value_changed";
ROUTE88.fromNode = "BubblePath3";
ROUTE88.toField = "set_translation";
ROUTE88.toNode = "bubble3";
Transform25.children[22] = ROUTE88;

let ROUTE89 = browser.currentScene.createNode("ROUTE");
ROUTE89.fromField = "value_changed";
ROUTE89.fromNode = "BubblePath4";
ROUTE89.toField = "set_translation";
ROUTE89.toNode = "bubble4";
Transform25.children[23] = ROUTE89;

let ROUTE90 = browser.currentScene.createNode("ROUTE");
ROUTE90.fromField = "value_changed";
ROUTE90.fromNode = "BubblePath5";
ROUTE90.toField = "set_translation";
ROUTE90.toNode = "bubble5";
Transform25.children[24] = ROUTE90;

let ROUTE91 = browser.currentScene.createNode("ROUTE");
ROUTE91.fromField = "value_changed";
ROUTE91.fromNode = "BubblePath6";
ROUTE91.toField = "set_translation";
ROUTE91.toNode = "bubble6";
Transform25.children[25] = ROUTE91;

let ROUTE92 = browser.currentScene.createNode("ROUTE");
ROUTE92.fromField = "value_changed";
ROUTE92.fromNode = "BubblePath7";
ROUTE92.toField = "set_translation";
ROUTE92.toNode = "bubble7";
Transform25.children[26] = ROUTE92;

let ROUTE93 = browser.currentScene.createNode("ROUTE");
ROUTE93.fromField = "value_changed";
ROUTE93.fromNode = "BubblePath8";
ROUTE93.toField = "set_translation";
ROUTE93.toNode = "bubble8";
Transform25.children[27] = ROUTE93;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromField = "value_changed";
ROUTE94.fromNode = "BubblePath9";
ROUTE94.toField = "set_translation";
ROUTE94.toNode = "bubble9";
Transform25.children[28] = ROUTE94;

let ROUTE95 = browser.currentScene.createNode("ROUTE");
ROUTE95.fromField = "value_changed";
ROUTE95.fromNode = "BubblePath10";
ROUTE95.toField = "set_translation";
ROUTE95.toNode = "bubble10";
Transform25.children[29] = ROUTE95;

Group13.children[11] = Transform25;

Transform12.children = new MFNode();

Transform12.children[0] = Group13;

browser.currentScene.children[1] = Transform12;

let Background96 = browser.currentScene.createNode("Background");
Background96.skyColor = new MFColor(new float[0,0,0.6]);
browser.currentScene.children[2] = Background96;

