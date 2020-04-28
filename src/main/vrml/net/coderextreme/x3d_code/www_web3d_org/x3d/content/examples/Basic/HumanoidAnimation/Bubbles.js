let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Bubbles.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Transform3 = browser.currentScene.createNode("Transform");
Transform3.DEF = "Bubbles";
let Group4 = browser.currentScene.createNode("Group");
Group4.DEF = "Bubble";
let TimeSensor5 = browser.currentScene.createNode("TimeSensor");
TimeSensor5.DEF = "BubbleClock";
TimeSensor5.cycleInterval = 6;
TimeSensor5.loop = True;
Group4.children = new MFNode();

Group4.children[0] = TimeSensor5;

let PositionInterpolator6 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator6.DEF = "BubblePath1";
PositionInterpolator6.key = new MFFloat(new float[0,0.5,0.8,0.9,1]);
PositionInterpolator6.keyValue = new MFVec3f(new float[0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509]);
Group4.children[1] = PositionInterpolator6;

let PositionInterpolator7 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator7.DEF = "BubblePath2";
PositionInterpolator7.key = new MFFloat(new float[0,0.3,0.64,0.85,1]);
PositionInterpolator7.keyValue = new MFVec3f(new float[0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373]);
Group4.children[2] = PositionInterpolator7;

let PositionInterpolator8 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator8.DEF = "BubblePath3";
PositionInterpolator8.key = new MFFloat(new float[0,0.1,0.45,0.7,1]);
PositionInterpolator8.keyValue = new MFVec3f(new float[0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734]);
Group4.children[3] = PositionInterpolator8;

let PositionInterpolator9 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator9.DEF = "BubblePath4";
PositionInterpolator9.key = new MFFloat(new float[0,0.5,0.6,0.8,1]);
PositionInterpolator9.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349]);
Group4.children[4] = PositionInterpolator9;

let PositionInterpolator10 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator10.DEF = "BubblePath5";
PositionInterpolator10.key = new MFFloat(new float[0,0.25,0.35,0.65,1]);
PositionInterpolator10.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1]);
Group4.children[5] = PositionInterpolator10;

let PositionInterpolator11 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator11.DEF = "BubblePath6";
PositionInterpolator11.key = new MFFloat(new float[0,0.15,0.22235,0.55565,1]);
PositionInterpolator11.keyValue = new MFVec3f(new float[0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14]);
Group4.children[6] = PositionInterpolator11;

let PositionInterpolator12 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator12.DEF = "BubblePath7";
PositionInterpolator12.key = new MFFloat(new float[0,0.2425,0.4535,0.6775,1]);
PositionInterpolator12.keyValue = new MFVec3f(new float[0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12]);
Group4.children[7] = PositionInterpolator12;

let PositionInterpolator13 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator13.DEF = "BubblePath8";
PositionInterpolator13.key = new MFFloat(new float[0,0.1125,0.5535,0.97865,1]);
PositionInterpolator13.keyValue = new MFVec3f(new float[0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86]);
Group4.children[8] = PositionInterpolator13;

let PositionInterpolator14 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator14.DEF = "BubblePath9";
PositionInterpolator14.key = new MFFloat(new float[0,0.0025,0.035,0.65,1]);
PositionInterpolator14.keyValue = new MFVec3f(new float[0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545]);
Group4.children[9] = PositionInterpolator14;

let PositionInterpolator15 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator15.DEF = "BubblePath10";
PositionInterpolator15.key = new MFFloat(new float[0,0.00025,0.035,0.6895,1]);
PositionInterpolator15.keyValue = new MFVec3f(new float[0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1]);
Group4.children[10] = PositionInterpolator15;

let Transform16 = browser.currentScene.createNode("Transform");
let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "bubble1";
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,1,1]);
Material20.transparency = 0.8;
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.025;
Shape18.geometry = Sphere21;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

Transform16.children = new MFNode();

Transform16.children[0] = Transform17;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "bubble2";
let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new SFColor(new float[1,1,1]);
Material25.transparency = 0.8;
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

