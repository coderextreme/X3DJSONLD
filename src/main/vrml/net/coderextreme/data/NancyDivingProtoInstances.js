let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ExternProtoDeclare2 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare2.name = "Joint";
ExternProtoDeclare2.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ExternProtoDeclare2.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html";
ExternProtoDeclare2.url = new MFString(new java.lang.String["NancyPrototypes.x3d#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Joint","NancyPrototypes.wrl#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Joint"]);
let field3 = browser.currentScene.createNode("field");
field3.name = "center";
field3.accessType = "inputOutput";
field3.type = "SFVec3f";
ExternProtoDeclare2.field = new MFNode();

ExternProtoDeclare2.field[0] = field3;

let field4 = browser.currentScene.createNode("field");
field4.name = "children";
field4.accessType = "inputOutput";
field4.type = "MFNode";
ExternProtoDeclare2.field[1] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "llimit";
field5.accessType = "inputOutput";
field5.type = "MFFloat";
ExternProtoDeclare2.field[2] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "limitOrientation";
field6.accessType = "inputOutput";
field6.type = "SFRotation";
ExternProtoDeclare2.field[3] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "name";
field7.accessType = "inputOutput";
field7.type = "SFString";
ExternProtoDeclare2.field[4] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "rotation";
field8.accessType = "inputOutput";
field8.type = "SFRotation";
ExternProtoDeclare2.field[5] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "scale";
field9.accessType = "inputOutput";
field9.type = "SFVec3f";
ExternProtoDeclare2.field[6] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "scaleOrientation";
field10.accessType = "inputOutput";
field10.type = "SFRotation";
ExternProtoDeclare2.field[7] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "stiffness";
field11.accessType = "inputOutput";
field11.type = "MFFloat";
ExternProtoDeclare2.field[8] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "translation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
ExternProtoDeclare2.field[9] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "ulimit";
field13.accessType = "inputOutput";
field13.type = "MFFloat";
ExternProtoDeclare2.field[10] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "removeChildren";
field14.accessType = "inputOnly";
field14.type = "MFNode";
ExternProtoDeclare2.field[11] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "bboxSize";
field15.accessType = "initializeOnly";
field15.type = "SFVec3f";
ExternProtoDeclare2.field[12] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "skinCoordIndex";
field16.accessType = "inputOutput";
field16.type = "MFInt32";
ExternProtoDeclare2.field[13] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "bboxCenter";
field17.accessType = "initializeOnly";
field17.type = "SFVec3f";
ExternProtoDeclare2.field[14] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "skinCoordWeight";
field18.accessType = "inputOutput";
field18.type = "MFFloat";
ExternProtoDeclare2.field[15] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "addChildren";
field19.accessType = "inputOnly";
field19.type = "MFNode";
ExternProtoDeclare2.field[16] = field19;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare2;

let ExternProtoDeclare20 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare20.name = "Segment";
ExternProtoDeclare20.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.";
ExternProtoDeclare20.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html";
ExternProtoDeclare20.url = new MFString(new java.lang.String["NancyPrototypes.x3d#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Segment","NancyPrototypes.wrl#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Segment"]);
let field21 = browser.currentScene.createNode("field");
field21.name = "bboxCenter";
field21.accessType = "initializeOnly";
field21.type = "SFVec3f";
ExternProtoDeclare20.field = new MFNode();

ExternProtoDeclare20.field[0] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "bboxSize";
field22.accessType = "initializeOnly";
field22.type = "SFVec3f";
ExternProtoDeclare20.field[1] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "centerOfMass";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
ExternProtoDeclare20.field[2] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "children";
field24.accessType = "inputOutput";
field24.type = "MFNode";
ExternProtoDeclare20.field[3] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "coord";
field25.accessType = "inputOutput";
field25.appinfo = "contains Coordinate nodes";
field25.type = "SFNode";
ExternProtoDeclare20.field[4] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "displacers";
field26.accessType = "inputOutput";
field26.appinfo = "contains Displacer nodes";
field26.type = "MFNode";
ExternProtoDeclare20.field[5] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "mass";
field27.accessType = "inputOutput";
field27.type = "SFFloat";
ExternProtoDeclare20.field[6] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "momentsOfInertia";
field28.accessType = "inputOutput";
field28.type = "MFFloat";
ExternProtoDeclare20.field[7] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "name";
field29.accessType = "inputOutput";
field29.type = "SFString";
ExternProtoDeclare20.field[8] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "addChildren";
field30.accessType = "inputOnly";
field30.type = "MFNode";
ExternProtoDeclare20.field[9] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "removeChildren";
field31.accessType = "inputOnly";
field31.type = "MFNode";
ExternProtoDeclare20.field[10] = field31;

browser.currentScene.children[1] = ExternProtoDeclare20;

let ExternProtoDeclare32 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare32.name = "Humanoid";
ExternProtoDeclare32.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ExternProtoDeclare32.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
ExternProtoDeclare32.url = new MFString(new java.lang.String["NancyPrototypes.x3d#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Humanoid","NancyPrototypes.wrl#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Humanoid"]);
let field33 = browser.currentScene.createNode("field");
field33.name = "bboxCenter";
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
ExternProtoDeclare32.field = new MFNode();

ExternProtoDeclare32.field[0] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "bboxSize";
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
ExternProtoDeclare32.field[1] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "center";
field35.accessType = "inputOutput";
field35.type = "SFVec3f";
ExternProtoDeclare32.field[2] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "humanoidBody";
field36.accessType = "inputOutput";
field36.appinfo = "HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton";
field36.documentation = "http://HAnim.org/Specifications/HAnim1.1/#humanoid";
field36.type = "MFNode";
ExternProtoDeclare32.field[3] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "info";
field37.accessType = "inputOutput";
field37.type = "MFString";
ExternProtoDeclare32.field[4] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "joints";
field38.accessType = "inputOutput";
field38.appinfo = "Container field for Joint nodes";
field38.type = "MFNode";
ExternProtoDeclare32.field[5] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "name";
field39.accessType = "inputOutput";
field39.type = "SFString";
ExternProtoDeclare32.field[6] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "rotation";
field40.accessType = "inputOutput";
field40.type = "SFRotation";
ExternProtoDeclare32.field[7] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "scale";
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
ExternProtoDeclare32.field[8] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "scaleOrientation";
field42.accessType = "inputOutput";
field42.type = "SFRotation";
ExternProtoDeclare32.field[9] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "segments";
field43.accessType = "inputOutput";
field43.appinfo = "Container field for Segment nodes";
field43.type = "MFNode";
ExternProtoDeclare32.field[10] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "sites";
field44.accessType = "inputOutput";
field44.appinfo = "Container field for Site nodes";
field44.type = "MFNode";
ExternProtoDeclare32.field[11] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "translation";
field45.accessType = "inputOutput";
field45.type = "SFVec3f";
ExternProtoDeclare32.field[12] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "version";
field46.accessType = "inputOutput";
field46.appinfo = "legal values: 1.1 or 2.0";
field46.type = "SFString";
ExternProtoDeclare32.field[13] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "viewpoints";
field47.accessType = "inputOutput";
field47.appinfo = "Container field for Viewpoint nodes";
field47.type = "MFNode";
ExternProtoDeclare32.field[14] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "skinNormal";
field48.accessType = "inputOutput";
field48.appinfo = "Hint: HAnim version 2.0";
field48.type = "SFNode";
ExternProtoDeclare32.field[15] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "humanoidVersion";
field49.accessType = "inputOutput";
field49.appinfo = "Version of the humanoid being modeled. Hint: HAnim version 2.0";
field49.type = "SFString";
ExternProtoDeclare32.field[16] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "skeleton";
field50.accessType = "inputOutput";
field50.appinfo = "HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody";
field50.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
field50.type = "MFNode";
ExternProtoDeclare32.field[17] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "skinCoord";
field51.accessType = "inputOutput";
field51.appinfo = "Hint: HAnim version 2.0";
field51.type = "SFNode";
ExternProtoDeclare32.field[18] = field51;

browser.currentScene.children[2] = ExternProtoDeclare32;

