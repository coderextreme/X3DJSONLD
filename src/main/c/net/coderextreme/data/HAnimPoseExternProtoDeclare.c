#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HAnimPoseExternProtoDeclare.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "1 November 2025";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "14 December 2025";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Don Brutzman";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "Joe Williams";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "contributor";
meta8.content = "Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "specificationSection";
meta9.content = "HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "specificationUrl";
meta10.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "specificationSection";
meta11.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "specificationUrl";
meta12.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "specificationSection";
meta13.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "specificationUrl";
meta14.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "generator";
meta16.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "generator";
meta17.content = "Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "identifier";
meta18.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "license";
meta19.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[17] = meta19;

head = head1;

WorldInfo WorldInfo21 = createNode("WorldInfo");
WorldInfo21.DEF = "ModelInfo";
WorldInfo21.info = new MFString(new java.lang.String["Design to illustrate a potential HAnimPose node"]);
WorldInfo21.title = "HAnimPoseExternProtoDeclare";
children = new MFNode();

children[0] = WorldInfo21;

Background Background22 = createNode("Background");
Background22.skyColor = new MFColor(new float[0.6,0.6,0.8]);
children[1] = Background22;

NavigationInfo NavigationInfo23 = createNode("NavigationInfo");
children[2] = NavigationInfo23;

ExternProtoDeclare ExternProtoDeclare24 = createNode("ExternProtoDeclare");
ExternProtoDeclare24.name = "HAnimPose";
ExternProtoDeclare24.appinfo = "Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.";
ExternProtoDeclare24.url = new MFString(new java.lang.String["Filename.x3d#HAnimPose","https://some.address.org/Filename.x3d#HAnimPose"]);
field field25 = createNode("field");
field25.name = "parentHAnimHumanoid";
field25.accessType = "inputOutput";
field25.appinfo = "HAnimHumanoid for this Pose to act upon";
field25.type = "SFNode";
ExternProtoDeclare24.field = new MFNode();

ExternProtoDeclare24.field[0] = field25;

field field26 = createNode("field");
field26.name = "name";
field26.accessType = "inputOutput";
field26.appinfo = "name of this pose";
field26.type = "SFString";
ExternProtoDeclare24.field[1] = field26;

field field27 = createNode("field");
field27.name = "children";
field27.accessType = "inputOutput";
field27.appinfo = "joint values to apply to HAnimHumanoid";
field27.type = "MFNode";
//initializating Joint nodes (if any) go here
ExternProtoDeclare24.field[2] = field27;

field field28 = createNode("field");
field28.name = "description";
field28.accessType = "inputOutput";
field28.appinfo = "explanation of purpose";
field28.type = "SFString";
ExternProtoDeclare24.field[3] = field28;

field field29 = createNode("field");
field29.name = "enabled";
field29.accessType = "inputOutput";
field29.appinfo = "default value true";
field29.type = "SFBool";
ExternProtoDeclare24.field[4] = field29;

field field30 = createNode("field");
field30.name = "loa";
field30.accessType = "initializeOnly";
field30.appinfo = "default is no loa";
field30.type = "SFInt32";
ExternProtoDeclare24.field[5] = field30;

field field31 = createNode("field");
field31.name = "transitionDuration";
field31.accessType = "inputOutput";
field31.appinfo = "how many seconds to achieve the pose";
field31.type = "SFTime";
ExternProtoDeclare24.field[6] = field31;

field field32 = createNode("field");
field32.name = "metadata";
field32.accessType = "inputOutput";
field32.appinfo = "single Metadata* node";
field32.type = "SFNode";
ExternProtoDeclare24.field[7] = field32;

field field33 = createNode("field");
field33.name = "isActive";
field33.accessType = "outputOnly";
field33.appinfo = "event indicating when pose transition is active";
field33.type = "SFBool";
ExternProtoDeclare24.field[8] = field33;

field field34 = createNode("field");
field34.name = "commencePose";
field34.accessType = "inputOnly";
field34.appinfo = "this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1";
field34.type = "SFBool";
ExternProtoDeclare24.field[9] = field34;

field field35 = createNode("field");
field35.name = "resetAllJoints";
field35.accessType = "inputOnly";
field35.appinfo = "reset the skeleton to I pose with all joints zeroed";
field35.type = "SFBool";
ExternProtoDeclare24.field[10] = field35;

