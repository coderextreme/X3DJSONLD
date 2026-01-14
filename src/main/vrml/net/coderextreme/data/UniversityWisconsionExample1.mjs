const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 3));
scene.addMetaData("title", "BvhUniversityWisconsionExample1.x3d");
scene.addMetaData("description", "BVH file conversion: *enter description here, short-sentence summaries preferred*");
scene.addMetaData("creator", "*enter name of original author here*");
scene.addMetaData("created", "*enter date of initial version here*");
scene.addMetaData("translated", "2 September 2023");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:21:02 GMT");
scene.addMetaData("reference", "BvhUniversityWIsconsionExample1.bvh");
scene.addMetaData("reference", "https://TODO/UniversityWIsconsionExample1.bvh");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP");
scene.addMetaData("generator", "Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package");
scene.addMetaData("generator", "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit");
await browser .loadComponents (scene);
let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "BvhUniversityWisconsionExample1.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo15;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo16;

let Group17 = browser.currentScene.createNode("Group");
Group17.DEF = "BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation";
let MetadataSet18 = browser.currentScene.createNode("MetadataSet");
MetadataSet18.name = "BvhToHAnimNameConversionTable";
let MetadataString19 = browser.currentScene.createNode("MetadataString");
MetadataString19.name = "ROOT_Hips";
MetadataString19.reference = "ROOT";
MetadataString19.value = new X3D.MFString([new X3D.SFString("humanoid_root"), new X3D.SFString("sacrum")]);
MetadataSet18.value = new X3D.MFNode();

MetadataSet18XXX.value[0] = MetadataString19;

let MetadataString20 = browser.currentScene.createNode("MetadataString");
MetadataString20.name = "Chest";
MetadataString20.reference = "JOINT";
MetadataString20.value = new X3D.MFString([new X3D.SFString("vl5"), new X3D.SFString("l5")]);
value[1] = MetadataString20;

let MetadataString21 = browser.currentScene.createNode("MetadataString");
MetadataString21.name = "Neck";
MetadataString21.reference = "JOINT";
MetadataString21.value = new X3D.MFString([new X3D.SFString("Neck"), new X3D.SFString("vl5_to_Neck")]);
value[2] = MetadataString21;

let MetadataString22 = browser.currentScene.createNode("MetadataString");
MetadataString22.name = "Head";
MetadataString22.reference = "JOINT";
MetadataString22.value = new X3D.MFString([new X3D.SFString("skullbase"), new X3D.SFString("skull")]);
value[3] = MetadataString22;

let MetadataString23 = browser.currentScene.createNode("MetadataString");
MetadataString23.name = "HeadSite";
MetadataString23.reference = "Site";
MetadataString23.value = new X3D.MFString([new X3D.SFString("skullbase_tip")]);
value[4] = MetadataString23;

let MetadataString24 = browser.currentScene.createNode("MetadataString");
MetadataString24.name = "LeftCollar";
MetadataString24.reference = "JOINT";
MetadataString24.value = new X3D.MFString([new X3D.SFString("LeftCollar"), new X3D.SFString("vl5_to_LeftCollar")]);
value[5] = MetadataString24;

let MetadataString25 = browser.currentScene.createNode("MetadataString");
MetadataString25.name = "LeftUpArm";
MetadataString25.reference = "JOINT";
MetadataString25.value = new X3D.MFString([new X3D.SFString("LeftUpArm"), new X3D.SFString("LeftCollar_to_LeftUpArm")]);
value[6] = MetadataString25;

let MetadataString26 = browser.currentScene.createNode("MetadataString");
MetadataString26.name = "LeftLowArm";
MetadataString26.reference = "JOINT";
MetadataString26.value = new X3D.MFString([new X3D.SFString("LeftLowArm"), new X3D.SFString("LeftUpArm_to_LeftLowArm")]);
value[7] = MetadataString26;

let MetadataString27 = browser.currentScene.createNode("MetadataString");
MetadataString27.name = "LeftHand";
MetadataString27.reference = "JOINT";
MetadataString27.value = new X3D.MFString([new X3D.SFString("LeftHand"), new X3D.SFString("LeftLowArm_to_LeftHand")]);
value[8] = MetadataString27;

let MetadataString28 = browser.currentScene.createNode("MetadataString");
MetadataString28.name = "LeftHandSite";
MetadataString28.reference = "Site";
MetadataString28.value = new X3D.MFString([new X3D.SFString("LeftHand_tip")]);
value[9] = MetadataString28;

let MetadataString29 = browser.currentScene.createNode("MetadataString");
MetadataString29.name = "RightCollar";
MetadataString29.reference = "JOINT";
MetadataString29.value = new X3D.MFString([new X3D.SFString("RightCollar"), new X3D.SFString("vl5_to_RightCollar")]);
value[10] = MetadataString29;

let MetadataString30 = browser.currentScene.createNode("MetadataString");
MetadataString30.name = "RightUpArm";
MetadataString30.reference = "JOINT";
MetadataString30.value = new X3D.MFString([new X3D.SFString("RightUpArm"), new X3D.SFString("RightCollar_to_RightUpArm")]);
value[11] = MetadataString30;

let MetadataString31 = browser.currentScene.createNode("MetadataString");
MetadataString31.name = "RightLowArm";
MetadataString31.reference = "JOINT";
MetadataString31.value = new X3D.MFString([new X3D.SFString("RightLowArm"), new X3D.SFString("RightUpArm_to_RightLowArm")]);
value[12] = MetadataString31;

let MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "RightHand";
MetadataString32.reference = "JOINT";
MetadataString32.value = new X3D.MFString([new X3D.SFString("RightHand"), new X3D.SFString("RightLowArm_to_RightHand")]);
value[13] = MetadataString32;

let MetadataString33 = browser.currentScene.createNode("MetadataString");
MetadataString33.name = "RightHandSite";
MetadataString33.reference = "Site";
MetadataString33.value = new X3D.MFString([new X3D.SFString("RightHand_tip")]);
value[14] = MetadataString33;

let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "LeftUpLeg";
MetadataString34.reference = "JOINT";
MetadataString34.value = new X3D.MFString([new X3D.SFString("LeftUpLeg"), new X3D.SFString("humanoid_root_to_LeftUpLeg")]);
value[15] = MetadataString34;

let MetadataString35 = browser.currentScene.createNode("MetadataString");
MetadataString35.name = "LeftLowLeg";
MetadataString35.reference = "JOINT";
MetadataString35.value = new X3D.MFString([new X3D.SFString("LeftLowLeg"), new X3D.SFString("LeftUpLeg_to_LeftLowLeg")]);
value[16] = MetadataString35;

let MetadataString36 = browser.currentScene.createNode("MetadataString");
MetadataString36.name = "LeftFoot";
MetadataString36.reference = "JOINT";
MetadataString36.value = new X3D.MFString([new X3D.SFString("LeftFoot"), new X3D.SFString("LeftLowLeg_to_LeftFoot")]);
value[17] = MetadataString36;

let MetadataString37 = browser.currentScene.createNode("MetadataString");
MetadataString37.name = "LeftFootSite";
MetadataString37.reference = "Site";
MetadataString37.value = new X3D.MFString([new X3D.SFString("LeftFoot_tip")]);
value[18] = MetadataString37;

let MetadataString38 = browser.currentScene.createNode("MetadataString");
MetadataString38.name = "RightUpLeg";
MetadataString38.reference = "JOINT";
MetadataString38.value = new X3D.MFString([new X3D.SFString("RightUpLeg"), new X3D.SFString("humanoid_root_to_RightUpLeg")]);
value[19] = MetadataString38;

let MetadataString39 = browser.currentScene.createNode("MetadataString");
MetadataString39.name = "RightLowLeg";
MetadataString39.reference = "JOINT";
MetadataString39.value = new X3D.MFString([new X3D.SFString("RightLowLeg"), new X3D.SFString("RightUpLeg_to_RightLowLeg")]);
value[20] = MetadataString39;

let MetadataString40 = browser.currentScene.createNode("MetadataString");
MetadataString40.name = "RightFoot";
MetadataString40.reference = "JOINT";
MetadataString40.value = new X3D.MFString([new X3D.SFString("RightFoot"), new X3D.SFString("RightLowLeg_to_RightFoot")]);
value[21] = MetadataString40;

let MetadataString41 = browser.currentScene.createNode("MetadataString");
MetadataString41.name = "RightFootSite";
MetadataString41.reference = "Site";
MetadataString41.value = new X3D.MFString([new X3D.SFString("RightFoot_tip")]);
value[22] = MetadataString41;

metadata = MetadataSet18;

browser.currentScene.children[2] = Group17;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.DEF = "InitialPositionScaled";
Transform42.translation = new X3D.SFVec3f([0,1.244,0]);
let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.description = "BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m";
Viewpoint43.position = new X3D.SFVec3f([0,0,8]);
Transform42YYY.children = new X3D.MFNode();

Transform42ZZZ.children[0] = Viewpoint43;

let Viewpoint44 = browser.currentScene.createNode("Viewpoint");
Viewpoint44.description = "BvhUniversityWisconsionExample1 initial motion position";
Viewpoint44.position = new X3D.SFVec3f([0.803,3.501,16.836]);
Transform42ZZZ.children[1] = Viewpoint44;

let Viewpoint45 = browser.currentScene.createNode("Viewpoint");
Viewpoint45.description = "BvhUniversityWisconsionExample1 final motion position";
Viewpoint45.position = new X3D.SFVec3f([0.781,3.51,16.647]);
Transform42ZZZ.children[2] = Viewpoint45;

browser.currentScene.children[3] = Transform42;

let HAnimHumanoid46 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid46.DEF = "BvhUniversityWisconsionExample1_ROOT_Hips";
HAnimHumanoid46.name = "ROOT_Hips";
let MetadataSet47 = browser.currentScene.createNode("MetadataSet");
MetadataSet47.name = "HAnimHumanoid.info";
MetadataSet47.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString48 = browser.currentScene.createNode("MetadataString");
MetadataString48.name = "authorEmail";
MetadataString48.value = new X3D.MFString([new X3D.SFString("*TODO*")]);
MetadataSet47.value = new X3D.MFNode();

MetadataSet47XXX.value[0] = MetadataString48;

let MetadataString49 = browser.currentScene.createNode("MetadataString");
MetadataString49.name = "authorName";
MetadataString49.value = new X3D.MFString([new X3D.SFString("*TODO*")]);
value[1] = MetadataString49;

