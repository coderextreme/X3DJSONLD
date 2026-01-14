#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "BvhUniversityWisconsionExample1.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "BVH file conversion: *enter description here, short-sentence summaries preferred*";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "*enter name of original author here*";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "*enter date of initial version here*";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "translated";
meta7.content = "2 September 2023";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "Mon, 15 Sep 2025 05:21:02 GMT";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "BvhUniversityWIsconsionExample1.bvh";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "https://TODO/UniversityWIsconsionExample1.bvh";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[11] = meta13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "BvhUniversityWisconsionExample1.x3d";
children = new MFNode();

children[0] = WorldInfo15;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
children[1] = NavigationInfo16;

Group Group17 = createNode("Group");
Group17.DEF = "BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation";
MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "BvhToHAnimNameConversionTable";
MetadataString MetadataString19 = createNode("MetadataString");
MetadataString19.name = "ROOT_Hips";
MetadataString19.reference = "ROOT";
MetadataString19.value = new MFString(new java.lang.String["humanoid_root","sacrum"]);
MetadataSet18.value = new MFNode();

MetadataSet18.value[0] = MetadataString19;

MetadataString MetadataString20 = createNode("MetadataString");
MetadataString20.name = "Chest";
MetadataString20.reference = "JOINT";
MetadataString20.value = new MFString(new java.lang.String["vl5","l5"]);
MetadataSet18.value[1] = MetadataString20;

MetadataString MetadataString21 = createNode("MetadataString");
MetadataString21.name = "Neck";
MetadataString21.reference = "JOINT";
MetadataString21.value = new MFString(new java.lang.String["Neck","vl5_to_Neck"]);
MetadataSet18.value[2] = MetadataString21;

MetadataString MetadataString22 = createNode("MetadataString");
MetadataString22.name = "Head";
MetadataString22.reference = "JOINT";
MetadataString22.value = new MFString(new java.lang.String["skullbase","skull"]);
MetadataSet18.value[3] = MetadataString22;

MetadataString MetadataString23 = createNode("MetadataString");
MetadataString23.name = "HeadSite";
MetadataString23.reference = "Site";
MetadataString23.value = new MFString(new java.lang.String["skullbase_tip"]);
MetadataSet18.value[4] = MetadataString23;

MetadataString MetadataString24 = createNode("MetadataString");
MetadataString24.name = "LeftCollar";
MetadataString24.reference = "JOINT";
MetadataString24.value = new MFString(new java.lang.String["LeftCollar","vl5_to_LeftCollar"]);
MetadataSet18.value[5] = MetadataString24;

MetadataString MetadataString25 = createNode("MetadataString");
MetadataString25.name = "LeftUpArm";
MetadataString25.reference = "JOINT";
MetadataString25.value = new MFString(new java.lang.String["LeftUpArm","LeftCollar_to_LeftUpArm"]);
MetadataSet18.value[6] = MetadataString25;

MetadataString MetadataString26 = createNode("MetadataString");
MetadataString26.name = "LeftLowArm";
MetadataString26.reference = "JOINT";
MetadataString26.value = new MFString(new java.lang.String["LeftLowArm","LeftUpArm_to_LeftLowArm"]);
MetadataSet18.value[7] = MetadataString26;

MetadataString MetadataString27 = createNode("MetadataString");
MetadataString27.name = "LeftHand";
MetadataString27.reference = "JOINT";
MetadataString27.value = new MFString(new java.lang.String["LeftHand","LeftLowArm_to_LeftHand"]);
MetadataSet18.value[8] = MetadataString27;

MetadataString MetadataString28 = createNode("MetadataString");
MetadataString28.name = "LeftHandSite";
MetadataString28.reference = "Site";
MetadataString28.value = new MFString(new java.lang.String["LeftHand_tip"]);
MetadataSet18.value[9] = MetadataString28;

MetadataString MetadataString29 = createNode("MetadataString");
MetadataString29.name = "RightCollar";
MetadataString29.reference = "JOINT";
MetadataString29.value = new MFString(new java.lang.String["RightCollar","vl5_to_RightCollar"]);
MetadataSet18.value[10] = MetadataString29;

MetadataString MetadataString30 = createNode("MetadataString");
MetadataString30.name = "RightUpArm";
MetadataString30.reference = "JOINT";
MetadataString30.value = new MFString(new java.lang.String["RightUpArm","RightCollar_to_RightUpArm"]);
MetadataSet18.value[11] = MetadataString30;

MetadataString MetadataString31 = createNode("MetadataString");
MetadataString31.name = "RightLowArm";
MetadataString31.reference = "JOINT";
MetadataString31.value = new MFString(new java.lang.String["RightLowArm","RightUpArm_to_RightLowArm"]);
MetadataSet18.value[12] = MetadataString31;

MetadataString MetadataString32 = createNode("MetadataString");
MetadataString32.name = "RightHand";
MetadataString32.reference = "JOINT";
MetadataString32.value = new MFString(new java.lang.String["RightHand","RightLowArm_to_RightHand"]);
MetadataSet18.value[13] = MetadataString32;

MetadataString MetadataString33 = createNode("MetadataString");
MetadataString33.name = "RightHandSite";
MetadataString33.reference = "Site";
MetadataString33.value = new MFString(new java.lang.String["RightHand_tip"]);
MetadataSet18.value[14] = MetadataString33;

MetadataString MetadataString34 = createNode("MetadataString");
MetadataString34.name = "LeftUpLeg";
MetadataString34.reference = "JOINT";
MetadataString34.value = new MFString(new java.lang.String["LeftUpLeg","humanoid_root_to_LeftUpLeg"]);
MetadataSet18.value[15] = MetadataString34;

MetadataString MetadataString35 = createNode("MetadataString");
MetadataString35.name = "LeftLowLeg";
MetadataString35.reference = "JOINT";
MetadataString35.value = new MFString(new java.lang.String["LeftLowLeg","LeftUpLeg_to_LeftLowLeg"]);
MetadataSet18.value[16] = MetadataString35;

MetadataString MetadataString36 = createNode("MetadataString");
MetadataString36.name = "LeftFoot";
MetadataString36.reference = "JOINT";
MetadataString36.value = new MFString(new java.lang.String["LeftFoot","LeftLowLeg_to_LeftFoot"]);
MetadataSet18.value[17] = MetadataString36;

MetadataString MetadataString37 = createNode("MetadataString");
MetadataString37.name = "LeftFootSite";
MetadataString37.reference = "Site";
MetadataString37.value = new MFString(new java.lang.String["LeftFoot_tip"]);
MetadataSet18.value[18] = MetadataString37;

MetadataString MetadataString38 = createNode("MetadataString");
MetadataString38.name = "RightUpLeg";
MetadataString38.reference = "JOINT";
MetadataString38.value = new MFString(new java.lang.String["RightUpLeg","humanoid_root_to_RightUpLeg"]);
MetadataSet18.value[19] = MetadataString38;

MetadataString MetadataString39 = createNode("MetadataString");
MetadataString39.name = "RightLowLeg";
MetadataString39.reference = "JOINT";
MetadataString39.value = new MFString(new java.lang.String["RightLowLeg","RightUpLeg_to_RightLowLeg"]);
MetadataSet18.value[20] = MetadataString39;

MetadataString MetadataString40 = createNode("MetadataString");
MetadataString40.name = "RightFoot";
MetadataString40.reference = "JOINT";
MetadataString40.value = new MFString(new java.lang.String["RightFoot","RightLowLeg_to_RightFoot"]);
MetadataSet18.value[21] = MetadataString40;

MetadataString MetadataString41 = createNode("MetadataString");
MetadataString41.name = "RightFootSite";
MetadataString41.reference = "Site";
MetadataString41.value = new MFString(new java.lang.String["RightFoot_tip"]);
MetadataSet18.value[22] = MetadataString41;

Group17.metadata = MetadataSet18;

children[2] = Group17;

Transform Transform42 = createNode("Transform");
Transform42.DEF = "InitialPositionScaled";
Transform42.translation = new SFVec3f(new float[0,1.244,0]);
Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.description = "BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m";
Viewpoint43.position = new SFVec3f(new float[0,0,8]);
Transform42.children = new MFNode();

Transform42.children[0] = Viewpoint43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.description = "BvhUniversityWisconsionExample1 initial motion position";
Viewpoint44.position = new SFVec3f(new float[0.803,3.501,16.836]);
Transform42.children[1] = Viewpoint44;

Viewpoint Viewpoint45 = createNode("Viewpoint");
Viewpoint45.description = "BvhUniversityWisconsionExample1 final motion position";
Viewpoint45.position = new SFVec3f(new float[0.781,3.51,16.647]);
Transform42.children[2] = Viewpoint45;

children[3] = Transform42;

HAnimHumanoid HAnimHumanoid46 = createNode("HAnimHumanoid");
HAnimHumanoid46.DEF = "BvhUniversityWisconsionExample1_ROOT_Hips";
HAnimHumanoid46.name = "ROOT_Hips";
MetadataSet MetadataSet47 = createNode("MetadataSet");
MetadataSet47.name = "HAnimHumanoid.info";
MetadataSet47.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString48 = createNode("MetadataString");
MetadataString48.name = "authorEmail";
MetadataString48.value = new MFString(new java.lang.String["*TODO*"]);
MetadataSet47.value = new MFNode();

MetadataSet47.value[0] = MetadataString48;

MetadataString MetadataString49 = createNode("MetadataString");
MetadataString49.name = "authorName";
MetadataString49.value = new MFString(new java.lang.String["*TODO*"]);
MetadataSet47.value[1] = MetadataString49;

MetadataString MetadataString50 = createNode("MetadataString");
MetadataString50.name = "copyright";
MetadataString50.value = new MFString(new java.lang.String["Copyright (c) 2023"]);
MetadataSet47.value[2] = MetadataString50;

MetadataString MetadataString51 = createNode("MetadataString");
MetadataString51.name = "humanoidVersion";
MetadataString51.value = new MFString(new java.lang.String["*TODO*"]);
MetadataSet47.value[3] = MetadataString51;

MetadataString MetadataString52 = createNode("MetadataString");
MetadataString52.name = "usageDescription";
MetadataString52.value = new MFString(new java.lang.String["*TODO*"]);
MetadataSet47.value[4] = MetadataString52;

HAnimHumanoid46.metadata = new SFNode();

HAnimHumanoid46.metadata[0] = MetadataSet47;

HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.DEF = "BvhUniversityWisconsionExample1_humanoid_root";
HAnimJoint53.name = "humanoid_root";
HAnimJoint53.translation = new SFVec3f(new float[0.7849403,3.508388,8.680851]);
HAnimJoint53.rotation = new SFRotation(new float[-0.0184530858032817,-0.992698784706892,-0.119199859336308,2.9151883640198]);
HAnimJoint53.scale = new SFVec3f(new float[0.1,0.1,0.1]);
HAnimSegment HAnimSegment54 = createNode("HAnimSegment");
HAnimSegment54.DEF = "BvhUniversityWisconsionExample1_sacrum";
HAnimSegment54.name = "sacrum";
Switch Switch55 = createNode("Switch");
Switch55.whichChoice = 0;
Group Group56 = createNode("Group");
TouchSensor TouchSensor57 = createNode("TouchSensor");
TouchSensor57.description = "HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum";
Group56.children = new MFNode();

Group56.children[0] = TouchSensor57;

Shape Shape58 = createNode("Shape");
Shape58.DEF = "HAnimRootShape";
Appearance Appearance59 = createNode("Appearance");
Material Material60 = createNode("Material");
Material60.DEF = "HAnimRootMaterial";
Material60.diffuseColor = new SFColor(new float[0.8,0,0]);
Material60.transparency = 0.3;
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

Sphere Sphere61 = createNode("Sphere");
Sphere61.DEF = "HAnimJointSphere";
Sphere61.radius = 0.254;
Shape58.geometry = Sphere61;

Group56.children[1] = Shape58;

Switch55.children = new MFNode();

Switch55.children[0] = Group56;

Shape Shape62 = createNode("Shape");
Shape62.DEF = "HAnimJointShape";
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.DEF = "HAnimJointMaterial";
Material64.diffuseColor = new SFColor(new float[0,0,0.8]);
Material64.transparency = 0.3;
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

Sphere Sphere65 = createNode("Sphere");
Sphere65.USE = "HAnimJointSphere";
Shape62.geometry = Sphere65;

Switch55.children[1] = Shape62;

Shape Shape66 = createNode("Shape");
LineSet LineSet67 = createNode("LineSet");
LineSet67.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA68 = createNode("ColorRGBA");
ColorRGBA68.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA68.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet67.color = ColorRGBA68;

Coordinate Coordinate69 = createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[0,0,0,0,0,0]);
LineSet67.coord = Coordinate69;

Shape66.geometry = LineSet67;

Switch55.children[2] = Shape66;

Shape Shape70 = createNode("Shape");
Shape70.DEF = "HAnimSiteShape";
Appearance Appearance71 = createNode("Appearance");
Material Material72 = createNode("Material");
Material72.diffuseColor = new SFColor(new float[1,0.5,0]);
Material72.transparency = 0.3;
Appearance71.material = Material72;

Shape70.appearance = Appearance71;

IndexedFaceSet IndexedFaceSet73 = createNode("IndexedFaceSet");
IndexedFaceSet73.DEF = "DiamondIFS";
IndexedFaceSet73.solid = False;
IndexedFaceSet73.creaseAngle = 0.5;
IndexedFaceSet73.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate74 = createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[0,0.254,0,-0.254,0,0,0,0,0.254,0.254,0,0,0,0,-0.254,0,-0.254,0]);
IndexedFaceSet73.coord = Coordinate74;

Shape70.geometry = IndexedFaceSet73;

Switch55.children[3] = Shape70;

Shape Shape75 = createNode("Shape");
LineSet LineSet76 = createNode("LineSet");
LineSet76.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA77 = createNode("ColorRGBA");
ColorRGBA77.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA77.color = new MFColorRGBA(new float[1,0.5,0,1,1,0.5,0,0.1]);
LineSet76.color = ColorRGBA77;

Coordinate Coordinate78 = createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[0,0,0,0,0,0]);
LineSet76.coord = Coordinate78;

Shape75.geometry = LineSet76;

Switch55.children[4] = Shape75;

HAnimSegment54.children = new MFNode();

HAnimSegment54.children[0] = Switch55;

Shape Shape79 = createNode("Shape");
LineSet LineSet80 = createNode("LineSet");
LineSet80.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA81 = createNode("ColorRGBA");
ColorRGBA81.USE = "HAnimSegmentLineColorRGBA";
LineSet80.color = ColorRGBA81;

Coordinate Coordinate82 = createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[0,0,0,0,5.21,0]);
LineSet80.coord = Coordinate82;

Shape79.geometry = LineSet80;

HAnimSegment54.children[1] = Shape79;

Shape Shape83 = createNode("Shape");
LineSet LineSet84 = createNode("LineSet");
LineSet84.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA85 = createNode("ColorRGBA");
ColorRGBA85.USE = "HAnimSegmentLineColorRGBA";
LineSet84.color = ColorRGBA85;

Coordinate Coordinate86 = createNode("Coordinate");
Coordinate86.point = new MFVec3f(new float[0,0,0,3.91,0,0]);
LineSet84.coord = Coordinate86;

Shape83.geometry = LineSet84;

HAnimSegment54.children[2] = Shape83;

Shape Shape87 = createNode("Shape");
LineSet LineSet88 = createNode("LineSet");
LineSet88.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA89 = createNode("ColorRGBA");
ColorRGBA89.USE = "HAnimSegmentLineColorRGBA";
LineSet88.color = ColorRGBA89;

Coordinate Coordinate90 = createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[0,0,0,-3.91,0,0]);
LineSet88.coord = Coordinate90;

Shape87.geometry = LineSet88;

HAnimSegment54.children[3] = Shape87;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimSegment54;

HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.DEF = "BvhUniversityWisconsionExample1_vl5";
HAnimJoint91.name = "vl5";
HAnimJoint91.rotation = new SFRotation(new float[0.929559139694865,-0.360437334785587,0.0774902155269029,0.820797255601436]);
HAnimJoint91.center = new SFVec3f(new float[0,5.21,0]);
HAnimSegment HAnimSegment92 = createNode("HAnimSegment");
HAnimSegment92.DEF = "BvhUniversityWisconsionExample1_l5";
HAnimSegment92.name = "l5";
Transform Transform93 = createNode("Transform");
Transform93.translation = new SFVec3f(new float[0,5.21,0]);
TouchSensor TouchSensor94 = createNode("TouchSensor");
TouchSensor94.description = "HAnimJoint Chest vl5, HAnimSegment l5";
Transform93.children = new MFNode();

Transform93.children[0] = TouchSensor94;

Shape Shape95 = createNode("Shape");
Shape95.USE = "HAnimJointShape";
Transform93.child[1] = Shape95;

Shape Shape96 = createNode("Shape");
LineSet LineSet97 = createNode("LineSet");
LineSet97.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA98 = createNode("ColorRGBA");
ColorRGBA98.USE = "HAnimSegmentLineColorRGBA";
LineSet97.color = ColorRGBA98;

Coordinate Coordinate99 = createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[0,0,0,0,18.65,0]);
LineSet97.coord = Coordinate99;

Shape96.geometry = LineSet97;

Transform93.child[2] = Shape96;

Shape Shape100 = createNode("Shape");
LineSet LineSet101 = createNode("LineSet");
LineSet101.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA102 = createNode("ColorRGBA");
ColorRGBA102.USE = "HAnimSegmentLineColorRGBA";
LineSet101.color = ColorRGBA102;

Coordinate Coordinate103 = createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[0,0,0,1.12,16.23,1.87]);
LineSet101.coord = Coordinate103;

Shape100.geometry = LineSet101;

Transform93.child[3] = Shape100;

Shape Shape104 = createNode("Shape");
LineSet LineSet105 = createNode("LineSet");
LineSet105.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA106 = createNode("ColorRGBA");
ColorRGBA106.USE = "HAnimSegmentLineColorRGBA";
LineSet105.color = ColorRGBA106;

Coordinate Coordinate107 = createNode("Coordinate");
Coordinate107.point = new MFVec3f(new float[0,0,0,-1.12,16.23,1.87]);
LineSet105.coord = Coordinate107;

Shape104.geometry = LineSet105;

Transform93.child[4] = Shape104;

HAnimSegment92.children = new MFNode();

HAnimSegment92.children[0] = Transform93;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimSegment92;

HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.DEF = "BvhUniversityWisconsionExample1_Neck";
HAnimJoint108.name = "Neck";
HAnimJoint108.rotation = new SFRotation(new float[0.983970484111271,0.0663053900569327,0.16554661472597,0.772979753553571]);
HAnimJoint108.center = new SFVec3f(new float[0,23.86,0]);
HAnimSegment HAnimSegment109 = createNode("HAnimSegment");
HAnimSegment109.DEF = "BvhUniversityWisconsionExample1_vl5_to_Neck";
HAnimSegment109.name = "vl5_to_Neck";
Transform Transform110 = createNode("Transform");
Transform110.translation = new SFVec3f(new float[0,23.86,0]);
TouchSensor TouchSensor111 = createNode("TouchSensor");
TouchSensor111.description = "HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck";
Transform110.children = new MFNode();

Transform110.children[0] = TouchSensor111;

Shape Shape112 = createNode("Shape");
Shape112.USE = "HAnimJointShape";
Transform110.child[1] = Shape112;

Shape Shape113 = createNode("Shape");
LineSet LineSet114 = createNode("LineSet");
LineSet114.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA115 = createNode("ColorRGBA");
ColorRGBA115.USE = "HAnimSegmentLineColorRGBA";
LineSet114.color = ColorRGBA115;

Coordinate Coordinate116 = createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0,0,0,0,5.45,0]);
LineSet114.coord = Coordinate116;

Shape113.geometry = LineSet114;

Transform110.child[2] = Shape113;

HAnimSegment109.children = new MFNode();

HAnimSegment109.children[0] = Transform110;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.DEF = "BvhUniversityWisconsionExample1_skullbase";
HAnimJoint117.name = "skullbase";
HAnimJoint117.rotation = new SFRotation(new float[-0.979126474330309,0.150183590569867,-0.136953409556093,0.734508385229556]);
HAnimJoint117.center = new SFVec3f(new float[0,29.31,0]);
HAnimSegment HAnimSegment118 = createNode("HAnimSegment");
HAnimSegment118.DEF = "BvhUniversityWisconsionExample1_skull";
HAnimSegment118.name = "skull";
Transform Transform119 = createNode("Transform");
Transform119.translation = new SFVec3f(new float[0,29.31,0]);
HAnimSite HAnimSite120 = createNode("HAnimSite");
HAnimSite120.DEF = "BvhUniversityWisconsionExample1_skull_tip";
HAnimSite120.name = "skull_tip";
HAnimSite120.translation = new SFVec3f(new float[0,3.87,0]);
TouchSensor TouchSensor121 = createNode("TouchSensor");
TouchSensor121.description = "HAnimSite skull_tip";
HAnimSite120.children = new MFNode();

HAnimSite120.children[0] = TouchSensor121;

Shape Shape122 = createNode("Shape");
Shape122.USE = "HAnimSiteShape";
HAnimSite120.children[1] = Shape122;

