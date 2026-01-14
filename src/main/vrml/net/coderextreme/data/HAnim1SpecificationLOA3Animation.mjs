const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnimSpecificationLOA3Animation.x3d");
scene.addMetaData("description", "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.");
scene.addMetaData("reference", "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds");
scene.addMetaData("reference", "HAnimSpecificationLOA3Illustrated.x3d");
scene.addMetaData("reference", "HAnimSpecificationLOA3Invisible.x3d");
scene.addMetaData("reference", "HAnimSpecificationExampleChangeLog.txt");
scene.addMetaData("reference", "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
scene.addMetaData("reference", "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
scene.addMetaData("created", "24 April 2013");
scene.addMetaData("modified", "Tue, 09 Sep 2025 19:39:08 GMT");
scene.addMetaData("error", "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported");
scene.addMetaData("Image", "HAnimSpecificationLOA3MotionH3DViewer.png");
scene.addMetaData("Image", "HAnimSpecificationLOA3MotionInstantReality.png");
scene.addMetaData("Image", "HAnimSpecificationLOA3MotionOctagaVS.png");
scene.addMetaData("Image", "HAnimSpecificationLOA3MotionView3dscene.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA1.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA2.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA3.png");
scene.addMetaData("creator", "Matthew T. Beitler, Joe D. Williams, Don Brutzman");
scene.addMetaData("translator", "Don Brutzman and Joe Williams");
scene.addMetaData("generator", "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo");
scene.addMetaData("generator", "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit");
await browser .loadComponents (scene);
let Background30 = browser.currentScene.createNode("Background");
Background30.skyColor = new X3D.MFColor([0.3,0.3,0.3]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Background30;

let NavigationInfo31 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo31;

let Group32 = browser.currentScene.createNode("Group");
Group32.DEF = "Original_WorldInfo";
let WorldInfo33 = browser.currentScene.createNode("WorldInfo");
WorldInfo33.title = "HANIM 200x Default Joint Centers, LOA3";
WorldInfo33.info = new X3D.MFString([new X3D.SFString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")]);
Group32YYY.children = new X3D.MFNode();

Group32ZZZ.children[0] = WorldInfo33;

browser.currentScene.children[2] = Group32;

let Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.description = "Humanoid LOA 3 Front";
Viewpoint34.position = new X3D.SFVec3f([0,0.4,4]);
Viewpoint34.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[3] = Viewpoint34;

let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.description = "Humanoid LOA 3 Front Close";
Viewpoint35.position = new X3D.SFVec3f([0,0.8,2]);
Viewpoint35.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[4] = Viewpoint35;

let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.description = "Humanoid LOA 3 Front Closer";
Viewpoint36.position = new X3D.SFVec3f([0,1.2,1]);
Viewpoint36.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[5] = Viewpoint36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.description = "Humanoid LOA 3 Front Face";
Viewpoint37.position = new X3D.SFVec3f([0,1.63,1]);
Viewpoint37.centerOfRotation = new X3D.SFVec3f([0,1.5,0.0016]);
browser.currentScene.children[6] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.description = "Humanoid LOA 3 Right Side";
Viewpoint38.position = new X3D.SFVec3f([2.6,0.8,0]);
Viewpoint38.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint38.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[7] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.description = "Humanoid LOA 3 Right Side Close";
Viewpoint39.position = new X3D.SFVec3f([1,0.8,0.5]);
Viewpoint39.orientation = new X3D.SFRotation([0,1,0,1.2]);
Viewpoint39.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[8] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.description = "Humanoid LOA 3 Left Side Close";
Viewpoint40.position = new X3D.SFVec3f([-1,0.8,0.5]);
Viewpoint40.orientation = new X3D.SFRotation([0,1,0,-1.2]);
Viewpoint40.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[9] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.description = "Humanoid LOA 3 Left Side";
Viewpoint41.position = new X3D.SFVec3f([-2.6,0.8,0]);
Viewpoint41.orientation = new X3D.SFRotation([0,1,0,-1.5708]);
Viewpoint41.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[10] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.description = "Humanoid LOA 3 Top";
Viewpoint42.position = new X3D.SFVec3f([0,3.5,0]);
Viewpoint42.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint42.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[11] = Viewpoint42;

let HAnimHumanoid43 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid43.DEF = "hanim_humanoid";
HAnimHumanoid43.name = "humanoid";
HAnimHumanoid43.info = new X3D.MFString([new X3D.SFString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), new X3D.SFString("authorEmail=HAnim@web3D.org"), new X3D.SFString("copyright=none"), new X3D.SFString("creationDate=12 May 1999"), new X3D.SFString("usageRestrictions=none"), new X3D.SFString("humanoidVersion=2.0"), new X3D.SFString("height=1.7504")]);
HAnimHumanoid43.version = "1.0";
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.DEF = "hanim_humanoid_root";
HAnimJoint44.name = "humanoid_root";
HAnimJoint44.center = new X3D.SFVec3f([0,0.824,0.0277]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.DEF = "hanim_sacrum";
HAnimSegment45.name = "sacrum";
let TouchSensor46 = browser.currentScene.createNode("TouchSensor");
TouchSensor46.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment45YYY.children = new X3D.MFNode();

HAnimSegment45ZZZ.children[0] = TouchSensor46;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new X3D.SFVec3f([0,0.824,0.0277]);
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.DEF = "HAnimJointShape";
let Appearance49 = browser.currentScene.createNode("Appearance");
Appearance49.DEF = "HAnimJointAppearance";
let Material50 = browser.currentScene.createNode("Material");
Material50.diffuseColor = new X3D.SFColor([1,0.5,0]);
Material50.transparency = 0.5;
material = Material50;

appearance = Appearance49;

let Sphere51 = browser.currentScene.createNode("Sphere");
Sphere51.radius = 0.006;
geometry = Sphere51;

Transform47YYY.child = new X3D.undefined();

Transform47ZZZ.child[0] = Shape48;

HAnimSegment45ZZZ.children[1] = Transform47;

let Shape52 = browser.currentScene.createNode("Shape");
let LineSet53 = browser.currentScene.createNode("LineSet");
LineSet53.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA54 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA54.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA54.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA54;

let Coordinate55 = browser.currentScene.createNode("Coordinate");
Coordinate55.point = new X3D.MFVec3f([0,0.824,0.0277,0,0.9149,0.0016]);
coord = Coordinate55;

geometry = LineSet53;

HAnimSegment45ZZZ.children[2] = Shape52;

let Shape56 = browser.currentScene.createNode("Shape");
let LineSet57 = browser.currentScene.createNode("LineSet");
LineSet57.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA58 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA58.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA58;

let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.point = new X3D.MFVec3f([0,0.824,0.0277,0.0028,1.0568,-0.0776]);
coord = Coordinate59;

geometry = LineSet57;

HAnimSegment45ZZZ.children[3] = Shape56;

HAnimJoint44YYY.children = new X3D.MFNode();

HAnimJoint44ZZZ.children[0] = HAnimSegment45;

let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.DEF = "hanim_sacroiliac";
HAnimJoint60.name = "sacroiliac";
HAnimJoint60.center = new X3D.SFVec3f([0,0.9149,0.0016]);
let HAnimSegment61 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment61.DEF = "hanim_pelvis";
HAnimSegment61.name = "pelvis";
let TouchSensor62 = browser.currentScene.createNode("TouchSensor");
TouchSensor62.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment61YYY.children = new X3D.MFNode();

HAnimSegment61ZZZ.children[0] = TouchSensor62;

let Transform63 = browser.currentScene.createNode("Transform");
Transform63.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "HAnimJointShape";
Transform63YYY.child = new X3D.undefined();

Transform63ZZZ.child[0] = Shape64;

HAnimSegment61ZZZ.children[1] = Transform63;

let Shape65 = browser.currentScene.createNode("Shape");
let LineSet66 = browser.currentScene.createNode("LineSet");
LineSet66.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA67 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA67.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA67;

let Coordinate68 = browser.currentScene.createNode("Coordinate");
Coordinate68.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
coord = Coordinate68;

geometry = LineSet66;

HAnimSegment61ZZZ.children[2] = Shape65;

let Shape69 = browser.currentScene.createNode("Shape");
let LineSet70 = browser.currentScene.createNode("LineSet");
LineSet70.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA71 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA71.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA71;

let Coordinate72 = browser.currentScene.createNode("Coordinate");
Coordinate72.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
coord = Coordinate72;

geometry = LineSet70;

HAnimSegment61ZZZ.children[3] = Shape69;

let Shape73 = browser.currentScene.createNode("Shape");
let LineSet74 = browser.currentScene.createNode("LineSet");
LineSet74.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA75 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA75.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA75.color = new X3D.MFColorRGBA([1,0,0,1,1,0,0,0.1]);
color = ColorRGBA75;

let Coordinate76 = browser.currentScene.createNode("Coordinate");
Coordinate76.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
coord = Coordinate76;

geometry = LineSet74;

HAnimSegment61ZZZ.children[4] = Shape73;

let Shape77 = browser.currentScene.createNode("Shape");
let LineSet78 = browser.currentScene.createNode("LineSet");
LineSet78.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA79 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA79.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA79;

let Coordinate80 = browser.currentScene.createNode("Coordinate");
Coordinate80.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
coord = Coordinate80;

geometry = LineSet78;

HAnimSegment61ZZZ.children[5] = Shape77;

let Shape81 = browser.currentScene.createNode("Shape");
let LineSet82 = browser.currentScene.createNode("LineSet");
LineSet82.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA83 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA83.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA83;

let Coordinate84 = browser.currentScene.createNode("Coordinate");
Coordinate84.point = new X3D.MFVec3f([0,0.9149,0.0016,0.1612,1.0537,0.0008]);
coord = Coordinate84;

geometry = LineSet82;

HAnimSegment61ZZZ.children[6] = Shape81;

let Shape85 = browser.currentScene.createNode("Shape");
let LineSet86 = browser.currentScene.createNode("LineSet");
LineSet86.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA87 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA87.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA87;

let Coordinate88 = browser.currentScene.createNode("Coordinate");
Coordinate88.point = new X3D.MFVec3f([0,0.9149,0.0016,0.1677,0.8336,0.0303]);
coord = Coordinate88;

geometry = LineSet86;

HAnimSegment61ZZZ.children[7] = Shape85;

let Shape89 = browser.currentScene.createNode("Shape");
let LineSet90 = browser.currentScene.createNode("LineSet");
LineSet90.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA91 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA91.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA91;

let Coordinate92 = browser.currentScene.createNode("Coordinate");
Coordinate92.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
coord = Coordinate92;

geometry = LineSet90;

HAnimSegment61ZZZ.children[8] = Shape89;

let Shape93 = browser.currentScene.createNode("Shape");
let LineSet94 = browser.currentScene.createNode("LineSet");
LineSet94.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA95 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA95.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA95;

let Coordinate96 = browser.currentScene.createNode("Coordinate");
Coordinate96.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0925,0.9983,0.1052]);
coord = Coordinate96;

geometry = LineSet94;

HAnimSegment61ZZZ.children[9] = Shape93;

let Shape97 = browser.currentScene.createNode("Shape");
let LineSet98 = browser.currentScene.createNode("LineSet");
LineSet98.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA99 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA99.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA99;

let Coordinate100 = browser.currentScene.createNode("Coordinate");
Coordinate100.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
coord = Coordinate100;

geometry = LineSet98;

HAnimSegment61ZZZ.children[10] = Shape97;

let Shape101 = browser.currentScene.createNode("Shape");
let LineSet102 = browser.currentScene.createNode("LineSet");
LineSet102.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA103 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA103.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA103;

let Coordinate104 = browser.currentScene.createNode("Coordinate");
Coordinate104.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0774,1.019,-0.1151]);
coord = Coordinate104;

geometry = LineSet102;

HAnimSegment61ZZZ.children[11] = Shape101;

let Shape105 = browser.currentScene.createNode("Shape");
let LineSet106 = browser.currentScene.createNode("LineSet");
LineSet106.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA107 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA107.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA107;

let Coordinate108 = browser.currentScene.createNode("Coordinate");
Coordinate108.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0034,0.8266,0.0257]);
coord = Coordinate108;

geometry = LineSet106;

HAnimSegment61ZZZ.children[12] = Shape105;

let HAnimSite109 = browser.currentScene.createNode("HAnimSite");
HAnimSite109.DEF = "hanim_r_iliocristale_pt";
HAnimSite109.name = "r_iliocristale_pt";
HAnimSite109.translation = new X3D.SFVec3f([-0.1525,1.0628,0.0035]);
let TouchSensor110 = browser.currentScene.createNode("TouchSensor");
TouchSensor110.description = "HAnimSite r_iliocristale";
HAnimSite109YYY.children = new X3D.MFNode();

HAnimSite109ZZZ.children[0] = TouchSensor110;

let Shape111 = browser.currentScene.createNode("Shape");
Shape111.DEF = "HAnimSiteShape";
let Appearance112 = browser.currentScene.createNode("Appearance");
let Material113 = browser.currentScene.createNode("Material");
Material113.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material113;

appearance = Appearance112;

let IndexedFaceSet114 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet114.DEF = "DiamondIFS";
IndexedFaceSet114.solid = False;
IndexedFaceSet114.creaseAngle = 0.5;
IndexedFaceSet114.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate115 = browser.currentScene.createNode("Coordinate");
Coordinate115.point = new X3D.MFVec3f([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
coord = Coordinate115;

geometry = IndexedFaceSet114;

HAnimSite109ZZZ.children[1] = Shape111;

HAnimSegment61ZZZ.children[13] = HAnimSite109;

let HAnimSite116 = browser.currentScene.createNode("HAnimSite");
HAnimSite116.DEF = "hanim_r_trochanterion_pt";
HAnimSite116.name = "r_trochanterion_pt";
HAnimSite116.translation = new X3D.SFVec3f([-0.1689,0.8419,0.0352]);
let TouchSensor117 = browser.currentScene.createNode("TouchSensor");
TouchSensor117.description = "HAnimSite r_trochanterion";
HAnimSite116YYY.children = new X3D.MFNode();

HAnimSite116ZZZ.children[0] = TouchSensor117;

let Shape118 = browser.currentScene.createNode("Shape");
Shape118.USE = "HAnimSiteShape";
HAnimSite116ZZZ.children[1] = Shape118;

HAnimSegment61ZZZ.children[14] = HAnimSite116;

let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.DEF = "hanim_l_iliocristale_pt";
HAnimSite119.name = "l_iliocristale_pt";
HAnimSite119.translation = new X3D.SFVec3f([0.1612,1.0537,0.0008]);
let TouchSensor120 = browser.currentScene.createNode("TouchSensor");
TouchSensor120.description = "HAnimSite l_iliocristale";
HAnimSite119YYY.children = new X3D.MFNode();

HAnimSite119ZZZ.children[0] = TouchSensor120;

let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "HAnimSiteShape";
HAnimSite119ZZZ.children[1] = Shape121;

HAnimSegment61ZZZ.children[15] = HAnimSite119;

let HAnimSite122 = browser.currentScene.createNode("HAnimSite");
HAnimSite122.DEF = "hanim_l_trochanterion_pt";
HAnimSite122.name = "l_trochanterion_pt";
HAnimSite122.translation = new X3D.SFVec3f([0.1677,0.8336,0.0303]);
let TouchSensor123 = browser.currentScene.createNode("TouchSensor");
TouchSensor123.description = "HAnimSite l_trochanterion";
HAnimSite122YYY.children = new X3D.MFNode();

HAnimSite122ZZZ.children[0] = TouchSensor123;

let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122ZZZ.children[1] = Shape124;

HAnimSegment61ZZZ.children[16] = HAnimSite122;

let HAnimSite125 = browser.currentScene.createNode("HAnimSite");
HAnimSite125.DEF = "hanim_r_asis_pt";
HAnimSite125.name = "r_asis_pt";
HAnimSite125.translation = new X3D.SFVec3f([-0.0887,1.0021,0.1112]);
let TouchSensor126 = browser.currentScene.createNode("TouchSensor");
TouchSensor126.description = "HAnimSite r_asis";
HAnimSite125YYY.children = new X3D.MFNode();

HAnimSite125ZZZ.children[0] = TouchSensor126;

let Shape127 = browser.currentScene.createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125ZZZ.children[1] = Shape127;

HAnimSegment61ZZZ.children[17] = HAnimSite125;

let HAnimSite128 = browser.currentScene.createNode("HAnimSite");
HAnimSite128.DEF = "hanim_l_asis_pt";
HAnimSite128.name = "l_asis_pt";
HAnimSite128.translation = new X3D.SFVec3f([0.0925,0.9983,0.1052]);
let TouchSensor129 = browser.currentScene.createNode("TouchSensor");
TouchSensor129.description = "HAnimSite l_asis";
HAnimSite128YYY.children = new X3D.MFNode();

HAnimSite128ZZZ.children[0] = TouchSensor129;

let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128ZZZ.children[1] = Shape130;

HAnimSegment61ZZZ.children[18] = HAnimSite128;

let HAnimSite131 = browser.currentScene.createNode("HAnimSite");
HAnimSite131.DEF = "hanim_r_psis_pt";
HAnimSite131.name = "r_psis_pt";
HAnimSite131.translation = new X3D.SFVec3f([-0.0716,1.019,-0.1138]);
let TouchSensor132 = browser.currentScene.createNode("TouchSensor");
TouchSensor132.description = "HAnimSite r_psis";
HAnimSite131YYY.children = new X3D.MFNode();

HAnimSite131ZZZ.children[0] = TouchSensor132;

let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131ZZZ.children[1] = Shape133;

HAnimSegment61ZZZ.children[19] = HAnimSite131;

let HAnimSite134 = browser.currentScene.createNode("HAnimSite");
HAnimSite134.DEF = "hanim_l_psis_pt";
HAnimSite134.name = "l_psis_pt";
HAnimSite134.translation = new X3D.SFVec3f([0.0774,1.019,-0.1151]);
let TouchSensor135 = browser.currentScene.createNode("TouchSensor");
TouchSensor135.description = "HAnimSite l_psis";
HAnimSite134YYY.children = new X3D.MFNode();

HAnimSite134ZZZ.children[0] = TouchSensor135;

let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "HAnimSiteShape";
HAnimSite134ZZZ.children[1] = Shape136;

HAnimSegment61ZZZ.children[20] = HAnimSite134;

let HAnimSite137 = browser.currentScene.createNode("HAnimSite");
HAnimSite137.DEF = "hanim_crotch_pt";
HAnimSite137.name = "crotch_pt";
HAnimSite137.translation = new X3D.SFVec3f([0.0034,0.8266,0.0257]);
let TouchSensor138 = browser.currentScene.createNode("TouchSensor");
TouchSensor138.description = "HAnimSite crotch";
HAnimSite137YYY.children = new X3D.MFNode();

HAnimSite137ZZZ.children[0] = TouchSensor138;

let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "HAnimSiteShape";
HAnimSite137ZZZ.children[1] = Shape139;

HAnimSegment61ZZZ.children[21] = HAnimSite137;

HAnimJoint60YYY.children = new X3D.MFNode();

HAnimJoint60ZZZ.children[0] = HAnimSegment61;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.DEF = "hanim_l_hip";
HAnimJoint140.name = "l_hip";
HAnimJoint140.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.DEF = "hanim_l_thigh";
HAnimSegment141.name = "l_thigh";
let TouchSensor142 = browser.currentScene.createNode("TouchSensor");
TouchSensor142.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment141YYY.children = new X3D.MFNode();

HAnimSegment141ZZZ.children[0] = TouchSensor142;

let Transform143 = browser.currentScene.createNode("Transform");
Transform143.translation = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let Shape144 = browser.currentScene.createNode("Shape");
Shape144.USE = "HAnimJointShape";
Transform143YYY.child = new X3D.undefined();

Transform143ZZZ.child[0] = Shape144;

HAnimSegment141ZZZ.children[1] = Transform143;

let Shape145 = browser.currentScene.createNode("Shape");
let LineSet146 = browser.currentScene.createNode("LineSet");
LineSet146.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA147 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA147.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA147;

let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
coord = Coordinate148;

geometry = LineSet146;

HAnimSegment141ZZZ.children[2] = Shape145;

let Shape149 = browser.currentScene.createNode("Shape");
let LineSet150 = browser.currentScene.createNode("LineSet");
LineSet150.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA151 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA151.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA151;

let Coordinate152 = browser.currentScene.createNode("Coordinate");
Coordinate152.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
coord = Coordinate152;

geometry = LineSet150;

HAnimSegment141ZZZ.children[3] = Shape149;

let Shape153 = browser.currentScene.createNode("Shape");
let LineSet154 = browser.currentScene.createNode("LineSet");
LineSet154.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA155 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA155.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA155;

let Coordinate156 = browser.currentScene.createNode("Coordinate");
Coordinate156.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
coord = Coordinate156;

geometry = LineSet154;

HAnimSegment141ZZZ.children[4] = Shape153;

let Shape157 = browser.currentScene.createNode("Shape");
let LineSet158 = browser.currentScene.createNode("LineSet");
LineSet158.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA159 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA159.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA159;

let Coordinate160 = browser.currentScene.createNode("Coordinate");
Coordinate160.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
coord = Coordinate160;

geometry = LineSet158;

HAnimSegment141ZZZ.children[5] = Shape157;

let HAnimSite161 = browser.currentScene.createNode("HAnimSite");
HAnimSite161.DEF = "hanim_l_knee_crease_pt";
HAnimSite161.name = "l_knee_crease_pt";
HAnimSite161.translation = new X3D.SFVec3f([0.0993,0.4881,-0.0309]);
let TouchSensor162 = browser.currentScene.createNode("TouchSensor");
TouchSensor162.description = "HAnimSite l_knee_crease";
HAnimSite161YYY.children = new X3D.MFNode();

HAnimSite161ZZZ.children[0] = TouchSensor162;

let Shape163 = browser.currentScene.createNode("Shape");
Shape163.USE = "HAnimSiteShape";
HAnimSite161ZZZ.children[1] = Shape163;

HAnimSegment141ZZZ.children[6] = HAnimSite161;

let HAnimSite164 = browser.currentScene.createNode("HAnimSite");
HAnimSite164.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite164.name = "l_femoral_lateral_epicn_pt";
HAnimSite164.translation = new X3D.SFVec3f([0.1598,0.4967,0.0297]);
let TouchSensor165 = browser.currentScene.createNode("TouchSensor");
TouchSensor165.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite164YYY.children = new X3D.MFNode();

HAnimSite164ZZZ.children[0] = TouchSensor165;

let Shape166 = browser.currentScene.createNode("Shape");
Shape166.USE = "HAnimSiteShape";
HAnimSite164ZZZ.children[1] = Shape166;

HAnimSegment141ZZZ.children[7] = HAnimSite164;

let HAnimSite167 = browser.currentScene.createNode("HAnimSite");
HAnimSite167.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite167.name = "l_femoral_medial_epicn_pt";
HAnimSite167.translation = new X3D.SFVec3f([0.0398,0.4946,0.0303]);
let TouchSensor168 = browser.currentScene.createNode("TouchSensor");
TouchSensor168.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite167YYY.children = new X3D.MFNode();

HAnimSite167ZZZ.children[0] = TouchSensor168;

let Shape169 = browser.currentScene.createNode("Shape");
Shape169.USE = "HAnimSiteShape";
HAnimSite167ZZZ.children[1] = Shape169;

HAnimSegment141ZZZ.children[8] = HAnimSite167;

HAnimJoint140YYY.children = new X3D.MFNode();

HAnimJoint140ZZZ.children[0] = HAnimSegment141;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.DEF = "hanim_l_knee";
HAnimJoint170.name = "l_knee";
HAnimJoint170.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let HAnimSegment171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment171.DEF = "hanim_l_calf";
HAnimSegment171.name = "l_calf";
let TouchSensor172 = browser.currentScene.createNode("TouchSensor");
TouchSensor172.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment171YYY.children = new X3D.MFNode();

HAnimSegment171ZZZ.children[0] = TouchSensor172;

let Transform173 = browser.currentScene.createNode("Transform");
Transform173.translation = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let Shape174 = browser.currentScene.createNode("Shape");
Shape174.USE = "HAnimJointShape";
Transform173YYY.child = new X3D.undefined();

Transform173ZZZ.child[0] = Shape174;

HAnimSegment171ZZZ.children[1] = Transform173;

let Shape175 = browser.currentScene.createNode("Shape");
let LineSet176 = browser.currentScene.createNode("LineSet");
LineSet176.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA177 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA177.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA177;

let Coordinate178 = browser.currentScene.createNode("Coordinate");
Coordinate178.point = new X3D.MFVec3f([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
coord = Coordinate178;

geometry = LineSet176;

HAnimSegment171ZZZ.children[2] = Shape175;

HAnimJoint170YYY.children = new X3D.MFNode();

HAnimJoint170ZZZ.children[0] = HAnimSegment171;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.DEF = "hanim_l_ankle";
HAnimJoint179.name = "l_ankle";
HAnimJoint179.rotation = new X3D.SFRotation([-0.999999999999999,0,0,0.486193023827777]);
HAnimJoint179.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let HAnimSegment180 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment180.DEF = "hanim_l_hindfoot";
HAnimSegment180.name = "l_hindfoot";
let TouchSensor181 = browser.currentScene.createNode("TouchSensor");
TouchSensor181.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment180YYY.children = new X3D.MFNode();

HAnimSegment180ZZZ.children[0] = TouchSensor181;

let Transform182 = browser.currentScene.createNode("Transform");
Transform182.translation = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let Shape183 = browser.currentScene.createNode("Shape");
Shape183.USE = "HAnimJointShape";
Transform182YYY.child = new X3D.undefined();

Transform182ZZZ.child[0] = Shape183;

HAnimSegment180ZZZ.children[1] = Transform182;

let Shape184 = browser.currentScene.createNode("Shape");
let LineSet185 = browser.currentScene.createNode("LineSet");
LineSet185.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA186 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA186.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA186;

let Coordinate187 = browser.currentScene.createNode("Coordinate");
Coordinate187.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
coord = Coordinate187;

geometry = LineSet185;

HAnimSegment180ZZZ.children[2] = Shape184;

let Shape188 = browser.currentScene.createNode("Shape");
let LineSet189 = browser.currentScene.createNode("LineSet");
LineSet189.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA190 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA190.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA190;

let Coordinate191 = browser.currentScene.createNode("Coordinate");
Coordinate191.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
coord = Coordinate191;

geometry = LineSet189;

HAnimSegment180ZZZ.children[3] = Shape188;

let Shape192 = browser.currentScene.createNode("Shape");
let LineSet193 = browser.currentScene.createNode("LineSet");
LineSet193.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA194 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA194.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA194;

let Coordinate195 = browser.currentScene.createNode("Coordinate");
Coordinate195.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
coord = Coordinate195;

geometry = LineSet193;

HAnimSegment180ZZZ.children[4] = Shape192;

let Shape196 = browser.currentScene.createNode("Shape");
let LineSet197 = browser.currentScene.createNode("LineSet");
LineSet197.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA198 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA198.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA198;

let Coordinate199 = browser.currentScene.createNode("Coordinate");
Coordinate199.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
coord = Coordinate199;

geometry = LineSet197;

HAnimSegment180ZZZ.children[5] = Shape196;

let Shape200 = browser.currentScene.createNode("Shape");
let LineSet201 = browser.currentScene.createNode("LineSet");
LineSet201.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA202 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA202.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA202;

let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
coord = Coordinate203;

geometry = LineSet201;

HAnimSegment180ZZZ.children[6] = Shape200;

let HAnimSite204 = browser.currentScene.createNode("HAnimSite");
HAnimSite204.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite204.name = "l_lateral_malleolus_pt";
HAnimSite204.translation = new X3D.SFVec3f([0.1308,0.0597,-0.1032]);
let TouchSensor205 = browser.currentScene.createNode("TouchSensor");
TouchSensor205.description = "HAnimSite l_lateral_malleolus";
HAnimSite204YYY.children = new X3D.MFNode();

HAnimSite204ZZZ.children[0] = TouchSensor205;

let Shape206 = browser.currentScene.createNode("Shape");
Shape206.USE = "HAnimSiteShape";
HAnimSite204ZZZ.children[1] = Shape206;

HAnimSegment180ZZZ.children[7] = HAnimSite204;

let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite207.name = "l_medial_malleolus_pt";
HAnimSite207.translation = new X3D.SFVec3f([0.089,0.0716,-0.0881]);
let TouchSensor208 = browser.currentScene.createNode("TouchSensor");
TouchSensor208.description = "HAnimSite l_medial_malleolus";
HAnimSite207YYY.children = new X3D.MFNode();

HAnimSite207ZZZ.children[0] = TouchSensor208;

let Shape209 = browser.currentScene.createNode("Shape");
Shape209.USE = "HAnimSiteShape";
HAnimSite207ZZZ.children[1] = Shape209;

HAnimSegment180ZZZ.children[8] = HAnimSite207;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.DEF = "hanim_l_sphyrion_pt";
HAnimSite210.name = "l_sphyrion_pt";
HAnimSite210.translation = new X3D.SFVec3f([0.089,0.0575,-0.0943]);
let TouchSensor211 = browser.currentScene.createNode("TouchSensor");
TouchSensor211.description = "HAnimSite l_sphyrion";
HAnimSite210YYY.children = new X3D.MFNode();

HAnimSite210ZZZ.children[0] = TouchSensor211;

let Shape212 = browser.currentScene.createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210ZZZ.children[1] = Shape212;

HAnimSegment180ZZZ.children[9] = HAnimSite210;

let HAnimSite213 = browser.currentScene.createNode("HAnimSite");
HAnimSite213.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite213.name = "l_calcaneous_post_pt";
HAnimSite213.translation = new X3D.SFVec3f([0.0974,0.0259,-0.1171]);
let TouchSensor214 = browser.currentScene.createNode("TouchSensor");
TouchSensor214.description = "HAnimSite l_calcaneous_post";
HAnimSite213YYY.children = new X3D.MFNode();

HAnimSite213ZZZ.children[0] = TouchSensor214;

let Shape215 = browser.currentScene.createNode("Shape");
Shape215.USE = "HAnimSiteShape";
HAnimSite213ZZZ.children[1] = Shape215;

HAnimSegment180ZZZ.children[10] = HAnimSite213;

HAnimJoint179YYY.children = new X3D.MFNode();

HAnimJoint179ZZZ.children[0] = HAnimSegment180;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.DEF = "hanim_l_subtalar";
HAnimJoint216.name = "l_subtalar";
HAnimJoint216.center = new X3D.SFVec3f([0.1086,0.0001,-0.0368]);
let HAnimSegment217 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment217.DEF = "hanim_l_midproximal";
HAnimSegment217.name = "l_midproximal";
let TouchSensor218 = browser.currentScene.createNode("TouchSensor");
TouchSensor218.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment217YYY.children = new X3D.MFNode();

HAnimSegment217ZZZ.children[0] = TouchSensor218;

let Transform219 = browser.currentScene.createNode("Transform");
Transform219.translation = new X3D.SFVec3f([0.1086,0.0001,-0.0368]);
let Shape220 = browser.currentScene.createNode("Shape");
Shape220.USE = "HAnimJointShape";
Transform219YYY.child = new X3D.undefined();

Transform219ZZZ.child[0] = Shape220;

HAnimSegment217ZZZ.children[1] = Transform219;

let Shape221 = browser.currentScene.createNode("Shape");
let LineSet222 = browser.currentScene.createNode("LineSet");
LineSet222.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA223 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA223;

let Coordinate224 = browser.currentScene.createNode("Coordinate");
Coordinate224.point = new X3D.MFVec3f([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
coord = Coordinate224;

geometry = LineSet222;

HAnimSegment217ZZZ.children[2] = Shape221;

HAnimJoint216YYY.children = new X3D.MFNode();

HAnimJoint216ZZZ.children[0] = HAnimSegment217;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.DEF = "hanim_l_midtarsal";
HAnimJoint225.name = "l_midtarsal";
HAnimJoint225.center = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let HAnimSegment226 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment226.DEF = "hanim_l_middistal";
HAnimSegment226.name = "l_middistal";
let TouchSensor227 = browser.currentScene.createNode("TouchSensor");
TouchSensor227.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment226YYY.children = new X3D.MFNode();

HAnimSegment226ZZZ.children[0] = TouchSensor227;

let Transform228 = browser.currentScene.createNode("Transform");
Transform228.translation = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let Shape229 = browser.currentScene.createNode("Shape");
Shape229.USE = "HAnimJointShape";
Transform228YYY.child = new X3D.undefined();

Transform228ZZZ.child[0] = Shape229;

HAnimSegment226ZZZ.children[1] = Transform228;

let Shape230 = browser.currentScene.createNode("Shape");
let LineSet231 = browser.currentScene.createNode("LineSet");
LineSet231.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA232 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA232.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA232;

let Coordinate233 = browser.currentScene.createNode("Coordinate");
Coordinate233.point = new X3D.MFVec3f([0.1086,0.0001,0.0368,0.1086,0,0.0762]);
coord = Coordinate233;

geometry = LineSet231;

HAnimSegment226ZZZ.children[2] = Shape230;

let Shape234 = browser.currentScene.createNode("Shape");
let LineSet235 = browser.currentScene.createNode("LineSet");
LineSet235.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA236 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA236.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA236;

let Coordinate237 = browser.currentScene.createNode("Coordinate");
Coordinate237.point = new X3D.MFVec3f([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
coord = Coordinate237;

geometry = LineSet235;

HAnimSegment226ZZZ.children[3] = Shape234;

let HAnimSite238 = browser.currentScene.createNode("HAnimSite");
HAnimSite238.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite238.name = "l_metatarsal_pha1_pt";
HAnimSite238.translation = new X3D.SFVec3f([0.0816,0.0232,0.0106]);
let TouchSensor239 = browser.currentScene.createNode("TouchSensor");
TouchSensor239.description = "HAnimSite l_metatarsal_pha1";
HAnimSite238YYY.children = new X3D.MFNode();

HAnimSite238ZZZ.children[0] = TouchSensor239;

let Shape240 = browser.currentScene.createNode("Shape");
Shape240.USE = "HAnimSiteShape";
HAnimSite238ZZZ.children[1] = Shape240;

HAnimSegment226ZZZ.children[4] = HAnimSite238;

HAnimJoint225YYY.children = new X3D.MFNode();

HAnimJoint225ZZZ.children[0] = HAnimSegment226;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.DEF = "hanim_l_metatarsal";
HAnimJoint241.name = "l_metatarsal";
HAnimJoint241.rotation = new X3D.SFRotation([-1,0,0,0.270107235459875]);
HAnimJoint241.center = new X3D.SFVec3f([0.1086,0,0.0762]);
let HAnimSegment242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment242.DEF = "hanim_l_forefoot";
HAnimSegment242.name = "l_forefoot";
let TouchSensor243 = browser.currentScene.createNode("TouchSensor");
TouchSensor243.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment242YYY.children = new X3D.MFNode();

HAnimSegment242ZZZ.children[0] = TouchSensor243;

let Transform244 = browser.currentScene.createNode("Transform");
Transform244.translation = new X3D.SFVec3f([0.1086,0,0.0762]);
let Shape245 = browser.currentScene.createNode("Shape");
Shape245.USE = "HAnimJointShape";
Transform244YYY.child = new X3D.undefined();

Transform244ZZZ.child[0] = Shape245;

HAnimSegment242ZZZ.children[1] = Transform244;

let Shape246 = browser.currentScene.createNode("Shape");
let LineSet247 = browser.currentScene.createNode("LineSet");
LineSet247.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA248 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA248.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA248;

let Coordinate249 = browser.currentScene.createNode("Coordinate");
Coordinate249.point = new X3D.MFVec3f([0.1086,0,0.0762,0.1354,0.0016,0.1476]);
coord = Coordinate249;

geometry = LineSet247;

HAnimSegment242ZZZ.children[2] = Shape246;

let Shape250 = browser.currentScene.createNode("Shape");
let LineSet251 = browser.currentScene.createNode("LineSet");
LineSet251.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA252 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA252.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA252;

let Coordinate253 = browser.currentScene.createNode("Coordinate");
Coordinate253.point = new X3D.MFVec3f([0.1086,0,0.0762,0.1825,0.007,0.0928]);
coord = Coordinate253;

geometry = LineSet251;

HAnimSegment242ZZZ.children[3] = Shape250;

let Shape254 = browser.currentScene.createNode("Shape");
let LineSet255 = browser.currentScene.createNode("LineSet");
LineSet255.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA256 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA256.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA256;

let Coordinate257 = browser.currentScene.createNode("Coordinate");
Coordinate257.point = new X3D.MFVec3f([0.1086,0,0.0762,0.1195,0.0079,0.1433]);
coord = Coordinate257;

geometry = LineSet255;

HAnimSegment242ZZZ.children[4] = Shape254;

let HAnimSite258 = browser.currentScene.createNode("HAnimSite");
HAnimSite258.DEF = "hanim_l_forefoot_tip";
HAnimSite258.name = "l_forefoot_tip";
HAnimSite258.translation = new X3D.SFVec3f([0.1354,0.0016,0.1476]);
let TouchSensor259 = browser.currentScene.createNode("TouchSensor");
TouchSensor259.description = "HAnimSite l_forefoot_tip";
HAnimSite258YYY.children = new X3D.MFNode();

HAnimSite258ZZZ.children[0] = TouchSensor259;

let Shape260 = browser.currentScene.createNode("Shape");
Shape260.USE = "HAnimSiteShape";
HAnimSite258ZZZ.children[1] = Shape260;

HAnimSegment242ZZZ.children[5] = HAnimSite258;

let HAnimSite261 = browser.currentScene.createNode("HAnimSite");
HAnimSite261.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite261.name = "l_metatarsal_pha5_pt";
HAnimSite261.translation = new X3D.SFVec3f([0.1825,0.007,0.0928]);
let TouchSensor262 = browser.currentScene.createNode("TouchSensor");
TouchSensor262.description = "HAnimSite l_metatarsal_pha5";
HAnimSite261YYY.children = new X3D.MFNode();

HAnimSite261ZZZ.children[0] = TouchSensor262;

let Shape263 = browser.currentScene.createNode("Shape");
Shape263.USE = "HAnimSiteShape";
HAnimSite261ZZZ.children[1] = Shape263;

HAnimSegment242ZZZ.children[6] = HAnimSite261;

let HAnimSite264 = browser.currentScene.createNode("HAnimSite");
HAnimSite264.DEF = "hanim_l_digit2_pt";
HAnimSite264.name = "l_digit2_pt";
HAnimSite264.translation = new X3D.SFVec3f([0.1195,0.0079,0.1433]);
let TouchSensor265 = browser.currentScene.createNode("TouchSensor");
TouchSensor265.description = "HAnimSite l_digit2";
HAnimSite264YYY.children = new X3D.MFNode();

HAnimSite264ZZZ.children[0] = TouchSensor265;

let Shape266 = browser.currentScene.createNode("Shape");
Shape266.USE = "HAnimSiteShape";
HAnimSite264ZZZ.children[1] = Shape266;

HAnimSegment242ZZZ.children[7] = HAnimSite264;

HAnimJoint241YYY.children = new X3D.MFNode();

HAnimJoint241ZZZ.children[0] = HAnimSegment242;

HAnimJoint225ZZZ.children[1] = HAnimJoint241;

HAnimJoint216ZZZ.children[1] = HAnimJoint225;

HAnimJoint179ZZZ.children[1] = HAnimJoint216;

HAnimJoint170ZZZ.children[1] = HAnimJoint179;

HAnimJoint140ZZZ.children[1] = HAnimJoint170;

HAnimJoint60ZZZ.children[1] = HAnimJoint140;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.DEF = "hanim_r_hip";
HAnimJoint267.name = "r_hip";
HAnimJoint267.rotation = new X3D.SFRotation([0.999999999999999,0,0,0.486193023827777]);
HAnimJoint267.center = new X3D.SFVec3f([-0.0961,0.9124,-0.0001]);
let HAnimSegment268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment268.DEF = "hanim_r_thigh";
HAnimSegment268.name = "r_thigh";
let TouchSensor269 = browser.currentScene.createNode("TouchSensor");
TouchSensor269.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment268YYY.children = new X3D.MFNode();

HAnimSegment268ZZZ.children[0] = TouchSensor269;

let Transform270 = browser.currentScene.createNode("Transform");
Transform270.translation = new X3D.SFVec3f([-0.0961,0.9124,-0.0001]);
let Shape271 = browser.currentScene.createNode("Shape");
Shape271.USE = "HAnimJointShape";
Transform270YYY.child = new X3D.undefined();

Transform270ZZZ.child[0] = Shape271;

HAnimSegment268ZZZ.children[1] = Transform270;

let Shape272 = browser.currentScene.createNode("Shape");
let LineSet273 = browser.currentScene.createNode("LineSet");
LineSet273.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA274 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA274.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA274;

let Coordinate275 = browser.currentScene.createNode("Coordinate");
Coordinate275.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
coord = Coordinate275;

geometry = LineSet273;

HAnimSegment268ZZZ.children[2] = Shape272;

let Shape276 = browser.currentScene.createNode("Shape");
let LineSet277 = browser.currentScene.createNode("LineSet");
LineSet277.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA278 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA278.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA278;

let Coordinate279 = browser.currentScene.createNode("Coordinate");
Coordinate279.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
coord = Coordinate279;

geometry = LineSet277;

HAnimSegment268ZZZ.children[3] = Shape276;

let Shape280 = browser.currentScene.createNode("Shape");
let LineSet281 = browser.currentScene.createNode("LineSet");
LineSet281.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA282 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA282.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA282;

let Coordinate283 = browser.currentScene.createNode("Coordinate");
Coordinate283.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
coord = Coordinate283;

geometry = LineSet281;

HAnimSegment268ZZZ.children[4] = Shape280;

let Shape284 = browser.currentScene.createNode("Shape");
let LineSet285 = browser.currentScene.createNode("LineSet");
LineSet285.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA286;

let Coordinate287 = browser.currentScene.createNode("Coordinate");
Coordinate287.point = new X3D.MFVec3f([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
coord = Coordinate287;

geometry = LineSet285;

HAnimSegment268ZZZ.children[5] = Shape284;

let HAnimSite288 = browser.currentScene.createNode("HAnimSite");
HAnimSite288.DEF = "hanim_r_knee_crease_pt";
HAnimSite288.name = "r_knee_crease_pt";
HAnimSite288.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
let TouchSensor289 = browser.currentScene.createNode("TouchSensor");
TouchSensor289.description = "HAnimSite r_knee_crease";
HAnimSite288YYY.children = new X3D.MFNode();

HAnimSite288ZZZ.children[0] = TouchSensor289;

let Shape290 = browser.currentScene.createNode("Shape");
Shape290.USE = "HAnimSiteShape";
HAnimSite288ZZZ.children[1] = Shape290;

HAnimSegment268ZZZ.children[6] = HAnimSite288;

let HAnimSite291 = browser.currentScene.createNode("HAnimSite");
HAnimSite291.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite291.name = "r_femoral_lateral_epicn_pt";
HAnimSite291.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
let TouchSensor292 = browser.currentScene.createNode("TouchSensor");
TouchSensor292.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite291YYY.children = new X3D.MFNode();

HAnimSite291ZZZ.children[0] = TouchSensor292;

let Shape293 = browser.currentScene.createNode("Shape");
Shape293.USE = "HAnimSiteShape";
HAnimSite291ZZZ.children[1] = Shape293;

HAnimSegment268ZZZ.children[7] = HAnimSite291;

let HAnimSite294 = browser.currentScene.createNode("HAnimSite");
HAnimSite294.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite294.name = "r_femoral_medial_epicn_pt";
HAnimSite294.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
let TouchSensor295 = browser.currentScene.createNode("TouchSensor");
TouchSensor295.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite294YYY.children = new X3D.MFNode();

HAnimSite294ZZZ.children[0] = TouchSensor295;

let Shape296 = browser.currentScene.createNode("Shape");
Shape296.USE = "HAnimSiteShape";
HAnimSite294ZZZ.children[1] = Shape296;

HAnimSegment268ZZZ.children[8] = HAnimSite294;

HAnimJoint267YYY.children = new X3D.MFNode();

HAnimJoint267ZZZ.children[0] = HAnimSegment268;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.DEF = "hanim_r_knee";
HAnimJoint297.name = "r_knee";
HAnimJoint297.rotation = new X3D.SFRotation([1,0,0,1.05341821829351]);
HAnimJoint297.center = new X3D.SFVec3f([-0.104,0.4867,0.0308]);
let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.DEF = "hanim_r_calf";
HAnimSegment298.name = "r_calf";
let TouchSensor299 = browser.currentScene.createNode("TouchSensor");
TouchSensor299.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment298YYY.children = new X3D.MFNode();

HAnimSegment298ZZZ.children[0] = TouchSensor299;

let Transform300 = browser.currentScene.createNode("Transform");
Transform300.translation = new X3D.SFVec3f([-0.104,0.4867,0.0308]);
let Shape301 = browser.currentScene.createNode("Shape");
Shape301.USE = "HAnimJointShape";
Transform300YYY.child = new X3D.undefined();

Transform300ZZZ.child[0] = Shape301;

HAnimSegment298ZZZ.children[1] = Transform300;

let Shape302 = browser.currentScene.createNode("Shape");
let LineSet303 = browser.currentScene.createNode("LineSet");
LineSet303.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA304 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA304.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA304;

let Coordinate305 = browser.currentScene.createNode("Coordinate");
Coordinate305.point = new X3D.MFVec3f([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
coord = Coordinate305;

geometry = LineSet303;

HAnimSegment298ZZZ.children[2] = Shape302;

HAnimJoint297YYY.children = new X3D.MFNode();

HAnimJoint297ZZZ.children[0] = HAnimSegment298;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.DEF = "hanim_r_ankle";
HAnimJoint306.name = "r_ankle";
HAnimJoint306.rotation = new X3D.SFRotation([-0.999999999999999,0,0,0.486193023827777]);
HAnimJoint306.center = new X3D.SFVec3f([-0.1101,0.0656,-0.0736]);
let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.DEF = "hanim_r_hindfoot";
HAnimSegment307.name = "r_hindfoot";
let TouchSensor308 = browser.currentScene.createNode("TouchSensor");
TouchSensor308.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment307YYY.children = new X3D.MFNode();

HAnimSegment307ZZZ.children[0] = TouchSensor308;

let Transform309 = browser.currentScene.createNode("Transform");
Transform309.translation = new X3D.SFVec3f([-0.1101,0.0656,-0.0736]);
let Shape310 = browser.currentScene.createNode("Shape");
Shape310.USE = "HAnimJointShape";
Transform309YYY.child = new X3D.undefined();

Transform309ZZZ.child[0] = Shape310;

HAnimSegment307ZZZ.children[1] = Transform309;

let Shape311 = browser.currentScene.createNode("Shape");
let LineSet312 = browser.currentScene.createNode("LineSet");
LineSet312.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA313 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA313;

let Coordinate314 = browser.currentScene.createNode("Coordinate");
Coordinate314.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
coord = Coordinate314;

geometry = LineSet312;

HAnimSegment307ZZZ.children[2] = Shape311;

let Shape315 = browser.currentScene.createNode("Shape");
let LineSet316 = browser.currentScene.createNode("LineSet");
LineSet316.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA317 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA317.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA317;

let Coordinate318 = browser.currentScene.createNode("Coordinate");
Coordinate318.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
coord = Coordinate318;

geometry = LineSet316;

HAnimSegment307ZZZ.children[3] = Shape315;

let Shape319 = browser.currentScene.createNode("Shape");
let LineSet320 = browser.currentScene.createNode("LineSet");
LineSet320.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA321 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA321.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA321;

let Coordinate322 = browser.currentScene.createNode("Coordinate");
Coordinate322.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
coord = Coordinate322;

geometry = LineSet320;

HAnimSegment307ZZZ.children[4] = Shape319;

let Shape323 = browser.currentScene.createNode("Shape");
let LineSet324 = browser.currentScene.createNode("LineSet");
LineSet324.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA325 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA325.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA325;

let Coordinate326 = browser.currentScene.createNode("Coordinate");
Coordinate326.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
coord = Coordinate326;

geometry = LineSet324;

HAnimSegment307ZZZ.children[5] = Shape323;

let Shape327 = browser.currentScene.createNode("Shape");
let LineSet328 = browser.currentScene.createNode("LineSet");
LineSet328.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA329 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA329.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA329;

let Coordinate330 = browser.currentScene.createNode("Coordinate");
Coordinate330.point = new X3D.MFVec3f([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
coord = Coordinate330;

geometry = LineSet328;

HAnimSegment307ZZZ.children[6] = Shape327;

let HAnimSite331 = browser.currentScene.createNode("HAnimSite");
HAnimSite331.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite331.name = "r_lateral_malleolus_pt";
HAnimSite331.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
let TouchSensor332 = browser.currentScene.createNode("TouchSensor");
TouchSensor332.description = "HAnimSite r_lateral_malleolus";
HAnimSite331YYY.children = new X3D.MFNode();

HAnimSite331ZZZ.children[0] = TouchSensor332;

let Shape333 = browser.currentScene.createNode("Shape");
Shape333.USE = "HAnimSiteShape";
HAnimSite331ZZZ.children[1] = Shape333;

HAnimSegment307ZZZ.children[7] = HAnimSite331;

let HAnimSite334 = browser.currentScene.createNode("HAnimSite");
HAnimSite334.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite334.name = "r_medial_malleolus_pt";
HAnimSite334.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
let TouchSensor335 = browser.currentScene.createNode("TouchSensor");
TouchSensor335.description = "HAnimSite r_medial_malleolus";
HAnimSite334YYY.children = new X3D.MFNode();

HAnimSite334ZZZ.children[0] = TouchSensor335;

let Shape336 = browser.currentScene.createNode("Shape");
Shape336.USE = "HAnimSiteShape";
HAnimSite334ZZZ.children[1] = Shape336;

HAnimSegment307ZZZ.children[8] = HAnimSite334;

let HAnimSite337 = browser.currentScene.createNode("HAnimSite");
HAnimSite337.DEF = "hanim_r_sphyrion_pt";
HAnimSite337.name = "r_sphyrion_pt";
HAnimSite337.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
let TouchSensor338 = browser.currentScene.createNode("TouchSensor");
TouchSensor338.description = "HAnimSite r_sphyrion";
HAnimSite337YYY.children = new X3D.MFNode();

HAnimSite337ZZZ.children[0] = TouchSensor338;

let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "HAnimSiteShape";
HAnimSite337ZZZ.children[1] = Shape339;

HAnimSegment307ZZZ.children[9] = HAnimSite337;

let HAnimSite340 = browser.currentScene.createNode("HAnimSite");
HAnimSite340.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite340.name = "r_calcaneous_post_pt";
HAnimSite340.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
let TouchSensor341 = browser.currentScene.createNode("TouchSensor");
TouchSensor341.description = "HAnimSite r_calcaneous_post";
HAnimSite340YYY.children = new X3D.MFNode();

HAnimSite340ZZZ.children[0] = TouchSensor341;

let Shape342 = browser.currentScene.createNode("Shape");
Shape342.USE = "HAnimSiteShape";
HAnimSite340ZZZ.children[1] = Shape342;

HAnimSegment307ZZZ.children[10] = HAnimSite340;

HAnimJoint306YYY.children = new X3D.MFNode();

HAnimJoint306ZZZ.children[0] = HAnimSegment307;

let HAnimJoint343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint343.DEF = "hanim_r_subtalar";
HAnimJoint343.name = "r_subtalar";
HAnimJoint343.center = new X3D.SFVec3f([-0.1086,0.0001,-0.0368]);
let HAnimSegment344 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment344.DEF = "hanim_r_midproximal";
HAnimSegment344.name = "r_midproximal";
let TouchSensor345 = browser.currentScene.createNode("TouchSensor");
TouchSensor345.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment344YYY.children = new X3D.MFNode();

HAnimSegment344ZZZ.children[0] = TouchSensor345;

let Transform346 = browser.currentScene.createNode("Transform");
Transform346.translation = new X3D.SFVec3f([-0.1086,0.0001,-0.0368]);
let Shape347 = browser.currentScene.createNode("Shape");
Shape347.USE = "HAnimJointShape";
Transform346YYY.child = new X3D.undefined();

Transform346ZZZ.child[0] = Shape347;

HAnimSegment344ZZZ.children[1] = Transform346;

let Shape348 = browser.currentScene.createNode("Shape");
let LineSet349 = browser.currentScene.createNode("LineSet");
LineSet349.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA350 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA350.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA350;

let Coordinate351 = browser.currentScene.createNode("Coordinate");
Coordinate351.point = new X3D.MFVec3f([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
coord = Coordinate351;

geometry = LineSet349;

HAnimSegment344ZZZ.children[2] = Shape348;

HAnimJoint343YYY.children = new X3D.MFNode();

HAnimJoint343ZZZ.children[0] = HAnimSegment344;

let HAnimJoint352 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint352.DEF = "hanim_r_midtarsal";
HAnimJoint352.name = "r_midtarsal";
HAnimJoint352.center = new X3D.SFVec3f([-0.1086,0.0001,0.0368]);
let HAnimSegment353 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment353.DEF = "hanim_r_middistal";
HAnimSegment353.name = "r_middistal";
let TouchSensor354 = browser.currentScene.createNode("TouchSensor");
TouchSensor354.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment353YYY.children = new X3D.MFNode();

HAnimSegment353ZZZ.children[0] = TouchSensor354;

let Transform355 = browser.currentScene.createNode("Transform");
Transform355.translation = new X3D.SFVec3f([-0.1086,0.0001,0.0368]);
let Shape356 = browser.currentScene.createNode("Shape");
Shape356.USE = "HAnimJointShape";
Transform355YYY.child = new X3D.undefined();

Transform355ZZZ.child[0] = Shape356;

HAnimSegment353ZZZ.children[1] = Transform355;

let Shape357 = browser.currentScene.createNode("Shape");
let LineSet358 = browser.currentScene.createNode("LineSet");
LineSet358.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA359 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA359.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA359;

let Coordinate360 = browser.currentScene.createNode("Coordinate");
Coordinate360.point = new X3D.MFVec3f([-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
coord = Coordinate360;

geometry = LineSet358;

HAnimSegment353ZZZ.children[2] = Shape357;

let Shape361 = browser.currentScene.createNode("Shape");
let LineSet362 = browser.currentScene.createNode("LineSet");
LineSet362.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA363 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA363.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA363;

let Coordinate364 = browser.currentScene.createNode("Coordinate");
Coordinate364.point = new X3D.MFVec3f([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
coord = Coordinate364;

geometry = LineSet362;

HAnimSegment353ZZZ.children[3] = Shape361;

let HAnimSite365 = browser.currentScene.createNode("HAnimSite");
HAnimSite365.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite365.name = "r_metatarsal_pha1_pt";
HAnimSite365.translation = new X3D.SFVec3f([-0.0521,0.026,0.0127]);
let TouchSensor366 = browser.currentScene.createNode("TouchSensor");
TouchSensor366.description = "HAnimSite r_metatarsal_pha1";
HAnimSite365YYY.children = new X3D.MFNode();

HAnimSite365ZZZ.children[0] = TouchSensor366;

let Shape367 = browser.currentScene.createNode("Shape");
Shape367.USE = "HAnimSiteShape";
HAnimSite365ZZZ.children[1] = Shape367;

HAnimSegment353ZZZ.children[4] = HAnimSite365;

HAnimJoint352YYY.children = new X3D.MFNode();

HAnimJoint352ZZZ.children[0] = HAnimSegment353;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.DEF = "hanim_r_metatarsal";
HAnimJoint368.name = "r_metatarsal";
HAnimJoint368.rotation = new X3D.SFRotation([-1,0,0,0.270107235459875]);
HAnimJoint368.center = new X3D.SFVec3f([-0.1086,0,0.0762]);
let HAnimSegment369 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment369.DEF = "hanim_r_forefoot";
HAnimSegment369.name = "r_forefoot";
let TouchSensor370 = browser.currentScene.createNode("TouchSensor");
TouchSensor370.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment369YYY.children = new X3D.MFNode();

HAnimSegment369ZZZ.children[0] = TouchSensor370;

let Transform371 = browser.currentScene.createNode("Transform");
Transform371.translation = new X3D.SFVec3f([-0.1086,0,0.0762]);
let Shape372 = browser.currentScene.createNode("Shape");
Shape372.USE = "HAnimJointShape";
Transform371YYY.child = new X3D.undefined();

Transform371ZZZ.child[0] = Shape372;

HAnimSegment369ZZZ.children[1] = Transform371;

let Shape373 = browser.currentScene.createNode("Shape");
let LineSet374 = browser.currentScene.createNode("LineSet");
LineSet374.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA375 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA375.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA375;

let Coordinate376 = browser.currentScene.createNode("Coordinate");
Coordinate376.point = new X3D.MFVec3f([-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
coord = Coordinate376;

geometry = LineSet374;

HAnimSegment369ZZZ.children[2] = Shape373;

let Shape377 = browser.currentScene.createNode("Shape");
let LineSet378 = browser.currentScene.createNode("LineSet");
LineSet378.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA379 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA379.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA379;

let Coordinate380 = browser.currentScene.createNode("Coordinate");
Coordinate380.point = new X3D.MFVec3f([-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
coord = Coordinate380;

geometry = LineSet378;

HAnimSegment369ZZZ.children[3] = Shape377;

let Shape381 = browser.currentScene.createNode("Shape");
let LineSet382 = browser.currentScene.createNode("LineSet");
LineSet382.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA383 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA383.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA383;

let Coordinate384 = browser.currentScene.createNode("Coordinate");
Coordinate384.point = new X3D.MFVec3f([-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
coord = Coordinate384;

geometry = LineSet382;

HAnimSegment369ZZZ.children[4] = Shape381;

let HAnimSite385 = browser.currentScene.createNode("HAnimSite");
HAnimSite385.DEF = "hanim_r_forefoot_tip";
HAnimSite385.name = "r_forefoot_tip";
HAnimSite385.translation = new X3D.SFVec3f([-0.1043,0.0227,0.145]);
let TouchSensor386 = browser.currentScene.createNode("TouchSensor");
TouchSensor386.description = "HAnimSite r_forefoot_tip";
HAnimSite385YYY.children = new X3D.MFNode();

HAnimSite385ZZZ.children[0] = TouchSensor386;

let Shape387 = browser.currentScene.createNode("Shape");
Shape387.USE = "HAnimSiteShape";
HAnimSite385ZZZ.children[1] = Shape387;

HAnimSegment369ZZZ.children[5] = HAnimSite385;

let HAnimSite388 = browser.currentScene.createNode("HAnimSite");
HAnimSite388.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite388.name = "r_metatarsal_pha5_pt";
HAnimSite388.translation = new X3D.SFVec3f([-0.1523,0.0166,0.0895]);
let TouchSensor389 = browser.currentScene.createNode("TouchSensor");
TouchSensor389.description = "HAnimSite r_metatarsal_pha5";
HAnimSite388YYY.children = new X3D.MFNode();

HAnimSite388ZZZ.children[0] = TouchSensor389;

let Shape390 = browser.currentScene.createNode("Shape");
Shape390.USE = "HAnimSiteShape";
HAnimSite388ZZZ.children[1] = Shape390;

HAnimSegment369ZZZ.children[6] = HAnimSite388;

let HAnimSite391 = browser.currentScene.createNode("HAnimSite");
HAnimSite391.DEF = "hanim_r_digit2_pt";
HAnimSite391.name = "r_digit2_pt";
HAnimSite391.translation = new X3D.SFVec3f([-0.0883,0.0134,0.1383]);
let TouchSensor392 = browser.currentScene.createNode("TouchSensor");
TouchSensor392.description = "HAnimSite r_digit2";
HAnimSite391YYY.children = new X3D.MFNode();

HAnimSite391ZZZ.children[0] = TouchSensor392;

let Shape393 = browser.currentScene.createNode("Shape");
Shape393.USE = "HAnimSiteShape";
HAnimSite391ZZZ.children[1] = Shape393;

HAnimSegment369ZZZ.children[7] = HAnimSite391;

HAnimJoint368YYY.children = new X3D.MFNode();

HAnimJoint368ZZZ.children[0] = HAnimSegment369;

HAnimJoint352ZZZ.children[1] = HAnimJoint368;

HAnimJoint343ZZZ.children[1] = HAnimJoint352;

HAnimJoint306ZZZ.children[1] = HAnimJoint343;

HAnimJoint297ZZZ.children[1] = HAnimJoint306;

HAnimJoint267ZZZ.children[1] = HAnimJoint297;

HAnimJoint60ZZZ.children[2] = HAnimJoint267;

HAnimJoint44ZZZ.children[1] = HAnimJoint60;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.DEF = "hanim_vl5";
HAnimJoint394.name = "vl5";
HAnimJoint394.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let HAnimSegment395 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment395.DEF = "hanim_l5";
HAnimSegment395.name = "l5";
let TouchSensor396 = browser.currentScene.createNode("TouchSensor");
TouchSensor396.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment395YYY.children = new X3D.MFNode();

HAnimSegment395ZZZ.children[0] = TouchSensor396;

let Transform397 = browser.currentScene.createNode("Transform");
Transform397.translation = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let Shape398 = browser.currentScene.createNode("Shape");
Shape398.USE = "HAnimJointShape";
Transform397YYY.child = new X3D.undefined();

Transform397ZZZ.child[0] = Shape398;

HAnimSegment395ZZZ.children[1] = Transform397;

let Shape399 = browser.currentScene.createNode("Shape");
let LineSet400 = browser.currentScene.createNode("LineSet");
LineSet400.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA401 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA401.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA401;

let Coordinate402 = browser.currentScene.createNode("Coordinate");
Coordinate402.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
coord = Coordinate402;

geometry = LineSet400;

HAnimSegment395ZZZ.children[2] = Shape399;

let Shape403 = browser.currentScene.createNode("Shape");
let LineSet404 = browser.currentScene.createNode("LineSet");
LineSet404.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA405 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA405.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA405;

let Coordinate406 = browser.currentScene.createNode("Coordinate");
Coordinate406.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
coord = Coordinate406;

geometry = LineSet404;

HAnimSegment395ZZZ.children[3] = Shape403;

let Shape407 = browser.currentScene.createNode("Shape");
let LineSet408 = browser.currentScene.createNode("LineSet");
LineSet408.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA409 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA409.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA409;

let Coordinate410 = browser.currentScene.createNode("Coordinate");
Coordinate410.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
coord = Coordinate410;

geometry = LineSet408;

HAnimSegment395ZZZ.children[4] = Shape407;

let HAnimSite411 = browser.currentScene.createNode("HAnimSite");
HAnimSite411.DEF = "hanim_waist_preferred_post_pt";
HAnimSite411.name = "waist_preferred_post_pt";
HAnimSite411.translation = new X3D.SFVec3f([0,1.0915,-0.1091]);
let TouchSensor412 = browser.currentScene.createNode("TouchSensor");
TouchSensor412.description = "HAnimSite waist_preferred_post";
HAnimSite411YYY.children = new X3D.MFNode();

HAnimSite411ZZZ.children[0] = TouchSensor412;

let Shape413 = browser.currentScene.createNode("Shape");
Shape413.USE = "HAnimSiteShape";
HAnimSite411ZZZ.children[1] = Shape413;

HAnimSegment395ZZZ.children[5] = HAnimSite411;

let HAnimSite414 = browser.currentScene.createNode("HAnimSite");
HAnimSite414.DEF = "hanim_navel_pt";
HAnimSite414.name = "navel_pt";
HAnimSite414.translation = new X3D.SFVec3f([0.0069,1.0966,0.1017]);
let TouchSensor415 = browser.currentScene.createNode("TouchSensor");
TouchSensor415.description = "HAnimSite navel";
HAnimSite414YYY.children = new X3D.MFNode();

HAnimSite414ZZZ.children[0] = TouchSensor415;

let Shape416 = browser.currentScene.createNode("Shape");
Shape416.USE = "HAnimSiteShape";
HAnimSite414ZZZ.children[1] = Shape416;

HAnimSegment395ZZZ.children[6] = HAnimSite414;

HAnimJoint394YYY.children = new X3D.MFNode();

HAnimJoint394ZZZ.children[0] = HAnimSegment395;

let HAnimJoint417 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint417.DEF = "hanim_vl4";
HAnimJoint417.name = "vl4";
HAnimJoint417.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let HAnimSegment418 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment418.DEF = "hanim_l4";
HAnimSegment418.name = "l4";
let TouchSensor419 = browser.currentScene.createNode("TouchSensor");
TouchSensor419.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment418YYY.children = new X3D.MFNode();

HAnimSegment418ZZZ.children[0] = TouchSensor419;

let Transform420 = browser.currentScene.createNode("Transform");
Transform420.translation = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let Shape421 = browser.currentScene.createNode("Shape");
Shape421.USE = "HAnimJointShape";
Transform420YYY.child = new X3D.undefined();

Transform420ZZZ.child[0] = Shape421;

HAnimSegment418ZZZ.children[1] = Transform420;

let Shape422 = browser.currentScene.createNode("Shape");
let LineSet423 = browser.currentScene.createNode("LineSet");
LineSet423.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA424 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA424.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA424;

let Coordinate425 = browser.currentScene.createNode("Coordinate");
Coordinate425.point = new X3D.MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
coord = Coordinate425;

geometry = LineSet423;

HAnimSegment418ZZZ.children[2] = Shape422;

HAnimJoint417YYY.children = new X3D.MFNode();

HAnimJoint417ZZZ.children[0] = HAnimSegment418;

let HAnimJoint426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint426.DEF = "hanim_vl3";
HAnimJoint426.name = "vl3";
HAnimJoint426.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let HAnimSegment427 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment427.DEF = "hanim_l3";
HAnimSegment427.name = "l3";
let TouchSensor428 = browser.currentScene.createNode("TouchSensor");
TouchSensor428.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment427YYY.children = new X3D.MFNode();

HAnimSegment427ZZZ.children[0] = TouchSensor428;

let Transform429 = browser.currentScene.createNode("Transform");
Transform429.translation = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let Shape430 = browser.currentScene.createNode("Shape");
Shape430.USE = "HAnimJointShape";
Transform429YYY.child = new X3D.undefined();

Transform429ZZZ.child[0] = Shape430;

HAnimSegment427ZZZ.children[1] = Transform429;

let Shape431 = browser.currentScene.createNode("Shape");
let LineSet432 = browser.currentScene.createNode("LineSet");
LineSet432.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA433 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA433.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA433;

let Coordinate434 = browser.currentScene.createNode("Coordinate");
Coordinate434.point = new X3D.MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
coord = Coordinate434;

geometry = LineSet432;

HAnimSegment427ZZZ.children[2] = Shape431;

HAnimJoint426YYY.children = new X3D.MFNode();

HAnimJoint426ZZZ.children[0] = HAnimSegment427;

let HAnimJoint435 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint435.DEF = "hanim_vl2";
HAnimJoint435.name = "vl2";
HAnimJoint435.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let HAnimSegment436 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment436.DEF = "hanim_l2";
HAnimSegment436.name = "l2";
let TouchSensor437 = browser.currentScene.createNode("TouchSensor");
TouchSensor437.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment436YYY.children = new X3D.MFNode();

HAnimSegment436ZZZ.children[0] = TouchSensor437;

let Transform438 = browser.currentScene.createNode("Transform");
Transform438.translation = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let Shape439 = browser.currentScene.createNode("Shape");
Shape439.USE = "HAnimJointShape";
Transform438YYY.child = new X3D.undefined();

Transform438ZZZ.child[0] = Shape439;

HAnimSegment436ZZZ.children[1] = Transform438;

let Shape440 = browser.currentScene.createNode("Shape");
let LineSet441 = browser.currentScene.createNode("LineSet");
LineSet441.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA442 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA442.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA442;

let Coordinate443 = browser.currentScene.createNode("Coordinate");
Coordinate443.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
coord = Coordinate443;

geometry = LineSet441;

HAnimSegment436ZZZ.children[2] = Shape440;

let Shape444 = browser.currentScene.createNode("Shape");
let LineSet445 = browser.currentScene.createNode("LineSet");
LineSet445.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA446 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA446;

let Coordinate447 = browser.currentScene.createNode("Coordinate");
Coordinate447.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
coord = Coordinate447;

geometry = LineSet445;

HAnimSegment436ZZZ.children[3] = Shape444;

let Shape448 = browser.currentScene.createNode("Shape");
let LineSet449 = browser.currentScene.createNode("LineSet");
LineSet449.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA450 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA450.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA450;

let Coordinate451 = browser.currentScene.createNode("Coordinate");
Coordinate451.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
coord = Coordinate451;

geometry = LineSet449;

HAnimSegment436ZZZ.children[4] = Shape448;

let Shape452 = browser.currentScene.createNode("Shape");
let LineSet453 = browser.currentScene.createNode("LineSet");
LineSet453.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA454 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA454;

let Coordinate455 = browser.currentScene.createNode("Coordinate");
Coordinate455.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
coord = Coordinate455;

geometry = LineSet453;

HAnimSegment436ZZZ.children[5] = Shape452;

let HAnimSite456 = browser.currentScene.createNode("HAnimSite");
HAnimSite456.DEF = "hanim_r_rib10_pt";
HAnimSite456.name = "r_rib10_pt";
HAnimSite456.translation = new X3D.SFVec3f([-0.0711,1.1941,0.1016]);
let TouchSensor457 = browser.currentScene.createNode("TouchSensor");
TouchSensor457.description = "HAnimSite r_rib10";
HAnimSite456YYY.children = new X3D.MFNode();

HAnimSite456ZZZ.children[0] = TouchSensor457;

let Shape458 = browser.currentScene.createNode("Shape");
Shape458.USE = "HAnimSiteShape";
HAnimSite456ZZZ.children[1] = Shape458;

HAnimSegment436ZZZ.children[6] = HAnimSite456;

let HAnimSite459 = browser.currentScene.createNode("HAnimSite");
HAnimSite459.DEF = "hanim_l_rib10_pt";
HAnimSite459.name = "l_rib10_pt";
HAnimSite459.translation = new X3D.SFVec3f([0.0871,1.1925,0.0992]);
let TouchSensor460 = browser.currentScene.createNode("TouchSensor");
TouchSensor460.description = "HAnimSite l_rib10";
HAnimSite459YYY.children = new X3D.MFNode();

HAnimSite459ZZZ.children[0] = TouchSensor460;

let Shape461 = browser.currentScene.createNode("Shape");
Shape461.USE = "HAnimSiteShape";
HAnimSite459ZZZ.children[1] = Shape461;

HAnimSegment436ZZZ.children[7] = HAnimSite459;

let HAnimSite462 = browser.currentScene.createNode("HAnimSite");
HAnimSite462.DEF = "hanim_rib10_midspine_pt";
HAnimSite462.name = "rib10_midspine_pt";
HAnimSite462.translation = new X3D.SFVec3f([0.0049,1.1908,-0.1113]);
let TouchSensor463 = browser.currentScene.createNode("TouchSensor");
TouchSensor463.description = "HAnimSite rib10_midspine";
HAnimSite462YYY.children = new X3D.MFNode();

HAnimSite462ZZZ.children[0] = TouchSensor463;

let Shape464 = browser.currentScene.createNode("Shape");
Shape464.USE = "HAnimSiteShape";
HAnimSite462ZZZ.children[1] = Shape464;

HAnimSegment436ZZZ.children[8] = HAnimSite462;

HAnimJoint435YYY.children = new X3D.MFNode();

HAnimJoint435ZZZ.children[0] = HAnimSegment436;

let HAnimJoint465 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint465.DEF = "hanim_vl1";
HAnimJoint465.name = "vl1";
HAnimJoint465.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let HAnimSegment466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment466.DEF = "hanim_l1";
HAnimSegment466.name = "l1";
let TouchSensor467 = browser.currentScene.createNode("TouchSensor");
TouchSensor467.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment466YYY.children = new X3D.MFNode();

HAnimSegment466ZZZ.children[0] = TouchSensor467;

let Transform468 = browser.currentScene.createNode("Transform");
Transform468.translation = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let Shape469 = browser.currentScene.createNode("Shape");
Shape469.USE = "HAnimJointShape";
Transform468YYY.child = new X3D.undefined();

Transform468ZZZ.child[0] = Shape469;

HAnimSegment466ZZZ.children[1] = Transform468;

let Shape470 = browser.currentScene.createNode("Shape");
let LineSet471 = browser.currentScene.createNode("LineSet");
LineSet471.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA472 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA472.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA472;

let Coordinate473 = browser.currentScene.createNode("Coordinate");
Coordinate473.point = new X3D.MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
coord = Coordinate473;

geometry = LineSet471;

HAnimSegment466ZZZ.children[2] = Shape470;

HAnimJoint465YYY.children = new X3D.MFNode();

HAnimJoint465ZZZ.children[0] = HAnimSegment466;

let HAnimJoint474 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint474.DEF = "hanim_vt12";
HAnimJoint474.name = "vt12";
HAnimJoint474.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let HAnimSegment475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment475.DEF = "hanim_t12";
HAnimSegment475.name = "t12";
let TouchSensor476 = browser.currentScene.createNode("TouchSensor");
TouchSensor476.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment475YYY.children = new X3D.MFNode();

HAnimSegment475ZZZ.children[0] = TouchSensor476;

let Transform477 = browser.currentScene.createNode("Transform");
Transform477.translation = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let Shape478 = browser.currentScene.createNode("Shape");
Shape478.USE = "HAnimJointShape";
Transform477YYY.child = new X3D.undefined();

Transform477ZZZ.child[0] = Shape478;

HAnimSegment475ZZZ.children[1] = Transform477;

let Shape479 = browser.currentScene.createNode("Shape");
let LineSet480 = browser.currentScene.createNode("LineSet");
LineSet480.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA481 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA481.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA481;

let Coordinate482 = browser.currentScene.createNode("Coordinate");
Coordinate482.point = new X3D.MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
coord = Coordinate482;

geometry = LineSet480;

HAnimSegment475ZZZ.children[2] = Shape479;

HAnimJoint474YYY.children = new X3D.MFNode();

HAnimJoint474ZZZ.children[0] = HAnimSegment475;

let HAnimJoint483 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint483.DEF = "hanim_vt11";
HAnimJoint483.name = "vt11";
HAnimJoint483.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let HAnimSegment484 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment484.DEF = "hanim_t11";
HAnimSegment484.name = "t11";
let TouchSensor485 = browser.currentScene.createNode("TouchSensor");
TouchSensor485.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment484YYY.children = new X3D.MFNode();

HAnimSegment484ZZZ.children[0] = TouchSensor485;

let Transform486 = browser.currentScene.createNode("Transform");
Transform486.translation = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let Shape487 = browser.currentScene.createNode("Shape");
Shape487.USE = "HAnimJointShape";
Transform486YYY.child = new X3D.undefined();

Transform486ZZZ.child[0] = Shape487;

HAnimSegment484ZZZ.children[1] = Transform486;

let Shape488 = browser.currentScene.createNode("Shape");
let LineSet489 = browser.currentScene.createNode("LineSet");
LineSet489.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA490 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA490;

let Coordinate491 = browser.currentScene.createNode("Coordinate");
Coordinate491.point = new X3D.MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
coord = Coordinate491;

geometry = LineSet489;

HAnimSegment484ZZZ.children[2] = Shape488;

HAnimJoint483YYY.children = new X3D.MFNode();

HAnimJoint483ZZZ.children[0] = HAnimSegment484;

let HAnimJoint492 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint492.DEF = "hanim_vt10";
HAnimJoint492.name = "vt10";
HAnimJoint492.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let HAnimSegment493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment493.DEF = "hanim_t10";
HAnimSegment493.name = "t10";
let TouchSensor494 = browser.currentScene.createNode("TouchSensor");
TouchSensor494.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment493YYY.children = new X3D.MFNode();

HAnimSegment493ZZZ.children[0] = TouchSensor494;

let Transform495 = browser.currentScene.createNode("Transform");
Transform495.translation = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let Shape496 = browser.currentScene.createNode("Shape");
Shape496.USE = "HAnimJointShape";
Transform495YYY.child = new X3D.undefined();

Transform495ZZZ.child[0] = Shape496;

HAnimSegment493ZZZ.children[1] = Transform495;

let Shape497 = browser.currentScene.createNode("Shape");
let LineSet498 = browser.currentScene.createNode("LineSet");
LineSet498.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA499 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA499.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA499;

let Coordinate500 = browser.currentScene.createNode("Coordinate");
Coordinate500.point = new X3D.MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
coord = Coordinate500;

geometry = LineSet498;

HAnimSegment493ZZZ.children[2] = Shape497;

let Shape501 = browser.currentScene.createNode("Shape");
let LineSet502 = browser.currentScene.createNode("LineSet");
LineSet502.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA503 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA503.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA503;

let Coordinate504 = browser.currentScene.createNode("Coordinate");
Coordinate504.point = new X3D.MFVec3f([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
coord = Coordinate504;

geometry = LineSet502;

HAnimSegment493ZZZ.children[3] = Shape501;

let HAnimSite505 = browser.currentScene.createNode("HAnimSite");
HAnimSite505.DEF = "hanim_substernale_pt";
HAnimSite505.name = "substernale_pt";
HAnimSite505.translation = new X3D.SFVec3f([0.0085,1.2995,0.1147]);
let TouchSensor506 = browser.currentScene.createNode("TouchSensor");
TouchSensor506.description = "HAnimSite substernale";
HAnimSite505YYY.children = new X3D.MFNode();

HAnimSite505ZZZ.children[0] = TouchSensor506;

let Shape507 = browser.currentScene.createNode("Shape");
Shape507.USE = "HAnimSiteShape";
HAnimSite505ZZZ.children[1] = Shape507;

HAnimSegment493ZZZ.children[4] = HAnimSite505;

HAnimJoint492YYY.children = new X3D.MFNode();

HAnimJoint492ZZZ.children[0] = HAnimSegment493;

let HAnimJoint508 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint508.DEF = "hanim_vt9";
HAnimJoint508.name = "vt9";
HAnimJoint508.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let HAnimSegment509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment509.DEF = "hanim_t9";
HAnimSegment509.name = "t9";
let TouchSensor510 = browser.currentScene.createNode("TouchSensor");
TouchSensor510.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment509YYY.children = new X3D.MFNode();

HAnimSegment509ZZZ.children[0] = TouchSensor510;

let Transform511 = browser.currentScene.createNode("Transform");
Transform511.translation = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let Shape512 = browser.currentScene.createNode("Shape");
Shape512.USE = "HAnimJointShape";
Transform511YYY.child = new X3D.undefined();

Transform511ZZZ.child[0] = Shape512;

HAnimSegment509ZZZ.children[1] = Transform511;

let Shape513 = browser.currentScene.createNode("Shape");
let LineSet514 = browser.currentScene.createNode("LineSet");
LineSet514.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA515 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA515.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA515;

let Coordinate516 = browser.currentScene.createNode("Coordinate");
Coordinate516.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
coord = Coordinate516;

geometry = LineSet514;

HAnimSegment509ZZZ.children[2] = Shape513;

let Shape517 = browser.currentScene.createNode("Shape");
let LineSet518 = browser.currentScene.createNode("LineSet");
LineSet518.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA519 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA519.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA519;

let Coordinate520 = browser.currentScene.createNode("Coordinate");
Coordinate520.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
coord = Coordinate520;

geometry = LineSet518;

HAnimSegment509ZZZ.children[3] = Shape517;

let Shape521 = browser.currentScene.createNode("Shape");
let LineSet522 = browser.currentScene.createNode("LineSet");
LineSet522.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA523 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA523.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA523;

let Coordinate524 = browser.currentScene.createNode("Coordinate");
Coordinate524.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
coord = Coordinate524;

geometry = LineSet522;

HAnimSegment509ZZZ.children[4] = Shape521;

let HAnimSite525 = browser.currentScene.createNode("HAnimSite");
HAnimSite525.DEF = "hanim_r_thelion_pt";
HAnimSite525.name = "r_thelion_pt";
HAnimSite525.translation = new X3D.SFVec3f([-0.0736,1.3385,0.1217]);
let TouchSensor526 = browser.currentScene.createNode("TouchSensor");
TouchSensor526.description = "HAnimSite r_thelion";
HAnimSite525YYY.children = new X3D.MFNode();

HAnimSite525ZZZ.children[0] = TouchSensor526;

let Shape527 = browser.currentScene.createNode("Shape");
Shape527.USE = "HAnimSiteShape";
HAnimSite525ZZZ.children[1] = Shape527;

HAnimSegment509ZZZ.children[5] = HAnimSite525;

let HAnimSite528 = browser.currentScene.createNode("HAnimSite");
HAnimSite528.DEF = "hanim_l_thelion_pt";
HAnimSite528.name = "l_thelion_pt";
HAnimSite528.translation = new X3D.SFVec3f([0.0918,1.3382,0.1192]);
let TouchSensor529 = browser.currentScene.createNode("TouchSensor");
TouchSensor529.description = "HAnimSite l_thelion";
HAnimSite528YYY.children = new X3D.MFNode();

HAnimSite528ZZZ.children[0] = TouchSensor529;

let Shape530 = browser.currentScene.createNode("Shape");
Shape530.USE = "HAnimSiteShape";
HAnimSite528ZZZ.children[1] = Shape530;

HAnimSegment509ZZZ.children[6] = HAnimSite528;

HAnimJoint508YYY.children = new X3D.MFNode();

HAnimJoint508ZZZ.children[0] = HAnimSegment509;

let HAnimJoint531 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint531.DEF = "hanim_vt8";
HAnimJoint531.name = "vt8";
HAnimJoint531.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let HAnimSegment532 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment532.DEF = "hanim_t8";
HAnimSegment532.name = "t8";
let TouchSensor533 = browser.currentScene.createNode("TouchSensor");
TouchSensor533.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment532YYY.children = new X3D.MFNode();

HAnimSegment532ZZZ.children[0] = TouchSensor533;

let Transform534 = browser.currentScene.createNode("Transform");
Transform534.translation = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let Shape535 = browser.currentScene.createNode("Shape");
Shape535.USE = "HAnimJointShape";
Transform534YYY.child = new X3D.undefined();

Transform534ZZZ.child[0] = Shape535;

HAnimSegment532ZZZ.children[1] = Transform534;

let Shape536 = browser.currentScene.createNode("Shape");
let LineSet537 = browser.currentScene.createNode("LineSet");
LineSet537.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA538 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA538.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA538;

let Coordinate539 = browser.currentScene.createNode("Coordinate");
Coordinate539.point = new X3D.MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
coord = Coordinate539;

geometry = LineSet537;

HAnimSegment532ZZZ.children[2] = Shape536;

HAnimJoint531YYY.children = new X3D.MFNode();

HAnimJoint531ZZZ.children[0] = HAnimSegment532;

let HAnimJoint540 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint540.DEF = "hanim_vt7";
HAnimJoint540.name = "vt7";
HAnimJoint540.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let HAnimSegment541 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment541.DEF = "hanim_t7";
HAnimSegment541.name = "t7";
let TouchSensor542 = browser.currentScene.createNode("TouchSensor");
TouchSensor542.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment541YYY.children = new X3D.MFNode();

HAnimSegment541ZZZ.children[0] = TouchSensor542;

let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let Shape544 = browser.currentScene.createNode("Shape");
Shape544.USE = "HAnimJointShape";
Transform543YYY.child = new X3D.undefined();

Transform543ZZZ.child[0] = Shape544;

HAnimSegment541ZZZ.children[1] = Transform543;

let Shape545 = browser.currentScene.createNode("Shape");
let LineSet546 = browser.currentScene.createNode("LineSet");
LineSet546.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA547 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA547.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA547;

let Coordinate548 = browser.currentScene.createNode("Coordinate");
Coordinate548.point = new X3D.MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
coord = Coordinate548;

geometry = LineSet546;

HAnimSegment541ZZZ.children[2] = Shape545;

HAnimJoint540YYY.children = new X3D.MFNode();

HAnimJoint540ZZZ.children[0] = HAnimSegment541;

let HAnimJoint549 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint549.DEF = "hanim_vt6";
HAnimJoint549.name = "vt6";
HAnimJoint549.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let HAnimSegment550 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment550.DEF = "hanim_t6";
HAnimSegment550.name = "t6";
let TouchSensor551 = browser.currentScene.createNode("TouchSensor");
TouchSensor551.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment550YYY.children = new X3D.MFNode();

HAnimSegment550ZZZ.children[0] = TouchSensor551;

let Transform552 = browser.currentScene.createNode("Transform");
Transform552.translation = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let Shape553 = browser.currentScene.createNode("Shape");
Shape553.USE = "HAnimJointShape";
Transform552YYY.child = new X3D.undefined();

Transform552ZZZ.child[0] = Shape553;

HAnimSegment550ZZZ.children[1] = Transform552;

let Shape554 = browser.currentScene.createNode("Shape");
let LineSet555 = browser.currentScene.createNode("LineSet");
LineSet555.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA556 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA556.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA556;

let Coordinate557 = browser.currentScene.createNode("Coordinate");
Coordinate557.point = new X3D.MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
coord = Coordinate557;

geometry = LineSet555;

HAnimSegment550ZZZ.children[2] = Shape554;

HAnimJoint549YYY.children = new X3D.MFNode();

HAnimJoint549ZZZ.children[0] = HAnimSegment550;

let HAnimJoint558 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint558.DEF = "hanim_vt5";
HAnimJoint558.name = "vt5";
HAnimJoint558.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let HAnimSegment559 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment559.DEF = "hanim_t5";
HAnimSegment559.name = "t5";
let TouchSensor560 = browser.currentScene.createNode("TouchSensor");
TouchSensor560.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment559YYY.children = new X3D.MFNode();

HAnimSegment559ZZZ.children[0] = TouchSensor560;

let Transform561 = browser.currentScene.createNode("Transform");
Transform561.translation = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let Shape562 = browser.currentScene.createNode("Shape");
Shape562.USE = "HAnimJointShape";
Transform561YYY.child = new X3D.undefined();

Transform561ZZZ.child[0] = Shape562;

HAnimSegment559ZZZ.children[1] = Transform561;

let Shape563 = browser.currentScene.createNode("Shape");
let LineSet564 = browser.currentScene.createNode("LineSet");
LineSet564.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA565 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA565.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA565;

let Coordinate566 = browser.currentScene.createNode("Coordinate");
Coordinate566.point = new X3D.MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
coord = Coordinate566;

geometry = LineSet564;

HAnimSegment559ZZZ.children[2] = Shape563;

HAnimJoint558YYY.children = new X3D.MFNode();

HAnimJoint558ZZZ.children[0] = HAnimSegment559;

let HAnimJoint567 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint567.DEF = "hanim_vt4";
HAnimJoint567.name = "vt4";
HAnimJoint567.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let HAnimSegment568 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment568.DEF = "hanim_t4";
HAnimSegment568.name = "t4";
let TouchSensor569 = browser.currentScene.createNode("TouchSensor");
TouchSensor569.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment568YYY.children = new X3D.MFNode();

HAnimSegment568ZZZ.children[0] = TouchSensor569;

let Transform570 = browser.currentScene.createNode("Transform");
Transform570.translation = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let Shape571 = browser.currentScene.createNode("Shape");
Shape571.USE = "HAnimJointShape";
Transform570YYY.child = new X3D.undefined();

Transform570ZZZ.child[0] = Shape571;

HAnimSegment568ZZZ.children[1] = Transform570;

let Shape572 = browser.currentScene.createNode("Shape");
let LineSet573 = browser.currentScene.createNode("LineSet");
LineSet573.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA574 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA574.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA574;

let Coordinate575 = browser.currentScene.createNode("Coordinate");
Coordinate575.point = new X3D.MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
coord = Coordinate575;

geometry = LineSet573;

HAnimSegment568ZZZ.children[2] = Shape572;

HAnimJoint567YYY.children = new X3D.MFNode();

HAnimJoint567ZZZ.children[0] = HAnimSegment568;

let HAnimJoint576 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint576.DEF = "hanim_vt3";
HAnimJoint576.name = "vt3";
HAnimJoint576.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let HAnimSegment577 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment577.DEF = "hanim_t3";
HAnimSegment577.name = "t3";
let TouchSensor578 = browser.currentScene.createNode("TouchSensor");
TouchSensor578.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment577YYY.children = new X3D.MFNode();

HAnimSegment577ZZZ.children[0] = TouchSensor578;

let Transform579 = browser.currentScene.createNode("Transform");
Transform579.translation = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let Shape580 = browser.currentScene.createNode("Shape");
Shape580.USE = "HAnimJointShape";
Transform579YYY.child = new X3D.undefined();

Transform579ZZZ.child[0] = Shape580;

HAnimSegment577ZZZ.children[1] = Transform579;

let Shape581 = browser.currentScene.createNode("Shape");
let LineSet582 = browser.currentScene.createNode("LineSet");
LineSet582.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA583 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA583.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA583;

let Coordinate584 = browser.currentScene.createNode("Coordinate");
Coordinate584.point = new X3D.MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
coord = Coordinate584;

geometry = LineSet582;

HAnimSegment577ZZZ.children[2] = Shape581;

HAnimJoint576YYY.children = new X3D.MFNode();

HAnimJoint576ZZZ.children[0] = HAnimSegment577;

let HAnimJoint585 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint585.DEF = "hanim_vt2";
HAnimJoint585.name = "vt2";
HAnimJoint585.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let HAnimSegment586 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment586.DEF = "hanim_t2";
HAnimSegment586.name = "t2";
let TouchSensor587 = browser.currentScene.createNode("TouchSensor");
TouchSensor587.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment586YYY.children = new X3D.MFNode();

HAnimSegment586ZZZ.children[0] = TouchSensor587;

let Transform588 = browser.currentScene.createNode("Transform");
Transform588.translation = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let Shape589 = browser.currentScene.createNode("Shape");
Shape589.USE = "HAnimJointShape";
Transform588YYY.child = new X3D.undefined();

Transform588ZZZ.child[0] = Shape589;

HAnimSegment586ZZZ.children[1] = Transform588;

let Shape590 = browser.currentScene.createNode("Shape");
let LineSet591 = browser.currentScene.createNode("LineSet");
LineSet591.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA592 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA592;

let Coordinate593 = browser.currentScene.createNode("Coordinate");
Coordinate593.point = new X3D.MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
coord = Coordinate593;

geometry = LineSet591;

HAnimSegment586ZZZ.children[2] = Shape590;

HAnimJoint585YYY.children = new X3D.MFNode();

HAnimJoint585ZZZ.children[0] = HAnimSegment586;

let HAnimJoint594 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint594.DEF = "hanim_vt1";
HAnimJoint594.name = "vt1";
HAnimJoint594.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let HAnimSegment595 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment595.DEF = "hanim_t1";
HAnimSegment595.name = "t1";
let TouchSensor596 = browser.currentScene.createNode("TouchSensor");
TouchSensor596.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment595YYY.children = new X3D.MFNode();

HAnimSegment595ZZZ.children[0] = TouchSensor596;

let Transform597 = browser.currentScene.createNode("Transform");
Transform597.translation = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let Shape598 = browser.currentScene.createNode("Shape");
Shape598.USE = "HAnimJointShape";
Transform597YYY.child = new X3D.undefined();

Transform597ZZZ.child[0] = Shape598;

HAnimSegment595ZZZ.children[1] = Transform597;

let Shape599 = browser.currentScene.createNode("Shape");
let LineSet600 = browser.currentScene.createNode("LineSet");
LineSet600.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA601 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA601.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA601;

let Coordinate602 = browser.currentScene.createNode("Coordinate");
Coordinate602.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
coord = Coordinate602;

geometry = LineSet600;

HAnimSegment595ZZZ.children[2] = Shape599;

let Shape603 = browser.currentScene.createNode("Shape");
let LineSet604 = browser.currentScene.createNode("LineSet");
LineSet604.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA605 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA605;

let Coordinate606 = browser.currentScene.createNode("Coordinate");
Coordinate606.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
coord = Coordinate606;

geometry = LineSet604;

HAnimSegment595ZZZ.children[3] = Shape603;

let Shape607 = browser.currentScene.createNode("Shape");
let LineSet608 = browser.currentScene.createNode("LineSet");
LineSet608.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA609 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA609.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA609;

let Coordinate610 = browser.currentScene.createNode("Coordinate");
Coordinate610.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
coord = Coordinate610;

geometry = LineSet608;

HAnimSegment595ZZZ.children[4] = Shape607;

let Shape611 = browser.currentScene.createNode("Shape");
let LineSet612 = browser.currentScene.createNode("LineSet");
LineSet612.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA613 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA613.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA613;

let Coordinate614 = browser.currentScene.createNode("Coordinate");
Coordinate614.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
coord = Coordinate614;

geometry = LineSet612;

HAnimSegment595ZZZ.children[5] = Shape611;

let Shape615 = browser.currentScene.createNode("Shape");
let LineSet616 = browser.currentScene.createNode("LineSet");
LineSet616.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA617 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA617.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA617;

let Coordinate618 = browser.currentScene.createNode("Coordinate");
Coordinate618.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
coord = Coordinate618;

geometry = LineSet616;

HAnimSegment595ZZZ.children[6] = Shape615;

let HAnimSite619 = browser.currentScene.createNode("HAnimSite");
HAnimSite619.DEF = "hanim_suprasternale_pt";
HAnimSite619.name = "suprasternale_pt";
HAnimSite619.translation = new X3D.SFVec3f([0.0084,1.4714,0.0551]);
let TouchSensor620 = browser.currentScene.createNode("TouchSensor");
TouchSensor620.description = "HAnimSite suprasternale";
HAnimSite619YYY.children = new X3D.MFNode();

HAnimSite619ZZZ.children[0] = TouchSensor620;

let Shape621 = browser.currentScene.createNode("Shape");
Shape621.USE = "HAnimSiteShape";
HAnimSite619ZZZ.children[1] = Shape621;

HAnimSegment595ZZZ.children[7] = HAnimSite619;

let HAnimSite622 = browser.currentScene.createNode("HAnimSite");
HAnimSite622.DEF = "hanim_cervicale_pt";
HAnimSite622.name = "cervicale_pt";
HAnimSite622.translation = new X3D.SFVec3f([0.0064,1.52,-0.0815]);
let TouchSensor623 = browser.currentScene.createNode("TouchSensor");
TouchSensor623.description = "HAnimSite cervicale";
HAnimSite622YYY.children = new X3D.MFNode();

HAnimSite622ZZZ.children[0] = TouchSensor623;

let Shape624 = browser.currentScene.createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622ZZZ.children[1] = Shape624;

HAnimSegment595ZZZ.children[8] = HAnimSite622;

HAnimJoint594YYY.children = new X3D.MFNode();

HAnimJoint594ZZZ.children[0] = HAnimSegment595;

let HAnimJoint625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint625.DEF = "hanim_vc7";
HAnimJoint625.name = "vc7";
HAnimJoint625.rotation = new X3D.SFRotation([-0.999999999999996,0,0,0.222164034843446]);
HAnimJoint625.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let HAnimSegment626 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment626.DEF = "hanim_c7";
HAnimSegment626.name = "c7";
let TouchSensor627 = browser.currentScene.createNode("TouchSensor");
TouchSensor627.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment626YYY.children = new X3D.MFNode();

HAnimSegment626ZZZ.children[0] = TouchSensor627;

let Transform628 = browser.currentScene.createNode("Transform");
Transform628.translation = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let Shape629 = browser.currentScene.createNode("Shape");
Shape629.USE = "HAnimJointShape";
Transform628YYY.child = new X3D.undefined();

Transform628ZZZ.child[0] = Shape629;

HAnimSegment626ZZZ.children[1] = Transform628;

let Shape630 = browser.currentScene.createNode("Shape");
let LineSet631 = browser.currentScene.createNode("LineSet");
LineSet631.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA632 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA632;

let Coordinate633 = browser.currentScene.createNode("Coordinate");
Coordinate633.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
coord = Coordinate633;

geometry = LineSet631;

HAnimSegment626ZZZ.children[2] = Shape630;

let Shape634 = browser.currentScene.createNode("Shape");
let LineSet635 = browser.currentScene.createNode("LineSet");
LineSet635.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA636 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA636.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA636;

let Coordinate637 = browser.currentScene.createNode("Coordinate");
Coordinate637.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
coord = Coordinate637;

geometry = LineSet635;

HAnimSegment626ZZZ.children[3] = Shape634;

let Shape638 = browser.currentScene.createNode("Shape");
let LineSet639 = browser.currentScene.createNode("LineSet");
LineSet639.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA640 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA640.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA640;

let Coordinate641 = browser.currentScene.createNode("Coordinate");
Coordinate641.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
coord = Coordinate641;

geometry = LineSet639;

HAnimSegment626ZZZ.children[4] = Shape638;

let HAnimSite642 = browser.currentScene.createNode("HAnimSite");
HAnimSite642.DEF = "hanim_r_neck_base_pt";
HAnimSite642.name = "r_neck_base_pt";
HAnimSite642.translation = new X3D.SFVec3f([-0.0419,1.5149,-0.022]);
let TouchSensor643 = browser.currentScene.createNode("TouchSensor");
TouchSensor643.description = "HAnimSite r_neck_base";
HAnimSite642YYY.children = new X3D.MFNode();

HAnimSite642ZZZ.children[0] = TouchSensor643;

let Shape644 = browser.currentScene.createNode("Shape");
Shape644.USE = "HAnimSiteShape";
HAnimSite642ZZZ.children[1] = Shape644;

HAnimSegment626ZZZ.children[5] = HAnimSite642;

let HAnimSite645 = browser.currentScene.createNode("HAnimSite");
HAnimSite645.DEF = "hanim_l_neck_base_pt";
HAnimSite645.name = "l_neck_base_pt";
HAnimSite645.translation = new X3D.SFVec3f([0.0646,1.5141,-0.038]);
let TouchSensor646 = browser.currentScene.createNode("TouchSensor");
TouchSensor646.description = "HAnimSite l_neck_base";
HAnimSite645YYY.children = new X3D.MFNode();

HAnimSite645ZZZ.children[0] = TouchSensor646;

let Shape647 = browser.currentScene.createNode("Shape");
Shape647.USE = "HAnimSiteShape";
HAnimSite645ZZZ.children[1] = Shape647;

HAnimSegment626ZZZ.children[6] = HAnimSite645;

HAnimJoint625YYY.children = new X3D.MFNode();

HAnimJoint625ZZZ.children[0] = HAnimSegment626;

let HAnimJoint648 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint648.DEF = "hanim_vc6";
HAnimJoint648.name = "vc6";
HAnimJoint648.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let HAnimSegment649 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment649.DEF = "hanim_c6";
HAnimSegment649.name = "c6";
let TouchSensor650 = browser.currentScene.createNode("TouchSensor");
TouchSensor650.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment649YYY.children = new X3D.MFNode();

HAnimSegment649ZZZ.children[0] = TouchSensor650;

let Transform651 = browser.currentScene.createNode("Transform");
Transform651.translation = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let Shape652 = browser.currentScene.createNode("Shape");
Shape652.USE = "HAnimJointShape";
Transform651YYY.child = new X3D.undefined();

Transform651ZZZ.child[0] = Shape652;

HAnimSegment649ZZZ.children[1] = Transform651;

let Shape653 = browser.currentScene.createNode("Shape");
let LineSet654 = browser.currentScene.createNode("LineSet");
LineSet654.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA655 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA655.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA655;

let Coordinate656 = browser.currentScene.createNode("Coordinate");
Coordinate656.point = new X3D.MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
coord = Coordinate656;

geometry = LineSet654;

HAnimSegment649ZZZ.children[2] = Shape653;

HAnimJoint648YYY.children = new X3D.MFNode();

HAnimJoint648ZZZ.children[0] = HAnimSegment649;

let HAnimJoint657 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint657.DEF = "hanim_vc5";
HAnimJoint657.name = "vc5";
HAnimJoint657.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let HAnimSegment658 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment658.DEF = "hanim_c5";
HAnimSegment658.name = "c5";
let TouchSensor659 = browser.currentScene.createNode("TouchSensor");
TouchSensor659.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment658YYY.children = new X3D.MFNode();

HAnimSegment658ZZZ.children[0] = TouchSensor659;

let Transform660 = browser.currentScene.createNode("Transform");
Transform660.translation = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let Shape661 = browser.currentScene.createNode("Shape");
Shape661.USE = "HAnimJointShape";
Transform660YYY.child = new X3D.undefined();

Transform660ZZZ.child[0] = Shape661;

HAnimSegment658ZZZ.children[1] = Transform660;

let Shape662 = browser.currentScene.createNode("Shape");
let LineSet663 = browser.currentScene.createNode("LineSet");
LineSet663.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA664 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA664;

let Coordinate665 = browser.currentScene.createNode("Coordinate");
Coordinate665.point = new X3D.MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
coord = Coordinate665;

geometry = LineSet663;

HAnimSegment658ZZZ.children[2] = Shape662;

HAnimJoint657YYY.children = new X3D.MFNode();

HAnimJoint657ZZZ.children[0] = HAnimSegment658;

let HAnimJoint666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint666.DEF = "hanim_vc4";
HAnimJoint666.name = "vc4";
HAnimJoint666.rotation = new X3D.SFRotation([1,0,0,0.302520108222961]);
HAnimJoint666.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let HAnimSegment667 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment667.DEF = "hanim_c4";
HAnimSegment667.name = "c4";
let TouchSensor668 = browser.currentScene.createNode("TouchSensor");
TouchSensor668.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment667YYY.children = new X3D.MFNode();

HAnimSegment667ZZZ.children[0] = TouchSensor668;

let Transform669 = browser.currentScene.createNode("Transform");
Transform669.translation = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let Shape670 = browser.currentScene.createNode("Shape");
Shape670.USE = "HAnimJointShape";
Transform669YYY.child = new X3D.undefined();

Transform669ZZZ.child[0] = Shape670;

HAnimSegment667ZZZ.children[1] = Transform669;

let Shape671 = browser.currentScene.createNode("Shape");
let LineSet672 = browser.currentScene.createNode("LineSet");
LineSet672.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA673 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA673.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA673;

let Coordinate674 = browser.currentScene.createNode("Coordinate");
Coordinate674.point = new X3D.MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
coord = Coordinate674;

geometry = LineSet672;

HAnimSegment667ZZZ.children[2] = Shape671;

HAnimJoint666YYY.children = new X3D.MFNode();

HAnimJoint666ZZZ.children[0] = HAnimSegment667;

let HAnimJoint675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint675.DEF = "hanim_vc3";
HAnimJoint675.name = "vc3";
HAnimJoint675.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let HAnimSegment676 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment676.DEF = "hanim_c3";
HAnimSegment676.name = "c3";
let TouchSensor677 = browser.currentScene.createNode("TouchSensor");
TouchSensor677.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment676YYY.children = new X3D.MFNode();

HAnimSegment676ZZZ.children[0] = TouchSensor677;

let Transform678 = browser.currentScene.createNode("Transform");
Transform678.translation = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let Shape679 = browser.currentScene.createNode("Shape");
Shape679.USE = "HAnimJointShape";
Transform678YYY.child = new X3D.undefined();

Transform678ZZZ.child[0] = Shape679;

HAnimSegment676ZZZ.children[1] = Transform678;

let Shape680 = browser.currentScene.createNode("Shape");
let LineSet681 = browser.currentScene.createNode("LineSet");
LineSet681.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA682 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA682.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA682;

let Coordinate683 = browser.currentScene.createNode("Coordinate");
Coordinate683.point = new X3D.MFVec3f([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
coord = Coordinate683;

geometry = LineSet681;

HAnimSegment676ZZZ.children[2] = Shape680;

HAnimJoint675YYY.children = new X3D.MFNode();

HAnimJoint675ZZZ.children[0] = HAnimSegment676;

let HAnimJoint684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint684.DEF = "hanim_vc2";
HAnimJoint684.name = "vc2";
HAnimJoint684.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let HAnimSegment685 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment685.DEF = "hanim_c2";
HAnimSegment685.name = "c2";
let TouchSensor686 = browser.currentScene.createNode("TouchSensor");
TouchSensor686.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment685YYY.children = new X3D.MFNode();

HAnimSegment685ZZZ.children[0] = TouchSensor686;

let Transform687 = browser.currentScene.createNode("Transform");
Transform687.translation = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let Shape688 = browser.currentScene.createNode("Shape");
Shape688.USE = "HAnimJointShape";
Transform687YYY.child = new X3D.undefined();

Transform687ZZZ.child[0] = Shape688;

HAnimSegment685ZZZ.children[1] = Transform687;

let Shape689 = browser.currentScene.createNode("Shape");
let LineSet690 = browser.currentScene.createNode("LineSet");
LineSet690.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA691 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA691.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA691;

let Coordinate692 = browser.currentScene.createNode("Coordinate");
Coordinate692.point = new X3D.MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
coord = Coordinate692;

geometry = LineSet690;

HAnimSegment685ZZZ.children[2] = Shape689;

HAnimJoint684YYY.children = new X3D.MFNode();

HAnimJoint684ZZZ.children[0] = HAnimSegment685;

let HAnimJoint693 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint693.DEF = "hanim_vc1";
HAnimJoint693.name = "vc1";
HAnimJoint693.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let HAnimSegment694 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment694.DEF = "hanim_c1";
HAnimSegment694.name = "c1";
let TouchSensor695 = browser.currentScene.createNode("TouchSensor");
TouchSensor695.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment694YYY.children = new X3D.MFNode();

HAnimSegment694ZZZ.children[0] = TouchSensor695;

let Transform696 = browser.currentScene.createNode("Transform");
Transform696.translation = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let Shape697 = browser.currentScene.createNode("Shape");
Shape697.USE = "HAnimJointShape";
Transform696YYY.child = new X3D.undefined();

Transform696ZZZ.child[0] = Shape697;

HAnimSegment694ZZZ.children[1] = Transform696;

let Shape698 = browser.currentScene.createNode("Shape");
let LineSet699 = browser.currentScene.createNode("LineSet");
LineSet699.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA700 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA700;

let Coordinate701 = browser.currentScene.createNode("Coordinate");
Coordinate701.point = new X3D.MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
coord = Coordinate701;

geometry = LineSet699;

HAnimSegment694ZZZ.children[2] = Shape698;

HAnimJoint693YYY.children = new X3D.MFNode();

HAnimJoint693ZZZ.children[0] = HAnimSegment694;

let HAnimJoint702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint702.DEF = "hanim_skullbase";
HAnimJoint702.name = "skullbase";
HAnimJoint702.rotation = new X3D.SFRotation([-1.00000000000001,0,0,0.231096035769597]);
HAnimJoint702.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let HAnimSegment703 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment703.DEF = "hanim_skull";
HAnimSegment703.name = "skull";
let TouchSensor704 = browser.currentScene.createNode("TouchSensor");
TouchSensor704.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment703YYY.children = new X3D.MFNode();

HAnimSegment703ZZZ.children[0] = TouchSensor704;

let Transform705 = browser.currentScene.createNode("Transform");
Transform705.translation = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let Shape706 = browser.currentScene.createNode("Shape");
Shape706.USE = "HAnimJointShape";
Transform705YYY.child = new X3D.undefined();

Transform705ZZZ.child[0] = Shape706;

HAnimSegment703ZZZ.children[1] = Transform705;

let Shape707 = browser.currentScene.createNode("Shape");
let LineSet708 = browser.currentScene.createNode("LineSet");
LineSet708.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA709 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA709;

let Coordinate710 = browser.currentScene.createNode("Coordinate");
Coordinate710.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
coord = Coordinate710;

geometry = LineSet708;

HAnimSegment703ZZZ.children[2] = Shape707;

let Shape711 = browser.currentScene.createNode("Shape");
let LineSet712 = browser.currentScene.createNode("LineSet");
LineSet712.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA713 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA713.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA713;

let Coordinate714 = browser.currentScene.createNode("Coordinate");
Coordinate714.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
coord = Coordinate714;

geometry = LineSet712;

HAnimSegment703ZZZ.children[3] = Shape711;

let Shape715 = browser.currentScene.createNode("Shape");
let LineSet716 = browser.currentScene.createNode("LineSet");
LineSet716.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA717 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA717.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA717;

let Coordinate718 = browser.currentScene.createNode("Coordinate");
Coordinate718.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
coord = Coordinate718;

geometry = LineSet716;

HAnimSegment703ZZZ.children[4] = Shape715;

let Shape719 = browser.currentScene.createNode("Shape");
let LineSet720 = browser.currentScene.createNode("LineSet");
LineSet720.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA721 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA721.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA721;

let Coordinate722 = browser.currentScene.createNode("Coordinate");
Coordinate722.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
coord = Coordinate722;

geometry = LineSet720;

HAnimSegment703ZZZ.children[5] = Shape719;

let Shape723 = browser.currentScene.createNode("Shape");
let LineSet724 = browser.currentScene.createNode("LineSet");
LineSet724.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA725 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA725.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA725;

let Coordinate726 = browser.currentScene.createNode("Coordinate");
Coordinate726.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
coord = Coordinate726;

geometry = LineSet724;

HAnimSegment703ZZZ.children[6] = Shape723;

let Shape727 = browser.currentScene.createNode("Shape");
let LineSet728 = browser.currentScene.createNode("LineSet");
LineSet728.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA729 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA729.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA729;

let Coordinate730 = browser.currentScene.createNode("Coordinate");
Coordinate730.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
coord = Coordinate730;

geometry = LineSet728;

HAnimSegment703ZZZ.children[7] = Shape727;

let Shape731 = browser.currentScene.createNode("Shape");
let LineSet732 = browser.currentScene.createNode("LineSet");
LineSet732.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA733 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA733;

let Coordinate734 = browser.currentScene.createNode("Coordinate");
Coordinate734.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0,1.63,0.015]);
coord = Coordinate734;

geometry = LineSet732;

HAnimSegment703ZZZ.children[8] = Shape731;

let Shape735 = browser.currentScene.createNode("Shape");
let LineSet736 = browser.currentScene.createNode("LineSet");
LineSet736.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA737 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA737.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA737;

let Coordinate738 = browser.currentScene.createNode("Coordinate");
Coordinate738.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
coord = Coordinate738;

geometry = LineSet736;

HAnimSegment703ZZZ.children[9] = Shape735;

let Shape739 = browser.currentScene.createNode("Shape");
let LineSet740 = browser.currentScene.createNode("LineSet");
LineSet740.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA741 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA741.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA741;

let Coordinate742 = browser.currentScene.createNode("Coordinate");
Coordinate742.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
coord = Coordinate742;

geometry = LineSet740;

HAnimSegment703ZZZ.children[10] = Shape739;

let Shape743 = browser.currentScene.createNode("Shape");
let LineSet744 = browser.currentScene.createNode("LineSet");
LineSet744.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA745 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA745.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA745;

let Coordinate746 = browser.currentScene.createNode("Coordinate");
Coordinate746.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
coord = Coordinate746;

geometry = LineSet744;

HAnimSegment703ZZZ.children[11] = Shape743;

let Shape747 = browser.currentScene.createNode("Shape");
let LineSet748 = browser.currentScene.createNode("LineSet");
LineSet748.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA749 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA749.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA749;

let Coordinate750 = browser.currentScene.createNode("Coordinate");
Coordinate750.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
coord = Coordinate750;

geometry = LineSet748;

HAnimSegment703ZZZ.children[12] = Shape747;

let Shape751 = browser.currentScene.createNode("Shape");
let LineSet752 = browser.currentScene.createNode("LineSet");
LineSet752.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA753 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA753.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA753;

let Coordinate754 = browser.currentScene.createNode("Coordinate");
Coordinate754.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
coord = Coordinate754;

geometry = LineSet752;

HAnimSegment703ZZZ.children[13] = Shape751;

let Shape755 = browser.currentScene.createNode("Shape");
let LineSet756 = browser.currentScene.createNode("LineSet");
LineSet756.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA757 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA757;

let Coordinate758 = browser.currentScene.createNode("Coordinate");
Coordinate758.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
coord = Coordinate758;

geometry = LineSet756;

HAnimSegment703ZZZ.children[14] = Shape755;

let Shape759 = browser.currentScene.createNode("Shape");
let LineSet760 = browser.currentScene.createNode("LineSet");
LineSet760.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA761 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA761.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA761;

let Coordinate762 = browser.currentScene.createNode("Coordinate");
Coordinate762.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
coord = Coordinate762;

geometry = LineSet760;

HAnimSegment703ZZZ.children[15] = Shape759;

let Shape763 = browser.currentScene.createNode("Shape");
let LineSet764 = browser.currentScene.createNode("LineSet");
LineSet764.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA765 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA765.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA765;

let Coordinate766 = browser.currentScene.createNode("Coordinate");
Coordinate766.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
coord = Coordinate766;

geometry = LineSet764;

HAnimSegment703ZZZ.children[16] = Shape763;

let Shape767 = browser.currentScene.createNode("Shape");
let LineSet768 = browser.currentScene.createNode("LineSet");
LineSet768.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA769 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA769.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA769;

let Coordinate770 = browser.currentScene.createNode("Coordinate");
Coordinate770.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
coord = Coordinate770;

geometry = LineSet768;

HAnimSegment703ZZZ.children[17] = Shape767;

let Shape771 = browser.currentScene.createNode("Shape");
let LineSet772 = browser.currentScene.createNode("LineSet");
LineSet772.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA773 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA773.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA773;

let Coordinate774 = browser.currentScene.createNode("Coordinate");
Coordinate774.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
coord = Coordinate774;

geometry = LineSet772;

HAnimSegment703ZZZ.children[18] = Shape771;

let HAnimSite775 = browser.currentScene.createNode("HAnimSite");
HAnimSite775.DEF = "hanim_skull_tip";
HAnimSite775.name = "skull_tip";
HAnimSite775.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
let TouchSensor776 = browser.currentScene.createNode("TouchSensor");
TouchSensor776.description = "HAnimSite skull_tip";
HAnimSite775YYY.children = new X3D.MFNode();

HAnimSite775ZZZ.children[0] = TouchSensor776;

let Shape777 = browser.currentScene.createNode("Shape");
Shape777.USE = "HAnimSiteShape";
HAnimSite775ZZZ.children[1] = Shape777;

HAnimSegment703ZZZ.children[19] = HAnimSite775;

let HAnimSite778 = browser.currentScene.createNode("HAnimSite");
HAnimSite778.DEF = "hanim_sellion_pt";
HAnimSite778.name = "sellion_pt";
HAnimSite778.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
let TouchSensor779 = browser.currentScene.createNode("TouchSensor");
TouchSensor779.description = "HAnimSite sellion";
HAnimSite778YYY.children = new X3D.MFNode();

HAnimSite778ZZZ.children[0] = TouchSensor779;

let Shape780 = browser.currentScene.createNode("Shape");
Shape780.USE = "HAnimSiteShape";
HAnimSite778ZZZ.children[1] = Shape780;

HAnimSegment703ZZZ.children[20] = HAnimSite778;

let HAnimSite781 = browser.currentScene.createNode("HAnimSite");
HAnimSite781.DEF = "hanim_r_infraorbitale_pt";
HAnimSite781.name = "r_infraorbitale_pt";
HAnimSite781.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
let TouchSensor782 = browser.currentScene.createNode("TouchSensor");
TouchSensor782.description = "HAnimSite r_infraorbitale";
HAnimSite781YYY.children = new X3D.MFNode();

HAnimSite781ZZZ.children[0] = TouchSensor782;

let Shape783 = browser.currentScene.createNode("Shape");
Shape783.USE = "HAnimSiteShape";
HAnimSite781ZZZ.children[1] = Shape783;

HAnimSegment703ZZZ.children[21] = HAnimSite781;

let HAnimSite784 = browser.currentScene.createNode("HAnimSite");
HAnimSite784.DEF = "hanim_l_infraorbitale_pt";
HAnimSite784.name = "l_infraorbitale_pt";
HAnimSite784.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
let TouchSensor785 = browser.currentScene.createNode("TouchSensor");
TouchSensor785.description = "HAnimSite l_infraorbitale";
HAnimSite784YYY.children = new X3D.MFNode();

HAnimSite784ZZZ.children[0] = TouchSensor785;

let Shape786 = browser.currentScene.createNode("Shape");
Shape786.USE = "HAnimSiteShape";
HAnimSite784ZZZ.children[1] = Shape786;

HAnimSegment703ZZZ.children[22] = HAnimSite784;

let HAnimSite787 = browser.currentScene.createNode("HAnimSite");
HAnimSite787.DEF = "hanim_supramenton_pt";
HAnimSite787.name = "supramenton_pt";
HAnimSite787.translation = new X3D.SFVec3f([0.0061,1.541,0.0805]);
let TouchSensor788 = browser.currentScene.createNode("TouchSensor");
TouchSensor788.description = "HAnimSite supramenton";
HAnimSite787YYY.children = new X3D.MFNode();

HAnimSite787ZZZ.children[0] = TouchSensor788;

let Shape789 = browser.currentScene.createNode("Shape");
Shape789.USE = "HAnimSiteShape";
HAnimSite787ZZZ.children[1] = Shape789;

HAnimSegment703ZZZ.children[23] = HAnimSite787;

let HAnimSite790 = browser.currentScene.createNode("HAnimSite");
HAnimSite790.DEF = "hanim_r_tragion_pt";
HAnimSite790.name = "r_tragion_pt";
HAnimSite790.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
let TouchSensor791 = browser.currentScene.createNode("TouchSensor");
TouchSensor791.description = "HAnimSite r_tragion";
HAnimSite790YYY.children = new X3D.MFNode();

HAnimSite790ZZZ.children[0] = TouchSensor791;

let Shape792 = browser.currentScene.createNode("Shape");
Shape792.USE = "HAnimSiteShape";
HAnimSite790ZZZ.children[1] = Shape792;

HAnimSegment703ZZZ.children[24] = HAnimSite790;

let HAnimSite793 = browser.currentScene.createNode("HAnimSite");
HAnimSite793.DEF = "hanim_r_gonion_pt";
HAnimSite793.name = "r_gonion_pt";
HAnimSite793.translation = new X3D.SFVec3f([-0.052,1.5529,0.0347]);
let TouchSensor794 = browser.currentScene.createNode("TouchSensor");
TouchSensor794.description = "HAnimSite r_gonion";
HAnimSite793YYY.children = new X3D.MFNode();

HAnimSite793ZZZ.children[0] = TouchSensor794;

let Shape795 = browser.currentScene.createNode("Shape");
Shape795.USE = "HAnimSiteShape";
HAnimSite793ZZZ.children[1] = Shape795;

HAnimSegment703ZZZ.children[25] = HAnimSite793;

let HAnimSite796 = browser.currentScene.createNode("HAnimSite");
HAnimSite796.DEF = "hanim_l_tragion_pt";
HAnimSite796.name = "l_tragion_pt";
HAnimSite796.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
let TouchSensor797 = browser.currentScene.createNode("TouchSensor");
TouchSensor797.description = "HAnimSite l_tragion";
HAnimSite796YYY.children = new X3D.MFNode();

HAnimSite796ZZZ.children[0] = TouchSensor797;

let Shape798 = browser.currentScene.createNode("Shape");
Shape798.USE = "HAnimSiteShape";
HAnimSite796ZZZ.children[1] = Shape798;

HAnimSegment703ZZZ.children[26] = HAnimSite796;

let HAnimSite799 = browser.currentScene.createNode("HAnimSite");
HAnimSite799.DEF = "hanim_l_gonion_pt";
HAnimSite799.name = "l_gonion_pt";
HAnimSite799.translation = new X3D.SFVec3f([0.0631,1.553,0.033]);
let TouchSensor800 = browser.currentScene.createNode("TouchSensor");
TouchSensor800.description = "HAnimSite l_gonion";
HAnimSite799YYY.children = new X3D.MFNode();

HAnimSite799ZZZ.children[0] = TouchSensor800;

let Shape801 = browser.currentScene.createNode("Shape");
Shape801.USE = "HAnimSiteShape";
HAnimSite799ZZZ.children[1] = Shape801;

HAnimSegment703ZZZ.children[27] = HAnimSite799;

let HAnimSite802 = browser.currentScene.createNode("HAnimSite");
HAnimSite802.DEF = "hanim_nuchale_pt";
HAnimSite802.name = "nuchale_pt";
HAnimSite802.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
let TouchSensor803 = browser.currentScene.createNode("TouchSensor");
TouchSensor803.description = "HAnimSite nuchale";
HAnimSite802YYY.children = new X3D.MFNode();

HAnimSite802ZZZ.children[0] = TouchSensor803;

let Shape804 = browser.currentScene.createNode("Shape");
Shape804.USE = "HAnimSiteShape";
HAnimSite802ZZZ.children[1] = Shape804;

HAnimSegment703ZZZ.children[28] = HAnimSite802;

HAnimJoint702YYY.children = new X3D.MFNode();

HAnimJoint702ZZZ.children[0] = HAnimSegment703;

let HAnimJoint805 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint805.DEF = "hanim_l_eyeball_joint";
HAnimJoint805.name = "l_eyeball_joint";
HAnimJoint805.rotation = new X3D.SFRotation([-0.999999999999999,0,0,0.277705039416179]);
HAnimJoint805.center = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let HAnimSegment806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment806.DEF = "hanim_l_eyeball";
HAnimSegment806.name = "l_eyeball";
let TouchSensor807 = browser.currentScene.createNode("TouchSensor");
TouchSensor807.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment806YYY.children = new X3D.MFNode();

HAnimSegment806ZZZ.children[0] = TouchSensor807;

let Transform808 = browser.currentScene.createNode("Transform");
Transform808.translation = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let Shape809 = browser.currentScene.createNode("Shape");
Shape809.USE = "HAnimJointShape";
Transform808YYY.child = new X3D.undefined();

Transform808ZZZ.child[0] = Shape809;

HAnimSegment806ZZZ.children[1] = Transform808;

let Shape810 = browser.currentScene.createNode("Shape");
let LineSet811 = browser.currentScene.createNode("LineSet");
LineSet811.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA812 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA812.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA812.color = new X3D.MFColorRGBA([0,0,1,1,0,0,1,0.1]);
color = ColorRGBA812;

let Coordinate813 = browser.currentScene.createNode("Coordinate");
Coordinate813.point = new X3D.MFVec3f([0.0336,1.6332,0.0502,0.034,1.64,0.05]);
coord = Coordinate813;

geometry = LineSet811;

HAnimSegment806ZZZ.children[2] = Shape810;

let HAnimSite814 = browser.currentScene.createNode("HAnimSite");
HAnimSite814.DEF = "hanim_l_eyeball_site_view";
HAnimSite814.name = "l_eyeball_site_view";
HAnimSite814.translation = new X3D.SFVec3f([0.034,1.64,0.05]);
let Viewpoint815 = browser.currentScene.createNode("Viewpoint");
Viewpoint815.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint815.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint815.position = new X3D.SFVec3f([0,0,0]);
Viewpoint815.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite814YYY.children = new X3D.MFNode();

HAnimSite814ZZZ.children[0] = Viewpoint815;

let Anchor816 = browser.currentScene.createNode("Anchor");
Anchor816.description = "HAnimSite Viewpoint hanim_l_eyeball_site_view";
Anchor816.url = new X3D.MFString([new X3D.SFString("#hanim_l_eyeball_site_viewpoint")]);
let LOD817 = browser.currentScene.createNode("LOD");
LOD817.forceTransitions = True;
LOD817.range = new X3D.MFFloat([0.04]);
let WorldInfo818 = browser.currentScene.createNode("WorldInfo");
WorldInfo818.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD817YYY.children = new X3D.MFNode();

LOD817ZZZ.children[0] = WorldInfo818;

let Shape819 = browser.currentScene.createNode("Shape");
Shape819.DEF = "HAnimSiteViewpointShape";
let Appearance820 = browser.currentScene.createNode("Appearance");
let Material821 = browser.currentScene.createNode("Material");
Material821.diffuseColor = new X3D.SFColor([0,0,1]);
Material821.transparency = 0.6;
material = Material821;

appearance = Appearance820;

let IndexedFaceSet822 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet822.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet822.creaseAngle = 0.5;
IndexedFaceSet822.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate823 = browser.currentScene.createNode("Coordinate");
Coordinate823.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate823;

geometry = IndexedFaceSet822;

LOD817ZZZ.children[1] = Shape819;

Anchor816YYY.children = new X3D.MFNode();

Anchor816ZZZ.children[0] = LOD817;

HAnimSite814ZZZ.children[1] = Anchor816;

HAnimSegment806ZZZ.children[3] = HAnimSite814;

HAnimJoint805YYY.children = new X3D.MFNode();

HAnimJoint805ZZZ.children[0] = HAnimSegment806;

HAnimJoint702ZZZ.children[1] = HAnimJoint805;

let HAnimJoint824 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint824.DEF = "hanim_l_eyelid_joint";
HAnimJoint824.name = "l_eyelid_joint";
HAnimJoint824.center = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let HAnimSegment825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment825.DEF = "hanim_l_eyelid";
HAnimSegment825.name = "l_eyelid";
let TouchSensor826 = browser.currentScene.createNode("TouchSensor");
TouchSensor826.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment825YYY.children = new X3D.MFNode();

HAnimSegment825ZZZ.children[0] = TouchSensor826;

let Transform827 = browser.currentScene.createNode("Transform");
Transform827.translation = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let Shape828 = browser.currentScene.createNode("Shape");
Shape828.USE = "HAnimJointShape";
Transform827YYY.child = new X3D.undefined();

Transform827ZZZ.child[0] = Shape828;

HAnimSegment825ZZZ.children[1] = Transform827;

HAnimJoint824YYY.children = new X3D.MFNode();

HAnimJoint824ZZZ.children[0] = HAnimSegment825;

HAnimJoint702ZZZ.children[2] = HAnimJoint824;

let HAnimJoint829 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint829.DEF = "hanim_l_eyebrow_joint";
HAnimJoint829.name = "l_eyebrow_joint";
HAnimJoint829.center = new X3D.SFVec3f([0.0336,1.635,0.0506]);
let HAnimSegment830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment830.DEF = "hanim_l_eyebrow";
HAnimSegment830.name = "l_eyebrow";
let TouchSensor831 = browser.currentScene.createNode("TouchSensor");
TouchSensor831.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment830YYY.children = new X3D.MFNode();

HAnimSegment830ZZZ.children[0] = TouchSensor831;

let Transform832 = browser.currentScene.createNode("Transform");
Transform832.translation = new X3D.SFVec3f([0.0336,1.635,0.0506]);
let Shape833 = browser.currentScene.createNode("Shape");
Shape833.USE = "HAnimJointShape";
Transform832YYY.child = new X3D.undefined();

Transform832ZZZ.child[0] = Shape833;

HAnimSegment830ZZZ.children[1] = Transform832;

HAnimJoint829YYY.children = new X3D.MFNode();

HAnimJoint829ZZZ.children[0] = HAnimSegment830;

HAnimJoint702ZZZ.children[3] = HAnimJoint829;

let HAnimJoint834 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint834.DEF = "hanim_r_eyeball_joint";
HAnimJoint834.name = "r_eyeball_joint";
HAnimJoint834.rotation = new X3D.SFRotation([-0.999999999999999,0,0,0.277705039416179]);
HAnimJoint834.center = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let HAnimSegment835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment835.DEF = "hanim_r_eyeball";
HAnimSegment835.name = "r_eyeball";
let TouchSensor836 = browser.currentScene.createNode("TouchSensor");
TouchSensor836.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment835YYY.children = new X3D.MFNode();

HAnimSegment835ZZZ.children[0] = TouchSensor836;

let Transform837 = browser.currentScene.createNode("Transform");
Transform837.translation = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let Shape838 = browser.currentScene.createNode("Shape");
Shape838.USE = "HAnimJointShape";
Transform837YYY.child = new X3D.undefined();

Transform837ZZZ.child[0] = Shape838;

HAnimSegment835ZZZ.children[1] = Transform837;

let Shape839 = browser.currentScene.createNode("Shape");
let LineSet840 = browser.currentScene.createNode("LineSet");
LineSet840.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA841 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA841.USE = "HAnimSiteViewpointLineColorRGBA";
color = ColorRGBA841;

let Coordinate842 = browser.currentScene.createNode("Coordinate");
Coordinate842.point = new X3D.MFVec3f([-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
coord = Coordinate842;

geometry = LineSet840;

HAnimSegment835ZZZ.children[2] = Shape839;

let HAnimSite843 = browser.currentScene.createNode("HAnimSite");
HAnimSite843.DEF = "hanim_r_eyeball_site_view";
HAnimSite843.name = "r_eyeball_site_view";
HAnimSite843.translation = new X3D.SFVec3f([-0.034,1.64,0.05]);
let Viewpoint844 = browser.currentScene.createNode("Viewpoint");
Viewpoint844.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint844.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint844.position = new X3D.SFVec3f([0,0,0]);
Viewpoint844.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite843YYY.children = new X3D.MFNode();

HAnimSite843ZZZ.children[0] = Viewpoint844;

let Anchor845 = browser.currentScene.createNode("Anchor");
Anchor845.description = "HAnimSite Viewpoint hanim_r_eyeball_site_view";
Anchor845.url = new X3D.MFString([new X3D.SFString("#hanim_r_eyeball_site_viewpoint")]);
let LOD846 = browser.currentScene.createNode("LOD");
LOD846.forceTransitions = True;
LOD846.range = new X3D.MFFloat([0.04]);
let WorldInfo847 = browser.currentScene.createNode("WorldInfo");
WorldInfo847.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD846YYY.children = new X3D.MFNode();

LOD846ZZZ.children[0] = WorldInfo847;

let Shape848 = browser.currentScene.createNode("Shape");
Shape848.USE = "HAnimSiteViewpointShape";
LOD846ZZZ.children[1] = Shape848;

Anchor845YYY.children = new X3D.MFNode();

Anchor845ZZZ.children[0] = LOD846;

HAnimSite843ZZZ.children[1] = Anchor845;

HAnimSegment835ZZZ.children[3] = HAnimSite843;

HAnimJoint834YYY.children = new X3D.MFNode();

HAnimJoint834ZZZ.children[0] = HAnimSegment835;

HAnimJoint702ZZZ.children[4] = HAnimJoint834;

let HAnimJoint849 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint849.DEF = "hanim_r_eyelid_joint";
HAnimJoint849.name = "r_eyelid_joint";
HAnimJoint849.center = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let HAnimSegment850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment850.DEF = "hanim_r_eyelid";
HAnimSegment850.name = "r_eyelid";
let TouchSensor851 = browser.currentScene.createNode("TouchSensor");
TouchSensor851.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment850YYY.children = new X3D.MFNode();

HAnimSegment850ZZZ.children[0] = TouchSensor851;

let Transform852 = browser.currentScene.createNode("Transform");
Transform852.translation = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let Shape853 = browser.currentScene.createNode("Shape");
Shape853.USE = "HAnimJointShape";
Transform852YYY.child = new X3D.undefined();

Transform852ZZZ.child[0] = Shape853;

HAnimSegment850ZZZ.children[1] = Transform852;

HAnimJoint849YYY.children = new X3D.MFNode();

HAnimJoint849ZZZ.children[0] = HAnimSegment850;

HAnimJoint702ZZZ.children[5] = HAnimJoint849;

let HAnimJoint854 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint854.DEF = "hanim_r_eyebrow_joint";
HAnimJoint854.name = "r_eyebrow_joint";
HAnimJoint854.center = new X3D.SFVec3f([-0.0336,1.635,0.0506]);
let HAnimSegment855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment855.DEF = "hanim_r_eyebrow";
HAnimSegment855.name = "r_eyebrow";
let TouchSensor856 = browser.currentScene.createNode("TouchSensor");
TouchSensor856.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment855YYY.children = new X3D.MFNode();

HAnimSegment855ZZZ.children[0] = TouchSensor856;

let Transform857 = browser.currentScene.createNode("Transform");
Transform857.translation = new X3D.SFVec3f([-0.0336,1.635,0.0506]);
let Shape858 = browser.currentScene.createNode("Shape");
Shape858.USE = "HAnimJointShape";
Transform857YYY.child = new X3D.undefined();

Transform857ZZZ.child[0] = Shape858;

HAnimSegment855ZZZ.children[1] = Transform857;

HAnimJoint854YYY.children = new X3D.MFNode();

HAnimJoint854ZZZ.children[0] = HAnimSegment855;

HAnimJoint702ZZZ.children[6] = HAnimJoint854;

let HAnimJoint859 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint859.DEF = "hanim_temporomandibular";
HAnimJoint859.name = "temporomandibular";
HAnimJoint859.center = new X3D.SFVec3f([0,1.63,0.015]);
let HAnimSegment860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment860.DEF = "hanim_jaw";
HAnimSegment860.name = "jaw";
let TouchSensor861 = browser.currentScene.createNode("TouchSensor");
TouchSensor861.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment860YYY.children = new X3D.MFNode();

HAnimSegment860ZZZ.children[0] = TouchSensor861;

let Transform862 = browser.currentScene.createNode("Transform");
Transform862.translation = new X3D.SFVec3f([0,1.63,0.015]);
let Shape863 = browser.currentScene.createNode("Shape");
Shape863.USE = "HAnimJointShape";
Transform862YYY.child = new X3D.undefined();

Transform862ZZZ.child[0] = Shape863;

HAnimSegment860ZZZ.children[1] = Transform862;

let Shape864 = browser.currentScene.createNode("Shape");
let LineSet865 = browser.currentScene.createNode("LineSet");
LineSet865.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA866 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA866.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA866;

let Coordinate867 = browser.currentScene.createNode("Coordinate");
Coordinate867.point = new X3D.MFVec3f([0,1.63,0.015,0.045,1.63,0]);
coord = Coordinate867;

geometry = LineSet865;

HAnimSegment860ZZZ.children[2] = Shape864;

let Shape868 = browser.currentScene.createNode("Shape");
let LineSet869 = browser.currentScene.createNode("LineSet");
LineSet869.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA870 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA870;

let Coordinate871 = browser.currentScene.createNode("Coordinate");
Coordinate871.point = new X3D.MFVec3f([0,1.63,0.015,-0.045,1.63,0]);
coord = Coordinate871;

geometry = LineSet869;

HAnimSegment860ZZZ.children[3] = Shape868;

let HAnimSite872 = browser.currentScene.createNode("HAnimSite");
HAnimSite872.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite872.name = "temporomandibular_l_site_pt";
HAnimSite872.translation = new X3D.SFVec3f([0.045,1.63,0]);
let TouchSensor873 = browser.currentScene.createNode("TouchSensor");
TouchSensor873.description = "HAnimSite temporomandibular_l_site";
HAnimSite872YYY.children = new X3D.MFNode();

HAnimSite872ZZZ.children[0] = TouchSensor873;

let Shape874 = browser.currentScene.createNode("Shape");
Shape874.USE = "HAnimSiteShape";
HAnimSite872ZZZ.children[1] = Shape874;

HAnimSegment860ZZZ.children[4] = HAnimSite872;

let HAnimSite875 = browser.currentScene.createNode("HAnimSite");
HAnimSite875.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite875.name = "temporomandibular_r_site_pt";
HAnimSite875.translation = new X3D.SFVec3f([-0.045,1.63,0]);
let TouchSensor876 = browser.currentScene.createNode("TouchSensor");
TouchSensor876.description = "HAnimSite temporomandibular_r_site";
HAnimSite875YYY.children = new X3D.MFNode();

HAnimSite875ZZZ.children[0] = TouchSensor876;

let Shape877 = browser.currentScene.createNode("Shape");
Shape877.USE = "HAnimSiteShape";
HAnimSite875ZZZ.children[1] = Shape877;

HAnimSegment860ZZZ.children[5] = HAnimSite875;

HAnimJoint859YYY.children = new X3D.MFNode();

HAnimJoint859ZZZ.children[0] = HAnimSegment860;

HAnimJoint702ZZZ.children[7] = HAnimJoint859;

HAnimJoint693ZZZ.children[1] = HAnimJoint702;

HAnimJoint684ZZZ.children[1] = HAnimJoint693;

HAnimJoint675ZZZ.children[1] = HAnimJoint684;

HAnimJoint666ZZZ.children[1] = HAnimJoint675;

HAnimJoint657ZZZ.children[1] = HAnimJoint666;

HAnimJoint648ZZZ.children[1] = HAnimJoint657;

HAnimJoint625ZZZ.children[1] = HAnimJoint648;

HAnimJoint594ZZZ.children[1] = HAnimJoint625;

let HAnimJoint878 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint878.DEF = "hanim_l_sternoclavicular";
HAnimJoint878.name = "l_sternoclavicular";
HAnimJoint878.rotation = new X3D.SFRotation([0,0,1.00000000000003,0.108042894183947]);
HAnimJoint878.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let HAnimSegment879 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment879.DEF = "hanim_l_clavicle";
HAnimSegment879.name = "l_clavicle";
let TouchSensor880 = browser.currentScene.createNode("TouchSensor");
TouchSensor880.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment879YYY.children = new X3D.MFNode();

HAnimSegment879ZZZ.children[0] = TouchSensor880;

let Transform881 = browser.currentScene.createNode("Transform");
Transform881.translation = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let Shape882 = browser.currentScene.createNode("Shape");
Shape882.USE = "HAnimJointShape";
Transform881YYY.child = new X3D.undefined();

Transform881ZZZ.child[0] = Shape882;

HAnimSegment879ZZZ.children[1] = Transform881;

let Shape883 = browser.currentScene.createNode("Shape");
let LineSet884 = browser.currentScene.createNode("LineSet");
LineSet884.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA885 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA885.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA885;

let Coordinate886 = browser.currentScene.createNode("Coordinate");
Coordinate886.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
coord = Coordinate886;

geometry = LineSet884;

HAnimSegment879ZZZ.children[2] = Shape883;

let Shape887 = browser.currentScene.createNode("Shape");
let LineSet888 = browser.currentScene.createNode("LineSet");
LineSet888.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA889 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA889.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA889;

let Coordinate890 = browser.currentScene.createNode("Coordinate");
Coordinate890.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
coord = Coordinate890;

geometry = LineSet888;

HAnimSegment879ZZZ.children[3] = Shape887;

let Shape891 = browser.currentScene.createNode("Shape");
let LineSet892 = browser.currentScene.createNode("LineSet");
LineSet892.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA893 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA893.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA893;

let Coordinate894 = browser.currentScene.createNode("Coordinate");
Coordinate894.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
coord = Coordinate894;

geometry = LineSet892;

HAnimSegment879ZZZ.children[4] = Shape891;

let Shape895 = browser.currentScene.createNode("Shape");
let LineSet896 = browser.currentScene.createNode("LineSet");
LineSet896.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA897 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA897.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA897;

let Coordinate898 = browser.currentScene.createNode("Coordinate");
Coordinate898.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
coord = Coordinate898;

geometry = LineSet896;

HAnimSegment879ZZZ.children[5] = Shape895;

let Shape899 = browser.currentScene.createNode("Shape");
let LineSet900 = browser.currentScene.createNode("LineSet");
LineSet900.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA901 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA901.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA901;

let Coordinate902 = browser.currentScene.createNode("Coordinate");
Coordinate902.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
coord = Coordinate902;

geometry = LineSet900;

HAnimSegment879ZZZ.children[6] = Shape899;

let HAnimSite903 = browser.currentScene.createNode("HAnimSite");
HAnimSite903.DEF = "hanim_l_clavicale_pt";
HAnimSite903.name = "l_clavicale_pt";
HAnimSite903.translation = new X3D.SFVec3f([0.0271,1.4943,0.0394]);
let TouchSensor904 = browser.currentScene.createNode("TouchSensor");
TouchSensor904.description = "HAnimSite l_clavicale";
HAnimSite903YYY.children = new X3D.MFNode();

HAnimSite903ZZZ.children[0] = TouchSensor904;

let Shape905 = browser.currentScene.createNode("Shape");
Shape905.USE = "HAnimSiteShape";
HAnimSite903ZZZ.children[1] = Shape905;

HAnimSegment879ZZZ.children[7] = HAnimSite903;

let HAnimSite906 = browser.currentScene.createNode("HAnimSite");
HAnimSite906.DEF = "hanim_l_acromion_pt";
HAnimSite906.name = "l_acromion_pt";
HAnimSite906.translation = new X3D.SFVec3f([0.2032,1.476,-0.049]);
let TouchSensor907 = browser.currentScene.createNode("TouchSensor");
TouchSensor907.description = "HAnimSite l_acromion";
HAnimSite906YYY.children = new X3D.MFNode();

HAnimSite906ZZZ.children[0] = TouchSensor907;

let Shape908 = browser.currentScene.createNode("Shape");
Shape908.USE = "HAnimSiteShape";
HAnimSite906ZZZ.children[1] = Shape908;

HAnimSegment879ZZZ.children[8] = HAnimSite906;

let HAnimSite909 = browser.currentScene.createNode("HAnimSite");
HAnimSite909.DEF = "hanim_l_axilla_ant_pt";
HAnimSite909.name = "l_axilla_ant_pt";
HAnimSite909.translation = new X3D.SFVec3f([0.1777,1.4065,-0.0075]);
let TouchSensor910 = browser.currentScene.createNode("TouchSensor");
TouchSensor910.description = "HAnimSite l_axilla_ant";
HAnimSite909YYY.children = new X3D.MFNode();

HAnimSite909ZZZ.children[0] = TouchSensor910;

let Shape911 = browser.currentScene.createNode("Shape");
Shape911.USE = "HAnimSiteShape";
HAnimSite909ZZZ.children[1] = Shape911;

HAnimSegment879ZZZ.children[9] = HAnimSite909;

let HAnimSite912 = browser.currentScene.createNode("HAnimSite");
HAnimSite912.DEF = "hanim_l_axilla_post_pt";
HAnimSite912.name = "l_axilla_post_pt";
HAnimSite912.translation = new X3D.SFVec3f([0.1706,1.4072,-0.0875]);
let TouchSensor913 = browser.currentScene.createNode("TouchSensor");
TouchSensor913.description = "HAnimSite l_axilla_post";
HAnimSite912YYY.children = new X3D.MFNode();

HAnimSite912ZZZ.children[0] = TouchSensor913;

let Shape914 = browser.currentScene.createNode("Shape");
Shape914.USE = "HAnimSiteShape";
HAnimSite912ZZZ.children[1] = Shape914;

HAnimSegment879ZZZ.children[10] = HAnimSite912;

HAnimJoint878YYY.children = new X3D.MFNode();

HAnimJoint878ZZZ.children[0] = HAnimSegment879;

let HAnimJoint915 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint915.DEF = "hanim_l_acromioclavicular";
HAnimJoint915.name = "l_acromioclavicular";
HAnimJoint915.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let HAnimSegment916 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment916.DEF = "hanim_l_scapula";
HAnimSegment916.name = "l_scapula";
let TouchSensor917 = browser.currentScene.createNode("TouchSensor");
TouchSensor917.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment916YYY.children = new X3D.MFNode();

HAnimSegment916ZZZ.children[0] = TouchSensor917;

let Transform918 = browser.currentScene.createNode("Transform");
Transform918.translation = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let Shape919 = browser.currentScene.createNode("Shape");
Shape919.USE = "HAnimJointShape";
Transform918YYY.child = new X3D.undefined();

Transform918ZZZ.child[0] = Shape919;

HAnimSegment916ZZZ.children[1] = Transform918;

let Shape920 = browser.currentScene.createNode("Shape");
let LineSet921 = browser.currentScene.createNode("LineSet");
LineSet921.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA922 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA922.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA922;

let Coordinate923 = browser.currentScene.createNode("Coordinate");
Coordinate923.point = new X3D.MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
coord = Coordinate923;

geometry = LineSet921;

HAnimSegment916ZZZ.children[2] = Shape920;

HAnimJoint915YYY.children = new X3D.MFNode();

HAnimJoint915ZZZ.children[0] = HAnimSegment916;

let HAnimJoint924 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint924.DEF = "hanim_l_shoulder";
HAnimJoint924.name = "l_shoulder";
HAnimJoint924.rotation = new X3D.SFRotation([0,0,1,0.950777468818762]);
HAnimJoint924.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let HAnimSegment925 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment925.DEF = "hanim_l_upperarm";
HAnimSegment925.name = "l_upperarm";
let TouchSensor926 = browser.currentScene.createNode("TouchSensor");
TouchSensor926.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment925YYY.children = new X3D.MFNode();

HAnimSegment925ZZZ.children[0] = TouchSensor926;

let Transform927 = browser.currentScene.createNode("Transform");
Transform927.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let Shape928 = browser.currentScene.createNode("Shape");
Shape928.USE = "HAnimJointShape";
Transform927YYY.child = new X3D.undefined();

Transform927ZZZ.child[0] = Shape928;

HAnimSegment925ZZZ.children[1] = Transform927;

let Shape929 = browser.currentScene.createNode("Shape");
let LineSet930 = browser.currentScene.createNode("LineSet");
LineSet930.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA931 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA931.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA931;

let Coordinate932 = browser.currentScene.createNode("Coordinate");
Coordinate932.point = new X3D.MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
coord = Coordinate932;

geometry = LineSet930;

HAnimSegment925ZZZ.children[2] = Shape929;

let Shape933 = browser.currentScene.createNode("Shape");
let LineSet934 = browser.currentScene.createNode("LineSet");
LineSet934.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA935 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA935.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA935;

let Coordinate936 = browser.currentScene.createNode("Coordinate");
Coordinate936.point = new X3D.MFVec3f([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
coord = Coordinate936;

geometry = LineSet934;

HAnimSegment925ZZZ.children[3] = Shape933;

let HAnimSite937 = browser.currentScene.createNode("HAnimSite");
HAnimSite937.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite937.name = "l_humeral_lateral_epicn_pt";
HAnimSite937.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
let TouchSensor938 = browser.currentScene.createNode("TouchSensor");
TouchSensor938.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite937YYY.children = new X3D.MFNode();

HAnimSite937ZZZ.children[0] = TouchSensor938;

let Shape939 = browser.currentScene.createNode("Shape");
Shape939.USE = "HAnimSiteShape";
HAnimSite937ZZZ.children[1] = Shape939;

HAnimSegment925ZZZ.children[4] = HAnimSite937;

HAnimJoint924YYY.children = new X3D.MFNode();

HAnimJoint924ZZZ.children[0] = HAnimSegment925;

let HAnimJoint940 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint940.DEF = "hanim_l_elbow";
HAnimJoint940.name = "l_elbow";
HAnimJoint940.rotation = new X3D.SFRotation([-1,0,0,0.297117959005863]);
HAnimJoint940.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let HAnimSegment941 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment941.DEF = "hanim_l_forearm";
HAnimSegment941.name = "l_forearm";
let TouchSensor942 = browser.currentScene.createNode("TouchSensor");
TouchSensor942.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment941YYY.children = new X3D.MFNode();

HAnimSegment941ZZZ.children[0] = TouchSensor942;

let Transform943 = browser.currentScene.createNode("Transform");
Transform943.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let Shape944 = browser.currentScene.createNode("Shape");
Shape944.USE = "HAnimJointShape";
Transform943YYY.child = new X3D.undefined();

Transform943ZZZ.child[0] = Shape944;

HAnimSegment941ZZZ.children[1] = Transform943;

let Shape945 = browser.currentScene.createNode("Shape");
let LineSet946 = browser.currentScene.createNode("LineSet");
LineSet946.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA947 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA947.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA947;

let Coordinate948 = browser.currentScene.createNode("Coordinate");
Coordinate948.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
coord = Coordinate948;

geometry = LineSet946;

HAnimSegment941ZZZ.children[2] = Shape945;

let Shape949 = browser.currentScene.createNode("Shape");
let LineSet950 = browser.currentScene.createNode("LineSet");
LineSet950.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA951 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA951.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA951;

let Coordinate952 = browser.currentScene.createNode("Coordinate");
Coordinate952.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
coord = Coordinate952;

geometry = LineSet950;

HAnimSegment941ZZZ.children[3] = Shape949;

let Shape953 = browser.currentScene.createNode("Shape");
let LineSet954 = browser.currentScene.createNode("LineSet");
LineSet954.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA955 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA955.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA955;

let Coordinate956 = browser.currentScene.createNode("Coordinate");
Coordinate956.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
coord = Coordinate956;

geometry = LineSet954;

HAnimSegment941ZZZ.children[4] = Shape953;

let Shape957 = browser.currentScene.createNode("Shape");
let LineSet958 = browser.currentScene.createNode("LineSet");
LineSet958.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA959 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA959.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA959;

let Coordinate960 = browser.currentScene.createNode("Coordinate");
Coordinate960.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
coord = Coordinate960;

geometry = LineSet958;

HAnimSegment941ZZZ.children[5] = Shape957;

let Shape961 = browser.currentScene.createNode("Shape");
let LineSet962 = browser.currentScene.createNode("LineSet");
LineSet962.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA963 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA963.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA963;

let Coordinate964 = browser.currentScene.createNode("Coordinate");
Coordinate964.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
coord = Coordinate964;

geometry = LineSet962;

HAnimSegment941ZZZ.children[6] = Shape961;

let HAnimSite965 = browser.currentScene.createNode("HAnimSite");
HAnimSite965.DEF = "hanim_l_radial_styloid_pt";
HAnimSite965.name = "l_radial_styloid_pt";
HAnimSite965.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let TouchSensor966 = browser.currentScene.createNode("TouchSensor");
TouchSensor966.description = "HAnimSite l_radial_styloid";
HAnimSite965YYY.children = new X3D.MFNode();

HAnimSite965ZZZ.children[0] = TouchSensor966;

let Shape967 = browser.currentScene.createNode("Shape");
Shape967.USE = "HAnimSiteShape";
HAnimSite965ZZZ.children[1] = Shape967;

HAnimSegment941ZZZ.children[7] = HAnimSite965;

let HAnimSite968 = browser.currentScene.createNode("HAnimSite");
HAnimSite968.DEF = "hanim_l_olecranon_pt";
HAnimSite968.name = "l_olecranon_pt";
HAnimSite968.translation = new X3D.SFVec3f([0.1962,1.1375,-0.1123]);
let TouchSensor969 = browser.currentScene.createNode("TouchSensor");
TouchSensor969.description = "HAnimSite l_olecranon";
HAnimSite968YYY.children = new X3D.MFNode();

HAnimSite968ZZZ.children[0] = TouchSensor969;

let Shape970 = browser.currentScene.createNode("Shape");
Shape970.USE = "HAnimSiteShape";
HAnimSite968ZZZ.children[1] = Shape970;

HAnimSegment941ZZZ.children[8] = HAnimSite968;

let HAnimSite971 = browser.currentScene.createNode("HAnimSite");
HAnimSite971.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite971.name = "l_humeral_medial_epicn_pt";
HAnimSite971.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
let TouchSensor972 = browser.currentScene.createNode("TouchSensor");
TouchSensor972.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite971YYY.children = new X3D.MFNode();

HAnimSite971ZZZ.children[0] = TouchSensor972;

let Shape973 = browser.currentScene.createNode("Shape");
Shape973.USE = "HAnimSiteShape";
HAnimSite971ZZZ.children[1] = Shape973;

HAnimSegment941ZZZ.children[9] = HAnimSite971;

let HAnimSite974 = browser.currentScene.createNode("HAnimSite");
HAnimSite974.DEF = "hanim_l_radiale_pt";
HAnimSite974.name = "l_radiale_pt";
HAnimSite974.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
let TouchSensor975 = browser.currentScene.createNode("TouchSensor");
TouchSensor975.description = "HAnimSite l_radiale";
HAnimSite974YYY.children = new X3D.MFNode();

HAnimSite974ZZZ.children[0] = TouchSensor975;

let Shape976 = browser.currentScene.createNode("Shape");
Shape976.USE = "HAnimSiteShape";
HAnimSite974ZZZ.children[1] = Shape976;

HAnimSegment941ZZZ.children[10] = HAnimSite974;

HAnimJoint940YYY.children = new X3D.MFNode();

HAnimJoint940ZZZ.children[0] = HAnimSegment941;

let HAnimJoint977 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint977.DEF = "hanim_l_wrist";
HAnimJoint977.name = "l_wrist";
HAnimJoint977.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let HAnimSegment978 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment978.DEF = "hanim_l_hand";
HAnimSegment978.name = "l_hand";
let TouchSensor979 = browser.currentScene.createNode("TouchSensor");
TouchSensor979.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment978YYY.children = new X3D.MFNode();

HAnimSegment978ZZZ.children[0] = TouchSensor979;

let Transform980 = browser.currentScene.createNode("Transform");
Transform980.translation = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let Shape981 = browser.currentScene.createNode("Shape");
Shape981.USE = "HAnimJointShape";
Transform980YYY.child = new X3D.undefined();

Transform980ZZZ.child[0] = Shape981;

HAnimSegment978ZZZ.children[1] = Transform980;

let Shape982 = browser.currentScene.createNode("Shape");
let LineSet983 = browser.currentScene.createNode("LineSet");
LineSet983.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA984 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA984.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA984;

let Coordinate985 = browser.currentScene.createNode("Coordinate");
Coordinate985.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
coord = Coordinate985;

geometry = LineSet983;

HAnimSegment978ZZZ.children[2] = Shape982;

let Shape986 = browser.currentScene.createNode("Shape");
let LineSet987 = browser.currentScene.createNode("LineSet");
LineSet987.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA988 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA988.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA988;

let Coordinate989 = browser.currentScene.createNode("Coordinate");
Coordinate989.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
coord = Coordinate989;

geometry = LineSet987;

HAnimSegment978ZZZ.children[3] = Shape986;

let Shape990 = browser.currentScene.createNode("Shape");
let LineSet991 = browser.currentScene.createNode("LineSet");
LineSet991.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA992 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA992.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA992;

let Coordinate993 = browser.currentScene.createNode("Coordinate");
Coordinate993.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
coord = Coordinate993;

geometry = LineSet991;

HAnimSegment978ZZZ.children[4] = Shape990;

let Shape994 = browser.currentScene.createNode("Shape");
let LineSet995 = browser.currentScene.createNode("LineSet");
LineSet995.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA996 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA996.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA996;

let Coordinate997 = browser.currentScene.createNode("Coordinate");
Coordinate997.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
coord = Coordinate997;

geometry = LineSet995;

HAnimSegment978ZZZ.children[5] = Shape994;

let Shape998 = browser.currentScene.createNode("Shape");
let LineSet999 = browser.currentScene.createNode("LineSet");
LineSet999.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1000 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1000.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1000;

let Coordinate1001 = browser.currentScene.createNode("Coordinate");
Coordinate1001.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
coord = Coordinate1001;

geometry = LineSet999;

HAnimSegment978ZZZ.children[6] = Shape998;

let Shape1002 = browser.currentScene.createNode("Shape");
let LineSet1003 = browser.currentScene.createNode("LineSet");
LineSet1003.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1004 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1004.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1004;

let Coordinate1005 = browser.currentScene.createNode("Coordinate");
Coordinate1005.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
coord = Coordinate1005;

geometry = LineSet1003;

HAnimSegment978ZZZ.children[7] = Shape1002;

let Shape1006 = browser.currentScene.createNode("Shape");
let LineSet1007 = browser.currentScene.createNode("LineSet");
LineSet1007.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1008 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1008.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1008;

let Coordinate1009 = browser.currentScene.createNode("Coordinate");
Coordinate1009.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
coord = Coordinate1009;

geometry = LineSet1007;

HAnimSegment978ZZZ.children[8] = Shape1006;

let Shape1010 = browser.currentScene.createNode("Shape");
let LineSet1011 = browser.currentScene.createNode("LineSet");
LineSet1011.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1012 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1012.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1012;

let Coordinate1013 = browser.currentScene.createNode("Coordinate");
Coordinate1013.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
coord = Coordinate1013;

geometry = LineSet1011;

HAnimSegment978ZZZ.children[9] = Shape1010;

let Shape1014 = browser.currentScene.createNode("Shape");
let LineSet1015 = browser.currentScene.createNode("LineSet");
LineSet1015.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1016 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSiteViewpointLineColorRGBA";
color = ColorRGBA1016;

let Coordinate1017 = browser.currentScene.createNode("Coordinate");
Coordinate1017.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
coord = Coordinate1017;

geometry = LineSet1015;

HAnimSegment978ZZZ.children[10] = Shape1014;

let HAnimSite1018 = browser.currentScene.createNode("HAnimSite");
HAnimSite1018.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1018.name = "l_metacarpal_pha2_pt";
HAnimSite1018.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let TouchSensor1019 = browser.currentScene.createNode("TouchSensor");
TouchSensor1019.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1018YYY.children = new X3D.MFNode();

HAnimSite1018ZZZ.children[0] = TouchSensor1019;

let Shape1020 = browser.currentScene.createNode("Shape");
Shape1020.USE = "HAnimSiteShape";
HAnimSite1018ZZZ.children[1] = Shape1020;

HAnimSegment978ZZZ.children[11] = HAnimSite1018;

let HAnimSite1021 = browser.currentScene.createNode("HAnimSite");
HAnimSite1021.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1021.name = "l_ulnar_styloid_pt";
HAnimSite1021.translation = new X3D.SFVec3f([0.2142,0.8529,-0.0648]);
let TouchSensor1022 = browser.currentScene.createNode("TouchSensor");
TouchSensor1022.description = "HAnimSite l_ulnar_styloid";
HAnimSite1021YYY.children = new X3D.MFNode();

HAnimSite1021ZZZ.children[0] = TouchSensor1022;

let Shape1023 = browser.currentScene.createNode("Shape");
Shape1023.USE = "HAnimSiteShape";
HAnimSite1021ZZZ.children[1] = Shape1023;

HAnimSegment978ZZZ.children[12] = HAnimSite1021;

let HAnimSite1024 = browser.currentScene.createNode("HAnimSite");
HAnimSite1024.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1024.name = "l_metacarpal_pha5_pt";
HAnimSite1024.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let TouchSensor1025 = browser.currentScene.createNode("TouchSensor");
TouchSensor1025.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1024YYY.children = new X3D.MFNode();

HAnimSite1024ZZZ.children[0] = TouchSensor1025;

let Shape1026 = browser.currentScene.createNode("Shape");
Shape1026.USE = "HAnimSiteShape";
HAnimSite1024ZZZ.children[1] = Shape1026;

HAnimSegment978ZZZ.children[13] = HAnimSite1024;

let HAnimSite1027 = browser.currentScene.createNode("HAnimSite");
HAnimSite1027.DEF = "hanim_l_hand_front_view";
HAnimSite1027.name = "l_hand_front_view";
HAnimSite1027.translation = new X3D.SFVec3f([0.3,0.75,0.45]);
let Viewpoint1028 = browser.currentScene.createNode("Viewpoint");
Viewpoint1028.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1028.description = "left hand front";
Viewpoint1028.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1028.centerOfRotation = new X3D.SFVec3f([0,0.7,0]);
HAnimSite1027YYY.children = new X3D.MFNode();

HAnimSite1027ZZZ.children[0] = Viewpoint1028;

let Anchor1029 = browser.currentScene.createNode("Anchor");
Anchor1029.description = "HAnimSite Viewpoint hanim_l_hand_front_view";
Anchor1029.url = new X3D.MFString([new X3D.SFString("#hanim_l_hand_front_viewpoint")]);
let LOD1030 = browser.currentScene.createNode("LOD");
LOD1030.forceTransitions = True;
LOD1030.range = new X3D.MFFloat([0.04]);
let WorldInfo1031 = browser.currentScene.createNode("WorldInfo");
WorldInfo1031.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1030YYY.children = new X3D.MFNode();

LOD1030ZZZ.children[0] = WorldInfo1031;

let Shape1032 = browser.currentScene.createNode("Shape");
Shape1032.USE = "HAnimSiteViewpointShape";
LOD1030ZZZ.children[1] = Shape1032;

Anchor1029YYY.children = new X3D.MFNode();

Anchor1029ZZZ.children[0] = LOD1030;

HAnimSite1027ZZZ.children[1] = Anchor1029;

HAnimSegment978ZZZ.children[14] = HAnimSite1027;

HAnimJoint977YYY.children = new X3D.MFNode();

HAnimJoint977ZZZ.children[0] = HAnimSegment978;

let HAnimJoint1033 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1033.DEF = "hanim_l_thumb1";
HAnimJoint1033.name = "l_thumb1";
HAnimJoint1033.rotation = new X3D.SFRotation([1,0,0,0.270107235459875]);
HAnimJoint1033.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let HAnimSegment1034 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1034.DEF = "hanim_l_thumb_metacarpal";
HAnimSegment1034.name = "l_thumb_metacarpal";
let TouchSensor1035 = browser.currentScene.createNode("TouchSensor");
TouchSensor1035.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1034YYY.children = new X3D.MFNode();

HAnimSegment1034ZZZ.children[0] = TouchSensor1035;

let Transform1036 = browser.currentScene.createNode("Transform");
Transform1036.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Shape1037 = browser.currentScene.createNode("Shape");
Shape1037.USE = "HAnimJointShape";
Transform1036YYY.child = new X3D.undefined();

Transform1036ZZZ.child[0] = Shape1037;

HAnimSegment1034ZZZ.children[1] = Transform1036;

let Shape1038 = browser.currentScene.createNode("Shape");
let LineSet1039 = browser.currentScene.createNode("LineSet");
LineSet1039.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1040 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1040.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1040;

let Coordinate1041 = browser.currentScene.createNode("Coordinate");
Coordinate1041.point = new X3D.MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
coord = Coordinate1041;

geometry = LineSet1039;

HAnimSegment1034ZZZ.children[2] = Shape1038;

HAnimJoint1033YYY.children = new X3D.MFNode();

HAnimJoint1033ZZZ.children[0] = HAnimSegment1034;

let HAnimJoint1042 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1042.DEF = "hanim_l_thumb2";
HAnimJoint1042.name = "l_thumb2";
HAnimJoint1042.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let HAnimSegment1043 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1043.DEF = "hanim_l_thumb_proximal";
HAnimSegment1043.name = "l_thumb_proximal";
let TouchSensor1044 = browser.currentScene.createNode("TouchSensor");
TouchSensor1044.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1043YYY.children = new X3D.MFNode();

HAnimSegment1043ZZZ.children[0] = TouchSensor1044;

let Transform1045 = browser.currentScene.createNode("Transform");
Transform1045.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Shape1046 = browser.currentScene.createNode("Shape");
Shape1046.USE = "HAnimJointShape";
Transform1045YYY.child = new X3D.undefined();

Transform1045ZZZ.child[0] = Shape1046;

HAnimSegment1043ZZZ.children[1] = Transform1045;

let Shape1047 = browser.currentScene.createNode("Shape");
let LineSet1048 = browser.currentScene.createNode("LineSet");
LineSet1048.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1049 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1049.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1049;

let Coordinate1050 = browser.currentScene.createNode("Coordinate");
Coordinate1050.point = new X3D.MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
coord = Coordinate1050;

geometry = LineSet1048;

HAnimSegment1043ZZZ.children[2] = Shape1047;

HAnimJoint1042YYY.children = new X3D.MFNode();

HAnimJoint1042ZZZ.children[0] = HAnimSegment1043;

let HAnimJoint1051 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1051.DEF = "hanim_l_thumb3";
HAnimJoint1051.name = "l_thumb3";
HAnimJoint1051.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let HAnimSegment1052 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1052.DEF = "hanim_l_thumb_distal";
HAnimSegment1052.name = "l_thumb_distal";
let TouchSensor1053 = browser.currentScene.createNode("TouchSensor");
TouchSensor1053.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1052YYY.children = new X3D.MFNode();

HAnimSegment1052ZZZ.children[0] = TouchSensor1053;

let Transform1054 = browser.currentScene.createNode("Transform");
Transform1054.translation = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let Shape1055 = browser.currentScene.createNode("Shape");
Shape1055.USE = "HAnimJointShape";
Transform1054YYY.child = new X3D.undefined();

Transform1054ZZZ.child[0] = Shape1055;

HAnimSegment1052ZZZ.children[1] = Transform1054;

let Shape1056 = browser.currentScene.createNode("Shape");
let LineSet1057 = browser.currentScene.createNode("LineSet");
LineSet1057.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1058 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1058.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1058;

let Coordinate1059 = browser.currentScene.createNode("Coordinate");
Coordinate1059.point = new X3D.MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
coord = Coordinate1059;

geometry = LineSet1057;

HAnimSegment1052ZZZ.children[2] = Shape1056;

let HAnimSite1060 = browser.currentScene.createNode("HAnimSite");
HAnimSite1060.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1060.name = "l_thumb_distal_tip";
HAnimSite1060.translation = new X3D.SFVec3f([0.1982,0.8061,0.0759]);
let TouchSensor1061 = browser.currentScene.createNode("TouchSensor");
TouchSensor1061.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1060YYY.children = new X3D.MFNode();

HAnimSite1060ZZZ.children[0] = TouchSensor1061;

let Shape1062 = browser.currentScene.createNode("Shape");
Shape1062.USE = "HAnimSiteShape";
HAnimSite1060ZZZ.children[1] = Shape1062;

HAnimSegment1052ZZZ.children[3] = HAnimSite1060;

HAnimJoint1051YYY.children = new X3D.MFNode();

HAnimJoint1051ZZZ.children[0] = HAnimSegment1052;

HAnimJoint1042ZZZ.children[1] = HAnimJoint1051;

HAnimJoint1033ZZZ.children[1] = HAnimJoint1042;

HAnimJoint977ZZZ.children[1] = HAnimJoint1033;

let HAnimJoint1063 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1063.DEF = "hanim_l_index0";
HAnimJoint1063.name = "l_index0";
HAnimJoint1063.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let HAnimSegment1064 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1064.DEF = "hanim_l_index_metacarpal";
HAnimSegment1064.name = "l_index_metacarpal";
let TouchSensor1065 = browser.currentScene.createNode("TouchSensor");
TouchSensor1065.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1064YYY.children = new X3D.MFNode();

HAnimSegment1064ZZZ.children[0] = TouchSensor1065;

let Transform1066 = browser.currentScene.createNode("Transform");
Transform1066.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Shape1067 = browser.currentScene.createNode("Shape");
Shape1067.USE = "HAnimJointShape";
Transform1066YYY.child = new X3D.undefined();

Transform1066ZZZ.child[0] = Shape1067;

HAnimSegment1064ZZZ.children[1] = Transform1066;

let Shape1068 = browser.currentScene.createNode("Shape");
let LineSet1069 = browser.currentScene.createNode("LineSet");
LineSet1069.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1070 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1070.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1070;

let Coordinate1071 = browser.currentScene.createNode("Coordinate");
Coordinate1071.point = new X3D.MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
coord = Coordinate1071;

geometry = LineSet1069;

HAnimSegment1064ZZZ.children[2] = Shape1068;

HAnimJoint1063YYY.children = new X3D.MFNode();

HAnimJoint1063ZZZ.children[0] = HAnimSegment1064;

let HAnimJoint1072 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1072.DEF = "hanim_l_index1";
HAnimJoint1072.name = "l_index1";
HAnimJoint1072.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let HAnimSegment1073 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1073.DEF = "hanim_l_index_proximal";
HAnimSegment1073.name = "l_index_proximal";
let TouchSensor1074 = browser.currentScene.createNode("TouchSensor");
TouchSensor1074.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1073YYY.children = new X3D.MFNode();

HAnimSegment1073ZZZ.children[0] = TouchSensor1074;

let Transform1075 = browser.currentScene.createNode("Transform");
Transform1075.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Shape1076 = browser.currentScene.createNode("Shape");
Shape1076.USE = "HAnimJointShape";
Transform1075YYY.child = new X3D.undefined();

Transform1075ZZZ.child[0] = Shape1076;

HAnimSegment1073ZZZ.children[1] = Transform1075;

let Shape1077 = browser.currentScene.createNode("Shape");
let LineSet1078 = browser.currentScene.createNode("LineSet");
LineSet1078.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1079 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1079.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1079;

let Coordinate1080 = browser.currentScene.createNode("Coordinate");
Coordinate1080.point = new X3D.MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
coord = Coordinate1080;

geometry = LineSet1078;

HAnimSegment1073ZZZ.children[2] = Shape1077;

HAnimJoint1072YYY.children = new X3D.MFNode();

HAnimJoint1072ZZZ.children[0] = HAnimSegment1073;

let HAnimJoint1081 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1081.DEF = "hanim_l_index2";
HAnimJoint1081.name = "l_index2";
HAnimJoint1081.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let HAnimSegment1082 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1082.DEF = "hanim_l_index_middle";
HAnimSegment1082.name = "l_index_middle";
let TouchSensor1083 = browser.currentScene.createNode("TouchSensor");
TouchSensor1083.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1082YYY.children = new X3D.MFNode();

HAnimSegment1082ZZZ.children[0] = TouchSensor1083;

let Transform1084 = browser.currentScene.createNode("Transform");
Transform1084.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Shape1085 = browser.currentScene.createNode("Shape");
Shape1085.USE = "HAnimJointShape";
Transform1084YYY.child = new X3D.undefined();

Transform1084ZZZ.child[0] = Shape1085;

HAnimSegment1082ZZZ.children[1] = Transform1084;

let Shape1086 = browser.currentScene.createNode("Shape");
let LineSet1087 = browser.currentScene.createNode("LineSet");
LineSet1087.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1088 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1088.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1088;

let Coordinate1089 = browser.currentScene.createNode("Coordinate");
Coordinate1089.point = new X3D.MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
coord = Coordinate1089;

geometry = LineSet1087;

HAnimSegment1082ZZZ.children[2] = Shape1086;

HAnimJoint1081YYY.children = new X3D.MFNode();

HAnimJoint1081ZZZ.children[0] = HAnimSegment1082;

let HAnimJoint1090 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1090.DEF = "hanim_l_index3";
HAnimJoint1090.name = "l_index3";
HAnimJoint1090.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let HAnimSegment1091 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1091.DEF = "hanim_l_index_distal";
HAnimSegment1091.name = "l_index_distal";
let TouchSensor1092 = browser.currentScene.createNode("TouchSensor");
TouchSensor1092.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1091YYY.children = new X3D.MFNode();

HAnimSegment1091ZZZ.children[0] = TouchSensor1092;

let Transform1093 = browser.currentScene.createNode("Transform");
Transform1093.translation = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let Shape1094 = browser.currentScene.createNode("Shape");
Shape1094.USE = "HAnimJointShape";
Transform1093YYY.child = new X3D.undefined();

Transform1093ZZZ.child[0] = Shape1094;

HAnimSegment1091ZZZ.children[1] = Transform1093;

let Shape1095 = browser.currentScene.createNode("Shape");
let LineSet1096 = browser.currentScene.createNode("LineSet");
LineSet1096.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1097 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1097.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1097;

let Coordinate1098 = browser.currentScene.createNode("Coordinate");
Coordinate1098.point = new X3D.MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
coord = Coordinate1098;

geometry = LineSet1096;

HAnimSegment1091ZZZ.children[2] = Shape1095;

let Shape1099 = browser.currentScene.createNode("Shape");
let LineSet1100 = browser.currentScene.createNode("LineSet");
LineSet1100.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1101 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1101.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1101;

let Coordinate1102 = browser.currentScene.createNode("Coordinate");
Coordinate1102.point = new X3D.MFVec3f([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
coord = Coordinate1102;

geometry = LineSet1100;

HAnimSegment1091ZZZ.children[3] = Shape1099;

let HAnimSite1103 = browser.currentScene.createNode("HAnimSite");
HAnimSite1103.DEF = "hanim_l_index_distal_tip";
HAnimSite1103.name = "l_index_distal_tip";
HAnimSite1103.translation = new X3D.SFVec3f([0.2089,0.6858,-0.0245]);
let TouchSensor1104 = browser.currentScene.createNode("TouchSensor");
TouchSensor1104.description = "HAnimSite l_index_distal_tip";
HAnimSite1103YYY.children = new X3D.MFNode();

HAnimSite1103ZZZ.children[0] = TouchSensor1104;

let Shape1105 = browser.currentScene.createNode("Shape");
Shape1105.USE = "HAnimSiteShape";
HAnimSite1103ZZZ.children[1] = Shape1105;

HAnimSegment1091ZZZ.children[4] = HAnimSite1103;

let HAnimSite1106 = browser.currentScene.createNode("HAnimSite");
HAnimSite1106.DEF = "hanim_l_dactylion_pt";
HAnimSite1106.name = "l_dactylion_pt";
HAnimSite1106.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
let TouchSensor1107 = browser.currentScene.createNode("TouchSensor");
TouchSensor1107.description = "HAnimSite l_dactylion";
HAnimSite1106YYY.children = new X3D.MFNode();

HAnimSite1106ZZZ.children[0] = TouchSensor1107;

let Shape1108 = browser.currentScene.createNode("Shape");
Shape1108.USE = "HAnimSiteShape";
HAnimSite1106ZZZ.children[1] = Shape1108;

HAnimSegment1091ZZZ.children[5] = HAnimSite1106;

HAnimJoint1090YYY.children = new X3D.MFNode();

HAnimJoint1090ZZZ.children[0] = HAnimSegment1091;

HAnimJoint1081ZZZ.children[1] = HAnimJoint1090;

HAnimJoint1072ZZZ.children[1] = HAnimJoint1081;

HAnimJoint1063ZZZ.children[1] = HAnimJoint1072;

HAnimJoint977ZZZ.children[2] = HAnimJoint1063;

let HAnimJoint1109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1109.DEF = "hanim_l_middle0";
HAnimJoint1109.name = "l_middle0";
HAnimJoint1109.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let HAnimSegment1110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1110.DEF = "hanim_l_middle_metacarpal";
HAnimSegment1110.name = "l_middle_metacarpal";
let TouchSensor1111 = browser.currentScene.createNode("TouchSensor");
TouchSensor1111.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1110YYY.children = new X3D.MFNode();

HAnimSegment1110ZZZ.children[0] = TouchSensor1111;

let Transform1112 = browser.currentScene.createNode("Transform");
Transform1112.translation = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let Shape1113 = browser.currentScene.createNode("Shape");
Shape1113.USE = "HAnimJointShape";
Transform1112YYY.child = new X3D.undefined();

Transform1112ZZZ.child[0] = Shape1113;

HAnimSegment1110ZZZ.children[1] = Transform1112;

let Shape1114 = browser.currentScene.createNode("Shape");
let LineSet1115 = browser.currentScene.createNode("LineSet");
LineSet1115.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1116 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1116.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1116;

let Coordinate1117 = browser.currentScene.createNode("Coordinate");
Coordinate1117.point = new X3D.MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
coord = Coordinate1117;

geometry = LineSet1115;

HAnimSegment1110ZZZ.children[2] = Shape1114;

HAnimJoint1109YYY.children = new X3D.MFNode();

HAnimJoint1109ZZZ.children[0] = HAnimSegment1110;

let HAnimJoint1118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1118.DEF = "hanim_l_middle1";
HAnimJoint1118.name = "l_middle1";
HAnimJoint1118.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let HAnimSegment1119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1119.DEF = "hanim_l_middle_proximal";
HAnimSegment1119.name = "l_middle_proximal";
let TouchSensor1120 = browser.currentScene.createNode("TouchSensor");
TouchSensor1120.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1119YYY.children = new X3D.MFNode();

HAnimSegment1119ZZZ.children[0] = TouchSensor1120;

let Transform1121 = browser.currentScene.createNode("Transform");
Transform1121.translation = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let Shape1122 = browser.currentScene.createNode("Shape");
Shape1122.USE = "HAnimJointShape";
Transform1121YYY.child = new X3D.undefined();

Transform1121ZZZ.child[0] = Shape1122;

HAnimSegment1119ZZZ.children[1] = Transform1121;

let Shape1123 = browser.currentScene.createNode("Shape");
let LineSet1124 = browser.currentScene.createNode("LineSet");
LineSet1124.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1125 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1125.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1125;

let Coordinate1126 = browser.currentScene.createNode("Coordinate");
Coordinate1126.point = new X3D.MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
coord = Coordinate1126;

geometry = LineSet1124;

HAnimSegment1119ZZZ.children[2] = Shape1123;

HAnimJoint1118YYY.children = new X3D.MFNode();

HAnimJoint1118ZZZ.children[0] = HAnimSegment1119;

let HAnimJoint1127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1127.DEF = "hanim_l_middle2";
HAnimJoint1127.name = "l_middle2";
HAnimJoint1127.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let HAnimSegment1128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1128.DEF = "hanim_l_middle_middle";
HAnimSegment1128.name = "l_middle_middle";
let TouchSensor1129 = browser.currentScene.createNode("TouchSensor");
TouchSensor1129.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1128YYY.children = new X3D.MFNode();

HAnimSegment1128ZZZ.children[0] = TouchSensor1129;

let Transform1130 = browser.currentScene.createNode("Transform");
Transform1130.translation = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let Shape1131 = browser.currentScene.createNode("Shape");
Shape1131.USE = "HAnimJointShape";
Transform1130YYY.child = new X3D.undefined();

Transform1130ZZZ.child[0] = Shape1131;

HAnimSegment1128ZZZ.children[1] = Transform1130;

let Shape1132 = browser.currentScene.createNode("Shape");
let LineSet1133 = browser.currentScene.createNode("LineSet");
LineSet1133.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1134 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1134.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1134;

let Coordinate1135 = browser.currentScene.createNode("Coordinate");
Coordinate1135.point = new X3D.MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
coord = Coordinate1135;

geometry = LineSet1133;

HAnimSegment1128ZZZ.children[2] = Shape1132;

HAnimJoint1127YYY.children = new X3D.MFNode();

HAnimJoint1127ZZZ.children[0] = HAnimSegment1128;

let HAnimJoint1136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1136.DEF = "hanim_l_middle3";
HAnimJoint1136.name = "l_middle3";
HAnimJoint1136.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let HAnimSegment1137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1137.DEF = "hanim_l_middle_distal";
HAnimSegment1137.name = "l_middle_distal";
let TouchSensor1138 = browser.currentScene.createNode("TouchSensor");
TouchSensor1138.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1137YYY.children = new X3D.MFNode();

HAnimSegment1137ZZZ.children[0] = TouchSensor1138;

let Transform1139 = browser.currentScene.createNode("Transform");
Transform1139.translation = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let Shape1140 = browser.currentScene.createNode("Shape");
Shape1140.USE = "HAnimJointShape";
Transform1139YYY.child = new X3D.undefined();

Transform1139ZZZ.child[0] = Shape1140;

HAnimSegment1137ZZZ.children[1] = Transform1139;

let Shape1141 = browser.currentScene.createNode("Shape");
let LineSet1142 = browser.currentScene.createNode("LineSet");
LineSet1142.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1143 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1143.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1143;

let Coordinate1144 = browser.currentScene.createNode("Coordinate");
Coordinate1144.point = new X3D.MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
coord = Coordinate1144;

geometry = LineSet1142;

HAnimSegment1137ZZZ.children[2] = Shape1141;

let HAnimSite1145 = browser.currentScene.createNode("HAnimSite");
HAnimSite1145.DEF = "hanim_l_middle_distal_tip";
HAnimSite1145.name = "l_middle_distal_tip";
HAnimSite1145.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
let TouchSensor1146 = browser.currentScene.createNode("TouchSensor");
TouchSensor1146.description = "HAnimSite l_middle_distal_tip";
HAnimSite1145YYY.children = new X3D.MFNode();

HAnimSite1145ZZZ.children[0] = TouchSensor1146;

let Shape1147 = browser.currentScene.createNode("Shape");
Shape1147.USE = "HAnimSiteShape";
HAnimSite1145ZZZ.children[1] = Shape1147;

HAnimSegment1137ZZZ.children[3] = HAnimSite1145;

HAnimJoint1136YYY.children = new X3D.MFNode();

HAnimJoint1136ZZZ.children[0] = HAnimSegment1137;

HAnimJoint1127ZZZ.children[1] = HAnimJoint1136;

HAnimJoint1118ZZZ.children[1] = HAnimJoint1127;

HAnimJoint1109ZZZ.children[1] = HAnimJoint1118;

HAnimJoint977ZZZ.children[3] = HAnimJoint1109;

let HAnimJoint1148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1148.DEF = "hanim_l_ring0";
HAnimJoint1148.name = "l_ring0";
HAnimJoint1148.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let HAnimSegment1149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1149.DEF = "hanim_l_ring_metacarpal";
HAnimSegment1149.name = "l_ring_metacarpal";
let TouchSensor1150 = browser.currentScene.createNode("TouchSensor");
TouchSensor1150.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1149YYY.children = new X3D.MFNode();

HAnimSegment1149ZZZ.children[0] = TouchSensor1150;

let Transform1151 = browser.currentScene.createNode("Transform");
Transform1151.translation = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let Shape1152 = browser.currentScene.createNode("Shape");
Shape1152.USE = "HAnimJointShape";
Transform1151YYY.child = new X3D.undefined();

Transform1151ZZZ.child[0] = Shape1152;

HAnimSegment1149ZZZ.children[1] = Transform1151;

let Shape1153 = browser.currentScene.createNode("Shape");
let LineSet1154 = browser.currentScene.createNode("LineSet");
LineSet1154.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1155 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1155.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1155;

let Coordinate1156 = browser.currentScene.createNode("Coordinate");
Coordinate1156.point = new X3D.MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
coord = Coordinate1156;

geometry = LineSet1154;

HAnimSegment1149ZZZ.children[2] = Shape1153;

HAnimJoint1148YYY.children = new X3D.MFNode();

HAnimJoint1148ZZZ.children[0] = HAnimSegment1149;

let HAnimJoint1157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1157.DEF = "hanim_l_ring1";
HAnimJoint1157.name = "l_ring1";
HAnimJoint1157.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let HAnimSegment1158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1158.DEF = "hanim_l_ring_proximal";
HAnimSegment1158.name = "l_ring_proximal";
let TouchSensor1159 = browser.currentScene.createNode("TouchSensor");
TouchSensor1159.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1158YYY.children = new X3D.MFNode();

HAnimSegment1158ZZZ.children[0] = TouchSensor1159;

let Transform1160 = browser.currentScene.createNode("Transform");
Transform1160.translation = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let Shape1161 = browser.currentScene.createNode("Shape");
Shape1161.USE = "HAnimJointShape";
Transform1160YYY.child = new X3D.undefined();

Transform1160ZZZ.child[0] = Shape1161;

HAnimSegment1158ZZZ.children[1] = Transform1160;

let Shape1162 = browser.currentScene.createNode("Shape");
let LineSet1163 = browser.currentScene.createNode("LineSet");
LineSet1163.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1164 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1164.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1164;

let Coordinate1165 = browser.currentScene.createNode("Coordinate");
Coordinate1165.point = new X3D.MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
coord = Coordinate1165;

geometry = LineSet1163;

HAnimSegment1158ZZZ.children[2] = Shape1162;

HAnimJoint1157YYY.children = new X3D.MFNode();

HAnimJoint1157ZZZ.children[0] = HAnimSegment1158;

let HAnimJoint1166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1166.DEF = "hanim_l_ring2";
HAnimJoint1166.name = "l_ring2";
HAnimJoint1166.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let HAnimSegment1167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1167.DEF = "hanim_l_ring_middle";
HAnimSegment1167.name = "l_ring_middle";
let TouchSensor1168 = browser.currentScene.createNode("TouchSensor");
TouchSensor1168.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1167YYY.children = new X3D.MFNode();

HAnimSegment1167ZZZ.children[0] = TouchSensor1168;

let Transform1169 = browser.currentScene.createNode("Transform");
Transform1169.translation = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let Shape1170 = browser.currentScene.createNode("Shape");
Shape1170.USE = "HAnimJointShape";
Transform1169YYY.child = new X3D.undefined();

Transform1169ZZZ.child[0] = Shape1170;

HAnimSegment1167ZZZ.children[1] = Transform1169;

let Shape1171 = browser.currentScene.createNode("Shape");
let LineSet1172 = browser.currentScene.createNode("LineSet");
LineSet1172.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1173 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1173.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1173;

let Coordinate1174 = browser.currentScene.createNode("Coordinate");
Coordinate1174.point = new X3D.MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
coord = Coordinate1174;

geometry = LineSet1172;

HAnimSegment1167ZZZ.children[2] = Shape1171;

HAnimJoint1166YYY.children = new X3D.MFNode();

HAnimJoint1166ZZZ.children[0] = HAnimSegment1167;

let HAnimJoint1175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1175.DEF = "hanim_l_ring3";
HAnimJoint1175.name = "l_ring3";
HAnimJoint1175.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let HAnimSegment1176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1176.DEF = "hanim_l_ring_distal";
HAnimSegment1176.name = "l_ring_distal";
let TouchSensor1177 = browser.currentScene.createNode("TouchSensor");
TouchSensor1177.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1176YYY.children = new X3D.MFNode();

HAnimSegment1176ZZZ.children[0] = TouchSensor1177;

let Transform1178 = browser.currentScene.createNode("Transform");
Transform1178.translation = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let Shape1179 = browser.currentScene.createNode("Shape");
Shape1179.USE = "HAnimJointShape";
Transform1178YYY.child = new X3D.undefined();

Transform1178ZZZ.child[0] = Shape1179;

HAnimSegment1176ZZZ.children[1] = Transform1178;

let Shape1180 = browser.currentScene.createNode("Shape");
let LineSet1181 = browser.currentScene.createNode("LineSet");
LineSet1181.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1182 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1182.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1182;

let Coordinate1183 = browser.currentScene.createNode("Coordinate");
Coordinate1183.point = new X3D.MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
coord = Coordinate1183;

geometry = LineSet1181;

HAnimSegment1176ZZZ.children[2] = Shape1180;

let HAnimSite1184 = browser.currentScene.createNode("HAnimSite");
HAnimSite1184.DEF = "hanim_l_ring_distal_tip";
HAnimSite1184.name = "l_ring_distal_tip";
HAnimSite1184.translation = new X3D.SFVec3f([0.2035,0.675,-0.0756]);
let TouchSensor1185 = browser.currentScene.createNode("TouchSensor");
TouchSensor1185.description = "HAnimSite l_ring_distal_tip";
HAnimSite1184YYY.children = new X3D.MFNode();

HAnimSite1184ZZZ.children[0] = TouchSensor1185;

let Shape1186 = browser.currentScene.createNode("Shape");
Shape1186.USE = "HAnimSiteShape";
HAnimSite1184ZZZ.children[1] = Shape1186;

HAnimSegment1176ZZZ.children[3] = HAnimSite1184;

HAnimJoint1175YYY.children = new X3D.MFNode();

HAnimJoint1175ZZZ.children[0] = HAnimSegment1176;

HAnimJoint1166ZZZ.children[1] = HAnimJoint1175;

HAnimJoint1157ZZZ.children[1] = HAnimJoint1166;

HAnimJoint1148ZZZ.children[1] = HAnimJoint1157;

HAnimJoint977ZZZ.children[4] = HAnimJoint1148;

let HAnimJoint1187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1187.DEF = "hanim_l_pinky0";
HAnimJoint1187.name = "l_pinky0";
HAnimJoint1187.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let HAnimSegment1188 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1188.DEF = "hanim_l_pinky_metacarpal";
HAnimSegment1188.name = "l_pinky_metacarpal";
let TouchSensor1189 = browser.currentScene.createNode("TouchSensor");
TouchSensor1189.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1188YYY.children = new X3D.MFNode();

HAnimSegment1188ZZZ.children[0] = TouchSensor1189;

let Transform1190 = browser.currentScene.createNode("Transform");
Transform1190.translation = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let Shape1191 = browser.currentScene.createNode("Shape");
Shape1191.USE = "HAnimJointShape";
Transform1190YYY.child = new X3D.undefined();

Transform1190ZZZ.child[0] = Shape1191;

HAnimSegment1188ZZZ.children[1] = Transform1190;

let Shape1192 = browser.currentScene.createNode("Shape");
let LineSet1193 = browser.currentScene.createNode("LineSet");
LineSet1193.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1194 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1194.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1194;

let Coordinate1195 = browser.currentScene.createNode("Coordinate");
Coordinate1195.point = new X3D.MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
coord = Coordinate1195;

geometry = LineSet1193;

HAnimSegment1188ZZZ.children[2] = Shape1192;

HAnimJoint1187YYY.children = new X3D.MFNode();

HAnimJoint1187ZZZ.children[0] = HAnimSegment1188;

let HAnimJoint1196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1196.DEF = "hanim_l_pinky1";
HAnimJoint1196.name = "l_pinky1";
HAnimJoint1196.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let HAnimSegment1197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1197.DEF = "hanim_l_pinky_proximal";
HAnimSegment1197.name = "l_pinky_proximal";
let TouchSensor1198 = browser.currentScene.createNode("TouchSensor");
TouchSensor1198.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1197YYY.children = new X3D.MFNode();

HAnimSegment1197ZZZ.children[0] = TouchSensor1198;

let Transform1199 = browser.currentScene.createNode("Transform");
Transform1199.translation = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let Shape1200 = browser.currentScene.createNode("Shape");
Shape1200.USE = "HAnimJointShape";
Transform1199YYY.child = new X3D.undefined();

Transform1199ZZZ.child[0] = Shape1200;

HAnimSegment1197ZZZ.children[1] = Transform1199;

let Shape1201 = browser.currentScene.createNode("Shape");
let LineSet1202 = browser.currentScene.createNode("LineSet");
LineSet1202.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1203 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1203;

let Coordinate1204 = browser.currentScene.createNode("Coordinate");
Coordinate1204.point = new X3D.MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
coord = Coordinate1204;

geometry = LineSet1202;

HAnimSegment1197ZZZ.children[2] = Shape1201;

HAnimJoint1196YYY.children = new X3D.MFNode();

HAnimJoint1196ZZZ.children[0] = HAnimSegment1197;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.DEF = "hanim_l_pinky2";
HAnimJoint1205.name = "l_pinky2";
HAnimJoint1205.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let HAnimSegment1206 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1206.DEF = "hanim_l_pinky_middle";
HAnimSegment1206.name = "l_pinky_middle";
let TouchSensor1207 = browser.currentScene.createNode("TouchSensor");
TouchSensor1207.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1206YYY.children = new X3D.MFNode();

HAnimSegment1206ZZZ.children[0] = TouchSensor1207;

let Transform1208 = browser.currentScene.createNode("Transform");
Transform1208.translation = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let Shape1209 = browser.currentScene.createNode("Shape");
Shape1209.USE = "HAnimJointShape";
Transform1208YYY.child = new X3D.undefined();

Transform1208ZZZ.child[0] = Shape1209;

HAnimSegment1206ZZZ.children[1] = Transform1208;

let Shape1210 = browser.currentScene.createNode("Shape");
let LineSet1211 = browser.currentScene.createNode("LineSet");
LineSet1211.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1212 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1212;

let Coordinate1213 = browser.currentScene.createNode("Coordinate");
Coordinate1213.point = new X3D.MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
coord = Coordinate1213;

geometry = LineSet1211;

HAnimSegment1206ZZZ.children[2] = Shape1210;

HAnimJoint1205YYY.children = new X3D.MFNode();

HAnimJoint1205ZZZ.children[0] = HAnimSegment1206;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.DEF = "hanim_l_pinky3";
HAnimJoint1214.name = "l_pinky3";
HAnimJoint1214.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let HAnimSegment1215 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1215.DEF = "hanim_l_pinky_distal";
HAnimSegment1215.name = "l_pinky_distal";
let TouchSensor1216 = browser.currentScene.createNode("TouchSensor");
TouchSensor1216.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1215YYY.children = new X3D.MFNode();

HAnimSegment1215ZZZ.children[0] = TouchSensor1216;

let Transform1217 = browser.currentScene.createNode("Transform");
Transform1217.translation = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let Shape1218 = browser.currentScene.createNode("Shape");
Shape1218.USE = "HAnimJointShape";
Transform1217YYY.child = new X3D.undefined();

Transform1217ZZZ.child[0] = Shape1218;

HAnimSegment1215ZZZ.children[1] = Transform1217;

let Shape1219 = browser.currentScene.createNode("Shape");
let LineSet1220 = browser.currentScene.createNode("LineSet");
LineSet1220.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1221 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1221.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1221;

let Coordinate1222 = browser.currentScene.createNode("Coordinate");
Coordinate1222.point = new X3D.MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
coord = Coordinate1222;

geometry = LineSet1220;

HAnimSegment1215ZZZ.children[2] = Shape1219;

let HAnimSite1223 = browser.currentScene.createNode("HAnimSite");
HAnimSite1223.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1223.name = "l_pinky_distal_tip";
HAnimSite1223.translation = new X3D.SFVec3f([0.2014,0.7009,-0.1012]);
let TouchSensor1224 = browser.currentScene.createNode("TouchSensor");
TouchSensor1224.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1223YYY.children = new X3D.MFNode();

HAnimSite1223ZZZ.children[0] = TouchSensor1224;

let Shape1225 = browser.currentScene.createNode("Shape");
Shape1225.USE = "HAnimSiteShape";
HAnimSite1223ZZZ.children[1] = Shape1225;

HAnimSegment1215ZZZ.children[3] = HAnimSite1223;

HAnimJoint1214YYY.children = new X3D.MFNode();

HAnimJoint1214ZZZ.children[0] = HAnimSegment1215;

HAnimJoint1205ZZZ.children[1] = HAnimJoint1214;

HAnimJoint1196ZZZ.children[1] = HAnimJoint1205;

HAnimJoint1187ZZZ.children[1] = HAnimJoint1196;

HAnimJoint977ZZZ.children[5] = HAnimJoint1187;

HAnimJoint940ZZZ.children[1] = HAnimJoint977;

HAnimJoint924ZZZ.children[1] = HAnimJoint940;

HAnimJoint915ZZZ.children[1] = HAnimJoint924;

HAnimJoint878ZZZ.children[1] = HAnimJoint915;

HAnimJoint594ZZZ.children[2] = HAnimJoint878;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.DEF = "hanim_r_sternoclavicular";
HAnimJoint1226.name = "r_sternoclavicular";
HAnimJoint1226.rotation = new X3D.SFRotation([0,0,-1.00000000000003,0.108042894183947]);
HAnimJoint1226.center = new X3D.SFVec3f([-0.082,1.4488,-0.0353]);
let HAnimSegment1227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1227.DEF = "hanim_r_clavicle";
HAnimSegment1227.name = "r_clavicle";
let TouchSensor1228 = browser.currentScene.createNode("TouchSensor");
TouchSensor1228.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1227YYY.children = new X3D.MFNode();

HAnimSegment1227ZZZ.children[0] = TouchSensor1228;

let Transform1229 = browser.currentScene.createNode("Transform");
Transform1229.translation = new X3D.SFVec3f([-0.082,1.4488,-0.0353]);
let Shape1230 = browser.currentScene.createNode("Shape");
Shape1230.USE = "HAnimJointShape";
Transform1229YYY.child = new X3D.undefined();

Transform1229ZZZ.child[0] = Shape1230;

HAnimSegment1227ZZZ.children[1] = Transform1229;

let Shape1231 = browser.currentScene.createNode("Shape");
let LineSet1232 = browser.currentScene.createNode("LineSet");
LineSet1232.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1233 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1233.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1233;

let Coordinate1234 = browser.currentScene.createNode("Coordinate");
Coordinate1234.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
coord = Coordinate1234;

geometry = LineSet1232;

HAnimSegment1227ZZZ.children[2] = Shape1231;

let Shape1235 = browser.currentScene.createNode("Shape");
let LineSet1236 = browser.currentScene.createNode("LineSet");
LineSet1236.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1237 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1237.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1237;

let Coordinate1238 = browser.currentScene.createNode("Coordinate");
Coordinate1238.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
coord = Coordinate1238;

geometry = LineSet1236;

HAnimSegment1227ZZZ.children[3] = Shape1235;

let Shape1239 = browser.currentScene.createNode("Shape");
let LineSet1240 = browser.currentScene.createNode("LineSet");
LineSet1240.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1241 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1241.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1241;

let Coordinate1242 = browser.currentScene.createNode("Coordinate");
Coordinate1242.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
coord = Coordinate1242;

geometry = LineSet1240;

HAnimSegment1227ZZZ.children[4] = Shape1239;

let Shape1243 = browser.currentScene.createNode("Shape");
let LineSet1244 = browser.currentScene.createNode("LineSet");
LineSet1244.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1245 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1245.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1245;

let Coordinate1246 = browser.currentScene.createNode("Coordinate");
Coordinate1246.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
coord = Coordinate1246;

geometry = LineSet1244;

HAnimSegment1227ZZZ.children[5] = Shape1243;

let Shape1247 = browser.currentScene.createNode("Shape");
let LineSet1248 = browser.currentScene.createNode("LineSet");
LineSet1248.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1249 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1249.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1249;

let Coordinate1250 = browser.currentScene.createNode("Coordinate");
Coordinate1250.point = new X3D.MFVec3f([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
coord = Coordinate1250;

geometry = LineSet1248;

HAnimSegment1227ZZZ.children[6] = Shape1247;

let HAnimSite1251 = browser.currentScene.createNode("HAnimSite");
HAnimSite1251.DEF = "hanim_r_clavicale_pt";
HAnimSite1251.name = "r_clavicale_pt";
HAnimSite1251.translation = new X3D.SFVec3f([-0.0115,1.4943,0.04]);
let TouchSensor1252 = browser.currentScene.createNode("TouchSensor");
TouchSensor1252.description = "HAnimSite r_clavicale";
HAnimSite1251YYY.children = new X3D.MFNode();

HAnimSite1251ZZZ.children[0] = TouchSensor1252;

let Shape1253 = browser.currentScene.createNode("Shape");
Shape1253.USE = "HAnimSiteShape";
HAnimSite1251ZZZ.children[1] = Shape1253;

HAnimSegment1227ZZZ.children[7] = HAnimSite1251;

let HAnimSite1254 = browser.currentScene.createNode("HAnimSite");
HAnimSite1254.DEF = "hanim_r_acromion_pt";
HAnimSite1254.name = "r_acromion_pt";
HAnimSite1254.translation = new X3D.SFVec3f([-0.1905,1.4791,-0.0431]);
let TouchSensor1255 = browser.currentScene.createNode("TouchSensor");
TouchSensor1255.description = "HAnimSite r_acromion";
HAnimSite1254YYY.children = new X3D.MFNode();

HAnimSite1254ZZZ.children[0] = TouchSensor1255;

let Shape1256 = browser.currentScene.createNode("Shape");
Shape1256.USE = "HAnimSiteShape";
HAnimSite1254ZZZ.children[1] = Shape1256;

HAnimSegment1227ZZZ.children[8] = HAnimSite1254;

let HAnimSite1257 = browser.currentScene.createNode("HAnimSite");
HAnimSite1257.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1257.name = "r_axilla_ant_pt";
HAnimSite1257.translation = new X3D.SFVec3f([-0.1626,1.4072,-0.0031]);
let TouchSensor1258 = browser.currentScene.createNode("TouchSensor");
TouchSensor1258.description = "HAnimSite r_axilla_ant";
HAnimSite1257YYY.children = new X3D.MFNode();

HAnimSite1257ZZZ.children[0] = TouchSensor1258;

let Shape1259 = browser.currentScene.createNode("Shape");
Shape1259.USE = "HAnimSiteShape";
HAnimSite1257ZZZ.children[1] = Shape1259;

HAnimSegment1227ZZZ.children[9] = HAnimSite1257;

let HAnimSite1260 = browser.currentScene.createNode("HAnimSite");
HAnimSite1260.DEF = "hanim_r_axilla_post_pt";
HAnimSite1260.name = "r_axilla_post_pt";
HAnimSite1260.translation = new X3D.SFVec3f([-0.1603,1.4098,-0.0826]);
let TouchSensor1261 = browser.currentScene.createNode("TouchSensor");
TouchSensor1261.description = "HAnimSite r_axilla_post";
HAnimSite1260YYY.children = new X3D.MFNode();

HAnimSite1260ZZZ.children[0] = TouchSensor1261;

let Shape1262 = browser.currentScene.createNode("Shape");
Shape1262.USE = "HAnimSiteShape";
HAnimSite1260ZZZ.children[1] = Shape1262;

HAnimSegment1227ZZZ.children[10] = HAnimSite1260;

HAnimJoint1226YYY.children = new X3D.MFNode();

HAnimJoint1226ZZZ.children[0] = HAnimSegment1227;

let HAnimJoint1263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1263.DEF = "hanim_r_acromioclavicular";
HAnimJoint1263.name = "r_acromioclavicular";
HAnimJoint1263.center = new X3D.SFVec3f([-0.0962,1.4269,-0.0424]);
let HAnimSegment1264 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1264.DEF = "hanim_r_scapula";
HAnimSegment1264.name = "r_scapula";
let TouchSensor1265 = browser.currentScene.createNode("TouchSensor");
TouchSensor1265.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1264YYY.children = new X3D.MFNode();

HAnimSegment1264ZZZ.children[0] = TouchSensor1265;

let Transform1266 = browser.currentScene.createNode("Transform");
Transform1266.translation = new X3D.SFVec3f([-0.0962,1.4269,-0.0424]);
let Shape1267 = browser.currentScene.createNode("Shape");
Shape1267.USE = "HAnimJointShape";
Transform1266YYY.child = new X3D.undefined();

Transform1266ZZZ.child[0] = Shape1267;

HAnimSegment1264ZZZ.children[1] = Transform1266;

let Shape1268 = browser.currentScene.createNode("Shape");
let LineSet1269 = browser.currentScene.createNode("LineSet");
LineSet1269.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1270 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1270.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1270;

let Coordinate1271 = browser.currentScene.createNode("Coordinate");
Coordinate1271.point = new X3D.MFVec3f([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
coord = Coordinate1271;

geometry = LineSet1269;

HAnimSegment1264ZZZ.children[2] = Shape1268;

HAnimJoint1263YYY.children = new X3D.MFNode();

HAnimJoint1263ZZZ.children[0] = HAnimSegment1264;

let HAnimJoint1272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1272.DEF = "hanim_r_shoulder";
HAnimJoint1272.name = "r_shoulder";
HAnimJoint1272.rotation = new X3D.SFRotation([0,0,-1,0.950777468818762]);
HAnimJoint1272.center = new X3D.SFVec3f([-0.2029,1.4376,-0.0387]);
let HAnimSegment1273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1273.DEF = "hanim_r_upperarm";
HAnimSegment1273.name = "r_upperarm";
let TouchSensor1274 = browser.currentScene.createNode("TouchSensor");
TouchSensor1274.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1273YYY.children = new X3D.MFNode();

HAnimSegment1273ZZZ.children[0] = TouchSensor1274;

let Transform1275 = browser.currentScene.createNode("Transform");
Transform1275.translation = new X3D.SFVec3f([-0.2029,1.4376,-0.0387]);
let Shape1276 = browser.currentScene.createNode("Shape");
Shape1276.USE = "HAnimJointShape";
Transform1275YYY.child = new X3D.undefined();

Transform1275ZZZ.child[0] = Shape1276;

HAnimSegment1273ZZZ.children[1] = Transform1275;

let Shape1277 = browser.currentScene.createNode("Shape");
let LineSet1278 = browser.currentScene.createNode("LineSet");
LineSet1278.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1279 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1279.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1279;

let Coordinate1280 = browser.currentScene.createNode("Coordinate");
Coordinate1280.point = new X3D.MFVec3f([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
coord = Coordinate1280;

geometry = LineSet1278;

HAnimSegment1273ZZZ.children[2] = Shape1277;

let Shape1281 = browser.currentScene.createNode("Shape");
let LineSet1282 = browser.currentScene.createNode("LineSet");
LineSet1282.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1283 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1283.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1283;

let Coordinate1284 = browser.currentScene.createNode("Coordinate");
Coordinate1284.point = new X3D.MFVec3f([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
coord = Coordinate1284;

geometry = LineSet1282;

HAnimSegment1273ZZZ.children[3] = Shape1281;

let HAnimSite1285 = browser.currentScene.createNode("HAnimSite");
HAnimSite1285.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1285.name = "r_humeral_lateral_epicn_pt";
HAnimSite1285.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
let TouchSensor1286 = browser.currentScene.createNode("TouchSensor");
TouchSensor1286.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1285YYY.children = new X3D.MFNode();

HAnimSite1285ZZZ.children[0] = TouchSensor1286;

let Shape1287 = browser.currentScene.createNode("Shape");
Shape1287.USE = "HAnimSiteShape";
HAnimSite1285ZZZ.children[1] = Shape1287;

HAnimSegment1273ZZZ.children[4] = HAnimSite1285;

HAnimJoint1272YYY.children = new X3D.MFNode();

HAnimJoint1272ZZZ.children[0] = HAnimSegment1273;

let HAnimJoint1288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1288.DEF = "hanim_r_elbow";
HAnimJoint1288.name = "r_elbow";
HAnimJoint1288.rotation = new X3D.SFRotation([-1,0,0,0.297117959005863]);
HAnimJoint1288.center = new X3D.SFVec3f([-0.2014,1.1357,-0.0682]);
let HAnimSegment1289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1289.DEF = "hanim_r_forearm";
HAnimSegment1289.name = "r_forearm";
let TouchSensor1290 = browser.currentScene.createNode("TouchSensor");
TouchSensor1290.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1289YYY.children = new X3D.MFNode();

HAnimSegment1289ZZZ.children[0] = TouchSensor1290;

let Transform1291 = browser.currentScene.createNode("Transform");
Transform1291.translation = new X3D.SFVec3f([-0.2014,1.1357,-0.0682]);
let Shape1292 = browser.currentScene.createNode("Shape");
Shape1292.USE = "HAnimJointShape";
Transform1291YYY.child = new X3D.undefined();

Transform1291ZZZ.child[0] = Shape1292;

HAnimSegment1289ZZZ.children[1] = Transform1291;

let Shape1293 = browser.currentScene.createNode("Shape");
let LineSet1294 = browser.currentScene.createNode("LineSet");
LineSet1294.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1295 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1295.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1295;

let Coordinate1296 = browser.currentScene.createNode("Coordinate");
Coordinate1296.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
coord = Coordinate1296;

geometry = LineSet1294;

HAnimSegment1289ZZZ.children[2] = Shape1293;

let Shape1297 = browser.currentScene.createNode("Shape");
let LineSet1298 = browser.currentScene.createNode("LineSet");
LineSet1298.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1299 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1299.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1299;

let Coordinate1300 = browser.currentScene.createNode("Coordinate");
Coordinate1300.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
coord = Coordinate1300;

geometry = LineSet1298;

HAnimSegment1289ZZZ.children[3] = Shape1297;

let Shape1301 = browser.currentScene.createNode("Shape");
let LineSet1302 = browser.currentScene.createNode("LineSet");
LineSet1302.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1303 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1303.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1303;

let Coordinate1304 = browser.currentScene.createNode("Coordinate");
Coordinate1304.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
coord = Coordinate1304;

geometry = LineSet1302;

HAnimSegment1289ZZZ.children[4] = Shape1301;

let Shape1305 = browser.currentScene.createNode("Shape");
let LineSet1306 = browser.currentScene.createNode("LineSet");
LineSet1306.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1307 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1307.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1307;

let Coordinate1308 = browser.currentScene.createNode("Coordinate");
Coordinate1308.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
coord = Coordinate1308;

geometry = LineSet1306;

HAnimSegment1289ZZZ.children[5] = Shape1305;

let Shape1309 = browser.currentScene.createNode("Shape");
let LineSet1310 = browser.currentScene.createNode("LineSet");
LineSet1310.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1311 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1311;

let Coordinate1312 = browser.currentScene.createNode("Coordinate");
Coordinate1312.point = new X3D.MFVec3f([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
coord = Coordinate1312;

geometry = LineSet1310;

HAnimSegment1289ZZZ.children[6] = Shape1309;

let HAnimSite1313 = browser.currentScene.createNode("HAnimSite");
HAnimSite1313.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1313.name = "r_radial_styloid_pt";
HAnimSite1313.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
let TouchSensor1314 = browser.currentScene.createNode("TouchSensor");
TouchSensor1314.description = "HAnimSite r_radial_styloid";
HAnimSite1313YYY.children = new X3D.MFNode();

HAnimSite1313ZZZ.children[0] = TouchSensor1314;

let Shape1315 = browser.currentScene.createNode("Shape");
Shape1315.USE = "HAnimSiteShape";
HAnimSite1313ZZZ.children[1] = Shape1315;

HAnimSegment1289ZZZ.children[7] = HAnimSite1313;

let HAnimSite1316 = browser.currentScene.createNode("HAnimSite");
HAnimSite1316.DEF = "hanim_r_olecranon_pt";
HAnimSite1316.name = "r_olecranon_pt";
HAnimSite1316.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
let TouchSensor1317 = browser.currentScene.createNode("TouchSensor");
TouchSensor1317.description = "HAnimSite r_olecranon";
HAnimSite1316YYY.children = new X3D.MFNode();

HAnimSite1316ZZZ.children[0] = TouchSensor1317;

let Shape1318 = browser.currentScene.createNode("Shape");
Shape1318.USE = "HAnimSiteShape";
HAnimSite1316ZZZ.children[1] = Shape1318;

HAnimSegment1289ZZZ.children[8] = HAnimSite1316;

let HAnimSite1319 = browser.currentScene.createNode("HAnimSite");
HAnimSite1319.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1319.name = "r_humeral_medial_epicn_pt";
HAnimSite1319.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
let TouchSensor1320 = browser.currentScene.createNode("TouchSensor");
TouchSensor1320.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1319YYY.children = new X3D.MFNode();

HAnimSite1319ZZZ.children[0] = TouchSensor1320;

let Shape1321 = browser.currentScene.createNode("Shape");
Shape1321.USE = "HAnimSiteShape";
HAnimSite1319ZZZ.children[1] = Shape1321;

HAnimSegment1289ZZZ.children[9] = HAnimSite1319;

let HAnimSite1322 = browser.currentScene.createNode("HAnimSite");
HAnimSite1322.DEF = "hanim_r_radiale_pt";
HAnimSite1322.name = "r_radiale_pt";
HAnimSite1322.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
let TouchSensor1323 = browser.currentScene.createNode("TouchSensor");
TouchSensor1323.description = "HAnimSite r_radiale";
HAnimSite1322YYY.children = new X3D.MFNode();

HAnimSite1322ZZZ.children[0] = TouchSensor1323;

let Shape1324 = browser.currentScene.createNode("Shape");
Shape1324.USE = "HAnimSiteShape";
HAnimSite1322ZZZ.children[1] = Shape1324;

HAnimSegment1289ZZZ.children[10] = HAnimSite1322;

HAnimJoint1288YYY.children = new X3D.MFNode();

HAnimJoint1288ZZZ.children[0] = HAnimSegment1289;

let HAnimJoint1325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1325.DEF = "hanim_r_wrist";
HAnimJoint1325.name = "r_wrist";
HAnimJoint1325.center = new X3D.SFVec3f([-0.1984,0.8663,-0.0583]);
let HAnimSegment1326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1326.DEF = "hanim_r_hand";
HAnimSegment1326.name = "r_hand";
let TouchSensor1327 = browser.currentScene.createNode("TouchSensor");
TouchSensor1327.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1326YYY.children = new X3D.MFNode();

HAnimSegment1326ZZZ.children[0] = TouchSensor1327;

let Transform1328 = browser.currentScene.createNode("Transform");
Transform1328.translation = new X3D.SFVec3f([-0.1984,0.8663,-0.0583]);
let Shape1329 = browser.currentScene.createNode("Shape");
Shape1329.USE = "HAnimJointShape";
Transform1328YYY.child = new X3D.undefined();

Transform1328ZZZ.child[0] = Shape1329;

HAnimSegment1326ZZZ.children[1] = Transform1328;

let Shape1330 = browser.currentScene.createNode("Shape");
let LineSet1331 = browser.currentScene.createNode("LineSet");
LineSet1331.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1332 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1332.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1332;

let Coordinate1333 = browser.currentScene.createNode("Coordinate");
Coordinate1333.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
coord = Coordinate1333;

geometry = LineSet1331;

HAnimSegment1326ZZZ.children[2] = Shape1330;

let Shape1334 = browser.currentScene.createNode("Shape");
let LineSet1335 = browser.currentScene.createNode("LineSet");
LineSet1335.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1336 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1336.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1336;

let Coordinate1337 = browser.currentScene.createNode("Coordinate");
Coordinate1337.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
coord = Coordinate1337;

geometry = LineSet1335;

HAnimSegment1326ZZZ.children[3] = Shape1334;

let Shape1338 = browser.currentScene.createNode("Shape");
let LineSet1339 = browser.currentScene.createNode("LineSet");
LineSet1339.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1340 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1340.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1340;

let Coordinate1341 = browser.currentScene.createNode("Coordinate");
Coordinate1341.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
coord = Coordinate1341;

geometry = LineSet1339;

HAnimSegment1326ZZZ.children[4] = Shape1338;

let Shape1342 = browser.currentScene.createNode("Shape");
let LineSet1343 = browser.currentScene.createNode("LineSet");
LineSet1343.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1344 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1344.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1344;

let Coordinate1345 = browser.currentScene.createNode("Coordinate");
Coordinate1345.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
coord = Coordinate1345;

geometry = LineSet1343;

HAnimSegment1326ZZZ.children[5] = Shape1342;

let Shape1346 = browser.currentScene.createNode("Shape");
let LineSet1347 = browser.currentScene.createNode("LineSet");
LineSet1347.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1348 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1348;

let Coordinate1349 = browser.currentScene.createNode("Coordinate");
Coordinate1349.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
coord = Coordinate1349;

geometry = LineSet1347;

HAnimSegment1326ZZZ.children[6] = Shape1346;

let Shape1350 = browser.currentScene.createNode("Shape");
let LineSet1351 = browser.currentScene.createNode("LineSet");
LineSet1351.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1352 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1352.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1352;

let Coordinate1353 = browser.currentScene.createNode("Coordinate");
Coordinate1353.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
coord = Coordinate1353;

geometry = LineSet1351;

HAnimSegment1326ZZZ.children[7] = Shape1350;

let Shape1354 = browser.currentScene.createNode("Shape");
let LineSet1355 = browser.currentScene.createNode("LineSet");
LineSet1355.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1356 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1356.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1356;

let Coordinate1357 = browser.currentScene.createNode("Coordinate");
Coordinate1357.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
coord = Coordinate1357;

geometry = LineSet1355;

HAnimSegment1326ZZZ.children[8] = Shape1354;

let Shape1358 = browser.currentScene.createNode("Shape");
let LineSet1359 = browser.currentScene.createNode("LineSet");
LineSet1359.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1360 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1360.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1360;

let Coordinate1361 = browser.currentScene.createNode("Coordinate");
Coordinate1361.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
coord = Coordinate1361;

geometry = LineSet1359;

HAnimSegment1326ZZZ.children[9] = Shape1358;

let Shape1362 = browser.currentScene.createNode("Shape");
let LineSet1363 = browser.currentScene.createNode("LineSet");
LineSet1363.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1364 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1364.USE = "HAnimSiteViewpointLineColorRGBA";
color = ColorRGBA1364;

let Coordinate1365 = browser.currentScene.createNode("Coordinate");
Coordinate1365.point = new X3D.MFVec3f([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
coord = Coordinate1365;

geometry = LineSet1363;

HAnimSegment1326ZZZ.children[10] = Shape1362;

let HAnimSite1366 = browser.currentScene.createNode("HAnimSite");
HAnimSite1366.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1366.name = "r_metacarpal_pha2_pt";
HAnimSite1366.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
let TouchSensor1367 = browser.currentScene.createNode("TouchSensor");
TouchSensor1367.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1366YYY.children = new X3D.MFNode();

HAnimSite1366ZZZ.children[0] = TouchSensor1367;

let Shape1368 = browser.currentScene.createNode("Shape");
Shape1368.USE = "HAnimSiteShape";
HAnimSite1366ZZZ.children[1] = Shape1368;

HAnimSegment1326ZZZ.children[11] = HAnimSite1366;

let HAnimSite1369 = browser.currentScene.createNode("HAnimSite");
HAnimSite1369.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1369.name = "r_ulnar_styloid_pt";
HAnimSite1369.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
let TouchSensor1370 = browser.currentScene.createNode("TouchSensor");
TouchSensor1370.description = "HAnimSite r_ulnar_styloid";
HAnimSite1369YYY.children = new X3D.MFNode();

HAnimSite1369ZZZ.children[0] = TouchSensor1370;

let Shape1371 = browser.currentScene.createNode("Shape");
Shape1371.USE = "HAnimSiteShape";
HAnimSite1369ZZZ.children[1] = Shape1371;

HAnimSegment1326ZZZ.children[12] = HAnimSite1369;

let HAnimSite1372 = browser.currentScene.createNode("HAnimSite");
HAnimSite1372.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1372.name = "r_metacarpal_pha5_pt";
HAnimSite1372.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
let TouchSensor1373 = browser.currentScene.createNode("TouchSensor");
TouchSensor1373.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1372YYY.children = new X3D.MFNode();

HAnimSite1372ZZZ.children[0] = TouchSensor1373;

let Shape1374 = browser.currentScene.createNode("Shape");
Shape1374.USE = "HAnimSiteShape";
HAnimSite1372ZZZ.children[1] = Shape1374;

HAnimSegment1326ZZZ.children[13] = HAnimSite1372;

let HAnimSite1375 = browser.currentScene.createNode("HAnimSite");
HAnimSite1375.DEF = "hanim_r_hand_front_view";
HAnimSite1375.name = "r_hand_front_view";
HAnimSite1375.translation = new X3D.SFVec3f([-0.3,0.75,0.45]);
let Viewpoint1376 = browser.currentScene.createNode("Viewpoint");
Viewpoint1376.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1376.description = "right hand front";
Viewpoint1376.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1376.centerOfRotation = new X3D.SFVec3f([0,0.7,0]);
HAnimSite1375YYY.children = new X3D.MFNode();

HAnimSite1375ZZZ.children[0] = Viewpoint1376;

let Anchor1377 = browser.currentScene.createNode("Anchor");
Anchor1377.description = "HAnimSite Viewpoint hanim_r_hand_front_view";
Anchor1377.url = new X3D.MFString([new X3D.SFString("#hanim_r_hand_front_viewpoint")]);
let LOD1378 = browser.currentScene.createNode("LOD");
LOD1378.forceTransitions = True;
LOD1378.range = new X3D.MFFloat([0.04]);
let WorldInfo1379 = browser.currentScene.createNode("WorldInfo");
WorldInfo1379.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1378YYY.children = new X3D.MFNode();

LOD1378ZZZ.children[0] = WorldInfo1379;

let Shape1380 = browser.currentScene.createNode("Shape");
Shape1380.USE = "HAnimSiteViewpointShape";
LOD1378ZZZ.children[1] = Shape1380;

Anchor1377YYY.children = new X3D.MFNode();

Anchor1377ZZZ.children[0] = LOD1378;

HAnimSite1375ZZZ.children[1] = Anchor1377;

HAnimSegment1326ZZZ.children[14] = HAnimSite1375;

HAnimJoint1325YYY.children = new X3D.MFNode();

HAnimJoint1325ZZZ.children[0] = HAnimSegment1326;

let HAnimJoint1381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1381.DEF = "hanim_r_thumb1";
HAnimJoint1381.name = "r_thumb1";
HAnimJoint1381.rotation = new X3D.SFRotation([1,0,0,0.270107235459875]);
HAnimJoint1381.center = new X3D.SFVec3f([-0.1924,0.8472,-0.0534]);
let HAnimSegment1382 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1382.DEF = "hanim_r_thumb_metacarpal";
HAnimSegment1382.name = "r_thumb_metacarpal";
let TouchSensor1383 = browser.currentScene.createNode("TouchSensor");
TouchSensor1383.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1382YYY.children = new X3D.MFNode();

HAnimSegment1382ZZZ.children[0] = TouchSensor1383;

let Transform1384 = browser.currentScene.createNode("Transform");
Transform1384.translation = new X3D.SFVec3f([-0.1924,0.8472,-0.0534]);
let Shape1385 = browser.currentScene.createNode("Shape");
Shape1385.USE = "HAnimJointShape";
Transform1384YYY.child = new X3D.undefined();

Transform1384ZZZ.child[0] = Shape1385;

HAnimSegment1382ZZZ.children[1] = Transform1384;

let Shape1386 = browser.currentScene.createNode("Shape");
let LineSet1387 = browser.currentScene.createNode("LineSet");
LineSet1387.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1388 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1388.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1388;

let Coordinate1389 = browser.currentScene.createNode("Coordinate");
Coordinate1389.point = new X3D.MFVec3f([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
coord = Coordinate1389;

geometry = LineSet1387;

HAnimSegment1382ZZZ.children[2] = Shape1386;

HAnimJoint1381YYY.children = new X3D.MFNode();

HAnimJoint1381ZZZ.children[0] = HAnimSegment1382;

let HAnimJoint1390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1390.DEF = "hanim_r_thumb2";
HAnimJoint1390.name = "r_thumb2";
HAnimJoint1390.center = new X3D.SFVec3f([-0.1951,0.8226,0.0246]);
let HAnimSegment1391 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1391.DEF = "hanim_r_thumb_proximal";
HAnimSegment1391.name = "r_thumb_proximal";
let TouchSensor1392 = browser.currentScene.createNode("TouchSensor");
TouchSensor1392.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1391YYY.children = new X3D.MFNode();

HAnimSegment1391ZZZ.children[0] = TouchSensor1392;

let Transform1393 = browser.currentScene.createNode("Transform");
Transform1393.translation = new X3D.SFVec3f([-0.1951,0.8226,0.0246]);
let Shape1394 = browser.currentScene.createNode("Shape");
Shape1394.USE = "HAnimJointShape";
Transform1393YYY.child = new X3D.undefined();

Transform1393ZZZ.child[0] = Shape1394;

HAnimSegment1391ZZZ.children[1] = Transform1393;

let Shape1395 = browser.currentScene.createNode("Shape");
let LineSet1396 = browser.currentScene.createNode("LineSet");
LineSet1396.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1397 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1397.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1397;

let Coordinate1398 = browser.currentScene.createNode("Coordinate");
Coordinate1398.point = new X3D.MFVec3f([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
coord = Coordinate1398;

geometry = LineSet1396;

HAnimSegment1391ZZZ.children[2] = Shape1395;

HAnimJoint1390YYY.children = new X3D.MFNode();

HAnimJoint1390ZZZ.children[0] = HAnimSegment1391;

let HAnimJoint1399 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1399.DEF = "hanim_r_thumb3";
HAnimJoint1399.name = "r_thumb3";
HAnimJoint1399.center = new X3D.SFVec3f([-0.1955,0.8159,0.0464]);
let HAnimSegment1400 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1400.DEF = "hanim_r_thumb_distal";
HAnimSegment1400.name = "r_thumb_distal";
let TouchSensor1401 = browser.currentScene.createNode("TouchSensor");
TouchSensor1401.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1400YYY.children = new X3D.MFNode();

HAnimSegment1400ZZZ.children[0] = TouchSensor1401;

let Transform1402 = browser.currentScene.createNode("Transform");
Transform1402.translation = new X3D.SFVec3f([-0.1955,0.8159,0.0464]);
let Shape1403 = browser.currentScene.createNode("Shape");
Shape1403.USE = "HAnimJointShape";
Transform1402YYY.child = new X3D.undefined();

Transform1402ZZZ.child[0] = Shape1403;

HAnimSegment1400ZZZ.children[1] = Transform1402;

let Shape1404 = browser.currentScene.createNode("Shape");
let LineSet1405 = browser.currentScene.createNode("LineSet");
LineSet1405.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1406 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1406.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1406;

let Coordinate1407 = browser.currentScene.createNode("Coordinate");
Coordinate1407.point = new X3D.MFVec3f([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
coord = Coordinate1407;

geometry = LineSet1405;

HAnimSegment1400ZZZ.children[2] = Shape1404;

let HAnimSite1408 = browser.currentScene.createNode("HAnimSite");
HAnimSite1408.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1408.name = "r_thumb_distal_tip";
HAnimSite1408.translation = new X3D.SFVec3f([-0.1869,0.809,0.082]);
let TouchSensor1409 = browser.currentScene.createNode("TouchSensor");
TouchSensor1409.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1408YYY.children = new X3D.MFNode();

HAnimSite1408ZZZ.children[0] = TouchSensor1409;

let Shape1410 = browser.currentScene.createNode("Shape");
Shape1410.USE = "HAnimSiteShape";
HAnimSite1408ZZZ.children[1] = Shape1410;

HAnimSegment1400ZZZ.children[3] = HAnimSite1408;

HAnimJoint1399YYY.children = new X3D.MFNode();

HAnimJoint1399ZZZ.children[0] = HAnimSegment1400;

HAnimJoint1390ZZZ.children[1] = HAnimJoint1399;

HAnimJoint1381ZZZ.children[1] = HAnimJoint1390;

HAnimJoint1325ZZZ.children[1] = HAnimJoint1381;

let HAnimJoint1411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1411.DEF = "hanim_r_index0";
HAnimJoint1411.name = "r_index0";
HAnimJoint1411.center = new X3D.SFVec3f([-0.1983,0.8024,-0.028]);
let HAnimSegment1412 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1412.DEF = "hanim_r_index_metacarpal";
HAnimSegment1412.name = "r_index_metacarpal";
let TouchSensor1413 = browser.currentScene.createNode("TouchSensor");
TouchSensor1413.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1412YYY.children = new X3D.MFNode();

HAnimSegment1412ZZZ.children[0] = TouchSensor1413;

let Transform1414 = browser.currentScene.createNode("Transform");
Transform1414.translation = new X3D.SFVec3f([-0.1983,0.8024,-0.028]);
let Shape1415 = browser.currentScene.createNode("Shape");
Shape1415.USE = "HAnimJointShape";
Transform1414YYY.child = new X3D.undefined();

Transform1414ZZZ.child[0] = Shape1415;

HAnimSegment1412ZZZ.children[1] = Transform1414;

let Shape1416 = browser.currentScene.createNode("Shape");
let LineSet1417 = browser.currentScene.createNode("LineSet");
LineSet1417.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1418 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1418.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1418;

let Coordinate1419 = browser.currentScene.createNode("Coordinate");
Coordinate1419.point = new X3D.MFVec3f([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
coord = Coordinate1419;

geometry = LineSet1417;

HAnimSegment1412ZZZ.children[2] = Shape1416;

HAnimJoint1411YYY.children = new X3D.MFNode();

HAnimJoint1411ZZZ.children[0] = HAnimSegment1412;

let HAnimJoint1420 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1420.DEF = "hanim_r_index1";
HAnimJoint1420.name = "r_index1";
HAnimJoint1420.rotation = new X3D.SFRotation([0,0,1.00000000000003,0.111082015766469]);
HAnimJoint1420.center = new X3D.SFVec3f([-0.1983,0.7815,-0.028]);
let HAnimSegment1421 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1421.DEF = "hanim_r_index_proximal";
HAnimSegment1421.name = "r_index_proximal";
let TouchSensor1422 = browser.currentScene.createNode("TouchSensor");
TouchSensor1422.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1421YYY.children = new X3D.MFNode();

HAnimSegment1421ZZZ.children[0] = TouchSensor1422;

let Transform1423 = browser.currentScene.createNode("Transform");
Transform1423.translation = new X3D.SFVec3f([-0.1983,0.7815,-0.028]);
let Shape1424 = browser.currentScene.createNode("Shape");
Shape1424.USE = "HAnimJointShape";
Transform1423YYY.child = new X3D.undefined();

Transform1423ZZZ.child[0] = Shape1424;

HAnimSegment1421ZZZ.children[1] = Transform1423;

let Shape1425 = browser.currentScene.createNode("Shape");
let LineSet1426 = browser.currentScene.createNode("LineSet");
LineSet1426.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1427 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1427.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1427;

let Coordinate1428 = browser.currentScene.createNode("Coordinate");
Coordinate1428.point = new X3D.MFVec3f([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
coord = Coordinate1428;

geometry = LineSet1426;

HAnimSegment1421ZZZ.children[2] = Shape1425;

HAnimJoint1420YYY.children = new X3D.MFNode();

HAnimJoint1420ZZZ.children[0] = HAnimSegment1421;

let HAnimJoint1429 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1429.DEF = "hanim_r_index2";
HAnimJoint1429.name = "r_index2";
HAnimJoint1429.rotation = new X3D.SFRotation([0,0,0.999999999999999,0.391134387386823]);
HAnimJoint1429.center = new X3D.SFVec3f([-0.2017,0.7363,-0.0248]);
let HAnimSegment1430 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1430.DEF = "hanim_r_index_middle";
HAnimSegment1430.name = "r_index_middle";
let TouchSensor1431 = browser.currentScene.createNode("TouchSensor");
TouchSensor1431.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1430YYY.children = new X3D.MFNode();

HAnimSegment1430ZZZ.children[0] = TouchSensor1431;

let Transform1432 = browser.currentScene.createNode("Transform");
Transform1432.translation = new X3D.SFVec3f([-0.2017,0.7363,-0.0248]);
let Shape1433 = browser.currentScene.createNode("Shape");
Shape1433.USE = "HAnimJointShape";
Transform1432YYY.child = new X3D.undefined();

Transform1432ZZZ.child[0] = Shape1433;

HAnimSegment1430ZZZ.children[1] = Transform1432;

let Shape1434 = browser.currentScene.createNode("Shape");
let LineSet1435 = browser.currentScene.createNode("LineSet");
LineSet1435.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1436 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1436.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1436;

let Coordinate1437 = browser.currentScene.createNode("Coordinate");
Coordinate1437.point = new X3D.MFVec3f([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
coord = Coordinate1437;

geometry = LineSet1435;

HAnimSegment1430ZZZ.children[2] = Shape1434;

HAnimJoint1429YYY.children = new X3D.MFNode();

HAnimJoint1429ZZZ.children[0] = HAnimSegment1430;

let HAnimJoint1438 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1438.DEF = "hanim_r_index3";
HAnimJoint1438.name = "r_index3";
HAnimJoint1438.rotation = new X3D.SFRotation([0,0,0.999999999999997,0.211082015766472]);
HAnimJoint1438.center = new X3D.SFVec3f([-0.2028,0.7139,-0.0236]);
let HAnimSegment1439 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1439.DEF = "hanim_r_index_distal";
HAnimSegment1439.name = "r_index_distal";
let TouchSensor1440 = browser.currentScene.createNode("TouchSensor");
TouchSensor1440.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1439YYY.children = new X3D.MFNode();

HAnimSegment1439ZZZ.children[0] = TouchSensor1440;

let Transform1441 = browser.currentScene.createNode("Transform");
Transform1441.translation = new X3D.SFVec3f([-0.2028,0.7139,-0.0236]);
let Shape1442 = browser.currentScene.createNode("Shape");
Shape1442.USE = "HAnimJointShape";
Transform1441YYY.child = new X3D.undefined();

Transform1441ZZZ.child[0] = Shape1442;

HAnimSegment1439ZZZ.children[1] = Transform1441;

let Shape1443 = browser.currentScene.createNode("Shape");
let LineSet1444 = browser.currentScene.createNode("LineSet");
LineSet1444.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1445 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1445.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1445;

let Coordinate1446 = browser.currentScene.createNode("Coordinate");
Coordinate1446.point = new X3D.MFVec3f([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
coord = Coordinate1446;

geometry = LineSet1444;

HAnimSegment1439ZZZ.children[2] = Shape1443;

let Shape1447 = browser.currentScene.createNode("Shape");
let LineSet1448 = browser.currentScene.createNode("LineSet");
LineSet1448.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1449 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1449.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1449;

let Coordinate1450 = browser.currentScene.createNode("Coordinate");
Coordinate1450.point = new X3D.MFVec3f([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
coord = Coordinate1450;

geometry = LineSet1448;

HAnimSegment1439ZZZ.children[3] = Shape1447;

let HAnimSite1451 = browser.currentScene.createNode("HAnimSite");
HAnimSite1451.DEF = "hanim_r_index_distal_tip";
HAnimSite1451.name = "r_index_distal_tip";
HAnimSite1451.translation = new X3D.SFVec3f([-0.198,0.6883,-0.018]);
let TouchSensor1452 = browser.currentScene.createNode("TouchSensor");
TouchSensor1452.description = "HAnimSite r_index_distal_tip";
HAnimSite1451YYY.children = new X3D.MFNode();

HAnimSite1451ZZZ.children[0] = TouchSensor1452;

let Shape1453 = browser.currentScene.createNode("Shape");
Shape1453.USE = "HAnimSiteShape";
HAnimSite1451ZZZ.children[1] = Shape1453;

HAnimSegment1439ZZZ.children[4] = HAnimSite1451;

let HAnimSite1454 = browser.currentScene.createNode("HAnimSite");
HAnimSite1454.DEF = "hanim_r_dactylion_pt";
HAnimSite1454.name = "r_dactylion_pt";
HAnimSite1454.translation = new X3D.SFVec3f([-0.1941,0.6772,-0.0423]);
let TouchSensor1455 = browser.currentScene.createNode("TouchSensor");
TouchSensor1455.description = "HAnimSite r_dactylion";
HAnimSite1454YYY.children = new X3D.MFNode();

HAnimSite1454ZZZ.children[0] = TouchSensor1455;

let Shape1456 = browser.currentScene.createNode("Shape");
Shape1456.USE = "HAnimSiteShape";
HAnimSite1454ZZZ.children[1] = Shape1456;

HAnimSegment1439ZZZ.children[5] = HAnimSite1454;

HAnimJoint1438YYY.children = new X3D.MFNode();

HAnimJoint1438ZZZ.children[0] = HAnimSegment1439;

HAnimJoint1429ZZZ.children[1] = HAnimJoint1438;

HAnimJoint1420ZZZ.children[1] = HAnimJoint1429;

HAnimJoint1411ZZZ.children[1] = HAnimJoint1420;

HAnimJoint1325ZZZ.children[2] = HAnimJoint1411;

let HAnimJoint1457 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1457.DEF = "hanim_r_middle0";
HAnimJoint1457.name = "r_middle0";
HAnimJoint1457.center = new X3D.SFVec3f([-0.1987,0.8029,-0.053]);
let HAnimSegment1458 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1458.DEF = "hanim_r_middle_metacarpal";
HAnimSegment1458.name = "r_middle_metacarpal";
let TouchSensor1459 = browser.currentScene.createNode("TouchSensor");
TouchSensor1459.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1458YYY.children = new X3D.MFNode();

HAnimSegment1458ZZZ.children[0] = TouchSensor1459;

let Transform1460 = browser.currentScene.createNode("Transform");
Transform1460.translation = new X3D.SFVec3f([-0.1987,0.8029,-0.053]);
let Shape1461 = browser.currentScene.createNode("Shape");
Shape1461.USE = "HAnimJointShape";
Transform1460YYY.child = new X3D.undefined();

Transform1460ZZZ.child[0] = Shape1461;

HAnimSegment1458ZZZ.children[1] = Transform1460;

let Shape1462 = browser.currentScene.createNode("Shape");
let LineSet1463 = browser.currentScene.createNode("LineSet");
LineSet1463.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1464 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1464.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1464;

let Coordinate1465 = browser.currentScene.createNode("Coordinate");
Coordinate1465.point = new X3D.MFVec3f([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
coord = Coordinate1465;

geometry = LineSet1463;

HAnimSegment1458ZZZ.children[2] = Shape1462;

HAnimJoint1457YYY.children = new X3D.MFNode();

HAnimJoint1457ZZZ.children[0] = HAnimSegment1458;

let HAnimJoint1466 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1466.DEF = "hanim_r_middle1";
HAnimJoint1466.name = "r_middle1";
HAnimJoint1466.rotation = new X3D.SFRotation([0,0,1.00000000000003,0.111082015766469]);
HAnimJoint1466.center = new X3D.SFVec3f([-0.1987,0.7818,-0.053]);
let HAnimSegment1467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1467.DEF = "hanim_r_middle_proximal";
HAnimSegment1467.name = "r_middle_proximal";
let TouchSensor1468 = browser.currentScene.createNode("TouchSensor");
TouchSensor1468.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1467YYY.children = new X3D.MFNode();

HAnimSegment1467ZZZ.children[0] = TouchSensor1468;

let Transform1469 = browser.currentScene.createNode("Transform");
Transform1469.translation = new X3D.SFVec3f([-0.1987,0.7818,-0.053]);
let Shape1470 = browser.currentScene.createNode("Shape");
Shape1470.USE = "HAnimJointShape";
Transform1469YYY.child = new X3D.undefined();

Transform1469ZZZ.child[0] = Shape1470;

HAnimSegment1467ZZZ.children[1] = Transform1469;

let Shape1471 = browser.currentScene.createNode("Shape");
let LineSet1472 = browser.currentScene.createNode("LineSet");
LineSet1472.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1473 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1473.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1473;

let Coordinate1474 = browser.currentScene.createNode("Coordinate");
Coordinate1474.point = new X3D.MFVec3f([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
coord = Coordinate1474;

geometry = LineSet1472;

HAnimSegment1467ZZZ.children[2] = Shape1471;

HAnimJoint1466YYY.children = new X3D.MFNode();

HAnimJoint1466ZZZ.children[0] = HAnimSegment1467;

let HAnimJoint1475 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1475.DEF = "hanim_r_middle2";
HAnimJoint1475.name = "r_middle2";
HAnimJoint1475.rotation = new X3D.SFRotation([0,0,0.999999999999999,0.391134387386823]);
HAnimJoint1475.center = new X3D.SFVec3f([-0.2013,0.7273,-0.0503]);
let HAnimSegment1476 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1476.DEF = "hanim_r_middle_middle";
HAnimSegment1476.name = "r_middle_middle";
let TouchSensor1477 = browser.currentScene.createNode("TouchSensor");
TouchSensor1477.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1476YYY.children = new X3D.MFNode();

HAnimSegment1476ZZZ.children[0] = TouchSensor1477;

let Transform1478 = browser.currentScene.createNode("Transform");
Transform1478.translation = new X3D.SFVec3f([-0.2013,0.7273,-0.0503]);
let Shape1479 = browser.currentScene.createNode("Shape");
Shape1479.USE = "HAnimJointShape";
Transform1478YYY.child = new X3D.undefined();

Transform1478ZZZ.child[0] = Shape1479;

HAnimSegment1476ZZZ.children[1] = Transform1478;

let Shape1480 = browser.currentScene.createNode("Shape");
let LineSet1481 = browser.currentScene.createNode("LineSet");
LineSet1481.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1482 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1482.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1482;

let Coordinate1483 = browser.currentScene.createNode("Coordinate");
Coordinate1483.point = new X3D.MFVec3f([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
coord = Coordinate1483;

geometry = LineSet1481;

HAnimSegment1476ZZZ.children[2] = Shape1480;

HAnimJoint1475YYY.children = new X3D.MFNode();

HAnimJoint1475ZZZ.children[0] = HAnimSegment1476;

let HAnimJoint1484 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1484.DEF = "hanim_r_middle3";
HAnimJoint1484.name = "r_middle3";
HAnimJoint1484.rotation = new X3D.SFRotation([0,0,0.999999999999997,0.211082015766472]);
HAnimJoint1484.center = new X3D.SFVec3f([-0.2026,0.7011,-0.0494]);
let HAnimSegment1485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1485.DEF = "hanim_r_middle_distal";
HAnimSegment1485.name = "r_middle_distal";
let TouchSensor1486 = browser.currentScene.createNode("TouchSensor");
TouchSensor1486.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1485YYY.children = new X3D.MFNode();

HAnimSegment1485ZZZ.children[0] = TouchSensor1486;

let Transform1487 = browser.currentScene.createNode("Transform");
Transform1487.translation = new X3D.SFVec3f([-0.2026,0.7011,-0.0494]);
let Shape1488 = browser.currentScene.createNode("Shape");
Shape1488.USE = "HAnimJointShape";
Transform1487YYY.child = new X3D.undefined();

Transform1487ZZZ.child[0] = Shape1488;

HAnimSegment1485ZZZ.children[1] = Transform1487;

let Shape1489 = browser.currentScene.createNode("Shape");
let LineSet1490 = browser.currentScene.createNode("LineSet");
LineSet1490.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1491 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1491.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1491;

let Coordinate1492 = browser.currentScene.createNode("Coordinate");
Coordinate1492.point = new X3D.MFVec3f([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
coord = Coordinate1492;

geometry = LineSet1490;

HAnimSegment1485ZZZ.children[2] = Shape1489;

let HAnimSite1493 = browser.currentScene.createNode("HAnimSite");
HAnimSite1493.DEF = "hanim_r_middle_distal_tip";
HAnimSite1493.name = "r_middle_distal_tip";
HAnimSite1493.translation = new X3D.SFVec3f([-0.1969,0.6758,-0.0427]);
let TouchSensor1494 = browser.currentScene.createNode("TouchSensor");
TouchSensor1494.description = "HAnimSite r_middle_distal_tip";
HAnimSite1493YYY.children = new X3D.MFNode();

HAnimSite1493ZZZ.children[0] = TouchSensor1494;

let Shape1495 = browser.currentScene.createNode("Shape");
Shape1495.USE = "HAnimSiteShape";
HAnimSite1493ZZZ.children[1] = Shape1495;

HAnimSegment1485ZZZ.children[3] = HAnimSite1493;

HAnimJoint1484YYY.children = new X3D.MFNode();

HAnimJoint1484ZZZ.children[0] = HAnimSegment1485;

HAnimJoint1475ZZZ.children[1] = HAnimJoint1484;

HAnimJoint1466ZZZ.children[1] = HAnimJoint1475;

HAnimJoint1457ZZZ.children[1] = HAnimJoint1466;

HAnimJoint1325ZZZ.children[3] = HAnimJoint1457;

let HAnimJoint1496 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1496.DEF = "hanim_r_ring0";
HAnimJoint1496.name = "r_ring0";
HAnimJoint1496.center = new X3D.SFVec3f([-0.1956,0.8019,-0.0794]);
let HAnimSegment1497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1497.DEF = "hanim_r_ring_metacarpal";
HAnimSegment1497.name = "r_ring_metacarpal";
let TouchSensor1498 = browser.currentScene.createNode("TouchSensor");
TouchSensor1498.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1497YYY.children = new X3D.MFNode();

HAnimSegment1497ZZZ.children[0] = TouchSensor1498;

let Transform1499 = browser.currentScene.createNode("Transform");
Transform1499.translation = new X3D.SFVec3f([-0.1956,0.8019,-0.0794]);
let Shape1500 = browser.currentScene.createNode("Shape");
Shape1500.USE = "HAnimJointShape";
Transform1499YYY.child = new X3D.undefined();

Transform1499ZZZ.child[0] = Shape1500;

HAnimSegment1497ZZZ.children[1] = Transform1499;

let Shape1501 = browser.currentScene.createNode("Shape");
let LineSet1502 = browser.currentScene.createNode("LineSet");
LineSet1502.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1503 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1503.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1503;

let Coordinate1504 = browser.currentScene.createNode("Coordinate");
Coordinate1504.point = new X3D.MFVec3f([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
coord = Coordinate1504;

geometry = LineSet1502;

HAnimSegment1497ZZZ.children[2] = Shape1501;

HAnimJoint1496YYY.children = new X3D.MFNode();

HAnimJoint1496ZZZ.children[0] = HAnimSegment1497;

let HAnimJoint1505 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1505.DEF = "hanim_r_ring1";
HAnimJoint1505.name = "r_ring1";
HAnimJoint1505.rotation = new X3D.SFRotation([0,0,1.00000000000003,0.111082015766469]);
HAnimJoint1505.center = new X3D.SFVec3f([-0.1956,0.7815,-0.0794]);
let HAnimSegment1506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1506.DEF = "hanim_r_ring_proximal";
HAnimSegment1506.name = "r_ring_proximal";
let TouchSensor1507 = browser.currentScene.createNode("TouchSensor");
TouchSensor1507.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1506YYY.children = new X3D.MFNode();

HAnimSegment1506ZZZ.children[0] = TouchSensor1507;

let Transform1508 = browser.currentScene.createNode("Transform");
Transform1508.translation = new X3D.SFVec3f([-0.1956,0.7815,-0.0794]);
let Shape1509 = browser.currentScene.createNode("Shape");
Shape1509.USE = "HAnimJointShape";
Transform1508YYY.child = new X3D.undefined();

Transform1508ZZZ.child[0] = Shape1509;

HAnimSegment1506ZZZ.children[1] = Transform1508;

let Shape1510 = browser.currentScene.createNode("Shape");
let LineSet1511 = browser.currentScene.createNode("LineSet");
LineSet1511.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1512 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1512.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1512;

let Coordinate1513 = browser.currentScene.createNode("Coordinate");
Coordinate1513.point = new X3D.MFVec3f([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
coord = Coordinate1513;

geometry = LineSet1511;

HAnimSegment1506ZZZ.children[2] = Shape1510;

HAnimJoint1505YYY.children = new X3D.MFNode();

HAnimJoint1505ZZZ.children[0] = HAnimSegment1506;

let HAnimJoint1514 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1514.DEF = "hanim_r_ring2";
HAnimJoint1514.name = "r_ring2";
HAnimJoint1514.rotation = new X3D.SFRotation([0,0,0.999999999999999,0.391134387386823]);
HAnimJoint1514.center = new X3D.SFVec3f([-0.1973,0.7287,-0.0777]);
let HAnimSegment1515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1515.DEF = "hanim_r_ring_middle";
HAnimSegment1515.name = "r_ring_middle";
let TouchSensor1516 = browser.currentScene.createNode("TouchSensor");
TouchSensor1516.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1515YYY.children = new X3D.MFNode();

HAnimSegment1515ZZZ.children[0] = TouchSensor1516;

let Transform1517 = browser.currentScene.createNode("Transform");
Transform1517.translation = new X3D.SFVec3f([-0.1973,0.7287,-0.0777]);
let Shape1518 = browser.currentScene.createNode("Shape");
Shape1518.USE = "HAnimJointShape";
Transform1517YYY.child = new X3D.undefined();

Transform1517ZZZ.child[0] = Shape1518;

HAnimSegment1515ZZZ.children[1] = Transform1517;

let Shape1519 = browser.currentScene.createNode("Shape");
let LineSet1520 = browser.currentScene.createNode("LineSet");
LineSet1520.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1521 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1521.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1521;

let Coordinate1522 = browser.currentScene.createNode("Coordinate");
Coordinate1522.point = new X3D.MFVec3f([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
coord = Coordinate1522;

geometry = LineSet1520;

HAnimSegment1515ZZZ.children[2] = Shape1519;

HAnimJoint1514YYY.children = new X3D.MFNode();

HAnimJoint1514ZZZ.children[0] = HAnimSegment1515;

let HAnimJoint1523 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1523.DEF = "hanim_r_ring3";
HAnimJoint1523.name = "r_ring3";
HAnimJoint1523.rotation = new X3D.SFRotation([0,0,0.999999999999997,0.211082015766472]);
HAnimJoint1523.center = new X3D.SFVec3f([-0.1983,0.7045,-0.0767]);
let HAnimSegment1524 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1524.DEF = "hanim_r_ring_distal";
HAnimSegment1524.name = "r_ring_distal";
let TouchSensor1525 = browser.currentScene.createNode("TouchSensor");
TouchSensor1525.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1524YYY.children = new X3D.MFNode();

HAnimSegment1524ZZZ.children[0] = TouchSensor1525;

let Transform1526 = browser.currentScene.createNode("Transform");
Transform1526.translation = new X3D.SFVec3f([-0.1983,0.7045,-0.0767]);
let Shape1527 = browser.currentScene.createNode("Shape");
Shape1527.USE = "HAnimJointShape";
Transform1526YYY.child = new X3D.undefined();

Transform1526ZZZ.child[0] = Shape1527;

HAnimSegment1524ZZZ.children[1] = Transform1526;

let Shape1528 = browser.currentScene.createNode("Shape");
let LineSet1529 = browser.currentScene.createNode("LineSet");
LineSet1529.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1530 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1530.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1530;

let Coordinate1531 = browser.currentScene.createNode("Coordinate");
Coordinate1531.point = new X3D.MFVec3f([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
coord = Coordinate1531;

geometry = LineSet1529;

HAnimSegment1524ZZZ.children[2] = Shape1528;

let HAnimSite1532 = browser.currentScene.createNode("HAnimSite");
HAnimSite1532.DEF = "hanim_r_ring_distal_tip";
HAnimSite1532.name = "r_ring_distal_tip";
HAnimSite1532.translation = new X3D.SFVec3f([-0.1934,0.6778,-0.0693]);
let TouchSensor1533 = browser.currentScene.createNode("TouchSensor");
TouchSensor1533.description = "HAnimSite r_ring_distal_tip";
HAnimSite1532YYY.children = new X3D.MFNode();

HAnimSite1532ZZZ.children[0] = TouchSensor1533;

let Shape1534 = browser.currentScene.createNode("Shape");
Shape1534.USE = "HAnimSiteShape";
HAnimSite1532ZZZ.children[1] = Shape1534;

HAnimSegment1524ZZZ.children[3] = HAnimSite1532;

HAnimJoint1523YYY.children = new X3D.MFNode();

HAnimJoint1523ZZZ.children[0] = HAnimSegment1524;

HAnimJoint1514ZZZ.children[1] = HAnimJoint1523;

HAnimJoint1505ZZZ.children[1] = HAnimJoint1514;

HAnimJoint1496ZZZ.children[1] = HAnimJoint1505;

HAnimJoint1325ZZZ.children[4] = HAnimJoint1496;

let HAnimJoint1535 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1535.DEF = "hanim_r_pinky0";
HAnimJoint1535.name = "r_pinky0";
HAnimJoint1535.center = new X3D.SFVec3f([-0.1925,0.8066,-0.1036]);
let HAnimSegment1536 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1536.DEF = "hanim_r_pinky_metacarpal";
HAnimSegment1536.name = "r_pinky_metacarpal";
let TouchSensor1537 = browser.currentScene.createNode("TouchSensor");
TouchSensor1537.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1536YYY.children = new X3D.MFNode();

HAnimSegment1536ZZZ.children[0] = TouchSensor1537;

let Transform1538 = browser.currentScene.createNode("Transform");
Transform1538.translation = new X3D.SFVec3f([-0.1925,0.8066,-0.1036]);
let Shape1539 = browser.currentScene.createNode("Shape");
Shape1539.USE = "HAnimJointShape";
Transform1538YYY.child = new X3D.undefined();

Transform1538ZZZ.child[0] = Shape1539;

HAnimSegment1536ZZZ.children[1] = Transform1538;

let Shape1540 = browser.currentScene.createNode("Shape");
let LineSet1541 = browser.currentScene.createNode("LineSet");
LineSet1541.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1542 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1542.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1542;

let Coordinate1543 = browser.currentScene.createNode("Coordinate");
Coordinate1543.point = new X3D.MFVec3f([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
coord = Coordinate1543;

geometry = LineSet1541;

HAnimSegment1536ZZZ.children[2] = Shape1540;

HAnimJoint1535YYY.children = new X3D.MFNode();

HAnimJoint1535ZZZ.children[0] = HAnimSegment1536;

let HAnimJoint1544 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1544.DEF = "hanim_r_pinky1";
HAnimJoint1544.name = "r_pinky1";
HAnimJoint1544.rotation = new X3D.SFRotation([0,0,1.00000000000003,0.111082015766469]);
HAnimJoint1544.center = new X3D.SFVec3f([-0.1925,0.7866,-0.1036]);
let HAnimSegment1545 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1545.DEF = "hanim_r_pinky_proximal";
HAnimSegment1545.name = "r_pinky_proximal";
let TouchSensor1546 = browser.currentScene.createNode("TouchSensor");
TouchSensor1546.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1545YYY.children = new X3D.MFNode();

HAnimSegment1545ZZZ.children[0] = TouchSensor1546;

let Transform1547 = browser.currentScene.createNode("Transform");
Transform1547.translation = new X3D.SFVec3f([-0.1925,0.7866,-0.1036]);
let Shape1548 = browser.currentScene.createNode("Shape");
Shape1548.USE = "HAnimJointShape";
Transform1547YYY.child = new X3D.undefined();

Transform1547ZZZ.child[0] = Shape1548;

HAnimSegment1545ZZZ.children[1] = Transform1547;

let Shape1549 = browser.currentScene.createNode("Shape");
let LineSet1550 = browser.currentScene.createNode("LineSet");
LineSet1550.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1551 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1551.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1551;

let Coordinate1552 = browser.currentScene.createNode("Coordinate");
Coordinate1552.point = new X3D.MFVec3f([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
coord = Coordinate1552;

geometry = LineSet1550;

HAnimSegment1545ZZZ.children[2] = Shape1549;

HAnimJoint1544YYY.children = new X3D.MFNode();

HAnimJoint1544ZZZ.children[0] = HAnimSegment1545;

let HAnimJoint1553 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1553.DEF = "hanim_r_pinky2";
HAnimJoint1553.name = "r_pinky2";
HAnimJoint1553.rotation = new X3D.SFRotation([0,0,0.999999999999999,0.391134387386823]);
HAnimJoint1553.center = new X3D.SFVec3f([-0.1938,0.7452,-0.1024]);
let HAnimSegment1554 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1554.DEF = "hanim_r_pinky_middle";
HAnimSegment1554.name = "r_pinky_middle";
let TouchSensor1555 = browser.currentScene.createNode("TouchSensor");
TouchSensor1555.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1554YYY.children = new X3D.MFNode();

HAnimSegment1554ZZZ.children[0] = TouchSensor1555;

let Transform1556 = browser.currentScene.createNode("Transform");
Transform1556.translation = new X3D.SFVec3f([-0.1938,0.7452,-0.1024]);
let Shape1557 = browser.currentScene.createNode("Shape");
Shape1557.USE = "HAnimJointShape";
Transform1556YYY.child = new X3D.undefined();

Transform1556ZZZ.child[0] = Shape1557;

HAnimSegment1554ZZZ.children[1] = Transform1556;

let Shape1558 = browser.currentScene.createNode("Shape");
let LineSet1559 = browser.currentScene.createNode("LineSet");
LineSet1559.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1560 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1560.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1560;

let Coordinate1561 = browser.currentScene.createNode("Coordinate");
Coordinate1561.point = new X3D.MFVec3f([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
coord = Coordinate1561;

geometry = LineSet1559;

HAnimSegment1554ZZZ.children[2] = Shape1558;

HAnimJoint1553YYY.children = new X3D.MFNode();

HAnimJoint1553ZZZ.children[0] = HAnimSegment1554;

let HAnimJoint1562 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1562.DEF = "hanim_r_pinky3";
HAnimJoint1562.name = "r_pinky3";
HAnimJoint1562.rotation = new X3D.SFRotation([0,0,0.999999999999997,0.211082015766472]);
HAnimJoint1562.center = new X3D.SFVec3f([-0.1948,0.7277,-0.1017]);
let HAnimSegment1563 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1563.DEF = "hanim_r_pinky_distal";
HAnimSegment1563.name = "r_pinky_distal";
let TouchSensor1564 = browser.currentScene.createNode("TouchSensor");
TouchSensor1564.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1563YYY.children = new X3D.MFNode();

HAnimSegment1563ZZZ.children[0] = TouchSensor1564;

let Transform1565 = browser.currentScene.createNode("Transform");
Transform1565.translation = new X3D.SFVec3f([-0.1948,0.7277,-0.1017]);
let Shape1566 = browser.currentScene.createNode("Shape");
Shape1566.USE = "HAnimJointShape";
Transform1565YYY.child = new X3D.undefined();

Transform1565ZZZ.child[0] = Shape1566;

HAnimSegment1563ZZZ.children[1] = Transform1565;

let Shape1567 = browser.currentScene.createNode("Shape");
let LineSet1568 = browser.currentScene.createNode("LineSet");
LineSet1568.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1569 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1569.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA1569;

let Coordinate1570 = browser.currentScene.createNode("Coordinate");
Coordinate1570.point = new X3D.MFVec3f([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
coord = Coordinate1570;

geometry = LineSet1568;

HAnimSegment1563ZZZ.children[2] = Shape1567;

let HAnimSite1571 = browser.currentScene.createNode("HAnimSite");
HAnimSite1571.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1571.name = "r_pinky_distal_tip";
HAnimSite1571.translation = new X3D.SFVec3f([-0.1938,0.7035,-0.0949]);
let TouchSensor1572 = browser.currentScene.createNode("TouchSensor");
TouchSensor1572.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1571YYY.children = new X3D.MFNode();

HAnimSite1571ZZZ.children[0] = TouchSensor1572;

let Shape1573 = browser.currentScene.createNode("Shape");
Shape1573.USE = "HAnimSiteShape";
HAnimSite1571ZZZ.children[1] = Shape1573;

HAnimSegment1563ZZZ.children[3] = HAnimSite1571;

HAnimJoint1562YYY.children = new X3D.MFNode();

HAnimJoint1562ZZZ.children[0] = HAnimSegment1563;

HAnimJoint1553ZZZ.children[1] = HAnimJoint1562;

HAnimJoint1544ZZZ.children[1] = HAnimJoint1553;

HAnimJoint1535ZZZ.children[1] = HAnimJoint1544;

HAnimJoint1325ZZZ.children[5] = HAnimJoint1535;

HAnimJoint1288ZZZ.children[1] = HAnimJoint1325;

HAnimJoint1272ZZZ.children[1] = HAnimJoint1288;

HAnimJoint1263ZZZ.children[1] = HAnimJoint1272;

HAnimJoint1226ZZZ.children[1] = HAnimJoint1263;

HAnimJoint594ZZZ.children[3] = HAnimJoint1226;

HAnimJoint585ZZZ.children[1] = HAnimJoint594;

HAnimJoint576ZZZ.children[1] = HAnimJoint585;

HAnimJoint567ZZZ.children[1] = HAnimJoint576;

HAnimJoint558ZZZ.children[1] = HAnimJoint567;

HAnimJoint549ZZZ.children[1] = HAnimJoint558;

HAnimJoint540ZZZ.children[1] = HAnimJoint549;

HAnimJoint531ZZZ.children[1] = HAnimJoint540;

HAnimJoint508ZZZ.children[1] = HAnimJoint531;

HAnimJoint492ZZZ.children[1] = HAnimJoint508;

HAnimJoint483ZZZ.children[1] = HAnimJoint492;

HAnimJoint474ZZZ.children[1] = HAnimJoint483;

HAnimJoint465ZZZ.children[1] = HAnimJoint474;

HAnimJoint435ZZZ.children[1] = HAnimJoint465;

HAnimJoint426ZZZ.children[1] = HAnimJoint435;

HAnimJoint417ZZZ.children[1] = HAnimJoint426;

HAnimJoint394ZZZ.children[1] = HAnimJoint417;

HAnimJoint44ZZZ.children[2] = HAnimJoint394;

HAnimHumanoid43.joints = new X3D.MFNode();

HAnimHumanoid43XXX.joints[0] = HAnimJoint44;

let HAnimJoint1574 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1574.USE = "hanim_humanoid_root";
joints[1] = HAnimJoint1574;

let HAnimJoint1575 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1575.USE = "hanim_sacroiliac";
joints[2] = HAnimJoint1575;

let HAnimJoint1576 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1576.USE = "hanim_vl5";
joints[3] = HAnimJoint1576;

let HAnimJoint1577 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1577.USE = "hanim_vl4";
joints[4] = HAnimJoint1577;

let HAnimJoint1578 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1578.USE = "hanim_vl3";
joints[5] = HAnimJoint1578;

let HAnimJoint1579 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1579.USE = "hanim_vl2";
joints[6] = HAnimJoint1579;

let HAnimJoint1580 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1580.USE = "hanim_vl1";
joints[7] = HAnimJoint1580;

let HAnimJoint1581 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1581.USE = "hanim_vt12";
joints[8] = HAnimJoint1581;

let HAnimJoint1582 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1582.USE = "hanim_vt11";
joints[9] = HAnimJoint1582;

let HAnimJoint1583 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1583.USE = "hanim_vt10";
joints[10] = HAnimJoint1583;

let HAnimJoint1584 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1584.USE = "hanim_vt9";
joints[11] = HAnimJoint1584;

let HAnimJoint1585 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1585.USE = "hanim_vt8";
joints[12] = HAnimJoint1585;

let HAnimJoint1586 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1586.USE = "hanim_vt7";
joints[13] = HAnimJoint1586;

let HAnimJoint1587 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1587.USE = "hanim_vt6";
joints[14] = HAnimJoint1587;

let HAnimJoint1588 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1588.USE = "hanim_vt5";
joints[15] = HAnimJoint1588;

let HAnimJoint1589 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1589.USE = "hanim_vt4";
joints[16] = HAnimJoint1589;

let HAnimJoint1590 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1590.USE = "hanim_vt3";
joints[17] = HAnimJoint1590;

let HAnimJoint1591 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1591.USE = "hanim_vt2";
joints[18] = HAnimJoint1591;

let HAnimJoint1592 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1592.USE = "hanim_vt1";
joints[19] = HAnimJoint1592;

let HAnimJoint1593 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1593.USE = "hanim_vc7";
joints[20] = HAnimJoint1593;

let HAnimJoint1594 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1594.USE = "hanim_vc6";
joints[21] = HAnimJoint1594;

let HAnimJoint1595 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1595.USE = "hanim_vc5";
joints[22] = HAnimJoint1595;

let HAnimJoint1596 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1596.USE = "hanim_vc4";
joints[23] = HAnimJoint1596;

let HAnimJoint1597 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1597.USE = "hanim_vc3";
joints[24] = HAnimJoint1597;

let HAnimJoint1598 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1598.USE = "hanim_vc2";
joints[25] = HAnimJoint1598;

let HAnimJoint1599 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1599.USE = "hanim_vc1";
joints[26] = HAnimJoint1599;

let HAnimJoint1600 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1600.USE = "hanim_skullbase";
joints[27] = HAnimJoint1600;

let HAnimJoint1601 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_temporomandibular";
joints[28] = HAnimJoint1601;

let HAnimJoint1602 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_l_acromioclavicular";
joints[29] = HAnimJoint1602;

let HAnimJoint1603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_r_acromioclavicular";
joints[30] = HAnimJoint1603;

let HAnimJoint1604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_l_ankle";
joints[31] = HAnimJoint1604;

let HAnimJoint1605 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_r_ankle";
joints[32] = HAnimJoint1605;

let HAnimJoint1606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_l_elbow";
joints[33] = HAnimJoint1606;

let HAnimJoint1607 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_r_elbow";
joints[34] = HAnimJoint1607;

let HAnimJoint1608 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_l_eyeball_joint";
joints[35] = HAnimJoint1608;

let HAnimJoint1609 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_r_eyeball_joint";
joints[36] = HAnimJoint1609;

let HAnimJoint1610 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_l_eyebrow_joint";
joints[37] = HAnimJoint1610;

let HAnimJoint1611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_r_eyebrow_joint";
joints[38] = HAnimJoint1611;

let HAnimJoint1612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_eyelid_joint";
joints[39] = HAnimJoint1612;

let HAnimJoint1613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_r_eyelid_joint";
joints[40] = HAnimJoint1613;

let HAnimJoint1614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_hip";
joints[41] = HAnimJoint1614;

let HAnimJoint1615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_r_hip";
joints[42] = HAnimJoint1615;

let HAnimJoint1616 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_index0";
joints[43] = HAnimJoint1616;

let HAnimJoint1617 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_r_index0";
joints[44] = HAnimJoint1617;

let HAnimJoint1618 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_index1";
joints[45] = HAnimJoint1618;

let HAnimJoint1619 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_r_index1";
joints[46] = HAnimJoint1619;

let HAnimJoint1620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_index2";
joints[47] = HAnimJoint1620;

let HAnimJoint1621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_r_index2";
joints[48] = HAnimJoint1621;

let HAnimJoint1622 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_index3";
joints[49] = HAnimJoint1622;

let HAnimJoint1623 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_r_index3";
joints[50] = HAnimJoint1623;

let HAnimJoint1624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_knee";
joints[51] = HAnimJoint1624;

let HAnimJoint1625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_r_knee";
joints[52] = HAnimJoint1625;

let HAnimJoint1626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_metatarsal";
joints[53] = HAnimJoint1626;

let HAnimJoint1627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_r_metatarsal";
joints[54] = HAnimJoint1627;

let HAnimJoint1628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_middle0";
joints[55] = HAnimJoint1628;

let HAnimJoint1629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_r_middle0";
joints[56] = HAnimJoint1629;

let HAnimJoint1630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_middle1";
joints[57] = HAnimJoint1630;

let HAnimJoint1631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_r_middle1";
joints[58] = HAnimJoint1631;

let HAnimJoint1632 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_l_middle2";
joints[59] = HAnimJoint1632;

let HAnimJoint1633 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_r_middle2";
joints[60] = HAnimJoint1633;

let HAnimJoint1634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_l_middle3";
joints[61] = HAnimJoint1634;

let HAnimJoint1635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_r_middle3";
joints[62] = HAnimJoint1635;

let HAnimJoint1636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_l_midtarsal";
joints[63] = HAnimJoint1636;

let HAnimJoint1637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_r_midtarsal";
joints[64] = HAnimJoint1637;

let HAnimJoint1638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_l_pinky0";
joints[65] = HAnimJoint1638;

let HAnimJoint1639 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_pinky0";
joints[66] = HAnimJoint1639;

let HAnimJoint1640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_l_pinky1";
joints[67] = HAnimJoint1640;

let HAnimJoint1641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_pinky1";
joints[68] = HAnimJoint1641;

let HAnimJoint1642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_l_pinky2";
joints[69] = HAnimJoint1642;

let HAnimJoint1643 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_pinky2";
joints[70] = HAnimJoint1643;

let HAnimJoint1644 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_l_pinky3";
joints[71] = HAnimJoint1644;

let HAnimJoint1645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_pinky3";
joints[72] = HAnimJoint1645;

let HAnimJoint1646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_l_ring0";
joints[73] = HAnimJoint1646;

let HAnimJoint1647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_ring0";
joints[74] = HAnimJoint1647;

let HAnimJoint1648 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_l_ring1";
joints[75] = HAnimJoint1648;

let HAnimJoint1649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_ring1";
joints[76] = HAnimJoint1649;

let HAnimJoint1650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_l_ring2";
joints[77] = HAnimJoint1650;

let HAnimJoint1651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_ring2";
joints[78] = HAnimJoint1651;

let HAnimJoint1652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_l_ring3";
joints[79] = HAnimJoint1652;

let HAnimJoint1653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_ring3";
joints[80] = HAnimJoint1653;

let HAnimJoint1654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_l_shoulder";
joints[81] = HAnimJoint1654;

let HAnimJoint1655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_shoulder";
joints[82] = HAnimJoint1655;

let HAnimJoint1656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_l_sternoclavicular";
joints[83] = HAnimJoint1656;

let HAnimJoint1657 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_sternoclavicular";
joints[84] = HAnimJoint1657;

let HAnimJoint1658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_l_subtalar";
joints[85] = HAnimJoint1658;

let HAnimJoint1659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_r_subtalar";
joints[86] = HAnimJoint1659;

let HAnimJoint1660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_l_thumb1";
joints[87] = HAnimJoint1660;

let HAnimJoint1661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_r_thumb1";
joints[88] = HAnimJoint1661;

let HAnimJoint1662 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_l_thumb2";
joints[89] = HAnimJoint1662;

let HAnimJoint1663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_r_thumb2";
joints[90] = HAnimJoint1663;

let HAnimJoint1664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_l_thumb3";
joints[91] = HAnimJoint1664;

let HAnimJoint1665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_r_thumb3";
joints[92] = HAnimJoint1665;

let HAnimJoint1666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_l_wrist";
joints[93] = HAnimJoint1666;

let HAnimJoint1667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_r_wrist";
joints[94] = HAnimJoint1667;

let HAnimSegment1668 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1668.USE = "hanim_pelvis";
segments[95] = HAnimSegment1668;

let HAnimSegment1669 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1669.USE = "hanim_skull";
segments[96] = HAnimSegment1669;

let HAnimSegment1670 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1670.USE = "hanim_jaw";
segments[97] = HAnimSegment1670;

let HAnimSegment1671 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1671.USE = "hanim_c1";
segments[98] = HAnimSegment1671;

let HAnimSegment1672 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1672.USE = "hanim_c2";
segments[99] = HAnimSegment1672;

let HAnimSegment1673 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1673.USE = "hanim_c3";
segments[100] = HAnimSegment1673;

let HAnimSegment1674 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1674.USE = "hanim_c4";
segments[101] = HAnimSegment1674;

let HAnimSegment1675 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1675.USE = "hanim_c5";
segments[102] = HAnimSegment1675;

let HAnimSegment1676 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1676.USE = "hanim_c6";
segments[103] = HAnimSegment1676;

let HAnimSegment1677 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1677.USE = "hanim_c7";
segments[104] = HAnimSegment1677;

let HAnimSegment1678 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1678.USE = "hanim_t1";
segments[105] = HAnimSegment1678;

let HAnimSegment1679 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1679.USE = "hanim_t2";
segments[106] = HAnimSegment1679;

let HAnimSegment1680 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1680.USE = "hanim_t3";
segments[107] = HAnimSegment1680;

let HAnimSegment1681 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1681.USE = "hanim_t4";
segments[108] = HAnimSegment1681;

let HAnimSegment1682 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1682.USE = "hanim_t5";
segments[109] = HAnimSegment1682;

let HAnimSegment1683 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1683.USE = "hanim_t6";
segments[110] = HAnimSegment1683;

let HAnimSegment1684 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1684.USE = "hanim_t7";
segments[111] = HAnimSegment1684;

let HAnimSegment1685 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1685.USE = "hanim_t8";
segments[112] = HAnimSegment1685;

let HAnimSegment1686 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1686.USE = "hanim_t9";
segments[113] = HAnimSegment1686;

let HAnimSegment1687 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1687.USE = "hanim_t10";
segments[114] = HAnimSegment1687;

let HAnimSegment1688 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1688.USE = "hanim_t11";
segments[115] = HAnimSegment1688;

let HAnimSegment1689 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1689.USE = "hanim_t12";
segments[116] = HAnimSegment1689;

let HAnimSegment1690 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1690.USE = "hanim_l1";
segments[117] = HAnimSegment1690;

let HAnimSegment1691 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1691.USE = "hanim_l2";
segments[118] = HAnimSegment1691;

let HAnimSegment1692 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1692.USE = "hanim_l3";
segments[119] = HAnimSegment1692;

let HAnimSegment1693 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1693.USE = "hanim_l4";
segments[120] = HAnimSegment1693;

let HAnimSegment1694 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1694.USE = "hanim_l5";
segments[121] = HAnimSegment1694;

let HAnimSegment1695 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1695.USE = "hanim_sacrum";
segments[122] = HAnimSegment1695;

let HAnimSegment1696 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1696.USE = "hanim_l_calf";
segments[123] = HAnimSegment1696;

let HAnimSegment1697 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1697.USE = "hanim_r_calf";
segments[124] = HAnimSegment1697;

let HAnimSegment1698 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1698.USE = "hanim_l_clavicle";
segments[125] = HAnimSegment1698;

let HAnimSegment1699 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1699.USE = "hanim_r_clavicle";
segments[126] = HAnimSegment1699;

let HAnimSegment1700 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1700.USE = "hanim_l_eyeball";
segments[127] = HAnimSegment1700;

let HAnimSegment1701 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1701.USE = "hanim_r_eyeball";
segments[128] = HAnimSegment1701;

let HAnimSegment1702 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1702.USE = "hanim_l_eyebrow";
segments[129] = HAnimSegment1702;

let HAnimSegment1703 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1703.USE = "hanim_r_eyebrow";
segments[130] = HAnimSegment1703;

let HAnimSegment1704 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1704.USE = "hanim_l_eyelid";
segments[131] = HAnimSegment1704;

let HAnimSegment1705 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1705.USE = "hanim_r_eyelid";
segments[132] = HAnimSegment1705;

let HAnimSegment1706 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1706.USE = "hanim_l_forearm";
segments[133] = HAnimSegment1706;

let HAnimSegment1707 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1707.USE = "hanim_r_forearm";
segments[134] = HAnimSegment1707;

let HAnimSegment1708 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1708.USE = "hanim_l_forefoot";
segments[135] = HAnimSegment1708;

let HAnimSegment1709 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1709.USE = "hanim_r_forefoot";
segments[136] = HAnimSegment1709;

let HAnimSegment1710 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1710.USE = "hanim_l_hand";
segments[137] = HAnimSegment1710;

let HAnimSegment1711 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1711.USE = "hanim_r_hand";
segments[138] = HAnimSegment1711;

let HAnimSegment1712 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1712.USE = "hanim_l_hindfoot";
segments[139] = HAnimSegment1712;

let HAnimSegment1713 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1713.USE = "hanim_r_hindfoot";
segments[140] = HAnimSegment1713;

let HAnimSegment1714 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1714.USE = "hanim_l_index_distal";
segments[141] = HAnimSegment1714;

let HAnimSegment1715 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1715.USE = "hanim_r_index_distal";
segments[142] = HAnimSegment1715;

let HAnimSegment1716 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1716.USE = "hanim_l_index_metacarpal";
segments[143] = HAnimSegment1716;

let HAnimSegment1717 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1717.USE = "hanim_r_index_metacarpal";
segments[144] = HAnimSegment1717;

let HAnimSegment1718 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1718.USE = "hanim_l_index_middle";
segments[145] = HAnimSegment1718;

let HAnimSegment1719 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1719.USE = "hanim_r_index_middle";
segments[146] = HAnimSegment1719;

let HAnimSegment1720 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1720.USE = "hanim_l_index_proximal";
segments[147] = HAnimSegment1720;

let HAnimSegment1721 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1721.USE = "hanim_r_index_proximal";
segments[148] = HAnimSegment1721;

let HAnimSegment1722 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1722.USE = "hanim_l_middistal";
segments[149] = HAnimSegment1722;

let HAnimSegment1723 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1723.USE = "hanim_r_middistal";
segments[150] = HAnimSegment1723;

let HAnimSegment1724 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1724.USE = "hanim_l_middle_distal";
segments[151] = HAnimSegment1724;

let HAnimSegment1725 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1725.USE = "hanim_r_middle_distal";
segments[152] = HAnimSegment1725;

let HAnimSegment1726 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1726.USE = "hanim_l_middle_metacarpal";
segments[153] = HAnimSegment1726;

let HAnimSegment1727 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1727.USE = "hanim_r_middle_metacarpal";
segments[154] = HAnimSegment1727;

let HAnimSegment1728 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1728.USE = "hanim_l_middle_middle";
segments[155] = HAnimSegment1728;

let HAnimSegment1729 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1729.USE = "hanim_r_middle_middle";
segments[156] = HAnimSegment1729;

let HAnimSegment1730 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1730.USE = "hanim_l_middle_proximal";
segments[157] = HAnimSegment1730;

let HAnimSegment1731 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1731.USE = "hanim_r_middle_proximal";
segments[158] = HAnimSegment1731;

let HAnimSegment1732 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1732.USE = "hanim_l_midproximal";
segments[159] = HAnimSegment1732;

let HAnimSegment1733 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1733.USE = "hanim_r_midproximal";
segments[160] = HAnimSegment1733;

let HAnimSegment1734 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1734.USE = "hanim_l_pinky_distal";
segments[161] = HAnimSegment1734;

let HAnimSegment1735 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1735.USE = "hanim_r_pinky_distal";
segments[162] = HAnimSegment1735;

let HAnimSegment1736 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1736.USE = "hanim_l_pinky_metacarpal";
segments[163] = HAnimSegment1736;

let HAnimSegment1737 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1737.USE = "hanim_r_pinky_metacarpal";
segments[164] = HAnimSegment1737;

let HAnimSegment1738 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1738.USE = "hanim_l_pinky_middle";
segments[165] = HAnimSegment1738;

let HAnimSegment1739 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1739.USE = "hanim_r_pinky_middle";
segments[166] = HAnimSegment1739;

let HAnimSegment1740 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1740.USE = "hanim_l_pinky_proximal";
segments[167] = HAnimSegment1740;

let HAnimSegment1741 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1741.USE = "hanim_r_pinky_proximal";
segments[168] = HAnimSegment1741;

let HAnimSegment1742 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1742.USE = "hanim_l_ring_distal";
segments[169] = HAnimSegment1742;

let HAnimSegment1743 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1743.USE = "hanim_r_ring_distal";
segments[170] = HAnimSegment1743;

let HAnimSegment1744 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1744.USE = "hanim_l_ring_metacarpal";
segments[171] = HAnimSegment1744;

let HAnimSegment1745 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1745.USE = "hanim_r_ring_metacarpal";
segments[172] = HAnimSegment1745;

let HAnimSegment1746 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_l_ring_middle";
segments[173] = HAnimSegment1746;

let HAnimSegment1747 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_r_ring_middle";
segments[174] = HAnimSegment1747;

let HAnimSegment1748 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_l_ring_proximal";
segments[175] = HAnimSegment1748;

let HAnimSegment1749 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_r_ring_proximal";
segments[176] = HAnimSegment1749;

let HAnimSegment1750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l_scapula";
segments[177] = HAnimSegment1750;

let HAnimSegment1751 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_r_scapula";
segments[178] = HAnimSegment1751;

let HAnimSegment1752 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l_thigh";
segments[179] = HAnimSegment1752;

let HAnimSegment1753 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_r_thigh";
segments[180] = HAnimSegment1753;

let HAnimSegment1754 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l_thumb_distal";
segments[181] = HAnimSegment1754;

let HAnimSegment1755 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_r_thumb_distal";
segments[182] = HAnimSegment1755;

let HAnimSegment1756 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_thumb_metacarpal";
segments[183] = HAnimSegment1756;

let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_r_thumb_metacarpal";
segments[184] = HAnimSegment1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_thumb_proximal";
segments[185] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_r_thumb_proximal";
segments[186] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_upperarm";
segments[187] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_r_upperarm";
segments[188] = HAnimSegment1761;

let HAnimSite1762 = browser.currentScene.createNode("HAnimSite");
HAnimSite1762.USE = "hanim_crotch_pt";
viewpoints[189] = HAnimSite1762;

let HAnimSite1763 = browser.currentScene.createNode("HAnimSite");
HAnimSite1763.USE = "hanim_skull_tip";
viewpoints[190] = HAnimSite1763;

let HAnimSite1764 = browser.currentScene.createNode("HAnimSite");
HAnimSite1764.USE = "hanim_sellion_pt";
viewpoints[191] = HAnimSite1764;

let HAnimSite1765 = browser.currentScene.createNode("HAnimSite");
HAnimSite1765.USE = "hanim_supramenton_pt";
viewpoints[192] = HAnimSite1765;

let HAnimSite1766 = browser.currentScene.createNode("HAnimSite");
HAnimSite1766.USE = "hanim_nuchale_pt";
viewpoints[193] = HAnimSite1766;

let HAnimSite1767 = browser.currentScene.createNode("HAnimSite");
HAnimSite1767.USE = "hanim_suprasternale_pt";
viewpoints[194] = HAnimSite1767;

let HAnimSite1768 = browser.currentScene.createNode("HAnimSite");
HAnimSite1768.USE = "hanim_cervicale_pt";
viewpoints[195] = HAnimSite1768;

let HAnimSite1769 = browser.currentScene.createNode("HAnimSite");
HAnimSite1769.USE = "hanim_substernale_pt";
viewpoints[196] = HAnimSite1769;

let HAnimSite1770 = browser.currentScene.createNode("HAnimSite");
HAnimSite1770.USE = "hanim_rib10_midspine_pt";
viewpoints[197] = HAnimSite1770;

let HAnimSite1771 = browser.currentScene.createNode("HAnimSite");
HAnimSite1771.USE = "hanim_waist_preferred_post_pt";
viewpoints[198] = HAnimSite1771;

let HAnimSite1772 = browser.currentScene.createNode("HAnimSite");
HAnimSite1772.USE = "hanim_navel_pt";
viewpoints[199] = HAnimSite1772;

let HAnimSite1773 = browser.currentScene.createNode("HAnimSite");
HAnimSite1773.USE = "hanim_l_acromion_pt";
viewpoints[200] = HAnimSite1773;

let HAnimSite1774 = browser.currentScene.createNode("HAnimSite");
HAnimSite1774.USE = "hanim_r_acromion_pt";
viewpoints[201] = HAnimSite1774;

let HAnimSite1775 = browser.currentScene.createNode("HAnimSite");
HAnimSite1775.USE = "hanim_r_asis_pt";
viewpoints[202] = HAnimSite1775;

let HAnimSite1776 = browser.currentScene.createNode("HAnimSite");
HAnimSite1776.USE = "hanim_l_asis_pt";
viewpoints[203] = HAnimSite1776;

let HAnimSite1777 = browser.currentScene.createNode("HAnimSite");
HAnimSite1777.USE = "hanim_l_axilla_ant_pt";
viewpoints[204] = HAnimSite1777;

let HAnimSite1778 = browser.currentScene.createNode("HAnimSite");
HAnimSite1778.USE = "hanim_r_axilla_ant_pt";
viewpoints[205] = HAnimSite1778;

let HAnimSite1779 = browser.currentScene.createNode("HAnimSite");
HAnimSite1779.USE = "hanim_l_axilla_post_pt";
viewpoints[206] = HAnimSite1779;

let HAnimSite1780 = browser.currentScene.createNode("HAnimSite");
HAnimSite1780.USE = "hanim_r_axilla_post_pt";
viewpoints[207] = HAnimSite1780;

let HAnimSite1781 = browser.currentScene.createNode("HAnimSite");
HAnimSite1781.USE = "hanim_l_calcaneous_post_pt";
viewpoints[208] = HAnimSite1781;

let HAnimSite1782 = browser.currentScene.createNode("HAnimSite");
HAnimSite1782.USE = "hanim_r_calcaneous_post_pt";
viewpoints[209] = HAnimSite1782;

let HAnimSite1783 = browser.currentScene.createNode("HAnimSite");
HAnimSite1783.USE = "hanim_l_clavicale_pt";
viewpoints[210] = HAnimSite1783;

let HAnimSite1784 = browser.currentScene.createNode("HAnimSite");
HAnimSite1784.USE = "hanim_r_clavicale_pt";
viewpoints[211] = HAnimSite1784;

let HAnimSite1785 = browser.currentScene.createNode("HAnimSite");
HAnimSite1785.USE = "hanim_l_dactylion_pt";
viewpoints[212] = HAnimSite1785;

let HAnimSite1786 = browser.currentScene.createNode("HAnimSite");
HAnimSite1786.USE = "hanim_r_dactylion_pt";
viewpoints[213] = HAnimSite1786;

let HAnimSite1787 = browser.currentScene.createNode("HAnimSite");
HAnimSite1787.USE = "hanim_l_digit2_pt";
viewpoints[214] = HAnimSite1787;

let HAnimSite1788 = browser.currentScene.createNode("HAnimSite");
HAnimSite1788.USE = "hanim_r_digit2_pt";
viewpoints[215] = HAnimSite1788;

let HAnimSite1789 = browser.currentScene.createNode("HAnimSite");
HAnimSite1789.USE = "hanim_l_femoral_lateral_epicn_pt";
viewpoints[216] = HAnimSite1789;

let HAnimSite1790 = browser.currentScene.createNode("HAnimSite");
HAnimSite1790.USE = "hanim_r_femoral_lateral_epicn_pt";
viewpoints[217] = HAnimSite1790;

let HAnimSite1791 = browser.currentScene.createNode("HAnimSite");
HAnimSite1791.USE = "hanim_l_femoral_medial_epicn_pt";
viewpoints[218] = HAnimSite1791;

let HAnimSite1792 = browser.currentScene.createNode("HAnimSite");
HAnimSite1792.USE = "hanim_r_femoral_medial_epicn_pt";
viewpoints[219] = HAnimSite1792;

let HAnimSite1793 = browser.currentScene.createNode("HAnimSite");
HAnimSite1793.USE = "hanim_l_forefoot_tip";
viewpoints[220] = HAnimSite1793;

let HAnimSite1794 = browser.currentScene.createNode("HAnimSite");
HAnimSite1794.USE = "hanim_r_forefoot_tip";
viewpoints[221] = HAnimSite1794;

let HAnimSite1795 = browser.currentScene.createNode("HAnimSite");
HAnimSite1795.USE = "hanim_r_gonion_pt";
viewpoints[222] = HAnimSite1795;

let HAnimSite1796 = browser.currentScene.createNode("HAnimSite");
HAnimSite1796.USE = "hanim_l_gonion_pt";
viewpoints[223] = HAnimSite1796;

let HAnimSite1797 = browser.currentScene.createNode("HAnimSite");
HAnimSite1797.USE = "hanim_l_humeral_lateral_epicn_pt";
viewpoints[224] = HAnimSite1797;

let HAnimSite1798 = browser.currentScene.createNode("HAnimSite");
HAnimSite1798.USE = "hanim_r_humeral_lateral_epicn_pt";
viewpoints[225] = HAnimSite1798;

let HAnimSite1799 = browser.currentScene.createNode("HAnimSite");
HAnimSite1799.USE = "hanim_l_humeral_medial_epicn_pt";
viewpoints[226] = HAnimSite1799;

let HAnimSite1800 = browser.currentScene.createNode("HAnimSite");
HAnimSite1800.USE = "hanim_r_humeral_medial_epicn_pt";
viewpoints[227] = HAnimSite1800;

let HAnimSite1801 = browser.currentScene.createNode("HAnimSite");
HAnimSite1801.USE = "hanim_r_iliocristale_pt";
viewpoints[228] = HAnimSite1801;

let HAnimSite1802 = browser.currentScene.createNode("HAnimSite");
HAnimSite1802.USE = "hanim_l_iliocristale_pt";
viewpoints[229] = HAnimSite1802;

let HAnimSite1803 = browser.currentScene.createNode("HAnimSite");
HAnimSite1803.USE = "hanim_l_index_distal_tip";
viewpoints[230] = HAnimSite1803;

let HAnimSite1804 = browser.currentScene.createNode("HAnimSite");
HAnimSite1804.USE = "hanim_r_index_distal_tip";
viewpoints[231] = HAnimSite1804;

let HAnimSite1805 = browser.currentScene.createNode("HAnimSite");
HAnimSite1805.USE = "hanim_r_infraorbitale_pt";
viewpoints[232] = HAnimSite1805;

let HAnimSite1806 = browser.currentScene.createNode("HAnimSite");
HAnimSite1806.USE = "hanim_l_infraorbitale_pt";
viewpoints[233] = HAnimSite1806;

let HAnimSite1807 = browser.currentScene.createNode("HAnimSite");
HAnimSite1807.USE = "hanim_l_knee_crease_pt";
viewpoints[234] = HAnimSite1807;

let HAnimSite1808 = browser.currentScene.createNode("HAnimSite");
HAnimSite1808.USE = "hanim_r_knee_crease_pt";
viewpoints[235] = HAnimSite1808;

let HAnimSite1809 = browser.currentScene.createNode("HAnimSite");
HAnimSite1809.USE = "hanim_l_lateral_malleolus_pt";
viewpoints[236] = HAnimSite1809;

let HAnimSite1810 = browser.currentScene.createNode("HAnimSite");
HAnimSite1810.USE = "hanim_r_lateral_malleolus_pt";
viewpoints[237] = HAnimSite1810;

let HAnimSite1811 = browser.currentScene.createNode("HAnimSite");
HAnimSite1811.USE = "hanim_l_medial_malleolus_pt";
viewpoints[238] = HAnimSite1811;

let HAnimSite1812 = browser.currentScene.createNode("HAnimSite");
HAnimSite1812.USE = "hanim_r_medial_malleolus_pt";
viewpoints[239] = HAnimSite1812;

let HAnimSite1813 = browser.currentScene.createNode("HAnimSite");
HAnimSite1813.USE = "hanim_l_metacarpal_pha2_pt";
viewpoints[240] = HAnimSite1813;

let HAnimSite1814 = browser.currentScene.createNode("HAnimSite");
HAnimSite1814.USE = "hanim_r_metacarpal_pha2_pt";
viewpoints[241] = HAnimSite1814;

let HAnimSite1815 = browser.currentScene.createNode("HAnimSite");
HAnimSite1815.USE = "hanim_l_metacarpal_pha5_pt";
viewpoints[242] = HAnimSite1815;

let HAnimSite1816 = browser.currentScene.createNode("HAnimSite");
HAnimSite1816.USE = "hanim_r_metacarpal_pha5_pt";
viewpoints[243] = HAnimSite1816;

let HAnimSite1817 = browser.currentScene.createNode("HAnimSite");
HAnimSite1817.USE = "hanim_l_metatarsal_pha1_pt";
viewpoints[244] = HAnimSite1817;

let HAnimSite1818 = browser.currentScene.createNode("HAnimSite");
HAnimSite1818.USE = "hanim_r_metatarsal_pha1_pt";
viewpoints[245] = HAnimSite1818;

let HAnimSite1819 = browser.currentScene.createNode("HAnimSite");
HAnimSite1819.USE = "hanim_l_metatarsal_pha5_pt";
viewpoints[246] = HAnimSite1819;

let HAnimSite1820 = browser.currentScene.createNode("HAnimSite");
HAnimSite1820.USE = "hanim_r_metatarsal_pha5_pt";
viewpoints[247] = HAnimSite1820;

let HAnimSite1821 = browser.currentScene.createNode("HAnimSite");
HAnimSite1821.USE = "hanim_l_middle_distal_tip";
viewpoints[248] = HAnimSite1821;

let HAnimSite1822 = browser.currentScene.createNode("HAnimSite");
HAnimSite1822.USE = "hanim_r_middle_distal_tip";
viewpoints[249] = HAnimSite1822;

let HAnimSite1823 = browser.currentScene.createNode("HAnimSite");
HAnimSite1823.USE = "hanim_r_neck_base_pt";
viewpoints[250] = HAnimSite1823;

let HAnimSite1824 = browser.currentScene.createNode("HAnimSite");
HAnimSite1824.USE = "hanim_l_neck_base_pt";
viewpoints[251] = HAnimSite1824;

let HAnimSite1825 = browser.currentScene.createNode("HAnimSite");
HAnimSite1825.USE = "hanim_l_olecranon_pt";
viewpoints[252] = HAnimSite1825;

let HAnimSite1826 = browser.currentScene.createNode("HAnimSite");
HAnimSite1826.USE = "hanim_r_olecranon_pt";
viewpoints[253] = HAnimSite1826;

let HAnimSite1827 = browser.currentScene.createNode("HAnimSite");
HAnimSite1827.USE = "hanim_l_pinky_distal_tip";
viewpoints[254] = HAnimSite1827;

let HAnimSite1828 = browser.currentScene.createNode("HAnimSite");
HAnimSite1828.USE = "hanim_r_pinky_distal_tip";
viewpoints[255] = HAnimSite1828;

let HAnimSite1829 = browser.currentScene.createNode("HAnimSite");
HAnimSite1829.USE = "hanim_r_psis_pt";
viewpoints[256] = HAnimSite1829;

let HAnimSite1830 = browser.currentScene.createNode("HAnimSite");
HAnimSite1830.USE = "hanim_l_psis_pt";
viewpoints[257] = HAnimSite1830;

let HAnimSite1831 = browser.currentScene.createNode("HAnimSite");
HAnimSite1831.USE = "hanim_l_radial_styloid_pt";
viewpoints[258] = HAnimSite1831;

let HAnimSite1832 = browser.currentScene.createNode("HAnimSite");
HAnimSite1832.USE = "hanim_r_radial_styloid_pt";
viewpoints[259] = HAnimSite1832;

let HAnimSite1833 = browser.currentScene.createNode("HAnimSite");
HAnimSite1833.USE = "hanim_l_radiale_pt";
viewpoints[260] = HAnimSite1833;

let HAnimSite1834 = browser.currentScene.createNode("HAnimSite");
HAnimSite1834.USE = "hanim_r_radiale_pt";
viewpoints[261] = HAnimSite1834;

let HAnimSite1835 = browser.currentScene.createNode("HAnimSite");
HAnimSite1835.USE = "hanim_r_rib10_pt";
viewpoints[262] = HAnimSite1835;

let HAnimSite1836 = browser.currentScene.createNode("HAnimSite");
HAnimSite1836.USE = "hanim_l_rib10_pt";
viewpoints[263] = HAnimSite1836;

let HAnimSite1837 = browser.currentScene.createNode("HAnimSite");
HAnimSite1837.USE = "hanim_l_ring_distal_tip";
viewpoints[264] = HAnimSite1837;

let HAnimSite1838 = browser.currentScene.createNode("HAnimSite");
HAnimSite1838.USE = "hanim_r_ring_distal_tip";
viewpoints[265] = HAnimSite1838;

let HAnimSite1839 = browser.currentScene.createNode("HAnimSite");
HAnimSite1839.USE = "hanim_temporomandibular_l_site_pt";
viewpoints[266] = HAnimSite1839;

let HAnimSite1840 = browser.currentScene.createNode("HAnimSite");
HAnimSite1840.USE = "hanim_temporomandibular_r_site_pt";
viewpoints[267] = HAnimSite1840;

let HAnimSite1841 = browser.currentScene.createNode("HAnimSite");
HAnimSite1841.USE = "hanim_l_sphyrion_pt";
viewpoints[268] = HAnimSite1841;

let HAnimSite1842 = browser.currentScene.createNode("HAnimSite");
HAnimSite1842.USE = "hanim_r_sphyrion_pt";
viewpoints[269] = HAnimSite1842;

let HAnimSite1843 = browser.currentScene.createNode("HAnimSite");
HAnimSite1843.USE = "hanim_r_thelion_pt";
viewpoints[270] = HAnimSite1843;

let HAnimSite1844 = browser.currentScene.createNode("HAnimSite");
HAnimSite1844.USE = "hanim_l_thelion_pt";
viewpoints[271] = HAnimSite1844;

let HAnimSite1845 = browser.currentScene.createNode("HAnimSite");
HAnimSite1845.USE = "hanim_l_thumb_distal_tip";
viewpoints[272] = HAnimSite1845;

let HAnimSite1846 = browser.currentScene.createNode("HAnimSite");
HAnimSite1846.USE = "hanim_r_thumb_distal_tip";
viewpoints[273] = HAnimSite1846;

let HAnimSite1847 = browser.currentScene.createNode("HAnimSite");
HAnimSite1847.USE = "hanim_r_tragion_pt";
viewpoints[274] = HAnimSite1847;

let HAnimSite1848 = browser.currentScene.createNode("HAnimSite");
HAnimSite1848.USE = "hanim_l_tragion_pt";
viewpoints[275] = HAnimSite1848;

let HAnimSite1849 = browser.currentScene.createNode("HAnimSite");
HAnimSite1849.USE = "hanim_r_trochanterion_pt";
viewpoints[276] = HAnimSite1849;

let HAnimSite1850 = browser.currentScene.createNode("HAnimSite");
HAnimSite1850.USE = "hanim_l_trochanterion_pt";
viewpoints[277] = HAnimSite1850;

let HAnimSite1851 = browser.currentScene.createNode("HAnimSite");
HAnimSite1851.USE = "hanim_l_ulnar_styloid_pt";
viewpoints[278] = HAnimSite1851;

let HAnimSite1852 = browser.currentScene.createNode("HAnimSite");
HAnimSite1852.USE = "hanim_r_ulnar_styloid_pt";
viewpoints[279] = HAnimSite1852;

let HAnimSite1853 = browser.currentScene.createNode("HAnimSite");
HAnimSite1853.DEF = "hanim_l_inclined_view";
HAnimSite1853.name = "l_inclined_view";
HAnimSite1853.translation = new X3D.SFVec3f([1.62,1.05,2.06]);
HAnimSite1853.rotation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
let Viewpoint1854 = browser.currentScene.createNode("Viewpoint");
Viewpoint1854.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1854.description = "left inclined";
Viewpoint1854.position = new X3D.SFVec3f([0,0,0]);
HAnimSite1853YYY.children = new X3D.MFNode();

HAnimSite1853ZZZ.children[0] = Viewpoint1854;

let Anchor1855 = browser.currentScene.createNode("Anchor");
Anchor1855.description = "HAnimSite Viewpoint hanim_l_inclined_view";
Anchor1855.url = new X3D.MFString([new X3D.SFString("#hanim_l_inclined_viewpoint")]);
let LOD1856 = browser.currentScene.createNode("LOD");
LOD1856.forceTransitions = True;
LOD1856.range = new X3D.MFFloat([0.04]);
let WorldInfo1857 = browser.currentScene.createNode("WorldInfo");
WorldInfo1857.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1856YYY.children = new X3D.MFNode();

LOD1856ZZZ.children[0] = WorldInfo1857;

let Shape1858 = browser.currentScene.createNode("Shape");
Shape1858.USE = "HAnimSiteViewpointShape";
LOD1856ZZZ.children[1] = Shape1858;

Anchor1855YYY.children = new X3D.MFNode();

Anchor1855ZZZ.children[0] = LOD1856;

HAnimSite1853ZZZ.children[1] = Anchor1855;

viewpoints[280] = HAnimSite1853;

let HAnimSite1859 = browser.currentScene.createNode("HAnimSite");
HAnimSite1859.DEF = "hanim_r_inclined_view";
HAnimSite1859.name = "r_inclined_view";
HAnimSite1859.translation = new X3D.SFVec3f([-1.62,1.05,2.06]);
HAnimSite1859.rotation = new X3D.SFRotation([-0.113,-0.993,0.0347,0.671]);
let Viewpoint1860 = browser.currentScene.createNode("Viewpoint");
Viewpoint1860.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1860.description = "right inclined";
Viewpoint1860.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1860.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1859YYY.children = new X3D.MFNode();

HAnimSite1859ZZZ.children[0] = Viewpoint1860;

let Anchor1861 = browser.currentScene.createNode("Anchor");
Anchor1861.description = "HAnimSite Viewpoint hanim_r_inclined_view";
Anchor1861.url = new X3D.MFString([new X3D.SFString("#hanim_r_inclined_viewpoint")]);
let LOD1862 = browser.currentScene.createNode("LOD");
LOD1862.forceTransitions = True;
LOD1862.range = new X3D.MFFloat([0.04]);
let WorldInfo1863 = browser.currentScene.createNode("WorldInfo");
WorldInfo1863.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1862YYY.children = new X3D.MFNode();

LOD1862ZZZ.children[0] = WorldInfo1863;

let Shape1864 = browser.currentScene.createNode("Shape");
Shape1864.USE = "HAnimSiteViewpointShape";
LOD1862ZZZ.children[1] = Shape1864;

Anchor1861YYY.children = new X3D.MFNode();

Anchor1861ZZZ.children[0] = LOD1862;

HAnimSite1859ZZZ.children[1] = Anchor1861;

viewpoints[281] = HAnimSite1859;

let HAnimSite1865 = browser.currentScene.createNode("HAnimSite");
HAnimSite1865.DEF = "hanim_front_view";
HAnimSite1865.name = "front_view";
HAnimSite1865.translation = new X3D.SFVec3f([0,0.85,2.58]);
let Viewpoint1866 = browser.currentScene.createNode("Viewpoint");
Viewpoint1866.DEF = "hanim_front_viewpoint";
Viewpoint1866.description = "front";
Viewpoint1866.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1866.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1865YYY.children = new X3D.MFNode();

HAnimSite1865ZZZ.children[0] = Viewpoint1866;

let Anchor1867 = browser.currentScene.createNode("Anchor");
Anchor1867.description = "HAnimSite Viewpoint hanim_front_view";
Anchor1867.url = new X3D.MFString([new X3D.SFString("#hanim_front_viewpoint")]);
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

HAnimSite1865ZZZ.children[1] = Anchor1867;

viewpoints[282] = HAnimSite1865;

let HAnimSite1871 = browser.currentScene.createNode("HAnimSite");
HAnimSite1871.DEF = "hanim_back_view";
HAnimSite1871.name = "back_view";
HAnimSite1871.translation = new X3D.SFVec3f([0,0.85,-2.58]);
HAnimSite1871.rotation = new X3D.SFRotation([0,1,0,3.14]);
let Viewpoint1872 = browser.currentScene.createNode("Viewpoint");
Viewpoint1872.DEF = "hanim_back_viewpoint";
Viewpoint1872.description = "back";
Viewpoint1872.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1872.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1871YYY.children = new X3D.MFNode();

HAnimSite1871ZZZ.children[0] = Viewpoint1872;

let Anchor1873 = browser.currentScene.createNode("Anchor");
Anchor1873.description = "HAnimSite Viewpoint hanim_back_view";
Anchor1873.url = new X3D.MFString([new X3D.SFString("#hanim_back_viewpoint")]);
let LOD1874 = browser.currentScene.createNode("LOD");
LOD1874.forceTransitions = True;
LOD1874.range = new X3D.MFFloat([0.04]);
let WorldInfo1875 = browser.currentScene.createNode("WorldInfo");
WorldInfo1875.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1874YYY.children = new X3D.MFNode();

LOD1874ZZZ.children[0] = WorldInfo1875;

let Shape1876 = browser.currentScene.createNode("Shape");
Shape1876.USE = "HAnimSiteViewpointShape";
LOD1874ZZZ.children[1] = Shape1876;

Anchor1873YYY.children = new X3D.MFNode();

Anchor1873ZZZ.children[0] = LOD1874;

HAnimSite1871ZZZ.children[1] = Anchor1873;

viewpoints[283] = HAnimSite1871;

let HAnimSite1877 = browser.currentScene.createNode("HAnimSite");
HAnimSite1877.DEF = "hanim_l_side_view";
HAnimSite1877.name = "l_side_view";
HAnimSite1877.translation = new X3D.SFVec3f([2.6,0.854,0]);
HAnimSite1877.rotation = new X3D.SFRotation([0,1,0,1.5708]);
let Viewpoint1878 = browser.currentScene.createNode("Viewpoint");
Viewpoint1878.DEF = "hanim_l_side_viewpoint";
Viewpoint1878.description = "left side";
Viewpoint1878.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1878.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1877YYY.children = new X3D.MFNode();

HAnimSite1877ZZZ.children[0] = Viewpoint1878;

let Anchor1879 = browser.currentScene.createNode("Anchor");
Anchor1879.description = "HAnimSite Viewpoint hanim_l_side_view";
Anchor1879.url = new X3D.MFString([new X3D.SFString("#hanim_l_side_viewpoint")]);
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

HAnimSite1877ZZZ.children[1] = Anchor1879;

viewpoints[284] = HAnimSite1877;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.DEF = "hanim_Top_view";
HAnimSite1883.name = "Top_view";
HAnimSite1883.translation = new X3D.SFVec3f([0,3.5,0]);
HAnimSite1883.rotation = new X3D.SFRotation([1,0,0,-1.57]);
let Viewpoint1884 = browser.currentScene.createNode("Viewpoint");
Viewpoint1884.DEF = "hanim_Top_viewpoint";
Viewpoint1884.description = "Top";
Viewpoint1884.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1884.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite1883YYY.children = new X3D.MFNode();

HAnimSite1883ZZZ.children[0] = Viewpoint1884;

let Anchor1885 = browser.currentScene.createNode("Anchor");
Anchor1885.description = "HAnimSite Viewpoint hanim_Top_view";
Anchor1885.url = new X3D.MFString([new X3D.SFString("#hanim_Top_viewpoint")]);
let LOD1886 = browser.currentScene.createNode("LOD");
LOD1886.forceTransitions = True;
LOD1886.range = new X3D.MFFloat([0.04]);
let WorldInfo1887 = browser.currentScene.createNode("WorldInfo");
WorldInfo1887.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1886YYY.children = new X3D.MFNode();

LOD1886ZZZ.children[0] = WorldInfo1887;

let Shape1888 = browser.currentScene.createNode("Shape");
Shape1888.USE = "HAnimSiteViewpointShape";
LOD1886ZZZ.children[1] = Shape1888;

Anchor1885YYY.children = new X3D.MFNode();

Anchor1885ZZZ.children[0] = LOD1886;

HAnimSite1883ZZZ.children[1] = Anchor1885;

viewpoints[285] = HAnimSite1883;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.DEF = "hanim_front_close_view";
HAnimSite1889.name = "front_close_view";
HAnimSite1889.translation = new X3D.SFVec3f([0,0.854,1.575]);
let Viewpoint1890 = browser.currentScene.createNode("Viewpoint");
Viewpoint1890.DEF = "hanim_front_close_viewpoint";
Viewpoint1890.description = "front close";
Viewpoint1890.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1890.centerOfRotation = new X3D.SFVec3f([0,0,1.575]);
HAnimSite1889YYY.children = new X3D.MFNode();

HAnimSite1889ZZZ.children[0] = Viewpoint1890;

let Anchor1891 = browser.currentScene.createNode("Anchor");
Anchor1891.description = "HAnimSite Viewpoint hanim_front_close_view";
Anchor1891.url = new X3D.MFString([new X3D.SFString("#hanim_front_close_viewpoint")]);
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

HAnimSite1889ZZZ.children[1] = Anchor1891;

viewpoints[286] = HAnimSite1889;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.DEF = "hanim_side_close_view";
HAnimSite1895.name = "side_close_view";
HAnimSite1895.translation = new X3D.SFVec3f([1.56,0.854,0]);
HAnimSite1895.rotation = new X3D.SFRotation([0,1,0,1.5708]);
let Viewpoint1896 = browser.currentScene.createNode("Viewpoint");
Viewpoint1896.DEF = "hanim_side_close_viewpoint";
Viewpoint1896.description = "side close";
Viewpoint1896.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1896.centerOfRotation = new X3D.SFVec3f([1.6,0,0]);
HAnimSite1895YYY.children = new X3D.MFNode();

HAnimSite1895ZZZ.children[0] = Viewpoint1896;

let Anchor1897 = browser.currentScene.createNode("Anchor");
Anchor1897.description = "HAnimSite Viewpoint hanim_side_close_view";
Anchor1897.url = new X3D.MFString([new X3D.SFString("#hanim_side_close_viewpoint")]);
let LOD1898 = browser.currentScene.createNode("LOD");
LOD1898.forceTransitions = True;
LOD1898.range = new X3D.MFFloat([0.04]);
let WorldInfo1899 = browser.currentScene.createNode("WorldInfo");
WorldInfo1899.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1898YYY.children = new X3D.MFNode();

LOD1898ZZZ.children[0] = WorldInfo1899;

let Shape1900 = browser.currentScene.createNode("Shape");
Shape1900.USE = "HAnimSiteViewpointShape";
LOD1898ZZZ.children[1] = Shape1900;

Anchor1897YYY.children = new X3D.MFNode();

Anchor1897ZZZ.children[0] = LOD1898;

HAnimSite1895ZZZ.children[1] = Anchor1897;

viewpoints[287] = HAnimSite1895;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.DEF = "hanim_head_front_close_view";
HAnimSite1901.name = "head_front_close_view";
HAnimSite1901.translation = new X3D.SFVec3f([0,1.5,1]);
let Viewpoint1902 = browser.currentScene.createNode("Viewpoint");
Viewpoint1902.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1902.description = "head front close";
Viewpoint1902.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1902.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite1901YYY.children = new X3D.MFNode();

HAnimSite1901ZZZ.children[0] = Viewpoint1902;

let Anchor1903 = browser.currentScene.createNode("Anchor");
Anchor1903.description = "HAnimSite Viewpoint hanim_head_front_close_view";
Anchor1903.url = new X3D.MFString([new X3D.SFString("#hanim_head_front_close_viewpoint")]);
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

HAnimSite1901ZZZ.children[1] = Anchor1903;

viewpoints[288] = HAnimSite1901;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.DEF = "hanim_chest_front_close_view";
HAnimSite1907.name = "chest_front_close_view";
HAnimSite1907.translation = new X3D.SFVec3f([0,1.2,1]);
let Viewpoint1908 = browser.currentScene.createNode("Viewpoint");
Viewpoint1908.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1908.description = "chest front close";
Viewpoint1908.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1908.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite1907YYY.children = new X3D.MFNode();

HAnimSite1907ZZZ.children[0] = Viewpoint1908;

let Anchor1909 = browser.currentScene.createNode("Anchor");
Anchor1909.description = "HAnimSite Viewpoint hanim_chest_front_close_view";
Anchor1909.url = new X3D.MFString([new X3D.SFString("#hanim_chest_front_close_viewpoint")]);
let LOD1910 = browser.currentScene.createNode("LOD");
LOD1910.forceTransitions = True;
LOD1910.range = new X3D.MFFloat([0.04]);
let WorldInfo1911 = browser.currentScene.createNode("WorldInfo");
WorldInfo1911.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1910YYY.children = new X3D.MFNode();

LOD1910ZZZ.children[0] = WorldInfo1911;

let Shape1912 = browser.currentScene.createNode("Shape");
Shape1912.USE = "HAnimSiteViewpointShape";
LOD1910ZZZ.children[1] = Shape1912;

Anchor1909YYY.children = new X3D.MFNode();

Anchor1909ZZZ.children[0] = LOD1910;

HAnimSite1907ZZZ.children[1] = Anchor1909;

viewpoints[289] = HAnimSite1907;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.DEF = "hanim_pelvis_front_close_view";
HAnimSite1913.name = "pelvis_front_close_view";
HAnimSite1913.translation = new X3D.SFVec3f([0,0.8,1]);
let Viewpoint1914 = browser.currentScene.createNode("Viewpoint");
Viewpoint1914.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1914.description = "pelvis front close";
Viewpoint1914.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1914.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite1913YYY.children = new X3D.MFNode();

HAnimSite1913ZZZ.children[0] = Viewpoint1914;

let Anchor1915 = browser.currentScene.createNode("Anchor");
Anchor1915.description = "HAnimSite Viewpoint hanim_pelvis_front_close_view";
Anchor1915.url = new X3D.MFString([new X3D.SFString("#hanim_pelvis_front_close_viewpoint")]);
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

HAnimSite1913ZZZ.children[1] = Anchor1915;

viewpoints[290] = HAnimSite1913;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.DEF = "hanim_knees_front_close_view";
HAnimSite1919.name = "knees_front_close_view";
HAnimSite1919.translation = new X3D.SFVec3f([0,0.4,1]);
let Viewpoint1920 = browser.currentScene.createNode("Viewpoint");
Viewpoint1920.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1920.description = "knees front close";
Viewpoint1920.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1920.centerOfRotation = new X3D.SFVec3f([0,0.4,0]);
HAnimSite1919YYY.children = new X3D.MFNode();

HAnimSite1919ZZZ.children[0] = Viewpoint1920;

let Anchor1921 = browser.currentScene.createNode("Anchor");
Anchor1921.description = "HAnimSite Viewpoint hanim_knees_front_close_view";
Anchor1921.url = new X3D.MFString([new X3D.SFString("#hanim_knees_front_close_viewpoint")]);
let LOD1922 = browser.currentScene.createNode("LOD");
LOD1922.forceTransitions = True;
LOD1922.range = new X3D.MFFloat([0.04]);
let WorldInfo1923 = browser.currentScene.createNode("WorldInfo");
WorldInfo1923.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1922YYY.children = new X3D.MFNode();

LOD1922ZZZ.children[0] = WorldInfo1923;

let Shape1924 = browser.currentScene.createNode("Shape");
Shape1924.USE = "HAnimSiteViewpointShape";
LOD1922ZZZ.children[1] = Shape1924;

Anchor1921YYY.children = new X3D.MFNode();

Anchor1921ZZZ.children[0] = LOD1922;

HAnimSite1919ZZZ.children[1] = Anchor1921;

viewpoints[291] = HAnimSite1919;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.DEF = "hanim_feet_front_close_view";
HAnimSite1925.name = "feet_front_close_view";
HAnimSite1925.translation = new X3D.SFVec3f([0,0,1]);
let Viewpoint1926 = browser.currentScene.createNode("Viewpoint");
Viewpoint1926.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1926.description = "feet front close";
Viewpoint1926.position = new X3D.SFVec3f([0,0,0]);
HAnimSite1925YYY.children = new X3D.MFNode();

HAnimSite1925ZZZ.children[0] = Viewpoint1926;

let Anchor1927 = browser.currentScene.createNode("Anchor");
Anchor1927.description = "HAnimSite Viewpoint hanim_feet_front_close_view";
Anchor1927.url = new X3D.MFString([new X3D.SFString("#hanim_feet_front_close_viewpoint")]);
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

HAnimSite1925ZZZ.children[1] = Anchor1927;

viewpoints[292] = HAnimSite1925;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.DEF = "hanim_eye_level_view";
HAnimSite1931.name = "eye_level_view";
HAnimSite1931.translation = new X3D.SFVec3f([0,1.6332,0.0502]);
let Viewpoint1932 = browser.currentScene.createNode("Viewpoint");
Viewpoint1932.DEF = "hanim_eye_level_viewpoint";
Viewpoint1932.description = "eye level looking forward";
Viewpoint1932.position = new X3D.SFVec3f([0,0,0]);
Viewpoint1932.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite1931YYY.children = new X3D.MFNode();

HAnimSite1931ZZZ.children[0] = Viewpoint1932;

let Anchor1933 = browser.currentScene.createNode("Anchor");
Anchor1933.description = "HAnimSite Viewpoint hanim_eye_level_view";
Anchor1933.url = new X3D.MFString([new X3D.SFString("#hanim_eye_level_viewpoint")]);
let LOD1934 = browser.currentScene.createNode("LOD");
LOD1934.forceTransitions = True;
LOD1934.range = new X3D.MFFloat([0.04]);
let WorldInfo1935 = browser.currentScene.createNode("WorldInfo");
WorldInfo1935.info = new X3D.MFString([new X3D.SFString("hide diamond when close")]);
LOD1934YYY.children = new X3D.MFNode();

LOD1934ZZZ.children[0] = WorldInfo1935;

let Shape1936 = browser.currentScene.createNode("Shape");
Shape1936.USE = "HAnimSiteViewpointShape";
LOD1934ZZZ.children[1] = Shape1936;

Anchor1933YYY.children = new X3D.MFNode();

Anchor1933ZZZ.children[0] = LOD1934;

HAnimSite1931ZZZ.children[1] = Anchor1933;

viewpoints[293] = HAnimSite1931;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_eyeball_site_view";
viewpoints[294] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_eyeball_site_view";
viewpoints[295] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_hand_front_view";
viewpoints[296] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_r_hand_front_view";
viewpoints[297] = HAnimSite1940;

browser.currentScene.children[12] = HAnimHumanoid43;

let Group1941 = browser.currentScene.createNode("Group");
Group1941.DEF = "StopAnimation";
let TimeSensor1942 = browser.currentScene.createNode("TimeSensor");
TimeSensor1942.DEF = "StopTimer";
TimeSensor1942.cycleInterval = 5.73;
TimeSensor1942.loop = True;
Group1941YYY.children = new X3D.MFNode();

Group1941ZZZ.children[0] = TimeSensor1942;

let PositionInterpolator1943 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1943.DEF = "Stop_HumanoidRoot_TranslationInterpolator";
PositionInterpolator1943.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator1943.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group1941ZZZ.children[1] = PositionInterpolator1943;

let OrientationInterpolator1944 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1944.DEF = "Stop_HumanoidRoot_RotationInterpolator";
OrientationInterpolator1944.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1944.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[2] = OrientationInterpolator1944;

let OrientationInterpolator1945 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1945.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator1945.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1945.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[3] = OrientationInterpolator1945;

let OrientationInterpolator1946 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1946.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator1946.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1946.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[4] = OrientationInterpolator1946;

let OrientationInterpolator1947 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1947.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator1947.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1947.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[5] = OrientationInterpolator1947;

let OrientationInterpolator1948 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1948.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator1948.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1948.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[6] = OrientationInterpolator1948;

let OrientationInterpolator1949 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1949.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator1949.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1949.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[7] = OrientationInterpolator1949;

let OrientationInterpolator1950 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1950.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator1950.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1950.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[8] = OrientationInterpolator1950;

let OrientationInterpolator1951 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1951.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator1951.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1951.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[9] = OrientationInterpolator1951;

let OrientationInterpolator1952 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1952.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator1952.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1952.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[10] = OrientationInterpolator1952;

let OrientationInterpolator1953 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1953.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator1953.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1953.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[11] = OrientationInterpolator1953;

let OrientationInterpolator1954 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1954.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator1954.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1954.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[12] = OrientationInterpolator1954;

let OrientationInterpolator1955 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1955.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator1955.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1955.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[13] = OrientationInterpolator1955;

let OrientationInterpolator1956 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1956.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator1956.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1956.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[14] = OrientationInterpolator1956;

let OrientationInterpolator1957 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1957.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator1957.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1957.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[15] = OrientationInterpolator1957;

let OrientationInterpolator1958 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1958.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator1958.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1958.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[16] = OrientationInterpolator1958;

let OrientationInterpolator1959 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1959.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator1959.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1959.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[17] = OrientationInterpolator1959;

let OrientationInterpolator1960 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1960.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator1960.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1960.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[18] = OrientationInterpolator1960;

let OrientationInterpolator1961 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1961.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator1961.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1961.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[19] = OrientationInterpolator1961;

let OrientationInterpolator1962 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1962.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator1962.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1962.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[20] = OrientationInterpolator1962;

let OrientationInterpolator1963 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1963.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator1963.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1963.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[21] = OrientationInterpolator1963;

let OrientationInterpolator1964 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1964.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator1964.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1964.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[22] = OrientationInterpolator1964;

let OrientationInterpolator1965 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1965.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator1965.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1965.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[23] = OrientationInterpolator1965;

let OrientationInterpolator1966 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1966.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator1966.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1966.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[24] = OrientationInterpolator1966;

let OrientationInterpolator1967 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1967.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator1967.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1967.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[25] = OrientationInterpolator1967;

let OrientationInterpolator1968 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1968.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator1968.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1968.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[26] = OrientationInterpolator1968;

let OrientationInterpolator1969 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1969.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator1969.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1969.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[27] = OrientationInterpolator1969;

let OrientationInterpolator1970 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1970.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator1970.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1970.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[28] = OrientationInterpolator1970;

let OrientationInterpolator1971 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1971.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator1971.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1971.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[29] = OrientationInterpolator1971;

let OrientationInterpolator1972 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1972.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator1972.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1972.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[30] = OrientationInterpolator1972;

let OrientationInterpolator1973 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1973.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator1973.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1973.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[31] = OrientationInterpolator1973;

let OrientationInterpolator1974 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1974.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator1974.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1974.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[32] = OrientationInterpolator1974;

let OrientationInterpolator1975 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1975.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator1975.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1975.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[33] = OrientationInterpolator1975;

let OrientationInterpolator1976 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1976.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator1976.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1976.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[34] = OrientationInterpolator1976;

let OrientationInterpolator1977 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1977.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator1977.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1977.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[35] = OrientationInterpolator1977;

let OrientationInterpolator1978 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1978.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator1978.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1978.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[36] = OrientationInterpolator1978;

let OrientationInterpolator1979 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1979.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator1979.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1979.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[37] = OrientationInterpolator1979;

let OrientationInterpolator1980 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1980.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator1980.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1980.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[38] = OrientationInterpolator1980;

let OrientationInterpolator1981 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1981.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator1981.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1981.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[39] = OrientationInterpolator1981;

let OrientationInterpolator1982 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1982.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator1982.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1982.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[40] = OrientationInterpolator1982;

let OrientationInterpolator1983 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1983.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator1983.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1983.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[41] = OrientationInterpolator1983;

let OrientationInterpolator1984 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1984.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator1984.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1984.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[42] = OrientationInterpolator1984;

let OrientationInterpolator1985 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1985.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator1985.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1985.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[43] = OrientationInterpolator1985;

let OrientationInterpolator1986 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1986.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator1986.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1986.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[44] = OrientationInterpolator1986;

let OrientationInterpolator1987 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1987.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator1987.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1987.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[45] = OrientationInterpolator1987;

let OrientationInterpolator1988 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1988.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator1988.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1988.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[46] = OrientationInterpolator1988;

let OrientationInterpolator1989 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1989.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator1989.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1989.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[47] = OrientationInterpolator1989;

let OrientationInterpolator1990 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1990.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator1990.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1990.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[48] = OrientationInterpolator1990;

let OrientationInterpolator1991 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1991.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator1991.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1991.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[49] = OrientationInterpolator1991;

let OrientationInterpolator1992 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1992.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator1992.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1992.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[50] = OrientationInterpolator1992;

let OrientationInterpolator1993 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1993.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator1993.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1993.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[51] = OrientationInterpolator1993;

let OrientationInterpolator1994 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1994.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator1994.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1994.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[52] = OrientationInterpolator1994;

let OrientationInterpolator1995 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1995.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator1995.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1995.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[53] = OrientationInterpolator1995;

let OrientationInterpolator1996 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1996.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator1996.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1996.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[54] = OrientationInterpolator1996;

let OrientationInterpolator1997 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1997.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator1997.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1997.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[55] = OrientationInterpolator1997;

let OrientationInterpolator1998 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1998.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator1998.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1998.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[56] = OrientationInterpolator1998;

let OrientationInterpolator1999 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1999.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator1999.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator1999.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[57] = OrientationInterpolator1999;

let OrientationInterpolator2000 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2000.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator2000.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2000.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[58] = OrientationInterpolator2000;

let OrientationInterpolator2001 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2001.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator2001.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2001.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[59] = OrientationInterpolator2001;

let OrientationInterpolator2002 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2002.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator2002.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2002.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[60] = OrientationInterpolator2002;

let OrientationInterpolator2003 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2003.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator2003.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2003.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[61] = OrientationInterpolator2003;

let OrientationInterpolator2004 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2004.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator2004.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2004.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[62] = OrientationInterpolator2004;

let OrientationInterpolator2005 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2005.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator2005.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2005.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[63] = OrientationInterpolator2005;

let OrientationInterpolator2006 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2006.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator2006.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2006.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[64] = OrientationInterpolator2006;

let OrientationInterpolator2007 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2007.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator2007.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2007.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[65] = OrientationInterpolator2007;

let OrientationInterpolator2008 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2008.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator2008.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2008.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[66] = OrientationInterpolator2008;

let OrientationInterpolator2009 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2009.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator2009.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2009.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[67] = OrientationInterpolator2009;

let OrientationInterpolator2010 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2010.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator2010.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2010.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[68] = OrientationInterpolator2010;

let OrientationInterpolator2011 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2011.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator2011.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2011.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[69] = OrientationInterpolator2011;

let OrientationInterpolator2012 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2012.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator2012.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2012.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[70] = OrientationInterpolator2012;

let OrientationInterpolator2013 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2013.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator2013.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2013.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[71] = OrientationInterpolator2013;

let OrientationInterpolator2014 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2014.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator2014.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2014.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[72] = OrientationInterpolator2014;

let OrientationInterpolator2015 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2015.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator2015.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2015.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[73] = OrientationInterpolator2015;

let OrientationInterpolator2016 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2016.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator2016.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2016.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[74] = OrientationInterpolator2016;

let OrientationInterpolator2017 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2017.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator2017.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2017.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[75] = OrientationInterpolator2017;

let OrientationInterpolator2018 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2018.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator2018.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2018.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[76] = OrientationInterpolator2018;

let OrientationInterpolator2019 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2019.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator2019.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2019.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[77] = OrientationInterpolator2019;

let OrientationInterpolator2020 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2020.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator2020.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2020.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[78] = OrientationInterpolator2020;

let OrientationInterpolator2021 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2021.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator2021.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2021.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[79] = OrientationInterpolator2021;

let OrientationInterpolator2022 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2022.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator2022.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2022.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[80] = OrientationInterpolator2022;

let OrientationInterpolator2023 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2023.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator2023.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2023.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[81] = OrientationInterpolator2023;

let OrientationInterpolator2024 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2024.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator2024.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2024.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[82] = OrientationInterpolator2024;

let OrientationInterpolator2025 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2025.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator2025.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2025.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[83] = OrientationInterpolator2025;

let OrientationInterpolator2026 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2026.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator2026.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2026.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[84] = OrientationInterpolator2026;

let OrientationInterpolator2027 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2027.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator2027.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2027.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[85] = OrientationInterpolator2027;

let OrientationInterpolator2028 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2028.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator2028.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2028.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[86] = OrientationInterpolator2028;

let OrientationInterpolator2029 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2029.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator2029.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2029.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[87] = OrientationInterpolator2029;

let OrientationInterpolator2030 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2030.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator2030.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2030.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[88] = OrientationInterpolator2030;

let OrientationInterpolator2031 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2031.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator2031.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2031.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[89] = OrientationInterpolator2031;

let OrientationInterpolator2032 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2032.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator2032.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2032.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941ZZZ.children[90] = OrientationInterpolator2032;

browser.currentScene.children[13] = Group1941;

let Group2033 = browser.currentScene.createNode("Group");
Group2033.DEF = "StandAnimation";
let TimeSensor2034 = browser.currentScene.createNode("TimeSensor");
TimeSensor2034.DEF = "StandTimer";
TimeSensor2034.cycleInterval = 5.73;
TimeSensor2034.loop = True;
Group2033YYY.children = new X3D.MFNode();

Group2033ZZZ.children[0] = TimeSensor2034;

let OrientationInterpolator2035 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2035.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator2035.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2035.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group2033ZZZ.children[1] = OrientationInterpolator2035;

let OrientationInterpolator2036 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2036.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator2036.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2036.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[2] = OrientationInterpolator2036;

let OrientationInterpolator2037 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2037.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator2037.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2037.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[3] = OrientationInterpolator2037;

let OrientationInterpolator2038 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2038.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator2038.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2038.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[4] = OrientationInterpolator2038;

let OrientationInterpolator2039 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2039.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator2039.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2039.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[5] = OrientationInterpolator2039;

let OrientationInterpolator2040 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2040.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator2040.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2040.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[6] = OrientationInterpolator2040;

let OrientationInterpolator2041 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2041.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator2041.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2041.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[7] = OrientationInterpolator2041;

let OrientationInterpolator2042 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2042.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator2042.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2042.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group2033ZZZ.children[8] = OrientationInterpolator2042;

let OrientationInterpolator2043 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2043.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator2043.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2043.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[9] = OrientationInterpolator2043;

let OrientationInterpolator2044 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2044.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator2044.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2044.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[10] = OrientationInterpolator2044;

let OrientationInterpolator2045 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2045.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator2045.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2045.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[11] = OrientationInterpolator2045;

let OrientationInterpolator2046 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2046.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator2046.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2046.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[12] = OrientationInterpolator2046;

let OrientationInterpolator2047 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2047.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator2047.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2047.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[13] = OrientationInterpolator2047;

let OrientationInterpolator2048 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2048.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator2048.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2048.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[14] = OrientationInterpolator2048;

let OrientationInterpolator2049 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2049.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator2049.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2049.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group2033ZZZ.children[15] = OrientationInterpolator2049;

let OrientationInterpolator2050 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2050.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator2050.key = new X3D.MFFloat([0,0.4,0.7,1]);
OrientationInterpolator2050.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2033ZZZ.children[16] = OrientationInterpolator2050;

let OrientationInterpolator2051 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2051.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator2051.key = new X3D.MFFloat([0,0.4,0.7,1]);
OrientationInterpolator2051.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2033ZZZ.children[17] = OrientationInterpolator2051;

let OrientationInterpolator2052 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2052.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator2052.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2052.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[18] = OrientationInterpolator2052;

let OrientationInterpolator2053 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2053.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator2053.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2053.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[19] = OrientationInterpolator2053;

let OrientationInterpolator2054 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2054.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator2054.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2054.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[20] = OrientationInterpolator2054;

let PositionInterpolator2055 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2055.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator2055.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator2055.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group2033ZZZ.children[21] = PositionInterpolator2055;

let OrientationInterpolator2056 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2056.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2056.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2056.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[22] = OrientationInterpolator2056;

let OrientationInterpolator2057 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2057.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2057.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2057.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[23] = OrientationInterpolator2057;

let OrientationInterpolator2058 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2058.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2058.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2058.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[24] = OrientationInterpolator2058;

let OrientationInterpolator2059 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2059.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2059.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2059.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[25] = OrientationInterpolator2059;

let OrientationInterpolator2060 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2060.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator2060.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2060.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[26] = OrientationInterpolator2060;

let OrientationInterpolator2061 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2061.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator2061.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2061.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[27] = OrientationInterpolator2061;

let OrientationInterpolator2062 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2062.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator2062.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2062.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group2033ZZZ.children[28] = OrientationInterpolator2062;

let OrientationInterpolator2063 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2063.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator2063.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2063.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[29] = OrientationInterpolator2063;

let OrientationInterpolator2064 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2064.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator2064.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2064.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2033ZZZ.children[30] = OrientationInterpolator2064;

let OrientationInterpolator2065 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2065.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator2065.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2065.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group2033ZZZ.children[31] = OrientationInterpolator2065;

let OrientationInterpolator2066 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2066.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator2066.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2066.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group2033ZZZ.children[32] = OrientationInterpolator2066;

let OrientationInterpolator2067 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2067.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator2067.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2067.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group2033ZZZ.children[33] = OrientationInterpolator2067;

browser.currentScene.children[14] = Group2033;

let Group2068 = browser.currentScene.createNode("Group");
Group2068.DEF = "PitchesAnimation";
let TimeSensor2069 = browser.currentScene.createNode("TimeSensor");
TimeSensor2069.DEF = "PitchTimer";
TimeSensor2069.cycleInterval = 5.73;
TimeSensor2069.loop = True;
Group2068YYY.children = new X3D.MFNode();

Group2068ZZZ.children[0] = TimeSensor2069;

let OrientationInterpolator2070 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2070.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator2070.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2070.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2068ZZZ.children[1] = OrientationInterpolator2070;

let OrientationInterpolator2071 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2071.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator2071.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2071.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2068ZZZ.children[2] = OrientationInterpolator2071;

let OrientationInterpolator2072 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2072.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator2072.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2072.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[3] = OrientationInterpolator2072;

let OrientationInterpolator2073 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2073.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator2073.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2073.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2068ZZZ.children[4] = OrientationInterpolator2073;

let OrientationInterpolator2074 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2074.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator2074.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2074.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2068ZZZ.children[5] = OrientationInterpolator2074;

let OrientationInterpolator2075 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2075.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator2075.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2075.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[6] = OrientationInterpolator2075;

let OrientationInterpolator2076 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2076.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator2076.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2076.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2068ZZZ.children[7] = OrientationInterpolator2076;

let OrientationInterpolator2077 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2077.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator2077.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2077.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[8] = OrientationInterpolator2077;

let OrientationInterpolator2078 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2078.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator2078.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2078.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[9] = OrientationInterpolator2078;

let OrientationInterpolator2079 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2079.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator2079.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2079.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2068ZZZ.children[10] = OrientationInterpolator2079;

let OrientationInterpolator2080 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2080.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator2080.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2080.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[11] = OrientationInterpolator2080;

let OrientationInterpolator2081 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2081.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator2081.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2081.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[12] = OrientationInterpolator2081;

let OrientationInterpolator2082 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2082.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator2082.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2082.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2068ZZZ.children[13] = OrientationInterpolator2082;

let OrientationInterpolator2083 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2083.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator2083.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2083.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[14] = OrientationInterpolator2083;

let OrientationInterpolator2084 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2084.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator2084.key = new X3D.MFFloat([0,0.25,0.55,1]);
OrientationInterpolator2084.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group2068ZZZ.children[15] = OrientationInterpolator2084;

let OrientationInterpolator2085 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2085.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator2085.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2085.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[16] = OrientationInterpolator2085;

let OrientationInterpolator2086 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2086.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator2086.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2086.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[17] = OrientationInterpolator2086;

let OrientationInterpolator2087 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2087.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator2087.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2087.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[18] = OrientationInterpolator2087;

let PositionInterpolator2088 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2088.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator2088.key = new X3D.MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2088.keyValue = new X3D.MFVec3f([0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group2068ZZZ.children[19] = PositionInterpolator2088;

let OrientationInterpolator2089 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2089.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2089.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2089.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[20] = OrientationInterpolator2089;

let OrientationInterpolator2090 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2090.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2090.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2090.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[21] = OrientationInterpolator2090;

let OrientationInterpolator2091 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2091.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2091.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2091.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[22] = OrientationInterpolator2091;

let OrientationInterpolator2092 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2092.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2092.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2092.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[23] = OrientationInterpolator2092;

let OrientationInterpolator2093 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2093.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator2093.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2093.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[24] = OrientationInterpolator2093;

let OrientationInterpolator2094 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2094.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator2094.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2094.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[25] = OrientationInterpolator2094;

let OrientationInterpolator2095 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2095.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator2095.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2095.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068ZZZ.children[26] = OrientationInterpolator2095;

let OrientationInterpolator2096 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2096.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator2096.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2096.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2068ZZZ.children[27] = OrientationInterpolator2096;

let OrientationInterpolator2097 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2097.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator2097.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2097.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2068ZZZ.children[28] = OrientationInterpolator2097;

browser.currentScene.children[15] = Group2068;

let Group2098 = browser.currentScene.createNode("Group");
Group2098.DEF = "YawsAnimation";
let TimeSensor2099 = browser.currentScene.createNode("TimeSensor");
TimeSensor2099.DEF = "YawTimer";
TimeSensor2099.cycleInterval = 5.73;
TimeSensor2099.loop = True;
Group2098YYY.children = new X3D.MFNode();

Group2098ZZZ.children[0] = TimeSensor2099;

let OrientationInterpolator2100 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2100.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator2100.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2100.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[1] = OrientationInterpolator2100;

let OrientationInterpolator2101 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2101.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator2101.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2101.keyValue = new X3D.MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2098ZZZ.children[2] = OrientationInterpolator2101;

let OrientationInterpolator2102 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2102.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator2102.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2102.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2098ZZZ.children[3] = OrientationInterpolator2102;

let OrientationInterpolator2103 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2103.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator2103.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2103.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[4] = OrientationInterpolator2103;

let OrientationInterpolator2104 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2104.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator2104.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2104.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2098ZZZ.children[5] = OrientationInterpolator2104;

let OrientationInterpolator2105 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2105.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator2105.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2105.keyValue = new X3D.MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2098ZZZ.children[6] = OrientationInterpolator2105;

let OrientationInterpolator2106 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2106.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator2106.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2106.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[7] = OrientationInterpolator2106;

let OrientationInterpolator2107 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2107.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator2107.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2107.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[8] = OrientationInterpolator2107;

let OrientationInterpolator2108 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2108.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator2108.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2108.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[9] = OrientationInterpolator2108;

let OrientationInterpolator2109 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2109.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator2109.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2109.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[10] = OrientationInterpolator2109;

let OrientationInterpolator2110 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2110.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator2110.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2110.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[11] = OrientationInterpolator2110;

let OrientationInterpolator2111 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2111.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator2111.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2111.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[12] = OrientationInterpolator2111;

let OrientationInterpolator2112 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2112.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator2112.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2112.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[13] = OrientationInterpolator2112;

let OrientationInterpolator2113 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2113.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator2113.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2113.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[14] = OrientationInterpolator2113;

let OrientationInterpolator2114 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2114.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator2114.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2114.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2098ZZZ.children[15] = OrientationInterpolator2114;

let OrientationInterpolator2115 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2115.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator2115.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2115.keyValue = new X3D.MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2098ZZZ.children[16] = OrientationInterpolator2115;

let OrientationInterpolator2116 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2116.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator2116.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2116.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[17] = OrientationInterpolator2116;

let OrientationInterpolator2117 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2117.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator2117.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2117.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[18] = OrientationInterpolator2117;

let PositionInterpolator2118 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2118.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator2118.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator2118.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group2098ZZZ.children[19] = PositionInterpolator2118;

let OrientationInterpolator2119 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2119.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2119.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2119.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[20] = OrientationInterpolator2119;

let OrientationInterpolator2120 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2120.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2120.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2120.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[21] = OrientationInterpolator2120;

let OrientationInterpolator2121 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2121.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2121.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2121.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[22] = OrientationInterpolator2121;

let OrientationInterpolator2122 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2122.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2122.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2122.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[23] = OrientationInterpolator2122;

let OrientationInterpolator2123 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2123.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator2123.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2123.keyValue = new X3D.MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group2098ZZZ.children[24] = OrientationInterpolator2123;

let OrientationInterpolator2124 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2124.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator2124.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2124.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[25] = OrientationInterpolator2124;

let OrientationInterpolator2125 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2125.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator2125.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2125.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[26] = OrientationInterpolator2125;

let OrientationInterpolator2126 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2126.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator2126.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2126.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[27] = OrientationInterpolator2126;

let OrientationInterpolator2127 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2127.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator2127.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2127.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098ZZZ.children[28] = OrientationInterpolator2127;

browser.currentScene.children[16] = Group2098;

let Group2128 = browser.currentScene.createNode("Group");
Group2128.DEF = "RollsAnimation";
let TimeSensor2129 = browser.currentScene.createNode("TimeSensor");
TimeSensor2129.DEF = "RollTimer";
TimeSensor2129.cycleInterval = 5.73;
TimeSensor2129.loop = True;
Group2128YYY.children = new X3D.MFNode();

Group2128ZZZ.children[0] = TimeSensor2129;

let OrientationInterpolator2130 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2130.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator2130.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2130.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[1] = OrientationInterpolator2130;

let OrientationInterpolator2131 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2131.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator2131.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2131.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2128ZZZ.children[2] = OrientationInterpolator2131;

let OrientationInterpolator2132 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2132.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator2132.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2132.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[3] = OrientationInterpolator2132;

let OrientationInterpolator2133 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2133.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator2133.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2133.keyValue = new X3D.MFRotation([0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2128ZZZ.children[4] = OrientationInterpolator2133;

let OrientationInterpolator2134 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2134.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator2134.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2134.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2128ZZZ.children[5] = OrientationInterpolator2134;

let OrientationInterpolator2135 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2135.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator2135.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2135.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[6] = OrientationInterpolator2135;

let OrientationInterpolator2136 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2136.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator2136.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2136.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2128ZZZ.children[7] = OrientationInterpolator2136;

let OrientationInterpolator2137 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2137.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator2137.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2137.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2128ZZZ.children[8] = OrientationInterpolator2137;

let OrientationInterpolator2138 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2138.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator2138.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2138.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[9] = OrientationInterpolator2138;

let OrientationInterpolator2139 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2139.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator2139.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2139.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group2128ZZZ.children[10] = OrientationInterpolator2139;

let OrientationInterpolator2140 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2140.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator2140.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2140.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2128ZZZ.children[11] = OrientationInterpolator2140;

let OrientationInterpolator2141 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2141.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator2141.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2141.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[12] = OrientationInterpolator2141;

let OrientationInterpolator2142 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2142.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator2142.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2142.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group2128ZZZ.children[13] = OrientationInterpolator2142;

let OrientationInterpolator2143 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2143.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator2143.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2143.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[14] = OrientationInterpolator2143;

let OrientationInterpolator2144 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2144.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator2144.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2144.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group2128ZZZ.children[15] = OrientationInterpolator2144;

let OrientationInterpolator2145 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2145.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator2145.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2145.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[16] = OrientationInterpolator2145;

let OrientationInterpolator2146 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2146.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator2146.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2146.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[17] = OrientationInterpolator2146;

let OrientationInterpolator2147 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2147.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator2147.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2147.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[18] = OrientationInterpolator2147;

let PositionInterpolator2148 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2148.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator2148.key = new X3D.MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2148.keyValue = new X3D.MFVec3f([0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group2128ZZZ.children[19] = PositionInterpolator2148;

let OrientationInterpolator2149 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2149.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2149.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2149.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[20] = OrientationInterpolator2149;

let OrientationInterpolator2150 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2150.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2150.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2150.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[21] = OrientationInterpolator2150;

let OrientationInterpolator2151 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2151.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2151.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2151.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[22] = OrientationInterpolator2151;

let OrientationInterpolator2152 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2152.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2152.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2152.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[23] = OrientationInterpolator2152;

let OrientationInterpolator2153 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2153.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator2153.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2153.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[24] = OrientationInterpolator2153;

let OrientationInterpolator2154 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2154.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator2154.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2154.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[25] = OrientationInterpolator2154;

let OrientationInterpolator2155 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2155.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator2155.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2155.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[26] = OrientationInterpolator2155;

let OrientationInterpolator2156 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2156.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator2156.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2156.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[27] = OrientationInterpolator2156;

let OrientationInterpolator2157 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2157.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator2157.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2157.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128ZZZ.children[28] = OrientationInterpolator2157;

browser.currentScene.children[17] = Group2128;

let Group2158 = browser.currentScene.createNode("Group");
Group2158.DEF = "WalkAnimation";
let TimeSensor2159 = browser.currentScene.createNode("TimeSensor");
TimeSensor2159.DEF = "WalkTimer";
TimeSensor2159.cycleInterval = 1.73;
TimeSensor2159.loop = True;
Group2158YYY.children = new X3D.MFNode();

Group2158ZZZ.children[0] = TimeSensor2159;

let OrientationInterpolator2160 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2160.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator2160.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2160.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158ZZZ.children[1] = OrientationInterpolator2160;

let OrientationInterpolator2161 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2161.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator2161.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator2161.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group2158ZZZ.children[2] = OrientationInterpolator2161;

let OrientationInterpolator2162 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2162.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator2162.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2162.keyValue = new X3D.MFRotation([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group2158ZZZ.children[3] = OrientationInterpolator2162;

let OrientationInterpolator2163 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2163.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator2163.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2163.keyValue = new X3D.MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group2158ZZZ.children[4] = OrientationInterpolator2163;

let OrientationInterpolator2164 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2164.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator2164.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator2164.keyValue = new X3D.MFRotation([-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group2158ZZZ.children[5] = OrientationInterpolator2164;

let OrientationInterpolator2165 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2165.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator2165.key = new X3D.MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2165.keyValue = new X3D.MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group2158ZZZ.children[6] = OrientationInterpolator2165;

let OrientationInterpolator2166 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2166.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator2166.key = new X3D.MFFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2166.keyValue = new X3D.MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group2158ZZZ.children[7] = OrientationInterpolator2166;

let OrientationInterpolator2167 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2167.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator2167.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2167.keyValue = new X3D.MFRotation([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group2158ZZZ.children[8] = OrientationInterpolator2167;

let OrientationInterpolator2168 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2168.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator2168.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator2168.keyValue = new X3D.MFRotation([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group2158ZZZ.children[9] = OrientationInterpolator2168;

let OrientationInterpolator2169 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2169.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator2169.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator2169.keyValue = new X3D.MFRotation([-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group2158ZZZ.children[10] = OrientationInterpolator2169;

let OrientationInterpolator2170 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2170.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator2170.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator2170.keyValue = new X3D.MFRotation([-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group2158ZZZ.children[11] = OrientationInterpolator2170;

let OrientationInterpolator2171 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2171.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator2171.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator2171.keyValue = new X3D.MFRotation([0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group2158ZZZ.children[12] = OrientationInterpolator2171;

let OrientationInterpolator2172 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2172.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator2172.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator2172.keyValue = new X3D.MFRotation([-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group2158ZZZ.children[13] = OrientationInterpolator2172;

let OrientationInterpolator2173 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2173.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator2173.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator2173.keyValue = new X3D.MFRotation([1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group2158ZZZ.children[14] = OrientationInterpolator2173;

let OrientationInterpolator2174 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2174.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator2174.key = new X3D.MFFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator2174.keyValue = new X3D.MFRotation([0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group2158ZZZ.children[15] = OrientationInterpolator2174;

let OrientationInterpolator2175 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2175.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator2175.key = new X3D.MFFloat([0,1]);
OrientationInterpolator2175.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group2158ZZZ.children[16] = OrientationInterpolator2175;

let OrientationInterpolator2176 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2176.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator2176.key = new X3D.MFFloat([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator2176.keyValue = new X3D.MFRotation([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group2158ZZZ.children[17] = OrientationInterpolator2176;

let OrientationInterpolator2177 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2177.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator2177.key = new X3D.MFFloat([0,1]);
OrientationInterpolator2177.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group2158ZZZ.children[18] = OrientationInterpolator2177;

let PositionInterpolator2178 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2178.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator2178.key = new X3D.MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator2178.keyValue = new X3D.MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group2158ZZZ.children[19] = PositionInterpolator2178;

let OrientationInterpolator2179 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2179.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2179.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2179.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158ZZZ.children[20] = OrientationInterpolator2179;

let OrientationInterpolator2180 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2180.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2180.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2180.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158ZZZ.children[21] = OrientationInterpolator2180;

let OrientationInterpolator2181 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2181.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2181.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2181.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158ZZZ.children[22] = OrientationInterpolator2181;

let OrientationInterpolator2182 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2182.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2182.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2182.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158ZZZ.children[23] = OrientationInterpolator2182;

let OrientationInterpolator2183 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2183.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator2183.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2183.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158ZZZ.children[24] = OrientationInterpolator2183;

let OrientationInterpolator2184 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2184.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator2184.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2184.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158ZZZ.children[25] = OrientationInterpolator2184;

let OrientationInterpolator2185 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2185.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator2185.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2185.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158ZZZ.children[26] = OrientationInterpolator2185;

let OrientationInterpolator2186 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2186.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator2186.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2186.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2158ZZZ.children[27] = OrientationInterpolator2186;

let OrientationInterpolator2187 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2187.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator2187.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2187.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2158ZZZ.children[28] = OrientationInterpolator2187;

browser.currentScene.children[18] = Group2158;

let Group2188 = browser.currentScene.createNode("Group");
Group2188.DEF = "RunAnimation";
let TimeSensor2189 = browser.currentScene.createNode("TimeSensor");
TimeSensor2189.DEF = "RunTimer";
TimeSensor2189.cycleInterval = 0.9;
TimeSensor2189.loop = True;
Group2188YYY.children = new X3D.MFNode();

Group2188ZZZ.children[0] = TimeSensor2189;

let OrientationInterpolator2190 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2190.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator2190.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2190.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188ZZZ.children[1] = OrientationInterpolator2190;

let OrientationInterpolator2191 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2191.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator2191.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2191.keyValue = new X3D.MFRotation([-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group2188ZZZ.children[2] = OrientationInterpolator2191;

let OrientationInterpolator2192 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2192.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator2192.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2192.keyValue = new X3D.MFRotation([1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group2188ZZZ.children[3] = OrientationInterpolator2192;

let OrientationInterpolator2193 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2193.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator2193.key = new X3D.MFFloat([0,0.22,0.3,0.4,1]);
OrientationInterpolator2193.keyValue = new X3D.MFRotation([1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group2188ZZZ.children[4] = OrientationInterpolator2193;

let OrientationInterpolator2194 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2194.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator2194.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2194.keyValue = new X3D.MFRotation([0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group2188ZZZ.children[5] = OrientationInterpolator2194;

let OrientationInterpolator2195 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2195.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator2195.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2195.keyValue = new X3D.MFRotation([1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group2188ZZZ.children[6] = OrientationInterpolator2195;

let OrientationInterpolator2196 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2196.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator2196.key = new X3D.MFFloat([0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator2196.keyValue = new X3D.MFRotation([1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group2188ZZZ.children[7] = OrientationInterpolator2196;

let OrientationInterpolator2197 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2197.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator2197.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2197.keyValue = new X3D.MFRotation([0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group2188ZZZ.children[8] = OrientationInterpolator2197;

let OrientationInterpolator2198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2198.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator2198.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2198.keyValue = new X3D.MFRotation([-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group2188ZZZ.children[9] = OrientationInterpolator2198;

let OrientationInterpolator2199 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2199.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator2199.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2199.keyValue = new X3D.MFRotation([-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group2188ZZZ.children[10] = OrientationInterpolator2199;

let OrientationInterpolator2200 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2200.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator2200.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2200.keyValue = new X3D.MFRotation([-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group2188ZZZ.children[11] = OrientationInterpolator2200;

let OrientationInterpolator2201 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2201.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator2201.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2201.keyValue = new X3D.MFRotation([-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group2188ZZZ.children[12] = OrientationInterpolator2201;

let OrientationInterpolator2202 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2202.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator2202.key = new X3D.MFFloat([0,1]);
OrientationInterpolator2202.keyValue = new X3D.MFRotation([-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group2188ZZZ.children[13] = OrientationInterpolator2202;

let OrientationInterpolator2203 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2203.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator2203.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2203.keyValue = new X3D.MFRotation([0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group2188ZZZ.children[14] = OrientationInterpolator2203;

let OrientationInterpolator2204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2204.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator2204.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2204.keyValue = new X3D.MFRotation([1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group2188ZZZ.children[15] = OrientationInterpolator2204;

let OrientationInterpolator2205 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2205.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator2205.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2205.keyValue = new X3D.MFRotation([0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group2188ZZZ.children[16] = OrientationInterpolator2205;

let OrientationInterpolator2206 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2206.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator2206.key = new X3D.MFFloat([0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator2206.keyValue = new X3D.MFRotation([0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group2188ZZZ.children[17] = OrientationInterpolator2206;

let OrientationInterpolator2207 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2207.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator2207.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator2207.keyValue = new X3D.MFRotation([1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group2188ZZZ.children[18] = OrientationInterpolator2207;

let PositionInterpolator2208 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2208.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator2208.key = new X3D.MFFloat([0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator2208.keyValue = new X3D.MFVec3f([0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group2188ZZZ.children[19] = PositionInterpolator2208;

let OrientationInterpolator2209 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2209.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2209.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2209.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188ZZZ.children[20] = OrientationInterpolator2209;

let OrientationInterpolator2210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2210.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2210.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2210.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188ZZZ.children[21] = OrientationInterpolator2210;

let OrientationInterpolator2211 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2211.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2211.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2211.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188ZZZ.children[22] = OrientationInterpolator2211;

let OrientationInterpolator2212 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2212.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2212.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2212.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188ZZZ.children[23] = OrientationInterpolator2212;

let OrientationInterpolator2213 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2213.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator2213.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2213.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188ZZZ.children[24] = OrientationInterpolator2213;

let OrientationInterpolator2214 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2214.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator2214.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2214.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188ZZZ.children[25] = OrientationInterpolator2214;

let OrientationInterpolator2215 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2215.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator2215.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2215.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188ZZZ.children[26] = OrientationInterpolator2215;

let OrientationInterpolator2216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2216.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator2216.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2216.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2188ZZZ.children[27] = OrientationInterpolator2216;

let OrientationInterpolator2217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2217.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator2217.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2217.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2188ZZZ.children[28] = OrientationInterpolator2217;

browser.currentScene.children[19] = Group2188;

let Group2218 = browser.currentScene.createNode("Group");
Group2218.DEF = "JumpAnimation";
let TimeSensor2219 = browser.currentScene.createNode("TimeSensor");
TimeSensor2219.DEF = "JumpTimer";
TimeSensor2219.cycleInterval = 3.73;
TimeSensor2219.loop = True;
Group2218YYY.children = new X3D.MFNode();

Group2218ZZZ.children[0] = TimeSensor2219;

let OrientationInterpolator2220 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2220.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator2220.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2220.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2218ZZZ.children[1] = OrientationInterpolator2220;

let OrientationInterpolator2221 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2221.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator2221.key = new X3D.MFFloat([0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2221.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group2218ZZZ.children[2] = OrientationInterpolator2221;

let OrientationInterpolator2222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2222.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator2222.key = new X3D.MFFloat([0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator2222.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group2218ZZZ.children[3] = OrientationInterpolator2222;

let OrientationInterpolator2223 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2223.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator2223.key = new X3D.MFFloat([0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2223.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group2218ZZZ.children[4] = OrientationInterpolator2223;

let OrientationInterpolator2224 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2224.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator2224.key = new X3D.MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2224.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group2218ZZZ.children[5] = OrientationInterpolator2224;

let OrientationInterpolator2225 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2225.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator2225.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2225.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group2218ZZZ.children[6] = OrientationInterpolator2225;

let OrientationInterpolator2226 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2226.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator2226.key = new X3D.MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2226.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group2218ZZZ.children[7] = OrientationInterpolator2226;

let OrientationInterpolator2227 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2227.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator2227.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2227.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2218ZZZ.children[8] = OrientationInterpolator2227;

let OrientationInterpolator2228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2228.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator2228.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2228.keyValue = new X3D.MFRotation([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group2218ZZZ.children[9] = OrientationInterpolator2228;

let OrientationInterpolator2229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2229.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator2229.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2229.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group2218ZZZ.children[10] = OrientationInterpolator2229;

let OrientationInterpolator2230 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2230.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator2230.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2230.keyValue = new X3D.MFRotation([0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group2218ZZZ.children[11] = OrientationInterpolator2230;

let OrientationInterpolator2231 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2231.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator2231.key = new X3D.MFFloat([0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator2231.keyValue = new X3D.MFRotation([0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group2218ZZZ.children[12] = OrientationInterpolator2231;

let OrientationInterpolator2232 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2232.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator2232.key = new X3D.MFFloat([0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator2232.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group2218ZZZ.children[13] = OrientationInterpolator2232;

let OrientationInterpolator2233 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2233.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator2233.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2233.keyValue = new X3D.MFRotation([0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group2218ZZZ.children[14] = OrientationInterpolator2233;

let OrientationInterpolator2234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2234.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator2234.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2234.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group2218ZZZ.children[15] = OrientationInterpolator2234;

let OrientationInterpolator2235 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2235.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator2235.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2235.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group2218ZZZ.children[16] = OrientationInterpolator2235;

let OrientationInterpolator2236 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2236.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator2236.key = new X3D.MFFloat([0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator2236.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group2218ZZZ.children[17] = OrientationInterpolator2236;

let OrientationInterpolator2237 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2237.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator2237.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator2237.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2218ZZZ.children[18] = OrientationInterpolator2237;

let PositionInterpolator2238 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2238.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator2238.key = new X3D.MFFloat([0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator2238.keyValue = new X3D.MFVec3f([0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group2218ZZZ.children[19] = PositionInterpolator2238;

let OrientationInterpolator2239 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2239.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2239.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2239.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2218ZZZ.children[20] = OrientationInterpolator2239;

let OrientationInterpolator2240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2240.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2240.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2240.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2218ZZZ.children[21] = OrientationInterpolator2240;

let OrientationInterpolator2241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2241.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2241.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2241.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2218ZZZ.children[22] = OrientationInterpolator2241;

let OrientationInterpolator2242 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2242.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2242.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2242.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2218ZZZ.children[23] = OrientationInterpolator2242;

let OrientationInterpolator2243 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2243.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator2243.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2243.keyValue = new X3D.MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2218ZZZ.children[24] = OrientationInterpolator2243;

let OrientationInterpolator2244 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2244.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator2244.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2244.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group2218ZZZ.children[25] = OrientationInterpolator2244;

let OrientationInterpolator2245 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2245.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator2245.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2245.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group2218ZZZ.children[26] = OrientationInterpolator2245;

let OrientationInterpolator2246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2246.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator2246.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2246.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2218ZZZ.children[27] = OrientationInterpolator2246;

let OrientationInterpolator2247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2247.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator2247.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2247.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2218ZZZ.children[28] = OrientationInterpolator2247;

browser.currentScene.children[20] = Group2218;

let Group2248 = browser.currentScene.createNode("Group");
Group2248.DEF = "KickAnimation";
let TimeSensor2249 = browser.currentScene.createNode("TimeSensor");
TimeSensor2249.DEF = "KickTimer";
TimeSensor2249.cycleInterval = 3.73;
TimeSensor2249.loop = True;
Group2248YYY.children = new X3D.MFNode();

Group2248ZZZ.children[0] = TimeSensor2249;

let OrientationInterpolator2250 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2250.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2250.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2250.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[1] = OrientationInterpolator2250;

let OrientationInterpolator2251 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2251.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2251.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2251.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[2] = OrientationInterpolator2251;

let OrientationInterpolator2252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2252.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator2252.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2252.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group2248ZZZ.children[3] = OrientationInterpolator2252;

let OrientationInterpolator2253 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2253.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator2253.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2253.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2248ZZZ.children[4] = OrientationInterpolator2253;

let OrientationInterpolator2254 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2254.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator2254.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2254.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[5] = OrientationInterpolator2254;

let OrientationInterpolator2255 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2255.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator2255.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2255.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2248ZZZ.children[6] = OrientationInterpolator2255;

let OrientationInterpolator2256 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2256.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2256.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2256.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[7] = OrientationInterpolator2256;

let OrientationInterpolator2257 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2257.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2257.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2257.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[8] = OrientationInterpolator2257;

let OrientationInterpolator2258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2258.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator2258.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2258.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group2248ZZZ.children[9] = OrientationInterpolator2258;

let OrientationInterpolator2259 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2259.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator2259.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2259.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2248ZZZ.children[10] = OrientationInterpolator2259;

let OrientationInterpolator2260 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2260.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator2260.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2260.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[11] = OrientationInterpolator2260;

let OrientationInterpolator2261 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2261.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator2261.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2261.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2248ZZZ.children[12] = OrientationInterpolator2261;

let OrientationInterpolator2262 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2262.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator2262.key = new X3D.MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2262.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group2248ZZZ.children[13] = OrientationInterpolator2262;

let OrientationInterpolator2263 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2263.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator2263.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2263.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group2248ZZZ.children[14] = OrientationInterpolator2263;

let OrientationInterpolator2264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2264.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator2264.key = new X3D.MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2264.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[15] = OrientationInterpolator2264;

let OrientationInterpolator2265 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2265.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator2265.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2265.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[16] = OrientationInterpolator2265;

let OrientationInterpolator2266 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2266.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator2266.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2266.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group2248ZZZ.children[17] = OrientationInterpolator2266;

let OrientationInterpolator2267 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2267.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator2267.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2267.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2248ZZZ.children[18] = OrientationInterpolator2267;

let OrientationInterpolator2268 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2268.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator2268.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2268.keyValue = new X3D.MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2248ZZZ.children[19] = OrientationInterpolator2268;

let OrientationInterpolator2269 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2269.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator2269.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2269.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[20] = OrientationInterpolator2269;

let OrientationInterpolator2270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2270.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator2270.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2270.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[21] = OrientationInterpolator2270;

let OrientationInterpolator2271 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2271.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator2271.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2271.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[22] = OrientationInterpolator2271;

let OrientationInterpolator2272 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2272.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator2272.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2272.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[23] = OrientationInterpolator2272;

let OrientationInterpolator2273 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2273.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator2273.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator2273.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248ZZZ.children[24] = OrientationInterpolator2273;

let PositionInterpolator2274 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2274.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator2274.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator2274.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group2248ZZZ.children[25] = PositionInterpolator2274;

let OrientationInterpolator2275 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2275.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator2275.key = new X3D.MFFloat([0,0.25,0.55,1]);
OrientationInterpolator2275.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group2248ZZZ.children[26] = OrientationInterpolator2275;

browser.currentScene.children[21] = Group2248;

let Group2276 = browser.currentScene.createNode("Group");
Group2276.DEF = "UserInterface";
let Transform2277 = browser.currentScene.createNode("Transform");
Transform2277.DEF = "CoordinateAxesAdjustedScale";
Transform2277.scale = new X3D.SFVec3f([0.175,0.175,0.175]);
let Inline2278 = browser.currentScene.createNode("Inline");
Inline2278.DEF = "CoordinateAxes";
Inline2278.global = True;
Inline2278.url = new X3D.MFString([new X3D.SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), new X3D.SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl")]);
Transform2277YYY.children = new X3D.MFNode();

Transform2277ZZZ.children[0] = Inline2278;

Group2276YYY.children = new X3D.MFNode();

Group2276ZZZ.children[0] = Transform2277;

let Transform2279 = browser.currentScene.createNode("Transform");
Transform2279.DEF = "cordsys";
Transform2279.scale = new X3D.SFVec3f([0.175,0.175,0.175]);
Group2276ZZZ.children[1] = Transform2279;

let ProximitySensor2280 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor2280.DEF = "HudProximitySensor";
ProximitySensor2280.size = new X3D.SFVec3f([500,100,500]);
ProximitySensor2280.center = new X3D.SFVec3f([0,20,0]);
Group2276ZZZ.children[2] = ProximitySensor2280;

let Transform2281 = browser.currentScene.createNode("Transform");
Transform2281.DEF = "Stage";
Transform2281.translation = new X3D.SFVec3f([0,-0.0125,0]);
Transform2281.scale = new X3D.SFVec3f([1,0.0125,1]);
let Shape2282 = browser.currentScene.createNode("Shape");
let Appearance2283 = browser.currentScene.createNode("Appearance");
let Material2284 = browser.currentScene.createNode("Material");
Material2284.transparency = 0.6;
material = Material2284;

appearance = Appearance2283;

let Box2285 = browser.currentScene.createNode("Box");
geometry = Box2285;

Transform2281YYY.child = new X3D.undefined();

Transform2281ZZZ.child[0] = Shape2282;

let Transform2286 = browser.currentScene.createNode("Transform");
Transform2286.DEF = "Circle0";
Transform2286.scale = new X3D.SFVec3f([1.175,1,1.175]);
let Shape2287 = browser.currentScene.createNode("Shape");
let Appearance2288 = browser.currentScene.createNode("Appearance");
let Material2289 = browser.currentScene.createNode("Material");
Material2289.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material2289.emissiveColor = new X3D.SFColor([0.424956,0.483976,1]);
material = Material2289;

appearance = Appearance2288;

let IndexedLineSet2290 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2290.DEF = "Orbit1";
IndexedLineSet2290.coordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate2291 = browser.currentScene.createNode("Coordinate");
Coordinate2291.point = new X3D.MFVec3f([1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
coord = Coordinate2291;

geometry = IndexedLineSet2290;

Transform2286YYY.child = new X3D.undefined();

Transform2286ZZZ.child[0] = Shape2287;

Transform2281ZZZ.children[1] = Transform2286;

let Transform2292 = browser.currentScene.createNode("Transform");
Transform2292.DEF = "Circle1";
Transform2292.scale = new X3D.SFVec3f([0.5,1,0.5]);
let Shape2293 = browser.currentScene.createNode("Shape");
let Appearance2294 = browser.currentScene.createNode("Appearance");
let Material2295 = browser.currentScene.createNode("Material");
Material2295.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material2295.emissiveColor = new X3D.SFColor([0.424956,0.483976,1]);
material = Material2295;

appearance = Appearance2294;

let IndexedLineSet2296 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2296.USE = "Orbit1";
geometry = IndexedLineSet2296;

Transform2292YYY.child = new X3D.undefined();

Transform2292ZZZ.child[0] = Shape2293;

Transform2281ZZZ.children[2] = Transform2292;

let Transform2297 = browser.currentScene.createNode("Transform");
Transform2297.DEF = "Circle2";
Transform2297.scale = new X3D.SFVec3f([0.25,1,0.25]);
let Shape2298 = browser.currentScene.createNode("Shape");
let Appearance2299 = browser.currentScene.createNode("Appearance");
let Material2300 = browser.currentScene.createNode("Material");
Material2300.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material2300.emissiveColor = new X3D.SFColor([0.424956,0.483976,1]);
material = Material2300;

appearance = Appearance2299;

let IndexedLineSet2301 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2301.USE = "Orbit1";
geometry = IndexedLineSet2301;

Transform2297YYY.child = new X3D.undefined();

Transform2297ZZZ.child[0] = Shape2298;

Transform2281ZZZ.children[3] = Transform2297;

Group2276ZZZ.children[3] = Transform2281;

let Transform2302 = browser.currentScene.createNode("Transform");
Transform2302.DEF = "HudXform";
Transform2302.translation = new X3D.SFVec3f([1.705442,1.042139,1.989742]);
Transform2302.rotation = new X3D.SFRotation([-0.09996068,0.9942513,0.03837026,0.7131352]);
let Transform2303 = browser.currentScene.createNode("Transform");
Transform2303.translation = new X3D.SFVec3f([-0.42,-0.2,-0.75]);
Transform2303.scale = new X3D.SFVec3f([0.035,0.035,0.035]);
let Transform2304 = browser.currentScene.createNode("Transform");
Transform2304.DEF = "StandTransform";
Transform2304.translation = new X3D.SFVec3f([0,-1,0]);
let TouchSensor2305 = browser.currentScene.createNode("TouchSensor");
TouchSensor2305.DEF = "Stand_Touch";
TouchSensor2305.description = "touch to select";
Transform2304YYY.children = new X3D.MFNode();

Transform2304ZZZ.children[0] = TouchSensor2305;

let Shape2306 = browser.currentScene.createNode("Shape");
Shape2306.DEF = "StandTextShape";
let Appearance2307 = browser.currentScene.createNode("Appearance");
let Material2308 = browser.currentScene.createNode("Material");
Material2308.DEF = "text_color";
Material2308.ambientIntensity = 1;
Material2308.diffuseColor = new X3D.SFColor([0.819,0.521,0.169]);
Material2308.specularColor = new X3D.SFColor([0.819,0.521,0.169]);
Material2308.emissiveColor = new X3D.SFColor([0.819,0.521,0.169]);
material = Material2308;

appearance = Appearance2307;

let Text2309 = browser.currentScene.createNode("Text");
Text2309.string = new X3D.MFString([new X3D.SFString("Stand")]);
geometry = Text2309;

Transform2304ZZZ.child[1] = Shape2306;

let Shape2310 = browser.currentScene.createNode("Shape");
Shape2310.DEF = "Stand_Back";
let Appearance2311 = browser.currentScene.createNode("Appearance");
let Material2312 = browser.currentScene.createNode("Material");
Material2312.DEF = "Clear";
Material2312.ambientIntensity = 1;
Material2312.diffuseColor = new X3D.SFColor([0,0.5,0]);
Material2312.emissiveColor = new X3D.SFColor([0,0.5,0]);
Material2312.transparency = 0.8;
material = Material2312;

appearance = Appearance2311;

let IndexedFaceSet2313 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2313.DEF = "Backing";
IndexedFaceSet2313.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate2314 = browser.currentScene.createNode("Coordinate");
Coordinate2314.point = new X3D.MFVec3f([-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01]);
coord = Coordinate2314;

geometry = IndexedFaceSet2313;

Transform2304ZZZ.child[2] = Shape2310;

Transform2303YYY.children = new X3D.MFNode();

Transform2303ZZZ.children[0] = Transform2304;

let Transform2315 = browser.currentScene.createNode("Transform");
Transform2315.DEF = "PitchTransform";
Transform2315.translation = new X3D.SFVec3f([3,-1,0]);
let TouchSensor2316 = browser.currentScene.createNode("TouchSensor");
TouchSensor2316.DEF = "Pitch_Touch";
TouchSensor2316.description = "touch to select";
Transform2315YYY.children = new X3D.MFNode();

Transform2315ZZZ.children[0] = TouchSensor2316;

let Shape2317 = browser.currentScene.createNode("Shape");
Shape2317.DEF = "PitchTextShape";
let Appearance2318 = browser.currentScene.createNode("Appearance");
let Material2319 = browser.currentScene.createNode("Material");
Material2319.USE = "text_color";
material = Material2319;

appearance = Appearance2318;

let Text2320 = browser.currentScene.createNode("Text");
Text2320.string = new X3D.MFString([new X3D.SFString("Pitch")]);
geometry = Text2320;

Transform2315ZZZ.child[1] = Shape2317;

let Shape2321 = browser.currentScene.createNode("Shape");
Shape2321.DEF = "Pitch_Back";
let Appearance2322 = browser.currentScene.createNode("Appearance");
let Material2323 = browser.currentScene.createNode("Material");
Material2323.USE = "Clear";
material = Material2323;

appearance = Appearance2322;

let IndexedFaceSet2324 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2324.USE = "Backing";
geometry = IndexedFaceSet2324;

Transform2315ZZZ.child[2] = Shape2321;

Transform2303ZZZ.children[1] = Transform2315;

let Transform2325 = browser.currentScene.createNode("Transform");
Transform2325.DEF = "YawTransform";
Transform2325.translation = new X3D.SFVec3f([6,-1,0]);
let TouchSensor2326 = browser.currentScene.createNode("TouchSensor");
TouchSensor2326.DEF = "Yaw_Touch";
TouchSensor2326.description = "touch to select";
Transform2325YYY.children = new X3D.MFNode();

Transform2325ZZZ.children[0] = TouchSensor2326;

let Shape2327 = browser.currentScene.createNode("Shape");
Shape2327.DEF = "YawText";
let Appearance2328 = browser.currentScene.createNode("Appearance");
let Material2329 = browser.currentScene.createNode("Material");
Material2329.USE = "text_color";
material = Material2329;

appearance = Appearance2328;

let Text2330 = browser.currentScene.createNode("Text");
Text2330.string = new X3D.MFString([new X3D.SFString("Yaw")]);
geometry = Text2330;

Transform2325ZZZ.child[1] = Shape2327;

let Shape2331 = browser.currentScene.createNode("Shape");
Shape2331.DEF = "Yaw_Back";
let Appearance2332 = browser.currentScene.createNode("Appearance");
let Material2333 = browser.currentScene.createNode("Material");
Material2333.USE = "Clear";
material = Material2333;

appearance = Appearance2332;

let IndexedFaceSet2334 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2334.USE = "Backing";
geometry = IndexedFaceSet2334;

Transform2325ZZZ.child[2] = Shape2331;

Transform2303ZZZ.children[2] = Transform2325;

let Transform2335 = browser.currentScene.createNode("Transform");
Transform2335.DEF = "RollTransform";
Transform2335.translation = new X3D.SFVec3f([9,-1,0]);
let TouchSensor2336 = browser.currentScene.createNode("TouchSensor");
TouchSensor2336.DEF = "Roll_Touch";
TouchSensor2336.description = "touch to select";
Transform2335YYY.children = new X3D.MFNode();

Transform2335ZZZ.children[0] = TouchSensor2336;

let Shape2337 = browser.currentScene.createNode("Shape");
Shape2337.DEF = "_RollInterpolator";
let Appearance2338 = browser.currentScene.createNode("Appearance");
let Material2339 = browser.currentScene.createNode("Material");
Material2339.USE = "text_color";
material = Material2339;

appearance = Appearance2338;

let Text2340 = browser.currentScene.createNode("Text");
Text2340.string = new X3D.MFString([new X3D.SFString("Roll")]);
geometry = Text2340;

Transform2335ZZZ.child[1] = Shape2337;

let Shape2341 = browser.currentScene.createNode("Shape");
Shape2341.DEF = "Roll_Back";
let Appearance2342 = browser.currentScene.createNode("Appearance");
let Material2343 = browser.currentScene.createNode("Material");
Material2343.USE = "Clear";
material = Material2343;

appearance = Appearance2342;

let IndexedFaceSet2344 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2344.USE = "Backing";
geometry = IndexedFaceSet2344;

Transform2335ZZZ.child[2] = Shape2341;

Transform2303ZZZ.children[3] = Transform2335;

let Transform2345 = browser.currentScene.createNode("Transform");
Transform2345.DEF = "WalkTransform";
Transform2345.translation = new X3D.SFVec3f([12,-1,0]);
let TouchSensor2346 = browser.currentScene.createNode("TouchSensor");
TouchSensor2346.DEF = "Walk_Touch";
TouchSensor2346.description = "touch to select";
Transform2345YYY.children = new X3D.MFNode();

Transform2345ZZZ.children[0] = TouchSensor2346;

let Shape2347 = browser.currentScene.createNode("Shape");
Shape2347.DEF = "WalkText";
let Appearance2348 = browser.currentScene.createNode("Appearance");
let Material2349 = browser.currentScene.createNode("Material");
Material2349.USE = "text_color";
material = Material2349;

appearance = Appearance2348;

let Text2350 = browser.currentScene.createNode("Text");
Text2350.string = new X3D.MFString([new X3D.SFString("Walk")]);
geometry = Text2350;

Transform2345ZZZ.child[1] = Shape2347;

let Shape2351 = browser.currentScene.createNode("Shape");
Shape2351.DEF = "Walk_Back";
let Appearance2352 = browser.currentScene.createNode("Appearance");
let Material2353 = browser.currentScene.createNode("Material");
Material2353.USE = "Clear";
material = Material2353;

appearance = Appearance2352;

let IndexedFaceSet2354 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2354.USE = "Backing";
geometry = IndexedFaceSet2354;

Transform2345ZZZ.child[2] = Shape2351;

Transform2303ZZZ.children[4] = Transform2345;

let Transform2355 = browser.currentScene.createNode("Transform");
Transform2355.DEF = "RunTransform";
Transform2355.translation = new X3D.SFVec3f([15,-1,0]);
let TouchSensor2356 = browser.currentScene.createNode("TouchSensor");
TouchSensor2356.DEF = "Run_Touch";
TouchSensor2356.description = "touch to select";
Transform2355YYY.children = new X3D.MFNode();

Transform2355ZZZ.children[0] = TouchSensor2356;

let Shape2357 = browser.currentScene.createNode("Shape");
Shape2357.DEF = "RunText";
let Appearance2358 = browser.currentScene.createNode("Appearance");
let Material2359 = browser.currentScene.createNode("Material");
Material2359.USE = "text_color";
material = Material2359;

appearance = Appearance2358;

let Text2360 = browser.currentScene.createNode("Text");
Text2360.string = new X3D.MFString([new X3D.SFString("Run")]);
geometry = Text2360;

Transform2355ZZZ.child[1] = Shape2357;

let Shape2361 = browser.currentScene.createNode("Shape");
Shape2361.DEF = "Run_Back";
let Appearance2362 = browser.currentScene.createNode("Appearance");
let Material2363 = browser.currentScene.createNode("Material");
Material2363.USE = "Clear";
material = Material2363;

appearance = Appearance2362;

let IndexedFaceSet2364 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2364.USE = "Backing";
geometry = IndexedFaceSet2364;

Transform2355ZZZ.child[2] = Shape2361;

Transform2303ZZZ.children[5] = Transform2355;

let Transform2365 = browser.currentScene.createNode("Transform");
Transform2365.DEF = "JumpTransform";
Transform2365.translation = new X3D.SFVec3f([18,-1,0]);
let TouchSensor2366 = browser.currentScene.createNode("TouchSensor");
TouchSensor2366.DEF = "Jump_Touch";
TouchSensor2366.description = "touch to select";
Transform2365YYY.children = new X3D.MFNode();

Transform2365ZZZ.children[0] = TouchSensor2366;

let Shape2367 = browser.currentScene.createNode("Shape");
Shape2367.DEF = "Jump";
let Appearance2368 = browser.currentScene.createNode("Appearance");
let Material2369 = browser.currentScene.createNode("Material");
Material2369.USE = "text_color";
material = Material2369;

appearance = Appearance2368;

let Text2370 = browser.currentScene.createNode("Text");
Text2370.string = new X3D.MFString([new X3D.SFString("Jump")]);
geometry = Text2370;

Transform2365ZZZ.child[1] = Shape2367;

let Shape2371 = browser.currentScene.createNode("Shape");
Shape2371.DEF = "Jump_Back";
let Appearance2372 = browser.currentScene.createNode("Appearance");
let Material2373 = browser.currentScene.createNode("Material");
Material2373.USE = "Clear";
material = Material2373;

appearance = Appearance2372;

let IndexedFaceSet2374 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2374.USE = "Backing";
geometry = IndexedFaceSet2374;

Transform2365ZZZ.child[2] = Shape2371;

Transform2303ZZZ.children[6] = Transform2365;

let Transform2375 = browser.currentScene.createNode("Transform");
Transform2375.DEF = "KickTransform";
Transform2375.translation = new X3D.SFVec3f([21,-1,0]);
let TouchSensor2376 = browser.currentScene.createNode("TouchSensor");
TouchSensor2376.DEF = "Kick_Touch";
TouchSensor2376.description = "touch to select";
Transform2375YYY.children = new X3D.MFNode();

Transform2375ZZZ.children[0] = TouchSensor2376;

let Shape2377 = browser.currentScene.createNode("Shape");
Shape2377.DEF = "KickText";
let Appearance2378 = browser.currentScene.createNode("Appearance");
let Material2379 = browser.currentScene.createNode("Material");
Material2379.USE = "text_color";
material = Material2379;

appearance = Appearance2378;

let Text2380 = browser.currentScene.createNode("Text");
Text2380.string = new X3D.MFString([new X3D.SFString("Kick")]);
geometry = Text2380;

Transform2375ZZZ.child[1] = Shape2377;

let Shape2381 = browser.currentScene.createNode("Shape");
Shape2381.DEF = "Kick_Back";
let Appearance2382 = browser.currentScene.createNode("Appearance");
let Material2383 = browser.currentScene.createNode("Material");
Material2383.USE = "Clear";
material = Material2383;

appearance = Appearance2382;

let IndexedFaceSet2384 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2384.USE = "Backing";
geometry = IndexedFaceSet2384;

Transform2375ZZZ.child[2] = Shape2381;

Transform2303ZZZ.children[7] = Transform2375;

let Transform2385 = browser.currentScene.createNode("Transform");
Transform2385.DEF = "Stop_Text";
Transform2385.translation = new X3D.SFVec3f([0,1.4,0]);
let TouchSensor2386 = browser.currentScene.createNode("TouchSensor");
TouchSensor2386.DEF = "Stop_Touch";
TouchSensor2386.description = "touch to select";
Transform2385YYY.children = new X3D.MFNode();

Transform2385ZZZ.children[0] = TouchSensor2386;

let Shape2387 = browser.currentScene.createNode("Shape");
Shape2387.DEF = "StopText";
let Appearance2388 = browser.currentScene.createNode("Appearance");
let Material2389 = browser.currentScene.createNode("Material");
Material2389.USE = "text_color";
material = Material2389;

appearance = Appearance2388;

let Text2390 = browser.currentScene.createNode("Text");
Text2390.string = new X3D.MFString([new X3D.SFString("Stop"), new X3D.SFString("Default Pose")]);
geometry = Text2390;

Transform2385ZZZ.child[1] = Shape2387;

let Shape2391 = browser.currentScene.createNode("Shape");
Shape2391.DEF = "Stop_Back";
let Appearance2392 = browser.currentScene.createNode("Appearance");
let Material2393 = browser.currentScene.createNode("Material");
Material2393.USE = "Clear";
material = Material2393;

appearance = Appearance2392;

let IndexedFaceSet2394 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2394.USE = "Backing";
geometry = IndexedFaceSet2394;

Transform2385ZZZ.child[2] = Shape2391;

Transform2303ZZZ.children[8] = Transform2385;

Transform2302YYY.children = new X3D.MFNode();

Transform2302ZZZ.children[0] = Transform2303;

Group2276ZZZ.children[4] = Transform2302;

browser.currentScene.children[22] = Group2276;

let Group2395 = browser.currentScene.createNode("Group");
Group2395.DEF = "BehaviorSynchronization";
browser.currentScene.children[23] = Group2395;

let ROUTE2396 = browser.currentScene.createNode("ROUTE");
ROUTE2396.fromNode = "StopTimer";
ROUTE2396.fromField = "fraction_changed";
ROUTE2396.toNode = "Stop_HumanoidRoot_TranslationInterpolator";
ROUTE2396.toField = "set_fraction";
browser.currentScene.children[24] = ROUTE2396;

let ROUTE2397 = browser.currentScene.createNode("ROUTE");
ROUTE2397.fromNode = "StopTimer";
ROUTE2397.fromField = "fraction_changed";
ROUTE2397.toNode = "Stop_HumanoidRoot_RotationInterpolator";
ROUTE2397.toField = "set_fraction";
browser.currentScene.children[25] = ROUTE2397;

let ROUTE2398 = browser.currentScene.createNode("ROUTE");
ROUTE2398.fromNode = "StopTimer";
ROUTE2398.fromField = "fraction_changed";
ROUTE2398.toNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE2398.toField = "set_fraction";
browser.currentScene.children[26] = ROUTE2398;

let ROUTE2399 = browser.currentScene.createNode("ROUTE");
ROUTE2399.fromNode = "StopTimer";
ROUTE2399.fromField = "fraction_changed";
ROUTE2399.toNode = "Stop_l_hip_RotationInterpolator";
ROUTE2399.toField = "set_fraction";
browser.currentScene.children[27] = ROUTE2399;

let ROUTE2400 = browser.currentScene.createNode("ROUTE");
ROUTE2400.fromNode = "StopTimer";
ROUTE2400.fromField = "fraction_changed";
ROUTE2400.toNode = "Stop_l_knee_RotationInterpolator";
ROUTE2400.toField = "set_fraction";
browser.currentScene.children[28] = ROUTE2400;

let ROUTE2401 = browser.currentScene.createNode("ROUTE");
ROUTE2401.fromNode = "StopTimer";
ROUTE2401.fromField = "fraction_changed";
ROUTE2401.toNode = "Stop_l_ankle_RotationInterpolator";
ROUTE2401.toField = "set_fraction";
browser.currentScene.children[29] = ROUTE2401;

let ROUTE2402 = browser.currentScene.createNode("ROUTE");
ROUTE2402.fromNode = "StopTimer";
ROUTE2402.fromField = "fraction_changed";
ROUTE2402.toNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE2402.toField = "set_fraction";
browser.currentScene.children[30] = ROUTE2402;

let ROUTE2403 = browser.currentScene.createNode("ROUTE");
ROUTE2403.fromNode = "StopTimer";
ROUTE2403.fromField = "fraction_changed";
ROUTE2403.toNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE2403.toField = "set_fraction";
browser.currentScene.children[31] = ROUTE2403;

let ROUTE2404 = browser.currentScene.createNode("ROUTE");
ROUTE2404.fromNode = "StopTimer";
ROUTE2404.fromField = "fraction_changed";
ROUTE2404.toNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE2404.toField = "set_fraction";
browser.currentScene.children[32] = ROUTE2404;

let ROUTE2405 = browser.currentScene.createNode("ROUTE");
ROUTE2405.fromNode = "StopTimer";
ROUTE2405.fromField = "fraction_changed";
ROUTE2405.toNode = "Stop_r_hip_RotationInterpolator";
ROUTE2405.toField = "set_fraction";
browser.currentScene.children[33] = ROUTE2405;

let ROUTE2406 = browser.currentScene.createNode("ROUTE");
ROUTE2406.fromNode = "StopTimer";
ROUTE2406.fromField = "fraction_changed";
ROUTE2406.toNode = "Stop_r_knee_RotationInterpolator";
ROUTE2406.toField = "set_fraction";
browser.currentScene.children[34] = ROUTE2406;

let ROUTE2407 = browser.currentScene.createNode("ROUTE");
ROUTE2407.fromNode = "StopTimer";
ROUTE2407.fromField = "fraction_changed";
ROUTE2407.toNode = "Stop_r_ankle_RotationInterpolator";
ROUTE2407.toField = "set_fraction";
browser.currentScene.children[35] = ROUTE2407;

let ROUTE2408 = browser.currentScene.createNode("ROUTE");
ROUTE2408.fromNode = "StopTimer";
ROUTE2408.fromField = "fraction_changed";
ROUTE2408.toNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE2408.toField = "set_fraction";
browser.currentScene.children[36] = ROUTE2408;

let ROUTE2409 = browser.currentScene.createNode("ROUTE");
ROUTE2409.fromNode = "StopTimer";
ROUTE2409.fromField = "fraction_changed";
ROUTE2409.toNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE2409.toField = "set_fraction";
browser.currentScene.children[37] = ROUTE2409;

let ROUTE2410 = browser.currentScene.createNode("ROUTE");
ROUTE2410.fromNode = "StopTimer";
ROUTE2410.fromField = "fraction_changed";
ROUTE2410.toNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE2410.toField = "set_fraction";
browser.currentScene.children[38] = ROUTE2410;

let ROUTE2411 = browser.currentScene.createNode("ROUTE");
ROUTE2411.fromNode = "StopTimer";
ROUTE2411.fromField = "fraction_changed";
ROUTE2411.toNode = "Stop_vl5_RotationInterpolator";
ROUTE2411.toField = "set_fraction";
browser.currentScene.children[39] = ROUTE2411;

let ROUTE2412 = browser.currentScene.createNode("ROUTE");
ROUTE2412.fromNode = "StopTimer";
ROUTE2412.fromField = "fraction_changed";
ROUTE2412.toNode = "Stop_vl4_RotationInterpolator";
ROUTE2412.toField = "set_fraction";
browser.currentScene.children[40] = ROUTE2412;

let ROUTE2413 = browser.currentScene.createNode("ROUTE");
ROUTE2413.fromNode = "StopTimer";
ROUTE2413.fromField = "fraction_changed";
ROUTE2413.toNode = "Stop_vl3_RotationInterpolator";
ROUTE2413.toField = "set_fraction";
browser.currentScene.children[41] = ROUTE2413;

let ROUTE2414 = browser.currentScene.createNode("ROUTE");
ROUTE2414.fromNode = "StopTimer";
ROUTE2414.fromField = "fraction_changed";
ROUTE2414.toNode = "Stop_vl2_RotationInterpolator";
ROUTE2414.toField = "set_fraction";
browser.currentScene.children[42] = ROUTE2414;

let ROUTE2415 = browser.currentScene.createNode("ROUTE");
ROUTE2415.fromNode = "StopTimer";
ROUTE2415.fromField = "fraction_changed";
ROUTE2415.toNode = "Stop_vl1_RotationInterpolator";
ROUTE2415.toField = "set_fraction";
browser.currentScene.children[43] = ROUTE2415;

let ROUTE2416 = browser.currentScene.createNode("ROUTE");
ROUTE2416.fromNode = "StopTimer";
ROUTE2416.fromField = "fraction_changed";
ROUTE2416.toNode = "Stop_vt12_RotationInterpolator";
ROUTE2416.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE2416;

let ROUTE2417 = browser.currentScene.createNode("ROUTE");
ROUTE2417.fromNode = "StopTimer";
ROUTE2417.fromField = "fraction_changed";
ROUTE2417.toNode = "Stop_vt11_RotationInterpolator";
ROUTE2417.toField = "set_fraction";
browser.currentScene.children[45] = ROUTE2417;

let ROUTE2418 = browser.currentScene.createNode("ROUTE");
ROUTE2418.fromNode = "StopTimer";
ROUTE2418.fromField = "fraction_changed";
ROUTE2418.toNode = "Stop_vt10_RotationInterpolator";
ROUTE2418.toField = "set_fraction";
browser.currentScene.children[46] = ROUTE2418;

let ROUTE2419 = browser.currentScene.createNode("ROUTE");
ROUTE2419.fromNode = "StopTimer";
ROUTE2419.fromField = "fraction_changed";
ROUTE2419.toNode = "Stop_vt9_RotationInterpolator";
ROUTE2419.toField = "set_fraction";
browser.currentScene.children[47] = ROUTE2419;

let ROUTE2420 = browser.currentScene.createNode("ROUTE");
ROUTE2420.fromNode = "StopTimer";
ROUTE2420.fromField = "fraction_changed";
ROUTE2420.toNode = "Stop_vt8_RotationInterpolator";
ROUTE2420.toField = "set_fraction";
browser.currentScene.children[48] = ROUTE2420;

let ROUTE2421 = browser.currentScene.createNode("ROUTE");
ROUTE2421.fromNode = "StopTimer";
ROUTE2421.fromField = "fraction_changed";
ROUTE2421.toNode = "Stop_vt7_RotationInterpolator";
ROUTE2421.toField = "set_fraction";
browser.currentScene.children[49] = ROUTE2421;

let ROUTE2422 = browser.currentScene.createNode("ROUTE");
ROUTE2422.fromNode = "StopTimer";
ROUTE2422.fromField = "fraction_changed";
ROUTE2422.toNode = "Stop_vt6_RotationInterpolator";
ROUTE2422.toField = "set_fraction";
browser.currentScene.children[50] = ROUTE2422;

let ROUTE2423 = browser.currentScene.createNode("ROUTE");
ROUTE2423.fromNode = "StopTimer";
ROUTE2423.fromField = "fraction_changed";
ROUTE2423.toNode = "Stop_vt5_RotationInterpolator";
ROUTE2423.toField = "set_fraction";
browser.currentScene.children[51] = ROUTE2423;

let ROUTE2424 = browser.currentScene.createNode("ROUTE");
ROUTE2424.fromNode = "StopTimer";
ROUTE2424.fromField = "fraction_changed";
ROUTE2424.toNode = "Stop_vt4_RotationInterpolator";
ROUTE2424.toField = "set_fraction";
browser.currentScene.children[52] = ROUTE2424;

let ROUTE2425 = browser.currentScene.createNode("ROUTE");
ROUTE2425.fromNode = "StopTimer";
ROUTE2425.fromField = "fraction_changed";
ROUTE2425.toNode = "Stop_vt3_RotationInterpolator";
ROUTE2425.toField = "set_fraction";
browser.currentScene.children[53] = ROUTE2425;

let ROUTE2426 = browser.currentScene.createNode("ROUTE");
ROUTE2426.fromNode = "StopTimer";
ROUTE2426.fromField = "fraction_changed";
ROUTE2426.toNode = "Stop_vt2_RotationInterpolator";
ROUTE2426.toField = "set_fraction";
browser.currentScene.children[54] = ROUTE2426;

let ROUTE2427 = browser.currentScene.createNode("ROUTE");
ROUTE2427.fromNode = "StopTimer";
ROUTE2427.fromField = "fraction_changed";
ROUTE2427.toNode = "Stop_vt1_RotationInterpolator";
ROUTE2427.toField = "set_fraction";
browser.currentScene.children[55] = ROUTE2427;

let ROUTE2428 = browser.currentScene.createNode("ROUTE");
ROUTE2428.fromNode = "StopTimer";
ROUTE2428.fromField = "fraction_changed";
ROUTE2428.toNode = "Stop_vc7_RotationInterpolator";
ROUTE2428.toField = "set_fraction";
browser.currentScene.children[56] = ROUTE2428;

let ROUTE2429 = browser.currentScene.createNode("ROUTE");
ROUTE2429.fromNode = "StopTimer";
ROUTE2429.fromField = "fraction_changed";
ROUTE2429.toNode = "Stop_vc6_RotationInterpolator";
ROUTE2429.toField = "set_fraction";
browser.currentScene.children[57] = ROUTE2429;

let ROUTE2430 = browser.currentScene.createNode("ROUTE");
ROUTE2430.fromNode = "StopTimer";
ROUTE2430.fromField = "fraction_changed";
ROUTE2430.toNode = "Stop_vc5_RotationInterpolator";
ROUTE2430.toField = "set_fraction";
browser.currentScene.children[58] = ROUTE2430;

let ROUTE2431 = browser.currentScene.createNode("ROUTE");
ROUTE2431.fromNode = "StopTimer";
ROUTE2431.fromField = "fraction_changed";
ROUTE2431.toNode = "Stop_vc4_RotationInterpolator";
ROUTE2431.toField = "set_fraction";
browser.currentScene.children[59] = ROUTE2431;

let ROUTE2432 = browser.currentScene.createNode("ROUTE");
ROUTE2432.fromNode = "StopTimer";
ROUTE2432.fromField = "fraction_changed";
ROUTE2432.toNode = "Stop_vc3_RotationInterpolator";
ROUTE2432.toField = "set_fraction";
browser.currentScene.children[60] = ROUTE2432;

let ROUTE2433 = browser.currentScene.createNode("ROUTE");
ROUTE2433.fromNode = "StopTimer";
ROUTE2433.fromField = "fraction_changed";
ROUTE2433.toNode = "Stop_vc2_RotationInterpolator";
ROUTE2433.toField = "set_fraction";
browser.currentScene.children[61] = ROUTE2433;

let ROUTE2434 = browser.currentScene.createNode("ROUTE");
ROUTE2434.fromNode = "StopTimer";
ROUTE2434.fromField = "fraction_changed";
ROUTE2434.toNode = "Stop_vc1_RotationInterpolator";
ROUTE2434.toField = "set_fraction";
browser.currentScene.children[62] = ROUTE2434;

let ROUTE2435 = browser.currentScene.createNode("ROUTE");
ROUTE2435.fromNode = "StopTimer";
ROUTE2435.fromField = "fraction_changed";
ROUTE2435.toNode = "Stop_skullbase_RotationInterpolator";
ROUTE2435.toField = "set_fraction";
browser.currentScene.children[63] = ROUTE2435;

let ROUTE2436 = browser.currentScene.createNode("ROUTE");
ROUTE2436.fromNode = "StopTimer";
ROUTE2436.fromField = "fraction_changed";
ROUTE2436.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE2436.toField = "set_fraction";
browser.currentScene.children[64] = ROUTE2436;

let ROUTE2437 = browser.currentScene.createNode("ROUTE");
ROUTE2437.fromNode = "StopTimer";
ROUTE2437.fromField = "fraction_changed";
ROUTE2437.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE2437.toField = "set_fraction";
browser.currentScene.children[65] = ROUTE2437;

let ROUTE2438 = browser.currentScene.createNode("ROUTE");
ROUTE2438.fromNode = "StopTimer";
ROUTE2438.fromField = "fraction_changed";
ROUTE2438.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE2438.toField = "set_fraction";
browser.currentScene.children[66] = ROUTE2438;

let ROUTE2439 = browser.currentScene.createNode("ROUTE");
ROUTE2439.fromNode = "StopTimer";
ROUTE2439.fromField = "fraction_changed";
ROUTE2439.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE2439.toField = "set_fraction";
browser.currentScene.children[67] = ROUTE2439;

let ROUTE2440 = browser.currentScene.createNode("ROUTE");
ROUTE2440.fromNode = "StopTimer";
ROUTE2440.fromField = "fraction_changed";
ROUTE2440.toNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE2440.toField = "set_fraction";
browser.currentScene.children[68] = ROUTE2440;

let ROUTE2441 = browser.currentScene.createNode("ROUTE");
ROUTE2441.fromNode = "StopTimer";
ROUTE2441.fromField = "fraction_changed";
ROUTE2441.toNode = "Stop_l_elbow_RotationInterpolator";
ROUTE2441.toField = "set_fraction";
browser.currentScene.children[69] = ROUTE2441;

let ROUTE2442 = browser.currentScene.createNode("ROUTE");
ROUTE2442.fromNode = "StopTimer";
ROUTE2442.fromField = "fraction_changed";
ROUTE2442.toNode = "Stop_l_wrist_RotationInterpolator";
ROUTE2442.toField = "set_fraction";
browser.currentScene.children[70] = ROUTE2442;

let ROUTE2443 = browser.currentScene.createNode("ROUTE");
ROUTE2443.fromNode = "StopTimer";
ROUTE2443.fromField = "fraction_changed";
ROUTE2443.toNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE2443.toField = "set_fraction";
browser.currentScene.children[71] = ROUTE2443;

let ROUTE2444 = browser.currentScene.createNode("ROUTE");
ROUTE2444.fromNode = "StopTimer";
ROUTE2444.fromField = "fraction_changed";
ROUTE2444.toNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE2444.toField = "set_fraction";
browser.currentScene.children[72] = ROUTE2444;

let ROUTE2445 = browser.currentScene.createNode("ROUTE");
ROUTE2445.fromNode = "StopTimer";
ROUTE2445.fromField = "fraction_changed";
ROUTE2445.toNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE2445.toField = "set_fraction";
browser.currentScene.children[73] = ROUTE2445;

let ROUTE2446 = browser.currentScene.createNode("ROUTE");
ROUTE2446.fromNode = "StopTimer";
ROUTE2446.fromField = "fraction_changed";
ROUTE2446.toNode = "Stop_l_index0_RotationInterpolator";
ROUTE2446.toField = "set_fraction";
browser.currentScene.children[74] = ROUTE2446;

let ROUTE2447 = browser.currentScene.createNode("ROUTE");
ROUTE2447.fromNode = "StopTimer";
ROUTE2447.fromField = "fraction_changed";
ROUTE2447.toNode = "Stop_l_index1_RotationInterpolator";
ROUTE2447.toField = "set_fraction";
browser.currentScene.children[75] = ROUTE2447;

let ROUTE2448 = browser.currentScene.createNode("ROUTE");
ROUTE2448.fromNode = "StopTimer";
ROUTE2448.fromField = "fraction_changed";
ROUTE2448.toNode = "Stop_l_index2_RotationInterpolator";
ROUTE2448.toField = "set_fraction";
browser.currentScene.children[76] = ROUTE2448;

let ROUTE2449 = browser.currentScene.createNode("ROUTE");
ROUTE2449.fromNode = "StopTimer";
ROUTE2449.fromField = "fraction_changed";
ROUTE2449.toNode = "Stop_l_index3_RotationInterpolator";
ROUTE2449.toField = "set_fraction";
browser.currentScene.children[77] = ROUTE2449;

let ROUTE2450 = browser.currentScene.createNode("ROUTE");
ROUTE2450.fromNode = "StopTimer";
ROUTE2450.fromField = "fraction_changed";
ROUTE2450.toNode = "Stop_l_middle0_RotationInterpolator";
ROUTE2450.toField = "set_fraction";
browser.currentScene.children[78] = ROUTE2450;

let ROUTE2451 = browser.currentScene.createNode("ROUTE");
ROUTE2451.fromNode = "StopTimer";
ROUTE2451.fromField = "fraction_changed";
ROUTE2451.toNode = "Stop_l_middle1_RotationInterpolator";
ROUTE2451.toField = "set_fraction";
browser.currentScene.children[79] = ROUTE2451;

let ROUTE2452 = browser.currentScene.createNode("ROUTE");
ROUTE2452.fromNode = "StopTimer";
ROUTE2452.fromField = "fraction_changed";
ROUTE2452.toNode = "Stop_l_middle2_RotationInterpolator";
ROUTE2452.toField = "set_fraction";
browser.currentScene.children[80] = ROUTE2452;

let ROUTE2453 = browser.currentScene.createNode("ROUTE");
ROUTE2453.fromNode = "StopTimer";
ROUTE2453.fromField = "fraction_changed";
ROUTE2453.toNode = "Stop_l_middle3_RotationInterpolator";
ROUTE2453.toField = "set_fraction";
browser.currentScene.children[81] = ROUTE2453;

let ROUTE2454 = browser.currentScene.createNode("ROUTE");
ROUTE2454.fromNode = "StopTimer";
ROUTE2454.fromField = "fraction_changed";
ROUTE2454.toNode = "Stop_l_ring0_RotationInterpolator";
ROUTE2454.toField = "set_fraction";
browser.currentScene.children[82] = ROUTE2454;

let ROUTE2455 = browser.currentScene.createNode("ROUTE");
ROUTE2455.fromNode = "StopTimer";
ROUTE2455.fromField = "fraction_changed";
ROUTE2455.toNode = "Stop_l_ring1_RotationInterpolator";
ROUTE2455.toField = "set_fraction";
browser.currentScene.children[83] = ROUTE2455;

let ROUTE2456 = browser.currentScene.createNode("ROUTE");
ROUTE2456.fromNode = "StopTimer";
ROUTE2456.fromField = "fraction_changed";
ROUTE2456.toNode = "Stop_l_ring2_RotationInterpolator";
ROUTE2456.toField = "set_fraction";
browser.currentScene.children[84] = ROUTE2456;

let ROUTE2457 = browser.currentScene.createNode("ROUTE");
ROUTE2457.fromNode = "StopTimer";
ROUTE2457.fromField = "fraction_changed";
ROUTE2457.toNode = "Stop_l_ring3_RotationInterpolator";
ROUTE2457.toField = "set_fraction";
browser.currentScene.children[85] = ROUTE2457;

let ROUTE2458 = browser.currentScene.createNode("ROUTE");
ROUTE2458.fromNode = "StopTimer";
ROUTE2458.fromField = "fraction_changed";
ROUTE2458.toNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE2458.toField = "set_fraction";
browser.currentScene.children[86] = ROUTE2458;

let ROUTE2459 = browser.currentScene.createNode("ROUTE");
ROUTE2459.fromNode = "StopTimer";
ROUTE2459.fromField = "fraction_changed";
ROUTE2459.toNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE2459.toField = "set_fraction";
browser.currentScene.children[87] = ROUTE2459;

let ROUTE2460 = browser.currentScene.createNode("ROUTE");
ROUTE2460.fromNode = "StopTimer";
ROUTE2460.fromField = "fraction_changed";
ROUTE2460.toNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE2460.toField = "set_fraction";
browser.currentScene.children[88] = ROUTE2460;

let ROUTE2461 = browser.currentScene.createNode("ROUTE");
ROUTE2461.fromNode = "StopTimer";
ROUTE2461.fromField = "fraction_changed";
ROUTE2461.toNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE2461.toField = "set_fraction";
browser.currentScene.children[89] = ROUTE2461;

let ROUTE2462 = browser.currentScene.createNode("ROUTE");
ROUTE2462.fromNode = "StopTimer";
ROUTE2462.fromField = "fraction_changed";
ROUTE2462.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE2462.toField = "set_fraction";
browser.currentScene.children[90] = ROUTE2462;

let ROUTE2463 = browser.currentScene.createNode("ROUTE");
ROUTE2463.fromNode = "StopTimer";
ROUTE2463.fromField = "fraction_changed";
ROUTE2463.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE2463.toField = "set_fraction";
browser.currentScene.children[91] = ROUTE2463;

let ROUTE2464 = browser.currentScene.createNode("ROUTE");
ROUTE2464.fromNode = "StopTimer";
ROUTE2464.fromField = "fraction_changed";
ROUTE2464.toNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE2464.toField = "set_fraction";
browser.currentScene.children[92] = ROUTE2464;

let ROUTE2465 = browser.currentScene.createNode("ROUTE");
ROUTE2465.fromNode = "StopTimer";
ROUTE2465.fromField = "fraction_changed";
ROUTE2465.toNode = "Stop_r_elbow_RotationInterpolator";
ROUTE2465.toField = "set_fraction";
browser.currentScene.children[93] = ROUTE2465;

let ROUTE2466 = browser.currentScene.createNode("ROUTE");
ROUTE2466.fromNode = "StopTimer";
ROUTE2466.fromField = "fraction_changed";
ROUTE2466.toNode = "Stop_r_wrist_RotationInterpolator";
ROUTE2466.toField = "set_fraction";
browser.currentScene.children[94] = ROUTE2466;

let ROUTE2467 = browser.currentScene.createNode("ROUTE");
ROUTE2467.fromNode = "StopTimer";
ROUTE2467.fromField = "fraction_changed";
ROUTE2467.toNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE2467.toField = "set_fraction";
browser.currentScene.children[95] = ROUTE2467;

let ROUTE2468 = browser.currentScene.createNode("ROUTE");
ROUTE2468.fromNode = "StopTimer";
ROUTE2468.fromField = "fraction_changed";
ROUTE2468.toNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE2468.toField = "set_fraction";
browser.currentScene.children[96] = ROUTE2468;

let ROUTE2469 = browser.currentScene.createNode("ROUTE");
ROUTE2469.fromNode = "StopTimer";
ROUTE2469.fromField = "fraction_changed";
ROUTE2469.toNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE2469.toField = "set_fraction";
browser.currentScene.children[97] = ROUTE2469;

let ROUTE2470 = browser.currentScene.createNode("ROUTE");
ROUTE2470.fromNode = "StopTimer";
ROUTE2470.fromField = "fraction_changed";
ROUTE2470.toNode = "Stop_r_index0_RotationInterpolator";
ROUTE2470.toField = "set_fraction";
browser.currentScene.children[98] = ROUTE2470;

let ROUTE2471 = browser.currentScene.createNode("ROUTE");
ROUTE2471.fromNode = "StopTimer";
ROUTE2471.fromField = "fraction_changed";
ROUTE2471.toNode = "Stop_r_index1_RotationInterpolator";
ROUTE2471.toField = "set_fraction";
browser.currentScene.children[99] = ROUTE2471;

let ROUTE2472 = browser.currentScene.createNode("ROUTE");
ROUTE2472.fromNode = "StopTimer";
ROUTE2472.fromField = "fraction_changed";
ROUTE2472.toNode = "Stop_r_index2_RotationInterpolator";
ROUTE2472.toField = "set_fraction";
browser.currentScene.children[100] = ROUTE2472;

let ROUTE2473 = browser.currentScene.createNode("ROUTE");
ROUTE2473.fromNode = "StopTimer";
ROUTE2473.fromField = "fraction_changed";
ROUTE2473.toNode = "Stop_r_index3_RotationInterpolator";
ROUTE2473.toField = "set_fraction";
browser.currentScene.children[101] = ROUTE2473;

let ROUTE2474 = browser.currentScene.createNode("ROUTE");
ROUTE2474.fromNode = "StopTimer";
ROUTE2474.fromField = "fraction_changed";
ROUTE2474.toNode = "Stop_r_middle0_RotationInterpolator";
ROUTE2474.toField = "set_fraction";
browser.currentScene.children[102] = ROUTE2474;

let ROUTE2475 = browser.currentScene.createNode("ROUTE");
ROUTE2475.fromNode = "StopTimer";
ROUTE2475.fromField = "fraction_changed";
ROUTE2475.toNode = "Stop_r_middle1_RotationInterpolator";
ROUTE2475.toField = "set_fraction";
browser.currentScene.children[103] = ROUTE2475;

let ROUTE2476 = browser.currentScene.createNode("ROUTE");
ROUTE2476.fromNode = "StopTimer";
ROUTE2476.fromField = "fraction_changed";
ROUTE2476.toNode = "Stop_r_middle2_RotationInterpolator";
ROUTE2476.toField = "set_fraction";
browser.currentScene.children[104] = ROUTE2476;

let ROUTE2477 = browser.currentScene.createNode("ROUTE");
ROUTE2477.fromNode = "StopTimer";
ROUTE2477.fromField = "fraction_changed";
ROUTE2477.toNode = "Stop_r_middle3_RotationInterpolator";
ROUTE2477.toField = "set_fraction";
browser.currentScene.children[105] = ROUTE2477;

let ROUTE2478 = browser.currentScene.createNode("ROUTE");
ROUTE2478.fromNode = "StopTimer";
ROUTE2478.fromField = "fraction_changed";
ROUTE2478.toNode = "Stop_r_ring0_RotationInterpolator";
ROUTE2478.toField = "set_fraction";
browser.currentScene.children[106] = ROUTE2478;

let ROUTE2479 = browser.currentScene.createNode("ROUTE");
ROUTE2479.fromNode = "StopTimer";
ROUTE2479.fromField = "fraction_changed";
ROUTE2479.toNode = "Stop_r_ring1_RotationInterpolator";
ROUTE2479.toField = "set_fraction";
browser.currentScene.children[107] = ROUTE2479;

let ROUTE2480 = browser.currentScene.createNode("ROUTE");
ROUTE2480.fromNode = "StopTimer";
ROUTE2480.fromField = "fraction_changed";
ROUTE2480.toNode = "Stop_r_ring2_RotationInterpolator";
ROUTE2480.toField = "set_fraction";
browser.currentScene.children[108] = ROUTE2480;

let ROUTE2481 = browser.currentScene.createNode("ROUTE");
ROUTE2481.fromNode = "StopTimer";
ROUTE2481.fromField = "fraction_changed";
ROUTE2481.toNode = "Stop_r_ring3_RotationInterpolator";
ROUTE2481.toField = "set_fraction";
browser.currentScene.children[109] = ROUTE2481;

let ROUTE2482 = browser.currentScene.createNode("ROUTE");
ROUTE2482.fromNode = "StopTimer";
ROUTE2482.fromField = "fraction_changed";
ROUTE2482.toNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE2482.toField = "set_fraction";
browser.currentScene.children[110] = ROUTE2482;

let ROUTE2483 = browser.currentScene.createNode("ROUTE");
ROUTE2483.fromNode = "StopTimer";
ROUTE2483.fromField = "fraction_changed";
ROUTE2483.toNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE2483.toField = "set_fraction";
browser.currentScene.children[111] = ROUTE2483;

let ROUTE2484 = browser.currentScene.createNode("ROUTE");
ROUTE2484.fromNode = "StopTimer";
ROUTE2484.fromField = "fraction_changed";
ROUTE2484.toNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE2484.toField = "set_fraction";
browser.currentScene.children[112] = ROUTE2484;

let ROUTE2485 = browser.currentScene.createNode("ROUTE");
ROUTE2485.fromNode = "StopTimer";
ROUTE2485.fromField = "fraction_changed";
ROUTE2485.toNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE2485.toField = "set_fraction";
browser.currentScene.children[113] = ROUTE2485;

let ROUTE2486 = browser.currentScene.createNode("ROUTE");
ROUTE2486.fromNode = "Stop_HumanoidRoot_TranslationInterpolator";
ROUTE2486.fromField = "value_changed";
ROUTE2486.toNode = "hanim_humanoid_root";
ROUTE2486.toField = "set_translation";
browser.currentScene.children[114] = ROUTE2486;

let ROUTE2487 = browser.currentScene.createNode("ROUTE");
ROUTE2487.fromNode = "Stop_HumanoidRoot_RotationInterpolator";
ROUTE2487.fromField = "value_changed";
ROUTE2487.toNode = "hanim_humanoid_root";
ROUTE2487.toField = "set_rotation";
browser.currentScene.children[115] = ROUTE2487;

let ROUTE2488 = browser.currentScene.createNode("ROUTE");
ROUTE2488.fromNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE2488.fromField = "value_changed";
ROUTE2488.toNode = "hanim_sacroiliac";
ROUTE2488.toField = "set_rotation";
browser.currentScene.children[116] = ROUTE2488;

let ROUTE2489 = browser.currentScene.createNode("ROUTE");
ROUTE2489.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE2489.fromField = "value_changed";
ROUTE2489.toNode = "hanim_l_hip";
ROUTE2489.toField = "set_rotation";
browser.currentScene.children[117] = ROUTE2489;

let ROUTE2490 = browser.currentScene.createNode("ROUTE");
ROUTE2490.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE2490.fromField = "value_changed";
ROUTE2490.toNode = "hanim_l_knee";
ROUTE2490.toField = "set_rotation";
browser.currentScene.children[118] = ROUTE2490;

let ROUTE2491 = browser.currentScene.createNode("ROUTE");
ROUTE2491.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE2491.fromField = "value_changed";
ROUTE2491.toNode = "hanim_l_ankle";
ROUTE2491.toField = "set_rotation";
browser.currentScene.children[119] = ROUTE2491;

let ROUTE2492 = browser.currentScene.createNode("ROUTE");
ROUTE2492.fromNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE2492.fromField = "value_changed";
ROUTE2492.toNode = "hanim_l_subtalar";
ROUTE2492.toField = "set_rotation";
browser.currentScene.children[120] = ROUTE2492;

let ROUTE2493 = browser.currentScene.createNode("ROUTE");
ROUTE2493.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE2493.fromField = "value_changed";
ROUTE2493.toNode = "hanim_l_midtarsal";
ROUTE2493.toField = "set_rotation";
browser.currentScene.children[121] = ROUTE2493;

let ROUTE2494 = browser.currentScene.createNode("ROUTE");
ROUTE2494.fromNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE2494.fromField = "value_changed";
ROUTE2494.toNode = "hanim_l_metatarsal";
ROUTE2494.toField = "set_rotation";
browser.currentScene.children[122] = ROUTE2494;

let ROUTE2495 = browser.currentScene.createNode("ROUTE");
ROUTE2495.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE2495.fromField = "value_changed";
ROUTE2495.toNode = "hanim_r_hip";
ROUTE2495.toField = "set_rotation";
browser.currentScene.children[123] = ROUTE2495;

let ROUTE2496 = browser.currentScene.createNode("ROUTE");
ROUTE2496.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE2496.fromField = "value_changed";
ROUTE2496.toNode = "hanim_r_knee";
ROUTE2496.toField = "set_rotation";
browser.currentScene.children[124] = ROUTE2496;

let ROUTE2497 = browser.currentScene.createNode("ROUTE");
ROUTE2497.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE2497.fromField = "value_changed";
ROUTE2497.toNode = "hanim_r_ankle";
ROUTE2497.toField = "set_rotation";
browser.currentScene.children[125] = ROUTE2497;

let ROUTE2498 = browser.currentScene.createNode("ROUTE");
ROUTE2498.fromNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE2498.fromField = "value_changed";
ROUTE2498.toNode = "hanim_r_subtalar";
ROUTE2498.toField = "set_rotation";
browser.currentScene.children[126] = ROUTE2498;

let ROUTE2499 = browser.currentScene.createNode("ROUTE");
ROUTE2499.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE2499.fromField = "value_changed";
ROUTE2499.toNode = "hanim_r_midtarsal";
ROUTE2499.toField = "set_rotation";
browser.currentScene.children[127] = ROUTE2499;

let ROUTE2500 = browser.currentScene.createNode("ROUTE");
ROUTE2500.fromNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE2500.fromField = "value_changed";
ROUTE2500.toNode = "hanim_r_metatarsal";
ROUTE2500.toField = "set_rotation";
browser.currentScene.children[128] = ROUTE2500;

let ROUTE2501 = browser.currentScene.createNode("ROUTE");
ROUTE2501.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE2501.fromField = "value_changed";
ROUTE2501.toNode = "hanim_vl5";
ROUTE2501.toField = "set_rotation";
browser.currentScene.children[129] = ROUTE2501;

let ROUTE2502 = browser.currentScene.createNode("ROUTE");
ROUTE2502.fromNode = "Stop_vl4_RotationInterpolator";
ROUTE2502.fromField = "value_changed";
ROUTE2502.toNode = "hanim_vl4";
ROUTE2502.toField = "set_rotation";
browser.currentScene.children[130] = ROUTE2502;

let ROUTE2503 = browser.currentScene.createNode("ROUTE");
ROUTE2503.fromNode = "Stop_vl3_RotationInterpolator";
ROUTE2503.fromField = "value_changed";
ROUTE2503.toNode = "hanim_vl3";
ROUTE2503.toField = "set_rotation";
browser.currentScene.children[131] = ROUTE2503;

let ROUTE2504 = browser.currentScene.createNode("ROUTE");
ROUTE2504.fromNode = "Stop_vl2_RotationInterpolator";
ROUTE2504.fromField = "value_changed";
ROUTE2504.toNode = "hanim_vl2";
ROUTE2504.toField = "set_rotation";
browser.currentScene.children[132] = ROUTE2504;

let ROUTE2505 = browser.currentScene.createNode("ROUTE");
ROUTE2505.fromNode = "Stop_vl1_RotationInterpolator";
ROUTE2505.fromField = "value_changed";
ROUTE2505.toNode = "hanim_vl1";
ROUTE2505.toField = "set_rotation";
browser.currentScene.children[133] = ROUTE2505;

let ROUTE2506 = browser.currentScene.createNode("ROUTE");
ROUTE2506.fromNode = "Stop_vt12_RotationInterpolator";
ROUTE2506.fromField = "value_changed";
ROUTE2506.toNode = "hanim_vt12";
ROUTE2506.toField = "set_rotation";
browser.currentScene.children[134] = ROUTE2506;

let ROUTE2507 = browser.currentScene.createNode("ROUTE");
ROUTE2507.fromNode = "Stop_vt11_RotationInterpolator";
ROUTE2507.fromField = "value_changed";
ROUTE2507.toNode = "hanim_vt11";
ROUTE2507.toField = "set_rotation";
browser.currentScene.children[135] = ROUTE2507;

let ROUTE2508 = browser.currentScene.createNode("ROUTE");
ROUTE2508.fromNode = "Stop_vt10_RotationInterpolator";
ROUTE2508.fromField = "value_changed";
ROUTE2508.toNode = "hanim_vt10";
ROUTE2508.toField = "set_rotation";
browser.currentScene.children[136] = ROUTE2508;

let ROUTE2509 = browser.currentScene.createNode("ROUTE");
ROUTE2509.fromNode = "Stop_vt9_RotationInterpolator";
ROUTE2509.fromField = "value_changed";
ROUTE2509.toNode = "hanim_vt9";
ROUTE2509.toField = "set_rotation";
browser.currentScene.children[137] = ROUTE2509;

let ROUTE2510 = browser.currentScene.createNode("ROUTE");
ROUTE2510.fromNode = "Stop_vt8_RotationInterpolator";
ROUTE2510.fromField = "value_changed";
ROUTE2510.toNode = "hanim_vt8";
ROUTE2510.toField = "set_rotation";
browser.currentScene.children[138] = ROUTE2510;

let ROUTE2511 = browser.currentScene.createNode("ROUTE");
ROUTE2511.fromNode = "Stop_vt7_RotationInterpolator";
ROUTE2511.fromField = "value_changed";
ROUTE2511.toNode = "hanim_vt7";
ROUTE2511.toField = "set_rotation";
browser.currentScene.children[139] = ROUTE2511;

let ROUTE2512 = browser.currentScene.createNode("ROUTE");
ROUTE2512.fromNode = "Stop_vt6_RotationInterpolator";
ROUTE2512.fromField = "value_changed";
ROUTE2512.toNode = "hanim_vt6";
ROUTE2512.toField = "set_rotation";
browser.currentScene.children[140] = ROUTE2512;

let ROUTE2513 = browser.currentScene.createNode("ROUTE");
ROUTE2513.fromNode = "Stop_vt5_RotationInterpolator";
ROUTE2513.fromField = "value_changed";
ROUTE2513.toNode = "hanim_vt5";
ROUTE2513.toField = "set_rotation";
browser.currentScene.children[141] = ROUTE2513;

let ROUTE2514 = browser.currentScene.createNode("ROUTE");
ROUTE2514.fromNode = "Stop_vt4_RotationInterpolator";
ROUTE2514.fromField = "value_changed";
ROUTE2514.toNode = "hanim_vt4";
ROUTE2514.toField = "set_rotation";
browser.currentScene.children[142] = ROUTE2514;

let ROUTE2515 = browser.currentScene.createNode("ROUTE");
ROUTE2515.fromNode = "Stop_vt3_RotationInterpolator";
ROUTE2515.fromField = "value_changed";
ROUTE2515.toNode = "hanim_vt3";
ROUTE2515.toField = "set_rotation";
browser.currentScene.children[143] = ROUTE2515;

let ROUTE2516 = browser.currentScene.createNode("ROUTE");
ROUTE2516.fromNode = "Stop_vt2_RotationInterpolator";
ROUTE2516.fromField = "value_changed";
ROUTE2516.toNode = "hanim_vt2";
ROUTE2516.toField = "set_rotation";
browser.currentScene.children[144] = ROUTE2516;

let ROUTE2517 = browser.currentScene.createNode("ROUTE");
ROUTE2517.fromNode = "Stop_vt1_RotationInterpolator";
ROUTE2517.fromField = "value_changed";
ROUTE2517.toNode = "hanim_vt1";
ROUTE2517.toField = "set_rotation";
browser.currentScene.children[145] = ROUTE2517;

let ROUTE2518 = browser.currentScene.createNode("ROUTE");
ROUTE2518.fromNode = "Stop_vc7_RotationInterpolator";
ROUTE2518.fromField = "value_changed";
ROUTE2518.toNode = "hanim_vc7";
ROUTE2518.toField = "set_rotation";
browser.currentScene.children[146] = ROUTE2518;

let ROUTE2519 = browser.currentScene.createNode("ROUTE");
ROUTE2519.fromNode = "Stop_vc6_RotationInterpolator";
ROUTE2519.fromField = "value_changed";
ROUTE2519.toNode = "hanim_vc6";
ROUTE2519.toField = "set_rotation";
browser.currentScene.children[147] = ROUTE2519;

let ROUTE2520 = browser.currentScene.createNode("ROUTE");
ROUTE2520.fromNode = "Stop_vc5_RotationInterpolator";
ROUTE2520.fromField = "value_changed";
ROUTE2520.toNode = "hanim_vc5";
ROUTE2520.toField = "set_rotation";
browser.currentScene.children[148] = ROUTE2520;

let ROUTE2521 = browser.currentScene.createNode("ROUTE");
ROUTE2521.fromNode = "Stop_vc4_RotationInterpolator";
ROUTE2521.fromField = "value_changed";
ROUTE2521.toNode = "hanim_vc4";
ROUTE2521.toField = "set_rotation";
browser.currentScene.children[149] = ROUTE2521;

let ROUTE2522 = browser.currentScene.createNode("ROUTE");
ROUTE2522.fromNode = "Stop_vc3_RotationInterpolator";
ROUTE2522.fromField = "value_changed";
ROUTE2522.toNode = "hanim_vc3";
ROUTE2522.toField = "set_rotation";
browser.currentScene.children[150] = ROUTE2522;

let ROUTE2523 = browser.currentScene.createNode("ROUTE");
ROUTE2523.fromNode = "Stop_vc2_RotationInterpolator";
ROUTE2523.fromField = "value_changed";
ROUTE2523.toNode = "hanim_vc2";
ROUTE2523.toField = "set_rotation";
browser.currentScene.children[151] = ROUTE2523;

let ROUTE2524 = browser.currentScene.createNode("ROUTE");
ROUTE2524.fromNode = "Stop_vc1_RotationInterpolator";
ROUTE2524.fromField = "value_changed";
ROUTE2524.toNode = "hanim_vc1";
ROUTE2524.toField = "set_rotation";
browser.currentScene.children[152] = ROUTE2524;

let ROUTE2525 = browser.currentScene.createNode("ROUTE");
ROUTE2525.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE2525.fromField = "value_changed";
ROUTE2525.toNode = "hanim_skullbase";
ROUTE2525.toField = "set_rotation";
browser.currentScene.children[153] = ROUTE2525;

let ROUTE2526 = browser.currentScene.createNode("ROUTE");
ROUTE2526.fromNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE2526.fromField = "value_changed";
ROUTE2526.toNode = "hanim_l_eyeball_joint";
ROUTE2526.toField = "set_rotation";
browser.currentScene.children[154] = ROUTE2526;

let ROUTE2527 = browser.currentScene.createNode("ROUTE");
ROUTE2527.fromNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE2527.fromField = "value_changed";
ROUTE2527.toNode = "hanim_r_eyeball_joint";
ROUTE2527.toField = "set_rotation";
browser.currentScene.children[155] = ROUTE2527;

let ROUTE2528 = browser.currentScene.createNode("ROUTE");
ROUTE2528.fromNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE2528.fromField = "value_changed";
ROUTE2528.toNode = "hanim_l_sternoclavicular";
ROUTE2528.toField = "set_rotation";
browser.currentScene.children[156] = ROUTE2528;

let ROUTE2529 = browser.currentScene.createNode("ROUTE");
ROUTE2529.fromNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE2529.fromField = "value_changed";
ROUTE2529.toNode = "hanim_l_acromioclavicular";
ROUTE2529.toField = "set_rotation";
browser.currentScene.children[157] = ROUTE2529;

let ROUTE2530 = browser.currentScene.createNode("ROUTE");
ROUTE2530.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE2530.fromField = "value_changed";
ROUTE2530.toNode = "hanim_l_shoulder";
ROUTE2530.toField = "set_rotation";
browser.currentScene.children[158] = ROUTE2530;

let ROUTE2531 = browser.currentScene.createNode("ROUTE");
ROUTE2531.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE2531.fromField = "value_changed";
ROUTE2531.toNode = "hanim_l_elbow";
ROUTE2531.toField = "set_rotation";
browser.currentScene.children[159] = ROUTE2531;

let ROUTE2532 = browser.currentScene.createNode("ROUTE");
ROUTE2532.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE2532.fromField = "value_changed";
ROUTE2532.toNode = "hanim_l_wrist";
ROUTE2532.toField = "set_rotation";
browser.currentScene.children[160] = ROUTE2532;

let ROUTE2533 = browser.currentScene.createNode("ROUTE");
ROUTE2533.fromNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE2533.fromField = "value_changed";
ROUTE2533.toNode = "hanim_l_thumb1";
ROUTE2533.toField = "set_rotation";
browser.currentScene.children[161] = ROUTE2533;

let ROUTE2534 = browser.currentScene.createNode("ROUTE");
ROUTE2534.fromNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE2534.fromField = "value_changed";
ROUTE2534.toNode = "hanim_l_thumb2";
ROUTE2534.toField = "set_rotation";
browser.currentScene.children[162] = ROUTE2534;

let ROUTE2535 = browser.currentScene.createNode("ROUTE");
ROUTE2535.fromNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE2535.fromField = "value_changed";
ROUTE2535.toNode = "hanim_l_thumb3";
ROUTE2535.toField = "set_rotation";
browser.currentScene.children[163] = ROUTE2535;

let ROUTE2536 = browser.currentScene.createNode("ROUTE");
ROUTE2536.fromNode = "Stop_l_index0_RotationInterpolator";
ROUTE2536.fromField = "value_changed";
ROUTE2536.toNode = "hanim_l_index0";
ROUTE2536.toField = "set_rotation";
browser.currentScene.children[164] = ROUTE2536;

let ROUTE2537 = browser.currentScene.createNode("ROUTE");
ROUTE2537.fromNode = "Stop_l_index1_RotationInterpolator";
ROUTE2537.fromField = "value_changed";
ROUTE2537.toNode = "hanim_l_index1";
ROUTE2537.toField = "set_rotation";
browser.currentScene.children[165] = ROUTE2537;

let ROUTE2538 = browser.currentScene.createNode("ROUTE");
ROUTE2538.fromNode = "Stop_l_index2_RotationInterpolator";
ROUTE2538.fromField = "value_changed";
ROUTE2538.toNode = "hanim_l_index2";
ROUTE2538.toField = "set_rotation";
browser.currentScene.children[166] = ROUTE2538;

let ROUTE2539 = browser.currentScene.createNode("ROUTE");
ROUTE2539.fromNode = "Stop_l_index3_RotationInterpolator";
ROUTE2539.fromField = "value_changed";
ROUTE2539.toNode = "hanim_l_index3";
ROUTE2539.toField = "set_rotation";
browser.currentScene.children[167] = ROUTE2539;

let ROUTE2540 = browser.currentScene.createNode("ROUTE");
ROUTE2540.fromNode = "Stop_l_middle0_RotationInterpolator";
ROUTE2540.fromField = "value_changed";
ROUTE2540.toNode = "hanim_l_middle0";
ROUTE2540.toField = "set_rotation";
browser.currentScene.children[168] = ROUTE2540;

let ROUTE2541 = browser.currentScene.createNode("ROUTE");
ROUTE2541.fromNode = "Stop_l_middle1_RotationInterpolator";
ROUTE2541.fromField = "value_changed";
ROUTE2541.toNode = "hanim_l_middle1";
ROUTE2541.toField = "set_rotation";
browser.currentScene.children[169] = ROUTE2541;

let ROUTE2542 = browser.currentScene.createNode("ROUTE");
ROUTE2542.fromNode = "Stop_l_middle2_RotationInterpolator";
ROUTE2542.fromField = "value_changed";
ROUTE2542.toNode = "hanim_l_middle2";
ROUTE2542.toField = "set_rotation";
browser.currentScene.children[170] = ROUTE2542;

let ROUTE2543 = browser.currentScene.createNode("ROUTE");
ROUTE2543.fromNode = "Stop_l_middle3_RotationInterpolator";
ROUTE2543.fromField = "value_changed";
ROUTE2543.toNode = "hanim_l_middle3";
ROUTE2543.toField = "set_rotation";
browser.currentScene.children[171] = ROUTE2543;

let ROUTE2544 = browser.currentScene.createNode("ROUTE");
ROUTE2544.fromNode = "Stop_l_ring0_RotationInterpolator";
ROUTE2544.fromField = "value_changed";
ROUTE2544.toNode = "hanim_l_ring0";
ROUTE2544.toField = "set_rotation";
browser.currentScene.children[172] = ROUTE2544;

let ROUTE2545 = browser.currentScene.createNode("ROUTE");
ROUTE2545.fromNode = "Stop_l_ring1_RotationInterpolator";
ROUTE2545.fromField = "value_changed";
ROUTE2545.toNode = "hanim_l_ring1";
ROUTE2545.toField = "set_rotation";
browser.currentScene.children[173] = ROUTE2545;

let ROUTE2546 = browser.currentScene.createNode("ROUTE");
ROUTE2546.fromNode = "Stop_l_ring2_RotationInterpolator";
ROUTE2546.fromField = "value_changed";
ROUTE2546.toNode = "hanim_l_ring2";
ROUTE2546.toField = "set_rotation";
browser.currentScene.children[174] = ROUTE2546;

let ROUTE2547 = browser.currentScene.createNode("ROUTE");
ROUTE2547.fromNode = "Stop_l_ring3_RotationInterpolator";
ROUTE2547.fromField = "value_changed";
ROUTE2547.toNode = "hanim_l_ring3";
ROUTE2547.toField = "set_rotation";
browser.currentScene.children[175] = ROUTE2547;

let ROUTE2548 = browser.currentScene.createNode("ROUTE");
ROUTE2548.fromNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE2548.fromField = "value_changed";
ROUTE2548.toNode = "hanim_l_pinky0";
ROUTE2548.toField = "set_rotation";
browser.currentScene.children[176] = ROUTE2548;

let ROUTE2549 = browser.currentScene.createNode("ROUTE");
ROUTE2549.fromNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE2549.fromField = "value_changed";
ROUTE2549.toNode = "hanim_l_pinky1";
ROUTE2549.toField = "set_rotation";
browser.currentScene.children[177] = ROUTE2549;

let ROUTE2550 = browser.currentScene.createNode("ROUTE");
ROUTE2550.fromNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE2550.fromField = "value_changed";
ROUTE2550.toNode = "hanim_l_pinky2";
ROUTE2550.toField = "set_rotation";
browser.currentScene.children[178] = ROUTE2550;

let ROUTE2551 = browser.currentScene.createNode("ROUTE");
ROUTE2551.fromNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE2551.fromField = "value_changed";
ROUTE2551.toNode = "hanim_l_pinky3";
ROUTE2551.toField = "set_rotation";
browser.currentScene.children[179] = ROUTE2551;

let ROUTE2552 = browser.currentScene.createNode("ROUTE");
ROUTE2552.fromNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE2552.fromField = "value_changed";
ROUTE2552.toNode = "hanim_r_sternoclavicular";
ROUTE2552.toField = "set_rotation";
browser.currentScene.children[180] = ROUTE2552;

let ROUTE2553 = browser.currentScene.createNode("ROUTE");
ROUTE2553.fromNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE2553.fromField = "value_changed";
ROUTE2553.toNode = "hanim_r_acromioclavicular";
ROUTE2553.toField = "set_rotation";
browser.currentScene.children[181] = ROUTE2553;

let ROUTE2554 = browser.currentScene.createNode("ROUTE");
ROUTE2554.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE2554.fromField = "value_changed";
ROUTE2554.toNode = "hanim_r_shoulder";
ROUTE2554.toField = "set_rotation";
browser.currentScene.children[182] = ROUTE2554;

let ROUTE2555 = browser.currentScene.createNode("ROUTE");
ROUTE2555.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE2555.fromField = "value_changed";
ROUTE2555.toNode = "hanim_r_elbow";
ROUTE2555.toField = "set_rotation";
browser.currentScene.children[183] = ROUTE2555;

let ROUTE2556 = browser.currentScene.createNode("ROUTE");
ROUTE2556.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE2556.fromField = "value_changed";
ROUTE2556.toNode = "hanim_r_wrist";
ROUTE2556.toField = "set_rotation";
browser.currentScene.children[184] = ROUTE2556;

let ROUTE2557 = browser.currentScene.createNode("ROUTE");
ROUTE2557.fromNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE2557.fromField = "value_changed";
ROUTE2557.toNode = "hanim_r_thumb1";
ROUTE2557.toField = "set_rotation";
browser.currentScene.children[185] = ROUTE2557;

let ROUTE2558 = browser.currentScene.createNode("ROUTE");
ROUTE2558.fromNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE2558.fromField = "value_changed";
ROUTE2558.toNode = "hanim_r_thumb2";
ROUTE2558.toField = "set_rotation";
browser.currentScene.children[186] = ROUTE2558;

let ROUTE2559 = browser.currentScene.createNode("ROUTE");
ROUTE2559.fromNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE2559.fromField = "value_changed";
ROUTE2559.toNode = "hanim_r_thumb3";
ROUTE2559.toField = "set_rotation";
browser.currentScene.children[187] = ROUTE2559;

let ROUTE2560 = browser.currentScene.createNode("ROUTE");
ROUTE2560.fromNode = "Stop_r_index0_RotationInterpolator";
ROUTE2560.fromField = "value_changed";
ROUTE2560.toNode = "hanim_r_index0";
ROUTE2560.toField = "set_rotation";
browser.currentScene.children[188] = ROUTE2560;

let ROUTE2561 = browser.currentScene.createNode("ROUTE");
ROUTE2561.fromNode = "Stop_r_index1_RotationInterpolator";
ROUTE2561.fromField = "value_changed";
ROUTE2561.toNode = "hanim_r_index1";
ROUTE2561.toField = "set_rotation";
browser.currentScene.children[189] = ROUTE2561;

let ROUTE2562 = browser.currentScene.createNode("ROUTE");
ROUTE2562.fromNode = "Stop_r_index2_RotationInterpolator";
ROUTE2562.fromField = "value_changed";
ROUTE2562.toNode = "hanim_r_index2";
ROUTE2562.toField = "set_rotation";
browser.currentScene.children[190] = ROUTE2562;

let ROUTE2563 = browser.currentScene.createNode("ROUTE");
ROUTE2563.fromNode = "Stop_r_index3_RotationInterpolator";
ROUTE2563.fromField = "value_changed";
ROUTE2563.toNode = "hanim_r_index3";
ROUTE2563.toField = "set_rotation";
browser.currentScene.children[191] = ROUTE2563;

let ROUTE2564 = browser.currentScene.createNode("ROUTE");
ROUTE2564.fromNode = "Stop_r_middle0_RotationInterpolator";
ROUTE2564.fromField = "value_changed";
ROUTE2564.toNode = "hanim_r_middle0";
ROUTE2564.toField = "set_rotation";
browser.currentScene.children[192] = ROUTE2564;

let ROUTE2565 = browser.currentScene.createNode("ROUTE");
ROUTE2565.fromNode = "Stop_r_middle1_RotationInterpolator";
ROUTE2565.fromField = "value_changed";
ROUTE2565.toNode = "hanim_r_middle1";
ROUTE2565.toField = "set_rotation";
browser.currentScene.children[193] = ROUTE2565;

let ROUTE2566 = browser.currentScene.createNode("ROUTE");
ROUTE2566.fromNode = "Stop_r_middle2_RotationInterpolator";
ROUTE2566.fromField = "value_changed";
ROUTE2566.toNode = "hanim_r_middle2";
ROUTE2566.toField = "set_rotation";
browser.currentScene.children[194] = ROUTE2566;

let ROUTE2567 = browser.currentScene.createNode("ROUTE");
ROUTE2567.fromNode = "Stop_r_middle3_RotationInterpolator";
ROUTE2567.fromField = "value_changed";
ROUTE2567.toNode = "hanim_r_middle3";
ROUTE2567.toField = "set_rotation";
browser.currentScene.children[195] = ROUTE2567;

let ROUTE2568 = browser.currentScene.createNode("ROUTE");
ROUTE2568.fromNode = "Stop_r_ring0_RotationInterpolator";
ROUTE2568.fromField = "value_changed";
ROUTE2568.toNode = "hanim_r_ring0";
ROUTE2568.toField = "set_rotation";
browser.currentScene.children[196] = ROUTE2568;

let ROUTE2569 = browser.currentScene.createNode("ROUTE");
ROUTE2569.fromNode = "Stop_r_ring1_RotationInterpolator";
ROUTE2569.fromField = "value_changed";
ROUTE2569.toNode = "hanim_r_ring1";
ROUTE2569.toField = "set_rotation";
browser.currentScene.children[197] = ROUTE2569;

let ROUTE2570 = browser.currentScene.createNode("ROUTE");
ROUTE2570.fromNode = "Stop_r_ring2_RotationInterpolator";
ROUTE2570.fromField = "value_changed";
ROUTE2570.toNode = "hanim_r_ring2";
ROUTE2570.toField = "set_rotation";
browser.currentScene.children[198] = ROUTE2570;

let ROUTE2571 = browser.currentScene.createNode("ROUTE");
ROUTE2571.fromNode = "Stop_r_ring3_RotationInterpolator";
ROUTE2571.fromField = "value_changed";
ROUTE2571.toNode = "hanim_r_ring3";
ROUTE2571.toField = "set_rotation";
browser.currentScene.children[199] = ROUTE2571;

let ROUTE2572 = browser.currentScene.createNode("ROUTE");
ROUTE2572.fromNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE2572.fromField = "value_changed";
ROUTE2572.toNode = "hanim_r_pinky0";
ROUTE2572.toField = "set_rotation";
browser.currentScene.children[200] = ROUTE2572;

let ROUTE2573 = browser.currentScene.createNode("ROUTE");
ROUTE2573.fromNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE2573.fromField = "value_changed";
ROUTE2573.toNode = "hanim_r_pinky1";
ROUTE2573.toField = "set_rotation";
browser.currentScene.children[201] = ROUTE2573;

let ROUTE2574 = browser.currentScene.createNode("ROUTE");
ROUTE2574.fromNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE2574.fromField = "value_changed";
ROUTE2574.toNode = "hanim_r_pinky2";
ROUTE2574.toField = "set_rotation";
browser.currentScene.children[202] = ROUTE2574;

let ROUTE2575 = browser.currentScene.createNode("ROUTE");
ROUTE2575.fromNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE2575.fromField = "value_changed";
ROUTE2575.toNode = "hanim_r_pinky3";
ROUTE2575.toField = "set_rotation";
browser.currentScene.children[203] = ROUTE2575;

let ROUTE2576 = browser.currentScene.createNode("ROUTE");
ROUTE2576.fromNode = "StandTimer";
ROUTE2576.fromField = "fraction_changed";
ROUTE2576.toNode = "Stand_r_ankle_RotationInterpolator";
ROUTE2576.toField = "set_fraction";
browser.currentScene.children[204] = ROUTE2576;

let ROUTE2577 = browser.currentScene.createNode("ROUTE");
ROUTE2577.fromNode = "StandTimer";
ROUTE2577.fromField = "fraction_changed";
ROUTE2577.toNode = "Stand_r_knee_RotationInterpolator";
ROUTE2577.toField = "set_fraction";
browser.currentScene.children[205] = ROUTE2577;

let ROUTE2578 = browser.currentScene.createNode("ROUTE");
ROUTE2578.fromNode = "StandTimer";
ROUTE2578.fromField = "fraction_changed";
ROUTE2578.toNode = "Stand_r_hip_RotationInterpolator";
ROUTE2578.toField = "set_fraction";
browser.currentScene.children[206] = ROUTE2578;

let ROUTE2579 = browser.currentScene.createNode("ROUTE");
ROUTE2579.fromNode = "StandTimer";
ROUTE2579.fromField = "fraction_changed";
ROUTE2579.toNode = "Stand_l_ankle_RotationInterpolator";
ROUTE2579.toField = "set_fraction";
browser.currentScene.children[207] = ROUTE2579;

let ROUTE2580 = browser.currentScene.createNode("ROUTE");
ROUTE2580.fromNode = "StandTimer";
ROUTE2580.fromField = "fraction_changed";
ROUTE2580.toNode = "Stand_l_knee_RotationInterpolator";
ROUTE2580.toField = "set_fraction";
browser.currentScene.children[208] = ROUTE2580;

let ROUTE2581 = browser.currentScene.createNode("ROUTE");
ROUTE2581.fromNode = "StandTimer";
ROUTE2581.fromField = "fraction_changed";
ROUTE2581.toNode = "Stand_l_hip_RotationInterpolator";
ROUTE2581.toField = "set_fraction";
browser.currentScene.children[209] = ROUTE2581;

let ROUTE2582 = browser.currentScene.createNode("ROUTE");
ROUTE2582.fromNode = "StandTimer";
ROUTE2582.fromField = "fraction_changed";
ROUTE2582.toNode = "Stand_lower_body_RotationInterpolator";
ROUTE2582.toField = "set_fraction";
browser.currentScene.children[210] = ROUTE2582;

let ROUTE2583 = browser.currentScene.createNode("ROUTE");
ROUTE2583.fromNode = "StandTimer";
ROUTE2583.fromField = "fraction_changed";
ROUTE2583.toNode = "Stand_r_wrist_RotationInterpolator";
ROUTE2583.toField = "set_fraction";
browser.currentScene.children[211] = ROUTE2583;

let ROUTE2584 = browser.currentScene.createNode("ROUTE");
ROUTE2584.fromNode = "StandTimer";
ROUTE2584.fromField = "fraction_changed";
ROUTE2584.toNode = "Stand_r_elbow_RotationInterpolator";
ROUTE2584.toField = "set_fraction";
browser.currentScene.children[212] = ROUTE2584;

let ROUTE2585 = browser.currentScene.createNode("ROUTE");
ROUTE2585.fromNode = "StandTimer";
ROUTE2585.fromField = "fraction_changed";
ROUTE2585.toNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE2585.toField = "set_fraction";
browser.currentScene.children[213] = ROUTE2585;

let ROUTE2586 = browser.currentScene.createNode("ROUTE");
ROUTE2586.fromNode = "StandTimer";
ROUTE2586.fromField = "fraction_changed";
ROUTE2586.toNode = "Stand_l_wrist_RotationInterpolator";
ROUTE2586.toField = "set_fraction";
browser.currentScene.children[214] = ROUTE2586;

let ROUTE2587 = browser.currentScene.createNode("ROUTE");
ROUTE2587.fromNode = "StandTimer";
ROUTE2587.fromField = "fraction_changed";
ROUTE2587.toNode = "Stand_l_elbow_RotationInterpolator";
ROUTE2587.toField = "set_fraction";
browser.currentScene.children[215] = ROUTE2587;

let ROUTE2588 = browser.currentScene.createNode("ROUTE");
ROUTE2588.fromNode = "StandTimer";
ROUTE2588.fromField = "fraction_changed";
ROUTE2588.toNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE2588.toField = "set_fraction";
browser.currentScene.children[216] = ROUTE2588;

let ROUTE2589 = browser.currentScene.createNode("ROUTE");
ROUTE2589.fromNode = "StandTimer";
ROUTE2589.fromField = "fraction_changed";
ROUTE2589.toNode = "Stand_head_RotationInterpolator";
ROUTE2589.toField = "set_fraction";
browser.currentScene.children[217] = ROUTE2589;

let ROUTE2590 = browser.currentScene.createNode("ROUTE");
ROUTE2590.fromNode = "StandTimer";
ROUTE2590.fromField = "fraction_changed";
ROUTE2590.toNode = "Stand_neck_RotationInterpolator";
ROUTE2590.toField = "set_fraction";
browser.currentScene.children[218] = ROUTE2590;

let ROUTE2591 = browser.currentScene.createNode("ROUTE");
ROUTE2591.fromNode = "StandTimer";
ROUTE2591.fromField = "fraction_changed";
ROUTE2591.toNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE2591.toField = "set_fraction";
browser.currentScene.children[219] = ROUTE2591;

let ROUTE2592 = browser.currentScene.createNode("ROUTE");
ROUTE2592.fromNode = "StandTimer";
ROUTE2592.fromField = "fraction_changed";
ROUTE2592.toNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE2592.toField = "set_fraction";
browser.currentScene.children[220] = ROUTE2592;

let ROUTE2593 = browser.currentScene.createNode("ROUTE");
ROUTE2593.fromNode = "StandTimer";
ROUTE2593.fromField = "fraction_changed";
ROUTE2593.toNode = "Stand_upper_body_RotationInterpolator";
ROUTE2593.toField = "set_fraction";
browser.currentScene.children[221] = ROUTE2593;

let ROUTE2594 = browser.currentScene.createNode("ROUTE");
ROUTE2594.fromNode = "StandTimer";
ROUTE2594.fromField = "fraction_changed";
ROUTE2594.toNode = "Stand_whole_body_RotationInterpolator";
ROUTE2594.toField = "set_fraction";
browser.currentScene.children[222] = ROUTE2594;

let ROUTE2595 = browser.currentScene.createNode("ROUTE");
ROUTE2595.fromNode = "StandTimer";
ROUTE2595.fromField = "fraction_changed";
ROUTE2595.toNode = "Stand_whole_body_TranslationInterpolator";
ROUTE2595.toField = "set_fraction";
browser.currentScene.children[223] = ROUTE2595;

let ROUTE2596 = browser.currentScene.createNode("ROUTE");
ROUTE2596.fromNode = "StandTimer";
ROUTE2596.fromField = "fraction_changed";
ROUTE2596.toNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE2596.toField = "set_fraction";
browser.currentScene.children[224] = ROUTE2596;

let ROUTE2597 = browser.currentScene.createNode("ROUTE");
ROUTE2597.fromNode = "StandTimer";
ROUTE2597.fromField = "fraction_changed";
ROUTE2597.toNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE2597.toField = "set_fraction";
browser.currentScene.children[225] = ROUTE2597;

let ROUTE2598 = browser.currentScene.createNode("ROUTE");
ROUTE2598.fromNode = "StandTimer";
ROUTE2598.fromField = "fraction_changed";
ROUTE2598.toNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE2598.toField = "set_fraction";
browser.currentScene.children[226] = ROUTE2598;

let ROUTE2599 = browser.currentScene.createNode("ROUTE");
ROUTE2599.fromNode = "StandTimer";
ROUTE2599.fromField = "fraction_changed";
ROUTE2599.toNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE2599.toField = "set_fraction";
browser.currentScene.children[227] = ROUTE2599;

let ROUTE2600 = browser.currentScene.createNode("ROUTE");
ROUTE2600.fromNode = "StandTimer";
ROUTE2600.fromField = "fraction_changed";
ROUTE2600.toNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2600.toField = "set_fraction";
browser.currentScene.children[228] = ROUTE2600;

let ROUTE2601 = browser.currentScene.createNode("ROUTE");
ROUTE2601.fromNode = "StandTimer";
ROUTE2601.fromField = "fraction_changed";
ROUTE2601.toNode = "Stand_sacroiliac_YawInterpolator";
ROUTE2601.toField = "set_fraction";
browser.currentScene.children[229] = ROUTE2601;

let ROUTE2602 = browser.currentScene.createNode("ROUTE");
ROUTE2602.fromNode = "StandTimer";
ROUTE2602.fromField = "fraction_changed";
ROUTE2602.toNode = "Stand_vl5_YawInterpolator";
ROUTE2602.toField = "set_fraction";
browser.currentScene.children[230] = ROUTE2602;

let ROUTE2603 = browser.currentScene.createNode("ROUTE");
ROUTE2603.fromNode = "StandTimer";
ROUTE2603.fromField = "fraction_changed";
ROUTE2603.toNode = "Stand_vc6_YawInterpolator";
ROUTE2603.toField = "set_fraction";
browser.currentScene.children[231] = ROUTE2603;

let ROUTE2604 = browser.currentScene.createNode("ROUTE");
ROUTE2604.fromNode = "StandTimer";
ROUTE2604.fromField = "fraction_changed";
ROUTE2604.toNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE2604.toField = "set_fraction";
browser.currentScene.children[232] = ROUTE2604;

let ROUTE2605 = browser.currentScene.createNode("ROUTE");
ROUTE2605.fromNode = "StandTimer";
ROUTE2605.fromField = "fraction_changed";
ROUTE2605.toNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE2605.toField = "set_fraction";
browser.currentScene.children[233] = ROUTE2605;

let ROUTE2606 = browser.currentScene.createNode("ROUTE");
ROUTE2606.fromNode = "StandTimer";
ROUTE2606.fromField = "fraction_changed";
ROUTE2606.toNode = "Stand_r_index1_RollInterpolator";
ROUTE2606.toField = "set_fraction";
browser.currentScene.children[234] = ROUTE2606;

let ROUTE2607 = browser.currentScene.createNode("ROUTE");
ROUTE2607.fromNode = "StandTimer";
ROUTE2607.fromField = "fraction_changed";
ROUTE2607.toNode = "Stand_r_index2_RollInterpolator";
ROUTE2607.toField = "set_fraction";
browser.currentScene.children[235] = ROUTE2607;

let ROUTE2608 = browser.currentScene.createNode("ROUTE");
ROUTE2608.fromNode = "StandTimer";
ROUTE2608.fromField = "fraction_changed";
ROUTE2608.toNode = "Stand_r_index3_RollInterpolator";
ROUTE2608.toField = "set_fraction";
browser.currentScene.children[236] = ROUTE2608;

let ROUTE2609 = browser.currentScene.createNode("ROUTE");
ROUTE2609.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE2609.fromField = "value_changed";
ROUTE2609.toNode = "hanim_r_ankle";
ROUTE2609.toField = "set_rotation";
browser.currentScene.children[237] = ROUTE2609;

let ROUTE2610 = browser.currentScene.createNode("ROUTE");
ROUTE2610.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE2610.fromField = "value_changed";
ROUTE2610.toNode = "hanim_r_knee";
ROUTE2610.toField = "set_rotation";
browser.currentScene.children[238] = ROUTE2610;

let ROUTE2611 = browser.currentScene.createNode("ROUTE");
ROUTE2611.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE2611.fromField = "value_changed";
ROUTE2611.toNode = "hanim_r_hip";
ROUTE2611.toField = "set_rotation";
browser.currentScene.children[239] = ROUTE2611;

let ROUTE2612 = browser.currentScene.createNode("ROUTE");
ROUTE2612.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE2612.fromField = "value_changed";
ROUTE2612.toNode = "hanim_l_ankle";
ROUTE2612.toField = "set_rotation";
browser.currentScene.children[240] = ROUTE2612;

let ROUTE2613 = browser.currentScene.createNode("ROUTE");
ROUTE2613.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE2613.fromField = "value_changed";
ROUTE2613.toNode = "hanim_l_knee";
ROUTE2613.toField = "set_rotation";
browser.currentScene.children[241] = ROUTE2613;

let ROUTE2614 = browser.currentScene.createNode("ROUTE");
ROUTE2614.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE2614.fromField = "value_changed";
ROUTE2614.toNode = "hanim_l_hip";
ROUTE2614.toField = "set_rotation";
browser.currentScene.children[242] = ROUTE2614;

let ROUTE2615 = browser.currentScene.createNode("ROUTE");
ROUTE2615.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE2615.fromField = "value_changed";
ROUTE2615.toNode = "hanim_r_wrist";
ROUTE2615.toField = "set_rotation";
browser.currentScene.children[243] = ROUTE2615;

let ROUTE2616 = browser.currentScene.createNode("ROUTE");
ROUTE2616.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE2616.fromField = "value_changed";
ROUTE2616.toNode = "hanim_r_elbow";
ROUTE2616.toField = "set_rotation";
browser.currentScene.children[244] = ROUTE2616;

let ROUTE2617 = browser.currentScene.createNode("ROUTE");
ROUTE2617.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE2617.fromField = "value_changed";
ROUTE2617.toNode = "hanim_r_shoulder";
ROUTE2617.toField = "set_rotation";
browser.currentScene.children[245] = ROUTE2617;

let ROUTE2618 = browser.currentScene.createNode("ROUTE");
ROUTE2618.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE2618.fromField = "value_changed";
ROUTE2618.toNode = "hanim_l_wrist";
ROUTE2618.toField = "set_rotation";
browser.currentScene.children[246] = ROUTE2618;

let ROUTE2619 = browser.currentScene.createNode("ROUTE");
ROUTE2619.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE2619.fromField = "value_changed";
ROUTE2619.toNode = "hanim_l_elbow";
ROUTE2619.toField = "set_rotation";
browser.currentScene.children[247] = ROUTE2619;

let ROUTE2620 = browser.currentScene.createNode("ROUTE");
ROUTE2620.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE2620.fromField = "value_changed";
ROUTE2620.toNode = "hanim_l_shoulder";
ROUTE2620.toField = "set_rotation";
browser.currentScene.children[248] = ROUTE2620;

let ROUTE2621 = browser.currentScene.createNode("ROUTE");
ROUTE2621.fromNode = "Stand_head_RotationInterpolator";
ROUTE2621.fromField = "value_changed";
ROUTE2621.toNode = "hanim_skullbase";
ROUTE2621.toField = "set_rotation";
browser.currentScene.children[249] = ROUTE2621;

let ROUTE2622 = browser.currentScene.createNode("ROUTE");
ROUTE2622.fromNode = "Stand_neck_RotationInterpolator";
ROUTE2622.fromField = "value_changed";
ROUTE2622.toNode = "hanim_vc7";
ROUTE2622.toField = "set_rotation";
browser.currentScene.children[250] = ROUTE2622;

let ROUTE2623 = browser.currentScene.createNode("ROUTE");
ROUTE2623.fromNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE2623.fromField = "value_changed";
ROUTE2623.toNode = "hanim_l_eyeball_joint";
ROUTE2623.toField = "set_rotation";
browser.currentScene.children[251] = ROUTE2623;

let ROUTE2624 = browser.currentScene.createNode("ROUTE");
ROUTE2624.fromNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE2624.fromField = "value_changed";
ROUTE2624.toNode = "hanim_r_eyeball_joint";
ROUTE2624.toField = "set_rotation";
browser.currentScene.children[252] = ROUTE2624;

let ROUTE2625 = browser.currentScene.createNode("ROUTE");
ROUTE2625.fromNode = "Stand_upper_body_RotationInterpolator";
ROUTE2625.fromField = "value_changed";
ROUTE2625.toNode = "hanim_vl1";
ROUTE2625.toField = "set_rotation";
browser.currentScene.children[253] = ROUTE2625;

let ROUTE2626 = browser.currentScene.createNode("ROUTE");
ROUTE2626.fromNode = "Stand_lower_body_RotationInterpolator";
ROUTE2626.fromField = "value_changed";
ROUTE2626.toNode = "hanim_sacroiliac";
ROUTE2626.toField = "set_rotation";
browser.currentScene.children[254] = ROUTE2626;

let ROUTE2627 = browser.currentScene.createNode("ROUTE");
ROUTE2627.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE2627.fromField = "value_changed";
ROUTE2627.toNode = "hanim_humanoid_root";
ROUTE2627.toField = "set_rotation";
browser.currentScene.children[255] = ROUTE2627;

let ROUTE2628 = browser.currentScene.createNode("ROUTE");
ROUTE2628.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE2628.fromField = "value_changed";
ROUTE2628.toNode = "hanim_humanoid_root";
ROUTE2628.toField = "set_translation";
browser.currentScene.children[256] = ROUTE2628;

let ROUTE2629 = browser.currentScene.createNode("ROUTE");
ROUTE2629.fromNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE2629.fromField = "value_changed";
ROUTE2629.toNode = "hanim_l_sternoclavicular";
ROUTE2629.toField = "set_rotation";
browser.currentScene.children[257] = ROUTE2629;

let ROUTE2630 = browser.currentScene.createNode("ROUTE");
ROUTE2630.fromNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE2630.fromField = "value_changed";
ROUTE2630.toNode = "hanim_l_acromioclavicular";
ROUTE2630.toField = "set_rotation";
browser.currentScene.children[258] = ROUTE2630;

let ROUTE2631 = browser.currentScene.createNode("ROUTE");
ROUTE2631.fromNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE2631.fromField = "value_changed";
ROUTE2631.toNode = "hanim_r_sternoclavicular";
ROUTE2631.toField = "set_rotation";
browser.currentScene.children[259] = ROUTE2631;

let ROUTE2632 = browser.currentScene.createNode("ROUTE");
ROUTE2632.fromNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE2632.fromField = "value_changed";
ROUTE2632.toNode = "hanim_r_acromioclavicular";
ROUTE2632.toField = "set_rotation";
browser.currentScene.children[260] = ROUTE2632;

let ROUTE2633 = browser.currentScene.createNode("ROUTE");
ROUTE2633.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2633.fromField = "value_changed";
ROUTE2633.toNode = "hanim_l_metatarsal";
ROUTE2633.toField = "set_rotation";
browser.currentScene.children[261] = ROUTE2633;

let ROUTE2634 = browser.currentScene.createNode("ROUTE");
ROUTE2634.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2634.fromField = "value_changed";
ROUTE2634.toNode = "hanim_r_metatarsal";
ROUTE2634.toField = "set_rotation";
browser.currentScene.children[262] = ROUTE2634;

let ROUTE2635 = browser.currentScene.createNode("ROUTE");
ROUTE2635.fromNode = "Stand_sacroiliac_YawInterpolator";
ROUTE2635.fromField = "value_changed";
ROUTE2635.toNode = "hanim_sacroiliac";
ROUTE2635.toField = "set_rotation";
browser.currentScene.children[263] = ROUTE2635;

let ROUTE2636 = browser.currentScene.createNode("ROUTE");
ROUTE2636.fromNode = "Stand_vl5_YawInterpolator";
ROUTE2636.fromField = "value_changed";
ROUTE2636.toNode = "hanim_vl5";
ROUTE2636.toField = "set_rotation";
browser.currentScene.children[264] = ROUTE2636;

let ROUTE2637 = browser.currentScene.createNode("ROUTE");
ROUTE2637.fromNode = "Stand_vc6_YawInterpolator";
ROUTE2637.fromField = "value_changed";
ROUTE2637.toNode = "hanim_vc6";
ROUTE2637.toField = "set_rotation";
browser.currentScene.children[265] = ROUTE2637;

let ROUTE2638 = browser.currentScene.createNode("ROUTE");
ROUTE2638.fromNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE2638.fromField = "value_changed";
ROUTE2638.toNode = "hanim_l_thumb1";
ROUTE2638.toField = "set_rotation";
browser.currentScene.children[266] = ROUTE2638;

let ROUTE2639 = browser.currentScene.createNode("ROUTE");
ROUTE2639.fromNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE2639.fromField = "value_changed";
ROUTE2639.toNode = "hanim_r_thumb1";
ROUTE2639.toField = "set_rotation";
browser.currentScene.children[267] = ROUTE2639;

let ROUTE2640 = browser.currentScene.createNode("ROUTE");
ROUTE2640.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2640.fromField = "value_changed";
ROUTE2640.toNode = "hanim_r_index1";
ROUTE2640.toField = "set_rotation";
browser.currentScene.children[268] = ROUTE2640;

let ROUTE2641 = browser.currentScene.createNode("ROUTE");
ROUTE2641.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2641.fromField = "value_changed";
ROUTE2641.toNode = "hanim_r_index2";
ROUTE2641.toField = "set_rotation";
browser.currentScene.children[269] = ROUTE2641;

let ROUTE2642 = browser.currentScene.createNode("ROUTE");
ROUTE2642.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2642.fromField = "value_changed";
ROUTE2642.toNode = "hanim_r_index3";
ROUTE2642.toField = "set_rotation";
browser.currentScene.children[270] = ROUTE2642;

let ROUTE2643 = browser.currentScene.createNode("ROUTE");
ROUTE2643.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2643.fromField = "value_changed";
ROUTE2643.toNode = "hanim_r_middle1";
ROUTE2643.toField = "set_rotation";
browser.currentScene.children[271] = ROUTE2643;

let ROUTE2644 = browser.currentScene.createNode("ROUTE");
ROUTE2644.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2644.fromField = "value_changed";
ROUTE2644.toNode = "hanim_r_middle2";
ROUTE2644.toField = "set_rotation";
browser.currentScene.children[272] = ROUTE2644;

let ROUTE2645 = browser.currentScene.createNode("ROUTE");
ROUTE2645.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2645.fromField = "value_changed";
ROUTE2645.toNode = "hanim_r_middle3";
ROUTE2645.toField = "set_rotation";
browser.currentScene.children[273] = ROUTE2645;

let ROUTE2646 = browser.currentScene.createNode("ROUTE");
ROUTE2646.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2646.fromField = "value_changed";
ROUTE2646.toNode = "hanim_r_ring1";
ROUTE2646.toField = "set_rotation";
browser.currentScene.children[274] = ROUTE2646;

let ROUTE2647 = browser.currentScene.createNode("ROUTE");
ROUTE2647.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2647.fromField = "value_changed";
ROUTE2647.toNode = "hanim_r_ring2";
ROUTE2647.toField = "set_rotation";
browser.currentScene.children[275] = ROUTE2647;

let ROUTE2648 = browser.currentScene.createNode("ROUTE");
ROUTE2648.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2648.fromField = "value_changed";
ROUTE2648.toNode = "hanim_r_ring3";
ROUTE2648.toField = "set_rotation";
browser.currentScene.children[276] = ROUTE2648;

let ROUTE2649 = browser.currentScene.createNode("ROUTE");
ROUTE2649.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2649.fromField = "value_changed";
ROUTE2649.toNode = "hanim_r_pinky1";
ROUTE2649.toField = "set_rotation";
browser.currentScene.children[277] = ROUTE2649;

let ROUTE2650 = browser.currentScene.createNode("ROUTE");
ROUTE2650.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2650.fromField = "value_changed";
ROUTE2650.toNode = "hanim_r_pinky2";
ROUTE2650.toField = "set_rotation";
browser.currentScene.children[278] = ROUTE2650;

let ROUTE2651 = browser.currentScene.createNode("ROUTE");
ROUTE2651.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2651.fromField = "value_changed";
ROUTE2651.toNode = "hanim_r_pinky3";
ROUTE2651.toField = "set_rotation";
browser.currentScene.children[279] = ROUTE2651;

let ROUTE2652 = browser.currentScene.createNode("ROUTE");
ROUTE2652.fromNode = "PitchTimer";
ROUTE2652.fromField = "fraction_changed";
ROUTE2652.toNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE2652.toField = "set_fraction";
browser.currentScene.children[280] = ROUTE2652;

let ROUTE2653 = browser.currentScene.createNode("ROUTE");
ROUTE2653.fromNode = "PitchTimer";
ROUTE2653.fromField = "fraction_changed";
ROUTE2653.toNode = "Pitches_r_knee_RotationInterpolator";
ROUTE2653.toField = "set_fraction";
browser.currentScene.children[281] = ROUTE2653;

let ROUTE2654 = browser.currentScene.createNode("ROUTE");
ROUTE2654.fromNode = "PitchTimer";
ROUTE2654.fromField = "fraction_changed";
ROUTE2654.toNode = "Pitches_r_hip_RotationInterpolator";
ROUTE2654.toField = "set_fraction";
browser.currentScene.children[282] = ROUTE2654;

let ROUTE2655 = browser.currentScene.createNode("ROUTE");
ROUTE2655.fromNode = "PitchTimer";
ROUTE2655.fromField = "fraction_changed";
ROUTE2655.toNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE2655.toField = "set_fraction";
browser.currentScene.children[283] = ROUTE2655;

let ROUTE2656 = browser.currentScene.createNode("ROUTE");
ROUTE2656.fromNode = "PitchTimer";
ROUTE2656.fromField = "fraction_changed";
ROUTE2656.toNode = "Pitches_l_knee_RotationInterpolator";
ROUTE2656.toField = "set_fraction";
browser.currentScene.children[284] = ROUTE2656;

let ROUTE2657 = browser.currentScene.createNode("ROUTE");
ROUTE2657.fromNode = "PitchTimer";
ROUTE2657.fromField = "fraction_changed";
ROUTE2657.toNode = "Pitches_l_hip_RotationInterpolator";
ROUTE2657.toField = "set_fraction";
browser.currentScene.children[285] = ROUTE2657;

let ROUTE2658 = browser.currentScene.createNode("ROUTE");
ROUTE2658.fromNode = "PitchTimer";
ROUTE2658.fromField = "fraction_changed";
ROUTE2658.toNode = "Pitches_lower_body_RotationInterpolator";
ROUTE2658.toField = "set_fraction";
browser.currentScene.children[286] = ROUTE2658;

let ROUTE2659 = browser.currentScene.createNode("ROUTE");
ROUTE2659.fromNode = "PitchTimer";
ROUTE2659.fromField = "fraction_changed";
ROUTE2659.toNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE2659.toField = "set_fraction";
browser.currentScene.children[287] = ROUTE2659;

let ROUTE2660 = browser.currentScene.createNode("ROUTE");
ROUTE2660.fromNode = "PitchTimer";
ROUTE2660.fromField = "fraction_changed";
ROUTE2660.toNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE2660.toField = "set_fraction";
browser.currentScene.children[288] = ROUTE2660;

let ROUTE2661 = browser.currentScene.createNode("ROUTE");
ROUTE2661.fromNode = "PitchTimer";
ROUTE2661.fromField = "fraction_changed";
ROUTE2661.toNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE2661.toField = "set_fraction";
browser.currentScene.children[289] = ROUTE2661;

let ROUTE2662 = browser.currentScene.createNode("ROUTE");
ROUTE2662.fromNode = "PitchTimer";
ROUTE2662.fromField = "fraction_changed";
ROUTE2662.toNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE2662.toField = "set_fraction";
browser.currentScene.children[290] = ROUTE2662;

let ROUTE2663 = browser.currentScene.createNode("ROUTE");
ROUTE2663.fromNode = "PitchTimer";
ROUTE2663.fromField = "fraction_changed";
ROUTE2663.toNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE2663.toField = "set_fraction";
browser.currentScene.children[291] = ROUTE2663;

let ROUTE2664 = browser.currentScene.createNode("ROUTE");
ROUTE2664.fromNode = "PitchTimer";
ROUTE2664.fromField = "fraction_changed";
ROUTE2664.toNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE2664.toField = "set_fraction";
browser.currentScene.children[292] = ROUTE2664;

let ROUTE2665 = browser.currentScene.createNode("ROUTE");
ROUTE2665.fromNode = "PitchTimer";
ROUTE2665.fromField = "fraction_changed";
ROUTE2665.toNode = "Pitches_head_RotationInterpolator";
ROUTE2665.toField = "set_fraction";
browser.currentScene.children[293] = ROUTE2665;

let ROUTE2666 = browser.currentScene.createNode("ROUTE");
ROUTE2666.fromNode = "PitchTimer";
ROUTE2666.fromField = "fraction_changed";
ROUTE2666.toNode = "Pitches_neck_RotationInterpolator";
ROUTE2666.toField = "set_fraction";
browser.currentScene.children[294] = ROUTE2666;

let ROUTE2667 = browser.currentScene.createNode("ROUTE");
ROUTE2667.fromNode = "PitchTimer";
ROUTE2667.fromField = "fraction_changed";
ROUTE2667.toNode = "Pitches_upper_body_RotationInterpolator";
ROUTE2667.toField = "set_fraction";
browser.currentScene.children[295] = ROUTE2667;

let ROUTE2668 = browser.currentScene.createNode("ROUTE");
ROUTE2668.fromNode = "PitchTimer";
ROUTE2668.fromField = "fraction_changed";
ROUTE2668.toNode = "Pitches_whole_body_RotationInterpolator";
ROUTE2668.toField = "set_fraction";
browser.currentScene.children[296] = ROUTE2668;

let ROUTE2669 = browser.currentScene.createNode("ROUTE");
ROUTE2669.fromNode = "PitchTimer";
ROUTE2669.fromField = "fraction_changed";
ROUTE2669.toNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE2669.toField = "set_fraction";
browser.currentScene.children[297] = ROUTE2669;

let ROUTE2670 = browser.currentScene.createNode("ROUTE");
ROUTE2670.fromNode = "PitchTimer";
ROUTE2670.fromField = "fraction_changed";
ROUTE2670.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE2670.toField = "set_fraction";
browser.currentScene.children[298] = ROUTE2670;

let ROUTE2671 = browser.currentScene.createNode("ROUTE");
ROUTE2671.fromNode = "PitchTimer";
ROUTE2671.fromField = "fraction_changed";
ROUTE2671.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE2671.toField = "set_fraction";
browser.currentScene.children[299] = ROUTE2671;

let ROUTE2672 = browser.currentScene.createNode("ROUTE");
ROUTE2672.fromNode = "PitchTimer";
ROUTE2672.fromField = "fraction_changed";
ROUTE2672.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE2672.toField = "set_fraction";
browser.currentScene.children[300] = ROUTE2672;

let ROUTE2673 = browser.currentScene.createNode("ROUTE");
ROUTE2673.fromNode = "PitchTimer";
ROUTE2673.fromField = "fraction_changed";
ROUTE2673.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE2673.toField = "set_fraction";
browser.currentScene.children[301] = ROUTE2673;

let ROUTE2674 = browser.currentScene.createNode("ROUTE");
ROUTE2674.fromNode = "PitchTimer";
ROUTE2674.fromField = "fraction_changed";
ROUTE2674.toNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2674.toField = "set_fraction";
browser.currentScene.children[302] = ROUTE2674;

let ROUTE2675 = browser.currentScene.createNode("ROUTE");
ROUTE2675.fromNode = "PitchTimer";
ROUTE2675.fromField = "fraction_changed";
ROUTE2675.toNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE2675.toField = "set_fraction";
browser.currentScene.children[303] = ROUTE2675;

let ROUTE2676 = browser.currentScene.createNode("ROUTE");
ROUTE2676.fromNode = "PitchTimer";
ROUTE2676.fromField = "fraction_changed";
ROUTE2676.toNode = "Pitch_vl5_YawInterpolator";
ROUTE2676.toField = "set_fraction";
browser.currentScene.children[304] = ROUTE2676;

let ROUTE2677 = browser.currentScene.createNode("ROUTE");
ROUTE2677.fromNode = "PitchTimer";
ROUTE2677.fromField = "fraction_changed";
ROUTE2677.toNode = "Pitch_vc6_YawInterpolator";
ROUTE2677.toField = "set_fraction";
browser.currentScene.children[305] = ROUTE2677;

let ROUTE2678 = browser.currentScene.createNode("ROUTE");
ROUTE2678.fromNode = "PitchTimer";
ROUTE2678.fromField = "fraction_changed";
ROUTE2678.toNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE2678.toField = "set_fraction";
browser.currentScene.children[306] = ROUTE2678;

let ROUTE2679 = browser.currentScene.createNode("ROUTE");
ROUTE2679.fromNode = "PitchTimer";
ROUTE2679.fromField = "fraction_changed";
ROUTE2679.toNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE2679.toField = "set_fraction";
browser.currentScene.children[307] = ROUTE2679;

let ROUTE2680 = browser.currentScene.createNode("ROUTE");
ROUTE2680.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE2680.fromField = "value_changed";
ROUTE2680.toNode = "hanim_r_ankle";
ROUTE2680.toField = "set_rotation";
browser.currentScene.children[308] = ROUTE2680;

let ROUTE2681 = browser.currentScene.createNode("ROUTE");
ROUTE2681.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE2681.fromField = "value_changed";
ROUTE2681.toNode = "hanim_r_knee";
ROUTE2681.toField = "set_rotation";
browser.currentScene.children[309] = ROUTE2681;

let ROUTE2682 = browser.currentScene.createNode("ROUTE");
ROUTE2682.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE2682.fromField = "value_changed";
ROUTE2682.toNode = "hanim_r_hip";
ROUTE2682.toField = "set_rotation";
browser.currentScene.children[310] = ROUTE2682;

let ROUTE2683 = browser.currentScene.createNode("ROUTE");
ROUTE2683.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE2683.fromField = "value_changed";
ROUTE2683.toNode = "hanim_l_ankle";
ROUTE2683.toField = "set_rotation";
browser.currentScene.children[311] = ROUTE2683;

let ROUTE2684 = browser.currentScene.createNode("ROUTE");
ROUTE2684.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE2684.fromField = "value_changed";
ROUTE2684.toNode = "hanim_l_knee";
ROUTE2684.toField = "set_rotation";
browser.currentScene.children[312] = ROUTE2684;

let ROUTE2685 = browser.currentScene.createNode("ROUTE");
ROUTE2685.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE2685.fromField = "value_changed";
ROUTE2685.toNode = "hanim_l_hip";
ROUTE2685.toField = "set_rotation";
browser.currentScene.children[313] = ROUTE2685;

let ROUTE2686 = browser.currentScene.createNode("ROUTE");
ROUTE2686.fromNode = "Pitches_lower_body_RotationInterpolator";
ROUTE2686.fromField = "value_changed";
ROUTE2686.toNode = "hanim_sacroiliac";
ROUTE2686.toField = "set_rotation";
browser.currentScene.children[314] = ROUTE2686;

let ROUTE2687 = browser.currentScene.createNode("ROUTE");
ROUTE2687.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE2687.fromField = "value_changed";
ROUTE2687.toNode = "hanim_r_wrist";
ROUTE2687.toField = "set_rotation";
browser.currentScene.children[315] = ROUTE2687;

let ROUTE2688 = browser.currentScene.createNode("ROUTE");
ROUTE2688.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE2688.fromField = "value_changed";
ROUTE2688.toNode = "hanim_r_elbow";
ROUTE2688.toField = "set_rotation";
browser.currentScene.children[316] = ROUTE2688;

let ROUTE2689 = browser.currentScene.createNode("ROUTE");
ROUTE2689.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE2689.fromField = "value_changed";
ROUTE2689.toNode = "hanim_r_shoulder";
ROUTE2689.toField = "set_rotation";
browser.currentScene.children[317] = ROUTE2689;

let ROUTE2690 = browser.currentScene.createNode("ROUTE");
ROUTE2690.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE2690.fromField = "value_changed";
ROUTE2690.toNode = "hanim_l_wrist";
ROUTE2690.toField = "set_rotation";
browser.currentScene.children[318] = ROUTE2690;

let ROUTE2691 = browser.currentScene.createNode("ROUTE");
ROUTE2691.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE2691.fromField = "value_changed";
ROUTE2691.toNode = "hanim_l_elbow";
ROUTE2691.toField = "set_rotation";
browser.currentScene.children[319] = ROUTE2691;

let ROUTE2692 = browser.currentScene.createNode("ROUTE");
ROUTE2692.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE2692.fromField = "value_changed";
ROUTE2692.toNode = "hanim_l_shoulder";
ROUTE2692.toField = "set_rotation";
browser.currentScene.children[320] = ROUTE2692;

let ROUTE2693 = browser.currentScene.createNode("ROUTE");
ROUTE2693.fromNode = "Pitches_head_RotationInterpolator";
ROUTE2693.fromField = "value_changed";
ROUTE2693.toNode = "hanim_skullbase";
ROUTE2693.toField = "set_rotation";
browser.currentScene.children[321] = ROUTE2693;

let ROUTE2694 = browser.currentScene.createNode("ROUTE");
ROUTE2694.fromNode = "Pitches_neck_RotationInterpolator";
ROUTE2694.fromField = "value_changed";
ROUTE2694.toNode = "hanim_vc4";
ROUTE2694.toField = "set_rotation";
browser.currentScene.children[322] = ROUTE2694;

let ROUTE2695 = browser.currentScene.createNode("ROUTE");
ROUTE2695.fromNode = "Pitches_upper_body_RotationInterpolator";
ROUTE2695.fromField = "value_changed";
ROUTE2695.toNode = "hanim_vl1";
ROUTE2695.toField = "set_rotation";
browser.currentScene.children[323] = ROUTE2695;

let ROUTE2696 = browser.currentScene.createNode("ROUTE");
ROUTE2696.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE2696.fromField = "value_changed";
ROUTE2696.toNode = "hanim_humanoid_root";
ROUTE2696.toField = "set_rotation";
browser.currentScene.children[324] = ROUTE2696;

let ROUTE2697 = browser.currentScene.createNode("ROUTE");
ROUTE2697.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE2697.fromField = "value_changed";
ROUTE2697.toNode = "hanim_humanoid_root";
ROUTE2697.toField = "set_translation";
browser.currentScene.children[325] = ROUTE2697;

let ROUTE2698 = browser.currentScene.createNode("ROUTE");
ROUTE2698.fromNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE2698.fromField = "value_changed";
ROUTE2698.toNode = "hanim_l_sternoclavicular";
ROUTE2698.toField = "set_rotation";
browser.currentScene.children[326] = ROUTE2698;

let ROUTE2699 = browser.currentScene.createNode("ROUTE");
ROUTE2699.fromNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE2699.fromField = "value_changed";
ROUTE2699.toNode = "hanim_l_acromioclavicular";
ROUTE2699.toField = "set_rotation";
browser.currentScene.children[327] = ROUTE2699;

let ROUTE2700 = browser.currentScene.createNode("ROUTE");
ROUTE2700.fromNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE2700.fromField = "value_changed";
ROUTE2700.toNode = "hanim_r_sternoclavicular";
ROUTE2700.toField = "set_rotation";
browser.currentScene.children[328] = ROUTE2700;

let ROUTE2701 = browser.currentScene.createNode("ROUTE");
ROUTE2701.fromNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE2701.fromField = "value_changed";
ROUTE2701.toNode = "hanim_r_acromioclavicular";
ROUTE2701.toField = "set_rotation";
browser.currentScene.children[329] = ROUTE2701;

let ROUTE2702 = browser.currentScene.createNode("ROUTE");
ROUTE2702.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2702.fromField = "value_changed";
ROUTE2702.toNode = "hanim_l_metatarsal";
ROUTE2702.toField = "set_rotation";
browser.currentScene.children[330] = ROUTE2702;

let ROUTE2703 = browser.currentScene.createNode("ROUTE");
ROUTE2703.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2703.fromField = "value_changed";
ROUTE2703.toNode = "hanim_r_metatarsal";
ROUTE2703.toField = "set_rotation";
browser.currentScene.children[331] = ROUTE2703;

let ROUTE2704 = browser.currentScene.createNode("ROUTE");
ROUTE2704.fromNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE2704.fromField = "value_changed";
ROUTE2704.toNode = "hanim_sacroiliac";
ROUTE2704.toField = "set_rotation";
browser.currentScene.children[332] = ROUTE2704;

let ROUTE2705 = browser.currentScene.createNode("ROUTE");
ROUTE2705.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE2705.fromField = "value_changed";
ROUTE2705.toNode = "hanim_vl5";
ROUTE2705.toField = "set_rotation";
browser.currentScene.children[333] = ROUTE2705;

let ROUTE2706 = browser.currentScene.createNode("ROUTE");
ROUTE2706.fromNode = "Pitch_vc6_YawInterpolator";
ROUTE2706.fromField = "value_changed";
ROUTE2706.toNode = "hanim_vc6";
ROUTE2706.toField = "set_rotation";
browser.currentScene.children[334] = ROUTE2706;

let ROUTE2707 = browser.currentScene.createNode("ROUTE");
ROUTE2707.fromNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE2707.fromField = "value_changed";
ROUTE2707.toNode = "hanim_l_thumb1";
ROUTE2707.toField = "set_rotation";
browser.currentScene.children[335] = ROUTE2707;

let ROUTE2708 = browser.currentScene.createNode("ROUTE");
ROUTE2708.fromNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE2708.fromField = "value_changed";
ROUTE2708.toNode = "hanim_r_thumb1";
ROUTE2708.toField = "set_rotation";
browser.currentScene.children[336] = ROUTE2708;

let ROUTE2709 = browser.currentScene.createNode("ROUTE");
ROUTE2709.fromNode = "YawTimer";
ROUTE2709.fromField = "fraction_changed";
ROUTE2709.toNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE2709.toField = "set_fraction";
browser.currentScene.children[337] = ROUTE2709;

let ROUTE2710 = browser.currentScene.createNode("ROUTE");
ROUTE2710.fromNode = "YawTimer";
ROUTE2710.fromField = "fraction_changed";
ROUTE2710.toNode = "Yaws_r_knee_RotationInterpolator";
ROUTE2710.toField = "set_fraction";
browser.currentScene.children[338] = ROUTE2710;

let ROUTE2711 = browser.currentScene.createNode("ROUTE");
ROUTE2711.fromNode = "YawTimer";
ROUTE2711.fromField = "fraction_changed";
ROUTE2711.toNode = "Yaws_r_hip_RotationInterpolator";
ROUTE2711.toField = "set_fraction";
browser.currentScene.children[339] = ROUTE2711;

let ROUTE2712 = browser.currentScene.createNode("ROUTE");
ROUTE2712.fromNode = "YawTimer";
ROUTE2712.fromField = "fraction_changed";
ROUTE2712.toNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE2712.toField = "set_fraction";
browser.currentScene.children[340] = ROUTE2712;

let ROUTE2713 = browser.currentScene.createNode("ROUTE");
ROUTE2713.fromNode = "YawTimer";
ROUTE2713.fromField = "fraction_changed";
ROUTE2713.toNode = "Yaws_l_knee_RotationInterpolator";
ROUTE2713.toField = "set_fraction";
browser.currentScene.children[341] = ROUTE2713;

let ROUTE2714 = browser.currentScene.createNode("ROUTE");
ROUTE2714.fromNode = "YawTimer";
ROUTE2714.fromField = "fraction_changed";
ROUTE2714.toNode = "Yaws_l_hip_RotationInterpolator";
ROUTE2714.toField = "set_fraction";
browser.currentScene.children[342] = ROUTE2714;

let ROUTE2715 = browser.currentScene.createNode("ROUTE");
ROUTE2715.fromNode = "YawTimer";
ROUTE2715.fromField = "fraction_changed";
ROUTE2715.toNode = "Yaws_lower_body_RotationInterpolator";
ROUTE2715.toField = "set_fraction";
browser.currentScene.children[343] = ROUTE2715;

let ROUTE2716 = browser.currentScene.createNode("ROUTE");
ROUTE2716.fromNode = "YawTimer";
ROUTE2716.fromField = "fraction_changed";
ROUTE2716.toNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE2716.toField = "set_fraction";
browser.currentScene.children[344] = ROUTE2716;

let ROUTE2717 = browser.currentScene.createNode("ROUTE");
ROUTE2717.fromNode = "YawTimer";
ROUTE2717.fromField = "fraction_changed";
ROUTE2717.toNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE2717.toField = "set_fraction";
browser.currentScene.children[345] = ROUTE2717;

let ROUTE2718 = browser.currentScene.createNode("ROUTE");
ROUTE2718.fromNode = "YawTimer";
ROUTE2718.fromField = "fraction_changed";
ROUTE2718.toNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE2718.toField = "set_fraction";
browser.currentScene.children[346] = ROUTE2718;

let ROUTE2719 = browser.currentScene.createNode("ROUTE");
ROUTE2719.fromNode = "YawTimer";
ROUTE2719.fromField = "fraction_changed";
ROUTE2719.toNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE2719.toField = "set_fraction";
browser.currentScene.children[347] = ROUTE2719;

let ROUTE2720 = browser.currentScene.createNode("ROUTE");
ROUTE2720.fromNode = "YawTimer";
ROUTE2720.fromField = "fraction_changed";
ROUTE2720.toNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE2720.toField = "set_fraction";
browser.currentScene.children[348] = ROUTE2720;

let ROUTE2721 = browser.currentScene.createNode("ROUTE");
ROUTE2721.fromNode = "YawTimer";
ROUTE2721.fromField = "fraction_changed";
ROUTE2721.toNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE2721.toField = "set_fraction";
browser.currentScene.children[349] = ROUTE2721;

let ROUTE2722 = browser.currentScene.createNode("ROUTE");
ROUTE2722.fromNode = "YawTimer";
ROUTE2722.fromField = "fraction_changed";
ROUTE2722.toNode = "Yaws_head_RotationInterpolator";
ROUTE2722.toField = "set_fraction";
browser.currentScene.children[350] = ROUTE2722;

let ROUTE2723 = browser.currentScene.createNode("ROUTE");
ROUTE2723.fromNode = "YawTimer";
ROUTE2723.fromField = "fraction_changed";
ROUTE2723.toNode = "Yaws_neck_RotationInterpolator";
ROUTE2723.toField = "set_fraction";
browser.currentScene.children[351] = ROUTE2723;

let ROUTE2724 = browser.currentScene.createNode("ROUTE");
ROUTE2724.fromNode = "YawTimer";
ROUTE2724.fromField = "fraction_changed";
ROUTE2724.toNode = "Yaws_upper_body_RotationInterpolator";
ROUTE2724.toField = "set_fraction";
browser.currentScene.children[352] = ROUTE2724;

let ROUTE2725 = browser.currentScene.createNode("ROUTE");
ROUTE2725.fromNode = "YawTimer";
ROUTE2725.fromField = "fraction_changed";
ROUTE2725.toNode = "Yaws_whole_body_RotationInterpolator";
ROUTE2725.toField = "set_fraction";
browser.currentScene.children[353] = ROUTE2725;

let ROUTE2726 = browser.currentScene.createNode("ROUTE");
ROUTE2726.fromNode = "YawTimer";
ROUTE2726.fromField = "fraction_changed";
ROUTE2726.toNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE2726.toField = "set_fraction";
browser.currentScene.children[354] = ROUTE2726;

let ROUTE2727 = browser.currentScene.createNode("ROUTE");
ROUTE2727.fromNode = "YawTimer";
ROUTE2727.fromField = "fraction_changed";
ROUTE2727.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE2727.toField = "set_fraction";
browser.currentScene.children[355] = ROUTE2727;

let ROUTE2728 = browser.currentScene.createNode("ROUTE");
ROUTE2728.fromNode = "YawTimer";
ROUTE2728.fromField = "fraction_changed";
ROUTE2728.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE2728.toField = "set_fraction";
browser.currentScene.children[356] = ROUTE2728;

let ROUTE2729 = browser.currentScene.createNode("ROUTE");
ROUTE2729.fromNode = "YawTimer";
ROUTE2729.fromField = "fraction_changed";
ROUTE2729.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE2729.toField = "set_fraction";
browser.currentScene.children[357] = ROUTE2729;

let ROUTE2730 = browser.currentScene.createNode("ROUTE");
ROUTE2730.fromNode = "YawTimer";
ROUTE2730.fromField = "fraction_changed";
ROUTE2730.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE2730.toField = "set_fraction";
browser.currentScene.children[358] = ROUTE2730;

let ROUTE2731 = browser.currentScene.createNode("ROUTE");
ROUTE2731.fromNode = "YawTimer";
ROUTE2731.fromField = "fraction_changed";
ROUTE2731.toNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2731.toField = "set_fraction";
browser.currentScene.children[359] = ROUTE2731;

let ROUTE2732 = browser.currentScene.createNode("ROUTE");
ROUTE2732.fromNode = "YawTimer";
ROUTE2732.fromField = "fraction_changed";
ROUTE2732.toNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE2732.toField = "set_fraction";
browser.currentScene.children[360] = ROUTE2732;

let ROUTE2733 = browser.currentScene.createNode("ROUTE");
ROUTE2733.fromNode = "YawTimer";
ROUTE2733.fromField = "fraction_changed";
ROUTE2733.toNode = "Yaw_vl5_YawInterpolator";
ROUTE2733.toField = "set_fraction";
browser.currentScene.children[361] = ROUTE2733;

let ROUTE2734 = browser.currentScene.createNode("ROUTE");
ROUTE2734.fromNode = "YawTimer";
ROUTE2734.fromField = "fraction_changed";
ROUTE2734.toNode = "Yaw_vc6_YawInterpolator";
ROUTE2734.toField = "set_fraction";
browser.currentScene.children[362] = ROUTE2734;

let ROUTE2735 = browser.currentScene.createNode("ROUTE");
ROUTE2735.fromNode = "YawTimer";
ROUTE2735.fromField = "fraction_changed";
ROUTE2735.toNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE2735.toField = "set_fraction";
browser.currentScene.children[363] = ROUTE2735;

let ROUTE2736 = browser.currentScene.createNode("ROUTE");
ROUTE2736.fromNode = "YawTimer";
ROUTE2736.fromField = "fraction_changed";
ROUTE2736.toNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE2736.toField = "set_fraction";
browser.currentScene.children[364] = ROUTE2736;

let ROUTE2737 = browser.currentScene.createNode("ROUTE");
ROUTE2737.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE2737.fromField = "value_changed";
ROUTE2737.toNode = "hanim_r_ankle";
ROUTE2737.toField = "set_rotation";
browser.currentScene.children[365] = ROUTE2737;

let ROUTE2738 = browser.currentScene.createNode("ROUTE");
ROUTE2738.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE2738.fromField = "value_changed";
ROUTE2738.toNode = "hanim_r_knee";
ROUTE2738.toField = "set_rotation";
browser.currentScene.children[366] = ROUTE2738;

let ROUTE2739 = browser.currentScene.createNode("ROUTE");
ROUTE2739.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE2739.fromField = "value_changed";
ROUTE2739.toNode = "hanim_r_hip";
ROUTE2739.toField = "set_rotation";
browser.currentScene.children[367] = ROUTE2739;

let ROUTE2740 = browser.currentScene.createNode("ROUTE");
ROUTE2740.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE2740.fromField = "value_changed";
ROUTE2740.toNode = "hanim_l_ankle";
ROUTE2740.toField = "set_rotation";
browser.currentScene.children[368] = ROUTE2740;

let ROUTE2741 = browser.currentScene.createNode("ROUTE");
ROUTE2741.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE2741.fromField = "value_changed";
ROUTE2741.toNode = "hanim_l_knee";
ROUTE2741.toField = "set_rotation";
browser.currentScene.children[369] = ROUTE2741;

let ROUTE2742 = browser.currentScene.createNode("ROUTE");
ROUTE2742.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE2742.fromField = "value_changed";
ROUTE2742.toNode = "hanim_l_hip";
ROUTE2742.toField = "set_rotation";
browser.currentScene.children[370] = ROUTE2742;

let ROUTE2743 = browser.currentScene.createNode("ROUTE");
ROUTE2743.fromNode = "Yaws_lower_body_RotationInterpolator";
ROUTE2743.fromField = "value_changed";
ROUTE2743.toNode = "hanim_sacroiliac";
ROUTE2743.toField = "set_rotation";
browser.currentScene.children[371] = ROUTE2743;

let ROUTE2744 = browser.currentScene.createNode("ROUTE");
ROUTE2744.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE2744.fromField = "value_changed";
ROUTE2744.toNode = "hanim_r_wrist";
ROUTE2744.toField = "set_rotation";
browser.currentScene.children[372] = ROUTE2744;

let ROUTE2745 = browser.currentScene.createNode("ROUTE");
ROUTE2745.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE2745.fromField = "value_changed";
ROUTE2745.toNode = "hanim_r_elbow";
ROUTE2745.toField = "set_rotation";
browser.currentScene.children[373] = ROUTE2745;

let ROUTE2746 = browser.currentScene.createNode("ROUTE");
ROUTE2746.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE2746.fromField = "value_changed";
ROUTE2746.toNode = "hanim_r_shoulder";
ROUTE2746.toField = "set_rotation";
browser.currentScene.children[374] = ROUTE2746;

let ROUTE2747 = browser.currentScene.createNode("ROUTE");
ROUTE2747.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE2747.fromField = "value_changed";
ROUTE2747.toNode = "hanim_l_wrist";
ROUTE2747.toField = "set_rotation";
browser.currentScene.children[375] = ROUTE2747;

let ROUTE2748 = browser.currentScene.createNode("ROUTE");
ROUTE2748.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE2748.fromField = "value_changed";
ROUTE2748.toNode = "hanim_l_elbow";
ROUTE2748.toField = "set_rotation";
browser.currentScene.children[376] = ROUTE2748;

let ROUTE2749 = browser.currentScene.createNode("ROUTE");
ROUTE2749.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE2749.fromField = "value_changed";
ROUTE2749.toNode = "hanim_l_shoulder";
ROUTE2749.toField = "set_rotation";
browser.currentScene.children[377] = ROUTE2749;

let ROUTE2750 = browser.currentScene.createNode("ROUTE");
ROUTE2750.fromNode = "Yaws_head_RotationInterpolator";
ROUTE2750.fromField = "value_changed";
ROUTE2750.toNode = "hanim_skullbase";
ROUTE2750.toField = "set_rotation";
browser.currentScene.children[378] = ROUTE2750;

let ROUTE2751 = browser.currentScene.createNode("ROUTE");
ROUTE2751.fromNode = "Yaws_neck_RotationInterpolator";
ROUTE2751.fromField = "value_changed";
ROUTE2751.toNode = "hanim_vc4";
ROUTE2751.toField = "set_rotation";
browser.currentScene.children[379] = ROUTE2751;

let ROUTE2752 = browser.currentScene.createNode("ROUTE");
ROUTE2752.fromNode = "Yaws_upper_body_RotationInterpolator";
ROUTE2752.fromField = "value_changed";
ROUTE2752.toNode = "hanim_vl1";
ROUTE2752.toField = "set_rotation";
browser.currentScene.children[380] = ROUTE2752;

let ROUTE2753 = browser.currentScene.createNode("ROUTE");
ROUTE2753.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE2753.fromField = "value_changed";
ROUTE2753.toNode = "hanim_humanoid_root";
ROUTE2753.toField = "set_rotation";
browser.currentScene.children[381] = ROUTE2753;

let ROUTE2754 = browser.currentScene.createNode("ROUTE");
ROUTE2754.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE2754.fromField = "value_changed";
ROUTE2754.toNode = "hanim_humanoid_root";
ROUTE2754.toField = "set_translation";
browser.currentScene.children[382] = ROUTE2754;

let ROUTE2755 = browser.currentScene.createNode("ROUTE");
ROUTE2755.fromNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE2755.fromField = "value_changed";
ROUTE2755.toNode = "hanim_l_sternoclavicular";
ROUTE2755.toField = "set_rotation";
browser.currentScene.children[383] = ROUTE2755;

let ROUTE2756 = browser.currentScene.createNode("ROUTE");
ROUTE2756.fromNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE2756.fromField = "value_changed";
ROUTE2756.toNode = "hanim_l_acromioclavicular";
ROUTE2756.toField = "set_rotation";
browser.currentScene.children[384] = ROUTE2756;

let ROUTE2757 = browser.currentScene.createNode("ROUTE");
ROUTE2757.fromNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE2757.fromField = "value_changed";
ROUTE2757.toNode = "hanim_r_sternoclavicular";
ROUTE2757.toField = "set_rotation";
browser.currentScene.children[385] = ROUTE2757;

let ROUTE2758 = browser.currentScene.createNode("ROUTE");
ROUTE2758.fromNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE2758.fromField = "value_changed";
ROUTE2758.toNode = "hanim_r_acromioclavicular";
ROUTE2758.toField = "set_rotation";
browser.currentScene.children[386] = ROUTE2758;

let ROUTE2759 = browser.currentScene.createNode("ROUTE");
ROUTE2759.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2759.fromField = "value_changed";
ROUTE2759.toNode = "hanim_l_metatarsal";
ROUTE2759.toField = "set_rotation";
browser.currentScene.children[387] = ROUTE2759;

let ROUTE2760 = browser.currentScene.createNode("ROUTE");
ROUTE2760.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2760.fromField = "value_changed";
ROUTE2760.toNode = "hanim_r_metatarsal";
ROUTE2760.toField = "set_rotation";
browser.currentScene.children[388] = ROUTE2760;

let ROUTE2761 = browser.currentScene.createNode("ROUTE");
ROUTE2761.fromNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE2761.fromField = "value_changed";
ROUTE2761.toNode = "hanim_sacroiliac";
ROUTE2761.toField = "set_rotation";
browser.currentScene.children[389] = ROUTE2761;

let ROUTE2762 = browser.currentScene.createNode("ROUTE");
ROUTE2762.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE2762.fromField = "value_changed";
ROUTE2762.toNode = "hanim_vl5";
ROUTE2762.toField = "set_rotation";
browser.currentScene.children[390] = ROUTE2762;

let ROUTE2763 = browser.currentScene.createNode("ROUTE");
ROUTE2763.fromNode = "Yaw_vc6_YawInterpolator";
ROUTE2763.fromField = "value_changed";
ROUTE2763.toNode = "hanim_vc6";
ROUTE2763.toField = "set_rotation";
browser.currentScene.children[391] = ROUTE2763;

let ROUTE2764 = browser.currentScene.createNode("ROUTE");
ROUTE2764.fromNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE2764.fromField = "value_changed";
ROUTE2764.toNode = "hanim_l_thumb1";
ROUTE2764.toField = "set_rotation";
browser.currentScene.children[392] = ROUTE2764;

let ROUTE2765 = browser.currentScene.createNode("ROUTE");
ROUTE2765.fromNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE2765.fromField = "value_changed";
ROUTE2765.toNode = "hanim_r_thumb1";
ROUTE2765.toField = "set_rotation";
browser.currentScene.children[393] = ROUTE2765;

let ROUTE2766 = browser.currentScene.createNode("ROUTE");
ROUTE2766.fromNode = "RollTimer";
ROUTE2766.fromField = "fraction_changed";
ROUTE2766.toNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE2766.toField = "set_fraction";
browser.currentScene.children[394] = ROUTE2766;

let ROUTE2767 = browser.currentScene.createNode("ROUTE");
ROUTE2767.fromNode = "RollTimer";
ROUTE2767.fromField = "fraction_changed";
ROUTE2767.toNode = "Rolls_r_knee_RotationInterpolator";
ROUTE2767.toField = "set_fraction";
browser.currentScene.children[395] = ROUTE2767;

let ROUTE2768 = browser.currentScene.createNode("ROUTE");
ROUTE2768.fromNode = "RollTimer";
ROUTE2768.fromField = "fraction_changed";
ROUTE2768.toNode = "Rolls_r_hip_RotationInterpolator";
ROUTE2768.toField = "set_fraction";
browser.currentScene.children[396] = ROUTE2768;

let ROUTE2769 = browser.currentScene.createNode("ROUTE");
ROUTE2769.fromNode = "RollTimer";
ROUTE2769.fromField = "fraction_changed";
ROUTE2769.toNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE2769.toField = "set_fraction";
browser.currentScene.children[397] = ROUTE2769;

let ROUTE2770 = browser.currentScene.createNode("ROUTE");
ROUTE2770.fromNode = "RollTimer";
ROUTE2770.fromField = "fraction_changed";
ROUTE2770.toNode = "Rolls_l_knee_RotationInterpolator";
ROUTE2770.toField = "set_fraction";
browser.currentScene.children[398] = ROUTE2770;

let ROUTE2771 = browser.currentScene.createNode("ROUTE");
ROUTE2771.fromNode = "RollTimer";
ROUTE2771.fromField = "fraction_changed";
ROUTE2771.toNode = "Rolls_l_hip_RotationInterpolator";
ROUTE2771.toField = "set_fraction";
browser.currentScene.children[399] = ROUTE2771;

let ROUTE2772 = browser.currentScene.createNode("ROUTE");
ROUTE2772.fromNode = "RollTimer";
ROUTE2772.fromField = "fraction_changed";
ROUTE2772.toNode = "Rolls_lower_body_RotationInterpolator";
ROUTE2772.toField = "set_fraction";
browser.currentScene.children[400] = ROUTE2772;

let ROUTE2773 = browser.currentScene.createNode("ROUTE");
ROUTE2773.fromNode = "RollTimer";
ROUTE2773.fromField = "fraction_changed";
ROUTE2773.toNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE2773.toField = "set_fraction";
browser.currentScene.children[401] = ROUTE2773;

let ROUTE2774 = browser.currentScene.createNode("ROUTE");
ROUTE2774.fromNode = "RollTimer";
ROUTE2774.fromField = "fraction_changed";
ROUTE2774.toNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE2774.toField = "set_fraction";
browser.currentScene.children[402] = ROUTE2774;

let ROUTE2775 = browser.currentScene.createNode("ROUTE");
ROUTE2775.fromNode = "RollTimer";
ROUTE2775.fromField = "fraction_changed";
ROUTE2775.toNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE2775.toField = "set_fraction";
browser.currentScene.children[403] = ROUTE2775;

let ROUTE2776 = browser.currentScene.createNode("ROUTE");
ROUTE2776.fromNode = "RollTimer";
ROUTE2776.fromField = "fraction_changed";
ROUTE2776.toNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE2776.toField = "set_fraction";
browser.currentScene.children[404] = ROUTE2776;

let ROUTE2777 = browser.currentScene.createNode("ROUTE");
ROUTE2777.fromNode = "RollTimer";
ROUTE2777.fromField = "fraction_changed";
ROUTE2777.toNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE2777.toField = "set_fraction";
browser.currentScene.children[405] = ROUTE2777;

let ROUTE2778 = browser.currentScene.createNode("ROUTE");
ROUTE2778.fromNode = "RollTimer";
ROUTE2778.fromField = "fraction_changed";
ROUTE2778.toNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE2778.toField = "set_fraction";
browser.currentScene.children[406] = ROUTE2778;

let ROUTE2779 = browser.currentScene.createNode("ROUTE");
ROUTE2779.fromNode = "RollTimer";
ROUTE2779.fromField = "fraction_changed";
ROUTE2779.toNode = "Rolls_head_RotationInterpolator";
ROUTE2779.toField = "set_fraction";
browser.currentScene.children[407] = ROUTE2779;

let ROUTE2780 = browser.currentScene.createNode("ROUTE");
ROUTE2780.fromNode = "RollTimer";
ROUTE2780.fromField = "fraction_changed";
ROUTE2780.toNode = "Rolls_neck_RotationInterpolator";
ROUTE2780.toField = "set_fraction";
browser.currentScene.children[408] = ROUTE2780;

let ROUTE2781 = browser.currentScene.createNode("ROUTE");
ROUTE2781.fromNode = "RollTimer";
ROUTE2781.fromField = "fraction_changed";
ROUTE2781.toNode = "Rolls_upper_body_RotationInterpolator";
ROUTE2781.toField = "set_fraction";
browser.currentScene.children[409] = ROUTE2781;

let ROUTE2782 = browser.currentScene.createNode("ROUTE");
ROUTE2782.fromNode = "RollTimer";
ROUTE2782.fromField = "fraction_changed";
ROUTE2782.toNode = "Rolls_whole_body_RotationInterpolator";
ROUTE2782.toField = "set_fraction";
browser.currentScene.children[410] = ROUTE2782;

let ROUTE2783 = browser.currentScene.createNode("ROUTE");
ROUTE2783.fromNode = "RollTimer";
ROUTE2783.fromField = "fraction_changed";
ROUTE2783.toNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE2783.toField = "set_fraction";
browser.currentScene.children[411] = ROUTE2783;

let ROUTE2784 = browser.currentScene.createNode("ROUTE");
ROUTE2784.fromNode = "RollTimer";
ROUTE2784.fromField = "fraction_changed";
ROUTE2784.toNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE2784.toField = "set_fraction";
browser.currentScene.children[412] = ROUTE2784;

let ROUTE2785 = browser.currentScene.createNode("ROUTE");
ROUTE2785.fromNode = "RollTimer";
ROUTE2785.fromField = "fraction_changed";
ROUTE2785.toNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE2785.toField = "set_fraction";
browser.currentScene.children[413] = ROUTE2785;

let ROUTE2786 = browser.currentScene.createNode("ROUTE");
ROUTE2786.fromNode = "RollTimer";
ROUTE2786.fromField = "fraction_changed";
ROUTE2786.toNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE2786.toField = "set_fraction";
browser.currentScene.children[414] = ROUTE2786;

let ROUTE2787 = browser.currentScene.createNode("ROUTE");
ROUTE2787.fromNode = "RollTimer";
ROUTE2787.fromField = "fraction_changed";
ROUTE2787.toNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE2787.toField = "set_fraction";
browser.currentScene.children[415] = ROUTE2787;

let ROUTE2788 = browser.currentScene.createNode("ROUTE");
ROUTE2788.fromNode = "RollTimer";
ROUTE2788.fromField = "fraction_changed";
ROUTE2788.toNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2788.toField = "set_fraction";
browser.currentScene.children[416] = ROUTE2788;

let ROUTE2789 = browser.currentScene.createNode("ROUTE");
ROUTE2789.fromNode = "RollTimer";
ROUTE2789.fromField = "fraction_changed";
ROUTE2789.toNode = "Roll_sacroiliac_YawInterpolator";
ROUTE2789.toField = "set_fraction";
browser.currentScene.children[417] = ROUTE2789;

let ROUTE2790 = browser.currentScene.createNode("ROUTE");
ROUTE2790.fromNode = "RollTimer";
ROUTE2790.fromField = "fraction_changed";
ROUTE2790.toNode = "Roll_vl5_YawInterpolator";
ROUTE2790.toField = "set_fraction";
browser.currentScene.children[418] = ROUTE2790;

let ROUTE2791 = browser.currentScene.createNode("ROUTE");
ROUTE2791.fromNode = "RollTimer";
ROUTE2791.fromField = "fraction_changed";
ROUTE2791.toNode = "Roll_vc6_YawInterpolator";
ROUTE2791.toField = "set_fraction";
browser.currentScene.children[419] = ROUTE2791;

let ROUTE2792 = browser.currentScene.createNode("ROUTE");
ROUTE2792.fromNode = "RollTimer";
ROUTE2792.fromField = "fraction_changed";
ROUTE2792.toNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE2792.toField = "set_fraction";
browser.currentScene.children[420] = ROUTE2792;

let ROUTE2793 = browser.currentScene.createNode("ROUTE");
ROUTE2793.fromNode = "RollTimer";
ROUTE2793.fromField = "fraction_changed";
ROUTE2793.toNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE2793.toField = "set_fraction";
browser.currentScene.children[421] = ROUTE2793;

let ROUTE2794 = browser.currentScene.createNode("ROUTE");
ROUTE2794.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE2794.fromField = "value_changed";
ROUTE2794.toNode = "hanim_r_ankle";
ROUTE2794.toField = "set_rotation";
browser.currentScene.children[422] = ROUTE2794;

let ROUTE2795 = browser.currentScene.createNode("ROUTE");
ROUTE2795.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE2795.fromField = "value_changed";
ROUTE2795.toNode = "hanim_r_knee";
ROUTE2795.toField = "set_rotation";
browser.currentScene.children[423] = ROUTE2795;

let ROUTE2796 = browser.currentScene.createNode("ROUTE");
ROUTE2796.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE2796.fromField = "value_changed";
ROUTE2796.toNode = "hanim_r_hip";
ROUTE2796.toField = "set_rotation";
browser.currentScene.children[424] = ROUTE2796;

let ROUTE2797 = browser.currentScene.createNode("ROUTE");
ROUTE2797.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE2797.fromField = "value_changed";
ROUTE2797.toNode = "hanim_l_ankle";
ROUTE2797.toField = "set_rotation";
browser.currentScene.children[425] = ROUTE2797;

let ROUTE2798 = browser.currentScene.createNode("ROUTE");
ROUTE2798.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE2798.fromField = "value_changed";
ROUTE2798.toNode = "hanim_l_knee";
ROUTE2798.toField = "set_rotation";
browser.currentScene.children[426] = ROUTE2798;

let ROUTE2799 = browser.currentScene.createNode("ROUTE");
ROUTE2799.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE2799.fromField = "value_changed";
ROUTE2799.toNode = "hanim_l_hip";
ROUTE2799.toField = "set_rotation";
browser.currentScene.children[427] = ROUTE2799;

let ROUTE2800 = browser.currentScene.createNode("ROUTE");
ROUTE2800.fromNode = "Rolls_lower_body_RotationInterpolator";
ROUTE2800.fromField = "value_changed";
ROUTE2800.toNode = "hanim_sacroiliac";
ROUTE2800.toField = "set_rotation";
browser.currentScene.children[428] = ROUTE2800;

let ROUTE2801 = browser.currentScene.createNode("ROUTE");
ROUTE2801.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE2801.fromField = "value_changed";
ROUTE2801.toNode = "hanim_r_wrist";
ROUTE2801.toField = "set_rotation";
browser.currentScene.children[429] = ROUTE2801;

let ROUTE2802 = browser.currentScene.createNode("ROUTE");
ROUTE2802.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE2802.fromField = "value_changed";
ROUTE2802.toNode = "hanim_r_elbow";
ROUTE2802.toField = "set_rotation";
browser.currentScene.children[430] = ROUTE2802;

let ROUTE2803 = browser.currentScene.createNode("ROUTE");
ROUTE2803.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE2803.fromField = "value_changed";
ROUTE2803.toNode = "hanim_r_shoulder";
ROUTE2803.toField = "set_rotation";
browser.currentScene.children[431] = ROUTE2803;

let ROUTE2804 = browser.currentScene.createNode("ROUTE");
ROUTE2804.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE2804.fromField = "value_changed";
ROUTE2804.toNode = "hanim_l_wrist";
ROUTE2804.toField = "set_rotation";
browser.currentScene.children[432] = ROUTE2804;

let ROUTE2805 = browser.currentScene.createNode("ROUTE");
ROUTE2805.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE2805.fromField = "value_changed";
ROUTE2805.toNode = "hanim_l_elbow";
ROUTE2805.toField = "set_rotation";
browser.currentScene.children[433] = ROUTE2805;

let ROUTE2806 = browser.currentScene.createNode("ROUTE");
ROUTE2806.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE2806.fromField = "value_changed";
ROUTE2806.toNode = "hanim_l_shoulder";
ROUTE2806.toField = "set_rotation";
browser.currentScene.children[434] = ROUTE2806;

let ROUTE2807 = browser.currentScene.createNode("ROUTE");
ROUTE2807.fromNode = "Rolls_head_RotationInterpolator";
ROUTE2807.fromField = "value_changed";
ROUTE2807.toNode = "hanim_skullbase";
ROUTE2807.toField = "set_rotation";
browser.currentScene.children[435] = ROUTE2807;

let ROUTE2808 = browser.currentScene.createNode("ROUTE");
ROUTE2808.fromNode = "Rolls_neck_RotationInterpolator";
ROUTE2808.fromField = "value_changed";
ROUTE2808.toNode = "hanim_vc4";
ROUTE2808.toField = "set_rotation";
browser.currentScene.children[436] = ROUTE2808;

let ROUTE2809 = browser.currentScene.createNode("ROUTE");
ROUTE2809.fromNode = "Rolls_upper_body_RotationInterpolator";
ROUTE2809.fromField = "value_changed";
ROUTE2809.toNode = "hanim_vl1";
ROUTE2809.toField = "set_rotation";
browser.currentScene.children[437] = ROUTE2809;

let ROUTE2810 = browser.currentScene.createNode("ROUTE");
ROUTE2810.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE2810.fromField = "value_changed";
ROUTE2810.toNode = "hanim_humanoid_root";
ROUTE2810.toField = "set_rotation";
browser.currentScene.children[438] = ROUTE2810;

let ROUTE2811 = browser.currentScene.createNode("ROUTE");
ROUTE2811.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE2811.fromField = "value_changed";
ROUTE2811.toNode = "hanim_humanoid_root";
ROUTE2811.toField = "set_translation";
browser.currentScene.children[439] = ROUTE2811;

let ROUTE2812 = browser.currentScene.createNode("ROUTE");
ROUTE2812.fromNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE2812.fromField = "value_changed";
ROUTE2812.toNode = "hanim_l_sternoclavicular";
ROUTE2812.toField = "set_rotation";
browser.currentScene.children[440] = ROUTE2812;

let ROUTE2813 = browser.currentScene.createNode("ROUTE");
ROUTE2813.fromNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE2813.fromField = "value_changed";
ROUTE2813.toNode = "hanim_l_acromioclavicular";
ROUTE2813.toField = "set_rotation";
browser.currentScene.children[441] = ROUTE2813;

let ROUTE2814 = browser.currentScene.createNode("ROUTE");
ROUTE2814.fromNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE2814.fromField = "value_changed";
ROUTE2814.toNode = "hanim_r_sternoclavicular";
ROUTE2814.toField = "set_rotation";
browser.currentScene.children[442] = ROUTE2814;

let ROUTE2815 = browser.currentScene.createNode("ROUTE");
ROUTE2815.fromNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE2815.fromField = "value_changed";
ROUTE2815.toNode = "hanim_r_acromioclavicular";
ROUTE2815.toField = "set_rotation";
browser.currentScene.children[443] = ROUTE2815;

let ROUTE2816 = browser.currentScene.createNode("ROUTE");
ROUTE2816.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2816.fromField = "value_changed";
ROUTE2816.toNode = "hanim_l_metatarsal";
ROUTE2816.toField = "set_rotation";
browser.currentScene.children[444] = ROUTE2816;

let ROUTE2817 = browser.currentScene.createNode("ROUTE");
ROUTE2817.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2817.fromField = "value_changed";
ROUTE2817.toNode = "hanim_r_metatarsal";
ROUTE2817.toField = "set_rotation";
browser.currentScene.children[445] = ROUTE2817;

let ROUTE2818 = browser.currentScene.createNode("ROUTE");
ROUTE2818.fromNode = "Roll_sacroiliac_YawInterpolator";
ROUTE2818.fromField = "value_changed";
ROUTE2818.toNode = "hanim_sacroiliac";
ROUTE2818.toField = "set_rotation";
browser.currentScene.children[446] = ROUTE2818;

let ROUTE2819 = browser.currentScene.createNode("ROUTE");
ROUTE2819.fromNode = "Roll_vl5_YawInterpolator";
ROUTE2819.fromField = "value_changed";
ROUTE2819.toNode = "hanim_vl5";
ROUTE2819.toField = "set_rotation";
browser.currentScene.children[447] = ROUTE2819;

let ROUTE2820 = browser.currentScene.createNode("ROUTE");
ROUTE2820.fromNode = "Roll_vc6_YawInterpolator";
ROUTE2820.fromField = "value_changed";
ROUTE2820.toNode = "hanim_vc6";
ROUTE2820.toField = "set_rotation";
browser.currentScene.children[448] = ROUTE2820;

let ROUTE2821 = browser.currentScene.createNode("ROUTE");
ROUTE2821.fromNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE2821.fromField = "value_changed";
ROUTE2821.toNode = "hanim_l_thumb1";
ROUTE2821.toField = "set_rotation";
browser.currentScene.children[449] = ROUTE2821;

let ROUTE2822 = browser.currentScene.createNode("ROUTE");
ROUTE2822.fromNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE2822.fromField = "value_changed";
ROUTE2822.toNode = "hanim_r_thumb1";
ROUTE2822.toField = "set_rotation";
browser.currentScene.children[450] = ROUTE2822;

let ROUTE2823 = browser.currentScene.createNode("ROUTE");
ROUTE2823.fromNode = "WalkTimer";
ROUTE2823.fromField = "fraction_changed";
ROUTE2823.toNode = "Walk_r_ankle_RotationInterpolator";
ROUTE2823.toField = "set_fraction";
browser.currentScene.children[451] = ROUTE2823;

let ROUTE2824 = browser.currentScene.createNode("ROUTE");
ROUTE2824.fromNode = "WalkTimer";
ROUTE2824.fromField = "fraction_changed";
ROUTE2824.toNode = "Walk_r_knee_RotationInterpolator";
ROUTE2824.toField = "set_fraction";
browser.currentScene.children[452] = ROUTE2824;

let ROUTE2825 = browser.currentScene.createNode("ROUTE");
ROUTE2825.fromNode = "WalkTimer";
ROUTE2825.fromField = "fraction_changed";
ROUTE2825.toNode = "Walk_r_hip_RotationInterpolator";
ROUTE2825.toField = "set_fraction";
browser.currentScene.children[453] = ROUTE2825;

let ROUTE2826 = browser.currentScene.createNode("ROUTE");
ROUTE2826.fromNode = "WalkTimer";
ROUTE2826.fromField = "fraction_changed";
ROUTE2826.toNode = "Walk_l_ankle_RotationInterpolator";
ROUTE2826.toField = "set_fraction";
browser.currentScene.children[454] = ROUTE2826;

let ROUTE2827 = browser.currentScene.createNode("ROUTE");
ROUTE2827.fromNode = "WalkTimer";
ROUTE2827.fromField = "fraction_changed";
ROUTE2827.toNode = "Walk_l_knee_RotationInterpolator";
ROUTE2827.toField = "set_fraction";
browser.currentScene.children[455] = ROUTE2827;

let ROUTE2828 = browser.currentScene.createNode("ROUTE");
ROUTE2828.fromNode = "WalkTimer";
ROUTE2828.fromField = "fraction_changed";
ROUTE2828.toNode = "Walk_l_hip_RotationInterpolator";
ROUTE2828.toField = "set_fraction";
browser.currentScene.children[456] = ROUTE2828;

let ROUTE2829 = browser.currentScene.createNode("ROUTE");
ROUTE2829.fromNode = "WalkTimer";
ROUTE2829.fromField = "fraction_changed";
ROUTE2829.toNode = "Walk_lower_body_RotationInterpolator";
ROUTE2829.toField = "set_fraction";
browser.currentScene.children[457] = ROUTE2829;

let ROUTE2830 = browser.currentScene.createNode("ROUTE");
ROUTE2830.fromNode = "WalkTimer";
ROUTE2830.fromField = "fraction_changed";
ROUTE2830.toNode = "Walk_r_wrist_RotationInterpolator";
ROUTE2830.toField = "set_fraction";
browser.currentScene.children[458] = ROUTE2830;

let ROUTE2831 = browser.currentScene.createNode("ROUTE");
ROUTE2831.fromNode = "WalkTimer";
ROUTE2831.fromField = "fraction_changed";
ROUTE2831.toNode = "Walk_r_elbow_RotationInterpolator";
ROUTE2831.toField = "set_fraction";
browser.currentScene.children[459] = ROUTE2831;

let ROUTE2832 = browser.currentScene.createNode("ROUTE");
ROUTE2832.fromNode = "WalkTimer";
ROUTE2832.fromField = "fraction_changed";
ROUTE2832.toNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE2832.toField = "set_fraction";
browser.currentScene.children[460] = ROUTE2832;

let ROUTE2833 = browser.currentScene.createNode("ROUTE");
ROUTE2833.fromNode = "WalkTimer";
ROUTE2833.fromField = "fraction_changed";
ROUTE2833.toNode = "Walk_l_wrist_RotationInterpolator";
ROUTE2833.toField = "set_fraction";
browser.currentScene.children[461] = ROUTE2833;

let ROUTE2834 = browser.currentScene.createNode("ROUTE");
ROUTE2834.fromNode = "WalkTimer";
ROUTE2834.fromField = "fraction_changed";
ROUTE2834.toNode = "Walk_l_elbow_RotationInterpolator";
ROUTE2834.toField = "set_fraction";
browser.currentScene.children[462] = ROUTE2834;

let ROUTE2835 = browser.currentScene.createNode("ROUTE");
ROUTE2835.fromNode = "WalkTimer";
ROUTE2835.fromField = "fraction_changed";
ROUTE2835.toNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE2835.toField = "set_fraction";
browser.currentScene.children[463] = ROUTE2835;

let ROUTE2836 = browser.currentScene.createNode("ROUTE");
ROUTE2836.fromNode = "WalkTimer";
ROUTE2836.fromField = "fraction_changed";
ROUTE2836.toNode = "Walk_head_RotationInterpolator";
ROUTE2836.toField = "set_fraction";
browser.currentScene.children[464] = ROUTE2836;

let ROUTE2837 = browser.currentScene.createNode("ROUTE");
ROUTE2837.fromNode = "WalkTimer";
ROUTE2837.fromField = "fraction_changed";
ROUTE2837.toNode = "Walk_neck_RotationInterpolator";
ROUTE2837.toField = "set_fraction";
browser.currentScene.children[465] = ROUTE2837;

let ROUTE2838 = browser.currentScene.createNode("ROUTE");
ROUTE2838.fromNode = "WalkTimer";
ROUTE2838.fromField = "fraction_changed";
ROUTE2838.toNode = "Walk_upper_body_RotationInterpolator";
ROUTE2838.toField = "set_fraction";
browser.currentScene.children[466] = ROUTE2838;

let ROUTE2839 = browser.currentScene.createNode("ROUTE");
ROUTE2839.fromNode = "WalkTimer";
ROUTE2839.fromField = "fraction_changed";
ROUTE2839.toNode = "Walk_whole_body_RotationInterpolator";
ROUTE2839.toField = "set_fraction";
browser.currentScene.children[467] = ROUTE2839;

let ROUTE2840 = browser.currentScene.createNode("ROUTE");
ROUTE2840.fromNode = "WalkTimer";
ROUTE2840.fromField = "fraction_changed";
ROUTE2840.toNode = "Walk_whole_body_TranslationInterpolator";
ROUTE2840.toField = "set_fraction";
browser.currentScene.children[468] = ROUTE2840;

let ROUTE2841 = browser.currentScene.createNode("ROUTE");
ROUTE2841.fromNode = "WalkTimer";
ROUTE2841.fromField = "fraction_changed";
ROUTE2841.toNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE2841.toField = "set_fraction";
browser.currentScene.children[469] = ROUTE2841;

let ROUTE2842 = browser.currentScene.createNode("ROUTE");
ROUTE2842.fromNode = "WalkTimer";
ROUTE2842.fromField = "fraction_changed";
ROUTE2842.toNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE2842.toField = "set_fraction";
browser.currentScene.children[470] = ROUTE2842;

let ROUTE2843 = browser.currentScene.createNode("ROUTE");
ROUTE2843.fromNode = "WalkTimer";
ROUTE2843.fromField = "fraction_changed";
ROUTE2843.toNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE2843.toField = "set_fraction";
browser.currentScene.children[471] = ROUTE2843;

let ROUTE2844 = browser.currentScene.createNode("ROUTE");
ROUTE2844.fromNode = "WalkTimer";
ROUTE2844.fromField = "fraction_changed";
ROUTE2844.toNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE2844.toField = "set_fraction";
browser.currentScene.children[472] = ROUTE2844;

let ROUTE2845 = browser.currentScene.createNode("ROUTE");
ROUTE2845.fromNode = "WalkTimer";
ROUTE2845.fromField = "fraction_changed";
ROUTE2845.toNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2845.toField = "set_fraction";
browser.currentScene.children[473] = ROUTE2845;

let ROUTE2846 = browser.currentScene.createNode("ROUTE");
ROUTE2846.fromNode = "WalkTimer";
ROUTE2846.fromField = "fraction_changed";
ROUTE2846.toNode = "Walk_sacroiliac_YawInterpolator";
ROUTE2846.toField = "set_fraction";
browser.currentScene.children[474] = ROUTE2846;

let ROUTE2847 = browser.currentScene.createNode("ROUTE");
ROUTE2847.fromNode = "WalkTimer";
ROUTE2847.fromField = "fraction_changed";
ROUTE2847.toNode = "Walk_vl5_YawInterpolator";
ROUTE2847.toField = "set_fraction";
browser.currentScene.children[475] = ROUTE2847;

let ROUTE2848 = browser.currentScene.createNode("ROUTE");
ROUTE2848.fromNode = "WalkTimer";
ROUTE2848.fromField = "fraction_changed";
ROUTE2848.toNode = "Walk_vc6_YawInterpolator";
ROUTE2848.toField = "set_fraction";
browser.currentScene.children[476] = ROUTE2848;

let ROUTE2849 = browser.currentScene.createNode("ROUTE");
ROUTE2849.fromNode = "WalkTimer";
ROUTE2849.fromField = "fraction_changed";
ROUTE2849.toNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE2849.toField = "set_fraction";
browser.currentScene.children[477] = ROUTE2849;

let ROUTE2850 = browser.currentScene.createNode("ROUTE");
ROUTE2850.fromNode = "WalkTimer";
ROUTE2850.fromField = "fraction_changed";
ROUTE2850.toNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE2850.toField = "set_fraction";
browser.currentScene.children[478] = ROUTE2850;

let ROUTE2851 = browser.currentScene.createNode("ROUTE");
ROUTE2851.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE2851.fromField = "value_changed";
ROUTE2851.toNode = "hanim_r_ankle";
ROUTE2851.toField = "set_rotation";
browser.currentScene.children[479] = ROUTE2851;

let ROUTE2852 = browser.currentScene.createNode("ROUTE");
ROUTE2852.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE2852.fromField = "value_changed";
ROUTE2852.toNode = "hanim_r_knee";
ROUTE2852.toField = "set_rotation";
browser.currentScene.children[480] = ROUTE2852;

let ROUTE2853 = browser.currentScene.createNode("ROUTE");
ROUTE2853.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE2853.fromField = "value_changed";
ROUTE2853.toNode = "hanim_r_hip";
ROUTE2853.toField = "set_rotation";
browser.currentScene.children[481] = ROUTE2853;

let ROUTE2854 = browser.currentScene.createNode("ROUTE");
ROUTE2854.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE2854.fromField = "value_changed";
ROUTE2854.toNode = "hanim_l_ankle";
ROUTE2854.toField = "set_rotation";
browser.currentScene.children[482] = ROUTE2854;

let ROUTE2855 = browser.currentScene.createNode("ROUTE");
ROUTE2855.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE2855.fromField = "value_changed";
ROUTE2855.toNode = "hanim_l_knee";
ROUTE2855.toField = "set_rotation";
browser.currentScene.children[483] = ROUTE2855;

let ROUTE2856 = browser.currentScene.createNode("ROUTE");
ROUTE2856.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE2856.fromField = "value_changed";
ROUTE2856.toNode = "hanim_l_hip";
ROUTE2856.toField = "set_rotation";
browser.currentScene.children[484] = ROUTE2856;

let ROUTE2857 = browser.currentScene.createNode("ROUTE");
ROUTE2857.fromNode = "Walk_lower_body_RotationInterpolator";
ROUTE2857.fromField = "value_changed";
ROUTE2857.toNode = "hanim_sacroiliac";
ROUTE2857.toField = "set_rotation";
browser.currentScene.children[485] = ROUTE2857;

let ROUTE2858 = browser.currentScene.createNode("ROUTE");
ROUTE2858.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE2858.fromField = "value_changed";
ROUTE2858.toNode = "hanim_r_wrist";
ROUTE2858.toField = "set_rotation";
browser.currentScene.children[486] = ROUTE2858;

let ROUTE2859 = browser.currentScene.createNode("ROUTE");
ROUTE2859.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE2859.fromField = "value_changed";
ROUTE2859.toNode = "hanim_r_elbow";
ROUTE2859.toField = "set_rotation";
browser.currentScene.children[487] = ROUTE2859;

let ROUTE2860 = browser.currentScene.createNode("ROUTE");
ROUTE2860.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE2860.fromField = "value_changed";
ROUTE2860.toNode = "hanim_r_shoulder";
ROUTE2860.toField = "set_rotation";
browser.currentScene.children[488] = ROUTE2860;

let ROUTE2861 = browser.currentScene.createNode("ROUTE");
ROUTE2861.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE2861.fromField = "value_changed";
ROUTE2861.toNode = "hanim_l_wrist";
ROUTE2861.toField = "set_rotation";
browser.currentScene.children[489] = ROUTE2861;

let ROUTE2862 = browser.currentScene.createNode("ROUTE");
ROUTE2862.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE2862.fromField = "value_changed";
ROUTE2862.toNode = "hanim_l_elbow";
ROUTE2862.toField = "set_rotation";
browser.currentScene.children[490] = ROUTE2862;

let ROUTE2863 = browser.currentScene.createNode("ROUTE");
ROUTE2863.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE2863.fromField = "value_changed";
ROUTE2863.toNode = "hanim_l_shoulder";
ROUTE2863.toField = "set_rotation";
browser.currentScene.children[491] = ROUTE2863;

let ROUTE2864 = browser.currentScene.createNode("ROUTE");
ROUTE2864.fromNode = "Walk_head_RotationInterpolator";
ROUTE2864.fromField = "value_changed";
ROUTE2864.toNode = "hanim_skullbase";
ROUTE2864.toField = "set_rotation";
browser.currentScene.children[492] = ROUTE2864;

let ROUTE2865 = browser.currentScene.createNode("ROUTE");
ROUTE2865.fromNode = "Walk_neck_RotationInterpolator";
ROUTE2865.fromField = "value_changed";
ROUTE2865.toNode = "hanim_vc4";
ROUTE2865.toField = "set_rotation";
browser.currentScene.children[493] = ROUTE2865;

let ROUTE2866 = browser.currentScene.createNode("ROUTE");
ROUTE2866.fromNode = "Walk_upper_body_RotationInterpolator";
ROUTE2866.fromField = "value_changed";
ROUTE2866.toNode = "hanim_vl1";
ROUTE2866.toField = "set_rotation";
browser.currentScene.children[494] = ROUTE2866;

let ROUTE2867 = browser.currentScene.createNode("ROUTE");
ROUTE2867.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE2867.fromField = "value_changed";
ROUTE2867.toNode = "hanim_humanoid_root";
ROUTE2867.toField = "set_rotation";
browser.currentScene.children[495] = ROUTE2867;

let ROUTE2868 = browser.currentScene.createNode("ROUTE");
ROUTE2868.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE2868.fromField = "value_changed";
ROUTE2868.toNode = "hanim_humanoid_root";
ROUTE2868.toField = "set_translation";
browser.currentScene.children[496] = ROUTE2868;

let ROUTE2869 = browser.currentScene.createNode("ROUTE");
ROUTE2869.fromNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE2869.fromField = "value_changed";
ROUTE2869.toNode = "hanim_l_sternoclavicular";
ROUTE2869.toField = "set_rotation";
browser.currentScene.children[497] = ROUTE2869;

let ROUTE2870 = browser.currentScene.createNode("ROUTE");
ROUTE2870.fromNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE2870.fromField = "value_changed";
ROUTE2870.toNode = "hanim_l_acromioclavicular";
ROUTE2870.toField = "set_rotation";
browser.currentScene.children[498] = ROUTE2870;

let ROUTE2871 = browser.currentScene.createNode("ROUTE");
ROUTE2871.fromNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE2871.fromField = "value_changed";
ROUTE2871.toNode = "hanim_r_sternoclavicular";
ROUTE2871.toField = "set_rotation";
browser.currentScene.children[499] = ROUTE2871;

let ROUTE2872 = browser.currentScene.createNode("ROUTE");
ROUTE2872.fromNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE2872.fromField = "value_changed";
ROUTE2872.toNode = "hanim_r_acromioclavicular";
ROUTE2872.toField = "set_rotation";
browser.currentScene.children[500] = ROUTE2872;

let ROUTE2873 = browser.currentScene.createNode("ROUTE");
ROUTE2873.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2873.fromField = "value_changed";
ROUTE2873.toNode = "hanim_l_metatarsal";
ROUTE2873.toField = "set_rotation";
browser.currentScene.children[501] = ROUTE2873;

let ROUTE2874 = browser.currentScene.createNode("ROUTE");
ROUTE2874.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2874.fromField = "value_changed";
ROUTE2874.toNode = "hanim_r_metatarsal";
ROUTE2874.toField = "set_rotation";
browser.currentScene.children[502] = ROUTE2874;

let ROUTE2875 = browser.currentScene.createNode("ROUTE");
ROUTE2875.fromNode = "Walk_sacroiliac_YawInterpolator";
ROUTE2875.fromField = "value_changed";
ROUTE2875.toNode = "hanim_sacroiliac";
ROUTE2875.toField = "set_rotation";
browser.currentScene.children[503] = ROUTE2875;

let ROUTE2876 = browser.currentScene.createNode("ROUTE");
ROUTE2876.fromNode = "Walk_vl5_YawInterpolator";
ROUTE2876.fromField = "value_changed";
ROUTE2876.toNode = "hanim_vl5";
ROUTE2876.toField = "set_rotation";
browser.currentScene.children[504] = ROUTE2876;

let ROUTE2877 = browser.currentScene.createNode("ROUTE");
ROUTE2877.fromNode = "Walk_vc6_YawInterpolator";
ROUTE2877.fromField = "value_changed";
ROUTE2877.toNode = "hanim_vc6";
ROUTE2877.toField = "set_rotation";
browser.currentScene.children[505] = ROUTE2877;

let ROUTE2878 = browser.currentScene.createNode("ROUTE");
ROUTE2878.fromNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE2878.fromField = "value_changed";
ROUTE2878.toNode = "hanim_l_thumb1";
ROUTE2878.toField = "set_rotation";
browser.currentScene.children[506] = ROUTE2878;

let ROUTE2879 = browser.currentScene.createNode("ROUTE");
ROUTE2879.fromNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE2879.fromField = "value_changed";
ROUTE2879.toNode = "hanim_r_thumb1";
ROUTE2879.toField = "set_rotation";
browser.currentScene.children[507] = ROUTE2879;

let ROUTE2880 = browser.currentScene.createNode("ROUTE");
ROUTE2880.fromNode = "RunTimer";
ROUTE2880.fromField = "fraction_changed";
ROUTE2880.toNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE2880.toField = "set_fraction";
browser.currentScene.children[508] = ROUTE2880;

let ROUTE2881 = browser.currentScene.createNode("ROUTE");
ROUTE2881.fromNode = "RunTimer";
ROUTE2881.fromField = "fraction_changed";
ROUTE2881.toNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE2881.toField = "set_fraction";
browser.currentScene.children[509] = ROUTE2881;

let ROUTE2882 = browser.currentScene.createNode("ROUTE");
ROUTE2882.fromNode = "RunTimer";
ROUTE2882.fromField = "fraction_changed";
ROUTE2882.toNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE2882.toField = "set_fraction";
browser.currentScene.children[510] = ROUTE2882;

let ROUTE2883 = browser.currentScene.createNode("ROUTE");
ROUTE2883.fromNode = "RunTimer";
ROUTE2883.fromField = "fraction_changed";
ROUTE2883.toNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE2883.toField = "set_fraction";
browser.currentScene.children[511] = ROUTE2883;

let ROUTE2884 = browser.currentScene.createNode("ROUTE");
ROUTE2884.fromNode = "RunTimer";
ROUTE2884.fromField = "fraction_changed";
ROUTE2884.toNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE2884.toField = "set_fraction";
browser.currentScene.children[512] = ROUTE2884;

let ROUTE2885 = browser.currentScene.createNode("ROUTE");
ROUTE2885.fromNode = "RunTimer";
ROUTE2885.fromField = "fraction_changed";
ROUTE2885.toNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE2885.toField = "set_fraction";
browser.currentScene.children[513] = ROUTE2885;

let ROUTE2886 = browser.currentScene.createNode("ROUTE");
ROUTE2886.fromNode = "RunTimer";
ROUTE2886.fromField = "fraction_changed";
ROUTE2886.toNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE2886.toField = "set_fraction";
browser.currentScene.children[514] = ROUTE2886;

let ROUTE2887 = browser.currentScene.createNode("ROUTE");
ROUTE2887.fromNode = "RunTimer";
ROUTE2887.fromField = "fraction_changed";
ROUTE2887.toNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE2887.toField = "set_fraction";
browser.currentScene.children[515] = ROUTE2887;

let ROUTE2888 = browser.currentScene.createNode("ROUTE");
ROUTE2888.fromNode = "RunTimer";
ROUTE2888.fromField = "fraction_changed";
ROUTE2888.toNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE2888.toField = "set_fraction";
browser.currentScene.children[516] = ROUTE2888;

let ROUTE2889 = browser.currentScene.createNode("ROUTE");
ROUTE2889.fromNode = "RunTimer";
ROUTE2889.fromField = "fraction_changed";
ROUTE2889.toNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE2889.toField = "set_fraction";
browser.currentScene.children[517] = ROUTE2889;

let ROUTE2890 = browser.currentScene.createNode("ROUTE");
ROUTE2890.fromNode = "RunTimer";
ROUTE2890.fromField = "fraction_changed";
ROUTE2890.toNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE2890.toField = "set_fraction";
browser.currentScene.children[518] = ROUTE2890;

let ROUTE2891 = browser.currentScene.createNode("ROUTE");
ROUTE2891.fromNode = "RunTimer";
ROUTE2891.fromField = "fraction_changed";
ROUTE2891.toNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE2891.toField = "set_fraction";
browser.currentScene.children[519] = ROUTE2891;

let ROUTE2892 = browser.currentScene.createNode("ROUTE");
ROUTE2892.fromNode = "RunTimer";
ROUTE2892.fromField = "fraction_changed";
ROUTE2892.toNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE2892.toField = "set_fraction";
browser.currentScene.children[520] = ROUTE2892;

let ROUTE2893 = browser.currentScene.createNode("ROUTE");
ROUTE2893.fromNode = "RunTimer";
ROUTE2893.fromField = "fraction_changed";
ROUTE2893.toNode = "Run_head_RotationInterpolator_Run";
ROUTE2893.toField = "set_fraction";
browser.currentScene.children[521] = ROUTE2893;

let ROUTE2894 = browser.currentScene.createNode("ROUTE");
ROUTE2894.fromNode = "RunTimer";
ROUTE2894.fromField = "fraction_changed";
ROUTE2894.toNode = "Run_neck_RotationInterpolator_Run";
ROUTE2894.toField = "set_fraction";
browser.currentScene.children[522] = ROUTE2894;

let ROUTE2895 = browser.currentScene.createNode("ROUTE");
ROUTE2895.fromNode = "RunTimer";
ROUTE2895.fromField = "fraction_changed";
ROUTE2895.toNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE2895.toField = "set_fraction";
browser.currentScene.children[523] = ROUTE2895;

let ROUTE2896 = browser.currentScene.createNode("ROUTE");
ROUTE2896.fromNode = "RunTimer";
ROUTE2896.fromField = "fraction_changed";
ROUTE2896.toNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE2896.toField = "set_fraction";
browser.currentScene.children[524] = ROUTE2896;

let ROUTE2897 = browser.currentScene.createNode("ROUTE");
ROUTE2897.fromNode = "RunTimer";
ROUTE2897.fromField = "fraction_changed";
ROUTE2897.toNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE2897.toField = "set_fraction";
browser.currentScene.children[525] = ROUTE2897;

let ROUTE2898 = browser.currentScene.createNode("ROUTE");
ROUTE2898.fromNode = "RunTimer";
ROUTE2898.fromField = "fraction_changed";
ROUTE2898.toNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE2898.toField = "set_fraction";
browser.currentScene.children[526] = ROUTE2898;

let ROUTE2899 = browser.currentScene.createNode("ROUTE");
ROUTE2899.fromNode = "RunTimer";
ROUTE2899.fromField = "fraction_changed";
ROUTE2899.toNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE2899.toField = "set_fraction";
browser.currentScene.children[527] = ROUTE2899;

let ROUTE2900 = browser.currentScene.createNode("ROUTE");
ROUTE2900.fromNode = "RunTimer";
ROUTE2900.fromField = "fraction_changed";
ROUTE2900.toNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE2900.toField = "set_fraction";
browser.currentScene.children[528] = ROUTE2900;

let ROUTE2901 = browser.currentScene.createNode("ROUTE");
ROUTE2901.fromNode = "RunTimer";
ROUTE2901.fromField = "fraction_changed";
ROUTE2901.toNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE2901.toField = "set_fraction";
browser.currentScene.children[529] = ROUTE2901;

let ROUTE2902 = browser.currentScene.createNode("ROUTE");
ROUTE2902.fromNode = "RunTimer";
ROUTE2902.fromField = "fraction_changed";
ROUTE2902.toNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2902.toField = "set_fraction";
browser.currentScene.children[530] = ROUTE2902;

let ROUTE2903 = browser.currentScene.createNode("ROUTE");
ROUTE2903.fromNode = "RunTimer";
ROUTE2903.fromField = "fraction_changed";
ROUTE2903.toNode = "Run_sacroiliac_YawInterpolator";
ROUTE2903.toField = "set_fraction";
browser.currentScene.children[531] = ROUTE2903;

let ROUTE2904 = browser.currentScene.createNode("ROUTE");
ROUTE2904.fromNode = "RunTimer";
ROUTE2904.fromField = "fraction_changed";
ROUTE2904.toNode = "Run_vl5_YawInterpolator";
ROUTE2904.toField = "set_fraction";
browser.currentScene.children[532] = ROUTE2904;

let ROUTE2905 = browser.currentScene.createNode("ROUTE");
ROUTE2905.fromNode = "RunTimer";
ROUTE2905.fromField = "fraction_changed";
ROUTE2905.toNode = "Run_vc6_YawInterpolator";
ROUTE2905.toField = "set_fraction";
browser.currentScene.children[533] = ROUTE2905;

let ROUTE2906 = browser.currentScene.createNode("ROUTE");
ROUTE2906.fromNode = "RunTimer";
ROUTE2906.fromField = "fraction_changed";
ROUTE2906.toNode = "Run_l_thumb1_PitchInterpolator";
ROUTE2906.toField = "set_fraction";
browser.currentScene.children[534] = ROUTE2906;

let ROUTE2907 = browser.currentScene.createNode("ROUTE");
ROUTE2907.fromNode = "RunTimer";
ROUTE2907.fromField = "fraction_changed";
ROUTE2907.toNode = "Run_r_thumb1_PitchInterpolator";
ROUTE2907.toField = "set_fraction";
browser.currentScene.children[535] = ROUTE2907;

let ROUTE2908 = browser.currentScene.createNode("ROUTE");
ROUTE2908.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE2908.fromField = "value_changed";
ROUTE2908.toNode = "hanim_r_ankle";
ROUTE2908.toField = "set_rotation";
browser.currentScene.children[536] = ROUTE2908;

let ROUTE2909 = browser.currentScene.createNode("ROUTE");
ROUTE2909.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE2909.fromField = "value_changed";
ROUTE2909.toNode = "hanim_r_knee";
ROUTE2909.toField = "set_rotation";
browser.currentScene.children[537] = ROUTE2909;

let ROUTE2910 = browser.currentScene.createNode("ROUTE");
ROUTE2910.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE2910.fromField = "value_changed";
ROUTE2910.toNode = "hanim_r_hip";
ROUTE2910.toField = "set_rotation";
browser.currentScene.children[538] = ROUTE2910;

let ROUTE2911 = browser.currentScene.createNode("ROUTE");
ROUTE2911.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE2911.fromField = "value_changed";
ROUTE2911.toNode = "hanim_l_ankle";
ROUTE2911.toField = "set_rotation";
browser.currentScene.children[539] = ROUTE2911;

let ROUTE2912 = browser.currentScene.createNode("ROUTE");
ROUTE2912.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE2912.fromField = "value_changed";
ROUTE2912.toNode = "hanim_l_knee";
ROUTE2912.toField = "set_rotation";
browser.currentScene.children[540] = ROUTE2912;

let ROUTE2913 = browser.currentScene.createNode("ROUTE");
ROUTE2913.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE2913.fromField = "value_changed";
ROUTE2913.toNode = "hanim_l_hip";
ROUTE2913.toField = "set_rotation";
browser.currentScene.children[541] = ROUTE2913;

let ROUTE2914 = browser.currentScene.createNode("ROUTE");
ROUTE2914.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE2914.fromField = "value_changed";
ROUTE2914.toNode = "hanim_r_wrist";
ROUTE2914.toField = "set_rotation";
browser.currentScene.children[542] = ROUTE2914;

let ROUTE2915 = browser.currentScene.createNode("ROUTE");
ROUTE2915.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE2915.fromField = "value_changed";
ROUTE2915.toNode = "hanim_r_elbow";
ROUTE2915.toField = "set_rotation";
browser.currentScene.children[543] = ROUTE2915;

let ROUTE2916 = browser.currentScene.createNode("ROUTE");
ROUTE2916.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE2916.fromField = "value_changed";
ROUTE2916.toNode = "hanim_r_shoulder";
ROUTE2916.toField = "set_rotation";
browser.currentScene.children[544] = ROUTE2916;

let ROUTE2917 = browser.currentScene.createNode("ROUTE");
ROUTE2917.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE2917.fromField = "value_changed";
ROUTE2917.toNode = "hanim_l_wrist";
ROUTE2917.toField = "set_rotation";
browser.currentScene.children[545] = ROUTE2917;

let ROUTE2918 = browser.currentScene.createNode("ROUTE");
ROUTE2918.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE2918.fromField = "value_changed";
ROUTE2918.toNode = "hanim_l_elbow";
ROUTE2918.toField = "set_rotation";
browser.currentScene.children[546] = ROUTE2918;

let ROUTE2919 = browser.currentScene.createNode("ROUTE");
ROUTE2919.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE2919.fromField = "value_changed";
ROUTE2919.toNode = "hanim_l_shoulder";
ROUTE2919.toField = "set_rotation";
browser.currentScene.children[547] = ROUTE2919;

let ROUTE2920 = browser.currentScene.createNode("ROUTE");
ROUTE2920.fromNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE2920.fromField = "value_changed";
ROUTE2920.toNode = "hanim_sacroiliac";
ROUTE2920.toField = "set_rotation";
browser.currentScene.children[548] = ROUTE2920;

let ROUTE2921 = browser.currentScene.createNode("ROUTE");
ROUTE2921.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE2921.fromField = "value_changed";
ROUTE2921.toNode = "hanim_skullbase";
ROUTE2921.toField = "set_rotation";
browser.currentScene.children[549] = ROUTE2921;

let ROUTE2922 = browser.currentScene.createNode("ROUTE");
ROUTE2922.fromNode = "Run_neck_RotationInterpolator_Run";
ROUTE2922.fromField = "value_changed";
ROUTE2922.toNode = "hanim_vc4";
ROUTE2922.toField = "set_rotation";
browser.currentScene.children[550] = ROUTE2922;

let ROUTE2923 = browser.currentScene.createNode("ROUTE");
ROUTE2923.fromNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE2923.fromField = "value_changed";
ROUTE2923.toNode = "hanim_vl1";
ROUTE2923.toField = "set_rotation";
browser.currentScene.children[551] = ROUTE2923;

let ROUTE2924 = browser.currentScene.createNode("ROUTE");
ROUTE2924.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE2924.fromField = "value_changed";
ROUTE2924.toNode = "hanim_humanoid_root";
ROUTE2924.toField = "set_rotation";
browser.currentScene.children[552] = ROUTE2924;

let ROUTE2925 = browser.currentScene.createNode("ROUTE");
ROUTE2925.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE2925.fromField = "value_changed";
ROUTE2925.toNode = "hanim_humanoid_root";
ROUTE2925.toField = "set_translation";
browser.currentScene.children[553] = ROUTE2925;

let ROUTE2926 = browser.currentScene.createNode("ROUTE");
ROUTE2926.fromNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE2926.fromField = "value_changed";
ROUTE2926.toNode = "hanim_l_sternoclavicular";
ROUTE2926.toField = "set_rotation";
browser.currentScene.children[554] = ROUTE2926;

let ROUTE2927 = browser.currentScene.createNode("ROUTE");
ROUTE2927.fromNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE2927.fromField = "value_changed";
ROUTE2927.toNode = "hanim_l_acromioclavicular";
ROUTE2927.toField = "set_rotation";
browser.currentScene.children[555] = ROUTE2927;

let ROUTE2928 = browser.currentScene.createNode("ROUTE");
ROUTE2928.fromNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE2928.fromField = "value_changed";
ROUTE2928.toNode = "hanim_r_sternoclavicular";
ROUTE2928.toField = "set_rotation";
browser.currentScene.children[556] = ROUTE2928;

let ROUTE2929 = browser.currentScene.createNode("ROUTE");
ROUTE2929.fromNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE2929.fromField = "value_changed";
ROUTE2929.toNode = "hanim_r_acromioclavicular";
ROUTE2929.toField = "set_rotation";
browser.currentScene.children[557] = ROUTE2929;

let ROUTE2930 = browser.currentScene.createNode("ROUTE");
ROUTE2930.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2930.fromField = "value_changed";
ROUTE2930.toNode = "hanim_l_metatarsal";
ROUTE2930.toField = "set_rotation";
browser.currentScene.children[558] = ROUTE2930;

let ROUTE2931 = browser.currentScene.createNode("ROUTE");
ROUTE2931.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2931.fromField = "value_changed";
ROUTE2931.toNode = "hanim_r_metatarsal";
ROUTE2931.toField = "set_rotation";
browser.currentScene.children[559] = ROUTE2931;

let ROUTE2932 = browser.currentScene.createNode("ROUTE");
ROUTE2932.fromNode = "Run_sacroiliac_YawInterpolator";
ROUTE2932.fromField = "value_changed";
ROUTE2932.toNode = "hanim_sacroiliac";
ROUTE2932.toField = "set_rotation";
browser.currentScene.children[560] = ROUTE2932;

let ROUTE2933 = browser.currentScene.createNode("ROUTE");
ROUTE2933.fromNode = "Run_vl5_YawInterpolator";
ROUTE2933.fromField = "value_changed";
ROUTE2933.toNode = "hanim_vl5";
ROUTE2933.toField = "set_rotation";
browser.currentScene.children[561] = ROUTE2933;

let ROUTE2934 = browser.currentScene.createNode("ROUTE");
ROUTE2934.fromNode = "Run_vc6_YawInterpolator";
ROUTE2934.fromField = "value_changed";
ROUTE2934.toNode = "hanim_vc6";
ROUTE2934.toField = "set_rotation";
browser.currentScene.children[562] = ROUTE2934;

let ROUTE2935 = browser.currentScene.createNode("ROUTE");
ROUTE2935.fromNode = "Run_l_thumb1_PitchInterpolator";
ROUTE2935.fromField = "value_changed";
ROUTE2935.toNode = "hanim_l_thumb1";
ROUTE2935.toField = "set_rotation";
browser.currentScene.children[563] = ROUTE2935;

let ROUTE2936 = browser.currentScene.createNode("ROUTE");
ROUTE2936.fromNode = "Run_r_thumb1_PitchInterpolator";
ROUTE2936.fromField = "value_changed";
ROUTE2936.toNode = "hanim_r_thumb1";
ROUTE2936.toField = "set_rotation";
browser.currentScene.children[564] = ROUTE2936;

let ROUTE2937 = browser.currentScene.createNode("ROUTE");
ROUTE2937.fromNode = "JumpTimer";
ROUTE2937.fromField = "fraction_changed";
ROUTE2937.toNode = "Jump_r_ankle_RotationInterpolator";
ROUTE2937.toField = "set_fraction";
browser.currentScene.children[565] = ROUTE2937;

let ROUTE2938 = browser.currentScene.createNode("ROUTE");
ROUTE2938.fromNode = "JumpTimer";
ROUTE2938.fromField = "fraction_changed";
ROUTE2938.toNode = "Jump_r_knee_RotationInterpolator";
ROUTE2938.toField = "set_fraction";
browser.currentScene.children[566] = ROUTE2938;

let ROUTE2939 = browser.currentScene.createNode("ROUTE");
ROUTE2939.fromNode = "JumpTimer";
ROUTE2939.fromField = "fraction_changed";
ROUTE2939.toNode = "Jump_r_hip_RotationInterpolator";
ROUTE2939.toField = "set_fraction";
browser.currentScene.children[567] = ROUTE2939;

let ROUTE2940 = browser.currentScene.createNode("ROUTE");
ROUTE2940.fromNode = "JumpTimer";
ROUTE2940.fromField = "fraction_changed";
ROUTE2940.toNode = "Jump_l_ankle_RotationInterpolator";
ROUTE2940.toField = "set_fraction";
browser.currentScene.children[568] = ROUTE2940;

let ROUTE2941 = browser.currentScene.createNode("ROUTE");
ROUTE2941.fromNode = "JumpTimer";
ROUTE2941.fromField = "fraction_changed";
ROUTE2941.toNode = "Jump_l_knee_RotationInterpolator";
ROUTE2941.toField = "set_fraction";
browser.currentScene.children[569] = ROUTE2941;

let ROUTE2942 = browser.currentScene.createNode("ROUTE");
ROUTE2942.fromNode = "JumpTimer";
ROUTE2942.fromField = "fraction_changed";
ROUTE2942.toNode = "Jump_l_hip_RotationInterpolator";
ROUTE2942.toField = "set_fraction";
browser.currentScene.children[570] = ROUTE2942;

let ROUTE2943 = browser.currentScene.createNode("ROUTE");
ROUTE2943.fromNode = "JumpTimer";
ROUTE2943.fromField = "fraction_changed";
ROUTE2943.toNode = "Jump_lower_body_RotationInterpolator";
ROUTE2943.toField = "set_fraction";
browser.currentScene.children[571] = ROUTE2943;

let ROUTE2944 = browser.currentScene.createNode("ROUTE");
ROUTE2944.fromNode = "JumpTimer";
ROUTE2944.fromField = "fraction_changed";
ROUTE2944.toNode = "Jump_r_wrist_RotationInterpolator";
ROUTE2944.toField = "set_fraction";
browser.currentScene.children[572] = ROUTE2944;

let ROUTE2945 = browser.currentScene.createNode("ROUTE");
ROUTE2945.fromNode = "JumpTimer";
ROUTE2945.fromField = "fraction_changed";
ROUTE2945.toNode = "Jump_r_elbow_RotationInterpolator";
ROUTE2945.toField = "set_fraction";
browser.currentScene.children[573] = ROUTE2945;

let ROUTE2946 = browser.currentScene.createNode("ROUTE");
ROUTE2946.fromNode = "JumpTimer";
ROUTE2946.fromField = "fraction_changed";
ROUTE2946.toNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE2946.toField = "set_fraction";
browser.currentScene.children[574] = ROUTE2946;

let ROUTE2947 = browser.currentScene.createNode("ROUTE");
ROUTE2947.fromNode = "JumpTimer";
ROUTE2947.fromField = "fraction_changed";
ROUTE2947.toNode = "Jump_l_wrist_RotationInterpolator";
ROUTE2947.toField = "set_fraction";
browser.currentScene.children[575] = ROUTE2947;

let ROUTE2948 = browser.currentScene.createNode("ROUTE");
ROUTE2948.fromNode = "JumpTimer";
ROUTE2948.fromField = "fraction_changed";
ROUTE2948.toNode = "Jump_l_elbow_RotationInterpolator";
ROUTE2948.toField = "set_fraction";
browser.currentScene.children[576] = ROUTE2948;

let ROUTE2949 = browser.currentScene.createNode("ROUTE");
ROUTE2949.fromNode = "JumpTimer";
ROUTE2949.fromField = "fraction_changed";
ROUTE2949.toNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE2949.toField = "set_fraction";
browser.currentScene.children[577] = ROUTE2949;

let ROUTE2950 = browser.currentScene.createNode("ROUTE");
ROUTE2950.fromNode = "JumpTimer";
ROUTE2950.fromField = "fraction_changed";
ROUTE2950.toNode = "Jump_head_RotationInterpolator";
ROUTE2950.toField = "set_fraction";
browser.currentScene.children[578] = ROUTE2950;

let ROUTE2951 = browser.currentScene.createNode("ROUTE");
ROUTE2951.fromNode = "JumpTimer";
ROUTE2951.fromField = "fraction_changed";
ROUTE2951.toNode = "Jump_neck_RotationInterpolator";
ROUTE2951.toField = "set_fraction";
browser.currentScene.children[579] = ROUTE2951;

let ROUTE2952 = browser.currentScene.createNode("ROUTE");
ROUTE2952.fromNode = "JumpTimer";
ROUTE2952.fromField = "fraction_changed";
ROUTE2952.toNode = "Jump_upper_body_RotationInterpolator";
ROUTE2952.toField = "set_fraction";
browser.currentScene.children[580] = ROUTE2952;

let ROUTE2953 = browser.currentScene.createNode("ROUTE");
ROUTE2953.fromNode = "JumpTimer";
ROUTE2953.fromField = "fraction_changed";
ROUTE2953.toNode = "Jump_whole_body_RotationInterpolator";
ROUTE2953.toField = "set_fraction";
browser.currentScene.children[581] = ROUTE2953;

let ROUTE2954 = browser.currentScene.createNode("ROUTE");
ROUTE2954.fromNode = "JumpTimer";
ROUTE2954.fromField = "fraction_changed";
ROUTE2954.toNode = "Jump_whole_body_TranslationInterpolator";
ROUTE2954.toField = "set_fraction";
browser.currentScene.children[582] = ROUTE2954;

let ROUTE2955 = browser.currentScene.createNode("ROUTE");
ROUTE2955.fromNode = "JumpTimer";
ROUTE2955.fromField = "fraction_changed";
ROUTE2955.toNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE2955.toField = "set_fraction";
browser.currentScene.children[583] = ROUTE2955;

let ROUTE2956 = browser.currentScene.createNode("ROUTE");
ROUTE2956.fromNode = "JumpTimer";
ROUTE2956.fromField = "fraction_changed";
ROUTE2956.toNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE2956.toField = "set_fraction";
browser.currentScene.children[584] = ROUTE2956;

let ROUTE2957 = browser.currentScene.createNode("ROUTE");
ROUTE2957.fromNode = "JumpTimer";
ROUTE2957.fromField = "fraction_changed";
ROUTE2957.toNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE2957.toField = "set_fraction";
browser.currentScene.children[585] = ROUTE2957;

let ROUTE2958 = browser.currentScene.createNode("ROUTE");
ROUTE2958.fromNode = "JumpTimer";
ROUTE2958.fromField = "fraction_changed";
ROUTE2958.toNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE2958.toField = "set_fraction";
browser.currentScene.children[586] = ROUTE2958;

let ROUTE2959 = browser.currentScene.createNode("ROUTE");
ROUTE2959.fromNode = "JumpTimer";
ROUTE2959.fromField = "fraction_changed";
ROUTE2959.toNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2959.toField = "set_fraction";
browser.currentScene.children[587] = ROUTE2959;

let ROUTE2960 = browser.currentScene.createNode("ROUTE");
ROUTE2960.fromNode = "JumpTimer";
ROUTE2960.fromField = "fraction_changed";
ROUTE2960.toNode = "Jump_sacroiliac_YawInterpolator";
ROUTE2960.toField = "set_fraction";
browser.currentScene.children[588] = ROUTE2960;

let ROUTE2961 = browser.currentScene.createNode("ROUTE");
ROUTE2961.fromNode = "JumpTimer";
ROUTE2961.fromField = "fraction_changed";
ROUTE2961.toNode = "Jump_vl5_YawInterpolator";
ROUTE2961.toField = "set_fraction";
browser.currentScene.children[589] = ROUTE2961;

let ROUTE2962 = browser.currentScene.createNode("ROUTE");
ROUTE2962.fromNode = "JumpTimer";
ROUTE2962.fromField = "fraction_changed";
ROUTE2962.toNode = "Jump_vc6_YawInterpolator";
ROUTE2962.toField = "set_fraction";
browser.currentScene.children[590] = ROUTE2962;

let ROUTE2963 = browser.currentScene.createNode("ROUTE");
ROUTE2963.fromNode = "JumpTimer";
ROUTE2963.fromField = "fraction_changed";
ROUTE2963.toNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE2963.toField = "set_fraction";
browser.currentScene.children[591] = ROUTE2963;

let ROUTE2964 = browser.currentScene.createNode("ROUTE");
ROUTE2964.fromNode = "JumpTimer";
ROUTE2964.fromField = "fraction_changed";
ROUTE2964.toNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE2964.toField = "set_fraction";
browser.currentScene.children[592] = ROUTE2964;

let ROUTE2965 = browser.currentScene.createNode("ROUTE");
ROUTE2965.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE2965.fromField = "value_changed";
ROUTE2965.toNode = "hanim_r_ankle";
ROUTE2965.toField = "set_rotation";
browser.currentScene.children[593] = ROUTE2965;

let ROUTE2966 = browser.currentScene.createNode("ROUTE");
ROUTE2966.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE2966.fromField = "value_changed";
ROUTE2966.toNode = "hanim_r_knee";
ROUTE2966.toField = "set_rotation";
browser.currentScene.children[594] = ROUTE2966;

let ROUTE2967 = browser.currentScene.createNode("ROUTE");
ROUTE2967.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE2967.fromField = "value_changed";
ROUTE2967.toNode = "hanim_r_hip";
ROUTE2967.toField = "set_rotation";
browser.currentScene.children[595] = ROUTE2967;

let ROUTE2968 = browser.currentScene.createNode("ROUTE");
ROUTE2968.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE2968.fromField = "value_changed";
ROUTE2968.toNode = "hanim_l_ankle";
ROUTE2968.toField = "set_rotation";
browser.currentScene.children[596] = ROUTE2968;

let ROUTE2969 = browser.currentScene.createNode("ROUTE");
ROUTE2969.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE2969.fromField = "value_changed";
ROUTE2969.toNode = "hanim_l_knee";
ROUTE2969.toField = "set_rotation";
browser.currentScene.children[597] = ROUTE2969;

let ROUTE2970 = browser.currentScene.createNode("ROUTE");
ROUTE2970.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE2970.fromField = "value_changed";
ROUTE2970.toNode = "hanim_l_hip";
ROUTE2970.toField = "set_rotation";
browser.currentScene.children[598] = ROUTE2970;

let ROUTE2971 = browser.currentScene.createNode("ROUTE");
ROUTE2971.fromNode = "Jump_lower_body_RotationInterpolator";
ROUTE2971.fromField = "value_changed";
ROUTE2971.toNode = "hanim_sacroiliac";
ROUTE2971.toField = "set_rotation";
browser.currentScene.children[599] = ROUTE2971;

let ROUTE2972 = browser.currentScene.createNode("ROUTE");
ROUTE2972.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE2972.fromField = "value_changed";
ROUTE2972.toNode = "hanim_r_wrist";
ROUTE2972.toField = "set_rotation";
browser.currentScene.children[600] = ROUTE2972;

let ROUTE2973 = browser.currentScene.createNode("ROUTE");
ROUTE2973.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE2973.fromField = "value_changed";
ROUTE2973.toNode = "hanim_r_elbow";
ROUTE2973.toField = "set_rotation";
browser.currentScene.children[601] = ROUTE2973;

let ROUTE2974 = browser.currentScene.createNode("ROUTE");
ROUTE2974.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE2974.fromField = "value_changed";
ROUTE2974.toNode = "hanim_r_shoulder";
ROUTE2974.toField = "set_rotation";
browser.currentScene.children[602] = ROUTE2974;

let ROUTE2975 = browser.currentScene.createNode("ROUTE");
ROUTE2975.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE2975.fromField = "value_changed";
ROUTE2975.toNode = "hanim_l_wrist";
ROUTE2975.toField = "set_rotation";
browser.currentScene.children[603] = ROUTE2975;

let ROUTE2976 = browser.currentScene.createNode("ROUTE");
ROUTE2976.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE2976.fromField = "value_changed";
ROUTE2976.toNode = "hanim_l_elbow";
ROUTE2976.toField = "set_rotation";
browser.currentScene.children[604] = ROUTE2976;

let ROUTE2977 = browser.currentScene.createNode("ROUTE");
ROUTE2977.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE2977.fromField = "value_changed";
ROUTE2977.toNode = "hanim_l_shoulder";
ROUTE2977.toField = "set_rotation";
browser.currentScene.children[605] = ROUTE2977;

let ROUTE2978 = browser.currentScene.createNode("ROUTE");
ROUTE2978.fromNode = "Jump_head_RotationInterpolator";
ROUTE2978.fromField = "value_changed";
ROUTE2978.toNode = "hanim_skullbase";
ROUTE2978.toField = "set_rotation";
browser.currentScene.children[606] = ROUTE2978;

let ROUTE2979 = browser.currentScene.createNode("ROUTE");
ROUTE2979.fromNode = "Jump_neck_RotationInterpolator";
ROUTE2979.fromField = "value_changed";
ROUTE2979.toNode = "hanim_vc4";
ROUTE2979.toField = "set_rotation";
browser.currentScene.children[607] = ROUTE2979;

let ROUTE2980 = browser.currentScene.createNode("ROUTE");
ROUTE2980.fromNode = "Jump_upper_body_RotationInterpolator";
ROUTE2980.fromField = "value_changed";
ROUTE2980.toNode = "hanim_vl1";
ROUTE2980.toField = "set_rotation";
browser.currentScene.children[608] = ROUTE2980;

let ROUTE2981 = browser.currentScene.createNode("ROUTE");
ROUTE2981.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE2981.fromField = "value_changed";
ROUTE2981.toNode = "hanim_humanoid_root";
ROUTE2981.toField = "set_rotation";
browser.currentScene.children[609] = ROUTE2981;

let ROUTE2982 = browser.currentScene.createNode("ROUTE");
ROUTE2982.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE2982.fromField = "value_changed";
ROUTE2982.toNode = "hanim_humanoid_root";
ROUTE2982.toField = "set_translation";
browser.currentScene.children[610] = ROUTE2982;

let ROUTE2983 = browser.currentScene.createNode("ROUTE");
ROUTE2983.fromNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE2983.fromField = "value_changed";
ROUTE2983.toNode = "hanim_l_sternoclavicular";
ROUTE2983.toField = "set_rotation";
browser.currentScene.children[611] = ROUTE2983;

let ROUTE2984 = browser.currentScene.createNode("ROUTE");
ROUTE2984.fromNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE2984.fromField = "value_changed";
ROUTE2984.toNode = "hanim_l_acromioclavicular";
ROUTE2984.toField = "set_rotation";
browser.currentScene.children[612] = ROUTE2984;

let ROUTE2985 = browser.currentScene.createNode("ROUTE");
ROUTE2985.fromNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE2985.fromField = "value_changed";
ROUTE2985.toNode = "hanim_r_sternoclavicular";
ROUTE2985.toField = "set_rotation";
browser.currentScene.children[613] = ROUTE2985;

let ROUTE2986 = browser.currentScene.createNode("ROUTE");
ROUTE2986.fromNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE2986.fromField = "value_changed";
ROUTE2986.toNode = "hanim_r_acromioclavicular";
ROUTE2986.toField = "set_rotation";
browser.currentScene.children[614] = ROUTE2986;

let ROUTE2987 = browser.currentScene.createNode("ROUTE");
ROUTE2987.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2987.fromField = "value_changed";
ROUTE2987.toNode = "hanim_l_metatarsal";
ROUTE2987.toField = "set_rotation";
browser.currentScene.children[615] = ROUTE2987;

let ROUTE2988 = browser.currentScene.createNode("ROUTE");
ROUTE2988.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2988.fromField = "value_changed";
ROUTE2988.toNode = "hanim_r_metatarsal";
ROUTE2988.toField = "set_rotation";
browser.currentScene.children[616] = ROUTE2988;

let ROUTE2989 = browser.currentScene.createNode("ROUTE");
ROUTE2989.fromNode = "Jump_sacroiliac_YawInterpolator";
ROUTE2989.fromField = "value_changed";
ROUTE2989.toNode = "hanim_sacroiliac";
ROUTE2989.toField = "set_rotation";
browser.currentScene.children[617] = ROUTE2989;

let ROUTE2990 = browser.currentScene.createNode("ROUTE");
ROUTE2990.fromNode = "Jump_vl5_YawInterpolator";
ROUTE2990.fromField = "value_changed";
ROUTE2990.toNode = "hanim_vl5";
ROUTE2990.toField = "set_rotation";
browser.currentScene.children[618] = ROUTE2990;

let ROUTE2991 = browser.currentScene.createNode("ROUTE");
ROUTE2991.fromNode = "Jump_vc6_YawInterpolator";
ROUTE2991.fromField = "value_changed";
ROUTE2991.toNode = "hanim_vc6";
ROUTE2991.toField = "set_rotation";
browser.currentScene.children[619] = ROUTE2991;

let ROUTE2992 = browser.currentScene.createNode("ROUTE");
ROUTE2992.fromNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE2992.fromField = "value_changed";
ROUTE2992.toNode = "hanim_l_thumb1";
ROUTE2992.toField = "set_rotation";
browser.currentScene.children[620] = ROUTE2992;

let ROUTE2993 = browser.currentScene.createNode("ROUTE");
ROUTE2993.fromNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE2993.fromField = "value_changed";
ROUTE2993.toNode = "hanim_r_thumb1";
ROUTE2993.toField = "set_rotation";
browser.currentScene.children[621] = ROUTE2993;

let ROUTE2994 = browser.currentScene.createNode("ROUTE");
ROUTE2994.fromNode = "KickTimer";
ROUTE2994.fromField = "fraction_changed";
ROUTE2994.toNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE2994.toField = "set_fraction";
browser.currentScene.children[622] = ROUTE2994;

let ROUTE2995 = browser.currentScene.createNode("ROUTE");
ROUTE2995.fromNode = "KickTimer";
ROUTE2995.fromField = "fraction_changed";
ROUTE2995.toNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE2995.toField = "set_fraction";
browser.currentScene.children[623] = ROUTE2995;

let ROUTE2996 = browser.currentScene.createNode("ROUTE");
ROUTE2996.fromNode = "KickTimer";
ROUTE2996.fromField = "fraction_changed";
ROUTE2996.toNode = "Kick_l_shoulder_RollInterpolator";
ROUTE2996.toField = "set_fraction";
browser.currentScene.children[624] = ROUTE2996;

let ROUTE2997 = browser.currentScene.createNode("ROUTE");
ROUTE2997.fromNode = "KickTimer";
ROUTE2997.fromField = "fraction_changed";
ROUTE2997.toNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE2997.toField = "set_fraction";
browser.currentScene.children[625] = ROUTE2997;

let ROUTE2998 = browser.currentScene.createNode("ROUTE");
ROUTE2998.fromNode = "KickTimer";
ROUTE2998.fromField = "fraction_changed";
ROUTE2998.toNode = "Kick_l_wrist_RollInterpolator";
ROUTE2998.toField = "set_fraction";
browser.currentScene.children[626] = ROUTE2998;

let ROUTE2999 = browser.currentScene.createNode("ROUTE");
ROUTE2999.fromNode = "KickTimer";
ROUTE2999.fromField = "fraction_changed";
ROUTE2999.toNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE2999.toField = "set_fraction";
browser.currentScene.children[627] = ROUTE2999;

let ROUTE3000 = browser.currentScene.createNode("ROUTE");
ROUTE3000.fromNode = "KickTimer";
ROUTE3000.fromField = "fraction_changed";
ROUTE3000.toNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE3000.toField = "set_fraction";
browser.currentScene.children[628] = ROUTE3000;

let ROUTE3001 = browser.currentScene.createNode("ROUTE");
ROUTE3001.fromNode = "KickTimer";
ROUTE3001.fromField = "fraction_changed";
ROUTE3001.toNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE3001.toField = "set_fraction";
browser.currentScene.children[629] = ROUTE3001;

let ROUTE3002 = browser.currentScene.createNode("ROUTE");
ROUTE3002.fromNode = "KickTimer";
ROUTE3002.fromField = "fraction_changed";
ROUTE3002.toNode = "Kick_r_shoulder_RollInterpolator";
ROUTE3002.toField = "set_fraction";
browser.currentScene.children[630] = ROUTE3002;

let ROUTE3003 = browser.currentScene.createNode("ROUTE");
ROUTE3003.fromNode = "KickTimer";
ROUTE3003.fromField = "fraction_changed";
ROUTE3003.toNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE3003.toField = "set_fraction";
browser.currentScene.children[631] = ROUTE3003;

let ROUTE3004 = browser.currentScene.createNode("ROUTE");
ROUTE3004.fromNode = "KickTimer";
ROUTE3004.fromField = "fraction_changed";
ROUTE3004.toNode = "Kick_r_wrist_RollInterpolator";
ROUTE3004.toField = "set_fraction";
browser.currentScene.children[632] = ROUTE3004;

let ROUTE3005 = browser.currentScene.createNode("ROUTE");
ROUTE3005.fromNode = "KickTimer";
ROUTE3005.fromField = "fraction_changed";
ROUTE3005.toNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE3005.toField = "set_fraction";
browser.currentScene.children[633] = ROUTE3005;

let ROUTE3006 = browser.currentScene.createNode("ROUTE");
ROUTE3006.fromNode = "KickTimer";
ROUTE3006.fromField = "fraction_changed";
ROUTE3006.toNode = "Kick_r_hip_PitchInterpolator";
ROUTE3006.toField = "set_fraction";
browser.currentScene.children[634] = ROUTE3006;

let ROUTE3007 = browser.currentScene.createNode("ROUTE");
ROUTE3007.fromNode = "KickTimer";
ROUTE3007.fromField = "fraction_changed";
ROUTE3007.toNode = "Kick_r_knee_PitchInterpolator";
ROUTE3007.toField = "set_fraction";
browser.currentScene.children[635] = ROUTE3007;

let ROUTE3008 = browser.currentScene.createNode("ROUTE");
ROUTE3008.fromNode = "KickTimer";
ROUTE3008.fromField = "fraction_changed";
ROUTE3008.toNode = "Kick_l_hip_PitchInterpolator";
ROUTE3008.toField = "set_fraction";
browser.currentScene.children[636] = ROUTE3008;

let ROUTE3009 = browser.currentScene.createNode("ROUTE");
ROUTE3009.fromNode = "KickTimer";
ROUTE3009.fromField = "fraction_changed";
ROUTE3009.toNode = "Kick_l_knee_PitchInterpolator";
ROUTE3009.toField = "set_fraction";
browser.currentScene.children[637] = ROUTE3009;

let ROUTE3010 = browser.currentScene.createNode("ROUTE");
ROUTE3010.fromNode = "KickTimer";
ROUTE3010.fromField = "fraction_changed";
ROUTE3010.toNode = "Kick_r_ankle_PitchInterpolator";
ROUTE3010.toField = "set_fraction";
browser.currentScene.children[638] = ROUTE3010;

let ROUTE3011 = browser.currentScene.createNode("ROUTE");
ROUTE3011.fromNode = "KickTimer";
ROUTE3011.fromField = "fraction_changed";
ROUTE3011.toNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE3011.toField = "set_fraction";
browser.currentScene.children[639] = ROUTE3011;

let ROUTE3012 = browser.currentScene.createNode("ROUTE");
ROUTE3012.fromNode = "KickTimer";
ROUTE3012.fromField = "fraction_changed";
ROUTE3012.toNode = "Kick_sacroiliac_YawInterpolator";
ROUTE3012.toField = "set_fraction";
browser.currentScene.children[640] = ROUTE3012;

let ROUTE3013 = browser.currentScene.createNode("ROUTE");
ROUTE3013.fromNode = "KickTimer";
ROUTE3013.fromField = "fraction_changed";
ROUTE3013.toNode = "Kick_vl5_YawInterpolator";
ROUTE3013.toField = "set_fraction";
browser.currentScene.children[641] = ROUTE3013;

let ROUTE3014 = browser.currentScene.createNode("ROUTE");
ROUTE3014.fromNode = "KickTimer";
ROUTE3014.fromField = "fraction_changed";
ROUTE3014.toNode = "Kick_vc6_YawInterpolator";
ROUTE3014.toField = "set_fraction";
browser.currentScene.children[642] = ROUTE3014;

let ROUTE3015 = browser.currentScene.createNode("ROUTE");
ROUTE3015.fromNode = "KickTimer";
ROUTE3015.fromField = "fraction_changed";
ROUTE3015.toNode = "Kick_lower_body_RotationInterpolator";
ROUTE3015.toField = "set_fraction";
browser.currentScene.children[643] = ROUTE3015;

let ROUTE3016 = browser.currentScene.createNode("ROUTE");
ROUTE3016.fromNode = "KickTimer";
ROUTE3016.fromField = "fraction_changed";
ROUTE3016.toNode = "Kick_upper_body_RotationInterpolator";
ROUTE3016.toField = "set_fraction";
browser.currentScene.children[644] = ROUTE3016;

let ROUTE3017 = browser.currentScene.createNode("ROUTE");
ROUTE3017.fromNode = "KickTimer";
ROUTE3017.fromField = "fraction_changed";
ROUTE3017.toNode = "Kick_whole_body_RotationInterpolator";
ROUTE3017.toField = "set_fraction";
browser.currentScene.children[645] = ROUTE3017;

let ROUTE3018 = browser.currentScene.createNode("ROUTE");
ROUTE3018.fromNode = "KickTimer";
ROUTE3018.fromField = "fraction_changed";
ROUTE3018.toNode = "Kick_whole_body_TranslationInterpolator";
ROUTE3018.toField = "set_fraction";
browser.currentScene.children[646] = ROUTE3018;

let ROUTE3019 = browser.currentScene.createNode("ROUTE");
ROUTE3019.fromNode = "KickTimer";
ROUTE3019.fromField = "fraction_changed";
ROUTE3019.toNode = "Kick_neck_RotationInterpolator";
ROUTE3019.toField = "set_fraction";
browser.currentScene.children[647] = ROUTE3019;

let ROUTE3020 = browser.currentScene.createNode("ROUTE");
ROUTE3020.fromNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE3020.fromField = "value_changed";
ROUTE3020.toNode = "hanim_l_sternoclavicular";
ROUTE3020.toField = "set_rotation";
browser.currentScene.children[648] = ROUTE3020;

let ROUTE3021 = browser.currentScene.createNode("ROUTE");
ROUTE3021.fromNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE3021.fromField = "value_changed";
ROUTE3021.toNode = "hanim_l_acromioclavicular";
ROUTE3021.toField = "set_rotation";
browser.currentScene.children[649] = ROUTE3021;

let ROUTE3022 = browser.currentScene.createNode("ROUTE");
ROUTE3022.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE3022.fromField = "value_changed";
ROUTE3022.toNode = "hanim_l_shoulder";
ROUTE3022.toField = "set_rotation";
browser.currentScene.children[650] = ROUTE3022;

let ROUTE3023 = browser.currentScene.createNode("ROUTE");
ROUTE3023.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE3023.fromField = "value_changed";
ROUTE3023.toNode = "hanim_l_elbow";
ROUTE3023.toField = "set_rotation";
browser.currentScene.children[651] = ROUTE3023;

let ROUTE3024 = browser.currentScene.createNode("ROUTE");
ROUTE3024.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE3024.fromField = "value_changed";
ROUTE3024.toNode = "hanim_l_wrist";
ROUTE3024.toField = "set_rotation";
browser.currentScene.children[652] = ROUTE3024;

let ROUTE3025 = browser.currentScene.createNode("ROUTE");
ROUTE3025.fromNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE3025.fromField = "value_changed";
ROUTE3025.toNode = "hanim_l_thumb1";
ROUTE3025.toField = "set_rotation";
browser.currentScene.children[653] = ROUTE3025;

let ROUTE3026 = browser.currentScene.createNode("ROUTE");
ROUTE3026.fromNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE3026.fromField = "value_changed";
ROUTE3026.toNode = "hanim_r_sternoclavicular";
ROUTE3026.toField = "set_rotation";
browser.currentScene.children[654] = ROUTE3026;

let ROUTE3027 = browser.currentScene.createNode("ROUTE");
ROUTE3027.fromNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE3027.fromField = "value_changed";
ROUTE3027.toNode = "hanim_r_acromioclavicular";
ROUTE3027.toField = "set_rotation";
browser.currentScene.children[655] = ROUTE3027;

let ROUTE3028 = browser.currentScene.createNode("ROUTE");
ROUTE3028.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE3028.fromField = "value_changed";
ROUTE3028.toNode = "hanim_r_shoulder";
ROUTE3028.toField = "set_rotation";
browser.currentScene.children[656] = ROUTE3028;

let ROUTE3029 = browser.currentScene.createNode("ROUTE");
ROUTE3029.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE3029.fromField = "value_changed";
ROUTE3029.toNode = "hanim_r_elbow";
ROUTE3029.toField = "set_rotation";
browser.currentScene.children[657] = ROUTE3029;

let ROUTE3030 = browser.currentScene.createNode("ROUTE");
ROUTE3030.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE3030.fromField = "value_changed";
ROUTE3030.toNode = "hanim_r_wrist";
ROUTE3030.toField = "set_rotation";
browser.currentScene.children[658] = ROUTE3030;

let ROUTE3031 = browser.currentScene.createNode("ROUTE");
ROUTE3031.fromNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE3031.fromField = "value_changed";
ROUTE3031.toNode = "hanim_r_thumb1";
ROUTE3031.toField = "set_rotation";
browser.currentScene.children[659] = ROUTE3031;

let ROUTE3032 = browser.currentScene.createNode("ROUTE");
ROUTE3032.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE3032.fromField = "value_changed";
ROUTE3032.toNode = "hanim_r_hip";
ROUTE3032.toField = "set_rotation";
browser.currentScene.children[660] = ROUTE3032;

let ROUTE3033 = browser.currentScene.createNode("ROUTE");
ROUTE3033.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE3033.fromField = "value_changed";
ROUTE3033.toNode = "hanim_r_knee";
ROUTE3033.toField = "set_rotation";
browser.currentScene.children[661] = ROUTE3033;

let ROUTE3034 = browser.currentScene.createNode("ROUTE");
ROUTE3034.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE3034.fromField = "value_changed";
ROUTE3034.toNode = "hanim_r_ankle";
ROUTE3034.toField = "set_rotation";
browser.currentScene.children[662] = ROUTE3034;

let ROUTE3035 = browser.currentScene.createNode("ROUTE");
ROUTE3035.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE3035.fromField = "value_changed";
ROUTE3035.toNode = "hanim_r_metatarsal";
ROUTE3035.toField = "set_rotation";
browser.currentScene.children[663] = ROUTE3035;

let ROUTE3036 = browser.currentScene.createNode("ROUTE");
ROUTE3036.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE3036.fromField = "value_changed";
ROUTE3036.toNode = "hanim_l_hip";
ROUTE3036.toField = "set_rotation";
browser.currentScene.children[664] = ROUTE3036;

let ROUTE3037 = browser.currentScene.createNode("ROUTE");
ROUTE3037.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE3037.fromField = "value_changed";
ROUTE3037.toNode = "hanim_l_knee";
ROUTE3037.toField = "set_rotation";
browser.currentScene.children[665] = ROUTE3037;

let ROUTE3038 = browser.currentScene.createNode("ROUTE");
ROUTE3038.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE3038.fromField = "value_changed";
ROUTE3038.toNode = "hanim_l_ankle";
ROUTE3038.toField = "set_rotation";
browser.currentScene.children[666] = ROUTE3038;

let ROUTE3039 = browser.currentScene.createNode("ROUTE");
ROUTE3039.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE3039.fromField = "value_changed";
ROUTE3039.toNode = "hanim_l_metatarsal";
ROUTE3039.toField = "set_rotation";
browser.currentScene.children[667] = ROUTE3039;

let ROUTE3040 = browser.currentScene.createNode("ROUTE");
ROUTE3040.fromNode = "Kick_sacroiliac_YawInterpolator";
ROUTE3040.fromField = "value_changed";
ROUTE3040.toNode = "hanim_sacroiliac";
ROUTE3040.toField = "set_rotation";
browser.currentScene.children[668] = ROUTE3040;

let ROUTE3041 = browser.currentScene.createNode("ROUTE");
ROUTE3041.fromNode = "Kick_vl5_YawInterpolator";
ROUTE3041.fromField = "value_changed";
ROUTE3041.toNode = "hanim_vl5";
ROUTE3041.toField = "set_rotation";
browser.currentScene.children[669] = ROUTE3041;

let ROUTE3042 = browser.currentScene.createNode("ROUTE");
ROUTE3042.fromNode = "Kick_vc6_YawInterpolator";
ROUTE3042.fromField = "value_changed";
ROUTE3042.toNode = "hanim_vc6";
ROUTE3042.toField = "set_rotation";
browser.currentScene.children[670] = ROUTE3042;

let ROUTE3043 = browser.currentScene.createNode("ROUTE");
ROUTE3043.fromNode = "Kick_upper_body_RotationInterpolator";
ROUTE3043.fromField = "value_changed";
ROUTE3043.toNode = "hanim_vl1";
ROUTE3043.toField = "set_rotation";
browser.currentScene.children[671] = ROUTE3043;

let ROUTE3044 = browser.currentScene.createNode("ROUTE");
ROUTE3044.fromNode = "Kick_lower_body_RotationInterpolator";
ROUTE3044.fromField = "value_changed";
ROUTE3044.toNode = "hanim_sacroiliac";
ROUTE3044.toField = "set_rotation";
browser.currentScene.children[672] = ROUTE3044;

let ROUTE3045 = browser.currentScene.createNode("ROUTE");
ROUTE3045.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE3045.fromField = "value_changed";
ROUTE3045.toNode = "hanim_humanoid_root";
ROUTE3045.toField = "set_rotation";
browser.currentScene.children[673] = ROUTE3045;

let ROUTE3046 = browser.currentScene.createNode("ROUTE");
ROUTE3046.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE3046.fromField = "value_changed";
ROUTE3046.toNode = "hanim_humanoid_root";
ROUTE3046.toField = "set_translation";
browser.currentScene.children[674] = ROUTE3046;

let ROUTE3047 = browser.currentScene.createNode("ROUTE");
ROUTE3047.fromNode = "Kick_neck_RotationInterpolator";
ROUTE3047.fromField = "value_changed";
ROUTE3047.toNode = "hanim_vc4";
ROUTE3047.toField = "set_rotation";
browser.currentScene.children[675] = ROUTE3047;

let ROUTE3048 = browser.currentScene.createNode("ROUTE");
ROUTE3048.fromNode = "HudProximitySensor";
ROUTE3048.fromField = "position_changed";
ROUTE3048.toNode = "HudXform";
ROUTE3048.toField = "set_translation";
browser.currentScene.children[676] = ROUTE3048;

let ROUTE3049 = browser.currentScene.createNode("ROUTE");
ROUTE3049.fromNode = "HudProximitySensor";
ROUTE3049.fromField = "orientation_changed";
ROUTE3049.toNode = "HudXform";
ROUTE3049.toField = "set_rotation";
browser.currentScene.children[677] = ROUTE3049;

let ROUTE3050 = browser.currentScene.createNode("ROUTE");
ROUTE3050.fromNode = "Stand_Touch";
ROUTE3050.fromField = "touchTime";
ROUTE3050.toNode = "PitchTimer";
ROUTE3050.toField = "set_stopTime";
browser.currentScene.children[678] = ROUTE3050;

let ROUTE3051 = browser.currentScene.createNode("ROUTE");
ROUTE3051.fromNode = "Stand_Touch";
ROUTE3051.fromField = "touchTime";
ROUTE3051.toNode = "YawTimer";
ROUTE3051.toField = "set_stopTime";
browser.currentScene.children[679] = ROUTE3051;

let ROUTE3052 = browser.currentScene.createNode("ROUTE");
ROUTE3052.fromNode = "Stand_Touch";
ROUTE3052.fromField = "touchTime";
ROUTE3052.toNode = "RollTimer";
ROUTE3052.toField = "set_stopTime";
browser.currentScene.children[680] = ROUTE3052;

let ROUTE3053 = browser.currentScene.createNode("ROUTE");
ROUTE3053.fromNode = "Stand_Touch";
ROUTE3053.fromField = "touchTime";
ROUTE3053.toNode = "WalkTimer";
ROUTE3053.toField = "set_stopTime";
browser.currentScene.children[681] = ROUTE3053;

let ROUTE3054 = browser.currentScene.createNode("ROUTE");
ROUTE3054.fromNode = "Stand_Touch";
ROUTE3054.fromField = "touchTime";
ROUTE3054.toNode = "RunTimer";
ROUTE3054.toField = "set_stopTime";
browser.currentScene.children[682] = ROUTE3054;

let ROUTE3055 = browser.currentScene.createNode("ROUTE");
ROUTE3055.fromNode = "Stand_Touch";
ROUTE3055.fromField = "touchTime";
ROUTE3055.toNode = "JumpTimer";
ROUTE3055.toField = "set_stopTime";
browser.currentScene.children[683] = ROUTE3055;

let ROUTE3056 = browser.currentScene.createNode("ROUTE");
ROUTE3056.fromNode = "Stand_Touch";
ROUTE3056.fromField = "touchTime";
ROUTE3056.toNode = "KickTimer";
ROUTE3056.toField = "set_stopTime";
browser.currentScene.children[684] = ROUTE3056;

let ROUTE3057 = browser.currentScene.createNode("ROUTE");
ROUTE3057.fromNode = "Stand_Touch";
ROUTE3057.fromField = "touchTime";
ROUTE3057.toNode = "StopTimer";
ROUTE3057.toField = "set_stopTime";
browser.currentScene.children[685] = ROUTE3057;

let ROUTE3058 = browser.currentScene.createNode("ROUTE");
ROUTE3058.fromNode = "Stand_Touch";
ROUTE3058.fromField = "touchTime";
ROUTE3058.toNode = "StandTimer";
ROUTE3058.toField = "set_startTime";
browser.currentScene.children[686] = ROUTE3058;

let ROUTE3059 = browser.currentScene.createNode("ROUTE");
ROUTE3059.fromNode = "Pitch_Touch";
ROUTE3059.fromField = "touchTime";
ROUTE3059.toNode = "StandTimer";
ROUTE3059.toField = "set_stopTime";
browser.currentScene.children[687] = ROUTE3059;

let ROUTE3060 = browser.currentScene.createNode("ROUTE");
ROUTE3060.fromNode = "Pitch_Touch";
ROUTE3060.fromField = "touchTime";
ROUTE3060.toNode = "YawTimer";
ROUTE3060.toField = "set_stopTime";
browser.currentScene.children[688] = ROUTE3060;

let ROUTE3061 = browser.currentScene.createNode("ROUTE");
ROUTE3061.fromNode = "Pitch_Touch";
ROUTE3061.fromField = "touchTime";
ROUTE3061.toNode = "RollTimer";
ROUTE3061.toField = "set_stopTime";
browser.currentScene.children[689] = ROUTE3061;

let ROUTE3062 = browser.currentScene.createNode("ROUTE");
ROUTE3062.fromNode = "Pitch_Touch";
ROUTE3062.fromField = "touchTime";
ROUTE3062.toNode = "WalkTimer";
ROUTE3062.toField = "set_stopTime";
browser.currentScene.children[690] = ROUTE3062;

let ROUTE3063 = browser.currentScene.createNode("ROUTE");
ROUTE3063.fromNode = "Pitch_Touch";
ROUTE3063.fromField = "touchTime";
ROUTE3063.toNode = "RunTimer";
ROUTE3063.toField = "set_stopTime";
browser.currentScene.children[691] = ROUTE3063;

let ROUTE3064 = browser.currentScene.createNode("ROUTE");
ROUTE3064.fromNode = "Pitch_Touch";
ROUTE3064.fromField = "touchTime";
ROUTE3064.toNode = "JumpTimer";
ROUTE3064.toField = "set_stopTime";
browser.currentScene.children[692] = ROUTE3064;

let ROUTE3065 = browser.currentScene.createNode("ROUTE");
ROUTE3065.fromNode = "Pitch_Touch";
ROUTE3065.fromField = "touchTime";
ROUTE3065.toNode = "KickTimer";
ROUTE3065.toField = "set_stopTime";
browser.currentScene.children[693] = ROUTE3065;

let ROUTE3066 = browser.currentScene.createNode("ROUTE");
ROUTE3066.fromNode = "Pitch_Touch";
ROUTE3066.fromField = "touchTime";
ROUTE3066.toNode = "StopTimer";
ROUTE3066.toField = "set_stopTime";
browser.currentScene.children[694] = ROUTE3066;

let ROUTE3067 = browser.currentScene.createNode("ROUTE");
ROUTE3067.fromNode = "Pitch_Touch";
ROUTE3067.fromField = "touchTime";
ROUTE3067.toNode = "PitchTimer";
ROUTE3067.toField = "set_startTime";
browser.currentScene.children[695] = ROUTE3067;

let ROUTE3068 = browser.currentScene.createNode("ROUTE");
ROUTE3068.fromNode = "Yaw_Touch";
ROUTE3068.fromField = "touchTime";
ROUTE3068.toNode = "StandTimer";
ROUTE3068.toField = "set_stopTime";
browser.currentScene.children[696] = ROUTE3068;

let ROUTE3069 = browser.currentScene.createNode("ROUTE");
ROUTE3069.fromNode = "Yaw_Touch";
ROUTE3069.fromField = "touchTime";
ROUTE3069.toNode = "PitchTimer";
ROUTE3069.toField = "set_stopTime";
browser.currentScene.children[697] = ROUTE3069;

let ROUTE3070 = browser.currentScene.createNode("ROUTE");
ROUTE3070.fromNode = "Yaw_Touch";
ROUTE3070.fromField = "touchTime";
ROUTE3070.toNode = "RollTimer";
ROUTE3070.toField = "set_stopTime";
browser.currentScene.children[698] = ROUTE3070;

let ROUTE3071 = browser.currentScene.createNode("ROUTE");
ROUTE3071.fromNode = "Yaw_Touch";
ROUTE3071.fromField = "touchTime";
ROUTE3071.toNode = "WalkTimer";
ROUTE3071.toField = "set_stopTime";
browser.currentScene.children[699] = ROUTE3071;

let ROUTE3072 = browser.currentScene.createNode("ROUTE");
ROUTE3072.fromNode = "Yaw_Touch";
ROUTE3072.fromField = "touchTime";
ROUTE3072.toNode = "RunTimer";
ROUTE3072.toField = "set_stopTime";
browser.currentScene.children[700] = ROUTE3072;

let ROUTE3073 = browser.currentScene.createNode("ROUTE");
ROUTE3073.fromNode = "Yaw_Touch";
ROUTE3073.fromField = "touchTime";
ROUTE3073.toNode = "JumpTimer";
ROUTE3073.toField = "set_stopTime";
browser.currentScene.children[701] = ROUTE3073;

let ROUTE3074 = browser.currentScene.createNode("ROUTE");
ROUTE3074.fromNode = "Yaw_Touch";
ROUTE3074.fromField = "touchTime";
ROUTE3074.toNode = "KickTimer";
ROUTE3074.toField = "set_stopTime";
browser.currentScene.children[702] = ROUTE3074;

let ROUTE3075 = browser.currentScene.createNode("ROUTE");
ROUTE3075.fromNode = "Yaw_Touch";
ROUTE3075.fromField = "touchTime";
ROUTE3075.toNode = "StopTimer";
ROUTE3075.toField = "set_stopTime";
browser.currentScene.children[703] = ROUTE3075;

let ROUTE3076 = browser.currentScene.createNode("ROUTE");
ROUTE3076.fromNode = "Yaw_Touch";
ROUTE3076.fromField = "touchTime";
ROUTE3076.toNode = "YawTimer";
ROUTE3076.toField = "set_startTime";
browser.currentScene.children[704] = ROUTE3076;

let ROUTE3077 = browser.currentScene.createNode("ROUTE");
ROUTE3077.fromNode = "Walk_Touch";
ROUTE3077.fromField = "touchTime";
ROUTE3077.toNode = "StandTimer";
ROUTE3077.toField = "set_stopTime";
browser.currentScene.children[705] = ROUTE3077;

let ROUTE3078 = browser.currentScene.createNode("ROUTE");
ROUTE3078.fromNode = "Walk_Touch";
ROUTE3078.fromField = "touchTime";
ROUTE3078.toNode = "PitchTimer";
ROUTE3078.toField = "set_stopTime";
browser.currentScene.children[706] = ROUTE3078;

let ROUTE3079 = browser.currentScene.createNode("ROUTE");
ROUTE3079.fromNode = "Walk_Touch";
ROUTE3079.fromField = "touchTime";
ROUTE3079.toNode = "YawTimer";
ROUTE3079.toField = "set_stopTime";
browser.currentScene.children[707] = ROUTE3079;

let ROUTE3080 = browser.currentScene.createNode("ROUTE");
ROUTE3080.fromNode = "Walk_Touch";
ROUTE3080.fromField = "touchTime";
ROUTE3080.toNode = "RollTimer";
ROUTE3080.toField = "set_stopTime";
browser.currentScene.children[708] = ROUTE3080;

let ROUTE3081 = browser.currentScene.createNode("ROUTE");
ROUTE3081.fromNode = "Walk_Touch";
ROUTE3081.fromField = "touchTime";
ROUTE3081.toNode = "RunTimer";
ROUTE3081.toField = "set_stopTime";
browser.currentScene.children[709] = ROUTE3081;

let ROUTE3082 = browser.currentScene.createNode("ROUTE");
ROUTE3082.fromNode = "Walk_Touch";
ROUTE3082.fromField = "touchTime";
ROUTE3082.toNode = "JumpTimer";
ROUTE3082.toField = "set_stopTime";
browser.currentScene.children[710] = ROUTE3082;

let ROUTE3083 = browser.currentScene.createNode("ROUTE");
ROUTE3083.fromNode = "Walk_Touch";
ROUTE3083.fromField = "touchTime";
ROUTE3083.toNode = "KickTimer";
ROUTE3083.toField = "set_stopTime";
browser.currentScene.children[711] = ROUTE3083;

let ROUTE3084 = browser.currentScene.createNode("ROUTE");
ROUTE3084.fromNode = "Walk_Touch";
ROUTE3084.fromField = "touchTime";
ROUTE3084.toNode = "StopTimer";
ROUTE3084.toField = "set_stopTime";
browser.currentScene.children[712] = ROUTE3084;

let ROUTE3085 = browser.currentScene.createNode("ROUTE");
ROUTE3085.fromNode = "Walk_Touch";
ROUTE3085.fromField = "touchTime";
ROUTE3085.toNode = "WalkTimer";
ROUTE3085.toField = "set_startTime";
browser.currentScene.children[713] = ROUTE3085;

let ROUTE3086 = browser.currentScene.createNode("ROUTE");
ROUTE3086.fromNode = "Roll_Touch";
ROUTE3086.fromField = "touchTime";
ROUTE3086.toNode = "StandTimer";
ROUTE3086.toField = "set_stopTime";
browser.currentScene.children[714] = ROUTE3086;

let ROUTE3087 = browser.currentScene.createNode("ROUTE");
ROUTE3087.fromNode = "Roll_Touch";
ROUTE3087.fromField = "touchTime";
ROUTE3087.toNode = "PitchTimer";
ROUTE3087.toField = "set_stopTime";
browser.currentScene.children[715] = ROUTE3087;

let ROUTE3088 = browser.currentScene.createNode("ROUTE");
ROUTE3088.fromNode = "Roll_Touch";
ROUTE3088.fromField = "touchTime";
ROUTE3088.toNode = "YawTimer";
ROUTE3088.toField = "set_stopTime";
browser.currentScene.children[716] = ROUTE3088;

let ROUTE3089 = browser.currentScene.createNode("ROUTE");
ROUTE3089.fromNode = "Roll_Touch";
ROUTE3089.fromField = "touchTime";
ROUTE3089.toNode = "WalkTimer";
ROUTE3089.toField = "set_stopTime";
browser.currentScene.children[717] = ROUTE3089;

let ROUTE3090 = browser.currentScene.createNode("ROUTE");
ROUTE3090.fromNode = "Roll_Touch";
ROUTE3090.fromField = "touchTime";
ROUTE3090.toNode = "RunTimer";
ROUTE3090.toField = "set_stopTime";
browser.currentScene.children[718] = ROUTE3090;

let ROUTE3091 = browser.currentScene.createNode("ROUTE");
ROUTE3091.fromNode = "Roll_Touch";
ROUTE3091.fromField = "touchTime";
ROUTE3091.toNode = "JumpTimer";
ROUTE3091.toField = "set_stopTime";
browser.currentScene.children[719] = ROUTE3091;

let ROUTE3092 = browser.currentScene.createNode("ROUTE");
ROUTE3092.fromNode = "Roll_Touch";
ROUTE3092.fromField = "touchTime";
ROUTE3092.toNode = "KickTimer";
ROUTE3092.toField = "set_stopTime";
browser.currentScene.children[720] = ROUTE3092;

let ROUTE3093 = browser.currentScene.createNode("ROUTE");
ROUTE3093.fromNode = "Roll_Touch";
ROUTE3093.fromField = "touchTime";
ROUTE3093.toNode = "StopTimer";
ROUTE3093.toField = "set_stopTime";
browser.currentScene.children[721] = ROUTE3093;

let ROUTE3094 = browser.currentScene.createNode("ROUTE");
ROUTE3094.fromNode = "Roll_Touch";
ROUTE3094.fromField = "touchTime";
ROUTE3094.toNode = "RollTimer";
ROUTE3094.toField = "set_startTime";
browser.currentScene.children[722] = ROUTE3094;

let ROUTE3095 = browser.currentScene.createNode("ROUTE");
ROUTE3095.fromNode = "Run_Touch";
ROUTE3095.fromField = "touchTime";
ROUTE3095.toNode = "StandTimer";
ROUTE3095.toField = "set_stopTime";
browser.currentScene.children[723] = ROUTE3095;

let ROUTE3096 = browser.currentScene.createNode("ROUTE");
ROUTE3096.fromNode = "Run_Touch";
ROUTE3096.fromField = "touchTime";
ROUTE3096.toNode = "PitchTimer";
ROUTE3096.toField = "set_stopTime";
browser.currentScene.children[724] = ROUTE3096;

let ROUTE3097 = browser.currentScene.createNode("ROUTE");
ROUTE3097.fromNode = "Run_Touch";
ROUTE3097.fromField = "touchTime";
ROUTE3097.toNode = "YawTimer";
ROUTE3097.toField = "set_stopTime";
browser.currentScene.children[725] = ROUTE3097;

let ROUTE3098 = browser.currentScene.createNode("ROUTE");
ROUTE3098.fromNode = "Run_Touch";
ROUTE3098.fromField = "touchTime";
ROUTE3098.toNode = "RollTimer";
ROUTE3098.toField = "set_stopTime";
browser.currentScene.children[726] = ROUTE3098;

let ROUTE3099 = browser.currentScene.createNode("ROUTE");
ROUTE3099.fromNode = "Run_Touch";
ROUTE3099.fromField = "touchTime";
ROUTE3099.toNode = "WalkTimer";
ROUTE3099.toField = "set_stopTime";
browser.currentScene.children[727] = ROUTE3099;

let ROUTE3100 = browser.currentScene.createNode("ROUTE");
ROUTE3100.fromNode = "Run_Touch";
ROUTE3100.fromField = "touchTime";
ROUTE3100.toNode = "JumpTimer";
ROUTE3100.toField = "set_stopTime";
browser.currentScene.children[728] = ROUTE3100;

let ROUTE3101 = browser.currentScene.createNode("ROUTE");
ROUTE3101.fromNode = "Run_Touch";
ROUTE3101.fromField = "touchTime";
ROUTE3101.toNode = "KickTimer";
ROUTE3101.toField = "set_stopTime";
browser.currentScene.children[729] = ROUTE3101;

let ROUTE3102 = browser.currentScene.createNode("ROUTE");
ROUTE3102.fromNode = "Run_Touch";
ROUTE3102.fromField = "touchTime";
ROUTE3102.toNode = "StopTimer";
ROUTE3102.toField = "set_stopTime";
browser.currentScene.children[730] = ROUTE3102;

let ROUTE3103 = browser.currentScene.createNode("ROUTE");
ROUTE3103.fromNode = "Run_Touch";
ROUTE3103.fromField = "touchTime";
ROUTE3103.toNode = "RunTimer";
ROUTE3103.toField = "set_startTime";
browser.currentScene.children[731] = ROUTE3103;

let ROUTE3104 = browser.currentScene.createNode("ROUTE");
ROUTE3104.fromNode = "Jump_Touch";
ROUTE3104.fromField = "touchTime";
ROUTE3104.toNode = "StandTimer";
ROUTE3104.toField = "set_stopTime";
browser.currentScene.children[732] = ROUTE3104;

let ROUTE3105 = browser.currentScene.createNode("ROUTE");
ROUTE3105.fromNode = "Jump_Touch";
ROUTE3105.fromField = "touchTime";
ROUTE3105.toNode = "PitchTimer";
ROUTE3105.toField = "set_stopTime";
browser.currentScene.children[733] = ROUTE3105;

let ROUTE3106 = browser.currentScene.createNode("ROUTE");
ROUTE3106.fromNode = "Jump_Touch";
ROUTE3106.fromField = "touchTime";
ROUTE3106.toNode = "YawTimer";
ROUTE3106.toField = "set_stopTime";
browser.currentScene.children[734] = ROUTE3106;

let ROUTE3107 = browser.currentScene.createNode("ROUTE");
ROUTE3107.fromNode = "Jump_Touch";
ROUTE3107.fromField = "touchTime";
ROUTE3107.toNode = "RollTimer";
ROUTE3107.toField = "set_stopTime";
browser.currentScene.children[735] = ROUTE3107;

let ROUTE3108 = browser.currentScene.createNode("ROUTE");
ROUTE3108.fromNode = "Jump_Touch";
ROUTE3108.fromField = "touchTime";
ROUTE3108.toNode = "WalkTimer";
ROUTE3108.toField = "set_stopTime";
browser.currentScene.children[736] = ROUTE3108;

let ROUTE3109 = browser.currentScene.createNode("ROUTE");
ROUTE3109.fromNode = "Jump_Touch";
ROUTE3109.fromField = "touchTime";
ROUTE3109.toNode = "RunTimer";
ROUTE3109.toField = "set_stopTime";
browser.currentScene.children[737] = ROUTE3109;

let ROUTE3110 = browser.currentScene.createNode("ROUTE");
ROUTE3110.fromNode = "Jump_Touch";
ROUTE3110.fromField = "touchTime";
ROUTE3110.toNode = "KickTimer";
ROUTE3110.toField = "set_stopTime";
browser.currentScene.children[738] = ROUTE3110;

let ROUTE3111 = browser.currentScene.createNode("ROUTE");
ROUTE3111.fromNode = "Jump_Touch";
ROUTE3111.fromField = "touchTime";
ROUTE3111.toNode = "StopTimer";
ROUTE3111.toField = "set_stopTime";
browser.currentScene.children[739] = ROUTE3111;

let ROUTE3112 = browser.currentScene.createNode("ROUTE");
ROUTE3112.fromNode = "Jump_Touch";
ROUTE3112.fromField = "touchTime";
ROUTE3112.toNode = "JumpTimer";
ROUTE3112.toField = "set_startTime";
browser.currentScene.children[740] = ROUTE3112;

let ROUTE3113 = browser.currentScene.createNode("ROUTE");
ROUTE3113.fromNode = "Kick_Touch";
ROUTE3113.fromField = "touchTime";
ROUTE3113.toNode = "StandTimer";
ROUTE3113.toField = "set_stopTime";
browser.currentScene.children[741] = ROUTE3113;

let ROUTE3114 = browser.currentScene.createNode("ROUTE");
ROUTE3114.fromNode = "Kick_Touch";
ROUTE3114.fromField = "touchTime";
ROUTE3114.toNode = "PitchTimer";
ROUTE3114.toField = "set_stopTime";
browser.currentScene.children[742] = ROUTE3114;

let ROUTE3115 = browser.currentScene.createNode("ROUTE");
ROUTE3115.fromNode = "Kick_Touch";
ROUTE3115.fromField = "touchTime";
ROUTE3115.toNode = "YawTimer";
ROUTE3115.toField = "set_stopTime";
browser.currentScene.children[743] = ROUTE3115;

let ROUTE3116 = browser.currentScene.createNode("ROUTE");
ROUTE3116.fromNode = "Kick_Touch";
ROUTE3116.fromField = "touchTime";
ROUTE3116.toNode = "RollTimer";
ROUTE3116.toField = "set_stopTime";
browser.currentScene.children[744] = ROUTE3116;

let ROUTE3117 = browser.currentScene.createNode("ROUTE");
ROUTE3117.fromNode = "Kick_Touch";
ROUTE3117.fromField = "touchTime";
ROUTE3117.toNode = "WalkTimer";
ROUTE3117.toField = "set_stopTime";
browser.currentScene.children[745] = ROUTE3117;

let ROUTE3118 = browser.currentScene.createNode("ROUTE");
ROUTE3118.fromNode = "Kick_Touch";
ROUTE3118.fromField = "touchTime";
ROUTE3118.toNode = "RunTimer";
ROUTE3118.toField = "set_stopTime";
browser.currentScene.children[746] = ROUTE3118;

let ROUTE3119 = browser.currentScene.createNode("ROUTE");
ROUTE3119.fromNode = "Kick_Touch";
ROUTE3119.fromField = "touchTime";
ROUTE3119.toNode = "JumpTimer";
ROUTE3119.toField = "set_stopTime";
browser.currentScene.children[747] = ROUTE3119;

let ROUTE3120 = browser.currentScene.createNode("ROUTE");
ROUTE3120.fromNode = "Kick_Touch";
ROUTE3120.fromField = "touchTime";
ROUTE3120.toNode = "StopTimer";
ROUTE3120.toField = "set_stopTime";
browser.currentScene.children[748] = ROUTE3120;

let ROUTE3121 = browser.currentScene.createNode("ROUTE");
ROUTE3121.fromNode = "Kick_Touch";
ROUTE3121.fromField = "touchTime";
ROUTE3121.toNode = "KickTimer";
ROUTE3121.toField = "set_startTime";
browser.currentScene.children[749] = ROUTE3121;

let ROUTE3122 = browser.currentScene.createNode("ROUTE");
ROUTE3122.fromNode = "Stop_Touch";
ROUTE3122.fromField = "touchTime";
ROUTE3122.toNode = "StandTimer";
ROUTE3122.toField = "set_stopTime";
browser.currentScene.children[750] = ROUTE3122;

let ROUTE3123 = browser.currentScene.createNode("ROUTE");
ROUTE3123.fromNode = "Stop_Touch";
ROUTE3123.fromField = "touchTime";
ROUTE3123.toNode = "PitchTimer";
ROUTE3123.toField = "set_stopTime";
browser.currentScene.children[751] = ROUTE3123;

let ROUTE3124 = browser.currentScene.createNode("ROUTE");
ROUTE3124.fromNode = "Stop_Touch";
ROUTE3124.fromField = "touchTime";
ROUTE3124.toNode = "YawTimer";
ROUTE3124.toField = "set_stopTime";
browser.currentScene.children[752] = ROUTE3124;

let ROUTE3125 = browser.currentScene.createNode("ROUTE");
ROUTE3125.fromNode = "Stop_Touch";
ROUTE3125.fromField = "touchTime";
ROUTE3125.toNode = "RollTimer";
ROUTE3125.toField = "set_stopTime";
browser.currentScene.children[753] = ROUTE3125;

let ROUTE3126 = browser.currentScene.createNode("ROUTE");
ROUTE3126.fromNode = "Stop_Touch";
ROUTE3126.fromField = "touchTime";
ROUTE3126.toNode = "WalkTimer";
ROUTE3126.toField = "set_stopTime";
browser.currentScene.children[754] = ROUTE3126;

let ROUTE3127 = browser.currentScene.createNode("ROUTE");
ROUTE3127.fromNode = "Stop_Touch";
ROUTE3127.fromField = "touchTime";
ROUTE3127.toNode = "RunTimer";
ROUTE3127.toField = "set_stopTime";
browser.currentScene.children[755] = ROUTE3127;

let ROUTE3128 = browser.currentScene.createNode("ROUTE");
ROUTE3128.fromNode = "Stop_Touch";
ROUTE3128.fromField = "touchTime";
ROUTE3128.toNode = "JumpTimer";
ROUTE3128.toField = "set_stopTime";
browser.currentScene.children[756] = ROUTE3128;

let ROUTE3129 = browser.currentScene.createNode("ROUTE");
ROUTE3129.fromNode = "Stop_Touch";
ROUTE3129.fromField = "touchTime";
ROUTE3129.toNode = "KickTimer";
ROUTE3129.toField = "set_stopTime";
browser.currentScene.children[757] = ROUTE3129;

let ROUTE3130 = browser.currentScene.createNode("ROUTE");
ROUTE3130.fromNode = "Stop_Touch";
ROUTE3130.fromField = "touchTime";
ROUTE3130.toNode = "StopTimer";
ROUTE3130.toField = "set_startTime";
browser.currentScene.children[758] = ROUTE3130;

}
main ();