let Sphere26 = browser.currentScene.createNode("Sphere");
Sphere26.radius = 0.055;
Shape23.geometry = Sphere26;

Transform22.children = new MFNode();

Transform22.children[0] = Shape23;

Transform16.children[1] = Transform22;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "bubble3";
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new SFColor(new float[1,1,1]);
Material30.transparency = 0.8;
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let Sphere31 = browser.currentScene.createNode("Sphere");
Sphere31.radius = 0.065;
Shape28.geometry = Sphere31;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

Transform16.children[2] = Transform27;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "bubble4";
let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = new SFColor(new float[1,1,1]);
Material35.transparency = 0.8;
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

let Sphere36 = browser.currentScene.createNode("Sphere");
Sphere36.radius = 0.015;
Shape33.geometry = Sphere36;

Transform32.children = new MFNode();

Transform32.children[0] = Shape33;

Transform16.children[3] = Transform32;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "bubble5";
let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[1,1,1]);
Material40.transparency = 0.8;
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let Sphere41 = browser.currentScene.createNode("Sphere");
Sphere41.radius = 0.075;
Shape38.geometry = Sphere41;

Transform37.children = new MFNode();

Transform37.children[0] = Shape38;

Transform16.children[4] = Transform37;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.DEF = "bubble6";
let Shape43 = browser.currentScene.createNode("Shape");
let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.diffuseColor = new SFColor(new float[1,1,1]);
Material45.transparency = 0.8;
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

let Sphere46 = browser.currentScene.createNode("Sphere");
Sphere46.radius = 0.005;
Shape43.geometry = Sphere46;

Transform42.children = new MFNode();

Transform42.children[0] = Shape43;

Transform16.children[5] = Transform42;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.DEF = "bubble7";
let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.diffuseColor = new SFColor(new float[1,1,1]);
Material50.transparency = 0.8;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

let Sphere51 = browser.currentScene.createNode("Sphere");
Sphere51.radius = 0.035;
Shape48.geometry = Sphere51;

Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

Transform16.children[6] = Transform47;

let Transform52 = browser.currentScene.createNode("Transform");
Transform52.DEF = "bubble8";
let Shape53 = browser.currentScene.createNode("Shape");
let Appearance54 = browser.currentScene.createNode("Appearance");
let Material55 = browser.currentScene.createNode("Material");
Material55.diffuseColor = new SFColor(new float[1,1,1]);
Material55.transparency = 0.8;
Appearance54.material = Material55;

Shape53.appearance = Appearance54;

let Sphere56 = browser.currentScene.createNode("Sphere");
Sphere56.radius = 0.05;
Shape53.geometry = Sphere56;

Transform52.children = new MFNode();

Transform52.children[0] = Shape53;

Transform16.children[7] = Transform52;

let Transform57 = browser.currentScene.createNode("Transform");
Transform57.DEF = "bubble9";
let Shape58 = browser.currentScene.createNode("Shape");
let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.diffuseColor = new SFColor(new float[1,1,1]);
Material60.transparency = 0.8;
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

let Sphere61 = browser.currentScene.createNode("Sphere");
Sphere61.radius = 0.045;
Shape58.geometry = Sphere61;

Transform57.children = new MFNode();

Transform57.children[0] = Shape58;

Transform16.children[8] = Transform57;

let Transform62 = browser.currentScene.createNode("Transform");
Transform62.DEF = "bubble10";
let Shape63 = browser.currentScene.createNode("Shape");
let Appearance64 = browser.currentScene.createNode("Appearance");
let Material65 = browser.currentScene.createNode("Material");
Material65.diffuseColor = new SFColor(new float[1,1,1]);
Material65.transparency = 0.8;
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

let Sphere66 = browser.currentScene.createNode("Sphere");
Sphere66.radius = 0.035;
Shape63.geometry = Sphere66;

Transform62.children = new MFNode();

Transform62.children[0] = Shape63;