let MetadataString50 = browser.currentScene.createNode("MetadataString");
MetadataString50.name = "copyright";
MetadataString50.value = new X3D.MFString([new X3D.SFString("Copyright (c) 2023")]);
value[2] = MetadataString50;

let MetadataString51 = browser.currentScene.createNode("MetadataString");
MetadataString51.name = "humanoidVersion";
MetadataString51.value = new X3D.MFString([new X3D.SFString("*TODO*")]);
value[3] = MetadataString51;

let MetadataString52 = browser.currentScene.createNode("MetadataString");
MetadataString52.name = "usageDescription";
MetadataString52.value = new X3D.MFString([new X3D.SFString("*TODO*")]);
value[4] = MetadataString52;

HAnimHumanoid46.metadata = new X3D.SFNode();

HAnimHumanoid46XXX.metadata[0] = MetadataSet47;

let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.DEF = "BvhUniversityWisconsionExample1_humanoid_root";
HAnimJoint53.name = "humanoid_root";
HAnimJoint53.translation = new X3D.SFVec3f([0.7849403,3.508388,8.680851]);
HAnimJoint53.rotation = new X3D.SFRotation([-0.0184530858032817,-0.992698784706892,-0.119199859336308,2.9151883640198]);
HAnimJoint53.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let HAnimSegment54 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment54.DEF = "BvhUniversityWisconsionExample1_sacrum";
HAnimSegment54.name = "sacrum";
let Switch55 = browser.currentScene.createNode("Switch");
Switch55.whichChoice = 0;
let Group56 = browser.currentScene.createNode("Group");
let TouchSensor57 = browser.currentScene.createNode("TouchSensor");
TouchSensor57.description = "HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum";
Group56YYY.children = new X3D.MFNode();

Group56ZZZ.children[0] = TouchSensor57;

let Shape58 = browser.currentScene.createNode("Shape");
Shape58.DEF = "HAnimRootShape";
let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.DEF = "HAnimRootMaterial";
Material60.diffuseColor = new X3D.SFColor([0.8,0,0]);
Material60.transparency = 0.3;
material = Material60;

appearance = Appearance59;

let Sphere61 = browser.currentScene.createNode("Sphere");
Sphere61.DEF = "HAnimJointSphere";
Sphere61.radius = 0.254;
geometry = Sphere61;

Group56ZZZ.children[1] = Shape58;

Switch55YYY.children = new X3D.MFNode();

Switch55ZZZ.children[0] = Group56;

let Shape62 = browser.currentScene.createNode("Shape");
Shape62.DEF = "HAnimJointShape";
let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Material64.DEF = "HAnimJointMaterial";
Material64.diffuseColor = new X3D.SFColor([0,0,0.8]);
Material64.transparency = 0.3;
material = Material64;

appearance = Appearance63;

let Sphere65 = browser.currentScene.createNode("Sphere");
Sphere65.USE = "HAnimJointSphere";
geometry = Sphere65;

Switch55ZZZ.children[1] = Shape62;

let Shape66 = browser.currentScene.createNode("Shape");
let LineSet67 = browser.currentScene.createNode("LineSet");
LineSet67.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA68 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA68.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA68.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA68;

let Coordinate69 = browser.currentScene.createNode("Coordinate");
Coordinate69.point = new X3D.MFVec3f([0,0,0,0,0,0]);
coord = Coordinate69;

geometry = LineSet67;

Switch55ZZZ.children[2] = Shape66;

let Shape70 = browser.currentScene.createNode("Shape");
Shape70.DEF = "HAnimSiteShape";
let Appearance71 = browser.currentScene.createNode("Appearance");
let Material72 = browser.currentScene.createNode("Material");
Material72.diffuseColor = new X3D.SFColor([1,0.5,0]);
Material72.transparency = 0.3;
material = Material72;

appearance = Appearance71;

let IndexedFaceSet73 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet73.DEF = "DiamondIFS";
IndexedFaceSet73.solid = False;
IndexedFaceSet73.creaseAngle = 0.5;
IndexedFaceSet73.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate74 = browser.currentScene.createNode("Coordinate");
Coordinate74.point = new X3D.MFVec3f([0,0.254,0,-0.254,0,0,0,0,0.254,0.254,0,0,0,0,-0.254,0,-0.254,0]);
coord = Coordinate74;

geometry = IndexedFaceSet73;

Switch55ZZZ.children[3] = Shape70;

let Shape75 = browser.currentScene.createNode("Shape");
let LineSet76 = browser.currentScene.createNode("LineSet");
LineSet76.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA77 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA77.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA77.color = new X3D.MFColorRGBA([1,0.5,0,1,1,0.5,0,0.1]);
color = ColorRGBA77;

let Coordinate78 = browser.currentScene.createNode("Coordinate");
Coordinate78.point = new X3D.MFVec3f([0,0,0,0,0,0]);
coord = Coordinate78;

geometry = LineSet76;

Switch55ZZZ.children[4] = Shape75;

HAnimSegment54YYY.children = new X3D.MFNode();

HAnimSegment54ZZZ.children[0] = Switch55;

let Shape79 = browser.currentScene.createNode("Shape");
let LineSet80 = browser.currentScene.createNode("LineSet");
LineSet80.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA81 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA81.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA81;

let Coordinate82 = browser.currentScene.createNode("Coordinate");
Coordinate82.point = new X3D.MFVec3f([0,0,0,0,5.21,0]);
coord = Coordinate82;

geometry = LineSet80;

HAnimSegment54ZZZ.children[1] = Shape79;

let Shape83 = browser.currentScene.createNode("Shape");
let LineSet84 = browser.currentScene.createNode("LineSet");
LineSet84.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA85 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA85.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA85;

let Coordinate86 = browser.currentScene.createNode("Coordinate");
Coordinate86.point = new X3D.MFVec3f([0,0,0,3.91,0,0]);
coord = Coordinate86;

geometry = LineSet84;

HAnimSegment54ZZZ.children[2] = Shape83;

let Shape87 = browser.currentScene.createNode("Shape");
let LineSet88 = browser.currentScene.createNode("LineSet");
LineSet88.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA89 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA89.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA89;

let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new X3D.MFVec3f([0,0,0,-3.91,0,0]);
coord = Coordinate90;

geometry = LineSet88;

HAnimSegment54ZZZ.children[3] = Shape87;

HAnimJoint53YYY.children = new X3D.MFNode();

HAnimJoint53ZZZ.children[0] = HAnimSegment54;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.DEF = "BvhUniversityWisconsionExample1_vl5";
HAnimJoint91.name = "vl5";
HAnimJoint91.rotation = new X3D.SFRotation([0.929559139694865,-0.360437334785587,0.0774902155269029,0.820797255601436]);
HAnimJoint91.center = new X3D.SFVec3f([0,5.21,0]);
let HAnimSegment92 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment92.DEF = "BvhUniversityWisconsionExample1_l5";
HAnimSegment92.name = "l5";
let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new X3D.SFVec3f([0,5.21,0]);
let TouchSensor94 = browser.currentScene.createNode("TouchSensor");
TouchSensor94.description = "HAnimJoint Chest vl5, HAnimSegment l5";
Transform93YYY.children = new X3D.MFNode();

Transform93ZZZ.children[0] = TouchSensor94;

let Shape95 = browser.currentScene.createNode("Shape");
Shape95.USE = "HAnimJointShape";
Transform93ZZZ.child[1] = Shape95;

let Shape96 = browser.currentScene.createNode("Shape");
let LineSet97 = browser.currentScene.createNode("LineSet");
LineSet97.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA98 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA98.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA98;

let Coordinate99 = browser.currentScene.createNode("Coordinate");
Coordinate99.point = new X3D.MFVec3f([0,0,0,0,18.65,0]);
coord = Coordinate99;

geometry = LineSet97;

Transform93ZZZ.child[2] = Shape96;

let Shape100 = browser.currentScene.createNode("Shape");
let LineSet101 = browser.currentScene.createNode("LineSet");
LineSet101.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA102 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA102.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA102;

let Coordinate103 = browser.currentScene.createNode("Coordinate");
Coordinate103.point = new X3D.MFVec3f([0,0,0,1.12,16.23,1.87]);
coord = Coordinate103;

geometry = LineSet101;

Transform93ZZZ.child[3] = Shape100;

let Shape104 = browser.currentScene.createNode("Shape");
let LineSet105 = browser.currentScene.createNode("LineSet");
LineSet105.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA106 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA106.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA106;

let Coordinate107 = browser.currentScene.createNode("Coordinate");
Coordinate107.point = new X3D.MFVec3f([0,0,0,-1.12,16.23,1.87]);
coord = Coordinate107;

geometry = LineSet105;

Transform93ZZZ.child[4] = Shape104;

HAnimSegment92YYY.children = new X3D.MFNode();

HAnimSegment92ZZZ.children[0] = Transform93;

HAnimJoint91YYY.children = new X3D.MFNode();

HAnimJoint91ZZZ.children[0] = HAnimSegment92;

let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.DEF = "BvhUniversityWisconsionExample1_Neck";
HAnimJoint108.name = "Neck";
HAnimJoint108.rotation = new X3D.SFRotation([0.983970484111271,0.0663053900569327,0.16554661472597,0.772979753553571]);
HAnimJoint108.center = new X3D.SFVec3f([0,23.86,0]);
let HAnimSegment109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment109.DEF = "BvhUniversityWisconsionExample1_vl5_to_Neck";
HAnimSegment109.name = "vl5_to_Neck";
let Transform110 = browser.currentScene.createNode("Transform");
Transform110.translation = new X3D.SFVec3f([0,23.86,0]);
let TouchSensor111 = browser.currentScene.createNode("TouchSensor");
TouchSensor111.description = "HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck";
Transform110YYY.children = new X3D.MFNode();

Transform110ZZZ.children[0] = TouchSensor111;

let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "HAnimJointShape";
Transform110ZZZ.child[1] = Shape112;

let Shape113 = browser.currentScene.createNode("Shape");
let LineSet114 = browser.currentScene.createNode("LineSet");
LineSet114.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA115 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA115.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA115;

let Coordinate116 = browser.currentScene.createNode("Coordinate");
Coordinate116.point = new X3D.MFVec3f([0,0,0,0,5.45,0]);
coord = Coordinate116;

geometry = LineSet114;

Transform110ZZZ.child[2] = Shape113;

HAnimSegment109YYY.children = new X3D.MFNode();

HAnimSegment109ZZZ.children[0] = Transform110;

HAnimJoint108YYY.children = new X3D.MFNode();

