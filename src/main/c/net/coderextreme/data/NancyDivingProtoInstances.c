#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
meta6.name = "creator";
meta6.content = "Cindy Ballreich cindy@ballreich.net 3Name3D";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "translator";
meta7.content = "Tom Miller";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "translator";
meta8.content = "Don Brutzman";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "created";
meta9.content = "19 November 2001";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "modified";
meta10.content = "Mon, 15 Sep 2025 05:20:50 GMT";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "TODO";
meta11.content = "left arm motion still has a problem";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "rights";
meta12.content = "1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDivingProtoInstances.x3d";
head1.meta[11] = meta13;

head = head1;

ExternProtoDeclare ExternProtoDeclare15 = createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "Joint";
ExternProtoDeclare15.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ExternProtoDeclare15.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html";
ExternProtoDeclare15.url = new MFString(new java.lang.String["NancyPrototypes.x3d#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Joint","NancyPrototypes.wrl#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Joint"]);
field field16 = createNode("field");
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.name = "center";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

field field17 = createNode("field");
field17.accessType = "inputOutput";
field17.type = "MFNode";
field17.name = "children";
ExternProtoDeclare15.field[1] = field17;

field field18 = createNode("field");
field18.accessType = "inputOutput";
field18.type = "MFFloat";
field18.name = "llimit";
ExternProtoDeclare15.field[2] = field18;

field field19 = createNode("field");
field19.accessType = "inputOutput";
field19.type = "SFRotation";
field19.name = "limitOrientation";
ExternProtoDeclare15.field[3] = field19;

field field20 = createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFString";
field20.name = "name";
ExternProtoDeclare15.field[4] = field20;

field field21 = createNode("field");
field21.accessType = "inputOutput";
field21.type = "SFRotation";
field21.name = "rotation";
ExternProtoDeclare15.field[5] = field21;

field field22 = createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.name = "scale";
ExternProtoDeclare15.field[6] = field22;

field field23 = createNode("field");
field23.accessType = "inputOutput";
field23.type = "SFRotation";
field23.name = "scaleOrientation";
ExternProtoDeclare15.field[7] = field23;

field field24 = createNode("field");
field24.accessType = "inputOutput";
field24.type = "MFFloat";
field24.name = "stiffness";
ExternProtoDeclare15.field[8] = field24;

field field25 = createNode("field");
field25.accessType = "inputOutput";
field25.type = "SFVec3f";
field25.name = "translation";
ExternProtoDeclare15.field[9] = field25;

field field26 = createNode("field");
field26.accessType = "inputOutput";
field26.type = "MFFloat";
field26.name = "ulimit";
ExternProtoDeclare15.field[10] = field26;

field field27 = createNode("field");
field27.accessType = "inputOnly";
field27.type = "MFNode";
field27.name = "removeChildren";
ExternProtoDeclare15.field[11] = field27;

field field28 = createNode("field");
field28.accessType = "initializeOnly";
field28.type = "SFVec3f";
field28.name = "bboxSize";
ExternProtoDeclare15.field[12] = field28;

field field29 = createNode("field");
field29.accessType = "inputOutput";
field29.type = "MFInt32";
field29.name = "skinCoordIndex";
ExternProtoDeclare15.field[13] = field29;

field field30 = createNode("field");
field30.accessType = "initializeOnly";
field30.type = "SFVec3f";
field30.name = "bboxCenter";
ExternProtoDeclare15.field[14] = field30;

field field31 = createNode("field");
field31.accessType = "inputOutput";
field31.type = "MFFloat";
field31.name = "skinCoordWeight";
ExternProtoDeclare15.field[15] = field31;

field field32 = createNode("field");
field32.accessType = "inputOnly";
field32.type = "MFNode";
field32.name = "addChildren";
ExternProtoDeclare15.field[16] = field32;

children = new MFNode();

children[0] = ExternProtoDeclare15;

ExternProtoDeclare ExternProtoDeclare33 = createNode("ExternProtoDeclare");
ExternProtoDeclare33.name = "Segment";
ExternProtoDeclare33.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.";
ExternProtoDeclare33.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html";
ExternProtoDeclare33.url = new MFString(new java.lang.String["NancyPrototypes.x3d#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Segment","NancyPrototypes.wrl#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Segment"]);
field field34 = createNode("field");
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
field34.name = "bboxCenter";
ExternProtoDeclare33.field = new MFNode();

ExternProtoDeclare33.field[0] = field34;

field field35 = createNode("field");
field35.accessType = "initializeOnly";
field35.type = "SFVec3f";
field35.name = "bboxSize";
ExternProtoDeclare33.field[1] = field35;

field field36 = createNode("field");
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
field36.name = "centerOfMass";
ExternProtoDeclare33.field[2] = field36;

field field37 = createNode("field");
field37.accessType = "inputOutput";
field37.type = "MFNode";
field37.name = "children";
ExternProtoDeclare33.field[3] = field37;

field field38 = createNode("field");
field38.accessType = "inputOutput";
field38.type = "SFNode";
field38.name = "coord";
field38.appinfo = "contains Coordinate nodes";
ExternProtoDeclare33.field[4] = field38;

field field39 = createNode("field");
field39.accessType = "inputOutput";
field39.type = "MFNode";
field39.name = "displacers";
field39.appinfo = "contains Displacer nodes";
ExternProtoDeclare33.field[5] = field39;

field field40 = createNode("field");
field40.accessType = "inputOutput";
field40.type = "SFFloat";
field40.name = "mass";
ExternProtoDeclare33.field[6] = field40;

field field41 = createNode("field");
field41.accessType = "inputOutput";
field41.type = "MFFloat";
field41.name = "momentsOfInertia";
ExternProtoDeclare33.field[7] = field41;

field field42 = createNode("field");
field42.accessType = "inputOutput";
field42.type = "SFString";
field42.name = "name";
ExternProtoDeclare33.field[8] = field42;

field field43 = createNode("field");
field43.accessType = "inputOnly";
field43.type = "MFNode";
field43.name = "addChildren";
ExternProtoDeclare33.field[9] = field43;

field field44 = createNode("field");
field44.accessType = "inputOnly";
field44.type = "MFNode";
field44.name = "removeChildren";
ExternProtoDeclare33.field[10] = field44;

children[1] = ExternProtoDeclare33;

ExternProtoDeclare ExternProtoDeclare45 = createNode("ExternProtoDeclare");
ExternProtoDeclare45.name = "Humanoid";
ExternProtoDeclare45.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ExternProtoDeclare45.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
ExternProtoDeclare45.url = new MFString(new java.lang.String["NancyPrototypes.x3d#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Humanoid","NancyPrototypes.wrl#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Humanoid"]);
field field46 = createNode("field");
field46.accessType = "initializeOnly";
field46.type = "SFVec3f";
field46.name = "bboxCenter";
ExternProtoDeclare45.field = new MFNode();

ExternProtoDeclare45.field[0] = field46;

field field47 = createNode("field");
field47.accessType = "initializeOnly";
field47.type = "SFVec3f";
field47.name = "bboxSize";
ExternProtoDeclare45.field[1] = field47;

field field48 = createNode("field");
field48.accessType = "inputOutput";
field48.type = "SFVec3f";
field48.name = "center";
ExternProtoDeclare45.field[2] = field48;

field field49 = createNode("field");
field49.accessType = "inputOutput";
field49.type = "MFNode";
field49.name = "humanoidBody";
field49.appinfo = "HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton";
field49.documentation = "http://HAnim.org/Specifications/HAnim1.1/#humanoid";
ExternProtoDeclare45.field[3] = field49;

field field50 = createNode("field");
field50.accessType = "inputOutput";
field50.type = "MFString";
field50.name = "info";
ExternProtoDeclare45.field[4] = field50;

field field51 = createNode("field");
field51.accessType = "inputOutput";
field51.type = "MFNode";
field51.name = "joints";
field51.appinfo = "Container field for Joint nodes";
ExternProtoDeclare45.field[5] = field51;

field field52 = createNode("field");
field52.accessType = "inputOutput";
field52.type = "SFString";
field52.name = "name";
ExternProtoDeclare45.field[6] = field52;

field field53 = createNode("field");
field53.accessType = "inputOutput";
field53.type = "SFRotation";
field53.name = "rotation";
ExternProtoDeclare45.field[7] = field53;

field field54 = createNode("field");
field54.accessType = "inputOutput";
field54.type = "SFVec3f";
field54.name = "scale";
ExternProtoDeclare45.field[8] = field54;

field field55 = createNode("field");
field55.accessType = "inputOutput";
field55.type = "SFRotation";
field55.name = "scaleOrientation";
ExternProtoDeclare45.field[9] = field55;

field field56 = createNode("field");
field56.accessType = "inputOutput";
field56.type = "MFNode";
field56.name = "segments";
field56.appinfo = "Container field for Segment nodes";
ExternProtoDeclare45.field[10] = field56;

field field57 = createNode("field");
field57.accessType = "inputOutput";
field57.type = "MFNode";
field57.name = "sites";
field57.appinfo = "Container field for Site nodes";
ExternProtoDeclare45.field[11] = field57;

field field58 = createNode("field");
field58.accessType = "inputOutput";
field58.type = "SFVec3f";
field58.name = "translation";
ExternProtoDeclare45.field[12] = field58;

field field59 = createNode("field");
field59.accessType = "inputOutput";
field59.type = "SFString";
field59.name = "version";
field59.appinfo = "legal values: 1.1 or 2.0";
ExternProtoDeclare45.field[13] = field59;

field field60 = createNode("field");
field60.accessType = "inputOutput";
field60.type = "MFNode";
field60.name = "viewpoints";
field60.appinfo = "Container field for Viewpoint nodes";
ExternProtoDeclare45.field[14] = field60;

field field61 = createNode("field");
field61.accessType = "inputOutput";
field61.type = "SFNode";
field61.name = "skinNormal";
field61.appinfo = "Hint: HAnim version 2.0";
ExternProtoDeclare45.field[15] = field61;

field field62 = createNode("field");
field62.accessType = "inputOutput";
field62.type = "SFString";
field62.name = "humanoidVersion";
field62.appinfo = "Version of the humanoid being modeled. Hint: HAnim version 2.0";
ExternProtoDeclare45.field[16] = field62;

field field63 = createNode("field");
field63.accessType = "inputOutput";
field63.type = "MFNode";
field63.name = "skeleton";
field63.appinfo = "HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody";
field63.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
ExternProtoDeclare45.field[17] = field63;

field field64 = createNode("field");
field64.accessType = "inputOutput";
field64.type = "SFNode";
field64.name = "skinCoord";
field64.appinfo = "Hint: HAnim version 2.0";
ExternProtoDeclare45.field[18] = field64;

children[2] = ExternProtoDeclare45;

