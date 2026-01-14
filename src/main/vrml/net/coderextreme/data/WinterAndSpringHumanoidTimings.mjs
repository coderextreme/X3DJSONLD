const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "WinterAndSpringHumanoidTimings.x3d");
scene.addMetaData("description", "Example animation timings, manually translated from tool outputs and export.");
scene.addMetaData("reference", "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv");
scene.addMetaData("info", "reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)");
scene.addMetaData("creator", "Katy Schildmeyer");
scene.addMetaData("creator", "Carol McDonald");
scene.addMetaData("translator", "Joe Williams");
scene.addMetaData("translator", "Don Brutzman");
scene.addMetaData("created", "2 July 2023");
scene.addMetaData("translated", "9 July 2023");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:21:02 GMT");
scene.addMetaData("hint", "MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d");
scene.addMetaData("generator", "Cinema 4D https://www.maxon.net/en/cinema-4d");
await browser .loadComponents (scene);
let WorldInfo17 = browser.currentScene.createNode("WorldInfo");
WorldInfo17.title = "WinterAndSpringHumanoidTimings.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.DEF = "EntryView1";
Viewpoint18.description = "Hello characters 1";
Viewpoint18.position = new X3D.SFVec3f([0,2,40]);
browser.currentScene.children[1] = Viewpoint18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.DEF = "EntryView2";
Viewpoint19.description = "Hello characters 2";
Viewpoint19.position = new X3D.SFVec3f([-15,10,30]);
Viewpoint19.orientation = new X3D.SFRotation([0,1,0,-0.643501]);
Viewpoint19.centerOfRotation = new X3D.SFVec3f([0,10,10]);
browser.currentScene.children[2] = Viewpoint19;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "TextRoot";
Transform20.translation = new X3D.SFVec3f([9.8557,0.95,3.5]);
let Shape21 = browser.currentScene.createNode("Shape");
Shape21.DEF = "ModelDescriptionText";
let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new X3D.SFColor([0.960784,0.894118,0]);
material = Material23;

appearance = Appearance22;

let Text24 = browser.currentScene.createNode("Text");
Text24.string = new X3D.MFString([new X3D.SFString("This scene tests"), new X3D.SFString(""), new X3D.SFString("experimental approaches"), new X3D.SFString(""), new X3D.SFString("for human animation")]);
let FontStyle25 = browser.currentScene.createNode("FontStyle");
FontStyle25.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle25.style = "BOLD";
FontStyle25.size = 0.8;
FontStyle25.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle25;

geometry = Text24;

Transform20YYY.child = new X3D.undefined();

Transform20ZZZ.child[0] = Shape21;

browser.currentScene.children[3] = Transform20;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "Root4";
Transform26.translation = new X3D.SFVec3f([11.3657,0.475,3.377131]);
browser.currentScene.children[4] = Transform26;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "Root5";
Transform27.translation = new X3D.SFVec3f([10.55646,0.475,3.391616]);
browser.currentScene.children[5] = Transform27;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.DEF = "Root6";
Transform28.translation = new X3D.SFVec3f([9.167682,0.475,3.332752]);
browser.currentScene.children[6] = Transform28;

