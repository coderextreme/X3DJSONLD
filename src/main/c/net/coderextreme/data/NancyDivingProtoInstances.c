#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "NancyDivingProtoInstances.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Nancy having fun scuba diving - developmental model using ProtoInstance instead of HAnim native tags, do not use this pattern.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "warning";
meta4.content = "This is a developmental example, use HAnim native tags as shown in other examples instead of the prototypes and ProtoInstances shown here.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Etsuko Lippi";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translators";
meta6.content = "Tom Miller and Don Brutzman, NPS";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "created";
meta7.content = "19 November 2001";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "4 July 2020";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "TODO";
meta9.content = "left arm motion still has a problem";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "creator";
meta10.content = "Cindy Ballreich cindy@ballreich.net 3Name3D";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "rights";
meta11.content = "1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDivingProtoInstances.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "license";
meta14.content = "../license.html";
head1.meta[12] = meta14;

head = head1;

ExternProtoDeclare ExternProtoDeclare16 = createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "Joint";
ExternProtoDeclare16.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ExternProtoDeclare16.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html";
ExternProtoDeclare16.url = new MFString(new java.lang.String["NancyPrototypes.x3d#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Joint","NancyPrototypes.wrl#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Joint"]);
field field17 = createNode("field");
field17.name = "center";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
ExternProtoDeclare16.field = new MFNode();

ExternProtoDeclare16.field[0] = field17;

field field18 = createNode("field");
field18.name = "children";
field18.accessType = "inputOutput";
field18.type = "MFNode";
ExternProtoDeclare16.field[1] = field18;

field field19 = createNode("field");
field19.name = "llimit";
field19.accessType = "inputOutput";
field19.type = "MFFloat";
ExternProtoDeclare16.field[2] = field19;

field field20 = createNode("field");
field20.name = "limitOrientation";
field20.accessType = "inputOutput";
field20.type = "SFRotation";
ExternProtoDeclare16.field[3] = field20;

field field21 = createNode("field");
field21.name = "name";
field21.accessType = "inputOutput";
field21.type = "SFString";
ExternProtoDeclare16.field[4] = field21;

field field22 = createNode("field");
field22.name = "rotation";
field22.accessType = "inputOutput";
field22.type = "SFRotation";
ExternProtoDeclare16.field[5] = field22;

field field23 = createNode("field");
field23.name = "scale";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
ExternProtoDeclare16.field[6] = field23;

field field24 = createNode("field");
field24.name = "scaleOrientation";
field24.accessType = "inputOutput";
field24.type = "SFRotation";
ExternProtoDeclare16.field[7] = field24;

field field25 = createNode("field");
field25.name = "stiffness";
field25.accessType = "inputOutput";
field25.type = "MFFloat";
ExternProtoDeclare16.field[8] = field25;

field field26 = createNode("field");
field26.name = "translation";
field26.accessType = "inputOutput";
field26.type = "SFVec3f";
ExternProtoDeclare16.field[9] = field26;

field field27 = createNode("field");
field27.name = "ulimit";
field27.accessType = "inputOutput";
field27.type = "MFFloat";
ExternProtoDeclare16.field[10] = field27;

field field28 = createNode("field");
field28.name = "removeChildren";
field28.accessType = "inputOnly";
field28.type = "MFNode";
ExternProtoDeclare16.field[11] = field28;

field field29 = createNode("field");
field29.name = "bboxSize";
field29.accessType = "initializeOnly";
field29.type = "SFVec3f";
ExternProtoDeclare16.field[12] = field29;

field field30 = createNode("field");
field30.name = "skinCoordIndex";
field30.accessType = "inputOutput";
field30.type = "MFInt32";
ExternProtoDeclare16.field[13] = field30;

field field31 = createNode("field");
field31.name = "bboxCenter";
field31.accessType = "initializeOnly";
field31.type = "SFVec3f";
ExternProtoDeclare16.field[14] = field31;

field field32 = createNode("field");
field32.name = "skinCoordWeight";
field32.accessType = "inputOutput";
field32.type = "MFFloat";
ExternProtoDeclare16.field[15] = field32;

field field33 = createNode("field");
field33.name = "addChildren";
field33.accessType = "inputOnly";
field33.type = "MFNode";
ExternProtoDeclare16.field[16] = field33;

children = new MFNode();

children[0] = ExternProtoDeclare16;

ExternProtoDeclare ExternProtoDeclare34 = createNode("ExternProtoDeclare");
ExternProtoDeclare34.name = "Segment";
ExternProtoDeclare34.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.";
ExternProtoDeclare34.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html";
ExternProtoDeclare34.url = new MFString(new java.lang.String["NancyPrototypes.x3d#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Segment","NancyPrototypes.wrl#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Segment"]);
field field35 = createNode("field");
field35.name = "bboxCenter";
field35.accessType = "initializeOnly";
field35.type = "SFVec3f";
ExternProtoDeclare34.field = new MFNode();

ExternProtoDeclare34.field[0] = field35;

field field36 = createNode("field");
field36.name = "bboxSize";
field36.accessType = "initializeOnly";
field36.type = "SFVec3f";
ExternProtoDeclare34.field[1] = field36;

field field37 = createNode("field");
field37.name = "centerOfMass";
field37.accessType = "inputOutput";
field37.type = "SFVec3f";
ExternProtoDeclare34.field[2] = field37;

field field38 = createNode("field");
field38.name = "children";
field38.accessType = "inputOutput";
field38.type = "MFNode";
ExternProtoDeclare34.field[3] = field38;

field field39 = createNode("field");
field39.name = "coord";
field39.accessType = "inputOutput";
field39.appinfo = "contains Coordinate nodes";
field39.type = "SFNode";
ExternProtoDeclare34.field[4] = field39;

field field40 = createNode("field");
field40.name = "displacers";
field40.accessType = "inputOutput";
field40.appinfo = "contains Displacer nodes";
field40.type = "MFNode";
ExternProtoDeclare34.field[5] = field40;

field field41 = createNode("field");
field41.name = "mass";
field41.accessType = "inputOutput";
field41.type = "SFFloat";
ExternProtoDeclare34.field[6] = field41;

field field42 = createNode("field");
field42.name = "momentsOfInertia";
field42.accessType = "inputOutput";
field42.type = "MFFloat";
ExternProtoDeclare34.field[7] = field42;

field field43 = createNode("field");
field43.name = "name";
field43.accessType = "inputOutput";
field43.type = "SFString";
ExternProtoDeclare34.field[8] = field43;

field field44 = createNode("field");
field44.name = "addChildren";
field44.accessType = "inputOnly";
field44.type = "MFNode";
ExternProtoDeclare34.field[9] = field44;

field field45 = createNode("field");
field45.name = "removeChildren";
field45.accessType = "inputOnly";
field45.type = "MFNode";
ExternProtoDeclare34.field[10] = field45;

children[1] = ExternProtoDeclare34;

ExternProtoDeclare ExternProtoDeclare46 = createNode("ExternProtoDeclare");
ExternProtoDeclare46.name = "Humanoid";
ExternProtoDeclare46.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ExternProtoDeclare46.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
ExternProtoDeclare46.url = new MFString(new java.lang.String["NancyPrototypes.x3d#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Humanoid","NancyPrototypes.wrl#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Humanoid"]);
field field47 = createNode("field");
field47.name = "bboxCenter";
field47.accessType = "initializeOnly";
field47.type = "SFVec3f";
ExternProtoDeclare46.field = new MFNode();

ExternProtoDeclare46.field[0] = field47;

field field48 = createNode("field");
field48.name = "bboxSize";
field48.accessType = "initializeOnly";
field48.type = "SFVec3f";
ExternProtoDeclare46.field[1] = field48;

field field49 = createNode("field");
field49.name = "center";
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
ExternProtoDeclare46.field[2] = field49;

field field50 = createNode("field");
field50.name = "humanoidBody";
field50.accessType = "inputOutput";
field50.appinfo = "HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton";
field50.documentation = "http://HAnim.org/Specifications/HAnim1.1/#humanoid";
field50.type = "MFNode";
ExternProtoDeclare46.field[3] = field50;

field field51 = createNode("field");
field51.name = "info";
field51.accessType = "inputOutput";
field51.type = "MFString";
ExternProtoDeclare46.field[4] = field51;

field field52 = createNode("field");
field52.name = "joints";
field52.accessType = "inputOutput";
field52.appinfo = "Container field for Joint nodes";
field52.type = "MFNode";
ExternProtoDeclare46.field[5] = field52;

field field53 = createNode("field");
field53.name = "name";
field53.accessType = "inputOutput";
field53.type = "SFString";
ExternProtoDeclare46.field[6] = field53;

field field54 = createNode("field");
field54.name = "rotation";
field54.accessType = "inputOutput";
field54.type = "SFRotation";
ExternProtoDeclare46.field[7] = field54;

field field55 = createNode("field");
field55.name = "scale";
field55.accessType = "inputOutput";
field55.type = "SFVec3f";
ExternProtoDeclare46.field[8] = field55;

field field56 = createNode("field");
field56.name = "scaleOrientation";
field56.accessType = "inputOutput";
field56.type = "SFRotation";
ExternProtoDeclare46.field[9] = field56;

field field57 = createNode("field");
field57.name = "segments";
field57.accessType = "inputOutput";
field57.appinfo = "Container field for Segment nodes";
field57.type = "MFNode";
ExternProtoDeclare46.field[10] = field57;

field field58 = createNode("field");
field58.name = "sites";
field58.accessType = "inputOutput";
field58.appinfo = "Container field for Site nodes";
field58.type = "MFNode";
ExternProtoDeclare46.field[11] = field58;

field field59 = createNode("field");
field59.name = "translation";
field59.accessType = "inputOutput";
field59.type = "SFVec3f";
ExternProtoDeclare46.field[12] = field59;

field field60 = createNode("field");
field60.name = "version";
field60.accessType = "inputOutput";
field60.appinfo = "legal values: 1.1 or 2.0";
field60.type = "SFString";
ExternProtoDeclare46.field[13] = field60;

field field61 = createNode("field");
field61.name = "viewpoints";
field61.accessType = "inputOutput";
field61.appinfo = "Container field for Viewpoint nodes";
field61.type = "MFNode";
ExternProtoDeclare46.field[14] = field61;

field field62 = createNode("field");
field62.name = "skinNormal";
field62.accessType = "inputOutput";
field62.appinfo = "Hint: HAnim version 2.0";
field62.type = "SFNode";
ExternProtoDeclare46.field[15] = field62;

field field63 = createNode("field");
field63.name = "humanoidVersion";
field63.accessType = "inputOutput";
field63.appinfo = "Version of the humanoid being modeled. Hint: HAnim version 2.0";
field63.type = "SFString";
ExternProtoDeclare46.field[16] = field63;

field field64 = createNode("field");
field64.name = "skeleton";
field64.accessType = "inputOutput";
field64.appinfo = "HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody";
field64.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
field64.type = "MFNode";
ExternProtoDeclare46.field[17] = field64;

field field65 = createNode("field");
field65.name = "skinCoord";
field65.accessType = "inputOutput";
field65.appinfo = "Hint: HAnim version 2.0";
field65.type = "SFNode";
ExternProtoDeclare46.field[18] = field65;

children[2] = ExternProtoDeclare46;