HAnimJoint108ZZZ.children[0] = HAnimSegment109;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.DEF = "BvhUniversityWisconsionExample1_skullbase";
HAnimJoint117.name = "skullbase";
HAnimJoint117.rotation = new X3D.SFRotation([-0.979126474330309,0.150183590569867,-0.136953409556093,0.734508385229556]);
HAnimJoint117.center = new X3D.SFVec3f([0,29.31,0]);
let HAnimSegment118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment118.DEF = "BvhUniversityWisconsionExample1_skull";
HAnimSegment118.name = "skull";
let Transform119 = browser.currentScene.createNode("Transform");
Transform119.translation = new X3D.SFVec3f([0,29.31,0]);
let HAnimSite120 = browser.currentScene.createNode("HAnimSite");
HAnimSite120.DEF = "BvhUniversityWisconsionExample1_skull_tip";
HAnimSite120.name = "skull_tip";
HAnimSite120.translation = new X3D.SFVec3f([0,3.87,0]);
let TouchSensor121 = browser.currentScene.createNode("TouchSensor");
TouchSensor121.description = "HAnimSite skull_tip";
HAnimSite120YYY.children = new X3D.MFNode();

HAnimSite120ZZZ.children[0] = TouchSensor121;

let Shape122 = browser.currentScene.createNode("Shape");
Shape122.USE = "HAnimSiteShape";
HAnimSite120ZZZ.children[1] = Shape122;

let Shape123 = browser.currentScene.createNode("Shape");
let LineSet124 = browser.currentScene.createNode("LineSet");
LineSet124.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA125 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA125.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA125;

let Coordinate126 = browser.currentScene.createNode("Coordinate");
Coordinate126.point = new X3D.MFVec3f([0,-3.87,0,0,0,0]);
coord = Coordinate126;

geometry = LineSet124;

HAnimSite120ZZZ.children[2] = Shape123;

Transform119YYY.children = new X3D.MFNode();

Transform119ZZZ.children[0] = HAnimSite120;

let TouchSensor127 = browser.currentScene.createNode("TouchSensor");
TouchSensor127.description = "HAnimJoint Head skullbase, HAnimSegment skull";
Transform119ZZZ.children[1] = TouchSensor127;

let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "HAnimJointShape";
Transform119ZZZ.child[2] = Shape128;

HAnimSegment118YYY.children = new X3D.MFNode();

HAnimSegment118ZZZ.children[0] = Transform119;

HAnimJoint117YYY.children = new X3D.MFNode();

HAnimJoint117ZZZ.children[0] = HAnimSegment118;

HAnimJoint108ZZZ.children[1] = HAnimJoint117;

HAnimJoint91ZZZ.children[1] = HAnimJoint108;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.DEF = "BvhUniversityWisconsionExample1_LeftCollar";
HAnimJoint129.name = "LeftCollar";
HAnimJoint129.rotation = new X3D.SFRotation([-0.0400336310146056,0.285571817840178,0.957520780580368,0.318543581718216]);
HAnimJoint129.center = new X3D.SFVec3f([1.12,21.44,1.87]);
let HAnimSegment130 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment130.DEF = "BvhUniversityWisconsionExample1_vl5_to_LeftCollar";
HAnimSegment130.name = "vl5_to_LeftCollar";
let Transform131 = browser.currentScene.createNode("Transform");
Transform131.translation = new X3D.SFVec3f([1.12,21.44,1.87]);
let TouchSensor132 = browser.currentScene.createNode("TouchSensor");
TouchSensor132.description = "HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar";
Transform131YYY.children = new X3D.MFNode();

Transform131ZZZ.children[0] = TouchSensor132;

let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "HAnimJointShape";
Transform131ZZZ.child[1] = Shape133;

let Shape134 = browser.currentScene.createNode("Shape");
let LineSet135 = browser.currentScene.createNode("LineSet");
LineSet135.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA136 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA136.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA136;

let Coordinate137 = browser.currentScene.createNode("Coordinate");
Coordinate137.point = new X3D.MFVec3f([0,0,0,5.54,0,0]);
coord = Coordinate137;

geometry = LineSet135;

Transform131ZZZ.child[2] = Shape134;

HAnimSegment130YYY.children = new X3D.MFNode();

HAnimSegment130ZZZ.children[0] = Transform131;

HAnimJoint129YYY.children = new X3D.MFNode();

HAnimJoint129ZZZ.children[0] = HAnimSegment130;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.DEF = "BvhUniversityWisconsionExample1_LeftUpArm";
HAnimJoint138.name = "LeftUpArm";
HAnimJoint138.rotation = new X3D.SFRotation([-0.027309899849048,-0.170484979510911,0.984981746598077,1.66813504770243]);
HAnimJoint138.center = new X3D.SFVec3f([6.66,21.44,1.87]);
let HAnimSegment139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment139.DEF = "BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm";
HAnimSegment139.name = "LeftCollar_to_LeftUpArm";
let Transform140 = browser.currentScene.createNode("Transform");
Transform140.translation = new X3D.SFVec3f([6.66,21.44,1.87]);
let TouchSensor141 = browser.currentScene.createNode("TouchSensor");
TouchSensor141.description = "HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm";
Transform140YYY.children = new X3D.MFNode();

Transform140ZZZ.children[0] = TouchSensor141;

let Shape142 = browser.currentScene.createNode("Shape");
Shape142.USE = "HAnimJointShape";
Transform140ZZZ.child[1] = Shape142;

let Shape143 = browser.currentScene.createNode("Shape");
let LineSet144 = browser.currentScene.createNode("LineSet");
LineSet144.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA145 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA145.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA145;

let Coordinate146 = browser.currentScene.createNode("Coordinate");
Coordinate146.point = new X3D.MFVec3f([0,0,0,0,-11.96,0]);
coord = Coordinate146;

geometry = LineSet144;

Transform140ZZZ.child[2] = Shape143;

HAnimSegment139YYY.children = new X3D.MFNode();

HAnimSegment139ZZZ.children[0] = Transform140;

HAnimJoint138YYY.children = new X3D.MFNode();

HAnimJoint138ZZZ.children[0] = HAnimSegment139;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.DEF = "BvhUniversityWisconsionExample1_LeftLowArm";
HAnimJoint147.name = "LeftLowArm";
HAnimJoint147.rotation = new X3D.SFRotation([-0.998249192144246,0.0587758586859541,-0.00662939055192083,1.65994762916941]);
HAnimJoint147.center = new X3D.SFVec3f([6.66,9.48,1.87]);
let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.DEF = "BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm";
HAnimSegment148.name = "LeftUpArm_to_LeftLowArm";
let Transform149 = browser.currentScene.createNode("Transform");
Transform149.translation = new X3D.SFVec3f([6.66,9.48,1.87]);
let TouchSensor150 = browser.currentScene.createNode("TouchSensor");
TouchSensor150.description = "HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm";
Transform149YYY.children = new X3D.MFNode();

Transform149ZZZ.children[0] = TouchSensor150;

let Shape151 = browser.currentScene.createNode("Shape");
Shape151.USE = "HAnimJointShape";
Transform149ZZZ.child[1] = Shape151;

let Shape152 = browser.currentScene.createNode("Shape");
let LineSet153 = browser.currentScene.createNode("LineSet");
LineSet153.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA154 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA154.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA154;

let Coordinate155 = browser.currentScene.createNode("Coordinate");
Coordinate155.point = new X3D.MFVec3f([0,0,0,0,-9.93,0]);
coord = Coordinate155;

geometry = LineSet153;

Transform149ZZZ.child[2] = Shape152;

HAnimSegment148YYY.children = new X3D.MFNode();

HAnimSegment148ZZZ.children[0] = Transform149;

HAnimJoint147YYY.children = new X3D.MFNode();

HAnimJoint147ZZZ.children[0] = HAnimSegment148;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.DEF = "BvhUniversityWisconsionExample1_LeftHand";
HAnimJoint156.name = "LeftHand";
HAnimJoint156.rotation = new X3D.SFRotation([0.404520441533964,0.00251538810905742,0.914525497293667,0.0133189030390886]);
HAnimJoint156.center = new X3D.SFVec3f([6.66,-0.45,1.87]);
let HAnimSegment157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment157.DEF = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand";
HAnimSegment157.name = "LeftLowArm_to_LeftHand";
let Transform158 = browser.currentScene.createNode("Transform");
Transform158.translation = new X3D.SFVec3f([6.66,-0.45,1.87]);
let HAnimSite159 = browser.currentScene.createNode("HAnimSite");
HAnimSite159.DEF = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip";
HAnimSite159.name = "LeftLowArm_to_LeftHand_tip";
HAnimSite159.translation = new X3D.SFVec3f([0,-7,0]);
let TouchSensor160 = browser.currentScene.createNode("TouchSensor");
TouchSensor160.description = "HAnimSite LeftLowArm_to_LeftHand_tip";
HAnimSite159YYY.children = new X3D.MFNode();

HAnimSite159ZZZ.children[0] = TouchSensor160;

let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "HAnimSiteShape";
HAnimSite159ZZZ.children[1] = Shape161;

let Shape162 = browser.currentScene.createNode("Shape");
let LineSet163 = browser.currentScene.createNode("LineSet");
LineSet163.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA164 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA164.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA164;

let Coordinate165 = browser.currentScene.createNode("Coordinate");
Coordinate165.point = new X3D.MFVec3f([0,7,0,0,0,0]);
coord = Coordinate165;

geometry = LineSet163;

HAnimSite159ZZZ.children[2] = Shape162;

Transform158YYY.children = new X3D.MFNode();

Transform158ZZZ.children[0] = HAnimSite159;

let TouchSensor166 = browser.currentScene.createNode("TouchSensor");
TouchSensor166.description = "HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand";
Transform158ZZZ.children[1] = TouchSensor166;

let Shape167 = browser.currentScene.createNode("Shape");
Shape167.USE = "HAnimJointShape";
Transform158ZZZ.child[2] = Shape167;

HAnimSegment157YYY.children = new X3D.MFNode();

HAnimSegment157ZZZ.children[0] = Transform158;

HAnimJoint156YYY.children = new X3D.MFNode();

HAnimJoint156ZZZ.children[0] = HAnimSegment157;

HAnimJoint147ZZZ.children[1] = HAnimJoint156;

HAnimJoint138ZZZ.children[1] = HAnimJoint147;

HAnimJoint129ZZZ.children[1] = HAnimJoint138;