let PositionInterpolator29 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator29.DEF = "Gramps_HumanoidRoot_TranslationInterpolator";
PositionInterpolator29.key = new X3D.MFFloat([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator29.keyValue = new X3D.MFVec3f([6.8557,0.95,0.5,6.8557,0.95,0.5,6.8557,0.95,0.5,9.8557,0.95,3.5,9.8557,0.95,3.5,9.8557,0.95,3.5,14.3558,0.95,8,16.8558,0.95,15,21.3557,0.95,24.5,21.3557,0.95,24.5,21.3557,0.95,24.5]);
let MetadataString30 = browser.currentScene.createNode("MetadataString");
MetadataString30.name = "poses";
MetadataString30.value = new X3D.MFString([new X3D.SFString("Gramps_Stand01"), new X3D.SFString("Gramps_Stand01"), new X3D.SFString("Gramps_Walk01"), new X3D.SFString("Gramps_Stand02"), new X3D.SFString("Gramps_Turn01"), new X3D.SFString("Gramps_Walk01"), new X3D.SFString("Gramps_Walk02"), new X3D.SFString("Gramps_Skip01"), new X3D.SFString("Gramps_Stand03"), new X3D.SFString("Gramps_Stand03"), new X3D.SFString("Gramps_Stand03")]);
metadata = MetadataString30;

browser.currentScene.children[7] = PositionInterpolator29;

let PositionInterpolator31 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator31.DEF = "Leif_HumanoidRoot_TranslationInterpolator";
PositionInterpolator31.key = new X3D.MFFloat([0,0.09,0.11,0.223,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator31.keyValue = new X3D.MFVec3f([-7.9962,0.4,3,-7.9962,0.4,3,-7.9962,0.4,3,-7.9962,0.4,3,9.004,0.475,3.4999,11.5048,0.475,3.3699,16.0038,0.475,7.8699,18.5038,0.475,14.8699,23.0038,0.475,24.3699,23.0038,0.475,24.3699,23.0038,0.475,24.3699]);
let MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "poses";
MetadataString32.value = new X3D.MFString([new X3D.SFString("Leif_Stand01"), new X3D.SFString("Leif_Stand01"), new X3D.SFString("Leif_Stand01"), new X3D.SFString("Leif_Run01"), new X3D.SFString("Leif_Turn01"), new X3D.SFString("Leif_Walk01"), new X3D.SFString("Leif_Walk01"), new X3D.SFString("Leif_Skip01"), new X3D.SFString("Leif_Stand01"), new X3D.SFString("Leif_Stand01"), new X3D.SFString("Leif_Stand01")]);
metadata = MetadataString32;

browser.currentScene.children[8] = PositionInterpolator31;

let PositionInterpolator33 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator33.DEF = "Lily_HumanoidRoot_TranslationInterpolator";
PositionInterpolator33.key = new X3D.MFFloat([0,0.09,0.11,0.225,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator33.keyValue = new X3D.MFVec3f([-8.0962,0.4,5.6,-8.0962,0.4,5.6,-8.0962,0.4,5.6,-8.0962,0.4,5.6,8.9038,0.475,4.0999,10.6538,0.475,3.3499,15.1538,0.475,7.8499,17.6538,0.475,14.8499,22.1538,0.475,24.3499,22.1538,0.475,24.3499,22.1538,0.475,24.3499]);
let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "poses";
MetadataString34.value = new X3D.MFString([new X3D.SFString("Lily_Stand01"), new X3D.SFString("Lily_Stand01"), new X3D.SFString("Lily_Stand01"), new X3D.SFString("Leif_Run01"), new X3D.SFString("Lily_Turn01"), new X3D.SFString("Lily_Walk01"), new X3D.SFString("Lily_Walk01"), new X3D.SFString("Lily_Skip01"), new X3D.SFString("Lily_Stand01"), new X3D.SFString("Lily_Stand01"), new X3D.SFString("Lily_Stand01")]);
metadata = MetadataString34;

browser.currentScene.children[9] = PositionInterpolator33;

let PositionInterpolator35 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator35.DEF = "Tufani_HumanoidRoot_TranslationInterpolator";
PositionInterpolator35.key = new X3D.MFFloat([0,0.09,0.11,0.227,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator35.keyValue = new X3D.MFVec3f([-8.0962,0.4,6.4,-8.0962,0.4,6.4,-8.0962,0.4,6.4,-8.0962,0.4,6.4,9.40338,0.475,4.3999,9.1538,0.475,3.2699,13.6538,0.475,7.7699,16.1538,0.475,14.7699,20.6538,0.475,24.2699,20.6538,0.475,24.2699,20.6538,0.475,24.2699]);
let MetadataString36 = browser.currentScene.createNode("MetadataString");
MetadataString36.name = "poses";
MetadataString36.value = new X3D.MFString([new X3D.SFString("Tufani_Stand01"), new X3D.SFString("Tufani_Stand01"), new X3D.SFString("Tufani_Stand01"), new X3D.SFString("Tufani_Run01"), new X3D.SFString("Tufani_Turn01"), new X3D.SFString("Tufani_Walk01"), new X3D.SFString("Tufani_Walk01"), new X3D.SFString("Tufani_Skip01"), new X3D.SFString("Tufani_Stand01"), new X3D.SFString("Tufani_Stand01"), new X3D.SFString("Tufani_Stand01")]);
metadata = MetadataString36;

browser.currentScene.children[10] = PositionInterpolator35;

let Background37 = browser.currentScene.createNode("Background");
Background37.DEF = "Background3Black";
browser.currentScene.children[11] = Background37;

let Background38 = browser.currentScene.createNode("Background");
Background38.DEF = "Background4SkyBlueGreenGrass";
Background38.skyColor = new X3D.MFColor([0,0.71,0.886]);
Background38.groundAngle = new X3D.MFFloat([1.57]);
Background38.groundColor = new X3D.MFColor([0.356863,0.639216,0,0.721569,1,0.501961]);
browser.currentScene.children[12] = Background38;

let Background39 = browser.currentScene.createNode("Background");
Background39.DEF = "Background5LightGrey";
Background39.skyColor = new X3D.MFColor([0.827,0.827,0.827]);
browser.currentScene.children[13] = Background39;

let Background40 = browser.currentScene.createNode("Background");
Background40.DEF = "Background6DarkGrey";
Background40.skyColor = new X3D.MFColor([0.6,0.2,0.2]);
browser.currentScene.children[14] = Background40;

let TimeSensor41 = browser.currentScene.createNode("TimeSensor");
TimeSensor41.DEF = "Clock10Seconds";
TimeSensor41.cycleInterval = 5;
TimeSensor41.loop = True;
browser.currentScene.children[15] = TimeSensor41;

let TimeSensor42 = browser.currentScene.createNode("TimeSensor");
TimeSensor42.DEF = "Clock100Seconds";
TimeSensor42.enabled = False;
TimeSensor42.cycleInterval = 100;
browser.currentScene.children[16] = TimeSensor42;

let BooleanSequencer43 = browser.currentScene.createNode("BooleanSequencer");
BooleanSequencer43.DEF = "Background3Sequencer";
BooleanSequencer43.key = new X3D.MFFloat([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer43.keyValue = new X3D.MFBool([True,True,True,False,False,False,False,False,False,False,False]);
browser.currentScene.children[17] = BooleanSequencer43;

let BooleanSequencer44 = browser.currentScene.createNode("BooleanSequencer");
BooleanSequencer44.DEF = "Background4Sequencer";
BooleanSequencer44.key = new X3D.MFFloat([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer44.keyValue = new X3D.MFBool([False,False,False,True,True,False,False,False,False,False,False]);
browser.currentScene.children[18] = BooleanSequencer44;

let BooleanSequencer45 = browser.currentScene.createNode("BooleanSequencer");
BooleanSequencer45.DEF = "Background5Sequencer";
BooleanSequencer45.key = new X3D.MFFloat([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer45.keyValue = new X3D.MFBool([False,False,False,False,False,True,True,True,False,False,False]);
browser.currentScene.children[19] = BooleanSequencer45;

let BooleanSequencer46 = browser.currentScene.createNode("BooleanSequencer");
BooleanSequencer46.DEF = "Background6Sequencer";
BooleanSequencer46.key = new X3D.MFFloat([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer46.keyValue = new X3D.MFBool([False,False,False,False,False,False,False,False,True,True,True]);
browser.currentScene.children[20] = BooleanSequencer46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "Background3Sequencer";
ROUTE47.fromField = "value_changed";
ROUTE47.toNode = "Background3Black";
ROUTE47.toField = "set_bind";
browser.currentScene.children[21] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "Background4Sequencer";
ROUTE48.fromField = "value_changed";
ROUTE48.toNode = "Background4SkyBlueGreenGrass";
ROUTE48.toField = "set_bind";
browser.currentScene.children[22] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "Background5Sequencer";
ROUTE49.fromField = "value_changed";
ROUTE49.toNode = "Background5LightGrey";
ROUTE49.toField = "set_bind";
browser.currentScene.children[23] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "Background6Sequencer";
ROUTE50.fromField = "value_changed";
ROUTE50.toNode = "Background6DarkGrey";
ROUTE50.toField = "set_bind";
browser.currentScene.children[24] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "Clock10Seconds";
ROUTE51.fromField = "fraction_changed";
ROUTE51.toNode = "Background3Sequencer";
ROUTE51.toField = "set_fraction";
browser.currentScene.children[25] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromNode = "Clock10Seconds";
ROUTE52.fromField = "fraction_changed";
ROUTE52.toNode = "Background4Sequencer";
ROUTE52.toField = "set_fraction";
browser.currentScene.children[26] = ROUTE52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromNode = "Clock10Seconds";
ROUTE53.fromField = "fraction_changed";
ROUTE53.toNode = "Background5Sequencer";
ROUTE53.toField = "set_fraction";
browser.currentScene.children[27] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "Clock10Seconds";
ROUTE54.fromField = "fraction_changed";
ROUTE54.toNode = "Background6Sequencer";
ROUTE54.toField = "set_fraction";
browser.currentScene.children[28] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "Clock100Seconds";
ROUTE55.fromField = "fraction_changed";
ROUTE55.toNode = "Background3Sequencer";
ROUTE55.toField = "set_fraction";
browser.currentScene.children[29] = ROUTE55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "Clock100Seconds";
ROUTE56.fromField = "fraction_changed";
ROUTE56.toNode = "Background4Sequencer";
ROUTE56.toField = "set_fraction";
browser.currentScene.children[30] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "Clock100Seconds";
ROUTE57.fromField = "fraction_changed";
ROUTE57.toNode = "Background5Sequencer";
ROUTE57.toField = "set_fraction";
browser.currentScene.children[31] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "Clock100Seconds";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "Background6Sequencer";
ROUTE58.toField = "set_fraction";
browser.currentScene.children[32] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "Clock10Seconds";
ROUTE59.fromField = "fraction_changed";
ROUTE59.toNode = "Gramps_HumanoidRoot_TranslationInterpolator";
ROUTE59.toField = "set_fraction";
browser.currentScene.children[33] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "Clock10Seconds";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "Leif_HumanoidRoot_TranslationInterpolator";
ROUTE60.toField = "set_fraction";
browser.currentScene.children[34] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Clock10Seconds";
ROUTE61.fromField = "fraction_changed";
ROUTE61.toNode = "Lily_HumanoidRoot_TranslationInterpolator";
ROUTE61.toField = "set_fraction";
browser.currentScene.children[35] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Clock10Seconds";
ROUTE62.fromField = "fraction_changed";
ROUTE62.toNode = "Tufani_HumanoidRoot_TranslationInterpolator";
ROUTE62.toField = "set_fraction";
browser.currentScene.children[36] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Clock100Seconds";
ROUTE63.fromField = "fraction_changed";
ROUTE63.toNode = "Gramps_HumanoidRoot_TranslationInterpolator";
ROUTE63.toField = "set_fraction";
browser.currentScene.children[37] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Clock100Seconds";
ROUTE64.fromField = "fraction_changed";
ROUTE64.toNode = "Leif_HumanoidRoot_TranslationInterpolator";
ROUTE64.toField = "set_fraction";
browser.currentScene.children[38] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Clock100Seconds";
ROUTE65.fromField = "fraction_changed";
ROUTE65.toNode = "Lily_HumanoidRoot_TranslationInterpolator";
ROUTE65.toField = "set_fraction";
browser.currentScene.children[39] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "Clock100Seconds";
ROUTE66.fromField = "fraction_changed";
ROUTE66.toNode = "Tufani_HumanoidRoot_TranslationInterpolator";
ROUTE66.toField = "set_fraction";
browser.currentScene.children[40] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "Gramps_HumanoidRoot_TranslationInterpolator";
ROUTE67.fromField = "value_changed";
ROUTE67.toNode = "TextRoot";
ROUTE67.toField = "set_translation";
browser.currentScene.children[41] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "Leif_HumanoidRoot_TranslationInterpolator";
ROUTE68.fromField = "value_changed";
ROUTE68.toNode = "Root4";
ROUTE68.toField = "set_translation";
browser.currentScene.children[42] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "Lily_HumanoidRoot_TranslationInterpolator";
ROUTE69.fromField = "value_changed";
ROUTE69.toNode = "Root5";
ROUTE69.toField = "set_translation";
browser.currentScene.children[43] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "Tufani_HumanoidRoot_TranslationInterpolator";
ROUTE70.fromField = "value_changed";
ROUTE70.toNode = "Root6";
ROUTE70.toField = "set_translation";
browser.currentScene.children[44] = ROUTE70;

}
main ();