//====================
let ExternProtoDeclare52 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare52.name = "ViewPositionOrientation";
ExternProtoDeclare52.appinfo = "ViewPositionOrientation provides provides console output of local position and orientation as user navigates";
ExternProtoDeclare52.url = new MFString(new java.lang.String["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]);
let field53 = browser.currentScene.createNode("field");
field53.name = "enabled";
field53.accessType = "inputOutput";
field53.appinfo = "Whether or not ViewPositionOrientation sends output to console";
field53.type = "SFBool";
ExternProtoDeclare52.field = new MFNode();

ExternProtoDeclare52.field[0] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "traceEnabled";
field54.accessType = "initializeOnly";
field54.appinfo = "Output internal trace messages for debugging this node, intended for developer use only";
field54.type = "SFBool";
ExternProtoDeclare52.field[1] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "set_traceEnabled";
field55.accessType = "inputOnly";
field55.appinfo = "Ability to turn output tracing on/off at runtime";
field55.type = "SFBool";
ExternProtoDeclare52.field[2] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "position_changed";
field56.accessType = "outputOnly";
field56.appinfo = "Output local position";
field56.type = "SFVec3f";
ExternProtoDeclare52.field[3] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "orientation_changed";
field57.accessType = "outputOnly";
field57.appinfo = "Output local orientation";
field57.type = "SFRotation";
ExternProtoDeclare52.field[4] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "outputViewpointString";
field58.accessType = "outputOnly";
field58.appinfo = "MFString value of new Viewpoint, suitable for use in string field of a Text node";
field58.type = "MFString";
ExternProtoDeclare52.field[5] = field58;

browser.currentScene.children[3] = ExternProtoDeclare52;

let ProtoInstance59 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance59.name = "ViewPositionOrientation";
ProtoInstance59.DEF = "ExampleViewPositionOrientation";
let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "enabled";
fieldValue60.value = "true";
ProtoInstance59.fieldValue = new MFNode();

ProtoInstance59.fieldValue[0] = fieldValue60;

browser.currentScene.children[4] = ProtoInstance59;

//Example use: https://savage.nps.edu/Savage/Tools/Animation/ViewPositionOrientationExample.x3d
//====================
//Start scene graph.
let ProtoInstance61 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance61.name = "ViewPositionOrientation";
let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "enabled";
fieldValue62.value = "true";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

browser.currentScene.children[5] = ProtoInstance61;

let Background63 = browser.currentScene.createNode("Background");
Background63.skyColor = new MFColor(new float[0,0.4,1]);
browser.currentScene.children[6] = Background63;

let NavigationInfo64 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo64.avatarSize = new MFFloat(new float[0.15,1.53,0.75]);
NavigationInfo64.speed = 0.5;
NavigationInfo64.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[7] = NavigationInfo64;

let Viewpoint65 = browser.currentScene.createNode("Viewpoint");
Viewpoint65.description = "Nancy diving default viewpoint";
Viewpoint65.position = new SFVec3f(new float[-0.8,0,3.1]);
browser.currentScene.children[8] = Viewpoint65;

let LOD66 = browser.currentScene.createNode("LOD");
let Group67 = browser.currentScene.createNode("Group");
Group67.DEF = "Viewpoint";
//High Resolution
let Viewpoint68 = browser.currentScene.createNode("Viewpoint");
Viewpoint68.description = "Nancy front viewpoint";
Viewpoint68.orientation = new SFRotation(new float[-0.354,0.878,-0.321,4.5485]);
Viewpoint68.position = new SFVec3f(new float[-2.2,-0.7,0]);
Group67.children = new MFNode();

Group67.children[0] = Viewpoint68;

let Viewpoint69 = browser.currentScene.createNode("Viewpoint");
Viewpoint69.description = "Nancy above viewpoint";
Viewpoint69.orientation = new SFRotation(new float[-0.126,-0.978,-0.168,1.5385]);
Viewpoint69.position = new SFVec3f(new float[-3,0.5,0]);
Group67.children[1] = Viewpoint69;

let Viewpoint70 = browser.currentScene.createNode("Viewpoint");
Viewpoint70.description = "Nancy back viewpoint";
Viewpoint70.orientation = new SFRotation(new float[0.037,0.999,-0.011,1.572]);
Viewpoint70.position = new SFVec3f(new float[0.7,0.1,0]);
Group67.children[2] = Viewpoint70;

let Viewpoint71 = browser.currentScene.createNode("Viewpoint");
Viewpoint71.description = "Nancy side viewpoint";
Viewpoint71.orientation = new SFRotation(new float[0.121,0.987,-0.105,3.2682]);
Viewpoint71.position = new SFVec3f(new float[-1.2,-0.2,-1.5]);
Group67.children[3] = Viewpoint71;

let Viewpoint72 = browser.currentScene.createNode("Viewpoint");
Viewpoint72.description = "Nancy viewpoint through her goggles";
Viewpoint72.orientation = new SFRotation(new float[-0.357,0.872,0.335,1.5225]);
Viewpoint72.position = new SFVec3f(new float[-1.5,0.1,0]);
Group67.children[4] = Viewpoint72;

let Group73 = browser.currentScene.createNode("Group");
Group73.DEF = "HighResolution";
let Transform74 = browser.currentScene.createNode("Transform");
Transform74.rotation = new SFRotation(new float[1,0,0,1.57]);
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.rotation = new SFRotation(new float[0,0,1,1.57]);
let WorldInfo76 = browser.currentScene.createNode("WorldInfo");
WorldInfo76.info = new MFString(new java.lang.String["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."]);
WorldInfo76.title = "Nancy - an HAnim compliant avatar by 3Name3D";
Transform75.children = new MFNode();

Transform75.children[0] = WorldInfo76;

let ProtoInstance77 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance77.name = "Humanoid";
ProtoInstance77.DEF = "Humanoid";
let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "humanoidBody";
let ProtoInstance79 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance79.name = "Joint";
ProtoInstance79.DEF = "hanim_humanoid_root";
let fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "name";
fieldValue80.value = "humanoid_root";
ProtoInstance79.fieldValue = new MFNode();

ProtoInstance79.fieldValue[0] = fieldValue80;

let fieldValue81 = browser.currentScene.createNode("fieldValue");
fieldValue81.name = "center";
fieldValue81.value = "-0.00405 0.855 -0.000113";
ProtoInstance79.fieldValue[1] = fieldValue81;

let fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "children";
let ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.name = "Joint";
ProtoInstance83.DEF = "hanim_sacroiliac";
let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "name";
fieldValue84.value = "sacroiliac";
ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

let fieldValue85 = browser.currentScene.createNode("fieldValue");
fieldValue85.name = "center";
fieldValue85.value = "0 1.01 -0.0204";
ProtoInstance83.fieldValue[1] = fieldValue85;

let fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "children";
let ProtoInstance87 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance87.name = "Segment";
ProtoInstance87.DEF = "hanim_pelvis";
let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "name";
fieldValue88.value = "pelvis";
ProtoInstance87.fieldValue = new MFNode();

ProtoInstance87.fieldValue[0] = fieldValue88;

let fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "children";
let Shape90 = browser.currentScene.createNode("Shape");
let Appearance91 = browser.currentScene.createNode("Appearance");
let Material92 = browser.currentScene.createNode("Material");
Material92.DEF = "Pants_Color";
Material92.diffuseColor = new SFColor(new float[0,0,0.502]);
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

let IndexedFaceSet93 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet93.coordIndex = new MFInt32(new int[0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
IndexedFaceSet93.creaseAngle = 1.14;
let Coordinate94 = browser.currentScene.createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
IndexedFaceSet93.coord = Coordinate94;

Shape90.geometry = IndexedFaceSet93;

fieldValue89.children = new MFNode();

fieldValue89.children[0] = Shape90;

ProtoInstance87.fieldValue[1] = fieldValue89;

fieldValue86.children = new MFNode();

fieldValue86.children[0] = ProtoInstance87;

let ProtoInstance95 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance95.name = "Joint";
ProtoInstance95.DEF = "hanim_l_hip";
let fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "name";
fieldValue96.value = "l_hip";
ProtoInstance95.fieldValue = new MFNode();

ProtoInstance95.fieldValue[0] = fieldValue96;

let fieldValue97 = browser.currentScene.createNode("fieldValue");
fieldValue97.name = "center";
fieldValue97.value = "0.122 0.888271 -0.0693267";
ProtoInstance95.fieldValue[1] = fieldValue97;

let fieldValue98 = browser.currentScene.createNode("fieldValue");
fieldValue98.name = "children";
let ProtoInstance99 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance99.name = "Segment";
ProtoInstance99.DEF = "hanim_l_thigh";
let fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "name";
fieldValue100.value = "l_thigh";
ProtoInstance99.fieldValue = new MFNode();

ProtoInstance99.fieldValue[0] = fieldValue100;

let fieldValue101 = browser.currentScene.createNode("fieldValue");
fieldValue101.name = "children";
let Shape102 = browser.currentScene.createNode("Shape");
let Appearance103 = browser.currentScene.createNode("Appearance");
let Material104 = browser.currentScene.createNode("Material");
Material104.USE = "Pants_Color";
Appearance103.material = Material104;

Shape102.appearance = Appearance103;

let IndexedFaceSet105 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet105.coordIndex = new MFInt32(new int[0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
IndexedFaceSet105.creaseAngle = 1.32;
let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
IndexedFaceSet105.coord = Coordinate106;

Shape102.geometry = IndexedFaceSet105;

fieldValue101.children = new MFNode();

fieldValue101.children[0] = Shape102;

ProtoInstance99.fieldValue[1] = fieldValue101;

fieldValue98.children = new MFNode();

fieldValue98.children[0] = ProtoInstance99;

let ProtoInstance107 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance107.name = "Joint";
ProtoInstance107.DEF = "hanim_l_knee";
let fieldValue108 = browser.currentScene.createNode("fieldValue");
fieldValue108.name = "name";
fieldValue108.value = "l_knee";
ProtoInstance107.fieldValue = new MFNode();

ProtoInstance107.fieldValue[0] = fieldValue108;

let fieldValue109 = browser.currentScene.createNode("fieldValue");
fieldValue109.name = "center";
fieldValue109.value = "0.0738 0.517 -0.0284";
ProtoInstance107.fieldValue[1] = fieldValue109;

let fieldValue110 = browser.currentScene.createNode("fieldValue");
fieldValue110.name = "children";
let ProtoInstance111 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance111.name = "Segment";
ProtoInstance111.DEF = "hanim_l_calf";
let fieldValue112 = browser.currentScene.createNode("fieldValue");
fieldValue112.name = "name";
fieldValue112.value = "l_calf";
ProtoInstance111.fieldValue = new MFNode();

ProtoInstance111.fieldValue[0] = fieldValue112;

let fieldValue113 = browser.currentScene.createNode("fieldValue");
fieldValue113.name = "children";
let Shape114 = browser.currentScene.createNode("Shape");
let Appearance115 = browser.currentScene.createNode("Appearance");
let Material116 = browser.currentScene.createNode("Material");
Material116.USE = "Pants_Color";
Appearance115.material = Material116;

Shape114.appearance = Appearance115;

let IndexedFaceSet117 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet117.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
IndexedFaceSet117.creaseAngle = 1.57;
let Coordinate118 = browser.currentScene.createNode("Coordinate");
Coordinate118.point = new MFVec3f(new float[0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
IndexedFaceSet117.coord = Coordinate118;

Shape114.geometry = IndexedFaceSet117;

fieldValue113.children = new MFNode();

fieldValue113.children[0] = Shape114;

ProtoInstance111.fieldValue[1] = fieldValue113;

fieldValue110.children = new MFNode();

fieldValue110.children[0] = ProtoInstance111;

let ProtoInstance119 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance119.name = "Joint";
ProtoInstance119.DEF = "hanim_l_ankle";
let fieldValue120 = browser.currentScene.createNode("fieldValue");
fieldValue120.name = "name";
fieldValue120.value = "l_ankle";
ProtoInstance119.fieldValue = new MFNode();

ProtoInstance119.fieldValue[0] = fieldValue120;

let fieldValue121 = browser.currentScene.createNode("fieldValue");
fieldValue121.name = "center";
fieldValue121.value = "0.0645 0.0719 -0.048";
ProtoInstance119.fieldValue[1] = fieldValue121;

let fieldValue122 = browser.currentScene.createNode("fieldValue");
fieldValue122.name = "children";
let ProtoInstance123 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance123.name = "Segment";
ProtoInstance123.DEF = "hanim_l_hindfoot";
let fieldValue124 = browser.currentScene.createNode("fieldValue");
fieldValue124.name = "name";
fieldValue124.value = "l_hindfoot";
ProtoInstance123.fieldValue = new MFNode();

ProtoInstance123.fieldValue[0] = fieldValue124;

let fieldValue125 = browser.currentScene.createNode("fieldValue");
fieldValue125.name = "children";
let Shape126 = browser.currentScene.createNode("Shape");
let Appearance127 = browser.currentScene.createNode("Appearance");
let Material128 = browser.currentScene.createNode("Material");
Material128.DEF = "Shoe_Color";
Material128.ambientIntensity = 0.25;
Material128.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance127.material = Material128;

Shape126.appearance = Appearance127;

let IndexedFaceSet129 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet129.coordIndex = new MFInt32(new int[2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
IndexedFaceSet129.creaseAngle = 1.57;
let Coordinate130 = browser.currentScene.createNode("Coordinate");
Coordinate130.point = new MFVec3f(new float[0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
IndexedFaceSet129.coord = Coordinate130;

Shape126.geometry = IndexedFaceSet129;

fieldValue125.children = new MFNode();

fieldValue125.children[0] = Shape126;

let Transform131 = browser.currentScene.createNode("Transform");
Transform131.scale = new SFVec3f(new float[0.015,0.015,0.015]);
let Transform132 = browser.currentScene.createNode("Transform");
Transform132.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform132.translation = new SFVec3f(new float[6,-0.5,-7.5]);
let Shape133 = browser.currentScene.createNode("Shape");
let Appearance134 = browser.currentScene.createNode("Appearance");
let Material135 = browser.currentScene.createNode("Material");
Material135.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance134.material = Material135;

Shape133.appearance = Appearance134;

let Extrusion136 = browser.currentScene.createNode("Extrusion");
Extrusion136.DEF = "Finl";
Extrusion136.ccw = False;
Extrusion136.creaseAngle = 3.14;
Extrusion136.crossSection = new MFVec2f(new float[-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion136.scale = new MFVec2f(new float[0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion136.spine = new MFVec3f(new float[0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
Shape133.geometry = Extrusion136;

Transform132.children = new MFNode();

Transform132.children[0] = Shape133;

Transform131.children = new MFNode();

Transform131.children[0] = Transform132;

fieldValue125.children[1] = Transform131;

ProtoInstance123.fieldValue[1] = fieldValue125;

fieldValue122.children = new MFNode();

fieldValue122.children[0] = ProtoInstance123;

ProtoInstance119.fieldValue[2] = fieldValue122;

fieldValue110.children[1] = ProtoInstance119;

ProtoInstance107.fieldValue[2] = fieldValue110;

fieldValue98.children[1] = ProtoInstance107;

ProtoInstance95.fieldValue[2] = fieldValue98;

fieldValue86.children[1] = ProtoInstance95;

let ProtoInstance137 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance137.name = "Joint";
ProtoInstance137.DEF = "hanim_r_hip";
let fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "name";
fieldValue138.value = "r_hip";
ProtoInstance137.fieldValue = new MFNode();

ProtoInstance137.fieldValue[0] = fieldValue138;

let fieldValue139 = browser.currentScene.createNode("fieldValue");
fieldValue139.name = "center";
fieldValue139.value = "-0.11 0.892362 -0.0732533";
ProtoInstance137.fieldValue[1] = fieldValue139;

let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "children";
let ProtoInstance141 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance141.name = "Segment";
ProtoInstance141.DEF = "hanim_r_thigh";
let fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "name";
fieldValue142.value = "r_thigh";
ProtoInstance141.fieldValue = new MFNode();

ProtoInstance141.fieldValue[0] = fieldValue142;

let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "children";
let Shape144 = browser.currentScene.createNode("Shape");
let Appearance145 = browser.currentScene.createNode("Appearance");
let Material146 = browser.currentScene.createNode("Material");
Material146.USE = "Pants_Color";
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

let IndexedFaceSet147 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet147.coordIndex = new MFInt32(new int[5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
IndexedFaceSet147.creaseAngle = 1.61;
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
IndexedFaceSet147.coord = Coordinate148;

Shape144.geometry = IndexedFaceSet147;

fieldValue143.children = new MFNode();

fieldValue143.children[0] = Shape144;

ProtoInstance141.fieldValue[1] = fieldValue143;

fieldValue140.children = new MFNode();

fieldValue140.children[0] = ProtoInstance141;

let ProtoInstance149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance149.name = "Joint";
ProtoInstance149.DEF = "hanim_r_knee";
let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "name";
fieldValue150.value = "r_knee";
ProtoInstance149.fieldValue = new MFNode();

ProtoInstance149.fieldValue[0] = fieldValue150;

let fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "center";
fieldValue151.value = "-0.0699 0.51 -0.0166";
ProtoInstance149.fieldValue[1] = fieldValue151;

let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "children";
let ProtoInstance153 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance153.name = "Segment";
ProtoInstance153.DEF = "hanim_r_calf";
let fieldValue154 = browser.currentScene.createNode("fieldValue");
fieldValue154.name = "name";
fieldValue154.value = "r_calf";
ProtoInstance153.fieldValue = new MFNode();

ProtoInstance153.fieldValue[0] = fieldValue154;

let fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "children";
let Shape156 = browser.currentScene.createNode("Shape");
let Appearance157 = browser.currentScene.createNode("Appearance");
let Material158 = browser.currentScene.createNode("Material");
Material158.USE = "Pants_Color";
Appearance157.material = Material158;

Shape156.appearance = Appearance157;

let IndexedFaceSet159 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet159.coordIndex = new MFInt32(new int[14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
IndexedFaceSet159.creaseAngle = 1.57;
let Coordinate160 = browser.currentScene.createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
IndexedFaceSet159.coord = Coordinate160;

Shape156.geometry = IndexedFaceSet159;

fieldValue155.children = new MFNode();

fieldValue155.children[0] = Shape156;

ProtoInstance153.fieldValue[1] = fieldValue155;

fieldValue152.children = new MFNode();

fieldValue152.children[0] = ProtoInstance153;

let ProtoInstance161 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance161.name = "Joint";
ProtoInstance161.DEF = "hanim_r_ankle";
let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "name";
fieldValue162.value = "r_ankle";
ProtoInstance161.fieldValue = new MFNode();

ProtoInstance161.fieldValue[0] = fieldValue162;

let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "center";
fieldValue163.value = "-0.064 0.0753 -0.0412";
ProtoInstance161.fieldValue[1] = fieldValue163;

let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "children";
let ProtoInstance165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance165.name = "Segment";
ProtoInstance165.DEF = "hanim_r_hindfoot";
let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "name";
fieldValue166.value = "r_hindfoot";
ProtoInstance165.fieldValue = new MFNode();

ProtoInstance165.fieldValue[0] = fieldValue166;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "children";
let Shape168 = browser.currentScene.createNode("Shape");
let Appearance169 = browser.currentScene.createNode("Appearance");
let Material170 = browser.currentScene.createNode("Material");
Material170.USE = "Shoe_Color";
Appearance169.material = Material170;

Shape168.appearance = Appearance169;

let IndexedFaceSet171 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet171.coordIndex = new MFInt32(new int[6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
IndexedFaceSet171.creaseAngle = 1.57;
let Coordinate172 = browser.currentScene.createNode("Coordinate");
Coordinate172.point = new MFVec3f(new float[-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
IndexedFaceSet171.coord = Coordinate172;

Shape168.geometry = IndexedFaceSet171;

fieldValue167.children = new MFNode();

fieldValue167.children[0] = Shape168;

let Transform173 = browser.currentScene.createNode("Transform");
Transform173.scale = new SFVec3f(new float[0.015,0.015,0.015]);
let Transform174 = browser.currentScene.createNode("Transform");
Transform174.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform174.translation = new SFVec3f(new float[-5,-0.5,-7.5]);
let Shape175 = browser.currentScene.createNode("Shape");
let Appearance176 = browser.currentScene.createNode("Appearance");
let Material177 = browser.currentScene.createNode("Material");
Material177.diffuseColor = new SFColor(new float[0.753,1,0.243]);
Appearance176.material = Material177;

Shape175.appearance = Appearance176;

let Extrusion178 = browser.currentScene.createNode("Extrusion");
Extrusion178.DEF = "Finr";
Extrusion178.ccw = False;
Extrusion178.creaseAngle = 3.14;
Extrusion178.crossSection = new MFVec2f(new float[-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion178.scale = new MFVec2f(new float[0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion178.spine = new MFVec3f(new float[0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
Shape175.geometry = Extrusion178;

Transform174.children = new MFNode();

Transform174.children[0] = Shape175;

Transform173.children = new MFNode();

Transform173.children[0] = Transform174;

fieldValue167.children[1] = Transform173;

ProtoInstance165.fieldValue[1] = fieldValue167;

fieldValue164.children = new MFNode();

fieldValue164.children[0] = ProtoInstance165;

ProtoInstance161.fieldValue[2] = fieldValue164;

fieldValue152.children[1] = ProtoInstance161;

ProtoInstance149.fieldValue[2] = fieldValue152;

fieldValue140.children[1] = ProtoInstance149;

ProtoInstance137.fieldValue[2] = fieldValue140;

fieldValue86.children[2] = ProtoInstance137;

ProtoInstance83.fieldValue[2] = fieldValue86;

fieldValue82.children = new MFNode();

fieldValue82.children[0] = ProtoInstance83;

//Fins animation
let ProximitySensor179 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor179.DEF = "FinTriggerProximitySensor";
ProximitySensor179.size = new SFVec3f(new float[5,5,5]);
fieldValue82.children[1] = ProximitySensor179;

let TimeSensor180 = browser.currentScene.createNode("TimeSensor");
TimeSensor180.DEF = "FinClock";
TimeSensor180.cycleInterval = 7;
TimeSensor180.loop = True;
fieldValue82.children[2] = TimeSensor180;

let Group181 = browser.currentScene.createNode("Group");
let Script182 = browser.currentScene.createNode("Script");
Script182.DEF = "FinScript";
let field183 = browser.currentScene.createNode("field");
field183.name = "keyValueR";
field183.accessType = "outputOnly";
field183.type = "MFVec3f";
Script182.field = new MFNode();

Script182.field[0] = field183;

let field184 = browser.currentScene.createNode("field");
field184.name = "keyValueL";
field184.accessType = "outputOnly";
field184.type = "MFVec3f";
Script182.field[1] = field184;

let field185 = browser.currentScene.createNode("field");
field185.name = "set_fraction";
field185.accessType = "inputOnly";
field185.type = "SFFloat";
Script182.field[2] = field185;

let field186 = browser.currentScene.createNode("field");
field186.name = "finL";
field186.accessType = "inputOnly";
field186.type = "SFBool";
Script182.field[3] = field186;

let field187 = browser.currentScene.createNode("field");
field187.name = "finR";
field187.accessType = "inputOnly";
field187.type = "SFBool";
Script182.field[4] = field187;

let field188 = browser.currentScene.createNode("field");
field188.name = "traceEnabled";
field188.accessType = "initializeOnly";
field188.type = "SFBool";
field188.value = "true";
Script182.field[5] = field188;


Script182.setSourceCode(`ecmascript:\n"+
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
Group181.children = new MFNode();

Group181.children[0] = Script182;

let ROUTE189 = browser.currentScene.createNode("ROUTE");
ROUTE189.fromField = "isActive";
ROUTE189.fromNode = "FinTriggerProximitySensor";
ROUTE189.toField = "enabled";
ROUTE189.toNode = "FinClock";
Group181.children[1] = ROUTE189;

let ROUTE190 = browser.currentScene.createNode("ROUTE");
ROUTE190.fromField = "fraction_changed";
ROUTE190.fromNode = "FinClock";
ROUTE190.toField = "set_fraction";
ROUTE190.toNode = "FinScript";
Group181.children[2] = ROUTE190;

let ROUTE191 = browser.currentScene.createNode("ROUTE");
ROUTE191.fromField = "keyValueR";
ROUTE191.fromNode = "FinScript";
ROUTE191.toField = "set_spine";
ROUTE191.toNode = "Finr";
Group181.children[3] = ROUTE191;

let ROUTE192 = browser.currentScene.createNode("ROUTE");
ROUTE192.fromField = "keyValueL";
ROUTE192.fromNode = "FinScript";
ROUTE192.toField = "set_spine";
ROUTE192.toNode = "Finl";
Group181.children[4] = ROUTE192;

fieldValue82.children[3] = Group181;

let ProtoInstance193 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance193.name = "Joint";
ProtoInstance193.DEF = "hanim_vl1";
let fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "name";
fieldValue194.value = "vl1";
ProtoInstance193.fieldValue = new MFNode();

ProtoInstance193.fieldValue[0] = fieldValue194;

let fieldValue195 = browser.currentScene.createNode("fieldValue");
fieldValue195.name = "center";
fieldValue195.value = "-0.00405 1.07 -0.0275";
ProtoInstance193.fieldValue[1] = fieldValue195;

let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "children";
let ProtoInstance197 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance197.name = "Segment";
ProtoInstance197.DEF = "hanim_c7";
let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "name";
fieldValue198.value = "l1";
ProtoInstance197.fieldValue = new MFNode();

ProtoInstance197.fieldValue[0] = fieldValue198;

let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "children";
let Transform200 = browser.currentScene.createNode("Transform");
Transform200.scale = new SFVec3f(new float[1.05,1.05,1.05]);
Transform200.translation = new SFVec3f(new float[0,-0.09,0]);
let Shape201 = browser.currentScene.createNode("Shape");
let Appearance202 = browser.currentScene.createNode("Appearance");
let Material203 = browser.currentScene.createNode("Material");
Material203.DEF = "WetShirtColor";
Material203.ambientIntensity = 0.25;
Material203.diffuseColor = new SFColor(new float[0,0,0.502]);
Appearance202.material = Material203;

let ImageTexture204 = browser.currentScene.createNode("ImageTexture");
ImageTexture204.DEF = "small_logo_Tex";
ImageTexture204.url = new MFString(new java.lang.String["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif"]);
Appearance202.texture = ImageTexture204;

Shape201.appearance = Appearance202;

let IndexedFaceSet205 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet205.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
IndexedFaceSet205.creaseAngle = 1.59;
let Coordinate206 = browser.currentScene.createNode("Coordinate");
Coordinate206.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet205.coord = Coordinate206;

let TextureCoordinate207 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate207.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet205.texCoord = TextureCoordinate207;

Shape201.geometry = IndexedFaceSet205;

Transform200.children = new MFNode();

Transform200.children[0] = Shape201;

fieldValue199.children = new MFNode();

fieldValue199.children[0] = Transform200;

//<Transform DEF='Imaf3D'> <Shape> <Appearance> <Material/> <ImageTexture/> </Appearance> <IndexedFaceSet> <Coordinate/> <TextureCoordinate/> </IndexedFaceSet> </Shape> </Transform>
let Transform208 = browser.currentScene.createNode("Transform");
Transform208.scale = new SFVec3f(new float[1.25,1.1,1.3]);
Transform208.translation = new SFVec3f(new float[0,1.18,0.015]);
let Group209 = browser.currentScene.createNode("Group");
let Transform210 = browser.currentScene.createNode("Transform");
Transform210.translation = new SFVec3f(new float[0,-1.2,0]);
let Shape211 = browser.currentScene.createNode("Shape");
let Appearance212 = browser.currentScene.createNode("Appearance");
let Material213 = browser.currentScene.createNode("Material");
Material213.DEF = "BCLColor";
Material213.ambientIntensity = 0.25;
Material213.diffuseColor = new SFColor(new float[0.0588,0.0588,0.0588]);
Material213.shininess = 0.5;
Appearance212.material = Material213;

Shape211.appearance = Appearance212;

let IndexedFaceSet214 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet214.coordIndex = new MFInt32(new int[4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1]);
IndexedFaceSet214.creaseAngle = 1.59;
IndexedFaceSet214.solid = False;
let Coordinate215 = browser.currentScene.createNode("Coordinate");
Coordinate215.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet214.coord = Coordinate215;

let TextureCoordinate216 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate216.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet214.texCoord = TextureCoordinate216;

Shape211.geometry = IndexedFaceSet214;

Transform210.children = new MFNode();

Transform210.children[0] = Shape211;

Group209.children = new MFNode();

Group209.children[0] = Transform210;

let Transform217 = browser.currentScene.createNode("Transform");
Transform217.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform217.scale = new SFVec3f(new float[2,1.5,1.5]);
Transform217.translation = new SFVec3f(new float[0.13,0.22,-0.1]);
let Transform218 = browser.currentScene.createNode("Transform");
Transform218.rotation = new SFRotation(new float[1,0,0,1.4]);
let Shape219 = browser.currentScene.createNode("Shape");
Shape219.DEF = "BCLSnorkelPad";
let Appearance220 = browser.currentScene.createNode("Appearance");
let Material221 = browser.currentScene.createNode("Material");
Material221.USE = "BCLColor";
Appearance220.material = Material221;

Shape219.appearance = Appearance220;

let Extrusion222 = browser.currentScene.createNode("Extrusion");
Extrusion222.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion222.spine = new MFVec3f(new float[-0.03,0.01,0,-0.005,0.04,0,0,0.06,0,-0.01,0.075,0]);
Shape219.geometry = Extrusion222;

Transform218.children = new MFNode();

Transform218.children[0] = Shape219;

Transform217.children = new MFNode();

Transform217.children[0] = Transform218;

Group209.children[1] = Transform217;

let Transform223 = browser.currentScene.createNode("Transform");
Transform223.rotation = new SFRotation(new float[-1,0,0,0.8]);
Transform223.translation = new SFVec3f(new float[0.07,0.08,0.125]);
let Shape224 = browser.currentScene.createNode("Shape");
let Appearance225 = browser.currentScene.createNode("Appearance");
let Material226 = browser.currentScene.createNode("Material");
Material226.DEF = "BCLSnorkel";
Material226.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Material226.shininess = 0.5;
Material226.transparency = 0.1;
Appearance225.material = Material226;

Shape224.appearance = Appearance225;

let Extrusion227 = browser.currentScene.createNode("Extrusion");
Extrusion227.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion227.scale = new MFVec2f(new float[0.8,0.8,1,1]);
Extrusion227.spine = new MFVec3f(new float[0.03,0.03,-0.05,0.05,0.2,0]);
Shape224.geometry = Extrusion227;

Transform223.children = new MFNode();

Transform223.children[0] = Shape224;

Group209.children[2] = Transform223;

let Group228 = browser.currentScene.createNode("Group");
Group228.DEF = "buckle";
let Transform229 = browser.currentScene.createNode("Transform");
Transform229.rotation = new SFRotation(new float[-1,0,0,0.68]);
Transform229.translation = new SFVec3f(new float[-0.08,0.1,0.029]);
let Shape230 = browser.currentScene.createNode("Shape");
let Appearance231 = browser.currentScene.createNode("Appearance");
Appearance231.DEF = "buckleHolder";
let Material232 = browser.currentScene.createNode("Material");
Material232.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Appearance231.material = Material232;

Shape230.appearance = Appearance231;

let Box233 = browser.currentScene.createNode("Box");
Box233.size = new SFVec3f(new float[0.03,0.03,0.005]);
Shape230.geometry = Box233;

Transform229.children = new MFNode();

Transform229.children[0] = Shape230;

Group228.children = new MFNode();

Group228.children[0] = Transform229;

let Transform234 = browser.currentScene.createNode("Transform");
Transform234.rotation = new SFRotation(new float[-1,0,0,0.68]);
Transform234.translation = new SFVec3f(new float[0.03,0.1,0.027]);
let Shape235 = browser.currentScene.createNode("Shape");
let Appearance236 = browser.currentScene.createNode("Appearance");
Appearance236.USE = "buckleHolder";
Shape235.appearance = Appearance236;

let Box237 = browser.currentScene.createNode("Box");
Box237.size = new SFVec3f(new float[0.15,0.03,0.001]);
Shape235.geometry = Box237;

Transform234.children = new MFNode();

Transform234.children[0] = Shape235;

Group228.children[1] = Transform234;

let Transform238 = browser.currentScene.createNode("Transform");
Transform238.rotation = new SFRotation(new float[-1,0,0,0.68]);
Transform238.translation = new SFVec3f(new float[-0.045,0.1,0.028]);
let Shape239 = browser.currentScene.createNode("Shape");
let Appearance240 = browser.currentScene.createNode("Appearance");
Appearance240.DEF = "pin";
let Material241 = browser.currentScene.createNode("Material");
Appearance240.material = Material241;

Shape239.appearance = Appearance240;

let Box242 = browser.currentScene.createNode("Box");
Box242.size = new SFVec3f(new float[0.02,0.028,0.005]);
Shape239.geometry = Box242;

Transform238.children = new MFNode();

Transform238.children[0] = Shape239;

Group228.children[2] = Transform238;

let Transform243 = browser.currentScene.createNode("Transform");
Transform243.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform243.translation = new SFVec3f(new float[-0.06,0.1,0.029]);
let Shape244 = browser.currentScene.createNode("Shape");
let Appearance245 = browser.currentScene.createNode("Appearance");
Appearance245.USE = "pin";
Shape244.appearance = Appearance245;

let Cylinder246 = browser.currentScene.createNode("Cylinder");
Cylinder246.height = 0.02;
Cylinder246.radius = 0.0024;
Shape244.geometry = Cylinder246;

Transform243.children = new MFNode();

Transform243.children[0] = Shape244;

Group228.children[3] = Transform243;

let Transform247 = browser.currentScene.createNode("Transform");
Transform247.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform247.translation = new SFVec3f(new float[-0.06,0.109,0.0217]);
let Shape248 = browser.currentScene.createNode("Shape");
let Appearance249 = browser.currentScene.createNode("Appearance");
Appearance249.USE = "pin";
Shape248.appearance = Appearance249;

let Cylinder250 = browser.currentScene.createNode("Cylinder");
Cylinder250.height = 0.02;
Cylinder250.radius = 0.0024;
Shape248.geometry = Cylinder250;

Transform247.children = new MFNode();

Transform247.children[0] = Shape248;

Group228.children[4] = Transform247;

let Transform251 = browser.currentScene.createNode("Transform");
Transform251.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform251.translation = new SFVec3f(new float[-0.06,0.091,0.036]);
let Shape252 = browser.currentScene.createNode("Shape");
let Appearance253 = browser.currentScene.createNode("Appearance");
Appearance253.USE = "pin";
Shape252.appearance = Appearance253;

let Cylinder254 = browser.currentScene.createNode("Cylinder");
Cylinder254.height = 0.02;
Cylinder254.radius = 0.0024;
Shape252.geometry = Cylinder254;

Transform251.children = new MFNode();

Transform251.children[0] = Shape252;

Group228.children[5] = Transform251;

Group209.children[3] = Group228;

let Group255 = browser.currentScene.createNode("Group");
Group255.DEF = "buckleBelt";
let Transform256 = browser.currentScene.createNode("Transform");
Transform256.rotation = new SFRotation(new float[0,1,0,-0.68]);
Transform256.translation = new SFVec3f(new float[-0.07,-0.12,0.038]);
let Shape257 = browser.currentScene.createNode("Shape");
let Appearance258 = browser.currentScene.createNode("Appearance");
Appearance258.USE = "buckleHolder";
Shape257.appearance = Appearance258;

let Box259 = browser.currentScene.createNode("Box");
Box259.size = new SFVec3f(new float[0.04,0.1,0.005]);
Shape257.geometry = Box259;

Transform256.children = new MFNode();

Transform256.children[0] = Shape257;

Group255.children = new MFNode();

Group255.children[0] = Transform256;

let Transform260 = browser.currentScene.createNode("Transform");
Transform260.translation = new SFVec3f(new float[0.005,-0.12,0.053]);
let Shape261 = browser.currentScene.createNode("Shape");
let Appearance262 = browser.currentScene.createNode("Appearance");
Appearance262.USE = "buckleHolder";
Shape261.appearance = Appearance262;

let Box263 = browser.currentScene.createNode("Box");
Box263.size = new SFVec3f(new float[0.12,0.11,0.001]);
Shape261.geometry = Box263;

Transform260.children = new MFNode();

Transform260.children[0] = Shape261;

Group255.children[1] = Transform260;

let Transform264 = browser.currentScene.createNode("Transform");
Transform264.rotation = new SFRotation(new float[0,1,0,0.68]);
Transform264.translation = new SFVec3f(new float[0.075,-0.12,0.038]);
let Shape265 = browser.currentScene.createNode("Shape");
let Appearance266 = browser.currentScene.createNode("Appearance");
Appearance266.USE = "buckleHolder";
Shape265.appearance = Appearance266;

let Box267 = browser.currentScene.createNode("Box");
Box267.size = new SFVec3f(new float[0.04,0.1,0.005]);
Shape265.geometry = Box267;

Transform264.children = new MFNode();

Transform264.children[0] = Shape265;

Group255.children[2] = Transform264;

Group209.children[4] = Group255;

Transform208.children = new MFNode();

Transform208.children[0] = Group209;

fieldValue199.children[1] = Transform208;

let Transform268 = browser.currentScene.createNode("Transform");
Transform268.DEF = "ScubaTank";
Transform268.rotation = new SFRotation(new float[0,1,0,3.14]);
Transform268.scale = new SFVec3f(new float[0.8,0.8,0.8]);
Transform268.translation = new SFVec3f(new float[0,1.1,-0.23]);
let Transform269 = browser.currentScene.createNode("Transform");
let Shape270 = browser.currentScene.createNode("Shape");
let Appearance271 = browser.currentScene.createNode("Appearance");
let Material272 = browser.currentScene.createNode("Material");
Material272.DEF = "tank";
Material272.ambientIntensity = 0.3;
Material272.diffuseColor = new SFColor(new float[0.3,0.3,0.5]);
Material272.shininess = 0.1;
Material272.specularColor = new SFColor(new float[0.7,0.7,0.8]);
Appearance271.material = Material272;

Shape270.appearance = Appearance271;

let Cylinder273 = browser.currentScene.createNode("Cylinder");
Cylinder273.height = 0.7;
Cylinder273.radius = 0.1;
Shape270.geometry = Cylinder273;

Transform269.children = new MFNode();

Transform269.children[0] = Shape270;

Transform268.children = new MFNode();

Transform268.children[0] = Transform269;

let Transform274 = browser.currentScene.createNode("Transform");
Transform274.translation = new SFVec3f(new float[0,0.35,0]);
let Shape275 = browser.currentScene.createNode("Shape");
let Appearance276 = browser.currentScene.createNode("Appearance");
let Material277 = browser.currentScene.createNode("Material");
Material277.USE = "tank";
Appearance276.material = Material277;

Shape275.appearance = Appearance276;

let Sphere278 = browser.currentScene.createNode("Sphere");
Sphere278.radius = 0.098;
Shape275.geometry = Sphere278;

Transform274.children = new MFNode();

Transform274.children[0] = Shape275;

Transform268.children[1] = Transform274;

let Transform279 = browser.currentScene.createNode("Transform");
Transform279.translation = new SFVec3f(new float[0,-0.35,0]);
let Shape280 = browser.currentScene.createNode("Shape");
Shape280.DEF = "tankBottom";
let Appearance281 = browser.currentScene.createNode("Appearance");
let Material282 = browser.currentScene.createNode("Material");
Material282.ambientIntensity = 0.3;
Material282.diffuseColor = new SFColor(new float[0,0,0]);
Appearance281.material = Material282;

Shape280.appearance = Appearance281;

let Cylinder283 = browser.currentScene.createNode("Cylinder");
Cylinder283.height = 0.06;
Cylinder283.radius = 0.101;
Shape280.geometry = Cylinder283;

Transform279.children = new MFNode();

Transform279.children[0] = Shape280;

Transform268.children[2] = Transform279;

let Group284 = browser.currentScene.createNode("Group");
Group284.DEF = "tankNozzle";
let Transform285 = browser.currentScene.createNode("Transform");
let Transform286 = browser.currentScene.createNode("Transform");
Transform286.translation = new SFVec3f(new float[0,0.45,0]);
let Shape287 = browser.currentScene.createNode("Shape");
Shape287.DEF = "pressure";
let Appearance288 = browser.currentScene.createNode("Appearance");
let Material289 = browser.currentScene.createNode("Material");
Material289.DEF = "pressureColor";
Material289.ambientIntensity = 0.4;
Material289.diffuseColor = new SFColor(new float[0.91,0.91,0.91]);
Material289.shininess = 0.16;
Material289.specularColor = new SFColor(new float[0.91,0.9,0.91]);
Appearance288.material = Material289;

Shape287.appearance = Appearance288;

let Cylinder290 = browser.currentScene.createNode("Cylinder");
Cylinder290.height = 0.1;
Cylinder290.radius = 0.015;
Shape287.geometry = Cylinder290;

Transform286.children = new MFNode();

Transform286.children[0] = Shape287;

Transform285.children = new MFNode();

Transform285.children[0] = Transform286;

let Transform291 = browser.currentScene.createNode("Transform");
Transform291.translation = new SFVec3f(new float[0,0.5,0]);
let Shape292 = browser.currentScene.createNode("Shape");
Shape292.DEF = "pressureTop";
let Appearance293 = browser.currentScene.createNode("Appearance");
let Material294 = browser.currentScene.createNode("Material");
Material294.DEF = "top";
Material294.diffuseColor = new SFColor(new float[0,0,0]);
Appearance293.material = Material294;

Shape292.appearance = Appearance293;

let Cylinder295 = browser.currentScene.createNode("Cylinder");
Cylinder295.height = 0.02;
Cylinder295.radius = 0.025;
Shape292.geometry = Cylinder295;

Transform291.children = new MFNode();

Transform291.children[0] = Shape292;

Transform285.children[1] = Transform291;

let Transform296 = browser.currentScene.createNode("Transform");
Transform296.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform296.translation = new SFVec3f(new float[-0.028,0.462,0]);
let Transform297 = browser.currentScene.createNode("Transform");
let Shape298 = browser.currentScene.createNode("Shape");
Shape298.DEF = "connectorToRegulator";
let Appearance299 = browser.currentScene.createNode("Appearance");
let Material300 = browser.currentScene.createNode("Material");
Material300.USE = "pressureColor";
Appearance299.material = Material300;

Shape298.appearance = Appearance299;

let Cylinder301 = browser.currentScene.createNode("Cylinder");
Cylinder301.height = 0.03;
Cylinder301.radius = 0.01;
Shape298.geometry = Cylinder301;

Transform297.children = new MFNode();

Transform297.children[0] = Shape298;

Transform296.children = new MFNode();

Transform296.children[0] = Transform297;

let Transform302 = browser.currentScene.createNode("Transform");
Transform302.translation = new SFVec3f(new float[0,0.02,0]);
let Shape303 = browser.currentScene.createNode("Shape");
Shape303.DEF = "connectorToRegulatorTop";
let Appearance304 = browser.currentScene.createNode("Appearance");
let Material305 = browser.currentScene.createNode("Material");
Material305.USE = "top";
Appearance304.material = Material305;

Shape303.appearance = Appearance304;

let Cylinder306 = browser.currentScene.createNode("Cylinder");
Cylinder306.height = 0.02;
Cylinder306.radius = 0.02;
Shape303.geometry = Cylinder306;

Transform302.children = new MFNode();

Transform302.children[0] = Shape303;

Transform296.children[1] = Transform302;

Transform285.children[2] = Transform296;

Group284.children = new MFNode();

Group284.children[0] = Transform285;

Transform268.children[3] = Group284;

let Transform307 = browser.currentScene.createNode("Transform");
Transform307.translation = new SFVec3f(new float[0,0.2,0]);
let Shape308 = browser.currentScene.createNode("Shape");
Shape308.DEF = "tankHoldBelt";
let Appearance309 = browser.currentScene.createNode("Appearance");
let Material310 = browser.currentScene.createNode("Material");
Material310.ambientIntensity = 0.3;
Material310.diffuseColor = new SFColor(new float[0,0,0]);
Appearance309.material = Material310;

Shape308.appearance = Appearance309;

let Cylinder311 = browser.currentScene.createNode("Cylinder");
Cylinder311.height = 0.1;
Cylinder311.radius = 0.115;
Shape308.geometry = Cylinder311;

Transform307.children = new MFNode();

Transform307.children[0] = Shape308;

Transform268.children[4] = Transform307;

fieldValue199.children[2] = Transform268;

ProtoInstance197.fieldValue[1] = fieldValue199;

fieldValue196.children = new MFNode();

fieldValue196.children[0] = ProtoInstance197;

let ProtoInstance312 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance312.name = "Joint";
ProtoInstance312.DEF = "hanim_l_shoulder";
let fieldValue313 = browser.currentScene.createNode("fieldValue");
fieldValue313.name = "name";
fieldValue313.value = "l_shoulder";
ProtoInstance312.fieldValue = new MFNode();

ProtoInstance312.fieldValue[0] = fieldValue313;

let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "center";
fieldValue314.value = "0.167 1.36 -0.0518";
ProtoInstance312.fieldValue[1] = fieldValue314;

let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "children";
let ProtoInstance316 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance316.name = "Segment";
ProtoInstance316.DEF = "hanim_l_upperarm";
let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "name";
fieldValue317.value = "l_upperarm";
ProtoInstance316.fieldValue = new MFNode();

ProtoInstance316.fieldValue[0] = fieldValue317;

let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "children";
let Transform319 = browser.currentScene.createNode("Transform");
Transform319.DEF = "l_upperarm_adjust";
Transform319.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform319.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform319.translation = new SFVec3f(new float[0,0.0004203,-0.01665]);
let Shape320 = browser.currentScene.createNode("Shape");
let Appearance321 = browser.currentScene.createNode("Appearance");
let Material322 = browser.currentScene.createNode("Material");
Material322.USE = "WetShirtColor";
Appearance321.material = Material322;

Shape320.appearance = Appearance321;

let IndexedFaceSet323 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet323.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
IndexedFaceSet323.creaseAngle = 1.65;
let Coordinate324 = browser.currentScene.createNode("Coordinate");
Coordinate324.point = new MFVec3f(new float[0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
IndexedFaceSet323.coord = Coordinate324;

Shape320.geometry = IndexedFaceSet323;

Transform319.children = new MFNode();

Transform319.children[0] = Shape320;

fieldValue318.children = new MFNode();

fieldValue318.children[0] = Transform319;

ProtoInstance316.fieldValue[1] = fieldValue318;

fieldValue315.children = new MFNode();

fieldValue315.children[0] = ProtoInstance316;

let ProtoInstance325 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance325.name = "Joint";
ProtoInstance325.DEF = "hanim_l_elbow";
let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "name";
fieldValue326.value = "l_elbow";
ProtoInstance325.fieldValue = new MFNode();

ProtoInstance325.fieldValue[0] = fieldValue326;

let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "center";
fieldValue327.value = "0.196 1.07 -0.0518";
ProtoInstance325.fieldValue[1] = fieldValue327;

let fieldValue328 = browser.currentScene.createNode("fieldValue");
fieldValue328.name = "children";
let ProtoInstance329 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance329.name = "Segment";
ProtoInstance329.DEF = "hanim_l_forearm";
let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "name";
fieldValue330.value = "l_forearm";
ProtoInstance329.fieldValue = new MFNode();

ProtoInstance329.fieldValue[0] = fieldValue330;

let fieldValue331 = browser.currentScene.createNode("fieldValue");
fieldValue331.name = "children";
let Transform332 = browser.currentScene.createNode("Transform");
Transform332.DEF = "l_forearm_adjust";
Transform332.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform332.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform332.translation = new SFVec3f(new float[0,0.003724,-0.0236]);
let Shape333 = browser.currentScene.createNode("Shape");
let Appearance334 = browser.currentScene.createNode("Appearance");
let Material335 = browser.currentScene.createNode("Material");
Material335.USE = "WetShirtColor";
Appearance334.material = Material335;

Shape333.appearance = Appearance334;

let IndexedFaceSet336 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet336.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
IndexedFaceSet336.creaseAngle = 1.75;
let Coordinate337 = browser.currentScene.createNode("Coordinate");
Coordinate337.point = new MFVec3f(new float[0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
IndexedFaceSet336.coord = Coordinate337;

Shape333.geometry = IndexedFaceSet336;

Transform332.children = new MFNode();

Transform332.children[0] = Shape333;

fieldValue331.children = new MFNode();

fieldValue331.children[0] = Transform332;

ProtoInstance329.fieldValue[1] = fieldValue331;

fieldValue328.children = new MFNode();

fieldValue328.children[0] = ProtoInstance329;

let ProtoInstance338 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance338.name = "Joint";
ProtoInstance338.DEF = "hanim_l_wrist";
let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "name";
fieldValue339.value = "l_wrist";
ProtoInstance338.fieldValue = new MFNode();

ProtoInstance338.fieldValue[0] = fieldValue339;

let fieldValue340 = browser.currentScene.createNode("fieldValue");
fieldValue340.name = "center";
fieldValue340.value = "0.213 0.811 -0.0338";
ProtoInstance338.fieldValue[1] = fieldValue340;

let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "children";
let ProtoInstance342 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance342.name = "Segment";
ProtoInstance342.DEF = "hanim_l_hand";
let fieldValue343 = browser.currentScene.createNode("fieldValue");
fieldValue343.name = "name";
fieldValue343.value = "l_hand";
ProtoInstance342.fieldValue = new MFNode();

ProtoInstance342.fieldValue[0] = fieldValue343;

let fieldValue344 = browser.currentScene.createNode("fieldValue");
fieldValue344.name = "children";
let Transform345 = browser.currentScene.createNode("Transform");
Transform345.DEF = "l_hand_adjust";
Transform345.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform345.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform345.translation = new SFVec3f(new float[0,0.005142,-0.008662]);
let Shape346 = browser.currentScene.createNode("Shape");
let Appearance347 = browser.currentScene.createNode("Appearance");
let Material348 = browser.currentScene.createNode("Material");
Material348.DEF = "Skin_Color";
Material348.ambientIntensity = 0.25;
Material348.diffuseColor = new SFColor(new float[0.749,0.601,0.462]);
Appearance347.material = Material348;

Shape346.appearance = Appearance347;

let IndexedFaceSet349 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet349.coordIndex = new MFInt32(new int[2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
IndexedFaceSet349.creaseAngle = 1.48;
let Coordinate350 = browser.currentScene.createNode("Coordinate");
Coordinate350.point = new MFVec3f(new float[0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
IndexedFaceSet349.coord = Coordinate350;

Shape346.geometry = IndexedFaceSet349;

Transform345.children = new MFNode();

Transform345.children[0] = Shape346;

fieldValue344.children = new MFNode();

fieldValue344.children[0] = Transform345;

ProtoInstance342.fieldValue[1] = fieldValue344;

fieldValue341.children = new MFNode();

fieldValue341.children[0] = ProtoInstance342;

ProtoInstance338.fieldValue[2] = fieldValue341;

fieldValue328.children[1] = ProtoInstance338;

ProtoInstance325.fieldValue[2] = fieldValue328;

fieldValue315.children[1] = ProtoInstance325;

ProtoInstance312.fieldValue[2] = fieldValue315;

fieldValue196.children[1] = ProtoInstance312;

let ProtoInstance351 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance351.name = "Joint";
ProtoInstance351.DEF = "hanim_r_shoulder";
let fieldValue352 = browser.currentScene.createNode("fieldValue");
fieldValue352.name = "name";
fieldValue352.value = "r_shoulder";
ProtoInstance351.fieldValue = new MFNode();

ProtoInstance351.fieldValue[0] = fieldValue352;

let fieldValue353 = browser.currentScene.createNode("fieldValue");
fieldValue353.name = "center";
fieldValue353.value = "-0.167 1.36 -0.0458";
ProtoInstance351.fieldValue[1] = fieldValue353;

let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "children";
let ProtoInstance355 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance355.name = "Segment";
ProtoInstance355.DEF = "hanim_r_upperarm";
let fieldValue356 = browser.currentScene.createNode("fieldValue");
fieldValue356.name = "name";
fieldValue356.value = "r_upperarm";
ProtoInstance355.fieldValue = new MFNode();

ProtoInstance355.fieldValue[0] = fieldValue356;

let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "children";
let Transform358 = browser.currentScene.createNode("Transform");
Transform358.DEF = "r_upperarm_adjust";
Transform358.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform358.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform358.translation = new SFVec3f(new float[0,0.000589,-0.01169]);
let Shape359 = browser.currentScene.createNode("Shape");
let Appearance360 = browser.currentScene.createNode("Appearance");
let Material361 = browser.currentScene.createNode("Material");
Material361.USE = "WetShirtColor";
Appearance360.material = Material361;

Shape359.appearance = Appearance360;

let IndexedFaceSet362 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet362.coordIndex = new MFInt32(new int[14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
IndexedFaceSet362.creaseAngle = 1.53;
let Coordinate363 = browser.currentScene.createNode("Coordinate");
Coordinate363.point = new MFVec3f(new float[-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
IndexedFaceSet362.coord = Coordinate363;

Shape359.geometry = IndexedFaceSet362;

Transform358.children = new MFNode();

Transform358.children[0] = Shape359;

fieldValue357.children = new MFNode();

fieldValue357.children[0] = Transform358;

ProtoInstance355.fieldValue[1] = fieldValue357;

fieldValue354.children = new MFNode();

fieldValue354.children[0] = ProtoInstance355;

let ProtoInstance364 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance364.name = "Joint";
ProtoInstance364.DEF = "hanim_r_elbow";
let fieldValue365 = browser.currentScene.createNode("fieldValue");
fieldValue365.name = "name";
fieldValue365.value = "r_elbow";
ProtoInstance364.fieldValue = new MFNode();

ProtoInstance364.fieldValue[0] = fieldValue365;

let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "center";
fieldValue366.value = "-0.192 1.07 -0.0498";
ProtoInstance364.fieldValue[1] = fieldValue366;

let fieldValue367 = browser.currentScene.createNode("fieldValue");
fieldValue367.name = "children";
let ProtoInstance368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance368.name = "Segment";
ProtoInstance368.DEF = "hanim_r_forearm";
let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "name";
fieldValue369.value = "r_forearm";
ProtoInstance368.fieldValue = new MFNode();

ProtoInstance368.fieldValue[0] = fieldValue369;

let fieldValue370 = browser.currentScene.createNode("fieldValue");
fieldValue370.name = "children";
let Transform371 = browser.currentScene.createNode("Transform");
Transform371.DEF = "r_forearm_adjust";
Transform371.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform371.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform371.translation = new SFVec3f(new float[0,0.003466,-0.01065]);
let Shape372 = browser.currentScene.createNode("Shape");
let Appearance373 = browser.currentScene.createNode("Appearance");
let Material374 = browser.currentScene.createNode("Material");
Material374.USE = "WetShirtColor";
Appearance373.material = Material374;

Shape372.appearance = Appearance373;

let IndexedFaceSet375 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet375.coordIndex = new MFInt32(new int[20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
IndexedFaceSet375.creaseAngle = 1.73;
let Coordinate376 = browser.currentScene.createNode("Coordinate");
Coordinate376.point = new MFVec3f(new float[-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
IndexedFaceSet375.coord = Coordinate376;

Shape372.geometry = IndexedFaceSet375;

Transform371.children = new MFNode();

Transform371.children[0] = Shape372;

fieldValue370.children = new MFNode();

fieldValue370.children[0] = Transform371;

ProtoInstance368.fieldValue[1] = fieldValue370;

fieldValue367.children = new MFNode();

fieldValue367.children[0] = ProtoInstance368;

let ProtoInstance377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance377.name = "Joint";
ProtoInstance377.DEF = "hanim_r_wrist";
let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "name";
fieldValue378.value = "r_wrist";
ProtoInstance377.fieldValue = new MFNode();

ProtoInstance377.fieldValue[0] = fieldValue378;

let fieldValue379 = browser.currentScene.createNode("fieldValue");
fieldValue379.name = "center";
fieldValue379.value = "-0.217 0.811 -0.0338";
ProtoInstance377.fieldValue[1] = fieldValue379;

let fieldValue380 = browser.currentScene.createNode("fieldValue");
fieldValue380.name = "children";
let ProtoInstance381 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance381.name = "Segment";
ProtoInstance381.DEF = "hanim_r_hand";
let fieldValue382 = browser.currentScene.createNode("fieldValue");
fieldValue382.name = "name";
fieldValue382.value = "r_hand";
ProtoInstance381.fieldValue = new MFNode();

ProtoInstance381.fieldValue[0] = fieldValue382;

let fieldValue383 = browser.currentScene.createNode("fieldValue");
fieldValue383.name = "children";
let Transform384 = browser.currentScene.createNode("Transform");
Transform384.DEF = "r_hand_adjust";
Transform384.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform384.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
let Shape385 = browser.currentScene.createNode("Shape");
let Appearance386 = browser.currentScene.createNode("Appearance");
let Material387 = browser.currentScene.createNode("Material");
Material387.USE = "Skin_Color";
Appearance386.material = Material387;

Shape385.appearance = Appearance386;

let IndexedFaceSet388 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet388.coordIndex = new MFInt32(new int[10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
IndexedFaceSet388.creaseAngle = 1.57;
let Coordinate389 = browser.currentScene.createNode("Coordinate");
Coordinate389.point = new MFVec3f(new float[-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
IndexedFaceSet388.coord = Coordinate389;

Shape385.geometry = IndexedFaceSet388;

Transform384.children = new MFNode();

Transform384.children[0] = Shape385;

fieldValue383.children = new MFNode();

fieldValue383.children[0] = Transform384;

ProtoInstance381.fieldValue[1] = fieldValue383;

fieldValue380.children = new MFNode();

fieldValue380.children[0] = ProtoInstance381;

ProtoInstance377.fieldValue[2] = fieldValue380;

fieldValue367.children[1] = ProtoInstance377;

ProtoInstance364.fieldValue[2] = fieldValue367;

fieldValue354.children[1] = ProtoInstance364;

ProtoInstance351.fieldValue[2] = fieldValue354;

fieldValue196.children[2] = ProtoInstance351;

let ProtoInstance390 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance390.name = "Joint";
ProtoInstance390.DEF = "hanim_vc4";
let fieldValue391 = browser.currentScene.createNode("fieldValue");
fieldValue391.name = "name";
fieldValue391.value = "vc4";
ProtoInstance390.fieldValue = new MFNode();

ProtoInstance390.fieldValue[0] = fieldValue391;

let fieldValue392 = browser.currentScene.createNode("fieldValue");
fieldValue392.name = "center";
fieldValue392.value = "0 1.43 -0.0458";
ProtoInstance390.fieldValue[1] = fieldValue392;

let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "children";
let ProtoInstance394 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance394.name = "Segment";
ProtoInstance394.DEF = "hanim_c4";
let fieldValue395 = browser.currentScene.createNode("fieldValue");
fieldValue395.name = "name";
fieldValue395.value = "c4";
ProtoInstance394.fieldValue = new MFNode();

ProtoInstance394.fieldValue[0] = fieldValue395;

let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "children";
let Shape397 = browser.currentScene.createNode("Shape");
let Appearance398 = browser.currentScene.createNode("Appearance");
let Material399 = browser.currentScene.createNode("Material");
Material399.USE = "WetShirtColor";
Appearance398.material = Material399;

Shape397.appearance = Appearance398;

let IndexedFaceSet400 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet400.DEF = "neck";
IndexedFaceSet400.coordIndex = new MFInt32(new int[6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
IndexedFaceSet400.creaseAngle = 1.91;
let Coordinate401 = browser.currentScene.createNode("Coordinate");
Coordinate401.point = new MFVec3f(new float[0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
IndexedFaceSet400.coord = Coordinate401;

Shape397.geometry = IndexedFaceSet400;

fieldValue396.children = new MFNode();

fieldValue396.children[0] = Shape397;

ProtoInstance394.fieldValue[1] = fieldValue396;

fieldValue393.children = new MFNode();

fieldValue393.children[0] = ProtoInstance394;

let ProtoInstance402 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance402.name = "Joint";
ProtoInstance402.DEF = "hanim_skullbase";
let fieldValue403 = browser.currentScene.createNode("fieldValue");
fieldValue403.name = "name";
fieldValue403.value = "skullbase";
ProtoInstance402.fieldValue = new MFNode();

ProtoInstance402.fieldValue[0] = fieldValue403;

let fieldValue404 = browser.currentScene.createNode("fieldValue");
fieldValue404.name = "center";
fieldValue404.value = "0 1.54 -0.0409";
ProtoInstance402.fieldValue[1] = fieldValue404;

let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "children";
let ProtoInstance406 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance406.name = "Segment";
ProtoInstance406.DEF = "hanim_skull";
let fieldValue407 = browser.currentScene.createNode("fieldValue");
fieldValue407.name = "name";
fieldValue407.value = "skull";
ProtoInstance406.fieldValue = new MFNode();

ProtoInstance406.fieldValue[0] = fieldValue407;

let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "children";
let Shape409 = browser.currentScene.createNode("Shape");
let Appearance410 = browser.currentScene.createNode("Appearance");
let Material411 = browser.currentScene.createNode("Material");
Material411.USE = "Skin_Color";
Appearance410.material = Material411;

Shape409.appearance = Appearance410;

let IndexedFaceSet412 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet412.DEF = "headIFS";
IndexedFaceSet412.colorIndex = new MFInt32(new int[1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1]);
IndexedFaceSet412.coordIndex = new MFInt32(new int[48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
IndexedFaceSet412.creaseAngle = 0.7854;
let Coordinate413 = browser.currentScene.createNode("Coordinate");
Coordinate413.DEF = "Face";
Coordinate413.point = new MFVec3f(new float[0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
IndexedFaceSet412.coord = Coordinate413;

let Color414 = browser.currentScene.createNode("Color");
Color414.color = new MFColor(new float[0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902,0,0,0.502]);
IndexedFaceSet412.color = Color414;

Shape409.geometry = IndexedFaceSet412;

fieldValue408.children = new MFNode();

fieldValue408.children[0] = Shape409;

let Transform415 = browser.currentScene.createNode("Transform");
Transform415.DEF = "maskAndSnorkel";
Transform415.translation = new SFVec3f(new float[0,1.505,0.05]);
let Transform416 = browser.currentScene.createNode("Transform");
let Shape417 = browser.currentScene.createNode("Shape");
Shape417.DEF = "maskFrame";
let Appearance418 = browser.currentScene.createNode("Appearance");
let Material419 = browser.currentScene.createNode("Material");
Material419.DEF = "frameColor";
Material419.diffuseColor = new SFColor(new float[0,0,0]);
Appearance418.material = Material419;

Shape417.appearance = Appearance418;

let IndexedFaceSet420 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet420.coordIndex = new MFInt32(new int[0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
IndexedFaceSet420.creaseAngle = 1.45;
IndexedFaceSet420.solid = False;
let Coordinate421 = browser.currentScene.createNode("Coordinate");
Coordinate421.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet420.coord = Coordinate421;

Shape417.geometry = IndexedFaceSet420;

Transform416.children = new MFNode();

Transform416.children[0] = Shape417;

Transform415.children = new MFNode();

Transform415.children[0] = Transform416;

let Transform422 = browser.currentScene.createNode("Transform");
Transform422.DEF = "snorkelHoldRing";
Transform422.translation = new SFVec3f(new float[0.075,0.075,-0.02]);
let Shape423 = browser.currentScene.createNode("Shape");
let Appearance424 = browser.currentScene.createNode("Appearance");
let Material425 = browser.currentScene.createNode("Material");
Material425.USE = "frameColor";
Appearance424.material = Material425;

Shape423.appearance = Appearance424;

let Cylinder426 = browser.currentScene.createNode("Cylinder");
Cylinder426.height = 0.003;
Cylinder426.radius = 0.015;
Shape423.geometry = Cylinder426;

Transform422.children = new MFNode();

Transform422.children[0] = Shape423;

Transform415.children[1] = Transform422;

let Group427 = browser.currentScene.createNode("Group");
Group427.DEF = "snorkel";
let Transform428 = browser.currentScene.createNode("Transform");
Transform428.translation = new SFVec3f(new float[0,-0.02,0]);
let Transform429 = browser.currentScene.createNode("Transform");
Transform429.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform429.translation = new SFVec3f(new float[0.035,-0.07,-0.02]);
let Shape430 = browser.currentScene.createNode("Shape");
let Appearance431 = browser.currentScene.createNode("Appearance");
let Material432 = browser.currentScene.createNode("Material");
Material432.DEF = "snorkelTube";
Material432.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material432.transparency = 0.4;
Appearance431.material = Material432;

Shape430.appearance = Appearance431;

let Extrusion433 = browser.currentScene.createNode("Extrusion");
Extrusion433.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion433.spine = new MFVec3f(new float[-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03]);
Shape430.geometry = Extrusion433;

Transform429.children = new MFNode();

Transform429.children[0] = Shape430;

Transform428.children = new MFNode();

Transform428.children[0] = Transform429;

let Transform434 = browser.currentScene.createNode("Transform");
Transform434.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform434.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform434.translation = new SFVec3f(new float[0.01,-0.04,-0.02]);
let Shape435 = browser.currentScene.createNode("Shape");
let Appearance436 = browser.currentScene.createNode("Appearance");
let Material437 = browser.currentScene.createNode("Material");
Material437.DEF = "Mouthpiece";
Material437.diffuseColor = new SFColor(new float[0.678,1,0.8]);
Material437.transparency = 0.4;
Appearance436.material = Material437;

Shape435.appearance = Appearance436;

let Extrusion438 = browser.currentScene.createNode("Extrusion");
Extrusion438.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion438.spine = new MFVec3f(new float[-0.01,-0.03,0,0,0,0,0.02,0.01,0]);
Shape435.geometry = Extrusion438;

Transform434.children = new MFNode();

Transform434.children[0] = Shape435;

Transform428.children[1] = Transform434;

let Transform439 = browser.currentScene.createNode("Transform");
Transform439.rotation = new SFRotation(new float[0,0,1,-0.85]);
Transform439.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform439.translation = new SFVec3f(new float[0.005,-0.01,-0.02]);
let Shape440 = browser.currentScene.createNode("Shape");
let Appearance441 = browser.currentScene.createNode("Appearance");
let Material442 = browser.currentScene.createNode("Material");
Material442.USE = "Mouthpiece";
Appearance441.material = Material442;

Shape440.appearance = Appearance441;

let Extrusion443 = browser.currentScene.createNode("Extrusion");
Extrusion443.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion443.spine = new MFVec3f(new float[-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0]);
Shape440.geometry = Extrusion443;

Transform439.children = new MFNode();

Transform439.children[0] = Shape440;

Transform428.children[2] = Transform439;

Group427.children = new MFNode();

Group427.children[0] = Transform428;

Transform415.children[2] = Group427;

let Transform444 = browser.currentScene.createNode("Transform");
let Shape445 = browser.currentScene.createNode("Shape");
Shape445.DEF = "maskLensR";
let Appearance446 = browser.currentScene.createNode("Appearance");
let Material447 = browser.currentScene.createNode("Material");
Material447.DEF = "plastic";
Material447.diffuseColor = new SFColor(new float[0.941,0.973,1]);
Material447.transparency = 0.8;
Appearance446.material = Material447;

Shape445.appearance = Appearance446;

let IndexedFaceSet448 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet448.coordIndex = new MFInt32(new int[12,1314,15,16,17,18,12,-1]);
IndexedFaceSet448.creaseAngle = 1.45;
IndexedFaceSet448.solid = False;
let Coordinate449 = browser.currentScene.createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet448.coord = Coordinate449;

Shape445.geometry = IndexedFaceSet448;

Transform444.children = new MFNode();

Transform444.children[0] = Shape445;

Transform415.children[3] = Transform444;

let Transform450 = browser.currentScene.createNode("Transform");
let Shape451 = browser.currentScene.createNode("Shape");
Shape451.DEF = "maskLensL";
let Appearance452 = browser.currentScene.createNode("Appearance");
let Material453 = browser.currentScene.createNode("Material");
Material453.USE = "plastic";
Appearance452.material = Material453;

Shape451.appearance = Appearance452;

let IndexedFaceSet454 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet454.coordIndex = new MFInt32(new int[19,20,21,22,23,24,25,19,-1]);
IndexedFaceSet454.creaseAngle = 1.45;
IndexedFaceSet454.solid = False;
let Coordinate455 = browser.currentScene.createNode("Coordinate");
Coordinate455.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
IndexedFaceSet454.coord = Coordinate455;

Shape451.geometry = IndexedFaceSet454;

Transform450.children = new MFNode();

Transform450.children[0] = Shape451;

Transform415.children[4] = Transform450;

let Transform456 = browser.currentScene.createNode("Transform");
let Shape457 = browser.currentScene.createNode("Shape");
Shape457.DEF = "nose";
let Appearance458 = browser.currentScene.createNode("Appearance");
let Material459 = browser.currentScene.createNode("Material");
Material459.DEF = "plasticFit";
Material459.diffuseColor = new SFColor(new float[0.678,1,0.184]);
Material459.transparency = 0.7;
Appearance458.material = Material459;

Shape457.appearance = Appearance458;

let IndexedFaceSet460 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet460.coordIndex = new MFInt32(new int[0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
IndexedFaceSet460.creaseAngle = 1.45;
IndexedFaceSet460.solid = False;
let Coordinate461 = browser.currentScene.createNode("Coordinate");
Coordinate461.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet460.coord = Coordinate461;

Shape457.geometry = IndexedFaceSet460;

Transform456.children = new MFNode();

Transform456.children[0] = Shape457;

Transform415.children[5] = Transform456;

let Transform462 = browser.currentScene.createNode("Transform");
let Shape463 = browser.currentScene.createNode("Shape");
Shape463.DEF = "faceFit";
let Appearance464 = browser.currentScene.createNode("Appearance");
let Material465 = browser.currentScene.createNode("Material");
Material465.USE = "plasticFit";
Appearance464.material = Material465;

Shape463.appearance = Appearance464;

let IndexedFaceSet466 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet466.coordIndex = new MFInt32(new int[1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
IndexedFaceSet466.creaseAngle = 1.45;
IndexedFaceSet466.solid = False;
let Coordinate467 = browser.currentScene.createNode("Coordinate");
Coordinate467.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
IndexedFaceSet466.coord = Coordinate467;

Shape463.geometry = IndexedFaceSet466;

Transform462.children = new MFNode();

Transform462.children[0] = Shape463;

Transform415.children[6] = Transform462;

let Transform468 = browser.currentScene.createNode("Transform");
let Shape469 = browser.currentScene.createNode("Shape");
Shape469.DEF = "belt";
let Appearance470 = browser.currentScene.createNode("Appearance");
let Material471 = browser.currentScene.createNode("Material");
Material471.USE = "plastic";
Appearance470.material = Material471;

Shape469.appearance = Appearance470;

let IndexedFaceSet472 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet472.coordIndex = new MFInt32(new int[3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
IndexedFaceSet472.creaseAngle = 1.45;
IndexedFaceSet472.solid = False;
let Coordinate473 = browser.currentScene.createNode("Coordinate");
Coordinate473.point = new MFVec3f(new float[0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175]);
IndexedFaceSet472.coord = Coordinate473;

Shape469.geometry = IndexedFaceSet472;

Transform468.children = new MFNode();

Transform468.children[0] = Shape469;

Transform415.children[7] = Transform468;

fieldValue408.children[1] = Transform415;

let Transform474 = browser.currentScene.createNode("Transform");
Transform474.DEF = "mouthpiece";
Transform474.rotation = new SFRotation(new float[0.86,-0.58,-0.58,2.09]);
Transform474.translation = new SFVec3f(new float[0,1.508,0.05]);
let Transform475 = browser.currentScene.createNode("Transform");
Transform475.translation = new SFVec3f(new float[0,0.0018,0]);
let Shape476 = browser.currentScene.createNode("Shape");
let Appearance477 = browser.currentScene.createNode("Appearance");
let Material478 = browser.currentScene.createNode("Material");
Material478.DEF = "gray";
Material478.ambientIntensity = 0.3;
Material478.diffuseColor = new SFColor(new float[0.9,0.9,0.89]);
Material478.shininess = 0.1;
Material478.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance477.material = Material478;

Shape476.appearance = Appearance477;

let Cylinder479 = browser.currentScene.createNode("Cylinder");
Cylinder479.height = 0.006;
Cylinder479.radius = 0.015;
Shape476.geometry = Cylinder479;

Transform475.children = new MFNode();

Transform475.children[0] = Shape476;

Transform474.children = new MFNode();

Transform474.children[0] = Transform475;

let Transform480 = browser.currentScene.createNode("Transform");
let Shape481 = browser.currentScene.createNode("Shape");
let Appearance482 = browser.currentScene.createNode("Appearance");
let Material483 = browser.currentScene.createNode("Material");
Material483.DEF = "black";
Material483.diffuseColor = new SFColor(new float[0,0,0]);
Appearance482.material = Material483;

Shape481.appearance = Appearance482;

let Cone484 = browser.currentScene.createNode("Cone");
Cone484.bottomRadius = 0.03;
Cone484.height = 0.01;
Shape481.geometry = Cone484;

Transform480.children = new MFNode();

Transform480.children[0] = Shape481;

Transform474.children[1] = Transform480;

let Transform485 = browser.currentScene.createNode("Transform");
Transform485.translation = new SFVec3f(new float[0,-0.015,0]);
let Shape486 = browser.currentScene.createNode("Shape");
let Appearance487 = browser.currentScene.createNode("Appearance");
let Material488 = browser.currentScene.createNode("Material");
Material488.USE = "black";
Appearance487.material = Material488;

Shape486.appearance = Appearance487;

let Cylinder489 = browser.currentScene.createNode("Cylinder");
Cylinder489.height = 0.02;
Cylinder489.radius = 0.03;
Shape486.geometry = Cylinder489;

Transform485.children = new MFNode();

Transform485.children[0] = Shape486;

Transform474.children[2] = Transform485;

let Transform490 = browser.currentScene.createNode("Transform");
Transform490.translation = new SFVec3f(new float[0,-0.025,0]);
let Shape491 = browser.currentScene.createNode("Shape");
let Appearance492 = browser.currentScene.createNode("Appearance");
let Material493 = browser.currentScene.createNode("Material");
Material493.USE = "black";
Appearance492.material = Material493;

Shape491.appearance = Appearance492;

let Cylinder494 = browser.currentScene.createNode("Cylinder");
Cylinder494.height = 0.02;
Cylinder494.radius = 0.015;
Shape491.geometry = Cylinder494;

Transform490.children = new MFNode();

Transform490.children[0] = Shape491;

Transform474.children[3] = Transform490;

let Transform495 = browser.currentScene.createNode("Transform");
Transform495.rotation = new SFRotation(new float[0,0,1,0.9]);
Transform495.translation = new SFVec3f(new float[0,-0.04,0]);
let Shape496 = browser.currentScene.createNode("Shape");
Shape496.DEF = "mouthpiecePlastic";
let Appearance497 = browser.currentScene.createNode("Appearance");
let Material498 = browser.currentScene.createNode("Material");
Material498.diffuseColor = new SFColor(new float[1,1,1]);
Material498.emissiveColor = new SFColor(new float[1,1,1]);
Appearance497.material = Material498;

Shape496.appearance = Appearance497;

let Box499 = browser.currentScene.createNode("Box");
Box499.size = new SFVec3f(new float[0.002,0.03,0.018]);
Shape496.geometry = Box499;

Transform495.children = new MFNode();

Transform495.children[0] = Shape496;

Transform474.children[4] = Transform495;

let Transform500 = browser.currentScene.createNode("Transform");
Transform500.rotation = new SFRotation(new float[0,0,1,-0.9]);
Transform500.translation = new SFVec3f(new float[0,-0.04,0]);
let Shape501 = browser.currentScene.createNode("Shape");
Shape501.USE = "mouthpiecePlastic";
Transform500.children = new MFNode();

Transform500.children[0] = Shape501;

Transform474.children[5] = Transform500;

let Transform502 = browser.currentScene.createNode("Transform");
Transform502.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform502.translation = new SFVec3f(new float[0,-0.015,0.03]);
let Shape503 = browser.currentScene.createNode("Shape");
let Appearance504 = browser.currentScene.createNode("Appearance");
let Material505 = browser.currentScene.createNode("Material");
Material505.USE = "gray";
Appearance504.material = Material505;

Shape503.appearance = Appearance504;

let Cylinder506 = browser.currentScene.createNode("Cylinder");
Cylinder506.height = 0.02;
Cylinder506.radius = 0.0075;
Shape503.geometry = Cylinder506;

Transform502.children = new MFNode();

Transform502.children[0] = Shape503;

Transform474.children[6] = Transform502;

//x = 0, y = 50, z = -270
let Transform507 = browser.currentScene.createNode("Transform");
Transform507.DEF = "airTube";
Transform507.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform507.scale = new SFVec3f(new float[0.7,0.7,0.7]);
Transform507.translation = new SFVec3f(new float[0,-0.02,0.055]);
let Transform508 = browser.currentScene.createNode("Transform");
Transform508.rotation = new SFRotation(new float[-0.21,0.21,-0.95,4.67]);
let Shape509 = browser.currentScene.createNode("Shape");
let Appearance510 = browser.currentScene.createNode("Appearance");
let Material511 = browser.currentScene.createNode("Material");
Material511.diffuseColor = new SFColor(new float[0,0,0]);
Appearance510.material = Material511;

Shape509.appearance = Appearance510;

let Extrusion512 = browser.currentScene.createNode("Extrusion");
Extrusion512.crossSection = new MFVec2f(new float[0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion512.spine = new MFVec3f(new float[0.005,-0.03,0,-0.01,0.02,0,-0.03,0.08,0,-0.05,0.14,0,-0.08,0.19,0,-0.1,0.22,0,-0.12,0.25,0,-0.15,0.27,0,-0.18,0.28,0,-0.21,0.29,0,-0.26,0.28,0,-0.28,0.26,0,-0.305,0.23,0,-0.32,0.2,0,-0.34,0.16,0,-0.35,0.12,0,-0.37,0.04,0,-0.385,0,0,-0.39,-0.07,0]);
Shape509.geometry = Extrusion512;

Transform508.children = new MFNode();

Transform508.children[0] = Shape509;

Transform507.children = new MFNode();

Transform507.children[0] = Transform508;

Transform474.children[7] = Transform507;

fieldValue408.children[2] = Transform474;

let Transform513 = browser.currentScene.createNode("Transform");
Transform513.DEF = "Bubbles";
Transform513.scale = new SFVec3f(new float[0.35,0.35,0.35]);
Transform513.translation = new SFVec3f(new float[0,1.508,0.05]);
let Group514 = browser.currentScene.createNode("Group");
Group514.DEF = "Bubble";
let TimeSensor515 = browser.currentScene.createNode("TimeSensor");
TimeSensor515.DEF = "BubbleClock";
TimeSensor515.cycleInterval = 6;
TimeSensor515.loop = True;
Group514.children = new MFNode();

Group514.children[0] = TimeSensor515;

let PositionInterpolator516 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator516.DEF = "BubblePath1";
PositionInterpolator516.key = new MFFloat(new float[0,0.5,0.8,0.9,1]);
PositionInterpolator516.keyValue = new MFVec3f(new float[0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509]);
Group514.children[1] = PositionInterpolator516;

let PositionInterpolator517 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator517.DEF = "BubblePath2";
PositionInterpolator517.key = new MFFloat(new float[0,0.3,0.64,0.85,1]);
PositionInterpolator517.keyValue = new MFVec3f(new float[0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373]);
Group514.children[2] = PositionInterpolator517;

let PositionInterpolator518 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator518.DEF = "BubblePath3";
PositionInterpolator518.key = new MFFloat(new float[0,0.1,0.45,0.7,1]);
PositionInterpolator518.keyValue = new MFVec3f(new float[0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734]);
Group514.children[3] = PositionInterpolator518;

let PositionInterpolator519 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator519.DEF = "BubblePath4";
PositionInterpolator519.key = new MFFloat(new float[0,0.5,0.6,0.8,1]);
PositionInterpolator519.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349]);
Group514.children[4] = PositionInterpolator519;

let PositionInterpolator520 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator520.DEF = "BubblePath5";
PositionInterpolator520.key = new MFFloat(new float[0,0.25,0.35,0.65,1]);
PositionInterpolator520.keyValue = new MFVec3f(new float[0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1]);
Group514.children[5] = PositionInterpolator520;

let PositionInterpolator521 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator521.DEF = "BubblePath6";
PositionInterpolator521.key = new MFFloat(new float[0,0.15,0.22235,0.55565,1]);
PositionInterpolator521.keyValue = new MFVec3f(new float[0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14]);
Group514.children[6] = PositionInterpolator521;

let PositionInterpolator522 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator522.DEF = "BubblePath7";
PositionInterpolator522.key = new MFFloat(new float[0,0.2425,0.4535,0.6775,1]);
PositionInterpolator522.keyValue = new MFVec3f(new float[0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12]);
Group514.children[7] = PositionInterpolator522;

let PositionInterpolator523 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator523.DEF = "BubblePath8";
PositionInterpolator523.key = new MFFloat(new float[0,0.1125,0.5535,0.97865,1]);
PositionInterpolator523.keyValue = new MFVec3f(new float[0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86]);
Group514.children[8] = PositionInterpolator523;

let PositionInterpolator524 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator524.DEF = "BubblePath9";
PositionInterpolator524.key = new MFFloat(new float[0,0.0025,0.035,0.65,1]);
PositionInterpolator524.keyValue = new MFVec3f(new float[0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545]);
Group514.children[9] = PositionInterpolator524;

let PositionInterpolator525 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator525.DEF = "BubblePath10";
PositionInterpolator525.key = new MFFloat(new float[0,0.00025,0.035,0.6895,1]);
PositionInterpolator525.keyValue = new MFVec3f(new float[0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1]);
Group514.children[10] = PositionInterpolator525;

let Transform526 = browser.currentScene.createNode("Transform");
let Transform527 = browser.currentScene.createNode("Transform");
Transform527.DEF = "bubble1";
let Shape528 = browser.currentScene.createNode("Shape");
let Appearance529 = browser.currentScene.createNode("Appearance");
Appearance529.DEF = "BubbleAppearance";
let Material530 = browser.currentScene.createNode("Material");
Material530.diffuseColor = new SFColor(new float[1,1,1]);
Material530.transparency = 0.8;
Appearance529.material = Material530;

Shape528.appearance = Appearance529;

let Sphere531 = browser.currentScene.createNode("Sphere");
Sphere531.radius = 0.025;
Shape528.geometry = Sphere531;

Transform527.children = new MFNode();

Transform527.children[0] = Shape528;

Transform526.children = new MFNode();

Transform526.children[0] = Transform527;

let Transform532 = browser.currentScene.createNode("Transform");
Transform532.DEF = "bubble2";
let Shape533 = browser.currentScene.createNode("Shape");
let Appearance534 = browser.currentScene.createNode("Appearance");
Appearance534.USE = "BubbleAppearance";
Shape533.appearance = Appearance534;

let Sphere535 = browser.currentScene.createNode("Sphere");
Sphere535.radius = 0.055;
Shape533.geometry = Sphere535;

Transform532.children = new MFNode();

Transform532.children[0] = Shape533;

Transform526.children[1] = Transform532;

let Transform536 = browser.currentScene.createNode("Transform");
Transform536.DEF = "bubble3";
let Shape537 = browser.currentScene.createNode("Shape");
let Appearance538 = browser.currentScene.createNode("Appearance");
Appearance538.USE = "BubbleAppearance";
Shape537.appearance = Appearance538;

let Sphere539 = browser.currentScene.createNode("Sphere");
Sphere539.radius = 0.065;
Shape537.geometry = Sphere539;

Transform536.children = new MFNode();

Transform536.children[0] = Shape537;

Transform526.children[2] = Transform536;

let Transform540 = browser.currentScene.createNode("Transform");
Transform540.DEF = "bubble4";
let Shape541 = browser.currentScene.createNode("Shape");
let Appearance542 = browser.currentScene.createNode("Appearance");
Appearance542.USE = "BubbleAppearance";
Shape541.appearance = Appearance542;

let Sphere543 = browser.currentScene.createNode("Sphere");
Sphere543.radius = 0.015;
Shape541.geometry = Sphere543;

Transform540.children = new MFNode();

Transform540.children[0] = Shape541;

Transform526.children[3] = Transform540;

let Transform544 = browser.currentScene.createNode("Transform");
Transform544.DEF = "bubble5";
let Shape545 = browser.currentScene.createNode("Shape");
let Appearance546 = browser.currentScene.createNode("Appearance");
Appearance546.USE = "BubbleAppearance";
Shape545.appearance = Appearance546;

let Sphere547 = browser.currentScene.createNode("Sphere");
Sphere547.radius = 0.075;
Shape545.geometry = Sphere547;

Transform544.children = new MFNode();

Transform544.children[0] = Shape545;

Transform526.children[4] = Transform544;

let Transform548 = browser.currentScene.createNode("Transform");
Transform548.DEF = "bubble6";
let Shape549 = browser.currentScene.createNode("Shape");
let Appearance550 = browser.currentScene.createNode("Appearance");
Appearance550.USE = "BubbleAppearance";
Shape549.appearance = Appearance550;

let Sphere551 = browser.currentScene.createNode("Sphere");
Sphere551.radius = 0.005;
Shape549.geometry = Sphere551;

Transform548.children = new MFNode();

Transform548.children[0] = Shape549;

Transform526.children[5] = Transform548;

let Transform552 = browser.currentScene.createNode("Transform");
Transform552.DEF = "bubble7";
let Shape553 = browser.currentScene.createNode("Shape");
let Appearance554 = browser.currentScene.createNode("Appearance");
Appearance554.USE = "BubbleAppearance";
Shape553.appearance = Appearance554;

let Sphere555 = browser.currentScene.createNode("Sphere");
Sphere555.radius = 0.035;
Shape553.geometry = Sphere555;

Transform552.children = new MFNode();

Transform552.children[0] = Shape553;

Transform526.children[6] = Transform552;

let Transform556 = browser.currentScene.createNode("Transform");
Transform556.DEF = "bubble8";
let Shape557 = browser.currentScene.createNode("Shape");
let Appearance558 = browser.currentScene.createNode("Appearance");
Appearance558.USE = "BubbleAppearance";
Shape557.appearance = Appearance558;

let Sphere559 = browser.currentScene.createNode("Sphere");
Sphere559.radius = 0.05;
Shape557.geometry = Sphere559;

Transform556.children = new MFNode();

Transform556.children[0] = Shape557;

Transform526.children[7] = Transform556;

let Transform560 = browser.currentScene.createNode("Transform");
Transform560.DEF = "bubble9";
let Shape561 = browser.currentScene.createNode("Shape");
let Appearance562 = browser.currentScene.createNode("Appearance");
Appearance562.USE = "BubbleAppearance";
Shape561.appearance = Appearance562;

let Sphere563 = browser.currentScene.createNode("Sphere");
Sphere563.radius = 0.045;
Shape561.geometry = Sphere563;

Transform560.children = new MFNode();

Transform560.children[0] = Shape561;

Transform526.children[8] = Transform560;

let Transform564 = browser.currentScene.createNode("Transform");
Transform564.DEF = "bubble10";
let Shape565 = browser.currentScene.createNode("Shape");
let Appearance566 = browser.currentScene.createNode("Appearance");
Appearance566.USE = "BubbleAppearance";
Shape565.appearance = Appearance566;

let Sphere567 = browser.currentScene.createNode("Sphere");
Sphere567.radius = 0.035;
Shape565.geometry = Sphere567;

Transform564.children = new MFNode();

Transform564.children[0] = Shape565;

Transform526.children[9] = Transform564;

let ROUTE568 = browser.currentScene.createNode("ROUTE");
ROUTE568.fromField = "fraction_changed";
ROUTE568.fromNode = "BubbleClock";
ROUTE568.toField = "set_fraction";
ROUTE568.toNode = "BubblePath1";
Transform526.children[10] = ROUTE568;

let ROUTE569 = browser.currentScene.createNode("ROUTE");
ROUTE569.fromField = "fraction_changed";
ROUTE569.fromNode = "BubbleClock";
ROUTE569.toField = "set_fraction";
ROUTE569.toNode = "BubblePath2";
Transform526.children[11] = ROUTE569;

let ROUTE570 = browser.currentScene.createNode("ROUTE");
ROUTE570.fromField = "fraction_changed";
ROUTE570.fromNode = "BubbleClock";
ROUTE570.toField = "set_fraction";
ROUTE570.toNode = "BubblePath3";
Transform526.children[12] = ROUTE570;

let ROUTE571 = browser.currentScene.createNode("ROUTE");
ROUTE571.fromField = "fraction_changed";
ROUTE571.fromNode = "BubbleClock";
ROUTE571.toField = "set_fraction";
ROUTE571.toNode = "BubblePath4";
Transform526.children[13] = ROUTE571;

let ROUTE572 = browser.currentScene.createNode("ROUTE");
ROUTE572.fromField = "fraction_changed";
ROUTE572.fromNode = "BubbleClock";
ROUTE572.toField = "set_fraction";
ROUTE572.toNode = "BubblePath5";
Transform526.children[14] = ROUTE572;

let ROUTE573 = browser.currentScene.createNode("ROUTE");
ROUTE573.fromField = "fraction_changed";
ROUTE573.fromNode = "BubbleClock";
ROUTE573.toField = "set_fraction";
ROUTE573.toNode = "BubblePath6";
Transform526.children[15] = ROUTE573;

let ROUTE574 = browser.currentScene.createNode("ROUTE");
ROUTE574.fromField = "fraction_changed";
ROUTE574.fromNode = "BubbleClock";
ROUTE574.toField = "set_fraction";
ROUTE574.toNode = "BubblePath7";
Transform526.children[16] = ROUTE574;

let ROUTE575 = browser.currentScene.createNode("ROUTE");
ROUTE575.fromField = "fraction_changed";
ROUTE575.fromNode = "BubbleClock";
ROUTE575.toField = "set_fraction";
ROUTE575.toNode = "BubblePath8";
Transform526.children[17] = ROUTE575;

let ROUTE576 = browser.currentScene.createNode("ROUTE");
ROUTE576.fromField = "fraction_changed";
ROUTE576.fromNode = "BubbleClock";
ROUTE576.toField = "set_fraction";
ROUTE576.toNode = "BubblePath9";
Transform526.children[18] = ROUTE576;

let ROUTE577 = browser.currentScene.createNode("ROUTE");
ROUTE577.fromField = "fraction_changed";
ROUTE577.fromNode = "BubbleClock";
ROUTE577.toField = "set_fraction";
ROUTE577.toNode = "BubblePath10";
Transform526.children[19] = ROUTE577;

let ROUTE578 = browser.currentScene.createNode("ROUTE");
ROUTE578.fromField = "value_changed";
ROUTE578.fromNode = "BubblePath1";
ROUTE578.toField = "set_translation";
ROUTE578.toNode = "bubble1";
Transform526.children[20] = ROUTE578;

let ROUTE579 = browser.currentScene.createNode("ROUTE");
ROUTE579.fromField = "value_changed";
ROUTE579.fromNode = "BubblePath2";
ROUTE579.toField = "set_translation";
ROUTE579.toNode = "bubble2";
Transform526.children[21] = ROUTE579;

let ROUTE580 = browser.currentScene.createNode("ROUTE");
ROUTE580.fromField = "value_changed";
ROUTE580.fromNode = "BubblePath3";
ROUTE580.toField = "set_translation";
ROUTE580.toNode = "bubble3";
Transform526.children[22] = ROUTE580;

let ROUTE581 = browser.currentScene.createNode("ROUTE");
ROUTE581.fromField = "value_changed";
ROUTE581.fromNode = "BubblePath4";
ROUTE581.toField = "set_translation";
ROUTE581.toNode = "bubble4";
Transform526.children[23] = ROUTE581;

let ROUTE582 = browser.currentScene.createNode("ROUTE");
ROUTE582.fromField = "value_changed";
ROUTE582.fromNode = "BubblePath5";
ROUTE582.toField = "set_translation";
ROUTE582.toNode = "bubble5";
Transform526.children[24] = ROUTE582;

let ROUTE583 = browser.currentScene.createNode("ROUTE");
ROUTE583.fromField = "value_changed";
ROUTE583.fromNode = "BubblePath6";
ROUTE583.toField = "set_translation";
ROUTE583.toNode = "bubble6";
Transform526.children[25] = ROUTE583;

let ROUTE584 = browser.currentScene.createNode("ROUTE");
ROUTE584.fromField = "value_changed";
ROUTE584.fromNode = "BubblePath7";
ROUTE584.toField = "set_translation";
ROUTE584.toNode = "bubble7";
Transform526.children[26] = ROUTE584;

let ROUTE585 = browser.currentScene.createNode("ROUTE");
ROUTE585.fromField = "value_changed";
ROUTE585.fromNode = "BubblePath8";
ROUTE585.toField = "set_translation";
ROUTE585.toNode = "bubble8";
Transform526.children[27] = ROUTE585;

let ROUTE586 = browser.currentScene.createNode("ROUTE");
ROUTE586.fromField = "value_changed";
ROUTE586.fromNode = "BubblePath9";
ROUTE586.toField = "set_translation";
ROUTE586.toNode = "bubble9";
Transform526.children[28] = ROUTE586;

let ROUTE587 = browser.currentScene.createNode("ROUTE");
ROUTE587.fromField = "value_changed";
ROUTE587.fromNode = "BubblePath10";
ROUTE587.toField = "set_translation";
ROUTE587.toNode = "bubble10";
Transform526.children[29] = ROUTE587;

Group514.children[11] = Transform526;

Transform513.children = new MFNode();

Transform513.children[0] = Group514;

fieldValue408.children[3] = Transform513;

ProtoInstance406.fieldValue[1] = fieldValue408;

fieldValue405.children = new MFNode();

fieldValue405.children[0] = ProtoInstance406;

ProtoInstance402.fieldValue[2] = fieldValue405;

fieldValue393.children[1] = ProtoInstance402;

ProtoInstance390.fieldValue[2] = fieldValue393;

fieldValue196.children[3] = ProtoInstance390;

ProtoInstance193.fieldValue[2] = fieldValue196;

fieldValue82.children[4] = ProtoInstance193;

ProtoInstance79.fieldValue[2] = fieldValue82;

fieldValue78.children = new MFNode();

fieldValue78.children[0] = ProtoInstance79;

ProtoInstance77.fieldValue = new MFNode();

ProtoInstance77.fieldValue[0] = fieldValue78;

Transform75.children[1] = ProtoInstance77;

Transform74.children = new MFNode();

Transform74.children[0] = Transform75;

Group73.children = new MFNode();

Group73.children[0] = Transform74;

Group67.children[5] = Group73;

LOD66.children = new MFNode();

LOD66.children[0] = Group67;

browser.currentScene.children[9] = LOD66;

let Script588 = browser.currentScene.createNode("Script");
Script588.DEF = "finWarpScript";
let field589 = browser.currentScene.createNode("field");
field589.name = "set_rotationL";
field589.accessType = "inputOnly";
field589.type = "SFRotation";
Script588.field = new MFNode();

Script588.field[0] = field589;

let field590 = browser.currentScene.createNode("field");
field590.name = "set_rotationR";
field590.accessType = "inputOnly";
field590.type = "SFRotation";
Script588.field[1] = field590;

let field591 = browser.currentScene.createNode("field");
field591.name = "fin_warpL";
field591.accessType = "outputOnly";
field591.type = "SFBool";
Script588.field[2] = field591;

let field592 = browser.currentScene.createNode("field");
field592.name = "fin_warpR";
field592.accessType = "outputOnly";
field592.type = "SFBool";
Script588.field[3] = field592;


Script588.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[10] = Script588;

let Group593 = browser.currentScene.createNode("Group");
Group593.DEF = "Animations";
let Group594 = browser.currentScene.createNode("Group");
Group594.DEF = "Dive_Animation";
let OrientationInterpolator595 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator595.DEF = "r_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator595.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator595.keyValue = new MFRotation(new float[1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]);
Group594.children = new MFNode();

Group594.children[0] = OrientationInterpolator595;

let OrientationInterpolator596 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator596.DEF = "r_knee_RotationInterpolator_BasicDive";
OrientationInterpolator596.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator596.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]);
Group594.children[1] = OrientationInterpolator596;

let OrientationInterpolator597 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator597.DEF = "r_hip_RotationInterpolator_BasicDive";
OrientationInterpolator597.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator597.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group594.children[2] = OrientationInterpolator597;

let OrientationInterpolator598 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator598.DEF = "l_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator598.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator598.keyValue = new MFRotation(new float[1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]);
Group594.children[3] = OrientationInterpolator598;

let OrientationInterpolator599 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator599.DEF = "l_knee_RotationInterpolator_BasicDive";
OrientationInterpolator599.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator599.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group594.children[4] = OrientationInterpolator599;

let OrientationInterpolator600 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator600.DEF = "l_hip_RotationInterpolator_BasicDive";
OrientationInterpolator600.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator600.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group594.children[5] = OrientationInterpolator600;

let OrientationInterpolator601 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator601.DEF = "lower_body_RotationInterpolator_BasicDive";
OrientationInterpolator601.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator601.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group594.children[6] = OrientationInterpolator601;

//
let OrientationInterpolator602 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator602.DEF = "r_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator602.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator602.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group594.children[7] = OrientationInterpolator602;

let OrientationInterpolator603 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator603.DEF = "r_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator603.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator603.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group594.children[8] = OrientationInterpolator603;

let OrientationInterpolator604 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator604.DEF = "r_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator604.key = new MFFloat(new float[0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator604.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group594.children[9] = OrientationInterpolator604;

let OrientationInterpolator605 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator605.DEF = "l_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator605.key = new MFFloat(new float[0,0.32,0.64,0.88,1]);
OrientationInterpolator605.keyValue = new MFRotation(new float[0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]);
Group594.children[10] = OrientationInterpolator605;

let OrientationInterpolator606 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator606.DEF = "l_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator606.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator606.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
Group594.children[11] = OrientationInterpolator606;

let OrientationInterpolator607 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator607.DEF = "l_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator607.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator607.keyValue = new MFRotation(new float[0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]);
Group594.children[12] = OrientationInterpolator607;

//
let OrientationInterpolator608 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator608.DEF = "head_RotationInterpolator_BasicDive";
OrientationInterpolator608.key = new MFFloat(new float[0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator608.keyValue = new MFRotation(new float[-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]);
Group594.children[13] = OrientationInterpolator608;

let OrientationInterpolator609 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator609.DEF = "neck_RotationInterpolator_BasicDive";
OrientationInterpolator609.key = new MFFloat(new float[0,1]);
OrientationInterpolator609.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group594.children[14] = OrientationInterpolator609;

let OrientationInterpolator610 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator610.DEF = "upper_body_RotationInterpolator_BasicDive";
OrientationInterpolator610.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator610.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group594.children[15] = OrientationInterpolator610;

let OrientationInterpolator611 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator611.DEF = "whole_body_RotationInterpolator_BasicDive";
OrientationInterpolator611.key = new MFFloat(new float[0,1]);
OrientationInterpolator611.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group594.children[16] = OrientationInterpolator611;

let PositionInterpolator612 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator612.DEF = "whole_body_TranslationInterpolator_BasicDive";
PositionInterpolator612.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator612.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group594.children[17] = PositionInterpolator612;

let TimeSensor613 = browser.currentScene.createNode("TimeSensor");
TimeSensor613.DEF = "Dive_Time";
TimeSensor613.cycleInterval = 7;
TimeSensor613.loop = True;
TimeSensor613.startTime = -1;
Group594.children[18] = TimeSensor613;

let ProximitySensor614 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor614.DEF = "TriggerProximitySensor";
ProximitySensor614.size = new SFVec3f(new float[50,50,50]);
Group594.children[19] = ProximitySensor614;

Group593.children = new MFNode();

Group593.children[0] = Group594;

browser.currentScene.children[11] = Group593;

let ROUTE615 = browser.currentScene.createNode("ROUTE");
ROUTE615.fromField = "enterTime";
ROUTE615.fromNode = "TriggerProximitySensor";
ROUTE615.toField = "startTime";
ROUTE615.toNode = "Dive_Time";
browser.currentScene.children[12] = ROUTE615;

let ROUTE616 = browser.currentScene.createNode("ROUTE");
ROUTE616.fromField = "fraction_changed";
ROUTE616.fromNode = "Dive_Time";
ROUTE616.toField = "set_fraction";
ROUTE616.toNode = "r_ankle_RotationInterpolator_BasicDive";
browser.currentScene.children[13] = ROUTE616;

let ROUTE617 = browser.currentScene.createNode("ROUTE");
ROUTE617.fromField = "fraction_changed";
ROUTE617.fromNode = "Dive_Time";
ROUTE617.toField = "set_fraction";
ROUTE617.toNode = "r_knee_RotationInterpolator_BasicDive";
browser.currentScene.children[14] = ROUTE617;

let ROUTE618 = browser.currentScene.createNode("ROUTE");
ROUTE618.fromField = "fraction_changed";
ROUTE618.fromNode = "Dive_Time";
ROUTE618.toField = "set_fraction";
ROUTE618.toNode = "r_hip_RotationInterpolator_BasicDive";
browser.currentScene.children[15] = ROUTE618;

let ROUTE619 = browser.currentScene.createNode("ROUTE");
ROUTE619.fromField = "fraction_changed";
ROUTE619.fromNode = "Dive_Time";
ROUTE619.toField = "set_fraction";
ROUTE619.toNode = "l_ankle_RotationInterpolator_BasicDive";
browser.currentScene.children[16] = ROUTE619;

let ROUTE620 = browser.currentScene.createNode("ROUTE");
ROUTE620.fromField = "fraction_changed";
ROUTE620.fromNode = "Dive_Time";
ROUTE620.toField = "set_fraction";
ROUTE620.toNode = "l_knee_RotationInterpolator_BasicDive";
browser.currentScene.children[17] = ROUTE620;

let ROUTE621 = browser.currentScene.createNode("ROUTE");
ROUTE621.fromField = "fraction_changed";
ROUTE621.fromNode = "Dive_Time";
ROUTE621.toField = "set_fraction";
ROUTE621.toNode = "l_hip_RotationInterpolator_BasicDive";
browser.currentScene.children[18] = ROUTE621;

let ROUTE622 = browser.currentScene.createNode("ROUTE");
ROUTE622.fromField = "fraction_changed";
ROUTE622.fromNode = "Dive_Time";
ROUTE622.toField = "set_fraction";
ROUTE622.toNode = "lower_body_RotationInterpolator_BasicDive";
browser.currentScene.children[19] = ROUTE622;

let ROUTE623 = browser.currentScene.createNode("ROUTE");
ROUTE623.fromField = "fraction_changed";
ROUTE623.fromNode = "Dive_Time";
ROUTE623.toField = "set_fraction";
ROUTE623.toNode = "head_RotationInterpolator_BasicDive";
browser.currentScene.children[20] = ROUTE623;

let ROUTE624 = browser.currentScene.createNode("ROUTE");
ROUTE624.fromField = "fraction_changed";
ROUTE624.fromNode = "Dive_Time";
ROUTE624.toField = "set_fraction";
ROUTE624.toNode = "neck_RotationInterpolator_BasicDive";
browser.currentScene.children[21] = ROUTE624;

let ROUTE625 = browser.currentScene.createNode("ROUTE");
ROUTE625.fromField = "fraction_changed";
ROUTE625.fromNode = "Dive_Time";
ROUTE625.toField = "set_fraction";
ROUTE625.toNode = "upper_body_RotationInterpolator_BasicDive";
browser.currentScene.children[22] = ROUTE625;

let ROUTE626 = browser.currentScene.createNode("ROUTE");
ROUTE626.fromField = "fraction_changed";
ROUTE626.fromNode = "Dive_Time";
ROUTE626.toField = "set_fraction";
ROUTE626.toNode = "whole_body_RotationInterpolator_BasicDive";
browser.currentScene.children[23] = ROUTE626;

let ROUTE627 = browser.currentScene.createNode("ROUTE");
ROUTE627.fromField = "fraction_changed";
ROUTE627.fromNode = "Dive_Time";
ROUTE627.toField = "set_fraction";
ROUTE627.toNode = "whole_body_TranslationInterpolator_BasicDive";
browser.currentScene.children[24] = ROUTE627;

let ROUTE628 = browser.currentScene.createNode("ROUTE");
ROUTE628.fromField = "value_changed";
ROUTE628.fromNode = "r_ankle_RotationInterpolator_BasicDive";
ROUTE628.toField = "set_rotation";
ROUTE628.toNode = "hanim_r_ankle";
browser.currentScene.children[25] = ROUTE628;

let ROUTE629 = browser.currentScene.createNode("ROUTE");
ROUTE629.fromField = "value_changed";
ROUTE629.fromNode = "r_knee_RotationInterpolator_BasicDive";
ROUTE629.toField = "set_rotation";
ROUTE629.toNode = "hanim_r_knee";
browser.currentScene.children[26] = ROUTE629;

let ROUTE630 = browser.currentScene.createNode("ROUTE");
ROUTE630.fromField = "value_changed";
ROUTE630.fromNode = "r_hip_RotationInterpolator_BasicDive";
ROUTE630.toField = "set_rotation";
ROUTE630.toNode = "hanim_r_hip";
browser.currentScene.children[27] = ROUTE630;

let ROUTE631 = browser.currentScene.createNode("ROUTE");
ROUTE631.fromField = "value_changed";
ROUTE631.fromNode = "l_ankle_RotationInterpolator_BasicDive";
ROUTE631.toField = "set_rotation";
ROUTE631.toNode = "hanim_l_ankle";
browser.currentScene.children[28] = ROUTE631;

let ROUTE632 = browser.currentScene.createNode("ROUTE");
ROUTE632.fromField = "value_changed";
ROUTE632.fromNode = "l_knee_RotationInterpolator_BasicDive";
ROUTE632.toField = "set_rotation";
ROUTE632.toNode = "hanim_l_knee";
browser.currentScene.children[29] = ROUTE632;

let ROUTE633 = browser.currentScene.createNode("ROUTE");
ROUTE633.fromField = "value_changed";
ROUTE633.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE633.toField = "set_rotationL";
ROUTE633.toNode = "finWarpScript";
browser.currentScene.children[30] = ROUTE633;

let ROUTE634 = browser.currentScene.createNode("ROUTE");
ROUTE634.fromField = "value_changed";
ROUTE634.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE634.toField = "set_rotationR";
ROUTE634.toNode = "finWarpScript";
browser.currentScene.children[31] = ROUTE634;

let ROUTE635 = browser.currentScene.createNode("ROUTE");
ROUTE635.fromField = "fin_warpL";
ROUTE635.fromNode = "finWarpScript";
ROUTE635.toField = "finL";
ROUTE635.toNode = "FinScript";
browser.currentScene.children[32] = ROUTE635;

let ROUTE636 = browser.currentScene.createNode("ROUTE");
ROUTE636.fromField = "fin_warpR";
ROUTE636.fromNode = "finWarpScript";
ROUTE636.toField = "finR";
ROUTE636.toNode = "FinScript";
browser.currentScene.children[33] = ROUTE636;

let ROUTE637 = browser.currentScene.createNode("ROUTE");
ROUTE637.fromField = "value_changed";
ROUTE637.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE637.toField = "set_rotation";
ROUTE637.toNode = "hanim_l_hip";
browser.currentScene.children[34] = ROUTE637;

let ROUTE638 = browser.currentScene.createNode("ROUTE");
ROUTE638.fromField = "value_changed";
ROUTE638.fromNode = "lower_body_RotationInterpolator_BasicDive";
ROUTE638.toField = "set_rotation";
ROUTE638.toNode = "hanim_sacroiliac";
browser.currentScene.children[35] = ROUTE638;

let ROUTE639 = browser.currentScene.createNode("ROUTE");
ROUTE639.fromField = "value_changed";
ROUTE639.fromNode = "head_RotationInterpolator_BasicDive";
ROUTE639.toField = "set_rotation";
ROUTE639.toNode = "hanim_skullbase";
browser.currentScene.children[36] = ROUTE639;

let ROUTE640 = browser.currentScene.createNode("ROUTE");
ROUTE640.fromField = "value_changed";
ROUTE640.fromNode = "neck_RotationInterpolator_BasicDive";
ROUTE640.toField = "set_rotation";
ROUTE640.toNode = "hanim_vc4";
browser.currentScene.children[37] = ROUTE640;

let ROUTE641 = browser.currentScene.createNode("ROUTE");
ROUTE641.fromField = "value_changed";
ROUTE641.fromNode = "upper_body_RotationInterpolator_BasicDive";
ROUTE641.toField = "set_rotation";
ROUTE641.toNode = "hanim_vl1";
browser.currentScene.children[38] = ROUTE641;

let ROUTE642 = browser.currentScene.createNode("ROUTE");
ROUTE642.fromField = "value_changed";
ROUTE642.fromNode = "whole_body_RotationInterpolator_BasicDive";
ROUTE642.toField = "set_rotation";
ROUTE642.toNode = "hanim_humanoid_root";
browser.currentScene.children[39] = ROUTE642;

let ROUTE643 = browser.currentScene.createNode("ROUTE");
ROUTE643.fromField = "value_changed";
ROUTE643.fromNode = "whole_body_TranslationInterpolator_BasicDive";
ROUTE643.toField = "set_translation";
ROUTE643.toNode = "hanim_humanoid_root";
browser.currentScene.children[40] = ROUTE643;

let ROUTE644 = browser.currentScene.createNode("ROUTE");
ROUTE644.fromField = "fraction_changed";
ROUTE644.fromNode = "Dive_Time";
ROUTE644.toField = "set_fraction";
ROUTE644.toNode = "r_wrist_RotationInterpolator_BasicDive";
browser.currentScene.children[41] = ROUTE644;

let ROUTE645 = browser.currentScene.createNode("ROUTE");
ROUTE645.fromField = "fraction_changed";
ROUTE645.fromNode = "Dive_Time";
ROUTE645.toField = "set_fraction";
ROUTE645.toNode = "r_elbow_RotationInterpolator_BasicDive";
browser.currentScene.children[42] = ROUTE645;

let ROUTE646 = browser.currentScene.createNode("ROUTE");
ROUTE646.fromField = "fraction_changed";
ROUTE646.fromNode = "Dive_Time";
ROUTE646.toField = "set_fraction";
ROUTE646.toNode = "r_shoulder_RotationInterpolator_BasicDive";
browser.currentScene.children[43] = ROUTE646;

let ROUTE647 = browser.currentScene.createNode("ROUTE");
ROUTE647.fromField = "fraction_changed";
ROUTE647.fromNode = "Dive_Time";
ROUTE647.toField = "set_fraction";
ROUTE647.toNode = "l_wrist_RotationInterpolator_BasicDive";
browser.currentScene.children[44] = ROUTE647;

let ROUTE648 = browser.currentScene.createNode("ROUTE");
ROUTE648.fromField = "fraction_changed";
ROUTE648.fromNode = "Dive_Time";
ROUTE648.toField = "set_fraction";
ROUTE648.toNode = "l_elbow_RotationInterpolator_BasicDive";
browser.currentScene.children[45] = ROUTE648;

let ROUTE649 = browser.currentScene.createNode("ROUTE");
ROUTE649.fromField = "fraction_changed";
ROUTE649.fromNode = "Dive_Time";
ROUTE649.toField = "set_fraction";
ROUTE649.toNode = "l_shoulder_RotationInterpolator_BasicDive";
browser.currentScene.children[46] = ROUTE649;

let ROUTE650 = browser.currentScene.createNode("ROUTE");
ROUTE650.fromField = "value_changed";
ROUTE650.fromNode = "r_wrist_RotationInterpolator_BasicDive";
ROUTE650.toField = "set_rotation";
ROUTE650.toNode = "hanim_r_wrist";
browser.currentScene.children[47] = ROUTE650;

let ROUTE651 = browser.currentScene.createNode("ROUTE");
ROUTE651.fromField = "value_changed";
ROUTE651.fromNode = "r_elbow_RotationInterpolator_BasicDive";
ROUTE651.toField = "set_rotation";
ROUTE651.toNode = "hanim_r_elbow";
browser.currentScene.children[48] = ROUTE651;

let ROUTE652 = browser.currentScene.createNode("ROUTE");
ROUTE652.fromField = "value_changed";
ROUTE652.fromNode = "r_shoulder_RotationInterpolator_BasicDive";
ROUTE652.toField = "set_rotation";
ROUTE652.toNode = "hanim_r_shoulder";
browser.currentScene.children[49] = ROUTE652;

let ROUTE653 = browser.currentScene.createNode("ROUTE");
ROUTE653.fromField = "value_changed";
ROUTE653.fromNode = "l_wrist_RotationInterpolator_BasicDive";
ROUTE653.toField = "set_rotation";
ROUTE653.toNode = "hanim_l_wrist";
browser.currentScene.children[50] = ROUTE653;

let ROUTE654 = browser.currentScene.createNode("ROUTE");
ROUTE654.fromField = "value_changed";
ROUTE654.fromNode = "l_elbow_RotationInterpolator_BasicDive";
ROUTE654.toField = "set_rotation";
ROUTE654.toNode = "hanim_l_elbow";
browser.currentScene.children[51] = ROUTE654;

let ROUTE655 = browser.currentScene.createNode("ROUTE");
ROUTE655.fromField = "value_changed";
ROUTE655.fromNode = "l_shoulder_RotationInterpolator_BasicDive";
ROUTE655.toField = "set_rotation";
ROUTE655.toNode = "hanim_l_shoulder";
browser.currentScene.children[52] = ROUTE655;

