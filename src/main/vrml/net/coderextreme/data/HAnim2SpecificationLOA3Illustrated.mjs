const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnim2SpecificationLOA3Illustrated.x3d");
scene.addMetaData("description", "HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.");
scene.addMetaData("reference", "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds");
scene.addMetaData("reference", "HAnim2SpecificationLOA3Invisible.x3d");
scene.addMetaData("reference", "HAnim2SpecificationLOA3Animation.x3d");
scene.addMetaData("reference", "HAnimSpecificationExampleChangeLog.txt");
scene.addMetaData("reference", "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
scene.addMetaData("reference", "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
scene.addMetaData("reference", "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames");
scene.addMetaData("created", "18 February 2021");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:09 GMT");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA1.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA2.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA3.png");
scene.addMetaData("TODO", "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations");
scene.addMetaData("TODO", "insert MetadataInteger nodes indicating LOA for each Joint and Segment");
scene.addMetaData("translator", "Don Brutzman and Joe Williams");
scene.addMetaData("generator", "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo");
scene.addMetaData("generator", "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit");
await browser .loadComponents (scene);
let Background28 = browser.currentScene.createNode("Background");
Background28.skyColor = new X3D.MFColor([0.3,0.3,0.3]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Background28;

let NavigationInfo29 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo29;

let Group30 = browser.currentScene.createNode("Group");
Group30.DEF = "Original_WorldInfo";
let WorldInfo31 = browser.currentScene.createNode("WorldInfo");
WorldInfo31.title = "HANIM 200x Default Joint Centers, LOA3";
WorldInfo31.info = new X3D.MFString([new X3D.SFString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")]);
Group30YYY.children = new X3D.MFNode();

Group30ZZZ.children[0] = WorldInfo31;

browser.currentScene.children[2] = Group30;

let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.description = "Humanoid LOA 3 Front";
Viewpoint32.position = new X3D.SFVec3f([0,0.4,4]);
Viewpoint32.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[3] = Viewpoint32;

let Viewpoint33 = browser.currentScene.createNode("Viewpoint");
Viewpoint33.description = "Humanoid LOA 3 Front Close";
Viewpoint33.position = new X3D.SFVec3f([0,0.8,2]);
Viewpoint33.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[4] = Viewpoint33;

let Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.description = "Humanoid LOA 3 Front Closer";
Viewpoint34.position = new X3D.SFVec3f([0,1.2,1]);
Viewpoint34.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[5] = Viewpoint34;

let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.description = "Humanoid LOA 3 Front Face";
Viewpoint35.position = new X3D.SFVec3f([0,1.63,1]);
Viewpoint35.centerOfRotation = new X3D.SFVec3f([0,1.5,0.0016]);
browser.currentScene.children[6] = Viewpoint35;

let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.description = "Humanoid LOA 3 Right Side";
Viewpoint36.position = new X3D.SFVec3f([2.6,0.8,0]);
Viewpoint36.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint36.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[7] = Viewpoint36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.description = "Humanoid LOA 3 Right Side Close";
Viewpoint37.position = new X3D.SFVec3f([1,0.8,0.5]);
Viewpoint37.orientation = new X3D.SFRotation([0,1,0,1.2]);
Viewpoint37.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[8] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.description = "Humanoid LOA 3 Left Side Close";
Viewpoint38.position = new X3D.SFVec3f([-1,0.8,0.5]);
Viewpoint38.orientation = new X3D.SFRotation([0,1,0,-1.2]);
Viewpoint38.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[9] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.description = "Humanoid LOA 3 Left Side";
Viewpoint39.position = new X3D.SFVec3f([-2.6,0.8,0]);
Viewpoint39.orientation = new X3D.SFRotation([0,1,0,-1.5708]);
Viewpoint39.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[10] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.description = "Humanoid LOA 3 Top";
Viewpoint40.position = new X3D.SFVec3f([0,3.5,0]);
Viewpoint40.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint40.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[11] = Viewpoint40;

let HAnimHumanoid41 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid41.DEF = "hanim_humanoid";
HAnimHumanoid41.name = "humanoid";
HAnimHumanoid41.loa = 3;
let MetadataSet42 = browser.currentScene.createNode("MetadataSet");
MetadataSet42.name = "HAnimHumanoid.info";
MetadataSet42.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString43 = browser.currentScene.createNode("MetadataString");
MetadataString43.name = "authorName";
MetadataSet42.value = new X3D.MFNode();

MetadataSet42XXX.value[0] = MetadataString43;

let MetadataString44 = browser.currentScene.createNode("MetadataString");
MetadataString44.name = "authorEmail";
value[1] = MetadataString44;

let MetadataString45 = browser.currentScene.createNode("MetadataString");
MetadataString45.name = "copyright";
value[2] = MetadataString45;

let MetadataString46 = browser.currentScene.createNode("MetadataString");
MetadataString46.name = "creationDate";
value[3] = MetadataString46;

let MetadataFloat47 = browser.currentScene.createNode("MetadataFloat");
MetadataFloat47.name = "height";
MetadataFloat47.value = new X3D.MFFloat([1.7504]);
value[4] = MetadataFloat47;

let MetadataString48 = browser.currentScene.createNode("MetadataString");
MetadataString48.name = "humanoidVersion";
value[5] = MetadataString48;

let MetadataString49 = browser.currentScene.createNode("MetadataString");
MetadataString49.name = "usageRestrictions";
value[6] = MetadataString49;

HAnimHumanoid41.metadata = new X3D.SFNode();

HAnimHumanoid41XXX.metadata[0] = MetadataSet42;

let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.DEF = "hanim_humanoid_root";
HAnimJoint50.name = "humanoid_root";
HAnimJoint50.center = new X3D.SFVec3f([0,0.824,0.0277]);
let HAnimSegment51 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment51.DEF = "hanim_sacrum";
HAnimSegment51.name = "sacrum";
let TouchSensor52 = browser.currentScene.createNode("TouchSensor");
TouchSensor52.description = "HAnimJoint humanoid_root, HAnimSegment sacrum";
HAnimSegment51YYY.children = new X3D.MFNode();

HAnimSegment51ZZZ.children[0] = TouchSensor52;

let Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = new X3D.SFVec3f([0,0.824,0.0277]);
let Shape54 = browser.currentScene.createNode("Shape");
Shape54.DEF = "HAnimJointShape";
let Appearance55 = browser.currentScene.createNode("Appearance");
Appearance55.DEF = "HAnimJointAppearance";
let Material56 = browser.currentScene.createNode("Material");
Material56.diffuseColor = new X3D.SFColor([1,0.5,0]);
Material56.transparency = 0.5;
material = Material56;

appearance = Appearance55;

let Sphere57 = browser.currentScene.createNode("Sphere");
Sphere57.radius = 0.006;
geometry = Sphere57;

Transform53YYY.child = new X3D.undefined();

Transform53ZZZ.child[0] = Shape54;

HAnimSegment51ZZZ.children[1] = Transform53;

let Shape58 = browser.currentScene.createNode("Shape");
let LineSet59 = browser.currentScene.createNode("LineSet");
LineSet59.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA60 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA60.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA60.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA60;

let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.point = new X3D.MFVec3f([0,0.824,0.0277,0,0.9149,0.0016]);
coord = Coordinate61;

geometry = LineSet59;

HAnimSegment51ZZZ.children[2] = Shape58;

let Shape62 = browser.currentScene.createNode("Shape");
let LineSet63 = browser.currentScene.createNode("LineSet");
LineSet63.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA64 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA64.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA64;

let Coordinate65 = browser.currentScene.createNode("Coordinate");
Coordinate65.point = new X3D.MFVec3f([0,0.824,0.0277,0.0028,1.0568,-0.0776]);
coord = Coordinate65;

geometry = LineSet63;

HAnimSegment51ZZZ.children[3] = Shape62;

HAnimJoint50YYY.children = new X3D.MFNode();

HAnimJoint50ZZZ.children[0] = HAnimSegment51;

let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.DEF = "hanim_sacroiliac";
HAnimJoint66.name = "sacroiliac";
HAnimJoint66.center = new X3D.SFVec3f([0,0.9149,0.0016]);
let HAnimSegment67 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment67.DEF = "hanim_pelvis";
HAnimSegment67.name = "pelvis";
let TouchSensor68 = browser.currentScene.createNode("TouchSensor");
TouchSensor68.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment67YYY.children = new X3D.MFNode();

HAnimSegment67ZZZ.children[0] = TouchSensor68;

let Transform69 = browser.currentScene.createNode("Transform");
Transform69.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Shape70 = browser.currentScene.createNode("Shape");
Shape70.USE = "HAnimJointShape";
Transform69YYY.child = new X3D.undefined();

Transform69ZZZ.child[0] = Shape70;

HAnimSegment67ZZZ.children[1] = Transform69;

let Shape71 = browser.currentScene.createNode("Shape");
let LineSet72 = browser.currentScene.createNode("LineSet");
LineSet72.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA73 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA73.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA73;

let Coordinate74 = browser.currentScene.createNode("Coordinate");
Coordinate74.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
coord = Coordinate74;

geometry = LineSet72;

HAnimSegment67ZZZ.children[2] = Shape71;

let Shape75 = browser.currentScene.createNode("Shape");
let LineSet76 = browser.currentScene.createNode("LineSet");
LineSet76.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA77 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA77.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA77;

let Coordinate78 = browser.currentScene.createNode("Coordinate");
Coordinate78.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
coord = Coordinate78;

geometry = LineSet76;

HAnimSegment67ZZZ.children[3] = Shape75;

let Shape79 = browser.currentScene.createNode("Shape");
let LineSet80 = browser.currentScene.createNode("LineSet");
LineSet80.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA81 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA81.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA81.color = new X3D.MFColorRGBA([1,0,0,1,1,0,0,0.1]);
color = ColorRGBA81;

let Coordinate82 = browser.currentScene.createNode("Coordinate");
Coordinate82.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
coord = Coordinate82;

geometry = LineSet80;

HAnimSegment67ZZZ.children[4] = Shape79;

let Shape83 = browser.currentScene.createNode("Shape");
let LineSet84 = browser.currentScene.createNode("LineSet");
LineSet84.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA85 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA85.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA85;

let Coordinate86 = browser.currentScene.createNode("Coordinate");
Coordinate86.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
coord = Coordinate86;

geometry = LineSet84;

HAnimSegment67ZZZ.children[5] = Shape83;

let Shape87 = browser.currentScene.createNode("Shape");
let LineSet88 = browser.currentScene.createNode("LineSet");
LineSet88.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA89 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA89.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA89;

let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new X3D.MFVec3f([0,0.9149,0.0016,0.1612,1.0537,0.0008]);
coord = Coordinate90;

geometry = LineSet88;

HAnimSegment67ZZZ.children[6] = Shape87;

let Shape91 = browser.currentScene.createNode("Shape");
let LineSet92 = browser.currentScene.createNode("LineSet");
LineSet92.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA93 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA93.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA93;

let Coordinate94 = browser.currentScene.createNode("Coordinate");
Coordinate94.point = new X3D.MFVec3f([0,0.9149,0.0016,0.1677,0.8336,0.0303]);
coord = Coordinate94;

geometry = LineSet92;

HAnimSegment67ZZZ.children[7] = Shape91;

let Shape95 = browser.currentScene.createNode("Shape");
let LineSet96 = browser.currentScene.createNode("LineSet");
LineSet96.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA97 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA97.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA97;

let Coordinate98 = browser.currentScene.createNode("Coordinate");
Coordinate98.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
coord = Coordinate98;

geometry = LineSet96;

HAnimSegment67ZZZ.children[8] = Shape95;

let Shape99 = browser.currentScene.createNode("Shape");
let LineSet100 = browser.currentScene.createNode("LineSet");
LineSet100.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA101 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA101.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA101;

let Coordinate102 = browser.currentScene.createNode("Coordinate");
Coordinate102.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0925,0.9983,0.1052]);
coord = Coordinate102;

geometry = LineSet100;

HAnimSegment67ZZZ.children[9] = Shape99;

let Shape103 = browser.currentScene.createNode("Shape");
let LineSet104 = browser.currentScene.createNode("LineSet");
LineSet104.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA105 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA105.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA105;

let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
coord = Coordinate106;

geometry = LineSet104;

HAnimSegment67ZZZ.children[10] = Shape103;

let Shape107 = browser.currentScene.createNode("Shape");
let LineSet108 = browser.currentScene.createNode("LineSet");
LineSet108.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA109 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA109.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA109;

let Coordinate110 = browser.currentScene.createNode("Coordinate");
Coordinate110.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0774,1.019,-0.1151]);
coord = Coordinate110;

geometry = LineSet108;

HAnimSegment67ZZZ.children[11] = Shape107;

let Shape111 = browser.currentScene.createNode("Shape");
let LineSet112 = browser.currentScene.createNode("LineSet");
LineSet112.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA113 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA113.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA113;

let Coordinate114 = browser.currentScene.createNode("Coordinate");
Coordinate114.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0034,0.8266,0.0257]);
coord = Coordinate114;

geometry = LineSet112;

HAnimSegment67ZZZ.children[12] = Shape111;

let HAnimSite115 = browser.currentScene.createNode("HAnimSite");
HAnimSite115.DEF = "hanim_r_iliocristale_pt";
HAnimSite115.name = "r_iliocristale_pt";
HAnimSite115.translation = new X3D.SFVec3f([-0.1525,1.0628,0.0035]);
let TouchSensor116 = browser.currentScene.createNode("TouchSensor");
TouchSensor116.description = "HAnimSite r_iliocristale_pt";
HAnimSite115YYY.children = new X3D.MFNode();

HAnimSite115ZZZ.children[0] = TouchSensor116;

let Shape117 = browser.currentScene.createNode("Shape");
Shape117.DEF = "HAnimSiteShape";
let Appearance118 = browser.currentScene.createNode("Appearance");
let Material119 = browser.currentScene.createNode("Material");
Material119.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material119;

appearance = Appearance118;

let IndexedFaceSet120 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet120.DEF = "DiamondIFS";
IndexedFaceSet120.solid = False;
IndexedFaceSet120.creaseAngle = 0.5;
IndexedFaceSet120.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate121 = browser.currentScene.createNode("Coordinate");
Coordinate121.point = new X3D.MFVec3f([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
coord = Coordinate121;

geometry = IndexedFaceSet120;

HAnimSite115ZZZ.children[1] = Shape117;

HAnimSegment67ZZZ.children[13] = HAnimSite115;

let HAnimSite122 = browser.currentScene.createNode("HAnimSite");
HAnimSite122.DEF = "hanim_r_trochanterion_pt";
HAnimSite122.name = "r_trochanterion_pt";
HAnimSite122.translation = new X3D.SFVec3f([-0.1689,0.8419,0.0352]);
let TouchSensor123 = browser.currentScene.createNode("TouchSensor");
TouchSensor123.description = "HAnimSite r_trochanterion_pt";
HAnimSite122YYY.children = new X3D.MFNode();

HAnimSite122ZZZ.children[0] = TouchSensor123;

let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122ZZZ.children[1] = Shape124;

HAnimSegment67ZZZ.children[14] = HAnimSite122;

let HAnimSite125 = browser.currentScene.createNode("HAnimSite");
HAnimSite125.DEF = "hanim_l_iliocristale_pt";
HAnimSite125.name = "l_iliocristale_pt";
HAnimSite125.translation = new X3D.SFVec3f([0.1612,1.0537,0.0008]);
let TouchSensor126 = browser.currentScene.createNode("TouchSensor");
TouchSensor126.description = "HAnimSite l_iliocristale_pt";
HAnimSite125YYY.children = new X3D.MFNode();

HAnimSite125ZZZ.children[0] = TouchSensor126;

let Shape127 = browser.currentScene.createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125ZZZ.children[1] = Shape127;

HAnimSegment67ZZZ.children[15] = HAnimSite125;

let HAnimSite128 = browser.currentScene.createNode("HAnimSite");
HAnimSite128.DEF = "hanim_l_trochanterion_pt";
HAnimSite128.name = "l_trochanterion_pt";
HAnimSite128.translation = new X3D.SFVec3f([0.1677,0.8336,0.0303]);
let TouchSensor129 = browser.currentScene.createNode("TouchSensor");
TouchSensor129.description = "HAnimSite l_trochanterion_pt";
HAnimSite128YYY.children = new X3D.MFNode();

HAnimSite128ZZZ.children[0] = TouchSensor129;

let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128ZZZ.children[1] = Shape130;

HAnimSegment67ZZZ.children[16] = HAnimSite128;

let HAnimSite131 = browser.currentScene.createNode("HAnimSite");
HAnimSite131.DEF = "hanim_r_asis_pt";
HAnimSite131.name = "r_asis_pt";
HAnimSite131.translation = new X3D.SFVec3f([-0.0887,1.0021,0.1112]);
let TouchSensor132 = browser.currentScene.createNode("TouchSensor");
TouchSensor132.description = "HAnimSite r_asis_pt";
HAnimSite131YYY.children = new X3D.MFNode();

HAnimSite131ZZZ.children[0] = TouchSensor132;

let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131ZZZ.children[1] = Shape133;

HAnimSegment67ZZZ.children[17] = HAnimSite131;

let HAnimSite134 = browser.currentScene.createNode("HAnimSite");
HAnimSite134.DEF = "hanim_l_asis_pt";
HAnimSite134.name = "l_asis_pt";
HAnimSite134.translation = new X3D.SFVec3f([0.0925,0.9983,0.1052]);
let TouchSensor135 = browser.currentScene.createNode("TouchSensor");
TouchSensor135.description = "HAnimSite l_asis_pt";
HAnimSite134YYY.children = new X3D.MFNode();

HAnimSite134ZZZ.children[0] = TouchSensor135;

let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "HAnimSiteShape";
HAnimSite134ZZZ.children[1] = Shape136;

HAnimSegment67ZZZ.children[18] = HAnimSite134;

let HAnimSite137 = browser.currentScene.createNode("HAnimSite");
HAnimSite137.DEF = "hanim_r_psis_pt";
HAnimSite137.name = "r_psis_pt";
HAnimSite137.translation = new X3D.SFVec3f([-0.0716,1.019,-0.1138]);
let TouchSensor138 = browser.currentScene.createNode("TouchSensor");
TouchSensor138.description = "HAnimSite r_psis_pt";
HAnimSite137YYY.children = new X3D.MFNode();

HAnimSite137ZZZ.children[0] = TouchSensor138;

let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "HAnimSiteShape";
HAnimSite137ZZZ.children[1] = Shape139;

HAnimSegment67ZZZ.children[19] = HAnimSite137;

let HAnimSite140 = browser.currentScene.createNode("HAnimSite");
HAnimSite140.DEF = "hanim_l_psis_pt";
HAnimSite140.name = "l_psis_pt";
HAnimSite140.translation = new X3D.SFVec3f([0.0774,1.019,-0.1151]);
let TouchSensor141 = browser.currentScene.createNode("TouchSensor");
TouchSensor141.description = "HAnimSite l_psis_pt";
HAnimSite140YYY.children = new X3D.MFNode();

HAnimSite140ZZZ.children[0] = TouchSensor141;

let Shape142 = browser.currentScene.createNode("Shape");
Shape142.USE = "HAnimSiteShape";
HAnimSite140ZZZ.children[1] = Shape142;

HAnimSegment67ZZZ.children[20] = HAnimSite140;

let HAnimSite143 = browser.currentScene.createNode("HAnimSite");
HAnimSite143.DEF = "hanim_crotch_pt";
HAnimSite143.name = "crotch_pt";
HAnimSite143.translation = new X3D.SFVec3f([0.0034,0.8266,0.0257]);
let TouchSensor144 = browser.currentScene.createNode("TouchSensor");
TouchSensor144.description = "HAnimSite crotch_pt";
HAnimSite143YYY.children = new X3D.MFNode();

HAnimSite143ZZZ.children[0] = TouchSensor144;

let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "HAnimSiteShape";
HAnimSite143ZZZ.children[1] = Shape145;

HAnimSegment67ZZZ.children[21] = HAnimSite143;

HAnimJoint66YYY.children = new X3D.MFNode();

HAnimJoint66ZZZ.children[0] = HAnimSegment67;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.DEF = "hanim_l_hip";
HAnimJoint146.name = "l_hip";
HAnimJoint146.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.DEF = "hanim_l_thigh";
HAnimSegment147.name = "l_thigh";
let TouchSensor148 = browser.currentScene.createNode("TouchSensor");
TouchSensor148.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment147YYY.children = new X3D.MFNode();

HAnimSegment147ZZZ.children[0] = TouchSensor148;

let Transform149 = browser.currentScene.createNode("Transform");
Transform149.translation = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let Shape150 = browser.currentScene.createNode("Shape");
Shape150.USE = "HAnimJointShape";
Transform149YYY.child = new X3D.undefined();

Transform149ZZZ.child[0] = Shape150;

HAnimSegment147ZZZ.children[1] = Transform149;

let Shape151 = browser.currentScene.createNode("Shape");
let LineSet152 = browser.currentScene.createNode("LineSet");
LineSet152.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA153 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA153.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA153;

let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
coord = Coordinate154;

geometry = LineSet152;

HAnimSegment147ZZZ.children[2] = Shape151;

let Shape155 = browser.currentScene.createNode("Shape");
let LineSet156 = browser.currentScene.createNode("LineSet");
LineSet156.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA157 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA157.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA157;

let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
coord = Coordinate158;

geometry = LineSet156;

HAnimSegment147ZZZ.children[3] = Shape155;

let Shape159 = browser.currentScene.createNode("Shape");
let LineSet160 = browser.currentScene.createNode("LineSet");
LineSet160.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA161 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA161.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA161;

let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
coord = Coordinate162;

geometry = LineSet160;

HAnimSegment147ZZZ.children[4] = Shape159;

let Shape163 = browser.currentScene.createNode("Shape");
let LineSet164 = browser.currentScene.createNode("LineSet");
LineSet164.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA165 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA165.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA165;

let Coordinate166 = browser.currentScene.createNode("Coordinate");
Coordinate166.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
coord = Coordinate166;

geometry = LineSet164;

HAnimSegment147ZZZ.children[5] = Shape163;

let HAnimSite167 = browser.currentScene.createNode("HAnimSite");
HAnimSite167.DEF = "hanim_l_knee_crease_pt";
HAnimSite167.name = "l_knee_crease_pt";
HAnimSite167.translation = new X3D.SFVec3f([0.0993,0.4881,-0.0309]);
let TouchSensor168 = browser.currentScene.createNode("TouchSensor");
TouchSensor168.description = "HAnimSite l_knee_crease_pt";
HAnimSite167YYY.children = new X3D.MFNode();

HAnimSite167ZZZ.children[0] = TouchSensor168;

let Shape169 = browser.currentScene.createNode("Shape");
Shape169.USE = "HAnimSiteShape";
HAnimSite167ZZZ.children[1] = Shape169;

HAnimSegment147ZZZ.children[6] = HAnimSite167;

let HAnimSite170 = browser.currentScene.createNode("HAnimSite");
HAnimSite170.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite170.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite170.translation = new X3D.SFVec3f([0.1598,0.4967,0.0297]);
let TouchSensor171 = browser.currentScene.createNode("TouchSensor");
TouchSensor171.description = "HAnimSite l_femoral_lateral_epicn_pt";
HAnimSite170YYY.children = new X3D.MFNode();

HAnimSite170ZZZ.children[0] = TouchSensor171;

let Shape172 = browser.currentScene.createNode("Shape");
Shape172.USE = "HAnimSiteShape";
HAnimSite170ZZZ.children[1] = Shape172;

HAnimSegment147ZZZ.children[7] = HAnimSite170;

let HAnimSite173 = browser.currentScene.createNode("HAnimSite");
HAnimSite173.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite173.name = "l_femoral_medial_epicondyle_pt";
HAnimSite173.translation = new X3D.SFVec3f([0.0398,0.4946,0.0303]);
let TouchSensor174 = browser.currentScene.createNode("TouchSensor");
TouchSensor174.description = "HAnimSite l_femoral_medial_epicn_pt";
HAnimSite173YYY.children = new X3D.MFNode();

HAnimSite173ZZZ.children[0] = TouchSensor174;

let Shape175 = browser.currentScene.createNode("Shape");
Shape175.USE = "HAnimSiteShape";
HAnimSite173ZZZ.children[1] = Shape175;

HAnimSegment147ZZZ.children[8] = HAnimSite173;

HAnimJoint146YYY.children = new X3D.MFNode();

HAnimJoint146ZZZ.children[0] = HAnimSegment147;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.DEF = "hanim_l_knee";
HAnimJoint176.name = "l_knee";
HAnimJoint176.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let HAnimSegment177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment177.DEF = "hanim_l_calf";
HAnimSegment177.name = "l_calf";
let TouchSensor178 = browser.currentScene.createNode("TouchSensor");
TouchSensor178.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment177YYY.children = new X3D.MFNode();

HAnimSegment177ZZZ.children[0] = TouchSensor178;

let Transform179 = browser.currentScene.createNode("Transform");
Transform179.translation = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let Shape180 = browser.currentScene.createNode("Shape");
Shape180.USE = "HAnimJointShape";
Transform179YYY.child = new X3D.undefined();

Transform179ZZZ.child[0] = Shape180;

HAnimSegment177ZZZ.children[1] = Transform179;

let Shape181 = browser.currentScene.createNode("Shape");
let LineSet182 = browser.currentScene.createNode("LineSet");
LineSet182.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA183 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA183.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA183;

let Coordinate184 = browser.currentScene.createNode("Coordinate");
Coordinate184.point = new X3D.MFVec3f([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
coord = Coordinate184;

geometry = LineSet182;

HAnimSegment177ZZZ.children[2] = Shape181;

HAnimJoint176YYY.children = new X3D.MFNode();

HAnimJoint176ZZZ.children[0] = HAnimSegment177;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.DEF = "hanim_l_talocrural";
HAnimJoint185.name = "l_talocrural";
HAnimJoint185.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let HAnimSegment186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment186.DEF = "hanim_l_talus";
HAnimSegment186.name = "l_talus";
let TouchSensor187 = browser.currentScene.createNode("TouchSensor");
TouchSensor187.description = "HAnimJoint l_talocrural, HAnimSegment l_talus";
HAnimSegment186YYY.children = new X3D.MFNode();

HAnimSegment186ZZZ.children[0] = TouchSensor187;

let Transform188 = browser.currentScene.createNode("Transform");
Transform188.translation = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let Shape189 = browser.currentScene.createNode("Shape");
Shape189.USE = "HAnimJointShape";
Transform188YYY.child = new X3D.undefined();

Transform188ZZZ.child[0] = Shape189;

HAnimSegment186ZZZ.children[1] = Transform188;

let Shape190 = browser.currentScene.createNode("Shape");
let LineSet191 = browser.currentScene.createNode("LineSet");
LineSet191.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA192 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA192.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA192;

let Coordinate193 = browser.currentScene.createNode("Coordinate");
Coordinate193.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
coord = Coordinate193;

geometry = LineSet191;

HAnimSegment186ZZZ.children[2] = Shape190;

let Shape194 = browser.currentScene.createNode("Shape");
let LineSet195 = browser.currentScene.createNode("LineSet");
LineSet195.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA196 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA196;

let Coordinate197 = browser.currentScene.createNode("Coordinate");
Coordinate197.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
coord = Coordinate197;

geometry = LineSet195;

HAnimSegment186ZZZ.children[3] = Shape194;

let Shape198 = browser.currentScene.createNode("Shape");
let LineSet199 = browser.currentScene.createNode("LineSet");
LineSet199.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA200 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA200.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA200;

let Coordinate201 = browser.currentScene.createNode("Coordinate");
Coordinate201.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
coord = Coordinate201;

geometry = LineSet199;

HAnimSegment186ZZZ.children[4] = Shape198;

let Shape202 = browser.currentScene.createNode("Shape");
let LineSet203 = browser.currentScene.createNode("LineSet");
LineSet203.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA204 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA204.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA204;

let Coordinate205 = browser.currentScene.createNode("Coordinate");
Coordinate205.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
coord = Coordinate205;

geometry = LineSet203;

HAnimSegment186ZZZ.children[5] = Shape202;

let Shape206 = browser.currentScene.createNode("Shape");
let LineSet207 = browser.currentScene.createNode("LineSet");
LineSet207.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA208 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA208.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA208;

let Coordinate209 = browser.currentScene.createNode("Coordinate");
Coordinate209.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
coord = Coordinate209;

geometry = LineSet207;

HAnimSegment186ZZZ.children[6] = Shape206;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite210.name = "l_lateral_malleolus_pt";
HAnimSite210.translation = new X3D.SFVec3f([0.1308,0.0597,-0.1032]);
let TouchSensor211 = browser.currentScene.createNode("TouchSensor");
TouchSensor211.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite210YYY.children = new X3D.MFNode();

HAnimSite210ZZZ.children[0] = TouchSensor211;

let Shape212 = browser.currentScene.createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210ZZZ.children[1] = Shape212;

HAnimSegment186ZZZ.children[7] = HAnimSite210;

let HAnimSite213 = browser.currentScene.createNode("HAnimSite");
HAnimSite213.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite213.name = "l_medial_malleolus_pt";
HAnimSite213.translation = new X3D.SFVec3f([0.089,0.0716,-0.0881]);
let TouchSensor214 = browser.currentScene.createNode("TouchSensor");
TouchSensor214.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite213YYY.children = new X3D.MFNode();

HAnimSite213ZZZ.children[0] = TouchSensor214;

let Shape215 = browser.currentScene.createNode("Shape");
Shape215.USE = "HAnimSiteShape";
HAnimSite213ZZZ.children[1] = Shape215;

HAnimSegment186ZZZ.children[8] = HAnimSite213;

let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.DEF = "hanim_l_sphyrion_pt";
HAnimSite216.name = "l_sphyrion_pt";
HAnimSite216.translation = new X3D.SFVec3f([0.089,0.0575,-0.0943]);
let TouchSensor217 = browser.currentScene.createNode("TouchSensor");
TouchSensor217.description = "HAnimSite l_sphyrion_pt";
HAnimSite216YYY.children = new X3D.MFNode();

HAnimSite216ZZZ.children[0] = TouchSensor217;

let Shape218 = browser.currentScene.createNode("Shape");
Shape218.USE = "HAnimSiteShape";
HAnimSite216ZZZ.children[1] = Shape218;

HAnimSegment186ZZZ.children[9] = HAnimSite216;

let HAnimSite219 = browser.currentScene.createNode("HAnimSite");
HAnimSite219.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite219.name = "l_calcaneus_posterior_pt";
HAnimSite219.translation = new X3D.SFVec3f([0.0974,0.0259,-0.1171]);
let TouchSensor220 = browser.currentScene.createNode("TouchSensor");
TouchSensor220.description = "HAnimSite l_calcaneous_post_pt";
HAnimSite219YYY.children = new X3D.MFNode();

HAnimSite219ZZZ.children[0] = TouchSensor220;

let Shape221 = browser.currentScene.createNode("Shape");
Shape221.USE = "HAnimSiteShape";
HAnimSite219ZZZ.children[1] = Shape221;

HAnimSegment186ZZZ.children[10] = HAnimSite219;

HAnimJoint185YYY.children = new X3D.MFNode();

HAnimJoint185ZZZ.children[0] = HAnimSegment186;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint222.name = "l_tarsometatarsal_2";
HAnimJoint222.center = new X3D.SFVec3f([0.1086,0.0001,-0.0368]);
let HAnimSegment223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment223.DEF = "hanim_l_metatarsal_2";
HAnimSegment223.name = "l_metatarsal_2";
let TouchSensor224 = browser.currentScene.createNode("TouchSensor");
TouchSensor224.description = "HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2";
HAnimSegment223YYY.children = new X3D.MFNode();

HAnimSegment223ZZZ.children[0] = TouchSensor224;

let Transform225 = browser.currentScene.createNode("Transform");
Transform225.translation = new X3D.SFVec3f([0.1086,0.0001,-0.0368]);
let Shape226 = browser.currentScene.createNode("Shape");
Shape226.USE = "HAnimJointShape";
Transform225YYY.child = new X3D.undefined();

Transform225ZZZ.child[0] = Shape226;

HAnimSegment223ZZZ.children[1] = Transform225;

let Shape227 = browser.currentScene.createNode("Shape");
let LineSet228 = browser.currentScene.createNode("LineSet");
LineSet228.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA229 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA229.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA229;

let Coordinate230 = browser.currentScene.createNode("Coordinate");
Coordinate230.point = new X3D.MFVec3f([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
coord = Coordinate230;

geometry = LineSet228;

HAnimSegment223ZZZ.children[2] = Shape227;

HAnimJoint222YYY.children = new X3D.MFNode();

HAnimJoint222ZZZ.children[0] = HAnimSegment223;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint231.name = "l_metatarsophalangeal_2";
HAnimJoint231.center = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment232.name = "l_tarsal_proximal_phalanx_2";
let TouchSensor233 = browser.currentScene.createNode("TouchSensor");
TouchSensor233.description = "HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2";
HAnimSegment232YYY.children = new X3D.MFNode();

HAnimSegment232ZZZ.children[0] = TouchSensor233;

let Transform234 = browser.currentScene.createNode("Transform");
Transform234.translation = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let Shape235 = browser.currentScene.createNode("Shape");
Shape235.USE = "HAnimJointShape";
Transform234YYY.child = new X3D.undefined();

Transform234ZZZ.child[0] = Shape235;

HAnimSegment232ZZZ.children[1] = Transform234;

let Shape236 = browser.currentScene.createNode("Shape");
let LineSet237 = browser.currentScene.createNode("LineSet");
LineSet237.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA238 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA238.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA238;

let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new X3D.MFVec3f([0.1086,0.0001,0.0368,0.1086,0,0.0762]);
coord = Coordinate239;

geometry = LineSet237;

HAnimSegment232ZZZ.children[2] = Shape236;

let Shape240 = browser.currentScene.createNode("Shape");
let LineSet241 = browser.currentScene.createNode("LineSet");
LineSet241.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA242 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA242.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA242;

let Coordinate243 = browser.currentScene.createNode("Coordinate");
Coordinate243.point = new X3D.MFVec3f([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
coord = Coordinate243;

geometry = LineSet241;

HAnimSegment232ZZZ.children[3] = Shape240;

let HAnimSite244 = browser.currentScene.createNode("HAnimSite");
HAnimSite244.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite244.name = "l_metatarsal_phalanx_1_pt";
HAnimSite244.translation = new X3D.SFVec3f([0.0816,0.0232,0.0106]);
let TouchSensor245 = browser.currentScene.createNode("TouchSensor");
TouchSensor245.description = "HAnimSite l_metatarsal_pha1_pt";
HAnimSite244YYY.children = new X3D.MFNode();

HAnimSite244ZZZ.children[0] = TouchSensor245;

let Shape246 = browser.currentScene.createNode("Shape");
Shape246.USE = "HAnimSiteShape";
HAnimSite244ZZZ.children[1] = Shape246;

HAnimSegment232ZZZ.children[4] = HAnimSite244;

HAnimJoint231YYY.children = new X3D.MFNode();

HAnimJoint231ZZZ.children[0] = HAnimSegment232;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint247.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint247.center = new X3D.SFVec3f([0.1086,0,0.0762]);
let HAnimSegment248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment248.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSegment248.name = "l_tarsal_distal_phalanx_2";
let TouchSensor249 = browser.currentScene.createNode("TouchSensor");
TouchSensor249.description = "HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2";
HAnimSegment248YYY.children = new X3D.MFNode();

HAnimSegment248ZZZ.children[0] = TouchSensor249;

let Transform250 = browser.currentScene.createNode("Transform");
Transform250.translation = new X3D.SFVec3f([0.1086,0,0.0762]);
let Shape251 = browser.currentScene.createNode("Shape");
Shape251.USE = "HAnimJointShape";
Transform250YYY.child = new X3D.undefined();

Transform250ZZZ.child[0] = Shape251;

HAnimSegment248ZZZ.children[1] = Transform250;

let Shape252 = browser.currentScene.createNode("Shape");
let LineSet253 = browser.currentScene.createNode("LineSet");
LineSet253.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA254 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA254.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA254;

let Coordinate255 = browser.currentScene.createNode("Coordinate");
Coordinate255.point = new X3D.MFVec3f([0.1086,0,0.0762,0.1354,0.0016,0.1476]);
coord = Coordinate255;

geometry = LineSet253;

HAnimSegment248ZZZ.children[2] = Shape252;

let Shape256 = browser.currentScene.createNode("Shape");
let LineSet257 = browser.currentScene.createNode("LineSet");
LineSet257.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA258 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA258.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA258;

let Coordinate259 = browser.currentScene.createNode("Coordinate");
Coordinate259.point = new X3D.MFVec3f([0.1086,0,0.0762,0.1825,0.007,0.0928]);
coord = Coordinate259;

geometry = LineSet257;

HAnimSegment248ZZZ.children[3] = Shape256;

let Shape260 = browser.currentScene.createNode("Shape");
let LineSet261 = browser.currentScene.createNode("LineSet");
LineSet261.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA262 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA262.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA262;

let Coordinate263 = browser.currentScene.createNode("Coordinate");
Coordinate263.point = new X3D.MFVec3f([0.1086,0,0.0762,0.1195,0.0079,0.1433]);
coord = Coordinate263;

geometry = LineSet261;

HAnimSegment248ZZZ.children[4] = Shape260;

let HAnimSite264 = browser.currentScene.createNode("HAnimSite");
HAnimSite264.DEF = "hanim_l_forefoot_tip_pt";
HAnimSite264.name = "l_forefoot_tip_pt";
HAnimSite264.translation = new X3D.SFVec3f([0.1354,0.0016,0.1476]);
let TouchSensor265 = browser.currentScene.createNode("TouchSensor");
TouchSensor265.description = "HAnimSite l_forefoot_tip";
HAnimSite264YYY.children = new X3D.MFNode();

HAnimSite264ZZZ.children[0] = TouchSensor265;

let Shape266 = browser.currentScene.createNode("Shape");
Shape266.USE = "HAnimSiteShape";
HAnimSite264ZZZ.children[1] = Shape266;

HAnimSegment248ZZZ.children[5] = HAnimSite264;

let HAnimSite267 = browser.currentScene.createNode("HAnimSite");
HAnimSite267.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite267.name = "l_metatarsal_phalanx_5_pt";
HAnimSite267.translation = new X3D.SFVec3f([0.1825,0.007,0.0928]);
let TouchSensor268 = browser.currentScene.createNode("TouchSensor");
TouchSensor268.description = "HAnimSite l_metatarsal_pha5_pt";
HAnimSite267YYY.children = new X3D.MFNode();

HAnimSite267ZZZ.children[0] = TouchSensor268;

let Shape269 = browser.currentScene.createNode("Shape");
Shape269.USE = "HAnimSiteShape";
HAnimSite267ZZZ.children[1] = Shape269;

HAnimSegment248ZZZ.children[6] = HAnimSite267;

let HAnimSite270 = browser.currentScene.createNode("HAnimSite");
HAnimSite270.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite270.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite270.translation = new X3D.SFVec3f([0.1195,0.0079,0.1433]);
let TouchSensor271 = browser.currentScene.createNode("TouchSensor");
TouchSensor271.description = "HAnimSite l_digit2_pt";
HAnimSite270YYY.children = new X3D.MFNode();

HAnimSite270ZZZ.children[0] = TouchSensor271;

let Shape272 = browser.currentScene.createNode("Shape");
Shape272.USE = "HAnimSiteShape";
HAnimSite270ZZZ.children[1] = Shape272;

HAnimSegment248ZZZ.children[7] = HAnimSite270;

HAnimJoint247YYY.children = new X3D.MFNode();

HAnimJoint247ZZZ.children[0] = HAnimSegment248;

HAnimJoint231ZZZ.children[1] = HAnimJoint247;

HAnimJoint222ZZZ.children[1] = HAnimJoint231;

HAnimJoint185ZZZ.children[1] = HAnimJoint222;

HAnimJoint176ZZZ.children[1] = HAnimJoint185;

HAnimJoint146ZZZ.children[1] = HAnimJoint176;

HAnimJoint66ZZZ.children[1] = HAnimJoint146;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.DEF = "hanim_r_hip";
HAnimJoint273.name = "r_hip";
HAnimJoint273.center = new X3D.SFVec3f([-0.0961,0.9124,-0.0001]);
let HAnimSegment274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment274.DEF = "hanim_r_thigh";
HAnimSegment274.name = "r_thigh";
let TouchSensor275 = browser.currentScene.createNode("TouchSensor");
TouchSensor275.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment274YYY.children = new X3D.MFNode();

HAnimSegment274ZZZ.children[0] = TouchSensor275;

let Transform276 = browser.currentScene.createNode("Transform");
Transform276.translation = new X3D.SFVec3f([-0.0961,0.9124,-0.0001]);
let Shape277 = browser.currentScene.createNode("Shape");
Shape277.USE = "HAnimJointShape";
Transform276YYY.child = new X3D.undefined();

Transform276ZZZ.child[0] = Shape277;

HAnimSegment274ZZZ.children[1] = Transform276;

let Shape278 = browser.currentScene.createNode("Shape");
let LineSet279 = browser.currentScene.createNode("LineSet");
LineSet279.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA280 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA280.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA280;

let Coordinate281 = browser.currentScene.createNode("Coordinate");
Coordinate281.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
coord = Coordinate281;

geometry = LineSet279;

HAnimSegment274ZZZ.children[2] = Shape278;

let Shape282 = browser.currentScene.createNode("Shape");
let LineSet283 = browser.currentScene.createNode("LineSet");
LineSet283.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA284 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA284.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA284;

let Coordinate285 = browser.currentScene.createNode("Coordinate");
Coordinate285.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
coord = Coordinate285;

geometry = LineSet283;

HAnimSegment274ZZZ.children[3] = Shape282;

let Shape286 = browser.currentScene.createNode("Shape");
let LineSet287 = browser.currentScene.createNode("LineSet");
LineSet287.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA288 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA288;

let Coordinate289 = browser.currentScene.createNode("Coordinate");
Coordinate289.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
coord = Coordinate289;

geometry = LineSet287;

HAnimSegment274ZZZ.children[4] = Shape286;

let Shape290 = browser.currentScene.createNode("Shape");
let LineSet291 = browser.currentScene.createNode("LineSet");
LineSet291.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA292 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA292.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA292;

let Coordinate293 = browser.currentScene.createNode("Coordinate");
Coordinate293.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
coord = Coordinate293;

geometry = LineSet291;

HAnimSegment274ZZZ.children[5] = Shape290;

let HAnimSite294 = browser.currentScene.createNode("HAnimSite");
HAnimSite294.DEF = "hanim_r_knee_crease_pt";
HAnimSite294.name = "r_knee_crease_pt";
HAnimSite294.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
let TouchSensor295 = browser.currentScene.createNode("TouchSensor");
TouchSensor295.description = "HAnimSite r_knee_crease_pt";
HAnimSite294YYY.children = new X3D.MFNode();

HAnimSite294ZZZ.children[0] = TouchSensor295;

let Shape296 = browser.currentScene.createNode("Shape");
Shape296.USE = "HAnimSiteShape";
HAnimSite294ZZZ.children[1] = Shape296;

HAnimSegment274ZZZ.children[6] = HAnimSite294;

let HAnimSite297 = browser.currentScene.createNode("HAnimSite");
HAnimSite297.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite297.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite297.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
let TouchSensor298 = browser.currentScene.createNode("TouchSensor");
TouchSensor298.description = "HAnimSite r_femoral_lateral_epicn_pt";
HAnimSite297YYY.children = new X3D.MFNode();

HAnimSite297ZZZ.children[0] = TouchSensor298;

let Shape299 = browser.currentScene.createNode("Shape");
Shape299.USE = "HAnimSiteShape";
HAnimSite297ZZZ.children[1] = Shape299;

HAnimSegment274ZZZ.children[7] = HAnimSite297;

let HAnimSite300 = browser.currentScene.createNode("HAnimSite");
HAnimSite300.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite300.name = "r_femoral_medial_epicondyle_pt";
HAnimSite300.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
let TouchSensor301 = browser.currentScene.createNode("TouchSensor");
TouchSensor301.description = "HAnimSite r_femoral_medial_epicn_pt";
HAnimSite300YYY.children = new X3D.MFNode();

HAnimSite300ZZZ.children[0] = TouchSensor301;

let Shape302 = browser.currentScene.createNode("Shape");
Shape302.USE = "HAnimSiteShape";
HAnimSite300ZZZ.children[1] = Shape302;

HAnimSegment274ZZZ.children[8] = HAnimSite300;

HAnimJoint273YYY.children = new X3D.MFNode();

HAnimJoint273ZZZ.children[0] = HAnimSegment274;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.DEF = "hanim_r_knee";
HAnimJoint303.name = "r_knee";
HAnimJoint303.center = new X3D.SFVec3f([-0.104,0.4867,0.0308]);
let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.DEF = "hanim_r_calf";
HAnimSegment304.name = "r_calf";
let TouchSensor305 = browser.currentScene.createNode("TouchSensor");
TouchSensor305.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment304YYY.children = new X3D.MFNode();

HAnimSegment304ZZZ.children[0] = TouchSensor305;

let Transform306 = browser.currentScene.createNode("Transform");
Transform306.translation = new X3D.SFVec3f([-0.104,0.4867,0.0308]);
let Shape307 = browser.currentScene.createNode("Shape");
Shape307.USE = "HAnimJointShape";
Transform306YYY.child = new X3D.undefined();

Transform306ZZZ.child[0] = Shape307;

HAnimSegment304ZZZ.children[1] = Transform306;

let Shape308 = browser.currentScene.createNode("Shape");
let LineSet309 = browser.currentScene.createNode("LineSet");
LineSet309.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA310 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA310.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA310;

let Coordinate311 = browser.currentScene.createNode("Coordinate");
Coordinate311.point = new X3D.MFVec3f([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
coord = Coordinate311;

geometry = LineSet309;

HAnimSegment304ZZZ.children[2] = Shape308;

HAnimJoint303YYY.children = new X3D.MFNode();

HAnimJoint303ZZZ.children[0] = HAnimSegment304;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.DEF = "hanim_r_talocrural";
HAnimJoint312.name = "r_talocrural";
HAnimJoint312.center = new X3D.SFVec3f([-0.1101,0.0656,-0.0736]);
let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.DEF = "hanim_r_talus";
HAnimSegment313.name = "r_talus";
let TouchSensor314 = browser.currentScene.createNode("TouchSensor");
TouchSensor314.description = "HAnimJoint r_talocrural, HAnimSegment r_talus";
HAnimSegment313YYY.children = new X3D.MFNode();

HAnimSegment313ZZZ.children[0] = TouchSensor314;

let Transform315 = browser.currentScene.createNode("Transform");
Transform315.translation = new X3D.SFVec3f([-0.1101,0.0656,-0.0736]);
let Shape316 = browser.currentScene.createNode("Shape");
Shape316.USE = "HAnimJointShape";
Transform315YYY.child = new X3D.undefined();

Transform315ZZZ.child[0] = Shape316;

HAnimSegment313ZZZ.children[1] = Transform315;

let Shape317 = browser.currentScene.createNode("Shape");
let LineSet318 = browser.currentScene.createNode("LineSet");
LineSet318.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA319 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA319.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA319;

let Coordinate320 = browser.currentScene.createNode("Coordinate");
Coordinate320.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
coord = Coordinate320;

geometry = LineSet318;

HAnimSegment313ZZZ.children[2] = Shape317;

let Shape321 = browser.currentScene.createNode("Shape");
let LineSet322 = browser.currentScene.createNode("LineSet");
LineSet322.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA323 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA323;

let Coordinate324 = browser.currentScene.createNode("Coordinate");
Coordinate324.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
coord = Coordinate324;

geometry = LineSet322;

HAnimSegment313ZZZ.children[3] = Shape321;

let Shape325 = browser.currentScene.createNode("Shape");
let LineSet326 = browser.currentScene.createNode("LineSet");
LineSet326.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA327 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA327;

let Coordinate328 = browser.currentScene.createNode("Coordinate");
Coordinate328.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
coord = Coordinate328;

geometry = LineSet326;

HAnimSegment313ZZZ.children[4] = Shape325;

let Shape329 = browser.currentScene.createNode("Shape");
let LineSet330 = browser.currentScene.createNode("LineSet");
LineSet330.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA331;

let Coordinate332 = browser.currentScene.createNode("Coordinate");
Coordinate332.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
coord = Coordinate332;

geometry = LineSet330;

HAnimSegment313ZZZ.children[5] = Shape329;

let Shape333 = browser.currentScene.createNode("Shape");
let LineSet334 = browser.currentScene.createNode("LineSet");
LineSet334.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA335 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA335.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA335;

let Coordinate336 = browser.currentScene.createNode("Coordinate");
Coordinate336.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
coord = Coordinate336;

geometry = LineSet334;

HAnimSegment313ZZZ.children[6] = Shape333;

let HAnimSite337 = browser.currentScene.createNode("HAnimSite");
HAnimSite337.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite337.name = "r_lateral_malleolus_pt";
HAnimSite337.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
let TouchSensor338 = browser.currentScene.createNode("TouchSensor");
TouchSensor338.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite337YYY.children = new X3D.MFNode();

HAnimSite337ZZZ.children[0] = TouchSensor338;

let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "HAnimSiteShape";
HAnimSite337ZZZ.children[1] = Shape339;

HAnimSegment313ZZZ.children[7] = HAnimSite337;

let HAnimSite340 = browser.currentScene.createNode("HAnimSite");
HAnimSite340.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite340.name = "r_medial_malleolus_pt";
HAnimSite340.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
let TouchSensor341 = browser.currentScene.createNode("TouchSensor");
TouchSensor341.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite340YYY.children = new X3D.MFNode();

HAnimSite340ZZZ.children[0] = TouchSensor341;

let Shape342 = browser.currentScene.createNode("Shape");
Shape342.USE = "HAnimSiteShape";
HAnimSite340ZZZ.children[1] = Shape342;

HAnimSegment313ZZZ.children[8] = HAnimSite340;

let HAnimSite343 = browser.currentScene.createNode("HAnimSite");
HAnimSite343.DEF = "hanim_r_sphyrion_pt";
HAnimSite343.name = "r_sphyrion_pt";
HAnimSite343.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
let TouchSensor344 = browser.currentScene.createNode("TouchSensor");
TouchSensor344.description = "HAnimSite r_sphyrion_pt";
HAnimSite343YYY.children = new X3D.MFNode();

HAnimSite343ZZZ.children[0] = TouchSensor344;

let Shape345 = browser.currentScene.createNode("Shape");
Shape345.USE = "HAnimSiteShape";
HAnimSite343ZZZ.children[1] = Shape345;

HAnimSegment313ZZZ.children[9] = HAnimSite343;

let HAnimSite346 = browser.currentScene.createNode("HAnimSite");
HAnimSite346.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite346.name = "r_calcaneus_posterior_pt";
HAnimSite346.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
let TouchSensor347 = browser.currentScene.createNode("TouchSensor");
TouchSensor347.description = "HAnimSite r_calcaneous_post_pt";
HAnimSite346YYY.children = new X3D.MFNode();

HAnimSite346ZZZ.children[0] = TouchSensor347;

let Shape348 = browser.currentScene.createNode("Shape");
Shape348.USE = "HAnimSiteShape";
HAnimSite346ZZZ.children[1] = Shape348;

HAnimSegment313ZZZ.children[10] = HAnimSite346;

HAnimJoint312YYY.children = new X3D.MFNode();

HAnimJoint312ZZZ.children[0] = HAnimSegment313;

let HAnimJoint349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint349.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint349.name = "r_tarsometatarsal_2";
HAnimJoint349.center = new X3D.SFVec3f([-0.1086,0.0001,-0.0368]);
let HAnimSegment350 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment350.DEF = "hanim_r_metatarsal_2";
HAnimSegment350.name = "r_metatarsal_2";
let TouchSensor351 = browser.currentScene.createNode("TouchSensor");
TouchSensor351.description = "HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2";
HAnimSegment350YYY.children = new X3D.MFNode();

HAnimSegment350ZZZ.children[0] = TouchSensor351;

let Transform352 = browser.currentScene.createNode("Transform");
Transform352.translation = new X3D.SFVec3f([-0.1086,0.0001,-0.0368]);
let Shape353 = browser.currentScene.createNode("Shape");
Shape353.USE = "HAnimJointShape";
Transform352YYY.child = new X3D.undefined();

Transform352ZZZ.child[0] = Shape353;

HAnimSegment350ZZZ.children[1] = Transform352;

let Shape354 = browser.currentScene.createNode("Shape");
let LineSet355 = browser.currentScene.createNode("LineSet");
LineSet355.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA356 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA356.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA356;

let Coordinate357 = browser.currentScene.createNode("Coordinate");
Coordinate357.point = new X3D.MFVec3f([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
coord = Coordinate357;

geometry = LineSet355;

HAnimSegment350ZZZ.children[2] = Shape354;

HAnimJoint349YYY.children = new X3D.MFNode();

HAnimJoint349ZZZ.children[0] = HAnimSegment350;

let HAnimJoint358 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint358.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint358.name = "r_metatarsophalangeal_2";
HAnimJoint358.center = new X3D.SFVec3f([-0.1086,0.0001,0.0368]);
let HAnimSegment359 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment359.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment359.name = "r_tarsal_proximal_phalanx_2";
let TouchSensor360 = browser.currentScene.createNode("TouchSensor");
TouchSensor360.description = "HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2";
HAnimSegment359YYY.children = new X3D.MFNode();

HAnimSegment359ZZZ.children[0] = TouchSensor360;

let Transform361 = browser.currentScene.createNode("Transform");
Transform361.translation = new X3D.SFVec3f([-0.1086,0.0001,0.0368]);
let Shape362 = browser.currentScene.createNode("Shape");
Shape362.USE = "HAnimJointShape";
Transform361YYY.child = new X3D.undefined();

Transform361ZZZ.child[0] = Shape362;

HAnimSegment359ZZZ.children[1] = Transform361;

let Shape363 = browser.currentScene.createNode("Shape");
let LineSet364 = browser.currentScene.createNode("LineSet");
LineSet364.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA365 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA365.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA365;

let Coordinate366 = browser.currentScene.createNode("Coordinate");
Coordinate366.point = new X3D.MFVec3f([-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
coord = Coordinate366;

geometry = LineSet364;

HAnimSegment359ZZZ.children[2] = Shape363;

let Shape367 = browser.currentScene.createNode("Shape");
let LineSet368 = browser.currentScene.createNode("LineSet");
LineSet368.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA369 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA369.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA369;

let Coordinate370 = browser.currentScene.createNode("Coordinate");
Coordinate370.point = new X3D.MFVec3f([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
coord = Coordinate370;

geometry = LineSet368;

HAnimSegment359ZZZ.children[3] = Shape367;

let HAnimSite371 = browser.currentScene.createNode("HAnimSite");
HAnimSite371.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite371.name = "r_metatarsal_phalanx_1_pt";
HAnimSite371.translation = new X3D.SFVec3f([-0.0521,0.026,0.0127]);
let TouchSensor372 = browser.currentScene.createNode("TouchSensor");
TouchSensor372.description = "HAnimSite r_metatarsal_pha1_pt";
HAnimSite371YYY.children = new X3D.MFNode();

HAnimSite371ZZZ.children[0] = TouchSensor372;

let Shape373 = browser.currentScene.createNode("Shape");
Shape373.USE = "HAnimSiteShape";
HAnimSite371ZZZ.children[1] = Shape373;

HAnimSegment359ZZZ.children[4] = HAnimSite371;

HAnimJoint358YYY.children = new X3D.MFNode();

HAnimJoint358ZZZ.children[0] = HAnimSegment359;

let HAnimJoint374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint374.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint374.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint374.center = new X3D.SFVec3f([-0.1086,0,0.0762]);
let HAnimSegment375 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment375.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimSegment375.name = "r_tarsal_distal_phalanx_2";
let TouchSensor376 = browser.currentScene.createNode("TouchSensor");
TouchSensor376.description = "HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2";
HAnimSegment375YYY.children = new X3D.MFNode();

HAnimSegment375ZZZ.children[0] = TouchSensor376;

let Transform377 = browser.currentScene.createNode("Transform");
Transform377.translation = new X3D.SFVec3f([-0.1086,0,0.0762]);
let Shape378 = browser.currentScene.createNode("Shape");
Shape378.USE = "HAnimJointShape";
Transform377YYY.child = new X3D.undefined();

Transform377ZZZ.child[0] = Shape378;

HAnimSegment375ZZZ.children[1] = Transform377;

let Shape379 = browser.currentScene.createNode("Shape");
let LineSet380 = browser.currentScene.createNode("LineSet");
LineSet380.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA381 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA381.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA381;

let Coordinate382 = browser.currentScene.createNode("Coordinate");
Coordinate382.point = new X3D.MFVec3f([-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
coord = Coordinate382;

geometry = LineSet380;

HAnimSegment375ZZZ.children[2] = Shape379;

let Shape383 = browser.currentScene.createNode("Shape");
let LineSet384 = browser.currentScene.createNode("LineSet");
LineSet384.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA385 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA385.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA385;

let Coordinate386 = browser.currentScene.createNode("Coordinate");
Coordinate386.point = new X3D.MFVec3f([-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
coord = Coordinate386;

geometry = LineSet384;

HAnimSegment375ZZZ.children[3] = Shape383;

let Shape387 = browser.currentScene.createNode("Shape");
let LineSet388 = browser.currentScene.createNode("LineSet");
LineSet388.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA389 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA389.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA389;

let Coordinate390 = browser.currentScene.createNode("Coordinate");
Coordinate390.point = new X3D.MFVec3f([-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
coord = Coordinate390;

geometry = LineSet388;

HAnimSegment375ZZZ.children[4] = Shape387;

let HAnimSite391 = browser.currentScene.createNode("HAnimSite");
HAnimSite391.DEF = "hanim_r_forefoot_tip_pt";
HAnimSite391.name = "r_forefoot_tip_pt";
HAnimSite391.translation = new X3D.SFVec3f([-0.1043,0.0227,0.145]);
let TouchSensor392 = browser.currentScene.createNode("TouchSensor");
TouchSensor392.description = "HAnimSite r_forefoot_tip";
HAnimSite391YYY.children = new X3D.MFNode();

HAnimSite391ZZZ.children[0] = TouchSensor392;

let Shape393 = browser.currentScene.createNode("Shape");
Shape393.USE = "HAnimSiteShape";
HAnimSite391ZZZ.children[1] = Shape393;

HAnimSegment375ZZZ.children[5] = HAnimSite391;

let HAnimSite394 = browser.currentScene.createNode("HAnimSite");
HAnimSite394.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite394.name = "r_metatarsal_phalanx_5_pt";
HAnimSite394.translation = new X3D.SFVec3f([-0.1523,0.0166,0.0895]);
let TouchSensor395 = browser.currentScene.createNode("TouchSensor");
TouchSensor395.description = "HAnimSite r_metatarsal_pha5_pt";
HAnimSite394YYY.children = new X3D.MFNode();

HAnimSite394ZZZ.children[0] = TouchSensor395;

let Shape396 = browser.currentScene.createNode("Shape");
Shape396.USE = "HAnimSiteShape";
HAnimSite394ZZZ.children[1] = Shape396;

HAnimSegment375ZZZ.children[6] = HAnimSite394;

let HAnimSite397 = browser.currentScene.createNode("HAnimSite");
HAnimSite397.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite397.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite397.translation = new X3D.SFVec3f([-0.0883,0.0134,0.1383]);
let TouchSensor398 = browser.currentScene.createNode("TouchSensor");
TouchSensor398.description = "HAnimSite r_digit2_pt";
HAnimSite397YYY.children = new X3D.MFNode();

HAnimSite397ZZZ.children[0] = TouchSensor398;

let Shape399 = browser.currentScene.createNode("Shape");
Shape399.USE = "HAnimSiteShape";
HAnimSite397ZZZ.children[1] = Shape399;

HAnimSegment375ZZZ.children[7] = HAnimSite397;

HAnimJoint374YYY.children = new X3D.MFNode();

HAnimJoint374ZZZ.children[0] = HAnimSegment375;

HAnimJoint358ZZZ.children[1] = HAnimJoint374;

HAnimJoint349ZZZ.children[1] = HAnimJoint358;

HAnimJoint312ZZZ.children[1] = HAnimJoint349;

HAnimJoint303ZZZ.children[1] = HAnimJoint312;

HAnimJoint273ZZZ.children[1] = HAnimJoint303;

HAnimJoint66ZZZ.children[2] = HAnimJoint273;

HAnimJoint50ZZZ.children[1] = HAnimJoint66;

let HAnimJoint400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint400.DEF = "hanim_vl5";
HAnimJoint400.name = "vl5";
HAnimJoint400.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let HAnimSegment401 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment401.DEF = "hanim_l5";
HAnimSegment401.name = "l5";
let TouchSensor402 = browser.currentScene.createNode("TouchSensor");
TouchSensor402.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment401YYY.children = new X3D.MFNode();

HAnimSegment401ZZZ.children[0] = TouchSensor402;

let Transform403 = browser.currentScene.createNode("Transform");
Transform403.translation = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let Shape404 = browser.currentScene.createNode("Shape");
Shape404.USE = "HAnimJointShape";
Transform403YYY.child = new X3D.undefined();

Transform403ZZZ.child[0] = Shape404;

HAnimSegment401ZZZ.children[1] = Transform403;

let Shape405 = browser.currentScene.createNode("Shape");
let LineSet406 = browser.currentScene.createNode("LineSet");
LineSet406.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA407 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA407.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA407;

let Coordinate408 = browser.currentScene.createNode("Coordinate");
Coordinate408.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
coord = Coordinate408;

geometry = LineSet406;

HAnimSegment401ZZZ.children[2] = Shape405;

let Shape409 = browser.currentScene.createNode("Shape");
let LineSet410 = browser.currentScene.createNode("LineSet");
LineSet410.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA411 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA411.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA411;

let Coordinate412 = browser.currentScene.createNode("Coordinate");
Coordinate412.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
coord = Coordinate412;

geometry = LineSet410;

HAnimSegment401ZZZ.children[3] = Shape409;

let Shape413 = browser.currentScene.createNode("Shape");
let LineSet414 = browser.currentScene.createNode("LineSet");
LineSet414.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA415 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA415.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA415;

let Coordinate416 = browser.currentScene.createNode("Coordinate");
Coordinate416.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
coord = Coordinate416;

geometry = LineSet414;

HAnimSegment401ZZZ.children[4] = Shape413;

let HAnimSite417 = browser.currentScene.createNode("HAnimSite");
HAnimSite417.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite417.name = "waist_preferred_posterior_pt";
HAnimSite417.translation = new X3D.SFVec3f([0,1.0915,-0.1091]);
let TouchSensor418 = browser.currentScene.createNode("TouchSensor");
TouchSensor418.description = "HAnimSite waist_preferred_post_pt";
HAnimSite417YYY.children = new X3D.MFNode();

HAnimSite417ZZZ.children[0] = TouchSensor418;

let Shape419 = browser.currentScene.createNode("Shape");
Shape419.USE = "HAnimSiteShape";
HAnimSite417ZZZ.children[1] = Shape419;

HAnimSegment401ZZZ.children[5] = HAnimSite417;

let HAnimSite420 = browser.currentScene.createNode("HAnimSite");
HAnimSite420.DEF = "hanim_navel_pt";
HAnimSite420.name = "navel_pt";
HAnimSite420.translation = new X3D.SFVec3f([0.0069,1.0966,0.1017]);
let TouchSensor421 = browser.currentScene.createNode("TouchSensor");
TouchSensor421.description = "HAnimSite navel_pt";
HAnimSite420YYY.children = new X3D.MFNode();

HAnimSite420ZZZ.children[0] = TouchSensor421;

let Shape422 = browser.currentScene.createNode("Shape");
Shape422.USE = "HAnimSiteShape";
HAnimSite420ZZZ.children[1] = Shape422;

HAnimSegment401ZZZ.children[6] = HAnimSite420;

HAnimJoint400YYY.children = new X3D.MFNode();

HAnimJoint400ZZZ.children[0] = HAnimSegment401;

let HAnimJoint423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint423.DEF = "hanim_vl4";
HAnimJoint423.name = "vl4";
HAnimJoint423.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let HAnimSegment424 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment424.DEF = "hanim_l4";
HAnimSegment424.name = "l4";
let TouchSensor425 = browser.currentScene.createNode("TouchSensor");
TouchSensor425.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment424YYY.children = new X3D.MFNode();

HAnimSegment424ZZZ.children[0] = TouchSensor425;

let Transform426 = browser.currentScene.createNode("Transform");
Transform426.translation = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let Shape427 = browser.currentScene.createNode("Shape");
Shape427.USE = "HAnimJointShape";
Transform426YYY.child = new X3D.undefined();

Transform426ZZZ.child[0] = Shape427;

HAnimSegment424ZZZ.children[1] = Transform426;

let Shape428 = browser.currentScene.createNode("Shape");
let LineSet429 = browser.currentScene.createNode("LineSet");
LineSet429.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA430 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA430.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA430;

let Coordinate431 = browser.currentScene.createNode("Coordinate");
Coordinate431.point = new X3D.MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
coord = Coordinate431;

geometry = LineSet429;

HAnimSegment424ZZZ.children[2] = Shape428;

HAnimJoint423YYY.children = new X3D.MFNode();

HAnimJoint423ZZZ.children[0] = HAnimSegment424;

let HAnimJoint432 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint432.DEF = "hanim_vl3";
HAnimJoint432.name = "vl3";
HAnimJoint432.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let HAnimSegment433 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment433.DEF = "hanim_l3";
HAnimSegment433.name = "l3";
let TouchSensor434 = browser.currentScene.createNode("TouchSensor");
TouchSensor434.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment433YYY.children = new X3D.MFNode();

HAnimSegment433ZZZ.children[0] = TouchSensor434;

let Transform435 = browser.currentScene.createNode("Transform");
Transform435.translation = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let Shape436 = browser.currentScene.createNode("Shape");
Shape436.USE = "HAnimJointShape";
Transform435YYY.child = new X3D.undefined();

Transform435ZZZ.child[0] = Shape436;

HAnimSegment433ZZZ.children[1] = Transform435;

let Shape437 = browser.currentScene.createNode("Shape");
let LineSet438 = browser.currentScene.createNode("LineSet");
LineSet438.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA439 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA439.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA439;

let Coordinate440 = browser.currentScene.createNode("Coordinate");
Coordinate440.point = new X3D.MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
coord = Coordinate440;

geometry = LineSet438;

HAnimSegment433ZZZ.children[2] = Shape437;

HAnimJoint432YYY.children = new X3D.MFNode();

HAnimJoint432ZZZ.children[0] = HAnimSegment433;

let HAnimJoint441 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint441.DEF = "hanim_vl2";
HAnimJoint441.name = "vl2";
HAnimJoint441.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let HAnimSegment442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment442.DEF = "hanim_l2";
HAnimSegment442.name = "l2";
let TouchSensor443 = browser.currentScene.createNode("TouchSensor");
TouchSensor443.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment442YYY.children = new X3D.MFNode();

HAnimSegment442ZZZ.children[0] = TouchSensor443;

let Transform444 = browser.currentScene.createNode("Transform");
Transform444.translation = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let Shape445 = browser.currentScene.createNode("Shape");
Shape445.USE = "HAnimJointShape";
Transform444YYY.child = new X3D.undefined();

Transform444ZZZ.child[0] = Shape445;

HAnimSegment442ZZZ.children[1] = Transform444;

let Shape446 = browser.currentScene.createNode("Shape");
let LineSet447 = browser.currentScene.createNode("LineSet");
LineSet447.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA448 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA448.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA448;

let Coordinate449 = browser.currentScene.createNode("Coordinate");
Coordinate449.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
coord = Coordinate449;

geometry = LineSet447;

HAnimSegment442ZZZ.children[2] = Shape446;

let Shape450 = browser.currentScene.createNode("Shape");
let LineSet451 = browser.currentScene.createNode("LineSet");
LineSet451.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA452 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA452;

let Coordinate453 = browser.currentScene.createNode("Coordinate");
Coordinate453.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
coord = Coordinate453;

geometry = LineSet451;

HAnimSegment442ZZZ.children[3] = Shape450;

let Shape454 = browser.currentScene.createNode("Shape");
let LineSet455 = browser.currentScene.createNode("LineSet");
LineSet455.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA456 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA456;

let Coordinate457 = browser.currentScene.createNode("Coordinate");
Coordinate457.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
coord = Coordinate457;

geometry = LineSet455;

HAnimSegment442ZZZ.children[4] = Shape454;

let Shape458 = browser.currentScene.createNode("Shape");
let LineSet459 = browser.currentScene.createNode("LineSet");
LineSet459.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA460 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA460.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA460;

let Coordinate461 = browser.currentScene.createNode("Coordinate");
Coordinate461.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
coord = Coordinate461;

geometry = LineSet459;

HAnimSegment442ZZZ.children[5] = Shape458;

let HAnimSite462 = browser.currentScene.createNode("HAnimSite");
HAnimSite462.DEF = "hanim_r_rib10_pt";
HAnimSite462.name = "r_rib10_pt";
HAnimSite462.translation = new X3D.SFVec3f([-0.0711,1.1941,0.1016]);
let TouchSensor463 = browser.currentScene.createNode("TouchSensor");
TouchSensor463.description = "HAnimSite r_rib10_pt";
HAnimSite462YYY.children = new X3D.MFNode();

HAnimSite462ZZZ.children[0] = TouchSensor463;

let Shape464 = browser.currentScene.createNode("Shape");
Shape464.USE = "HAnimSiteShape";
HAnimSite462ZZZ.children[1] = Shape464;

HAnimSegment442ZZZ.children[6] = HAnimSite462;

let HAnimSite465 = browser.currentScene.createNode("HAnimSite");
HAnimSite465.DEF = "hanim_l_rib10_pt";
HAnimSite465.name = "l_rib10_pt";
HAnimSite465.translation = new X3D.SFVec3f([0.0871,1.1925,0.0992]);
let TouchSensor466 = browser.currentScene.createNode("TouchSensor");
TouchSensor466.description = "HAnimSite l_rib10_pt";
HAnimSite465YYY.children = new X3D.MFNode();

HAnimSite465ZZZ.children[0] = TouchSensor466;

let Shape467 = browser.currentScene.createNode("Shape");
Shape467.USE = "HAnimSiteShape";
HAnimSite465ZZZ.children[1] = Shape467;

HAnimSegment442ZZZ.children[7] = HAnimSite465;

let HAnimSite468 = browser.currentScene.createNode("HAnimSite");
HAnimSite468.DEF = "hanim_rib10_midspine_pt";
HAnimSite468.name = "rib10_midspine_pt";
HAnimSite468.translation = new X3D.SFVec3f([0.0049,1.1908,-0.1113]);
let TouchSensor469 = browser.currentScene.createNode("TouchSensor");
TouchSensor469.description = "HAnimSite rib10_midspine_pt";
HAnimSite468YYY.children = new X3D.MFNode();

HAnimSite468ZZZ.children[0] = TouchSensor469;

let Shape470 = browser.currentScene.createNode("Shape");
Shape470.USE = "HAnimSiteShape";
HAnimSite468ZZZ.children[1] = Shape470;

HAnimSegment442ZZZ.children[8] = HAnimSite468;

HAnimJoint441YYY.children = new X3D.MFNode();

HAnimJoint441ZZZ.children[0] = HAnimSegment442;

let HAnimJoint471 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint471.DEF = "hanim_vl1";
HAnimJoint471.name = "vl1";
HAnimJoint471.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let HAnimSegment472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment472.DEF = "hanim_l1";
HAnimSegment472.name = "l1";
let TouchSensor473 = browser.currentScene.createNode("TouchSensor");
TouchSensor473.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment472YYY.children = new X3D.MFNode();

HAnimSegment472ZZZ.children[0] = TouchSensor473;

let Transform474 = browser.currentScene.createNode("Transform");
Transform474.translation = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let Shape475 = browser.currentScene.createNode("Shape");
Shape475.USE = "HAnimJointShape";
Transform474YYY.child = new X3D.undefined();

Transform474ZZZ.child[0] = Shape475;

HAnimSegment472ZZZ.children[1] = Transform474;

let Shape476 = browser.currentScene.createNode("Shape");
let LineSet477 = browser.currentScene.createNode("LineSet");
LineSet477.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA478 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA478;

let Coordinate479 = browser.currentScene.createNode("Coordinate");
Coordinate479.point = new X3D.MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
coord = Coordinate479;

geometry = LineSet477;

HAnimSegment472ZZZ.children[2] = Shape476;

HAnimJoint471YYY.children = new X3D.MFNode();

HAnimJoint471ZZZ.children[0] = HAnimSegment472;

let HAnimJoint480 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint480.DEF = "hanim_vt12";
HAnimJoint480.name = "vt12";
HAnimJoint480.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let HAnimSegment481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment481.DEF = "hanim_t12";
HAnimSegment481.name = "t12";
let TouchSensor482 = browser.currentScene.createNode("TouchSensor");
TouchSensor482.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment481YYY.children = new X3D.MFNode();

HAnimSegment481ZZZ.children[0] = TouchSensor482;

let Transform483 = browser.currentScene.createNode("Transform");
Transform483.translation = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let Shape484 = browser.currentScene.createNode("Shape");
Shape484.USE = "HAnimJointShape";
Transform483YYY.child = new X3D.undefined();

Transform483ZZZ.child[0] = Shape484;

HAnimSegment481ZZZ.children[1] = Transform483;

let Shape485 = browser.currentScene.createNode("Shape");
let LineSet486 = browser.currentScene.createNode("LineSet");
LineSet486.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA487 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA487.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA487;

let Coordinate488 = browser.currentScene.createNode("Coordinate");
Coordinate488.point = new X3D.MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
coord = Coordinate488;

geometry = LineSet486;

HAnimSegment481ZZZ.children[2] = Shape485;

HAnimJoint480YYY.children = new X3D.MFNode();

HAnimJoint480ZZZ.children[0] = HAnimSegment481;

let HAnimJoint489 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint489.DEF = "hanim_vt11";
HAnimJoint489.name = "vt11";
HAnimJoint489.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.DEF = "hanim_t11";
HAnimSegment490.name = "t11";
let TouchSensor491 = browser.currentScene.createNode("TouchSensor");
TouchSensor491.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment490YYY.children = new X3D.MFNode();

HAnimSegment490ZZZ.children[0] = TouchSensor491;

let Transform492 = browser.currentScene.createNode("Transform");
Transform492.translation = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let Shape493 = browser.currentScene.createNode("Shape");
Shape493.USE = "HAnimJointShape";
Transform492YYY.child = new X3D.undefined();

Transform492ZZZ.child[0] = Shape493;

HAnimSegment490ZZZ.children[1] = Transform492;

let Shape494 = browser.currentScene.createNode("Shape");
let LineSet495 = browser.currentScene.createNode("LineSet");
LineSet495.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA496 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA496.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA496;

let Coordinate497 = browser.currentScene.createNode("Coordinate");
Coordinate497.point = new X3D.MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
coord = Coordinate497;

geometry = LineSet495;

HAnimSegment490ZZZ.children[2] = Shape494;

HAnimJoint489YYY.children = new X3D.MFNode();

HAnimJoint489ZZZ.children[0] = HAnimSegment490;

let HAnimJoint498 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint498.DEF = "hanim_vt10";
HAnimJoint498.name = "vt10";
HAnimJoint498.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let HAnimSegment499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment499.DEF = "hanim_t10";
HAnimSegment499.name = "t10";
let TouchSensor500 = browser.currentScene.createNode("TouchSensor");
TouchSensor500.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment499YYY.children = new X3D.MFNode();

HAnimSegment499ZZZ.children[0] = TouchSensor500;

let Transform501 = browser.currentScene.createNode("Transform");
Transform501.translation = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let Shape502 = browser.currentScene.createNode("Shape");
Shape502.USE = "HAnimJointShape";
Transform501YYY.child = new X3D.undefined();

Transform501ZZZ.child[0] = Shape502;

HAnimSegment499ZZZ.children[1] = Transform501;

let Shape503 = browser.currentScene.createNode("Shape");
let LineSet504 = browser.currentScene.createNode("LineSet");
LineSet504.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA505 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA505.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA505;

let Coordinate506 = browser.currentScene.createNode("Coordinate");
Coordinate506.point = new X3D.MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
coord = Coordinate506;

geometry = LineSet504;

HAnimSegment499ZZZ.children[2] = Shape503;

let Shape507 = browser.currentScene.createNode("Shape");
let LineSet508 = browser.currentScene.createNode("LineSet");
LineSet508.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA509 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA509.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA509;

let Coordinate510 = browser.currentScene.createNode("Coordinate");
Coordinate510.point = new X3D.MFVec3f([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
coord = Coordinate510;

geometry = LineSet508;

HAnimSegment499ZZZ.children[3] = Shape507;

let HAnimSite511 = browser.currentScene.createNode("HAnimSite");
HAnimSite511.DEF = "hanim_substernale_pt";
HAnimSite511.name = "substernale_pt";
HAnimSite511.translation = new X3D.SFVec3f([0.0085,1.2995,0.1147]);
let TouchSensor512 = browser.currentScene.createNode("TouchSensor");
TouchSensor512.description = "HAnimSite substernale_pt";
HAnimSite511YYY.children = new X3D.MFNode();

HAnimSite511ZZZ.children[0] = TouchSensor512;

let Shape513 = browser.currentScene.createNode("Shape");
Shape513.USE = "HAnimSiteShape";
HAnimSite511ZZZ.children[1] = Shape513;

HAnimSegment499ZZZ.children[4] = HAnimSite511;

HAnimJoint498YYY.children = new X3D.MFNode();

HAnimJoint498ZZZ.children[0] = HAnimSegment499;

let HAnimJoint514 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint514.DEF = "hanim_vt9";
HAnimJoint514.name = "vt9";
HAnimJoint514.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.DEF = "hanim_t9";
HAnimSegment515.name = "t9";
let TouchSensor516 = browser.currentScene.createNode("TouchSensor");
TouchSensor516.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment515YYY.children = new X3D.MFNode();

HAnimSegment515ZZZ.children[0] = TouchSensor516;

let Transform517 = browser.currentScene.createNode("Transform");
Transform517.translation = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "HAnimJointShape";
Transform517YYY.child = new X3D.undefined();

Transform517ZZZ.child[0] = Shape518;

HAnimSegment515ZZZ.children[1] = Transform517;

let Shape519 = browser.currentScene.createNode("Shape");
let LineSet520 = browser.currentScene.createNode("LineSet");
LineSet520.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA521 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA521;

let Coordinate522 = browser.currentScene.createNode("Coordinate");
Coordinate522.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
coord = Coordinate522;

geometry = LineSet520;

HAnimSegment515ZZZ.children[2] = Shape519;

let Shape523 = browser.currentScene.createNode("Shape");
let LineSet524 = browser.currentScene.createNode("LineSet");
LineSet524.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA525 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA525.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA525;

let Coordinate526 = browser.currentScene.createNode("Coordinate");
Coordinate526.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
coord = Coordinate526;

geometry = LineSet524;

HAnimSegment515ZZZ.children[3] = Shape523;

let Shape527 = browser.currentScene.createNode("Shape");
let LineSet528 = browser.currentScene.createNode("LineSet");
LineSet528.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA529 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA529.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA529;

let Coordinate530 = browser.currentScene.createNode("Coordinate");
Coordinate530.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
coord = Coordinate530;

geometry = LineSet528;

HAnimSegment515ZZZ.children[4] = Shape527;

let HAnimSite531 = browser.currentScene.createNode("HAnimSite");
HAnimSite531.DEF = "hanim_r_thelion_pt";
HAnimSite531.name = "r_thelion_pt";
HAnimSite531.translation = new X3D.SFVec3f([-0.0736,1.3385,0.1217]);
let TouchSensor532 = browser.currentScene.createNode("TouchSensor");
TouchSensor532.description = "HAnimSite r_thelion_pt";
HAnimSite531YYY.children = new X3D.MFNode();

HAnimSite531ZZZ.children[0] = TouchSensor532;

let Shape533 = browser.currentScene.createNode("Shape");
Shape533.USE = "HAnimSiteShape";
HAnimSite531ZZZ.children[1] = Shape533;

HAnimSegment515ZZZ.children[5] = HAnimSite531;

let HAnimSite534 = browser.currentScene.createNode("HAnimSite");
HAnimSite534.DEF = "hanim_l_thelion_pt";
HAnimSite534.name = "l_thelion_pt";
HAnimSite534.translation = new X3D.SFVec3f([0.0918,1.3382,0.1192]);
let TouchSensor535 = browser.currentScene.createNode("TouchSensor");
TouchSensor535.description = "HAnimSite l_thelion_pt";
HAnimSite534YYY.children = new X3D.MFNode();

HAnimSite534ZZZ.children[0] = TouchSensor535;

let Shape536 = browser.currentScene.createNode("Shape");
Shape536.USE = "HAnimSiteShape";
HAnimSite534ZZZ.children[1] = Shape536;

HAnimSegment515ZZZ.children[6] = HAnimSite534;

HAnimJoint514YYY.children = new X3D.MFNode();

HAnimJoint514ZZZ.children[0] = HAnimSegment515;

let HAnimJoint537 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint537.DEF = "hanim_vt8";
HAnimJoint537.name = "vt8";
HAnimJoint537.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let HAnimSegment538 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment538.DEF = "hanim_t8";
HAnimSegment538.name = "t8";
let TouchSensor539 = browser.currentScene.createNode("TouchSensor");
TouchSensor539.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment538YYY.children = new X3D.MFNode();

HAnimSegment538ZZZ.children[0] = TouchSensor539;

let Transform540 = browser.currentScene.createNode("Transform");
Transform540.translation = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let Shape541 = browser.currentScene.createNode("Shape");
Shape541.USE = "HAnimJointShape";
Transform540YYY.child = new X3D.undefined();

Transform540ZZZ.child[0] = Shape541;

HAnimSegment538ZZZ.children[1] = Transform540;

let Shape542 = browser.currentScene.createNode("Shape");
let LineSet543 = browser.currentScene.createNode("LineSet");
LineSet543.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA544 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA544.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA544;

let Coordinate545 = browser.currentScene.createNode("Coordinate");
Coordinate545.point = new X3D.MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
coord = Coordinate545;

geometry = LineSet543;

HAnimSegment538ZZZ.children[2] = Shape542;

HAnimJoint537YYY.children = new X3D.MFNode();

HAnimJoint537ZZZ.children[0] = HAnimSegment538;

let HAnimJoint546 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint546.DEF = "hanim_vt7";
HAnimJoint546.name = "vt7";
HAnimJoint546.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let HAnimSegment547 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment547.DEF = "hanim_t7";
HAnimSegment547.name = "t7";
let TouchSensor548 = browser.currentScene.createNode("TouchSensor");
TouchSensor548.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment547YYY.children = new X3D.MFNode();

HAnimSegment547ZZZ.children[0] = TouchSensor548;

let Transform549 = browser.currentScene.createNode("Transform");
Transform549.translation = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let Shape550 = browser.currentScene.createNode("Shape");
Shape550.USE = "HAnimJointShape";
Transform549YYY.child = new X3D.undefined();

Transform549ZZZ.child[0] = Shape550;

HAnimSegment547ZZZ.children[1] = Transform549;

let Shape551 = browser.currentScene.createNode("Shape");
let LineSet552 = browser.currentScene.createNode("LineSet");
LineSet552.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA553 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA553.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA553;

let Coordinate554 = browser.currentScene.createNode("Coordinate");
Coordinate554.point = new X3D.MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
coord = Coordinate554;

geometry = LineSet552;

HAnimSegment547ZZZ.children[2] = Shape551;

HAnimJoint546YYY.children = new X3D.MFNode();

HAnimJoint546ZZZ.children[0] = HAnimSegment547;

let HAnimJoint555 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint555.DEF = "hanim_vt6";
HAnimJoint555.name = "vt6";
HAnimJoint555.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let HAnimSegment556 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment556.DEF = "hanim_t6";
HAnimSegment556.name = "t6";
let TouchSensor557 = browser.currentScene.createNode("TouchSensor");
TouchSensor557.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment556YYY.children = new X3D.MFNode();

HAnimSegment556ZZZ.children[0] = TouchSensor557;

let Transform558 = browser.currentScene.createNode("Transform");
Transform558.translation = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let Shape559 = browser.currentScene.createNode("Shape");
Shape559.USE = "HAnimJointShape";
Transform558YYY.child = new X3D.undefined();

Transform558ZZZ.child[0] = Shape559;

HAnimSegment556ZZZ.children[1] = Transform558;

let Shape560 = browser.currentScene.createNode("Shape");
let LineSet561 = browser.currentScene.createNode("LineSet");
LineSet561.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA562 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA562.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA562;

let Coordinate563 = browser.currentScene.createNode("Coordinate");
Coordinate563.point = new X3D.MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
coord = Coordinate563;

geometry = LineSet561;

HAnimSegment556ZZZ.children[2] = Shape560;

HAnimJoint555YYY.children = new X3D.MFNode();

HAnimJoint555ZZZ.children[0] = HAnimSegment556;

let HAnimJoint564 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint564.DEF = "hanim_vt5";
HAnimJoint564.name = "vt5";
HAnimJoint564.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let HAnimSegment565 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment565.DEF = "hanim_t5";
HAnimSegment565.name = "t5";
let TouchSensor566 = browser.currentScene.createNode("TouchSensor");
TouchSensor566.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment565YYY.children = new X3D.MFNode();

HAnimSegment565ZZZ.children[0] = TouchSensor566;

let Transform567 = browser.currentScene.createNode("Transform");
Transform567.translation = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let Shape568 = browser.currentScene.createNode("Shape");
Shape568.USE = "HAnimJointShape";
Transform567YYY.child = new X3D.undefined();

Transform567ZZZ.child[0] = Shape568;

HAnimSegment565ZZZ.children[1] = Transform567;

let Shape569 = browser.currentScene.createNode("Shape");
let LineSet570 = browser.currentScene.createNode("LineSet");
LineSet570.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA571 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA571.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA571;

let Coordinate572 = browser.currentScene.createNode("Coordinate");
Coordinate572.point = new X3D.MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
coord = Coordinate572;

geometry = LineSet570;

HAnimSegment565ZZZ.children[2] = Shape569;

HAnimJoint564YYY.children = new X3D.MFNode();

HAnimJoint564ZZZ.children[0] = HAnimSegment565;

let HAnimJoint573 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint573.DEF = "hanim_vt4";
HAnimJoint573.name = "vt4";
HAnimJoint573.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let HAnimSegment574 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment574.DEF = "hanim_t4";
HAnimSegment574.name = "t4";
let TouchSensor575 = browser.currentScene.createNode("TouchSensor");
TouchSensor575.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment574YYY.children = new X3D.MFNode();

HAnimSegment574ZZZ.children[0] = TouchSensor575;

let Transform576 = browser.currentScene.createNode("Transform");
Transform576.translation = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let Shape577 = browser.currentScene.createNode("Shape");
Shape577.USE = "HAnimJointShape";
Transform576YYY.child = new X3D.undefined();

Transform576ZZZ.child[0] = Shape577;

HAnimSegment574ZZZ.children[1] = Transform576;

let Shape578 = browser.currentScene.createNode("Shape");
let LineSet579 = browser.currentScene.createNode("LineSet");
LineSet579.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA580 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA580.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA580;

let Coordinate581 = browser.currentScene.createNode("Coordinate");
Coordinate581.point = new X3D.MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
coord = Coordinate581;

geometry = LineSet579;

HAnimSegment574ZZZ.children[2] = Shape578;

HAnimJoint573YYY.children = new X3D.MFNode();

HAnimJoint573ZZZ.children[0] = HAnimSegment574;

let HAnimJoint582 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint582.DEF = "hanim_vt3";
HAnimJoint582.name = "vt3";
HAnimJoint582.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let HAnimSegment583 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment583.DEF = "hanim_t3";
HAnimSegment583.name = "t3";
let TouchSensor584 = browser.currentScene.createNode("TouchSensor");
TouchSensor584.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment583YYY.children = new X3D.MFNode();

HAnimSegment583ZZZ.children[0] = TouchSensor584;

let Transform585 = browser.currentScene.createNode("Transform");
Transform585.translation = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let Shape586 = browser.currentScene.createNode("Shape");
Shape586.USE = "HAnimJointShape";
Transform585YYY.child = new X3D.undefined();

Transform585ZZZ.child[0] = Shape586;

HAnimSegment583ZZZ.children[1] = Transform585;

let Shape587 = browser.currentScene.createNode("Shape");
let LineSet588 = browser.currentScene.createNode("LineSet");
LineSet588.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA589 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA589.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA589;

let Coordinate590 = browser.currentScene.createNode("Coordinate");
Coordinate590.point = new X3D.MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
coord = Coordinate590;

geometry = LineSet588;

HAnimSegment583ZZZ.children[2] = Shape587;

HAnimJoint582YYY.children = new X3D.MFNode();

HAnimJoint582ZZZ.children[0] = HAnimSegment583;

let HAnimJoint591 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint591.DEF = "hanim_vt2";
HAnimJoint591.name = "vt2";
HAnimJoint591.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let HAnimSegment592 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment592.DEF = "hanim_t2";
HAnimSegment592.name = "t2";
let TouchSensor593 = browser.currentScene.createNode("TouchSensor");
TouchSensor593.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment592YYY.children = new X3D.MFNode();

HAnimSegment592ZZZ.children[0] = TouchSensor593;

let Transform594 = browser.currentScene.createNode("Transform");
Transform594.translation = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let Shape595 = browser.currentScene.createNode("Shape");
Shape595.USE = "HAnimJointShape";
Transform594YYY.child = new X3D.undefined();

Transform594ZZZ.child[0] = Shape595;

HAnimSegment592ZZZ.children[1] = Transform594;

let Shape596 = browser.currentScene.createNode("Shape");
let LineSet597 = browser.currentScene.createNode("LineSet");
LineSet597.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA598 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA598.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA598;

let Coordinate599 = browser.currentScene.createNode("Coordinate");
Coordinate599.point = new X3D.MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
coord = Coordinate599;

geometry = LineSet597;

HAnimSegment592ZZZ.children[2] = Shape596;

HAnimJoint591YYY.children = new X3D.MFNode();

HAnimJoint591ZZZ.children[0] = HAnimSegment592;

let HAnimJoint600 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint600.DEF = "hanim_vt1";
HAnimJoint600.name = "vt1";
HAnimJoint600.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let HAnimSegment601 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment601.DEF = "hanim_t1";
HAnimSegment601.name = "t1";
let TouchSensor602 = browser.currentScene.createNode("TouchSensor");
TouchSensor602.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment601YYY.children = new X3D.MFNode();

HAnimSegment601ZZZ.children[0] = TouchSensor602;

let Transform603 = browser.currentScene.createNode("Transform");
Transform603.translation = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let Shape604 = browser.currentScene.createNode("Shape");
Shape604.USE = "HAnimJointShape";
Transform603YYY.child = new X3D.undefined();

Transform603ZZZ.child[0] = Shape604;

HAnimSegment601ZZZ.children[1] = Transform603;

let Shape605 = browser.currentScene.createNode("Shape");
let LineSet606 = browser.currentScene.createNode("LineSet");
LineSet606.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA607 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA607.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA607;

let Coordinate608 = browser.currentScene.createNode("Coordinate");
Coordinate608.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
coord = Coordinate608;

geometry = LineSet606;

HAnimSegment601ZZZ.children[2] = Shape605;

let Shape609 = browser.currentScene.createNode("Shape");
let LineSet610 = browser.currentScene.createNode("LineSet");
LineSet610.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA611 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA611;

let Coordinate612 = browser.currentScene.createNode("Coordinate");
Coordinate612.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
coord = Coordinate612;

geometry = LineSet610;

HAnimSegment601ZZZ.children[3] = Shape609;

let Shape613 = browser.currentScene.createNode("Shape");
let LineSet614 = browser.currentScene.createNode("LineSet");
LineSet614.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA615 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA615.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA615;

let Coordinate616 = browser.currentScene.createNode("Coordinate");
Coordinate616.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
coord = Coordinate616;

geometry = LineSet614;

HAnimSegment601ZZZ.children[4] = Shape613;

let Shape617 = browser.currentScene.createNode("Shape");
let LineSet618 = browser.currentScene.createNode("LineSet");
LineSet618.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA619 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA619.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA619;

let Coordinate620 = browser.currentScene.createNode("Coordinate");
Coordinate620.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
coord = Coordinate620;

geometry = LineSet618;

HAnimSegment601ZZZ.children[5] = Shape617;

let Shape621 = browser.currentScene.createNode("Shape");
let LineSet622 = browser.currentScene.createNode("LineSet");
LineSet622.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA623 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA623.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA623;

let Coordinate624 = browser.currentScene.createNode("Coordinate");
Coordinate624.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
coord = Coordinate624;

geometry = LineSet622;

HAnimSegment601ZZZ.children[6] = Shape621;

let HAnimSite625 = browser.currentScene.createNode("HAnimSite");
HAnimSite625.DEF = "hanim_suprasternale_pt";
HAnimSite625.name = "suprasternale_pt";
HAnimSite625.translation = new X3D.SFVec3f([0.0084,1.4714,0.0551]);
let TouchSensor626 = browser.currentScene.createNode("TouchSensor");
TouchSensor626.description = "HAnimSite suprasternale_pt";
HAnimSite625YYY.children = new X3D.MFNode();

HAnimSite625ZZZ.children[0] = TouchSensor626;

let Shape627 = browser.currentScene.createNode("Shape");
Shape627.USE = "HAnimSiteShape";
HAnimSite625ZZZ.children[1] = Shape627;

HAnimSegment601ZZZ.children[7] = HAnimSite625;

let HAnimSite628 = browser.currentScene.createNode("HAnimSite");
HAnimSite628.DEF = "hanim_cervicale_pt";
HAnimSite628.name = "cervicale_pt";
HAnimSite628.translation = new X3D.SFVec3f([0.0064,1.52,-0.0815]);
let TouchSensor629 = browser.currentScene.createNode("TouchSensor");
TouchSensor629.description = "HAnimSite cervicale_pt";
HAnimSite628YYY.children = new X3D.MFNode();

HAnimSite628ZZZ.children[0] = TouchSensor629;

let Shape630 = browser.currentScene.createNode("Shape");
Shape630.USE = "HAnimSiteShape";
HAnimSite628ZZZ.children[1] = Shape630;

HAnimSegment601ZZZ.children[8] = HAnimSite628;

HAnimJoint600YYY.children = new X3D.MFNode();

HAnimJoint600ZZZ.children[0] = HAnimSegment601;

let HAnimJoint631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint631.DEF = "hanim_vc7";
HAnimJoint631.name = "vc7";
HAnimJoint631.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let HAnimSegment632 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment632.DEF = "hanim_c7";
HAnimSegment632.name = "c7";
let TouchSensor633 = browser.currentScene.createNode("TouchSensor");
TouchSensor633.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment632YYY.children = new X3D.MFNode();

HAnimSegment632ZZZ.children[0] = TouchSensor633;

let Transform634 = browser.currentScene.createNode("Transform");
Transform634.translation = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let Shape635 = browser.currentScene.createNode("Shape");
Shape635.USE = "HAnimJointShape";
Transform634YYY.child = new X3D.undefined();

Transform634ZZZ.child[0] = Shape635;

HAnimSegment632ZZZ.children[1] = Transform634;

let Shape636 = browser.currentScene.createNode("Shape");
let LineSet637 = browser.currentScene.createNode("LineSet");
LineSet637.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA638 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA638.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA638;

let Coordinate639 = browser.currentScene.createNode("Coordinate");
Coordinate639.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
coord = Coordinate639;

geometry = LineSet637;

HAnimSegment632ZZZ.children[2] = Shape636;

let Shape640 = browser.currentScene.createNode("Shape");
let LineSet641 = browser.currentScene.createNode("LineSet");
LineSet641.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA642 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA642.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA642;

let Coordinate643 = browser.currentScene.createNode("Coordinate");
Coordinate643.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
coord = Coordinate643;

geometry = LineSet641;

HAnimSegment632ZZZ.children[3] = Shape640;

let Shape644 = browser.currentScene.createNode("Shape");
let LineSet645 = browser.currentScene.createNode("LineSet");
LineSet645.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA646 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA646.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA646;

let Coordinate647 = browser.currentScene.createNode("Coordinate");
Coordinate647.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
coord = Coordinate647;

geometry = LineSet645;

HAnimSegment632ZZZ.children[4] = Shape644;

let HAnimSite648 = browser.currentScene.createNode("HAnimSite");
HAnimSite648.DEF = "hanim_r_neck_base_pt";
HAnimSite648.name = "r_neck_base_pt";
HAnimSite648.translation = new X3D.SFVec3f([-0.0419,1.5149,-0.022]);
let TouchSensor649 = browser.currentScene.createNode("TouchSensor");
TouchSensor649.description = "HAnimSite r_neck_base_pt";
HAnimSite648YYY.children = new X3D.MFNode();

HAnimSite648ZZZ.children[0] = TouchSensor649;

let Shape650 = browser.currentScene.createNode("Shape");
Shape650.USE = "HAnimSiteShape";
HAnimSite648ZZZ.children[1] = Shape650;

HAnimSegment632ZZZ.children[5] = HAnimSite648;

let HAnimSite651 = browser.currentScene.createNode("HAnimSite");
HAnimSite651.DEF = "hanim_l_neck_base_pt";
HAnimSite651.name = "l_neck_base_pt";
HAnimSite651.translation = new X3D.SFVec3f([0.0646,1.5141,-0.038]);
let TouchSensor652 = browser.currentScene.createNode("TouchSensor");
TouchSensor652.description = "HAnimSite l_neck_base_pt";
HAnimSite651YYY.children = new X3D.MFNode();

HAnimSite651ZZZ.children[0] = TouchSensor652;

let Shape653 = browser.currentScene.createNode("Shape");
Shape653.USE = "HAnimSiteShape";
HAnimSite651ZZZ.children[1] = Shape653;

HAnimSegment632ZZZ.children[6] = HAnimSite651;

HAnimJoint631YYY.children = new X3D.MFNode();

HAnimJoint631ZZZ.children[0] = HAnimSegment632;

let HAnimJoint654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint654.DEF = "hanim_vc6";
HAnimJoint654.name = "vc6";
HAnimJoint654.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let HAnimSegment655 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment655.DEF = "hanim_c6";
HAnimSegment655.name = "c6";
let TouchSensor656 = browser.currentScene.createNode("TouchSensor");
TouchSensor656.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment655YYY.children = new X3D.MFNode();

HAnimSegment655ZZZ.children[0] = TouchSensor656;

let Transform657 = browser.currentScene.createNode("Transform");
Transform657.translation = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let Shape658 = browser.currentScene.createNode("Shape");
Shape658.USE = "HAnimJointShape";
Transform657YYY.child = new X3D.undefined();

Transform657ZZZ.child[0] = Shape658;

HAnimSegment655ZZZ.children[1] = Transform657;

let Shape659 = browser.currentScene.createNode("Shape");
let LineSet660 = browser.currentScene.createNode("LineSet");
LineSet660.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA661 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA661.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA661;

let Coordinate662 = browser.currentScene.createNode("Coordinate");
Coordinate662.point = new X3D.MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
coord = Coordinate662;

geometry = LineSet660;

HAnimSegment655ZZZ.children[2] = Shape659;

HAnimJoint654YYY.children = new X3D.MFNode();

HAnimJoint654ZZZ.children[0] = HAnimSegment655;

let HAnimJoint663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint663.DEF = "hanim_vc5";
HAnimJoint663.name = "vc5";
HAnimJoint663.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let HAnimSegment664 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment664.DEF = "hanim_c5";
HAnimSegment664.name = "c5";
let TouchSensor665 = browser.currentScene.createNode("TouchSensor");
TouchSensor665.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment664YYY.children = new X3D.MFNode();

HAnimSegment664ZZZ.children[0] = TouchSensor665;

let Transform666 = browser.currentScene.createNode("Transform");
Transform666.translation = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let Shape667 = browser.currentScene.createNode("Shape");
Shape667.USE = "HAnimJointShape";
Transform666YYY.child = new X3D.undefined();

Transform666ZZZ.child[0] = Shape667;

HAnimSegment664ZZZ.children[1] = Transform666;

let Shape668 = browser.currentScene.createNode("Shape");
let LineSet669 = browser.currentScene.createNode("LineSet");
LineSet669.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA670 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA670.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA670;

let Coordinate671 = browser.currentScene.createNode("Coordinate");
Coordinate671.point = new X3D.MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
coord = Coordinate671;

geometry = LineSet669;

HAnimSegment664ZZZ.children[2] = Shape668;

HAnimJoint663YYY.children = new X3D.MFNode();

HAnimJoint663ZZZ.children[0] = HAnimSegment664;

let HAnimJoint672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint672.DEF = "hanim_vc4";
HAnimJoint672.name = "vc4";
HAnimJoint672.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let HAnimSegment673 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment673.DEF = "hanim_c4";
HAnimSegment673.name = "c4";
let TouchSensor674 = browser.currentScene.createNode("TouchSensor");
TouchSensor674.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment673YYY.children = new X3D.MFNode();

HAnimSegment673ZZZ.children[0] = TouchSensor674;

let Transform675 = browser.currentScene.createNode("Transform");
Transform675.translation = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let Shape676 = browser.currentScene.createNode("Shape");
Shape676.USE = "HAnimJointShape";
Transform675YYY.child = new X3D.undefined();

Transform675ZZZ.child[0] = Shape676;

HAnimSegment673ZZZ.children[1] = Transform675;

let Shape677 = browser.currentScene.createNode("Shape");
let LineSet678 = browser.currentScene.createNode("LineSet");
LineSet678.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA679 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA679.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA679;

let Coordinate680 = browser.currentScene.createNode("Coordinate");
Coordinate680.point = new X3D.MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
coord = Coordinate680;

geometry = LineSet678;

HAnimSegment673ZZZ.children[2] = Shape677;

HAnimJoint672YYY.children = new X3D.MFNode();

HAnimJoint672ZZZ.children[0] = HAnimSegment673;

let HAnimJoint681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint681.DEF = "hanim_vc3";
HAnimJoint681.name = "vc3";
HAnimJoint681.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let HAnimSegment682 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment682.DEF = "hanim_c3";
HAnimSegment682.name = "c3";
let TouchSensor683 = browser.currentScene.createNode("TouchSensor");
TouchSensor683.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment682YYY.children = new X3D.MFNode();

HAnimSegment682ZZZ.children[0] = TouchSensor683;

let Transform684 = browser.currentScene.createNode("Transform");
Transform684.translation = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let Shape685 = browser.currentScene.createNode("Shape");
Shape685.USE = "HAnimJointShape";
Transform684YYY.child = new X3D.undefined();

Transform684ZZZ.child[0] = Shape685;

HAnimSegment682ZZZ.children[1] = Transform684;

let Shape686 = browser.currentScene.createNode("Shape");
let LineSet687 = browser.currentScene.createNode("LineSet");
LineSet687.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA688 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA688.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA688;

let Coordinate689 = browser.currentScene.createNode("Coordinate");
Coordinate689.point = new X3D.MFVec3f([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
coord = Coordinate689;

geometry = LineSet687;

HAnimSegment682ZZZ.children[2] = Shape686;

HAnimJoint681YYY.children = new X3D.MFNode();

HAnimJoint681ZZZ.children[0] = HAnimSegment682;

let HAnimJoint690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint690.DEF = "hanim_vc2";
HAnimJoint690.name = "vc2";
HAnimJoint690.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let HAnimSegment691 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment691.DEF = "hanim_c2";
HAnimSegment691.name = "c2";
let TouchSensor692 = browser.currentScene.createNode("TouchSensor");
TouchSensor692.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment691YYY.children = new X3D.MFNode();

HAnimSegment691ZZZ.children[0] = TouchSensor692;

let Transform693 = browser.currentScene.createNode("Transform");
Transform693.translation = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let Shape694 = browser.currentScene.createNode("Shape");
Shape694.USE = "HAnimJointShape";
Transform693YYY.child = new X3D.undefined();

Transform693ZZZ.child[0] = Shape694;

HAnimSegment691ZZZ.children[1] = Transform693;

let Shape695 = browser.currentScene.createNode("Shape");
let LineSet696 = browser.currentScene.createNode("LineSet");
LineSet696.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA697 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA697.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA697;

let Coordinate698 = browser.currentScene.createNode("Coordinate");
Coordinate698.point = new X3D.MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
coord = Coordinate698;

geometry = LineSet696;

HAnimSegment691ZZZ.children[2] = Shape695;

HAnimJoint690YYY.children = new X3D.MFNode();

HAnimJoint690ZZZ.children[0] = HAnimSegment691;

let HAnimJoint699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint699.DEF = "hanim_vc1";
HAnimJoint699.name = "vc1";
HAnimJoint699.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let HAnimSegment700 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment700.DEF = "hanim_c1";
HAnimSegment700.name = "c1";
let TouchSensor701 = browser.currentScene.createNode("TouchSensor");
TouchSensor701.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment700YYY.children = new X3D.MFNode();

HAnimSegment700ZZZ.children[0] = TouchSensor701;

let Transform702 = browser.currentScene.createNode("Transform");
Transform702.translation = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let Shape703 = browser.currentScene.createNode("Shape");
Shape703.USE = "HAnimJointShape";
Transform702YYY.child = new X3D.undefined();

Transform702ZZZ.child[0] = Shape703;

HAnimSegment700ZZZ.children[1] = Transform702;

let Shape704 = browser.currentScene.createNode("Shape");
let LineSet705 = browser.currentScene.createNode("LineSet");
LineSet705.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA706 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA706.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA706;

let Coordinate707 = browser.currentScene.createNode("Coordinate");
Coordinate707.point = new X3D.MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
coord = Coordinate707;

geometry = LineSet705;

HAnimSegment700ZZZ.children[2] = Shape704;

HAnimJoint699YYY.children = new X3D.MFNode();

HAnimJoint699ZZZ.children[0] = HAnimSegment700;

let HAnimJoint708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint708.DEF = "hanim_skullbase";
HAnimJoint708.name = "skullbase";
HAnimJoint708.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let HAnimSegment709 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment709.DEF = "hanim_skull";
HAnimSegment709.name = "skull";
let TouchSensor710 = browser.currentScene.createNode("TouchSensor");
TouchSensor710.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment709YYY.children = new X3D.MFNode();

HAnimSegment709ZZZ.children[0] = TouchSensor710;

let Transform711 = browser.currentScene.createNode("Transform");
Transform711.translation = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "HAnimJointShape";
Transform711YYY.child = new X3D.undefined();

Transform711ZZZ.child[0] = Shape712;

HAnimSegment709ZZZ.children[1] = Transform711;

let Shape713 = browser.currentScene.createNode("Shape");
let LineSet714 = browser.currentScene.createNode("LineSet");
LineSet714.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA715 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA715;

let Coordinate716 = browser.currentScene.createNode("Coordinate");
Coordinate716.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
coord = Coordinate716;

geometry = LineSet714;

HAnimSegment709ZZZ.children[2] = Shape713;

let Shape717 = browser.currentScene.createNode("Shape");
let LineSet718 = browser.currentScene.createNode("LineSet");
LineSet718.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA719 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA719.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA719;

let Coordinate720 = browser.currentScene.createNode("Coordinate");
Coordinate720.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
coord = Coordinate720;

geometry = LineSet718;

HAnimSegment709ZZZ.children[3] = Shape717;

let Shape721 = browser.currentScene.createNode("Shape");
let LineSet722 = browser.currentScene.createNode("LineSet");
LineSet722.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA723 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA723;

let Coordinate724 = browser.currentScene.createNode("Coordinate");
Coordinate724.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
coord = Coordinate724;

geometry = LineSet722;

HAnimSegment709ZZZ.children[4] = Shape721;

let Shape725 = browser.currentScene.createNode("Shape");
let LineSet726 = browser.currentScene.createNode("LineSet");
LineSet726.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA727 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA727.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA727;

let Coordinate728 = browser.currentScene.createNode("Coordinate");
Coordinate728.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
coord = Coordinate728;

geometry = LineSet726;

HAnimSegment709ZZZ.children[5] = Shape725;

let Shape729 = browser.currentScene.createNode("Shape");
let LineSet730 = browser.currentScene.createNode("LineSet");
LineSet730.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA731 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA731;

let Coordinate732 = browser.currentScene.createNode("Coordinate");
Coordinate732.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
coord = Coordinate732;

geometry = LineSet730;

HAnimSegment709ZZZ.children[6] = Shape729;

let Shape733 = browser.currentScene.createNode("Shape");
let LineSet734 = browser.currentScene.createNode("LineSet");
LineSet734.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA735 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA735;

let Coordinate736 = browser.currentScene.createNode("Coordinate");
Coordinate736.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
coord = Coordinate736;

geometry = LineSet734;

HAnimSegment709ZZZ.children[7] = Shape733;

let Shape737 = browser.currentScene.createNode("Shape");
let LineSet738 = browser.currentScene.createNode("LineSet");
LineSet738.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA739 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA739.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA739;

let Coordinate740 = browser.currentScene.createNode("Coordinate");
Coordinate740.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0,1.63,0.015]);
coord = Coordinate740;

geometry = LineSet738;

HAnimSegment709ZZZ.children[8] = Shape737;

let Shape741 = browser.currentScene.createNode("Shape");
let LineSet742 = browser.currentScene.createNode("LineSet");
LineSet742.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA743 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA743.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA743;

let Coordinate744 = browser.currentScene.createNode("Coordinate");
Coordinate744.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
coord = Coordinate744;

geometry = LineSet742;

HAnimSegment709ZZZ.children[9] = Shape741;

let Shape745 = browser.currentScene.createNode("Shape");
let LineSet746 = browser.currentScene.createNode("LineSet");
LineSet746.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA747 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA747.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA747;

let Coordinate748 = browser.currentScene.createNode("Coordinate");
Coordinate748.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
coord = Coordinate748;

geometry = LineSet746;

HAnimSegment709ZZZ.children[10] = Shape745;

let Shape749 = browser.currentScene.createNode("Shape");
let LineSet750 = browser.currentScene.createNode("LineSet");
LineSet750.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA751 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA751.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA751;

let Coordinate752 = browser.currentScene.createNode("Coordinate");
Coordinate752.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
coord = Coordinate752;

geometry = LineSet750;

HAnimSegment709ZZZ.children[11] = Shape749;

let Shape753 = browser.currentScene.createNode("Shape");
let LineSet754 = browser.currentScene.createNode("LineSet");
LineSet754.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA755 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA755.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA755;

let Coordinate756 = browser.currentScene.createNode("Coordinate");
Coordinate756.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
coord = Coordinate756;

geometry = LineSet754;

HAnimSegment709ZZZ.children[12] = Shape753;

let Shape757 = browser.currentScene.createNode("Shape");
let LineSet758 = browser.currentScene.createNode("LineSet");
LineSet758.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA759 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA759.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA759;

let Coordinate760 = browser.currentScene.createNode("Coordinate");
Coordinate760.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
coord = Coordinate760;

geometry = LineSet758;

HAnimSegment709ZZZ.children[13] = Shape757;

let Shape761 = browser.currentScene.createNode("Shape");
let LineSet762 = browser.currentScene.createNode("LineSet");
LineSet762.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA763 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA763.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA763;

let Coordinate764 = browser.currentScene.createNode("Coordinate");
Coordinate764.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
coord = Coordinate764;

geometry = LineSet762;

HAnimSegment709ZZZ.children[14] = Shape761;

let Shape765 = browser.currentScene.createNode("Shape");
let LineSet766 = browser.currentScene.createNode("LineSet");
LineSet766.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA767 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA767.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA767;

let Coordinate768 = browser.currentScene.createNode("Coordinate");
Coordinate768.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
coord = Coordinate768;

geometry = LineSet766;

HAnimSegment709ZZZ.children[15] = Shape765;

let Shape769 = browser.currentScene.createNode("Shape");
let LineSet770 = browser.currentScene.createNode("LineSet");
LineSet770.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA771 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA771.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA771;

let Coordinate772 = browser.currentScene.createNode("Coordinate");
Coordinate772.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
coord = Coordinate772;

geometry = LineSet770;

HAnimSegment709ZZZ.children[16] = Shape769;

let Shape773 = browser.currentScene.createNode("Shape");
let LineSet774 = browser.currentScene.createNode("LineSet");
LineSet774.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA775 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA775.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA775;

let Coordinate776 = browser.currentScene.createNode("Coordinate");
Coordinate776.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
coord = Coordinate776;

geometry = LineSet774;

HAnimSegment709ZZZ.children[17] = Shape773;

let Shape777 = browser.currentScene.createNode("Shape");
let LineSet778 = browser.currentScene.createNode("LineSet");
LineSet778.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA779 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA779.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA779;

let Coordinate780 = browser.currentScene.createNode("Coordinate");
Coordinate780.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
coord = Coordinate780;

geometry = LineSet778;

HAnimSegment709ZZZ.children[18] = Shape777;

let HAnimSite781 = browser.currentScene.createNode("HAnimSite");
HAnimSite781.DEF = "hanim_skull_vertex_pt";
HAnimSite781.name = "skull_vertex_pt";
HAnimSite781.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
let TouchSensor782 = browser.currentScene.createNode("TouchSensor");
TouchSensor782.description = "HAnimSite skull_tip";
HAnimSite781YYY.children = new X3D.MFNode();

HAnimSite781ZZZ.children[0] = TouchSensor782;

let Shape783 = browser.currentScene.createNode("Shape");
Shape783.USE = "HAnimSiteShape";
HAnimSite781ZZZ.children[1] = Shape783;

HAnimSegment709ZZZ.children[19] = HAnimSite781;

let HAnimSite784 = browser.currentScene.createNode("HAnimSite");
HAnimSite784.DEF = "hanim_sellion_pt";
HAnimSite784.name = "sellion_pt";
HAnimSite784.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
let TouchSensor785 = browser.currentScene.createNode("TouchSensor");
TouchSensor785.description = "HAnimSite sellion_pt";
HAnimSite784YYY.children = new X3D.MFNode();

HAnimSite784ZZZ.children[0] = TouchSensor785;

let Shape786 = browser.currentScene.createNode("Shape");
Shape786.USE = "HAnimSiteShape";
HAnimSite784ZZZ.children[1] = Shape786;

HAnimSegment709ZZZ.children[20] = HAnimSite784;

let HAnimSite787 = browser.currentScene.createNode("HAnimSite");
HAnimSite787.DEF = "hanim_r_infraorbitale_pt";
HAnimSite787.name = "r_infraorbitale_pt";
HAnimSite787.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
let TouchSensor788 = browser.currentScene.createNode("TouchSensor");
TouchSensor788.description = "HAnimSite r_infraorbitale_pt";
HAnimSite787YYY.children = new X3D.MFNode();

HAnimSite787ZZZ.children[0] = TouchSensor788;

let Shape789 = browser.currentScene.createNode("Shape");
Shape789.USE = "HAnimSiteShape";
HAnimSite787ZZZ.children[1] = Shape789;

HAnimSegment709ZZZ.children[21] = HAnimSite787;

let HAnimSite790 = browser.currentScene.createNode("HAnimSite");
HAnimSite790.DEF = "hanim_l_infraorbitale_pt";
HAnimSite790.name = "l_infraorbitale_pt";
HAnimSite790.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
let TouchSensor791 = browser.currentScene.createNode("TouchSensor");
TouchSensor791.description = "HAnimSite l_infraorbitale_pt";
HAnimSite790YYY.children = new X3D.MFNode();

HAnimSite790ZZZ.children[0] = TouchSensor791;

let Shape792 = browser.currentScene.createNode("Shape");
Shape792.USE = "HAnimSiteShape";
HAnimSite790ZZZ.children[1] = Shape792;

HAnimSegment709ZZZ.children[22] = HAnimSite790;

let HAnimSite793 = browser.currentScene.createNode("HAnimSite");
HAnimSite793.DEF = "hanim_supramenton_pt";
HAnimSite793.name = "supramenton_pt";
HAnimSite793.translation = new X3D.SFVec3f([0.0061,1.541,0.0805]);
let TouchSensor794 = browser.currentScene.createNode("TouchSensor");
TouchSensor794.description = "HAnimSite supramenton_pt";
HAnimSite793YYY.children = new X3D.MFNode();

HAnimSite793ZZZ.children[0] = TouchSensor794;

let Shape795 = browser.currentScene.createNode("Shape");
Shape795.USE = "HAnimSiteShape";
HAnimSite793ZZZ.children[1] = Shape795;

HAnimSegment709ZZZ.children[23] = HAnimSite793;

let HAnimSite796 = browser.currentScene.createNode("HAnimSite");
HAnimSite796.DEF = "hanim_r_tragion_pt";
HAnimSite796.name = "r_tragion_pt";
HAnimSite796.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
let TouchSensor797 = browser.currentScene.createNode("TouchSensor");
TouchSensor797.description = "HAnimSite r_tragion_pt";
HAnimSite796YYY.children = new X3D.MFNode();

HAnimSite796ZZZ.children[0] = TouchSensor797;

let Shape798 = browser.currentScene.createNode("Shape");
Shape798.USE = "HAnimSiteShape";
HAnimSite796ZZZ.children[1] = Shape798;

HAnimSegment709ZZZ.children[24] = HAnimSite796;

let HAnimSite799 = browser.currentScene.createNode("HAnimSite");
HAnimSite799.DEF = "hanim_r_gonion_pt";
HAnimSite799.name = "r_gonion_pt";
HAnimSite799.translation = new X3D.SFVec3f([-0.052,1.5529,0.0347]);
let TouchSensor800 = browser.currentScene.createNode("TouchSensor");
TouchSensor800.description = "HAnimSite r_gonion_pt";
HAnimSite799YYY.children = new X3D.MFNode();

HAnimSite799ZZZ.children[0] = TouchSensor800;

let Shape801 = browser.currentScene.createNode("Shape");
Shape801.USE = "HAnimSiteShape";
HAnimSite799ZZZ.children[1] = Shape801;

HAnimSegment709ZZZ.children[25] = HAnimSite799;

let HAnimSite802 = browser.currentScene.createNode("HAnimSite");
HAnimSite802.DEF = "hanim_l_tragion_pt";
HAnimSite802.name = "l_tragion_pt";
HAnimSite802.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
let TouchSensor803 = browser.currentScene.createNode("TouchSensor");
TouchSensor803.description = "HAnimSite l_tragion_pt";
HAnimSite802YYY.children = new X3D.MFNode();

HAnimSite802ZZZ.children[0] = TouchSensor803;

let Shape804 = browser.currentScene.createNode("Shape");
Shape804.USE = "HAnimSiteShape";
HAnimSite802ZZZ.children[1] = Shape804;

HAnimSegment709ZZZ.children[26] = HAnimSite802;

let HAnimSite805 = browser.currentScene.createNode("HAnimSite");
HAnimSite805.DEF = "hanim_l_gonion_pt";
HAnimSite805.name = "l_gonion_pt";
HAnimSite805.translation = new X3D.SFVec3f([0.0631,1.553,0.033]);
let TouchSensor806 = browser.currentScene.createNode("TouchSensor");
TouchSensor806.description = "HAnimSite l_gonion_pt";
HAnimSite805YYY.children = new X3D.MFNode();

HAnimSite805ZZZ.children[0] = TouchSensor806;

let Shape807 = browser.currentScene.createNode("Shape");
Shape807.USE = "HAnimSiteShape";
HAnimSite805ZZZ.children[1] = Shape807;

HAnimSegment709ZZZ.children[27] = HAnimSite805;

let HAnimSite808 = browser.currentScene.createNode("HAnimSite");
HAnimSite808.DEF = "hanim_nuchale_pt";
HAnimSite808.name = "nuchale_pt";
HAnimSite808.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
let TouchSensor809 = browser.currentScene.createNode("TouchSensor");
TouchSensor809.description = "HAnimSite nuchale_pt";
HAnimSite808YYY.children = new X3D.MFNode();

HAnimSite808ZZZ.children[0] = TouchSensor809;

let Shape810 = browser.currentScene.createNode("Shape");
Shape810.USE = "HAnimSiteShape";
HAnimSite808ZZZ.children[1] = Shape810;

HAnimSegment709ZZZ.children[28] = HAnimSite808;

HAnimJoint708YYY.children = new X3D.MFNode();

HAnimJoint708ZZZ.children[0] = HAnimSegment709;

let HAnimJoint811 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint811.DEF = "hanim_l_eyeball_joint";
HAnimJoint811.name = "l_eyeball_joint";
HAnimJoint811.center = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let HAnimSegment812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment812.DEF = "hanim_l_eyeball";
HAnimSegment812.name = "l_eyeball";
let TouchSensor813 = browser.currentScene.createNode("TouchSensor");
TouchSensor813.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment812YYY.children = new X3D.MFNode();

HAnimSegment812ZZZ.children[0] = TouchSensor813;

let Transform814 = browser.currentScene.createNode("Transform");
Transform814.translation = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let Shape815 = browser.currentScene.createNode("Shape");
Shape815.USE = "HAnimJointShape";
Transform814YYY.child = new X3D.undefined();

Transform814ZZZ.child[0] = Shape815;

HAnimSegment812ZZZ.children[1] = Transform814;

let Shape816 = browser.currentScene.createNode("Shape");
let LineSet817 = browser.currentScene.createNode("LineSet");
LineSet817.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA818 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA818.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA818.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA818;

let Coordinate819 = browser.currentScene.createNode("Coordinate");
Coordinate819.point = new X3D.MFVec3f([0.0336,1.6332,0.0502,0.034,1.64,0.05]);
coord = Coordinate819;

geometry = LineSet817;

HAnimSegment812ZZZ.children[2] = Shape816;

let HAnimSite820 = browser.currentScene.createNode("HAnimSite");
HAnimSite820.DEF = "hanim_l_eyeball_site_view";
HAnimSite820.name = "l_eyeball_site_view";
HAnimSite820.translation = new X3D.SFVec3f([0.034,1.64,0.05]);
let TouchSensor821 = browser.currentScene.createNode("TouchSensor");
TouchSensor821.description = "HAnimSite l_eyeball_site_view";
HAnimSite820YYY.children = new X3D.MFNode();

HAnimSite820ZZZ.children[0] = TouchSensor821;

let Shape822 = browser.currentScene.createNode("Shape");
Shape822.USE = "HAnimSiteShape";
HAnimSite820ZZZ.children[1] = Shape822;

let Viewpoint823 = browser.currentScene.createNode("Viewpoint");
Viewpoint823.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint823.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint823.position = new X3D.SFVec3f([0,0,0]);
Viewpoint823.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite820ZZZ.children[2] = Viewpoint823;

let Anchor824 = browser.currentScene.createNode("Anchor");
Anchor824.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor824.url = new X3D.MFString([new X3D.SFString("#hanim_l_eyeball_site_viewpoint")]);
let LOD825 = browser.currentScene.createNode("LOD");
LOD825.forceTransitions = True;
LOD825.range = new X3D.MFFloat([0.04]);
let WorldInfo826 = browser.currentScene.createNode("WorldInfo");
WorldInfo826.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD825YYY.children = new X3D.MFNode();

LOD825ZZZ.children[0] = WorldInfo826;

let Shape827 = browser.currentScene.createNode("Shape");
Shape827.DEF = "HAnimSiteViewpointShape";
let Appearance828 = browser.currentScene.createNode("Appearance");
let Material829 = browser.currentScene.createNode("Material");
Material829.diffuseColor = new X3D.SFColor([1,1,0]);
Material829.transparency = 0.3;
material = Material829;

appearance = Appearance828;

let IndexedFaceSet830 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet830.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet830.creaseAngle = 0.5;
IndexedFaceSet830.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate831 = browser.currentScene.createNode("Coordinate");
Coordinate831.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate831;

geometry = IndexedFaceSet830;

LOD825ZZZ.children[1] = Shape827;

Anchor824YYY.children = new X3D.MFNode();

Anchor824ZZZ.children[0] = LOD825;

HAnimSite820ZZZ.children[3] = Anchor824;

HAnimSegment812ZZZ.children[3] = HAnimSite820;

HAnimJoint811YYY.children = new X3D.MFNode();

HAnimJoint811ZZZ.children[0] = HAnimSegment812;

HAnimJoint708ZZZ.children[1] = HAnimJoint811;

let HAnimJoint832 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint832.DEF = "hanim_l_eyelid_joint";
HAnimJoint832.name = "l_eyelid_joint";
HAnimJoint832.center = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let HAnimSegment833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment833.DEF = "hanim_l_eyelid";
HAnimSegment833.name = "l_eyelid";
let TouchSensor834 = browser.currentScene.createNode("TouchSensor");
TouchSensor834.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment833YYY.children = new X3D.MFNode();

HAnimSegment833ZZZ.children[0] = TouchSensor834;

let Transform835 = browser.currentScene.createNode("Transform");
Transform835.translation = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let Shape836 = browser.currentScene.createNode("Shape");
Shape836.USE = "HAnimJointShape";
Transform835YYY.child = new X3D.undefined();

Transform835ZZZ.child[0] = Shape836;

HAnimSegment833ZZZ.children[1] = Transform835;

HAnimJoint832YYY.children = new X3D.MFNode();

HAnimJoint832ZZZ.children[0] = HAnimSegment833;

HAnimJoint708ZZZ.children[2] = HAnimJoint832;

let HAnimJoint837 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint837.DEF = "hanim_l_eyebrow_joint";
HAnimJoint837.name = "l_eyebrow_joint";
HAnimJoint837.center = new X3D.SFVec3f([0.0336,1.635,0.0506]);
let HAnimSegment838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment838.DEF = "hanim_l_eyebrow";
HAnimSegment838.name = "l_eyebrow";
let TouchSensor839 = browser.currentScene.createNode("TouchSensor");
TouchSensor839.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment838YYY.children = new X3D.MFNode();

HAnimSegment838ZZZ.children[0] = TouchSensor839;

let Transform840 = browser.currentScene.createNode("Transform");
Transform840.translation = new X3D.SFVec3f([0.0336,1.635,0.0506]);
let Shape841 = browser.currentScene.createNode("Shape");
Shape841.USE = "HAnimJointShape";
Transform840YYY.child = new X3D.undefined();

Transform840ZZZ.child[0] = Shape841;

HAnimSegment838ZZZ.children[1] = Transform840;

HAnimJoint837YYY.children = new X3D.MFNode();

HAnimJoint837ZZZ.children[0] = HAnimSegment838;

HAnimJoint708ZZZ.children[3] = HAnimJoint837;

let HAnimJoint842 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint842.DEF = "hanim_r_eyeball_joint";
HAnimJoint842.name = "r_eyeball_joint";
HAnimJoint842.center = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let HAnimSegment843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment843.DEF = "hanim_r_eyeball";
HAnimSegment843.name = "r_eyeball";
let TouchSensor844 = browser.currentScene.createNode("TouchSensor");
TouchSensor844.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment843YYY.children = new X3D.MFNode();

HAnimSegment843ZZZ.children[0] = TouchSensor844;

let Transform845 = browser.currentScene.createNode("Transform");
Transform845.translation = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let Shape846 = browser.currentScene.createNode("Shape");
Shape846.USE = "HAnimJointShape";
Transform845YYY.child = new X3D.undefined();

Transform845ZZZ.child[0] = Shape846;

HAnimSegment843ZZZ.children[1] = Transform845;

let Shape847 = browser.currentScene.createNode("Shape");
let LineSet848 = browser.currentScene.createNode("LineSet");
LineSet848.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA849 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA849.USE = "HAnimSiteViewpointLineColorRGBA";
color = ColorRGBA849;

let Coordinate850 = browser.currentScene.createNode("Coordinate");
Coordinate850.point = new X3D.MFVec3f([-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
coord = Coordinate850;

geometry = LineSet848;

HAnimSegment843ZZZ.children[2] = Shape847;

let HAnimSite851 = browser.currentScene.createNode("HAnimSite");
HAnimSite851.DEF = "hanim_r_eyeball_site_view";
HAnimSite851.name = "r_eyeball_site_view";
HAnimSite851.translation = new X3D.SFVec3f([-0.034,1.64,0.05]);
let TouchSensor852 = browser.currentScene.createNode("TouchSensor");
TouchSensor852.description = "HAnimSite r_eyeball_site_view";
HAnimSite851YYY.children = new X3D.MFNode();

HAnimSite851ZZZ.children[0] = TouchSensor852;

let Shape853 = browser.currentScene.createNode("Shape");
Shape853.USE = "HAnimSiteShape";
HAnimSite851ZZZ.children[1] = Shape853;

let Viewpoint854 = browser.currentScene.createNode("Viewpoint");
Viewpoint854.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint854.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint854.position = new X3D.SFVec3f([0,0,0]);
Viewpoint854.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite851ZZZ.children[2] = Viewpoint854;

let Anchor855 = browser.currentScene.createNode("Anchor");
Anchor855.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor855.url = new X3D.MFString([new X3D.SFString("#hanim_r_eyeball_site_viewpoint")]);
let LOD856 = browser.currentScene.createNode("LOD");
LOD856.forceTransitions = True;
LOD856.range = new X3D.MFFloat([0.04]);
let WorldInfo857 = browser.currentScene.createNode("WorldInfo");
WorldInfo857.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD856YYY.children = new X3D.MFNode();

LOD856ZZZ.children[0] = WorldInfo857;

let Shape858 = browser.currentScene.createNode("Shape");
Shape858.USE = "HAnimSiteViewpointShape";
LOD856ZZZ.children[1] = Shape858;

Anchor855YYY.children = new X3D.MFNode();

Anchor855ZZZ.children[0] = LOD856;

HAnimSite851ZZZ.children[3] = Anchor855;

HAnimSegment843ZZZ.children[3] = HAnimSite851;

HAnimJoint842YYY.children = new X3D.MFNode();

HAnimJoint842ZZZ.children[0] = HAnimSegment843;

HAnimJoint708ZZZ.children[4] = HAnimJoint842;

let HAnimJoint859 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint859.DEF = "hanim_r_eyelid_joint";
HAnimJoint859.name = "r_eyelid_joint";
HAnimJoint859.center = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let HAnimSegment860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment860.DEF = "hanim_r_eyelid";
HAnimSegment860.name = "r_eyelid";
let TouchSensor861 = browser.currentScene.createNode("TouchSensor");
TouchSensor861.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment860YYY.children = new X3D.MFNode();

HAnimSegment860ZZZ.children[0] = TouchSensor861;

let Transform862 = browser.currentScene.createNode("Transform");
Transform862.translation = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let Shape863 = browser.currentScene.createNode("Shape");
Shape863.USE = "HAnimJointShape";
Transform862YYY.child = new X3D.undefined();

Transform862ZZZ.child[0] = Shape863;

HAnimSegment860ZZZ.children[1] = Transform862;

HAnimJoint859YYY.children = new X3D.MFNode();

HAnimJoint859ZZZ.children[0] = HAnimSegment860;

HAnimJoint708ZZZ.children[5] = HAnimJoint859;

let HAnimJoint864 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint864.DEF = "hanim_r_eyebrow_joint";
HAnimJoint864.name = "r_eyebrow_joint";
HAnimJoint864.center = new X3D.SFVec3f([-0.0336,1.635,0.0506]);
let HAnimSegment865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment865.DEF = "hanim_r_eyebrow";
HAnimSegment865.name = "r_eyebrow";
let TouchSensor866 = browser.currentScene.createNode("TouchSensor");
TouchSensor866.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment865YYY.children = new X3D.MFNode();

HAnimSegment865ZZZ.children[0] = TouchSensor866;

let Transform867 = browser.currentScene.createNode("Transform");
Transform867.translation = new X3D.SFVec3f([-0.0336,1.635,0.0506]);
let Shape868 = browser.currentScene.createNode("Shape");
Shape868.USE = "HAnimJointShape";
Transform867YYY.child = new X3D.undefined();

Transform867ZZZ.child[0] = Shape868;

HAnimSegment865ZZZ.children[1] = Transform867;

HAnimJoint864YYY.children = new X3D.MFNode();

HAnimJoint864ZZZ.children[0] = HAnimSegment865;

HAnimJoint708ZZZ.children[6] = HAnimJoint864;

let HAnimJoint869 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint869.DEF = "hanim_temporomandibular";
HAnimJoint869.name = "temporomandibular";
HAnimJoint869.center = new X3D.SFVec3f([0,1.63,0.015]);
let HAnimSegment870 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment870.DEF = "hanim_jaw";
HAnimSegment870.name = "jaw";
let TouchSensor871 = browser.currentScene.createNode("TouchSensor");
TouchSensor871.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment870YYY.children = new X3D.MFNode();

HAnimSegment870ZZZ.children[0] = TouchSensor871;

let Transform872 = browser.currentScene.createNode("Transform");
Transform872.translation = new X3D.SFVec3f([0,1.63,0.015]);
let Shape873 = browser.currentScene.createNode("Shape");
Shape873.USE = "HAnimJointShape";
Transform872YYY.child = new X3D.undefined();

Transform872ZZZ.child[0] = Shape873;

HAnimSegment870ZZZ.children[1] = Transform872;

let Shape874 = browser.currentScene.createNode("Shape");
let LineSet875 = browser.currentScene.createNode("LineSet");
LineSet875.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA876 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA876.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA876;

let Coordinate877 = browser.currentScene.createNode("Coordinate");
Coordinate877.point = new X3D.MFVec3f([0,1.63,0.015,0.045,1.63,0]);
coord = Coordinate877;

geometry = LineSet875;

HAnimSegment870ZZZ.children[2] = Shape874;

let Shape878 = browser.currentScene.createNode("Shape");
let LineSet879 = browser.currentScene.createNode("LineSet");
LineSet879.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA880 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA880.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA880;

let Coordinate881 = browser.currentScene.createNode("Coordinate");
Coordinate881.point = new X3D.MFVec3f([0,1.63,0.015,-0.045,1.63,0]);
coord = Coordinate881;

geometry = LineSet879;

HAnimSegment870ZZZ.children[3] = Shape878;

let HAnimSite882 = browser.currentScene.createNode("HAnimSite");
HAnimSite882.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite882.name = "temporomandibular_l_site_pt";
HAnimSite882.translation = new X3D.SFVec3f([0.045,1.63,0]);
let TouchSensor883 = browser.currentScene.createNode("TouchSensor");
TouchSensor883.description = "HAnimSite temporomandibular_l_site_pt";
HAnimSite882YYY.children = new X3D.MFNode();

HAnimSite882ZZZ.children[0] = TouchSensor883;

let Shape884 = browser.currentScene.createNode("Shape");
Shape884.USE = "HAnimSiteShape";
HAnimSite882ZZZ.children[1] = Shape884;

HAnimSegment870ZZZ.children[4] = HAnimSite882;

let HAnimSite885 = browser.currentScene.createNode("HAnimSite");
HAnimSite885.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite885.name = "temporomandibular_r_site_pt";
HAnimSite885.translation = new X3D.SFVec3f([-0.045,1.63,0]);
let TouchSensor886 = browser.currentScene.createNode("TouchSensor");
TouchSensor886.description = "HAnimSite temporomandibular_r_site_pt";
HAnimSite885YYY.children = new X3D.MFNode();

HAnimSite885ZZZ.children[0] = TouchSensor886;

let Shape887 = browser.currentScene.createNode("Shape");
Shape887.USE = "HAnimSiteShape";
HAnimSite885ZZZ.children[1] = Shape887;

HAnimSegment870ZZZ.children[5] = HAnimSite885;

HAnimJoint869YYY.children = new X3D.MFNode();

HAnimJoint869ZZZ.children[0] = HAnimSegment870;

HAnimJoint708ZZZ.children[7] = HAnimJoint869;

HAnimJoint699ZZZ.children[1] = HAnimJoint708;

HAnimJoint690ZZZ.children[1] = HAnimJoint699;

HAnimJoint681ZZZ.children[1] = HAnimJoint690;

HAnimJoint672ZZZ.children[1] = HAnimJoint681;

HAnimJoint663ZZZ.children[1] = HAnimJoint672;

HAnimJoint654ZZZ.children[1] = HAnimJoint663;

HAnimJoint631ZZZ.children[1] = HAnimJoint654;

HAnimJoint600ZZZ.children[1] = HAnimJoint631;

let HAnimJoint888 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint888.DEF = "hanim_l_sternoclavicular";
HAnimJoint888.name = "l_sternoclavicular";
HAnimJoint888.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let HAnimSegment889 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment889.DEF = "hanim_l_clavicle";
HAnimSegment889.name = "l_clavicle";
let TouchSensor890 = browser.currentScene.createNode("TouchSensor");
TouchSensor890.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment889YYY.children = new X3D.MFNode();

HAnimSegment889ZZZ.children[0] = TouchSensor890;

let Transform891 = browser.currentScene.createNode("Transform");
Transform891.translation = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let Shape892 = browser.currentScene.createNode("Shape");
Shape892.USE = "HAnimJointShape";
Transform891YYY.child = new X3D.undefined();

Transform891ZZZ.child[0] = Shape892;

HAnimSegment889ZZZ.children[1] = Transform891;

let Shape893 = browser.currentScene.createNode("Shape");
let LineSet894 = browser.currentScene.createNode("LineSet");
LineSet894.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA895 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA895.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA895;

let Coordinate896 = browser.currentScene.createNode("Coordinate");
Coordinate896.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
coord = Coordinate896;

geometry = LineSet894;

HAnimSegment889ZZZ.children[2] = Shape893;

let Shape897 = browser.currentScene.createNode("Shape");
let LineSet898 = browser.currentScene.createNode("LineSet");
LineSet898.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA899 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA899.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA899;

let Coordinate900 = browser.currentScene.createNode("Coordinate");
Coordinate900.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
coord = Coordinate900;

geometry = LineSet898;

HAnimSegment889ZZZ.children[3] = Shape897;

let Shape901 = browser.currentScene.createNode("Shape");
let LineSet902 = browser.currentScene.createNode("LineSet");
LineSet902.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA903 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA903.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA903;

let Coordinate904 = browser.currentScene.createNode("Coordinate");
Coordinate904.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
coord = Coordinate904;

geometry = LineSet902;

HAnimSegment889ZZZ.children[4] = Shape901;

let Shape905 = browser.currentScene.createNode("Shape");
let LineSet906 = browser.currentScene.createNode("LineSet");
LineSet906.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA907 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA907.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA907;

let Coordinate908 = browser.currentScene.createNode("Coordinate");
Coordinate908.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
coord = Coordinate908;

geometry = LineSet906;

HAnimSegment889ZZZ.children[5] = Shape905;

let Shape909 = browser.currentScene.createNode("Shape");
let LineSet910 = browser.currentScene.createNode("LineSet");
LineSet910.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA911 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA911.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA911;

let Coordinate912 = browser.currentScene.createNode("Coordinate");
Coordinate912.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
coord = Coordinate912;

geometry = LineSet910;

HAnimSegment889ZZZ.children[6] = Shape909;

let HAnimSite913 = browser.currentScene.createNode("HAnimSite");
HAnimSite913.DEF = "hanim_l_clavicle_pt";
HAnimSite913.name = "l_clavicle_pt";
HAnimSite913.translation = new X3D.SFVec3f([0.0271,1.4943,0.0394]);
let TouchSensor914 = browser.currentScene.createNode("TouchSensor");
TouchSensor914.description = "HAnimSite l_clavicale_pt";
HAnimSite913YYY.children = new X3D.MFNode();

HAnimSite913ZZZ.children[0] = TouchSensor914;

let Shape915 = browser.currentScene.createNode("Shape");
Shape915.USE = "HAnimSiteShape";
HAnimSite913ZZZ.children[1] = Shape915;

HAnimSegment889ZZZ.children[7] = HAnimSite913;

let HAnimSite916 = browser.currentScene.createNode("HAnimSite");
HAnimSite916.DEF = "hanim_l_acromion_pt";
HAnimSite916.name = "l_acromion_pt";
HAnimSite916.translation = new X3D.SFVec3f([0.2032,1.476,-0.049]);
let TouchSensor917 = browser.currentScene.createNode("TouchSensor");
TouchSensor917.description = "HAnimSite l_acromion_pt";
HAnimSite916YYY.children = new X3D.MFNode();

HAnimSite916ZZZ.children[0] = TouchSensor917;

let Shape918 = browser.currentScene.createNode("Shape");
Shape918.USE = "HAnimSiteShape";
HAnimSite916ZZZ.children[1] = Shape918;

HAnimSegment889ZZZ.children[8] = HAnimSite916;

let HAnimSite919 = browser.currentScene.createNode("HAnimSite");
HAnimSite919.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite919.name = "l_axilla_proximal_pt";
HAnimSite919.translation = new X3D.SFVec3f([0.1777,1.4065,-0.0075]);
let TouchSensor920 = browser.currentScene.createNode("TouchSensor");
TouchSensor920.description = "HAnimSite l_axilla_ant_pt";
HAnimSite919YYY.children = new X3D.MFNode();

HAnimSite919ZZZ.children[0] = TouchSensor920;

let Shape921 = browser.currentScene.createNode("Shape");
Shape921.USE = "HAnimSiteShape";
HAnimSite919ZZZ.children[1] = Shape921;

HAnimSegment889ZZZ.children[9] = HAnimSite919;

let HAnimSite922 = browser.currentScene.createNode("HAnimSite");
HAnimSite922.DEF = "hanim_l_axilla_distal_pt";
HAnimSite922.name = "l_axilla_distal_pt";
HAnimSite922.translation = new X3D.SFVec3f([0.1706,1.4072,-0.0875]);
let TouchSensor923 = browser.currentScene.createNode("TouchSensor");
TouchSensor923.description = "HAnimSite l_axilla_post_pt";
HAnimSite922YYY.children = new X3D.MFNode();

HAnimSite922ZZZ.children[0] = TouchSensor923;

let Shape924 = browser.currentScene.createNode("Shape");
Shape924.USE = "HAnimSiteShape";
HAnimSite922ZZZ.children[1] = Shape924;

HAnimSegment889ZZZ.children[10] = HAnimSite922;

HAnimJoint888YYY.children = new X3D.MFNode();

HAnimJoint888ZZZ.children[0] = HAnimSegment889;

let HAnimJoint925 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint925.DEF = "hanim_l_acromioclavicular";
HAnimJoint925.name = "l_acromioclavicular";
HAnimJoint925.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let HAnimSegment926 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment926.DEF = "hanim_l_scapula";
HAnimSegment926.name = "l_scapula";
let TouchSensor927 = browser.currentScene.createNode("TouchSensor");
TouchSensor927.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment926YYY.children = new X3D.MFNode();

HAnimSegment926ZZZ.children[0] = TouchSensor927;

let Transform928 = browser.currentScene.createNode("Transform");
Transform928.translation = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let Shape929 = browser.currentScene.createNode("Shape");
Shape929.USE = "HAnimJointShape";
Transform928YYY.child = new X3D.undefined();

Transform928ZZZ.child[0] = Shape929;

HAnimSegment926ZZZ.children[1] = Transform928;

let Shape930 = browser.currentScene.createNode("Shape");
let LineSet931 = browser.currentScene.createNode("LineSet");
LineSet931.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA932 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA932.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA932;

let Coordinate933 = browser.currentScene.createNode("Coordinate");
Coordinate933.point = new X3D.MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
coord = Coordinate933;

geometry = LineSet931;

HAnimSegment926ZZZ.children[2] = Shape930;

HAnimJoint925YYY.children = new X3D.MFNode();

HAnimJoint925ZZZ.children[0] = HAnimSegment926;

let HAnimJoint934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint934.DEF = "hanim_l_shoulder";
HAnimJoint934.name = "l_shoulder";
HAnimJoint934.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let HAnimSegment935 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment935.DEF = "hanim_l_upperarm";
HAnimSegment935.name = "l_upperarm";
let TouchSensor936 = browser.currentScene.createNode("TouchSensor");
TouchSensor936.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment935YYY.children = new X3D.MFNode();

HAnimSegment935ZZZ.children[0] = TouchSensor936;

let Transform937 = browser.currentScene.createNode("Transform");
Transform937.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let Shape938 = browser.currentScene.createNode("Shape");
Shape938.USE = "HAnimJointShape";
Transform937YYY.child = new X3D.undefined();

Transform937ZZZ.child[0] = Shape938;

HAnimSegment935ZZZ.children[1] = Transform937;

let Shape939 = browser.currentScene.createNode("Shape");
let LineSet940 = browser.currentScene.createNode("LineSet");
LineSet940.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA941 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA941.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA941;

let Coordinate942 = browser.currentScene.createNode("Coordinate");
Coordinate942.point = new X3D.MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
coord = Coordinate942;

geometry = LineSet940;

HAnimSegment935ZZZ.children[2] = Shape939;

let Shape943 = browser.currentScene.createNode("Shape");
let LineSet944 = browser.currentScene.createNode("LineSet");
LineSet944.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA945 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA945.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA945;

let Coordinate946 = browser.currentScene.createNode("Coordinate");
Coordinate946.point = new X3D.MFVec3f([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
coord = Coordinate946;

geometry = LineSet944;

HAnimSegment935ZZZ.children[3] = Shape943;

let HAnimSite947 = browser.currentScene.createNode("HAnimSite");
HAnimSite947.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite947.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite947.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
let TouchSensor948 = browser.currentScene.createNode("TouchSensor");
TouchSensor948.description = "HAnimSite l_humeral_lateral_epicn_pt";
HAnimSite947YYY.children = new X3D.MFNode();

HAnimSite947ZZZ.children[0] = TouchSensor948;

let Shape949 = browser.currentScene.createNode("Shape");
Shape949.USE = "HAnimSiteShape";
HAnimSite947ZZZ.children[1] = Shape949;

HAnimSegment935ZZZ.children[4] = HAnimSite947;

HAnimJoint934YYY.children = new X3D.MFNode();

HAnimJoint934ZZZ.children[0] = HAnimSegment935;

let HAnimJoint950 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint950.DEF = "hanim_l_elbow";
HAnimJoint950.name = "l_elbow";
HAnimJoint950.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let HAnimSegment951 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment951.DEF = "hanim_l_forearm";
HAnimSegment951.name = "l_forearm";
let TouchSensor952 = browser.currentScene.createNode("TouchSensor");
TouchSensor952.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment951YYY.children = new X3D.MFNode();

HAnimSegment951ZZZ.children[0] = TouchSensor952;

let Transform953 = browser.currentScene.createNode("Transform");
Transform953.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let Shape954 = browser.currentScene.createNode("Shape");
Shape954.USE = "HAnimJointShape";
Transform953YYY.child = new X3D.undefined();

Transform953ZZZ.child[0] = Shape954;

HAnimSegment951ZZZ.children[1] = Transform953;

let Shape955 = browser.currentScene.createNode("Shape");
let LineSet956 = browser.currentScene.createNode("LineSet");
LineSet956.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA957 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA957.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA957;

let Coordinate958 = browser.currentScene.createNode("Coordinate");
Coordinate958.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
coord = Coordinate958;

geometry = LineSet956;

HAnimSegment951ZZZ.children[2] = Shape955;

let Shape959 = browser.currentScene.createNode("Shape");
let LineSet960 = browser.currentScene.createNode("LineSet");
LineSet960.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA961 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA961;

let Coordinate962 = browser.currentScene.createNode("Coordinate");
Coordinate962.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
coord = Coordinate962;

geometry = LineSet960;

HAnimSegment951ZZZ.children[3] = Shape959;

let Shape963 = browser.currentScene.createNode("Shape");
let LineSet964 = browser.currentScene.createNode("LineSet");
LineSet964.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA965 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA965;

let Coordinate966 = browser.currentScene.createNode("Coordinate");
Coordinate966.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
coord = Coordinate966;

geometry = LineSet964;

HAnimSegment951ZZZ.children[4] = Shape963;

let Shape967 = browser.currentScene.createNode("Shape");
let LineSet968 = browser.currentScene.createNode("LineSet");
LineSet968.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA969 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA969;

let Coordinate970 = browser.currentScene.createNode("Coordinate");
Coordinate970.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
coord = Coordinate970;

geometry = LineSet968;

HAnimSegment951ZZZ.children[5] = Shape967;

let Shape971 = browser.currentScene.createNode("Shape");
let LineSet972 = browser.currentScene.createNode("LineSet");
LineSet972.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA973 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA973.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA973;

let Coordinate974 = browser.currentScene.createNode("Coordinate");
Coordinate974.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
coord = Coordinate974;

geometry = LineSet972;

HAnimSegment951ZZZ.children[6] = Shape971;

let HAnimSite975 = browser.currentScene.createNode("HAnimSite");
HAnimSite975.DEF = "hanim_l_radial_styloid_pt";
HAnimSite975.name = "l_radial_styloid_pt";
HAnimSite975.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let TouchSensor976 = browser.currentScene.createNode("TouchSensor");
TouchSensor976.description = "HAnimSite l_radial_styloid_pt";
HAnimSite975YYY.children = new X3D.MFNode();

HAnimSite975ZZZ.children[0] = TouchSensor976;

let Shape977 = browser.currentScene.createNode("Shape");
Shape977.USE = "HAnimSiteShape";
HAnimSite975ZZZ.children[1] = Shape977;

HAnimSegment951ZZZ.children[7] = HAnimSite975;

let HAnimSite978 = browser.currentScene.createNode("HAnimSite");
HAnimSite978.DEF = "hanim_l_olecranon_pt";
HAnimSite978.name = "l_olecranon_pt";
HAnimSite978.translation = new X3D.SFVec3f([0.1962,1.1375,-0.1123]);
let TouchSensor979 = browser.currentScene.createNode("TouchSensor");
TouchSensor979.description = "HAnimSite l_olecranon_pt";
HAnimSite978YYY.children = new X3D.MFNode();

HAnimSite978ZZZ.children[0] = TouchSensor979;

let Shape980 = browser.currentScene.createNode("Shape");
Shape980.USE = "HAnimSiteShape";
HAnimSite978ZZZ.children[1] = Shape980;

HAnimSegment951ZZZ.children[8] = HAnimSite978;

let HAnimSite981 = browser.currentScene.createNode("HAnimSite");
HAnimSite981.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite981.name = "l_humeral_medial_epicondyle_pt";
HAnimSite981.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
let TouchSensor982 = browser.currentScene.createNode("TouchSensor");
TouchSensor982.description = "HAnimSite l_humeral_medial_epicn_pt";
HAnimSite981YYY.children = new X3D.MFNode();

HAnimSite981ZZZ.children[0] = TouchSensor982;

let Shape983 = browser.currentScene.createNode("Shape");
Shape983.USE = "HAnimSiteShape";
HAnimSite981ZZZ.children[1] = Shape983;

HAnimSegment951ZZZ.children[9] = HAnimSite981;

let HAnimSite984 = browser.currentScene.createNode("HAnimSite");
HAnimSite984.DEF = "hanim_l_radiale_pt";
HAnimSite984.name = "l_radiale_pt";
HAnimSite984.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
let TouchSensor985 = browser.currentScene.createNode("TouchSensor");
TouchSensor985.description = "HAnimSite l_radiale_pt";
HAnimSite984YYY.children = new X3D.MFNode();

HAnimSite984ZZZ.children[0] = TouchSensor985;

let Shape986 = browser.currentScene.createNode("Shape");
Shape986.USE = "HAnimSiteShape";
HAnimSite984ZZZ.children[1] = Shape986;

HAnimSegment951ZZZ.children[10] = HAnimSite984;

HAnimJoint950YYY.children = new X3D.MFNode();

HAnimJoint950ZZZ.children[0] = HAnimSegment951;

let HAnimJoint987 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint987.DEF = "hanim_l_radiocarpal";
HAnimJoint987.name = "l_radiocarpal";
HAnimJoint987.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let HAnimSegment988 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment988.DEF = "hanim_l_carpal";
HAnimSegment988.name = "l_carpal";
let TouchSensor989 = browser.currentScene.createNode("TouchSensor");
TouchSensor989.description = "HAnimJoint l_radiocarpal, HAnimSegment l_carpal";
HAnimSegment988YYY.children = new X3D.MFNode();

HAnimSegment988ZZZ.children[0] = TouchSensor989;

let Transform990 = browser.currentScene.createNode("Transform");
Transform990.translation = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let Shape991 = browser.currentScene.createNode("Shape");
Shape991.USE = "HAnimJointShape";
Transform990YYY.child = new X3D.undefined();

Transform990ZZZ.child[0] = Shape991;

HAnimSegment988ZZZ.children[1] = Transform990;

let Shape992 = browser.currentScene.createNode("Shape");
let LineSet993 = browser.currentScene.createNode("LineSet");
LineSet993.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA994 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA994;

let Coordinate995 = browser.currentScene.createNode("Coordinate");
Coordinate995.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
coord = Coordinate995;

geometry = LineSet993;

HAnimSegment988ZZZ.children[2] = Shape992;

let Shape996 = browser.currentScene.createNode("Shape");
let LineSet997 = browser.currentScene.createNode("LineSet");
LineSet997.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA998 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA998.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA998;

let Coordinate999 = browser.currentScene.createNode("Coordinate");
Coordinate999.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
coord = Coordinate999;

geometry = LineSet997;

HAnimSegment988ZZZ.children[3] = Shape996;

let Shape1000 = browser.currentScene.createNode("Shape");
let LineSet1001 = browser.currentScene.createNode("LineSet");
LineSet1001.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1002 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1002;

let Coordinate1003 = browser.currentScene.createNode("Coordinate");
Coordinate1003.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
coord = Coordinate1003;

geometry = LineSet1001;

HAnimSegment988ZZZ.children[4] = Shape1000;

let Shape1004 = browser.currentScene.createNode("Shape");
let LineSet1005 = browser.currentScene.createNode("LineSet");
LineSet1005.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1006 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1006.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1006;

let Coordinate1007 = browser.currentScene.createNode("Coordinate");
Coordinate1007.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
coord = Coordinate1007;

geometry = LineSet1005;

HAnimSegment988ZZZ.children[5] = Shape1004;

let Shape1008 = browser.currentScene.createNode("Shape");
let LineSet1009 = browser.currentScene.createNode("LineSet");
LineSet1009.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1010 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1010.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1010;

let Coordinate1011 = browser.currentScene.createNode("Coordinate");
Coordinate1011.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
coord = Coordinate1011;

geometry = LineSet1009;

HAnimSegment988ZZZ.children[6] = Shape1008;

let Shape1012 = browser.currentScene.createNode("Shape");
let LineSet1013 = browser.currentScene.createNode("LineSet");
LineSet1013.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1014 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1014.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1014;

let Coordinate1015 = browser.currentScene.createNode("Coordinate");
Coordinate1015.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
coord = Coordinate1015;

geometry = LineSet1013;

HAnimSegment988ZZZ.children[7] = Shape1012;

let Shape1016 = browser.currentScene.createNode("Shape");
let LineSet1017 = browser.currentScene.createNode("LineSet");
LineSet1017.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1018 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1018.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1018;

let Coordinate1019 = browser.currentScene.createNode("Coordinate");
Coordinate1019.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
coord = Coordinate1019;

geometry = LineSet1017;

HAnimSegment988ZZZ.children[8] = Shape1016;

let Shape1020 = browser.currentScene.createNode("Shape");
let LineSet1021 = browser.currentScene.createNode("LineSet");
LineSet1021.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1022 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1022;

let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
coord = Coordinate1023;

geometry = LineSet1021;

HAnimSegment988ZZZ.children[9] = Shape1020;

let Shape1024 = browser.currentScene.createNode("Shape");
let LineSet1025 = browser.currentScene.createNode("LineSet");
LineSet1025.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1026 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1026.USE = "HAnimSiteViewpointLineColorRGBA";
color = ColorRGBA1026;

let Coordinate1027 = browser.currentScene.createNode("Coordinate");
Coordinate1027.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
coord = Coordinate1027;

geometry = LineSet1025;

HAnimSegment988ZZZ.children[10] = Shape1024;

let HAnimSite1028 = browser.currentScene.createNode("HAnimSite");
HAnimSite1028.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1028.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1028.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let TouchSensor1029 = browser.currentScene.createNode("TouchSensor");
TouchSensor1029.description = "HAnimSite l_metacarpal_pha2_pt";
HAnimSite1028YYY.children = new X3D.MFNode();

HAnimSite1028ZZZ.children[0] = TouchSensor1029;

let Shape1030 = browser.currentScene.createNode("Shape");
Shape1030.USE = "HAnimSiteShape";
HAnimSite1028ZZZ.children[1] = Shape1030;

HAnimSegment988ZZZ.children[11] = HAnimSite1028;

let HAnimSite1031 = browser.currentScene.createNode("HAnimSite");
HAnimSite1031.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1031.name = "l_ulnar_styloid_pt";
HAnimSite1031.translation = new X3D.SFVec3f([0.2142,0.8529,-0.0648]);
let TouchSensor1032 = browser.currentScene.createNode("TouchSensor");
TouchSensor1032.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1031YYY.children = new X3D.MFNode();

HAnimSite1031ZZZ.children[0] = TouchSensor1032;

let Shape1033 = browser.currentScene.createNode("Shape");
Shape1033.USE = "HAnimSiteShape";
HAnimSite1031ZZZ.children[1] = Shape1033;

HAnimSegment988ZZZ.children[12] = HAnimSite1031;

let HAnimSite1034 = browser.currentScene.createNode("HAnimSite");
HAnimSite1034.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1034.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1034.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let TouchSensor1035 = browser.currentScene.createNode("TouchSensor");
TouchSensor1035.description = "HAnimSite l_metacarpal_pha5_pt";
HAnimSite1034YYY.children = new X3D.MFNode();

HAnimSite1034ZZZ.children[0] = TouchSensor1035;

let Shape1036 = browser.currentScene.createNode("Shape");
Shape1036.USE = "HAnimSiteShape";
HAnimSite1034ZZZ.children[1] = Shape1036;

HAnimSegment988ZZZ.children[13] = HAnimSite1034;

let HAnimSite1037 = browser.currentScene.createNode("HAnimSite");
HAnimSite1037.DEF = "hanim_l_hand_front_view";
HAnimSite1037.name = "l_hand_front_view";
HAnimSite1037.translation = new X3D.SFVec3f([0.3,0.75,0.45]);
let TouchSensor1038 = browser.currentScene.createNode("TouchSensor");
TouchSensor1038.description = "HAnimSite l_hand_front_view";
HAnimSite1037YYY.children = new X3D.MFNode();

HAnimSite1037ZZZ.children[0] = TouchSensor1038;

let Shape1039 = browser.currentScene.createNode("Shape");
Shape1039.USE = "HAnimSiteShape";
HAnimSite1037ZZZ.children[1] = Shape1039;

let Viewpoint1040 = browser.currentScene.createNode("Viewpoint");
Viewpoint1040.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1040.description = "left hand front";
Viewpoint1040.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1040.centerOfRotation = new X3D.SFVec3f([0,0.7,0]);
HAnimSite1037ZZZ.children[2] = Viewpoint1040;

let Anchor1041 = browser.currentScene.createNode("Anchor");
Anchor1041.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1041.url = new X3D.MFString([new X3D.SFString("#hanim_l_hand_front_viewpoint")]);
let LOD1042 = browser.currentScene.createNode("LOD");
LOD1042.forceTransitions = True;
LOD1042.range = new X3D.MFFloat([0.04]);
let WorldInfo1043 = browser.currentScene.createNode("WorldInfo");
WorldInfo1043.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1042YYY.children = new X3D.MFNode();

LOD1042ZZZ.children[0] = WorldInfo1043;

let Shape1044 = browser.currentScene.createNode("Shape");
Shape1044.USE = "HAnimSiteViewpointShape";
LOD1042ZZZ.children[1] = Shape1044;

Anchor1041YYY.children = new X3D.MFNode();

Anchor1041ZZZ.children[0] = LOD1042;

HAnimSite1037ZZZ.children[3] = Anchor1041;

HAnimSegment988ZZZ.children[14] = HAnimSite1037;

HAnimJoint987YYY.children = new X3D.MFNode();

HAnimJoint987ZZZ.children[0] = HAnimSegment988;

let HAnimJoint1045 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1045.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1045.name = "l_carpometacarpal_1";
HAnimJoint1045.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let HAnimSegment1046 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1046.DEF = "hanim_l_metacarpal_1";
HAnimSegment1046.name = "l_metacarpal_1";
let TouchSensor1047 = browser.currentScene.createNode("TouchSensor");
TouchSensor1047.description = "HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1";
HAnimSegment1046YYY.children = new X3D.MFNode();

HAnimSegment1046ZZZ.children[0] = TouchSensor1047;

let Transform1048 = browser.currentScene.createNode("Transform");
Transform1048.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Shape1049 = browser.currentScene.createNode("Shape");
Shape1049.USE = "HAnimJointShape";
Transform1048YYY.child = new X3D.undefined();

Transform1048ZZZ.child[0] = Shape1049;

HAnimSegment1046ZZZ.children[1] = Transform1048;

let Shape1050 = browser.currentScene.createNode("Shape");
let LineSet1051 = browser.currentScene.createNode("LineSet");
LineSet1051.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1052 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1052.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1052;

let Coordinate1053 = browser.currentScene.createNode("Coordinate");
Coordinate1053.point = new X3D.MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
coord = Coordinate1053;

geometry = LineSet1051;

HAnimSegment1046ZZZ.children[2] = Shape1050;

HAnimJoint1045YYY.children = new X3D.MFNode();

HAnimJoint1045ZZZ.children[0] = HAnimSegment1046;

let HAnimJoint1054 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1054.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1054.name = "l_metacarpophalangeal_1";
HAnimJoint1054.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let HAnimSegment1055 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1055.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment1055.name = "l_carpal_proximal_phalanx_1";
let TouchSensor1056 = browser.currentScene.createNode("TouchSensor");
TouchSensor1056.description = "HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1";
HAnimSegment1055YYY.children = new X3D.MFNode();

HAnimSegment1055ZZZ.children[0] = TouchSensor1056;

let Transform1057 = browser.currentScene.createNode("Transform");
Transform1057.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Shape1058 = browser.currentScene.createNode("Shape");
Shape1058.USE = "HAnimJointShape";
Transform1057YYY.child = new X3D.undefined();

Transform1057ZZZ.child[0] = Shape1058;

HAnimSegment1055ZZZ.children[1] = Transform1057;

let Shape1059 = browser.currentScene.createNode("Shape");
let LineSet1060 = browser.currentScene.createNode("LineSet");
LineSet1060.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1061 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1061.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1061;

let Coordinate1062 = browser.currentScene.createNode("Coordinate");
Coordinate1062.point = new X3D.MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
coord = Coordinate1062;

geometry = LineSet1060;

HAnimSegment1055ZZZ.children[2] = Shape1059;

HAnimJoint1054YYY.children = new X3D.MFNode();

HAnimJoint1054ZZZ.children[0] = HAnimSegment1055;

let HAnimJoint1063 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1063.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1063.name = "l_carpal_interphalangeal_1";
HAnimJoint1063.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let HAnimSegment1064 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1064.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSegment1064.name = "l_carpal_distal_phalanx_1";
let TouchSensor1065 = browser.currentScene.createNode("TouchSensor");
TouchSensor1065.description = "HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1";
HAnimSegment1064YYY.children = new X3D.MFNode();

HAnimSegment1064ZZZ.children[0] = TouchSensor1065;

let Transform1066 = browser.currentScene.createNode("Transform");
Transform1066.translation = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let Shape1067 = browser.currentScene.createNode("Shape");
Shape1067.USE = "HAnimJointShape";
Transform1066YYY.child = new X3D.undefined();

Transform1066ZZZ.child[0] = Shape1067;

HAnimSegment1064ZZZ.children[1] = Transform1066;

let Shape1068 = browser.currentScene.createNode("Shape");
let LineSet1069 = browser.currentScene.createNode("LineSet");
LineSet1069.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1070 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1070.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1070;

let Coordinate1071 = browser.currentScene.createNode("Coordinate");
Coordinate1071.point = new X3D.MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
coord = Coordinate1071;

geometry = LineSet1069;

HAnimSegment1064ZZZ.children[2] = Shape1068;

let HAnimSite1072 = browser.currentScene.createNode("HAnimSite");
HAnimSite1072.DEF = "hanim_l_carpal_distal_phalanx_1_pt";
HAnimSite1072.name = "l_carpal_distal_phalanx_1_pt";
HAnimSite1072.translation = new X3D.SFVec3f([0.1982,0.8061,0.0759]);
let TouchSensor1073 = browser.currentScene.createNode("TouchSensor");
TouchSensor1073.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1072YYY.children = new X3D.MFNode();

HAnimSite1072ZZZ.children[0] = TouchSensor1073;

let Shape1074 = browser.currentScene.createNode("Shape");
Shape1074.USE = "HAnimSiteShape";
HAnimSite1072ZZZ.children[1] = Shape1074;

HAnimSegment1064ZZZ.children[3] = HAnimSite1072;

HAnimJoint1063YYY.children = new X3D.MFNode();

HAnimJoint1063ZZZ.children[0] = HAnimSegment1064;

HAnimJoint1054ZZZ.children[1] = HAnimJoint1063;

HAnimJoint1045ZZZ.children[1] = HAnimJoint1054;

HAnimJoint987ZZZ.children[1] = HAnimJoint1045;

let HAnimJoint1075 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1075.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1075.name = "l_carpometacarpal_2";
HAnimJoint1075.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let HAnimSegment1076 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1076.DEF = "hanim_l_metacarpal_2";
HAnimSegment1076.name = "l_metacarpal_2";
let TouchSensor1077 = browser.currentScene.createNode("TouchSensor");
TouchSensor1077.description = "HAnimJoint l_index0, HAnimSegment l_metacarpal_2";
HAnimSegment1076YYY.children = new X3D.MFNode();

HAnimSegment1076ZZZ.children[0] = TouchSensor1077;

let Transform1078 = browser.currentScene.createNode("Transform");
Transform1078.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Shape1079 = browser.currentScene.createNode("Shape");
Shape1079.USE = "HAnimJointShape";
Transform1078YYY.child = new X3D.undefined();

Transform1078ZZZ.child[0] = Shape1079;

HAnimSegment1076ZZZ.children[1] = Transform1078;

let Shape1080 = browser.currentScene.createNode("Shape");
let LineSet1081 = browser.currentScene.createNode("LineSet");
LineSet1081.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1082 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1082.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1082;

let Coordinate1083 = browser.currentScene.createNode("Coordinate");
Coordinate1083.point = new X3D.MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
coord = Coordinate1083;

geometry = LineSet1081;

HAnimSegment1076ZZZ.children[2] = Shape1080;

HAnimJoint1075YYY.children = new X3D.MFNode();

HAnimJoint1075ZZZ.children[0] = HAnimSegment1076;

let HAnimJoint1084 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1084.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1084.name = "l_metacarpophalangeal_2";
HAnimJoint1084.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let HAnimSegment1085 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1085.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment1085.name = "l_carpal_proximal_phalanx_2";
let TouchSensor1086 = browser.currentScene.createNode("TouchSensor");
TouchSensor1086.description = "HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2";
HAnimSegment1085YYY.children = new X3D.MFNode();

HAnimSegment1085ZZZ.children[0] = TouchSensor1086;

let Transform1087 = browser.currentScene.createNode("Transform");
Transform1087.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Shape1088 = browser.currentScene.createNode("Shape");
Shape1088.USE = "HAnimJointShape";
Transform1087YYY.child = new X3D.undefined();

Transform1087ZZZ.child[0] = Shape1088;

HAnimSegment1085ZZZ.children[1] = Transform1087;

let Shape1089 = browser.currentScene.createNode("Shape");
let LineSet1090 = browser.currentScene.createNode("LineSet");
LineSet1090.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1091 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1091;

let Coordinate1092 = browser.currentScene.createNode("Coordinate");
Coordinate1092.point = new X3D.MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
coord = Coordinate1092;

geometry = LineSet1090;

HAnimSegment1085ZZZ.children[2] = Shape1089;

HAnimJoint1084YYY.children = new X3D.MFNode();

HAnimJoint1084ZZZ.children[0] = HAnimSegment1085;

let HAnimJoint1093 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1093.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1093.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1093.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let HAnimSegment1094 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1094.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment1094.name = "l_carpal_middle_phalanx_2";
let TouchSensor1095 = browser.currentScene.createNode("TouchSensor");
TouchSensor1095.description = "HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2";
HAnimSegment1094YYY.children = new X3D.MFNode();

HAnimSegment1094ZZZ.children[0] = TouchSensor1095;

let Transform1096 = browser.currentScene.createNode("Transform");
Transform1096.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Shape1097 = browser.currentScene.createNode("Shape");
Shape1097.USE = "HAnimJointShape";
Transform1096YYY.child = new X3D.undefined();

Transform1096ZZZ.child[0] = Shape1097;

HAnimSegment1094ZZZ.children[1] = Transform1096;

let Shape1098 = browser.currentScene.createNode("Shape");
let LineSet1099 = browser.currentScene.createNode("LineSet");
LineSet1099.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1100 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1100.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1100;

let Coordinate1101 = browser.currentScene.createNode("Coordinate");
Coordinate1101.point = new X3D.MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
coord = Coordinate1101;

geometry = LineSet1099;

HAnimSegment1094ZZZ.children[2] = Shape1098;

HAnimJoint1093YYY.children = new X3D.MFNode();

HAnimJoint1093ZZZ.children[0] = HAnimSegment1094;

let HAnimJoint1102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1102.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1102.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1102.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let HAnimSegment1103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1103.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSegment1103.name = "l_carpal_distal_phalanx_2";
let TouchSensor1104 = browser.currentScene.createNode("TouchSensor");
TouchSensor1104.description = "HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2";
HAnimSegment1103YYY.children = new X3D.MFNode();

HAnimSegment1103ZZZ.children[0] = TouchSensor1104;

let Transform1105 = browser.currentScene.createNode("Transform");
Transform1105.translation = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let Shape1106 = browser.currentScene.createNode("Shape");
Shape1106.USE = "HAnimJointShape";
Transform1105YYY.child = new X3D.undefined();

Transform1105ZZZ.child[0] = Shape1106;

HAnimSegment1103ZZZ.children[1] = Transform1105;

let Shape1107 = browser.currentScene.createNode("Shape");
let LineSet1108 = browser.currentScene.createNode("LineSet");
LineSet1108.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1109 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1109;

let Coordinate1110 = browser.currentScene.createNode("Coordinate");
Coordinate1110.point = new X3D.MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
coord = Coordinate1110;

geometry = LineSet1108;

HAnimSegment1103ZZZ.children[2] = Shape1107;

let Shape1111 = browser.currentScene.createNode("Shape");
let LineSet1112 = browser.currentScene.createNode("LineSet");
LineSet1112.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1113 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1113.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1113;

let Coordinate1114 = browser.currentScene.createNode("Coordinate");
Coordinate1114.point = new X3D.MFVec3f([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
coord = Coordinate1114;

geometry = LineSet1112;

HAnimSegment1103ZZZ.children[3] = Shape1111;

let HAnimSite1115 = browser.currentScene.createNode("HAnimSite");
HAnimSite1115.DEF = "hanim_l_carpal_distal_phalanx_2_pt";
HAnimSite1115.name = "l_carpal_distal_phalanx_2_pt";
HAnimSite1115.translation = new X3D.SFVec3f([0.2089,0.6858,-0.0245]);
let TouchSensor1116 = browser.currentScene.createNode("TouchSensor");
TouchSensor1116.description = "HAnimSite l_index_distal_tip";
HAnimSite1115YYY.children = new X3D.MFNode();

HAnimSite1115ZZZ.children[0] = TouchSensor1116;

let Shape1117 = browser.currentScene.createNode("Shape");
Shape1117.USE = "HAnimSiteShape";
HAnimSite1115ZZZ.children[1] = Shape1117;

HAnimSegment1103ZZZ.children[4] = HAnimSite1115;

let HAnimSite1118 = browser.currentScene.createNode("HAnimSite");
HAnimSite1118.DEF = "hanim_l_dactylion_pt";
HAnimSite1118.name = "l_dactylion_pt";
HAnimSite1118.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
let TouchSensor1119 = browser.currentScene.createNode("TouchSensor");
TouchSensor1119.description = "HAnimSite l_dactylion_pt";
HAnimSite1118YYY.children = new X3D.MFNode();

HAnimSite1118ZZZ.children[0] = TouchSensor1119;

let Shape1120 = browser.currentScene.createNode("Shape");
Shape1120.USE = "HAnimSiteShape";
HAnimSite1118ZZZ.children[1] = Shape1120;

HAnimSegment1103ZZZ.children[5] = HAnimSite1118;

HAnimJoint1102YYY.children = new X3D.MFNode();

HAnimJoint1102ZZZ.children[0] = HAnimSegment1103;

HAnimJoint1093ZZZ.children[1] = HAnimJoint1102;

HAnimJoint1084ZZZ.children[1] = HAnimJoint1093;

HAnimJoint1075ZZZ.children[1] = HAnimJoint1084;

HAnimJoint987ZZZ.children[2] = HAnimJoint1075;

let HAnimJoint1121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1121.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1121.name = "l_carpometacarpal_3";
HAnimJoint1121.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let HAnimSegment1122 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1122.DEF = "hanim_l_metacarpal_3";
HAnimSegment1122.name = "l_metacarpal_3";
let TouchSensor1123 = browser.currentScene.createNode("TouchSensor");
TouchSensor1123.description = "HAnimJoint l_middle0, HAnimSegment l_metacarpal_3";
HAnimSegment1122YYY.children = new X3D.MFNode();

HAnimSegment1122ZZZ.children[0] = TouchSensor1123;

let Transform1124 = browser.currentScene.createNode("Transform");
Transform1124.translation = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let Shape1125 = browser.currentScene.createNode("Shape");
Shape1125.USE = "HAnimJointShape";
Transform1124YYY.child = new X3D.undefined();

Transform1124ZZZ.child[0] = Shape1125;

HAnimSegment1122ZZZ.children[1] = Transform1124;

let Shape1126 = browser.currentScene.createNode("Shape");
let LineSet1127 = browser.currentScene.createNode("LineSet");
LineSet1127.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1128 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1128;

let Coordinate1129 = browser.currentScene.createNode("Coordinate");
Coordinate1129.point = new X3D.MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
coord = Coordinate1129;

geometry = LineSet1127;

HAnimSegment1122ZZZ.children[2] = Shape1126;

HAnimJoint1121YYY.children = new X3D.MFNode();

HAnimJoint1121ZZZ.children[0] = HAnimSegment1122;

let HAnimJoint1130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1130.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1130.name = "l_metacarpophalangeal_3";
HAnimJoint1130.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let HAnimSegment1131 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1131.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment1131.name = "l_carpal_proximal_phalanx_3";
let TouchSensor1132 = browser.currentScene.createNode("TouchSensor");
TouchSensor1132.description = "HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3";
HAnimSegment1131YYY.children = new X3D.MFNode();

HAnimSegment1131ZZZ.children[0] = TouchSensor1132;

let Transform1133 = browser.currentScene.createNode("Transform");
Transform1133.translation = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let Shape1134 = browser.currentScene.createNode("Shape");
Shape1134.USE = "HAnimJointShape";
Transform1133YYY.child = new X3D.undefined();

Transform1133ZZZ.child[0] = Shape1134;

HAnimSegment1131ZZZ.children[1] = Transform1133;

let Shape1135 = browser.currentScene.createNode("Shape");
let LineSet1136 = browser.currentScene.createNode("LineSet");
LineSet1136.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1137 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1137.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1137;

let Coordinate1138 = browser.currentScene.createNode("Coordinate");
Coordinate1138.point = new X3D.MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
coord = Coordinate1138;

geometry = LineSet1136;

HAnimSegment1131ZZZ.children[2] = Shape1135;

HAnimJoint1130YYY.children = new X3D.MFNode();

HAnimJoint1130ZZZ.children[0] = HAnimSegment1131;

let HAnimJoint1139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1139.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1139.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1139.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let HAnimSegment1140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1140.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment1140.name = "l_carpal_middle_phalanx_3";
let TouchSensor1141 = browser.currentScene.createNode("TouchSensor");
TouchSensor1141.description = "HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3";
HAnimSegment1140YYY.children = new X3D.MFNode();

HAnimSegment1140ZZZ.children[0] = TouchSensor1141;

let Transform1142 = browser.currentScene.createNode("Transform");
Transform1142.translation = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let Shape1143 = browser.currentScene.createNode("Shape");
Shape1143.USE = "HAnimJointShape";
Transform1142YYY.child = new X3D.undefined();

Transform1142ZZZ.child[0] = Shape1143;

HAnimSegment1140ZZZ.children[1] = Transform1142;

let Shape1144 = browser.currentScene.createNode("Shape");
let LineSet1145 = browser.currentScene.createNode("LineSet");
LineSet1145.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1146 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1146.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1146;

let Coordinate1147 = browser.currentScene.createNode("Coordinate");
Coordinate1147.point = new X3D.MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
coord = Coordinate1147;

geometry = LineSet1145;

HAnimSegment1140ZZZ.children[2] = Shape1144;

HAnimJoint1139YYY.children = new X3D.MFNode();

HAnimJoint1139ZZZ.children[0] = HAnimSegment1140;

let HAnimJoint1148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1148.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1148.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1148.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let HAnimSegment1149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1149.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimSegment1149.name = "l_carpal_distal_phalanx_3";
let TouchSensor1150 = browser.currentScene.createNode("TouchSensor");
TouchSensor1150.description = "HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3";
HAnimSegment1149YYY.children = new X3D.MFNode();

HAnimSegment1149ZZZ.children[0] = TouchSensor1150;

let Transform1151 = browser.currentScene.createNode("Transform");
Transform1151.translation = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let Shape1152 = browser.currentScene.createNode("Shape");
Shape1152.USE = "HAnimJointShape";
Transform1151YYY.child = new X3D.undefined();

Transform1151ZZZ.child[0] = Shape1152;

HAnimSegment1149ZZZ.children[1] = Transform1151;

let Shape1153 = browser.currentScene.createNode("Shape");
let LineSet1154 = browser.currentScene.createNode("LineSet");
LineSet1154.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1155 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1155.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1155;

let Coordinate1156 = browser.currentScene.createNode("Coordinate");
Coordinate1156.point = new X3D.MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
coord = Coordinate1156;

geometry = LineSet1154;

HAnimSegment1149ZZZ.children[2] = Shape1153;

let HAnimSite1157 = browser.currentScene.createNode("HAnimSite");
HAnimSite1157.DEF = "hanim_l_carpal_distal_phalanx_3_pt";
HAnimSite1157.name = "l_carpal_distal_phalanx_3_pt";
HAnimSite1157.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
let TouchSensor1158 = browser.currentScene.createNode("TouchSensor");
TouchSensor1158.description = "HAnimSite l_middle_distal_tip";
HAnimSite1157YYY.children = new X3D.MFNode();

HAnimSite1157ZZZ.children[0] = TouchSensor1158;

let Shape1159 = browser.currentScene.createNode("Shape");
Shape1159.USE = "HAnimSiteShape";
HAnimSite1157ZZZ.children[1] = Shape1159;

HAnimSegment1149ZZZ.children[3] = HAnimSite1157;

HAnimJoint1148YYY.children = new X3D.MFNode();

HAnimJoint1148ZZZ.children[0] = HAnimSegment1149;

HAnimJoint1139ZZZ.children[1] = HAnimJoint1148;

HAnimJoint1130ZZZ.children[1] = HAnimJoint1139;

HAnimJoint1121ZZZ.children[1] = HAnimJoint1130;

HAnimJoint987ZZZ.children[3] = HAnimJoint1121;

let HAnimJoint1160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1160.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1160.name = "l_carpometacarpal_4";
HAnimJoint1160.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let HAnimSegment1161 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1161.DEF = "hanim_l_metacarpal_4";
HAnimSegment1161.name = "l_metacarpal_4";
let TouchSensor1162 = browser.currentScene.createNode("TouchSensor");
TouchSensor1162.description = "HAnimJoint l_ring0, HAnimSegment l_metacarpal_4";
HAnimSegment1161YYY.children = new X3D.MFNode();

HAnimSegment1161ZZZ.children[0] = TouchSensor1162;

let Transform1163 = browser.currentScene.createNode("Transform");
Transform1163.translation = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let Shape1164 = browser.currentScene.createNode("Shape");
Shape1164.USE = "HAnimJointShape";
Transform1163YYY.child = new X3D.undefined();

Transform1163ZZZ.child[0] = Shape1164;

HAnimSegment1161ZZZ.children[1] = Transform1163;

let Shape1165 = browser.currentScene.createNode("Shape");
let LineSet1166 = browser.currentScene.createNode("LineSet");
LineSet1166.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1167 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1167;

let Coordinate1168 = browser.currentScene.createNode("Coordinate");
Coordinate1168.point = new X3D.MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
coord = Coordinate1168;

geometry = LineSet1166;

HAnimSegment1161ZZZ.children[2] = Shape1165;

HAnimJoint1160YYY.children = new X3D.MFNode();

HAnimJoint1160ZZZ.children[0] = HAnimSegment1161;

let HAnimJoint1169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1169.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1169.name = "l_metacarpophalangeal_4";
HAnimJoint1169.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let HAnimSegment1170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1170.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment1170.name = "l_carpal_proximal_phalanx_4";
let TouchSensor1171 = browser.currentScene.createNode("TouchSensor");
TouchSensor1171.description = "HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4";
HAnimSegment1170YYY.children = new X3D.MFNode();

HAnimSegment1170ZZZ.children[0] = TouchSensor1171;

let Transform1172 = browser.currentScene.createNode("Transform");
Transform1172.translation = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let Shape1173 = browser.currentScene.createNode("Shape");
Shape1173.USE = "HAnimJointShape";
Transform1172YYY.child = new X3D.undefined();

Transform1172ZZZ.child[0] = Shape1173;

HAnimSegment1170ZZZ.children[1] = Transform1172;

let Shape1174 = browser.currentScene.createNode("Shape");
let LineSet1175 = browser.currentScene.createNode("LineSet");
LineSet1175.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1176 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1176.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1176;

let Coordinate1177 = browser.currentScene.createNode("Coordinate");
Coordinate1177.point = new X3D.MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
coord = Coordinate1177;

geometry = LineSet1175;

HAnimSegment1170ZZZ.children[2] = Shape1174;

HAnimJoint1169YYY.children = new X3D.MFNode();

HAnimJoint1169ZZZ.children[0] = HAnimSegment1170;

let HAnimJoint1178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1178.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1178.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1178.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let HAnimSegment1179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1179.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment1179.name = "l_carpal_middle_phalanx_4";
let TouchSensor1180 = browser.currentScene.createNode("TouchSensor");
TouchSensor1180.description = "HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4";
HAnimSegment1179YYY.children = new X3D.MFNode();

HAnimSegment1179ZZZ.children[0] = TouchSensor1180;

let Transform1181 = browser.currentScene.createNode("Transform");
Transform1181.translation = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let Shape1182 = browser.currentScene.createNode("Shape");
Shape1182.USE = "HAnimJointShape";
Transform1181YYY.child = new X3D.undefined();

Transform1181ZZZ.child[0] = Shape1182;

HAnimSegment1179ZZZ.children[1] = Transform1181;

let Shape1183 = browser.currentScene.createNode("Shape");
let LineSet1184 = browser.currentScene.createNode("LineSet");
LineSet1184.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1185 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1185.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1185;

let Coordinate1186 = browser.currentScene.createNode("Coordinate");
Coordinate1186.point = new X3D.MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
coord = Coordinate1186;

geometry = LineSet1184;

HAnimSegment1179ZZZ.children[2] = Shape1183;

HAnimJoint1178YYY.children = new X3D.MFNode();

HAnimJoint1178ZZZ.children[0] = HAnimSegment1179;

let HAnimJoint1187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1187.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1187.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1187.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let HAnimSegment1188 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1188.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimSegment1188.name = "l_carpal_distal_phalanx_4";
let TouchSensor1189 = browser.currentScene.createNode("TouchSensor");
TouchSensor1189.description = "HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4";
HAnimSegment1188YYY.children = new X3D.MFNode();

HAnimSegment1188ZZZ.children[0] = TouchSensor1189;

let Transform1190 = browser.currentScene.createNode("Transform");
Transform1190.translation = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let Shape1191 = browser.currentScene.createNode("Shape");
Shape1191.USE = "HAnimJointShape";
Transform1190YYY.child = new X3D.undefined();

Transform1190ZZZ.child[0] = Shape1191;

HAnimSegment1188ZZZ.children[1] = Transform1190;

let Shape1192 = browser.currentScene.createNode("Shape");
let LineSet1193 = browser.currentScene.createNode("LineSet");
LineSet1193.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1194 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1194.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1194;

let Coordinate1195 = browser.currentScene.createNode("Coordinate");
Coordinate1195.point = new X3D.MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
coord = Coordinate1195;

geometry = LineSet1193;

HAnimSegment1188ZZZ.children[2] = Shape1192;

let HAnimSite1196 = browser.currentScene.createNode("HAnimSite");
HAnimSite1196.DEF = "hanim_l_carpal_distal_phalanx_4_pt";
HAnimSite1196.name = "l_carpal_distal_phalanx_4_pt";
HAnimSite1196.translation = new X3D.SFVec3f([0.2035,0.675,-0.0756]);
let TouchSensor1197 = browser.currentScene.createNode("TouchSensor");
TouchSensor1197.description = "HAnimSite l_ring_distal_tip";
HAnimSite1196YYY.children = new X3D.MFNode();

HAnimSite1196ZZZ.children[0] = TouchSensor1197;

let Shape1198 = browser.currentScene.createNode("Shape");
Shape1198.USE = "HAnimSiteShape";
HAnimSite1196ZZZ.children[1] = Shape1198;

HAnimSegment1188ZZZ.children[3] = HAnimSite1196;

HAnimJoint1187YYY.children = new X3D.MFNode();

HAnimJoint1187ZZZ.children[0] = HAnimSegment1188;

HAnimJoint1178ZZZ.children[1] = HAnimJoint1187;

HAnimJoint1169ZZZ.children[1] = HAnimJoint1178;

HAnimJoint1160ZZZ.children[1] = HAnimJoint1169;

HAnimJoint987ZZZ.children[4] = HAnimJoint1160;

let HAnimJoint1199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1199.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1199.name = "l_carpometacarpal_5";
HAnimJoint1199.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let HAnimSegment1200 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1200.DEF = "hanim_l_metacarpal_5";
HAnimSegment1200.name = "l_metacarpal_5";
let TouchSensor1201 = browser.currentScene.createNode("TouchSensor");
TouchSensor1201.description = "HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5";
HAnimSegment1200YYY.children = new X3D.MFNode();

HAnimSegment1200ZZZ.children[0] = TouchSensor1201;

let Transform1202 = browser.currentScene.createNode("Transform");
Transform1202.translation = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let Shape1203 = browser.currentScene.createNode("Shape");
Shape1203.USE = "HAnimJointShape";
Transform1202YYY.child = new X3D.undefined();

Transform1202ZZZ.child[0] = Shape1203;

HAnimSegment1200ZZZ.children[1] = Transform1202;

let Shape1204 = browser.currentScene.createNode("Shape");
let LineSet1205 = browser.currentScene.createNode("LineSet");
LineSet1205.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1206 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1206;

let Coordinate1207 = browser.currentScene.createNode("Coordinate");
Coordinate1207.point = new X3D.MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
coord = Coordinate1207;

geometry = LineSet1205;

HAnimSegment1200ZZZ.children[2] = Shape1204;

HAnimJoint1199YYY.children = new X3D.MFNode();

HAnimJoint1199ZZZ.children[0] = HAnimSegment1200;

let HAnimJoint1208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1208.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1208.name = "l_metacarpophalangeal_5";
HAnimJoint1208.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let HAnimSegment1209 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1209.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment1209.name = "l_carpal_proximal_phalanx_5";
let TouchSensor1210 = browser.currentScene.createNode("TouchSensor");
TouchSensor1210.description = "HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5";
HAnimSegment1209YYY.children = new X3D.MFNode();

HAnimSegment1209ZZZ.children[0] = TouchSensor1210;

let Transform1211 = browser.currentScene.createNode("Transform");
Transform1211.translation = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let Shape1212 = browser.currentScene.createNode("Shape");
Shape1212.USE = "HAnimJointShape";
Transform1211YYY.child = new X3D.undefined();

Transform1211ZZZ.child[0] = Shape1212;

HAnimSegment1209ZZZ.children[1] = Transform1211;

let Shape1213 = browser.currentScene.createNode("Shape");
let LineSet1214 = browser.currentScene.createNode("LineSet");
LineSet1214.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1215 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1215.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1215;

let Coordinate1216 = browser.currentScene.createNode("Coordinate");
Coordinate1216.point = new X3D.MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
coord = Coordinate1216;

geometry = LineSet1214;

HAnimSegment1209ZZZ.children[2] = Shape1213;

HAnimJoint1208YYY.children = new X3D.MFNode();

HAnimJoint1208ZZZ.children[0] = HAnimSegment1209;

let HAnimJoint1217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1217.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1217.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1217.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let HAnimSegment1218 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1218.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimSegment1218.name = "l_carpal_middle_phalanx_5";
let TouchSensor1219 = browser.currentScene.createNode("TouchSensor");
TouchSensor1219.description = "HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5";
HAnimSegment1218YYY.children = new X3D.MFNode();

HAnimSegment1218ZZZ.children[0] = TouchSensor1219;

let Transform1220 = browser.currentScene.createNode("Transform");
Transform1220.translation = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let Shape1221 = browser.currentScene.createNode("Shape");
Shape1221.USE = "HAnimJointShape";
Transform1220YYY.child = new X3D.undefined();

Transform1220ZZZ.child[0] = Shape1221;

HAnimSegment1218ZZZ.children[1] = Transform1220;

let Shape1222 = browser.currentScene.createNode("Shape");
let LineSet1223 = browser.currentScene.createNode("LineSet");
LineSet1223.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1224 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1224;

let Coordinate1225 = browser.currentScene.createNode("Coordinate");
Coordinate1225.point = new X3D.MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
coord = Coordinate1225;

geometry = LineSet1223;

HAnimSegment1218ZZZ.children[2] = Shape1222;

HAnimJoint1217YYY.children = new X3D.MFNode();

HAnimJoint1217ZZZ.children[0] = HAnimSegment1218;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1226.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1226.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let HAnimSegment1227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1227.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimSegment1227.name = "l_carpal_distal_phalanx_5";
let TouchSensor1228 = browser.currentScene.createNode("TouchSensor");
TouchSensor1228.description = "HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5";
HAnimSegment1227YYY.children = new X3D.MFNode();

HAnimSegment1227ZZZ.children[0] = TouchSensor1228;

let Transform1229 = browser.currentScene.createNode("Transform");
Transform1229.translation = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let Shape1230 = browser.currentScene.createNode("Shape");
Shape1230.USE = "HAnimJointShape";
Transform1229YYY.child = new X3D.undefined();

Transform1229ZZZ.child[0] = Shape1230;

HAnimSegment1227ZZZ.children[1] = Transform1229;

let Shape1231 = browser.currentScene.createNode("Shape");
let LineSet1232 = browser.currentScene.createNode("LineSet");
LineSet1232.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1233 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1233.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1233;

let Coordinate1234 = browser.currentScene.createNode("Coordinate");
Coordinate1234.point = new X3D.MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
coord = Coordinate1234;

geometry = LineSet1232;

HAnimSegment1227ZZZ.children[2] = Shape1231;

let HAnimSite1235 = browser.currentScene.createNode("HAnimSite");
HAnimSite1235.DEF = "hanim_l_carpal_distal_phalanx_5_pt";
HAnimSite1235.name = "l_carpal_distal_phalanx_5_pt";
HAnimSite1235.translation = new X3D.SFVec3f([0.2014,0.7009,-0.1012]);
let TouchSensor1236 = browser.currentScene.createNode("TouchSensor");
TouchSensor1236.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1235YYY.children = new X3D.MFNode();

HAnimSite1235ZZZ.children[0] = TouchSensor1236;

let Shape1237 = browser.currentScene.createNode("Shape");
Shape1237.USE = "HAnimSiteShape";
HAnimSite1235ZZZ.children[1] = Shape1237;

HAnimSegment1227ZZZ.children[3] = HAnimSite1235;

HAnimJoint1226YYY.children = new X3D.MFNode();

HAnimJoint1226ZZZ.children[0] = HAnimSegment1227;

HAnimJoint1217ZZZ.children[1] = HAnimJoint1226;

HAnimJoint1208ZZZ.children[1] = HAnimJoint1217;

HAnimJoint1199ZZZ.children[1] = HAnimJoint1208;

HAnimJoint987ZZZ.children[5] = HAnimJoint1199;

HAnimJoint950ZZZ.children[1] = HAnimJoint987;

HAnimJoint934ZZZ.children[1] = HAnimJoint950;

HAnimJoint925ZZZ.children[1] = HAnimJoint934;

HAnimJoint888ZZZ.children[1] = HAnimJoint925;

HAnimJoint600ZZZ.children[2] = HAnimJoint888;

let HAnimJoint1238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1238.DEF = "hanim_r_sternoclavicular";
HAnimJoint1238.name = "r_sternoclavicular";
HAnimJoint1238.center = new X3D.SFVec3f([-0.082,1.4488,-0.0353]);
let HAnimSegment1239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1239.DEF = "hanim_r_clavicle";
HAnimSegment1239.name = "r_clavicle";
let TouchSensor1240 = browser.currentScene.createNode("TouchSensor");
TouchSensor1240.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1239YYY.children = new X3D.MFNode();

HAnimSegment1239ZZZ.children[0] = TouchSensor1240;

let Transform1241 = browser.currentScene.createNode("Transform");
Transform1241.translation = new X3D.SFVec3f([-0.082,1.4488,-0.0353]);
let Shape1242 = browser.currentScene.createNode("Shape");
Shape1242.USE = "HAnimJointShape";
Transform1241YYY.child = new X3D.undefined();

Transform1241ZZZ.child[0] = Shape1242;

HAnimSegment1239ZZZ.children[1] = Transform1241;

let Shape1243 = browser.currentScene.createNode("Shape");
let LineSet1244 = browser.currentScene.createNode("LineSet");
LineSet1244.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1245 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1245.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1245;

let Coordinate1246 = browser.currentScene.createNode("Coordinate");
Coordinate1246.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
coord = Coordinate1246;

geometry = LineSet1244;

HAnimSegment1239ZZZ.children[2] = Shape1243;

let Shape1247 = browser.currentScene.createNode("Shape");
let LineSet1248 = browser.currentScene.createNode("LineSet");
LineSet1248.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1249 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1249.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1249;

let Coordinate1250 = browser.currentScene.createNode("Coordinate");
Coordinate1250.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
coord = Coordinate1250;

geometry = LineSet1248;

HAnimSegment1239ZZZ.children[3] = Shape1247;

let Shape1251 = browser.currentScene.createNode("Shape");
let LineSet1252 = browser.currentScene.createNode("LineSet");
LineSet1252.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1253 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1253.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1253;

let Coordinate1254 = browser.currentScene.createNode("Coordinate");
Coordinate1254.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
coord = Coordinate1254;

geometry = LineSet1252;

HAnimSegment1239ZZZ.children[4] = Shape1251;

let Shape1255 = browser.currentScene.createNode("Shape");
let LineSet1256 = browser.currentScene.createNode("LineSet");
LineSet1256.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1257 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1257.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1257;

let Coordinate1258 = browser.currentScene.createNode("Coordinate");
Coordinate1258.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
coord = Coordinate1258;

geometry = LineSet1256;

HAnimSegment1239ZZZ.children[5] = Shape1255;

let Shape1259 = browser.currentScene.createNode("Shape");
let LineSet1260 = browser.currentScene.createNode("LineSet");
LineSet1260.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1261 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1261.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1261;

let Coordinate1262 = browser.currentScene.createNode("Coordinate");
Coordinate1262.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
coord = Coordinate1262;

geometry = LineSet1260;

HAnimSegment1239ZZZ.children[6] = Shape1259;

let HAnimSite1263 = browser.currentScene.createNode("HAnimSite");
HAnimSite1263.DEF = "hanim_r_clavicle_pt";
HAnimSite1263.name = "r_clavicle_pt";
HAnimSite1263.translation = new X3D.SFVec3f([-0.0115,1.4943,0.04]);
let TouchSensor1264 = browser.currentScene.createNode("TouchSensor");
TouchSensor1264.description = "HAnimSite r_clavicale_pt";
HAnimSite1263YYY.children = new X3D.MFNode();

HAnimSite1263ZZZ.children[0] = TouchSensor1264;

let Shape1265 = browser.currentScene.createNode("Shape");
Shape1265.USE = "HAnimSiteShape";
HAnimSite1263ZZZ.children[1] = Shape1265;

HAnimSegment1239ZZZ.children[7] = HAnimSite1263;

let HAnimSite1266 = browser.currentScene.createNode("HAnimSite");
HAnimSite1266.DEF = "hanim_r_acromion_pt";
HAnimSite1266.name = "r_acromion_pt";
HAnimSite1266.translation = new X3D.SFVec3f([-0.1905,1.4791,-0.0431]);
let TouchSensor1267 = browser.currentScene.createNode("TouchSensor");
TouchSensor1267.description = "HAnimSite r_acromion_pt";
HAnimSite1266YYY.children = new X3D.MFNode();

HAnimSite1266ZZZ.children[0] = TouchSensor1267;

let Shape1268 = browser.currentScene.createNode("Shape");
Shape1268.USE = "HAnimSiteShape";
HAnimSite1266ZZZ.children[1] = Shape1268;

HAnimSegment1239ZZZ.children[8] = HAnimSite1266;

let HAnimSite1269 = browser.currentScene.createNode("HAnimSite");
HAnimSite1269.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite1269.name = "r_axilla_proximal_pt";
HAnimSite1269.translation = new X3D.SFVec3f([-0.1626,1.4072,-0.0031]);
let TouchSensor1270 = browser.currentScene.createNode("TouchSensor");
TouchSensor1270.description = "HAnimSite r_axilla_ant_pt";
HAnimSite1269YYY.children = new X3D.MFNode();

HAnimSite1269ZZZ.children[0] = TouchSensor1270;

let Shape1271 = browser.currentScene.createNode("Shape");
Shape1271.USE = "HAnimSiteShape";
HAnimSite1269ZZZ.children[1] = Shape1271;

HAnimSegment1239ZZZ.children[9] = HAnimSite1269;

let HAnimSite1272 = browser.currentScene.createNode("HAnimSite");
HAnimSite1272.DEF = "hanim_r_axilla_distal_pt";
HAnimSite1272.name = "r_axilla_distal_pt";
HAnimSite1272.translation = new X3D.SFVec3f([-0.1603,1.4098,-0.0826]);
let TouchSensor1273 = browser.currentScene.createNode("TouchSensor");
TouchSensor1273.description = "HAnimSite r_axilla_post_pt";
HAnimSite1272YYY.children = new X3D.MFNode();

HAnimSite1272ZZZ.children[0] = TouchSensor1273;

let Shape1274 = browser.currentScene.createNode("Shape");
Shape1274.USE = "HAnimSiteShape";
HAnimSite1272ZZZ.children[1] = Shape1274;

HAnimSegment1239ZZZ.children[10] = HAnimSite1272;

HAnimJoint1238YYY.children = new X3D.MFNode();

HAnimJoint1238ZZZ.children[0] = HAnimSegment1239;

let HAnimJoint1275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1275.DEF = "hanim_r_acromioclavicular";
HAnimJoint1275.name = "r_acromioclavicular";
HAnimJoint1275.center = new X3D.SFVec3f([-0.0962,1.4269,-0.0424]);
let HAnimSegment1276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1276.DEF = "hanim_r_scapula";
HAnimSegment1276.name = "r_scapula";
let TouchSensor1277 = browser.currentScene.createNode("TouchSensor");
TouchSensor1277.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1276YYY.children = new X3D.MFNode();

HAnimSegment1276ZZZ.children[0] = TouchSensor1277;

let Transform1278 = browser.currentScene.createNode("Transform");
Transform1278.translation = new X3D.SFVec3f([-0.0962,1.4269,-0.0424]);
let Shape1279 = browser.currentScene.createNode("Shape");
Shape1279.USE = "HAnimJointShape";
Transform1278YYY.child = new X3D.undefined();

Transform1278ZZZ.child[0] = Shape1279;

HAnimSegment1276ZZZ.children[1] = Transform1278;

let Shape1280 = browser.currentScene.createNode("Shape");
let LineSet1281 = browser.currentScene.createNode("LineSet");
LineSet1281.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1282 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1282.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1282;

let Coordinate1283 = browser.currentScene.createNode("Coordinate");
Coordinate1283.point = new X3D.MFVec3f([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
coord = Coordinate1283;

geometry = LineSet1281;

HAnimSegment1276ZZZ.children[2] = Shape1280;

HAnimJoint1275YYY.children = new X3D.MFNode();

HAnimJoint1275ZZZ.children[0] = HAnimSegment1276;

let HAnimJoint1284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1284.DEF = "hanim_r_shoulder";
HAnimJoint1284.name = "r_shoulder";
HAnimJoint1284.center = new X3D.SFVec3f([-0.2029,1.4376,-0.0387]);
let HAnimSegment1285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1285.DEF = "hanim_r_upperarm";
HAnimSegment1285.name = "r_upperarm";
let TouchSensor1286 = browser.currentScene.createNode("TouchSensor");
TouchSensor1286.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1285YYY.children = new X3D.MFNode();

HAnimSegment1285ZZZ.children[0] = TouchSensor1286;

let Transform1287 = browser.currentScene.createNode("Transform");
Transform1287.translation = new X3D.SFVec3f([-0.2029,1.4376,-0.0387]);
let Shape1288 = browser.currentScene.createNode("Shape");
Shape1288.USE = "HAnimJointShape";
Transform1287YYY.child = new X3D.undefined();

Transform1287ZZZ.child[0] = Shape1288;

HAnimSegment1285ZZZ.children[1] = Transform1287;

let Shape1289 = browser.currentScene.createNode("Shape");
let LineSet1290 = browser.currentScene.createNode("LineSet");
LineSet1290.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1291 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1291.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1291;

let Coordinate1292 = browser.currentScene.createNode("Coordinate");
Coordinate1292.point = new X3D.MFVec3f([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
coord = Coordinate1292;

geometry = LineSet1290;

HAnimSegment1285ZZZ.children[2] = Shape1289;

let Shape1293 = browser.currentScene.createNode("Shape");
let LineSet1294 = browser.currentScene.createNode("LineSet");
LineSet1294.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1295 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1295.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1295;

let Coordinate1296 = browser.currentScene.createNode("Coordinate");
Coordinate1296.point = new X3D.MFVec3f([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
coord = Coordinate1296;

geometry = LineSet1294;

HAnimSegment1285ZZZ.children[3] = Shape1293;

let HAnimSite1297 = browser.currentScene.createNode("HAnimSite");
HAnimSite1297.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite1297.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite1297.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
let TouchSensor1298 = browser.currentScene.createNode("TouchSensor");
TouchSensor1298.description = "HAnimSite r_humeral_lateral_epicn_pt";
HAnimSite1297YYY.children = new X3D.MFNode();

HAnimSite1297ZZZ.children[0] = TouchSensor1298;

let Shape1299 = browser.currentScene.createNode("Shape");
Shape1299.USE = "HAnimSiteShape";
HAnimSite1297ZZZ.children[1] = Shape1299;

HAnimSegment1285ZZZ.children[4] = HAnimSite1297;

HAnimJoint1284YYY.children = new X3D.MFNode();

HAnimJoint1284ZZZ.children[0] = HAnimSegment1285;

let HAnimJoint1300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1300.DEF = "hanim_r_elbow";
HAnimJoint1300.name = "r_elbow";
HAnimJoint1300.center = new X3D.SFVec3f([-0.2014,1.1357,-0.0682]);
let HAnimSegment1301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1301.DEF = "hanim_r_forearm";
HAnimSegment1301.name = "r_forearm";
let TouchSensor1302 = browser.currentScene.createNode("TouchSensor");
TouchSensor1302.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1301YYY.children = new X3D.MFNode();

HAnimSegment1301ZZZ.children[0] = TouchSensor1302;

let Transform1303 = browser.currentScene.createNode("Transform");
Transform1303.translation = new X3D.SFVec3f([-0.2014,1.1357,-0.0682]);
let Shape1304 = browser.currentScene.createNode("Shape");
Shape1304.USE = "HAnimJointShape";
Transform1303YYY.child = new X3D.undefined();

Transform1303ZZZ.child[0] = Shape1304;

HAnimSegment1301ZZZ.children[1] = Transform1303;

let Shape1305 = browser.currentScene.createNode("Shape");
let LineSet1306 = browser.currentScene.createNode("LineSet");
LineSet1306.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1307 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1307.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1307;

let Coordinate1308 = browser.currentScene.createNode("Coordinate");
Coordinate1308.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
coord = Coordinate1308;

geometry = LineSet1306;

HAnimSegment1301ZZZ.children[2] = Shape1305;

let Shape1309 = browser.currentScene.createNode("Shape");
let LineSet1310 = browser.currentScene.createNode("LineSet");
LineSet1310.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1311 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1311;

let Coordinate1312 = browser.currentScene.createNode("Coordinate");
Coordinate1312.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
coord = Coordinate1312;

geometry = LineSet1310;

HAnimSegment1301ZZZ.children[3] = Shape1309;

let Shape1313 = browser.currentScene.createNode("Shape");
let LineSet1314 = browser.currentScene.createNode("LineSet");
LineSet1314.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1315 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1315.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1315;

let Coordinate1316 = browser.currentScene.createNode("Coordinate");
Coordinate1316.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
coord = Coordinate1316;

geometry = LineSet1314;

HAnimSegment1301ZZZ.children[4] = Shape1313;

let Shape1317 = browser.currentScene.createNode("Shape");
let LineSet1318 = browser.currentScene.createNode("LineSet");
LineSet1318.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1319 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1319.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1319;

let Coordinate1320 = browser.currentScene.createNode("Coordinate");
Coordinate1320.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
coord = Coordinate1320;

geometry = LineSet1318;

HAnimSegment1301ZZZ.children[5] = Shape1317;

let Shape1321 = browser.currentScene.createNode("Shape");
let LineSet1322 = browser.currentScene.createNode("LineSet");
LineSet1322.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1323 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1323.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1323;

let Coordinate1324 = browser.currentScene.createNode("Coordinate");
Coordinate1324.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
coord = Coordinate1324;

geometry = LineSet1322;

HAnimSegment1301ZZZ.children[6] = Shape1321;

let HAnimSite1325 = browser.currentScene.createNode("HAnimSite");
HAnimSite1325.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1325.name = "r_radial_styloid_pt";
HAnimSite1325.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
let TouchSensor1326 = browser.currentScene.createNode("TouchSensor");
TouchSensor1326.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1325YYY.children = new X3D.MFNode();

HAnimSite1325ZZZ.children[0] = TouchSensor1326;

let Shape1327 = browser.currentScene.createNode("Shape");
Shape1327.USE = "HAnimSiteShape";
HAnimSite1325ZZZ.children[1] = Shape1327;

HAnimSegment1301ZZZ.children[7] = HAnimSite1325;

let HAnimSite1328 = browser.currentScene.createNode("HAnimSite");
HAnimSite1328.DEF = "hanim_r_olecranon_pt";
HAnimSite1328.name = "r_olecranon_pt";
HAnimSite1328.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
let TouchSensor1329 = browser.currentScene.createNode("TouchSensor");
TouchSensor1329.description = "HAnimSite r_olecranon_pt";
HAnimSite1328YYY.children = new X3D.MFNode();

HAnimSite1328ZZZ.children[0] = TouchSensor1329;

let Shape1330 = browser.currentScene.createNode("Shape");
Shape1330.USE = "HAnimSiteShape";
HAnimSite1328ZZZ.children[1] = Shape1330;

HAnimSegment1301ZZZ.children[8] = HAnimSite1328;

let HAnimSite1331 = browser.currentScene.createNode("HAnimSite");
HAnimSite1331.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite1331.name = "r_humeral_medial_epicondyle_pt";
HAnimSite1331.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
let TouchSensor1332 = browser.currentScene.createNode("TouchSensor");
TouchSensor1332.description = "HAnimSite r_humeral_medial_epicn_pt";
HAnimSite1331YYY.children = new X3D.MFNode();

HAnimSite1331ZZZ.children[0] = TouchSensor1332;

let Shape1333 = browser.currentScene.createNode("Shape");
Shape1333.USE = "HAnimSiteShape";
HAnimSite1331ZZZ.children[1] = Shape1333;

HAnimSegment1301ZZZ.children[9] = HAnimSite1331;

let HAnimSite1334 = browser.currentScene.createNode("HAnimSite");
HAnimSite1334.DEF = "hanim_r_radiale_pt";
HAnimSite1334.name = "r_radiale_pt";
HAnimSite1334.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
let TouchSensor1335 = browser.currentScene.createNode("TouchSensor");
TouchSensor1335.description = "HAnimSite r_radiale_pt";
HAnimSite1334YYY.children = new X3D.MFNode();

HAnimSite1334ZZZ.children[0] = TouchSensor1335;

let Shape1336 = browser.currentScene.createNode("Shape");
Shape1336.USE = "HAnimSiteShape";
HAnimSite1334ZZZ.children[1] = Shape1336;

HAnimSegment1301ZZZ.children[10] = HAnimSite1334;

HAnimJoint1300YYY.children = new X3D.MFNode();

HAnimJoint1300ZZZ.children[0] = HAnimSegment1301;

let HAnimJoint1337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1337.DEF = "hanim_r_radiocarpal";
HAnimJoint1337.name = "r_radiocarpal";
HAnimJoint1337.center = new X3D.SFVec3f([-0.1984,0.8663,-0.0583]);
let HAnimSegment1338 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1338.DEF = "hanim_r_carpal";
HAnimSegment1338.name = "r_carpal";
let TouchSensor1339 = browser.currentScene.createNode("TouchSensor");
TouchSensor1339.description = "HAnimJoint r_radiocarpal, HAnimSegment r_carpal";
HAnimSegment1338YYY.children = new X3D.MFNode();

HAnimSegment1338ZZZ.children[0] = TouchSensor1339;

let Transform1340 = browser.currentScene.createNode("Transform");
Transform1340.translation = new X3D.SFVec3f([-0.1984,0.8663,-0.0583]);
let Shape1341 = browser.currentScene.createNode("Shape");
Shape1341.USE = "HAnimJointShape";
Transform1340YYY.child = new X3D.undefined();

Transform1340ZZZ.child[0] = Shape1341;

HAnimSegment1338ZZZ.children[1] = Transform1340;

let Shape1342 = browser.currentScene.createNode("Shape");
let LineSet1343 = browser.currentScene.createNode("LineSet");
LineSet1343.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1344 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1344.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1344;

let Coordinate1345 = browser.currentScene.createNode("Coordinate");
Coordinate1345.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
coord = Coordinate1345;

geometry = LineSet1343;

HAnimSegment1338ZZZ.children[2] = Shape1342;

let Shape1346 = browser.currentScene.createNode("Shape");
let LineSet1347 = browser.currentScene.createNode("LineSet");
LineSet1347.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1348 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1348;

let Coordinate1349 = browser.currentScene.createNode("Coordinate");
Coordinate1349.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
coord = Coordinate1349;

geometry = LineSet1347;

HAnimSegment1338ZZZ.children[3] = Shape1346;

let Shape1350 = browser.currentScene.createNode("Shape");
let LineSet1351 = browser.currentScene.createNode("LineSet");
LineSet1351.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1352 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1352.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1352;

let Coordinate1353 = browser.currentScene.createNode("Coordinate");
Coordinate1353.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
coord = Coordinate1353;

geometry = LineSet1351;

HAnimSegment1338ZZZ.children[4] = Shape1350;

let Shape1354 = browser.currentScene.createNode("Shape");
let LineSet1355 = browser.currentScene.createNode("LineSet");
LineSet1355.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1356 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1356.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1356;

let Coordinate1357 = browser.currentScene.createNode("Coordinate");
Coordinate1357.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
coord = Coordinate1357;

geometry = LineSet1355;

HAnimSegment1338ZZZ.children[5] = Shape1354;

let Shape1358 = browser.currentScene.createNode("Shape");
let LineSet1359 = browser.currentScene.createNode("LineSet");
LineSet1359.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1360 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1360.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1360;

let Coordinate1361 = browser.currentScene.createNode("Coordinate");
Coordinate1361.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
coord = Coordinate1361;

geometry = LineSet1359;

HAnimSegment1338ZZZ.children[6] = Shape1358;

let Shape1362 = browser.currentScene.createNode("Shape");
let LineSet1363 = browser.currentScene.createNode("LineSet");
LineSet1363.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1364 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1364.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1364;

let Coordinate1365 = browser.currentScene.createNode("Coordinate");
Coordinate1365.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
coord = Coordinate1365;

geometry = LineSet1363;

HAnimSegment1338ZZZ.children[7] = Shape1362;

let Shape1366 = browser.currentScene.createNode("Shape");
let LineSet1367 = browser.currentScene.createNode("LineSet");
LineSet1367.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1368 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1368.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1368;

let Coordinate1369 = browser.currentScene.createNode("Coordinate");
Coordinate1369.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
coord = Coordinate1369;

geometry = LineSet1367;

HAnimSegment1338ZZZ.children[8] = Shape1366;

let Shape1370 = browser.currentScene.createNode("Shape");
let LineSet1371 = browser.currentScene.createNode("LineSet");
LineSet1371.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1372 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1372.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1372;

let Coordinate1373 = browser.currentScene.createNode("Coordinate");
Coordinate1373.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
coord = Coordinate1373;

geometry = LineSet1371;

HAnimSegment1338ZZZ.children[9] = Shape1370;

let Shape1374 = browser.currentScene.createNode("Shape");
let LineSet1375 = browser.currentScene.createNode("LineSet");
LineSet1375.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1376 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1376.USE = "HAnimSiteViewpointLineColorRGBA";
color = ColorRGBA1376;

let Coordinate1377 = browser.currentScene.createNode("Coordinate");
Coordinate1377.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
coord = Coordinate1377;

geometry = LineSet1375;

HAnimSegment1338ZZZ.children[10] = Shape1374;

let HAnimSite1378 = browser.currentScene.createNode("HAnimSite");
HAnimSite1378.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1378.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1378.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
let TouchSensor1379 = browser.currentScene.createNode("TouchSensor");
TouchSensor1379.description = "HAnimSite r_metacarpal_pha2_pt";
HAnimSite1378YYY.children = new X3D.MFNode();

HAnimSite1378ZZZ.children[0] = TouchSensor1379;

let Shape1380 = browser.currentScene.createNode("Shape");
Shape1380.USE = "HAnimSiteShape";
HAnimSite1378ZZZ.children[1] = Shape1380;

HAnimSegment1338ZZZ.children[11] = HAnimSite1378;

let HAnimSite1381 = browser.currentScene.createNode("HAnimSite");
HAnimSite1381.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1381.name = "r_ulnar_styloid_pt";
HAnimSite1381.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
let TouchSensor1382 = browser.currentScene.createNode("TouchSensor");
TouchSensor1382.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1381YYY.children = new X3D.MFNode();

HAnimSite1381ZZZ.children[0] = TouchSensor1382;

let Shape1383 = browser.currentScene.createNode("Shape");
Shape1383.USE = "HAnimSiteShape";
HAnimSite1381ZZZ.children[1] = Shape1383;

HAnimSegment1338ZZZ.children[12] = HAnimSite1381;

let HAnimSite1384 = browser.currentScene.createNode("HAnimSite");
HAnimSite1384.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1384.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1384.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
let TouchSensor1385 = browser.currentScene.createNode("TouchSensor");
TouchSensor1385.description = "HAnimSite r_metacarpal_pha5_pt";
HAnimSite1384YYY.children = new X3D.MFNode();

HAnimSite1384ZZZ.children[0] = TouchSensor1385;

let Shape1386 = browser.currentScene.createNode("Shape");
Shape1386.USE = "HAnimSiteShape";
HAnimSite1384ZZZ.children[1] = Shape1386;

HAnimSegment1338ZZZ.children[13] = HAnimSite1384;

let HAnimSite1387 = browser.currentScene.createNode("HAnimSite");
HAnimSite1387.DEF = "hanim_r_hand_front_view";
HAnimSite1387.name = "r_hand_front_view";
HAnimSite1387.translation = new X3D.SFVec3f([-0.3,0.75,0.45]);
let TouchSensor1388 = browser.currentScene.createNode("TouchSensor");
TouchSensor1388.description = "HAnimSite r_hand_front_view";
HAnimSite1387YYY.children = new X3D.MFNode();

HAnimSite1387ZZZ.children[0] = TouchSensor1388;

let Shape1389 = browser.currentScene.createNode("Shape");
Shape1389.USE = "HAnimSiteShape";
HAnimSite1387ZZZ.children[1] = Shape1389;

let Viewpoint1390 = browser.currentScene.createNode("Viewpoint");
Viewpoint1390.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1390.description = "right hand front";
Viewpoint1390.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1390.centerOfRotation = new X3D.SFVec3f([0,0.7,0]);
HAnimSite1387ZZZ.children[2] = Viewpoint1390;

let Anchor1391 = browser.currentScene.createNode("Anchor");
Anchor1391.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1391.url = new X3D.MFString([new X3D.SFString("#hanim_r_hand_front_viewpoint")]);
let LOD1392 = browser.currentScene.createNode("LOD");
LOD1392.forceTransitions = True;
LOD1392.range = new X3D.MFFloat([0.04]);
let WorldInfo1393 = browser.currentScene.createNode("WorldInfo");
WorldInfo1393.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1392YYY.children = new X3D.MFNode();

LOD1392ZZZ.children[0] = WorldInfo1393;

let Shape1394 = browser.currentScene.createNode("Shape");
Shape1394.USE = "HAnimSiteViewpointShape";
LOD1392ZZZ.children[1] = Shape1394;

Anchor1391YYY.children = new X3D.MFNode();

Anchor1391ZZZ.children[0] = LOD1392;

HAnimSite1387ZZZ.children[3] = Anchor1391;

HAnimSegment1338ZZZ.children[14] = HAnimSite1387;

HAnimJoint1337YYY.children = new X3D.MFNode();

HAnimJoint1337ZZZ.children[0] = HAnimSegment1338;

let HAnimJoint1395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1395.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1395.name = "r_carpometacarpal_1";
HAnimJoint1395.center = new X3D.SFVec3f([-0.1924,0.8472,-0.0534]);
let HAnimSegment1396 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1396.DEF = "hanim_r_metacarpal_1";
HAnimSegment1396.name = "r_metacarpal_1";
let TouchSensor1397 = browser.currentScene.createNode("TouchSensor");
TouchSensor1397.description = "HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1";
HAnimSegment1396YYY.children = new X3D.MFNode();

HAnimSegment1396ZZZ.children[0] = TouchSensor1397;

let Transform1398 = browser.currentScene.createNode("Transform");
Transform1398.translation = new X3D.SFVec3f([-0.1924,0.8472,-0.0534]);
let Shape1399 = browser.currentScene.createNode("Shape");
Shape1399.USE = "HAnimJointShape";
Transform1398YYY.child = new X3D.undefined();

Transform1398ZZZ.child[0] = Shape1399;

HAnimSegment1396ZZZ.children[1] = Transform1398;

let Shape1400 = browser.currentScene.createNode("Shape");
let LineSet1401 = browser.currentScene.createNode("LineSet");
LineSet1401.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1402 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1402.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1402;

let Coordinate1403 = browser.currentScene.createNode("Coordinate");
Coordinate1403.point = new X3D.MFVec3f([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
coord = Coordinate1403;

geometry = LineSet1401;

HAnimSegment1396ZZZ.children[2] = Shape1400;

HAnimJoint1395YYY.children = new X3D.MFNode();

HAnimJoint1395ZZZ.children[0] = HAnimSegment1396;

let HAnimJoint1404 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1404.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1404.name = "r_metacarpophalangeal_1";
HAnimJoint1404.center = new X3D.SFVec3f([-0.1951,0.8226,0.0246]);
let HAnimSegment1405 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1405.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment1405.name = "r_carpal_proximal_phalanx_1";
let TouchSensor1406 = browser.currentScene.createNode("TouchSensor");
TouchSensor1406.description = "HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1";
HAnimSegment1405YYY.children = new X3D.MFNode();

HAnimSegment1405ZZZ.children[0] = TouchSensor1406;

let Transform1407 = browser.currentScene.createNode("Transform");
Transform1407.translation = new X3D.SFVec3f([-0.1951,0.8226,0.0246]);
let Shape1408 = browser.currentScene.createNode("Shape");
Shape1408.USE = "HAnimJointShape";
Transform1407YYY.child = new X3D.undefined();

Transform1407ZZZ.child[0] = Shape1408;

HAnimSegment1405ZZZ.children[1] = Transform1407;

let Shape1409 = browser.currentScene.createNode("Shape");
let LineSet1410 = browser.currentScene.createNode("LineSet");
LineSet1410.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1411 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1411.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1411;

let Coordinate1412 = browser.currentScene.createNode("Coordinate");
Coordinate1412.point = new X3D.MFVec3f([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
coord = Coordinate1412;

geometry = LineSet1410;

HAnimSegment1405ZZZ.children[2] = Shape1409;

HAnimJoint1404YYY.children = new X3D.MFNode();

HAnimJoint1404ZZZ.children[0] = HAnimSegment1405;

let HAnimJoint1413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1413.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1413.name = "r_carpal_interphalangeal_1";
HAnimJoint1413.center = new X3D.SFVec3f([-0.1955,0.8159,0.0464]);
let HAnimSegment1414 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1414.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimSegment1414.name = "r_carpal_distal_phalanx_1";
let TouchSensor1415 = browser.currentScene.createNode("TouchSensor");
TouchSensor1415.description = "HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1";
HAnimSegment1414YYY.children = new X3D.MFNode();

HAnimSegment1414ZZZ.children[0] = TouchSensor1415;

let Transform1416 = browser.currentScene.createNode("Transform");
Transform1416.translation = new X3D.SFVec3f([-0.1955,0.8159,0.0464]);
let Shape1417 = browser.currentScene.createNode("Shape");
Shape1417.USE = "HAnimJointShape";
Transform1416YYY.child = new X3D.undefined();

Transform1416ZZZ.child[0] = Shape1417;

HAnimSegment1414ZZZ.children[1] = Transform1416;

let Shape1418 = browser.currentScene.createNode("Shape");
let LineSet1419 = browser.currentScene.createNode("LineSet");
LineSet1419.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1420 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1420.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1420;

let Coordinate1421 = browser.currentScene.createNode("Coordinate");
Coordinate1421.point = new X3D.MFVec3f([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
coord = Coordinate1421;

geometry = LineSet1419;

HAnimSegment1414ZZZ.children[2] = Shape1418;

let HAnimSite1422 = browser.currentScene.createNode("HAnimSite");
HAnimSite1422.DEF = "hanim_r_carpal_distal_phalanx_1_pt";
HAnimSite1422.name = "r_carpal_distal_phalanx_1_pt";
HAnimSite1422.translation = new X3D.SFVec3f([-0.1869,0.809,0.082]);
let TouchSensor1423 = browser.currentScene.createNode("TouchSensor");
TouchSensor1423.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1422YYY.children = new X3D.MFNode();

HAnimSite1422ZZZ.children[0] = TouchSensor1423;

let Shape1424 = browser.currentScene.createNode("Shape");
Shape1424.USE = "HAnimSiteShape";
HAnimSite1422ZZZ.children[1] = Shape1424;

HAnimSegment1414ZZZ.children[3] = HAnimSite1422;

HAnimJoint1413YYY.children = new X3D.MFNode();

HAnimJoint1413ZZZ.children[0] = HAnimSegment1414;

HAnimJoint1404ZZZ.children[1] = HAnimJoint1413;

HAnimJoint1395ZZZ.children[1] = HAnimJoint1404;

HAnimJoint1337ZZZ.children[1] = HAnimJoint1395;

let HAnimJoint1425 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1425.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1425.name = "r_carpometacarpal_2";
HAnimJoint1425.center = new X3D.SFVec3f([-0.1983,0.8024,-0.028]);
let HAnimSegment1426 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1426.DEF = "hanim_r_metacarpal_2";
HAnimSegment1426.name = "r_metacarpal_2";
let TouchSensor1427 = browser.currentScene.createNode("TouchSensor");
TouchSensor1427.description = "HAnimJoint r_index0, HAnimSegment r_metacarpal_2";
HAnimSegment1426YYY.children = new X3D.MFNode();

HAnimSegment1426ZZZ.children[0] = TouchSensor1427;

let Transform1428 = browser.currentScene.createNode("Transform");
Transform1428.translation = new X3D.SFVec3f([-0.1983,0.8024,-0.028]);
let Shape1429 = browser.currentScene.createNode("Shape");
Shape1429.USE = "HAnimJointShape";
Transform1428YYY.child = new X3D.undefined();

Transform1428ZZZ.child[0] = Shape1429;

HAnimSegment1426ZZZ.children[1] = Transform1428;

let Shape1430 = browser.currentScene.createNode("Shape");
let LineSet1431 = browser.currentScene.createNode("LineSet");
LineSet1431.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1432 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1432.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1432;

let Coordinate1433 = browser.currentScene.createNode("Coordinate");
Coordinate1433.point = new X3D.MFVec3f([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
coord = Coordinate1433;

geometry = LineSet1431;

HAnimSegment1426ZZZ.children[2] = Shape1430;

HAnimJoint1425YYY.children = new X3D.MFNode();

HAnimJoint1425ZZZ.children[0] = HAnimSegment1426;

let HAnimJoint1434 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1434.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1434.name = "r_metacarpophalangeal_2";
HAnimJoint1434.center = new X3D.SFVec3f([-0.1983,0.7815,-0.028]);
let HAnimSegment1435 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1435.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment1435.name = "r_carpal_proximal_phalanx_2";
let TouchSensor1436 = browser.currentScene.createNode("TouchSensor");
TouchSensor1436.description = "HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2";
HAnimSegment1435YYY.children = new X3D.MFNode();

HAnimSegment1435ZZZ.children[0] = TouchSensor1436;

let Transform1437 = browser.currentScene.createNode("Transform");
Transform1437.translation = new X3D.SFVec3f([-0.1983,0.7815,-0.028]);
let Shape1438 = browser.currentScene.createNode("Shape");
Shape1438.USE = "HAnimJointShape";
Transform1437YYY.child = new X3D.undefined();

Transform1437ZZZ.child[0] = Shape1438;

HAnimSegment1435ZZZ.children[1] = Transform1437;

let Shape1439 = browser.currentScene.createNode("Shape");
let LineSet1440 = browser.currentScene.createNode("LineSet");
LineSet1440.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1441 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1441.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1441;

let Coordinate1442 = browser.currentScene.createNode("Coordinate");
Coordinate1442.point = new X3D.MFVec3f([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
coord = Coordinate1442;

geometry = LineSet1440;

HAnimSegment1435ZZZ.children[2] = Shape1439;

HAnimJoint1434YYY.children = new X3D.MFNode();

HAnimJoint1434ZZZ.children[0] = HAnimSegment1435;

let HAnimJoint1443 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1443.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1443.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1443.center = new X3D.SFVec3f([-0.2017,0.7363,-0.0248]);
let HAnimSegment1444 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1444.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment1444.name = "r_carpal_middle_phalanx_2";
let TouchSensor1445 = browser.currentScene.createNode("TouchSensor");
TouchSensor1445.description = "HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2";
HAnimSegment1444YYY.children = new X3D.MFNode();

HAnimSegment1444ZZZ.children[0] = TouchSensor1445;

let Transform1446 = browser.currentScene.createNode("Transform");
Transform1446.translation = new X3D.SFVec3f([-0.2017,0.7363,-0.0248]);
let Shape1447 = browser.currentScene.createNode("Shape");
Shape1447.USE = "HAnimJointShape";
Transform1446YYY.child = new X3D.undefined();

Transform1446ZZZ.child[0] = Shape1447;

HAnimSegment1444ZZZ.children[1] = Transform1446;

let Shape1448 = browser.currentScene.createNode("Shape");
let LineSet1449 = browser.currentScene.createNode("LineSet");
LineSet1449.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1450 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1450.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1450;

let Coordinate1451 = browser.currentScene.createNode("Coordinate");
Coordinate1451.point = new X3D.MFVec3f([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
coord = Coordinate1451;

geometry = LineSet1449;

HAnimSegment1444ZZZ.children[2] = Shape1448;

HAnimJoint1443YYY.children = new X3D.MFNode();

HAnimJoint1443ZZZ.children[0] = HAnimSegment1444;

let HAnimJoint1452 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1452.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1452.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1452.center = new X3D.SFVec3f([-0.2028,0.7139,-0.0236]);
let HAnimSegment1453 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1453.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimSegment1453.name = "r_carpal_distal_phalanx_2";
let TouchSensor1454 = browser.currentScene.createNode("TouchSensor");
TouchSensor1454.description = "HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2";
HAnimSegment1453YYY.children = new X3D.MFNode();

HAnimSegment1453ZZZ.children[0] = TouchSensor1454;

let Transform1455 = browser.currentScene.createNode("Transform");
Transform1455.translation = new X3D.SFVec3f([-0.2028,0.7139,-0.0236]);
let Shape1456 = browser.currentScene.createNode("Shape");
Shape1456.USE = "HAnimJointShape";
Transform1455YYY.child = new X3D.undefined();

Transform1455ZZZ.child[0] = Shape1456;

HAnimSegment1453ZZZ.children[1] = Transform1455;

let Shape1457 = browser.currentScene.createNode("Shape");
let LineSet1458 = browser.currentScene.createNode("LineSet");
LineSet1458.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1459 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1459.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1459;

let Coordinate1460 = browser.currentScene.createNode("Coordinate");
Coordinate1460.point = new X3D.MFVec3f([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
coord = Coordinate1460;

geometry = LineSet1458;

HAnimSegment1453ZZZ.children[2] = Shape1457;

let Shape1461 = browser.currentScene.createNode("Shape");
let LineSet1462 = browser.currentScene.createNode("LineSet");
LineSet1462.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1463 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1463.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1463;

let Coordinate1464 = browser.currentScene.createNode("Coordinate");
Coordinate1464.point = new X3D.MFVec3f([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
coord = Coordinate1464;

geometry = LineSet1462;

HAnimSegment1453ZZZ.children[3] = Shape1461;

let HAnimSite1465 = browser.currentScene.createNode("HAnimSite");
HAnimSite1465.DEF = "hanim_r_carpal_distal_phalanx_2_pt";
HAnimSite1465.name = "r_carpal_distal_phalanx_2_pt";
HAnimSite1465.translation = new X3D.SFVec3f([-0.198,0.6883,-0.018]);
let TouchSensor1466 = browser.currentScene.createNode("TouchSensor");
TouchSensor1466.description = "HAnimSite r_index_distal_tip";
HAnimSite1465YYY.children = new X3D.MFNode();

HAnimSite1465ZZZ.children[0] = TouchSensor1466;

let Shape1467 = browser.currentScene.createNode("Shape");
Shape1467.USE = "HAnimSiteShape";
HAnimSite1465ZZZ.children[1] = Shape1467;

HAnimSegment1453ZZZ.children[4] = HAnimSite1465;

let HAnimSite1468 = browser.currentScene.createNode("HAnimSite");
HAnimSite1468.DEF = "hanim_r_dactylion_pt";
HAnimSite1468.name = "r_dactylion_pt";
HAnimSite1468.translation = new X3D.SFVec3f([-0.1941,0.6772,-0.0423]);
let TouchSensor1469 = browser.currentScene.createNode("TouchSensor");
TouchSensor1469.description = "HAnimSite r_dactylion_pt";
HAnimSite1468YYY.children = new X3D.MFNode();

HAnimSite1468ZZZ.children[0] = TouchSensor1469;

let Shape1470 = browser.currentScene.createNode("Shape");
Shape1470.USE = "HAnimSiteShape";
HAnimSite1468ZZZ.children[1] = Shape1470;

HAnimSegment1453ZZZ.children[5] = HAnimSite1468;

HAnimJoint1452YYY.children = new X3D.MFNode();

HAnimJoint1452ZZZ.children[0] = HAnimSegment1453;

HAnimJoint1443ZZZ.children[1] = HAnimJoint1452;

HAnimJoint1434ZZZ.children[1] = HAnimJoint1443;

HAnimJoint1425ZZZ.children[1] = HAnimJoint1434;

HAnimJoint1337ZZZ.children[2] = HAnimJoint1425;

let HAnimJoint1471 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1471.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1471.name = "r_carpometacarpal_3";
HAnimJoint1471.center = new X3D.SFVec3f([-0.1987,0.8029,-0.053]);
let HAnimSegment1472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1472.DEF = "hanim_r_metacarpal_3";
HAnimSegment1472.name = "r_metacarpal_3";
let TouchSensor1473 = browser.currentScene.createNode("TouchSensor");
TouchSensor1473.description = "HAnimJoint r_middle0, HAnimSegment r_metacarpal_3";
HAnimSegment1472YYY.children = new X3D.MFNode();

HAnimSegment1472ZZZ.children[0] = TouchSensor1473;

let Transform1474 = browser.currentScene.createNode("Transform");
Transform1474.translation = new X3D.SFVec3f([-0.1987,0.8029,-0.053]);
let Shape1475 = browser.currentScene.createNode("Shape");
Shape1475.USE = "HAnimJointShape";
Transform1474YYY.child = new X3D.undefined();

Transform1474ZZZ.child[0] = Shape1475;

HAnimSegment1472ZZZ.children[1] = Transform1474;

let Shape1476 = browser.currentScene.createNode("Shape");
let LineSet1477 = browser.currentScene.createNode("LineSet");
LineSet1477.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1478 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1478.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1478;

let Coordinate1479 = browser.currentScene.createNode("Coordinate");
Coordinate1479.point = new X3D.MFVec3f([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
coord = Coordinate1479;

geometry = LineSet1477;

HAnimSegment1472ZZZ.children[2] = Shape1476;

HAnimJoint1471YYY.children = new X3D.MFNode();

HAnimJoint1471ZZZ.children[0] = HAnimSegment1472;

let HAnimJoint1480 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1480.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1480.name = "r_metacarpophalangeal_3";
HAnimJoint1480.center = new X3D.SFVec3f([-0.1987,0.7818,-0.053]);
let HAnimSegment1481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1481.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment1481.name = "r_carpal_proximal_phalanx_3";
let TouchSensor1482 = browser.currentScene.createNode("TouchSensor");
TouchSensor1482.description = "HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3";
HAnimSegment1481YYY.children = new X3D.MFNode();

HAnimSegment1481ZZZ.children[0] = TouchSensor1482;

let Transform1483 = browser.currentScene.createNode("Transform");
Transform1483.translation = new X3D.SFVec3f([-0.1987,0.7818,-0.053]);
let Shape1484 = browser.currentScene.createNode("Shape");
Shape1484.USE = "HAnimJointShape";
Transform1483YYY.child = new X3D.undefined();

Transform1483ZZZ.child[0] = Shape1484;

HAnimSegment1481ZZZ.children[1] = Transform1483;

let Shape1485 = browser.currentScene.createNode("Shape");
let LineSet1486 = browser.currentScene.createNode("LineSet");
LineSet1486.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1487 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1487.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1487;

let Coordinate1488 = browser.currentScene.createNode("Coordinate");
Coordinate1488.point = new X3D.MFVec3f([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
coord = Coordinate1488;

geometry = LineSet1486;

HAnimSegment1481ZZZ.children[2] = Shape1485;

HAnimJoint1480YYY.children = new X3D.MFNode();

HAnimJoint1480ZZZ.children[0] = HAnimSegment1481;

let HAnimJoint1489 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1489.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1489.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1489.center = new X3D.SFVec3f([-0.2013,0.7273,-0.0503]);
let HAnimSegment1490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1490.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment1490.name = "r_carpal_middle_phalanx_3";
let TouchSensor1491 = browser.currentScene.createNode("TouchSensor");
TouchSensor1491.description = "HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3";
HAnimSegment1490YYY.children = new X3D.MFNode();

HAnimSegment1490ZZZ.children[0] = TouchSensor1491;

let Transform1492 = browser.currentScene.createNode("Transform");
Transform1492.translation = new X3D.SFVec3f([-0.2013,0.7273,-0.0503]);
let Shape1493 = browser.currentScene.createNode("Shape");
Shape1493.USE = "HAnimJointShape";
Transform1492YYY.child = new X3D.undefined();

Transform1492ZZZ.child[0] = Shape1493;

HAnimSegment1490ZZZ.children[1] = Transform1492;

let Shape1494 = browser.currentScene.createNode("Shape");
let LineSet1495 = browser.currentScene.createNode("LineSet");
LineSet1495.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1496 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1496.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1496;

let Coordinate1497 = browser.currentScene.createNode("Coordinate");
Coordinate1497.point = new X3D.MFVec3f([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
coord = Coordinate1497;

geometry = LineSet1495;

HAnimSegment1490ZZZ.children[2] = Shape1494;

HAnimJoint1489YYY.children = new X3D.MFNode();

HAnimJoint1489ZZZ.children[0] = HAnimSegment1490;

let HAnimJoint1498 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1498.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1498.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1498.center = new X3D.SFVec3f([-0.2026,0.7011,-0.0494]);
let HAnimSegment1499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1499.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimSegment1499.name = "r_carpal_distal_phalanx_3";
let TouchSensor1500 = browser.currentScene.createNode("TouchSensor");
TouchSensor1500.description = "HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3";
HAnimSegment1499YYY.children = new X3D.MFNode();

HAnimSegment1499ZZZ.children[0] = TouchSensor1500;

let Transform1501 = browser.currentScene.createNode("Transform");
Transform1501.translation = new X3D.SFVec3f([-0.2026,0.7011,-0.0494]);
let Shape1502 = browser.currentScene.createNode("Shape");
Shape1502.USE = "HAnimJointShape";
Transform1501YYY.child = new X3D.undefined();

Transform1501ZZZ.child[0] = Shape1502;

HAnimSegment1499ZZZ.children[1] = Transform1501;

let Shape1503 = browser.currentScene.createNode("Shape");
let LineSet1504 = browser.currentScene.createNode("LineSet");
LineSet1504.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1505 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1505.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1505;

let Coordinate1506 = browser.currentScene.createNode("Coordinate");
Coordinate1506.point = new X3D.MFVec3f([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
coord = Coordinate1506;

geometry = LineSet1504;

HAnimSegment1499ZZZ.children[2] = Shape1503;

let HAnimSite1507 = browser.currentScene.createNode("HAnimSite");
HAnimSite1507.DEF = "hanim_r_carpal_distal_phalanx_3_pt";
HAnimSite1507.name = "r_carpal_distal_phalanx_3_pt";
HAnimSite1507.translation = new X3D.SFVec3f([-0.1969,0.6758,-0.0427]);
let TouchSensor1508 = browser.currentScene.createNode("TouchSensor");
TouchSensor1508.description = "HAnimSite r_middle_distal_tip";
HAnimSite1507YYY.children = new X3D.MFNode();

HAnimSite1507ZZZ.children[0] = TouchSensor1508;

let Shape1509 = browser.currentScene.createNode("Shape");
Shape1509.USE = "HAnimSiteShape";
HAnimSite1507ZZZ.children[1] = Shape1509;

HAnimSegment1499ZZZ.children[3] = HAnimSite1507;

HAnimJoint1498YYY.children = new X3D.MFNode();

HAnimJoint1498ZZZ.children[0] = HAnimSegment1499;

HAnimJoint1489ZZZ.children[1] = HAnimJoint1498;

HAnimJoint1480ZZZ.children[1] = HAnimJoint1489;

HAnimJoint1471ZZZ.children[1] = HAnimJoint1480;

HAnimJoint1337ZZZ.children[3] = HAnimJoint1471;

let HAnimJoint1510 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1510.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1510.name = "r_carpometacarpal_4";
HAnimJoint1510.center = new X3D.SFVec3f([-0.1956,0.8019,-0.0794]);
let HAnimSegment1511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1511.DEF = "hanim_r_metacarpal_4";
HAnimSegment1511.name = "r_metacarpal_4";
let TouchSensor1512 = browser.currentScene.createNode("TouchSensor");
TouchSensor1512.description = "HAnimJoint r_ring0, HAnimSegment r_metacarpal_4";
HAnimSegment1511YYY.children = new X3D.MFNode();

HAnimSegment1511ZZZ.children[0] = TouchSensor1512;

let Transform1513 = browser.currentScene.createNode("Transform");
Transform1513.translation = new X3D.SFVec3f([-0.1956,0.8019,-0.0794]);
let Shape1514 = browser.currentScene.createNode("Shape");
Shape1514.USE = "HAnimJointShape";
Transform1513YYY.child = new X3D.undefined();

Transform1513ZZZ.child[0] = Shape1514;

HAnimSegment1511ZZZ.children[1] = Transform1513;

let Shape1515 = browser.currentScene.createNode("Shape");
let LineSet1516 = browser.currentScene.createNode("LineSet");
LineSet1516.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1517 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1517.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1517;

let Coordinate1518 = browser.currentScene.createNode("Coordinate");
Coordinate1518.point = new X3D.MFVec3f([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
coord = Coordinate1518;

geometry = LineSet1516;

HAnimSegment1511ZZZ.children[2] = Shape1515;

HAnimJoint1510YYY.children = new X3D.MFNode();

HAnimJoint1510ZZZ.children[0] = HAnimSegment1511;

let HAnimJoint1519 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1519.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1519.name = "r_metacarpophalangeal_4";
HAnimJoint1519.center = new X3D.SFVec3f([-0.1956,0.7815,-0.0794]);
let HAnimSegment1520 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1520.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment1520.name = "r_carpal_proximal_phalanx_4";
let TouchSensor1521 = browser.currentScene.createNode("TouchSensor");
TouchSensor1521.description = "HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4";
HAnimSegment1520YYY.children = new X3D.MFNode();

HAnimSegment1520ZZZ.children[0] = TouchSensor1521;

let Transform1522 = browser.currentScene.createNode("Transform");
Transform1522.translation = new X3D.SFVec3f([-0.1956,0.7815,-0.0794]);
let Shape1523 = browser.currentScene.createNode("Shape");
Shape1523.USE = "HAnimJointShape";
Transform1522YYY.child = new X3D.undefined();

Transform1522ZZZ.child[0] = Shape1523;

HAnimSegment1520ZZZ.children[1] = Transform1522;

let Shape1524 = browser.currentScene.createNode("Shape");
let LineSet1525 = browser.currentScene.createNode("LineSet");
LineSet1525.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1526 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1526.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1526;

let Coordinate1527 = browser.currentScene.createNode("Coordinate");
Coordinate1527.point = new X3D.MFVec3f([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
coord = Coordinate1527;

geometry = LineSet1525;

HAnimSegment1520ZZZ.children[2] = Shape1524;

HAnimJoint1519YYY.children = new X3D.MFNode();

HAnimJoint1519ZZZ.children[0] = HAnimSegment1520;

let HAnimJoint1528 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1528.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1528.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1528.center = new X3D.SFVec3f([-0.1973,0.7287,-0.0777]);
let HAnimSegment1529 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1529.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment1529.name = "r_carpal_middle_phalanx_4";
let TouchSensor1530 = browser.currentScene.createNode("TouchSensor");
TouchSensor1530.description = "HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4";
HAnimSegment1529YYY.children = new X3D.MFNode();

HAnimSegment1529ZZZ.children[0] = TouchSensor1530;

let Transform1531 = browser.currentScene.createNode("Transform");
Transform1531.translation = new X3D.SFVec3f([-0.1973,0.7287,-0.0777]);
let Shape1532 = browser.currentScene.createNode("Shape");
Shape1532.USE = "HAnimJointShape";
Transform1531YYY.child = new X3D.undefined();

Transform1531ZZZ.child[0] = Shape1532;

HAnimSegment1529ZZZ.children[1] = Transform1531;

let Shape1533 = browser.currentScene.createNode("Shape");
let LineSet1534 = browser.currentScene.createNode("LineSet");
LineSet1534.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1535 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1535.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1535;

let Coordinate1536 = browser.currentScene.createNode("Coordinate");
Coordinate1536.point = new X3D.MFVec3f([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
coord = Coordinate1536;

geometry = LineSet1534;

HAnimSegment1529ZZZ.children[2] = Shape1533;

HAnimJoint1528YYY.children = new X3D.MFNode();

HAnimJoint1528ZZZ.children[0] = HAnimSegment1529;

let HAnimJoint1537 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1537.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1537.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1537.center = new X3D.SFVec3f([-0.1983,0.7045,-0.0767]);
let HAnimSegment1538 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1538.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimSegment1538.name = "r_carpal_distal_phalanx_4";
let TouchSensor1539 = browser.currentScene.createNode("TouchSensor");
TouchSensor1539.description = "HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4";
HAnimSegment1538YYY.children = new X3D.MFNode();

HAnimSegment1538ZZZ.children[0] = TouchSensor1539;

let Transform1540 = browser.currentScene.createNode("Transform");
Transform1540.translation = new X3D.SFVec3f([-0.1983,0.7045,-0.0767]);
let Shape1541 = browser.currentScene.createNode("Shape");
Shape1541.USE = "HAnimJointShape";
Transform1540YYY.child = new X3D.undefined();

Transform1540ZZZ.child[0] = Shape1541;

HAnimSegment1538ZZZ.children[1] = Transform1540;

let Shape1542 = browser.currentScene.createNode("Shape");
let LineSet1543 = browser.currentScene.createNode("LineSet");
LineSet1543.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1544 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1544.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1544;

let Coordinate1545 = browser.currentScene.createNode("Coordinate");
Coordinate1545.point = new X3D.MFVec3f([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
coord = Coordinate1545;

geometry = LineSet1543;

HAnimSegment1538ZZZ.children[2] = Shape1542;

let HAnimSite1546 = browser.currentScene.createNode("HAnimSite");
HAnimSite1546.DEF = "hanim_r_carpal_distal_phalanx_4_pt";
HAnimSite1546.name = "r_carpal_distal_phalanx_4_pt";
HAnimSite1546.translation = new X3D.SFVec3f([-0.1934,0.6778,-0.0693]);
let TouchSensor1547 = browser.currentScene.createNode("TouchSensor");
TouchSensor1547.description = "HAnimSite r_ring_distal_tip";
HAnimSite1546YYY.children = new X3D.MFNode();

HAnimSite1546ZZZ.children[0] = TouchSensor1547;

let Shape1548 = browser.currentScene.createNode("Shape");
Shape1548.USE = "HAnimSiteShape";
HAnimSite1546ZZZ.children[1] = Shape1548;

HAnimSegment1538ZZZ.children[3] = HAnimSite1546;

HAnimJoint1537YYY.children = new X3D.MFNode();

HAnimJoint1537ZZZ.children[0] = HAnimSegment1538;

HAnimJoint1528ZZZ.children[1] = HAnimJoint1537;

HAnimJoint1519ZZZ.children[1] = HAnimJoint1528;

HAnimJoint1510ZZZ.children[1] = HAnimJoint1519;

HAnimJoint1337ZZZ.children[4] = HAnimJoint1510;

let HAnimJoint1549 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1549.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1549.name = "r_carpometacarpal_5";
HAnimJoint1549.center = new X3D.SFVec3f([-0.1925,0.8066,-0.1036]);
let HAnimSegment1550 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1550.DEF = "hanim_r_metacarpal_5";
HAnimSegment1550.name = "r_metacarpal_5";
let TouchSensor1551 = browser.currentScene.createNode("TouchSensor");
TouchSensor1551.description = "HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5";
HAnimSegment1550YYY.children = new X3D.MFNode();

HAnimSegment1550ZZZ.children[0] = TouchSensor1551;

let Transform1552 = browser.currentScene.createNode("Transform");
Transform1552.translation = new X3D.SFVec3f([-0.1925,0.8066,-0.1036]);
let Shape1553 = browser.currentScene.createNode("Shape");
Shape1553.USE = "HAnimJointShape";
Transform1552YYY.child = new X3D.undefined();

Transform1552ZZZ.child[0] = Shape1553;

HAnimSegment1550ZZZ.children[1] = Transform1552;

let Shape1554 = browser.currentScene.createNode("Shape");
let LineSet1555 = browser.currentScene.createNode("LineSet");
LineSet1555.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1556 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1556.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1556;

let Coordinate1557 = browser.currentScene.createNode("Coordinate");
Coordinate1557.point = new X3D.MFVec3f([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
coord = Coordinate1557;

geometry = LineSet1555;

HAnimSegment1550ZZZ.children[2] = Shape1554;

HAnimJoint1549YYY.children = new X3D.MFNode();

HAnimJoint1549ZZZ.children[0] = HAnimSegment1550;

let HAnimJoint1558 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1558.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1558.name = "r_metacarpophalangeal_5";
HAnimJoint1558.center = new X3D.SFVec3f([-0.1925,0.7866,-0.1036]);
let HAnimSegment1559 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1559.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment1559.name = "r_carpal_proximal_phalanx_5";
let TouchSensor1560 = browser.currentScene.createNode("TouchSensor");
TouchSensor1560.description = "HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5";
HAnimSegment1559YYY.children = new X3D.MFNode();

HAnimSegment1559ZZZ.children[0] = TouchSensor1560;

let Transform1561 = browser.currentScene.createNode("Transform");
Transform1561.translation = new X3D.SFVec3f([-0.1925,0.7866,-0.1036]);
let Shape1562 = browser.currentScene.createNode("Shape");
Shape1562.USE = "HAnimJointShape";
Transform1561YYY.child = new X3D.undefined();

Transform1561ZZZ.child[0] = Shape1562;

HAnimSegment1559ZZZ.children[1] = Transform1561;

let Shape1563 = browser.currentScene.createNode("Shape");
let LineSet1564 = browser.currentScene.createNode("LineSet");
LineSet1564.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1565 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1565.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1565;

let Coordinate1566 = browser.currentScene.createNode("Coordinate");
Coordinate1566.point = new X3D.MFVec3f([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
coord = Coordinate1566;

geometry = LineSet1564;

HAnimSegment1559ZZZ.children[2] = Shape1563;

HAnimJoint1558YYY.children = new X3D.MFNode();

HAnimJoint1558ZZZ.children[0] = HAnimSegment1559;

let HAnimJoint1567 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1567.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1567.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1567.center = new X3D.SFVec3f([-0.1938,0.7452,-0.1024]);
let HAnimSegment1568 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1568.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimSegment1568.name = "r_carpal_middle_phalanx_5";
let TouchSensor1569 = browser.currentScene.createNode("TouchSensor");
TouchSensor1569.description = "HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5";
HAnimSegment1568YYY.children = new X3D.MFNode();

HAnimSegment1568ZZZ.children[0] = TouchSensor1569;

let Transform1570 = browser.currentScene.createNode("Transform");
Transform1570.translation = new X3D.SFVec3f([-0.1938,0.7452,-0.1024]);
let Shape1571 = browser.currentScene.createNode("Shape");
Shape1571.USE = "HAnimJointShape";
Transform1570YYY.child = new X3D.undefined();

Transform1570ZZZ.child[0] = Shape1571;

HAnimSegment1568ZZZ.children[1] = Transform1570;

let Shape1572 = browser.currentScene.createNode("Shape");
let LineSet1573 = browser.currentScene.createNode("LineSet");
LineSet1573.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1574 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1574.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1574;

let Coordinate1575 = browser.currentScene.createNode("Coordinate");
Coordinate1575.point = new X3D.MFVec3f([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
coord = Coordinate1575;

geometry = LineSet1573;

HAnimSegment1568ZZZ.children[2] = Shape1572;

HAnimJoint1567YYY.children = new X3D.MFNode();

HAnimJoint1567ZZZ.children[0] = HAnimSegment1568;

let HAnimJoint1576 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1576.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1576.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1576.center = new X3D.SFVec3f([-0.1948,0.7277,-0.1017]);
let HAnimSegment1577 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1577.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimSegment1577.name = "r_carpal_distal_phalanx_5";
let TouchSensor1578 = browser.currentScene.createNode("TouchSensor");
TouchSensor1578.description = "HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5";
HAnimSegment1577YYY.children = new X3D.MFNode();

HAnimSegment1577ZZZ.children[0] = TouchSensor1578;

let Transform1579 = browser.currentScene.createNode("Transform");
Transform1579.translation = new X3D.SFVec3f([-0.1948,0.7277,-0.1017]);
let Shape1580 = browser.currentScene.createNode("Shape");
Shape1580.USE = "HAnimJointShape";
Transform1579YYY.child = new X3D.undefined();

Transform1579ZZZ.child[0] = Shape1580;

HAnimSegment1577ZZZ.children[1] = Transform1579;

let Shape1581 = browser.currentScene.createNode("Shape");
let LineSet1582 = browser.currentScene.createNode("LineSet");
LineSet1582.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1583 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1583.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1583;

let Coordinate1584 = browser.currentScene.createNode("Coordinate");
Coordinate1584.point = new X3D.MFVec3f([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
coord = Coordinate1584;

geometry = LineSet1582;

HAnimSegment1577ZZZ.children[2] = Shape1581;

let HAnimSite1585 = browser.currentScene.createNode("HAnimSite");
HAnimSite1585.DEF = "hanim_r_carpal_distal_phalanx_5_pt";
HAnimSite1585.name = "r_carpal_distal_phalanx_5_pt";
HAnimSite1585.translation = new X3D.SFVec3f([-0.1938,0.7035,-0.0949]);
let TouchSensor1586 = browser.currentScene.createNode("TouchSensor");
TouchSensor1586.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1585YYY.children = new X3D.MFNode();

HAnimSite1585ZZZ.children[0] = TouchSensor1586;

let Shape1587 = browser.currentScene.createNode("Shape");
Shape1587.USE = "HAnimSiteShape";
HAnimSite1585ZZZ.children[1] = Shape1587;

HAnimSegment1577ZZZ.children[3] = HAnimSite1585;

HAnimJoint1576YYY.children = new X3D.MFNode();

HAnimJoint1576ZZZ.children[0] = HAnimSegment1577;

HAnimJoint1567ZZZ.children[1] = HAnimJoint1576;

HAnimJoint1558ZZZ.children[1] = HAnimJoint1567;

HAnimJoint1549ZZZ.children[1] = HAnimJoint1558;

HAnimJoint1337ZZZ.children[5] = HAnimJoint1549;

HAnimJoint1300ZZZ.children[1] = HAnimJoint1337;

HAnimJoint1284ZZZ.children[1] = HAnimJoint1300;

HAnimJoint1275ZZZ.children[1] = HAnimJoint1284;

HAnimJoint1238ZZZ.children[1] = HAnimJoint1275;

HAnimJoint600ZZZ.children[3] = HAnimJoint1238;

HAnimJoint591ZZZ.children[1] = HAnimJoint600;

HAnimJoint582ZZZ.children[1] = HAnimJoint591;

HAnimJoint573ZZZ.children[1] = HAnimJoint582;

HAnimJoint564ZZZ.children[1] = HAnimJoint573;

HAnimJoint555ZZZ.children[1] = HAnimJoint564;

HAnimJoint546ZZZ.children[1] = HAnimJoint555;

HAnimJoint537ZZZ.children[1] = HAnimJoint546;

HAnimJoint514ZZZ.children[1] = HAnimJoint537;

HAnimJoint498ZZZ.children[1] = HAnimJoint514;

HAnimJoint489ZZZ.children[1] = HAnimJoint498;

HAnimJoint480ZZZ.children[1] = HAnimJoint489;

HAnimJoint471ZZZ.children[1] = HAnimJoint480;

HAnimJoint441ZZZ.children[1] = HAnimJoint471;

HAnimJoint432ZZZ.children[1] = HAnimJoint441;

HAnimJoint423ZZZ.children[1] = HAnimJoint432;

HAnimJoint400ZZZ.children[1] = HAnimJoint423;

HAnimJoint50ZZZ.children[2] = HAnimJoint400;

joints[1] = HAnimJoint50;

let HAnimJoint1588 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1588.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint1588;

let HAnimJoint1589 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1589.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint1589;

let HAnimJoint1590 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1590.USE = "hanim_vl5";
joints[4] = HAnimJoint1590;

let HAnimJoint1591 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1591.USE = "hanim_vl4";
joints[5] = HAnimJoint1591;

let HAnimJoint1592 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1592.USE = "hanim_vl3";
joints[6] = HAnimJoint1592;

let HAnimJoint1593 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1593.USE = "hanim_vl2";
joints[7] = HAnimJoint1593;

let HAnimJoint1594 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1594.USE = "hanim_vl1";
joints[8] = HAnimJoint1594;

let HAnimJoint1595 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1595.USE = "hanim_vt12";
joints[9] = HAnimJoint1595;

let HAnimJoint1596 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1596.USE = "hanim_vt11";
joints[10] = HAnimJoint1596;

let HAnimJoint1597 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1597.USE = "hanim_vt10";
joints[11] = HAnimJoint1597;

let HAnimJoint1598 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1598.USE = "hanim_vt9";
joints[12] = HAnimJoint1598;

let HAnimJoint1599 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1599.USE = "hanim_vt8";
joints[13] = HAnimJoint1599;

let HAnimJoint1600 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1600.USE = "hanim_vt7";
joints[14] = HAnimJoint1600;

let HAnimJoint1601 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_vt6";
joints[15] = HAnimJoint1601;

let HAnimJoint1602 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_vt5";
joints[16] = HAnimJoint1602;

let HAnimJoint1603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_vt4";
joints[17] = HAnimJoint1603;

let HAnimJoint1604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_vt3";
joints[18] = HAnimJoint1604;

let HAnimJoint1605 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_vt2";
joints[19] = HAnimJoint1605;

let HAnimJoint1606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_vt1";
joints[20] = HAnimJoint1606;

let HAnimJoint1607 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_vc7";
joints[21] = HAnimJoint1607;

let HAnimJoint1608 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_vc6";
joints[22] = HAnimJoint1608;

let HAnimJoint1609 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_vc5";
joints[23] = HAnimJoint1609;

let HAnimJoint1610 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_vc4";
joints[24] = HAnimJoint1610;

let HAnimJoint1611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_vc3";
joints[25] = HAnimJoint1611;

let HAnimJoint1612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_vc2";
joints[26] = HAnimJoint1612;

let HAnimJoint1613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_vc1";
joints[27] = HAnimJoint1613;

let HAnimJoint1614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_skullbase";
joints[28] = HAnimJoint1614;

let HAnimJoint1615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_temporomandibular";
joints[29] = HAnimJoint1615;

let HAnimJoint1616 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_acromioclavicular";
joints[30] = HAnimJoint1616;

let HAnimJoint1617 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_r_acromioclavicular";
joints[31] = HAnimJoint1617;

let HAnimJoint1618 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[32] = HAnimJoint1618;

let HAnimJoint1619 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_r_carpal_distal_interphalangeal_2";
joints[33] = HAnimJoint1619;

let HAnimJoint1620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_carpal_distal_interphalangeal_3";
joints[34] = HAnimJoint1620;

let HAnimJoint1621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_r_carpal_distal_interphalangeal_3";
joints[35] = HAnimJoint1621;

let HAnimJoint1622 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_carpal_distal_interphalangeal_4";
joints[36] = HAnimJoint1622;

let HAnimJoint1623 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_r_carpal_distal_interphalangeal_4";
joints[37] = HAnimJoint1623;

let HAnimJoint1624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_carpal_distal_interphalangeal_5";
joints[38] = HAnimJoint1624;

let HAnimJoint1625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_r_carpal_distal_interphalangeal_5";
joints[39] = HAnimJoint1625;

let HAnimJoint1626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_carpal_interphalangeal_1";
joints[40] = HAnimJoint1626;

let HAnimJoint1627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_r_carpal_interphalangeal_1";
joints[41] = HAnimJoint1627;

let HAnimJoint1628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[42] = HAnimJoint1628;

let HAnimJoint1629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_r_carpal_proximal_interphalangeal_2";
joints[43] = HAnimJoint1629;

let HAnimJoint1630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_carpal_proximal_interphalangeal_3";
joints[44] = HAnimJoint1630;

let HAnimJoint1631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_r_carpal_proximal_interphalangeal_3";
joints[45] = HAnimJoint1631;

let HAnimJoint1632 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_l_carpal_proximal_interphalangeal_4";
joints[46] = HAnimJoint1632;

let HAnimJoint1633 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_r_carpal_proximal_interphalangeal_4";
joints[47] = HAnimJoint1633;

let HAnimJoint1634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_l_carpal_proximal_interphalangeal_5";
joints[48] = HAnimJoint1634;

let HAnimJoint1635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_r_carpal_proximal_interphalangeal_5";
joints[49] = HAnimJoint1635;

let HAnimJoint1636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_l_carpometacarpal_1";
joints[50] = HAnimJoint1636;

let HAnimJoint1637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_r_carpometacarpal_1";
joints[51] = HAnimJoint1637;

let HAnimJoint1638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_l_carpometacarpal_2";
joints[52] = HAnimJoint1638;

let HAnimJoint1639 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_carpometacarpal_2";
joints[53] = HAnimJoint1639;

let HAnimJoint1640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_l_carpometacarpal_3";
joints[54] = HAnimJoint1640;

let HAnimJoint1641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_carpometacarpal_3";
joints[55] = HAnimJoint1641;

let HAnimJoint1642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_l_carpometacarpal_4";
joints[56] = HAnimJoint1642;

let HAnimJoint1643 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_carpometacarpal_4";
joints[57] = HAnimJoint1643;

let HAnimJoint1644 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_l_carpometacarpal_5";
joints[58] = HAnimJoint1644;

let HAnimJoint1645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_carpometacarpal_5";
joints[59] = HAnimJoint1645;

let HAnimJoint1646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_l_elbow";
joints[60] = HAnimJoint1646;

let HAnimJoint1647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_elbow";
joints[61] = HAnimJoint1647;

let HAnimJoint1648 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_l_eyeball_joint";
joints[62] = HAnimJoint1648;

let HAnimJoint1649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_eyeball_joint";
joints[63] = HAnimJoint1649;

let HAnimJoint1650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_l_eyebrow_joint";
joints[64] = HAnimJoint1650;

let HAnimJoint1651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_eyebrow_joint";
joints[65] = HAnimJoint1651;

let HAnimJoint1652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_l_eyelid_joint";
joints[66] = HAnimJoint1652;

let HAnimJoint1653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_eyelid_joint";
joints[67] = HAnimJoint1653;

let HAnimJoint1654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_l_hip";
joints[68] = HAnimJoint1654;

let HAnimJoint1655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_hip";
joints[69] = HAnimJoint1655;

let HAnimJoint1656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_l_knee";
joints[70] = HAnimJoint1656;

let HAnimJoint1657 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_knee";
joints[71] = HAnimJoint1657;

let HAnimJoint1658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_l_metacarpophalangeal_1";
joints[72] = HAnimJoint1658;

let HAnimJoint1659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_r_metacarpophalangeal_1";
joints[73] = HAnimJoint1659;

let HAnimJoint1660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_l_metacarpophalangeal_2";
joints[74] = HAnimJoint1660;

let HAnimJoint1661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_r_metacarpophalangeal_2";
joints[75] = HAnimJoint1661;

let HAnimJoint1662 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_l_metacarpophalangeal_3";
joints[76] = HAnimJoint1662;

let HAnimJoint1663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_r_metacarpophalangeal_3";
joints[77] = HAnimJoint1663;

let HAnimJoint1664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_l_metacarpophalangeal_4";
joints[78] = HAnimJoint1664;

let HAnimJoint1665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_r_metacarpophalangeal_4";
joints[79] = HAnimJoint1665;

let HAnimJoint1666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_l_metacarpophalangeal_5";
joints[80] = HAnimJoint1666;

let HAnimJoint1667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_r_metacarpophalangeal_5";
joints[81] = HAnimJoint1667;

let HAnimJoint1668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_l_metatarsophalangeal_2";
joints[82] = HAnimJoint1668;

let HAnimJoint1669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_r_metatarsophalangeal_2";
joints[83] = HAnimJoint1669;

let HAnimJoint1670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_l_radiocarpal";
joints[84] = HAnimJoint1670;

let HAnimJoint1671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_r_radiocarpal";
joints[85] = HAnimJoint1671;

let HAnimJoint1672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_l_shoulder";
joints[86] = HAnimJoint1672;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_r_shoulder";
joints[87] = HAnimJoint1673;

let HAnimJoint1674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_l_sternoclavicular";
joints[88] = HAnimJoint1674;

let HAnimJoint1675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_r_sternoclavicular";
joints[89] = HAnimJoint1675;

let HAnimJoint1676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_l_talocrural";
joints[90] = HAnimJoint1676;

let HAnimJoint1677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_r_talocrural";
joints[91] = HAnimJoint1677;

let HAnimJoint1678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_l_tarsal_distal_interphalangeal_2";
joints[92] = HAnimJoint1678;

let HAnimJoint1679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_r_tarsal_distal_interphalangeal_2";
joints[93] = HAnimJoint1679;

let HAnimJoint1680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_l_tarsometatarsal_2";
joints[94] = HAnimJoint1680;

let HAnimJoint1681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_r_tarsometatarsal_2";
joints[95] = HAnimJoint1681;

let HAnimSegment1682 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1682.USE = "hanim_pelvis";
segments[96] = HAnimSegment1682;

let HAnimSegment1683 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1683.USE = "hanim_skull";
segments[97] = HAnimSegment1683;

let HAnimSegment1684 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1684.USE = "hanim_jaw";
segments[98] = HAnimSegment1684;

let HAnimSegment1685 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1685.USE = "hanim_c1";
segments[99] = HAnimSegment1685;

let HAnimSegment1686 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1686.USE = "hanim_c2";
segments[100] = HAnimSegment1686;

let HAnimSegment1687 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1687.USE = "hanim_c3";
segments[101] = HAnimSegment1687;

let HAnimSegment1688 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1688.USE = "hanim_c4";
segments[102] = HAnimSegment1688;

let HAnimSegment1689 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1689.USE = "hanim_c5";
segments[103] = HAnimSegment1689;

let HAnimSegment1690 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1690.USE = "hanim_c6";
segments[104] = HAnimSegment1690;

let HAnimSegment1691 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1691.USE = "hanim_c7";
segments[105] = HAnimSegment1691;

let HAnimSegment1692 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1692.USE = "hanim_t1";
segments[106] = HAnimSegment1692;

let HAnimSegment1693 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1693.USE = "hanim_t2";
segments[107] = HAnimSegment1693;

let HAnimSegment1694 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1694.USE = "hanim_t3";
segments[108] = HAnimSegment1694;

let HAnimSegment1695 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1695.USE = "hanim_t4";
segments[109] = HAnimSegment1695;

let HAnimSegment1696 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1696.USE = "hanim_t5";
segments[110] = HAnimSegment1696;

let HAnimSegment1697 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1697.USE = "hanim_t6";
segments[111] = HAnimSegment1697;

let HAnimSegment1698 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1698.USE = "hanim_t7";
segments[112] = HAnimSegment1698;

let HAnimSegment1699 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1699.USE = "hanim_t8";
segments[113] = HAnimSegment1699;

let HAnimSegment1700 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1700.USE = "hanim_t9";
segments[114] = HAnimSegment1700;

let HAnimSegment1701 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1701.USE = "hanim_t10";
segments[115] = HAnimSegment1701;

let HAnimSegment1702 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1702.USE = "hanim_t11";
segments[116] = HAnimSegment1702;

let HAnimSegment1703 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1703.USE = "hanim_t12";
segments[117] = HAnimSegment1703;

let HAnimSegment1704 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1704.USE = "hanim_l1";
segments[118] = HAnimSegment1704;

let HAnimSegment1705 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1705.USE = "hanim_l2";
segments[119] = HAnimSegment1705;

let HAnimSegment1706 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1706.USE = "hanim_l3";
segments[120] = HAnimSegment1706;

let HAnimSegment1707 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1707.USE = "hanim_l4";
segments[121] = HAnimSegment1707;

let HAnimSegment1708 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1708.USE = "hanim_l5";
segments[122] = HAnimSegment1708;

let HAnimSegment1709 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1709.USE = "hanim_sacrum";
segments[123] = HAnimSegment1709;

let HAnimSegment1710 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1710.USE = "hanim_l_calf";
segments[124] = HAnimSegment1710;

let HAnimSegment1711 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1711.USE = "hanim_r_calf";
segments[125] = HAnimSegment1711;

let HAnimSegment1712 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1712.USE = "hanim_l_carpal";
segments[126] = HAnimSegment1712;

let HAnimSegment1713 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1713.USE = "hanim_r_carpal";
segments[127] = HAnimSegment1713;

let HAnimSegment1714 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1714.USE = "hanim_l_carpal_distal_phalanx_1";
segments[128] = HAnimSegment1714;

let HAnimSegment1715 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1715.USE = "hanim_r_carpal_distal_phalanx_1";
segments[129] = HAnimSegment1715;

let HAnimSegment1716 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1716.USE = "hanim_l_carpal_distal_phalanx_2";
segments[130] = HAnimSegment1716;

let HAnimSegment1717 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1717.USE = "hanim_r_carpal_distal_phalanx_2";
segments[131] = HAnimSegment1717;

let HAnimSegment1718 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1718.USE = "hanim_l_carpal_distal_phalanx_3";
segments[132] = HAnimSegment1718;

let HAnimSegment1719 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1719.USE = "hanim_r_carpal_distal_phalanx_3";
segments[133] = HAnimSegment1719;

let HAnimSegment1720 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1720.USE = "hanim_l_carpal_distal_phalanx_4";
segments[134] = HAnimSegment1720;

let HAnimSegment1721 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1721.USE = "hanim_r_carpal_distal_phalanx_4";
segments[135] = HAnimSegment1721;

let HAnimSegment1722 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1722.USE = "hanim_l_carpal_distal_phalanx_5";
segments[136] = HAnimSegment1722;

let HAnimSegment1723 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1723.USE = "hanim_r_carpal_distal_phalanx_5";
segments[137] = HAnimSegment1723;

let HAnimSegment1724 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1724.USE = "hanim_l_carpal_middle_phalanx_2";
segments[138] = HAnimSegment1724;

let HAnimSegment1725 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1725.USE = "hanim_r_carpal_middle_phalanx_2";
segments[139] = HAnimSegment1725;

let HAnimSegment1726 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1726.USE = "hanim_l_carpal_middle_phalanx_3";
segments[140] = HAnimSegment1726;

let HAnimSegment1727 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1727.USE = "hanim_r_carpal_middle_phalanx_3";
segments[141] = HAnimSegment1727;

let HAnimSegment1728 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1728.USE = "hanim_l_carpal_middle_phalanx_4";
segments[142] = HAnimSegment1728;

let HAnimSegment1729 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1729.USE = "hanim_r_carpal_middle_phalanx_4";
segments[143] = HAnimSegment1729;

let HAnimSegment1730 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1730.USE = "hanim_l_carpal_middle_phalanx_5";
segments[144] = HAnimSegment1730;

let HAnimSegment1731 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1731.USE = "hanim_r_carpal_middle_phalanx_5";
segments[145] = HAnimSegment1731;

let HAnimSegment1732 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1732.USE = "hanim_l_carpal_proximal_phalanx_1";
segments[146] = HAnimSegment1732;

let HAnimSegment1733 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1733.USE = "hanim_r_carpal_proximal_phalanx_1";
segments[147] = HAnimSegment1733;

let HAnimSegment1734 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1734.USE = "hanim_l_carpal_proximal_phalanx_2";
segments[148] = HAnimSegment1734;

let HAnimSegment1735 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1735.USE = "hanim_r_carpal_proximal_phalanx_2";
segments[149] = HAnimSegment1735;

let HAnimSegment1736 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1736.USE = "hanim_l_carpal_proximal_phalanx_3";
segments[150] = HAnimSegment1736;

let HAnimSegment1737 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1737.USE = "hanim_r_carpal_proximal_phalanx_3";
segments[151] = HAnimSegment1737;

let HAnimSegment1738 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1738.USE = "hanim_l_carpal_proximal_phalanx_4";
segments[152] = HAnimSegment1738;

let HAnimSegment1739 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1739.USE = "hanim_r_carpal_proximal_phalanx_4";
segments[153] = HAnimSegment1739;

let HAnimSegment1740 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1740.USE = "hanim_l_carpal_proximal_phalanx_5";
segments[154] = HAnimSegment1740;

let HAnimSegment1741 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1741.USE = "hanim_r_carpal_proximal_phalanx_5";
segments[155] = HAnimSegment1741;

let HAnimSegment1742 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1742.USE = "hanim_l_clavicle";
segments[156] = HAnimSegment1742;

let HAnimSegment1743 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1743.USE = "hanim_r_clavicle";
segments[157] = HAnimSegment1743;

let HAnimSegment1744 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1744.USE = "hanim_l_eyeball";
segments[158] = HAnimSegment1744;

let HAnimSegment1745 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1745.USE = "hanim_r_eyeball";
segments[159] = HAnimSegment1745;

let HAnimSegment1746 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_l_eyebrow";
segments[160] = HAnimSegment1746;

let HAnimSegment1747 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_r_eyebrow";
segments[161] = HAnimSegment1747;

let HAnimSegment1748 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_l_eyelid";
segments[162] = HAnimSegment1748;

let HAnimSegment1749 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_r_eyelid";
segments[163] = HAnimSegment1749;

let HAnimSegment1750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l_forearm";
segments[164] = HAnimSegment1750;

let HAnimSegment1751 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_r_forearm";
segments[165] = HAnimSegment1751;

let HAnimSegment1752 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l_metacarpal_1";
segments[166] = HAnimSegment1752;

let HAnimSegment1753 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_r_metacarpal_1";
segments[167] = HAnimSegment1753;

let HAnimSegment1754 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l_metacarpal_2";
segments[168] = HAnimSegment1754;

let HAnimSegment1755 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_r_metacarpal_2";
segments[169] = HAnimSegment1755;

let HAnimSegment1756 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_metacarpal_3";
segments[170] = HAnimSegment1756;

let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_r_metacarpal_3";
segments[171] = HAnimSegment1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_metacarpal_4";
segments[172] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_r_metacarpal_4";
segments[173] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_metacarpal_5";
segments[174] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_r_metacarpal_5";
segments[175] = HAnimSegment1761;

let HAnimSegment1762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_metatarsal_2";
segments[176] = HAnimSegment1762;

let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_r_metatarsal_2";
segments[177] = HAnimSegment1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_scapula";
segments[178] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_r_scapula";
segments[179] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_talus";
segments[180] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_r_talus";
segments[181] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_tarsal_distal_phalanx_2";
segments[182] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_r_tarsal_distal_phalanx_2";
segments[183] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_tarsal_proximal_phalanx_2";
segments[184] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_r_tarsal_proximal_phalanx_2";
segments[185] = HAnimSegment1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_l_thigh";
segments[186] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_r_thigh";
segments[187] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_l_upperarm";
segments[188] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_r_upperarm";
segments[189] = HAnimSegment1775;

let HAnimSite1776 = browser.currentScene.createNode("HAnimSite");
HAnimSite1776.USE = "hanim_crotch_pt";
viewpoints[190] = HAnimSite1776;

let HAnimSite1777 = browser.currentScene.createNode("HAnimSite");
HAnimSite1777.USE = "hanim_skull_vertex_pt";
viewpoints[191] = HAnimSite1777;

let HAnimSite1778 = browser.currentScene.createNode("HAnimSite");
HAnimSite1778.USE = "hanim_sellion_pt";
viewpoints[192] = HAnimSite1778;

let HAnimSite1779 = browser.currentScene.createNode("HAnimSite");
HAnimSite1779.USE = "hanim_supramenton_pt";
viewpoints[193] = HAnimSite1779;

let HAnimSite1780 = browser.currentScene.createNode("HAnimSite");
HAnimSite1780.USE = "hanim_nuchale_pt";
viewpoints[194] = HAnimSite1780;

let HAnimSite1781 = browser.currentScene.createNode("HAnimSite");
HAnimSite1781.USE = "hanim_suprasternale_pt";
viewpoints[195] = HAnimSite1781;

let HAnimSite1782 = browser.currentScene.createNode("HAnimSite");
HAnimSite1782.USE = "hanim_cervicale_pt";
viewpoints[196] = HAnimSite1782;

let HAnimSite1783 = browser.currentScene.createNode("HAnimSite");
HAnimSite1783.USE = "hanim_substernale_pt";
viewpoints[197] = HAnimSite1783;

let HAnimSite1784 = browser.currentScene.createNode("HAnimSite");
HAnimSite1784.USE = "hanim_rib10_midspine_pt";
viewpoints[198] = HAnimSite1784;

let HAnimSite1785 = browser.currentScene.createNode("HAnimSite");
HAnimSite1785.USE = "hanim_waist_preferred_posterior_pt";
viewpoints[199] = HAnimSite1785;

let HAnimSite1786 = browser.currentScene.createNode("HAnimSite");
HAnimSite1786.USE = "hanim_navel_pt";
viewpoints[200] = HAnimSite1786;

let HAnimSite1787 = browser.currentScene.createNode("HAnimSite");
HAnimSite1787.USE = "hanim_l_acromion_pt";
viewpoints[201] = HAnimSite1787;

let HAnimSite1788 = browser.currentScene.createNode("HAnimSite");
HAnimSite1788.USE = "hanim_r_acromion_pt";
viewpoints[202] = HAnimSite1788;

let HAnimSite1789 = browser.currentScene.createNode("HAnimSite");
HAnimSite1789.USE = "hanim_r_asis_pt";
viewpoints[203] = HAnimSite1789;

let HAnimSite1790 = browser.currentScene.createNode("HAnimSite");
HAnimSite1790.USE = "hanim_l_asis_pt";
viewpoints[204] = HAnimSite1790;

let HAnimSite1791 = browser.currentScene.createNode("HAnimSite");
HAnimSite1791.USE = "hanim_l_axilla_distal_pt";
viewpoints[205] = HAnimSite1791;

let HAnimSite1792 = browser.currentScene.createNode("HAnimSite");
HAnimSite1792.USE = "hanim_r_axilla_distal_pt";
viewpoints[206] = HAnimSite1792;

let HAnimSite1793 = browser.currentScene.createNode("HAnimSite");
HAnimSite1793.USE = "hanim_l_axilla_proximal_pt";
viewpoints[207] = HAnimSite1793;

let HAnimSite1794 = browser.currentScene.createNode("HAnimSite");
HAnimSite1794.USE = "hanim_r_axilla_proximal_pt";
viewpoints[208] = HAnimSite1794;

let HAnimSite1795 = browser.currentScene.createNode("HAnimSite");
HAnimSite1795.USE = "hanim_l_calcaneus_posterior_pt";
viewpoints[209] = HAnimSite1795;

let HAnimSite1796 = browser.currentScene.createNode("HAnimSite");
HAnimSite1796.USE = "hanim_r_calcaneus_posterior_pt";
viewpoints[210] = HAnimSite1796;

let HAnimSite1797 = browser.currentScene.createNode("HAnimSite");
HAnimSite1797.USE = "hanim_l_carpal_distal_phalanx_1_pt";
viewpoints[211] = HAnimSite1797;

let HAnimSite1798 = browser.currentScene.createNode("HAnimSite");
HAnimSite1798.USE = "hanim_r_carpal_distal_phalanx_1_pt";
viewpoints[212] = HAnimSite1798;

let HAnimSite1799 = browser.currentScene.createNode("HAnimSite");
HAnimSite1799.USE = "hanim_l_carpal_distal_phalanx_2_pt";
viewpoints[213] = HAnimSite1799;

let HAnimSite1800 = browser.currentScene.createNode("HAnimSite");
HAnimSite1800.USE = "hanim_r_carpal_distal_phalanx_2_pt";
viewpoints[214] = HAnimSite1800;

let HAnimSite1801 = browser.currentScene.createNode("HAnimSite");
HAnimSite1801.USE = "hanim_l_carpal_distal_phalanx_3_pt";
viewpoints[215] = HAnimSite1801;

let HAnimSite1802 = browser.currentScene.createNode("HAnimSite");
HAnimSite1802.USE = "hanim_r_carpal_distal_phalanx_3_pt";
viewpoints[216] = HAnimSite1802;

let HAnimSite1803 = browser.currentScene.createNode("HAnimSite");
HAnimSite1803.USE = "hanim_l_carpal_distal_phalanx_4_pt";
viewpoints[217] = HAnimSite1803;

let HAnimSite1804 = browser.currentScene.createNode("HAnimSite");
HAnimSite1804.USE = "hanim_r_carpal_distal_phalanx_4_pt";
viewpoints[218] = HAnimSite1804;

let HAnimSite1805 = browser.currentScene.createNode("HAnimSite");
HAnimSite1805.USE = "hanim_l_carpal_distal_phalanx_5_pt";
viewpoints[219] = HAnimSite1805;

let HAnimSite1806 = browser.currentScene.createNode("HAnimSite");
HAnimSite1806.USE = "hanim_r_carpal_distal_phalanx_5_pt";
viewpoints[220] = HAnimSite1806;

let HAnimSite1807 = browser.currentScene.createNode("HAnimSite");
HAnimSite1807.USE = "hanim_l_clavicle_pt";
viewpoints[221] = HAnimSite1807;

let HAnimSite1808 = browser.currentScene.createNode("HAnimSite");
HAnimSite1808.USE = "hanim_r_clavicle_pt";
viewpoints[222] = HAnimSite1808;

let HAnimSite1809 = browser.currentScene.createNode("HAnimSite");
HAnimSite1809.USE = "hanim_l_dactylion_pt";
viewpoints[223] = HAnimSite1809;

let HAnimSite1810 = browser.currentScene.createNode("HAnimSite");
HAnimSite1810.USE = "hanim_r_dactylion_pt";
viewpoints[224] = HAnimSite1810;

let HAnimSite1811 = browser.currentScene.createNode("HAnimSite");
HAnimSite1811.USE = "hanim_l_femoral_lateral_epicondyle_pt";
viewpoints[225] = HAnimSite1811;

let HAnimSite1812 = browser.currentScene.createNode("HAnimSite");
HAnimSite1812.USE = "hanim_r_femoral_lateral_epicondyle_pt";
viewpoints[226] = HAnimSite1812;

let HAnimSite1813 = browser.currentScene.createNode("HAnimSite");
HAnimSite1813.USE = "hanim_l_femoral_medial_epicondyle_pt";
viewpoints[227] = HAnimSite1813;

let HAnimSite1814 = browser.currentScene.createNode("HAnimSite");
HAnimSite1814.USE = "hanim_r_femoral_medial_epicondyle_pt";
viewpoints[228] = HAnimSite1814;

let HAnimSite1815 = browser.currentScene.createNode("HAnimSite");
HAnimSite1815.USE = "hanim_l_forefoot_tip_pt";
viewpoints[229] = HAnimSite1815;

let HAnimSite1816 = browser.currentScene.createNode("HAnimSite");
HAnimSite1816.USE = "hanim_r_forefoot_tip_pt";
viewpoints[230] = HAnimSite1816;

let HAnimSite1817 = browser.currentScene.createNode("HAnimSite");
HAnimSite1817.USE = "hanim_r_gonion_pt";
viewpoints[231] = HAnimSite1817;

let HAnimSite1818 = browser.currentScene.createNode("HAnimSite");
HAnimSite1818.USE = "hanim_l_gonion_pt";
viewpoints[232] = HAnimSite1818;

let HAnimSite1819 = browser.currentScene.createNode("HAnimSite");
HAnimSite1819.USE = "hanim_l_humeral_lateral_epicondyle_pt";
viewpoints[233] = HAnimSite1819;

let HAnimSite1820 = browser.currentScene.createNode("HAnimSite");
HAnimSite1820.USE = "hanim_r_humeral_lateral_epicondyle_pt";
viewpoints[234] = HAnimSite1820;

let HAnimSite1821 = browser.currentScene.createNode("HAnimSite");
HAnimSite1821.USE = "hanim_l_humeral_medial_epicondyle_pt";
viewpoints[235] = HAnimSite1821;

let HAnimSite1822 = browser.currentScene.createNode("HAnimSite");
HAnimSite1822.USE = "hanim_r_humeral_medial_epicondyle_pt";
viewpoints[236] = HAnimSite1822;

let HAnimSite1823 = browser.currentScene.createNode("HAnimSite");
HAnimSite1823.USE = "hanim_r_iliocristale_pt";
viewpoints[237] = HAnimSite1823;

let HAnimSite1824 = browser.currentScene.createNode("HAnimSite");
HAnimSite1824.USE = "hanim_l_iliocristale_pt";
viewpoints[238] = HAnimSite1824;

let HAnimSite1825 = browser.currentScene.createNode("HAnimSite");
HAnimSite1825.USE = "hanim_r_infraorbitale_pt";
viewpoints[239] = HAnimSite1825;

let HAnimSite1826 = browser.currentScene.createNode("HAnimSite");
HAnimSite1826.USE = "hanim_l_infraorbitale_pt";
viewpoints[240] = HAnimSite1826;

let HAnimSite1827 = browser.currentScene.createNode("HAnimSite");
HAnimSite1827.USE = "hanim_l_knee_crease_pt";
viewpoints[241] = HAnimSite1827;

let HAnimSite1828 = browser.currentScene.createNode("HAnimSite");
HAnimSite1828.USE = "hanim_r_knee_crease_pt";
viewpoints[242] = HAnimSite1828;

let HAnimSite1829 = browser.currentScene.createNode("HAnimSite");
HAnimSite1829.USE = "hanim_l_lateral_malleolus_pt";
viewpoints[243] = HAnimSite1829;

let HAnimSite1830 = browser.currentScene.createNode("HAnimSite");
HAnimSite1830.USE = "hanim_r_lateral_malleolus_pt";
viewpoints[244] = HAnimSite1830;

let HAnimSite1831 = browser.currentScene.createNode("HAnimSite");
HAnimSite1831.USE = "hanim_l_medial_malleolus_pt";
viewpoints[245] = HAnimSite1831;

let HAnimSite1832 = browser.currentScene.createNode("HAnimSite");
HAnimSite1832.USE = "hanim_r_medial_malleolus_pt";
viewpoints[246] = HAnimSite1832;

let HAnimSite1833 = browser.currentScene.createNode("HAnimSite");
HAnimSite1833.USE = "hanim_l_metacarpal_phalanx_2_pt";
viewpoints[247] = HAnimSite1833;

let HAnimSite1834 = browser.currentScene.createNode("HAnimSite");
HAnimSite1834.USE = "hanim_r_metacarpal_phalanx_2_pt";
viewpoints[248] = HAnimSite1834;

let HAnimSite1835 = browser.currentScene.createNode("HAnimSite");
HAnimSite1835.USE = "hanim_l_metacarpal_phalanx_5_pt";
viewpoints[249] = HAnimSite1835;

let HAnimSite1836 = browser.currentScene.createNode("HAnimSite");
HAnimSite1836.USE = "hanim_r_metacarpal_phalanx_5_pt";
viewpoints[250] = HAnimSite1836;

let HAnimSite1837 = browser.currentScene.createNode("HAnimSite");
HAnimSite1837.USE = "hanim_l_metatarsal_phalanx_1_pt";
viewpoints[251] = HAnimSite1837;

let HAnimSite1838 = browser.currentScene.createNode("HAnimSite");
HAnimSite1838.USE = "hanim_r_metatarsal_phalanx_1_pt";
viewpoints[252] = HAnimSite1838;

let HAnimSite1839 = browser.currentScene.createNode("HAnimSite");
HAnimSite1839.USE = "hanim_l_metatarsal_phalanx_5_pt";
viewpoints[253] = HAnimSite1839;

let HAnimSite1840 = browser.currentScene.createNode("HAnimSite");
HAnimSite1840.USE = "hanim_r_metatarsal_phalanx_5_pt";
viewpoints[254] = HAnimSite1840;

let HAnimSite1841 = browser.currentScene.createNode("HAnimSite");
HAnimSite1841.USE = "hanim_r_neck_base_pt";
viewpoints[255] = HAnimSite1841;

let HAnimSite1842 = browser.currentScene.createNode("HAnimSite");
HAnimSite1842.USE = "hanim_l_neck_base_pt";
viewpoints[256] = HAnimSite1842;

let HAnimSite1843 = browser.currentScene.createNode("HAnimSite");
HAnimSite1843.USE = "hanim_l_olecranon_pt";
viewpoints[257] = HAnimSite1843;

let HAnimSite1844 = browser.currentScene.createNode("HAnimSite");
HAnimSite1844.USE = "hanim_r_olecranon_pt";
viewpoints[258] = HAnimSite1844;

let HAnimSite1845 = browser.currentScene.createNode("HAnimSite");
HAnimSite1845.USE = "hanim_r_psis_pt";
viewpoints[259] = HAnimSite1845;

let HAnimSite1846 = browser.currentScene.createNode("HAnimSite");
HAnimSite1846.USE = "hanim_l_psis_pt";
viewpoints[260] = HAnimSite1846;

let HAnimSite1847 = browser.currentScene.createNode("HAnimSite");
HAnimSite1847.USE = "hanim_l_radial_styloid_pt";
viewpoints[261] = HAnimSite1847;

let HAnimSite1848 = browser.currentScene.createNode("HAnimSite");
HAnimSite1848.USE = "hanim_r_radial_styloid_pt";
viewpoints[262] = HAnimSite1848;

let HAnimSite1849 = browser.currentScene.createNode("HAnimSite");
HAnimSite1849.USE = "hanim_l_radiale_pt";
viewpoints[263] = HAnimSite1849;

let HAnimSite1850 = browser.currentScene.createNode("HAnimSite");
HAnimSite1850.USE = "hanim_r_radiale_pt";
viewpoints[264] = HAnimSite1850;

let HAnimSite1851 = browser.currentScene.createNode("HAnimSite");
HAnimSite1851.USE = "hanim_r_rib10_pt";
viewpoints[265] = HAnimSite1851;

let HAnimSite1852 = browser.currentScene.createNode("HAnimSite");
HAnimSite1852.USE = "hanim_l_rib10_pt";
viewpoints[266] = HAnimSite1852;

let HAnimSite1853 = browser.currentScene.createNode("HAnimSite");
HAnimSite1853.USE = "hanim_temporomandibular_l_site_pt";
viewpoints[267] = HAnimSite1853;

let HAnimSite1854 = browser.currentScene.createNode("HAnimSite");
HAnimSite1854.USE = "hanim_temporomandibular_r_site_pt";
viewpoints[268] = HAnimSite1854;

let HAnimSite1855 = browser.currentScene.createNode("HAnimSite");
HAnimSite1855.USE = "hanim_l_sphyrion_pt";
viewpoints[269] = HAnimSite1855;

let HAnimSite1856 = browser.currentScene.createNode("HAnimSite");
HAnimSite1856.USE = "hanim_r_sphyrion_pt";
viewpoints[270] = HAnimSite1856;

let HAnimSite1857 = browser.currentScene.createNode("HAnimSite");
HAnimSite1857.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
viewpoints[271] = HAnimSite1857;

let HAnimSite1858 = browser.currentScene.createNode("HAnimSite");
HAnimSite1858.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
viewpoints[272] = HAnimSite1858;

let HAnimSite1859 = browser.currentScene.createNode("HAnimSite");
HAnimSite1859.USE = "hanim_r_thelion_pt";
viewpoints[273] = HAnimSite1859;

let HAnimSite1860 = browser.currentScene.createNode("HAnimSite");
HAnimSite1860.USE = "hanim_l_thelion_pt";
viewpoints[274] = HAnimSite1860;

let HAnimSite1861 = browser.currentScene.createNode("HAnimSite");
HAnimSite1861.USE = "hanim_r_tragion_pt";
viewpoints[275] = HAnimSite1861;

let HAnimSite1862 = browser.currentScene.createNode("HAnimSite");
HAnimSite1862.USE = "hanim_l_tragion_pt";
viewpoints[276] = HAnimSite1862;

let HAnimSite1863 = browser.currentScene.createNode("HAnimSite");
HAnimSite1863.USE = "hanim_r_trochanterion_pt";
viewpoints[277] = HAnimSite1863;

let HAnimSite1864 = browser.currentScene.createNode("HAnimSite");
HAnimSite1864.USE = "hanim_l_trochanterion_pt";
viewpoints[278] = HAnimSite1864;

let HAnimSite1865 = browser.currentScene.createNode("HAnimSite");
HAnimSite1865.USE = "hanim_l_ulnar_styloid_pt";
viewpoints[279] = HAnimSite1865;

let HAnimSite1866 = browser.currentScene.createNode("HAnimSite");
HAnimSite1866.USE = "hanim_r_ulnar_styloid_pt";
viewpoints[280] = HAnimSite1866;

let HAnimSite1867 = browser.currentScene.createNode("HAnimSite");
HAnimSite1867.DEF = "hanim_l_inclined_view";
HAnimSite1867.name = "l_inclined_view";
HAnimSite1867.translation = new X3D.SFVec3f([1.62,1.05,2.06]);
HAnimSite1867.rotation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
let TouchSensor1868 = browser.currentScene.createNode("TouchSensor");
TouchSensor1868.description = "HAnimSite l_inclined_view";
HAnimSite1867YYY.children = new X3D.MFNode();

HAnimSite1867ZZZ.children[0] = TouchSensor1868;

let Shape1869 = browser.currentScene.createNode("Shape");
Shape1869.USE = "HAnimSiteShape";
HAnimSite1867ZZZ.children[1] = Shape1869;

let Viewpoint1870 = browser.currentScene.createNode("Viewpoint");
Viewpoint1870.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1870.description = "left inclined";
Viewpoint1870.position = new X3D.SFVec3f([0,0,0]);
HAnimSite1867ZZZ.children[2] = Viewpoint1870;

let Anchor1871 = browser.currentScene.createNode("Anchor");
Anchor1871.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1871.url = new X3D.MFString([new X3D.SFString("#hanim_l_inclined_viewpoint")]);
let LOD1872 = browser.currentScene.createNode("LOD");
LOD1872.forceTransitions = True;
LOD1872.range = new X3D.MFFloat([0.04]);
let WorldInfo1873 = browser.currentScene.createNode("WorldInfo");
WorldInfo1873.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1872YYY.children = new X3D.MFNode();

LOD1872ZZZ.children[0] = WorldInfo1873;

let Shape1874 = browser.currentScene.createNode("Shape");
Shape1874.USE = "HAnimSiteViewpointShape";
LOD1872ZZZ.children[1] = Shape1874;

Anchor1871YYY.children = new X3D.MFNode();

Anchor1871ZZZ.children[0] = LOD1872;

HAnimSite1867ZZZ.children[3] = Anchor1871;

viewpoints[281] = HAnimSite1867;

let HAnimSite1875 = browser.currentScene.createNode("HAnimSite");
HAnimSite1875.DEF = "hanim_r_inclined_view";
HAnimSite1875.name = "r_inclined_view";
HAnimSite1875.translation = new X3D.SFVec3f([-1.62,1.05,2.06]);
HAnimSite1875.rotation = new X3D.SFRotation([-0.113,-0.993,0.0347,0.671]);
let TouchSensor1876 = browser.currentScene.createNode("TouchSensor");
TouchSensor1876.description = "HAnimSite r_inclined_view";
HAnimSite1875YYY.children = new X3D.MFNode();

HAnimSite1875ZZZ.children[0] = TouchSensor1876;

let Shape1877 = browser.currentScene.createNode("Shape");
Shape1877.USE = "HAnimSiteShape";
HAnimSite1875ZZZ.children[1] = Shape1877;

let Viewpoint1878 = browser.currentScene.createNode("Viewpoint");
Viewpoint1878.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1878.description = "right inclined";
Viewpoint1878.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1878.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1875ZZZ.children[2] = Viewpoint1878;

let Anchor1879 = browser.currentScene.createNode("Anchor");
Anchor1879.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1879.url = new X3D.MFString([new X3D.SFString("#hanim_r_inclined_viewpoint")]);
let LOD1880 = browser.currentScene.createNode("LOD");
LOD1880.forceTransitions = True;
LOD1880.range = new X3D.MFFloat([0.04]);
let WorldInfo1881 = browser.currentScene.createNode("WorldInfo");
WorldInfo1881.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1880YYY.children = new X3D.MFNode();

LOD1880ZZZ.children[0] = WorldInfo1881;

let Shape1882 = browser.currentScene.createNode("Shape");
Shape1882.USE = "HAnimSiteViewpointShape";
LOD1880ZZZ.children[1] = Shape1882;

Anchor1879YYY.children = new X3D.MFNode();

Anchor1879ZZZ.children[0] = LOD1880;

HAnimSite1875ZZZ.children[3] = Anchor1879;

HAnimHumanoid41ZZZ.viewpoints[282] = HAnimSite1875;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.DEF = "hanim_front_view";
HAnimSite1883.name = "front_view";
HAnimSite1883.translation = new X3D.SFVec3f([0,0.85,2.58]);
let TouchSensor1884 = browser.currentScene.createNode("TouchSensor");
TouchSensor1884.description = "HAnimSite front_view";
HAnimSite1883YYY.children = new X3D.MFNode();

HAnimSite1883ZZZ.children[0] = TouchSensor1884;

let Shape1885 = browser.currentScene.createNode("Shape");
Shape1885.USE = "HAnimSiteShape";
HAnimSite1883ZZZ.children[1] = Shape1885;

let Viewpoint1886 = browser.currentScene.createNode("Viewpoint");
Viewpoint1886.DEF = "hanim_front_viewpoint";
Viewpoint1886.description = "front";
Viewpoint1886.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1886.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1883ZZZ.children[2] = Viewpoint1886;

let Anchor1887 = browser.currentScene.createNode("Anchor");
Anchor1887.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1887.url = new X3D.MFString([new X3D.SFString("#hanim_front_viewpoint")]);
let LOD1888 = browser.currentScene.createNode("LOD");
LOD1888.forceTransitions = True;
LOD1888.range = new X3D.MFFloat([0.04]);
let WorldInfo1889 = browser.currentScene.createNode("WorldInfo");
WorldInfo1889.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1888YYY.children = new X3D.MFNode();

LOD1888ZZZ.children[0] = WorldInfo1889;

let Shape1890 = browser.currentScene.createNode("Shape");
Shape1890.USE = "HAnimSiteViewpointShape";
LOD1888ZZZ.children[1] = Shape1890;

Anchor1887YYY.children = new X3D.MFNode();

Anchor1887ZZZ.children[0] = LOD1888;

HAnimSite1883ZZZ.children[3] = Anchor1887;

HAnimHumanoid41ZZZ.viewpoints[283] = HAnimSite1883;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.DEF = "hanim_back_view";
HAnimSite1891.name = "back_view";
HAnimSite1891.translation = new X3D.SFVec3f([0,0.85,-2.58]);
HAnimSite1891.rotation = new X3D.SFRotation([0,1,0,3.14]);
let TouchSensor1892 = browser.currentScene.createNode("TouchSensor");
TouchSensor1892.description = "HAnimSite back_view";
HAnimSite1891YYY.children = new X3D.MFNode();

HAnimSite1891ZZZ.children[0] = TouchSensor1892;

let Shape1893 = browser.currentScene.createNode("Shape");
Shape1893.USE = "HAnimSiteShape";
HAnimSite1891ZZZ.children[1] = Shape1893;

let Viewpoint1894 = browser.currentScene.createNode("Viewpoint");
Viewpoint1894.DEF = "hanim_back_viewpoint";
Viewpoint1894.description = "back";
Viewpoint1894.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1894.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1891ZZZ.children[2] = Viewpoint1894;

let Anchor1895 = browser.currentScene.createNode("Anchor");
Anchor1895.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1895.url = new X3D.MFString([new X3D.SFString("#hanim_back_viewpoint")]);
let LOD1896 = browser.currentScene.createNode("LOD");
LOD1896.forceTransitions = True;
LOD1896.range = new X3D.MFFloat([0.04]);
let WorldInfo1897 = browser.currentScene.createNode("WorldInfo");
WorldInfo1897.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1896YYY.children = new X3D.MFNode();

LOD1896ZZZ.children[0] = WorldInfo1897;

let Shape1898 = browser.currentScene.createNode("Shape");
Shape1898.USE = "HAnimSiteViewpointShape";
LOD1896ZZZ.children[1] = Shape1898;

Anchor1895YYY.children = new X3D.MFNode();

Anchor1895ZZZ.children[0] = LOD1896;

HAnimSite1891ZZZ.children[3] = Anchor1895;

HAnimHumanoid41ZZZ.viewpoints[284] = HAnimSite1891;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.DEF = "hanim_l_side_view";
HAnimSite1899.name = "l_side_view";
HAnimSite1899.translation = new X3D.SFVec3f([2.6,0.854,0]);
HAnimSite1899.rotation = new X3D.SFRotation([0,1,0,1.5708]);
let TouchSensor1900 = browser.currentScene.createNode("TouchSensor");
TouchSensor1900.description = "HAnimSite l_side_view";
HAnimSite1899YYY.children = new X3D.MFNode();

HAnimSite1899ZZZ.children[0] = TouchSensor1900;

let Shape1901 = browser.currentScene.createNode("Shape");
Shape1901.USE = "HAnimSiteShape";
HAnimSite1899ZZZ.children[1] = Shape1901;

let Viewpoint1902 = browser.currentScene.createNode("Viewpoint");
Viewpoint1902.DEF = "hanim_l_side_viewpoint";
Viewpoint1902.description = "left side";
Viewpoint1902.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1902.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1899ZZZ.children[2] = Viewpoint1902;

let Anchor1903 = browser.currentScene.createNode("Anchor");
Anchor1903.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1903.url = new X3D.MFString([new X3D.SFString("#hanim_l_side_viewpoint")]);
let LOD1904 = browser.currentScene.createNode("LOD");
LOD1904.forceTransitions = True;
LOD1904.range = new X3D.MFFloat([0.04]);
let WorldInfo1905 = browser.currentScene.createNode("WorldInfo");
WorldInfo1905.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1904YYY.children = new X3D.MFNode();

LOD1904ZZZ.children[0] = WorldInfo1905;

let Shape1906 = browser.currentScene.createNode("Shape");
Shape1906.USE = "HAnimSiteViewpointShape";
LOD1904ZZZ.children[1] = Shape1906;

Anchor1903YYY.children = new X3D.MFNode();

Anchor1903ZZZ.children[0] = LOD1904;

HAnimSite1899ZZZ.children[3] = Anchor1903;

HAnimHumanoid41ZZZ.viewpoints[285] = HAnimSite1899;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.DEF = "hanim_Top_view";
HAnimSite1907.name = "Top_view";
HAnimSite1907.translation = new X3D.SFVec3f([0,3.5,0]);
HAnimSite1907.rotation = new X3D.SFRotation([1,0,0,-1.57]);
let TouchSensor1908 = browser.currentScene.createNode("TouchSensor");
TouchSensor1908.description = "HAnimSite Top_view";
HAnimSite1907YYY.children = new X3D.MFNode();

HAnimSite1907ZZZ.children[0] = TouchSensor1908;

let Shape1909 = browser.currentScene.createNode("Shape");
Shape1909.USE = "HAnimSiteShape";
HAnimSite1907ZZZ.children[1] = Shape1909;

let Viewpoint1910 = browser.currentScene.createNode("Viewpoint");
Viewpoint1910.DEF = "hanim_Top_viewpoint";
Viewpoint1910.description = "Top";
Viewpoint1910.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1910.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1907ZZZ.children[2] = Viewpoint1910;

let Anchor1911 = browser.currentScene.createNode("Anchor");
Anchor1911.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1911.url = new X3D.MFString([new X3D.SFString("#hanim_Top_viewpoint")]);
let LOD1912 = browser.currentScene.createNode("LOD");
LOD1912.forceTransitions = True;
LOD1912.range = new X3D.MFFloat([0.04]);
let WorldInfo1913 = browser.currentScene.createNode("WorldInfo");
WorldInfo1913.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1912YYY.children = new X3D.MFNode();

LOD1912ZZZ.children[0] = WorldInfo1913;

let Shape1914 = browser.currentScene.createNode("Shape");
Shape1914.USE = "HAnimSiteViewpointShape";
LOD1912ZZZ.children[1] = Shape1914;

Anchor1911YYY.children = new X3D.MFNode();

Anchor1911ZZZ.children[0] = LOD1912;

HAnimSite1907ZZZ.children[3] = Anchor1911;

HAnimHumanoid41ZZZ.viewpoints[286] = HAnimSite1907;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.DEF = "hanim_front_close_view";
HAnimSite1915.name = "front_close_view";
HAnimSite1915.translation = new X3D.SFVec3f([0,0.854,1.575]);
let TouchSensor1916 = browser.currentScene.createNode("TouchSensor");
TouchSensor1916.description = "HAnimSite front_close_view";
HAnimSite1915YYY.children = new X3D.MFNode();

HAnimSite1915ZZZ.children[0] = TouchSensor1916;

let Shape1917 = browser.currentScene.createNode("Shape");
Shape1917.USE = "HAnimSiteShape";
HAnimSite1915ZZZ.children[1] = Shape1917;

let Viewpoint1918 = browser.currentScene.createNode("Viewpoint");
Viewpoint1918.DEF = "hanim_front_close_viewpoint";
Viewpoint1918.description = "front close";
Viewpoint1918.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1918.centerOfRotation = new X3D.SFVec3f([0,0,1.575]);
HAnimSite1915ZZZ.children[2] = Viewpoint1918;

let Anchor1919 = browser.currentScene.createNode("Anchor");
Anchor1919.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1919.url = new X3D.MFString([new X3D.SFString("#hanim_front_close_viewpoint")]);
let LOD1920 = browser.currentScene.createNode("LOD");
LOD1920.forceTransitions = True;
LOD1920.range = new X3D.MFFloat([0.04]);
let WorldInfo1921 = browser.currentScene.createNode("WorldInfo");
WorldInfo1921.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1920YYY.children = new X3D.MFNode();

LOD1920ZZZ.children[0] = WorldInfo1921;

let Shape1922 = browser.currentScene.createNode("Shape");
Shape1922.USE = "HAnimSiteViewpointShape";
LOD1920ZZZ.children[1] = Shape1922;

Anchor1919YYY.children = new X3D.MFNode();

Anchor1919ZZZ.children[0] = LOD1920;

HAnimSite1915ZZZ.children[3] = Anchor1919;

HAnimHumanoid41ZZZ.viewpoints[287] = HAnimSite1915;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.DEF = "hanim_side_close_view";
HAnimSite1923.name = "side_close_view";
HAnimSite1923.translation = new X3D.SFVec3f([1.56,0.854,0]);
HAnimSite1923.rotation = new X3D.SFRotation([0,1,0,1.5708]);
let TouchSensor1924 = browser.currentScene.createNode("TouchSensor");
TouchSensor1924.description = "HAnimSite side_close_view";
HAnimSite1923YYY.children = new X3D.MFNode();

HAnimSite1923ZZZ.children[0] = TouchSensor1924;

let Shape1925 = browser.currentScene.createNode("Shape");
Shape1925.USE = "HAnimSiteShape";
HAnimSite1923ZZZ.children[1] = Shape1925;

let Viewpoint1926 = browser.currentScene.createNode("Viewpoint");
Viewpoint1926.DEF = "hanim_side_close_viewpoint";
Viewpoint1926.description = "side close";
Viewpoint1926.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1926.centerOfRotation = new X3D.SFVec3f([1.6,0,0]);
HAnimSite1923ZZZ.children[2] = Viewpoint1926;

let Anchor1927 = browser.currentScene.createNode("Anchor");
Anchor1927.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1927.url = new X3D.MFString([new X3D.SFString("#hanim_side_close_viewpoint")]);
let LOD1928 = browser.currentScene.createNode("LOD");
LOD1928.forceTransitions = True;
LOD1928.range = new X3D.MFFloat([0.04]);
let WorldInfo1929 = browser.currentScene.createNode("WorldInfo");
WorldInfo1929.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1928YYY.children = new X3D.MFNode();

LOD1928ZZZ.children[0] = WorldInfo1929;

let Shape1930 = browser.currentScene.createNode("Shape");
Shape1930.USE = "HAnimSiteViewpointShape";
LOD1928ZZZ.children[1] = Shape1930;

Anchor1927YYY.children = new X3D.MFNode();

Anchor1927ZZZ.children[0] = LOD1928;

HAnimSite1923ZZZ.children[3] = Anchor1927;

HAnimHumanoid41ZZZ.viewpoints[288] = HAnimSite1923;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.DEF = "hanim_head_front_close_view";
HAnimSite1931.name = "head_front_close_view";
HAnimSite1931.translation = new X3D.SFVec3f([0,1.5,1]);
let TouchSensor1932 = browser.currentScene.createNode("TouchSensor");
TouchSensor1932.description = "HAnimSite head_front_close_view";
HAnimSite1931YYY.children = new X3D.MFNode();

HAnimSite1931ZZZ.children[0] = TouchSensor1932;

let Shape1933 = browser.currentScene.createNode("Shape");
Shape1933.USE = "HAnimSiteShape";
HAnimSite1931ZZZ.children[1] = Shape1933;

let Viewpoint1934 = browser.currentScene.createNode("Viewpoint");
Viewpoint1934.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1934.description = "head front close";
Viewpoint1934.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1934.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite1931ZZZ.children[2] = Viewpoint1934;

let Anchor1935 = browser.currentScene.createNode("Anchor");
Anchor1935.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1935.url = new X3D.MFString([new X3D.SFString("#hanim_head_front_close_viewpoint")]);
let LOD1936 = browser.currentScene.createNode("LOD");
LOD1936.forceTransitions = True;
LOD1936.range = new X3D.MFFloat([0.04]);
let WorldInfo1937 = browser.currentScene.createNode("WorldInfo");
WorldInfo1937.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1936YYY.children = new X3D.MFNode();

LOD1936ZZZ.children[0] = WorldInfo1937;

let Shape1938 = browser.currentScene.createNode("Shape");
Shape1938.USE = "HAnimSiteViewpointShape";
LOD1936ZZZ.children[1] = Shape1938;

Anchor1935YYY.children = new X3D.MFNode();

Anchor1935ZZZ.children[0] = LOD1936;

HAnimSite1931ZZZ.children[3] = Anchor1935;

HAnimHumanoid41ZZZ.viewpoints[289] = HAnimSite1931;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.DEF = "hanim_chest_front_close_view";
HAnimSite1939.name = "chest_front_close_view";
HAnimSite1939.translation = new X3D.SFVec3f([0,1.2,1]);
let TouchSensor1940 = browser.currentScene.createNode("TouchSensor");
TouchSensor1940.description = "HAnimSite chest_front_close_view";
HAnimSite1939YYY.children = new X3D.MFNode();

HAnimSite1939ZZZ.children[0] = TouchSensor1940;

let Shape1941 = browser.currentScene.createNode("Shape");
Shape1941.USE = "HAnimSiteShape";
HAnimSite1939ZZZ.children[1] = Shape1941;

let Viewpoint1942 = browser.currentScene.createNode("Viewpoint");
Viewpoint1942.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1942.description = "chest front close";
Viewpoint1942.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1942.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite1939ZZZ.children[2] = Viewpoint1942;

let Anchor1943 = browser.currentScene.createNode("Anchor");
Anchor1943.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1943.url = new X3D.MFString([new X3D.SFString("#hanim_chest_front_close_viewpoint")]);
let LOD1944 = browser.currentScene.createNode("LOD");
LOD1944.forceTransitions = True;
LOD1944.range = new X3D.MFFloat([0.04]);
let WorldInfo1945 = browser.currentScene.createNode("WorldInfo");
WorldInfo1945.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1944YYY.children = new X3D.MFNode();

LOD1944ZZZ.children[0] = WorldInfo1945;

let Shape1946 = browser.currentScene.createNode("Shape");
Shape1946.USE = "HAnimSiteViewpointShape";
LOD1944ZZZ.children[1] = Shape1946;

Anchor1943YYY.children = new X3D.MFNode();

Anchor1943ZZZ.children[0] = LOD1944;

HAnimSite1939ZZZ.children[3] = Anchor1943;

HAnimHumanoid41ZZZ.viewpoints[290] = HAnimSite1939;

let HAnimSite1947 = browser.currentScene.createNode("HAnimSite");
HAnimSite1947.DEF = "hanim_pelvis_front_close_view";
HAnimSite1947.name = "pelvis_front_close_view";
HAnimSite1947.translation = new X3D.SFVec3f([0,0.8,1]);
let TouchSensor1948 = browser.currentScene.createNode("TouchSensor");
TouchSensor1948.description = "HAnimSite pelvis_front_close_view";
HAnimSite1947YYY.children = new X3D.MFNode();

HAnimSite1947ZZZ.children[0] = TouchSensor1948;

let Shape1949 = browser.currentScene.createNode("Shape");
Shape1949.USE = "HAnimSiteShape";
HAnimSite1947ZZZ.children[1] = Shape1949;

let Viewpoint1950 = browser.currentScene.createNode("Viewpoint");
Viewpoint1950.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1950.description = "pelvis front close";
Viewpoint1950.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1950.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite1947ZZZ.children[2] = Viewpoint1950;

let Anchor1951 = browser.currentScene.createNode("Anchor");
Anchor1951.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1951.url = new X3D.MFString([new X3D.SFString("#hanim_pelvis_front_close_viewpoint")]);
let LOD1952 = browser.currentScene.createNode("LOD");
LOD1952.forceTransitions = True;
LOD1952.range = new X3D.MFFloat([0.04]);
let WorldInfo1953 = browser.currentScene.createNode("WorldInfo");
WorldInfo1953.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1952YYY.children = new X3D.MFNode();

LOD1952ZZZ.children[0] = WorldInfo1953;

let Shape1954 = browser.currentScene.createNode("Shape");
Shape1954.USE = "HAnimSiteViewpointShape";
LOD1952ZZZ.children[1] = Shape1954;

Anchor1951YYY.children = new X3D.MFNode();

Anchor1951ZZZ.children[0] = LOD1952;

HAnimSite1947ZZZ.children[3] = Anchor1951;

HAnimHumanoid41ZZZ.viewpoints[291] = HAnimSite1947;

let HAnimSite1955 = browser.currentScene.createNode("HAnimSite");
HAnimSite1955.DEF = "hanim_knees_front_close_view";
HAnimSite1955.name = "knees_front_close_view";
HAnimSite1955.translation = new X3D.SFVec3f([0,0.4,1]);
let TouchSensor1956 = browser.currentScene.createNode("TouchSensor");
TouchSensor1956.description = "HAnimSite knees_front_close_view";
HAnimSite1955YYY.children = new X3D.MFNode();

HAnimSite1955ZZZ.children[0] = TouchSensor1956;

let Shape1957 = browser.currentScene.createNode("Shape");
Shape1957.USE = "HAnimSiteShape";
HAnimSite1955ZZZ.children[1] = Shape1957;

let Viewpoint1958 = browser.currentScene.createNode("Viewpoint");
Viewpoint1958.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1958.description = "knees front close";
Viewpoint1958.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1958.centerOfRotation = new X3D.SFVec3f([0,0.4,0]);
HAnimSite1955ZZZ.children[2] = Viewpoint1958;

let Anchor1959 = browser.currentScene.createNode("Anchor");
Anchor1959.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1959.url = new X3D.MFString([new X3D.SFString("#hanim_knees_front_close_viewpoint")]);
let LOD1960 = browser.currentScene.createNode("LOD");
LOD1960.forceTransitions = True;
LOD1960.range = new X3D.MFFloat([0.04]);
let WorldInfo1961 = browser.currentScene.createNode("WorldInfo");
WorldInfo1961.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1960YYY.children = new X3D.MFNode();

LOD1960ZZZ.children[0] = WorldInfo1961;

let Shape1962 = browser.currentScene.createNode("Shape");
Shape1962.USE = "HAnimSiteViewpointShape";
LOD1960ZZZ.children[1] = Shape1962;

Anchor1959YYY.children = new X3D.MFNode();

Anchor1959ZZZ.children[0] = LOD1960;

HAnimSite1955ZZZ.children[3] = Anchor1959;

HAnimHumanoid41ZZZ.viewpoints[292] = HAnimSite1955;

let HAnimSite1963 = browser.currentScene.createNode("HAnimSite");
HAnimSite1963.DEF = "hanim_feet_front_close_view";
HAnimSite1963.name = "feet_front_close_view";
HAnimSite1963.translation = new X3D.SFVec3f([0,0,1]);
let TouchSensor1964 = browser.currentScene.createNode("TouchSensor");
TouchSensor1964.description = "HAnimSite feet_front_close_view";
HAnimSite1963YYY.children = new X3D.MFNode();

HAnimSite1963ZZZ.children[0] = TouchSensor1964;

let Shape1965 = browser.currentScene.createNode("Shape");
Shape1965.USE = "HAnimSiteShape";
HAnimSite1963ZZZ.children[1] = Shape1965;

let Viewpoint1966 = browser.currentScene.createNode("Viewpoint");
Viewpoint1966.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1966.description = "feet front close";
Viewpoint1966.position = new X3D.SFVec3f([0,0,0]);
HAnimSite1963ZZZ.children[2] = Viewpoint1966;

let Anchor1967 = browser.currentScene.createNode("Anchor");
Anchor1967.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1967.url = new X3D.MFString([new X3D.SFString("#hanim_feet_front_close_viewpoint")]);
let LOD1968 = browser.currentScene.createNode("LOD");
LOD1968.forceTransitions = True;
LOD1968.range = new X3D.MFFloat([0.04]);
let WorldInfo1969 = browser.currentScene.createNode("WorldInfo");
WorldInfo1969.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1968YYY.children = new X3D.MFNode();

LOD1968ZZZ.children[0] = WorldInfo1969;

let Shape1970 = browser.currentScene.createNode("Shape");
Shape1970.USE = "HAnimSiteViewpointShape";
LOD1968ZZZ.children[1] = Shape1970;

Anchor1967YYY.children = new X3D.MFNode();

Anchor1967ZZZ.children[0] = LOD1968;

HAnimSite1963ZZZ.children[3] = Anchor1967;

HAnimHumanoid41ZZZ.viewpoints[293] = HAnimSite1963;

let HAnimSite1971 = browser.currentScene.createNode("HAnimSite");
HAnimSite1971.DEF = "hanim_eye_level_view";
HAnimSite1971.name = "eye_level_view";
HAnimSite1971.translation = new X3D.SFVec3f([0,1.6332,0.0502]);
let TouchSensor1972 = browser.currentScene.createNode("TouchSensor");
TouchSensor1972.description = "HAnimSite eye_level_view";
HAnimSite1971YYY.children = new X3D.MFNode();

HAnimSite1971ZZZ.children[0] = TouchSensor1972;

let Shape1973 = browser.currentScene.createNode("Shape");
Shape1973.USE = "HAnimSiteShape";
HAnimSite1971ZZZ.children[1] = Shape1973;

let Viewpoint1974 = browser.currentScene.createNode("Viewpoint");
Viewpoint1974.DEF = "hanim_eye_level_viewpoint";
Viewpoint1974.description = "eye level looking forward";
Viewpoint1974.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1974.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite1971ZZZ.children[2] = Viewpoint1974;

let Anchor1975 = browser.currentScene.createNode("Anchor");
Anchor1975.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1975.url = new X3D.MFString([new X3D.SFString("#hanim_eye_level_viewpoint")]);
let LOD1976 = browser.currentScene.createNode("LOD");
LOD1976.forceTransitions = True;
LOD1976.range = new X3D.MFFloat([0.04]);
let WorldInfo1977 = browser.currentScene.createNode("WorldInfo");
WorldInfo1977.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1976YYY.children = new X3D.MFNode();

LOD1976ZZZ.children[0] = WorldInfo1977;

let Shape1978 = browser.currentScene.createNode("Shape");
Shape1978.USE = "HAnimSiteViewpointShape";
LOD1976ZZZ.children[1] = Shape1978;

Anchor1975YYY.children = new X3D.MFNode();

Anchor1975ZZZ.children[0] = LOD1976;

HAnimSite1971ZZZ.children[3] = Anchor1975;

HAnimHumanoid41ZZZ.viewpoints[294] = HAnimSite1971;

let HAnimSite1979 = browser.currentScene.createNode("HAnimSite");
HAnimSite1979.USE = "hanim_l_eyeball_site_view";
viewpoints[295] = HAnimSite1979;

let HAnimSite1980 = browser.currentScene.createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_eyeball_site_view";
viewpoints[296] = HAnimSite1980;

let HAnimSite1981 = browser.currentScene.createNode("HAnimSite");
HAnimSite1981.USE = "hanim_l_hand_front_view";
viewpoints[297] = HAnimSite1981;

let HAnimSite1982 = browser.currentScene.createNode("HAnimSite");
HAnimSite1982.USE = "hanim_r_hand_front_view";
viewpoints[298] = HAnimSite1982;

browser.currentScene.children[12] = HAnimHumanoid41;

}
main ();