HAnimJoint91ZZZ.children[2] = HAnimJoint129;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.DEF = "BvhUniversityWisconsionExample1_RightCollar";
HAnimJoint168.name = "RightCollar";
HAnimJoint168.rotation = new X3D.SFRotation([-0.0717927567877157,-0.898736438505571,-0.432572091304025,0.383573753513759]);
HAnimJoint168.center = new X3D.SFVec3f([-1.12,21.44,1.87]);
let HAnimSegment169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment169.DEF = "BvhUniversityWisconsionExample1_vl5_to_RightCollar";
HAnimSegment169.name = "vl5_to_RightCollar";
let Transform170 = browser.currentScene.createNode("Transform");
Transform170.translation = new X3D.SFVec3f([-1.12,21.44,1.87]);
let TouchSensor171 = browser.currentScene.createNode("TouchSensor");
TouchSensor171.description = "HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar";
Transform170YYY.children = new X3D.MFNode();

Transform170ZZZ.children[0] = TouchSensor171;

let Shape172 = browser.currentScene.createNode("Shape");
Shape172.USE = "HAnimJointShape";
Transform170ZZZ.child[1] = Shape172;

let Shape173 = browser.currentScene.createNode("Shape");
let LineSet174 = browser.currentScene.createNode("LineSet");
LineSet174.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA175 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA175.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA175;

let Coordinate176 = browser.currentScene.createNode("Coordinate");
Coordinate176.point = new X3D.MFVec3f([0,0,0,-6.07,0,0]);
coord = Coordinate176;

geometry = LineSet174;

Transform170ZZZ.child[2] = Shape173;

HAnimSegment169YYY.children = new X3D.MFNode();

HAnimSegment169ZZZ.children[0] = Transform170;

HAnimJoint168YYY.children = new X3D.MFNode();

HAnimJoint168ZZZ.children[0] = HAnimSegment169;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.DEF = "BvhUniversityWisconsionExample1_RightUpArm";
HAnimJoint177.name = "RightUpArm";
HAnimJoint177.rotation = new X3D.SFRotation([-0.750052184733347,-0.545300751513553,-0.374257679380781,1.93524054510947]);
HAnimJoint177.center = new X3D.SFVec3f([-7.19,21.44,1.87]);
let HAnimSegment178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment178.DEF = "BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm";
HAnimSegment178.name = "RightCollar_to_RightUpArm";
let Transform179 = browser.currentScene.createNode("Transform");
Transform179.translation = new X3D.SFVec3f([-7.19,21.44,1.87]);
let TouchSensor180 = browser.currentScene.createNode("TouchSensor");
TouchSensor180.description = "HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm";
Transform179YYY.children = new X3D.MFNode();

Transform179ZZZ.children[0] = TouchSensor180;

let Shape181 = browser.currentScene.createNode("Shape");
Shape181.USE = "HAnimJointShape";
Transform179ZZZ.child[1] = Shape181;

let Shape182 = browser.currentScene.createNode("Shape");
let LineSet183 = browser.currentScene.createNode("LineSet");
LineSet183.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA184 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA184.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA184;

let Coordinate185 = browser.currentScene.createNode("Coordinate");
Coordinate185.point = new X3D.MFVec3f([0,0,0,0,-11.82,0]);
coord = Coordinate185;

geometry = LineSet183;

Transform179ZZZ.child[2] = Shape182;

HAnimSegment178YYY.children = new X3D.MFNode();

HAnimSegment178ZZZ.children[0] = Transform179;

HAnimJoint177YYY.children = new X3D.MFNode();

HAnimJoint177ZZZ.children[0] = HAnimSegment178;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.DEF = "BvhUniversityWisconsionExample1_RightLowArm";
HAnimJoint186.name = "RightLowArm";
HAnimJoint186.rotation = new X3D.SFRotation([-0.942326628906139,0.260683574441484,0.209915693722034,1.36514284873355]);
HAnimJoint186.center = new X3D.SFVec3f([-7.19,9.62,1.87]);
let HAnimSegment187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment187.DEF = "BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm";
HAnimSegment187.name = "RightUpArm_to_RightLowArm";
let Transform188 = browser.currentScene.createNode("Transform");
Transform188.translation = new X3D.SFVec3f([-7.19,9.62,1.87]);
let TouchSensor189 = browser.currentScene.createNode("TouchSensor");
TouchSensor189.description = "HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm";
Transform188YYY.children = new X3D.MFNode();

Transform188ZZZ.children[0] = TouchSensor189;

let Shape190 = browser.currentScene.createNode("Shape");
Shape190.USE = "HAnimJointShape";
Transform188ZZZ.child[1] = Shape190;

let Shape191 = browser.currentScene.createNode("Shape");
let LineSet192 = browser.currentScene.createNode("LineSet");
LineSet192.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA193 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA193.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA193;

let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new X3D.MFVec3f([0,0,0,0,-10.65,0]);
coord = Coordinate194;

geometry = LineSet192;

Transform188ZZZ.child[2] = Shape191;

HAnimSegment187YYY.children = new X3D.MFNode();

HAnimSegment187ZZZ.children[0] = Transform188;

HAnimJoint186YYY.children = new X3D.MFNode();

HAnimJoint186ZZZ.children[0] = HAnimSegment187;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.DEF = "BvhUniversityWisconsionExample1_RightHand";
HAnimJoint195.name = "RightHand";
HAnimJoint195.rotation = new X3D.SFRotation([0.487401172792782,0.00827736333346378,-0.87313892480885,0.0323338299925714]);
HAnimJoint195.center = new X3D.SFVec3f([-7.19,-1.03,1.87]);
let HAnimSegment196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment196.DEF = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand";
HAnimSegment196.name = "RightLowArm_to_RightHand";
let Transform197 = browser.currentScene.createNode("Transform");
Transform197.translation = new X3D.SFVec3f([-7.19,-1.03,1.87]);
let HAnimSite198 = browser.currentScene.createNode("HAnimSite");
HAnimSite198.DEF = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip";
HAnimSite198.name = "RightLowArm_to_RightHand_tip";
HAnimSite198.translation = new X3D.SFVec3f([0,-7,0]);
let TouchSensor199 = browser.currentScene.createNode("TouchSensor");
TouchSensor199.description = "HAnimSite RightLowArm_to_RightHand_tip";
HAnimSite198YYY.children = new X3D.MFNode();

HAnimSite198ZZZ.children[0] = TouchSensor199;

let Shape200 = browser.currentScene.createNode("Shape");
Shape200.USE = "HAnimSiteShape";
HAnimSite198ZZZ.children[1] = Shape200;

let Shape201 = browser.currentScene.createNode("Shape");
let LineSet202 = browser.currentScene.createNode("LineSet");
LineSet202.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA203 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA203;

let Coordinate204 = browser.currentScene.createNode("Coordinate");
Coordinate204.point = new X3D.MFVec3f([0,7,0,0,0,0]);
coord = Coordinate204;

geometry = LineSet202;

HAnimSite198ZZZ.children[2] = Shape201;

Transform197YYY.children = new X3D.MFNode();

Transform197ZZZ.children[0] = HAnimSite198;

let TouchSensor205 = browser.currentScene.createNode("TouchSensor");
TouchSensor205.description = "HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand";
Transform197ZZZ.children[1] = TouchSensor205;

let Shape206 = browser.currentScene.createNode("Shape");
Shape206.USE = "HAnimJointShape";
Transform197ZZZ.child[2] = Shape206;

HAnimSegment196YYY.children = new X3D.MFNode();

HAnimSegment196ZZZ.children[0] = Transform197;

HAnimJoint195YYY.children = new X3D.MFNode();

HAnimJoint195ZZZ.children[0] = HAnimSegment196;

HAnimJoint186ZZZ.children[1] = HAnimJoint195;

HAnimJoint177ZZZ.children[1] = HAnimJoint186;

HAnimJoint168ZZZ.children[1] = HAnimJoint177;

HAnimJoint91ZZZ.children[3] = HAnimJoint168;

HAnimJoint53ZZZ.children[1] = HAnimJoint91;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.DEF = "BvhUniversityWisconsionExample1_LeftUpLeg";
HAnimJoint207.name = "LeftUpLeg";
HAnimJoint207.rotation = new X3D.SFRotation([0.798274116909833,-0.0905296906431976,0.595451769150005,0.374616063385567]);
HAnimJoint207.center = new X3D.SFVec3f([3.91,0,0]);
let HAnimSegment208 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment208.DEF = "BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg";
HAnimSegment208.name = "humanoid_root_to_LeftUpLeg";
let Transform209 = browser.currentScene.createNode("Transform");
Transform209.translation = new X3D.SFVec3f([3.91,0,0]);
let TouchSensor210 = browser.currentScene.createNode("TouchSensor");
TouchSensor210.description = "HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg";
Transform209YYY.children = new X3D.MFNode();

Transform209ZZZ.children[0] = TouchSensor210;

let Shape211 = browser.currentScene.createNode("Shape");
Shape211.USE = "HAnimJointShape";
Transform209ZZZ.child[1] = Shape211;

let Shape212 = browser.currentScene.createNode("Shape");
let LineSet213 = browser.currentScene.createNode("LineSet");
LineSet213.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA214 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA214.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA214;

let Coordinate215 = browser.currentScene.createNode("Coordinate");
Coordinate215.point = new X3D.MFVec3f([0,0,0,0,-18.34,0]);
coord = Coordinate215;

geometry = LineSet213;

Transform209ZZZ.child[2] = Shape212;

HAnimSegment208YYY.children = new X3D.MFNode();

HAnimSegment208ZZZ.children[0] = Transform209;

HAnimJoint207YYY.children = new X3D.MFNode();

HAnimJoint207ZZZ.children[0] = HAnimSegment208;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.DEF = "BvhUniversityWisconsionExample1_LeftLowLeg";
HAnimJoint216.name = "LeftLowLeg";
HAnimJoint216.rotation = new X3D.SFRotation([0.969171949455709,0.159020234805176,0.188197495495361,1.02828103886506]);
HAnimJoint216.center = new X3D.SFVec3f([3.91,-18.34,0]);
let HAnimSegment217 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment217.DEF = "BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg";
HAnimSegment217.name = "LeftUpLeg_to_LeftLowLeg";
let Transform218 = browser.currentScene.createNode("Transform");
Transform218.translation = new X3D.SFVec3f([3.91,-18.34,0]);
let TouchSensor219 = browser.currentScene.createNode("TouchSensor");
TouchSensor219.description = "HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg";
Transform218YYY.children = new X3D.MFNode();

Transform218ZZZ.children[0] = TouchSensor219;