Shape Shape123 = createNode("Shape");
LineSet LineSet124 = createNode("LineSet");
LineSet124.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA125 = createNode("ColorRGBA");
ColorRGBA125.USE = "HAnimSiteLineColorRGBA";
LineSet124.color = ColorRGBA125;

Coordinate Coordinate126 = createNode("Coordinate");
Coordinate126.point = new MFVec3f(new float[0,-3.87,0,0,0,0]);
LineSet124.coord = Coordinate126;

Shape123.geometry = LineSet124;

HAnimSite120.children[2] = Shape123;

Transform119.children = new MFNode();

Transform119.children[0] = HAnimSite120;

TouchSensor TouchSensor127 = createNode("TouchSensor");
TouchSensor127.description = "HAnimJoint Head skullbase, HAnimSegment skull";
Transform119.children[1] = TouchSensor127;

Shape Shape128 = createNode("Shape");
Shape128.USE = "HAnimJointShape";
Transform119.child[2] = Shape128;

HAnimSegment118.children = new MFNode();

HAnimSegment118.children[0] = Transform119;

HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

HAnimJoint108.children[1] = HAnimJoint117;

HAnimJoint91.children[1] = HAnimJoint108;

HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.DEF = "BvhUniversityWisconsionExample1_LeftCollar";
HAnimJoint129.name = "LeftCollar";
HAnimJoint129.rotation = new SFRotation(new float[-0.0400336310146056,0.285571817840178,0.957520780580368,0.318543581718216]);
HAnimJoint129.center = new SFVec3f(new float[1.12,21.44,1.87]);
HAnimSegment HAnimSegment130 = createNode("HAnimSegment");
HAnimSegment130.DEF = "BvhUniversityWisconsionExample1_vl5_to_LeftCollar";
HAnimSegment130.name = "vl5_to_LeftCollar";
Transform Transform131 = createNode("Transform");
Transform131.translation = new SFVec3f(new float[1.12,21.44,1.87]);
TouchSensor TouchSensor132 = createNode("TouchSensor");
TouchSensor132.description = "HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar";
Transform131.children = new MFNode();

Transform131.children[0] = TouchSensor132;

Shape Shape133 = createNode("Shape");
Shape133.USE = "HAnimJointShape";
Transform131.child[1] = Shape133;

Shape Shape134 = createNode("Shape");
LineSet LineSet135 = createNode("LineSet");
LineSet135.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA136 = createNode("ColorRGBA");
ColorRGBA136.USE = "HAnimSegmentLineColorRGBA";
LineSet135.color = ColorRGBA136;

Coordinate Coordinate137 = createNode("Coordinate");
Coordinate137.point = new MFVec3f(new float[0,0,0,5.54,0,0]);
LineSet135.coord = Coordinate137;

Shape134.geometry = LineSet135;

Transform131.child[2] = Shape134;

HAnimSegment130.children = new MFNode();

HAnimSegment130.children[0] = Transform131;

HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimSegment130;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.DEF = "BvhUniversityWisconsionExample1_LeftUpArm";
HAnimJoint138.name = "LeftUpArm";
HAnimJoint138.rotation = new SFRotation(new float[-0.027309899849048,-0.170484979510911,0.984981746598077,1.66813504770243]);
HAnimJoint138.center = new SFVec3f(new float[6.66,21.44,1.87]);
HAnimSegment HAnimSegment139 = createNode("HAnimSegment");
HAnimSegment139.DEF = "BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm";
HAnimSegment139.name = "LeftCollar_to_LeftUpArm";
Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[6.66,21.44,1.87]);
TouchSensor TouchSensor141 = createNode("TouchSensor");
TouchSensor141.description = "HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm";
Transform140.children = new MFNode();

Transform140.children[0] = TouchSensor141;

Shape Shape142 = createNode("Shape");
Shape142.USE = "HAnimJointShape";
Transform140.child[1] = Shape142;

Shape Shape143 = createNode("Shape");
LineSet LineSet144 = createNode("LineSet");
LineSet144.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA145 = createNode("ColorRGBA");
ColorRGBA145.USE = "HAnimSegmentLineColorRGBA";
LineSet144.color = ColorRGBA145;

Coordinate Coordinate146 = createNode("Coordinate");
Coordinate146.point = new MFVec3f(new float[0,0,0,0,-11.96,0]);
LineSet144.coord = Coordinate146;

Shape143.geometry = LineSet144;

Transform140.child[2] = Shape143;

HAnimSegment139.children = new MFNode();

HAnimSegment139.children[0] = Transform140;

HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimSegment139;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.DEF = "BvhUniversityWisconsionExample1_LeftLowArm";
HAnimJoint147.name = "LeftLowArm";
HAnimJoint147.rotation = new SFRotation(new float[-0.998249192144246,0.0587758586859541,-0.00662939055192083,1.65994762916941]);
HAnimJoint147.center = new SFVec3f(new float[6.66,9.48,1.87]);
HAnimSegment HAnimSegment148 = createNode("HAnimSegment");
HAnimSegment148.DEF = "BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm";
HAnimSegment148.name = "LeftUpArm_to_LeftLowArm";
Transform Transform149 = createNode("Transform");
Transform149.translation = new SFVec3f(new float[6.66,9.48,1.87]);
TouchSensor TouchSensor150 = createNode("TouchSensor");
TouchSensor150.description = "HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm";
Transform149.children = new MFNode();

Transform149.children[0] = TouchSensor150;

Shape Shape151 = createNode("Shape");
Shape151.USE = "HAnimJointShape";
Transform149.child[1] = Shape151;

Shape Shape152 = createNode("Shape");
LineSet LineSet153 = createNode("LineSet");
LineSet153.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA154 = createNode("ColorRGBA");
ColorRGBA154.USE = "HAnimSegmentLineColorRGBA";
LineSet153.color = ColorRGBA154;

Coordinate Coordinate155 = createNode("Coordinate");
Coordinate155.point = new MFVec3f(new float[0,0,0,0,-9.93,0]);
LineSet153.coord = Coordinate155;

Shape152.geometry = LineSet153;

Transform149.child[2] = Shape152;

HAnimSegment148.children = new MFNode();

HAnimSegment148.children[0] = Transform149;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.DEF = "BvhUniversityWisconsionExample1_LeftHand";
HAnimJoint156.name = "LeftHand";
HAnimJoint156.rotation = new SFRotation(new float[0.404520441533964,0.00251538810905742,0.914525497293667,0.0133189030390886]);
HAnimJoint156.center = new SFVec3f(new float[6.66,-0.45,1.87]);
HAnimSegment HAnimSegment157 = createNode("HAnimSegment");
HAnimSegment157.DEF = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand";
HAnimSegment157.name = "LeftLowArm_to_LeftHand";
Transform Transform158 = createNode("Transform");
Transform158.translation = new SFVec3f(new float[6.66,-0.45,1.87]);
HAnimSite HAnimSite159 = createNode("HAnimSite");
HAnimSite159.DEF = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip";
HAnimSite159.name = "LeftLowArm_to_LeftHand_tip";
HAnimSite159.translation = new SFVec3f(new float[0,-7,0]);
TouchSensor TouchSensor160 = createNode("TouchSensor");
TouchSensor160.description = "HAnimSite LeftLowArm_to_LeftHand_tip";
HAnimSite159.children = new MFNode();

HAnimSite159.children[0] = TouchSensor160;

Shape Shape161 = createNode("Shape");
Shape161.USE = "HAnimSiteShape";
HAnimSite159.children[1] = Shape161;

Shape Shape162 = createNode("Shape");
LineSet LineSet163 = createNode("LineSet");
LineSet163.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA164 = createNode("ColorRGBA");
ColorRGBA164.USE = "HAnimSiteLineColorRGBA";
LineSet163.color = ColorRGBA164;

Coordinate Coordinate165 = createNode("Coordinate");
Coordinate165.point = new MFVec3f(new float[0,7,0,0,0,0]);
LineSet163.coord = Coordinate165;

Shape162.geometry = LineSet163;

HAnimSite159.children[2] = Shape162;

Transform158.children = new MFNode();

Transform158.children[0] = HAnimSite159;

TouchSensor TouchSensor166 = createNode("TouchSensor");
TouchSensor166.description = "HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand";
Transform158.children[1] = TouchSensor166;

Shape Shape167 = createNode("Shape");
Shape167.USE = "HAnimJointShape";
Transform158.child[2] = Shape167;

HAnimSegment157.children = new MFNode();

HAnimSegment157.children[0] = Transform158;

HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimSegment157;

HAnimJoint147.children[1] = HAnimJoint156;

HAnimJoint138.children[1] = HAnimJoint147;

HAnimJoint129.children[1] = HAnimJoint138;

HAnimJoint91.children[2] = HAnimJoint129;

HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.DEF = "BvhUniversityWisconsionExample1_RightCollar";
HAnimJoint168.name = "RightCollar";
HAnimJoint168.rotation = new SFRotation(new float[-0.0717927567877157,-0.898736438505571,-0.432572091304025,0.383573753513759]);
HAnimJoint168.center = new SFVec3f(new float[-1.12,21.44,1.87]);
HAnimSegment HAnimSegment169 = createNode("HAnimSegment");
HAnimSegment169.DEF = "BvhUniversityWisconsionExample1_vl5_to_RightCollar";
HAnimSegment169.name = "vl5_to_RightCollar";
Transform Transform170 = createNode("Transform");
Transform170.translation = new SFVec3f(new float[-1.12,21.44,1.87]);
TouchSensor TouchSensor171 = createNode("TouchSensor");
TouchSensor171.description = "HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar";
Transform170.children = new MFNode();

Transform170.children[0] = TouchSensor171;

Shape Shape172 = createNode("Shape");
Shape172.USE = "HAnimJointShape";
Transform170.child[1] = Shape172;

Shape Shape173 = createNode("Shape");
LineSet LineSet174 = createNode("LineSet");
LineSet174.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA175 = createNode("ColorRGBA");
ColorRGBA175.USE = "HAnimSegmentLineColorRGBA";
LineSet174.color = ColorRGBA175;

Coordinate Coordinate176 = createNode("Coordinate");
Coordinate176.point = new MFVec3f(new float[0,0,0,-6.07,0,0]);
LineSet174.coord = Coordinate176;

Shape173.geometry = LineSet174;

Transform170.child[2] = Shape173;

HAnimSegment169.children = new MFNode();

HAnimSegment169.children[0] = Transform170;

HAnimJoint168.children = new MFNode();

HAnimJoint168.children[0] = HAnimSegment169;

HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.DEF = "BvhUniversityWisconsionExample1_RightUpArm";
HAnimJoint177.name = "RightUpArm";
HAnimJoint177.rotation = new SFRotation(new float[-0.750052184733347,-0.545300751513553,-0.374257679380781,1.93524054510947]);
HAnimJoint177.center = new SFVec3f(new float[-7.19,21.44,1.87]);
HAnimSegment HAnimSegment178 = createNode("HAnimSegment");
HAnimSegment178.DEF = "BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm";
HAnimSegment178.name = "RightCollar_to_RightUpArm";
Transform Transform179 = createNode("Transform");
Transform179.translation = new SFVec3f(new float[-7.19,21.44,1.87]);
TouchSensor TouchSensor180 = createNode("TouchSensor");
TouchSensor180.description = "HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm";
Transform179.children = new MFNode();

Transform179.children[0] = TouchSensor180;

Shape Shape181 = createNode("Shape");
Shape181.USE = "HAnimJointShape";
Transform179.child[1] = Shape181;

Shape Shape182 = createNode("Shape");
LineSet LineSet183 = createNode("LineSet");
LineSet183.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA184 = createNode("ColorRGBA");
ColorRGBA184.USE = "HAnimSegmentLineColorRGBA";
LineSet183.color = ColorRGBA184;

Coordinate Coordinate185 = createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[0,0,0,0,-11.82,0]);
LineSet183.coord = Coordinate185;

Shape182.geometry = LineSet183;

Transform179.child[2] = Shape182;

HAnimSegment178.children = new MFNode();

HAnimSegment178.children[0] = Transform179;

HAnimJoint177.children = new MFNode();

HAnimJoint177.children[0] = HAnimSegment178;

HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.DEF = "BvhUniversityWisconsionExample1_RightLowArm";
HAnimJoint186.name = "RightLowArm";
HAnimJoint186.rotation = new SFRotation(new float[-0.942326628906139,0.260683574441484,0.209915693722034,1.36514284873355]);
HAnimJoint186.center = new SFVec3f(new float[-7.19,9.62,1.87]);
HAnimSegment HAnimSegment187 = createNode("HAnimSegment");
HAnimSegment187.DEF = "BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm";
HAnimSegment187.name = "RightUpArm_to_RightLowArm";
Transform Transform188 = createNode("Transform");
Transform188.translation = new SFVec3f(new float[-7.19,9.62,1.87]);
TouchSensor TouchSensor189 = createNode("TouchSensor");
TouchSensor189.description = "HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm";
Transform188.children = new MFNode();

Transform188.children[0] = TouchSensor189;

Shape Shape190 = createNode("Shape");
Shape190.USE = "HAnimJointShape";
Transform188.child[1] = Shape190;

Shape Shape191 = createNode("Shape");
LineSet LineSet192 = createNode("LineSet");
LineSet192.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA193 = createNode("ColorRGBA");
ColorRGBA193.USE = "HAnimSegmentLineColorRGBA";
LineSet192.color = ColorRGBA193;

Coordinate Coordinate194 = createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0,0,0,0,-10.65,0]);
LineSet192.coord = Coordinate194;

Shape191.geometry = LineSet192;

Transform188.child[2] = Shape191;

HAnimSegment187.children = new MFNode();

HAnimSegment187.children[0] = Transform188;

HAnimJoint186.children = new MFNode();

HAnimJoint186.children[0] = HAnimSegment187;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.DEF = "BvhUniversityWisconsionExample1_RightHand";
HAnimJoint195.name = "RightHand";
HAnimJoint195.rotation = new SFRotation(new float[0.487401172792782,0.00827736333346378,-0.87313892480885,0.0323338299925714]);
HAnimJoint195.center = new SFVec3f(new float[-7.19,-1.03,1.87]);
HAnimSegment HAnimSegment196 = createNode("HAnimSegment");
HAnimSegment196.DEF = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand";
HAnimSegment196.name = "RightLowArm_to_RightHand";
Transform Transform197 = createNode("Transform");
Transform197.translation = new SFVec3f(new float[-7.19,-1.03,1.87]);
HAnimSite HAnimSite198 = createNode("HAnimSite");
HAnimSite198.DEF = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip";
HAnimSite198.name = "RightLowArm_to_RightHand_tip";
HAnimSite198.translation = new SFVec3f(new float[0,-7,0]);
TouchSensor TouchSensor199 = createNode("TouchSensor");
TouchSensor199.description = "HAnimSite RightLowArm_to_RightHand_tip";
HAnimSite198.children = new MFNode();

HAnimSite198.children[0] = TouchSensor199;

Shape Shape200 = createNode("Shape");
Shape200.USE = "HAnimSiteShape";
HAnimSite198.children[1] = Shape200;

Shape Shape201 = createNode("Shape");
LineSet LineSet202 = createNode("LineSet");
LineSet202.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA203 = createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSiteLineColorRGBA";
LineSet202.color = ColorRGBA203;

Coordinate Coordinate204 = createNode("Coordinate");
Coordinate204.point = new MFVec3f(new float[0,7,0,0,0,0]);
LineSet202.coord = Coordinate204;

Shape201.geometry = LineSet202;

HAnimSite198.children[2] = Shape201;

Transform197.children = new MFNode();

Transform197.children[0] = HAnimSite198;

TouchSensor TouchSensor205 = createNode("TouchSensor");
TouchSensor205.description = "HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand";
Transform197.children[1] = TouchSensor205;

Shape Shape206 = createNode("Shape");
Shape206.USE = "HAnimJointShape";
Transform197.child[2] = Shape206;

HAnimSegment196.children = new MFNode();

HAnimSegment196.children[0] = Transform197;

HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

HAnimJoint186.children[1] = HAnimJoint195;

HAnimJoint177.children[1] = HAnimJoint186;

HAnimJoint168.children[1] = HAnimJoint177;

HAnimJoint91.children[3] = HAnimJoint168;

HAnimJoint53.children[1] = HAnimJoint91;

HAnimJoint HAnimJoint207 = createNode("HAnimJoint");
HAnimJoint207.DEF = "BvhUniversityWisconsionExample1_LeftUpLeg";
HAnimJoint207.name = "LeftUpLeg";
HAnimJoint207.rotation = new SFRotation(new float[0.798274116909833,-0.0905296906431976,0.595451769150005,0.374616063385567]);
HAnimJoint207.center = new SFVec3f(new float[3.91,0,0]);
HAnimSegment HAnimSegment208 = createNode("HAnimSegment");
HAnimSegment208.DEF = "BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg";
HAnimSegment208.name = "humanoid_root_to_LeftUpLeg";
Transform Transform209 = createNode("Transform");
Transform209.translation = new SFVec3f(new float[3.91,0,0]);
TouchSensor TouchSensor210 = createNode("TouchSensor");
TouchSensor210.description = "HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg";
Transform209.children = new MFNode();

Transform209.children[0] = TouchSensor210;

Shape Shape211 = createNode("Shape");
Shape211.USE = "HAnimJointShape";
Transform209.child[1] = Shape211;

Shape Shape212 = createNode("Shape");
LineSet LineSet213 = createNode("LineSet");
LineSet213.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA214 = createNode("ColorRGBA");
ColorRGBA214.USE = "HAnimSegmentLineColorRGBA";
LineSet213.color = ColorRGBA214;

Coordinate Coordinate215 = createNode("Coordinate");
Coordinate215.point = new MFVec3f(new float[0,0,0,0,-18.34,0]);
LineSet213.coord = Coordinate215;

Shape212.geometry = LineSet213;

Transform209.child[2] = Shape212;

HAnimSegment208.children = new MFNode();

HAnimSegment208.children[0] = Transform209;

HAnimJoint207.children = new MFNode();

HAnimJoint207.children[0] = HAnimSegment208;

HAnimJoint HAnimJoint216 = createNode("HAnimJoint");
HAnimJoint216.DEF = "BvhUniversityWisconsionExample1_LeftLowLeg";
HAnimJoint216.name = "LeftLowLeg";
HAnimJoint216.rotation = new SFRotation(new float[0.969171949455709,0.159020234805176,0.188197495495361,1.02828103886506]);
HAnimJoint216.center = new SFVec3f(new float[3.91,-18.34,0]);
HAnimSegment HAnimSegment217 = createNode("HAnimSegment");
HAnimSegment217.DEF = "BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg";
HAnimSegment217.name = "LeftUpLeg_to_LeftLowLeg";
Transform Transform218 = createNode("Transform");
Transform218.translation = new SFVec3f(new float[3.91,-18.34,0]);
TouchSensor TouchSensor219 = createNode("TouchSensor");
TouchSensor219.description = "HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg";
Transform218.children = new MFNode();

Transform218.children[0] = TouchSensor219;

Shape Shape220 = createNode("Shape");
Shape220.USE = "HAnimJointShape";
Transform218.child[1] = Shape220;

Shape Shape221 = createNode("Shape");
LineSet LineSet222 = createNode("LineSet");
LineSet222.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA223 = createNode("ColorRGBA");
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA";
LineSet222.color = ColorRGBA223;

Coordinate Coordinate224 = createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[0,0,0,0,-17.37,0]);
LineSet222.coord = Coordinate224;

Shape221.geometry = LineSet222;

Transform218.child[2] = Shape221;

HAnimSegment217.children = new MFNode();

HAnimSegment217.children[0] = Transform218;

HAnimJoint216.children = new MFNode();

HAnimJoint216.children[0] = HAnimSegment217;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.DEF = "BvhUniversityWisconsionExample1_LeftFoot";
HAnimJoint225.name = "LeftFoot";
HAnimJoint225.rotation = new SFRotation(new float[1.00000000000036,0,0,0.0199134632110525]);
HAnimJoint225.center = new SFVec3f(new float[3.91,-35.71,0]);
HAnimSegment HAnimSegment226 = createNode("HAnimSegment");
HAnimSegment226.DEF = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot";
HAnimSegment226.name = "LeftLowLeg_to_LeftFoot";
Transform Transform227 = createNode("Transform");
Transform227.translation = new SFVec3f(new float[3.91,-35.71,0]);
HAnimSite HAnimSite228 = createNode("HAnimSite");
HAnimSite228.DEF = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip";
HAnimSite228.name = "LeftLowLeg_to_LeftFoot_tip";
HAnimSite228.translation = new SFVec3f(new float[0,-3.46,0]);
TouchSensor TouchSensor229 = createNode("TouchSensor");
TouchSensor229.description = "HAnimSite LeftLowLeg_to_LeftFoot_tip";
HAnimSite228.children = new MFNode();

HAnimSite228.children[0] = TouchSensor229;

Shape Shape230 = createNode("Shape");
Shape230.USE = "HAnimSiteShape";
HAnimSite228.children[1] = Shape230;

Shape Shape231 = createNode("Shape");
LineSet LineSet232 = createNode("LineSet");
LineSet232.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA233 = createNode("ColorRGBA");
ColorRGBA233.USE = "HAnimSiteLineColorRGBA";
LineSet232.color = ColorRGBA233;