Transform16.children[9] = Transform62;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromField = "fraction_changed";
ROUTE67.fromNode = "BubbleClock";
ROUTE67.toField = "set_fraction";
ROUTE67.toNode = "BubblePath1";
Transform16.children[10] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "fraction_changed";
ROUTE68.fromNode = "BubbleClock";
ROUTE68.toField = "set_fraction";
ROUTE68.toNode = "BubblePath2";
Transform16.children[11] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "fraction_changed";
ROUTE69.fromNode = "BubbleClock";
ROUTE69.toField = "set_fraction";
ROUTE69.toNode = "BubblePath3";
Transform16.children[12] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromField = "fraction_changed";
ROUTE70.fromNode = "BubbleClock";
ROUTE70.toField = "set_fraction";
ROUTE70.toNode = "BubblePath4";
Transform16.children[13] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromField = "fraction_changed";
ROUTE71.fromNode = "BubbleClock";
ROUTE71.toField = "set_fraction";
ROUTE71.toNode = "BubblePath5";
Transform16.children[14] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "fraction_changed";
ROUTE72.fromNode = "BubbleClock";
ROUTE72.toField = "set_fraction";
ROUTE72.toNode = "BubblePath6";
Transform16.children[15] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromField = "fraction_changed";
ROUTE73.fromNode = "BubbleClock";
ROUTE73.toField = "set_fraction";
ROUTE73.toNode = "BubblePath7";
Transform16.children[16] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromField = "fraction_changed";
ROUTE74.fromNode = "BubbleClock";
ROUTE74.toField = "set_fraction";
ROUTE74.toNode = "BubblePath8";
Transform16.children[17] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromField = "fraction_changed";
ROUTE75.fromNode = "BubbleClock";
ROUTE75.toField = "set_fraction";
ROUTE75.toNode = "BubblePath9";
Transform16.children[18] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "fraction_changed";
ROUTE76.fromNode = "BubbleClock";
ROUTE76.toField = "set_fraction";
ROUTE76.toNode = "BubblePath10";
Transform16.children[19] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromField = "value_changed";
ROUTE77.fromNode = "BubblePath1";
ROUTE77.toField = "set_translation";
ROUTE77.toNode = "bubble1";
Transform16.children[20] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromField = "value_changed";
ROUTE78.fromNode = "BubblePath2";
ROUTE78.toField = "set_translation";
ROUTE78.toNode = "bubble2";
Transform16.children[21] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromField = "value_changed";
ROUTE79.fromNode = "BubblePath3";
ROUTE79.toField = "set_translation";
ROUTE79.toNode = "bubble3";
Transform16.children[22] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromField = "value_changed";
ROUTE80.fromNode = "BubblePath4";
ROUTE80.toField = "set_translation";
ROUTE80.toNode = "bubble4";
Transform16.children[23] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromField = "value_changed";
ROUTE81.fromNode = "BubblePath5";
ROUTE81.toField = "set_translation";
ROUTE81.toNode = "bubble5";
Transform16.children[24] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromField = "value_changed";
ROUTE82.fromNode = "BubblePath6";
ROUTE82.toField = "set_translation";
ROUTE82.toNode = "bubble6";
Transform16.children[25] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromField = "value_changed";
ROUTE83.fromNode = "BubblePath7";
ROUTE83.toField = "set_translation";
ROUTE83.toNode = "bubble7";
Transform16.children[26] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromField = "value_changed";
ROUTE84.fromNode = "BubblePath8";
ROUTE84.toField = "set_translation";
ROUTE84.toNode = "bubble8";
Transform16.children[27] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromField = "value_changed";
ROUTE85.fromNode = "BubblePath9";
ROUTE85.toField = "set_translation";
ROUTE85.toNode = "bubble9";
Transform16.children[28] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromField = "value_changed";
ROUTE86.fromNode = "BubblePath10";
ROUTE86.toField = "set_translation";
ROUTE86.toNode = "bubble10";
Transform16.children[29] = ROUTE86;

Group4.children[11] = Transform16;

Transform3.children = new MFNode();

Transform3.children[0] = Group4;

browser.currentScene.children[1] = Transform3;

let Background87 = browser.currentScene.createNode("Background");
Background87.skyColor = new MFColor(new float[0,0,0.6]);
browser.currentScene.children[2] = Background87;