let Shape220 = browser.currentScene.createNode("Shape");
Shape220.USE = "HAnimJointShape";
Transform218ZZZ.child[1] = Shape220;

let Shape221 = browser.currentScene.createNode("Shape");
let LineSet222 = browser.currentScene.createNode("LineSet");
LineSet222.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA223 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA223;

let Coordinate224 = browser.currentScene.createNode("Coordinate");
Coordinate224.point = new X3D.MFVec3f([0,0,0,0,-17.37,0]);
coord = Coordinate224;

geometry = LineSet222;

Transform218ZZZ.child[2] = Shape221;

HAnimSegment217YYY.children = new X3D.MFNode();

HAnimSegment217ZZZ.children[0] = Transform218;

HAnimJoint216YYY.children = new X3D.MFNode();

HAnimJoint216ZZZ.children[0] = HAnimSegment217;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.DEF = "BvhUniversityWisconsionExample1_LeftFoot";
HAnimJoint225.name = "LeftFoot";
HAnimJoint225.rotation = new X3D.SFRotation([1.00000000000036,0,0,0.0199134632110525]);
HAnimJoint225.center = new X3D.SFVec3f([3.91,-35.71,0]);
let HAnimSegment226 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment226.DEF = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot";
HAnimSegment226.name = "LeftLowLeg_to_LeftFoot";
let Transform227 = browser.currentScene.createNode("Transform");
Transform227.translation = new X3D.SFVec3f([3.91,-35.71,0]);
let HAnimSite228 = browser.currentScene.createNode("HAnimSite");
HAnimSite228.DEF = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip";
HAnimSite228.name = "LeftLowLeg_to_LeftFoot_tip";
HAnimSite228.translation = new X3D.SFVec3f([0,-3.46,0]);
let TouchSensor229 = browser.currentScene.createNode("TouchSensor");
TouchSensor229.description = "HAnimSite LeftLowLeg_to_LeftFoot_tip";
HAnimSite228YYY.children = new X3D.MFNode();

HAnimSite228ZZZ.children[0] = TouchSensor229;

let Shape230 = browser.currentScene.createNode("Shape");
Shape230.USE = "HAnimSiteShape";
HAnimSite228ZZZ.children[1] = Shape230;

let Shape231 = browser.currentScene.createNode("Shape");
let LineSet232 = browser.currentScene.createNode("LineSet");
LineSet232.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA233 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA233.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA233;

let Coordinate234 = browser.currentScene.createNode("Coordinate");
Coordinate234.point = new X3D.MFVec3f([0,3.46,0,0,0,0]);
coord = Coordinate234;

geometry = LineSet232;

HAnimSite228ZZZ.children[2] = Shape231;

Transform227YYY.children = new X3D.MFNode();

Transform227ZZZ.children[0] = HAnimSite228;

let TouchSensor235 = browser.currentScene.createNode("TouchSensor");
TouchSensor235.description = "HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot";
Transform227ZZZ.children[1] = TouchSensor235;

let Shape236 = browser.currentScene.createNode("Shape");
Shape236.USE = "HAnimJointShape";
Transform227ZZZ.child[2] = Shape236;

HAnimSegment226YYY.children = new X3D.MFNode();

HAnimSegment226ZZZ.children[0] = Transform227;

HAnimJoint225YYY.children = new X3D.MFNode();

HAnimJoint225ZZZ.children[0] = HAnimSegment226;

HAnimJoint216ZZZ.children[1] = HAnimJoint225;

HAnimJoint207ZZZ.children[1] = HAnimJoint216;

HAnimJoint53ZZZ.children[2] = HAnimJoint207;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.DEF = "BvhUniversityWisconsionExample1_RightUpLeg";
HAnimJoint237.name = "RightUpLeg";
HAnimJoint237.rotation = new X3D.SFRotation([-0.529026768997627,-0.0781104813974245,-0.845002621522441,0.345959390966261]);
HAnimJoint237.center = new X3D.SFVec3f([-3.91,0,0]);
let HAnimSegment238 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment238.DEF = "BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg";
HAnimSegment238.name = "humanoid_root_to_RightUpLeg";
let Transform239 = browser.currentScene.createNode("Transform");
Transform239.translation = new X3D.SFVec3f([-3.91,0,0]);
let TouchSensor240 = browser.currentScene.createNode("TouchSensor");
TouchSensor240.description = "HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg";
Transform239YYY.children = new X3D.MFNode();

Transform239ZZZ.children[0] = TouchSensor240;

let Shape241 = browser.currentScene.createNode("Shape");
Shape241.USE = "HAnimJointShape";
Transform239ZZZ.child[1] = Shape241;

let Shape242 = browser.currentScene.createNode("Shape");
let LineSet243 = browser.currentScene.createNode("LineSet");
LineSet243.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA244 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA244.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA244;

let Coordinate245 = browser.currentScene.createNode("Coordinate");
Coordinate245.point = new X3D.MFVec3f([0,0,0,0,-17.63,0]);
coord = Coordinate245;

geometry = LineSet243;

Transform239ZZZ.child[2] = Shape242;

HAnimSegment238YYY.children = new X3D.MFNode();

HAnimSegment238ZZZ.children[0] = Transform239;

HAnimJoint237YYY.children = new X3D.MFNode();

HAnimJoint237ZZZ.children[0] = HAnimSegment238;

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.DEF = "BvhUniversityWisconsionExample1_RightLowLeg";
HAnimJoint246.name = "RightLowLeg";
HAnimJoint246.rotation = new X3D.SFRotation([0.978057447453843,-0.194999101930461,0.073341527979632,0.971415273794883]);
HAnimJoint246.center = new X3D.SFVec3f([-3.91,-17.63,0]);
let HAnimSegment247 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment247.DEF = "BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg";
HAnimSegment247.name = "RightUpLeg_to_RightLowLeg";
let Transform248 = browser.currentScene.createNode("Transform");
Transform248.translation = new X3D.SFVec3f([-3.91,-17.63,0]);
let TouchSensor249 = browser.currentScene.createNode("TouchSensor");
TouchSensor249.description = "HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg";
Transform248YYY.children = new X3D.MFNode();

Transform248ZZZ.children[0] = TouchSensor249;

let Shape250 = browser.currentScene.createNode("Shape");
Shape250.USE = "HAnimJointShape";
Transform248ZZZ.child[1] = Shape250;

let Shape251 = browser.currentScene.createNode("Shape");
let LineSet252 = browser.currentScene.createNode("LineSet");
LineSet252.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA253 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA253.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA253;

let Coordinate254 = browser.currentScene.createNode("Coordinate");
Coordinate254.point = new X3D.MFVec3f([0,0,0,0,-17.14,0]);
coord = Coordinate254;

geometry = LineSet252;

Transform248ZZZ.child[2] = Shape251;

HAnimSegment247YYY.children = new X3D.MFNode();

HAnimSegment247ZZZ.children[0] = Transform248;

HAnimJoint246YYY.children = new X3D.MFNode();

HAnimJoint246ZZZ.children[0] = HAnimSegment247;

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.DEF = "BvhUniversityWisconsionExample1_RightFoot";
HAnimJoint255.name = "RightFoot";
HAnimJoint255.rotation = new X3D.SFRotation([-1,0,0,0.446403006744384]);
HAnimJoint255.center = new X3D.SFVec3f([-3.91,-34.77,0]);
let HAnimSegment256 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment256.DEF = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot";
HAnimSegment256.name = "RightLowLeg_to_RightFoot";
let Transform257 = browser.currentScene.createNode("Transform");
Transform257.translation = new X3D.SFVec3f([-3.91,-34.77,0]);
let HAnimSite258 = browser.currentScene.createNode("HAnimSite");
HAnimSite258.DEF = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip";
HAnimSite258.name = "RightLowLeg_to_RightFoot_tip";
HAnimSite258.translation = new X3D.SFVec3f([0,-3.75,0]);
let TouchSensor259 = browser.currentScene.createNode("TouchSensor");
TouchSensor259.description = "HAnimSite RightLowLeg_to_RightFoot_tip";
HAnimSite258YYY.children = new X3D.MFNode();

HAnimSite258ZZZ.children[0] = TouchSensor259;

let Shape260 = browser.currentScene.createNode("Shape");
Shape260.USE = "HAnimSiteShape";
HAnimSite258ZZZ.children[1] = Shape260;

let Shape261 = browser.currentScene.createNode("Shape");
let LineSet262 = browser.currentScene.createNode("LineSet");
LineSet262.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA263 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA263.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA263;

let Coordinate264 = browser.currentScene.createNode("Coordinate");
Coordinate264.point = new X3D.MFVec3f([0,3.75,0,0,0,0]);
coord = Coordinate264;

geometry = LineSet262;

HAnimSite258ZZZ.children[2] = Shape261;

Transform257YYY.children = new X3D.MFNode();

Transform257ZZZ.children[0] = HAnimSite258;

let TouchSensor265 = browser.currentScene.createNode("TouchSensor");
TouchSensor265.description = "HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot";
Transform257ZZZ.children[1] = TouchSensor265;

let Shape266 = browser.currentScene.createNode("Shape");
Shape266.USE = "HAnimJointShape";
Transform257ZZZ.child[2] = Shape266;

HAnimSegment256YYY.children = new X3D.MFNode();

HAnimSegment256ZZZ.children[0] = Transform257;

HAnimJoint255YYY.children = new X3D.MFNode();

HAnimJoint255ZZZ.children[0] = HAnimSegment256;

HAnimJoint246ZZZ.children[1] = HAnimJoint255;

HAnimJoint237ZZZ.children[1] = HAnimJoint246;

HAnimJoint53ZZZ.children[3] = HAnimJoint237;

joints[1] = HAnimJoint53;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.USE = "BvhUniversityWisconsionExample1_humanoid_root";
joints[2] = HAnimJoint267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.USE = "BvhUniversityWisconsionExample1_vl5";
joints[3] = HAnimJoint268;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.USE = "BvhUniversityWisconsionExample1_Neck";
joints[4] = HAnimJoint269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.USE = "BvhUniversityWisconsionExample1_skullbase";
joints[5] = HAnimJoint270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.USE = "BvhUniversityWisconsionExample1_LeftCollar";
joints[6] = HAnimJoint271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "BvhUniversityWisconsionExample1_LeftUpArm";
joints[7] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "BvhUniversityWisconsionExample1_LeftLowArm";
joints[8] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "BvhUniversityWisconsionExample1_LeftHand";
joints[9] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "BvhUniversityWisconsionExample1_RightCollar";
joints[10] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "BvhUniversityWisconsionExample1_RightUpArm";
joints[11] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "BvhUniversityWisconsionExample1_RightLowArm";
joints[12] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "BvhUniversityWisconsionExample1_RightHand";
joints[13] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "BvhUniversityWisconsionExample1_LeftUpLeg";
joints[14] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "BvhUniversityWisconsionExample1_LeftLowLeg";
joints[15] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "BvhUniversityWisconsionExample1_LeftFoot";
joints[16] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "BvhUniversityWisconsionExample1_RightUpLeg";
joints[17] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "BvhUniversityWisconsionExample1_RightLowLeg";
joints[18] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "BvhUniversityWisconsionExample1_RightFoot";
joints[19] = HAnimJoint284;