Coordinate Coordinate234 = createNode("Coordinate");
Coordinate234.point = new MFVec3f(new float[0,3.46,0,0,0,0]);
LineSet232.coord = Coordinate234;

Shape231.geometry = LineSet232;

HAnimSite228.children[2] = Shape231;

Transform227.children = new MFNode();

Transform227.children[0] = HAnimSite228;

TouchSensor TouchSensor235 = createNode("TouchSensor");
TouchSensor235.description = "HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot";
Transform227.children[1] = TouchSensor235;

Shape Shape236 = createNode("Shape");
Shape236.USE = "HAnimJointShape";
Transform227.child[2] = Shape236;

HAnimSegment226.children = new MFNode();

HAnimSegment226.children[0] = Transform227;

HAnimJoint225.children = new MFNode();

HAnimJoint225.children[0] = HAnimSegment226;

HAnimJoint216.children[1] = HAnimJoint225;

HAnimJoint207.children[1] = HAnimJoint216;

HAnimJoint53.children[2] = HAnimJoint207;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.DEF = "BvhUniversityWisconsionExample1_RightUpLeg";
HAnimJoint237.name = "RightUpLeg";
HAnimJoint237.rotation = new SFRotation(new float[-0.529026768997627,-0.0781104813974245,-0.845002621522441,0.345959390966261]);
HAnimJoint237.center = new SFVec3f(new float[-3.91,0,0]);
HAnimSegment HAnimSegment238 = createNode("HAnimSegment");
HAnimSegment238.DEF = "BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg";
HAnimSegment238.name = "humanoid_root_to_RightUpLeg";
Transform Transform239 = createNode("Transform");
Transform239.translation = new SFVec3f(new float[-3.91,0,0]);
TouchSensor TouchSensor240 = createNode("TouchSensor");
TouchSensor240.description = "HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg";
Transform239.children = new MFNode();

Transform239.children[0] = TouchSensor240;

Shape Shape241 = createNode("Shape");
Shape241.USE = "HAnimJointShape";
Transform239.child[1] = Shape241;

Shape Shape242 = createNode("Shape");
LineSet LineSet243 = createNode("LineSet");
LineSet243.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA244 = createNode("ColorRGBA");
ColorRGBA244.USE = "HAnimSegmentLineColorRGBA";
LineSet243.color = ColorRGBA244;

Coordinate Coordinate245 = createNode("Coordinate");
Coordinate245.point = new MFVec3f(new float[0,0,0,0,-17.63,0]);
LineSet243.coord = Coordinate245;

Shape242.geometry = LineSet243;

Transform239.child[2] = Shape242;

HAnimSegment238.children = new MFNode();

HAnimSegment238.children[0] = Transform239;

HAnimJoint237.children = new MFNode();

HAnimJoint237.children[0] = HAnimSegment238;

HAnimJoint HAnimJoint246 = createNode("HAnimJoint");
HAnimJoint246.DEF = "BvhUniversityWisconsionExample1_RightLowLeg";
HAnimJoint246.name = "RightLowLeg";
HAnimJoint246.rotation = new SFRotation(new float[0.978057447453843,-0.194999101930461,0.073341527979632,0.971415273794883]);
HAnimJoint246.center = new SFVec3f(new float[-3.91,-17.63,0]);
HAnimSegment HAnimSegment247 = createNode("HAnimSegment");
HAnimSegment247.DEF = "BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg";
HAnimSegment247.name = "RightUpLeg_to_RightLowLeg";
Transform Transform248 = createNode("Transform");
Transform248.translation = new SFVec3f(new float[-3.91,-17.63,0]);
TouchSensor TouchSensor249 = createNode("TouchSensor");
TouchSensor249.description = "HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg";
Transform248.children = new MFNode();

Transform248.children[0] = TouchSensor249;

Shape Shape250 = createNode("Shape");
Shape250.USE = "HAnimJointShape";
Transform248.child[1] = Shape250;

Shape Shape251 = createNode("Shape");
LineSet LineSet252 = createNode("LineSet");
LineSet252.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA253 = createNode("ColorRGBA");
ColorRGBA253.USE = "HAnimSegmentLineColorRGBA";
LineSet252.color = ColorRGBA253;

Coordinate Coordinate254 = createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[0,0,0,0,-17.14,0]);
LineSet252.coord = Coordinate254;

Shape251.geometry = LineSet252;

Transform248.child[2] = Shape251;

HAnimSegment247.children = new MFNode();

HAnimSegment247.children[0] = Transform248;

HAnimJoint246.children = new MFNode();

HAnimJoint246.children[0] = HAnimSegment247;

HAnimJoint HAnimJoint255 = createNode("HAnimJoint");
HAnimJoint255.DEF = "BvhUniversityWisconsionExample1_RightFoot";
HAnimJoint255.name = "RightFoot";
HAnimJoint255.rotation = new SFRotation(new float[-1,0,0,0.446403006744384]);
HAnimJoint255.center = new SFVec3f(new float[-3.91,-34.77,0]);
HAnimSegment HAnimSegment256 = createNode("HAnimSegment");
HAnimSegment256.DEF = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot";
HAnimSegment256.name = "RightLowLeg_to_RightFoot";
Transform Transform257 = createNode("Transform");
Transform257.translation = new SFVec3f(new float[-3.91,-34.77,0]);
HAnimSite HAnimSite258 = createNode("HAnimSite");
HAnimSite258.DEF = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip";
HAnimSite258.name = "RightLowLeg_to_RightFoot_tip";
HAnimSite258.translation = new SFVec3f(new float[0,-3.75,0]);
TouchSensor TouchSensor259 = createNode("TouchSensor");
TouchSensor259.description = "HAnimSite RightLowLeg_to_RightFoot_tip";
HAnimSite258.children = new MFNode();

HAnimSite258.children[0] = TouchSensor259;

Shape Shape260 = createNode("Shape");
Shape260.USE = "HAnimSiteShape";
HAnimSite258.children[1] = Shape260;

Shape Shape261 = createNode("Shape");
LineSet LineSet262 = createNode("LineSet");
LineSet262.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA263 = createNode("ColorRGBA");
ColorRGBA263.USE = "HAnimSiteLineColorRGBA";
LineSet262.color = ColorRGBA263;

Coordinate Coordinate264 = createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[0,3.75,0,0,0,0]);
LineSet262.coord = Coordinate264;

Shape261.geometry = LineSet262;

HAnimSite258.children[2] = Shape261;

Transform257.children = new MFNode();

Transform257.children[0] = HAnimSite258;

TouchSensor TouchSensor265 = createNode("TouchSensor");
TouchSensor265.description = "HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot";
Transform257.children[1] = TouchSensor265;

Shape Shape266 = createNode("Shape");
Shape266.USE = "HAnimJointShape";
Transform257.child[2] = Shape266;

HAnimSegment256.children = new MFNode();

HAnimSegment256.children[0] = Transform257;

HAnimJoint255.children = new MFNode();

HAnimJoint255.children[0] = HAnimSegment256;

HAnimJoint246.children[1] = HAnimJoint255;

HAnimJoint237.children[1] = HAnimJoint246;

HAnimJoint53.children[3] = HAnimJoint237;

HAnimHumanoid46.joints[1] = HAnimJoint53;

HAnimJoint HAnimJoint267 = createNode("HAnimJoint");
HAnimJoint267.USE = "BvhUniversityWisconsionExample1_humanoid_root";
HAnimHumanoid46.joints[2] = HAnimJoint267;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.USE = "BvhUniversityWisconsionExample1_vl5";
HAnimHumanoid46.joints[3] = HAnimJoint268;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.USE = "BvhUniversityWisconsionExample1_Neck";
HAnimHumanoid46.joints[4] = HAnimJoint269;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.USE = "BvhUniversityWisconsionExample1_skullbase";
HAnimHumanoid46.joints[5] = HAnimJoint270;

HAnimJoint HAnimJoint271 = createNode("HAnimJoint");
HAnimJoint271.USE = "BvhUniversityWisconsionExample1_LeftCollar";
HAnimHumanoid46.joints[6] = HAnimJoint271;

HAnimJoint HAnimJoint272 = createNode("HAnimJoint");
HAnimJoint272.USE = "BvhUniversityWisconsionExample1_LeftUpArm";
HAnimHumanoid46.joints[7] = HAnimJoint272;

HAnimJoint HAnimJoint273 = createNode("HAnimJoint");
HAnimJoint273.USE = "BvhUniversityWisconsionExample1_LeftLowArm";
HAnimHumanoid46.joints[8] = HAnimJoint273;

HAnimJoint HAnimJoint274 = createNode("HAnimJoint");
HAnimJoint274.USE = "BvhUniversityWisconsionExample1_LeftHand";
HAnimHumanoid46.joints[9] = HAnimJoint274;

HAnimJoint HAnimJoint275 = createNode("HAnimJoint");
HAnimJoint275.USE = "BvhUniversityWisconsionExample1_RightCollar";
HAnimHumanoid46.joints[10] = HAnimJoint275;

HAnimJoint HAnimJoint276 = createNode("HAnimJoint");
HAnimJoint276.USE = "BvhUniversityWisconsionExample1_RightUpArm";
HAnimHumanoid46.joints[11] = HAnimJoint276;

HAnimJoint HAnimJoint277 = createNode("HAnimJoint");
HAnimJoint277.USE = "BvhUniversityWisconsionExample1_RightLowArm";
HAnimHumanoid46.joints[12] = HAnimJoint277;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.USE = "BvhUniversityWisconsionExample1_RightHand";
HAnimHumanoid46.joints[13] = HAnimJoint278;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.USE = "BvhUniversityWisconsionExample1_LeftUpLeg";
HAnimHumanoid46.joints[14] = HAnimJoint279;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.USE = "BvhUniversityWisconsionExample1_LeftLowLeg";
HAnimHumanoid46.joints[15] = HAnimJoint280;

HAnimJoint HAnimJoint281 = createNode("HAnimJoint");
HAnimJoint281.USE = "BvhUniversityWisconsionExample1_LeftFoot";
HAnimHumanoid46.joints[16] = HAnimJoint281;

HAnimJoint HAnimJoint282 = createNode("HAnimJoint");
HAnimJoint282.USE = "BvhUniversityWisconsionExample1_RightUpLeg";
HAnimHumanoid46.joints[17] = HAnimJoint282;

HAnimJoint HAnimJoint283 = createNode("HAnimJoint");
HAnimJoint283.USE = "BvhUniversityWisconsionExample1_RightLowLeg";
HAnimHumanoid46.joints[18] = HAnimJoint283;

