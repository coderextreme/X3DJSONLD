const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnimSpecificationLOA3Illustrated.x3d");
scene.addMetaData("description", "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.");
scene.addMetaData("reference", "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds");
scene.addMetaData("reference", "HAnimSpecificationLOA3Invisible.x3d");
scene.addMetaData("reference", "HAnimSpecificationLOA3Animation.x3d");
scene.addMetaData("reference", "HAnimSpecificationExampleChangeLog.txt");
scene.addMetaData("reference", "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
scene.addMetaData("reference", "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
scene.addMetaData("reference", "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames");
scene.addMetaData("created", "24 April 2013");
scene.addMetaData("modified", "Tue, 09 Sep 2025 19:39:08 GMT");
scene.addMetaData("error", "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported");
scene.addMetaData("creator", "Matthew T. Beitler, Joe D. Williams, Don Brutzman");
scene.addMetaData("Image", "HAnimSpecificationLOA3Illustrated.png");
scene.addMetaData("Image", "HAnimSpecificationLOA3IllustratedLeftSide.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA1.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA2.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA3.png");
scene.addMetaData("TODO", "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations");
scene.addMetaData("TODO", "insert MetadataInteger nodes indicating LOA for each Joint and Segment");
scene.addMetaData("warning", "BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK");
scene.addMetaData("translator", "Don Brutzman and Joe Williams");
scene.addMetaData("generator", "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo");
scene.addMetaData("generator", "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit");
await browser .loadComponents (scene);
let Background32 = browser.currentScene.createNode("Background");
Background32.skyColor = new X3D.MFColor([0.3,0.3,0.3]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Background32;

let NavigationInfo33 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo33;

let Group34 = browser.currentScene.createNode("Group");
Group34.DEF = "Original_WorldInfo";
let WorldInfo35 = browser.currentScene.createNode("WorldInfo");
WorldInfo35.title = "HANIM 200x Default Joint Centers, LOA3";
WorldInfo35.info = new X3D.MFString([new X3D.SFString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")]);
Group34YYY.children = new X3D.MFNode();

Group34ZZZ.children[0] = WorldInfo35;

browser.currentScene.children[2] = Group34;

let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.description = "Humanoid LOA 3 Front";
Viewpoint36.position = new X3D.SFVec3f([0,0.4,4]);
Viewpoint36.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[3] = Viewpoint36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.description = "Humanoid LOA 3 Front Close";
Viewpoint37.position = new X3D.SFVec3f([0,0.8,2]);
Viewpoint37.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[4] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.description = "Humanoid LOA 3 Front Closer";
Viewpoint38.position = new X3D.SFVec3f([0,1.2,1]);
Viewpoint38.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[5] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.description = "Humanoid LOA 3 Front Face";
Viewpoint39.position = new X3D.SFVec3f([0,1.63,1]);
Viewpoint39.centerOfRotation = new X3D.SFVec3f([0,1.5,0.0016]);
browser.currentScene.children[6] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.description = "Humanoid LOA 3 Right Side";
Viewpoint40.position = new X3D.SFVec3f([2.6,0.8,0]);
Viewpoint40.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint40.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[7] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.description = "Humanoid LOA 3 Right Side Close";
Viewpoint41.position = new X3D.SFVec3f([1,0.8,0.5]);
Viewpoint41.orientation = new X3D.SFRotation([0,1,0,1.2]);
Viewpoint41.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[8] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.description = "Humanoid LOA 3 Left Side Close";
Viewpoint42.position = new X3D.SFVec3f([-1,0.8,0.5]);
Viewpoint42.orientation = new X3D.SFRotation([0,1,0,-1.2]);
Viewpoint42.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[9] = Viewpoint42;

let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.description = "Humanoid LOA 3 Left Side";
Viewpoint43.position = new X3D.SFVec3f([-2.6,0.8,0]);
Viewpoint43.orientation = new X3D.SFRotation([0,1,0,-1.5708]);
Viewpoint43.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[10] = Viewpoint43;

let Viewpoint44 = browser.currentScene.createNode("Viewpoint");
Viewpoint44.description = "Humanoid LOA 3 Top";
Viewpoint44.position = new X3D.SFVec3f([0,3.5,0]);
Viewpoint44.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint44.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[11] = Viewpoint44;

let HAnimHumanoid45 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid45.DEF = "hanim_humanoid";
HAnimHumanoid45.name = "humanoid";
HAnimHumanoid45.info = new X3D.MFString([new X3D.SFString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), new X3D.SFString("authorEmail=HAnim@web3D.org"), new X3D.SFString("copyright=none"), new X3D.SFString("creationDate=12 May 1999"), new X3D.SFString("usageRestrictions=none"), new X3D.SFString("humanoidVersion=2.0"), new X3D.SFString("height=1.7504")]);
HAnimHumanoid45.version = "1.0";
let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.DEF = "hanim_humanoid_root";
HAnimJoint46.name = "humanoid_root";
HAnimJoint46.center = new X3D.SFVec3f([0,0.824,0.0277]);
let HAnimSegment47 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment47.DEF = "hanim_sacrum";
HAnimSegment47.name = "sacrum";
let TouchSensor48 = browser.currentScene.createNode("TouchSensor");
TouchSensor48.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment47YYY.children = new X3D.MFNode();

HAnimSegment47ZZZ.children[0] = TouchSensor48;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new X3D.SFVec3f([0,0.824,0.0277]);
let Shape50 = browser.currentScene.createNode("Shape");
Shape50.DEF = "HAnimJointShape";
let Appearance51 = browser.currentScene.createNode("Appearance");
Appearance51.DEF = "HAnimJointAppearance";
let Material52 = browser.currentScene.createNode("Material");
Material52.diffuseColor = new X3D.SFColor([1,0.5,0]);
Material52.transparency = 0.5;
material = Material52;

appearance = Appearance51;

let Sphere53 = browser.currentScene.createNode("Sphere");
Sphere53.radius = 0.006;
geometry = Sphere53;

Transform49YYY.child = new X3D.undefined();

Transform49ZZZ.child[0] = Shape50;

HAnimSegment47ZZZ.children[1] = Transform49;

let Shape54 = browser.currentScene.createNode("Shape");
let LineSet55 = browser.currentScene.createNode("LineSet");
LineSet55.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA56 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA56.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA56.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA56;

let Coordinate57 = browser.currentScene.createNode("Coordinate");
Coordinate57.point = new X3D.MFVec3f([0,0.824,0.0277,0,0.9149,0.0016]);
coord = Coordinate57;

geometry = LineSet55;

HAnimSegment47ZZZ.children[2] = Shape54;

let Shape58 = browser.currentScene.createNode("Shape");
let LineSet59 = browser.currentScene.createNode("LineSet");
LineSet59.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA60 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA60.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA60;

let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.point = new X3D.MFVec3f([0,0.824,0.0277,0.0028,1.0568,-0.0776]);
coord = Coordinate61;

geometry = LineSet59;

HAnimSegment47ZZZ.children[3] = Shape58;

HAnimJoint46YYY.children = new X3D.MFNode();

HAnimJoint46ZZZ.children[0] = HAnimSegment47;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.DEF = "hanim_sacroiliac";
HAnimJoint62.name = "sacroiliac";
HAnimJoint62.center = new X3D.SFVec3f([0,0.9149,0.0016]);
let HAnimSegment63 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment63.DEF = "hanim_pelvis";
HAnimSegment63.name = "pelvis";
let TouchSensor64 = browser.currentScene.createNode("TouchSensor");
TouchSensor64.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment63YYY.children = new X3D.MFNode();

HAnimSegment63ZZZ.children[0] = TouchSensor64;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Shape66 = browser.currentScene.createNode("Shape");
Shape66.USE = "HAnimJointShape";
Transform65YYY.child = new X3D.undefined();

Transform65ZZZ.child[0] = Shape66;

HAnimSegment63ZZZ.children[1] = Transform65;

let Shape67 = browser.currentScene.createNode("Shape");
let LineSet68 = browser.currentScene.createNode("LineSet");
LineSet68.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA69 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA69.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA69;

let Coordinate70 = browser.currentScene.createNode("Coordinate");
Coordinate70.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
coord = Coordinate70;

geometry = LineSet68;

HAnimSegment63ZZZ.children[2] = Shape67;

let Shape71 = browser.currentScene.createNode("Shape");
let LineSet72 = browser.currentScene.createNode("LineSet");
LineSet72.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA73 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA73.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA73;

let Coordinate74 = browser.currentScene.createNode("Coordinate");
Coordinate74.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
coord = Coordinate74;

geometry = LineSet72;

HAnimSegment63ZZZ.children[3] = Shape71;

let Shape75 = browser.currentScene.createNode("Shape");
let LineSet76 = browser.currentScene.createNode("LineSet");
LineSet76.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA77 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA77.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA77.color = new X3D.MFColorRGBA([1,0,0,1,1,0,0,0.1]);
color = ColorRGBA77;

let Coordinate78 = browser.currentScene.createNode("Coordinate");
Coordinate78.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
coord = Coordinate78;

geometry = LineSet76;

HAnimSegment63ZZZ.children[4] = Shape75;

let Shape79 = browser.currentScene.createNode("Shape");
let LineSet80 = browser.currentScene.createNode("LineSet");
LineSet80.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA81 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA81.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA81;

let Coordinate82 = browser.currentScene.createNode("Coordinate");
Coordinate82.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
coord = Coordinate82;

geometry = LineSet80;

HAnimSegment63ZZZ.children[5] = Shape79;

let Shape83 = browser.currentScene.createNode("Shape");
let LineSet84 = browser.currentScene.createNode("LineSet");
LineSet84.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA85 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA85.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA85;

let Coordinate86 = browser.currentScene.createNode("Coordinate");
Coordinate86.point = new X3D.MFVec3f([0,0.9149,0.0016,0.1612,1.0537,0.0008]);
coord = Coordinate86;

geometry = LineSet84;

HAnimSegment63ZZZ.children[6] = Shape83;

let Shape87 = browser.currentScene.createNode("Shape");
let LineSet88 = browser.currentScene.createNode("LineSet");
LineSet88.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA89 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA89.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA89;

let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new X3D.MFVec3f([0,0.9149,0.0016,0.1677,0.8336,0.0303]);
coord = Coordinate90;

geometry = LineSet88;

HAnimSegment63ZZZ.children[7] = Shape87;

let Shape91 = browser.currentScene.createNode("Shape");
let LineSet92 = browser.currentScene.createNode("LineSet");
LineSet92.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA93 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA93.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA93;

let Coordinate94 = browser.currentScene.createNode("Coordinate");
Coordinate94.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
coord = Coordinate94;

geometry = LineSet92;

HAnimSegment63ZZZ.children[8] = Shape91;

let Shape95 = browser.currentScene.createNode("Shape");
let LineSet96 = browser.currentScene.createNode("LineSet");
LineSet96.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA97 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA97.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA97;

let Coordinate98 = browser.currentScene.createNode("Coordinate");
Coordinate98.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0925,0.9983,0.1052]);
coord = Coordinate98;

geometry = LineSet96;

HAnimSegment63ZZZ.children[9] = Shape95;

let Shape99 = browser.currentScene.createNode("Shape");
let LineSet100 = browser.currentScene.createNode("LineSet");
LineSet100.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA101 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA101.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA101;

let Coordinate102 = browser.currentScene.createNode("Coordinate");
Coordinate102.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
coord = Coordinate102;

geometry = LineSet100;

HAnimSegment63ZZZ.children[10] = Shape99;

let Shape103 = browser.currentScene.createNode("Shape");
let LineSet104 = browser.currentScene.createNode("LineSet");
LineSet104.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA105 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA105.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA105;

let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0774,1.019,-0.1151]);
coord = Coordinate106;

geometry = LineSet104;

HAnimSegment63ZZZ.children[11] = Shape103;

let Shape107 = browser.currentScene.createNode("Shape");
let LineSet108 = browser.currentScene.createNode("LineSet");
LineSet108.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA109 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA109.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA109;

let Coordinate110 = browser.currentScene.createNode("Coordinate");
Coordinate110.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0034,0.8266,0.0257]);
coord = Coordinate110;

geometry = LineSet108;

HAnimSegment63ZZZ.children[12] = Shape107;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.DEF = "hanim_r_iliocristale_pt";
HAnimSite111.name = "r_iliocristale_pt";
HAnimSite111.translation = new X3D.SFVec3f([-0.1525,1.0628,0.0035]);
let TouchSensor112 = browser.currentScene.createNode("TouchSensor");
TouchSensor112.description = "HAnimSite r_iliocristale";
HAnimSite111YYY.children = new X3D.MFNode();

HAnimSite111ZZZ.children[0] = TouchSensor112;

let Shape113 = browser.currentScene.createNode("Shape");
Shape113.DEF = "HAnimSiteShape";
let Appearance114 = browser.currentScene.createNode("Appearance");
let Material115 = browser.currentScene.createNode("Material");
Material115.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material115;

appearance = Appearance114;

let IndexedFaceSet116 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet116.DEF = "DiamondIFS";
IndexedFaceSet116.solid = False;
IndexedFaceSet116.creaseAngle = 0.5;
IndexedFaceSet116.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate117 = browser.currentScene.createNode("Coordinate");
Coordinate117.point = new X3D.MFVec3f([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
coord = Coordinate117;

geometry = IndexedFaceSet116;

HAnimSite111ZZZ.children[1] = Shape113;

HAnimSegment63ZZZ.children[13] = HAnimSite111;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.DEF = "hanim_r_trochanterion_pt";
HAnimSite118.name = "r_trochanterion_pt";
HAnimSite118.translation = new X3D.SFVec3f([-0.1689,0.8419,0.0352]);
let TouchSensor119 = browser.currentScene.createNode("TouchSensor");
TouchSensor119.description = "HAnimSite r_trochanterion";
HAnimSite118YYY.children = new X3D.MFNode();

HAnimSite118ZZZ.children[0] = TouchSensor119;

let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118ZZZ.children[1] = Shape120;

HAnimSegment63ZZZ.children[14] = HAnimSite118;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.DEF = "hanim_l_iliocristale_pt";
HAnimSite121.name = "l_iliocristale_pt";
HAnimSite121.translation = new X3D.SFVec3f([0.1612,1.0537,0.0008]);
let TouchSensor122 = browser.currentScene.createNode("TouchSensor");
TouchSensor122.description = "HAnimSite l_iliocristale";
HAnimSite121YYY.children = new X3D.MFNode();

HAnimSite121ZZZ.children[0] = TouchSensor122;

let Shape123 = browser.currentScene.createNode("Shape");
Shape123.USE = "HAnimSiteShape";
HAnimSite121ZZZ.children[1] = Shape123;

HAnimSegment63ZZZ.children[15] = HAnimSite121;

let HAnimSite124 = browser.currentScene.createNode("HAnimSite");
HAnimSite124.DEF = "hanim_l_trochanterion_pt";
HAnimSite124.name = "l_trochanterion_pt";
HAnimSite124.translation = new X3D.SFVec3f([0.1677,0.8336,0.0303]);
let TouchSensor125 = browser.currentScene.createNode("TouchSensor");
TouchSensor125.description = "HAnimSite l_trochanterion";
HAnimSite124YYY.children = new X3D.MFNode();

HAnimSite124ZZZ.children[0] = TouchSensor125;

let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124ZZZ.children[1] = Shape126;

HAnimSegment63ZZZ.children[16] = HAnimSite124;

let HAnimSite127 = browser.currentScene.createNode("HAnimSite");
HAnimSite127.DEF = "hanim_r_asis_pt";
HAnimSite127.name = "r_asis_pt";
HAnimSite127.translation = new X3D.SFVec3f([-0.0887,1.0021,0.1112]);
let TouchSensor128 = browser.currentScene.createNode("TouchSensor");
TouchSensor128.description = "HAnimSite r_asis";
HAnimSite127YYY.children = new X3D.MFNode();

HAnimSite127ZZZ.children[0] = TouchSensor128;

let Shape129 = browser.currentScene.createNode("Shape");
Shape129.USE = "HAnimSiteShape";
HAnimSite127ZZZ.children[1] = Shape129;

HAnimSegment63ZZZ.children[17] = HAnimSite127;

let HAnimSite130 = browser.currentScene.createNode("HAnimSite");
HAnimSite130.DEF = "hanim_l_asis_pt";
HAnimSite130.name = "l_asis_pt";
HAnimSite130.translation = new X3D.SFVec3f([0.0925,0.9983,0.1052]);
let TouchSensor131 = browser.currentScene.createNode("TouchSensor");
TouchSensor131.description = "HAnimSite l_asis";
HAnimSite130YYY.children = new X3D.MFNode();

HAnimSite130ZZZ.children[0] = TouchSensor131;

let Shape132 = browser.currentScene.createNode("Shape");
Shape132.USE = "HAnimSiteShape";
HAnimSite130ZZZ.children[1] = Shape132;

HAnimSegment63ZZZ.children[18] = HAnimSite130;

let HAnimSite133 = browser.currentScene.createNode("HAnimSite");
HAnimSite133.DEF = "hanim_r_psis_pt";
HAnimSite133.name = "r_psis_pt";
HAnimSite133.translation = new X3D.SFVec3f([-0.0716,1.019,-0.1138]);
let TouchSensor134 = browser.currentScene.createNode("TouchSensor");
TouchSensor134.description = "HAnimSite r_psis";
HAnimSite133YYY.children = new X3D.MFNode();

HAnimSite133ZZZ.children[0] = TouchSensor134;

let Shape135 = browser.currentScene.createNode("Shape");
Shape135.USE = "HAnimSiteShape";
HAnimSite133ZZZ.children[1] = Shape135;

HAnimSegment63ZZZ.children[19] = HAnimSite133;

let HAnimSite136 = browser.currentScene.createNode("HAnimSite");
HAnimSite136.DEF = "hanim_l_psis_pt";
HAnimSite136.name = "l_psis_pt";
HAnimSite136.translation = new X3D.SFVec3f([0.0774,1.019,-0.1151]);
let TouchSensor137 = browser.currentScene.createNode("TouchSensor");
TouchSensor137.description = "HAnimSite l_psis";
HAnimSite136YYY.children = new X3D.MFNode();

HAnimSite136ZZZ.children[0] = TouchSensor137;

let Shape138 = browser.currentScene.createNode("Shape");
Shape138.USE = "HAnimSiteShape";
HAnimSite136ZZZ.children[1] = Shape138;

HAnimSegment63ZZZ.children[20] = HAnimSite136;

let HAnimSite139 = browser.currentScene.createNode("HAnimSite");
HAnimSite139.DEF = "hanim_crotch_pt";
HAnimSite139.name = "crotch_pt";
HAnimSite139.translation = new X3D.SFVec3f([0.0034,0.8266,0.0257]);
let TouchSensor140 = browser.currentScene.createNode("TouchSensor");
TouchSensor140.description = "HAnimSite crotch";
HAnimSite139YYY.children = new X3D.MFNode();

HAnimSite139ZZZ.children[0] = TouchSensor140;

let Shape141 = browser.currentScene.createNode("Shape");
Shape141.USE = "HAnimSiteShape";
HAnimSite139ZZZ.children[1] = Shape141;

HAnimSegment63ZZZ.children[21] = HAnimSite139;

HAnimJoint62YYY.children = new X3D.MFNode();

HAnimJoint62ZZZ.children[0] = HAnimSegment63;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.DEF = "hanim_l_hip";
HAnimJoint142.name = "l_hip";
HAnimJoint142.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.DEF = "hanim_l_thigh";
HAnimSegment143.name = "l_thigh";
let TouchSensor144 = browser.currentScene.createNode("TouchSensor");
TouchSensor144.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment143YYY.children = new X3D.MFNode();

HAnimSegment143ZZZ.children[0] = TouchSensor144;

let Transform145 = browser.currentScene.createNode("Transform");
Transform145.translation = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "HAnimJointShape";
Transform145YYY.child = new X3D.undefined();

Transform145ZZZ.child[0] = Shape146;

HAnimSegment143ZZZ.children[1] = Transform145;

let Shape147 = browser.currentScene.createNode("Shape");
let LineSet148 = browser.currentScene.createNode("LineSet");
LineSet148.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA149 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA149.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA149;

let Coordinate150 = browser.currentScene.createNode("Coordinate");
Coordinate150.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
coord = Coordinate150;

geometry = LineSet148;

HAnimSegment143ZZZ.children[2] = Shape147;

let Shape151 = browser.currentScene.createNode("Shape");
let LineSet152 = browser.currentScene.createNode("LineSet");
LineSet152.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA153 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA153.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA153;

let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
coord = Coordinate154;

geometry = LineSet152;

HAnimSegment143ZZZ.children[3] = Shape151;

let Shape155 = browser.currentScene.createNode("Shape");
let LineSet156 = browser.currentScene.createNode("LineSet");
LineSet156.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA157 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA157.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA157;

let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
coord = Coordinate158;

geometry = LineSet156;

HAnimSegment143ZZZ.children[4] = Shape155;

let Shape159 = browser.currentScene.createNode("Shape");
let LineSet160 = browser.currentScene.createNode("LineSet");
LineSet160.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA161 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA161.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA161;

let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
coord = Coordinate162;

geometry = LineSet160;

HAnimSegment143ZZZ.children[5] = Shape159;

let HAnimSite163 = browser.currentScene.createNode("HAnimSite");
HAnimSite163.DEF = "hanim_l_knee_crease_pt";
HAnimSite163.name = "l_knee_crease_pt";
HAnimSite163.translation = new X3D.SFVec3f([0.0993,0.4881,-0.0309]);
let TouchSensor164 = browser.currentScene.createNode("TouchSensor");
TouchSensor164.description = "HAnimSite l_knee_crease";
HAnimSite163YYY.children = new X3D.MFNode();

HAnimSite163ZZZ.children[0] = TouchSensor164;

let Shape165 = browser.currentScene.createNode("Shape");
Shape165.USE = "HAnimSiteShape";
HAnimSite163ZZZ.children[1] = Shape165;

HAnimSegment143ZZZ.children[6] = HAnimSite163;

let HAnimSite166 = browser.currentScene.createNode("HAnimSite");
HAnimSite166.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite166.name = "l_femoral_lateral_epicn_pt";
HAnimSite166.translation = new X3D.SFVec3f([0.1598,0.4967,0.0297]);
let TouchSensor167 = browser.currentScene.createNode("TouchSensor");
TouchSensor167.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite166YYY.children = new X3D.MFNode();

HAnimSite166ZZZ.children[0] = TouchSensor167;

let Shape168 = browser.currentScene.createNode("Shape");
Shape168.USE = "HAnimSiteShape";
HAnimSite166ZZZ.children[1] = Shape168;

HAnimSegment143ZZZ.children[7] = HAnimSite166;

let HAnimSite169 = browser.currentScene.createNode("HAnimSite");
HAnimSite169.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite169.name = "l_femoral_medial_epicn_pt";
HAnimSite169.translation = new X3D.SFVec3f([0.0398,0.4946,0.0303]);
let TouchSensor170 = browser.currentScene.createNode("TouchSensor");
TouchSensor170.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite169YYY.children = new X3D.MFNode();

HAnimSite169ZZZ.children[0] = TouchSensor170;

let Shape171 = browser.currentScene.createNode("Shape");
Shape171.USE = "HAnimSiteShape";
HAnimSite169ZZZ.children[1] = Shape171;

HAnimSegment143ZZZ.children[8] = HAnimSite169;

HAnimJoint142YYY.children = new X3D.MFNode();

HAnimJoint142ZZZ.children[0] = HAnimSegment143;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.DEF = "hanim_l_knee";
HAnimJoint172.name = "l_knee";
HAnimJoint172.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.DEF = "hanim_l_calf";
HAnimSegment173.name = "l_calf";
let TouchSensor174 = browser.currentScene.createNode("TouchSensor");
TouchSensor174.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment173YYY.children = new X3D.MFNode();

HAnimSegment173ZZZ.children[0] = TouchSensor174;

let Transform175 = browser.currentScene.createNode("Transform");
Transform175.translation = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let Shape176 = browser.currentScene.createNode("Shape");
Shape176.USE = "HAnimJointShape";
Transform175YYY.child = new X3D.undefined();

Transform175ZZZ.child[0] = Shape176;

HAnimSegment173ZZZ.children[1] = Transform175;

let Shape177 = browser.currentScene.createNode("Shape");
let LineSet178 = browser.currentScene.createNode("LineSet");
LineSet178.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA179 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA179.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA179;

let Coordinate180 = browser.currentScene.createNode("Coordinate");
Coordinate180.point = new X3D.MFVec3f([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
coord = Coordinate180;

geometry = LineSet178;

HAnimSegment173ZZZ.children[2] = Shape177;

HAnimJoint172YYY.children = new X3D.MFNode();

HAnimJoint172ZZZ.children[0] = HAnimSegment173;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.DEF = "hanim_l_ankle";
HAnimJoint181.name = "l_ankle";
HAnimJoint181.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.DEF = "hanim_l_hindfoot";
HAnimSegment182.name = "l_hindfoot";
let TouchSensor183 = browser.currentScene.createNode("TouchSensor");
TouchSensor183.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment182YYY.children = new X3D.MFNode();

HAnimSegment182ZZZ.children[0] = TouchSensor183;

let Transform184 = browser.currentScene.createNode("Transform");
Transform184.translation = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let Shape185 = browser.currentScene.createNode("Shape");
Shape185.USE = "HAnimJointShape";
Transform184YYY.child = new X3D.undefined();

Transform184ZZZ.child[0] = Shape185;

HAnimSegment182ZZZ.children[1] = Transform184;

let Shape186 = browser.currentScene.createNode("Shape");
let LineSet187 = browser.currentScene.createNode("LineSet");
LineSet187.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA188 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA188;

let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
coord = Coordinate189;

geometry = LineSet187;

HAnimSegment182ZZZ.children[2] = Shape186;

let Shape190 = browser.currentScene.createNode("Shape");
let LineSet191 = browser.currentScene.createNode("LineSet");
LineSet191.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA192 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA192.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA192;

let Coordinate193 = browser.currentScene.createNode("Coordinate");
Coordinate193.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
coord = Coordinate193;

geometry = LineSet191;

HAnimSegment182ZZZ.children[3] = Shape190;

let Shape194 = browser.currentScene.createNode("Shape");
let LineSet195 = browser.currentScene.createNode("LineSet");
LineSet195.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA196 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA196;

let Coordinate197 = browser.currentScene.createNode("Coordinate");
Coordinate197.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
coord = Coordinate197;

geometry = LineSet195;

HAnimSegment182ZZZ.children[4] = Shape194;

let Shape198 = browser.currentScene.createNode("Shape");
let LineSet199 = browser.currentScene.createNode("LineSet");
LineSet199.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA200 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA200.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA200;

let Coordinate201 = browser.currentScene.createNode("Coordinate");
Coordinate201.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
coord = Coordinate201;

geometry = LineSet199;

HAnimSegment182ZZZ.children[5] = Shape198;

let Shape202 = browser.currentScene.createNode("Shape");
let LineSet203 = browser.currentScene.createNode("LineSet");
LineSet203.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA204 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA204.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA204;

let Coordinate205 = browser.currentScene.createNode("Coordinate");
Coordinate205.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
coord = Coordinate205;

geometry = LineSet203;

HAnimSegment182ZZZ.children[6] = Shape202;

let HAnimSite206 = browser.currentScene.createNode("HAnimSite");
HAnimSite206.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite206.name = "l_lateral_malleolus_pt";
HAnimSite206.translation = new X3D.SFVec3f([0.1308,0.0597,-0.1032]);
let TouchSensor207 = browser.currentScene.createNode("TouchSensor");
TouchSensor207.description = "HAnimSite l_lateral_malleolus";
HAnimSite206YYY.children = new X3D.MFNode();

HAnimSite206ZZZ.children[0] = TouchSensor207;

let Shape208 = browser.currentScene.createNode("Shape");
Shape208.USE = "HAnimSiteShape";
HAnimSite206ZZZ.children[1] = Shape208;

HAnimSegment182ZZZ.children[7] = HAnimSite206;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite209.name = "l_medial_malleolus_pt";
HAnimSite209.translation = new X3D.SFVec3f([0.089,0.0716,-0.0881]);
let TouchSensor210 = browser.currentScene.createNode("TouchSensor");
TouchSensor210.description = "HAnimSite l_medial_malleolus";
HAnimSite209YYY.children = new X3D.MFNode();

HAnimSite209ZZZ.children[0] = TouchSensor210;

let Shape211 = browser.currentScene.createNode("Shape");
Shape211.USE = "HAnimSiteShape";
HAnimSite209ZZZ.children[1] = Shape211;

HAnimSegment182ZZZ.children[8] = HAnimSite209;

let HAnimSite212 = browser.currentScene.createNode("HAnimSite");
HAnimSite212.DEF = "hanim_l_sphyrion_pt";
HAnimSite212.name = "l_sphyrion_pt";
HAnimSite212.translation = new X3D.SFVec3f([0.089,0.0575,-0.0943]);
let TouchSensor213 = browser.currentScene.createNode("TouchSensor");
TouchSensor213.description = "HAnimSite l_sphyrion";
HAnimSite212YYY.children = new X3D.MFNode();

HAnimSite212ZZZ.children[0] = TouchSensor213;

let Shape214 = browser.currentScene.createNode("Shape");
Shape214.USE = "HAnimSiteShape";
HAnimSite212ZZZ.children[1] = Shape214;

HAnimSegment182ZZZ.children[9] = HAnimSite212;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite215.name = "l_calcaneous_post_pt";
HAnimSite215.translation = new X3D.SFVec3f([0.0974,0.0259,-0.1171]);
let TouchSensor216 = browser.currentScene.createNode("TouchSensor");
TouchSensor216.description = "HAnimSite l_calcaneous_post";
HAnimSite215YYY.children = new X3D.MFNode();

HAnimSite215ZZZ.children[0] = TouchSensor216;

let Shape217 = browser.currentScene.createNode("Shape");
Shape217.USE = "HAnimSiteShape";
HAnimSite215ZZZ.children[1] = Shape217;

HAnimSegment182ZZZ.children[10] = HAnimSite215;

HAnimJoint181YYY.children = new X3D.MFNode();

HAnimJoint181ZZZ.children[0] = HAnimSegment182;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.DEF = "hanim_l_subtalar";
HAnimJoint218.name = "l_subtalar";
HAnimJoint218.center = new X3D.SFVec3f([0.1086,0.0001,-0.0368]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.DEF = "hanim_l_midproximal";
HAnimSegment219.name = "l_midproximal";
let TouchSensor220 = browser.currentScene.createNode("TouchSensor");
TouchSensor220.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment219YYY.children = new X3D.MFNode();

HAnimSegment219ZZZ.children[0] = TouchSensor220;

let Transform221 = browser.currentScene.createNode("Transform");
Transform221.translation = new X3D.SFVec3f([0.1086,0.0001,-0.0368]);
let Shape222 = browser.currentScene.createNode("Shape");
Shape222.USE = "HAnimJointShape";
Transform221YYY.child = new X3D.undefined();

Transform221ZZZ.child[0] = Shape222;

HAnimSegment219ZZZ.children[1] = Transform221;

let Shape223 = browser.currentScene.createNode("Shape");
let LineSet224 = browser.currentScene.createNode("LineSet");
LineSet224.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA225 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA225;

let Coordinate226 = browser.currentScene.createNode("Coordinate");
Coordinate226.point = new X3D.MFVec3f([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
coord = Coordinate226;

geometry = LineSet224;

HAnimSegment219ZZZ.children[2] = Shape223;

HAnimJoint218YYY.children = new X3D.MFNode();

HAnimJoint218ZZZ.children[0] = HAnimSegment219;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.DEF = "hanim_l_midtarsal";
HAnimJoint227.name = "l_midtarsal";
HAnimJoint227.center = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.DEF = "hanim_l_middistal";
HAnimSegment228.name = "l_middistal";
let TouchSensor229 = browser.currentScene.createNode("TouchSensor");
TouchSensor229.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment228YYY.children = new X3D.MFNode();

HAnimSegment228ZZZ.children[0] = TouchSensor229;

let Transform230 = browser.currentScene.createNode("Transform");
Transform230.translation = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let Shape231 = browser.currentScene.createNode("Shape");
Shape231.USE = "HAnimJointShape";
Transform230YYY.child = new X3D.undefined();

Transform230ZZZ.child[0] = Shape231;

HAnimSegment228ZZZ.children[1] = Transform230;

let Shape232 = browser.currentScene.createNode("Shape");
let LineSet233 = browser.currentScene.createNode("LineSet");
LineSet233.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA234 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA234.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA234;

let Coordinate235 = browser.currentScene.createNode("Coordinate");
Coordinate235.point = new X3D.MFVec3f([0.1086,0.0001,0.0368,0.1086,0,0.0762]);
coord = Coordinate235;

geometry = LineSet233;

HAnimSegment228ZZZ.children[2] = Shape232;

let Shape236 = browser.currentScene.createNode("Shape");
let LineSet237 = browser.currentScene.createNode("LineSet");
LineSet237.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA238 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA238.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA238;

let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new X3D.MFVec3f([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
coord = Coordinate239;

geometry = LineSet237;

HAnimSegment228ZZZ.children[3] = Shape236;

let HAnimSite240 = browser.currentScene.createNode("HAnimSite");
HAnimSite240.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite240.name = "l_metatarsal_pha1_pt";
HAnimSite240.translation = new X3D.SFVec3f([0.0816,0.0232,0.0106]);
let TouchSensor241 = browser.currentScene.createNode("TouchSensor");
TouchSensor241.description = "HAnimSite l_metatarsal_pha1";
HAnimSite240YYY.children = new X3D.MFNode();

HAnimSite240ZZZ.children[0] = TouchSensor241;

let Shape242 = browser.currentScene.createNode("Shape");
Shape242.USE = "HAnimSiteShape";
HAnimSite240ZZZ.children[1] = Shape242;

HAnimSegment228ZZZ.children[4] = HAnimSite240;

HAnimJoint227YYY.children = new X3D.MFNode();

HAnimJoint227ZZZ.children[0] = HAnimSegment228;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.DEF = "hanim_l_metatarsal";
HAnimJoint243.name = "l_metatarsal";
HAnimJoint243.center = new X3D.SFVec3f([0.1086,0,0.0762]);
let HAnimSegment244 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment244.DEF = "hanim_l_forefoot";
HAnimSegment244.name = "l_forefoot";
let TouchSensor245 = browser.currentScene.createNode("TouchSensor");
TouchSensor245.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment244YYY.children = new X3D.MFNode();

HAnimSegment244ZZZ.children[0] = TouchSensor245;

let Transform246 = browser.currentScene.createNode("Transform");
Transform246.translation = new X3D.SFVec3f([0.1086,0,0.0762]);
let Shape247 = browser.currentScene.createNode("Shape");
Shape247.USE = "HAnimJointShape";
Transform246YYY.child = new X3D.undefined();

Transform246ZZZ.child[0] = Shape247;

HAnimSegment244ZZZ.children[1] = Transform246;

let Shape248 = browser.currentScene.createNode("Shape");
let LineSet249 = browser.currentScene.createNode("LineSet");
LineSet249.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA250 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA250.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA250;

let Coordinate251 = browser.currentScene.createNode("Coordinate");
Coordinate251.point = new X3D.MFVec3f([0.1086,0,0.0762,0.1354,0.0016,0.1476]);
coord = Coordinate251;

geometry = LineSet249;

HAnimSegment244ZZZ.children[2] = Shape248;

let Shape252 = browser.currentScene.createNode("Shape");
let LineSet253 = browser.currentScene.createNode("LineSet");
LineSet253.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA254 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA254.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA254;

let Coordinate255 = browser.currentScene.createNode("Coordinate");
Coordinate255.point = new X3D.MFVec3f([0.1086,0,0.0762,0.1825,0.007,0.0928]);
coord = Coordinate255;

geometry = LineSet253;

HAnimSegment244ZZZ.children[3] = Shape252;

let Shape256 = browser.currentScene.createNode("Shape");
let LineSet257 = browser.currentScene.createNode("LineSet");
LineSet257.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA258 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA258.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA258;

let Coordinate259 = browser.currentScene.createNode("Coordinate");
Coordinate259.point = new X3D.MFVec3f([0.1086,0,0.0762,0.1195,0.0079,0.1433]);
coord = Coordinate259;

geometry = LineSet257;

HAnimSegment244ZZZ.children[4] = Shape256;

let HAnimSite260 = browser.currentScene.createNode("HAnimSite");
HAnimSite260.DEF = "hanim_l_forefoot_tip";
HAnimSite260.name = "l_forefoot_tip";
HAnimSite260.translation = new X3D.SFVec3f([0.1354,0.0016,0.1476]);
let TouchSensor261 = browser.currentScene.createNode("TouchSensor");
TouchSensor261.description = "HAnimSite l_forefoot_tip";
HAnimSite260YYY.children = new X3D.MFNode();

HAnimSite260ZZZ.children[0] = TouchSensor261;

let Shape262 = browser.currentScene.createNode("Shape");
Shape262.USE = "HAnimSiteShape";
HAnimSite260ZZZ.children[1] = Shape262;

HAnimSegment244ZZZ.children[5] = HAnimSite260;

let HAnimSite263 = browser.currentScene.createNode("HAnimSite");
HAnimSite263.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite263.name = "l_metatarsal_pha5_pt";
HAnimSite263.translation = new X3D.SFVec3f([0.1825,0.007,0.0928]);
let TouchSensor264 = browser.currentScene.createNode("TouchSensor");
TouchSensor264.description = "HAnimSite l_metatarsal_pha5";
HAnimSite263YYY.children = new X3D.MFNode();

HAnimSite263ZZZ.children[0] = TouchSensor264;

let Shape265 = browser.currentScene.createNode("Shape");
Shape265.USE = "HAnimSiteShape";
HAnimSite263ZZZ.children[1] = Shape265;

HAnimSegment244ZZZ.children[6] = HAnimSite263;

let HAnimSite266 = browser.currentScene.createNode("HAnimSite");
HAnimSite266.DEF = "hanim_l_digit2_pt";
HAnimSite266.name = "l_digit2_pt";
HAnimSite266.translation = new X3D.SFVec3f([0.1195,0.0079,0.1433]);
let TouchSensor267 = browser.currentScene.createNode("TouchSensor");
TouchSensor267.description = "HAnimSite l_digit2";
HAnimSite266YYY.children = new X3D.MFNode();

HAnimSite266ZZZ.children[0] = TouchSensor267;

let Shape268 = browser.currentScene.createNode("Shape");
Shape268.USE = "HAnimSiteShape";
HAnimSite266ZZZ.children[1] = Shape268;

HAnimSegment244ZZZ.children[7] = HAnimSite266;

HAnimJoint243YYY.children = new X3D.MFNode();

HAnimJoint243ZZZ.children[0] = HAnimSegment244;

HAnimJoint227ZZZ.children[1] = HAnimJoint243;

HAnimJoint218ZZZ.children[1] = HAnimJoint227;

HAnimJoint181ZZZ.children[1] = HAnimJoint218;

HAnimJoint172ZZZ.children[1] = HAnimJoint181;

HAnimJoint142ZZZ.children[1] = HAnimJoint172;

HAnimJoint62ZZZ.children[1] = HAnimJoint142;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_r_hip";
HAnimJoint269.name = "r_hip";
HAnimJoint269.center = new X3D.SFVec3f([-0.0961,0.9124,-0.0001]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_r_thigh";
HAnimSegment270.name = "r_thigh";
let TouchSensor271 = browser.currentScene.createNode("TouchSensor");
TouchSensor271.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment270YYY.children = new X3D.MFNode();

HAnimSegment270ZZZ.children[0] = TouchSensor271;

let Transform272 = browser.currentScene.createNode("Transform");
Transform272.translation = new X3D.SFVec3f([-0.0961,0.9124,-0.0001]);
let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272YYY.child = new X3D.undefined();

Transform272ZZZ.child[0] = Shape273;

HAnimSegment270ZZZ.children[1] = Transform272;

let Shape274 = browser.currentScene.createNode("Shape");
let LineSet275 = browser.currentScene.createNode("LineSet");
LineSet275.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA276 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA276.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA276;

let Coordinate277 = browser.currentScene.createNode("Coordinate");
Coordinate277.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
coord = Coordinate277;

geometry = LineSet275;

HAnimSegment270ZZZ.children[2] = Shape274;

let Shape278 = browser.currentScene.createNode("Shape");
let LineSet279 = browser.currentScene.createNode("LineSet");
LineSet279.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA280 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA280.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA280;

let Coordinate281 = browser.currentScene.createNode("Coordinate");
Coordinate281.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
coord = Coordinate281;

geometry = LineSet279;

HAnimSegment270ZZZ.children[3] = Shape278;

let Shape282 = browser.currentScene.createNode("Shape");
let LineSet283 = browser.currentScene.createNode("LineSet");
LineSet283.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA284 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA284.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA284;

let Coordinate285 = browser.currentScene.createNode("Coordinate");
Coordinate285.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
coord = Coordinate285;

geometry = LineSet283;

HAnimSegment270ZZZ.children[4] = Shape282;

let Shape286 = browser.currentScene.createNode("Shape");
let LineSet287 = browser.currentScene.createNode("LineSet");
LineSet287.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA288 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA288;

let Coordinate289 = browser.currentScene.createNode("Coordinate");
Coordinate289.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
coord = Coordinate289;

geometry = LineSet287;

HAnimSegment270ZZZ.children[5] = Shape286;

let HAnimSite290 = browser.currentScene.createNode("HAnimSite");
HAnimSite290.DEF = "hanim_r_knee_crease_pt";
HAnimSite290.name = "r_knee_crease_pt";
HAnimSite290.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
let TouchSensor291 = browser.currentScene.createNode("TouchSensor");
TouchSensor291.description = "HAnimSite r_knee_crease";
HAnimSite290YYY.children = new X3D.MFNode();

HAnimSite290ZZZ.children[0] = TouchSensor291;

let Shape292 = browser.currentScene.createNode("Shape");
Shape292.USE = "HAnimSiteShape";
HAnimSite290ZZZ.children[1] = Shape292;

HAnimSegment270ZZZ.children[6] = HAnimSite290;

let HAnimSite293 = browser.currentScene.createNode("HAnimSite");
HAnimSite293.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite293.name = "r_femoral_lateral_epicn_pt";
HAnimSite293.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
let TouchSensor294 = browser.currentScene.createNode("TouchSensor");
TouchSensor294.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite293YYY.children = new X3D.MFNode();

HAnimSite293ZZZ.children[0] = TouchSensor294;

let Shape295 = browser.currentScene.createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293ZZZ.children[1] = Shape295;

HAnimSegment270ZZZ.children[7] = HAnimSite293;

let HAnimSite296 = browser.currentScene.createNode("HAnimSite");
HAnimSite296.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite296.name = "r_femoral_medial_epicn_pt";
HAnimSite296.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
let TouchSensor297 = browser.currentScene.createNode("TouchSensor");
TouchSensor297.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite296YYY.children = new X3D.MFNode();

HAnimSite296ZZZ.children[0] = TouchSensor297;

let Shape298 = browser.currentScene.createNode("Shape");
Shape298.USE = "HAnimSiteShape";
HAnimSite296ZZZ.children[1] = Shape298;

HAnimSegment270ZZZ.children[8] = HAnimSite296;

HAnimJoint269YYY.children = new X3D.MFNode();

HAnimJoint269ZZZ.children[0] = HAnimSegment270;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.DEF = "hanim_r_knee";
HAnimJoint299.name = "r_knee";
HAnimJoint299.center = new X3D.SFVec3f([-0.104,0.4867,0.0308]);
let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.DEF = "hanim_r_calf";
HAnimSegment300.name = "r_calf";
let TouchSensor301 = browser.currentScene.createNode("TouchSensor");
TouchSensor301.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment300YYY.children = new X3D.MFNode();

HAnimSegment300ZZZ.children[0] = TouchSensor301;

let Transform302 = browser.currentScene.createNode("Transform");
Transform302.translation = new X3D.SFVec3f([-0.104,0.4867,0.0308]);
let Shape303 = browser.currentScene.createNode("Shape");
Shape303.USE = "HAnimJointShape";
Transform302YYY.child = new X3D.undefined();

Transform302ZZZ.child[0] = Shape303;

HAnimSegment300ZZZ.children[1] = Transform302;

let Shape304 = browser.currentScene.createNode("Shape");
let LineSet305 = browser.currentScene.createNode("LineSet");
LineSet305.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA306 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA306;

let Coordinate307 = browser.currentScene.createNode("Coordinate");
Coordinate307.point = new X3D.MFVec3f([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
coord = Coordinate307;

geometry = LineSet305;

HAnimSegment300ZZZ.children[2] = Shape304;

HAnimJoint299YYY.children = new X3D.MFNode();

HAnimJoint299ZZZ.children[0] = HAnimSegment300;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.DEF = "hanim_r_ankle";
HAnimJoint308.name = "r_ankle";
HAnimJoint308.center = new X3D.SFVec3f([-0.1101,0.0656,-0.0736]);
let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.DEF = "hanim_r_hindfoot";
HAnimSegment309.name = "r_hindfoot";
let TouchSensor310 = browser.currentScene.createNode("TouchSensor");
TouchSensor310.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment309YYY.children = new X3D.MFNode();

HAnimSegment309ZZZ.children[0] = TouchSensor310;

let Transform311 = browser.currentScene.createNode("Transform");
Transform311.translation = new X3D.SFVec3f([-0.1101,0.0656,-0.0736]);
let Shape312 = browser.currentScene.createNode("Shape");
Shape312.USE = "HAnimJointShape";
Transform311YYY.child = new X3D.undefined();

Transform311ZZZ.child[0] = Shape312;

HAnimSegment309ZZZ.children[1] = Transform311;

let Shape313 = browser.currentScene.createNode("Shape");
let LineSet314 = browser.currentScene.createNode("LineSet");
LineSet314.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA315 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA315;

let Coordinate316 = browser.currentScene.createNode("Coordinate");
Coordinate316.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
coord = Coordinate316;

geometry = LineSet314;

HAnimSegment309ZZZ.children[2] = Shape313;

let Shape317 = browser.currentScene.createNode("Shape");
let LineSet318 = browser.currentScene.createNode("LineSet");
LineSet318.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA319 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA319.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA319;

let Coordinate320 = browser.currentScene.createNode("Coordinate");
Coordinate320.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
coord = Coordinate320;

geometry = LineSet318;

HAnimSegment309ZZZ.children[3] = Shape317;

let Shape321 = browser.currentScene.createNode("Shape");
let LineSet322 = browser.currentScene.createNode("LineSet");
LineSet322.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA323 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA323;

let Coordinate324 = browser.currentScene.createNode("Coordinate");
Coordinate324.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
coord = Coordinate324;

geometry = LineSet322;

HAnimSegment309ZZZ.children[4] = Shape321;

let Shape325 = browser.currentScene.createNode("Shape");
let LineSet326 = browser.currentScene.createNode("LineSet");
LineSet326.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA327 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA327;

let Coordinate328 = browser.currentScene.createNode("Coordinate");
Coordinate328.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
coord = Coordinate328;

geometry = LineSet326;

HAnimSegment309ZZZ.children[5] = Shape325;

let Shape329 = browser.currentScene.createNode("Shape");
let LineSet330 = browser.currentScene.createNode("LineSet");
LineSet330.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA331;

let Coordinate332 = browser.currentScene.createNode("Coordinate");
Coordinate332.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
coord = Coordinate332;

geometry = LineSet330;

HAnimSegment309ZZZ.children[6] = Shape329;

let HAnimSite333 = browser.currentScene.createNode("HAnimSite");
HAnimSite333.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite333.name = "r_lateral_malleolus_pt";
HAnimSite333.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
let TouchSensor334 = browser.currentScene.createNode("TouchSensor");
TouchSensor334.description = "HAnimSite r_lateral_malleolus";
HAnimSite333YYY.children = new X3D.MFNode();

HAnimSite333ZZZ.children[0] = TouchSensor334;

let Shape335 = browser.currentScene.createNode("Shape");
Shape335.USE = "HAnimSiteShape";
HAnimSite333ZZZ.children[1] = Shape335;

HAnimSegment309ZZZ.children[7] = HAnimSite333;

let HAnimSite336 = browser.currentScene.createNode("HAnimSite");
HAnimSite336.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite336.name = "r_medial_malleolus_pt";
HAnimSite336.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
let TouchSensor337 = browser.currentScene.createNode("TouchSensor");
TouchSensor337.description = "HAnimSite r_medial_malleolus";
HAnimSite336YYY.children = new X3D.MFNode();

HAnimSite336ZZZ.children[0] = TouchSensor337;

let Shape338 = browser.currentScene.createNode("Shape");
Shape338.USE = "HAnimSiteShape";
HAnimSite336ZZZ.children[1] = Shape338;

HAnimSegment309ZZZ.children[8] = HAnimSite336;

let HAnimSite339 = browser.currentScene.createNode("HAnimSite");
HAnimSite339.DEF = "hanim_r_sphyrion_pt";
HAnimSite339.name = "r_sphyrion_pt";
HAnimSite339.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
let TouchSensor340 = browser.currentScene.createNode("TouchSensor");
TouchSensor340.description = "HAnimSite r_sphyrion";
HAnimSite339YYY.children = new X3D.MFNode();

HAnimSite339ZZZ.children[0] = TouchSensor340;

let Shape341 = browser.currentScene.createNode("Shape");
Shape341.USE = "HAnimSiteShape";
HAnimSite339ZZZ.children[1] = Shape341;

HAnimSegment309ZZZ.children[9] = HAnimSite339;

let HAnimSite342 = browser.currentScene.createNode("HAnimSite");
HAnimSite342.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite342.name = "r_calcaneous_post_pt";
HAnimSite342.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
let TouchSensor343 = browser.currentScene.createNode("TouchSensor");
TouchSensor343.description = "HAnimSite r_calcaneous_post";
HAnimSite342YYY.children = new X3D.MFNode();

HAnimSite342ZZZ.children[0] = TouchSensor343;

let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "HAnimSiteShape";
HAnimSite342ZZZ.children[1] = Shape344;

HAnimSegment309ZZZ.children[10] = HAnimSite342;

HAnimJoint308YYY.children = new X3D.MFNode();

HAnimJoint308ZZZ.children[0] = HAnimSegment309;

let HAnimJoint345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint345.DEF = "hanim_r_subtalar";
HAnimJoint345.name = "r_subtalar";
HAnimJoint345.center = new X3D.SFVec3f([-0.1086,0.0001,-0.0368]);
let HAnimSegment346 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment346.DEF = "hanim_r_midproximal";
HAnimSegment346.name = "r_midproximal";
let TouchSensor347 = browser.currentScene.createNode("TouchSensor");
TouchSensor347.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment346YYY.children = new X3D.MFNode();

HAnimSegment346ZZZ.children[0] = TouchSensor347;

let Transform348 = browser.currentScene.createNode("Transform");
Transform348.translation = new X3D.SFVec3f([-0.1086,0.0001,-0.0368]);
let Shape349 = browser.currentScene.createNode("Shape");
Shape349.USE = "HAnimJointShape";
Transform348YYY.child = new X3D.undefined();

Transform348ZZZ.child[0] = Shape349;

HAnimSegment346ZZZ.children[1] = Transform348;

let Shape350 = browser.currentScene.createNode("Shape");
let LineSet351 = browser.currentScene.createNode("LineSet");
LineSet351.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA352 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA352.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA352;

let Coordinate353 = browser.currentScene.createNode("Coordinate");
Coordinate353.point = new X3D.MFVec3f([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
coord = Coordinate353;

geometry = LineSet351;

HAnimSegment346ZZZ.children[2] = Shape350;

HAnimJoint345YYY.children = new X3D.MFNode();

HAnimJoint345ZZZ.children[0] = HAnimSegment346;

let HAnimJoint354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint354.DEF = "hanim_r_midtarsal";
HAnimJoint354.name = "r_midtarsal";
HAnimJoint354.center = new X3D.SFVec3f([-0.1086,0.0001,0.0368]);
let HAnimSegment355 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment355.DEF = "hanim_r_middistal";
HAnimSegment355.name = "r_middistal";
let TouchSensor356 = browser.currentScene.createNode("TouchSensor");
TouchSensor356.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment355YYY.children = new X3D.MFNode();

HAnimSegment355ZZZ.children[0] = TouchSensor356;

let Transform357 = browser.currentScene.createNode("Transform");
Transform357.translation = new X3D.SFVec3f([-0.1086,0.0001,0.0368]);
let Shape358 = browser.currentScene.createNode("Shape");
Shape358.USE = "HAnimJointShape";
Transform357YYY.child = new X3D.undefined();

Transform357ZZZ.child[0] = Shape358;

HAnimSegment355ZZZ.children[1] = Transform357;

let Shape359 = browser.currentScene.createNode("Shape");
let LineSet360 = browser.currentScene.createNode("LineSet");
LineSet360.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA361 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA361.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA361;

let Coordinate362 = browser.currentScene.createNode("Coordinate");
Coordinate362.point = new X3D.MFVec3f([-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
coord = Coordinate362;

geometry = LineSet360;

HAnimSegment355ZZZ.children[2] = Shape359;

let Shape363 = browser.currentScene.createNode("Shape");
let LineSet364 = browser.currentScene.createNode("LineSet");
LineSet364.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA365 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA365.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA365;

let Coordinate366 = browser.currentScene.createNode("Coordinate");
Coordinate366.point = new X3D.MFVec3f([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
coord = Coordinate366;

geometry = LineSet364;

HAnimSegment355ZZZ.children[3] = Shape363;

let HAnimSite367 = browser.currentScene.createNode("HAnimSite");
HAnimSite367.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite367.name = "r_metatarsal_pha1_pt";
HAnimSite367.translation = new X3D.SFVec3f([-0.0521,0.026,0.0127]);
let TouchSensor368 = browser.currentScene.createNode("TouchSensor");
TouchSensor368.description = "HAnimSite r_metatarsal_pha1";
HAnimSite367YYY.children = new X3D.MFNode();

HAnimSite367ZZZ.children[0] = TouchSensor368;

let Shape369 = browser.currentScene.createNode("Shape");
Shape369.USE = "HAnimSiteShape";
HAnimSite367ZZZ.children[1] = Shape369;

HAnimSegment355ZZZ.children[4] = HAnimSite367;

HAnimJoint354YYY.children = new X3D.MFNode();

HAnimJoint354ZZZ.children[0] = HAnimSegment355;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.DEF = "hanim_r_metatarsal";
HAnimJoint370.name = "r_metatarsal";
HAnimJoint370.center = new X3D.SFVec3f([-0.1086,0,0.0762]);
let HAnimSegment371 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment371.DEF = "hanim_r_forefoot";
HAnimSegment371.name = "r_forefoot";
let TouchSensor372 = browser.currentScene.createNode("TouchSensor");
TouchSensor372.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment371YYY.children = new X3D.MFNode();

HAnimSegment371ZZZ.children[0] = TouchSensor372;

let Transform373 = browser.currentScene.createNode("Transform");
Transform373.translation = new X3D.SFVec3f([-0.1086,0,0.0762]);
let Shape374 = browser.currentScene.createNode("Shape");
Shape374.USE = "HAnimJointShape";
Transform373YYY.child = new X3D.undefined();

Transform373ZZZ.child[0] = Shape374;

HAnimSegment371ZZZ.children[1] = Transform373;

let Shape375 = browser.currentScene.createNode("Shape");
let LineSet376 = browser.currentScene.createNode("LineSet");
LineSet376.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA377 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA377.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA377;

let Coordinate378 = browser.currentScene.createNode("Coordinate");
Coordinate378.point = new X3D.MFVec3f([-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
coord = Coordinate378;

geometry = LineSet376;

HAnimSegment371ZZZ.children[2] = Shape375;

let Shape379 = browser.currentScene.createNode("Shape");
let LineSet380 = browser.currentScene.createNode("LineSet");
LineSet380.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA381 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA381.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA381;

let Coordinate382 = browser.currentScene.createNode("Coordinate");
Coordinate382.point = new X3D.MFVec3f([-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
coord = Coordinate382;

geometry = LineSet380;

HAnimSegment371ZZZ.children[3] = Shape379;

let Shape383 = browser.currentScene.createNode("Shape");
let LineSet384 = browser.currentScene.createNode("LineSet");
LineSet384.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA385 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA385.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA385;

let Coordinate386 = browser.currentScene.createNode("Coordinate");
Coordinate386.point = new X3D.MFVec3f([-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
coord = Coordinate386;

geometry = LineSet384;

HAnimSegment371ZZZ.children[4] = Shape383;

let HAnimSite387 = browser.currentScene.createNode("HAnimSite");
HAnimSite387.DEF = "hanim_r_forefoot_tip";
HAnimSite387.name = "r_forefoot_tip";
HAnimSite387.translation = new X3D.SFVec3f([-0.1043,0.0227,0.145]);
let TouchSensor388 = browser.currentScene.createNode("TouchSensor");
TouchSensor388.description = "HAnimSite r_forefoot_tip";
HAnimSite387YYY.children = new X3D.MFNode();

HAnimSite387ZZZ.children[0] = TouchSensor388;

let Shape389 = browser.currentScene.createNode("Shape");
Shape389.USE = "HAnimSiteShape";
HAnimSite387ZZZ.children[1] = Shape389;

HAnimSegment371ZZZ.children[5] = HAnimSite387;

let HAnimSite390 = browser.currentScene.createNode("HAnimSite");
HAnimSite390.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite390.name = "r_metatarsal_pha5_pt";
HAnimSite390.translation = new X3D.SFVec3f([-0.1523,0.0166,0.0895]);
let TouchSensor391 = browser.currentScene.createNode("TouchSensor");
TouchSensor391.description = "HAnimSite r_metatarsal_pha5";
HAnimSite390YYY.children = new X3D.MFNode();

HAnimSite390ZZZ.children[0] = TouchSensor391;

let Shape392 = browser.currentScene.createNode("Shape");
Shape392.USE = "HAnimSiteShape";
HAnimSite390ZZZ.children[1] = Shape392;

HAnimSegment371ZZZ.children[6] = HAnimSite390;

let HAnimSite393 = browser.currentScene.createNode("HAnimSite");
HAnimSite393.DEF = "hanim_r_digit2_pt";
HAnimSite393.name = "r_digit2_pt";
HAnimSite393.translation = new X3D.SFVec3f([-0.0883,0.0134,0.1383]);
let TouchSensor394 = browser.currentScene.createNode("TouchSensor");
TouchSensor394.description = "HAnimSite r_digit2";
HAnimSite393YYY.children = new X3D.MFNode();

HAnimSite393ZZZ.children[0] = TouchSensor394;

let Shape395 = browser.currentScene.createNode("Shape");
Shape395.USE = "HAnimSiteShape";
HAnimSite393ZZZ.children[1] = Shape395;

HAnimSegment371ZZZ.children[7] = HAnimSite393;

HAnimJoint370YYY.children = new X3D.MFNode();

HAnimJoint370ZZZ.children[0] = HAnimSegment371;

HAnimJoint354ZZZ.children[1] = HAnimJoint370;

HAnimJoint345ZZZ.children[1] = HAnimJoint354;

HAnimJoint308ZZZ.children[1] = HAnimJoint345;

HAnimJoint299ZZZ.children[1] = HAnimJoint308;

HAnimJoint269ZZZ.children[1] = HAnimJoint299;

HAnimJoint62ZZZ.children[2] = HAnimJoint269;

HAnimJoint46ZZZ.children[1] = HAnimJoint62;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint396.DEF = "hanim_vl5";
HAnimJoint396.name = "vl5";
HAnimJoint396.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let HAnimSegment397 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment397.DEF = "hanim_l5";
HAnimSegment397.name = "l5";
let TouchSensor398 = browser.currentScene.createNode("TouchSensor");
TouchSensor398.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment397YYY.children = new X3D.MFNode();

HAnimSegment397ZZZ.children[0] = TouchSensor398;

let Transform399 = browser.currentScene.createNode("Transform");
Transform399.translation = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let Shape400 = browser.currentScene.createNode("Shape");
Shape400.USE = "HAnimJointShape";
Transform399YYY.child = new X3D.undefined();

Transform399ZZZ.child[0] = Shape400;

HAnimSegment397ZZZ.children[1] = Transform399;

let Shape401 = browser.currentScene.createNode("Shape");
let LineSet402 = browser.currentScene.createNode("LineSet");
LineSet402.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA403 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA403;

let Coordinate404 = browser.currentScene.createNode("Coordinate");
Coordinate404.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
coord = Coordinate404;

geometry = LineSet402;

HAnimSegment397ZZZ.children[2] = Shape401;

let Shape405 = browser.currentScene.createNode("Shape");
let LineSet406 = browser.currentScene.createNode("LineSet");
LineSet406.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA407 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA407.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA407;

let Coordinate408 = browser.currentScene.createNode("Coordinate");
Coordinate408.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
coord = Coordinate408;

geometry = LineSet406;

HAnimSegment397ZZZ.children[3] = Shape405;

let Shape409 = browser.currentScene.createNode("Shape");
let LineSet410 = browser.currentScene.createNode("LineSet");
LineSet410.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA411 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA411.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA411;

let Coordinate412 = browser.currentScene.createNode("Coordinate");
Coordinate412.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
coord = Coordinate412;

geometry = LineSet410;

HAnimSegment397ZZZ.children[4] = Shape409;

let HAnimSite413 = browser.currentScene.createNode("HAnimSite");
HAnimSite413.DEF = "hanim_waist_preferred_post_pt";
HAnimSite413.name = "waist_preferred_post_pt";
HAnimSite413.translation = new X3D.SFVec3f([0,1.0915,-0.1091]);
let TouchSensor414 = browser.currentScene.createNode("TouchSensor");
TouchSensor414.description = "HAnimSite waist_preferred_post";
HAnimSite413YYY.children = new X3D.MFNode();

HAnimSite413ZZZ.children[0] = TouchSensor414;

let Shape415 = browser.currentScene.createNode("Shape");
Shape415.USE = "HAnimSiteShape";
HAnimSite413ZZZ.children[1] = Shape415;

HAnimSegment397ZZZ.children[5] = HAnimSite413;

let HAnimSite416 = browser.currentScene.createNode("HAnimSite");
HAnimSite416.DEF = "hanim_navel_pt";
HAnimSite416.name = "navel_pt";
HAnimSite416.translation = new X3D.SFVec3f([0.0069,1.0966,0.1017]);
let TouchSensor417 = browser.currentScene.createNode("TouchSensor");
TouchSensor417.description = "HAnimSite navel";
HAnimSite416YYY.children = new X3D.MFNode();

HAnimSite416ZZZ.children[0] = TouchSensor417;

let Shape418 = browser.currentScene.createNode("Shape");
Shape418.USE = "HAnimSiteShape";
HAnimSite416ZZZ.children[1] = Shape418;

HAnimSegment397ZZZ.children[6] = HAnimSite416;

HAnimJoint396YYY.children = new X3D.MFNode();

HAnimJoint396ZZZ.children[0] = HAnimSegment397;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.DEF = "hanim_vl4";
HAnimJoint419.name = "vl4";
HAnimJoint419.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let HAnimSegment420 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment420.DEF = "hanim_l4";
HAnimSegment420.name = "l4";
let TouchSensor421 = browser.currentScene.createNode("TouchSensor");
TouchSensor421.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment420YYY.children = new X3D.MFNode();

HAnimSegment420ZZZ.children[0] = TouchSensor421;

let Transform422 = browser.currentScene.createNode("Transform");
Transform422.translation = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let Shape423 = browser.currentScene.createNode("Shape");
Shape423.USE = "HAnimJointShape";
Transform422YYY.child = new X3D.undefined();

Transform422ZZZ.child[0] = Shape423;

HAnimSegment420ZZZ.children[1] = Transform422;

let Shape424 = browser.currentScene.createNode("Shape");
let LineSet425 = browser.currentScene.createNode("LineSet");
LineSet425.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA426 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA426.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA426;

let Coordinate427 = browser.currentScene.createNode("Coordinate");
Coordinate427.point = new X3D.MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
coord = Coordinate427;

geometry = LineSet425;

HAnimSegment420ZZZ.children[2] = Shape424;

HAnimJoint419YYY.children = new X3D.MFNode();

HAnimJoint419ZZZ.children[0] = HAnimSegment420;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.DEF = "hanim_vl3";
HAnimJoint428.name = "vl3";
HAnimJoint428.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let HAnimSegment429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment429.DEF = "hanim_l3";
HAnimSegment429.name = "l3";
let TouchSensor430 = browser.currentScene.createNode("TouchSensor");
TouchSensor430.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment429YYY.children = new X3D.MFNode();

HAnimSegment429ZZZ.children[0] = TouchSensor430;

let Transform431 = browser.currentScene.createNode("Transform");
Transform431.translation = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "HAnimJointShape";
Transform431YYY.child = new X3D.undefined();

Transform431ZZZ.child[0] = Shape432;

HAnimSegment429ZZZ.children[1] = Transform431;

let Shape433 = browser.currentScene.createNode("Shape");
let LineSet434 = browser.currentScene.createNode("LineSet");
LineSet434.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA435 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA435.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA435;

let Coordinate436 = browser.currentScene.createNode("Coordinate");
Coordinate436.point = new X3D.MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
coord = Coordinate436;

geometry = LineSet434;

HAnimSegment429ZZZ.children[2] = Shape433;

HAnimJoint428YYY.children = new X3D.MFNode();

HAnimJoint428ZZZ.children[0] = HAnimSegment429;

let HAnimJoint437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint437.DEF = "hanim_vl2";
HAnimJoint437.name = "vl2";
HAnimJoint437.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.DEF = "hanim_l2";
HAnimSegment438.name = "l2";
let TouchSensor439 = browser.currentScene.createNode("TouchSensor");
TouchSensor439.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment438YYY.children = new X3D.MFNode();

HAnimSegment438ZZZ.children[0] = TouchSensor439;

let Transform440 = browser.currentScene.createNode("Transform");
Transform440.translation = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440YYY.child = new X3D.undefined();

Transform440ZZZ.child[0] = Shape441;

HAnimSegment438ZZZ.children[1] = Transform440;

let Shape442 = browser.currentScene.createNode("Shape");
let LineSet443 = browser.currentScene.createNode("LineSet");
LineSet443.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA444 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA444.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA444;

let Coordinate445 = browser.currentScene.createNode("Coordinate");
Coordinate445.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
coord = Coordinate445;

geometry = LineSet443;

HAnimSegment438ZZZ.children[2] = Shape442;

let Shape446 = browser.currentScene.createNode("Shape");
let LineSet447 = browser.currentScene.createNode("LineSet");
LineSet447.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA448 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA448.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA448;

let Coordinate449 = browser.currentScene.createNode("Coordinate");
Coordinate449.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
coord = Coordinate449;

geometry = LineSet447;

HAnimSegment438ZZZ.children[3] = Shape446;

let Shape450 = browser.currentScene.createNode("Shape");
let LineSet451 = browser.currentScene.createNode("LineSet");
LineSet451.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA452 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA452;

let Coordinate453 = browser.currentScene.createNode("Coordinate");
Coordinate453.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
coord = Coordinate453;

geometry = LineSet451;

HAnimSegment438ZZZ.children[4] = Shape450;

let Shape454 = browser.currentScene.createNode("Shape");
let LineSet455 = browser.currentScene.createNode("LineSet");
LineSet455.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA456 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA456;

let Coordinate457 = browser.currentScene.createNode("Coordinate");
Coordinate457.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
coord = Coordinate457;

geometry = LineSet455;

HAnimSegment438ZZZ.children[5] = Shape454;

let HAnimSite458 = browser.currentScene.createNode("HAnimSite");
HAnimSite458.DEF = "hanim_r_rib10_pt";
HAnimSite458.name = "r_rib10_pt";
HAnimSite458.translation = new X3D.SFVec3f([-0.0711,1.1941,0.1016]);
let TouchSensor459 = browser.currentScene.createNode("TouchSensor");
TouchSensor459.description = "HAnimSite r_rib10";
HAnimSite458YYY.children = new X3D.MFNode();

HAnimSite458ZZZ.children[0] = TouchSensor459;

let Shape460 = browser.currentScene.createNode("Shape");
Shape460.USE = "HAnimSiteShape";
HAnimSite458ZZZ.children[1] = Shape460;

HAnimSegment438ZZZ.children[6] = HAnimSite458;

let HAnimSite461 = browser.currentScene.createNode("HAnimSite");
HAnimSite461.DEF = "hanim_l_rib10_pt";
HAnimSite461.name = "l_rib10_pt";
HAnimSite461.translation = new X3D.SFVec3f([0.0871,1.1925,0.0992]);
let TouchSensor462 = browser.currentScene.createNode("TouchSensor");
TouchSensor462.description = "HAnimSite l_rib10";
HAnimSite461YYY.children = new X3D.MFNode();

HAnimSite461ZZZ.children[0] = TouchSensor462;

let Shape463 = browser.currentScene.createNode("Shape");
Shape463.USE = "HAnimSiteShape";
HAnimSite461ZZZ.children[1] = Shape463;

HAnimSegment438ZZZ.children[7] = HAnimSite461;

let HAnimSite464 = browser.currentScene.createNode("HAnimSite");
HAnimSite464.DEF = "hanim_rib10_midspine_pt";
HAnimSite464.name = "rib10_midspine_pt";
HAnimSite464.translation = new X3D.SFVec3f([0.0049,1.1908,-0.1113]);
let TouchSensor465 = browser.currentScene.createNode("TouchSensor");
TouchSensor465.description = "HAnimSite rib10_midspine";
HAnimSite464YYY.children = new X3D.MFNode();

HAnimSite464ZZZ.children[0] = TouchSensor465;

let Shape466 = browser.currentScene.createNode("Shape");
Shape466.USE = "HAnimSiteShape";
HAnimSite464ZZZ.children[1] = Shape466;

HAnimSegment438ZZZ.children[8] = HAnimSite464;

HAnimJoint437YYY.children = new X3D.MFNode();

HAnimJoint437ZZZ.children[0] = HAnimSegment438;

let HAnimJoint467 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint467.DEF = "hanim_vl1";
HAnimJoint467.name = "vl1";
HAnimJoint467.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let HAnimSegment468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment468.DEF = "hanim_l1";
HAnimSegment468.name = "l1";
let TouchSensor469 = browser.currentScene.createNode("TouchSensor");
TouchSensor469.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment468YYY.children = new X3D.MFNode();

HAnimSegment468ZZZ.children[0] = TouchSensor469;

let Transform470 = browser.currentScene.createNode("Transform");
Transform470.translation = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let Shape471 = browser.currentScene.createNode("Shape");
Shape471.USE = "HAnimJointShape";
Transform470YYY.child = new X3D.undefined();

Transform470ZZZ.child[0] = Shape471;

HAnimSegment468ZZZ.children[1] = Transform470;

let Shape472 = browser.currentScene.createNode("Shape");
let LineSet473 = browser.currentScene.createNode("LineSet");
LineSet473.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA474 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA474.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA474;

let Coordinate475 = browser.currentScene.createNode("Coordinate");
Coordinate475.point = new X3D.MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
coord = Coordinate475;

geometry = LineSet473;

HAnimSegment468ZZZ.children[2] = Shape472;

HAnimJoint467YYY.children = new X3D.MFNode();

HAnimJoint467ZZZ.children[0] = HAnimSegment468;

let HAnimJoint476 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint476.DEF = "hanim_vt12";
HAnimJoint476.name = "vt12";
HAnimJoint476.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let HAnimSegment477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment477.DEF = "hanim_t12";
HAnimSegment477.name = "t12";
let TouchSensor478 = browser.currentScene.createNode("TouchSensor");
TouchSensor478.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment477YYY.children = new X3D.MFNode();

HAnimSegment477ZZZ.children[0] = TouchSensor478;

let Transform479 = browser.currentScene.createNode("Transform");
Transform479.translation = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "HAnimJointShape";
Transform479YYY.child = new X3D.undefined();

Transform479ZZZ.child[0] = Shape480;

HAnimSegment477ZZZ.children[1] = Transform479;

let Shape481 = browser.currentScene.createNode("Shape");
let LineSet482 = browser.currentScene.createNode("LineSet");
LineSet482.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA483 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA483.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA483;

let Coordinate484 = browser.currentScene.createNode("Coordinate");
Coordinate484.point = new X3D.MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
coord = Coordinate484;

geometry = LineSet482;

HAnimSegment477ZZZ.children[2] = Shape481;

HAnimJoint476YYY.children = new X3D.MFNode();

HAnimJoint476ZZZ.children[0] = HAnimSegment477;

let HAnimJoint485 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint485.DEF = "hanim_vt11";
HAnimJoint485.name = "vt11";
HAnimJoint485.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.DEF = "hanim_t11";
HAnimSegment486.name = "t11";
let TouchSensor487 = browser.currentScene.createNode("TouchSensor");
TouchSensor487.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment486YYY.children = new X3D.MFNode();

HAnimSegment486ZZZ.children[0] = TouchSensor487;

let Transform488 = browser.currentScene.createNode("Transform");
Transform488.translation = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let Shape489 = browser.currentScene.createNode("Shape");
Shape489.USE = "HAnimJointShape";
Transform488YYY.child = new X3D.undefined();

Transform488ZZZ.child[0] = Shape489;

HAnimSegment486ZZZ.children[1] = Transform488;

let Shape490 = browser.currentScene.createNode("Shape");
let LineSet491 = browser.currentScene.createNode("LineSet");
LineSet491.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA492 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA492.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA492;

let Coordinate493 = browser.currentScene.createNode("Coordinate");
Coordinate493.point = new X3D.MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
coord = Coordinate493;

geometry = LineSet491;

HAnimSegment486ZZZ.children[2] = Shape490;

HAnimJoint485YYY.children = new X3D.MFNode();

HAnimJoint485ZZZ.children[0] = HAnimSegment486;

let HAnimJoint494 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint494.DEF = "hanim_vt10";
HAnimJoint494.name = "vt10";
HAnimJoint494.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let HAnimSegment495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment495.DEF = "hanim_t10";
HAnimSegment495.name = "t10";
let TouchSensor496 = browser.currentScene.createNode("TouchSensor");
TouchSensor496.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment495YYY.children = new X3D.MFNode();

HAnimSegment495ZZZ.children[0] = TouchSensor496;

let Transform497 = browser.currentScene.createNode("Transform");
Transform497.translation = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let Shape498 = browser.currentScene.createNode("Shape");
Shape498.USE = "HAnimJointShape";
Transform497YYY.child = new X3D.undefined();

Transform497ZZZ.child[0] = Shape498;

HAnimSegment495ZZZ.children[1] = Transform497;

let Shape499 = browser.currentScene.createNode("Shape");
let LineSet500 = browser.currentScene.createNode("LineSet");
LineSet500.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA501 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA501.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA501;

let Coordinate502 = browser.currentScene.createNode("Coordinate");
Coordinate502.point = new X3D.MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
coord = Coordinate502;

geometry = LineSet500;

HAnimSegment495ZZZ.children[2] = Shape499;

let Shape503 = browser.currentScene.createNode("Shape");
let LineSet504 = browser.currentScene.createNode("LineSet");
LineSet504.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA505 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA505.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA505;

let Coordinate506 = browser.currentScene.createNode("Coordinate");
Coordinate506.point = new X3D.MFVec3f([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
coord = Coordinate506;

geometry = LineSet504;

HAnimSegment495ZZZ.children[3] = Shape503;

let HAnimSite507 = browser.currentScene.createNode("HAnimSite");
HAnimSite507.DEF = "hanim_substernale_pt";
HAnimSite507.name = "substernale_pt";
HAnimSite507.translation = new X3D.SFVec3f([0.0085,1.2995,0.1147]);
let TouchSensor508 = browser.currentScene.createNode("TouchSensor");
TouchSensor508.description = "HAnimSite substernale";
HAnimSite507YYY.children = new X3D.MFNode();

HAnimSite507ZZZ.children[0] = TouchSensor508;

let Shape509 = browser.currentScene.createNode("Shape");
Shape509.USE = "HAnimSiteShape";
HAnimSite507ZZZ.children[1] = Shape509;

HAnimSegment495ZZZ.children[4] = HAnimSite507;

HAnimJoint494YYY.children = new X3D.MFNode();

HAnimJoint494ZZZ.children[0] = HAnimSegment495;

let HAnimJoint510 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint510.DEF = "hanim_vt9";
HAnimJoint510.name = "vt9";
HAnimJoint510.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let HAnimSegment511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment511.DEF = "hanim_t9";
HAnimSegment511.name = "t9";
let TouchSensor512 = browser.currentScene.createNode("TouchSensor");
TouchSensor512.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment511YYY.children = new X3D.MFNode();

HAnimSegment511ZZZ.children[0] = TouchSensor512;

let Transform513 = browser.currentScene.createNode("Transform");
Transform513.translation = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let Shape514 = browser.currentScene.createNode("Shape");
Shape514.USE = "HAnimJointShape";
Transform513YYY.child = new X3D.undefined();

Transform513ZZZ.child[0] = Shape514;

HAnimSegment511ZZZ.children[1] = Transform513;

let Shape515 = browser.currentScene.createNode("Shape");
let LineSet516 = browser.currentScene.createNode("LineSet");
LineSet516.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA517 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA517.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA517;

let Coordinate518 = browser.currentScene.createNode("Coordinate");
Coordinate518.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
coord = Coordinate518;

geometry = LineSet516;

HAnimSegment511ZZZ.children[2] = Shape515;

let Shape519 = browser.currentScene.createNode("Shape");
let LineSet520 = browser.currentScene.createNode("LineSet");
LineSet520.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA521 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA521;

let Coordinate522 = browser.currentScene.createNode("Coordinate");
Coordinate522.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
coord = Coordinate522;

geometry = LineSet520;

HAnimSegment511ZZZ.children[3] = Shape519;

let Shape523 = browser.currentScene.createNode("Shape");
let LineSet524 = browser.currentScene.createNode("LineSet");
LineSet524.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA525 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA525.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA525;

let Coordinate526 = browser.currentScene.createNode("Coordinate");
Coordinate526.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
coord = Coordinate526;

geometry = LineSet524;

HAnimSegment511ZZZ.children[4] = Shape523;

let HAnimSite527 = browser.currentScene.createNode("HAnimSite");
HAnimSite527.DEF = "hanim_r_thelion_pt";
HAnimSite527.name = "r_thelion_pt";
HAnimSite527.translation = new X3D.SFVec3f([-0.0736,1.3385,0.1217]);
let TouchSensor528 = browser.currentScene.createNode("TouchSensor");
TouchSensor528.description = "HAnimSite r_thelion";
HAnimSite527YYY.children = new X3D.MFNode();

HAnimSite527ZZZ.children[0] = TouchSensor528;

let Shape529 = browser.currentScene.createNode("Shape");
Shape529.USE = "HAnimSiteShape";
HAnimSite527ZZZ.children[1] = Shape529;

HAnimSegment511ZZZ.children[5] = HAnimSite527;

let HAnimSite530 = browser.currentScene.createNode("HAnimSite");
HAnimSite530.DEF = "hanim_l_thelion_pt";
HAnimSite530.name = "l_thelion_pt";
HAnimSite530.translation = new X3D.SFVec3f([0.0918,1.3382,0.1192]);
let TouchSensor531 = browser.currentScene.createNode("TouchSensor");
TouchSensor531.description = "HAnimSite l_thelion";
HAnimSite530YYY.children = new X3D.MFNode();

HAnimSite530ZZZ.children[0] = TouchSensor531;

let Shape532 = browser.currentScene.createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530ZZZ.children[1] = Shape532;

HAnimSegment511ZZZ.children[6] = HAnimSite530;

HAnimJoint510YYY.children = new X3D.MFNode();

HAnimJoint510ZZZ.children[0] = HAnimSegment511;

let HAnimJoint533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint533.DEF = "hanim_vt8";
HAnimJoint533.name = "vt8";
HAnimJoint533.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let HAnimSegment534 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment534.DEF = "hanim_t8";
HAnimSegment534.name = "t8";
let TouchSensor535 = browser.currentScene.createNode("TouchSensor");
TouchSensor535.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment534YYY.children = new X3D.MFNode();

HAnimSegment534ZZZ.children[0] = TouchSensor535;

let Transform536 = browser.currentScene.createNode("Transform");
Transform536.translation = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let Shape537 = browser.currentScene.createNode("Shape");
Shape537.USE = "HAnimJointShape";
Transform536YYY.child = new X3D.undefined();

Transform536ZZZ.child[0] = Shape537;

HAnimSegment534ZZZ.children[1] = Transform536;

let Shape538 = browser.currentScene.createNode("Shape");
let LineSet539 = browser.currentScene.createNode("LineSet");
LineSet539.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA540 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA540.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA540;

let Coordinate541 = browser.currentScene.createNode("Coordinate");
Coordinate541.point = new X3D.MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
coord = Coordinate541;

geometry = LineSet539;

HAnimSegment534ZZZ.children[2] = Shape538;

HAnimJoint533YYY.children = new X3D.MFNode();

HAnimJoint533ZZZ.children[0] = HAnimSegment534;

let HAnimJoint542 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint542.DEF = "hanim_vt7";
HAnimJoint542.name = "vt7";
HAnimJoint542.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let HAnimSegment543 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment543.DEF = "hanim_t7";
HAnimSegment543.name = "t7";
let TouchSensor544 = browser.currentScene.createNode("TouchSensor");
TouchSensor544.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment543YYY.children = new X3D.MFNode();

HAnimSegment543ZZZ.children[0] = TouchSensor544;

let Transform545 = browser.currentScene.createNode("Transform");
Transform545.translation = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let Shape546 = browser.currentScene.createNode("Shape");
Shape546.USE = "HAnimJointShape";
Transform545YYY.child = new X3D.undefined();

Transform545ZZZ.child[0] = Shape546;

HAnimSegment543ZZZ.children[1] = Transform545;

let Shape547 = browser.currentScene.createNode("Shape");
let LineSet548 = browser.currentScene.createNode("LineSet");
LineSet548.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA549 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA549.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA549;

let Coordinate550 = browser.currentScene.createNode("Coordinate");
Coordinate550.point = new X3D.MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
coord = Coordinate550;

geometry = LineSet548;

HAnimSegment543ZZZ.children[2] = Shape547;

HAnimJoint542YYY.children = new X3D.MFNode();

HAnimJoint542ZZZ.children[0] = HAnimSegment543;

let HAnimJoint551 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint551.DEF = "hanim_vt6";
HAnimJoint551.name = "vt6";
HAnimJoint551.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let HAnimSegment552 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment552.DEF = "hanim_t6";
HAnimSegment552.name = "t6";
let TouchSensor553 = browser.currentScene.createNode("TouchSensor");
TouchSensor553.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment552YYY.children = new X3D.MFNode();

HAnimSegment552ZZZ.children[0] = TouchSensor553;

let Transform554 = browser.currentScene.createNode("Transform");
Transform554.translation = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let Shape555 = browser.currentScene.createNode("Shape");
Shape555.USE = "HAnimJointShape";
Transform554YYY.child = new X3D.undefined();

Transform554ZZZ.child[0] = Shape555;

HAnimSegment552ZZZ.children[1] = Transform554;

let Shape556 = browser.currentScene.createNode("Shape");
let LineSet557 = browser.currentScene.createNode("LineSet");
LineSet557.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA558 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA558;

let Coordinate559 = browser.currentScene.createNode("Coordinate");
Coordinate559.point = new X3D.MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
coord = Coordinate559;

geometry = LineSet557;

HAnimSegment552ZZZ.children[2] = Shape556;

HAnimJoint551YYY.children = new X3D.MFNode();

HAnimJoint551ZZZ.children[0] = HAnimSegment552;

let HAnimJoint560 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint560.DEF = "hanim_vt5";
HAnimJoint560.name = "vt5";
HAnimJoint560.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let HAnimSegment561 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment561.DEF = "hanim_t5";
HAnimSegment561.name = "t5";
let TouchSensor562 = browser.currentScene.createNode("TouchSensor");
TouchSensor562.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment561YYY.children = new X3D.MFNode();

HAnimSegment561ZZZ.children[0] = TouchSensor562;

let Transform563 = browser.currentScene.createNode("Transform");
Transform563.translation = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let Shape564 = browser.currentScene.createNode("Shape");
Shape564.USE = "HAnimJointShape";
Transform563YYY.child = new X3D.undefined();

Transform563ZZZ.child[0] = Shape564;

HAnimSegment561ZZZ.children[1] = Transform563;

let Shape565 = browser.currentScene.createNode("Shape");
let LineSet566 = browser.currentScene.createNode("LineSet");
LineSet566.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA567 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA567;

let Coordinate568 = browser.currentScene.createNode("Coordinate");
Coordinate568.point = new X3D.MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
coord = Coordinate568;

geometry = LineSet566;

HAnimSegment561ZZZ.children[2] = Shape565;

HAnimJoint560YYY.children = new X3D.MFNode();

HAnimJoint560ZZZ.children[0] = HAnimSegment561;

let HAnimJoint569 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint569.DEF = "hanim_vt4";
HAnimJoint569.name = "vt4";
HAnimJoint569.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let HAnimSegment570 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment570.DEF = "hanim_t4";
HAnimSegment570.name = "t4";
let TouchSensor571 = browser.currentScene.createNode("TouchSensor");
TouchSensor571.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment570YYY.children = new X3D.MFNode();

HAnimSegment570ZZZ.children[0] = TouchSensor571;

let Transform572 = browser.currentScene.createNode("Transform");
Transform572.translation = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let Shape573 = browser.currentScene.createNode("Shape");
Shape573.USE = "HAnimJointShape";
Transform572YYY.child = new X3D.undefined();

Transform572ZZZ.child[0] = Shape573;

HAnimSegment570ZZZ.children[1] = Transform572;

let Shape574 = browser.currentScene.createNode("Shape");
let LineSet575 = browser.currentScene.createNode("LineSet");
LineSet575.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA576 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA576;

let Coordinate577 = browser.currentScene.createNode("Coordinate");
Coordinate577.point = new X3D.MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
coord = Coordinate577;

geometry = LineSet575;

HAnimSegment570ZZZ.children[2] = Shape574;

HAnimJoint569YYY.children = new X3D.MFNode();

HAnimJoint569ZZZ.children[0] = HAnimSegment570;

let HAnimJoint578 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint578.DEF = "hanim_vt3";
HAnimJoint578.name = "vt3";
HAnimJoint578.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let HAnimSegment579 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment579.DEF = "hanim_t3";
HAnimSegment579.name = "t3";
let TouchSensor580 = browser.currentScene.createNode("TouchSensor");
TouchSensor580.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment579YYY.children = new X3D.MFNode();

HAnimSegment579ZZZ.children[0] = TouchSensor580;

let Transform581 = browser.currentScene.createNode("Transform");
Transform581.translation = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let Shape582 = browser.currentScene.createNode("Shape");
Shape582.USE = "HAnimJointShape";
Transform581YYY.child = new X3D.undefined();

Transform581ZZZ.child[0] = Shape582;

HAnimSegment579ZZZ.children[1] = Transform581;

let Shape583 = browser.currentScene.createNode("Shape");
let LineSet584 = browser.currentScene.createNode("LineSet");
LineSet584.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA585 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA585;

let Coordinate586 = browser.currentScene.createNode("Coordinate");
Coordinate586.point = new X3D.MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
coord = Coordinate586;

geometry = LineSet584;

HAnimSegment579ZZZ.children[2] = Shape583;

HAnimJoint578YYY.children = new X3D.MFNode();

HAnimJoint578ZZZ.children[0] = HAnimSegment579;

let HAnimJoint587 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint587.DEF = "hanim_vt2";
HAnimJoint587.name = "vt2";
HAnimJoint587.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let HAnimSegment588 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment588.DEF = "hanim_t2";
HAnimSegment588.name = "t2";
let TouchSensor589 = browser.currentScene.createNode("TouchSensor");
TouchSensor589.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment588YYY.children = new X3D.MFNode();

HAnimSegment588ZZZ.children[0] = TouchSensor589;

let Transform590 = browser.currentScene.createNode("Transform");
Transform590.translation = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let Shape591 = browser.currentScene.createNode("Shape");
Shape591.USE = "HAnimJointShape";
Transform590YYY.child = new X3D.undefined();

Transform590ZZZ.child[0] = Shape591;

HAnimSegment588ZZZ.children[1] = Transform590;

let Shape592 = browser.currentScene.createNode("Shape");
let LineSet593 = browser.currentScene.createNode("LineSet");
LineSet593.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA594 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA594.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA594;

let Coordinate595 = browser.currentScene.createNode("Coordinate");
Coordinate595.point = new X3D.MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
coord = Coordinate595;

geometry = LineSet593;

HAnimSegment588ZZZ.children[2] = Shape592;

HAnimJoint587YYY.children = new X3D.MFNode();

HAnimJoint587ZZZ.children[0] = HAnimSegment588;

let HAnimJoint596 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint596.DEF = "hanim_vt1";
HAnimJoint596.name = "vt1";
HAnimJoint596.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let HAnimSegment597 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment597.DEF = "hanim_t1";
HAnimSegment597.name = "t1";
let TouchSensor598 = browser.currentScene.createNode("TouchSensor");
TouchSensor598.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment597YYY.children = new X3D.MFNode();

HAnimSegment597ZZZ.children[0] = TouchSensor598;

let Transform599 = browser.currentScene.createNode("Transform");
Transform599.translation = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let Shape600 = browser.currentScene.createNode("Shape");
Shape600.USE = "HAnimJointShape";
Transform599YYY.child = new X3D.undefined();

Transform599ZZZ.child[0] = Shape600;

HAnimSegment597ZZZ.children[1] = Transform599;

let Shape601 = browser.currentScene.createNode("Shape");
let LineSet602 = browser.currentScene.createNode("LineSet");
LineSet602.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA603 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA603.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA603;

let Coordinate604 = browser.currentScene.createNode("Coordinate");
Coordinate604.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
coord = Coordinate604;

geometry = LineSet602;

HAnimSegment597ZZZ.children[2] = Shape601;

let Shape605 = browser.currentScene.createNode("Shape");
let LineSet606 = browser.currentScene.createNode("LineSet");
LineSet606.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA607 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA607.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA607;

let Coordinate608 = browser.currentScene.createNode("Coordinate");
Coordinate608.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
coord = Coordinate608;

geometry = LineSet606;

HAnimSegment597ZZZ.children[3] = Shape605;

let Shape609 = browser.currentScene.createNode("Shape");
let LineSet610 = browser.currentScene.createNode("LineSet");
LineSet610.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA611 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA611;

let Coordinate612 = browser.currentScene.createNode("Coordinate");
Coordinate612.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
coord = Coordinate612;

geometry = LineSet610;

HAnimSegment597ZZZ.children[4] = Shape609;

let Shape613 = browser.currentScene.createNode("Shape");
let LineSet614 = browser.currentScene.createNode("LineSet");
LineSet614.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA615 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA615.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA615;

let Coordinate616 = browser.currentScene.createNode("Coordinate");
Coordinate616.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
coord = Coordinate616;

geometry = LineSet614;

HAnimSegment597ZZZ.children[5] = Shape613;

let Shape617 = browser.currentScene.createNode("Shape");
let LineSet618 = browser.currentScene.createNode("LineSet");
LineSet618.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA619 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA619.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA619;

let Coordinate620 = browser.currentScene.createNode("Coordinate");
Coordinate620.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
coord = Coordinate620;

geometry = LineSet618;

HAnimSegment597ZZZ.children[6] = Shape617;

let HAnimSite621 = browser.currentScene.createNode("HAnimSite");
HAnimSite621.DEF = "hanim_suprasternale_pt";
HAnimSite621.name = "suprasternale_pt";
HAnimSite621.translation = new X3D.SFVec3f([0.0084,1.4714,0.0551]);
let TouchSensor622 = browser.currentScene.createNode("TouchSensor");
TouchSensor622.description = "HAnimSite suprasternale";
HAnimSite621YYY.children = new X3D.MFNode();

HAnimSite621ZZZ.children[0] = TouchSensor622;

let Shape623 = browser.currentScene.createNode("Shape");
Shape623.USE = "HAnimSiteShape";
HAnimSite621ZZZ.children[1] = Shape623;

HAnimSegment597ZZZ.children[7] = HAnimSite621;

let HAnimSite624 = browser.currentScene.createNode("HAnimSite");
HAnimSite624.DEF = "hanim_cervicale_pt";
HAnimSite624.name = "cervicale_pt";
HAnimSite624.translation = new X3D.SFVec3f([0.0064,1.52,-0.0815]);
let TouchSensor625 = browser.currentScene.createNode("TouchSensor");
TouchSensor625.description = "HAnimSite cervicale";
HAnimSite624YYY.children = new X3D.MFNode();

HAnimSite624ZZZ.children[0] = TouchSensor625;

let Shape626 = browser.currentScene.createNode("Shape");
Shape626.USE = "HAnimSiteShape";
HAnimSite624ZZZ.children[1] = Shape626;

HAnimSegment597ZZZ.children[8] = HAnimSite624;

HAnimJoint596YYY.children = new X3D.MFNode();

HAnimJoint596ZZZ.children[0] = HAnimSegment597;

let HAnimJoint627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint627.DEF = "hanim_vc7";
HAnimJoint627.name = "vc7";
HAnimJoint627.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let HAnimSegment628 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment628.DEF = "hanim_c7";
HAnimSegment628.name = "c7";
let TouchSensor629 = browser.currentScene.createNode("TouchSensor");
TouchSensor629.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment628YYY.children = new X3D.MFNode();

HAnimSegment628ZZZ.children[0] = TouchSensor629;

let Transform630 = browser.currentScene.createNode("Transform");
Transform630.translation = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let Shape631 = browser.currentScene.createNode("Shape");
Shape631.USE = "HAnimJointShape";
Transform630YYY.child = new X3D.undefined();

Transform630ZZZ.child[0] = Shape631;

HAnimSegment628ZZZ.children[1] = Transform630;

let Shape632 = browser.currentScene.createNode("Shape");
let LineSet633 = browser.currentScene.createNode("LineSet");
LineSet633.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA634 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA634.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA634;

let Coordinate635 = browser.currentScene.createNode("Coordinate");
Coordinate635.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
coord = Coordinate635;

geometry = LineSet633;

HAnimSegment628ZZZ.children[2] = Shape632;

let Shape636 = browser.currentScene.createNode("Shape");
let LineSet637 = browser.currentScene.createNode("LineSet");
LineSet637.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA638 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA638.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA638;

let Coordinate639 = browser.currentScene.createNode("Coordinate");
Coordinate639.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
coord = Coordinate639;

geometry = LineSet637;

HAnimSegment628ZZZ.children[3] = Shape636;

let Shape640 = browser.currentScene.createNode("Shape");
let LineSet641 = browser.currentScene.createNode("LineSet");
LineSet641.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA642 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA642.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA642;

let Coordinate643 = browser.currentScene.createNode("Coordinate");
Coordinate643.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
coord = Coordinate643;

geometry = LineSet641;

HAnimSegment628ZZZ.children[4] = Shape640;

let HAnimSite644 = browser.currentScene.createNode("HAnimSite");
HAnimSite644.DEF = "hanim_r_neck_base_pt";
HAnimSite644.name = "r_neck_base_pt";
HAnimSite644.translation = new X3D.SFVec3f([-0.0419,1.5149,-0.022]);
let TouchSensor645 = browser.currentScene.createNode("TouchSensor");
TouchSensor645.description = "HAnimSite r_neck_base";
HAnimSite644YYY.children = new X3D.MFNode();

HAnimSite644ZZZ.children[0] = TouchSensor645;

let Shape646 = browser.currentScene.createNode("Shape");
Shape646.USE = "HAnimSiteShape";
HAnimSite644ZZZ.children[1] = Shape646;

HAnimSegment628ZZZ.children[5] = HAnimSite644;

let HAnimSite647 = browser.currentScene.createNode("HAnimSite");
HAnimSite647.DEF = "hanim_l_neck_base_pt";
HAnimSite647.name = "l_neck_base_pt";
HAnimSite647.translation = new X3D.SFVec3f([0.0646,1.5141,-0.038]);
let TouchSensor648 = browser.currentScene.createNode("TouchSensor");
TouchSensor648.description = "HAnimSite l_neck_base";
HAnimSite647YYY.children = new X3D.MFNode();

HAnimSite647ZZZ.children[0] = TouchSensor648;

let Shape649 = browser.currentScene.createNode("Shape");
Shape649.USE = "HAnimSiteShape";
HAnimSite647ZZZ.children[1] = Shape649;

HAnimSegment628ZZZ.children[6] = HAnimSite647;

HAnimJoint627YYY.children = new X3D.MFNode();

HAnimJoint627ZZZ.children[0] = HAnimSegment628;

let HAnimJoint650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint650.DEF = "hanim_vc6";
HAnimJoint650.name = "vc6";
HAnimJoint650.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let HAnimSegment651 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment651.DEF = "hanim_c6";
HAnimSegment651.name = "c6";
let TouchSensor652 = browser.currentScene.createNode("TouchSensor");
TouchSensor652.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment651YYY.children = new X3D.MFNode();

HAnimSegment651ZZZ.children[0] = TouchSensor652;

let Transform653 = browser.currentScene.createNode("Transform");
Transform653.translation = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let Shape654 = browser.currentScene.createNode("Shape");
Shape654.USE = "HAnimJointShape";
Transform653YYY.child = new X3D.undefined();

Transform653ZZZ.child[0] = Shape654;

HAnimSegment651ZZZ.children[1] = Transform653;

let Shape655 = browser.currentScene.createNode("Shape");
let LineSet656 = browser.currentScene.createNode("LineSet");
LineSet656.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA657 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA657;

let Coordinate658 = browser.currentScene.createNode("Coordinate");
Coordinate658.point = new X3D.MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
coord = Coordinate658;

geometry = LineSet656;

HAnimSegment651ZZZ.children[2] = Shape655;

HAnimJoint650YYY.children = new X3D.MFNode();

HAnimJoint650ZZZ.children[0] = HAnimSegment651;

let HAnimJoint659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint659.DEF = "hanim_vc5";
HAnimJoint659.name = "vc5";
HAnimJoint659.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let HAnimSegment660 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment660.DEF = "hanim_c5";
HAnimSegment660.name = "c5";
let TouchSensor661 = browser.currentScene.createNode("TouchSensor");
TouchSensor661.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment660YYY.children = new X3D.MFNode();

HAnimSegment660ZZZ.children[0] = TouchSensor661;

let Transform662 = browser.currentScene.createNode("Transform");
Transform662.translation = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let Shape663 = browser.currentScene.createNode("Shape");
Shape663.USE = "HAnimJointShape";
Transform662YYY.child = new X3D.undefined();

Transform662ZZZ.child[0] = Shape663;

HAnimSegment660ZZZ.children[1] = Transform662;

let Shape664 = browser.currentScene.createNode("Shape");
let LineSet665 = browser.currentScene.createNode("LineSet");
LineSet665.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA666 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA666;

let Coordinate667 = browser.currentScene.createNode("Coordinate");
Coordinate667.point = new X3D.MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
coord = Coordinate667;

geometry = LineSet665;

HAnimSegment660ZZZ.children[2] = Shape664;

HAnimJoint659YYY.children = new X3D.MFNode();

HAnimJoint659ZZZ.children[0] = HAnimSegment660;

let HAnimJoint668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint668.DEF = "hanim_vc4";
HAnimJoint668.name = "vc4";
HAnimJoint668.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let HAnimSegment669 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment669.DEF = "hanim_c4";
HAnimSegment669.name = "c4";
let TouchSensor670 = browser.currentScene.createNode("TouchSensor");
TouchSensor670.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment669YYY.children = new X3D.MFNode();

HAnimSegment669ZZZ.children[0] = TouchSensor670;

let Transform671 = browser.currentScene.createNode("Transform");
Transform671.translation = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let Shape672 = browser.currentScene.createNode("Shape");
Shape672.USE = "HAnimJointShape";
Transform671YYY.child = new X3D.undefined();

Transform671ZZZ.child[0] = Shape672;

HAnimSegment669ZZZ.children[1] = Transform671;

let Shape673 = browser.currentScene.createNode("Shape");
let LineSet674 = browser.currentScene.createNode("LineSet");
LineSet674.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA675 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA675.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA675;

let Coordinate676 = browser.currentScene.createNode("Coordinate");
Coordinate676.point = new X3D.MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
coord = Coordinate676;

geometry = LineSet674;

HAnimSegment669ZZZ.children[2] = Shape673;

HAnimJoint668YYY.children = new X3D.MFNode();

HAnimJoint668ZZZ.children[0] = HAnimSegment669;

let HAnimJoint677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint677.DEF = "hanim_vc3";
HAnimJoint677.name = "vc3";
HAnimJoint677.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let HAnimSegment678 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment678.DEF = "hanim_c3";
HAnimSegment678.name = "c3";
let TouchSensor679 = browser.currentScene.createNode("TouchSensor");
TouchSensor679.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment678YYY.children = new X3D.MFNode();

HAnimSegment678ZZZ.children[0] = TouchSensor679;

let Transform680 = browser.currentScene.createNode("Transform");
Transform680.translation = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let Shape681 = browser.currentScene.createNode("Shape");
Shape681.USE = "HAnimJointShape";
Transform680YYY.child = new X3D.undefined();

Transform680ZZZ.child[0] = Shape681;

HAnimSegment678ZZZ.children[1] = Transform680;

let Shape682 = browser.currentScene.createNode("Shape");
let LineSet683 = browser.currentScene.createNode("LineSet");
LineSet683.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA684 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA684.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA684;

let Coordinate685 = browser.currentScene.createNode("Coordinate");
Coordinate685.point = new X3D.MFVec3f([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
coord = Coordinate685;

geometry = LineSet683;

HAnimSegment678ZZZ.children[2] = Shape682;

HAnimJoint677YYY.children = new X3D.MFNode();

HAnimJoint677ZZZ.children[0] = HAnimSegment678;

let HAnimJoint686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint686.DEF = "hanim_vc2";
HAnimJoint686.name = "vc2";
HAnimJoint686.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let HAnimSegment687 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment687.DEF = "hanim_c2";
HAnimSegment687.name = "c2";
let TouchSensor688 = browser.currentScene.createNode("TouchSensor");
TouchSensor688.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment687YYY.children = new X3D.MFNode();

HAnimSegment687ZZZ.children[0] = TouchSensor688;

let Transform689 = browser.currentScene.createNode("Transform");
Transform689.translation = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let Shape690 = browser.currentScene.createNode("Shape");
Shape690.USE = "HAnimJointShape";
Transform689YYY.child = new X3D.undefined();

Transform689ZZZ.child[0] = Shape690;

HAnimSegment687ZZZ.children[1] = Transform689;

let Shape691 = browser.currentScene.createNode("Shape");
let LineSet692 = browser.currentScene.createNode("LineSet");
LineSet692.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA693 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA693.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA693;

let Coordinate694 = browser.currentScene.createNode("Coordinate");
Coordinate694.point = new X3D.MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
coord = Coordinate694;

geometry = LineSet692;

HAnimSegment687ZZZ.children[2] = Shape691;

HAnimJoint686YYY.children = new X3D.MFNode();

HAnimJoint686ZZZ.children[0] = HAnimSegment687;

let HAnimJoint695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint695.DEF = "hanim_vc1";
HAnimJoint695.name = "vc1";
HAnimJoint695.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let HAnimSegment696 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment696.DEF = "hanim_c1";
HAnimSegment696.name = "c1";
let TouchSensor697 = browser.currentScene.createNode("TouchSensor");
TouchSensor697.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment696YYY.children = new X3D.MFNode();

HAnimSegment696ZZZ.children[0] = TouchSensor697;

let Transform698 = browser.currentScene.createNode("Transform");
Transform698.translation = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let Shape699 = browser.currentScene.createNode("Shape");
Shape699.USE = "HAnimJointShape";
Transform698YYY.child = new X3D.undefined();

Transform698ZZZ.child[0] = Shape699;

HAnimSegment696ZZZ.children[1] = Transform698;

let Shape700 = browser.currentScene.createNode("Shape");
let LineSet701 = browser.currentScene.createNode("LineSet");
LineSet701.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA702 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA702.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA702;

let Coordinate703 = browser.currentScene.createNode("Coordinate");
Coordinate703.point = new X3D.MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
coord = Coordinate703;

geometry = LineSet701;

HAnimSegment696ZZZ.children[2] = Shape700;

HAnimJoint695YYY.children = new X3D.MFNode();

HAnimJoint695ZZZ.children[0] = HAnimSegment696;

let HAnimJoint704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint704.DEF = "hanim_skullbase";
HAnimJoint704.name = "skullbase";
HAnimJoint704.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let HAnimSegment705 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment705.DEF = "hanim_skull";
HAnimSegment705.name = "skull";
let TouchSensor706 = browser.currentScene.createNode("TouchSensor");
TouchSensor706.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment705YYY.children = new X3D.MFNode();

HAnimSegment705ZZZ.children[0] = TouchSensor706;

let Transform707 = browser.currentScene.createNode("Transform");
Transform707.translation = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let Shape708 = browser.currentScene.createNode("Shape");
Shape708.USE = "HAnimJointShape";
Transform707YYY.child = new X3D.undefined();

Transform707ZZZ.child[0] = Shape708;

HAnimSegment705ZZZ.children[1] = Transform707;

let Shape709 = browser.currentScene.createNode("Shape");
let LineSet710 = browser.currentScene.createNode("LineSet");
LineSet710.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA711 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA711.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA711;

let Coordinate712 = browser.currentScene.createNode("Coordinate");
Coordinate712.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
coord = Coordinate712;

geometry = LineSet710;

HAnimSegment705ZZZ.children[2] = Shape709;

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

HAnimSegment705ZZZ.children[3] = Shape713;

let Shape717 = browser.currentScene.createNode("Shape");
let LineSet718 = browser.currentScene.createNode("LineSet");
LineSet718.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA719 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA719.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA719;

let Coordinate720 = browser.currentScene.createNode("Coordinate");
Coordinate720.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
coord = Coordinate720;

geometry = LineSet718;

HAnimSegment705ZZZ.children[4] = Shape717;

let Shape721 = browser.currentScene.createNode("Shape");
let LineSet722 = browser.currentScene.createNode("LineSet");
LineSet722.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA723 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA723;

let Coordinate724 = browser.currentScene.createNode("Coordinate");
Coordinate724.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
coord = Coordinate724;

geometry = LineSet722;

HAnimSegment705ZZZ.children[5] = Shape721;

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

HAnimSegment705ZZZ.children[6] = Shape725;

let Shape729 = browser.currentScene.createNode("Shape");
let LineSet730 = browser.currentScene.createNode("LineSet");
LineSet730.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA731 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA731;

let Coordinate732 = browser.currentScene.createNode("Coordinate");
Coordinate732.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
coord = Coordinate732;

geometry = LineSet730;

HAnimSegment705ZZZ.children[7] = Shape729;

let Shape733 = browser.currentScene.createNode("Shape");
let LineSet734 = browser.currentScene.createNode("LineSet");
LineSet734.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA735 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA735;

let Coordinate736 = browser.currentScene.createNode("Coordinate");
Coordinate736.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0,1.63,0.015]);
coord = Coordinate736;

geometry = LineSet734;

HAnimSegment705ZZZ.children[8] = Shape733;

let Shape737 = browser.currentScene.createNode("Shape");
let LineSet738 = browser.currentScene.createNode("LineSet");
LineSet738.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA739 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA739.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA739;

let Coordinate740 = browser.currentScene.createNode("Coordinate");
Coordinate740.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
coord = Coordinate740;

geometry = LineSet738;

HAnimSegment705ZZZ.children[9] = Shape737;

let Shape741 = browser.currentScene.createNode("Shape");
let LineSet742 = browser.currentScene.createNode("LineSet");
LineSet742.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA743 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA743.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA743;

let Coordinate744 = browser.currentScene.createNode("Coordinate");
Coordinate744.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
coord = Coordinate744;

geometry = LineSet742;

HAnimSegment705ZZZ.children[10] = Shape741;

let Shape745 = browser.currentScene.createNode("Shape");
let LineSet746 = browser.currentScene.createNode("LineSet");
LineSet746.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA747 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA747.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA747;

let Coordinate748 = browser.currentScene.createNode("Coordinate");
Coordinate748.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
coord = Coordinate748;

geometry = LineSet746;

HAnimSegment705ZZZ.children[11] = Shape745;

let Shape749 = browser.currentScene.createNode("Shape");
let LineSet750 = browser.currentScene.createNode("LineSet");
LineSet750.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA751 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA751.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA751;

let Coordinate752 = browser.currentScene.createNode("Coordinate");
Coordinate752.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
coord = Coordinate752;

geometry = LineSet750;

HAnimSegment705ZZZ.children[12] = Shape749;

let Shape753 = browser.currentScene.createNode("Shape");
let LineSet754 = browser.currentScene.createNode("LineSet");
LineSet754.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA755 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA755.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA755;

let Coordinate756 = browser.currentScene.createNode("Coordinate");
Coordinate756.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
coord = Coordinate756;

geometry = LineSet754;

HAnimSegment705ZZZ.children[13] = Shape753;

let Shape757 = browser.currentScene.createNode("Shape");
let LineSet758 = browser.currentScene.createNode("LineSet");
LineSet758.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA759 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA759.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA759;

let Coordinate760 = browser.currentScene.createNode("Coordinate");
Coordinate760.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
coord = Coordinate760;

geometry = LineSet758;

HAnimSegment705ZZZ.children[14] = Shape757;

let Shape761 = browser.currentScene.createNode("Shape");
let LineSet762 = browser.currentScene.createNode("LineSet");
LineSet762.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA763 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA763.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA763;

let Coordinate764 = browser.currentScene.createNode("Coordinate");
Coordinate764.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
coord = Coordinate764;

geometry = LineSet762;

HAnimSegment705ZZZ.children[15] = Shape761;

let Shape765 = browser.currentScene.createNode("Shape");
let LineSet766 = browser.currentScene.createNode("LineSet");
LineSet766.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA767 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA767.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA767;

let Coordinate768 = browser.currentScene.createNode("Coordinate");
Coordinate768.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
coord = Coordinate768;

geometry = LineSet766;

HAnimSegment705ZZZ.children[16] = Shape765;

let Shape769 = browser.currentScene.createNode("Shape");
let LineSet770 = browser.currentScene.createNode("LineSet");
LineSet770.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA771 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA771.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA771;

let Coordinate772 = browser.currentScene.createNode("Coordinate");
Coordinate772.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
coord = Coordinate772;

geometry = LineSet770;

HAnimSegment705ZZZ.children[17] = Shape769;

let Shape773 = browser.currentScene.createNode("Shape");
let LineSet774 = browser.currentScene.createNode("LineSet");
LineSet774.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA775 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA775.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA775;

let Coordinate776 = browser.currentScene.createNode("Coordinate");
Coordinate776.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
coord = Coordinate776;

geometry = LineSet774;

HAnimSegment705ZZZ.children[18] = Shape773;

let HAnimSite777 = browser.currentScene.createNode("HAnimSite");
HAnimSite777.DEF = "hanim_skull_tip";
HAnimSite777.name = "skull_tip";
HAnimSite777.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
let TouchSensor778 = browser.currentScene.createNode("TouchSensor");
TouchSensor778.description = "HAnimSite skull_tip";
HAnimSite777YYY.children = new X3D.MFNode();

HAnimSite777ZZZ.children[0] = TouchSensor778;

let Shape779 = browser.currentScene.createNode("Shape");
Shape779.USE = "HAnimSiteShape";
HAnimSite777ZZZ.children[1] = Shape779;

HAnimSegment705ZZZ.children[19] = HAnimSite777;

let HAnimSite780 = browser.currentScene.createNode("HAnimSite");
HAnimSite780.DEF = "hanim_sellion_pt";
HAnimSite780.name = "sellion_pt";
HAnimSite780.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
let TouchSensor781 = browser.currentScene.createNode("TouchSensor");
TouchSensor781.description = "HAnimSite sellion";
HAnimSite780YYY.children = new X3D.MFNode();

HAnimSite780ZZZ.children[0] = TouchSensor781;

let Shape782 = browser.currentScene.createNode("Shape");
Shape782.USE = "HAnimSiteShape";
HAnimSite780ZZZ.children[1] = Shape782;

HAnimSegment705ZZZ.children[20] = HAnimSite780;

let HAnimSite783 = browser.currentScene.createNode("HAnimSite");
HAnimSite783.DEF = "hanim_r_infraorbitale_pt";
HAnimSite783.name = "r_infraorbitale_pt";
HAnimSite783.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
let TouchSensor784 = browser.currentScene.createNode("TouchSensor");
TouchSensor784.description = "HAnimSite r_infraorbitale";
HAnimSite783YYY.children = new X3D.MFNode();

HAnimSite783ZZZ.children[0] = TouchSensor784;

let Shape785 = browser.currentScene.createNode("Shape");
Shape785.USE = "HAnimSiteShape";
HAnimSite783ZZZ.children[1] = Shape785;

HAnimSegment705ZZZ.children[21] = HAnimSite783;

let HAnimSite786 = browser.currentScene.createNode("HAnimSite");
HAnimSite786.DEF = "hanim_l_infraorbitale_pt";
HAnimSite786.name = "l_infraorbitale_pt";
HAnimSite786.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
let TouchSensor787 = browser.currentScene.createNode("TouchSensor");
TouchSensor787.description = "HAnimSite l_infraorbitale";
HAnimSite786YYY.children = new X3D.MFNode();

HAnimSite786ZZZ.children[0] = TouchSensor787;

let Shape788 = browser.currentScene.createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786ZZZ.children[1] = Shape788;

HAnimSegment705ZZZ.children[22] = HAnimSite786;

let HAnimSite789 = browser.currentScene.createNode("HAnimSite");
HAnimSite789.DEF = "hanim_supramenton_pt";
HAnimSite789.name = "supramenton_pt";
HAnimSite789.translation = new X3D.SFVec3f([0.0061,1.541,0.0805]);
let TouchSensor790 = browser.currentScene.createNode("TouchSensor");
TouchSensor790.description = "HAnimSite supramenton";
HAnimSite789YYY.children = new X3D.MFNode();

HAnimSite789ZZZ.children[0] = TouchSensor790;

let Shape791 = browser.currentScene.createNode("Shape");
Shape791.USE = "HAnimSiteShape";
HAnimSite789ZZZ.children[1] = Shape791;

HAnimSegment705ZZZ.children[23] = HAnimSite789;

let HAnimSite792 = browser.currentScene.createNode("HAnimSite");
HAnimSite792.DEF = "hanim_r_tragion_pt";
HAnimSite792.name = "r_tragion_pt";
HAnimSite792.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
let TouchSensor793 = browser.currentScene.createNode("TouchSensor");
TouchSensor793.description = "HAnimSite r_tragion";
HAnimSite792YYY.children = new X3D.MFNode();

HAnimSite792ZZZ.children[0] = TouchSensor793;

let Shape794 = browser.currentScene.createNode("Shape");
Shape794.USE = "HAnimSiteShape";
HAnimSite792ZZZ.children[1] = Shape794;

HAnimSegment705ZZZ.children[24] = HAnimSite792;

let HAnimSite795 = browser.currentScene.createNode("HAnimSite");
HAnimSite795.DEF = "hanim_r_gonion_pt";
HAnimSite795.name = "r_gonion_pt";
HAnimSite795.translation = new X3D.SFVec3f([-0.052,1.5529,0.0347]);
let TouchSensor796 = browser.currentScene.createNode("TouchSensor");
TouchSensor796.description = "HAnimSite r_gonion";
HAnimSite795YYY.children = new X3D.MFNode();

HAnimSite795ZZZ.children[0] = TouchSensor796;

let Shape797 = browser.currentScene.createNode("Shape");
Shape797.USE = "HAnimSiteShape";
HAnimSite795ZZZ.children[1] = Shape797;

HAnimSegment705ZZZ.children[25] = HAnimSite795;

let HAnimSite798 = browser.currentScene.createNode("HAnimSite");
HAnimSite798.DEF = "hanim_l_tragion_pt";
HAnimSite798.name = "l_tragion_pt";
HAnimSite798.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
let TouchSensor799 = browser.currentScene.createNode("TouchSensor");
TouchSensor799.description = "HAnimSite l_tragion";
HAnimSite798YYY.children = new X3D.MFNode();

HAnimSite798ZZZ.children[0] = TouchSensor799;

let Shape800 = browser.currentScene.createNode("Shape");
Shape800.USE = "HAnimSiteShape";
HAnimSite798ZZZ.children[1] = Shape800;

HAnimSegment705ZZZ.children[26] = HAnimSite798;

let HAnimSite801 = browser.currentScene.createNode("HAnimSite");
HAnimSite801.DEF = "hanim_l_gonion_pt";
HAnimSite801.name = "l_gonion_pt";
HAnimSite801.translation = new X3D.SFVec3f([0.0631,1.553,0.033]);
let TouchSensor802 = browser.currentScene.createNode("TouchSensor");
TouchSensor802.description = "HAnimSite l_gonion";
HAnimSite801YYY.children = new X3D.MFNode();

HAnimSite801ZZZ.children[0] = TouchSensor802;

let Shape803 = browser.currentScene.createNode("Shape");
Shape803.USE = "HAnimSiteShape";
HAnimSite801ZZZ.children[1] = Shape803;

HAnimSegment705ZZZ.children[27] = HAnimSite801;

let HAnimSite804 = browser.currentScene.createNode("HAnimSite");
HAnimSite804.DEF = "hanim_nuchale_pt";
HAnimSite804.name = "nuchale_pt";
HAnimSite804.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
let TouchSensor805 = browser.currentScene.createNode("TouchSensor");
TouchSensor805.description = "HAnimSite nuchale";
HAnimSite804YYY.children = new X3D.MFNode();

HAnimSite804ZZZ.children[0] = TouchSensor805;

let Shape806 = browser.currentScene.createNode("Shape");
Shape806.USE = "HAnimSiteShape";
HAnimSite804ZZZ.children[1] = Shape806;

HAnimSegment705ZZZ.children[28] = HAnimSite804;

HAnimJoint704YYY.children = new X3D.MFNode();

HAnimJoint704ZZZ.children[0] = HAnimSegment705;

let HAnimJoint807 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint807.DEF = "hanim_l_eyeball_joint";
HAnimJoint807.name = "l_eyeball_joint";
HAnimJoint807.center = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let HAnimSegment808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment808.DEF = "hanim_l_eyeball";
HAnimSegment808.name = "l_eyeball";
let TouchSensor809 = browser.currentScene.createNode("TouchSensor");
TouchSensor809.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment808YYY.children = new X3D.MFNode();

HAnimSegment808ZZZ.children[0] = TouchSensor809;

let Transform810 = browser.currentScene.createNode("Transform");
Transform810.translation = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let Shape811 = browser.currentScene.createNode("Shape");
Shape811.USE = "HAnimJointShape";
Transform810YYY.child = new X3D.undefined();

Transform810ZZZ.child[0] = Shape811;

HAnimSegment808ZZZ.children[1] = Transform810;

let Shape812 = browser.currentScene.createNode("Shape");
let LineSet813 = browser.currentScene.createNode("LineSet");
LineSet813.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA814 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA814.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA814.color = new X3D.MFColorRGBA([0,0,1,1,0,0,1,0.1]);
color = ColorRGBA814;

let Coordinate815 = browser.currentScene.createNode("Coordinate");
Coordinate815.point = new X3D.MFVec3f([0.0336,1.6332,0.0502,0.034,1.64,0.05]);
coord = Coordinate815;

geometry = LineSet813;

HAnimSegment808ZZZ.children[2] = Shape812;

let HAnimSite816 = browser.currentScene.createNode("HAnimSite");
HAnimSite816.DEF = "hanim_l_eyeball_site_view";
HAnimSite816.name = "l_eyeball_site_view";
HAnimSite816.translation = new X3D.SFVec3f([0.034,1.64,0.05]);
let TouchSensor817 = browser.currentScene.createNode("TouchSensor");
TouchSensor817.description = "HAnimSite l_eyeball_site_view";
HAnimSite816YYY.children = new X3D.MFNode();

HAnimSite816ZZZ.children[0] = TouchSensor817;

let Shape818 = browser.currentScene.createNode("Shape");
Shape818.USE = "HAnimSiteShape";
HAnimSite816ZZZ.children[1] = Shape818;

let Viewpoint819 = browser.currentScene.createNode("Viewpoint");
Viewpoint819.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint819.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint819.position = new X3D.SFVec3f([0,0,0]);
Viewpoint819.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite816ZZZ.children[2] = Viewpoint819;

let Anchor820 = browser.currentScene.createNode("Anchor");
Anchor820.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor820.url = new X3D.MFString([new X3D.SFString("#hanim_l_eyeball_site_viewpoint")]);
let LOD821 = browser.currentScene.createNode("LOD");
LOD821.forceTransitions = True;
LOD821.range = new X3D.MFFloat([0.04]);
let WorldInfo822 = browser.currentScene.createNode("WorldInfo");
WorldInfo822.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD821YYY.children = new X3D.MFNode();

LOD821ZZZ.children[0] = WorldInfo822;

let Shape823 = browser.currentScene.createNode("Shape");
Shape823.DEF = "HAnimSiteViewpointShape";
let Appearance824 = browser.currentScene.createNode("Appearance");
let Material825 = browser.currentScene.createNode("Material");
Material825.diffuseColor = new X3D.SFColor([0,0,1]);
Material825.transparency = 0.6;
material = Material825;

appearance = Appearance824;

let IndexedFaceSet826 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet826.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet826.creaseAngle = 0.5;
IndexedFaceSet826.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate827 = browser.currentScene.createNode("Coordinate");
Coordinate827.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate827;

geometry = IndexedFaceSet826;

LOD821ZZZ.children[1] = Shape823;

Anchor820YYY.children = new X3D.MFNode();

Anchor820ZZZ.children[0] = LOD821;

HAnimSite816ZZZ.children[3] = Anchor820;

HAnimSegment808ZZZ.children[3] = HAnimSite816;

HAnimJoint807YYY.children = new X3D.MFNode();

HAnimJoint807ZZZ.children[0] = HAnimSegment808;

HAnimJoint704ZZZ.children[1] = HAnimJoint807;

let HAnimJoint828 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint828.DEF = "hanim_l_eyelid_joint";
HAnimJoint828.name = "l_eyelid_joint";
HAnimJoint828.center = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let HAnimSegment829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment829.DEF = "hanim_l_eyelid";
HAnimSegment829.name = "l_eyelid";
let TouchSensor830 = browser.currentScene.createNode("TouchSensor");
TouchSensor830.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment829YYY.children = new X3D.MFNode();

HAnimSegment829ZZZ.children[0] = TouchSensor830;

let Transform831 = browser.currentScene.createNode("Transform");
Transform831.translation = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let Shape832 = browser.currentScene.createNode("Shape");
Shape832.USE = "HAnimJointShape";
Transform831YYY.child = new X3D.undefined();

Transform831ZZZ.child[0] = Shape832;

HAnimSegment829ZZZ.children[1] = Transform831;

HAnimJoint828YYY.children = new X3D.MFNode();

HAnimJoint828ZZZ.children[0] = HAnimSegment829;

HAnimJoint704ZZZ.children[2] = HAnimJoint828;

let HAnimJoint833 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint833.DEF = "hanim_l_eyebrow_joint";
HAnimJoint833.name = "l_eyebrow_joint";
HAnimJoint833.center = new X3D.SFVec3f([0.0336,1.635,0.0506]);
let HAnimSegment834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment834.DEF = "hanim_l_eyebrow";
HAnimSegment834.name = "l_eyebrow";
let TouchSensor835 = browser.currentScene.createNode("TouchSensor");
TouchSensor835.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment834YYY.children = new X3D.MFNode();

HAnimSegment834ZZZ.children[0] = TouchSensor835;

let Transform836 = browser.currentScene.createNode("Transform");
Transform836.translation = new X3D.SFVec3f([0.0336,1.635,0.0506]);
let Shape837 = browser.currentScene.createNode("Shape");
Shape837.USE = "HAnimJointShape";
Transform836YYY.child = new X3D.undefined();

Transform836ZZZ.child[0] = Shape837;

HAnimSegment834ZZZ.children[1] = Transform836;

HAnimJoint833YYY.children = new X3D.MFNode();

HAnimJoint833ZZZ.children[0] = HAnimSegment834;

HAnimJoint704ZZZ.children[3] = HAnimJoint833;

let HAnimJoint838 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint838.DEF = "hanim_r_eyeball_joint";
HAnimJoint838.name = "r_eyeball_joint";
HAnimJoint838.center = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let HAnimSegment839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment839.DEF = "hanim_r_eyeball";
HAnimSegment839.name = "r_eyeball";
let TouchSensor840 = browser.currentScene.createNode("TouchSensor");
TouchSensor840.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment839YYY.children = new X3D.MFNode();

HAnimSegment839ZZZ.children[0] = TouchSensor840;

let Transform841 = browser.currentScene.createNode("Transform");
Transform841.translation = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let Shape842 = browser.currentScene.createNode("Shape");
Shape842.USE = "HAnimJointShape";
Transform841YYY.child = new X3D.undefined();

Transform841ZZZ.child[0] = Shape842;

HAnimSegment839ZZZ.children[1] = Transform841;

let Shape843 = browser.currentScene.createNode("Shape");
let LineSet844 = browser.currentScene.createNode("LineSet");
LineSet844.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA845 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA845.USE = "HAnimSiteViewpointLineColorRGBA";
color = ColorRGBA845;

let Coordinate846 = browser.currentScene.createNode("Coordinate");
Coordinate846.point = new X3D.MFVec3f([-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
coord = Coordinate846;

geometry = LineSet844;

HAnimSegment839ZZZ.children[2] = Shape843;

let HAnimSite847 = browser.currentScene.createNode("HAnimSite");
HAnimSite847.DEF = "hanim_r_eyeball_site_view";
HAnimSite847.name = "r_eyeball_site_view";
HAnimSite847.translation = new X3D.SFVec3f([-0.034,1.64,0.05]);
let TouchSensor848 = browser.currentScene.createNode("TouchSensor");
TouchSensor848.description = "HAnimSite r_eyeball_site_view";
HAnimSite847YYY.children = new X3D.MFNode();

HAnimSite847ZZZ.children[0] = TouchSensor848;

let Shape849 = browser.currentScene.createNode("Shape");
Shape849.USE = "HAnimSiteShape";
HAnimSite847ZZZ.children[1] = Shape849;

let Viewpoint850 = browser.currentScene.createNode("Viewpoint");
Viewpoint850.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint850.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint850.position = new X3D.SFVec3f([0,0,0]);
Viewpoint850.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite847ZZZ.children[2] = Viewpoint850;

let Anchor851 = browser.currentScene.createNode("Anchor");
Anchor851.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor851.url = new X3D.MFString([new X3D.SFString("#hanim_r_eyeball_site_viewpoint")]);
let LOD852 = browser.currentScene.createNode("LOD");
LOD852.forceTransitions = True;
LOD852.range = new X3D.MFFloat([0.04]);
let WorldInfo853 = browser.currentScene.createNode("WorldInfo");
WorldInfo853.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD852YYY.children = new X3D.MFNode();

LOD852ZZZ.children[0] = WorldInfo853;

let Shape854 = browser.currentScene.createNode("Shape");
Shape854.USE = "HAnimSiteViewpointShape";
LOD852ZZZ.children[1] = Shape854;

Anchor851YYY.children = new X3D.MFNode();

Anchor851ZZZ.children[0] = LOD852;

HAnimSite847ZZZ.children[3] = Anchor851;

HAnimSegment839ZZZ.children[3] = HAnimSite847;

HAnimJoint838YYY.children = new X3D.MFNode();

HAnimJoint838ZZZ.children[0] = HAnimSegment839;

HAnimJoint704ZZZ.children[4] = HAnimJoint838;

let HAnimJoint855 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint855.DEF = "hanim_r_eyelid_joint";
HAnimJoint855.name = "r_eyelid_joint";
HAnimJoint855.center = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let HAnimSegment856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment856.DEF = "hanim_r_eyelid";
HAnimSegment856.name = "r_eyelid";
let TouchSensor857 = browser.currentScene.createNode("TouchSensor");
TouchSensor857.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment856YYY.children = new X3D.MFNode();

HAnimSegment856ZZZ.children[0] = TouchSensor857;

let Transform858 = browser.currentScene.createNode("Transform");
Transform858.translation = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let Shape859 = browser.currentScene.createNode("Shape");
Shape859.USE = "HAnimJointShape";
Transform858YYY.child = new X3D.undefined();

Transform858ZZZ.child[0] = Shape859;

HAnimSegment856ZZZ.children[1] = Transform858;

HAnimJoint855YYY.children = new X3D.MFNode();

HAnimJoint855ZZZ.children[0] = HAnimSegment856;

HAnimJoint704ZZZ.children[5] = HAnimJoint855;

let HAnimJoint860 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint860.DEF = "hanim_r_eyebrow_joint";
HAnimJoint860.name = "r_eyebrow_joint";
HAnimJoint860.center = new X3D.SFVec3f([-0.0336,1.635,0.0506]);
let HAnimSegment861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment861.DEF = "hanim_r_eyebrow";
HAnimSegment861.name = "r_eyebrow";
let TouchSensor862 = browser.currentScene.createNode("TouchSensor");
TouchSensor862.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment861YYY.children = new X3D.MFNode();

HAnimSegment861ZZZ.children[0] = TouchSensor862;

let Transform863 = browser.currentScene.createNode("Transform");
Transform863.translation = new X3D.SFVec3f([-0.0336,1.635,0.0506]);
let Shape864 = browser.currentScene.createNode("Shape");
Shape864.USE = "HAnimJointShape";
Transform863YYY.child = new X3D.undefined();

Transform863ZZZ.child[0] = Shape864;

HAnimSegment861ZZZ.children[1] = Transform863;

HAnimJoint860YYY.children = new X3D.MFNode();

HAnimJoint860ZZZ.children[0] = HAnimSegment861;

HAnimJoint704ZZZ.children[6] = HAnimJoint860;

let HAnimJoint865 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint865.DEF = "hanim_temporomandibular";
HAnimJoint865.name = "temporomandibular";
HAnimJoint865.center = new X3D.SFVec3f([0,1.63,0.015]);
let HAnimSegment866 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment866.DEF = "hanim_jaw";
HAnimSegment866.name = "jaw";
let TouchSensor867 = browser.currentScene.createNode("TouchSensor");
TouchSensor867.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment866YYY.children = new X3D.MFNode();

HAnimSegment866ZZZ.children[0] = TouchSensor867;

let Transform868 = browser.currentScene.createNode("Transform");
Transform868.translation = new X3D.SFVec3f([0,1.63,0.015]);
let Shape869 = browser.currentScene.createNode("Shape");
Shape869.USE = "HAnimJointShape";
Transform868YYY.child = new X3D.undefined();

Transform868ZZZ.child[0] = Shape869;

HAnimSegment866ZZZ.children[1] = Transform868;

let Shape870 = browser.currentScene.createNode("Shape");
let LineSet871 = browser.currentScene.createNode("LineSet");
LineSet871.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA872 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA872;

let Coordinate873 = browser.currentScene.createNode("Coordinate");
Coordinate873.point = new X3D.MFVec3f([0,1.63,0.015,0.045,1.63,0]);
coord = Coordinate873;

geometry = LineSet871;

HAnimSegment866ZZZ.children[2] = Shape870;

let Shape874 = browser.currentScene.createNode("Shape");
let LineSet875 = browser.currentScene.createNode("LineSet");
LineSet875.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA876 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA876.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA876;

let Coordinate877 = browser.currentScene.createNode("Coordinate");
Coordinate877.point = new X3D.MFVec3f([0,1.63,0.015,-0.045,1.63,0]);
coord = Coordinate877;

geometry = LineSet875;

HAnimSegment866ZZZ.children[3] = Shape874;

let HAnimSite878 = browser.currentScene.createNode("HAnimSite");
HAnimSite878.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite878.name = "temporomandibular_l_site_pt";
HAnimSite878.translation = new X3D.SFVec3f([0.045,1.63,0]);
let TouchSensor879 = browser.currentScene.createNode("TouchSensor");
TouchSensor879.description = "HAnimSite temporomandibular_l_site";
HAnimSite878YYY.children = new X3D.MFNode();

HAnimSite878ZZZ.children[0] = TouchSensor879;

let Shape880 = browser.currentScene.createNode("Shape");
Shape880.USE = "HAnimSiteShape";
HAnimSite878ZZZ.children[1] = Shape880;

HAnimSegment866ZZZ.children[4] = HAnimSite878;

let HAnimSite881 = browser.currentScene.createNode("HAnimSite");
HAnimSite881.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite881.name = "temporomandibular_r_site_pt";
HAnimSite881.translation = new X3D.SFVec3f([-0.045,1.63,0]);
let TouchSensor882 = browser.currentScene.createNode("TouchSensor");
TouchSensor882.description = "HAnimSite temporomandibular_r_site";
HAnimSite881YYY.children = new X3D.MFNode();

HAnimSite881ZZZ.children[0] = TouchSensor882;

let Shape883 = browser.currentScene.createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881ZZZ.children[1] = Shape883;

HAnimSegment866ZZZ.children[5] = HAnimSite881;

HAnimJoint865YYY.children = new X3D.MFNode();

HAnimJoint865ZZZ.children[0] = HAnimSegment866;

HAnimJoint704ZZZ.children[7] = HAnimJoint865;

HAnimJoint695ZZZ.children[1] = HAnimJoint704;

HAnimJoint686ZZZ.children[1] = HAnimJoint695;

HAnimJoint677ZZZ.children[1] = HAnimJoint686;

HAnimJoint668ZZZ.children[1] = HAnimJoint677;

HAnimJoint659ZZZ.children[1] = HAnimJoint668;

HAnimJoint650ZZZ.children[1] = HAnimJoint659;

HAnimJoint627ZZZ.children[1] = HAnimJoint650;

HAnimJoint596ZZZ.children[1] = HAnimJoint627;

let HAnimJoint884 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint884.DEF = "hanim_l_sternoclavicular";
HAnimJoint884.name = "l_sternoclavicular";
HAnimJoint884.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let HAnimSegment885 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment885.DEF = "hanim_l_clavicle";
HAnimSegment885.name = "l_clavicle";
let TouchSensor886 = browser.currentScene.createNode("TouchSensor");
TouchSensor886.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment885YYY.children = new X3D.MFNode();

HAnimSegment885ZZZ.children[0] = TouchSensor886;

let Transform887 = browser.currentScene.createNode("Transform");
Transform887.translation = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let Shape888 = browser.currentScene.createNode("Shape");
Shape888.USE = "HAnimJointShape";
Transform887YYY.child = new X3D.undefined();

Transform887ZZZ.child[0] = Shape888;

HAnimSegment885ZZZ.children[1] = Transform887;

let Shape889 = browser.currentScene.createNode("Shape");
let LineSet890 = browser.currentScene.createNode("LineSet");
LineSet890.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA891 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA891.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA891;

let Coordinate892 = browser.currentScene.createNode("Coordinate");
Coordinate892.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
coord = Coordinate892;

geometry = LineSet890;

HAnimSegment885ZZZ.children[2] = Shape889;

let Shape893 = browser.currentScene.createNode("Shape");
let LineSet894 = browser.currentScene.createNode("LineSet");
LineSet894.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA895 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA895.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA895;

let Coordinate896 = browser.currentScene.createNode("Coordinate");
Coordinate896.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
coord = Coordinate896;

geometry = LineSet894;

HAnimSegment885ZZZ.children[3] = Shape893;

let Shape897 = browser.currentScene.createNode("Shape");
let LineSet898 = browser.currentScene.createNode("LineSet");
LineSet898.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA899 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA899.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA899;

let Coordinate900 = browser.currentScene.createNode("Coordinate");
Coordinate900.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
coord = Coordinate900;

geometry = LineSet898;

HAnimSegment885ZZZ.children[4] = Shape897;

let Shape901 = browser.currentScene.createNode("Shape");
let LineSet902 = browser.currentScene.createNode("LineSet");
LineSet902.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA903 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA903.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA903;

let Coordinate904 = browser.currentScene.createNode("Coordinate");
Coordinate904.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
coord = Coordinate904;

geometry = LineSet902;

HAnimSegment885ZZZ.children[5] = Shape901;

let Shape905 = browser.currentScene.createNode("Shape");
let LineSet906 = browser.currentScene.createNode("LineSet");
LineSet906.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA907 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA907.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA907;

let Coordinate908 = browser.currentScene.createNode("Coordinate");
Coordinate908.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
coord = Coordinate908;

geometry = LineSet906;

HAnimSegment885ZZZ.children[6] = Shape905;

let HAnimSite909 = browser.currentScene.createNode("HAnimSite");
HAnimSite909.DEF = "hanim_l_clavicale_pt";
HAnimSite909.name = "l_clavicale_pt";
HAnimSite909.translation = new X3D.SFVec3f([0.0271,1.4943,0.0394]);
let TouchSensor910 = browser.currentScene.createNode("TouchSensor");
TouchSensor910.description = "HAnimSite l_clavicale";
HAnimSite909YYY.children = new X3D.MFNode();

HAnimSite909ZZZ.children[0] = TouchSensor910;

let Shape911 = browser.currentScene.createNode("Shape");
Shape911.USE = "HAnimSiteShape";
HAnimSite909ZZZ.children[1] = Shape911;

HAnimSegment885ZZZ.children[7] = HAnimSite909;

let HAnimSite912 = browser.currentScene.createNode("HAnimSite");
HAnimSite912.DEF = "hanim_l_acromion_pt";
HAnimSite912.name = "l_acromion_pt";
HAnimSite912.translation = new X3D.SFVec3f([0.2032,1.476,-0.049]);
let TouchSensor913 = browser.currentScene.createNode("TouchSensor");
TouchSensor913.description = "HAnimSite l_acromion";
HAnimSite912YYY.children = new X3D.MFNode();

HAnimSite912ZZZ.children[0] = TouchSensor913;

let Shape914 = browser.currentScene.createNode("Shape");
Shape914.USE = "HAnimSiteShape";
HAnimSite912ZZZ.children[1] = Shape914;

HAnimSegment885ZZZ.children[8] = HAnimSite912;

let HAnimSite915 = browser.currentScene.createNode("HAnimSite");
HAnimSite915.DEF = "hanim_l_axilla_ant_pt";
HAnimSite915.name = "l_axilla_ant_pt";
HAnimSite915.translation = new X3D.SFVec3f([0.1777,1.4065,-0.0075]);
let TouchSensor916 = browser.currentScene.createNode("TouchSensor");
TouchSensor916.description = "HAnimSite l_axilla_ant";
HAnimSite915YYY.children = new X3D.MFNode();

HAnimSite915ZZZ.children[0] = TouchSensor916;

let Shape917 = browser.currentScene.createNode("Shape");
Shape917.USE = "HAnimSiteShape";
HAnimSite915ZZZ.children[1] = Shape917;

HAnimSegment885ZZZ.children[9] = HAnimSite915;

let HAnimSite918 = browser.currentScene.createNode("HAnimSite");
HAnimSite918.DEF = "hanim_l_axilla_post_pt";
HAnimSite918.name = "l_axilla_post_pt";
HAnimSite918.translation = new X3D.SFVec3f([0.1706,1.4072,-0.0875]);
let TouchSensor919 = browser.currentScene.createNode("TouchSensor");
TouchSensor919.description = "HAnimSite l_axilla_post";
HAnimSite918YYY.children = new X3D.MFNode();

HAnimSite918ZZZ.children[0] = TouchSensor919;

let Shape920 = browser.currentScene.createNode("Shape");
Shape920.USE = "HAnimSiteShape";
HAnimSite918ZZZ.children[1] = Shape920;

HAnimSegment885ZZZ.children[10] = HAnimSite918;

HAnimJoint884YYY.children = new X3D.MFNode();

HAnimJoint884ZZZ.children[0] = HAnimSegment885;

let HAnimJoint921 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint921.DEF = "hanim_l_acromioclavicular";
HAnimJoint921.name = "l_acromioclavicular";
HAnimJoint921.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let HAnimSegment922 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment922.DEF = "hanim_l_scapula";
HAnimSegment922.name = "l_scapula";
let TouchSensor923 = browser.currentScene.createNode("TouchSensor");
TouchSensor923.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment922YYY.children = new X3D.MFNode();

HAnimSegment922ZZZ.children[0] = TouchSensor923;

let Transform924 = browser.currentScene.createNode("Transform");
Transform924.translation = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let Shape925 = browser.currentScene.createNode("Shape");
Shape925.USE = "HAnimJointShape";
Transform924YYY.child = new X3D.undefined();

Transform924ZZZ.child[0] = Shape925;

HAnimSegment922ZZZ.children[1] = Transform924;

let Shape926 = browser.currentScene.createNode("Shape");
let LineSet927 = browser.currentScene.createNode("LineSet");
LineSet927.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA928 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA928.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA928;

let Coordinate929 = browser.currentScene.createNode("Coordinate");
Coordinate929.point = new X3D.MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
coord = Coordinate929;

geometry = LineSet927;

HAnimSegment922ZZZ.children[2] = Shape926;

HAnimJoint921YYY.children = new X3D.MFNode();

HAnimJoint921ZZZ.children[0] = HAnimSegment922;

let HAnimJoint930 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint930.DEF = "hanim_l_shoulder";
HAnimJoint930.name = "l_shoulder";
HAnimJoint930.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let HAnimSegment931 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment931.DEF = "hanim_l_upperarm";
HAnimSegment931.name = "l_upperarm";
let TouchSensor932 = browser.currentScene.createNode("TouchSensor");
TouchSensor932.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment931YYY.children = new X3D.MFNode();

HAnimSegment931ZZZ.children[0] = TouchSensor932;

let Transform933 = browser.currentScene.createNode("Transform");
Transform933.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let Shape934 = browser.currentScene.createNode("Shape");
Shape934.USE = "HAnimJointShape";
Transform933YYY.child = new X3D.undefined();

Transform933ZZZ.child[0] = Shape934;

HAnimSegment931ZZZ.children[1] = Transform933;

let Shape935 = browser.currentScene.createNode("Shape");
let LineSet936 = browser.currentScene.createNode("LineSet");
LineSet936.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA937 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA937.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA937;

let Coordinate938 = browser.currentScene.createNode("Coordinate");
Coordinate938.point = new X3D.MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
coord = Coordinate938;

geometry = LineSet936;

HAnimSegment931ZZZ.children[2] = Shape935;

let Shape939 = browser.currentScene.createNode("Shape");
let LineSet940 = browser.currentScene.createNode("LineSet");
LineSet940.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA941 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA941.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA941;

let Coordinate942 = browser.currentScene.createNode("Coordinate");
Coordinate942.point = new X3D.MFVec3f([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
coord = Coordinate942;

geometry = LineSet940;

HAnimSegment931ZZZ.children[3] = Shape939;

let HAnimSite943 = browser.currentScene.createNode("HAnimSite");
HAnimSite943.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite943.name = "l_humeral_lateral_epicn_pt";
HAnimSite943.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
let TouchSensor944 = browser.currentScene.createNode("TouchSensor");
TouchSensor944.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite943YYY.children = new X3D.MFNode();

HAnimSite943ZZZ.children[0] = TouchSensor944;

let Shape945 = browser.currentScene.createNode("Shape");
Shape945.USE = "HAnimSiteShape";
HAnimSite943ZZZ.children[1] = Shape945;

HAnimSegment931ZZZ.children[4] = HAnimSite943;

HAnimJoint930YYY.children = new X3D.MFNode();

HAnimJoint930ZZZ.children[0] = HAnimSegment931;

let HAnimJoint946 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint946.DEF = "hanim_l_elbow";
HAnimJoint946.name = "l_elbow";
HAnimJoint946.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let HAnimSegment947 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment947.DEF = "hanim_l_forearm";
HAnimSegment947.name = "l_forearm";
let TouchSensor948 = browser.currentScene.createNode("TouchSensor");
TouchSensor948.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment947YYY.children = new X3D.MFNode();

HAnimSegment947ZZZ.children[0] = TouchSensor948;

let Transform949 = browser.currentScene.createNode("Transform");
Transform949.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let Shape950 = browser.currentScene.createNode("Shape");
Shape950.USE = "HAnimJointShape";
Transform949YYY.child = new X3D.undefined();

Transform949ZZZ.child[0] = Shape950;

HAnimSegment947ZZZ.children[1] = Transform949;

let Shape951 = browser.currentScene.createNode("Shape");
let LineSet952 = browser.currentScene.createNode("LineSet");
LineSet952.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA953 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA953.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA953;

let Coordinate954 = browser.currentScene.createNode("Coordinate");
Coordinate954.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
coord = Coordinate954;

geometry = LineSet952;

HAnimSegment947ZZZ.children[2] = Shape951;

let Shape955 = browser.currentScene.createNode("Shape");
let LineSet956 = browser.currentScene.createNode("LineSet");
LineSet956.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA957 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA957.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA957;

let Coordinate958 = browser.currentScene.createNode("Coordinate");
Coordinate958.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
coord = Coordinate958;

geometry = LineSet956;

HAnimSegment947ZZZ.children[3] = Shape955;

let Shape959 = browser.currentScene.createNode("Shape");
let LineSet960 = browser.currentScene.createNode("LineSet");
LineSet960.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA961 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA961;

let Coordinate962 = browser.currentScene.createNode("Coordinate");
Coordinate962.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
coord = Coordinate962;

geometry = LineSet960;

HAnimSegment947ZZZ.children[4] = Shape959;

let Shape963 = browser.currentScene.createNode("Shape");
let LineSet964 = browser.currentScene.createNode("LineSet");
LineSet964.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA965 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA965;

let Coordinate966 = browser.currentScene.createNode("Coordinate");
Coordinate966.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
coord = Coordinate966;

geometry = LineSet964;

HAnimSegment947ZZZ.children[5] = Shape963;

let Shape967 = browser.currentScene.createNode("Shape");
let LineSet968 = browser.currentScene.createNode("LineSet");
LineSet968.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA969 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA969;

let Coordinate970 = browser.currentScene.createNode("Coordinate");
Coordinate970.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
coord = Coordinate970;

geometry = LineSet968;

HAnimSegment947ZZZ.children[6] = Shape967;

let HAnimSite971 = browser.currentScene.createNode("HAnimSite");
HAnimSite971.DEF = "hanim_l_radial_styloid_pt";
HAnimSite971.name = "l_radial_styloid_pt";
HAnimSite971.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let TouchSensor972 = browser.currentScene.createNode("TouchSensor");
TouchSensor972.description = "HAnimSite l_radial_styloid";
HAnimSite971YYY.children = new X3D.MFNode();

HAnimSite971ZZZ.children[0] = TouchSensor972;

let Shape973 = browser.currentScene.createNode("Shape");
Shape973.USE = "HAnimSiteShape";
HAnimSite971ZZZ.children[1] = Shape973;

HAnimSegment947ZZZ.children[7] = HAnimSite971;

let HAnimSite974 = browser.currentScene.createNode("HAnimSite");
HAnimSite974.DEF = "hanim_l_olecranon_pt";
HAnimSite974.name = "l_olecranon_pt";
HAnimSite974.translation = new X3D.SFVec3f([0.1962,1.1375,-0.1123]);
let TouchSensor975 = browser.currentScene.createNode("TouchSensor");
TouchSensor975.description = "HAnimSite l_olecranon";
HAnimSite974YYY.children = new X3D.MFNode();

HAnimSite974ZZZ.children[0] = TouchSensor975;

let Shape976 = browser.currentScene.createNode("Shape");
Shape976.USE = "HAnimSiteShape";
HAnimSite974ZZZ.children[1] = Shape976;

HAnimSegment947ZZZ.children[8] = HAnimSite974;

let HAnimSite977 = browser.currentScene.createNode("HAnimSite");
HAnimSite977.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite977.name = "l_humeral_medial_epicn_pt";
HAnimSite977.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
let TouchSensor978 = browser.currentScene.createNode("TouchSensor");
TouchSensor978.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite977YYY.children = new X3D.MFNode();

HAnimSite977ZZZ.children[0] = TouchSensor978;

let Shape979 = browser.currentScene.createNode("Shape");
Shape979.USE = "HAnimSiteShape";
HAnimSite977ZZZ.children[1] = Shape979;

HAnimSegment947ZZZ.children[9] = HAnimSite977;

let HAnimSite980 = browser.currentScene.createNode("HAnimSite");
HAnimSite980.DEF = "hanim_l_radiale_pt";
HAnimSite980.name = "l_radiale_pt";
HAnimSite980.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
let TouchSensor981 = browser.currentScene.createNode("TouchSensor");
TouchSensor981.description = "HAnimSite l_radiale";
HAnimSite980YYY.children = new X3D.MFNode();

HAnimSite980ZZZ.children[0] = TouchSensor981;

let Shape982 = browser.currentScene.createNode("Shape");
Shape982.USE = "HAnimSiteShape";
HAnimSite980ZZZ.children[1] = Shape982;

HAnimSegment947ZZZ.children[10] = HAnimSite980;

HAnimJoint946YYY.children = new X3D.MFNode();

HAnimJoint946ZZZ.children[0] = HAnimSegment947;

let HAnimJoint983 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint983.DEF = "hanim_l_wrist";
HAnimJoint983.name = "l_wrist";
HAnimJoint983.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let HAnimSegment984 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment984.DEF = "hanim_l_hand";
HAnimSegment984.name = "l_hand";
let TouchSensor985 = browser.currentScene.createNode("TouchSensor");
TouchSensor985.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment984YYY.children = new X3D.MFNode();

HAnimSegment984ZZZ.children[0] = TouchSensor985;

let Transform986 = browser.currentScene.createNode("Transform");
Transform986.translation = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let Shape987 = browser.currentScene.createNode("Shape");
Shape987.USE = "HAnimJointShape";
Transform986YYY.child = new X3D.undefined();

Transform986ZZZ.child[0] = Shape987;

HAnimSegment984ZZZ.children[1] = Transform986;

let Shape988 = browser.currentScene.createNode("Shape");
let LineSet989 = browser.currentScene.createNode("LineSet");
LineSet989.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA990 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA990.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA990;

let Coordinate991 = browser.currentScene.createNode("Coordinate");
Coordinate991.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
coord = Coordinate991;

geometry = LineSet989;

HAnimSegment984ZZZ.children[2] = Shape988;

let Shape992 = browser.currentScene.createNode("Shape");
let LineSet993 = browser.currentScene.createNode("LineSet");
LineSet993.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA994 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA994;

let Coordinate995 = browser.currentScene.createNode("Coordinate");
Coordinate995.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
coord = Coordinate995;

geometry = LineSet993;

HAnimSegment984ZZZ.children[3] = Shape992;

let Shape996 = browser.currentScene.createNode("Shape");
let LineSet997 = browser.currentScene.createNode("LineSet");
LineSet997.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA998 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA998.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA998;

let Coordinate999 = browser.currentScene.createNode("Coordinate");
Coordinate999.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
coord = Coordinate999;

geometry = LineSet997;

HAnimSegment984ZZZ.children[4] = Shape996;

let Shape1000 = browser.currentScene.createNode("Shape");
let LineSet1001 = browser.currentScene.createNode("LineSet");
LineSet1001.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1002 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1002;

let Coordinate1003 = browser.currentScene.createNode("Coordinate");
Coordinate1003.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
coord = Coordinate1003;

geometry = LineSet1001;

HAnimSegment984ZZZ.children[5] = Shape1000;

let Shape1004 = browser.currentScene.createNode("Shape");
let LineSet1005 = browser.currentScene.createNode("LineSet");
LineSet1005.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1006 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1006.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1006;

let Coordinate1007 = browser.currentScene.createNode("Coordinate");
Coordinate1007.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
coord = Coordinate1007;

geometry = LineSet1005;

HAnimSegment984ZZZ.children[6] = Shape1004;

let Shape1008 = browser.currentScene.createNode("Shape");
let LineSet1009 = browser.currentScene.createNode("LineSet");
LineSet1009.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1010 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1010.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1010;

let Coordinate1011 = browser.currentScene.createNode("Coordinate");
Coordinate1011.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
coord = Coordinate1011;

geometry = LineSet1009;

HAnimSegment984ZZZ.children[7] = Shape1008;

let Shape1012 = browser.currentScene.createNode("Shape");
let LineSet1013 = browser.currentScene.createNode("LineSet");
LineSet1013.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1014 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1014.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1014;

let Coordinate1015 = browser.currentScene.createNode("Coordinate");
Coordinate1015.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
coord = Coordinate1015;

geometry = LineSet1013;

HAnimSegment984ZZZ.children[8] = Shape1012;

let Shape1016 = browser.currentScene.createNode("Shape");
let LineSet1017 = browser.currentScene.createNode("LineSet");
LineSet1017.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1018 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1018.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1018;

let Coordinate1019 = browser.currentScene.createNode("Coordinate");
Coordinate1019.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
coord = Coordinate1019;

geometry = LineSet1017;

HAnimSegment984ZZZ.children[9] = Shape1016;

let Shape1020 = browser.currentScene.createNode("Shape");
let LineSet1021 = browser.currentScene.createNode("LineSet");
LineSet1021.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1022 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSiteViewpointLineColorRGBA";
color = ColorRGBA1022;

let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
coord = Coordinate1023;

geometry = LineSet1021;

HAnimSegment984ZZZ.children[10] = Shape1020;

let HAnimSite1024 = browser.currentScene.createNode("HAnimSite");
HAnimSite1024.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1024.name = "l_metacarpal_pha2_pt";
HAnimSite1024.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let TouchSensor1025 = browser.currentScene.createNode("TouchSensor");
TouchSensor1025.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1024YYY.children = new X3D.MFNode();

HAnimSite1024ZZZ.children[0] = TouchSensor1025;

let Shape1026 = browser.currentScene.createNode("Shape");
Shape1026.USE = "HAnimSiteShape";
HAnimSite1024ZZZ.children[1] = Shape1026;

HAnimSegment984ZZZ.children[11] = HAnimSite1024;

let HAnimSite1027 = browser.currentScene.createNode("HAnimSite");
HAnimSite1027.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1027.name = "l_ulnar_styloid_pt";
HAnimSite1027.translation = new X3D.SFVec3f([0.2142,0.8529,-0.0648]);
let TouchSensor1028 = browser.currentScene.createNode("TouchSensor");
TouchSensor1028.description = "HAnimSite l_ulnar_styloid";
HAnimSite1027YYY.children = new X3D.MFNode();

HAnimSite1027ZZZ.children[0] = TouchSensor1028;

let Shape1029 = browser.currentScene.createNode("Shape");
Shape1029.USE = "HAnimSiteShape";
HAnimSite1027ZZZ.children[1] = Shape1029;

HAnimSegment984ZZZ.children[12] = HAnimSite1027;

let HAnimSite1030 = browser.currentScene.createNode("HAnimSite");
HAnimSite1030.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1030.name = "l_metacarpal_pha5_pt";
HAnimSite1030.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let TouchSensor1031 = browser.currentScene.createNode("TouchSensor");
TouchSensor1031.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1030YYY.children = new X3D.MFNode();

HAnimSite1030ZZZ.children[0] = TouchSensor1031;

let Shape1032 = browser.currentScene.createNode("Shape");
Shape1032.USE = "HAnimSiteShape";
HAnimSite1030ZZZ.children[1] = Shape1032;

HAnimSegment984ZZZ.children[13] = HAnimSite1030;

let HAnimSite1033 = browser.currentScene.createNode("HAnimSite");
HAnimSite1033.DEF = "hanim_l_hand_front_view";
HAnimSite1033.name = "l_hand_front_view";
HAnimSite1033.translation = new X3D.SFVec3f([0.3,0.75,0.45]);
let TouchSensor1034 = browser.currentScene.createNode("TouchSensor");
TouchSensor1034.description = "HAnimSite l_hand_front_view";
HAnimSite1033YYY.children = new X3D.MFNode();

HAnimSite1033ZZZ.children[0] = TouchSensor1034;

let Shape1035 = browser.currentScene.createNode("Shape");
Shape1035.USE = "HAnimSiteShape";
HAnimSite1033ZZZ.children[1] = Shape1035;

let Viewpoint1036 = browser.currentScene.createNode("Viewpoint");
Viewpoint1036.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1036.description = "left hand front";
Viewpoint1036.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1036.centerOfRotation = new X3D.SFVec3f([0,0.7,0]);
HAnimSite1033ZZZ.children[2] = Viewpoint1036;

let Anchor1037 = browser.currentScene.createNode("Anchor");
Anchor1037.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1037.url = new X3D.MFString([new X3D.SFString("#hanim_l_hand_front_viewpoint")]);
let LOD1038 = browser.currentScene.createNode("LOD");
LOD1038.forceTransitions = True;
LOD1038.range = new X3D.MFFloat([0.04]);
let WorldInfo1039 = browser.currentScene.createNode("WorldInfo");
WorldInfo1039.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1038YYY.children = new X3D.MFNode();

LOD1038ZZZ.children[0] = WorldInfo1039;

let Shape1040 = browser.currentScene.createNode("Shape");
Shape1040.USE = "HAnimSiteViewpointShape";
LOD1038ZZZ.children[1] = Shape1040;

Anchor1037YYY.children = new X3D.MFNode();

Anchor1037ZZZ.children[0] = LOD1038;

HAnimSite1033ZZZ.children[3] = Anchor1037;

HAnimSegment984ZZZ.children[14] = HAnimSite1033;

HAnimJoint983YYY.children = new X3D.MFNode();

HAnimJoint983ZZZ.children[0] = HAnimSegment984;

let HAnimJoint1041 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1041.DEF = "hanim_l_thumb1";
HAnimJoint1041.name = "l_thumb1";
HAnimJoint1041.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let HAnimSegment1042 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1042.DEF = "hanim_l_thumb_metacarpal";
HAnimSegment1042.name = "l_thumb_metacarpal";
let TouchSensor1043 = browser.currentScene.createNode("TouchSensor");
TouchSensor1043.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1042YYY.children = new X3D.MFNode();

HAnimSegment1042ZZZ.children[0] = TouchSensor1043;

let Transform1044 = browser.currentScene.createNode("Transform");
Transform1044.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Shape1045 = browser.currentScene.createNode("Shape");
Shape1045.USE = "HAnimJointShape";
Transform1044YYY.child = new X3D.undefined();

Transform1044ZZZ.child[0] = Shape1045;

HAnimSegment1042ZZZ.children[1] = Transform1044;

let Shape1046 = browser.currentScene.createNode("Shape");
let LineSet1047 = browser.currentScene.createNode("LineSet");
LineSet1047.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1048 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1048.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1048;

let Coordinate1049 = browser.currentScene.createNode("Coordinate");
Coordinate1049.point = new X3D.MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
coord = Coordinate1049;

geometry = LineSet1047;

HAnimSegment1042ZZZ.children[2] = Shape1046;

HAnimJoint1041YYY.children = new X3D.MFNode();

HAnimJoint1041ZZZ.children[0] = HAnimSegment1042;

let HAnimJoint1050 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1050.DEF = "hanim_l_thumb2";
HAnimJoint1050.name = "l_thumb2";
HAnimJoint1050.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let HAnimSegment1051 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1051.DEF = "hanim_l_thumb_proximal";
HAnimSegment1051.name = "l_thumb_proximal";
let TouchSensor1052 = browser.currentScene.createNode("TouchSensor");
TouchSensor1052.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1051YYY.children = new X3D.MFNode();

HAnimSegment1051ZZZ.children[0] = TouchSensor1052;

let Transform1053 = browser.currentScene.createNode("Transform");
Transform1053.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Shape1054 = browser.currentScene.createNode("Shape");
Shape1054.USE = "HAnimJointShape";
Transform1053YYY.child = new X3D.undefined();

Transform1053ZZZ.child[0] = Shape1054;

HAnimSegment1051ZZZ.children[1] = Transform1053;

let Shape1055 = browser.currentScene.createNode("Shape");
let LineSet1056 = browser.currentScene.createNode("LineSet");
LineSet1056.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1057 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1057;

let Coordinate1058 = browser.currentScene.createNode("Coordinate");
Coordinate1058.point = new X3D.MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
coord = Coordinate1058;

geometry = LineSet1056;

HAnimSegment1051ZZZ.children[2] = Shape1055;

HAnimJoint1050YYY.children = new X3D.MFNode();

HAnimJoint1050ZZZ.children[0] = HAnimSegment1051;

let HAnimJoint1059 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1059.DEF = "hanim_l_thumb3";
HAnimJoint1059.name = "l_thumb3";
HAnimJoint1059.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let HAnimSegment1060 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1060.DEF = "hanim_l_thumb_distal";
HAnimSegment1060.name = "l_thumb_distal";
let TouchSensor1061 = browser.currentScene.createNode("TouchSensor");
TouchSensor1061.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1060YYY.children = new X3D.MFNode();

HAnimSegment1060ZZZ.children[0] = TouchSensor1061;

let Transform1062 = browser.currentScene.createNode("Transform");
Transform1062.translation = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let Shape1063 = browser.currentScene.createNode("Shape");
Shape1063.USE = "HAnimJointShape";
Transform1062YYY.child = new X3D.undefined();

Transform1062ZZZ.child[0] = Shape1063;

HAnimSegment1060ZZZ.children[1] = Transform1062;

let Shape1064 = browser.currentScene.createNode("Shape");
let LineSet1065 = browser.currentScene.createNode("LineSet");
LineSet1065.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1066 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1066.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1066;

let Coordinate1067 = browser.currentScene.createNode("Coordinate");
Coordinate1067.point = new X3D.MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
coord = Coordinate1067;

geometry = LineSet1065;

HAnimSegment1060ZZZ.children[2] = Shape1064;

let HAnimSite1068 = browser.currentScene.createNode("HAnimSite");
HAnimSite1068.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1068.name = "l_thumb_distal_tip";
HAnimSite1068.translation = new X3D.SFVec3f([0.1982,0.8061,0.0759]);
let TouchSensor1069 = browser.currentScene.createNode("TouchSensor");
TouchSensor1069.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1068YYY.children = new X3D.MFNode();

HAnimSite1068ZZZ.children[0] = TouchSensor1069;

let Shape1070 = browser.currentScene.createNode("Shape");
Shape1070.USE = "HAnimSiteShape";
HAnimSite1068ZZZ.children[1] = Shape1070;

HAnimSegment1060ZZZ.children[3] = HAnimSite1068;

HAnimJoint1059YYY.children = new X3D.MFNode();

HAnimJoint1059ZZZ.children[0] = HAnimSegment1060;

HAnimJoint1050ZZZ.children[1] = HAnimJoint1059;

HAnimJoint1041ZZZ.children[1] = HAnimJoint1050;

HAnimJoint983ZZZ.children[1] = HAnimJoint1041;

let HAnimJoint1071 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1071.DEF = "hanim_l_index0";
HAnimJoint1071.name = "l_index0";
HAnimJoint1071.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let HAnimSegment1072 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1072.DEF = "hanim_l_index_metacarpal";
HAnimSegment1072.name = "l_index_metacarpal";
let TouchSensor1073 = browser.currentScene.createNode("TouchSensor");
TouchSensor1073.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1072YYY.children = new X3D.MFNode();

HAnimSegment1072ZZZ.children[0] = TouchSensor1073;

let Transform1074 = browser.currentScene.createNode("Transform");
Transform1074.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Shape1075 = browser.currentScene.createNode("Shape");
Shape1075.USE = "HAnimJointShape";
Transform1074YYY.child = new X3D.undefined();

Transform1074ZZZ.child[0] = Shape1075;

HAnimSegment1072ZZZ.children[1] = Transform1074;

let Shape1076 = browser.currentScene.createNode("Shape");
let LineSet1077 = browser.currentScene.createNode("LineSet");
LineSet1077.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1078 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1078.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1078;

let Coordinate1079 = browser.currentScene.createNode("Coordinate");
Coordinate1079.point = new X3D.MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
coord = Coordinate1079;

geometry = LineSet1077;

HAnimSegment1072ZZZ.children[2] = Shape1076;

HAnimJoint1071YYY.children = new X3D.MFNode();

HAnimJoint1071ZZZ.children[0] = HAnimSegment1072;

let HAnimJoint1080 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1080.DEF = "hanim_l_index1";
HAnimJoint1080.name = "l_index1";
HAnimJoint1080.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let HAnimSegment1081 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1081.DEF = "hanim_l_index_proximal";
HAnimSegment1081.name = "l_index_proximal";
let TouchSensor1082 = browser.currentScene.createNode("TouchSensor");
TouchSensor1082.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1081YYY.children = new X3D.MFNode();

HAnimSegment1081ZZZ.children[0] = TouchSensor1082;

let Transform1083 = browser.currentScene.createNode("Transform");
Transform1083.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Shape1084 = browser.currentScene.createNode("Shape");
Shape1084.USE = "HAnimJointShape";
Transform1083YYY.child = new X3D.undefined();

Transform1083ZZZ.child[0] = Shape1084;

HAnimSegment1081ZZZ.children[1] = Transform1083;

let Shape1085 = browser.currentScene.createNode("Shape");
let LineSet1086 = browser.currentScene.createNode("LineSet");
LineSet1086.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1087 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1087.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1087;

let Coordinate1088 = browser.currentScene.createNode("Coordinate");
Coordinate1088.point = new X3D.MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
coord = Coordinate1088;

geometry = LineSet1086;

HAnimSegment1081ZZZ.children[2] = Shape1085;

HAnimJoint1080YYY.children = new X3D.MFNode();

HAnimJoint1080ZZZ.children[0] = HAnimSegment1081;

let HAnimJoint1089 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1089.DEF = "hanim_l_index2";
HAnimJoint1089.name = "l_index2";
HAnimJoint1089.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let HAnimSegment1090 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1090.DEF = "hanim_l_index_middle";
HAnimSegment1090.name = "l_index_middle";
let TouchSensor1091 = browser.currentScene.createNode("TouchSensor");
TouchSensor1091.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1090YYY.children = new X3D.MFNode();

HAnimSegment1090ZZZ.children[0] = TouchSensor1091;

let Transform1092 = browser.currentScene.createNode("Transform");
Transform1092.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Shape1093 = browser.currentScene.createNode("Shape");
Shape1093.USE = "HAnimJointShape";
Transform1092YYY.child = new X3D.undefined();

Transform1092ZZZ.child[0] = Shape1093;

HAnimSegment1090ZZZ.children[1] = Transform1092;

let Shape1094 = browser.currentScene.createNode("Shape");
let LineSet1095 = browser.currentScene.createNode("LineSet");
LineSet1095.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1096 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1096.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1096;

let Coordinate1097 = browser.currentScene.createNode("Coordinate");
Coordinate1097.point = new X3D.MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
coord = Coordinate1097;

geometry = LineSet1095;

HAnimSegment1090ZZZ.children[2] = Shape1094;

HAnimJoint1089YYY.children = new X3D.MFNode();

HAnimJoint1089ZZZ.children[0] = HAnimSegment1090;

let HAnimJoint1098 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1098.DEF = "hanim_l_index3";
HAnimJoint1098.name = "l_index3";
HAnimJoint1098.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let HAnimSegment1099 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1099.DEF = "hanim_l_index_distal";
HAnimSegment1099.name = "l_index_distal";
let TouchSensor1100 = browser.currentScene.createNode("TouchSensor");
TouchSensor1100.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1099YYY.children = new X3D.MFNode();

HAnimSegment1099ZZZ.children[0] = TouchSensor1100;

let Transform1101 = browser.currentScene.createNode("Transform");
Transform1101.translation = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let Shape1102 = browser.currentScene.createNode("Shape");
Shape1102.USE = "HAnimJointShape";
Transform1101YYY.child = new X3D.undefined();

Transform1101ZZZ.child[0] = Shape1102;

HAnimSegment1099ZZZ.children[1] = Transform1101;

let Shape1103 = browser.currentScene.createNode("Shape");
let LineSet1104 = browser.currentScene.createNode("LineSet");
LineSet1104.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1105 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1105.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1105;

let Coordinate1106 = browser.currentScene.createNode("Coordinate");
Coordinate1106.point = new X3D.MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
coord = Coordinate1106;

geometry = LineSet1104;

HAnimSegment1099ZZZ.children[2] = Shape1103;

let Shape1107 = browser.currentScene.createNode("Shape");
let LineSet1108 = browser.currentScene.createNode("LineSet");
LineSet1108.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1109 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1109;

let Coordinate1110 = browser.currentScene.createNode("Coordinate");
Coordinate1110.point = new X3D.MFVec3f([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
coord = Coordinate1110;

geometry = LineSet1108;

HAnimSegment1099ZZZ.children[3] = Shape1107;

let HAnimSite1111 = browser.currentScene.createNode("HAnimSite");
HAnimSite1111.DEF = "hanim_l_index_distal_tip";
HAnimSite1111.name = "l_index_distal_tip";
HAnimSite1111.translation = new X3D.SFVec3f([0.2089,0.6858,-0.0245]);
let TouchSensor1112 = browser.currentScene.createNode("TouchSensor");
TouchSensor1112.description = "HAnimSite l_index_distal_tip";
HAnimSite1111YYY.children = new X3D.MFNode();

HAnimSite1111ZZZ.children[0] = TouchSensor1112;

let Shape1113 = browser.currentScene.createNode("Shape");
Shape1113.USE = "HAnimSiteShape";
HAnimSite1111ZZZ.children[1] = Shape1113;

HAnimSegment1099ZZZ.children[4] = HAnimSite1111;

let HAnimSite1114 = browser.currentScene.createNode("HAnimSite");
HAnimSite1114.DEF = "hanim_l_dactylion_pt";
HAnimSite1114.name = "l_dactylion_pt";
HAnimSite1114.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
let TouchSensor1115 = browser.currentScene.createNode("TouchSensor");
TouchSensor1115.description = "HAnimSite l_dactylion";
HAnimSite1114YYY.children = new X3D.MFNode();

HAnimSite1114ZZZ.children[0] = TouchSensor1115;

let Shape1116 = browser.currentScene.createNode("Shape");
Shape1116.USE = "HAnimSiteShape";
HAnimSite1114ZZZ.children[1] = Shape1116;

HAnimSegment1099ZZZ.children[5] = HAnimSite1114;

HAnimJoint1098YYY.children = new X3D.MFNode();

HAnimJoint1098ZZZ.children[0] = HAnimSegment1099;

HAnimJoint1089ZZZ.children[1] = HAnimJoint1098;

HAnimJoint1080ZZZ.children[1] = HAnimJoint1089;

HAnimJoint1071ZZZ.children[1] = HAnimJoint1080;

HAnimJoint983ZZZ.children[2] = HAnimJoint1071;

let HAnimJoint1117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1117.DEF = "hanim_l_middle0";
HAnimJoint1117.name = "l_middle0";
HAnimJoint1117.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let HAnimSegment1118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1118.DEF = "hanim_l_middle_metacarpal";
HAnimSegment1118.name = "l_middle_metacarpal";
let TouchSensor1119 = browser.currentScene.createNode("TouchSensor");
TouchSensor1119.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1118YYY.children = new X3D.MFNode();

HAnimSegment1118ZZZ.children[0] = TouchSensor1119;

let Transform1120 = browser.currentScene.createNode("Transform");
Transform1120.translation = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let Shape1121 = browser.currentScene.createNode("Shape");
Shape1121.USE = "HAnimJointShape";
Transform1120YYY.child = new X3D.undefined();

Transform1120ZZZ.child[0] = Shape1121;

HAnimSegment1118ZZZ.children[1] = Transform1120;

let Shape1122 = browser.currentScene.createNode("Shape");
let LineSet1123 = browser.currentScene.createNode("LineSet");
LineSet1123.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1124 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1124.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1124;

let Coordinate1125 = browser.currentScene.createNode("Coordinate");
Coordinate1125.point = new X3D.MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
coord = Coordinate1125;

geometry = LineSet1123;

HAnimSegment1118ZZZ.children[2] = Shape1122;

HAnimJoint1117YYY.children = new X3D.MFNode();

HAnimJoint1117ZZZ.children[0] = HAnimSegment1118;

let HAnimJoint1126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1126.DEF = "hanim_l_middle1";
HAnimJoint1126.name = "l_middle1";
HAnimJoint1126.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let HAnimSegment1127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1127.DEF = "hanim_l_middle_proximal";
HAnimSegment1127.name = "l_middle_proximal";
let TouchSensor1128 = browser.currentScene.createNode("TouchSensor");
TouchSensor1128.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1127YYY.children = new X3D.MFNode();

HAnimSegment1127ZZZ.children[0] = TouchSensor1128;

let Transform1129 = browser.currentScene.createNode("Transform");
Transform1129.translation = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let Shape1130 = browser.currentScene.createNode("Shape");
Shape1130.USE = "HAnimJointShape";
Transform1129YYY.child = new X3D.undefined();

Transform1129ZZZ.child[0] = Shape1130;

HAnimSegment1127ZZZ.children[1] = Transform1129;

let Shape1131 = browser.currentScene.createNode("Shape");
let LineSet1132 = browser.currentScene.createNode("LineSet");
LineSet1132.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1133 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1133.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1133;

let Coordinate1134 = browser.currentScene.createNode("Coordinate");
Coordinate1134.point = new X3D.MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
coord = Coordinate1134;

geometry = LineSet1132;

HAnimSegment1127ZZZ.children[2] = Shape1131;

HAnimJoint1126YYY.children = new X3D.MFNode();

HAnimJoint1126ZZZ.children[0] = HAnimSegment1127;

let HAnimJoint1135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1135.DEF = "hanim_l_middle2";
HAnimJoint1135.name = "l_middle2";
HAnimJoint1135.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let HAnimSegment1136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1136.DEF = "hanim_l_middle_middle";
HAnimSegment1136.name = "l_middle_middle";
let TouchSensor1137 = browser.currentScene.createNode("TouchSensor");
TouchSensor1137.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1136YYY.children = new X3D.MFNode();

HAnimSegment1136ZZZ.children[0] = TouchSensor1137;

let Transform1138 = browser.currentScene.createNode("Transform");
Transform1138.translation = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let Shape1139 = browser.currentScene.createNode("Shape");
Shape1139.USE = "HAnimJointShape";
Transform1138YYY.child = new X3D.undefined();

Transform1138ZZZ.child[0] = Shape1139;

HAnimSegment1136ZZZ.children[1] = Transform1138;

let Shape1140 = browser.currentScene.createNode("Shape");
let LineSet1141 = browser.currentScene.createNode("LineSet");
LineSet1141.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1142 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1142.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1142;

let Coordinate1143 = browser.currentScene.createNode("Coordinate");
Coordinate1143.point = new X3D.MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
coord = Coordinate1143;

geometry = LineSet1141;

HAnimSegment1136ZZZ.children[2] = Shape1140;

HAnimJoint1135YYY.children = new X3D.MFNode();

HAnimJoint1135ZZZ.children[0] = HAnimSegment1136;

let HAnimJoint1144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1144.DEF = "hanim_l_middle3";
HAnimJoint1144.name = "l_middle3";
HAnimJoint1144.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let HAnimSegment1145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1145.DEF = "hanim_l_middle_distal";
HAnimSegment1145.name = "l_middle_distal";
let TouchSensor1146 = browser.currentScene.createNode("TouchSensor");
TouchSensor1146.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1145YYY.children = new X3D.MFNode();

HAnimSegment1145ZZZ.children[0] = TouchSensor1146;

let Transform1147 = browser.currentScene.createNode("Transform");
Transform1147.translation = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let Shape1148 = browser.currentScene.createNode("Shape");
Shape1148.USE = "HAnimJointShape";
Transform1147YYY.child = new X3D.undefined();

Transform1147ZZZ.child[0] = Shape1148;

HAnimSegment1145ZZZ.children[1] = Transform1147;

let Shape1149 = browser.currentScene.createNode("Shape");
let LineSet1150 = browser.currentScene.createNode("LineSet");
LineSet1150.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1151 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1151.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1151;

let Coordinate1152 = browser.currentScene.createNode("Coordinate");
Coordinate1152.point = new X3D.MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
coord = Coordinate1152;

geometry = LineSet1150;

HAnimSegment1145ZZZ.children[2] = Shape1149;

let HAnimSite1153 = browser.currentScene.createNode("HAnimSite");
HAnimSite1153.DEF = "hanim_l_middle_distal_tip";
HAnimSite1153.name = "l_middle_distal_tip";
HAnimSite1153.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
let TouchSensor1154 = browser.currentScene.createNode("TouchSensor");
TouchSensor1154.description = "HAnimSite l_middle_distal_tip";
HAnimSite1153YYY.children = new X3D.MFNode();

HAnimSite1153ZZZ.children[0] = TouchSensor1154;

let Shape1155 = browser.currentScene.createNode("Shape");
Shape1155.USE = "HAnimSiteShape";
HAnimSite1153ZZZ.children[1] = Shape1155;

HAnimSegment1145ZZZ.children[3] = HAnimSite1153;

HAnimJoint1144YYY.children = new X3D.MFNode();

HAnimJoint1144ZZZ.children[0] = HAnimSegment1145;

HAnimJoint1135ZZZ.children[1] = HAnimJoint1144;

HAnimJoint1126ZZZ.children[1] = HAnimJoint1135;

HAnimJoint1117ZZZ.children[1] = HAnimJoint1126;

HAnimJoint983ZZZ.children[3] = HAnimJoint1117;

let HAnimJoint1156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1156.DEF = "hanim_l_ring0";
HAnimJoint1156.name = "l_ring0";
HAnimJoint1156.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let HAnimSegment1157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1157.DEF = "hanim_l_ring_metacarpal";
HAnimSegment1157.name = "l_ring_metacarpal";
let TouchSensor1158 = browser.currentScene.createNode("TouchSensor");
TouchSensor1158.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1157YYY.children = new X3D.MFNode();

HAnimSegment1157ZZZ.children[0] = TouchSensor1158;

let Transform1159 = browser.currentScene.createNode("Transform");
Transform1159.translation = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let Shape1160 = browser.currentScene.createNode("Shape");
Shape1160.USE = "HAnimJointShape";
Transform1159YYY.child = new X3D.undefined();

Transform1159ZZZ.child[0] = Shape1160;

HAnimSegment1157ZZZ.children[1] = Transform1159;

let Shape1161 = browser.currentScene.createNode("Shape");
let LineSet1162 = browser.currentScene.createNode("LineSet");
LineSet1162.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1163 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1163.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1163;

let Coordinate1164 = browser.currentScene.createNode("Coordinate");
Coordinate1164.point = new X3D.MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
coord = Coordinate1164;

geometry = LineSet1162;

HAnimSegment1157ZZZ.children[2] = Shape1161;

HAnimJoint1156YYY.children = new X3D.MFNode();

HAnimJoint1156ZZZ.children[0] = HAnimSegment1157;

let HAnimJoint1165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1165.DEF = "hanim_l_ring1";
HAnimJoint1165.name = "l_ring1";
HAnimJoint1165.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let HAnimSegment1166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1166.DEF = "hanim_l_ring_proximal";
HAnimSegment1166.name = "l_ring_proximal";
let TouchSensor1167 = browser.currentScene.createNode("TouchSensor");
TouchSensor1167.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1166YYY.children = new X3D.MFNode();

HAnimSegment1166ZZZ.children[0] = TouchSensor1167;

let Transform1168 = browser.currentScene.createNode("Transform");
Transform1168.translation = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let Shape1169 = browser.currentScene.createNode("Shape");
Shape1169.USE = "HAnimJointShape";
Transform1168YYY.child = new X3D.undefined();

Transform1168ZZZ.child[0] = Shape1169;

HAnimSegment1166ZZZ.children[1] = Transform1168;

let Shape1170 = browser.currentScene.createNode("Shape");
let LineSet1171 = browser.currentScene.createNode("LineSet");
LineSet1171.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1172 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1172.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1172;

let Coordinate1173 = browser.currentScene.createNode("Coordinate");
Coordinate1173.point = new X3D.MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
coord = Coordinate1173;

geometry = LineSet1171;

HAnimSegment1166ZZZ.children[2] = Shape1170;

HAnimJoint1165YYY.children = new X3D.MFNode();

HAnimJoint1165ZZZ.children[0] = HAnimSegment1166;

let HAnimJoint1174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1174.DEF = "hanim_l_ring2";
HAnimJoint1174.name = "l_ring2";
HAnimJoint1174.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let HAnimSegment1175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1175.DEF = "hanim_l_ring_middle";
HAnimSegment1175.name = "l_ring_middle";
let TouchSensor1176 = browser.currentScene.createNode("TouchSensor");
TouchSensor1176.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1175YYY.children = new X3D.MFNode();

HAnimSegment1175ZZZ.children[0] = TouchSensor1176;

let Transform1177 = browser.currentScene.createNode("Transform");
Transform1177.translation = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let Shape1178 = browser.currentScene.createNode("Shape");
Shape1178.USE = "HAnimJointShape";
Transform1177YYY.child = new X3D.undefined();

Transform1177ZZZ.child[0] = Shape1178;

HAnimSegment1175ZZZ.children[1] = Transform1177;

let Shape1179 = browser.currentScene.createNode("Shape");
let LineSet1180 = browser.currentScene.createNode("LineSet");
LineSet1180.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1181 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1181.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1181;

let Coordinate1182 = browser.currentScene.createNode("Coordinate");
Coordinate1182.point = new X3D.MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
coord = Coordinate1182;

geometry = LineSet1180;

HAnimSegment1175ZZZ.children[2] = Shape1179;

HAnimJoint1174YYY.children = new X3D.MFNode();

HAnimJoint1174ZZZ.children[0] = HAnimSegment1175;

let HAnimJoint1183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1183.DEF = "hanim_l_ring3";
HAnimJoint1183.name = "l_ring3";
HAnimJoint1183.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let HAnimSegment1184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1184.DEF = "hanim_l_ring_distal";
HAnimSegment1184.name = "l_ring_distal";
let TouchSensor1185 = browser.currentScene.createNode("TouchSensor");
TouchSensor1185.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1184YYY.children = new X3D.MFNode();

HAnimSegment1184ZZZ.children[0] = TouchSensor1185;

let Transform1186 = browser.currentScene.createNode("Transform");
Transform1186.translation = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let Shape1187 = browser.currentScene.createNode("Shape");
Shape1187.USE = "HAnimJointShape";
Transform1186YYY.child = new X3D.undefined();

Transform1186ZZZ.child[0] = Shape1187;

HAnimSegment1184ZZZ.children[1] = Transform1186;

let Shape1188 = browser.currentScene.createNode("Shape");
let LineSet1189 = browser.currentScene.createNode("LineSet");
LineSet1189.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1190 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1190.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1190;

let Coordinate1191 = browser.currentScene.createNode("Coordinate");
Coordinate1191.point = new X3D.MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
coord = Coordinate1191;

geometry = LineSet1189;

HAnimSegment1184ZZZ.children[2] = Shape1188;

let HAnimSite1192 = browser.currentScene.createNode("HAnimSite");
HAnimSite1192.DEF = "hanim_l_ring_distal_tip";
HAnimSite1192.name = "l_ring_distal_tip";
HAnimSite1192.translation = new X3D.SFVec3f([0.2035,0.675,-0.0756]);
let TouchSensor1193 = browser.currentScene.createNode("TouchSensor");
TouchSensor1193.description = "HAnimSite l_ring_distal_tip";
HAnimSite1192YYY.children = new X3D.MFNode();

HAnimSite1192ZZZ.children[0] = TouchSensor1193;

let Shape1194 = browser.currentScene.createNode("Shape");
Shape1194.USE = "HAnimSiteShape";
HAnimSite1192ZZZ.children[1] = Shape1194;

HAnimSegment1184ZZZ.children[3] = HAnimSite1192;

HAnimJoint1183YYY.children = new X3D.MFNode();

HAnimJoint1183ZZZ.children[0] = HAnimSegment1184;

HAnimJoint1174ZZZ.children[1] = HAnimJoint1183;

HAnimJoint1165ZZZ.children[1] = HAnimJoint1174;

HAnimJoint1156ZZZ.children[1] = HAnimJoint1165;

HAnimJoint983ZZZ.children[4] = HAnimJoint1156;

let HAnimJoint1195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1195.DEF = "hanim_l_pinky0";
HAnimJoint1195.name = "l_pinky0";
HAnimJoint1195.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let HAnimSegment1196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1196.DEF = "hanim_l_pinky_metacarpal";
HAnimSegment1196.name = "l_pinky_metacarpal";
let TouchSensor1197 = browser.currentScene.createNode("TouchSensor");
TouchSensor1197.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1196YYY.children = new X3D.MFNode();

HAnimSegment1196ZZZ.children[0] = TouchSensor1197;

let Transform1198 = browser.currentScene.createNode("Transform");
Transform1198.translation = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let Shape1199 = browser.currentScene.createNode("Shape");
Shape1199.USE = "HAnimJointShape";
Transform1198YYY.child = new X3D.undefined();

Transform1198ZZZ.child[0] = Shape1199;

HAnimSegment1196ZZZ.children[1] = Transform1198;

let Shape1200 = browser.currentScene.createNode("Shape");
let LineSet1201 = browser.currentScene.createNode("LineSet");
LineSet1201.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1202 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1202.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1202;

let Coordinate1203 = browser.currentScene.createNode("Coordinate");
Coordinate1203.point = new X3D.MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
coord = Coordinate1203;

geometry = LineSet1201;

HAnimSegment1196ZZZ.children[2] = Shape1200;

HAnimJoint1195YYY.children = new X3D.MFNode();

HAnimJoint1195ZZZ.children[0] = HAnimSegment1196;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.DEF = "hanim_l_pinky1";
HAnimJoint1204.name = "l_pinky1";
HAnimJoint1204.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let HAnimSegment1205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1205.DEF = "hanim_l_pinky_proximal";
HAnimSegment1205.name = "l_pinky_proximal";
let TouchSensor1206 = browser.currentScene.createNode("TouchSensor");
TouchSensor1206.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1205YYY.children = new X3D.MFNode();

HAnimSegment1205ZZZ.children[0] = TouchSensor1206;

let Transform1207 = browser.currentScene.createNode("Transform");
Transform1207.translation = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let Shape1208 = browser.currentScene.createNode("Shape");
Shape1208.USE = "HAnimJointShape";
Transform1207YYY.child = new X3D.undefined();

Transform1207ZZZ.child[0] = Shape1208;

HAnimSegment1205ZZZ.children[1] = Transform1207;

let Shape1209 = browser.currentScene.createNode("Shape");
let LineSet1210 = browser.currentScene.createNode("LineSet");
LineSet1210.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1211 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1211.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1211;

let Coordinate1212 = browser.currentScene.createNode("Coordinate");
Coordinate1212.point = new X3D.MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
coord = Coordinate1212;

geometry = LineSet1210;

HAnimSegment1205ZZZ.children[2] = Shape1209;

HAnimJoint1204YYY.children = new X3D.MFNode();

HAnimJoint1204ZZZ.children[0] = HAnimSegment1205;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.DEF = "hanim_l_pinky2";
HAnimJoint1213.name = "l_pinky2";
HAnimJoint1213.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let HAnimSegment1214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1214.DEF = "hanim_l_pinky_middle";
HAnimSegment1214.name = "l_pinky_middle";
let TouchSensor1215 = browser.currentScene.createNode("TouchSensor");
TouchSensor1215.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1214YYY.children = new X3D.MFNode();

HAnimSegment1214ZZZ.children[0] = TouchSensor1215;

let Transform1216 = browser.currentScene.createNode("Transform");
Transform1216.translation = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let Shape1217 = browser.currentScene.createNode("Shape");
Shape1217.USE = "HAnimJointShape";
Transform1216YYY.child = new X3D.undefined();

Transform1216ZZZ.child[0] = Shape1217;

HAnimSegment1214ZZZ.children[1] = Transform1216;

let Shape1218 = browser.currentScene.createNode("Shape");
let LineSet1219 = browser.currentScene.createNode("LineSet");
LineSet1219.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1220 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1220.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1220;

let Coordinate1221 = browser.currentScene.createNode("Coordinate");
Coordinate1221.point = new X3D.MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
coord = Coordinate1221;

geometry = LineSet1219;

HAnimSegment1214ZZZ.children[2] = Shape1218;

HAnimJoint1213YYY.children = new X3D.MFNode();

HAnimJoint1213ZZZ.children[0] = HAnimSegment1214;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.DEF = "hanim_l_pinky3";
HAnimJoint1222.name = "l_pinky3";
HAnimJoint1222.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let HAnimSegment1223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1223.DEF = "hanim_l_pinky_distal";
HAnimSegment1223.name = "l_pinky_distal";
let TouchSensor1224 = browser.currentScene.createNode("TouchSensor");
TouchSensor1224.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1223YYY.children = new X3D.MFNode();

HAnimSegment1223ZZZ.children[0] = TouchSensor1224;

let Transform1225 = browser.currentScene.createNode("Transform");
Transform1225.translation = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let Shape1226 = browser.currentScene.createNode("Shape");
Shape1226.USE = "HAnimJointShape";
Transform1225YYY.child = new X3D.undefined();

Transform1225ZZZ.child[0] = Shape1226;

HAnimSegment1223ZZZ.children[1] = Transform1225;

let Shape1227 = browser.currentScene.createNode("Shape");
let LineSet1228 = browser.currentScene.createNode("LineSet");
LineSet1228.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1229 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1229.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1229;

let Coordinate1230 = browser.currentScene.createNode("Coordinate");
Coordinate1230.point = new X3D.MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
coord = Coordinate1230;

geometry = LineSet1228;

HAnimSegment1223ZZZ.children[2] = Shape1227;

let HAnimSite1231 = browser.currentScene.createNode("HAnimSite");
HAnimSite1231.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1231.name = "l_pinky_distal_tip";
HAnimSite1231.translation = new X3D.SFVec3f([0.2014,0.7009,-0.1012]);
let TouchSensor1232 = browser.currentScene.createNode("TouchSensor");
TouchSensor1232.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1231YYY.children = new X3D.MFNode();

HAnimSite1231ZZZ.children[0] = TouchSensor1232;

let Shape1233 = browser.currentScene.createNode("Shape");
Shape1233.USE = "HAnimSiteShape";
HAnimSite1231ZZZ.children[1] = Shape1233;

HAnimSegment1223ZZZ.children[3] = HAnimSite1231;

HAnimJoint1222YYY.children = new X3D.MFNode();

HAnimJoint1222ZZZ.children[0] = HAnimSegment1223;

HAnimJoint1213ZZZ.children[1] = HAnimJoint1222;

HAnimJoint1204ZZZ.children[1] = HAnimJoint1213;

HAnimJoint1195ZZZ.children[1] = HAnimJoint1204;

HAnimJoint983ZZZ.children[5] = HAnimJoint1195;

HAnimJoint946ZZZ.children[1] = HAnimJoint983;

HAnimJoint930ZZZ.children[1] = HAnimJoint946;

HAnimJoint921ZZZ.children[1] = HAnimJoint930;

HAnimJoint884ZZZ.children[1] = HAnimJoint921;

HAnimJoint596ZZZ.children[2] = HAnimJoint884;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.DEF = "hanim_r_sternoclavicular";
HAnimJoint1234.name = "r_sternoclavicular";
HAnimJoint1234.center = new X3D.SFVec3f([-0.082,1.4488,-0.0353]);
let HAnimSegment1235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1235.DEF = "hanim_r_clavicle";
HAnimSegment1235.name = "r_clavicle";
let TouchSensor1236 = browser.currentScene.createNode("TouchSensor");
TouchSensor1236.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1235YYY.children = new X3D.MFNode();

HAnimSegment1235ZZZ.children[0] = TouchSensor1236;

let Transform1237 = browser.currentScene.createNode("Transform");
Transform1237.translation = new X3D.SFVec3f([-0.082,1.4488,-0.0353]);
let Shape1238 = browser.currentScene.createNode("Shape");
Shape1238.USE = "HAnimJointShape";
Transform1237YYY.child = new X3D.undefined();

Transform1237ZZZ.child[0] = Shape1238;

HAnimSegment1235ZZZ.children[1] = Transform1237;

let Shape1239 = browser.currentScene.createNode("Shape");
let LineSet1240 = browser.currentScene.createNode("LineSet");
LineSet1240.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1241 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1241.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1241;

let Coordinate1242 = browser.currentScene.createNode("Coordinate");
Coordinate1242.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
coord = Coordinate1242;

geometry = LineSet1240;

HAnimSegment1235ZZZ.children[2] = Shape1239;

let Shape1243 = browser.currentScene.createNode("Shape");
let LineSet1244 = browser.currentScene.createNode("LineSet");
LineSet1244.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1245 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1245.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1245;

let Coordinate1246 = browser.currentScene.createNode("Coordinate");
Coordinate1246.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
coord = Coordinate1246;

geometry = LineSet1244;

HAnimSegment1235ZZZ.children[3] = Shape1243;

let Shape1247 = browser.currentScene.createNode("Shape");
let LineSet1248 = browser.currentScene.createNode("LineSet");
LineSet1248.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1249 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1249.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1249;

let Coordinate1250 = browser.currentScene.createNode("Coordinate");
Coordinate1250.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
coord = Coordinate1250;

geometry = LineSet1248;

HAnimSegment1235ZZZ.children[4] = Shape1247;

let Shape1251 = browser.currentScene.createNode("Shape");
let LineSet1252 = browser.currentScene.createNode("LineSet");
LineSet1252.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1253 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1253.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1253;

let Coordinate1254 = browser.currentScene.createNode("Coordinate");
Coordinate1254.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
coord = Coordinate1254;

geometry = LineSet1252;

HAnimSegment1235ZZZ.children[5] = Shape1251;

let Shape1255 = browser.currentScene.createNode("Shape");
let LineSet1256 = browser.currentScene.createNode("LineSet");
LineSet1256.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1257 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1257.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1257;

let Coordinate1258 = browser.currentScene.createNode("Coordinate");
Coordinate1258.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
coord = Coordinate1258;

geometry = LineSet1256;

HAnimSegment1235ZZZ.children[6] = Shape1255;

let HAnimSite1259 = browser.currentScene.createNode("HAnimSite");
HAnimSite1259.DEF = "hanim_r_clavicale_pt";
HAnimSite1259.name = "r_clavicale_pt";
HAnimSite1259.translation = new X3D.SFVec3f([-0.0115,1.4943,0.04]);
let TouchSensor1260 = browser.currentScene.createNode("TouchSensor");
TouchSensor1260.description = "HAnimSite r_clavicale";
HAnimSite1259YYY.children = new X3D.MFNode();

HAnimSite1259ZZZ.children[0] = TouchSensor1260;

let Shape1261 = browser.currentScene.createNode("Shape");
Shape1261.USE = "HAnimSiteShape";
HAnimSite1259ZZZ.children[1] = Shape1261;

HAnimSegment1235ZZZ.children[7] = HAnimSite1259;

let HAnimSite1262 = browser.currentScene.createNode("HAnimSite");
HAnimSite1262.DEF = "hanim_r_acromion_pt";
HAnimSite1262.name = "r_acromion_pt";
HAnimSite1262.translation = new X3D.SFVec3f([-0.1905,1.4791,-0.0431]);
let TouchSensor1263 = browser.currentScene.createNode("TouchSensor");
TouchSensor1263.description = "HAnimSite r_acromion";
HAnimSite1262YYY.children = new X3D.MFNode();

HAnimSite1262ZZZ.children[0] = TouchSensor1263;

let Shape1264 = browser.currentScene.createNode("Shape");
Shape1264.USE = "HAnimSiteShape";
HAnimSite1262ZZZ.children[1] = Shape1264;

HAnimSegment1235ZZZ.children[8] = HAnimSite1262;

let HAnimSite1265 = browser.currentScene.createNode("HAnimSite");
HAnimSite1265.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1265.name = "r_axilla_ant_pt";
HAnimSite1265.translation = new X3D.SFVec3f([-0.1626,1.4072,-0.0031]);
let TouchSensor1266 = browser.currentScene.createNode("TouchSensor");
TouchSensor1266.description = "HAnimSite r_axilla_ant";
HAnimSite1265YYY.children = new X3D.MFNode();

HAnimSite1265ZZZ.children[0] = TouchSensor1266;

let Shape1267 = browser.currentScene.createNode("Shape");
Shape1267.USE = "HAnimSiteShape";
HAnimSite1265ZZZ.children[1] = Shape1267;

HAnimSegment1235ZZZ.children[9] = HAnimSite1265;

let HAnimSite1268 = browser.currentScene.createNode("HAnimSite");
HAnimSite1268.DEF = "hanim_r_axilla_post_pt";
HAnimSite1268.name = "r_axilla_post_pt";
HAnimSite1268.translation = new X3D.SFVec3f([-0.1603,1.4098,-0.0826]);
let TouchSensor1269 = browser.currentScene.createNode("TouchSensor");
TouchSensor1269.description = "HAnimSite r_axilla_post";
HAnimSite1268YYY.children = new X3D.MFNode();

HAnimSite1268ZZZ.children[0] = TouchSensor1269;

let Shape1270 = browser.currentScene.createNode("Shape");
Shape1270.USE = "HAnimSiteShape";
HAnimSite1268ZZZ.children[1] = Shape1270;

HAnimSegment1235ZZZ.children[10] = HAnimSite1268;

HAnimJoint1234YYY.children = new X3D.MFNode();

HAnimJoint1234ZZZ.children[0] = HAnimSegment1235;

let HAnimJoint1271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1271.DEF = "hanim_r_acromioclavicular";
HAnimJoint1271.name = "r_acromioclavicular";
HAnimJoint1271.center = new X3D.SFVec3f([-0.0962,1.4269,-0.0424]);
let HAnimSegment1272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1272.DEF = "hanim_r_scapula";
HAnimSegment1272.name = "r_scapula";
let TouchSensor1273 = browser.currentScene.createNode("TouchSensor");
TouchSensor1273.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1272YYY.children = new X3D.MFNode();

HAnimSegment1272ZZZ.children[0] = TouchSensor1273;

let Transform1274 = browser.currentScene.createNode("Transform");
Transform1274.translation = new X3D.SFVec3f([-0.0962,1.4269,-0.0424]);
let Shape1275 = browser.currentScene.createNode("Shape");
Shape1275.USE = "HAnimJointShape";
Transform1274YYY.child = new X3D.undefined();

Transform1274ZZZ.child[0] = Shape1275;

HAnimSegment1272ZZZ.children[1] = Transform1274;

let Shape1276 = browser.currentScene.createNode("Shape");
let LineSet1277 = browser.currentScene.createNode("LineSet");
LineSet1277.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1278 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1278.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1278;

let Coordinate1279 = browser.currentScene.createNode("Coordinate");
Coordinate1279.point = new X3D.MFVec3f([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
coord = Coordinate1279;

geometry = LineSet1277;

HAnimSegment1272ZZZ.children[2] = Shape1276;

HAnimJoint1271YYY.children = new X3D.MFNode();

HAnimJoint1271ZZZ.children[0] = HAnimSegment1272;

let HAnimJoint1280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1280.DEF = "hanim_r_shoulder";
HAnimJoint1280.name = "r_shoulder";
HAnimJoint1280.center = new X3D.SFVec3f([-0.2029,1.4376,-0.0387]);
let HAnimSegment1281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1281.DEF = "hanim_r_upperarm";
HAnimSegment1281.name = "r_upperarm";
let TouchSensor1282 = browser.currentScene.createNode("TouchSensor");
TouchSensor1282.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1281YYY.children = new X3D.MFNode();

HAnimSegment1281ZZZ.children[0] = TouchSensor1282;

let Transform1283 = browser.currentScene.createNode("Transform");
Transform1283.translation = new X3D.SFVec3f([-0.2029,1.4376,-0.0387]);
let Shape1284 = browser.currentScene.createNode("Shape");
Shape1284.USE = "HAnimJointShape";
Transform1283YYY.child = new X3D.undefined();

Transform1283ZZZ.child[0] = Shape1284;

HAnimSegment1281ZZZ.children[1] = Transform1283;

let Shape1285 = browser.currentScene.createNode("Shape");
let LineSet1286 = browser.currentScene.createNode("LineSet");
LineSet1286.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1287 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1287.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1287;

let Coordinate1288 = browser.currentScene.createNode("Coordinate");
Coordinate1288.point = new X3D.MFVec3f([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
coord = Coordinate1288;

geometry = LineSet1286;

HAnimSegment1281ZZZ.children[2] = Shape1285;

let Shape1289 = browser.currentScene.createNode("Shape");
let LineSet1290 = browser.currentScene.createNode("LineSet");
LineSet1290.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1291 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1291.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1291;

let Coordinate1292 = browser.currentScene.createNode("Coordinate");
Coordinate1292.point = new X3D.MFVec3f([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
coord = Coordinate1292;

geometry = LineSet1290;

HAnimSegment1281ZZZ.children[3] = Shape1289;

let HAnimSite1293 = browser.currentScene.createNode("HAnimSite");
HAnimSite1293.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1293.name = "r_humeral_lateral_epicn_pt";
HAnimSite1293.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
let TouchSensor1294 = browser.currentScene.createNode("TouchSensor");
TouchSensor1294.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1293YYY.children = new X3D.MFNode();

HAnimSite1293ZZZ.children[0] = TouchSensor1294;

let Shape1295 = browser.currentScene.createNode("Shape");
Shape1295.USE = "HAnimSiteShape";
HAnimSite1293ZZZ.children[1] = Shape1295;

HAnimSegment1281ZZZ.children[4] = HAnimSite1293;

HAnimJoint1280YYY.children = new X3D.MFNode();

HAnimJoint1280ZZZ.children[0] = HAnimSegment1281;

let HAnimJoint1296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1296.DEF = "hanim_r_elbow";
HAnimJoint1296.name = "r_elbow";
HAnimJoint1296.center = new X3D.SFVec3f([-0.2014,1.1357,-0.0682]);
let HAnimSegment1297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1297.DEF = "hanim_r_forearm";
HAnimSegment1297.name = "r_forearm";
let TouchSensor1298 = browser.currentScene.createNode("TouchSensor");
TouchSensor1298.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1297YYY.children = new X3D.MFNode();

HAnimSegment1297ZZZ.children[0] = TouchSensor1298;

let Transform1299 = browser.currentScene.createNode("Transform");
Transform1299.translation = new X3D.SFVec3f([-0.2014,1.1357,-0.0682]);
let Shape1300 = browser.currentScene.createNode("Shape");
Shape1300.USE = "HAnimJointShape";
Transform1299YYY.child = new X3D.undefined();

Transform1299ZZZ.child[0] = Shape1300;

HAnimSegment1297ZZZ.children[1] = Transform1299;

let Shape1301 = browser.currentScene.createNode("Shape");
let LineSet1302 = browser.currentScene.createNode("LineSet");
LineSet1302.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1303 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1303.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1303;

let Coordinate1304 = browser.currentScene.createNode("Coordinate");
Coordinate1304.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
coord = Coordinate1304;

geometry = LineSet1302;

HAnimSegment1297ZZZ.children[2] = Shape1301;

let Shape1305 = browser.currentScene.createNode("Shape");
let LineSet1306 = browser.currentScene.createNode("LineSet");
LineSet1306.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1307 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1307.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1307;

let Coordinate1308 = browser.currentScene.createNode("Coordinate");
Coordinate1308.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
coord = Coordinate1308;

geometry = LineSet1306;

HAnimSegment1297ZZZ.children[3] = Shape1305;

let Shape1309 = browser.currentScene.createNode("Shape");
let LineSet1310 = browser.currentScene.createNode("LineSet");
LineSet1310.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1311 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1311;

let Coordinate1312 = browser.currentScene.createNode("Coordinate");
Coordinate1312.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
coord = Coordinate1312;

geometry = LineSet1310;

HAnimSegment1297ZZZ.children[4] = Shape1309;

let Shape1313 = browser.currentScene.createNode("Shape");
let LineSet1314 = browser.currentScene.createNode("LineSet");
LineSet1314.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1315 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1315.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1315;

let Coordinate1316 = browser.currentScene.createNode("Coordinate");
Coordinate1316.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
coord = Coordinate1316;

geometry = LineSet1314;

HAnimSegment1297ZZZ.children[5] = Shape1313;

let Shape1317 = browser.currentScene.createNode("Shape");
let LineSet1318 = browser.currentScene.createNode("LineSet");
LineSet1318.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1319 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1319.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1319;

let Coordinate1320 = browser.currentScene.createNode("Coordinate");
Coordinate1320.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
coord = Coordinate1320;

geometry = LineSet1318;

HAnimSegment1297ZZZ.children[6] = Shape1317;

let HAnimSite1321 = browser.currentScene.createNode("HAnimSite");
HAnimSite1321.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1321.name = "r_radial_styloid_pt";
HAnimSite1321.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
let TouchSensor1322 = browser.currentScene.createNode("TouchSensor");
TouchSensor1322.description = "HAnimSite r_radial_styloid";
HAnimSite1321YYY.children = new X3D.MFNode();

HAnimSite1321ZZZ.children[0] = TouchSensor1322;

let Shape1323 = browser.currentScene.createNode("Shape");
Shape1323.USE = "HAnimSiteShape";
HAnimSite1321ZZZ.children[1] = Shape1323;

HAnimSegment1297ZZZ.children[7] = HAnimSite1321;

let HAnimSite1324 = browser.currentScene.createNode("HAnimSite");
HAnimSite1324.DEF = "hanim_r_olecranon_pt";
HAnimSite1324.name = "r_olecranon_pt";
HAnimSite1324.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
let TouchSensor1325 = browser.currentScene.createNode("TouchSensor");
TouchSensor1325.description = "HAnimSite r_olecranon";
HAnimSite1324YYY.children = new X3D.MFNode();

HAnimSite1324ZZZ.children[0] = TouchSensor1325;

let Shape1326 = browser.currentScene.createNode("Shape");
Shape1326.USE = "HAnimSiteShape";
HAnimSite1324ZZZ.children[1] = Shape1326;

HAnimSegment1297ZZZ.children[8] = HAnimSite1324;

let HAnimSite1327 = browser.currentScene.createNode("HAnimSite");
HAnimSite1327.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1327.name = "r_humeral_medial_epicn_pt";
HAnimSite1327.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
let TouchSensor1328 = browser.currentScene.createNode("TouchSensor");
TouchSensor1328.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1327YYY.children = new X3D.MFNode();

HAnimSite1327ZZZ.children[0] = TouchSensor1328;

let Shape1329 = browser.currentScene.createNode("Shape");
Shape1329.USE = "HAnimSiteShape";
HAnimSite1327ZZZ.children[1] = Shape1329;

HAnimSegment1297ZZZ.children[9] = HAnimSite1327;

let HAnimSite1330 = browser.currentScene.createNode("HAnimSite");
HAnimSite1330.DEF = "hanim_r_radiale_pt";
HAnimSite1330.name = "r_radiale_pt";
HAnimSite1330.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
let TouchSensor1331 = browser.currentScene.createNode("TouchSensor");
TouchSensor1331.description = "HAnimSite r_radiale";
HAnimSite1330YYY.children = new X3D.MFNode();

HAnimSite1330ZZZ.children[0] = TouchSensor1331;

let Shape1332 = browser.currentScene.createNode("Shape");
Shape1332.USE = "HAnimSiteShape";
HAnimSite1330ZZZ.children[1] = Shape1332;

HAnimSegment1297ZZZ.children[10] = HAnimSite1330;

HAnimJoint1296YYY.children = new X3D.MFNode();

HAnimJoint1296ZZZ.children[0] = HAnimSegment1297;

let HAnimJoint1333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1333.DEF = "hanim_r_wrist";
HAnimJoint1333.name = "r_wrist";
HAnimJoint1333.center = new X3D.SFVec3f([-0.1984,0.8663,-0.0583]);
let HAnimSegment1334 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1334.DEF = "hanim_r_hand";
HAnimSegment1334.name = "r_hand";
let TouchSensor1335 = browser.currentScene.createNode("TouchSensor");
TouchSensor1335.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1334YYY.children = new X3D.MFNode();

HAnimSegment1334ZZZ.children[0] = TouchSensor1335;

let Transform1336 = browser.currentScene.createNode("Transform");
Transform1336.translation = new X3D.SFVec3f([-0.1984,0.8663,-0.0583]);
let Shape1337 = browser.currentScene.createNode("Shape");
Shape1337.USE = "HAnimJointShape";
Transform1336YYY.child = new X3D.undefined();

Transform1336ZZZ.child[0] = Shape1337;

HAnimSegment1334ZZZ.children[1] = Transform1336;

let Shape1338 = browser.currentScene.createNode("Shape");
let LineSet1339 = browser.currentScene.createNode("LineSet");
LineSet1339.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1340 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1340.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1340;

let Coordinate1341 = browser.currentScene.createNode("Coordinate");
Coordinate1341.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
coord = Coordinate1341;

geometry = LineSet1339;

HAnimSegment1334ZZZ.children[2] = Shape1338;

let Shape1342 = browser.currentScene.createNode("Shape");
let LineSet1343 = browser.currentScene.createNode("LineSet");
LineSet1343.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1344 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1344.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1344;

let Coordinate1345 = browser.currentScene.createNode("Coordinate");
Coordinate1345.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
coord = Coordinate1345;

geometry = LineSet1343;

HAnimSegment1334ZZZ.children[3] = Shape1342;

let Shape1346 = browser.currentScene.createNode("Shape");
let LineSet1347 = browser.currentScene.createNode("LineSet");
LineSet1347.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1348 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1348;

let Coordinate1349 = browser.currentScene.createNode("Coordinate");
Coordinate1349.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
coord = Coordinate1349;

geometry = LineSet1347;

HAnimSegment1334ZZZ.children[4] = Shape1346;

let Shape1350 = browser.currentScene.createNode("Shape");
let LineSet1351 = browser.currentScene.createNode("LineSet");
LineSet1351.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1352 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1352.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1352;

let Coordinate1353 = browser.currentScene.createNode("Coordinate");
Coordinate1353.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
coord = Coordinate1353;

geometry = LineSet1351;

HAnimSegment1334ZZZ.children[5] = Shape1350;

let Shape1354 = browser.currentScene.createNode("Shape");
let LineSet1355 = browser.currentScene.createNode("LineSet");
LineSet1355.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1356 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1356.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1356;

let Coordinate1357 = browser.currentScene.createNode("Coordinate");
Coordinate1357.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
coord = Coordinate1357;

geometry = LineSet1355;

HAnimSegment1334ZZZ.children[6] = Shape1354;

let Shape1358 = browser.currentScene.createNode("Shape");
let LineSet1359 = browser.currentScene.createNode("LineSet");
LineSet1359.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1360 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1360.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1360;

let Coordinate1361 = browser.currentScene.createNode("Coordinate");
Coordinate1361.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
coord = Coordinate1361;

geometry = LineSet1359;

HAnimSegment1334ZZZ.children[7] = Shape1358;

let Shape1362 = browser.currentScene.createNode("Shape");
let LineSet1363 = browser.currentScene.createNode("LineSet");
LineSet1363.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1364 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1364.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1364;

let Coordinate1365 = browser.currentScene.createNode("Coordinate");
Coordinate1365.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
coord = Coordinate1365;

geometry = LineSet1363;

HAnimSegment1334ZZZ.children[8] = Shape1362;

let Shape1366 = browser.currentScene.createNode("Shape");
let LineSet1367 = browser.currentScene.createNode("LineSet");
LineSet1367.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1368 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1368.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1368;

let Coordinate1369 = browser.currentScene.createNode("Coordinate");
Coordinate1369.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
coord = Coordinate1369;

geometry = LineSet1367;

HAnimSegment1334ZZZ.children[9] = Shape1366;

let Shape1370 = browser.currentScene.createNode("Shape");
let LineSet1371 = browser.currentScene.createNode("LineSet");
LineSet1371.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1372 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1372.USE = "HAnimSiteViewpointLineColorRGBA";
color = ColorRGBA1372;

let Coordinate1373 = browser.currentScene.createNode("Coordinate");
Coordinate1373.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
coord = Coordinate1373;

geometry = LineSet1371;

HAnimSegment1334ZZZ.children[10] = Shape1370;

let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1374.name = "r_metacarpal_pha2_pt";
HAnimSite1374.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
let TouchSensor1375 = browser.currentScene.createNode("TouchSensor");
TouchSensor1375.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1374YYY.children = new X3D.MFNode();

HAnimSite1374ZZZ.children[0] = TouchSensor1375;

let Shape1376 = browser.currentScene.createNode("Shape");
Shape1376.USE = "HAnimSiteShape";
HAnimSite1374ZZZ.children[1] = Shape1376;

HAnimSegment1334ZZZ.children[11] = HAnimSite1374;

let HAnimSite1377 = browser.currentScene.createNode("HAnimSite");
HAnimSite1377.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1377.name = "r_ulnar_styloid_pt";
HAnimSite1377.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
let TouchSensor1378 = browser.currentScene.createNode("TouchSensor");
TouchSensor1378.description = "HAnimSite r_ulnar_styloid";
HAnimSite1377YYY.children = new X3D.MFNode();

HAnimSite1377ZZZ.children[0] = TouchSensor1378;

let Shape1379 = browser.currentScene.createNode("Shape");
Shape1379.USE = "HAnimSiteShape";
HAnimSite1377ZZZ.children[1] = Shape1379;

HAnimSegment1334ZZZ.children[12] = HAnimSite1377;

let HAnimSite1380 = browser.currentScene.createNode("HAnimSite");
HAnimSite1380.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1380.name = "r_metacarpal_pha5_pt";
HAnimSite1380.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
let TouchSensor1381 = browser.currentScene.createNode("TouchSensor");
TouchSensor1381.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1380YYY.children = new X3D.MFNode();

HAnimSite1380ZZZ.children[0] = TouchSensor1381;

let Shape1382 = browser.currentScene.createNode("Shape");
Shape1382.USE = "HAnimSiteShape";
HAnimSite1380ZZZ.children[1] = Shape1382;

HAnimSegment1334ZZZ.children[13] = HAnimSite1380;

let HAnimSite1383 = browser.currentScene.createNode("HAnimSite");
HAnimSite1383.DEF = "hanim_r_hand_front_view";
HAnimSite1383.name = "r_hand_front_view";
HAnimSite1383.translation = new X3D.SFVec3f([-0.3,0.75,0.45]);
let TouchSensor1384 = browser.currentScene.createNode("TouchSensor");
TouchSensor1384.description = "HAnimSite r_hand_front_view";
HAnimSite1383YYY.children = new X3D.MFNode();

HAnimSite1383ZZZ.children[0] = TouchSensor1384;

let Shape1385 = browser.currentScene.createNode("Shape");
Shape1385.USE = "HAnimSiteShape";
HAnimSite1383ZZZ.children[1] = Shape1385;

let Viewpoint1386 = browser.currentScene.createNode("Viewpoint");
Viewpoint1386.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1386.description = "right hand front";
Viewpoint1386.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1386.centerOfRotation = new X3D.SFVec3f([0,0.7,0]);
HAnimSite1383ZZZ.children[2] = Viewpoint1386;

let Anchor1387 = browser.currentScene.createNode("Anchor");
Anchor1387.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1387.url = new X3D.MFString([new X3D.SFString("#hanim_r_hand_front_viewpoint")]);
let LOD1388 = browser.currentScene.createNode("LOD");
LOD1388.forceTransitions = True;
LOD1388.range = new X3D.MFFloat([0.04]);
let WorldInfo1389 = browser.currentScene.createNode("WorldInfo");
WorldInfo1389.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1388YYY.children = new X3D.MFNode();

LOD1388ZZZ.children[0] = WorldInfo1389;

let Shape1390 = browser.currentScene.createNode("Shape");
Shape1390.USE = "HAnimSiteViewpointShape";
LOD1388ZZZ.children[1] = Shape1390;

Anchor1387YYY.children = new X3D.MFNode();

Anchor1387ZZZ.children[0] = LOD1388;

HAnimSite1383ZZZ.children[3] = Anchor1387;

HAnimSegment1334ZZZ.children[14] = HAnimSite1383;

HAnimJoint1333YYY.children = new X3D.MFNode();

HAnimJoint1333ZZZ.children[0] = HAnimSegment1334;

let HAnimJoint1391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1391.DEF = "hanim_r_thumb1";
HAnimJoint1391.name = "r_thumb1";
HAnimJoint1391.center = new X3D.SFVec3f([-0.1924,0.8472,-0.0534]);
let HAnimSegment1392 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1392.DEF = "hanim_r_thumb_metacarpal";
HAnimSegment1392.name = "r_thumb_metacarpal";
let TouchSensor1393 = browser.currentScene.createNode("TouchSensor");
TouchSensor1393.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1392YYY.children = new X3D.MFNode();

HAnimSegment1392ZZZ.children[0] = TouchSensor1393;

let Transform1394 = browser.currentScene.createNode("Transform");
Transform1394.translation = new X3D.SFVec3f([-0.1924,0.8472,-0.0534]);
let Shape1395 = browser.currentScene.createNode("Shape");
Shape1395.USE = "HAnimJointShape";
Transform1394YYY.child = new X3D.undefined();

Transform1394ZZZ.child[0] = Shape1395;

HAnimSegment1392ZZZ.children[1] = Transform1394;

let Shape1396 = browser.currentScene.createNode("Shape");
let LineSet1397 = browser.currentScene.createNode("LineSet");
LineSet1397.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1398 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1398.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1398;

let Coordinate1399 = browser.currentScene.createNode("Coordinate");
Coordinate1399.point = new X3D.MFVec3f([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
coord = Coordinate1399;

geometry = LineSet1397;

HAnimSegment1392ZZZ.children[2] = Shape1396;

HAnimJoint1391YYY.children = new X3D.MFNode();

HAnimJoint1391ZZZ.children[0] = HAnimSegment1392;

let HAnimJoint1400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1400.DEF = "hanim_r_thumb2";
HAnimJoint1400.name = "r_thumb2";
HAnimJoint1400.center = new X3D.SFVec3f([-0.1951,0.8226,0.0246]);
let HAnimSegment1401 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1401.DEF = "hanim_r_thumb_proximal";
HAnimSegment1401.name = "r_thumb_proximal";
let TouchSensor1402 = browser.currentScene.createNode("TouchSensor");
TouchSensor1402.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1401YYY.children = new X3D.MFNode();

HAnimSegment1401ZZZ.children[0] = TouchSensor1402;

let Transform1403 = browser.currentScene.createNode("Transform");
Transform1403.translation = new X3D.SFVec3f([-0.1951,0.8226,0.0246]);
let Shape1404 = browser.currentScene.createNode("Shape");
Shape1404.USE = "HAnimJointShape";
Transform1403YYY.child = new X3D.undefined();

Transform1403ZZZ.child[0] = Shape1404;

HAnimSegment1401ZZZ.children[1] = Transform1403;

let Shape1405 = browser.currentScene.createNode("Shape");
let LineSet1406 = browser.currentScene.createNode("LineSet");
LineSet1406.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1407 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1407.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1407;

let Coordinate1408 = browser.currentScene.createNode("Coordinate");
Coordinate1408.point = new X3D.MFVec3f([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
coord = Coordinate1408;

geometry = LineSet1406;

HAnimSegment1401ZZZ.children[2] = Shape1405;

HAnimJoint1400YYY.children = new X3D.MFNode();

HAnimJoint1400ZZZ.children[0] = HAnimSegment1401;

let HAnimJoint1409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1409.DEF = "hanim_r_thumb3";
HAnimJoint1409.name = "r_thumb3";
HAnimJoint1409.center = new X3D.SFVec3f([-0.1955,0.8159,0.0464]);
let HAnimSegment1410 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1410.DEF = "hanim_r_thumb_distal";
HAnimSegment1410.name = "r_thumb_distal";
let TouchSensor1411 = browser.currentScene.createNode("TouchSensor");
TouchSensor1411.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1410YYY.children = new X3D.MFNode();

HAnimSegment1410ZZZ.children[0] = TouchSensor1411;

let Transform1412 = browser.currentScene.createNode("Transform");
Transform1412.translation = new X3D.SFVec3f([-0.1955,0.8159,0.0464]);
let Shape1413 = browser.currentScene.createNode("Shape");
Shape1413.USE = "HAnimJointShape";
Transform1412YYY.child = new X3D.undefined();

Transform1412ZZZ.child[0] = Shape1413;

HAnimSegment1410ZZZ.children[1] = Transform1412;

let Shape1414 = browser.currentScene.createNode("Shape");
let LineSet1415 = browser.currentScene.createNode("LineSet");
LineSet1415.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1416 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1416.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1416;

let Coordinate1417 = browser.currentScene.createNode("Coordinate");
Coordinate1417.point = new X3D.MFVec3f([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
coord = Coordinate1417;

geometry = LineSet1415;

HAnimSegment1410ZZZ.children[2] = Shape1414;

let HAnimSite1418 = browser.currentScene.createNode("HAnimSite");
HAnimSite1418.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1418.name = "r_thumb_distal_tip";
HAnimSite1418.translation = new X3D.SFVec3f([-0.1869,0.809,0.082]);
let TouchSensor1419 = browser.currentScene.createNode("TouchSensor");
TouchSensor1419.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1418YYY.children = new X3D.MFNode();

HAnimSite1418ZZZ.children[0] = TouchSensor1419;

let Shape1420 = browser.currentScene.createNode("Shape");
Shape1420.USE = "HAnimSiteShape";
HAnimSite1418ZZZ.children[1] = Shape1420;

HAnimSegment1410ZZZ.children[3] = HAnimSite1418;

HAnimJoint1409YYY.children = new X3D.MFNode();

HAnimJoint1409ZZZ.children[0] = HAnimSegment1410;

HAnimJoint1400ZZZ.children[1] = HAnimJoint1409;

HAnimJoint1391ZZZ.children[1] = HAnimJoint1400;

HAnimJoint1333ZZZ.children[1] = HAnimJoint1391;

let HAnimJoint1421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1421.DEF = "hanim_r_index0";
HAnimJoint1421.name = "r_index0";
HAnimJoint1421.center = new X3D.SFVec3f([-0.1983,0.8024,-0.028]);
let HAnimSegment1422 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1422.DEF = "hanim_r_index_metacarpal";
HAnimSegment1422.name = "r_index_metacarpal";
let TouchSensor1423 = browser.currentScene.createNode("TouchSensor");
TouchSensor1423.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1422YYY.children = new X3D.MFNode();

HAnimSegment1422ZZZ.children[0] = TouchSensor1423;

let Transform1424 = browser.currentScene.createNode("Transform");
Transform1424.translation = new X3D.SFVec3f([-0.1983,0.8024,-0.028]);
let Shape1425 = browser.currentScene.createNode("Shape");
Shape1425.USE = "HAnimJointShape";
Transform1424YYY.child = new X3D.undefined();

Transform1424ZZZ.child[0] = Shape1425;

HAnimSegment1422ZZZ.children[1] = Transform1424;

let Shape1426 = browser.currentScene.createNode("Shape");
let LineSet1427 = browser.currentScene.createNode("LineSet");
LineSet1427.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1428 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1428.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1428;

let Coordinate1429 = browser.currentScene.createNode("Coordinate");
Coordinate1429.point = new X3D.MFVec3f([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
coord = Coordinate1429;

geometry = LineSet1427;

HAnimSegment1422ZZZ.children[2] = Shape1426;

HAnimJoint1421YYY.children = new X3D.MFNode();

HAnimJoint1421ZZZ.children[0] = HAnimSegment1422;

let HAnimJoint1430 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1430.DEF = "hanim_r_index1";
HAnimJoint1430.name = "r_index1";
HAnimJoint1430.center = new X3D.SFVec3f([-0.1983,0.7815,-0.028]);
let HAnimSegment1431 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1431.DEF = "hanim_r_index_proximal";
HAnimSegment1431.name = "r_index_proximal";
let TouchSensor1432 = browser.currentScene.createNode("TouchSensor");
TouchSensor1432.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1431YYY.children = new X3D.MFNode();

HAnimSegment1431ZZZ.children[0] = TouchSensor1432;

let Transform1433 = browser.currentScene.createNode("Transform");
Transform1433.translation = new X3D.SFVec3f([-0.1983,0.7815,-0.028]);
let Shape1434 = browser.currentScene.createNode("Shape");
Shape1434.USE = "HAnimJointShape";
Transform1433YYY.child = new X3D.undefined();

Transform1433ZZZ.child[0] = Shape1434;

HAnimSegment1431ZZZ.children[1] = Transform1433;

let Shape1435 = browser.currentScene.createNode("Shape");
let LineSet1436 = browser.currentScene.createNode("LineSet");
LineSet1436.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1437 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1437.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1437;

let Coordinate1438 = browser.currentScene.createNode("Coordinate");
Coordinate1438.point = new X3D.MFVec3f([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
coord = Coordinate1438;

geometry = LineSet1436;

HAnimSegment1431ZZZ.children[2] = Shape1435;

HAnimJoint1430YYY.children = new X3D.MFNode();

HAnimJoint1430ZZZ.children[0] = HAnimSegment1431;

let HAnimJoint1439 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1439.DEF = "hanim_r_index2";
HAnimJoint1439.name = "r_index2";
HAnimJoint1439.center = new X3D.SFVec3f([-0.2017,0.7363,-0.0248]);
let HAnimSegment1440 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1440.DEF = "hanim_r_index_middle";
HAnimSegment1440.name = "r_index_middle";
let TouchSensor1441 = browser.currentScene.createNode("TouchSensor");
TouchSensor1441.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1440YYY.children = new X3D.MFNode();

HAnimSegment1440ZZZ.children[0] = TouchSensor1441;

let Transform1442 = browser.currentScene.createNode("Transform");
Transform1442.translation = new X3D.SFVec3f([-0.2017,0.7363,-0.0248]);
let Shape1443 = browser.currentScene.createNode("Shape");
Shape1443.USE = "HAnimJointShape";
Transform1442YYY.child = new X3D.undefined();

Transform1442ZZZ.child[0] = Shape1443;

HAnimSegment1440ZZZ.children[1] = Transform1442;

let Shape1444 = browser.currentScene.createNode("Shape");
let LineSet1445 = browser.currentScene.createNode("LineSet");
LineSet1445.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1446 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1446.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1446;

let Coordinate1447 = browser.currentScene.createNode("Coordinate");
Coordinate1447.point = new X3D.MFVec3f([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
coord = Coordinate1447;

geometry = LineSet1445;

HAnimSegment1440ZZZ.children[2] = Shape1444;

HAnimJoint1439YYY.children = new X3D.MFNode();

HAnimJoint1439ZZZ.children[0] = HAnimSegment1440;

let HAnimJoint1448 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1448.DEF = "hanim_r_index3";
HAnimJoint1448.name = "r_index3";
HAnimJoint1448.center = new X3D.SFVec3f([-0.2028,0.7139,-0.0236]);
let HAnimSegment1449 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1449.DEF = "hanim_r_index_distal";
HAnimSegment1449.name = "r_index_distal";
let TouchSensor1450 = browser.currentScene.createNode("TouchSensor");
TouchSensor1450.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1449YYY.children = new X3D.MFNode();

HAnimSegment1449ZZZ.children[0] = TouchSensor1450;

let Transform1451 = browser.currentScene.createNode("Transform");
Transform1451.translation = new X3D.SFVec3f([-0.2028,0.7139,-0.0236]);
let Shape1452 = browser.currentScene.createNode("Shape");
Shape1452.USE = "HAnimJointShape";
Transform1451YYY.child = new X3D.undefined();

Transform1451ZZZ.child[0] = Shape1452;

HAnimSegment1449ZZZ.children[1] = Transform1451;

let Shape1453 = browser.currentScene.createNode("Shape");
let LineSet1454 = browser.currentScene.createNode("LineSet");
LineSet1454.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1455 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1455.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1455;

let Coordinate1456 = browser.currentScene.createNode("Coordinate");
Coordinate1456.point = new X3D.MFVec3f([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
coord = Coordinate1456;

geometry = LineSet1454;

HAnimSegment1449ZZZ.children[2] = Shape1453;

let Shape1457 = browser.currentScene.createNode("Shape");
let LineSet1458 = browser.currentScene.createNode("LineSet");
LineSet1458.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1459 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1459.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1459;

let Coordinate1460 = browser.currentScene.createNode("Coordinate");
Coordinate1460.point = new X3D.MFVec3f([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
coord = Coordinate1460;

geometry = LineSet1458;

HAnimSegment1449ZZZ.children[3] = Shape1457;

let HAnimSite1461 = browser.currentScene.createNode("HAnimSite");
HAnimSite1461.DEF = "hanim_r_index_distal_tip";
HAnimSite1461.name = "r_index_distal_tip";
HAnimSite1461.translation = new X3D.SFVec3f([-0.198,0.6883,-0.018]);
let TouchSensor1462 = browser.currentScene.createNode("TouchSensor");
TouchSensor1462.description = "HAnimSite r_index_distal_tip";
HAnimSite1461YYY.children = new X3D.MFNode();

HAnimSite1461ZZZ.children[0] = TouchSensor1462;

let Shape1463 = browser.currentScene.createNode("Shape");
Shape1463.USE = "HAnimSiteShape";
HAnimSite1461ZZZ.children[1] = Shape1463;

HAnimSegment1449ZZZ.children[4] = HAnimSite1461;

let HAnimSite1464 = browser.currentScene.createNode("HAnimSite");
HAnimSite1464.DEF = "hanim_r_dactylion_pt";
HAnimSite1464.name = "r_dactylion_pt";
HAnimSite1464.translation = new X3D.SFVec3f([-0.1941,0.6772,-0.0423]);
let TouchSensor1465 = browser.currentScene.createNode("TouchSensor");
TouchSensor1465.description = "HAnimSite r_dactylion";
HAnimSite1464YYY.children = new X3D.MFNode();

HAnimSite1464ZZZ.children[0] = TouchSensor1465;

let Shape1466 = browser.currentScene.createNode("Shape");
Shape1466.USE = "HAnimSiteShape";
HAnimSite1464ZZZ.children[1] = Shape1466;

HAnimSegment1449ZZZ.children[5] = HAnimSite1464;

HAnimJoint1448YYY.children = new X3D.MFNode();

HAnimJoint1448ZZZ.children[0] = HAnimSegment1449;

HAnimJoint1439ZZZ.children[1] = HAnimJoint1448;

HAnimJoint1430ZZZ.children[1] = HAnimJoint1439;

HAnimJoint1421ZZZ.children[1] = HAnimJoint1430;

HAnimJoint1333ZZZ.children[2] = HAnimJoint1421;

let HAnimJoint1467 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1467.DEF = "hanim_r_middle0";
HAnimJoint1467.name = "r_middle0";
HAnimJoint1467.center = new X3D.SFVec3f([-0.1987,0.8029,-0.053]);
let HAnimSegment1468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1468.DEF = "hanim_r_middle_metacarpal";
HAnimSegment1468.name = "r_middle_metacarpal";
let TouchSensor1469 = browser.currentScene.createNode("TouchSensor");
TouchSensor1469.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1468YYY.children = new X3D.MFNode();

HAnimSegment1468ZZZ.children[0] = TouchSensor1469;

let Transform1470 = browser.currentScene.createNode("Transform");
Transform1470.translation = new X3D.SFVec3f([-0.1987,0.8029,-0.053]);
let Shape1471 = browser.currentScene.createNode("Shape");
Shape1471.USE = "HAnimJointShape";
Transform1470YYY.child = new X3D.undefined();

Transform1470ZZZ.child[0] = Shape1471;

HAnimSegment1468ZZZ.children[1] = Transform1470;

let Shape1472 = browser.currentScene.createNode("Shape");
let LineSet1473 = browser.currentScene.createNode("LineSet");
LineSet1473.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1474 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1474.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1474;

let Coordinate1475 = browser.currentScene.createNode("Coordinate");
Coordinate1475.point = new X3D.MFVec3f([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
coord = Coordinate1475;

geometry = LineSet1473;

HAnimSegment1468ZZZ.children[2] = Shape1472;

HAnimJoint1467YYY.children = new X3D.MFNode();

HAnimJoint1467ZZZ.children[0] = HAnimSegment1468;

let HAnimJoint1476 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1476.DEF = "hanim_r_middle1";
HAnimJoint1476.name = "r_middle1";
HAnimJoint1476.center = new X3D.SFVec3f([-0.1987,0.7818,-0.053]);
let HAnimSegment1477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1477.DEF = "hanim_r_middle_proximal";
HAnimSegment1477.name = "r_middle_proximal";
let TouchSensor1478 = browser.currentScene.createNode("TouchSensor");
TouchSensor1478.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1477YYY.children = new X3D.MFNode();

HAnimSegment1477ZZZ.children[0] = TouchSensor1478;

let Transform1479 = browser.currentScene.createNode("Transform");
Transform1479.translation = new X3D.SFVec3f([-0.1987,0.7818,-0.053]);
let Shape1480 = browser.currentScene.createNode("Shape");
Shape1480.USE = "HAnimJointShape";
Transform1479YYY.child = new X3D.undefined();

Transform1479ZZZ.child[0] = Shape1480;

HAnimSegment1477ZZZ.children[1] = Transform1479;

let Shape1481 = browser.currentScene.createNode("Shape");
let LineSet1482 = browser.currentScene.createNode("LineSet");
LineSet1482.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1483 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1483.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1483;

let Coordinate1484 = browser.currentScene.createNode("Coordinate");
Coordinate1484.point = new X3D.MFVec3f([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
coord = Coordinate1484;

geometry = LineSet1482;

HAnimSegment1477ZZZ.children[2] = Shape1481;

HAnimJoint1476YYY.children = new X3D.MFNode();

HAnimJoint1476ZZZ.children[0] = HAnimSegment1477;

let HAnimJoint1485 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1485.DEF = "hanim_r_middle2";
HAnimJoint1485.name = "r_middle2";
HAnimJoint1485.center = new X3D.SFVec3f([-0.2013,0.7273,-0.0503]);
let HAnimSegment1486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1486.DEF = "hanim_r_middle_middle";
HAnimSegment1486.name = "r_middle_middle";
let TouchSensor1487 = browser.currentScene.createNode("TouchSensor");
TouchSensor1487.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1486YYY.children = new X3D.MFNode();

HAnimSegment1486ZZZ.children[0] = TouchSensor1487;

let Transform1488 = browser.currentScene.createNode("Transform");
Transform1488.translation = new X3D.SFVec3f([-0.2013,0.7273,-0.0503]);
let Shape1489 = browser.currentScene.createNode("Shape");
Shape1489.USE = "HAnimJointShape";
Transform1488YYY.child = new X3D.undefined();

Transform1488ZZZ.child[0] = Shape1489;

HAnimSegment1486ZZZ.children[1] = Transform1488;

let Shape1490 = browser.currentScene.createNode("Shape");
let LineSet1491 = browser.currentScene.createNode("LineSet");
LineSet1491.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1492 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1492.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1492;

let Coordinate1493 = browser.currentScene.createNode("Coordinate");
Coordinate1493.point = new X3D.MFVec3f([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
coord = Coordinate1493;

geometry = LineSet1491;

HAnimSegment1486ZZZ.children[2] = Shape1490;

HAnimJoint1485YYY.children = new X3D.MFNode();

HAnimJoint1485ZZZ.children[0] = HAnimSegment1486;

let HAnimJoint1494 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1494.DEF = "hanim_r_middle3";
HAnimJoint1494.name = "r_middle3";
HAnimJoint1494.center = new X3D.SFVec3f([-0.2026,0.7011,-0.0494]);
let HAnimSegment1495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1495.DEF = "hanim_r_middle_distal";
HAnimSegment1495.name = "r_middle_distal";
let TouchSensor1496 = browser.currentScene.createNode("TouchSensor");
TouchSensor1496.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1495YYY.children = new X3D.MFNode();

HAnimSegment1495ZZZ.children[0] = TouchSensor1496;

let Transform1497 = browser.currentScene.createNode("Transform");
Transform1497.translation = new X3D.SFVec3f([-0.2026,0.7011,-0.0494]);
let Shape1498 = browser.currentScene.createNode("Shape");
Shape1498.USE = "HAnimJointShape";
Transform1497YYY.child = new X3D.undefined();

Transform1497ZZZ.child[0] = Shape1498;

HAnimSegment1495ZZZ.children[1] = Transform1497;

let Shape1499 = browser.currentScene.createNode("Shape");
let LineSet1500 = browser.currentScene.createNode("LineSet");
LineSet1500.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1501 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1501.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1501;

let Coordinate1502 = browser.currentScene.createNode("Coordinate");
Coordinate1502.point = new X3D.MFVec3f([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
coord = Coordinate1502;

geometry = LineSet1500;

HAnimSegment1495ZZZ.children[2] = Shape1499;

let HAnimSite1503 = browser.currentScene.createNode("HAnimSite");
HAnimSite1503.DEF = "hanim_r_middle_distal_tip";
HAnimSite1503.name = "r_middle_distal_tip";
HAnimSite1503.translation = new X3D.SFVec3f([-0.1969,0.6758,-0.0427]);
let TouchSensor1504 = browser.currentScene.createNode("TouchSensor");
TouchSensor1504.description = "HAnimSite r_middle_distal_tip";
HAnimSite1503YYY.children = new X3D.MFNode();

HAnimSite1503ZZZ.children[0] = TouchSensor1504;

let Shape1505 = browser.currentScene.createNode("Shape");
Shape1505.USE = "HAnimSiteShape";
HAnimSite1503ZZZ.children[1] = Shape1505;

HAnimSegment1495ZZZ.children[3] = HAnimSite1503;

HAnimJoint1494YYY.children = new X3D.MFNode();

HAnimJoint1494ZZZ.children[0] = HAnimSegment1495;

HAnimJoint1485ZZZ.children[1] = HAnimJoint1494;

HAnimJoint1476ZZZ.children[1] = HAnimJoint1485;

HAnimJoint1467ZZZ.children[1] = HAnimJoint1476;

HAnimJoint1333ZZZ.children[3] = HAnimJoint1467;

let HAnimJoint1506 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1506.DEF = "hanim_r_ring0";
HAnimJoint1506.name = "r_ring0";
HAnimJoint1506.center = new X3D.SFVec3f([-0.1956,0.8019,-0.0794]);
let HAnimSegment1507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1507.DEF = "hanim_r_ring_metacarpal";
HAnimSegment1507.name = "r_ring_metacarpal";
let TouchSensor1508 = browser.currentScene.createNode("TouchSensor");
TouchSensor1508.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1507YYY.children = new X3D.MFNode();

HAnimSegment1507ZZZ.children[0] = TouchSensor1508;

let Transform1509 = browser.currentScene.createNode("Transform");
Transform1509.translation = new X3D.SFVec3f([-0.1956,0.8019,-0.0794]);
let Shape1510 = browser.currentScene.createNode("Shape");
Shape1510.USE = "HAnimJointShape";
Transform1509YYY.child = new X3D.undefined();

Transform1509ZZZ.child[0] = Shape1510;

HAnimSegment1507ZZZ.children[1] = Transform1509;

let Shape1511 = browser.currentScene.createNode("Shape");
let LineSet1512 = browser.currentScene.createNode("LineSet");
LineSet1512.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1513 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1513.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1513;

let Coordinate1514 = browser.currentScene.createNode("Coordinate");
Coordinate1514.point = new X3D.MFVec3f([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
coord = Coordinate1514;

geometry = LineSet1512;

HAnimSegment1507ZZZ.children[2] = Shape1511;

HAnimJoint1506YYY.children = new X3D.MFNode();

HAnimJoint1506ZZZ.children[0] = HAnimSegment1507;

let HAnimJoint1515 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1515.DEF = "hanim_r_ring1";
HAnimJoint1515.name = "r_ring1";
HAnimJoint1515.center = new X3D.SFVec3f([-0.1956,0.7815,-0.0794]);
let HAnimSegment1516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1516.DEF = "hanim_r_ring_proximal";
HAnimSegment1516.name = "r_ring_proximal";
let TouchSensor1517 = browser.currentScene.createNode("TouchSensor");
TouchSensor1517.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1516YYY.children = new X3D.MFNode();

HAnimSegment1516ZZZ.children[0] = TouchSensor1517;

let Transform1518 = browser.currentScene.createNode("Transform");
Transform1518.translation = new X3D.SFVec3f([-0.1956,0.7815,-0.0794]);
let Shape1519 = browser.currentScene.createNode("Shape");
Shape1519.USE = "HAnimJointShape";
Transform1518YYY.child = new X3D.undefined();

Transform1518ZZZ.child[0] = Shape1519;

HAnimSegment1516ZZZ.children[1] = Transform1518;

let Shape1520 = browser.currentScene.createNode("Shape");
let LineSet1521 = browser.currentScene.createNode("LineSet");
LineSet1521.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1522 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1522.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1522;

let Coordinate1523 = browser.currentScene.createNode("Coordinate");
Coordinate1523.point = new X3D.MFVec3f([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
coord = Coordinate1523;

geometry = LineSet1521;

HAnimSegment1516ZZZ.children[2] = Shape1520;

HAnimJoint1515YYY.children = new X3D.MFNode();

HAnimJoint1515ZZZ.children[0] = HAnimSegment1516;

let HAnimJoint1524 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1524.DEF = "hanim_r_ring2";
HAnimJoint1524.name = "r_ring2";
HAnimJoint1524.center = new X3D.SFVec3f([-0.1973,0.7287,-0.0777]);
let HAnimSegment1525 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1525.DEF = "hanim_r_ring_middle";
HAnimSegment1525.name = "r_ring_middle";
let TouchSensor1526 = browser.currentScene.createNode("TouchSensor");
TouchSensor1526.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1525YYY.children = new X3D.MFNode();

HAnimSegment1525ZZZ.children[0] = TouchSensor1526;

let Transform1527 = browser.currentScene.createNode("Transform");
Transform1527.translation = new X3D.SFVec3f([-0.1973,0.7287,-0.0777]);
let Shape1528 = browser.currentScene.createNode("Shape");
Shape1528.USE = "HAnimJointShape";
Transform1527YYY.child = new X3D.undefined();

Transform1527ZZZ.child[0] = Shape1528;

HAnimSegment1525ZZZ.children[1] = Transform1527;

let Shape1529 = browser.currentScene.createNode("Shape");
let LineSet1530 = browser.currentScene.createNode("LineSet");
LineSet1530.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1531 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1531.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1531;

let Coordinate1532 = browser.currentScene.createNode("Coordinate");
Coordinate1532.point = new X3D.MFVec3f([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
coord = Coordinate1532;

geometry = LineSet1530;

HAnimSegment1525ZZZ.children[2] = Shape1529;

HAnimJoint1524YYY.children = new X3D.MFNode();

HAnimJoint1524ZZZ.children[0] = HAnimSegment1525;

let HAnimJoint1533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1533.DEF = "hanim_r_ring3";
HAnimJoint1533.name = "r_ring3";
HAnimJoint1533.center = new X3D.SFVec3f([-0.1983,0.7045,-0.0767]);
let HAnimSegment1534 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1534.DEF = "hanim_r_ring_distal";
HAnimSegment1534.name = "r_ring_distal";
let TouchSensor1535 = browser.currentScene.createNode("TouchSensor");
TouchSensor1535.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1534YYY.children = new X3D.MFNode();

HAnimSegment1534ZZZ.children[0] = TouchSensor1535;

let Transform1536 = browser.currentScene.createNode("Transform");
Transform1536.translation = new X3D.SFVec3f([-0.1983,0.7045,-0.0767]);
let Shape1537 = browser.currentScene.createNode("Shape");
Shape1537.USE = "HAnimJointShape";
Transform1536YYY.child = new X3D.undefined();

Transform1536ZZZ.child[0] = Shape1537;

HAnimSegment1534ZZZ.children[1] = Transform1536;

let Shape1538 = browser.currentScene.createNode("Shape");
let LineSet1539 = browser.currentScene.createNode("LineSet");
LineSet1539.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1540 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1540.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1540;

let Coordinate1541 = browser.currentScene.createNode("Coordinate");
Coordinate1541.point = new X3D.MFVec3f([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
coord = Coordinate1541;

geometry = LineSet1539;

HAnimSegment1534ZZZ.children[2] = Shape1538;

let HAnimSite1542 = browser.currentScene.createNode("HAnimSite");
HAnimSite1542.DEF = "hanim_r_ring_distal_tip";
HAnimSite1542.name = "r_ring_distal_tip";
HAnimSite1542.translation = new X3D.SFVec3f([-0.1934,0.6778,-0.0693]);
let TouchSensor1543 = browser.currentScene.createNode("TouchSensor");
TouchSensor1543.description = "HAnimSite r_ring_distal_tip";
HAnimSite1542YYY.children = new X3D.MFNode();

HAnimSite1542ZZZ.children[0] = TouchSensor1543;

let Shape1544 = browser.currentScene.createNode("Shape");
Shape1544.USE = "HAnimSiteShape";
HAnimSite1542ZZZ.children[1] = Shape1544;

HAnimSegment1534ZZZ.children[3] = HAnimSite1542;

HAnimJoint1533YYY.children = new X3D.MFNode();

HAnimJoint1533ZZZ.children[0] = HAnimSegment1534;

HAnimJoint1524ZZZ.children[1] = HAnimJoint1533;

HAnimJoint1515ZZZ.children[1] = HAnimJoint1524;

HAnimJoint1506ZZZ.children[1] = HAnimJoint1515;

HAnimJoint1333ZZZ.children[4] = HAnimJoint1506;

let HAnimJoint1545 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1545.DEF = "hanim_r_pinky0";
HAnimJoint1545.name = "r_pinky0";
HAnimJoint1545.center = new X3D.SFVec3f([-0.1925,0.8066,-0.1036]);
let HAnimSegment1546 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1546.DEF = "hanim_r_pinky_metacarpal";
HAnimSegment1546.name = "r_pinky_metacarpal";
let TouchSensor1547 = browser.currentScene.createNode("TouchSensor");
TouchSensor1547.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1546YYY.children = new X3D.MFNode();

HAnimSegment1546ZZZ.children[0] = TouchSensor1547;

let Transform1548 = browser.currentScene.createNode("Transform");
Transform1548.translation = new X3D.SFVec3f([-0.1925,0.8066,-0.1036]);
let Shape1549 = browser.currentScene.createNode("Shape");
Shape1549.USE = "HAnimJointShape";
Transform1548YYY.child = new X3D.undefined();

Transform1548ZZZ.child[0] = Shape1549;

HAnimSegment1546ZZZ.children[1] = Transform1548;

let Shape1550 = browser.currentScene.createNode("Shape");
let LineSet1551 = browser.currentScene.createNode("LineSet");
LineSet1551.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1552 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1552.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1552;

let Coordinate1553 = browser.currentScene.createNode("Coordinate");
Coordinate1553.point = new X3D.MFVec3f([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
coord = Coordinate1553;

geometry = LineSet1551;

HAnimSegment1546ZZZ.children[2] = Shape1550;

HAnimJoint1545YYY.children = new X3D.MFNode();

HAnimJoint1545ZZZ.children[0] = HAnimSegment1546;

let HAnimJoint1554 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1554.DEF = "hanim_r_pinky1";
HAnimJoint1554.name = "r_pinky1";
HAnimJoint1554.center = new X3D.SFVec3f([-0.1925,0.7866,-0.1036]);
let HAnimSegment1555 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1555.DEF = "hanim_r_pinky_proximal";
HAnimSegment1555.name = "r_pinky_proximal";
let TouchSensor1556 = browser.currentScene.createNode("TouchSensor");
TouchSensor1556.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1555YYY.children = new X3D.MFNode();

HAnimSegment1555ZZZ.children[0] = TouchSensor1556;

let Transform1557 = browser.currentScene.createNode("Transform");
Transform1557.translation = new X3D.SFVec3f([-0.1925,0.7866,-0.1036]);
let Shape1558 = browser.currentScene.createNode("Shape");
Shape1558.USE = "HAnimJointShape";
Transform1557YYY.child = new X3D.undefined();

Transform1557ZZZ.child[0] = Shape1558;

HAnimSegment1555ZZZ.children[1] = Transform1557;

let Shape1559 = browser.currentScene.createNode("Shape");
let LineSet1560 = browser.currentScene.createNode("LineSet");
LineSet1560.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1561 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1561.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1561;

let Coordinate1562 = browser.currentScene.createNode("Coordinate");
Coordinate1562.point = new X3D.MFVec3f([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
coord = Coordinate1562;

geometry = LineSet1560;

HAnimSegment1555ZZZ.children[2] = Shape1559;

HAnimJoint1554YYY.children = new X3D.MFNode();

HAnimJoint1554ZZZ.children[0] = HAnimSegment1555;

let HAnimJoint1563 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1563.DEF = "hanim_r_pinky2";
HAnimJoint1563.name = "r_pinky2";
HAnimJoint1563.center = new X3D.SFVec3f([-0.1938,0.7452,-0.1024]);
let HAnimSegment1564 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1564.DEF = "hanim_r_pinky_middle";
HAnimSegment1564.name = "r_pinky_middle";
let TouchSensor1565 = browser.currentScene.createNode("TouchSensor");
TouchSensor1565.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1564YYY.children = new X3D.MFNode();

HAnimSegment1564ZZZ.children[0] = TouchSensor1565;

let Transform1566 = browser.currentScene.createNode("Transform");
Transform1566.translation = new X3D.SFVec3f([-0.1938,0.7452,-0.1024]);
let Shape1567 = browser.currentScene.createNode("Shape");
Shape1567.USE = "HAnimJointShape";
Transform1566YYY.child = new X3D.undefined();

Transform1566ZZZ.child[0] = Shape1567;

HAnimSegment1564ZZZ.children[1] = Transform1566;

let Shape1568 = browser.currentScene.createNode("Shape");
let LineSet1569 = browser.currentScene.createNode("LineSet");
LineSet1569.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1570 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1570.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1570;

let Coordinate1571 = browser.currentScene.createNode("Coordinate");
Coordinate1571.point = new X3D.MFVec3f([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
coord = Coordinate1571;

geometry = LineSet1569;

HAnimSegment1564ZZZ.children[2] = Shape1568;

HAnimJoint1563YYY.children = new X3D.MFNode();

HAnimJoint1563ZZZ.children[0] = HAnimSegment1564;

let HAnimJoint1572 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1572.DEF = "hanim_r_pinky3";
HAnimJoint1572.name = "r_pinky3";
HAnimJoint1572.center = new X3D.SFVec3f([-0.1948,0.7277,-0.1017]);
let HAnimSegment1573 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1573.DEF = "hanim_r_pinky_distal";
HAnimSegment1573.name = "r_pinky_distal";
let TouchSensor1574 = browser.currentScene.createNode("TouchSensor");
TouchSensor1574.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1573YYY.children = new X3D.MFNode();

HAnimSegment1573ZZZ.children[0] = TouchSensor1574;

let Transform1575 = browser.currentScene.createNode("Transform");
Transform1575.translation = new X3D.SFVec3f([-0.1948,0.7277,-0.1017]);
let Shape1576 = browser.currentScene.createNode("Shape");
Shape1576.USE = "HAnimJointShape";
Transform1575YYY.child = new X3D.undefined();

Transform1575ZZZ.child[0] = Shape1576;

HAnimSegment1573ZZZ.children[1] = Transform1575;

let Shape1577 = browser.currentScene.createNode("Shape");
let LineSet1578 = browser.currentScene.createNode("LineSet");
LineSet1578.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1579 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1579.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1579;

let Coordinate1580 = browser.currentScene.createNode("Coordinate");
Coordinate1580.point = new X3D.MFVec3f([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
coord = Coordinate1580;

geometry = LineSet1578;

HAnimSegment1573ZZZ.children[2] = Shape1577;

let HAnimSite1581 = browser.currentScene.createNode("HAnimSite");
HAnimSite1581.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1581.name = "r_pinky_distal_tip";
HAnimSite1581.translation = new X3D.SFVec3f([-0.1938,0.7035,-0.0949]);
let TouchSensor1582 = browser.currentScene.createNode("TouchSensor");
TouchSensor1582.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1581YYY.children = new X3D.MFNode();

HAnimSite1581ZZZ.children[0] = TouchSensor1582;

let Shape1583 = browser.currentScene.createNode("Shape");
Shape1583.USE = "HAnimSiteShape";
HAnimSite1581ZZZ.children[1] = Shape1583;

HAnimSegment1573ZZZ.children[3] = HAnimSite1581;

HAnimJoint1572YYY.children = new X3D.MFNode();

HAnimJoint1572ZZZ.children[0] = HAnimSegment1573;

HAnimJoint1563ZZZ.children[1] = HAnimJoint1572;

HAnimJoint1554ZZZ.children[1] = HAnimJoint1563;

HAnimJoint1545ZZZ.children[1] = HAnimJoint1554;

HAnimJoint1333ZZZ.children[5] = HAnimJoint1545;

HAnimJoint1296ZZZ.children[1] = HAnimJoint1333;

HAnimJoint1280ZZZ.children[1] = HAnimJoint1296;

HAnimJoint1271ZZZ.children[1] = HAnimJoint1280;

HAnimJoint1234ZZZ.children[1] = HAnimJoint1271;

HAnimJoint596ZZZ.children[3] = HAnimJoint1234;

HAnimJoint587ZZZ.children[1] = HAnimJoint596;

HAnimJoint578ZZZ.children[1] = HAnimJoint587;

HAnimJoint569ZZZ.children[1] = HAnimJoint578;

HAnimJoint560ZZZ.children[1] = HAnimJoint569;

HAnimJoint551ZZZ.children[1] = HAnimJoint560;

HAnimJoint542ZZZ.children[1] = HAnimJoint551;

HAnimJoint533ZZZ.children[1] = HAnimJoint542;

HAnimJoint510ZZZ.children[1] = HAnimJoint533;

HAnimJoint494ZZZ.children[1] = HAnimJoint510;

HAnimJoint485ZZZ.children[1] = HAnimJoint494;

HAnimJoint476ZZZ.children[1] = HAnimJoint485;

HAnimJoint467ZZZ.children[1] = HAnimJoint476;

HAnimJoint437ZZZ.children[1] = HAnimJoint467;

HAnimJoint428ZZZ.children[1] = HAnimJoint437;

HAnimJoint419ZZZ.children[1] = HAnimJoint428;

HAnimJoint396ZZZ.children[1] = HAnimJoint419;

HAnimJoint46ZZZ.children[2] = HAnimJoint396;

HAnimHumanoid45.joints = new X3D.MFNode();

HAnimHumanoid45XXX.joints[0] = HAnimJoint46;

let HAnimJoint1584 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1584.USE = "hanim_humanoid_root";
joints[1] = HAnimJoint1584;

let HAnimJoint1585 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1585.USE = "hanim_sacroiliac";
joints[2] = HAnimJoint1585;

let HAnimJoint1586 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1586.USE = "hanim_vl5";
joints[3] = HAnimJoint1586;

let HAnimJoint1587 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1587.USE = "hanim_vl4";
joints[4] = HAnimJoint1587;

let HAnimJoint1588 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1588.USE = "hanim_vl3";
joints[5] = HAnimJoint1588;

let HAnimJoint1589 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1589.USE = "hanim_vl2";
joints[6] = HAnimJoint1589;

let HAnimJoint1590 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1590.USE = "hanim_vl1";
joints[7] = HAnimJoint1590;

let HAnimJoint1591 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1591.USE = "hanim_vt12";
joints[8] = HAnimJoint1591;

let HAnimJoint1592 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1592.USE = "hanim_vt11";
joints[9] = HAnimJoint1592;

let HAnimJoint1593 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1593.USE = "hanim_vt10";
joints[10] = HAnimJoint1593;

let HAnimJoint1594 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1594.USE = "hanim_vt9";
joints[11] = HAnimJoint1594;

let HAnimJoint1595 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1595.USE = "hanim_vt8";
joints[12] = HAnimJoint1595;

let HAnimJoint1596 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1596.USE = "hanim_vt7";
joints[13] = HAnimJoint1596;

let HAnimJoint1597 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1597.USE = "hanim_vt6";
joints[14] = HAnimJoint1597;

let HAnimJoint1598 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1598.USE = "hanim_vt5";
joints[15] = HAnimJoint1598;

let HAnimJoint1599 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1599.USE = "hanim_vt4";
joints[16] = HAnimJoint1599;

let HAnimJoint1600 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1600.USE = "hanim_vt3";
joints[17] = HAnimJoint1600;

let HAnimJoint1601 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_vt2";
joints[18] = HAnimJoint1601;

let HAnimJoint1602 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_vt1";
joints[19] = HAnimJoint1602;

let HAnimJoint1603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_vc7";
joints[20] = HAnimJoint1603;

let HAnimJoint1604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_vc6";
joints[21] = HAnimJoint1604;

let HAnimJoint1605 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_vc5";
joints[22] = HAnimJoint1605;

let HAnimJoint1606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_vc4";
joints[23] = HAnimJoint1606;

let HAnimJoint1607 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_vc3";
joints[24] = HAnimJoint1607;

let HAnimJoint1608 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_vc2";
joints[25] = HAnimJoint1608;

let HAnimJoint1609 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_vc1";
joints[26] = HAnimJoint1609;

let HAnimJoint1610 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_skullbase";
joints[27] = HAnimJoint1610;

let HAnimJoint1611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_temporomandibular";
joints[28] = HAnimJoint1611;

let HAnimJoint1612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_acromioclavicular";
joints[29] = HAnimJoint1612;

let HAnimJoint1613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_r_acromioclavicular";
joints[30] = HAnimJoint1613;

let HAnimJoint1614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_ankle";
joints[31] = HAnimJoint1614;

let HAnimJoint1615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_r_ankle";
joints[32] = HAnimJoint1615;

let HAnimJoint1616 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_elbow";
joints[33] = HAnimJoint1616;

let HAnimJoint1617 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_r_elbow";
joints[34] = HAnimJoint1617;

let HAnimJoint1618 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_eyeball_joint";
joints[35] = HAnimJoint1618;

let HAnimJoint1619 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_r_eyeball_joint";
joints[36] = HAnimJoint1619;

let HAnimJoint1620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_eyebrow_joint";
joints[37] = HAnimJoint1620;

let HAnimJoint1621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_r_eyebrow_joint";
joints[38] = HAnimJoint1621;

let HAnimJoint1622 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_eyelid_joint";
joints[39] = HAnimJoint1622;

let HAnimJoint1623 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_r_eyelid_joint";
joints[40] = HAnimJoint1623;

let HAnimJoint1624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_hip";
joints[41] = HAnimJoint1624;

let HAnimJoint1625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_r_hip";
joints[42] = HAnimJoint1625;

let HAnimJoint1626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_index0";
joints[43] = HAnimJoint1626;

let HAnimJoint1627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_r_index0";
joints[44] = HAnimJoint1627;

let HAnimJoint1628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_index1";
joints[45] = HAnimJoint1628;

let HAnimJoint1629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_r_index1";
joints[46] = HAnimJoint1629;

let HAnimJoint1630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_index2";
joints[47] = HAnimJoint1630;

let HAnimJoint1631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_r_index2";
joints[48] = HAnimJoint1631;

let HAnimJoint1632 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_l_index3";
joints[49] = HAnimJoint1632;

let HAnimJoint1633 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_r_index3";
joints[50] = HAnimJoint1633;

let HAnimJoint1634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_l_knee";
joints[51] = HAnimJoint1634;

let HAnimJoint1635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_r_knee";
joints[52] = HAnimJoint1635;

let HAnimJoint1636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_l_metatarsal";
joints[53] = HAnimJoint1636;

let HAnimJoint1637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_r_metatarsal";
joints[54] = HAnimJoint1637;

let HAnimJoint1638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_l_middle0";
joints[55] = HAnimJoint1638;

let HAnimJoint1639 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_middle0";
joints[56] = HAnimJoint1639;

let HAnimJoint1640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_l_middle1";
joints[57] = HAnimJoint1640;

let HAnimJoint1641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_middle1";
joints[58] = HAnimJoint1641;

let HAnimJoint1642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_l_middle2";
joints[59] = HAnimJoint1642;

let HAnimJoint1643 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_middle2";
joints[60] = HAnimJoint1643;

let HAnimJoint1644 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_l_middle3";
joints[61] = HAnimJoint1644;

let HAnimJoint1645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_middle3";
joints[62] = HAnimJoint1645;

let HAnimJoint1646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_l_midtarsal";
joints[63] = HAnimJoint1646;

let HAnimJoint1647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_midtarsal";
joints[64] = HAnimJoint1647;

let HAnimJoint1648 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_l_pinky0";
joints[65] = HAnimJoint1648;

let HAnimJoint1649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_pinky0";
joints[66] = HAnimJoint1649;

let HAnimJoint1650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_l_pinky1";
joints[67] = HAnimJoint1650;

let HAnimJoint1651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_pinky1";
joints[68] = HAnimJoint1651;

let HAnimJoint1652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_l_pinky2";
joints[69] = HAnimJoint1652;

let HAnimJoint1653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_pinky2";
joints[70] = HAnimJoint1653;

let HAnimJoint1654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_l_pinky3";
joints[71] = HAnimJoint1654;

let HAnimJoint1655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_pinky3";
joints[72] = HAnimJoint1655;

let HAnimJoint1656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_l_ring0";
joints[73] = HAnimJoint1656;

let HAnimJoint1657 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_ring0";
joints[74] = HAnimJoint1657;

let HAnimJoint1658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_l_ring1";
joints[75] = HAnimJoint1658;

let HAnimJoint1659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_r_ring1";
joints[76] = HAnimJoint1659;

let HAnimJoint1660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_l_ring2";
joints[77] = HAnimJoint1660;

let HAnimJoint1661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_r_ring2";
joints[78] = HAnimJoint1661;

let HAnimJoint1662 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_l_ring3";
joints[79] = HAnimJoint1662;

let HAnimJoint1663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_r_ring3";
joints[80] = HAnimJoint1663;

let HAnimJoint1664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_l_shoulder";
joints[81] = HAnimJoint1664;

let HAnimJoint1665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_r_shoulder";
joints[82] = HAnimJoint1665;

let HAnimJoint1666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_l_sternoclavicular";
joints[83] = HAnimJoint1666;

let HAnimJoint1667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_r_sternoclavicular";
joints[84] = HAnimJoint1667;

let HAnimJoint1668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_l_subtalar";
joints[85] = HAnimJoint1668;

let HAnimJoint1669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_r_subtalar";
joints[86] = HAnimJoint1669;

let HAnimJoint1670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_l_thumb1";
joints[87] = HAnimJoint1670;

let HAnimJoint1671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_r_thumb1";
joints[88] = HAnimJoint1671;

let HAnimJoint1672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_l_thumb2";
joints[89] = HAnimJoint1672;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_r_thumb2";
joints[90] = HAnimJoint1673;

let HAnimJoint1674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_l_thumb3";
joints[91] = HAnimJoint1674;

let HAnimJoint1675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_r_thumb3";
joints[92] = HAnimJoint1675;

let HAnimJoint1676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_l_wrist";
joints[93] = HAnimJoint1676;

let HAnimJoint1677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_r_wrist";
joints[94] = HAnimJoint1677;

let HAnimSegment1678 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1678.USE = "hanim_pelvis";
segments[95] = HAnimSegment1678;

let HAnimSegment1679 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1679.USE = "hanim_skull";
segments[96] = HAnimSegment1679;

let HAnimSegment1680 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1680.USE = "hanim_jaw";
segments[97] = HAnimSegment1680;

let HAnimSegment1681 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1681.USE = "hanim_c1";
segments[98] = HAnimSegment1681;

let HAnimSegment1682 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1682.USE = "hanim_c2";
segments[99] = HAnimSegment1682;

let HAnimSegment1683 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1683.USE = "hanim_c3";
segments[100] = HAnimSegment1683;

let HAnimSegment1684 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1684.USE = "hanim_c4";
segments[101] = HAnimSegment1684;

let HAnimSegment1685 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1685.USE = "hanim_c5";
segments[102] = HAnimSegment1685;

let HAnimSegment1686 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1686.USE = "hanim_c6";
segments[103] = HAnimSegment1686;

let HAnimSegment1687 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1687.USE = "hanim_c7";
segments[104] = HAnimSegment1687;

let HAnimSegment1688 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1688.USE = "hanim_t1";
segments[105] = HAnimSegment1688;

let HAnimSegment1689 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1689.USE = "hanim_t2";
segments[106] = HAnimSegment1689;

let HAnimSegment1690 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1690.USE = "hanim_t3";
segments[107] = HAnimSegment1690;

let HAnimSegment1691 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1691.USE = "hanim_t4";
segments[108] = HAnimSegment1691;

let HAnimSegment1692 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1692.USE = "hanim_t5";
segments[109] = HAnimSegment1692;

let HAnimSegment1693 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1693.USE = "hanim_t6";
segments[110] = HAnimSegment1693;

let HAnimSegment1694 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1694.USE = "hanim_t7";
segments[111] = HAnimSegment1694;

let HAnimSegment1695 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1695.USE = "hanim_t8";
segments[112] = HAnimSegment1695;

let HAnimSegment1696 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1696.USE = "hanim_t9";
segments[113] = HAnimSegment1696;

let HAnimSegment1697 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1697.USE = "hanim_t10";
segments[114] = HAnimSegment1697;

let HAnimSegment1698 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1698.USE = "hanim_t11";
segments[115] = HAnimSegment1698;

let HAnimSegment1699 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1699.USE = "hanim_t12";
segments[116] = HAnimSegment1699;

let HAnimSegment1700 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1700.USE = "hanim_l1";
segments[117] = HAnimSegment1700;

let HAnimSegment1701 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1701.USE = "hanim_l2";
segments[118] = HAnimSegment1701;

let HAnimSegment1702 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1702.USE = "hanim_l3";
segments[119] = HAnimSegment1702;

let HAnimSegment1703 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1703.USE = "hanim_l4";
segments[120] = HAnimSegment1703;

let HAnimSegment1704 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1704.USE = "hanim_l5";
segments[121] = HAnimSegment1704;

let HAnimSegment1705 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1705.USE = "hanim_sacrum";
segments[122] = HAnimSegment1705;

let HAnimSegment1706 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1706.USE = "hanim_l_calf";
segments[123] = HAnimSegment1706;

let HAnimSegment1707 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1707.USE = "hanim_r_calf";
segments[124] = HAnimSegment1707;

let HAnimSegment1708 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1708.USE = "hanim_l_clavicle";
segments[125] = HAnimSegment1708;

let HAnimSegment1709 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1709.USE = "hanim_r_clavicle";
segments[126] = HAnimSegment1709;

let HAnimSegment1710 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1710.USE = "hanim_l_eyeball";
segments[127] = HAnimSegment1710;

let HAnimSegment1711 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1711.USE = "hanim_r_eyeball";
segments[128] = HAnimSegment1711;

let HAnimSegment1712 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1712.USE = "hanim_l_eyebrow";
segments[129] = HAnimSegment1712;

let HAnimSegment1713 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1713.USE = "hanim_r_eyebrow";
segments[130] = HAnimSegment1713;

let HAnimSegment1714 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1714.USE = "hanim_l_eyelid";
segments[131] = HAnimSegment1714;

let HAnimSegment1715 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1715.USE = "hanim_r_eyelid";
segments[132] = HAnimSegment1715;

let HAnimSegment1716 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1716.USE = "hanim_l_forearm";
segments[133] = HAnimSegment1716;

let HAnimSegment1717 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1717.USE = "hanim_r_forearm";
segments[134] = HAnimSegment1717;

let HAnimSegment1718 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1718.USE = "hanim_l_forefoot";
segments[135] = HAnimSegment1718;

let HAnimSegment1719 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1719.USE = "hanim_r_forefoot";
segments[136] = HAnimSegment1719;

let HAnimSegment1720 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1720.USE = "hanim_l_hand";
segments[137] = HAnimSegment1720;

let HAnimSegment1721 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1721.USE = "hanim_r_hand";
segments[138] = HAnimSegment1721;

let HAnimSegment1722 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1722.USE = "hanim_l_hindfoot";
segments[139] = HAnimSegment1722;

let HAnimSegment1723 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1723.USE = "hanim_r_hindfoot";
segments[140] = HAnimSegment1723;

let HAnimSegment1724 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1724.USE = "hanim_l_index_distal";
segments[141] = HAnimSegment1724;

let HAnimSegment1725 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1725.USE = "hanim_r_index_distal";
segments[142] = HAnimSegment1725;

let HAnimSegment1726 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1726.USE = "hanim_l_index_metacarpal";
segments[143] = HAnimSegment1726;

let HAnimSegment1727 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1727.USE = "hanim_r_index_metacarpal";
segments[144] = HAnimSegment1727;

let HAnimSegment1728 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1728.USE = "hanim_l_index_middle";
segments[145] = HAnimSegment1728;

let HAnimSegment1729 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1729.USE = "hanim_r_index_middle";
segments[146] = HAnimSegment1729;

let HAnimSegment1730 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1730.USE = "hanim_l_index_proximal";
segments[147] = HAnimSegment1730;

let HAnimSegment1731 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1731.USE = "hanim_r_index_proximal";
segments[148] = HAnimSegment1731;

let HAnimSegment1732 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1732.USE = "hanim_l_middistal";
segments[149] = HAnimSegment1732;

let HAnimSegment1733 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1733.USE = "hanim_r_middistal";
segments[150] = HAnimSegment1733;

let HAnimSegment1734 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1734.USE = "hanim_l_middle_distal";
segments[151] = HAnimSegment1734;

let HAnimSegment1735 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1735.USE = "hanim_r_middle_distal";
segments[152] = HAnimSegment1735;

let HAnimSegment1736 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1736.USE = "hanim_l_middle_metacarpal";
segments[153] = HAnimSegment1736;

let HAnimSegment1737 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1737.USE = "hanim_r_middle_metacarpal";
segments[154] = HAnimSegment1737;

let HAnimSegment1738 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1738.USE = "hanim_l_middle_middle";
segments[155] = HAnimSegment1738;

let HAnimSegment1739 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1739.USE = "hanim_r_middle_middle";
segments[156] = HAnimSegment1739;

let HAnimSegment1740 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1740.USE = "hanim_l_middle_proximal";
segments[157] = HAnimSegment1740;

let HAnimSegment1741 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1741.USE = "hanim_r_middle_proximal";
segments[158] = HAnimSegment1741;

let HAnimSegment1742 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1742.USE = "hanim_l_midproximal";
segments[159] = HAnimSegment1742;

let HAnimSegment1743 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1743.USE = "hanim_r_midproximal";
segments[160] = HAnimSegment1743;

let HAnimSegment1744 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1744.USE = "hanim_l_pinky_distal";
segments[161] = HAnimSegment1744;

let HAnimSegment1745 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1745.USE = "hanim_r_pinky_distal";
segments[162] = HAnimSegment1745;

let HAnimSegment1746 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_l_pinky_metacarpal";
segments[163] = HAnimSegment1746;

let HAnimSegment1747 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_r_pinky_metacarpal";
segments[164] = HAnimSegment1747;

let HAnimSegment1748 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_l_pinky_middle";
segments[165] = HAnimSegment1748;

let HAnimSegment1749 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_r_pinky_middle";
segments[166] = HAnimSegment1749;

let HAnimSegment1750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l_pinky_proximal";
segments[167] = HAnimSegment1750;

let HAnimSegment1751 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_r_pinky_proximal";
segments[168] = HAnimSegment1751;

let HAnimSegment1752 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l_ring_distal";
segments[169] = HAnimSegment1752;

let HAnimSegment1753 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_r_ring_distal";
segments[170] = HAnimSegment1753;

let HAnimSegment1754 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l_ring_metacarpal";
segments[171] = HAnimSegment1754;

let HAnimSegment1755 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_r_ring_metacarpal";
segments[172] = HAnimSegment1755;

let HAnimSegment1756 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_ring_middle";
segments[173] = HAnimSegment1756;

let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_r_ring_middle";
segments[174] = HAnimSegment1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_ring_proximal";
segments[175] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_r_ring_proximal";
segments[176] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_scapula";
segments[177] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_r_scapula";
segments[178] = HAnimSegment1761;

let HAnimSegment1762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_thigh";
segments[179] = HAnimSegment1762;

let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_r_thigh";
segments[180] = HAnimSegment1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_thumb_distal";
segments[181] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_r_thumb_distal";
segments[182] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_thumb_metacarpal";
segments[183] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_r_thumb_metacarpal";
segments[184] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_thumb_proximal";
segments[185] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_r_thumb_proximal";
segments[186] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_upperarm";
segments[187] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_r_upperarm";
segments[188] = HAnimSegment1771;

let HAnimSite1772 = browser.currentScene.createNode("HAnimSite");
HAnimSite1772.USE = "hanim_crotch_pt";
viewpoints[189] = HAnimSite1772;

let HAnimSite1773 = browser.currentScene.createNode("HAnimSite");
HAnimSite1773.USE = "hanim_skull_tip";
viewpoints[190] = HAnimSite1773;

let HAnimSite1774 = browser.currentScene.createNode("HAnimSite");
HAnimSite1774.USE = "hanim_sellion_pt";
viewpoints[191] = HAnimSite1774;

let HAnimSite1775 = browser.currentScene.createNode("HAnimSite");
HAnimSite1775.USE = "hanim_supramenton_pt";
viewpoints[192] = HAnimSite1775;

let HAnimSite1776 = browser.currentScene.createNode("HAnimSite");
HAnimSite1776.USE = "hanim_nuchale_pt";
viewpoints[193] = HAnimSite1776;

let HAnimSite1777 = browser.currentScene.createNode("HAnimSite");
HAnimSite1777.USE = "hanim_suprasternale_pt";
viewpoints[194] = HAnimSite1777;

let HAnimSite1778 = browser.currentScene.createNode("HAnimSite");
HAnimSite1778.USE = "hanim_cervicale_pt";
viewpoints[195] = HAnimSite1778;

let HAnimSite1779 = browser.currentScene.createNode("HAnimSite");
HAnimSite1779.USE = "hanim_substernale_pt";
viewpoints[196] = HAnimSite1779;

let HAnimSite1780 = browser.currentScene.createNode("HAnimSite");
HAnimSite1780.USE = "hanim_rib10_midspine_pt";
viewpoints[197] = HAnimSite1780;

let HAnimSite1781 = browser.currentScene.createNode("HAnimSite");
HAnimSite1781.USE = "hanim_waist_preferred_post_pt";
viewpoints[198] = HAnimSite1781;

let HAnimSite1782 = browser.currentScene.createNode("HAnimSite");
HAnimSite1782.USE = "hanim_navel_pt";
viewpoints[199] = HAnimSite1782;

let HAnimSite1783 = browser.currentScene.createNode("HAnimSite");
HAnimSite1783.USE = "hanim_l_acromion_pt";
viewpoints[200] = HAnimSite1783;

let HAnimSite1784 = browser.currentScene.createNode("HAnimSite");
HAnimSite1784.USE = "hanim_r_acromion_pt";
viewpoints[201] = HAnimSite1784;

let HAnimSite1785 = browser.currentScene.createNode("HAnimSite");
HAnimSite1785.USE = "hanim_r_asis_pt";
viewpoints[202] = HAnimSite1785;

let HAnimSite1786 = browser.currentScene.createNode("HAnimSite");
HAnimSite1786.USE = "hanim_l_asis_pt";
viewpoints[203] = HAnimSite1786;

let HAnimSite1787 = browser.currentScene.createNode("HAnimSite");
HAnimSite1787.USE = "hanim_l_axilla_ant_pt";
viewpoints[204] = HAnimSite1787;

let HAnimSite1788 = browser.currentScene.createNode("HAnimSite");
HAnimSite1788.USE = "hanim_r_axilla_ant_pt";
viewpoints[205] = HAnimSite1788;

let HAnimSite1789 = browser.currentScene.createNode("HAnimSite");
HAnimSite1789.USE = "hanim_l_axilla_post_pt";
viewpoints[206] = HAnimSite1789;

let HAnimSite1790 = browser.currentScene.createNode("HAnimSite");
HAnimSite1790.USE = "hanim_r_axilla_post_pt";
viewpoints[207] = HAnimSite1790;

let HAnimSite1791 = browser.currentScene.createNode("HAnimSite");
HAnimSite1791.USE = "hanim_l_calcaneous_post_pt";
viewpoints[208] = HAnimSite1791;

let HAnimSite1792 = browser.currentScene.createNode("HAnimSite");
HAnimSite1792.USE = "hanim_r_calcaneous_post_pt";
viewpoints[209] = HAnimSite1792;

let HAnimSite1793 = browser.currentScene.createNode("HAnimSite");
HAnimSite1793.USE = "hanim_l_clavicale_pt";
viewpoints[210] = HAnimSite1793;

let HAnimSite1794 = browser.currentScene.createNode("HAnimSite");
HAnimSite1794.USE = "hanim_r_clavicale_pt";
viewpoints[211] = HAnimSite1794;

let HAnimSite1795 = browser.currentScene.createNode("HAnimSite");
HAnimSite1795.USE = "hanim_l_dactylion_pt";
viewpoints[212] = HAnimSite1795;

let HAnimSite1796 = browser.currentScene.createNode("HAnimSite");
HAnimSite1796.USE = "hanim_r_dactylion_pt";
viewpoints[213] = HAnimSite1796;

let HAnimSite1797 = browser.currentScene.createNode("HAnimSite");
HAnimSite1797.USE = "hanim_l_digit2_pt";
viewpoints[214] = HAnimSite1797;

let HAnimSite1798 = browser.currentScene.createNode("HAnimSite");
HAnimSite1798.USE = "hanim_r_digit2_pt";
viewpoints[215] = HAnimSite1798;

let HAnimSite1799 = browser.currentScene.createNode("HAnimSite");
HAnimSite1799.USE = "hanim_l_femoral_lateral_epicn_pt";
viewpoints[216] = HAnimSite1799;

let HAnimSite1800 = browser.currentScene.createNode("HAnimSite");
HAnimSite1800.USE = "hanim_r_femoral_lateral_epicn_pt";
viewpoints[217] = HAnimSite1800;

let HAnimSite1801 = browser.currentScene.createNode("HAnimSite");
HAnimSite1801.USE = "hanim_l_femoral_medial_epicn_pt";
viewpoints[218] = HAnimSite1801;

let HAnimSite1802 = browser.currentScene.createNode("HAnimSite");
HAnimSite1802.USE = "hanim_r_femoral_medial_epicn_pt";
viewpoints[219] = HAnimSite1802;

let HAnimSite1803 = browser.currentScene.createNode("HAnimSite");
HAnimSite1803.USE = "hanim_l_forefoot_tip";
viewpoints[220] = HAnimSite1803;

let HAnimSite1804 = browser.currentScene.createNode("HAnimSite");
HAnimSite1804.USE = "hanim_r_forefoot_tip";
viewpoints[221] = HAnimSite1804;

let HAnimSite1805 = browser.currentScene.createNode("HAnimSite");
HAnimSite1805.USE = "hanim_r_gonion_pt";
viewpoints[222] = HAnimSite1805;

let HAnimSite1806 = browser.currentScene.createNode("HAnimSite");
HAnimSite1806.USE = "hanim_l_gonion_pt";
viewpoints[223] = HAnimSite1806;

let HAnimSite1807 = browser.currentScene.createNode("HAnimSite");
HAnimSite1807.USE = "hanim_l_humeral_lateral_epicn_pt";
viewpoints[224] = HAnimSite1807;

let HAnimSite1808 = browser.currentScene.createNode("HAnimSite");
HAnimSite1808.USE = "hanim_r_humeral_lateral_epicn_pt";
viewpoints[225] = HAnimSite1808;

let HAnimSite1809 = browser.currentScene.createNode("HAnimSite");
HAnimSite1809.USE = "hanim_l_humeral_medial_epicn_pt";
viewpoints[226] = HAnimSite1809;

let HAnimSite1810 = browser.currentScene.createNode("HAnimSite");
HAnimSite1810.USE = "hanim_r_humeral_medial_epicn_pt";
viewpoints[227] = HAnimSite1810;

let HAnimSite1811 = browser.currentScene.createNode("HAnimSite");
HAnimSite1811.USE = "hanim_r_iliocristale_pt";
viewpoints[228] = HAnimSite1811;

let HAnimSite1812 = browser.currentScene.createNode("HAnimSite");
HAnimSite1812.USE = "hanim_l_iliocristale_pt";
viewpoints[229] = HAnimSite1812;

let HAnimSite1813 = browser.currentScene.createNode("HAnimSite");
HAnimSite1813.USE = "hanim_l_index_distal_tip";
viewpoints[230] = HAnimSite1813;

let HAnimSite1814 = browser.currentScene.createNode("HAnimSite");
HAnimSite1814.USE = "hanim_r_index_distal_tip";
viewpoints[231] = HAnimSite1814;

let HAnimSite1815 = browser.currentScene.createNode("HAnimSite");
HAnimSite1815.USE = "hanim_r_infraorbitale_pt";
viewpoints[232] = HAnimSite1815;

let HAnimSite1816 = browser.currentScene.createNode("HAnimSite");
HAnimSite1816.USE = "hanim_l_infraorbitale_pt";
viewpoints[233] = HAnimSite1816;

let HAnimSite1817 = browser.currentScene.createNode("HAnimSite");
HAnimSite1817.USE = "hanim_l_knee_crease_pt";
viewpoints[234] = HAnimSite1817;

let HAnimSite1818 = browser.currentScene.createNode("HAnimSite");
HAnimSite1818.USE = "hanim_r_knee_crease_pt";
viewpoints[235] = HAnimSite1818;

let HAnimSite1819 = browser.currentScene.createNode("HAnimSite");
HAnimSite1819.USE = "hanim_l_lateral_malleolus_pt";
viewpoints[236] = HAnimSite1819;

let HAnimSite1820 = browser.currentScene.createNode("HAnimSite");
HAnimSite1820.USE = "hanim_r_lateral_malleolus_pt";
viewpoints[237] = HAnimSite1820;

let HAnimSite1821 = browser.currentScene.createNode("HAnimSite");
HAnimSite1821.USE = "hanim_l_medial_malleolus_pt";
viewpoints[238] = HAnimSite1821;

let HAnimSite1822 = browser.currentScene.createNode("HAnimSite");
HAnimSite1822.USE = "hanim_r_medial_malleolus_pt";
viewpoints[239] = HAnimSite1822;

let HAnimSite1823 = browser.currentScene.createNode("HAnimSite");
HAnimSite1823.USE = "hanim_l_metacarpal_pha2_pt";
viewpoints[240] = HAnimSite1823;

let HAnimSite1824 = browser.currentScene.createNode("HAnimSite");
HAnimSite1824.USE = "hanim_r_metacarpal_pha2_pt";
viewpoints[241] = HAnimSite1824;

let HAnimSite1825 = browser.currentScene.createNode("HAnimSite");
HAnimSite1825.USE = "hanim_l_metacarpal_pha5_pt";
viewpoints[242] = HAnimSite1825;

let HAnimSite1826 = browser.currentScene.createNode("HAnimSite");
HAnimSite1826.USE = "hanim_r_metacarpal_pha5_pt";
viewpoints[243] = HAnimSite1826;

let HAnimSite1827 = browser.currentScene.createNode("HAnimSite");
HAnimSite1827.USE = "hanim_l_metatarsal_pha1_pt";
viewpoints[244] = HAnimSite1827;

let HAnimSite1828 = browser.currentScene.createNode("HAnimSite");
HAnimSite1828.USE = "hanim_r_metatarsal_pha1_pt";
viewpoints[245] = HAnimSite1828;

let HAnimSite1829 = browser.currentScene.createNode("HAnimSite");
HAnimSite1829.USE = "hanim_l_metatarsal_pha5_pt";
viewpoints[246] = HAnimSite1829;

let HAnimSite1830 = browser.currentScene.createNode("HAnimSite");
HAnimSite1830.USE = "hanim_r_metatarsal_pha5_pt";
viewpoints[247] = HAnimSite1830;

let HAnimSite1831 = browser.currentScene.createNode("HAnimSite");
HAnimSite1831.USE = "hanim_l_middle_distal_tip";
viewpoints[248] = HAnimSite1831;

let HAnimSite1832 = browser.currentScene.createNode("HAnimSite");
HAnimSite1832.USE = "hanim_r_middle_distal_tip";
viewpoints[249] = HAnimSite1832;

let HAnimSite1833 = browser.currentScene.createNode("HAnimSite");
HAnimSite1833.USE = "hanim_r_neck_base_pt";
viewpoints[250] = HAnimSite1833;

let HAnimSite1834 = browser.currentScene.createNode("HAnimSite");
HAnimSite1834.USE = "hanim_l_neck_base_pt";
viewpoints[251] = HAnimSite1834;

let HAnimSite1835 = browser.currentScene.createNode("HAnimSite");
HAnimSite1835.USE = "hanim_l_olecranon_pt";
viewpoints[252] = HAnimSite1835;

let HAnimSite1836 = browser.currentScene.createNode("HAnimSite");
HAnimSite1836.USE = "hanim_r_olecranon_pt";
viewpoints[253] = HAnimSite1836;

let HAnimSite1837 = browser.currentScene.createNode("HAnimSite");
HAnimSite1837.USE = "hanim_l_pinky_distal_tip";
viewpoints[254] = HAnimSite1837;

let HAnimSite1838 = browser.currentScene.createNode("HAnimSite");
HAnimSite1838.USE = "hanim_r_pinky_distal_tip";
viewpoints[255] = HAnimSite1838;

let HAnimSite1839 = browser.currentScene.createNode("HAnimSite");
HAnimSite1839.USE = "hanim_r_psis_pt";
viewpoints[256] = HAnimSite1839;

let HAnimSite1840 = browser.currentScene.createNode("HAnimSite");
HAnimSite1840.USE = "hanim_l_psis_pt";
viewpoints[257] = HAnimSite1840;

let HAnimSite1841 = browser.currentScene.createNode("HAnimSite");
HAnimSite1841.USE = "hanim_l_radial_styloid_pt";
viewpoints[258] = HAnimSite1841;

let HAnimSite1842 = browser.currentScene.createNode("HAnimSite");
HAnimSite1842.USE = "hanim_r_radial_styloid_pt";
viewpoints[259] = HAnimSite1842;

let HAnimSite1843 = browser.currentScene.createNode("HAnimSite");
HAnimSite1843.USE = "hanim_l_radiale_pt";
viewpoints[260] = HAnimSite1843;

let HAnimSite1844 = browser.currentScene.createNode("HAnimSite");
HAnimSite1844.USE = "hanim_r_radiale_pt";
viewpoints[261] = HAnimSite1844;

let HAnimSite1845 = browser.currentScene.createNode("HAnimSite");
HAnimSite1845.USE = "hanim_r_rib10_pt";
viewpoints[262] = HAnimSite1845;

let HAnimSite1846 = browser.currentScene.createNode("HAnimSite");
HAnimSite1846.USE = "hanim_l_rib10_pt";
viewpoints[263] = HAnimSite1846;

let HAnimSite1847 = browser.currentScene.createNode("HAnimSite");
HAnimSite1847.USE = "hanim_l_ring_distal_tip";
viewpoints[264] = HAnimSite1847;

let HAnimSite1848 = browser.currentScene.createNode("HAnimSite");
HAnimSite1848.USE = "hanim_r_ring_distal_tip";
viewpoints[265] = HAnimSite1848;

let HAnimSite1849 = browser.currentScene.createNode("HAnimSite");
HAnimSite1849.USE = "hanim_temporomandibular_l_site_pt";
viewpoints[266] = HAnimSite1849;

let HAnimSite1850 = browser.currentScene.createNode("HAnimSite");
HAnimSite1850.USE = "hanim_temporomandibular_r_site_pt";
viewpoints[267] = HAnimSite1850;

let HAnimSite1851 = browser.currentScene.createNode("HAnimSite");
HAnimSite1851.USE = "hanim_l_sphyrion_pt";
viewpoints[268] = HAnimSite1851;

let HAnimSite1852 = browser.currentScene.createNode("HAnimSite");
HAnimSite1852.USE = "hanim_r_sphyrion_pt";
viewpoints[269] = HAnimSite1852;

let HAnimSite1853 = browser.currentScene.createNode("HAnimSite");
HAnimSite1853.USE = "hanim_r_thelion_pt";
viewpoints[270] = HAnimSite1853;

let HAnimSite1854 = browser.currentScene.createNode("HAnimSite");
HAnimSite1854.USE = "hanim_l_thelion_pt";
viewpoints[271] = HAnimSite1854;

let HAnimSite1855 = browser.currentScene.createNode("HAnimSite");
HAnimSite1855.USE = "hanim_l_thumb_distal_tip";
viewpoints[272] = HAnimSite1855;

let HAnimSite1856 = browser.currentScene.createNode("HAnimSite");
HAnimSite1856.USE = "hanim_r_thumb_distal_tip";
viewpoints[273] = HAnimSite1856;

let HAnimSite1857 = browser.currentScene.createNode("HAnimSite");
HAnimSite1857.USE = "hanim_r_tragion_pt";
viewpoints[274] = HAnimSite1857;

let HAnimSite1858 = browser.currentScene.createNode("HAnimSite");
HAnimSite1858.USE = "hanim_l_tragion_pt";
viewpoints[275] = HAnimSite1858;

let HAnimSite1859 = browser.currentScene.createNode("HAnimSite");
HAnimSite1859.USE = "hanim_r_trochanterion_pt";
viewpoints[276] = HAnimSite1859;

let HAnimSite1860 = browser.currentScene.createNode("HAnimSite");
HAnimSite1860.USE = "hanim_l_trochanterion_pt";
viewpoints[277] = HAnimSite1860;

let HAnimSite1861 = browser.currentScene.createNode("HAnimSite");
HAnimSite1861.USE = "hanim_l_ulnar_styloid_pt";
viewpoints[278] = HAnimSite1861;

let HAnimSite1862 = browser.currentScene.createNode("HAnimSite");
HAnimSite1862.USE = "hanim_r_ulnar_styloid_pt";
viewpoints[279] = HAnimSite1862;

let HAnimSite1863 = browser.currentScene.createNode("HAnimSite");
HAnimSite1863.DEF = "hanim_l_inclined_view";
HAnimSite1863.name = "l_inclined_view";
HAnimSite1863.translation = new X3D.SFVec3f([1.62,1.05,2.06]);
HAnimSite1863.rotation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
let TouchSensor1864 = browser.currentScene.createNode("TouchSensor");
TouchSensor1864.description = "HAnimSite l_inclined_view";
HAnimSite1863YYY.children = new X3D.MFNode();

HAnimSite1863ZZZ.children[0] = TouchSensor1864;

let Shape1865 = browser.currentScene.createNode("Shape");
Shape1865.USE = "HAnimSiteShape";
HAnimSite1863ZZZ.children[1] = Shape1865;

let Viewpoint1866 = browser.currentScene.createNode("Viewpoint");
Viewpoint1866.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1866.description = "left inclined";
Viewpoint1866.position = new X3D.SFVec3f([0,0,0]);
HAnimSite1863ZZZ.children[2] = Viewpoint1866;

let Anchor1867 = browser.currentScene.createNode("Anchor");
Anchor1867.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1867.url = new X3D.MFString([new X3D.SFString("#hanim_l_inclined_viewpoint")]);
let LOD1868 = browser.currentScene.createNode("LOD");
LOD1868.forceTransitions = True;
LOD1868.range = new X3D.MFFloat([0.04]);
let WorldInfo1869 = browser.currentScene.createNode("WorldInfo");
WorldInfo1869.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1868YYY.children = new X3D.MFNode();

LOD1868ZZZ.children[0] = WorldInfo1869;

let Shape1870 = browser.currentScene.createNode("Shape");
Shape1870.USE = "HAnimSiteViewpointShape";
LOD1868ZZZ.children[1] = Shape1870;

Anchor1867YYY.children = new X3D.MFNode();

Anchor1867ZZZ.children[0] = LOD1868;

HAnimSite1863ZZZ.children[3] = Anchor1867;

viewpoints[280] = HAnimSite1863;

let HAnimSite1871 = browser.currentScene.createNode("HAnimSite");
HAnimSite1871.DEF = "hanim_r_inclined_view";
HAnimSite1871.name = "r_inclined_view";
HAnimSite1871.translation = new X3D.SFVec3f([-1.62,1.05,2.06]);
HAnimSite1871.rotation = new X3D.SFRotation([-0.113,-0.993,0.0347,0.671]);
let TouchSensor1872 = browser.currentScene.createNode("TouchSensor");
TouchSensor1872.description = "HAnimSite r_inclined_view";
HAnimSite1871YYY.children = new X3D.MFNode();

HAnimSite1871ZZZ.children[0] = TouchSensor1872;

let Shape1873 = browser.currentScene.createNode("Shape");
Shape1873.USE = "HAnimSiteShape";
HAnimSite1871ZZZ.children[1] = Shape1873;

let Viewpoint1874 = browser.currentScene.createNode("Viewpoint");
Viewpoint1874.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1874.description = "right inclined";
Viewpoint1874.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1874.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1871ZZZ.children[2] = Viewpoint1874;

let Anchor1875 = browser.currentScene.createNode("Anchor");
Anchor1875.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1875.url = new X3D.MFString([new X3D.SFString("#hanim_r_inclined_viewpoint")]);
let LOD1876 = browser.currentScene.createNode("LOD");
LOD1876.forceTransitions = True;
LOD1876.range = new X3D.MFFloat([0.04]);
let WorldInfo1877 = browser.currentScene.createNode("WorldInfo");
WorldInfo1877.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1876YYY.children = new X3D.MFNode();

LOD1876ZZZ.children[0] = WorldInfo1877;

let Shape1878 = browser.currentScene.createNode("Shape");
Shape1878.USE = "HAnimSiteViewpointShape";
LOD1876ZZZ.children[1] = Shape1878;

Anchor1875YYY.children = new X3D.MFNode();

Anchor1875ZZZ.children[0] = LOD1876;

HAnimSite1871ZZZ.children[3] = Anchor1875;

viewpoints[281] = HAnimSite1871;

let HAnimSite1879 = browser.currentScene.createNode("HAnimSite");
HAnimSite1879.DEF = "hanim_front_view";
HAnimSite1879.name = "front_view";
HAnimSite1879.translation = new X3D.SFVec3f([0,0.85,2.58]);
let TouchSensor1880 = browser.currentScene.createNode("TouchSensor");
TouchSensor1880.description = "HAnimSite front_view";
HAnimSite1879YYY.children = new X3D.MFNode();

HAnimSite1879ZZZ.children[0] = TouchSensor1880;

let Shape1881 = browser.currentScene.createNode("Shape");
Shape1881.USE = "HAnimSiteShape";
HAnimSite1879ZZZ.children[1] = Shape1881;

let Viewpoint1882 = browser.currentScene.createNode("Viewpoint");
Viewpoint1882.DEF = "hanim_front_viewpoint";
Viewpoint1882.description = "front";
Viewpoint1882.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1882.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1879ZZZ.children[2] = Viewpoint1882;

let Anchor1883 = browser.currentScene.createNode("Anchor");
Anchor1883.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1883.url = new X3D.MFString([new X3D.SFString("#hanim_front_viewpoint")]);
let LOD1884 = browser.currentScene.createNode("LOD");
LOD1884.forceTransitions = True;
LOD1884.range = new X3D.MFFloat([0.04]);
let WorldInfo1885 = browser.currentScene.createNode("WorldInfo");
WorldInfo1885.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1884YYY.children = new X3D.MFNode();

LOD1884ZZZ.children[0] = WorldInfo1885;

let Shape1886 = browser.currentScene.createNode("Shape");
Shape1886.USE = "HAnimSiteViewpointShape";
LOD1884ZZZ.children[1] = Shape1886;

Anchor1883YYY.children = new X3D.MFNode();

Anchor1883ZZZ.children[0] = LOD1884;

HAnimSite1879ZZZ.children[3] = Anchor1883;

viewpoints[282] = HAnimSite1879;

let HAnimSite1887 = browser.currentScene.createNode("HAnimSite");
HAnimSite1887.DEF = "hanim_back_view";
HAnimSite1887.name = "back_view";
HAnimSite1887.translation = new X3D.SFVec3f([0,0.85,-2.58]);
HAnimSite1887.rotation = new X3D.SFRotation([0,1,0,3.14]);
let TouchSensor1888 = browser.currentScene.createNode("TouchSensor");
TouchSensor1888.description = "HAnimSite back_view";
HAnimSite1887YYY.children = new X3D.MFNode();

HAnimSite1887ZZZ.children[0] = TouchSensor1888;

let Shape1889 = browser.currentScene.createNode("Shape");
Shape1889.USE = "HAnimSiteShape";
HAnimSite1887ZZZ.children[1] = Shape1889;

let Viewpoint1890 = browser.currentScene.createNode("Viewpoint");
Viewpoint1890.DEF = "hanim_back_viewpoint";
Viewpoint1890.description = "back";
Viewpoint1890.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1890.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1887ZZZ.children[2] = Viewpoint1890;

let Anchor1891 = browser.currentScene.createNode("Anchor");
Anchor1891.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1891.url = new X3D.MFString([new X3D.SFString("#hanim_back_viewpoint")]);
let LOD1892 = browser.currentScene.createNode("LOD");
LOD1892.forceTransitions = True;
LOD1892.range = new X3D.MFFloat([0.04]);
let WorldInfo1893 = browser.currentScene.createNode("WorldInfo");
WorldInfo1893.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1892YYY.children = new X3D.MFNode();

LOD1892ZZZ.children[0] = WorldInfo1893;

let Shape1894 = browser.currentScene.createNode("Shape");
Shape1894.USE = "HAnimSiteViewpointShape";
LOD1892ZZZ.children[1] = Shape1894;

Anchor1891YYY.children = new X3D.MFNode();

Anchor1891ZZZ.children[0] = LOD1892;

HAnimSite1887ZZZ.children[3] = Anchor1891;

viewpoints[283] = HAnimSite1887;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.DEF = "hanim_l_side_view";
HAnimSite1895.name = "l_side_view";
HAnimSite1895.translation = new X3D.SFVec3f([2.6,0.854,0]);
HAnimSite1895.rotation = new X3D.SFRotation([0,1,0,1.5708]);
let TouchSensor1896 = browser.currentScene.createNode("TouchSensor");
TouchSensor1896.description = "HAnimSite l_side_view";
HAnimSite1895YYY.children = new X3D.MFNode();

HAnimSite1895ZZZ.children[0] = TouchSensor1896;

let Shape1897 = browser.currentScene.createNode("Shape");
Shape1897.USE = "HAnimSiteShape";
HAnimSite1895ZZZ.children[1] = Shape1897;

let Viewpoint1898 = browser.currentScene.createNode("Viewpoint");
Viewpoint1898.DEF = "hanim_l_side_viewpoint";
Viewpoint1898.description = "left side";
Viewpoint1898.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1898.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1895ZZZ.children[2] = Viewpoint1898;

let Anchor1899 = browser.currentScene.createNode("Anchor");
Anchor1899.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1899.url = new X3D.MFString([new X3D.SFString("#hanim_l_side_viewpoint")]);
let LOD1900 = browser.currentScene.createNode("LOD");
LOD1900.forceTransitions = True;
LOD1900.range = new X3D.MFFloat([0.04]);
let WorldInfo1901 = browser.currentScene.createNode("WorldInfo");
WorldInfo1901.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1900YYY.children = new X3D.MFNode();

LOD1900ZZZ.children[0] = WorldInfo1901;

let Shape1902 = browser.currentScene.createNode("Shape");
Shape1902.USE = "HAnimSiteViewpointShape";
LOD1900ZZZ.children[1] = Shape1902;

Anchor1899YYY.children = new X3D.MFNode();

Anchor1899ZZZ.children[0] = LOD1900;

HAnimSite1895ZZZ.children[3] = Anchor1899;

viewpoints[284] = HAnimSite1895;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.DEF = "hanim_Top_view";
HAnimSite1903.name = "Top_view";
HAnimSite1903.translation = new X3D.SFVec3f([0,3.5,0]);
HAnimSite1903.rotation = new X3D.SFRotation([1,0,0,-1.57]);
let TouchSensor1904 = browser.currentScene.createNode("TouchSensor");
TouchSensor1904.description = "HAnimSite Top_view";
HAnimSite1903YYY.children = new X3D.MFNode();

HAnimSite1903ZZZ.children[0] = TouchSensor1904;

let Shape1905 = browser.currentScene.createNode("Shape");
Shape1905.USE = "HAnimSiteShape";
HAnimSite1903ZZZ.children[1] = Shape1905;

let Viewpoint1906 = browser.currentScene.createNode("Viewpoint");
Viewpoint1906.DEF = "hanim_Top_viewpoint";
Viewpoint1906.description = "Top";
Viewpoint1906.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1906.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1903ZZZ.children[2] = Viewpoint1906;

let Anchor1907 = browser.currentScene.createNode("Anchor");
Anchor1907.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1907.url = new X3D.MFString([new X3D.SFString("#hanim_Top_viewpoint")]);
let LOD1908 = browser.currentScene.createNode("LOD");
LOD1908.forceTransitions = True;
LOD1908.range = new X3D.MFFloat([0.04]);
let WorldInfo1909 = browser.currentScene.createNode("WorldInfo");
WorldInfo1909.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1908YYY.children = new X3D.MFNode();

LOD1908ZZZ.children[0] = WorldInfo1909;

let Shape1910 = browser.currentScene.createNode("Shape");
Shape1910.USE = "HAnimSiteViewpointShape";
LOD1908ZZZ.children[1] = Shape1910;

Anchor1907YYY.children = new X3D.MFNode();

Anchor1907ZZZ.children[0] = LOD1908;

HAnimSite1903ZZZ.children[3] = Anchor1907;

viewpoints[285] = HAnimSite1903;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.DEF = "hanim_front_close_view";
HAnimSite1911.name = "front_close_view";
HAnimSite1911.translation = new X3D.SFVec3f([0,0.854,1.575]);
let TouchSensor1912 = browser.currentScene.createNode("TouchSensor");
TouchSensor1912.description = "HAnimSite front_close_view";
HAnimSite1911YYY.children = new X3D.MFNode();

HAnimSite1911ZZZ.children[0] = TouchSensor1912;

let Shape1913 = browser.currentScene.createNode("Shape");
Shape1913.USE = "HAnimSiteShape";
HAnimSite1911ZZZ.children[1] = Shape1913;

let Viewpoint1914 = browser.currentScene.createNode("Viewpoint");
Viewpoint1914.DEF = "hanim_front_close_viewpoint";
Viewpoint1914.description = "front close";
Viewpoint1914.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1914.centerOfRotation = new X3D.SFVec3f([0,0,1.575]);
HAnimSite1911ZZZ.children[2] = Viewpoint1914;

let Anchor1915 = browser.currentScene.createNode("Anchor");
Anchor1915.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1915.url = new X3D.MFString([new X3D.SFString("#hanim_front_close_viewpoint")]);
let LOD1916 = browser.currentScene.createNode("LOD");
LOD1916.forceTransitions = True;
LOD1916.range = new X3D.MFFloat([0.04]);
let WorldInfo1917 = browser.currentScene.createNode("WorldInfo");
WorldInfo1917.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1916YYY.children = new X3D.MFNode();

LOD1916ZZZ.children[0] = WorldInfo1917;

let Shape1918 = browser.currentScene.createNode("Shape");
Shape1918.USE = "HAnimSiteViewpointShape";
LOD1916ZZZ.children[1] = Shape1918;

Anchor1915YYY.children = new X3D.MFNode();

Anchor1915ZZZ.children[0] = LOD1916;

HAnimSite1911ZZZ.children[3] = Anchor1915;

viewpoints[286] = HAnimSite1911;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.DEF = "hanim_side_close_view";
HAnimSite1919.name = "side_close_view";
HAnimSite1919.translation = new X3D.SFVec3f([1.56,0.854,0]);
HAnimSite1919.rotation = new X3D.SFRotation([0,1,0,1.5708]);
let TouchSensor1920 = browser.currentScene.createNode("TouchSensor");
TouchSensor1920.description = "HAnimSite side_close_view";
HAnimSite1919YYY.children = new X3D.MFNode();

HAnimSite1919ZZZ.children[0] = TouchSensor1920;

let Shape1921 = browser.currentScene.createNode("Shape");
Shape1921.USE = "HAnimSiteShape";
HAnimSite1919ZZZ.children[1] = Shape1921;

let Viewpoint1922 = browser.currentScene.createNode("Viewpoint");
Viewpoint1922.DEF = "hanim_side_close_viewpoint";
Viewpoint1922.description = "side close";
Viewpoint1922.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1922.centerOfRotation = new X3D.SFVec3f([1.6,0,0]);
HAnimSite1919ZZZ.children[2] = Viewpoint1922;

let Anchor1923 = browser.currentScene.createNode("Anchor");
Anchor1923.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1923.url = new X3D.MFString([new X3D.SFString("#hanim_side_close_viewpoint")]);
let LOD1924 = browser.currentScene.createNode("LOD");
LOD1924.forceTransitions = True;
LOD1924.range = new X3D.MFFloat([0.04]);
let WorldInfo1925 = browser.currentScene.createNode("WorldInfo");
WorldInfo1925.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1924YYY.children = new X3D.MFNode();

LOD1924ZZZ.children[0] = WorldInfo1925;

let Shape1926 = browser.currentScene.createNode("Shape");
Shape1926.USE = "HAnimSiteViewpointShape";
LOD1924ZZZ.children[1] = Shape1926;

Anchor1923YYY.children = new X3D.MFNode();

Anchor1923ZZZ.children[0] = LOD1924;

HAnimSite1919ZZZ.children[3] = Anchor1923;

viewpoints[287] = HAnimSite1919;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.DEF = "hanim_head_front_close_view";
HAnimSite1927.name = "head_front_close_view";
HAnimSite1927.translation = new X3D.SFVec3f([0,1.5,1]);
let TouchSensor1928 = browser.currentScene.createNode("TouchSensor");
TouchSensor1928.description = "HAnimSite head_front_close_view";
HAnimSite1927YYY.children = new X3D.MFNode();

HAnimSite1927ZZZ.children[0] = TouchSensor1928;

let Shape1929 = browser.currentScene.createNode("Shape");
Shape1929.USE = "HAnimSiteShape";
HAnimSite1927ZZZ.children[1] = Shape1929;

let Viewpoint1930 = browser.currentScene.createNode("Viewpoint");
Viewpoint1930.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1930.description = "head front close";
Viewpoint1930.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1930.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite1927ZZZ.children[2] = Viewpoint1930;

let Anchor1931 = browser.currentScene.createNode("Anchor");
Anchor1931.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1931.url = new X3D.MFString([new X3D.SFString("#hanim_head_front_close_viewpoint")]);
let LOD1932 = browser.currentScene.createNode("LOD");
LOD1932.forceTransitions = True;
LOD1932.range = new X3D.MFFloat([0.04]);
let WorldInfo1933 = browser.currentScene.createNode("WorldInfo");
WorldInfo1933.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1932YYY.children = new X3D.MFNode();

LOD1932ZZZ.children[0] = WorldInfo1933;

let Shape1934 = browser.currentScene.createNode("Shape");
Shape1934.USE = "HAnimSiteViewpointShape";
LOD1932ZZZ.children[1] = Shape1934;

Anchor1931YYY.children = new X3D.MFNode();

Anchor1931ZZZ.children[0] = LOD1932;

HAnimSite1927ZZZ.children[3] = Anchor1931;

viewpoints[288] = HAnimSite1927;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.DEF = "hanim_chest_front_close_view";
HAnimSite1935.name = "chest_front_close_view";
HAnimSite1935.translation = new X3D.SFVec3f([0,1.2,1]);
let TouchSensor1936 = browser.currentScene.createNode("TouchSensor");
TouchSensor1936.description = "HAnimSite chest_front_close_view";
HAnimSite1935YYY.children = new X3D.MFNode();

HAnimSite1935ZZZ.children[0] = TouchSensor1936;

let Shape1937 = browser.currentScene.createNode("Shape");
Shape1937.USE = "HAnimSiteShape";
HAnimSite1935ZZZ.children[1] = Shape1937;

let Viewpoint1938 = browser.currentScene.createNode("Viewpoint");
Viewpoint1938.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1938.description = "chest front close";
Viewpoint1938.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1938.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite1935ZZZ.children[2] = Viewpoint1938;

let Anchor1939 = browser.currentScene.createNode("Anchor");
Anchor1939.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1939.url = new X3D.MFString([new X3D.SFString("#hanim_chest_front_close_viewpoint")]);
let LOD1940 = browser.currentScene.createNode("LOD");
LOD1940.forceTransitions = True;
LOD1940.range = new X3D.MFFloat([0.04]);
let WorldInfo1941 = browser.currentScene.createNode("WorldInfo");
WorldInfo1941.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1940YYY.children = new X3D.MFNode();

LOD1940ZZZ.children[0] = WorldInfo1941;

let Shape1942 = browser.currentScene.createNode("Shape");
Shape1942.USE = "HAnimSiteViewpointShape";
LOD1940ZZZ.children[1] = Shape1942;

Anchor1939YYY.children = new X3D.MFNode();

Anchor1939ZZZ.children[0] = LOD1940;

HAnimSite1935ZZZ.children[3] = Anchor1939;

viewpoints[289] = HAnimSite1935;

let HAnimSite1943 = browser.currentScene.createNode("HAnimSite");
HAnimSite1943.DEF = "hanim_pelvis_front_close_view";
HAnimSite1943.name = "pelvis_front_close_view";
HAnimSite1943.translation = new X3D.SFVec3f([0,0.8,1]);
let TouchSensor1944 = browser.currentScene.createNode("TouchSensor");
TouchSensor1944.description = "HAnimSite pelvis_front_close_view";
HAnimSite1943YYY.children = new X3D.MFNode();

HAnimSite1943ZZZ.children[0] = TouchSensor1944;

let Shape1945 = browser.currentScene.createNode("Shape");
Shape1945.USE = "HAnimSiteShape";
HAnimSite1943ZZZ.children[1] = Shape1945;

let Viewpoint1946 = browser.currentScene.createNode("Viewpoint");
Viewpoint1946.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1946.description = "pelvis front close";
Viewpoint1946.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1946.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite1943ZZZ.children[2] = Viewpoint1946;

let Anchor1947 = browser.currentScene.createNode("Anchor");
Anchor1947.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1947.url = new X3D.MFString([new X3D.SFString("#hanim_pelvis_front_close_viewpoint")]);
let LOD1948 = browser.currentScene.createNode("LOD");
LOD1948.forceTransitions = True;
LOD1948.range = new X3D.MFFloat([0.04]);
let WorldInfo1949 = browser.currentScene.createNode("WorldInfo");
WorldInfo1949.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1948YYY.children = new X3D.MFNode();

LOD1948ZZZ.children[0] = WorldInfo1949;

let Shape1950 = browser.currentScene.createNode("Shape");
Shape1950.USE = "HAnimSiteViewpointShape";
LOD1948ZZZ.children[1] = Shape1950;

Anchor1947YYY.children = new X3D.MFNode();

Anchor1947ZZZ.children[0] = LOD1948;

HAnimSite1943ZZZ.children[3] = Anchor1947;

viewpoints[290] = HAnimSite1943;

let HAnimSite1951 = browser.currentScene.createNode("HAnimSite");
HAnimSite1951.DEF = "hanim_knees_front_close_view";
HAnimSite1951.name = "knees_front_close_view";
HAnimSite1951.translation = new X3D.SFVec3f([0,0.4,1]);
let TouchSensor1952 = browser.currentScene.createNode("TouchSensor");
TouchSensor1952.description = "HAnimSite knees_front_close_view";
HAnimSite1951YYY.children = new X3D.MFNode();

HAnimSite1951ZZZ.children[0] = TouchSensor1952;

let Shape1953 = browser.currentScene.createNode("Shape");
Shape1953.USE = "HAnimSiteShape";
HAnimSite1951ZZZ.children[1] = Shape1953;

let Viewpoint1954 = browser.currentScene.createNode("Viewpoint");
Viewpoint1954.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1954.description = "knees front close";
Viewpoint1954.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1954.centerOfRotation = new X3D.SFVec3f([0,0.4,0]);
HAnimSite1951ZZZ.children[2] = Viewpoint1954;

let Anchor1955 = browser.currentScene.createNode("Anchor");
Anchor1955.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1955.url = new X3D.MFString([new X3D.SFString("#hanim_knees_front_close_viewpoint")]);
let LOD1956 = browser.currentScene.createNode("LOD");
LOD1956.forceTransitions = True;
LOD1956.range = new X3D.MFFloat([0.04]);
let WorldInfo1957 = browser.currentScene.createNode("WorldInfo");
WorldInfo1957.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1956YYY.children = new X3D.MFNode();

LOD1956ZZZ.children[0] = WorldInfo1957;

let Shape1958 = browser.currentScene.createNode("Shape");
Shape1958.USE = "HAnimSiteViewpointShape";
LOD1956ZZZ.children[1] = Shape1958;

Anchor1955YYY.children = new X3D.MFNode();

Anchor1955ZZZ.children[0] = LOD1956;

HAnimSite1951ZZZ.children[3] = Anchor1955;

viewpoints[291] = HAnimSite1951;

let HAnimSite1959 = browser.currentScene.createNode("HAnimSite");
HAnimSite1959.DEF = "hanim_feet_front_close_view";
HAnimSite1959.name = "feet_front_close_view";
HAnimSite1959.translation = new X3D.SFVec3f([0,0,1]);
let TouchSensor1960 = browser.currentScene.createNode("TouchSensor");
TouchSensor1960.description = "HAnimSite feet_front_close_view";
HAnimSite1959YYY.children = new X3D.MFNode();

HAnimSite1959ZZZ.children[0] = TouchSensor1960;

let Shape1961 = browser.currentScene.createNode("Shape");
Shape1961.USE = "HAnimSiteShape";
HAnimSite1959ZZZ.children[1] = Shape1961;

let Viewpoint1962 = browser.currentScene.createNode("Viewpoint");
Viewpoint1962.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1962.description = "feet front close";
Viewpoint1962.position = new X3D.SFVec3f([0,0,0]);
HAnimSite1959ZZZ.children[2] = Viewpoint1962;

let Anchor1963 = browser.currentScene.createNode("Anchor");
Anchor1963.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1963.url = new X3D.MFString([new X3D.SFString("#hanim_feet_front_close_viewpoint")]);
let LOD1964 = browser.currentScene.createNode("LOD");
LOD1964.forceTransitions = True;
LOD1964.range = new X3D.MFFloat([0.04]);
let WorldInfo1965 = browser.currentScene.createNode("WorldInfo");
WorldInfo1965.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1964YYY.children = new X3D.MFNode();

LOD1964ZZZ.children[0] = WorldInfo1965;

let Shape1966 = browser.currentScene.createNode("Shape");
Shape1966.USE = "HAnimSiteViewpointShape";
LOD1964ZZZ.children[1] = Shape1966;

Anchor1963YYY.children = new X3D.MFNode();

Anchor1963ZZZ.children[0] = LOD1964;

HAnimSite1959ZZZ.children[3] = Anchor1963;

viewpoints[292] = HAnimSite1959;

let HAnimSite1967 = browser.currentScene.createNode("HAnimSite");
HAnimSite1967.DEF = "hanim_eye_level_view";
HAnimSite1967.name = "eye_level_view";
HAnimSite1967.translation = new X3D.SFVec3f([0,1.6332,0.0502]);
let TouchSensor1968 = browser.currentScene.createNode("TouchSensor");
TouchSensor1968.description = "HAnimSite eye_level_view";
HAnimSite1967YYY.children = new X3D.MFNode();

HAnimSite1967ZZZ.children[0] = TouchSensor1968;

let Shape1969 = browser.currentScene.createNode("Shape");
Shape1969.USE = "HAnimSiteShape";
HAnimSite1967ZZZ.children[1] = Shape1969;

let Viewpoint1970 = browser.currentScene.createNode("Viewpoint");
Viewpoint1970.DEF = "hanim_eye_level_viewpoint";
Viewpoint1970.description = "eye level looking forward";
Viewpoint1970.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1970.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite1967ZZZ.children[2] = Viewpoint1970;

let Anchor1971 = browser.currentScene.createNode("Anchor");
Anchor1971.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1971.url = new X3D.MFString([new X3D.SFString("#hanim_eye_level_viewpoint")]);
let LOD1972 = browser.currentScene.createNode("LOD");
LOD1972.forceTransitions = True;
LOD1972.range = new X3D.MFFloat([0.04]);
let WorldInfo1973 = browser.currentScene.createNode("WorldInfo");
WorldInfo1973.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1972YYY.children = new X3D.MFNode();

LOD1972ZZZ.children[0] = WorldInfo1973;

let Shape1974 = browser.currentScene.createNode("Shape");
Shape1974.USE = "HAnimSiteViewpointShape";
LOD1972ZZZ.children[1] = Shape1974;

Anchor1971YYY.children = new X3D.MFNode();

Anchor1971ZZZ.children[0] = LOD1972;

HAnimSite1967ZZZ.children[3] = Anchor1971;

viewpoints[293] = HAnimSite1967;

let HAnimSite1975 = browser.currentScene.createNode("HAnimSite");
HAnimSite1975.USE = "hanim_l_eyeball_site_view";
viewpoints[294] = HAnimSite1975;

let HAnimSite1976 = browser.currentScene.createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_eyeball_site_view";
viewpoints[295] = HAnimSite1976;

let HAnimSite1977 = browser.currentScene.createNode("HAnimSite");
HAnimSite1977.USE = "hanim_l_hand_front_view";
viewpoints[296] = HAnimSite1977;

let HAnimSite1978 = browser.currentScene.createNode("HAnimSite");
HAnimSite1978.USE = "hanim_r_hand_front_view";
viewpoints[297] = HAnimSite1978;

browser.currentScene.children[12] = HAnimHumanoid45;

}
main ();
