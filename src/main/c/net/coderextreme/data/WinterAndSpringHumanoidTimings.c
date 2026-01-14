#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "WinterAndSpringHumanoidTimings.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Example animation timings, manually translated from tool outputs and export.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "reference";
meta4.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "info";
meta5.content = "reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Katy Schildmeyer";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "Carol McDonald";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "translator";
meta8.content = "Joe Williams";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "translator";
meta9.content = "Don Brutzman";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "created";
meta10.content = "2 July 2023";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "translated";
meta11.content = "9 July 2023";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "modified";
meta12.content = "Mon, 15 Sep 2025 05:21:02 GMT";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "hint";
meta13.content = "MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous.";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "Cinema 4D https://www.maxon.net/en/cinema-4d";
head1.meta[13] = meta15;

head = head1;

WorldInfo WorldInfo17 = createNode("WorldInfo");
WorldInfo17.title = "WinterAndSpringHumanoidTimings.x3d";
children = new MFNode();

children[0] = WorldInfo17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.DEF = "EntryView1";
Viewpoint18.description = "Hello characters 1";
Viewpoint18.position = new SFVec3f(new float[0,2,40]);
children[1] = Viewpoint18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.DEF = "EntryView2";
Viewpoint19.description = "Hello characters 2";
Viewpoint19.position = new SFVec3f(new float[-15,10,30]);
Viewpoint19.orientation = new SFRotation(new float[0,1,0,-0.643501]);
Viewpoint19.centerOfRotation = new SFVec3f(new float[0,10,10]);
children[2] = Viewpoint19;

Transform Transform20 = createNode("Transform");
Transform20.DEF = "TextRoot";
Transform20.translation = new SFVec3f(new float[9.8557,0.95,3.5]);
Shape Shape21 = createNode("Shape");
Shape21.DEF = "ModelDescriptionText";
Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.960784,0.894118,0]);
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

Text Text24 = createNode("Text");
Text24.string = new MFString(new java.lang.String["This scene tests","","experimental approaches","","for human animation"]);
FontStyle FontStyle25 = createNode("FontStyle");
FontStyle25.family = new MFString(new java.lang.String["SANS"]);
FontStyle25.style = "BOLD";
FontStyle25.size = 0.8;
FontStyle25.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text24.fontStyle = FontStyle25;

Shape21.geometry = Text24;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

children[3] = Transform20;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "Root4";
Transform26.translation = new SFVec3f(new float[11.3657,0.475,3.377131]);
children[4] = Transform26;

Transform Transform27 = createNode("Transform");
Transform27.DEF = "Root5";
Transform27.translation = new SFVec3f(new float[10.55646,0.475,3.391616]);
children[5] = Transform27;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "Root6";
Transform28.translation = new SFVec3f(new float[9.167682,0.475,3.332752]);
children[6] = Transform28;