HAnimJoint HAnimJoint284 = createNode("HAnimJoint");
HAnimJoint284.USE = "BvhUniversityWisconsionExample1_RightFoot";
HAnimHumanoid46.joints[19] = HAnimJoint284;

HAnimSegment HAnimSegment285 = createNode("HAnimSegment");
HAnimSegment285.USE = "BvhUniversityWisconsionExample1_sacrum";
HAnimHumanoid46.segments[20] = HAnimSegment285;

HAnimSegment HAnimSegment286 = createNode("HAnimSegment");
HAnimSegment286.USE = "BvhUniversityWisconsionExample1_l5";
HAnimHumanoid46.segments[21] = HAnimSegment286;

HAnimSegment HAnimSegment287 = createNode("HAnimSegment");
HAnimSegment287.USE = "BvhUniversityWisconsionExample1_vl5_to_Neck";
HAnimHumanoid46.segments[22] = HAnimSegment287;

HAnimSegment HAnimSegment288 = createNode("HAnimSegment");
HAnimSegment288.USE = "BvhUniversityWisconsionExample1_skull";
HAnimHumanoid46.segments[23] = HAnimSegment288;

HAnimSegment HAnimSegment289 = createNode("HAnimSegment");
HAnimSegment289.USE = "BvhUniversityWisconsionExample1_vl5_to_LeftCollar";
HAnimHumanoid46.segments[24] = HAnimSegment289;

HAnimSegment HAnimSegment290 = createNode("HAnimSegment");
HAnimSegment290.USE = "BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm";
HAnimHumanoid46.segments[25] = HAnimSegment290;

HAnimSegment HAnimSegment291 = createNode("HAnimSegment");
HAnimSegment291.USE = "BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm";
HAnimHumanoid46.segments[26] = HAnimSegment291;

HAnimSegment HAnimSegment292 = createNode("HAnimSegment");
HAnimSegment292.USE = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand";
HAnimHumanoid46.segments[27] = HAnimSegment292;

HAnimSegment HAnimSegment293 = createNode("HAnimSegment");
HAnimSegment293.USE = "BvhUniversityWisconsionExample1_vl5_to_RightCollar";
HAnimHumanoid46.segments[28] = HAnimSegment293;

HAnimSegment HAnimSegment294 = createNode("HAnimSegment");
HAnimSegment294.USE = "BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm";
HAnimHumanoid46.segments[29] = HAnimSegment294;

HAnimSegment HAnimSegment295 = createNode("HAnimSegment");
HAnimSegment295.USE = "BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm";
HAnimHumanoid46.segments[30] = HAnimSegment295;

HAnimSegment HAnimSegment296 = createNode("HAnimSegment");
HAnimSegment296.USE = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand";
HAnimHumanoid46.segments[31] = HAnimSegment296;

HAnimSegment HAnimSegment297 = createNode("HAnimSegment");
HAnimSegment297.USE = "BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg";
HAnimHumanoid46.segments[32] = HAnimSegment297;

HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.USE = "BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg";
HAnimHumanoid46.segments[33] = HAnimSegment298;

HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.USE = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot";
HAnimHumanoid46.segments[34] = HAnimSegment299;

HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.USE = "BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg";
HAnimHumanoid46.segments[35] = HAnimSegment300;

HAnimSegment HAnimSegment301 = createNode("HAnimSegment");
HAnimSegment301.USE = "BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg";
HAnimHumanoid46.segments[36] = HAnimSegment301;

HAnimSegment HAnimSegment302 = createNode("HAnimSegment");
HAnimSegment302.USE = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot";
HAnimHumanoid46.segments[37] = HAnimSegment302;

HAnimSite HAnimSite303 = createNode("HAnimSite");
HAnimSite303.DEF = "BvhUniversityWisconsionExample1_humanoid_root_view";
HAnimSite303.name = "humanoid_root_view";
Viewpoint Viewpoint304 = createNode("Viewpoint");
Viewpoint304.DEF = "BvhUniversityWisconsionExample1_humanoid_root_viewpoint";
Viewpoint304.description = "BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center";
Viewpoint304.position = new SFVec3f(new float[0,0,80]);
HAnimSite303.children = new MFNode();

HAnimSite303.children[0] = Viewpoint304;

HAnimHumanoid46.viewpoints[38] = HAnimSite303;

HAnimSite HAnimSite305 = createNode("HAnimSite");
HAnimSite305.USE = "BvhUniversityWisconsionExample1_skull_tip";
HAnimHumanoid46.viewpoints[39] = HAnimSite305;

HAnimSite HAnimSite306 = createNode("HAnimSite");
HAnimSite306.USE = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip";
HAnimHumanoid46.viewpoints[40] = HAnimSite306;

HAnimSite HAnimSite307 = createNode("HAnimSite");
HAnimSite307.USE = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip";
HAnimHumanoid46.viewpoints[41] = HAnimSite307;

HAnimSite HAnimSite308 = createNode("HAnimSite");
HAnimSite308.USE = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip";
HAnimHumanoid46.viewpoints[42] = HAnimSite308;

HAnimSite HAnimSite309 = createNode("HAnimSite");
HAnimSite309.USE = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip";
HAnimHumanoid46.viewpoints[43] = HAnimSite309;

HAnimSite HAnimSite310 = createNode("HAnimSite");
HAnimSite310.USE = "BvhUniversityWisconsionExample1_humanoid_root_view";
HAnimHumanoid46.viewpoints[44] = HAnimSite310;

children[4] = HAnimHumanoid46;

Group Group311 = createNode("Group");
Group311.DEF = "BvhUniversityWisconsionExample1_MotionGroup";
TimeSensor TimeSensor312 = createNode("TimeSensor");
TimeSensor312.DEF = "RealTimer";
TimeSensor312.cycleInterval = 0.067;
TimeSensor312.loop = True;
Group311.children = new MFNode();

Group311.children[0] = TimeSensor312;

TimeSensor TimeSensor313 = createNode("TimeSensor");
TimeSensor313.DEF = "StepTimer";
TimeSensor313.enabled = False;
TimeSensor313.cycleInterval = 2;
TimeSensor313.loop = True;
Group311.children[1] = TimeSensor313;

ScalarInterpolator ScalarInterpolator314 = createNode("ScalarInterpolator");
ScalarInterpolator314.DEF = "FrameStepper";
ScalarInterpolator314.key = new MFFloat(new float[0,1,1]);
ScalarInterpolator314.keyValue = new MFFloat(new float[0,0,1]);
Group311.children[2] = ScalarInterpolator314;

PositionInterpolator PositionInterpolator315 = createNode("PositionInterpolator");
PositionInterpolator315.DEF = "Interpolator0_humanoid_root";
PositionInterpolator315.key = new MFFloat(new float[0,1]);
PositionInterpolator315.keyValue = new MFVec3f(new float[0.803,3.501,8.836,0.781,3.51,8.647]);
Group311.children[3] = PositionInterpolator315;

OrientationInterpolator OrientationInterpolator316 = createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "Interpolator1_humanoid_root";
OrientationInterpolator316.key = new MFFloat(new float[0,1]);
OrientationInterpolator316.keyValue = new MFRotation(new float[-0.0118,-0.9911,-0.1325,2.8785,-0.0199,-0.993,-0.1163,2.9232]);
Group311.children[4] = OrientationInterpolator316;

OrientationInterpolator OrientationInterpolator317 = createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "Interpolator2_vl5";
OrientationInterpolator317.key = new MFFloat(new float[0,1]);
OrientationInterpolator317.keyValue = new MFRotation(new float[0.9093,-0.4082,0.0806,0.8073,0.9336,-0.3501,0.0768,0.824]);
Group311.children[5] = OrientationInterpolator317;

OrientationInterpolator OrientationInterpolator318 = createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "Interpolator3_Neck";
OrientationInterpolator318.key = new MFFloat(new float[0,1]);
OrientationInterpolator318.keyValue = new MFRotation(new float[0.9834,0.0677,0.1685,0.7761,0.9841,0.066,0.1649,0.7723]);
Group311.children[6] = OrientationInterpolator318;

OrientationInterpolator OrientationInterpolator319 = createNode("OrientationInterpolator");
OrientationInterpolator319.DEF = "Interpolator4_skullbase";
OrientationInterpolator319.key = new MFFloat(new float[0,1]);
OrientationInterpolator319.keyValue = new MFRotation(new float[-0.9778,0.1629,-0.1317,0.736,-0.9794,0.1474,-0.1381,0.7342]);
Group311.children[7] = OrientationInterpolator319;

OrientationInterpolator OrientationInterpolator320 = createNode("OrientationInterpolator");
OrientationInterpolator320.DEF = "Interpolator5_LeftCollar";
OrientationInterpolator320.key = new MFFloat(new float[0,1]);
OrientationInterpolator320.keyValue = new MFRotation(new float[-0.0626,0.7102,0.7012,0.2502,-0.0355,0.2109,0.9769,0.3411]);
Group311.children[8] = OrientationInterpolator320;

OrientationInterpolator OrientationInterpolator321 = createNode("OrientationInterpolator");
OrientationInterpolator321.DEF = "Interpolator6_LeftUpArm";
OrientationInterpolator321.key = new MFFloat(new float[0,1]);
OrientationInterpolator321.keyValue = new MFRotation(new float[-0.1561,-0.2157,0.9639,1.7536,0.0022,-0.1597,0.9872,1.6521]);
Group311.children[9] = OrientationInterpolator321;

OrientationInterpolator OrientationInterpolator322 = createNode("OrientationInterpolator");
OrientationInterpolator322.DEF = "Interpolator7_LeftLowArm";
OrientationInterpolator322.key = new MFFloat(new float[0,1]);
OrientationInterpolator322.keyValue = new MFRotation(new float[-0.9933,-0.0526,-0.103,1.6066,-0.9965,0.0822,0.0138,1.6744]);
Group311.children[10] = OrientationInterpolator322;

OrientationInterpolator OrientationInterpolator323 = createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "Interpolator8_LeftHand";
OrientationInterpolator323.key = new MFFloat(new float[0,1]);
OrientationInterpolator323.keyValue = new MFRotation(new float[0.0434,0.0003,0.9991,0.0121,0.4673,0.0029,0.8841,0.0138]);
Group311.children[11] = OrientationInterpolator323;

OrientationInterpolator OrientationInterpolator324 = createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "Interpolator9_RightCollar";
OrientationInterpolator324.key = new MFFloat(new float[0,1]);
OrientationInterpolator324.keyValue = new MFRotation(new float[-0.0734,-0.5964,-0.7993,0.3057,-0.07,-0.9291,-0.3633,0.4091]);
Group311.children[12] = OrientationInterpolator324;