ExternProtoDeclare ExternProtoDeclare65 = createNode("ExternProtoDeclare");
ExternProtoDeclare65.name = "ViewPositionOrientation";
ExternProtoDeclare65.appinfo = "ViewPositionOrientation provides provides console output of local position and orientation as user navigates";
ExternProtoDeclare65.url = new MFString(new java.lang.String["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]);
field field66 = createNode("field");
field66.accessType = "inputOutput";
field66.type = "SFBool";
field66.name = "enabled";
field66.appinfo = "Whether or not ViewPositionOrientation sends output to console";
ExternProtoDeclare65.field = new MFNode();

ExternProtoDeclare65.field[0] = field66;

field field67 = createNode("field");
field67.accessType = "initializeOnly";
field67.type = "SFBool";
field67.name = "traceEnabled";
field67.appinfo = "Output internal trace messages for debugging this node, intended for developer use only";
ExternProtoDeclare65.field[1] = field67;

field field68 = createNode("field");
field68.accessType = "inputOnly";
field68.type = "SFBool";
field68.name = "set_traceEnabled";
field68.appinfo = "Ability to turn output tracing on/off at runtime";
ExternProtoDeclare65.field[2] = field68;

field field69 = createNode("field");
field69.accessType = "outputOnly";
field69.type = "SFVec3f";
field69.name = "position_changed";
field69.appinfo = "Output local position";
ExternProtoDeclare65.field[3] = field69;

field field70 = createNode("field");
field70.accessType = "outputOnly";
field70.type = "SFRotation";
field70.name = "orientation_changed";
field70.appinfo = "Output local orientation";
ExternProtoDeclare65.field[4] = field70;

field field71 = createNode("field");
field71.accessType = "outputOnly";
field71.type = "MFString";
field71.name = "outputViewpointString";
field71.appinfo = "MFString value of new Viewpoint, suitable for use in string field of a Text node";
ExternProtoDeclare65.field[5] = field71;

children[3] = ExternProtoDeclare65;

ProtoInstance ProtoInstance72 = createNode("ProtoInstance");
ProtoInstance72.DEF = "ExampleViewPositionOrientation";
ProtoInstance72.name = "ViewPositionOrientation";
fieldValue fieldValue73 = createNode("fieldValue");
fieldValue73.name = "enabled";
fieldValue73.value = "true";
ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

children[4] = ProtoInstance72;

ProtoInstance ProtoInstance74 = createNode("ProtoInstance");
ProtoInstance74.DEF = "ConsoleOutputViewPositionOrientation";
ProtoInstance74.name = "ViewPositionOrientation";
fieldValue fieldValue75 = createNode("fieldValue");
fieldValue75.name = "enabled";
fieldValue75.value = "true";
ProtoInstance74.fieldValue = new MFNode();

ProtoInstance74.fieldValue[0] = fieldValue75;

children[5] = ProtoInstance74;

Background Background76 = createNode("Background");
Background76.skyColor = new MFColor(new float[0,0.4,1]);
children[6] = Background76;

NavigationInfo NavigationInfo77 = createNode("NavigationInfo");
NavigationInfo77.type = new MFString(new java.lang.String["EXAMINE"]);
NavigationInfo77.avatarSize = new MFFloat(new float[0.15,1.53,0.75]);
NavigationInfo77.speed = 0.5;
children[7] = NavigationInfo77;

Viewpoint Viewpoint78 = createNode("Viewpoint");
Viewpoint78.description = "Nancy diving default viewpoint";
Viewpoint78.position = new SFVec3f(new float[-0.8,0,3.1]);
children[8] = Viewpoint78;

LOD LOD79 = createNode("LOD");
Group Group80 = createNode("Group");
Group80.DEF = "Viewpoint";
Viewpoint Viewpoint81 = createNode("Viewpoint");
Viewpoint81.description = "Nancy front viewpoint";
Viewpoint81.position = new SFVec3f(new float[-2.2,-0.7,0]);
Viewpoint81.orientation = new SFRotation(new float[-0.354,0.878,-0.321,4.5485]);
Group80.children = new MFNode();

Group80.children[0] = Viewpoint81;

Viewpoint Viewpoint82 = createNode("Viewpoint");
Viewpoint82.description = "Nancy above viewpoint";
Viewpoint82.position = new SFVec3f(new float[-3,0.5,0]);
Viewpoint82.orientation = new SFRotation(new float[-0.126,-0.978,-0.168,1.5385]);
Group80.children[1] = Viewpoint82;

Viewpoint Viewpoint83 = createNode("Viewpoint");
Viewpoint83.description = "Nancy back viewpoint";
Viewpoint83.position = new SFVec3f(new float[0.7,0.1,0]);
Viewpoint83.orientation = new SFRotation(new float[0.037,0.999,-0.011,1.572]);
Group80.children[2] = Viewpoint83;

Viewpoint Viewpoint84 = createNode("Viewpoint");
Viewpoint84.description = "Nancy side viewpoint";
Viewpoint84.position = new SFVec3f(new float[-1.2,-0.2,-1.5]);
Viewpoint84.orientation = new SFRotation(new float[0.121,0.987,-0.105,3.2682]);
Group80.children[3] = Viewpoint84;

Viewpoint Viewpoint85 = createNode("Viewpoint");
Viewpoint85.description = "Nancy viewpoint through her goggles";
Viewpoint85.position = new SFVec3f(new float[-1.5,0.1,0]);
Viewpoint85.orientation = new SFRotation(new float[-0.357,0.872,0.335,1.5225]);
Group80.children[4] = Viewpoint85;

Group Group86 = createNode("Group");
Group86.DEF = "HighResolution";
Transform Transform87 = createNode("Transform");
Transform87.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform Transform88 = createNode("Transform");
Transform88.rotation = new SFRotation(new float[0,0,1,1.57]);
WorldInfo WorldInfo89 = createNode("WorldInfo");
WorldInfo89.title = "Nancy - an HAnim compliant avatar by 3Name3D";
WorldInfo89.info = new MFString(new java.lang.String["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."]);
Transform88.children = new MFNode();

Transform88.children[0] = WorldInfo89;

ProtoInstance ProtoInstance90 = createNode("ProtoInstance");
ProtoInstance90.DEF = "Humanoid";
ProtoInstance90.name = "Humanoid";
fieldValue fieldValue91 = createNode("fieldValue");
fieldValue91.name = "humanoidBody";
ProtoInstance ProtoInstance92 = createNode("ProtoInstance");
ProtoInstance92.DEF = "hanim_humanoid_root";
ProtoInstance92.name = "Joint";
fieldValue fieldValue93 = createNode("fieldValue");
fieldValue93.name = "center";
fieldValue93.value = "-0.00405 0.855 -0.000113";
ProtoInstance92.fieldValue = new MFNode();

ProtoInstance92.fieldValue[0] = fieldValue93;

fieldValue fieldValue94 = createNode("fieldValue");
fieldValue94.name = "children";
ProtoInstance ProtoInstance95 = createNode("ProtoInstance");
ProtoInstance95.DEF = "hanim_sacroiliac";
ProtoInstance95.name = "Joint";
fieldValue fieldValue96 = createNode("fieldValue");
fieldValue96.name = "center";
fieldValue96.value = "0 1.01 -0.0204";
ProtoInstance95.fieldValue = new MFNode();

ProtoInstance95.fieldValue[0] = fieldValue96;

fieldValue fieldValue97 = createNode("fieldValue");
fieldValue97.name = "children";
ProtoInstance ProtoInstance98 = createNode("ProtoInstance");
ProtoInstance98.DEF = "hanim_pelvis";
ProtoInstance98.name = "Segment";
fieldValue fieldValue99 = createNode("fieldValue");
fieldValue99.name = "children";
Shape Shape100 = createNode("Shape");
Appearance Appearance101 = createNode("Appearance");
Material Material102 = createNode("Material");
Material102.DEF = "Pants_Color";
Material102.diffuseColor = new SFColor(new float[0,0,0.502]);
Appearance101.material = Material102;

Shape100.appearance = Appearance101;

IndexedFaceSet IndexedFaceSet103 = createNode("IndexedFaceSet");
IndexedFaceSet103.creaseAngle = 1.14;
IndexedFaceSet103.coordIndex = new MFInt32(new int[0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
Coordinate Coordinate104 = createNode("Coordinate");
Coordinate104.point = new MFVec3f(new float[0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
IndexedFaceSet103.coord = Coordinate104;

Shape100.geometry = IndexedFaceSet103;

fieldValue99.children = new MFNode();

fieldValue99.children[0] = Shape100;

ProtoInstance98.fieldValue = new MFNode();

ProtoInstance98.fieldValue[0] = fieldValue99;

fieldValue fieldValue105 = createNode("fieldValue");
fieldValue105.name = "name";
fieldValue105.value = "pelvis";
ProtoInstance98.fieldValue[1] = fieldValue105;

fieldValue97.children = new MFNode();

fieldValue97.children[0] = ProtoInstance98;

ProtoInstance ProtoInstance106 = createNode("ProtoInstance");
ProtoInstance106.DEF = "hanim_l_hip";
ProtoInstance106.name = "Joint";
fieldValue fieldValue107 = createNode("fieldValue");
fieldValue107.name = "center";
fieldValue107.value = "0.122 0.888271 -0.0693267";
ProtoInstance106.fieldValue = new MFNode();

ProtoInstance106.fieldValue[0] = fieldValue107;

fieldValue fieldValue108 = createNode("fieldValue");
fieldValue108.name = "children";
ProtoInstance ProtoInstance109 = createNode("ProtoInstance");
ProtoInstance109.DEF = "hanim_l_thigh";
ProtoInstance109.name = "Segment";
fieldValue fieldValue110 = createNode("fieldValue");
fieldValue110.name = "children";
Shape Shape111 = createNode("Shape");
Appearance Appearance112 = createNode("Appearance");
Material Material113 = createNode("Material");
Material113.USE = "Pants_Color";
Appearance112.material = Material113;

Shape111.appearance = Appearance112;

IndexedFaceSet IndexedFaceSet114 = createNode("IndexedFaceSet");
IndexedFaceSet114.creaseAngle = 1.32;
IndexedFaceSet114.coordIndex = new MFInt32(new int[0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
Coordinate Coordinate115 = createNode("Coordinate");
Coordinate115.point = new MFVec3f(new float[0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
IndexedFaceSet114.coord = Coordinate115;

Shape111.geometry = IndexedFaceSet114;

fieldValue110.children = new MFNode();

fieldValue110.children[0] = Shape111;

ProtoInstance109.fieldValue = new MFNode();

ProtoInstance109.fieldValue[0] = fieldValue110;

fieldValue fieldValue116 = createNode("fieldValue");
fieldValue116.name = "name";
fieldValue116.value = "l_thigh";
ProtoInstance109.fieldValue[1] = fieldValue116;

fieldValue108.children = new MFNode();

fieldValue108.children[0] = ProtoInstance109;

ProtoInstance ProtoInstance117 = createNode("ProtoInstance");
ProtoInstance117.DEF = "hanim_l_knee";
ProtoInstance117.name = "Joint";
fieldValue fieldValue118 = createNode("fieldValue");
fieldValue118.name = "center";
fieldValue118.value = "0.0738 0.517 -0.0284";
ProtoInstance117.fieldValue = new MFNode();

ProtoInstance117.fieldValue[0] = fieldValue118;

fieldValue fieldValue119 = createNode("fieldValue");
fieldValue119.name = "children";
ProtoInstance ProtoInstance120 = createNode("ProtoInstance");
ProtoInstance120.DEF = "hanim_l_calf";
ProtoInstance120.name = "Segment";
fieldValue fieldValue121 = createNode("fieldValue");
fieldValue121.name = "children";
Shape Shape122 = createNode("Shape");
Appearance Appearance123 = createNode("Appearance");
Material Material124 = createNode("Material");
Material124.USE = "Pants_Color";
Appearance123.material = Material124;

Shape122.appearance = Appearance123;

IndexedFaceSet IndexedFaceSet125 = createNode("IndexedFaceSet");
IndexedFaceSet125.creaseAngle = 1.57;
IndexedFaceSet125.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
Coordinate Coordinate126 = createNode("Coordinate");
Coordinate126.point = new MFVec3f(new float[0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
IndexedFaceSet125.coord = Coordinate126;

Shape122.geometry = IndexedFaceSet125;

fieldValue121.children = new MFNode();

fieldValue121.children[0] = Shape122;

ProtoInstance120.fieldValue = new MFNode();

ProtoInstance120.fieldValue[0] = fieldValue121;

fieldValue fieldValue127 = createNode("fieldValue");
fieldValue127.name = "name";
fieldValue127.value = "l_calf";
ProtoInstance120.fieldValue[1] = fieldValue127;

fieldValue119.children = new MFNode();

fieldValue119.children[0] = ProtoInstance120;

ProtoInstance ProtoInstance128 = createNode("ProtoInstance");
ProtoInstance128.DEF = "hanim_l_ankle";
ProtoInstance128.name = "Joint";
fieldValue fieldValue129 = createNode("fieldValue");
fieldValue129.name = "center";
fieldValue129.value = "0.0645 0.0719 -0.048";
ProtoInstance128.fieldValue = new MFNode();

ProtoInstance128.fieldValue[0] = fieldValue129;

fieldValue fieldValue130 = createNode("fieldValue");
fieldValue130.name = "children";
ProtoInstance ProtoInstance131 = createNode("ProtoInstance");
ProtoInstance131.DEF = "hanim_l_hindfoot";
ProtoInstance131.name = "Segment";
fieldValue fieldValue132 = createNode("fieldValue");
fieldValue132.name = "children";
Shape Shape133 = createNode("Shape");
Appearance Appearance134 = createNode("Appearance");
Material Material135 = createNode("Material");
Material135.DEF = "Shoe_Color";
Material135.ambientIntensity = 0.25;
Material135.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance134.material = Material135;

Shape133.appearance = Appearance134;

IndexedFaceSet IndexedFaceSet136 = createNode("IndexedFaceSet");
IndexedFaceSet136.creaseAngle = 1.57;
IndexedFaceSet136.coordIndex = new MFInt32(new int[2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
Coordinate Coordinate137 = createNode("Coordinate");
Coordinate137.point = new MFVec3f(new float[0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
IndexedFaceSet136.coord = Coordinate137;

Shape133.geometry = IndexedFaceSet136;

fieldValue132.children = new MFNode();

fieldValue132.children[0] = Shape133;

Transform Transform138 = createNode("Transform");
Transform138.scale = new SFVec3f(new float[0.015,0.015,0.015]);
Transform Transform139 = createNode("Transform");
Transform139.translation = new SFVec3f(new float[6,-0.5,-7.5]);
Transform139.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape140 = createNode("Shape");
Appearance Appearance141 = createNode("Appearance");
Material Material142 = createNode("Material");
Material142.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance141.material = Material142;

Shape140.appearance = Appearance141;

Extrusion Extrusion143 = createNode("Extrusion");
Extrusion143.DEF = "Finl";
Extrusion143.ccw = False;
Extrusion143.creaseAngle = 3.14;
Extrusion143.crossSection = new MFVec2f(new float[-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion143.scale = new MFVec2f(new float[0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion143.spine = new MFVec3f(new float[0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
Shape140.geometry = Extrusion143;

Transform139.child = new undefined();

Transform139.child[0] = Shape140;

Transform138.children = new MFNode();

Transform138.children[0] = Transform139;

fieldValue132.children[1] = Transform138;

ProtoInstance131.fieldValue = new MFNode();

ProtoInstance131.fieldValue[0] = fieldValue132;

fieldValue fieldValue144 = createNode("fieldValue");
fieldValue144.name = "name";
fieldValue144.value = "l_hindfoot";
ProtoInstance131.fieldValue[1] = fieldValue144;

fieldValue130.children = new MFNode();

fieldValue130.children[0] = ProtoInstance131;

ProtoInstance128.fieldValue[1] = fieldValue130;

fieldValue fieldValue145 = createNode("fieldValue");
fieldValue145.name = "name";
fieldValue145.value = "l_ankle";
ProtoInstance128.fieldValue[2] = fieldValue145;

fieldValue119.children[1] = ProtoInstance128;

ProtoInstance117.fieldValue[1] = fieldValue119;

fieldValue fieldValue146 = createNode("fieldValue");
fieldValue146.name = "name";
fieldValue146.value = "l_knee";
ProtoInstance117.fieldValue[2] = fieldValue146;

fieldValue108.children[1] = ProtoInstance117;

ProtoInstance106.fieldValue[1] = fieldValue108;

fieldValue fieldValue147 = createNode("fieldValue");
fieldValue147.name = "name";
fieldValue147.value = "l_hip";
ProtoInstance106.fieldValue[2] = fieldValue147;

fieldValue97.children[1] = ProtoInstance106;

ProtoInstance ProtoInstance148 = createNode("ProtoInstance");
ProtoInstance148.DEF = "hanim_r_hip";
ProtoInstance148.name = "Joint";
fieldValue fieldValue149 = createNode("fieldValue");
fieldValue149.name = "center";
fieldValue149.value = "-0.11 0.892362 -0.0732533";
ProtoInstance148.fieldValue = new MFNode();

ProtoInstance148.fieldValue[0] = fieldValue149;

fieldValue fieldValue150 = createNode("fieldValue");
fieldValue150.name = "children";
ProtoInstance ProtoInstance151 = createNode("ProtoInstance");
ProtoInstance151.DEF = "hanim_r_thigh";
ProtoInstance151.name = "Segment";
fieldValue fieldValue152 = createNode("fieldValue");
fieldValue152.name = "children";
Shape Shape153 = createNode("Shape");
Appearance Appearance154 = createNode("Appearance");
Material Material155 = createNode("Material");
Material155.USE = "Pants_Color";
Appearance154.material = Material155;

Shape153.appearance = Appearance154;

IndexedFaceSet IndexedFaceSet156 = createNode("IndexedFaceSet");
IndexedFaceSet156.creaseAngle = 1.61;
IndexedFaceSet156.coordIndex = new MFInt32(new int[5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
Coordinate Coordinate157 = createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
IndexedFaceSet156.coord = Coordinate157;

Shape153.geometry = IndexedFaceSet156;

fieldValue152.children = new MFNode();

fieldValue152.children[0] = Shape153;

ProtoInstance151.fieldValue = new MFNode();

ProtoInstance151.fieldValue[0] = fieldValue152;

fieldValue fieldValue158 = createNode("fieldValue");
fieldValue158.name = "name";
fieldValue158.value = "r_thigh";
ProtoInstance151.fieldValue[1] = fieldValue158;

fieldValue150.children = new MFNode();

fieldValue150.children[0] = ProtoInstance151;

ProtoInstance ProtoInstance159 = createNode("ProtoInstance");
ProtoInstance159.DEF = "hanim_r_knee";
ProtoInstance159.name = "Joint";
fieldValue fieldValue160 = createNode("fieldValue");
fieldValue160.name = "center";
fieldValue160.value = "-0.0699 0.51 -0.0166";
ProtoInstance159.fieldValue = new MFNode();

ProtoInstance159.fieldValue[0] = fieldValue160;

fieldValue fieldValue161 = createNode("fieldValue");
fieldValue161.name = "children";
ProtoInstance ProtoInstance162 = createNode("ProtoInstance");
ProtoInstance162.DEF = "hanim_r_calf";
ProtoInstance162.name = "Segment";
fieldValue fieldValue163 = createNode("fieldValue");
fieldValue163.name = "children";
Shape Shape164 = createNode("Shape");
Appearance Appearance165 = createNode("Appearance");
Material Material166 = createNode("Material");
Material166.USE = "Pants_Color";
Appearance165.material = Material166;

Shape164.appearance = Appearance165;

IndexedFaceSet IndexedFaceSet167 = createNode("IndexedFaceSet");
IndexedFaceSet167.creaseAngle = 1.57;
IndexedFaceSet167.coordIndex = new MFInt32(new int[14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
Coordinate Coordinate168 = createNode("Coordinate");
Coordinate168.point = new MFVec3f(new float[-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
IndexedFaceSet167.coord = Coordinate168;

Shape164.geometry = IndexedFaceSet167;

fieldValue163.children = new MFNode();

fieldValue163.children[0] = Shape164;

ProtoInstance162.fieldValue = new MFNode();

ProtoInstance162.fieldValue[0] = fieldValue163;

fieldValue fieldValue169 = createNode("fieldValue");
fieldValue169.name = "name";
fieldValue169.value = "r_calf";
ProtoInstance162.fieldValue[1] = fieldValue169;

fieldValue161.children = new MFNode();

fieldValue161.children[0] = ProtoInstance162;

ProtoInstance ProtoInstance170 = createNode("ProtoInstance");
ProtoInstance170.DEF = "hanim_r_ankle";
ProtoInstance170.name = "Joint";
fieldValue fieldValue171 = createNode("fieldValue");
fieldValue171.name = "center";
fieldValue171.value = "-0.064 0.0753 -0.0412";
ProtoInstance170.fieldValue = new MFNode();

ProtoInstance170.fieldValue[0] = fieldValue171;

fieldValue fieldValue172 = createNode("fieldValue");
fieldValue172.name = "children";
ProtoInstance ProtoInstance173 = createNode("ProtoInstance");
ProtoInstance173.DEF = "hanim_r_hindfoot";
ProtoInstance173.name = "Segment";
fieldValue fieldValue174 = createNode("fieldValue");
fieldValue174.name = "children";
Shape Shape175 = createNode("Shape");
Appearance Appearance176 = createNode("Appearance");
Material Material177 = createNode("Material");
Material177.USE = "Shoe_Color";
Appearance176.material = Material177;

Shape175.appearance = Appearance176;

IndexedFaceSet IndexedFaceSet178 = createNode("IndexedFaceSet");
IndexedFaceSet178.creaseAngle = 1.57;
IndexedFaceSet178.coordIndex = new MFInt32(new int[6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
Coordinate Coordinate179 = createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
IndexedFaceSet178.coord = Coordinate179;

Shape175.geometry = IndexedFaceSet178;

fieldValue174.children = new MFNode();

fieldValue174.children[0] = Shape175;

Transform Transform180 = createNode("Transform");
Transform180.scale = new SFVec3f(new float[0.015,0.015,0.015]);
Transform Transform181 = createNode("Transform");
Transform181.translation = new SFVec3f(new float[-5,-0.5,-7.5]);
Transform181.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape182 = createNode("Shape");
Appearance Appearance183 = createNode("Appearance");
Material Material184 = createNode("Material");
Material184.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance183.material = Material184;

Shape182.appearance = Appearance183;

Extrusion Extrusion185 = createNode("Extrusion");
Extrusion185.DEF = "Finr";
Extrusion185.ccw = False;
Extrusion185.creaseAngle = 3.14;
Extrusion185.crossSection = new MFVec2f(new float[-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion185.scale = new MFVec2f(new float[0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion185.spine = new MFVec3f(new float[0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
Shape182.geometry = Extrusion185;

Transform181.child = new undefined();

Transform181.child[0] = Shape182;

Transform180.children = new MFNode();

Transform180.children[0] = Transform181;

fieldValue174.children[1] = Transform180;

ProtoInstance173.fieldValue = new MFNode();

ProtoInstance173.fieldValue[0] = fieldValue174;

fieldValue fieldValue186 = createNode("fieldValue");
fieldValue186.name = "name";
fieldValue186.value = "r_hindfoot";
ProtoInstance173.fieldValue[1] = fieldValue186;

fieldValue172.children = new MFNode();

fieldValue172.children[0] = ProtoInstance173;

ProtoInstance170.fieldValue[1] = fieldValue172;

fieldValue fieldValue187 = createNode("fieldValue");
fieldValue187.name = "name";
fieldValue187.value = "r_ankle";
ProtoInstance170.fieldValue[2] = fieldValue187;

fieldValue161.children[1] = ProtoInstance170;

ProtoInstance159.fieldValue[1] = fieldValue161;

fieldValue fieldValue188 = createNode("fieldValue");
fieldValue188.name = "name";
fieldValue188.value = "r_knee";
ProtoInstance159.fieldValue[2] = fieldValue188;

fieldValue150.children[1] = ProtoInstance159;

ProtoInstance148.fieldValue[1] = fieldValue150;

fieldValue fieldValue189 = createNode("fieldValue");
fieldValue189.name = "name";
fieldValue189.value = "r_hip";
ProtoInstance148.fieldValue[2] = fieldValue189;

fieldValue97.children[2] = ProtoInstance148;

ProtoInstance95.fieldValue[1] = fieldValue97;

fieldValue fieldValue190 = createNode("fieldValue");
fieldValue190.name = "name";
fieldValue190.value = "sacroiliac";
ProtoInstance95.fieldValue[2] = fieldValue190;

fieldValue94.children = new MFNode();

fieldValue94.children[0] = ProtoInstance95;

ProximitySensor ProximitySensor191 = createNode("ProximitySensor");
ProximitySensor191.DEF = "FinTriggerProximitySensor";
ProximitySensor191.size = new SFVec3f(new float[5,5,5]);
fieldValue94.children[1] = ProximitySensor191;

TimeSensor TimeSensor192 = createNode("TimeSensor");
TimeSensor192.DEF = "FinClock";
TimeSensor192.cycleInterval = 7;
TimeSensor192.loop = True;
fieldValue94.children[2] = TimeSensor192;

Group Group193 = createNode("Group");
Script Script194 = createNode("Script");
Script194.DEF = "FinScript";
field field195 = createNode("field");
field195.accessType = "outputOnly";
field195.type = "MFVec3f";
field195.name = "keyValueR";
Script194.field = new MFNode();

Script194.field[0] = field195;

field field196 = createNode("field");
field196.accessType = "outputOnly";
field196.type = "MFVec3f";
field196.name = "keyValueL";
Script194.field[1] = field196;

field field197 = createNode("field");
field197.accessType = "inputOnly";
field197.type = "SFFloat";
field197.name = "set_fraction";
Script194.field[2] = field197;

field field198 = createNode("field");
field198.accessType = "inputOnly";
field198.type = "SFBool";
field198.name = "finL";
Script194.field[3] = field198;

field field199 = createNode("field");
field199.accessType = "inputOnly";
field199.type = "SFBool";
field199.name = "finR";
Script194.field[4] = field199;

field field200 = createNode("field");
field200.accessType = "initializeOnly";
field200.type = "SFBool";
field200.name = "traceEnabled";
field200.value = "true";
Script194.field[5] = field200;


Script194.setSourceCode(`ecmascript:\n"+
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
"	if (traceEnabled) Browser.println ('[Fin Move]' + outputString);\n"+
"}`)
Group193.children = new MFNode();

Group193.children[0] = Script194;

fieldValue94.children[3] = Group193;

ProtoInstance ProtoInstance201 = createNode("ProtoInstance");
ProtoInstance201.DEF = "hanim_vl1";
ProtoInstance201.name = "Joint";
fieldValue fieldValue202 = createNode("fieldValue");
fieldValue202.name = "center";
fieldValue202.value = "-0.00405 1.07 -0.0275";
ProtoInstance201.fieldValue = new MFNode();

ProtoInstance201.fieldValue[0] = fieldValue202;

fieldValue fieldValue203 = createNode("fieldValue");
fieldValue203.name = "children";
ProtoInstance ProtoInstance204 = createNode("ProtoInstance");
ProtoInstance204.DEF = "hanim_c7";
ProtoInstance204.name = "Segment";
fieldValue fieldValue205 = createNode("fieldValue");
fieldValue205.name = "children";
Transform Transform206 = createNode("Transform");
Transform206.translation = new SFVec3f(new float[0,-0.09,0]);
Transform206.scale = new SFVec3f(new float[1.05,1.05,1.05]);
Shape Shape207 = createNode("Shape");
Appearance Appearance208 = createNode("Appearance");
Material Material209 = createNode("Material");
Material209.DEF = "WetShirtColor";
Material209.ambientIntensity = 0.25;
Material209.diffuseColor = new SFColor(new float[0,0,0.502]);
Appearance208.material = Material209;

ImageTexture ImageTexture210 = createNode("ImageTexture");
ImageTexture210.DEF = "small_logo_Tex";
ImageTexture210.url = new MFString(new java.lang.String["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif"]);
Appearance208.texture = ImageTexture210;

Shape207.appearance = Appearance208;

IndexedFaceSet IndexedFaceSet211 = createNode("IndexedFaceSet");
IndexedFaceSet211.creaseAngle = 1.59;
IndexedFaceSet211.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
TextureCoordinate TextureCoordinate212 = createNode("TextureCoordinate");
TextureCoordinate212.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet211.texCoord = TextureCoordinate212;

Coordinate Coordinate213 = createNode("Coordinate");
Coordinate213.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet211.coord = Coordinate213;

Shape207.geometry = IndexedFaceSet211;

Transform206.child = new undefined();

Transform206.child[0] = Shape207;

fieldValue205.children = new MFNode();

fieldValue205.children[0] = Transform206;

Transform Transform214 = createNode("Transform");
Transform214.translation = new SFVec3f(new float[0,1.18,0.015]);
Transform214.scale = new SFVec3f(new float[1.25,1.1,1.3]);
Group Group215 = createNode("Group");
Transform Transform216 = createNode("Transform");
Transform216.translation = new SFVec3f(new float[0,-1.2,0]);
Shape Shape217 = createNode("Shape");
Appearance Appearance218 = createNode("Appearance");
Material Material219 = createNode("Material");
Material219.DEF = "BCLColor";
Material219.ambientIntensity = 0.25;
Material219.diffuseColor = new SFColor(new float[0.0588,0.0588,0.0588]);
Material219.shininess = 0.5;
Appearance218.material = Material219;

Shape217.appearance = Appearance218;

IndexedFaceSet IndexedFaceSet220 = createNode("IndexedFaceSet");
IndexedFaceSet220.solid = False;
IndexedFaceSet220.creaseAngle = 1.59;
IndexedFaceSet220.coordIndex = new MFInt32(new int[4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1]);
TextureCoordinate TextureCoordinate221 = createNode("TextureCoordinate");
TextureCoordinate221.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet220.texCoord = TextureCoordinate221;

Coordinate Coordinate222 = createNode("Coordinate");
Coordinate222.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet220.coord = Coordinate222;

Shape217.geometry = IndexedFaceSet220;

Transform216.child = new undefined();

Transform216.child[0] = Shape217;

Group215.children = new MFNode();

Group215.children[0] = Transform216;

Transform Transform223 = createNode("Transform");
Transform223.translation = new SFVec3f(new float[0.13,0.22,-0.1]);
Transform223.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform223.scale = new SFVec3f(new float[2,1.5,1.5]);
Transform Transform224 = createNode("Transform");
Transform224.rotation = new SFRotation(new float[1,0,0,1.4]);
Shape Shape225 = createNode("Shape");
Shape225.DEF = "BCLSnorkelPad";
Appearance Appearance226 = createNode("Appearance");
Material Material227 = createNode("Material");
Material227.USE = "BCLColor";
Appearance226.material = Material227;

Shape225.appearance = Appearance226;

Extrusion Extrusion228 = createNode("Extrusion");
Extrusion228.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion228.spine = new MFVec3f(new float[-0.03,0.01,0,-0.005,0.04,0,0,0.06,0,-0.01,0.075,0]);
Shape225.geometry = Extrusion228;

Transform224.child = new undefined();

Transform224.child[0] = Shape225;

Transform223.children = new MFNode();

Transform223.children[0] = Transform224;

Group215.children[1] = Transform223;

Transform Transform229 = createNode("Transform");
Transform229.translation = new SFVec3f(new float[0.07,0.08,0.125]);
Transform229.rotation = new SFRotation(new float[-1,0,0,0.8]);
Shape Shape230 = createNode("Shape");
Appearance Appearance231 = createNode("Appearance");
Material Material232 = createNode("Material");
Material232.DEF = "BCLSnorkel";
Material232.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Material232.shininess = 0.5;
Material232.transparency = 0.1;
Appearance231.material = Material232;

Shape230.appearance = Appearance231;

Extrusion Extrusion233 = createNode("Extrusion");
Extrusion233.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion233.scale = new MFVec2f(new float[0.8,0.8,1,1]);
Extrusion233.spine = new MFVec3f(new float[0.03,0.03,-0.05,0.05,0.2,0]);
Shape230.geometry = Extrusion233;

Transform229.child = new undefined();

Transform229.child[0] = Shape230;

Group215.children[2] = Transform229;

Group Group234 = createNode("Group");
Group234.DEF = "buckle";
Transform Transform235 = createNode("Transform");
Transform235.translation = new SFVec3f(new float[-0.08,0.1,0.029]);
Transform235.rotation = new SFRotation(new float[-1,0,0,0.68]);
Shape Shape236 = createNode("Shape");
Appearance Appearance237 = createNode("Appearance");
Appearance237.DEF = "buckleHolder";
Material Material238 = createNode("Material");
Material238.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Appearance237.material = Material238;

Shape236.appearance = Appearance237;

Box Box239 = createNode("Box");
Box239.size = new SFVec3f(new float[0.03,0.03,0.005]);
Shape236.geometry = Box239;

Transform235.child = new undefined();

Transform235.child[0] = Shape236;

Group234.children = new MFNode();

Group234.children[0] = Transform235;

Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.03,0.1,0.027]);
Transform240.rotation = new SFRotation(new float[-1,0,0,0.68]);
Shape Shape241 = createNode("Shape");
Appearance Appearance242 = createNode("Appearance");
Appearance242.USE = "buckleHolder";
Shape241.appearance = Appearance242;

Box Box243 = createNode("Box");
Box243.size = new SFVec3f(new float[0.15,0.03,0.001]);
Shape241.geometry = Box243;

Transform240.child = new undefined();

Transform240.child[0] = Shape241;

Group234.children[1] = Transform240;

Transform Transform244 = createNode("Transform");
Transform244.translation = new SFVec3f(new float[-0.045,0.1,0.028]);
Transform244.rotation = new SFRotation(new float[-1,0,0,0.68]);
Shape Shape245 = createNode("Shape");
Appearance Appearance246 = createNode("Appearance");
Appearance246.DEF = "pin";
Material Material247 = createNode("Material");
Appearance246.material = Material247;

Shape245.appearance = Appearance246;

Box Box248 = createNode("Box");
Box248.size = new SFVec3f(new float[0.02,0.028,0.005]);
Shape245.geometry = Box248;

Transform244.child = new undefined();

Transform244.child[0] = Shape245;

Group234.children[2] = Transform244;

Transform Transform249 = createNode("Transform");
Transform249.translation = new SFVec3f(new float[-0.06,0.1,0.029]);
Transform249.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape250 = createNode("Shape");
Appearance Appearance251 = createNode("Appearance");
Appearance251.USE = "pin";
Shape250.appearance = Appearance251;

Cylinder Cylinder252 = createNode("Cylinder");
Cylinder252.height = 0.02;
Cylinder252.radius = 0.0024;
Shape250.geometry = Cylinder252;

Transform249.child = new undefined();

Transform249.child[0] = Shape250;

Group234.children[3] = Transform249;

Transform Transform253 = createNode("Transform");
Transform253.translation = new SFVec3f(new float[-0.06,0.109,0.0217]);
Transform253.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape254 = createNode("Shape");
Appearance Appearance255 = createNode("Appearance");
Appearance255.USE = "pin";
Shape254.appearance = Appearance255;

Cylinder Cylinder256 = createNode("Cylinder");
Cylinder256.height = 0.02;
Cylinder256.radius = 0.0024;
Shape254.geometry = Cylinder256;

Transform253.child = new undefined();

Transform253.child[0] = Shape254;

Group234.children[4] = Transform253;

Transform Transform257 = createNode("Transform");
Transform257.translation = new SFVec3f(new float[-0.06,0.091,0.036]);
Transform257.rotation = new SFRotation(new float[0,0,1,1.57]);
Shape Shape258 = createNode("Shape");
Appearance Appearance259 = createNode("Appearance");
Appearance259.USE = "pin";
Shape258.appearance = Appearance259;

Cylinder Cylinder260 = createNode("Cylinder");
Cylinder260.height = 0.02;
Cylinder260.radius = 0.0024;
Shape258.geometry = Cylinder260;

Transform257.child = new undefined();

Transform257.child[0] = Shape258;

Group234.children[5] = Transform257;

Group215.children[3] = Group234;

Group Group261 = createNode("Group");
Group261.DEF = "buckleBelt";
Transform Transform262 = createNode("Transform");
Transform262.translation = new SFVec3f(new float[-0.07,-0.12,0.038]);
Transform262.rotation = new SFRotation(new float[0,1,0,-0.68]);
Shape Shape263 = createNode("Shape");
Appearance Appearance264 = createNode("Appearance");
Appearance264.USE = "buckleHolder";
Shape263.appearance = Appearance264;

Box Box265 = createNode("Box");
Box265.size = new SFVec3f(new float[0.04,0.1,0.005]);
Shape263.geometry = Box265;

Transform262.child = new undefined();

Transform262.child[0] = Shape263;

Group261.children = new MFNode();

Group261.children[0] = Transform262;

Transform Transform266 = createNode("Transform");
Transform266.translation = new SFVec3f(new float[0.005,-0.12,0.053]);
Shape Shape267 = createNode("Shape");
Appearance Appearance268 = createNode("Appearance");
Appearance268.USE = "buckleHolder";
Shape267.appearance = Appearance268;

Box Box269 = createNode("Box");
Box269.size = new SFVec3f(new float[0.12,0.11,0.001]);
Shape267.geometry = Box269;

Transform266.child = new undefined();

Transform266.child[0] = Shape267;

Group261.children[1] = Transform266;

Transform Transform270 = createNode("Transform");
Transform270.translation = new SFVec3f(new float[0.075,-0.12,0.038]);
Transform270.rotation = new SFRotation(new float[0,1,0,0.68]);
Shape Shape271 = createNode("Shape");
Appearance Appearance272 = createNode("Appearance");
Appearance272.USE = "buckleHolder";
Shape271.appearance = Appearance272;

Box Box273 = createNode("Box");
Box273.size = new SFVec3f(new float[0.04,0.1,0.005]);
Shape271.geometry = Box273;

Transform270.child = new undefined();

Transform270.child[0] = Shape271;

Group261.children[2] = Transform270;

Group215.children[4] = Group261;

Transform214.children = new MFNode();

Transform214.children[0] = Group215;

fieldValue205.children[1] = Transform214;

Transform Transform274 = createNode("Transform");
Transform274.DEF = "ScubaTank";
Transform274.translation = new SFVec3f(new float[0,1.1,-0.23]);
Transform274.rotation = new SFRotation(new float[0,1,0,3.14]);
Transform274.scale = new SFVec3f(new float[0.8,0.8,0.8]);
Transform Transform275 = createNode("Transform");
Shape Shape276 = createNode("Shape");
Appearance Appearance277 = createNode("Appearance");
Material Material278 = createNode("Material");
Material278.DEF = "tank";
Material278.ambientIntensity = 0.3;
Material278.diffuseColor = new SFColor(new float[0.3,0.3,0.5]);
Material278.specularColor = new SFColor(new float[0.7,0.7,0.8]);
Material278.shininess = 0.1;
Appearance277.material = Material278;

Shape276.appearance = Appearance277;

Cylinder Cylinder279 = createNode("Cylinder");
Cylinder279.height = 0.7;
Cylinder279.radius = 0.1;
Shape276.geometry = Cylinder279;

Transform275.child = new undefined();

Transform275.child[0] = Shape276;

Transform274.children = new MFNode();

Transform274.children[0] = Transform275;

Transform Transform280 = createNode("Transform");
Transform280.translation = new SFVec3f(new float[0,0.35,0]);
Shape Shape281 = createNode("Shape");
Appearance Appearance282 = createNode("Appearance");
Material Material283 = createNode("Material");
Material283.USE = "tank";
Appearance282.material = Material283;

Shape281.appearance = Appearance282;

Sphere Sphere284 = createNode("Sphere");
Sphere284.radius = 0.098;
Shape281.geometry = Sphere284;

Transform280.child = new undefined();

Transform280.child[0] = Shape281;

Transform274.children[1] = Transform280;

Transform Transform285 = createNode("Transform");
Transform285.translation = new SFVec3f(new float[0,-0.35,0]);
Shape Shape286 = createNode("Shape");
Shape286.DEF = "tankBottom";
Appearance Appearance287 = createNode("Appearance");
Material Material288 = createNode("Material");
Material288.ambientIntensity = 0.3;
Material288.diffuseColor = new SFColor(new float[0,0,0]);
Appearance287.material = Material288;

Shape286.appearance = Appearance287;

Cylinder Cylinder289 = createNode("Cylinder");
Cylinder289.height = 0.06;
Cylinder289.radius = 0.101;
Shape286.geometry = Cylinder289;

Transform285.child = new undefined();

Transform285.child[0] = Shape286;

Transform274.children[2] = Transform285;

Group Group290 = createNode("Group");
Group290.DEF = "tankNozzle";
Transform Transform291 = createNode("Transform");
Transform Transform292 = createNode("Transform");
Transform292.translation = new SFVec3f(new float[0,0.45,0]);
Shape Shape293 = createNode("Shape");
Shape293.DEF = "pressure";
Appearance Appearance294 = createNode("Appearance");
Material Material295 = createNode("Material");
Material295.DEF = "pressureColor";
Material295.ambientIntensity = 0.4;
Material295.diffuseColor = new SFColor(new float[0.91,0.91,0.91]);
Material295.specularColor = new SFColor(new float[0.91,0.9,0.91]);
Material295.shininess = 0.16;
Appearance294.material = Material295;

Shape293.appearance = Appearance294;

Cylinder Cylinder296 = createNode("Cylinder");
Cylinder296.height = 0.1;
Cylinder296.radius = 0.015;
Shape293.geometry = Cylinder296;

Transform292.child = new undefined();

Transform292.child[0] = Shape293;

Transform291.children = new MFNode();

Transform291.children[0] = Transform292;

Transform Transform297 = createNode("Transform");
Transform297.translation = new SFVec3f(new float[0,0.5,0]);
Shape Shape298 = createNode("Shape");
Shape298.DEF = "pressureTop";
Appearance Appearance299 = createNode("Appearance");
Material Material300 = createNode("Material");
Material300.DEF = "top";
Material300.diffuseColor = new SFColor(new float[0,0,0]);
Appearance299.material = Material300;

Shape298.appearance = Appearance299;

Cylinder Cylinder301 = createNode("Cylinder");
Cylinder301.height = 0.02;
Cylinder301.radius = 0.025;
Shape298.geometry = Cylinder301;

Transform297.child = new undefined();

Transform297.child[0] = Shape298;

Transform291.children[1] = Transform297;

Transform Transform302 = createNode("Transform");
Transform302.translation = new SFVec3f(new float[-0.028,0.462,0]);
Transform302.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform Transform303 = createNode("Transform");
Shape Shape304 = createNode("Shape");
Shape304.DEF = "connectorToRegulator";
Appearance Appearance305 = createNode("Appearance");
Material Material306 = createNode("Material");
Material306.USE = "pressureColor";
Appearance305.material = Material306;

Shape304.appearance = Appearance305;

Cylinder Cylinder307 = createNode("Cylinder");
Cylinder307.height = 0.03;
Cylinder307.radius = 0.01;
Shape304.geometry = Cylinder307;

Transform303.child = new undefined();

Transform303.child[0] = Shape304;

Transform302.children = new MFNode();

Transform302.children[0] = Transform303;

Transform Transform308 = createNode("Transform");
Transform308.translation = new SFVec3f(new float[0,0.02,0]);
Shape Shape309 = createNode("Shape");
Shape309.DEF = "connectorToRegulatorTop";
Appearance Appearance310 = createNode("Appearance");
Material Material311 = createNode("Material");
Material311.USE = "top";
Appearance310.material = Material311;

Shape309.appearance = Appearance310;

Cylinder Cylinder312 = createNode("Cylinder");
Cylinder312.height = 0.02;
Cylinder312.radius = 0.02;
Shape309.geometry = Cylinder312;

Transform308.child = new undefined();

Transform308.child[0] = Shape309;

Transform302.children[1] = Transform308;

Transform291.children[2] = Transform302;

Group290.children = new MFNode();

Group290.children[0] = Transform291;

Transform274.children[3] = Group290;

Transform Transform313 = createNode("Transform");
Transform313.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape314 = createNode("Shape");
Shape314.DEF = "tankHoldBelt";
Appearance Appearance315 = createNode("Appearance");
Material Material316 = createNode("Material");
Material316.ambientIntensity = 0.3;
Material316.diffuseColor = new SFColor(new float[0,0,0]);
Appearance315.material = Material316;

Shape314.appearance = Appearance315;

Cylinder Cylinder317 = createNode("Cylinder");
Cylinder317.height = 0.1;
Cylinder317.radius = 0.115;
Shape314.geometry = Cylinder317;

Transform313.child = new undefined();

Transform313.child[0] = Shape314;

Transform274.children[4] = Transform313;

fieldValue205.children[2] = Transform274;

ProtoInstance204.fieldValue = new MFNode();

ProtoInstance204.fieldValue[0] = fieldValue205;

fieldValue fieldValue318 = createNode("fieldValue");
fieldValue318.name = "name";
fieldValue318.value = "l1";
ProtoInstance204.fieldValue[1] = fieldValue318;

fieldValue203.children = new MFNode();

fieldValue203.children[0] = ProtoInstance204;

ProtoInstance ProtoInstance319 = createNode("ProtoInstance");
ProtoInstance319.DEF = "hanim_l_shoulder";
ProtoInstance319.name = "Joint";
fieldValue fieldValue320 = createNode("fieldValue");
fieldValue320.name = "center";
fieldValue320.value = "0.167 1.36 -0.0518";
ProtoInstance319.fieldValue = new MFNode();

ProtoInstance319.fieldValue[0] = fieldValue320;

fieldValue fieldValue321 = createNode("fieldValue");
fieldValue321.name = "children";
ProtoInstance ProtoInstance322 = createNode("ProtoInstance");
ProtoInstance322.DEF = "hanim_l_upperarm";
ProtoInstance322.name = "Segment";
fieldValue fieldValue323 = createNode("fieldValue");
fieldValue323.name = "children";
Transform Transform324 = createNode("Transform");
Transform324.DEF = "l_upperarm_adjust";
Transform324.translation = new SFVec3f(new float[0,0.0004203,-0.01665]);
Transform324.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform324.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Shape Shape325 = createNode("Shape");
Appearance Appearance326 = createNode("Appearance");
Material Material327 = createNode("Material");
Material327.USE = "WetShirtColor";
Appearance326.material = Material327;

Shape325.appearance = Appearance326;

IndexedFaceSet IndexedFaceSet328 = createNode("IndexedFaceSet");
IndexedFaceSet328.creaseAngle = 1.65;
IndexedFaceSet328.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
Coordinate Coordinate329 = createNode("Coordinate");
Coordinate329.point = new MFVec3f(new float[0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
IndexedFaceSet328.coord = Coordinate329;

Shape325.geometry = IndexedFaceSet328;

Transform324.child = new undefined();

Transform324.child[0] = Shape325;

fieldValue323.children = new MFNode();

fieldValue323.children[0] = Transform324;

ProtoInstance322.fieldValue = new MFNode();

ProtoInstance322.fieldValue[0] = fieldValue323;

fieldValue fieldValue330 = createNode("fieldValue");
fieldValue330.name = "name";
fieldValue330.value = "l_upperarm";
ProtoInstance322.fieldValue[1] = fieldValue330;

fieldValue321.children = new MFNode();

fieldValue321.children[0] = ProtoInstance322;

ProtoInstance ProtoInstance331 = createNode("ProtoInstance");
ProtoInstance331.DEF = "hanim_l_elbow";
ProtoInstance331.name = "Joint";
fieldValue fieldValue332 = createNode("fieldValue");
fieldValue332.name = "center";
fieldValue332.value = "0.196 1.07 -0.0518";
ProtoInstance331.fieldValue = new MFNode();

ProtoInstance331.fieldValue[0] = fieldValue332;

fieldValue fieldValue333 = createNode("fieldValue");
fieldValue333.name = "children";
ProtoInstance ProtoInstance334 = createNode("ProtoInstance");
ProtoInstance334.DEF = "hanim_l_forearm";
ProtoInstance334.name = "Segment";
fieldValue fieldValue335 = createNode("fieldValue");
fieldValue335.name = "children";
Transform Transform336 = createNode("Transform");
Transform336.DEF = "l_forearm_adjust";
Transform336.translation = new SFVec3f(new float[0,0.003724,-0.0236]);
Transform336.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform336.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Shape Shape337 = createNode("Shape");
Appearance Appearance338 = createNode("Appearance");
Material Material339 = createNode("Material");
Material339.USE = "WetShirtColor";
Appearance338.material = Material339;

Shape337.appearance = Appearance338;

IndexedFaceSet IndexedFaceSet340 = createNode("IndexedFaceSet");
IndexedFaceSet340.creaseAngle = 1.75;
IndexedFaceSet340.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
Coordinate Coordinate341 = createNode("Coordinate");
Coordinate341.point = new MFVec3f(new float[0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
IndexedFaceSet340.coord = Coordinate341;

Shape337.geometry = IndexedFaceSet340;

Transform336.child = new undefined();

Transform336.child[0] = Shape337;

fieldValue335.children = new MFNode();

fieldValue335.children[0] = Transform336;

ProtoInstance334.fieldValue = new MFNode();

ProtoInstance334.fieldValue[0] = fieldValue335;

fieldValue fieldValue342 = createNode("fieldValue");
fieldValue342.name = "name";
fieldValue342.value = "l_forearm";
ProtoInstance334.fieldValue[1] = fieldValue342;

fieldValue333.children = new MFNode();

fieldValue333.children[0] = ProtoInstance334;

ProtoInstance ProtoInstance343 = createNode("ProtoInstance");
ProtoInstance343.DEF = "hanim_l_wrist";
ProtoInstance343.name = "Joint";
fieldValue fieldValue344 = createNode("fieldValue");
fieldValue344.name = "center";
fieldValue344.value = "0.213 0.811 -0.0338";
ProtoInstance343.fieldValue = new MFNode();

ProtoInstance343.fieldValue[0] = fieldValue344;

fieldValue fieldValue345 = createNode("fieldValue");
fieldValue345.name = "children";
ProtoInstance ProtoInstance346 = createNode("ProtoInstance");
ProtoInstance346.DEF = "hanim_l_hand";
ProtoInstance346.name = "Segment";
fieldValue fieldValue347 = createNode("fieldValue");
fieldValue347.name = "children";
Transform Transform348 = createNode("Transform");
Transform348.DEF = "l_hand_adjust";
Transform348.translation = new SFVec3f(new float[0,0.005142,-0.008662]);
Transform348.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform348.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Shape Shape349 = createNode("Shape");
Appearance Appearance350 = createNode("Appearance");
Material Material351 = createNode("Material");
Material351.DEF = "Skin_Color";
Material351.ambientIntensity = 0.25;
Material351.diffuseColor = new SFColor(new float[0.749,0.601,0.462]);
Appearance350.material = Material351;

Shape349.appearance = Appearance350;

IndexedFaceSet IndexedFaceSet352 = createNode("IndexedFaceSet");
IndexedFaceSet352.creaseAngle = 1.48;
IndexedFaceSet352.coordIndex = new MFInt32(new int[2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
Coordinate Coordinate353 = createNode("Coordinate");
Coordinate353.point = new MFVec3f(new float[0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
IndexedFaceSet352.coord = Coordinate353;

Shape349.geometry = IndexedFaceSet352;

Transform348.child = new undefined();

Transform348.child[0] = Shape349;

fieldValue347.children = new MFNode();

fieldValue347.children[0] = Transform348;

ProtoInstance346.fieldValue = new MFNode();

ProtoInstance346.fieldValue[0] = fieldValue347;

fieldValue fieldValue354 = createNode("fieldValue");
fieldValue354.name = "name";
fieldValue354.value = "l_hand";
ProtoInstance346.fieldValue[1] = fieldValue354;

fieldValue345.children = new MFNode();

fieldValue345.children[0] = ProtoInstance346;

ProtoInstance343.fieldValue[1] = fieldValue345;

fieldValue fieldValue355 = createNode("fieldValue");
fieldValue355.name = "name";
fieldValue355.value = "l_wrist";
ProtoInstance343.fieldValue[2] = fieldValue355;

fieldValue333.children[1] = ProtoInstance343;

ProtoInstance331.fieldValue[1] = fieldValue333;

fieldValue fieldValue356 = createNode("fieldValue");
fieldValue356.name = "name";
fieldValue356.value = "l_elbow";
ProtoInstance331.fieldValue[2] = fieldValue356;

fieldValue321.children[1] = ProtoInstance331;

ProtoInstance319.fieldValue[1] = fieldValue321;

fieldValue fieldValue357 = createNode("fieldValue");
fieldValue357.name = "name";
fieldValue357.value = "l_shoulder";
ProtoInstance319.fieldValue[2] = fieldValue357;

fieldValue203.children[1] = ProtoInstance319;

ProtoInstance ProtoInstance358 = createNode("ProtoInstance");
ProtoInstance358.DEF = "hanim_r_shoulder";
ProtoInstance358.name = "Joint";
fieldValue fieldValue359 = createNode("fieldValue");
fieldValue359.name = "center";
fieldValue359.value = "-0.167 1.36 -0.0458";
ProtoInstance358.fieldValue = new MFNode();

ProtoInstance358.fieldValue[0] = fieldValue359;

fieldValue fieldValue360 = createNode("fieldValue");
fieldValue360.name = "children";
ProtoInstance ProtoInstance361 = createNode("ProtoInstance");
ProtoInstance361.DEF = "hanim_r_upperarm";
ProtoInstance361.name = "Segment";
fieldValue fieldValue362 = createNode("fieldValue");
fieldValue362.name = "children";
Transform Transform363 = createNode("Transform");
Transform363.DEF = "r_upperarm_adjust";
Transform363.translation = new SFVec3f(new float[0,0.000589,-0.01169]);
Transform363.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform363.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Shape Shape364 = createNode("Shape");
Appearance Appearance365 = createNode("Appearance");
Material Material366 = createNode("Material");
Material366.USE = "WetShirtColor";
Appearance365.material = Material366;

Shape364.appearance = Appearance365;

IndexedFaceSet IndexedFaceSet367 = createNode("IndexedFaceSet");
IndexedFaceSet367.creaseAngle = 1.53;
IndexedFaceSet367.coordIndex = new MFInt32(new int[14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
Coordinate Coordinate368 = createNode("Coordinate");
Coordinate368.point = new MFVec3f(new float[-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
IndexedFaceSet367.coord = Coordinate368;

Shape364.geometry = IndexedFaceSet367;

Transform363.child = new undefined();

Transform363.child[0] = Shape364;

fieldValue362.children = new MFNode();

fieldValue362.children[0] = Transform363;

ProtoInstance361.fieldValue = new MFNode();

ProtoInstance361.fieldValue[0] = fieldValue362;

fieldValue fieldValue369 = createNode("fieldValue");
fieldValue369.name = "name";
fieldValue369.value = "r_upperarm";
ProtoInstance361.fieldValue[1] = fieldValue369;

fieldValue360.children = new MFNode();

fieldValue360.children[0] = ProtoInstance361;

ProtoInstance ProtoInstance370 = createNode("ProtoInstance");
ProtoInstance370.DEF = "hanim_r_elbow";
ProtoInstance370.name = "Joint";
fieldValue fieldValue371 = createNode("fieldValue");
fieldValue371.name = "center";
fieldValue371.value = "-0.192 1.07 -0.0498";
ProtoInstance370.fieldValue = new MFNode();

ProtoInstance370.fieldValue[0] = fieldValue371;

fieldValue fieldValue372 = createNode("fieldValue");
fieldValue372.name = "children";
ProtoInstance ProtoInstance373 = createNode("ProtoInstance");
ProtoInstance373.DEF = "hanim_r_forearm";
ProtoInstance373.name = "Segment";
fieldValue fieldValue374 = createNode("fieldValue");
fieldValue374.name = "children";
Transform Transform375 = createNode("Transform");
Transform375.DEF = "r_forearm_adjust";
Transform375.translation = new SFVec3f(new float[0,0.003466,-0.01065]);
Transform375.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform375.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Shape Shape376 = createNode("Shape");
Appearance Appearance377 = createNode("Appearance");
Material Material378 = createNode("Material");
Material378.USE = "WetShirtColor";
Appearance377.material = Material378;

Shape376.appearance = Appearance377;

IndexedFaceSet IndexedFaceSet379 = createNode("IndexedFaceSet");
IndexedFaceSet379.creaseAngle = 1.73;
IndexedFaceSet379.coordIndex = new MFInt32(new int[20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
Coordinate Coordinate380 = createNode("Coordinate");
Coordinate380.point = new MFVec3f(new float[-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
IndexedFaceSet379.coord = Coordinate380;

Shape376.geometry = IndexedFaceSet379;

Transform375.child = new undefined();

Transform375.child[0] = Shape376;

fieldValue374.children = new MFNode();

fieldValue374.children[0] = Transform375;

ProtoInstance373.fieldValue = new MFNode();

ProtoInstance373.fieldValue[0] = fieldValue374;

fieldValue fieldValue381 = createNode("fieldValue");
fieldValue381.name = "name";
fieldValue381.value = "r_forearm";
ProtoInstance373.fieldValue[1] = fieldValue381;

fieldValue372.children = new MFNode();

fieldValue372.children[0] = ProtoInstance373;

ProtoInstance ProtoInstance382 = createNode("ProtoInstance");
ProtoInstance382.DEF = "hanim_r_wrist";
ProtoInstance382.name = "Joint";
fieldValue fieldValue383 = createNode("fieldValue");
fieldValue383.name = "center";
fieldValue383.value = "-0.217 0.811 -0.0338";
ProtoInstance382.fieldValue = new MFNode();

ProtoInstance382.fieldValue[0] = fieldValue383;

fieldValue fieldValue384 = createNode("fieldValue");
fieldValue384.name = "children";
ProtoInstance ProtoInstance385 = createNode("ProtoInstance");
ProtoInstance385.DEF = "hanim_r_hand";
ProtoInstance385.name = "Segment";
fieldValue fieldValue386 = createNode("fieldValue");
fieldValue386.name = "children";
Transform Transform387 = createNode("Transform");
Transform387.DEF = "r_hand_adjust";
Transform387.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
Transform387.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Shape Shape388 = createNode("Shape");
Appearance Appearance389 = createNode("Appearance");
Material Material390 = createNode("Material");
Material390.USE = "Skin_Color";
Appearance389.material = Material390;

Shape388.appearance = Appearance389;

IndexedFaceSet IndexedFaceSet391 = createNode("IndexedFaceSet");
IndexedFaceSet391.creaseAngle = 1.57;
IndexedFaceSet391.coordIndex = new MFInt32(new int[10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
Coordinate Coordinate392 = createNode("Coordinate");
Coordinate392.point = new MFVec3f(new float[-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
IndexedFaceSet391.coord = Coordinate392;

Shape388.geometry = IndexedFaceSet391;

Transform387.child = new undefined();

Transform387.child[0] = Shape388;

fieldValue386.children = new MFNode();

fieldValue386.children[0] = Transform387;

ProtoInstance385.fieldValue = new MFNode();

ProtoInstance385.fieldValue[0] = fieldValue386;

fieldValue fieldValue393 = createNode("fieldValue");
fieldValue393.name = "name";
fieldValue393.value = "r_hand";
ProtoInstance385.fieldValue[1] = fieldValue393;

fieldValue384.children = new MFNode();

fieldValue384.children[0] = ProtoInstance385;

ProtoInstance382.fieldValue[1] = fieldValue384;

fieldValue fieldValue394 = createNode("fieldValue");
fieldValue394.name = "name";
fieldValue394.value = "r_wrist";
ProtoInstance382.fieldValue[2] = fieldValue394;

fieldValue372.children[1] = ProtoInstance382;

ProtoInstance370.fieldValue[1] = fieldValue372;

fieldValue fieldValue395 = createNode("fieldValue");
fieldValue395.name = "name";
fieldValue395.value = "r_elbow";
ProtoInstance370.fieldValue[2] = fieldValue395;

fieldValue360.children[1] = ProtoInstance370;

ProtoInstance358.fieldValue[1] = fieldValue360;

fieldValue fieldValue396 = createNode("fieldValue");
fieldValue396.name = "name";
fieldValue396.value = "r_shoulder";
ProtoInstance358.fieldValue[2] = fieldValue396;

fieldValue203.children[2] = ProtoInstance358;

ProtoInstance ProtoInstance397 = createNode("ProtoInstance");
ProtoInstance397.DEF = "hanim_vc4";
ProtoInstance397.name = "Joint";
fieldValue fieldValue398 = createNode("fieldValue");
fieldValue398.name = "center";
fieldValue398.value = "0 1.43 -0.0458";
ProtoInstance397.fieldValue = new MFNode();

ProtoInstance397.fieldValue[0] = fieldValue398;

fieldValue fieldValue399 = createNode("fieldValue");
fieldValue399.name = "children";
ProtoInstance ProtoInstance400 = createNode("ProtoInstance");
ProtoInstance400.DEF = "hanim_c4";
ProtoInstance400.name = "Segment";
fieldValue fieldValue401 = createNode("fieldValue");
fieldValue401.name = "children";
Shape Shape402 = createNode("Shape");
Appearance Appearance403 = createNode("Appearance");
Material Material404 = createNode("Material");
Material404.USE = "WetShirtColor";
Appearance403.material = Material404;

Shape402.appearance = Appearance403;

IndexedFaceSet IndexedFaceSet405 = createNode("IndexedFaceSet");
IndexedFaceSet405.DEF = "neck";
IndexedFaceSet405.creaseAngle = 1.91;
IndexedFaceSet405.coordIndex = new MFInt32(new int[6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
Coordinate Coordinate406 = createNode("Coordinate");
Coordinate406.point = new MFVec3f(new float[0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
IndexedFaceSet405.coord = Coordinate406;

Shape402.geometry = IndexedFaceSet405;

fieldValue401.children = new MFNode();

fieldValue401.children[0] = Shape402;

ProtoInstance400.fieldValue = new MFNode();

ProtoInstance400.fieldValue[0] = fieldValue401;

fieldValue fieldValue407 = createNode("fieldValue");
fieldValue407.name = "name";
fieldValue407.value = "c4";
ProtoInstance400.fieldValue[1] = fieldValue407;

fieldValue399.children = new MFNode();

fieldValue399.children[0] = ProtoInstance400;

ProtoInstance ProtoInstance408 = createNode("ProtoInstance");
ProtoInstance408.DEF = "hanim_skullbase";
ProtoInstance408.name = "Joint";
fieldValue fieldValue409 = createNode("fieldValue");
fieldValue409.name = "center";
fieldValue409.value = "0 1.54 -0.0409";
ProtoInstance408.fieldValue = new MFNode();

ProtoInstance408.fieldValue[0] = fieldValue409;

fieldValue fieldValue410 = createNode("fieldValue");
fieldValue410.name = "children";
ProtoInstance ProtoInstance411 = createNode("ProtoInstance");
ProtoInstance411.DEF = "hanim_skull";
ProtoInstance411.name = "Segment";
fieldValue fieldValue412 = createNode("fieldValue");
fieldValue412.name = "children";
Shape Shape413 = createNode("Shape");
Appearance Appearance414 = createNode("Appearance");
Material Material415 = createNode("Material");
Material415.USE = "Skin_Color";
Appearance414.material = Material415;

Shape413.appearance = Appearance414;

IndexedFaceSet IndexedFaceSet416 = createNode("IndexedFaceSet");
IndexedFaceSet416.DEF = "headIFS";
IndexedFaceSet416.creaseAngle = 0.7854;
IndexedFaceSet416.colorIndex = new MFInt32(new int[1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1]);
IndexedFaceSet416.coordIndex = new MFInt32(new int[48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
Color Color417 = createNode("Color");
Color417.color = new MFColor(new float[0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902,0,0,0.502]);
IndexedFaceSet416.color = Color417;

Coordinate Coordinate418 = createNode("Coordinate");
Coordinate418.DEF = "Face";
Coordinate418.point = new MFVec3f(new float[0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
IndexedFaceSet416.coord = Coordinate418;

Shape413.geometry = IndexedFaceSet416;

fieldValue412.children = new MFNode();

fieldValue412.children[0] = Shape413;

Transform Transform419 = createNode("Transform");
Transform419.DEF = "maskAndSnorkel";
Transform419.translation = new SFVec3f(new float[0,1.505,0.05]);
Transform Transform420 = createNode("Transform");
Shape Shape421 = createNode("Shape");
Shape421.DEF = "maskFrame";
Appearance Appearance422 = createNode("Appearance");
Material Material423 = createNode("Material");
Material423.DEF = "frameColor";
Material423.diffuseColor = new SFColor(new float[0,0,0]);
Appearance422.material = Material423;

Shape421.appearance = Appearance422;

IndexedFaceSet IndexedFaceSet424 = createNode("IndexedFaceSet");
IndexedFaceSet424.solid = False;
IndexedFaceSet424.creaseAngle = 1.45;
IndexedFaceSet424.coordIndex = new MFInt32(new int[0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
Coordinate Coordinate425 = createNode("Coordinate");
Coordinate425.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet424.coord = Coordinate425;

Shape421.geometry = IndexedFaceSet424;

Transform420.child = new undefined();

Transform420.child[0] = Shape421;

Transform419.children = new MFNode();

Transform419.children[0] = Transform420;

Transform Transform426 = createNode("Transform");
Transform426.DEF = "snorkelHoldRing";
Transform426.translation = new SFVec3f(new float[0.075,0.075,-0.02]);
Shape Shape427 = createNode("Shape");
Appearance Appearance428 = createNode("Appearance");
Material Material429 = createNode("Material");
Material429.USE = "frameColor";
Appearance428.material = Material429;

Shape427.appearance = Appearance428;

Cylinder Cylinder430 = createNode("Cylinder");
Cylinder430.height = 0.003;
Cylinder430.radius = 0.015;
Shape427.geometry = Cylinder430;

Transform426.child = new undefined();

Transform426.child[0] = Shape427;

Transform419.children[1] = Transform426;

Group Group431 = createNode("Group");
Group431.DEF = "snorkel";
Transform Transform432 = createNode("Transform");
Transform432.translation = new SFVec3f(new float[0,-0.02,0]);
Transform Transform433 = createNode("Transform");
Transform433.translation = new SFVec3f(new float[0.035,-0.07,-0.02]);
Transform433.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Shape Shape434 = createNode("Shape");
Appearance Appearance435 = createNode("Appearance");
Material Material436 = createNode("Material");
Material436.DEF = "snorkelTube";
Material436.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material436.transparency = 0.4;
Appearance435.material = Material436;

Shape434.appearance = Appearance435;

Extrusion Extrusion437 = createNode("Extrusion");
Extrusion437.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion437.spine = new MFVec3f(new float[-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03]);
Shape434.geometry = Extrusion437;

Transform433.child = new undefined();

Transform433.child[0] = Shape434;

Transform432.children = new MFNode();

Transform432.children[0] = Transform433;

Transform Transform438 = createNode("Transform");
Transform438.translation = new SFVec3f(new float[0.01,-0.04,-0.02]);
Transform438.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform438.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Shape Shape439 = createNode("Shape");
Appearance Appearance440 = createNode("Appearance");
Material Material441 = createNode("Material");
Material441.DEF = "Mouthpiece";
Material441.diffuseColor = new SFColor(new float[0.678,1,0.8]);
Material441.transparency = 0.4;
Appearance440.material = Material441;

Shape439.appearance = Appearance440;

Extrusion Extrusion442 = createNode("Extrusion");
Extrusion442.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion442.spine = new MFVec3f(new float[-0.01,-0.03,0,0,0,0,0.02,0.01,0]);
Shape439.geometry = Extrusion442;

Transform438.child = new undefined();

Transform438.child[0] = Shape439;

Transform432.children[1] = Transform438;

Transform Transform443 = createNode("Transform");
Transform443.translation = new SFVec3f(new float[0.005,-0.01,-0.02]);
Transform443.rotation = new SFRotation(new float[0,0,1,-0.85]);
Transform443.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Shape Shape444 = createNode("Shape");
Appearance Appearance445 = createNode("Appearance");
Material Material446 = createNode("Material");
Material446.USE = "Mouthpiece";
Appearance445.material = Material446;

Shape444.appearance = Appearance445;

Extrusion Extrusion447 = createNode("Extrusion");
Extrusion447.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion447.spine = new MFVec3f(new float[-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0]);
Shape444.geometry = Extrusion447;

Transform443.child = new undefined();

Transform443.child[0] = Shape444;

Transform432.children[2] = Transform443;

Group431.children = new MFNode();

Group431.children[0] = Transform432;

Transform419.children[2] = Group431;

Transform Transform448 = createNode("Transform");
Shape Shape449 = createNode("Shape");
Shape449.DEF = "maskLensR";
Appearance Appearance450 = createNode("Appearance");
Material Material451 = createNode("Material");
Material451.DEF = "plastic";
Material451.diffuseColor = new SFColor(new float[0.941,0.973,1]);
Material451.transparency = 0.8;
Appearance450.material = Material451;

Shape449.appearance = Appearance450;

IndexedFaceSet IndexedFaceSet452 = createNode("IndexedFaceSet");
IndexedFaceSet452.solid = False;
IndexedFaceSet452.creaseAngle = 1.45;
IndexedFaceSet452.coordIndex = new MFInt32(new int[12,1314,15,16,17,18,12,-1]);
Coordinate Coordinate453 = createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet452.coord = Coordinate453;

Shape449.geometry = IndexedFaceSet452;

Transform448.child = new undefined();

Transform448.child[0] = Shape449;

Transform419.children[3] = Transform448;

Transform Transform454 = createNode("Transform");
Shape Shape455 = createNode("Shape");
Shape455.DEF = "maskLensL";
Appearance Appearance456 = createNode("Appearance");
Material Material457 = createNode("Material");
Material457.USE = "plastic";
Appearance456.material = Material457;

Shape455.appearance = Appearance456;

IndexedFaceSet IndexedFaceSet458 = createNode("IndexedFaceSet");
IndexedFaceSet458.solid = False;
IndexedFaceSet458.creaseAngle = 1.45;
IndexedFaceSet458.coordIndex = new MFInt32(new int[19,20,21,22,23,24,25,19,-1]);
Coordinate Coordinate459 = createNode("Coordinate");
Coordinate459.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet458.coord = Coordinate459;

Shape455.geometry = IndexedFaceSet458;

Transform454.child = new undefined();

Transform454.child[0] = Shape455;

Transform419.children[4] = Transform454;

Transform Transform460 = createNode("Transform");
Shape Shape461 = createNode("Shape");
Shape461.DEF = "nose";
Appearance Appearance462 = createNode("Appearance");
Material Material463 = createNode("Material");
Material463.DEF = "plasticFit";
Material463.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material463.transparency = 0.7;
Appearance462.material = Material463;

Shape461.appearance = Appearance462;

IndexedFaceSet IndexedFaceSet464 = createNode("IndexedFaceSet");
IndexedFaceSet464.solid = False;
IndexedFaceSet464.creaseAngle = 1.45;
IndexedFaceSet464.coordIndex = new MFInt32(new int[0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
Coordinate Coordinate465 = createNode("Coordinate");
Coordinate465.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet464.coord = Coordinate465;

Shape461.geometry = IndexedFaceSet464;

Transform460.child = new undefined();

Transform460.child[0] = Shape461;

Transform419.children[5] = Transform460;

Transform Transform466 = createNode("Transform");
Shape Shape467 = createNode("Shape");
Shape467.DEF = "faceFit";
Appearance Appearance468 = createNode("Appearance");
Material Material469 = createNode("Material");
Material469.USE = "plasticFit";
Appearance468.material = Material469;

Shape467.appearance = Appearance468;

IndexedFaceSet IndexedFaceSet470 = createNode("IndexedFaceSet");
IndexedFaceSet470.solid = False;
IndexedFaceSet470.creaseAngle = 1.45;
IndexedFaceSet470.coordIndex = new MFInt32(new int[1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
Coordinate Coordinate471 = createNode("Coordinate");
Coordinate471.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet470.coord = Coordinate471;

Shape467.geometry = IndexedFaceSet470;

Transform466.child = new undefined();

Transform466.child[0] = Shape467;

Transform419.children[6] = Transform466;

Transform Transform472 = createNode("Transform");
Shape Shape473 = createNode("Shape");
Shape473.DEF = "belt";
Appearance Appearance474 = createNode("Appearance");
Material Material475 = createNode("Material");
Material475.USE = "plastic";
Appearance474.material = Material475;

Shape473.appearance = Appearance474;

IndexedFaceSet IndexedFaceSet476 = createNode("IndexedFaceSet");
IndexedFaceSet476.solid = False;
IndexedFaceSet476.creaseAngle = 1.45;
IndexedFaceSet476.coordIndex = new MFInt32(new int[3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
Coordinate Coordinate477 = createNode("Coordinate");
Coordinate477.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175]);
IndexedFaceSet476.coord = Coordinate477;

Shape473.geometry = IndexedFaceSet476;

Transform472.child = new undefined();

Transform472.child[0] = Shape473;

Transform419.children[7] = Transform472;

fieldValue412.children[1] = Transform419;

Transform Transform478 = createNode("Transform");
Transform478.DEF = "mouthpiece";
Transform478.translation = new SFVec3f(new float[0,1.508,0.05]);
Transform478.rotation = new SFRotation(new float[0.86,-0.58,-0.58,2.09]);
Transform Transform479 = createNode("Transform");
Transform479.translation = new SFVec3f(new float[0,0.0018,0]);
Shape Shape480 = createNode("Shape");
Appearance Appearance481 = createNode("Appearance");
Material Material482 = createNode("Material");
Material482.DEF = "gray";
Material482.ambientIntensity = 0.3;
Material482.diffuseColor = new SFColor(new float[0.9,0.9,0.89]);
Material482.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Material482.shininess = 0.1;
Appearance481.material = Material482;

Shape480.appearance = Appearance481;

Cylinder Cylinder483 = createNode("Cylinder");
Cylinder483.height = 0.006;
Cylinder483.radius = 0.015;
Shape480.geometry = Cylinder483;

Transform479.child = new undefined();

Transform479.child[0] = Shape480;

Transform478.children = new MFNode();

Transform478.children[0] = Transform479;

Transform Transform484 = createNode("Transform");
Shape Shape485 = createNode("Shape");
Appearance Appearance486 = createNode("Appearance");
Material Material487 = createNode("Material");
Material487.DEF = "black";
Material487.diffuseColor = new SFColor(new float[0,0,0]);
Appearance486.material = Material487;

Shape485.appearance = Appearance486;

Cone Cone488 = createNode("Cone");
Cone488.height = 0.01;
Cone488.bottomRadius = 0.03;
Shape485.geometry = Cone488;

Transform484.child = new undefined();

Transform484.child[0] = Shape485;

Transform478.children[1] = Transform484;

Transform Transform489 = createNode("Transform");
Transform489.translation = new SFVec3f(new float[0,-0.015,0]);
Shape Shape490 = createNode("Shape");
Appearance Appearance491 = createNode("Appearance");
Material Material492 = createNode("Material");
Material492.USE = "black";
Appearance491.material = Material492;

Shape490.appearance = Appearance491;

Cylinder Cylinder493 = createNode("Cylinder");
Cylinder493.height = 0.02;
Cylinder493.radius = 0.03;
Shape490.geometry = Cylinder493;

Transform489.child = new undefined();

Transform489.child[0] = Shape490;

Transform478.children[2] = Transform489;

Transform Transform494 = createNode("Transform");
Transform494.translation = new SFVec3f(new float[0,-0.025,0]);
Shape Shape495 = createNode("Shape");
Appearance Appearance496 = createNode("Appearance");
Material Material497 = createNode("Material");
Material497.USE = "black";
Appearance496.material = Material497;

Shape495.appearance = Appearance496;

Cylinder Cylinder498 = createNode("Cylinder");
Cylinder498.height = 0.02;
Cylinder498.radius = 0.015;
Shape495.geometry = Cylinder498;

Transform494.child = new undefined();

Transform494.child[0] = Shape495;

Transform478.children[3] = Transform494;

Transform Transform499 = createNode("Transform");
Transform499.translation = new SFVec3f(new float[0,-0.04,0]);
Transform499.rotation = new SFRotation(new float[0,0,1,0.9]);
Shape Shape500 = createNode("Shape");
Shape500.DEF = "mouthpiecePlastic";
Appearance Appearance501 = createNode("Appearance");
Material Material502 = createNode("Material");
Material502.diffuseColor = new SFColor(new float[1,1,1]);
Material502.emissiveColor = new SFColor(new float[1,1,1]);
Appearance501.material = Material502;

Shape500.appearance = Appearance501;

Box Box503 = createNode("Box");
Box503.size = new SFVec3f(new float[0.002,0.03,0.018]);
Shape500.geometry = Box503;

Transform499.child = new undefined();

Transform499.child[0] = Shape500;

Transform478.children[4] = Transform499;

Transform Transform504 = createNode("Transform");
Transform504.translation = new SFVec3f(new float[0,-0.04,0]);
Transform504.rotation = new SFRotation(new float[0,0,1,-0.9]);
Shape Shape505 = createNode("Shape");
Shape505.USE = "mouthpiecePlastic";
Transform504.child = new undefined();

Transform504.child[0] = Shape505;

Transform478.children[5] = Transform504;

Transform Transform506 = createNode("Transform");
Transform506.translation = new SFVec3f(new float[0,-0.015,0.03]);
Transform506.rotation = new SFRotation(new float[1,0,0,1.57]);
Shape Shape507 = createNode("Shape");
Appearance Appearance508 = createNode("Appearance");
Material Material509 = createNode("Material");
Material509.USE = "gray";
Appearance508.material = Material509;

Shape507.appearance = Appearance508;

Cylinder Cylinder510 = createNode("Cylinder");
Cylinder510.height = 0.02;
Cylinder510.radius = 0.0075;
Shape507.geometry = Cylinder510;

Transform506.child = new undefined();

Transform506.child[0] = Shape507;

Transform478.children[6] = Transform506;

Transform Transform511 = createNode("Transform");
Transform511.DEF = "airTube";
Transform511.translation = new SFVec3f(new float[0,-0.02,0.055]);
Transform511.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform511.scale = new SFVec3f(new float[0.7,0.7,0.7]);
Transform Transform512 = createNode("Transform");
Transform512.rotation = new SFRotation(new float[-0.21,0.21,-0.95,4.67]);
Shape Shape513 = createNode("Shape");
Appearance Appearance514 = createNode("Appearance");
Material Material515 = createNode("Material");
Material515.diffuseColor = new SFColor(new float[0,0,0]);
Appearance514.material = Material515;

Shape513.appearance = Appearance514;

Extrusion Extrusion516 = createNode("Extrusion");
Extrusion516.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion516.spine = new MFVec3f(new float[0.005,-0.03,0,-0.01,0.02,0,-0.03,0.08,0,-0.05,0.14,0,-0.08,0.19,0,-0.1,0.22,0,-0.12,0.25,0,-0.15,0.27,0,-0.18,0.28,0,-0.21,0.29,0,-0.26,0.28,0,-0.28,0.26,0,-0.305,0.23,0,-0.32,0.2,0,-0.34,0.16,0,-0.35,0.12,0,-0.37,0.04,0,-0.385,0,0,-0.39,-0.07,0]);
Shape513.geometry = Extrusion516;

Transform512.child = new undefined();

Transform512.child[0] = Shape513;

Transform511.children = new MFNode();

Transform511.children[0] = Transform512;

Transform478.children[7] = Transform511;

fieldValue412.children[2] = Transform478;

Transform Transform517 = createNode("Transform");
Transform517.DEF = "Bubbles";
Transform517.translation = new SFVec3f(new float[0,1.508,0.05]);
Transform517.scale = new SFVec3f(new float[0.35,0.35,0.35]);
Group Group518 = createNode("Group");
Group518.DEF = "Bubble";
TimeSensor TimeSensor519 = createNode("TimeSensor");
TimeSensor519.DEF = "BubbleClock";
TimeSensor519.cycleInterval = 6;
TimeSensor519.loop = True;
Group518.children = new MFNode();

Group518.children[0] = TimeSensor519;

PositionInterpolator PositionInterpolator520 = createNode("PositionInterpolator");
PositionInterpolator520.DEF = "BubblePath1";
PositionInterpolator520.key = new MFFloat(new float[0,0.5,0.8,0.9,1]);
PositionInterpolator520.keyValue = new MFVec3f(new float[0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509]);
Group518.children[1] = PositionInterpolator520;

PositionInterpolator PositionInterpolator521 = createNode("PositionInterpolator");
PositionInterpolator521.DEF = "BubblePath2";
PositionInterpolator521.key = new MFFloat(new float[0,0.3,0.64,0.85,1]);
PositionInterpolator521.keyValue = new MFVec3f(new float[0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.03848348,1.989,1.098373]);
Group518.children[2] = PositionInterpolator521;

PositionInterpolator PositionInterpolator522 = createNode("PositionInterpolator");
PositionInterpolator522.DEF = "BubblePath3";
PositionInterpolator522.key = new MFFloat(new float[0,0.1,0.45,0.7,1]);
PositionInterpolator522.keyValue = new MFVec3f(new float[0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734]);
Group518.children[3] = PositionInterpolator522;

PositionInterpolator PositionInterpolator523 = createNode("PositionInterpolator");
PositionInterpolator523.DEF = "BubblePath4";
PositionInterpolator523.key = new MFFloat(new float[0,0.5,0.6,0.8,1]);
PositionInterpolator523.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349]);
Group518.children[4] = PositionInterpolator523;

PositionInterpolator PositionInterpolator524 = createNode("PositionInterpolator");
PositionInterpolator524.DEF = "BubblePath5";
PositionInterpolator524.key = new MFFloat(new float[0,0.25,0.35,0.65,1]);
PositionInterpolator524.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1]);
Group518.children[5] = PositionInterpolator524;

PositionInterpolator PositionInterpolator525 = createNode("PositionInterpolator");
PositionInterpolator525.DEF = "BubblePath6";
PositionInterpolator525.key = new MFFloat(new float[0,0.15,0.22235,0.55565,1]);
PositionInterpolator525.keyValue = new MFVec3f(new float[0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14]);
Group518.children[6] = PositionInterpolator525;

PositionInterpolator PositionInterpolator526 = createNode("PositionInterpolator");
PositionInterpolator526.DEF = "BubblePath7";
PositionInterpolator526.key = new MFFloat(new float[0,0.2425,0.4535,0.6775,1]);
PositionInterpolator526.keyValue = new MFVec3f(new float[0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12]);
Group518.children[7] = PositionInterpolator526;

PositionInterpolator PositionInterpolator527 = createNode("PositionInterpolator");
PositionInterpolator527.DEF = "BubblePath8";
PositionInterpolator527.key = new MFFloat(new float[0,0.1125,0.5535,0.97865,1]);
PositionInterpolator527.keyValue = new MFVec3f(new float[0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86]);
Group518.children[8] = PositionInterpolator527;

PositionInterpolator PositionInterpolator528 = createNode("PositionInterpolator");
PositionInterpolator528.DEF = "BubblePath9";
PositionInterpolator528.key = new MFFloat(new float[0,0.0025,0.035,0.65,1]);
PositionInterpolator528.keyValue = new MFVec3f(new float[0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545]);
Group518.children[9] = PositionInterpolator528;

PositionInterpolator PositionInterpolator529 = createNode("PositionInterpolator");
PositionInterpolator529.DEF = "BubblePath10";
PositionInterpolator529.key = new MFFloat(new float[0,0.00025,0.035,0.6895,1]);
PositionInterpolator529.keyValue = new MFVec3f(new float[0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1]);
Group518.children[10] = PositionInterpolator529;

Transform Transform530 = createNode("Transform");
Transform Transform531 = createNode("Transform");
Transform531.DEF = "bubble1";
Transform531.translation = new SFVec3f(new float[0.5045,0.5045,0.5045]);
Shape Shape532 = createNode("Shape");
Appearance Appearance533 = createNode("Appearance");
Appearance533.DEF = "BubbleAppearance";
Material Material534 = createNode("Material");
Material534.diffuseColor = new SFColor(new float[1,1,1]);
Material534.transparency = 0.8;
Appearance533.material = Material534;

Shape532.appearance = Appearance533;

Sphere Sphere535 = createNode("Sphere");
Sphere535.radius = 0.025;
Shape532.geometry = Sphere535;

Transform531.child = new undefined();

Transform531.child[0] = Shape532;

Transform530.children = new MFNode();

Transform530.children[0] = Transform531;

Transform Transform536 = createNode("Transform");
Transform536.DEF = "bubble2";
Transform536.translation = new SFVec3f(new float[0.2106863,0.4106863,0.2724412]);
Shape Shape537 = createNode("Shape");
Appearance Appearance538 = createNode("Appearance");
Appearance538.USE = "BubbleAppearance";
Shape537.appearance = Appearance538;

Sphere Sphere539 = createNode("Sphere");
Sphere539.radius = 0.055;
Shape537.geometry = Sphere539;

Transform536.child = new undefined();

Transform536.child[0] = Shape537;

Transform530.children[1] = Transform536;

Transform Transform540 = createNode("Transform");
Transform540.DEF = "bubble3";
Transform540.translation = new SFVec3f(new float[0.4525714,0.5188095,0.005175238]);
Shape Shape541 = createNode("Shape");
Appearance Appearance542 = createNode("Appearance");
Appearance542.USE = "BubbleAppearance";
Shape541.appearance = Appearance542;

Sphere Sphere543 = createNode("Sphere");
Sphere543.radius = 0.065;
Shape541.geometry = Sphere543;

Transform540.child = new undefined();

Transform540.child[0] = Shape541;

Transform530.children[2] = Transform540;

Transform Transform544 = createNode("Transform");
Transform544.DEF = "bubble4";
Transform544.translation = new SFVec3f(new float[0.3363333,0.3363333,0.003363333]);
Shape Shape545 = createNode("Shape");
Appearance Appearance546 = createNode("Appearance");
Appearance546.USE = "BubbleAppearance";
Shape545.appearance = Appearance546;

Sphere Sphere547 = createNode("Sphere");
Sphere547.radius = 0.015;
Shape545.geometry = Sphere547;

Transform544.child = new undefined();

Transform544.child[0] = Shape545;

Transform530.children[3] = Transform544;

Transform Transform548 = createNode("Transform");
Transform548.DEF = "bubble5";
Transform548.translation = new SFVec3f(new float[0.5863334,0.5863334,0.005863333]);
Shape Shape549 = createNode("Shape");
Appearance Appearance550 = createNode("Appearance");
Appearance550.USE = "BubbleAppearance";
Shape549.appearance = Appearance550;

Sphere Sphere551 = createNode("Sphere");
Sphere551.radius = 0.075;
Shape549.geometry = Sphere551;

Transform548.child = new undefined();

Transform548.child[0] = Shape549;

Transform530.children[4] = Transform548;

Transform Transform552 = createNode("Transform");
Transform552.DEF = "bubble6";
Transform552.translation = new SFVec3f(new float[0.4283297,0.7013068,0.005550557]);
Shape Shape553 = createNode("Shape");
Appearance Appearance554 = createNode("Appearance");
Appearance554.USE = "BubbleAppearance";
Shape553.appearance = Appearance554;

Sphere Sphere555 = createNode("Sphere");
Sphere555.radius = 0.005;
Shape553.geometry = Sphere555;

Transform552.child = new undefined();

Transform552.child[0] = Shape553;

Transform530.children[5] = Transform552;

Transform Transform556 = createNode("Transform");
Transform556.DEF = "bubble7";
Transform556.translation = new SFVec3f(new float[0.4180911,0.3263393,0.004821982]);
Shape Shape557 = createNode("Shape");
Appearance Appearance558 = createNode("Appearance");
Appearance558.USE = "BubbleAppearance";
Shape557.appearance = Appearance558;

Sphere Sphere559 = createNode("Sphere");
Sphere559.radius = 0.035;
Shape557.geometry = Sphere559;

Transform556.child = new undefined();

Transform556.child[0] = Shape557;

Transform530.children[6] = Transform556;

Transform Transform560 = createNode("Transform");
Transform560.DEF = "bubble8";
Transform560.translation = new SFVec3f(new float[0.3483992,0.245207,0.003435547]);
Shape Shape561 = createNode("Shape");
Appearance Appearance562 = createNode("Appearance");
Appearance562.USE = "BubbleAppearance";
Shape561.appearance = Appearance562;

Sphere Sphere563 = createNode("Sphere");
Sphere563.radius = 0.05;
Shape561.geometry = Sphere563;

Transform560.child = new undefined();

Transform560.child[0] = Shape561;

Transform530.children[7] = Transform560;

Transform Transform564 = createNode("Transform");
Transform564.DEF = "bubble9";
Transform564.translation = new SFVec3f(new float[0.5570159,0.3296293,0.006087967]);
Shape Shape565 = createNode("Shape");
Appearance Appearance566 = createNode("Appearance");
Appearance566.USE = "BubbleAppearance";
Shape565.appearance = Appearance566;

Sphere Sphere567 = createNode("Sphere");
Sphere567.radius = 0.045;
Shape565.geometry = Sphere567;

Transform564.child = new undefined();

Transform564.child[0] = Shape565;

Transform530.children[8] = Transform564;

Transform Transform568 = createNode("Transform");
Transform568.DEF = "bubble10";
Transform568.translation = new SFVec3f(new float[0.5322176,0.5852069,0.006451022]);
Shape Shape569 = createNode("Shape");
Appearance Appearance570 = createNode("Appearance");
Appearance570.USE = "BubbleAppearance";
Shape569.appearance = Appearance570;

Sphere Sphere571 = createNode("Sphere");
Sphere571.radius = 0.035;
Shape569.geometry = Sphere571;

Transform568.child = new undefined();

Transform568.child[0] = Shape569;

Transform530.children[9] = Transform568;

Group518.children[11] = Transform530;

Transform517.children = new MFNode();

Transform517.children[0] = Group518;

fieldValue412.children[3] = Transform517;

ProtoInstance411.fieldValue = new MFNode();

ProtoInstance411.fieldValue[0] = fieldValue412;

fieldValue fieldValue572 = createNode("fieldValue");
fieldValue572.name = "name";
fieldValue572.value = "skull";
ProtoInstance411.fieldValue[1] = fieldValue572;

fieldValue410.children = new MFNode();

fieldValue410.children[0] = ProtoInstance411;

ProtoInstance408.fieldValue[1] = fieldValue410;

fieldValue fieldValue573 = createNode("fieldValue");
fieldValue573.name = "name";
fieldValue573.value = "skullbase";
ProtoInstance408.fieldValue[2] = fieldValue573;

fieldValue399.children[1] = ProtoInstance408;

ProtoInstance397.fieldValue[1] = fieldValue399;

fieldValue fieldValue574 = createNode("fieldValue");
fieldValue574.name = "name";
fieldValue574.value = "vc4";
ProtoInstance397.fieldValue[2] = fieldValue574;

fieldValue203.children[3] = ProtoInstance397;

ProtoInstance201.fieldValue[1] = fieldValue203;

fieldValue fieldValue575 = createNode("fieldValue");
fieldValue575.name = "name";
fieldValue575.value = "vl1";
ProtoInstance201.fieldValue[2] = fieldValue575;

fieldValue94.children[4] = ProtoInstance201;

ProtoInstance92.fieldValue[1] = fieldValue94;

fieldValue fieldValue576 = createNode("fieldValue");
fieldValue576.name = "name";
fieldValue576.value = "humanoid_root";
ProtoInstance92.fieldValue[2] = fieldValue576;

fieldValue91.children = new MFNode();

fieldValue91.children[0] = ProtoInstance92;

ProtoInstance90.fieldValue = new MFNode();

ProtoInstance90.fieldValue[0] = fieldValue91;

Transform88.children[1] = ProtoInstance90;

Transform87.children = new MFNode();

Transform87.children[0] = Transform88;

Group86.children = new MFNode();

Group86.children[0] = Transform87;

Group80.children[5] = Group86;

LOD79.children = new MFNode();

LOD79.children[0] = Group80;

children[9] = LOD79;

Script Script577 = createNode("Script");
Script577.DEF = "finWarpScript";
field field578 = createNode("field");
field578.accessType = "inputOnly";
field578.type = "SFRotation";
field578.name = "set_rotationL";
Script577.field = new MFNode();

Script577.field[0] = field578;

field field579 = createNode("field");
field579.accessType = "inputOnly";
field579.type = "SFRotation";
field579.name = "set_rotationR";
Script577.field[1] = field579;

field field580 = createNode("field");
field580.accessType = "outputOnly";
field580.type = "SFBool";
field580.name = "fin_warpL";
Script577.field[2] = field580;

field field581 = createNode("field");
field581.accessType = "outputOnly";
field581.type = "SFBool";
field581.name = "fin_warpR";
Script577.field[3] = field581;


Script577.setSourceCode(`ecmascript:\n"+
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
children[10] = Script577;

Group Group582 = createNode("Group");
Group582.DEF = "Animations";
Group Group583 = createNode("Group");
Group583.DEF = "Dive_Animation";
OrientationInterpolator OrientationInterpolator584 = createNode("OrientationInterpolator");
OrientationInterpolator584.DEF = "r_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator584.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator584.keyValue = new MFRotation(new float[1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]);
Group583.children = new MFNode();

Group583.children[0] = OrientationInterpolator584;

OrientationInterpolator OrientationInterpolator585 = createNode("OrientationInterpolator");
OrientationInterpolator585.DEF = "r_knee_RotationInterpolator_BasicDive";
OrientationInterpolator585.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator585.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]);
Group583.children[1] = OrientationInterpolator585;

OrientationInterpolator OrientationInterpolator586 = createNode("OrientationInterpolator");
OrientationInterpolator586.DEF = "r_hip_RotationInterpolator_BasicDive";
OrientationInterpolator586.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator586.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group583.children[2] = OrientationInterpolator586;

OrientationInterpolator OrientationInterpolator587 = createNode("OrientationInterpolator");
OrientationInterpolator587.DEF = "l_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator587.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator587.keyValue = new MFRotation(new float[1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]);
Group583.children[3] = OrientationInterpolator587;

OrientationInterpolator OrientationInterpolator588 = createNode("OrientationInterpolator");
OrientationInterpolator588.DEF = "l_knee_RotationInterpolator_BasicDive";
OrientationInterpolator588.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator588.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group583.children[4] = OrientationInterpolator588;

OrientationInterpolator OrientationInterpolator589 = createNode("OrientationInterpolator");
OrientationInterpolator589.DEF = "l_hip_RotationInterpolator_BasicDive";
OrientationInterpolator589.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator589.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group583.children[5] = OrientationInterpolator589;

OrientationInterpolator OrientationInterpolator590 = createNode("OrientationInterpolator");
OrientationInterpolator590.DEF = "lower_body_RotationInterpolator_BasicDive";
OrientationInterpolator590.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator590.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group583.children[6] = OrientationInterpolator590;

OrientationInterpolator OrientationInterpolator591 = createNode("OrientationInterpolator");
OrientationInterpolator591.DEF = "r_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator591.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator591.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group583.children[7] = OrientationInterpolator591;

OrientationInterpolator OrientationInterpolator592 = createNode("OrientationInterpolator");
OrientationInterpolator592.DEF = "r_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator592.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator592.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group583.children[8] = OrientationInterpolator592;

OrientationInterpolator OrientationInterpolator593 = createNode("OrientationInterpolator");
OrientationInterpolator593.DEF = "r_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator593.key = new MFFloat(new float[0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator593.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group583.children[9] = OrientationInterpolator593;

OrientationInterpolator OrientationInterpolator594 = createNode("OrientationInterpolator");
OrientationInterpolator594.DEF = "l_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator594.key = new MFFloat(new float[0,0.32,0.64,0.88,1]);
OrientationInterpolator594.keyValue = new MFRotation(new float[0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]);
Group583.children[10] = OrientationInterpolator594;

OrientationInterpolator OrientationInterpolator595 = createNode("OrientationInterpolator");
OrientationInterpolator595.DEF = "l_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator595.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator595.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
Group583.children[11] = OrientationInterpolator595;

OrientationInterpolator OrientationInterpolator596 = createNode("OrientationInterpolator");
OrientationInterpolator596.DEF = "l_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator596.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator596.keyValue = new MFRotation(new float[0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]);
Group583.children[12] = OrientationInterpolator596;

OrientationInterpolator OrientationInterpolator597 = createNode("OrientationInterpolator");
OrientationInterpolator597.DEF = "head_RotationInterpolator_BasicDive";
OrientationInterpolator597.key = new MFFloat(new float[0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator597.keyValue = new MFRotation(new float[-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]);
Group583.children[13] = OrientationInterpolator597;

OrientationInterpolator OrientationInterpolator598 = createNode("OrientationInterpolator");
OrientationInterpolator598.DEF = "neck_RotationInterpolator_BasicDive";
OrientationInterpolator598.key = new MFFloat(new float[0,1]);
OrientationInterpolator598.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group583.children[14] = OrientationInterpolator598;

OrientationInterpolator OrientationInterpolator599 = createNode("OrientationInterpolator");
OrientationInterpolator599.DEF = "upper_body_RotationInterpolator_BasicDive";
OrientationInterpolator599.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator599.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group583.children[15] = OrientationInterpolator599;

OrientationInterpolator OrientationInterpolator600 = createNode("OrientationInterpolator");
OrientationInterpolator600.DEF = "whole_body_RotationInterpolator_BasicDive";
OrientationInterpolator600.key = new MFFloat(new float[0,1]);
OrientationInterpolator600.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group583.children[16] = OrientationInterpolator600;

PositionInterpolator PositionInterpolator601 = createNode("PositionInterpolator");
PositionInterpolator601.DEF = "whole_body_TranslationInterpolator_BasicDive";
PositionInterpolator601.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator601.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group583.children[17] = PositionInterpolator601;

TimeSensor TimeSensor602 = createNode("TimeSensor");
TimeSensor602.DEF = "Dive_Time";
TimeSensor602.cycleInterval = 7;
TimeSensor602.loop = True;
TimeSensor602.startTime = -1;
Group583.children[18] = TimeSensor602;

ProximitySensor ProximitySensor603 = createNode("ProximitySensor");
ProximitySensor603.DEF = "TriggerProximitySensor";
ProximitySensor603.size = new SFVec3f(new float[50,50,50]);
Group583.children[19] = ProximitySensor603;

Group582.children = new MFNode();

Group582.children[0] = Group583;

children[11] = Group582;

ROUTE ROUTE604 = createNode("ROUTE");
ROUTE604.fromNode = "FinTriggerProximitySensor";
ROUTE604.fromField = "isActive";
ROUTE604.toNode = "FinClock";
ROUTE604.toField = "set_enabled";
children[12] = ROUTE604;

ROUTE ROUTE605 = createNode("ROUTE");
ROUTE605.fromNode = "FinClock";
ROUTE605.fromField = "fraction_changed";
ROUTE605.toNode = "FinScript";
ROUTE605.toField = "set_fraction";
children[13] = ROUTE605;

ROUTE ROUTE606 = createNode("ROUTE");
ROUTE606.fromNode = "FinScript";
ROUTE606.fromField = "keyValueR";
ROUTE606.toNode = "Finr";
ROUTE606.toField = "set_spine";
children[14] = ROUTE606;

ROUTE ROUTE607 = createNode("ROUTE");
ROUTE607.fromNode = "FinScript";
ROUTE607.fromField = "keyValueL";
ROUTE607.toNode = "Finl";
ROUTE607.toField = "set_spine";
children[15] = ROUTE607;

ROUTE ROUTE608 = createNode("ROUTE");
ROUTE608.fromNode = "BubbleClock";
ROUTE608.fromField = "fraction_changed";
ROUTE608.toNode = "BubblePath1";
ROUTE608.toField = "set_fraction";
children[16] = ROUTE608;

ROUTE ROUTE609 = createNode("ROUTE");
ROUTE609.fromNode = "BubbleClock";
ROUTE609.fromField = "fraction_changed";
ROUTE609.toNode = "BubblePath2";
ROUTE609.toField = "set_fraction";
children[17] = ROUTE609;

ROUTE ROUTE610 = createNode("ROUTE");
ROUTE610.fromNode = "BubbleClock";
ROUTE610.fromField = "fraction_changed";
ROUTE610.toNode = "BubblePath3";
ROUTE610.toField = "set_fraction";
children[18] = ROUTE610;

ROUTE ROUTE611 = createNode("ROUTE");
ROUTE611.fromNode = "BubbleClock";
ROUTE611.fromField = "fraction_changed";
ROUTE611.toNode = "BubblePath4";
ROUTE611.toField = "set_fraction";
children[19] = ROUTE611;

ROUTE ROUTE612 = createNode("ROUTE");
ROUTE612.fromNode = "BubbleClock";
ROUTE612.fromField = "fraction_changed";
ROUTE612.toNode = "BubblePath5";
ROUTE612.toField = "set_fraction";
children[20] = ROUTE612;

ROUTE ROUTE613 = createNode("ROUTE");
ROUTE613.fromNode = "BubbleClock";
ROUTE613.fromField = "fraction_changed";
ROUTE613.toNode = "BubblePath6";
ROUTE613.toField = "set_fraction";
children[21] = ROUTE613;

ROUTE ROUTE614 = createNode("ROUTE");
ROUTE614.fromNode = "BubbleClock";
ROUTE614.fromField = "fraction_changed";
ROUTE614.toNode = "BubblePath7";
ROUTE614.toField = "set_fraction";
children[22] = ROUTE614;

ROUTE ROUTE615 = createNode("ROUTE");
ROUTE615.fromNode = "BubbleClock";
ROUTE615.fromField = "fraction_changed";
ROUTE615.toNode = "BubblePath8";
ROUTE615.toField = "set_fraction";
children[23] = ROUTE615;

ROUTE ROUTE616 = createNode("ROUTE");
ROUTE616.fromNode = "BubbleClock";
ROUTE616.fromField = "fraction_changed";
ROUTE616.toNode = "BubblePath9";
ROUTE616.toField = "set_fraction";
children[24] = ROUTE616;

ROUTE ROUTE617 = createNode("ROUTE");
ROUTE617.fromNode = "BubbleClock";
ROUTE617.fromField = "fraction_changed";
ROUTE617.toNode = "BubblePath10";
ROUTE617.toField = "set_fraction";
children[25] = ROUTE617;

ROUTE ROUTE618 = createNode("ROUTE");
ROUTE618.fromNode = "BubblePath1";
ROUTE618.fromField = "value_changed";
ROUTE618.toNode = "bubble1";
ROUTE618.toField = "set_translation";
children[26] = ROUTE618;

ROUTE ROUTE619 = createNode("ROUTE");
ROUTE619.fromNode = "BubblePath2";
ROUTE619.fromField = "value_changed";
ROUTE619.toNode = "bubble2";
ROUTE619.toField = "set_translation";
children[27] = ROUTE619;

ROUTE ROUTE620 = createNode("ROUTE");
ROUTE620.fromNode = "BubblePath3";
ROUTE620.fromField = "value_changed";
ROUTE620.toNode = "bubble3";
ROUTE620.toField = "set_translation";
children[28] = ROUTE620;

ROUTE ROUTE621 = createNode("ROUTE");
ROUTE621.fromNode = "BubblePath4";
ROUTE621.fromField = "value_changed";
ROUTE621.toNode = "bubble4";
ROUTE621.toField = "set_translation";
children[29] = ROUTE621;

ROUTE ROUTE622 = createNode("ROUTE");
ROUTE622.fromNode = "BubblePath5";
ROUTE622.fromField = "value_changed";
ROUTE622.toNode = "bubble5";
ROUTE622.toField = "set_translation";
children[30] = ROUTE622;

ROUTE ROUTE623 = createNode("ROUTE");
ROUTE623.fromNode = "BubblePath6";
ROUTE623.fromField = "value_changed";
ROUTE623.toNode = "bubble6";
ROUTE623.toField = "set_translation";
children[31] = ROUTE623;

ROUTE ROUTE624 = createNode("ROUTE");
ROUTE624.fromNode = "BubblePath7";
ROUTE624.fromField = "value_changed";
ROUTE624.toNode = "bubble7";
ROUTE624.toField = "set_translation";
children[32] = ROUTE624;

ROUTE ROUTE625 = createNode("ROUTE");
ROUTE625.fromNode = "BubblePath8";
ROUTE625.fromField = "value_changed";
ROUTE625.toNode = "bubble8";
ROUTE625.toField = "set_translation";
children[33] = ROUTE625;

ROUTE ROUTE626 = createNode("ROUTE");
ROUTE626.fromNode = "BubblePath9";
ROUTE626.fromField = "value_changed";
ROUTE626.toNode = "bubble9";
ROUTE626.toField = "set_translation";
children[34] = ROUTE626;

ROUTE ROUTE627 = createNode("ROUTE");
ROUTE627.fromNode = "BubblePath10";
ROUTE627.fromField = "value_changed";
ROUTE627.toNode = "bubble10";
ROUTE627.toField = "set_translation";
children[35] = ROUTE627;

ROUTE ROUTE628 = createNode("ROUTE");
ROUTE628.fromNode = "TriggerProximitySensor";
ROUTE628.fromField = "enterTime";
ROUTE628.toNode = "Dive_Time";
ROUTE628.toField = "set_startTime";
children[36] = ROUTE628;

ROUTE ROUTE629 = createNode("ROUTE");
ROUTE629.fromNode = "Dive_Time";
ROUTE629.fromField = "fraction_changed";
ROUTE629.toNode = "r_ankle_RotationInterpolator_BasicDive";
ROUTE629.toField = "set_fraction";
children[37] = ROUTE629;

ROUTE ROUTE630 = createNode("ROUTE");
ROUTE630.fromNode = "Dive_Time";
ROUTE630.fromField = "fraction_changed";
ROUTE630.toNode = "r_knee_RotationInterpolator_BasicDive";
ROUTE630.toField = "set_fraction";
children[38] = ROUTE630;

ROUTE ROUTE631 = createNode("ROUTE");
ROUTE631.fromNode = "Dive_Time";
ROUTE631.fromField = "fraction_changed";
ROUTE631.toNode = "r_hip_RotationInterpolator_BasicDive";
ROUTE631.toField = "set_fraction";
children[39] = ROUTE631;

ROUTE ROUTE632 = createNode("ROUTE");
ROUTE632.fromNode = "Dive_Time";
ROUTE632.fromField = "fraction_changed";
ROUTE632.toNode = "l_ankle_RotationInterpolator_BasicDive";
ROUTE632.toField = "set_fraction";
children[40] = ROUTE632;

ROUTE ROUTE633 = createNode("ROUTE");
ROUTE633.fromNode = "Dive_Time";
ROUTE633.fromField = "fraction_changed";
ROUTE633.toNode = "l_knee_RotationInterpolator_BasicDive";
ROUTE633.toField = "set_fraction";
children[41] = ROUTE633;

ROUTE ROUTE634 = createNode("ROUTE");
ROUTE634.fromNode = "Dive_Time";
ROUTE634.fromField = "fraction_changed";
ROUTE634.toNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE634.toField = "set_fraction";
children[42] = ROUTE634;

ROUTE ROUTE635 = createNode("ROUTE");
ROUTE635.fromNode = "Dive_Time";
ROUTE635.fromField = "fraction_changed";
ROUTE635.toNode = "lower_body_RotationInterpolator_BasicDive";
ROUTE635.toField = "set_fraction";
children[43] = ROUTE635;

ROUTE ROUTE636 = createNode("ROUTE");
ROUTE636.fromNode = "Dive_Time";
ROUTE636.fromField = "fraction_changed";
ROUTE636.toNode = "head_RotationInterpolator_BasicDive";
ROUTE636.toField = "set_fraction";
children[44] = ROUTE636;

ROUTE ROUTE637 = createNode("ROUTE");
ROUTE637.fromNode = "Dive_Time";
ROUTE637.fromField = "fraction_changed";
ROUTE637.toNode = "neck_RotationInterpolator_BasicDive";
ROUTE637.toField = "set_fraction";
children[45] = ROUTE637;

ROUTE ROUTE638 = createNode("ROUTE");
ROUTE638.fromNode = "Dive_Time";
ROUTE638.fromField = "fraction_changed";
ROUTE638.toNode = "upper_body_RotationInterpolator_BasicDive";
ROUTE638.toField = "set_fraction";
children[46] = ROUTE638;

ROUTE ROUTE639 = createNode("ROUTE");
ROUTE639.fromNode = "Dive_Time";
ROUTE639.fromField = "fraction_changed";
ROUTE639.toNode = "whole_body_RotationInterpolator_BasicDive";
ROUTE639.toField = "set_fraction";
children[47] = ROUTE639;

ROUTE ROUTE640 = createNode("ROUTE");
ROUTE640.fromNode = "Dive_Time";
ROUTE640.fromField = "fraction_changed";
ROUTE640.toNode = "whole_body_TranslationInterpolator_BasicDive";
ROUTE640.toField = "set_fraction";
children[48] = ROUTE640;

ROUTE ROUTE641 = createNode("ROUTE");
ROUTE641.fromNode = "r_ankle_RotationInterpolator_BasicDive";
ROUTE641.fromField = "value_changed";
ROUTE641.toNode = "hanim_r_ankle";
ROUTE641.toField = "set_rotation";
children[49] = ROUTE641;

ROUTE ROUTE642 = createNode("ROUTE");
ROUTE642.fromNode = "r_knee_RotationInterpolator_BasicDive";
ROUTE642.fromField = "value_changed";
ROUTE642.toNode = "hanim_r_knee";
ROUTE642.toField = "set_rotation";
children[50] = ROUTE642;

ROUTE ROUTE643 = createNode("ROUTE");
ROUTE643.fromNode = "r_hip_RotationInterpolator_BasicDive";
ROUTE643.fromField = "value_changed";
ROUTE643.toNode = "hanim_r_hip";
ROUTE643.toField = "set_rotation";
children[51] = ROUTE643;

ROUTE ROUTE644 = createNode("ROUTE");
ROUTE644.fromNode = "l_ankle_RotationInterpolator_BasicDive";
ROUTE644.fromField = "value_changed";
ROUTE644.toNode = "hanim_l_ankle";
ROUTE644.toField = "set_rotation";
children[52] = ROUTE644;

ROUTE ROUTE645 = createNode("ROUTE");
ROUTE645.fromNode = "l_knee_RotationInterpolator_BasicDive";
ROUTE645.fromField = "value_changed";
ROUTE645.toNode = "hanim_l_knee";
ROUTE645.toField = "set_rotation";
children[53] = ROUTE645;

ROUTE ROUTE646 = createNode("ROUTE");
ROUTE646.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE646.fromField = "value_changed";
ROUTE646.toNode = "finWarpScript";
ROUTE646.toField = "set_rotationL";
children[54] = ROUTE646;

ROUTE ROUTE647 = createNode("ROUTE");
ROUTE647.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE647.fromField = "value_changed";
ROUTE647.toNode = "finWarpScript";
ROUTE647.toField = "set_rotationR";
children[55] = ROUTE647;

ROUTE ROUTE648 = createNode("ROUTE");
ROUTE648.fromNode = "finWarpScript";
ROUTE648.fromField = "fin_warpL";
ROUTE648.toNode = "FinScript";
ROUTE648.toField = "finL";
children[56] = ROUTE648;

ROUTE ROUTE649 = createNode("ROUTE");
ROUTE649.fromNode = "finWarpScript";
ROUTE649.fromField = "fin_warpR";
ROUTE649.toNode = "FinScript";
ROUTE649.toField = "finR";
children[57] = ROUTE649;

ROUTE ROUTE650 = createNode("ROUTE");
ROUTE650.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE650.fromField = "value_changed";
ROUTE650.toNode = "hanim_l_hip";
ROUTE650.toField = "set_rotation";
children[58] = ROUTE650;

ROUTE ROUTE651 = createNode("ROUTE");
ROUTE651.fromNode = "lower_body_RotationInterpolator_BasicDive";
ROUTE651.fromField = "value_changed";
ROUTE651.toNode = "hanim_sacroiliac";
ROUTE651.toField = "set_rotation";
children[59] = ROUTE651;

ROUTE ROUTE652 = createNode("ROUTE");
ROUTE652.fromNode = "head_RotationInterpolator_BasicDive";
ROUTE652.fromField = "value_changed";
ROUTE652.toNode = "hanim_skullbase";
ROUTE652.toField = "set_rotation";
children[60] = ROUTE652;

ROUTE ROUTE653 = createNode("ROUTE");
ROUTE653.fromNode = "neck_RotationInterpolator_BasicDive";
ROUTE653.fromField = "value_changed";
ROUTE653.toNode = "hanim_vc4";
ROUTE653.toField = "set_rotation";
children[61] = ROUTE653;

ROUTE ROUTE654 = createNode("ROUTE");
ROUTE654.fromNode = "upper_body_RotationInterpolator_BasicDive";
ROUTE654.fromField = "value_changed";
ROUTE654.toNode = "hanim_vl1";
ROUTE654.toField = "set_rotation";
children[62] = ROUTE654;

ROUTE ROUTE655 = createNode("ROUTE");
ROUTE655.fromNode = "whole_body_RotationInterpolator_BasicDive";
ROUTE655.fromField = "value_changed";
ROUTE655.toNode = "hanim_humanoid_root";
ROUTE655.toField = "set_rotation";
children[63] = ROUTE655;

ROUTE ROUTE656 = createNode("ROUTE");
ROUTE656.fromNode = "whole_body_TranslationInterpolator_BasicDive";
ROUTE656.fromField = "value_changed";
ROUTE656.toNode = "hanim_humanoid_root";
ROUTE656.toField = "set_translation";
children[64] = ROUTE656;

ROUTE ROUTE657 = createNode("ROUTE");
ROUTE657.fromNode = "Dive_Time";
ROUTE657.fromField = "fraction_changed";
ROUTE657.toNode = "r_wrist_RotationInterpolator_BasicDive";
ROUTE657.toField = "set_fraction";
children[65] = ROUTE657;

ROUTE ROUTE658 = createNode("ROUTE");
ROUTE658.fromNode = "Dive_Time";
ROUTE658.fromField = "fraction_changed";
ROUTE658.toNode = "r_elbow_RotationInterpolator_BasicDive";
ROUTE658.toField = "set_fraction";
children[66] = ROUTE658;

ROUTE ROUTE659 = createNode("ROUTE");
ROUTE659.fromNode = "Dive_Time";
ROUTE659.fromField = "fraction_changed";
ROUTE659.toNode = "r_shoulder_RotationInterpolator_BasicDive";
ROUTE659.toField = "set_fraction";
children[67] = ROUTE659;

ROUTE ROUTE660 = createNode("ROUTE");
ROUTE660.fromNode = "Dive_Time";
ROUTE660.fromField = "fraction_changed";
ROUTE660.toNode = "l_wrist_RotationInterpolator_BasicDive";
ROUTE660.toField = "set_fraction";
children[68] = ROUTE660;

ROUTE ROUTE661 = createNode("ROUTE");
ROUTE661.fromNode = "Dive_Time";
ROUTE661.fromField = "fraction_changed";
ROUTE661.toNode = "l_elbow_RotationInterpolator_BasicDive";
ROUTE661.toField = "set_fraction";
children[69] = ROUTE661;

ROUTE ROUTE662 = createNode("ROUTE");
ROUTE662.fromNode = "Dive_Time";
ROUTE662.fromField = "fraction_changed";
ROUTE662.toNode = "l_shoulder_RotationInterpolator_BasicDive";
ROUTE662.toField = "set_fraction";
children[70] = ROUTE662;

ROUTE ROUTE663 = createNode("ROUTE");
ROUTE663.fromNode = "r_wrist_RotationInterpolator_BasicDive";
ROUTE663.fromField = "value_changed";
ROUTE663.toNode = "hanim_r_wrist";
ROUTE663.toField = "set_rotation";
children[71] = ROUTE663;

ROUTE ROUTE664 = createNode("ROUTE");
ROUTE664.fromNode = "r_elbow_RotationInterpolator_BasicDive";
ROUTE664.fromField = "value_changed";
ROUTE664.toNode = "hanim_r_elbow";
ROUTE664.toField = "set_rotation";
children[72] = ROUTE664;

ROUTE ROUTE665 = createNode("ROUTE");
ROUTE665.fromNode = "r_shoulder_RotationInterpolator_BasicDive";
ROUTE665.fromField = "value_changed";
ROUTE665.toNode = "hanim_r_shoulder";
ROUTE665.toField = "set_rotation";
children[73] = ROUTE665;

ROUTE ROUTE666 = createNode("ROUTE");
ROUTE666.fromNode = "l_wrist_RotationInterpolator_BasicDive";
ROUTE666.fromField = "value_changed";
ROUTE666.toNode = "hanim_l_wrist";
ROUTE666.toField = "set_rotation";
children[74] = ROUTE666;

ROUTE ROUTE667 = createNode("ROUTE");
ROUTE667.fromNode = "l_elbow_RotationInterpolator_BasicDive";
ROUTE667.fromField = "value_changed";
ROUTE667.toNode = "hanim_l_elbow";
ROUTE667.toField = "set_rotation";
children[75] = ROUTE667;

ROUTE ROUTE668 = createNode("ROUTE");
ROUTE668.fromNode = "l_shoulder_RotationInterpolator_BasicDive";
ROUTE668.fromField = "value_changed";
ROUTE668.toNode = "hanim_l_shoulder";
ROUTE668.toField = "set_rotation";
children[76] = ROUTE668;

}