PositionInterpolator PositionInterpolator29 = createNode("PositionInterpolator");
PositionInterpolator29.DEF = "Gramps_HumanoidRoot_TranslationInterpolator";
PositionInterpolator29.key = new MFFloat(new float[0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator29.keyValue = new MFVec3f(new float[6.8557,0.95,0.5,6.8557,0.95,0.5,6.8557,0.95,0.5,9.8557,0.95,3.5,9.8557,0.95,3.5,9.8557,0.95,3.5,14.3558,0.95,8,16.8558,0.95,15,21.3557,0.95,24.5,21.3557,0.95,24.5,21.3557,0.95,24.5]);
MetadataString MetadataString30 = createNode("MetadataString");
MetadataString30.name = "poses";
MetadataString30.value = new MFString(new java.lang.String["Gramps_Stand01","Gramps_Stand01","Gramps_Walk01","Gramps_Stand02","Gramps_Turn01","Gramps_Walk01","Gramps_Walk02","Gramps_Skip01","Gramps_Stand03","Gramps_Stand03","Gramps_Stand03"]);
PositionInterpolator29.metadata = MetadataString30;

children[7] = PositionInterpolator29;

PositionInterpolator PositionInterpolator31 = createNode("PositionInterpolator");
PositionInterpolator31.DEF = "Leif_HumanoidRoot_TranslationInterpolator";
PositionInterpolator31.key = new MFFloat(new float[0,0.09,0.11,0.223,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator31.keyValue = new MFVec3f(new float[-7.9962,0.4,3,-7.9962,0.4,3,-7.9962,0.4,3,-7.9962,0.4,3,9.004,0.475,3.4999,11.5048,0.475,3.3699,16.0038,0.475,7.8699,18.5038,0.475,14.8699,23.0038,0.475,24.3699,23.0038,0.475,24.3699,23.0038,0.475,24.3699]);
MetadataString MetadataString32 = createNode("MetadataString");
MetadataString32.name = "poses";
MetadataString32.value = new MFString(new java.lang.String["Leif_Stand01","Leif_Stand01","Leif_Stand01","Leif_Run01","Leif_Turn01","Leif_Walk01","Leif_Walk01","Leif_Skip01","Leif_Stand01","Leif_Stand01","Leif_Stand01"]);
PositionInterpolator31.metadata = MetadataString32;

children[8] = PositionInterpolator31;

PositionInterpolator PositionInterpolator33 = createNode("PositionInterpolator");
PositionInterpolator33.DEF = "Lily_HumanoidRoot_TranslationInterpolator";
PositionInterpolator33.key = new MFFloat(new float[0,0.09,0.11,0.225,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator33.keyValue = new MFVec3f(new float[-8.0962,0.4,5.6,-8.0962,0.4,5.6,-8.0962,0.4,5.6,-8.0962,0.4,5.6,8.9038,0.475,4.0999,10.6538,0.475,3.3499,15.1538,0.475,7.8499,17.6538,0.475,14.8499,22.1538,0.475,24.3499,22.1538,0.475,24.3499,22.1538,0.475,24.3499]);
MetadataString MetadataString34 = createNode("MetadataString");
MetadataString34.name = "poses";
MetadataString34.value = new MFString(new java.lang.String["Lily_Stand01","Lily_Stand01","Lily_Stand01","Leif_Run01","Lily_Turn01","Lily_Walk01","Lily_Walk01","Lily_Skip01","Lily_Stand01","Lily_Stand01","Lily_Stand01"]);
PositionInterpolator33.metadata = MetadataString34;

children[9] = PositionInterpolator33;

PositionInterpolator PositionInterpolator35 = createNode("PositionInterpolator");
PositionInterpolator35.DEF = "Tufani_HumanoidRoot_TranslationInterpolator";
PositionInterpolator35.key = new MFFloat(new float[0,0.09,0.11,0.227,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator35.keyValue = new MFVec3f(new float[-8.0962,0.4,6.4,-8.0962,0.4,6.4,-8.0962,0.4,6.4,-8.0962,0.4,6.4,9.40338,0.475,4.3999,9.1538,0.475,3.2699,13.6538,0.475,7.7699,16.1538,0.475,14.7699,20.6538,0.475,24.2699,20.6538,0.475,24.2699,20.6538,0.475,24.2699]);
MetadataString MetadataString36 = createNode("MetadataString");
MetadataString36.name = "poses";
MetadataString36.value = new MFString(new java.lang.String["Tufani_Stand01","Tufani_Stand01","Tufani_Stand01","Tufani_Run01","Tufani_Turn01","Tufani_Walk01","Tufani_Walk01","Tufani_Skip01","Tufani_Stand01","Tufani_Stand01","Tufani_Stand01"]);
PositionInterpolator35.metadata = MetadataString36;

children[10] = PositionInterpolator35;

Background Background37 = createNode("Background");
Background37.DEF = "Background3Black";
children[11] = Background37;

Background Background38 = createNode("Background");
Background38.DEF = "Background4SkyBlueGreenGrass";
Background38.skyColor = new MFColor(new float[0,0.71,0.886]);
Background38.groundAngle = new MFFloat(new float[1.57]);
Background38.groundColor = new MFColor(new float[0.356863,0.639216,0,0.721569,1,0.501961]);
children[12] = Background38;

Background Background39 = createNode("Background");
Background39.DEF = "Background5LightGrey";
Background39.skyColor = new MFColor(new float[0.827,0.827,0.827]);
children[13] = Background39;

Background Background40 = createNode("Background");
Background40.DEF = "Background6DarkGrey";
Background40.skyColor = new MFColor(new float[0.6,0.2,0.2]);
children[14] = Background40;

TimeSensor TimeSensor41 = createNode("TimeSensor");
TimeSensor41.DEF = "Clock10Seconds";
TimeSensor41.cycleInterval = 5;
TimeSensor41.loop = True;
children[15] = TimeSensor41;

TimeSensor TimeSensor42 = createNode("TimeSensor");
TimeSensor42.DEF = "Clock100Seconds";
TimeSensor42.enabled = False;
TimeSensor42.cycleInterval = 100;
children[16] = TimeSensor42;

BooleanSequencer BooleanSequencer43 = createNode("BooleanSequencer");
BooleanSequencer43.DEF = "Background3Sequencer";
BooleanSequencer43.key = new MFFloat(new float[0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer43.keyValue = new MFBool(new boolean[True,True,True,False,False,False,False,False,False,False,False]);
children[17] = BooleanSequencer43;

BooleanSequencer BooleanSequencer44 = createNode("BooleanSequencer");
BooleanSequencer44.DEF = "Background4Sequencer";
BooleanSequencer44.key = new MFFloat(new float[0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer44.keyValue = new MFBool(new boolean[False,False,False,True,True,False,False,False,False,False,False]);
children[18] = BooleanSequencer44;

BooleanSequencer BooleanSequencer45 = createNode("BooleanSequencer");
BooleanSequencer45.DEF = "Background5Sequencer";
BooleanSequencer45.key = new MFFloat(new float[0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer45.keyValue = new MFBool(new boolean[False,False,False,False,False,True,True,True,False,False,False]);
children[19] = BooleanSequencer45;

BooleanSequencer BooleanSequencer46 = createNode("BooleanSequencer");
BooleanSequencer46.DEF = "Background6Sequencer";
BooleanSequencer46.key = new MFFloat(new float[0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer46.keyValue = new MFBool(new boolean[False,False,False,False,False,False,False,False,True,True,True]);
children[20] = BooleanSequencer46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "Background3Sequencer";
ROUTE47.fromField = "value_changed";
ROUTE47.toNode = "Background3Black";
ROUTE47.toField = "set_bind";
children[21] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "Background4Sequencer";
ROUTE48.fromField = "value_changed";
ROUTE48.toNode = "Background4SkyBlueGreenGrass";
ROUTE48.toField = "set_bind";
children[22] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "Background5Sequencer";
ROUTE49.fromField = "value_changed";
ROUTE49.toNode = "Background5LightGrey";
ROUTE49.toField = "set_bind";
children[23] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "Background6Sequencer";
ROUTE50.fromField = "value_changed";
ROUTE50.toNode = "Background6DarkGrey";
ROUTE50.toField = "set_bind";
children[24] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "Clock10Seconds";
ROUTE51.fromField = "fraction_changed";
ROUTE51.toNode = "Background3Sequencer";
ROUTE51.toField = "set_fraction";
children[25] = ROUTE51;

ROUTE ROUTE52 = createNode("ROUTE");
ROUTE52.fromNode = "Clock10Seconds";
ROUTE52.fromField = "fraction_changed";
ROUTE52.toNode = "Background4Sequencer";
ROUTE52.toField = "set_fraction";
children[26] = ROUTE52;

ROUTE ROUTE53 = createNode("ROUTE");
ROUTE53.fromNode = "Clock10Seconds";
ROUTE53.fromField = "fraction_changed";
ROUTE53.toNode = "Background5Sequencer";
ROUTE53.toField = "set_fraction";
children[27] = ROUTE53;

ROUTE ROUTE54 = createNode("ROUTE");
ROUTE54.fromNode = "Clock10Seconds";
ROUTE54.fromField = "fraction_changed";
ROUTE54.toNode = "Background6Sequencer";
ROUTE54.toField = "set_fraction";
children[28] = ROUTE54;

ROUTE ROUTE55 = createNode("ROUTE");
ROUTE55.fromNode = "Clock100Seconds";
ROUTE55.fromField = "fraction_changed";
ROUTE55.toNode = "Background3Sequencer";
ROUTE55.toField = "set_fraction";
children[29] = ROUTE55;

ROUTE ROUTE56 = createNode("ROUTE");
ROUTE56.fromNode = "Clock100Seconds";
ROUTE56.fromField = "fraction_changed";
ROUTE56.toNode = "Background4Sequencer";
ROUTE56.toField = "set_fraction";
children[30] = ROUTE56;

ROUTE ROUTE57 = createNode("ROUTE");
ROUTE57.fromNode = "Clock100Seconds";
ROUTE57.fromField = "fraction_changed";
ROUTE57.toNode = "Background5Sequencer";
ROUTE57.toField = "set_fraction";
children[31] = ROUTE57;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromNode = "Clock100Seconds";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "Background6Sequencer";
ROUTE58.toField = "set_fraction";
children[32] = ROUTE58;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromNode = "Clock10Seconds";
ROUTE59.fromField = "fraction_changed";
ROUTE59.toNode = "Gramps_HumanoidRoot_TranslationInterpolator";
ROUTE59.toField = "set_fraction";
children[33] = ROUTE59;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromNode = "Clock10Seconds";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "Leif_HumanoidRoot_TranslationInterpolator";
ROUTE60.toField = "set_fraction";
children[34] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "Clock10Seconds";
ROUTE61.fromField = "fraction_changed";
ROUTE61.toNode = "Lily_HumanoidRoot_TranslationInterpolator";
ROUTE61.toField = "set_fraction";
children[35] = ROUTE61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromNode = "Clock10Seconds";
ROUTE62.fromField = "fraction_changed";
ROUTE62.toNode = "Tufani_HumanoidRoot_TranslationInterpolator";
ROUTE62.toField = "set_fraction";
children[36] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "Clock100Seconds";
ROUTE63.fromField = "fraction_changed";
ROUTE63.toNode = "Gramps_HumanoidRoot_TranslationInterpolator";
ROUTE63.toField = "set_fraction";
children[37] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "Clock100Seconds";
ROUTE64.fromField = "fraction_changed";
ROUTE64.toNode = "Leif_HumanoidRoot_TranslationInterpolator";
ROUTE64.toField = "set_fraction";
children[38] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "Clock100Seconds";
ROUTE65.fromField = "fraction_changed";
ROUTE65.toNode = "Lily_HumanoidRoot_TranslationInterpolator";
ROUTE65.toField = "set_fraction";
children[39] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "Clock100Seconds";
ROUTE66.fromField = "fraction_changed";
ROUTE66.toNode = "Tufani_HumanoidRoot_TranslationInterpolator";
ROUTE66.toField = "set_fraction";
children[40] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "Gramps_HumanoidRoot_TranslationInterpolator";
ROUTE67.fromField = "value_changed";
ROUTE67.toNode = "TextRoot";
ROUTE67.toField = "set_translation";
children[41] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "Leif_HumanoidRoot_TranslationInterpolator";
ROUTE68.fromField = "value_changed";
ROUTE68.toNode = "Root4";
ROUTE68.toField = "set_translation";
children[42] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "Lily_HumanoidRoot_TranslationInterpolator";
ROUTE69.fromField = "value_changed";
ROUTE69.toNode = "Root5";
ROUTE69.toField = "set_translation";
children[43] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "Tufani_HumanoidRoot_TranslationInterpolator";
ROUTE70.fromField = "value_changed";
ROUTE70.toNode = "Root6";
ROUTE70.toField = "set_translation";
children[44] = ROUTE70;

}