OrientationInterpolator OrientationInterpolator325 = createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "Interpolator10_RightUpArm";
OrientationInterpolator325.key = new MFFloat(new float[0,1]);
OrientationInterpolator325.keyValue = new MFRotation(new float[-0.6801,-0.6074,-0.4106,2.0536,-0.765,-0.5303,-0.3654,1.9107]);
Group311.children[13] = OrientationInterpolator325;

OrientationInterpolator OrientationInterpolator326 = createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "Interpolator11_RightLowArm";
OrientationInterpolator326.key = new MFFloat(new float[0,1]);
OrientationInterpolator326.keyValue = new MFRotation(new float[-0.9378,0.2739,0.2135,1.4058,-0.9433,0.2577,0.2091,1.3563]);
Group311.children[14] = OrientationInterpolator326;

OrientationInterpolator OrientationInterpolator327 = createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "Interpolator12_RightHand";
OrientationInterpolator327.key = new MFFloat(new float[0,1]);
OrientationInterpolator327.keyValue = new MFRotation(new float[0.4025,0.0061,-0.9154,0.0299,0.5037,0.0087,-0.8638,0.0329]);
Group311.children[15] = OrientationInterpolator327;

OrientationInterpolator OrientationInterpolator328 = createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "Interpolator13_LeftUpLeg";
OrientationInterpolator328.key = new MFFloat(new float[0,1]);
OrientationInterpolator328.keyValue = new MFRotation(new float[0.8595,-0.1039,0.5004,0.4748,0.7784,-0.0864,0.6217,0.3536]);
Group311.children[16] = OrientationInterpolator328;

OrientationInterpolator OrientationInterpolator329 = createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "Interpolator14_LeftLowLeg";
OrientationInterpolator329.key = new MFFloat(new float[0,1]);
OrientationInterpolator329.keyValue = new MFRotation(new float[0.9184,0.2378,0.3162,0.9291,0.9762,0.1432,0.1627,1.0525]);
Group311.children[17] = OrientationInterpolator329;

OrientationInterpolator OrientationInterpolator330 = createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "Interpolator15_LeftFoot";
OrientationInterpolator330.key = new MFFloat(new float[0,1]);
OrientationInterpolator330.keyValue = new MFRotation(new float[-1,0,0,0.0199,1,0,0,0.0286]);
Group311.children[18] = OrientationInterpolator330;

OrientationInterpolator OrientationInterpolator331 = createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "Interpolator16_RightUpLeg";
OrientationInterpolator331.key = new MFFloat(new float[0,1]);
OrientationInterpolator331.keyValue = new MFRotation(new float[-0.5548,-0.0795,-0.8282,0.3423,-0.5234,-0.0778,-0.8485,0.3468]);
Group311.children[19] = OrientationInterpolator331;

OrientationInterpolator OrientationInterpolator332 = createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "Interpolator17_RightLowLeg";
OrientationInterpolator332.key = new MFFloat(new float[0,1]);
OrientationInterpolator332.keyValue = new MFRotation(new float[0.9694,-0.234,0.0739,0.9755,0.9797,-0.1864,0.0732,0.9707]);
Group311.children[20] = OrientationInterpolator332;

OrientationInterpolator OrientationInterpolator333 = createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "Interpolator18_RightFoot";
OrientationInterpolator333.key = new MFFloat(new float[0,1]);
OrientationInterpolator333.keyValue = new MFRotation(new float[-1,0,0,0.418,-1,0,0,0.4526]);
Group311.children[21] = OrientationInterpolator333;

children[5] = Group311;

ROUTE ROUTE334 = createNode("ROUTE");
ROUTE334.fromNode = "StepTimer";
ROUTE334.fromField = "fraction_changed";
ROUTE334.toNode = "FrameStepper";
ROUTE334.toField = "set_fraction";
children[6] = ROUTE334;

ROUTE ROUTE335 = createNode("ROUTE");
ROUTE335.fromNode = "RealTimer";
ROUTE335.fromField = "fraction_changed";
ROUTE335.toNode = "Interpolator0_humanoid_root";
ROUTE335.toField = "set_fraction";
children[7] = ROUTE335;

ROUTE ROUTE336 = createNode("ROUTE");
ROUTE336.fromNode = "FrameStepper";
ROUTE336.fromField = "value_changed";
ROUTE336.toNode = "Interpolator0_humanoid_root";
ROUTE336.toField = "set_fraction";
children[8] = ROUTE336;

ROUTE ROUTE337 = createNode("ROUTE");
ROUTE337.fromNode = "Interpolator0_humanoid_root";
ROUTE337.fromField = "value_changed";
ROUTE337.toNode = "BvhUniversityWisconsionExample1_humanoid_root";
ROUTE337.toField = "set_translation";
children[9] = ROUTE337;

ROUTE ROUTE338 = createNode("ROUTE");
ROUTE338.fromNode = "RealTimer";
ROUTE338.fromField = "fraction_changed";
ROUTE338.toNode = "Interpolator1_humanoid_root";
ROUTE338.toField = "set_fraction";
children[10] = ROUTE338;

ROUTE ROUTE339 = createNode("ROUTE");
ROUTE339.fromNode = "FrameStepper";
ROUTE339.fromField = "value_changed";
ROUTE339.toNode = "Interpolator1_humanoid_root";
ROUTE339.toField = "set_fraction";
children[11] = ROUTE339;

ROUTE ROUTE340 = createNode("ROUTE");
ROUTE340.fromNode = "Interpolator1_humanoid_root";
ROUTE340.fromField = "value_changed";
ROUTE340.toNode = "BvhUniversityWisconsionExample1_humanoid_root";
ROUTE340.toField = "set_rotation";
children[12] = ROUTE340;

ROUTE ROUTE341 = createNode("ROUTE");
ROUTE341.fromNode = "RealTimer";
ROUTE341.fromField = "fraction_changed";
ROUTE341.toNode = "Interpolator2_vl5";
ROUTE341.toField = "set_fraction";
children[13] = ROUTE341;

ROUTE ROUTE342 = createNode("ROUTE");
ROUTE342.fromNode = "FrameStepper";
ROUTE342.fromField = "value_changed";
ROUTE342.toNode = "Interpolator2_vl5";
ROUTE342.toField = "set_fraction";
children[14] = ROUTE342;

ROUTE ROUTE343 = createNode("ROUTE");
ROUTE343.fromNode = "Interpolator2_vl5";
ROUTE343.fromField = "value_changed";
ROUTE343.toNode = "BvhUniversityWisconsionExample1_vl5";
ROUTE343.toField = "set_rotation";
children[15] = ROUTE343;

ROUTE ROUTE344 = createNode("ROUTE");
ROUTE344.fromNode = "RealTimer";
ROUTE344.fromField = "fraction_changed";
ROUTE344.toNode = "Interpolator3_Neck";
ROUTE344.toField = "set_fraction";
children[16] = ROUTE344;

ROUTE ROUTE345 = createNode("ROUTE");
ROUTE345.fromNode = "FrameStepper";
ROUTE345.fromField = "value_changed";
ROUTE345.toNode = "Interpolator3_Neck";
ROUTE345.toField = "set_fraction";
children[17] = ROUTE345;

ROUTE ROUTE346 = createNode("ROUTE");
ROUTE346.fromNode = "Interpolator3_Neck";
ROUTE346.fromField = "value_changed";
ROUTE346.toNode = "BvhUniversityWisconsionExample1_Neck";
ROUTE346.toField = "set_rotation";
children[18] = ROUTE346;

ROUTE ROUTE347 = createNode("ROUTE");
ROUTE347.fromNode = "RealTimer";
ROUTE347.fromField = "fraction_changed";
ROUTE347.toNode = "Interpolator4_skullbase";
ROUTE347.toField = "set_fraction";
children[19] = ROUTE347;

ROUTE ROUTE348 = createNode("ROUTE");
ROUTE348.fromNode = "FrameStepper";
ROUTE348.fromField = "value_changed";
ROUTE348.toNode = "Interpolator4_skullbase";
ROUTE348.toField = "set_fraction";
children[20] = ROUTE348;

ROUTE ROUTE349 = createNode("ROUTE");
ROUTE349.fromNode = "Interpolator4_skullbase";
ROUTE349.fromField = "value_changed";
ROUTE349.toNode = "BvhUniversityWisconsionExample1_skullbase";
ROUTE349.toField = "set_rotation";
children[21] = ROUTE349;

ROUTE ROUTE350 = createNode("ROUTE");
ROUTE350.fromNode = "RealTimer";
ROUTE350.fromField = "fraction_changed";
ROUTE350.toNode = "Interpolator5_LeftCollar";
ROUTE350.toField = "set_fraction";
children[22] = ROUTE350;

ROUTE ROUTE351 = createNode("ROUTE");
ROUTE351.fromNode = "FrameStepper";
ROUTE351.fromField = "value_changed";
ROUTE351.toNode = "Interpolator5_LeftCollar";
ROUTE351.toField = "set_fraction";
children[23] = ROUTE351;

ROUTE ROUTE352 = createNode("ROUTE");
ROUTE352.fromNode = "Interpolator5_LeftCollar";
ROUTE352.fromField = "value_changed";
ROUTE352.toNode = "BvhUniversityWisconsionExample1_LeftCollar";
ROUTE352.toField = "set_rotation";
children[24] = ROUTE352;

ROUTE ROUTE353 = createNode("ROUTE");
ROUTE353.fromNode = "RealTimer";
ROUTE353.fromField = "fraction_changed";
ROUTE353.toNode = "Interpolator6_LeftUpArm";
ROUTE353.toField = "set_fraction";
children[25] = ROUTE353;

ROUTE ROUTE354 = createNode("ROUTE");
ROUTE354.fromNode = "FrameStepper";
ROUTE354.fromField = "value_changed";
ROUTE354.toNode = "Interpolator6_LeftUpArm";
ROUTE354.toField = "set_fraction";
children[26] = ROUTE354;

ROUTE ROUTE355 = createNode("ROUTE");
ROUTE355.fromNode = "Interpolator6_LeftUpArm";
ROUTE355.fromField = "value_changed";
ROUTE355.toNode = "BvhUniversityWisconsionExample1_LeftUpArm";
ROUTE355.toField = "set_rotation";
children[27] = ROUTE355;

ROUTE ROUTE356 = createNode("ROUTE");
ROUTE356.fromNode = "RealTimer";
ROUTE356.fromField = "fraction_changed";
ROUTE356.toNode = "Interpolator7_LeftLowArm";
ROUTE356.toField = "set_fraction";
children[28] = ROUTE356;

ROUTE ROUTE357 = createNode("ROUTE");
ROUTE357.fromNode = "FrameStepper";
ROUTE357.fromField = "value_changed";
ROUTE357.toNode = "Interpolator7_LeftLowArm";
ROUTE357.toField = "set_fraction";
children[29] = ROUTE357;