let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.USE = "BvhUniversityWisconsionExample1_sacrum";
segments[20] = HAnimSegment285;

let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.USE = "BvhUniversityWisconsionExample1_l5";
segments[21] = HAnimSegment286;

let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.USE = "BvhUniversityWisconsionExample1_vl5_to_Neck";
segments[22] = HAnimSegment287;

let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.USE = "BvhUniversityWisconsionExample1_skull";
segments[23] = HAnimSegment288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "BvhUniversityWisconsionExample1_vl5_to_LeftCollar";
segments[24] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm";
segments[25] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm";
segments[26] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand";
segments[27] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "BvhUniversityWisconsionExample1_vl5_to_RightCollar";
segments[28] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm";
segments[29] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm";
segments[30] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand";
segments[31] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg";
segments[32] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg";
segments[33] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot";
segments[34] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg";
segments[35] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg";
segments[36] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot";
segments[37] = HAnimSegment302;

let HAnimSite303 = browser.currentScene.createNode("HAnimSite");
HAnimSite303.DEF = "BvhUniversityWisconsionExample1_humanoid_root_view";
HAnimSite303.name = "humanoid_root_view";
let Viewpoint304 = browser.currentScene.createNode("Viewpoint");
Viewpoint304.DEF = "BvhUniversityWisconsionExample1_humanoid_root_viewpoint";
Viewpoint304.description = "BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center";
Viewpoint304.position = new X3D.SFVec3f([0,0,80]);
HAnimSite303YYY.children = new X3D.MFNode();

HAnimSite303ZZZ.children[0] = Viewpoint304;

HAnimHumanoid46ZZZ.viewpoints[38] = HAnimSite303;

let HAnimSite305 = browser.currentScene.createNode("HAnimSite");
HAnimSite305.USE = "BvhUniversityWisconsionExample1_skull_tip";
viewpoints[39] = HAnimSite305;

let HAnimSite306 = browser.currentScene.createNode("HAnimSite");
HAnimSite306.USE = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip";
viewpoints[40] = HAnimSite306;

let HAnimSite307 = browser.currentScene.createNode("HAnimSite");
HAnimSite307.USE = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip";
viewpoints[41] = HAnimSite307;

let HAnimSite308 = browser.currentScene.createNode("HAnimSite");
HAnimSite308.USE = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip";
viewpoints[42] = HAnimSite308;

let HAnimSite309 = browser.currentScene.createNode("HAnimSite");
HAnimSite309.USE = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip";
viewpoints[43] = HAnimSite309;

let HAnimSite310 = browser.currentScene.createNode("HAnimSite");
HAnimSite310.USE = "BvhUniversityWisconsionExample1_humanoid_root_view";
viewpoints[44] = HAnimSite310;

browser.currentScene.children[4] = HAnimHumanoid46;

let Group311 = browser.currentScene.createNode("Group");
Group311.DEF = "BvhUniversityWisconsionExample1_MotionGroup";
let TimeSensor312 = browser.currentScene.createNode("TimeSensor");
TimeSensor312.DEF = "RealTimer";
TimeSensor312.cycleInterval = 0.067;
TimeSensor312.loop = True;
Group311YYY.children = new X3D.MFNode();

Group311ZZZ.children[0] = TimeSensor312;

let TimeSensor313 = browser.currentScene.createNode("TimeSensor");
TimeSensor313.DEF = "StepTimer";
TimeSensor313.enabled = False;
TimeSensor313.cycleInterval = 2;
TimeSensor313.loop = True;
Group311ZZZ.children[1] = TimeSensor313;

let ScalarInterpolator314 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator314.DEF = "FrameStepper";
ScalarInterpolator314.key = new X3D.MFFloat([0,1,1]);
ScalarInterpolator314.keyValue = new X3D.MFFloat([0,0,1]);
Group311ZZZ.children[2] = ScalarInterpolator314;

let PositionInterpolator315 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator315.DEF = "Interpolator0_humanoid_root";
PositionInterpolator315.key = new X3D.MFFloat([0,1]);
PositionInterpolator315.keyValue = new X3D.MFVec3f([0.803,3.501,8.836,0.781,3.51,8.647]);
Group311ZZZ.children[3] = PositionInterpolator315;

let OrientationInterpolator316 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "Interpolator1_humanoid_root";
OrientationInterpolator316.key = new X3D.MFFloat([0,1]);
OrientationInterpolator316.keyValue = new X3D.MFRotation([-0.0118,-0.9911,-0.1325,2.8785,-0.0199,-0.993,-0.1163,2.9232]);
Group311ZZZ.children[4] = OrientationInterpolator316;

let OrientationInterpolator317 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "Interpolator2_vl5";
OrientationInterpolator317.key = new X3D.MFFloat([0,1]);
OrientationInterpolator317.keyValue = new X3D.MFRotation([0.9093,-0.4082,0.0806,0.8073,0.9336,-0.3501,0.0768,0.824]);
Group311ZZZ.children[5] = OrientationInterpolator317;

let OrientationInterpolator318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "Interpolator3_Neck";
OrientationInterpolator318.key = new X3D.MFFloat([0,1]);
OrientationInterpolator318.keyValue = new X3D.MFRotation([0.9834,0.0677,0.1685,0.7761,0.9841,0.066,0.1649,0.7723]);
Group311ZZZ.children[6] = OrientationInterpolator318;

let OrientationInterpolator319 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator319.DEF = "Interpolator4_skullbase";
OrientationInterpolator319.key = new X3D.MFFloat([0,1]);
OrientationInterpolator319.keyValue = new X3D.MFRotation([-0.9778,0.1629,-0.1317,0.736,-0.9794,0.1474,-0.1381,0.7342]);
Group311ZZZ.children[7] = OrientationInterpolator319;

let OrientationInterpolator320 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator320.DEF = "Interpolator5_LeftCollar";
OrientationInterpolator320.key = new X3D.MFFloat([0,1]);
OrientationInterpolator320.keyValue = new X3D.MFRotation([-0.0626,0.7102,0.7012,0.2502,-0.0355,0.2109,0.9769,0.3411]);
Group311ZZZ.children[8] = OrientationInterpolator320;

let OrientationInterpolator321 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator321.DEF = "Interpolator6_LeftUpArm";
OrientationInterpolator321.key = new X3D.MFFloat([0,1]);
OrientationInterpolator321.keyValue = new X3D.MFRotation([-0.1561,-0.2157,0.9639,1.7536,0.0022,-0.1597,0.9872,1.6521]);
Group311ZZZ.children[9] = OrientationInterpolator321;

let OrientationInterpolator322 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator322.DEF = "Interpolator7_LeftLowArm";
OrientationInterpolator322.key = new X3D.MFFloat([0,1]);
OrientationInterpolator322.keyValue = new X3D.MFRotation([-0.9933,-0.0526,-0.103,1.6066,-0.9965,0.0822,0.0138,1.6744]);
Group311ZZZ.children[10] = OrientationInterpolator322;

let OrientationInterpolator323 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "Interpolator8_LeftHand";
OrientationInterpolator323.key = new X3D.MFFloat([0,1]);
OrientationInterpolator323.keyValue = new X3D.MFRotation([0.0434,0.0003,0.9991,0.0121,0.4673,0.0029,0.8841,0.0138]);
Group311ZZZ.children[11] = OrientationInterpolator323;

let OrientationInterpolator324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "Interpolator9_RightCollar";
OrientationInterpolator324.key = new X3D.MFFloat([0,1]);
OrientationInterpolator324.keyValue = new X3D.MFRotation([-0.0734,-0.5964,-0.7993,0.3057,-0.07,-0.9291,-0.3633,0.4091]);
Group311ZZZ.children[12] = OrientationInterpolator324;

let OrientationInterpolator325 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "Interpolator10_RightUpArm";
OrientationInterpolator325.key = new X3D.MFFloat([0,1]);
OrientationInterpolator325.keyValue = new X3D.MFRotation([-0.6801,-0.6074,-0.4106,2.0536,-0.765,-0.5303,-0.3654,1.9107]);
Group311ZZZ.children[13] = OrientationInterpolator325;

let OrientationInterpolator326 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "Interpolator11_RightLowArm";
OrientationInterpolator326.key = new X3D.MFFloat([0,1]);
OrientationInterpolator326.keyValue = new X3D.MFRotation([-0.9378,0.2739,0.2135,1.4058,-0.9433,0.2577,0.2091,1.3563]);
Group311ZZZ.children[14] = OrientationInterpolator326;

let OrientationInterpolator327 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "Interpolator12_RightHand";
OrientationInterpolator327.key = new X3D.MFFloat([0,1]);
OrientationInterpolator327.keyValue = new X3D.MFRotation([0.4025,0.0061,-0.9154,0.0299,0.5037,0.0087,-0.8638,0.0329]);
Group311ZZZ.children[15] = OrientationInterpolator327;

let OrientationInterpolator328 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "Interpolator13_LeftUpLeg";
OrientationInterpolator328.key = new X3D.MFFloat([0,1]);
OrientationInterpolator328.keyValue = new X3D.MFRotation([0.8595,-0.1039,0.5004,0.4748,0.7784,-0.0864,0.6217,0.3536]);
Group311ZZZ.children[16] = OrientationInterpolator328;

let OrientationInterpolator329 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "Interpolator14_LeftLowLeg";
OrientationInterpolator329.key = new X3D.MFFloat([0,1]);
OrientationInterpolator329.keyValue = new X3D.MFRotation([0.9184,0.2378,0.3162,0.9291,0.9762,0.1432,0.1627,1.0525]);
Group311ZZZ.children[17] = OrientationInterpolator329;

