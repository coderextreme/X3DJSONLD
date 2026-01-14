const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "NancyDivingProtoInstances.x3d");
scene.addMetaData("description", "Nancy having fun scuba diving - developmental model using ProtoInstance instead of HAnim native tags, do not use this pattern.");
scene.addMetaData("warning", "This is a developmental example, use HAnim native tags as shown in other examples instead of the prototypes and ProtoInstances shown here.");
scene.addMetaData("creator", "Etsuko Lippi");
scene.addMetaData("creator", "Cindy Ballreich cindy@ballreich.net 3Name3D");
scene.addMetaData("translator", "Tom Miller");
scene.addMetaData("translator", "Don Brutzman");
scene.addMetaData("created", "19 November 2001");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:50 GMT");
scene.addMetaData("TODO", "left arm motion still has a problem");
scene.addMetaData("rights", "1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDivingProtoInstances.x3d");
await browser .loadComponents (scene);
let ExternProtoDeclare15 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "Joint";
ExternProtoDeclare15.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ExternProtoDeclare15.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html";
ExternProtoDeclare15.url = new X3D.MFString([new X3D.SFString("NancyPrototypes.x3d#Joint"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Joint"), new X3D.SFString("NancyPrototypes.wrl#Joint"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Joint")]);
ExternProtoDeclare16.getField("center")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare17.getField("children")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare18.getField("llimit")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare19.getField("limitOrientation")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare20.getField("name")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare21.getField("rotation")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare22.getField("scale")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare23.getField("scaleOrientation")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare24.getField("stiffness")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare25.getField("translation")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare26.getField("ulimit")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare27.getField("removeChildren")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare28.getField("bboxSize")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare29.getField("skinCoordIndex")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare30.getField("bboxCenter")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare31.getField("skinCoordWeight")ExternProtoDeclare15YYY.field = new X3D.MFNode();

ExternProtoDeclare32.getField("addChildren")ExternProtoDeclare15YYY.field = new X3D.MFNode();

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ExternProtoDeclare15;

let ExternProtoDeclare33 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare33.name = "Segment";
ExternProtoDeclare33.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.";
ExternProtoDeclare33.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html";
ExternProtoDeclare33.url = new X3D.MFString([new X3D.SFString("NancyPrototypes.x3d#Segment"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Segment"), new X3D.SFString("NancyPrototypes.wrl#Segment"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Segment")]);
ExternProtoDeclare34.getField("bboxCenter")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare35.getField("bboxSize")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare36.getField("centerOfMass")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare37.getField("children")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare38.getField("coord")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare39.getField("displacers")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare40.getField("mass")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare41.getField("momentsOfInertia")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare42.getField("name")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare43.getField("addChildren")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare44.getField("removeChildren")ExternProtoDeclare33YYY.field = new X3D.MFNode();

browser.currentScene.children[1] = ExternProtoDeclare33;

let ExternProtoDeclare45 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare45.name = "Humanoid";
ExternProtoDeclare45.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ExternProtoDeclare45.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
ExternProtoDeclare45.url = new X3D.MFString([new X3D.SFString("NancyPrototypes.x3d#Humanoid"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Humanoid"), new X3D.SFString("NancyPrototypes.wrl#Humanoid"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Humanoid")]);
ExternProtoDeclare46.getField("bboxCenter")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare47.getField("bboxSize")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare48.getField("center")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare49.getField("humanoidBody")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare50.getField("info")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare51.getField("joints")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare52.getField("name")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare53.getField("rotation")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare54.getField("scale")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare55.getField("scaleOrientation")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare56.getField("segments")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare57.getField("sites")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare58.getField("translation")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare59.getField("version")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare60.getField("viewpoints")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare61.getField("skinNormal")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare62.getField("humanoidVersion")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare63.getField("skeleton")ExternProtoDeclare45YYY.field = new X3D.MFNode();

ExternProtoDeclare64.getField("skinCoord")ExternProtoDeclare45YYY.field = new X3D.MFNode();

browser.currentScene.children[2] = ExternProtoDeclare45;

let ExternProtoDeclare65 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare65.name = "ViewPositionOrientation";
ExternProtoDeclare65.appinfo = "ViewPositionOrientation provides provides console output of local position and orientation as user navigates";
ExternProtoDeclare65.url = new X3D.MFString([new X3D.SFString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), new X3D.SFString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), new X3D.SFString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), new X3D.SFString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation")]);
ExternProtoDeclare66.getField("enabled")ExternProtoDeclare65YYY.field = new X3D.MFNode();

ExternProtoDeclare67.getField("traceEnabled")ExternProtoDeclare65YYY.field = new X3D.MFNode();

ExternProtoDeclare68.getField("set_traceEnabled")ExternProtoDeclare65YYY.field = new X3D.MFNode();

ExternProtoDeclare69.getField("position_changed")ExternProtoDeclare65YYY.field = new X3D.MFNode();

ExternProtoDeclare70.getField("orientation_changed")ExternProtoDeclare65YYY.field = new X3D.MFNode();

ExternProtoDeclare71.getField("outputViewpointString")ExternProtoDeclare65YYY.field = new X3D.MFNode();

browser.currentScene.children[3] = ExternProtoDeclare65;

let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.DEF = "ExampleViewPositionOrientation";
ProtoInstance72.name = "ViewPositionOrientation";
let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "enabled";
fieldValue73.value = "true";
ProtoInstance72YYY.fieldValue = new X3D.MFNode();

ProtoInstance72ZZZ.fieldValue[0] = fieldValue73;

browser.currentScene.children[4] = ProtoInstance72;

let ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.DEF = "ConsoleOutputViewPositionOrientation";
ProtoInstance74.name = "ViewPositionOrientation";
let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "enabled";
fieldValue75.value = "true";
ProtoInstance74YYY.fieldValue = new X3D.MFNode();

ProtoInstance74ZZZ.fieldValue[0] = fieldValue75;

browser.currentScene.children[5] = ProtoInstance74;

let Background76 = browser.currentScene.createNode("Background");
Background76.skyColor = new X3D.MFColor([0,0.4,1]);
browser.currentScene.children[6] = Background76;

let NavigationInfo77 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo77.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
NavigationInfo77.avatarSize = new X3D.MFFloat([0.15,1.53,0.75]);
NavigationInfo77.speed = 0.5;
browser.currentScene.children[7] = NavigationInfo77;

let Viewpoint78 = browser.currentScene.createNode("Viewpoint");
Viewpoint78.description = "Nancy diving default viewpoint";
Viewpoint78.position = new X3D.SFVec3f([-0.8,0,3.1]);
browser.currentScene.children[8] = Viewpoint78;

let LOD79 = browser.currentScene.createNode("LOD");
let Group80 = browser.currentScene.createNode("Group");
Group80.DEF = "Viewpoint";
let Viewpoint81 = browser.currentScene.createNode("Viewpoint");
Viewpoint81.description = "Nancy front viewpoint";
Viewpoint81.position = new X3D.SFVec3f([-2.2,-0.7,0]);
Viewpoint81.orientation = new X3D.SFRotation([-0.354,0.878,-0.321,4.5485]);
Group80YYY.children = new X3D.MFNode();

Group80ZZZ.children[0] = Viewpoint81;

let Viewpoint82 = browser.currentScene.createNode("Viewpoint");
Viewpoint82.description = "Nancy above viewpoint";
Viewpoint82.position = new X3D.SFVec3f([-3,0.5,0]);
Viewpoint82.orientation = new X3D.SFRotation([-0.126,-0.978,-0.168,1.5385]);
Group80ZZZ.children[1] = Viewpoint82;

let Viewpoint83 = browser.currentScene.createNode("Viewpoint");
Viewpoint83.description = "Nancy back viewpoint";
Viewpoint83.position = new X3D.SFVec3f([0.7,0.1,0]);
Viewpoint83.orientation = new X3D.SFRotation([0.037,0.999,-0.011,1.572]);
Group80ZZZ.children[2] = Viewpoint83;

let Viewpoint84 = browser.currentScene.createNode("Viewpoint");
Viewpoint84.description = "Nancy side viewpoint";
Viewpoint84.position = new X3D.SFVec3f([-1.2,-0.2,-1.5]);
Viewpoint84.orientation = new X3D.SFRotation([0.121,0.987,-0.105,3.2682]);
Group80ZZZ.children[3] = Viewpoint84;

let Viewpoint85 = browser.currentScene.createNode("Viewpoint");
Viewpoint85.description = "Nancy viewpoint through her goggles";
Viewpoint85.position = new X3D.SFVec3f([-1.5,0.1,0]);
Viewpoint85.orientation = new X3D.SFRotation([-0.357,0.872,0.335,1.5225]);
Group80ZZZ.children[4] = Viewpoint85;

let Group86 = browser.currentScene.createNode("Group");
Group86.DEF = "HighResolution";
let Transform87 = browser.currentScene.createNode("Transform");
Transform87.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.rotation = new X3D.SFRotation([0,0,1,1.57]);
let WorldInfo89 = browser.currentScene.createNode("WorldInfo");
WorldInfo89.title = "Nancy - an HAnim compliant avatar by 3Name3D";
WorldInfo89.info = new X3D.MFString([new X3D.SFString("Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc.")]);
Transform88YYY.children = new X3D.MFNode();

Transform88ZZZ.children[0] = WorldInfo89;

let ProtoInstance90 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance90.DEF = "Humanoid";
ProtoInstance90.name = "Humanoid";
let fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "humanoidBody";
let ProtoInstance92 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance92.DEF = "hanim_humanoid_root";
ProtoInstance92.name = "Joint";
let fieldValue93 = browser.currentScene.createNode("fieldValue");
fieldValue93.name = "center";
fieldValue93.value = "-0.00405 0.855 -0.000113";
ProtoInstance92YYY.fieldValue = new X3D.MFNode();

ProtoInstance92ZZZ.fieldValue[0] = fieldValue93;

let fieldValue94 = browser.currentScene.createNode("fieldValue");
fieldValue94.name = "children";
let ProtoInstance95 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance95.DEF = "hanim_sacroiliac";
ProtoInstance95.name = "Joint";
let fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "center";
fieldValue96.value = "0 1.01 -0.0204";
ProtoInstance95YYY.fieldValue = new X3D.MFNode();

ProtoInstance95ZZZ.fieldValue[0] = fieldValue96;

let fieldValue97 = browser.currentScene.createNode("fieldValue");
fieldValue97.name = "children";
let ProtoInstance98 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance98.DEF = "hanim_pelvis";
ProtoInstance98.name = "Segment";
let fieldValue99 = browser.currentScene.createNode("fieldValue");
fieldValue99.name = "children";
let Shape100 = browser.currentScene.createNode("Shape");
let Appearance101 = browser.currentScene.createNode("Appearance");
let Material102 = browser.currentScene.createNode("Material");
Material102.DEF = "Pants_Color";
Material102.diffuseColor = new X3D.SFColor([0,0,0.502]);
material = Material102;

appearance = Appearance101;

let IndexedFaceSet103 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet103.creaseAngle = 1.14;
IndexedFaceSet103.coordIndex = new X3D.MFInt32([0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
let Coordinate104 = browser.currentScene.createNode("Coordinate");
Coordinate104.point = new X3D.MFVec3f([0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
coord = Coordinate104;

geometry = IndexedFaceSet103;

fieldValue99YYY.children = new X3D.MFNode();

fieldValue99ZZZ.children[0] = Shape100;

ProtoInstance98YYY.fieldValue = new X3D.MFNode();

ProtoInstance98ZZZ.fieldValue[0] = fieldValue99;

let fieldValue105 = browser.currentScene.createNode("fieldValue");
fieldValue105.name = "name";
fieldValue105.value = "pelvis";
ProtoInstance98ZZZ.fieldValue[1] = fieldValue105;

fieldValue97YYY.children = new X3D.MFNode();

fieldValue97ZZZ.children[0] = ProtoInstance98;

let ProtoInstance106 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance106.DEF = "hanim_l_hip";
ProtoInstance106.name = "Joint";
let fieldValue107 = browser.currentScene.createNode("fieldValue");
fieldValue107.name = "center";
fieldValue107.value = "0.122 0.888271 -0.0693267";
ProtoInstance106YYY.fieldValue = new X3D.MFNode();

ProtoInstance106ZZZ.fieldValue[0] = fieldValue107;

let fieldValue108 = browser.currentScene.createNode("fieldValue");
fieldValue108.name = "children";
let ProtoInstance109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance109.DEF = "hanim_l_thigh";
ProtoInstance109.name = "Segment";
let fieldValue110 = browser.currentScene.createNode("fieldValue");
fieldValue110.name = "children";
let Shape111 = browser.currentScene.createNode("Shape");
let Appearance112 = browser.currentScene.createNode("Appearance");
let Material113 = browser.currentScene.createNode("Material");
Material113.USE = "Pants_Color";
material = Material113;

appearance = Appearance112;

let IndexedFaceSet114 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet114.creaseAngle = 1.32;
IndexedFaceSet114.coordIndex = new X3D.MFInt32([0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
let Coordinate115 = browser.currentScene.createNode("Coordinate");
Coordinate115.point = new X3D.MFVec3f([0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
coord = Coordinate115;

geometry = IndexedFaceSet114;

fieldValue110YYY.children = new X3D.MFNode();

fieldValue110ZZZ.children[0] = Shape111;

ProtoInstance109YYY.fieldValue = new X3D.MFNode();

ProtoInstance109ZZZ.fieldValue[0] = fieldValue110;

let fieldValue116 = browser.currentScene.createNode("fieldValue");
fieldValue116.name = "name";
fieldValue116.value = "l_thigh";
ProtoInstance109ZZZ.fieldValue[1] = fieldValue116;

fieldValue108YYY.children = new X3D.MFNode();

fieldValue108ZZZ.children[0] = ProtoInstance109;

let ProtoInstance117 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance117.DEF = "hanim_l_knee";
ProtoInstance117.name = "Joint";
let fieldValue118 = browser.currentScene.createNode("fieldValue");
fieldValue118.name = "center";
fieldValue118.value = "0.0738 0.517 -0.0284";
ProtoInstance117YYY.fieldValue = new X3D.MFNode();

ProtoInstance117ZZZ.fieldValue[0] = fieldValue118;

let fieldValue119 = browser.currentScene.createNode("fieldValue");
fieldValue119.name = "children";
let ProtoInstance120 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance120.DEF = "hanim_l_calf";
ProtoInstance120.name = "Segment";
let fieldValue121 = browser.currentScene.createNode("fieldValue");
fieldValue121.name = "children";
let Shape122 = browser.currentScene.createNode("Shape");
let Appearance123 = browser.currentScene.createNode("Appearance");
let Material124 = browser.currentScene.createNode("Material");
Material124.USE = "Pants_Color";
material = Material124;

appearance = Appearance123;

let IndexedFaceSet125 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet125.creaseAngle = 1.57;
IndexedFaceSet125.coordIndex = new X3D.MFInt32([2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
let Coordinate126 = browser.currentScene.createNode("Coordinate");
Coordinate126.point = new X3D.MFVec3f([0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
coord = Coordinate126;

geometry = IndexedFaceSet125;

fieldValue121YYY.children = new X3D.MFNode();

fieldValue121ZZZ.children[0] = Shape122;

ProtoInstance120YYY.fieldValue = new X3D.MFNode();

ProtoInstance120ZZZ.fieldValue[0] = fieldValue121;

let fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "name";
fieldValue127.value = "l_calf";
ProtoInstance120ZZZ.fieldValue[1] = fieldValue127;

fieldValue119YYY.children = new X3D.MFNode();

fieldValue119ZZZ.children[0] = ProtoInstance120;

let ProtoInstance128 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance128.DEF = "hanim_l_ankle";
ProtoInstance128.name = "Joint";
let fieldValue129 = browser.currentScene.createNode("fieldValue");
fieldValue129.name = "center";
fieldValue129.value = "0.0645 0.0719 -0.048";
ProtoInstance128YYY.fieldValue = new X3D.MFNode();

ProtoInstance128ZZZ.fieldValue[0] = fieldValue129;

let fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "children";
let ProtoInstance131 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance131.DEF = "hanim_l_hindfoot";
ProtoInstance131.name = "Segment";
let fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "children";
let Shape133 = browser.currentScene.createNode("Shape");
let Appearance134 = browser.currentScene.createNode("Appearance");
let Material135 = browser.currentScene.createNode("Material");
Material135.DEF = "Shoe_Color";
Material135.ambientIntensity = 0.25;
Material135.diffuseColor = new X3D.SFColor([0.753,1,0.243]);
material = Material135;

appearance = Appearance134;

let IndexedFaceSet136 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet136.creaseAngle = 1.57;
IndexedFaceSet136.coordIndex = new X3D.MFInt32([2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
let Coordinate137 = browser.currentScene.createNode("Coordinate");
Coordinate137.point = new X3D.MFVec3f([0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
coord = Coordinate137;

geometry = IndexedFaceSet136;

fieldValue132YYY.children = new X3D.MFNode();

fieldValue132ZZZ.children[0] = Shape133;

let Transform138 = browser.currentScene.createNode("Transform");
Transform138.scale = new X3D.SFVec3f([0.015,0.015,0.015]);
let Transform139 = browser.currentScene.createNode("Transform");
Transform139.translation = new X3D.SFVec3f([6,-0.5,-7.5]);
Transform139.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape140 = browser.currentScene.createNode("Shape");
let Appearance141 = browser.currentScene.createNode("Appearance");
let Material142 = browser.currentScene.createNode("Material");
Material142.diffuseColor = new X3D.SFColor([0.753,1,0.243]);
material = Material142;

appearance = Appearance141;

let Extrusion143 = browser.currentScene.createNode("Extrusion");
Extrusion143.DEF = "Finl";
Extrusion143.ccw = False;
Extrusion143.creaseAngle = 3.14;
Extrusion143.crossSection = new X3D.MFVec2f([-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion143.scale = new X3D.MFVec2f([0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion143.spine = new X3D.MFVec3f([0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
geometry = Extrusion143;

Transform139YYY.child = new X3D.undefined();

Transform139ZZZ.child[0] = Shape140;

Transform138YYY.children = new X3D.MFNode();

Transform138ZZZ.children[0] = Transform139;

fieldValue132ZZZ.children[1] = Transform138;

ProtoInstance131YYY.fieldValue = new X3D.MFNode();

ProtoInstance131ZZZ.fieldValue[0] = fieldValue132;

let fieldValue144 = browser.currentScene.createNode("fieldValue");
fieldValue144.name = "name";
fieldValue144.value = "l_hindfoot";
ProtoInstance131ZZZ.fieldValue[1] = fieldValue144;

fieldValue130YYY.children = new X3D.MFNode();

fieldValue130ZZZ.children[0] = ProtoInstance131;

ProtoInstance128ZZZ.fieldValue[1] = fieldValue130;

let fieldValue145 = browser.currentScene.createNode("fieldValue");
fieldValue145.name = "name";
fieldValue145.value = "l_ankle";
ProtoInstance128ZZZ.fieldValue[2] = fieldValue145;

fieldValue119ZZZ.children[1] = ProtoInstance128;

ProtoInstance117ZZZ.fieldValue[1] = fieldValue119;

let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "name";
fieldValue146.value = "l_knee";
ProtoInstance117ZZZ.fieldValue[2] = fieldValue146;

fieldValue108ZZZ.children[1] = ProtoInstance117;

ProtoInstance106ZZZ.fieldValue[1] = fieldValue108;

let fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "name";
fieldValue147.value = "l_hip";
ProtoInstance106ZZZ.fieldValue[2] = fieldValue147;

fieldValue97ZZZ.children[1] = ProtoInstance106;

let ProtoInstance148 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance148.DEF = "hanim_r_hip";
ProtoInstance148.name = "Joint";
let fieldValue149 = browser.currentScene.createNode("fieldValue");
fieldValue149.name = "center";
fieldValue149.value = "-0.11 0.892362 -0.0732533";
ProtoInstance148YYY.fieldValue = new X3D.MFNode();

ProtoInstance148ZZZ.fieldValue[0] = fieldValue149;

let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "children";
let ProtoInstance151 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance151.DEF = "hanim_r_thigh";
ProtoInstance151.name = "Segment";
let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "children";
let Shape153 = browser.currentScene.createNode("Shape");
let Appearance154 = browser.currentScene.createNode("Appearance");
let Material155 = browser.currentScene.createNode("Material");
Material155.USE = "Pants_Color";
material = Material155;

appearance = Appearance154;

let IndexedFaceSet156 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet156.creaseAngle = 1.61;
IndexedFaceSet156.coordIndex = new X3D.MFInt32([5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
let Coordinate157 = browser.currentScene.createNode("Coordinate");
Coordinate157.point = new X3D.MFVec3f([-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
coord = Coordinate157;

geometry = IndexedFaceSet156;

fieldValue152YYY.children = new X3D.MFNode();

fieldValue152ZZZ.children[0] = Shape153;

ProtoInstance151YYY.fieldValue = new X3D.MFNode();

ProtoInstance151ZZZ.fieldValue[0] = fieldValue152;

let fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "name";
fieldValue158.value = "r_thigh";
ProtoInstance151ZZZ.fieldValue[1] = fieldValue158;

fieldValue150YYY.children = new X3D.MFNode();

fieldValue150ZZZ.children[0] = ProtoInstance151;

let ProtoInstance159 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance159.DEF = "hanim_r_knee";
ProtoInstance159.name = "Joint";
let fieldValue160 = browser.currentScene.createNode("fieldValue");
fieldValue160.name = "center";
fieldValue160.value = "-0.0699 0.51 -0.0166";
ProtoInstance159YYY.fieldValue = new X3D.MFNode();

ProtoInstance159ZZZ.fieldValue[0] = fieldValue160;

let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "children";
let ProtoInstance162 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance162.DEF = "hanim_r_calf";
ProtoInstance162.name = "Segment";
let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "children";
let Shape164 = browser.currentScene.createNode("Shape");
let Appearance165 = browser.currentScene.createNode("Appearance");
let Material166 = browser.currentScene.createNode("Material");
Material166.USE = "Pants_Color";
material = Material166;

appearance = Appearance165;

let IndexedFaceSet167 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet167.creaseAngle = 1.57;
IndexedFaceSet167.coordIndex = new X3D.MFInt32([14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
let Coordinate168 = browser.currentScene.createNode("Coordinate");
Coordinate168.point = new X3D.MFVec3f([-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
coord = Coordinate168;

geometry = IndexedFaceSet167;

fieldValue163YYY.children = new X3D.MFNode();

fieldValue163ZZZ.children[0] = Shape164;

ProtoInstance162YYY.fieldValue = new X3D.MFNode();

ProtoInstance162ZZZ.fieldValue[0] = fieldValue163;

let fieldValue169 = browser.currentScene.createNode("fieldValue");
fieldValue169.name = "name";
fieldValue169.value = "r_calf";
ProtoInstance162ZZZ.fieldValue[1] = fieldValue169;

fieldValue161YYY.children = new X3D.MFNode();

fieldValue161ZZZ.children[0] = ProtoInstance162;

let ProtoInstance170 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance170.DEF = "hanim_r_ankle";
ProtoInstance170.name = "Joint";
let fieldValue171 = browser.currentScene.createNode("fieldValue");
fieldValue171.name = "center";
fieldValue171.value = "-0.064 0.0753 -0.0412";
ProtoInstance170YYY.fieldValue = new X3D.MFNode();

ProtoInstance170ZZZ.fieldValue[0] = fieldValue171;

let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "children";
let ProtoInstance173 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance173.DEF = "hanim_r_hindfoot";
ProtoInstance173.name = "Segment";
let fieldValue174 = browser.currentScene.createNode("fieldValue");
fieldValue174.name = "children";
let Shape175 = browser.currentScene.createNode("Shape");
let Appearance176 = browser.currentScene.createNode("Appearance");
let Material177 = browser.currentScene.createNode("Material");
Material177.USE = "Shoe_Color";
material = Material177;

appearance = Appearance176;

let IndexedFaceSet178 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet178.creaseAngle = 1.57;
IndexedFaceSet178.coordIndex = new X3D.MFInt32([6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
let Coordinate179 = browser.currentScene.createNode("Coordinate");
Coordinate179.point = new X3D.MFVec3f([-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
coord = Coordinate179;

geometry = IndexedFaceSet178;

fieldValue174YYY.children = new X3D.MFNode();

fieldValue174ZZZ.children[0] = Shape175;

let Transform180 = browser.currentScene.createNode("Transform");
Transform180.scale = new X3D.SFVec3f([0.015,0.015,0.015]);
let Transform181 = browser.currentScene.createNode("Transform");
Transform181.translation = new X3D.SFVec3f([-5,-0.5,-7.5]);
Transform181.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape182 = browser.currentScene.createNode("Shape");
let Appearance183 = browser.currentScene.createNode("Appearance");
let Material184 = browser.currentScene.createNode("Material");
Material184.diffuseColor = new X3D.SFColor([0.753,1,0.243]);
material = Material184;

appearance = Appearance183;

let Extrusion185 = browser.currentScene.createNode("Extrusion");
Extrusion185.DEF = "Finr";
Extrusion185.ccw = False;
Extrusion185.creaseAngle = 3.14;
Extrusion185.crossSection = new X3D.MFVec2f([-1,0,-0.8,2,-0.7,3,0,5.2,0.7,3,0.8,2,1,0,0.8,-2,0.7,-3,0,-5.2,-0.7,-3,-0.8,-2,-1,0]);
Extrusion185.scale = new X3D.MFVec2f([0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35]);
Extrusion185.spine = new X3D.MFVec3f([0,0,1,0,0,5,0,0,8,0,0,12,0,0,15,0.5,0,18,1.5,0,25,2.5,0,30,4,0,34]);
geometry = Extrusion185;

Transform181YYY.child = new X3D.undefined();

Transform181ZZZ.child[0] = Shape182;

Transform180YYY.children = new X3D.MFNode();

Transform180ZZZ.children[0] = Transform181;

fieldValue174ZZZ.children[1] = Transform180;

ProtoInstance173YYY.fieldValue = new X3D.MFNode();

ProtoInstance173ZZZ.fieldValue[0] = fieldValue174;

let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "name";
fieldValue186.value = "r_hindfoot";
ProtoInstance173ZZZ.fieldValue[1] = fieldValue186;

fieldValue172YYY.children = new X3D.MFNode();

fieldValue172ZZZ.children[0] = ProtoInstance173;

ProtoInstance170ZZZ.fieldValue[1] = fieldValue172;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "name";
fieldValue187.value = "r_ankle";
ProtoInstance170ZZZ.fieldValue[2] = fieldValue187;

fieldValue161ZZZ.children[1] = ProtoInstance170;

ProtoInstance159ZZZ.fieldValue[1] = fieldValue161;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "name";
fieldValue188.value = "r_knee";
ProtoInstance159ZZZ.fieldValue[2] = fieldValue188;

fieldValue150ZZZ.children[1] = ProtoInstance159;

ProtoInstance148ZZZ.fieldValue[1] = fieldValue150;

let fieldValue189 = browser.currentScene.createNode("fieldValue");
fieldValue189.name = "name";
fieldValue189.value = "r_hip";
ProtoInstance148ZZZ.fieldValue[2] = fieldValue189;

fieldValue97ZZZ.children[2] = ProtoInstance148;

ProtoInstance95ZZZ.fieldValue[1] = fieldValue97;

let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "name";
fieldValue190.value = "sacroiliac";
ProtoInstance95ZZZ.fieldValue[2] = fieldValue190;

fieldValue94YYY.children = new X3D.MFNode();

fieldValue94ZZZ.children[0] = ProtoInstance95;

let ProximitySensor191 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor191.DEF = "FinTriggerProximitySensor";
ProximitySensor191.size = new X3D.SFVec3f([5,5,5]);
fieldValue94ZZZ.children[1] = ProximitySensor191;

let TimeSensor192 = browser.currentScene.createNode("TimeSensor");
TimeSensor192.DEF = "FinClock";
TimeSensor192.cycleInterval = 7;
TimeSensor192.loop = True;
fieldValue94ZZZ.children[2] = TimeSensor192;

let Group193 = browser.currentScene.createNode("Group");
let Script194 = browser.currentScene.createNode("Script");
Script194.DEF = "FinScript";
Script195.getField("keyValueR")Script194YYY.field = new X3D.MFNode();

Script196.getField("keyValueL")Script194YYY.field = new X3D.MFNode();

Script197.getField("set_fraction")Script194YYY.field = new X3D.MFNode();

Script198.getField("finL")Script194YYY.field = new X3D.MFNode();

Script199.getField("finR")Script194YYY.field = new X3D.MFNode();

Script200.getField("traceEnabled").setValue("true");
Script194YYY.field = new X3D.MFNode();


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
Group193YYY.children = new X3D.MFNode();

Group193ZZZ.children[0] = Script194;

fieldValue94ZZZ.children[3] = Group193;

let ProtoInstance201 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance201.DEF = "hanim_vl1";
ProtoInstance201.name = "Joint";
let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "center";
fieldValue202.value = "-0.00405 1.07 -0.0275";
ProtoInstance201YYY.fieldValue = new X3D.MFNode();

ProtoInstance201ZZZ.fieldValue[0] = fieldValue202;

let fieldValue203 = browser.currentScene.createNode("fieldValue");
fieldValue203.name = "children";
let ProtoInstance204 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance204.DEF = "hanim_c7";
ProtoInstance204.name = "Segment";
let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "children";
let Transform206 = browser.currentScene.createNode("Transform");
Transform206.translation = new X3D.SFVec3f([0,-0.09,0]);
Transform206.scale = new X3D.SFVec3f([1.05,1.05,1.05]);
let Shape207 = browser.currentScene.createNode("Shape");
let Appearance208 = browser.currentScene.createNode("Appearance");
let Material209 = browser.currentScene.createNode("Material");
Material209.DEF = "WetShirtColor";
Material209.ambientIntensity = 0.25;
Material209.diffuseColor = new X3D.SFColor([0,0,0.502]);
material = Material209;

let ImageTexture210 = browser.currentScene.createNode("ImageTexture");
ImageTexture210.DEF = "small_logo_Tex";
ImageTexture210.url = new X3D.MFString([new X3D.SFString("small_logo.gif"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif")]);
texture = ImageTexture210;

appearance = Appearance208;

let IndexedFaceSet211 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet211.creaseAngle = 1.59;
IndexedFaceSet211.coordIndex = new X3D.MFInt32([0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
let TextureCoordinate212 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate212.point = new X3D.MFVec2f([0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
texCoord = TextureCoordinate212;

let Coordinate213 = browser.currentScene.createNode("Coordinate");
Coordinate213.point = new X3D.MFVec3f([0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
coord = Coordinate213;

geometry = IndexedFaceSet211;

Transform206YYY.child = new X3D.undefined();

Transform206ZZZ.child[0] = Shape207;

fieldValue205YYY.children = new X3D.MFNode();

fieldValue205ZZZ.children[0] = Transform206;

let Transform214 = browser.currentScene.createNode("Transform");
Transform214.translation = new X3D.SFVec3f([0,1.18,0.015]);
Transform214.scale = new X3D.SFVec3f([1.25,1.1,1.3]);
let Group215 = browser.currentScene.createNode("Group");
let Transform216 = browser.currentScene.createNode("Transform");
Transform216.translation = new X3D.SFVec3f([0,-1.2,0]);
let Shape217 = browser.currentScene.createNode("Shape");
let Appearance218 = browser.currentScene.createNode("Appearance");
let Material219 = browser.currentScene.createNode("Material");
Material219.DEF = "BCLColor";
Material219.ambientIntensity = 0.25;
Material219.diffuseColor = new X3D.SFColor([0.0588,0.0588,0.0588]);
Material219.shininess = 0.5;
material = Material219;

appearance = Appearance218;

let IndexedFaceSet220 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet220.solid = False;
IndexedFaceSet220.creaseAngle = 1.59;
IndexedFaceSet220.coordIndex = new X3D.MFInt32([4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1]);
let TextureCoordinate221 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate221.point = new X3D.MFVec2f([0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
texCoord = TextureCoordinate221;

let Coordinate222 = browser.currentScene.createNode("Coordinate");
Coordinate222.point = new X3D.MFVec3f([0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
coord = Coordinate222;

geometry = IndexedFaceSet220;

Transform216YYY.child = new X3D.undefined();

Transform216ZZZ.child[0] = Shape217;

Group215YYY.children = new X3D.MFNode();

Group215ZZZ.children[0] = Transform216;

let Transform223 = browser.currentScene.createNode("Transform");
Transform223.translation = new X3D.SFVec3f([0.13,0.22,-0.1]);
Transform223.rotation = new X3D.SFRotation([0,0,1,1.57]);
Transform223.scale = new X3D.SFVec3f([2,1.5,1.5]);
let Transform224 = browser.currentScene.createNode("Transform");
Transform224.rotation = new X3D.SFRotation([1,0,0,1.4]);
let Shape225 = browser.currentScene.createNode("Shape");
Shape225.DEF = "BCLSnorkelPad";
let Appearance226 = browser.currentScene.createNode("Appearance");
let Material227 = browser.currentScene.createNode("Material");
Material227.USE = "BCLColor";
material = Material227;

appearance = Appearance226;

let Extrusion228 = browser.currentScene.createNode("Extrusion");
Extrusion228.crossSection = new X3D.MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion228.spine = new X3D.MFVec3f([-0.03,0.01,0,-0.005,0.04,0,0,0.06,0,-0.01,0.075,0]);
geometry = Extrusion228;

Transform224YYY.child = new X3D.undefined();

Transform224ZZZ.child[0] = Shape225;

Transform223YYY.children = new X3D.MFNode();

Transform223ZZZ.children[0] = Transform224;

Group215ZZZ.children[1] = Transform223;

let Transform229 = browser.currentScene.createNode("Transform");
Transform229.translation = new X3D.SFVec3f([0.07,0.08,0.125]);
Transform229.rotation = new X3D.SFRotation([-1,0,0,0.8]);
let Shape230 = browser.currentScene.createNode("Shape");
let Appearance231 = browser.currentScene.createNode("Appearance");
let Material232 = browser.currentScene.createNode("Material");
Material232.DEF = "BCLSnorkel";
Material232.diffuseColor = new X3D.SFColor([0.25,0.25,0.25]);
Material232.shininess = 0.5;
Material232.transparency = 0.1;
material = Material232;

appearance = Appearance231;

let Extrusion233 = browser.currentScene.createNode("Extrusion");
Extrusion233.crossSection = new X3D.MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion233.scale = new X3D.MFVec2f([0.8,0.8,1,1]);
Extrusion233.spine = new X3D.MFVec3f([0.03,0.03,-0.05,0.05,0.2,0]);
geometry = Extrusion233;

Transform229YYY.child = new X3D.undefined();

Transform229ZZZ.child[0] = Shape230;

Group215ZZZ.children[2] = Transform229;

let Group234 = browser.currentScene.createNode("Group");
Group234.DEF = "buckle";
let Transform235 = browser.currentScene.createNode("Transform");
Transform235.translation = new X3D.SFVec3f([-0.08,0.1,0.029]);
Transform235.rotation = new X3D.SFRotation([-1,0,0,0.68]);
let Shape236 = browser.currentScene.createNode("Shape");
let Appearance237 = browser.currentScene.createNode("Appearance");
Appearance237.DEF = "buckleHolder";
let Material238 = browser.currentScene.createNode("Material");
Material238.diffuseColor = new X3D.SFColor([0.25,0.25,0.25]);
material = Material238;

appearance = Appearance237;

let Box239 = browser.currentScene.createNode("Box");
Box239.size = new X3D.SFVec3f([0.03,0.03,0.005]);
geometry = Box239;

Transform235YYY.child = new X3D.undefined();

Transform235ZZZ.child[0] = Shape236;

Group234YYY.children = new X3D.MFNode();

Group234ZZZ.children[0] = Transform235;

let Transform240 = browser.currentScene.createNode("Transform");
Transform240.translation = new X3D.SFVec3f([0.03,0.1,0.027]);
Transform240.rotation = new X3D.SFRotation([-1,0,0,0.68]);
let Shape241 = browser.currentScene.createNode("Shape");
let Appearance242 = browser.currentScene.createNode("Appearance");
Appearance242.USE = "buckleHolder";
appearance = Appearance242;

let Box243 = browser.currentScene.createNode("Box");
Box243.size = new X3D.SFVec3f([0.15,0.03,0.001]);
geometry = Box243;

Transform240YYY.child = new X3D.undefined();

Transform240ZZZ.child[0] = Shape241;

Group234ZZZ.children[1] = Transform240;

let Transform244 = browser.currentScene.createNode("Transform");
Transform244.translation = new X3D.SFVec3f([-0.045,0.1,0.028]);
Transform244.rotation = new X3D.SFRotation([-1,0,0,0.68]);
let Shape245 = browser.currentScene.createNode("Shape");
let Appearance246 = browser.currentScene.createNode("Appearance");
Appearance246.DEF = "pin";
let Material247 = browser.currentScene.createNode("Material");
material = Material247;

appearance = Appearance246;

let Box248 = browser.currentScene.createNode("Box");
Box248.size = new X3D.SFVec3f([0.02,0.028,0.005]);
geometry = Box248;

Transform244YYY.child = new X3D.undefined();

Transform244ZZZ.child[0] = Shape245;

Group234ZZZ.children[2] = Transform244;

let Transform249 = browser.currentScene.createNode("Transform");
Transform249.translation = new X3D.SFVec3f([-0.06,0.1,0.029]);
Transform249.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape250 = browser.currentScene.createNode("Shape");
let Appearance251 = browser.currentScene.createNode("Appearance");
Appearance251.USE = "pin";
appearance = Appearance251;

let Cylinder252 = browser.currentScene.createNode("Cylinder");
Cylinder252.height = 0.02;
Cylinder252.radius = 0.0024;
geometry = Cylinder252;

Transform249YYY.child = new X3D.undefined();

Transform249ZZZ.child[0] = Shape250;

Group234ZZZ.children[3] = Transform249;

let Transform253 = browser.currentScene.createNode("Transform");
Transform253.translation = new X3D.SFVec3f([-0.06,0.109,0.0217]);
Transform253.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape254 = browser.currentScene.createNode("Shape");
let Appearance255 = browser.currentScene.createNode("Appearance");
Appearance255.USE = "pin";
appearance = Appearance255;

let Cylinder256 = browser.currentScene.createNode("Cylinder");
Cylinder256.height = 0.02;
Cylinder256.radius = 0.0024;
geometry = Cylinder256;

Transform253YYY.child = new X3D.undefined();

Transform253ZZZ.child[0] = Shape254;

Group234ZZZ.children[4] = Transform253;

let Transform257 = browser.currentScene.createNode("Transform");
Transform257.translation = new X3D.SFVec3f([-0.06,0.091,0.036]);
Transform257.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Shape258 = browser.currentScene.createNode("Shape");
let Appearance259 = browser.currentScene.createNode("Appearance");
Appearance259.USE = "pin";
appearance = Appearance259;

let Cylinder260 = browser.currentScene.createNode("Cylinder");
Cylinder260.height = 0.02;
Cylinder260.radius = 0.0024;
geometry = Cylinder260;

Transform257YYY.child = new X3D.undefined();

Transform257ZZZ.child[0] = Shape258;

Group234ZZZ.children[5] = Transform257;

Group215ZZZ.children[3] = Group234;

let Group261 = browser.currentScene.createNode("Group");
Group261.DEF = "buckleBelt";
let Transform262 = browser.currentScene.createNode("Transform");
Transform262.translation = new X3D.SFVec3f([-0.07,-0.12,0.038]);
Transform262.rotation = new X3D.SFRotation([0,1,0,-0.68]);
let Shape263 = browser.currentScene.createNode("Shape");
let Appearance264 = browser.currentScene.createNode("Appearance");
Appearance264.USE = "buckleHolder";
appearance = Appearance264;

let Box265 = browser.currentScene.createNode("Box");
Box265.size = new X3D.SFVec3f([0.04,0.1,0.005]);
geometry = Box265;

Transform262YYY.child = new X3D.undefined();

Transform262ZZZ.child[0] = Shape263;

Group261YYY.children = new X3D.MFNode();

Group261ZZZ.children[0] = Transform262;

let Transform266 = browser.currentScene.createNode("Transform");
Transform266.translation = new X3D.SFVec3f([0.005,-0.12,0.053]);
let Shape267 = browser.currentScene.createNode("Shape");
let Appearance268 = browser.currentScene.createNode("Appearance");
Appearance268.USE = "buckleHolder";
appearance = Appearance268;

let Box269 = browser.currentScene.createNode("Box");
Box269.size = new X3D.SFVec3f([0.12,0.11,0.001]);
geometry = Box269;

Transform266YYY.child = new X3D.undefined();

Transform266ZZZ.child[0] = Shape267;

Group261ZZZ.children[1] = Transform266;

let Transform270 = browser.currentScene.createNode("Transform");
Transform270.translation = new X3D.SFVec3f([0.075,-0.12,0.038]);
Transform270.rotation = new X3D.SFRotation([0,1,0,0.68]);
let Shape271 = browser.currentScene.createNode("Shape");
let Appearance272 = browser.currentScene.createNode("Appearance");
Appearance272.USE = "buckleHolder";
appearance = Appearance272;

let Box273 = browser.currentScene.createNode("Box");
Box273.size = new X3D.SFVec3f([0.04,0.1,0.005]);
geometry = Box273;

Transform270YYY.child = new X3D.undefined();

Transform270ZZZ.child[0] = Shape271;

Group261ZZZ.children[2] = Transform270;

Group215ZZZ.children[4] = Group261;

Transform214YYY.children = new X3D.MFNode();

Transform214ZZZ.children[0] = Group215;

fieldValue205ZZZ.children[1] = Transform214;

let Transform274 = browser.currentScene.createNode("Transform");
Transform274.DEF = "ScubaTank";
Transform274.translation = new X3D.SFVec3f([0,1.1,-0.23]);
Transform274.rotation = new X3D.SFRotation([0,1,0,3.14]);
Transform274.scale = new X3D.SFVec3f([0.8,0.8,0.8]);
let Transform275 = browser.currentScene.createNode("Transform");
let Shape276 = browser.currentScene.createNode("Shape");
let Appearance277 = browser.currentScene.createNode("Appearance");
let Material278 = browser.currentScene.createNode("Material");
Material278.DEF = "tank";
Material278.ambientIntensity = 0.3;
Material278.diffuseColor = new X3D.SFColor([0.3,0.3,0.5]);
Material278.specularColor = new X3D.SFColor([0.7,0.7,0.8]);
Material278.shininess = 0.1;
material = Material278;

appearance = Appearance277;

let Cylinder279 = browser.currentScene.createNode("Cylinder");
Cylinder279.height = 0.7;
Cylinder279.radius = 0.1;
geometry = Cylinder279;

Transform275YYY.child = new X3D.undefined();

Transform275ZZZ.child[0] = Shape276;

Transform274YYY.children = new X3D.MFNode();

Transform274ZZZ.children[0] = Transform275;

let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new X3D.SFVec3f([0,0.35,0]);
let Shape281 = browser.currentScene.createNode("Shape");
let Appearance282 = browser.currentScene.createNode("Appearance");
let Material283 = browser.currentScene.createNode("Material");
Material283.USE = "tank";
material = Material283;

appearance = Appearance282;

let Sphere284 = browser.currentScene.createNode("Sphere");
Sphere284.radius = 0.098;
geometry = Sphere284;

Transform280YYY.child = new X3D.undefined();

Transform280ZZZ.child[0] = Shape281;

Transform274ZZZ.children[1] = Transform280;

let Transform285 = browser.currentScene.createNode("Transform");
Transform285.translation = new X3D.SFVec3f([0,-0.35,0]);
let Shape286 = browser.currentScene.createNode("Shape");
Shape286.DEF = "tankBottom";
let Appearance287 = browser.currentScene.createNode("Appearance");
let Material288 = browser.currentScene.createNode("Material");
Material288.ambientIntensity = 0.3;
Material288.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material288;

appearance = Appearance287;

let Cylinder289 = browser.currentScene.createNode("Cylinder");
Cylinder289.height = 0.06;
Cylinder289.radius = 0.101;
geometry = Cylinder289;

Transform285YYY.child = new X3D.undefined();

Transform285ZZZ.child[0] = Shape286;

Transform274ZZZ.children[2] = Transform285;

let Group290 = browser.currentScene.createNode("Group");
Group290.DEF = "tankNozzle";
let Transform291 = browser.currentScene.createNode("Transform");
let Transform292 = browser.currentScene.createNode("Transform");
Transform292.translation = new X3D.SFVec3f([0,0.45,0]);
let Shape293 = browser.currentScene.createNode("Shape");
Shape293.DEF = "pressure";
let Appearance294 = browser.currentScene.createNode("Appearance");
let Material295 = browser.currentScene.createNode("Material");
Material295.DEF = "pressureColor";
Material295.ambientIntensity = 0.4;
Material295.diffuseColor = new X3D.SFColor([0.91,0.91,0.91]);
Material295.specularColor = new X3D.SFColor([0.91,0.9,0.91]);
Material295.shininess = 0.16;
material = Material295;

appearance = Appearance294;

let Cylinder296 = browser.currentScene.createNode("Cylinder");
Cylinder296.height = 0.1;
Cylinder296.radius = 0.015;
geometry = Cylinder296;

Transform292YYY.child = new X3D.undefined();

Transform292ZZZ.child[0] = Shape293;

Transform291YYY.children = new X3D.MFNode();

Transform291ZZZ.children[0] = Transform292;

let Transform297 = browser.currentScene.createNode("Transform");
Transform297.translation = new X3D.SFVec3f([0,0.5,0]);
let Shape298 = browser.currentScene.createNode("Shape");
Shape298.DEF = "pressureTop";
let Appearance299 = browser.currentScene.createNode("Appearance");
let Material300 = browser.currentScene.createNode("Material");
Material300.DEF = "top";
Material300.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material300;

appearance = Appearance299;

let Cylinder301 = browser.currentScene.createNode("Cylinder");
Cylinder301.height = 0.02;
Cylinder301.radius = 0.025;
geometry = Cylinder301;

Transform297YYY.child = new X3D.undefined();

Transform297ZZZ.child[0] = Shape298;

Transform291ZZZ.children[1] = Transform297;

let Transform302 = browser.currentScene.createNode("Transform");
Transform302.translation = new X3D.SFVec3f([-0.028,0.462,0]);
Transform302.rotation = new X3D.SFRotation([0,0,1,1.57]);
let Transform303 = browser.currentScene.createNode("Transform");
let Shape304 = browser.currentScene.createNode("Shape");
Shape304.DEF = "connectorToRegulator";
let Appearance305 = browser.currentScene.createNode("Appearance");
let Material306 = browser.currentScene.createNode("Material");
Material306.USE = "pressureColor";
material = Material306;

appearance = Appearance305;

let Cylinder307 = browser.currentScene.createNode("Cylinder");
Cylinder307.height = 0.03;
Cylinder307.radius = 0.01;
geometry = Cylinder307;

Transform303YYY.child = new X3D.undefined();

Transform303ZZZ.child[0] = Shape304;

Transform302YYY.children = new X3D.MFNode();

Transform302ZZZ.children[0] = Transform303;

let Transform308 = browser.currentScene.createNode("Transform");
Transform308.translation = new X3D.SFVec3f([0,0.02,0]);
let Shape309 = browser.currentScene.createNode("Shape");
Shape309.DEF = "connectorToRegulatorTop";
let Appearance310 = browser.currentScene.createNode("Appearance");
let Material311 = browser.currentScene.createNode("Material");
Material311.USE = "top";
material = Material311;

appearance = Appearance310;

let Cylinder312 = browser.currentScene.createNode("Cylinder");
Cylinder312.height = 0.02;
Cylinder312.radius = 0.02;
geometry = Cylinder312;

Transform308YYY.child = new X3D.undefined();

Transform308ZZZ.child[0] = Shape309;

Transform302ZZZ.children[1] = Transform308;

Transform291ZZZ.children[2] = Transform302;

Group290YYY.children = new X3D.MFNode();

Group290ZZZ.children[0] = Transform291;

Transform274ZZZ.children[3] = Group290;

let Transform313 = browser.currentScene.createNode("Transform");
Transform313.translation = new X3D.SFVec3f([0,0.2,0]);
let Shape314 = browser.currentScene.createNode("Shape");
Shape314.DEF = "tankHoldBelt";
let Appearance315 = browser.currentScene.createNode("Appearance");
let Material316 = browser.currentScene.createNode("Material");
Material316.ambientIntensity = 0.3;
Material316.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material316;

appearance = Appearance315;

let Cylinder317 = browser.currentScene.createNode("Cylinder");
Cylinder317.height = 0.1;
Cylinder317.radius = 0.115;
geometry = Cylinder317;

Transform313YYY.child = new X3D.undefined();

Transform313ZZZ.child[0] = Shape314;

Transform274ZZZ.children[4] = Transform313;

fieldValue205ZZZ.children[2] = Transform274;

ProtoInstance204YYY.fieldValue = new X3D.MFNode();

ProtoInstance204ZZZ.fieldValue[0] = fieldValue205;

let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "name";
fieldValue318.value = "l1";
ProtoInstance204ZZZ.fieldValue[1] = fieldValue318;

fieldValue203YYY.children = new X3D.MFNode();

fieldValue203ZZZ.children[0] = ProtoInstance204;

let ProtoInstance319 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance319.DEF = "hanim_l_shoulder";
ProtoInstance319.name = "Joint";
let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "center";
fieldValue320.value = "0.167 1.36 -0.0518";
ProtoInstance319YYY.fieldValue = new X3D.MFNode();

ProtoInstance319ZZZ.fieldValue[0] = fieldValue320;

let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "children";
let ProtoInstance322 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance322.DEF = "hanim_l_upperarm";
ProtoInstance322.name = "Segment";
let fieldValue323 = browser.currentScene.createNode("fieldValue");
fieldValue323.name = "children";
let Transform324 = browser.currentScene.createNode("Transform");
Transform324.DEF = "l_upperarm_adjust";
Transform324.translation = new X3D.SFVec3f([0,0.0004203,-0.01665]);
Transform324.rotation = new X3D.SFRotation([1,0,0,0.119]);
Transform324.center = new X3D.SFVec3f([0.182,1.22,-0.047]);
let Shape325 = browser.currentScene.createNode("Shape");
let Appearance326 = browser.currentScene.createNode("Appearance");
let Material327 = browser.currentScene.createNode("Material");
Material327.USE = "WetShirtColor";
material = Material327;

appearance = Appearance326;

let IndexedFaceSet328 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet328.creaseAngle = 1.65;
IndexedFaceSet328.coordIndex = new X3D.MFInt32([2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
let Coordinate329 = browser.currentScene.createNode("Coordinate");
Coordinate329.point = new X3D.MFVec3f([0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
coord = Coordinate329;

geometry = IndexedFaceSet328;

Transform324YYY.child = new X3D.undefined();

Transform324ZZZ.child[0] = Shape325;

fieldValue323YYY.children = new X3D.MFNode();

fieldValue323ZZZ.children[0] = Transform324;

ProtoInstance322YYY.fieldValue = new X3D.MFNode();

ProtoInstance322ZZZ.fieldValue[0] = fieldValue323;

let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "name";
fieldValue330.value = "l_upperarm";
ProtoInstance322ZZZ.fieldValue[1] = fieldValue330;

fieldValue321YYY.children = new X3D.MFNode();

fieldValue321ZZZ.children[0] = ProtoInstance322;

let ProtoInstance331 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance331.DEF = "hanim_l_elbow";
ProtoInstance331.name = "Joint";
let fieldValue332 = browser.currentScene.createNode("fieldValue");
fieldValue332.name = "center";
fieldValue332.value = "0.196 1.07 -0.0518";
ProtoInstance331YYY.fieldValue = new X3D.MFNode();

ProtoInstance331ZZZ.fieldValue[0] = fieldValue332;

let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "children";
let ProtoInstance334 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance334.DEF = "hanim_l_forearm";
ProtoInstance334.name = "Segment";
let fieldValue335 = browser.currentScene.createNode("fieldValue");
fieldValue335.name = "children";
let Transform336 = browser.currentScene.createNode("Transform");
Transform336.DEF = "l_forearm_adjust";
Transform336.translation = new X3D.SFVec3f([0,0.003724,-0.0236]);
Transform336.rotation = new X3D.SFRotation([-1,0,0,0.1]);
Transform336.center = new X3D.SFVec3f([0.198,0.961,-0.0405]);
let Shape337 = browser.currentScene.createNode("Shape");
let Appearance338 = browser.currentScene.createNode("Appearance");
let Material339 = browser.currentScene.createNode("Material");
Material339.USE = "WetShirtColor";
material = Material339;

appearance = Appearance338;

let IndexedFaceSet340 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet340.creaseAngle = 1.75;
IndexedFaceSet340.coordIndex = new X3D.MFInt32([2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
let Coordinate341 = browser.currentScene.createNode("Coordinate");
Coordinate341.point = new X3D.MFVec3f([0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
coord = Coordinate341;

geometry = IndexedFaceSet340;

Transform336YYY.child = new X3D.undefined();

Transform336ZZZ.child[0] = Shape337;

fieldValue335YYY.children = new X3D.MFNode();

fieldValue335ZZZ.children[0] = Transform336;

ProtoInstance334YYY.fieldValue = new X3D.MFNode();

ProtoInstance334ZZZ.fieldValue[0] = fieldValue335;

let fieldValue342 = browser.currentScene.createNode("fieldValue");
fieldValue342.name = "name";
fieldValue342.value = "l_forearm";
ProtoInstance334ZZZ.fieldValue[1] = fieldValue342;

fieldValue333YYY.children = new X3D.MFNode();

fieldValue333ZZZ.children[0] = ProtoInstance334;

let ProtoInstance343 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance343.DEF = "hanim_l_wrist";
ProtoInstance343.name = "Joint";
let fieldValue344 = browser.currentScene.createNode("fieldValue");
fieldValue344.name = "center";
fieldValue344.value = "0.213 0.811 -0.0338";
ProtoInstance343YYY.fieldValue = new X3D.MFNode();

ProtoInstance343ZZZ.fieldValue[0] = fieldValue344;

let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "children";
let ProtoInstance346 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance346.DEF = "hanim_l_hand";
ProtoInstance346.name = "Segment";
let fieldValue347 = browser.currentScene.createNode("fieldValue");
fieldValue347.name = "children";
let Transform348 = browser.currentScene.createNode("Transform");
Transform348.DEF = "l_hand_adjust";
Transform348.translation = new X3D.SFVec3f([0,0.005142,-0.008662]);
Transform348.rotation = new X3D.SFRotation([-0.06361,-0.9967,0.04988,1.333]);
Transform348.center = new X3D.SFVec3f([0.213,0.811,-0.0338]);
let Shape349 = browser.currentScene.createNode("Shape");
let Appearance350 = browser.currentScene.createNode("Appearance");
let Material351 = browser.currentScene.createNode("Material");
Material351.DEF = "Skin_Color";
Material351.ambientIntensity = 0.25;
Material351.diffuseColor = new X3D.SFColor([0.749,0.601,0.462]);
material = Material351;

appearance = Appearance350;

let IndexedFaceSet352 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet352.creaseAngle = 1.48;
IndexedFaceSet352.coordIndex = new X3D.MFInt32([2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
let Coordinate353 = browser.currentScene.createNode("Coordinate");
Coordinate353.point = new X3D.MFVec3f([0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
coord = Coordinate353;

geometry = IndexedFaceSet352;

Transform348YYY.child = new X3D.undefined();

Transform348ZZZ.child[0] = Shape349;

fieldValue347YYY.children = new X3D.MFNode();

fieldValue347ZZZ.children[0] = Transform348;

ProtoInstance346YYY.fieldValue = new X3D.MFNode();

ProtoInstance346ZZZ.fieldValue[0] = fieldValue347;

let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "name";
fieldValue354.value = "l_hand";
ProtoInstance346ZZZ.fieldValue[1] = fieldValue354;

fieldValue345YYY.children = new X3D.MFNode();

fieldValue345ZZZ.children[0] = ProtoInstance346;

ProtoInstance343ZZZ.fieldValue[1] = fieldValue345;

let fieldValue355 = browser.currentScene.createNode("fieldValue");
fieldValue355.name = "name";
fieldValue355.value = "l_wrist";
ProtoInstance343ZZZ.fieldValue[2] = fieldValue355;

fieldValue333ZZZ.children[1] = ProtoInstance343;

ProtoInstance331ZZZ.fieldValue[1] = fieldValue333;

let fieldValue356 = browser.currentScene.createNode("fieldValue");
fieldValue356.name = "name";
fieldValue356.value = "l_elbow";
ProtoInstance331ZZZ.fieldValue[2] = fieldValue356;

fieldValue321ZZZ.children[1] = ProtoInstance331;

ProtoInstance319ZZZ.fieldValue[1] = fieldValue321;

let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "name";
fieldValue357.value = "l_shoulder";
ProtoInstance319ZZZ.fieldValue[2] = fieldValue357;

fieldValue203ZZZ.children[1] = ProtoInstance319;

let ProtoInstance358 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance358.DEF = "hanim_r_shoulder";
ProtoInstance358.name = "Joint";
let fieldValue359 = browser.currentScene.createNode("fieldValue");
fieldValue359.name = "center";
fieldValue359.value = "-0.167 1.36 -0.0458";
ProtoInstance358YYY.fieldValue = new X3D.MFNode();

ProtoInstance358ZZZ.fieldValue[0] = fieldValue359;

let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "children";
let ProtoInstance361 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance361.DEF = "hanim_r_upperarm";
ProtoInstance361.name = "Segment";
let fieldValue362 = browser.currentScene.createNode("fieldValue");
fieldValue362.name = "children";
let Transform363 = browser.currentScene.createNode("Transform");
Transform363.DEF = "r_upperarm_adjust";
Transform363.translation = new X3D.SFVec3f([0,0.000589,-0.01169]);
Transform363.rotation = new X3D.SFRotation([1,0,0,0.0836]);
Transform363.center = new X3D.SFVec3f([-0.182,1.22,-0.047]);
let Shape364 = browser.currentScene.createNode("Shape");
let Appearance365 = browser.currentScene.createNode("Appearance");
let Material366 = browser.currentScene.createNode("Material");
Material366.USE = "WetShirtColor";
material = Material366;

appearance = Appearance365;

let IndexedFaceSet367 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet367.creaseAngle = 1.53;
IndexedFaceSet367.coordIndex = new X3D.MFInt32([14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
let Coordinate368 = browser.currentScene.createNode("Coordinate");
Coordinate368.point = new X3D.MFVec3f([-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
coord = Coordinate368;

geometry = IndexedFaceSet367;

Transform363YYY.child = new X3D.undefined();

Transform363ZZZ.child[0] = Shape364;

fieldValue362YYY.children = new X3D.MFNode();

fieldValue362ZZZ.children[0] = Transform363;

ProtoInstance361YYY.fieldValue = new X3D.MFNode();

ProtoInstance361ZZZ.fieldValue[0] = fieldValue362;

let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "name";
fieldValue369.value = "r_upperarm";
ProtoInstance361ZZZ.fieldValue[1] = fieldValue369;

fieldValue360YYY.children = new X3D.MFNode();

fieldValue360ZZZ.children[0] = ProtoInstance361;

let ProtoInstance370 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance370.DEF = "hanim_r_elbow";
ProtoInstance370.name = "Joint";
let fieldValue371 = browser.currentScene.createNode("fieldValue");
fieldValue371.name = "center";
fieldValue371.value = "-0.192 1.07 -0.0498";
ProtoInstance370YYY.fieldValue = new X3D.MFNode();

ProtoInstance370ZZZ.fieldValue[0] = fieldValue371;

let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "children";
let ProtoInstance373 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance373.DEF = "hanim_r_forearm";
ProtoInstance373.name = "Segment";
let fieldValue374 = browser.currentScene.createNode("fieldValue");
fieldValue374.name = "children";
let Transform375 = browser.currentScene.createNode("Transform");
Transform375.DEF = "r_forearm_adjust";
Transform375.translation = new X3D.SFVec3f([0,0.003466,-0.01065]);
Transform375.rotation = new X3D.SFRotation([-1,0,0,0.1254]);
Transform375.center = new X3D.SFVec3f([-0.198,0.961,-0.0397]);
let Shape376 = browser.currentScene.createNode("Shape");
let Appearance377 = browser.currentScene.createNode("Appearance");
let Material378 = browser.currentScene.createNode("Material");
Material378.USE = "WetShirtColor";
material = Material378;

appearance = Appearance377;

let IndexedFaceSet379 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet379.creaseAngle = 1.73;
IndexedFaceSet379.coordIndex = new X3D.MFInt32([20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
let Coordinate380 = browser.currentScene.createNode("Coordinate");
Coordinate380.point = new X3D.MFVec3f([-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
coord = Coordinate380;

geometry = IndexedFaceSet379;

Transform375YYY.child = new X3D.undefined();

Transform375ZZZ.child[0] = Shape376;

fieldValue374YYY.children = new X3D.MFNode();

fieldValue374ZZZ.children[0] = Transform375;

ProtoInstance373YYY.fieldValue = new X3D.MFNode();

ProtoInstance373ZZZ.fieldValue[0] = fieldValue374;

let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "name";
fieldValue381.value = "r_forearm";
ProtoInstance373ZZZ.fieldValue[1] = fieldValue381;

fieldValue372YYY.children = new X3D.MFNode();

fieldValue372ZZZ.children[0] = ProtoInstance373;

let ProtoInstance382 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance382.DEF = "hanim_r_wrist";
ProtoInstance382.name = "Joint";
let fieldValue383 = browser.currentScene.createNode("fieldValue");
fieldValue383.name = "center";
fieldValue383.value = "-0.217 0.811 -0.0338";
ProtoInstance382YYY.fieldValue = new X3D.MFNode();

ProtoInstance382ZZZ.fieldValue[0] = fieldValue383;

let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "children";
let ProtoInstance385 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance385.DEF = "hanim_r_hand";
ProtoInstance385.name = "Segment";
let fieldValue386 = browser.currentScene.createNode("fieldValue");
fieldValue386.name = "children";
let Transform387 = browser.currentScene.createNode("Transform");
Transform387.DEF = "r_hand_adjust";
Transform387.rotation = new X3D.SFRotation([-0.09024,0.994,-0.0624,1.216]);
Transform387.center = new X3D.SFVec3f([-0.217,0.811,-0.0338]);
let Shape388 = browser.currentScene.createNode("Shape");
let Appearance389 = browser.currentScene.createNode("Appearance");
let Material390 = browser.currentScene.createNode("Material");
Material390.USE = "Skin_Color";
material = Material390;

appearance = Appearance389;

let IndexedFaceSet391 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet391.creaseAngle = 1.57;
IndexedFaceSet391.coordIndex = new X3D.MFInt32([10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
let Coordinate392 = browser.currentScene.createNode("Coordinate");
Coordinate392.point = new X3D.MFVec3f([-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
coord = Coordinate392;

geometry = IndexedFaceSet391;

Transform387YYY.child = new X3D.undefined();

Transform387ZZZ.child[0] = Shape388;

fieldValue386YYY.children = new X3D.MFNode();

fieldValue386ZZZ.children[0] = Transform387;

ProtoInstance385YYY.fieldValue = new X3D.MFNode();

ProtoInstance385ZZZ.fieldValue[0] = fieldValue386;

let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "name";
fieldValue393.value = "r_hand";
ProtoInstance385ZZZ.fieldValue[1] = fieldValue393;

fieldValue384YYY.children = new X3D.MFNode();

fieldValue384ZZZ.children[0] = ProtoInstance385;

ProtoInstance382ZZZ.fieldValue[1] = fieldValue384;

let fieldValue394 = browser.currentScene.createNode("fieldValue");
fieldValue394.name = "name";
fieldValue394.value = "r_wrist";
ProtoInstance382ZZZ.fieldValue[2] = fieldValue394;

fieldValue372ZZZ.children[1] = ProtoInstance382;

ProtoInstance370ZZZ.fieldValue[1] = fieldValue372;

let fieldValue395 = browser.currentScene.createNode("fieldValue");
fieldValue395.name = "name";
fieldValue395.value = "r_elbow";
ProtoInstance370ZZZ.fieldValue[2] = fieldValue395;

fieldValue360ZZZ.children[1] = ProtoInstance370;

ProtoInstance358ZZZ.fieldValue[1] = fieldValue360;

let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "name";
fieldValue396.value = "r_shoulder";
ProtoInstance358ZZZ.fieldValue[2] = fieldValue396;

fieldValue203ZZZ.children[2] = ProtoInstance358;

let ProtoInstance397 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance397.DEF = "hanim_vc4";
ProtoInstance397.name = "Joint";
let fieldValue398 = browser.currentScene.createNode("fieldValue");
fieldValue398.name = "center";
fieldValue398.value = "0 1.43 -0.0458";
ProtoInstance397YYY.fieldValue = new X3D.MFNode();

ProtoInstance397ZZZ.fieldValue[0] = fieldValue398;

let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "children";
let ProtoInstance400 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance400.DEF = "hanim_c4";
ProtoInstance400.name = "Segment";
let fieldValue401 = browser.currentScene.createNode("fieldValue");
fieldValue401.name = "children";
let Shape402 = browser.currentScene.createNode("Shape");
let Appearance403 = browser.currentScene.createNode("Appearance");
let Material404 = browser.currentScene.createNode("Material");
Material404.USE = "WetShirtColor";
material = Material404;

appearance = Appearance403;

let IndexedFaceSet405 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet405.DEF = "neck";
IndexedFaceSet405.creaseAngle = 1.91;
IndexedFaceSet405.coordIndex = new X3D.MFInt32([6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
let Coordinate406 = browser.currentScene.createNode("Coordinate");
Coordinate406.point = new X3D.MFVec3f([0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
coord = Coordinate406;

geometry = IndexedFaceSet405;

fieldValue401YYY.children = new X3D.MFNode();

fieldValue401ZZZ.children[0] = Shape402;

ProtoInstance400YYY.fieldValue = new X3D.MFNode();

ProtoInstance400ZZZ.fieldValue[0] = fieldValue401;

let fieldValue407 = browser.currentScene.createNode("fieldValue");
fieldValue407.name = "name";
fieldValue407.value = "c4";
ProtoInstance400ZZZ.fieldValue[1] = fieldValue407;

fieldValue399YYY.children = new X3D.MFNode();

fieldValue399ZZZ.children[0] = ProtoInstance400;

let ProtoInstance408 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance408.DEF = "hanim_skullbase";
ProtoInstance408.name = "Joint";
let fieldValue409 = browser.currentScene.createNode("fieldValue");
fieldValue409.name = "center";
fieldValue409.value = "0 1.54 -0.0409";
ProtoInstance408YYY.fieldValue = new X3D.MFNode();

ProtoInstance408ZZZ.fieldValue[0] = fieldValue409;

let fieldValue410 = browser.currentScene.createNode("fieldValue");
fieldValue410.name = "children";
let ProtoInstance411 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance411.DEF = "hanim_skull";
ProtoInstance411.name = "Segment";
let fieldValue412 = browser.currentScene.createNode("fieldValue");
fieldValue412.name = "children";
let Shape413 = browser.currentScene.createNode("Shape");
let Appearance414 = browser.currentScene.createNode("Appearance");
let Material415 = browser.currentScene.createNode("Material");
Material415.USE = "Skin_Color";
material = Material415;

appearance = Appearance414;

let IndexedFaceSet416 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet416.DEF = "headIFS";
IndexedFaceSet416.creaseAngle = 0.7854;
IndexedFaceSet416.colorIndex = new X3D.MFInt32([1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1]);
IndexedFaceSet416.coordIndex = new X3D.MFInt32([48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
let Color417 = browser.currentScene.createNode("Color");
Color417.color = new X3D.MFColor([0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902,0,0,0.502]);
color = Color417;

let Coordinate418 = browser.currentScene.createNode("Coordinate");
Coordinate418.DEF = "Face";
Coordinate418.point = new X3D.MFVec3f([0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
coord = Coordinate418;

geometry = IndexedFaceSet416;

fieldValue412YYY.children = new X3D.MFNode();

fieldValue412ZZZ.children[0] = Shape413;

let Transform419 = browser.currentScene.createNode("Transform");
Transform419.DEF = "maskAndSnorkel";
Transform419.translation = new X3D.SFVec3f([0,1.505,0.05]);
let Transform420 = browser.currentScene.createNode("Transform");
let Shape421 = browser.currentScene.createNode("Shape");
Shape421.DEF = "maskFrame";
let Appearance422 = browser.currentScene.createNode("Appearance");
let Material423 = browser.currentScene.createNode("Material");
Material423.DEF = "frameColor";
Material423.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material423;

appearance = Appearance422;

let IndexedFaceSet424 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet424.solid = False;
IndexedFaceSet424.creaseAngle = 1.45;
IndexedFaceSet424.coordIndex = new X3D.MFInt32([0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
let Coordinate425 = browser.currentScene.createNode("Coordinate");
Coordinate425.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
coord = Coordinate425;

geometry = IndexedFaceSet424;

Transform420YYY.child = new X3D.undefined();

Transform420ZZZ.child[0] = Shape421;

Transform419YYY.children = new X3D.MFNode();

Transform419ZZZ.children[0] = Transform420;

let Transform426 = browser.currentScene.createNode("Transform");
Transform426.DEF = "snorkelHoldRing";
Transform426.translation = new X3D.SFVec3f([0.075,0.075,-0.02]);
let Shape427 = browser.currentScene.createNode("Shape");
let Appearance428 = browser.currentScene.createNode("Appearance");
let Material429 = browser.currentScene.createNode("Material");
Material429.USE = "frameColor";
material = Material429;

appearance = Appearance428;

let Cylinder430 = browser.currentScene.createNode("Cylinder");
Cylinder430.height = 0.003;
Cylinder430.radius = 0.015;
geometry = Cylinder430;

Transform426YYY.child = new X3D.undefined();

Transform426ZZZ.child[0] = Shape427;

Transform419ZZZ.children[1] = Transform426;

let Group431 = browser.currentScene.createNode("Group");
Group431.DEF = "snorkel";
let Transform432 = browser.currentScene.createNode("Transform");
Transform432.translation = new X3D.SFVec3f([0,-0.02,0]);
let Transform433 = browser.currentScene.createNode("Transform");
Transform433.translation = new X3D.SFVec3f([0.035,-0.07,-0.02]);
Transform433.scale = new X3D.SFVec3f([0.9,0.9,0.9]);
let Shape434 = browser.currentScene.createNode("Shape");
let Appearance435 = browser.currentScene.createNode("Appearance");
let Material436 = browser.currentScene.createNode("Material");
Material436.DEF = "snorkelTube";
Material436.diffuseColor = new X3D.SFColor([0.678,1,0.184]);
Material436.transparency = 0.4;
material = Material436;

appearance = Appearance435;

let Extrusion437 = browser.currentScene.createNode("Extrusion");
Extrusion437.crossSection = new X3D.MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion437.spine = new X3D.MFVec3f([-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03]);
geometry = Extrusion437;

Transform433YYY.child = new X3D.undefined();

Transform433ZZZ.child[0] = Shape434;

Transform432YYY.children = new X3D.MFNode();

Transform432ZZZ.children[0] = Transform433;

let Transform438 = browser.currentScene.createNode("Transform");
Transform438.translation = new X3D.SFVec3f([0.01,-0.04,-0.02]);
Transform438.rotation = new X3D.SFRotation([0,0,1,1.57]);
Transform438.scale = new X3D.SFVec3f([0.9,0.9,0.9]);
let Shape439 = browser.currentScene.createNode("Shape");
let Appearance440 = browser.currentScene.createNode("Appearance");
let Material441 = browser.currentScene.createNode("Material");
Material441.DEF = "Mouthpiece";
Material441.diffuseColor = new X3D.SFColor([0.678,1,0.8]);
Material441.transparency = 0.4;
material = Material441;

appearance = Appearance440;

let Extrusion442 = browser.currentScene.createNode("Extrusion");
Extrusion442.crossSection = new X3D.MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion442.spine = new X3D.MFVec3f([-0.01,-0.03,0,0,0,0,0.02,0.01,0]);
geometry = Extrusion442;

Transform438YYY.child = new X3D.undefined();

Transform438ZZZ.child[0] = Shape439;

Transform432ZZZ.children[1] = Transform438;

let Transform443 = browser.currentScene.createNode("Transform");
Transform443.translation = new X3D.SFVec3f([0.005,-0.01,-0.02]);
Transform443.rotation = new X3D.SFRotation([0,0,1,-0.85]);
Transform443.scale = new X3D.SFVec3f([0.9,0.9,0.9]);
let Shape444 = browser.currentScene.createNode("Shape");
let Appearance445 = browser.currentScene.createNode("Appearance");
let Material446 = browser.currentScene.createNode("Material");
Material446.USE = "Mouthpiece";
material = Material446;

appearance = Appearance445;

let Extrusion447 = browser.currentScene.createNode("Extrusion");
Extrusion447.crossSection = new X3D.MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013]);
Extrusion447.spine = new X3D.MFVec3f([-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0]);
geometry = Extrusion447;

Transform443YYY.child = new X3D.undefined();

Transform443ZZZ.child[0] = Shape444;

Transform432ZZZ.children[2] = Transform443;

Group431YYY.children = new X3D.MFNode();

Group431ZZZ.children[0] = Transform432;

Transform419ZZZ.children[2] = Group431;

let Transform448 = browser.currentScene.createNode("Transform");
let Shape449 = browser.currentScene.createNode("Shape");
Shape449.DEF = "maskLensR";
let Appearance450 = browser.currentScene.createNode("Appearance");
let Material451 = browser.currentScene.createNode("Material");
Material451.DEF = "plastic";
Material451.diffuseColor = new X3D.SFColor([0.941,0.973,1]);
Material451.transparency = 0.8;
material = Material451;

appearance = Appearance450;

let IndexedFaceSet452 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet452.solid = False;
IndexedFaceSet452.creaseAngle = 1.45;
IndexedFaceSet452.coordIndex = new X3D.MFInt32([12,1314,15,16,17,18,12,-1]);
let Coordinate453 = browser.currentScene.createNode("Coordinate");
Coordinate453.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
coord = Coordinate453;

geometry = IndexedFaceSet452;

Transform448YYY.child = new X3D.undefined();

Transform448ZZZ.child[0] = Shape449;

Transform419ZZZ.children[3] = Transform448;

let Transform454 = browser.currentScene.createNode("Transform");
let Shape455 = browser.currentScene.createNode("Shape");
Shape455.DEF = "maskLensL";
let Appearance456 = browser.currentScene.createNode("Appearance");
let Material457 = browser.currentScene.createNode("Material");
Material457.USE = "plastic";
material = Material457;

appearance = Appearance456;

let IndexedFaceSet458 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet458.solid = False;
IndexedFaceSet458.creaseAngle = 1.45;
IndexedFaceSet458.coordIndex = new X3D.MFInt32([19,20,21,22,23,24,25,19,-1]);
let Coordinate459 = browser.currentScene.createNode("Coordinate");
Coordinate459.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0]);
coord = Coordinate459;

geometry = IndexedFaceSet458;

Transform454YYY.child = new X3D.undefined();

Transform454ZZZ.child[0] = Shape455;

Transform419ZZZ.children[4] = Transform454;

let Transform460 = browser.currentScene.createNode("Transform");
let Shape461 = browser.currentScene.createNode("Shape");
Shape461.DEF = "nose";
let Appearance462 = browser.currentScene.createNode("Appearance");
let Material463 = browser.currentScene.createNode("Material");
Material463.DEF = "plasticFit";
Material463.diffuseColor = new X3D.SFColor([0.678,1,0.184]);
Material463.transparency = 0.7;
material = Material463;

appearance = Appearance462;

let IndexedFaceSet464 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet464.solid = False;
IndexedFaceSet464.creaseAngle = 1.45;
IndexedFaceSet464.coordIndex = new X3D.MFInt32([0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
let Coordinate465 = browser.currentScene.createNode("Coordinate");
Coordinate465.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
coord = Coordinate465;

geometry = IndexedFaceSet464;

Transform460YYY.child = new X3D.undefined();

Transform460ZZZ.child[0] = Shape461;

Transform419ZZZ.children[5] = Transform460;

let Transform466 = browser.currentScene.createNode("Transform");
let Shape467 = browser.currentScene.createNode("Shape");
Shape467.DEF = "faceFit";
let Appearance468 = browser.currentScene.createNode("Appearance");
let Material469 = browser.currentScene.createNode("Material");
Material469.USE = "plasticFit";
material = Material469;

appearance = Appearance468;

let IndexedFaceSet470 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet470.solid = False;
IndexedFaceSet470.creaseAngle = 1.45;
IndexedFaceSet470.coordIndex = new X3D.MFInt32([1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
let Coordinate471 = browser.currentScene.createNode("Coordinate");
Coordinate471.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02]);
coord = Coordinate471;

geometry = IndexedFaceSet470;

Transform466YYY.child = new X3D.undefined();

Transform466ZZZ.child[0] = Shape467;

Transform419ZZZ.children[6] = Transform466;

let Transform472 = browser.currentScene.createNode("Transform");
let Shape473 = browser.currentScene.createNode("Shape");
Shape473.DEF = "belt";
let Appearance474 = browser.currentScene.createNode("Appearance");
let Material475 = browser.currentScene.createNode("Material");
Material475.USE = "plastic";
material = Material475;

appearance = Appearance474;

let IndexedFaceSet476 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet476.solid = False;
IndexedFaceSet476.creaseAngle = 1.45;
IndexedFaceSet476.coordIndex = new X3D.MFInt32([3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
let Coordinate477 = browser.currentScene.createNode("Coordinate");
Coordinate477.point = new X3D.MFVec3f([0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175]);
coord = Coordinate477;

geometry = IndexedFaceSet476;

Transform472YYY.child = new X3D.undefined();

Transform472ZZZ.child[0] = Shape473;

Transform419ZZZ.children[7] = Transform472;

fieldValue412ZZZ.children[1] = Transform419;

let Transform478 = browser.currentScene.createNode("Transform");
Transform478.DEF = "mouthpiece";
Transform478.translation = new X3D.SFVec3f([0,1.508,0.05]);
Transform478.rotation = new X3D.SFRotation([0.86,-0.58,-0.58,2.09]);
let Transform479 = browser.currentScene.createNode("Transform");
Transform479.translation = new X3D.SFVec3f([0,0.0018,0]);
let Shape480 = browser.currentScene.createNode("Shape");
let Appearance481 = browser.currentScene.createNode("Appearance");
let Material482 = browser.currentScene.createNode("Material");
Material482.DEF = "gray";
Material482.ambientIntensity = 0.3;
Material482.diffuseColor = new X3D.SFColor([0.9,0.9,0.89]);
Material482.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
Material482.shininess = 0.1;
material = Material482;

appearance = Appearance481;

let Cylinder483 = browser.currentScene.createNode("Cylinder");
Cylinder483.height = 0.006;
Cylinder483.radius = 0.015;
geometry = Cylinder483;

Transform479YYY.child = new X3D.undefined();

Transform479ZZZ.child[0] = Shape480;

Transform478YYY.children = new X3D.MFNode();

Transform478ZZZ.children[0] = Transform479;

let Transform484 = browser.currentScene.createNode("Transform");
let Shape485 = browser.currentScene.createNode("Shape");
let Appearance486 = browser.currentScene.createNode("Appearance");
let Material487 = browser.currentScene.createNode("Material");
Material487.DEF = "black";
Material487.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material487;

appearance = Appearance486;

let Cone488 = browser.currentScene.createNode("Cone");
Cone488.height = 0.01;
Cone488.bottomRadius = 0.03;
geometry = Cone488;

Transform484YYY.child = new X3D.undefined();

Transform484ZZZ.child[0] = Shape485;

Transform478ZZZ.children[1] = Transform484;

let Transform489 = browser.currentScene.createNode("Transform");
Transform489.translation = new X3D.SFVec3f([0,-0.015,0]);
let Shape490 = browser.currentScene.createNode("Shape");
let Appearance491 = browser.currentScene.createNode("Appearance");
let Material492 = browser.currentScene.createNode("Material");
Material492.USE = "black";
material = Material492;

appearance = Appearance491;

let Cylinder493 = browser.currentScene.createNode("Cylinder");
Cylinder493.height = 0.02;
Cylinder493.radius = 0.03;
geometry = Cylinder493;

Transform489YYY.child = new X3D.undefined();

Transform489ZZZ.child[0] = Shape490;

Transform478ZZZ.children[2] = Transform489;

let Transform494 = browser.currentScene.createNode("Transform");
Transform494.translation = new X3D.SFVec3f([0,-0.025,0]);
let Shape495 = browser.currentScene.createNode("Shape");
let Appearance496 = browser.currentScene.createNode("Appearance");
let Material497 = browser.currentScene.createNode("Material");
Material497.USE = "black";
material = Material497;

appearance = Appearance496;

let Cylinder498 = browser.currentScene.createNode("Cylinder");
Cylinder498.height = 0.02;
Cylinder498.radius = 0.015;
geometry = Cylinder498;

Transform494YYY.child = new X3D.undefined();

Transform494ZZZ.child[0] = Shape495;

Transform478ZZZ.children[3] = Transform494;

let Transform499 = browser.currentScene.createNode("Transform");
Transform499.translation = new X3D.SFVec3f([0,-0.04,0]);
Transform499.rotation = new X3D.SFRotation([0,0,1,0.9]);
let Shape500 = browser.currentScene.createNode("Shape");
Shape500.DEF = "mouthpiecePlastic";
let Appearance501 = browser.currentScene.createNode("Appearance");
let Material502 = browser.currentScene.createNode("Material");
Material502.diffuseColor = new X3D.SFColor([1,1,1]);
Material502.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material502;

appearance = Appearance501;

let Box503 = browser.currentScene.createNode("Box");
Box503.size = new X3D.SFVec3f([0.002,0.03,0.018]);
geometry = Box503;

Transform499YYY.child = new X3D.undefined();

Transform499ZZZ.child[0] = Shape500;

Transform478ZZZ.children[4] = Transform499;

let Transform504 = browser.currentScene.createNode("Transform");
Transform504.translation = new X3D.SFVec3f([0,-0.04,0]);
Transform504.rotation = new X3D.SFRotation([0,0,1,-0.9]);
let Shape505 = browser.currentScene.createNode("Shape");
Shape505.USE = "mouthpiecePlastic";
Transform504YYY.child = new X3D.undefined();

Transform504ZZZ.child[0] = Shape505;

Transform478ZZZ.children[5] = Transform504;

let Transform506 = browser.currentScene.createNode("Transform");
Transform506.translation = new X3D.SFVec3f([0,-0.015,0.03]);
Transform506.rotation = new X3D.SFRotation([1,0,0,1.57]);
let Shape507 = browser.currentScene.createNode("Shape");
let Appearance508 = browser.currentScene.createNode("Appearance");
let Material509 = browser.currentScene.createNode("Material");
Material509.USE = "gray";
material = Material509;

appearance = Appearance508;

let Cylinder510 = browser.currentScene.createNode("Cylinder");
Cylinder510.height = 0.02;
Cylinder510.radius = 0.0075;
geometry = Cylinder510;

Transform506YYY.child = new X3D.undefined();

Transform506ZZZ.child[0] = Shape507;

Transform478ZZZ.children[6] = Transform506;

let Transform511 = browser.currentScene.createNode("Transform");
Transform511.DEF = "airTube";
Transform511.translation = new X3D.SFVec3f([0,-0.02,0.055]);
Transform511.rotation = new X3D.SFRotation([0,1,0,1.57]);
Transform511.scale = new X3D.SFVec3f([0.7,0.7,0.7]);
let Transform512 = browser.currentScene.createNode("Transform");
Transform512.rotation = new X3D.SFRotation([-0.21,0.21,-0.95,4.67]);
let Shape513 = browser.currentScene.createNode("Shape");
let Appearance514 = browser.currentScene.createNode("Appearance");
let Material515 = browser.currentScene.createNode("Material");
Material515.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material515;

appearance = Appearance514;

let Extrusion516 = browser.currentScene.createNode("Extrusion");
Extrusion516.crossSection = new X3D.MFVec2f([0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013]);
Extrusion516.spine = new X3D.MFVec3f([0.005,-0.03,0,-0.01,0.02,0,-0.03,0.08,0,-0.05,0.14,0,-0.08,0.19,0,-0.1,0.22,0,-0.12,0.25,0,-0.15,0.27,0,-0.18,0.28,0,-0.21,0.29,0,-0.26,0.28,0,-0.28,0.26,0,-0.305,0.23,0,-0.32,0.2,0,-0.34,0.16,0,-0.35,0.12,0,-0.37,0.04,0,-0.385,0,0,-0.39,-0.07,0]);
geometry = Extrusion516;

Transform512YYY.child = new X3D.undefined();

Transform512ZZZ.child[0] = Shape513;

Transform511YYY.children = new X3D.MFNode();

Transform511ZZZ.children[0] = Transform512;

Transform478ZZZ.children[7] = Transform511;

fieldValue412ZZZ.children[2] = Transform478;

let Transform517 = browser.currentScene.createNode("Transform");
Transform517.DEF = "Bubbles";
Transform517.translation = new X3D.SFVec3f([0,1.508,0.05]);
Transform517.scale = new X3D.SFVec3f([0.35,0.35,0.35]);
let Group518 = browser.currentScene.createNode("Group");
Group518.DEF = "Bubble";
let TimeSensor519 = browser.currentScene.createNode("TimeSensor");
TimeSensor519.DEF = "BubbleClock";
TimeSensor519.cycleInterval = 6;
TimeSensor519.loop = True;
Group518YYY.children = new X3D.MFNode();

Group518ZZZ.children[0] = TimeSensor519;

let PositionInterpolator520 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator520.DEF = "BubblePath1";
PositionInterpolator520.key = new X3D.MFFloat([0,0.5,0.8,0.9,1]);
PositionInterpolator520.keyValue = new X3D.MFVec3f([0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509]);
Group518ZZZ.children[1] = PositionInterpolator520;

let PositionInterpolator521 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator521.DEF = "BubblePath2";
PositionInterpolator521.key = new X3D.MFFloat([0,0.3,0.64,0.85,1]);
PositionInterpolator521.keyValue = new X3D.MFVec3f([0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.03848348,1.989,1.098373]);
Group518ZZZ.children[2] = PositionInterpolator521;

let PositionInterpolator522 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator522.DEF = "BubblePath3";
PositionInterpolator522.key = new X3D.MFFloat([0,0.1,0.45,0.7,1]);
PositionInterpolator522.keyValue = new X3D.MFVec3f([0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734]);
Group518ZZZ.children[3] = PositionInterpolator522;

let PositionInterpolator523 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator523.DEF = "BubblePath4";
PositionInterpolator523.key = new X3D.MFFloat([0,0.5,0.6,0.8,1]);
PositionInterpolator523.keyValue = new X3D.MFVec3f([0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349]);
Group518ZZZ.children[4] = PositionInterpolator523;

let PositionInterpolator524 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator524.DEF = "BubblePath5";
PositionInterpolator524.key = new X3D.MFFloat([0,0.25,0.35,0.65,1]);
PositionInterpolator524.keyValue = new X3D.MFVec3f([0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1]);
Group518ZZZ.children[5] = PositionInterpolator524;

let PositionInterpolator525 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator525.DEF = "BubblePath6";
PositionInterpolator525.key = new X3D.MFFloat([0,0.15,0.22235,0.55565,1]);
PositionInterpolator525.keyValue = new X3D.MFVec3f([0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14]);
Group518ZZZ.children[6] = PositionInterpolator525;

let PositionInterpolator526 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator526.DEF = "BubblePath7";
PositionInterpolator526.key = new X3D.MFFloat([0,0.2425,0.4535,0.6775,1]);
PositionInterpolator526.keyValue = new X3D.MFVec3f([0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12]);
Group518ZZZ.children[7] = PositionInterpolator526;

let PositionInterpolator527 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator527.DEF = "BubblePath8";
PositionInterpolator527.key = new X3D.MFFloat([0,0.1125,0.5535,0.97865,1]);
PositionInterpolator527.keyValue = new X3D.MFVec3f([0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86]);
Group518ZZZ.children[8] = PositionInterpolator527;

let PositionInterpolator528 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator528.DEF = "BubblePath9";
PositionInterpolator528.key = new X3D.MFFloat([0,0.0025,0.035,0.65,1]);
PositionInterpolator528.keyValue = new X3D.MFVec3f([0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545]);
Group518ZZZ.children[9] = PositionInterpolator528;

let PositionInterpolator529 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator529.DEF = "BubblePath10";
PositionInterpolator529.key = new X3D.MFFloat([0,0.00025,0.035,0.6895,1]);
PositionInterpolator529.keyValue = new X3D.MFVec3f([0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1]);
Group518ZZZ.children[10] = PositionInterpolator529;

let Transform530 = browser.currentScene.createNode("Transform");
let Transform531 = browser.currentScene.createNode("Transform");
Transform531.DEF = "bubble1";
Transform531.translation = new X3D.SFVec3f([0.5045,0.5045,0.5045]);
let Shape532 = browser.currentScene.createNode("Shape");
let Appearance533 = browser.currentScene.createNode("Appearance");
Appearance533.DEF = "BubbleAppearance";
let Material534 = browser.currentScene.createNode("Material");
Material534.diffuseColor = new X3D.SFColor([1,1,1]);
Material534.transparency = 0.8;
material = Material534;

appearance = Appearance533;

let Sphere535 = browser.currentScene.createNode("Sphere");
Sphere535.radius = 0.025;
geometry = Sphere535;

Transform531YYY.child = new X3D.undefined();

Transform531ZZZ.child[0] = Shape532;

Transform530YYY.children = new X3D.MFNode();

Transform530ZZZ.children[0] = Transform531;

let Transform536 = browser.currentScene.createNode("Transform");
Transform536.DEF = "bubble2";
Transform536.translation = new X3D.SFVec3f([0.2106863,0.4106863,0.2724412]);
let Shape537 = browser.currentScene.createNode("Shape");
let Appearance538 = browser.currentScene.createNode("Appearance");
Appearance538.USE = "BubbleAppearance";
appearance = Appearance538;

let Sphere539 = browser.currentScene.createNode("Sphere");
Sphere539.radius = 0.055;
geometry = Sphere539;

Transform536YYY.child = new X3D.undefined();

Transform536ZZZ.child[0] = Shape537;

Transform530ZZZ.children[1] = Transform536;

let Transform540 = browser.currentScene.createNode("Transform");
Transform540.DEF = "bubble3";
Transform540.translation = new X3D.SFVec3f([0.4525714,0.5188095,0.005175238]);
let Shape541 = browser.currentScene.createNode("Shape");
let Appearance542 = browser.currentScene.createNode("Appearance");
Appearance542.USE = "BubbleAppearance";
appearance = Appearance542;

let Sphere543 = browser.currentScene.createNode("Sphere");
Sphere543.radius = 0.065;
geometry = Sphere543;

Transform540YYY.child = new X3D.undefined();

Transform540ZZZ.child[0] = Shape541;

Transform530ZZZ.children[2] = Transform540;

let Transform544 = browser.currentScene.createNode("Transform");
Transform544.DEF = "bubble4";
Transform544.translation = new X3D.SFVec3f([0.3363333,0.3363333,0.003363333]);
let Shape545 = browser.currentScene.createNode("Shape");
let Appearance546 = browser.currentScene.createNode("Appearance");
Appearance546.USE = "BubbleAppearance";
appearance = Appearance546;

let Sphere547 = browser.currentScene.createNode("Sphere");
Sphere547.radius = 0.015;
geometry = Sphere547;

Transform544YYY.child = new X3D.undefined();

Transform544ZZZ.child[0] = Shape545;

Transform530ZZZ.children[3] = Transform544;

let Transform548 = browser.currentScene.createNode("Transform");
Transform548.DEF = "bubble5";
Transform548.translation = new X3D.SFVec3f([0.5863334,0.5863334,0.005863333]);
let Shape549 = browser.currentScene.createNode("Shape");
let Appearance550 = browser.currentScene.createNode("Appearance");
Appearance550.USE = "BubbleAppearance";
appearance = Appearance550;

let Sphere551 = browser.currentScene.createNode("Sphere");
Sphere551.radius = 0.075;
geometry = Sphere551;

Transform548YYY.child = new X3D.undefined();

Transform548ZZZ.child[0] = Shape549;

Transform530ZZZ.children[4] = Transform548;

let Transform552 = browser.currentScene.createNode("Transform");
Transform552.DEF = "bubble6";
Transform552.translation = new X3D.SFVec3f([0.4283297,0.7013068,0.005550557]);
let Shape553 = browser.currentScene.createNode("Shape");
let Appearance554 = browser.currentScene.createNode("Appearance");
Appearance554.USE = "BubbleAppearance";
appearance = Appearance554;

let Sphere555 = browser.currentScene.createNode("Sphere");
Sphere555.radius = 0.005;
geometry = Sphere555;

Transform552YYY.child = new X3D.undefined();

Transform552ZZZ.child[0] = Shape553;

Transform530ZZZ.children[5] = Transform552;

let Transform556 = browser.currentScene.createNode("Transform");
Transform556.DEF = "bubble7";
Transform556.translation = new X3D.SFVec3f([0.4180911,0.3263393,0.004821982]);
let Shape557 = browser.currentScene.createNode("Shape");
let Appearance558 = browser.currentScene.createNode("Appearance");
Appearance558.USE = "BubbleAppearance";
appearance = Appearance558;

let Sphere559 = browser.currentScene.createNode("Sphere");
Sphere559.radius = 0.035;
geometry = Sphere559;

Transform556YYY.child = new X3D.undefined();

Transform556ZZZ.child[0] = Shape557;

Transform530ZZZ.children[6] = Transform556;

let Transform560 = browser.currentScene.createNode("Transform");
Transform560.DEF = "bubble8";
Transform560.translation = new X3D.SFVec3f([0.3483992,0.245207,0.003435547]);
let Shape561 = browser.currentScene.createNode("Shape");
let Appearance562 = browser.currentScene.createNode("Appearance");
Appearance562.USE = "BubbleAppearance";
appearance = Appearance562;

let Sphere563 = browser.currentScene.createNode("Sphere");
Sphere563.radius = 0.05;
geometry = Sphere563;

Transform560YYY.child = new X3D.undefined();

Transform560ZZZ.child[0] = Shape561;

Transform530ZZZ.children[7] = Transform560;

let Transform564 = browser.currentScene.createNode("Transform");
Transform564.DEF = "bubble9";
Transform564.translation = new X3D.SFVec3f([0.5570159,0.3296293,0.006087967]);
let Shape565 = browser.currentScene.createNode("Shape");
let Appearance566 = browser.currentScene.createNode("Appearance");
Appearance566.USE = "BubbleAppearance";
appearance = Appearance566;

let Sphere567 = browser.currentScene.createNode("Sphere");
Sphere567.radius = 0.045;
geometry = Sphere567;

Transform564YYY.child = new X3D.undefined();

Transform564ZZZ.child[0] = Shape565;

Transform530ZZZ.children[8] = Transform564;

let Transform568 = browser.currentScene.createNode("Transform");
Transform568.DEF = "bubble10";
Transform568.translation = new X3D.SFVec3f([0.5322176,0.5852069,0.006451022]);
let Shape569 = browser.currentScene.createNode("Shape");
let Appearance570 = browser.currentScene.createNode("Appearance");
Appearance570.USE = "BubbleAppearance";
appearance = Appearance570;

let Sphere571 = browser.currentScene.createNode("Sphere");
Sphere571.radius = 0.035;
geometry = Sphere571;

Transform568YYY.child = new X3D.undefined();

Transform568ZZZ.child[0] = Shape569;

Transform530ZZZ.children[9] = Transform568;

Group518ZZZ.children[11] = Transform530;

Transform517YYY.children = new X3D.MFNode();

Transform517ZZZ.children[0] = Group518;

fieldValue412ZZZ.children[3] = Transform517;

ProtoInstance411YYY.fieldValue = new X3D.MFNode();

ProtoInstance411ZZZ.fieldValue[0] = fieldValue412;

let fieldValue572 = browser.currentScene.createNode("fieldValue");
fieldValue572.name = "name";
fieldValue572.value = "skull";
ProtoInstance411ZZZ.fieldValue[1] = fieldValue572;

fieldValue410YYY.children = new X3D.MFNode();

fieldValue410ZZZ.children[0] = ProtoInstance411;

ProtoInstance408ZZZ.fieldValue[1] = fieldValue410;

let fieldValue573 = browser.currentScene.createNode("fieldValue");
fieldValue573.name = "name";
fieldValue573.value = "skullbase";
ProtoInstance408ZZZ.fieldValue[2] = fieldValue573;

fieldValue399ZZZ.children[1] = ProtoInstance408;

ProtoInstance397ZZZ.fieldValue[1] = fieldValue399;

let fieldValue574 = browser.currentScene.createNode("fieldValue");
fieldValue574.name = "name";
fieldValue574.value = "vc4";
ProtoInstance397ZZZ.fieldValue[2] = fieldValue574;

fieldValue203ZZZ.children[3] = ProtoInstance397;

ProtoInstance201ZZZ.fieldValue[1] = fieldValue203;

let fieldValue575 = browser.currentScene.createNode("fieldValue");
fieldValue575.name = "name";
fieldValue575.value = "vl1";
ProtoInstance201ZZZ.fieldValue[2] = fieldValue575;

fieldValue94ZZZ.children[4] = ProtoInstance201;

ProtoInstance92ZZZ.fieldValue[1] = fieldValue94;

let fieldValue576 = browser.currentScene.createNode("fieldValue");
fieldValue576.name = "name";
fieldValue576.value = "humanoid_root";
ProtoInstance92ZZZ.fieldValue[2] = fieldValue576;

fieldValue91YYY.children = new X3D.MFNode();

fieldValue91ZZZ.children[0] = ProtoInstance92;

ProtoInstance90YYY.fieldValue = new X3D.MFNode();

ProtoInstance90ZZZ.fieldValue[0] = fieldValue91;

Transform88ZZZ.children[1] = ProtoInstance90;

Transform87YYY.children = new X3D.MFNode();

Transform87ZZZ.children[0] = Transform88;

Group86YYY.children = new X3D.MFNode();

Group86ZZZ.children[0] = Transform87;

Group80ZZZ.children[5] = Group86;

LOD79YYY.children = new X3D.MFNode();

LOD79ZZZ.children[0] = Group80;

browser.currentScene.children[9] = LOD79;

let Script577 = browser.currentScene.createNode("Script");
Script577.DEF = "finWarpScript";
Script578.getField("set_rotationL")Script577YYY.field = new X3D.MFNode();

Script579.getField("set_rotationR")Script577YYY.field = new X3D.MFNode();

Script580.getField("fin_warpL")Script577YYY.field = new X3D.MFNode();

Script581.getField("fin_warpR")Script577YYY.field = new X3D.MFNode();


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
browser.currentScene.children[10] = Script577;

let Group582 = browser.currentScene.createNode("Group");
Group582.DEF = "Animations";
let Group583 = browser.currentScene.createNode("Group");
Group583.DEF = "Dive_Animation";
let OrientationInterpolator584 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator584.DEF = "r_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator584.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator584.keyValue = new X3D.MFRotation([1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]);
Group583YYY.children = new X3D.MFNode();

Group583ZZZ.children[0] = OrientationInterpolator584;

let OrientationInterpolator585 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator585.DEF = "r_knee_RotationInterpolator_BasicDive";
OrientationInterpolator585.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator585.keyValue = new X3D.MFRotation([1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]);
Group583ZZZ.children[1] = OrientationInterpolator585;

let OrientationInterpolator586 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator586.DEF = "r_hip_RotationInterpolator_BasicDive";
OrientationInterpolator586.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator586.keyValue = new X3D.MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group583ZZZ.children[2] = OrientationInterpolator586;

let OrientationInterpolator587 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator587.DEF = "l_ankle_RotationInterpolator_BasicDive";
OrientationInterpolator587.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator587.keyValue = new X3D.MFRotation([1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]);
Group583ZZZ.children[3] = OrientationInterpolator587;

let OrientationInterpolator588 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator588.DEF = "l_knee_RotationInterpolator_BasicDive";
OrientationInterpolator588.key = new X3D.MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator588.keyValue = new X3D.MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group583ZZZ.children[4] = OrientationInterpolator588;

let OrientationInterpolator589 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator589.DEF = "l_hip_RotationInterpolator_BasicDive";
OrientationInterpolator589.key = new X3D.MFFloat([0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator589.keyValue = new X3D.MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group583ZZZ.children[5] = OrientationInterpolator589;

let OrientationInterpolator590 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator590.DEF = "lower_body_RotationInterpolator_BasicDive";
OrientationInterpolator590.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator590.keyValue = new X3D.MFRotation([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group583ZZZ.children[6] = OrientationInterpolator590;

let OrientationInterpolator591 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator591.DEF = "r_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator591.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator591.keyValue = new X3D.MFRotation([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group583ZZZ.children[7] = OrientationInterpolator591;

let OrientationInterpolator592 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator592.DEF = "r_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator592.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator592.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group583ZZZ.children[8] = OrientationInterpolator592;

let OrientationInterpolator593 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator593.DEF = "r_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator593.key = new X3D.MFFloat([0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator593.keyValue = new X3D.MFRotation([0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group583ZZZ.children[9] = OrientationInterpolator593;

let OrientationInterpolator594 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator594.DEF = "l_wrist_RotationInterpolator_BasicDive";
OrientationInterpolator594.key = new X3D.MFFloat([0,0.32,0.64,0.88,1]);
OrientationInterpolator594.keyValue = new X3D.MFRotation([0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]);
Group583ZZZ.children[10] = OrientationInterpolator594;

let OrientationInterpolator595 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator595.DEF = "l_elbow_RotationInterpolator_BasicDive";
OrientationInterpolator595.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator595.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
Group583ZZZ.children[11] = OrientationInterpolator595;

let OrientationInterpolator596 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator596.DEF = "l_shoulder_RotationInterpolator_BasicDive";
OrientationInterpolator596.key = new X3D.MFFloat([0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator596.keyValue = new X3D.MFRotation([0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]);
Group583ZZZ.children[12] = OrientationInterpolator596;

let OrientationInterpolator597 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator597.DEF = "head_RotationInterpolator_BasicDive";
OrientationInterpolator597.key = new X3D.MFFloat([0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator597.keyValue = new X3D.MFRotation([-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]);
Group583ZZZ.children[13] = OrientationInterpolator597;

let OrientationInterpolator598 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator598.DEF = "neck_RotationInterpolator_BasicDive";
OrientationInterpolator598.key = new X3D.MFFloat([0,1]);
OrientationInterpolator598.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group583ZZZ.children[14] = OrientationInterpolator598;

let OrientationInterpolator599 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator599.DEF = "upper_body_RotationInterpolator_BasicDive";
OrientationInterpolator599.key = new X3D.MFFloat([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator599.keyValue = new X3D.MFRotation([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group583ZZZ.children[15] = OrientationInterpolator599;

let OrientationInterpolator600 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator600.DEF = "whole_body_RotationInterpolator_BasicDive";
OrientationInterpolator600.key = new X3D.MFFloat([0,1]);
OrientationInterpolator600.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group583ZZZ.children[16] = OrientationInterpolator600;

let PositionInterpolator601 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator601.DEF = "whole_body_TranslationInterpolator_BasicDive";
PositionInterpolator601.key = new X3D.MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator601.keyValue = new X3D.MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group583ZZZ.children[17] = PositionInterpolator601;

let TimeSensor602 = browser.currentScene.createNode("TimeSensor");
TimeSensor602.DEF = "Dive_Time";
TimeSensor602.cycleInterval = 7;
TimeSensor602.loop = True;
TimeSensor602.startTime = -1;
Group583ZZZ.children[18] = TimeSensor602;

let ProximitySensor603 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor603.DEF = "TriggerProximitySensor";
ProximitySensor603.size = new X3D.SFVec3f([50,50,50]);
Group583ZZZ.children[19] = ProximitySensor603;

Group582YYY.children = new X3D.MFNode();

Group582ZZZ.children[0] = Group583;

browser.currentScene.children[11] = Group582;

let ROUTE604 = browser.currentScene.createNode("ROUTE");
ROUTE604.fromNode = "FinTriggerProximitySensor";
ROUTE604.fromField = "isActive";
ROUTE604.toNode = "FinClock";
ROUTE604.toField = "set_enabled";
browser.currentScene.children[12] = ROUTE604;

let ROUTE605 = browser.currentScene.createNode("ROUTE");
ROUTE605.fromNode = "FinClock";
ROUTE605.fromField = "fraction_changed";
ROUTE605.toNode = "FinScript";
ROUTE605.toField = "set_fraction";
browser.currentScene.children[13] = ROUTE605;

let ROUTE606 = browser.currentScene.createNode("ROUTE");
ROUTE606.fromNode = "FinScript";
ROUTE606.fromField = "keyValueR";
ROUTE606.toNode = "Finr";
ROUTE606.toField = "set_spine";
browser.currentScene.children[14] = ROUTE606;

let ROUTE607 = browser.currentScene.createNode("ROUTE");
ROUTE607.fromNode = "FinScript";
ROUTE607.fromField = "keyValueL";
ROUTE607.toNode = "Finl";
ROUTE607.toField = "set_spine";
browser.currentScene.children[15] = ROUTE607;

let ROUTE608 = browser.currentScene.createNode("ROUTE");
ROUTE608.fromNode = "BubbleClock";
ROUTE608.fromField = "fraction_changed";
ROUTE608.toNode = "BubblePath1";
ROUTE608.toField = "set_fraction";
browser.currentScene.children[16] = ROUTE608;

let ROUTE609 = browser.currentScene.createNode("ROUTE");
ROUTE609.fromNode = "BubbleClock";
ROUTE609.fromField = "fraction_changed";
ROUTE609.toNode = "BubblePath2";
ROUTE609.toField = "set_fraction";
browser.currentScene.children[17] = ROUTE609;

let ROUTE610 = browser.currentScene.createNode("ROUTE");
ROUTE610.fromNode = "BubbleClock";
ROUTE610.fromField = "fraction_changed";
ROUTE610.toNode = "BubblePath3";
ROUTE610.toField = "set_fraction";
browser.currentScene.children[18] = ROUTE610;

let ROUTE611 = browser.currentScene.createNode("ROUTE");
ROUTE611.fromNode = "BubbleClock";
ROUTE611.fromField = "fraction_changed";
ROUTE611.toNode = "BubblePath4";
ROUTE611.toField = "set_fraction";
browser.currentScene.children[19] = ROUTE611;

let ROUTE612 = browser.currentScene.createNode("ROUTE");
ROUTE612.fromNode = "BubbleClock";
ROUTE612.fromField = "fraction_changed";
ROUTE612.toNode = "BubblePath5";
ROUTE612.toField = "set_fraction";
browser.currentScene.children[20] = ROUTE612;

let ROUTE613 = browser.currentScene.createNode("ROUTE");
ROUTE613.fromNode = "BubbleClock";
ROUTE613.fromField = "fraction_changed";
ROUTE613.toNode = "BubblePath6";
ROUTE613.toField = "set_fraction";
browser.currentScene.children[21] = ROUTE613;

let ROUTE614 = browser.currentScene.createNode("ROUTE");
ROUTE614.fromNode = "BubbleClock";
ROUTE614.fromField = "fraction_changed";
ROUTE614.toNode = "BubblePath7";
ROUTE614.toField = "set_fraction";
browser.currentScene.children[22] = ROUTE614;

let ROUTE615 = browser.currentScene.createNode("ROUTE");
ROUTE615.fromNode = "BubbleClock";
ROUTE615.fromField = "fraction_changed";
ROUTE615.toNode = "BubblePath8";
ROUTE615.toField = "set_fraction";
browser.currentScene.children[23] = ROUTE615;

let ROUTE616 = browser.currentScene.createNode("ROUTE");
ROUTE616.fromNode = "BubbleClock";
ROUTE616.fromField = "fraction_changed";
ROUTE616.toNode = "BubblePath9";
ROUTE616.toField = "set_fraction";
browser.currentScene.children[24] = ROUTE616;

let ROUTE617 = browser.currentScene.createNode("ROUTE");
ROUTE617.fromNode = "BubbleClock";
ROUTE617.fromField = "fraction_changed";
ROUTE617.toNode = "BubblePath10";
ROUTE617.toField = "set_fraction";
browser.currentScene.children[25] = ROUTE617;

let ROUTE618 = browser.currentScene.createNode("ROUTE");
ROUTE618.fromNode = "BubblePath1";
ROUTE618.fromField = "value_changed";
ROUTE618.toNode = "bubble1";
ROUTE618.toField = "set_translation";
browser.currentScene.children[26] = ROUTE618;

let ROUTE619 = browser.currentScene.createNode("ROUTE");
ROUTE619.fromNode = "BubblePath2";
ROUTE619.fromField = "value_changed";
ROUTE619.toNode = "bubble2";
ROUTE619.toField = "set_translation";
browser.currentScene.children[27] = ROUTE619;

let ROUTE620 = browser.currentScene.createNode("ROUTE");
ROUTE620.fromNode = "BubblePath3";
ROUTE620.fromField = "value_changed";
ROUTE620.toNode = "bubble3";
ROUTE620.toField = "set_translation";
browser.currentScene.children[28] = ROUTE620;

let ROUTE621 = browser.currentScene.createNode("ROUTE");
ROUTE621.fromNode = "BubblePath4";
ROUTE621.fromField = "value_changed";
ROUTE621.toNode = "bubble4";
ROUTE621.toField = "set_translation";
browser.currentScene.children[29] = ROUTE621;

let ROUTE622 = browser.currentScene.createNode("ROUTE");
ROUTE622.fromNode = "BubblePath5";
ROUTE622.fromField = "value_changed";
ROUTE622.toNode = "bubble5";
ROUTE622.toField = "set_translation";
browser.currentScene.children[30] = ROUTE622;

let ROUTE623 = browser.currentScene.createNode("ROUTE");
ROUTE623.fromNode = "BubblePath6";
ROUTE623.fromField = "value_changed";
ROUTE623.toNode = "bubble6";
ROUTE623.toField = "set_translation";
browser.currentScene.children[31] = ROUTE623;

let ROUTE624 = browser.currentScene.createNode("ROUTE");
ROUTE624.fromNode = "BubblePath7";
ROUTE624.fromField = "value_changed";
ROUTE624.toNode = "bubble7";
ROUTE624.toField = "set_translation";
browser.currentScene.children[32] = ROUTE624;

let ROUTE625 = browser.currentScene.createNode("ROUTE");
ROUTE625.fromNode = "BubblePath8";
ROUTE625.fromField = "value_changed";
ROUTE625.toNode = "bubble8";
ROUTE625.toField = "set_translation";
browser.currentScene.children[33] = ROUTE625;

let ROUTE626 = browser.currentScene.createNode("ROUTE");
ROUTE626.fromNode = "BubblePath9";
ROUTE626.fromField = "value_changed";
ROUTE626.toNode = "bubble9";
ROUTE626.toField = "set_translation";
browser.currentScene.children[34] = ROUTE626;

let ROUTE627 = browser.currentScene.createNode("ROUTE");
ROUTE627.fromNode = "BubblePath10";
ROUTE627.fromField = "value_changed";
ROUTE627.toNode = "bubble10";
ROUTE627.toField = "set_translation";
browser.currentScene.children[35] = ROUTE627;

let ROUTE628 = browser.currentScene.createNode("ROUTE");
ROUTE628.fromNode = "TriggerProximitySensor";
ROUTE628.fromField = "enterTime";
ROUTE628.toNode = "Dive_Time";
ROUTE628.toField = "set_startTime";
browser.currentScene.children[36] = ROUTE628;

let ROUTE629 = browser.currentScene.createNode("ROUTE");
ROUTE629.fromNode = "Dive_Time";
ROUTE629.fromField = "fraction_changed";
ROUTE629.toNode = "r_ankle_RotationInterpolator_BasicDive";
ROUTE629.toField = "set_fraction";
browser.currentScene.children[37] = ROUTE629;

let ROUTE630 = browser.currentScene.createNode("ROUTE");
ROUTE630.fromNode = "Dive_Time";
ROUTE630.fromField = "fraction_changed";
ROUTE630.toNode = "r_knee_RotationInterpolator_BasicDive";
ROUTE630.toField = "set_fraction";
browser.currentScene.children[38] = ROUTE630;

let ROUTE631 = browser.currentScene.createNode("ROUTE");
ROUTE631.fromNode = "Dive_Time";
ROUTE631.fromField = "fraction_changed";
ROUTE631.toNode = "r_hip_RotationInterpolator_BasicDive";
ROUTE631.toField = "set_fraction";
browser.currentScene.children[39] = ROUTE631;

let ROUTE632 = browser.currentScene.createNode("ROUTE");
ROUTE632.fromNode = "Dive_Time";
ROUTE632.fromField = "fraction_changed";
ROUTE632.toNode = "l_ankle_RotationInterpolator_BasicDive";
ROUTE632.toField = "set_fraction";
browser.currentScene.children[40] = ROUTE632;

let ROUTE633 = browser.currentScene.createNode("ROUTE");
ROUTE633.fromNode = "Dive_Time";
ROUTE633.fromField = "fraction_changed";
ROUTE633.toNode = "l_knee_RotationInterpolator_BasicDive";
ROUTE633.toField = "set_fraction";
browser.currentScene.children[41] = ROUTE633;

let ROUTE634 = browser.currentScene.createNode("ROUTE");
ROUTE634.fromNode = "Dive_Time";
ROUTE634.fromField = "fraction_changed";
ROUTE634.toNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE634.toField = "set_fraction";
browser.currentScene.children[42] = ROUTE634;

let ROUTE635 = browser.currentScene.createNode("ROUTE");
ROUTE635.fromNode = "Dive_Time";
ROUTE635.fromField = "fraction_changed";
ROUTE635.toNode = "lower_body_RotationInterpolator_BasicDive";
ROUTE635.toField = "set_fraction";
browser.currentScene.children[43] = ROUTE635;

let ROUTE636 = browser.currentScene.createNode("ROUTE");
ROUTE636.fromNode = "Dive_Time";
ROUTE636.fromField = "fraction_changed";
ROUTE636.toNode = "head_RotationInterpolator_BasicDive";
ROUTE636.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE636;

let ROUTE637 = browser.currentScene.createNode("ROUTE");
ROUTE637.fromNode = "Dive_Time";
ROUTE637.fromField = "fraction_changed";
ROUTE637.toNode = "neck_RotationInterpolator_BasicDive";
ROUTE637.toField = "set_fraction";
browser.currentScene.children[45] = ROUTE637;

let ROUTE638 = browser.currentScene.createNode("ROUTE");
ROUTE638.fromNode = "Dive_Time";
ROUTE638.fromField = "fraction_changed";
ROUTE638.toNode = "upper_body_RotationInterpolator_BasicDive";
ROUTE638.toField = "set_fraction";
browser.currentScene.children[46] = ROUTE638;

let ROUTE639 = browser.currentScene.createNode("ROUTE");
ROUTE639.fromNode = "Dive_Time";
ROUTE639.fromField = "fraction_changed";
ROUTE639.toNode = "whole_body_RotationInterpolator_BasicDive";
ROUTE639.toField = "set_fraction";
browser.currentScene.children[47] = ROUTE639;

let ROUTE640 = browser.currentScene.createNode("ROUTE");
ROUTE640.fromNode = "Dive_Time";
ROUTE640.fromField = "fraction_changed";
ROUTE640.toNode = "whole_body_TranslationInterpolator_BasicDive";
ROUTE640.toField = "set_fraction";
browser.currentScene.children[48] = ROUTE640;

let ROUTE641 = browser.currentScene.createNode("ROUTE");
ROUTE641.fromNode = "r_ankle_RotationInterpolator_BasicDive";
ROUTE641.fromField = "value_changed";
ROUTE641.toNode = "hanim_r_ankle";
ROUTE641.toField = "set_rotation";
browser.currentScene.children[49] = ROUTE641;

let ROUTE642 = browser.currentScene.createNode("ROUTE");
ROUTE642.fromNode = "r_knee_RotationInterpolator_BasicDive";
ROUTE642.fromField = "value_changed";
ROUTE642.toNode = "hanim_r_knee";
ROUTE642.toField = "set_rotation";
browser.currentScene.children[50] = ROUTE642;

let ROUTE643 = browser.currentScene.createNode("ROUTE");
ROUTE643.fromNode = "r_hip_RotationInterpolator_BasicDive";
ROUTE643.fromField = "value_changed";
ROUTE643.toNode = "hanim_r_hip";
ROUTE643.toField = "set_rotation";
browser.currentScene.children[51] = ROUTE643;

let ROUTE644 = browser.currentScene.createNode("ROUTE");
ROUTE644.fromNode = "l_ankle_RotationInterpolator_BasicDive";
ROUTE644.fromField = "value_changed";
ROUTE644.toNode = "hanim_l_ankle";
ROUTE644.toField = "set_rotation";
browser.currentScene.children[52] = ROUTE644;

let ROUTE645 = browser.currentScene.createNode("ROUTE");
ROUTE645.fromNode = "l_knee_RotationInterpolator_BasicDive";
ROUTE645.fromField = "value_changed";
ROUTE645.toNode = "hanim_l_knee";
ROUTE645.toField = "set_rotation";
browser.currentScene.children[53] = ROUTE645;

let ROUTE646 = browser.currentScene.createNode("ROUTE");
ROUTE646.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE646.fromField = "value_changed";
ROUTE646.toNode = "finWarpScript";
ROUTE646.toField = "set_rotationL";
browser.currentScene.children[54] = ROUTE646;

let ROUTE647 = browser.currentScene.createNode("ROUTE");
ROUTE647.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE647.fromField = "value_changed";
ROUTE647.toNode = "finWarpScript";
ROUTE647.toField = "set_rotationR";
browser.currentScene.children[55] = ROUTE647;

let ROUTE648 = browser.currentScene.createNode("ROUTE");
ROUTE648.fromNode = "finWarpScript";
ROUTE648.fromField = "fin_warpL";
ROUTE648.toNode = "FinScript";
ROUTE648.toField = "finL";
browser.currentScene.children[56] = ROUTE648;

let ROUTE649 = browser.currentScene.createNode("ROUTE");
ROUTE649.fromNode = "finWarpScript";
ROUTE649.fromField = "fin_warpR";
ROUTE649.toNode = "FinScript";
ROUTE649.toField = "finR";
browser.currentScene.children[57] = ROUTE649;

let ROUTE650 = browser.currentScene.createNode("ROUTE");
ROUTE650.fromNode = "l_hip_RotationInterpolator_BasicDive";
ROUTE650.fromField = "value_changed";
ROUTE650.toNode = "hanim_l_hip";
ROUTE650.toField = "set_rotation";
browser.currentScene.children[58] = ROUTE650;

let ROUTE651 = browser.currentScene.createNode("ROUTE");
ROUTE651.fromNode = "lower_body_RotationInterpolator_BasicDive";
ROUTE651.fromField = "value_changed";
ROUTE651.toNode = "hanim_sacroiliac";
ROUTE651.toField = "set_rotation";
browser.currentScene.children[59] = ROUTE651;

let ROUTE652 = browser.currentScene.createNode("ROUTE");
ROUTE652.fromNode = "head_RotationInterpolator_BasicDive";
ROUTE652.fromField = "value_changed";
ROUTE652.toNode = "hanim_skullbase";
ROUTE652.toField = "set_rotation";
browser.currentScene.children[60] = ROUTE652;

let ROUTE653 = browser.currentScene.createNode("ROUTE");
ROUTE653.fromNode = "neck_RotationInterpolator_BasicDive";
ROUTE653.fromField = "value_changed";
ROUTE653.toNode = "hanim_vc4";
ROUTE653.toField = "set_rotation";
browser.currentScene.children[61] = ROUTE653;

let ROUTE654 = browser.currentScene.createNode("ROUTE");
ROUTE654.fromNode = "upper_body_RotationInterpolator_BasicDive";
ROUTE654.fromField = "value_changed";
ROUTE654.toNode = "hanim_vl1";
ROUTE654.toField = "set_rotation";
browser.currentScene.children[62] = ROUTE654;

let ROUTE655 = browser.currentScene.createNode("ROUTE");
ROUTE655.fromNode = "whole_body_RotationInterpolator_BasicDive";
ROUTE655.fromField = "value_changed";
ROUTE655.toNode = "hanim_humanoid_root";
ROUTE655.toField = "set_rotation";
browser.currentScene.children[63] = ROUTE655;

let ROUTE656 = browser.currentScene.createNode("ROUTE");
ROUTE656.fromNode = "whole_body_TranslationInterpolator_BasicDive";
ROUTE656.fromField = "value_changed";
ROUTE656.toNode = "hanim_humanoid_root";
ROUTE656.toField = "set_translation";
browser.currentScene.children[64] = ROUTE656;

let ROUTE657 = browser.currentScene.createNode("ROUTE");
ROUTE657.fromNode = "Dive_Time";
ROUTE657.fromField = "fraction_changed";
ROUTE657.toNode = "r_wrist_RotationInterpolator_BasicDive";
ROUTE657.toField = "set_fraction";
browser.currentScene.children[65] = ROUTE657;

let ROUTE658 = browser.currentScene.createNode("ROUTE");
ROUTE658.fromNode = "Dive_Time";
ROUTE658.fromField = "fraction_changed";
ROUTE658.toNode = "r_elbow_RotationInterpolator_BasicDive";
ROUTE658.toField = "set_fraction";
browser.currentScene.children[66] = ROUTE658;

let ROUTE659 = browser.currentScene.createNode("ROUTE");
ROUTE659.fromNode = "Dive_Time";
ROUTE659.fromField = "fraction_changed";
ROUTE659.toNode = "r_shoulder_RotationInterpolator_BasicDive";
ROUTE659.toField = "set_fraction";
browser.currentScene.children[67] = ROUTE659;

let ROUTE660 = browser.currentScene.createNode("ROUTE");
ROUTE660.fromNode = "Dive_Time";
ROUTE660.fromField = "fraction_changed";
ROUTE660.toNode = "l_wrist_RotationInterpolator_BasicDive";
ROUTE660.toField = "set_fraction";
browser.currentScene.children[68] = ROUTE660;

let ROUTE661 = browser.currentScene.createNode("ROUTE");
ROUTE661.fromNode = "Dive_Time";
ROUTE661.fromField = "fraction_changed";
ROUTE661.toNode = "l_elbow_RotationInterpolator_BasicDive";
ROUTE661.toField = "set_fraction";
browser.currentScene.children[69] = ROUTE661;

let ROUTE662 = browser.currentScene.createNode("ROUTE");
ROUTE662.fromNode = "Dive_Time";
ROUTE662.fromField = "fraction_changed";
ROUTE662.toNode = "l_shoulder_RotationInterpolator_BasicDive";
ROUTE662.toField = "set_fraction";
browser.currentScene.children[70] = ROUTE662;

let ROUTE663 = browser.currentScene.createNode("ROUTE");
ROUTE663.fromNode = "r_wrist_RotationInterpolator_BasicDive";
ROUTE663.fromField = "value_changed";
ROUTE663.toNode = "hanim_r_wrist";
ROUTE663.toField = "set_rotation";
browser.currentScene.children[71] = ROUTE663;

let ROUTE664 = browser.currentScene.createNode("ROUTE");
ROUTE664.fromNode = "r_elbow_RotationInterpolator_BasicDive";
ROUTE664.fromField = "value_changed";
ROUTE664.toNode = "hanim_r_elbow";
ROUTE664.toField = "set_rotation";
browser.currentScene.children[72] = ROUTE664;

let ROUTE665 = browser.currentScene.createNode("ROUTE");
ROUTE665.fromNode = "r_shoulder_RotationInterpolator_BasicDive";
ROUTE665.fromField = "value_changed";
ROUTE665.toNode = "hanim_r_shoulder";
ROUTE665.toField = "set_rotation";
browser.currentScene.children[73] = ROUTE665;

let ROUTE666 = browser.currentScene.createNode("ROUTE");
ROUTE666.fromNode = "l_wrist_RotationInterpolator_BasicDive";
ROUTE666.fromField = "value_changed";
ROUTE666.toNode = "hanim_l_wrist";
ROUTE666.toField = "set_rotation";
browser.currentScene.children[74] = ROUTE666;

let ROUTE667 = browser.currentScene.createNode("ROUTE");
ROUTE667.fromNode = "l_elbow_RotationInterpolator_BasicDive";
ROUTE667.fromField = "value_changed";
ROUTE667.toNode = "hanim_l_elbow";
ROUTE667.toField = "set_rotation";
browser.currentScene.children[75] = ROUTE667;

let ROUTE668 = browser.currentScene.createNode("ROUTE");
ROUTE668.fromNode = "l_shoulder_RotationInterpolator_BasicDive";
ROUTE668.fromField = "value_changed";
ROUTE668.toNode = "hanim_l_shoulder";
ROUTE668.toField = "set_rotation";
browser.currentScene.children[76] = ROUTE668;

}
main ();