ROUTE ROUTE358 = createNode("ROUTE");
ROUTE358.fromNode = "Interpolator7_LeftLowArm";
ROUTE358.fromField = "value_changed";
ROUTE358.toNode = "BvhUniversityWisconsionExample1_LeftLowArm";
ROUTE358.toField = "set_rotation";
children[30] = ROUTE358;

ROUTE ROUTE359 = createNode("ROUTE");
ROUTE359.fromNode = "RealTimer";
ROUTE359.fromField = "fraction_changed";
ROUTE359.toNode = "Interpolator8_LeftHand";
ROUTE359.toField = "set_fraction";
children[31] = ROUTE359;

ROUTE ROUTE360 = createNode("ROUTE");
ROUTE360.fromNode = "FrameStepper";
ROUTE360.fromField = "value_changed";
ROUTE360.toNode = "Interpolator8_LeftHand";
ROUTE360.toField = "set_fraction";
children[32] = ROUTE360;

ROUTE ROUTE361 = createNode("ROUTE");
ROUTE361.fromNode = "Interpolator8_LeftHand";
ROUTE361.fromField = "value_changed";
ROUTE361.toNode = "BvhUniversityWisconsionExample1_LeftHand";
ROUTE361.toField = "set_rotation";
children[33] = ROUTE361;

ROUTE ROUTE362 = createNode("ROUTE");
ROUTE362.fromNode = "RealTimer";
ROUTE362.fromField = "fraction_changed";
ROUTE362.toNode = "Interpolator9_RightCollar";
ROUTE362.toField = "set_fraction";
children[34] = ROUTE362;

ROUTE ROUTE363 = createNode("ROUTE");
ROUTE363.fromNode = "FrameStepper";
ROUTE363.fromField = "value_changed";
ROUTE363.toNode = "Interpolator9_RightCollar";
ROUTE363.toField = "set_fraction";
children[35] = ROUTE363;

ROUTE ROUTE364 = createNode("ROUTE");
ROUTE364.fromNode = "Interpolator9_RightCollar";
ROUTE364.fromField = "value_changed";
ROUTE364.toNode = "BvhUniversityWisconsionExample1_RightCollar";
ROUTE364.toField = "set_rotation";
children[36] = ROUTE364;

ROUTE ROUTE365 = createNode("ROUTE");
ROUTE365.fromNode = "RealTimer";
ROUTE365.fromField = "fraction_changed";
ROUTE365.toNode = "Interpolator10_RightUpArm";
ROUTE365.toField = "set_fraction";
children[37] = ROUTE365;

ROUTE ROUTE366 = createNode("ROUTE");
ROUTE366.fromNode = "FrameStepper";
ROUTE366.fromField = "value_changed";
ROUTE366.toNode = "Interpolator10_RightUpArm";
ROUTE366.toField = "set_fraction";
children[38] = ROUTE366;

ROUTE ROUTE367 = createNode("ROUTE");
ROUTE367.fromNode = "Interpolator10_RightUpArm";
ROUTE367.fromField = "value_changed";
ROUTE367.toNode = "BvhUniversityWisconsionExample1_RightUpArm";
ROUTE367.toField = "set_rotation";
children[39] = ROUTE367;

ROUTE ROUTE368 = createNode("ROUTE");
ROUTE368.fromNode = "RealTimer";
ROUTE368.fromField = "fraction_changed";
ROUTE368.toNode = "Interpolator11_RightLowArm";
ROUTE368.toField = "set_fraction";
children[40] = ROUTE368;

ROUTE ROUTE369 = createNode("ROUTE");
ROUTE369.fromNode = "FrameStepper";
ROUTE369.fromField = "value_changed";
ROUTE369.toNode = "Interpolator11_RightLowArm";
ROUTE369.toField = "set_fraction";
children[41] = ROUTE369;

ROUTE ROUTE370 = createNode("ROUTE");
ROUTE370.fromNode = "Interpolator11_RightLowArm";
ROUTE370.fromField = "value_changed";
ROUTE370.toNode = "BvhUniversityWisconsionExample1_RightLowArm";
ROUTE370.toField = "set_rotation";
children[42] = ROUTE370;

ROUTE ROUTE371 = createNode("ROUTE");
ROUTE371.fromNode = "RealTimer";
ROUTE371.fromField = "fraction_changed";
ROUTE371.toNode = "Interpolator12_RightHand";
ROUTE371.toField = "set_fraction";
children[43] = ROUTE371;

ROUTE ROUTE372 = createNode("ROUTE");
ROUTE372.fromNode = "FrameStepper";
ROUTE372.fromField = "value_changed";
ROUTE372.toNode = "Interpolator12_RightHand";
ROUTE372.toField = "set_fraction";
children[44] = ROUTE372;

ROUTE ROUTE373 = createNode("ROUTE");
ROUTE373.fromNode = "Interpolator12_RightHand";
ROUTE373.fromField = "value_changed";
ROUTE373.toNode = "BvhUniversityWisconsionExample1_RightHand";
ROUTE373.toField = "set_rotation";
children[45] = ROUTE373;

ROUTE ROUTE374 = createNode("ROUTE");
ROUTE374.fromNode = "RealTimer";
ROUTE374.fromField = "fraction_changed";
ROUTE374.toNode = "Interpolator13_LeftUpLeg";
ROUTE374.toField = "set_fraction";
children[46] = ROUTE374;

ROUTE ROUTE375 = createNode("ROUTE");
ROUTE375.fromNode = "FrameStepper";
ROUTE375.fromField = "value_changed";
ROUTE375.toNode = "Interpolator13_LeftUpLeg";
ROUTE375.toField = "set_fraction";
children[47] = ROUTE375;

ROUTE ROUTE376 = createNode("ROUTE");
ROUTE376.fromNode = "Interpolator13_LeftUpLeg";
ROUTE376.fromField = "value_changed";
ROUTE376.toNode = "BvhUniversityWisconsionExample1_LeftUpLeg";
ROUTE376.toField = "set_rotation";
children[48] = ROUTE376;

ROUTE ROUTE377 = createNode("ROUTE");
ROUTE377.fromNode = "RealTimer";
ROUTE377.fromField = "fraction_changed";
ROUTE377.toNode = "Interpolator14_LeftLowLeg";
ROUTE377.toField = "set_fraction";
children[49] = ROUTE377;

ROUTE ROUTE378 = createNode("ROUTE");
ROUTE378.fromNode = "FrameStepper";
ROUTE378.fromField = "value_changed";
ROUTE378.toNode = "Interpolator14_LeftLowLeg";
ROUTE378.toField = "set_fraction";
children[50] = ROUTE378;

ROUTE ROUTE379 = createNode("ROUTE");
ROUTE379.fromNode = "Interpolator14_LeftLowLeg";
ROUTE379.fromField = "value_changed";
ROUTE379.toNode = "BvhUniversityWisconsionExample1_LeftLowLeg";
ROUTE379.toField = "set_rotation";
children[51] = ROUTE379;

ROUTE ROUTE380 = createNode("ROUTE");
ROUTE380.fromNode = "RealTimer";
ROUTE380.fromField = "fraction_changed";
ROUTE380.toNode = "Interpolator15_LeftFoot";
ROUTE380.toField = "set_fraction";
children[52] = ROUTE380;

ROUTE ROUTE381 = createNode("ROUTE");
ROUTE381.fromNode = "FrameStepper";
ROUTE381.fromField = "value_changed";
ROUTE381.toNode = "Interpolator15_LeftFoot";
ROUTE381.toField = "set_fraction";
children[53] = ROUTE381;

ROUTE ROUTE382 = createNode("ROUTE");
ROUTE382.fromNode = "Interpolator15_LeftFoot";
ROUTE382.fromField = "value_changed";
ROUTE382.toNode = "BvhUniversityWisconsionExample1_LeftFoot";
ROUTE382.toField = "set_rotation";
children[54] = ROUTE382;

ROUTE ROUTE383 = createNode("ROUTE");
ROUTE383.fromNode = "RealTimer";
ROUTE383.fromField = "fraction_changed";
ROUTE383.toNode = "Interpolator16_RightUpLeg";
ROUTE383.toField = "set_fraction";
children[55] = ROUTE383;

ROUTE ROUTE384 = createNode("ROUTE");
ROUTE384.fromNode = "FrameStepper";
ROUTE384.fromField = "value_changed";
ROUTE384.toNode = "Interpolator16_RightUpLeg";
ROUTE384.toField = "set_fraction";
children[56] = ROUTE384;

ROUTE ROUTE385 = createNode("ROUTE");
ROUTE385.fromNode = "Interpolator16_RightUpLeg";
ROUTE385.fromField = "value_changed";
ROUTE385.toNode = "BvhUniversityWisconsionExample1_RightUpLeg";
ROUTE385.toField = "set_rotation";
children[57] = ROUTE385;

ROUTE ROUTE386 = createNode("ROUTE");
ROUTE386.fromNode = "RealTimer";
ROUTE386.fromField = "fraction_changed";
ROUTE386.toNode = "Interpolator17_RightLowLeg";
ROUTE386.toField = "set_fraction";
children[58] = ROUTE386;

ROUTE ROUTE387 = createNode("ROUTE");
ROUTE387.fromNode = "FrameStepper";
ROUTE387.fromField = "value_changed";
ROUTE387.toNode = "Interpolator17_RightLowLeg";
ROUTE387.toField = "set_fraction";
children[59] = ROUTE387;

ROUTE ROUTE388 = createNode("ROUTE");
ROUTE388.fromNode = "Interpolator17_RightLowLeg";
ROUTE388.fromField = "value_changed";
ROUTE388.toNode = "BvhUniversityWisconsionExample1_RightLowLeg";
ROUTE388.toField = "set_rotation";
children[60] = ROUTE388;

ROUTE ROUTE389 = createNode("ROUTE");
ROUTE389.fromNode = "RealTimer";
ROUTE389.fromField = "fraction_changed";
ROUTE389.toNode = "Interpolator18_RightFoot";
ROUTE389.toField = "set_fraction";
children[61] = ROUTE389;

ROUTE ROUTE390 = createNode("ROUTE");
ROUTE390.fromNode = "FrameStepper";
ROUTE390.fromField = "value_changed";
ROUTE390.toNode = "Interpolator18_RightFoot";
ROUTE390.toField = "set_fraction";
children[62] = ROUTE390;

ROUTE ROUTE391 = createNode("ROUTE");
ROUTE391.fromNode = "Interpolator18_RightFoot";
ROUTE391.fromField = "value_changed";
ROUTE391.toNode = "BvhUniversityWisconsionExample1_RightFoot";
ROUTE391.toField = "set_rotation";
children[63] = ROUTE391;

}