//====================
ExternProtoDeclare ExternProtoDeclare66 = createNode("ExternProtoDeclare");
ExternProtoDeclare66.name = "ViewPositionOrientation";
ExternProtoDeclare66.appinfo = "ViewPositionOrientation provides provides console output of local position and orientation as user navigates";
ExternProtoDeclare66.url = new MFString(new java.lang.String["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]);
field field67 = createNode("field");
field67.name = "enabled";
field67.accessType = "inputOutput";
field67.appinfo = "Whether or not ViewPositionOrientation sends output to console";
field67.type = "SFBool";
ExternProtoDeclare66.field = new MFNode();

ExternProtoDeclare66.field[0] = field67;

field field68 = createNode("field");
field68.name = "traceEnabled";
field68.accessType = "initializeOnly";
field68.appinfo = "Output internal trace messages for debugging this node, intended for developer use only";
field68.type = "SFBool";
ExternProtoDeclare66.field[1] = field68;

field field69 = createNode("field");
field69.name = "set_traceEnabled";
field69.accessType = "inputOnly";
field69.appinfo = "Ability to turn output tracing on/off at runtime";
field69.type = "SFBool";
ExternProtoDeclare66.field[2] = field69;

field field70 = createNode("field");
field70.name = "position_changed";
field70.accessType = "outputOnly";
field70.appinfo = "Output local position";
field70.type = "SFVec3f";
ExternProtoDeclare66.field[3] = field70;

field field71 = createNode("field");
field71.name = "orientation_changed";
field71.accessType = "outputOnly";
field71.appinfo = "Output local orientation";
field71.type = "SFRotation";
ExternProtoDeclare66.field[4] = field71;

field field72 = createNode("field");
field72.name = "outputViewpointString";
field72.accessType = "outputOnly";
field72.appinfo = "MFString value of new Viewpoint, suitable for use in string field of a Text node";
field72.type = "MFString";
ExternProtoDeclare66.field[5] = field72;

children[3] = ExternProtoDeclare66;

ProtoInstance ProtoInstance73 = createNode("ProtoInstance");
ProtoInstance73.name = "ViewPositionOrientation";
ProtoInstance73.DEF = "ExampleViewPositionOrientation";
fieldValue fieldValue74 = createNode("fieldValue");
fieldValue74.name = "enabled";
fieldValue74.value = "true";
ProtoInstance73.fieldValue = new MFNode();

ProtoInstance73.fieldValue[0] = fieldValue74;

children[4] = ProtoInstance73;

//Example use: https://savage.nps.edu/Savage/Tools/Animation/ViewPositionOrientationExample.x3d
//====================
//Start scene graph.
ProtoInstance ProtoInstance75 = createNode("ProtoInstance");
ProtoInstance75.name = "ViewPositionOrientation";
fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "enabled";
fieldValue76.value = "true";
ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

children[5] = ProtoInstance75;

Background Background77 = createNode("Background");
Background77.skyColor = new MFColor(new float[0,0.4,1]);
children[6] = Background77;

NavigationInfo NavigationInfo78 = createNode("NavigationInfo");
NavigationInfo78.avatarSize = new MFFloat(new float[0.15,1.53,0.75]);
NavigationInfo78.speed = 0.5;
NavigationInfo78.type = new MFString(new java.lang.String["EXAMINE"]);
children[7] = NavigationInfo78;

Viewpoint Viewpoint79 = createNode("Viewpoint");
Viewpoint79.description = "Nancy diving default viewpoint";
Viewpoint79.position = new SFVec3f(new float[-0.8,0,3.1]);
children[8] = Viewpoint79;

LOD LOD80 = createNode("LOD");
Group Group81 = createNode("Group");
Group81.DEF = "Viewpoint";
//High Resolution
Viewpoint Viewpoint82 = createNode("Viewpoint");
Viewpoint82.description = "Nancy front viewpoint";
Viewpoint82.orientation = new SFRotation(new float[-0.354,0.878,-0.321,4.5485]);
Viewpoint82.position = new SFVec3f(new float[-2.2,-0.7,0]);
Group81.children = new MFNode();

Group81.children[0] = Viewpoint82;

Viewpoint Viewpoint83 = createNode("Viewpoint");
Viewpoint83.description = "Nancy above viewpoint";
Viewpoint83.orientation = new SFRotation(new float[-0.126,-0.978,-0.168,1.5385]);
Viewpoint83.position = new SFVec3f(new float[-3,0.5,0]);
Group81.children[1] = Viewpoint83;

Viewpoint Viewpoint84 = createNode("Viewpoint");
Viewpoint84.description = "Nancy back viewpoint";
Viewpoint84.orientation = new SFRotation(new float[0.037,0.999,-0.011,1.572]);
Viewpoint84.position = new SFVec3f(new float[0.7,0.1,0]);
Group81.children[2] = Viewpoint84;

Viewpoint Viewpoint85 = createNode("Viewpoint");
Viewpoint85.description = "Nancy side viewpoint";
Viewpoint85.orientation = new SFRotation(new float[0.121,0.987,-0.105,3.2682]);
Viewpoint85.position = new SFVec3f(new float[-1.2,-0.2,-1.5]);
Group81.children[3] = Viewpoint85;

Viewpoint Viewpoint86 = createNode("Viewpoint");
Viewpoint86.description = "Nancy viewpoint through her goggles";
Viewpoint86.orientation = new SFRotation(new float[-0.357,0.872,0.335,1.5225]);
Viewpoint86.position = new SFVec3f(new float[-1.5,0.1,0]);
Group81.children[4] = Viewpoint86;

Group Group87 = createNode("Group");
Group87.DEF = "HighResolution";
Transform Transform88 = createNode("Transform");
Transform88.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform Transform89 = createNode("Transform");
Transform89.rotation = new SFRotation(new float[0,0,1,1.57]);
WorldInfo WorldInfo90 = createNode("WorldInfo");
WorldInfo90.info = new MFString(new java.lang.String["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."]);
WorldInfo90.title = "Nancy - an HAnim compliant avatar by 3Name3D";
Transform89.children = new MFNode();

Transform89.children[0] = WorldInfo90;

ProtoInstance ProtoInstance91 = createNode("ProtoInstance");
ProtoInstance91.name = "Humanoid";
ProtoInstance91.DEF = "Humanoid";
fieldValue fieldValue92 = createNode("fieldValue");
fieldValue92.name = "humanoidBody";
ProtoInstance ProtoInstance93 = createNode("ProtoInstance");
ProtoInstance93.name = "Joint";
ProtoInstance93.DEF = "hanim_humanoid_root";
fieldValue fieldValue94 = createNode("fieldValue");
fieldValue94.name = "name";
fieldValue94.value = "humanoid_root";
ProtoInstance93.fieldValue = new MFNode();

ProtoInstance93.fieldValue[0] = fieldValue94;

fieldValue fieldValue95 = createNode("fieldValue");
fieldValue95.name = "center";
fieldValue95.value = "-0.00405 0.855 -0.000113";
ProtoInstance93.fieldValue[1] = fieldValue95;

fieldValue fieldValue96 = createNode("fieldValue");
fieldValue96.name = "children";
ProtoInstance ProtoInstance97 = createNode("ProtoInstance");
ProtoInstance97.name = "Joint";
ProtoInstance97.DEF = "hanim_sacroiliac";
fieldValue fieldValue98 = createNode("fieldValue");
fieldValue98.name = "name";
fieldValue98.value = "sacroiliac";
ProtoInstance97.fieldValue = new MFNode();

ProtoInstance97.fieldValue[0] = fieldValue98;

fieldValue fieldValue99 = createNode("fieldValue");
fieldValue99.name = "center";
fieldValue99.value = "0 1.01 -0.0204";
ProtoInstance97.fieldValue[1] = fieldValue99;

fieldValue fieldValue100 = createNode("fieldValue");
fieldValue100.name = "children";
ProtoInstance ProtoInstance101 = createNode("ProtoInstance");
ProtoInstance101.name = "Segment";
ProtoInstance101.DEF = "hanim_pelvis";
fieldValue fieldValue102 = createNode("fieldValue");
fieldValue102.name = "name";
fieldValue102.value = "pelvis";
ProtoInstance101.fieldValue = new MFNode();

ProtoInstance101.fieldValue[0] = fieldValue102;

fieldValue fieldValue103 = createNode("fieldValue");
fieldValue103.name = "children";
Shape Shape104 = createNode("Shape");
Appearance Appearance105 = createNode("Appearance");
Material Material106 = createNode("Material");
Material106.DEF = "Pants_Color";
Material106.diffuseColor = new SFColor(new float[0,0,0.502]);
Appearance105.material = Material106;

Shape104.appearance = Appearance105;

IndexedFaceSet IndexedFaceSet107 = createNode("IndexedFaceSet");
IndexedFaceSet107.coordIndex = new MFInt32(new int[0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
IndexedFaceSet107.creaseAngle = 1.14;
Coordinate Coordinate108 = createNode("Coordinate");
Coordinate108.point = new MFVec3f(new float[0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
IndexedFaceSet107.coord = Coordinate108;

Shape104.geometry = IndexedFaceSet107;

fieldValue103.children = new MFNode();

fieldValue103.children[0] = Shape104;

ProtoInstance101.fieldValue[1] = fieldValue103;

fieldValue100.children = new MFNode();

fieldValue100.children[0] = ProtoInstance101;

ProtoInstance ProtoInstance109 = createNode("ProtoInstance");
ProtoInstance109.name = "Joint";
ProtoInstance109.DEF = "hanim_l_hip";
fieldValue fieldValue110 = createNode("fieldValue");
fieldValue110.name = "name";
fieldValue110.value = "l_hip";
ProtoInstance109.fieldValue = new MFNode();

ProtoInstance109.fieldValue[0] = fieldValue110;

fieldValue fieldValue111 = createNode("fieldValue");
fieldValue111.name = "center";
fieldValue111.value = "0.122 0.888271 -0.0693267";
ProtoInstance109.fieldValue[1] = fieldValue111;

fieldValue fieldValue112 = createNode("fieldValue");
fieldValue112.name = "children";
ProtoInstance ProtoInstance113 = createNode("ProtoInstance");
ProtoInstance113.name = "Segment";
ProtoInstance113.DEF = "hanim_l_thigh";
fieldValue fieldValue114 = createNode("fieldValue");
fieldValue114.name = "name";
fieldValue114.value = "l_thigh";
ProtoInstance113.fieldValue = new MFNode();

ProtoInstance113.fieldValue[0] = fieldValue114;

fieldValue fieldValue115 = createNode("fieldValue");
fieldValue115.name = "children";
Shape Shape116 = createNode("Shape");
Appearance Appearance117 = createNode("Appearance");
Material Material118 = createNode("Material");
Material118.USE = "Pants_Color";
Appearance117.material = Material118;

Shape116.appearance = Appearance117;

IndexedFaceSet IndexedFaceSet119 = createNode("IndexedFaceSet");
IndexedFaceSet119.coordIndex = new MFInt32(new int[0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
IndexedFaceSet119.creaseAngle = 1.32;
Coordinate Coordinate120 = createNode("Coordinate");
Coordinate120.point = new MFVec3f(new float[0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
IndexedFaceSet119.coord = Coordinate120;

Shape116.geometry = IndexedFaceSet119;

fieldValue115.children = new MFNode();

fieldValue115.children[0] = Shape116;

ProtoInstance113.fieldValue[1] = fieldValue115;

fieldValue112.children = new MFNode();

fieldValue112.children[0] = ProtoInstance113;

ProtoInstance ProtoInstance121 = createNode("ProtoInstance");
ProtoInstance121.name = "Joint";
ProtoInstance121.DEF = "hanim_l_knee";
fieldValue fieldValue122 = createNode("fieldValue");
fieldValue122.name = "name";
fieldValue122.value = "l_knee";
ProtoInstance121.fieldValue = new MFNode();

ProtoInstance121.fieldValue[0] = fieldValue122;

fieldValue fieldValue123 = createNode("fieldValue");
fieldValue123.name = "center";
fieldValue123.value = "0.0738 0.517 -0.0284";
ProtoInstance121.fieldValue[1] = fieldValue123;

fieldValue fieldValue124 = createNode("fieldValue");
fieldValue124.name = "children";
ProtoInstance ProtoInstance125 = createNode("ProtoInstance");
ProtoInstance125.name = "Segment";
ProtoInstance125.DEF = "hanim_l_calf";
fieldValue fieldValue126 = createNode("fieldValue");
fieldValue126.name = "name";
fieldValue126.value = "l_calf";
ProtoInstance125.fieldValue = new MFNode();

ProtoInstance125.fieldValue[0] = fieldValue126;

fieldValue fieldValue127 = createNode("fieldValue");
fieldValue127.name = "children";
Shape Shape128 = createNode("Shape");
Appearance Appearance129 = createNode("Appearance");
Material Material130 = createNode("Material");
Material130.USE = "Pants_Color";
Appearance129.material = Material130;

Shape128.appearance = Appearance129;

IndexedFaceSet IndexedFaceSet131 = createNode("IndexedFaceSet");
IndexedFaceSet131.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
IndexedFaceSet131.creaseAngle = 1.57;
Coordinate Coordinate132 = createNode("Coordinate");
Coordinate132.point = new MFVec3f(new float[0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
IndexedFaceSet131.coord = Coordinate132;

Shape128.geometry = IndexedFaceSet131;

fieldValue127.children = new MFNode();

fieldValue127.children[0] = Shape128;

ProtoInstance125.fieldValue[1] = fieldValue127;

fieldValue124.children = new MFNode();

fieldValue124.children[0] = ProtoInstance125;

ProtoInstance ProtoInstance133 = createNode("ProtoInstance");
ProtoInstance133.name = "Joint";
ProtoInstance133.DEF = "hanim_l_ankle";
fieldValue fieldValue134 = createNode("fieldValue");
fieldValue134.name = "name";
fieldValue134.value = "l_ankle";
ProtoInstance133.fieldValue = new MFNode();

ProtoInstance133.fieldValue[0] = fieldValue134;

fieldValue fieldValue135 = createNode("fieldValue");
fieldValue135.name = "center";
fieldValue135.value = "0.0645 0.0719 -0.048";
ProtoInstance133.fieldValue[1] = fieldValue135;

fieldValue fieldValue136 = createNode("fieldValue");
fieldValue136.name = "children";
ProtoInstance ProtoInstance137 = createNode("ProtoInstance");
ProtoInstance137.name = "Segment";
ProtoInstance137.DEF = "hanim_l_hindfoot";
fieldValue fieldValue138 = createNode("fieldValue");
fieldValue138.name = "name";
fieldValue138.value = "l_hindfoot";
ProtoInstance137.fieldValue = new MFNode();

ProtoInstance137.fieldValue[0] = fieldValue138;

fieldValue fieldValue139 = createNode("fieldValue");
fieldValue139.name = "children";
Shape Shape140 = createNode("Shape");
Appearance Appearance141 = createNode("Appearance");
Material Material142 = createNode("Material");
Material142.DEF = "Shoe_Color";
Material142.ambientIntensity = 0.25;
Material142.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance141.material = Material142;

Shape140.appearance = Appearance141;

IndexedFaceSet IndexedFaceSet143 = createNode("IndexedFaceSet");
IndexedFaceSet143.coordIndex = new MFInt32(new int[2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
IndexedFaceSet143.creaseAngle = 1.57;
Coordinate Coordinate144 = createNode("Coordinate");
Coordinate144.point = new MFVec3f(new float[0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
IndexedFaceSet143.coord = Coordinate144;

Shape140.geometry = IndexedFaceSet143;

fieldValue139.children = new MFNode();

fieldValue139.children[0] = Shape140;

Transform Transform145 = createNode("Transform");
Transform145.scale = new SFVec3f(new float[0.015,0.015,0.015]);
Transform Transform146 = createNode("Transform");
Transform146.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform146.translation = new SFVec3f(new float[6,-0.5,-7.5]);
Shape Shape147 = createNode("Shape");
Appearance Appearance148 = createNode("Appearance");
Material Material149 = createNode("Material");
Material149.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance148.material = Material149;

Shape147.appearance = Appearance148;

Extrusion Extrusion150 = createNode("Extrusion");
Extrusion150.DEF = "Finl";
Extrusion150.ccw = False;
Extrusion150.creaseAngle = 3.14;
Extrusion150.crossSection = new MFVec2f(new float[-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion150.scale = new MFVec2f(new float[0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion150.spine = new MFVec3f(new float[0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
Shape147.geometry = Extrusion150;

Transform146.children = new MFNode();

Transform146.children[0] = Shape147;

Transform145.children = new MFNode();

Transform145.children[0] = Transform146;

fieldValue139.children[1] = Transform145;

ProtoInstance137.fieldValue[1] = fieldValue139;

fieldValue136.children = new MFNode();

fieldValue136.children[0] = ProtoInstance137;

ProtoInstance133.fieldValue[2] = fieldValue136;

fieldValue124.children[1] = ProtoInstance133;

ProtoInstance121.fieldValue[2] = fieldValue124;

fieldValue112.children[1] = ProtoInstance121;

ProtoInstance109.fieldValue[2] = fieldValue112;

fieldValue100.children[1] = ProtoInstance109;

ProtoInstance ProtoInstance151 = createNode("ProtoInstance");
ProtoInstance151.name = "Joint";
ProtoInstance151.DEF = "hanim_r_hip";
fieldValue fieldValue152 = createNode("fieldValue");
fieldValue152.name = "name";
fieldValue152.value = "r_hip";
ProtoInstance151.fieldValue = new MFNode();

ProtoInstance151.fieldValue[0] = fieldValue152;

fieldValue fieldValue153 = createNode("fieldValue");
fieldValue153.name = "center";
fieldValue153.value = "-0.11 0.892362 -0.0732533";
ProtoInstance151.fieldValue[1] = fieldValue153;

fieldValue fieldValue154 = createNode("fieldValue");
fieldValue154.name = "children";
ProtoInstance ProtoInstance155 = createNode("ProtoInstance");
ProtoInstance155.name = "Segment";
ProtoInstance155.DEF = "hanim_r_thigh";
fieldValue fieldValue156 = createNode("fieldValue");
fieldValue156.name = "name";
fieldValue156.value = "r_thigh";
ProtoInstance155.fieldValue = new MFNode();

ProtoInstance155.fieldValue[0] = fieldValue156;

fieldValue fieldValue157 = createNode("fieldValue");
fieldValue157.name = "children";
Shape Shape158 = createNode("Shape");
Appearance Appearance159 = createNode("Appearance");
Material Material160 = createNode("Material");
Material160.USE = "Pants_Color";
Appearance159.material = Material160;

Shape158.appearance = Appearance159;

IndexedFaceSet IndexedFaceSet161 = createNode("IndexedFaceSet");
IndexedFaceSet161.coordIndex = new MFInt32(new int[5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
IndexedFaceSet161.creaseAngle = 1.61;
Coordinate Coordinate162 = createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
IndexedFaceSet161.coord = Coordinate162;

Shape158.geometry = IndexedFaceSet161;

fieldValue157.children = new MFNode();

fieldValue157.children[0] = Shape158;

ProtoInstance155.fieldValue[1] = fieldValue157;

fieldValue154.children = new MFNode();

fieldValue154.children[0] = ProtoInstance155;

ProtoInstance ProtoInstance163 = createNode("ProtoInstance");
ProtoInstance163.name = "Joint";
ProtoInstance163.DEF = "hanim_r_knee";
fieldValue fieldValue164 = createNode("fieldValue");
fieldValue164.name = "name";
fieldValue164.value = "r_knee";
ProtoInstance163.fieldValue = new MFNode();

ProtoInstance163.fieldValue[0] = fieldValue164;

fieldValue fieldValue165 = createNode("fieldValue");
fieldValue165.name = "center";
fieldValue165.value = "-0.0699 0.51 -0.0166";
ProtoInstance163.fieldValue[1] = fieldValue165;

fieldValue fieldValue166 = createNode("fieldValue");
fieldValue166.name = "children";
ProtoInstance ProtoInstance167 = createNode("ProtoInstance");
ProtoInstance167.name = "Segment";
ProtoInstance167.DEF = "hanim_r_calf";
fieldValue fieldValue168 = createNode("fieldValue");
fieldValue168.name = "name";
fieldValue168.value = "r_calf";
ProtoInstance167.fieldValue = new MFNode();

ProtoInstance167.fieldValue[0] = fieldValue168;

fieldValue fieldValue169 = createNode("fieldValue");
fieldValue169.name = "children";
Shape Shape170 = createNode("Shape");
Appearance Appearance171 = createNode("Appearance");
Material Material172 = createNode("Material");
Material172.USE = "Pants_Color";
Appearance171.material = Material172;

Shape170.appearance = Appearance171;

IndexedFaceSet IndexedFaceSet173 = createNode("IndexedFaceSet");
IndexedFaceSet173.coordIndex = new MFInt32(new int[14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
IndexedFaceSet173.creaseAngle = 1.57;
Coordinate Coordinate174 = createNode("Coordinate");
Coordinate174.point = new MFVec3f(new float[-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
IndexedFaceSet173.coord = Coordinate174;

Shape170.geometry = IndexedFaceSet173;

fieldValue169.children = new MFNode();

fieldValue169.children[0] = Shape170;

ProtoInstance167.fieldValue[1] = fieldValue169;

fieldValue166.children = new MFNode();

fieldValue166.children[0] = ProtoInstance167;

ProtoInstance ProtoInstance175 = createNode("ProtoInstance");
ProtoInstance175.name = "Joint";
ProtoInstance175.DEF = "hanim_r_ankle";
fieldValue fieldValue176 = createNode("fieldValue");
fieldValue176.name = "name";
fieldValue176.value = "r_ankle";
ProtoInstance175.fieldValue = new MFNode();

ProtoInstance175.fieldValue[0] = fieldValue176;

fieldValue fieldValue177 = createNode("fieldValue");
fieldValue177.name = "center";
fieldValue177.value = "-0.064 0.0753 -0.0412";
ProtoInstance175.fieldValue[1] = fieldValue177;

fieldValue fieldValue178 = createNode("fieldValue");
fieldValue178.name = "children";
ProtoInstance ProtoInstance179 = createNode("ProtoInstance");
ProtoInstance179.name = "Segment";
ProtoInstance179.DEF = "hanim_r_hindfoot";
fieldValue fieldValue180 = createNode("fieldValue");
fieldValue180.name = "name";
fieldValue180.value = "r_hindfoot";
ProtoInstance179.fieldValue = new MFNode();

ProtoInstance179.fieldValue[0] = fieldValue180;

fieldValue fieldValue181 = createNode("fieldValue");
fieldValue181.name = "children";
Shape Shape182 = createNode("Shape");
Appearance Appearance183 = createNode("Appearance");
Material Material184 = createNode("Material");
Material184.USE = "Shoe_Color";
Appearance183.material = Material184;

Shape182.appearance = Appearance183;

IndexedFaceSet IndexedFaceSet185 = createNode("IndexedFaceSet");
IndexedFaceSet185.coordIndex = new MFInt32(new int[6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
IndexedFaceSet185.creaseAngle = 1.57;
Coordinate Coordinate186 = createNode("Coordinate");
Coordinate186.point = new MFVec3f(new float[-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
IndexedFaceSet185.coord = Coordinate186;

Shape182.geometry = IndexedFaceSet185;

fieldValue181.children = new MFNode();

fieldValue181.children[0] = Shape182;

Transform Transform187 = createNode("Transform");
Transform187.scale = new SFVec3f(new float[0.015,0.015,0.015]);
Transform Transform188 = createNode("Transform");
Transform188.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform188.translation = new SFVec3f(new float[-5,-0.5,-7.5]);
Shape Shape189 = createNode("Shape");
Appearance Appearance190 = createNode("Appearance");
Material Material191 = createNode("Material");
Material191.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance190.material = Material191;

Shape189.appearance = Appearance190;

Extrusion Extrusion192 = createNode("Extrusion");
Extrusion192.DEF = "Finr";
Extrusion192.ccw = False;
Extrusion192.creaseAngle = 3.14;
Extrusion192.crossSection = new MFVec2f(new float[-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion192.scale = new MFVec2f(new float[0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion192.spine = new MFVec3f(new float[0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
Shape189.geometry = Extrusion192;

Transform188.children = new MFNode();

Transform188.children[0] = Shape189;

Transform187.children = new MFNode();

Transform187.children[0] = Transform188;

fieldValue181.children[1] = Transform187;

ProtoInstance179.fieldValue[1] = fieldValue181;

fieldValue178.children = new MFNode();

fieldValue178.children[0] = ProtoInstance179;

ProtoInstance175.fieldValue[2] = fieldValue178;

fieldValue166.children[1] = ProtoInstance175;

ProtoInstance163.fieldValue[2] = fieldValue166;

fieldValue154.children[1] = ProtoInstance163;

ProtoInstance151.fieldValue[2] = fieldValue154;

fieldValue100.children[2] = ProtoInstance151;

ProtoInstance97.fieldValue[2] = fieldValue100;

fieldValue96.children = new MFNode();

fieldValue96.children[0] = ProtoInstance97;

//Fins animation
ProximitySensor ProximitySensor193 = createNode("ProximitySensor");
ProximitySensor193.DEF = "FinTriggerProximitySensor";
ProximitySensor193.size = new SFVec3f(new float[5,5,5]);
fieldValue96.children[1] = ProximitySensor193;

TimeSensor TimeSensor194 = createNode("TimeSensor");
TimeSensor194.DEF = "FinClock";
TimeSensor194.cycleInterval = 7;
TimeSensor194.loop = True;
fieldValue96.children[2] = TimeSensor194;

Group Group195 = createNode("Group");
Script Script196 = createNode("Script");
Script196.DEF = "FinScript";
field field197 = createNode("field");
field197.name = "keyValueR";
field197.accessType = "outputOnly";
field197.type = "MFVec3f";
Script196.field = new MFNode();

Script196.field[0] = field197;

field field198 = createNode("field");
field198.name = "keyValueL";
field198.accessType = "outputOnly";
field198.type = "MFVec3f";
Script196.field[1] = field198;

field field199 = createNode("field");
field199.name = "set_fraction";
field199.accessType = "inputOnly";
field199.type = "SFFloat";
Script196.field[2] = field199;

field field200 = createNode("field");
field200.name = "finL";
field200.accessType = "inputOnly";
field200.type = "SFBool";
Script196.field[3] = field200;

field field201 = createNode("field");
field201.name = "finR";
field201.accessType = "inputOnly";
field201.type = "SFBool";
Script196.field[4] = field201;

field field202 = createNode("field");
field202.name = "traceEnabled";
field202.accessType = "initializeOnly";
field202.type = "SFBool";
field202.value = "true";
Script196.field[5] = field202;


Script196.setSourceCode(`ecmascript:\n"+
"\n"+
"var finWarpL;\n"+
"var finWarpR;\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	finWarpL = 0;\n"+
"	finWarpR = 0;\n"+
"}\n"+
"\n"+
"function finL(value, timeStamp)\n"+
"{\n"+
"	if (value == 0)\n"+
"	{\n"+
"		finWarpL = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		finWarpL = 1;\n"+
"	}\n"+
"	//print ('finWarpL' + finWarpL);\n"+
"}			 \n"+
"\n"+
"function finR(value, timeStamp)\n"+
"{\n"+
"	if (value == 0)\n"+
"	{\n"+
"		finWarpR = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		finWarpR = 1;\n"+
"	}\n"+
"	//print ('finWarpR' + finWarpR);\n"+
"}\n"+
"function finMove(fraction, timeStamp)\n"+
" {  	\n"+
"	if (finWarpL == 1)\n"+
"	{\n"+
"		// level 3 (warp outside) Left					\n"+
"		kVL7 = new SFVec3f(1.25, 0, 25);  \n"+
"     		kVL8 = new SFVec3f(2.5, 0, 30);\n"+
"      		kVL9 = new SFVec3f(3.25, 0, 34);			\n"+
"	}	\n"+
"	else \n"+
"	{		\n"+
"		// level -2 (warp inside) Left					\n"+
"		kVL7 = new SFVec3f(-1.25, 0, 25);  \n"+
"     		kVL8 = new SFVec3f(-2.5, 0, 30);\n"+
"      		kVL9 = new SFVec3f(-3.25, 0, 34);	\n"+
"	}\n"+
"\n"+
"	if (finWarpR == 0)\n"+
"	{		\n"+
"		// level  1 (warp outside ) Right    			\n"+
"		kVR7 = new SFVec3f(1.25, 0, 25);  \n"+
"     		kVR8 = new SFVec3f(2.5, 0, 30);\n"+
"      		kVR9 = new SFVec3f(3.25, 0, 34);	  	\n"+
"	\n"+
"	}	\n"+
"	else \n"+
"	{		\n"+
"		// level  -2 ( warp inside) Right      				\n"+
"		kVR7 = new SFVec3f(-1.25, 0, 25);  \n"+
"     		kVR8 = new SFVec3f(-2.5, 0, 30);\n"+
"      		kVR9 = new SFVec3f(-3.25, 0, 34);\n"+
"	}\n"+
"\n"+
"	// Left Fin (fixed spine)\n"+
"	kVL1 = new SFVec3f(0, 0, 1);  \n"+
"     	kVL2 = new SFVec3f(0, 0, 5);\n"+
"      	kVL3 = new SFVec3f(0, 0, 8);\n"+
"	kVL4 = new SFVec3f(0, 0, 12); \n"+
"	kVL5 = new SFVec3f(0, 0, 15); 	\n"+
"	kVL6 = new SFVec3f(0, 0, 18);			\n"+
"      	keyValueL = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);  \n"+
"	\n"+
"	// Right Fin (fixed spine)\n"+
"	kVR1 = new SFVec3f(0, 0, 1);  \n"+
"     	kVR2 = new SFVec3f(0, 0, 5);\n"+
"      	kVR3 = new SFVec3f(0, 0, 8);\n"+
"	kVR4 = new SFVec3f(0, 0, 12);  	\n"+
"	kVR5 = new SFVec3f(0, 0, 15);\n"+
"	kVR6 = new SFVec3f(0, 0, 18);			\n"+
"      	keyValueR = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);  \n"+
"      	\n"+
"	//tracePrint ('[keyValueL = ]' + keyValueL);     \n"+
"	//tracePrint ('[keyValueR = ]' + keyValueR);     \n"+
"			\n"+
"}\n"+
"\n"+
"function set_fraction (value, timeStamp)\n"+
"{\n"+
"	finMove(value);\n"+
"	//tracePrint('time fraction =' + value);\n"+
"	\n"+
"}\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[Fin Move]' + outputString);\n"+
"}`)
Group195.children = new MFNode();

Group195.children[0] = Script196;

ROUTE ROUTE203 = createNode("ROUTE");
ROUTE203.fromField = "isActive";
ROUTE203.fromNode = "FinTriggerProximitySensor";
ROUTE203.toField = "enabled";
ROUTE203.toNode = "FinClock";
Group195.children[1] = ROUTE203;

ROUTE ROUTE204 = createNode("ROUTE");
ROUTE204.fromField = "fraction_changed";
ROUTE204.fromNode = "FinClock";
ROUTE204.toField = "set_fraction";
ROUTE204.toNode = "FinScript";
Group195.children[2] = ROUTE204;

ROUTE ROUTE205 = createNode("ROUTE");
ROUTE205.fromField = "keyValueR";
ROUTE205.fromNode = "FinScript";
ROUTE205.toField = "set_spine";
ROUTE205.toNode = "Finr";
Group195.children[3] = ROUTE205;

ROUTE ROUTE206 = createNode("ROUTE");
ROUTE206.fromField = "keyValueL";
ROUTE206.fromNode = "FinScript";
ROUTE206.toField = "set_spine";
ROUTE206.toNode = "Finl";
Group195.children[4] = ROUTE206;

fieldValue96.children[3] = Group195;

ProtoInstance ProtoInstance207 = createNode("ProtoInstance");
ProtoInstance207.name = "Joint";
ProtoInstance207.DEF = "hanim_vl1";
fieldValue fieldValue208 = createNode("fieldValue");
fieldValue208.name = "name";
fieldValue208.value = "vl1";
ProtoInstance207.fieldValue = new MFNode();

ProtoInstance207.fieldValue[0] = fieldValue208;

fieldValue fieldValue209 = createNode("fieldValue");
fieldValue209.name = "center";
fieldValue209.value = "-0.00405 1.07 -0.0275";
ProtoInstance207.fieldValue[1] = fieldValue209;

fieldValue fieldValue210 = createNode("fieldValue");
fieldValue210.name = "children";
ProtoInstance ProtoInstance211 = createNode("ProtoInstance");
ProtoInstance211.name = "Segment";
ProtoInstance211.DEF = "hanim_c7";
fieldValue fieldValue212 = createNode("fieldValue");
fieldValue212.name = "name";
fieldValue212.value = "l1";
ProtoInstance211.fieldValue = new MFNode();

ProtoInstance211.fieldValue[0] = fieldValue212;

fieldValue fieldValue213 = createNode("fieldValue");
fieldValue213.name = "children";
Transform Transform214 = createNode("Transform");
Transform214.scale = new SFVec3f(new float[1.05,1.05,1.05]);
Transform214.translation = new SFVec3f(new float[0,-0.09,0]);
Shape Shape215 = createNode("Shape");
Appearance Appearance216 = createNode("Appearance");
Material Material217 = createNode("Material");
Material217.DEF = "WetShirtColor";
Material217.ambientIntensity = 0.25;
Material217.diffuseColor = new SFColor(new float[0,0,0.502]);
Appearance216.material = Material217;

ImageTexture ImageTexture218 = createNode("ImageTexture");
ImageTexture218.DEF = "small_logo_Tex";
ImageTexture218.url = new MFString(new java.lang.String["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif"]);
Appearance216.texture = ImageTexture218;

Shape215.appearance = Appearance216;

IndexedFaceSet IndexedFaceSet219 = createNode("IndexedFaceSet");
IndexedFaceSet219.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
IndexedFaceSet219.creaseAngle = 1.59;
Coordinate Coordinate220 = createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet219.coord = Coordinate220;

TextureCoordinate TextureCoordinate221 = createNode("TextureCoordinate");
TextureCoordinate221.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet219.texCoord = TextureCoordinate221;

Shape215.geometry = IndexedFaceSet219;

Transform214.children = new MFNode();

Transform214.children[0] = Shape215;

fieldValue213.children = new MFNode();

fieldValue213.children[0] = Transform214;

//<Transform DEF='Imaf3D'> <Shape> <Appearance> <Material/> <ImageTexture/> </Appearance> <IndexedFaceSet> <Coordinate/> <TextureCoordinate/> </IndexedFaceSet> </Shape> </Transform>
Transform Transform222 = createNode("Transform");
Transform222.scale = new SFVec3f(new float[1.25,1.1,1.3]);
Transform222.translation = new SFVec3f(new float[0,1.18,0.015]);
Group Group223 = createNode("Group");
Transform Transform224 = createNode("Transform");
Transform224.translation = new SFVec3f(new float[0,-1.2,0]);
Shape Shape225 = createNode("Shape");
Appearance Appearance226 = createNode("Appearance");
Material Material227 = createNode("Material");
Material227.DEF = "BCLColor";
Material227.ambientIntensity = 0.25;
Material227.diffuseColor = new SFColor(new float[0.0588,0.0588,0.0588]);
Material227.shininess = 0.5;
Appearance226.material = Material227;

Shape225.appearance = Appearance226;

IndexedFaceSet IndexedFaceSet228 = createNode("IndexedFaceSet");
IndexedFaceSet228.coordIndex = new MFInt32(new int[4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1]);
IndexedFaceSet228.creaseAngle = 1.59;
IndexedFaceSet228.solid = False;
Coordinate Coordinate229 = createNode("Coordinate");
Coordinate229.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet228.coord = Coordinate229;

TextureCoordinate TextureCoordinate230 = createNode("TextureCoordinate");
TextureCoordinate230.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet228.texCoord = TextureCoordinate230;

Shape225.geometry = IndexedFaceSet228;

Transform224.children = new MFNode();

Transform224.children[0] = Shape225;

Group223.children = new MFNode();

Group223.children[0] = Transform224;

Transform Transform231 = createNode("Transform");
Transform231.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform231.scale = new SFVec3f(new float[2,1.5,1.5]);
Transform231.translation = new SFVec3f(new float[0.13,0.22,-0.1]);
Transform Transform232 = createNode("Transform");
Transform232.rotation = new SFRotation(new float[1,0,0,1.4]);
Shape Shape233 = createNode("Shape");
Shape233.DEF = "BCLSnorkelPad";
Appearance Appearance234 = createNode("Appearance");
Material Material235 = createNode("Material");
Material235.USE = "BCLColor";
Appearance234.material = Material235;

Shape233.appearance = Appearance234;

Extrusion Extrusion236 = createNode("Extrusion");
Extrusion236.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion236.spine = new MFVec3f(new float[-0.03,0.01,0,-0.005,0.04,0,0,0.06,0,-0.01,0.075,0]);
Shape233.geometry = Extrusion236;

Transform232.children = new MFNode();

Transform232.children[0] = Shape233;

Transform231.children = new MFNode();

Transform231.children[0] = Transform232;

Group223.children[1] = Transform231;

Transform Transform237 = createNode("Transform");
Transform237.rotation = new SFRotation(new float[-1,0,0,0.8]);
Transform237.translation = new SFVec3f(new float[0.07,0.08,0.125]);
Shape Shape238 = createNode("Shape");
Appearance Appearance239 = createNode("Appearance");
Material Material240 = createNode("Material");
Material240.DEF = "BCLSnorkel";
Material240.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Material240.shininess = 0.5;
Material240.transparency = 0.1;
Appearance239.material = Material240;

Shape238.appearance = Appearance239;

Extrusion Extrusion241 = createNode("Extrusion");
Extrusion241.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion241.scale = new MFVec2f(new float[0.8,0.8,1,1]);
Extrusion241.spine = new MFVec3f(new float[0.03,0.03,-0.05,0.05,0.2,0]);
Shape238.geometry = Extrusion241;

Transform237.children = new MFNode();

Transform237.children[0] = Shape238;

Group223.children[2] = Transform237;

Group Group242 = createNode("Group");
Group242.DEF = "buckle";
Transform Transform243 = createNode("Transform");
Transform243.rotation = new SFRotation(new float[-1,0,0,0.68]);
Transform243.translation = new SFVec3f(new float[-0.08,0.1,0.029]);
Shape Shape244 = createNode("Shape");
Appearance Appearance245 = createNode("Appearance");
Appearance245.DEF = "buckleHolder";
Material Material246 = createNode("Material");
Material246.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Appearance245.material = Material246;

Shape244.appearance = Appearance245;

Box Box247 = createNode("Box");
Box247.size = new SFVec3f(new float[0.03,0.03,0.005]);
Shape244.geometry = Box247;

Transform243.children = new MFNode();

Transform243.children[0] = Shape244;

Group242.children = new MFNode();

Group242.children[0] = Transform243;

Transform Transform248 = createNode("Transform");
Transform248.rotation = new SFRotation(new float[-1,0,0,0.68]);
Transform248.translation = new SFVec3f(new float[0.03,0.1,0.027]);
Shape Shape249 = createNode("Shape");
Appearance Appearance250 = createNode("Appearance");
Appearance250.USE = "buckleHolder";
Shape249.appearance = Appearance250;

Box Box251 = createNode("Box");
Box251.size = new SFVec3f(new float[0.15,0.03,0.001]);
Shape249.geometry = Box251;

Transform248.children = new MFNode();

Transform248.children[0] = Shape249;

Group242.children[1] = Transform248;

Transform Transform252 = createNode("Transform");
Transform252.rotation = new SFRotation(new float[-1,0,0,0.68]);
Transform252.translation = new SFVec3f(new float[-0.045,0.1,0.028]);
Shape Shape253 = createNode("Shape");
Appearance Appearance254 = createNode("Appearance");
Appearance254.DEF = "pin";
Material Material255 = createNode("Material");
Appearance254.material = Material255;

Shape253.appearance = Appearance254;

Box Box256 = createNode("Box");
Box256.size = new SFVec3f(new float[0.02,0.028,0.005]);
Shape253.geometry = Box256;

Transform252.children = new MFNode();

Transform252.children[0] = Shape253;

Group242.children[2] = Transform252;

Transform Transform257 = createNode("Transform");
Transform257.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform257.translation = new SFVec3f(new float[-0.06,0.1,0.029]);
Shape Shape258 = createNode("Shape");
Appearance Appearance259 = createNode("Appearance");
Appearance259.USE = "pin";
Shape258.appearance = Appearance259;

Cylinder Cylinder260 = createNode("Cylinder");
Cylinder260.height = 0.02;
Cylinder260.radius = 0.0024;
Shape258.geometry = Cylinder260;

Transform257.children = new MFNode();

Transform257.children[0] = Shape258;

Group242.children[3] = Transform257;

Transform Transform261 = createNode("Transform");
Transform261.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform261.translation = new SFVec3f(new float[-0.06,0.109,0.0217]);
Shape Shape262 = createNode("Shape");
Appearance Appearance263 = createNode("Appearance");
Appearance263.USE = "pin";
Shape262.appearance = Appearance263;

Cylinder Cylinder264 = createNode("Cylinder");
Cylinder264.height = 0.02;
Cylinder264.radius = 0.0024;
Shape262.geometry = Cylinder264;

Transform261.children = new MFNode();

Transform261.children[0] = Shape262;

Group242.children[4] = Transform261;

Transform Transform265 = createNode("Transform");
Transform265.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform265.translation = new SFVec3f(new float[-0.06,0.091,0.036]);
Shape Shape266 = createNode("Shape");
Appearance Appearance267 = createNode("Appearance");
Appearance267.USE = "pin";
Shape266.appearance = Appearance267;

Cylinder Cylinder268 = createNode("Cylinder");
Cylinder268.height = 0.02;
Cylinder268.radius = 0.0024;
Shape266.geometry = Cylinder268;

Transform265.children = new MFNode();

Transform265.children[0] = Shape266;

Group242.children[5] = Transform265;

Group223.children[3] = Group242;

Group Group269 = createNode("Group");
Group269.DEF = "buckleBelt";
Transform Transform270 = createNode("Transform");
Transform270.rotation = new SFRotation(new float[0,1,0,-0.68]);
Transform270.translation = new SFVec3f(new float[-0.07,-0.12,0.038]);
Shape Shape271 = createNode("Shape");
Appearance Appearance272 = createNode("Appearance");
Appearance272.USE = "buckleHolder";
Shape271.appearance = Appearance272;

Box Box273 = createNode("Box");
Box273.size = new SFVec3f(new float[0.04,0.1,0.005]);
Shape271.geometry = Box273;

Transform270.children = new MFNode();

Transform270.children[0] = Shape271;

Group269.children = new MFNode();

Group269.children[0] = Transform270;

Transform Transform274 = createNode("Transform");
Transform274.translation = new SFVec3f(new float[0.005,-0.12,0.053]);
Shape Shape275 = createNode("Shape");
Appearance Appearance276 = createNode("Appearance");
Appearance276.USE = "buckleHolder";
Shape275.appearance = Appearance276;

Box Box277 = createNode("Box");
Box277.size = new SFVec3f(new float[0.12,0.11,0.001]);
Shape275.geometry = Box277;

Transform274.children = new MFNode();

Transform274.children[0] = Shape275;

Group269.children[1] = Transform274;

Transform Transform278 = createNode("Transform");
Transform278.rotation = new SFRotation(new float[0,1,0,0.68]);
Transform278.translation = new SFVec3f(new float[0.075,-0.12,0.038]);
Shape Shape279 = createNode("Shape");
Appearance Appearance280 = createNode("Appearance");
Appearance280.USE = "buckleHolder";
Shape279.appearance = Appearance280;

Box Box281 = createNode("Box");
Box281.size = new SFVec3f(new float[0.04,0.1,0.005]);
Shape279.geometry = Box281;

Transform278.children = new MFNode();

Transform278.children[0] = Shape279;

Group269.children[2] = Transform278;

Group223.children[4] = Group269;

Transform222.children = new MFNode();

Transform222.children[0] = Group223;

fieldValue213.children[1] = Transform222;

Transform Transform282 = createNode("Transform");
Transform282.DEF = "ScubaTank";
Transform282.rotation = new SFRotation(new float[0,1,0,3.14]);
Transform282.scale = new SFVec3f(new float[0.8,0.8,0.8]);
Transform282.translation = new SFVec3f(new float[0,1.1,-0.23]);
Transform Transform283 = createNode("Transform");
Shape Shape284 = createNode("Shape");
Appearance Appearance285 = createNode("Appearance");
Material Material286 = createNode("Material");
Material286.DEF = "tank";
Material286.ambientIntensity = 0.3;
Material286.diffuseColor = new SFColor(new float[0.3,0.3,0.5]);
Material286.shininess = 0.1;
Material286.specularColor = new SFColor(new float[0.7,0.7,0.8]);
Appearance285.material = Material286;

Shape284.appearance = Appearance285;

Cylinder Cylinder287 = createNode("Cylinder");
Cylinder287.height = 0.7;
Cylinder287.radius = 0.1;
Shape284.geometry = Cylinder287;

Transform283.children = new MFNode();

Transform283.children[0] = Shape284;

Transform282.children = new MFNode();

Transform282.children[0] = Transform283;

Transform Transform288 = createNode("Transform");
Transform288.translation = new SFVec3f(new float[0,0.35,0]);
Shape Shape289 = createNode("Shape");
Appearance Appearance290 = createNode("Appearance");
Material Material291 = createNode("Material");
Material291.USE = "tank";
Appearance290.material = Material291;

Shape289.appearance = Appearance290;

Sphere Sphere292 = createNode("Sphere");
Sphere292.radius = 0.098;
Shape289.geometry = Sphere292;

Transform288.children = new MFNode();

Transform288.children[0] = Shape289;

Transform282.children[1] = Transform288;

Transform Transform293 = createNode("Transform");
Transform293.translation = new SFVec3f(new float[0,-0.35,0]);
Shape Shape294 = createNode("Shape");
Shape294.DEF = "tankBottom";
Appearance Appearance295 = createNode("Appearance");
Material Material296 = createNode("Material");
Material296.ambientIntensity = 0.3;
Material296.diffuseColor = new SFColor(new float[0,0,0]);
Appearance295.material = Material296;

Shape294.appearance = Appearance295;

Cylinder Cylinder297 = createNode("Cylinder");
Cylinder297.height = 0.06;
Cylinder297.radius = 0.101;
Shape294.geometry = Cylinder297;

Transform293.children = new MFNode();

Transform293.children[0] = Shape294;

Transform282.children[2] = Transform293;

Group Group298 = createNode("Group");
Group298.DEF = "tankNozzle";
Transform Transform299 = createNode("Transform");
Transform Transform300 = createNode("Transform");
Transform300.translation = new SFVec3f(new float[0,0.45,0]);
Shape Shape301 = createNode("Shape");
Shape301.DEF = "pressure";
Appearance Appearance302 = createNode("Appearance");
Material Material303 = createNode("Material");
Material303.DEF = "pressureColor";
Material303.ambientIntensity = 0.4;
Material303.diffuseColor = new SFColor(new float[0.91,0.91,0.91]);
Material303.shininess = 0.16;
Material303.specularColor = new SFColor(new float[0.91,0.9,0.91]);
Appearance302.material = Material303;

Shape301.appearance = Appearance302;

Cylinder Cylinder304 = createNode("Cylinder");
Cylinder304.height = 0.1;
Cylinder304.radius = 0.015;
Shape301.geometry = Cylinder304;

Transform300.children = new MFNode();

Transform300.children[0] = Shape301;

Transform299.children = new MFNode();

Transform299.children[0] = Transform300;

Transform Transform305 = createNode("Transform");
Transform305.translation = new SFVec3f(new float[0,0.5,0]);
Shape Shape306 = createNode("Shape");
Shape306.DEF = "pressureTop";
Appearance Appearance307 = createNode("Appearance");
Material Material308 = createNode("Material");
Material308.DEF = "top";
Material308.diffuseColor = new SFColor(new float[0,0,0]);
Appearance307.material = Material308;

Shape306.appearance = Appearance307;

Cylinder Cylinder309 = createNode("Cylinder");
Cylinder309.height = 0.02;
Cylinder309.radius = 0.025;
Shape306.geometry = Cylinder309;

Transform305.children = new MFNode();

Transform305.children[0] = Shape306;

Transform299.children[1] = Transform305;

Transform Transform310 = createNode("Transform");
Transform310.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform310.translation = new SFVec3f(new float[-0.028,0.462,0]);
Transform Transform311 = createNode("Transform");
Shape Shape312 = createNode("Shape");
Shape312.DEF = "connectorToRegulator";
Appearance Appearance313 = createNode("Appearance");
Material Material314 = createNode("Material");
Material314.USE = "pressureColor";
Appearance313.material = Material314;

Shape312.appearance = Appearance313;

Cylinder Cylinder315 = createNode("Cylinder");
Cylinder315.height = 0.03;
Cylinder315.radius = 0.01;
Shape312.geometry = Cylinder315;

Transform311.children = new MFNode();

Transform311.children[0] = Shape312;

Transform310.children = new MFNode();

Transform310.children[0] = Transform311;

Transform Transform316 = createNode("Transform");
Transform316.translation = new SFVec3f(new float[0,0.02,0]);
Shape Shape317 = createNode("Shape");
Shape317.DEF = "connectorToRegulatorTop";
Appearance Appearance318 = createNode("Appearance");
Material Material319 = createNode("Material");
Material319.USE = "top";
Appearance318.material = Material319;

Shape317.appearance = Appearance318;

Cylinder Cylinder320 = createNode("Cylinder");
Cylinder320.height = 0.02;
Cylinder320.radius = 0.02;
Shape317.geometry = Cylinder320;

Transform316.children = new MFNode();

Transform316.children[0] = Shape317;

Transform310.children[1] = Transform316;

Transform299.children[2] = Transform310;

Group298.children = new MFNode();

Group298.children[0] = Transform299;

Transform282.children[3] = Group298;

Transform Transform321 = createNode("Transform");
Transform321.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape322 = createNode("Shape");
Shape322.DEF = "tankHoldBelt";
Appearance Appearance323 = createNode("Appearance");
Material Material324 = createNode("Material");
Material324.ambientIntensity = 0.3;
Material324.diffuseColor = new SFColor(new float[0,0,0]);
Appearance323.material = Material324;

Shape322.appearance = Appearance323;

Cylinder Cylinder325 = createNode("Cylinder");
Cylinder325.height = 0.1;
Cylinder325.radius = 0.115;
Shape322.geometry = Cylinder325;

Transform321.children = new MFNode();

Transform321.children[0] = Shape322;

Transform282.children[4] = Transform321;

fieldValue213.children[2] = Transform282;

ProtoInstance211.fieldValue[1] = fieldValue213;

fieldValue210.children = new MFNode();

fieldValue210.children[0] = ProtoInstance211;

ProtoInstance ProtoInstance326 = createNode("ProtoInstance");
ProtoInstance326.name = "Joint";
ProtoInstance326.DEF = "hanim_l_shoulder";
fieldValue fieldValue327 = createNode("fieldValue");
fieldValue327.name = "name";
fieldValue327.value = "l_shoulder";
ProtoInstance326.fieldValue = new MFNode();

ProtoInstance326.fieldValue[0] = fieldValue327;

fieldValue fieldValue328 = createNode("fieldValue");
fieldValue328.name = "center";
fieldValue328.value = "0.167 1.36 -0.0518";
ProtoInstance326.fieldValue[1] = fieldValue328;

fieldValue fieldValue329 = createNode("fieldValue");
fieldValue329.name = "children";
ProtoInstance ProtoInstance330 = createNode("ProtoInstance");
ProtoInstance330.name = "Segment";
ProtoInstance330.DEF = "hanim_l_upperarm";
fieldValue fieldValue331 = createNode("fieldValue");
fieldValue331.name = "name";
fieldValue331.value = "l_upperarm";
ProtoInstance330.fieldValue = new MFNode();

ProtoInstance330.fieldValue[0] = fieldValue331;

fieldValue fieldValue332 = createNode("fieldValue");
fieldValue332.name = "children";
Transform Transform333 = createNode("Transform");
Transform333.DEF = "l_upperarm_adjust";
Transform333.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform333.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform333.translation = new SFVec3f(new float[0,0.0004203,-0.01665]);
Shape Shape334 = createNode("Shape");
Appearance Appearance335 = createNode("Appearance");
Material Material336 = createNode("Material");
Material336.USE = "WetShirtColor";
Appearance335.material = Material336;

Shape334.appearance = Appearance335;

IndexedFaceSet IndexedFaceSet337 = createNode("IndexedFaceSet");
IndexedFaceSet337.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
IndexedFaceSet337.creaseAngle = 1.65;
Coordinate Coordinate338 = createNode("Coordinate");
Coordinate338.point = new MFVec3f(new float[0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
IndexedFaceSet337.coord = Coordinate338;

Shape334.geometry = IndexedFaceSet337;

Transform333.children = new MFNode();

Transform333.children[0] = Shape334;

fieldValue332.children = new MFNode();

fieldValue332.children[0] = Transform333;

ProtoInstance330.fieldValue[1] = fieldValue332;

fieldValue329.children = new MFNode();

fieldValue329.children[0] = ProtoInstance330;

ProtoInstance ProtoInstance339 = createNode("ProtoInstance");
ProtoInstance339.name = "Joint";
ProtoInstance339.DEF = "hanim_l_elbow";
fieldValue fieldValue340 = createNode("fieldValue");
fieldValue340.name = "name";
fieldValue340.value = "l_elbow";
ProtoInstance339.fieldValue = new MFNode();

ProtoInstance339.fieldValue[0] = fieldValue340;

fieldValue fieldValue341 = createNode("fieldValue");
fieldValue341.name = "center";
fieldValue341.value = "0.196 1.07 -0.0518";
ProtoInstance339.fieldValue[1] = fieldValue341;

fieldValue fieldValue342 = createNode("fieldValue");
fieldValue342.name = "children";
ProtoInstance ProtoInstance343 = createNode("ProtoInstance");
ProtoInstance343.name = "Segment";
ProtoInstance343.DEF = "hanim_l_forearm";
fieldValue fieldValue344 = createNode("fieldValue");
fieldValue344.name = "name";
fieldValue344.value = "l_forearm";
ProtoInstance343.fieldValue = new MFNode();

ProtoInstance343.fieldValue[0] = fieldValue344;

fieldValue fieldValue345 = createNode("fieldValue");
fieldValue345.name = "children";
Transform Transform346 = createNode("Transform");
Transform346.DEF = "l_forearm_adjust";
Transform346.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform346.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform346.translation = new SFVec3f(new float[0,0.003724,-0.0236]);
Shape Shape347 = createNode("Shape");
Appearance Appearance348 = createNode("Appearance");
Material Material349 = createNode("Material");
Material349.USE = "WetShirtColor";
Appearance348.material = Material349;

Shape347.appearance = Appearance348;

IndexedFaceSet IndexedFaceSet350 = createNode("IndexedFaceSet");
IndexedFaceSet350.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
IndexedFaceSet350.creaseAngle = 1.75;
Coordinate Coordinate351 = createNode("Coordinate");
Coordinate351.point = new MFVec3f(new float[0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
IndexedFaceSet350.coord = Coordinate351;

Shape347.geometry = IndexedFaceSet350;

Transform346.children = new MFNode();

Transform346.children[0] = Shape347;

fieldValue345.children = new MFNode();

fieldValue345.children[0] = Transform346;

ProtoInstance343.fieldValue[1] = fieldValue345;

fieldValue342.children = new MFNode();

fieldValue342.children[0] = ProtoInstance343;

ProtoInstance ProtoInstance352 = createNode("ProtoInstance");
ProtoInstance352.name = "Joint";
ProtoInstance352.DEF = "hanim_l_wrist";
fieldValue fieldValue353 = createNode("fieldValue");
fieldValue353.name = "name";
fieldValue353.value = "l_wrist";
ProtoInstance352.fieldValue = new MFNode();

ProtoInstance352.fieldValue[0] = fieldValue353;

fieldValue fieldValue354 = createNode("fieldValue");
fieldValue354.name = "center";
fieldValue354.value = "0.213 0.811 -0.0338";
ProtoInstance352.fieldValue[1] = fieldValue354;

fieldValue fieldValue355 = createNode("fieldValue");
fieldValue355.name = "children";
ProtoInstance ProtoInstance356 = createNode("ProtoInstance");
ProtoInstance356.name = "Segment";
ProtoInstance356.DEF = "hanim_l_hand";
fieldValue fieldValue357 = createNode("fieldValue");
fieldValue357.name = "name";
fieldValue357.value = "l_hand";
ProtoInstance356.fieldValue = new MFNode();

ProtoInstance356.fieldValue[0] = fieldValue357;

fieldValue fieldValue358 = createNode("fieldValue");
fieldValue358.name = "children";
Transform Transform359 = createNode("Transform");
Transform359.DEF = "l_hand_adjust";
Transform359.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform359.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform359.translation = new SFVec3f(new float[0,0.005142,-0.008662]);
Shape Shape360 = createNode("Shape");
Appearance Appearance361 = createNode("Appearance");
Material Material362 = createNode("Material");
Material362.DEF = "Skin_Color";
Material362.ambientIntensity = 0.25;
Material362.diffuseColor = new SFColor(new float[0.749,0.601,0.462]);
Appearance361.material = Material362;

Shape360.appearance = Appearance361;

IndexedFaceSet IndexedFaceSet363 = createNode("IndexedFaceSet");
IndexedFaceSet363.coordIndex = new MFInt32(new int[2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
IndexedFaceSet363.creaseAngle = 1.48;
Coordinate Coordinate364 = createNode("Coordinate");
Coordinate364.point = new MFVec3f(new float[0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
IndexedFaceSet363.coord = Coordinate364;

Shape360.geometry = IndexedFaceSet363;

Transform359.children = new MFNode();

Transform359.children[0] = Shape360;

fieldValue358.children = new MFNode();

fieldValue358.children[0] = Transform359;

ProtoInstance356.fieldValue[1] = fieldValue358;

fieldValue355.children = new MFNode();

fieldValue355.children[0] = ProtoInstance356;

ProtoInstance352.fieldValue[2] = fieldValue355;

fieldValue342.children[1] = ProtoInstance352;

ProtoInstance339.fieldValue[2] = fieldValue342;

fieldValue329.children[1] = ProtoInstance339;

ProtoInstance326.fieldValue[2] = fieldValue329;

fieldValue210.children[1] = ProtoInstance326;

ProtoInstance ProtoInstance365 = createNode("ProtoInstance");
ProtoInstance365.name = "Joint";
ProtoInstance365.DEF = "hanim_r_shoulder";
fieldValue fieldValue366 = createNode("fieldValue");
fieldValue366.name = "name";
fieldValue366.value = "r_shoulder";
ProtoInstance365.fieldValue = new MFNode();

ProtoInstance365.fieldValue[0] = fieldValue366;

fieldValue fieldValue367 = createNode("fieldValue");
fieldValue367.name = "center";
fieldValue367.value = "-0.167 1.36 -0.0458";
ProtoInstance365.fieldValue[1] = fieldValue367;

fieldValue fieldValue368 = createNode("fieldValue");
fieldValue368.name = "children";
ProtoInstance ProtoInstance369 = createNode("ProtoInstance");
ProtoInstance369.name = "Segment";
ProtoInstance369.DEF = "hanim_r_upperarm";
fieldValue fieldValue370 = createNode("fieldValue");
fieldValue370.name = "name";
fieldValue370.value = "r_upperarm";
ProtoInstance369.fieldValue = new MFNode();

ProtoInstance369.fieldValue[0] = fieldValue370;

fieldValue fieldValue371 = createNode("fieldValue");
fieldValue371.name = "children";
Transform Transform372 = createNode("Transform");
Transform372.DEF = "r_upperarm_adjust";
Transform372.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform372.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform372.translation = new SFVec3f(new float[0,0.000589,-0.01169]);
Shape Shape373 = createNode("Shape");
Appearance Appearance374 = createNode("Appearance");
Material Material375 = createNode("Material");
Material375.USE = "WetShirtColor";
Appearance374.material = Material375;

Shape373.appearance = Appearance374;

IndexedFaceSet IndexedFaceSet376 = createNode("IndexedFaceSet");
IndexedFaceSet376.coordIndex = new MFInt32(new int[14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
IndexedFaceSet376.creaseAngle = 1.53;
Coordinate Coordinate377 = createNode("Coordinate");
Coordinate377.point = new MFVec3f(new float[-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
IndexedFaceSet376.coord = Coordinate377;

Shape373.geometry = IndexedFaceSet376;

Transform372.children = new MFNode();

Transform372.children[0] = Shape373;

fieldValue371.children = new MFNode();

fieldValue371.children[0] = Transform372;

ProtoInstance369.fieldValue[1] = fieldValue371;

fieldValue368.children = new MFNode();

fieldValue368.children[0] = ProtoInstance369;

ProtoInstance ProtoInstance378 = createNode("ProtoInstance");
ProtoInstance378.name = "Joint";
ProtoInstance378.DEF = "hanim_r_elbow";
fieldValue fieldValue379 = createNode("fieldValue");
fieldValue379.name = "name";
fieldValue379.value = "r_elbow";
ProtoInstance378.fieldValue = new MFNode();

ProtoInstance378.fieldValue[0] = fieldValue379;

fieldValue fieldValue380 = createNode("fieldValue");
fieldValue380.name = "center";
fieldValue380.value = "-0.192 1.07 -0.0498";
ProtoInstance378.fieldValue[1] = fieldValue380;

fieldValue fieldValue381 = createNode("fieldValue");
fieldValue381.name = "children";
ProtoInstance ProtoInstance382 = createNode("ProtoInstance");
ProtoInstance382.name = "Segment";
ProtoInstance382.DEF = "hanim_r_forearm";
fieldValue fieldValue383 = createNode("fieldValue");
fieldValue383.name = "name";
fieldValue383.value = "r_forearm";
ProtoInstance382.fieldValue = new MFNode();

ProtoInstance382.fieldValue[0] = fieldValue383;

fieldValue fieldValue384 = createNode("fieldValue");
fieldValue384.name = "children";
Transform Transform385 = createNode("Transform");
Transform385.DEF = "r_forearm_adjust";
Transform385.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform385.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform385.translation = new SFVec3f(new float[0,0.003466,-0.01065]);
Shape Shape386 = createNode("Shape");
Appearance Appearance387 = createNode("Appearance");
Material Material388 = createNode("Material");
Material388.USE = "WetShirtColor";
Appearance387.material = Material388;

Shape386.appearance = Appearance387;

IndexedFaceSet IndexedFaceSet389 = createNode("IndexedFaceSet");
IndexedFaceSet389.coordIndex = new MFInt32(new int[20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
IndexedFaceSet389.creaseAngle = 1.73;
Coordinate Coordinate390 = createNode("Coordinate");
Coordinate390.point = new MFVec3f(new float[-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
IndexedFaceSet389.coord = Coordinate390;

Shape386.geometry = IndexedFaceSet389;

Transform385.children = new MFNode();

Transform385.children[0] = Shape386;

fieldValue384.children = new MFNode();

fieldValue384.children[0] = Transform385;

ProtoInstance382.fieldValue[1] = fieldValue384;

fieldValue381.children = new MFNode();

fieldValue381.children[0] = ProtoInstance382;

ProtoInstance ProtoInstance391 = createNode("ProtoInstance");
ProtoInstance391.name = "Joint";
ProtoInstance391.DEF = "hanim_r_wrist";
fieldValue fieldValue392 = createNode("fieldValue");
fieldValue392.name = "name";
fieldValue392.value = "r_wrist";
ProtoInstance391.fieldValue = new MFNode();

ProtoInstance391.fieldValue[0] = fieldValue392;

fieldValue fieldValue393 = createNode("fieldValue");
fieldValue393.name = "center";
fieldValue393.value = "-0.217 0.811 -0.0338";
ProtoInstance391.fieldValue[1] = fieldValue393;

fieldValue fieldValue394 = createNode("fieldValue");
fieldValue394.name = "children";
ProtoInstance ProtoInstance395 = createNode("ProtoInstance");
ProtoInstance395.name = "Segment";
ProtoInstance395.DEF = "hanim_r_hand";
fieldValue fieldValue396 = createNode("fieldValue");
fieldValue396.name = "name";
fieldValue396.value = "r_hand";
ProtoInstance395.fieldValue = new MFNode();

ProtoInstance395.fieldValue[0] = fieldValue396;

fieldValue fieldValue397 = createNode("fieldValue");
fieldValue397.name = "children";
Transform Transform398 = createNode("Transform");
Transform398.DEF = "r_hand_adjust";
Transform398.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform398.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
Shape Shape399 = createNode("Shape");
Appearance Appearance400 = createNode("Appearance");
Material Material401 = createNode("Material");
Material401.USE = "Skin_Color";
Appearance400.material = Material401;

Shape399.appearance = Appearance400;

IndexedFaceSet IndexedFaceSet402 = createNode("IndexedFaceSet");
IndexedFaceSet402.coordIndex = new MFInt32(new int[10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
IndexedFaceSet402.creaseAngle = 1.57;
Coordinate Coordinate403 = createNode("Coordinate");
Coordinate403.point = new MFVec3f(new float[-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
IndexedFaceSet402.coord = Coordinate403;

Shape399.geometry = IndexedFaceSet402;

Transform398.children = new MFNode();

Transform398.children[0] = Shape399;

fieldValue397.children = new MFNode();

fieldValue397.children[0] = Transform398;

ProtoInstance395.fieldValue[1] = fieldValue397;

fieldValue394.children = new MFNode();

fieldValue394.children[0] = ProtoInstance395;

ProtoInstance391.fieldValue[2] = fieldValue394;

fieldValue381.children[1] = ProtoInstance391;

ProtoInstance378.fieldValue[2] = fieldValue381;

fieldValue368.children[1] = ProtoInstance378;

ProtoInstance365.fieldValue[2] = fieldValue368;

fieldValue210.children[2] = ProtoInstance365;

ProtoInstance ProtoInstance404 = createNode("ProtoInstance");
ProtoInstance404.name = "Joint";
ProtoInstance404.DEF = "hanim_vc4";
fieldValue fieldValue405 = createNode("fieldValue");
fieldValue405.name = "name";
fieldValue405.value = "vc4";
ProtoInstance404.fieldValue = new MFNode();

ProtoInstance404.fieldValue[0] = fieldValue405;

fieldValue fieldValue406 = createNode("fieldValue");
fieldValue406.name = "center";
fieldValue406.value = "0 1.43 -0.0458";
ProtoInstance404.fieldValue[1] = fieldValue406;

fieldValue fieldValue407 = createNode("fieldValue");
fieldValue407.name = "children";
ProtoInstance ProtoInstance408 = createNode("ProtoInstance");
ProtoInstance408.name = "Segment";
ProtoInstance408.DEF = "hanim_c4";
fieldValue fieldValue409 = createNode("fieldValue");
fieldValue409.name = "name";
fieldValue409.value = "c4";
ProtoInstance408.fieldValue = new MFNode();

ProtoInstance408.fieldValue[0] = fieldValue409;

fieldValue fieldValue410 = createNode("fieldValue");
fieldValue410.name = "children";
Shape Shape411 = createNode("Shape");
Appearance Appearance412 = createNode("Appearance");
Material Material413 = createNode("Material");
Material413.USE = "WetShirtColor";
Appearance412.material = Material413;

Shape411.appearance = Appearance412;

IndexedFaceSet IndexedFaceSet414 = createNode("IndexedFaceSet");
IndexedFaceSet414.DEF = "neck";
IndexedFaceSet414.coordIndex = new MFInt32(new int[6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
IndexedFaceSet414.creaseAngle = 1.91;
Coordinate Coordinate415 = createNode("Coordinate");
Coordinate415.point = new MFVec3f(new float[0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
IndexedFaceSet414.coord = Coordinate415;

Shape411.geometry = IndexedFaceSet414;

fieldValue410.children = new MFNode();

fieldValue410.children[0] = Shape411;

ProtoInstance408.fieldValue[1] = fieldValue410;

fieldValue407.children = new MFNode();

fieldValue407.children[0] = ProtoInstance408;

ProtoInstance ProtoInstance416 = createNode("ProtoInstance");
ProtoInstance416.name = "Joint";
ProtoInstance416.DEF = "hanim_skullbase";
fieldValue fieldValue417 = createNode("fieldValue");
fieldValue417.name = "name";
fieldValue417.value = "skullbase";
ProtoInstance416.fieldValue = new MFNode();

ProtoInstance416.fieldValue[0] = fieldValue417;

fieldValue fieldValue418 = createNode("fieldValue");
fieldValue418.name = "center";
fieldValue418.value = "0 1.54 -0.0409";
ProtoInstance416.fieldValue[1] = fieldValue418;

fieldValue fieldValue419 = createNode("fieldValue");
fieldValue419.name = "children";
ProtoInstance ProtoInstance420 = createNode("ProtoInstance");
ProtoInstance420.name = "Segment";
ProtoInstance420.DEF = "hanim_skull";
fieldValue fieldValue421 = createNode("fieldValue");
fieldValue421.name = "name";
fieldValue421.value = "skull";
ProtoInstance420.fieldValue = new MFNode();

ProtoInstance420.fieldValue[0] = fieldValue421;

fieldValue fieldValue422 = createNode("fieldValue");
fieldValue422.name = "children";
Shape Shape423 = createNode("Shape");
Appearance Appearance424 = createNode("Appearance");
Material Material425 = createNode("Material");
Material425.USE = "Skin_Color";
Appearance424.material = Material425;

Shape423.appearance = Appearance424;

IndexedFaceSet IndexedFaceSet426 = createNode("IndexedFaceSet");
IndexedFaceSet426.DEF = "headIFS";
IndexedFaceSet426.colorIndex = new MFInt32(new int[1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1]);
IndexedFaceSet426.coordIndex = new MFInt32(new int[48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
IndexedFaceSet426.creaseAngle = 0.7854;
Coordinate Coordinate427 = createNode("Coordinate");
Coordinate427.DEF = "Face";
Coordinate427.point = new MFVec3f(new float[0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
IndexedFaceSet426.coord = Coordinate427;

Color Color428 = createNode("Color");
Color428.color = new MFColor(new float[0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902,0,0,0.502]);
IndexedFaceSet426.color = Color428;

Shape423.geometry = IndexedFaceSet426;

fieldValue422.children = new MFNode();

fieldValue422.children[0] = Shape423;

Transform Transform429 = createNode("Transform");
Transform429.DEF = "maskAndSnorkel";
Transform429.translation = new SFVec3f(new float[0,1.505,0.05]);
Transform Transform430 = createNode("Transform");
Shape Shape431 = createNode("Shape");
Shape431.DEF = "maskFrame";
Appearance Appearance432 = createNode("Appearance");
Material Material433 = createNode("Material");
Material433.DEF = "frameColor";
Material433.diffuseColor = new SFColor(new float[0,0,0]);
Appearance432.material = Material433;

Shape431.appearance = Appearance432;

IndexedFaceSet IndexedFaceSet434 = createNode("IndexedFaceSet");
IndexedFaceSet434.coordIndex = new MFInt32(new int[0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
IndexedFaceSet434.creaseAngle = 1.45;
IndexedFaceSet434.solid = False;
Coordinate Coordinate435 = createNode("Coordinate");
Coordinate435.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet434.coord = Coordinate435;

Shape431.geometry = IndexedFaceSet434;

Transform430.children = new MFNode();

Transform430.children[0] = Shape431;

Transform429.children = new MFNode();

Transform429.children[0] = Transform430;

Transform Transform436 = createNode("Transform");
Transform436.DEF = "snorkelHoldRing";
Transform436.translation = new SFVec3f(new float[0.075,0.075,-0.02]);
Shape Shape437 = createNode("Shape");
Appearance Appearance438 = createNode("Appearance");
Material Material439 = createNode("Material");
Material439.USE = "frameColor";
Appearance438.material = Material439;

Shape437.appearance = Appearance438;

Cylinder Cylinder440 = createNode("Cylinder");
Cylinder440.height = 0.003;
Cylinder440.radius = 0.015;
Shape437.geometry = Cylinder440;

Transform436.children = new MFNode();

Transform436.children[0] = Shape437;

Transform429.children[1] = Transform436;

Group Group441 = createNode("Group");
Group441.DEF = "snorkel";
Transform Transform442 = createNode("Transform");
Transform442.translation = new SFVec3f(new float[0,-0.02,0]);
Transform Transform443 = createNode("Transform");
Transform443.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform443.translation = new SFVec3f(new float[0.035,-0.07,-0.02]);
Shape Shape444 = createNode("Shape");
Appearance Appearance445 = createNode("Appearance");
Material Material446 = createNode("Material");
Material446.DEF = "snorkelTube";
Material446.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material446.transparency = 0.4;
Appearance445.material = Material446;

Shape444.appearance = Appearance445;

Extrusion Extrusion447 = createNode("Extrusion");
Extrusion447.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion447.spine = new MFVec3f(new float[-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03]);
Shape444.geometry = Extrusion447;

Transform443.children = new MFNode();

Transform443.children[0] = Shape444;

Transform442.children = new MFNode();

Transform442.children[0] = Transform443;

Transform Transform448 = createNode("Transform");
Transform448.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform448.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform448.translation = new SFVec3f(new float[0.01,-0.04,-0.02]);
Shape Shape449 = createNode("Shape");
Appearance Appearance450 = createNode("Appearance");
Material Material451 = createNode("Material");
Material451.DEF = "Mouthpiece";
Material451.diffuseColor = new SFColor(new float[0.678,1,0.8]);
Material451.transparency = 0.4;
Appearance450.material = Material451;

Shape449.appearance = Appearance450;

Extrusion Extrusion452 = createNode("Extrusion");
Extrusion452.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion452.spine = new MFVec3f(new float[-0.01,-0.03,0,0,0,0,0.02,0.01,0]);
Shape449.geometry = Extrusion452;

Transform448.children = new MFNode();

Transform448.children[0] = Shape449;

Transform442.children[1] = Transform448;

Transform Transform453 = createNode("Transform");
Transform453.rotation = new SFRotation(new float[0,0,1,-0.85]);
Transform453.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform453.translation = new SFVec3f(new float[0.005,-0.01,-0.02]);
Shape Shape454 = createNode("Shape");
Appearance Appearance455 = createNode("Appearance");
Material Material456 = createNode("Material");
Material456.USE = "Mouthpiece";
Appearance455.material = Material456;

Shape454.appearance = Appearance455;

Extrusion Extrusion457 = createNode("Extrusion");
Extrusion457.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion457.spine = new MFVec3f(new float[-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0]);
Shape454.geometry = Extrusion457;

Transform453.children = new MFNode();

Transform453.children[0] = Shape454;

Transform442.children[2] = Transform453;

Group441.children = new MFNode();

Group441.children[0] = Transform442;

Transform429.children[2] = Group441;

Transform Transform458 = createNode("Transform");
Shape Shape459 = createNode("Shape");
Shape459.DEF = "maskLensR";
Appearance Appearance460 = createNode("Appearance");
Material Material461 = createNode("Material");
Material461.DEF = "plastic";
Material461.diffuseColor = new SFColor(new float[0.941,0.973,1]);
Material461.transparency = 0.8;
Appearance460.material = Material461;

Shape459.appearance = Appearance460;

IndexedFaceSet IndexedFaceSet462 = createNode("IndexedFaceSet");
IndexedFaceSet462.coordIndex = new MFInt32(new int[12,1314,15,16,17,18,12,-1]);
IndexedFaceSet462.creaseAngle = 1.45;
IndexedFaceSet462.solid = False;
Coordinate Coordinate463 = createNode("Coordinate");
Coordinate463.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet462.coord = Coordinate463;

Shape459.geometry = IndexedFaceSet462;

Transform458.children = new MFNode();

Transform458.children[0] = Shape459;

Transform429.children[3] = Transform458;

Transform Transform464 = createNode("Transform");
Shape Shape465 = createNode("Shape");
Shape465.DEF = "maskLensL";
Appearance Appearance466 = createNode("Appearance");
Material Material467 = createNode("Material");
Material467.USE = "plastic";
Appearance466.material = Material467;

Shape465.appearance = Appearance466;

IndexedFaceSet IndexedFaceSet468 = createNode("IndexedFaceSet");
IndexedFaceSet468.coordIndex = new MFInt32(new int[19,20,21,22,23,24,25,19,-1]);
IndexedFaceSet468.creaseAngle = 1.45;
IndexedFaceSet468.solid = False;
Coordinate Coordinate469 = createNode("Coordinate");
Coordinate469.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet468.coord = Coordinate469;

Shape465.geometry = IndexedFaceSet468;

Transform464.children = new MFNode();

Transform464.children[0] = Shape465;

Transform429.children[4] = Transform464;

Transform Transform470 = createNode("Transform");
Shape Shape471 = createNode("Shape");
Shape471.DEF = "nose";
Appearance Appearance472 = createNode("Appearance");
Material Material473 = createNode("Material");
Material473.DEF = "plasticFit";
Material473.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material473.transparency = 0.7;
Appearance472.material = Material473;

Shape471.appearance = Appearance472;

IndexedFaceSet IndexedFaceSet474 = createNode("IndexedFaceSet");
IndexedFaceSet474.coordIndex = new MFInt32(new int[0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
IndexedFaceSet474.creaseAngle = 1.45;
IndexedFaceSet474.solid = False;
Coordinate Coordinate475 = createNode("Coordinate");
Coordinate475.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet474.coord = Coordinate475;

Shape471.geometry = IndexedFaceSet474;

Transform470.children = new MFNode();

Transform470.children[0] = Shape471;

Transform429.children[5] = Transform470;

Transform Transform476 = createNode("Transform");
Shape Shape477 = createNode("Shape");
Shape477.DEF = "faceFit";
Appearance Appearance478 = createNode("Appearance");
Material Material479 = createNode("Material");
Material479.USE = "plasticFit";
Appearance478.material = Material479;

Shape477.appearance = Appearance478;

IndexedFaceSet IndexedFaceSet480 = createNode("IndexedFaceSet");
IndexedFaceSet480.coordIndex = new MFInt32(new int[1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
IndexedFaceSet480.creaseAngle = 1.45;
IndexedFaceSet480.solid = False;
Coordinate Coordinate481 = createNode("Coordinate");
Coordinate481.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet480.coord = Coordinate481;

Shape477.geometry = IndexedFaceSet480;

Transform476.children = new MFNode();

Transform476.children[0] = Shape477;

Transform429.children[6] = Transform476;

Transform Transform482 = createNode("Transform");
Shape Shape483 = createNode("Shape");
Shape483.DEF = "belt";
Appearance Appearance484 = createNode("Appearance");
Material Material485 = createNode("Material");
Material485.USE = "plastic";
Appearance484.material = Material485;

Shape483.appearance = Appearance484;

IndexedFaceSet IndexedFaceSet486 = createNode("IndexedFaceSet");
IndexedFaceSet486.coordIndex = new MFInt32(new int[3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
IndexedFaceSet486.creaseAngle = 1.45;
IndexedFaceSet486.solid = False;
Coordinate Coordinate487 = createNode("Coordinate");
Coordinate487.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175]);
IndexedFaceSet486.coord = Coordinate487;

Shape483.geometry = IndexedFaceSet486;

Transform482.children = new MFNode();

Transform482.children[0] = Shape483;

Transform429.children[7] = Transform482;

fieldValue422.children[1] = Transform429;

Transform Transform488 = createNode("Transform");
Transform488.DEF = "mouthpiece";
Transform488.rotation = new SFRotation(new float[0.86,-0.58,-0.58,2.09]);
Transform488.translation = new SFVec3f(new float[0,1.508,0.05]);
Transform Transform489 = createNode("Transform");
Transform489.translation = new SFVec3f(new float[0,0.0018,0]);
Shape Shape490 = createNode("Shape");
Appearance Appearance491 = createNode("Appearance");
Material Material492 = createNode("Material");
Material492.DEF = "gray";
Material492.ambientIntensity = 0.3;
Material492.diffuseColor = new SFColor(new float[0.9,0.9,0.89]);
Material492.shininess = 0.1;
Material492.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance491.material = Material492;

Shape490.appearance = Appearance491;

Cylinder Cylinder493 = createNode("Cylinder");
Cylinder493.height = 0.006;
Cylinder493.radius = 0.015;
Shape490.geometry = Cylinder493;

Transform489.children = new MFNode();

Transform489.children[0] = Shape490;

Transform488.children = new MFNode();

Transform488.children[0] = Transform489;

Transform Transform494 = createNode("Transform");
Shape Shape495 = createNode("Shape");
Appearance Appearance496 = createNode("Appearance");
Material Material497 = createNode("Material");
Material497.DEF = "black";
Material497.diffuseColor = new SFColor(new float[0,0,0]);
Appearance496.material = Material497;

Shape495.appearance = Appearance496;

Cone Cone498 = createNode("Cone");
Cone498.bottomRadius = 0.03;
Cone498.height = 0.01;
Shape495.geometry = Cone498;

Transform494.children = new MFNode();

Transform494.children[0] = Shape495;

Transform488.children[1] = Transform494;

Transform Transform499 = createNode("Transform");
Transform499.translation = new SFVec3f(new float[0,-0.015,0]);
Shape Shape500 = createNode("Shape");
Appearance Appearance501 = createNode("Appearance");
Material Material502 = createNode("Material");
Material502.USE = "black";
Appearance501.material = Material502;

Shape500.appearance = Appearance501;

Cylinder Cylinder503 = createNode("Cylinder");
Cylinder503.height = 0.02;
Cylinder503.radius = 0.03;
Shape500.geometry = Cylinder503;

Transform499.children = new MFNode();

Transform499.children[0] = Shape500;

Transform488.children[2] = Transform499;

Transform Transform504 = createNode("Transform");
Transform504.translation = new SFVec3f(new float[0,-0.025,0]);
Shape Shape505 = createNode("Shape");
Appearance Appearance506 = createNode("Appearance");
Material Material507 = createNode("Material");
Material507.USE = "black";
Appearance506.material = Material507;

Shape505.appearance = Appearance506;

Cylinder Cylinder508 = createNode("Cylinder");
Cylinder508.height = 0.02;
Cylinder508.radius = 0.015;
Shape505.geometry = Cylinder508;

Transform504.children = new MFNode();

Transform504.children[0] = Shape505;

Transform488.children[3] = Transform504;

Transform Transform509 = createNode("Transform");
Transform509.rotation = new SFRotation(new float[0,0,1,0.9]);
Transform509.translation = new SFVec3f(new float[0,-0.04,0]);
Shape Shape510 = createNode("Shape");
Shape510.DEF = "mouthpiecePlastic";
Appearance Appearance511 = createNode("Appearance");
Material Material512 = createNode("Material");
Material512.diffuseColor = new SFColor(new float[1,1,1]);
Material512.emissiveColor = new SFColor(new float[1,1,1]);
Appearance511.material = Material512;

Shape510.appearance = Appearance511;

Box Box513 = createNode("Box");
Box513.size = new SFVec3f(new float[0.002,0.03,0.018]);
Shape510.geometry = Box513;

Transform509.children = new MFNode();

Transform509.children[0] = Shape510;

Transform488.children[4] = Transform509;

Transform Transform514 = createNode("Transform");
Transform514.rotation = new SFRotation(new float[0,0,1,-0.9]);
Transform514.translation = new SFVec3f(new float[0,-0.04,0]);
Shape Shape515 = createNode("Shape");
Shape515.USE = "mouthpiecePlastic";
Transform514.children = new MFNode();

Transform514.children[0] = Shape515;

Transform488.children[5] = Transform514;

Transform Transform516 = createNode("Transform");
Transform516.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform516.translation = new SFVec3f(new float[0,-0.015,0.03]);
Shape Shape517 = createNode("Shape");
Appearance Appearance518 = createNode("Appearance");
Material Material519 = createNode("Material");
Material519.USE = "gray";
Appearance518.material = Material519;

Shape517.appearance = Appearance518;

Cylinder Cylinder520 = createNode("Cylinder");
Cylinder520.height = 0.02;
Cylinder520.radius = 0.0075;
Shape517.geometry = Cylinder520;

Transform516.children = new MFNode();

Transform516.children[0] = Shape517;

Transform488.children[6] = Transform516;

//x = 0, y = 50, z = -270
Transform Transform521 = createNode("Transform");
Transform521.DEF = "airTube";
Transform521.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform521.scale = new SFVec3f(new float[0.7,0.7,0.7]);
Transform521.translation = new SFVec3f(new float[0,-0.02,0.055]);
Transform Transform522 = createNode("Transform");
Transform522.rotation = new SFRotation(new float[-0.21,0.21,-0.95,4.67]);
Shape Shape523 = createNode("Shape");
Appearance Appearance524 = createNode("Appearance");
Material Material525 = createNode("Material");
Material525.diffuseColor = new SFColor(new float[0,0,0]);
Appearance524.material = Material525;

Shape523.appearance = Appearance524;

Extrusion Extrusion526 = createNode("Extrusion");
Extrusion526.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion526.spine = new MFVec3f(new float[0.005,-0.03,0,-0.01,0.02,0,-0.03,0.08,0,-0.05,0.14,0,-0.08,0.19,0,-0.1,0.22,0,-0.12,0.25,0,-0.15,0.27,0,-0.18,0.28,0,-0.21,0.29,0,-0.26,0.28,0,-0.28,0.26,0,-0.305,0.23,0,-0.32,0.2,0,-0.34,0.16,0,-0.35,0.12,0,-0.37,0.04,0,-0.385,0,0,-0.39,-0.07,0]);
Shape523.geometry = Extrusion526;

Transform522.children = new MFNode();

Transform522.children[0] = Shape523;

Transform521.children = new MFNode();

Transform521.children[0] = Transform522;

Transform488.children[7] = Transform521;

fieldValue422.children[2] = Transform488;

Transform Transform527 = createNode("Transform");
Transform527.DEF = "Bubbles";
Transform527.scale = new SFVec3f(new float[0.35,0.35,0.35]);
Transform527.translation = new SFVec3f(new float[0,1.508,0.05]);
Group Group528 = createNode("Group");
Group528.DEF = "Bubble";
TimeSensor TimeSensor529 = createNode("TimeSensor");
TimeSensor529.DEF = "BubbleClock";
TimeSensor529.cycleInterval = 6;
TimeSensor529.loop = True;
Group528.children = new MFNode();

Group528.children[0] = TimeSensor529;

PositionInterpolator PositionInterpolator530 = createNode("PositionInterpolator");
PositionInterpolator530.DEF = "BubblePath1";
PositionInterpolator530.key = new MFFloat(new float[0,0.5,0.8,0.9,1]);
PositionInterpolator530.keyValue = new MFVec3f(new float[0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509]);
Group528.children[1] = PositionInterpolator530;

PositionInterpolator PositionInterpolator531 = createNode("PositionInterpolator");
PositionInterpolator531.DEF = "BubblePath2";
PositionInterpolator531.key = new MFFloat(new float[0,0.3,0.64,0.85,1]);
PositionInterpolator531.keyValue = new MFVec3f(new float[0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373]);
Group528.children[2] = PositionInterpolator531;

PositionInterpolator PositionInterpolator532 = createNode("PositionInterpolator");
PositionInterpolator532.DEF = "BubblePath3";
PositionInterpolator532.key = new MFFloat(new float[0,0.1,0.45,0.7,1]);
PositionInterpolator532.keyValue = new MFVec3f(new float[0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734]);
Group528.children[3] = PositionInterpolator532;

PositionInterpolator PositionInterpolator533 = createNode("PositionInterpolator");
PositionInterpolator533.DEF = "BubblePath4";
PositionInterpolator533.key = new MFFloat(new float[0,0.5,0.6,0.8,1]);
PositionInterpolator533.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349]);
Group528.children[4] = PositionInterpolator533;

PositionInterpolator PositionInterpolator534 = createNode("PositionInterpolator");
PositionInterpolator534.DEF = "BubblePath5";
PositionInterpolator534.key = new MFFloat(new float[0,0.25,0.35,0.65,1]);
PositionInterpolator534.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1]);
Group528.children[5] = PositionInterpolator534;

PositionInterpolator PositionInterpolator535 = createNode("PositionInterpolator");
PositionInterpolator535.DEF = "BubblePath6";
PositionInterpolator535.key = new MFFloat(new float[0,0.15,0.22235,0.55565,1]);
PositionInterpolator535.keyValue = new MFVec3f(new float[0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14]);
Group528.children[6] = PositionInterpolator535;

PositionInterpolator PositionInterpolator536 = createNode("PositionInterpolator");
PositionInterpolator536.DEF = "BubblePath7";
PositionInterpolator536.key = new MFFloat(new float[0,0.2425,0.4535,0.6775,1]);
PositionInterpolator536.keyValue = new MFVec3f(new float[0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12]);
Group528.children[7] = PositionInterpolator536;

PositionInterpolator PositionInterpolator537 = createNode("PositionInterpolator");
PositionInterpolator537.DEF = "BubblePath8";
PositionInterpolator537.key = new MFFloat(new float[0,0.1125,0.5535,0.97865,1]);
PositionInterpolator537.keyValue = new MFVec3f(new float[0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86]);
Group528.children[8] = PositionInterpolator537;

PositionInterpolator PositionInterpolator538 = createNode("PositionInterpolator");
PositionInterpolator538.DEF = "BubblePath9";
PositionInterpolator538.key = new MFFloat(new float[0,0.0025,0.035,0.65,1]);
PositionInterpolator538.keyValue = new MFVec3f(new float[0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545]);
Group528.children[9] = PositionInterpolator538;

PositionInterpolator PositionInterpolator539 = createNode("PositionInterpolator");
PositionInterpolator539.DEF = "BubblePath10";
PositionInterpolator539.key = new MFFloat(new float[0,0.00025,0.035,0.6895,1]);
PositionInterpolator539.keyValue = new MFVec3f(new float[0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1]);
Group528.children[10] = PositionInterpolator539;

Transform Transform540 = createNode("Transform");
Transform Transform541 = createNode("Transform");
Transform541.DEF = "bubble1";
Shape Shape542 = createNode("Shape");
Appearance Appearance543 = createNode("Appearance");
Appearance543.DEF = "BubbleAppearance";
Material Material544 = createNode("Material");
Material544.diffuseColor = new SFColor(new float[1,1,1]);
Material544.transparency = 0.8;
Appearance543.material = Material544;

Shape542.appearance = Appearance543;

Sphere Sphere545 = createNode("Sphere");
Sphere545.radius = 0.025;
Shape542.geometry = Sphere545;

Transform541.children = new MFNode();

Transform541.children[0] = Shape542;

Transform540.children = new MFNode();

Transform540.children[0] = Transform541;

Transform Transform546 = createNode("Transform");
Transform546.DEF = "bubble2";
Shape Shape547 = createNode("Shape");
Appearance Appearance548 = createNode("Appearance");
Appearance548.USE = "BubbleAppearance";
Shape547.appearance = Appearance548;

Sphere Sphere549 = createNode("Sphere");
Sphere549.radius = 0.055;
Shape547.geometry = Sphere549;

Transform546.children = new MFNode();

Transform546.children[0] = Shape547;

Transform540.children[1] = Transform546;

Transform Transform550 = createNode("Transform");
Transform550.DEF = "bubble3";
Shape Shape551 = createNode("Shape");
Appearance Appearance552 = createNode("Appearance");
Appearance552.USE = "BubbleAppearance";
Shape551.appearance = Appearance552;

Sphere Sphere553 = createNode("Sphere");
Sphere553.radius = 0.065;
Shape551.geometry = Sphere553;

Transform550.children = new MFNode();

Transform550.children[0] = Shape551;

Transform540.children[2] = Transform550;

Transform Transform554 = createNode("Transform");
Transform554.DEF = "bubble4";
Shape Shape555 = createNode("Shape");
Appearance Appearance556 = createNode("Appearance");
Appearance556.USE = "BubbleAppearance";
Shape555.appearance = Appearance556;

Sphere Sphere557 = createNode("Sphere");
Sphere557.radius = 0.015;
Shape555.geometry = Sphere557;

Transform554.children = new MFNode();

Transform554.children[0] = Shape555;

Transform540.children[3] = Transform554;

Transform Transform558 = createNode("Transform");
Transform558.DEF = "bubble5";
Shape Shape559 = createNode("Shape");
Appearance Appearance560 = createNode("Appearance");
Appearance560.USE = "BubbleAppearance";
Shape559.appearance = Appearance560;

Sphere Sphere561 = createNode("Sphere");
Sphere561.radius = 0.075;
Shape559.geometry = Sphere561;

Transform558.children = new MFNode();

Transform558.children[0] = Shape559;

Transform540.children[4] = Transform558;

Transform Transform562 = createNode("Transform");
Transform562.DEF = "bubble6";
Shape Shape563 = createNode("Shape");
Appearance Appearance564 = createNode("Appearance");
Appearance564.USE = "BubbleAppearance";
Shape563.appearance = Appearance564;

Sphere Sphere565 = createNode("Sphere");
Sphere565.radius = 0.005;
Shape563.geometry = Sphere565;

Transform562.children = new MFNode();

Transform562.children[0] = Shape563;

Transform540.children[5] = Transform562;

Transform Transform566 = createNode("Transform");
Transform566.DEF = "bubble7";
Shape Shape567 = createNode("Shape");
Appearance Appearance568 = createNode("Appearance");
Appearance568.USE = "BubbleAppearance";
Shape567.appearance = Appearance568;

Sphere Sphere569 = createNode("Sphere");
Sphere569.radius = 0.035;
Shape567.geometry = Sphere569;

Transform566.children = new MFNode();

Transform566.children[0] = Shape567;

Transform540.children[6] = Transform566;

Transform Transform570 = createNode("Transform");
Transform570.DEF = "bubble8";
Shape Shape571 = createNode("Shape");
Appearance Appearance572 = createNode("Appearance");
Appearance572.USE = "BubbleAppearance";
Shape571.appearance = Appearance572;

Sphere Sphere573 = createNode("Sphere");
Sphere573.radius = 0.05;
Shape571.geometry = Sphere573;

Transform570.children = new MFNode();

Transform570.children[0] = Shape571;

Transform540.children[7] = Transform570;

Transform Transform574 = createNode("Transform");
Transform574.DEF = "bubble9";
Shape Shape575 = createNode("Shape");
Appearance Appearance576 = createNode("Appearance");
Appearance576.USE = "BubbleAppearance";
Shape575.appearance = Appearance576;

Sphere Sphere577 = createNode("Sphere");
Sphere577.radius = 0.045;
Shape575.geometry = Sphere577;

Transform574.children = new MFNode();

Transform574.children[0] = Shape575;

Transform540.children[8] = Transform574;

Transform Transform578 = createNode("Transform");
Transform578.DEF = "bubble10";
Shape Shape579 = createNode("Shape");
Appearance Appearance580 = createNode("Appearance");
Appearance580.USE = "BubbleAppearance";
Shape579.appearance = Appearance580;

Sphere Sphere581 = createNode("Sphere");
Sphere581.radius = 0.035;
Shape579.geometry = Sphere581;

Transform578.children = new MFNode();

Transform578.children[0] = Shape579;

Transform540.children[9] = Transform578;

ROUTE ROUTE582 = createNode("ROUTE");
ROUTE582.fromField = "fraction_changed";
ROUTE582.fromNode = "BubbleClock";
ROUTE582.toField = "set_fraction";
ROUTE582.toNode = "BubblePath1";
Transform540.children[10] = ROUTE582;

ROUTE ROUTE583 = createNode("ROUTE");
ROUTE583.fromField = "fraction_changed";
ROUTE583.fromNode = "BubbleClock";
ROUTE583.toField = "set_fraction";
ROUTE583.toNode = "BubblePath2";
Transform540.children[11] = ROUTE583;

ROUTE ROUTE584 = createNode("ROUTE");
ROUTE584.fromField = "fraction_changed";
ROUTE584.fromNode = "BubbleClock";
ROUTE584.toField = "set_fraction";
ROUTE584.toNode = "BubblePath3";
Transform540.children[12] = ROUTE584;

ROUTE ROUTE585 = createNode("ROUTE");
ROUTE585.fromField = "fraction_changed";
ROUTE585.fromNode = "BubbleClock";
ROUTE585.toField = "set_fraction";
ROUTE585.toNode = "BubblePath4";
Transform540.children[13] = ROUTE585;

ROUTE ROUTE586 = createNode("ROUTE");
ROUTE586.fromField = "fraction_changed";
ROUTE586.fromNode = "BubbleClock";
ROUTE586.toField = "set_fraction";
ROUTE586.toNode = "BubblePath5";
Transform540.children[14] = ROUTE586;

ROUTE ROUTE587 = createNode("ROUTE");
ROUTE587.fromField = "fraction_changed";
ROUTE587.fromNode = "BubbleClock";
ROUTE587.toField = "set_fraction";
ROUTE587.toNode = "BubblePath6";
Transform540.children[15] = ROUTE587;

ROUTE ROUTE588 = createNode("ROUTE");
ROUTE588.fromField = "fraction_changed";
ROUTE588.fromNode = "BubbleClock";
ROUTE588.toField = "set_fraction";
ROUTE588.toNode = "BubblePath7";
Transform540.children[16] = ROUTE588;

ROUTE ROUTE589 = createNode("ROUTE");
ROUTE589.fromField = "fraction_changed";
ROUTE589.fromNode = "BubbleClock";
ROUTE589.toField = "set_fraction";
ROUTE589.toNode = "BubblePath8";
Transform540.children[17] = ROUTE589;

ROUTE ROUTE590 = createNode("ROUTE");
ROUTE590.fromField = "fraction_changed";
ROUTE590.fromNode = "BubbleClock";
ROUTE590.toField = "set_fraction";
ROUTE590.toNode = "BubblePath9";
Transform540.children[18] = ROUTE590;

ROUTE ROUTE591 = createNode("ROUTE");
ROUTE591.fromField = "fraction_changed";
ROUTE591.fromNode = "BubbleClock";
ROUTE591.toField = "set_fraction";
ROUTE591.toNode = "BubblePath10";
Transform540.children[19] = ROUTE591;

ROUTE ROUTE592 = createNode("ROUTE");
ROUTE592.fromField = "value_changed";
ROUTE592.fromNode = "BubblePath1";
ROUTE592.toField = "set_translation";
ROUTE592.toNode = "bubble1";
Transform540.children[20] = ROUTE592;

ROUTE ROUTE593 = createNode("ROUTE");
ROUTE593.fromField = "value_changed";
ROUTE593.fromNode = "BubblePath2";
ROUTE593.toField = "set_translation";
ROUTE593.toNode = "bubble2";
Transform540.children[21] = ROUTE593;

ROUTE ROUTE594 = createNode("ROUTE");
ROUTE594.fromField = "value_changed";
ROUTE594.fromNode = "BubblePath3";
ROUTE594.toField = "set_translation";
ROUTE594.toNode = "bubble3";
Transform540.children[22] = ROUTE594;

ROUTE ROUTE595 = createNode("ROUTE");
ROUTE595.fromField = "value_changed";
ROUTE595.fromNode = "BubblePath4";
ROUTE595.toField = "set_translation";
ROUTE595.toNode = "bubble4";
Transform540.children[23] = ROUTE595;

ROUTE ROUTE596 = createNode("ROUTE");
ROUTE596.fromField = "value_changed";
ROUTE596.fromNode = "BubblePath5";
ROUTE596.toField = "set_translation";
ROUTE596.toNode = "bubble5";
Transform540.children[24] = ROUTE596;

ROUTE ROUTE597 = createNode("ROUTE");
ROUTE597.fromField = "value_changed";
ROUTE597.fromNode = "BubblePath6";
ROUTE597.toField = "set_translation";
ROUTE597.toNode = "bubble6";
Transform540.children[25] = ROUTE597;

ROUTE ROUTE598 = createNode("ROUTE");
ROUTE598.fromField = "value_changed";
ROUTE598.fromNode = "BubblePath7";
ROUTE598.toField = "set_translation";
ROUTE598.toNode = "bubble7";
Transform540.children[26] = ROUTE598;

ROUTE ROUTE599 = createNode("ROUTE");
ROUTE599.fromField = "value_changed";
ROUTE599.fromNode = "BubblePath8";
ROUTE599.toField = "set_translation";
ROUTE599.toNode = "bubble8";
Transform540.children[27] = ROUTE599;

ROUTE ROUTE600 = createNode("ROUTE");
ROUTE600.fromField = "value_changed";
ROUTE600.fromNode = "BubblePath9";
ROUTE600.toField = "set_translation";
ROUTE600.toNode = "bubble9";
Transform540.children[28] = ROUTE600;

ROUTE ROUTE601 = createNode("ROUTE");
ROUTE601.fromField = "value_changed";
ROUTE601.fromNode = "BubblePath10";
ROUTE601.toField = "set_translation";
ROUTE601.toNode = "bubble10";
Transform540.children[29] = ROUTE601;

Group528.children[11] = Transform540;

Transform527.children = new MFNode();

Transform527.children[0] = Group528;

fieldValue422.children[3] = Transform527;

ProtoInstance420.fieldValue[1] = fieldValue422;

fieldValue419.children = new MFNode();

fieldValue419.children[0] = ProtoInstance420;

ProtoInstance416.fieldValue[2] = fieldValue419;

fieldValue407.children[1] = ProtoInstance416;

ProtoInstance404.fieldValue[2] = fieldValue407;

fieldValue210.children[3] = ProtoInstance404;

ProtoInstance207.fieldValue[2] = fieldValue210;

fieldValue96.children[4] = ProtoInstance207;

ProtoInstance93.fieldValue[2] = fieldValue96;

fieldValue92.children = new MFNode();

fieldValue92.children[0] = ProtoInstance93;

ProtoInstance91.fieldValue = new MFNode();

ProtoInstance91.fieldValue[0] = fieldValue92;

Transform89.children[1] = ProtoInstance91;

Transform88.children = new MFNode();

Transform88.children[0] = Transform89;

Group87.children = new MFNode();

Group87.children[0] = Transform88;

Group81.children[5] = Group87;

LOD80.children = new MFNode();

LOD80.children[0] = Group81;

children[9] = LOD80;

Script Script602 = createNode("Script");
Script602.DEF = "finWarpScript";
field field603 = createNode("field");
field603.name = "set_rotationL";
field603.accessType = "inputOnly";
field603.type = "SFRotation";
Script602.field = new MFNode();

Script602.field[0] = field603;

field field604 = createNode("field");
field604.name = "set_rotationR";
field604.accessType = "inputOnly";
field604.type = "SFRotation";
Script602.field[1] = field604;

field field605 = createNode("field");
field605.name = "fin_warpL";
field605.accessType = "outputOnly";
field605.type = "SFBool";
Script602.field[2] = field605;

field field606 = createNode("field");
field606.name = "fin_warpR";
field606.accessType = "outputOnly";
field606.type = "SFBool";
Script602.field[3] = field606;


Script602.setSourceCode(`ecmascript:\n"+
"\n"+
"\n"+
"var positionX;\n"+
"var positionY;\n"+
"var positionZ;\n"+
"var rotation;\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"    	positionX = 0.0;\n"+
"	positionY = 0.0;\n"+
"	positionZ = 0.0;\n"+
"	rotation = 0.0;\n"+
"}\n"+
"\n"+
"function set_rotationL( value, timeStamp)\n"+
"{\n"+
"	rotationFinL = new SFRotation(positionX, positionY, positionZ, rotation);\n"+
"	rotationFinL = value;\n"+
"	//print ('rotationFinL[0] ' + rotationFinL[0]);\n"+
"	if (rotationFinL[0] <= 0)\n"+
"	{\n"+
"		fin_warpL = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		fin_warpL = 1;\n"+
"	}\n"+
"	\n"+
"}\n"+
"\n"+
"function set_rotationR( value, timeStamp)\n"+
"{\n"+
"	rotationFinR = new SFRotation(positionX, positionY, positionZ, rotation);\n"+
"	rotationFinR = value;\n"+
"	//print ('rotationFin[0] ' + rotationFinR[0]);\n"+
"	if (rotationFinR[0] <= 0)\n"+
"	{\n"+
"		fin_warpR = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		fin_warpR = 1;\n"+
"	}\n"+
"	\n"+
"}`)
children[10] = Script602;

Group Group607 = createNode("Group");
Group607.DEF = "Animations";
Group Group608 = createNode("Group");
Group608.DEF = "Dive_Animation";
OrientationInterpolator OrientationInterpolator609 = createNode("OrientationInterpolator");
OrientationInterpolator609.DEF = "r_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator609.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator609.keyValue = new MFRotation(new float[1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]);
Group608.children = new MFNode();

Group608.children[0] = OrientationInterpolator609;

OrientationInterpolator OrientationInterpolator610 = createNode("OrientationInterpolator");
OrientationInterpolator610.DEF = "r_knee_RotationInterpolator_BasicDive";
OrientationInterpolator610.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator610.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]);
Group608.children[1] = OrientationInterpolator610;

OrientationInterpolator OrientationInterpolator611 = createNode("OrientationInterpolator");
OrientationInterpolator611.DEF = "r_hip_RotationInterpolator_BasicDive";
OrientationInterpolator611.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator611.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group608.children[2] = OrientationInterpolator611;

OrientationInterpolator OrientationInterpolator612 = createNode("OrientationInterpolator");
OrientationInterpolator612.DEF = "l_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator612.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator612.keyValue = new MFRotation(new float[1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]);
Group608.children[3] = OrientationInterpolator612;

OrientationInterpolator OrientationInterpolator613 = createNode("OrientationInterpolator");
OrientationInterpolator613.DEF = "l_knee_RotationInterpolator_BasicDive";
OrientationInterpolator613.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator613.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group608.children[4] = OrientationInterpolator613;

OrientationInterpolator OrientationInterpolator614 = createNode("OrientationInterpolator");
OrientationInterpolator614.DEF = "l_hip_RotationInterpolator_BasicDive";
OrientationInterpolator614.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator614.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group608.children[5] = OrientationInterpolator614;

OrientationInterpolator OrientationInterpolator615 = createNode("OrientationInterpolator");
OrientationInterpolator615.DEF = "lower_body_RotationInterpolator_BasicDive";
OrientationInterpolator615.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator615.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group608.children[6] = OrientationInterpolator615;

//
OrientationInterpolator OrientationInterpolator616 = createNode("OrientationInterpolator");
OrientationInterpolator616.DEF = "r_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator616.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator616.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group608.children[7] = OrientationInterpolator616;

OrientationInterpolator OrientationInterpolator617 = createNode("OrientationInterpolator");
OrientationInterpolator617.DEF = "r_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator617.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator617.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group608.children[8] = OrientationInterpolator617;

OrientationInterpolator OrientationInterpolator618 = createNode("OrientationInterpolator");
OrientationInterpolator618.DEF = "r_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator618.key = new MFFloat(new float[0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator618.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group608.children[9] = OrientationInterpolator618;

OrientationInterpolator OrientationInterpolator619 = createNode("OrientationInterpolator");
OrientationInterpolator619.DEF = "l_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator619.key = new MFFloat(new float[0,0.32,0.64,0.88,1]);
OrientationInterpolator619.keyValue = new MFRotation(new float[0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]);
Group608.children[10] = OrientationInterpolator619;

OrientationInterpolator OrientationInterpolator620 = createNode("OrientationInterpolator");
OrientationInterpolator620.DEF = "l_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator620.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator620.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
Group608.children[11] = OrientationInterpolator620;

OrientationInterpolator OrientationInterpolator621 = createNode("OrientationInterpolator");
OrientationInterpolator621.DEF = "l_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator621.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator621.keyValue = new MFRotation(new float[0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]);
Group608.children[12] = OrientationInterpolator621;

//
OrientationInterpolator OrientationInterpolator622 = createNode("OrientationInterpolator");
OrientationInterpolator622.DEF = "head_RotationInterpolator_BasicDive";
OrientationInterpolator622.key = new MFFloat(new float[0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator622.keyValue = new MFRotation(new float[-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]);
Group608.children[13] = OrientationInterpolator622;

OrientationInterpolator OrientationInterpolator623 = createNode("OrientationInterpolator");
OrientationInterpolator623.DEF = "neck_RotationInterpolator_BasicDive";
OrientationInterpolator623.key = new MFFloat(new float[0,1]);
OrientationInterpolator623.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group608.children[14] = OrientationInterpolator623;

OrientationInterpolator OrientationInterpolator624 = createNode("OrientationInterpolator");
OrientationInterpolator624.DEF = "upper_body_RotationInterpolator_BasicDive";
OrientationInterpolator624.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator624.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group608.children[15] = OrientationInterpolator624;

OrientationInterpolator OrientationInterpolator625 = createNode("OrientationInterpolator");
OrientationInterpolator625.DEF = "whole_body_RotationInterpolator_BasicDive";
OrientationInterpolator625.key = new MFFloat(new float[0,1]);
OrientationInterpolator625.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group608.children[16] = OrientationInterpolator625;

PositionInterpolator PositionInterpolator626 = createNode("PositionInterpolator");
PositionInterpolator626.DEF = "whole_body_TranslationInterpolator_BasicDive";
PositionInterpolator626.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator626.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group608.children[17] = PositionInterpolator626;

TimeSensor TimeSensor627 = createNode("TimeSensor");
TimeSensor627.DEF = "Dive_Time";
TimeSensor627.cycleInterval = 7;
TimeSensor627.loop = True;
TimeSensor627.startTime = -1;
Group608.children[18] = TimeSensor627;

ProximitySensor ProximitySensor628 = createNode("ProximitySensor");
ProximitySensor628.DEF = "TriggerProximitySensor";
ProximitySensor628.size = new SFVec3f(new float[50,50,50]);
Group608.children[19] = ProximitySensor628;

Group607.children = new MFNode();

Group607.children[0] = Group608;

children[11] = Group607;

ROUTE ROUTE629 = createNode("ROUTE");
ROUTE629.fromField = "enterTime";
ROUTE629.fromNode = "TriggerProximitySensor";
ROUTE629.toField = "startTime";
ROUTE629.toNode = "Dive_Time";
children[12] = ROUTE629;

ROUTE ROUTE630 = createNode("ROUTE");
ROUTE630.fromField = "fraction_changed";
ROUTE630.fromNode = "Dive_Time";
ROUTE630.toField = "set_fraction";
ROUTE630.toNode = "r_ankle_RotationInterpolator_BasicDive";
children[13] = ROUTE630;

ROUTE ROUTE631 = createNode("ROUTE");
ROUTE631.fromField = "fraction_changed";
ROUTE631.fromNode = "Dive_Time";
ROUTE631.toField = "set_fraction";
ROUTE631.toNode = "r_knee_RotationInterpolator_BasicDive";
children[14] = ROUTE631;

ROUTE ROUTE632 = createNode("ROUTE");
ROUTE632.fromField = "fraction_changed";
ROUTE632.fromNode = "Dive_Time";
ROUTE632.toField = "set_fraction";
ROUTE632.toNode = "r_hip_RotationInterpolator_BasicDive";
children[15] = ROUTE632;

ROUTE ROUTE633 = createNode("ROUTE");
ROUTE633.fromField = "fraction_changed";
ROUTE633.fromNode = "Dive_Time";
ROUTE633.toField = "set_fraction";
ROUTE633.toNode = "l_ankle_RotationInterpolator_BasicDive";
children[16] = ROUTE633;

ROUTE ROUTE634 = createNode("ROUTE");
ROUTE634.fromField = "fraction_changed";
ROUTE634.fromNode = "Dive_Time";
ROUTE634.toField = "set_fraction";
ROUTE634.toNode = "l_knee_RotationInterpolator_BasicDive";
children[17] = ROUTE634;

ROUTE ROUTE635 = createNode("ROUTE");
ROUTE635.fromField = "fraction_changed";
ROUTE635.fromNode = "Dive_Time";
ROUTE635.toField = "set_fraction";
ROUTE635.toNode = "l_hip_RotationInterpolator_BasicDive";
children[18] = ROUTE635;

ROUTE ROUTE636 = createNode("ROUTE");
ROUTE636.fromField = "fraction_changed";
ROUTE636.fromNode = "Dive_Time";
ROUTE636.toField = "set_fraction";
ROUTE636.toNode = "lower_body_RotationInterpolator_BasicDive";
children[19] = ROUTE636;

ROUTE ROUTE637 = createNode("ROUTE");
ROUTE637.fromField = "fraction_changed";
ROUTE637.fromNode = "Dive_Time";
ROUTE637.toField = "set_fraction";
ROUTE637.toNode = "head_RotationInterpolator_BasicDive";
children[20] = ROUTE637;

ROUTE ROUTE638 = createNode("ROUTE");
ROUTE638.fromField = "fraction_changed";
ROUTE638.fromNode = "Dive_Time";
ROUTE638.toField = "set_fraction";
ROUTE638.toNode = "neck_RotationInterpolator_BasicDive";
children[21] = ROUTE638;

ROUTE ROUTE639 = createNode("ROUTE");
ROUTE639.fromField = "fraction_changed";
ROUTE639.fromNode = "Dive_Time";
ROUTE639.toField = "set_fraction";
ROUTE639.toNode = "upper_body_RotationInterpolator_BasicDive";
children[22] = ROUTE639;

ROUTE ROUTE640 = createNode("ROUTE");
ROUTE640.fromField = "fraction_changed";
ROUTE640.fromNode = "Dive_Time";
ROUTE640.toField = "set_fraction";
ROUTE640.toNode = "whole_body_RotationInterpolator_BasicDive";
children[23] = ROUTE640;

ROUTE ROUTE641 = createNode("ROUTE");
ROUTE641.fromField = "fraction_changed";
ROUTE641.fromNode = "Dive_Time";
ROUTE641.toField = "set_fraction";
ROUTE641.toNode = "whole_body_TranslationInterpolator_BasicDive";
children[24] = ROUTE641;

ROUTE ROUTE642 = createNode("ROUTE");
ROUTE642.fromField = "value_changed";
ROUTE642.fromNode = "r_ankle_RotationInterpolator_BasicDive";
ROUTE642.toField = "set_rotation";
ROUTE642.toNode = "hanim_r_ankle";
children[25] = ROUTE642;

ROUTE ROUTE643 = createNode("ROUTE");
ROUTE643.fromField = "value_changed";
ROUTE643.fromNode = "r_knee_RotationInterpolator_BasicDive";
ROUTE643.toField = "set_rotation";
ROUTE643.toNode = "hanim_r_knee";
children[26] = ROUTE643;

ROUTE ROUTE644 = createNode("ROUTE");
ROUTE644.fromField = "value_changed";
ROUTE644.fromNode = "r_hip_RotationInterpolator_BasicDive";
ROUTE644.toField = "set_rotation";
ROUTE644.toNode = "hanim_r_hip";
children[27] = ROUTE644;

ROUTE ROUTE645 = createNode("ROUTE");
ROUTE645.fromField = "value_changed";
ROUTE645.fromNode = "l_ankle_RotationInterpolator_BasicDive";
ROUTE645.toField = "set_rotation";
ROUTE645.toNode = "hanim_l_ankle";
children[28] = ROUTE645;

ROUTE ROUTE646 = createNode("ROUTE");
ROUTE646.fromField = "value_changed";
ROUTE646.fromNode = "l_knee_RotationInterpolator_BasicDive";
ROUTE646.toField = "set_rotation";
ROUTE646.toNode = "hanim_l_knee";
children[29] = ROUTE646;

ROUTE ROUTE647 = createNode("ROUTE");
ROUTE647.fromField = "value_changed";
ROUTE647.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE647.toField = "set_rotationL";
ROUTE647.toNode = "finWarpScript";
children[30] = ROUTE647;

ROUTE ROUTE648 = createNode("ROUTE");
ROUTE648.fromField = "value_changed";
ROUTE648.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE648.toField = "set_rotationR";
ROUTE648.toNode = "finWarpScript";
children[31] = ROUTE648;

ROUTE ROUTE649 = createNode("ROUTE");
ROUTE649.fromField = "fin_warpL";
ROUTE649.fromNode = "finWarpScript";
ROUTE649.toField = "finL";
ROUTE649.toNode = "FinScript";
children[32] = ROUTE649;

ROUTE ROUTE650 = createNode("ROUTE");
ROUTE650.fromField = "fin_warpR";
ROUTE650.fromNode = "finWarpScript";
ROUTE650.toField = "finR";
ROUTE650.toNode = "FinScript";
children[33] = ROUTE650;

ROUTE ROUTE651 = createNode("ROUTE");
ROUTE651.fromField = "value_changed";
ROUTE651.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE651.toField = "set_rotation";
ROUTE651.toNode = "hanim_l_hip";
children[34] = ROUTE651;

ROUTE ROUTE652 = createNode("ROUTE");
ROUTE652.fromField = "value_changed";
ROUTE652.fromNode = "lower_body_RotationInterpolator_BasicDive";
ROUTE652.toField = "set_rotation";
ROUTE652.toNode = "hanim_sacroiliac";
children[35] = ROUTE652;

ROUTE ROUTE653 = createNode("ROUTE");
ROUTE653.fromField = "value_changed";
ROUTE653.fromNode = "head_RotationInterpolator_BasicDive";
ROUTE653.toField = "set_rotation";
ROUTE653.toNode = "hanim_skullbase";
children[36] = ROUTE653;

ROUTE ROUTE654 = createNode("ROUTE");
ROUTE654.fromField = "value_changed";
ROUTE654.fromNode = "neck_RotationInterpolator_BasicDive";
ROUTE654.toField = "set_rotation";
ROUTE654.toNode = "hanim_vc4";
children[37] = ROUTE654;

ROUTE ROUTE655 = createNode("ROUTE");
ROUTE655.fromField = "value_changed";
ROUTE655.fromNode = "upper_body_RotationInterpolator_BasicDive";
ROUTE655.toField = "set_rotation";
ROUTE655.toNode = "hanim_vl1";
children[38] = ROUTE655;

ROUTE ROUTE656 = createNode("ROUTE");
ROUTE656.fromField = "value_changed";
ROUTE656.fromNode = "whole_body_RotationInterpolator_BasicDive";
ROUTE656.toField = "set_rotation";
ROUTE656.toNode = "hanim_humanoid_root";
children[39] = ROUTE656;

ROUTE ROUTE657 = createNode("ROUTE");
ROUTE657.fromField = "value_changed";
ROUTE657.fromNode = "whole_body_TranslationInterpolator_BasicDive";
ROUTE657.toField = "set_translation";
ROUTE657.toNode = "hanim_humanoid_root";
children[40] = ROUTE657;

ROUTE ROUTE658 = createNode("ROUTE");
ROUTE658.fromField = "fraction_changed";
ROUTE658.fromNode = "Dive_Time";
ROUTE658.toField = "set_fraction";
ROUTE658.toNode = "r_wrist_RotationInterpolator_BasicDive";
children[41] = ROUTE658;

ROUTE ROUTE659 = createNode("ROUTE");
ROUTE659.fromField = "fraction_changed";
ROUTE659.fromNode = "Dive_Time";
ROUTE659.toField = "set_fraction";
ROUTE659.toNode = "r_elbow_RotationInterpolator_BasicDive";
children[42] = ROUTE659;

ROUTE ROUTE660 = createNode("ROUTE");
ROUTE660.fromField = "fraction_changed";
ROUTE660.fromNode = "Dive_Time";
ROUTE660.toField = "set_fraction";
ROUTE660.toNode = "r_shoulder_RotationInterpolator_BasicDive";
children[43] = ROUTE660;

ROUTE ROUTE661 = createNode("ROUTE");
ROUTE661.fromField = "fraction_changed";
ROUTE661.fromNode = "Dive_Time";
ROUTE661.toField = "set_fraction";
ROUTE661.toNode = "l_wrist_RotationInterpolator_BasicDive";
children[44] = ROUTE661;

ROUTE ROUTE662 = createNode("ROUTE");
ROUTE662.fromField = "fraction_changed";
ROUTE662.fromNode = "Dive_Time";
ROUTE662.toField = "set_fraction";
ROUTE662.toNode = "l_elbow_RotationInterpolator_BasicDive";
children[45] = ROUTE662;

ROUTE ROUTE663 = createNode("ROUTE");
ROUTE663.fromField = "fraction_changed";
ROUTE663.fromNode = "Dive_Time";
ROUTE663.toField = "set_fraction";
ROUTE663.toNode = "l_shoulder_RotationInterpolator_BasicDive";
children[46] = ROUTE663;

ROUTE ROUTE664 = createNode("ROUTE");
ROUTE664.fromField = "value_changed";
ROUTE664.fromNode = "r_wrist_RotationInterpolator_BasicDive";
ROUTE664.toField = "set_rotation";
ROUTE664.toNode = "hanim_r_wrist";
children[47] = ROUTE664;

ROUTE ROUTE665 = createNode("ROUTE");
ROUTE665.fromField = "value_changed";
ROUTE665.fromNode = "r_elbow_RotationInterpolator_BasicDive";
ROUTE665.toField = "set_rotation";
ROUTE665.toNode = "hanim_r_elbow";
children[48] = ROUTE665;

ROUTE ROUTE666 = createNode("ROUTE");
ROUTE666.fromField = "value_changed";
ROUTE666.fromNode = "r_shoulder_RotationInterpolator_BasicDive";
ROUTE666.toField = "set_rotation";
ROUTE666.toNode = "hanim_r_shoulder";
children[49] = ROUTE666;

ROUTE ROUTE667 = createNode("ROUTE");
ROUTE667.fromField = "value_changed";
ROUTE667.fromNode = "l_wrist_RotationInterpolator_BasicDive";
ROUTE667.toField = "set_rotation";
ROUTE667.toNode = "hanim_l_wrist";
children[50] = ROUTE667;

ROUTE ROUTE668 = createNode("ROUTE");
ROUTE668.fromField = "value_changed";
ROUTE668.fromNode = "l_elbow_RotationInterpolator_BasicDive";
ROUTE668.toField = "set_rotation";
ROUTE668.toNode = "hanim_l_elbow";
children[51] = ROUTE668;

ROUTE ROUTE669 = createNode("ROUTE");
ROUTE669.fromField = "value_changed";
ROUTE669.fromNode = "l_shoulder_RotationInterpolator_BasicDive";
ROUTE669.toField = "set_rotation";
ROUTE669.toNode = "hanim_l_shoulder";
children[52] = ROUTE669;

}