let OrientationInterpolator330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "Interpolator15_LeftFoot";
OrientationInterpolator330.key = new X3D.MFFloat([0,1]);
OrientationInterpolator330.keyValue = new X3D.MFRotation([-1,0,0,0.0199,1,0,0,0.0286]);
Group311ZZZ.children[18] = OrientationInterpolator330;

let OrientationInterpolator331 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "Interpolator16_RightUpLeg";
OrientationInterpolator331.key = new X3D.MFFloat([0,1]);
OrientationInterpolator331.keyValue = new X3D.MFRotation([-0.5548,-0.0795,-0.8282,0.3423,-0.5234,-0.0778,-0.8485,0.3468]);
Group311ZZZ.children[19] = OrientationInterpolator331;

let OrientationInterpolator332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "Interpolator17_RightLowLeg";
OrientationInterpolator332.key = new X3D.MFFloat([0,1]);
OrientationInterpolator332.keyValue = new X3D.MFRotation([0.9694,-0.234,0.0739,0.9755,0.9797,-0.1864,0.0732,0.9707]);
Group311ZZZ.children[20] = OrientationInterpolator332;

let OrientationInterpolator333 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "Interpolator18_RightFoot";
OrientationInterpolator333.key = new X3D.MFFloat([0,1]);
OrientationInterpolator333.keyValue = new X3D.MFRotation([-1,0,0,0.418,-1,0,0,0.4526]);
Group311ZZZ.children[21] = OrientationInterpolator333;

browser.currentScene.children[5] = Group311;

let ROUTE334 = browser.currentScene.createNode("ROUTE");
ROUTE334.fromNode = "StepTimer";
ROUTE334.fromField = "fraction_changed";
ROUTE334.toNode = "FrameStepper";
ROUTE334.toField = "set_fraction";
browser.currentScene.children[6] = ROUTE334;

let ROUTE335 = browser.currentScene.createNode("ROUTE");
ROUTE335.fromNode = "RealTimer";
ROUTE335.fromField = "fraction_changed";
ROUTE335.toNode = "Interpolator0_humanoid_root";
ROUTE335.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE335;

let ROUTE336 = browser.currentScene.createNode("ROUTE");
ROUTE336.fromNode = "FrameStepper";
ROUTE336.fromField = "value_changed";
ROUTE336.toNode = "Interpolator0_humanoid_root";
ROUTE336.toField = "set_fraction";
browser.currentScene.children[8] = ROUTE336;

let ROUTE337 = browser.currentScene.createNode("ROUTE");
ROUTE337.fromNode = "Interpolator0_humanoid_root";
ROUTE337.fromField = "value_changed";
ROUTE337.toNode = "BvhUniversityWisconsionExample1_humanoid_root";
ROUTE337.toField = "set_translation";
browser.currentScene.children[9] = ROUTE337;

let ROUTE338 = browser.currentScene.createNode("ROUTE");
ROUTE338.fromNode = "RealTimer";
ROUTE338.fromField = "fraction_changed";
ROUTE338.toNode = "Interpolator1_humanoid_root";
ROUTE338.toField = "set_fraction";
browser.currentScene.children[10] = ROUTE338;

let ROUTE339 = browser.currentScene.createNode("ROUTE");
ROUTE339.fromNode = "FrameStepper";
ROUTE339.fromField = "value_changed";
ROUTE339.toNode = "Interpolator1_humanoid_root";
ROUTE339.toField = "set_fraction";
browser.currentScene.children[11] = ROUTE339;

let ROUTE340 = browser.currentScene.createNode("ROUTE");
ROUTE340.fromNode = "Interpolator1_humanoid_root";
ROUTE340.fromField = "value_changed";
ROUTE340.toNode = "BvhUniversityWisconsionExample1_humanoid_root";
ROUTE340.toField = "set_rotation";
browser.currentScene.children[12] = ROUTE340;

let ROUTE341 = browser.currentScene.createNode("ROUTE");
ROUTE341.fromNode = "RealTimer";
ROUTE341.fromField = "fraction_changed";
ROUTE341.toNode = "Interpolator2_vl5";
ROUTE341.toField = "set_fraction";
browser.currentScene.children[13] = ROUTE341;

let ROUTE342 = browser.currentScene.createNode("ROUTE");
ROUTE342.fromNode = "FrameStepper";
ROUTE342.fromField = "value_changed";
ROUTE342.toNode = "Interpolator2_vl5";
ROUTE342.toField = "set_fraction";
browser.currentScene.children[14] = ROUTE342;

let ROUTE343 = browser.currentScene.createNode("ROUTE");
ROUTE343.fromNode = "Interpolator2_vl5";
ROUTE343.fromField = "value_changed";
ROUTE343.toNode = "BvhUniversityWisconsionExample1_vl5";
ROUTE343.toField = "set_rotation";
browser.currentScene.children[15] = ROUTE343;

let ROUTE344 = browser.currentScene.createNode("ROUTE");
ROUTE344.fromNode = "RealTimer";
ROUTE344.fromField = "fraction_changed";
ROUTE344.toNode = "Interpolator3_Neck";
ROUTE344.toField = "set_fraction";
browser.currentScene.children[16] = ROUTE344;

let ROUTE345 = browser.currentScene.createNode("ROUTE");
ROUTE345.fromNode = "FrameStepper";
ROUTE345.fromField = "value_changed";
ROUTE345.toNode = "Interpolator3_Neck";
ROUTE345.toField = "set_fraction";
browser.currentScene.children[17] = ROUTE345;

let ROUTE346 = browser.currentScene.createNode("ROUTE");
ROUTE346.fromNode = "Interpolator3_Neck";
ROUTE346.fromField = "value_changed";
ROUTE346.toNode = "BvhUniversityWisconsionExample1_Neck";
ROUTE346.toField = "set_rotation";
browser.currentScene.children[18] = ROUTE346;

let ROUTE347 = browser.currentScene.createNode("ROUTE");
ROUTE347.fromNode = "RealTimer";
ROUTE347.fromField = "fraction_changed";
ROUTE347.toNode = "Interpolator4_skullbase";
ROUTE347.toField = "set_fraction";
browser.currentScene.children[19] = ROUTE347;

let ROUTE348 = browser.currentScene.createNode("ROUTE");
ROUTE348.fromNode = "FrameStepper";
ROUTE348.fromField = "value_changed";
ROUTE348.toNode = "Interpolator4_skullbase";
ROUTE348.toField = "set_fraction";
browser.currentScene.children[20] = ROUTE348;

let ROUTE349 = browser.currentScene.createNode("ROUTE");
ROUTE349.fromNode = "Interpolator4_skullbase";
ROUTE349.fromField = "value_changed";
ROUTE349.toNode = "BvhUniversityWisconsionExample1_skullbase";
ROUTE349.toField = "set_rotation";
browser.currentScene.children[21] = ROUTE349;

let ROUTE350 = browser.currentScene.createNode("ROUTE");
ROUTE350.fromNode = "RealTimer";
ROUTE350.fromField = "fraction_changed";
ROUTE350.toNode = "Interpolator5_LeftCollar";
ROUTE350.toField = "set_fraction";
browser.currentScene.children[22] = ROUTE350;

let ROUTE351 = browser.currentScene.createNode("ROUTE");
ROUTE351.fromNode = "FrameStepper";
ROUTE351.fromField = "value_changed";
ROUTE351.toNode = "Interpolator5_LeftCollar";
ROUTE351.toField = "set_fraction";
browser.currentScene.children[23] = ROUTE351;

let ROUTE352 = browser.currentScene.createNode("ROUTE");
ROUTE352.fromNode = "Interpolator5_LeftCollar";
ROUTE352.fromField = "value_changed";
ROUTE352.toNode = "BvhUniversityWisconsionExample1_LeftCollar";
ROUTE352.toField = "set_rotation";
browser.currentScene.children[24] = ROUTE352;

let ROUTE353 = browser.currentScene.createNode("ROUTE");
ROUTE353.fromNode = "RealTimer";
ROUTE353.fromField = "fraction_changed";
ROUTE353.toNode = "Interpolator6_LeftUpArm";
ROUTE353.toField = "set_fraction";
browser.currentScene.children[25] = ROUTE353;

let ROUTE354 = browser.currentScene.createNode("ROUTE");
ROUTE354.fromNode = "FrameStepper";
ROUTE354.fromField = "value_changed";
ROUTE354.toNode = "Interpolator6_LeftUpArm";
ROUTE354.toField = "set_fraction";
browser.currentScene.children[26] = ROUTE354;

let ROUTE355 = browser.currentScene.createNode("ROUTE");
ROUTE355.fromNode = "Interpolator6_LeftUpArm";
ROUTE355.fromField = "value_changed";
ROUTE355.toNode = "BvhUniversityWisconsionExample1_LeftUpArm";
ROUTE355.toField = "set_rotation";
browser.currentScene.children[27] = ROUTE355;

let ROUTE356 = browser.currentScene.createNode("ROUTE");
ROUTE356.fromNode = "RealTimer";
ROUTE356.fromField = "fraction_changed";
ROUTE356.toNode = "Interpolator7_LeftLowArm";
ROUTE356.toField = "set_fraction";
browser.currentScene.children[28] = ROUTE356;

let ROUTE357 = browser.currentScene.createNode("ROUTE");
ROUTE357.fromNode = "FrameStepper";
ROUTE357.fromField = "value_changed";
ROUTE357.toNode = "Interpolator7_LeftLowArm";
ROUTE357.toField = "set_fraction";
browser.currentScene.children[29] = ROUTE357;

let ROUTE358 = browser.currentScene.createNode("ROUTE");
ROUTE358.fromNode = "Interpolator7_LeftLowArm";
ROUTE358.fromField = "value_changed";
ROUTE358.toNode = "BvhUniversityWisconsionExample1_LeftLowArm";
ROUTE358.toField = "set_rotation";
browser.currentScene.children[30] = ROUTE358;

let ROUTE359 = browser.currentScene.createNode("ROUTE");
ROUTE359.fromNode = "RealTimer";
ROUTE359.fromField = "fraction_changed";
ROUTE359.toNode = "Interpolator8_LeftHand";
ROUTE359.toField = "set_fraction";
browser.currentScene.children[31] = ROUTE359;

let ROUTE360 = browser.currentScene.createNode("ROUTE");
ROUTE360.fromNode = "FrameStepper";
ROUTE360.fromField = "value_changed";
ROUTE360.toNode = "Interpolator8_LeftHand";
ROUTE360.toField = "set_fraction";
browser.currentScene.children[32] = ROUTE360;

