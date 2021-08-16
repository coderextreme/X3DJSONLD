let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "HAnimSpecificationLOA3Animation.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "reference";
meta5.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "24 April 2013";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "4 July 2020";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "TODO";
meta8.content = "Convert to X3D4 HAnim2";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "Image";
meta9.content = "HAnimSpecificationLOA3MotionH3DViewer.png";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "Image";
meta10.content = "HAnimSpecificationLOA3MotionInstantReality.png";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "Image";
meta11.content = "HAnimSpecificationLOA3MotionOctagaVS.png";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "Image";
meta12.content = "HAnimSpecificationLOA3MotionView3dscene.png";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "HAnimSpecificationLOA3Illustrated.x3d";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "HAnimSpecificationLOA3Invisible.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "Image";
meta16.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "Image";
meta17.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "Image";
meta18.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "reference";
meta20.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "reference";
meta21.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "creator";
meta22.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "translator";
meta23.content = "Don Brutzman and Joe Williams";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "generator";
meta24.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "reference";
meta25.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "reference";
meta26.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "reference";
meta27.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "generator";
meta28.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[26] = meta28;

let meta29 = browser.currentScene.createNode("meta");
meta29.name = "identifier";
meta29.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Animation.x3d";
head1.meta[27] = meta29;

let meta30 = browser.currentScene.createNode("meta");
meta30.name = "license";
meta30.content = "../license.html";
head1.meta[28] = meta30;

head = head1;

let Background32 = browser.currentScene.createNode("Background");
Background32.skyColor = new MFColor(new float[0.3,0.3,0.3]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background32;

let NavigationInfo33 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo33;

let Group34 = browser.currentScene.createNode("Group");
Group34.DEF = "Original_WorldInfo";
let WorldInfo35 = browser.currentScene.createNode("WorldInfo");
WorldInfo35.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo35.title = "HANIM 200x Default Joint Centers, LOA3";
Group34.children = new MFNode();

Group34.children[0] = WorldInfo35;

browser.currentScene.children[2] = Group34;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint36.description = "Humanoid LOA 3 Front";
Viewpoint36.position = new SFVec3f(new float[0,0.4,4]);
browser.currentScene.children[3] = Viewpoint36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front Close";
Viewpoint37.position = new SFVec3f(new float[0,0.8,2]);
browser.currentScene.children[4] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Front Closer";
Viewpoint38.position = new SFVec3f(new float[0,1.2,1]);
browser.currentScene.children[5] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Front Face";
Viewpoint39.position = new SFVec3f(new float[0,1.63,1]);
browser.currentScene.children[6] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Right Side";
Viewpoint40.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint40.position = new SFVec3f(new float[2.6,0.8,0]);
browser.currentScene.children[7] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Right Side Close";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint41.position = new SFVec3f(new float[1,0.8,0.5]);
browser.currentScene.children[8] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Left Side Close";
Viewpoint42.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint42.position = new SFVec3f(new float[-1,0.8,0.5]);
browser.currentScene.children[9] = Viewpoint42;

let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint43.description = "Humanoid LOA 3 Left Side";
Viewpoint43.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint43.position = new SFVec3f(new float[-2.6,0.8,0]);
browser.currentScene.children[10] = Viewpoint43;

let Viewpoint44 = browser.currentScene.createNode("Viewpoint");
Viewpoint44.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint44.description = "Humanoid LOA 3 Top";
Viewpoint44.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint44.position = new SFVec3f(new float[0,3.5,0]);
browser.currentScene.children[11] = Viewpoint44;

let HAnimHumanoid45 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid45.name = "humanoid";
HAnimHumanoid45.DEF = "hanim_humanoid";
HAnimHumanoid45.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid45.version = "1.0";
let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "humanoid_root";
HAnimJoint46.DEF = "hanim_humanoid_root";
HAnimJoint46.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint46.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment47 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment47.name = "sacrum";
HAnimSegment47.DEF = "hanim_sacrum";
//<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>
let TouchSensor48 = browser.currentScene.createNode("TouchSensor");
TouchSensor48.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = TouchSensor48;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Shape50 = browser.currentScene.createNode("Shape");
Shape50.DEF = "HAnimJointShape";
let Sphere51 = browser.currentScene.createNode("Sphere");
Sphere51.radius = 0.006;
Shape50.geometry = Sphere51;

let Appearance52 = browser.currentScene.createNode("Appearance");
Appearance52.DEF = "HAnimJointAppearance";
let Material53 = browser.currentScene.createNode("Material");
Material53.diffuseColor = new SFColor(new float[1,0.5,0]);
Material53.transparency = 0.5;
Appearance52.material = Material53;

Shape50.appearance = Appearance52;

Transform49.children = new MFNode();

Transform49.children[0] = Shape50;

HAnimSegment47.children[1] = Transform49;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
let Shape54 = browser.currentScene.createNode("Shape");
let LineSet55 = browser.currentScene.createNode("LineSet");
LineSet55.vertexCount = new MFInt32(new int[2]);
let Coordinate56 = browser.currentScene.createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet55.coord = Coordinate56;

let ColorRGBA57 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA57.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA57.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet55.color = ColorRGBA57;

Shape54.geometry = LineSet55;

HAnimSegment47.children[2] = Shape54;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
let Shape58 = browser.currentScene.createNode("Shape");
let LineSet59 = browser.currentScene.createNode("LineSet");
LineSet59.vertexCount = new MFInt32(new int[2]);
let Coordinate60 = browser.currentScene.createNode("Coordinate");
Coordinate60.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet59.coord = Coordinate60;

let ColorRGBA61 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA61.USE = "HAnimSegmentLineColorRGBA";
LineSet59.color = ColorRGBA61;

Shape58.geometry = LineSet59;

HAnimSegment47.children[3] = Shape58;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "sacroiliac";
HAnimJoint62.DEF = "hanim_sacroiliac";
HAnimJoint62.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint62.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment63 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment63.name = "pelvis";
HAnimSegment63.DEF = "hanim_pelvis";
//<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>
let TouchSensor64 = browser.currentScene.createNode("TouchSensor");
TouchSensor64.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment63.children = new MFNode();

HAnimSegment63.children[0] = TouchSensor64;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape66 = browser.currentScene.createNode("Shape");
Shape66.USE = "HAnimJointShape";
Transform65.children = new MFNode();

Transform65.children[0] = Shape66;

HAnimSegment63.children[1] = Transform65;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
let Shape67 = browser.currentScene.createNode("Shape");
let LineSet68 = browser.currentScene.createNode("LineSet");
LineSet68.vertexCount = new MFInt32(new int[2]);
let Coordinate69 = browser.currentScene.createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet68.coord = Coordinate69;

let ColorRGBA70 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA70.USE = "HAnimSegmentLineColorRGBA";
LineSet68.color = ColorRGBA70;

Shape67.geometry = LineSet68;

HAnimSegment63.children[2] = Shape67;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
let Shape71 = browser.currentScene.createNode("Shape");
let LineSet72 = browser.currentScene.createNode("LineSet");
LineSet72.vertexCount = new MFInt32(new int[2]);
let Coordinate73 = browser.currentScene.createNode("Coordinate");
Coordinate73.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet72.coord = Coordinate73;

let ColorRGBA74 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA74.USE = "HAnimSegmentLineColorRGBA";
LineSet72.color = ColorRGBA74;

Shape71.geometry = LineSet72;

HAnimSegment63.children[3] = Shape71;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
let Shape75 = browser.currentScene.createNode("Shape");
let LineSet76 = browser.currentScene.createNode("LineSet");
LineSet76.vertexCount = new MFInt32(new int[2]);
let Coordinate77 = browser.currentScene.createNode("Coordinate");
Coordinate77.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet76.coord = Coordinate77;

let ColorRGBA78 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA78.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA78.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet76.color = ColorRGBA78;

Shape75.geometry = LineSet76;

HAnimSegment63.children[4] = Shape75;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
let Shape79 = browser.currentScene.createNode("Shape");
let LineSet80 = browser.currentScene.createNode("LineSet");
LineSet80.vertexCount = new MFInt32(new int[2]);
let Coordinate81 = browser.currentScene.createNode("Coordinate");
Coordinate81.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet80.coord = Coordinate81;

let ColorRGBA82 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA82.USE = "HAnimSiteLineColorRGBA";
LineSet80.color = ColorRGBA82;

Shape79.geometry = LineSet80;

HAnimSegment63.children[5] = Shape79;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
let Shape83 = browser.currentScene.createNode("Shape");
let LineSet84 = browser.currentScene.createNode("LineSet");
LineSet84.vertexCount = new MFInt32(new int[2]);
let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet84.coord = Coordinate85;

let ColorRGBA86 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA86.USE = "HAnimSiteLineColorRGBA";
LineSet84.color = ColorRGBA86;

Shape83.geometry = LineSet84;

HAnimSegment63.children[6] = Shape83;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
let Shape87 = browser.currentScene.createNode("Shape");
let LineSet88 = browser.currentScene.createNode("LineSet");
LineSet88.vertexCount = new MFInt32(new int[2]);
let Coordinate89 = browser.currentScene.createNode("Coordinate");
Coordinate89.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet88.coord = Coordinate89;

let ColorRGBA90 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA90.USE = "HAnimSiteLineColorRGBA";
LineSet88.color = ColorRGBA90;

Shape87.geometry = LineSet88;

HAnimSegment63.children[7] = Shape87;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
let Shape91 = browser.currentScene.createNode("Shape");
let LineSet92 = browser.currentScene.createNode("LineSet");
LineSet92.vertexCount = new MFInt32(new int[2]);
let Coordinate93 = browser.currentScene.createNode("Coordinate");
Coordinate93.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet92.coord = Coordinate93;

let ColorRGBA94 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA94.USE = "HAnimSiteLineColorRGBA";
LineSet92.color = ColorRGBA94;

Shape91.geometry = LineSet92;

HAnimSegment63.children[8] = Shape91;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
let Shape95 = browser.currentScene.createNode("Shape");
let LineSet96 = browser.currentScene.createNode("LineSet");
LineSet96.vertexCount = new MFInt32(new int[2]);
let Coordinate97 = browser.currentScene.createNode("Coordinate");
Coordinate97.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet96.coord = Coordinate97;

let ColorRGBA98 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA98.USE = "HAnimSiteLineColorRGBA";
LineSet96.color = ColorRGBA98;

Shape95.geometry = LineSet96;

HAnimSegment63.children[9] = Shape95;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
let Shape99 = browser.currentScene.createNode("Shape");
let LineSet100 = browser.currentScene.createNode("LineSet");
LineSet100.vertexCount = new MFInt32(new int[2]);
let Coordinate101 = browser.currentScene.createNode("Coordinate");
Coordinate101.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet100.coord = Coordinate101;

let ColorRGBA102 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA102.USE = "HAnimSiteLineColorRGBA";
LineSet100.color = ColorRGBA102;

Shape99.geometry = LineSet100;

HAnimSegment63.children[10] = Shape99;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
let Shape103 = browser.currentScene.createNode("Shape");
let LineSet104 = browser.currentScene.createNode("LineSet");
LineSet104.vertexCount = new MFInt32(new int[2]);
let Coordinate105 = browser.currentScene.createNode("Coordinate");
Coordinate105.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet104.coord = Coordinate105;

let ColorRGBA106 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA106.USE = "HAnimSiteLineColorRGBA";
LineSet104.color = ColorRGBA106;

Shape103.geometry = LineSet104;

HAnimSegment63.children[11] = Shape103;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
let Shape107 = browser.currentScene.createNode("Shape");
let LineSet108 = browser.currentScene.createNode("LineSet");
LineSet108.vertexCount = new MFInt32(new int[2]);
let Coordinate109 = browser.currentScene.createNode("Coordinate");
Coordinate109.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet108.coord = Coordinate109;

let ColorRGBA110 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA110.USE = "HAnimSiteLineColorRGBA";
LineSet108.color = ColorRGBA110;

Shape107.geometry = LineSet108;

HAnimSegment63.children[12] = Shape107;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.name = "r_iliocristale_pt";
HAnimSite111.DEF = "hanim_r_iliocristale_pt";
HAnimSite111.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
let TouchSensor112 = browser.currentScene.createNode("TouchSensor");
TouchSensor112.description = "HAnimSite r_iliocristale";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = TouchSensor112;

let Shape113 = browser.currentScene.createNode("Shape");
Shape113.DEF = "HAnimSiteShape";
let IndexedFaceSet114 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet114.DEF = "DiamondIFS";
IndexedFaceSet114.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet114.creaseAngle = 0.5;
IndexedFaceSet114.solid = False;
let Coordinate115 = browser.currentScene.createNode("Coordinate");
Coordinate115.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet114.coord = Coordinate115;

Shape113.geometry = IndexedFaceSet114;

let Appearance116 = browser.currentScene.createNode("Appearance");
let Material117 = browser.currentScene.createNode("Material");
Material117.diffuseColor = new SFColor(new float[1,0,0]);
Appearance116.material = Material117;

Shape113.appearance = Appearance116;

HAnimSite111.children[1] = Shape113;

HAnimSegment63.children[13] = HAnimSite111;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.name = "r_trochanterion_pt";
HAnimSite118.DEF = "hanim_r_trochanterion_pt";
HAnimSite118.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
let TouchSensor119 = browser.currentScene.createNode("TouchSensor");
TouchSensor119.description = "HAnimSite r_trochanterion";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = TouchSensor119;

let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118.children[1] = Shape120;

HAnimSegment63.children[14] = HAnimSite118;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.name = "l_iliocristale_pt";
HAnimSite121.DEF = "hanim_l_iliocristale_pt";
HAnimSite121.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
let TouchSensor122 = browser.currentScene.createNode("TouchSensor");
TouchSensor122.description = "HAnimSite l_iliocristale";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = TouchSensor122;

let Shape123 = browser.currentScene.createNode("Shape");
Shape123.USE = "HAnimSiteShape";
HAnimSite121.children[1] = Shape123;

HAnimSegment63.children[15] = HAnimSite121;

let HAnimSite124 = browser.currentScene.createNode("HAnimSite");
HAnimSite124.name = "l_trochanterion_pt";
HAnimSite124.DEF = "hanim_l_trochanterion_pt";
HAnimSite124.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
let TouchSensor125 = browser.currentScene.createNode("TouchSensor");
TouchSensor125.description = "HAnimSite l_trochanterion";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = TouchSensor125;

let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124.children[1] = Shape126;

HAnimSegment63.children[16] = HAnimSite124;

let HAnimSite127 = browser.currentScene.createNode("HAnimSite");
HAnimSite127.name = "r_asis_pt";
HAnimSite127.DEF = "hanim_r_asis_pt";
HAnimSite127.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
let TouchSensor128 = browser.currentScene.createNode("TouchSensor");
TouchSensor128.description = "HAnimSite r_asis";
HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = TouchSensor128;

let Shape129 = browser.currentScene.createNode("Shape");
Shape129.USE = "HAnimSiteShape";
HAnimSite127.children[1] = Shape129;

HAnimSegment63.children[17] = HAnimSite127;

let HAnimSite130 = browser.currentScene.createNode("HAnimSite");
HAnimSite130.name = "l_asis_pt";
HAnimSite130.DEF = "hanim_l_asis_pt";
HAnimSite130.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
let TouchSensor131 = browser.currentScene.createNode("TouchSensor");
TouchSensor131.description = "HAnimSite l_asis";
HAnimSite130.children = new MFNode();

HAnimSite130.children[0] = TouchSensor131;

let Shape132 = browser.currentScene.createNode("Shape");
Shape132.USE = "HAnimSiteShape";
HAnimSite130.children[1] = Shape132;

HAnimSegment63.children[18] = HAnimSite130;

let HAnimSite133 = browser.currentScene.createNode("HAnimSite");
HAnimSite133.name = "r_psis_pt";
HAnimSite133.DEF = "hanim_r_psis_pt";
HAnimSite133.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
let TouchSensor134 = browser.currentScene.createNode("TouchSensor");
TouchSensor134.description = "HAnimSite r_psis";
HAnimSite133.children = new MFNode();

HAnimSite133.children[0] = TouchSensor134;

let Shape135 = browser.currentScene.createNode("Shape");
Shape135.USE = "HAnimSiteShape";
HAnimSite133.children[1] = Shape135;

HAnimSegment63.children[19] = HAnimSite133;

let HAnimSite136 = browser.currentScene.createNode("HAnimSite");
HAnimSite136.name = "l_psis_pt";
HAnimSite136.DEF = "hanim_l_psis_pt";
HAnimSite136.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
let TouchSensor137 = browser.currentScene.createNode("TouchSensor");
TouchSensor137.description = "HAnimSite l_psis";
HAnimSite136.children = new MFNode();

HAnimSite136.children[0] = TouchSensor137;

let Shape138 = browser.currentScene.createNode("Shape");
Shape138.USE = "HAnimSiteShape";
HAnimSite136.children[1] = Shape138;

HAnimSegment63.children[20] = HAnimSite136;

let HAnimSite139 = browser.currentScene.createNode("HAnimSite");
HAnimSite139.name = "crotch_pt";
HAnimSite139.DEF = "hanim_crotch_pt";
HAnimSite139.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
let TouchSensor140 = browser.currentScene.createNode("TouchSensor");
TouchSensor140.description = "HAnimSite crotch";
HAnimSite139.children = new MFNode();

HAnimSite139.children[0] = TouchSensor140;

let Shape141 = browser.currentScene.createNode("Shape");
Shape141.USE = "HAnimSiteShape";
HAnimSite139.children[1] = Shape141;

HAnimSegment63.children[21] = HAnimSite139;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimSegment63;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.name = "l_hip";
HAnimJoint142.DEF = "hanim_l_hip";
HAnimJoint142.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint142.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.name = "l_thigh";
HAnimSegment143.DEF = "hanim_l_thigh";
//<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>
let TouchSensor144 = browser.currentScene.createNode("TouchSensor");
TouchSensor144.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment143.children = new MFNode();

HAnimSegment143.children[0] = TouchSensor144;

let Transform145 = browser.currentScene.createNode("Transform");
Transform145.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "HAnimJointShape";
Transform145.children = new MFNode();

Transform145.children[0] = Shape146;

HAnimSegment143.children[1] = Transform145;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
let Shape147 = browser.currentScene.createNode("Shape");
let LineSet148 = browser.currentScene.createNode("LineSet");
LineSet148.vertexCount = new MFInt32(new int[2]);
let Coordinate149 = browser.currentScene.createNode("Coordinate");
Coordinate149.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet148.coord = Coordinate149;

let ColorRGBA150 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA150.USE = "HAnimSegmentLineColorRGBA";
LineSet148.color = ColorRGBA150;

Shape147.geometry = LineSet148;

HAnimSegment143.children[2] = Shape147;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
let Shape151 = browser.currentScene.createNode("Shape");
let LineSet152 = browser.currentScene.createNode("LineSet");
LineSet152.vertexCount = new MFInt32(new int[2]);
let Coordinate153 = browser.currentScene.createNode("Coordinate");
Coordinate153.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet152.coord = Coordinate153;

let ColorRGBA154 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA154.USE = "HAnimSiteLineColorRGBA";
LineSet152.color = ColorRGBA154;

Shape151.geometry = LineSet152;

HAnimSegment143.children[3] = Shape151;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
let Shape155 = browser.currentScene.createNode("Shape");
let LineSet156 = browser.currentScene.createNode("LineSet");
LineSet156.vertexCount = new MFInt32(new int[2]);
let Coordinate157 = browser.currentScene.createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet156.coord = Coordinate157;

let ColorRGBA158 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA158.USE = "HAnimSiteLineColorRGBA";
LineSet156.color = ColorRGBA158;

Shape155.geometry = LineSet156;

HAnimSegment143.children[4] = Shape155;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
let Shape159 = browser.currentScene.createNode("Shape");
let LineSet160 = browser.currentScene.createNode("LineSet");
LineSet160.vertexCount = new MFInt32(new int[2]);
let Coordinate161 = browser.currentScene.createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet160.coord = Coordinate161;

let ColorRGBA162 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA162.USE = "HAnimSiteLineColorRGBA";
LineSet160.color = ColorRGBA162;

Shape159.geometry = LineSet160;

HAnimSegment143.children[5] = Shape159;

let HAnimSite163 = browser.currentScene.createNode("HAnimSite");
HAnimSite163.name = "l_knee_crease_pt";
HAnimSite163.DEF = "hanim_l_knee_crease_pt";
HAnimSite163.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
let TouchSensor164 = browser.currentScene.createNode("TouchSensor");
TouchSensor164.description = "HAnimSite l_knee_crease";
HAnimSite163.children = new MFNode();

HAnimSite163.children[0] = TouchSensor164;

let Shape165 = browser.currentScene.createNode("Shape");
Shape165.USE = "HAnimSiteShape";
HAnimSite163.children[1] = Shape165;

HAnimSegment143.children[6] = HAnimSite163;

let HAnimSite166 = browser.currentScene.createNode("HAnimSite");
HAnimSite166.name = "l_femoral_lateral_epicn_pt";
HAnimSite166.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite166.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
let TouchSensor167 = browser.currentScene.createNode("TouchSensor");
TouchSensor167.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite166.children = new MFNode();

HAnimSite166.children[0] = TouchSensor167;

let Shape168 = browser.currentScene.createNode("Shape");
Shape168.USE = "HAnimSiteShape";
HAnimSite166.children[1] = Shape168;

HAnimSegment143.children[7] = HAnimSite166;

let HAnimSite169 = browser.currentScene.createNode("HAnimSite");
HAnimSite169.name = "l_femoral_medial_epicn_pt";
HAnimSite169.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite169.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
let TouchSensor170 = browser.currentScene.createNode("TouchSensor");
TouchSensor170.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite169.children = new MFNode();

HAnimSite169.children[0] = TouchSensor170;

let Shape171 = browser.currentScene.createNode("Shape");
Shape171.USE = "HAnimSiteShape";
HAnimSite169.children[1] = Shape171;

HAnimSegment143.children[8] = HAnimSite169;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimSegment143;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "l_knee";
HAnimJoint172.DEF = "hanim_l_knee";
HAnimJoint172.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint172.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.name = "l_calf";
HAnimSegment173.DEF = "hanim_l_calf";
//<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>
let TouchSensor174 = browser.currentScene.createNode("TouchSensor");
TouchSensor174.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = TouchSensor174;

let Transform175 = browser.currentScene.createNode("Transform");
Transform175.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Shape176 = browser.currentScene.createNode("Shape");
Shape176.USE = "HAnimJointShape";
Transform175.children = new MFNode();

Transform175.children[0] = Shape176;

HAnimSegment173.children[1] = Transform175;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
let Shape177 = browser.currentScene.createNode("Shape");
let LineSet178 = browser.currentScene.createNode("LineSet");
LineSet178.vertexCount = new MFInt32(new int[2]);
let Coordinate179 = browser.currentScene.createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet178.coord = Coordinate179;

let ColorRGBA180 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA180.USE = "HAnimSegmentLineColorRGBA";
LineSet178.color = ColorRGBA180;

Shape177.geometry = LineSet178;

HAnimSegment173.children[2] = Shape177;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "l_ankle";
HAnimJoint181.DEF = "hanim_l_ankle";
HAnimJoint181.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint181.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "l_hindfoot";
HAnimSegment182.DEF = "hanim_l_hindfoot";
//<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>
let TouchSensor183 = browser.currentScene.createNode("TouchSensor");
TouchSensor183.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = TouchSensor183;

let Transform184 = browser.currentScene.createNode("Transform");
Transform184.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape185 = browser.currentScene.createNode("Shape");
Shape185.USE = "HAnimJointShape";
Transform184.children = new MFNode();

Transform184.children[0] = Shape185;

HAnimSegment182.children[1] = Transform184;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
let Shape186 = browser.currentScene.createNode("Shape");
let LineSet187 = browser.currentScene.createNode("LineSet");
LineSet187.vertexCount = new MFInt32(new int[2]);
let Coordinate188 = browser.currentScene.createNode("Coordinate");
Coordinate188.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet187.coord = Coordinate188;

let ColorRGBA189 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA189.USE = "HAnimSegmentLineColorRGBA";
LineSet187.color = ColorRGBA189;

Shape186.geometry = LineSet187;

HAnimSegment182.children[2] = Shape186;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
let Shape190 = browser.currentScene.createNode("Shape");
let LineSet191 = browser.currentScene.createNode("LineSet");
LineSet191.vertexCount = new MFInt32(new int[2]);
let Coordinate192 = browser.currentScene.createNode("Coordinate");
Coordinate192.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet191.coord = Coordinate192;

let ColorRGBA193 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA193.USE = "HAnimSiteLineColorRGBA";
LineSet191.color = ColorRGBA193;

Shape190.geometry = LineSet191;

HAnimSegment182.children[3] = Shape190;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
let Shape194 = browser.currentScene.createNode("Shape");
let LineSet195 = browser.currentScene.createNode("LineSet");
LineSet195.vertexCount = new MFInt32(new int[2]);
let Coordinate196 = browser.currentScene.createNode("Coordinate");
Coordinate196.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet195.coord = Coordinate196;

let ColorRGBA197 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA197.USE = "HAnimSiteLineColorRGBA";
LineSet195.color = ColorRGBA197;

Shape194.geometry = LineSet195;

HAnimSegment182.children[4] = Shape194;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
let Shape198 = browser.currentScene.createNode("Shape");
let LineSet199 = browser.currentScene.createNode("LineSet");
LineSet199.vertexCount = new MFInt32(new int[2]);
let Coordinate200 = browser.currentScene.createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet199.coord = Coordinate200;

let ColorRGBA201 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA201.USE = "HAnimSiteLineColorRGBA";
LineSet199.color = ColorRGBA201;

Shape198.geometry = LineSet199;

HAnimSegment182.children[5] = Shape198;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
let Shape202 = browser.currentScene.createNode("Shape");
let LineSet203 = browser.currentScene.createNode("LineSet");
LineSet203.vertexCount = new MFInt32(new int[2]);
let Coordinate204 = browser.currentScene.createNode("Coordinate");
Coordinate204.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet203.coord = Coordinate204;

let ColorRGBA205 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA205.USE = "HAnimSiteLineColorRGBA";
LineSet203.color = ColorRGBA205;

Shape202.geometry = LineSet203;

HAnimSegment182.children[6] = Shape202;

let HAnimSite206 = browser.currentScene.createNode("HAnimSite");
HAnimSite206.name = "l_lateral_malleolus_pt";
HAnimSite206.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite206.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
let TouchSensor207 = browser.currentScene.createNode("TouchSensor");
TouchSensor207.description = "HAnimSite l_lateral_malleolus";
HAnimSite206.children = new MFNode();

HAnimSite206.children[0] = TouchSensor207;

let Shape208 = browser.currentScene.createNode("Shape");
Shape208.USE = "HAnimSiteShape";
HAnimSite206.children[1] = Shape208;

HAnimSegment182.children[7] = HAnimSite206;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.name = "l_medial_malleolus_pt";
HAnimSite209.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite209.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
let TouchSensor210 = browser.currentScene.createNode("TouchSensor");
TouchSensor210.description = "HAnimSite l_medial_malleolus";
HAnimSite209.children = new MFNode();

HAnimSite209.children[0] = TouchSensor210;

let Shape211 = browser.currentScene.createNode("Shape");
Shape211.USE = "HAnimSiteShape";
HAnimSite209.children[1] = Shape211;

HAnimSegment182.children[8] = HAnimSite209;

let HAnimSite212 = browser.currentScene.createNode("HAnimSite");
HAnimSite212.name = "l_sphyrion_pt";
HAnimSite212.DEF = "hanim_l_sphyrion_pt";
HAnimSite212.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
let TouchSensor213 = browser.currentScene.createNode("TouchSensor");
TouchSensor213.description = "HAnimSite l_sphyrion";
HAnimSite212.children = new MFNode();

HAnimSite212.children[0] = TouchSensor213;

let Shape214 = browser.currentScene.createNode("Shape");
Shape214.USE = "HAnimSiteShape";
HAnimSite212.children[1] = Shape214;

HAnimSegment182.children[9] = HAnimSite212;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.name = "l_calcaneous_post_pt";
HAnimSite215.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite215.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
let TouchSensor216 = browser.currentScene.createNode("TouchSensor");
TouchSensor216.description = "HAnimSite l_calcaneous_post";
HAnimSite215.children = new MFNode();

HAnimSite215.children[0] = TouchSensor216;

let Shape217 = browser.currentScene.createNode("Shape");
Shape217.USE = "HAnimSiteShape";
HAnimSite215.children[1] = Shape217;

HAnimSegment182.children[10] = HAnimSite215;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.name = "l_subtalar";
HAnimJoint218.DEF = "hanim_l_subtalar";
HAnimJoint218.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint218.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.name = "l_midproximal";
HAnimSegment219.DEF = "hanim_l_midproximal";
//<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>
let TouchSensor220 = browser.currentScene.createNode("TouchSensor");
TouchSensor220.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = TouchSensor220;

let Transform221 = browser.currentScene.createNode("Transform");
Transform221.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let Shape222 = browser.currentScene.createNode("Shape");
Shape222.USE = "HAnimJointShape";
Transform221.children = new MFNode();

Transform221.children[0] = Shape222;

HAnimSegment219.children[1] = Transform221;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
let Shape223 = browser.currentScene.createNode("Shape");
let LineSet224 = browser.currentScene.createNode("LineSet");
LineSet224.vertexCount = new MFInt32(new int[2]);
let Coordinate225 = browser.currentScene.createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet224.coord = Coordinate225;

let ColorRGBA226 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA226.USE = "HAnimSegmentLineColorRGBA";
LineSet224.color = ColorRGBA226;

Shape223.geometry = LineSet224;

HAnimSegment219.children[2] = Shape223;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.name = "l_midtarsal";
HAnimJoint227.DEF = "hanim_l_midtarsal";
HAnimJoint227.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint227.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.name = "l_middistal";
HAnimSegment228.DEF = "hanim_l_middistal";
//<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>
let TouchSensor229 = browser.currentScene.createNode("TouchSensor");
TouchSensor229.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment228.children = new MFNode();

HAnimSegment228.children[0] = TouchSensor229;

let Transform230 = browser.currentScene.createNode("Transform");
Transform230.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let Shape231 = browser.currentScene.createNode("Shape");
Shape231.USE = "HAnimJointShape";
Transform230.children = new MFNode();

Transform230.children[0] = Shape231;

HAnimSegment228.children[1] = Transform230;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
let Shape232 = browser.currentScene.createNode("Shape");
let LineSet233 = browser.currentScene.createNode("LineSet");
LineSet233.vertexCount = new MFInt32(new int[2]);
let Coordinate234 = browser.currentScene.createNode("Coordinate");
Coordinate234.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet233.coord = Coordinate234;

let ColorRGBA235 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA235.USE = "HAnimSegmentLineColorRGBA";
LineSet233.color = ColorRGBA235;

Shape232.geometry = LineSet233;

HAnimSegment228.children[2] = Shape232;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
let Shape236 = browser.currentScene.createNode("Shape");
let LineSet237 = browser.currentScene.createNode("LineSet");
LineSet237.vertexCount = new MFInt32(new int[2]);
let Coordinate238 = browser.currentScene.createNode("Coordinate");
Coordinate238.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet237.coord = Coordinate238;

let ColorRGBA239 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA239.USE = "HAnimSiteLineColorRGBA";
LineSet237.color = ColorRGBA239;

Shape236.geometry = LineSet237;

HAnimSegment228.children[3] = Shape236;

let HAnimSite240 = browser.currentScene.createNode("HAnimSite");
HAnimSite240.name = "l_metatarsal_pha1_pt";
HAnimSite240.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite240.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
let TouchSensor241 = browser.currentScene.createNode("TouchSensor");
TouchSensor241.description = "HAnimSite l_metatarsal_pha1";
HAnimSite240.children = new MFNode();

HAnimSite240.children[0] = TouchSensor241;

let Shape242 = browser.currentScene.createNode("Shape");
Shape242.USE = "HAnimSiteShape";
HAnimSite240.children[1] = Shape242;

HAnimSegment228.children[4] = HAnimSite240;

HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.name = "l_metatarsal";
HAnimJoint243.DEF = "hanim_l_metatarsal";
HAnimJoint243.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint243.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment244 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment244.name = "l_forefoot";
HAnimSegment244.DEF = "hanim_l_forefoot";
//<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>
let TouchSensor245 = browser.currentScene.createNode("TouchSensor");
TouchSensor245.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment244.children = new MFNode();

HAnimSegment244.children[0] = TouchSensor245;

let Transform246 = browser.currentScene.createNode("Transform");
Transform246.translation = new SFVec3f(new float[0.1086,0,0.0762]);
let Shape247 = browser.currentScene.createNode("Shape");
Shape247.USE = "HAnimJointShape";
Transform246.children = new MFNode();

Transform246.children[0] = Shape247;

HAnimSegment244.children[1] = Transform246;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
let Shape248 = browser.currentScene.createNode("Shape");
let LineSet249 = browser.currentScene.createNode("LineSet");
LineSet249.vertexCount = new MFInt32(new int[2]);
let Coordinate250 = browser.currentScene.createNode("Coordinate");
Coordinate250.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet249.coord = Coordinate250;

let ColorRGBA251 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA251.USE = "HAnimSiteLineColorRGBA";
LineSet249.color = ColorRGBA251;

Shape248.geometry = LineSet249;

HAnimSegment244.children[2] = Shape248;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
let Shape252 = browser.currentScene.createNode("Shape");
let LineSet253 = browser.currentScene.createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
let Coordinate254 = browser.currentScene.createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet253.coord = Coordinate254;

let ColorRGBA255 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSiteLineColorRGBA";
LineSet253.color = ColorRGBA255;

Shape252.geometry = LineSet253;

HAnimSegment244.children[3] = Shape252;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
let Shape256 = browser.currentScene.createNode("Shape");
let LineSet257 = browser.currentScene.createNode("LineSet");
LineSet257.vertexCount = new MFInt32(new int[2]);
let Coordinate258 = browser.currentScene.createNode("Coordinate");
Coordinate258.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet257.coord = Coordinate258;

let ColorRGBA259 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA259.USE = "HAnimSiteLineColorRGBA";
LineSet257.color = ColorRGBA259;

Shape256.geometry = LineSet257;

HAnimSegment244.children[4] = Shape256;

let HAnimSite260 = browser.currentScene.createNode("HAnimSite");
HAnimSite260.name = "l_forefoot_tip";
HAnimSite260.DEF = "hanim_l_forefoot_tip";
HAnimSite260.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
let TouchSensor261 = browser.currentScene.createNode("TouchSensor");
TouchSensor261.description = "HAnimSite l_forefoot_tip";
HAnimSite260.children = new MFNode();

HAnimSite260.children[0] = TouchSensor261;

let Shape262 = browser.currentScene.createNode("Shape");
Shape262.USE = "HAnimSiteShape";
HAnimSite260.children[1] = Shape262;

HAnimSegment244.children[5] = HAnimSite260;

let HAnimSite263 = browser.currentScene.createNode("HAnimSite");
HAnimSite263.name = "l_metatarsal_pha5_pt";
HAnimSite263.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite263.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
let TouchSensor264 = browser.currentScene.createNode("TouchSensor");
TouchSensor264.description = "HAnimSite l_metatarsal_pha5";
HAnimSite263.children = new MFNode();

HAnimSite263.children[0] = TouchSensor264;

let Shape265 = browser.currentScene.createNode("Shape");
Shape265.USE = "HAnimSiteShape";
HAnimSite263.children[1] = Shape265;

HAnimSegment244.children[6] = HAnimSite263;

let HAnimSite266 = browser.currentScene.createNode("HAnimSite");
HAnimSite266.name = "l_digit2_pt";
HAnimSite266.DEF = "hanim_l_digit2_pt";
HAnimSite266.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
let TouchSensor267 = browser.currentScene.createNode("TouchSensor");
TouchSensor267.description = "HAnimSite l_digit2";
HAnimSite266.children = new MFNode();

HAnimSite266.children[0] = TouchSensor267;

let Shape268 = browser.currentScene.createNode("Shape");
Shape268.USE = "HAnimSiteShape";
HAnimSite266.children[1] = Shape268;

HAnimSegment244.children[7] = HAnimSite266;

HAnimJoint243.children = new MFNode();

HAnimJoint243.children[0] = HAnimSegment244;

HAnimJoint227.children[1] = HAnimJoint243;

HAnimJoint218.children[1] = HAnimJoint227;

HAnimJoint181.children[1] = HAnimJoint218;

HAnimJoint172.children[1] = HAnimJoint181;

HAnimJoint142.children[1] = HAnimJoint172;

HAnimJoint62.children[1] = HAnimJoint142;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.name = "r_hip";
HAnimJoint269.DEF = "hanim_r_hip";
HAnimJoint269.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint269.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.name = "r_thigh";
HAnimSegment270.DEF = "hanim_r_thigh";
//<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>
let TouchSensor271 = browser.currentScene.createNode("TouchSensor");
TouchSensor271.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = TouchSensor271;

let Transform272 = browser.currentScene.createNode("Transform");
Transform272.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272.children = new MFNode();

Transform272.children[0] = Shape273;

HAnimSegment270.children[1] = Transform272;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
let Shape274 = browser.currentScene.createNode("Shape");
let LineSet275 = browser.currentScene.createNode("LineSet");
LineSet275.vertexCount = new MFInt32(new int[2]);
let Coordinate276 = browser.currentScene.createNode("Coordinate");
Coordinate276.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet275.coord = Coordinate276;

let ColorRGBA277 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA277.USE = "HAnimSegmentLineColorRGBA";
LineSet275.color = ColorRGBA277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[2] = Shape274;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
let Shape278 = browser.currentScene.createNode("Shape");
let LineSet279 = browser.currentScene.createNode("LineSet");
LineSet279.vertexCount = new MFInt32(new int[2]);
let Coordinate280 = browser.currentScene.createNode("Coordinate");
Coordinate280.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet279.coord = Coordinate280;

let ColorRGBA281 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA281.USE = "HAnimSiteLineColorRGBA";
LineSet279.color = ColorRGBA281;

Shape278.geometry = LineSet279;

HAnimSegment270.children[3] = Shape278;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
let Shape282 = browser.currentScene.createNode("Shape");
let LineSet283 = browser.currentScene.createNode("LineSet");
LineSet283.vertexCount = new MFInt32(new int[2]);
let Coordinate284 = browser.currentScene.createNode("Coordinate");
Coordinate284.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet283.coord = Coordinate284;

let ColorRGBA285 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA285.USE = "HAnimSiteLineColorRGBA";
LineSet283.color = ColorRGBA285;

Shape282.geometry = LineSet283;

HAnimSegment270.children[4] = Shape282;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
let Shape286 = browser.currentScene.createNode("Shape");
let LineSet287 = browser.currentScene.createNode("LineSet");
LineSet287.vertexCount = new MFInt32(new int[2]);
let Coordinate288 = browser.currentScene.createNode("Coordinate");
Coordinate288.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet287.coord = Coordinate288;

let ColorRGBA289 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA289.USE = "HAnimSiteLineColorRGBA";
LineSet287.color = ColorRGBA289;

Shape286.geometry = LineSet287;

HAnimSegment270.children[5] = Shape286;

let HAnimSite290 = browser.currentScene.createNode("HAnimSite");
HAnimSite290.name = "r_knee_crease_pt";
HAnimSite290.DEF = "hanim_r_knee_crease_pt";
HAnimSite290.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
let TouchSensor291 = browser.currentScene.createNode("TouchSensor");
TouchSensor291.description = "HAnimSite r_knee_crease";
HAnimSite290.children = new MFNode();

HAnimSite290.children[0] = TouchSensor291;

let Shape292 = browser.currentScene.createNode("Shape");
Shape292.USE = "HAnimSiteShape";
HAnimSite290.children[1] = Shape292;

HAnimSegment270.children[6] = HAnimSite290;

let HAnimSite293 = browser.currentScene.createNode("HAnimSite");
HAnimSite293.name = "r_femoral_lateral_epicn_pt";
HAnimSite293.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite293.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
let TouchSensor294 = browser.currentScene.createNode("TouchSensor");
TouchSensor294.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = TouchSensor294;

let Shape295 = browser.currentScene.createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293.children[1] = Shape295;

HAnimSegment270.children[7] = HAnimSite293;

let HAnimSite296 = browser.currentScene.createNode("HAnimSite");
HAnimSite296.name = "r_femoral_medial_epicn_pt";
HAnimSite296.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite296.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
let TouchSensor297 = browser.currentScene.createNode("TouchSensor");
TouchSensor297.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite296.children = new MFNode();

HAnimSite296.children[0] = TouchSensor297;

let Shape298 = browser.currentScene.createNode("Shape");
Shape298.USE = "HAnimSiteShape";
HAnimSite296.children[1] = Shape298;

HAnimSegment270.children[8] = HAnimSite296;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.name = "r_knee";
HAnimJoint299.DEF = "hanim_r_knee";
HAnimJoint299.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint299.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.name = "r_calf";
HAnimSegment300.DEF = "hanim_r_calf";
//<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>
let TouchSensor301 = browser.currentScene.createNode("TouchSensor");
TouchSensor301.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment300.children = new MFNode();

HAnimSegment300.children[0] = TouchSensor301;

let Transform302 = browser.currentScene.createNode("Transform");
Transform302.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
let Shape303 = browser.currentScene.createNode("Shape");
Shape303.USE = "HAnimJointShape";
Transform302.children = new MFNode();

Transform302.children[0] = Shape303;

HAnimSegment300.children[1] = Transform302;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
let Shape304 = browser.currentScene.createNode("Shape");
let LineSet305 = browser.currentScene.createNode("LineSet");
LineSet305.vertexCount = new MFInt32(new int[2]);
let Coordinate306 = browser.currentScene.createNode("Coordinate");
Coordinate306.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet305.coord = Coordinate306;

let ColorRGBA307 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA307.USE = "HAnimSegmentLineColorRGBA";
LineSet305.color = ColorRGBA307;

Shape304.geometry = LineSet305;

HAnimSegment300.children[2] = Shape304;

HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.name = "r_ankle";
HAnimJoint308.DEF = "hanim_r_ankle";
HAnimJoint308.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint308.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.name = "r_hindfoot";
HAnimSegment309.DEF = "hanim_r_hindfoot";
//<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>
let TouchSensor310 = browser.currentScene.createNode("TouchSensor");
TouchSensor310.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment309.children = new MFNode();

HAnimSegment309.children[0] = TouchSensor310;

let Transform311 = browser.currentScene.createNode("Transform");
Transform311.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
let Shape312 = browser.currentScene.createNode("Shape");
Shape312.USE = "HAnimJointShape";
Transform311.children = new MFNode();

Transform311.children[0] = Shape312;

HAnimSegment309.children[1] = Transform311;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
let Shape313 = browser.currentScene.createNode("Shape");
let LineSet314 = browser.currentScene.createNode("LineSet");
LineSet314.vertexCount = new MFInt32(new int[2]);
let Coordinate315 = browser.currentScene.createNode("Coordinate");
Coordinate315.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet314.coord = Coordinate315;

let ColorRGBA316 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA316.USE = "HAnimSegmentLineColorRGBA";
LineSet314.color = ColorRGBA316;

Shape313.geometry = LineSet314;

HAnimSegment309.children[2] = Shape313;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
let Shape317 = browser.currentScene.createNode("Shape");
let LineSet318 = browser.currentScene.createNode("LineSet");
LineSet318.vertexCount = new MFInt32(new int[2]);
let Coordinate319 = browser.currentScene.createNode("Coordinate");
Coordinate319.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet318.coord = Coordinate319;

let ColorRGBA320 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA320.USE = "HAnimSiteLineColorRGBA";
LineSet318.color = ColorRGBA320;

Shape317.geometry = LineSet318;

HAnimSegment309.children[3] = Shape317;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
let Shape321 = browser.currentScene.createNode("Shape");
let LineSet322 = browser.currentScene.createNode("LineSet");
LineSet322.vertexCount = new MFInt32(new int[2]);
let Coordinate323 = browser.currentScene.createNode("Coordinate");
Coordinate323.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet322.coord = Coordinate323;

let ColorRGBA324 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA324.USE = "HAnimSiteLineColorRGBA";
LineSet322.color = ColorRGBA324;

Shape321.geometry = LineSet322;

HAnimSegment309.children[4] = Shape321;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
let Shape325 = browser.currentScene.createNode("Shape");
let LineSet326 = browser.currentScene.createNode("LineSet");
LineSet326.vertexCount = new MFInt32(new int[2]);
let Coordinate327 = browser.currentScene.createNode("Coordinate");
Coordinate327.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet326.coord = Coordinate327;

let ColorRGBA328 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA328.USE = "HAnimSiteLineColorRGBA";
LineSet326.color = ColorRGBA328;

Shape325.geometry = LineSet326;

HAnimSegment309.children[5] = Shape325;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
let Shape329 = browser.currentScene.createNode("Shape");
let LineSet330 = browser.currentScene.createNode("LineSet");
LineSet330.vertexCount = new MFInt32(new int[2]);
let Coordinate331 = browser.currentScene.createNode("Coordinate");
Coordinate331.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet330.coord = Coordinate331;

let ColorRGBA332 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA332.USE = "HAnimSiteLineColorRGBA";
LineSet330.color = ColorRGBA332;

Shape329.geometry = LineSet330;

HAnimSegment309.children[6] = Shape329;

let HAnimSite333 = browser.currentScene.createNode("HAnimSite");
HAnimSite333.name = "r_lateral_malleolus_pt";
HAnimSite333.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite333.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
let TouchSensor334 = browser.currentScene.createNode("TouchSensor");
TouchSensor334.description = "HAnimSite r_lateral_malleolus";
HAnimSite333.children = new MFNode();

HAnimSite333.children[0] = TouchSensor334;

let Shape335 = browser.currentScene.createNode("Shape");
Shape335.USE = "HAnimSiteShape";
HAnimSite333.children[1] = Shape335;

HAnimSegment309.children[7] = HAnimSite333;

let HAnimSite336 = browser.currentScene.createNode("HAnimSite");
HAnimSite336.name = "r_medial_malleolus_pt";
HAnimSite336.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite336.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
let TouchSensor337 = browser.currentScene.createNode("TouchSensor");
TouchSensor337.description = "HAnimSite r_medial_malleolus";
HAnimSite336.children = new MFNode();

HAnimSite336.children[0] = TouchSensor337;

let Shape338 = browser.currentScene.createNode("Shape");
Shape338.USE = "HAnimSiteShape";
HAnimSite336.children[1] = Shape338;

HAnimSegment309.children[8] = HAnimSite336;

let HAnimSite339 = browser.currentScene.createNode("HAnimSite");
HAnimSite339.name = "r_sphyrion_pt";
HAnimSite339.DEF = "hanim_r_sphyrion_pt";
HAnimSite339.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
let TouchSensor340 = browser.currentScene.createNode("TouchSensor");
TouchSensor340.description = "HAnimSite r_sphyrion";
HAnimSite339.children = new MFNode();

HAnimSite339.children[0] = TouchSensor340;

let Shape341 = browser.currentScene.createNode("Shape");
Shape341.USE = "HAnimSiteShape";
HAnimSite339.children[1] = Shape341;

HAnimSegment309.children[9] = HAnimSite339;

let HAnimSite342 = browser.currentScene.createNode("HAnimSite");
HAnimSite342.name = "r_calcaneous_post_pt";
HAnimSite342.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite342.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
let TouchSensor343 = browser.currentScene.createNode("TouchSensor");
TouchSensor343.description = "HAnimSite r_calcaneous_post";
HAnimSite342.children = new MFNode();

HAnimSite342.children[0] = TouchSensor343;

let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "HAnimSiteShape";
HAnimSite342.children[1] = Shape344;

HAnimSegment309.children[10] = HAnimSite342;

HAnimJoint308.children = new MFNode();

HAnimJoint308.children[0] = HAnimSegment309;

let HAnimJoint345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint345.name = "r_subtalar";
HAnimJoint345.DEF = "hanim_r_subtalar";
HAnimJoint345.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint345.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment346 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment346.name = "r_midproximal";
HAnimSegment346.DEF = "hanim_r_midproximal";
//<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>
let TouchSensor347 = browser.currentScene.createNode("TouchSensor");
TouchSensor347.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment346.children = new MFNode();

HAnimSegment346.children[0] = TouchSensor347;

let Transform348 = browser.currentScene.createNode("Transform");
Transform348.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
let Shape349 = browser.currentScene.createNode("Shape");
Shape349.USE = "HAnimJointShape";
Transform348.children = new MFNode();

Transform348.children[0] = Shape349;

HAnimSegment346.children[1] = Transform348;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
let Shape350 = browser.currentScene.createNode("Shape");
let LineSet351 = browser.currentScene.createNode("LineSet");
LineSet351.vertexCount = new MFInt32(new int[2]);
let Coordinate352 = browser.currentScene.createNode("Coordinate");
Coordinate352.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet351.coord = Coordinate352;

let ColorRGBA353 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA353.USE = "HAnimSegmentLineColorRGBA";
LineSet351.color = ColorRGBA353;

Shape350.geometry = LineSet351;

HAnimSegment346.children[2] = Shape350;

HAnimJoint345.children = new MFNode();

HAnimJoint345.children[0] = HAnimSegment346;

let HAnimJoint354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint354.name = "r_midtarsal";
HAnimJoint354.DEF = "hanim_r_midtarsal";
HAnimJoint354.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint354.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment355 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment355.name = "r_middistal";
HAnimSegment355.DEF = "hanim_r_middistal";
//<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>
let TouchSensor356 = browser.currentScene.createNode("TouchSensor");
TouchSensor356.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment355.children = new MFNode();

HAnimSegment355.children[0] = TouchSensor356;

let Transform357 = browser.currentScene.createNode("Transform");
Transform357.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
let Shape358 = browser.currentScene.createNode("Shape");
Shape358.USE = "HAnimJointShape";
Transform357.children = new MFNode();

Transform357.children[0] = Shape358;

HAnimSegment355.children[1] = Transform357;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
let Shape359 = browser.currentScene.createNode("Shape");
let LineSet360 = browser.currentScene.createNode("LineSet");
LineSet360.vertexCount = new MFInt32(new int[2]);
let Coordinate361 = browser.currentScene.createNode("Coordinate");
Coordinate361.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet360.coord = Coordinate361;

let ColorRGBA362 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA362.USE = "HAnimSegmentLineColorRGBA";
LineSet360.color = ColorRGBA362;

Shape359.geometry = LineSet360;

HAnimSegment355.children[2] = Shape359;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
let Shape363 = browser.currentScene.createNode("Shape");
let LineSet364 = browser.currentScene.createNode("LineSet");
LineSet364.vertexCount = new MFInt32(new int[2]);
let Coordinate365 = browser.currentScene.createNode("Coordinate");
Coordinate365.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet364.coord = Coordinate365;

let ColorRGBA366 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA366.USE = "HAnimSiteLineColorRGBA";
LineSet364.color = ColorRGBA366;

Shape363.geometry = LineSet364;

HAnimSegment355.children[3] = Shape363;

let HAnimSite367 = browser.currentScene.createNode("HAnimSite");
HAnimSite367.name = "r_metatarsal_pha1_pt";
HAnimSite367.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite367.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
let TouchSensor368 = browser.currentScene.createNode("TouchSensor");
TouchSensor368.description = "HAnimSite r_metatarsal_pha1";
HAnimSite367.children = new MFNode();

HAnimSite367.children[0] = TouchSensor368;

let Shape369 = browser.currentScene.createNode("Shape");
Shape369.USE = "HAnimSiteShape";
HAnimSite367.children[1] = Shape369;

HAnimSegment355.children[4] = HAnimSite367;

HAnimJoint354.children = new MFNode();

HAnimJoint354.children[0] = HAnimSegment355;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.name = "r_metatarsal";
HAnimJoint370.DEF = "hanim_r_metatarsal";
HAnimJoint370.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint370.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment371 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment371.name = "r_forefoot";
HAnimSegment371.DEF = "hanim_r_forefoot";
//<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>
let TouchSensor372 = browser.currentScene.createNode("TouchSensor");
TouchSensor372.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment371.children = new MFNode();

HAnimSegment371.children[0] = TouchSensor372;

let Transform373 = browser.currentScene.createNode("Transform");
Transform373.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
let Shape374 = browser.currentScene.createNode("Shape");
Shape374.USE = "HAnimJointShape";
Transform373.children = new MFNode();

Transform373.children[0] = Shape374;

HAnimSegment371.children[1] = Transform373;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
let Shape375 = browser.currentScene.createNode("Shape");
let LineSet376 = browser.currentScene.createNode("LineSet");
LineSet376.vertexCount = new MFInt32(new int[2]);
let Coordinate377 = browser.currentScene.createNode("Coordinate");
Coordinate377.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet376.coord = Coordinate377;

let ColorRGBA378 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA378.USE = "HAnimSiteLineColorRGBA";
LineSet376.color = ColorRGBA378;

Shape375.geometry = LineSet376;

HAnimSegment371.children[2] = Shape375;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
let Shape379 = browser.currentScene.createNode("Shape");
let LineSet380 = browser.currentScene.createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[2]);
let Coordinate381 = browser.currentScene.createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet380.coord = Coordinate381;

let ColorRGBA382 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA382.USE = "HAnimSiteLineColorRGBA";
LineSet380.color = ColorRGBA382;

Shape379.geometry = LineSet380;

HAnimSegment371.children[3] = Shape379;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
let Shape383 = browser.currentScene.createNode("Shape");
let LineSet384 = browser.currentScene.createNode("LineSet");
LineSet384.vertexCount = new MFInt32(new int[2]);
let Coordinate385 = browser.currentScene.createNode("Coordinate");
Coordinate385.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet384.coord = Coordinate385;

let ColorRGBA386 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA386.USE = "HAnimSiteLineColorRGBA";
LineSet384.color = ColorRGBA386;

Shape383.geometry = LineSet384;

HAnimSegment371.children[4] = Shape383;

let HAnimSite387 = browser.currentScene.createNode("HAnimSite");
HAnimSite387.name = "r_forefoot_tip";
HAnimSite387.DEF = "hanim_r_forefoot_tip";
HAnimSite387.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
let TouchSensor388 = browser.currentScene.createNode("TouchSensor");
TouchSensor388.description = "HAnimSite r_forefoot_tip";
HAnimSite387.children = new MFNode();

HAnimSite387.children[0] = TouchSensor388;

let Shape389 = browser.currentScene.createNode("Shape");
Shape389.USE = "HAnimSiteShape";
HAnimSite387.children[1] = Shape389;

HAnimSegment371.children[5] = HAnimSite387;

let HAnimSite390 = browser.currentScene.createNode("HAnimSite");
HAnimSite390.name = "r_metatarsal_pha5_pt";
HAnimSite390.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite390.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
let TouchSensor391 = browser.currentScene.createNode("TouchSensor");
TouchSensor391.description = "HAnimSite r_metatarsal_pha5";
HAnimSite390.children = new MFNode();

HAnimSite390.children[0] = TouchSensor391;

let Shape392 = browser.currentScene.createNode("Shape");
Shape392.USE = "HAnimSiteShape";
HAnimSite390.children[1] = Shape392;

HAnimSegment371.children[6] = HAnimSite390;

let HAnimSite393 = browser.currentScene.createNode("HAnimSite");
HAnimSite393.name = "r_digit2_pt";
HAnimSite393.DEF = "hanim_r_digit2_pt";
HAnimSite393.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
let TouchSensor394 = browser.currentScene.createNode("TouchSensor");
TouchSensor394.description = "HAnimSite r_digit2";
HAnimSite393.children = new MFNode();

HAnimSite393.children[0] = TouchSensor394;

let Shape395 = browser.currentScene.createNode("Shape");
Shape395.USE = "HAnimSiteShape";
HAnimSite393.children[1] = Shape395;

HAnimSegment371.children[7] = HAnimSite393;

HAnimJoint370.children = new MFNode();

HAnimJoint370.children[0] = HAnimSegment371;

HAnimJoint354.children[1] = HAnimJoint370;

HAnimJoint345.children[1] = HAnimJoint354;

HAnimJoint308.children[1] = HAnimJoint345;

HAnimJoint299.children[1] = HAnimJoint308;

HAnimJoint269.children[1] = HAnimJoint299;

HAnimJoint62.children[2] = HAnimJoint269;

HAnimJoint46.children[1] = HAnimJoint62;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint396.name = "vl5";
HAnimJoint396.DEF = "hanim_vl5";
HAnimJoint396.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint396.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment397 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment397.name = "l5";
HAnimSegment397.DEF = "hanim_l5";
//<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>
let TouchSensor398 = browser.currentScene.createNode("TouchSensor");
TouchSensor398.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment397.children = new MFNode();

HAnimSegment397.children[0] = TouchSensor398;

let Transform399 = browser.currentScene.createNode("Transform");
Transform399.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Shape400 = browser.currentScene.createNode("Shape");
Shape400.USE = "HAnimJointShape";
Transform399.children = new MFNode();

Transform399.children[0] = Shape400;

HAnimSegment397.children[1] = Transform399;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
let Shape401 = browser.currentScene.createNode("Shape");
let LineSet402 = browser.currentScene.createNode("LineSet");
LineSet402.vertexCount = new MFInt32(new int[2]);
let Coordinate403 = browser.currentScene.createNode("Coordinate");
Coordinate403.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet402.coord = Coordinate403;

let ColorRGBA404 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA404.USE = "HAnimSegmentLineColorRGBA";
LineSet402.color = ColorRGBA404;

Shape401.geometry = LineSet402;

HAnimSegment397.children[2] = Shape401;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
let Shape405 = browser.currentScene.createNode("Shape");
let LineSet406 = browser.currentScene.createNode("LineSet");
LineSet406.vertexCount = new MFInt32(new int[2]);
let Coordinate407 = browser.currentScene.createNode("Coordinate");
Coordinate407.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet406.coord = Coordinate407;

let ColorRGBA408 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA408.USE = "HAnimSiteLineColorRGBA";
LineSet406.color = ColorRGBA408;

Shape405.geometry = LineSet406;

HAnimSegment397.children[3] = Shape405;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
let Shape409 = browser.currentScene.createNode("Shape");
let LineSet410 = browser.currentScene.createNode("LineSet");
LineSet410.vertexCount = new MFInt32(new int[2]);
let Coordinate411 = browser.currentScene.createNode("Coordinate");
Coordinate411.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet410.coord = Coordinate411;

let ColorRGBA412 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA412.USE = "HAnimSiteLineColorRGBA";
LineSet410.color = ColorRGBA412;

Shape409.geometry = LineSet410;

HAnimSegment397.children[4] = Shape409;

let HAnimSite413 = browser.currentScene.createNode("HAnimSite");
HAnimSite413.name = "waist_preferred_post_pt";
HAnimSite413.DEF = "hanim_waist_preferred_post_pt";
HAnimSite413.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
let TouchSensor414 = browser.currentScene.createNode("TouchSensor");
TouchSensor414.description = "HAnimSite waist_preferred_post";
HAnimSite413.children = new MFNode();

HAnimSite413.children[0] = TouchSensor414;

let Shape415 = browser.currentScene.createNode("Shape");
Shape415.USE = "HAnimSiteShape";
HAnimSite413.children[1] = Shape415;

HAnimSegment397.children[5] = HAnimSite413;

let HAnimSite416 = browser.currentScene.createNode("HAnimSite");
HAnimSite416.name = "navel_pt";
HAnimSite416.DEF = "hanim_navel_pt";
HAnimSite416.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
let TouchSensor417 = browser.currentScene.createNode("TouchSensor");
TouchSensor417.description = "HAnimSite navel";
HAnimSite416.children = new MFNode();

HAnimSite416.children[0] = TouchSensor417;

let Shape418 = browser.currentScene.createNode("Shape");
Shape418.USE = "HAnimSiteShape";
HAnimSite416.children[1] = Shape418;

HAnimSegment397.children[6] = HAnimSite416;

HAnimJoint396.children = new MFNode();

HAnimJoint396.children[0] = HAnimSegment397;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.name = "vl4";
HAnimJoint419.DEF = "hanim_vl4";
HAnimJoint419.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint419.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment420 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment420.name = "l4";
HAnimSegment420.DEF = "hanim_l4";
//<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>
let TouchSensor421 = browser.currentScene.createNode("TouchSensor");
TouchSensor421.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment420.children = new MFNode();

HAnimSegment420.children[0] = TouchSensor421;

let Transform422 = browser.currentScene.createNode("Transform");
Transform422.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Shape423 = browser.currentScene.createNode("Shape");
Shape423.USE = "HAnimJointShape";
Transform422.children = new MFNode();

Transform422.children[0] = Shape423;

HAnimSegment420.children[1] = Transform422;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
let Shape424 = browser.currentScene.createNode("Shape");
let LineSet425 = browser.currentScene.createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[2]);
let Coordinate426 = browser.currentScene.createNode("Coordinate");
Coordinate426.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet425.coord = Coordinate426;

let ColorRGBA427 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA427.USE = "HAnimSegmentLineColorRGBA";
LineSet425.color = ColorRGBA427;

Shape424.geometry = LineSet425;

HAnimSegment420.children[2] = Shape424;

HAnimJoint419.children = new MFNode();

HAnimJoint419.children[0] = HAnimSegment420;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.name = "vl3";
HAnimJoint428.DEF = "hanim_vl3";
HAnimJoint428.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint428.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment429.name = "l3";
HAnimSegment429.DEF = "hanim_l3";
//<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>
let TouchSensor430 = browser.currentScene.createNode("TouchSensor");
TouchSensor430.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment429.children = new MFNode();

HAnimSegment429.children[0] = TouchSensor430;

let Transform431 = browser.currentScene.createNode("Transform");
Transform431.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "HAnimJointShape";
Transform431.children = new MFNode();

Transform431.children[0] = Shape432;

HAnimSegment429.children[1] = Transform431;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
let Shape433 = browser.currentScene.createNode("Shape");
let LineSet434 = browser.currentScene.createNode("LineSet");
LineSet434.vertexCount = new MFInt32(new int[2]);
let Coordinate435 = browser.currentScene.createNode("Coordinate");
Coordinate435.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet434.coord = Coordinate435;

let ColorRGBA436 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA436.USE = "HAnimSegmentLineColorRGBA";
LineSet434.color = ColorRGBA436;

Shape433.geometry = LineSet434;

HAnimSegment429.children[2] = Shape433;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

let HAnimJoint437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint437.name = "vl2";
HAnimJoint437.DEF = "hanim_vl2";
HAnimJoint437.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint437.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.name = "l2";
HAnimSegment438.DEF = "hanim_l2";
//<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>
let TouchSensor439 = browser.currentScene.createNode("TouchSensor");
TouchSensor439.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = TouchSensor439;

let Transform440 = browser.currentScene.createNode("Transform");
Transform440.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440.children = new MFNode();

Transform440.children[0] = Shape441;

HAnimSegment438.children[1] = Transform440;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
let Shape442 = browser.currentScene.createNode("Shape");
let LineSet443 = browser.currentScene.createNode("LineSet");
LineSet443.vertexCount = new MFInt32(new int[2]);
let Coordinate444 = browser.currentScene.createNode("Coordinate");
Coordinate444.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet443.coord = Coordinate444;

let ColorRGBA445 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA445.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[2] = Shape442;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
let Shape446 = browser.currentScene.createNode("Shape");
let LineSet447 = browser.currentScene.createNode("LineSet");
LineSet447.vertexCount = new MFInt32(new int[2]);
let Coordinate448 = browser.currentScene.createNode("Coordinate");
Coordinate448.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet447.coord = Coordinate448;

let ColorRGBA449 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA449.USE = "HAnimSiteLineColorRGBA";
LineSet447.color = ColorRGBA449;

Shape446.geometry = LineSet447;

HAnimSegment438.children[3] = Shape446;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
let Shape450 = browser.currentScene.createNode("Shape");
let LineSet451 = browser.currentScene.createNode("LineSet");
LineSet451.vertexCount = new MFInt32(new int[2]);
let Coordinate452 = browser.currentScene.createNode("Coordinate");
Coordinate452.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet451.coord = Coordinate452;

let ColorRGBA453 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA453.USE = "HAnimSiteLineColorRGBA";
LineSet451.color = ColorRGBA453;

Shape450.geometry = LineSet451;

HAnimSegment438.children[4] = Shape450;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
let Shape454 = browser.currentScene.createNode("Shape");
let LineSet455 = browser.currentScene.createNode("LineSet");
LineSet455.vertexCount = new MFInt32(new int[2]);
let Coordinate456 = browser.currentScene.createNode("Coordinate");
Coordinate456.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet455.coord = Coordinate456;

let ColorRGBA457 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA457.USE = "HAnimSiteLineColorRGBA";
LineSet455.color = ColorRGBA457;

Shape454.geometry = LineSet455;

HAnimSegment438.children[5] = Shape454;

let HAnimSite458 = browser.currentScene.createNode("HAnimSite");
HAnimSite458.name = "r_rib10_pt";
HAnimSite458.DEF = "hanim_r_rib10_pt";
HAnimSite458.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
let TouchSensor459 = browser.currentScene.createNode("TouchSensor");
TouchSensor459.description = "HAnimSite r_rib10";
HAnimSite458.children = new MFNode();

HAnimSite458.children[0] = TouchSensor459;

let Shape460 = browser.currentScene.createNode("Shape");
Shape460.USE = "HAnimSiteShape";
HAnimSite458.children[1] = Shape460;

HAnimSegment438.children[6] = HAnimSite458;

let HAnimSite461 = browser.currentScene.createNode("HAnimSite");
HAnimSite461.name = "l_rib10_pt";
HAnimSite461.DEF = "hanim_l_rib10_pt";
HAnimSite461.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
let TouchSensor462 = browser.currentScene.createNode("TouchSensor");
TouchSensor462.description = "HAnimSite l_rib10";
HAnimSite461.children = new MFNode();

HAnimSite461.children[0] = TouchSensor462;

let Shape463 = browser.currentScene.createNode("Shape");
Shape463.USE = "HAnimSiteShape";
HAnimSite461.children[1] = Shape463;

HAnimSegment438.children[7] = HAnimSite461;

let HAnimSite464 = browser.currentScene.createNode("HAnimSite");
HAnimSite464.name = "rib10_midspine_pt";
HAnimSite464.DEF = "hanim_rib10_midspine_pt";
HAnimSite464.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
let TouchSensor465 = browser.currentScene.createNode("TouchSensor");
TouchSensor465.description = "HAnimSite rib10_midspine";
HAnimSite464.children = new MFNode();

HAnimSite464.children[0] = TouchSensor465;

let Shape466 = browser.currentScene.createNode("Shape");
Shape466.USE = "HAnimSiteShape";
HAnimSite464.children[1] = Shape466;

HAnimSegment438.children[8] = HAnimSite464;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

let HAnimJoint467 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint467.name = "vl1";
HAnimJoint467.DEF = "hanim_vl1";
HAnimJoint467.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint467.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment468.name = "l1";
HAnimSegment468.DEF = "hanim_l1";
//<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>
let TouchSensor469 = browser.currentScene.createNode("TouchSensor");
TouchSensor469.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment468.children = new MFNode();

HAnimSegment468.children[0] = TouchSensor469;

let Transform470 = browser.currentScene.createNode("Transform");
Transform470.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Shape471 = browser.currentScene.createNode("Shape");
Shape471.USE = "HAnimJointShape";
Transform470.children = new MFNode();

Transform470.children[0] = Shape471;

HAnimSegment468.children[1] = Transform470;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
let Shape472 = browser.currentScene.createNode("Shape");
let LineSet473 = browser.currentScene.createNode("LineSet");
LineSet473.vertexCount = new MFInt32(new int[2]);
let Coordinate474 = browser.currentScene.createNode("Coordinate");
Coordinate474.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet473.coord = Coordinate474;

let ColorRGBA475 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA475.USE = "HAnimSegmentLineColorRGBA";
LineSet473.color = ColorRGBA475;

Shape472.geometry = LineSet473;

HAnimSegment468.children[2] = Shape472;

HAnimJoint467.children = new MFNode();

HAnimJoint467.children[0] = HAnimSegment468;

let HAnimJoint476 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint476.name = "vt12";
HAnimJoint476.DEF = "hanim_vt12";
HAnimJoint476.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint476.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment477.name = "t12";
HAnimSegment477.DEF = "hanim_t12";
//<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>
let TouchSensor478 = browser.currentScene.createNode("TouchSensor");
TouchSensor478.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment477.children = new MFNode();

HAnimSegment477.children[0] = TouchSensor478;

let Transform479 = browser.currentScene.createNode("Transform");
Transform479.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "HAnimJointShape";
Transform479.children = new MFNode();

Transform479.children[0] = Shape480;

HAnimSegment477.children[1] = Transform479;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
let Shape481 = browser.currentScene.createNode("Shape");
let LineSet482 = browser.currentScene.createNode("LineSet");
LineSet482.vertexCount = new MFInt32(new int[2]);
let Coordinate483 = browser.currentScene.createNode("Coordinate");
Coordinate483.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet482.coord = Coordinate483;

let ColorRGBA484 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA484.USE = "HAnimSegmentLineColorRGBA";
LineSet482.color = ColorRGBA484;

Shape481.geometry = LineSet482;

HAnimSegment477.children[2] = Shape481;

HAnimJoint476.children = new MFNode();

HAnimJoint476.children[0] = HAnimSegment477;

let HAnimJoint485 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint485.name = "vt11";
HAnimJoint485.DEF = "hanim_vt11";
HAnimJoint485.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint485.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.name = "t11";
HAnimSegment486.DEF = "hanim_t11";
//<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>
let TouchSensor487 = browser.currentScene.createNode("TouchSensor");
TouchSensor487.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = TouchSensor487;

let Transform488 = browser.currentScene.createNode("Transform");
Transform488.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Shape489 = browser.currentScene.createNode("Shape");
Shape489.USE = "HAnimJointShape";
Transform488.children = new MFNode();

Transform488.children[0] = Shape489;

HAnimSegment486.children[1] = Transform488;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
let Shape490 = browser.currentScene.createNode("Shape");
let LineSet491 = browser.currentScene.createNode("LineSet");
LineSet491.vertexCount = new MFInt32(new int[2]);
let Coordinate492 = browser.currentScene.createNode("Coordinate");
Coordinate492.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet491.coord = Coordinate492;

let ColorRGBA493 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA493.USE = "HAnimSegmentLineColorRGBA";
LineSet491.color = ColorRGBA493;

Shape490.geometry = LineSet491;

HAnimSegment486.children[2] = Shape490;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

let HAnimJoint494 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint494.name = "vt10";
HAnimJoint494.DEF = "hanim_vt10";
HAnimJoint494.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint494.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment495.name = "t10";
HAnimSegment495.DEF = "hanim_t10";
//<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>
let TouchSensor496 = browser.currentScene.createNode("TouchSensor");
TouchSensor496.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment495.children = new MFNode();

HAnimSegment495.children[0] = TouchSensor496;

let Transform497 = browser.currentScene.createNode("Transform");
Transform497.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Shape498 = browser.currentScene.createNode("Shape");
Shape498.USE = "HAnimJointShape";
Transform497.children = new MFNode();

Transform497.children[0] = Shape498;

HAnimSegment495.children[1] = Transform497;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
let Shape499 = browser.currentScene.createNode("Shape");
let LineSet500 = browser.currentScene.createNode("LineSet");
LineSet500.vertexCount = new MFInt32(new int[2]);
let Coordinate501 = browser.currentScene.createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet500.coord = Coordinate501;

let ColorRGBA502 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA502.USE = "HAnimSegmentLineColorRGBA";
LineSet500.color = ColorRGBA502;

Shape499.geometry = LineSet500;

HAnimSegment495.children[2] = Shape499;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
let Shape503 = browser.currentScene.createNode("Shape");
let LineSet504 = browser.currentScene.createNode("LineSet");
LineSet504.vertexCount = new MFInt32(new int[2]);
let Coordinate505 = browser.currentScene.createNode("Coordinate");
Coordinate505.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet504.coord = Coordinate505;

let ColorRGBA506 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA506.USE = "HAnimSiteLineColorRGBA";
LineSet504.color = ColorRGBA506;

Shape503.geometry = LineSet504;

HAnimSegment495.children[3] = Shape503;

let HAnimSite507 = browser.currentScene.createNode("HAnimSite");
HAnimSite507.name = "substernale_pt";
HAnimSite507.DEF = "hanim_substernale_pt";
HAnimSite507.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
let TouchSensor508 = browser.currentScene.createNode("TouchSensor");
TouchSensor508.description = "HAnimSite substernale";
HAnimSite507.children = new MFNode();

HAnimSite507.children[0] = TouchSensor508;

let Shape509 = browser.currentScene.createNode("Shape");
Shape509.USE = "HAnimSiteShape";
HAnimSite507.children[1] = Shape509;

HAnimSegment495.children[4] = HAnimSite507;

HAnimJoint494.children = new MFNode();

HAnimJoint494.children[0] = HAnimSegment495;

let HAnimJoint510 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint510.name = "vt9";
HAnimJoint510.DEF = "hanim_vt9";
HAnimJoint510.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint510.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment511.name = "t9";
HAnimSegment511.DEF = "hanim_t9";
//<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>
let TouchSensor512 = browser.currentScene.createNode("TouchSensor");
TouchSensor512.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment511.children = new MFNode();

HAnimSegment511.children[0] = TouchSensor512;

let Transform513 = browser.currentScene.createNode("Transform");
Transform513.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Shape514 = browser.currentScene.createNode("Shape");
Shape514.USE = "HAnimJointShape";
Transform513.children = new MFNode();

Transform513.children[0] = Shape514;

HAnimSegment511.children[1] = Transform513;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
let Shape515 = browser.currentScene.createNode("Shape");
let LineSet516 = browser.currentScene.createNode("LineSet");
LineSet516.vertexCount = new MFInt32(new int[2]);
let Coordinate517 = browser.currentScene.createNode("Coordinate");
Coordinate517.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet516.coord = Coordinate517;

let ColorRGBA518 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA518.USE = "HAnimSegmentLineColorRGBA";
LineSet516.color = ColorRGBA518;

Shape515.geometry = LineSet516;

HAnimSegment511.children[2] = Shape515;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
let Shape519 = browser.currentScene.createNode("Shape");
let LineSet520 = browser.currentScene.createNode("LineSet");
LineSet520.vertexCount = new MFInt32(new int[2]);
let Coordinate521 = browser.currentScene.createNode("Coordinate");
Coordinate521.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet520.coord = Coordinate521;

let ColorRGBA522 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA522.USE = "HAnimSiteLineColorRGBA";
LineSet520.color = ColorRGBA522;

Shape519.geometry = LineSet520;

HAnimSegment511.children[3] = Shape519;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
let Shape523 = browser.currentScene.createNode("Shape");
let LineSet524 = browser.currentScene.createNode("LineSet");
LineSet524.vertexCount = new MFInt32(new int[2]);
let Coordinate525 = browser.currentScene.createNode("Coordinate");
Coordinate525.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet524.coord = Coordinate525;

let ColorRGBA526 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA526.USE = "HAnimSiteLineColorRGBA";
LineSet524.color = ColorRGBA526;

Shape523.geometry = LineSet524;

HAnimSegment511.children[4] = Shape523;

let HAnimSite527 = browser.currentScene.createNode("HAnimSite");
HAnimSite527.name = "r_thelion_pt";
HAnimSite527.DEF = "hanim_r_thelion_pt";
HAnimSite527.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
let TouchSensor528 = browser.currentScene.createNode("TouchSensor");
TouchSensor528.description = "HAnimSite r_thelion";
HAnimSite527.children = new MFNode();

HAnimSite527.children[0] = TouchSensor528;

let Shape529 = browser.currentScene.createNode("Shape");
Shape529.USE = "HAnimSiteShape";
HAnimSite527.children[1] = Shape529;

HAnimSegment511.children[5] = HAnimSite527;

let HAnimSite530 = browser.currentScene.createNode("HAnimSite");
HAnimSite530.name = "l_thelion_pt";
HAnimSite530.DEF = "hanim_l_thelion_pt";
HAnimSite530.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
let TouchSensor531 = browser.currentScene.createNode("TouchSensor");
TouchSensor531.description = "HAnimSite l_thelion";
HAnimSite530.children = new MFNode();

HAnimSite530.children[0] = TouchSensor531;

let Shape532 = browser.currentScene.createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530.children[1] = Shape532;

HAnimSegment511.children[6] = HAnimSite530;

HAnimJoint510.children = new MFNode();

HAnimJoint510.children[0] = HAnimSegment511;

let HAnimJoint533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint533.name = "vt8";
HAnimJoint533.DEF = "hanim_vt8";
HAnimJoint533.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint533.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment534 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment534.name = "t8";
HAnimSegment534.DEF = "hanim_t8";
//<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>
let TouchSensor535 = browser.currentScene.createNode("TouchSensor");
TouchSensor535.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment534.children = new MFNode();

HAnimSegment534.children[0] = TouchSensor535;

let Transform536 = browser.currentScene.createNode("Transform");
Transform536.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Shape537 = browser.currentScene.createNode("Shape");
Shape537.USE = "HAnimJointShape";
Transform536.children = new MFNode();

Transform536.children[0] = Shape537;

HAnimSegment534.children[1] = Transform536;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
let Shape538 = browser.currentScene.createNode("Shape");
let LineSet539 = browser.currentScene.createNode("LineSet");
LineSet539.vertexCount = new MFInt32(new int[2]);
let Coordinate540 = browser.currentScene.createNode("Coordinate");
Coordinate540.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet539.coord = Coordinate540;

let ColorRGBA541 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA541.USE = "HAnimSegmentLineColorRGBA";
LineSet539.color = ColorRGBA541;

Shape538.geometry = LineSet539;

HAnimSegment534.children[2] = Shape538;

HAnimJoint533.children = new MFNode();

HAnimJoint533.children[0] = HAnimSegment534;

let HAnimJoint542 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint542.name = "vt7";
HAnimJoint542.DEF = "hanim_vt7";
HAnimJoint542.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint542.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment543 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment543.name = "t7";
HAnimSegment543.DEF = "hanim_t7";
//<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>
let TouchSensor544 = browser.currentScene.createNode("TouchSensor");
TouchSensor544.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment543.children = new MFNode();

HAnimSegment543.children[0] = TouchSensor544;

let Transform545 = browser.currentScene.createNode("Transform");
Transform545.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Shape546 = browser.currentScene.createNode("Shape");
Shape546.USE = "HAnimJointShape";
Transform545.children = new MFNode();

Transform545.children[0] = Shape546;

HAnimSegment543.children[1] = Transform545;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
let Shape547 = browser.currentScene.createNode("Shape");
let LineSet548 = browser.currentScene.createNode("LineSet");
LineSet548.vertexCount = new MFInt32(new int[2]);
let Coordinate549 = browser.currentScene.createNode("Coordinate");
Coordinate549.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet548.coord = Coordinate549;

let ColorRGBA550 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA550.USE = "HAnimSegmentLineColorRGBA";
LineSet548.color = ColorRGBA550;

Shape547.geometry = LineSet548;

HAnimSegment543.children[2] = Shape547;

HAnimJoint542.children = new MFNode();

HAnimJoint542.children[0] = HAnimSegment543;

let HAnimJoint551 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint551.name = "vt6";
HAnimJoint551.DEF = "hanim_vt6";
HAnimJoint551.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint551.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment552 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment552.name = "t6";
HAnimSegment552.DEF = "hanim_t6";
//<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>
let TouchSensor553 = browser.currentScene.createNode("TouchSensor");
TouchSensor553.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment552.children = new MFNode();

HAnimSegment552.children[0] = TouchSensor553;

let Transform554 = browser.currentScene.createNode("Transform");
Transform554.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Shape555 = browser.currentScene.createNode("Shape");
Shape555.USE = "HAnimJointShape";
Transform554.children = new MFNode();

Transform554.children[0] = Shape555;

HAnimSegment552.children[1] = Transform554;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
let Shape556 = browser.currentScene.createNode("Shape");
let LineSet557 = browser.currentScene.createNode("LineSet");
LineSet557.vertexCount = new MFInt32(new int[2]);
let Coordinate558 = browser.currentScene.createNode("Coordinate");
Coordinate558.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet557.coord = Coordinate558;

let ColorRGBA559 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA559.USE = "HAnimSegmentLineColorRGBA";
LineSet557.color = ColorRGBA559;

Shape556.geometry = LineSet557;

HAnimSegment552.children[2] = Shape556;

HAnimJoint551.children = new MFNode();

HAnimJoint551.children[0] = HAnimSegment552;

let HAnimJoint560 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint560.name = "vt5";
HAnimJoint560.DEF = "hanim_vt5";
HAnimJoint560.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint560.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment561 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment561.name = "t5";
HAnimSegment561.DEF = "hanim_t5";
//<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>
let TouchSensor562 = browser.currentScene.createNode("TouchSensor");
TouchSensor562.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment561.children = new MFNode();

HAnimSegment561.children[0] = TouchSensor562;

let Transform563 = browser.currentScene.createNode("Transform");
Transform563.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Shape564 = browser.currentScene.createNode("Shape");
Shape564.USE = "HAnimJointShape";
Transform563.children = new MFNode();

Transform563.children[0] = Shape564;

HAnimSegment561.children[1] = Transform563;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
let Shape565 = browser.currentScene.createNode("Shape");
let LineSet566 = browser.currentScene.createNode("LineSet");
LineSet566.vertexCount = new MFInt32(new int[2]);
let Coordinate567 = browser.currentScene.createNode("Coordinate");
Coordinate567.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet566.coord = Coordinate567;

let ColorRGBA568 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA568.USE = "HAnimSegmentLineColorRGBA";
LineSet566.color = ColorRGBA568;

Shape565.geometry = LineSet566;

HAnimSegment561.children[2] = Shape565;

HAnimJoint560.children = new MFNode();

HAnimJoint560.children[0] = HAnimSegment561;

let HAnimJoint569 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint569.name = "vt4";
HAnimJoint569.DEF = "hanim_vt4";
HAnimJoint569.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint569.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment570 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment570.name = "t4";
HAnimSegment570.DEF = "hanim_t4";
//<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>
let TouchSensor571 = browser.currentScene.createNode("TouchSensor");
TouchSensor571.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment570.children = new MFNode();

HAnimSegment570.children[0] = TouchSensor571;

let Transform572 = browser.currentScene.createNode("Transform");
Transform572.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Shape573 = browser.currentScene.createNode("Shape");
Shape573.USE = "HAnimJointShape";
Transform572.children = new MFNode();

Transform572.children[0] = Shape573;

HAnimSegment570.children[1] = Transform572;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
let Shape574 = browser.currentScene.createNode("Shape");
let LineSet575 = browser.currentScene.createNode("LineSet");
LineSet575.vertexCount = new MFInt32(new int[2]);
let Coordinate576 = browser.currentScene.createNode("Coordinate");
Coordinate576.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet575.coord = Coordinate576;

let ColorRGBA577 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA577.USE = "HAnimSegmentLineColorRGBA";
LineSet575.color = ColorRGBA577;

Shape574.geometry = LineSet575;

HAnimSegment570.children[2] = Shape574;

HAnimJoint569.children = new MFNode();

HAnimJoint569.children[0] = HAnimSegment570;

let HAnimJoint578 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint578.name = "vt3";
HAnimJoint578.DEF = "hanim_vt3";
HAnimJoint578.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint578.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment579 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment579.name = "t3";
HAnimSegment579.DEF = "hanim_t3";
//<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>
let TouchSensor580 = browser.currentScene.createNode("TouchSensor");
TouchSensor580.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment579.children = new MFNode();

HAnimSegment579.children[0] = TouchSensor580;

let Transform581 = browser.currentScene.createNode("Transform");
Transform581.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Shape582 = browser.currentScene.createNode("Shape");
Shape582.USE = "HAnimJointShape";
Transform581.children = new MFNode();

Transform581.children[0] = Shape582;

HAnimSegment579.children[1] = Transform581;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
let Shape583 = browser.currentScene.createNode("Shape");
let LineSet584 = browser.currentScene.createNode("LineSet");
LineSet584.vertexCount = new MFInt32(new int[2]);
let Coordinate585 = browser.currentScene.createNode("Coordinate");
Coordinate585.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet584.coord = Coordinate585;

let ColorRGBA586 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA586.USE = "HAnimSegmentLineColorRGBA";
LineSet584.color = ColorRGBA586;

Shape583.geometry = LineSet584;

HAnimSegment579.children[2] = Shape583;

HAnimJoint578.children = new MFNode();

HAnimJoint578.children[0] = HAnimSegment579;

let HAnimJoint587 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint587.name = "vt2";
HAnimJoint587.DEF = "hanim_vt2";
HAnimJoint587.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint587.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment588 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment588.name = "t2";
HAnimSegment588.DEF = "hanim_t2";
//<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>
let TouchSensor589 = browser.currentScene.createNode("TouchSensor");
TouchSensor589.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment588.children = new MFNode();

HAnimSegment588.children[0] = TouchSensor589;

let Transform590 = browser.currentScene.createNode("Transform");
Transform590.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Shape591 = browser.currentScene.createNode("Shape");
Shape591.USE = "HAnimJointShape";
Transform590.children = new MFNode();

Transform590.children[0] = Shape591;

HAnimSegment588.children[1] = Transform590;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
let Shape592 = browser.currentScene.createNode("Shape");
let LineSet593 = browser.currentScene.createNode("LineSet");
LineSet593.vertexCount = new MFInt32(new int[2]);
let Coordinate594 = browser.currentScene.createNode("Coordinate");
Coordinate594.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet593.coord = Coordinate594;

let ColorRGBA595 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA595.USE = "HAnimSegmentLineColorRGBA";
LineSet593.color = ColorRGBA595;

Shape592.geometry = LineSet593;

HAnimSegment588.children[2] = Shape592;

HAnimJoint587.children = new MFNode();

HAnimJoint587.children[0] = HAnimSegment588;

let HAnimJoint596 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint596.name = "vt1";
HAnimJoint596.DEF = "hanim_vt1";
HAnimJoint596.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint596.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment597 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment597.name = "t1";
HAnimSegment597.DEF = "hanim_t1";
//<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>
let TouchSensor598 = browser.currentScene.createNode("TouchSensor");
TouchSensor598.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment597.children = new MFNode();

HAnimSegment597.children[0] = TouchSensor598;

let Transform599 = browser.currentScene.createNode("Transform");
Transform599.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Shape600 = browser.currentScene.createNode("Shape");
Shape600.USE = "HAnimJointShape";
Transform599.children = new MFNode();

Transform599.children[0] = Shape600;

HAnimSegment597.children[1] = Transform599;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
let Shape601 = browser.currentScene.createNode("Shape");
let LineSet602 = browser.currentScene.createNode("LineSet");
LineSet602.vertexCount = new MFInt32(new int[2]);
let Coordinate603 = browser.currentScene.createNode("Coordinate");
Coordinate603.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet602.coord = Coordinate603;

let ColorRGBA604 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA604.USE = "HAnimSegmentLineColorRGBA";
LineSet602.color = ColorRGBA604;

Shape601.geometry = LineSet602;

HAnimSegment597.children[2] = Shape601;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
let Shape605 = browser.currentScene.createNode("Shape");
let LineSet606 = browser.currentScene.createNode("LineSet");
LineSet606.vertexCount = new MFInt32(new int[2]);
let Coordinate607 = browser.currentScene.createNode("Coordinate");
Coordinate607.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet606.coord = Coordinate607;

let ColorRGBA608 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA608.USE = "HAnimSegmentLineColorRGBA";
LineSet606.color = ColorRGBA608;

Shape605.geometry = LineSet606;

HAnimSegment597.children[3] = Shape605;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
let Shape609 = browser.currentScene.createNode("Shape");
let LineSet610 = browser.currentScene.createNode("LineSet");
LineSet610.vertexCount = new MFInt32(new int[2]);
let Coordinate611 = browser.currentScene.createNode("Coordinate");
Coordinate611.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet610.coord = Coordinate611;

let ColorRGBA612 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA612.USE = "HAnimSegmentLineColorRGBA";
LineSet610.color = ColorRGBA612;

Shape609.geometry = LineSet610;

HAnimSegment597.children[4] = Shape609;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
let Shape613 = browser.currentScene.createNode("Shape");
let LineSet614 = browser.currentScene.createNode("LineSet");
LineSet614.vertexCount = new MFInt32(new int[2]);
let Coordinate615 = browser.currentScene.createNode("Coordinate");
Coordinate615.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet614.coord = Coordinate615;

let ColorRGBA616 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA616.USE = "HAnimSiteLineColorRGBA";
LineSet614.color = ColorRGBA616;

Shape613.geometry = LineSet614;

HAnimSegment597.children[5] = Shape613;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
let Shape617 = browser.currentScene.createNode("Shape");
let LineSet618 = browser.currentScene.createNode("LineSet");
LineSet618.vertexCount = new MFInt32(new int[2]);
let Coordinate619 = browser.currentScene.createNode("Coordinate");
Coordinate619.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet618.coord = Coordinate619;

let ColorRGBA620 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA620.USE = "HAnimSiteLineColorRGBA";
LineSet618.color = ColorRGBA620;

Shape617.geometry = LineSet618;

HAnimSegment597.children[6] = Shape617;

let HAnimSite621 = browser.currentScene.createNode("HAnimSite");
HAnimSite621.name = "suprasternale_pt";
HAnimSite621.DEF = "hanim_suprasternale_pt";
HAnimSite621.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
let TouchSensor622 = browser.currentScene.createNode("TouchSensor");
TouchSensor622.description = "HAnimSite suprasternale";
HAnimSite621.children = new MFNode();

HAnimSite621.children[0] = TouchSensor622;

let Shape623 = browser.currentScene.createNode("Shape");
Shape623.USE = "HAnimSiteShape";
HAnimSite621.children[1] = Shape623;

HAnimSegment597.children[7] = HAnimSite621;

let HAnimSite624 = browser.currentScene.createNode("HAnimSite");
HAnimSite624.name = "cervicale_pt";
HAnimSite624.DEF = "hanim_cervicale_pt";
HAnimSite624.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
let TouchSensor625 = browser.currentScene.createNode("TouchSensor");
TouchSensor625.description = "HAnimSite cervicale";
HAnimSite624.children = new MFNode();

HAnimSite624.children[0] = TouchSensor625;

let Shape626 = browser.currentScene.createNode("Shape");
Shape626.USE = "HAnimSiteShape";
HAnimSite624.children[1] = Shape626;

HAnimSegment597.children[8] = HAnimSite624;

HAnimJoint596.children = new MFNode();

HAnimJoint596.children[0] = HAnimSegment597;

let HAnimJoint627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint627.name = "vc7";
HAnimJoint627.DEF = "hanim_vc7";
HAnimJoint627.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint627.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment628 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment628.name = "c7";
HAnimSegment628.DEF = "hanim_c7";
//<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>
let TouchSensor629 = browser.currentScene.createNode("TouchSensor");
TouchSensor629.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment628.children = new MFNode();

HAnimSegment628.children[0] = TouchSensor629;

let Transform630 = browser.currentScene.createNode("Transform");
Transform630.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Shape631 = browser.currentScene.createNode("Shape");
Shape631.USE = "HAnimJointShape";
Transform630.children = new MFNode();

Transform630.children[0] = Shape631;

HAnimSegment628.children[1] = Transform630;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
let Shape632 = browser.currentScene.createNode("Shape");
let LineSet633 = browser.currentScene.createNode("LineSet");
LineSet633.vertexCount = new MFInt32(new int[2]);
let Coordinate634 = browser.currentScene.createNode("Coordinate");
Coordinate634.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet633.coord = Coordinate634;

let ColorRGBA635 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA635.USE = "HAnimSegmentLineColorRGBA";
LineSet633.color = ColorRGBA635;

Shape632.geometry = LineSet633;

HAnimSegment628.children[2] = Shape632;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
let Shape636 = browser.currentScene.createNode("Shape");
let LineSet637 = browser.currentScene.createNode("LineSet");
LineSet637.vertexCount = new MFInt32(new int[2]);
let Coordinate638 = browser.currentScene.createNode("Coordinate");
Coordinate638.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet637.coord = Coordinate638;

let ColorRGBA639 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA639.USE = "HAnimSiteLineColorRGBA";
LineSet637.color = ColorRGBA639;

Shape636.geometry = LineSet637;

HAnimSegment628.children[3] = Shape636;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
let Shape640 = browser.currentScene.createNode("Shape");
let LineSet641 = browser.currentScene.createNode("LineSet");
LineSet641.vertexCount = new MFInt32(new int[2]);
let Coordinate642 = browser.currentScene.createNode("Coordinate");
Coordinate642.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet641.coord = Coordinate642;

let ColorRGBA643 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA643.USE = "HAnimSiteLineColorRGBA";
LineSet641.color = ColorRGBA643;

Shape640.geometry = LineSet641;

HAnimSegment628.children[4] = Shape640;

let HAnimSite644 = browser.currentScene.createNode("HAnimSite");
HAnimSite644.name = "r_neck_base_pt";
HAnimSite644.DEF = "hanim_r_neck_base_pt";
HAnimSite644.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
let TouchSensor645 = browser.currentScene.createNode("TouchSensor");
TouchSensor645.description = "HAnimSite r_neck_base";
HAnimSite644.children = new MFNode();

HAnimSite644.children[0] = TouchSensor645;

let Shape646 = browser.currentScene.createNode("Shape");
Shape646.USE = "HAnimSiteShape";
HAnimSite644.children[1] = Shape646;

HAnimSegment628.children[5] = HAnimSite644;

let HAnimSite647 = browser.currentScene.createNode("HAnimSite");
HAnimSite647.name = "l_neck_base_pt";
HAnimSite647.DEF = "hanim_l_neck_base_pt";
HAnimSite647.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
let TouchSensor648 = browser.currentScene.createNode("TouchSensor");
TouchSensor648.description = "HAnimSite l_neck_base";
HAnimSite647.children = new MFNode();

HAnimSite647.children[0] = TouchSensor648;

let Shape649 = browser.currentScene.createNode("Shape");
Shape649.USE = "HAnimSiteShape";
HAnimSite647.children[1] = Shape649;

HAnimSegment628.children[6] = HAnimSite647;

HAnimJoint627.children = new MFNode();

HAnimJoint627.children[0] = HAnimSegment628;

let HAnimJoint650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint650.name = "vc6";
HAnimJoint650.DEF = "hanim_vc6";
HAnimJoint650.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint650.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment651 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment651.name = "c6";
HAnimSegment651.DEF = "hanim_c6";
//<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>
let TouchSensor652 = browser.currentScene.createNode("TouchSensor");
TouchSensor652.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment651.children = new MFNode();

HAnimSegment651.children[0] = TouchSensor652;

let Transform653 = browser.currentScene.createNode("Transform");
Transform653.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Shape654 = browser.currentScene.createNode("Shape");
Shape654.USE = "HAnimJointShape";
Transform653.children = new MFNode();

Transform653.children[0] = Shape654;

HAnimSegment651.children[1] = Transform653;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
let Shape655 = browser.currentScene.createNode("Shape");
let LineSet656 = browser.currentScene.createNode("LineSet");
LineSet656.vertexCount = new MFInt32(new int[2]);
let Coordinate657 = browser.currentScene.createNode("Coordinate");
Coordinate657.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet656.coord = Coordinate657;

let ColorRGBA658 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA658.USE = "HAnimSegmentLineColorRGBA";
LineSet656.color = ColorRGBA658;

Shape655.geometry = LineSet656;

HAnimSegment651.children[2] = Shape655;

HAnimJoint650.children = new MFNode();

HAnimJoint650.children[0] = HAnimSegment651;

let HAnimJoint659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint659.name = "vc5";
HAnimJoint659.DEF = "hanim_vc5";
HAnimJoint659.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint659.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment660 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment660.name = "c5";
HAnimSegment660.DEF = "hanim_c5";
//<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>
let TouchSensor661 = browser.currentScene.createNode("TouchSensor");
TouchSensor661.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment660.children = new MFNode();

HAnimSegment660.children[0] = TouchSensor661;

let Transform662 = browser.currentScene.createNode("Transform");
Transform662.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Shape663 = browser.currentScene.createNode("Shape");
Shape663.USE = "HAnimJointShape";
Transform662.children = new MFNode();

Transform662.children[0] = Shape663;

HAnimSegment660.children[1] = Transform662;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
let Shape664 = browser.currentScene.createNode("Shape");
let LineSet665 = browser.currentScene.createNode("LineSet");
LineSet665.vertexCount = new MFInt32(new int[2]);
let Coordinate666 = browser.currentScene.createNode("Coordinate");
Coordinate666.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet665.coord = Coordinate666;

let ColorRGBA667 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA667.USE = "HAnimSegmentLineColorRGBA";
LineSet665.color = ColorRGBA667;

Shape664.geometry = LineSet665;

HAnimSegment660.children[2] = Shape664;

HAnimJoint659.children = new MFNode();

HAnimJoint659.children[0] = HAnimSegment660;

let HAnimJoint668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint668.name = "vc4";
HAnimJoint668.DEF = "hanim_vc4";
HAnimJoint668.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint668.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment669 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment669.name = "c4";
HAnimSegment669.DEF = "hanim_c4";
//<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>
let TouchSensor670 = browser.currentScene.createNode("TouchSensor");
TouchSensor670.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment669.children = new MFNode();

HAnimSegment669.children[0] = TouchSensor670;

let Transform671 = browser.currentScene.createNode("Transform");
Transform671.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Shape672 = browser.currentScene.createNode("Shape");
Shape672.USE = "HAnimJointShape";
Transform671.children = new MFNode();

Transform671.children[0] = Shape672;

HAnimSegment669.children[1] = Transform671;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
let Shape673 = browser.currentScene.createNode("Shape");
let LineSet674 = browser.currentScene.createNode("LineSet");
LineSet674.vertexCount = new MFInt32(new int[2]);
let Coordinate675 = browser.currentScene.createNode("Coordinate");
Coordinate675.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet674.coord = Coordinate675;

let ColorRGBA676 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA676.USE = "HAnimSegmentLineColorRGBA";
LineSet674.color = ColorRGBA676;

Shape673.geometry = LineSet674;

HAnimSegment669.children[2] = Shape673;

HAnimJoint668.children = new MFNode();

HAnimJoint668.children[0] = HAnimSegment669;

let HAnimJoint677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint677.name = "vc3";
HAnimJoint677.DEF = "hanim_vc3";
HAnimJoint677.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint677.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment678 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment678.name = "c3";
HAnimSegment678.DEF = "hanim_c3";
//<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>
let TouchSensor679 = browser.currentScene.createNode("TouchSensor");
TouchSensor679.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment678.children = new MFNode();

HAnimSegment678.children[0] = TouchSensor679;

let Transform680 = browser.currentScene.createNode("Transform");
Transform680.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Shape681 = browser.currentScene.createNode("Shape");
Shape681.USE = "HAnimJointShape";
Transform680.children = new MFNode();

Transform680.children[0] = Shape681;

HAnimSegment678.children[1] = Transform680;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
let Shape682 = browser.currentScene.createNode("Shape");
let LineSet683 = browser.currentScene.createNode("LineSet");
LineSet683.vertexCount = new MFInt32(new int[2]);
let Coordinate684 = browser.currentScene.createNode("Coordinate");
Coordinate684.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet683.coord = Coordinate684;

let ColorRGBA685 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA685.USE = "HAnimSegmentLineColorRGBA";
LineSet683.color = ColorRGBA685;

Shape682.geometry = LineSet683;

HAnimSegment678.children[2] = Shape682;

HAnimJoint677.children = new MFNode();

HAnimJoint677.children[0] = HAnimSegment678;

let HAnimJoint686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint686.name = "vc2";
HAnimJoint686.DEF = "hanim_vc2";
HAnimJoint686.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint686.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment687 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment687.name = "c2";
HAnimSegment687.DEF = "hanim_c2";
//<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>
let TouchSensor688 = browser.currentScene.createNode("TouchSensor");
TouchSensor688.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment687.children = new MFNode();

HAnimSegment687.children[0] = TouchSensor688;

let Transform689 = browser.currentScene.createNode("Transform");
Transform689.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Shape690 = browser.currentScene.createNode("Shape");
Shape690.USE = "HAnimJointShape";
Transform689.children = new MFNode();

Transform689.children[0] = Shape690;

HAnimSegment687.children[1] = Transform689;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
let Shape691 = browser.currentScene.createNode("Shape");
let LineSet692 = browser.currentScene.createNode("LineSet");
LineSet692.vertexCount = new MFInt32(new int[2]);
let Coordinate693 = browser.currentScene.createNode("Coordinate");
Coordinate693.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet692.coord = Coordinate693;

let ColorRGBA694 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA694.USE = "HAnimSegmentLineColorRGBA";
LineSet692.color = ColorRGBA694;

Shape691.geometry = LineSet692;

HAnimSegment687.children[2] = Shape691;

HAnimJoint686.children = new MFNode();

HAnimJoint686.children[0] = HAnimSegment687;

let HAnimJoint695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint695.name = "vc1";
HAnimJoint695.DEF = "hanim_vc1";
HAnimJoint695.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint695.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment696 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment696.name = "c1";
HAnimSegment696.DEF = "hanim_c1";
//<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>
let TouchSensor697 = browser.currentScene.createNode("TouchSensor");
TouchSensor697.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment696.children = new MFNode();

HAnimSegment696.children[0] = TouchSensor697;

let Transform698 = browser.currentScene.createNode("Transform");
Transform698.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Shape699 = browser.currentScene.createNode("Shape");
Shape699.USE = "HAnimJointShape";
Transform698.children = new MFNode();

Transform698.children[0] = Shape699;

HAnimSegment696.children[1] = Transform698;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
let Shape700 = browser.currentScene.createNode("Shape");
let LineSet701 = browser.currentScene.createNode("LineSet");
LineSet701.vertexCount = new MFInt32(new int[2]);
let Coordinate702 = browser.currentScene.createNode("Coordinate");
Coordinate702.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet701.coord = Coordinate702;

let ColorRGBA703 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA703.USE = "HAnimSegmentLineColorRGBA";
LineSet701.color = ColorRGBA703;

Shape700.geometry = LineSet701;

HAnimSegment696.children[2] = Shape700;

HAnimJoint695.children = new MFNode();

HAnimJoint695.children[0] = HAnimSegment696;

let HAnimJoint704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint704.name = "skullbase";
HAnimJoint704.DEF = "hanim_skullbase";
HAnimJoint704.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint704.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment705 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment705.name = "skull";
HAnimSegment705.DEF = "hanim_skull";
//<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>
let TouchSensor706 = browser.currentScene.createNode("TouchSensor");
TouchSensor706.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment705.children = new MFNode();

HAnimSegment705.children[0] = TouchSensor706;

let Transform707 = browser.currentScene.createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Shape708 = browser.currentScene.createNode("Shape");
Shape708.USE = "HAnimJointShape";
Transform707.children = new MFNode();

Transform707.children[0] = Shape708;

HAnimSegment705.children[1] = Transform707;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
let Shape709 = browser.currentScene.createNode("Shape");
let LineSet710 = browser.currentScene.createNode("LineSet");
LineSet710.vertexCount = new MFInt32(new int[2]);
let Coordinate711 = browser.currentScene.createNode("Coordinate");
Coordinate711.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet710.coord = Coordinate711;

let ColorRGBA712 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA712.USE = "HAnimSegmentLineColorRGBA";
LineSet710.color = ColorRGBA712;

Shape709.geometry = LineSet710;

HAnimSegment705.children[2] = Shape709;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
let Shape713 = browser.currentScene.createNode("Shape");
let LineSet714 = browser.currentScene.createNode("LineSet");
LineSet714.vertexCount = new MFInt32(new int[2]);
let Coordinate715 = browser.currentScene.createNode("Coordinate");
Coordinate715.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet714.coord = Coordinate715;

let ColorRGBA716 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA716.USE = "HAnimSegmentLineColorRGBA";
LineSet714.color = ColorRGBA716;

Shape713.geometry = LineSet714;

HAnimSegment705.children[3] = Shape713;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
let Shape717 = browser.currentScene.createNode("Shape");
let LineSet718 = browser.currentScene.createNode("LineSet");
LineSet718.vertexCount = new MFInt32(new int[2]);
let Coordinate719 = browser.currentScene.createNode("Coordinate");
Coordinate719.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet718.coord = Coordinate719;

let ColorRGBA720 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA720.USE = "HAnimSegmentLineColorRGBA";
LineSet718.color = ColorRGBA720;

Shape717.geometry = LineSet718;

HAnimSegment705.children[4] = Shape717;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
let Shape721 = browser.currentScene.createNode("Shape");
let LineSet722 = browser.currentScene.createNode("LineSet");
LineSet722.vertexCount = new MFInt32(new int[2]);
let Coordinate723 = browser.currentScene.createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet722.coord = Coordinate723;

let ColorRGBA724 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA724;

Shape721.geometry = LineSet722;

HAnimSegment705.children[5] = Shape721;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
let Shape725 = browser.currentScene.createNode("Shape");
let LineSet726 = browser.currentScene.createNode("LineSet");
LineSet726.vertexCount = new MFInt32(new int[2]);
let Coordinate727 = browser.currentScene.createNode("Coordinate");
Coordinate727.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet726.coord = Coordinate727;

let ColorRGBA728 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA728.USE = "HAnimSegmentLineColorRGBA";
LineSet726.color = ColorRGBA728;

Shape725.geometry = LineSet726;

HAnimSegment705.children[6] = Shape725;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
let Shape729 = browser.currentScene.createNode("Shape");
let LineSet730 = browser.currentScene.createNode("LineSet");
LineSet730.vertexCount = new MFInt32(new int[2]);
let Coordinate731 = browser.currentScene.createNode("Coordinate");
Coordinate731.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet730.coord = Coordinate731;

let ColorRGBA732 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA732.USE = "HAnimSegmentLineColorRGBA";
LineSet730.color = ColorRGBA732;

Shape729.geometry = LineSet730;

HAnimSegment705.children[7] = Shape729;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
let Shape733 = browser.currentScene.createNode("Shape");
let LineSet734 = browser.currentScene.createNode("LineSet");
LineSet734.vertexCount = new MFInt32(new int[2]);
let Coordinate735 = browser.currentScene.createNode("Coordinate");
Coordinate735.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet734.coord = Coordinate735;

let ColorRGBA736 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA736.USE = "HAnimSegmentLineColorRGBA";
LineSet734.color = ColorRGBA736;

Shape733.geometry = LineSet734;

HAnimSegment705.children[8] = Shape733;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
let Shape737 = browser.currentScene.createNode("Shape");
let LineSet738 = browser.currentScene.createNode("LineSet");
LineSet738.vertexCount = new MFInt32(new int[2]);
let Coordinate739 = browser.currentScene.createNode("Coordinate");
Coordinate739.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet738.coord = Coordinate739;

let ColorRGBA740 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA740.USE = "HAnimSiteLineColorRGBA";
LineSet738.color = ColorRGBA740;

Shape737.geometry = LineSet738;

HAnimSegment705.children[9] = Shape737;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
let Shape741 = browser.currentScene.createNode("Shape");
let LineSet742 = browser.currentScene.createNode("LineSet");
LineSet742.vertexCount = new MFInt32(new int[2]);
let Coordinate743 = browser.currentScene.createNode("Coordinate");
Coordinate743.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet742.coord = Coordinate743;

let ColorRGBA744 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA744.USE = "HAnimSiteLineColorRGBA";
LineSet742.color = ColorRGBA744;

Shape741.geometry = LineSet742;

HAnimSegment705.children[10] = Shape741;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
let Shape745 = browser.currentScene.createNode("Shape");
let LineSet746 = browser.currentScene.createNode("LineSet");
LineSet746.vertexCount = new MFInt32(new int[2]);
let Coordinate747 = browser.currentScene.createNode("Coordinate");
Coordinate747.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet746.coord = Coordinate747;

let ColorRGBA748 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA748.USE = "HAnimSiteLineColorRGBA";
LineSet746.color = ColorRGBA748;

Shape745.geometry = LineSet746;

HAnimSegment705.children[11] = Shape745;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
let Shape749 = browser.currentScene.createNode("Shape");
let LineSet750 = browser.currentScene.createNode("LineSet");
LineSet750.vertexCount = new MFInt32(new int[2]);
let Coordinate751 = browser.currentScene.createNode("Coordinate");
Coordinate751.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet750.coord = Coordinate751;

let ColorRGBA752 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA752.USE = "HAnimSiteLineColorRGBA";
LineSet750.color = ColorRGBA752;

Shape749.geometry = LineSet750;

HAnimSegment705.children[12] = Shape749;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
let Shape753 = browser.currentScene.createNode("Shape");
let LineSet754 = browser.currentScene.createNode("LineSet");
LineSet754.vertexCount = new MFInt32(new int[2]);
let Coordinate755 = browser.currentScene.createNode("Coordinate");
Coordinate755.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet754.coord = Coordinate755;

let ColorRGBA756 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA756.USE = "HAnimSiteLineColorRGBA";
LineSet754.color = ColorRGBA756;

Shape753.geometry = LineSet754;

HAnimSegment705.children[13] = Shape753;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
let Shape757 = browser.currentScene.createNode("Shape");
let LineSet758 = browser.currentScene.createNode("LineSet");
LineSet758.vertexCount = new MFInt32(new int[2]);
let Coordinate759 = browser.currentScene.createNode("Coordinate");
Coordinate759.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet758.coord = Coordinate759;

let ColorRGBA760 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA760.USE = "HAnimSiteLineColorRGBA";
LineSet758.color = ColorRGBA760;

Shape757.geometry = LineSet758;

HAnimSegment705.children[14] = Shape757;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
let Shape761 = browser.currentScene.createNode("Shape");
let LineSet762 = browser.currentScene.createNode("LineSet");
LineSet762.vertexCount = new MFInt32(new int[2]);
let Coordinate763 = browser.currentScene.createNode("Coordinate");
Coordinate763.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet762.coord = Coordinate763;

let ColorRGBA764 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA764.USE = "HAnimSiteLineColorRGBA";
LineSet762.color = ColorRGBA764;

Shape761.geometry = LineSet762;

HAnimSegment705.children[15] = Shape761;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
let Shape765 = browser.currentScene.createNode("Shape");
let LineSet766 = browser.currentScene.createNode("LineSet");
LineSet766.vertexCount = new MFInt32(new int[2]);
let Coordinate767 = browser.currentScene.createNode("Coordinate");
Coordinate767.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet766.coord = Coordinate767;

let ColorRGBA768 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA768.USE = "HAnimSiteLineColorRGBA";
LineSet766.color = ColorRGBA768;

Shape765.geometry = LineSet766;

HAnimSegment705.children[16] = Shape765;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
let Shape769 = browser.currentScene.createNode("Shape");
let LineSet770 = browser.currentScene.createNode("LineSet");
LineSet770.vertexCount = new MFInt32(new int[2]);
let Coordinate771 = browser.currentScene.createNode("Coordinate");
Coordinate771.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet770.coord = Coordinate771;

let ColorRGBA772 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA772.USE = "HAnimSiteLineColorRGBA";
LineSet770.color = ColorRGBA772;

Shape769.geometry = LineSet770;

HAnimSegment705.children[17] = Shape769;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
let Shape773 = browser.currentScene.createNode("Shape");
let LineSet774 = browser.currentScene.createNode("LineSet");
LineSet774.vertexCount = new MFInt32(new int[2]);
let Coordinate775 = browser.currentScene.createNode("Coordinate");
Coordinate775.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet774.coord = Coordinate775;

let ColorRGBA776 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA776.USE = "HAnimSiteLineColorRGBA";
LineSet774.color = ColorRGBA776;

Shape773.geometry = LineSet774;

HAnimSegment705.children[18] = Shape773;

//TODO move skull_tip x to zero
let HAnimSite777 = browser.currentScene.createNode("HAnimSite");
HAnimSite777.name = "skull_tip";
HAnimSite777.DEF = "hanim_skull_tip";
HAnimSite777.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//HAnimSite visualization shape
let TouchSensor778 = browser.currentScene.createNode("TouchSensor");
TouchSensor778.description = "HAnimSite skull_tip";
HAnimSite777.children = new MFNode();

HAnimSite777.children[0] = TouchSensor778;

let Shape779 = browser.currentScene.createNode("Shape");
Shape779.USE = "HAnimSiteShape";
HAnimSite777.children[1] = Shape779;

HAnimSegment705.children[19] = HAnimSite777;

let HAnimSite780 = browser.currentScene.createNode("HAnimSite");
HAnimSite780.name = "sellion_pt";
HAnimSite780.DEF = "hanim_sellion_pt";
HAnimSite780.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
let TouchSensor781 = browser.currentScene.createNode("TouchSensor");
TouchSensor781.description = "HAnimSite sellion";
HAnimSite780.children = new MFNode();

HAnimSite780.children[0] = TouchSensor781;

let Shape782 = browser.currentScene.createNode("Shape");
Shape782.USE = "HAnimSiteShape";
HAnimSite780.children[1] = Shape782;

HAnimSegment705.children[20] = HAnimSite780;

let HAnimSite783 = browser.currentScene.createNode("HAnimSite");
HAnimSite783.name = "r_infraorbitale_pt";
HAnimSite783.DEF = "hanim_r_infraorbitale_pt";
HAnimSite783.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor784 = browser.currentScene.createNode("TouchSensor");
TouchSensor784.description = "HAnimSite r_infraorbitale";
HAnimSite783.children = new MFNode();

HAnimSite783.children[0] = TouchSensor784;

let Shape785 = browser.currentScene.createNode("Shape");
Shape785.USE = "HAnimSiteShape";
HAnimSite783.children[1] = Shape785;

HAnimSegment705.children[21] = HAnimSite783;

let HAnimSite786 = browser.currentScene.createNode("HAnimSite");
HAnimSite786.name = "l_infraorbitale_pt";
HAnimSite786.DEF = "hanim_l_infraorbitale_pt";
HAnimSite786.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor787 = browser.currentScene.createNode("TouchSensor");
TouchSensor787.description = "HAnimSite l_infraorbitale";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

let Shape788 = browser.currentScene.createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

HAnimSegment705.children[22] = HAnimSite786;

let HAnimSite789 = browser.currentScene.createNode("HAnimSite");
HAnimSite789.name = "supramenton_pt";
HAnimSite789.DEF = "hanim_supramenton_pt";
HAnimSite789.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
let TouchSensor790 = browser.currentScene.createNode("TouchSensor");
TouchSensor790.description = "HAnimSite supramenton";
HAnimSite789.children = new MFNode();

HAnimSite789.children[0] = TouchSensor790;

let Shape791 = browser.currentScene.createNode("Shape");
Shape791.USE = "HAnimSiteShape";
HAnimSite789.children[1] = Shape791;

HAnimSegment705.children[23] = HAnimSite789;

let HAnimSite792 = browser.currentScene.createNode("HAnimSite");
HAnimSite792.name = "r_tragion_pt";
HAnimSite792.DEF = "hanim_r_tragion_pt";
HAnimSite792.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
let TouchSensor793 = browser.currentScene.createNode("TouchSensor");
TouchSensor793.description = "HAnimSite r_tragion";
HAnimSite792.children = new MFNode();

HAnimSite792.children[0] = TouchSensor793;

let Shape794 = browser.currentScene.createNode("Shape");
Shape794.USE = "HAnimSiteShape";
HAnimSite792.children[1] = Shape794;

HAnimSegment705.children[24] = HAnimSite792;

let HAnimSite795 = browser.currentScene.createNode("HAnimSite");
HAnimSite795.name = "r_gonion_pt";
HAnimSite795.DEF = "hanim_r_gonion_pt";
HAnimSite795.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
let TouchSensor796 = browser.currentScene.createNode("TouchSensor");
TouchSensor796.description = "HAnimSite r_gonion";
HAnimSite795.children = new MFNode();

HAnimSite795.children[0] = TouchSensor796;

let Shape797 = browser.currentScene.createNode("Shape");
Shape797.USE = "HAnimSiteShape";
HAnimSite795.children[1] = Shape797;

HAnimSegment705.children[25] = HAnimSite795;

let HAnimSite798 = browser.currentScene.createNode("HAnimSite");
HAnimSite798.name = "l_tragion_pt";
HAnimSite798.DEF = "hanim_l_tragion_pt";
HAnimSite798.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
let TouchSensor799 = browser.currentScene.createNode("TouchSensor");
TouchSensor799.description = "HAnimSite l_tragion";
HAnimSite798.children = new MFNode();

HAnimSite798.children[0] = TouchSensor799;

let Shape800 = browser.currentScene.createNode("Shape");
Shape800.USE = "HAnimSiteShape";
HAnimSite798.children[1] = Shape800;

HAnimSegment705.children[26] = HAnimSite798;

let HAnimSite801 = browser.currentScene.createNode("HAnimSite");
HAnimSite801.name = "l_gonion_pt";
HAnimSite801.DEF = "hanim_l_gonion_pt";
HAnimSite801.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
let TouchSensor802 = browser.currentScene.createNode("TouchSensor");
TouchSensor802.description = "HAnimSite l_gonion";
HAnimSite801.children = new MFNode();

HAnimSite801.children[0] = TouchSensor802;

let Shape803 = browser.currentScene.createNode("Shape");
Shape803.USE = "HAnimSiteShape";
HAnimSite801.children[1] = Shape803;

HAnimSegment705.children[27] = HAnimSite801;

let HAnimSite804 = browser.currentScene.createNode("HAnimSite");
HAnimSite804.name = "nuchale_pt";
HAnimSite804.DEF = "hanim_nuchale_pt";
HAnimSite804.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
let TouchSensor805 = browser.currentScene.createNode("TouchSensor");
TouchSensor805.description = "HAnimSite nuchale";
HAnimSite804.children = new MFNode();

HAnimSite804.children[0] = TouchSensor805;

let Shape806 = browser.currentScene.createNode("Shape");
Shape806.USE = "HAnimSiteShape";
HAnimSite804.children[1] = Shape806;

HAnimSegment705.children[28] = HAnimSite804;

HAnimJoint704.children = new MFNode();

HAnimJoint704.children[0] = HAnimSegment705;

let HAnimJoint807 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint807.name = "l_eyeball_joint";
HAnimJoint807.DEF = "hanim_l_eyeball_joint";
HAnimJoint807.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint807.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment808.name = "l_eyeball";
HAnimSegment808.DEF = "hanim_l_eyeball";
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>
let TouchSensor809 = browser.currentScene.createNode("TouchSensor");
TouchSensor809.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment808.children = new MFNode();

HAnimSegment808.children[0] = TouchSensor809;

let Transform810 = browser.currentScene.createNode("Transform");
Transform810.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape811 = browser.currentScene.createNode("Shape");
Shape811.USE = "HAnimJointShape";
Transform810.children = new MFNode();

Transform810.children[0] = Shape811;

HAnimSegment808.children[1] = Transform810;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
let Shape812 = browser.currentScene.createNode("Shape");
let LineSet813 = browser.currentScene.createNode("LineSet");
LineSet813.vertexCount = new MFInt32(new int[2]);
let Coordinate814 = browser.currentScene.createNode("Coordinate");
Coordinate814.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet813.coord = Coordinate814;

let ColorRGBA815 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA815.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA815.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet813.color = ColorRGBA815;

Shape812.geometry = LineSet813;

HAnimSegment808.children[2] = Shape812;

let HAnimSite816 = browser.currentScene.createNode("HAnimSite");
HAnimSite816.name = "l_eyeball_site_view";
HAnimSite816.DEF = "hanim_l_eyeball_site_view";
HAnimSite816.translation = new SFVec3f(new float[0.034,1.64,0.05]);
let Viewpoint817 = browser.currentScene.createNode("Viewpoint");
Viewpoint817.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint817.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint817.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint817.position = new SFVec3f(new float[0,0,0]);
HAnimSite816.children = new MFNode();

HAnimSite816.children[0] = Viewpoint817;

//HAnimSite/Viewpoint visualization shape
let Anchor818 = browser.currentScene.createNode("Anchor");
Anchor818.description = "HAnimSite Viewpoint hanim_l_eyeball_site_view";
Anchor818.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
let LOD819 = browser.currentScene.createNode("LOD");
LOD819.forceTransitions = True;
LOD819.range = new MFFloat(new float[0.04]);
let WorldInfo820 = browser.currentScene.createNode("WorldInfo");
WorldInfo820.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD819.children = new MFNode();

LOD819.children[0] = WorldInfo820;

let Shape821 = browser.currentScene.createNode("Shape");
Shape821.DEF = "HAnimSiteViewpointShape";
let IndexedFaceSet822 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet822.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet822.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet822.creaseAngle = 0.5;
let Coordinate823 = browser.currentScene.createNode("Coordinate");
Coordinate823.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet822.coord = Coordinate823;

Shape821.geometry = IndexedFaceSet822;

let Appearance824 = browser.currentScene.createNode("Appearance");
let Material825 = browser.currentScene.createNode("Material");
Material825.diffuseColor = new SFColor(new float[0,0,1]);
Material825.transparency = 0.6;
Appearance824.material = Material825;

Shape821.appearance = Appearance824;

LOD819.children[1] = Shape821;

Anchor818.children = new MFNode();

Anchor818.children[0] = LOD819;

HAnimSite816.children[1] = Anchor818;

HAnimSegment808.children[3] = HAnimSite816;

HAnimJoint807.children = new MFNode();

HAnimJoint807.children[0] = HAnimSegment808;

HAnimJoint704.children[1] = HAnimJoint807;

let HAnimJoint826 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint826.name = "l_eyelid_joint";
HAnimJoint826.DEF = "hanim_l_eyelid_joint";
HAnimJoint826.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint826.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment827.name = "l_eyelid";
HAnimSegment827.DEF = "hanim_l_eyelid";
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>
let TouchSensor828 = browser.currentScene.createNode("TouchSensor");
TouchSensor828.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment827.children = new MFNode();

HAnimSegment827.children[0] = TouchSensor828;

let Transform829 = browser.currentScene.createNode("Transform");
Transform829.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape830 = browser.currentScene.createNode("Shape");
Shape830.USE = "HAnimJointShape";
Transform829.children = new MFNode();

Transform829.children[0] = Shape830;

HAnimSegment827.children[1] = Transform829;

HAnimJoint826.children = new MFNode();

HAnimJoint826.children[0] = HAnimSegment827;

HAnimJoint704.children[2] = HAnimJoint826;

let HAnimJoint831 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint831.name = "l_eyebrow_joint";
HAnimJoint831.DEF = "hanim_l_eyebrow_joint";
HAnimJoint831.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint831.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment832.name = "l_eyebrow";
HAnimSegment832.DEF = "hanim_l_eyebrow";
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>
let TouchSensor833 = browser.currentScene.createNode("TouchSensor");
TouchSensor833.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment832.children = new MFNode();

HAnimSegment832.children[0] = TouchSensor833;

let Transform834 = browser.currentScene.createNode("Transform");
Transform834.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
let Shape835 = browser.currentScene.createNode("Shape");
Shape835.USE = "HAnimJointShape";
Transform834.children = new MFNode();

Transform834.children[0] = Shape835;

HAnimSegment832.children[1] = Transform834;

HAnimJoint831.children = new MFNode();

HAnimJoint831.children[0] = HAnimSegment832;

HAnimJoint704.children[3] = HAnimJoint831;

let HAnimJoint836 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint836.name = "r_eyeball_joint";
HAnimJoint836.DEF = "hanim_r_eyeball_joint";
HAnimJoint836.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint836.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment837.name = "r_eyeball";
HAnimSegment837.DEF = "hanim_r_eyeball";
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>
let TouchSensor838 = browser.currentScene.createNode("TouchSensor");
TouchSensor838.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment837.children = new MFNode();

HAnimSegment837.children[0] = TouchSensor838;

let Transform839 = browser.currentScene.createNode("Transform");
Transform839.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape840 = browser.currentScene.createNode("Shape");
Shape840.USE = "HAnimJointShape";
Transform839.children = new MFNode();

Transform839.children[0] = Shape840;

HAnimSegment837.children[1] = Transform839;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
let Shape841 = browser.currentScene.createNode("Shape");
let LineSet842 = browser.currentScene.createNode("LineSet");
LineSet842.vertexCount = new MFInt32(new int[2]);
let Coordinate843 = browser.currentScene.createNode("Coordinate");
Coordinate843.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet842.coord = Coordinate843;

let ColorRGBA844 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA844.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet842.color = ColorRGBA844;

Shape841.geometry = LineSet842;

HAnimSegment837.children[2] = Shape841;

let HAnimSite845 = browser.currentScene.createNode("HAnimSite");
HAnimSite845.name = "r_eyeball_site_view";
HAnimSite845.DEF = "hanim_r_eyeball_site_view";
HAnimSite845.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
let Viewpoint846 = browser.currentScene.createNode("Viewpoint");
Viewpoint846.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint846.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint846.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint846.position = new SFVec3f(new float[0,0,0]);
HAnimSite845.children = new MFNode();

HAnimSite845.children[0] = Viewpoint846;

//HAnimSite/Viewpoint visualization shape
let Anchor847 = browser.currentScene.createNode("Anchor");
Anchor847.description = "HAnimSite Viewpoint hanim_r_eyeball_site_view";
Anchor847.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
let LOD848 = browser.currentScene.createNode("LOD");
LOD848.forceTransitions = True;
LOD848.range = new MFFloat(new float[0.04]);
let WorldInfo849 = browser.currentScene.createNode("WorldInfo");
WorldInfo849.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD848.children = new MFNode();

LOD848.children[0] = WorldInfo849;

let Shape850 = browser.currentScene.createNode("Shape");
Shape850.USE = "HAnimSiteViewpointShape";
LOD848.children[1] = Shape850;

Anchor847.children = new MFNode();

Anchor847.children[0] = LOD848;

HAnimSite845.children[1] = Anchor847;

HAnimSegment837.children[3] = HAnimSite845;

HAnimJoint836.children = new MFNode();

HAnimJoint836.children[0] = HAnimSegment837;

HAnimJoint704.children[4] = HAnimJoint836;

let HAnimJoint851 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint851.name = "r_eyelid_joint";
HAnimJoint851.DEF = "hanim_r_eyelid_joint";
HAnimJoint851.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint851.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment852.name = "r_eyelid";
HAnimSegment852.DEF = "hanim_r_eyelid";
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>
let TouchSensor853 = browser.currentScene.createNode("TouchSensor");
TouchSensor853.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment852.children = new MFNode();

HAnimSegment852.children[0] = TouchSensor853;

let Transform854 = browser.currentScene.createNode("Transform");
Transform854.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape855 = browser.currentScene.createNode("Shape");
Shape855.USE = "HAnimJointShape";
Transform854.children = new MFNode();

Transform854.children[0] = Shape855;

HAnimSegment852.children[1] = Transform854;

HAnimJoint851.children = new MFNode();

HAnimJoint851.children[0] = HAnimSegment852;

HAnimJoint704.children[5] = HAnimJoint851;

let HAnimJoint856 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint856.name = "r_eyebrow_joint";
HAnimJoint856.DEF = "hanim_r_eyebrow_joint";
HAnimJoint856.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint856.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment857.name = "r_eyebrow";
HAnimSegment857.DEF = "hanim_r_eyebrow";
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>
let TouchSensor858 = browser.currentScene.createNode("TouchSensor");
TouchSensor858.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment857.children = new MFNode();

HAnimSegment857.children[0] = TouchSensor858;

let Transform859 = browser.currentScene.createNode("Transform");
Transform859.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
let Shape860 = browser.currentScene.createNode("Shape");
Shape860.USE = "HAnimJointShape";
Transform859.children = new MFNode();

Transform859.children[0] = Shape860;

HAnimSegment857.children[1] = Transform859;

HAnimJoint856.children = new MFNode();

HAnimJoint856.children[0] = HAnimSegment857;

HAnimJoint704.children[6] = HAnimJoint856;

//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimJoint861 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint861.name = "temporomandibular";
HAnimJoint861.DEF = "hanim_temporomandibular";
HAnimJoint861.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint861.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment862.name = "jaw";
HAnimSegment862.DEF = "hanim_jaw";
//<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>
let TouchSensor863 = browser.currentScene.createNode("TouchSensor");
TouchSensor863.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment862.children = new MFNode();

HAnimSegment862.children[0] = TouchSensor863;

let Transform864 = browser.currentScene.createNode("Transform");
Transform864.translation = new SFVec3f(new float[0,1.63,0.015]);
let Shape865 = browser.currentScene.createNode("Shape");
Shape865.USE = "HAnimJointShape";
Transform864.children = new MFNode();

Transform864.children[0] = Shape865;

HAnimSegment862.children[1] = Transform864;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
let Shape866 = browser.currentScene.createNode("Shape");
let LineSet867 = browser.currentScene.createNode("LineSet");
LineSet867.vertexCount = new MFInt32(new int[2]);
let Coordinate868 = browser.currentScene.createNode("Coordinate");
Coordinate868.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet867.coord = Coordinate868;

let ColorRGBA869 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA869.USE = "HAnimSiteLineColorRGBA";
LineSet867.color = ColorRGBA869;

Shape866.geometry = LineSet867;

HAnimSegment862.children[2] = Shape866;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
let Shape870 = browser.currentScene.createNode("Shape");
let LineSet871 = browser.currentScene.createNode("LineSet");
LineSet871.vertexCount = new MFInt32(new int[2]);
let Coordinate872 = browser.currentScene.createNode("Coordinate");
Coordinate872.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet871.coord = Coordinate872;

let ColorRGBA873 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA873.USE = "HAnimSiteLineColorRGBA";
LineSet871.color = ColorRGBA873;

Shape870.geometry = LineSet871;

HAnimSegment862.children[3] = Shape870;

let HAnimSite874 = browser.currentScene.createNode("HAnimSite");
HAnimSite874.name = "temporomandibular_l_site_pt";
HAnimSite874.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite874.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor875 = browser.currentScene.createNode("TouchSensor");
TouchSensor875.description = "HAnimSite temporomandibular_l_site";
HAnimSite874.children = new MFNode();

HAnimSite874.children[0] = TouchSensor875;

let Shape876 = browser.currentScene.createNode("Shape");
Shape876.USE = "HAnimSiteShape";
HAnimSite874.children[1] = Shape876;

HAnimSegment862.children[4] = HAnimSite874;

let HAnimSite877 = browser.currentScene.createNode("HAnimSite");
HAnimSite877.name = "temporomandibular_r_site_pt";
HAnimSite877.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite877.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor878 = browser.currentScene.createNode("TouchSensor");
TouchSensor878.description = "HAnimSite temporomandibular_r_site";
HAnimSite877.children = new MFNode();

HAnimSite877.children[0] = TouchSensor878;

let Shape879 = browser.currentScene.createNode("Shape");
Shape879.USE = "HAnimSiteShape";
HAnimSite877.children[1] = Shape879;

HAnimSegment862.children[5] = HAnimSite877;

HAnimJoint861.children = new MFNode();

HAnimJoint861.children[0] = HAnimSegment862;

HAnimJoint704.children[7] = HAnimJoint861;

HAnimJoint695.children[1] = HAnimJoint704;

HAnimJoint686.children[1] = HAnimJoint695;

HAnimJoint677.children[1] = HAnimJoint686;

HAnimJoint668.children[1] = HAnimJoint677;

HAnimJoint659.children[1] = HAnimJoint668;

HAnimJoint650.children[1] = HAnimJoint659;

HAnimJoint627.children[1] = HAnimJoint650;

HAnimJoint596.children[1] = HAnimJoint627;

let HAnimJoint880 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint880.name = "l_sternoclavicular";
HAnimJoint880.DEF = "hanim_l_sternoclavicular";
HAnimJoint880.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint880.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment881 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment881.name = "l_clavicle";
HAnimSegment881.DEF = "hanim_l_clavicle";
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>
let TouchSensor882 = browser.currentScene.createNode("TouchSensor");
TouchSensor882.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment881.children = new MFNode();

HAnimSegment881.children[0] = TouchSensor882;

let Transform883 = browser.currentScene.createNode("Transform");
Transform883.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Shape884 = browser.currentScene.createNode("Shape");
Shape884.USE = "HAnimJointShape";
Transform883.children = new MFNode();

Transform883.children[0] = Shape884;

HAnimSegment881.children[1] = Transform883;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
let Shape885 = browser.currentScene.createNode("Shape");
let LineSet886 = browser.currentScene.createNode("LineSet");
LineSet886.vertexCount = new MFInt32(new int[2]);
let Coordinate887 = browser.currentScene.createNode("Coordinate");
Coordinate887.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet886.coord = Coordinate887;

let ColorRGBA888 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA888.USE = "HAnimSegmentLineColorRGBA";
LineSet886.color = ColorRGBA888;

Shape885.geometry = LineSet886;

HAnimSegment881.children[2] = Shape885;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
let Shape889 = browser.currentScene.createNode("Shape");
let LineSet890 = browser.currentScene.createNode("LineSet");
LineSet890.vertexCount = new MFInt32(new int[2]);
let Coordinate891 = browser.currentScene.createNode("Coordinate");
Coordinate891.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet890.coord = Coordinate891;

let ColorRGBA892 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA892.USE = "HAnimSiteLineColorRGBA";
LineSet890.color = ColorRGBA892;

Shape889.geometry = LineSet890;

HAnimSegment881.children[3] = Shape889;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
let Shape893 = browser.currentScene.createNode("Shape");
let LineSet894 = browser.currentScene.createNode("LineSet");
LineSet894.vertexCount = new MFInt32(new int[2]);
let Coordinate895 = browser.currentScene.createNode("Coordinate");
Coordinate895.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet894.coord = Coordinate895;

let ColorRGBA896 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA896.USE = "HAnimSiteLineColorRGBA";
LineSet894.color = ColorRGBA896;

Shape893.geometry = LineSet894;

HAnimSegment881.children[4] = Shape893;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
let Shape897 = browser.currentScene.createNode("Shape");
let LineSet898 = browser.currentScene.createNode("LineSet");
LineSet898.vertexCount = new MFInt32(new int[2]);
let Coordinate899 = browser.currentScene.createNode("Coordinate");
Coordinate899.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet898.coord = Coordinate899;

let ColorRGBA900 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA900.USE = "HAnimSiteLineColorRGBA";
LineSet898.color = ColorRGBA900;

Shape897.geometry = LineSet898;

HAnimSegment881.children[5] = Shape897;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
let Shape901 = browser.currentScene.createNode("Shape");
let LineSet902 = browser.currentScene.createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
let Coordinate903 = browser.currentScene.createNode("Coordinate");
Coordinate903.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet902.coord = Coordinate903;

let ColorRGBA904 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA904.USE = "HAnimSiteLineColorRGBA";
LineSet902.color = ColorRGBA904;

Shape901.geometry = LineSet902;

HAnimSegment881.children[6] = Shape901;

let HAnimSite905 = browser.currentScene.createNode("HAnimSite");
HAnimSite905.name = "l_clavicale_pt";
HAnimSite905.DEF = "hanim_l_clavicale_pt";
HAnimSite905.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
let TouchSensor906 = browser.currentScene.createNode("TouchSensor");
TouchSensor906.description = "HAnimSite l_clavicale";
HAnimSite905.children = new MFNode();

HAnimSite905.children[0] = TouchSensor906;

let Shape907 = browser.currentScene.createNode("Shape");
Shape907.USE = "HAnimSiteShape";
HAnimSite905.children[1] = Shape907;

HAnimSegment881.children[7] = HAnimSite905;

let HAnimSite908 = browser.currentScene.createNode("HAnimSite");
HAnimSite908.name = "l_acromion_pt";
HAnimSite908.DEF = "hanim_l_acromion_pt";
HAnimSite908.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
let TouchSensor909 = browser.currentScene.createNode("TouchSensor");
TouchSensor909.description = "HAnimSite l_acromion";
HAnimSite908.children = new MFNode();

HAnimSite908.children[0] = TouchSensor909;

let Shape910 = browser.currentScene.createNode("Shape");
Shape910.USE = "HAnimSiteShape";
HAnimSite908.children[1] = Shape910;

HAnimSegment881.children[8] = HAnimSite908;

let HAnimSite911 = browser.currentScene.createNode("HAnimSite");
HAnimSite911.name = "l_axilla_ant_pt";
HAnimSite911.DEF = "hanim_l_axilla_ant_pt";
HAnimSite911.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
let TouchSensor912 = browser.currentScene.createNode("TouchSensor");
TouchSensor912.description = "HAnimSite l_axilla_ant";
HAnimSite911.children = new MFNode();

HAnimSite911.children[0] = TouchSensor912;

let Shape913 = browser.currentScene.createNode("Shape");
Shape913.USE = "HAnimSiteShape";
HAnimSite911.children[1] = Shape913;

HAnimSegment881.children[9] = HAnimSite911;

let HAnimSite914 = browser.currentScene.createNode("HAnimSite");
HAnimSite914.name = "l_axilla_post_pt";
HAnimSite914.DEF = "hanim_l_axilla_post_pt";
HAnimSite914.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
let TouchSensor915 = browser.currentScene.createNode("TouchSensor");
TouchSensor915.description = "HAnimSite l_axilla_post";
HAnimSite914.children = new MFNode();

HAnimSite914.children[0] = TouchSensor915;

let Shape916 = browser.currentScene.createNode("Shape");
Shape916.USE = "HAnimSiteShape";
HAnimSite914.children[1] = Shape916;

HAnimSegment881.children[10] = HAnimSite914;

HAnimJoint880.children = new MFNode();

HAnimJoint880.children[0] = HAnimSegment881;

let HAnimJoint917 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint917.name = "l_acromioclavicular";
HAnimJoint917.DEF = "hanim_l_acromioclavicular";
HAnimJoint917.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint917.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment918 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment918.name = "l_scapula";
HAnimSegment918.DEF = "hanim_l_scapula";
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>
let TouchSensor919 = browser.currentScene.createNode("TouchSensor");
TouchSensor919.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment918.children = new MFNode();

HAnimSegment918.children[0] = TouchSensor919;

let Transform920 = browser.currentScene.createNode("Transform");
Transform920.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Shape921 = browser.currentScene.createNode("Shape");
Shape921.USE = "HAnimJointShape";
Transform920.children = new MFNode();

Transform920.children[0] = Shape921;

HAnimSegment918.children[1] = Transform920;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
let Shape922 = browser.currentScene.createNode("Shape");
let LineSet923 = browser.currentScene.createNode("LineSet");
LineSet923.vertexCount = new MFInt32(new int[2]);
let Coordinate924 = browser.currentScene.createNode("Coordinate");
Coordinate924.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet923.coord = Coordinate924;

let ColorRGBA925 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA925.USE = "HAnimSegmentLineColorRGBA";
LineSet923.color = ColorRGBA925;

Shape922.geometry = LineSet923;

HAnimSegment918.children[2] = Shape922;

HAnimJoint917.children = new MFNode();

HAnimJoint917.children[0] = HAnimSegment918;

let HAnimJoint926 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint926.name = "l_shoulder";
HAnimJoint926.DEF = "hanim_l_shoulder";
HAnimJoint926.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint926.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment927 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment927.name = "l_upperarm";
HAnimSegment927.DEF = "hanim_l_upperarm";
//<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>
let TouchSensor928 = browser.currentScene.createNode("TouchSensor");
TouchSensor928.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment927.children = new MFNode();

HAnimSegment927.children[0] = TouchSensor928;

let Transform929 = browser.currentScene.createNode("Transform");
Transform929.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape930 = browser.currentScene.createNode("Shape");
Shape930.USE = "HAnimJointShape";
Transform929.children = new MFNode();

Transform929.children[0] = Shape930;

HAnimSegment927.children[1] = Transform929;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
let Shape931 = browser.currentScene.createNode("Shape");
let LineSet932 = browser.currentScene.createNode("LineSet");
LineSet932.vertexCount = new MFInt32(new int[2]);
let Coordinate933 = browser.currentScene.createNode("Coordinate");
Coordinate933.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet932.coord = Coordinate933;

let ColorRGBA934 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA934.USE = "HAnimSegmentLineColorRGBA";
LineSet932.color = ColorRGBA934;

Shape931.geometry = LineSet932;

HAnimSegment927.children[2] = Shape931;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
let Shape935 = browser.currentScene.createNode("Shape");
let LineSet936 = browser.currentScene.createNode("LineSet");
LineSet936.vertexCount = new MFInt32(new int[2]);
let Coordinate937 = browser.currentScene.createNode("Coordinate");
Coordinate937.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet936.coord = Coordinate937;

let ColorRGBA938 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA938.USE = "HAnimSiteLineColorRGBA";
LineSet936.color = ColorRGBA938;

Shape935.geometry = LineSet936;

HAnimSegment927.children[3] = Shape935;

let HAnimSite939 = browser.currentScene.createNode("HAnimSite");
HAnimSite939.name = "l_humeral_lateral_epicn_pt";
HAnimSite939.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite939.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
let TouchSensor940 = browser.currentScene.createNode("TouchSensor");
TouchSensor940.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite939.children = new MFNode();

HAnimSite939.children[0] = TouchSensor940;

let Shape941 = browser.currentScene.createNode("Shape");
Shape941.USE = "HAnimSiteShape";
HAnimSite939.children[1] = Shape941;

HAnimSegment927.children[4] = HAnimSite939;

HAnimJoint926.children = new MFNode();

HAnimJoint926.children[0] = HAnimSegment927;

let HAnimJoint942 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint942.name = "l_elbow";
HAnimJoint942.DEF = "hanim_l_elbow";
HAnimJoint942.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint942.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment943 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment943.name = "l_forearm";
HAnimSegment943.DEF = "hanim_l_forearm";
//<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>
let TouchSensor944 = browser.currentScene.createNode("TouchSensor");
TouchSensor944.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment943.children = new MFNode();

HAnimSegment943.children[0] = TouchSensor944;

let Transform945 = browser.currentScene.createNode("Transform");
Transform945.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape946 = browser.currentScene.createNode("Shape");
Shape946.USE = "HAnimJointShape";
Transform945.children = new MFNode();

Transform945.children[0] = Shape946;

HAnimSegment943.children[1] = Transform945;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
let Shape947 = browser.currentScene.createNode("Shape");
let LineSet948 = browser.currentScene.createNode("LineSet");
LineSet948.vertexCount = new MFInt32(new int[2]);
let Coordinate949 = browser.currentScene.createNode("Coordinate");
Coordinate949.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet948.coord = Coordinate949;

let ColorRGBA950 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA950.USE = "HAnimSegmentLineColorRGBA";
LineSet948.color = ColorRGBA950;

Shape947.geometry = LineSet948;

HAnimSegment943.children[2] = Shape947;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
let Shape951 = browser.currentScene.createNode("Shape");
let LineSet952 = browser.currentScene.createNode("LineSet");
LineSet952.vertexCount = new MFInt32(new int[2]);
let Coordinate953 = browser.currentScene.createNode("Coordinate");
Coordinate953.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet952.coord = Coordinate953;

let ColorRGBA954 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA954.USE = "HAnimSiteLineColorRGBA";
LineSet952.color = ColorRGBA954;

Shape951.geometry = LineSet952;

HAnimSegment943.children[3] = Shape951;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
let Shape955 = browser.currentScene.createNode("Shape");
let LineSet956 = browser.currentScene.createNode("LineSet");
LineSet956.vertexCount = new MFInt32(new int[2]);
let Coordinate957 = browser.currentScene.createNode("Coordinate");
Coordinate957.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet956.coord = Coordinate957;

let ColorRGBA958 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA958.USE = "HAnimSiteLineColorRGBA";
LineSet956.color = ColorRGBA958;

Shape955.geometry = LineSet956;

HAnimSegment943.children[4] = Shape955;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
let Shape959 = browser.currentScene.createNode("Shape");
let LineSet960 = browser.currentScene.createNode("LineSet");
LineSet960.vertexCount = new MFInt32(new int[2]);
let Coordinate961 = browser.currentScene.createNode("Coordinate");
Coordinate961.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet960.coord = Coordinate961;

let ColorRGBA962 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA962.USE = "HAnimSiteLineColorRGBA";
LineSet960.color = ColorRGBA962;

Shape959.geometry = LineSet960;

HAnimSegment943.children[5] = Shape959;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
let Shape963 = browser.currentScene.createNode("Shape");
let LineSet964 = browser.currentScene.createNode("LineSet");
LineSet964.vertexCount = new MFInt32(new int[2]);
let Coordinate965 = browser.currentScene.createNode("Coordinate");
Coordinate965.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet964.coord = Coordinate965;

let ColorRGBA966 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA966.USE = "HAnimSiteLineColorRGBA";
LineSet964.color = ColorRGBA966;

Shape963.geometry = LineSet964;

HAnimSegment943.children[6] = Shape963;

let HAnimSite967 = browser.currentScene.createNode("HAnimSite");
HAnimSite967.name = "l_radial_styloid_pt";
HAnimSite967.DEF = "hanim_l_radial_styloid_pt";
HAnimSite967.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
let TouchSensor968 = browser.currentScene.createNode("TouchSensor");
TouchSensor968.description = "HAnimSite l_radial_styloid";
HAnimSite967.children = new MFNode();

HAnimSite967.children[0] = TouchSensor968;

let Shape969 = browser.currentScene.createNode("Shape");
Shape969.USE = "HAnimSiteShape";
HAnimSite967.children[1] = Shape969;

HAnimSegment943.children[7] = HAnimSite967;

let HAnimSite970 = browser.currentScene.createNode("HAnimSite");
HAnimSite970.name = "l_olecranon_pt";
HAnimSite970.DEF = "hanim_l_olecranon_pt";
HAnimSite970.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
let TouchSensor971 = browser.currentScene.createNode("TouchSensor");
TouchSensor971.description = "HAnimSite l_olecranon";
HAnimSite970.children = new MFNode();

HAnimSite970.children[0] = TouchSensor971;

let Shape972 = browser.currentScene.createNode("Shape");
Shape972.USE = "HAnimSiteShape";
HAnimSite970.children[1] = Shape972;

HAnimSegment943.children[8] = HAnimSite970;

let HAnimSite973 = browser.currentScene.createNode("HAnimSite");
HAnimSite973.name = "l_humeral_medial_epicn_pt";
HAnimSite973.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite973.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
let TouchSensor974 = browser.currentScene.createNode("TouchSensor");
TouchSensor974.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = TouchSensor974;

let Shape975 = browser.currentScene.createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973.children[1] = Shape975;

HAnimSegment943.children[9] = HAnimSite973;

let HAnimSite976 = browser.currentScene.createNode("HAnimSite");
HAnimSite976.name = "l_radiale_pt";
HAnimSite976.DEF = "hanim_l_radiale_pt";
HAnimSite976.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
let TouchSensor977 = browser.currentScene.createNode("TouchSensor");
TouchSensor977.description = "HAnimSite l_radiale";
HAnimSite976.children = new MFNode();

HAnimSite976.children[0] = TouchSensor977;

let Shape978 = browser.currentScene.createNode("Shape");
Shape978.USE = "HAnimSiteShape";
HAnimSite976.children[1] = Shape978;

HAnimSegment943.children[10] = HAnimSite976;

HAnimJoint942.children = new MFNode();

HAnimJoint942.children[0] = HAnimSegment943;

let HAnimJoint979 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint979.name = "l_wrist";
HAnimJoint979.DEF = "hanim_l_wrist";
HAnimJoint979.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint979.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment980 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment980.name = "l_hand";
HAnimSegment980.DEF = "hanim_l_hand";
//<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>
let TouchSensor981 = browser.currentScene.createNode("TouchSensor");
TouchSensor981.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment980.children = new MFNode();

HAnimSegment980.children[0] = TouchSensor981;

let Transform982 = browser.currentScene.createNode("Transform");
Transform982.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape983 = browser.currentScene.createNode("Shape");
Shape983.USE = "HAnimJointShape";
Transform982.children = new MFNode();

Transform982.children[0] = Shape983;

HAnimSegment980.children[1] = Transform982;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
let Shape984 = browser.currentScene.createNode("Shape");
let LineSet985 = browser.currentScene.createNode("LineSet");
LineSet985.vertexCount = new MFInt32(new int[2]);
let Coordinate986 = browser.currentScene.createNode("Coordinate");
Coordinate986.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet985.coord = Coordinate986;

let ColorRGBA987 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA987.USE = "HAnimSegmentLineColorRGBA";
LineSet985.color = ColorRGBA987;

Shape984.geometry = LineSet985;

HAnimSegment980.children[2] = Shape984;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
let Shape988 = browser.currentScene.createNode("Shape");
let LineSet989 = browser.currentScene.createNode("LineSet");
LineSet989.vertexCount = new MFInt32(new int[2]);
let Coordinate990 = browser.currentScene.createNode("Coordinate");
Coordinate990.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet989.coord = Coordinate990;

let ColorRGBA991 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA991.USE = "HAnimSegmentLineColorRGBA";
LineSet989.color = ColorRGBA991;

Shape988.geometry = LineSet989;

HAnimSegment980.children[3] = Shape988;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
let Shape992 = browser.currentScene.createNode("Shape");
let LineSet993 = browser.currentScene.createNode("LineSet");
LineSet993.vertexCount = new MFInt32(new int[2]);
let Coordinate994 = browser.currentScene.createNode("Coordinate");
Coordinate994.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet993.coord = Coordinate994;

let ColorRGBA995 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA995.USE = "HAnimSegmentLineColorRGBA";
LineSet993.color = ColorRGBA995;

Shape992.geometry = LineSet993;

HAnimSegment980.children[4] = Shape992;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
let Shape996 = browser.currentScene.createNode("Shape");
let LineSet997 = browser.currentScene.createNode("LineSet");
LineSet997.vertexCount = new MFInt32(new int[2]);
let Coordinate998 = browser.currentScene.createNode("Coordinate");
Coordinate998.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet997.coord = Coordinate998;

let ColorRGBA999 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA999.USE = "HAnimSegmentLineColorRGBA";
LineSet997.color = ColorRGBA999;

Shape996.geometry = LineSet997;

HAnimSegment980.children[5] = Shape996;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
let Shape1000 = browser.currentScene.createNode("Shape");
let LineSet1001 = browser.currentScene.createNode("LineSet");
LineSet1001.vertexCount = new MFInt32(new int[2]);
let Coordinate1002 = browser.currentScene.createNode("Coordinate");
Coordinate1002.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1001.coord = Coordinate1002;

let ColorRGBA1003 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1003.USE = "HAnimSegmentLineColorRGBA";
LineSet1001.color = ColorRGBA1003;

Shape1000.geometry = LineSet1001;

HAnimSegment980.children[6] = Shape1000;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
let Shape1004 = browser.currentScene.createNode("Shape");
let LineSet1005 = browser.currentScene.createNode("LineSet");
LineSet1005.vertexCount = new MFInt32(new int[2]);
let Coordinate1006 = browser.currentScene.createNode("Coordinate");
Coordinate1006.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1005.coord = Coordinate1006;

let ColorRGBA1007 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1007.USE = "HAnimSiteLineColorRGBA";
LineSet1005.color = ColorRGBA1007;

Shape1004.geometry = LineSet1005;

HAnimSegment980.children[7] = Shape1004;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
let Shape1008 = browser.currentScene.createNode("Shape");
let LineSet1009 = browser.currentScene.createNode("LineSet");
LineSet1009.vertexCount = new MFInt32(new int[2]);
let Coordinate1010 = browser.currentScene.createNode("Coordinate");
Coordinate1010.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1009.coord = Coordinate1010;

let ColorRGBA1011 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1011.USE = "HAnimSiteLineColorRGBA";
LineSet1009.color = ColorRGBA1011;

Shape1008.geometry = LineSet1009;

HAnimSegment980.children[8] = Shape1008;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
let Shape1012 = browser.currentScene.createNode("Shape");
let LineSet1013 = browser.currentScene.createNode("LineSet");
LineSet1013.vertexCount = new MFInt32(new int[2]);
let Coordinate1014 = browser.currentScene.createNode("Coordinate");
Coordinate1014.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1013.coord = Coordinate1014;

let ColorRGBA1015 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1015.USE = "HAnimSiteLineColorRGBA";
LineSet1013.color = ColorRGBA1015;

Shape1012.geometry = LineSet1013;

HAnimSegment980.children[9] = Shape1012;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
let Shape1016 = browser.currentScene.createNode("Shape");
let LineSet1017 = browser.currentScene.createNode("LineSet");
LineSet1017.vertexCount = new MFInt32(new int[2]);
let Coordinate1018 = browser.currentScene.createNode("Coordinate");
Coordinate1018.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1017.coord = Coordinate1018;

let ColorRGBA1019 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1019.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1017.color = ColorRGBA1019;

Shape1016.geometry = LineSet1017;

HAnimSegment980.children[10] = Shape1016;

let HAnimSite1020 = browser.currentScene.createNode("HAnimSite");
HAnimSite1020.name = "l_metacarpal_pha2_pt";
HAnimSite1020.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1020.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
let TouchSensor1021 = browser.currentScene.createNode("TouchSensor");
TouchSensor1021.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1020.children = new MFNode();

HAnimSite1020.children[0] = TouchSensor1021;

let Shape1022 = browser.currentScene.createNode("Shape");
Shape1022.USE = "HAnimSiteShape";
HAnimSite1020.children[1] = Shape1022;

HAnimSegment980.children[11] = HAnimSite1020;

let HAnimSite1023 = browser.currentScene.createNode("HAnimSite");
HAnimSite1023.name = "l_ulnar_styloid_pt";
HAnimSite1023.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1023.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
let TouchSensor1024 = browser.currentScene.createNode("TouchSensor");
TouchSensor1024.description = "HAnimSite l_ulnar_styloid";
HAnimSite1023.children = new MFNode();

HAnimSite1023.children[0] = TouchSensor1024;

let Shape1025 = browser.currentScene.createNode("Shape");
Shape1025.USE = "HAnimSiteShape";
HAnimSite1023.children[1] = Shape1025;

HAnimSegment980.children[12] = HAnimSite1023;

let HAnimSite1026 = browser.currentScene.createNode("HAnimSite");
HAnimSite1026.name = "l_metacarpal_pha5_pt";
HAnimSite1026.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1026.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
let TouchSensor1027 = browser.currentScene.createNode("TouchSensor");
TouchSensor1027.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1026.children = new MFNode();

HAnimSite1026.children[0] = TouchSensor1027;

let Shape1028 = browser.currentScene.createNode("Shape");
Shape1028.USE = "HAnimSiteShape";
HAnimSite1026.children[1] = Shape1028;

HAnimSegment980.children[13] = HAnimSite1026;

let HAnimSite1029 = browser.currentScene.createNode("HAnimSite");
HAnimSite1029.name = "l_hand_front_view";
HAnimSite1029.DEF = "hanim_l_hand_front_view";
HAnimSite1029.translation = new SFVec3f(new float[0.3,0.75,0.45]);
let Viewpoint1030 = browser.currentScene.createNode("Viewpoint");
Viewpoint1030.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1030.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1030.description = "left hand front";
Viewpoint1030.position = new SFVec3f(new float[0,0,0]);
HAnimSite1029.children = new MFNode();

HAnimSite1029.children[0] = Viewpoint1030;

//HAnimSite/Viewpoint visualization shape
let Anchor1031 = browser.currentScene.createNode("Anchor");
Anchor1031.description = "HAnimSite Viewpoint hanim_l_hand_front_view";
Anchor1031.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
let LOD1032 = browser.currentScene.createNode("LOD");
LOD1032.forceTransitions = True;
LOD1032.range = new MFFloat(new float[0.04]);
let WorldInfo1033 = browser.currentScene.createNode("WorldInfo");
WorldInfo1033.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1032.children = new MFNode();

LOD1032.children[0] = WorldInfo1033;

let Shape1034 = browser.currentScene.createNode("Shape");
Shape1034.USE = "HAnimSiteViewpointShape";
LOD1032.children[1] = Shape1034;

Anchor1031.children = new MFNode();

Anchor1031.children[0] = LOD1032;

HAnimSite1029.children[1] = Anchor1031;

HAnimSegment980.children[14] = HAnimSite1029;

HAnimJoint979.children = new MFNode();

HAnimJoint979.children[0] = HAnimSegment980;

let HAnimJoint1035 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1035.name = "l_thumb1";
HAnimJoint1035.DEF = "hanim_l_thumb1";
HAnimJoint1035.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1035.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1036 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1036.name = "l_thumb_metacarpal";
HAnimSegment1036.DEF = "hanim_l_thumb_metacarpal";
//<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>
let TouchSensor1037 = browser.currentScene.createNode("TouchSensor");
TouchSensor1037.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1036.children = new MFNode();

HAnimSegment1036.children[0] = TouchSensor1037;

let Transform1038 = browser.currentScene.createNode("Transform");
Transform1038.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Shape1039 = browser.currentScene.createNode("Shape");
Shape1039.USE = "HAnimJointShape";
Transform1038.children = new MFNode();

Transform1038.children[0] = Shape1039;

HAnimSegment1036.children[1] = Transform1038;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
let Shape1040 = browser.currentScene.createNode("Shape");
let LineSet1041 = browser.currentScene.createNode("LineSet");
LineSet1041.vertexCount = new MFInt32(new int[2]);
let Coordinate1042 = browser.currentScene.createNode("Coordinate");
Coordinate1042.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1041.coord = Coordinate1042;

let ColorRGBA1043 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1043.USE = "HAnimSegmentLineColorRGBA";
LineSet1041.color = ColorRGBA1043;

Shape1040.geometry = LineSet1041;

HAnimSegment1036.children[2] = Shape1040;

HAnimJoint1035.children = new MFNode();

HAnimJoint1035.children[0] = HAnimSegment1036;

let HAnimJoint1044 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1044.name = "l_thumb2";
HAnimJoint1044.DEF = "hanim_l_thumb2";
HAnimJoint1044.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1044.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1045 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1045.name = "l_thumb_proximal";
HAnimSegment1045.DEF = "hanim_l_thumb_proximal";
//<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>
let TouchSensor1046 = browser.currentScene.createNode("TouchSensor");
TouchSensor1046.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1045.children = new MFNode();

HAnimSegment1045.children[0] = TouchSensor1046;

let Transform1047 = browser.currentScene.createNode("Transform");
Transform1047.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Shape1048 = browser.currentScene.createNode("Shape");
Shape1048.USE = "HAnimJointShape";
Transform1047.children = new MFNode();

Transform1047.children[0] = Shape1048;

HAnimSegment1045.children[1] = Transform1047;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
let Shape1049 = browser.currentScene.createNode("Shape");
let LineSet1050 = browser.currentScene.createNode("LineSet");
LineSet1050.vertexCount = new MFInt32(new int[2]);
let Coordinate1051 = browser.currentScene.createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1050.coord = Coordinate1051;

let ColorRGBA1052 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1052.USE = "HAnimSegmentLineColorRGBA";
LineSet1050.color = ColorRGBA1052;

Shape1049.geometry = LineSet1050;

HAnimSegment1045.children[2] = Shape1049;

HAnimJoint1044.children = new MFNode();

HAnimJoint1044.children[0] = HAnimSegment1045;

let HAnimJoint1053 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1053.name = "l_thumb3";
HAnimJoint1053.DEF = "hanim_l_thumb3";
HAnimJoint1053.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1053.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1054 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1054.name = "l_thumb_distal";
HAnimSegment1054.DEF = "hanim_l_thumb_distal";
//<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>
let TouchSensor1055 = browser.currentScene.createNode("TouchSensor");
TouchSensor1055.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1054.children = new MFNode();

HAnimSegment1054.children[0] = TouchSensor1055;

let Transform1056 = browser.currentScene.createNode("Transform");
Transform1056.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Shape1057 = browser.currentScene.createNode("Shape");
Shape1057.USE = "HAnimJointShape";
Transform1056.children = new MFNode();

Transform1056.children[0] = Shape1057;

HAnimSegment1054.children[1] = Transform1056;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
let Shape1058 = browser.currentScene.createNode("Shape");
let LineSet1059 = browser.currentScene.createNode("LineSet");
LineSet1059.vertexCount = new MFInt32(new int[2]);
let Coordinate1060 = browser.currentScene.createNode("Coordinate");
Coordinate1060.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1059.coord = Coordinate1060;

let ColorRGBA1061 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1061.USE = "HAnimSiteLineColorRGBA";
LineSet1059.color = ColorRGBA1061;

Shape1058.geometry = LineSet1059;

HAnimSegment1054.children[2] = Shape1058;

let HAnimSite1062 = browser.currentScene.createNode("HAnimSite");
HAnimSite1062.name = "l_thumb_distal_tip";
HAnimSite1062.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1062.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
let TouchSensor1063 = browser.currentScene.createNode("TouchSensor");
TouchSensor1063.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1062.children = new MFNode();

HAnimSite1062.children[0] = TouchSensor1063;

let Shape1064 = browser.currentScene.createNode("Shape");
Shape1064.USE = "HAnimSiteShape";
HAnimSite1062.children[1] = Shape1064;

HAnimSegment1054.children[3] = HAnimSite1062;

HAnimJoint1053.children = new MFNode();

HAnimJoint1053.children[0] = HAnimSegment1054;

HAnimJoint1044.children[1] = HAnimJoint1053;

HAnimJoint1035.children[1] = HAnimJoint1044;

HAnimJoint979.children[1] = HAnimJoint1035;

let HAnimJoint1065 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1065.name = "l_index0";
HAnimJoint1065.DEF = "hanim_l_index0";
HAnimJoint1065.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1065.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1066 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1066.name = "l_index_metacarpal";
HAnimSegment1066.DEF = "hanim_l_index_metacarpal";
//<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>
let TouchSensor1067 = browser.currentScene.createNode("TouchSensor");
TouchSensor1067.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1066.children = new MFNode();

HAnimSegment1066.children[0] = TouchSensor1067;

let Transform1068 = browser.currentScene.createNode("Transform");
Transform1068.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Shape1069 = browser.currentScene.createNode("Shape");
Shape1069.USE = "HAnimJointShape";
Transform1068.children = new MFNode();

Transform1068.children[0] = Shape1069;

HAnimSegment1066.children[1] = Transform1068;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
let Shape1070 = browser.currentScene.createNode("Shape");
let LineSet1071 = browser.currentScene.createNode("LineSet");
LineSet1071.vertexCount = new MFInt32(new int[2]);
let Coordinate1072 = browser.currentScene.createNode("Coordinate");
Coordinate1072.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1071.coord = Coordinate1072;

let ColorRGBA1073 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1073.USE = "HAnimSegmentLineColorRGBA";
LineSet1071.color = ColorRGBA1073;

Shape1070.geometry = LineSet1071;

HAnimSegment1066.children[2] = Shape1070;

HAnimJoint1065.children = new MFNode();

HAnimJoint1065.children[0] = HAnimSegment1066;

let HAnimJoint1074 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1074.name = "l_index1";
HAnimJoint1074.DEF = "hanim_l_index1";
HAnimJoint1074.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1074.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1075 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1075.name = "l_index_proximal";
HAnimSegment1075.DEF = "hanim_l_index_proximal";
//<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>
let TouchSensor1076 = browser.currentScene.createNode("TouchSensor");
TouchSensor1076.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1075.children = new MFNode();

HAnimSegment1075.children[0] = TouchSensor1076;

let Transform1077 = browser.currentScene.createNode("Transform");
Transform1077.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Shape1078 = browser.currentScene.createNode("Shape");
Shape1078.USE = "HAnimJointShape";
Transform1077.children = new MFNode();

Transform1077.children[0] = Shape1078;

HAnimSegment1075.children[1] = Transform1077;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
let Shape1079 = browser.currentScene.createNode("Shape");
let LineSet1080 = browser.currentScene.createNode("LineSet");
LineSet1080.vertexCount = new MFInt32(new int[2]);
let Coordinate1081 = browser.currentScene.createNode("Coordinate");
Coordinate1081.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1080.coord = Coordinate1081;

let ColorRGBA1082 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1082.USE = "HAnimSegmentLineColorRGBA";
LineSet1080.color = ColorRGBA1082;

Shape1079.geometry = LineSet1080;

HAnimSegment1075.children[2] = Shape1079;

HAnimJoint1074.children = new MFNode();

HAnimJoint1074.children[0] = HAnimSegment1075;

let HAnimJoint1083 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1083.name = "l_index2";
HAnimJoint1083.DEF = "hanim_l_index2";
HAnimJoint1083.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1083.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1084 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1084.name = "l_index_middle";
HAnimSegment1084.DEF = "hanim_l_index_middle";
//<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>
let TouchSensor1085 = browser.currentScene.createNode("TouchSensor");
TouchSensor1085.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1084.children = new MFNode();

HAnimSegment1084.children[0] = TouchSensor1085;

let Transform1086 = browser.currentScene.createNode("Transform");
Transform1086.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Shape1087 = browser.currentScene.createNode("Shape");
Shape1087.USE = "HAnimJointShape";
Transform1086.children = new MFNode();

Transform1086.children[0] = Shape1087;

HAnimSegment1084.children[1] = Transform1086;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
let Shape1088 = browser.currentScene.createNode("Shape");
let LineSet1089 = browser.currentScene.createNode("LineSet");
LineSet1089.vertexCount = new MFInt32(new int[2]);
let Coordinate1090 = browser.currentScene.createNode("Coordinate");
Coordinate1090.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1089.coord = Coordinate1090;

let ColorRGBA1091 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
LineSet1089.color = ColorRGBA1091;

Shape1088.geometry = LineSet1089;

HAnimSegment1084.children[2] = Shape1088;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

let HAnimJoint1092 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1092.name = "l_index3";
HAnimJoint1092.DEF = "hanim_l_index3";
HAnimJoint1092.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1092.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1093 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1093.name = "l_index_distal";
HAnimSegment1093.DEF = "hanim_l_index_distal";
//<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>
let TouchSensor1094 = browser.currentScene.createNode("TouchSensor");
TouchSensor1094.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1093.children = new MFNode();

HAnimSegment1093.children[0] = TouchSensor1094;

let Transform1095 = browser.currentScene.createNode("Transform");
Transform1095.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Shape1096 = browser.currentScene.createNode("Shape");
Shape1096.USE = "HAnimJointShape";
Transform1095.children = new MFNode();

Transform1095.children[0] = Shape1096;

HAnimSegment1093.children[1] = Transform1095;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
let Shape1097 = browser.currentScene.createNode("Shape");
let LineSet1098 = browser.currentScene.createNode("LineSet");
LineSet1098.vertexCount = new MFInt32(new int[2]);
let Coordinate1099 = browser.currentScene.createNode("Coordinate");
Coordinate1099.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1098.coord = Coordinate1099;

let ColorRGBA1100 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1100.USE = "HAnimSiteLineColorRGBA";
LineSet1098.color = ColorRGBA1100;

Shape1097.geometry = LineSet1098;

HAnimSegment1093.children[2] = Shape1097;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
let Shape1101 = browser.currentScene.createNode("Shape");
let LineSet1102 = browser.currentScene.createNode("LineSet");
LineSet1102.vertexCount = new MFInt32(new int[2]);
let Coordinate1103 = browser.currentScene.createNode("Coordinate");
Coordinate1103.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1102.coord = Coordinate1103;

let ColorRGBA1104 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1104.USE = "HAnimSiteLineColorRGBA";
LineSet1102.color = ColorRGBA1104;

Shape1101.geometry = LineSet1102;

HAnimSegment1093.children[3] = Shape1101;

let HAnimSite1105 = browser.currentScene.createNode("HAnimSite");
HAnimSite1105.name = "l_index_distal_tip";
HAnimSite1105.DEF = "hanim_l_index_distal_tip";
HAnimSite1105.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
let TouchSensor1106 = browser.currentScene.createNode("TouchSensor");
TouchSensor1106.description = "HAnimSite l_index_distal_tip";
HAnimSite1105.children = new MFNode();

HAnimSite1105.children[0] = TouchSensor1106;

let Shape1107 = browser.currentScene.createNode("Shape");
Shape1107.USE = "HAnimSiteShape";
HAnimSite1105.children[1] = Shape1107;

HAnimSegment1093.children[4] = HAnimSite1105;

let HAnimSite1108 = browser.currentScene.createNode("HAnimSite");
HAnimSite1108.name = "l_dactylion_pt";
HAnimSite1108.DEF = "hanim_l_dactylion_pt";
HAnimSite1108.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
let TouchSensor1109 = browser.currentScene.createNode("TouchSensor");
TouchSensor1109.description = "HAnimSite l_dactylion";
HAnimSite1108.children = new MFNode();

HAnimSite1108.children[0] = TouchSensor1109;

let Shape1110 = browser.currentScene.createNode("Shape");
Shape1110.USE = "HAnimSiteShape";
HAnimSite1108.children[1] = Shape1110;

HAnimSegment1093.children[5] = HAnimSite1108;

HAnimJoint1092.children = new MFNode();

HAnimJoint1092.children[0] = HAnimSegment1093;

HAnimJoint1083.children[1] = HAnimJoint1092;

HAnimJoint1074.children[1] = HAnimJoint1083;

HAnimJoint1065.children[1] = HAnimJoint1074;

HAnimJoint979.children[2] = HAnimJoint1065;

let HAnimJoint1111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1111.name = "l_middle0";
HAnimJoint1111.DEF = "hanim_l_middle0";
HAnimJoint1111.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1111.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1112.name = "l_middle_metacarpal";
HAnimSegment1112.DEF = "hanim_l_middle_metacarpal";
//<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>
let TouchSensor1113 = browser.currentScene.createNode("TouchSensor");
TouchSensor1113.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1112.children = new MFNode();

HAnimSegment1112.children[0] = TouchSensor1113;

let Transform1114 = browser.currentScene.createNode("Transform");
Transform1114.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Shape1115 = browser.currentScene.createNode("Shape");
Shape1115.USE = "HAnimJointShape";
Transform1114.children = new MFNode();

Transform1114.children[0] = Shape1115;

HAnimSegment1112.children[1] = Transform1114;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
let Shape1116 = browser.currentScene.createNode("Shape");
let LineSet1117 = browser.currentScene.createNode("LineSet");
LineSet1117.vertexCount = new MFInt32(new int[2]);
let Coordinate1118 = browser.currentScene.createNode("Coordinate");
Coordinate1118.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1117.coord = Coordinate1118;

let ColorRGBA1119 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1119.USE = "HAnimSegmentLineColorRGBA";
LineSet1117.color = ColorRGBA1119;

Shape1116.geometry = LineSet1117;

HAnimSegment1112.children[2] = Shape1116;

HAnimJoint1111.children = new MFNode();

HAnimJoint1111.children[0] = HAnimSegment1112;

let HAnimJoint1120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1120.name = "l_middle1";
HAnimJoint1120.DEF = "hanim_l_middle1";
HAnimJoint1120.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1120.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1121.name = "l_middle_proximal";
HAnimSegment1121.DEF = "hanim_l_middle_proximal";
//<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>
let TouchSensor1122 = browser.currentScene.createNode("TouchSensor");
TouchSensor1122.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1121.children = new MFNode();

HAnimSegment1121.children[0] = TouchSensor1122;

let Transform1123 = browser.currentScene.createNode("Transform");
Transform1123.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Shape1124 = browser.currentScene.createNode("Shape");
Shape1124.USE = "HAnimJointShape";
Transform1123.children = new MFNode();

Transform1123.children[0] = Shape1124;

HAnimSegment1121.children[1] = Transform1123;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
let Shape1125 = browser.currentScene.createNode("Shape");
let LineSet1126 = browser.currentScene.createNode("LineSet");
LineSet1126.vertexCount = new MFInt32(new int[2]);
let Coordinate1127 = browser.currentScene.createNode("Coordinate");
Coordinate1127.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1126.coord = Coordinate1127;

let ColorRGBA1128 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA";
LineSet1126.color = ColorRGBA1128;

Shape1125.geometry = LineSet1126;

HAnimSegment1121.children[2] = Shape1125;

HAnimJoint1120.children = new MFNode();

HAnimJoint1120.children[0] = HAnimSegment1121;

let HAnimJoint1129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1129.name = "l_middle2";
HAnimJoint1129.DEF = "hanim_l_middle2";
HAnimJoint1129.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1129.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1130 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1130.name = "l_middle_middle";
HAnimSegment1130.DEF = "hanim_l_middle_middle";
//<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>
let TouchSensor1131 = browser.currentScene.createNode("TouchSensor");
TouchSensor1131.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1130.children = new MFNode();

HAnimSegment1130.children[0] = TouchSensor1131;

let Transform1132 = browser.currentScene.createNode("Transform");
Transform1132.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Shape1133 = browser.currentScene.createNode("Shape");
Shape1133.USE = "HAnimJointShape";
Transform1132.children = new MFNode();

Transform1132.children[0] = Shape1133;

HAnimSegment1130.children[1] = Transform1132;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
let Shape1134 = browser.currentScene.createNode("Shape");
let LineSet1135 = browser.currentScene.createNode("LineSet");
LineSet1135.vertexCount = new MFInt32(new int[2]);
let Coordinate1136 = browser.currentScene.createNode("Coordinate");
Coordinate1136.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1135.coord = Coordinate1136;

let ColorRGBA1137 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1137.USE = "HAnimSegmentLineColorRGBA";
LineSet1135.color = ColorRGBA1137;

Shape1134.geometry = LineSet1135;

HAnimSegment1130.children[2] = Shape1134;

HAnimJoint1129.children = new MFNode();

HAnimJoint1129.children[0] = HAnimSegment1130;

let HAnimJoint1138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1138.name = "l_middle3";
HAnimJoint1138.DEF = "hanim_l_middle3";
HAnimJoint1138.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1138.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1139.name = "l_middle_distal";
HAnimSegment1139.DEF = "hanim_l_middle_distal";
//<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>
let TouchSensor1140 = browser.currentScene.createNode("TouchSensor");
TouchSensor1140.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1139.children = new MFNode();

HAnimSegment1139.children[0] = TouchSensor1140;

let Transform1141 = browser.currentScene.createNode("Transform");
Transform1141.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let Shape1142 = browser.currentScene.createNode("Shape");
Shape1142.USE = "HAnimJointShape";
Transform1141.children = new MFNode();

Transform1141.children[0] = Shape1142;

HAnimSegment1139.children[1] = Transform1141;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
let Shape1143 = browser.currentScene.createNode("Shape");
let LineSet1144 = browser.currentScene.createNode("LineSet");
LineSet1144.vertexCount = new MFInt32(new int[2]);
let Coordinate1145 = browser.currentScene.createNode("Coordinate");
Coordinate1145.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1144.coord = Coordinate1145;

let ColorRGBA1146 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1146.USE = "HAnimSiteLineColorRGBA";
LineSet1144.color = ColorRGBA1146;

Shape1143.geometry = LineSet1144;

HAnimSegment1139.children[2] = Shape1143;

let HAnimSite1147 = browser.currentScene.createNode("HAnimSite");
HAnimSite1147.name = "l_middle_distal_tip";
HAnimSite1147.DEF = "hanim_l_middle_distal_tip";
HAnimSite1147.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
let TouchSensor1148 = browser.currentScene.createNode("TouchSensor");
TouchSensor1148.description = "HAnimSite l_middle_distal_tip";
HAnimSite1147.children = new MFNode();

HAnimSite1147.children[0] = TouchSensor1148;

let Shape1149 = browser.currentScene.createNode("Shape");
Shape1149.USE = "HAnimSiteShape";
HAnimSite1147.children[1] = Shape1149;

HAnimSegment1139.children[3] = HAnimSite1147;

HAnimJoint1138.children = new MFNode();

HAnimJoint1138.children[0] = HAnimSegment1139;

HAnimJoint1129.children[1] = HAnimJoint1138;

HAnimJoint1120.children[1] = HAnimJoint1129;

HAnimJoint1111.children[1] = HAnimJoint1120;

HAnimJoint979.children[3] = HAnimJoint1111;

let HAnimJoint1150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1150.name = "l_ring0";
HAnimJoint1150.DEF = "hanim_l_ring0";
HAnimJoint1150.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1150.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1151.name = "l_ring_metacarpal";
HAnimSegment1151.DEF = "hanim_l_ring_metacarpal";
//<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>
let TouchSensor1152 = browser.currentScene.createNode("TouchSensor");
TouchSensor1152.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1151.children = new MFNode();

HAnimSegment1151.children[0] = TouchSensor1152;

let Transform1153 = browser.currentScene.createNode("Transform");
Transform1153.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Shape1154 = browser.currentScene.createNode("Shape");
Shape1154.USE = "HAnimJointShape";
Transform1153.children = new MFNode();

Transform1153.children[0] = Shape1154;

HAnimSegment1151.children[1] = Transform1153;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
let Shape1155 = browser.currentScene.createNode("Shape");
let LineSet1156 = browser.currentScene.createNode("LineSet");
LineSet1156.vertexCount = new MFInt32(new int[2]);
let Coordinate1157 = browser.currentScene.createNode("Coordinate");
Coordinate1157.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1156.coord = Coordinate1157;

let ColorRGBA1158 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1158.USE = "HAnimSegmentLineColorRGBA";
LineSet1156.color = ColorRGBA1158;

Shape1155.geometry = LineSet1156;

HAnimSegment1151.children[2] = Shape1155;

HAnimJoint1150.children = new MFNode();

HAnimJoint1150.children[0] = HAnimSegment1151;

let HAnimJoint1159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1159.name = "l_ring1";
HAnimJoint1159.DEF = "hanim_l_ring1";
HAnimJoint1159.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1159.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1160.name = "l_ring_proximal";
HAnimSegment1160.DEF = "hanim_l_ring_proximal";
//<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>
let TouchSensor1161 = browser.currentScene.createNode("TouchSensor");
TouchSensor1161.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1160.children = new MFNode();

HAnimSegment1160.children[0] = TouchSensor1161;

let Transform1162 = browser.currentScene.createNode("Transform");
Transform1162.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Shape1163 = browser.currentScene.createNode("Shape");
Shape1163.USE = "HAnimJointShape";
Transform1162.children = new MFNode();

Transform1162.children[0] = Shape1163;

HAnimSegment1160.children[1] = Transform1162;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
let Shape1164 = browser.currentScene.createNode("Shape");
let LineSet1165 = browser.currentScene.createNode("LineSet");
LineSet1165.vertexCount = new MFInt32(new int[2]);
let Coordinate1166 = browser.currentScene.createNode("Coordinate");
Coordinate1166.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1165.coord = Coordinate1166;

let ColorRGBA1167 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA";
LineSet1165.color = ColorRGBA1167;

Shape1164.geometry = LineSet1165;

HAnimSegment1160.children[2] = Shape1164;

HAnimJoint1159.children = new MFNode();

HAnimJoint1159.children[0] = HAnimSegment1160;

let HAnimJoint1168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1168.name = "l_ring2";
HAnimJoint1168.DEF = "hanim_l_ring2";
HAnimJoint1168.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1168.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1169.name = "l_ring_middle";
HAnimSegment1169.DEF = "hanim_l_ring_middle";
//<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>
let TouchSensor1170 = browser.currentScene.createNode("TouchSensor");
TouchSensor1170.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1169.children = new MFNode();

HAnimSegment1169.children[0] = TouchSensor1170;

let Transform1171 = browser.currentScene.createNode("Transform");
Transform1171.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Shape1172 = browser.currentScene.createNode("Shape");
Shape1172.USE = "HAnimJointShape";
Transform1171.children = new MFNode();

Transform1171.children[0] = Shape1172;

HAnimSegment1169.children[1] = Transform1171;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
let Shape1173 = browser.currentScene.createNode("Shape");
let LineSet1174 = browser.currentScene.createNode("LineSet");
LineSet1174.vertexCount = new MFInt32(new int[2]);
let Coordinate1175 = browser.currentScene.createNode("Coordinate");
Coordinate1175.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1174.coord = Coordinate1175;

let ColorRGBA1176 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1176.USE = "HAnimSegmentLineColorRGBA";
LineSet1174.color = ColorRGBA1176;

Shape1173.geometry = LineSet1174;

HAnimSegment1169.children[2] = Shape1173;

HAnimJoint1168.children = new MFNode();

HAnimJoint1168.children[0] = HAnimSegment1169;

let HAnimJoint1177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1177.name = "l_ring3";
HAnimJoint1177.DEF = "hanim_l_ring3";
HAnimJoint1177.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1177.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1178.name = "l_ring_distal";
HAnimSegment1178.DEF = "hanim_l_ring_distal";
//<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>
let TouchSensor1179 = browser.currentScene.createNode("TouchSensor");
TouchSensor1179.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1178.children = new MFNode();

HAnimSegment1178.children[0] = TouchSensor1179;

let Transform1180 = browser.currentScene.createNode("Transform");
Transform1180.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let Shape1181 = browser.currentScene.createNode("Shape");
Shape1181.USE = "HAnimJointShape";
Transform1180.children = new MFNode();

Transform1180.children[0] = Shape1181;

HAnimSegment1178.children[1] = Transform1180;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
let Shape1182 = browser.currentScene.createNode("Shape");
let LineSet1183 = browser.currentScene.createNode("LineSet");
LineSet1183.vertexCount = new MFInt32(new int[2]);
let Coordinate1184 = browser.currentScene.createNode("Coordinate");
Coordinate1184.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1183.coord = Coordinate1184;

let ColorRGBA1185 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1185.USE = "HAnimSiteLineColorRGBA";
LineSet1183.color = ColorRGBA1185;

Shape1182.geometry = LineSet1183;

HAnimSegment1178.children[2] = Shape1182;

let HAnimSite1186 = browser.currentScene.createNode("HAnimSite");
HAnimSite1186.name = "l_ring_distal_tip";
HAnimSite1186.DEF = "hanim_l_ring_distal_tip";
HAnimSite1186.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
let TouchSensor1187 = browser.currentScene.createNode("TouchSensor");
TouchSensor1187.description = "HAnimSite l_ring_distal_tip";
HAnimSite1186.children = new MFNode();

HAnimSite1186.children[0] = TouchSensor1187;

let Shape1188 = browser.currentScene.createNode("Shape");
Shape1188.USE = "HAnimSiteShape";
HAnimSite1186.children[1] = Shape1188;

HAnimSegment1178.children[3] = HAnimSite1186;

HAnimJoint1177.children = new MFNode();

HAnimJoint1177.children[0] = HAnimSegment1178;

HAnimJoint1168.children[1] = HAnimJoint1177;

HAnimJoint1159.children[1] = HAnimJoint1168;

HAnimJoint1150.children[1] = HAnimJoint1159;

HAnimJoint979.children[4] = HAnimJoint1150;

let HAnimJoint1189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1189.name = "l_pinky0";
HAnimJoint1189.DEF = "hanim_l_pinky0";
HAnimJoint1189.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1189.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1190 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1190.name = "l_pinky_metacarpal";
HAnimSegment1190.DEF = "hanim_l_pinky_metacarpal";
//<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>
let TouchSensor1191 = browser.currentScene.createNode("TouchSensor");
TouchSensor1191.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1190.children = new MFNode();

HAnimSegment1190.children[0] = TouchSensor1191;

let Transform1192 = browser.currentScene.createNode("Transform");
Transform1192.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Shape1193 = browser.currentScene.createNode("Shape");
Shape1193.USE = "HAnimJointShape";
Transform1192.children = new MFNode();

Transform1192.children[0] = Shape1193;

HAnimSegment1190.children[1] = Transform1192;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
let Shape1194 = browser.currentScene.createNode("Shape");
let LineSet1195 = browser.currentScene.createNode("LineSet");
LineSet1195.vertexCount = new MFInt32(new int[2]);
let Coordinate1196 = browser.currentScene.createNode("Coordinate");
Coordinate1196.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1195.coord = Coordinate1196;

let ColorRGBA1197 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1197.USE = "HAnimSegmentLineColorRGBA";
LineSet1195.color = ColorRGBA1197;

Shape1194.geometry = LineSet1195;

HAnimSegment1190.children[2] = Shape1194;

HAnimJoint1189.children = new MFNode();

HAnimJoint1189.children[0] = HAnimSegment1190;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.name = "l_pinky1";
HAnimJoint1198.DEF = "hanim_l_pinky1";
HAnimJoint1198.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1198.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1199.name = "l_pinky_proximal";
HAnimSegment1199.DEF = "hanim_l_pinky_proximal";
//<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>
let TouchSensor1200 = browser.currentScene.createNode("TouchSensor");
TouchSensor1200.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1199.children = new MFNode();

HAnimSegment1199.children[0] = TouchSensor1200;

let Transform1201 = browser.currentScene.createNode("Transform");
Transform1201.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Shape1202 = browser.currentScene.createNode("Shape");
Shape1202.USE = "HAnimJointShape";
Transform1201.children = new MFNode();

Transform1201.children[0] = Shape1202;

HAnimSegment1199.children[1] = Transform1201;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
let Shape1203 = browser.currentScene.createNode("Shape");
let LineSet1204 = browser.currentScene.createNode("LineSet");
LineSet1204.vertexCount = new MFInt32(new int[2]);
let Coordinate1205 = browser.currentScene.createNode("Coordinate");
Coordinate1205.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1204.coord = Coordinate1205;

let ColorRGBA1206 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA";
LineSet1204.color = ColorRGBA1206;

Shape1203.geometry = LineSet1204;

HAnimSegment1199.children[2] = Shape1203;

HAnimJoint1198.children = new MFNode();

HAnimJoint1198.children[0] = HAnimSegment1199;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.name = "l_pinky2";
HAnimJoint1207.DEF = "hanim_l_pinky2";
HAnimJoint1207.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1207.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1208 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1208.name = "l_pinky_middle";
HAnimSegment1208.DEF = "hanim_l_pinky_middle";
//<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>
let TouchSensor1209 = browser.currentScene.createNode("TouchSensor");
TouchSensor1209.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1208.children = new MFNode();

HAnimSegment1208.children[0] = TouchSensor1209;

let Transform1210 = browser.currentScene.createNode("Transform");
Transform1210.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Shape1211 = browser.currentScene.createNode("Shape");
Shape1211.USE = "HAnimJointShape";
Transform1210.children = new MFNode();

Transform1210.children[0] = Shape1211;

HAnimSegment1208.children[1] = Transform1210;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
let Shape1212 = browser.currentScene.createNode("Shape");
let LineSet1213 = browser.currentScene.createNode("LineSet");
LineSet1213.vertexCount = new MFInt32(new int[2]);
let Coordinate1214 = browser.currentScene.createNode("Coordinate");
Coordinate1214.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1213.coord = Coordinate1214;

let ColorRGBA1215 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1215.USE = "HAnimSegmentLineColorRGBA";
LineSet1213.color = ColorRGBA1215;

Shape1212.geometry = LineSet1213;

HAnimSegment1208.children[2] = Shape1212;

HAnimJoint1207.children = new MFNode();

HAnimJoint1207.children[0] = HAnimSegment1208;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.name = "l_pinky3";
HAnimJoint1216.DEF = "hanim_l_pinky3";
HAnimJoint1216.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1216.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1217 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1217.name = "l_pinky_distal";
HAnimSegment1217.DEF = "hanim_l_pinky_distal";
//<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>
let TouchSensor1218 = browser.currentScene.createNode("TouchSensor");
TouchSensor1218.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1217.children = new MFNode();

HAnimSegment1217.children[0] = TouchSensor1218;

let Transform1219 = browser.currentScene.createNode("Transform");
Transform1219.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let Shape1220 = browser.currentScene.createNode("Shape");
Shape1220.USE = "HAnimJointShape";
Transform1219.children = new MFNode();

Transform1219.children[0] = Shape1220;

HAnimSegment1217.children[1] = Transform1219;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
let Shape1221 = browser.currentScene.createNode("Shape");
let LineSet1222 = browser.currentScene.createNode("LineSet");
LineSet1222.vertexCount = new MFInt32(new int[2]);
let Coordinate1223 = browser.currentScene.createNode("Coordinate");
Coordinate1223.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1222.coord = Coordinate1223;

let ColorRGBA1224 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSiteLineColorRGBA";
LineSet1222.color = ColorRGBA1224;

Shape1221.geometry = LineSet1222;

HAnimSegment1217.children[2] = Shape1221;

let HAnimSite1225 = browser.currentScene.createNode("HAnimSite");
HAnimSite1225.name = "l_pinky_distal_tip";
HAnimSite1225.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1225.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
let TouchSensor1226 = browser.currentScene.createNode("TouchSensor");
TouchSensor1226.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1225.children = new MFNode();

HAnimSite1225.children[0] = TouchSensor1226;

let Shape1227 = browser.currentScene.createNode("Shape");
Shape1227.USE = "HAnimSiteShape";
HAnimSite1225.children[1] = Shape1227;

HAnimSegment1217.children[3] = HAnimSite1225;

HAnimJoint1216.children = new MFNode();

HAnimJoint1216.children[0] = HAnimSegment1217;

HAnimJoint1207.children[1] = HAnimJoint1216;

HAnimJoint1198.children[1] = HAnimJoint1207;

HAnimJoint1189.children[1] = HAnimJoint1198;

HAnimJoint979.children[5] = HAnimJoint1189;

HAnimJoint942.children[1] = HAnimJoint979;

HAnimJoint926.children[1] = HAnimJoint942;

HAnimJoint917.children[1] = HAnimJoint926;

HAnimJoint880.children[1] = HAnimJoint917;

HAnimJoint596.children[2] = HAnimJoint880;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.name = "r_sternoclavicular";
HAnimJoint1228.DEF = "hanim_r_sternoclavicular";
HAnimJoint1228.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1228.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1229 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1229.name = "r_clavicle";
HAnimSegment1229.DEF = "hanim_r_clavicle";
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>
let TouchSensor1230 = browser.currentScene.createNode("TouchSensor");
TouchSensor1230.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1229.children = new MFNode();

HAnimSegment1229.children[0] = TouchSensor1230;

let Transform1231 = browser.currentScene.createNode("Transform");
Transform1231.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
let Shape1232 = browser.currentScene.createNode("Shape");
Shape1232.USE = "HAnimJointShape";
Transform1231.children = new MFNode();

Transform1231.children[0] = Shape1232;

HAnimSegment1229.children[1] = Transform1231;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
let Shape1233 = browser.currentScene.createNode("Shape");
let LineSet1234 = browser.currentScene.createNode("LineSet");
LineSet1234.vertexCount = new MFInt32(new int[2]);
let Coordinate1235 = browser.currentScene.createNode("Coordinate");
Coordinate1235.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1234.coord = Coordinate1235;

let ColorRGBA1236 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1236.USE = "HAnimSegmentLineColorRGBA";
LineSet1234.color = ColorRGBA1236;

Shape1233.geometry = LineSet1234;

HAnimSegment1229.children[2] = Shape1233;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
let Shape1237 = browser.currentScene.createNode("Shape");
let LineSet1238 = browser.currentScene.createNode("LineSet");
LineSet1238.vertexCount = new MFInt32(new int[2]);
let Coordinate1239 = browser.currentScene.createNode("Coordinate");
Coordinate1239.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1238.coord = Coordinate1239;

let ColorRGBA1240 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1240.USE = "HAnimSiteLineColorRGBA";
LineSet1238.color = ColorRGBA1240;

Shape1237.geometry = LineSet1238;

HAnimSegment1229.children[3] = Shape1237;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
let Shape1241 = browser.currentScene.createNode("Shape");
let LineSet1242 = browser.currentScene.createNode("LineSet");
LineSet1242.vertexCount = new MFInt32(new int[2]);
let Coordinate1243 = browser.currentScene.createNode("Coordinate");
Coordinate1243.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1242.coord = Coordinate1243;

let ColorRGBA1244 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1244.USE = "HAnimSiteLineColorRGBA";
LineSet1242.color = ColorRGBA1244;

Shape1241.geometry = LineSet1242;

HAnimSegment1229.children[4] = Shape1241;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
let Shape1245 = browser.currentScene.createNode("Shape");
let LineSet1246 = browser.currentScene.createNode("LineSet");
LineSet1246.vertexCount = new MFInt32(new int[2]);
let Coordinate1247 = browser.currentScene.createNode("Coordinate");
Coordinate1247.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1246.coord = Coordinate1247;

let ColorRGBA1248 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1248.USE = "HAnimSiteLineColorRGBA";
LineSet1246.color = ColorRGBA1248;

Shape1245.geometry = LineSet1246;

HAnimSegment1229.children[5] = Shape1245;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
let Shape1249 = browser.currentScene.createNode("Shape");
let LineSet1250 = browser.currentScene.createNode("LineSet");
LineSet1250.vertexCount = new MFInt32(new int[2]);
let Coordinate1251 = browser.currentScene.createNode("Coordinate");
Coordinate1251.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1250.coord = Coordinate1251;

let ColorRGBA1252 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSiteLineColorRGBA";
LineSet1250.color = ColorRGBA1252;

Shape1249.geometry = LineSet1250;

HAnimSegment1229.children[6] = Shape1249;

let HAnimSite1253 = browser.currentScene.createNode("HAnimSite");
HAnimSite1253.name = "r_clavicale_pt";
HAnimSite1253.DEF = "hanim_r_clavicale_pt";
HAnimSite1253.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
let TouchSensor1254 = browser.currentScene.createNode("TouchSensor");
TouchSensor1254.description = "HAnimSite r_clavicale";
HAnimSite1253.children = new MFNode();

HAnimSite1253.children[0] = TouchSensor1254;

let Shape1255 = browser.currentScene.createNode("Shape");
Shape1255.USE = "HAnimSiteShape";
HAnimSite1253.children[1] = Shape1255;

HAnimSegment1229.children[7] = HAnimSite1253;

let HAnimSite1256 = browser.currentScene.createNode("HAnimSite");
HAnimSite1256.name = "r_acromion_pt";
HAnimSite1256.DEF = "hanim_r_acromion_pt";
HAnimSite1256.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
let TouchSensor1257 = browser.currentScene.createNode("TouchSensor");
TouchSensor1257.description = "HAnimSite r_acromion";
HAnimSite1256.children = new MFNode();

HAnimSite1256.children[0] = TouchSensor1257;

let Shape1258 = browser.currentScene.createNode("Shape");
Shape1258.USE = "HAnimSiteShape";
HAnimSite1256.children[1] = Shape1258;

HAnimSegment1229.children[8] = HAnimSite1256;

let HAnimSite1259 = browser.currentScene.createNode("HAnimSite");
HAnimSite1259.name = "r_axilla_ant_pt";
HAnimSite1259.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1259.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
let TouchSensor1260 = browser.currentScene.createNode("TouchSensor");
TouchSensor1260.description = "HAnimSite r_axilla_ant";
HAnimSite1259.children = new MFNode();

HAnimSite1259.children[0] = TouchSensor1260;

let Shape1261 = browser.currentScene.createNode("Shape");
Shape1261.USE = "HAnimSiteShape";
HAnimSite1259.children[1] = Shape1261;

HAnimSegment1229.children[9] = HAnimSite1259;

let HAnimSite1262 = browser.currentScene.createNode("HAnimSite");
HAnimSite1262.name = "r_axilla_post_pt";
HAnimSite1262.DEF = "hanim_r_axilla_post_pt";
HAnimSite1262.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
let TouchSensor1263 = browser.currentScene.createNode("TouchSensor");
TouchSensor1263.description = "HAnimSite r_axilla_post";
HAnimSite1262.children = new MFNode();

HAnimSite1262.children[0] = TouchSensor1263;

let Shape1264 = browser.currentScene.createNode("Shape");
Shape1264.USE = "HAnimSiteShape";
HAnimSite1262.children[1] = Shape1264;

HAnimSegment1229.children[10] = HAnimSite1262;

HAnimJoint1228.children = new MFNode();

HAnimJoint1228.children[0] = HAnimSegment1229;

let HAnimJoint1265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1265.name = "r_acromioclavicular";
HAnimJoint1265.DEF = "hanim_r_acromioclavicular";
HAnimJoint1265.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1265.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1266 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1266.name = "r_scapula";
HAnimSegment1266.DEF = "hanim_r_scapula";
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>
let TouchSensor1267 = browser.currentScene.createNode("TouchSensor");
TouchSensor1267.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1266.children = new MFNode();

HAnimSegment1266.children[0] = TouchSensor1267;

let Transform1268 = browser.currentScene.createNode("Transform");
Transform1268.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
let Shape1269 = browser.currentScene.createNode("Shape");
Shape1269.USE = "HAnimJointShape";
Transform1268.children = new MFNode();

Transform1268.children[0] = Shape1269;

HAnimSegment1266.children[1] = Transform1268;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
let Shape1270 = browser.currentScene.createNode("Shape");
let LineSet1271 = browser.currentScene.createNode("LineSet");
LineSet1271.vertexCount = new MFInt32(new int[2]);
let Coordinate1272 = browser.currentScene.createNode("Coordinate");
Coordinate1272.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1271.coord = Coordinate1272;

let ColorRGBA1273 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1273.USE = "HAnimSegmentLineColorRGBA";
LineSet1271.color = ColorRGBA1273;

Shape1270.geometry = LineSet1271;

HAnimSegment1266.children[2] = Shape1270;

HAnimJoint1265.children = new MFNode();

HAnimJoint1265.children[0] = HAnimSegment1266;

let HAnimJoint1274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1274.name = "r_shoulder";
HAnimJoint1274.DEF = "hanim_r_shoulder";
HAnimJoint1274.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1274.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1275.name = "r_upperarm";
HAnimSegment1275.DEF = "hanim_r_upperarm";
//<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>
let TouchSensor1276 = browser.currentScene.createNode("TouchSensor");
TouchSensor1276.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1275.children = new MFNode();

HAnimSegment1275.children[0] = TouchSensor1276;

let Transform1277 = browser.currentScene.createNode("Transform");
Transform1277.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
let Shape1278 = browser.currentScene.createNode("Shape");
Shape1278.USE = "HAnimJointShape";
Transform1277.children = new MFNode();

Transform1277.children[0] = Shape1278;

HAnimSegment1275.children[1] = Transform1277;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
let Shape1279 = browser.currentScene.createNode("Shape");
let LineSet1280 = browser.currentScene.createNode("LineSet");
LineSet1280.vertexCount = new MFInt32(new int[2]);
let Coordinate1281 = browser.currentScene.createNode("Coordinate");
Coordinate1281.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1280.coord = Coordinate1281;

let ColorRGBA1282 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1282.USE = "HAnimSegmentLineColorRGBA";
LineSet1280.color = ColorRGBA1282;

Shape1279.geometry = LineSet1280;

HAnimSegment1275.children[2] = Shape1279;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
let Shape1283 = browser.currentScene.createNode("Shape");
let LineSet1284 = browser.currentScene.createNode("LineSet");
LineSet1284.vertexCount = new MFInt32(new int[2]);
let Coordinate1285 = browser.currentScene.createNode("Coordinate");
Coordinate1285.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1284.coord = Coordinate1285;

let ColorRGBA1286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1286.USE = "HAnimSiteLineColorRGBA";
LineSet1284.color = ColorRGBA1286;

Shape1283.geometry = LineSet1284;

HAnimSegment1275.children[3] = Shape1283;

let HAnimSite1287 = browser.currentScene.createNode("HAnimSite");
HAnimSite1287.name = "r_humeral_lateral_epicn_pt";
HAnimSite1287.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1287.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
let TouchSensor1288 = browser.currentScene.createNode("TouchSensor");
TouchSensor1288.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1287.children = new MFNode();

HAnimSite1287.children[0] = TouchSensor1288;

let Shape1289 = browser.currentScene.createNode("Shape");
Shape1289.USE = "HAnimSiteShape";
HAnimSite1287.children[1] = Shape1289;

HAnimSegment1275.children[4] = HAnimSite1287;

HAnimJoint1274.children = new MFNode();

HAnimJoint1274.children[0] = HAnimSegment1275;

let HAnimJoint1290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1290.name = "r_elbow";
HAnimJoint1290.DEF = "hanim_r_elbow";
HAnimJoint1290.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1290.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1291.name = "r_forearm";
HAnimSegment1291.DEF = "hanim_r_forearm";
//<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>
let TouchSensor1292 = browser.currentScene.createNode("TouchSensor");
TouchSensor1292.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1291.children = new MFNode();

HAnimSegment1291.children[0] = TouchSensor1292;

let Transform1293 = browser.currentScene.createNode("Transform");
Transform1293.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
let Shape1294 = browser.currentScene.createNode("Shape");
Shape1294.USE = "HAnimJointShape";
Transform1293.children = new MFNode();

Transform1293.children[0] = Shape1294;

HAnimSegment1291.children[1] = Transform1293;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
let Shape1295 = browser.currentScene.createNode("Shape");
let LineSet1296 = browser.currentScene.createNode("LineSet");
LineSet1296.vertexCount = new MFInt32(new int[2]);
let Coordinate1297 = browser.currentScene.createNode("Coordinate");
Coordinate1297.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1296.coord = Coordinate1297;

let ColorRGBA1298 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1298.USE = "HAnimSegmentLineColorRGBA";
LineSet1296.color = ColorRGBA1298;

Shape1295.geometry = LineSet1296;

HAnimSegment1291.children[2] = Shape1295;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
let Shape1299 = browser.currentScene.createNode("Shape");
let LineSet1300 = browser.currentScene.createNode("LineSet");
LineSet1300.vertexCount = new MFInt32(new int[2]);
let Coordinate1301 = browser.currentScene.createNode("Coordinate");
Coordinate1301.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1300.coord = Coordinate1301;

let ColorRGBA1302 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1302.USE = "HAnimSiteLineColorRGBA";
LineSet1300.color = ColorRGBA1302;

Shape1299.geometry = LineSet1300;

HAnimSegment1291.children[3] = Shape1299;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
let Shape1303 = browser.currentScene.createNode("Shape");
let LineSet1304 = browser.currentScene.createNode("LineSet");
LineSet1304.vertexCount = new MFInt32(new int[2]);
let Coordinate1305 = browser.currentScene.createNode("Coordinate");
Coordinate1305.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1304.coord = Coordinate1305;

let ColorRGBA1306 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1306.USE = "HAnimSiteLineColorRGBA";
LineSet1304.color = ColorRGBA1306;

Shape1303.geometry = LineSet1304;

HAnimSegment1291.children[4] = Shape1303;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
let Shape1307 = browser.currentScene.createNode("Shape");
let LineSet1308 = browser.currentScene.createNode("LineSet");
LineSet1308.vertexCount = new MFInt32(new int[2]);
let Coordinate1309 = browser.currentScene.createNode("Coordinate");
Coordinate1309.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1308.coord = Coordinate1309;

let ColorRGBA1310 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1310.USE = "HAnimSiteLineColorRGBA";
LineSet1308.color = ColorRGBA1310;

Shape1307.geometry = LineSet1308;

HAnimSegment1291.children[5] = Shape1307;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
let Shape1311 = browser.currentScene.createNode("Shape");
let LineSet1312 = browser.currentScene.createNode("LineSet");
LineSet1312.vertexCount = new MFInt32(new int[2]);
let Coordinate1313 = browser.currentScene.createNode("Coordinate");
Coordinate1313.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1312.coord = Coordinate1313;

let ColorRGBA1314 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1314.USE = "HAnimSiteLineColorRGBA";
LineSet1312.color = ColorRGBA1314;

Shape1311.geometry = LineSet1312;

HAnimSegment1291.children[6] = Shape1311;

let HAnimSite1315 = browser.currentScene.createNode("HAnimSite");
HAnimSite1315.name = "r_radial_styloid_pt";
HAnimSite1315.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1315.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
let TouchSensor1316 = browser.currentScene.createNode("TouchSensor");
TouchSensor1316.description = "HAnimSite r_radial_styloid";
HAnimSite1315.children = new MFNode();

HAnimSite1315.children[0] = TouchSensor1316;

let Shape1317 = browser.currentScene.createNode("Shape");
Shape1317.USE = "HAnimSiteShape";
HAnimSite1315.children[1] = Shape1317;

HAnimSegment1291.children[7] = HAnimSite1315;

let HAnimSite1318 = browser.currentScene.createNode("HAnimSite");
HAnimSite1318.name = "r_olecranon_pt";
HAnimSite1318.DEF = "hanim_r_olecranon_pt";
HAnimSite1318.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
let TouchSensor1319 = browser.currentScene.createNode("TouchSensor");
TouchSensor1319.description = "HAnimSite r_olecranon";
HAnimSite1318.children = new MFNode();

HAnimSite1318.children[0] = TouchSensor1319;

let Shape1320 = browser.currentScene.createNode("Shape");
Shape1320.USE = "HAnimSiteShape";
HAnimSite1318.children[1] = Shape1320;

HAnimSegment1291.children[8] = HAnimSite1318;

let HAnimSite1321 = browser.currentScene.createNode("HAnimSite");
HAnimSite1321.name = "r_humeral_medial_epicn_pt";
HAnimSite1321.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1321.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
let TouchSensor1322 = browser.currentScene.createNode("TouchSensor");
TouchSensor1322.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1321.children = new MFNode();

HAnimSite1321.children[0] = TouchSensor1322;

let Shape1323 = browser.currentScene.createNode("Shape");
Shape1323.USE = "HAnimSiteShape";
HAnimSite1321.children[1] = Shape1323;

HAnimSegment1291.children[9] = HAnimSite1321;

let HAnimSite1324 = browser.currentScene.createNode("HAnimSite");
HAnimSite1324.name = "r_radiale_pt";
HAnimSite1324.DEF = "hanim_r_radiale_pt";
HAnimSite1324.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
let TouchSensor1325 = browser.currentScene.createNode("TouchSensor");
TouchSensor1325.description = "HAnimSite r_radiale";
HAnimSite1324.children = new MFNode();

HAnimSite1324.children[0] = TouchSensor1325;

let Shape1326 = browser.currentScene.createNode("Shape");
Shape1326.USE = "HAnimSiteShape";
HAnimSite1324.children[1] = Shape1326;

HAnimSegment1291.children[10] = HAnimSite1324;

HAnimJoint1290.children = new MFNode();

HAnimJoint1290.children[0] = HAnimSegment1291;

let HAnimJoint1327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1327.name = "r_wrist";
HAnimJoint1327.DEF = "hanim_r_wrist";
HAnimJoint1327.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1327.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1328 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1328.name = "r_hand";
HAnimSegment1328.DEF = "hanim_r_hand";
//<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>
let TouchSensor1329 = browser.currentScene.createNode("TouchSensor");
TouchSensor1329.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1328.children = new MFNode();

HAnimSegment1328.children[0] = TouchSensor1329;

let Transform1330 = browser.currentScene.createNode("Transform");
Transform1330.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
let Shape1331 = browser.currentScene.createNode("Shape");
Shape1331.USE = "HAnimJointShape";
Transform1330.children = new MFNode();

Transform1330.children[0] = Shape1331;

HAnimSegment1328.children[1] = Transform1330;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
let Shape1332 = browser.currentScene.createNode("Shape");
let LineSet1333 = browser.currentScene.createNode("LineSet");
LineSet1333.vertexCount = new MFInt32(new int[2]);
let Coordinate1334 = browser.currentScene.createNode("Coordinate");
Coordinate1334.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1333.coord = Coordinate1334;

let ColorRGBA1335 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1335.USE = "HAnimSegmentLineColorRGBA";
LineSet1333.color = ColorRGBA1335;

Shape1332.geometry = LineSet1333;

HAnimSegment1328.children[2] = Shape1332;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
let Shape1336 = browser.currentScene.createNode("Shape");
let LineSet1337 = browser.currentScene.createNode("LineSet");
LineSet1337.vertexCount = new MFInt32(new int[2]);
let Coordinate1338 = browser.currentScene.createNode("Coordinate");
Coordinate1338.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1337.coord = Coordinate1338;

let ColorRGBA1339 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1339.USE = "HAnimSegmentLineColorRGBA";
LineSet1337.color = ColorRGBA1339;

Shape1336.geometry = LineSet1337;

HAnimSegment1328.children[3] = Shape1336;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
let Shape1340 = browser.currentScene.createNode("Shape");
let LineSet1341 = browser.currentScene.createNode("LineSet");
LineSet1341.vertexCount = new MFInt32(new int[2]);
let Coordinate1342 = browser.currentScene.createNode("Coordinate");
Coordinate1342.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1341.coord = Coordinate1342;

let ColorRGBA1343 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1343.USE = "HAnimSegmentLineColorRGBA";
LineSet1341.color = ColorRGBA1343;

Shape1340.geometry = LineSet1341;

HAnimSegment1328.children[4] = Shape1340;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
let Shape1344 = browser.currentScene.createNode("Shape");
let LineSet1345 = browser.currentScene.createNode("LineSet");
LineSet1345.vertexCount = new MFInt32(new int[2]);
let Coordinate1346 = browser.currentScene.createNode("Coordinate");
Coordinate1346.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1345.coord = Coordinate1346;

let ColorRGBA1347 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1347.USE = "HAnimSegmentLineColorRGBA";
LineSet1345.color = ColorRGBA1347;

Shape1344.geometry = LineSet1345;

HAnimSegment1328.children[5] = Shape1344;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
let Shape1348 = browser.currentScene.createNode("Shape");
let LineSet1349 = browser.currentScene.createNode("LineSet");
LineSet1349.vertexCount = new MFInt32(new int[2]);
let Coordinate1350 = browser.currentScene.createNode("Coordinate");
Coordinate1350.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1349.coord = Coordinate1350;

let ColorRGBA1351 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1351.USE = "HAnimSegmentLineColorRGBA";
LineSet1349.color = ColorRGBA1351;

Shape1348.geometry = LineSet1349;

HAnimSegment1328.children[6] = Shape1348;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
let Shape1352 = browser.currentScene.createNode("Shape");
let LineSet1353 = browser.currentScene.createNode("LineSet");
LineSet1353.vertexCount = new MFInt32(new int[2]);
let Coordinate1354 = browser.currentScene.createNode("Coordinate");
Coordinate1354.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1353.coord = Coordinate1354;

let ColorRGBA1355 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1355.USE = "HAnimSiteLineColorRGBA";
LineSet1353.color = ColorRGBA1355;

Shape1352.geometry = LineSet1353;

HAnimSegment1328.children[7] = Shape1352;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
let Shape1356 = browser.currentScene.createNode("Shape");
let LineSet1357 = browser.currentScene.createNode("LineSet");
LineSet1357.vertexCount = new MFInt32(new int[2]);
let Coordinate1358 = browser.currentScene.createNode("Coordinate");
Coordinate1358.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1357.coord = Coordinate1358;

let ColorRGBA1359 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1359.USE = "HAnimSiteLineColorRGBA";
LineSet1357.color = ColorRGBA1359;

Shape1356.geometry = LineSet1357;

HAnimSegment1328.children[8] = Shape1356;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
let Shape1360 = browser.currentScene.createNode("Shape");
let LineSet1361 = browser.currentScene.createNode("LineSet");
LineSet1361.vertexCount = new MFInt32(new int[2]);
let Coordinate1362 = browser.currentScene.createNode("Coordinate");
Coordinate1362.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1361.coord = Coordinate1362;

let ColorRGBA1363 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1363.USE = "HAnimSiteLineColorRGBA";
LineSet1361.color = ColorRGBA1363;

Shape1360.geometry = LineSet1361;

HAnimSegment1328.children[9] = Shape1360;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
let Shape1364 = browser.currentScene.createNode("Shape");
let LineSet1365 = browser.currentScene.createNode("LineSet");
LineSet1365.vertexCount = new MFInt32(new int[2]);
let Coordinate1366 = browser.currentScene.createNode("Coordinate");
Coordinate1366.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1365.coord = Coordinate1366;

let ColorRGBA1367 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1367.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1365.color = ColorRGBA1367;

Shape1364.geometry = LineSet1365;

HAnimSegment1328.children[10] = Shape1364;

let HAnimSite1368 = browser.currentScene.createNode("HAnimSite");
HAnimSite1368.name = "r_metacarpal_pha2_pt";
HAnimSite1368.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1368.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
let TouchSensor1369 = browser.currentScene.createNode("TouchSensor");
TouchSensor1369.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1368.children = new MFNode();

HAnimSite1368.children[0] = TouchSensor1369;

let Shape1370 = browser.currentScene.createNode("Shape");
Shape1370.USE = "HAnimSiteShape";
HAnimSite1368.children[1] = Shape1370;

HAnimSegment1328.children[11] = HAnimSite1368;

let HAnimSite1371 = browser.currentScene.createNode("HAnimSite");
HAnimSite1371.name = "r_ulnar_styloid_pt";
HAnimSite1371.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1371.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
let TouchSensor1372 = browser.currentScene.createNode("TouchSensor");
TouchSensor1372.description = "HAnimSite r_ulnar_styloid";
HAnimSite1371.children = new MFNode();

HAnimSite1371.children[0] = TouchSensor1372;

let Shape1373 = browser.currentScene.createNode("Shape");
Shape1373.USE = "HAnimSiteShape";
HAnimSite1371.children[1] = Shape1373;

HAnimSegment1328.children[12] = HAnimSite1371;

let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.name = "r_metacarpal_pha5_pt";
HAnimSite1374.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1374.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
let TouchSensor1375 = browser.currentScene.createNode("TouchSensor");
TouchSensor1375.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1374.children = new MFNode();

HAnimSite1374.children[0] = TouchSensor1375;

let Shape1376 = browser.currentScene.createNode("Shape");
Shape1376.USE = "HAnimSiteShape";
HAnimSite1374.children[1] = Shape1376;

HAnimSegment1328.children[13] = HAnimSite1374;

let HAnimSite1377 = browser.currentScene.createNode("HAnimSite");
HAnimSite1377.name = "r_hand_front_view";
HAnimSite1377.DEF = "hanim_r_hand_front_view";
HAnimSite1377.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
let Viewpoint1378 = browser.currentScene.createNode("Viewpoint");
Viewpoint1378.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1378.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1378.description = "right hand front";
Viewpoint1378.position = new SFVec3f(new float[0,0,0]);
HAnimSite1377.children = new MFNode();

HAnimSite1377.children[0] = Viewpoint1378;

//HAnimSite/Viewpoint visualization shape
let Anchor1379 = browser.currentScene.createNode("Anchor");
Anchor1379.description = "HAnimSite Viewpoint hanim_r_hand_front_view";
Anchor1379.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
let LOD1380 = browser.currentScene.createNode("LOD");
LOD1380.forceTransitions = True;
LOD1380.range = new MFFloat(new float[0.04]);
let WorldInfo1381 = browser.currentScene.createNode("WorldInfo");
WorldInfo1381.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1380.children = new MFNode();

LOD1380.children[0] = WorldInfo1381;

let Shape1382 = browser.currentScene.createNode("Shape");
Shape1382.USE = "HAnimSiteViewpointShape";
LOD1380.children[1] = Shape1382;

Anchor1379.children = new MFNode();

Anchor1379.children[0] = LOD1380;

HAnimSite1377.children[1] = Anchor1379;

HAnimSegment1328.children[14] = HAnimSite1377;

HAnimJoint1327.children = new MFNode();

HAnimJoint1327.children[0] = HAnimSegment1328;

let HAnimJoint1383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1383.name = "r_thumb1";
HAnimJoint1383.DEF = "hanim_r_thumb1";
HAnimJoint1383.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1383.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1384 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1384.name = "r_thumb_metacarpal";
HAnimSegment1384.DEF = "hanim_r_thumb_metacarpal";
//<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>
let TouchSensor1385 = browser.currentScene.createNode("TouchSensor");
TouchSensor1385.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1384.children = new MFNode();

HAnimSegment1384.children[0] = TouchSensor1385;

let Transform1386 = browser.currentScene.createNode("Transform");
Transform1386.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
let Shape1387 = browser.currentScene.createNode("Shape");
Shape1387.USE = "HAnimJointShape";
Transform1386.children = new MFNode();

Transform1386.children[0] = Shape1387;

HAnimSegment1384.children[1] = Transform1386;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
let Shape1388 = browser.currentScene.createNode("Shape");
let LineSet1389 = browser.currentScene.createNode("LineSet");
LineSet1389.vertexCount = new MFInt32(new int[2]);
let Coordinate1390 = browser.currentScene.createNode("Coordinate");
Coordinate1390.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1389.coord = Coordinate1390;

let ColorRGBA1391 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1391.USE = "HAnimSegmentLineColorRGBA";
LineSet1389.color = ColorRGBA1391;

Shape1388.geometry = LineSet1389;

HAnimSegment1384.children[2] = Shape1388;

HAnimJoint1383.children = new MFNode();

HAnimJoint1383.children[0] = HAnimSegment1384;

let HAnimJoint1392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1392.name = "r_thumb2";
HAnimJoint1392.DEF = "hanim_r_thumb2";
HAnimJoint1392.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1392.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1393 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1393.name = "r_thumb_proximal";
HAnimSegment1393.DEF = "hanim_r_thumb_proximal";
//<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>
let TouchSensor1394 = browser.currentScene.createNode("TouchSensor");
TouchSensor1394.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1393.children = new MFNode();

HAnimSegment1393.children[0] = TouchSensor1394;

let Transform1395 = browser.currentScene.createNode("Transform");
Transform1395.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
let Shape1396 = browser.currentScene.createNode("Shape");
Shape1396.USE = "HAnimJointShape";
Transform1395.children = new MFNode();

Transform1395.children[0] = Shape1396;

HAnimSegment1393.children[1] = Transform1395;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
let Shape1397 = browser.currentScene.createNode("Shape");
let LineSet1398 = browser.currentScene.createNode("LineSet");
LineSet1398.vertexCount = new MFInt32(new int[2]);
let Coordinate1399 = browser.currentScene.createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1398.coord = Coordinate1399;

let ColorRGBA1400 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1400.USE = "HAnimSegmentLineColorRGBA";
LineSet1398.color = ColorRGBA1400;

Shape1397.geometry = LineSet1398;

HAnimSegment1393.children[2] = Shape1397;

HAnimJoint1392.children = new MFNode();

HAnimJoint1392.children[0] = HAnimSegment1393;

let HAnimJoint1401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1401.name = "r_thumb3";
HAnimJoint1401.DEF = "hanim_r_thumb3";
HAnimJoint1401.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1401.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1402 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1402.name = "r_thumb_distal";
HAnimSegment1402.DEF = "hanim_r_thumb_distal";
//<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>
let TouchSensor1403 = browser.currentScene.createNode("TouchSensor");
TouchSensor1403.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1402.children = new MFNode();

HAnimSegment1402.children[0] = TouchSensor1403;

let Transform1404 = browser.currentScene.createNode("Transform");
Transform1404.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
let Shape1405 = browser.currentScene.createNode("Shape");
Shape1405.USE = "HAnimJointShape";
Transform1404.children = new MFNode();

Transform1404.children[0] = Shape1405;

HAnimSegment1402.children[1] = Transform1404;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
let Shape1406 = browser.currentScene.createNode("Shape");
let LineSet1407 = browser.currentScene.createNode("LineSet");
LineSet1407.vertexCount = new MFInt32(new int[2]);
let Coordinate1408 = browser.currentScene.createNode("Coordinate");
Coordinate1408.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1407.coord = Coordinate1408;

let ColorRGBA1409 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1409.USE = "HAnimSiteLineColorRGBA";
LineSet1407.color = ColorRGBA1409;

Shape1406.geometry = LineSet1407;

HAnimSegment1402.children[2] = Shape1406;

let HAnimSite1410 = browser.currentScene.createNode("HAnimSite");
HAnimSite1410.name = "r_thumb_distal_tip";
HAnimSite1410.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1410.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
let TouchSensor1411 = browser.currentScene.createNode("TouchSensor");
TouchSensor1411.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1410.children = new MFNode();

HAnimSite1410.children[0] = TouchSensor1411;

let Shape1412 = browser.currentScene.createNode("Shape");
Shape1412.USE = "HAnimSiteShape";
HAnimSite1410.children[1] = Shape1412;

HAnimSegment1402.children[3] = HAnimSite1410;

HAnimJoint1401.children = new MFNode();

HAnimJoint1401.children[0] = HAnimSegment1402;

HAnimJoint1392.children[1] = HAnimJoint1401;

HAnimJoint1383.children[1] = HAnimJoint1392;

HAnimJoint1327.children[1] = HAnimJoint1383;

let HAnimJoint1413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1413.name = "r_index0";
HAnimJoint1413.DEF = "hanim_r_index0";
HAnimJoint1413.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1413.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1414 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1414.name = "r_index_metacarpal";
HAnimSegment1414.DEF = "hanim_r_index_metacarpal";
//<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>
let TouchSensor1415 = browser.currentScene.createNode("TouchSensor");
TouchSensor1415.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1414.children = new MFNode();

HAnimSegment1414.children[0] = TouchSensor1415;

let Transform1416 = browser.currentScene.createNode("Transform");
Transform1416.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
let Shape1417 = browser.currentScene.createNode("Shape");
Shape1417.USE = "HAnimJointShape";
Transform1416.children = new MFNode();

Transform1416.children[0] = Shape1417;

HAnimSegment1414.children[1] = Transform1416;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
let Shape1418 = browser.currentScene.createNode("Shape");
let LineSet1419 = browser.currentScene.createNode("LineSet");
LineSet1419.vertexCount = new MFInt32(new int[2]);
let Coordinate1420 = browser.currentScene.createNode("Coordinate");
Coordinate1420.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1419.coord = Coordinate1420;

let ColorRGBA1421 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1421.USE = "HAnimSegmentLineColorRGBA";
LineSet1419.color = ColorRGBA1421;

Shape1418.geometry = LineSet1419;

HAnimSegment1414.children[2] = Shape1418;

HAnimJoint1413.children = new MFNode();

HAnimJoint1413.children[0] = HAnimSegment1414;

let HAnimJoint1422 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1422.name = "r_index1";
HAnimJoint1422.DEF = "hanim_r_index1";
HAnimJoint1422.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1422.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1423 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1423.name = "r_index_proximal";
HAnimSegment1423.DEF = "hanim_r_index_proximal";
//<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>
let TouchSensor1424 = browser.currentScene.createNode("TouchSensor");
TouchSensor1424.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1423.children = new MFNode();

HAnimSegment1423.children[0] = TouchSensor1424;

let Transform1425 = browser.currentScene.createNode("Transform");
Transform1425.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
let Shape1426 = browser.currentScene.createNode("Shape");
Shape1426.USE = "HAnimJointShape";
Transform1425.children = new MFNode();

Transform1425.children[0] = Shape1426;

HAnimSegment1423.children[1] = Transform1425;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
let Shape1427 = browser.currentScene.createNode("Shape");
let LineSet1428 = browser.currentScene.createNode("LineSet");
LineSet1428.vertexCount = new MFInt32(new int[2]);
let Coordinate1429 = browser.currentScene.createNode("Coordinate");
Coordinate1429.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1428.coord = Coordinate1429;

let ColorRGBA1430 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1430.USE = "HAnimSegmentLineColorRGBA";
LineSet1428.color = ColorRGBA1430;

Shape1427.geometry = LineSet1428;

HAnimSegment1423.children[2] = Shape1427;

HAnimJoint1422.children = new MFNode();

HAnimJoint1422.children[0] = HAnimSegment1423;

let HAnimJoint1431 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1431.name = "r_index2";
HAnimJoint1431.DEF = "hanim_r_index2";
HAnimJoint1431.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1431.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1432 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1432.name = "r_index_middle";
HAnimSegment1432.DEF = "hanim_r_index_middle";
//<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>
let TouchSensor1433 = browser.currentScene.createNode("TouchSensor");
TouchSensor1433.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1432.children = new MFNode();

HAnimSegment1432.children[0] = TouchSensor1433;

let Transform1434 = browser.currentScene.createNode("Transform");
Transform1434.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
let Shape1435 = browser.currentScene.createNode("Shape");
Shape1435.USE = "HAnimJointShape";
Transform1434.children = new MFNode();

Transform1434.children[0] = Shape1435;

HAnimSegment1432.children[1] = Transform1434;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
let Shape1436 = browser.currentScene.createNode("Shape");
let LineSet1437 = browser.currentScene.createNode("LineSet");
LineSet1437.vertexCount = new MFInt32(new int[2]);
let Coordinate1438 = browser.currentScene.createNode("Coordinate");
Coordinate1438.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1437.coord = Coordinate1438;

let ColorRGBA1439 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1439.USE = "HAnimSegmentLineColorRGBA";
LineSet1437.color = ColorRGBA1439;

Shape1436.geometry = LineSet1437;

HAnimSegment1432.children[2] = Shape1436;

HAnimJoint1431.children = new MFNode();

HAnimJoint1431.children[0] = HAnimSegment1432;

let HAnimJoint1440 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1440.name = "r_index3";
HAnimJoint1440.DEF = "hanim_r_index3";
HAnimJoint1440.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1440.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1441 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1441.name = "r_index_distal";
HAnimSegment1441.DEF = "hanim_r_index_distal";
//<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>
let TouchSensor1442 = browser.currentScene.createNode("TouchSensor");
TouchSensor1442.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1441.children = new MFNode();

HAnimSegment1441.children[0] = TouchSensor1442;

let Transform1443 = browser.currentScene.createNode("Transform");
Transform1443.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
let Shape1444 = browser.currentScene.createNode("Shape");
Shape1444.USE = "HAnimJointShape";
Transform1443.children = new MFNode();

Transform1443.children[0] = Shape1444;

HAnimSegment1441.children[1] = Transform1443;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
let Shape1445 = browser.currentScene.createNode("Shape");
let LineSet1446 = browser.currentScene.createNode("LineSet");
LineSet1446.vertexCount = new MFInt32(new int[2]);
let Coordinate1447 = browser.currentScene.createNode("Coordinate");
Coordinate1447.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1446.coord = Coordinate1447;

let ColorRGBA1448 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1448.USE = "HAnimSiteLineColorRGBA";
LineSet1446.color = ColorRGBA1448;

Shape1445.geometry = LineSet1446;

HAnimSegment1441.children[2] = Shape1445;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
let Shape1449 = browser.currentScene.createNode("Shape");
let LineSet1450 = browser.currentScene.createNode("LineSet");
LineSet1450.vertexCount = new MFInt32(new int[2]);
let Coordinate1451 = browser.currentScene.createNode("Coordinate");
Coordinate1451.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1450.coord = Coordinate1451;

let ColorRGBA1452 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1452.USE = "HAnimSiteLineColorRGBA";
LineSet1450.color = ColorRGBA1452;

Shape1449.geometry = LineSet1450;

HAnimSegment1441.children[3] = Shape1449;

let HAnimSite1453 = browser.currentScene.createNode("HAnimSite");
HAnimSite1453.name = "r_index_distal_tip";
HAnimSite1453.DEF = "hanim_r_index_distal_tip";
HAnimSite1453.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
let TouchSensor1454 = browser.currentScene.createNode("TouchSensor");
TouchSensor1454.description = "HAnimSite r_index_distal_tip";
HAnimSite1453.children = new MFNode();

HAnimSite1453.children[0] = TouchSensor1454;

let Shape1455 = browser.currentScene.createNode("Shape");
Shape1455.USE = "HAnimSiteShape";
HAnimSite1453.children[1] = Shape1455;

HAnimSegment1441.children[4] = HAnimSite1453;

let HAnimSite1456 = browser.currentScene.createNode("HAnimSite");
HAnimSite1456.name = "r_dactylion_pt";
HAnimSite1456.DEF = "hanim_r_dactylion_pt";
HAnimSite1456.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
let TouchSensor1457 = browser.currentScene.createNode("TouchSensor");
TouchSensor1457.description = "HAnimSite r_dactylion";
HAnimSite1456.children = new MFNode();

HAnimSite1456.children[0] = TouchSensor1457;

let Shape1458 = browser.currentScene.createNode("Shape");
Shape1458.USE = "HAnimSiteShape";
HAnimSite1456.children[1] = Shape1458;

HAnimSegment1441.children[5] = HAnimSite1456;

HAnimJoint1440.children = new MFNode();

HAnimJoint1440.children[0] = HAnimSegment1441;

HAnimJoint1431.children[1] = HAnimJoint1440;

HAnimJoint1422.children[1] = HAnimJoint1431;

HAnimJoint1413.children[1] = HAnimJoint1422;

HAnimJoint1327.children[2] = HAnimJoint1413;

let HAnimJoint1459 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1459.name = "r_middle0";
HAnimJoint1459.DEF = "hanim_r_middle0";
HAnimJoint1459.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1459.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1460.name = "r_middle_metacarpal";
HAnimSegment1460.DEF = "hanim_r_middle_metacarpal";
//<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>
let TouchSensor1461 = browser.currentScene.createNode("TouchSensor");
TouchSensor1461.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1460.children = new MFNode();

HAnimSegment1460.children[0] = TouchSensor1461;

let Transform1462 = browser.currentScene.createNode("Transform");
Transform1462.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
let Shape1463 = browser.currentScene.createNode("Shape");
Shape1463.USE = "HAnimJointShape";
Transform1462.children = new MFNode();

Transform1462.children[0] = Shape1463;

HAnimSegment1460.children[1] = Transform1462;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
let Shape1464 = browser.currentScene.createNode("Shape");
let LineSet1465 = browser.currentScene.createNode("LineSet");
LineSet1465.vertexCount = new MFInt32(new int[2]);
let Coordinate1466 = browser.currentScene.createNode("Coordinate");
Coordinate1466.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1465.coord = Coordinate1466;

let ColorRGBA1467 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1467.USE = "HAnimSegmentLineColorRGBA";
LineSet1465.color = ColorRGBA1467;

Shape1464.geometry = LineSet1465;

HAnimSegment1460.children[2] = Shape1464;

HAnimJoint1459.children = new MFNode();

HAnimJoint1459.children[0] = HAnimSegment1460;

let HAnimJoint1468 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1468.name = "r_middle1";
HAnimJoint1468.DEF = "hanim_r_middle1";
HAnimJoint1468.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1468.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1469.name = "r_middle_proximal";
HAnimSegment1469.DEF = "hanim_r_middle_proximal";
//<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>
let TouchSensor1470 = browser.currentScene.createNode("TouchSensor");
TouchSensor1470.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1469.children = new MFNode();

HAnimSegment1469.children[0] = TouchSensor1470;

let Transform1471 = browser.currentScene.createNode("Transform");
Transform1471.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
let Shape1472 = browser.currentScene.createNode("Shape");
Shape1472.USE = "HAnimJointShape";
Transform1471.children = new MFNode();

Transform1471.children[0] = Shape1472;

HAnimSegment1469.children[1] = Transform1471;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
let Shape1473 = browser.currentScene.createNode("Shape");
let LineSet1474 = browser.currentScene.createNode("LineSet");
LineSet1474.vertexCount = new MFInt32(new int[2]);
let Coordinate1475 = browser.currentScene.createNode("Coordinate");
Coordinate1475.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1474.coord = Coordinate1475;

let ColorRGBA1476 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1476.USE = "HAnimSegmentLineColorRGBA";
LineSet1474.color = ColorRGBA1476;

Shape1473.geometry = LineSet1474;

HAnimSegment1469.children[2] = Shape1473;

HAnimJoint1468.children = new MFNode();

HAnimJoint1468.children[0] = HAnimSegment1469;

let HAnimJoint1477 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1477.name = "r_middle2";
HAnimJoint1477.DEF = "hanim_r_middle2";
HAnimJoint1477.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1477.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1478.name = "r_middle_middle";
HAnimSegment1478.DEF = "hanim_r_middle_middle";
//<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>
let TouchSensor1479 = browser.currentScene.createNode("TouchSensor");
TouchSensor1479.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1478.children = new MFNode();

HAnimSegment1478.children[0] = TouchSensor1479;

let Transform1480 = browser.currentScene.createNode("Transform");
Transform1480.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
let Shape1481 = browser.currentScene.createNode("Shape");
Shape1481.USE = "HAnimJointShape";
Transform1480.children = new MFNode();

Transform1480.children[0] = Shape1481;

HAnimSegment1478.children[1] = Transform1480;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
let Shape1482 = browser.currentScene.createNode("Shape");
let LineSet1483 = browser.currentScene.createNode("LineSet");
LineSet1483.vertexCount = new MFInt32(new int[2]);
let Coordinate1484 = browser.currentScene.createNode("Coordinate");
Coordinate1484.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1483.coord = Coordinate1484;

let ColorRGBA1485 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1485.USE = "HAnimSegmentLineColorRGBA";
LineSet1483.color = ColorRGBA1485;

Shape1482.geometry = LineSet1483;

HAnimSegment1478.children[2] = Shape1482;

HAnimJoint1477.children = new MFNode();

HAnimJoint1477.children[0] = HAnimSegment1478;

let HAnimJoint1486 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1486.name = "r_middle3";
HAnimJoint1486.DEF = "hanim_r_middle3";
HAnimJoint1486.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1486.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1487.name = "r_middle_distal";
HAnimSegment1487.DEF = "hanim_r_middle_distal";
//<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>
let TouchSensor1488 = browser.currentScene.createNode("TouchSensor");
TouchSensor1488.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1487.children = new MFNode();

HAnimSegment1487.children[0] = TouchSensor1488;

let Transform1489 = browser.currentScene.createNode("Transform");
Transform1489.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
let Shape1490 = browser.currentScene.createNode("Shape");
Shape1490.USE = "HAnimJointShape";
Transform1489.children = new MFNode();

Transform1489.children[0] = Shape1490;

HAnimSegment1487.children[1] = Transform1489;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
let Shape1491 = browser.currentScene.createNode("Shape");
let LineSet1492 = browser.currentScene.createNode("LineSet");
LineSet1492.vertexCount = new MFInt32(new int[2]);
let Coordinate1493 = browser.currentScene.createNode("Coordinate");
Coordinate1493.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1492.coord = Coordinate1493;

let ColorRGBA1494 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1494.USE = "HAnimSiteLineColorRGBA";
LineSet1492.color = ColorRGBA1494;

Shape1491.geometry = LineSet1492;

HAnimSegment1487.children[2] = Shape1491;

let HAnimSite1495 = browser.currentScene.createNode("HAnimSite");
HAnimSite1495.name = "r_middle_distal_tip";
HAnimSite1495.DEF = "hanim_r_middle_distal_tip";
HAnimSite1495.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
let TouchSensor1496 = browser.currentScene.createNode("TouchSensor");
TouchSensor1496.description = "HAnimSite r_middle_distal_tip";
HAnimSite1495.children = new MFNode();

HAnimSite1495.children[0] = TouchSensor1496;

let Shape1497 = browser.currentScene.createNode("Shape");
Shape1497.USE = "HAnimSiteShape";
HAnimSite1495.children[1] = Shape1497;

HAnimSegment1487.children[3] = HAnimSite1495;

HAnimJoint1486.children = new MFNode();

HAnimJoint1486.children[0] = HAnimSegment1487;

HAnimJoint1477.children[1] = HAnimJoint1486;

HAnimJoint1468.children[1] = HAnimJoint1477;

HAnimJoint1459.children[1] = HAnimJoint1468;

HAnimJoint1327.children[3] = HAnimJoint1459;

let HAnimJoint1498 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1498.name = "r_ring0";
HAnimJoint1498.DEF = "hanim_r_ring0";
HAnimJoint1498.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1498.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1499.name = "r_ring_metacarpal";
HAnimSegment1499.DEF = "hanim_r_ring_metacarpal";
//<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>
let TouchSensor1500 = browser.currentScene.createNode("TouchSensor");
TouchSensor1500.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1499.children = new MFNode();

HAnimSegment1499.children[0] = TouchSensor1500;

let Transform1501 = browser.currentScene.createNode("Transform");
Transform1501.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
let Shape1502 = browser.currentScene.createNode("Shape");
Shape1502.USE = "HAnimJointShape";
Transform1501.children = new MFNode();

Transform1501.children[0] = Shape1502;

HAnimSegment1499.children[1] = Transform1501;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
let Shape1503 = browser.currentScene.createNode("Shape");
let LineSet1504 = browser.currentScene.createNode("LineSet");
LineSet1504.vertexCount = new MFInt32(new int[2]);
let Coordinate1505 = browser.currentScene.createNode("Coordinate");
Coordinate1505.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1504.coord = Coordinate1505;

let ColorRGBA1506 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1506.USE = "HAnimSegmentLineColorRGBA";
LineSet1504.color = ColorRGBA1506;

Shape1503.geometry = LineSet1504;

HAnimSegment1499.children[2] = Shape1503;

HAnimJoint1498.children = new MFNode();

HAnimJoint1498.children[0] = HAnimSegment1499;

let HAnimJoint1507 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1507.name = "r_ring1";
HAnimJoint1507.DEF = "hanim_r_ring1";
HAnimJoint1507.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1507.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1508.name = "r_ring_proximal";
HAnimSegment1508.DEF = "hanim_r_ring_proximal";
//<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>
let TouchSensor1509 = browser.currentScene.createNode("TouchSensor");
TouchSensor1509.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1508.children = new MFNode();

HAnimSegment1508.children[0] = TouchSensor1509;

let Transform1510 = browser.currentScene.createNode("Transform");
Transform1510.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
let Shape1511 = browser.currentScene.createNode("Shape");
Shape1511.USE = "HAnimJointShape";
Transform1510.children = new MFNode();

Transform1510.children[0] = Shape1511;

HAnimSegment1508.children[1] = Transform1510;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
let Shape1512 = browser.currentScene.createNode("Shape");
let LineSet1513 = browser.currentScene.createNode("LineSet");
LineSet1513.vertexCount = new MFInt32(new int[2]);
let Coordinate1514 = browser.currentScene.createNode("Coordinate");
Coordinate1514.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1513.coord = Coordinate1514;

let ColorRGBA1515 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1515.USE = "HAnimSegmentLineColorRGBA";
LineSet1513.color = ColorRGBA1515;

Shape1512.geometry = LineSet1513;

HAnimSegment1508.children[2] = Shape1512;

HAnimJoint1507.children = new MFNode();

HAnimJoint1507.children[0] = HAnimSegment1508;

let HAnimJoint1516 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1516.name = "r_ring2";
HAnimJoint1516.DEF = "hanim_r_ring2";
HAnimJoint1516.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1516.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1517.name = "r_ring_middle";
HAnimSegment1517.DEF = "hanim_r_ring_middle";
//<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>
let TouchSensor1518 = browser.currentScene.createNode("TouchSensor");
TouchSensor1518.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1517.children = new MFNode();

HAnimSegment1517.children[0] = TouchSensor1518;

let Transform1519 = browser.currentScene.createNode("Transform");
Transform1519.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
let Shape1520 = browser.currentScene.createNode("Shape");
Shape1520.USE = "HAnimJointShape";
Transform1519.children = new MFNode();

Transform1519.children[0] = Shape1520;

HAnimSegment1517.children[1] = Transform1519;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
let Shape1521 = browser.currentScene.createNode("Shape");
let LineSet1522 = browser.currentScene.createNode("LineSet");
LineSet1522.vertexCount = new MFInt32(new int[2]);
let Coordinate1523 = browser.currentScene.createNode("Coordinate");
Coordinate1523.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1522.coord = Coordinate1523;

let ColorRGBA1524 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1524.USE = "HAnimSegmentLineColorRGBA";
LineSet1522.color = ColorRGBA1524;

Shape1521.geometry = LineSet1522;

HAnimSegment1517.children[2] = Shape1521;

HAnimJoint1516.children = new MFNode();

HAnimJoint1516.children[0] = HAnimSegment1517;

let HAnimJoint1525 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1525.name = "r_ring3";
HAnimJoint1525.DEF = "hanim_r_ring3";
HAnimJoint1525.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1525.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1526 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1526.name = "r_ring_distal";
HAnimSegment1526.DEF = "hanim_r_ring_distal";
//<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>
let TouchSensor1527 = browser.currentScene.createNode("TouchSensor");
TouchSensor1527.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1526.children = new MFNode();

HAnimSegment1526.children[0] = TouchSensor1527;

let Transform1528 = browser.currentScene.createNode("Transform");
Transform1528.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
let Shape1529 = browser.currentScene.createNode("Shape");
Shape1529.USE = "HAnimJointShape";
Transform1528.children = new MFNode();

Transform1528.children[0] = Shape1529;

HAnimSegment1526.children[1] = Transform1528;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
let Shape1530 = browser.currentScene.createNode("Shape");
let LineSet1531 = browser.currentScene.createNode("LineSet");
LineSet1531.vertexCount = new MFInt32(new int[2]);
let Coordinate1532 = browser.currentScene.createNode("Coordinate");
Coordinate1532.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1531.coord = Coordinate1532;

let ColorRGBA1533 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1533.USE = "HAnimSiteLineColorRGBA";
LineSet1531.color = ColorRGBA1533;

Shape1530.geometry = LineSet1531;

HAnimSegment1526.children[2] = Shape1530;

let HAnimSite1534 = browser.currentScene.createNode("HAnimSite");
HAnimSite1534.name = "r_ring_distal_tip";
HAnimSite1534.DEF = "hanim_r_ring_distal_tip";
HAnimSite1534.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
let TouchSensor1535 = browser.currentScene.createNode("TouchSensor");
TouchSensor1535.description = "HAnimSite r_ring_distal_tip";
HAnimSite1534.children = new MFNode();

HAnimSite1534.children[0] = TouchSensor1535;

let Shape1536 = browser.currentScene.createNode("Shape");
Shape1536.USE = "HAnimSiteShape";
HAnimSite1534.children[1] = Shape1536;

HAnimSegment1526.children[3] = HAnimSite1534;

HAnimJoint1525.children = new MFNode();

HAnimJoint1525.children[0] = HAnimSegment1526;

HAnimJoint1516.children[1] = HAnimJoint1525;

HAnimJoint1507.children[1] = HAnimJoint1516;

HAnimJoint1498.children[1] = HAnimJoint1507;

HAnimJoint1327.children[4] = HAnimJoint1498;

let HAnimJoint1537 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1537.name = "r_pinky0";
HAnimJoint1537.DEF = "hanim_r_pinky0";
HAnimJoint1537.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1537.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1538 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1538.name = "r_pinky_metacarpal";
HAnimSegment1538.DEF = "hanim_r_pinky_metacarpal";
//<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>
let TouchSensor1539 = browser.currentScene.createNode("TouchSensor");
TouchSensor1539.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1538.children = new MFNode();

HAnimSegment1538.children[0] = TouchSensor1539;

let Transform1540 = browser.currentScene.createNode("Transform");
Transform1540.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
let Shape1541 = browser.currentScene.createNode("Shape");
Shape1541.USE = "HAnimJointShape";
Transform1540.children = new MFNode();

Transform1540.children[0] = Shape1541;

HAnimSegment1538.children[1] = Transform1540;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
let Shape1542 = browser.currentScene.createNode("Shape");
let LineSet1543 = browser.currentScene.createNode("LineSet");
LineSet1543.vertexCount = new MFInt32(new int[2]);
let Coordinate1544 = browser.currentScene.createNode("Coordinate");
Coordinate1544.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1543.coord = Coordinate1544;

let ColorRGBA1545 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1545.USE = "HAnimSegmentLineColorRGBA";
LineSet1543.color = ColorRGBA1545;

Shape1542.geometry = LineSet1543;

HAnimSegment1538.children[2] = Shape1542;

HAnimJoint1537.children = new MFNode();

HAnimJoint1537.children[0] = HAnimSegment1538;

let HAnimJoint1546 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1546.name = "r_pinky1";
HAnimJoint1546.DEF = "hanim_r_pinky1";
HAnimJoint1546.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1546.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1547 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1547.name = "r_pinky_proximal";
HAnimSegment1547.DEF = "hanim_r_pinky_proximal";
//<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>
let TouchSensor1548 = browser.currentScene.createNode("TouchSensor");
TouchSensor1548.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1547.children = new MFNode();

HAnimSegment1547.children[0] = TouchSensor1548;

let Transform1549 = browser.currentScene.createNode("Transform");
Transform1549.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
let Shape1550 = browser.currentScene.createNode("Shape");
Shape1550.USE = "HAnimJointShape";
Transform1549.children = new MFNode();

Transform1549.children[0] = Shape1550;

HAnimSegment1547.children[1] = Transform1549;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
let Shape1551 = browser.currentScene.createNode("Shape");
let LineSet1552 = browser.currentScene.createNode("LineSet");
LineSet1552.vertexCount = new MFInt32(new int[2]);
let Coordinate1553 = browser.currentScene.createNode("Coordinate");
Coordinate1553.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1552.coord = Coordinate1553;

let ColorRGBA1554 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1554.USE = "HAnimSegmentLineColorRGBA";
LineSet1552.color = ColorRGBA1554;

Shape1551.geometry = LineSet1552;

HAnimSegment1547.children[2] = Shape1551;

HAnimJoint1546.children = new MFNode();

HAnimJoint1546.children[0] = HAnimSegment1547;

let HAnimJoint1555 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1555.name = "r_pinky2";
HAnimJoint1555.DEF = "hanim_r_pinky2";
HAnimJoint1555.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1555.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1556 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1556.name = "r_pinky_middle";
HAnimSegment1556.DEF = "hanim_r_pinky_middle";
//<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>
let TouchSensor1557 = browser.currentScene.createNode("TouchSensor");
TouchSensor1557.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1556.children = new MFNode();

HAnimSegment1556.children[0] = TouchSensor1557;

let Transform1558 = browser.currentScene.createNode("Transform");
Transform1558.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
let Shape1559 = browser.currentScene.createNode("Shape");
Shape1559.USE = "HAnimJointShape";
Transform1558.children = new MFNode();

Transform1558.children[0] = Shape1559;

HAnimSegment1556.children[1] = Transform1558;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
let Shape1560 = browser.currentScene.createNode("Shape");
let LineSet1561 = browser.currentScene.createNode("LineSet");
LineSet1561.vertexCount = new MFInt32(new int[2]);
let Coordinate1562 = browser.currentScene.createNode("Coordinate");
Coordinate1562.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1561.coord = Coordinate1562;

let ColorRGBA1563 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1563.USE = "HAnimSegmentLineColorRGBA";
LineSet1561.color = ColorRGBA1563;

Shape1560.geometry = LineSet1561;

HAnimSegment1556.children[2] = Shape1560;

HAnimJoint1555.children = new MFNode();

HAnimJoint1555.children[0] = HAnimSegment1556;

let HAnimJoint1564 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1564.name = "r_pinky3";
HAnimJoint1564.DEF = "hanim_r_pinky3";
HAnimJoint1564.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1564.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1565 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1565.name = "r_pinky_distal";
HAnimSegment1565.DEF = "hanim_r_pinky_distal";
//<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>
let TouchSensor1566 = browser.currentScene.createNode("TouchSensor");
TouchSensor1566.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1565.children = new MFNode();

HAnimSegment1565.children[0] = TouchSensor1566;

let Transform1567 = browser.currentScene.createNode("Transform");
Transform1567.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
let Shape1568 = browser.currentScene.createNode("Shape");
Shape1568.USE = "HAnimJointShape";
Transform1567.children = new MFNode();

Transform1567.children[0] = Shape1568;

HAnimSegment1565.children[1] = Transform1567;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
let Shape1569 = browser.currentScene.createNode("Shape");
let LineSet1570 = browser.currentScene.createNode("LineSet");
LineSet1570.vertexCount = new MFInt32(new int[2]);
let Coordinate1571 = browser.currentScene.createNode("Coordinate");
Coordinate1571.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1570.coord = Coordinate1571;

let ColorRGBA1572 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1572.USE = "HAnimSiteLineColorRGBA";
LineSet1570.color = ColorRGBA1572;

Shape1569.geometry = LineSet1570;

HAnimSegment1565.children[2] = Shape1569;

let HAnimSite1573 = browser.currentScene.createNode("HAnimSite");
HAnimSite1573.name = "r_pinky_distal_tip";
HAnimSite1573.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1573.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
let TouchSensor1574 = browser.currentScene.createNode("TouchSensor");
TouchSensor1574.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1573.children = new MFNode();

HAnimSite1573.children[0] = TouchSensor1574;

let Shape1575 = browser.currentScene.createNode("Shape");
Shape1575.USE = "HAnimSiteShape";
HAnimSite1573.children[1] = Shape1575;

HAnimSegment1565.children[3] = HAnimSite1573;

HAnimJoint1564.children = new MFNode();

HAnimJoint1564.children[0] = HAnimSegment1565;

HAnimJoint1555.children[1] = HAnimJoint1564;

HAnimJoint1546.children[1] = HAnimJoint1555;

HAnimJoint1537.children[1] = HAnimJoint1546;

HAnimJoint1327.children[5] = HAnimJoint1537;

HAnimJoint1290.children[1] = HAnimJoint1327;

HAnimJoint1274.children[1] = HAnimJoint1290;

HAnimJoint1265.children[1] = HAnimJoint1274;

HAnimJoint1228.children[1] = HAnimJoint1265;

HAnimJoint596.children[3] = HAnimJoint1228;

HAnimJoint587.children[1] = HAnimJoint596;

HAnimJoint578.children[1] = HAnimJoint587;

HAnimJoint569.children[1] = HAnimJoint578;

HAnimJoint560.children[1] = HAnimJoint569;

HAnimJoint551.children[1] = HAnimJoint560;

HAnimJoint542.children[1] = HAnimJoint551;

HAnimJoint533.children[1] = HAnimJoint542;

HAnimJoint510.children[1] = HAnimJoint533;

HAnimJoint494.children[1] = HAnimJoint510;

HAnimJoint485.children[1] = HAnimJoint494;

HAnimJoint476.children[1] = HAnimJoint485;

HAnimJoint467.children[1] = HAnimJoint476;

HAnimJoint437.children[1] = HAnimJoint467;

HAnimJoint428.children[1] = HAnimJoint437;

HAnimJoint419.children[1] = HAnimJoint428;

HAnimJoint396.children[1] = HAnimJoint419;

HAnimJoint46.children[2] = HAnimJoint396;

HAnimHumanoid45.joints = new MFNode();

HAnimHumanoid45.joints[0] = HAnimJoint46;

//USE nodes for inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes for viewing the humanoid without being affected by body motion
let HAnimSite1576 = browser.currentScene.createNode("HAnimSite");
HAnimSite1576.name = "l_inclined_view";
HAnimSite1576.DEF = "hanim_l_inclined_view";
HAnimSite1576.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1576.translation = new SFVec3f(new float[1.62,1.05,2.06]);
let Viewpoint1577 = browser.currentScene.createNode("Viewpoint");
Viewpoint1577.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1577.description = "left inclined";
Viewpoint1577.position = new SFVec3f(new float[0,0,0]);
HAnimSite1576.children = new MFNode();

HAnimSite1576.children[0] = Viewpoint1577;

//HAnimSite/Viewpoint visualization shape
let Anchor1578 = browser.currentScene.createNode("Anchor");
Anchor1578.description = "HAnimSite Viewpoint hanim_l_inclined_view";
Anchor1578.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
let LOD1579 = browser.currentScene.createNode("LOD");
LOD1579.forceTransitions = True;
LOD1579.range = new MFFloat(new float[0.04]);
let WorldInfo1580 = browser.currentScene.createNode("WorldInfo");
WorldInfo1580.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1579.children = new MFNode();

LOD1579.children[0] = WorldInfo1580;

let Shape1581 = browser.currentScene.createNode("Shape");
Shape1581.USE = "HAnimSiteViewpointShape";
LOD1579.children[1] = Shape1581;

Anchor1578.children = new MFNode();

Anchor1578.children[0] = LOD1579;

HAnimSite1576.children[1] = Anchor1578;

HAnimHumanoid45.viewpoints[1] = HAnimSite1576;

let HAnimSite1582 = browser.currentScene.createNode("HAnimSite");
HAnimSite1582.name = "r_inclined_view";
HAnimSite1582.DEF = "hanim_r_inclined_view";
HAnimSite1582.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1582.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
let Viewpoint1583 = browser.currentScene.createNode("Viewpoint");
Viewpoint1583.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1583.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1583.description = "right inclined";
Viewpoint1583.position = new SFVec3f(new float[0,0,0]);
HAnimSite1582.children = new MFNode();

HAnimSite1582.children[0] = Viewpoint1583;

//HAnimSite/Viewpoint visualization shape
let Anchor1584 = browser.currentScene.createNode("Anchor");
Anchor1584.description = "HAnimSite Viewpoint hanim_r_inclined_view";
Anchor1584.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
let LOD1585 = browser.currentScene.createNode("LOD");
LOD1585.forceTransitions = True;
LOD1585.range = new MFFloat(new float[0.04]);
let WorldInfo1586 = browser.currentScene.createNode("WorldInfo");
WorldInfo1586.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1585.children = new MFNode();

LOD1585.children[0] = WorldInfo1586;

let Shape1587 = browser.currentScene.createNode("Shape");
Shape1587.USE = "HAnimSiteViewpointShape";
LOD1585.children[1] = Shape1587;

Anchor1584.children = new MFNode();

Anchor1584.children[0] = LOD1585;

HAnimSite1582.children[1] = Anchor1584;

HAnimHumanoid45.viewpoints[2] = HAnimSite1582;

let HAnimSite1588 = browser.currentScene.createNode("HAnimSite");
HAnimSite1588.name = "front_view";
HAnimSite1588.DEF = "hanim_front_view";
HAnimSite1588.translation = new SFVec3f(new float[0,0.85,2.58]);
let Viewpoint1589 = browser.currentScene.createNode("Viewpoint");
Viewpoint1589.DEF = "hanim_front_viewpoint";
Viewpoint1589.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1589.description = "front";
Viewpoint1589.position = new SFVec3f(new float[0,0,0]);
HAnimSite1588.children = new MFNode();

HAnimSite1588.children[0] = Viewpoint1589;

//HAnimSite/Viewpoint visualization shape
let Anchor1590 = browser.currentScene.createNode("Anchor");
Anchor1590.description = "HAnimSite Viewpoint hanim_front_view";
Anchor1590.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
let LOD1591 = browser.currentScene.createNode("LOD");
LOD1591.forceTransitions = True;
LOD1591.range = new MFFloat(new float[0.04]);
let WorldInfo1592 = browser.currentScene.createNode("WorldInfo");
WorldInfo1592.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1591.children = new MFNode();

LOD1591.children[0] = WorldInfo1592;

let Shape1593 = browser.currentScene.createNode("Shape");
Shape1593.USE = "HAnimSiteViewpointShape";
LOD1591.children[1] = Shape1593;

Anchor1590.children = new MFNode();

Anchor1590.children[0] = LOD1591;

HAnimSite1588.children[1] = Anchor1590;

HAnimHumanoid45.viewpoints[3] = HAnimSite1588;

let HAnimSite1594 = browser.currentScene.createNode("HAnimSite");
HAnimSite1594.name = "back_view";
HAnimSite1594.DEF = "hanim_back_view";
HAnimSite1594.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1594.translation = new SFVec3f(new float[0,0.85,-2.58]);
let Viewpoint1595 = browser.currentScene.createNode("Viewpoint");
Viewpoint1595.DEF = "hanim_back_viewpoint";
Viewpoint1595.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1595.description = "back";
Viewpoint1595.position = new SFVec3f(new float[0,0,0]);
HAnimSite1594.children = new MFNode();

HAnimSite1594.children[0] = Viewpoint1595;

//HAnimSite/Viewpoint visualization shape
let Anchor1596 = browser.currentScene.createNode("Anchor");
Anchor1596.description = "HAnimSite Viewpoint hanim_back_view";
Anchor1596.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
let LOD1597 = browser.currentScene.createNode("LOD");
LOD1597.forceTransitions = True;
LOD1597.range = new MFFloat(new float[0.04]);
let WorldInfo1598 = browser.currentScene.createNode("WorldInfo");
WorldInfo1598.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1597.children = new MFNode();

LOD1597.children[0] = WorldInfo1598;

let Shape1599 = browser.currentScene.createNode("Shape");
Shape1599.USE = "HAnimSiteViewpointShape";
LOD1597.children[1] = Shape1599;

Anchor1596.children = new MFNode();

Anchor1596.children[0] = LOD1597;

HAnimSite1594.children[1] = Anchor1596;

HAnimHumanoid45.viewpoints[4] = HAnimSite1594;

let HAnimSite1600 = browser.currentScene.createNode("HAnimSite");
HAnimSite1600.name = "l_side_view";
HAnimSite1600.DEF = "hanim_l_side_view";
HAnimSite1600.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1600.translation = new SFVec3f(new float[2.6,0.854,0]);
let Viewpoint1601 = browser.currentScene.createNode("Viewpoint");
Viewpoint1601.DEF = "hanim_l_side_viewpoint";
Viewpoint1601.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1601.description = "left side";
Viewpoint1601.position = new SFVec3f(new float[0,0,0]);
HAnimSite1600.children = new MFNode();

HAnimSite1600.children[0] = Viewpoint1601;

//HAnimSite/Viewpoint visualization shape
let Anchor1602 = browser.currentScene.createNode("Anchor");
Anchor1602.description = "HAnimSite Viewpoint hanim_l_side_view";
Anchor1602.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
let LOD1603 = browser.currentScene.createNode("LOD");
LOD1603.forceTransitions = True;
LOD1603.range = new MFFloat(new float[0.04]);
let WorldInfo1604 = browser.currentScene.createNode("WorldInfo");
WorldInfo1604.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1603.children = new MFNode();

LOD1603.children[0] = WorldInfo1604;

let Shape1605 = browser.currentScene.createNode("Shape");
Shape1605.USE = "HAnimSiteViewpointShape";
LOD1603.children[1] = Shape1605;

Anchor1602.children = new MFNode();

Anchor1602.children[0] = LOD1603;

HAnimSite1600.children[1] = Anchor1602;

HAnimHumanoid45.viewpoints[5] = HAnimSite1600;

let HAnimSite1606 = browser.currentScene.createNode("HAnimSite");
HAnimSite1606.name = "Top_view";
HAnimSite1606.DEF = "hanim_Top_view";
HAnimSite1606.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1606.translation = new SFVec3f(new float[0,3.5,0]);
let Viewpoint1607 = browser.currentScene.createNode("Viewpoint");
Viewpoint1607.DEF = "hanim_Top_viewpoint";
Viewpoint1607.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1607.description = "Top";
Viewpoint1607.position = new SFVec3f(new float[0,0,0]);
HAnimSite1606.children = new MFNode();

HAnimSite1606.children[0] = Viewpoint1607;

//HAnimSite/Viewpoint visualization shape
let Anchor1608 = browser.currentScene.createNode("Anchor");
Anchor1608.description = "HAnimSite Viewpoint hanim_Top_view";
Anchor1608.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
let LOD1609 = browser.currentScene.createNode("LOD");
LOD1609.forceTransitions = True;
LOD1609.range = new MFFloat(new float[0.04]);
let WorldInfo1610 = browser.currentScene.createNode("WorldInfo");
WorldInfo1610.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1609.children = new MFNode();

LOD1609.children[0] = WorldInfo1610;

let Shape1611 = browser.currentScene.createNode("Shape");
Shape1611.USE = "HAnimSiteViewpointShape";
LOD1609.children[1] = Shape1611;

Anchor1608.children = new MFNode();

Anchor1608.children[0] = LOD1609;

HAnimSite1606.children[1] = Anchor1608;

HAnimHumanoid45.viewpoints[6] = HAnimSite1606;

let HAnimSite1612 = browser.currentScene.createNode("HAnimSite");
HAnimSite1612.name = "front_close_view";
HAnimSite1612.DEF = "hanim_front_close_view";
HAnimSite1612.translation = new SFVec3f(new float[0,0.854,1.575]);
let Viewpoint1613 = browser.currentScene.createNode("Viewpoint");
Viewpoint1613.DEF = "hanim_front_close_viewpoint";
Viewpoint1613.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1613.description = "front close";
Viewpoint1613.position = new SFVec3f(new float[0,0,0]);
HAnimSite1612.children = new MFNode();

HAnimSite1612.children[0] = Viewpoint1613;

//HAnimSite/Viewpoint visualization shape
let Anchor1614 = browser.currentScene.createNode("Anchor");
Anchor1614.description = "HAnimSite Viewpoint hanim_front_close_view";
Anchor1614.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
let LOD1615 = browser.currentScene.createNode("LOD");
LOD1615.forceTransitions = True;
LOD1615.range = new MFFloat(new float[0.04]);
let WorldInfo1616 = browser.currentScene.createNode("WorldInfo");
WorldInfo1616.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1615.children = new MFNode();

LOD1615.children[0] = WorldInfo1616;

let Shape1617 = browser.currentScene.createNode("Shape");
Shape1617.USE = "HAnimSiteViewpointShape";
LOD1615.children[1] = Shape1617;

Anchor1614.children = new MFNode();

Anchor1614.children[0] = LOD1615;

HAnimSite1612.children[1] = Anchor1614;

HAnimHumanoid45.viewpoints[7] = HAnimSite1612;

let HAnimSite1618 = browser.currentScene.createNode("HAnimSite");
HAnimSite1618.name = "side_close_view";
HAnimSite1618.DEF = "hanim_side_close_view";
HAnimSite1618.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1618.translation = new SFVec3f(new float[1.56,0.854,0]);
let Viewpoint1619 = browser.currentScene.createNode("Viewpoint");
Viewpoint1619.DEF = "hanim_side_close_viewpoint";
Viewpoint1619.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1619.description = "side close";
Viewpoint1619.position = new SFVec3f(new float[0,0,0]);
HAnimSite1618.children = new MFNode();

HAnimSite1618.children[0] = Viewpoint1619;

//HAnimSite/Viewpoint visualization shape
let Anchor1620 = browser.currentScene.createNode("Anchor");
Anchor1620.description = "HAnimSite Viewpoint hanim_side_close_view";
Anchor1620.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
let LOD1621 = browser.currentScene.createNode("LOD");
LOD1621.forceTransitions = True;
LOD1621.range = new MFFloat(new float[0.04]);
let WorldInfo1622 = browser.currentScene.createNode("WorldInfo");
WorldInfo1622.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1621.children = new MFNode();

LOD1621.children[0] = WorldInfo1622;

let Shape1623 = browser.currentScene.createNode("Shape");
Shape1623.USE = "HAnimSiteViewpointShape";
LOD1621.children[1] = Shape1623;

Anchor1620.children = new MFNode();

Anchor1620.children[0] = LOD1621;

HAnimSite1618.children[1] = Anchor1620;

HAnimHumanoid45.viewpoints[8] = HAnimSite1618;

let HAnimSite1624 = browser.currentScene.createNode("HAnimSite");
HAnimSite1624.name = "head_front_close_view";
HAnimSite1624.DEF = "hanim_head_front_close_view";
HAnimSite1624.translation = new SFVec3f(new float[0,1.5,1]);
let Viewpoint1625 = browser.currentScene.createNode("Viewpoint");
Viewpoint1625.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1625.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1625.description = "head front close";
Viewpoint1625.position = new SFVec3f(new float[0,0,0]);
HAnimSite1624.children = new MFNode();

HAnimSite1624.children[0] = Viewpoint1625;

//HAnimSite/Viewpoint visualization shape
let Anchor1626 = browser.currentScene.createNode("Anchor");
Anchor1626.description = "HAnimSite Viewpoint hanim_head_front_close_view";
Anchor1626.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
let LOD1627 = browser.currentScene.createNode("LOD");
LOD1627.forceTransitions = True;
LOD1627.range = new MFFloat(new float[0.04]);
let WorldInfo1628 = browser.currentScene.createNode("WorldInfo");
WorldInfo1628.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1627.children = new MFNode();

LOD1627.children[0] = WorldInfo1628;

let Shape1629 = browser.currentScene.createNode("Shape");
Shape1629.USE = "HAnimSiteViewpointShape";
LOD1627.children[1] = Shape1629;

Anchor1626.children = new MFNode();

Anchor1626.children[0] = LOD1627;

HAnimSite1624.children[1] = Anchor1626;

HAnimHumanoid45.viewpoints[9] = HAnimSite1624;

let HAnimSite1630 = browser.currentScene.createNode("HAnimSite");
HAnimSite1630.name = "chest_front_close_view";
HAnimSite1630.DEF = "hanim_chest_front_close_view";
HAnimSite1630.translation = new SFVec3f(new float[0,1.2,1]);
let Viewpoint1631 = browser.currentScene.createNode("Viewpoint");
Viewpoint1631.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1631.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1631.description = "chest front close";
Viewpoint1631.position = new SFVec3f(new float[0,0,0]);
HAnimSite1630.children = new MFNode();

HAnimSite1630.children[0] = Viewpoint1631;

//HAnimSite/Viewpoint visualization shape
let Anchor1632 = browser.currentScene.createNode("Anchor");
Anchor1632.description = "HAnimSite Viewpoint hanim_chest_front_close_view";
Anchor1632.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
let LOD1633 = browser.currentScene.createNode("LOD");
LOD1633.forceTransitions = True;
LOD1633.range = new MFFloat(new float[0.04]);
let WorldInfo1634 = browser.currentScene.createNode("WorldInfo");
WorldInfo1634.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1633.children = new MFNode();

LOD1633.children[0] = WorldInfo1634;

let Shape1635 = browser.currentScene.createNode("Shape");
Shape1635.USE = "HAnimSiteViewpointShape";
LOD1633.children[1] = Shape1635;

Anchor1632.children = new MFNode();

Anchor1632.children[0] = LOD1633;

HAnimSite1630.children[1] = Anchor1632;

HAnimHumanoid45.viewpoints[10] = HAnimSite1630;

let HAnimSite1636 = browser.currentScene.createNode("HAnimSite");
HAnimSite1636.name = "pelvis_front_close_view";
HAnimSite1636.DEF = "hanim_pelvis_front_close_view";
HAnimSite1636.translation = new SFVec3f(new float[0,0.8,1]);
let Viewpoint1637 = browser.currentScene.createNode("Viewpoint");
Viewpoint1637.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1637.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1637.description = "pelvis front close";
Viewpoint1637.position = new SFVec3f(new float[0,0,0]);
HAnimSite1636.children = new MFNode();

HAnimSite1636.children[0] = Viewpoint1637;

//HAnimSite/Viewpoint visualization shape
let Anchor1638 = browser.currentScene.createNode("Anchor");
Anchor1638.description = "HAnimSite Viewpoint hanim_pelvis_front_close_view";
Anchor1638.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
let LOD1639 = browser.currentScene.createNode("LOD");
LOD1639.forceTransitions = True;
LOD1639.range = new MFFloat(new float[0.04]);
let WorldInfo1640 = browser.currentScene.createNode("WorldInfo");
WorldInfo1640.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1639.children = new MFNode();

LOD1639.children[0] = WorldInfo1640;

let Shape1641 = browser.currentScene.createNode("Shape");
Shape1641.USE = "HAnimSiteViewpointShape";
LOD1639.children[1] = Shape1641;

Anchor1638.children = new MFNode();

Anchor1638.children[0] = LOD1639;

HAnimSite1636.children[1] = Anchor1638;

HAnimHumanoid45.viewpoints[11] = HAnimSite1636;

let HAnimSite1642 = browser.currentScene.createNode("HAnimSite");
HAnimSite1642.name = "knees_front_close_view";
HAnimSite1642.DEF = "hanim_knees_front_close_view";
HAnimSite1642.translation = new SFVec3f(new float[0,0.4,1]);
let Viewpoint1643 = browser.currentScene.createNode("Viewpoint");
Viewpoint1643.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1643.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1643.description = "knees front close";
Viewpoint1643.position = new SFVec3f(new float[0,0,0]);
HAnimSite1642.children = new MFNode();

HAnimSite1642.children[0] = Viewpoint1643;

//HAnimSite/Viewpoint visualization shape
let Anchor1644 = browser.currentScene.createNode("Anchor");
Anchor1644.description = "HAnimSite Viewpoint hanim_knees_front_close_view";
Anchor1644.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
let LOD1645 = browser.currentScene.createNode("LOD");
LOD1645.forceTransitions = True;
LOD1645.range = new MFFloat(new float[0.04]);
let WorldInfo1646 = browser.currentScene.createNode("WorldInfo");
WorldInfo1646.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1645.children = new MFNode();

LOD1645.children[0] = WorldInfo1646;

let Shape1647 = browser.currentScene.createNode("Shape");
Shape1647.USE = "HAnimSiteViewpointShape";
LOD1645.children[1] = Shape1647;

Anchor1644.children = new MFNode();

Anchor1644.children[0] = LOD1645;

HAnimSite1642.children[1] = Anchor1644;

HAnimHumanoid45.viewpoints[12] = HAnimSite1642;

let HAnimSite1648 = browser.currentScene.createNode("HAnimSite");
HAnimSite1648.name = "feet_front_close_view";
HAnimSite1648.DEF = "hanim_feet_front_close_view";
HAnimSite1648.translation = new SFVec3f(new float[0,0,1]);
let Viewpoint1649 = browser.currentScene.createNode("Viewpoint");
Viewpoint1649.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1649.description = "feet front close";
Viewpoint1649.position = new SFVec3f(new float[0,0,0]);
HAnimSite1648.children = new MFNode();

HAnimSite1648.children[0] = Viewpoint1649;

//HAnimSite/Viewpoint visualization shape
let Anchor1650 = browser.currentScene.createNode("Anchor");
Anchor1650.description = "HAnimSite Viewpoint hanim_feet_front_close_view";
Anchor1650.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
let LOD1651 = browser.currentScene.createNode("LOD");
LOD1651.forceTransitions = True;
LOD1651.range = new MFFloat(new float[0.04]);
let WorldInfo1652 = browser.currentScene.createNode("WorldInfo");
WorldInfo1652.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1651.children = new MFNode();

LOD1651.children[0] = WorldInfo1652;

let Shape1653 = browser.currentScene.createNode("Shape");
Shape1653.USE = "HAnimSiteViewpointShape";
LOD1651.children[1] = Shape1653;

Anchor1650.children = new MFNode();

Anchor1650.children[0] = LOD1651;

HAnimSite1648.children[1] = Anchor1650;

HAnimHumanoid45.viewpoints[13] = HAnimSite1648;

let HAnimSite1654 = browser.currentScene.createNode("HAnimSite");
HAnimSite1654.name = "eye_level_view";
HAnimSite1654.DEF = "hanim_eye_level_view";
HAnimSite1654.translation = new SFVec3f(new float[0,1.6332,0.0502]);
let Viewpoint1655 = browser.currentScene.createNode("Viewpoint");
Viewpoint1655.DEF = "hanim_eye_level_viewpoint";
Viewpoint1655.description = "eye level looking forward";
Viewpoint1655.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1655.position = new SFVec3f(new float[0,0,0]);
HAnimSite1654.children = new MFNode();

HAnimSite1654.children[0] = Viewpoint1655;

//HAnimSite/Viewpoint visualization shape
let Anchor1656 = browser.currentScene.createNode("Anchor");
Anchor1656.description = "HAnimSite Viewpoint hanim_eye_level_view";
Anchor1656.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
let LOD1657 = browser.currentScene.createNode("LOD");
LOD1657.forceTransitions = True;
LOD1657.range = new MFFloat(new float[0.04]);
let WorldInfo1658 = browser.currentScene.createNode("WorldInfo");
WorldInfo1658.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1657.children = new MFNode();

LOD1657.children[0] = WorldInfo1658;

let Shape1659 = browser.currentScene.createNode("Shape");
Shape1659.USE = "HAnimSiteViewpointShape";
LOD1657.children[1] = Shape1659;

Anchor1656.children = new MFNode();

Anchor1656.children[0] = LOD1657;

HAnimSite1654.children[1] = Anchor1656;

HAnimHumanoid45.viewpoints[14] = HAnimSite1654;

let HAnimSite1660 = browser.currentScene.createNode("HAnimSite");
HAnimSite1660.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid45.viewpoints[15] = HAnimSite1660;

let HAnimSite1661 = browser.currentScene.createNode("HAnimSite");
HAnimSite1661.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid45.viewpoints[16] = HAnimSite1661;

let HAnimSite1662 = browser.currentScene.createNode("HAnimSite");
HAnimSite1662.USE = "hanim_l_hand_front_view";
HAnimHumanoid45.viewpoints[17] = HAnimSite1662;

let HAnimSite1663 = browser.currentScene.createNode("HAnimSite");
HAnimSite1663.USE = "hanim_r_hand_front_view";
HAnimHumanoid45.viewpoints[18] = HAnimSite1663;

let HAnimJoint1664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_humanoid_root";
HAnimHumanoid45.joints[19] = HAnimJoint1664;

let HAnimJoint1665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_sacroiliac";
HAnimHumanoid45.joints[20] = HAnimJoint1665;

let HAnimJoint1666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_vl5";
HAnimHumanoid45.joints[21] = HAnimJoint1666;

let HAnimJoint1667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_vl4";
HAnimHumanoid45.joints[22] = HAnimJoint1667;

let HAnimJoint1668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_vl3";
HAnimHumanoid45.joints[23] = HAnimJoint1668;

let HAnimJoint1669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vl2";
HAnimHumanoid45.joints[24] = HAnimJoint1669;

let HAnimJoint1670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vl1";
HAnimHumanoid45.joints[25] = HAnimJoint1670;

let HAnimJoint1671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vt12";
HAnimHumanoid45.joints[26] = HAnimJoint1671;

let HAnimJoint1672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vt11";
HAnimHumanoid45.joints[27] = HAnimJoint1672;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vt10";
HAnimHumanoid45.joints[28] = HAnimJoint1673;

let HAnimJoint1674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt9";
HAnimHumanoid45.joints[29] = HAnimJoint1674;

let HAnimJoint1675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vt8";
HAnimHumanoid45.joints[30] = HAnimJoint1675;

let HAnimJoint1676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vt7";
HAnimHumanoid45.joints[31] = HAnimJoint1676;

let HAnimJoint1677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vt6";
HAnimHumanoid45.joints[32] = HAnimJoint1677;

let HAnimJoint1678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vt5";
HAnimHumanoid45.joints[33] = HAnimJoint1678;

let HAnimJoint1679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vt4";
HAnimHumanoid45.joints[34] = HAnimJoint1679;

let HAnimJoint1680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vt3";
HAnimHumanoid45.joints[35] = HAnimJoint1680;

let HAnimJoint1681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vt2";
HAnimHumanoid45.joints[36] = HAnimJoint1681;

let HAnimJoint1682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vt1";
HAnimHumanoid45.joints[37] = HAnimJoint1682;

let HAnimJoint1683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_vc7";
HAnimHumanoid45.joints[38] = HAnimJoint1683;

let HAnimJoint1684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_vc6";
HAnimHumanoid45.joints[39] = HAnimJoint1684;

let HAnimJoint1685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_vc5";
HAnimHumanoid45.joints[40] = HAnimJoint1685;

let HAnimJoint1686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_vc4";
HAnimHumanoid45.joints[41] = HAnimJoint1686;

let HAnimJoint1687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_vc3";
HAnimHumanoid45.joints[42] = HAnimJoint1687;

let HAnimJoint1688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_vc2";
HAnimHumanoid45.joints[43] = HAnimJoint1688;

let HAnimJoint1689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_vc1";
HAnimHumanoid45.joints[44] = HAnimJoint1689;

let HAnimJoint1690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_skullbase";
HAnimHumanoid45.joints[45] = HAnimJoint1690;

let HAnimJoint1691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_temporomandibular";
HAnimHumanoid45.joints[46] = HAnimJoint1691;

let HAnimJoint1692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_l_acromioclavicular";
HAnimHumanoid45.joints[47] = HAnimJoint1692;

let HAnimJoint1693 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_r_acromioclavicular";
HAnimHumanoid45.joints[48] = HAnimJoint1693;

let HAnimJoint1694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_l_ankle";
HAnimHumanoid45.joints[49] = HAnimJoint1694;

let HAnimJoint1695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_r_ankle";
HAnimHumanoid45.joints[50] = HAnimJoint1695;

let HAnimJoint1696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_l_elbow";
HAnimHumanoid45.joints[51] = HAnimJoint1696;

let HAnimJoint1697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_r_elbow";
HAnimHumanoid45.joints[52] = HAnimJoint1697;

let HAnimJoint1698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_eyeball_joint";
HAnimHumanoid45.joints[53] = HAnimJoint1698;

let HAnimJoint1699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_r_eyeball_joint";
HAnimHumanoid45.joints[54] = HAnimJoint1699;

let HAnimJoint1700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid45.joints[55] = HAnimJoint1700;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid45.joints[56] = HAnimJoint1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_eyelid_joint";
HAnimHumanoid45.joints[57] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_r_eyelid_joint";
HAnimHumanoid45.joints[58] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_hip";
HAnimHumanoid45.joints[59] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_r_hip";
HAnimHumanoid45.joints[60] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_index0";
HAnimHumanoid45.joints[61] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_r_index0";
HAnimHumanoid45.joints[62] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_index1";
HAnimHumanoid45.joints[63] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_r_index1";
HAnimHumanoid45.joints[64] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_index2";
HAnimHumanoid45.joints[65] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_r_index2";
HAnimHumanoid45.joints[66] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_index3";
HAnimHumanoid45.joints[67] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_r_index3";
HAnimHumanoid45.joints[68] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_knee";
HAnimHumanoid45.joints[69] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_r_knee";
HAnimHumanoid45.joints[70] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_metatarsal";
HAnimHumanoid45.joints[71] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_r_metatarsal";
HAnimHumanoid45.joints[72] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_l_middle0";
HAnimHumanoid45.joints[73] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_r_middle0";
HAnimHumanoid45.joints[74] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_l_middle1";
HAnimHumanoid45.joints[75] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_r_middle1";
HAnimHumanoid45.joints[76] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_l_middle2";
HAnimHumanoid45.joints[77] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_r_middle2";
HAnimHumanoid45.joints[78] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_l_middle3";
HAnimHumanoid45.joints[79] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_r_middle3";
HAnimHumanoid45.joints[80] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_l_midtarsal";
HAnimHumanoid45.joints[81] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_midtarsal";
HAnimHumanoid45.joints[82] = HAnimJoint1727;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_l_pinky0";
HAnimHumanoid45.joints[83] = HAnimJoint1728;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_pinky0";
HAnimHumanoid45.joints[84] = HAnimJoint1729;

let HAnimJoint1730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_l_pinky1";
HAnimHumanoid45.joints[85] = HAnimJoint1730;

let HAnimJoint1731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_pinky1";
HAnimHumanoid45.joints[86] = HAnimJoint1731;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_l_pinky2";
HAnimHumanoid45.joints[87] = HAnimJoint1732;

let HAnimJoint1733 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_pinky2";
HAnimHumanoid45.joints[88] = HAnimJoint1733;

let HAnimJoint1734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_l_pinky3";
HAnimHumanoid45.joints[89] = HAnimJoint1734;

let HAnimJoint1735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_pinky3";
HAnimHumanoid45.joints[90] = HAnimJoint1735;

let HAnimJoint1736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_l_ring0";
HAnimHumanoid45.joints[91] = HAnimJoint1736;

let HAnimJoint1737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_ring0";
HAnimHumanoid45.joints[92] = HAnimJoint1737;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_l_ring1";
HAnimHumanoid45.joints[93] = HAnimJoint1738;

let HAnimJoint1739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_ring1";
HAnimHumanoid45.joints[94] = HAnimJoint1739;

let HAnimJoint1740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_l_ring2";
HAnimHumanoid45.joints[95] = HAnimJoint1740;

let HAnimJoint1741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_ring2";
HAnimHumanoid45.joints[96] = HAnimJoint1741;

let HAnimJoint1742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_l_ring3";
HAnimHumanoid45.joints[97] = HAnimJoint1742;

let HAnimJoint1743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_ring3";
HAnimHumanoid45.joints[98] = HAnimJoint1743;

let HAnimJoint1744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_l_shoulder";
HAnimHumanoid45.joints[99] = HAnimJoint1744;

let HAnimJoint1745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_shoulder";
HAnimHumanoid45.joints[100] = HAnimJoint1745;

let HAnimJoint1746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_l_sternoclavicular";
HAnimHumanoid45.joints[101] = HAnimJoint1746;

let HAnimJoint1747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_r_sternoclavicular";
HAnimHumanoid45.joints[102] = HAnimJoint1747;

let HAnimJoint1748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_l_subtalar";
HAnimHumanoid45.joints[103] = HAnimJoint1748;

let HAnimJoint1749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_r_subtalar";
HAnimHumanoid45.joints[104] = HAnimJoint1749;

let HAnimJoint1750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_l_thumb1";
HAnimHumanoid45.joints[105] = HAnimJoint1750;

let HAnimJoint1751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_r_thumb1";
HAnimHumanoid45.joints[106] = HAnimJoint1751;

let HAnimJoint1752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_l_thumb2";
HAnimHumanoid45.joints[107] = HAnimJoint1752;

let HAnimJoint1753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_r_thumb2";
HAnimHumanoid45.joints[108] = HAnimJoint1753;

let HAnimJoint1754 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_l_thumb3";
HAnimHumanoid45.joints[109] = HAnimJoint1754;

let HAnimJoint1755 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_r_thumb3";
HAnimHumanoid45.joints[110] = HAnimJoint1755;

let HAnimJoint1756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_l_wrist";
HAnimHumanoid45.joints[111] = HAnimJoint1756;

let HAnimJoint1757 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1757.USE = "hanim_r_wrist";
HAnimHumanoid45.joints[112] = HAnimJoint1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_pelvis";
HAnimHumanoid45.segments[113] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_skull";
HAnimHumanoid45.segments[114] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_jaw";
HAnimHumanoid45.segments[115] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_c1";
HAnimHumanoid45.segments[116] = HAnimSegment1761;

let HAnimSegment1762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_c2";
HAnimHumanoid45.segments[117] = HAnimSegment1762;

let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_c3";
HAnimHumanoid45.segments[118] = HAnimSegment1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_c4";
HAnimHumanoid45.segments[119] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_c5";
HAnimHumanoid45.segments[120] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_c6";
HAnimHumanoid45.segments[121] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_c7";
HAnimHumanoid45.segments[122] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_t1";
HAnimHumanoid45.segments[123] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_t2";
HAnimHumanoid45.segments[124] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_t3";
HAnimHumanoid45.segments[125] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_t4";
HAnimHumanoid45.segments[126] = HAnimSegment1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_t5";
HAnimHumanoid45.segments[127] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_t6";
HAnimHumanoid45.segments[128] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_t7";
HAnimHumanoid45.segments[129] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_t8";
HAnimHumanoid45.segments[130] = HAnimSegment1775;

let HAnimSegment1776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_t9";
HAnimHumanoid45.segments[131] = HAnimSegment1776;

let HAnimSegment1777 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_t10";
HAnimHumanoid45.segments[132] = HAnimSegment1777;

let HAnimSegment1778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_t11";
HAnimHumanoid45.segments[133] = HAnimSegment1778;

let HAnimSegment1779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_t12";
HAnimHumanoid45.segments[134] = HAnimSegment1779;

let HAnimSegment1780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_l1";
HAnimHumanoid45.segments[135] = HAnimSegment1780;

let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_l2";
HAnimHumanoid45.segments[136] = HAnimSegment1781;

let HAnimSegment1782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_l3";
HAnimHumanoid45.segments[137] = HAnimSegment1782;

let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_l4";
HAnimHumanoid45.segments[138] = HAnimSegment1783;

let HAnimSegment1784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_l5";
HAnimHumanoid45.segments[139] = HAnimSegment1784;

let HAnimSegment1785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_sacrum";
HAnimHumanoid45.segments[140] = HAnimSegment1785;

let HAnimSegment1786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_l_calf";
HAnimHumanoid45.segments[141] = HAnimSegment1786;

let HAnimSegment1787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_r_calf";
HAnimHumanoid45.segments[142] = HAnimSegment1787;

let HAnimSegment1788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_l_clavicle";
HAnimHumanoid45.segments[143] = HAnimSegment1788;

let HAnimSegment1789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_r_clavicle";
HAnimHumanoid45.segments[144] = HAnimSegment1789;

let HAnimSegment1790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_l_eyeball";
HAnimHumanoid45.segments[145] = HAnimSegment1790;

let HAnimSegment1791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_r_eyeball";
HAnimHumanoid45.segments[146] = HAnimSegment1791;

let HAnimSegment1792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_l_eyebrow";
HAnimHumanoid45.segments[147] = HAnimSegment1792;

let HAnimSegment1793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_eyebrow";
HAnimHumanoid45.segments[148] = HAnimSegment1793;

let HAnimSegment1794 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_l_eyelid";
HAnimHumanoid45.segments[149] = HAnimSegment1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_r_eyelid";
HAnimHumanoid45.segments[150] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l_forearm";
HAnimHumanoid45.segments[151] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_r_forearm";
HAnimHumanoid45.segments[152] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l_forefoot";
HAnimHumanoid45.segments[153] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_r_forefoot";
HAnimHumanoid45.segments[154] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_l_hand";
HAnimHumanoid45.segments[155] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_r_hand";
HAnimHumanoid45.segments[156] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_l_hindfoot";
HAnimHumanoid45.segments[157] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_r_hindfoot";
HAnimHumanoid45.segments[158] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_l_index_distal";
HAnimHumanoid45.segments[159] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_r_index_distal";
HAnimHumanoid45.segments[160] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l_index_metacarpal";
HAnimHumanoid45.segments[161] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_r_index_metacarpal";
HAnimHumanoid45.segments[162] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_l_index_middle";
HAnimHumanoid45.segments[163] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_r_index_middle";
HAnimHumanoid45.segments[164] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_l_index_proximal";
HAnimHumanoid45.segments[165] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_r_index_proximal";
HAnimHumanoid45.segments[166] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_l_middistal";
HAnimHumanoid45.segments[167] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_r_middistal";
HAnimHumanoid45.segments[168] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_l_middle_distal";
HAnimHumanoid45.segments[169] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_r_middle_distal";
HAnimHumanoid45.segments[170] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid45.segments[171] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid45.segments[172] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_l_middle_middle";
HAnimHumanoid45.segments[173] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_r_middle_middle";
HAnimHumanoid45.segments[174] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l_middle_proximal";
HAnimHumanoid45.segments[175] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_r_middle_proximal";
HAnimHumanoid45.segments[176] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l_midproximal";
HAnimHumanoid45.segments[177] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_r_midproximal";
HAnimHumanoid45.segments[178] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l_pinky_distal";
HAnimHumanoid45.segments[179] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_r_pinky_distal";
HAnimHumanoid45.segments[180] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid45.segments[181] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid45.segments[182] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_pinky_middle";
HAnimHumanoid45.segments[183] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_r_pinky_middle";
HAnimHumanoid45.segments[184] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_pinky_proximal";
HAnimHumanoid45.segments[185] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_r_pinky_proximal";
HAnimHumanoid45.segments[186] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_ring_distal";
HAnimHumanoid45.segments[187] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_r_ring_distal";
HAnimHumanoid45.segments[188] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid45.segments[189] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid45.segments[190] = HAnimSegment1835;

let HAnimSegment1836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_ring_middle";
HAnimHumanoid45.segments[191] = HAnimSegment1836;

let HAnimSegment1837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_r_ring_middle";
HAnimHumanoid45.segments[192] = HAnimSegment1837;

let HAnimSegment1838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_ring_proximal";
HAnimHumanoid45.segments[193] = HAnimSegment1838;

let HAnimSegment1839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_r_ring_proximal";
HAnimHumanoid45.segments[194] = HAnimSegment1839;

let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_scapula";
HAnimHumanoid45.segments[195] = HAnimSegment1840;

let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_r_scapula";
HAnimHumanoid45.segments[196] = HAnimSegment1841;

let HAnimSegment1842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_thigh";
HAnimHumanoid45.segments[197] = HAnimSegment1842;

let HAnimSegment1843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_thigh";
HAnimHumanoid45.segments[198] = HAnimSegment1843;

let HAnimSegment1844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_l_thumb_distal";
HAnimHumanoid45.segments[199] = HAnimSegment1844;

let HAnimSegment1845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_thumb_distal";
HAnimHumanoid45.segments[200] = HAnimSegment1845;

let HAnimSegment1846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid45.segments[201] = HAnimSegment1846;

let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid45.segments[202] = HAnimSegment1847;

let HAnimSegment1848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_l_thumb_proximal";
HAnimHumanoid45.segments[203] = HAnimSegment1848;

let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_thumb_proximal";
HAnimHumanoid45.segments[204] = HAnimSegment1849;

let HAnimSegment1850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_l_upperarm";
HAnimHumanoid45.segments[205] = HAnimSegment1850;

let HAnimSegment1851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_upperarm";
HAnimHumanoid45.segments[206] = HAnimSegment1851;

let HAnimSite1852 = browser.currentScene.createNode("HAnimSite");
HAnimSite1852.USE = "hanim_crotch_pt";
HAnimHumanoid45.viewpoints[207] = HAnimSite1852;

let HAnimSite1853 = browser.currentScene.createNode("HAnimSite");
HAnimSite1853.USE = "hanim_skull_tip";
HAnimHumanoid45.viewpoints[208] = HAnimSite1853;

let HAnimSite1854 = browser.currentScene.createNode("HAnimSite");
HAnimSite1854.USE = "hanim_sellion_pt";
HAnimHumanoid45.viewpoints[209] = HAnimSite1854;

let HAnimSite1855 = browser.currentScene.createNode("HAnimSite");
HAnimSite1855.USE = "hanim_supramenton_pt";
HAnimHumanoid45.viewpoints[210] = HAnimSite1855;

let HAnimSite1856 = browser.currentScene.createNode("HAnimSite");
HAnimSite1856.USE = "hanim_nuchale_pt";
HAnimHumanoid45.viewpoints[211] = HAnimSite1856;

let HAnimSite1857 = browser.currentScene.createNode("HAnimSite");
HAnimSite1857.USE = "hanim_suprasternale_pt";
HAnimHumanoid45.viewpoints[212] = HAnimSite1857;

let HAnimSite1858 = browser.currentScene.createNode("HAnimSite");
HAnimSite1858.USE = "hanim_cervicale_pt";
HAnimHumanoid45.viewpoints[213] = HAnimSite1858;

let HAnimSite1859 = browser.currentScene.createNode("HAnimSite");
HAnimSite1859.USE = "hanim_substernale_pt";
HAnimHumanoid45.viewpoints[214] = HAnimSite1859;

let HAnimSite1860 = browser.currentScene.createNode("HAnimSite");
HAnimSite1860.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid45.viewpoints[215] = HAnimSite1860;

let HAnimSite1861 = browser.currentScene.createNode("HAnimSite");
HAnimSite1861.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid45.viewpoints[216] = HAnimSite1861;

let HAnimSite1862 = browser.currentScene.createNode("HAnimSite");
HAnimSite1862.USE = "hanim_navel_pt";
HAnimHumanoid45.viewpoints[217] = HAnimSite1862;

let HAnimSite1863 = browser.currentScene.createNode("HAnimSite");
HAnimSite1863.USE = "hanim_l_acromion_pt";
HAnimHumanoid45.viewpoints[218] = HAnimSite1863;

let HAnimSite1864 = browser.currentScene.createNode("HAnimSite");
HAnimSite1864.USE = "hanim_r_acromion_pt";
HAnimHumanoid45.viewpoints[219] = HAnimSite1864;

let HAnimSite1865 = browser.currentScene.createNode("HAnimSite");
HAnimSite1865.USE = "hanim_r_asis_pt";
HAnimHumanoid45.viewpoints[220] = HAnimSite1865;

let HAnimSite1866 = browser.currentScene.createNode("HAnimSite");
HAnimSite1866.USE = "hanim_l_asis_pt";
HAnimHumanoid45.viewpoints[221] = HAnimSite1866;

let HAnimSite1867 = browser.currentScene.createNode("HAnimSite");
HAnimSite1867.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid45.viewpoints[222] = HAnimSite1867;

let HAnimSite1868 = browser.currentScene.createNode("HAnimSite");
HAnimSite1868.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid45.viewpoints[223] = HAnimSite1868;

let HAnimSite1869 = browser.currentScene.createNode("HAnimSite");
HAnimSite1869.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid45.viewpoints[224] = HAnimSite1869;

let HAnimSite1870 = browser.currentScene.createNode("HAnimSite");
HAnimSite1870.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid45.viewpoints[225] = HAnimSite1870;

let HAnimSite1871 = browser.currentScene.createNode("HAnimSite");
HAnimSite1871.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid45.viewpoints[226] = HAnimSite1871;

let HAnimSite1872 = browser.currentScene.createNode("HAnimSite");
HAnimSite1872.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid45.viewpoints[227] = HAnimSite1872;

let HAnimSite1873 = browser.currentScene.createNode("HAnimSite");
HAnimSite1873.USE = "hanim_l_clavicale_pt";
HAnimHumanoid45.viewpoints[228] = HAnimSite1873;

let HAnimSite1874 = browser.currentScene.createNode("HAnimSite");
HAnimSite1874.USE = "hanim_r_clavicale_pt";
HAnimHumanoid45.viewpoints[229] = HAnimSite1874;

let HAnimSite1875 = browser.currentScene.createNode("HAnimSite");
HAnimSite1875.USE = "hanim_l_dactylion_pt";
HAnimHumanoid45.viewpoints[230] = HAnimSite1875;

let HAnimSite1876 = browser.currentScene.createNode("HAnimSite");
HAnimSite1876.USE = "hanim_r_dactylion_pt";
HAnimHumanoid45.viewpoints[231] = HAnimSite1876;

let HAnimSite1877 = browser.currentScene.createNode("HAnimSite");
HAnimSite1877.USE = "hanim_l_digit2_pt";
HAnimHumanoid45.viewpoints[232] = HAnimSite1877;

let HAnimSite1878 = browser.currentScene.createNode("HAnimSite");
HAnimSite1878.USE = "hanim_r_digit2_pt";
HAnimHumanoid45.viewpoints[233] = HAnimSite1878;

let HAnimSite1879 = browser.currentScene.createNode("HAnimSite");
HAnimSite1879.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[234] = HAnimSite1879;

let HAnimSite1880 = browser.currentScene.createNode("HAnimSite");
HAnimSite1880.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[235] = HAnimSite1880;

let HAnimSite1881 = browser.currentScene.createNode("HAnimSite");
HAnimSite1881.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[236] = HAnimSite1881;

let HAnimSite1882 = browser.currentScene.createNode("HAnimSite");
HAnimSite1882.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[237] = HAnimSite1882;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.USE = "hanim_l_forefoot_tip";
HAnimHumanoid45.viewpoints[238] = HAnimSite1883;

let HAnimSite1884 = browser.currentScene.createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_forefoot_tip";
HAnimHumanoid45.viewpoints[239] = HAnimSite1884;

let HAnimSite1885 = browser.currentScene.createNode("HAnimSite");
HAnimSite1885.USE = "hanim_r_gonion_pt";
HAnimHumanoid45.viewpoints[240] = HAnimSite1885;

let HAnimSite1886 = browser.currentScene.createNode("HAnimSite");
HAnimSite1886.USE = "hanim_l_gonion_pt";
HAnimHumanoid45.viewpoints[241] = HAnimSite1886;

let HAnimSite1887 = browser.currentScene.createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[242] = HAnimSite1887;

let HAnimSite1888 = browser.currentScene.createNode("HAnimSite");
HAnimSite1888.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[243] = HAnimSite1888;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[244] = HAnimSite1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[245] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid45.viewpoints[246] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid45.viewpoints[247] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_l_index_distal_tip";
HAnimHumanoid45.viewpoints[248] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_r_index_distal_tip";
HAnimHumanoid45.viewpoints[249] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid45.viewpoints[250] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid45.viewpoints[251] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid45.viewpoints[252] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid45.viewpoints[253] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid45.viewpoints[254] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid45.viewpoints[255] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid45.viewpoints[256] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid45.viewpoints[257] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid45.viewpoints[258] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid45.viewpoints[259] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid45.viewpoints[260] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid45.viewpoints[261] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid45.viewpoints[262] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid45.viewpoints[263] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid45.viewpoints[264] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid45.viewpoints[265] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid45.viewpoints[266] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid45.viewpoints[267] = HAnimSite1912;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.USE = "hanim_r_neck_base_pt";
HAnimHumanoid45.viewpoints[268] = HAnimSite1913;

let HAnimSite1914 = browser.currentScene.createNode("HAnimSite");
HAnimSite1914.USE = "hanim_l_neck_base_pt";
HAnimHumanoid45.viewpoints[269] = HAnimSite1914;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.USE = "hanim_l_olecranon_pt";
HAnimHumanoid45.viewpoints[270] = HAnimSite1915;

let HAnimSite1916 = browser.currentScene.createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_olecranon_pt";
HAnimHumanoid45.viewpoints[271] = HAnimSite1916;

let HAnimSite1917 = browser.currentScene.createNode("HAnimSite");
HAnimSite1917.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid45.viewpoints[272] = HAnimSite1917;

let HAnimSite1918 = browser.currentScene.createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid45.viewpoints[273] = HAnimSite1918;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.USE = "hanim_r_psis_pt";
HAnimHumanoid45.viewpoints[274] = HAnimSite1919;

let HAnimSite1920 = browser.currentScene.createNode("HAnimSite");
HAnimSite1920.USE = "hanim_l_psis_pt";
HAnimHumanoid45.viewpoints[275] = HAnimSite1920;

let HAnimSite1921 = browser.currentScene.createNode("HAnimSite");
HAnimSite1921.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid45.viewpoints[276] = HAnimSite1921;

let HAnimSite1922 = browser.currentScene.createNode("HAnimSite");
HAnimSite1922.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid45.viewpoints[277] = HAnimSite1922;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.USE = "hanim_l_radiale_pt";
HAnimHumanoid45.viewpoints[278] = HAnimSite1923;

let HAnimSite1924 = browser.currentScene.createNode("HAnimSite");
HAnimSite1924.USE = "hanim_r_radiale_pt";
HAnimHumanoid45.viewpoints[279] = HAnimSite1924;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.USE = "hanim_r_rib10_pt";
HAnimHumanoid45.viewpoints[280] = HAnimSite1925;

let HAnimSite1926 = browser.currentScene.createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_rib10_pt";
HAnimHumanoid45.viewpoints[281] = HAnimSite1926;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid45.viewpoints[282] = HAnimSite1927;

let HAnimSite1928 = browser.currentScene.createNode("HAnimSite");
HAnimSite1928.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid45.viewpoints[283] = HAnimSite1928;

let HAnimSite1929 = browser.currentScene.createNode("HAnimSite");
HAnimSite1929.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid45.viewpoints[284] = HAnimSite1929;

let HAnimSite1930 = browser.currentScene.createNode("HAnimSite");
HAnimSite1930.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid45.viewpoints[285] = HAnimSite1930;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid45.viewpoints[286] = HAnimSite1931;

let HAnimSite1932 = browser.currentScene.createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid45.viewpoints[287] = HAnimSite1932;

let HAnimSite1933 = browser.currentScene.createNode("HAnimSite");
HAnimSite1933.USE = "hanim_r_thelion_pt";
HAnimHumanoid45.viewpoints[288] = HAnimSite1933;

let HAnimSite1934 = browser.currentScene.createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_thelion_pt";
HAnimHumanoid45.viewpoints[289] = HAnimSite1934;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid45.viewpoints[290] = HAnimSite1935;

let HAnimSite1936 = browser.currentScene.createNode("HAnimSite");
HAnimSite1936.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid45.viewpoints[291] = HAnimSite1936;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_r_tragion_pt";
HAnimHumanoid45.viewpoints[292] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_l_tragion_pt";
HAnimHumanoid45.viewpoints[293] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid45.viewpoints[294] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid45.viewpoints[295] = HAnimSite1940;

let HAnimSite1941 = browser.currentScene.createNode("HAnimSite");
HAnimSite1941.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid45.viewpoints[296] = HAnimSite1941;

let HAnimSite1942 = browser.currentScene.createNode("HAnimSite");
HAnimSite1942.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid45.viewpoints[297] = HAnimSite1942;

browser.currentScene.children[12] = HAnimHumanoid45;

let Group1943 = browser.currentScene.createNode("Group");
Group1943.DEF = "StopAnimation";
let TimeSensor1944 = browser.currentScene.createNode("TimeSensor");
TimeSensor1944.DEF = "StopTimer";
TimeSensor1944.cycleInterval = 5.73;
TimeSensor1944.loop = True;
Group1943.children = new MFNode();

Group1943.children[0] = TimeSensor1944;

let PositionInterpolator1945 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1945.DEF = "Stop_HumanoidRoot_TranslationInterpolator";
PositionInterpolator1945.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator1945.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group1943.children[1] = PositionInterpolator1945;

let OrientationInterpolator1946 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1946.DEF = "Stop_HumanoidRoot_RotationInterpolator";
OrientationInterpolator1946.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1946.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[2] = OrientationInterpolator1946;

let OrientationInterpolator1947 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1947.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator1947.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1947.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[3] = OrientationInterpolator1947;

let OrientationInterpolator1948 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1948.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator1948.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1948.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[4] = OrientationInterpolator1948;

let OrientationInterpolator1949 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1949.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator1949.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1949.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[5] = OrientationInterpolator1949;

let OrientationInterpolator1950 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1950.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator1950.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1950.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[6] = OrientationInterpolator1950;

let OrientationInterpolator1951 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1951.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator1951.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1951.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[7] = OrientationInterpolator1951;

let OrientationInterpolator1952 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1952.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator1952.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1952.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[8] = OrientationInterpolator1952;

let OrientationInterpolator1953 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1953.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator1953.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1953.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[9] = OrientationInterpolator1953;

let OrientationInterpolator1954 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1954.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator1954.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1954.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[10] = OrientationInterpolator1954;

let OrientationInterpolator1955 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1955.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator1955.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1955.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[11] = OrientationInterpolator1955;

let OrientationInterpolator1956 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1956.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator1956.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1956.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[12] = OrientationInterpolator1956;

let OrientationInterpolator1957 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1957.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator1957.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1957.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[13] = OrientationInterpolator1957;

let OrientationInterpolator1958 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1958.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator1958.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1958.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[14] = OrientationInterpolator1958;

let OrientationInterpolator1959 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1959.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator1959.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1959.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[15] = OrientationInterpolator1959;

let OrientationInterpolator1960 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1960.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator1960.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1960.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[16] = OrientationInterpolator1960;

let OrientationInterpolator1961 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1961.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator1961.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1961.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[17] = OrientationInterpolator1961;

let OrientationInterpolator1962 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1962.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator1962.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1962.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[18] = OrientationInterpolator1962;

let OrientationInterpolator1963 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1963.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator1963.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1963.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[19] = OrientationInterpolator1963;

let OrientationInterpolator1964 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1964.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator1964.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1964.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[20] = OrientationInterpolator1964;

let OrientationInterpolator1965 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1965.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator1965.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1965.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[21] = OrientationInterpolator1965;

let OrientationInterpolator1966 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1966.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator1966.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1966.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[22] = OrientationInterpolator1966;

let OrientationInterpolator1967 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1967.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator1967.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1967.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[23] = OrientationInterpolator1967;

let OrientationInterpolator1968 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1968.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator1968.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1968.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[24] = OrientationInterpolator1968;

let OrientationInterpolator1969 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1969.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator1969.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1969.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[25] = OrientationInterpolator1969;

let OrientationInterpolator1970 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1970.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator1970.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1970.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[26] = OrientationInterpolator1970;

let OrientationInterpolator1971 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1971.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator1971.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1971.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[27] = OrientationInterpolator1971;

let OrientationInterpolator1972 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1972.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator1972.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1972.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[28] = OrientationInterpolator1972;

let OrientationInterpolator1973 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1973.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator1973.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1973.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[29] = OrientationInterpolator1973;

let OrientationInterpolator1974 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1974.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator1974.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1974.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[30] = OrientationInterpolator1974;

let OrientationInterpolator1975 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1975.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator1975.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1975.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[31] = OrientationInterpolator1975;

let OrientationInterpolator1976 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1976.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator1976.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1976.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[32] = OrientationInterpolator1976;

let OrientationInterpolator1977 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1977.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator1977.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1977.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[33] = OrientationInterpolator1977;

let OrientationInterpolator1978 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1978.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator1978.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1978.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[34] = OrientationInterpolator1978;

let OrientationInterpolator1979 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1979.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator1979.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1979.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[35] = OrientationInterpolator1979;

let OrientationInterpolator1980 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1980.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator1980.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1980.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[36] = OrientationInterpolator1980;

let OrientationInterpolator1981 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1981.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator1981.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1981.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[37] = OrientationInterpolator1981;

let OrientationInterpolator1982 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1982.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator1982.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1982.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[38] = OrientationInterpolator1982;

let OrientationInterpolator1983 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1983.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator1983.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1983.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[39] = OrientationInterpolator1983;

let OrientationInterpolator1984 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1984.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator1984.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1984.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[40] = OrientationInterpolator1984;

let OrientationInterpolator1985 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1985.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator1985.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1985.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[41] = OrientationInterpolator1985;

let OrientationInterpolator1986 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1986.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator1986.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1986.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[42] = OrientationInterpolator1986;

let OrientationInterpolator1987 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1987.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator1987.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1987.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[43] = OrientationInterpolator1987;

let OrientationInterpolator1988 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1988.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator1988.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1988.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[44] = OrientationInterpolator1988;

let OrientationInterpolator1989 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1989.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator1989.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1989.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[45] = OrientationInterpolator1989;

let OrientationInterpolator1990 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1990.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator1990.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1990.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[46] = OrientationInterpolator1990;

let OrientationInterpolator1991 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1991.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator1991.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1991.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[47] = OrientationInterpolator1991;

let OrientationInterpolator1992 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1992.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator1992.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1992.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[48] = OrientationInterpolator1992;

let OrientationInterpolator1993 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1993.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator1993.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1993.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[49] = OrientationInterpolator1993;

let OrientationInterpolator1994 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1994.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator1994.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1994.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[50] = OrientationInterpolator1994;

let OrientationInterpolator1995 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1995.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator1995.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1995.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[51] = OrientationInterpolator1995;

let OrientationInterpolator1996 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1996.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator1996.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1996.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[52] = OrientationInterpolator1996;

let OrientationInterpolator1997 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1997.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator1997.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1997.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[53] = OrientationInterpolator1997;

let OrientationInterpolator1998 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1998.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator1998.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1998.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[54] = OrientationInterpolator1998;

let OrientationInterpolator1999 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1999.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator1999.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1999.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[55] = OrientationInterpolator1999;

let OrientationInterpolator2000 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2000.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator2000.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2000.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[56] = OrientationInterpolator2000;

let OrientationInterpolator2001 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2001.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator2001.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2001.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[57] = OrientationInterpolator2001;

let OrientationInterpolator2002 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2002.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator2002.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2002.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[58] = OrientationInterpolator2002;

let OrientationInterpolator2003 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2003.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator2003.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2003.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[59] = OrientationInterpolator2003;

let OrientationInterpolator2004 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2004.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator2004.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2004.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[60] = OrientationInterpolator2004;

let OrientationInterpolator2005 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2005.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator2005.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2005.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[61] = OrientationInterpolator2005;

let OrientationInterpolator2006 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2006.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator2006.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2006.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[62] = OrientationInterpolator2006;

let OrientationInterpolator2007 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2007.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator2007.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2007.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[63] = OrientationInterpolator2007;

let OrientationInterpolator2008 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2008.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator2008.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2008.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[64] = OrientationInterpolator2008;

let OrientationInterpolator2009 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2009.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator2009.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2009.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[65] = OrientationInterpolator2009;

let OrientationInterpolator2010 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2010.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator2010.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2010.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[66] = OrientationInterpolator2010;

let OrientationInterpolator2011 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2011.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator2011.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2011.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[67] = OrientationInterpolator2011;

let OrientationInterpolator2012 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2012.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator2012.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2012.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[68] = OrientationInterpolator2012;

let OrientationInterpolator2013 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2013.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator2013.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2013.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[69] = OrientationInterpolator2013;

let OrientationInterpolator2014 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2014.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator2014.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2014.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[70] = OrientationInterpolator2014;

let OrientationInterpolator2015 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2015.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator2015.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2015.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[71] = OrientationInterpolator2015;

let OrientationInterpolator2016 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2016.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator2016.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2016.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[72] = OrientationInterpolator2016;

let OrientationInterpolator2017 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2017.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator2017.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2017.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[73] = OrientationInterpolator2017;

let OrientationInterpolator2018 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2018.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator2018.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2018.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[74] = OrientationInterpolator2018;

let OrientationInterpolator2019 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2019.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator2019.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2019.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[75] = OrientationInterpolator2019;

let OrientationInterpolator2020 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2020.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator2020.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2020.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[76] = OrientationInterpolator2020;

let OrientationInterpolator2021 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2021.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator2021.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2021.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[77] = OrientationInterpolator2021;

let OrientationInterpolator2022 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2022.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator2022.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2022.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[78] = OrientationInterpolator2022;

let OrientationInterpolator2023 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2023.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator2023.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2023.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[79] = OrientationInterpolator2023;

let OrientationInterpolator2024 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2024.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator2024.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2024.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[80] = OrientationInterpolator2024;

let OrientationInterpolator2025 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2025.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator2025.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2025.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[81] = OrientationInterpolator2025;

let OrientationInterpolator2026 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2026.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator2026.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2026.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[82] = OrientationInterpolator2026;

let OrientationInterpolator2027 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2027.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator2027.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2027.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[83] = OrientationInterpolator2027;

let OrientationInterpolator2028 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2028.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator2028.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2028.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[84] = OrientationInterpolator2028;

let OrientationInterpolator2029 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2029.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator2029.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2029.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[85] = OrientationInterpolator2029;

let OrientationInterpolator2030 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2030.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator2030.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2030.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[86] = OrientationInterpolator2030;

let OrientationInterpolator2031 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2031.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator2031.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2031.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[87] = OrientationInterpolator2031;

let OrientationInterpolator2032 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2032.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator2032.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2032.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[88] = OrientationInterpolator2032;

let OrientationInterpolator2033 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2033.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator2033.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2033.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[89] = OrientationInterpolator2033;

let OrientationInterpolator2034 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2034.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator2034.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2034.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[90] = OrientationInterpolator2034;

let ROUTE2035 = browser.currentScene.createNode("ROUTE");
ROUTE2035.fromField = "fraction_changed";
ROUTE2035.fromNode = "StopTimer";
ROUTE2035.toField = "set_fraction";
ROUTE2035.toNode = "Stop_HumanoidRoot_TranslationInterpolator";
Group1943.children[91] = ROUTE2035;

let ROUTE2036 = browser.currentScene.createNode("ROUTE");
ROUTE2036.fromField = "fraction_changed";
ROUTE2036.fromNode = "StopTimer";
ROUTE2036.toField = "set_fraction";
ROUTE2036.toNode = "Stop_HumanoidRoot_RotationInterpolator";
Group1943.children[92] = ROUTE2036;

let ROUTE2037 = browser.currentScene.createNode("ROUTE");
ROUTE2037.fromField = "fraction_changed";
ROUTE2037.fromNode = "StopTimer";
ROUTE2037.toField = "set_fraction";
ROUTE2037.toNode = "Stop_sacroiliac_RotationInterpolator";
Group1943.children[93] = ROUTE2037;

let ROUTE2038 = browser.currentScene.createNode("ROUTE");
ROUTE2038.fromField = "fraction_changed";
ROUTE2038.fromNode = "StopTimer";
ROUTE2038.toField = "set_fraction";
ROUTE2038.toNode = "Stop_l_hip_RotationInterpolator";
Group1943.children[94] = ROUTE2038;

let ROUTE2039 = browser.currentScene.createNode("ROUTE");
ROUTE2039.fromField = "fraction_changed";
ROUTE2039.fromNode = "StopTimer";
ROUTE2039.toField = "set_fraction";
ROUTE2039.toNode = "Stop_l_knee_RotationInterpolator";
Group1943.children[95] = ROUTE2039;

let ROUTE2040 = browser.currentScene.createNode("ROUTE");
ROUTE2040.fromField = "fraction_changed";
ROUTE2040.fromNode = "StopTimer";
ROUTE2040.toField = "set_fraction";
ROUTE2040.toNode = "Stop_l_ankle_RotationInterpolator";
Group1943.children[96] = ROUTE2040;

let ROUTE2041 = browser.currentScene.createNode("ROUTE");
ROUTE2041.fromField = "fraction_changed";
ROUTE2041.fromNode = "StopTimer";
ROUTE2041.toField = "set_fraction";
ROUTE2041.toNode = "Stop_l_subtalar_RotationInterpolator";
Group1943.children[97] = ROUTE2041;

let ROUTE2042 = browser.currentScene.createNode("ROUTE");
ROUTE2042.fromField = "fraction_changed";
ROUTE2042.fromNode = "StopTimer";
ROUTE2042.toField = "set_fraction";
ROUTE2042.toNode = "Stop_l_midtarsal_RotationInterpolator";
Group1943.children[98] = ROUTE2042;

let ROUTE2043 = browser.currentScene.createNode("ROUTE");
ROUTE2043.fromField = "fraction_changed";
ROUTE2043.fromNode = "StopTimer";
ROUTE2043.toField = "set_fraction";
ROUTE2043.toNode = "Stop_l_metatarsal_RotationInterpolator";
Group1943.children[99] = ROUTE2043;

let ROUTE2044 = browser.currentScene.createNode("ROUTE");
ROUTE2044.fromField = "fraction_changed";
ROUTE2044.fromNode = "StopTimer";
ROUTE2044.toField = "set_fraction";
ROUTE2044.toNode = "Stop_r_hip_RotationInterpolator";
Group1943.children[100] = ROUTE2044;

let ROUTE2045 = browser.currentScene.createNode("ROUTE");
ROUTE2045.fromField = "fraction_changed";
ROUTE2045.fromNode = "StopTimer";
ROUTE2045.toField = "set_fraction";
ROUTE2045.toNode = "Stop_r_knee_RotationInterpolator";
Group1943.children[101] = ROUTE2045;

let ROUTE2046 = browser.currentScene.createNode("ROUTE");
ROUTE2046.fromField = "fraction_changed";
ROUTE2046.fromNode = "StopTimer";
ROUTE2046.toField = "set_fraction";
ROUTE2046.toNode = "Stop_r_ankle_RotationInterpolator";
Group1943.children[102] = ROUTE2046;

let ROUTE2047 = browser.currentScene.createNode("ROUTE");
ROUTE2047.fromField = "fraction_changed";
ROUTE2047.fromNode = "StopTimer";
ROUTE2047.toField = "set_fraction";
ROUTE2047.toNode = "Stop_r_subtalar_RotationInterpolator";
Group1943.children[103] = ROUTE2047;

let ROUTE2048 = browser.currentScene.createNode("ROUTE");
ROUTE2048.fromField = "fraction_changed";
ROUTE2048.fromNode = "StopTimer";
ROUTE2048.toField = "set_fraction";
ROUTE2048.toNode = "Stop_r_midtarsal_RotationInterpolator";
Group1943.children[104] = ROUTE2048;

let ROUTE2049 = browser.currentScene.createNode("ROUTE");
ROUTE2049.fromField = "fraction_changed";
ROUTE2049.fromNode = "StopTimer";
ROUTE2049.toField = "set_fraction";
ROUTE2049.toNode = "Stop_r_metatarsal_RotationInterpolator";
Group1943.children[105] = ROUTE2049;

let ROUTE2050 = browser.currentScene.createNode("ROUTE");
ROUTE2050.fromField = "fraction_changed";
ROUTE2050.fromNode = "StopTimer";
ROUTE2050.toField = "set_fraction";
ROUTE2050.toNode = "Stop_vl5_RotationInterpolator";
Group1943.children[106] = ROUTE2050;

let ROUTE2051 = browser.currentScene.createNode("ROUTE");
ROUTE2051.fromField = "fraction_changed";
ROUTE2051.fromNode = "StopTimer";
ROUTE2051.toField = "set_fraction";
ROUTE2051.toNode = "Stop_vl4_RotationInterpolator";
Group1943.children[107] = ROUTE2051;

let ROUTE2052 = browser.currentScene.createNode("ROUTE");
ROUTE2052.fromField = "fraction_changed";
ROUTE2052.fromNode = "StopTimer";
ROUTE2052.toField = "set_fraction";
ROUTE2052.toNode = "Stop_vl3_RotationInterpolator";
Group1943.children[108] = ROUTE2052;

let ROUTE2053 = browser.currentScene.createNode("ROUTE");
ROUTE2053.fromField = "fraction_changed";
ROUTE2053.fromNode = "StopTimer";
ROUTE2053.toField = "set_fraction";
ROUTE2053.toNode = "Stop_vl2_RotationInterpolator";
Group1943.children[109] = ROUTE2053;

let ROUTE2054 = browser.currentScene.createNode("ROUTE");
ROUTE2054.fromField = "fraction_changed";
ROUTE2054.fromNode = "StopTimer";
ROUTE2054.toField = "set_fraction";
ROUTE2054.toNode = "Stop_vl1_RotationInterpolator";
Group1943.children[110] = ROUTE2054;

let ROUTE2055 = browser.currentScene.createNode("ROUTE");
ROUTE2055.fromField = "fraction_changed";
ROUTE2055.fromNode = "StopTimer";
ROUTE2055.toField = "set_fraction";
ROUTE2055.toNode = "Stop_vt12_RotationInterpolator";
Group1943.children[111] = ROUTE2055;

let ROUTE2056 = browser.currentScene.createNode("ROUTE");
ROUTE2056.fromField = "fraction_changed";
ROUTE2056.fromNode = "StopTimer";
ROUTE2056.toField = "set_fraction";
ROUTE2056.toNode = "Stop_vt11_RotationInterpolator";
Group1943.children[112] = ROUTE2056;

let ROUTE2057 = browser.currentScene.createNode("ROUTE");
ROUTE2057.fromField = "fraction_changed";
ROUTE2057.fromNode = "StopTimer";
ROUTE2057.toField = "set_fraction";
ROUTE2057.toNode = "Stop_vt10_RotationInterpolator";
Group1943.children[113] = ROUTE2057;

let ROUTE2058 = browser.currentScene.createNode("ROUTE");
ROUTE2058.fromField = "fraction_changed";
ROUTE2058.fromNode = "StopTimer";
ROUTE2058.toField = "set_fraction";
ROUTE2058.toNode = "Stop_vt9_RotationInterpolator";
Group1943.children[114] = ROUTE2058;

let ROUTE2059 = browser.currentScene.createNode("ROUTE");
ROUTE2059.fromField = "fraction_changed";
ROUTE2059.fromNode = "StopTimer";
ROUTE2059.toField = "set_fraction";
ROUTE2059.toNode = "Stop_vt8_RotationInterpolator";
Group1943.children[115] = ROUTE2059;

let ROUTE2060 = browser.currentScene.createNode("ROUTE");
ROUTE2060.fromField = "fraction_changed";
ROUTE2060.fromNode = "StopTimer";
ROUTE2060.toField = "set_fraction";
ROUTE2060.toNode = "Stop_vt7_RotationInterpolator";
Group1943.children[116] = ROUTE2060;

let ROUTE2061 = browser.currentScene.createNode("ROUTE");
ROUTE2061.fromField = "fraction_changed";
ROUTE2061.fromNode = "StopTimer";
ROUTE2061.toField = "set_fraction";
ROUTE2061.toNode = "Stop_vt6_RotationInterpolator";
Group1943.children[117] = ROUTE2061;

let ROUTE2062 = browser.currentScene.createNode("ROUTE");
ROUTE2062.fromField = "fraction_changed";
ROUTE2062.fromNode = "StopTimer";
ROUTE2062.toField = "set_fraction";
ROUTE2062.toNode = "Stop_vt5_RotationInterpolator";
Group1943.children[118] = ROUTE2062;

let ROUTE2063 = browser.currentScene.createNode("ROUTE");
ROUTE2063.fromField = "fraction_changed";
ROUTE2063.fromNode = "StopTimer";
ROUTE2063.toField = "set_fraction";
ROUTE2063.toNode = "Stop_vt4_RotationInterpolator";
Group1943.children[119] = ROUTE2063;

let ROUTE2064 = browser.currentScene.createNode("ROUTE");
ROUTE2064.fromField = "fraction_changed";
ROUTE2064.fromNode = "StopTimer";
ROUTE2064.toField = "set_fraction";
ROUTE2064.toNode = "Stop_vt3_RotationInterpolator";
Group1943.children[120] = ROUTE2064;

let ROUTE2065 = browser.currentScene.createNode("ROUTE");
ROUTE2065.fromField = "fraction_changed";
ROUTE2065.fromNode = "StopTimer";
ROUTE2065.toField = "set_fraction";
ROUTE2065.toNode = "Stop_vt2_RotationInterpolator";
Group1943.children[121] = ROUTE2065;

let ROUTE2066 = browser.currentScene.createNode("ROUTE");
ROUTE2066.fromField = "fraction_changed";
ROUTE2066.fromNode = "StopTimer";
ROUTE2066.toField = "set_fraction";
ROUTE2066.toNode = "Stop_vt1_RotationInterpolator";
Group1943.children[122] = ROUTE2066;

let ROUTE2067 = browser.currentScene.createNode("ROUTE");
ROUTE2067.fromField = "fraction_changed";
ROUTE2067.fromNode = "StopTimer";
ROUTE2067.toField = "set_fraction";
ROUTE2067.toNode = "Stop_vc7_RotationInterpolator";
Group1943.children[123] = ROUTE2067;

let ROUTE2068 = browser.currentScene.createNode("ROUTE");
ROUTE2068.fromField = "fraction_changed";
ROUTE2068.fromNode = "StopTimer";
ROUTE2068.toField = "set_fraction";
ROUTE2068.toNode = "Stop_vc6_RotationInterpolator";
Group1943.children[124] = ROUTE2068;

let ROUTE2069 = browser.currentScene.createNode("ROUTE");
ROUTE2069.fromField = "fraction_changed";
ROUTE2069.fromNode = "StopTimer";
ROUTE2069.toField = "set_fraction";
ROUTE2069.toNode = "Stop_vc5_RotationInterpolator";
Group1943.children[125] = ROUTE2069;

let ROUTE2070 = browser.currentScene.createNode("ROUTE");
ROUTE2070.fromField = "fraction_changed";
ROUTE2070.fromNode = "StopTimer";
ROUTE2070.toField = "set_fraction";
ROUTE2070.toNode = "Stop_vc4_RotationInterpolator";
Group1943.children[126] = ROUTE2070;

let ROUTE2071 = browser.currentScene.createNode("ROUTE");
ROUTE2071.fromField = "fraction_changed";
ROUTE2071.fromNode = "StopTimer";
ROUTE2071.toField = "set_fraction";
ROUTE2071.toNode = "Stop_vc3_RotationInterpolator";
Group1943.children[127] = ROUTE2071;

let ROUTE2072 = browser.currentScene.createNode("ROUTE");
ROUTE2072.fromField = "fraction_changed";
ROUTE2072.fromNode = "StopTimer";
ROUTE2072.toField = "set_fraction";
ROUTE2072.toNode = "Stop_vc2_RotationInterpolator";
Group1943.children[128] = ROUTE2072;

let ROUTE2073 = browser.currentScene.createNode("ROUTE");
ROUTE2073.fromField = "fraction_changed";
ROUTE2073.fromNode = "StopTimer";
ROUTE2073.toField = "set_fraction";
ROUTE2073.toNode = "Stop_vc1_RotationInterpolator";
Group1943.children[129] = ROUTE2073;

let ROUTE2074 = browser.currentScene.createNode("ROUTE");
ROUTE2074.fromField = "fraction_changed";
ROUTE2074.fromNode = "StopTimer";
ROUTE2074.toField = "set_fraction";
ROUTE2074.toNode = "Stop_skullbase_RotationInterpolator";
Group1943.children[130] = ROUTE2074;

let ROUTE2075 = browser.currentScene.createNode("ROUTE");
ROUTE2075.fromField = "fraction_changed";
ROUTE2075.fromNode = "StopTimer";
ROUTE2075.toField = "set_fraction";
ROUTE2075.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
Group1943.children[131] = ROUTE2075;

let ROUTE2076 = browser.currentScene.createNode("ROUTE");
ROUTE2076.fromField = "fraction_changed";
ROUTE2076.fromNode = "StopTimer";
ROUTE2076.toField = "set_fraction";
ROUTE2076.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
Group1943.children[132] = ROUTE2076;

let ROUTE2077 = browser.currentScene.createNode("ROUTE");
ROUTE2077.fromField = "fraction_changed";
ROUTE2077.fromNode = "StopTimer";
ROUTE2077.toField = "set_fraction";
ROUTE2077.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
Group1943.children[133] = ROUTE2077;

let ROUTE2078 = browser.currentScene.createNode("ROUTE");
ROUTE2078.fromField = "fraction_changed";
ROUTE2078.fromNode = "StopTimer";
ROUTE2078.toField = "set_fraction";
ROUTE2078.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
Group1943.children[134] = ROUTE2078;

let ROUTE2079 = browser.currentScene.createNode("ROUTE");
ROUTE2079.fromField = "fraction_changed";
ROUTE2079.fromNode = "StopTimer";
ROUTE2079.toField = "set_fraction";
ROUTE2079.toNode = "Stop_l_shoulder_RotationInterpolator";
Group1943.children[135] = ROUTE2079;

let ROUTE2080 = browser.currentScene.createNode("ROUTE");
ROUTE2080.fromField = "fraction_changed";
ROUTE2080.fromNode = "StopTimer";
ROUTE2080.toField = "set_fraction";
ROUTE2080.toNode = "Stop_l_elbow_RotationInterpolator";
Group1943.children[136] = ROUTE2080;

let ROUTE2081 = browser.currentScene.createNode("ROUTE");
ROUTE2081.fromField = "fraction_changed";
ROUTE2081.fromNode = "StopTimer";
ROUTE2081.toField = "set_fraction";
ROUTE2081.toNode = "Stop_l_wrist_RotationInterpolator";
Group1943.children[137] = ROUTE2081;

let ROUTE2082 = browser.currentScene.createNode("ROUTE");
ROUTE2082.fromField = "fraction_changed";
ROUTE2082.fromNode = "StopTimer";
ROUTE2082.toField = "set_fraction";
ROUTE2082.toNode = "Stop_l_thumb1_RotationInterpolator";
Group1943.children[138] = ROUTE2082;

let ROUTE2083 = browser.currentScene.createNode("ROUTE");
ROUTE2083.fromField = "fraction_changed";
ROUTE2083.fromNode = "StopTimer";
ROUTE2083.toField = "set_fraction";
ROUTE2083.toNode = "Stop_l_thumb2_RotationInterpolator";
Group1943.children[139] = ROUTE2083;

let ROUTE2084 = browser.currentScene.createNode("ROUTE");
ROUTE2084.fromField = "fraction_changed";
ROUTE2084.fromNode = "StopTimer";
ROUTE2084.toField = "set_fraction";
ROUTE2084.toNode = "Stop_l_thumb3_RotationInterpolator";
Group1943.children[140] = ROUTE2084;

let ROUTE2085 = browser.currentScene.createNode("ROUTE");
ROUTE2085.fromField = "fraction_changed";
ROUTE2085.fromNode = "StopTimer";
ROUTE2085.toField = "set_fraction";
ROUTE2085.toNode = "Stop_l_index0_RotationInterpolator";
Group1943.children[141] = ROUTE2085;

let ROUTE2086 = browser.currentScene.createNode("ROUTE");
ROUTE2086.fromField = "fraction_changed";
ROUTE2086.fromNode = "StopTimer";
ROUTE2086.toField = "set_fraction";
ROUTE2086.toNode = "Stop_l_index1_RotationInterpolator";
Group1943.children[142] = ROUTE2086;

let ROUTE2087 = browser.currentScene.createNode("ROUTE");
ROUTE2087.fromField = "fraction_changed";
ROUTE2087.fromNode = "StopTimer";
ROUTE2087.toField = "set_fraction";
ROUTE2087.toNode = "Stop_l_index2_RotationInterpolator";
Group1943.children[143] = ROUTE2087;

let ROUTE2088 = browser.currentScene.createNode("ROUTE");
ROUTE2088.fromField = "fraction_changed";
ROUTE2088.fromNode = "StopTimer";
ROUTE2088.toField = "set_fraction";
ROUTE2088.toNode = "Stop_l_index3_RotationInterpolator";
Group1943.children[144] = ROUTE2088;

let ROUTE2089 = browser.currentScene.createNode("ROUTE");
ROUTE2089.fromField = "fraction_changed";
ROUTE2089.fromNode = "StopTimer";
ROUTE2089.toField = "set_fraction";
ROUTE2089.toNode = "Stop_l_middle0_RotationInterpolator";
Group1943.children[145] = ROUTE2089;

let ROUTE2090 = browser.currentScene.createNode("ROUTE");
ROUTE2090.fromField = "fraction_changed";
ROUTE2090.fromNode = "StopTimer";
ROUTE2090.toField = "set_fraction";
ROUTE2090.toNode = "Stop_l_middle1_RotationInterpolator";
Group1943.children[146] = ROUTE2090;

let ROUTE2091 = browser.currentScene.createNode("ROUTE");
ROUTE2091.fromField = "fraction_changed";
ROUTE2091.fromNode = "StopTimer";
ROUTE2091.toField = "set_fraction";
ROUTE2091.toNode = "Stop_l_middle2_RotationInterpolator";
Group1943.children[147] = ROUTE2091;

let ROUTE2092 = browser.currentScene.createNode("ROUTE");
ROUTE2092.fromField = "fraction_changed";
ROUTE2092.fromNode = "StopTimer";
ROUTE2092.toField = "set_fraction";
ROUTE2092.toNode = "Stop_l_middle3_RotationInterpolator";
Group1943.children[148] = ROUTE2092;

let ROUTE2093 = browser.currentScene.createNode("ROUTE");
ROUTE2093.fromField = "fraction_changed";
ROUTE2093.fromNode = "StopTimer";
ROUTE2093.toField = "set_fraction";
ROUTE2093.toNode = "Stop_l_ring0_RotationInterpolator";
Group1943.children[149] = ROUTE2093;

let ROUTE2094 = browser.currentScene.createNode("ROUTE");
ROUTE2094.fromField = "fraction_changed";
ROUTE2094.fromNode = "StopTimer";
ROUTE2094.toField = "set_fraction";
ROUTE2094.toNode = "Stop_l_ring1_RotationInterpolator";
Group1943.children[150] = ROUTE2094;

let ROUTE2095 = browser.currentScene.createNode("ROUTE");
ROUTE2095.fromField = "fraction_changed";
ROUTE2095.fromNode = "StopTimer";
ROUTE2095.toField = "set_fraction";
ROUTE2095.toNode = "Stop_l_ring2_RotationInterpolator";
Group1943.children[151] = ROUTE2095;

let ROUTE2096 = browser.currentScene.createNode("ROUTE");
ROUTE2096.fromField = "fraction_changed";
ROUTE2096.fromNode = "StopTimer";
ROUTE2096.toField = "set_fraction";
ROUTE2096.toNode = "Stop_l_ring3_RotationInterpolator";
Group1943.children[152] = ROUTE2096;

let ROUTE2097 = browser.currentScene.createNode("ROUTE");
ROUTE2097.fromField = "fraction_changed";
ROUTE2097.fromNode = "StopTimer";
ROUTE2097.toField = "set_fraction";
ROUTE2097.toNode = "Stop_l_pinky0_RotationInterpolator";
Group1943.children[153] = ROUTE2097;

let ROUTE2098 = browser.currentScene.createNode("ROUTE");
ROUTE2098.fromField = "fraction_changed";
ROUTE2098.fromNode = "StopTimer";
ROUTE2098.toField = "set_fraction";
ROUTE2098.toNode = "Stop_l_pinky1_RotationInterpolator";
Group1943.children[154] = ROUTE2098;

let ROUTE2099 = browser.currentScene.createNode("ROUTE");
ROUTE2099.fromField = "fraction_changed";
ROUTE2099.fromNode = "StopTimer";
ROUTE2099.toField = "set_fraction";
ROUTE2099.toNode = "Stop_l_pinky2_RotationInterpolator";
Group1943.children[155] = ROUTE2099;

let ROUTE2100 = browser.currentScene.createNode("ROUTE");
ROUTE2100.fromField = "fraction_changed";
ROUTE2100.fromNode = "StopTimer";
ROUTE2100.toField = "set_fraction";
ROUTE2100.toNode = "Stop_l_pinky3_RotationInterpolator";
Group1943.children[156] = ROUTE2100;

let ROUTE2101 = browser.currentScene.createNode("ROUTE");
ROUTE2101.fromField = "fraction_changed";
ROUTE2101.fromNode = "StopTimer";
ROUTE2101.toField = "set_fraction";
ROUTE2101.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
Group1943.children[157] = ROUTE2101;

let ROUTE2102 = browser.currentScene.createNode("ROUTE");
ROUTE2102.fromField = "fraction_changed";
ROUTE2102.fromNode = "StopTimer";
ROUTE2102.toField = "set_fraction";
ROUTE2102.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
Group1943.children[158] = ROUTE2102;

let ROUTE2103 = browser.currentScene.createNode("ROUTE");
ROUTE2103.fromField = "fraction_changed";
ROUTE2103.fromNode = "StopTimer";
ROUTE2103.toField = "set_fraction";
ROUTE2103.toNode = "Stop_r_shoulder_RotationInterpolator";
Group1943.children[159] = ROUTE2103;

let ROUTE2104 = browser.currentScene.createNode("ROUTE");
ROUTE2104.fromField = "fraction_changed";
ROUTE2104.fromNode = "StopTimer";
ROUTE2104.toField = "set_fraction";
ROUTE2104.toNode = "Stop_r_elbow_RotationInterpolator";
Group1943.children[160] = ROUTE2104;

let ROUTE2105 = browser.currentScene.createNode("ROUTE");
ROUTE2105.fromField = "fraction_changed";
ROUTE2105.fromNode = "StopTimer";
ROUTE2105.toField = "set_fraction";
ROUTE2105.toNode = "Stop_r_wrist_RotationInterpolator";
Group1943.children[161] = ROUTE2105;

let ROUTE2106 = browser.currentScene.createNode("ROUTE");
ROUTE2106.fromField = "fraction_changed";
ROUTE2106.fromNode = "StopTimer";
ROUTE2106.toField = "set_fraction";
ROUTE2106.toNode = "Stop_r_thumb1_RotationInterpolator";
Group1943.children[162] = ROUTE2106;

let ROUTE2107 = browser.currentScene.createNode("ROUTE");
ROUTE2107.fromField = "fraction_changed";
ROUTE2107.fromNode = "StopTimer";
ROUTE2107.toField = "set_fraction";
ROUTE2107.toNode = "Stop_r_thumb2_RotationInterpolator";
Group1943.children[163] = ROUTE2107;

let ROUTE2108 = browser.currentScene.createNode("ROUTE");
ROUTE2108.fromField = "fraction_changed";
ROUTE2108.fromNode = "StopTimer";
ROUTE2108.toField = "set_fraction";
ROUTE2108.toNode = "Stop_r_thumb3_RotationInterpolator";
Group1943.children[164] = ROUTE2108;

let ROUTE2109 = browser.currentScene.createNode("ROUTE");
ROUTE2109.fromField = "fraction_changed";
ROUTE2109.fromNode = "StopTimer";
ROUTE2109.toField = "set_fraction";
ROUTE2109.toNode = "Stop_r_index0_RotationInterpolator";
Group1943.children[165] = ROUTE2109;

let ROUTE2110 = browser.currentScene.createNode("ROUTE");
ROUTE2110.fromField = "fraction_changed";
ROUTE2110.fromNode = "StopTimer";
ROUTE2110.toField = "set_fraction";
ROUTE2110.toNode = "Stop_r_index1_RotationInterpolator";
Group1943.children[166] = ROUTE2110;

let ROUTE2111 = browser.currentScene.createNode("ROUTE");
ROUTE2111.fromField = "fraction_changed";
ROUTE2111.fromNode = "StopTimer";
ROUTE2111.toField = "set_fraction";
ROUTE2111.toNode = "Stop_r_index2_RotationInterpolator";
Group1943.children[167] = ROUTE2111;

let ROUTE2112 = browser.currentScene.createNode("ROUTE");
ROUTE2112.fromField = "fraction_changed";
ROUTE2112.fromNode = "StopTimer";
ROUTE2112.toField = "set_fraction";
ROUTE2112.toNode = "Stop_r_index3_RotationInterpolator";
Group1943.children[168] = ROUTE2112;

let ROUTE2113 = browser.currentScene.createNode("ROUTE");
ROUTE2113.fromField = "fraction_changed";
ROUTE2113.fromNode = "StopTimer";
ROUTE2113.toField = "set_fraction";
ROUTE2113.toNode = "Stop_r_middle0_RotationInterpolator";
Group1943.children[169] = ROUTE2113;

let ROUTE2114 = browser.currentScene.createNode("ROUTE");
ROUTE2114.fromField = "fraction_changed";
ROUTE2114.fromNode = "StopTimer";
ROUTE2114.toField = "set_fraction";
ROUTE2114.toNode = "Stop_r_middle1_RotationInterpolator";
Group1943.children[170] = ROUTE2114;

let ROUTE2115 = browser.currentScene.createNode("ROUTE");
ROUTE2115.fromField = "fraction_changed";
ROUTE2115.fromNode = "StopTimer";
ROUTE2115.toField = "set_fraction";
ROUTE2115.toNode = "Stop_r_middle2_RotationInterpolator";
Group1943.children[171] = ROUTE2115;

let ROUTE2116 = browser.currentScene.createNode("ROUTE");
ROUTE2116.fromField = "fraction_changed";
ROUTE2116.fromNode = "StopTimer";
ROUTE2116.toField = "set_fraction";
ROUTE2116.toNode = "Stop_r_middle3_RotationInterpolator";
Group1943.children[172] = ROUTE2116;

let ROUTE2117 = browser.currentScene.createNode("ROUTE");
ROUTE2117.fromField = "fraction_changed";
ROUTE2117.fromNode = "StopTimer";
ROUTE2117.toField = "set_fraction";
ROUTE2117.toNode = "Stop_r_ring0_RotationInterpolator";
Group1943.children[173] = ROUTE2117;

let ROUTE2118 = browser.currentScene.createNode("ROUTE");
ROUTE2118.fromField = "fraction_changed";
ROUTE2118.fromNode = "StopTimer";
ROUTE2118.toField = "set_fraction";
ROUTE2118.toNode = "Stop_r_ring1_RotationInterpolator";
Group1943.children[174] = ROUTE2118;

let ROUTE2119 = browser.currentScene.createNode("ROUTE");
ROUTE2119.fromField = "fraction_changed";
ROUTE2119.fromNode = "StopTimer";
ROUTE2119.toField = "set_fraction";
ROUTE2119.toNode = "Stop_r_ring2_RotationInterpolator";
Group1943.children[175] = ROUTE2119;

let ROUTE2120 = browser.currentScene.createNode("ROUTE");
ROUTE2120.fromField = "fraction_changed";
ROUTE2120.fromNode = "StopTimer";
ROUTE2120.toField = "set_fraction";
ROUTE2120.toNode = "Stop_r_ring3_RotationInterpolator";
Group1943.children[176] = ROUTE2120;

let ROUTE2121 = browser.currentScene.createNode("ROUTE");
ROUTE2121.fromField = "fraction_changed";
ROUTE2121.fromNode = "StopTimer";
ROUTE2121.toField = "set_fraction";
ROUTE2121.toNode = "Stop_r_pinky0_RotationInterpolator";
Group1943.children[177] = ROUTE2121;

let ROUTE2122 = browser.currentScene.createNode("ROUTE");
ROUTE2122.fromField = "fraction_changed";
ROUTE2122.fromNode = "StopTimer";
ROUTE2122.toField = "set_fraction";
ROUTE2122.toNode = "Stop_r_pinky1_RotationInterpolator";
Group1943.children[178] = ROUTE2122;

let ROUTE2123 = browser.currentScene.createNode("ROUTE");
ROUTE2123.fromField = "fraction_changed";
ROUTE2123.fromNode = "StopTimer";
ROUTE2123.toField = "set_fraction";
ROUTE2123.toNode = "Stop_r_pinky2_RotationInterpolator";
Group1943.children[179] = ROUTE2123;

let ROUTE2124 = browser.currentScene.createNode("ROUTE");
ROUTE2124.fromField = "fraction_changed";
ROUTE2124.fromNode = "StopTimer";
ROUTE2124.toField = "set_fraction";
ROUTE2124.toNode = "Stop_r_pinky3_RotationInterpolator";
Group1943.children[180] = ROUTE2124;

let ROUTE2125 = browser.currentScene.createNode("ROUTE");
ROUTE2125.fromField = "value_changed";
ROUTE2125.fromNode = "Stop_HumanoidRoot_TranslationInterpolator";
ROUTE2125.toField = "translation";
ROUTE2125.toNode = "hanim_humanoid_root";
Group1943.children[181] = ROUTE2125;

let ROUTE2126 = browser.currentScene.createNode("ROUTE");
ROUTE2126.fromField = "value_changed";
ROUTE2126.fromNode = "Stop_HumanoidRoot_RotationInterpolator";
ROUTE2126.toField = "rotation";
ROUTE2126.toNode = "hanim_humanoid_root";
Group1943.children[182] = ROUTE2126;

let ROUTE2127 = browser.currentScene.createNode("ROUTE");
ROUTE2127.fromField = "value_changed";
ROUTE2127.fromNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE2127.toField = "rotation";
ROUTE2127.toNode = "hanim_sacroiliac";
Group1943.children[183] = ROUTE2127;

let ROUTE2128 = browser.currentScene.createNode("ROUTE");
ROUTE2128.fromField = "value_changed";
ROUTE2128.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE2128.toField = "rotation";
ROUTE2128.toNode = "hanim_l_hip";
Group1943.children[184] = ROUTE2128;

let ROUTE2129 = browser.currentScene.createNode("ROUTE");
ROUTE2129.fromField = "value_changed";
ROUTE2129.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE2129.toField = "rotation";
ROUTE2129.toNode = "hanim_l_knee";
Group1943.children[185] = ROUTE2129;

let ROUTE2130 = browser.currentScene.createNode("ROUTE");
ROUTE2130.fromField = "value_changed";
ROUTE2130.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE2130.toField = "rotation";
ROUTE2130.toNode = "hanim_l_ankle";
Group1943.children[186] = ROUTE2130;

let ROUTE2131 = browser.currentScene.createNode("ROUTE");
ROUTE2131.fromField = "value_changed";
ROUTE2131.fromNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE2131.toField = "rotation";
ROUTE2131.toNode = "hanim_l_subtalar";
Group1943.children[187] = ROUTE2131;

let ROUTE2132 = browser.currentScene.createNode("ROUTE");
ROUTE2132.fromField = "value_changed";
ROUTE2132.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE2132.toField = "rotation";
ROUTE2132.toNode = "hanim_l_midtarsal";
Group1943.children[188] = ROUTE2132;

let ROUTE2133 = browser.currentScene.createNode("ROUTE");
ROUTE2133.fromField = "value_changed";
ROUTE2133.fromNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE2133.toField = "rotation";
ROUTE2133.toNode = "hanim_l_metatarsal";
Group1943.children[189] = ROUTE2133;

let ROUTE2134 = browser.currentScene.createNode("ROUTE");
ROUTE2134.fromField = "value_changed";
ROUTE2134.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE2134.toField = "rotation";
ROUTE2134.toNode = "hanim_r_hip";
Group1943.children[190] = ROUTE2134;

let ROUTE2135 = browser.currentScene.createNode("ROUTE");
ROUTE2135.fromField = "value_changed";
ROUTE2135.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE2135.toField = "rotation";
ROUTE2135.toNode = "hanim_r_knee";
Group1943.children[191] = ROUTE2135;

let ROUTE2136 = browser.currentScene.createNode("ROUTE");
ROUTE2136.fromField = "value_changed";
ROUTE2136.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE2136.toField = "rotation";
ROUTE2136.toNode = "hanim_r_ankle";
Group1943.children[192] = ROUTE2136;

let ROUTE2137 = browser.currentScene.createNode("ROUTE");
ROUTE2137.fromField = "value_changed";
ROUTE2137.fromNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE2137.toField = "rotation";
ROUTE2137.toNode = "hanim_r_subtalar";
Group1943.children[193] = ROUTE2137;

let ROUTE2138 = browser.currentScene.createNode("ROUTE");
ROUTE2138.fromField = "value_changed";
ROUTE2138.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE2138.toField = "rotation";
ROUTE2138.toNode = "hanim_r_midtarsal";
Group1943.children[194] = ROUTE2138;

let ROUTE2139 = browser.currentScene.createNode("ROUTE");
ROUTE2139.fromField = "value_changed";
ROUTE2139.fromNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE2139.toField = "rotation";
ROUTE2139.toNode = "hanim_r_metatarsal";
Group1943.children[195] = ROUTE2139;

let ROUTE2140 = browser.currentScene.createNode("ROUTE");
ROUTE2140.fromField = "value_changed";
ROUTE2140.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE2140.toField = "rotation";
ROUTE2140.toNode = "hanim_vl5";
Group1943.children[196] = ROUTE2140;

let ROUTE2141 = browser.currentScene.createNode("ROUTE");
ROUTE2141.fromField = "value_changed";
ROUTE2141.fromNode = "Stop_vl4_RotationInterpolator";
ROUTE2141.toField = "rotation";
ROUTE2141.toNode = "hanim_vl4";
Group1943.children[197] = ROUTE2141;

let ROUTE2142 = browser.currentScene.createNode("ROUTE");
ROUTE2142.fromField = "value_changed";
ROUTE2142.fromNode = "Stop_vl3_RotationInterpolator";
ROUTE2142.toField = "rotation";
ROUTE2142.toNode = "hanim_vl3";
Group1943.children[198] = ROUTE2142;

let ROUTE2143 = browser.currentScene.createNode("ROUTE");
ROUTE2143.fromField = "value_changed";
ROUTE2143.fromNode = "Stop_vl2_RotationInterpolator";
ROUTE2143.toField = "rotation";
ROUTE2143.toNode = "hanim_vl2";
Group1943.children[199] = ROUTE2143;

let ROUTE2144 = browser.currentScene.createNode("ROUTE");
ROUTE2144.fromField = "value_changed";
ROUTE2144.fromNode = "Stop_vl1_RotationInterpolator";
ROUTE2144.toField = "rotation";
ROUTE2144.toNode = "hanim_vl1";
Group1943.children[200] = ROUTE2144;

let ROUTE2145 = browser.currentScene.createNode("ROUTE");
ROUTE2145.fromField = "value_changed";
ROUTE2145.fromNode = "Stop_vt12_RotationInterpolator";
ROUTE2145.toField = "rotation";
ROUTE2145.toNode = "hanim_vt12";
Group1943.children[201] = ROUTE2145;

let ROUTE2146 = browser.currentScene.createNode("ROUTE");
ROUTE2146.fromField = "value_changed";
ROUTE2146.fromNode = "Stop_vt11_RotationInterpolator";
ROUTE2146.toField = "rotation";
ROUTE2146.toNode = "hanim_vt11";
Group1943.children[202] = ROUTE2146;

let ROUTE2147 = browser.currentScene.createNode("ROUTE");
ROUTE2147.fromField = "value_changed";
ROUTE2147.fromNode = "Stop_vt10_RotationInterpolator";
ROUTE2147.toField = "rotation";
ROUTE2147.toNode = "hanim_vt10";
Group1943.children[203] = ROUTE2147;

let ROUTE2148 = browser.currentScene.createNode("ROUTE");
ROUTE2148.fromField = "value_changed";
ROUTE2148.fromNode = "Stop_vt9_RotationInterpolator";
ROUTE2148.toField = "rotation";
ROUTE2148.toNode = "hanim_vt9";
Group1943.children[204] = ROUTE2148;

let ROUTE2149 = browser.currentScene.createNode("ROUTE");
ROUTE2149.fromField = "value_changed";
ROUTE2149.fromNode = "Stop_vt8_RotationInterpolator";
ROUTE2149.toField = "rotation";
ROUTE2149.toNode = "hanim_vt8";
Group1943.children[205] = ROUTE2149;

let ROUTE2150 = browser.currentScene.createNode("ROUTE");
ROUTE2150.fromField = "value_changed";
ROUTE2150.fromNode = "Stop_vt7_RotationInterpolator";
ROUTE2150.toField = "rotation";
ROUTE2150.toNode = "hanim_vt7";
Group1943.children[206] = ROUTE2150;

let ROUTE2151 = browser.currentScene.createNode("ROUTE");
ROUTE2151.fromField = "value_changed";
ROUTE2151.fromNode = "Stop_vt6_RotationInterpolator";
ROUTE2151.toField = "rotation";
ROUTE2151.toNode = "hanim_vt6";
Group1943.children[207] = ROUTE2151;

let ROUTE2152 = browser.currentScene.createNode("ROUTE");
ROUTE2152.fromField = "value_changed";
ROUTE2152.fromNode = "Stop_vt5_RotationInterpolator";
ROUTE2152.toField = "rotation";
ROUTE2152.toNode = "hanim_vt5";
Group1943.children[208] = ROUTE2152;

let ROUTE2153 = browser.currentScene.createNode("ROUTE");
ROUTE2153.fromField = "value_changed";
ROUTE2153.fromNode = "Stop_vt4_RotationInterpolator";
ROUTE2153.toField = "rotation";
ROUTE2153.toNode = "hanim_vt4";
Group1943.children[209] = ROUTE2153;

let ROUTE2154 = browser.currentScene.createNode("ROUTE");
ROUTE2154.fromField = "value_changed";
ROUTE2154.fromNode = "Stop_vt3_RotationInterpolator";
ROUTE2154.toField = "rotation";
ROUTE2154.toNode = "hanim_vt3";
Group1943.children[210] = ROUTE2154;

let ROUTE2155 = browser.currentScene.createNode("ROUTE");
ROUTE2155.fromField = "value_changed";
ROUTE2155.fromNode = "Stop_vt2_RotationInterpolator";
ROUTE2155.toField = "rotation";
ROUTE2155.toNode = "hanim_vt2";
Group1943.children[211] = ROUTE2155;

let ROUTE2156 = browser.currentScene.createNode("ROUTE");
ROUTE2156.fromField = "value_changed";
ROUTE2156.fromNode = "Stop_vt1_RotationInterpolator";
ROUTE2156.toField = "rotation";
ROUTE2156.toNode = "hanim_vt1";
Group1943.children[212] = ROUTE2156;

let ROUTE2157 = browser.currentScene.createNode("ROUTE");
ROUTE2157.fromField = "value_changed";
ROUTE2157.fromNode = "Stop_vc7_RotationInterpolator";
ROUTE2157.toField = "rotation";
ROUTE2157.toNode = "hanim_vc7";
Group1943.children[213] = ROUTE2157;

let ROUTE2158 = browser.currentScene.createNode("ROUTE");
ROUTE2158.fromField = "value_changed";
ROUTE2158.fromNode = "Stop_vc6_RotationInterpolator";
ROUTE2158.toField = "rotation";
ROUTE2158.toNode = "hanim_vc6";
Group1943.children[214] = ROUTE2158;

let ROUTE2159 = browser.currentScene.createNode("ROUTE");
ROUTE2159.fromField = "value_changed";
ROUTE2159.fromNode = "Stop_vc5_RotationInterpolator";
ROUTE2159.toField = "rotation";
ROUTE2159.toNode = "hanim_vc5";
Group1943.children[215] = ROUTE2159;

let ROUTE2160 = browser.currentScene.createNode("ROUTE");
ROUTE2160.fromField = "value_changed";
ROUTE2160.fromNode = "Stop_vc4_RotationInterpolator";
ROUTE2160.toField = "rotation";
ROUTE2160.toNode = "hanim_vc4";
Group1943.children[216] = ROUTE2160;

let ROUTE2161 = browser.currentScene.createNode("ROUTE");
ROUTE2161.fromField = "value_changed";
ROUTE2161.fromNode = "Stop_vc3_RotationInterpolator";
ROUTE2161.toField = "rotation";
ROUTE2161.toNode = "hanim_vc3";
Group1943.children[217] = ROUTE2161;

let ROUTE2162 = browser.currentScene.createNode("ROUTE");
ROUTE2162.fromField = "value_changed";
ROUTE2162.fromNode = "Stop_vc2_RotationInterpolator";
ROUTE2162.toField = "rotation";
ROUTE2162.toNode = "hanim_vc2";
Group1943.children[218] = ROUTE2162;

let ROUTE2163 = browser.currentScene.createNode("ROUTE");
ROUTE2163.fromField = "value_changed";
ROUTE2163.fromNode = "Stop_vc1_RotationInterpolator";
ROUTE2163.toField = "rotation";
ROUTE2163.toNode = "hanim_vc1";
Group1943.children[219] = ROUTE2163;

let ROUTE2164 = browser.currentScene.createNode("ROUTE");
ROUTE2164.fromField = "value_changed";
ROUTE2164.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE2164.toField = "rotation";
ROUTE2164.toNode = "hanim_skullbase";
Group1943.children[220] = ROUTE2164;

let ROUTE2165 = browser.currentScene.createNode("ROUTE");
ROUTE2165.fromField = "value_changed";
ROUTE2165.fromNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE2165.toField = "rotation";
ROUTE2165.toNode = "hanim_l_eyeball_joint";
Group1943.children[221] = ROUTE2165;

let ROUTE2166 = browser.currentScene.createNode("ROUTE");
ROUTE2166.fromField = "value_changed";
ROUTE2166.fromNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE2166.toField = "rotation";
ROUTE2166.toNode = "hanim_r_eyeball_joint";
Group1943.children[222] = ROUTE2166;

let ROUTE2167 = browser.currentScene.createNode("ROUTE");
ROUTE2167.fromField = "value_changed";
ROUTE2167.fromNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE2167.toField = "rotation";
ROUTE2167.toNode = "hanim_l_sternoclavicular";
Group1943.children[223] = ROUTE2167;

let ROUTE2168 = browser.currentScene.createNode("ROUTE");
ROUTE2168.fromField = "value_changed";
ROUTE2168.fromNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE2168.toField = "rotation";
ROUTE2168.toNode = "hanim_l_acromioclavicular";
Group1943.children[224] = ROUTE2168;

let ROUTE2169 = browser.currentScene.createNode("ROUTE");
ROUTE2169.fromField = "value_changed";
ROUTE2169.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE2169.toField = "rotation";
ROUTE2169.toNode = "hanim_l_shoulder";
Group1943.children[225] = ROUTE2169;

let ROUTE2170 = browser.currentScene.createNode("ROUTE");
ROUTE2170.fromField = "value_changed";
ROUTE2170.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE2170.toField = "rotation";
ROUTE2170.toNode = "hanim_l_elbow";
Group1943.children[226] = ROUTE2170;

let ROUTE2171 = browser.currentScene.createNode("ROUTE");
ROUTE2171.fromField = "value_changed";
ROUTE2171.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE2171.toField = "rotation";
ROUTE2171.toNode = "hanim_l_wrist";
Group1943.children[227] = ROUTE2171;

let ROUTE2172 = browser.currentScene.createNode("ROUTE");
ROUTE2172.fromField = "value_changed";
ROUTE2172.fromNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE2172.toField = "rotation";
ROUTE2172.toNode = "hanim_l_thumb1";
Group1943.children[228] = ROUTE2172;

let ROUTE2173 = browser.currentScene.createNode("ROUTE");
ROUTE2173.fromField = "value_changed";
ROUTE2173.fromNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE2173.toField = "rotation";
ROUTE2173.toNode = "hanim_l_thumb2";
Group1943.children[229] = ROUTE2173;

let ROUTE2174 = browser.currentScene.createNode("ROUTE");
ROUTE2174.fromField = "value_changed";
ROUTE2174.fromNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE2174.toField = "rotation";
ROUTE2174.toNode = "hanim_l_thumb3";
Group1943.children[230] = ROUTE2174;

let ROUTE2175 = browser.currentScene.createNode("ROUTE");
ROUTE2175.fromField = "value_changed";
ROUTE2175.fromNode = "Stop_l_index0_RotationInterpolator";
ROUTE2175.toField = "rotation";
ROUTE2175.toNode = "hanim_l_index0";
Group1943.children[231] = ROUTE2175;

let ROUTE2176 = browser.currentScene.createNode("ROUTE");
ROUTE2176.fromField = "value_changed";
ROUTE2176.fromNode = "Stop_l_index1_RotationInterpolator";
ROUTE2176.toField = "rotation";
ROUTE2176.toNode = "hanim_l_index1";
Group1943.children[232] = ROUTE2176;

let ROUTE2177 = browser.currentScene.createNode("ROUTE");
ROUTE2177.fromField = "value_changed";
ROUTE2177.fromNode = "Stop_l_index2_RotationInterpolator";
ROUTE2177.toField = "rotation";
ROUTE2177.toNode = "hanim_l_index2";
Group1943.children[233] = ROUTE2177;

let ROUTE2178 = browser.currentScene.createNode("ROUTE");
ROUTE2178.fromField = "value_changed";
ROUTE2178.fromNode = "Stop_l_index3_RotationInterpolator";
ROUTE2178.toField = "rotation";
ROUTE2178.toNode = "hanim_l_index3";
Group1943.children[234] = ROUTE2178;

let ROUTE2179 = browser.currentScene.createNode("ROUTE");
ROUTE2179.fromField = "value_changed";
ROUTE2179.fromNode = "Stop_l_middle0_RotationInterpolator";
ROUTE2179.toField = "rotation";
ROUTE2179.toNode = "hanim_l_middle0";
Group1943.children[235] = ROUTE2179;

let ROUTE2180 = browser.currentScene.createNode("ROUTE");
ROUTE2180.fromField = "value_changed";
ROUTE2180.fromNode = "Stop_l_middle1_RotationInterpolator";
ROUTE2180.toField = "rotation";
ROUTE2180.toNode = "hanim_l_middle1";
Group1943.children[236] = ROUTE2180;

let ROUTE2181 = browser.currentScene.createNode("ROUTE");
ROUTE2181.fromField = "value_changed";
ROUTE2181.fromNode = "Stop_l_middle2_RotationInterpolator";
ROUTE2181.toField = "rotation";
ROUTE2181.toNode = "hanim_l_middle2";
Group1943.children[237] = ROUTE2181;

let ROUTE2182 = browser.currentScene.createNode("ROUTE");
ROUTE2182.fromField = "value_changed";
ROUTE2182.fromNode = "Stop_l_middle3_RotationInterpolator";
ROUTE2182.toField = "rotation";
ROUTE2182.toNode = "hanim_l_middle3";
Group1943.children[238] = ROUTE2182;

let ROUTE2183 = browser.currentScene.createNode("ROUTE");
ROUTE2183.fromField = "value_changed";
ROUTE2183.fromNode = "Stop_l_ring0_RotationInterpolator";
ROUTE2183.toField = "rotation";
ROUTE2183.toNode = "hanim_l_ring0";
Group1943.children[239] = ROUTE2183;

let ROUTE2184 = browser.currentScene.createNode("ROUTE");
ROUTE2184.fromField = "value_changed";
ROUTE2184.fromNode = "Stop_l_ring1_RotationInterpolator";
ROUTE2184.toField = "rotation";
ROUTE2184.toNode = "hanim_l_ring1";
Group1943.children[240] = ROUTE2184;

let ROUTE2185 = browser.currentScene.createNode("ROUTE");
ROUTE2185.fromField = "value_changed";
ROUTE2185.fromNode = "Stop_l_ring2_RotationInterpolator";
ROUTE2185.toField = "rotation";
ROUTE2185.toNode = "hanim_l_ring2";
Group1943.children[241] = ROUTE2185;

let ROUTE2186 = browser.currentScene.createNode("ROUTE");
ROUTE2186.fromField = "value_changed";
ROUTE2186.fromNode = "Stop_l_ring3_RotationInterpolator";
ROUTE2186.toField = "rotation";
ROUTE2186.toNode = "hanim_l_ring3";
Group1943.children[242] = ROUTE2186;

let ROUTE2187 = browser.currentScene.createNode("ROUTE");
ROUTE2187.fromField = "value_changed";
ROUTE2187.fromNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE2187.toField = "rotation";
ROUTE2187.toNode = "hanim_l_pinky0";
Group1943.children[243] = ROUTE2187;

let ROUTE2188 = browser.currentScene.createNode("ROUTE");
ROUTE2188.fromField = "value_changed";
ROUTE2188.fromNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE2188.toField = "rotation";
ROUTE2188.toNode = "hanim_l_pinky1";
Group1943.children[244] = ROUTE2188;

let ROUTE2189 = browser.currentScene.createNode("ROUTE");
ROUTE2189.fromField = "value_changed";
ROUTE2189.fromNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE2189.toField = "rotation";
ROUTE2189.toNode = "hanim_l_pinky2";
Group1943.children[245] = ROUTE2189;

let ROUTE2190 = browser.currentScene.createNode("ROUTE");
ROUTE2190.fromField = "value_changed";
ROUTE2190.fromNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE2190.toField = "rotation";
ROUTE2190.toNode = "hanim_l_pinky3";
Group1943.children[246] = ROUTE2190;

let ROUTE2191 = browser.currentScene.createNode("ROUTE");
ROUTE2191.fromField = "value_changed";
ROUTE2191.fromNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE2191.toField = "rotation";
ROUTE2191.toNode = "hanim_r_sternoclavicular";
Group1943.children[247] = ROUTE2191;

let ROUTE2192 = browser.currentScene.createNode("ROUTE");
ROUTE2192.fromField = "value_changed";
ROUTE2192.fromNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE2192.toField = "rotation";
ROUTE2192.toNode = "hanim_r_acromioclavicular";
Group1943.children[248] = ROUTE2192;

let ROUTE2193 = browser.currentScene.createNode("ROUTE");
ROUTE2193.fromField = "value_changed";
ROUTE2193.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE2193.toField = "rotation";
ROUTE2193.toNode = "hanim_r_shoulder";
Group1943.children[249] = ROUTE2193;

let ROUTE2194 = browser.currentScene.createNode("ROUTE");
ROUTE2194.fromField = "value_changed";
ROUTE2194.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE2194.toField = "rotation";
ROUTE2194.toNode = "hanim_r_elbow";
Group1943.children[250] = ROUTE2194;

let ROUTE2195 = browser.currentScene.createNode("ROUTE");
ROUTE2195.fromField = "value_changed";
ROUTE2195.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE2195.toField = "rotation";
ROUTE2195.toNode = "hanim_r_wrist";
Group1943.children[251] = ROUTE2195;

let ROUTE2196 = browser.currentScene.createNode("ROUTE");
ROUTE2196.fromField = "value_changed";
ROUTE2196.fromNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE2196.toField = "rotation";
ROUTE2196.toNode = "hanim_r_thumb1";
Group1943.children[252] = ROUTE2196;

let ROUTE2197 = browser.currentScene.createNode("ROUTE");
ROUTE2197.fromField = "value_changed";
ROUTE2197.fromNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE2197.toField = "rotation";
ROUTE2197.toNode = "hanim_r_thumb2";
Group1943.children[253] = ROUTE2197;

let ROUTE2198 = browser.currentScene.createNode("ROUTE");
ROUTE2198.fromField = "value_changed";
ROUTE2198.fromNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE2198.toField = "rotation";
ROUTE2198.toNode = "hanim_r_thumb3";
Group1943.children[254] = ROUTE2198;

let ROUTE2199 = browser.currentScene.createNode("ROUTE");
ROUTE2199.fromField = "value_changed";
ROUTE2199.fromNode = "Stop_r_index0_RotationInterpolator";
ROUTE2199.toField = "rotation";
ROUTE2199.toNode = "hanim_r_index0";
Group1943.children[255] = ROUTE2199;

let ROUTE2200 = browser.currentScene.createNode("ROUTE");
ROUTE2200.fromField = "value_changed";
ROUTE2200.fromNode = "Stop_r_index1_RotationInterpolator";
ROUTE2200.toField = "rotation";
ROUTE2200.toNode = "hanim_r_index1";
Group1943.children[256] = ROUTE2200;

let ROUTE2201 = browser.currentScene.createNode("ROUTE");
ROUTE2201.fromField = "value_changed";
ROUTE2201.fromNode = "Stop_r_index2_RotationInterpolator";
ROUTE2201.toField = "rotation";
ROUTE2201.toNode = "hanim_r_index2";
Group1943.children[257] = ROUTE2201;

let ROUTE2202 = browser.currentScene.createNode("ROUTE");
ROUTE2202.fromField = "value_changed";
ROUTE2202.fromNode = "Stop_r_index3_RotationInterpolator";
ROUTE2202.toField = "rotation";
ROUTE2202.toNode = "hanim_r_index3";
Group1943.children[258] = ROUTE2202;

let ROUTE2203 = browser.currentScene.createNode("ROUTE");
ROUTE2203.fromField = "value_changed";
ROUTE2203.fromNode = "Stop_r_middle0_RotationInterpolator";
ROUTE2203.toField = "rotation";
ROUTE2203.toNode = "hanim_r_middle0";
Group1943.children[259] = ROUTE2203;

let ROUTE2204 = browser.currentScene.createNode("ROUTE");
ROUTE2204.fromField = "value_changed";
ROUTE2204.fromNode = "Stop_r_middle1_RotationInterpolator";
ROUTE2204.toField = "rotation";
ROUTE2204.toNode = "hanim_r_middle1";
Group1943.children[260] = ROUTE2204;

let ROUTE2205 = browser.currentScene.createNode("ROUTE");
ROUTE2205.fromField = "value_changed";
ROUTE2205.fromNode = "Stop_r_middle2_RotationInterpolator";
ROUTE2205.toField = "rotation";
ROUTE2205.toNode = "hanim_r_middle2";
Group1943.children[261] = ROUTE2205;

let ROUTE2206 = browser.currentScene.createNode("ROUTE");
ROUTE2206.fromField = "value_changed";
ROUTE2206.fromNode = "Stop_r_middle3_RotationInterpolator";
ROUTE2206.toField = "rotation";
ROUTE2206.toNode = "hanim_r_middle3";
Group1943.children[262] = ROUTE2206;

let ROUTE2207 = browser.currentScene.createNode("ROUTE");
ROUTE2207.fromField = "value_changed";
ROUTE2207.fromNode = "Stop_r_ring0_RotationInterpolator";
ROUTE2207.toField = "rotation";
ROUTE2207.toNode = "hanim_r_ring0";
Group1943.children[263] = ROUTE2207;

let ROUTE2208 = browser.currentScene.createNode("ROUTE");
ROUTE2208.fromField = "value_changed";
ROUTE2208.fromNode = "Stop_r_ring1_RotationInterpolator";
ROUTE2208.toField = "rotation";
ROUTE2208.toNode = "hanim_r_ring1";
Group1943.children[264] = ROUTE2208;

let ROUTE2209 = browser.currentScene.createNode("ROUTE");
ROUTE2209.fromField = "value_changed";
ROUTE2209.fromNode = "Stop_r_ring2_RotationInterpolator";
ROUTE2209.toField = "rotation";
ROUTE2209.toNode = "hanim_r_ring2";
Group1943.children[265] = ROUTE2209;

let ROUTE2210 = browser.currentScene.createNode("ROUTE");
ROUTE2210.fromField = "value_changed";
ROUTE2210.fromNode = "Stop_r_ring3_RotationInterpolator";
ROUTE2210.toField = "rotation";
ROUTE2210.toNode = "hanim_r_ring3";
Group1943.children[266] = ROUTE2210;

let ROUTE2211 = browser.currentScene.createNode("ROUTE");
ROUTE2211.fromField = "value_changed";
ROUTE2211.fromNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE2211.toField = "rotation";
ROUTE2211.toNode = "hanim_r_pinky0";
Group1943.children[267] = ROUTE2211;

let ROUTE2212 = browser.currentScene.createNode("ROUTE");
ROUTE2212.fromField = "value_changed";
ROUTE2212.fromNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE2212.toField = "rotation";
ROUTE2212.toNode = "hanim_r_pinky1";
Group1943.children[268] = ROUTE2212;

let ROUTE2213 = browser.currentScene.createNode("ROUTE");
ROUTE2213.fromField = "value_changed";
ROUTE2213.fromNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE2213.toField = "rotation";
ROUTE2213.toNode = "hanim_r_pinky2";
Group1943.children[269] = ROUTE2213;

let ROUTE2214 = browser.currentScene.createNode("ROUTE");
ROUTE2214.fromField = "value_changed";
ROUTE2214.fromNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE2214.toField = "rotation";
ROUTE2214.toNode = "hanim_r_pinky3";
Group1943.children[270] = ROUTE2214;

browser.currentScene.children[13] = Group1943;

let Group2215 = browser.currentScene.createNode("Group");
Group2215.DEF = "StandAnimation";
let TimeSensor2216 = browser.currentScene.createNode("TimeSensor");
TimeSensor2216.DEF = "StandTimer";
TimeSensor2216.cycleInterval = 5.73;
TimeSensor2216.loop = True;
Group2215.children = new MFNode();

Group2215.children[0] = TimeSensor2216;

let OrientationInterpolator2217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2217.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator2217.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2217.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group2215.children[1] = OrientationInterpolator2217;

let OrientationInterpolator2218 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2218.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator2218.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2218.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[2] = OrientationInterpolator2218;

let OrientationInterpolator2219 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2219.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator2219.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2219.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[3] = OrientationInterpolator2219;

let OrientationInterpolator2220 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2220.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator2220.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2220.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[4] = OrientationInterpolator2220;

let OrientationInterpolator2221 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2221.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator2221.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2221.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[5] = OrientationInterpolator2221;

let OrientationInterpolator2222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2222.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator2222.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2222.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[6] = OrientationInterpolator2222;

let OrientationInterpolator2223 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2223.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator2223.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2223.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[7] = OrientationInterpolator2223;

let OrientationInterpolator2224 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2224.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator2224.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2224.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group2215.children[8] = OrientationInterpolator2224;

let OrientationInterpolator2225 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2225.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator2225.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2225.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[9] = OrientationInterpolator2225;

let OrientationInterpolator2226 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2226.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator2226.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2226.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[10] = OrientationInterpolator2226;

let OrientationInterpolator2227 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2227.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator2227.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2227.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[11] = OrientationInterpolator2227;

let OrientationInterpolator2228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2228.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator2228.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2228.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[12] = OrientationInterpolator2228;

let OrientationInterpolator2229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2229.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator2229.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2229.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[13] = OrientationInterpolator2229;

let OrientationInterpolator2230 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2230.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator2230.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2230.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[14] = OrientationInterpolator2230;

let OrientationInterpolator2231 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2231.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator2231.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2231.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group2215.children[15] = OrientationInterpolator2231;

let OrientationInterpolator2232 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2232.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator2232.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2232.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2215.children[16] = OrientationInterpolator2232;

let OrientationInterpolator2233 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2233.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator2233.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2233.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2215.children[17] = OrientationInterpolator2233;

let OrientationInterpolator2234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2234.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator2234.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2234.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[18] = OrientationInterpolator2234;

let OrientationInterpolator2235 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2235.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator2235.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2235.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[19] = OrientationInterpolator2235;

let OrientationInterpolator2236 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2236.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator2236.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2236.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[20] = OrientationInterpolator2236;

let PositionInterpolator2237 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2237.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator2237.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2237.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2215.children[21] = PositionInterpolator2237;

let OrientationInterpolator2238 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2238.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2238.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2238.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[22] = OrientationInterpolator2238;

let OrientationInterpolator2239 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2239.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2239.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2239.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[23] = OrientationInterpolator2239;

let OrientationInterpolator2240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2240.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2240.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2240.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[24] = OrientationInterpolator2240;

let OrientationInterpolator2241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2241.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2241.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2241.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[25] = OrientationInterpolator2241;

let OrientationInterpolator2242 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2242.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator2242.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[26] = OrientationInterpolator2242;

let OrientationInterpolator2243 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2243.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator2243.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2243.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[27] = OrientationInterpolator2243;

let OrientationInterpolator2244 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2244.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator2244.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2244.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group2215.children[28] = OrientationInterpolator2244;

let OrientationInterpolator2245 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2245.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator2245.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2245.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[29] = OrientationInterpolator2245;

let OrientationInterpolator2246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2246.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator2246.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2246.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2215.children[30] = OrientationInterpolator2246;

let OrientationInterpolator2247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2247.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator2247.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group2215.children[31] = OrientationInterpolator2247;

let OrientationInterpolator2248 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2248.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator2248.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2248.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group2215.children[32] = OrientationInterpolator2248;

let OrientationInterpolator2249 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2249.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator2249.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2249.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group2215.children[33] = OrientationInterpolator2249;

let ROUTE2250 = browser.currentScene.createNode("ROUTE");
ROUTE2250.fromField = "fraction_changed";
ROUTE2250.fromNode = "StandTimer";
ROUTE2250.toField = "set_fraction";
ROUTE2250.toNode = "Stand_r_ankle_RotationInterpolator";
Group2215.children[34] = ROUTE2250;

let ROUTE2251 = browser.currentScene.createNode("ROUTE");
ROUTE2251.fromField = "fraction_changed";
ROUTE2251.fromNode = "StandTimer";
ROUTE2251.toField = "set_fraction";
ROUTE2251.toNode = "Stand_r_knee_RotationInterpolator";
Group2215.children[35] = ROUTE2251;

let ROUTE2252 = browser.currentScene.createNode("ROUTE");
ROUTE2252.fromField = "fraction_changed";
ROUTE2252.fromNode = "StandTimer";
ROUTE2252.toField = "set_fraction";
ROUTE2252.toNode = "Stand_r_hip_RotationInterpolator";
Group2215.children[36] = ROUTE2252;

let ROUTE2253 = browser.currentScene.createNode("ROUTE");
ROUTE2253.fromField = "fraction_changed";
ROUTE2253.fromNode = "StandTimer";
ROUTE2253.toField = "set_fraction";
ROUTE2253.toNode = "Stand_l_ankle_RotationInterpolator";
Group2215.children[37] = ROUTE2253;

let ROUTE2254 = browser.currentScene.createNode("ROUTE");
ROUTE2254.fromField = "fraction_changed";
ROUTE2254.fromNode = "StandTimer";
ROUTE2254.toField = "set_fraction";
ROUTE2254.toNode = "Stand_l_knee_RotationInterpolator";
Group2215.children[38] = ROUTE2254;

let ROUTE2255 = browser.currentScene.createNode("ROUTE");
ROUTE2255.fromField = "fraction_changed";
ROUTE2255.fromNode = "StandTimer";
ROUTE2255.toField = "set_fraction";
ROUTE2255.toNode = "Stand_l_hip_RotationInterpolator";
Group2215.children[39] = ROUTE2255;

let ROUTE2256 = browser.currentScene.createNode("ROUTE");
ROUTE2256.fromField = "fraction_changed";
ROUTE2256.fromNode = "StandTimer";
ROUTE2256.toField = "set_fraction";
ROUTE2256.toNode = "Stand_lower_body_RotationInterpolator";
Group2215.children[40] = ROUTE2256;

let ROUTE2257 = browser.currentScene.createNode("ROUTE");
ROUTE2257.fromField = "fraction_changed";
ROUTE2257.fromNode = "StandTimer";
ROUTE2257.toField = "set_fraction";
ROUTE2257.toNode = "Stand_r_wrist_RotationInterpolator";
Group2215.children[41] = ROUTE2257;

let ROUTE2258 = browser.currentScene.createNode("ROUTE");
ROUTE2258.fromField = "fraction_changed";
ROUTE2258.fromNode = "StandTimer";
ROUTE2258.toField = "set_fraction";
ROUTE2258.toNode = "Stand_r_elbow_RotationInterpolator";
Group2215.children[42] = ROUTE2258;

let ROUTE2259 = browser.currentScene.createNode("ROUTE");
ROUTE2259.fromField = "fraction_changed";
ROUTE2259.fromNode = "StandTimer";
ROUTE2259.toField = "set_fraction";
ROUTE2259.toNode = "Stand_r_shoulder_RotationInterpolator";
Group2215.children[43] = ROUTE2259;

let ROUTE2260 = browser.currentScene.createNode("ROUTE");
ROUTE2260.fromField = "fraction_changed";
ROUTE2260.fromNode = "StandTimer";
ROUTE2260.toField = "set_fraction";
ROUTE2260.toNode = "Stand_l_wrist_RotationInterpolator";
Group2215.children[44] = ROUTE2260;

let ROUTE2261 = browser.currentScene.createNode("ROUTE");
ROUTE2261.fromField = "fraction_changed";
ROUTE2261.fromNode = "StandTimer";
ROUTE2261.toField = "set_fraction";
ROUTE2261.toNode = "Stand_l_elbow_RotationInterpolator";
Group2215.children[45] = ROUTE2261;

let ROUTE2262 = browser.currentScene.createNode("ROUTE");
ROUTE2262.fromField = "fraction_changed";
ROUTE2262.fromNode = "StandTimer";
ROUTE2262.toField = "set_fraction";
ROUTE2262.toNode = "Stand_l_shoulder_RotationInterpolator";
Group2215.children[46] = ROUTE2262;

let ROUTE2263 = browser.currentScene.createNode("ROUTE");
ROUTE2263.fromField = "fraction_changed";
ROUTE2263.fromNode = "StandTimer";
ROUTE2263.toField = "set_fraction";
ROUTE2263.toNode = "Stand_head_RotationInterpolator";
Group2215.children[47] = ROUTE2263;

let ROUTE2264 = browser.currentScene.createNode("ROUTE");
ROUTE2264.fromField = "fraction_changed";
ROUTE2264.fromNode = "StandTimer";
ROUTE2264.toField = "set_fraction";
ROUTE2264.toNode = "Stand_neck_RotationInterpolator";
Group2215.children[48] = ROUTE2264;

let ROUTE2265 = browser.currentScene.createNode("ROUTE");
ROUTE2265.fromField = "fraction_changed";
ROUTE2265.fromNode = "StandTimer";
ROUTE2265.toField = "set_fraction";
ROUTE2265.toNode = "Stand_l_eyeball_RotationInterpolator";
Group2215.children[49] = ROUTE2265;

let ROUTE2266 = browser.currentScene.createNode("ROUTE");
ROUTE2266.fromField = "fraction_changed";
ROUTE2266.fromNode = "StandTimer";
ROUTE2266.toField = "set_fraction";
ROUTE2266.toNode = "Stand_r_eyeball_RotationInterpolator";
Group2215.children[50] = ROUTE2266;

let ROUTE2267 = browser.currentScene.createNode("ROUTE");
ROUTE2267.fromField = "fraction_changed";
ROUTE2267.fromNode = "StandTimer";
ROUTE2267.toField = "set_fraction";
ROUTE2267.toNode = "Stand_upper_body_RotationInterpolator";
Group2215.children[51] = ROUTE2267;

let ROUTE2268 = browser.currentScene.createNode("ROUTE");
ROUTE2268.fromField = "fraction_changed";
ROUTE2268.fromNode = "StandTimer";
ROUTE2268.toField = "set_fraction";
ROUTE2268.toNode = "Stand_whole_body_RotationInterpolator";
Group2215.children[52] = ROUTE2268;

let ROUTE2269 = browser.currentScene.createNode("ROUTE");
ROUTE2269.fromField = "fraction_changed";
ROUTE2269.fromNode = "StandTimer";
ROUTE2269.toField = "set_fraction";
ROUTE2269.toNode = "Stand_whole_body_TranslationInterpolator";
Group2215.children[53] = ROUTE2269;

let ROUTE2270 = browser.currentScene.createNode("ROUTE");
ROUTE2270.fromField = "fraction_changed";
ROUTE2270.fromNode = "StandTimer";
ROUTE2270.toField = "set_fraction";
ROUTE2270.toNode = "Stand_l_sternoclavicular_RollInterpolator";
Group2215.children[54] = ROUTE2270;

let ROUTE2271 = browser.currentScene.createNode("ROUTE");
ROUTE2271.fromField = "fraction_changed";
ROUTE2271.fromNode = "StandTimer";
ROUTE2271.toField = "set_fraction";
ROUTE2271.toNode = "Stand_l_acromioclavicular_RollInterpolator";
Group2215.children[55] = ROUTE2271;

let ROUTE2272 = browser.currentScene.createNode("ROUTE");
ROUTE2272.fromField = "fraction_changed";
ROUTE2272.fromNode = "StandTimer";
ROUTE2272.toField = "set_fraction";
ROUTE2272.toNode = "Stand_r_sternoclavicular_RollInterpolator";
Group2215.children[56] = ROUTE2272;

let ROUTE2273 = browser.currentScene.createNode("ROUTE");
ROUTE2273.fromField = "fraction_changed";
ROUTE2273.fromNode = "StandTimer";
ROUTE2273.toField = "set_fraction";
ROUTE2273.toNode = "Stand_r_acromioclavicular_RollInterpolator";
Group2215.children[57] = ROUTE2273;

let ROUTE2274 = browser.currentScene.createNode("ROUTE");
ROUTE2274.fromField = "fraction_changed";
ROUTE2274.fromNode = "StandTimer";
ROUTE2274.toField = "set_fraction";
ROUTE2274.toNode = "Stand_r_metatarsal_PitchInterpolator";
Group2215.children[58] = ROUTE2274;

let ROUTE2275 = browser.currentScene.createNode("ROUTE");
ROUTE2275.fromField = "fraction_changed";
ROUTE2275.fromNode = "StandTimer";
ROUTE2275.toField = "set_fraction";
ROUTE2275.toNode = "Stand_sacroiliac_YawInterpolator";
Group2215.children[59] = ROUTE2275;

let ROUTE2276 = browser.currentScene.createNode("ROUTE");
ROUTE2276.fromField = "fraction_changed";
ROUTE2276.fromNode = "StandTimer";
ROUTE2276.toField = "set_fraction";
ROUTE2276.toNode = "Stand_vl5_YawInterpolator";
Group2215.children[60] = ROUTE2276;

let ROUTE2277 = browser.currentScene.createNode("ROUTE");
ROUTE2277.fromField = "fraction_changed";
ROUTE2277.fromNode = "StandTimer";
ROUTE2277.toField = "set_fraction";
ROUTE2277.toNode = "Stand_vc6_YawInterpolator";
Group2215.children[61] = ROUTE2277;

let ROUTE2278 = browser.currentScene.createNode("ROUTE");
ROUTE2278.fromField = "fraction_changed";
ROUTE2278.fromNode = "StandTimer";
ROUTE2278.toField = "set_fraction";
ROUTE2278.toNode = "Stand_l_thumb1_PitchInterpolator";
Group2215.children[62] = ROUTE2278;

let ROUTE2279 = browser.currentScene.createNode("ROUTE");
ROUTE2279.fromField = "fraction_changed";
ROUTE2279.fromNode = "StandTimer";
ROUTE2279.toField = "set_fraction";
ROUTE2279.toNode = "Stand_r_thumb1_PitchInterpolator";
Group2215.children[63] = ROUTE2279;

let ROUTE2280 = browser.currentScene.createNode("ROUTE");
ROUTE2280.fromField = "fraction_changed";
ROUTE2280.fromNode = "StandTimer";
ROUTE2280.toField = "set_fraction";
ROUTE2280.toNode = "Stand_r_index1_RollInterpolator";
Group2215.children[64] = ROUTE2280;

let ROUTE2281 = browser.currentScene.createNode("ROUTE");
ROUTE2281.fromField = "fraction_changed";
ROUTE2281.fromNode = "StandTimer";
ROUTE2281.toField = "set_fraction";
ROUTE2281.toNode = "Stand_r_index2_RollInterpolator";
Group2215.children[65] = ROUTE2281;

let ROUTE2282 = browser.currentScene.createNode("ROUTE");
ROUTE2282.fromField = "fraction_changed";
ROUTE2282.fromNode = "StandTimer";
ROUTE2282.toField = "set_fraction";
ROUTE2282.toNode = "Stand_r_index3_RollInterpolator";
Group2215.children[66] = ROUTE2282;

let ROUTE2283 = browser.currentScene.createNode("ROUTE");
ROUTE2283.fromField = "value_changed";
ROUTE2283.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE2283.toField = "rotation";
ROUTE2283.toNode = "hanim_r_ankle";
Group2215.children[67] = ROUTE2283;

let ROUTE2284 = browser.currentScene.createNode("ROUTE");
ROUTE2284.fromField = "value_changed";
ROUTE2284.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE2284.toField = "rotation";
ROUTE2284.toNode = "hanim_r_knee";
Group2215.children[68] = ROUTE2284;

let ROUTE2285 = browser.currentScene.createNode("ROUTE");
ROUTE2285.fromField = "value_changed";
ROUTE2285.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE2285.toField = "rotation";
ROUTE2285.toNode = "hanim_r_hip";
Group2215.children[69] = ROUTE2285;

let ROUTE2286 = browser.currentScene.createNode("ROUTE");
ROUTE2286.fromField = "value_changed";
ROUTE2286.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE2286.toField = "rotation";
ROUTE2286.toNode = "hanim_l_ankle";
Group2215.children[70] = ROUTE2286;

let ROUTE2287 = browser.currentScene.createNode("ROUTE");
ROUTE2287.fromField = "value_changed";
ROUTE2287.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE2287.toField = "rotation";
ROUTE2287.toNode = "hanim_l_knee";
Group2215.children[71] = ROUTE2287;

let ROUTE2288 = browser.currentScene.createNode("ROUTE");
ROUTE2288.fromField = "value_changed";
ROUTE2288.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE2288.toField = "rotation";
ROUTE2288.toNode = "hanim_l_hip";
Group2215.children[72] = ROUTE2288;

let ROUTE2289 = browser.currentScene.createNode("ROUTE");
ROUTE2289.fromField = "value_changed";
ROUTE2289.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE2289.toField = "rotation";
ROUTE2289.toNode = "hanim_r_wrist";
Group2215.children[73] = ROUTE2289;

let ROUTE2290 = browser.currentScene.createNode("ROUTE");
ROUTE2290.fromField = "value_changed";
ROUTE2290.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE2290.toField = "rotation";
ROUTE2290.toNode = "hanim_r_elbow";
Group2215.children[74] = ROUTE2290;

let ROUTE2291 = browser.currentScene.createNode("ROUTE");
ROUTE2291.fromField = "value_changed";
ROUTE2291.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE2291.toField = "rotation";
ROUTE2291.toNode = "hanim_r_shoulder";
Group2215.children[75] = ROUTE2291;

let ROUTE2292 = browser.currentScene.createNode("ROUTE");
ROUTE2292.fromField = "value_changed";
ROUTE2292.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE2292.toField = "rotation";
ROUTE2292.toNode = "hanim_l_wrist";
Group2215.children[76] = ROUTE2292;

let ROUTE2293 = browser.currentScene.createNode("ROUTE");
ROUTE2293.fromField = "value_changed";
ROUTE2293.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE2293.toField = "rotation";
ROUTE2293.toNode = "hanim_l_elbow";
Group2215.children[77] = ROUTE2293;

let ROUTE2294 = browser.currentScene.createNode("ROUTE");
ROUTE2294.fromField = "value_changed";
ROUTE2294.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE2294.toField = "rotation";
ROUTE2294.toNode = "hanim_l_shoulder";
Group2215.children[78] = ROUTE2294;

let ROUTE2295 = browser.currentScene.createNode("ROUTE");
ROUTE2295.fromField = "value_changed";
ROUTE2295.fromNode = "Stand_head_RotationInterpolator";
ROUTE2295.toField = "rotation";
ROUTE2295.toNode = "hanim_skullbase";
Group2215.children[79] = ROUTE2295;

let ROUTE2296 = browser.currentScene.createNode("ROUTE");
ROUTE2296.fromField = "value_changed";
ROUTE2296.fromNode = "Stand_neck_RotationInterpolator";
ROUTE2296.toField = "rotation";
ROUTE2296.toNode = "hanim_vc7";
Group2215.children[80] = ROUTE2296;

let ROUTE2297 = browser.currentScene.createNode("ROUTE");
ROUTE2297.fromField = "value_changed";
ROUTE2297.fromNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE2297.toField = "rotation";
ROUTE2297.toNode = "hanim_l_eyeball_joint";
Group2215.children[81] = ROUTE2297;

let ROUTE2298 = browser.currentScene.createNode("ROUTE");
ROUTE2298.fromField = "value_changed";
ROUTE2298.fromNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE2298.toField = "rotation";
ROUTE2298.toNode = "hanim_r_eyeball_joint";
Group2215.children[82] = ROUTE2298;

let ROUTE2299 = browser.currentScene.createNode("ROUTE");
ROUTE2299.fromField = "value_changed";
ROUTE2299.fromNode = "Stand_upper_body_RotationInterpolator";
ROUTE2299.toField = "rotation";
ROUTE2299.toNode = "hanim_vl1";
Group2215.children[83] = ROUTE2299;

let ROUTE2300 = browser.currentScene.createNode("ROUTE");
ROUTE2300.fromField = "value_changed";
ROUTE2300.fromNode = "Stand_lower_body_RotationInterpolator";
ROUTE2300.toField = "rotation";
ROUTE2300.toNode = "hanim_sacroiliac";
Group2215.children[84] = ROUTE2300;

let ROUTE2301 = browser.currentScene.createNode("ROUTE");
ROUTE2301.fromField = "value_changed";
ROUTE2301.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE2301.toField = "rotation";
ROUTE2301.toNode = "hanim_humanoid_root";
Group2215.children[85] = ROUTE2301;

let ROUTE2302 = browser.currentScene.createNode("ROUTE");
ROUTE2302.fromField = "value_changed";
ROUTE2302.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE2302.toField = "translation";
ROUTE2302.toNode = "hanim_humanoid_root";
Group2215.children[86] = ROUTE2302;

let ROUTE2303 = browser.currentScene.createNode("ROUTE");
ROUTE2303.fromField = "value_changed";
ROUTE2303.fromNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE2303.toField = "rotation";
ROUTE2303.toNode = "hanim_l_sternoclavicular";
Group2215.children[87] = ROUTE2303;

let ROUTE2304 = browser.currentScene.createNode("ROUTE");
ROUTE2304.fromField = "value_changed";
ROUTE2304.fromNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE2304.toField = "rotation";
ROUTE2304.toNode = "hanim_l_acromioclavicular";
Group2215.children[88] = ROUTE2304;

let ROUTE2305 = browser.currentScene.createNode("ROUTE");
ROUTE2305.fromField = "value_changed";
ROUTE2305.fromNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE2305.toField = "rotation";
ROUTE2305.toNode = "hanim_r_sternoclavicular";
Group2215.children[89] = ROUTE2305;

let ROUTE2306 = browser.currentScene.createNode("ROUTE");
ROUTE2306.fromField = "value_changed";
ROUTE2306.fromNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE2306.toField = "rotation";
ROUTE2306.toNode = "hanim_r_acromioclavicular";
Group2215.children[90] = ROUTE2306;

let ROUTE2307 = browser.currentScene.createNode("ROUTE");
ROUTE2307.fromField = "value_changed";
ROUTE2307.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2307.toField = "rotation";
ROUTE2307.toNode = "hanim_l_metatarsal";
Group2215.children[91] = ROUTE2307;

let ROUTE2308 = browser.currentScene.createNode("ROUTE");
ROUTE2308.fromField = "value_changed";
ROUTE2308.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2308.toField = "rotation";
ROUTE2308.toNode = "hanim_r_metatarsal";
Group2215.children[92] = ROUTE2308;

let ROUTE2309 = browser.currentScene.createNode("ROUTE");
ROUTE2309.fromField = "value_changed";
ROUTE2309.fromNode = "Stand_sacroiliac_YawInterpolator";
ROUTE2309.toField = "rotation";
ROUTE2309.toNode = "hanim_sacroiliac";
Group2215.children[93] = ROUTE2309;

let ROUTE2310 = browser.currentScene.createNode("ROUTE");
ROUTE2310.fromField = "value_changed";
ROUTE2310.fromNode = "Stand_vl5_YawInterpolator";
ROUTE2310.toField = "rotation";
ROUTE2310.toNode = "hanim_vl5";
Group2215.children[94] = ROUTE2310;

let ROUTE2311 = browser.currentScene.createNode("ROUTE");
ROUTE2311.fromField = "value_changed";
ROUTE2311.fromNode = "Stand_vc6_YawInterpolator";
ROUTE2311.toField = "rotation";
ROUTE2311.toNode = "hanim_vc6";
Group2215.children[95] = ROUTE2311;

let ROUTE2312 = browser.currentScene.createNode("ROUTE");
ROUTE2312.fromField = "value_changed";
ROUTE2312.fromNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE2312.toField = "rotation";
ROUTE2312.toNode = "hanim_l_thumb1";
Group2215.children[96] = ROUTE2312;

let ROUTE2313 = browser.currentScene.createNode("ROUTE");
ROUTE2313.fromField = "value_changed";
ROUTE2313.fromNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE2313.toField = "rotation";
ROUTE2313.toNode = "hanim_r_thumb1";
Group2215.children[97] = ROUTE2313;

let ROUTE2314 = browser.currentScene.createNode("ROUTE");
ROUTE2314.fromField = "value_changed";
ROUTE2314.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2314.toField = "rotation";
ROUTE2314.toNode = "hanim_r_index1";
Group2215.children[98] = ROUTE2314;

let ROUTE2315 = browser.currentScene.createNode("ROUTE");
ROUTE2315.fromField = "value_changed";
ROUTE2315.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2315.toField = "rotation";
ROUTE2315.toNode = "hanim_r_index2";
Group2215.children[99] = ROUTE2315;

let ROUTE2316 = browser.currentScene.createNode("ROUTE");
ROUTE2316.fromField = "value_changed";
ROUTE2316.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2316.toField = "rotation";
ROUTE2316.toNode = "hanim_r_index3";
Group2215.children[100] = ROUTE2316;

let ROUTE2317 = browser.currentScene.createNode("ROUTE");
ROUTE2317.fromField = "value_changed";
ROUTE2317.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2317.toField = "rotation";
ROUTE2317.toNode = "hanim_r_middle1";
Group2215.children[101] = ROUTE2317;

let ROUTE2318 = browser.currentScene.createNode("ROUTE");
ROUTE2318.fromField = "value_changed";
ROUTE2318.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2318.toField = "rotation";
ROUTE2318.toNode = "hanim_r_middle2";
Group2215.children[102] = ROUTE2318;

let ROUTE2319 = browser.currentScene.createNode("ROUTE");
ROUTE2319.fromField = "value_changed";
ROUTE2319.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2319.toField = "rotation";
ROUTE2319.toNode = "hanim_r_middle3";
Group2215.children[103] = ROUTE2319;

let ROUTE2320 = browser.currentScene.createNode("ROUTE");
ROUTE2320.fromField = "value_changed";
ROUTE2320.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2320.toField = "rotation";
ROUTE2320.toNode = "hanim_r_ring1";
Group2215.children[104] = ROUTE2320;

let ROUTE2321 = browser.currentScene.createNode("ROUTE");
ROUTE2321.fromField = "value_changed";
ROUTE2321.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2321.toField = "rotation";
ROUTE2321.toNode = "hanim_r_ring2";
Group2215.children[105] = ROUTE2321;

let ROUTE2322 = browser.currentScene.createNode("ROUTE");
ROUTE2322.fromField = "value_changed";
ROUTE2322.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2322.toField = "rotation";
ROUTE2322.toNode = "hanim_r_ring3";
Group2215.children[106] = ROUTE2322;

let ROUTE2323 = browser.currentScene.createNode("ROUTE");
ROUTE2323.fromField = "value_changed";
ROUTE2323.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2323.toField = "rotation";
ROUTE2323.toNode = "hanim_r_pinky1";
Group2215.children[107] = ROUTE2323;

let ROUTE2324 = browser.currentScene.createNode("ROUTE");
ROUTE2324.fromField = "value_changed";
ROUTE2324.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2324.toField = "rotation";
ROUTE2324.toNode = "hanim_r_pinky2";
Group2215.children[108] = ROUTE2324;

let ROUTE2325 = browser.currentScene.createNode("ROUTE");
ROUTE2325.fromField = "value_changed";
ROUTE2325.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2325.toField = "rotation";
ROUTE2325.toNode = "hanim_r_pinky3";
Group2215.children[109] = ROUTE2325;

browser.currentScene.children[14] = Group2215;

let Group2326 = browser.currentScene.createNode("Group");
Group2326.DEF = "PitchesAnimation";
let TimeSensor2327 = browser.currentScene.createNode("TimeSensor");
TimeSensor2327.DEF = "PitchTimer";
TimeSensor2327.cycleInterval = 5.73;
TimeSensor2327.loop = True;
Group2326.children = new MFNode();

Group2326.children[0] = TimeSensor2327;

let OrientationInterpolator2328 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2328.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator2328.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2328.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2326.children[1] = OrientationInterpolator2328;

let OrientationInterpolator2329 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2329.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator2329.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2329.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2326.children[2] = OrientationInterpolator2329;

let OrientationInterpolator2330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2330.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator2330.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2330.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[3] = OrientationInterpolator2330;

let OrientationInterpolator2331 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2331.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator2331.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2331.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2326.children[4] = OrientationInterpolator2331;

let OrientationInterpolator2332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2332.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator2332.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2332.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2326.children[5] = OrientationInterpolator2332;

let OrientationInterpolator2333 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2333.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator2333.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2333.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[6] = OrientationInterpolator2333;

let OrientationInterpolator2334 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2334.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator2334.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2334.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2326.children[7] = OrientationInterpolator2334;

let OrientationInterpolator2335 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2335.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator2335.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2335.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[8] = OrientationInterpolator2335;

let OrientationInterpolator2336 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2336.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator2336.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2336.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[9] = OrientationInterpolator2336;

let OrientationInterpolator2337 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2337.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator2337.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2337.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2326.children[10] = OrientationInterpolator2337;

let OrientationInterpolator2338 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2338.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator2338.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2338.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[11] = OrientationInterpolator2338;

let OrientationInterpolator2339 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2339.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator2339.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2339.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[12] = OrientationInterpolator2339;

let OrientationInterpolator2340 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2340.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator2340.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2340.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2326.children[13] = OrientationInterpolator2340;

let OrientationInterpolator2341 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2341.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator2341.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2341.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[14] = OrientationInterpolator2341;

let OrientationInterpolator2342 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2342.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator2342.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2342.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group2326.children[15] = OrientationInterpolator2342;

let OrientationInterpolator2343 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2343.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator2343.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2343.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[16] = OrientationInterpolator2343;

let OrientationInterpolator2344 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2344.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator2344.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2344.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[17] = OrientationInterpolator2344;

let OrientationInterpolator2345 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2345.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator2345.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2345.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[18] = OrientationInterpolator2345;

let PositionInterpolator2346 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2346.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator2346.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2346.keyValue = new MFVec3f(new float[0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group2326.children[19] = PositionInterpolator2346;

let OrientationInterpolator2347 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2347.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2347.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2347.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[20] = OrientationInterpolator2347;

let OrientationInterpolator2348 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2348.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2348.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2348.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[21] = OrientationInterpolator2348;

let OrientationInterpolator2349 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2349.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2349.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2349.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[22] = OrientationInterpolator2349;

let OrientationInterpolator2350 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2350.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2350.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2350.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[23] = OrientationInterpolator2350;

let OrientationInterpolator2351 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2351.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator2351.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2351.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[24] = OrientationInterpolator2351;

let OrientationInterpolator2352 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2352.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator2352.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2352.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[25] = OrientationInterpolator2352;

let OrientationInterpolator2353 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2353.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator2353.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2353.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[26] = OrientationInterpolator2353;

let OrientationInterpolator2354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2354.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator2354.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2354.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2326.children[27] = OrientationInterpolator2354;

let OrientationInterpolator2355 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2355.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator2355.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2355.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2326.children[28] = OrientationInterpolator2355;

let ROUTE2356 = browser.currentScene.createNode("ROUTE");
ROUTE2356.fromField = "fraction_changed";
ROUTE2356.fromNode = "PitchTimer";
ROUTE2356.toField = "set_fraction";
ROUTE2356.toNode = "Pitches_r_ankle_RotationInterpolator";
Group2326.children[29] = ROUTE2356;

let ROUTE2357 = browser.currentScene.createNode("ROUTE");
ROUTE2357.fromField = "fraction_changed";
ROUTE2357.fromNode = "PitchTimer";
ROUTE2357.toField = "set_fraction";
ROUTE2357.toNode = "Pitches_r_knee_RotationInterpolator";
Group2326.children[30] = ROUTE2357;

let ROUTE2358 = browser.currentScene.createNode("ROUTE");
ROUTE2358.fromField = "fraction_changed";
ROUTE2358.fromNode = "PitchTimer";
ROUTE2358.toField = "set_fraction";
ROUTE2358.toNode = "Pitches_r_hip_RotationInterpolator";
Group2326.children[31] = ROUTE2358;

let ROUTE2359 = browser.currentScene.createNode("ROUTE");
ROUTE2359.fromField = "fraction_changed";
ROUTE2359.fromNode = "PitchTimer";
ROUTE2359.toField = "set_fraction";
ROUTE2359.toNode = "Pitches_l_ankle_RotationInterpolator";
Group2326.children[32] = ROUTE2359;

let ROUTE2360 = browser.currentScene.createNode("ROUTE");
ROUTE2360.fromField = "fraction_changed";
ROUTE2360.fromNode = "PitchTimer";
ROUTE2360.toField = "set_fraction";
ROUTE2360.toNode = "Pitches_l_knee_RotationInterpolator";
Group2326.children[33] = ROUTE2360;

let ROUTE2361 = browser.currentScene.createNode("ROUTE");
ROUTE2361.fromField = "fraction_changed";
ROUTE2361.fromNode = "PitchTimer";
ROUTE2361.toField = "set_fraction";
ROUTE2361.toNode = "Pitches_l_hip_RotationInterpolator";
Group2326.children[34] = ROUTE2361;

let ROUTE2362 = browser.currentScene.createNode("ROUTE");
ROUTE2362.fromField = "fraction_changed";
ROUTE2362.fromNode = "PitchTimer";
ROUTE2362.toField = "set_fraction";
ROUTE2362.toNode = "Pitches_lower_body_RotationInterpolator";
Group2326.children[35] = ROUTE2362;

let ROUTE2363 = browser.currentScene.createNode("ROUTE");
ROUTE2363.fromField = "fraction_changed";
ROUTE2363.fromNode = "PitchTimer";
ROUTE2363.toField = "set_fraction";
ROUTE2363.toNode = "Pitches_r_wrist_RotationInterpolator";
Group2326.children[36] = ROUTE2363;

let ROUTE2364 = browser.currentScene.createNode("ROUTE");
ROUTE2364.fromField = "fraction_changed";
ROUTE2364.fromNode = "PitchTimer";
ROUTE2364.toField = "set_fraction";
ROUTE2364.toNode = "Pitches_r_elbow_RotationInterpolator";
Group2326.children[37] = ROUTE2364;

let ROUTE2365 = browser.currentScene.createNode("ROUTE");
ROUTE2365.fromField = "fraction_changed";
ROUTE2365.fromNode = "PitchTimer";
ROUTE2365.toField = "set_fraction";
ROUTE2365.toNode = "Pitches_r_shoulder_RotationInterpolator";
Group2326.children[38] = ROUTE2365;

let ROUTE2366 = browser.currentScene.createNode("ROUTE");
ROUTE2366.fromField = "fraction_changed";
ROUTE2366.fromNode = "PitchTimer";
ROUTE2366.toField = "set_fraction";
ROUTE2366.toNode = "Pitches_l_wrist_RotationInterpolator";
Group2326.children[39] = ROUTE2366;

let ROUTE2367 = browser.currentScene.createNode("ROUTE");
ROUTE2367.fromField = "fraction_changed";
ROUTE2367.fromNode = "PitchTimer";
ROUTE2367.toField = "set_fraction";
ROUTE2367.toNode = "Pitches_l_elbow_RotationInterpolator";
Group2326.children[40] = ROUTE2367;

let ROUTE2368 = browser.currentScene.createNode("ROUTE");
ROUTE2368.fromField = "fraction_changed";
ROUTE2368.fromNode = "PitchTimer";
ROUTE2368.toField = "set_fraction";
ROUTE2368.toNode = "Pitches_l_shoulder_RotationInterpolator";
Group2326.children[41] = ROUTE2368;

let ROUTE2369 = browser.currentScene.createNode("ROUTE");
ROUTE2369.fromField = "fraction_changed";
ROUTE2369.fromNode = "PitchTimer";
ROUTE2369.toField = "set_fraction";
ROUTE2369.toNode = "Pitches_head_RotationInterpolator";
Group2326.children[42] = ROUTE2369;

let ROUTE2370 = browser.currentScene.createNode("ROUTE");
ROUTE2370.fromField = "fraction_changed";
ROUTE2370.fromNode = "PitchTimer";
ROUTE2370.toField = "set_fraction";
ROUTE2370.toNode = "Pitches_neck_RotationInterpolator";
Group2326.children[43] = ROUTE2370;

let ROUTE2371 = browser.currentScene.createNode("ROUTE");
ROUTE2371.fromField = "fraction_changed";
ROUTE2371.fromNode = "PitchTimer";
ROUTE2371.toField = "set_fraction";
ROUTE2371.toNode = "Pitches_upper_body_RotationInterpolator";
Group2326.children[44] = ROUTE2371;

let ROUTE2372 = browser.currentScene.createNode("ROUTE");
ROUTE2372.fromField = "fraction_changed";
ROUTE2372.fromNode = "PitchTimer";
ROUTE2372.toField = "set_fraction";
ROUTE2372.toNode = "Pitches_whole_body_RotationInterpolator";
Group2326.children[45] = ROUTE2372;

let ROUTE2373 = browser.currentScene.createNode("ROUTE");
ROUTE2373.fromField = "fraction_changed";
ROUTE2373.fromNode = "PitchTimer";
ROUTE2373.toField = "set_fraction";
ROUTE2373.toNode = "Pitches_whole_body_TranslationInterpolator";
Group2326.children[46] = ROUTE2373;

let ROUTE2374 = browser.currentScene.createNode("ROUTE");
ROUTE2374.fromField = "fraction_changed";
ROUTE2374.fromNode = "PitchTimer";
ROUTE2374.toField = "set_fraction";
ROUTE2374.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
Group2326.children[47] = ROUTE2374;

let ROUTE2375 = browser.currentScene.createNode("ROUTE");
ROUTE2375.fromField = "fraction_changed";
ROUTE2375.fromNode = "PitchTimer";
ROUTE2375.toField = "set_fraction";
ROUTE2375.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
Group2326.children[48] = ROUTE2375;

let ROUTE2376 = browser.currentScene.createNode("ROUTE");
ROUTE2376.fromField = "fraction_changed";
ROUTE2376.fromNode = "PitchTimer";
ROUTE2376.toField = "set_fraction";
ROUTE2376.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
Group2326.children[49] = ROUTE2376;

let ROUTE2377 = browser.currentScene.createNode("ROUTE");
ROUTE2377.fromField = "fraction_changed";
ROUTE2377.fromNode = "PitchTimer";
ROUTE2377.toField = "set_fraction";
ROUTE2377.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
Group2326.children[50] = ROUTE2377;

let ROUTE2378 = browser.currentScene.createNode("ROUTE");
ROUTE2378.fromField = "fraction_changed";
ROUTE2378.fromNode = "PitchTimer";
ROUTE2378.toField = "set_fraction";
ROUTE2378.toNode = "Pitch_r_metatarsal_PitchInterpolator";
Group2326.children[51] = ROUTE2378;

let ROUTE2379 = browser.currentScene.createNode("ROUTE");
ROUTE2379.fromField = "fraction_changed";
ROUTE2379.fromNode = "PitchTimer";
ROUTE2379.toField = "set_fraction";
ROUTE2379.toNode = "Pitch_sacroiliac_YawInterpolator";
Group2326.children[52] = ROUTE2379;

let ROUTE2380 = browser.currentScene.createNode("ROUTE");
ROUTE2380.fromField = "fraction_changed";
ROUTE2380.fromNode = "PitchTimer";
ROUTE2380.toField = "set_fraction";
ROUTE2380.toNode = "Pitch_vl5_YawInterpolator";
Group2326.children[53] = ROUTE2380;

let ROUTE2381 = browser.currentScene.createNode("ROUTE");
ROUTE2381.fromField = "fraction_changed";
ROUTE2381.fromNode = "PitchTimer";
ROUTE2381.toField = "set_fraction";
ROUTE2381.toNode = "Pitch_vc6_YawInterpolator";
Group2326.children[54] = ROUTE2381;

let ROUTE2382 = browser.currentScene.createNode("ROUTE");
ROUTE2382.fromField = "fraction_changed";
ROUTE2382.fromNode = "PitchTimer";
ROUTE2382.toField = "set_fraction";
ROUTE2382.toNode = "Pitch_l_thumb1_PitchInterpolator";
Group2326.children[55] = ROUTE2382;

let ROUTE2383 = browser.currentScene.createNode("ROUTE");
ROUTE2383.fromField = "fraction_changed";
ROUTE2383.fromNode = "PitchTimer";
ROUTE2383.toField = "set_fraction";
ROUTE2383.toNode = "Pitch_r_thumb1_PitchInterpolator";
Group2326.children[56] = ROUTE2383;

let ROUTE2384 = browser.currentScene.createNode("ROUTE");
ROUTE2384.fromField = "value_changed";
ROUTE2384.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE2384.toField = "rotation";
ROUTE2384.toNode = "hanim_r_ankle";
Group2326.children[57] = ROUTE2384;

let ROUTE2385 = browser.currentScene.createNode("ROUTE");
ROUTE2385.fromField = "value_changed";
ROUTE2385.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE2385.toField = "rotation";
ROUTE2385.toNode = "hanim_r_knee";
Group2326.children[58] = ROUTE2385;

let ROUTE2386 = browser.currentScene.createNode("ROUTE");
ROUTE2386.fromField = "value_changed";
ROUTE2386.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE2386.toField = "rotation";
ROUTE2386.toNode = "hanim_r_hip";
Group2326.children[59] = ROUTE2386;

let ROUTE2387 = browser.currentScene.createNode("ROUTE");
ROUTE2387.fromField = "value_changed";
ROUTE2387.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE2387.toField = "rotation";
ROUTE2387.toNode = "hanim_l_ankle";
Group2326.children[60] = ROUTE2387;

let ROUTE2388 = browser.currentScene.createNode("ROUTE");
ROUTE2388.fromField = "value_changed";
ROUTE2388.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE2388.toField = "rotation";
ROUTE2388.toNode = "hanim_l_knee";
Group2326.children[61] = ROUTE2388;

let ROUTE2389 = browser.currentScene.createNode("ROUTE");
ROUTE2389.fromField = "value_changed";
ROUTE2389.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE2389.toField = "rotation";
ROUTE2389.toNode = "hanim_l_hip";
Group2326.children[62] = ROUTE2389;

let ROUTE2390 = browser.currentScene.createNode("ROUTE");
ROUTE2390.fromField = "value_changed";
ROUTE2390.fromNode = "Pitches_lower_body_RotationInterpolator";
ROUTE2390.toField = "rotation";
ROUTE2390.toNode = "hanim_sacroiliac";
Group2326.children[63] = ROUTE2390;

let ROUTE2391 = browser.currentScene.createNode("ROUTE");
ROUTE2391.fromField = "value_changed";
ROUTE2391.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE2391.toField = "rotation";
ROUTE2391.toNode = "hanim_r_wrist";
Group2326.children[64] = ROUTE2391;

let ROUTE2392 = browser.currentScene.createNode("ROUTE");
ROUTE2392.fromField = "value_changed";
ROUTE2392.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE2392.toField = "rotation";
ROUTE2392.toNode = "hanim_r_elbow";
Group2326.children[65] = ROUTE2392;

let ROUTE2393 = browser.currentScene.createNode("ROUTE");
ROUTE2393.fromField = "value_changed";
ROUTE2393.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE2393.toField = "rotation";
ROUTE2393.toNode = "hanim_r_shoulder";
Group2326.children[66] = ROUTE2393;

let ROUTE2394 = browser.currentScene.createNode("ROUTE");
ROUTE2394.fromField = "value_changed";
ROUTE2394.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE2394.toField = "rotation";
ROUTE2394.toNode = "hanim_l_wrist";
Group2326.children[67] = ROUTE2394;

let ROUTE2395 = browser.currentScene.createNode("ROUTE");
ROUTE2395.fromField = "value_changed";
ROUTE2395.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE2395.toField = "rotation";
ROUTE2395.toNode = "hanim_l_elbow";
Group2326.children[68] = ROUTE2395;

let ROUTE2396 = browser.currentScene.createNode("ROUTE");
ROUTE2396.fromField = "value_changed";
ROUTE2396.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE2396.toField = "rotation";
ROUTE2396.toNode = "hanim_l_shoulder";
Group2326.children[69] = ROUTE2396;

let ROUTE2397 = browser.currentScene.createNode("ROUTE");
ROUTE2397.fromField = "value_changed";
ROUTE2397.fromNode = "Pitches_head_RotationInterpolator";
ROUTE2397.toField = "rotation";
ROUTE2397.toNode = "hanim_skullbase";
Group2326.children[70] = ROUTE2397;

let ROUTE2398 = browser.currentScene.createNode("ROUTE");
ROUTE2398.fromField = "value_changed";
ROUTE2398.fromNode = "Pitches_neck_RotationInterpolator";
ROUTE2398.toField = "rotation";
ROUTE2398.toNode = "hanim_vc4";
Group2326.children[71] = ROUTE2398;

let ROUTE2399 = browser.currentScene.createNode("ROUTE");
ROUTE2399.fromField = "value_changed";
ROUTE2399.fromNode = "Pitches_upper_body_RotationInterpolator";
ROUTE2399.toField = "rotation";
ROUTE2399.toNode = "hanim_vl1";
Group2326.children[72] = ROUTE2399;

let ROUTE2400 = browser.currentScene.createNode("ROUTE");
ROUTE2400.fromField = "value_changed";
ROUTE2400.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE2400.toField = "rotation";
ROUTE2400.toNode = "hanim_humanoid_root";
Group2326.children[73] = ROUTE2400;

let ROUTE2401 = browser.currentScene.createNode("ROUTE");
ROUTE2401.fromField = "value_changed";
ROUTE2401.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE2401.toField = "translation";
ROUTE2401.toNode = "hanim_humanoid_root";
Group2326.children[74] = ROUTE2401;

let ROUTE2402 = browser.currentScene.createNode("ROUTE");
ROUTE2402.fromField = "value_changed";
ROUTE2402.fromNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE2402.toField = "rotation";
ROUTE2402.toNode = "hanim_l_sternoclavicular";
Group2326.children[75] = ROUTE2402;

let ROUTE2403 = browser.currentScene.createNode("ROUTE");
ROUTE2403.fromField = "value_changed";
ROUTE2403.fromNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE2403.toField = "rotation";
ROUTE2403.toNode = "hanim_l_acromioclavicular";
Group2326.children[76] = ROUTE2403;

let ROUTE2404 = browser.currentScene.createNode("ROUTE");
ROUTE2404.fromField = "value_changed";
ROUTE2404.fromNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE2404.toField = "rotation";
ROUTE2404.toNode = "hanim_r_sternoclavicular";
Group2326.children[77] = ROUTE2404;

let ROUTE2405 = browser.currentScene.createNode("ROUTE");
ROUTE2405.fromField = "value_changed";
ROUTE2405.fromNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE2405.toField = "rotation";
ROUTE2405.toNode = "hanim_r_acromioclavicular";
Group2326.children[78] = ROUTE2405;

let ROUTE2406 = browser.currentScene.createNode("ROUTE");
ROUTE2406.fromField = "value_changed";
ROUTE2406.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2406.toField = "rotation";
ROUTE2406.toNode = "hanim_l_metatarsal";
Group2326.children[79] = ROUTE2406;

let ROUTE2407 = browser.currentScene.createNode("ROUTE");
ROUTE2407.fromField = "value_changed";
ROUTE2407.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2407.toField = "rotation";
ROUTE2407.toNode = "hanim_r_metatarsal";
Group2326.children[80] = ROUTE2407;

let ROUTE2408 = browser.currentScene.createNode("ROUTE");
ROUTE2408.fromField = "value_changed";
ROUTE2408.fromNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE2408.toField = "rotation";
ROUTE2408.toNode = "hanim_sacroiliac";
Group2326.children[81] = ROUTE2408;

let ROUTE2409 = browser.currentScene.createNode("ROUTE");
ROUTE2409.fromField = "value_changed";
ROUTE2409.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE2409.toField = "rotation";
ROUTE2409.toNode = "hanim_vl5";
Group2326.children[82] = ROUTE2409;

let ROUTE2410 = browser.currentScene.createNode("ROUTE");
ROUTE2410.fromField = "value_changed";
ROUTE2410.fromNode = "Pitch_vc6_YawInterpolator";
ROUTE2410.toField = "rotation";
ROUTE2410.toNode = "hanim_vc6";
Group2326.children[83] = ROUTE2410;

let ROUTE2411 = browser.currentScene.createNode("ROUTE");
ROUTE2411.fromField = "value_changed";
ROUTE2411.fromNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE2411.toField = "rotation";
ROUTE2411.toNode = "hanim_l_thumb1";
Group2326.children[84] = ROUTE2411;

let ROUTE2412 = browser.currentScene.createNode("ROUTE");
ROUTE2412.fromField = "value_changed";
ROUTE2412.fromNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE2412.toField = "rotation";
ROUTE2412.toNode = "hanim_r_thumb1";
Group2326.children[85] = ROUTE2412;

browser.currentScene.children[15] = Group2326;

let Group2413 = browser.currentScene.createNode("Group");
Group2413.DEF = "YawsAnimation";
let TimeSensor2414 = browser.currentScene.createNode("TimeSensor");
TimeSensor2414.DEF = "YawTimer";
TimeSensor2414.cycleInterval = 5.73;
TimeSensor2414.loop = True;
Group2413.children = new MFNode();

Group2413.children[0] = TimeSensor2414;

let OrientationInterpolator2415 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2415.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator2415.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2415.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[1] = OrientationInterpolator2415;

let OrientationInterpolator2416 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2416.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator2416.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2416.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2413.children[2] = OrientationInterpolator2416;

let OrientationInterpolator2417 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2417.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator2417.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2417.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2413.children[3] = OrientationInterpolator2417;

let OrientationInterpolator2418 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2418.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator2418.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2418.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[4] = OrientationInterpolator2418;

let OrientationInterpolator2419 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2419.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator2419.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2419.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2413.children[5] = OrientationInterpolator2419;

let OrientationInterpolator2420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2420.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator2420.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2420.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2413.children[6] = OrientationInterpolator2420;

let OrientationInterpolator2421 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2421.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator2421.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2421.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[7] = OrientationInterpolator2421;

let OrientationInterpolator2422 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2422.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator2422.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2422.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[8] = OrientationInterpolator2422;

let OrientationInterpolator2423 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2423.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator2423.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2423.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[9] = OrientationInterpolator2423;

let OrientationInterpolator2424 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2424.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator2424.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2424.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[10] = OrientationInterpolator2424;

let OrientationInterpolator2425 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2425.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator2425.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2425.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[11] = OrientationInterpolator2425;

let OrientationInterpolator2426 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2426.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator2426.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2426.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[12] = OrientationInterpolator2426;

let OrientationInterpolator2427 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2427.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator2427.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2427.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[13] = OrientationInterpolator2427;

let OrientationInterpolator2428 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2428.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator2428.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2428.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[14] = OrientationInterpolator2428;

let OrientationInterpolator2429 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2429.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator2429.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2429.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2413.children[15] = OrientationInterpolator2429;

let OrientationInterpolator2430 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2430.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator2430.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2430.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2413.children[16] = OrientationInterpolator2430;

let OrientationInterpolator2431 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2431.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator2431.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2431.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[17] = OrientationInterpolator2431;

let OrientationInterpolator2432 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2432.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator2432.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2432.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[18] = OrientationInterpolator2432;

let PositionInterpolator2433 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2433.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator2433.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2433.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2413.children[19] = PositionInterpolator2433;

let OrientationInterpolator2434 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2434.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2434.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2434.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[20] = OrientationInterpolator2434;

let OrientationInterpolator2435 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2435.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2435.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2435.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[21] = OrientationInterpolator2435;

let OrientationInterpolator2436 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2436.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2436.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2436.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[22] = OrientationInterpolator2436;

let OrientationInterpolator2437 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2437.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2437.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2437.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[23] = OrientationInterpolator2437;

let OrientationInterpolator2438 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2438.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator2438.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2438.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group2413.children[24] = OrientationInterpolator2438;

let OrientationInterpolator2439 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2439.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator2439.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2439.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[25] = OrientationInterpolator2439;

let OrientationInterpolator2440 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2440.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator2440.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2440.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[26] = OrientationInterpolator2440;

let OrientationInterpolator2441 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2441.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator2441.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2441.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[27] = OrientationInterpolator2441;

let OrientationInterpolator2442 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2442.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator2442.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2442.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[28] = OrientationInterpolator2442;

let ROUTE2443 = browser.currentScene.createNode("ROUTE");
ROUTE2443.fromField = "fraction_changed";
ROUTE2443.fromNode = "YawTimer";
ROUTE2443.toField = "set_fraction";
ROUTE2443.toNode = "Yaws_r_ankle_RotationInterpolator";
Group2413.children[29] = ROUTE2443;

let ROUTE2444 = browser.currentScene.createNode("ROUTE");
ROUTE2444.fromField = "fraction_changed";
ROUTE2444.fromNode = "YawTimer";
ROUTE2444.toField = "set_fraction";
ROUTE2444.toNode = "Yaws_r_knee_RotationInterpolator";
Group2413.children[30] = ROUTE2444;

let ROUTE2445 = browser.currentScene.createNode("ROUTE");
ROUTE2445.fromField = "fraction_changed";
ROUTE2445.fromNode = "YawTimer";
ROUTE2445.toField = "set_fraction";
ROUTE2445.toNode = "Yaws_r_hip_RotationInterpolator";
Group2413.children[31] = ROUTE2445;

let ROUTE2446 = browser.currentScene.createNode("ROUTE");
ROUTE2446.fromField = "fraction_changed";
ROUTE2446.fromNode = "YawTimer";
ROUTE2446.toField = "set_fraction";
ROUTE2446.toNode = "Yaws_l_ankle_RotationInterpolator";
Group2413.children[32] = ROUTE2446;

let ROUTE2447 = browser.currentScene.createNode("ROUTE");
ROUTE2447.fromField = "fraction_changed";
ROUTE2447.fromNode = "YawTimer";
ROUTE2447.toField = "set_fraction";
ROUTE2447.toNode = "Yaws_l_knee_RotationInterpolator";
Group2413.children[33] = ROUTE2447;

let ROUTE2448 = browser.currentScene.createNode("ROUTE");
ROUTE2448.fromField = "fraction_changed";
ROUTE2448.fromNode = "YawTimer";
ROUTE2448.toField = "set_fraction";
ROUTE2448.toNode = "Yaws_l_hip_RotationInterpolator";
Group2413.children[34] = ROUTE2448;

let ROUTE2449 = browser.currentScene.createNode("ROUTE");
ROUTE2449.fromField = "fraction_changed";
ROUTE2449.fromNode = "YawTimer";
ROUTE2449.toField = "set_fraction";
ROUTE2449.toNode = "Yaws_lower_body_RotationInterpolator";
Group2413.children[35] = ROUTE2449;

let ROUTE2450 = browser.currentScene.createNode("ROUTE");
ROUTE2450.fromField = "fraction_changed";
ROUTE2450.fromNode = "YawTimer";
ROUTE2450.toField = "set_fraction";
ROUTE2450.toNode = "Yaws_r_wrist_RotationInterpolator";
Group2413.children[36] = ROUTE2450;

let ROUTE2451 = browser.currentScene.createNode("ROUTE");
ROUTE2451.fromField = "fraction_changed";
ROUTE2451.fromNode = "YawTimer";
ROUTE2451.toField = "set_fraction";
ROUTE2451.toNode = "Yaws_r_elbow_RotationInterpolator";
Group2413.children[37] = ROUTE2451;

let ROUTE2452 = browser.currentScene.createNode("ROUTE");
ROUTE2452.fromField = "fraction_changed";
ROUTE2452.fromNode = "YawTimer";
ROUTE2452.toField = "set_fraction";
ROUTE2452.toNode = "Yaws_r_shoulder_RotationInterpolator";
Group2413.children[38] = ROUTE2452;

let ROUTE2453 = browser.currentScene.createNode("ROUTE");
ROUTE2453.fromField = "fraction_changed";
ROUTE2453.fromNode = "YawTimer";
ROUTE2453.toField = "set_fraction";
ROUTE2453.toNode = "Yaws_l_wrist_RotationInterpolator";
Group2413.children[39] = ROUTE2453;

let ROUTE2454 = browser.currentScene.createNode("ROUTE");
ROUTE2454.fromField = "fraction_changed";
ROUTE2454.fromNode = "YawTimer";
ROUTE2454.toField = "set_fraction";
ROUTE2454.toNode = "Yaws_l_elbow_RotationInterpolator";
Group2413.children[40] = ROUTE2454;

let ROUTE2455 = browser.currentScene.createNode("ROUTE");
ROUTE2455.fromField = "fraction_changed";
ROUTE2455.fromNode = "YawTimer";
ROUTE2455.toField = "set_fraction";
ROUTE2455.toNode = "Yaws_l_shoulder_RotationInterpolator";
Group2413.children[41] = ROUTE2455;

let ROUTE2456 = browser.currentScene.createNode("ROUTE");
ROUTE2456.fromField = "fraction_changed";
ROUTE2456.fromNode = "YawTimer";
ROUTE2456.toField = "set_fraction";
ROUTE2456.toNode = "Yaws_head_RotationInterpolator";
Group2413.children[42] = ROUTE2456;

let ROUTE2457 = browser.currentScene.createNode("ROUTE");
ROUTE2457.fromField = "fraction_changed";
ROUTE2457.fromNode = "YawTimer";
ROUTE2457.toField = "set_fraction";
ROUTE2457.toNode = "Yaws_neck_RotationInterpolator";
Group2413.children[43] = ROUTE2457;

let ROUTE2458 = browser.currentScene.createNode("ROUTE");
ROUTE2458.fromField = "fraction_changed";
ROUTE2458.fromNode = "YawTimer";
ROUTE2458.toField = "set_fraction";
ROUTE2458.toNode = "Yaws_upper_body_RotationInterpolator";
Group2413.children[44] = ROUTE2458;

let ROUTE2459 = browser.currentScene.createNode("ROUTE");
ROUTE2459.fromField = "fraction_changed";
ROUTE2459.fromNode = "YawTimer";
ROUTE2459.toField = "set_fraction";
ROUTE2459.toNode = "Yaws_whole_body_RotationInterpolator";
Group2413.children[45] = ROUTE2459;

let ROUTE2460 = browser.currentScene.createNode("ROUTE");
ROUTE2460.fromField = "fraction_changed";
ROUTE2460.fromNode = "YawTimer";
ROUTE2460.toField = "set_fraction";
ROUTE2460.toNode = "Yaws_whole_body_TranslationInterpolator";
Group2413.children[46] = ROUTE2460;

let ROUTE2461 = browser.currentScene.createNode("ROUTE");
ROUTE2461.fromField = "fraction_changed";
ROUTE2461.fromNode = "YawTimer";
ROUTE2461.toField = "set_fraction";
ROUTE2461.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
Group2413.children[47] = ROUTE2461;

let ROUTE2462 = browser.currentScene.createNode("ROUTE");
ROUTE2462.fromField = "fraction_changed";
ROUTE2462.fromNode = "YawTimer";
ROUTE2462.toField = "set_fraction";
ROUTE2462.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
Group2413.children[48] = ROUTE2462;

let ROUTE2463 = browser.currentScene.createNode("ROUTE");
ROUTE2463.fromField = "fraction_changed";
ROUTE2463.fromNode = "YawTimer";
ROUTE2463.toField = "set_fraction";
ROUTE2463.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
Group2413.children[49] = ROUTE2463;

let ROUTE2464 = browser.currentScene.createNode("ROUTE");
ROUTE2464.fromField = "fraction_changed";
ROUTE2464.fromNode = "YawTimer";
ROUTE2464.toField = "set_fraction";
ROUTE2464.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
Group2413.children[50] = ROUTE2464;

let ROUTE2465 = browser.currentScene.createNode("ROUTE");
ROUTE2465.fromField = "fraction_changed";
ROUTE2465.fromNode = "YawTimer";
ROUTE2465.toField = "set_fraction";
ROUTE2465.toNode = "Yaw_r_metatarsal_PitchInterpolator";
Group2413.children[51] = ROUTE2465;

let ROUTE2466 = browser.currentScene.createNode("ROUTE");
ROUTE2466.fromField = "fraction_changed";
ROUTE2466.fromNode = "YawTimer";
ROUTE2466.toField = "set_fraction";
ROUTE2466.toNode = "Yaw_sacroiliac_YawInterpolator";
Group2413.children[52] = ROUTE2466;

let ROUTE2467 = browser.currentScene.createNode("ROUTE");
ROUTE2467.fromField = "fraction_changed";
ROUTE2467.fromNode = "YawTimer";
ROUTE2467.toField = "set_fraction";
ROUTE2467.toNode = "Yaw_vl5_YawInterpolator";
Group2413.children[53] = ROUTE2467;

let ROUTE2468 = browser.currentScene.createNode("ROUTE");
ROUTE2468.fromField = "fraction_changed";
ROUTE2468.fromNode = "YawTimer";
ROUTE2468.toField = "set_fraction";
ROUTE2468.toNode = "Yaw_vc6_YawInterpolator";
Group2413.children[54] = ROUTE2468;

let ROUTE2469 = browser.currentScene.createNode("ROUTE");
ROUTE2469.fromField = "fraction_changed";
ROUTE2469.fromNode = "YawTimer";
ROUTE2469.toField = "set_fraction";
ROUTE2469.toNode = "Yaw_l_thumb1_PitchInterpolator";
Group2413.children[55] = ROUTE2469;

let ROUTE2470 = browser.currentScene.createNode("ROUTE");
ROUTE2470.fromField = "fraction_changed";
ROUTE2470.fromNode = "YawTimer";
ROUTE2470.toField = "set_fraction";
ROUTE2470.toNode = "Yaw_r_thumb1_PitchInterpolator";
Group2413.children[56] = ROUTE2470;

let ROUTE2471 = browser.currentScene.createNode("ROUTE");
ROUTE2471.fromField = "value_changed";
ROUTE2471.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE2471.toField = "rotation";
ROUTE2471.toNode = "hanim_r_ankle";
Group2413.children[57] = ROUTE2471;

let ROUTE2472 = browser.currentScene.createNode("ROUTE");
ROUTE2472.fromField = "value_changed";
ROUTE2472.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE2472.toField = "rotation";
ROUTE2472.toNode = "hanim_r_knee";
Group2413.children[58] = ROUTE2472;

let ROUTE2473 = browser.currentScene.createNode("ROUTE");
ROUTE2473.fromField = "value_changed";
ROUTE2473.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE2473.toField = "rotation";
ROUTE2473.toNode = "hanim_r_hip";
Group2413.children[59] = ROUTE2473;

let ROUTE2474 = browser.currentScene.createNode("ROUTE");
ROUTE2474.fromField = "value_changed";
ROUTE2474.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE2474.toField = "rotation";
ROUTE2474.toNode = "hanim_l_ankle";
Group2413.children[60] = ROUTE2474;

let ROUTE2475 = browser.currentScene.createNode("ROUTE");
ROUTE2475.fromField = "value_changed";
ROUTE2475.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE2475.toField = "rotation";
ROUTE2475.toNode = "hanim_l_knee";
Group2413.children[61] = ROUTE2475;

let ROUTE2476 = browser.currentScene.createNode("ROUTE");
ROUTE2476.fromField = "value_changed";
ROUTE2476.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE2476.toField = "rotation";
ROUTE2476.toNode = "hanim_l_hip";
Group2413.children[62] = ROUTE2476;

let ROUTE2477 = browser.currentScene.createNode("ROUTE");
ROUTE2477.fromField = "value_changed";
ROUTE2477.fromNode = "Yaws_lower_body_RotationInterpolator";
ROUTE2477.toField = "rotation";
ROUTE2477.toNode = "hanim_sacroiliac";
Group2413.children[63] = ROUTE2477;

let ROUTE2478 = browser.currentScene.createNode("ROUTE");
ROUTE2478.fromField = "value_changed";
ROUTE2478.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE2478.toField = "rotation";
ROUTE2478.toNode = "hanim_r_wrist";
Group2413.children[64] = ROUTE2478;

let ROUTE2479 = browser.currentScene.createNode("ROUTE");
ROUTE2479.fromField = "value_changed";
ROUTE2479.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE2479.toField = "rotation";
ROUTE2479.toNode = "hanim_r_elbow";
Group2413.children[65] = ROUTE2479;

let ROUTE2480 = browser.currentScene.createNode("ROUTE");
ROUTE2480.fromField = "value_changed";
ROUTE2480.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE2480.toField = "rotation";
ROUTE2480.toNode = "hanim_r_shoulder";
Group2413.children[66] = ROUTE2480;

let ROUTE2481 = browser.currentScene.createNode("ROUTE");
ROUTE2481.fromField = "value_changed";
ROUTE2481.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE2481.toField = "rotation";
ROUTE2481.toNode = "hanim_l_wrist";
Group2413.children[67] = ROUTE2481;

let ROUTE2482 = browser.currentScene.createNode("ROUTE");
ROUTE2482.fromField = "value_changed";
ROUTE2482.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE2482.toField = "rotation";
ROUTE2482.toNode = "hanim_l_elbow";
Group2413.children[68] = ROUTE2482;

let ROUTE2483 = browser.currentScene.createNode("ROUTE");
ROUTE2483.fromField = "value_changed";
ROUTE2483.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE2483.toField = "rotation";
ROUTE2483.toNode = "hanim_l_shoulder";
Group2413.children[69] = ROUTE2483;

let ROUTE2484 = browser.currentScene.createNode("ROUTE");
ROUTE2484.fromField = "value_changed";
ROUTE2484.fromNode = "Yaws_head_RotationInterpolator";
ROUTE2484.toField = "rotation";
ROUTE2484.toNode = "hanim_skullbase";
Group2413.children[70] = ROUTE2484;

let ROUTE2485 = browser.currentScene.createNode("ROUTE");
ROUTE2485.fromField = "value_changed";
ROUTE2485.fromNode = "Yaws_neck_RotationInterpolator";
ROUTE2485.toField = "rotation";
ROUTE2485.toNode = "hanim_vc4";
Group2413.children[71] = ROUTE2485;

let ROUTE2486 = browser.currentScene.createNode("ROUTE");
ROUTE2486.fromField = "value_changed";
ROUTE2486.fromNode = "Yaws_upper_body_RotationInterpolator";
ROUTE2486.toField = "rotation";
ROUTE2486.toNode = "hanim_vl1";
Group2413.children[72] = ROUTE2486;

let ROUTE2487 = browser.currentScene.createNode("ROUTE");
ROUTE2487.fromField = "value_changed";
ROUTE2487.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE2487.toField = "rotation";
ROUTE2487.toNode = "hanim_humanoid_root";
Group2413.children[73] = ROUTE2487;

let ROUTE2488 = browser.currentScene.createNode("ROUTE");
ROUTE2488.fromField = "value_changed";
ROUTE2488.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE2488.toField = "translation";
ROUTE2488.toNode = "hanim_humanoid_root";
Group2413.children[74] = ROUTE2488;

let ROUTE2489 = browser.currentScene.createNode("ROUTE");
ROUTE2489.fromField = "value_changed";
ROUTE2489.fromNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE2489.toField = "rotation";
ROUTE2489.toNode = "hanim_l_sternoclavicular";
Group2413.children[75] = ROUTE2489;

let ROUTE2490 = browser.currentScene.createNode("ROUTE");
ROUTE2490.fromField = "value_changed";
ROUTE2490.fromNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE2490.toField = "rotation";
ROUTE2490.toNode = "hanim_l_acromioclavicular";
Group2413.children[76] = ROUTE2490;

let ROUTE2491 = browser.currentScene.createNode("ROUTE");
ROUTE2491.fromField = "value_changed";
ROUTE2491.fromNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE2491.toField = "rotation";
ROUTE2491.toNode = "hanim_r_sternoclavicular";
Group2413.children[77] = ROUTE2491;

let ROUTE2492 = browser.currentScene.createNode("ROUTE");
ROUTE2492.fromField = "value_changed";
ROUTE2492.fromNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE2492.toField = "rotation";
ROUTE2492.toNode = "hanim_r_acromioclavicular";
Group2413.children[78] = ROUTE2492;

let ROUTE2493 = browser.currentScene.createNode("ROUTE");
ROUTE2493.fromField = "value_changed";
ROUTE2493.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2493.toField = "rotation";
ROUTE2493.toNode = "hanim_l_metatarsal";
Group2413.children[79] = ROUTE2493;

let ROUTE2494 = browser.currentScene.createNode("ROUTE");
ROUTE2494.fromField = "value_changed";
ROUTE2494.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2494.toField = "rotation";
ROUTE2494.toNode = "hanim_r_metatarsal";
Group2413.children[80] = ROUTE2494;

let ROUTE2495 = browser.currentScene.createNode("ROUTE");
ROUTE2495.fromField = "value_changed";
ROUTE2495.fromNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE2495.toField = "rotation";
ROUTE2495.toNode = "hanim_sacroiliac";
Group2413.children[81] = ROUTE2495;

let ROUTE2496 = browser.currentScene.createNode("ROUTE");
ROUTE2496.fromField = "value_changed";
ROUTE2496.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE2496.toField = "rotation";
ROUTE2496.toNode = "hanim_vl5";
Group2413.children[82] = ROUTE2496;

let ROUTE2497 = browser.currentScene.createNode("ROUTE");
ROUTE2497.fromField = "value_changed";
ROUTE2497.fromNode = "Yaw_vc6_YawInterpolator";
ROUTE2497.toField = "rotation";
ROUTE2497.toNode = "hanim_vc6";
Group2413.children[83] = ROUTE2497;

let ROUTE2498 = browser.currentScene.createNode("ROUTE");
ROUTE2498.fromField = "value_changed";
ROUTE2498.fromNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE2498.toField = "rotation";
ROUTE2498.toNode = "hanim_l_thumb1";
Group2413.children[84] = ROUTE2498;

let ROUTE2499 = browser.currentScene.createNode("ROUTE");
ROUTE2499.fromField = "value_changed";
ROUTE2499.fromNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE2499.toField = "rotation";
ROUTE2499.toNode = "hanim_r_thumb1";
Group2413.children[85] = ROUTE2499;

browser.currentScene.children[16] = Group2413;

let Group2500 = browser.currentScene.createNode("Group");
Group2500.DEF = "RollsAnimation";
let TimeSensor2501 = browser.currentScene.createNode("TimeSensor");
TimeSensor2501.DEF = "RollTimer";
TimeSensor2501.cycleInterval = 5.73;
TimeSensor2501.loop = True;
Group2500.children = new MFNode();

Group2500.children[0] = TimeSensor2501;

let OrientationInterpolator2502 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2502.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator2502.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2502.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[1] = OrientationInterpolator2502;

let OrientationInterpolator2503 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2503.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator2503.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2503.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2500.children[2] = OrientationInterpolator2503;

let OrientationInterpolator2504 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2504.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator2504.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2504.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[3] = OrientationInterpolator2504;

let OrientationInterpolator2505 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2505.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator2505.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2505.keyValue = new MFRotation(new float[0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2500.children[4] = OrientationInterpolator2505;

let OrientationInterpolator2506 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2506.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator2506.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2506.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2500.children[5] = OrientationInterpolator2506;

let OrientationInterpolator2507 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2507.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator2507.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2507.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[6] = OrientationInterpolator2507;

let OrientationInterpolator2508 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2508.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator2508.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2508.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2500.children[7] = OrientationInterpolator2508;

let OrientationInterpolator2509 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2509.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator2509.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2509.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2500.children[8] = OrientationInterpolator2509;

let OrientationInterpolator2510 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2510.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator2510.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2510.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[9] = OrientationInterpolator2510;

let OrientationInterpolator2511 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2511.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator2511.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2511.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group2500.children[10] = OrientationInterpolator2511;

let OrientationInterpolator2512 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2512.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator2512.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2512.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2500.children[11] = OrientationInterpolator2512;

let OrientationInterpolator2513 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2513.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator2513.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2513.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[12] = OrientationInterpolator2513;

let OrientationInterpolator2514 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2514.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator2514.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2514.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group2500.children[13] = OrientationInterpolator2514;

let OrientationInterpolator2515 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2515.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator2515.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2515.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[14] = OrientationInterpolator2515;

let OrientationInterpolator2516 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2516.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator2516.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2516.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group2500.children[15] = OrientationInterpolator2516;

let OrientationInterpolator2517 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2517.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator2517.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2517.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[16] = OrientationInterpolator2517;

let OrientationInterpolator2518 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2518.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator2518.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2518.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[17] = OrientationInterpolator2518;

let OrientationInterpolator2519 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2519.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator2519.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2519.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[18] = OrientationInterpolator2519;

let PositionInterpolator2520 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2520.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator2520.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2520.keyValue = new MFVec3f(new float[0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group2500.children[19] = PositionInterpolator2520;

let OrientationInterpolator2521 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2521.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2521.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2521.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2500.children[20] = OrientationInterpolator2521;

let OrientationInterpolator2522 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2522.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2522.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2522.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[21] = OrientationInterpolator2522;

let OrientationInterpolator2523 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2523.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2523.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2523.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2500.children[22] = OrientationInterpolator2523;

let OrientationInterpolator2524 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2524.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2524.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2524.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[23] = OrientationInterpolator2524;

let OrientationInterpolator2525 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2525.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator2525.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2525.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[24] = OrientationInterpolator2525;

let OrientationInterpolator2526 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2526.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator2526.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2526.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[25] = OrientationInterpolator2526;

let OrientationInterpolator2527 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2527.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator2527.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2527.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[26] = OrientationInterpolator2527;

let OrientationInterpolator2528 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2528.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator2528.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2528.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[27] = OrientationInterpolator2528;

let OrientationInterpolator2529 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2529.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator2529.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2529.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[28] = OrientationInterpolator2529;

let ROUTE2530 = browser.currentScene.createNode("ROUTE");
ROUTE2530.fromField = "fraction_changed";
ROUTE2530.fromNode = "RollTimer";
ROUTE2530.toField = "set_fraction";
ROUTE2530.toNode = "Rolls_r_ankle_RotationInterpolator";
Group2500.children[29] = ROUTE2530;

let ROUTE2531 = browser.currentScene.createNode("ROUTE");
ROUTE2531.fromField = "fraction_changed";
ROUTE2531.fromNode = "RollTimer";
ROUTE2531.toField = "set_fraction";
ROUTE2531.toNode = "Rolls_r_knee_RotationInterpolator";
Group2500.children[30] = ROUTE2531;

let ROUTE2532 = browser.currentScene.createNode("ROUTE");
ROUTE2532.fromField = "fraction_changed";
ROUTE2532.fromNode = "RollTimer";
ROUTE2532.toField = "set_fraction";
ROUTE2532.toNode = "Rolls_r_hip_RotationInterpolator";
Group2500.children[31] = ROUTE2532;

let ROUTE2533 = browser.currentScene.createNode("ROUTE");
ROUTE2533.fromField = "fraction_changed";
ROUTE2533.fromNode = "RollTimer";
ROUTE2533.toField = "set_fraction";
ROUTE2533.toNode = "Rolls_l_ankle_RotationInterpolator";
Group2500.children[32] = ROUTE2533;

let ROUTE2534 = browser.currentScene.createNode("ROUTE");
ROUTE2534.fromField = "fraction_changed";
ROUTE2534.fromNode = "RollTimer";
ROUTE2534.toField = "set_fraction";
ROUTE2534.toNode = "Rolls_l_knee_RotationInterpolator";
Group2500.children[33] = ROUTE2534;

let ROUTE2535 = browser.currentScene.createNode("ROUTE");
ROUTE2535.fromField = "fraction_changed";
ROUTE2535.fromNode = "RollTimer";
ROUTE2535.toField = "set_fraction";
ROUTE2535.toNode = "Rolls_l_hip_RotationInterpolator";
Group2500.children[34] = ROUTE2535;

let ROUTE2536 = browser.currentScene.createNode("ROUTE");
ROUTE2536.fromField = "fraction_changed";
ROUTE2536.fromNode = "RollTimer";
ROUTE2536.toField = "set_fraction";
ROUTE2536.toNode = "Rolls_lower_body_RotationInterpolator";
Group2500.children[35] = ROUTE2536;

let ROUTE2537 = browser.currentScene.createNode("ROUTE");
ROUTE2537.fromField = "fraction_changed";
ROUTE2537.fromNode = "RollTimer";
ROUTE2537.toField = "set_fraction";
ROUTE2537.toNode = "Rolls_r_wrist_RotationInterpolator";
Group2500.children[36] = ROUTE2537;

let ROUTE2538 = browser.currentScene.createNode("ROUTE");
ROUTE2538.fromField = "fraction_changed";
ROUTE2538.fromNode = "RollTimer";
ROUTE2538.toField = "set_fraction";
ROUTE2538.toNode = "Rolls_r_elbow_RotationInterpolator";
Group2500.children[37] = ROUTE2538;

let ROUTE2539 = browser.currentScene.createNode("ROUTE");
ROUTE2539.fromField = "fraction_changed";
ROUTE2539.fromNode = "RollTimer";
ROUTE2539.toField = "set_fraction";
ROUTE2539.toNode = "Rolls_r_shoulder_RotationInterpolator";
Group2500.children[38] = ROUTE2539;

let ROUTE2540 = browser.currentScene.createNode("ROUTE");
ROUTE2540.fromField = "fraction_changed";
ROUTE2540.fromNode = "RollTimer";
ROUTE2540.toField = "set_fraction";
ROUTE2540.toNode = "Rolls_l_wrist_RotationInterpolator";
Group2500.children[39] = ROUTE2540;

let ROUTE2541 = browser.currentScene.createNode("ROUTE");
ROUTE2541.fromField = "fraction_changed";
ROUTE2541.fromNode = "RollTimer";
ROUTE2541.toField = "set_fraction";
ROUTE2541.toNode = "Rolls_l_elbow_RotationInterpolator";
Group2500.children[40] = ROUTE2541;

let ROUTE2542 = browser.currentScene.createNode("ROUTE");
ROUTE2542.fromField = "fraction_changed";
ROUTE2542.fromNode = "RollTimer";
ROUTE2542.toField = "set_fraction";
ROUTE2542.toNode = "Rolls_l_shoulder_RotationInterpolator";
Group2500.children[41] = ROUTE2542;

let ROUTE2543 = browser.currentScene.createNode("ROUTE");
ROUTE2543.fromField = "fraction_changed";
ROUTE2543.fromNode = "RollTimer";
ROUTE2543.toField = "set_fraction";
ROUTE2543.toNode = "Rolls_head_RotationInterpolator";
Group2500.children[42] = ROUTE2543;

let ROUTE2544 = browser.currentScene.createNode("ROUTE");
ROUTE2544.fromField = "fraction_changed";
ROUTE2544.fromNode = "RollTimer";
ROUTE2544.toField = "set_fraction";
ROUTE2544.toNode = "Rolls_neck_RotationInterpolator";
Group2500.children[43] = ROUTE2544;

let ROUTE2545 = browser.currentScene.createNode("ROUTE");
ROUTE2545.fromField = "fraction_changed";
ROUTE2545.fromNode = "RollTimer";
ROUTE2545.toField = "set_fraction";
ROUTE2545.toNode = "Rolls_upper_body_RotationInterpolator";
Group2500.children[44] = ROUTE2545;

let ROUTE2546 = browser.currentScene.createNode("ROUTE");
ROUTE2546.fromField = "fraction_changed";
ROUTE2546.fromNode = "RollTimer";
ROUTE2546.toField = "set_fraction";
ROUTE2546.toNode = "Rolls_whole_body_RotationInterpolator";
Group2500.children[45] = ROUTE2546;

let ROUTE2547 = browser.currentScene.createNode("ROUTE");
ROUTE2547.fromField = "fraction_changed";
ROUTE2547.fromNode = "RollTimer";
ROUTE2547.toField = "set_fraction";
ROUTE2547.toNode = "Rolls_whole_body_TranslationInterpolator";
Group2500.children[46] = ROUTE2547;

let ROUTE2548 = browser.currentScene.createNode("ROUTE");
ROUTE2548.fromField = "fraction_changed";
ROUTE2548.fromNode = "RollTimer";
ROUTE2548.toField = "set_fraction";
ROUTE2548.toNode = "Roll_l_sternoclavicular_RollInterpolator";
Group2500.children[47] = ROUTE2548;

let ROUTE2549 = browser.currentScene.createNode("ROUTE");
ROUTE2549.fromField = "fraction_changed";
ROUTE2549.fromNode = "RollTimer";
ROUTE2549.toField = "set_fraction";
ROUTE2549.toNode = "Roll_l_acromioclavicular_RollInterpolator";
Group2500.children[48] = ROUTE2549;

let ROUTE2550 = browser.currentScene.createNode("ROUTE");
ROUTE2550.fromField = "fraction_changed";
ROUTE2550.fromNode = "RollTimer";
ROUTE2550.toField = "set_fraction";
ROUTE2550.toNode = "Roll_r_sternoclavicular_RollInterpolator";
Group2500.children[49] = ROUTE2550;

let ROUTE2551 = browser.currentScene.createNode("ROUTE");
ROUTE2551.fromField = "fraction_changed";
ROUTE2551.fromNode = "RollTimer";
ROUTE2551.toField = "set_fraction";
ROUTE2551.toNode = "Roll_r_acromioclavicular_RollInterpolator";
Group2500.children[50] = ROUTE2551;

let ROUTE2552 = browser.currentScene.createNode("ROUTE");
ROUTE2552.fromField = "fraction_changed";
ROUTE2552.fromNode = "RollTimer";
ROUTE2552.toField = "set_fraction";
ROUTE2552.toNode = "Roll_r_metatarsal_PitchInterpolator";
Group2500.children[51] = ROUTE2552;

let ROUTE2553 = browser.currentScene.createNode("ROUTE");
ROUTE2553.fromField = "fraction_changed";
ROUTE2553.fromNode = "RollTimer";
ROUTE2553.toField = "set_fraction";
ROUTE2553.toNode = "Roll_sacroiliac_YawInterpolator";
Group2500.children[52] = ROUTE2553;

let ROUTE2554 = browser.currentScene.createNode("ROUTE");
ROUTE2554.fromField = "fraction_changed";
ROUTE2554.fromNode = "RollTimer";
ROUTE2554.toField = "set_fraction";
ROUTE2554.toNode = "Roll_vl5_YawInterpolator";
Group2500.children[53] = ROUTE2554;

let ROUTE2555 = browser.currentScene.createNode("ROUTE");
ROUTE2555.fromField = "fraction_changed";
ROUTE2555.fromNode = "RollTimer";
ROUTE2555.toField = "set_fraction";
ROUTE2555.toNode = "Roll_vc6_YawInterpolator";
Group2500.children[54] = ROUTE2555;

let ROUTE2556 = browser.currentScene.createNode("ROUTE");
ROUTE2556.fromField = "fraction_changed";
ROUTE2556.fromNode = "RollTimer";
ROUTE2556.toField = "set_fraction";
ROUTE2556.toNode = "Roll_l_thumb1_PitchInterpolator";
Group2500.children[55] = ROUTE2556;

let ROUTE2557 = browser.currentScene.createNode("ROUTE");
ROUTE2557.fromField = "fraction_changed";
ROUTE2557.fromNode = "RollTimer";
ROUTE2557.toField = "set_fraction";
ROUTE2557.toNode = "Roll_r_thumb1_PitchInterpolator";
Group2500.children[56] = ROUTE2557;

let ROUTE2558 = browser.currentScene.createNode("ROUTE");
ROUTE2558.fromField = "value_changed";
ROUTE2558.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE2558.toField = "rotation";
ROUTE2558.toNode = "hanim_r_ankle";
Group2500.children[57] = ROUTE2558;

let ROUTE2559 = browser.currentScene.createNode("ROUTE");
ROUTE2559.fromField = "value_changed";
ROUTE2559.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE2559.toField = "rotation";
ROUTE2559.toNode = "hanim_r_knee";
Group2500.children[58] = ROUTE2559;

let ROUTE2560 = browser.currentScene.createNode("ROUTE");
ROUTE2560.fromField = "value_changed";
ROUTE2560.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE2560.toField = "rotation";
ROUTE2560.toNode = "hanim_r_hip";
Group2500.children[59] = ROUTE2560;

let ROUTE2561 = browser.currentScene.createNode("ROUTE");
ROUTE2561.fromField = "value_changed";
ROUTE2561.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE2561.toField = "rotation";
ROUTE2561.toNode = "hanim_l_ankle";
Group2500.children[60] = ROUTE2561;

let ROUTE2562 = browser.currentScene.createNode("ROUTE");
ROUTE2562.fromField = "value_changed";
ROUTE2562.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE2562.toField = "rotation";
ROUTE2562.toNode = "hanim_l_knee";
Group2500.children[61] = ROUTE2562;

let ROUTE2563 = browser.currentScene.createNode("ROUTE");
ROUTE2563.fromField = "value_changed";
ROUTE2563.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE2563.toField = "rotation";
ROUTE2563.toNode = "hanim_l_hip";
Group2500.children[62] = ROUTE2563;

let ROUTE2564 = browser.currentScene.createNode("ROUTE");
ROUTE2564.fromField = "value_changed";
ROUTE2564.fromNode = "Rolls_lower_body_RotationInterpolator";
ROUTE2564.toField = "rotation";
ROUTE2564.toNode = "hanim_sacroiliac";
Group2500.children[63] = ROUTE2564;

let ROUTE2565 = browser.currentScene.createNode("ROUTE");
ROUTE2565.fromField = "value_changed";
ROUTE2565.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE2565.toField = "rotation";
ROUTE2565.toNode = "hanim_r_wrist";
Group2500.children[64] = ROUTE2565;

let ROUTE2566 = browser.currentScene.createNode("ROUTE");
ROUTE2566.fromField = "value_changed";
ROUTE2566.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE2566.toField = "rotation";
ROUTE2566.toNode = "hanim_r_elbow";
Group2500.children[65] = ROUTE2566;

let ROUTE2567 = browser.currentScene.createNode("ROUTE");
ROUTE2567.fromField = "value_changed";
ROUTE2567.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE2567.toField = "rotation";
ROUTE2567.toNode = "hanim_r_shoulder";
Group2500.children[66] = ROUTE2567;

let ROUTE2568 = browser.currentScene.createNode("ROUTE");
ROUTE2568.fromField = "value_changed";
ROUTE2568.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE2568.toField = "rotation";
ROUTE2568.toNode = "hanim_l_wrist";
Group2500.children[67] = ROUTE2568;

let ROUTE2569 = browser.currentScene.createNode("ROUTE");
ROUTE2569.fromField = "value_changed";
ROUTE2569.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE2569.toField = "rotation";
ROUTE2569.toNode = "hanim_l_elbow";
Group2500.children[68] = ROUTE2569;

let ROUTE2570 = browser.currentScene.createNode("ROUTE");
ROUTE2570.fromField = "value_changed";
ROUTE2570.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE2570.toField = "rotation";
ROUTE2570.toNode = "hanim_l_shoulder";
Group2500.children[69] = ROUTE2570;

let ROUTE2571 = browser.currentScene.createNode("ROUTE");
ROUTE2571.fromField = "value_changed";
ROUTE2571.fromNode = "Rolls_head_RotationInterpolator";
ROUTE2571.toField = "rotation";
ROUTE2571.toNode = "hanim_skullbase";
Group2500.children[70] = ROUTE2571;

let ROUTE2572 = browser.currentScene.createNode("ROUTE");
ROUTE2572.fromField = "value_changed";
ROUTE2572.fromNode = "Rolls_neck_RotationInterpolator";
ROUTE2572.toField = "rotation";
ROUTE2572.toNode = "hanim_vc4";
Group2500.children[71] = ROUTE2572;

let ROUTE2573 = browser.currentScene.createNode("ROUTE");
ROUTE2573.fromField = "value_changed";
ROUTE2573.fromNode = "Rolls_upper_body_RotationInterpolator";
ROUTE2573.toField = "rotation";
ROUTE2573.toNode = "hanim_vl1";
Group2500.children[72] = ROUTE2573;

let ROUTE2574 = browser.currentScene.createNode("ROUTE");
ROUTE2574.fromField = "value_changed";
ROUTE2574.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE2574.toField = "rotation";
ROUTE2574.toNode = "hanim_humanoid_root";
Group2500.children[73] = ROUTE2574;

let ROUTE2575 = browser.currentScene.createNode("ROUTE");
ROUTE2575.fromField = "value_changed";
ROUTE2575.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE2575.toField = "translation";
ROUTE2575.toNode = "hanim_humanoid_root";
Group2500.children[74] = ROUTE2575;

let ROUTE2576 = browser.currentScene.createNode("ROUTE");
ROUTE2576.fromField = "value_changed";
ROUTE2576.fromNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE2576.toField = "rotation";
ROUTE2576.toNode = "hanim_l_sternoclavicular";
Group2500.children[75] = ROUTE2576;

let ROUTE2577 = browser.currentScene.createNode("ROUTE");
ROUTE2577.fromField = "value_changed";
ROUTE2577.fromNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE2577.toField = "rotation";
ROUTE2577.toNode = "hanim_l_acromioclavicular";
Group2500.children[76] = ROUTE2577;

let ROUTE2578 = browser.currentScene.createNode("ROUTE");
ROUTE2578.fromField = "value_changed";
ROUTE2578.fromNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE2578.toField = "rotation";
ROUTE2578.toNode = "hanim_r_sternoclavicular";
Group2500.children[77] = ROUTE2578;

let ROUTE2579 = browser.currentScene.createNode("ROUTE");
ROUTE2579.fromField = "value_changed";
ROUTE2579.fromNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE2579.toField = "rotation";
ROUTE2579.toNode = "hanim_r_acromioclavicular";
Group2500.children[78] = ROUTE2579;

let ROUTE2580 = browser.currentScene.createNode("ROUTE");
ROUTE2580.fromField = "value_changed";
ROUTE2580.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2580.toField = "rotation";
ROUTE2580.toNode = "hanim_l_metatarsal";
Group2500.children[79] = ROUTE2580;

let ROUTE2581 = browser.currentScene.createNode("ROUTE");
ROUTE2581.fromField = "value_changed";
ROUTE2581.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2581.toField = "rotation";
ROUTE2581.toNode = "hanim_r_metatarsal";
Group2500.children[80] = ROUTE2581;

let ROUTE2582 = browser.currentScene.createNode("ROUTE");
ROUTE2582.fromField = "value_changed";
ROUTE2582.fromNode = "Roll_sacroiliac_YawInterpolator";
ROUTE2582.toField = "rotation";
ROUTE2582.toNode = "hanim_sacroiliac";
Group2500.children[81] = ROUTE2582;

let ROUTE2583 = browser.currentScene.createNode("ROUTE");
ROUTE2583.fromField = "value_changed";
ROUTE2583.fromNode = "Roll_vl5_YawInterpolator";
ROUTE2583.toField = "rotation";
ROUTE2583.toNode = "hanim_vl5";
Group2500.children[82] = ROUTE2583;

let ROUTE2584 = browser.currentScene.createNode("ROUTE");
ROUTE2584.fromField = "value_changed";
ROUTE2584.fromNode = "Roll_vc6_YawInterpolator";
ROUTE2584.toField = "rotation";
ROUTE2584.toNode = "hanim_vc6";
Group2500.children[83] = ROUTE2584;

let ROUTE2585 = browser.currentScene.createNode("ROUTE");
ROUTE2585.fromField = "value_changed";
ROUTE2585.fromNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE2585.toField = "rotation";
ROUTE2585.toNode = "hanim_l_thumb1";
Group2500.children[84] = ROUTE2585;

let ROUTE2586 = browser.currentScene.createNode("ROUTE");
ROUTE2586.fromField = "value_changed";
ROUTE2586.fromNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE2586.toField = "rotation";
ROUTE2586.toNode = "hanim_r_thumb1";
Group2500.children[85] = ROUTE2586;

browser.currentScene.children[17] = Group2500;

let Group2587 = browser.currentScene.createNode("Group");
Group2587.DEF = "WalkAnimation";
let TimeSensor2588 = browser.currentScene.createNode("TimeSensor");
TimeSensor2588.DEF = "WalkTimer";
TimeSensor2588.cycleInterval = 1.73;
TimeSensor2588.loop = True;
Group2587.children = new MFNode();

Group2587.children[0] = TimeSensor2588;

let OrientationInterpolator2589 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2589.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator2589.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2589.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[1] = OrientationInterpolator2589;

let OrientationInterpolator2590 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2590.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator2590.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator2590.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group2587.children[2] = OrientationInterpolator2590;

let OrientationInterpolator2591 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2591.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator2591.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2591.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group2587.children[3] = OrientationInterpolator2591;

let OrientationInterpolator2592 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2592.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator2592.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2592.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group2587.children[4] = OrientationInterpolator2592;

let OrientationInterpolator2593 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2593.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator2593.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator2593.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group2587.children[5] = OrientationInterpolator2593;

let OrientationInterpolator2594 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2594.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator2594.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2594.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group2587.children[6] = OrientationInterpolator2594;

let OrientationInterpolator2595 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2595.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator2595.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2595.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group2587.children[7] = OrientationInterpolator2595;

let OrientationInterpolator2596 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2596.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator2596.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2596.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group2587.children[8] = OrientationInterpolator2596;

let OrientationInterpolator2597 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2597.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator2597.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2597.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group2587.children[9] = OrientationInterpolator2597;

let OrientationInterpolator2598 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2598.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator2598.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2598.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group2587.children[10] = OrientationInterpolator2598;

let OrientationInterpolator2599 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2599.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator2599.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2599.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group2587.children[11] = OrientationInterpolator2599;

let OrientationInterpolator2600 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2600.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator2600.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2600.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group2587.children[12] = OrientationInterpolator2600;

let OrientationInterpolator2601 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2601.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator2601.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2601.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group2587.children[13] = OrientationInterpolator2601;

let OrientationInterpolator2602 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2602.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator2602.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2602.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group2587.children[14] = OrientationInterpolator2602;

let OrientationInterpolator2603 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2603.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator2603.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator2603.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group2587.children[15] = OrientationInterpolator2603;

let OrientationInterpolator2604 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2604.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator2604.key = new MFFloat(new float[0,1]);
OrientationInterpolator2604.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2587.children[16] = OrientationInterpolator2604;

let OrientationInterpolator2605 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2605.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator2605.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator2605.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group2587.children[17] = OrientationInterpolator2605;

let OrientationInterpolator2606 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2606.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator2606.key = new MFFloat(new float[0,1]);
OrientationInterpolator2606.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2587.children[18] = OrientationInterpolator2606;

let PositionInterpolator2607 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2607.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator2607.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator2607.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group2587.children[19] = PositionInterpolator2607;

let OrientationInterpolator2608 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2608.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2608.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2608.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[20] = OrientationInterpolator2608;

let OrientationInterpolator2609 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2609.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2609.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2609.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[21] = OrientationInterpolator2609;

let OrientationInterpolator2610 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2610.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2610.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2610.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[22] = OrientationInterpolator2610;

let OrientationInterpolator2611 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2611.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2611.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2611.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[23] = OrientationInterpolator2611;

let OrientationInterpolator2612 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2612.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator2612.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2612.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[24] = OrientationInterpolator2612;

let OrientationInterpolator2613 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2613.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator2613.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2613.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[25] = OrientationInterpolator2613;

let OrientationInterpolator2614 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2614.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator2614.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2614.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[26] = OrientationInterpolator2614;

let OrientationInterpolator2615 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2615.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator2615.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2615.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2587.children[27] = OrientationInterpolator2615;

let OrientationInterpolator2616 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2616.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator2616.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2616.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2587.children[28] = OrientationInterpolator2616;

let ROUTE2617 = browser.currentScene.createNode("ROUTE");
ROUTE2617.fromField = "fraction_changed";
ROUTE2617.fromNode = "WalkTimer";
ROUTE2617.toField = "set_fraction";
ROUTE2617.toNode = "Walk_r_ankle_RotationInterpolator";
Group2587.children[29] = ROUTE2617;

let ROUTE2618 = browser.currentScene.createNode("ROUTE");
ROUTE2618.fromField = "fraction_changed";
ROUTE2618.fromNode = "WalkTimer";
ROUTE2618.toField = "set_fraction";
ROUTE2618.toNode = "Walk_r_knee_RotationInterpolator";
Group2587.children[30] = ROUTE2618;

let ROUTE2619 = browser.currentScene.createNode("ROUTE");
ROUTE2619.fromField = "fraction_changed";
ROUTE2619.fromNode = "WalkTimer";
ROUTE2619.toField = "set_fraction";
ROUTE2619.toNode = "Walk_r_hip_RotationInterpolator";
Group2587.children[31] = ROUTE2619;

let ROUTE2620 = browser.currentScene.createNode("ROUTE");
ROUTE2620.fromField = "fraction_changed";
ROUTE2620.fromNode = "WalkTimer";
ROUTE2620.toField = "set_fraction";
ROUTE2620.toNode = "Walk_l_ankle_RotationInterpolator";
Group2587.children[32] = ROUTE2620;

let ROUTE2621 = browser.currentScene.createNode("ROUTE");
ROUTE2621.fromField = "fraction_changed";
ROUTE2621.fromNode = "WalkTimer";
ROUTE2621.toField = "set_fraction";
ROUTE2621.toNode = "Walk_l_knee_RotationInterpolator";
Group2587.children[33] = ROUTE2621;

let ROUTE2622 = browser.currentScene.createNode("ROUTE");
ROUTE2622.fromField = "fraction_changed";
ROUTE2622.fromNode = "WalkTimer";
ROUTE2622.toField = "set_fraction";
ROUTE2622.toNode = "Walk_l_hip_RotationInterpolator";
Group2587.children[34] = ROUTE2622;

let ROUTE2623 = browser.currentScene.createNode("ROUTE");
ROUTE2623.fromField = "fraction_changed";
ROUTE2623.fromNode = "WalkTimer";
ROUTE2623.toField = "set_fraction";
ROUTE2623.toNode = "Walk_lower_body_RotationInterpolator";
Group2587.children[35] = ROUTE2623;

let ROUTE2624 = browser.currentScene.createNode("ROUTE");
ROUTE2624.fromField = "fraction_changed";
ROUTE2624.fromNode = "WalkTimer";
ROUTE2624.toField = "set_fraction";
ROUTE2624.toNode = "Walk_r_wrist_RotationInterpolator";
Group2587.children[36] = ROUTE2624;

let ROUTE2625 = browser.currentScene.createNode("ROUTE");
ROUTE2625.fromField = "fraction_changed";
ROUTE2625.fromNode = "WalkTimer";
ROUTE2625.toField = "set_fraction";
ROUTE2625.toNode = "Walk_r_elbow_RotationInterpolator";
Group2587.children[37] = ROUTE2625;

let ROUTE2626 = browser.currentScene.createNode("ROUTE");
ROUTE2626.fromField = "fraction_changed";
ROUTE2626.fromNode = "WalkTimer";
ROUTE2626.toField = "set_fraction";
ROUTE2626.toNode = "Walk_r_shoulder_RotationInterpolator";
Group2587.children[38] = ROUTE2626;

let ROUTE2627 = browser.currentScene.createNode("ROUTE");
ROUTE2627.fromField = "fraction_changed";
ROUTE2627.fromNode = "WalkTimer";
ROUTE2627.toField = "set_fraction";
ROUTE2627.toNode = "Walk_l_wrist_RotationInterpolator";
Group2587.children[39] = ROUTE2627;

let ROUTE2628 = browser.currentScene.createNode("ROUTE");
ROUTE2628.fromField = "fraction_changed";
ROUTE2628.fromNode = "WalkTimer";
ROUTE2628.toField = "set_fraction";
ROUTE2628.toNode = "Walk_l_elbow_RotationInterpolator";
Group2587.children[40] = ROUTE2628;

let ROUTE2629 = browser.currentScene.createNode("ROUTE");
ROUTE2629.fromField = "fraction_changed";
ROUTE2629.fromNode = "WalkTimer";
ROUTE2629.toField = "set_fraction";
ROUTE2629.toNode = "Walk_l_shoulder_RotationInterpolator";
Group2587.children[41] = ROUTE2629;

let ROUTE2630 = browser.currentScene.createNode("ROUTE");
ROUTE2630.fromField = "fraction_changed";
ROUTE2630.fromNode = "WalkTimer";
ROUTE2630.toField = "set_fraction";
ROUTE2630.toNode = "Walk_head_RotationInterpolator";
Group2587.children[42] = ROUTE2630;

let ROUTE2631 = browser.currentScene.createNode("ROUTE");
ROUTE2631.fromField = "fraction_changed";
ROUTE2631.fromNode = "WalkTimer";
ROUTE2631.toField = "set_fraction";
ROUTE2631.toNode = "Walk_neck_RotationInterpolator";
Group2587.children[43] = ROUTE2631;

let ROUTE2632 = browser.currentScene.createNode("ROUTE");
ROUTE2632.fromField = "fraction_changed";
ROUTE2632.fromNode = "WalkTimer";
ROUTE2632.toField = "set_fraction";
ROUTE2632.toNode = "Walk_upper_body_RotationInterpolator";
Group2587.children[44] = ROUTE2632;

let ROUTE2633 = browser.currentScene.createNode("ROUTE");
ROUTE2633.fromField = "fraction_changed";
ROUTE2633.fromNode = "WalkTimer";
ROUTE2633.toField = "set_fraction";
ROUTE2633.toNode = "Walk_whole_body_RotationInterpolator";
Group2587.children[45] = ROUTE2633;

let ROUTE2634 = browser.currentScene.createNode("ROUTE");
ROUTE2634.fromField = "fraction_changed";
ROUTE2634.fromNode = "WalkTimer";
ROUTE2634.toField = "set_fraction";
ROUTE2634.toNode = "Walk_whole_body_TranslationInterpolator";
Group2587.children[46] = ROUTE2634;

let ROUTE2635 = browser.currentScene.createNode("ROUTE");
ROUTE2635.fromField = "fraction_changed";
ROUTE2635.fromNode = "WalkTimer";
ROUTE2635.toField = "set_fraction";
ROUTE2635.toNode = "Walk_l_sternoclavicular_RollInterpolator";
Group2587.children[47] = ROUTE2635;

let ROUTE2636 = browser.currentScene.createNode("ROUTE");
ROUTE2636.fromField = "fraction_changed";
ROUTE2636.fromNode = "WalkTimer";
ROUTE2636.toField = "set_fraction";
ROUTE2636.toNode = "Walk_l_acromioclavicular_RollInterpolator";
Group2587.children[48] = ROUTE2636;

let ROUTE2637 = browser.currentScene.createNode("ROUTE");
ROUTE2637.fromField = "fraction_changed";
ROUTE2637.fromNode = "WalkTimer";
ROUTE2637.toField = "set_fraction";
ROUTE2637.toNode = "Walk_r_sternoclavicular_RollInterpolator";
Group2587.children[49] = ROUTE2637;

let ROUTE2638 = browser.currentScene.createNode("ROUTE");
ROUTE2638.fromField = "fraction_changed";
ROUTE2638.fromNode = "WalkTimer";
ROUTE2638.toField = "set_fraction";
ROUTE2638.toNode = "Walk_r_acromioclavicular_RollInterpolator";
Group2587.children[50] = ROUTE2638;

let ROUTE2639 = browser.currentScene.createNode("ROUTE");
ROUTE2639.fromField = "fraction_changed";
ROUTE2639.fromNode = "WalkTimer";
ROUTE2639.toField = "set_fraction";
ROUTE2639.toNode = "Walk_r_metatarsal_PitchInterpolator";
Group2587.children[51] = ROUTE2639;

let ROUTE2640 = browser.currentScene.createNode("ROUTE");
ROUTE2640.fromField = "fraction_changed";
ROUTE2640.fromNode = "WalkTimer";
ROUTE2640.toField = "set_fraction";
ROUTE2640.toNode = "Walk_sacroiliac_YawInterpolator";
Group2587.children[52] = ROUTE2640;

let ROUTE2641 = browser.currentScene.createNode("ROUTE");
ROUTE2641.fromField = "fraction_changed";
ROUTE2641.fromNode = "WalkTimer";
ROUTE2641.toField = "set_fraction";
ROUTE2641.toNode = "Walk_vl5_YawInterpolator";
Group2587.children[53] = ROUTE2641;

let ROUTE2642 = browser.currentScene.createNode("ROUTE");
ROUTE2642.fromField = "fraction_changed";
ROUTE2642.fromNode = "WalkTimer";
ROUTE2642.toField = "set_fraction";
ROUTE2642.toNode = "Walk_vc6_YawInterpolator";
Group2587.children[54] = ROUTE2642;

let ROUTE2643 = browser.currentScene.createNode("ROUTE");
ROUTE2643.fromField = "fraction_changed";
ROUTE2643.fromNode = "WalkTimer";
ROUTE2643.toField = "set_fraction";
ROUTE2643.toNode = "Walk_l_thumb1_PitchInterpolator";
Group2587.children[55] = ROUTE2643;

let ROUTE2644 = browser.currentScene.createNode("ROUTE");
ROUTE2644.fromField = "fraction_changed";
ROUTE2644.fromNode = "WalkTimer";
ROUTE2644.toField = "set_fraction";
ROUTE2644.toNode = "Walk_r_thumb1_PitchInterpolator";
Group2587.children[56] = ROUTE2644;

let ROUTE2645 = browser.currentScene.createNode("ROUTE");
ROUTE2645.fromField = "value_changed";
ROUTE2645.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE2645.toField = "rotation";
ROUTE2645.toNode = "hanim_r_ankle";
Group2587.children[57] = ROUTE2645;

let ROUTE2646 = browser.currentScene.createNode("ROUTE");
ROUTE2646.fromField = "value_changed";
ROUTE2646.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE2646.toField = "rotation";
ROUTE2646.toNode = "hanim_r_knee";
Group2587.children[58] = ROUTE2646;

let ROUTE2647 = browser.currentScene.createNode("ROUTE");
ROUTE2647.fromField = "value_changed";
ROUTE2647.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE2647.toField = "rotation";
ROUTE2647.toNode = "hanim_r_hip";
Group2587.children[59] = ROUTE2647;

let ROUTE2648 = browser.currentScene.createNode("ROUTE");
ROUTE2648.fromField = "value_changed";
ROUTE2648.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE2648.toField = "rotation";
ROUTE2648.toNode = "hanim_l_ankle";
Group2587.children[60] = ROUTE2648;

let ROUTE2649 = browser.currentScene.createNode("ROUTE");
ROUTE2649.fromField = "value_changed";
ROUTE2649.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE2649.toField = "rotation";
ROUTE2649.toNode = "hanim_l_knee";
Group2587.children[61] = ROUTE2649;

let ROUTE2650 = browser.currentScene.createNode("ROUTE");
ROUTE2650.fromField = "value_changed";
ROUTE2650.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE2650.toField = "rotation";
ROUTE2650.toNode = "hanim_l_hip";
Group2587.children[62] = ROUTE2650;

let ROUTE2651 = browser.currentScene.createNode("ROUTE");
ROUTE2651.fromField = "value_changed";
ROUTE2651.fromNode = "Walk_lower_body_RotationInterpolator";
ROUTE2651.toField = "rotation";
ROUTE2651.toNode = "hanim_sacroiliac";
Group2587.children[63] = ROUTE2651;

let ROUTE2652 = browser.currentScene.createNode("ROUTE");
ROUTE2652.fromField = "value_changed";
ROUTE2652.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE2652.toField = "rotation";
ROUTE2652.toNode = "hanim_r_wrist";
Group2587.children[64] = ROUTE2652;

let ROUTE2653 = browser.currentScene.createNode("ROUTE");
ROUTE2653.fromField = "value_changed";
ROUTE2653.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE2653.toField = "rotation";
ROUTE2653.toNode = "hanim_r_elbow";
Group2587.children[65] = ROUTE2653;

let ROUTE2654 = browser.currentScene.createNode("ROUTE");
ROUTE2654.fromField = "value_changed";
ROUTE2654.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE2654.toField = "rotation";
ROUTE2654.toNode = "hanim_r_shoulder";
Group2587.children[66] = ROUTE2654;

let ROUTE2655 = browser.currentScene.createNode("ROUTE");
ROUTE2655.fromField = "value_changed";
ROUTE2655.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE2655.toField = "rotation";
ROUTE2655.toNode = "hanim_l_wrist";
Group2587.children[67] = ROUTE2655;

let ROUTE2656 = browser.currentScene.createNode("ROUTE");
ROUTE2656.fromField = "value_changed";
ROUTE2656.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE2656.toField = "rotation";
ROUTE2656.toNode = "hanim_l_elbow";
Group2587.children[68] = ROUTE2656;

let ROUTE2657 = browser.currentScene.createNode("ROUTE");
ROUTE2657.fromField = "value_changed";
ROUTE2657.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE2657.toField = "rotation";
ROUTE2657.toNode = "hanim_l_shoulder";
Group2587.children[69] = ROUTE2657;

let ROUTE2658 = browser.currentScene.createNode("ROUTE");
ROUTE2658.fromField = "value_changed";
ROUTE2658.fromNode = "Walk_head_RotationInterpolator";
ROUTE2658.toField = "rotation";
ROUTE2658.toNode = "hanim_skullbase";
Group2587.children[70] = ROUTE2658;

let ROUTE2659 = browser.currentScene.createNode("ROUTE");
ROUTE2659.fromField = "value_changed";
ROUTE2659.fromNode = "Walk_neck_RotationInterpolator";
ROUTE2659.toField = "rotation";
ROUTE2659.toNode = "hanim_vc4";
Group2587.children[71] = ROUTE2659;

let ROUTE2660 = browser.currentScene.createNode("ROUTE");
ROUTE2660.fromField = "value_changed";
ROUTE2660.fromNode = "Walk_upper_body_RotationInterpolator";
ROUTE2660.toField = "rotation";
ROUTE2660.toNode = "hanim_vl1";
Group2587.children[72] = ROUTE2660;

let ROUTE2661 = browser.currentScene.createNode("ROUTE");
ROUTE2661.fromField = "value_changed";
ROUTE2661.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE2661.toField = "rotation";
ROUTE2661.toNode = "hanim_humanoid_root";
Group2587.children[73] = ROUTE2661;

let ROUTE2662 = browser.currentScene.createNode("ROUTE");
ROUTE2662.fromField = "value_changed";
ROUTE2662.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE2662.toField = "translation";
ROUTE2662.toNode = "hanim_humanoid_root";
Group2587.children[74] = ROUTE2662;

let ROUTE2663 = browser.currentScene.createNode("ROUTE");
ROUTE2663.fromField = "value_changed";
ROUTE2663.fromNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE2663.toField = "rotation";
ROUTE2663.toNode = "hanim_l_sternoclavicular";
Group2587.children[75] = ROUTE2663;

let ROUTE2664 = browser.currentScene.createNode("ROUTE");
ROUTE2664.fromField = "value_changed";
ROUTE2664.fromNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE2664.toField = "rotation";
ROUTE2664.toNode = "hanim_l_acromioclavicular";
Group2587.children[76] = ROUTE2664;

let ROUTE2665 = browser.currentScene.createNode("ROUTE");
ROUTE2665.fromField = "value_changed";
ROUTE2665.fromNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE2665.toField = "rotation";
ROUTE2665.toNode = "hanim_r_sternoclavicular";
Group2587.children[77] = ROUTE2665;

let ROUTE2666 = browser.currentScene.createNode("ROUTE");
ROUTE2666.fromField = "value_changed";
ROUTE2666.fromNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE2666.toField = "rotation";
ROUTE2666.toNode = "hanim_r_acromioclavicular";
Group2587.children[78] = ROUTE2666;

let ROUTE2667 = browser.currentScene.createNode("ROUTE");
ROUTE2667.fromField = "value_changed";
ROUTE2667.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2667.toField = "rotation";
ROUTE2667.toNode = "hanim_l_metatarsal";
Group2587.children[79] = ROUTE2667;

let ROUTE2668 = browser.currentScene.createNode("ROUTE");
ROUTE2668.fromField = "value_changed";
ROUTE2668.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2668.toField = "rotation";
ROUTE2668.toNode = "hanim_r_metatarsal";
Group2587.children[80] = ROUTE2668;

let ROUTE2669 = browser.currentScene.createNode("ROUTE");
ROUTE2669.fromField = "value_changed";
ROUTE2669.fromNode = "Walk_sacroiliac_YawInterpolator";
ROUTE2669.toField = "rotation";
ROUTE2669.toNode = "hanim_sacroiliac";
Group2587.children[81] = ROUTE2669;

let ROUTE2670 = browser.currentScene.createNode("ROUTE");
ROUTE2670.fromField = "value_changed";
ROUTE2670.fromNode = "Walk_vl5_YawInterpolator";
ROUTE2670.toField = "rotation";
ROUTE2670.toNode = "hanim_vl5";
Group2587.children[82] = ROUTE2670;

let ROUTE2671 = browser.currentScene.createNode("ROUTE");
ROUTE2671.fromField = "value_changed";
ROUTE2671.fromNode = "Walk_vc6_YawInterpolator";
ROUTE2671.toField = "rotation";
ROUTE2671.toNode = "hanim_vc6";
Group2587.children[83] = ROUTE2671;

let ROUTE2672 = browser.currentScene.createNode("ROUTE");
ROUTE2672.fromField = "value_changed";
ROUTE2672.fromNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE2672.toField = "rotation";
ROUTE2672.toNode = "hanim_l_thumb1";
Group2587.children[84] = ROUTE2672;

let ROUTE2673 = browser.currentScene.createNode("ROUTE");
ROUTE2673.fromField = "value_changed";
ROUTE2673.fromNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE2673.toField = "rotation";
ROUTE2673.toNode = "hanim_r_thumb1";
Group2587.children[85] = ROUTE2673;

browser.currentScene.children[18] = Group2587;

let Group2674 = browser.currentScene.createNode("Group");
Group2674.DEF = "RunAnimation";
let TimeSensor2675 = browser.currentScene.createNode("TimeSensor");
TimeSensor2675.DEF = "RunTimer";
TimeSensor2675.cycleInterval = 0.9;
TimeSensor2675.loop = True;
Group2674.children = new MFNode();

Group2674.children[0] = TimeSensor2675;

let OrientationInterpolator2676 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2676.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator2676.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2676.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[1] = OrientationInterpolator2676;

let OrientationInterpolator2677 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2677.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator2677.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2677.keyValue = new MFRotation(new float[-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group2674.children[2] = OrientationInterpolator2677;

let OrientationInterpolator2678 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2678.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator2678.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2678.keyValue = new MFRotation(new float[1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group2674.children[3] = OrientationInterpolator2678;

let OrientationInterpolator2679 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2679.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator2679.key = new MFFloat(new float[0,0.22,0.3,0.4,1]);
OrientationInterpolator2679.keyValue = new MFRotation(new float[1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group2674.children[4] = OrientationInterpolator2679;

let OrientationInterpolator2680 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2680.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator2680.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2680.keyValue = new MFRotation(new float[0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group2674.children[5] = OrientationInterpolator2680;

let OrientationInterpolator2681 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2681.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator2681.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2681.keyValue = new MFRotation(new float[1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group2674.children[6] = OrientationInterpolator2681;

let OrientationInterpolator2682 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2682.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator2682.key = new MFFloat(new float[0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator2682.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group2674.children[7] = OrientationInterpolator2682;

let OrientationInterpolator2683 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2683.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator2683.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2683.keyValue = new MFRotation(new float[0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group2674.children[8] = OrientationInterpolator2683;

let OrientationInterpolator2684 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2684.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator2684.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2684.keyValue = new MFRotation(new float[-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group2674.children[9] = OrientationInterpolator2684;

let OrientationInterpolator2685 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2685.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator2685.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2685.keyValue = new MFRotation(new float[-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group2674.children[10] = OrientationInterpolator2685;

let OrientationInterpolator2686 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2686.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator2686.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2686.keyValue = new MFRotation(new float[-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group2674.children[11] = OrientationInterpolator2686;

let OrientationInterpolator2687 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2687.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator2687.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2687.keyValue = new MFRotation(new float[-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group2674.children[12] = OrientationInterpolator2687;

let OrientationInterpolator2688 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2688.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator2688.key = new MFFloat(new float[0,1]);
OrientationInterpolator2688.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group2674.children[13] = OrientationInterpolator2688;

let OrientationInterpolator2689 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2689.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator2689.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2689.keyValue = new MFRotation(new float[0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group2674.children[14] = OrientationInterpolator2689;

let OrientationInterpolator2690 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2690.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator2690.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2690.keyValue = new MFRotation(new float[1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group2674.children[15] = OrientationInterpolator2690;

let OrientationInterpolator2691 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2691.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator2691.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2691.keyValue = new MFRotation(new float[0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group2674.children[16] = OrientationInterpolator2691;

let OrientationInterpolator2692 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2692.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator2692.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator2692.keyValue = new MFRotation(new float[0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group2674.children[17] = OrientationInterpolator2692;

let OrientationInterpolator2693 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2693.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator2693.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2693.keyValue = new MFRotation(new float[1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group2674.children[18] = OrientationInterpolator2693;

let PositionInterpolator2694 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2694.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator2694.key = new MFFloat(new float[0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator2694.keyValue = new MFVec3f(new float[0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group2674.children[19] = PositionInterpolator2694;

let OrientationInterpolator2695 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2695.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2695.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2695.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[20] = OrientationInterpolator2695;

let OrientationInterpolator2696 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2696.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2696.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2696.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[21] = OrientationInterpolator2696;

let OrientationInterpolator2697 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2697.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2697.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2697.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[22] = OrientationInterpolator2697;

let OrientationInterpolator2698 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2698.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2698.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2698.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[23] = OrientationInterpolator2698;

let OrientationInterpolator2699 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2699.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator2699.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2699.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[24] = OrientationInterpolator2699;

let OrientationInterpolator2700 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2700.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator2700.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2700.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[25] = OrientationInterpolator2700;

let OrientationInterpolator2701 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2701.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator2701.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2701.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[26] = OrientationInterpolator2701;

let OrientationInterpolator2702 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2702.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator2702.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2702.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2674.children[27] = OrientationInterpolator2702;

let OrientationInterpolator2703 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2703.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator2703.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2703.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2674.children[28] = OrientationInterpolator2703;

let ROUTE2704 = browser.currentScene.createNode("ROUTE");
ROUTE2704.fromField = "fraction_changed";
ROUTE2704.fromNode = "RunTimer";
ROUTE2704.toField = "set_fraction";
ROUTE2704.toNode = "Run_r_ankle_RotationInterpolator_Run";
Group2674.children[29] = ROUTE2704;

let ROUTE2705 = browser.currentScene.createNode("ROUTE");
ROUTE2705.fromField = "fraction_changed";
ROUTE2705.fromNode = "RunTimer";
ROUTE2705.toField = "set_fraction";
ROUTE2705.toNode = "Run_r_knee_RotationInterpolator_Run";
Group2674.children[30] = ROUTE2705;

let ROUTE2706 = browser.currentScene.createNode("ROUTE");
ROUTE2706.fromField = "fraction_changed";
ROUTE2706.fromNode = "RunTimer";
ROUTE2706.toField = "set_fraction";
ROUTE2706.toNode = "Run_r_hip_RotationInterpolator_Run";
Group2674.children[31] = ROUTE2706;

let ROUTE2707 = browser.currentScene.createNode("ROUTE");
ROUTE2707.fromField = "fraction_changed";
ROUTE2707.fromNode = "RunTimer";
ROUTE2707.toField = "set_fraction";
ROUTE2707.toNode = "Run_l_ankle_RotationInterpolator_Run";
Group2674.children[32] = ROUTE2707;

let ROUTE2708 = browser.currentScene.createNode("ROUTE");
ROUTE2708.fromField = "fraction_changed";
ROUTE2708.fromNode = "RunTimer";
ROUTE2708.toField = "set_fraction";
ROUTE2708.toNode = "Run_l_knee_RotationInterpolator_Run";
Group2674.children[33] = ROUTE2708;

let ROUTE2709 = browser.currentScene.createNode("ROUTE");
ROUTE2709.fromField = "fraction_changed";
ROUTE2709.fromNode = "RunTimer";
ROUTE2709.toField = "set_fraction";
ROUTE2709.toNode = "Run_l_hip_RotationInterpolator_Run";
Group2674.children[34] = ROUTE2709;

let ROUTE2710 = browser.currentScene.createNode("ROUTE");
ROUTE2710.fromField = "fraction_changed";
ROUTE2710.fromNode = "RunTimer";
ROUTE2710.toField = "set_fraction";
ROUTE2710.toNode = "Run_lower_body_RotationInterpolator_Run";
Group2674.children[35] = ROUTE2710;

let ROUTE2711 = browser.currentScene.createNode("ROUTE");
ROUTE2711.fromField = "fraction_changed";
ROUTE2711.fromNode = "RunTimer";
ROUTE2711.toField = "set_fraction";
ROUTE2711.toNode = "Run_r_wrist_RotationInterpolator_Run";
Group2674.children[36] = ROUTE2711;

let ROUTE2712 = browser.currentScene.createNode("ROUTE");
ROUTE2712.fromField = "fraction_changed";
ROUTE2712.fromNode = "RunTimer";
ROUTE2712.toField = "set_fraction";
ROUTE2712.toNode = "Run_r_elbow_RotationInterpolator_Run";
Group2674.children[37] = ROUTE2712;

let ROUTE2713 = browser.currentScene.createNode("ROUTE");
ROUTE2713.fromField = "fraction_changed";
ROUTE2713.fromNode = "RunTimer";
ROUTE2713.toField = "set_fraction";
ROUTE2713.toNode = "Run_r_shoulder_RotationInterpolator_Run";
Group2674.children[38] = ROUTE2713;

let ROUTE2714 = browser.currentScene.createNode("ROUTE");
ROUTE2714.fromField = "fraction_changed";
ROUTE2714.fromNode = "RunTimer";
ROUTE2714.toField = "set_fraction";
ROUTE2714.toNode = "Run_l_wrist_RotationInterpolator_Run";
Group2674.children[39] = ROUTE2714;

let ROUTE2715 = browser.currentScene.createNode("ROUTE");
ROUTE2715.fromField = "fraction_changed";
ROUTE2715.fromNode = "RunTimer";
ROUTE2715.toField = "set_fraction";
ROUTE2715.toNode = "Run_l_elbow_RotationInterpolator_Run";
Group2674.children[40] = ROUTE2715;

let ROUTE2716 = browser.currentScene.createNode("ROUTE");
ROUTE2716.fromField = "fraction_changed";
ROUTE2716.fromNode = "RunTimer";
ROUTE2716.toField = "set_fraction";
ROUTE2716.toNode = "Run_l_shoulder_RotationInterpolator_Run";
Group2674.children[41] = ROUTE2716;

let ROUTE2717 = browser.currentScene.createNode("ROUTE");
ROUTE2717.fromField = "fraction_changed";
ROUTE2717.fromNode = "RunTimer";
ROUTE2717.toField = "set_fraction";
ROUTE2717.toNode = "Run_head_RotationInterpolator_Run";
Group2674.children[42] = ROUTE2717;

let ROUTE2718 = browser.currentScene.createNode("ROUTE");
ROUTE2718.fromField = "fraction_changed";
ROUTE2718.fromNode = "RunTimer";
ROUTE2718.toField = "set_fraction";
ROUTE2718.toNode = "Run_neck_RotationInterpolator_Run";
Group2674.children[43] = ROUTE2718;

let ROUTE2719 = browser.currentScene.createNode("ROUTE");
ROUTE2719.fromField = "fraction_changed";
ROUTE2719.fromNode = "RunTimer";
ROUTE2719.toField = "set_fraction";
ROUTE2719.toNode = "Run_upper_body_RotationInterpolator_Run";
Group2674.children[44] = ROUTE2719;

let ROUTE2720 = browser.currentScene.createNode("ROUTE");
ROUTE2720.fromField = "fraction_changed";
ROUTE2720.fromNode = "RunTimer";
ROUTE2720.toField = "set_fraction";
ROUTE2720.toNode = "Run_whole_body_RotationInterpolator_Run";
Group2674.children[45] = ROUTE2720;

let ROUTE2721 = browser.currentScene.createNode("ROUTE");
ROUTE2721.fromField = "fraction_changed";
ROUTE2721.fromNode = "RunTimer";
ROUTE2721.toField = "set_fraction";
ROUTE2721.toNode = "Run_whole_body_TranslationInterpolator_Run";
Group2674.children[46] = ROUTE2721;

let ROUTE2722 = browser.currentScene.createNode("ROUTE");
ROUTE2722.fromField = "fraction_changed";
ROUTE2722.fromNode = "RunTimer";
ROUTE2722.toField = "set_fraction";
ROUTE2722.toNode = "Run_l_sternoclavicular_RollInterpolator";
Group2674.children[47] = ROUTE2722;

let ROUTE2723 = browser.currentScene.createNode("ROUTE");
ROUTE2723.fromField = "fraction_changed";
ROUTE2723.fromNode = "RunTimer";
ROUTE2723.toField = "set_fraction";
ROUTE2723.toNode = "Run_l_acromioclavicular_RollInterpolator";
Group2674.children[48] = ROUTE2723;

let ROUTE2724 = browser.currentScene.createNode("ROUTE");
ROUTE2724.fromField = "fraction_changed";
ROUTE2724.fromNode = "RunTimer";
ROUTE2724.toField = "set_fraction";
ROUTE2724.toNode = "Run_r_sternoclavicular_RollInterpolator";
Group2674.children[49] = ROUTE2724;

let ROUTE2725 = browser.currentScene.createNode("ROUTE");
ROUTE2725.fromField = "fraction_changed";
ROUTE2725.fromNode = "RunTimer";
ROUTE2725.toField = "set_fraction";
ROUTE2725.toNode = "Run_r_acromioclavicular_RollInterpolator";
Group2674.children[50] = ROUTE2725;

let ROUTE2726 = browser.currentScene.createNode("ROUTE");
ROUTE2726.fromField = "fraction_changed";
ROUTE2726.fromNode = "RunTimer";
ROUTE2726.toField = "set_fraction";
ROUTE2726.toNode = "Run_r_metatarsal_PitchInterpolator";
Group2674.children[51] = ROUTE2726;

let ROUTE2727 = browser.currentScene.createNode("ROUTE");
ROUTE2727.fromField = "fraction_changed";
ROUTE2727.fromNode = "RunTimer";
ROUTE2727.toField = "set_fraction";
ROUTE2727.toNode = "Run_sacroiliac_YawInterpolator";
Group2674.children[52] = ROUTE2727;

let ROUTE2728 = browser.currentScene.createNode("ROUTE");
ROUTE2728.fromField = "fraction_changed";
ROUTE2728.fromNode = "RunTimer";
ROUTE2728.toField = "set_fraction";
ROUTE2728.toNode = "Run_vl5_YawInterpolator";
Group2674.children[53] = ROUTE2728;

let ROUTE2729 = browser.currentScene.createNode("ROUTE");
ROUTE2729.fromField = "fraction_changed";
ROUTE2729.fromNode = "RunTimer";
ROUTE2729.toField = "set_fraction";
ROUTE2729.toNode = "Run_vc6_YawInterpolator";
Group2674.children[54] = ROUTE2729;

let ROUTE2730 = browser.currentScene.createNode("ROUTE");
ROUTE2730.fromField = "fraction_changed";
ROUTE2730.fromNode = "RunTimer";
ROUTE2730.toField = "set_fraction";
ROUTE2730.toNode = "Run_l_thumb1_PitchInterpolator";
Group2674.children[55] = ROUTE2730;

let ROUTE2731 = browser.currentScene.createNode("ROUTE");
ROUTE2731.fromField = "fraction_changed";
ROUTE2731.fromNode = "RunTimer";
ROUTE2731.toField = "set_fraction";
ROUTE2731.toNode = "Run_r_thumb1_PitchInterpolator";
Group2674.children[56] = ROUTE2731;

let ROUTE2732 = browser.currentScene.createNode("ROUTE");
ROUTE2732.fromField = "value_changed";
ROUTE2732.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE2732.toField = "rotation";
ROUTE2732.toNode = "hanim_r_ankle";
Group2674.children[57] = ROUTE2732;

let ROUTE2733 = browser.currentScene.createNode("ROUTE");
ROUTE2733.fromField = "value_changed";
ROUTE2733.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE2733.toField = "rotation";
ROUTE2733.toNode = "hanim_r_knee";
Group2674.children[58] = ROUTE2733;

let ROUTE2734 = browser.currentScene.createNode("ROUTE");
ROUTE2734.fromField = "value_changed";
ROUTE2734.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE2734.toField = "rotation";
ROUTE2734.toNode = "hanim_r_hip";
Group2674.children[59] = ROUTE2734;

let ROUTE2735 = browser.currentScene.createNode("ROUTE");
ROUTE2735.fromField = "value_changed";
ROUTE2735.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE2735.toField = "rotation";
ROUTE2735.toNode = "hanim_l_ankle";
Group2674.children[60] = ROUTE2735;

let ROUTE2736 = browser.currentScene.createNode("ROUTE");
ROUTE2736.fromField = "value_changed";
ROUTE2736.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE2736.toField = "rotation";
ROUTE2736.toNode = "hanim_l_knee";
Group2674.children[61] = ROUTE2736;

let ROUTE2737 = browser.currentScene.createNode("ROUTE");
ROUTE2737.fromField = "value_changed";
ROUTE2737.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE2737.toField = "rotation";
ROUTE2737.toNode = "hanim_l_hip";
Group2674.children[62] = ROUTE2737;

let ROUTE2738 = browser.currentScene.createNode("ROUTE");
ROUTE2738.fromField = "value_changed";
ROUTE2738.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE2738.toField = "rotation";
ROUTE2738.toNode = "hanim_r_wrist";
Group2674.children[63] = ROUTE2738;

let ROUTE2739 = browser.currentScene.createNode("ROUTE");
ROUTE2739.fromField = "value_changed";
ROUTE2739.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE2739.toField = "rotation";
ROUTE2739.toNode = "hanim_r_elbow";
Group2674.children[64] = ROUTE2739;

let ROUTE2740 = browser.currentScene.createNode("ROUTE");
ROUTE2740.fromField = "value_changed";
ROUTE2740.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE2740.toField = "rotation";
ROUTE2740.toNode = "hanim_r_shoulder";
Group2674.children[65] = ROUTE2740;

let ROUTE2741 = browser.currentScene.createNode("ROUTE");
ROUTE2741.fromField = "value_changed";
ROUTE2741.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE2741.toField = "rotation";
ROUTE2741.toNode = "hanim_l_wrist";
Group2674.children[66] = ROUTE2741;

let ROUTE2742 = browser.currentScene.createNode("ROUTE");
ROUTE2742.fromField = "value_changed";
ROUTE2742.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE2742.toField = "rotation";
ROUTE2742.toNode = "hanim_l_elbow";
Group2674.children[67] = ROUTE2742;

let ROUTE2743 = browser.currentScene.createNode("ROUTE");
ROUTE2743.fromField = "value_changed";
ROUTE2743.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE2743.toField = "rotation";
ROUTE2743.toNode = "hanim_l_shoulder";
Group2674.children[68] = ROUTE2743;

let ROUTE2744 = browser.currentScene.createNode("ROUTE");
ROUTE2744.fromField = "value_changed";
ROUTE2744.fromNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE2744.toField = "rotation";
ROUTE2744.toNode = "hanim_sacroiliac";
Group2674.children[69] = ROUTE2744;

let ROUTE2745 = browser.currentScene.createNode("ROUTE");
ROUTE2745.fromField = "value_changed";
ROUTE2745.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE2745.toField = "rotation";
ROUTE2745.toNode = "hanim_skullbase";
Group2674.children[70] = ROUTE2745;

let ROUTE2746 = browser.currentScene.createNode("ROUTE");
ROUTE2746.fromField = "value_changed";
ROUTE2746.fromNode = "Run_neck_RotationInterpolator_Run";
ROUTE2746.toField = "rotation";
ROUTE2746.toNode = "hanim_vc4";
Group2674.children[71] = ROUTE2746;

let ROUTE2747 = browser.currentScene.createNode("ROUTE");
ROUTE2747.fromField = "value_changed";
ROUTE2747.fromNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE2747.toField = "rotation";
ROUTE2747.toNode = "hanim_vl1";
Group2674.children[72] = ROUTE2747;

let ROUTE2748 = browser.currentScene.createNode("ROUTE");
ROUTE2748.fromField = "value_changed";
ROUTE2748.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE2748.toField = "rotation";
ROUTE2748.toNode = "hanim_humanoid_root";
Group2674.children[73] = ROUTE2748;

let ROUTE2749 = browser.currentScene.createNode("ROUTE");
ROUTE2749.fromField = "value_changed";
ROUTE2749.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE2749.toField = "translation";
ROUTE2749.toNode = "hanim_humanoid_root";
Group2674.children[74] = ROUTE2749;

let ROUTE2750 = browser.currentScene.createNode("ROUTE");
ROUTE2750.fromField = "value_changed";
ROUTE2750.fromNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE2750.toField = "rotation";
ROUTE2750.toNode = "hanim_l_sternoclavicular";
Group2674.children[75] = ROUTE2750;

let ROUTE2751 = browser.currentScene.createNode("ROUTE");
ROUTE2751.fromField = "value_changed";
ROUTE2751.fromNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE2751.toField = "rotation";
ROUTE2751.toNode = "hanim_l_acromioclavicular";
Group2674.children[76] = ROUTE2751;

let ROUTE2752 = browser.currentScene.createNode("ROUTE");
ROUTE2752.fromField = "value_changed";
ROUTE2752.fromNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE2752.toField = "rotation";
ROUTE2752.toNode = "hanim_r_sternoclavicular";
Group2674.children[77] = ROUTE2752;

let ROUTE2753 = browser.currentScene.createNode("ROUTE");
ROUTE2753.fromField = "value_changed";
ROUTE2753.fromNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE2753.toField = "rotation";
ROUTE2753.toNode = "hanim_r_acromioclavicular";
Group2674.children[78] = ROUTE2753;

let ROUTE2754 = browser.currentScene.createNode("ROUTE");
ROUTE2754.fromField = "value_changed";
ROUTE2754.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2754.toField = "rotation";
ROUTE2754.toNode = "hanim_l_metatarsal";
Group2674.children[79] = ROUTE2754;

let ROUTE2755 = browser.currentScene.createNode("ROUTE");
ROUTE2755.fromField = "value_changed";
ROUTE2755.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2755.toField = "rotation";
ROUTE2755.toNode = "hanim_r_metatarsal";
Group2674.children[80] = ROUTE2755;

let ROUTE2756 = browser.currentScene.createNode("ROUTE");
ROUTE2756.fromField = "value_changed";
ROUTE2756.fromNode = "Run_sacroiliac_YawInterpolator";
ROUTE2756.toField = "rotation";
ROUTE2756.toNode = "hanim_sacroiliac";
Group2674.children[81] = ROUTE2756;

let ROUTE2757 = browser.currentScene.createNode("ROUTE");
ROUTE2757.fromField = "value_changed";
ROUTE2757.fromNode = "Run_vl5_YawInterpolator";
ROUTE2757.toField = "rotation";
ROUTE2757.toNode = "hanim_vl5";
Group2674.children[82] = ROUTE2757;

let ROUTE2758 = browser.currentScene.createNode("ROUTE");
ROUTE2758.fromField = "value_changed";
ROUTE2758.fromNode = "Run_vc6_YawInterpolator";
ROUTE2758.toField = "rotation";
ROUTE2758.toNode = "hanim_vc6";
Group2674.children[83] = ROUTE2758;

let ROUTE2759 = browser.currentScene.createNode("ROUTE");
ROUTE2759.fromField = "value_changed";
ROUTE2759.fromNode = "Run_l_thumb1_PitchInterpolator";
ROUTE2759.toField = "rotation";
ROUTE2759.toNode = "hanim_l_thumb1";
Group2674.children[84] = ROUTE2759;

let ROUTE2760 = browser.currentScene.createNode("ROUTE");
ROUTE2760.fromField = "value_changed";
ROUTE2760.fromNode = "Run_r_thumb1_PitchInterpolator";
ROUTE2760.toField = "rotation";
ROUTE2760.toNode = "hanim_r_thumb1";
Group2674.children[85] = ROUTE2760;

browser.currentScene.children[19] = Group2674;

let Group2761 = browser.currentScene.createNode("Group");
Group2761.DEF = "JumpAnimation";
let TimeSensor2762 = browser.currentScene.createNode("TimeSensor");
TimeSensor2762.DEF = "JumpTimer";
TimeSensor2762.cycleInterval = 3.73;
TimeSensor2762.loop = True;
Group2761.children = new MFNode();

Group2761.children[0] = TimeSensor2762;

let OrientationInterpolator2763 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2763.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator2763.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2763.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2761.children[1] = OrientationInterpolator2763;

let OrientationInterpolator2764 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2764.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator2764.key = new MFFloat(new float[0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2764.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group2761.children[2] = OrientationInterpolator2764;

let OrientationInterpolator2765 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2765.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator2765.key = new MFFloat(new float[0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator2765.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group2761.children[3] = OrientationInterpolator2765;

let OrientationInterpolator2766 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2766.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator2766.key = new MFFloat(new float[0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2766.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group2761.children[4] = OrientationInterpolator2766;

let OrientationInterpolator2767 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2767.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator2767.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2767.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group2761.children[5] = OrientationInterpolator2767;

let OrientationInterpolator2768 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2768.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator2768.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2768.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group2761.children[6] = OrientationInterpolator2768;

let OrientationInterpolator2769 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2769.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator2769.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2769.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group2761.children[7] = OrientationInterpolator2769;

let OrientationInterpolator2770 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2770.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator2770.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2770.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2761.children[8] = OrientationInterpolator2770;

let OrientationInterpolator2771 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2771.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator2771.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2771.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group2761.children[9] = OrientationInterpolator2771;

let OrientationInterpolator2772 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2772.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator2772.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2772.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group2761.children[10] = OrientationInterpolator2772;

let OrientationInterpolator2773 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2773.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator2773.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2773.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group2761.children[11] = OrientationInterpolator2773;

let OrientationInterpolator2774 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2774.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator2774.key = new MFFloat(new float[0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator2774.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group2761.children[12] = OrientationInterpolator2774;

let OrientationInterpolator2775 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2775.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator2775.key = new MFFloat(new float[0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator2775.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group2761.children[13] = OrientationInterpolator2775;

let OrientationInterpolator2776 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2776.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator2776.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2776.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group2761.children[14] = OrientationInterpolator2776;

let OrientationInterpolator2777 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2777.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator2777.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2777.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group2761.children[15] = OrientationInterpolator2777;

let OrientationInterpolator2778 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2778.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator2778.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2778.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group2761.children[16] = OrientationInterpolator2778;

let OrientationInterpolator2779 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2779.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator2779.key = new MFFloat(new float[0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator2779.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group2761.children[17] = OrientationInterpolator2779;

let OrientationInterpolator2780 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2780.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator2780.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator2780.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2761.children[18] = OrientationInterpolator2780;

let PositionInterpolator2781 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2781.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator2781.key = new MFFloat(new float[0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator2781.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group2761.children[19] = PositionInterpolator2781;

let OrientationInterpolator2782 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2782.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2782.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2782.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2761.children[20] = OrientationInterpolator2782;

let OrientationInterpolator2783 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2783.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2783.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2783.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2761.children[21] = OrientationInterpolator2783;

let OrientationInterpolator2784 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2784.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2784.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2784.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2761.children[22] = OrientationInterpolator2784;

let OrientationInterpolator2785 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2785.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2785.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2785.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2761.children[23] = OrientationInterpolator2785;

let OrientationInterpolator2786 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2786.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator2786.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2786.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2761.children[24] = OrientationInterpolator2786;

let OrientationInterpolator2787 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2787.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator2787.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2787.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group2761.children[25] = OrientationInterpolator2787;

let OrientationInterpolator2788 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2788.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator2788.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2788.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group2761.children[26] = OrientationInterpolator2788;

let OrientationInterpolator2789 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2789.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator2789.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2789.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2761.children[27] = OrientationInterpolator2789;

let OrientationInterpolator2790 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2790.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator2790.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2790.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2761.children[28] = OrientationInterpolator2790;

let ROUTE2791 = browser.currentScene.createNode("ROUTE");
ROUTE2791.fromField = "fraction_changed";
ROUTE2791.fromNode = "JumpTimer";
ROUTE2791.toField = "set_fraction";
ROUTE2791.toNode = "Jump_r_ankle_RotationInterpolator";
Group2761.children[29] = ROUTE2791;

let ROUTE2792 = browser.currentScene.createNode("ROUTE");
ROUTE2792.fromField = "fraction_changed";
ROUTE2792.fromNode = "JumpTimer";
ROUTE2792.toField = "set_fraction";
ROUTE2792.toNode = "Jump_r_knee_RotationInterpolator";
Group2761.children[30] = ROUTE2792;

let ROUTE2793 = browser.currentScene.createNode("ROUTE");
ROUTE2793.fromField = "fraction_changed";
ROUTE2793.fromNode = "JumpTimer";
ROUTE2793.toField = "set_fraction";
ROUTE2793.toNode = "Jump_r_hip_RotationInterpolator";
Group2761.children[31] = ROUTE2793;

let ROUTE2794 = browser.currentScene.createNode("ROUTE");
ROUTE2794.fromField = "fraction_changed";
ROUTE2794.fromNode = "JumpTimer";
ROUTE2794.toField = "set_fraction";
ROUTE2794.toNode = "Jump_l_ankle_RotationInterpolator";
Group2761.children[32] = ROUTE2794;

let ROUTE2795 = browser.currentScene.createNode("ROUTE");
ROUTE2795.fromField = "fraction_changed";
ROUTE2795.fromNode = "JumpTimer";
ROUTE2795.toField = "set_fraction";
ROUTE2795.toNode = "Jump_l_knee_RotationInterpolator";
Group2761.children[33] = ROUTE2795;

let ROUTE2796 = browser.currentScene.createNode("ROUTE");
ROUTE2796.fromField = "fraction_changed";
ROUTE2796.fromNode = "JumpTimer";
ROUTE2796.toField = "set_fraction";
ROUTE2796.toNode = "Jump_l_hip_RotationInterpolator";
Group2761.children[34] = ROUTE2796;

let ROUTE2797 = browser.currentScene.createNode("ROUTE");
ROUTE2797.fromField = "fraction_changed";
ROUTE2797.fromNode = "JumpTimer";
ROUTE2797.toField = "set_fraction";
ROUTE2797.toNode = "Jump_lower_body_RotationInterpolator";
Group2761.children[35] = ROUTE2797;

let ROUTE2798 = browser.currentScene.createNode("ROUTE");
ROUTE2798.fromField = "fraction_changed";
ROUTE2798.fromNode = "JumpTimer";
ROUTE2798.toField = "set_fraction";
ROUTE2798.toNode = "Jump_r_wrist_RotationInterpolator";
Group2761.children[36] = ROUTE2798;

let ROUTE2799 = browser.currentScene.createNode("ROUTE");
ROUTE2799.fromField = "fraction_changed";
ROUTE2799.fromNode = "JumpTimer";
ROUTE2799.toField = "set_fraction";
ROUTE2799.toNode = "Jump_r_elbow_RotationInterpolator";
Group2761.children[37] = ROUTE2799;

let ROUTE2800 = browser.currentScene.createNode("ROUTE");
ROUTE2800.fromField = "fraction_changed";
ROUTE2800.fromNode = "JumpTimer";
ROUTE2800.toField = "set_fraction";
ROUTE2800.toNode = "Jump_r_shoulder_RotationInterpolator";
Group2761.children[38] = ROUTE2800;

let ROUTE2801 = browser.currentScene.createNode("ROUTE");
ROUTE2801.fromField = "fraction_changed";
ROUTE2801.fromNode = "JumpTimer";
ROUTE2801.toField = "set_fraction";
ROUTE2801.toNode = "Jump_l_wrist_RotationInterpolator";
Group2761.children[39] = ROUTE2801;

let ROUTE2802 = browser.currentScene.createNode("ROUTE");
ROUTE2802.fromField = "fraction_changed";
ROUTE2802.fromNode = "JumpTimer";
ROUTE2802.toField = "set_fraction";
ROUTE2802.toNode = "Jump_l_elbow_RotationInterpolator";
Group2761.children[40] = ROUTE2802;

let ROUTE2803 = browser.currentScene.createNode("ROUTE");
ROUTE2803.fromField = "fraction_changed";
ROUTE2803.fromNode = "JumpTimer";
ROUTE2803.toField = "set_fraction";
ROUTE2803.toNode = "Jump_l_shoulder_RotationInterpolator";
Group2761.children[41] = ROUTE2803;

let ROUTE2804 = browser.currentScene.createNode("ROUTE");
ROUTE2804.fromField = "fraction_changed";
ROUTE2804.fromNode = "JumpTimer";
ROUTE2804.toField = "set_fraction";
ROUTE2804.toNode = "Jump_head_RotationInterpolator";
Group2761.children[42] = ROUTE2804;

let ROUTE2805 = browser.currentScene.createNode("ROUTE");
ROUTE2805.fromField = "fraction_changed";
ROUTE2805.fromNode = "JumpTimer";
ROUTE2805.toField = "set_fraction";
ROUTE2805.toNode = "Jump_neck_RotationInterpolator";
Group2761.children[43] = ROUTE2805;

let ROUTE2806 = browser.currentScene.createNode("ROUTE");
ROUTE2806.fromField = "fraction_changed";
ROUTE2806.fromNode = "JumpTimer";
ROUTE2806.toField = "set_fraction";
ROUTE2806.toNode = "Jump_upper_body_RotationInterpolator";
Group2761.children[44] = ROUTE2806;

let ROUTE2807 = browser.currentScene.createNode("ROUTE");
ROUTE2807.fromField = "fraction_changed";
ROUTE2807.fromNode = "JumpTimer";
ROUTE2807.toField = "set_fraction";
ROUTE2807.toNode = "Jump_whole_body_RotationInterpolator";
Group2761.children[45] = ROUTE2807;

let ROUTE2808 = browser.currentScene.createNode("ROUTE");
ROUTE2808.fromField = "fraction_changed";
ROUTE2808.fromNode = "JumpTimer";
ROUTE2808.toField = "set_fraction";
ROUTE2808.toNode = "Jump_whole_body_TranslationInterpolator";
Group2761.children[46] = ROUTE2808;

let ROUTE2809 = browser.currentScene.createNode("ROUTE");
ROUTE2809.fromField = "fraction_changed";
ROUTE2809.fromNode = "JumpTimer";
ROUTE2809.toField = "set_fraction";
ROUTE2809.toNode = "Jump_l_sternoclavicular_RollInterpolator";
Group2761.children[47] = ROUTE2809;

let ROUTE2810 = browser.currentScene.createNode("ROUTE");
ROUTE2810.fromField = "fraction_changed";
ROUTE2810.fromNode = "JumpTimer";
ROUTE2810.toField = "set_fraction";
ROUTE2810.toNode = "Jump_l_acromioclavicular_RollInterpolator";
Group2761.children[48] = ROUTE2810;

let ROUTE2811 = browser.currentScene.createNode("ROUTE");
ROUTE2811.fromField = "fraction_changed";
ROUTE2811.fromNode = "JumpTimer";
ROUTE2811.toField = "set_fraction";
ROUTE2811.toNode = "Jump_r_sternoclavicular_RollInterpolator";
Group2761.children[49] = ROUTE2811;

let ROUTE2812 = browser.currentScene.createNode("ROUTE");
ROUTE2812.fromField = "fraction_changed";
ROUTE2812.fromNode = "JumpTimer";
ROUTE2812.toField = "set_fraction";
ROUTE2812.toNode = "Jump_r_acromioclavicular_RollInterpolator";
Group2761.children[50] = ROUTE2812;

let ROUTE2813 = browser.currentScene.createNode("ROUTE");
ROUTE2813.fromField = "fraction_changed";
ROUTE2813.fromNode = "JumpTimer";
ROUTE2813.toField = "set_fraction";
ROUTE2813.toNode = "Jump_r_metatarsal_PitchInterpolator";
Group2761.children[51] = ROUTE2813;

let ROUTE2814 = browser.currentScene.createNode("ROUTE");
ROUTE2814.fromField = "fraction_changed";
ROUTE2814.fromNode = "JumpTimer";
ROUTE2814.toField = "set_fraction";
ROUTE2814.toNode = "Jump_sacroiliac_YawInterpolator";
Group2761.children[52] = ROUTE2814;

let ROUTE2815 = browser.currentScene.createNode("ROUTE");
ROUTE2815.fromField = "fraction_changed";
ROUTE2815.fromNode = "JumpTimer";
ROUTE2815.toField = "set_fraction";
ROUTE2815.toNode = "Jump_vl5_YawInterpolator";
Group2761.children[53] = ROUTE2815;

let ROUTE2816 = browser.currentScene.createNode("ROUTE");
ROUTE2816.fromField = "fraction_changed";
ROUTE2816.fromNode = "JumpTimer";
ROUTE2816.toField = "set_fraction";
ROUTE2816.toNode = "Jump_vc6_YawInterpolator";
Group2761.children[54] = ROUTE2816;

let ROUTE2817 = browser.currentScene.createNode("ROUTE");
ROUTE2817.fromField = "fraction_changed";
ROUTE2817.fromNode = "JumpTimer";
ROUTE2817.toField = "set_fraction";
ROUTE2817.toNode = "Jump_l_thumb1_PitchInterpolator";
Group2761.children[55] = ROUTE2817;

let ROUTE2818 = browser.currentScene.createNode("ROUTE");
ROUTE2818.fromField = "fraction_changed";
ROUTE2818.fromNode = "JumpTimer";
ROUTE2818.toField = "set_fraction";
ROUTE2818.toNode = "Jump_r_thumb1_PitchInterpolator";
Group2761.children[56] = ROUTE2818;

let ROUTE2819 = browser.currentScene.createNode("ROUTE");
ROUTE2819.fromField = "value_changed";
ROUTE2819.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE2819.toField = "rotation";
ROUTE2819.toNode = "hanim_r_ankle";
Group2761.children[57] = ROUTE2819;

let ROUTE2820 = browser.currentScene.createNode("ROUTE");
ROUTE2820.fromField = "value_changed";
ROUTE2820.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE2820.toField = "rotation";
ROUTE2820.toNode = "hanim_r_knee";
Group2761.children[58] = ROUTE2820;

let ROUTE2821 = browser.currentScene.createNode("ROUTE");
ROUTE2821.fromField = "value_changed";
ROUTE2821.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE2821.toField = "rotation";
ROUTE2821.toNode = "hanim_r_hip";
Group2761.children[59] = ROUTE2821;

let ROUTE2822 = browser.currentScene.createNode("ROUTE");
ROUTE2822.fromField = "value_changed";
ROUTE2822.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE2822.toField = "rotation";
ROUTE2822.toNode = "hanim_l_ankle";
Group2761.children[60] = ROUTE2822;

let ROUTE2823 = browser.currentScene.createNode("ROUTE");
ROUTE2823.fromField = "value_changed";
ROUTE2823.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE2823.toField = "rotation";
ROUTE2823.toNode = "hanim_l_knee";
Group2761.children[61] = ROUTE2823;

let ROUTE2824 = browser.currentScene.createNode("ROUTE");
ROUTE2824.fromField = "value_changed";
ROUTE2824.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE2824.toField = "rotation";
ROUTE2824.toNode = "hanim_l_hip";
Group2761.children[62] = ROUTE2824;

let ROUTE2825 = browser.currentScene.createNode("ROUTE");
ROUTE2825.fromField = "value_changed";
ROUTE2825.fromNode = "Jump_lower_body_RotationInterpolator";
ROUTE2825.toField = "rotation";
ROUTE2825.toNode = "hanim_sacroiliac";
Group2761.children[63] = ROUTE2825;

let ROUTE2826 = browser.currentScene.createNode("ROUTE");
ROUTE2826.fromField = "value_changed";
ROUTE2826.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE2826.toField = "rotation";
ROUTE2826.toNode = "hanim_r_wrist";
Group2761.children[64] = ROUTE2826;

let ROUTE2827 = browser.currentScene.createNode("ROUTE");
ROUTE2827.fromField = "value_changed";
ROUTE2827.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE2827.toField = "rotation";
ROUTE2827.toNode = "hanim_r_elbow";
Group2761.children[65] = ROUTE2827;

let ROUTE2828 = browser.currentScene.createNode("ROUTE");
ROUTE2828.fromField = "value_changed";
ROUTE2828.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE2828.toField = "rotation";
ROUTE2828.toNode = "hanim_r_shoulder";
Group2761.children[66] = ROUTE2828;

let ROUTE2829 = browser.currentScene.createNode("ROUTE");
ROUTE2829.fromField = "value_changed";
ROUTE2829.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE2829.toField = "rotation";
ROUTE2829.toNode = "hanim_l_wrist";
Group2761.children[67] = ROUTE2829;

let ROUTE2830 = browser.currentScene.createNode("ROUTE");
ROUTE2830.fromField = "value_changed";
ROUTE2830.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE2830.toField = "rotation";
ROUTE2830.toNode = "hanim_l_elbow";
Group2761.children[68] = ROUTE2830;

let ROUTE2831 = browser.currentScene.createNode("ROUTE");
ROUTE2831.fromField = "value_changed";
ROUTE2831.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE2831.toField = "rotation";
ROUTE2831.toNode = "hanim_l_shoulder";
Group2761.children[69] = ROUTE2831;

let ROUTE2832 = browser.currentScene.createNode("ROUTE");
ROUTE2832.fromField = "value_changed";
ROUTE2832.fromNode = "Jump_head_RotationInterpolator";
ROUTE2832.toField = "rotation";
ROUTE2832.toNode = "hanim_skullbase";
Group2761.children[70] = ROUTE2832;

let ROUTE2833 = browser.currentScene.createNode("ROUTE");
ROUTE2833.fromField = "value_changed";
ROUTE2833.fromNode = "Jump_neck_RotationInterpolator";
ROUTE2833.toField = "rotation";
ROUTE2833.toNode = "hanim_vc4";
Group2761.children[71] = ROUTE2833;

let ROUTE2834 = browser.currentScene.createNode("ROUTE");
ROUTE2834.fromField = "value_changed";
ROUTE2834.fromNode = "Jump_upper_body_RotationInterpolator";
ROUTE2834.toField = "rotation";
ROUTE2834.toNode = "hanim_vl1";
Group2761.children[72] = ROUTE2834;

let ROUTE2835 = browser.currentScene.createNode("ROUTE");
ROUTE2835.fromField = "value_changed";
ROUTE2835.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE2835.toField = "rotation";
ROUTE2835.toNode = "hanim_humanoid_root";
Group2761.children[73] = ROUTE2835;

let ROUTE2836 = browser.currentScene.createNode("ROUTE");
ROUTE2836.fromField = "value_changed";
ROUTE2836.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE2836.toField = "translation";
ROUTE2836.toNode = "hanim_humanoid_root";
Group2761.children[74] = ROUTE2836;

let ROUTE2837 = browser.currentScene.createNode("ROUTE");
ROUTE2837.fromField = "value_changed";
ROUTE2837.fromNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE2837.toField = "rotation";
ROUTE2837.toNode = "hanim_l_sternoclavicular";
Group2761.children[75] = ROUTE2837;

let ROUTE2838 = browser.currentScene.createNode("ROUTE");
ROUTE2838.fromField = "value_changed";
ROUTE2838.fromNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE2838.toField = "rotation";
ROUTE2838.toNode = "hanim_l_acromioclavicular";
Group2761.children[76] = ROUTE2838;

let ROUTE2839 = browser.currentScene.createNode("ROUTE");
ROUTE2839.fromField = "value_changed";
ROUTE2839.fromNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE2839.toField = "rotation";
ROUTE2839.toNode = "hanim_r_sternoclavicular";
Group2761.children[77] = ROUTE2839;

let ROUTE2840 = browser.currentScene.createNode("ROUTE");
ROUTE2840.fromField = "value_changed";
ROUTE2840.fromNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE2840.toField = "rotation";
ROUTE2840.toNode = "hanim_r_acromioclavicular";
Group2761.children[78] = ROUTE2840;

let ROUTE2841 = browser.currentScene.createNode("ROUTE");
ROUTE2841.fromField = "value_changed";
ROUTE2841.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2841.toField = "rotation";
ROUTE2841.toNode = "hanim_l_metatarsal";
Group2761.children[79] = ROUTE2841;

let ROUTE2842 = browser.currentScene.createNode("ROUTE");
ROUTE2842.fromField = "value_changed";
ROUTE2842.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2842.toField = "rotation";
ROUTE2842.toNode = "hanim_r_metatarsal";
Group2761.children[80] = ROUTE2842;

let ROUTE2843 = browser.currentScene.createNode("ROUTE");
ROUTE2843.fromField = "value_changed";
ROUTE2843.fromNode = "Jump_sacroiliac_YawInterpolator";
ROUTE2843.toField = "rotation";
ROUTE2843.toNode = "hanim_sacroiliac";
Group2761.children[81] = ROUTE2843;

let ROUTE2844 = browser.currentScene.createNode("ROUTE");
ROUTE2844.fromField = "value_changed";
ROUTE2844.fromNode = "Jump_vl5_YawInterpolator";
ROUTE2844.toField = "rotation";
ROUTE2844.toNode = "hanim_vl5";
Group2761.children[82] = ROUTE2844;

let ROUTE2845 = browser.currentScene.createNode("ROUTE");
ROUTE2845.fromField = "value_changed";
ROUTE2845.fromNode = "Jump_vc6_YawInterpolator";
ROUTE2845.toField = "rotation";
ROUTE2845.toNode = "hanim_vc6";
Group2761.children[83] = ROUTE2845;

let ROUTE2846 = browser.currentScene.createNode("ROUTE");
ROUTE2846.fromField = "value_changed";
ROUTE2846.fromNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE2846.toField = "rotation";
ROUTE2846.toNode = "hanim_l_thumb1";
Group2761.children[84] = ROUTE2846;

let ROUTE2847 = browser.currentScene.createNode("ROUTE");
ROUTE2847.fromField = "value_changed";
ROUTE2847.fromNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE2847.toField = "rotation";
ROUTE2847.toNode = "hanim_r_thumb1";
Group2761.children[85] = ROUTE2847;

browser.currentScene.children[20] = Group2761;

let Group2848 = browser.currentScene.createNode("Group");
Group2848.DEF = "KickAnimation";
let TimeSensor2849 = browser.currentScene.createNode("TimeSensor");
TimeSensor2849.DEF = "KickTimer";
TimeSensor2849.cycleInterval = 3.73;
TimeSensor2849.loop = True;
Group2848.children = new MFNode();

Group2848.children[0] = TimeSensor2849;

let OrientationInterpolator2850 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2850.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2850.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2850.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2848.children[1] = OrientationInterpolator2850;

let OrientationInterpolator2851 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2851.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2851.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2851.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[2] = OrientationInterpolator2851;

let OrientationInterpolator2852 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2852.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator2852.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2852.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group2848.children[3] = OrientationInterpolator2852;

let OrientationInterpolator2853 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2853.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator2853.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2853.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2848.children[4] = OrientationInterpolator2853;

let OrientationInterpolator2854 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2854.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator2854.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2854.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[5] = OrientationInterpolator2854;

let OrientationInterpolator2855 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2855.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator2855.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2855.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2848.children[6] = OrientationInterpolator2855;

let OrientationInterpolator2856 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2856.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2856.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2856.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2848.children[7] = OrientationInterpolator2856;

let OrientationInterpolator2857 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2857.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2857.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2857.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[8] = OrientationInterpolator2857;

let OrientationInterpolator2858 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2858.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator2858.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2858.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group2848.children[9] = OrientationInterpolator2858;

let OrientationInterpolator2859 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2859.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator2859.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2859.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2848.children[10] = OrientationInterpolator2859;

let OrientationInterpolator2860 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2860.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator2860.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2860.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[11] = OrientationInterpolator2860;

let OrientationInterpolator2861 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2861.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator2861.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2861.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2848.children[12] = OrientationInterpolator2861;

let OrientationInterpolator2862 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2862.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator2862.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2862.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group2848.children[13] = OrientationInterpolator2862;

let OrientationInterpolator2863 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2863.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator2863.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2863.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group2848.children[14] = OrientationInterpolator2863;

let OrientationInterpolator2864 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2864.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator2864.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2864.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[15] = OrientationInterpolator2864;

let OrientationInterpolator2865 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2865.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator2865.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2865.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[16] = OrientationInterpolator2865;

let OrientationInterpolator2866 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2866.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator2866.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2866.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group2848.children[17] = OrientationInterpolator2866;

let OrientationInterpolator2867 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2867.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator2867.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2867.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2848.children[18] = OrientationInterpolator2867;

let OrientationInterpolator2868 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2868.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator2868.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2868.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2848.children[19] = OrientationInterpolator2868;

let OrientationInterpolator2869 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2869.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator2869.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2869.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[20] = OrientationInterpolator2869;

let OrientationInterpolator2870 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2870.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator2870.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2870.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[21] = OrientationInterpolator2870;

let OrientationInterpolator2871 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2871.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator2871.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2871.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[22] = OrientationInterpolator2871;

let OrientationInterpolator2872 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2872.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator2872.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2872.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[23] = OrientationInterpolator2872;

let OrientationInterpolator2873 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2873.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator2873.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2873.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[24] = OrientationInterpolator2873;

let PositionInterpolator2874 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2874.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator2874.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2874.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2848.children[25] = PositionInterpolator2874;

let OrientationInterpolator2875 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2875.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator2875.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2875.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group2848.children[26] = OrientationInterpolator2875;

let ROUTE2876 = browser.currentScene.createNode("ROUTE");
ROUTE2876.fromField = "fraction_changed";
ROUTE2876.fromNode = "KickTimer";
ROUTE2876.toField = "set_fraction";
ROUTE2876.toNode = "Kick_l_sternoclavicular_RollInterpolator";
Group2848.children[27] = ROUTE2876;

let ROUTE2877 = browser.currentScene.createNode("ROUTE");
ROUTE2877.fromField = "fraction_changed";
ROUTE2877.fromNode = "KickTimer";
ROUTE2877.toField = "set_fraction";
ROUTE2877.toNode = "Kick_l_acromioclavicular_RollInterpolator";
Group2848.children[28] = ROUTE2877;

let ROUTE2878 = browser.currentScene.createNode("ROUTE");
ROUTE2878.fromField = "fraction_changed";
ROUTE2878.fromNode = "KickTimer";
ROUTE2878.toField = "set_fraction";
ROUTE2878.toNode = "Kick_l_shoulder_RollInterpolator";
Group2848.children[29] = ROUTE2878;

let ROUTE2879 = browser.currentScene.createNode("ROUTE");
ROUTE2879.fromField = "fraction_changed";
ROUTE2879.fromNode = "KickTimer";
ROUTE2879.toField = "set_fraction";
ROUTE2879.toNode = "Kick_l_ForeArm_PitchInterpolator";
Group2848.children[30] = ROUTE2879;

let ROUTE2880 = browser.currentScene.createNode("ROUTE");
ROUTE2880.fromField = "fraction_changed";
ROUTE2880.fromNode = "KickTimer";
ROUTE2880.toField = "set_fraction";
ROUTE2880.toNode = "Kick_l_wrist_RollInterpolator";
Group2848.children[31] = ROUTE2880;

let ROUTE2881 = browser.currentScene.createNode("ROUTE");
ROUTE2881.fromField = "fraction_changed";
ROUTE2881.fromNode = "KickTimer";
ROUTE2881.toField = "set_fraction";
ROUTE2881.toNode = "Kick_l_thumb1_PitchInterpolator";
Group2848.children[32] = ROUTE2881;

let ROUTE2882 = browser.currentScene.createNode("ROUTE");
ROUTE2882.fromField = "fraction_changed";
ROUTE2882.fromNode = "KickTimer";
ROUTE2882.toField = "set_fraction";
ROUTE2882.toNode = "Kick_r_sternoclavicular_RollInterpolator";
Group2848.children[33] = ROUTE2882;

let ROUTE2883 = browser.currentScene.createNode("ROUTE");
ROUTE2883.fromField = "fraction_changed";
ROUTE2883.fromNode = "KickTimer";
ROUTE2883.toField = "set_fraction";
ROUTE2883.toNode = "Kick_r_acromioclavicular_RollInterpolator";
Group2848.children[34] = ROUTE2883;

let ROUTE2884 = browser.currentScene.createNode("ROUTE");
ROUTE2884.fromField = "fraction_changed";
ROUTE2884.fromNode = "KickTimer";
ROUTE2884.toField = "set_fraction";
ROUTE2884.toNode = "Kick_r_shoulder_RollInterpolator";
Group2848.children[35] = ROUTE2884;

let ROUTE2885 = browser.currentScene.createNode("ROUTE");
ROUTE2885.fromField = "fraction_changed";
ROUTE2885.fromNode = "KickTimer";
ROUTE2885.toField = "set_fraction";
ROUTE2885.toNode = "Kick_r_ForeArm_PitchInterpolator";
Group2848.children[36] = ROUTE2885;

let ROUTE2886 = browser.currentScene.createNode("ROUTE");
ROUTE2886.fromField = "fraction_changed";
ROUTE2886.fromNode = "KickTimer";
ROUTE2886.toField = "set_fraction";
ROUTE2886.toNode = "Kick_r_wrist_RollInterpolator";
Group2848.children[37] = ROUTE2886;

let ROUTE2887 = browser.currentScene.createNode("ROUTE");
ROUTE2887.fromField = "fraction_changed";
ROUTE2887.fromNode = "KickTimer";
ROUTE2887.toField = "set_fraction";
ROUTE2887.toNode = "Kick_r_thumb1_PitchInterpolator";
Group2848.children[38] = ROUTE2887;

let ROUTE2888 = browser.currentScene.createNode("ROUTE");
ROUTE2888.fromField = "fraction_changed";
ROUTE2888.fromNode = "KickTimer";
ROUTE2888.toField = "set_fraction";
ROUTE2888.toNode = "Kick_r_hip_PitchInterpolator";
Group2848.children[39] = ROUTE2888;

let ROUTE2889 = browser.currentScene.createNode("ROUTE");
ROUTE2889.fromField = "fraction_changed";
ROUTE2889.fromNode = "KickTimer";
ROUTE2889.toField = "set_fraction";
ROUTE2889.toNode = "Kick_r_knee_PitchInterpolator";
Group2848.children[40] = ROUTE2889;

let ROUTE2890 = browser.currentScene.createNode("ROUTE");
ROUTE2890.fromField = "fraction_changed";
ROUTE2890.fromNode = "KickTimer";
ROUTE2890.toField = "set_fraction";
ROUTE2890.toNode = "Kick_l_hip_PitchInterpolator";
Group2848.children[41] = ROUTE2890;

let ROUTE2891 = browser.currentScene.createNode("ROUTE");
ROUTE2891.fromField = "fraction_changed";
ROUTE2891.fromNode = "KickTimer";
ROUTE2891.toField = "set_fraction";
ROUTE2891.toNode = "Kick_l_knee_PitchInterpolator";
Group2848.children[42] = ROUTE2891;

let ROUTE2892 = browser.currentScene.createNode("ROUTE");
ROUTE2892.fromField = "fraction_changed";
ROUTE2892.fromNode = "KickTimer";
ROUTE2892.toField = "set_fraction";
ROUTE2892.toNode = "Kick_r_ankle_PitchInterpolator";
Group2848.children[43] = ROUTE2892;

let ROUTE2893 = browser.currentScene.createNode("ROUTE");
ROUTE2893.fromField = "fraction_changed";
ROUTE2893.fromNode = "KickTimer";
ROUTE2893.toField = "set_fraction";
ROUTE2893.toNode = "Kick_r_metatarsal_PitchInterpolator";
Group2848.children[44] = ROUTE2893;

let ROUTE2894 = browser.currentScene.createNode("ROUTE");
ROUTE2894.fromField = "fraction_changed";
ROUTE2894.fromNode = "KickTimer";
ROUTE2894.toField = "set_fraction";
ROUTE2894.toNode = "Kick_sacroiliac_YawInterpolator";
Group2848.children[45] = ROUTE2894;

let ROUTE2895 = browser.currentScene.createNode("ROUTE");
ROUTE2895.fromField = "fraction_changed";
ROUTE2895.fromNode = "KickTimer";
ROUTE2895.toField = "set_fraction";
ROUTE2895.toNode = "Kick_vl5_YawInterpolator";
Group2848.children[46] = ROUTE2895;

let ROUTE2896 = browser.currentScene.createNode("ROUTE");
ROUTE2896.fromField = "fraction_changed";
ROUTE2896.fromNode = "KickTimer";
ROUTE2896.toField = "set_fraction";
ROUTE2896.toNode = "Kick_vc6_YawInterpolator";
Group2848.children[47] = ROUTE2896;

let ROUTE2897 = browser.currentScene.createNode("ROUTE");
ROUTE2897.fromField = "fraction_changed";
ROUTE2897.fromNode = "KickTimer";
ROUTE2897.toField = "set_fraction";
ROUTE2897.toNode = "Kick_lower_body_RotationInterpolator";
Group2848.children[48] = ROUTE2897;

let ROUTE2898 = browser.currentScene.createNode("ROUTE");
ROUTE2898.fromField = "fraction_changed";
ROUTE2898.fromNode = "KickTimer";
ROUTE2898.toField = "set_fraction";
ROUTE2898.toNode = "Kick_upper_body_RotationInterpolator";
Group2848.children[49] = ROUTE2898;

let ROUTE2899 = browser.currentScene.createNode("ROUTE");
ROUTE2899.fromField = "fraction_changed";
ROUTE2899.fromNode = "KickTimer";
ROUTE2899.toField = "set_fraction";
ROUTE2899.toNode = "Kick_whole_body_RotationInterpolator";
Group2848.children[50] = ROUTE2899;

let ROUTE2900 = browser.currentScene.createNode("ROUTE");
ROUTE2900.fromField = "fraction_changed";
ROUTE2900.fromNode = "KickTimer";
ROUTE2900.toField = "set_fraction";
ROUTE2900.toNode = "Kick_whole_body_TranslationInterpolator";
Group2848.children[51] = ROUTE2900;

let ROUTE2901 = browser.currentScene.createNode("ROUTE");
ROUTE2901.fromField = "fraction_changed";
ROUTE2901.fromNode = "KickTimer";
ROUTE2901.toField = "set_fraction";
ROUTE2901.toNode = "Kick_neck_RotationInterpolator";
Group2848.children[52] = ROUTE2901;

let ROUTE2902 = browser.currentScene.createNode("ROUTE");
ROUTE2902.fromField = "value_changed";
ROUTE2902.fromNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE2902.toField = "rotation";
ROUTE2902.toNode = "hanim_l_sternoclavicular";
Group2848.children[53] = ROUTE2902;

let ROUTE2903 = browser.currentScene.createNode("ROUTE");
ROUTE2903.fromField = "value_changed";
ROUTE2903.fromNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE2903.toField = "rotation";
ROUTE2903.toNode = "hanim_l_acromioclavicular";
Group2848.children[54] = ROUTE2903;

let ROUTE2904 = browser.currentScene.createNode("ROUTE");
ROUTE2904.fromField = "value_changed";
ROUTE2904.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE2904.toField = "rotation";
ROUTE2904.toNode = "hanim_l_shoulder";
Group2848.children[55] = ROUTE2904;

let ROUTE2905 = browser.currentScene.createNode("ROUTE");
ROUTE2905.fromField = "value_changed";
ROUTE2905.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE2905.toField = "rotation";
ROUTE2905.toNode = "hanim_l_elbow";
Group2848.children[56] = ROUTE2905;

let ROUTE2906 = browser.currentScene.createNode("ROUTE");
ROUTE2906.fromField = "value_changed";
ROUTE2906.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE2906.toField = "rotation";
ROUTE2906.toNode = "hanim_l_wrist";
Group2848.children[57] = ROUTE2906;

let ROUTE2907 = browser.currentScene.createNode("ROUTE");
ROUTE2907.fromField = "value_changed";
ROUTE2907.fromNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE2907.toField = "rotation";
ROUTE2907.toNode = "hanim_l_thumb1";
Group2848.children[58] = ROUTE2907;

let ROUTE2908 = browser.currentScene.createNode("ROUTE");
ROUTE2908.fromField = "value_changed";
ROUTE2908.fromNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE2908.toField = "rotation";
ROUTE2908.toNode = "hanim_r_sternoclavicular";
Group2848.children[59] = ROUTE2908;

let ROUTE2909 = browser.currentScene.createNode("ROUTE");
ROUTE2909.fromField = "value_changed";
ROUTE2909.fromNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE2909.toField = "rotation";
ROUTE2909.toNode = "hanim_r_acromioclavicular";
Group2848.children[60] = ROUTE2909;

let ROUTE2910 = browser.currentScene.createNode("ROUTE");
ROUTE2910.fromField = "value_changed";
ROUTE2910.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE2910.toField = "rotation";
ROUTE2910.toNode = "hanim_r_shoulder";
Group2848.children[61] = ROUTE2910;

let ROUTE2911 = browser.currentScene.createNode("ROUTE");
ROUTE2911.fromField = "value_changed";
ROUTE2911.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE2911.toField = "rotation";
ROUTE2911.toNode = "hanim_r_elbow";
Group2848.children[62] = ROUTE2911;

let ROUTE2912 = browser.currentScene.createNode("ROUTE");
ROUTE2912.fromField = "value_changed";
ROUTE2912.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE2912.toField = "rotation";
ROUTE2912.toNode = "hanim_r_wrist";
Group2848.children[63] = ROUTE2912;

let ROUTE2913 = browser.currentScene.createNode("ROUTE");
ROUTE2913.fromField = "value_changed";
ROUTE2913.fromNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE2913.toField = "rotation";
ROUTE2913.toNode = "hanim_r_thumb1";
Group2848.children[64] = ROUTE2913;

let ROUTE2914 = browser.currentScene.createNode("ROUTE");
ROUTE2914.fromField = "value_changed";
ROUTE2914.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE2914.toField = "rotation";
ROUTE2914.toNode = "hanim_r_hip";
Group2848.children[65] = ROUTE2914;

let ROUTE2915 = browser.currentScene.createNode("ROUTE");
ROUTE2915.fromField = "value_changed";
ROUTE2915.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE2915.toField = "rotation";
ROUTE2915.toNode = "hanim_r_knee";
Group2848.children[66] = ROUTE2915;

let ROUTE2916 = browser.currentScene.createNode("ROUTE");
ROUTE2916.fromField = "value_changed";
ROUTE2916.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE2916.toField = "rotation";
ROUTE2916.toNode = "hanim_r_ankle";
Group2848.children[67] = ROUTE2916;

let ROUTE2917 = browser.currentScene.createNode("ROUTE");
ROUTE2917.fromField = "value_changed";
ROUTE2917.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE2917.toField = "rotation";
ROUTE2917.toNode = "hanim_r_metatarsal";
Group2848.children[68] = ROUTE2917;

let ROUTE2918 = browser.currentScene.createNode("ROUTE");
ROUTE2918.fromField = "value_changed";
ROUTE2918.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE2918.toField = "rotation";
ROUTE2918.toNode = "hanim_l_hip";
Group2848.children[69] = ROUTE2918;

let ROUTE2919 = browser.currentScene.createNode("ROUTE");
ROUTE2919.fromField = "value_changed";
ROUTE2919.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE2919.toField = "rotation";
ROUTE2919.toNode = "hanim_l_knee";
Group2848.children[70] = ROUTE2919;

let ROUTE2920 = browser.currentScene.createNode("ROUTE");
ROUTE2920.fromField = "value_changed";
ROUTE2920.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE2920.toField = "rotation";
ROUTE2920.toNode = "hanim_l_ankle";
Group2848.children[71] = ROUTE2920;

let ROUTE2921 = browser.currentScene.createNode("ROUTE");
ROUTE2921.fromField = "value_changed";
ROUTE2921.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE2921.toField = "rotation";
ROUTE2921.toNode = "hanim_l_metatarsal";
Group2848.children[72] = ROUTE2921;

let ROUTE2922 = browser.currentScene.createNode("ROUTE");
ROUTE2922.fromField = "value_changed";
ROUTE2922.fromNode = "Kick_sacroiliac_YawInterpolator";
ROUTE2922.toField = "rotation";
ROUTE2922.toNode = "hanim_sacroiliac";
Group2848.children[73] = ROUTE2922;

let ROUTE2923 = browser.currentScene.createNode("ROUTE");
ROUTE2923.fromField = "value_changed";
ROUTE2923.fromNode = "Kick_vl5_YawInterpolator";
ROUTE2923.toField = "rotation";
ROUTE2923.toNode = "hanim_vl5";
Group2848.children[74] = ROUTE2923;

let ROUTE2924 = browser.currentScene.createNode("ROUTE");
ROUTE2924.fromField = "value_changed";
ROUTE2924.fromNode = "Kick_vc6_YawInterpolator";
ROUTE2924.toField = "rotation";
ROUTE2924.toNode = "hanim_vc6";
Group2848.children[75] = ROUTE2924;

let ROUTE2925 = browser.currentScene.createNode("ROUTE");
ROUTE2925.fromField = "value_changed";
ROUTE2925.fromNode = "Kick_upper_body_RotationInterpolator";
ROUTE2925.toField = "rotation";
ROUTE2925.toNode = "hanim_vl1";
Group2848.children[76] = ROUTE2925;

let ROUTE2926 = browser.currentScene.createNode("ROUTE");
ROUTE2926.fromField = "value_changed";
ROUTE2926.fromNode = "Kick_lower_body_RotationInterpolator";
ROUTE2926.toField = "rotation";
ROUTE2926.toNode = "hanim_sacroiliac";
Group2848.children[77] = ROUTE2926;

let ROUTE2927 = browser.currentScene.createNode("ROUTE");
ROUTE2927.fromField = "value_changed";
ROUTE2927.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE2927.toField = "rotation";
ROUTE2927.toNode = "hanim_humanoid_root";
Group2848.children[78] = ROUTE2927;

let ROUTE2928 = browser.currentScene.createNode("ROUTE");
ROUTE2928.fromField = "value_changed";
ROUTE2928.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE2928.toField = "translation";
ROUTE2928.toNode = "hanim_humanoid_root";
Group2848.children[79] = ROUTE2928;

let ROUTE2929 = browser.currentScene.createNode("ROUTE");
ROUTE2929.fromField = "value_changed";
ROUTE2929.fromNode = "Kick_neck_RotationInterpolator";
ROUTE2929.toField = "rotation";
ROUTE2929.toNode = "hanim_vc4";
Group2848.children[80] = ROUTE2929;

browser.currentScene.children[21] = Group2848;

let Group2930 = browser.currentScene.createNode("Group");
Group2930.DEF = "UserInterface";
//Authoring hint: these axes are aligned within local coordinate system
let Transform2931 = browser.currentScene.createNode("Transform");
Transform2931.DEF = "CoordinateAxesAdjustedScale";
Transform2931.scale = new SFVec3f(new float[0.175,0.175,0.175]);
let Inline2932 = browser.currentScene.createNode("Inline");
Inline2932.DEF = "CoordinateAxes";
Inline2932.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"]);
Transform2931.children = new MFNode();

Transform2931.children[0] = Inline2932;

Group2930.children = new MFNode();

Group2930.children[0] = Transform2931;

let Transform2933 = browser.currentScene.createNode("Transform");
Transform2933.DEF = "cordsys";
Transform2933.scale = new SFVec3f(new float[0.175,0.175,0.175]);
//<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='\"JointCoordinateAxes.x3dv\"'/>
Group2930.children[1] = Transform2933;

let ProximitySensor2934 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor2934.DEF = "HudProximitySensor";
ProximitySensor2934.center = new SFVec3f(new float[0,20,0]);
ProximitySensor2934.size = new SFVec3f(new float[500,100,500]);
Group2930.children[2] = ProximitySensor2934;

let Transform2935 = browser.currentScene.createNode("Transform");
Transform2935.DEF = "Stage";
Transform2935.scale = new SFVec3f(new float[1,0.0125,1]);
Transform2935.translation = new SFVec3f(new float[0,-0.0125,0]);
let Shape2936 = browser.currentScene.createNode("Shape");
let Appearance2937 = browser.currentScene.createNode("Appearance");
let Material2938 = browser.currentScene.createNode("Material");
Material2938.transparency = 0.6;
Appearance2937.material = Material2938;

Shape2936.appearance = Appearance2937;

let Box2939 = browser.currentScene.createNode("Box");
Shape2936.geometry = Box2939;

Transform2935.children = new MFNode();

Transform2935.children[0] = Shape2936;

let Transform2940 = browser.currentScene.createNode("Transform");
Transform2940.DEF = "Circle0";
Transform2940.scale = new SFVec3f(new float[1.175,1,1.175]);
let Shape2941 = browser.currentScene.createNode("Shape");
let Appearance2942 = browser.currentScene.createNode("Appearance");
let Material2943 = browser.currentScene.createNode("Material");
Material2943.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2943.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2942.material = Material2943;

Shape2941.appearance = Appearance2942;

let IndexedLineSet2944 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2944.DEF = "Orbit1";
IndexedLineSet2944.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate2945 = browser.currentScene.createNode("Coordinate");
Coordinate2945.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet2944.coord = Coordinate2945;

Shape2941.geometry = IndexedLineSet2944;

Transform2940.children = new MFNode();

Transform2940.children[0] = Shape2941;

Transform2935.children[1] = Transform2940;

let Transform2946 = browser.currentScene.createNode("Transform");
Transform2946.DEF = "Circle1";
Transform2946.scale = new SFVec3f(new float[0.5,1,0.5]);
let Shape2947 = browser.currentScene.createNode("Shape");
let Appearance2948 = browser.currentScene.createNode("Appearance");
let Material2949 = browser.currentScene.createNode("Material");
Material2949.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2949.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2948.material = Material2949;

Shape2947.appearance = Appearance2948;

let IndexedLineSet2950 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2950.USE = "Orbit1";
Shape2947.geometry = IndexedLineSet2950;

Transform2946.children = new MFNode();

Transform2946.children[0] = Shape2947;

Transform2935.children[2] = Transform2946;

let Transform2951 = browser.currentScene.createNode("Transform");
Transform2951.DEF = "Circle2";
Transform2951.scale = new SFVec3f(new float[0.25,1,0.25]);
let Shape2952 = browser.currentScene.createNode("Shape");
let Appearance2953 = browser.currentScene.createNode("Appearance");
let Material2954 = browser.currentScene.createNode("Material");
Material2954.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2954.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2953.material = Material2954;

Shape2952.appearance = Appearance2953;

let IndexedLineSet2955 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2955.USE = "Orbit1";
Shape2952.geometry = IndexedLineSet2955;

Transform2951.children = new MFNode();

Transform2951.children[0] = Shape2952;

Transform2935.children[3] = Transform2951;

Group2930.children[3] = Transform2935;

let Transform2956 = browser.currentScene.createNode("Transform");
Transform2956.DEF = "HudXform";
Transform2956.rotation = new SFRotation(new float[-0.09996068,0.9942513,0.03837026,0.7131352]);
Transform2956.translation = new SFVec3f(new float[1.705442,1.042139,1.989742]);
let Transform2957 = browser.currentScene.createNode("Transform");
Transform2957.scale = new SFVec3f(new float[0.035,0.035,0.035]);
Transform2957.translation = new SFVec3f(new float[-0.42,-0.2,-0.75]);
let Transform2958 = browser.currentScene.createNode("Transform");
Transform2958.DEF = "StandTransform";
Transform2958.translation = new SFVec3f(new float[0,-1,0]);
let TouchSensor2959 = browser.currentScene.createNode("TouchSensor");
TouchSensor2959.DEF = "Stand_Touch";
TouchSensor2959.description = "touch to select";
Transform2958.children = new MFNode();

Transform2958.children[0] = TouchSensor2959;

let Shape2960 = browser.currentScene.createNode("Shape");
Shape2960.DEF = "StandTextShape";
let Appearance2961 = browser.currentScene.createNode("Appearance");
let Material2962 = browser.currentScene.createNode("Material");
Material2962.DEF = "text_color";
Material2962.ambientIntensity = 1;
Material2962.diffuseColor = new SFColor(new float[0.819,0.521,0.169]);
Material2962.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Material2962.specularColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance2961.material = Material2962;

Shape2960.appearance = Appearance2961;

let Text2963 = browser.currentScene.createNode("Text");
Text2963.string = new MFString(new java.lang.String["Stand"]);
Shape2960.geometry = Text2963;

Transform2958.children[1] = Shape2960;

let Shape2964 = browser.currentScene.createNode("Shape");
Shape2964.DEF = "Stand_Back";
let Appearance2965 = browser.currentScene.createNode("Appearance");
let Material2966 = browser.currentScene.createNode("Material");
Material2966.DEF = "Clear";
Material2966.ambientIntensity = 1;
Material2966.diffuseColor = new SFColor(new float[0,0.5,0]);
Material2966.emissiveColor = new SFColor(new float[0,0.5,0]);
Material2966.transparency = 0.8;
Appearance2965.material = Material2966;

Shape2964.appearance = Appearance2965;

let IndexedFaceSet2967 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2967.DEF = "Backing";
IndexedFaceSet2967.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
let Coordinate2968 = browser.currentScene.createNode("Coordinate");
Coordinate2968.point = new MFVec3f(new float[-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01]);
IndexedFaceSet2967.coord = Coordinate2968;

Shape2964.geometry = IndexedFaceSet2967;

Transform2958.children[2] = Shape2964;

Transform2957.children = new MFNode();

Transform2957.children[0] = Transform2958;

let Transform2969 = browser.currentScene.createNode("Transform");
Transform2969.DEF = "PitchTransform";
Transform2969.translation = new SFVec3f(new float[3,-1,0]);
let TouchSensor2970 = browser.currentScene.createNode("TouchSensor");
TouchSensor2970.DEF = "Pitch_Touch";
TouchSensor2970.description = "touch to select";
Transform2969.children = new MFNode();

Transform2969.children[0] = TouchSensor2970;

let Shape2971 = browser.currentScene.createNode("Shape");
Shape2971.DEF = "PitchTextShape";
let Appearance2972 = browser.currentScene.createNode("Appearance");
let Material2973 = browser.currentScene.createNode("Material");
Material2973.USE = "text_color";
Appearance2972.material = Material2973;

Shape2971.appearance = Appearance2972;

let Text2974 = browser.currentScene.createNode("Text");
Text2974.string = new MFString(new java.lang.String["Pitch"]);
Shape2971.geometry = Text2974;

Transform2969.children[1] = Shape2971;

let Shape2975 = browser.currentScene.createNode("Shape");
Shape2975.DEF = "Pitch_Back";
let Appearance2976 = browser.currentScene.createNode("Appearance");
let Material2977 = browser.currentScene.createNode("Material");
Material2977.USE = "Clear";
Appearance2976.material = Material2977;

Shape2975.appearance = Appearance2976;

let IndexedFaceSet2978 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2978.USE = "Backing";
Shape2975.geometry = IndexedFaceSet2978;

Transform2969.children[2] = Shape2975;

Transform2957.children[1] = Transform2969;

let Transform2979 = browser.currentScene.createNode("Transform");
Transform2979.DEF = "YawTransform";
Transform2979.translation = new SFVec3f(new float[6,-1,0]);
let TouchSensor2980 = browser.currentScene.createNode("TouchSensor");
TouchSensor2980.DEF = "Yaw_Touch";
TouchSensor2980.description = "touch to select";
Transform2979.children = new MFNode();

Transform2979.children[0] = TouchSensor2980;

let Shape2981 = browser.currentScene.createNode("Shape");
Shape2981.DEF = "YawText";
let Appearance2982 = browser.currentScene.createNode("Appearance");
let Material2983 = browser.currentScene.createNode("Material");
Material2983.USE = "text_color";
Appearance2982.material = Material2983;

Shape2981.appearance = Appearance2982;

let Text2984 = browser.currentScene.createNode("Text");
Text2984.string = new MFString(new java.lang.String["Yaw"]);
Shape2981.geometry = Text2984;

Transform2979.children[1] = Shape2981;

let Shape2985 = browser.currentScene.createNode("Shape");
Shape2985.DEF = "Yaw_Back";
let Appearance2986 = browser.currentScene.createNode("Appearance");
let Material2987 = browser.currentScene.createNode("Material");
Material2987.USE = "Clear";
Appearance2986.material = Material2987;

Shape2985.appearance = Appearance2986;

let IndexedFaceSet2988 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2988.USE = "Backing";
Shape2985.geometry = IndexedFaceSet2988;

Transform2979.children[2] = Shape2985;

Transform2957.children[2] = Transform2979;

let Transform2989 = browser.currentScene.createNode("Transform");
Transform2989.DEF = "RollTransform";
Transform2989.translation = new SFVec3f(new float[9,-1,0]);
let TouchSensor2990 = browser.currentScene.createNode("TouchSensor");
TouchSensor2990.DEF = "Roll_Touch";
TouchSensor2990.description = "touch to select";
Transform2989.children = new MFNode();

Transform2989.children[0] = TouchSensor2990;

let Shape2991 = browser.currentScene.createNode("Shape");
Shape2991.DEF = "_RollInterpolator";
let Appearance2992 = browser.currentScene.createNode("Appearance");
let Material2993 = browser.currentScene.createNode("Material");
Material2993.USE = "text_color";
Appearance2992.material = Material2993;

Shape2991.appearance = Appearance2992;

let Text2994 = browser.currentScene.createNode("Text");
Text2994.string = new MFString(new java.lang.String["Roll"]);
Shape2991.geometry = Text2994;

Transform2989.children[1] = Shape2991;

let Shape2995 = browser.currentScene.createNode("Shape");
Shape2995.DEF = "Roll_Back";
let Appearance2996 = browser.currentScene.createNode("Appearance");
let Material2997 = browser.currentScene.createNode("Material");
Material2997.USE = "Clear";
Appearance2996.material = Material2997;

Shape2995.appearance = Appearance2996;

let IndexedFaceSet2998 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2998.USE = "Backing";
Shape2995.geometry = IndexedFaceSet2998;

Transform2989.children[2] = Shape2995;

Transform2957.children[3] = Transform2989;

let Transform2999 = browser.currentScene.createNode("Transform");
Transform2999.DEF = "WalkTransform";
Transform2999.translation = new SFVec3f(new float[12,-1,0]);
let TouchSensor3000 = browser.currentScene.createNode("TouchSensor");
TouchSensor3000.DEF = "Walk_Touch";
TouchSensor3000.description = "touch to select";
Transform2999.children = new MFNode();

Transform2999.children[0] = TouchSensor3000;

let Shape3001 = browser.currentScene.createNode("Shape");
Shape3001.DEF = "WalkText";
let Appearance3002 = browser.currentScene.createNode("Appearance");
let Material3003 = browser.currentScene.createNode("Material");
Material3003.USE = "text_color";
Appearance3002.material = Material3003;

Shape3001.appearance = Appearance3002;

let Text3004 = browser.currentScene.createNode("Text");
Text3004.string = new MFString(new java.lang.String["Walk"]);
Shape3001.geometry = Text3004;

Transform2999.children[1] = Shape3001;

let Shape3005 = browser.currentScene.createNode("Shape");
Shape3005.DEF = "Walk_Back";
let Appearance3006 = browser.currentScene.createNode("Appearance");
let Material3007 = browser.currentScene.createNode("Material");
Material3007.USE = "Clear";
Appearance3006.material = Material3007;

Shape3005.appearance = Appearance3006;

let IndexedFaceSet3008 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3008.USE = "Backing";
Shape3005.geometry = IndexedFaceSet3008;

Transform2999.children[2] = Shape3005;

Transform2957.children[4] = Transform2999;

let Transform3009 = browser.currentScene.createNode("Transform");
Transform3009.DEF = "RunTransform";
Transform3009.translation = new SFVec3f(new float[15,-1,0]);
let TouchSensor3010 = browser.currentScene.createNode("TouchSensor");
TouchSensor3010.DEF = "Run_Touch";
TouchSensor3010.description = "touch to select";
Transform3009.children = new MFNode();

Transform3009.children[0] = TouchSensor3010;

let Shape3011 = browser.currentScene.createNode("Shape");
Shape3011.DEF = "RunText";
let Appearance3012 = browser.currentScene.createNode("Appearance");
let Material3013 = browser.currentScene.createNode("Material");
Material3013.USE = "text_color";
Appearance3012.material = Material3013;

Shape3011.appearance = Appearance3012;

let Text3014 = browser.currentScene.createNode("Text");
Text3014.string = new MFString(new java.lang.String["Run"]);
Shape3011.geometry = Text3014;

Transform3009.children[1] = Shape3011;

let Shape3015 = browser.currentScene.createNode("Shape");
Shape3015.DEF = "Run_Back";
let Appearance3016 = browser.currentScene.createNode("Appearance");
let Material3017 = browser.currentScene.createNode("Material");
Material3017.USE = "Clear";
Appearance3016.material = Material3017;

Shape3015.appearance = Appearance3016;

let IndexedFaceSet3018 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3018.USE = "Backing";
Shape3015.geometry = IndexedFaceSet3018;

Transform3009.children[2] = Shape3015;

Transform2957.children[5] = Transform3009;

let Transform3019 = browser.currentScene.createNode("Transform");
Transform3019.DEF = "JumpTransform";
Transform3019.translation = new SFVec3f(new float[18,-1,0]);
let TouchSensor3020 = browser.currentScene.createNode("TouchSensor");
TouchSensor3020.DEF = "Jump_Touch";
TouchSensor3020.description = "touch to select";
Transform3019.children = new MFNode();

Transform3019.children[0] = TouchSensor3020;

let Shape3021 = browser.currentScene.createNode("Shape");
Shape3021.DEF = "Jump";
let Appearance3022 = browser.currentScene.createNode("Appearance");
let Material3023 = browser.currentScene.createNode("Material");
Material3023.USE = "text_color";
Appearance3022.material = Material3023;

Shape3021.appearance = Appearance3022;

let Text3024 = browser.currentScene.createNode("Text");
Text3024.string = new MFString(new java.lang.String["Jump"]);
Shape3021.geometry = Text3024;

Transform3019.children[1] = Shape3021;

let Shape3025 = browser.currentScene.createNode("Shape");
Shape3025.DEF = "Jump_Back";
let Appearance3026 = browser.currentScene.createNode("Appearance");
let Material3027 = browser.currentScene.createNode("Material");
Material3027.USE = "Clear";
Appearance3026.material = Material3027;

Shape3025.appearance = Appearance3026;

let IndexedFaceSet3028 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3028.USE = "Backing";
Shape3025.geometry = IndexedFaceSet3028;

Transform3019.children[2] = Shape3025;

Transform2957.children[6] = Transform3019;

let Transform3029 = browser.currentScene.createNode("Transform");
Transform3029.DEF = "KickTransform";
Transform3029.translation = new SFVec3f(new float[21,-1,0]);
let TouchSensor3030 = browser.currentScene.createNode("TouchSensor");
TouchSensor3030.DEF = "Kick_Touch";
TouchSensor3030.description = "touch to select";
Transform3029.children = new MFNode();

Transform3029.children[0] = TouchSensor3030;

let Shape3031 = browser.currentScene.createNode("Shape");
Shape3031.DEF = "KickText";
let Appearance3032 = browser.currentScene.createNode("Appearance");
let Material3033 = browser.currentScene.createNode("Material");
Material3033.USE = "text_color";
Appearance3032.material = Material3033;

Shape3031.appearance = Appearance3032;

let Text3034 = browser.currentScene.createNode("Text");
Text3034.string = new MFString(new java.lang.String["Kick"]);
Shape3031.geometry = Text3034;

Transform3029.children[1] = Shape3031;

let Shape3035 = browser.currentScene.createNode("Shape");
Shape3035.DEF = "Kick_Back";
let Appearance3036 = browser.currentScene.createNode("Appearance");
let Material3037 = browser.currentScene.createNode("Material");
Material3037.USE = "Clear";
Appearance3036.material = Material3037;

Shape3035.appearance = Appearance3036;

let IndexedFaceSet3038 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3038.USE = "Backing";
Shape3035.geometry = IndexedFaceSet3038;

Transform3029.children[2] = Shape3035;

Transform2957.children[7] = Transform3029;

let Transform3039 = browser.currentScene.createNode("Transform");
Transform3039.DEF = "Stop_Text";
Transform3039.translation = new SFVec3f(new float[0,1.4,0]);
let TouchSensor3040 = browser.currentScene.createNode("TouchSensor");
TouchSensor3040.DEF = "Stop_Touch";
TouchSensor3040.description = "touch to select";
Transform3039.children = new MFNode();

Transform3039.children[0] = TouchSensor3040;

let Shape3041 = browser.currentScene.createNode("Shape");
Shape3041.DEF = "StopText";
let Appearance3042 = browser.currentScene.createNode("Appearance");
let Material3043 = browser.currentScene.createNode("Material");
Material3043.USE = "text_color";
Appearance3042.material = Material3043;

Shape3041.appearance = Appearance3042;

let Text3044 = browser.currentScene.createNode("Text");
Text3044.string = new MFString(new java.lang.String["Stop","Default Pose"]);
Shape3041.geometry = Text3044;

Transform3039.children[1] = Shape3041;

let Shape3045 = browser.currentScene.createNode("Shape");
Shape3045.DEF = "Stop_Back";
let Appearance3046 = browser.currentScene.createNode("Appearance");
let Material3047 = browser.currentScene.createNode("Material");
Material3047.USE = "Clear";
Appearance3046.material = Material3047;

Shape3045.appearance = Appearance3046;

let IndexedFaceSet3048 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3048.USE = "Backing";
Shape3045.geometry = IndexedFaceSet3048;

Transform3039.children[2] = Shape3045;

Transform2957.children[8] = Transform3039;

Transform2956.children = new MFNode();

Transform2956.children[0] = Transform2957;

Group2930.children[4] = Transform2956;

let ROUTE3049 = browser.currentScene.createNode("ROUTE");
ROUTE3049.fromField = "position_changed";
ROUTE3049.fromNode = "HudProximitySensor";
ROUTE3049.toField = "translation";
ROUTE3049.toNode = "HudXform";
Group2930.children[5] = ROUTE3049;

let ROUTE3050 = browser.currentScene.createNode("ROUTE");
ROUTE3050.fromField = "orientation_changed";
ROUTE3050.fromNode = "HudProximitySensor";
ROUTE3050.toField = "rotation";
ROUTE3050.toNode = "HudXform";
Group2930.children[6] = ROUTE3050;

browser.currentScene.children[22] = Group2930;

let Group3051 = browser.currentScene.createNode("Group");
Group3051.DEF = "BehaviorSynchronization";
let ROUTE3052 = browser.currentScene.createNode("ROUTE");
ROUTE3052.fromField = "touchTime";
ROUTE3052.fromNode = "Stand_Touch";
ROUTE3052.toField = "stopTime";
ROUTE3052.toNode = "PitchTimer";
Group3051.children = new MFNode();

Group3051.children[0] = ROUTE3052;

let ROUTE3053 = browser.currentScene.createNode("ROUTE");
ROUTE3053.fromField = "touchTime";
ROUTE3053.fromNode = "Stand_Touch";
ROUTE3053.toField = "stopTime";
ROUTE3053.toNode = "YawTimer";
Group3051.children[1] = ROUTE3053;

let ROUTE3054 = browser.currentScene.createNode("ROUTE");
ROUTE3054.fromField = "touchTime";
ROUTE3054.fromNode = "Stand_Touch";
ROUTE3054.toField = "stopTime";
ROUTE3054.toNode = "RollTimer";
Group3051.children[2] = ROUTE3054;

let ROUTE3055 = browser.currentScene.createNode("ROUTE");
ROUTE3055.fromField = "touchTime";
ROUTE3055.fromNode = "Stand_Touch";
ROUTE3055.toField = "stopTime";
ROUTE3055.toNode = "WalkTimer";
Group3051.children[3] = ROUTE3055;

let ROUTE3056 = browser.currentScene.createNode("ROUTE");
ROUTE3056.fromField = "touchTime";
ROUTE3056.fromNode = "Stand_Touch";
ROUTE3056.toField = "stopTime";
ROUTE3056.toNode = "RunTimer";
Group3051.children[4] = ROUTE3056;

let ROUTE3057 = browser.currentScene.createNode("ROUTE");
ROUTE3057.fromField = "touchTime";
ROUTE3057.fromNode = "Stand_Touch";
ROUTE3057.toField = "stopTime";
ROUTE3057.toNode = "JumpTimer";
Group3051.children[5] = ROUTE3057;

let ROUTE3058 = browser.currentScene.createNode("ROUTE");
ROUTE3058.fromField = "touchTime";
ROUTE3058.fromNode = "Stand_Touch";
ROUTE3058.toField = "stopTime";
ROUTE3058.toNode = "KickTimer";
Group3051.children[6] = ROUTE3058;

let ROUTE3059 = browser.currentScene.createNode("ROUTE");
ROUTE3059.fromField = "touchTime";
ROUTE3059.fromNode = "Stand_Touch";
ROUTE3059.toField = "stopTime";
ROUTE3059.toNode = "StopTimer";
Group3051.children[7] = ROUTE3059;

let ROUTE3060 = browser.currentScene.createNode("ROUTE");
ROUTE3060.fromField = "touchTime";
ROUTE3060.fromNode = "Stand_Touch";
ROUTE3060.toField = "startTime";
ROUTE3060.toNode = "StandTimer";
Group3051.children[8] = ROUTE3060;

let ROUTE3061 = browser.currentScene.createNode("ROUTE");
ROUTE3061.fromField = "touchTime";
ROUTE3061.fromNode = "Pitch_Touch";
ROUTE3061.toField = "stopTime";
ROUTE3061.toNode = "StandTimer";
Group3051.children[9] = ROUTE3061;

let ROUTE3062 = browser.currentScene.createNode("ROUTE");
ROUTE3062.fromField = "touchTime";
ROUTE3062.fromNode = "Pitch_Touch";
ROUTE3062.toField = "stopTime";
ROUTE3062.toNode = "YawTimer";
Group3051.children[10] = ROUTE3062;

let ROUTE3063 = browser.currentScene.createNode("ROUTE");
ROUTE3063.fromField = "touchTime";
ROUTE3063.fromNode = "Pitch_Touch";
ROUTE3063.toField = "stopTime";
ROUTE3063.toNode = "RollTimer";
Group3051.children[11] = ROUTE3063;

let ROUTE3064 = browser.currentScene.createNode("ROUTE");
ROUTE3064.fromField = "touchTime";
ROUTE3064.fromNode = "Pitch_Touch";
ROUTE3064.toField = "stopTime";
ROUTE3064.toNode = "WalkTimer";
Group3051.children[12] = ROUTE3064;

let ROUTE3065 = browser.currentScene.createNode("ROUTE");
ROUTE3065.fromField = "touchTime";
ROUTE3065.fromNode = "Pitch_Touch";
ROUTE3065.toField = "stopTime";
ROUTE3065.toNode = "RunTimer";
Group3051.children[13] = ROUTE3065;

let ROUTE3066 = browser.currentScene.createNode("ROUTE");
ROUTE3066.fromField = "touchTime";
ROUTE3066.fromNode = "Pitch_Touch";
ROUTE3066.toField = "stopTime";
ROUTE3066.toNode = "JumpTimer";
Group3051.children[14] = ROUTE3066;

let ROUTE3067 = browser.currentScene.createNode("ROUTE");
ROUTE3067.fromField = "touchTime";
ROUTE3067.fromNode = "Pitch_Touch";
ROUTE3067.toField = "stopTime";
ROUTE3067.toNode = "KickTimer";
Group3051.children[15] = ROUTE3067;

let ROUTE3068 = browser.currentScene.createNode("ROUTE");
ROUTE3068.fromField = "touchTime";
ROUTE3068.fromNode = "Pitch_Touch";
ROUTE3068.toField = "stopTime";
ROUTE3068.toNode = "StopTimer";
Group3051.children[16] = ROUTE3068;

let ROUTE3069 = browser.currentScene.createNode("ROUTE");
ROUTE3069.fromField = "touchTime";
ROUTE3069.fromNode = "Pitch_Touch";
ROUTE3069.toField = "startTime";
ROUTE3069.toNode = "PitchTimer";
Group3051.children[17] = ROUTE3069;

let ROUTE3070 = browser.currentScene.createNode("ROUTE");
ROUTE3070.fromField = "touchTime";
ROUTE3070.fromNode = "Yaw_Touch";
ROUTE3070.toField = "stopTime";
ROUTE3070.toNode = "StandTimer";
Group3051.children[18] = ROUTE3070;

let ROUTE3071 = browser.currentScene.createNode("ROUTE");
ROUTE3071.fromField = "touchTime";
ROUTE3071.fromNode = "Yaw_Touch";
ROUTE3071.toField = "stopTime";
ROUTE3071.toNode = "PitchTimer";
Group3051.children[19] = ROUTE3071;

let ROUTE3072 = browser.currentScene.createNode("ROUTE");
ROUTE3072.fromField = "touchTime";
ROUTE3072.fromNode = "Yaw_Touch";
ROUTE3072.toField = "stopTime";
ROUTE3072.toNode = "RollTimer";
Group3051.children[20] = ROUTE3072;

let ROUTE3073 = browser.currentScene.createNode("ROUTE");
ROUTE3073.fromField = "touchTime";
ROUTE3073.fromNode = "Yaw_Touch";
ROUTE3073.toField = "stopTime";
ROUTE3073.toNode = "WalkTimer";
Group3051.children[21] = ROUTE3073;

let ROUTE3074 = browser.currentScene.createNode("ROUTE");
ROUTE3074.fromField = "touchTime";
ROUTE3074.fromNode = "Yaw_Touch";
ROUTE3074.toField = "stopTime";
ROUTE3074.toNode = "RunTimer";
Group3051.children[22] = ROUTE3074;

let ROUTE3075 = browser.currentScene.createNode("ROUTE");
ROUTE3075.fromField = "touchTime";
ROUTE3075.fromNode = "Yaw_Touch";
ROUTE3075.toField = "stopTime";
ROUTE3075.toNode = "JumpTimer";
Group3051.children[23] = ROUTE3075;

let ROUTE3076 = browser.currentScene.createNode("ROUTE");
ROUTE3076.fromField = "touchTime";
ROUTE3076.fromNode = "Yaw_Touch";
ROUTE3076.toField = "stopTime";
ROUTE3076.toNode = "KickTimer";
Group3051.children[24] = ROUTE3076;

let ROUTE3077 = browser.currentScene.createNode("ROUTE");
ROUTE3077.fromField = "touchTime";
ROUTE3077.fromNode = "Yaw_Touch";
ROUTE3077.toField = "stopTime";
ROUTE3077.toNode = "StopTimer";
Group3051.children[25] = ROUTE3077;

let ROUTE3078 = browser.currentScene.createNode("ROUTE");
ROUTE3078.fromField = "touchTime";
ROUTE3078.fromNode = "Yaw_Touch";
ROUTE3078.toField = "startTime";
ROUTE3078.toNode = "YawTimer";
Group3051.children[26] = ROUTE3078;

let ROUTE3079 = browser.currentScene.createNode("ROUTE");
ROUTE3079.fromField = "touchTime";
ROUTE3079.fromNode = "Walk_Touch";
ROUTE3079.toField = "stopTime";
ROUTE3079.toNode = "StandTimer";
Group3051.children[27] = ROUTE3079;

let ROUTE3080 = browser.currentScene.createNode("ROUTE");
ROUTE3080.fromField = "touchTime";
ROUTE3080.fromNode = "Walk_Touch";
ROUTE3080.toField = "stopTime";
ROUTE3080.toNode = "PitchTimer";
Group3051.children[28] = ROUTE3080;

let ROUTE3081 = browser.currentScene.createNode("ROUTE");
ROUTE3081.fromField = "touchTime";
ROUTE3081.fromNode = "Walk_Touch";
ROUTE3081.toField = "stopTime";
ROUTE3081.toNode = "YawTimer";
Group3051.children[29] = ROUTE3081;

let ROUTE3082 = browser.currentScene.createNode("ROUTE");
ROUTE3082.fromField = "touchTime";
ROUTE3082.fromNode = "Walk_Touch";
ROUTE3082.toField = "stopTime";
ROUTE3082.toNode = "RollTimer";
Group3051.children[30] = ROUTE3082;

let ROUTE3083 = browser.currentScene.createNode("ROUTE");
ROUTE3083.fromField = "touchTime";
ROUTE3083.fromNode = "Walk_Touch";
ROUTE3083.toField = "stopTime";
ROUTE3083.toNode = "RunTimer";
Group3051.children[31] = ROUTE3083;

let ROUTE3084 = browser.currentScene.createNode("ROUTE");
ROUTE3084.fromField = "touchTime";
ROUTE3084.fromNode = "Walk_Touch";
ROUTE3084.toField = "stopTime";
ROUTE3084.toNode = "JumpTimer";
Group3051.children[32] = ROUTE3084;

let ROUTE3085 = browser.currentScene.createNode("ROUTE");
ROUTE3085.fromField = "touchTime";
ROUTE3085.fromNode = "Walk_Touch";
ROUTE3085.toField = "stopTime";
ROUTE3085.toNode = "KickTimer";
Group3051.children[33] = ROUTE3085;

let ROUTE3086 = browser.currentScene.createNode("ROUTE");
ROUTE3086.fromField = "touchTime";
ROUTE3086.fromNode = "Walk_Touch";
ROUTE3086.toField = "stopTime";
ROUTE3086.toNode = "StopTimer";
Group3051.children[34] = ROUTE3086;

let ROUTE3087 = browser.currentScene.createNode("ROUTE");
ROUTE3087.fromField = "touchTime";
ROUTE3087.fromNode = "Walk_Touch";
ROUTE3087.toField = "startTime";
ROUTE3087.toNode = "WalkTimer";
Group3051.children[35] = ROUTE3087;

let ROUTE3088 = browser.currentScene.createNode("ROUTE");
ROUTE3088.fromField = "touchTime";
ROUTE3088.fromNode = "Roll_Touch";
ROUTE3088.toField = "stopTime";
ROUTE3088.toNode = "StandTimer";
Group3051.children[36] = ROUTE3088;

let ROUTE3089 = browser.currentScene.createNode("ROUTE");
ROUTE3089.fromField = "touchTime";
ROUTE3089.fromNode = "Roll_Touch";
ROUTE3089.toField = "stopTime";
ROUTE3089.toNode = "PitchTimer";
Group3051.children[37] = ROUTE3089;

let ROUTE3090 = browser.currentScene.createNode("ROUTE");
ROUTE3090.fromField = "touchTime";
ROUTE3090.fromNode = "Roll_Touch";
ROUTE3090.toField = "stopTime";
ROUTE3090.toNode = "YawTimer";
Group3051.children[38] = ROUTE3090;

let ROUTE3091 = browser.currentScene.createNode("ROUTE");
ROUTE3091.fromField = "touchTime";
ROUTE3091.fromNode = "Roll_Touch";
ROUTE3091.toField = "stopTime";
ROUTE3091.toNode = "WalkTimer";
Group3051.children[39] = ROUTE3091;

let ROUTE3092 = browser.currentScene.createNode("ROUTE");
ROUTE3092.fromField = "touchTime";
ROUTE3092.fromNode = "Roll_Touch";
ROUTE3092.toField = "stopTime";
ROUTE3092.toNode = "RunTimer";
Group3051.children[40] = ROUTE3092;

let ROUTE3093 = browser.currentScene.createNode("ROUTE");
ROUTE3093.fromField = "touchTime";
ROUTE3093.fromNode = "Roll_Touch";
ROUTE3093.toField = "stopTime";
ROUTE3093.toNode = "JumpTimer";
Group3051.children[41] = ROUTE3093;

let ROUTE3094 = browser.currentScene.createNode("ROUTE");
ROUTE3094.fromField = "touchTime";
ROUTE3094.fromNode = "Roll_Touch";
ROUTE3094.toField = "stopTime";
ROUTE3094.toNode = "KickTimer";
Group3051.children[42] = ROUTE3094;

let ROUTE3095 = browser.currentScene.createNode("ROUTE");
ROUTE3095.fromField = "touchTime";
ROUTE3095.fromNode = "Roll_Touch";
ROUTE3095.toField = "stopTime";
ROUTE3095.toNode = "StopTimer";
Group3051.children[43] = ROUTE3095;

let ROUTE3096 = browser.currentScene.createNode("ROUTE");
ROUTE3096.fromField = "touchTime";
ROUTE3096.fromNode = "Roll_Touch";
ROUTE3096.toField = "startTime";
ROUTE3096.toNode = "RollTimer";
Group3051.children[44] = ROUTE3096;

let ROUTE3097 = browser.currentScene.createNode("ROUTE");
ROUTE3097.fromField = "touchTime";
ROUTE3097.fromNode = "Run_Touch";
ROUTE3097.toField = "stopTime";
ROUTE3097.toNode = "StandTimer";
Group3051.children[45] = ROUTE3097;

let ROUTE3098 = browser.currentScene.createNode("ROUTE");
ROUTE3098.fromField = "touchTime";
ROUTE3098.fromNode = "Run_Touch";
ROUTE3098.toField = "stopTime";
ROUTE3098.toNode = "PitchTimer";
Group3051.children[46] = ROUTE3098;

let ROUTE3099 = browser.currentScene.createNode("ROUTE");
ROUTE3099.fromField = "touchTime";
ROUTE3099.fromNode = "Run_Touch";
ROUTE3099.toField = "stopTime";
ROUTE3099.toNode = "YawTimer";
Group3051.children[47] = ROUTE3099;

let ROUTE3100 = browser.currentScene.createNode("ROUTE");
ROUTE3100.fromField = "touchTime";
ROUTE3100.fromNode = "Run_Touch";
ROUTE3100.toField = "stopTime";
ROUTE3100.toNode = "RollTimer";
Group3051.children[48] = ROUTE3100;

let ROUTE3101 = browser.currentScene.createNode("ROUTE");
ROUTE3101.fromField = "touchTime";
ROUTE3101.fromNode = "Run_Touch";
ROUTE3101.toField = "stopTime";
ROUTE3101.toNode = "WalkTimer";
Group3051.children[49] = ROUTE3101;

let ROUTE3102 = browser.currentScene.createNode("ROUTE");
ROUTE3102.fromField = "touchTime";
ROUTE3102.fromNode = "Run_Touch";
ROUTE3102.toField = "stopTime";
ROUTE3102.toNode = "JumpTimer";
Group3051.children[50] = ROUTE3102;

let ROUTE3103 = browser.currentScene.createNode("ROUTE");
ROUTE3103.fromField = "touchTime";
ROUTE3103.fromNode = "Run_Touch";
ROUTE3103.toField = "stopTime";
ROUTE3103.toNode = "KickTimer";
Group3051.children[51] = ROUTE3103;

let ROUTE3104 = browser.currentScene.createNode("ROUTE");
ROUTE3104.fromField = "touchTime";
ROUTE3104.fromNode = "Run_Touch";
ROUTE3104.toField = "stopTime";
ROUTE3104.toNode = "StopTimer";
Group3051.children[52] = ROUTE3104;

let ROUTE3105 = browser.currentScene.createNode("ROUTE");
ROUTE3105.fromField = "touchTime";
ROUTE3105.fromNode = "Run_Touch";
ROUTE3105.toField = "startTime";
ROUTE3105.toNode = "RunTimer";
Group3051.children[53] = ROUTE3105;

let ROUTE3106 = browser.currentScene.createNode("ROUTE");
ROUTE3106.fromField = "touchTime";
ROUTE3106.fromNode = "Jump_Touch";
ROUTE3106.toField = "stopTime";
ROUTE3106.toNode = "StandTimer";
Group3051.children[54] = ROUTE3106;

let ROUTE3107 = browser.currentScene.createNode("ROUTE");
ROUTE3107.fromField = "touchTime";
ROUTE3107.fromNode = "Jump_Touch";
ROUTE3107.toField = "stopTime";
ROUTE3107.toNode = "PitchTimer";
Group3051.children[55] = ROUTE3107;

let ROUTE3108 = browser.currentScene.createNode("ROUTE");
ROUTE3108.fromField = "touchTime";
ROUTE3108.fromNode = "Jump_Touch";
ROUTE3108.toField = "stopTime";
ROUTE3108.toNode = "YawTimer";
Group3051.children[56] = ROUTE3108;

let ROUTE3109 = browser.currentScene.createNode("ROUTE");
ROUTE3109.fromField = "touchTime";
ROUTE3109.fromNode = "Jump_Touch";
ROUTE3109.toField = "stopTime";
ROUTE3109.toNode = "RollTimer";
Group3051.children[57] = ROUTE3109;

let ROUTE3110 = browser.currentScene.createNode("ROUTE");
ROUTE3110.fromField = "touchTime";
ROUTE3110.fromNode = "Jump_Touch";
ROUTE3110.toField = "stopTime";
ROUTE3110.toNode = "WalkTimer";
Group3051.children[58] = ROUTE3110;

let ROUTE3111 = browser.currentScene.createNode("ROUTE");
ROUTE3111.fromField = "touchTime";
ROUTE3111.fromNode = "Jump_Touch";
ROUTE3111.toField = "stopTime";
ROUTE3111.toNode = "RunTimer";
Group3051.children[59] = ROUTE3111;

let ROUTE3112 = browser.currentScene.createNode("ROUTE");
ROUTE3112.fromField = "touchTime";
ROUTE3112.fromNode = "Jump_Touch";
ROUTE3112.toField = "stopTime";
ROUTE3112.toNode = "KickTimer";
Group3051.children[60] = ROUTE3112;

let ROUTE3113 = browser.currentScene.createNode("ROUTE");
ROUTE3113.fromField = "touchTime";
ROUTE3113.fromNode = "Jump_Touch";
ROUTE3113.toField = "stopTime";
ROUTE3113.toNode = "StopTimer";
Group3051.children[61] = ROUTE3113;

let ROUTE3114 = browser.currentScene.createNode("ROUTE");
ROUTE3114.fromField = "touchTime";
ROUTE3114.fromNode = "Jump_Touch";
ROUTE3114.toField = "startTime";
ROUTE3114.toNode = "JumpTimer";
Group3051.children[62] = ROUTE3114;

let ROUTE3115 = browser.currentScene.createNode("ROUTE");
ROUTE3115.fromField = "touchTime";
ROUTE3115.fromNode = "Kick_Touch";
ROUTE3115.toField = "stopTime";
ROUTE3115.toNode = "StandTimer";
Group3051.children[63] = ROUTE3115;

let ROUTE3116 = browser.currentScene.createNode("ROUTE");
ROUTE3116.fromField = "touchTime";
ROUTE3116.fromNode = "Kick_Touch";
ROUTE3116.toField = "stopTime";
ROUTE3116.toNode = "PitchTimer";
Group3051.children[64] = ROUTE3116;

let ROUTE3117 = browser.currentScene.createNode("ROUTE");
ROUTE3117.fromField = "touchTime";
ROUTE3117.fromNode = "Kick_Touch";
ROUTE3117.toField = "stopTime";
ROUTE3117.toNode = "YawTimer";
Group3051.children[65] = ROUTE3117;

let ROUTE3118 = browser.currentScene.createNode("ROUTE");
ROUTE3118.fromField = "touchTime";
ROUTE3118.fromNode = "Kick_Touch";
ROUTE3118.toField = "stopTime";
ROUTE3118.toNode = "RollTimer";
Group3051.children[66] = ROUTE3118;

let ROUTE3119 = browser.currentScene.createNode("ROUTE");
ROUTE3119.fromField = "touchTime";
ROUTE3119.fromNode = "Kick_Touch";
ROUTE3119.toField = "stopTime";
ROUTE3119.toNode = "WalkTimer";
Group3051.children[67] = ROUTE3119;

let ROUTE3120 = browser.currentScene.createNode("ROUTE");
ROUTE3120.fromField = "touchTime";
ROUTE3120.fromNode = "Kick_Touch";
ROUTE3120.toField = "stopTime";
ROUTE3120.toNode = "RunTimer";
Group3051.children[68] = ROUTE3120;

let ROUTE3121 = browser.currentScene.createNode("ROUTE");
ROUTE3121.fromField = "touchTime";
ROUTE3121.fromNode = "Kick_Touch";
ROUTE3121.toField = "stopTime";
ROUTE3121.toNode = "JumpTimer";
Group3051.children[69] = ROUTE3121;

let ROUTE3122 = browser.currentScene.createNode("ROUTE");
ROUTE3122.fromField = "touchTime";
ROUTE3122.fromNode = "Kick_Touch";
ROUTE3122.toField = "stopTime";
ROUTE3122.toNode = "StopTimer";
Group3051.children[70] = ROUTE3122;

let ROUTE3123 = browser.currentScene.createNode("ROUTE");
ROUTE3123.fromField = "touchTime";
ROUTE3123.fromNode = "Kick_Touch";
ROUTE3123.toField = "startTime";
ROUTE3123.toNode = "KickTimer";
Group3051.children[71] = ROUTE3123;

let ROUTE3124 = browser.currentScene.createNode("ROUTE");
ROUTE3124.fromField = "touchTime";
ROUTE3124.fromNode = "Stop_Touch";
ROUTE3124.toField = "stopTime";
ROUTE3124.toNode = "StandTimer";
Group3051.children[72] = ROUTE3124;

let ROUTE3125 = browser.currentScene.createNode("ROUTE");
ROUTE3125.fromField = "touchTime";
ROUTE3125.fromNode = "Stop_Touch";
ROUTE3125.toField = "stopTime";
ROUTE3125.toNode = "PitchTimer";
Group3051.children[73] = ROUTE3125;

let ROUTE3126 = browser.currentScene.createNode("ROUTE");
ROUTE3126.fromField = "touchTime";
ROUTE3126.fromNode = "Stop_Touch";
ROUTE3126.toField = "stopTime";
ROUTE3126.toNode = "YawTimer";
Group3051.children[74] = ROUTE3126;

let ROUTE3127 = browser.currentScene.createNode("ROUTE");
ROUTE3127.fromField = "touchTime";
ROUTE3127.fromNode = "Stop_Touch";
ROUTE3127.toField = "stopTime";
ROUTE3127.toNode = "RollTimer";
Group3051.children[75] = ROUTE3127;

let ROUTE3128 = browser.currentScene.createNode("ROUTE");
ROUTE3128.fromField = "touchTime";
ROUTE3128.fromNode = "Stop_Touch";
ROUTE3128.toField = "stopTime";
ROUTE3128.toNode = "WalkTimer";
Group3051.children[76] = ROUTE3128;

let ROUTE3129 = browser.currentScene.createNode("ROUTE");
ROUTE3129.fromField = "touchTime";
ROUTE3129.fromNode = "Stop_Touch";
ROUTE3129.toField = "stopTime";
ROUTE3129.toNode = "RunTimer";
Group3051.children[77] = ROUTE3129;

let ROUTE3130 = browser.currentScene.createNode("ROUTE");
ROUTE3130.fromField = "touchTime";
ROUTE3130.fromNode = "Stop_Touch";
ROUTE3130.toField = "stopTime";
ROUTE3130.toNode = "JumpTimer";
Group3051.children[78] = ROUTE3130;

let ROUTE3131 = browser.currentScene.createNode("ROUTE");
ROUTE3131.fromField = "touchTime";
ROUTE3131.fromNode = "Stop_Touch";
ROUTE3131.toField = "stopTime";
ROUTE3131.toNode = "KickTimer";
Group3051.children[79] = ROUTE3131;

let ROUTE3132 = browser.currentScene.createNode("ROUTE");
ROUTE3132.fromField = "touchTime";
ROUTE3132.fromNode = "Stop_Touch";
ROUTE3132.toField = "startTime";
ROUTE3132.toNode = "StopTimer";
Group3051.children[80] = ROUTE3132;

browser.currentScene.children[23] = Group3051;

