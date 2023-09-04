let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "4.0";
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

head = head1;

let WorldInfo10 = browser.currentScene.createNode("WorldInfo");
WorldInfo10.title = "Bubbles.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo10;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "Bubbles";
let Group12 = browser.currentScene.createNode("Group");
Group12.DEF = "Bubble";
let TimeSensor13 = browser.currentScene.createNode("TimeSensor");
TimeSensor13.DEF = "BubbleClock";
TimeSensor13.cycleInterval = 6;
TimeSensor13.loop = True;
Group12.children = new MFNode();

Group12.children[0] = TimeSensor13;

let PositionInterpolator14 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator14.DEF = "BubblePath1";
PositionInterpolator14.key = new MFFloat(new float[0,0.5,0.8,0.9,1]);
PositionInterpolator14.keyValue = new MFVec3f(new float[0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509]);
Group12.children[1] = PositionInterpolator14;

let PositionInterpolator15 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator15.DEF = "BubblePath2";
PositionInterpolator15.key = new MFFloat(new float[0,0.3,0.64,0.85,1]);
PositionInterpolator15.keyValue = new MFVec3f(new float[0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.03848348,1.989,1.098373]);
Group12.children[2] = PositionInterpolator15;

let PositionInterpolator16 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator16.DEF = "BubblePath3";
PositionInterpolator16.key = new MFFloat(new float[0,0.1,0.45,0.7,1]);
PositionInterpolator16.keyValue = new MFVec3f(new float[0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734]);
Group12.children[3] = PositionInterpolator16;

let PositionInterpolator17 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator17.DEF = "BubblePath4";
PositionInterpolator17.key = new MFFloat(new float[0,0.5,0.6,0.8,1]);
PositionInterpolator17.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349]);
Group12.children[4] = PositionInterpolator17;

let PositionInterpolator18 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator18.DEF = "BubblePath5";
PositionInterpolator18.key = new MFFloat(new float[0,0.25,0.35,0.65,1]);
PositionInterpolator18.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1]);
Group12.children[5] = PositionInterpolator18;

let PositionInterpolator19 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator19.DEF = "BubblePath6";
PositionInterpolator19.key = new MFFloat(new float[0,0.15,0.22235,0.55565,1]);
PositionInterpolator19.keyValue = new MFVec3f(new float[0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14]);
Group12.children[6] = PositionInterpolator19;

let PositionInterpolator20 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator20.DEF = "BubblePath7";
PositionInterpolator20.key = new MFFloat(new float[0,0.2425,0.4535,0.6775,1]);
PositionInterpolator20.keyValue = new MFVec3f(new float[0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12]);
Group12.children[7] = PositionInterpolator20;

let PositionInterpolator21 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator21.DEF = "BubblePath8";
PositionInterpolator21.key = new MFFloat(new float[0,0.1125,0.5535,0.97865,1]);
PositionInterpolator21.keyValue = new MFVec3f(new float[0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86]);
Group12.children[8] = PositionInterpolator21;

let PositionInterpolator22 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator22.DEF = "BubblePath9";
PositionInterpolator22.key = new MFFloat(new float[0,0.0025,0.035,0.65,1]);
PositionInterpolator22.keyValue = new MFVec3f(new float[0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545]);
Group12.children[9] = PositionInterpolator22;

let PositionInterpolator23 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator23.DEF = "BubblePath10";
PositionInterpolator23.key = new MFFloat(new float[0,0.00025,0.035,0.6895,1]);
PositionInterpolator23.keyValue = new MFVec3f(new float[0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1]);
Group12.children[10] = PositionInterpolator23;

let Transform24 = browser.currentScene.createNode("Transform");
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "bubble1";
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new SFColor(new float[1,1,1]);
Material28.transparency = 0.8;
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

let Sphere29 = browser.currentScene.createNode("Sphere");
Sphere29.radius = 0.025;
Shape26.geometry = Sphere29;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Transform24.children = new MFNode();

Transform24.children[0] = Transform25;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.DEF = "bubble2";
let Shape31 = browser.currentScene.createNode("Shape");
let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.diffuseColor = new SFColor(new float[1,1,1]);
Material33.transparency = 0.8;
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

let Sphere34 = browser.currentScene.createNode("Sphere");
Sphere34.radius = 0.055;
Shape31.geometry = Sphere34;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