field field36 = createNode("field");
field36.name = "set_fraction";
field36.accessType = "inputOnly";
field36.appinfo = "allows transition to proceed incrementally from fraction [0..10";
field36.type = "SFFloat";
ExternProtoDeclare24.field[11] = field36;

field field37 = createNode("field");
field37.name = "set_startTime";
field37.accessType = "inputOnly";
field37.appinfo = "starts the animation clock";
field37.type = "SFTime";
ExternProtoDeclare24.field[12] = field37;

field field38 = createNode("field");
field38.name = "isLoaded";
field38.accessType = "inputOnly";
field38.appinfo = "possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE";
field38.type = "SFBool";
ExternProtoDeclare24.field[13] = field38;

field field39 = createNode("field");
field39.name = "traceEnabled";
field39.accessType = "inputOutput";
field39.appinfo = "debug trace to Browser output console this is a local prototype field";
field39.type = "SFBool";
ExternProtoDeclare24.field[14] = field39;

children[3] = ExternProtoDeclare24;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.description = "HAnimPoseExternProtoDeclare description";
Viewpoint40.position = new SFVec3f(new float[0,1,4]);
children[4] = Viewpoint40;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "DisplayHeader1";
Transform41.translation = new SFVec3f(new float[0,1.5,0]);
Anchor Anchor42 = createNode("Anchor");
Anchor42.description = "go to HAnimPoseExternProtoDeclareIndex page";
Anchor42.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor42.url = new MFString(new java.lang.String["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html"]);
Shape Shape43 = createNode("Shape");
Text Text44 = createNode("Text");
Text44.string = new MFString(new java.lang.String["Utility scene","HAnimPoseExternProtoDeclare.x3d"]);
FontStyle FontStyle45 = createNode("FontStyle");
FontStyle45.DEF = "HeaderFont";
FontStyle45.family = new MFString(new java.lang.String["SANS"]);
FontStyle45.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle45.size = 0.15;
FontStyle45.style = "BOLD";
Text44.fontStyle = FontStyle45;

Shape43.geometry = Text44;

Appearance Appearance46 = createNode("Appearance");
Appearance46.DEF = "PoseTextAppearance";
Material Material47 = createNode("Material");
Material47.diffuseColor = new SFColor(new float[0.1,0.3,0.5]);
Appearance46.material = Material47;

Shape43.appearance = Appearance46;

Anchor42.children = new MFNode();

Anchor42.children[0] = Shape43;

Shape Shape48 = createNode("Shape");
Box Box49 = createNode("Box");
Box49.size = new SFVec3f(new float[3.5,0.5,0.001]);
Shape48.geometry = Box49;

Appearance Appearance50 = createNode("Appearance");
Appearance50.DEF = "TransparentAppearance";
Material Material51 = createNode("Material");
Material51.transparency = 1;
Appearance50.material = Material51;

Shape48.appearance = Appearance50;

Anchor42.children[1] = Shape48;

Transform41.children = new MFNode();

Transform41.children[0] = Anchor42;

children[5] = Transform41;

Transform Transform52 = createNode("Transform");
Transform52.DEF = "DisplayHeader2";
Transform52.translation = new SFVec3f(new float[0,0.5,0]);
Anchor Anchor53 = createNode("Anchor");
Anchor53.description = "go to HAnimPosePrototypeIndex page";
Anchor53.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor53.url = new MFString(new java.lang.String["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html"]);
Shape Shape54 = createNode("Shape");
Text Text55 = createNode("Text");
Text55.string = new MFString(new java.lang.String["This model supports","HAnimPosePrototype.x3d"]);
FontStyle FontStyle56 = createNode("FontStyle");
FontStyle56.USE = "HeaderFont";
Text55.fontStyle = FontStyle56;

Shape54.geometry = Text55;

Appearance Appearance57 = createNode("Appearance");
Appearance57.USE = "PoseTextAppearance";
Shape54.appearance = Appearance57;

Anchor53.children = new MFNode();

Anchor53.children[0] = Shape54;

Transform52.children = new MFNode();

Transform52.children[0] = Anchor53;

Shape Shape58 = createNode("Shape");
Box Box59 = createNode("Box");
Box59.size = new SFVec3f(new float[2.6,0.5,0.001]);
Shape58.geometry = Box59;

Appearance Appearance60 = createNode("Appearance");
Appearance60.USE = "TransparentAppearance";
Shape58.appearance = Appearance60;

Transform52.child[1] = Shape58;

children[6] = Transform52;

}