let ROUTE361 = browser.currentScene.createNode("ROUTE");
ROUTE361.fromNode = "Interpolator8_LeftHand";
ROUTE361.fromField = "value_changed";
ROUTE361.toNode = "BvhUniversityWisconsionExample1_LeftHand";
ROUTE361.toField = "set_rotation";
browser.currentScene.children[33] = ROUTE361;

let ROUTE362 = browser.currentScene.createNode("ROUTE");
ROUTE362.fromNode = "RealTimer";
ROUTE362.fromField = "fraction_changed";
ROUTE362.toNode = "Interpolator9_RightCollar";
ROUTE362.toField = "set_fraction";
browser.currentScene.children[34] = ROUTE362;

let ROUTE363 = browser.currentScene.createNode("ROUTE");
ROUTE363.fromNode = "FrameStepper";
ROUTE363.fromField = "value_changed";
ROUTE363.toNode = "Interpolator9_RightCollar";
ROUTE363.toField = "set_fraction";
browser.currentScene.children[35] = ROUTE363;

let ROUTE364 = browser.currentScene.createNode("ROUTE");
ROUTE364.fromNode = "Interpolator9_RightCollar";
ROUTE364.fromField = "value_changed";
ROUTE364.toNode = "BvhUniversityWisconsionExample1_RightCollar";
ROUTE364.toField = "set_rotation";
browser.currentScene.children[36] = ROUTE364;

let ROUTE365 = browser.currentScene.createNode("ROUTE");
ROUTE365.fromNode = "RealTimer";
ROUTE365.fromField = "fraction_changed";
ROUTE365.toNode = "Interpolator10_RightUpArm";
ROUTE365.toField = "set_fraction";
browser.currentScene.children[37] = ROUTE365;

let ROUTE366 = browser.currentScene.createNode("ROUTE");
ROUTE366.fromNode = "FrameStepper";
ROUTE366.fromField = "value_changed";
ROUTE366.toNode = "Interpolator10_RightUpArm";
ROUTE366.toField = "set_fraction";
browser.currentScene.children[38] = ROUTE366;

let ROUTE367 = browser.currentScene.createNode("ROUTE");
ROUTE367.fromNode = "Interpolator10_RightUpArm";
ROUTE367.fromField = "value_changed";
ROUTE367.toNode = "BvhUniversityWisconsionExample1_RightUpArm";
ROUTE367.toField = "set_rotation";
browser.currentScene.children[39] = ROUTE367;

let ROUTE368 = browser.currentScene.createNode("ROUTE");
ROUTE368.fromNode = "RealTimer";
ROUTE368.fromField = "fraction_changed";
ROUTE368.toNode = "Interpolator11_RightLowArm";
ROUTE368.toField = "set_fraction";
browser.currentScene.children[40] = ROUTE368;

let ROUTE369 = browser.currentScene.createNode("ROUTE");
ROUTE369.fromNode = "FrameStepper";
ROUTE369.fromField = "value_changed";
ROUTE369.toNode = "Interpolator11_RightLowArm";
ROUTE369.toField = "set_fraction";
browser.currentScene.children[41] = ROUTE369;

let ROUTE370 = browser.currentScene.createNode("ROUTE");
ROUTE370.fromNode = "Interpolator11_RightLowArm";
ROUTE370.fromField = "value_changed";
ROUTE370.toNode = "BvhUniversityWisconsionExample1_RightLowArm";
ROUTE370.toField = "set_rotation";
browser.currentScene.children[42] = ROUTE370;

let ROUTE371 = browser.currentScene.createNode("ROUTE");
ROUTE371.fromNode = "RealTimer";
ROUTE371.fromField = "fraction_changed";
ROUTE371.toNode = "Interpolator12_RightHand";
ROUTE371.toField = "set_fraction";
browser.currentScene.children[43] = ROUTE371;

let ROUTE372 = browser.currentScene.createNode("ROUTE");
ROUTE372.fromNode = "FrameStepper";
ROUTE372.fromField = "value_changed";
ROUTE372.toNode = "Interpolator12_RightHand";
ROUTE372.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE372;

let ROUTE373 = browser.currentScene.createNode("ROUTE");
ROUTE373.fromNode = "Interpolator12_RightHand";
ROUTE373.fromField = "value_changed";
ROUTE373.toNode = "BvhUniversityWisconsionExample1_RightHand";
ROUTE373.toField = "set_rotation";
browser.currentScene.children[45] = ROUTE373;

let ROUTE374 = browser.currentScene.createNode("ROUTE");
ROUTE374.fromNode = "RealTimer";
ROUTE374.fromField = "fraction_changed";
ROUTE374.toNode = "Interpolator13_LeftUpLeg";
ROUTE374.toField = "set_fraction";
browser.currentScene.children[46] = ROUTE374;

let ROUTE375 = browser.currentScene.createNode("ROUTE");
ROUTE375.fromNode = "FrameStepper";
ROUTE375.fromField = "value_changed";
ROUTE375.toNode = "Interpolator13_LeftUpLeg";
ROUTE375.toField = "set_fraction";
browser.currentScene.children[47] = ROUTE375;

let ROUTE376 = browser.currentScene.createNode("ROUTE");
ROUTE376.fromNode = "Interpolator13_LeftUpLeg";
ROUTE376.fromField = "value_changed";
ROUTE376.toNode = "BvhUniversityWisconsionExample1_LeftUpLeg";
ROUTE376.toField = "set_rotation";
browser.currentScene.children[48] = ROUTE376;

let ROUTE377 = browser.currentScene.createNode("ROUTE");
ROUTE377.fromNode = "RealTimer";
ROUTE377.fromField = "fraction_changed";
ROUTE377.toNode = "Interpolator14_LeftLowLeg";
ROUTE377.toField = "set_fraction";
browser.currentScene.children[49] = ROUTE377;

let ROUTE378 = browser.currentScene.createNode("ROUTE");
ROUTE378.fromNode = "FrameStepper";
ROUTE378.fromField = "value_changed";
ROUTE378.toNode = "Interpolator14_LeftLowLeg";
ROUTE378.toField = "set_fraction";
browser.currentScene.children[50] = ROUTE378;

let ROUTE379 = browser.currentScene.createNode("ROUTE");
ROUTE379.fromNode = "Interpolator14_LeftLowLeg";
ROUTE379.fromField = "value_changed";
ROUTE379.toNode = "BvhUniversityWisconsionExample1_LeftLowLeg";
ROUTE379.toField = "set_rotation";
browser.currentScene.children[51] = ROUTE379;

let ROUTE380 = browser.currentScene.createNode("ROUTE");
ROUTE380.fromNode = "RealTimer";
ROUTE380.fromField = "fraction_changed";
ROUTE380.toNode = "Interpolator15_LeftFoot";
ROUTE380.toField = "set_fraction";
browser.currentScene.children[52] = ROUTE380;

let ROUTE381 = browser.currentScene.createNode("ROUTE");
ROUTE381.fromNode = "FrameStepper";
ROUTE381.fromField = "value_changed";
ROUTE381.toNode = "Interpolator15_LeftFoot";
ROUTE381.toField = "set_fraction";
browser.currentScene.children[53] = ROUTE381;

let ROUTE382 = browser.currentScene.createNode("ROUTE");
ROUTE382.fromNode = "Interpolator15_LeftFoot";
ROUTE382.fromField = "value_changed";
ROUTE382.toNode = "BvhUniversityWisconsionExample1_LeftFoot";
ROUTE382.toField = "set_rotation";
browser.currentScene.children[54] = ROUTE382;

let ROUTE383 = browser.currentScene.createNode("ROUTE");
ROUTE383.fromNode = "RealTimer";
ROUTE383.fromField = "fraction_changed";
ROUTE383.toNode = "Interpolator16_RightUpLeg";
ROUTE383.toField = "set_fraction";
browser.currentScene.children[55] = ROUTE383;

let ROUTE384 = browser.currentScene.createNode("ROUTE");
ROUTE384.fromNode = "FrameStepper";
ROUTE384.fromField = "value_changed";
ROUTE384.toNode = "Interpolator16_RightUpLeg";
ROUTE384.toField = "set_fraction";
browser.currentScene.children[56] = ROUTE384;

let ROUTE385 = browser.currentScene.createNode("ROUTE");
ROUTE385.fromNode = "Interpolator16_RightUpLeg";
ROUTE385.fromField = "value_changed";
ROUTE385.toNode = "BvhUniversityWisconsionExample1_RightUpLeg";
ROUTE385.toField = "set_rotation";
browser.currentScene.children[57] = ROUTE385;

let ROUTE386 = browser.currentScene.createNode("ROUTE");
ROUTE386.fromNode = "RealTimer";
ROUTE386.fromField = "fraction_changed";
ROUTE386.toNode = "Interpolator17_RightLowLeg";
ROUTE386.toField = "set_fraction";
browser.currentScene.children[58] = ROUTE386;

let ROUTE387 = browser.currentScene.createNode("ROUTE");
ROUTE387.fromNode = "FrameStepper";
ROUTE387.fromField = "value_changed";
ROUTE387.toNode = "Interpolator17_RightLowLeg";
ROUTE387.toField = "set_fraction";
browser.currentScene.children[59] = ROUTE387;

let ROUTE388 = browser.currentScene.createNode("ROUTE");
ROUTE388.fromNode = "Interpolator17_RightLowLeg";
ROUTE388.fromField = "value_changed";
ROUTE388.toNode = "BvhUniversityWisconsionExample1_RightLowLeg";
ROUTE388.toField = "set_rotation";
browser.currentScene.children[60] = ROUTE388;

let ROUTE389 = browser.currentScene.createNode("ROUTE");
ROUTE389.fromNode = "RealTimer";
ROUTE389.fromField = "fraction_changed";
ROUTE389.toNode = "Interpolator18_RightFoot";
ROUTE389.toField = "set_fraction";
browser.currentScene.children[61] = ROUTE389;

let ROUTE390 = browser.currentScene.createNode("ROUTE");
ROUTE390.fromNode = "FrameStepper";
ROUTE390.fromField = "value_changed";
ROUTE390.toNode = "Interpolator18_RightFoot";
ROUTE390.toField = "set_fraction";
browser.currentScene.children[62] = ROUTE390;

let ROUTE391 = browser.currentScene.createNode("ROUTE");
ROUTE391.fromNode = "Interpolator18_RightFoot";
ROUTE391.fromField = "value_changed";
ROUTE391.toNode = "BvhUniversityWisconsionExample1_RightFoot";
ROUTE391.toField = "set_rotation";
browser.currentScene.children[63] = ROUTE391;

}
main ();