Transform24.children[1] = Transform30;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "bubble3";
let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.diffuseColor = new SFColor(new float[1,1,1]);
Material38.transparency = 0.8;
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let Sphere39 = browser.currentScene.createNode("Sphere");
Sphere39.radius = 0.065;
Shape36.geometry = Sphere39;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

Transform24.children[2] = Transform35;

let Transform40 = browser.currentScene.createNode("Transform");
Transform40.DEF = "bubble4";
let Shape41 = browser.currentScene.createNode("Shape");
let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.diffuseColor = new SFColor(new float[1,1,1]);
Material43.transparency = 0.8;
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

let Sphere44 = browser.currentScene.createNode("Sphere");
Sphere44.radius = 0.015;
Shape41.geometry = Sphere44;

Transform40.child = new undefined();

Transform40.child[0] = Shape41;

Transform24.children[3] = Transform40;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.DEF = "bubble5";
let Shape46 = browser.currentScene.createNode("Shape");
let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.diffuseColor = new SFColor(new float[1,1,1]);
Material48.transparency = 0.8;
Appearance47.material = Material48;

Shape46.appearance = Appearance47;

let Sphere49 = browser.currentScene.createNode("Sphere");
Sphere49.radius = 0.075;
Shape46.geometry = Sphere49;

Transform45.child = new undefined();

Transform45.child[0] = Shape46;

Transform24.children[4] = Transform45;

let Transform50 = browser.currentScene.createNode("Transform");
Transform50.DEF = "bubble6";
let Shape51 = browser.currentScene.createNode("Shape");
let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.diffuseColor = new SFColor(new float[1,1,1]);
Material53.transparency = 0.8;
Appearance52.material = Material53;

Shape51.appearance = Appearance52;

let Sphere54 = browser.currentScene.createNode("Sphere");
Sphere54.radius = 0.005;
Shape51.geometry = Sphere54;

Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Transform24.children[5] = Transform50;

let Transform55 = browser.currentScene.createNode("Transform");
Transform55.DEF = "bubble7";
let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new SFColor(new float[1,1,1]);
Material58.transparency = 0.8;
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let Sphere59 = browser.currentScene.createNode("Sphere");
Sphere59.radius = 0.035;
Shape56.geometry = Sphere59;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Transform24.children[6] = Transform55;

let Transform60 = browser.currentScene.createNode("Transform");
Transform60.DEF = "bubble8";
let Shape61 = browser.currentScene.createNode("Shape");
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.diffuseColor = new SFColor(new float[1,1,1]);
Material63.transparency = 0.8;
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

let Sphere64 = browser.currentScene.createNode("Sphere");
Sphere64.radius = 0.05;
Shape61.geometry = Sphere64;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

Transform24.children[7] = Transform60;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.DEF = "bubble9";
let Shape66 = browser.currentScene.createNode("Shape");
let Appearance67 = browser.currentScene.createNode("Appearance");
let Material68 = browser.currentScene.createNode("Material");
Material68.diffuseColor = new SFColor(new float[1,1,1]);
Material68.transparency = 0.8;
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

let Sphere69 = browser.currentScene.createNode("Sphere");
Sphere69.radius = 0.045;
Shape66.geometry = Sphere69;

Transform65.child = new undefined();

Transform65.child[0] = Shape66;

Transform24.children[8] = Transform65;

let Transform70 = browser.currentScene.createNode("Transform");
Transform70.DEF = "bubble10";
let Shape71 = browser.currentScene.createNode("Shape");
let Appearance72 = browser.currentScene.createNode("Appearance");
let Material73 = browser.currentScene.createNode("Material");
Material73.diffuseColor = new SFColor(new float[1,1,1]);
Material73.transparency = 0.8;
Appearance72.material = Material73;

Shape71.appearance = Appearance72;

let Sphere74 = browser.currentScene.createNode("Sphere");
Sphere74.radius = 0.035;
Shape71.geometry = Sphere74;

Transform70.child = new undefined();

Transform70.child[0] = Shape71;

Transform24.children[9] = Transform70;

Group12.children[11] = Transform24;

Transform11.children = new MFNode();

Transform11.children[0] = Group12;

browser.currentScene.children[1] = Transform11;

let Background75 = browser.currentScene.createNode("Background");
Background75.skyColor = new MFColor(new float[0,0,0.6]);
browser.currentScene.children[2] = Background75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "BubbleClock";
ROUTE76.fromField = "fraction_changed";
ROUTE76.toNode = "BubblePath1";
ROUTE76.toField = "set_fraction";
browser.currentScene.children[3] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "BubbleClock";
ROUTE77.fromField = "fraction_changed";
ROUTE77.toNode = "BubblePath2";
ROUTE77.toField = "set_fraction";
browser.currentScene.children[4] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "BubbleClock";
ROUTE78.fromField = "fraction_changed";
ROUTE78.toNode = "BubblePath3";
ROUTE78.toField = "set_fraction";
browser.currentScene.children[5] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "BubbleClock";
ROUTE79.fromField = "fraction_changed";
ROUTE79.toNode = "BubblePath4";
ROUTE79.toField = "set_fraction";
browser.currentScene.children[6] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "BubbleClock";
ROUTE80.fromField = "fraction_changed";
ROUTE80.toNode = "BubblePath5";
ROUTE80.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "BubbleClock";
ROUTE81.fromField = "fraction_changed";
ROUTE81.toNode = "BubblePath6";
ROUTE81.toField = "set_fraction";
browser.currentScene.children[8] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "BubbleClock";
ROUTE82.fromField = "fraction_changed";
ROUTE82.toNode = "BubblePath7";
ROUTE82.toField = "set_fraction";
browser.currentScene.children[9] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "BubbleClock";
ROUTE83.fromField = "fraction_changed";
ROUTE83.toNode = "BubblePath8";
ROUTE83.toField = "set_fraction";
browser.currentScene.children[10] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "BubbleClock";
ROUTE84.fromField = "fraction_changed";
ROUTE84.toNode = "BubblePath9";
ROUTE84.toField = "set_fraction";
browser.currentScene.children[11] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "BubbleClock";
ROUTE85.fromField = "fraction_changed";
ROUTE85.toNode = "BubblePath10";
ROUTE85.toField = "set_fraction";
browser.currentScene.children[12] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromNode = "BubblePath1";
ROUTE86.fromField = "value_changed";
ROUTE86.toNode = "bubble1";
ROUTE86.toField = "translation";
browser.currentScene.children[13] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromNode = "BubblePath2";
ROUTE87.fromField = "value_changed";
ROUTE87.toNode = "bubble2";
ROUTE87.toField = "translation";
browser.currentScene.children[14] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromNode = "BubblePath3";
ROUTE88.fromField = "value_changed";
ROUTE88.toNode = "bubble3";
ROUTE88.toField = "translation";
browser.currentScene.children[15] = ROUTE88;

let ROUTE89 = browser.currentScene.createNode("ROUTE");
ROUTE89.fromNode = "BubblePath4";
ROUTE89.fromField = "value_changed";
ROUTE89.toNode = "bubble4";
ROUTE89.toField = "translation";
browser.currentScene.children[16] = ROUTE89;

let ROUTE90 = browser.currentScene.createNode("ROUTE");
ROUTE90.fromNode = "BubblePath5";
ROUTE90.fromField = "value_changed";
ROUTE90.toNode = "bubble5";
ROUTE90.toField = "translation";
browser.currentScene.children[17] = ROUTE90;

let ROUTE91 = browser.currentScene.createNode("ROUTE");
ROUTE91.fromNode = "BubblePath6";
ROUTE91.fromField = "value_changed";
ROUTE91.toNode = "bubble6";
ROUTE91.toField = "translation";
browser.currentScene.children[18] = ROUTE91;

let ROUTE92 = browser.currentScene.createNode("ROUTE");
ROUTE92.fromNode = "BubblePath7";
ROUTE92.fromField = "value_changed";
ROUTE92.toNode = "bubble7";
ROUTE92.toField = "translation";
browser.currentScene.children[19] = ROUTE92;

let ROUTE93 = browser.currentScene.createNode("ROUTE");
ROUTE93.fromNode = "BubblePath8";
ROUTE93.fromField = "value_changed";
ROUTE93.toNode = "bubble8";
ROUTE93.toField = "translation";
browser.currentScene.children[20] = ROUTE93;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromNode = "BubblePath9";
ROUTE94.fromField = "value_changed";
ROUTE94.toNode = "bubble9";
ROUTE94.toField = "translation";
browser.currentScene.children[21] = ROUTE94;

let ROUTE95 = browser.currentScene.createNode("ROUTE");
ROUTE95.fromNode = "BubblePath10";
ROUTE95.fromField = "value_changed";
ROUTE95.toNode = "bubble10";
ROUTE95.toField = "translation";
browser.currentScene.children[22] = ROUTE95;

