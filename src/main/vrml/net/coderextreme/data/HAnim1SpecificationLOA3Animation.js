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
meta3.content = "HAnim1SpecificationLOA3Animation.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnim1SpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.";
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
meta7.content = "19 February 2021";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "Image";
meta8.content = "HAnim1SpecificationLOA3MotionH3DViewer.png";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "Image";
meta9.content = "HAnim1SpecificationLOA3MotionInstantReality.png";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "Image";
meta10.content = "HAnim1SpecificationLOA3MotionOctagaVS.png";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "Image";
meta11.content = "HAnim1SpecificationLOA3MotionView3dscene.png";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "HAnim1SpecificationLOA3Illustrated.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "HAnim1SpecificationLOA3Invisible.x3d";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "Image";
meta15.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "Image";
meta16.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "Image";
meta17.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "reference";
meta20.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "creator";
meta21.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "translator";
meta22.content = "Don Brutzman and Joe Williams";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "generator";
meta23.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "reference";
meta24.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "reference";
meta25.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "reference";
meta26.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "generator";
meta27.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "identifier";
meta28.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Animation.x3d";
head1.meta[26] = meta28;

let meta29 = browser.currentScene.createNode("meta");
meta29.name = "license";
meta29.content = "../license.html";
head1.meta[27] = meta29;

head = head1;

let Background31 = browser.currentScene.createNode("Background");
Background31.skyColor = new MFColor(new float[0.3,0.3,0.3]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background31;

let NavigationInfo32 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo32;

let Group33 = browser.currentScene.createNode("Group");
Group33.DEF = "Original_WorldInfo";
let WorldInfo34 = browser.currentScene.createNode("WorldInfo");
WorldInfo34.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo34.title = "HANIM 200x Default Joint Centers, LOA3";
Group33.children = new MFNode();

Group33.children[0] = WorldInfo34;

browser.currentScene.children[2] = Group33;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint35.description = "Humanoid LOA 3 Front";
Viewpoint35.position = new SFVec3f(new float[0,0.4,4]);
browser.currentScene.children[3] = Viewpoint35;

let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint36.description = "Humanoid LOA 3 Front Close";
Viewpoint36.position = new SFVec3f(new float[0,0.8,2]);
browser.currentScene.children[4] = Viewpoint36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front Closer";
Viewpoint37.position = new SFVec3f(new float[0,1.2,1]);
browser.currentScene.children[5] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Front Face";
Viewpoint38.position = new SFVec3f(new float[0,1.63,1]);
browser.currentScene.children[6] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Right Side";
Viewpoint39.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint39.position = new SFVec3f(new float[2.6,0.8,0]);
browser.currentScene.children[7] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Right Side Close";
Viewpoint40.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint40.position = new SFVec3f(new float[1,0.8,0.5]);
browser.currentScene.children[8] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Left Side Close";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint41.position = new SFVec3f(new float[-1,0.8,0.5]);
browser.currentScene.children[9] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Left Side";
Viewpoint42.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint42.position = new SFVec3f(new float[-2.6,0.8,0]);
browser.currentScene.children[10] = Viewpoint42;

let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint43.description = "Humanoid LOA 3 Top";
Viewpoint43.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint43.position = new SFVec3f(new float[0,3.5,0]);
browser.currentScene.children[11] = Viewpoint43;

let HAnimHumanoid44 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid44.name = "humanoid";
HAnimHumanoid44.DEF = "hanim_humanoid";
HAnimHumanoid44.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"]);
HAnimHumanoid44.version = "1.0";
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "humanoid_root";
HAnimJoint45.DEF = "hanim_humanoid_root";
HAnimJoint45.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment46 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment46.name = "sacrum";
HAnimSegment46.DEF = "hanim_sacrum";
//<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>
let TouchSensor47 = browser.currentScene.createNode("TouchSensor");
TouchSensor47.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment46.children = new MFNode();

HAnimSegment46.children[0] = TouchSensor47;

let Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Shape49 = browser.currentScene.createNode("Shape");
Shape49.DEF = "HAnimJointShape";
let Sphere50 = browser.currentScene.createNode("Sphere");
Sphere50.radius = 0.006;
Shape49.geometry = Sphere50;

let Appearance51 = browser.currentScene.createNode("Appearance");
Appearance51.DEF = "HAnimJointAppearance";
let Material52 = browser.currentScene.createNode("Material");
Material52.diffuseColor = new SFColor(new float[1,0.5,0]);
Material52.transparency = 0.5;
Appearance51.material = Material52;

Shape49.appearance = Appearance51;

Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

HAnimSegment46.children[1] = Transform48;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
let Shape53 = browser.currentScene.createNode("Shape");
let LineSet54 = browser.currentScene.createNode("LineSet");
LineSet54.vertexCount = new MFInt32(new int[2]);
let Coordinate55 = browser.currentScene.createNode("Coordinate");
Coordinate55.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet54.coord = Coordinate55;

let ColorRGBA56 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA56.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA56.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet54.color = ColorRGBA56;

Shape53.geometry = LineSet54;

HAnimSegment46.children[2] = Shape53;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
let Shape57 = browser.currentScene.createNode("Shape");
let LineSet58 = browser.currentScene.createNode("LineSet");
LineSet58.vertexCount = new MFInt32(new int[2]);
let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet58.coord = Coordinate59;

let ColorRGBA60 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA60.USE = "HAnimSegmentLineColorRGBA";
LineSet58.color = ColorRGBA60;

Shape57.geometry = LineSet58;

HAnimSegment46.children[3] = Shape57;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "sacroiliac";
HAnimJoint61.DEF = "hanim_sacroiliac";
HAnimJoint61.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint61.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint61.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment62 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment62.name = "pelvis";
HAnimSegment62.DEF = "hanim_pelvis";
//<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>
let TouchSensor63 = browser.currentScene.createNode("TouchSensor");
TouchSensor63.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment62.children = new MFNode();

HAnimSegment62.children[0] = TouchSensor63;

let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape65 = browser.currentScene.createNode("Shape");
Shape65.USE = "HAnimJointShape";
Transform64.children = new MFNode();

Transform64.children[0] = Shape65;

HAnimSegment62.children[1] = Transform64;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
let Shape66 = browser.currentScene.createNode("Shape");
let LineSet67 = browser.currentScene.createNode("LineSet");
LineSet67.vertexCount = new MFInt32(new int[2]);
let Coordinate68 = browser.currentScene.createNode("Coordinate");
Coordinate68.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet67.coord = Coordinate68;

let ColorRGBA69 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA69.USE = "HAnimSegmentLineColorRGBA";
LineSet67.color = ColorRGBA69;

Shape66.geometry = LineSet67;

HAnimSegment62.children[2] = Shape66;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
let Shape70 = browser.currentScene.createNode("Shape");
let LineSet71 = browser.currentScene.createNode("LineSet");
LineSet71.vertexCount = new MFInt32(new int[2]);
let Coordinate72 = browser.currentScene.createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet71.coord = Coordinate72;

let ColorRGBA73 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA73.USE = "HAnimSegmentLineColorRGBA";
LineSet71.color = ColorRGBA73;

Shape70.geometry = LineSet71;

HAnimSegment62.children[3] = Shape70;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
let Shape74 = browser.currentScene.createNode("Shape");
let LineSet75 = browser.currentScene.createNode("LineSet");
LineSet75.vertexCount = new MFInt32(new int[2]);
let Coordinate76 = browser.currentScene.createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet75.coord = Coordinate76;

let ColorRGBA77 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA77.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA77.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet75.color = ColorRGBA77;

Shape74.geometry = LineSet75;

HAnimSegment62.children[4] = Shape74;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
let Shape78 = browser.currentScene.createNode("Shape");
let LineSet79 = browser.currentScene.createNode("LineSet");
LineSet79.vertexCount = new MFInt32(new int[2]);
let Coordinate80 = browser.currentScene.createNode("Coordinate");
Coordinate80.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet79.coord = Coordinate80;

let ColorRGBA81 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA81.USE = "HAnimSiteLineColorRGBA";
LineSet79.color = ColorRGBA81;

Shape78.geometry = LineSet79;

HAnimSegment62.children[5] = Shape78;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
let Shape82 = browser.currentScene.createNode("Shape");
let LineSet83 = browser.currentScene.createNode("LineSet");
LineSet83.vertexCount = new MFInt32(new int[2]);
let Coordinate84 = browser.currentScene.createNode("Coordinate");
Coordinate84.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet83.coord = Coordinate84;

let ColorRGBA85 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA85.USE = "HAnimSiteLineColorRGBA";
LineSet83.color = ColorRGBA85;

Shape82.geometry = LineSet83;

HAnimSegment62.children[6] = Shape82;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
let Shape86 = browser.currentScene.createNode("Shape");
let LineSet87 = browser.currentScene.createNode("LineSet");
LineSet87.vertexCount = new MFInt32(new int[2]);
let Coordinate88 = browser.currentScene.createNode("Coordinate");
Coordinate88.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet87.coord = Coordinate88;

let ColorRGBA89 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA89.USE = "HAnimSiteLineColorRGBA";
LineSet87.color = ColorRGBA89;

Shape86.geometry = LineSet87;

HAnimSegment62.children[7] = Shape86;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
let Shape90 = browser.currentScene.createNode("Shape");
let LineSet91 = browser.currentScene.createNode("LineSet");
LineSet91.vertexCount = new MFInt32(new int[2]);
let Coordinate92 = browser.currentScene.createNode("Coordinate");
Coordinate92.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet91.coord = Coordinate92;

let ColorRGBA93 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA93.USE = "HAnimSiteLineColorRGBA";
LineSet91.color = ColorRGBA93;

Shape90.geometry = LineSet91;

HAnimSegment62.children[8] = Shape90;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
let Shape94 = browser.currentScene.createNode("Shape");
let LineSet95 = browser.currentScene.createNode("LineSet");
LineSet95.vertexCount = new MFInt32(new int[2]);
let Coordinate96 = browser.currentScene.createNode("Coordinate");
Coordinate96.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet95.coord = Coordinate96;

let ColorRGBA97 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA97.USE = "HAnimSiteLineColorRGBA";
LineSet95.color = ColorRGBA97;

Shape94.geometry = LineSet95;

HAnimSegment62.children[9] = Shape94;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
let Shape98 = browser.currentScene.createNode("Shape");
let LineSet99 = browser.currentScene.createNode("LineSet");
LineSet99.vertexCount = new MFInt32(new int[2]);
let Coordinate100 = browser.currentScene.createNode("Coordinate");
Coordinate100.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet99.coord = Coordinate100;

let ColorRGBA101 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA101.USE = "HAnimSiteLineColorRGBA";
LineSet99.color = ColorRGBA101;

Shape98.geometry = LineSet99;

HAnimSegment62.children[10] = Shape98;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
let Shape102 = browser.currentScene.createNode("Shape");
let LineSet103 = browser.currentScene.createNode("LineSet");
LineSet103.vertexCount = new MFInt32(new int[2]);
let Coordinate104 = browser.currentScene.createNode("Coordinate");
Coordinate104.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet103.coord = Coordinate104;

let ColorRGBA105 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA105.USE = "HAnimSiteLineColorRGBA";
LineSet103.color = ColorRGBA105;

Shape102.geometry = LineSet103;

HAnimSegment62.children[11] = Shape102;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
let Shape106 = browser.currentScene.createNode("Shape");
let LineSet107 = browser.currentScene.createNode("LineSet");
LineSet107.vertexCount = new MFInt32(new int[2]);
let Coordinate108 = browser.currentScene.createNode("Coordinate");
Coordinate108.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet107.coord = Coordinate108;

let ColorRGBA109 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA109.USE = "HAnimSiteLineColorRGBA";
LineSet107.color = ColorRGBA109;

Shape106.geometry = LineSet107;

HAnimSegment62.children[12] = Shape106;

let HAnimSite110 = browser.currentScene.createNode("HAnimSite");
HAnimSite110.name = "r_iliocristale_pt";
HAnimSite110.DEF = "hanim_r_iliocristale_pt";
HAnimSite110.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
let TouchSensor111 = browser.currentScene.createNode("TouchSensor");
TouchSensor111.description = "HAnimSite r_iliocristale";
HAnimSite110.children = new MFNode();

HAnimSite110.children[0] = TouchSensor111;

let Shape112 = browser.currentScene.createNode("Shape");
Shape112.DEF = "HAnimSiteShape";
let IndexedFaceSet113 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet113.DEF = "DiamondIFS";
IndexedFaceSet113.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet113.creaseAngle = 0.5;
IndexedFaceSet113.solid = False;
let Coordinate114 = browser.currentScene.createNode("Coordinate");
Coordinate114.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet113.coord = Coordinate114;

Shape112.geometry = IndexedFaceSet113;

let Appearance115 = browser.currentScene.createNode("Appearance");
let Material116 = browser.currentScene.createNode("Material");
Material116.diffuseColor = new SFColor(new float[1,0,0]);
Appearance115.material = Material116;

Shape112.appearance = Appearance115;

HAnimSite110.children[1] = Shape112;

HAnimSegment62.children[13] = HAnimSite110;

let HAnimSite117 = browser.currentScene.createNode("HAnimSite");
HAnimSite117.name = "r_trochanterion_pt";
HAnimSite117.DEF = "hanim_r_trochanterion_pt";
HAnimSite117.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
let TouchSensor118 = browser.currentScene.createNode("TouchSensor");
TouchSensor118.description = "HAnimSite r_trochanterion";
HAnimSite117.children = new MFNode();

HAnimSite117.children[0] = TouchSensor118;

let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "HAnimSiteShape";
HAnimSite117.children[1] = Shape119;

HAnimSegment62.children[14] = HAnimSite117;

let HAnimSite120 = browser.currentScene.createNode("HAnimSite");
HAnimSite120.name = "l_iliocristale_pt";
HAnimSite120.DEF = "hanim_l_iliocristale_pt";
HAnimSite120.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
let TouchSensor121 = browser.currentScene.createNode("TouchSensor");
TouchSensor121.description = "HAnimSite l_iliocristale";
HAnimSite120.children = new MFNode();

HAnimSite120.children[0] = TouchSensor121;

let Shape122 = browser.currentScene.createNode("Shape");
Shape122.USE = "HAnimSiteShape";
HAnimSite120.children[1] = Shape122;

HAnimSegment62.children[15] = HAnimSite120;

let HAnimSite123 = browser.currentScene.createNode("HAnimSite");
HAnimSite123.name = "l_trochanterion_pt";
HAnimSite123.DEF = "hanim_l_trochanterion_pt";
HAnimSite123.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
let TouchSensor124 = browser.currentScene.createNode("TouchSensor");
TouchSensor124.description = "HAnimSite l_trochanterion";
HAnimSite123.children = new MFNode();

HAnimSite123.children[0] = TouchSensor124;

let Shape125 = browser.currentScene.createNode("Shape");
Shape125.USE = "HAnimSiteShape";
HAnimSite123.children[1] = Shape125;

HAnimSegment62.children[16] = HAnimSite123;

let HAnimSite126 = browser.currentScene.createNode("HAnimSite");
HAnimSite126.name = "r_asis_pt";
HAnimSite126.DEF = "hanim_r_asis_pt";
HAnimSite126.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
let TouchSensor127 = browser.currentScene.createNode("TouchSensor");
TouchSensor127.description = "HAnimSite r_asis";
HAnimSite126.children = new MFNode();

HAnimSite126.children[0] = TouchSensor127;

let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "HAnimSiteShape";
HAnimSite126.children[1] = Shape128;

HAnimSegment62.children[17] = HAnimSite126;

let HAnimSite129 = browser.currentScene.createNode("HAnimSite");
HAnimSite129.name = "l_asis_pt";
HAnimSite129.DEF = "hanim_l_asis_pt";
HAnimSite129.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
let TouchSensor130 = browser.currentScene.createNode("TouchSensor");
TouchSensor130.description = "HAnimSite l_asis";
HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = TouchSensor130;

let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "HAnimSiteShape";
HAnimSite129.children[1] = Shape131;

HAnimSegment62.children[18] = HAnimSite129;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.name = "r_psis_pt";
HAnimSite132.DEF = "hanim_r_psis_pt";
HAnimSite132.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
let TouchSensor133 = browser.currentScene.createNode("TouchSensor");
TouchSensor133.description = "HAnimSite r_psis";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

HAnimSegment62.children[19] = HAnimSite132;

let HAnimSite135 = browser.currentScene.createNode("HAnimSite");
HAnimSite135.name = "l_psis_pt";
HAnimSite135.DEF = "hanim_l_psis_pt";
HAnimSite135.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
let TouchSensor136 = browser.currentScene.createNode("TouchSensor");
TouchSensor136.description = "HAnimSite l_psis";
HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = TouchSensor136;

let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "HAnimSiteShape";
HAnimSite135.children[1] = Shape137;

HAnimSegment62.children[20] = HAnimSite135;

let HAnimSite138 = browser.currentScene.createNode("HAnimSite");
HAnimSite138.name = "crotch_pt";
HAnimSite138.DEF = "hanim_crotch_pt";
HAnimSite138.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
let TouchSensor139 = browser.currentScene.createNode("TouchSensor");
TouchSensor139.description = "HAnimSite crotch";
HAnimSite138.children = new MFNode();

HAnimSite138.children[0] = TouchSensor139;

let Shape140 = browser.currentScene.createNode("Shape");
Shape140.USE = "HAnimSiteShape";
HAnimSite138.children[1] = Shape140;

HAnimSegment62.children[21] = HAnimSite138;

HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimSegment62;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "l_hip";
HAnimJoint141.DEF = "hanim_l_hip";
HAnimJoint141.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.name = "l_thigh";
HAnimSegment142.DEF = "hanim_l_thigh";
//<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>
let TouchSensor143 = browser.currentScene.createNode("TouchSensor");
TouchSensor143.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment142.children = new MFNode();

HAnimSegment142.children[0] = TouchSensor143;

let Transform144 = browser.currentScene.createNode("Transform");
Transform144.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "HAnimJointShape";
Transform144.children = new MFNode();

Transform144.children[0] = Shape145;

HAnimSegment142.children[1] = Transform144;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
let Shape146 = browser.currentScene.createNode("Shape");
let LineSet147 = browser.currentScene.createNode("LineSet");
LineSet147.vertexCount = new MFInt32(new int[2]);
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet147.coord = Coordinate148;

let ColorRGBA149 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA149.USE = "HAnimSegmentLineColorRGBA";
LineSet147.color = ColorRGBA149;

Shape146.geometry = LineSet147;

HAnimSegment142.children[2] = Shape146;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
let Shape150 = browser.currentScene.createNode("Shape");
let LineSet151 = browser.currentScene.createNode("LineSet");
LineSet151.vertexCount = new MFInt32(new int[2]);
let Coordinate152 = browser.currentScene.createNode("Coordinate");
Coordinate152.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet151.coord = Coordinate152;

let ColorRGBA153 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA153.USE = "HAnimSiteLineColorRGBA";
LineSet151.color = ColorRGBA153;

Shape150.geometry = LineSet151;

HAnimSegment142.children[3] = Shape150;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
let Shape154 = browser.currentScene.createNode("Shape");
let LineSet155 = browser.currentScene.createNode("LineSet");
LineSet155.vertexCount = new MFInt32(new int[2]);
let Coordinate156 = browser.currentScene.createNode("Coordinate");
Coordinate156.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet155.coord = Coordinate156;

let ColorRGBA157 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA157.USE = "HAnimSiteLineColorRGBA";
LineSet155.color = ColorRGBA157;

Shape154.geometry = LineSet155;

HAnimSegment142.children[4] = Shape154;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
let Shape158 = browser.currentScene.createNode("Shape");
let LineSet159 = browser.currentScene.createNode("LineSet");
LineSet159.vertexCount = new MFInt32(new int[2]);
let Coordinate160 = browser.currentScene.createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet159.coord = Coordinate160;

let ColorRGBA161 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA161.USE = "HAnimSiteLineColorRGBA";
LineSet159.color = ColorRGBA161;

Shape158.geometry = LineSet159;

HAnimSegment142.children[5] = Shape158;

let HAnimSite162 = browser.currentScene.createNode("HAnimSite");
HAnimSite162.name = "l_knee_crease_pt";
HAnimSite162.DEF = "hanim_l_knee_crease_pt";
HAnimSite162.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
let TouchSensor163 = browser.currentScene.createNode("TouchSensor");
TouchSensor163.description = "HAnimSite l_knee_crease";
HAnimSite162.children = new MFNode();

HAnimSite162.children[0] = TouchSensor163;

let Shape164 = browser.currentScene.createNode("Shape");
Shape164.USE = "HAnimSiteShape";
HAnimSite162.children[1] = Shape164;

HAnimSegment142.children[6] = HAnimSite162;

let HAnimSite165 = browser.currentScene.createNode("HAnimSite");
HAnimSite165.name = "l_femoral_lateral_epicn_pt";
HAnimSite165.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite165.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
let TouchSensor166 = browser.currentScene.createNode("TouchSensor");
TouchSensor166.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite165.children = new MFNode();

HAnimSite165.children[0] = TouchSensor166;

let Shape167 = browser.currentScene.createNode("Shape");
Shape167.USE = "HAnimSiteShape";
HAnimSite165.children[1] = Shape167;

HAnimSegment142.children[7] = HAnimSite165;

let HAnimSite168 = browser.currentScene.createNode("HAnimSite");
HAnimSite168.name = "l_femoral_medial_epicn_pt";
HAnimSite168.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite168.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
let TouchSensor169 = browser.currentScene.createNode("TouchSensor");
TouchSensor169.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite168.children = new MFNode();

HAnimSite168.children[0] = TouchSensor169;

let Shape170 = browser.currentScene.createNode("Shape");
Shape170.USE = "HAnimSiteShape";
HAnimSite168.children[1] = Shape170;

HAnimSegment142.children[8] = HAnimSite168;

HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.name = "l_knee";
HAnimJoint171.DEF = "hanim_l_knee";
HAnimJoint171.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint171.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint171.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment172 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment172.name = "l_calf";
HAnimSegment172.DEF = "hanim_l_calf";
//<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>
let TouchSensor173 = browser.currentScene.createNode("TouchSensor");
TouchSensor173.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment172.children = new MFNode();

HAnimSegment172.children[0] = TouchSensor173;

let Transform174 = browser.currentScene.createNode("Transform");
Transform174.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Shape175 = browser.currentScene.createNode("Shape");
Shape175.USE = "HAnimJointShape";
Transform174.children = new MFNode();

Transform174.children[0] = Shape175;

HAnimSegment172.children[1] = Transform174;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
let Shape176 = browser.currentScene.createNode("Shape");
let LineSet177 = browser.currentScene.createNode("LineSet");
LineSet177.vertexCount = new MFInt32(new int[2]);
let Coordinate178 = browser.currentScene.createNode("Coordinate");
Coordinate178.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet177.coord = Coordinate178;

let ColorRGBA179 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA179.USE = "HAnimSegmentLineColorRGBA";
LineSet177.color = ColorRGBA179;

Shape176.geometry = LineSet177;

HAnimSegment172.children[2] = Shape176;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimSegment172;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.name = "l_ankle";
HAnimJoint180.DEF = "hanim_l_ankle";
HAnimJoint180.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint180.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.name = "l_hindfoot";
HAnimSegment181.DEF = "hanim_l_hindfoot";
//<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>
let TouchSensor182 = browser.currentScene.createNode("TouchSensor");
TouchSensor182.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment181.children = new MFNode();

HAnimSegment181.children[0] = TouchSensor182;

let Transform183 = browser.currentScene.createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimJointShape";
Transform183.children = new MFNode();

Transform183.children[0] = Shape184;

HAnimSegment181.children[1] = Transform183;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
let Shape185 = browser.currentScene.createNode("Shape");
let LineSet186 = browser.currentScene.createNode("LineSet");
LineSet186.vertexCount = new MFInt32(new int[2]);
let Coordinate187 = browser.currentScene.createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet186.coord = Coordinate187;

let ColorRGBA188 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
LineSet186.color = ColorRGBA188;

Shape185.geometry = LineSet186;

HAnimSegment181.children[2] = Shape185;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
let Shape189 = browser.currentScene.createNode("Shape");
let LineSet190 = browser.currentScene.createNode("LineSet");
LineSet190.vertexCount = new MFInt32(new int[2]);
let Coordinate191 = browser.currentScene.createNode("Coordinate");
Coordinate191.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet190.coord = Coordinate191;

let ColorRGBA192 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA192.USE = "HAnimSiteLineColorRGBA";
LineSet190.color = ColorRGBA192;

Shape189.geometry = LineSet190;

HAnimSegment181.children[3] = Shape189;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
let Shape193 = browser.currentScene.createNode("Shape");
let LineSet194 = browser.currentScene.createNode("LineSet");
LineSet194.vertexCount = new MFInt32(new int[2]);
let Coordinate195 = browser.currentScene.createNode("Coordinate");
Coordinate195.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet194.coord = Coordinate195;

let ColorRGBA196 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSiteLineColorRGBA";
LineSet194.color = ColorRGBA196;

Shape193.geometry = LineSet194;

HAnimSegment181.children[4] = Shape193;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
let Shape197 = browser.currentScene.createNode("Shape");
let LineSet198 = browser.currentScene.createNode("LineSet");
LineSet198.vertexCount = new MFInt32(new int[2]);
let Coordinate199 = browser.currentScene.createNode("Coordinate");
Coordinate199.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet198.coord = Coordinate199;

let ColorRGBA200 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA200.USE = "HAnimSiteLineColorRGBA";
LineSet198.color = ColorRGBA200;

Shape197.geometry = LineSet198;

HAnimSegment181.children[5] = Shape197;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
let Shape201 = browser.currentScene.createNode("Shape");
let LineSet202 = browser.currentScene.createNode("LineSet");
LineSet202.vertexCount = new MFInt32(new int[2]);
let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet202.coord = Coordinate203;

let ColorRGBA204 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA204.USE = "HAnimSiteLineColorRGBA";
LineSet202.color = ColorRGBA204;

Shape201.geometry = LineSet202;

HAnimSegment181.children[6] = Shape201;

let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.name = "l_lateral_malleolus_pt";
HAnimSite205.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite205.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
let TouchSensor206 = browser.currentScene.createNode("TouchSensor");
TouchSensor206.description = "HAnimSite l_lateral_malleolus";
HAnimSite205.children = new MFNode();

HAnimSite205.children[0] = TouchSensor206;

let Shape207 = browser.currentScene.createNode("Shape");
Shape207.USE = "HAnimSiteShape";
HAnimSite205.children[1] = Shape207;

HAnimSegment181.children[7] = HAnimSite205;

let HAnimSite208 = browser.currentScene.createNode("HAnimSite");
HAnimSite208.name = "l_medial_malleolus_pt";
HAnimSite208.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite208.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
let TouchSensor209 = browser.currentScene.createNode("TouchSensor");
TouchSensor209.description = "HAnimSite l_medial_malleolus";
HAnimSite208.children = new MFNode();

HAnimSite208.children[0] = TouchSensor209;

let Shape210 = browser.currentScene.createNode("Shape");
Shape210.USE = "HAnimSiteShape";
HAnimSite208.children[1] = Shape210;

HAnimSegment181.children[8] = HAnimSite208;

let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.name = "l_sphyrion_pt";
HAnimSite211.DEF = "hanim_l_sphyrion_pt";
HAnimSite211.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
let TouchSensor212 = browser.currentScene.createNode("TouchSensor");
TouchSensor212.description = "HAnimSite l_sphyrion";
HAnimSite211.children = new MFNode();

HAnimSite211.children[0] = TouchSensor212;

let Shape213 = browser.currentScene.createNode("Shape");
Shape213.USE = "HAnimSiteShape";
HAnimSite211.children[1] = Shape213;

HAnimSegment181.children[9] = HAnimSite211;

let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.name = "l_calcaneous_post_pt";
HAnimSite214.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite214.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
let TouchSensor215 = browser.currentScene.createNode("TouchSensor");
TouchSensor215.description = "HAnimSite l_calcaneous_post";
HAnimSite214.children = new MFNode();

HAnimSite214.children[0] = TouchSensor215;

let Shape216 = browser.currentScene.createNode("Shape");
Shape216.USE = "HAnimSiteShape";
HAnimSite214.children[1] = Shape216;

HAnimSegment181.children[10] = HAnimSite214;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.name = "l_subtalar";
HAnimJoint217.DEF = "hanim_l_subtalar";
HAnimJoint217.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint217.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint217.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment218 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment218.name = "l_midproximal";
HAnimSegment218.DEF = "hanim_l_midproximal";
//<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>
let TouchSensor219 = browser.currentScene.createNode("TouchSensor");
TouchSensor219.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment218.children = new MFNode();

HAnimSegment218.children[0] = TouchSensor219;

let Transform220 = browser.currentScene.createNode("Transform");
Transform220.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let Shape221 = browser.currentScene.createNode("Shape");
Shape221.USE = "HAnimJointShape";
Transform220.children = new MFNode();

Transform220.children[0] = Shape221;

HAnimSegment218.children[1] = Transform220;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
let Shape222 = browser.currentScene.createNode("Shape");
let LineSet223 = browser.currentScene.createNode("LineSet");
LineSet223.vertexCount = new MFInt32(new int[2]);
let Coordinate224 = browser.currentScene.createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet223.coord = Coordinate224;

let ColorRGBA225 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
LineSet223.color = ColorRGBA225;

Shape222.geometry = LineSet223;

HAnimSegment218.children[2] = Shape222;

HAnimJoint217.children = new MFNode();

HAnimJoint217.children[0] = HAnimSegment218;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.name = "l_midtarsal";
HAnimJoint226.DEF = "hanim_l_midtarsal";
HAnimJoint226.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint226.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment227.name = "l_middistal";
HAnimSegment227.DEF = "hanim_l_middistal";
//<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>
let TouchSensor228 = browser.currentScene.createNode("TouchSensor");
TouchSensor228.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment227.children = new MFNode();

HAnimSegment227.children[0] = TouchSensor228;

let Transform229 = browser.currentScene.createNode("Transform");
Transform229.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let Shape230 = browser.currentScene.createNode("Shape");
Shape230.USE = "HAnimJointShape";
Transform229.children = new MFNode();

Transform229.children[0] = Shape230;

HAnimSegment227.children[1] = Transform229;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
let Shape231 = browser.currentScene.createNode("Shape");
let LineSet232 = browser.currentScene.createNode("LineSet");
LineSet232.vertexCount = new MFInt32(new int[2]);
let Coordinate233 = browser.currentScene.createNode("Coordinate");
Coordinate233.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet232.coord = Coordinate233;

let ColorRGBA234 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA234.USE = "HAnimSegmentLineColorRGBA";
LineSet232.color = ColorRGBA234;

Shape231.geometry = LineSet232;

HAnimSegment227.children[2] = Shape231;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
let Shape235 = browser.currentScene.createNode("Shape");
let LineSet236 = browser.currentScene.createNode("LineSet");
LineSet236.vertexCount = new MFInt32(new int[2]);
let Coordinate237 = browser.currentScene.createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet236.coord = Coordinate237;

let ColorRGBA238 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA238.USE = "HAnimSiteLineColorRGBA";
LineSet236.color = ColorRGBA238;

Shape235.geometry = LineSet236;

HAnimSegment227.children[3] = Shape235;

let HAnimSite239 = browser.currentScene.createNode("HAnimSite");
HAnimSite239.name = "l_metatarsal_pha1_pt";
HAnimSite239.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite239.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
let TouchSensor240 = browser.currentScene.createNode("TouchSensor");
TouchSensor240.description = "HAnimSite l_metatarsal_pha1";
HAnimSite239.children = new MFNode();

HAnimSite239.children[0] = TouchSensor240;

let Shape241 = browser.currentScene.createNode("Shape");
Shape241.USE = "HAnimSiteShape";
HAnimSite239.children[1] = Shape241;

HAnimSegment227.children[4] = HAnimSite239;

HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.name = "l_metatarsal";
HAnimJoint242.DEF = "hanim_l_metatarsal";
HAnimJoint242.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint242.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint242.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment243 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment243.name = "l_forefoot";
HAnimSegment243.DEF = "hanim_l_forefoot";
//<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>
let TouchSensor244 = browser.currentScene.createNode("TouchSensor");
TouchSensor244.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment243.children = new MFNode();

HAnimSegment243.children[0] = TouchSensor244;

let Transform245 = browser.currentScene.createNode("Transform");
Transform245.translation = new SFVec3f(new float[0.1086,0,0.0762]);
let Shape246 = browser.currentScene.createNode("Shape");
Shape246.USE = "HAnimJointShape";
Transform245.children = new MFNode();

Transform245.children[0] = Shape246;

HAnimSegment243.children[1] = Transform245;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
let Shape247 = browser.currentScene.createNode("Shape");
let LineSet248 = browser.currentScene.createNode("LineSet");
LineSet248.vertexCount = new MFInt32(new int[2]);
let Coordinate249 = browser.currentScene.createNode("Coordinate");
Coordinate249.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet248.coord = Coordinate249;

let ColorRGBA250 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA250.USE = "HAnimSiteLineColorRGBA";
LineSet248.color = ColorRGBA250;

Shape247.geometry = LineSet248;

HAnimSegment243.children[2] = Shape247;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
let Shape251 = browser.currentScene.createNode("Shape");
let LineSet252 = browser.currentScene.createNode("LineSet");
LineSet252.vertexCount = new MFInt32(new int[2]);
let Coordinate253 = browser.currentScene.createNode("Coordinate");
Coordinate253.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet252.coord = Coordinate253;

let ColorRGBA254 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA254.USE = "HAnimSiteLineColorRGBA";
LineSet252.color = ColorRGBA254;

Shape251.geometry = LineSet252;

HAnimSegment243.children[3] = Shape251;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
let Shape255 = browser.currentScene.createNode("Shape");
let LineSet256 = browser.currentScene.createNode("LineSet");
LineSet256.vertexCount = new MFInt32(new int[2]);
let Coordinate257 = browser.currentScene.createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet256.coord = Coordinate257;

let ColorRGBA258 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA258.USE = "HAnimSiteLineColorRGBA";
LineSet256.color = ColorRGBA258;

Shape255.geometry = LineSet256;

HAnimSegment243.children[4] = Shape255;

let HAnimSite259 = browser.currentScene.createNode("HAnimSite");
HAnimSite259.name = "l_forefoot_tip";
HAnimSite259.DEF = "hanim_l_forefoot_tip";
HAnimSite259.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
let TouchSensor260 = browser.currentScene.createNode("TouchSensor");
TouchSensor260.description = "HAnimSite l_forefoot_tip";
HAnimSite259.children = new MFNode();

HAnimSite259.children[0] = TouchSensor260;

let Shape261 = browser.currentScene.createNode("Shape");
Shape261.USE = "HAnimSiteShape";
HAnimSite259.children[1] = Shape261;

HAnimSegment243.children[5] = HAnimSite259;

let HAnimSite262 = browser.currentScene.createNode("HAnimSite");
HAnimSite262.name = "l_metatarsal_pha5_pt";
HAnimSite262.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite262.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
let TouchSensor263 = browser.currentScene.createNode("TouchSensor");
TouchSensor263.description = "HAnimSite l_metatarsal_pha5";
HAnimSite262.children = new MFNode();

HAnimSite262.children[0] = TouchSensor263;

let Shape264 = browser.currentScene.createNode("Shape");
Shape264.USE = "HAnimSiteShape";
HAnimSite262.children[1] = Shape264;

HAnimSegment243.children[6] = HAnimSite262;

let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.name = "l_digit2_pt";
HAnimSite265.DEF = "hanim_l_digit2_pt";
HAnimSite265.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
let TouchSensor266 = browser.currentScene.createNode("TouchSensor");
TouchSensor266.description = "HAnimSite l_digit2";
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = TouchSensor266;

let Shape267 = browser.currentScene.createNode("Shape");
Shape267.USE = "HAnimSiteShape";
HAnimSite265.children[1] = Shape267;

HAnimSegment243.children[7] = HAnimSite265;

HAnimJoint242.children = new MFNode();

HAnimJoint242.children[0] = HAnimSegment243;

HAnimJoint226.children[1] = HAnimJoint242;

HAnimJoint217.children[1] = HAnimJoint226;

HAnimJoint180.children[1] = HAnimJoint217;

HAnimJoint171.children[1] = HAnimJoint180;

HAnimJoint141.children[1] = HAnimJoint171;

HAnimJoint61.children[1] = HAnimJoint141;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.name = "r_hip";
HAnimJoint268.DEF = "hanim_r_hip";
HAnimJoint268.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint268.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment269.name = "r_thigh";
HAnimSegment269.DEF = "hanim_r_thigh";
//<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>
let TouchSensor270 = browser.currentScene.createNode("TouchSensor");
TouchSensor270.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment269.children = new MFNode();

HAnimSegment269.children[0] = TouchSensor270;

let Transform271 = browser.currentScene.createNode("Transform");
Transform271.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
let Shape272 = browser.currentScene.createNode("Shape");
Shape272.USE = "HAnimJointShape";
Transform271.children = new MFNode();

Transform271.children[0] = Shape272;

HAnimSegment269.children[1] = Transform271;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
let Shape273 = browser.currentScene.createNode("Shape");
let LineSet274 = browser.currentScene.createNode("LineSet");
LineSet274.vertexCount = new MFInt32(new int[2]);
let Coordinate275 = browser.currentScene.createNode("Coordinate");
Coordinate275.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet274.coord = Coordinate275;

let ColorRGBA276 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA276.USE = "HAnimSegmentLineColorRGBA";
LineSet274.color = ColorRGBA276;

Shape273.geometry = LineSet274;

HAnimSegment269.children[2] = Shape273;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
let Shape277 = browser.currentScene.createNode("Shape");
let LineSet278 = browser.currentScene.createNode("LineSet");
LineSet278.vertexCount = new MFInt32(new int[2]);
let Coordinate279 = browser.currentScene.createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet278.coord = Coordinate279;

let ColorRGBA280 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA280.USE = "HAnimSiteLineColorRGBA";
LineSet278.color = ColorRGBA280;

Shape277.geometry = LineSet278;

HAnimSegment269.children[3] = Shape277;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
let Shape281 = browser.currentScene.createNode("Shape");
let LineSet282 = browser.currentScene.createNode("LineSet");
LineSet282.vertexCount = new MFInt32(new int[2]);
let Coordinate283 = browser.currentScene.createNode("Coordinate");
Coordinate283.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet282.coord = Coordinate283;

let ColorRGBA284 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA284.USE = "HAnimSiteLineColorRGBA";
LineSet282.color = ColorRGBA284;

Shape281.geometry = LineSet282;

HAnimSegment269.children[4] = Shape281;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
let Shape285 = browser.currentScene.createNode("Shape");
let LineSet286 = browser.currentScene.createNode("LineSet");
LineSet286.vertexCount = new MFInt32(new int[2]);
let Coordinate287 = browser.currentScene.createNode("Coordinate");
Coordinate287.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet286.coord = Coordinate287;

let ColorRGBA288 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSiteLineColorRGBA";
LineSet286.color = ColorRGBA288;

Shape285.geometry = LineSet286;

HAnimSegment269.children[5] = Shape285;

let HAnimSite289 = browser.currentScene.createNode("HAnimSite");
HAnimSite289.name = "r_knee_crease_pt";
HAnimSite289.DEF = "hanim_r_knee_crease_pt";
HAnimSite289.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
let TouchSensor290 = browser.currentScene.createNode("TouchSensor");
TouchSensor290.description = "HAnimSite r_knee_crease";
HAnimSite289.children = new MFNode();

HAnimSite289.children[0] = TouchSensor290;

let Shape291 = browser.currentScene.createNode("Shape");
Shape291.USE = "HAnimSiteShape";
HAnimSite289.children[1] = Shape291;

HAnimSegment269.children[6] = HAnimSite289;

let HAnimSite292 = browser.currentScene.createNode("HAnimSite");
HAnimSite292.name = "r_femoral_lateral_epicn_pt";
HAnimSite292.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite292.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
let TouchSensor293 = browser.currentScene.createNode("TouchSensor");
TouchSensor293.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite292.children = new MFNode();

HAnimSite292.children[0] = TouchSensor293;

let Shape294 = browser.currentScene.createNode("Shape");
Shape294.USE = "HAnimSiteShape";
HAnimSite292.children[1] = Shape294;

HAnimSegment269.children[7] = HAnimSite292;

let HAnimSite295 = browser.currentScene.createNode("HAnimSite");
HAnimSite295.name = "r_femoral_medial_epicn_pt";
HAnimSite295.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite295.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
let TouchSensor296 = browser.currentScene.createNode("TouchSensor");
TouchSensor296.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite295.children = new MFNode();

HAnimSite295.children[0] = TouchSensor296;

let Shape297 = browser.currentScene.createNode("Shape");
Shape297.USE = "HAnimSiteShape";
HAnimSite295.children[1] = Shape297;

HAnimSegment269.children[8] = HAnimSite295;

HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.name = "r_knee";
HAnimJoint298.DEF = "hanim_r_knee";
HAnimJoint298.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint298.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint298.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.name = "r_calf";
HAnimSegment299.DEF = "hanim_r_calf";
//<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>
let TouchSensor300 = browser.currentScene.createNode("TouchSensor");
TouchSensor300.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment299.children = new MFNode();

HAnimSegment299.children[0] = TouchSensor300;

let Transform301 = browser.currentScene.createNode("Transform");
Transform301.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
let Shape302 = browser.currentScene.createNode("Shape");
Shape302.USE = "HAnimJointShape";
Transform301.children = new MFNode();

Transform301.children[0] = Shape302;

HAnimSegment299.children[1] = Transform301;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
let Shape303 = browser.currentScene.createNode("Shape");
let LineSet304 = browser.currentScene.createNode("LineSet");
LineSet304.vertexCount = new MFInt32(new int[2]);
let Coordinate305 = browser.currentScene.createNode("Coordinate");
Coordinate305.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet304.coord = Coordinate305;

let ColorRGBA306 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA";
LineSet304.color = ColorRGBA306;

Shape303.geometry = LineSet304;

HAnimSegment299.children[2] = Shape303;

HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.name = "r_ankle";
HAnimJoint307.DEF = "hanim_r_ankle";
HAnimJoint307.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint307.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint307.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.name = "r_hindfoot";
HAnimSegment308.DEF = "hanim_r_hindfoot";
//<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>
let TouchSensor309 = browser.currentScene.createNode("TouchSensor");
TouchSensor309.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment308.children = new MFNode();

HAnimSegment308.children[0] = TouchSensor309;

let Transform310 = browser.currentScene.createNode("Transform");
Transform310.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
let Shape311 = browser.currentScene.createNode("Shape");
Shape311.USE = "HAnimJointShape";
Transform310.children = new MFNode();

Transform310.children[0] = Shape311;

HAnimSegment308.children[1] = Transform310;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
let Shape312 = browser.currentScene.createNode("Shape");
let LineSet313 = browser.currentScene.createNode("LineSet");
LineSet313.vertexCount = new MFInt32(new int[2]);
let Coordinate314 = browser.currentScene.createNode("Coordinate");
Coordinate314.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet313.coord = Coordinate314;

let ColorRGBA315 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA";
LineSet313.color = ColorRGBA315;

Shape312.geometry = LineSet313;

HAnimSegment308.children[2] = Shape312;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
let Shape316 = browser.currentScene.createNode("Shape");
let LineSet317 = browser.currentScene.createNode("LineSet");
LineSet317.vertexCount = new MFInt32(new int[2]);
let Coordinate318 = browser.currentScene.createNode("Coordinate");
Coordinate318.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet317.coord = Coordinate318;

let ColorRGBA319 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA319.USE = "HAnimSiteLineColorRGBA";
LineSet317.color = ColorRGBA319;

Shape316.geometry = LineSet317;

HAnimSegment308.children[3] = Shape316;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
let Shape320 = browser.currentScene.createNode("Shape");
let LineSet321 = browser.currentScene.createNode("LineSet");
LineSet321.vertexCount = new MFInt32(new int[2]);
let Coordinate322 = browser.currentScene.createNode("Coordinate");
Coordinate322.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet321.coord = Coordinate322;

let ColorRGBA323 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSiteLineColorRGBA";
LineSet321.color = ColorRGBA323;

Shape320.geometry = LineSet321;

HAnimSegment308.children[4] = Shape320;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
let Shape324 = browser.currentScene.createNode("Shape");
let LineSet325 = browser.currentScene.createNode("LineSet");
LineSet325.vertexCount = new MFInt32(new int[2]);
let Coordinate326 = browser.currentScene.createNode("Coordinate");
Coordinate326.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet325.coord = Coordinate326;

let ColorRGBA327 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSiteLineColorRGBA";
LineSet325.color = ColorRGBA327;

Shape324.geometry = LineSet325;

HAnimSegment308.children[5] = Shape324;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
let Shape328 = browser.currentScene.createNode("Shape");
let LineSet329 = browser.currentScene.createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[2]);
let Coordinate330 = browser.currentScene.createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet329.coord = Coordinate330;

let ColorRGBA331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSiteLineColorRGBA";
LineSet329.color = ColorRGBA331;

Shape328.geometry = LineSet329;

HAnimSegment308.children[6] = Shape328;

let HAnimSite332 = browser.currentScene.createNode("HAnimSite");
HAnimSite332.name = "r_lateral_malleolus_pt";
HAnimSite332.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite332.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
let TouchSensor333 = browser.currentScene.createNode("TouchSensor");
TouchSensor333.description = "HAnimSite r_lateral_malleolus";
HAnimSite332.children = new MFNode();

HAnimSite332.children[0] = TouchSensor333;

let Shape334 = browser.currentScene.createNode("Shape");
Shape334.USE = "HAnimSiteShape";
HAnimSite332.children[1] = Shape334;

HAnimSegment308.children[7] = HAnimSite332;

let HAnimSite335 = browser.currentScene.createNode("HAnimSite");
HAnimSite335.name = "r_medial_malleolus_pt";
HAnimSite335.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite335.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
let TouchSensor336 = browser.currentScene.createNode("TouchSensor");
TouchSensor336.description = "HAnimSite r_medial_malleolus";
HAnimSite335.children = new MFNode();

HAnimSite335.children[0] = TouchSensor336;

let Shape337 = browser.currentScene.createNode("Shape");
Shape337.USE = "HAnimSiteShape";
HAnimSite335.children[1] = Shape337;

HAnimSegment308.children[8] = HAnimSite335;

let HAnimSite338 = browser.currentScene.createNode("HAnimSite");
HAnimSite338.name = "r_sphyrion_pt";
HAnimSite338.DEF = "hanim_r_sphyrion_pt";
HAnimSite338.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
let TouchSensor339 = browser.currentScene.createNode("TouchSensor");
TouchSensor339.description = "HAnimSite r_sphyrion";
HAnimSite338.children = new MFNode();

HAnimSite338.children[0] = TouchSensor339;

let Shape340 = browser.currentScene.createNode("Shape");
Shape340.USE = "HAnimSiteShape";
HAnimSite338.children[1] = Shape340;

HAnimSegment308.children[9] = HAnimSite338;

let HAnimSite341 = browser.currentScene.createNode("HAnimSite");
HAnimSite341.name = "r_calcaneous_post_pt";
HAnimSite341.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite341.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
let TouchSensor342 = browser.currentScene.createNode("TouchSensor");
TouchSensor342.description = "HAnimSite r_calcaneous_post";
HAnimSite341.children = new MFNode();

HAnimSite341.children[0] = TouchSensor342;

let Shape343 = browser.currentScene.createNode("Shape");
Shape343.USE = "HAnimSiteShape";
HAnimSite341.children[1] = Shape343;

HAnimSegment308.children[10] = HAnimSite341;

HAnimJoint307.children = new MFNode();

HAnimJoint307.children[0] = HAnimSegment308;

let HAnimJoint344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint344.name = "r_subtalar";
HAnimJoint344.DEF = "hanim_r_subtalar";
HAnimJoint344.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint344.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint344.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment345 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment345.name = "r_midproximal";
HAnimSegment345.DEF = "hanim_r_midproximal";
//<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>
let TouchSensor346 = browser.currentScene.createNode("TouchSensor");
TouchSensor346.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment345.children = new MFNode();

HAnimSegment345.children[0] = TouchSensor346;

let Transform347 = browser.currentScene.createNode("Transform");
Transform347.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
let Shape348 = browser.currentScene.createNode("Shape");
Shape348.USE = "HAnimJointShape";
Transform347.children = new MFNode();

Transform347.children[0] = Shape348;

HAnimSegment345.children[1] = Transform347;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
let Shape349 = browser.currentScene.createNode("Shape");
let LineSet350 = browser.currentScene.createNode("LineSet");
LineSet350.vertexCount = new MFInt32(new int[2]);
let Coordinate351 = browser.currentScene.createNode("Coordinate");
Coordinate351.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet350.coord = Coordinate351;

let ColorRGBA352 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA352.USE = "HAnimSegmentLineColorRGBA";
LineSet350.color = ColorRGBA352;

Shape349.geometry = LineSet350;

HAnimSegment345.children[2] = Shape349;

HAnimJoint344.children = new MFNode();

HAnimJoint344.children[0] = HAnimSegment345;

let HAnimJoint353 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint353.name = "r_midtarsal";
HAnimJoint353.DEF = "hanim_r_midtarsal";
HAnimJoint353.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint353.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint353.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment354 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment354.name = "r_middistal";
HAnimSegment354.DEF = "hanim_r_middistal";
//<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>
let TouchSensor355 = browser.currentScene.createNode("TouchSensor");
TouchSensor355.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment354.children = new MFNode();

HAnimSegment354.children[0] = TouchSensor355;

let Transform356 = browser.currentScene.createNode("Transform");
Transform356.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
let Shape357 = browser.currentScene.createNode("Shape");
Shape357.USE = "HAnimJointShape";
Transform356.children = new MFNode();

Transform356.children[0] = Shape357;

HAnimSegment354.children[1] = Transform356;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
let Shape358 = browser.currentScene.createNode("Shape");
let LineSet359 = browser.currentScene.createNode("LineSet");
LineSet359.vertexCount = new MFInt32(new int[2]);
let Coordinate360 = browser.currentScene.createNode("Coordinate");
Coordinate360.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet359.coord = Coordinate360;

let ColorRGBA361 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA361.USE = "HAnimSegmentLineColorRGBA";
LineSet359.color = ColorRGBA361;

Shape358.geometry = LineSet359;

HAnimSegment354.children[2] = Shape358;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
let Shape362 = browser.currentScene.createNode("Shape");
let LineSet363 = browser.currentScene.createNode("LineSet");
LineSet363.vertexCount = new MFInt32(new int[2]);
let Coordinate364 = browser.currentScene.createNode("Coordinate");
Coordinate364.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet363.coord = Coordinate364;

let ColorRGBA365 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA365.USE = "HAnimSiteLineColorRGBA";
LineSet363.color = ColorRGBA365;

Shape362.geometry = LineSet363;

HAnimSegment354.children[3] = Shape362;

let HAnimSite366 = browser.currentScene.createNode("HAnimSite");
HAnimSite366.name = "r_metatarsal_pha1_pt";
HAnimSite366.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite366.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
let TouchSensor367 = browser.currentScene.createNode("TouchSensor");
TouchSensor367.description = "HAnimSite r_metatarsal_pha1";
HAnimSite366.children = new MFNode();

HAnimSite366.children[0] = TouchSensor367;

let Shape368 = browser.currentScene.createNode("Shape");
Shape368.USE = "HAnimSiteShape";
HAnimSite366.children[1] = Shape368;

HAnimSegment354.children[4] = HAnimSite366;

HAnimJoint353.children = new MFNode();

HAnimJoint353.children[0] = HAnimSegment354;

let HAnimJoint369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint369.name = "r_metatarsal";
HAnimJoint369.DEF = "hanim_r_metatarsal";
HAnimJoint369.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint369.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint369.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment370 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment370.name = "r_forefoot";
HAnimSegment370.DEF = "hanim_r_forefoot";
//<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>
let TouchSensor371 = browser.currentScene.createNode("TouchSensor");
TouchSensor371.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment370.children = new MFNode();

HAnimSegment370.children[0] = TouchSensor371;

let Transform372 = browser.currentScene.createNode("Transform");
Transform372.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
let Shape373 = browser.currentScene.createNode("Shape");
Shape373.USE = "HAnimJointShape";
Transform372.children = new MFNode();

Transform372.children[0] = Shape373;

HAnimSegment370.children[1] = Transform372;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
let Shape374 = browser.currentScene.createNode("Shape");
let LineSet375 = browser.currentScene.createNode("LineSet");
LineSet375.vertexCount = new MFInt32(new int[2]);
let Coordinate376 = browser.currentScene.createNode("Coordinate");
Coordinate376.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet375.coord = Coordinate376;

let ColorRGBA377 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA377.USE = "HAnimSiteLineColorRGBA";
LineSet375.color = ColorRGBA377;

Shape374.geometry = LineSet375;

HAnimSegment370.children[2] = Shape374;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
let Shape378 = browser.currentScene.createNode("Shape");
let LineSet379 = browser.currentScene.createNode("LineSet");
LineSet379.vertexCount = new MFInt32(new int[2]);
let Coordinate380 = browser.currentScene.createNode("Coordinate");
Coordinate380.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet379.coord = Coordinate380;

let ColorRGBA381 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA381.USE = "HAnimSiteLineColorRGBA";
LineSet379.color = ColorRGBA381;

Shape378.geometry = LineSet379;

HAnimSegment370.children[3] = Shape378;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
let Shape382 = browser.currentScene.createNode("Shape");
let LineSet383 = browser.currentScene.createNode("LineSet");
LineSet383.vertexCount = new MFInt32(new int[2]);
let Coordinate384 = browser.currentScene.createNode("Coordinate");
Coordinate384.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet383.coord = Coordinate384;

let ColorRGBA385 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA385.USE = "HAnimSiteLineColorRGBA";
LineSet383.color = ColorRGBA385;

Shape382.geometry = LineSet383;

HAnimSegment370.children[4] = Shape382;

let HAnimSite386 = browser.currentScene.createNode("HAnimSite");
HAnimSite386.name = "r_forefoot_tip";
HAnimSite386.DEF = "hanim_r_forefoot_tip";
HAnimSite386.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
let TouchSensor387 = browser.currentScene.createNode("TouchSensor");
TouchSensor387.description = "HAnimSite r_forefoot_tip";
HAnimSite386.children = new MFNode();

HAnimSite386.children[0] = TouchSensor387;

let Shape388 = browser.currentScene.createNode("Shape");
Shape388.USE = "HAnimSiteShape";
HAnimSite386.children[1] = Shape388;

HAnimSegment370.children[5] = HAnimSite386;

let HAnimSite389 = browser.currentScene.createNode("HAnimSite");
HAnimSite389.name = "r_metatarsal_pha5_pt";
HAnimSite389.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite389.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
let TouchSensor390 = browser.currentScene.createNode("TouchSensor");
TouchSensor390.description = "HAnimSite r_metatarsal_pha5";
HAnimSite389.children = new MFNode();

HAnimSite389.children[0] = TouchSensor390;

let Shape391 = browser.currentScene.createNode("Shape");
Shape391.USE = "HAnimSiteShape";
HAnimSite389.children[1] = Shape391;

HAnimSegment370.children[6] = HAnimSite389;

let HAnimSite392 = browser.currentScene.createNode("HAnimSite");
HAnimSite392.name = "r_digit2_pt";
HAnimSite392.DEF = "hanim_r_digit2_pt";
HAnimSite392.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
let TouchSensor393 = browser.currentScene.createNode("TouchSensor");
TouchSensor393.description = "HAnimSite r_digit2";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

let Shape394 = browser.currentScene.createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment370.children[7] = HAnimSite392;

HAnimJoint369.children = new MFNode();

HAnimJoint369.children[0] = HAnimSegment370;

HAnimJoint353.children[1] = HAnimJoint369;

HAnimJoint344.children[1] = HAnimJoint353;

HAnimJoint307.children[1] = HAnimJoint344;

HAnimJoint298.children[1] = HAnimJoint307;

HAnimJoint268.children[1] = HAnimJoint298;

HAnimJoint61.children[2] = HAnimJoint268;

HAnimJoint45.children[1] = HAnimJoint61;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.name = "vl5";
HAnimJoint395.DEF = "hanim_vl5";
HAnimJoint395.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint395.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint395.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment396 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment396.name = "l5";
HAnimSegment396.DEF = "hanim_l5";
//<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>
let TouchSensor397 = browser.currentScene.createNode("TouchSensor");
TouchSensor397.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment396.children = new MFNode();

HAnimSegment396.children[0] = TouchSensor397;

let Transform398 = browser.currentScene.createNode("Transform");
Transform398.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Shape399 = browser.currentScene.createNode("Shape");
Shape399.USE = "HAnimJointShape";
Transform398.children = new MFNode();

Transform398.children[0] = Shape399;

HAnimSegment396.children[1] = Transform398;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
let Shape400 = browser.currentScene.createNode("Shape");
let LineSet401 = browser.currentScene.createNode("LineSet");
LineSet401.vertexCount = new MFInt32(new int[2]);
let Coordinate402 = browser.currentScene.createNode("Coordinate");
Coordinate402.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet401.coord = Coordinate402;

let ColorRGBA403 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA";
LineSet401.color = ColorRGBA403;

Shape400.geometry = LineSet401;

HAnimSegment396.children[2] = Shape400;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
let Shape404 = browser.currentScene.createNode("Shape");
let LineSet405 = browser.currentScene.createNode("LineSet");
LineSet405.vertexCount = new MFInt32(new int[2]);
let Coordinate406 = browser.currentScene.createNode("Coordinate");
Coordinate406.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet405.coord = Coordinate406;

let ColorRGBA407 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA407.USE = "HAnimSiteLineColorRGBA";
LineSet405.color = ColorRGBA407;

Shape404.geometry = LineSet405;

HAnimSegment396.children[3] = Shape404;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
let Shape408 = browser.currentScene.createNode("Shape");
let LineSet409 = browser.currentScene.createNode("LineSet");
LineSet409.vertexCount = new MFInt32(new int[2]);
let Coordinate410 = browser.currentScene.createNode("Coordinate");
Coordinate410.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet409.coord = Coordinate410;

let ColorRGBA411 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA411.USE = "HAnimSiteLineColorRGBA";
LineSet409.color = ColorRGBA411;

Shape408.geometry = LineSet409;

HAnimSegment396.children[4] = Shape408;

let HAnimSite412 = browser.currentScene.createNode("HAnimSite");
HAnimSite412.name = "waist_preferred_post_pt";
HAnimSite412.DEF = "hanim_waist_preferred_post_pt";
HAnimSite412.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
let TouchSensor413 = browser.currentScene.createNode("TouchSensor");
TouchSensor413.description = "HAnimSite waist_preferred_post";
HAnimSite412.children = new MFNode();

HAnimSite412.children[0] = TouchSensor413;

let Shape414 = browser.currentScene.createNode("Shape");
Shape414.USE = "HAnimSiteShape";
HAnimSite412.children[1] = Shape414;

HAnimSegment396.children[5] = HAnimSite412;

let HAnimSite415 = browser.currentScene.createNode("HAnimSite");
HAnimSite415.name = "navel_pt";
HAnimSite415.DEF = "hanim_navel_pt";
HAnimSite415.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
let TouchSensor416 = browser.currentScene.createNode("TouchSensor");
TouchSensor416.description = "HAnimSite navel";
HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = TouchSensor416;

let Shape417 = browser.currentScene.createNode("Shape");
Shape417.USE = "HAnimSiteShape";
HAnimSite415.children[1] = Shape417;

HAnimSegment396.children[6] = HAnimSite415;

HAnimJoint395.children = new MFNode();

HAnimJoint395.children[0] = HAnimSegment396;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.name = "vl4";
HAnimJoint418.DEF = "hanim_vl4";
HAnimJoint418.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint418.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint418.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment419 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment419.name = "l4";
HAnimSegment419.DEF = "hanim_l4";
//<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>
let TouchSensor420 = browser.currentScene.createNode("TouchSensor");
TouchSensor420.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment419.children = new MFNode();

HAnimSegment419.children[0] = TouchSensor420;

let Transform421 = browser.currentScene.createNode("Transform");
Transform421.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Shape422 = browser.currentScene.createNode("Shape");
Shape422.USE = "HAnimJointShape";
Transform421.children = new MFNode();

Transform421.children[0] = Shape422;

HAnimSegment419.children[1] = Transform421;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
let Shape423 = browser.currentScene.createNode("Shape");
let LineSet424 = browser.currentScene.createNode("LineSet");
LineSet424.vertexCount = new MFInt32(new int[2]);
let Coordinate425 = browser.currentScene.createNode("Coordinate");
Coordinate425.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet424.coord = Coordinate425;

let ColorRGBA426 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA426.USE = "HAnimSegmentLineColorRGBA";
LineSet424.color = ColorRGBA426;

Shape423.geometry = LineSet424;

HAnimSegment419.children[2] = Shape423;

HAnimJoint418.children = new MFNode();

HAnimJoint418.children[0] = HAnimSegment419;

let HAnimJoint427 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint427.name = "vl3";
HAnimJoint427.DEF = "hanim_vl3";
HAnimJoint427.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint427.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint427.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment428 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment428.name = "l3";
HAnimSegment428.DEF = "hanim_l3";
//<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>
let TouchSensor429 = browser.currentScene.createNode("TouchSensor");
TouchSensor429.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment428.children = new MFNode();

HAnimSegment428.children[0] = TouchSensor429;

let Transform430 = browser.currentScene.createNode("Transform");
Transform430.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Shape431 = browser.currentScene.createNode("Shape");
Shape431.USE = "HAnimJointShape";
Transform430.children = new MFNode();

Transform430.children[0] = Shape431;

HAnimSegment428.children[1] = Transform430;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
let Shape432 = browser.currentScene.createNode("Shape");
let LineSet433 = browser.currentScene.createNode("LineSet");
LineSet433.vertexCount = new MFInt32(new int[2]);
let Coordinate434 = browser.currentScene.createNode("Coordinate");
Coordinate434.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet433.coord = Coordinate434;

let ColorRGBA435 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA435.USE = "HAnimSegmentLineColorRGBA";
LineSet433.color = ColorRGBA435;

Shape432.geometry = LineSet433;

HAnimSegment428.children[2] = Shape432;

HAnimJoint427.children = new MFNode();

HAnimJoint427.children[0] = HAnimSegment428;

let HAnimJoint436 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint436.name = "vl2";
HAnimJoint436.DEF = "hanim_vl2";
HAnimJoint436.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint436.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint436.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment437 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment437.name = "l2";
HAnimSegment437.DEF = "hanim_l2";
//<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>
let TouchSensor438 = browser.currentScene.createNode("TouchSensor");
TouchSensor438.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment437.children = new MFNode();

HAnimSegment437.children[0] = TouchSensor438;

let Transform439 = browser.currentScene.createNode("Transform");
Transform439.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Shape440 = browser.currentScene.createNode("Shape");
Shape440.USE = "HAnimJointShape";
Transform439.children = new MFNode();

Transform439.children[0] = Shape440;

HAnimSegment437.children[1] = Transform439;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
let Shape441 = browser.currentScene.createNode("Shape");
let LineSet442 = browser.currentScene.createNode("LineSet");
LineSet442.vertexCount = new MFInt32(new int[2]);
let Coordinate443 = browser.currentScene.createNode("Coordinate");
Coordinate443.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet442.coord = Coordinate443;

let ColorRGBA444 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA444.USE = "HAnimSegmentLineColorRGBA";
LineSet442.color = ColorRGBA444;

Shape441.geometry = LineSet442;

HAnimSegment437.children[2] = Shape441;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
let Shape445 = browser.currentScene.createNode("Shape");
let LineSet446 = browser.currentScene.createNode("LineSet");
LineSet446.vertexCount = new MFInt32(new int[2]);
let Coordinate447 = browser.currentScene.createNode("Coordinate");
Coordinate447.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet446.coord = Coordinate447;

let ColorRGBA448 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA448.USE = "HAnimSiteLineColorRGBA";
LineSet446.color = ColorRGBA448;

Shape445.geometry = LineSet446;

HAnimSegment437.children[3] = Shape445;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
let Shape449 = browser.currentScene.createNode("Shape");
let LineSet450 = browser.currentScene.createNode("LineSet");
LineSet450.vertexCount = new MFInt32(new int[2]);
let Coordinate451 = browser.currentScene.createNode("Coordinate");
Coordinate451.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet450.coord = Coordinate451;

let ColorRGBA452 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSiteLineColorRGBA";
LineSet450.color = ColorRGBA452;

Shape449.geometry = LineSet450;

HAnimSegment437.children[4] = Shape449;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
let Shape453 = browser.currentScene.createNode("Shape");
let LineSet454 = browser.currentScene.createNode("LineSet");
LineSet454.vertexCount = new MFInt32(new int[2]);
let Coordinate455 = browser.currentScene.createNode("Coordinate");
Coordinate455.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet454.coord = Coordinate455;

let ColorRGBA456 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSiteLineColorRGBA";
LineSet454.color = ColorRGBA456;

Shape453.geometry = LineSet454;

HAnimSegment437.children[5] = Shape453;

let HAnimSite457 = browser.currentScene.createNode("HAnimSite");
HAnimSite457.name = "r_rib10_pt";
HAnimSite457.DEF = "hanim_r_rib10_pt";
HAnimSite457.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
let TouchSensor458 = browser.currentScene.createNode("TouchSensor");
TouchSensor458.description = "HAnimSite r_rib10";
HAnimSite457.children = new MFNode();

HAnimSite457.children[0] = TouchSensor458;

let Shape459 = browser.currentScene.createNode("Shape");
Shape459.USE = "HAnimSiteShape";
HAnimSite457.children[1] = Shape459;

HAnimSegment437.children[6] = HAnimSite457;

let HAnimSite460 = browser.currentScene.createNode("HAnimSite");
HAnimSite460.name = "l_rib10_pt";
HAnimSite460.DEF = "hanim_l_rib10_pt";
HAnimSite460.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
let TouchSensor461 = browser.currentScene.createNode("TouchSensor");
TouchSensor461.description = "HAnimSite l_rib10";
HAnimSite460.children = new MFNode();

HAnimSite460.children[0] = TouchSensor461;

let Shape462 = browser.currentScene.createNode("Shape");
Shape462.USE = "HAnimSiteShape";
HAnimSite460.children[1] = Shape462;

HAnimSegment437.children[7] = HAnimSite460;

let HAnimSite463 = browser.currentScene.createNode("HAnimSite");
HAnimSite463.name = "rib10_midspine_pt";
HAnimSite463.DEF = "hanim_rib10_midspine_pt";
HAnimSite463.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
let TouchSensor464 = browser.currentScene.createNode("TouchSensor");
TouchSensor464.description = "HAnimSite rib10_midspine";
HAnimSite463.children = new MFNode();

HAnimSite463.children[0] = TouchSensor464;

let Shape465 = browser.currentScene.createNode("Shape");
Shape465.USE = "HAnimSiteShape";
HAnimSite463.children[1] = Shape465;

HAnimSegment437.children[8] = HAnimSite463;

HAnimJoint436.children = new MFNode();

HAnimJoint436.children[0] = HAnimSegment437;

let HAnimJoint466 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint466.name = "vl1";
HAnimJoint466.DEF = "hanim_vl1";
HAnimJoint466.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint466.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint466.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment467.name = "l1";
HAnimSegment467.DEF = "hanim_l1";
//<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>
let TouchSensor468 = browser.currentScene.createNode("TouchSensor");
TouchSensor468.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment467.children = new MFNode();

HAnimSegment467.children[0] = TouchSensor468;

let Transform469 = browser.currentScene.createNode("Transform");
Transform469.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Shape470 = browser.currentScene.createNode("Shape");
Shape470.USE = "HAnimJointShape";
Transform469.children = new MFNode();

Transform469.children[0] = Shape470;

HAnimSegment467.children[1] = Transform469;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
let Shape471 = browser.currentScene.createNode("Shape");
let LineSet472 = browser.currentScene.createNode("LineSet");
LineSet472.vertexCount = new MFInt32(new int[2]);
let Coordinate473 = browser.currentScene.createNode("Coordinate");
Coordinate473.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet472.coord = Coordinate473;

let ColorRGBA474 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA474.USE = "HAnimSegmentLineColorRGBA";
LineSet472.color = ColorRGBA474;

Shape471.geometry = LineSet472;

HAnimSegment467.children[2] = Shape471;

HAnimJoint466.children = new MFNode();

HAnimJoint466.children[0] = HAnimSegment467;

let HAnimJoint475 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint475.name = "vt12";
HAnimJoint475.DEF = "hanim_vt12";
HAnimJoint475.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint475.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint475.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment476 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment476.name = "t12";
HAnimSegment476.DEF = "hanim_t12";
//<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>
let TouchSensor477 = browser.currentScene.createNode("TouchSensor");
TouchSensor477.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment476.children = new MFNode();

HAnimSegment476.children[0] = TouchSensor477;

let Transform478 = browser.currentScene.createNode("Transform");
Transform478.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Shape479 = browser.currentScene.createNode("Shape");
Shape479.USE = "HAnimJointShape";
Transform478.children = new MFNode();

Transform478.children[0] = Shape479;

HAnimSegment476.children[1] = Transform478;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
let Shape480 = browser.currentScene.createNode("Shape");
let LineSet481 = browser.currentScene.createNode("LineSet");
LineSet481.vertexCount = new MFInt32(new int[2]);
let Coordinate482 = browser.currentScene.createNode("Coordinate");
Coordinate482.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet481.coord = Coordinate482;

let ColorRGBA483 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA483.USE = "HAnimSegmentLineColorRGBA";
LineSet481.color = ColorRGBA483;

Shape480.geometry = LineSet481;

HAnimSegment476.children[2] = Shape480;

HAnimJoint475.children = new MFNode();

HAnimJoint475.children[0] = HAnimSegment476;

let HAnimJoint484 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint484.name = "vt11";
HAnimJoint484.DEF = "hanim_vt11";
HAnimJoint484.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint484.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint484.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment485.name = "t11";
HAnimSegment485.DEF = "hanim_t11";
//<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>
let TouchSensor486 = browser.currentScene.createNode("TouchSensor");
TouchSensor486.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment485.children = new MFNode();

HAnimSegment485.children[0] = TouchSensor486;

let Transform487 = browser.currentScene.createNode("Transform");
Transform487.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Shape488 = browser.currentScene.createNode("Shape");
Shape488.USE = "HAnimJointShape";
Transform487.children = new MFNode();

Transform487.children[0] = Shape488;

HAnimSegment485.children[1] = Transform487;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
let Shape489 = browser.currentScene.createNode("Shape");
let LineSet490 = browser.currentScene.createNode("LineSet");
LineSet490.vertexCount = new MFInt32(new int[2]);
let Coordinate491 = browser.currentScene.createNode("Coordinate");
Coordinate491.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet490.coord = Coordinate491;

let ColorRGBA492 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA492.USE = "HAnimSegmentLineColorRGBA";
LineSet490.color = ColorRGBA492;

Shape489.geometry = LineSet490;

HAnimSegment485.children[2] = Shape489;

HAnimJoint484.children = new MFNode();

HAnimJoint484.children[0] = HAnimSegment485;

let HAnimJoint493 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint493.name = "vt10";
HAnimJoint493.DEF = "hanim_vt10";
HAnimJoint493.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint493.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint493.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment494.name = "t10";
HAnimSegment494.DEF = "hanim_t10";
//<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>
let TouchSensor495 = browser.currentScene.createNode("TouchSensor");
TouchSensor495.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment494.children = new MFNode();

HAnimSegment494.children[0] = TouchSensor495;

let Transform496 = browser.currentScene.createNode("Transform");
Transform496.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Shape497 = browser.currentScene.createNode("Shape");
Shape497.USE = "HAnimJointShape";
Transform496.children = new MFNode();

Transform496.children[0] = Shape497;

HAnimSegment494.children[1] = Transform496;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
let Shape498 = browser.currentScene.createNode("Shape");
let LineSet499 = browser.currentScene.createNode("LineSet");
LineSet499.vertexCount = new MFInt32(new int[2]);
let Coordinate500 = browser.currentScene.createNode("Coordinate");
Coordinate500.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet499.coord = Coordinate500;

let ColorRGBA501 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA501.USE = "HAnimSegmentLineColorRGBA";
LineSet499.color = ColorRGBA501;

Shape498.geometry = LineSet499;

HAnimSegment494.children[2] = Shape498;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
let Shape502 = browser.currentScene.createNode("Shape");
let LineSet503 = browser.currentScene.createNode("LineSet");
LineSet503.vertexCount = new MFInt32(new int[2]);
let Coordinate504 = browser.currentScene.createNode("Coordinate");
Coordinate504.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet503.coord = Coordinate504;

let ColorRGBA505 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA505.USE = "HAnimSiteLineColorRGBA";
LineSet503.color = ColorRGBA505;

Shape502.geometry = LineSet503;

HAnimSegment494.children[3] = Shape502;

let HAnimSite506 = browser.currentScene.createNode("HAnimSite");
HAnimSite506.name = "substernale_pt";
HAnimSite506.DEF = "hanim_substernale_pt";
HAnimSite506.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
let TouchSensor507 = browser.currentScene.createNode("TouchSensor");
TouchSensor507.description = "HAnimSite substernale";
HAnimSite506.children = new MFNode();

HAnimSite506.children[0] = TouchSensor507;

let Shape508 = browser.currentScene.createNode("Shape");
Shape508.USE = "HAnimSiteShape";
HAnimSite506.children[1] = Shape508;

HAnimSegment494.children[4] = HAnimSite506;

HAnimJoint493.children = new MFNode();

HAnimJoint493.children[0] = HAnimSegment494;

let HAnimJoint509 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint509.name = "vt9";
HAnimJoint509.DEF = "hanim_vt9";
HAnimJoint509.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint509.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint509.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment510.name = "t9";
HAnimSegment510.DEF = "hanim_t9";
//<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>
let TouchSensor511 = browser.currentScene.createNode("TouchSensor");
TouchSensor511.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment510.children = new MFNode();

HAnimSegment510.children[0] = TouchSensor511;

let Transform512 = browser.currentScene.createNode("Transform");
Transform512.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Shape513 = browser.currentScene.createNode("Shape");
Shape513.USE = "HAnimJointShape";
Transform512.children = new MFNode();

Transform512.children[0] = Shape513;

HAnimSegment510.children[1] = Transform512;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
let Shape514 = browser.currentScene.createNode("Shape");
let LineSet515 = browser.currentScene.createNode("LineSet");
LineSet515.vertexCount = new MFInt32(new int[2]);
let Coordinate516 = browser.currentScene.createNode("Coordinate");
Coordinate516.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet515.coord = Coordinate516;

let ColorRGBA517 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA517.USE = "HAnimSegmentLineColorRGBA";
LineSet515.color = ColorRGBA517;

Shape514.geometry = LineSet515;

HAnimSegment510.children[2] = Shape514;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
let Shape518 = browser.currentScene.createNode("Shape");
let LineSet519 = browser.currentScene.createNode("LineSet");
LineSet519.vertexCount = new MFInt32(new int[2]);
let Coordinate520 = browser.currentScene.createNode("Coordinate");
Coordinate520.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet519.coord = Coordinate520;

let ColorRGBA521 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSiteLineColorRGBA";
LineSet519.color = ColorRGBA521;

Shape518.geometry = LineSet519;

HAnimSegment510.children[3] = Shape518;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
let Shape522 = browser.currentScene.createNode("Shape");
let LineSet523 = browser.currentScene.createNode("LineSet");
LineSet523.vertexCount = new MFInt32(new int[2]);
let Coordinate524 = browser.currentScene.createNode("Coordinate");
Coordinate524.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet523.coord = Coordinate524;

let ColorRGBA525 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA525.USE = "HAnimSiteLineColorRGBA";
LineSet523.color = ColorRGBA525;

Shape522.geometry = LineSet523;

HAnimSegment510.children[4] = Shape522;

let HAnimSite526 = browser.currentScene.createNode("HAnimSite");
HAnimSite526.name = "r_thelion_pt";
HAnimSite526.DEF = "hanim_r_thelion_pt";
HAnimSite526.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
let TouchSensor527 = browser.currentScene.createNode("TouchSensor");
TouchSensor527.description = "HAnimSite r_thelion";
HAnimSite526.children = new MFNode();

HAnimSite526.children[0] = TouchSensor527;

let Shape528 = browser.currentScene.createNode("Shape");
Shape528.USE = "HAnimSiteShape";
HAnimSite526.children[1] = Shape528;

HAnimSegment510.children[5] = HAnimSite526;

let HAnimSite529 = browser.currentScene.createNode("HAnimSite");
HAnimSite529.name = "l_thelion_pt";
HAnimSite529.DEF = "hanim_l_thelion_pt";
HAnimSite529.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
let TouchSensor530 = browser.currentScene.createNode("TouchSensor");
TouchSensor530.description = "HAnimSite l_thelion";
HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = TouchSensor530;

let Shape531 = browser.currentScene.createNode("Shape");
Shape531.USE = "HAnimSiteShape";
HAnimSite529.children[1] = Shape531;

HAnimSegment510.children[6] = HAnimSite529;

HAnimJoint509.children = new MFNode();

HAnimJoint509.children[0] = HAnimSegment510;

let HAnimJoint532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint532.name = "vt8";
HAnimJoint532.DEF = "hanim_vt8";
HAnimJoint532.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint532.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint532.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment533 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment533.name = "t8";
HAnimSegment533.DEF = "hanim_t8";
//<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>
let TouchSensor534 = browser.currentScene.createNode("TouchSensor");
TouchSensor534.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment533.children = new MFNode();

HAnimSegment533.children[0] = TouchSensor534;

let Transform535 = browser.currentScene.createNode("Transform");
Transform535.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Shape536 = browser.currentScene.createNode("Shape");
Shape536.USE = "HAnimJointShape";
Transform535.children = new MFNode();

Transform535.children[0] = Shape536;

HAnimSegment533.children[1] = Transform535;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
let Shape537 = browser.currentScene.createNode("Shape");
let LineSet538 = browser.currentScene.createNode("LineSet");
LineSet538.vertexCount = new MFInt32(new int[2]);
let Coordinate539 = browser.currentScene.createNode("Coordinate");
Coordinate539.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet538.coord = Coordinate539;

let ColorRGBA540 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA540.USE = "HAnimSegmentLineColorRGBA";
LineSet538.color = ColorRGBA540;

Shape537.geometry = LineSet538;

HAnimSegment533.children[2] = Shape537;

HAnimJoint532.children = new MFNode();

HAnimJoint532.children[0] = HAnimSegment533;

let HAnimJoint541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint541.name = "vt7";
HAnimJoint541.DEF = "hanim_vt7";
HAnimJoint541.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint541.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment542.name = "t7";
HAnimSegment542.DEF = "hanim_t7";
//<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>
let TouchSensor543 = browser.currentScene.createNode("TouchSensor");
TouchSensor543.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment542.children = new MFNode();

HAnimSegment542.children[0] = TouchSensor543;

let Transform544 = browser.currentScene.createNode("Transform");
Transform544.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Shape545 = browser.currentScene.createNode("Shape");
Shape545.USE = "HAnimJointShape";
Transform544.children = new MFNode();

Transform544.children[0] = Shape545;

HAnimSegment542.children[1] = Transform544;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
let Shape546 = browser.currentScene.createNode("Shape");
let LineSet547 = browser.currentScene.createNode("LineSet");
LineSet547.vertexCount = new MFInt32(new int[2]);
let Coordinate548 = browser.currentScene.createNode("Coordinate");
Coordinate548.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet547.coord = Coordinate548;

let ColorRGBA549 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA549.USE = "HAnimSegmentLineColorRGBA";
LineSet547.color = ColorRGBA549;

Shape546.geometry = LineSet547;

HAnimSegment542.children[2] = Shape546;

HAnimJoint541.children = new MFNode();

HAnimJoint541.children[0] = HAnimSegment542;

let HAnimJoint550 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint550.name = "vt6";
HAnimJoint550.DEF = "hanim_vt6";
HAnimJoint550.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint550.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint550.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment551 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment551.name = "t6";
HAnimSegment551.DEF = "hanim_t6";
//<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>
let TouchSensor552 = browser.currentScene.createNode("TouchSensor");
TouchSensor552.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment551.children = new MFNode();

HAnimSegment551.children[0] = TouchSensor552;

let Transform553 = browser.currentScene.createNode("Transform");
Transform553.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Shape554 = browser.currentScene.createNode("Shape");
Shape554.USE = "HAnimJointShape";
Transform553.children = new MFNode();

Transform553.children[0] = Shape554;

HAnimSegment551.children[1] = Transform553;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
let Shape555 = browser.currentScene.createNode("Shape");
let LineSet556 = browser.currentScene.createNode("LineSet");
LineSet556.vertexCount = new MFInt32(new int[2]);
let Coordinate557 = browser.currentScene.createNode("Coordinate");
Coordinate557.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet556.coord = Coordinate557;

let ColorRGBA558 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
LineSet556.color = ColorRGBA558;

Shape555.geometry = LineSet556;

HAnimSegment551.children[2] = Shape555;

HAnimJoint550.children = new MFNode();

HAnimJoint550.children[0] = HAnimSegment551;

let HAnimJoint559 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint559.name = "vt5";
HAnimJoint559.DEF = "hanim_vt5";
HAnimJoint559.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint559.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint559.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment560 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment560.name = "t5";
HAnimSegment560.DEF = "hanim_t5";
//<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>
let TouchSensor561 = browser.currentScene.createNode("TouchSensor");
TouchSensor561.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment560.children = new MFNode();

HAnimSegment560.children[0] = TouchSensor561;

let Transform562 = browser.currentScene.createNode("Transform");
Transform562.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Shape563 = browser.currentScene.createNode("Shape");
Shape563.USE = "HAnimJointShape";
Transform562.children = new MFNode();

Transform562.children[0] = Shape563;

HAnimSegment560.children[1] = Transform562;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
let Shape564 = browser.currentScene.createNode("Shape");
let LineSet565 = browser.currentScene.createNode("LineSet");
LineSet565.vertexCount = new MFInt32(new int[2]);
let Coordinate566 = browser.currentScene.createNode("Coordinate");
Coordinate566.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet565.coord = Coordinate566;

let ColorRGBA567 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
LineSet565.color = ColorRGBA567;

Shape564.geometry = LineSet565;

HAnimSegment560.children[2] = Shape564;

HAnimJoint559.children = new MFNode();

HAnimJoint559.children[0] = HAnimSegment560;

let HAnimJoint568 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint568.name = "vt4";
HAnimJoint568.DEF = "hanim_vt4";
HAnimJoint568.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint568.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint568.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment569 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment569.name = "t4";
HAnimSegment569.DEF = "hanim_t4";
//<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>
let TouchSensor570 = browser.currentScene.createNode("TouchSensor");
TouchSensor570.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment569.children = new MFNode();

HAnimSegment569.children[0] = TouchSensor570;

let Transform571 = browser.currentScene.createNode("Transform");
Transform571.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Shape572 = browser.currentScene.createNode("Shape");
Shape572.USE = "HAnimJointShape";
Transform571.children = new MFNode();

Transform571.children[0] = Shape572;

HAnimSegment569.children[1] = Transform571;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
let Shape573 = browser.currentScene.createNode("Shape");
let LineSet574 = browser.currentScene.createNode("LineSet");
LineSet574.vertexCount = new MFInt32(new int[2]);
let Coordinate575 = browser.currentScene.createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet574.coord = Coordinate575;

let ColorRGBA576 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
LineSet574.color = ColorRGBA576;

Shape573.geometry = LineSet574;

HAnimSegment569.children[2] = Shape573;

HAnimJoint568.children = new MFNode();

HAnimJoint568.children[0] = HAnimSegment569;

let HAnimJoint577 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint577.name = "vt3";
HAnimJoint577.DEF = "hanim_vt3";
HAnimJoint577.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint577.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint577.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment578 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment578.name = "t3";
HAnimSegment578.DEF = "hanim_t3";
//<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>
let TouchSensor579 = browser.currentScene.createNode("TouchSensor");
TouchSensor579.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment578.children = new MFNode();

HAnimSegment578.children[0] = TouchSensor579;

let Transform580 = browser.currentScene.createNode("Transform");
Transform580.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Shape581 = browser.currentScene.createNode("Shape");
Shape581.USE = "HAnimJointShape";
Transform580.children = new MFNode();

Transform580.children[0] = Shape581;

HAnimSegment578.children[1] = Transform580;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
let Shape582 = browser.currentScene.createNode("Shape");
let LineSet583 = browser.currentScene.createNode("LineSet");
LineSet583.vertexCount = new MFInt32(new int[2]);
let Coordinate584 = browser.currentScene.createNode("Coordinate");
Coordinate584.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet583.coord = Coordinate584;

let ColorRGBA585 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA";
LineSet583.color = ColorRGBA585;

Shape582.geometry = LineSet583;

HAnimSegment578.children[2] = Shape582;

HAnimJoint577.children = new MFNode();

HAnimJoint577.children[0] = HAnimSegment578;

let HAnimJoint586 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint586.name = "vt2";
HAnimJoint586.DEF = "hanim_vt2";
HAnimJoint586.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint586.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint586.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment587 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment587.name = "t2";
HAnimSegment587.DEF = "hanim_t2";
//<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>
let TouchSensor588 = browser.currentScene.createNode("TouchSensor");
TouchSensor588.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment587.children = new MFNode();

HAnimSegment587.children[0] = TouchSensor588;

let Transform589 = browser.currentScene.createNode("Transform");
Transform589.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Shape590 = browser.currentScene.createNode("Shape");
Shape590.USE = "HAnimJointShape";
Transform589.children = new MFNode();

Transform589.children[0] = Shape590;

HAnimSegment587.children[1] = Transform589;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
let Shape591 = browser.currentScene.createNode("Shape");
let LineSet592 = browser.currentScene.createNode("LineSet");
LineSet592.vertexCount = new MFInt32(new int[2]);
let Coordinate593 = browser.currentScene.createNode("Coordinate");
Coordinate593.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet592.coord = Coordinate593;

let ColorRGBA594 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA594.USE = "HAnimSegmentLineColorRGBA";
LineSet592.color = ColorRGBA594;

Shape591.geometry = LineSet592;

HAnimSegment587.children[2] = Shape591;

HAnimJoint586.children = new MFNode();

HAnimJoint586.children[0] = HAnimSegment587;

let HAnimJoint595 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint595.name = "vt1";
HAnimJoint595.DEF = "hanim_vt1";
HAnimJoint595.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint595.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint595.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment596 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment596.name = "t1";
HAnimSegment596.DEF = "hanim_t1";
//<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>
let TouchSensor597 = browser.currentScene.createNode("TouchSensor");
TouchSensor597.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment596.children = new MFNode();

HAnimSegment596.children[0] = TouchSensor597;

let Transform598 = browser.currentScene.createNode("Transform");
Transform598.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Shape599 = browser.currentScene.createNode("Shape");
Shape599.USE = "HAnimJointShape";
Transform598.children = new MFNode();

Transform598.children[0] = Shape599;

HAnimSegment596.children[1] = Transform598;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
let Shape600 = browser.currentScene.createNode("Shape");
let LineSet601 = browser.currentScene.createNode("LineSet");
LineSet601.vertexCount = new MFInt32(new int[2]);
let Coordinate602 = browser.currentScene.createNode("Coordinate");
Coordinate602.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet601.coord = Coordinate602;

let ColorRGBA603 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA603.USE = "HAnimSegmentLineColorRGBA";
LineSet601.color = ColorRGBA603;

Shape600.geometry = LineSet601;

HAnimSegment596.children[2] = Shape600;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
let Shape604 = browser.currentScene.createNode("Shape");
let LineSet605 = browser.currentScene.createNode("LineSet");
LineSet605.vertexCount = new MFInt32(new int[2]);
let Coordinate606 = browser.currentScene.createNode("Coordinate");
Coordinate606.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet605.coord = Coordinate606;

let ColorRGBA607 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA607.USE = "HAnimSegmentLineColorRGBA";
LineSet605.color = ColorRGBA607;

Shape604.geometry = LineSet605;

HAnimSegment596.children[3] = Shape604;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
let Shape608 = browser.currentScene.createNode("Shape");
let LineSet609 = browser.currentScene.createNode("LineSet");
LineSet609.vertexCount = new MFInt32(new int[2]);
let Coordinate610 = browser.currentScene.createNode("Coordinate");
Coordinate610.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet609.coord = Coordinate610;

let ColorRGBA611 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
LineSet609.color = ColorRGBA611;

Shape608.geometry = LineSet609;

HAnimSegment596.children[4] = Shape608;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
let Shape612 = browser.currentScene.createNode("Shape");
let LineSet613 = browser.currentScene.createNode("LineSet");
LineSet613.vertexCount = new MFInt32(new int[2]);
let Coordinate614 = browser.currentScene.createNode("Coordinate");
Coordinate614.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet613.coord = Coordinate614;

let ColorRGBA615 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA615.USE = "HAnimSiteLineColorRGBA";
LineSet613.color = ColorRGBA615;

Shape612.geometry = LineSet613;

HAnimSegment596.children[5] = Shape612;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
let Shape616 = browser.currentScene.createNode("Shape");
let LineSet617 = browser.currentScene.createNode("LineSet");
LineSet617.vertexCount = new MFInt32(new int[2]);
let Coordinate618 = browser.currentScene.createNode("Coordinate");
Coordinate618.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet617.coord = Coordinate618;

let ColorRGBA619 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA619.USE = "HAnimSiteLineColorRGBA";
LineSet617.color = ColorRGBA619;

Shape616.geometry = LineSet617;

HAnimSegment596.children[6] = Shape616;

let HAnimSite620 = browser.currentScene.createNode("HAnimSite");
HAnimSite620.name = "suprasternale_pt";
HAnimSite620.DEF = "hanim_suprasternale_pt";
HAnimSite620.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
let TouchSensor621 = browser.currentScene.createNode("TouchSensor");
TouchSensor621.description = "HAnimSite suprasternale";
HAnimSite620.children = new MFNode();

HAnimSite620.children[0] = TouchSensor621;

let Shape622 = browser.currentScene.createNode("Shape");
Shape622.USE = "HAnimSiteShape";
HAnimSite620.children[1] = Shape622;

HAnimSegment596.children[7] = HAnimSite620;

let HAnimSite623 = browser.currentScene.createNode("HAnimSite");
HAnimSite623.name = "cervicale_pt";
HAnimSite623.DEF = "hanim_cervicale_pt";
HAnimSite623.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
let TouchSensor624 = browser.currentScene.createNode("TouchSensor");
TouchSensor624.description = "HAnimSite cervicale";
HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = TouchSensor624;

let Shape625 = browser.currentScene.createNode("Shape");
Shape625.USE = "HAnimSiteShape";
HAnimSite623.children[1] = Shape625;

HAnimSegment596.children[8] = HAnimSite623;

HAnimJoint595.children = new MFNode();

HAnimJoint595.children[0] = HAnimSegment596;

let HAnimJoint626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint626.name = "vc7";
HAnimJoint626.DEF = "hanim_vc7";
HAnimJoint626.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint626.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint626.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment627 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment627.name = "c7";
HAnimSegment627.DEF = "hanim_c7";
//<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>
let TouchSensor628 = browser.currentScene.createNode("TouchSensor");
TouchSensor628.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment627.children = new MFNode();

HAnimSegment627.children[0] = TouchSensor628;

let Transform629 = browser.currentScene.createNode("Transform");
Transform629.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Shape630 = browser.currentScene.createNode("Shape");
Shape630.USE = "HAnimJointShape";
Transform629.children = new MFNode();

Transform629.children[0] = Shape630;

HAnimSegment627.children[1] = Transform629;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
let Shape631 = browser.currentScene.createNode("Shape");
let LineSet632 = browser.currentScene.createNode("LineSet");
LineSet632.vertexCount = new MFInt32(new int[2]);
let Coordinate633 = browser.currentScene.createNode("Coordinate");
Coordinate633.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet632.coord = Coordinate633;

let ColorRGBA634 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA634.USE = "HAnimSegmentLineColorRGBA";
LineSet632.color = ColorRGBA634;

Shape631.geometry = LineSet632;

HAnimSegment627.children[2] = Shape631;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
let Shape635 = browser.currentScene.createNode("Shape");
let LineSet636 = browser.currentScene.createNode("LineSet");
LineSet636.vertexCount = new MFInt32(new int[2]);
let Coordinate637 = browser.currentScene.createNode("Coordinate");
Coordinate637.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet636.coord = Coordinate637;

let ColorRGBA638 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA638.USE = "HAnimSiteLineColorRGBA";
LineSet636.color = ColorRGBA638;

Shape635.geometry = LineSet636;

HAnimSegment627.children[3] = Shape635;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
let Shape639 = browser.currentScene.createNode("Shape");
let LineSet640 = browser.currentScene.createNode("LineSet");
LineSet640.vertexCount = new MFInt32(new int[2]);
let Coordinate641 = browser.currentScene.createNode("Coordinate");
Coordinate641.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet640.coord = Coordinate641;

let ColorRGBA642 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA642.USE = "HAnimSiteLineColorRGBA";
LineSet640.color = ColorRGBA642;

Shape639.geometry = LineSet640;

HAnimSegment627.children[4] = Shape639;

let HAnimSite643 = browser.currentScene.createNode("HAnimSite");
HAnimSite643.name = "r_neck_base_pt";
HAnimSite643.DEF = "hanim_r_neck_base_pt";
HAnimSite643.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
let TouchSensor644 = browser.currentScene.createNode("TouchSensor");
TouchSensor644.description = "HAnimSite r_neck_base";
HAnimSite643.children = new MFNode();

HAnimSite643.children[0] = TouchSensor644;

let Shape645 = browser.currentScene.createNode("Shape");
Shape645.USE = "HAnimSiteShape";
HAnimSite643.children[1] = Shape645;

HAnimSegment627.children[5] = HAnimSite643;

let HAnimSite646 = browser.currentScene.createNode("HAnimSite");
HAnimSite646.name = "l_neck_base_pt";
HAnimSite646.DEF = "hanim_l_neck_base_pt";
HAnimSite646.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
let TouchSensor647 = browser.currentScene.createNode("TouchSensor");
TouchSensor647.description = "HAnimSite l_neck_base";
HAnimSite646.children = new MFNode();

HAnimSite646.children[0] = TouchSensor647;

let Shape648 = browser.currentScene.createNode("Shape");
Shape648.USE = "HAnimSiteShape";
HAnimSite646.children[1] = Shape648;

HAnimSegment627.children[6] = HAnimSite646;

HAnimJoint626.children = new MFNode();

HAnimJoint626.children[0] = HAnimSegment627;

let HAnimJoint649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint649.name = "vc6";
HAnimJoint649.DEF = "hanim_vc6";
HAnimJoint649.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint649.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint649.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment650 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment650.name = "c6";
HAnimSegment650.DEF = "hanim_c6";
//<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>
let TouchSensor651 = browser.currentScene.createNode("TouchSensor");
TouchSensor651.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment650.children = new MFNode();

HAnimSegment650.children[0] = TouchSensor651;

let Transform652 = browser.currentScene.createNode("Transform");
Transform652.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Shape653 = browser.currentScene.createNode("Shape");
Shape653.USE = "HAnimJointShape";
Transform652.children = new MFNode();

Transform652.children[0] = Shape653;

HAnimSegment650.children[1] = Transform652;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
let Shape654 = browser.currentScene.createNode("Shape");
let LineSet655 = browser.currentScene.createNode("LineSet");
LineSet655.vertexCount = new MFInt32(new int[2]);
let Coordinate656 = browser.currentScene.createNode("Coordinate");
Coordinate656.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet655.coord = Coordinate656;

let ColorRGBA657 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
LineSet655.color = ColorRGBA657;

Shape654.geometry = LineSet655;

HAnimSegment650.children[2] = Shape654;

HAnimJoint649.children = new MFNode();

HAnimJoint649.children[0] = HAnimSegment650;

let HAnimJoint658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint658.name = "vc5";
HAnimJoint658.DEF = "hanim_vc5";
HAnimJoint658.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint658.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment659 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment659.name = "c5";
HAnimSegment659.DEF = "hanim_c5";
//<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>
let TouchSensor660 = browser.currentScene.createNode("TouchSensor");
TouchSensor660.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment659.children = new MFNode();

HAnimSegment659.children[0] = TouchSensor660;

let Transform661 = browser.currentScene.createNode("Transform");
Transform661.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Shape662 = browser.currentScene.createNode("Shape");
Shape662.USE = "HAnimJointShape";
Transform661.children = new MFNode();

Transform661.children[0] = Shape662;

HAnimSegment659.children[1] = Transform661;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
let Shape663 = browser.currentScene.createNode("Shape");
let LineSet664 = browser.currentScene.createNode("LineSet");
LineSet664.vertexCount = new MFInt32(new int[2]);
let Coordinate665 = browser.currentScene.createNode("Coordinate");
Coordinate665.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet664.coord = Coordinate665;

let ColorRGBA666 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA";
LineSet664.color = ColorRGBA666;

Shape663.geometry = LineSet664;

HAnimSegment659.children[2] = Shape663;

HAnimJoint658.children = new MFNode();

HAnimJoint658.children[0] = HAnimSegment659;

let HAnimJoint667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint667.name = "vc4";
HAnimJoint667.DEF = "hanim_vc4";
HAnimJoint667.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint667.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint667.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment668 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment668.name = "c4";
HAnimSegment668.DEF = "hanim_c4";
//<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>
let TouchSensor669 = browser.currentScene.createNode("TouchSensor");
TouchSensor669.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment668.children = new MFNode();

HAnimSegment668.children[0] = TouchSensor669;

let Transform670 = browser.currentScene.createNode("Transform");
Transform670.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Shape671 = browser.currentScene.createNode("Shape");
Shape671.USE = "HAnimJointShape";
Transform670.children = new MFNode();

Transform670.children[0] = Shape671;

HAnimSegment668.children[1] = Transform670;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
let Shape672 = browser.currentScene.createNode("Shape");
let LineSet673 = browser.currentScene.createNode("LineSet");
LineSet673.vertexCount = new MFInt32(new int[2]);
let Coordinate674 = browser.currentScene.createNode("Coordinate");
Coordinate674.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet673.coord = Coordinate674;

let ColorRGBA675 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA675.USE = "HAnimSegmentLineColorRGBA";
LineSet673.color = ColorRGBA675;

Shape672.geometry = LineSet673;

HAnimSegment668.children[2] = Shape672;

HAnimJoint667.children = new MFNode();

HAnimJoint667.children[0] = HAnimSegment668;

let HAnimJoint676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint676.name = "vc3";
HAnimJoint676.DEF = "hanim_vc3";
HAnimJoint676.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint676.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint676.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment677 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment677.name = "c3";
HAnimSegment677.DEF = "hanim_c3";
//<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>
let TouchSensor678 = browser.currentScene.createNode("TouchSensor");
TouchSensor678.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment677.children = new MFNode();

HAnimSegment677.children[0] = TouchSensor678;

let Transform679 = browser.currentScene.createNode("Transform");
Transform679.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Shape680 = browser.currentScene.createNode("Shape");
Shape680.USE = "HAnimJointShape";
Transform679.children = new MFNode();

Transform679.children[0] = Shape680;

HAnimSegment677.children[1] = Transform679;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
let Shape681 = browser.currentScene.createNode("Shape");
let LineSet682 = browser.currentScene.createNode("LineSet");
LineSet682.vertexCount = new MFInt32(new int[2]);
let Coordinate683 = browser.currentScene.createNode("Coordinate");
Coordinate683.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet682.coord = Coordinate683;

let ColorRGBA684 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA684.USE = "HAnimSegmentLineColorRGBA";
LineSet682.color = ColorRGBA684;

Shape681.geometry = LineSet682;

HAnimSegment677.children[2] = Shape681;

HAnimJoint676.children = new MFNode();

HAnimJoint676.children[0] = HAnimSegment677;

let HAnimJoint685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint685.name = "vc2";
HAnimJoint685.DEF = "hanim_vc2";
HAnimJoint685.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint685.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint685.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment686 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment686.name = "c2";
HAnimSegment686.DEF = "hanim_c2";
//<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>
let TouchSensor687 = browser.currentScene.createNode("TouchSensor");
TouchSensor687.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment686.children = new MFNode();

HAnimSegment686.children[0] = TouchSensor687;

let Transform688 = browser.currentScene.createNode("Transform");
Transform688.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Shape689 = browser.currentScene.createNode("Shape");
Shape689.USE = "HAnimJointShape";
Transform688.children = new MFNode();

Transform688.children[0] = Shape689;

HAnimSegment686.children[1] = Transform688;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
let Shape690 = browser.currentScene.createNode("Shape");
let LineSet691 = browser.currentScene.createNode("LineSet");
LineSet691.vertexCount = new MFInt32(new int[2]);
let Coordinate692 = browser.currentScene.createNode("Coordinate");
Coordinate692.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet691.coord = Coordinate692;

let ColorRGBA693 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA693.USE = "HAnimSegmentLineColorRGBA";
LineSet691.color = ColorRGBA693;

Shape690.geometry = LineSet691;

HAnimSegment686.children[2] = Shape690;

HAnimJoint685.children = new MFNode();

HAnimJoint685.children[0] = HAnimSegment686;

let HAnimJoint694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint694.name = "vc1";
HAnimJoint694.DEF = "hanim_vc1";
HAnimJoint694.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint694.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint694.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment695 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment695.name = "c1";
HAnimSegment695.DEF = "hanim_c1";
//<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>
let TouchSensor696 = browser.currentScene.createNode("TouchSensor");
TouchSensor696.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment695.children = new MFNode();

HAnimSegment695.children[0] = TouchSensor696;

let Transform697 = browser.currentScene.createNode("Transform");
Transform697.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Shape698 = browser.currentScene.createNode("Shape");
Shape698.USE = "HAnimJointShape";
Transform697.children = new MFNode();

Transform697.children[0] = Shape698;

HAnimSegment695.children[1] = Transform697;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
let Shape699 = browser.currentScene.createNode("Shape");
let LineSet700 = browser.currentScene.createNode("LineSet");
LineSet700.vertexCount = new MFInt32(new int[2]);
let Coordinate701 = browser.currentScene.createNode("Coordinate");
Coordinate701.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet700.coord = Coordinate701;

let ColorRGBA702 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA702.USE = "HAnimSegmentLineColorRGBA";
LineSet700.color = ColorRGBA702;

Shape699.geometry = LineSet700;

HAnimSegment695.children[2] = Shape699;

HAnimJoint694.children = new MFNode();

HAnimJoint694.children[0] = HAnimSegment695;

let HAnimJoint703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint703.name = "skullbase";
HAnimJoint703.DEF = "hanim_skullbase";
HAnimJoint703.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint703.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment704 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment704.name = "skull";
HAnimSegment704.DEF = "hanim_skull";
//<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>
let TouchSensor705 = browser.currentScene.createNode("TouchSensor");
TouchSensor705.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment704.children = new MFNode();

HAnimSegment704.children[0] = TouchSensor705;

let Transform706 = browser.currentScene.createNode("Transform");
Transform706.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Shape707 = browser.currentScene.createNode("Shape");
Shape707.USE = "HAnimJointShape";
Transform706.children = new MFNode();

Transform706.children[0] = Shape707;

HAnimSegment704.children[1] = Transform706;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
let Shape708 = browser.currentScene.createNode("Shape");
let LineSet709 = browser.currentScene.createNode("LineSet");
LineSet709.vertexCount = new MFInt32(new int[2]);
let Coordinate710 = browser.currentScene.createNode("Coordinate");
Coordinate710.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet709.coord = Coordinate710;

let ColorRGBA711 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA711.USE = "HAnimSegmentLineColorRGBA";
LineSet709.color = ColorRGBA711;

Shape708.geometry = LineSet709;

HAnimSegment704.children[2] = Shape708;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
let Shape712 = browser.currentScene.createNode("Shape");
let LineSet713 = browser.currentScene.createNode("LineSet");
LineSet713.vertexCount = new MFInt32(new int[2]);
let Coordinate714 = browser.currentScene.createNode("Coordinate");
Coordinate714.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet713.coord = Coordinate714;

let ColorRGBA715 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
LineSet713.color = ColorRGBA715;

Shape712.geometry = LineSet713;

HAnimSegment704.children[3] = Shape712;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
let Shape716 = browser.currentScene.createNode("Shape");
let LineSet717 = browser.currentScene.createNode("LineSet");
LineSet717.vertexCount = new MFInt32(new int[2]);
let Coordinate718 = browser.currentScene.createNode("Coordinate");
Coordinate718.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet717.coord = Coordinate718;

let ColorRGBA719 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA719.USE = "HAnimSegmentLineColorRGBA";
LineSet717.color = ColorRGBA719;

Shape716.geometry = LineSet717;

HAnimSegment704.children[4] = Shape716;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
let Shape720 = browser.currentScene.createNode("Shape");
let LineSet721 = browser.currentScene.createNode("LineSet");
LineSet721.vertexCount = new MFInt32(new int[2]);
let Coordinate722 = browser.currentScene.createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet721.coord = Coordinate722;

let ColorRGBA723 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
LineSet721.color = ColorRGBA723;

Shape720.geometry = LineSet721;

HAnimSegment704.children[5] = Shape720;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
let Shape724 = browser.currentScene.createNode("Shape");
let LineSet725 = browser.currentScene.createNode("LineSet");
LineSet725.vertexCount = new MFInt32(new int[2]);
let Coordinate726 = browser.currentScene.createNode("Coordinate");
Coordinate726.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet725.coord = Coordinate726;

let ColorRGBA727 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA727.USE = "HAnimSegmentLineColorRGBA";
LineSet725.color = ColorRGBA727;

Shape724.geometry = LineSet725;

HAnimSegment704.children[6] = Shape724;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
let Shape728 = browser.currentScene.createNode("Shape");
let LineSet729 = browser.currentScene.createNode("LineSet");
LineSet729.vertexCount = new MFInt32(new int[2]);
let Coordinate730 = browser.currentScene.createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet729.coord = Coordinate730;

let ColorRGBA731 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
LineSet729.color = ColorRGBA731;

Shape728.geometry = LineSet729;

HAnimSegment704.children[7] = Shape728;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
let Shape732 = browser.currentScene.createNode("Shape");
let LineSet733 = browser.currentScene.createNode("LineSet");
LineSet733.vertexCount = new MFInt32(new int[2]);
let Coordinate734 = browser.currentScene.createNode("Coordinate");
Coordinate734.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet733.coord = Coordinate734;

let ColorRGBA735 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA";
LineSet733.color = ColorRGBA735;

Shape732.geometry = LineSet733;

HAnimSegment704.children[8] = Shape732;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
let Shape736 = browser.currentScene.createNode("Shape");
let LineSet737 = browser.currentScene.createNode("LineSet");
LineSet737.vertexCount = new MFInt32(new int[2]);
let Coordinate738 = browser.currentScene.createNode("Coordinate");
Coordinate738.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet737.coord = Coordinate738;

let ColorRGBA739 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA739.USE = "HAnimSiteLineColorRGBA";
LineSet737.color = ColorRGBA739;

Shape736.geometry = LineSet737;

HAnimSegment704.children[9] = Shape736;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
let Shape740 = browser.currentScene.createNode("Shape");
let LineSet741 = browser.currentScene.createNode("LineSet");
LineSet741.vertexCount = new MFInt32(new int[2]);
let Coordinate742 = browser.currentScene.createNode("Coordinate");
Coordinate742.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet741.coord = Coordinate742;

let ColorRGBA743 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA743.USE = "HAnimSiteLineColorRGBA";
LineSet741.color = ColorRGBA743;

Shape740.geometry = LineSet741;

HAnimSegment704.children[10] = Shape740;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
let Shape744 = browser.currentScene.createNode("Shape");
let LineSet745 = browser.currentScene.createNode("LineSet");
LineSet745.vertexCount = new MFInt32(new int[2]);
let Coordinate746 = browser.currentScene.createNode("Coordinate");
Coordinate746.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet745.coord = Coordinate746;

let ColorRGBA747 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA747.USE = "HAnimSiteLineColorRGBA";
LineSet745.color = ColorRGBA747;

Shape744.geometry = LineSet745;

HAnimSegment704.children[11] = Shape744;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
let Shape748 = browser.currentScene.createNode("Shape");
let LineSet749 = browser.currentScene.createNode("LineSet");
LineSet749.vertexCount = new MFInt32(new int[2]);
let Coordinate750 = browser.currentScene.createNode("Coordinate");
Coordinate750.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet749.coord = Coordinate750;

let ColorRGBA751 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA751.USE = "HAnimSiteLineColorRGBA";
LineSet749.color = ColorRGBA751;

Shape748.geometry = LineSet749;

HAnimSegment704.children[12] = Shape748;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
let Shape752 = browser.currentScene.createNode("Shape");
let LineSet753 = browser.currentScene.createNode("LineSet");
LineSet753.vertexCount = new MFInt32(new int[2]);
let Coordinate754 = browser.currentScene.createNode("Coordinate");
Coordinate754.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet753.coord = Coordinate754;

let ColorRGBA755 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA755.USE = "HAnimSiteLineColorRGBA";
LineSet753.color = ColorRGBA755;

Shape752.geometry = LineSet753;

HAnimSegment704.children[13] = Shape752;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
let Shape756 = browser.currentScene.createNode("Shape");
let LineSet757 = browser.currentScene.createNode("LineSet");
LineSet757.vertexCount = new MFInt32(new int[2]);
let Coordinate758 = browser.currentScene.createNode("Coordinate");
Coordinate758.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet757.coord = Coordinate758;

let ColorRGBA759 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA759.USE = "HAnimSiteLineColorRGBA";
LineSet757.color = ColorRGBA759;

Shape756.geometry = LineSet757;

HAnimSegment704.children[14] = Shape756;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
let Shape760 = browser.currentScene.createNode("Shape");
let LineSet761 = browser.currentScene.createNode("LineSet");
LineSet761.vertexCount = new MFInt32(new int[2]);
let Coordinate762 = browser.currentScene.createNode("Coordinate");
Coordinate762.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet761.coord = Coordinate762;

let ColorRGBA763 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA763.USE = "HAnimSiteLineColorRGBA";
LineSet761.color = ColorRGBA763;

Shape760.geometry = LineSet761;

HAnimSegment704.children[15] = Shape760;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
let Shape764 = browser.currentScene.createNode("Shape");
let LineSet765 = browser.currentScene.createNode("LineSet");
LineSet765.vertexCount = new MFInt32(new int[2]);
let Coordinate766 = browser.currentScene.createNode("Coordinate");
Coordinate766.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet765.coord = Coordinate766;

let ColorRGBA767 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA767.USE = "HAnimSiteLineColorRGBA";
LineSet765.color = ColorRGBA767;

Shape764.geometry = LineSet765;

HAnimSegment704.children[16] = Shape764;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
let Shape768 = browser.currentScene.createNode("Shape");
let LineSet769 = browser.currentScene.createNode("LineSet");
LineSet769.vertexCount = new MFInt32(new int[2]);
let Coordinate770 = browser.currentScene.createNode("Coordinate");
Coordinate770.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet769.coord = Coordinate770;

let ColorRGBA771 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA771.USE = "HAnimSiteLineColorRGBA";
LineSet769.color = ColorRGBA771;

Shape768.geometry = LineSet769;

HAnimSegment704.children[17] = Shape768;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
let Shape772 = browser.currentScene.createNode("Shape");
let LineSet773 = browser.currentScene.createNode("LineSet");
LineSet773.vertexCount = new MFInt32(new int[2]);
let Coordinate774 = browser.currentScene.createNode("Coordinate");
Coordinate774.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet773.coord = Coordinate774;

let ColorRGBA775 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA775.USE = "HAnimSiteLineColorRGBA";
LineSet773.color = ColorRGBA775;

Shape772.geometry = LineSet773;

HAnimSegment704.children[18] = Shape772;

//TODO move skull_tip x to zero
let HAnimSite776 = browser.currentScene.createNode("HAnimSite");
HAnimSite776.name = "skull_tip";
HAnimSite776.DEF = "hanim_skull_tip";
HAnimSite776.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//HAnimSite visualization shape
let TouchSensor777 = browser.currentScene.createNode("TouchSensor");
TouchSensor777.description = "HAnimSite skull_tip";
HAnimSite776.children = new MFNode();

HAnimSite776.children[0] = TouchSensor777;

let Shape778 = browser.currentScene.createNode("Shape");
Shape778.USE = "HAnimSiteShape";
HAnimSite776.children[1] = Shape778;

HAnimSegment704.children[19] = HAnimSite776;

let HAnimSite779 = browser.currentScene.createNode("HAnimSite");
HAnimSite779.name = "sellion_pt";
HAnimSite779.DEF = "hanim_sellion_pt";
HAnimSite779.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
let TouchSensor780 = browser.currentScene.createNode("TouchSensor");
TouchSensor780.description = "HAnimSite sellion";
HAnimSite779.children = new MFNode();

HAnimSite779.children[0] = TouchSensor780;

let Shape781 = browser.currentScene.createNode("Shape");
Shape781.USE = "HAnimSiteShape";
HAnimSite779.children[1] = Shape781;

HAnimSegment704.children[20] = HAnimSite779;

let HAnimSite782 = browser.currentScene.createNode("HAnimSite");
HAnimSite782.name = "r_infraorbitale_pt";
HAnimSite782.DEF = "hanim_r_infraorbitale_pt";
HAnimSite782.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor783 = browser.currentScene.createNode("TouchSensor");
TouchSensor783.description = "HAnimSite r_infraorbitale";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

let Shape784 = browser.currentScene.createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimSegment704.children[21] = HAnimSite782;

let HAnimSite785 = browser.currentScene.createNode("HAnimSite");
HAnimSite785.name = "l_infraorbitale_pt";
HAnimSite785.DEF = "hanim_l_infraorbitale_pt";
HAnimSite785.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor786 = browser.currentScene.createNode("TouchSensor");
TouchSensor786.description = "HAnimSite l_infraorbitale";
HAnimSite785.children = new MFNode();

HAnimSite785.children[0] = TouchSensor786;

let Shape787 = browser.currentScene.createNode("Shape");
Shape787.USE = "HAnimSiteShape";
HAnimSite785.children[1] = Shape787;

HAnimSegment704.children[22] = HAnimSite785;

let HAnimSite788 = browser.currentScene.createNode("HAnimSite");
HAnimSite788.name = "supramenton_pt";
HAnimSite788.DEF = "hanim_supramenton_pt";
HAnimSite788.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
let TouchSensor789 = browser.currentScene.createNode("TouchSensor");
TouchSensor789.description = "HAnimSite supramenton";
HAnimSite788.children = new MFNode();

HAnimSite788.children[0] = TouchSensor789;

let Shape790 = browser.currentScene.createNode("Shape");
Shape790.USE = "HAnimSiteShape";
HAnimSite788.children[1] = Shape790;

HAnimSegment704.children[23] = HAnimSite788;

let HAnimSite791 = browser.currentScene.createNode("HAnimSite");
HAnimSite791.name = "r_tragion_pt";
HAnimSite791.DEF = "hanim_r_tragion_pt";
HAnimSite791.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
let TouchSensor792 = browser.currentScene.createNode("TouchSensor");
TouchSensor792.description = "HAnimSite r_tragion";
HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = TouchSensor792;

let Shape793 = browser.currentScene.createNode("Shape");
Shape793.USE = "HAnimSiteShape";
HAnimSite791.children[1] = Shape793;

HAnimSegment704.children[24] = HAnimSite791;

let HAnimSite794 = browser.currentScene.createNode("HAnimSite");
HAnimSite794.name = "r_gonion_pt";
HAnimSite794.DEF = "hanim_r_gonion_pt";
HAnimSite794.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
let TouchSensor795 = browser.currentScene.createNode("TouchSensor");
TouchSensor795.description = "HAnimSite r_gonion";
HAnimSite794.children = new MFNode();

HAnimSite794.children[0] = TouchSensor795;

let Shape796 = browser.currentScene.createNode("Shape");
Shape796.USE = "HAnimSiteShape";
HAnimSite794.children[1] = Shape796;

HAnimSegment704.children[25] = HAnimSite794;

let HAnimSite797 = browser.currentScene.createNode("HAnimSite");
HAnimSite797.name = "l_tragion_pt";
HAnimSite797.DEF = "hanim_l_tragion_pt";
HAnimSite797.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
let TouchSensor798 = browser.currentScene.createNode("TouchSensor");
TouchSensor798.description = "HAnimSite l_tragion";
HAnimSite797.children = new MFNode();

HAnimSite797.children[0] = TouchSensor798;

let Shape799 = browser.currentScene.createNode("Shape");
Shape799.USE = "HAnimSiteShape";
HAnimSite797.children[1] = Shape799;

HAnimSegment704.children[26] = HAnimSite797;

let HAnimSite800 = browser.currentScene.createNode("HAnimSite");
HAnimSite800.name = "l_gonion_pt";
HAnimSite800.DEF = "hanim_l_gonion_pt";
HAnimSite800.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
let TouchSensor801 = browser.currentScene.createNode("TouchSensor");
TouchSensor801.description = "HAnimSite l_gonion";
HAnimSite800.children = new MFNode();

HAnimSite800.children[0] = TouchSensor801;

let Shape802 = browser.currentScene.createNode("Shape");
Shape802.USE = "HAnimSiteShape";
HAnimSite800.children[1] = Shape802;

HAnimSegment704.children[27] = HAnimSite800;

let HAnimSite803 = browser.currentScene.createNode("HAnimSite");
HAnimSite803.name = "nuchale_pt";
HAnimSite803.DEF = "hanim_nuchale_pt";
HAnimSite803.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
let TouchSensor804 = browser.currentScene.createNode("TouchSensor");
TouchSensor804.description = "HAnimSite nuchale";
HAnimSite803.children = new MFNode();

HAnimSite803.children[0] = TouchSensor804;

let Shape805 = browser.currentScene.createNode("Shape");
Shape805.USE = "HAnimSiteShape";
HAnimSite803.children[1] = Shape805;

HAnimSegment704.children[28] = HAnimSite803;

HAnimJoint703.children = new MFNode();

HAnimJoint703.children[0] = HAnimSegment704;

let HAnimJoint806 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint806.name = "l_eyeball_joint";
HAnimJoint806.DEF = "hanim_l_eyeball_joint";
HAnimJoint806.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint806.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint806.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment807.name = "l_eyeball";
HAnimSegment807.DEF = "hanim_l_eyeball";
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>
let TouchSensor808 = browser.currentScene.createNode("TouchSensor");
TouchSensor808.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment807.children = new MFNode();

HAnimSegment807.children[0] = TouchSensor808;

let Transform809 = browser.currentScene.createNode("Transform");
Transform809.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape810 = browser.currentScene.createNode("Shape");
Shape810.USE = "HAnimJointShape";
Transform809.children = new MFNode();

Transform809.children[0] = Shape810;

HAnimSegment807.children[1] = Transform809;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
let Shape811 = browser.currentScene.createNode("Shape");
let LineSet812 = browser.currentScene.createNode("LineSet");
LineSet812.vertexCount = new MFInt32(new int[2]);
let Coordinate813 = browser.currentScene.createNode("Coordinate");
Coordinate813.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet812.coord = Coordinate813;

let ColorRGBA814 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA814.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA814.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet812.color = ColorRGBA814;

Shape811.geometry = LineSet812;

HAnimSegment807.children[2] = Shape811;

let HAnimSite815 = browser.currentScene.createNode("HAnimSite");
HAnimSite815.name = "l_eyeball_site_view";
HAnimSite815.DEF = "hanim_l_eyeball_site_view";
HAnimSite815.translation = new SFVec3f(new float[0.034,1.64,0.05]);
let Viewpoint816 = browser.currentScene.createNode("Viewpoint");
Viewpoint816.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint816.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint816.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint816.position = new SFVec3f(new float[0,0,0]);
HAnimSite815.children = new MFNode();

HAnimSite815.children[0] = Viewpoint816;

//HAnimSite/Viewpoint visualization shape
let Anchor817 = browser.currentScene.createNode("Anchor");
Anchor817.description = "HAnimSite Viewpoint hanim_l_eyeball_site_view";
Anchor817.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
let LOD818 = browser.currentScene.createNode("LOD");
LOD818.forceTransitions = True;
LOD818.range = new MFFloat(new float[0.04]);
let WorldInfo819 = browser.currentScene.createNode("WorldInfo");
WorldInfo819.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD818.children = new MFNode();

LOD818.children[0] = WorldInfo819;

let Shape820 = browser.currentScene.createNode("Shape");
Shape820.DEF = "HAnimSiteViewpointShape";
let IndexedFaceSet821 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet821.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet821.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet821.creaseAngle = 0.5;
let Coordinate822 = browser.currentScene.createNode("Coordinate");
Coordinate822.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet821.coord = Coordinate822;

Shape820.geometry = IndexedFaceSet821;

let Appearance823 = browser.currentScene.createNode("Appearance");
let Material824 = browser.currentScene.createNode("Material");
Material824.diffuseColor = new SFColor(new float[0,0,1]);
Material824.transparency = 0.6;
Appearance823.material = Material824;

Shape820.appearance = Appearance823;

LOD818.children[1] = Shape820;

Anchor817.children = new MFNode();

Anchor817.children[0] = LOD818;

HAnimSite815.children[1] = Anchor817;

HAnimSegment807.children[3] = HAnimSite815;

HAnimJoint806.children = new MFNode();

HAnimJoint806.children[0] = HAnimSegment807;

HAnimJoint703.children[1] = HAnimJoint806;

let HAnimJoint825 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint825.name = "l_eyelid_joint";
HAnimJoint825.DEF = "hanim_l_eyelid_joint";
HAnimJoint825.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint825.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint825.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment826.name = "l_eyelid";
HAnimSegment826.DEF = "hanim_l_eyelid";
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>
let TouchSensor827 = browser.currentScene.createNode("TouchSensor");
TouchSensor827.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment826.children = new MFNode();

HAnimSegment826.children[0] = TouchSensor827;

let Transform828 = browser.currentScene.createNode("Transform");
Transform828.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape829 = browser.currentScene.createNode("Shape");
Shape829.USE = "HAnimJointShape";
Transform828.children = new MFNode();

Transform828.children[0] = Shape829;

HAnimSegment826.children[1] = Transform828;

HAnimJoint825.children = new MFNode();

HAnimJoint825.children[0] = HAnimSegment826;

HAnimJoint703.children[2] = HAnimJoint825;

let HAnimJoint830 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint830.name = "l_eyebrow_joint";
HAnimJoint830.DEF = "hanim_l_eyebrow_joint";
HAnimJoint830.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint830.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint830.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment831.name = "l_eyebrow";
HAnimSegment831.DEF = "hanim_l_eyebrow";
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>
let TouchSensor832 = browser.currentScene.createNode("TouchSensor");
TouchSensor832.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment831.children = new MFNode();

HAnimSegment831.children[0] = TouchSensor832;

let Transform833 = browser.currentScene.createNode("Transform");
Transform833.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
let Shape834 = browser.currentScene.createNode("Shape");
Shape834.USE = "HAnimJointShape";
Transform833.children = new MFNode();

Transform833.children[0] = Shape834;

HAnimSegment831.children[1] = Transform833;

HAnimJoint830.children = new MFNode();

HAnimJoint830.children[0] = HAnimSegment831;

HAnimJoint703.children[3] = HAnimJoint830;

let HAnimJoint835 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint835.name = "r_eyeball_joint";
HAnimJoint835.DEF = "hanim_r_eyeball_joint";
HAnimJoint835.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint835.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint835.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment836.name = "r_eyeball";
HAnimSegment836.DEF = "hanim_r_eyeball";
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>
let TouchSensor837 = browser.currentScene.createNode("TouchSensor");
TouchSensor837.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment836.children = new MFNode();

HAnimSegment836.children[0] = TouchSensor837;

let Transform838 = browser.currentScene.createNode("Transform");
Transform838.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape839 = browser.currentScene.createNode("Shape");
Shape839.USE = "HAnimJointShape";
Transform838.children = new MFNode();

Transform838.children[0] = Shape839;

HAnimSegment836.children[1] = Transform838;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
let Shape840 = browser.currentScene.createNode("Shape");
let LineSet841 = browser.currentScene.createNode("LineSet");
LineSet841.vertexCount = new MFInt32(new int[2]);
let Coordinate842 = browser.currentScene.createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet841.coord = Coordinate842;

let ColorRGBA843 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA843.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet841.color = ColorRGBA843;

Shape840.geometry = LineSet841;

HAnimSegment836.children[2] = Shape840;

let HAnimSite844 = browser.currentScene.createNode("HAnimSite");
HAnimSite844.name = "r_eyeball_site_view";
HAnimSite844.DEF = "hanim_r_eyeball_site_view";
HAnimSite844.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
let Viewpoint845 = browser.currentScene.createNode("Viewpoint");
Viewpoint845.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint845.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint845.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint845.position = new SFVec3f(new float[0,0,0]);
HAnimSite844.children = new MFNode();

HAnimSite844.children[0] = Viewpoint845;

//HAnimSite/Viewpoint visualization shape
let Anchor846 = browser.currentScene.createNode("Anchor");
Anchor846.description = "HAnimSite Viewpoint hanim_r_eyeball_site_view";
Anchor846.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
let LOD847 = browser.currentScene.createNode("LOD");
LOD847.forceTransitions = True;
LOD847.range = new MFFloat(new float[0.04]);
let WorldInfo848 = browser.currentScene.createNode("WorldInfo");
WorldInfo848.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD847.children = new MFNode();

LOD847.children[0] = WorldInfo848;

let Shape849 = browser.currentScene.createNode("Shape");
Shape849.USE = "HAnimSiteViewpointShape";
LOD847.children[1] = Shape849;

Anchor846.children = new MFNode();

Anchor846.children[0] = LOD847;

HAnimSite844.children[1] = Anchor846;

HAnimSegment836.children[3] = HAnimSite844;

HAnimJoint835.children = new MFNode();

HAnimJoint835.children[0] = HAnimSegment836;

HAnimJoint703.children[4] = HAnimJoint835;

let HAnimJoint850 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint850.name = "r_eyelid_joint";
HAnimJoint850.DEF = "hanim_r_eyelid_joint";
HAnimJoint850.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint850.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint850.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment851.name = "r_eyelid";
HAnimSegment851.DEF = "hanim_r_eyelid";
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>
let TouchSensor852 = browser.currentScene.createNode("TouchSensor");
TouchSensor852.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment851.children = new MFNode();

HAnimSegment851.children[0] = TouchSensor852;

let Transform853 = browser.currentScene.createNode("Transform");
Transform853.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape854 = browser.currentScene.createNode("Shape");
Shape854.USE = "HAnimJointShape";
Transform853.children = new MFNode();

Transform853.children[0] = Shape854;

HAnimSegment851.children[1] = Transform853;

HAnimJoint850.children = new MFNode();

HAnimJoint850.children[0] = HAnimSegment851;

HAnimJoint703.children[5] = HAnimJoint850;

let HAnimJoint855 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint855.name = "r_eyebrow_joint";
HAnimJoint855.DEF = "hanim_r_eyebrow_joint";
HAnimJoint855.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint855.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint855.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment856.name = "r_eyebrow";
HAnimSegment856.DEF = "hanim_r_eyebrow";
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>
let TouchSensor857 = browser.currentScene.createNode("TouchSensor");
TouchSensor857.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment856.children = new MFNode();

HAnimSegment856.children[0] = TouchSensor857;

let Transform858 = browser.currentScene.createNode("Transform");
Transform858.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
let Shape859 = browser.currentScene.createNode("Shape");
Shape859.USE = "HAnimJointShape";
Transform858.children = new MFNode();

Transform858.children[0] = Shape859;

HAnimSegment856.children[1] = Transform858;

HAnimJoint855.children = new MFNode();

HAnimJoint855.children[0] = HAnimSegment856;

HAnimJoint703.children[6] = HAnimJoint855;

//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimJoint860 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint860.name = "temporomandibular";
HAnimJoint860.DEF = "hanim_temporomandibular";
HAnimJoint860.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint860.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint860.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment861.name = "jaw";
HAnimSegment861.DEF = "hanim_jaw";
//<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>
let TouchSensor862 = browser.currentScene.createNode("TouchSensor");
TouchSensor862.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment861.children = new MFNode();

HAnimSegment861.children[0] = TouchSensor862;

let Transform863 = browser.currentScene.createNode("Transform");
Transform863.translation = new SFVec3f(new float[0,1.63,0.015]);
let Shape864 = browser.currentScene.createNode("Shape");
Shape864.USE = "HAnimJointShape";
Transform863.children = new MFNode();

Transform863.children[0] = Shape864;

HAnimSegment861.children[1] = Transform863;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
let Shape865 = browser.currentScene.createNode("Shape");
let LineSet866 = browser.currentScene.createNode("LineSet");
LineSet866.vertexCount = new MFInt32(new int[2]);
let Coordinate867 = browser.currentScene.createNode("Coordinate");
Coordinate867.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet866.coord = Coordinate867;

let ColorRGBA868 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA868.USE = "HAnimSiteLineColorRGBA";
LineSet866.color = ColorRGBA868;

Shape865.geometry = LineSet866;

HAnimSegment861.children[2] = Shape865;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
let Shape869 = browser.currentScene.createNode("Shape");
let LineSet870 = browser.currentScene.createNode("LineSet");
LineSet870.vertexCount = new MFInt32(new int[2]);
let Coordinate871 = browser.currentScene.createNode("Coordinate");
Coordinate871.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet870.coord = Coordinate871;

let ColorRGBA872 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSiteLineColorRGBA";
LineSet870.color = ColorRGBA872;

Shape869.geometry = LineSet870;

HAnimSegment861.children[3] = Shape869;

let HAnimSite873 = browser.currentScene.createNode("HAnimSite");
HAnimSite873.name = "temporomandibular_l_site_pt";
HAnimSite873.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite873.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor874 = browser.currentScene.createNode("TouchSensor");
TouchSensor874.description = "HAnimSite temporomandibular_l_site";
HAnimSite873.children = new MFNode();

HAnimSite873.children[0] = TouchSensor874;

let Shape875 = browser.currentScene.createNode("Shape");
Shape875.USE = "HAnimSiteShape";
HAnimSite873.children[1] = Shape875;

HAnimSegment861.children[4] = HAnimSite873;

let HAnimSite876 = browser.currentScene.createNode("HAnimSite");
HAnimSite876.name = "temporomandibular_r_site_pt";
HAnimSite876.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite876.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor877 = browser.currentScene.createNode("TouchSensor");
TouchSensor877.description = "HAnimSite temporomandibular_r_site";
HAnimSite876.children = new MFNode();

HAnimSite876.children[0] = TouchSensor877;

let Shape878 = browser.currentScene.createNode("Shape");
Shape878.USE = "HAnimSiteShape";
HAnimSite876.children[1] = Shape878;

HAnimSegment861.children[5] = HAnimSite876;

HAnimJoint860.children = new MFNode();

HAnimJoint860.children[0] = HAnimSegment861;

HAnimJoint703.children[7] = HAnimJoint860;

HAnimJoint694.children[1] = HAnimJoint703;

HAnimJoint685.children[1] = HAnimJoint694;

HAnimJoint676.children[1] = HAnimJoint685;

HAnimJoint667.children[1] = HAnimJoint676;

HAnimJoint658.children[1] = HAnimJoint667;

HAnimJoint649.children[1] = HAnimJoint658;

HAnimJoint626.children[1] = HAnimJoint649;

HAnimJoint595.children[1] = HAnimJoint626;

let HAnimJoint879 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint879.name = "l_sternoclavicular";
HAnimJoint879.DEF = "hanim_l_sternoclavicular";
HAnimJoint879.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint879.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint879.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment880 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment880.name = "l_clavicle";
HAnimSegment880.DEF = "hanim_l_clavicle";
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>
let TouchSensor881 = browser.currentScene.createNode("TouchSensor");
TouchSensor881.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment880.children = new MFNode();

HAnimSegment880.children[0] = TouchSensor881;

let Transform882 = browser.currentScene.createNode("Transform");
Transform882.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Shape883 = browser.currentScene.createNode("Shape");
Shape883.USE = "HAnimJointShape";
Transform882.children = new MFNode();

Transform882.children[0] = Shape883;

HAnimSegment880.children[1] = Transform882;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
let Shape884 = browser.currentScene.createNode("Shape");
let LineSet885 = browser.currentScene.createNode("LineSet");
LineSet885.vertexCount = new MFInt32(new int[2]);
let Coordinate886 = browser.currentScene.createNode("Coordinate");
Coordinate886.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet885.coord = Coordinate886;

let ColorRGBA887 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA887.USE = "HAnimSegmentLineColorRGBA";
LineSet885.color = ColorRGBA887;

Shape884.geometry = LineSet885;

HAnimSegment880.children[2] = Shape884;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
let Shape888 = browser.currentScene.createNode("Shape");
let LineSet889 = browser.currentScene.createNode("LineSet");
LineSet889.vertexCount = new MFInt32(new int[2]);
let Coordinate890 = browser.currentScene.createNode("Coordinate");
Coordinate890.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet889.coord = Coordinate890;

let ColorRGBA891 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA891.USE = "HAnimSiteLineColorRGBA";
LineSet889.color = ColorRGBA891;

Shape888.geometry = LineSet889;

HAnimSegment880.children[3] = Shape888;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
let Shape892 = browser.currentScene.createNode("Shape");
let LineSet893 = browser.currentScene.createNode("LineSet");
LineSet893.vertexCount = new MFInt32(new int[2]);
let Coordinate894 = browser.currentScene.createNode("Coordinate");
Coordinate894.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet893.coord = Coordinate894;

let ColorRGBA895 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA895.USE = "HAnimSiteLineColorRGBA";
LineSet893.color = ColorRGBA895;

Shape892.geometry = LineSet893;

HAnimSegment880.children[4] = Shape892;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
let Shape896 = browser.currentScene.createNode("Shape");
let LineSet897 = browser.currentScene.createNode("LineSet");
LineSet897.vertexCount = new MFInt32(new int[2]);
let Coordinate898 = browser.currentScene.createNode("Coordinate");
Coordinate898.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet897.coord = Coordinate898;

let ColorRGBA899 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA899.USE = "HAnimSiteLineColorRGBA";
LineSet897.color = ColorRGBA899;

Shape896.geometry = LineSet897;

HAnimSegment880.children[5] = Shape896;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
let Shape900 = browser.currentScene.createNode("Shape");
let LineSet901 = browser.currentScene.createNode("LineSet");
LineSet901.vertexCount = new MFInt32(new int[2]);
let Coordinate902 = browser.currentScene.createNode("Coordinate");
Coordinate902.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet901.coord = Coordinate902;

let ColorRGBA903 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA903.USE = "HAnimSiteLineColorRGBA";
LineSet901.color = ColorRGBA903;

Shape900.geometry = LineSet901;

HAnimSegment880.children[6] = Shape900;

let HAnimSite904 = browser.currentScene.createNode("HAnimSite");
HAnimSite904.name = "l_clavicale_pt";
HAnimSite904.DEF = "hanim_l_clavicale_pt";
HAnimSite904.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
let TouchSensor905 = browser.currentScene.createNode("TouchSensor");
TouchSensor905.description = "HAnimSite l_clavicale";
HAnimSite904.children = new MFNode();

HAnimSite904.children[0] = TouchSensor905;

let Shape906 = browser.currentScene.createNode("Shape");
Shape906.USE = "HAnimSiteShape";
HAnimSite904.children[1] = Shape906;

HAnimSegment880.children[7] = HAnimSite904;

let HAnimSite907 = browser.currentScene.createNode("HAnimSite");
HAnimSite907.name = "l_acromion_pt";
HAnimSite907.DEF = "hanim_l_acromion_pt";
HAnimSite907.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
let TouchSensor908 = browser.currentScene.createNode("TouchSensor");
TouchSensor908.description = "HAnimSite l_acromion";
HAnimSite907.children = new MFNode();

HAnimSite907.children[0] = TouchSensor908;

let Shape909 = browser.currentScene.createNode("Shape");
Shape909.USE = "HAnimSiteShape";
HAnimSite907.children[1] = Shape909;

HAnimSegment880.children[8] = HAnimSite907;

let HAnimSite910 = browser.currentScene.createNode("HAnimSite");
HAnimSite910.name = "l_axilla_ant_pt";
HAnimSite910.DEF = "hanim_l_axilla_ant_pt";
HAnimSite910.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
let TouchSensor911 = browser.currentScene.createNode("TouchSensor");
TouchSensor911.description = "HAnimSite l_axilla_ant";
HAnimSite910.children = new MFNode();

HAnimSite910.children[0] = TouchSensor911;

let Shape912 = browser.currentScene.createNode("Shape");
Shape912.USE = "HAnimSiteShape";
HAnimSite910.children[1] = Shape912;

HAnimSegment880.children[9] = HAnimSite910;

let HAnimSite913 = browser.currentScene.createNode("HAnimSite");
HAnimSite913.name = "l_axilla_post_pt";
HAnimSite913.DEF = "hanim_l_axilla_post_pt";
HAnimSite913.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
let TouchSensor914 = browser.currentScene.createNode("TouchSensor");
TouchSensor914.description = "HAnimSite l_axilla_post";
HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = TouchSensor914;

let Shape915 = browser.currentScene.createNode("Shape");
Shape915.USE = "HAnimSiteShape";
HAnimSite913.children[1] = Shape915;

HAnimSegment880.children[10] = HAnimSite913;

HAnimJoint879.children = new MFNode();

HAnimJoint879.children[0] = HAnimSegment880;

let HAnimJoint916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint916.name = "l_acromioclavicular";
HAnimJoint916.DEF = "hanim_l_acromioclavicular";
HAnimJoint916.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint916.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint916.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment917 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment917.name = "l_scapula";
HAnimSegment917.DEF = "hanim_l_scapula";
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>
let TouchSensor918 = browser.currentScene.createNode("TouchSensor");
TouchSensor918.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment917.children = new MFNode();

HAnimSegment917.children[0] = TouchSensor918;

let Transform919 = browser.currentScene.createNode("Transform");
Transform919.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Shape920 = browser.currentScene.createNode("Shape");
Shape920.USE = "HAnimJointShape";
Transform919.children = new MFNode();

Transform919.children[0] = Shape920;

HAnimSegment917.children[1] = Transform919;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
let Shape921 = browser.currentScene.createNode("Shape");
let LineSet922 = browser.currentScene.createNode("LineSet");
LineSet922.vertexCount = new MFInt32(new int[2]);
let Coordinate923 = browser.currentScene.createNode("Coordinate");
Coordinate923.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet922.coord = Coordinate923;

let ColorRGBA924 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA";
LineSet922.color = ColorRGBA924;

Shape921.geometry = LineSet922;

HAnimSegment917.children[2] = Shape921;

HAnimJoint916.children = new MFNode();

HAnimJoint916.children[0] = HAnimSegment917;

let HAnimJoint925 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint925.name = "l_shoulder";
HAnimJoint925.DEF = "hanim_l_shoulder";
HAnimJoint925.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint925.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint925.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment926 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment926.name = "l_upperarm";
HAnimSegment926.DEF = "hanim_l_upperarm";
//<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>
let TouchSensor927 = browser.currentScene.createNode("TouchSensor");
TouchSensor927.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment926.children = new MFNode();

HAnimSegment926.children[0] = TouchSensor927;

let Transform928 = browser.currentScene.createNode("Transform");
Transform928.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape929 = browser.currentScene.createNode("Shape");
Shape929.USE = "HAnimJointShape";
Transform928.children = new MFNode();

Transform928.children[0] = Shape929;

HAnimSegment926.children[1] = Transform928;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
let Shape930 = browser.currentScene.createNode("Shape");
let LineSet931 = browser.currentScene.createNode("LineSet");
LineSet931.vertexCount = new MFInt32(new int[2]);
let Coordinate932 = browser.currentScene.createNode("Coordinate");
Coordinate932.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet931.coord = Coordinate932;

let ColorRGBA933 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA";
LineSet931.color = ColorRGBA933;

Shape930.geometry = LineSet931;

HAnimSegment926.children[2] = Shape930;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
let Shape934 = browser.currentScene.createNode("Shape");
let LineSet935 = browser.currentScene.createNode("LineSet");
LineSet935.vertexCount = new MFInt32(new int[2]);
let Coordinate936 = browser.currentScene.createNode("Coordinate");
Coordinate936.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet935.coord = Coordinate936;

let ColorRGBA937 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA937.USE = "HAnimSiteLineColorRGBA";
LineSet935.color = ColorRGBA937;

Shape934.geometry = LineSet935;

HAnimSegment926.children[3] = Shape934;

let HAnimSite938 = browser.currentScene.createNode("HAnimSite");
HAnimSite938.name = "l_humeral_lateral_epicn_pt";
HAnimSite938.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite938.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
let TouchSensor939 = browser.currentScene.createNode("TouchSensor");
TouchSensor939.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite938.children = new MFNode();

HAnimSite938.children[0] = TouchSensor939;

let Shape940 = browser.currentScene.createNode("Shape");
Shape940.USE = "HAnimSiteShape";
HAnimSite938.children[1] = Shape940;

HAnimSegment926.children[4] = HAnimSite938;

HAnimJoint925.children = new MFNode();

HAnimJoint925.children[0] = HAnimSegment926;

let HAnimJoint941 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint941.name = "l_elbow";
HAnimJoint941.DEF = "hanim_l_elbow";
HAnimJoint941.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint941.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint941.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment942 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment942.name = "l_forearm";
HAnimSegment942.DEF = "hanim_l_forearm";
//<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>
let TouchSensor943 = browser.currentScene.createNode("TouchSensor");
TouchSensor943.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment942.children = new MFNode();

HAnimSegment942.children[0] = TouchSensor943;

let Transform944 = browser.currentScene.createNode("Transform");
Transform944.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape945 = browser.currentScene.createNode("Shape");
Shape945.USE = "HAnimJointShape";
Transform944.children = new MFNode();

Transform944.children[0] = Shape945;

HAnimSegment942.children[1] = Transform944;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
let Shape946 = browser.currentScene.createNode("Shape");
let LineSet947 = browser.currentScene.createNode("LineSet");
LineSet947.vertexCount = new MFInt32(new int[2]);
let Coordinate948 = browser.currentScene.createNode("Coordinate");
Coordinate948.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet947.coord = Coordinate948;

let ColorRGBA949 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA949.USE = "HAnimSegmentLineColorRGBA";
LineSet947.color = ColorRGBA949;

Shape946.geometry = LineSet947;

HAnimSegment942.children[2] = Shape946;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
let Shape950 = browser.currentScene.createNode("Shape");
let LineSet951 = browser.currentScene.createNode("LineSet");
LineSet951.vertexCount = new MFInt32(new int[2]);
let Coordinate952 = browser.currentScene.createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet951.coord = Coordinate952;

let ColorRGBA953 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA953.USE = "HAnimSiteLineColorRGBA";
LineSet951.color = ColorRGBA953;

Shape950.geometry = LineSet951;

HAnimSegment942.children[3] = Shape950;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
let Shape954 = browser.currentScene.createNode("Shape");
let LineSet955 = browser.currentScene.createNode("LineSet");
LineSet955.vertexCount = new MFInt32(new int[2]);
let Coordinate956 = browser.currentScene.createNode("Coordinate");
Coordinate956.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet955.coord = Coordinate956;

let ColorRGBA957 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA957.USE = "HAnimSiteLineColorRGBA";
LineSet955.color = ColorRGBA957;

Shape954.geometry = LineSet955;

HAnimSegment942.children[4] = Shape954;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
let Shape958 = browser.currentScene.createNode("Shape");
let LineSet959 = browser.currentScene.createNode("LineSet");
LineSet959.vertexCount = new MFInt32(new int[2]);
let Coordinate960 = browser.currentScene.createNode("Coordinate");
Coordinate960.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet959.coord = Coordinate960;

let ColorRGBA961 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSiteLineColorRGBA";
LineSet959.color = ColorRGBA961;

Shape958.geometry = LineSet959;

HAnimSegment942.children[5] = Shape958;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
let Shape962 = browser.currentScene.createNode("Shape");
let LineSet963 = browser.currentScene.createNode("LineSet");
LineSet963.vertexCount = new MFInt32(new int[2]);
let Coordinate964 = browser.currentScene.createNode("Coordinate");
Coordinate964.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet963.coord = Coordinate964;

let ColorRGBA965 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSiteLineColorRGBA";
LineSet963.color = ColorRGBA965;

Shape962.geometry = LineSet963;

HAnimSegment942.children[6] = Shape962;

let HAnimSite966 = browser.currentScene.createNode("HAnimSite");
HAnimSite966.name = "l_radial_styloid_pt";
HAnimSite966.DEF = "hanim_l_radial_styloid_pt";
HAnimSite966.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
let TouchSensor967 = browser.currentScene.createNode("TouchSensor");
TouchSensor967.description = "HAnimSite l_radial_styloid";
HAnimSite966.children = new MFNode();

HAnimSite966.children[0] = TouchSensor967;

let Shape968 = browser.currentScene.createNode("Shape");
Shape968.USE = "HAnimSiteShape";
HAnimSite966.children[1] = Shape968;

HAnimSegment942.children[7] = HAnimSite966;

let HAnimSite969 = browser.currentScene.createNode("HAnimSite");
HAnimSite969.name = "l_olecranon_pt";
HAnimSite969.DEF = "hanim_l_olecranon_pt";
HAnimSite969.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
let TouchSensor970 = browser.currentScene.createNode("TouchSensor");
TouchSensor970.description = "HAnimSite l_olecranon";
HAnimSite969.children = new MFNode();

HAnimSite969.children[0] = TouchSensor970;

let Shape971 = browser.currentScene.createNode("Shape");
Shape971.USE = "HAnimSiteShape";
HAnimSite969.children[1] = Shape971;

HAnimSegment942.children[8] = HAnimSite969;

let HAnimSite972 = browser.currentScene.createNode("HAnimSite");
HAnimSite972.name = "l_humeral_medial_epicn_pt";
HAnimSite972.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite972.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
let TouchSensor973 = browser.currentScene.createNode("TouchSensor");
TouchSensor973.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite972.children = new MFNode();

HAnimSite972.children[0] = TouchSensor973;

let Shape974 = browser.currentScene.createNode("Shape");
Shape974.USE = "HAnimSiteShape";
HAnimSite972.children[1] = Shape974;

HAnimSegment942.children[9] = HAnimSite972;

let HAnimSite975 = browser.currentScene.createNode("HAnimSite");
HAnimSite975.name = "l_radiale_pt";
HAnimSite975.DEF = "hanim_l_radiale_pt";
HAnimSite975.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
let TouchSensor976 = browser.currentScene.createNode("TouchSensor");
TouchSensor976.description = "HAnimSite l_radiale";
HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = TouchSensor976;

let Shape977 = browser.currentScene.createNode("Shape");
Shape977.USE = "HAnimSiteShape";
HAnimSite975.children[1] = Shape977;

HAnimSegment942.children[10] = HAnimSite975;

HAnimJoint941.children = new MFNode();

HAnimJoint941.children[0] = HAnimSegment942;

let HAnimJoint978 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint978.name = "l_wrist";
HAnimJoint978.DEF = "hanim_l_wrist";
HAnimJoint978.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint978.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint978.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment979 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment979.name = "l_hand";
HAnimSegment979.DEF = "hanim_l_hand";
//<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>
let TouchSensor980 = browser.currentScene.createNode("TouchSensor");
TouchSensor980.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment979.children = new MFNode();

HAnimSegment979.children[0] = TouchSensor980;

let Transform981 = browser.currentScene.createNode("Transform");
Transform981.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape982 = browser.currentScene.createNode("Shape");
Shape982.USE = "HAnimJointShape";
Transform981.children = new MFNode();

Transform981.children[0] = Shape982;

HAnimSegment979.children[1] = Transform981;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
let Shape983 = browser.currentScene.createNode("Shape");
let LineSet984 = browser.currentScene.createNode("LineSet");
LineSet984.vertexCount = new MFInt32(new int[2]);
let Coordinate985 = browser.currentScene.createNode("Coordinate");
Coordinate985.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet984.coord = Coordinate985;

let ColorRGBA986 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA986.USE = "HAnimSegmentLineColorRGBA";
LineSet984.color = ColorRGBA986;

Shape983.geometry = LineSet984;

HAnimSegment979.children[2] = Shape983;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
let Shape987 = browser.currentScene.createNode("Shape");
let LineSet988 = browser.currentScene.createNode("LineSet");
LineSet988.vertexCount = new MFInt32(new int[2]);
let Coordinate989 = browser.currentScene.createNode("Coordinate");
Coordinate989.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet988.coord = Coordinate989;

let ColorRGBA990 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA990.USE = "HAnimSegmentLineColorRGBA";
LineSet988.color = ColorRGBA990;

Shape987.geometry = LineSet988;

HAnimSegment979.children[3] = Shape987;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
let Shape991 = browser.currentScene.createNode("Shape");
let LineSet992 = browser.currentScene.createNode("LineSet");
LineSet992.vertexCount = new MFInt32(new int[2]);
let Coordinate993 = browser.currentScene.createNode("Coordinate");
Coordinate993.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet992.coord = Coordinate993;

let ColorRGBA994 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
LineSet992.color = ColorRGBA994;

Shape991.geometry = LineSet992;

HAnimSegment979.children[4] = Shape991;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
let Shape995 = browser.currentScene.createNode("Shape");
let LineSet996 = browser.currentScene.createNode("LineSet");
LineSet996.vertexCount = new MFInt32(new int[2]);
let Coordinate997 = browser.currentScene.createNode("Coordinate");
Coordinate997.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet996.coord = Coordinate997;

let ColorRGBA998 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA998.USE = "HAnimSegmentLineColorRGBA";
LineSet996.color = ColorRGBA998;

Shape995.geometry = LineSet996;

HAnimSegment979.children[5] = Shape995;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
let Shape999 = browser.currentScene.createNode("Shape");
let LineSet1000 = browser.currentScene.createNode("LineSet");
LineSet1000.vertexCount = new MFInt32(new int[2]);
let Coordinate1001 = browser.currentScene.createNode("Coordinate");
Coordinate1001.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1000.coord = Coordinate1001;

let ColorRGBA1002 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA";
LineSet1000.color = ColorRGBA1002;

Shape999.geometry = LineSet1000;

HAnimSegment979.children[6] = Shape999;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
let Shape1003 = browser.currentScene.createNode("Shape");
let LineSet1004 = browser.currentScene.createNode("LineSet");
LineSet1004.vertexCount = new MFInt32(new int[2]);
let Coordinate1005 = browser.currentScene.createNode("Coordinate");
Coordinate1005.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1004.coord = Coordinate1005;

let ColorRGBA1006 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1006.USE = "HAnimSiteLineColorRGBA";
LineSet1004.color = ColorRGBA1006;

Shape1003.geometry = LineSet1004;

HAnimSegment979.children[7] = Shape1003;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
let Shape1007 = browser.currentScene.createNode("Shape");
let LineSet1008 = browser.currentScene.createNode("LineSet");
LineSet1008.vertexCount = new MFInt32(new int[2]);
let Coordinate1009 = browser.currentScene.createNode("Coordinate");
Coordinate1009.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1008.coord = Coordinate1009;

let ColorRGBA1010 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1010.USE = "HAnimSiteLineColorRGBA";
LineSet1008.color = ColorRGBA1010;

Shape1007.geometry = LineSet1008;

HAnimSegment979.children[8] = Shape1007;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
let Shape1011 = browser.currentScene.createNode("Shape");
let LineSet1012 = browser.currentScene.createNode("LineSet");
LineSet1012.vertexCount = new MFInt32(new int[2]);
let Coordinate1013 = browser.currentScene.createNode("Coordinate");
Coordinate1013.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1012.coord = Coordinate1013;

let ColorRGBA1014 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1014.USE = "HAnimSiteLineColorRGBA";
LineSet1012.color = ColorRGBA1014;

Shape1011.geometry = LineSet1012;

HAnimSegment979.children[9] = Shape1011;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
let Shape1015 = browser.currentScene.createNode("Shape");
let LineSet1016 = browser.currentScene.createNode("LineSet");
LineSet1016.vertexCount = new MFInt32(new int[2]);
let Coordinate1017 = browser.currentScene.createNode("Coordinate");
Coordinate1017.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1016.coord = Coordinate1017;

let ColorRGBA1018 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1018.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1016.color = ColorRGBA1018;

Shape1015.geometry = LineSet1016;

HAnimSegment979.children[10] = Shape1015;

let HAnimSite1019 = browser.currentScene.createNode("HAnimSite");
HAnimSite1019.name = "l_metacarpal_pha2_pt";
HAnimSite1019.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1019.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
let TouchSensor1020 = browser.currentScene.createNode("TouchSensor");
TouchSensor1020.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1019.children = new MFNode();

HAnimSite1019.children[0] = TouchSensor1020;

let Shape1021 = browser.currentScene.createNode("Shape");
Shape1021.USE = "HAnimSiteShape";
HAnimSite1019.children[1] = Shape1021;

HAnimSegment979.children[11] = HAnimSite1019;

let HAnimSite1022 = browser.currentScene.createNode("HAnimSite");
HAnimSite1022.name = "l_ulnar_styloid_pt";
HAnimSite1022.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1022.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
let TouchSensor1023 = browser.currentScene.createNode("TouchSensor");
TouchSensor1023.description = "HAnimSite l_ulnar_styloid";
HAnimSite1022.children = new MFNode();

HAnimSite1022.children[0] = TouchSensor1023;

let Shape1024 = browser.currentScene.createNode("Shape");
Shape1024.USE = "HAnimSiteShape";
HAnimSite1022.children[1] = Shape1024;

HAnimSegment979.children[12] = HAnimSite1022;

let HAnimSite1025 = browser.currentScene.createNode("HAnimSite");
HAnimSite1025.name = "l_metacarpal_pha5_pt";
HAnimSite1025.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1025.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
let TouchSensor1026 = browser.currentScene.createNode("TouchSensor");
TouchSensor1026.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1025.children = new MFNode();

HAnimSite1025.children[0] = TouchSensor1026;

let Shape1027 = browser.currentScene.createNode("Shape");
Shape1027.USE = "HAnimSiteShape";
HAnimSite1025.children[1] = Shape1027;

HAnimSegment979.children[13] = HAnimSite1025;

let HAnimSite1028 = browser.currentScene.createNode("HAnimSite");
HAnimSite1028.name = "l_hand_front_view";
HAnimSite1028.DEF = "hanim_l_hand_front_view";
HAnimSite1028.translation = new SFVec3f(new float[0.3,0.75,0.45]);
let Viewpoint1029 = browser.currentScene.createNode("Viewpoint");
Viewpoint1029.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1029.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1029.description = "left hand front";
Viewpoint1029.position = new SFVec3f(new float[0,0,0]);
HAnimSite1028.children = new MFNode();

HAnimSite1028.children[0] = Viewpoint1029;

//HAnimSite/Viewpoint visualization shape
let Anchor1030 = browser.currentScene.createNode("Anchor");
Anchor1030.description = "HAnimSite Viewpoint hanim_l_hand_front_view";
Anchor1030.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
let LOD1031 = browser.currentScene.createNode("LOD");
LOD1031.forceTransitions = True;
LOD1031.range = new MFFloat(new float[0.04]);
let WorldInfo1032 = browser.currentScene.createNode("WorldInfo");
WorldInfo1032.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1031.children = new MFNode();

LOD1031.children[0] = WorldInfo1032;

let Shape1033 = browser.currentScene.createNode("Shape");
Shape1033.USE = "HAnimSiteViewpointShape";
LOD1031.children[1] = Shape1033;

Anchor1030.children = new MFNode();

Anchor1030.children[0] = LOD1031;

HAnimSite1028.children[1] = Anchor1030;

HAnimSegment979.children[14] = HAnimSite1028;

HAnimJoint978.children = new MFNode();

HAnimJoint978.children[0] = HAnimSegment979;

let HAnimJoint1034 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1034.name = "l_thumb1";
HAnimJoint1034.DEF = "hanim_l_thumb1";
HAnimJoint1034.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1034.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1034.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1035 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1035.name = "l_thumb_metacarpal";
HAnimSegment1035.DEF = "hanim_l_thumb_metacarpal";
//<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>
let TouchSensor1036 = browser.currentScene.createNode("TouchSensor");
TouchSensor1036.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1035.children = new MFNode();

HAnimSegment1035.children[0] = TouchSensor1036;

let Transform1037 = browser.currentScene.createNode("Transform");
Transform1037.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Shape1038 = browser.currentScene.createNode("Shape");
Shape1038.USE = "HAnimJointShape";
Transform1037.children = new MFNode();

Transform1037.children[0] = Shape1038;

HAnimSegment1035.children[1] = Transform1037;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
let Shape1039 = browser.currentScene.createNode("Shape");
let LineSet1040 = browser.currentScene.createNode("LineSet");
LineSet1040.vertexCount = new MFInt32(new int[2]);
let Coordinate1041 = browser.currentScene.createNode("Coordinate");
Coordinate1041.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1040.coord = Coordinate1041;

let ColorRGBA1042 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1042.USE = "HAnimSegmentLineColorRGBA";
LineSet1040.color = ColorRGBA1042;

Shape1039.geometry = LineSet1040;

HAnimSegment1035.children[2] = Shape1039;

HAnimJoint1034.children = new MFNode();

HAnimJoint1034.children[0] = HAnimSegment1035;

let HAnimJoint1043 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1043.name = "l_thumb2";
HAnimJoint1043.DEF = "hanim_l_thumb2";
HAnimJoint1043.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1043.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1043.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1044 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1044.name = "l_thumb_proximal";
HAnimSegment1044.DEF = "hanim_l_thumb_proximal";
//<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>
let TouchSensor1045 = browser.currentScene.createNode("TouchSensor");
TouchSensor1045.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1044.children = new MFNode();

HAnimSegment1044.children[0] = TouchSensor1045;

let Transform1046 = browser.currentScene.createNode("Transform");
Transform1046.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Shape1047 = browser.currentScene.createNode("Shape");
Shape1047.USE = "HAnimJointShape";
Transform1046.children = new MFNode();

Transform1046.children[0] = Shape1047;

HAnimSegment1044.children[1] = Transform1046;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
let Shape1048 = browser.currentScene.createNode("Shape");
let LineSet1049 = browser.currentScene.createNode("LineSet");
LineSet1049.vertexCount = new MFInt32(new int[2]);
let Coordinate1050 = browser.currentScene.createNode("Coordinate");
Coordinate1050.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1049.coord = Coordinate1050;

let ColorRGBA1051 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1051.USE = "HAnimSegmentLineColorRGBA";
LineSet1049.color = ColorRGBA1051;

Shape1048.geometry = LineSet1049;

HAnimSegment1044.children[2] = Shape1048;

HAnimJoint1043.children = new MFNode();

HAnimJoint1043.children[0] = HAnimSegment1044;

let HAnimJoint1052 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1052.name = "l_thumb3";
HAnimJoint1052.DEF = "hanim_l_thumb3";
HAnimJoint1052.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1052.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1052.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1053 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1053.name = "l_thumb_distal";
HAnimSegment1053.DEF = "hanim_l_thumb_distal";
//<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>
let TouchSensor1054 = browser.currentScene.createNode("TouchSensor");
TouchSensor1054.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1053.children = new MFNode();

HAnimSegment1053.children[0] = TouchSensor1054;

let Transform1055 = browser.currentScene.createNode("Transform");
Transform1055.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Shape1056 = browser.currentScene.createNode("Shape");
Shape1056.USE = "HAnimJointShape";
Transform1055.children = new MFNode();

Transform1055.children[0] = Shape1056;

HAnimSegment1053.children[1] = Transform1055;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
let Shape1057 = browser.currentScene.createNode("Shape");
let LineSet1058 = browser.currentScene.createNode("LineSet");
LineSet1058.vertexCount = new MFInt32(new int[2]);
let Coordinate1059 = browser.currentScene.createNode("Coordinate");
Coordinate1059.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1058.coord = Coordinate1059;

let ColorRGBA1060 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1060.USE = "HAnimSiteLineColorRGBA";
LineSet1058.color = ColorRGBA1060;

Shape1057.geometry = LineSet1058;

HAnimSegment1053.children[2] = Shape1057;

let HAnimSite1061 = browser.currentScene.createNode("HAnimSite");
HAnimSite1061.name = "l_thumb_distal_tip";
HAnimSite1061.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1061.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
let TouchSensor1062 = browser.currentScene.createNode("TouchSensor");
TouchSensor1062.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1061.children = new MFNode();

HAnimSite1061.children[0] = TouchSensor1062;

let Shape1063 = browser.currentScene.createNode("Shape");
Shape1063.USE = "HAnimSiteShape";
HAnimSite1061.children[1] = Shape1063;

HAnimSegment1053.children[3] = HAnimSite1061;

HAnimJoint1052.children = new MFNode();

HAnimJoint1052.children[0] = HAnimSegment1053;

HAnimJoint1043.children[1] = HAnimJoint1052;

HAnimJoint1034.children[1] = HAnimJoint1043;

HAnimJoint978.children[1] = HAnimJoint1034;

let HAnimJoint1064 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1064.name = "l_index0";
HAnimJoint1064.DEF = "hanim_l_index0";
HAnimJoint1064.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1064.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1064.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1065 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1065.name = "l_index_metacarpal";
HAnimSegment1065.DEF = "hanim_l_index_metacarpal";
//<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>
let TouchSensor1066 = browser.currentScene.createNode("TouchSensor");
TouchSensor1066.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1065.children = new MFNode();

HAnimSegment1065.children[0] = TouchSensor1066;

let Transform1067 = browser.currentScene.createNode("Transform");
Transform1067.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Shape1068 = browser.currentScene.createNode("Shape");
Shape1068.USE = "HAnimJointShape";
Transform1067.children = new MFNode();

Transform1067.children[0] = Shape1068;

HAnimSegment1065.children[1] = Transform1067;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
let Shape1069 = browser.currentScene.createNode("Shape");
let LineSet1070 = browser.currentScene.createNode("LineSet");
LineSet1070.vertexCount = new MFInt32(new int[2]);
let Coordinate1071 = browser.currentScene.createNode("Coordinate");
Coordinate1071.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1070.coord = Coordinate1071;

let ColorRGBA1072 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1072.USE = "HAnimSegmentLineColorRGBA";
LineSet1070.color = ColorRGBA1072;

Shape1069.geometry = LineSet1070;

HAnimSegment1065.children[2] = Shape1069;

HAnimJoint1064.children = new MFNode();

HAnimJoint1064.children[0] = HAnimSegment1065;

let HAnimJoint1073 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1073.name = "l_index1";
HAnimJoint1073.DEF = "hanim_l_index1";
HAnimJoint1073.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1073.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1073.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1074 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1074.name = "l_index_proximal";
HAnimSegment1074.DEF = "hanim_l_index_proximal";
//<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>
let TouchSensor1075 = browser.currentScene.createNode("TouchSensor");
TouchSensor1075.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1074.children = new MFNode();

HAnimSegment1074.children[0] = TouchSensor1075;

let Transform1076 = browser.currentScene.createNode("Transform");
Transform1076.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Shape1077 = browser.currentScene.createNode("Shape");
Shape1077.USE = "HAnimJointShape";
Transform1076.children = new MFNode();

Transform1076.children[0] = Shape1077;

HAnimSegment1074.children[1] = Transform1076;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
let Shape1078 = browser.currentScene.createNode("Shape");
let LineSet1079 = browser.currentScene.createNode("LineSet");
LineSet1079.vertexCount = new MFInt32(new int[2]);
let Coordinate1080 = browser.currentScene.createNode("Coordinate");
Coordinate1080.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1079.coord = Coordinate1080;

let ColorRGBA1081 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1081.USE = "HAnimSegmentLineColorRGBA";
LineSet1079.color = ColorRGBA1081;

Shape1078.geometry = LineSet1079;

HAnimSegment1074.children[2] = Shape1078;

HAnimJoint1073.children = new MFNode();

HAnimJoint1073.children[0] = HAnimSegment1074;

let HAnimJoint1082 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1082.name = "l_index2";
HAnimJoint1082.DEF = "hanim_l_index2";
HAnimJoint1082.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1082.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1082.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1083 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1083.name = "l_index_middle";
HAnimSegment1083.DEF = "hanim_l_index_middle";
//<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>
let TouchSensor1084 = browser.currentScene.createNode("TouchSensor");
TouchSensor1084.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1083.children = new MFNode();

HAnimSegment1083.children[0] = TouchSensor1084;

let Transform1085 = browser.currentScene.createNode("Transform");
Transform1085.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Shape1086 = browser.currentScene.createNode("Shape");
Shape1086.USE = "HAnimJointShape";
Transform1085.children = new MFNode();

Transform1085.children[0] = Shape1086;

HAnimSegment1083.children[1] = Transform1085;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
let Shape1087 = browser.currentScene.createNode("Shape");
let LineSet1088 = browser.currentScene.createNode("LineSet");
LineSet1088.vertexCount = new MFInt32(new int[2]);
let Coordinate1089 = browser.currentScene.createNode("Coordinate");
Coordinate1089.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1088.coord = Coordinate1089;

let ColorRGBA1090 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1090.USE = "HAnimSegmentLineColorRGBA";
LineSet1088.color = ColorRGBA1090;

Shape1087.geometry = LineSet1088;

HAnimSegment1083.children[2] = Shape1087;

HAnimJoint1082.children = new MFNode();

HAnimJoint1082.children[0] = HAnimSegment1083;

let HAnimJoint1091 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1091.name = "l_index3";
HAnimJoint1091.DEF = "hanim_l_index3";
HAnimJoint1091.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1091.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1091.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1092 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1092.name = "l_index_distal";
HAnimSegment1092.DEF = "hanim_l_index_distal";
//<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>
let TouchSensor1093 = browser.currentScene.createNode("TouchSensor");
TouchSensor1093.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1092.children = new MFNode();

HAnimSegment1092.children[0] = TouchSensor1093;

let Transform1094 = browser.currentScene.createNode("Transform");
Transform1094.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Shape1095 = browser.currentScene.createNode("Shape");
Shape1095.USE = "HAnimJointShape";
Transform1094.children = new MFNode();

Transform1094.children[0] = Shape1095;

HAnimSegment1092.children[1] = Transform1094;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
let Shape1096 = browser.currentScene.createNode("Shape");
let LineSet1097 = browser.currentScene.createNode("LineSet");
LineSet1097.vertexCount = new MFInt32(new int[2]);
let Coordinate1098 = browser.currentScene.createNode("Coordinate");
Coordinate1098.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1097.coord = Coordinate1098;

let ColorRGBA1099 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1099.USE = "HAnimSiteLineColorRGBA";
LineSet1097.color = ColorRGBA1099;

Shape1096.geometry = LineSet1097;

HAnimSegment1092.children[2] = Shape1096;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
let Shape1100 = browser.currentScene.createNode("Shape");
let LineSet1101 = browser.currentScene.createNode("LineSet");
LineSet1101.vertexCount = new MFInt32(new int[2]);
let Coordinate1102 = browser.currentScene.createNode("Coordinate");
Coordinate1102.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1101.coord = Coordinate1102;

let ColorRGBA1103 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1103.USE = "HAnimSiteLineColorRGBA";
LineSet1101.color = ColorRGBA1103;

Shape1100.geometry = LineSet1101;

HAnimSegment1092.children[3] = Shape1100;

let HAnimSite1104 = browser.currentScene.createNode("HAnimSite");
HAnimSite1104.name = "l_index_distal_tip";
HAnimSite1104.DEF = "hanim_l_index_distal_tip";
HAnimSite1104.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
let TouchSensor1105 = browser.currentScene.createNode("TouchSensor");
TouchSensor1105.description = "HAnimSite l_index_distal_tip";
HAnimSite1104.children = new MFNode();

HAnimSite1104.children[0] = TouchSensor1105;

let Shape1106 = browser.currentScene.createNode("Shape");
Shape1106.USE = "HAnimSiteShape";
HAnimSite1104.children[1] = Shape1106;

HAnimSegment1092.children[4] = HAnimSite1104;

let HAnimSite1107 = browser.currentScene.createNode("HAnimSite");
HAnimSite1107.name = "l_dactylion_pt";
HAnimSite1107.DEF = "hanim_l_dactylion_pt";
HAnimSite1107.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
let TouchSensor1108 = browser.currentScene.createNode("TouchSensor");
TouchSensor1108.description = "HAnimSite l_dactylion";
HAnimSite1107.children = new MFNode();

HAnimSite1107.children[0] = TouchSensor1108;

let Shape1109 = browser.currentScene.createNode("Shape");
Shape1109.USE = "HAnimSiteShape";
HAnimSite1107.children[1] = Shape1109;

HAnimSegment1092.children[5] = HAnimSite1107;

HAnimJoint1091.children = new MFNode();

HAnimJoint1091.children[0] = HAnimSegment1092;

HAnimJoint1082.children[1] = HAnimJoint1091;

HAnimJoint1073.children[1] = HAnimJoint1082;

HAnimJoint1064.children[1] = HAnimJoint1073;

HAnimJoint978.children[2] = HAnimJoint1064;

let HAnimJoint1110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1110.name = "l_middle0";
HAnimJoint1110.DEF = "hanim_l_middle0";
HAnimJoint1110.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1111.name = "l_middle_metacarpal";
HAnimSegment1111.DEF = "hanim_l_middle_metacarpal";
//<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>
let TouchSensor1112 = browser.currentScene.createNode("TouchSensor");
TouchSensor1112.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1111.children = new MFNode();

HAnimSegment1111.children[0] = TouchSensor1112;

let Transform1113 = browser.currentScene.createNode("Transform");
Transform1113.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Shape1114 = browser.currentScene.createNode("Shape");
Shape1114.USE = "HAnimJointShape";
Transform1113.children = new MFNode();

Transform1113.children[0] = Shape1114;

HAnimSegment1111.children[1] = Transform1113;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
let Shape1115 = browser.currentScene.createNode("Shape");
let LineSet1116 = browser.currentScene.createNode("LineSet");
LineSet1116.vertexCount = new MFInt32(new int[2]);
let Coordinate1117 = browser.currentScene.createNode("Coordinate");
Coordinate1117.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1116.coord = Coordinate1117;

let ColorRGBA1118 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA";
LineSet1116.color = ColorRGBA1118;

Shape1115.geometry = LineSet1116;

HAnimSegment1111.children[2] = Shape1115;

HAnimJoint1110.children = new MFNode();

HAnimJoint1110.children[0] = HAnimSegment1111;

let HAnimJoint1119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1119.name = "l_middle1";
HAnimJoint1119.DEF = "hanim_l_middle1";
HAnimJoint1119.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1119.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1119.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1120 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1120.name = "l_middle_proximal";
HAnimSegment1120.DEF = "hanim_l_middle_proximal";
//<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>
let TouchSensor1121 = browser.currentScene.createNode("TouchSensor");
TouchSensor1121.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1120.children = new MFNode();

HAnimSegment1120.children[0] = TouchSensor1121;

let Transform1122 = browser.currentScene.createNode("Transform");
Transform1122.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Shape1123 = browser.currentScene.createNode("Shape");
Shape1123.USE = "HAnimJointShape";
Transform1122.children = new MFNode();

Transform1122.children[0] = Shape1123;

HAnimSegment1120.children[1] = Transform1122;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
let Shape1124 = browser.currentScene.createNode("Shape");
let LineSet1125 = browser.currentScene.createNode("LineSet");
LineSet1125.vertexCount = new MFInt32(new int[2]);
let Coordinate1126 = browser.currentScene.createNode("Coordinate");
Coordinate1126.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1125.coord = Coordinate1126;

let ColorRGBA1127 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1127.USE = "HAnimSegmentLineColorRGBA";
LineSet1125.color = ColorRGBA1127;

Shape1124.geometry = LineSet1125;

HAnimSegment1120.children[2] = Shape1124;

HAnimJoint1119.children = new MFNode();

HAnimJoint1119.children[0] = HAnimSegment1120;

let HAnimJoint1128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1128.name = "l_middle2";
HAnimJoint1128.DEF = "hanim_l_middle2";
HAnimJoint1128.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1128.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1128.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1129.name = "l_middle_middle";
HAnimSegment1129.DEF = "hanim_l_middle_middle";
//<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>
let TouchSensor1130 = browser.currentScene.createNode("TouchSensor");
TouchSensor1130.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1129.children = new MFNode();

HAnimSegment1129.children[0] = TouchSensor1130;

let Transform1131 = browser.currentScene.createNode("Transform");
Transform1131.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Shape1132 = browser.currentScene.createNode("Shape");
Shape1132.USE = "HAnimJointShape";
Transform1131.children = new MFNode();

Transform1131.children[0] = Shape1132;

HAnimSegment1129.children[1] = Transform1131;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
let Shape1133 = browser.currentScene.createNode("Shape");
let LineSet1134 = browser.currentScene.createNode("LineSet");
LineSet1134.vertexCount = new MFInt32(new int[2]);
let Coordinate1135 = browser.currentScene.createNode("Coordinate");
Coordinate1135.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1134.coord = Coordinate1135;

let ColorRGBA1136 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1136.USE = "HAnimSegmentLineColorRGBA";
LineSet1134.color = ColorRGBA1136;

Shape1133.geometry = LineSet1134;

HAnimSegment1129.children[2] = Shape1133;

HAnimJoint1128.children = new MFNode();

HAnimJoint1128.children[0] = HAnimSegment1129;

let HAnimJoint1137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1137.name = "l_middle3";
HAnimJoint1137.DEF = "hanim_l_middle3";
HAnimJoint1137.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1137.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1137.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1138.name = "l_middle_distal";
HAnimSegment1138.DEF = "hanim_l_middle_distal";
//<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>
let TouchSensor1139 = browser.currentScene.createNode("TouchSensor");
TouchSensor1139.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1138.children = new MFNode();

HAnimSegment1138.children[0] = TouchSensor1139;

let Transform1140 = browser.currentScene.createNode("Transform");
Transform1140.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let Shape1141 = browser.currentScene.createNode("Shape");
Shape1141.USE = "HAnimJointShape";
Transform1140.children = new MFNode();

Transform1140.children[0] = Shape1141;

HAnimSegment1138.children[1] = Transform1140;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
let Shape1142 = browser.currentScene.createNode("Shape");
let LineSet1143 = browser.currentScene.createNode("LineSet");
LineSet1143.vertexCount = new MFInt32(new int[2]);
let Coordinate1144 = browser.currentScene.createNode("Coordinate");
Coordinate1144.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1143.coord = Coordinate1144;

let ColorRGBA1145 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1145.USE = "HAnimSiteLineColorRGBA";
LineSet1143.color = ColorRGBA1145;

Shape1142.geometry = LineSet1143;

HAnimSegment1138.children[2] = Shape1142;

let HAnimSite1146 = browser.currentScene.createNode("HAnimSite");
HAnimSite1146.name = "l_middle_distal_tip";
HAnimSite1146.DEF = "hanim_l_middle_distal_tip";
HAnimSite1146.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
let TouchSensor1147 = browser.currentScene.createNode("TouchSensor");
TouchSensor1147.description = "HAnimSite l_middle_distal_tip";
HAnimSite1146.children = new MFNode();

HAnimSite1146.children[0] = TouchSensor1147;

let Shape1148 = browser.currentScene.createNode("Shape");
Shape1148.USE = "HAnimSiteShape";
HAnimSite1146.children[1] = Shape1148;

HAnimSegment1138.children[3] = HAnimSite1146;

HAnimJoint1137.children = new MFNode();

HAnimJoint1137.children[0] = HAnimSegment1138;

HAnimJoint1128.children[1] = HAnimJoint1137;

HAnimJoint1119.children[1] = HAnimJoint1128;

HAnimJoint1110.children[1] = HAnimJoint1119;

HAnimJoint978.children[3] = HAnimJoint1110;

let HAnimJoint1149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1149.name = "l_ring0";
HAnimJoint1149.DEF = "hanim_l_ring0";
HAnimJoint1149.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1149.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1149.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1150.name = "l_ring_metacarpal";
HAnimSegment1150.DEF = "hanim_l_ring_metacarpal";
//<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>
let TouchSensor1151 = browser.currentScene.createNode("TouchSensor");
TouchSensor1151.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1150.children = new MFNode();

HAnimSegment1150.children[0] = TouchSensor1151;

let Transform1152 = browser.currentScene.createNode("Transform");
Transform1152.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Shape1153 = browser.currentScene.createNode("Shape");
Shape1153.USE = "HAnimJointShape";
Transform1152.children = new MFNode();

Transform1152.children[0] = Shape1153;

HAnimSegment1150.children[1] = Transform1152;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
let Shape1154 = browser.currentScene.createNode("Shape");
let LineSet1155 = browser.currentScene.createNode("LineSet");
LineSet1155.vertexCount = new MFInt32(new int[2]);
let Coordinate1156 = browser.currentScene.createNode("Coordinate");
Coordinate1156.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1155.coord = Coordinate1156;

let ColorRGBA1157 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1157.USE = "HAnimSegmentLineColorRGBA";
LineSet1155.color = ColorRGBA1157;

Shape1154.geometry = LineSet1155;

HAnimSegment1150.children[2] = Shape1154;

HAnimJoint1149.children = new MFNode();

HAnimJoint1149.children[0] = HAnimSegment1150;

let HAnimJoint1158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1158.name = "l_ring1";
HAnimJoint1158.DEF = "hanim_l_ring1";
HAnimJoint1158.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1158.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1158.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1159.name = "l_ring_proximal";
HAnimSegment1159.DEF = "hanim_l_ring_proximal";
//<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>
let TouchSensor1160 = browser.currentScene.createNode("TouchSensor");
TouchSensor1160.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1159.children = new MFNode();

HAnimSegment1159.children[0] = TouchSensor1160;

let Transform1161 = browser.currentScene.createNode("Transform");
Transform1161.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Shape1162 = browser.currentScene.createNode("Shape");
Shape1162.USE = "HAnimJointShape";
Transform1161.children = new MFNode();

Transform1161.children[0] = Shape1162;

HAnimSegment1159.children[1] = Transform1161;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
let Shape1163 = browser.currentScene.createNode("Shape");
let LineSet1164 = browser.currentScene.createNode("LineSet");
LineSet1164.vertexCount = new MFInt32(new int[2]);
let Coordinate1165 = browser.currentScene.createNode("Coordinate");
Coordinate1165.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1164.coord = Coordinate1165;

let ColorRGBA1166 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1166.USE = "HAnimSegmentLineColorRGBA";
LineSet1164.color = ColorRGBA1166;

Shape1163.geometry = LineSet1164;

HAnimSegment1159.children[2] = Shape1163;

HAnimJoint1158.children = new MFNode();

HAnimJoint1158.children[0] = HAnimSegment1159;

let HAnimJoint1167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1167.name = "l_ring2";
HAnimJoint1167.DEF = "hanim_l_ring2";
HAnimJoint1167.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1167.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1167.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1168.name = "l_ring_middle";
HAnimSegment1168.DEF = "hanim_l_ring_middle";
//<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>
let TouchSensor1169 = browser.currentScene.createNode("TouchSensor");
TouchSensor1169.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1168.children = new MFNode();

HAnimSegment1168.children[0] = TouchSensor1169;

let Transform1170 = browser.currentScene.createNode("Transform");
Transform1170.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Shape1171 = browser.currentScene.createNode("Shape");
Shape1171.USE = "HAnimJointShape";
Transform1170.children = new MFNode();

Transform1170.children[0] = Shape1171;

HAnimSegment1168.children[1] = Transform1170;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
let Shape1172 = browser.currentScene.createNode("Shape");
let LineSet1173 = browser.currentScene.createNode("LineSet");
LineSet1173.vertexCount = new MFInt32(new int[2]);
let Coordinate1174 = browser.currentScene.createNode("Coordinate");
Coordinate1174.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1173.coord = Coordinate1174;

let ColorRGBA1175 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1175.USE = "HAnimSegmentLineColorRGBA";
LineSet1173.color = ColorRGBA1175;

Shape1172.geometry = LineSet1173;

HAnimSegment1168.children[2] = Shape1172;

HAnimJoint1167.children = new MFNode();

HAnimJoint1167.children[0] = HAnimSegment1168;

let HAnimJoint1176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1176.name = "l_ring3";
HAnimJoint1176.DEF = "hanim_l_ring3";
HAnimJoint1176.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1176.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1176.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1177.name = "l_ring_distal";
HAnimSegment1177.DEF = "hanim_l_ring_distal";
//<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>
let TouchSensor1178 = browser.currentScene.createNode("TouchSensor");
TouchSensor1178.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1177.children = new MFNode();

HAnimSegment1177.children[0] = TouchSensor1178;

let Transform1179 = browser.currentScene.createNode("Transform");
Transform1179.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let Shape1180 = browser.currentScene.createNode("Shape");
Shape1180.USE = "HAnimJointShape";
Transform1179.children = new MFNode();

Transform1179.children[0] = Shape1180;

HAnimSegment1177.children[1] = Transform1179;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
let Shape1181 = browser.currentScene.createNode("Shape");
let LineSet1182 = browser.currentScene.createNode("LineSet");
LineSet1182.vertexCount = new MFInt32(new int[2]);
let Coordinate1183 = browser.currentScene.createNode("Coordinate");
Coordinate1183.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1182.coord = Coordinate1183;

let ColorRGBA1184 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1184.USE = "HAnimSiteLineColorRGBA";
LineSet1182.color = ColorRGBA1184;

Shape1181.geometry = LineSet1182;

HAnimSegment1177.children[2] = Shape1181;

let HAnimSite1185 = browser.currentScene.createNode("HAnimSite");
HAnimSite1185.name = "l_ring_distal_tip";
HAnimSite1185.DEF = "hanim_l_ring_distal_tip";
HAnimSite1185.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
let TouchSensor1186 = browser.currentScene.createNode("TouchSensor");
TouchSensor1186.description = "HAnimSite l_ring_distal_tip";
HAnimSite1185.children = new MFNode();

HAnimSite1185.children[0] = TouchSensor1186;

let Shape1187 = browser.currentScene.createNode("Shape");
Shape1187.USE = "HAnimSiteShape";
HAnimSite1185.children[1] = Shape1187;

HAnimSegment1177.children[3] = HAnimSite1185;

HAnimJoint1176.children = new MFNode();

HAnimJoint1176.children[0] = HAnimSegment1177;

HAnimJoint1167.children[1] = HAnimJoint1176;

HAnimJoint1158.children[1] = HAnimJoint1167;

HAnimJoint1149.children[1] = HAnimJoint1158;

HAnimJoint978.children[4] = HAnimJoint1149;

let HAnimJoint1188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1188.name = "l_pinky0";
HAnimJoint1188.DEF = "hanim_l_pinky0";
HAnimJoint1188.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1188.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1189.name = "l_pinky_metacarpal";
HAnimSegment1189.DEF = "hanim_l_pinky_metacarpal";
//<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>
let TouchSensor1190 = browser.currentScene.createNode("TouchSensor");
TouchSensor1190.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1189.children = new MFNode();

HAnimSegment1189.children[0] = TouchSensor1190;

let Transform1191 = browser.currentScene.createNode("Transform");
Transform1191.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Shape1192 = browser.currentScene.createNode("Shape");
Shape1192.USE = "HAnimJointShape";
Transform1191.children = new MFNode();

Transform1191.children[0] = Shape1192;

HAnimSegment1189.children[1] = Transform1191;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
let Shape1193 = browser.currentScene.createNode("Shape");
let LineSet1194 = browser.currentScene.createNode("LineSet");
LineSet1194.vertexCount = new MFInt32(new int[2]);
let Coordinate1195 = browser.currentScene.createNode("Coordinate");
Coordinate1195.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1194.coord = Coordinate1195;

let ColorRGBA1196 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1196.USE = "HAnimSegmentLineColorRGBA";
LineSet1194.color = ColorRGBA1196;

Shape1193.geometry = LineSet1194;

HAnimSegment1189.children[2] = Shape1193;

HAnimJoint1188.children = new MFNode();

HAnimJoint1188.children[0] = HAnimSegment1189;

let HAnimJoint1197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1197.name = "l_pinky1";
HAnimJoint1197.DEF = "hanim_l_pinky1";
HAnimJoint1197.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1197.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1197.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1198.name = "l_pinky_proximal";
HAnimSegment1198.DEF = "hanim_l_pinky_proximal";
//<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>
let TouchSensor1199 = browser.currentScene.createNode("TouchSensor");
TouchSensor1199.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1198.children = new MFNode();

HAnimSegment1198.children[0] = TouchSensor1199;

let Transform1200 = browser.currentScene.createNode("Transform");
Transform1200.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Shape1201 = browser.currentScene.createNode("Shape");
Shape1201.USE = "HAnimJointShape";
Transform1200.children = new MFNode();

Transform1200.children[0] = Shape1201;

HAnimSegment1198.children[1] = Transform1200;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
let Shape1202 = browser.currentScene.createNode("Shape");
let LineSet1203 = browser.currentScene.createNode("LineSet");
LineSet1203.vertexCount = new MFInt32(new int[2]);
let Coordinate1204 = browser.currentScene.createNode("Coordinate");
Coordinate1204.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1203.coord = Coordinate1204;

let ColorRGBA1205 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1205.USE = "HAnimSegmentLineColorRGBA";
LineSet1203.color = ColorRGBA1205;

Shape1202.geometry = LineSet1203;

HAnimSegment1198.children[2] = Shape1202;

HAnimJoint1197.children = new MFNode();

HAnimJoint1197.children[0] = HAnimSegment1198;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.name = "l_pinky2";
HAnimJoint1206.DEF = "hanim_l_pinky2";
HAnimJoint1206.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1206.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1206.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1207 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1207.name = "l_pinky_middle";
HAnimSegment1207.DEF = "hanim_l_pinky_middle";
//<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>
let TouchSensor1208 = browser.currentScene.createNode("TouchSensor");
TouchSensor1208.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1207.children = new MFNode();

HAnimSegment1207.children[0] = TouchSensor1208;

let Transform1209 = browser.currentScene.createNode("Transform");
Transform1209.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Shape1210 = browser.currentScene.createNode("Shape");
Shape1210.USE = "HAnimJointShape";
Transform1209.children = new MFNode();

Transform1209.children[0] = Shape1210;

HAnimSegment1207.children[1] = Transform1209;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
let Shape1211 = browser.currentScene.createNode("Shape");
let LineSet1212 = browser.currentScene.createNode("LineSet");
LineSet1212.vertexCount = new MFInt32(new int[2]);
let Coordinate1213 = browser.currentScene.createNode("Coordinate");
Coordinate1213.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1212.coord = Coordinate1213;

let ColorRGBA1214 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1214.USE = "HAnimSegmentLineColorRGBA";
LineSet1212.color = ColorRGBA1214;

Shape1211.geometry = LineSet1212;

HAnimSegment1207.children[2] = Shape1211;

HAnimJoint1206.children = new MFNode();

HAnimJoint1206.children[0] = HAnimSegment1207;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.name = "l_pinky3";
HAnimJoint1215.DEF = "hanim_l_pinky3";
HAnimJoint1215.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1215.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1215.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1216 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1216.name = "l_pinky_distal";
HAnimSegment1216.DEF = "hanim_l_pinky_distal";
//<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>
let TouchSensor1217 = browser.currentScene.createNode("TouchSensor");
TouchSensor1217.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1216.children = new MFNode();

HAnimSegment1216.children[0] = TouchSensor1217;

let Transform1218 = browser.currentScene.createNode("Transform");
Transform1218.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let Shape1219 = browser.currentScene.createNode("Shape");
Shape1219.USE = "HAnimJointShape";
Transform1218.children = new MFNode();

Transform1218.children[0] = Shape1219;

HAnimSegment1216.children[1] = Transform1218;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
let Shape1220 = browser.currentScene.createNode("Shape");
let LineSet1221 = browser.currentScene.createNode("LineSet");
LineSet1221.vertexCount = new MFInt32(new int[2]);
let Coordinate1222 = browser.currentScene.createNode("Coordinate");
Coordinate1222.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1221.coord = Coordinate1222;

let ColorRGBA1223 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1223.USE = "HAnimSiteLineColorRGBA";
LineSet1221.color = ColorRGBA1223;

Shape1220.geometry = LineSet1221;

HAnimSegment1216.children[2] = Shape1220;

let HAnimSite1224 = browser.currentScene.createNode("HAnimSite");
HAnimSite1224.name = "l_pinky_distal_tip";
HAnimSite1224.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1224.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
let TouchSensor1225 = browser.currentScene.createNode("TouchSensor");
TouchSensor1225.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1224.children = new MFNode();

HAnimSite1224.children[0] = TouchSensor1225;

let Shape1226 = browser.currentScene.createNode("Shape");
Shape1226.USE = "HAnimSiteShape";
HAnimSite1224.children[1] = Shape1226;

HAnimSegment1216.children[3] = HAnimSite1224;

HAnimJoint1215.children = new MFNode();

HAnimJoint1215.children[0] = HAnimSegment1216;

HAnimJoint1206.children[1] = HAnimJoint1215;

HAnimJoint1197.children[1] = HAnimJoint1206;

HAnimJoint1188.children[1] = HAnimJoint1197;

HAnimJoint978.children[5] = HAnimJoint1188;

HAnimJoint941.children[1] = HAnimJoint978;

HAnimJoint925.children[1] = HAnimJoint941;

HAnimJoint916.children[1] = HAnimJoint925;

HAnimJoint879.children[1] = HAnimJoint916;

HAnimJoint595.children[2] = HAnimJoint879;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.name = "r_sternoclavicular";
HAnimJoint1227.DEF = "hanim_r_sternoclavicular";
HAnimJoint1227.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1227.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1227.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1228.name = "r_clavicle";
HAnimSegment1228.DEF = "hanim_r_clavicle";
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>
let TouchSensor1229 = browser.currentScene.createNode("TouchSensor");
TouchSensor1229.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1228.children = new MFNode();

HAnimSegment1228.children[0] = TouchSensor1229;

let Transform1230 = browser.currentScene.createNode("Transform");
Transform1230.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
let Shape1231 = browser.currentScene.createNode("Shape");
Shape1231.USE = "HAnimJointShape";
Transform1230.children = new MFNode();

Transform1230.children[0] = Shape1231;

HAnimSegment1228.children[1] = Transform1230;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
let Shape1232 = browser.currentScene.createNode("Shape");
let LineSet1233 = browser.currentScene.createNode("LineSet");
LineSet1233.vertexCount = new MFInt32(new int[2]);
let Coordinate1234 = browser.currentScene.createNode("Coordinate");
Coordinate1234.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1233.coord = Coordinate1234;

let ColorRGBA1235 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1235.USE = "HAnimSegmentLineColorRGBA";
LineSet1233.color = ColorRGBA1235;

Shape1232.geometry = LineSet1233;

HAnimSegment1228.children[2] = Shape1232;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
let Shape1236 = browser.currentScene.createNode("Shape");
let LineSet1237 = browser.currentScene.createNode("LineSet");
LineSet1237.vertexCount = new MFInt32(new int[2]);
let Coordinate1238 = browser.currentScene.createNode("Coordinate");
Coordinate1238.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1237.coord = Coordinate1238;

let ColorRGBA1239 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1239.USE = "HAnimSiteLineColorRGBA";
LineSet1237.color = ColorRGBA1239;

Shape1236.geometry = LineSet1237;

HAnimSegment1228.children[3] = Shape1236;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
let Shape1240 = browser.currentScene.createNode("Shape");
let LineSet1241 = browser.currentScene.createNode("LineSet");
LineSet1241.vertexCount = new MFInt32(new int[2]);
let Coordinate1242 = browser.currentScene.createNode("Coordinate");
Coordinate1242.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1241.coord = Coordinate1242;

let ColorRGBA1243 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1243.USE = "HAnimSiteLineColorRGBA";
LineSet1241.color = ColorRGBA1243;

Shape1240.geometry = LineSet1241;

HAnimSegment1228.children[4] = Shape1240;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
let Shape1244 = browser.currentScene.createNode("Shape");
let LineSet1245 = browser.currentScene.createNode("LineSet");
LineSet1245.vertexCount = new MFInt32(new int[2]);
let Coordinate1246 = browser.currentScene.createNode("Coordinate");
Coordinate1246.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1245.coord = Coordinate1246;

let ColorRGBA1247 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1247.USE = "HAnimSiteLineColorRGBA";
LineSet1245.color = ColorRGBA1247;

Shape1244.geometry = LineSet1245;

HAnimSegment1228.children[5] = Shape1244;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
let Shape1248 = browser.currentScene.createNode("Shape");
let LineSet1249 = browser.currentScene.createNode("LineSet");
LineSet1249.vertexCount = new MFInt32(new int[2]);
let Coordinate1250 = browser.currentScene.createNode("Coordinate");
Coordinate1250.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1249.coord = Coordinate1250;

let ColorRGBA1251 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1251.USE = "HAnimSiteLineColorRGBA";
LineSet1249.color = ColorRGBA1251;

Shape1248.geometry = LineSet1249;

HAnimSegment1228.children[6] = Shape1248;

let HAnimSite1252 = browser.currentScene.createNode("HAnimSite");
HAnimSite1252.name = "r_clavicale_pt";
HAnimSite1252.DEF = "hanim_r_clavicale_pt";
HAnimSite1252.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
let TouchSensor1253 = browser.currentScene.createNode("TouchSensor");
TouchSensor1253.description = "HAnimSite r_clavicale";
HAnimSite1252.children = new MFNode();

HAnimSite1252.children[0] = TouchSensor1253;

let Shape1254 = browser.currentScene.createNode("Shape");
Shape1254.USE = "HAnimSiteShape";
HAnimSite1252.children[1] = Shape1254;

HAnimSegment1228.children[7] = HAnimSite1252;

let HAnimSite1255 = browser.currentScene.createNode("HAnimSite");
HAnimSite1255.name = "r_acromion_pt";
HAnimSite1255.DEF = "hanim_r_acromion_pt";
HAnimSite1255.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
let TouchSensor1256 = browser.currentScene.createNode("TouchSensor");
TouchSensor1256.description = "HAnimSite r_acromion";
HAnimSite1255.children = new MFNode();

HAnimSite1255.children[0] = TouchSensor1256;

let Shape1257 = browser.currentScene.createNode("Shape");
Shape1257.USE = "HAnimSiteShape";
HAnimSite1255.children[1] = Shape1257;

HAnimSegment1228.children[8] = HAnimSite1255;

let HAnimSite1258 = browser.currentScene.createNode("HAnimSite");
HAnimSite1258.name = "r_axilla_ant_pt";
HAnimSite1258.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1258.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
let TouchSensor1259 = browser.currentScene.createNode("TouchSensor");
TouchSensor1259.description = "HAnimSite r_axilla_ant";
HAnimSite1258.children = new MFNode();

HAnimSite1258.children[0] = TouchSensor1259;

let Shape1260 = browser.currentScene.createNode("Shape");
Shape1260.USE = "HAnimSiteShape";
HAnimSite1258.children[1] = Shape1260;

HAnimSegment1228.children[9] = HAnimSite1258;

let HAnimSite1261 = browser.currentScene.createNode("HAnimSite");
HAnimSite1261.name = "r_axilla_post_pt";
HAnimSite1261.DEF = "hanim_r_axilla_post_pt";
HAnimSite1261.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
let TouchSensor1262 = browser.currentScene.createNode("TouchSensor");
TouchSensor1262.description = "HAnimSite r_axilla_post";
HAnimSite1261.children = new MFNode();

HAnimSite1261.children[0] = TouchSensor1262;

let Shape1263 = browser.currentScene.createNode("Shape");
Shape1263.USE = "HAnimSiteShape";
HAnimSite1261.children[1] = Shape1263;

HAnimSegment1228.children[10] = HAnimSite1261;

HAnimJoint1227.children = new MFNode();

HAnimJoint1227.children[0] = HAnimSegment1228;

let HAnimJoint1264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1264.name = "r_acromioclavicular";
HAnimJoint1264.DEF = "hanim_r_acromioclavicular";
HAnimJoint1264.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1264.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1264.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1265 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1265.name = "r_scapula";
HAnimSegment1265.DEF = "hanim_r_scapula";
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>
let TouchSensor1266 = browser.currentScene.createNode("TouchSensor");
TouchSensor1266.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1265.children = new MFNode();

HAnimSegment1265.children[0] = TouchSensor1266;

let Transform1267 = browser.currentScene.createNode("Transform");
Transform1267.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
let Shape1268 = browser.currentScene.createNode("Shape");
Shape1268.USE = "HAnimJointShape";
Transform1267.children = new MFNode();

Transform1267.children[0] = Shape1268;

HAnimSegment1265.children[1] = Transform1267;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
let Shape1269 = browser.currentScene.createNode("Shape");
let LineSet1270 = browser.currentScene.createNode("LineSet");
LineSet1270.vertexCount = new MFInt32(new int[2]);
let Coordinate1271 = browser.currentScene.createNode("Coordinate");
Coordinate1271.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1270.coord = Coordinate1271;

let ColorRGBA1272 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1272.USE = "HAnimSegmentLineColorRGBA";
LineSet1270.color = ColorRGBA1272;

Shape1269.geometry = LineSet1270;

HAnimSegment1265.children[2] = Shape1269;

HAnimJoint1264.children = new MFNode();

HAnimJoint1264.children[0] = HAnimSegment1265;

let HAnimJoint1273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1273.name = "r_shoulder";
HAnimJoint1273.DEF = "hanim_r_shoulder";
HAnimJoint1273.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1273.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1273.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1274.name = "r_upperarm";
HAnimSegment1274.DEF = "hanim_r_upperarm";
//<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>
let TouchSensor1275 = browser.currentScene.createNode("TouchSensor");
TouchSensor1275.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1274.children = new MFNode();

HAnimSegment1274.children[0] = TouchSensor1275;

let Transform1276 = browser.currentScene.createNode("Transform");
Transform1276.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
let Shape1277 = browser.currentScene.createNode("Shape");
Shape1277.USE = "HAnimJointShape";
Transform1276.children = new MFNode();

Transform1276.children[0] = Shape1277;

HAnimSegment1274.children[1] = Transform1276;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
let Shape1278 = browser.currentScene.createNode("Shape");
let LineSet1279 = browser.currentScene.createNode("LineSet");
LineSet1279.vertexCount = new MFInt32(new int[2]);
let Coordinate1280 = browser.currentScene.createNode("Coordinate");
Coordinate1280.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1279.coord = Coordinate1280;

let ColorRGBA1281 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1281.USE = "HAnimSegmentLineColorRGBA";
LineSet1279.color = ColorRGBA1281;

Shape1278.geometry = LineSet1279;

HAnimSegment1274.children[2] = Shape1278;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
let Shape1282 = browser.currentScene.createNode("Shape");
let LineSet1283 = browser.currentScene.createNode("LineSet");
LineSet1283.vertexCount = new MFInt32(new int[2]);
let Coordinate1284 = browser.currentScene.createNode("Coordinate");
Coordinate1284.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1283.coord = Coordinate1284;

let ColorRGBA1285 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1285.USE = "HAnimSiteLineColorRGBA";
LineSet1283.color = ColorRGBA1285;

Shape1282.geometry = LineSet1283;

HAnimSegment1274.children[3] = Shape1282;

let HAnimSite1286 = browser.currentScene.createNode("HAnimSite");
HAnimSite1286.name = "r_humeral_lateral_epicn_pt";
HAnimSite1286.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1286.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
let TouchSensor1287 = browser.currentScene.createNode("TouchSensor");
TouchSensor1287.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1286.children = new MFNode();

HAnimSite1286.children[0] = TouchSensor1287;

let Shape1288 = browser.currentScene.createNode("Shape");
Shape1288.USE = "HAnimSiteShape";
HAnimSite1286.children[1] = Shape1288;

HAnimSegment1274.children[4] = HAnimSite1286;

HAnimJoint1273.children = new MFNode();

HAnimJoint1273.children[0] = HAnimSegment1274;

let HAnimJoint1289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1289.name = "r_elbow";
HAnimJoint1289.DEF = "hanim_r_elbow";
HAnimJoint1289.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1289.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1289.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1290.name = "r_forearm";
HAnimSegment1290.DEF = "hanim_r_forearm";
//<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>
let TouchSensor1291 = browser.currentScene.createNode("TouchSensor");
TouchSensor1291.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1290.children = new MFNode();

HAnimSegment1290.children[0] = TouchSensor1291;

let Transform1292 = browser.currentScene.createNode("Transform");
Transform1292.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
let Shape1293 = browser.currentScene.createNode("Shape");
Shape1293.USE = "HAnimJointShape";
Transform1292.children = new MFNode();

Transform1292.children[0] = Shape1293;

HAnimSegment1290.children[1] = Transform1292;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
let Shape1294 = browser.currentScene.createNode("Shape");
let LineSet1295 = browser.currentScene.createNode("LineSet");
LineSet1295.vertexCount = new MFInt32(new int[2]);
let Coordinate1296 = browser.currentScene.createNode("Coordinate");
Coordinate1296.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1295.coord = Coordinate1296;

let ColorRGBA1297 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1297.USE = "HAnimSegmentLineColorRGBA";
LineSet1295.color = ColorRGBA1297;

Shape1294.geometry = LineSet1295;

HAnimSegment1290.children[2] = Shape1294;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
let Shape1298 = browser.currentScene.createNode("Shape");
let LineSet1299 = browser.currentScene.createNode("LineSet");
LineSet1299.vertexCount = new MFInt32(new int[2]);
let Coordinate1300 = browser.currentScene.createNode("Coordinate");
Coordinate1300.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1299.coord = Coordinate1300;

let ColorRGBA1301 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1301.USE = "HAnimSiteLineColorRGBA";
LineSet1299.color = ColorRGBA1301;

Shape1298.geometry = LineSet1299;

HAnimSegment1290.children[3] = Shape1298;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
let Shape1302 = browser.currentScene.createNode("Shape");
let LineSet1303 = browser.currentScene.createNode("LineSet");
LineSet1303.vertexCount = new MFInt32(new int[2]);
let Coordinate1304 = browser.currentScene.createNode("Coordinate");
Coordinate1304.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1303.coord = Coordinate1304;

let ColorRGBA1305 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1305.USE = "HAnimSiteLineColorRGBA";
LineSet1303.color = ColorRGBA1305;

Shape1302.geometry = LineSet1303;

HAnimSegment1290.children[4] = Shape1302;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
let Shape1306 = browser.currentScene.createNode("Shape");
let LineSet1307 = browser.currentScene.createNode("LineSet");
LineSet1307.vertexCount = new MFInt32(new int[2]);
let Coordinate1308 = browser.currentScene.createNode("Coordinate");
Coordinate1308.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1307.coord = Coordinate1308;

let ColorRGBA1309 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1309.USE = "HAnimSiteLineColorRGBA";
LineSet1307.color = ColorRGBA1309;

Shape1306.geometry = LineSet1307;

HAnimSegment1290.children[5] = Shape1306;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
let Shape1310 = browser.currentScene.createNode("Shape");
let LineSet1311 = browser.currentScene.createNode("LineSet");
LineSet1311.vertexCount = new MFInt32(new int[2]);
let Coordinate1312 = browser.currentScene.createNode("Coordinate");
Coordinate1312.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1311.coord = Coordinate1312;

let ColorRGBA1313 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1313.USE = "HAnimSiteLineColorRGBA";
LineSet1311.color = ColorRGBA1313;

Shape1310.geometry = LineSet1311;

HAnimSegment1290.children[6] = Shape1310;

let HAnimSite1314 = browser.currentScene.createNode("HAnimSite");
HAnimSite1314.name = "r_radial_styloid_pt";
HAnimSite1314.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1314.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
let TouchSensor1315 = browser.currentScene.createNode("TouchSensor");
TouchSensor1315.description = "HAnimSite r_radial_styloid";
HAnimSite1314.children = new MFNode();

HAnimSite1314.children[0] = TouchSensor1315;

let Shape1316 = browser.currentScene.createNode("Shape");
Shape1316.USE = "HAnimSiteShape";
HAnimSite1314.children[1] = Shape1316;

HAnimSegment1290.children[7] = HAnimSite1314;

let HAnimSite1317 = browser.currentScene.createNode("HAnimSite");
HAnimSite1317.name = "r_olecranon_pt";
HAnimSite1317.DEF = "hanim_r_olecranon_pt";
HAnimSite1317.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
let TouchSensor1318 = browser.currentScene.createNode("TouchSensor");
TouchSensor1318.description = "HAnimSite r_olecranon";
HAnimSite1317.children = new MFNode();

HAnimSite1317.children[0] = TouchSensor1318;

let Shape1319 = browser.currentScene.createNode("Shape");
Shape1319.USE = "HAnimSiteShape";
HAnimSite1317.children[1] = Shape1319;

HAnimSegment1290.children[8] = HAnimSite1317;

let HAnimSite1320 = browser.currentScene.createNode("HAnimSite");
HAnimSite1320.name = "r_humeral_medial_epicn_pt";
HAnimSite1320.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1320.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
let TouchSensor1321 = browser.currentScene.createNode("TouchSensor");
TouchSensor1321.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1320.children = new MFNode();

HAnimSite1320.children[0] = TouchSensor1321;

let Shape1322 = browser.currentScene.createNode("Shape");
Shape1322.USE = "HAnimSiteShape";
HAnimSite1320.children[1] = Shape1322;

HAnimSegment1290.children[9] = HAnimSite1320;

let HAnimSite1323 = browser.currentScene.createNode("HAnimSite");
HAnimSite1323.name = "r_radiale_pt";
HAnimSite1323.DEF = "hanim_r_radiale_pt";
HAnimSite1323.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
let TouchSensor1324 = browser.currentScene.createNode("TouchSensor");
TouchSensor1324.description = "HAnimSite r_radiale";
HAnimSite1323.children = new MFNode();

HAnimSite1323.children[0] = TouchSensor1324;

let Shape1325 = browser.currentScene.createNode("Shape");
Shape1325.USE = "HAnimSiteShape";
HAnimSite1323.children[1] = Shape1325;

HAnimSegment1290.children[10] = HAnimSite1323;

HAnimJoint1289.children = new MFNode();

HAnimJoint1289.children[0] = HAnimSegment1290;

let HAnimJoint1326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1326.name = "r_wrist";
HAnimJoint1326.DEF = "hanim_r_wrist";
HAnimJoint1326.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1326.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1326.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1327.name = "r_hand";
HAnimSegment1327.DEF = "hanim_r_hand";
//<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>
let TouchSensor1328 = browser.currentScene.createNode("TouchSensor");
TouchSensor1328.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1327.children = new MFNode();

HAnimSegment1327.children[0] = TouchSensor1328;

let Transform1329 = browser.currentScene.createNode("Transform");
Transform1329.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
let Shape1330 = browser.currentScene.createNode("Shape");
Shape1330.USE = "HAnimJointShape";
Transform1329.children = new MFNode();

Transform1329.children[0] = Shape1330;

HAnimSegment1327.children[1] = Transform1329;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
let Shape1331 = browser.currentScene.createNode("Shape");
let LineSet1332 = browser.currentScene.createNode("LineSet");
LineSet1332.vertexCount = new MFInt32(new int[2]);
let Coordinate1333 = browser.currentScene.createNode("Coordinate");
Coordinate1333.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1332.coord = Coordinate1333;

let ColorRGBA1334 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1334.USE = "HAnimSegmentLineColorRGBA";
LineSet1332.color = ColorRGBA1334;

Shape1331.geometry = LineSet1332;

HAnimSegment1327.children[2] = Shape1331;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
let Shape1335 = browser.currentScene.createNode("Shape");
let LineSet1336 = browser.currentScene.createNode("LineSet");
LineSet1336.vertexCount = new MFInt32(new int[2]);
let Coordinate1337 = browser.currentScene.createNode("Coordinate");
Coordinate1337.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1336.coord = Coordinate1337;

let ColorRGBA1338 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1338.USE = "HAnimSegmentLineColorRGBA";
LineSet1336.color = ColorRGBA1338;

Shape1335.geometry = LineSet1336;

HAnimSegment1327.children[3] = Shape1335;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
let Shape1339 = browser.currentScene.createNode("Shape");
let LineSet1340 = browser.currentScene.createNode("LineSet");
LineSet1340.vertexCount = new MFInt32(new int[2]);
let Coordinate1341 = browser.currentScene.createNode("Coordinate");
Coordinate1341.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1340.coord = Coordinate1341;

let ColorRGBA1342 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1342.USE = "HAnimSegmentLineColorRGBA";
LineSet1340.color = ColorRGBA1342;

Shape1339.geometry = LineSet1340;

HAnimSegment1327.children[4] = Shape1339;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
let Shape1343 = browser.currentScene.createNode("Shape");
let LineSet1344 = browser.currentScene.createNode("LineSet");
LineSet1344.vertexCount = new MFInt32(new int[2]);
let Coordinate1345 = browser.currentScene.createNode("Coordinate");
Coordinate1345.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1344.coord = Coordinate1345;

let ColorRGBA1346 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1346.USE = "HAnimSegmentLineColorRGBA";
LineSet1344.color = ColorRGBA1346;

Shape1343.geometry = LineSet1344;

HAnimSegment1327.children[5] = Shape1343;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
let Shape1347 = browser.currentScene.createNode("Shape");
let LineSet1348 = browser.currentScene.createNode("LineSet");
LineSet1348.vertexCount = new MFInt32(new int[2]);
let Coordinate1349 = browser.currentScene.createNode("Coordinate");
Coordinate1349.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1348.coord = Coordinate1349;

let ColorRGBA1350 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1350.USE = "HAnimSegmentLineColorRGBA";
LineSet1348.color = ColorRGBA1350;

Shape1347.geometry = LineSet1348;

HAnimSegment1327.children[6] = Shape1347;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
let Shape1351 = browser.currentScene.createNode("Shape");
let LineSet1352 = browser.currentScene.createNode("LineSet");
LineSet1352.vertexCount = new MFInt32(new int[2]);
let Coordinate1353 = browser.currentScene.createNode("Coordinate");
Coordinate1353.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1352.coord = Coordinate1353;

let ColorRGBA1354 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1354.USE = "HAnimSiteLineColorRGBA";
LineSet1352.color = ColorRGBA1354;

Shape1351.geometry = LineSet1352;

HAnimSegment1327.children[7] = Shape1351;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
let Shape1355 = browser.currentScene.createNode("Shape");
let LineSet1356 = browser.currentScene.createNode("LineSet");
LineSet1356.vertexCount = new MFInt32(new int[2]);
let Coordinate1357 = browser.currentScene.createNode("Coordinate");
Coordinate1357.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1356.coord = Coordinate1357;

let ColorRGBA1358 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1358.USE = "HAnimSiteLineColorRGBA";
LineSet1356.color = ColorRGBA1358;

Shape1355.geometry = LineSet1356;

HAnimSegment1327.children[8] = Shape1355;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
let Shape1359 = browser.currentScene.createNode("Shape");
let LineSet1360 = browser.currentScene.createNode("LineSet");
LineSet1360.vertexCount = new MFInt32(new int[2]);
let Coordinate1361 = browser.currentScene.createNode("Coordinate");
Coordinate1361.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1360.coord = Coordinate1361;

let ColorRGBA1362 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1362.USE = "HAnimSiteLineColorRGBA";
LineSet1360.color = ColorRGBA1362;

Shape1359.geometry = LineSet1360;

HAnimSegment1327.children[9] = Shape1359;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
let Shape1363 = browser.currentScene.createNode("Shape");
let LineSet1364 = browser.currentScene.createNode("LineSet");
LineSet1364.vertexCount = new MFInt32(new int[2]);
let Coordinate1365 = browser.currentScene.createNode("Coordinate");
Coordinate1365.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1364.coord = Coordinate1365;

let ColorRGBA1366 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1366.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1364.color = ColorRGBA1366;

Shape1363.geometry = LineSet1364;

HAnimSegment1327.children[10] = Shape1363;

let HAnimSite1367 = browser.currentScene.createNode("HAnimSite");
HAnimSite1367.name = "r_metacarpal_pha2_pt";
HAnimSite1367.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1367.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
let TouchSensor1368 = browser.currentScene.createNode("TouchSensor");
TouchSensor1368.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1367.children = new MFNode();

HAnimSite1367.children[0] = TouchSensor1368;

let Shape1369 = browser.currentScene.createNode("Shape");
Shape1369.USE = "HAnimSiteShape";
HAnimSite1367.children[1] = Shape1369;

HAnimSegment1327.children[11] = HAnimSite1367;

let HAnimSite1370 = browser.currentScene.createNode("HAnimSite");
HAnimSite1370.name = "r_ulnar_styloid_pt";
HAnimSite1370.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1370.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
let TouchSensor1371 = browser.currentScene.createNode("TouchSensor");
TouchSensor1371.description = "HAnimSite r_ulnar_styloid";
HAnimSite1370.children = new MFNode();

HAnimSite1370.children[0] = TouchSensor1371;

let Shape1372 = browser.currentScene.createNode("Shape");
Shape1372.USE = "HAnimSiteShape";
HAnimSite1370.children[1] = Shape1372;

HAnimSegment1327.children[12] = HAnimSite1370;

let HAnimSite1373 = browser.currentScene.createNode("HAnimSite");
HAnimSite1373.name = "r_metacarpal_pha5_pt";
HAnimSite1373.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1373.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
let TouchSensor1374 = browser.currentScene.createNode("TouchSensor");
TouchSensor1374.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1373.children = new MFNode();

HAnimSite1373.children[0] = TouchSensor1374;

let Shape1375 = browser.currentScene.createNode("Shape");
Shape1375.USE = "HAnimSiteShape";
HAnimSite1373.children[1] = Shape1375;

HAnimSegment1327.children[13] = HAnimSite1373;

let HAnimSite1376 = browser.currentScene.createNode("HAnimSite");
HAnimSite1376.name = "r_hand_front_view";
HAnimSite1376.DEF = "hanim_r_hand_front_view";
HAnimSite1376.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
let Viewpoint1377 = browser.currentScene.createNode("Viewpoint");
Viewpoint1377.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1377.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1377.description = "right hand front";
Viewpoint1377.position = new SFVec3f(new float[0,0,0]);
HAnimSite1376.children = new MFNode();

HAnimSite1376.children[0] = Viewpoint1377;

//HAnimSite/Viewpoint visualization shape
let Anchor1378 = browser.currentScene.createNode("Anchor");
Anchor1378.description = "HAnimSite Viewpoint hanim_r_hand_front_view";
Anchor1378.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
let LOD1379 = browser.currentScene.createNode("LOD");
LOD1379.forceTransitions = True;
LOD1379.range = new MFFloat(new float[0.04]);
let WorldInfo1380 = browser.currentScene.createNode("WorldInfo");
WorldInfo1380.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1379.children = new MFNode();

LOD1379.children[0] = WorldInfo1380;

let Shape1381 = browser.currentScene.createNode("Shape");
Shape1381.USE = "HAnimSiteViewpointShape";
LOD1379.children[1] = Shape1381;

Anchor1378.children = new MFNode();

Anchor1378.children[0] = LOD1379;

HAnimSite1376.children[1] = Anchor1378;

HAnimSegment1327.children[14] = HAnimSite1376;

HAnimJoint1326.children = new MFNode();

HAnimJoint1326.children[0] = HAnimSegment1327;

let HAnimJoint1382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1382.name = "r_thumb1";
HAnimJoint1382.DEF = "hanim_r_thumb1";
HAnimJoint1382.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1382.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1382.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1383 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1383.name = "r_thumb_metacarpal";
HAnimSegment1383.DEF = "hanim_r_thumb_metacarpal";
//<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>
let TouchSensor1384 = browser.currentScene.createNode("TouchSensor");
TouchSensor1384.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1383.children = new MFNode();

HAnimSegment1383.children[0] = TouchSensor1384;

let Transform1385 = browser.currentScene.createNode("Transform");
Transform1385.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
let Shape1386 = browser.currentScene.createNode("Shape");
Shape1386.USE = "HAnimJointShape";
Transform1385.children = new MFNode();

Transform1385.children[0] = Shape1386;

HAnimSegment1383.children[1] = Transform1385;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
let Shape1387 = browser.currentScene.createNode("Shape");
let LineSet1388 = browser.currentScene.createNode("LineSet");
LineSet1388.vertexCount = new MFInt32(new int[2]);
let Coordinate1389 = browser.currentScene.createNode("Coordinate");
Coordinate1389.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1388.coord = Coordinate1389;

let ColorRGBA1390 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1390.USE = "HAnimSegmentLineColorRGBA";
LineSet1388.color = ColorRGBA1390;

Shape1387.geometry = LineSet1388;

HAnimSegment1383.children[2] = Shape1387;

HAnimJoint1382.children = new MFNode();

HAnimJoint1382.children[0] = HAnimSegment1383;

let HAnimJoint1391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1391.name = "r_thumb2";
HAnimJoint1391.DEF = "hanim_r_thumb2";
HAnimJoint1391.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1391.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1391.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1392 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1392.name = "r_thumb_proximal";
HAnimSegment1392.DEF = "hanim_r_thumb_proximal";
//<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>
let TouchSensor1393 = browser.currentScene.createNode("TouchSensor");
TouchSensor1393.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1392.children = new MFNode();

HAnimSegment1392.children[0] = TouchSensor1393;

let Transform1394 = browser.currentScene.createNode("Transform");
Transform1394.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
let Shape1395 = browser.currentScene.createNode("Shape");
Shape1395.USE = "HAnimJointShape";
Transform1394.children = new MFNode();

Transform1394.children[0] = Shape1395;

HAnimSegment1392.children[1] = Transform1394;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
let Shape1396 = browser.currentScene.createNode("Shape");
let LineSet1397 = browser.currentScene.createNode("LineSet");
LineSet1397.vertexCount = new MFInt32(new int[2]);
let Coordinate1398 = browser.currentScene.createNode("Coordinate");
Coordinate1398.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1397.coord = Coordinate1398;

let ColorRGBA1399 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1399.USE = "HAnimSegmentLineColorRGBA";
LineSet1397.color = ColorRGBA1399;

Shape1396.geometry = LineSet1397;

HAnimSegment1392.children[2] = Shape1396;

HAnimJoint1391.children = new MFNode();

HAnimJoint1391.children[0] = HAnimSegment1392;

let HAnimJoint1400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1400.name = "r_thumb3";
HAnimJoint1400.DEF = "hanim_r_thumb3";
HAnimJoint1400.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1400.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1400.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1401 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1401.name = "r_thumb_distal";
HAnimSegment1401.DEF = "hanim_r_thumb_distal";
//<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>
let TouchSensor1402 = browser.currentScene.createNode("TouchSensor");
TouchSensor1402.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1401.children = new MFNode();

HAnimSegment1401.children[0] = TouchSensor1402;

let Transform1403 = browser.currentScene.createNode("Transform");
Transform1403.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
let Shape1404 = browser.currentScene.createNode("Shape");
Shape1404.USE = "HAnimJointShape";
Transform1403.children = new MFNode();

Transform1403.children[0] = Shape1404;

HAnimSegment1401.children[1] = Transform1403;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
let Shape1405 = browser.currentScene.createNode("Shape");
let LineSet1406 = browser.currentScene.createNode("LineSet");
LineSet1406.vertexCount = new MFInt32(new int[2]);
let Coordinate1407 = browser.currentScene.createNode("Coordinate");
Coordinate1407.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1406.coord = Coordinate1407;

let ColorRGBA1408 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1408.USE = "HAnimSiteLineColorRGBA";
LineSet1406.color = ColorRGBA1408;

Shape1405.geometry = LineSet1406;

HAnimSegment1401.children[2] = Shape1405;

let HAnimSite1409 = browser.currentScene.createNode("HAnimSite");
HAnimSite1409.name = "r_thumb_distal_tip";
HAnimSite1409.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1409.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
let TouchSensor1410 = browser.currentScene.createNode("TouchSensor");
TouchSensor1410.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1409.children = new MFNode();

HAnimSite1409.children[0] = TouchSensor1410;

let Shape1411 = browser.currentScene.createNode("Shape");
Shape1411.USE = "HAnimSiteShape";
HAnimSite1409.children[1] = Shape1411;

HAnimSegment1401.children[3] = HAnimSite1409;

HAnimJoint1400.children = new MFNode();

HAnimJoint1400.children[0] = HAnimSegment1401;

HAnimJoint1391.children[1] = HAnimJoint1400;

HAnimJoint1382.children[1] = HAnimJoint1391;

HAnimJoint1326.children[1] = HAnimJoint1382;

let HAnimJoint1412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1412.name = "r_index0";
HAnimJoint1412.DEF = "hanim_r_index0";
HAnimJoint1412.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1412.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1412.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1413 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1413.name = "r_index_metacarpal";
HAnimSegment1413.DEF = "hanim_r_index_metacarpal";
//<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>
let TouchSensor1414 = browser.currentScene.createNode("TouchSensor");
TouchSensor1414.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1413.children = new MFNode();

HAnimSegment1413.children[0] = TouchSensor1414;

let Transform1415 = browser.currentScene.createNode("Transform");
Transform1415.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
let Shape1416 = browser.currentScene.createNode("Shape");
Shape1416.USE = "HAnimJointShape";
Transform1415.children = new MFNode();

Transform1415.children[0] = Shape1416;

HAnimSegment1413.children[1] = Transform1415;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
let Shape1417 = browser.currentScene.createNode("Shape");
let LineSet1418 = browser.currentScene.createNode("LineSet");
LineSet1418.vertexCount = new MFInt32(new int[2]);
let Coordinate1419 = browser.currentScene.createNode("Coordinate");
Coordinate1419.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1418.coord = Coordinate1419;

let ColorRGBA1420 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1420.USE = "HAnimSegmentLineColorRGBA";
LineSet1418.color = ColorRGBA1420;

Shape1417.geometry = LineSet1418;

HAnimSegment1413.children[2] = Shape1417;

HAnimJoint1412.children = new MFNode();

HAnimJoint1412.children[0] = HAnimSegment1413;

let HAnimJoint1421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1421.name = "r_index1";
HAnimJoint1421.DEF = "hanim_r_index1";
HAnimJoint1421.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1421.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1421.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1422 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1422.name = "r_index_proximal";
HAnimSegment1422.DEF = "hanim_r_index_proximal";
//<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>
let TouchSensor1423 = browser.currentScene.createNode("TouchSensor");
TouchSensor1423.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1422.children = new MFNode();

HAnimSegment1422.children[0] = TouchSensor1423;

let Transform1424 = browser.currentScene.createNode("Transform");
Transform1424.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
let Shape1425 = browser.currentScene.createNode("Shape");
Shape1425.USE = "HAnimJointShape";
Transform1424.children = new MFNode();

Transform1424.children[0] = Shape1425;

HAnimSegment1422.children[1] = Transform1424;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
let Shape1426 = browser.currentScene.createNode("Shape");
let LineSet1427 = browser.currentScene.createNode("LineSet");
LineSet1427.vertexCount = new MFInt32(new int[2]);
let Coordinate1428 = browser.currentScene.createNode("Coordinate");
Coordinate1428.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1427.coord = Coordinate1428;

let ColorRGBA1429 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1429.USE = "HAnimSegmentLineColorRGBA";
LineSet1427.color = ColorRGBA1429;

Shape1426.geometry = LineSet1427;

HAnimSegment1422.children[2] = Shape1426;

HAnimJoint1421.children = new MFNode();

HAnimJoint1421.children[0] = HAnimSegment1422;

let HAnimJoint1430 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1430.name = "r_index2";
HAnimJoint1430.DEF = "hanim_r_index2";
HAnimJoint1430.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1430.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1430.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1431 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1431.name = "r_index_middle";
HAnimSegment1431.DEF = "hanim_r_index_middle";
//<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>
let TouchSensor1432 = browser.currentScene.createNode("TouchSensor");
TouchSensor1432.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1431.children = new MFNode();

HAnimSegment1431.children[0] = TouchSensor1432;

let Transform1433 = browser.currentScene.createNode("Transform");
Transform1433.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
let Shape1434 = browser.currentScene.createNode("Shape");
Shape1434.USE = "HAnimJointShape";
Transform1433.children = new MFNode();

Transform1433.children[0] = Shape1434;

HAnimSegment1431.children[1] = Transform1433;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
let Shape1435 = browser.currentScene.createNode("Shape");
let LineSet1436 = browser.currentScene.createNode("LineSet");
LineSet1436.vertexCount = new MFInt32(new int[2]);
let Coordinate1437 = browser.currentScene.createNode("Coordinate");
Coordinate1437.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1436.coord = Coordinate1437;

let ColorRGBA1438 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1438.USE = "HAnimSegmentLineColorRGBA";
LineSet1436.color = ColorRGBA1438;

Shape1435.geometry = LineSet1436;

HAnimSegment1431.children[2] = Shape1435;

HAnimJoint1430.children = new MFNode();

HAnimJoint1430.children[0] = HAnimSegment1431;

let HAnimJoint1439 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1439.name = "r_index3";
HAnimJoint1439.DEF = "hanim_r_index3";
HAnimJoint1439.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1439.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1439.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1440 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1440.name = "r_index_distal";
HAnimSegment1440.DEF = "hanim_r_index_distal";
//<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>
let TouchSensor1441 = browser.currentScene.createNode("TouchSensor");
TouchSensor1441.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1440.children = new MFNode();

HAnimSegment1440.children[0] = TouchSensor1441;

let Transform1442 = browser.currentScene.createNode("Transform");
Transform1442.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
let Shape1443 = browser.currentScene.createNode("Shape");
Shape1443.USE = "HAnimJointShape";
Transform1442.children = new MFNode();

Transform1442.children[0] = Shape1443;

HAnimSegment1440.children[1] = Transform1442;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
let Shape1444 = browser.currentScene.createNode("Shape");
let LineSet1445 = browser.currentScene.createNode("LineSet");
LineSet1445.vertexCount = new MFInt32(new int[2]);
let Coordinate1446 = browser.currentScene.createNode("Coordinate");
Coordinate1446.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1445.coord = Coordinate1446;

let ColorRGBA1447 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1447.USE = "HAnimSiteLineColorRGBA";
LineSet1445.color = ColorRGBA1447;

Shape1444.geometry = LineSet1445;

HAnimSegment1440.children[2] = Shape1444;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
let Shape1448 = browser.currentScene.createNode("Shape");
let LineSet1449 = browser.currentScene.createNode("LineSet");
LineSet1449.vertexCount = new MFInt32(new int[2]);
let Coordinate1450 = browser.currentScene.createNode("Coordinate");
Coordinate1450.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1449.coord = Coordinate1450;

let ColorRGBA1451 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1451.USE = "HAnimSiteLineColorRGBA";
LineSet1449.color = ColorRGBA1451;

Shape1448.geometry = LineSet1449;

HAnimSegment1440.children[3] = Shape1448;

let HAnimSite1452 = browser.currentScene.createNode("HAnimSite");
HAnimSite1452.name = "r_index_distal_tip";
HAnimSite1452.DEF = "hanim_r_index_distal_tip";
HAnimSite1452.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
let TouchSensor1453 = browser.currentScene.createNode("TouchSensor");
TouchSensor1453.description = "HAnimSite r_index_distal_tip";
HAnimSite1452.children = new MFNode();

HAnimSite1452.children[0] = TouchSensor1453;

let Shape1454 = browser.currentScene.createNode("Shape");
Shape1454.USE = "HAnimSiteShape";
HAnimSite1452.children[1] = Shape1454;

HAnimSegment1440.children[4] = HAnimSite1452;

let HAnimSite1455 = browser.currentScene.createNode("HAnimSite");
HAnimSite1455.name = "r_dactylion_pt";
HAnimSite1455.DEF = "hanim_r_dactylion_pt";
HAnimSite1455.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
let TouchSensor1456 = browser.currentScene.createNode("TouchSensor");
TouchSensor1456.description = "HAnimSite r_dactylion";
HAnimSite1455.children = new MFNode();

HAnimSite1455.children[0] = TouchSensor1456;

let Shape1457 = browser.currentScene.createNode("Shape");
Shape1457.USE = "HAnimSiteShape";
HAnimSite1455.children[1] = Shape1457;

HAnimSegment1440.children[5] = HAnimSite1455;

HAnimJoint1439.children = new MFNode();

HAnimJoint1439.children[0] = HAnimSegment1440;

HAnimJoint1430.children[1] = HAnimJoint1439;

HAnimJoint1421.children[1] = HAnimJoint1430;

HAnimJoint1412.children[1] = HAnimJoint1421;

HAnimJoint1326.children[2] = HAnimJoint1412;

let HAnimJoint1458 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1458.name = "r_middle0";
HAnimJoint1458.DEF = "hanim_r_middle0";
HAnimJoint1458.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1458.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1458.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1459 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1459.name = "r_middle_metacarpal";
HAnimSegment1459.DEF = "hanim_r_middle_metacarpal";
//<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>
let TouchSensor1460 = browser.currentScene.createNode("TouchSensor");
TouchSensor1460.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1459.children = new MFNode();

HAnimSegment1459.children[0] = TouchSensor1460;

let Transform1461 = browser.currentScene.createNode("Transform");
Transform1461.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
let Shape1462 = browser.currentScene.createNode("Shape");
Shape1462.USE = "HAnimJointShape";
Transform1461.children = new MFNode();

Transform1461.children[0] = Shape1462;

HAnimSegment1459.children[1] = Transform1461;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
let Shape1463 = browser.currentScene.createNode("Shape");
let LineSet1464 = browser.currentScene.createNode("LineSet");
LineSet1464.vertexCount = new MFInt32(new int[2]);
let Coordinate1465 = browser.currentScene.createNode("Coordinate");
Coordinate1465.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1464.coord = Coordinate1465;

let ColorRGBA1466 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1466.USE = "HAnimSegmentLineColorRGBA";
LineSet1464.color = ColorRGBA1466;

Shape1463.geometry = LineSet1464;

HAnimSegment1459.children[2] = Shape1463;

HAnimJoint1458.children = new MFNode();

HAnimJoint1458.children[0] = HAnimSegment1459;

let HAnimJoint1467 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1467.name = "r_middle1";
HAnimJoint1467.DEF = "hanim_r_middle1";
HAnimJoint1467.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1467.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1467.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1468.name = "r_middle_proximal";
HAnimSegment1468.DEF = "hanim_r_middle_proximal";
//<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>
let TouchSensor1469 = browser.currentScene.createNode("TouchSensor");
TouchSensor1469.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1468.children = new MFNode();

HAnimSegment1468.children[0] = TouchSensor1469;

let Transform1470 = browser.currentScene.createNode("Transform");
Transform1470.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
let Shape1471 = browser.currentScene.createNode("Shape");
Shape1471.USE = "HAnimJointShape";
Transform1470.children = new MFNode();

Transform1470.children[0] = Shape1471;

HAnimSegment1468.children[1] = Transform1470;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
let Shape1472 = browser.currentScene.createNode("Shape");
let LineSet1473 = browser.currentScene.createNode("LineSet");
LineSet1473.vertexCount = new MFInt32(new int[2]);
let Coordinate1474 = browser.currentScene.createNode("Coordinate");
Coordinate1474.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1473.coord = Coordinate1474;

let ColorRGBA1475 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1475.USE = "HAnimSegmentLineColorRGBA";
LineSet1473.color = ColorRGBA1475;

Shape1472.geometry = LineSet1473;

HAnimSegment1468.children[2] = Shape1472;

HAnimJoint1467.children = new MFNode();

HAnimJoint1467.children[0] = HAnimSegment1468;

let HAnimJoint1476 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1476.name = "r_middle2";
HAnimJoint1476.DEF = "hanim_r_middle2";
HAnimJoint1476.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1476.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1476.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1477.name = "r_middle_middle";
HAnimSegment1477.DEF = "hanim_r_middle_middle";
//<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>
let TouchSensor1478 = browser.currentScene.createNode("TouchSensor");
TouchSensor1478.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1477.children = new MFNode();

HAnimSegment1477.children[0] = TouchSensor1478;

let Transform1479 = browser.currentScene.createNode("Transform");
Transform1479.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
let Shape1480 = browser.currentScene.createNode("Shape");
Shape1480.USE = "HAnimJointShape";
Transform1479.children = new MFNode();

Transform1479.children[0] = Shape1480;

HAnimSegment1477.children[1] = Transform1479;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
let Shape1481 = browser.currentScene.createNode("Shape");
let LineSet1482 = browser.currentScene.createNode("LineSet");
LineSet1482.vertexCount = new MFInt32(new int[2]);
let Coordinate1483 = browser.currentScene.createNode("Coordinate");
Coordinate1483.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1482.coord = Coordinate1483;

let ColorRGBA1484 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1484.USE = "HAnimSegmentLineColorRGBA";
LineSet1482.color = ColorRGBA1484;

Shape1481.geometry = LineSet1482;

HAnimSegment1477.children[2] = Shape1481;

HAnimJoint1476.children = new MFNode();

HAnimJoint1476.children[0] = HAnimSegment1477;

let HAnimJoint1485 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1485.name = "r_middle3";
HAnimJoint1485.DEF = "hanim_r_middle3";
HAnimJoint1485.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1485.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1485.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1486.name = "r_middle_distal";
HAnimSegment1486.DEF = "hanim_r_middle_distal";
//<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>
let TouchSensor1487 = browser.currentScene.createNode("TouchSensor");
TouchSensor1487.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1486.children = new MFNode();

HAnimSegment1486.children[0] = TouchSensor1487;

let Transform1488 = browser.currentScene.createNode("Transform");
Transform1488.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
let Shape1489 = browser.currentScene.createNode("Shape");
Shape1489.USE = "HAnimJointShape";
Transform1488.children = new MFNode();

Transform1488.children[0] = Shape1489;

HAnimSegment1486.children[1] = Transform1488;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
let Shape1490 = browser.currentScene.createNode("Shape");
let LineSet1491 = browser.currentScene.createNode("LineSet");
LineSet1491.vertexCount = new MFInt32(new int[2]);
let Coordinate1492 = browser.currentScene.createNode("Coordinate");
Coordinate1492.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1491.coord = Coordinate1492;

let ColorRGBA1493 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1493.USE = "HAnimSiteLineColorRGBA";
LineSet1491.color = ColorRGBA1493;

Shape1490.geometry = LineSet1491;

HAnimSegment1486.children[2] = Shape1490;

let HAnimSite1494 = browser.currentScene.createNode("HAnimSite");
HAnimSite1494.name = "r_middle_distal_tip";
HAnimSite1494.DEF = "hanim_r_middle_distal_tip";
HAnimSite1494.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
let TouchSensor1495 = browser.currentScene.createNode("TouchSensor");
TouchSensor1495.description = "HAnimSite r_middle_distal_tip";
HAnimSite1494.children = new MFNode();

HAnimSite1494.children[0] = TouchSensor1495;

let Shape1496 = browser.currentScene.createNode("Shape");
Shape1496.USE = "HAnimSiteShape";
HAnimSite1494.children[1] = Shape1496;

HAnimSegment1486.children[3] = HAnimSite1494;

HAnimJoint1485.children = new MFNode();

HAnimJoint1485.children[0] = HAnimSegment1486;

HAnimJoint1476.children[1] = HAnimJoint1485;

HAnimJoint1467.children[1] = HAnimJoint1476;

HAnimJoint1458.children[1] = HAnimJoint1467;

HAnimJoint1326.children[3] = HAnimJoint1458;

let HAnimJoint1497 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1497.name = "r_ring0";
HAnimJoint1497.DEF = "hanim_r_ring0";
HAnimJoint1497.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1497.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1497.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1498.name = "r_ring_metacarpal";
HAnimSegment1498.DEF = "hanim_r_ring_metacarpal";
//<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>
let TouchSensor1499 = browser.currentScene.createNode("TouchSensor");
TouchSensor1499.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1498.children = new MFNode();

HAnimSegment1498.children[0] = TouchSensor1499;

let Transform1500 = browser.currentScene.createNode("Transform");
Transform1500.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
let Shape1501 = browser.currentScene.createNode("Shape");
Shape1501.USE = "HAnimJointShape";
Transform1500.children = new MFNode();

Transform1500.children[0] = Shape1501;

HAnimSegment1498.children[1] = Transform1500;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
let Shape1502 = browser.currentScene.createNode("Shape");
let LineSet1503 = browser.currentScene.createNode("LineSet");
LineSet1503.vertexCount = new MFInt32(new int[2]);
let Coordinate1504 = browser.currentScene.createNode("Coordinate");
Coordinate1504.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1503.coord = Coordinate1504;

let ColorRGBA1505 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1505.USE = "HAnimSegmentLineColorRGBA";
LineSet1503.color = ColorRGBA1505;

Shape1502.geometry = LineSet1503;

HAnimSegment1498.children[2] = Shape1502;

HAnimJoint1497.children = new MFNode();

HAnimJoint1497.children[0] = HAnimSegment1498;

let HAnimJoint1506 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1506.name = "r_ring1";
HAnimJoint1506.DEF = "hanim_r_ring1";
HAnimJoint1506.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1506.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1506.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1507.name = "r_ring_proximal";
HAnimSegment1507.DEF = "hanim_r_ring_proximal";
//<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>
let TouchSensor1508 = browser.currentScene.createNode("TouchSensor");
TouchSensor1508.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1507.children = new MFNode();

HAnimSegment1507.children[0] = TouchSensor1508;

let Transform1509 = browser.currentScene.createNode("Transform");
Transform1509.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
let Shape1510 = browser.currentScene.createNode("Shape");
Shape1510.USE = "HAnimJointShape";
Transform1509.children = new MFNode();

Transform1509.children[0] = Shape1510;

HAnimSegment1507.children[1] = Transform1509;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
let Shape1511 = browser.currentScene.createNode("Shape");
let LineSet1512 = browser.currentScene.createNode("LineSet");
LineSet1512.vertexCount = new MFInt32(new int[2]);
let Coordinate1513 = browser.currentScene.createNode("Coordinate");
Coordinate1513.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1512.coord = Coordinate1513;

let ColorRGBA1514 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1514.USE = "HAnimSegmentLineColorRGBA";
LineSet1512.color = ColorRGBA1514;

Shape1511.geometry = LineSet1512;

HAnimSegment1507.children[2] = Shape1511;

HAnimJoint1506.children = new MFNode();

HAnimJoint1506.children[0] = HAnimSegment1507;

let HAnimJoint1515 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1515.name = "r_ring2";
HAnimJoint1515.DEF = "hanim_r_ring2";
HAnimJoint1515.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1515.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1515.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1516.name = "r_ring_middle";
HAnimSegment1516.DEF = "hanim_r_ring_middle";
//<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>
let TouchSensor1517 = browser.currentScene.createNode("TouchSensor");
TouchSensor1517.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1516.children = new MFNode();

HAnimSegment1516.children[0] = TouchSensor1517;

let Transform1518 = browser.currentScene.createNode("Transform");
Transform1518.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
let Shape1519 = browser.currentScene.createNode("Shape");
Shape1519.USE = "HAnimJointShape";
Transform1518.children = new MFNode();

Transform1518.children[0] = Shape1519;

HAnimSegment1516.children[1] = Transform1518;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
let Shape1520 = browser.currentScene.createNode("Shape");
let LineSet1521 = browser.currentScene.createNode("LineSet");
LineSet1521.vertexCount = new MFInt32(new int[2]);
let Coordinate1522 = browser.currentScene.createNode("Coordinate");
Coordinate1522.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1521.coord = Coordinate1522;

let ColorRGBA1523 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1523.USE = "HAnimSegmentLineColorRGBA";
LineSet1521.color = ColorRGBA1523;

Shape1520.geometry = LineSet1521;

HAnimSegment1516.children[2] = Shape1520;

HAnimJoint1515.children = new MFNode();

HAnimJoint1515.children[0] = HAnimSegment1516;

let HAnimJoint1524 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1524.name = "r_ring3";
HAnimJoint1524.DEF = "hanim_r_ring3";
HAnimJoint1524.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1524.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1524.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1525 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1525.name = "r_ring_distal";
HAnimSegment1525.DEF = "hanim_r_ring_distal";
//<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>
let TouchSensor1526 = browser.currentScene.createNode("TouchSensor");
TouchSensor1526.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1525.children = new MFNode();

HAnimSegment1525.children[0] = TouchSensor1526;

let Transform1527 = browser.currentScene.createNode("Transform");
Transform1527.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
let Shape1528 = browser.currentScene.createNode("Shape");
Shape1528.USE = "HAnimJointShape";
Transform1527.children = new MFNode();

Transform1527.children[0] = Shape1528;

HAnimSegment1525.children[1] = Transform1527;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
let Shape1529 = browser.currentScene.createNode("Shape");
let LineSet1530 = browser.currentScene.createNode("LineSet");
LineSet1530.vertexCount = new MFInt32(new int[2]);
let Coordinate1531 = browser.currentScene.createNode("Coordinate");
Coordinate1531.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1530.coord = Coordinate1531;

let ColorRGBA1532 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1532.USE = "HAnimSiteLineColorRGBA";
LineSet1530.color = ColorRGBA1532;

Shape1529.geometry = LineSet1530;

HAnimSegment1525.children[2] = Shape1529;

let HAnimSite1533 = browser.currentScene.createNode("HAnimSite");
HAnimSite1533.name = "r_ring_distal_tip";
HAnimSite1533.DEF = "hanim_r_ring_distal_tip";
HAnimSite1533.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
let TouchSensor1534 = browser.currentScene.createNode("TouchSensor");
TouchSensor1534.description = "HAnimSite r_ring_distal_tip";
HAnimSite1533.children = new MFNode();

HAnimSite1533.children[0] = TouchSensor1534;

let Shape1535 = browser.currentScene.createNode("Shape");
Shape1535.USE = "HAnimSiteShape";
HAnimSite1533.children[1] = Shape1535;

HAnimSegment1525.children[3] = HAnimSite1533;

HAnimJoint1524.children = new MFNode();

HAnimJoint1524.children[0] = HAnimSegment1525;

HAnimJoint1515.children[1] = HAnimJoint1524;

HAnimJoint1506.children[1] = HAnimJoint1515;

HAnimJoint1497.children[1] = HAnimJoint1506;

HAnimJoint1326.children[4] = HAnimJoint1497;

let HAnimJoint1536 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1536.name = "r_pinky0";
HAnimJoint1536.DEF = "hanim_r_pinky0";
HAnimJoint1536.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1536.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1536.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1537 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1537.name = "r_pinky_metacarpal";
HAnimSegment1537.DEF = "hanim_r_pinky_metacarpal";
//<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>
let TouchSensor1538 = browser.currentScene.createNode("TouchSensor");
TouchSensor1538.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1537.children = new MFNode();

HAnimSegment1537.children[0] = TouchSensor1538;

let Transform1539 = browser.currentScene.createNode("Transform");
Transform1539.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
let Shape1540 = browser.currentScene.createNode("Shape");
Shape1540.USE = "HAnimJointShape";
Transform1539.children = new MFNode();

Transform1539.children[0] = Shape1540;

HAnimSegment1537.children[1] = Transform1539;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
let Shape1541 = browser.currentScene.createNode("Shape");
let LineSet1542 = browser.currentScene.createNode("LineSet");
LineSet1542.vertexCount = new MFInt32(new int[2]);
let Coordinate1543 = browser.currentScene.createNode("Coordinate");
Coordinate1543.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1542.coord = Coordinate1543;

let ColorRGBA1544 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1544.USE = "HAnimSegmentLineColorRGBA";
LineSet1542.color = ColorRGBA1544;

Shape1541.geometry = LineSet1542;

HAnimSegment1537.children[2] = Shape1541;

HAnimJoint1536.children = new MFNode();

HAnimJoint1536.children[0] = HAnimSegment1537;

let HAnimJoint1545 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1545.name = "r_pinky1";
HAnimJoint1545.DEF = "hanim_r_pinky1";
HAnimJoint1545.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1545.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1545.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1546 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1546.name = "r_pinky_proximal";
HAnimSegment1546.DEF = "hanim_r_pinky_proximal";
//<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>
let TouchSensor1547 = browser.currentScene.createNode("TouchSensor");
TouchSensor1547.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1546.children = new MFNode();

HAnimSegment1546.children[0] = TouchSensor1547;

let Transform1548 = browser.currentScene.createNode("Transform");
Transform1548.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
let Shape1549 = browser.currentScene.createNode("Shape");
Shape1549.USE = "HAnimJointShape";
Transform1548.children = new MFNode();

Transform1548.children[0] = Shape1549;

HAnimSegment1546.children[1] = Transform1548;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
let Shape1550 = browser.currentScene.createNode("Shape");
let LineSet1551 = browser.currentScene.createNode("LineSet");
LineSet1551.vertexCount = new MFInt32(new int[2]);
let Coordinate1552 = browser.currentScene.createNode("Coordinate");
Coordinate1552.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1551.coord = Coordinate1552;

let ColorRGBA1553 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1553.USE = "HAnimSegmentLineColorRGBA";
LineSet1551.color = ColorRGBA1553;

Shape1550.geometry = LineSet1551;

HAnimSegment1546.children[2] = Shape1550;

HAnimJoint1545.children = new MFNode();

HAnimJoint1545.children[0] = HAnimSegment1546;

let HAnimJoint1554 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1554.name = "r_pinky2";
HAnimJoint1554.DEF = "hanim_r_pinky2";
HAnimJoint1554.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1554.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1554.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1555 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1555.name = "r_pinky_middle";
HAnimSegment1555.DEF = "hanim_r_pinky_middle";
//<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>
let TouchSensor1556 = browser.currentScene.createNode("TouchSensor");
TouchSensor1556.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1555.children = new MFNode();

HAnimSegment1555.children[0] = TouchSensor1556;

let Transform1557 = browser.currentScene.createNode("Transform");
Transform1557.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
let Shape1558 = browser.currentScene.createNode("Shape");
Shape1558.USE = "HAnimJointShape";
Transform1557.children = new MFNode();

Transform1557.children[0] = Shape1558;

HAnimSegment1555.children[1] = Transform1557;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
let Shape1559 = browser.currentScene.createNode("Shape");
let LineSet1560 = browser.currentScene.createNode("LineSet");
LineSet1560.vertexCount = new MFInt32(new int[2]);
let Coordinate1561 = browser.currentScene.createNode("Coordinate");
Coordinate1561.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1560.coord = Coordinate1561;

let ColorRGBA1562 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1562.USE = "HAnimSegmentLineColorRGBA";
LineSet1560.color = ColorRGBA1562;

Shape1559.geometry = LineSet1560;

HAnimSegment1555.children[2] = Shape1559;

HAnimJoint1554.children = new MFNode();

HAnimJoint1554.children[0] = HAnimSegment1555;

let HAnimJoint1563 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1563.name = "r_pinky3";
HAnimJoint1563.DEF = "hanim_r_pinky3";
HAnimJoint1563.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1563.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1563.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1564 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1564.name = "r_pinky_distal";
HAnimSegment1564.DEF = "hanim_r_pinky_distal";
//<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>
let TouchSensor1565 = browser.currentScene.createNode("TouchSensor");
TouchSensor1565.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1564.children = new MFNode();

HAnimSegment1564.children[0] = TouchSensor1565;

let Transform1566 = browser.currentScene.createNode("Transform");
Transform1566.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
let Shape1567 = browser.currentScene.createNode("Shape");
Shape1567.USE = "HAnimJointShape";
Transform1566.children = new MFNode();

Transform1566.children[0] = Shape1567;

HAnimSegment1564.children[1] = Transform1566;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
let Shape1568 = browser.currentScene.createNode("Shape");
let LineSet1569 = browser.currentScene.createNode("LineSet");
LineSet1569.vertexCount = new MFInt32(new int[2]);
let Coordinate1570 = browser.currentScene.createNode("Coordinate");
Coordinate1570.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1569.coord = Coordinate1570;

let ColorRGBA1571 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1571.USE = "HAnimSiteLineColorRGBA";
LineSet1569.color = ColorRGBA1571;

Shape1568.geometry = LineSet1569;

HAnimSegment1564.children[2] = Shape1568;

let HAnimSite1572 = browser.currentScene.createNode("HAnimSite");
HAnimSite1572.name = "r_pinky_distal_tip";
HAnimSite1572.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1572.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
let TouchSensor1573 = browser.currentScene.createNode("TouchSensor");
TouchSensor1573.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1572.children = new MFNode();

HAnimSite1572.children[0] = TouchSensor1573;

let Shape1574 = browser.currentScene.createNode("Shape");
Shape1574.USE = "HAnimSiteShape";
HAnimSite1572.children[1] = Shape1574;

HAnimSegment1564.children[3] = HAnimSite1572;

HAnimJoint1563.children = new MFNode();

HAnimJoint1563.children[0] = HAnimSegment1564;

HAnimJoint1554.children[1] = HAnimJoint1563;

HAnimJoint1545.children[1] = HAnimJoint1554;

HAnimJoint1536.children[1] = HAnimJoint1545;

HAnimJoint1326.children[5] = HAnimJoint1536;

HAnimJoint1289.children[1] = HAnimJoint1326;

HAnimJoint1273.children[1] = HAnimJoint1289;

HAnimJoint1264.children[1] = HAnimJoint1273;

HAnimJoint1227.children[1] = HAnimJoint1264;

HAnimJoint595.children[3] = HAnimJoint1227;

HAnimJoint586.children[1] = HAnimJoint595;

HAnimJoint577.children[1] = HAnimJoint586;

HAnimJoint568.children[1] = HAnimJoint577;

HAnimJoint559.children[1] = HAnimJoint568;

HAnimJoint550.children[1] = HAnimJoint559;

HAnimJoint541.children[1] = HAnimJoint550;

HAnimJoint532.children[1] = HAnimJoint541;

HAnimJoint509.children[1] = HAnimJoint532;

HAnimJoint493.children[1] = HAnimJoint509;

HAnimJoint484.children[1] = HAnimJoint493;

HAnimJoint475.children[1] = HAnimJoint484;

HAnimJoint466.children[1] = HAnimJoint475;

HAnimJoint436.children[1] = HAnimJoint466;

HAnimJoint427.children[1] = HAnimJoint436;

HAnimJoint418.children[1] = HAnimJoint427;

HAnimJoint395.children[1] = HAnimJoint418;

HAnimJoint45.children[2] = HAnimJoint395;

HAnimHumanoid44.joints = new MFNode();

HAnimHumanoid44.joints[0] = HAnimJoint45;

//USE nodes for inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes for viewing the humanoid without being affected by body motion
let HAnimSite1575 = browser.currentScene.createNode("HAnimSite");
HAnimSite1575.name = "l_inclined_view";
HAnimSite1575.DEF = "hanim_l_inclined_view";
HAnimSite1575.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1575.translation = new SFVec3f(new float[1.62,1.05,2.06]);
let Viewpoint1576 = browser.currentScene.createNode("Viewpoint");
Viewpoint1576.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1576.description = "left inclined";
Viewpoint1576.position = new SFVec3f(new float[0,0,0]);
HAnimSite1575.children = new MFNode();

HAnimSite1575.children[0] = Viewpoint1576;

//HAnimSite/Viewpoint visualization shape
let Anchor1577 = browser.currentScene.createNode("Anchor");
Anchor1577.description = "HAnimSite Viewpoint hanim_l_inclined_view";
Anchor1577.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
let LOD1578 = browser.currentScene.createNode("LOD");
LOD1578.forceTransitions = True;
LOD1578.range = new MFFloat(new float[0.04]);
let WorldInfo1579 = browser.currentScene.createNode("WorldInfo");
WorldInfo1579.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1578.children = new MFNode();

LOD1578.children[0] = WorldInfo1579;

let Shape1580 = browser.currentScene.createNode("Shape");
Shape1580.USE = "HAnimSiteViewpointShape";
LOD1578.children[1] = Shape1580;

Anchor1577.children = new MFNode();

Anchor1577.children[0] = LOD1578;

HAnimSite1575.children[1] = Anchor1577;

HAnimHumanoid44.viewpoints[1] = HAnimSite1575;

let HAnimSite1581 = browser.currentScene.createNode("HAnimSite");
HAnimSite1581.name = "r_inclined_view";
HAnimSite1581.DEF = "hanim_r_inclined_view";
HAnimSite1581.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1581.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
let Viewpoint1582 = browser.currentScene.createNode("Viewpoint");
Viewpoint1582.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1582.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1582.description = "right inclined";
Viewpoint1582.position = new SFVec3f(new float[0,0,0]);
HAnimSite1581.children = new MFNode();

HAnimSite1581.children[0] = Viewpoint1582;

//HAnimSite/Viewpoint visualization shape
let Anchor1583 = browser.currentScene.createNode("Anchor");
Anchor1583.description = "HAnimSite Viewpoint hanim_r_inclined_view";
Anchor1583.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
let LOD1584 = browser.currentScene.createNode("LOD");
LOD1584.forceTransitions = True;
LOD1584.range = new MFFloat(new float[0.04]);
let WorldInfo1585 = browser.currentScene.createNode("WorldInfo");
WorldInfo1585.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1584.children = new MFNode();

LOD1584.children[0] = WorldInfo1585;

let Shape1586 = browser.currentScene.createNode("Shape");
Shape1586.USE = "HAnimSiteViewpointShape";
LOD1584.children[1] = Shape1586;

Anchor1583.children = new MFNode();

Anchor1583.children[0] = LOD1584;

HAnimSite1581.children[1] = Anchor1583;

HAnimHumanoid44.viewpoints[2] = HAnimSite1581;

let HAnimSite1587 = browser.currentScene.createNode("HAnimSite");
HAnimSite1587.name = "front_view";
HAnimSite1587.DEF = "hanim_front_view";
HAnimSite1587.translation = new SFVec3f(new float[0,0.85,2.58]);
let Viewpoint1588 = browser.currentScene.createNode("Viewpoint");
Viewpoint1588.DEF = "hanim_front_viewpoint";
Viewpoint1588.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1588.description = "front";
Viewpoint1588.position = new SFVec3f(new float[0,0,0]);
HAnimSite1587.children = new MFNode();

HAnimSite1587.children[0] = Viewpoint1588;

//HAnimSite/Viewpoint visualization shape
let Anchor1589 = browser.currentScene.createNode("Anchor");
Anchor1589.description = "HAnimSite Viewpoint hanim_front_view";
Anchor1589.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
let LOD1590 = browser.currentScene.createNode("LOD");
LOD1590.forceTransitions = True;
LOD1590.range = new MFFloat(new float[0.04]);
let WorldInfo1591 = browser.currentScene.createNode("WorldInfo");
WorldInfo1591.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1590.children = new MFNode();

LOD1590.children[0] = WorldInfo1591;

let Shape1592 = browser.currentScene.createNode("Shape");
Shape1592.USE = "HAnimSiteViewpointShape";
LOD1590.children[1] = Shape1592;

Anchor1589.children = new MFNode();

Anchor1589.children[0] = LOD1590;

HAnimSite1587.children[1] = Anchor1589;

HAnimHumanoid44.viewpoints[3] = HAnimSite1587;

let HAnimSite1593 = browser.currentScene.createNode("HAnimSite");
HAnimSite1593.name = "back_view";
HAnimSite1593.DEF = "hanim_back_view";
HAnimSite1593.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1593.translation = new SFVec3f(new float[0,0.85,-2.58]);
let Viewpoint1594 = browser.currentScene.createNode("Viewpoint");
Viewpoint1594.DEF = "hanim_back_viewpoint";
Viewpoint1594.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1594.description = "back";
Viewpoint1594.position = new SFVec3f(new float[0,0,0]);
HAnimSite1593.children = new MFNode();

HAnimSite1593.children[0] = Viewpoint1594;

//HAnimSite/Viewpoint visualization shape
let Anchor1595 = browser.currentScene.createNode("Anchor");
Anchor1595.description = "HAnimSite Viewpoint hanim_back_view";
Anchor1595.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
let LOD1596 = browser.currentScene.createNode("LOD");
LOD1596.forceTransitions = True;
LOD1596.range = new MFFloat(new float[0.04]);
let WorldInfo1597 = browser.currentScene.createNode("WorldInfo");
WorldInfo1597.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1596.children = new MFNode();

LOD1596.children[0] = WorldInfo1597;

let Shape1598 = browser.currentScene.createNode("Shape");
Shape1598.USE = "HAnimSiteViewpointShape";
LOD1596.children[1] = Shape1598;

Anchor1595.children = new MFNode();

Anchor1595.children[0] = LOD1596;

HAnimSite1593.children[1] = Anchor1595;

HAnimHumanoid44.viewpoints[4] = HAnimSite1593;

let HAnimSite1599 = browser.currentScene.createNode("HAnimSite");
HAnimSite1599.name = "l_side_view";
HAnimSite1599.DEF = "hanim_l_side_view";
HAnimSite1599.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1599.translation = new SFVec3f(new float[2.6,0.854,0]);
let Viewpoint1600 = browser.currentScene.createNode("Viewpoint");
Viewpoint1600.DEF = "hanim_l_side_viewpoint";
Viewpoint1600.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1600.description = "left side";
Viewpoint1600.position = new SFVec3f(new float[0,0,0]);
HAnimSite1599.children = new MFNode();

HAnimSite1599.children[0] = Viewpoint1600;

//HAnimSite/Viewpoint visualization shape
let Anchor1601 = browser.currentScene.createNode("Anchor");
Anchor1601.description = "HAnimSite Viewpoint hanim_l_side_view";
Anchor1601.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
let LOD1602 = browser.currentScene.createNode("LOD");
LOD1602.forceTransitions = True;
LOD1602.range = new MFFloat(new float[0.04]);
let WorldInfo1603 = browser.currentScene.createNode("WorldInfo");
WorldInfo1603.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1602.children = new MFNode();

LOD1602.children[0] = WorldInfo1603;

let Shape1604 = browser.currentScene.createNode("Shape");
Shape1604.USE = "HAnimSiteViewpointShape";
LOD1602.children[1] = Shape1604;

Anchor1601.children = new MFNode();

Anchor1601.children[0] = LOD1602;

HAnimSite1599.children[1] = Anchor1601;

HAnimHumanoid44.viewpoints[5] = HAnimSite1599;

let HAnimSite1605 = browser.currentScene.createNode("HAnimSite");
HAnimSite1605.name = "Top_view";
HAnimSite1605.DEF = "hanim_Top_view";
HAnimSite1605.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1605.translation = new SFVec3f(new float[0,3.5,0]);
let Viewpoint1606 = browser.currentScene.createNode("Viewpoint");
Viewpoint1606.DEF = "hanim_Top_viewpoint";
Viewpoint1606.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1606.description = "Top";
Viewpoint1606.position = new SFVec3f(new float[0,0,0]);
HAnimSite1605.children = new MFNode();

HAnimSite1605.children[0] = Viewpoint1606;

//HAnimSite/Viewpoint visualization shape
let Anchor1607 = browser.currentScene.createNode("Anchor");
Anchor1607.description = "HAnimSite Viewpoint hanim_Top_view";
Anchor1607.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
let LOD1608 = browser.currentScene.createNode("LOD");
LOD1608.forceTransitions = True;
LOD1608.range = new MFFloat(new float[0.04]);
let WorldInfo1609 = browser.currentScene.createNode("WorldInfo");
WorldInfo1609.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1608.children = new MFNode();

LOD1608.children[0] = WorldInfo1609;

let Shape1610 = browser.currentScene.createNode("Shape");
Shape1610.USE = "HAnimSiteViewpointShape";
LOD1608.children[1] = Shape1610;

Anchor1607.children = new MFNode();

Anchor1607.children[0] = LOD1608;

HAnimSite1605.children[1] = Anchor1607;

HAnimHumanoid44.viewpoints[6] = HAnimSite1605;

let HAnimSite1611 = browser.currentScene.createNode("HAnimSite");
HAnimSite1611.name = "front_close_view";
HAnimSite1611.DEF = "hanim_front_close_view";
HAnimSite1611.translation = new SFVec3f(new float[0,0.854,1.575]);
let Viewpoint1612 = browser.currentScene.createNode("Viewpoint");
Viewpoint1612.DEF = "hanim_front_close_viewpoint";
Viewpoint1612.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1612.description = "front close";
Viewpoint1612.position = new SFVec3f(new float[0,0,0]);
HAnimSite1611.children = new MFNode();

HAnimSite1611.children[0] = Viewpoint1612;

//HAnimSite/Viewpoint visualization shape
let Anchor1613 = browser.currentScene.createNode("Anchor");
Anchor1613.description = "HAnimSite Viewpoint hanim_front_close_view";
Anchor1613.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
let LOD1614 = browser.currentScene.createNode("LOD");
LOD1614.forceTransitions = True;
LOD1614.range = new MFFloat(new float[0.04]);
let WorldInfo1615 = browser.currentScene.createNode("WorldInfo");
WorldInfo1615.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1614.children = new MFNode();

LOD1614.children[0] = WorldInfo1615;

let Shape1616 = browser.currentScene.createNode("Shape");
Shape1616.USE = "HAnimSiteViewpointShape";
LOD1614.children[1] = Shape1616;

Anchor1613.children = new MFNode();

Anchor1613.children[0] = LOD1614;

HAnimSite1611.children[1] = Anchor1613;

HAnimHumanoid44.viewpoints[7] = HAnimSite1611;

let HAnimSite1617 = browser.currentScene.createNode("HAnimSite");
HAnimSite1617.name = "side_close_view";
HAnimSite1617.DEF = "hanim_side_close_view";
HAnimSite1617.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1617.translation = new SFVec3f(new float[1.56,0.854,0]);
let Viewpoint1618 = browser.currentScene.createNode("Viewpoint");
Viewpoint1618.DEF = "hanim_side_close_viewpoint";
Viewpoint1618.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1618.description = "side close";
Viewpoint1618.position = new SFVec3f(new float[0,0,0]);
HAnimSite1617.children = new MFNode();

HAnimSite1617.children[0] = Viewpoint1618;

//HAnimSite/Viewpoint visualization shape
let Anchor1619 = browser.currentScene.createNode("Anchor");
Anchor1619.description = "HAnimSite Viewpoint hanim_side_close_view";
Anchor1619.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
let LOD1620 = browser.currentScene.createNode("LOD");
LOD1620.forceTransitions = True;
LOD1620.range = new MFFloat(new float[0.04]);
let WorldInfo1621 = browser.currentScene.createNode("WorldInfo");
WorldInfo1621.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1620.children = new MFNode();

LOD1620.children[0] = WorldInfo1621;

let Shape1622 = browser.currentScene.createNode("Shape");
Shape1622.USE = "HAnimSiteViewpointShape";
LOD1620.children[1] = Shape1622;

Anchor1619.children = new MFNode();

Anchor1619.children[0] = LOD1620;

HAnimSite1617.children[1] = Anchor1619;

HAnimHumanoid44.viewpoints[8] = HAnimSite1617;

let HAnimSite1623 = browser.currentScene.createNode("HAnimSite");
HAnimSite1623.name = "head_front_close_view";
HAnimSite1623.DEF = "hanim_head_front_close_view";
HAnimSite1623.translation = new SFVec3f(new float[0,1.5,1]);
let Viewpoint1624 = browser.currentScene.createNode("Viewpoint");
Viewpoint1624.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1624.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1624.description = "head front close";
Viewpoint1624.position = new SFVec3f(new float[0,0,0]);
HAnimSite1623.children = new MFNode();

HAnimSite1623.children[0] = Viewpoint1624;

//HAnimSite/Viewpoint visualization shape
let Anchor1625 = browser.currentScene.createNode("Anchor");
Anchor1625.description = "HAnimSite Viewpoint hanim_head_front_close_view";
Anchor1625.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
let LOD1626 = browser.currentScene.createNode("LOD");
LOD1626.forceTransitions = True;
LOD1626.range = new MFFloat(new float[0.04]);
let WorldInfo1627 = browser.currentScene.createNode("WorldInfo");
WorldInfo1627.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1626.children = new MFNode();

LOD1626.children[0] = WorldInfo1627;

let Shape1628 = browser.currentScene.createNode("Shape");
Shape1628.USE = "HAnimSiteViewpointShape";
LOD1626.children[1] = Shape1628;

Anchor1625.children = new MFNode();

Anchor1625.children[0] = LOD1626;

HAnimSite1623.children[1] = Anchor1625;

HAnimHumanoid44.viewpoints[9] = HAnimSite1623;

let HAnimSite1629 = browser.currentScene.createNode("HAnimSite");
HAnimSite1629.name = "chest_front_close_view";
HAnimSite1629.DEF = "hanim_chest_front_close_view";
HAnimSite1629.translation = new SFVec3f(new float[0,1.2,1]);
let Viewpoint1630 = browser.currentScene.createNode("Viewpoint");
Viewpoint1630.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1630.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1630.description = "chest front close";
Viewpoint1630.position = new SFVec3f(new float[0,0,0]);
HAnimSite1629.children = new MFNode();

HAnimSite1629.children[0] = Viewpoint1630;

//HAnimSite/Viewpoint visualization shape
let Anchor1631 = browser.currentScene.createNode("Anchor");
Anchor1631.description = "HAnimSite Viewpoint hanim_chest_front_close_view";
Anchor1631.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
let LOD1632 = browser.currentScene.createNode("LOD");
LOD1632.forceTransitions = True;
LOD1632.range = new MFFloat(new float[0.04]);
let WorldInfo1633 = browser.currentScene.createNode("WorldInfo");
WorldInfo1633.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1632.children = new MFNode();

LOD1632.children[0] = WorldInfo1633;

let Shape1634 = browser.currentScene.createNode("Shape");
Shape1634.USE = "HAnimSiteViewpointShape";
LOD1632.children[1] = Shape1634;

Anchor1631.children = new MFNode();

Anchor1631.children[0] = LOD1632;

HAnimSite1629.children[1] = Anchor1631;

HAnimHumanoid44.viewpoints[10] = HAnimSite1629;

let HAnimSite1635 = browser.currentScene.createNode("HAnimSite");
HAnimSite1635.name = "pelvis_front_close_view";
HAnimSite1635.DEF = "hanim_pelvis_front_close_view";
HAnimSite1635.translation = new SFVec3f(new float[0,0.8,1]);
let Viewpoint1636 = browser.currentScene.createNode("Viewpoint");
Viewpoint1636.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1636.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1636.description = "pelvis front close";
Viewpoint1636.position = new SFVec3f(new float[0,0,0]);
HAnimSite1635.children = new MFNode();

HAnimSite1635.children[0] = Viewpoint1636;

//HAnimSite/Viewpoint visualization shape
let Anchor1637 = browser.currentScene.createNode("Anchor");
Anchor1637.description = "HAnimSite Viewpoint hanim_pelvis_front_close_view";
Anchor1637.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
let LOD1638 = browser.currentScene.createNode("LOD");
LOD1638.forceTransitions = True;
LOD1638.range = new MFFloat(new float[0.04]);
let WorldInfo1639 = browser.currentScene.createNode("WorldInfo");
WorldInfo1639.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1638.children = new MFNode();

LOD1638.children[0] = WorldInfo1639;

let Shape1640 = browser.currentScene.createNode("Shape");
Shape1640.USE = "HAnimSiteViewpointShape";
LOD1638.children[1] = Shape1640;

Anchor1637.children = new MFNode();

Anchor1637.children[0] = LOD1638;

HAnimSite1635.children[1] = Anchor1637;

HAnimHumanoid44.viewpoints[11] = HAnimSite1635;

let HAnimSite1641 = browser.currentScene.createNode("HAnimSite");
HAnimSite1641.name = "knees_front_close_view";
HAnimSite1641.DEF = "hanim_knees_front_close_view";
HAnimSite1641.translation = new SFVec3f(new float[0,0.4,1]);
let Viewpoint1642 = browser.currentScene.createNode("Viewpoint");
Viewpoint1642.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1642.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1642.description = "knees front close";
Viewpoint1642.position = new SFVec3f(new float[0,0,0]);
HAnimSite1641.children = new MFNode();

HAnimSite1641.children[0] = Viewpoint1642;

//HAnimSite/Viewpoint visualization shape
let Anchor1643 = browser.currentScene.createNode("Anchor");
Anchor1643.description = "HAnimSite Viewpoint hanim_knees_front_close_view";
Anchor1643.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
let LOD1644 = browser.currentScene.createNode("LOD");
LOD1644.forceTransitions = True;
LOD1644.range = new MFFloat(new float[0.04]);
let WorldInfo1645 = browser.currentScene.createNode("WorldInfo");
WorldInfo1645.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1644.children = new MFNode();

LOD1644.children[0] = WorldInfo1645;

let Shape1646 = browser.currentScene.createNode("Shape");
Shape1646.USE = "HAnimSiteViewpointShape";
LOD1644.children[1] = Shape1646;

Anchor1643.children = new MFNode();

Anchor1643.children[0] = LOD1644;

HAnimSite1641.children[1] = Anchor1643;

HAnimHumanoid44.viewpoints[12] = HAnimSite1641;

let HAnimSite1647 = browser.currentScene.createNode("HAnimSite");
HAnimSite1647.name = "feet_front_close_view";
HAnimSite1647.DEF = "hanim_feet_front_close_view";
HAnimSite1647.translation = new SFVec3f(new float[0,0,1]);
let Viewpoint1648 = browser.currentScene.createNode("Viewpoint");
Viewpoint1648.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1648.description = "feet front close";
Viewpoint1648.position = new SFVec3f(new float[0,0,0]);
HAnimSite1647.children = new MFNode();

HAnimSite1647.children[0] = Viewpoint1648;

//HAnimSite/Viewpoint visualization shape
let Anchor1649 = browser.currentScene.createNode("Anchor");
Anchor1649.description = "HAnimSite Viewpoint hanim_feet_front_close_view";
Anchor1649.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
let LOD1650 = browser.currentScene.createNode("LOD");
LOD1650.forceTransitions = True;
LOD1650.range = new MFFloat(new float[0.04]);
let WorldInfo1651 = browser.currentScene.createNode("WorldInfo");
WorldInfo1651.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1650.children = new MFNode();

LOD1650.children[0] = WorldInfo1651;

let Shape1652 = browser.currentScene.createNode("Shape");
Shape1652.USE = "HAnimSiteViewpointShape";
LOD1650.children[1] = Shape1652;

Anchor1649.children = new MFNode();

Anchor1649.children[0] = LOD1650;

HAnimSite1647.children[1] = Anchor1649;

HAnimHumanoid44.viewpoints[13] = HAnimSite1647;

let HAnimSite1653 = browser.currentScene.createNode("HAnimSite");
HAnimSite1653.name = "eye_level_view";
HAnimSite1653.DEF = "hanim_eye_level_view";
HAnimSite1653.translation = new SFVec3f(new float[0,1.6332,0.0502]);
let Viewpoint1654 = browser.currentScene.createNode("Viewpoint");
Viewpoint1654.DEF = "hanim_eye_level_viewpoint";
Viewpoint1654.description = "eye level looking forward";
Viewpoint1654.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1654.position = new SFVec3f(new float[0,0,0]);
HAnimSite1653.children = new MFNode();

HAnimSite1653.children[0] = Viewpoint1654;

//HAnimSite/Viewpoint visualization shape
let Anchor1655 = browser.currentScene.createNode("Anchor");
Anchor1655.description = "HAnimSite Viewpoint hanim_eye_level_view";
Anchor1655.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
let LOD1656 = browser.currentScene.createNode("LOD");
LOD1656.forceTransitions = True;
LOD1656.range = new MFFloat(new float[0.04]);
let WorldInfo1657 = browser.currentScene.createNode("WorldInfo");
WorldInfo1657.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1656.children = new MFNode();

LOD1656.children[0] = WorldInfo1657;

let Shape1658 = browser.currentScene.createNode("Shape");
Shape1658.USE = "HAnimSiteViewpointShape";
LOD1656.children[1] = Shape1658;

Anchor1655.children = new MFNode();

Anchor1655.children[0] = LOD1656;

HAnimSite1653.children[1] = Anchor1655;

HAnimHumanoid44.viewpoints[14] = HAnimSite1653;

let HAnimSite1659 = browser.currentScene.createNode("HAnimSite");
HAnimSite1659.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid44.viewpoints[15] = HAnimSite1659;

let HAnimSite1660 = browser.currentScene.createNode("HAnimSite");
HAnimSite1660.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid44.viewpoints[16] = HAnimSite1660;

let HAnimSite1661 = browser.currentScene.createNode("HAnimSite");
HAnimSite1661.USE = "hanim_l_hand_front_view";
HAnimHumanoid44.viewpoints[17] = HAnimSite1661;

let HAnimSite1662 = browser.currentScene.createNode("HAnimSite");
HAnimSite1662.USE = "hanim_r_hand_front_view";
HAnimHumanoid44.viewpoints[18] = HAnimSite1662;

let HAnimJoint1663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_humanoid_root";
HAnimHumanoid44.joints[19] = HAnimJoint1663;

let HAnimJoint1664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_sacroiliac";
HAnimHumanoid44.joints[20] = HAnimJoint1664;

let HAnimJoint1665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_vl5";
HAnimHumanoid44.joints[21] = HAnimJoint1665;

let HAnimJoint1666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_vl4";
HAnimHumanoid44.joints[22] = HAnimJoint1666;

let HAnimJoint1667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_vl3";
HAnimHumanoid44.joints[23] = HAnimJoint1667;

let HAnimJoint1668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_vl2";
HAnimHumanoid44.joints[24] = HAnimJoint1668;

let HAnimJoint1669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vl1";
HAnimHumanoid44.joints[25] = HAnimJoint1669;

let HAnimJoint1670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vt12";
HAnimHumanoid44.joints[26] = HAnimJoint1670;

let HAnimJoint1671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vt11";
HAnimHumanoid44.joints[27] = HAnimJoint1671;

let HAnimJoint1672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vt10";
HAnimHumanoid44.joints[28] = HAnimJoint1672;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vt9";
HAnimHumanoid44.joints[29] = HAnimJoint1673;

let HAnimJoint1674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt8";
HAnimHumanoid44.joints[30] = HAnimJoint1674;

let HAnimJoint1675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vt7";
HAnimHumanoid44.joints[31] = HAnimJoint1675;

let HAnimJoint1676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vt6";
HAnimHumanoid44.joints[32] = HAnimJoint1676;

let HAnimJoint1677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vt5";
HAnimHumanoid44.joints[33] = HAnimJoint1677;

let HAnimJoint1678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vt4";
HAnimHumanoid44.joints[34] = HAnimJoint1678;

let HAnimJoint1679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vt3";
HAnimHumanoid44.joints[35] = HAnimJoint1679;

let HAnimJoint1680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vt2";
HAnimHumanoid44.joints[36] = HAnimJoint1680;

let HAnimJoint1681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vt1";
HAnimHumanoid44.joints[37] = HAnimJoint1681;

let HAnimJoint1682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vc7";
HAnimHumanoid44.joints[38] = HAnimJoint1682;

let HAnimJoint1683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_vc6";
HAnimHumanoid44.joints[39] = HAnimJoint1683;

let HAnimJoint1684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_vc5";
HAnimHumanoid44.joints[40] = HAnimJoint1684;

let HAnimJoint1685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_vc4";
HAnimHumanoid44.joints[41] = HAnimJoint1685;

let HAnimJoint1686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_vc3";
HAnimHumanoid44.joints[42] = HAnimJoint1686;

let HAnimJoint1687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_vc2";
HAnimHumanoid44.joints[43] = HAnimJoint1687;

let HAnimJoint1688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_vc1";
HAnimHumanoid44.joints[44] = HAnimJoint1688;

let HAnimJoint1689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_skullbase";
HAnimHumanoid44.joints[45] = HAnimJoint1689;

let HAnimJoint1690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_temporomandibular";
HAnimHumanoid44.joints[46] = HAnimJoint1690;

let HAnimJoint1691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_l_acromioclavicular";
HAnimHumanoid44.joints[47] = HAnimJoint1691;

let HAnimJoint1692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_r_acromioclavicular";
HAnimHumanoid44.joints[48] = HAnimJoint1692;

let HAnimJoint1693 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_l_ankle";
HAnimHumanoid44.joints[49] = HAnimJoint1693;

let HAnimJoint1694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_r_ankle";
HAnimHumanoid44.joints[50] = HAnimJoint1694;

let HAnimJoint1695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_l_elbow";
HAnimHumanoid44.joints[51] = HAnimJoint1695;

let HAnimJoint1696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_r_elbow";
HAnimHumanoid44.joints[52] = HAnimJoint1696;

let HAnimJoint1697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_l_eyeball_joint";
HAnimHumanoid44.joints[53] = HAnimJoint1697;

let HAnimJoint1698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_r_eyeball_joint";
HAnimHumanoid44.joints[54] = HAnimJoint1698;

let HAnimJoint1699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid44.joints[55] = HAnimJoint1699;

let HAnimJoint1700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid44.joints[56] = HAnimJoint1700;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_l_eyelid_joint";
HAnimHumanoid44.joints[57] = HAnimJoint1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_r_eyelid_joint";
HAnimHumanoid44.joints[58] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_l_hip";
HAnimHumanoid44.joints[59] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_r_hip";
HAnimHumanoid44.joints[60] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_l_index0";
HAnimHumanoid44.joints[61] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_r_index0";
HAnimHumanoid44.joints[62] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_l_index1";
HAnimHumanoid44.joints[63] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_r_index1";
HAnimHumanoid44.joints[64] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_l_index2";
HAnimHumanoid44.joints[65] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_r_index2";
HAnimHumanoid44.joints[66] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_l_index3";
HAnimHumanoid44.joints[67] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_r_index3";
HAnimHumanoid44.joints[68] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_l_knee";
HAnimHumanoid44.joints[69] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_r_knee";
HAnimHumanoid44.joints[70] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_l_metatarsal";
HAnimHumanoid44.joints[71] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_r_metatarsal";
HAnimHumanoid44.joints[72] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_l_middle0";
HAnimHumanoid44.joints[73] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_r_middle0";
HAnimHumanoid44.joints[74] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_l_middle1";
HAnimHumanoid44.joints[75] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_r_middle1";
HAnimHumanoid44.joints[76] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_l_middle2";
HAnimHumanoid44.joints[77] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_r_middle2";
HAnimHumanoid44.joints[78] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_l_middle3";
HAnimHumanoid44.joints[79] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_r_middle3";
HAnimHumanoid44.joints[80] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_l_midtarsal";
HAnimHumanoid44.joints[81] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_r_midtarsal";
HAnimHumanoid44.joints[82] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_l_pinky0";
HAnimHumanoid44.joints[83] = HAnimJoint1727;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_r_pinky0";
HAnimHumanoid44.joints[84] = HAnimJoint1728;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_l_pinky1";
HAnimHumanoid44.joints[85] = HAnimJoint1729;

let HAnimJoint1730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_pinky1";
HAnimHumanoid44.joints[86] = HAnimJoint1730;

let HAnimJoint1731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_l_pinky2";
HAnimHumanoid44.joints[87] = HAnimJoint1731;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_pinky2";
HAnimHumanoid44.joints[88] = HAnimJoint1732;

let HAnimJoint1733 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_l_pinky3";
HAnimHumanoid44.joints[89] = HAnimJoint1733;

let HAnimJoint1734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_pinky3";
HAnimHumanoid44.joints[90] = HAnimJoint1734;

let HAnimJoint1735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_l_ring0";
HAnimHumanoid44.joints[91] = HAnimJoint1735;

let HAnimJoint1736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_ring0";
HAnimHumanoid44.joints[92] = HAnimJoint1736;

let HAnimJoint1737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_l_ring1";
HAnimHumanoid44.joints[93] = HAnimJoint1737;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_ring1";
HAnimHumanoid44.joints[94] = HAnimJoint1738;

let HAnimJoint1739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_l_ring2";
HAnimHumanoid44.joints[95] = HAnimJoint1739;

let HAnimJoint1740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_ring2";
HAnimHumanoid44.joints[96] = HAnimJoint1740;

let HAnimJoint1741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_l_ring3";
HAnimHumanoid44.joints[97] = HAnimJoint1741;

let HAnimJoint1742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_ring3";
HAnimHumanoid44.joints[98] = HAnimJoint1742;

let HAnimJoint1743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_l_shoulder";
HAnimHumanoid44.joints[99] = HAnimJoint1743;

let HAnimJoint1744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_shoulder";
HAnimHumanoid44.joints[100] = HAnimJoint1744;

let HAnimJoint1745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_l_sternoclavicular";
HAnimHumanoid44.joints[101] = HAnimJoint1745;

let HAnimJoint1746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_r_sternoclavicular";
HAnimHumanoid44.joints[102] = HAnimJoint1746;

let HAnimJoint1747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_l_subtalar";
HAnimHumanoid44.joints[103] = HAnimJoint1747;

let HAnimJoint1748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_r_subtalar";
HAnimHumanoid44.joints[104] = HAnimJoint1748;

let HAnimJoint1749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_l_thumb1";
HAnimHumanoid44.joints[105] = HAnimJoint1749;

let HAnimJoint1750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_r_thumb1";
HAnimHumanoid44.joints[106] = HAnimJoint1750;

let HAnimJoint1751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_l_thumb2";
HAnimHumanoid44.joints[107] = HAnimJoint1751;

let HAnimJoint1752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_r_thumb2";
HAnimHumanoid44.joints[108] = HAnimJoint1752;

let HAnimJoint1753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_l_thumb3";
HAnimHumanoid44.joints[109] = HAnimJoint1753;

let HAnimJoint1754 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_r_thumb3";
HAnimHumanoid44.joints[110] = HAnimJoint1754;

let HAnimJoint1755 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_l_wrist";
HAnimHumanoid44.joints[111] = HAnimJoint1755;

let HAnimJoint1756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_r_wrist";
HAnimHumanoid44.joints[112] = HAnimJoint1756;

let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_pelvis";
HAnimHumanoid44.segments[113] = HAnimSegment1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_skull";
HAnimHumanoid44.segments[114] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_jaw";
HAnimHumanoid44.segments[115] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_c1";
HAnimHumanoid44.segments[116] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_c2";
HAnimHumanoid44.segments[117] = HAnimSegment1761;

let HAnimSegment1762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_c3";
HAnimHumanoid44.segments[118] = HAnimSegment1762;

let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_c4";
HAnimHumanoid44.segments[119] = HAnimSegment1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_c5";
HAnimHumanoid44.segments[120] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_c6";
HAnimHumanoid44.segments[121] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_c7";
HAnimHumanoid44.segments[122] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_t1";
HAnimHumanoid44.segments[123] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_t2";
HAnimHumanoid44.segments[124] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_t3";
HAnimHumanoid44.segments[125] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_t4";
HAnimHumanoid44.segments[126] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_t5";
HAnimHumanoid44.segments[127] = HAnimSegment1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_t6";
HAnimHumanoid44.segments[128] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_t7";
HAnimHumanoid44.segments[129] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_t8";
HAnimHumanoid44.segments[130] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_t9";
HAnimHumanoid44.segments[131] = HAnimSegment1775;

let HAnimSegment1776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_t10";
HAnimHumanoid44.segments[132] = HAnimSegment1776;

let HAnimSegment1777 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_t11";
HAnimHumanoid44.segments[133] = HAnimSegment1777;

let HAnimSegment1778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_t12";
HAnimHumanoid44.segments[134] = HAnimSegment1778;

let HAnimSegment1779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_l1";
HAnimHumanoid44.segments[135] = HAnimSegment1779;

let HAnimSegment1780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_l2";
HAnimHumanoid44.segments[136] = HAnimSegment1780;

let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_l3";
HAnimHumanoid44.segments[137] = HAnimSegment1781;

let HAnimSegment1782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_l4";
HAnimHumanoid44.segments[138] = HAnimSegment1782;

let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_l5";
HAnimHumanoid44.segments[139] = HAnimSegment1783;

let HAnimSegment1784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_sacrum";
HAnimHumanoid44.segments[140] = HAnimSegment1784;

let HAnimSegment1785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_l_calf";
HAnimHumanoid44.segments[141] = HAnimSegment1785;

let HAnimSegment1786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_r_calf";
HAnimHumanoid44.segments[142] = HAnimSegment1786;

let HAnimSegment1787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_l_clavicle";
HAnimHumanoid44.segments[143] = HAnimSegment1787;

let HAnimSegment1788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_r_clavicle";
HAnimHumanoid44.segments[144] = HAnimSegment1788;

let HAnimSegment1789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_l_eyeball";
HAnimHumanoid44.segments[145] = HAnimSegment1789;

let HAnimSegment1790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_r_eyeball";
HAnimHumanoid44.segments[146] = HAnimSegment1790;

let HAnimSegment1791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_l_eyebrow";
HAnimHumanoid44.segments[147] = HAnimSegment1791;

let HAnimSegment1792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_r_eyebrow";
HAnimHumanoid44.segments[148] = HAnimSegment1792;

let HAnimSegment1793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_l_eyelid";
HAnimHumanoid44.segments[149] = HAnimSegment1793;

let HAnimSegment1794 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_r_eyelid";
HAnimHumanoid44.segments[150] = HAnimSegment1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_l_forearm";
HAnimHumanoid44.segments[151] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_r_forearm";
HAnimHumanoid44.segments[152] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_l_forefoot";
HAnimHumanoid44.segments[153] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_r_forefoot";
HAnimHumanoid44.segments[154] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_l_hand";
HAnimHumanoid44.segments[155] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_r_hand";
HAnimHumanoid44.segments[156] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_l_hindfoot";
HAnimHumanoid44.segments[157] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_r_hindfoot";
HAnimHumanoid44.segments[158] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_l_index_distal";
HAnimHumanoid44.segments[159] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_r_index_distal";
HAnimHumanoid44.segments[160] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_l_index_metacarpal";
HAnimHumanoid44.segments[161] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_r_index_metacarpal";
HAnimHumanoid44.segments[162] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_l_index_middle";
HAnimHumanoid44.segments[163] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_r_index_middle";
HAnimHumanoid44.segments[164] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_l_index_proximal";
HAnimHumanoid44.segments[165] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_r_index_proximal";
HAnimHumanoid44.segments[166] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_l_middistal";
HAnimHumanoid44.segments[167] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_r_middistal";
HAnimHumanoid44.segments[168] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_l_middle_distal";
HAnimHumanoid44.segments[169] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_r_middle_distal";
HAnimHumanoid44.segments[170] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid44.segments[171] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid44.segments[172] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_l_middle_middle";
HAnimHumanoid44.segments[173] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_r_middle_middle";
HAnimHumanoid44.segments[174] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_l_middle_proximal";
HAnimHumanoid44.segments[175] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_r_middle_proximal";
HAnimHumanoid44.segments[176] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_l_midproximal";
HAnimHumanoid44.segments[177] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_r_midproximal";
HAnimHumanoid44.segments[178] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_l_pinky_distal";
HAnimHumanoid44.segments[179] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_r_pinky_distal";
HAnimHumanoid44.segments[180] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid44.segments[181] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid44.segments[182] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_l_pinky_middle";
HAnimHumanoid44.segments[183] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_r_pinky_middle";
HAnimHumanoid44.segments[184] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_l_pinky_proximal";
HAnimHumanoid44.segments[185] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_r_pinky_proximal";
HAnimHumanoid44.segments[186] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_ring_distal";
HAnimHumanoid44.segments[187] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_r_ring_distal";
HAnimHumanoid44.segments[188] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid44.segments[189] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid44.segments[190] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_ring_middle";
HAnimHumanoid44.segments[191] = HAnimSegment1835;

let HAnimSegment1836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_r_ring_middle";
HAnimHumanoid44.segments[192] = HAnimSegment1836;

let HAnimSegment1837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_ring_proximal";
HAnimHumanoid44.segments[193] = HAnimSegment1837;

let HAnimSegment1838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_r_ring_proximal";
HAnimHumanoid44.segments[194] = HAnimSegment1838;

let HAnimSegment1839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_scapula";
HAnimHumanoid44.segments[195] = HAnimSegment1839;

let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_r_scapula";
HAnimHumanoid44.segments[196] = HAnimSegment1840;

let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_thigh";
HAnimHumanoid44.segments[197] = HAnimSegment1841;

let HAnimSegment1842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_r_thigh";
HAnimHumanoid44.segments[198] = HAnimSegment1842;

let HAnimSegment1843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_l_thumb_distal";
HAnimHumanoid44.segments[199] = HAnimSegment1843;

let HAnimSegment1844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_r_thumb_distal";
HAnimHumanoid44.segments[200] = HAnimSegment1844;

let HAnimSegment1845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid44.segments[201] = HAnimSegment1845;

let HAnimSegment1846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid44.segments[202] = HAnimSegment1846;

let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_l_thumb_proximal";
HAnimHumanoid44.segments[203] = HAnimSegment1847;

let HAnimSegment1848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_r_thumb_proximal";
HAnimHumanoid44.segments[204] = HAnimSegment1848;

let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_l_upperarm";
HAnimHumanoid44.segments[205] = HAnimSegment1849;

let HAnimSegment1850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_r_upperarm";
HAnimHumanoid44.segments[206] = HAnimSegment1850;

let HAnimSite1851 = browser.currentScene.createNode("HAnimSite");
HAnimSite1851.USE = "hanim_crotch_pt";
HAnimHumanoid44.viewpoints[207] = HAnimSite1851;

let HAnimSite1852 = browser.currentScene.createNode("HAnimSite");
HAnimSite1852.USE = "hanim_skull_tip";
HAnimHumanoid44.viewpoints[208] = HAnimSite1852;

let HAnimSite1853 = browser.currentScene.createNode("HAnimSite");
HAnimSite1853.USE = "hanim_sellion_pt";
HAnimHumanoid44.viewpoints[209] = HAnimSite1853;

let HAnimSite1854 = browser.currentScene.createNode("HAnimSite");
HAnimSite1854.USE = "hanim_supramenton_pt";
HAnimHumanoid44.viewpoints[210] = HAnimSite1854;

let HAnimSite1855 = browser.currentScene.createNode("HAnimSite");
HAnimSite1855.USE = "hanim_nuchale_pt";
HAnimHumanoid44.viewpoints[211] = HAnimSite1855;

let HAnimSite1856 = browser.currentScene.createNode("HAnimSite");
HAnimSite1856.USE = "hanim_suprasternale_pt";
HAnimHumanoid44.viewpoints[212] = HAnimSite1856;

let HAnimSite1857 = browser.currentScene.createNode("HAnimSite");
HAnimSite1857.USE = "hanim_cervicale_pt";
HAnimHumanoid44.viewpoints[213] = HAnimSite1857;

let HAnimSite1858 = browser.currentScene.createNode("HAnimSite");
HAnimSite1858.USE = "hanim_substernale_pt";
HAnimHumanoid44.viewpoints[214] = HAnimSite1858;

let HAnimSite1859 = browser.currentScene.createNode("HAnimSite");
HAnimSite1859.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid44.viewpoints[215] = HAnimSite1859;

let HAnimSite1860 = browser.currentScene.createNode("HAnimSite");
HAnimSite1860.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid44.viewpoints[216] = HAnimSite1860;

let HAnimSite1861 = browser.currentScene.createNode("HAnimSite");
HAnimSite1861.USE = "hanim_navel_pt";
HAnimHumanoid44.viewpoints[217] = HAnimSite1861;

let HAnimSite1862 = browser.currentScene.createNode("HAnimSite");
HAnimSite1862.USE = "hanim_l_acromion_pt";
HAnimHumanoid44.viewpoints[218] = HAnimSite1862;

let HAnimSite1863 = browser.currentScene.createNode("HAnimSite");
HAnimSite1863.USE = "hanim_r_acromion_pt";
HAnimHumanoid44.viewpoints[219] = HAnimSite1863;

let HAnimSite1864 = browser.currentScene.createNode("HAnimSite");
HAnimSite1864.USE = "hanim_r_asis_pt";
HAnimHumanoid44.viewpoints[220] = HAnimSite1864;

let HAnimSite1865 = browser.currentScene.createNode("HAnimSite");
HAnimSite1865.USE = "hanim_l_asis_pt";
HAnimHumanoid44.viewpoints[221] = HAnimSite1865;

let HAnimSite1866 = browser.currentScene.createNode("HAnimSite");
HAnimSite1866.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid44.viewpoints[222] = HAnimSite1866;

let HAnimSite1867 = browser.currentScene.createNode("HAnimSite");
HAnimSite1867.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid44.viewpoints[223] = HAnimSite1867;

let HAnimSite1868 = browser.currentScene.createNode("HAnimSite");
HAnimSite1868.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid44.viewpoints[224] = HAnimSite1868;

let HAnimSite1869 = browser.currentScene.createNode("HAnimSite");
HAnimSite1869.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid44.viewpoints[225] = HAnimSite1869;

let HAnimSite1870 = browser.currentScene.createNode("HAnimSite");
HAnimSite1870.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid44.viewpoints[226] = HAnimSite1870;

let HAnimSite1871 = browser.currentScene.createNode("HAnimSite");
HAnimSite1871.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid44.viewpoints[227] = HAnimSite1871;

let HAnimSite1872 = browser.currentScene.createNode("HAnimSite");
HAnimSite1872.USE = "hanim_l_clavicale_pt";
HAnimHumanoid44.viewpoints[228] = HAnimSite1872;

let HAnimSite1873 = browser.currentScene.createNode("HAnimSite");
HAnimSite1873.USE = "hanim_r_clavicale_pt";
HAnimHumanoid44.viewpoints[229] = HAnimSite1873;

let HAnimSite1874 = browser.currentScene.createNode("HAnimSite");
HAnimSite1874.USE = "hanim_l_dactylion_pt";
HAnimHumanoid44.viewpoints[230] = HAnimSite1874;

let HAnimSite1875 = browser.currentScene.createNode("HAnimSite");
HAnimSite1875.USE = "hanim_r_dactylion_pt";
HAnimHumanoid44.viewpoints[231] = HAnimSite1875;

let HAnimSite1876 = browser.currentScene.createNode("HAnimSite");
HAnimSite1876.USE = "hanim_l_digit2_pt";
HAnimHumanoid44.viewpoints[232] = HAnimSite1876;

let HAnimSite1877 = browser.currentScene.createNode("HAnimSite");
HAnimSite1877.USE = "hanim_r_digit2_pt";
HAnimHumanoid44.viewpoints[233] = HAnimSite1877;

let HAnimSite1878 = browser.currentScene.createNode("HAnimSite");
HAnimSite1878.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[234] = HAnimSite1878;

let HAnimSite1879 = browser.currentScene.createNode("HAnimSite");
HAnimSite1879.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[235] = HAnimSite1879;

let HAnimSite1880 = browser.currentScene.createNode("HAnimSite");
HAnimSite1880.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[236] = HAnimSite1880;

let HAnimSite1881 = browser.currentScene.createNode("HAnimSite");
HAnimSite1881.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[237] = HAnimSite1881;

let HAnimSite1882 = browser.currentScene.createNode("HAnimSite");
HAnimSite1882.USE = "hanim_l_forefoot_tip";
HAnimHumanoid44.viewpoints[238] = HAnimSite1882;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.USE = "hanim_r_forefoot_tip";
HAnimHumanoid44.viewpoints[239] = HAnimSite1883;

let HAnimSite1884 = browser.currentScene.createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_gonion_pt";
HAnimHumanoid44.viewpoints[240] = HAnimSite1884;

let HAnimSite1885 = browser.currentScene.createNode("HAnimSite");
HAnimSite1885.USE = "hanim_l_gonion_pt";
HAnimHumanoid44.viewpoints[241] = HAnimSite1885;

let HAnimSite1886 = browser.currentScene.createNode("HAnimSite");
HAnimSite1886.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[242] = HAnimSite1886;

let HAnimSite1887 = browser.currentScene.createNode("HAnimSite");
HAnimSite1887.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[243] = HAnimSite1887;

let HAnimSite1888 = browser.currentScene.createNode("HAnimSite");
HAnimSite1888.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[244] = HAnimSite1888;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[245] = HAnimSite1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid44.viewpoints[246] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid44.viewpoints[247] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_l_index_distal_tip";
HAnimHumanoid44.viewpoints[248] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_r_index_distal_tip";
HAnimHumanoid44.viewpoints[249] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid44.viewpoints[250] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid44.viewpoints[251] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid44.viewpoints[252] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid44.viewpoints[253] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid44.viewpoints[254] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid44.viewpoints[255] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid44.viewpoints[256] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid44.viewpoints[257] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid44.viewpoints[258] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid44.viewpoints[259] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid44.viewpoints[260] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid44.viewpoints[261] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid44.viewpoints[262] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid44.viewpoints[263] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid44.viewpoints[264] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid44.viewpoints[265] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid44.viewpoints[266] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid44.viewpoints[267] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_neck_base_pt";
HAnimHumanoid44.viewpoints[268] = HAnimSite1912;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.USE = "hanim_l_neck_base_pt";
HAnimHumanoid44.viewpoints[269] = HAnimSite1913;

let HAnimSite1914 = browser.currentScene.createNode("HAnimSite");
HAnimSite1914.USE = "hanim_l_olecranon_pt";
HAnimHumanoid44.viewpoints[270] = HAnimSite1914;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.USE = "hanim_r_olecranon_pt";
HAnimHumanoid44.viewpoints[271] = HAnimSite1915;

let HAnimSite1916 = browser.currentScene.createNode("HAnimSite");
HAnimSite1916.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid44.viewpoints[272] = HAnimSite1916;

let HAnimSite1917 = browser.currentScene.createNode("HAnimSite");
HAnimSite1917.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid44.viewpoints[273] = HAnimSite1917;

let HAnimSite1918 = browser.currentScene.createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_psis_pt";
HAnimHumanoid44.viewpoints[274] = HAnimSite1918;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.USE = "hanim_l_psis_pt";
HAnimHumanoid44.viewpoints[275] = HAnimSite1919;

let HAnimSite1920 = browser.currentScene.createNode("HAnimSite");
HAnimSite1920.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid44.viewpoints[276] = HAnimSite1920;

let HAnimSite1921 = browser.currentScene.createNode("HAnimSite");
HAnimSite1921.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid44.viewpoints[277] = HAnimSite1921;

let HAnimSite1922 = browser.currentScene.createNode("HAnimSite");
HAnimSite1922.USE = "hanim_l_radiale_pt";
HAnimHumanoid44.viewpoints[278] = HAnimSite1922;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.USE = "hanim_r_radiale_pt";
HAnimHumanoid44.viewpoints[279] = HAnimSite1923;

let HAnimSite1924 = browser.currentScene.createNode("HAnimSite");
HAnimSite1924.USE = "hanim_r_rib10_pt";
HAnimHumanoid44.viewpoints[280] = HAnimSite1924;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.USE = "hanim_l_rib10_pt";
HAnimHumanoid44.viewpoints[281] = HAnimSite1925;

let HAnimSite1926 = browser.currentScene.createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid44.viewpoints[282] = HAnimSite1926;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid44.viewpoints[283] = HAnimSite1927;

let HAnimSite1928 = browser.currentScene.createNode("HAnimSite");
HAnimSite1928.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid44.viewpoints[284] = HAnimSite1928;

let HAnimSite1929 = browser.currentScene.createNode("HAnimSite");
HAnimSite1929.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid44.viewpoints[285] = HAnimSite1929;

let HAnimSite1930 = browser.currentScene.createNode("HAnimSite");
HAnimSite1930.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid44.viewpoints[286] = HAnimSite1930;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid44.viewpoints[287] = HAnimSite1931;

let HAnimSite1932 = browser.currentScene.createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_thelion_pt";
HAnimHumanoid44.viewpoints[288] = HAnimSite1932;

let HAnimSite1933 = browser.currentScene.createNode("HAnimSite");
HAnimSite1933.USE = "hanim_l_thelion_pt";
HAnimHumanoid44.viewpoints[289] = HAnimSite1933;

let HAnimSite1934 = browser.currentScene.createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid44.viewpoints[290] = HAnimSite1934;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid44.viewpoints[291] = HAnimSite1935;

let HAnimSite1936 = browser.currentScene.createNode("HAnimSite");
HAnimSite1936.USE = "hanim_r_tragion_pt";
HAnimHumanoid44.viewpoints[292] = HAnimSite1936;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_tragion_pt";
HAnimHumanoid44.viewpoints[293] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid44.viewpoints[294] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid44.viewpoints[295] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid44.viewpoints[296] = HAnimSite1940;

let HAnimSite1941 = browser.currentScene.createNode("HAnimSite");
HAnimSite1941.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid44.viewpoints[297] = HAnimSite1941;

browser.currentScene.children[12] = HAnimHumanoid44;

let Group1942 = browser.currentScene.createNode("Group");
Group1942.DEF = "StopAnimation";
let TimeSensor1943 = browser.currentScene.createNode("TimeSensor");
TimeSensor1943.DEF = "StopTimer";
TimeSensor1943.cycleInterval = 5.73;
TimeSensor1943.loop = True;
Group1942.children = new MFNode();

Group1942.children[0] = TimeSensor1943;

let PositionInterpolator1944 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1944.DEF = "Stop_humanoid_root_TranslationInterpolator";
PositionInterpolator1944.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator1944.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group1942.children[1] = PositionInterpolator1944;

let OrientationInterpolator1945 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1945.DEF = "Stop_humanoid_root_RotationInterpolator";
OrientationInterpolator1945.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1945.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[2] = OrientationInterpolator1945;

let OrientationInterpolator1946 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1946.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator1946.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1946.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[3] = OrientationInterpolator1946;

let OrientationInterpolator1947 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1947.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator1947.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1947.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[4] = OrientationInterpolator1947;

let OrientationInterpolator1948 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1948.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator1948.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1948.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[5] = OrientationInterpolator1948;

let OrientationInterpolator1949 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1949.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator1949.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1949.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[6] = OrientationInterpolator1949;

let OrientationInterpolator1950 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1950.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator1950.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1950.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[7] = OrientationInterpolator1950;

let OrientationInterpolator1951 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1951.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator1951.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1951.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[8] = OrientationInterpolator1951;

let OrientationInterpolator1952 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1952.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator1952.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1952.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[9] = OrientationInterpolator1952;

let OrientationInterpolator1953 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1953.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator1953.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1953.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[10] = OrientationInterpolator1953;

let OrientationInterpolator1954 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1954.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator1954.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1954.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[11] = OrientationInterpolator1954;

let OrientationInterpolator1955 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1955.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator1955.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1955.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[12] = OrientationInterpolator1955;

let OrientationInterpolator1956 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1956.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator1956.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1956.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[13] = OrientationInterpolator1956;

let OrientationInterpolator1957 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1957.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator1957.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1957.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[14] = OrientationInterpolator1957;

let OrientationInterpolator1958 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1958.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator1958.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1958.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[15] = OrientationInterpolator1958;

let OrientationInterpolator1959 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1959.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator1959.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1959.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[16] = OrientationInterpolator1959;

let OrientationInterpolator1960 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1960.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator1960.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1960.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[17] = OrientationInterpolator1960;

let OrientationInterpolator1961 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1961.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator1961.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1961.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[18] = OrientationInterpolator1961;

let OrientationInterpolator1962 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1962.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator1962.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1962.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[19] = OrientationInterpolator1962;

let OrientationInterpolator1963 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1963.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator1963.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1963.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[20] = OrientationInterpolator1963;

let OrientationInterpolator1964 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1964.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator1964.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1964.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[21] = OrientationInterpolator1964;

let OrientationInterpolator1965 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1965.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator1965.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1965.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[22] = OrientationInterpolator1965;

let OrientationInterpolator1966 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1966.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator1966.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1966.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[23] = OrientationInterpolator1966;

let OrientationInterpolator1967 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1967.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator1967.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1967.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[24] = OrientationInterpolator1967;

let OrientationInterpolator1968 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1968.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator1968.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1968.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[25] = OrientationInterpolator1968;

let OrientationInterpolator1969 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1969.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator1969.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1969.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[26] = OrientationInterpolator1969;

let OrientationInterpolator1970 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1970.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator1970.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1970.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[27] = OrientationInterpolator1970;

let OrientationInterpolator1971 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1971.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator1971.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1971.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[28] = OrientationInterpolator1971;

let OrientationInterpolator1972 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1972.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator1972.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1972.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[29] = OrientationInterpolator1972;

let OrientationInterpolator1973 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1973.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator1973.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1973.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[30] = OrientationInterpolator1973;

let OrientationInterpolator1974 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1974.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator1974.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1974.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[31] = OrientationInterpolator1974;

let OrientationInterpolator1975 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1975.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator1975.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1975.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[32] = OrientationInterpolator1975;

let OrientationInterpolator1976 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1976.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator1976.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1976.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[33] = OrientationInterpolator1976;

let OrientationInterpolator1977 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1977.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator1977.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1977.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[34] = OrientationInterpolator1977;

let OrientationInterpolator1978 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1978.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator1978.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1978.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[35] = OrientationInterpolator1978;

let OrientationInterpolator1979 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1979.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator1979.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1979.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[36] = OrientationInterpolator1979;

let OrientationInterpolator1980 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1980.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator1980.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1980.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[37] = OrientationInterpolator1980;

let OrientationInterpolator1981 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1981.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator1981.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1981.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[38] = OrientationInterpolator1981;

let OrientationInterpolator1982 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1982.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator1982.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1982.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[39] = OrientationInterpolator1982;

let OrientationInterpolator1983 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1983.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator1983.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1983.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[40] = OrientationInterpolator1983;

let OrientationInterpolator1984 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1984.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator1984.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1984.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[41] = OrientationInterpolator1984;

let OrientationInterpolator1985 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1985.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator1985.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1985.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[42] = OrientationInterpolator1985;

let OrientationInterpolator1986 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1986.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator1986.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1986.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[43] = OrientationInterpolator1986;

let OrientationInterpolator1987 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1987.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator1987.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1987.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[44] = OrientationInterpolator1987;

let OrientationInterpolator1988 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1988.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator1988.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1988.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[45] = OrientationInterpolator1988;

let OrientationInterpolator1989 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1989.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator1989.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1989.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[46] = OrientationInterpolator1989;

let OrientationInterpolator1990 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1990.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator1990.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1990.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[47] = OrientationInterpolator1990;

let OrientationInterpolator1991 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1991.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator1991.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1991.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[48] = OrientationInterpolator1991;

let OrientationInterpolator1992 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1992.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator1992.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1992.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[49] = OrientationInterpolator1992;

let OrientationInterpolator1993 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1993.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator1993.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1993.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[50] = OrientationInterpolator1993;

let OrientationInterpolator1994 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1994.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator1994.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1994.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[51] = OrientationInterpolator1994;

let OrientationInterpolator1995 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1995.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator1995.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1995.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[52] = OrientationInterpolator1995;

let OrientationInterpolator1996 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1996.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator1996.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1996.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[53] = OrientationInterpolator1996;

let OrientationInterpolator1997 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1997.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator1997.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1997.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[54] = OrientationInterpolator1997;

let OrientationInterpolator1998 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1998.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator1998.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1998.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[55] = OrientationInterpolator1998;

let OrientationInterpolator1999 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1999.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator1999.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1999.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[56] = OrientationInterpolator1999;

let OrientationInterpolator2000 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2000.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator2000.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2000.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[57] = OrientationInterpolator2000;

let OrientationInterpolator2001 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2001.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator2001.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2001.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[58] = OrientationInterpolator2001;

let OrientationInterpolator2002 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2002.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator2002.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2002.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[59] = OrientationInterpolator2002;

let OrientationInterpolator2003 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2003.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator2003.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2003.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[60] = OrientationInterpolator2003;

let OrientationInterpolator2004 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2004.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator2004.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2004.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[61] = OrientationInterpolator2004;

let OrientationInterpolator2005 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2005.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator2005.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2005.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[62] = OrientationInterpolator2005;

let OrientationInterpolator2006 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2006.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator2006.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2006.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[63] = OrientationInterpolator2006;

let OrientationInterpolator2007 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2007.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator2007.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2007.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[64] = OrientationInterpolator2007;

let OrientationInterpolator2008 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2008.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator2008.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2008.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[65] = OrientationInterpolator2008;

let OrientationInterpolator2009 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2009.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator2009.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2009.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[66] = OrientationInterpolator2009;

let OrientationInterpolator2010 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2010.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator2010.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2010.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[67] = OrientationInterpolator2010;

let OrientationInterpolator2011 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2011.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator2011.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2011.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[68] = OrientationInterpolator2011;

let OrientationInterpolator2012 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2012.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator2012.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2012.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[69] = OrientationInterpolator2012;

let OrientationInterpolator2013 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2013.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator2013.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2013.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[70] = OrientationInterpolator2013;

let OrientationInterpolator2014 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2014.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator2014.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2014.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[71] = OrientationInterpolator2014;

let OrientationInterpolator2015 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2015.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator2015.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2015.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[72] = OrientationInterpolator2015;

let OrientationInterpolator2016 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2016.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator2016.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2016.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[73] = OrientationInterpolator2016;

let OrientationInterpolator2017 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2017.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator2017.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2017.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[74] = OrientationInterpolator2017;

let OrientationInterpolator2018 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2018.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator2018.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2018.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[75] = OrientationInterpolator2018;

let OrientationInterpolator2019 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2019.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator2019.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2019.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[76] = OrientationInterpolator2019;

let OrientationInterpolator2020 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2020.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator2020.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2020.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[77] = OrientationInterpolator2020;

let OrientationInterpolator2021 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2021.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator2021.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2021.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[78] = OrientationInterpolator2021;

let OrientationInterpolator2022 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2022.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator2022.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2022.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[79] = OrientationInterpolator2022;

let OrientationInterpolator2023 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2023.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator2023.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2023.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[80] = OrientationInterpolator2023;

let OrientationInterpolator2024 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2024.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator2024.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2024.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[81] = OrientationInterpolator2024;

let OrientationInterpolator2025 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2025.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator2025.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2025.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[82] = OrientationInterpolator2025;

let OrientationInterpolator2026 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2026.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator2026.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2026.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[83] = OrientationInterpolator2026;

let OrientationInterpolator2027 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2027.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator2027.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2027.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[84] = OrientationInterpolator2027;

let OrientationInterpolator2028 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2028.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator2028.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2028.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[85] = OrientationInterpolator2028;

let OrientationInterpolator2029 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2029.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator2029.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2029.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[86] = OrientationInterpolator2029;

let OrientationInterpolator2030 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2030.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator2030.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2030.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[87] = OrientationInterpolator2030;

let OrientationInterpolator2031 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2031.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator2031.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2031.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[88] = OrientationInterpolator2031;

let OrientationInterpolator2032 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2032.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator2032.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2032.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[89] = OrientationInterpolator2032;

let OrientationInterpolator2033 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2033.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator2033.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2033.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[90] = OrientationInterpolator2033;

let ROUTE2034 = browser.currentScene.createNode("ROUTE");
ROUTE2034.fromField = "fraction_changed";
ROUTE2034.fromNode = "StopTimer";
ROUTE2034.toField = "set_fraction";
ROUTE2034.toNode = "Stop_humanoid_root_TranslationInterpolator";
Group1942.children[91] = ROUTE2034;

let ROUTE2035 = browser.currentScene.createNode("ROUTE");
ROUTE2035.fromField = "fraction_changed";
ROUTE2035.fromNode = "StopTimer";
ROUTE2035.toField = "set_fraction";
ROUTE2035.toNode = "Stop_humanoid_root_RotationInterpolator";
Group1942.children[92] = ROUTE2035;

let ROUTE2036 = browser.currentScene.createNode("ROUTE");
ROUTE2036.fromField = "fraction_changed";
ROUTE2036.fromNode = "StopTimer";
ROUTE2036.toField = "set_fraction";
ROUTE2036.toNode = "Stop_sacroiliac_RotationInterpolator";
Group1942.children[93] = ROUTE2036;

let ROUTE2037 = browser.currentScene.createNode("ROUTE");
ROUTE2037.fromField = "fraction_changed";
ROUTE2037.fromNode = "StopTimer";
ROUTE2037.toField = "set_fraction";
ROUTE2037.toNode = "Stop_l_hip_RotationInterpolator";
Group1942.children[94] = ROUTE2037;

let ROUTE2038 = browser.currentScene.createNode("ROUTE");
ROUTE2038.fromField = "fraction_changed";
ROUTE2038.fromNode = "StopTimer";
ROUTE2038.toField = "set_fraction";
ROUTE2038.toNode = "Stop_l_knee_RotationInterpolator";
Group1942.children[95] = ROUTE2038;

let ROUTE2039 = browser.currentScene.createNode("ROUTE");
ROUTE2039.fromField = "fraction_changed";
ROUTE2039.fromNode = "StopTimer";
ROUTE2039.toField = "set_fraction";
ROUTE2039.toNode = "Stop_l_ankle_RotationInterpolator";
Group1942.children[96] = ROUTE2039;

let ROUTE2040 = browser.currentScene.createNode("ROUTE");
ROUTE2040.fromField = "fraction_changed";
ROUTE2040.fromNode = "StopTimer";
ROUTE2040.toField = "set_fraction";
ROUTE2040.toNode = "Stop_l_subtalar_RotationInterpolator";
Group1942.children[97] = ROUTE2040;

let ROUTE2041 = browser.currentScene.createNode("ROUTE");
ROUTE2041.fromField = "fraction_changed";
ROUTE2041.fromNode = "StopTimer";
ROUTE2041.toField = "set_fraction";
ROUTE2041.toNode = "Stop_l_midtarsal_RotationInterpolator";
Group1942.children[98] = ROUTE2041;

let ROUTE2042 = browser.currentScene.createNode("ROUTE");
ROUTE2042.fromField = "fraction_changed";
ROUTE2042.fromNode = "StopTimer";
ROUTE2042.toField = "set_fraction";
ROUTE2042.toNode = "Stop_l_metatarsal_RotationInterpolator";
Group1942.children[99] = ROUTE2042;

let ROUTE2043 = browser.currentScene.createNode("ROUTE");
ROUTE2043.fromField = "fraction_changed";
ROUTE2043.fromNode = "StopTimer";
ROUTE2043.toField = "set_fraction";
ROUTE2043.toNode = "Stop_r_hip_RotationInterpolator";
Group1942.children[100] = ROUTE2043;

let ROUTE2044 = browser.currentScene.createNode("ROUTE");
ROUTE2044.fromField = "fraction_changed";
ROUTE2044.fromNode = "StopTimer";
ROUTE2044.toField = "set_fraction";
ROUTE2044.toNode = "Stop_r_knee_RotationInterpolator";
Group1942.children[101] = ROUTE2044;

let ROUTE2045 = browser.currentScene.createNode("ROUTE");
ROUTE2045.fromField = "fraction_changed";
ROUTE2045.fromNode = "StopTimer";
ROUTE2045.toField = "set_fraction";
ROUTE2045.toNode = "Stop_r_ankle_RotationInterpolator";
Group1942.children[102] = ROUTE2045;

let ROUTE2046 = browser.currentScene.createNode("ROUTE");
ROUTE2046.fromField = "fraction_changed";
ROUTE2046.fromNode = "StopTimer";
ROUTE2046.toField = "set_fraction";
ROUTE2046.toNode = "Stop_r_subtalar_RotationInterpolator";
Group1942.children[103] = ROUTE2046;

let ROUTE2047 = browser.currentScene.createNode("ROUTE");
ROUTE2047.fromField = "fraction_changed";
ROUTE2047.fromNode = "StopTimer";
ROUTE2047.toField = "set_fraction";
ROUTE2047.toNode = "Stop_r_midtarsal_RotationInterpolator";
Group1942.children[104] = ROUTE2047;

let ROUTE2048 = browser.currentScene.createNode("ROUTE");
ROUTE2048.fromField = "fraction_changed";
ROUTE2048.fromNode = "StopTimer";
ROUTE2048.toField = "set_fraction";
ROUTE2048.toNode = "Stop_r_metatarsal_RotationInterpolator";
Group1942.children[105] = ROUTE2048;

let ROUTE2049 = browser.currentScene.createNode("ROUTE");
ROUTE2049.fromField = "fraction_changed";
ROUTE2049.fromNode = "StopTimer";
ROUTE2049.toField = "set_fraction";
ROUTE2049.toNode = "Stop_vl5_RotationInterpolator";
Group1942.children[106] = ROUTE2049;

let ROUTE2050 = browser.currentScene.createNode("ROUTE");
ROUTE2050.fromField = "fraction_changed";
ROUTE2050.fromNode = "StopTimer";
ROUTE2050.toField = "set_fraction";
ROUTE2050.toNode = "Stop_vl4_RotationInterpolator";
Group1942.children[107] = ROUTE2050;

let ROUTE2051 = browser.currentScene.createNode("ROUTE");
ROUTE2051.fromField = "fraction_changed";
ROUTE2051.fromNode = "StopTimer";
ROUTE2051.toField = "set_fraction";
ROUTE2051.toNode = "Stop_vl3_RotationInterpolator";
Group1942.children[108] = ROUTE2051;

let ROUTE2052 = browser.currentScene.createNode("ROUTE");
ROUTE2052.fromField = "fraction_changed";
ROUTE2052.fromNode = "StopTimer";
ROUTE2052.toField = "set_fraction";
ROUTE2052.toNode = "Stop_vl2_RotationInterpolator";
Group1942.children[109] = ROUTE2052;

let ROUTE2053 = browser.currentScene.createNode("ROUTE");
ROUTE2053.fromField = "fraction_changed";
ROUTE2053.fromNode = "StopTimer";
ROUTE2053.toField = "set_fraction";
ROUTE2053.toNode = "Stop_vl1_RotationInterpolator";
Group1942.children[110] = ROUTE2053;

let ROUTE2054 = browser.currentScene.createNode("ROUTE");
ROUTE2054.fromField = "fraction_changed";
ROUTE2054.fromNode = "StopTimer";
ROUTE2054.toField = "set_fraction";
ROUTE2054.toNode = "Stop_vt12_RotationInterpolator";
Group1942.children[111] = ROUTE2054;

let ROUTE2055 = browser.currentScene.createNode("ROUTE");
ROUTE2055.fromField = "fraction_changed";
ROUTE2055.fromNode = "StopTimer";
ROUTE2055.toField = "set_fraction";
ROUTE2055.toNode = "Stop_vt11_RotationInterpolator";
Group1942.children[112] = ROUTE2055;

let ROUTE2056 = browser.currentScene.createNode("ROUTE");
ROUTE2056.fromField = "fraction_changed";
ROUTE2056.fromNode = "StopTimer";
ROUTE2056.toField = "set_fraction";
ROUTE2056.toNode = "Stop_vt10_RotationInterpolator";
Group1942.children[113] = ROUTE2056;

let ROUTE2057 = browser.currentScene.createNode("ROUTE");
ROUTE2057.fromField = "fraction_changed";
ROUTE2057.fromNode = "StopTimer";
ROUTE2057.toField = "set_fraction";
ROUTE2057.toNode = "Stop_vt9_RotationInterpolator";
Group1942.children[114] = ROUTE2057;

let ROUTE2058 = browser.currentScene.createNode("ROUTE");
ROUTE2058.fromField = "fraction_changed";
ROUTE2058.fromNode = "StopTimer";
ROUTE2058.toField = "set_fraction";
ROUTE2058.toNode = "Stop_vt8_RotationInterpolator";
Group1942.children[115] = ROUTE2058;

let ROUTE2059 = browser.currentScene.createNode("ROUTE");
ROUTE2059.fromField = "fraction_changed";
ROUTE2059.fromNode = "StopTimer";
ROUTE2059.toField = "set_fraction";
ROUTE2059.toNode = "Stop_vt7_RotationInterpolator";
Group1942.children[116] = ROUTE2059;

let ROUTE2060 = browser.currentScene.createNode("ROUTE");
ROUTE2060.fromField = "fraction_changed";
ROUTE2060.fromNode = "StopTimer";
ROUTE2060.toField = "set_fraction";
ROUTE2060.toNode = "Stop_vt6_RotationInterpolator";
Group1942.children[117] = ROUTE2060;

let ROUTE2061 = browser.currentScene.createNode("ROUTE");
ROUTE2061.fromField = "fraction_changed";
ROUTE2061.fromNode = "StopTimer";
ROUTE2061.toField = "set_fraction";
ROUTE2061.toNode = "Stop_vt5_RotationInterpolator";
Group1942.children[118] = ROUTE2061;

let ROUTE2062 = browser.currentScene.createNode("ROUTE");
ROUTE2062.fromField = "fraction_changed";
ROUTE2062.fromNode = "StopTimer";
ROUTE2062.toField = "set_fraction";
ROUTE2062.toNode = "Stop_vt4_RotationInterpolator";
Group1942.children[119] = ROUTE2062;

let ROUTE2063 = browser.currentScene.createNode("ROUTE");
ROUTE2063.fromField = "fraction_changed";
ROUTE2063.fromNode = "StopTimer";
ROUTE2063.toField = "set_fraction";
ROUTE2063.toNode = "Stop_vt3_RotationInterpolator";
Group1942.children[120] = ROUTE2063;

let ROUTE2064 = browser.currentScene.createNode("ROUTE");
ROUTE2064.fromField = "fraction_changed";
ROUTE2064.fromNode = "StopTimer";
ROUTE2064.toField = "set_fraction";
ROUTE2064.toNode = "Stop_vt2_RotationInterpolator";
Group1942.children[121] = ROUTE2064;

let ROUTE2065 = browser.currentScene.createNode("ROUTE");
ROUTE2065.fromField = "fraction_changed";
ROUTE2065.fromNode = "StopTimer";
ROUTE2065.toField = "set_fraction";
ROUTE2065.toNode = "Stop_vt1_RotationInterpolator";
Group1942.children[122] = ROUTE2065;

let ROUTE2066 = browser.currentScene.createNode("ROUTE");
ROUTE2066.fromField = "fraction_changed";
ROUTE2066.fromNode = "StopTimer";
ROUTE2066.toField = "set_fraction";
ROUTE2066.toNode = "Stop_vc7_RotationInterpolator";
Group1942.children[123] = ROUTE2066;

let ROUTE2067 = browser.currentScene.createNode("ROUTE");
ROUTE2067.fromField = "fraction_changed";
ROUTE2067.fromNode = "StopTimer";
ROUTE2067.toField = "set_fraction";
ROUTE2067.toNode = "Stop_vc6_RotationInterpolator";
Group1942.children[124] = ROUTE2067;

let ROUTE2068 = browser.currentScene.createNode("ROUTE");
ROUTE2068.fromField = "fraction_changed";
ROUTE2068.fromNode = "StopTimer";
ROUTE2068.toField = "set_fraction";
ROUTE2068.toNode = "Stop_vc5_RotationInterpolator";
Group1942.children[125] = ROUTE2068;

let ROUTE2069 = browser.currentScene.createNode("ROUTE");
ROUTE2069.fromField = "fraction_changed";
ROUTE2069.fromNode = "StopTimer";
ROUTE2069.toField = "set_fraction";
ROUTE2069.toNode = "Stop_vc4_RotationInterpolator";
Group1942.children[126] = ROUTE2069;

let ROUTE2070 = browser.currentScene.createNode("ROUTE");
ROUTE2070.fromField = "fraction_changed";
ROUTE2070.fromNode = "StopTimer";
ROUTE2070.toField = "set_fraction";
ROUTE2070.toNode = "Stop_vc3_RotationInterpolator";
Group1942.children[127] = ROUTE2070;

let ROUTE2071 = browser.currentScene.createNode("ROUTE");
ROUTE2071.fromField = "fraction_changed";
ROUTE2071.fromNode = "StopTimer";
ROUTE2071.toField = "set_fraction";
ROUTE2071.toNode = "Stop_vc2_RotationInterpolator";
Group1942.children[128] = ROUTE2071;

let ROUTE2072 = browser.currentScene.createNode("ROUTE");
ROUTE2072.fromField = "fraction_changed";
ROUTE2072.fromNode = "StopTimer";
ROUTE2072.toField = "set_fraction";
ROUTE2072.toNode = "Stop_vc1_RotationInterpolator";
Group1942.children[129] = ROUTE2072;

let ROUTE2073 = browser.currentScene.createNode("ROUTE");
ROUTE2073.fromField = "fraction_changed";
ROUTE2073.fromNode = "StopTimer";
ROUTE2073.toField = "set_fraction";
ROUTE2073.toNode = "Stop_skullbase_RotationInterpolator";
Group1942.children[130] = ROUTE2073;

let ROUTE2074 = browser.currentScene.createNode("ROUTE");
ROUTE2074.fromField = "fraction_changed";
ROUTE2074.fromNode = "StopTimer";
ROUTE2074.toField = "set_fraction";
ROUTE2074.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
Group1942.children[131] = ROUTE2074;

let ROUTE2075 = browser.currentScene.createNode("ROUTE");
ROUTE2075.fromField = "fraction_changed";
ROUTE2075.fromNode = "StopTimer";
ROUTE2075.toField = "set_fraction";
ROUTE2075.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
Group1942.children[132] = ROUTE2075;

let ROUTE2076 = browser.currentScene.createNode("ROUTE");
ROUTE2076.fromField = "fraction_changed";
ROUTE2076.fromNode = "StopTimer";
ROUTE2076.toField = "set_fraction";
ROUTE2076.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
Group1942.children[133] = ROUTE2076;

let ROUTE2077 = browser.currentScene.createNode("ROUTE");
ROUTE2077.fromField = "fraction_changed";
ROUTE2077.fromNode = "StopTimer";
ROUTE2077.toField = "set_fraction";
ROUTE2077.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
Group1942.children[134] = ROUTE2077;

let ROUTE2078 = browser.currentScene.createNode("ROUTE");
ROUTE2078.fromField = "fraction_changed";
ROUTE2078.fromNode = "StopTimer";
ROUTE2078.toField = "set_fraction";
ROUTE2078.toNode = "Stop_l_shoulder_RotationInterpolator";
Group1942.children[135] = ROUTE2078;

let ROUTE2079 = browser.currentScene.createNode("ROUTE");
ROUTE2079.fromField = "fraction_changed";
ROUTE2079.fromNode = "StopTimer";
ROUTE2079.toField = "set_fraction";
ROUTE2079.toNode = "Stop_l_elbow_RotationInterpolator";
Group1942.children[136] = ROUTE2079;

let ROUTE2080 = browser.currentScene.createNode("ROUTE");
ROUTE2080.fromField = "fraction_changed";
ROUTE2080.fromNode = "StopTimer";
ROUTE2080.toField = "set_fraction";
ROUTE2080.toNode = "Stop_l_wrist_RotationInterpolator";
Group1942.children[137] = ROUTE2080;

let ROUTE2081 = browser.currentScene.createNode("ROUTE");
ROUTE2081.fromField = "fraction_changed";
ROUTE2081.fromNode = "StopTimer";
ROUTE2081.toField = "set_fraction";
ROUTE2081.toNode = "Stop_l_thumb1_RotationInterpolator";
Group1942.children[138] = ROUTE2081;

let ROUTE2082 = browser.currentScene.createNode("ROUTE");
ROUTE2082.fromField = "fraction_changed";
ROUTE2082.fromNode = "StopTimer";
ROUTE2082.toField = "set_fraction";
ROUTE2082.toNode = "Stop_l_thumb2_RotationInterpolator";
Group1942.children[139] = ROUTE2082;

let ROUTE2083 = browser.currentScene.createNode("ROUTE");
ROUTE2083.fromField = "fraction_changed";
ROUTE2083.fromNode = "StopTimer";
ROUTE2083.toField = "set_fraction";
ROUTE2083.toNode = "Stop_l_thumb3_RotationInterpolator";
Group1942.children[140] = ROUTE2083;

let ROUTE2084 = browser.currentScene.createNode("ROUTE");
ROUTE2084.fromField = "fraction_changed";
ROUTE2084.fromNode = "StopTimer";
ROUTE2084.toField = "set_fraction";
ROUTE2084.toNode = "Stop_l_index0_RotationInterpolator";
Group1942.children[141] = ROUTE2084;

let ROUTE2085 = browser.currentScene.createNode("ROUTE");
ROUTE2085.fromField = "fraction_changed";
ROUTE2085.fromNode = "StopTimer";
ROUTE2085.toField = "set_fraction";
ROUTE2085.toNode = "Stop_l_index1_RotationInterpolator";
Group1942.children[142] = ROUTE2085;

let ROUTE2086 = browser.currentScene.createNode("ROUTE");
ROUTE2086.fromField = "fraction_changed";
ROUTE2086.fromNode = "StopTimer";
ROUTE2086.toField = "set_fraction";
ROUTE2086.toNode = "Stop_l_index2_RotationInterpolator";
Group1942.children[143] = ROUTE2086;

let ROUTE2087 = browser.currentScene.createNode("ROUTE");
ROUTE2087.fromField = "fraction_changed";
ROUTE2087.fromNode = "StopTimer";
ROUTE2087.toField = "set_fraction";
ROUTE2087.toNode = "Stop_l_index3_RotationInterpolator";
Group1942.children[144] = ROUTE2087;

let ROUTE2088 = browser.currentScene.createNode("ROUTE");
ROUTE2088.fromField = "fraction_changed";
ROUTE2088.fromNode = "StopTimer";
ROUTE2088.toField = "set_fraction";
ROUTE2088.toNode = "Stop_l_middle0_RotationInterpolator";
Group1942.children[145] = ROUTE2088;

let ROUTE2089 = browser.currentScene.createNode("ROUTE");
ROUTE2089.fromField = "fraction_changed";
ROUTE2089.fromNode = "StopTimer";
ROUTE2089.toField = "set_fraction";
ROUTE2089.toNode = "Stop_l_middle1_RotationInterpolator";
Group1942.children[146] = ROUTE2089;

let ROUTE2090 = browser.currentScene.createNode("ROUTE");
ROUTE2090.fromField = "fraction_changed";
ROUTE2090.fromNode = "StopTimer";
ROUTE2090.toField = "set_fraction";
ROUTE2090.toNode = "Stop_l_middle2_RotationInterpolator";
Group1942.children[147] = ROUTE2090;

let ROUTE2091 = browser.currentScene.createNode("ROUTE");
ROUTE2091.fromField = "fraction_changed";
ROUTE2091.fromNode = "StopTimer";
ROUTE2091.toField = "set_fraction";
ROUTE2091.toNode = "Stop_l_middle3_RotationInterpolator";
Group1942.children[148] = ROUTE2091;

let ROUTE2092 = browser.currentScene.createNode("ROUTE");
ROUTE2092.fromField = "fraction_changed";
ROUTE2092.fromNode = "StopTimer";
ROUTE2092.toField = "set_fraction";
ROUTE2092.toNode = "Stop_l_ring0_RotationInterpolator";
Group1942.children[149] = ROUTE2092;

let ROUTE2093 = browser.currentScene.createNode("ROUTE");
ROUTE2093.fromField = "fraction_changed";
ROUTE2093.fromNode = "StopTimer";
ROUTE2093.toField = "set_fraction";
ROUTE2093.toNode = "Stop_l_ring1_RotationInterpolator";
Group1942.children[150] = ROUTE2093;

let ROUTE2094 = browser.currentScene.createNode("ROUTE");
ROUTE2094.fromField = "fraction_changed";
ROUTE2094.fromNode = "StopTimer";
ROUTE2094.toField = "set_fraction";
ROUTE2094.toNode = "Stop_l_ring2_RotationInterpolator";
Group1942.children[151] = ROUTE2094;

let ROUTE2095 = browser.currentScene.createNode("ROUTE");
ROUTE2095.fromField = "fraction_changed";
ROUTE2095.fromNode = "StopTimer";
ROUTE2095.toField = "set_fraction";
ROUTE2095.toNode = "Stop_l_ring3_RotationInterpolator";
Group1942.children[152] = ROUTE2095;

let ROUTE2096 = browser.currentScene.createNode("ROUTE");
ROUTE2096.fromField = "fraction_changed";
ROUTE2096.fromNode = "StopTimer";
ROUTE2096.toField = "set_fraction";
ROUTE2096.toNode = "Stop_l_pinky0_RotationInterpolator";
Group1942.children[153] = ROUTE2096;

let ROUTE2097 = browser.currentScene.createNode("ROUTE");
ROUTE2097.fromField = "fraction_changed";
ROUTE2097.fromNode = "StopTimer";
ROUTE2097.toField = "set_fraction";
ROUTE2097.toNode = "Stop_l_pinky1_RotationInterpolator";
Group1942.children[154] = ROUTE2097;

let ROUTE2098 = browser.currentScene.createNode("ROUTE");
ROUTE2098.fromField = "fraction_changed";
ROUTE2098.fromNode = "StopTimer";
ROUTE2098.toField = "set_fraction";
ROUTE2098.toNode = "Stop_l_pinky2_RotationInterpolator";
Group1942.children[155] = ROUTE2098;

let ROUTE2099 = browser.currentScene.createNode("ROUTE");
ROUTE2099.fromField = "fraction_changed";
ROUTE2099.fromNode = "StopTimer";
ROUTE2099.toField = "set_fraction";
ROUTE2099.toNode = "Stop_l_pinky3_RotationInterpolator";
Group1942.children[156] = ROUTE2099;

let ROUTE2100 = browser.currentScene.createNode("ROUTE");
ROUTE2100.fromField = "fraction_changed";
ROUTE2100.fromNode = "StopTimer";
ROUTE2100.toField = "set_fraction";
ROUTE2100.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
Group1942.children[157] = ROUTE2100;

let ROUTE2101 = browser.currentScene.createNode("ROUTE");
ROUTE2101.fromField = "fraction_changed";
ROUTE2101.fromNode = "StopTimer";
ROUTE2101.toField = "set_fraction";
ROUTE2101.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
Group1942.children[158] = ROUTE2101;

let ROUTE2102 = browser.currentScene.createNode("ROUTE");
ROUTE2102.fromField = "fraction_changed";
ROUTE2102.fromNode = "StopTimer";
ROUTE2102.toField = "set_fraction";
ROUTE2102.toNode = "Stop_r_shoulder_RotationInterpolator";
Group1942.children[159] = ROUTE2102;

let ROUTE2103 = browser.currentScene.createNode("ROUTE");
ROUTE2103.fromField = "fraction_changed";
ROUTE2103.fromNode = "StopTimer";
ROUTE2103.toField = "set_fraction";
ROUTE2103.toNode = "Stop_r_elbow_RotationInterpolator";
Group1942.children[160] = ROUTE2103;

let ROUTE2104 = browser.currentScene.createNode("ROUTE");
ROUTE2104.fromField = "fraction_changed";
ROUTE2104.fromNode = "StopTimer";
ROUTE2104.toField = "set_fraction";
ROUTE2104.toNode = "Stop_r_wrist_RotationInterpolator";
Group1942.children[161] = ROUTE2104;

let ROUTE2105 = browser.currentScene.createNode("ROUTE");
ROUTE2105.fromField = "fraction_changed";
ROUTE2105.fromNode = "StopTimer";
ROUTE2105.toField = "set_fraction";
ROUTE2105.toNode = "Stop_r_thumb1_RotationInterpolator";
Group1942.children[162] = ROUTE2105;

let ROUTE2106 = browser.currentScene.createNode("ROUTE");
ROUTE2106.fromField = "fraction_changed";
ROUTE2106.fromNode = "StopTimer";
ROUTE2106.toField = "set_fraction";
ROUTE2106.toNode = "Stop_r_thumb2_RotationInterpolator";
Group1942.children[163] = ROUTE2106;

let ROUTE2107 = browser.currentScene.createNode("ROUTE");
ROUTE2107.fromField = "fraction_changed";
ROUTE2107.fromNode = "StopTimer";
ROUTE2107.toField = "set_fraction";
ROUTE2107.toNode = "Stop_r_thumb3_RotationInterpolator";
Group1942.children[164] = ROUTE2107;

let ROUTE2108 = browser.currentScene.createNode("ROUTE");
ROUTE2108.fromField = "fraction_changed";
ROUTE2108.fromNode = "StopTimer";
ROUTE2108.toField = "set_fraction";
ROUTE2108.toNode = "Stop_r_index0_RotationInterpolator";
Group1942.children[165] = ROUTE2108;

let ROUTE2109 = browser.currentScene.createNode("ROUTE");
ROUTE2109.fromField = "fraction_changed";
ROUTE2109.fromNode = "StopTimer";
ROUTE2109.toField = "set_fraction";
ROUTE2109.toNode = "Stop_r_index1_RotationInterpolator";
Group1942.children[166] = ROUTE2109;

let ROUTE2110 = browser.currentScene.createNode("ROUTE");
ROUTE2110.fromField = "fraction_changed";
ROUTE2110.fromNode = "StopTimer";
ROUTE2110.toField = "set_fraction";
ROUTE2110.toNode = "Stop_r_index2_RotationInterpolator";
Group1942.children[167] = ROUTE2110;

let ROUTE2111 = browser.currentScene.createNode("ROUTE");
ROUTE2111.fromField = "fraction_changed";
ROUTE2111.fromNode = "StopTimer";
ROUTE2111.toField = "set_fraction";
ROUTE2111.toNode = "Stop_r_index3_RotationInterpolator";
Group1942.children[168] = ROUTE2111;

let ROUTE2112 = browser.currentScene.createNode("ROUTE");
ROUTE2112.fromField = "fraction_changed";
ROUTE2112.fromNode = "StopTimer";
ROUTE2112.toField = "set_fraction";
ROUTE2112.toNode = "Stop_r_middle0_RotationInterpolator";
Group1942.children[169] = ROUTE2112;

let ROUTE2113 = browser.currentScene.createNode("ROUTE");
ROUTE2113.fromField = "fraction_changed";
ROUTE2113.fromNode = "StopTimer";
ROUTE2113.toField = "set_fraction";
ROUTE2113.toNode = "Stop_r_middle1_RotationInterpolator";
Group1942.children[170] = ROUTE2113;

let ROUTE2114 = browser.currentScene.createNode("ROUTE");
ROUTE2114.fromField = "fraction_changed";
ROUTE2114.fromNode = "StopTimer";
ROUTE2114.toField = "set_fraction";
ROUTE2114.toNode = "Stop_r_middle2_RotationInterpolator";
Group1942.children[171] = ROUTE2114;

let ROUTE2115 = browser.currentScene.createNode("ROUTE");
ROUTE2115.fromField = "fraction_changed";
ROUTE2115.fromNode = "StopTimer";
ROUTE2115.toField = "set_fraction";
ROUTE2115.toNode = "Stop_r_middle3_RotationInterpolator";
Group1942.children[172] = ROUTE2115;

let ROUTE2116 = browser.currentScene.createNode("ROUTE");
ROUTE2116.fromField = "fraction_changed";
ROUTE2116.fromNode = "StopTimer";
ROUTE2116.toField = "set_fraction";
ROUTE2116.toNode = "Stop_r_ring0_RotationInterpolator";
Group1942.children[173] = ROUTE2116;

let ROUTE2117 = browser.currentScene.createNode("ROUTE");
ROUTE2117.fromField = "fraction_changed";
ROUTE2117.fromNode = "StopTimer";
ROUTE2117.toField = "set_fraction";
ROUTE2117.toNode = "Stop_r_ring1_RotationInterpolator";
Group1942.children[174] = ROUTE2117;

let ROUTE2118 = browser.currentScene.createNode("ROUTE");
ROUTE2118.fromField = "fraction_changed";
ROUTE2118.fromNode = "StopTimer";
ROUTE2118.toField = "set_fraction";
ROUTE2118.toNode = "Stop_r_ring2_RotationInterpolator";
Group1942.children[175] = ROUTE2118;

let ROUTE2119 = browser.currentScene.createNode("ROUTE");
ROUTE2119.fromField = "fraction_changed";
ROUTE2119.fromNode = "StopTimer";
ROUTE2119.toField = "set_fraction";
ROUTE2119.toNode = "Stop_r_ring3_RotationInterpolator";
Group1942.children[176] = ROUTE2119;

let ROUTE2120 = browser.currentScene.createNode("ROUTE");
ROUTE2120.fromField = "fraction_changed";
ROUTE2120.fromNode = "StopTimer";
ROUTE2120.toField = "set_fraction";
ROUTE2120.toNode = "Stop_r_pinky0_RotationInterpolator";
Group1942.children[177] = ROUTE2120;

let ROUTE2121 = browser.currentScene.createNode("ROUTE");
ROUTE2121.fromField = "fraction_changed";
ROUTE2121.fromNode = "StopTimer";
ROUTE2121.toField = "set_fraction";
ROUTE2121.toNode = "Stop_r_pinky1_RotationInterpolator";
Group1942.children[178] = ROUTE2121;

let ROUTE2122 = browser.currentScene.createNode("ROUTE");
ROUTE2122.fromField = "fraction_changed";
ROUTE2122.fromNode = "StopTimer";
ROUTE2122.toField = "set_fraction";
ROUTE2122.toNode = "Stop_r_pinky2_RotationInterpolator";
Group1942.children[179] = ROUTE2122;

let ROUTE2123 = browser.currentScene.createNode("ROUTE");
ROUTE2123.fromField = "fraction_changed";
ROUTE2123.fromNode = "StopTimer";
ROUTE2123.toField = "set_fraction";
ROUTE2123.toNode = "Stop_r_pinky3_RotationInterpolator";
Group1942.children[180] = ROUTE2123;

let ROUTE2124 = browser.currentScene.createNode("ROUTE");
ROUTE2124.fromField = "value_changed";
ROUTE2124.fromNode = "Stop_humanoid_root_TranslationInterpolator";
ROUTE2124.toField = "translation";
ROUTE2124.toNode = "hanim_humanoid_root";
Group1942.children[181] = ROUTE2124;

let ROUTE2125 = browser.currentScene.createNode("ROUTE");
ROUTE2125.fromField = "value_changed";
ROUTE2125.fromNode = "Stop_humanoid_root_RotationInterpolator";
ROUTE2125.toField = "rotation";
ROUTE2125.toNode = "hanim_humanoid_root";
Group1942.children[182] = ROUTE2125;

let ROUTE2126 = browser.currentScene.createNode("ROUTE");
ROUTE2126.fromField = "value_changed";
ROUTE2126.fromNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE2126.toField = "rotation";
ROUTE2126.toNode = "hanim_sacroiliac";
Group1942.children[183] = ROUTE2126;

let ROUTE2127 = browser.currentScene.createNode("ROUTE");
ROUTE2127.fromField = "value_changed";
ROUTE2127.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE2127.toField = "rotation";
ROUTE2127.toNode = "hanim_l_hip";
Group1942.children[184] = ROUTE2127;

let ROUTE2128 = browser.currentScene.createNode("ROUTE");
ROUTE2128.fromField = "value_changed";
ROUTE2128.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE2128.toField = "rotation";
ROUTE2128.toNode = "hanim_l_knee";
Group1942.children[185] = ROUTE2128;

let ROUTE2129 = browser.currentScene.createNode("ROUTE");
ROUTE2129.fromField = "value_changed";
ROUTE2129.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE2129.toField = "rotation";
ROUTE2129.toNode = "hanim_l_ankle";
Group1942.children[186] = ROUTE2129;

let ROUTE2130 = browser.currentScene.createNode("ROUTE");
ROUTE2130.fromField = "value_changed";
ROUTE2130.fromNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE2130.toField = "rotation";
ROUTE2130.toNode = "hanim_l_subtalar";
Group1942.children[187] = ROUTE2130;

let ROUTE2131 = browser.currentScene.createNode("ROUTE");
ROUTE2131.fromField = "value_changed";
ROUTE2131.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE2131.toField = "rotation";
ROUTE2131.toNode = "hanim_l_midtarsal";
Group1942.children[188] = ROUTE2131;

let ROUTE2132 = browser.currentScene.createNode("ROUTE");
ROUTE2132.fromField = "value_changed";
ROUTE2132.fromNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE2132.toField = "rotation";
ROUTE2132.toNode = "hanim_l_metatarsal";
Group1942.children[189] = ROUTE2132;

let ROUTE2133 = browser.currentScene.createNode("ROUTE");
ROUTE2133.fromField = "value_changed";
ROUTE2133.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE2133.toField = "rotation";
ROUTE2133.toNode = "hanim_r_hip";
Group1942.children[190] = ROUTE2133;

let ROUTE2134 = browser.currentScene.createNode("ROUTE");
ROUTE2134.fromField = "value_changed";
ROUTE2134.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE2134.toField = "rotation";
ROUTE2134.toNode = "hanim_r_knee";
Group1942.children[191] = ROUTE2134;

let ROUTE2135 = browser.currentScene.createNode("ROUTE");
ROUTE2135.fromField = "value_changed";
ROUTE2135.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE2135.toField = "rotation";
ROUTE2135.toNode = "hanim_r_ankle";
Group1942.children[192] = ROUTE2135;

let ROUTE2136 = browser.currentScene.createNode("ROUTE");
ROUTE2136.fromField = "value_changed";
ROUTE2136.fromNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE2136.toField = "rotation";
ROUTE2136.toNode = "hanim_r_subtalar";
Group1942.children[193] = ROUTE2136;

let ROUTE2137 = browser.currentScene.createNode("ROUTE");
ROUTE2137.fromField = "value_changed";
ROUTE2137.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE2137.toField = "rotation";
ROUTE2137.toNode = "hanim_r_midtarsal";
Group1942.children[194] = ROUTE2137;

let ROUTE2138 = browser.currentScene.createNode("ROUTE");
ROUTE2138.fromField = "value_changed";
ROUTE2138.fromNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE2138.toField = "rotation";
ROUTE2138.toNode = "hanim_r_metatarsal";
Group1942.children[195] = ROUTE2138;

let ROUTE2139 = browser.currentScene.createNode("ROUTE");
ROUTE2139.fromField = "value_changed";
ROUTE2139.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE2139.toField = "rotation";
ROUTE2139.toNode = "hanim_vl5";
Group1942.children[196] = ROUTE2139;

let ROUTE2140 = browser.currentScene.createNode("ROUTE");
ROUTE2140.fromField = "value_changed";
ROUTE2140.fromNode = "Stop_vl4_RotationInterpolator";
ROUTE2140.toField = "rotation";
ROUTE2140.toNode = "hanim_vl4";
Group1942.children[197] = ROUTE2140;

let ROUTE2141 = browser.currentScene.createNode("ROUTE");
ROUTE2141.fromField = "value_changed";
ROUTE2141.fromNode = "Stop_vl3_RotationInterpolator";
ROUTE2141.toField = "rotation";
ROUTE2141.toNode = "hanim_vl3";
Group1942.children[198] = ROUTE2141;

let ROUTE2142 = browser.currentScene.createNode("ROUTE");
ROUTE2142.fromField = "value_changed";
ROUTE2142.fromNode = "Stop_vl2_RotationInterpolator";
ROUTE2142.toField = "rotation";
ROUTE2142.toNode = "hanim_vl2";
Group1942.children[199] = ROUTE2142;

let ROUTE2143 = browser.currentScene.createNode("ROUTE");
ROUTE2143.fromField = "value_changed";
ROUTE2143.fromNode = "Stop_vl1_RotationInterpolator";
ROUTE2143.toField = "rotation";
ROUTE2143.toNode = "hanim_vl1";
Group1942.children[200] = ROUTE2143;

let ROUTE2144 = browser.currentScene.createNode("ROUTE");
ROUTE2144.fromField = "value_changed";
ROUTE2144.fromNode = "Stop_vt12_RotationInterpolator";
ROUTE2144.toField = "rotation";
ROUTE2144.toNode = "hanim_vt12";
Group1942.children[201] = ROUTE2144;

let ROUTE2145 = browser.currentScene.createNode("ROUTE");
ROUTE2145.fromField = "value_changed";
ROUTE2145.fromNode = "Stop_vt11_RotationInterpolator";
ROUTE2145.toField = "rotation";
ROUTE2145.toNode = "hanim_vt11";
Group1942.children[202] = ROUTE2145;

let ROUTE2146 = browser.currentScene.createNode("ROUTE");
ROUTE2146.fromField = "value_changed";
ROUTE2146.fromNode = "Stop_vt10_RotationInterpolator";
ROUTE2146.toField = "rotation";
ROUTE2146.toNode = "hanim_vt10";
Group1942.children[203] = ROUTE2146;

let ROUTE2147 = browser.currentScene.createNode("ROUTE");
ROUTE2147.fromField = "value_changed";
ROUTE2147.fromNode = "Stop_vt9_RotationInterpolator";
ROUTE2147.toField = "rotation";
ROUTE2147.toNode = "hanim_vt9";
Group1942.children[204] = ROUTE2147;

let ROUTE2148 = browser.currentScene.createNode("ROUTE");
ROUTE2148.fromField = "value_changed";
ROUTE2148.fromNode = "Stop_vt8_RotationInterpolator";
ROUTE2148.toField = "rotation";
ROUTE2148.toNode = "hanim_vt8";
Group1942.children[205] = ROUTE2148;

let ROUTE2149 = browser.currentScene.createNode("ROUTE");
ROUTE2149.fromField = "value_changed";
ROUTE2149.fromNode = "Stop_vt7_RotationInterpolator";
ROUTE2149.toField = "rotation";
ROUTE2149.toNode = "hanim_vt7";
Group1942.children[206] = ROUTE2149;

let ROUTE2150 = browser.currentScene.createNode("ROUTE");
ROUTE2150.fromField = "value_changed";
ROUTE2150.fromNode = "Stop_vt6_RotationInterpolator";
ROUTE2150.toField = "rotation";
ROUTE2150.toNode = "hanim_vt6";
Group1942.children[207] = ROUTE2150;

let ROUTE2151 = browser.currentScene.createNode("ROUTE");
ROUTE2151.fromField = "value_changed";
ROUTE2151.fromNode = "Stop_vt5_RotationInterpolator";
ROUTE2151.toField = "rotation";
ROUTE2151.toNode = "hanim_vt5";
Group1942.children[208] = ROUTE2151;

let ROUTE2152 = browser.currentScene.createNode("ROUTE");
ROUTE2152.fromField = "value_changed";
ROUTE2152.fromNode = "Stop_vt4_RotationInterpolator";
ROUTE2152.toField = "rotation";
ROUTE2152.toNode = "hanim_vt4";
Group1942.children[209] = ROUTE2152;

let ROUTE2153 = browser.currentScene.createNode("ROUTE");
ROUTE2153.fromField = "value_changed";
ROUTE2153.fromNode = "Stop_vt3_RotationInterpolator";
ROUTE2153.toField = "rotation";
ROUTE2153.toNode = "hanim_vt3";
Group1942.children[210] = ROUTE2153;

let ROUTE2154 = browser.currentScene.createNode("ROUTE");
ROUTE2154.fromField = "value_changed";
ROUTE2154.fromNode = "Stop_vt2_RotationInterpolator";
ROUTE2154.toField = "rotation";
ROUTE2154.toNode = "hanim_vt2";
Group1942.children[211] = ROUTE2154;

let ROUTE2155 = browser.currentScene.createNode("ROUTE");
ROUTE2155.fromField = "value_changed";
ROUTE2155.fromNode = "Stop_vt1_RotationInterpolator";
ROUTE2155.toField = "rotation";
ROUTE2155.toNode = "hanim_vt1";
Group1942.children[212] = ROUTE2155;

let ROUTE2156 = browser.currentScene.createNode("ROUTE");
ROUTE2156.fromField = "value_changed";
ROUTE2156.fromNode = "Stop_vc7_RotationInterpolator";
ROUTE2156.toField = "rotation";
ROUTE2156.toNode = "hanim_vc7";
Group1942.children[213] = ROUTE2156;

let ROUTE2157 = browser.currentScene.createNode("ROUTE");
ROUTE2157.fromField = "value_changed";
ROUTE2157.fromNode = "Stop_vc6_RotationInterpolator";
ROUTE2157.toField = "rotation";
ROUTE2157.toNode = "hanim_vc6";
Group1942.children[214] = ROUTE2157;

let ROUTE2158 = browser.currentScene.createNode("ROUTE");
ROUTE2158.fromField = "value_changed";
ROUTE2158.fromNode = "Stop_vc5_RotationInterpolator";
ROUTE2158.toField = "rotation";
ROUTE2158.toNode = "hanim_vc5";
Group1942.children[215] = ROUTE2158;

let ROUTE2159 = browser.currentScene.createNode("ROUTE");
ROUTE2159.fromField = "value_changed";
ROUTE2159.fromNode = "Stop_vc4_RotationInterpolator";
ROUTE2159.toField = "rotation";
ROUTE2159.toNode = "hanim_vc4";
Group1942.children[216] = ROUTE2159;

let ROUTE2160 = browser.currentScene.createNode("ROUTE");
ROUTE2160.fromField = "value_changed";
ROUTE2160.fromNode = "Stop_vc3_RotationInterpolator";
ROUTE2160.toField = "rotation";
ROUTE2160.toNode = "hanim_vc3";
Group1942.children[217] = ROUTE2160;

let ROUTE2161 = browser.currentScene.createNode("ROUTE");
ROUTE2161.fromField = "value_changed";
ROUTE2161.fromNode = "Stop_vc2_RotationInterpolator";
ROUTE2161.toField = "rotation";
ROUTE2161.toNode = "hanim_vc2";
Group1942.children[218] = ROUTE2161;

let ROUTE2162 = browser.currentScene.createNode("ROUTE");
ROUTE2162.fromField = "value_changed";
ROUTE2162.fromNode = "Stop_vc1_RotationInterpolator";
ROUTE2162.toField = "rotation";
ROUTE2162.toNode = "hanim_vc1";
Group1942.children[219] = ROUTE2162;

let ROUTE2163 = browser.currentScene.createNode("ROUTE");
ROUTE2163.fromField = "value_changed";
ROUTE2163.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE2163.toField = "rotation";
ROUTE2163.toNode = "hanim_skullbase";
Group1942.children[220] = ROUTE2163;

let ROUTE2164 = browser.currentScene.createNode("ROUTE");
ROUTE2164.fromField = "value_changed";
ROUTE2164.fromNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE2164.toField = "rotation";
ROUTE2164.toNode = "hanim_l_eyeball_joint";
Group1942.children[221] = ROUTE2164;

let ROUTE2165 = browser.currentScene.createNode("ROUTE");
ROUTE2165.fromField = "value_changed";
ROUTE2165.fromNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE2165.toField = "rotation";
ROUTE2165.toNode = "hanim_r_eyeball_joint";
Group1942.children[222] = ROUTE2165;

let ROUTE2166 = browser.currentScene.createNode("ROUTE");
ROUTE2166.fromField = "value_changed";
ROUTE2166.fromNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE2166.toField = "rotation";
ROUTE2166.toNode = "hanim_l_sternoclavicular";
Group1942.children[223] = ROUTE2166;

let ROUTE2167 = browser.currentScene.createNode("ROUTE");
ROUTE2167.fromField = "value_changed";
ROUTE2167.fromNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE2167.toField = "rotation";
ROUTE2167.toNode = "hanim_l_acromioclavicular";
Group1942.children[224] = ROUTE2167;

let ROUTE2168 = browser.currentScene.createNode("ROUTE");
ROUTE2168.fromField = "value_changed";
ROUTE2168.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE2168.toField = "rotation";
ROUTE2168.toNode = "hanim_l_shoulder";
Group1942.children[225] = ROUTE2168;

let ROUTE2169 = browser.currentScene.createNode("ROUTE");
ROUTE2169.fromField = "value_changed";
ROUTE2169.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE2169.toField = "rotation";
ROUTE2169.toNode = "hanim_l_elbow";
Group1942.children[226] = ROUTE2169;

let ROUTE2170 = browser.currentScene.createNode("ROUTE");
ROUTE2170.fromField = "value_changed";
ROUTE2170.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE2170.toField = "rotation";
ROUTE2170.toNode = "hanim_l_wrist";
Group1942.children[227] = ROUTE2170;

let ROUTE2171 = browser.currentScene.createNode("ROUTE");
ROUTE2171.fromField = "value_changed";
ROUTE2171.fromNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE2171.toField = "rotation";
ROUTE2171.toNode = "hanim_l_thumb1";
Group1942.children[228] = ROUTE2171;

let ROUTE2172 = browser.currentScene.createNode("ROUTE");
ROUTE2172.fromField = "value_changed";
ROUTE2172.fromNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE2172.toField = "rotation";
ROUTE2172.toNode = "hanim_l_thumb2";
Group1942.children[229] = ROUTE2172;

let ROUTE2173 = browser.currentScene.createNode("ROUTE");
ROUTE2173.fromField = "value_changed";
ROUTE2173.fromNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE2173.toField = "rotation";
ROUTE2173.toNode = "hanim_l_thumb3";
Group1942.children[230] = ROUTE2173;

let ROUTE2174 = browser.currentScene.createNode("ROUTE");
ROUTE2174.fromField = "value_changed";
ROUTE2174.fromNode = "Stop_l_index0_RotationInterpolator";
ROUTE2174.toField = "rotation";
ROUTE2174.toNode = "hanim_l_index0";
Group1942.children[231] = ROUTE2174;

let ROUTE2175 = browser.currentScene.createNode("ROUTE");
ROUTE2175.fromField = "value_changed";
ROUTE2175.fromNode = "Stop_l_index1_RotationInterpolator";
ROUTE2175.toField = "rotation";
ROUTE2175.toNode = "hanim_l_index1";
Group1942.children[232] = ROUTE2175;

let ROUTE2176 = browser.currentScene.createNode("ROUTE");
ROUTE2176.fromField = "value_changed";
ROUTE2176.fromNode = "Stop_l_index2_RotationInterpolator";
ROUTE2176.toField = "rotation";
ROUTE2176.toNode = "hanim_l_index2";
Group1942.children[233] = ROUTE2176;

let ROUTE2177 = browser.currentScene.createNode("ROUTE");
ROUTE2177.fromField = "value_changed";
ROUTE2177.fromNode = "Stop_l_index3_RotationInterpolator";
ROUTE2177.toField = "rotation";
ROUTE2177.toNode = "hanim_l_index3";
Group1942.children[234] = ROUTE2177;

let ROUTE2178 = browser.currentScene.createNode("ROUTE");
ROUTE2178.fromField = "value_changed";
ROUTE2178.fromNode = "Stop_l_middle0_RotationInterpolator";
ROUTE2178.toField = "rotation";
ROUTE2178.toNode = "hanim_l_middle0";
Group1942.children[235] = ROUTE2178;

let ROUTE2179 = browser.currentScene.createNode("ROUTE");
ROUTE2179.fromField = "value_changed";
ROUTE2179.fromNode = "Stop_l_middle1_RotationInterpolator";
ROUTE2179.toField = "rotation";
ROUTE2179.toNode = "hanim_l_middle1";
Group1942.children[236] = ROUTE2179;

let ROUTE2180 = browser.currentScene.createNode("ROUTE");
ROUTE2180.fromField = "value_changed";
ROUTE2180.fromNode = "Stop_l_middle2_RotationInterpolator";
ROUTE2180.toField = "rotation";
ROUTE2180.toNode = "hanim_l_middle2";
Group1942.children[237] = ROUTE2180;

let ROUTE2181 = browser.currentScene.createNode("ROUTE");
ROUTE2181.fromField = "value_changed";
ROUTE2181.fromNode = "Stop_l_middle3_RotationInterpolator";
ROUTE2181.toField = "rotation";
ROUTE2181.toNode = "hanim_l_middle3";
Group1942.children[238] = ROUTE2181;

let ROUTE2182 = browser.currentScene.createNode("ROUTE");
ROUTE2182.fromField = "value_changed";
ROUTE2182.fromNode = "Stop_l_ring0_RotationInterpolator";
ROUTE2182.toField = "rotation";
ROUTE2182.toNode = "hanim_l_ring0";
Group1942.children[239] = ROUTE2182;

let ROUTE2183 = browser.currentScene.createNode("ROUTE");
ROUTE2183.fromField = "value_changed";
ROUTE2183.fromNode = "Stop_l_ring1_RotationInterpolator";
ROUTE2183.toField = "rotation";
ROUTE2183.toNode = "hanim_l_ring1";
Group1942.children[240] = ROUTE2183;

let ROUTE2184 = browser.currentScene.createNode("ROUTE");
ROUTE2184.fromField = "value_changed";
ROUTE2184.fromNode = "Stop_l_ring2_RotationInterpolator";
ROUTE2184.toField = "rotation";
ROUTE2184.toNode = "hanim_l_ring2";
Group1942.children[241] = ROUTE2184;

let ROUTE2185 = browser.currentScene.createNode("ROUTE");
ROUTE2185.fromField = "value_changed";
ROUTE2185.fromNode = "Stop_l_ring3_RotationInterpolator";
ROUTE2185.toField = "rotation";
ROUTE2185.toNode = "hanim_l_ring3";
Group1942.children[242] = ROUTE2185;

let ROUTE2186 = browser.currentScene.createNode("ROUTE");
ROUTE2186.fromField = "value_changed";
ROUTE2186.fromNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE2186.toField = "rotation";
ROUTE2186.toNode = "hanim_l_pinky0";
Group1942.children[243] = ROUTE2186;

let ROUTE2187 = browser.currentScene.createNode("ROUTE");
ROUTE2187.fromField = "value_changed";
ROUTE2187.fromNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE2187.toField = "rotation";
ROUTE2187.toNode = "hanim_l_pinky1";
Group1942.children[244] = ROUTE2187;

let ROUTE2188 = browser.currentScene.createNode("ROUTE");
ROUTE2188.fromField = "value_changed";
ROUTE2188.fromNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE2188.toField = "rotation";
ROUTE2188.toNode = "hanim_l_pinky2";
Group1942.children[245] = ROUTE2188;

let ROUTE2189 = browser.currentScene.createNode("ROUTE");
ROUTE2189.fromField = "value_changed";
ROUTE2189.fromNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE2189.toField = "rotation";
ROUTE2189.toNode = "hanim_l_pinky3";
Group1942.children[246] = ROUTE2189;

let ROUTE2190 = browser.currentScene.createNode("ROUTE");
ROUTE2190.fromField = "value_changed";
ROUTE2190.fromNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE2190.toField = "rotation";
ROUTE2190.toNode = "hanim_r_sternoclavicular";
Group1942.children[247] = ROUTE2190;

let ROUTE2191 = browser.currentScene.createNode("ROUTE");
ROUTE2191.fromField = "value_changed";
ROUTE2191.fromNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE2191.toField = "rotation";
ROUTE2191.toNode = "hanim_r_acromioclavicular";
Group1942.children[248] = ROUTE2191;

let ROUTE2192 = browser.currentScene.createNode("ROUTE");
ROUTE2192.fromField = "value_changed";
ROUTE2192.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE2192.toField = "rotation";
ROUTE2192.toNode = "hanim_r_shoulder";
Group1942.children[249] = ROUTE2192;

let ROUTE2193 = browser.currentScene.createNode("ROUTE");
ROUTE2193.fromField = "value_changed";
ROUTE2193.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE2193.toField = "rotation";
ROUTE2193.toNode = "hanim_r_elbow";
Group1942.children[250] = ROUTE2193;

let ROUTE2194 = browser.currentScene.createNode("ROUTE");
ROUTE2194.fromField = "value_changed";
ROUTE2194.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE2194.toField = "rotation";
ROUTE2194.toNode = "hanim_r_wrist";
Group1942.children[251] = ROUTE2194;

let ROUTE2195 = browser.currentScene.createNode("ROUTE");
ROUTE2195.fromField = "value_changed";
ROUTE2195.fromNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE2195.toField = "rotation";
ROUTE2195.toNode = "hanim_r_thumb1";
Group1942.children[252] = ROUTE2195;

let ROUTE2196 = browser.currentScene.createNode("ROUTE");
ROUTE2196.fromField = "value_changed";
ROUTE2196.fromNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE2196.toField = "rotation";
ROUTE2196.toNode = "hanim_r_thumb2";
Group1942.children[253] = ROUTE2196;

let ROUTE2197 = browser.currentScene.createNode("ROUTE");
ROUTE2197.fromField = "value_changed";
ROUTE2197.fromNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE2197.toField = "rotation";
ROUTE2197.toNode = "hanim_r_thumb3";
Group1942.children[254] = ROUTE2197;

let ROUTE2198 = browser.currentScene.createNode("ROUTE");
ROUTE2198.fromField = "value_changed";
ROUTE2198.fromNode = "Stop_r_index0_RotationInterpolator";
ROUTE2198.toField = "rotation";
ROUTE2198.toNode = "hanim_r_index0";
Group1942.children[255] = ROUTE2198;

let ROUTE2199 = browser.currentScene.createNode("ROUTE");
ROUTE2199.fromField = "value_changed";
ROUTE2199.fromNode = "Stop_r_index1_RotationInterpolator";
ROUTE2199.toField = "rotation";
ROUTE2199.toNode = "hanim_r_index1";
Group1942.children[256] = ROUTE2199;

let ROUTE2200 = browser.currentScene.createNode("ROUTE");
ROUTE2200.fromField = "value_changed";
ROUTE2200.fromNode = "Stop_r_index2_RotationInterpolator";
ROUTE2200.toField = "rotation";
ROUTE2200.toNode = "hanim_r_index2";
Group1942.children[257] = ROUTE2200;

let ROUTE2201 = browser.currentScene.createNode("ROUTE");
ROUTE2201.fromField = "value_changed";
ROUTE2201.fromNode = "Stop_r_index3_RotationInterpolator";
ROUTE2201.toField = "rotation";
ROUTE2201.toNode = "hanim_r_index3";
Group1942.children[258] = ROUTE2201;

let ROUTE2202 = browser.currentScene.createNode("ROUTE");
ROUTE2202.fromField = "value_changed";
ROUTE2202.fromNode = "Stop_r_middle0_RotationInterpolator";
ROUTE2202.toField = "rotation";
ROUTE2202.toNode = "hanim_r_middle0";
Group1942.children[259] = ROUTE2202;

let ROUTE2203 = browser.currentScene.createNode("ROUTE");
ROUTE2203.fromField = "value_changed";
ROUTE2203.fromNode = "Stop_r_middle1_RotationInterpolator";
ROUTE2203.toField = "rotation";
ROUTE2203.toNode = "hanim_r_middle1";
Group1942.children[260] = ROUTE2203;

let ROUTE2204 = browser.currentScene.createNode("ROUTE");
ROUTE2204.fromField = "value_changed";
ROUTE2204.fromNode = "Stop_r_middle2_RotationInterpolator";
ROUTE2204.toField = "rotation";
ROUTE2204.toNode = "hanim_r_middle2";
Group1942.children[261] = ROUTE2204;

let ROUTE2205 = browser.currentScene.createNode("ROUTE");
ROUTE2205.fromField = "value_changed";
ROUTE2205.fromNode = "Stop_r_middle3_RotationInterpolator";
ROUTE2205.toField = "rotation";
ROUTE2205.toNode = "hanim_r_middle3";
Group1942.children[262] = ROUTE2205;

let ROUTE2206 = browser.currentScene.createNode("ROUTE");
ROUTE2206.fromField = "value_changed";
ROUTE2206.fromNode = "Stop_r_ring0_RotationInterpolator";
ROUTE2206.toField = "rotation";
ROUTE2206.toNode = "hanim_r_ring0";
Group1942.children[263] = ROUTE2206;

let ROUTE2207 = browser.currentScene.createNode("ROUTE");
ROUTE2207.fromField = "value_changed";
ROUTE2207.fromNode = "Stop_r_ring1_RotationInterpolator";
ROUTE2207.toField = "rotation";
ROUTE2207.toNode = "hanim_r_ring1";
Group1942.children[264] = ROUTE2207;

let ROUTE2208 = browser.currentScene.createNode("ROUTE");
ROUTE2208.fromField = "value_changed";
ROUTE2208.fromNode = "Stop_r_ring2_RotationInterpolator";
ROUTE2208.toField = "rotation";
ROUTE2208.toNode = "hanim_r_ring2";
Group1942.children[265] = ROUTE2208;

let ROUTE2209 = browser.currentScene.createNode("ROUTE");
ROUTE2209.fromField = "value_changed";
ROUTE2209.fromNode = "Stop_r_ring3_RotationInterpolator";
ROUTE2209.toField = "rotation";
ROUTE2209.toNode = "hanim_r_ring3";
Group1942.children[266] = ROUTE2209;

let ROUTE2210 = browser.currentScene.createNode("ROUTE");
ROUTE2210.fromField = "value_changed";
ROUTE2210.fromNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE2210.toField = "rotation";
ROUTE2210.toNode = "hanim_r_pinky0";
Group1942.children[267] = ROUTE2210;

let ROUTE2211 = browser.currentScene.createNode("ROUTE");
ROUTE2211.fromField = "value_changed";
ROUTE2211.fromNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE2211.toField = "rotation";
ROUTE2211.toNode = "hanim_r_pinky1";
Group1942.children[268] = ROUTE2211;

let ROUTE2212 = browser.currentScene.createNode("ROUTE");
ROUTE2212.fromField = "value_changed";
ROUTE2212.fromNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE2212.toField = "rotation";
ROUTE2212.toNode = "hanim_r_pinky2";
Group1942.children[269] = ROUTE2212;

let ROUTE2213 = browser.currentScene.createNode("ROUTE");
ROUTE2213.fromField = "value_changed";
ROUTE2213.fromNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE2213.toField = "rotation";
ROUTE2213.toNode = "hanim_r_pinky3";
Group1942.children[270] = ROUTE2213;

browser.currentScene.children[13] = Group1942;

let Group2214 = browser.currentScene.createNode("Group");
Group2214.DEF = "StandAnimation";
let TimeSensor2215 = browser.currentScene.createNode("TimeSensor");
TimeSensor2215.DEF = "StandTimer";
TimeSensor2215.cycleInterval = 5.73;
TimeSensor2215.loop = True;
Group2214.children = new MFNode();

Group2214.children[0] = TimeSensor2215;

let OrientationInterpolator2216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2216.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator2216.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2216.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group2214.children[1] = OrientationInterpolator2216;

let OrientationInterpolator2217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2217.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator2217.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2217.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[2] = OrientationInterpolator2217;

let OrientationInterpolator2218 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2218.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator2218.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2218.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[3] = OrientationInterpolator2218;

let OrientationInterpolator2219 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2219.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator2219.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2219.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[4] = OrientationInterpolator2219;

let OrientationInterpolator2220 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2220.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator2220.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2220.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[5] = OrientationInterpolator2220;

let OrientationInterpolator2221 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2221.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator2221.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2221.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[6] = OrientationInterpolator2221;

let OrientationInterpolator2222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2222.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator2222.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2222.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[7] = OrientationInterpolator2222;

let OrientationInterpolator2223 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2223.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator2223.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2223.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group2214.children[8] = OrientationInterpolator2223;

let OrientationInterpolator2224 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2224.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator2224.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2224.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[9] = OrientationInterpolator2224;

let OrientationInterpolator2225 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2225.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator2225.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2225.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[10] = OrientationInterpolator2225;

let OrientationInterpolator2226 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2226.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator2226.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2226.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[11] = OrientationInterpolator2226;

let OrientationInterpolator2227 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2227.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator2227.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2227.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[12] = OrientationInterpolator2227;

let OrientationInterpolator2228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2228.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator2228.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2228.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[13] = OrientationInterpolator2228;

let OrientationInterpolator2229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2229.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator2229.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2229.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[14] = OrientationInterpolator2229;

let OrientationInterpolator2230 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2230.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator2230.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2230.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group2214.children[15] = OrientationInterpolator2230;

let OrientationInterpolator2231 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2231.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator2231.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2231.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2214.children[16] = OrientationInterpolator2231;

let OrientationInterpolator2232 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2232.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator2232.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2232.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2214.children[17] = OrientationInterpolator2232;

let OrientationInterpolator2233 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2233.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator2233.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2233.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[18] = OrientationInterpolator2233;

let OrientationInterpolator2234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2234.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator2234.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2234.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[19] = OrientationInterpolator2234;

let OrientationInterpolator2235 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2235.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator2235.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2235.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[20] = OrientationInterpolator2235;

let PositionInterpolator2236 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2236.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator2236.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2236.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2214.children[21] = PositionInterpolator2236;

let OrientationInterpolator2237 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2237.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2237.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2237.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[22] = OrientationInterpolator2237;

let OrientationInterpolator2238 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2238.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2238.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2238.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[23] = OrientationInterpolator2238;

let OrientationInterpolator2239 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2239.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2239.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2239.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[24] = OrientationInterpolator2239;

let OrientationInterpolator2240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2240.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2240.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2240.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[25] = OrientationInterpolator2240;

let OrientationInterpolator2241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2241.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator2241.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2241.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[26] = OrientationInterpolator2241;

let OrientationInterpolator2242 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2242.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator2242.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[27] = OrientationInterpolator2242;

let OrientationInterpolator2243 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2243.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator2243.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2243.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group2214.children[28] = OrientationInterpolator2243;

let OrientationInterpolator2244 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2244.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator2244.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2244.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[29] = OrientationInterpolator2244;

let OrientationInterpolator2245 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2245.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator2245.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2245.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2214.children[30] = OrientationInterpolator2245;

let OrientationInterpolator2246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2246.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator2246.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2246.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group2214.children[31] = OrientationInterpolator2246;

let OrientationInterpolator2247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2247.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator2247.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group2214.children[32] = OrientationInterpolator2247;

let OrientationInterpolator2248 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2248.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator2248.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2248.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group2214.children[33] = OrientationInterpolator2248;

let ROUTE2249 = browser.currentScene.createNode("ROUTE");
ROUTE2249.fromField = "fraction_changed";
ROUTE2249.fromNode = "StandTimer";
ROUTE2249.toField = "set_fraction";
ROUTE2249.toNode = "Stand_r_ankle_RotationInterpolator";
Group2214.children[34] = ROUTE2249;

let ROUTE2250 = browser.currentScene.createNode("ROUTE");
ROUTE2250.fromField = "fraction_changed";
ROUTE2250.fromNode = "StandTimer";
ROUTE2250.toField = "set_fraction";
ROUTE2250.toNode = "Stand_r_knee_RotationInterpolator";
Group2214.children[35] = ROUTE2250;

let ROUTE2251 = browser.currentScene.createNode("ROUTE");
ROUTE2251.fromField = "fraction_changed";
ROUTE2251.fromNode = "StandTimer";
ROUTE2251.toField = "set_fraction";
ROUTE2251.toNode = "Stand_r_hip_RotationInterpolator";
Group2214.children[36] = ROUTE2251;

let ROUTE2252 = browser.currentScene.createNode("ROUTE");
ROUTE2252.fromField = "fraction_changed";
ROUTE2252.fromNode = "StandTimer";
ROUTE2252.toField = "set_fraction";
ROUTE2252.toNode = "Stand_l_ankle_RotationInterpolator";
Group2214.children[37] = ROUTE2252;

let ROUTE2253 = browser.currentScene.createNode("ROUTE");
ROUTE2253.fromField = "fraction_changed";
ROUTE2253.fromNode = "StandTimer";
ROUTE2253.toField = "set_fraction";
ROUTE2253.toNode = "Stand_l_knee_RotationInterpolator";
Group2214.children[38] = ROUTE2253;

let ROUTE2254 = browser.currentScene.createNode("ROUTE");
ROUTE2254.fromField = "fraction_changed";
ROUTE2254.fromNode = "StandTimer";
ROUTE2254.toField = "set_fraction";
ROUTE2254.toNode = "Stand_l_hip_RotationInterpolator";
Group2214.children[39] = ROUTE2254;

let ROUTE2255 = browser.currentScene.createNode("ROUTE");
ROUTE2255.fromField = "fraction_changed";
ROUTE2255.fromNode = "StandTimer";
ROUTE2255.toField = "set_fraction";
ROUTE2255.toNode = "Stand_lower_body_RotationInterpolator";
Group2214.children[40] = ROUTE2255;

let ROUTE2256 = browser.currentScene.createNode("ROUTE");
ROUTE2256.fromField = "fraction_changed";
ROUTE2256.fromNode = "StandTimer";
ROUTE2256.toField = "set_fraction";
ROUTE2256.toNode = "Stand_r_wrist_RotationInterpolator";
Group2214.children[41] = ROUTE2256;

let ROUTE2257 = browser.currentScene.createNode("ROUTE");
ROUTE2257.fromField = "fraction_changed";
ROUTE2257.fromNode = "StandTimer";
ROUTE2257.toField = "set_fraction";
ROUTE2257.toNode = "Stand_r_elbow_RotationInterpolator";
Group2214.children[42] = ROUTE2257;

let ROUTE2258 = browser.currentScene.createNode("ROUTE");
ROUTE2258.fromField = "fraction_changed";
ROUTE2258.fromNode = "StandTimer";
ROUTE2258.toField = "set_fraction";
ROUTE2258.toNode = "Stand_r_shoulder_RotationInterpolator";
Group2214.children[43] = ROUTE2258;

let ROUTE2259 = browser.currentScene.createNode("ROUTE");
ROUTE2259.fromField = "fraction_changed";
ROUTE2259.fromNode = "StandTimer";
ROUTE2259.toField = "set_fraction";
ROUTE2259.toNode = "Stand_l_wrist_RotationInterpolator";
Group2214.children[44] = ROUTE2259;

let ROUTE2260 = browser.currentScene.createNode("ROUTE");
ROUTE2260.fromField = "fraction_changed";
ROUTE2260.fromNode = "StandTimer";
ROUTE2260.toField = "set_fraction";
ROUTE2260.toNode = "Stand_l_elbow_RotationInterpolator";
Group2214.children[45] = ROUTE2260;

let ROUTE2261 = browser.currentScene.createNode("ROUTE");
ROUTE2261.fromField = "fraction_changed";
ROUTE2261.fromNode = "StandTimer";
ROUTE2261.toField = "set_fraction";
ROUTE2261.toNode = "Stand_l_shoulder_RotationInterpolator";
Group2214.children[46] = ROUTE2261;

let ROUTE2262 = browser.currentScene.createNode("ROUTE");
ROUTE2262.fromField = "fraction_changed";
ROUTE2262.fromNode = "StandTimer";
ROUTE2262.toField = "set_fraction";
ROUTE2262.toNode = "Stand_head_RotationInterpolator";
Group2214.children[47] = ROUTE2262;

let ROUTE2263 = browser.currentScene.createNode("ROUTE");
ROUTE2263.fromField = "fraction_changed";
ROUTE2263.fromNode = "StandTimer";
ROUTE2263.toField = "set_fraction";
ROUTE2263.toNode = "Stand_neck_RotationInterpolator";
Group2214.children[48] = ROUTE2263;

let ROUTE2264 = browser.currentScene.createNode("ROUTE");
ROUTE2264.fromField = "fraction_changed";
ROUTE2264.fromNode = "StandTimer";
ROUTE2264.toField = "set_fraction";
ROUTE2264.toNode = "Stand_l_eyeball_RotationInterpolator";
Group2214.children[49] = ROUTE2264;

let ROUTE2265 = browser.currentScene.createNode("ROUTE");
ROUTE2265.fromField = "fraction_changed";
ROUTE2265.fromNode = "StandTimer";
ROUTE2265.toField = "set_fraction";
ROUTE2265.toNode = "Stand_r_eyeball_RotationInterpolator";
Group2214.children[50] = ROUTE2265;

let ROUTE2266 = browser.currentScene.createNode("ROUTE");
ROUTE2266.fromField = "fraction_changed";
ROUTE2266.fromNode = "StandTimer";
ROUTE2266.toField = "set_fraction";
ROUTE2266.toNode = "Stand_upper_body_RotationInterpolator";
Group2214.children[51] = ROUTE2266;

let ROUTE2267 = browser.currentScene.createNode("ROUTE");
ROUTE2267.fromField = "fraction_changed";
ROUTE2267.fromNode = "StandTimer";
ROUTE2267.toField = "set_fraction";
ROUTE2267.toNode = "Stand_whole_body_RotationInterpolator";
Group2214.children[52] = ROUTE2267;

let ROUTE2268 = browser.currentScene.createNode("ROUTE");
ROUTE2268.fromField = "fraction_changed";
ROUTE2268.fromNode = "StandTimer";
ROUTE2268.toField = "set_fraction";
ROUTE2268.toNode = "Stand_whole_body_TranslationInterpolator";
Group2214.children[53] = ROUTE2268;

let ROUTE2269 = browser.currentScene.createNode("ROUTE");
ROUTE2269.fromField = "fraction_changed";
ROUTE2269.fromNode = "StandTimer";
ROUTE2269.toField = "set_fraction";
ROUTE2269.toNode = "Stand_l_sternoclavicular_RollInterpolator";
Group2214.children[54] = ROUTE2269;

let ROUTE2270 = browser.currentScene.createNode("ROUTE");
ROUTE2270.fromField = "fraction_changed";
ROUTE2270.fromNode = "StandTimer";
ROUTE2270.toField = "set_fraction";
ROUTE2270.toNode = "Stand_l_acromioclavicular_RollInterpolator";
Group2214.children[55] = ROUTE2270;

let ROUTE2271 = browser.currentScene.createNode("ROUTE");
ROUTE2271.fromField = "fraction_changed";
ROUTE2271.fromNode = "StandTimer";
ROUTE2271.toField = "set_fraction";
ROUTE2271.toNode = "Stand_r_sternoclavicular_RollInterpolator";
Group2214.children[56] = ROUTE2271;

let ROUTE2272 = browser.currentScene.createNode("ROUTE");
ROUTE2272.fromField = "fraction_changed";
ROUTE2272.fromNode = "StandTimer";
ROUTE2272.toField = "set_fraction";
ROUTE2272.toNode = "Stand_r_acromioclavicular_RollInterpolator";
Group2214.children[57] = ROUTE2272;

let ROUTE2273 = browser.currentScene.createNode("ROUTE");
ROUTE2273.fromField = "fraction_changed";
ROUTE2273.fromNode = "StandTimer";
ROUTE2273.toField = "set_fraction";
ROUTE2273.toNode = "Stand_r_metatarsal_PitchInterpolator";
Group2214.children[58] = ROUTE2273;

let ROUTE2274 = browser.currentScene.createNode("ROUTE");
ROUTE2274.fromField = "fraction_changed";
ROUTE2274.fromNode = "StandTimer";
ROUTE2274.toField = "set_fraction";
ROUTE2274.toNode = "Stand_sacroiliac_YawInterpolator";
Group2214.children[59] = ROUTE2274;

let ROUTE2275 = browser.currentScene.createNode("ROUTE");
ROUTE2275.fromField = "fraction_changed";
ROUTE2275.fromNode = "StandTimer";
ROUTE2275.toField = "set_fraction";
ROUTE2275.toNode = "Stand_vl5_YawInterpolator";
Group2214.children[60] = ROUTE2275;

let ROUTE2276 = browser.currentScene.createNode("ROUTE");
ROUTE2276.fromField = "fraction_changed";
ROUTE2276.fromNode = "StandTimer";
ROUTE2276.toField = "set_fraction";
ROUTE2276.toNode = "Stand_vc6_YawInterpolator";
Group2214.children[61] = ROUTE2276;

let ROUTE2277 = browser.currentScene.createNode("ROUTE");
ROUTE2277.fromField = "fraction_changed";
ROUTE2277.fromNode = "StandTimer";
ROUTE2277.toField = "set_fraction";
ROUTE2277.toNode = "Stand_l_thumb1_PitchInterpolator";
Group2214.children[62] = ROUTE2277;

let ROUTE2278 = browser.currentScene.createNode("ROUTE");
ROUTE2278.fromField = "fraction_changed";
ROUTE2278.fromNode = "StandTimer";
ROUTE2278.toField = "set_fraction";
ROUTE2278.toNode = "Stand_r_thumb1_PitchInterpolator";
Group2214.children[63] = ROUTE2278;

let ROUTE2279 = browser.currentScene.createNode("ROUTE");
ROUTE2279.fromField = "fraction_changed";
ROUTE2279.fromNode = "StandTimer";
ROUTE2279.toField = "set_fraction";
ROUTE2279.toNode = "Stand_r_index1_RollInterpolator";
Group2214.children[64] = ROUTE2279;

let ROUTE2280 = browser.currentScene.createNode("ROUTE");
ROUTE2280.fromField = "fraction_changed";
ROUTE2280.fromNode = "StandTimer";
ROUTE2280.toField = "set_fraction";
ROUTE2280.toNode = "Stand_r_index2_RollInterpolator";
Group2214.children[65] = ROUTE2280;

let ROUTE2281 = browser.currentScene.createNode("ROUTE");
ROUTE2281.fromField = "fraction_changed";
ROUTE2281.fromNode = "StandTimer";
ROUTE2281.toField = "set_fraction";
ROUTE2281.toNode = "Stand_r_index3_RollInterpolator";
Group2214.children[66] = ROUTE2281;

let ROUTE2282 = browser.currentScene.createNode("ROUTE");
ROUTE2282.fromField = "value_changed";
ROUTE2282.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE2282.toField = "rotation";
ROUTE2282.toNode = "hanim_r_ankle";
Group2214.children[67] = ROUTE2282;

let ROUTE2283 = browser.currentScene.createNode("ROUTE");
ROUTE2283.fromField = "value_changed";
ROUTE2283.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE2283.toField = "rotation";
ROUTE2283.toNode = "hanim_r_knee";
Group2214.children[68] = ROUTE2283;

let ROUTE2284 = browser.currentScene.createNode("ROUTE");
ROUTE2284.fromField = "value_changed";
ROUTE2284.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE2284.toField = "rotation";
ROUTE2284.toNode = "hanim_r_hip";
Group2214.children[69] = ROUTE2284;

let ROUTE2285 = browser.currentScene.createNode("ROUTE");
ROUTE2285.fromField = "value_changed";
ROUTE2285.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE2285.toField = "rotation";
ROUTE2285.toNode = "hanim_l_ankle";
Group2214.children[70] = ROUTE2285;

let ROUTE2286 = browser.currentScene.createNode("ROUTE");
ROUTE2286.fromField = "value_changed";
ROUTE2286.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE2286.toField = "rotation";
ROUTE2286.toNode = "hanim_l_knee";
Group2214.children[71] = ROUTE2286;

let ROUTE2287 = browser.currentScene.createNode("ROUTE");
ROUTE2287.fromField = "value_changed";
ROUTE2287.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE2287.toField = "rotation";
ROUTE2287.toNode = "hanim_l_hip";
Group2214.children[72] = ROUTE2287;

let ROUTE2288 = browser.currentScene.createNode("ROUTE");
ROUTE2288.fromField = "value_changed";
ROUTE2288.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE2288.toField = "rotation";
ROUTE2288.toNode = "hanim_r_wrist";
Group2214.children[73] = ROUTE2288;

let ROUTE2289 = browser.currentScene.createNode("ROUTE");
ROUTE2289.fromField = "value_changed";
ROUTE2289.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE2289.toField = "rotation";
ROUTE2289.toNode = "hanim_r_elbow";
Group2214.children[74] = ROUTE2289;

let ROUTE2290 = browser.currentScene.createNode("ROUTE");
ROUTE2290.fromField = "value_changed";
ROUTE2290.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE2290.toField = "rotation";
ROUTE2290.toNode = "hanim_r_shoulder";
Group2214.children[75] = ROUTE2290;

let ROUTE2291 = browser.currentScene.createNode("ROUTE");
ROUTE2291.fromField = "value_changed";
ROUTE2291.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE2291.toField = "rotation";
ROUTE2291.toNode = "hanim_l_wrist";
Group2214.children[76] = ROUTE2291;

let ROUTE2292 = browser.currentScene.createNode("ROUTE");
ROUTE2292.fromField = "value_changed";
ROUTE2292.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE2292.toField = "rotation";
ROUTE2292.toNode = "hanim_l_elbow";
Group2214.children[77] = ROUTE2292;

let ROUTE2293 = browser.currentScene.createNode("ROUTE");
ROUTE2293.fromField = "value_changed";
ROUTE2293.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE2293.toField = "rotation";
ROUTE2293.toNode = "hanim_l_shoulder";
Group2214.children[78] = ROUTE2293;

let ROUTE2294 = browser.currentScene.createNode("ROUTE");
ROUTE2294.fromField = "value_changed";
ROUTE2294.fromNode = "Stand_head_RotationInterpolator";
ROUTE2294.toField = "rotation";
ROUTE2294.toNode = "hanim_skullbase";
Group2214.children[79] = ROUTE2294;

let ROUTE2295 = browser.currentScene.createNode("ROUTE");
ROUTE2295.fromField = "value_changed";
ROUTE2295.fromNode = "Stand_neck_RotationInterpolator";
ROUTE2295.toField = "rotation";
ROUTE2295.toNode = "hanim_vc7";
Group2214.children[80] = ROUTE2295;

let ROUTE2296 = browser.currentScene.createNode("ROUTE");
ROUTE2296.fromField = "value_changed";
ROUTE2296.fromNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE2296.toField = "rotation";
ROUTE2296.toNode = "hanim_l_eyeball_joint";
Group2214.children[81] = ROUTE2296;

let ROUTE2297 = browser.currentScene.createNode("ROUTE");
ROUTE2297.fromField = "value_changed";
ROUTE2297.fromNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE2297.toField = "rotation";
ROUTE2297.toNode = "hanim_r_eyeball_joint";
Group2214.children[82] = ROUTE2297;

let ROUTE2298 = browser.currentScene.createNode("ROUTE");
ROUTE2298.fromField = "value_changed";
ROUTE2298.fromNode = "Stand_upper_body_RotationInterpolator";
ROUTE2298.toField = "rotation";
ROUTE2298.toNode = "hanim_vl1";
Group2214.children[83] = ROUTE2298;

let ROUTE2299 = browser.currentScene.createNode("ROUTE");
ROUTE2299.fromField = "value_changed";
ROUTE2299.fromNode = "Stand_lower_body_RotationInterpolator";
ROUTE2299.toField = "rotation";
ROUTE2299.toNode = "hanim_sacroiliac";
Group2214.children[84] = ROUTE2299;

let ROUTE2300 = browser.currentScene.createNode("ROUTE");
ROUTE2300.fromField = "value_changed";
ROUTE2300.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE2300.toField = "rotation";
ROUTE2300.toNode = "hanim_humanoid_root";
Group2214.children[85] = ROUTE2300;

let ROUTE2301 = browser.currentScene.createNode("ROUTE");
ROUTE2301.fromField = "value_changed";
ROUTE2301.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE2301.toField = "translation";
ROUTE2301.toNode = "hanim_humanoid_root";
Group2214.children[86] = ROUTE2301;

let ROUTE2302 = browser.currentScene.createNode("ROUTE");
ROUTE2302.fromField = "value_changed";
ROUTE2302.fromNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE2302.toField = "rotation";
ROUTE2302.toNode = "hanim_l_sternoclavicular";
Group2214.children[87] = ROUTE2302;

let ROUTE2303 = browser.currentScene.createNode("ROUTE");
ROUTE2303.fromField = "value_changed";
ROUTE2303.fromNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE2303.toField = "rotation";
ROUTE2303.toNode = "hanim_l_acromioclavicular";
Group2214.children[88] = ROUTE2303;

let ROUTE2304 = browser.currentScene.createNode("ROUTE");
ROUTE2304.fromField = "value_changed";
ROUTE2304.fromNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE2304.toField = "rotation";
ROUTE2304.toNode = "hanim_r_sternoclavicular";
Group2214.children[89] = ROUTE2304;

let ROUTE2305 = browser.currentScene.createNode("ROUTE");
ROUTE2305.fromField = "value_changed";
ROUTE2305.fromNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE2305.toField = "rotation";
ROUTE2305.toNode = "hanim_r_acromioclavicular";
Group2214.children[90] = ROUTE2305;

let ROUTE2306 = browser.currentScene.createNode("ROUTE");
ROUTE2306.fromField = "value_changed";
ROUTE2306.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2306.toField = "rotation";
ROUTE2306.toNode = "hanim_l_metatarsal";
Group2214.children[91] = ROUTE2306;

let ROUTE2307 = browser.currentScene.createNode("ROUTE");
ROUTE2307.fromField = "value_changed";
ROUTE2307.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2307.toField = "rotation";
ROUTE2307.toNode = "hanim_r_metatarsal";
Group2214.children[92] = ROUTE2307;

let ROUTE2308 = browser.currentScene.createNode("ROUTE");
ROUTE2308.fromField = "value_changed";
ROUTE2308.fromNode = "Stand_sacroiliac_YawInterpolator";
ROUTE2308.toField = "rotation";
ROUTE2308.toNode = "hanim_sacroiliac";
Group2214.children[93] = ROUTE2308;

let ROUTE2309 = browser.currentScene.createNode("ROUTE");
ROUTE2309.fromField = "value_changed";
ROUTE2309.fromNode = "Stand_vl5_YawInterpolator";
ROUTE2309.toField = "rotation";
ROUTE2309.toNode = "hanim_vl5";
Group2214.children[94] = ROUTE2309;

let ROUTE2310 = browser.currentScene.createNode("ROUTE");
ROUTE2310.fromField = "value_changed";
ROUTE2310.fromNode = "Stand_vc6_YawInterpolator";
ROUTE2310.toField = "rotation";
ROUTE2310.toNode = "hanim_vc6";
Group2214.children[95] = ROUTE2310;

let ROUTE2311 = browser.currentScene.createNode("ROUTE");
ROUTE2311.fromField = "value_changed";
ROUTE2311.fromNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE2311.toField = "rotation";
ROUTE2311.toNode = "hanim_l_thumb1";
Group2214.children[96] = ROUTE2311;

let ROUTE2312 = browser.currentScene.createNode("ROUTE");
ROUTE2312.fromField = "value_changed";
ROUTE2312.fromNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE2312.toField = "rotation";
ROUTE2312.toNode = "hanim_r_thumb1";
Group2214.children[97] = ROUTE2312;

let ROUTE2313 = browser.currentScene.createNode("ROUTE");
ROUTE2313.fromField = "value_changed";
ROUTE2313.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2313.toField = "rotation";
ROUTE2313.toNode = "hanim_r_index1";
Group2214.children[98] = ROUTE2313;

let ROUTE2314 = browser.currentScene.createNode("ROUTE");
ROUTE2314.fromField = "value_changed";
ROUTE2314.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2314.toField = "rotation";
ROUTE2314.toNode = "hanim_r_index2";
Group2214.children[99] = ROUTE2314;

let ROUTE2315 = browser.currentScene.createNode("ROUTE");
ROUTE2315.fromField = "value_changed";
ROUTE2315.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2315.toField = "rotation";
ROUTE2315.toNode = "hanim_r_index3";
Group2214.children[100] = ROUTE2315;

let ROUTE2316 = browser.currentScene.createNode("ROUTE");
ROUTE2316.fromField = "value_changed";
ROUTE2316.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2316.toField = "rotation";
ROUTE2316.toNode = "hanim_r_middle1";
Group2214.children[101] = ROUTE2316;

let ROUTE2317 = browser.currentScene.createNode("ROUTE");
ROUTE2317.fromField = "value_changed";
ROUTE2317.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2317.toField = "rotation";
ROUTE2317.toNode = "hanim_r_middle2";
Group2214.children[102] = ROUTE2317;

let ROUTE2318 = browser.currentScene.createNode("ROUTE");
ROUTE2318.fromField = "value_changed";
ROUTE2318.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2318.toField = "rotation";
ROUTE2318.toNode = "hanim_r_middle3";
Group2214.children[103] = ROUTE2318;

let ROUTE2319 = browser.currentScene.createNode("ROUTE");
ROUTE2319.fromField = "value_changed";
ROUTE2319.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2319.toField = "rotation";
ROUTE2319.toNode = "hanim_r_ring1";
Group2214.children[104] = ROUTE2319;

let ROUTE2320 = browser.currentScene.createNode("ROUTE");
ROUTE2320.fromField = "value_changed";
ROUTE2320.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2320.toField = "rotation";
ROUTE2320.toNode = "hanim_r_ring2";
Group2214.children[105] = ROUTE2320;

let ROUTE2321 = browser.currentScene.createNode("ROUTE");
ROUTE2321.fromField = "value_changed";
ROUTE2321.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2321.toField = "rotation";
ROUTE2321.toNode = "hanim_r_ring3";
Group2214.children[106] = ROUTE2321;

let ROUTE2322 = browser.currentScene.createNode("ROUTE");
ROUTE2322.fromField = "value_changed";
ROUTE2322.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2322.toField = "rotation";
ROUTE2322.toNode = "hanim_r_pinky1";
Group2214.children[107] = ROUTE2322;

let ROUTE2323 = browser.currentScene.createNode("ROUTE");
ROUTE2323.fromField = "value_changed";
ROUTE2323.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2323.toField = "rotation";
ROUTE2323.toNode = "hanim_r_pinky2";
Group2214.children[108] = ROUTE2323;

let ROUTE2324 = browser.currentScene.createNode("ROUTE");
ROUTE2324.fromField = "value_changed";
ROUTE2324.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2324.toField = "rotation";
ROUTE2324.toNode = "hanim_r_pinky3";
Group2214.children[109] = ROUTE2324;

browser.currentScene.children[14] = Group2214;

let Group2325 = browser.currentScene.createNode("Group");
Group2325.DEF = "PitchesAnimation";
let TimeSensor2326 = browser.currentScene.createNode("TimeSensor");
TimeSensor2326.DEF = "PitchTimer";
TimeSensor2326.cycleInterval = 5.73;
TimeSensor2326.loop = True;
Group2325.children = new MFNode();

Group2325.children[0] = TimeSensor2326;

let OrientationInterpolator2327 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2327.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator2327.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2327.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2325.children[1] = OrientationInterpolator2327;

let OrientationInterpolator2328 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2328.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator2328.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2328.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2325.children[2] = OrientationInterpolator2328;

let OrientationInterpolator2329 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2329.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator2329.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2329.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[3] = OrientationInterpolator2329;

let OrientationInterpolator2330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2330.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator2330.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2330.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2325.children[4] = OrientationInterpolator2330;

let OrientationInterpolator2331 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2331.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator2331.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2331.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2325.children[5] = OrientationInterpolator2331;

let OrientationInterpolator2332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2332.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator2332.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2332.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[6] = OrientationInterpolator2332;

let OrientationInterpolator2333 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2333.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator2333.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2333.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2325.children[7] = OrientationInterpolator2333;

let OrientationInterpolator2334 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2334.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator2334.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2334.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[8] = OrientationInterpolator2334;

let OrientationInterpolator2335 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2335.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator2335.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2335.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[9] = OrientationInterpolator2335;

let OrientationInterpolator2336 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2336.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator2336.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2336.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2325.children[10] = OrientationInterpolator2336;

let OrientationInterpolator2337 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2337.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator2337.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2337.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[11] = OrientationInterpolator2337;

let OrientationInterpolator2338 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2338.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator2338.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2338.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[12] = OrientationInterpolator2338;

let OrientationInterpolator2339 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2339.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator2339.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2339.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2325.children[13] = OrientationInterpolator2339;

let OrientationInterpolator2340 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2340.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator2340.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2340.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[14] = OrientationInterpolator2340;

let OrientationInterpolator2341 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2341.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator2341.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2341.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group2325.children[15] = OrientationInterpolator2341;

let OrientationInterpolator2342 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2342.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator2342.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2342.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[16] = OrientationInterpolator2342;

let OrientationInterpolator2343 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2343.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator2343.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2343.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[17] = OrientationInterpolator2343;

let OrientationInterpolator2344 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2344.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator2344.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2344.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[18] = OrientationInterpolator2344;

let PositionInterpolator2345 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2345.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator2345.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2345.keyValue = new MFVec3f(new float[0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group2325.children[19] = PositionInterpolator2345;

let OrientationInterpolator2346 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2346.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2346.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2346.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[20] = OrientationInterpolator2346;

let OrientationInterpolator2347 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2347.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2347.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2347.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[21] = OrientationInterpolator2347;

let OrientationInterpolator2348 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2348.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2348.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2348.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[22] = OrientationInterpolator2348;

let OrientationInterpolator2349 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2349.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2349.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2349.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[23] = OrientationInterpolator2349;

let OrientationInterpolator2350 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2350.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator2350.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2350.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[24] = OrientationInterpolator2350;

let OrientationInterpolator2351 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2351.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator2351.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2351.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[25] = OrientationInterpolator2351;

let OrientationInterpolator2352 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2352.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator2352.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2352.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[26] = OrientationInterpolator2352;

let OrientationInterpolator2353 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2353.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator2353.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2353.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2325.children[27] = OrientationInterpolator2353;

let OrientationInterpolator2354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2354.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator2354.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2354.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2325.children[28] = OrientationInterpolator2354;

let ROUTE2355 = browser.currentScene.createNode("ROUTE");
ROUTE2355.fromField = "fraction_changed";
ROUTE2355.fromNode = "PitchTimer";
ROUTE2355.toField = "set_fraction";
ROUTE2355.toNode = "Pitches_r_ankle_RotationInterpolator";
Group2325.children[29] = ROUTE2355;

let ROUTE2356 = browser.currentScene.createNode("ROUTE");
ROUTE2356.fromField = "fraction_changed";
ROUTE2356.fromNode = "PitchTimer";
ROUTE2356.toField = "set_fraction";
ROUTE2356.toNode = "Pitches_r_knee_RotationInterpolator";
Group2325.children[30] = ROUTE2356;

let ROUTE2357 = browser.currentScene.createNode("ROUTE");
ROUTE2357.fromField = "fraction_changed";
ROUTE2357.fromNode = "PitchTimer";
ROUTE2357.toField = "set_fraction";
ROUTE2357.toNode = "Pitches_r_hip_RotationInterpolator";
Group2325.children[31] = ROUTE2357;

let ROUTE2358 = browser.currentScene.createNode("ROUTE");
ROUTE2358.fromField = "fraction_changed";
ROUTE2358.fromNode = "PitchTimer";
ROUTE2358.toField = "set_fraction";
ROUTE2358.toNode = "Pitches_l_ankle_RotationInterpolator";
Group2325.children[32] = ROUTE2358;

let ROUTE2359 = browser.currentScene.createNode("ROUTE");
ROUTE2359.fromField = "fraction_changed";
ROUTE2359.fromNode = "PitchTimer";
ROUTE2359.toField = "set_fraction";
ROUTE2359.toNode = "Pitches_l_knee_RotationInterpolator";
Group2325.children[33] = ROUTE2359;

let ROUTE2360 = browser.currentScene.createNode("ROUTE");
ROUTE2360.fromField = "fraction_changed";
ROUTE2360.fromNode = "PitchTimer";
ROUTE2360.toField = "set_fraction";
ROUTE2360.toNode = "Pitches_l_hip_RotationInterpolator";
Group2325.children[34] = ROUTE2360;

let ROUTE2361 = browser.currentScene.createNode("ROUTE");
ROUTE2361.fromField = "fraction_changed";
ROUTE2361.fromNode = "PitchTimer";
ROUTE2361.toField = "set_fraction";
ROUTE2361.toNode = "Pitches_lower_body_RotationInterpolator";
Group2325.children[35] = ROUTE2361;

let ROUTE2362 = browser.currentScene.createNode("ROUTE");
ROUTE2362.fromField = "fraction_changed";
ROUTE2362.fromNode = "PitchTimer";
ROUTE2362.toField = "set_fraction";
ROUTE2362.toNode = "Pitches_r_wrist_RotationInterpolator";
Group2325.children[36] = ROUTE2362;

let ROUTE2363 = browser.currentScene.createNode("ROUTE");
ROUTE2363.fromField = "fraction_changed";
ROUTE2363.fromNode = "PitchTimer";
ROUTE2363.toField = "set_fraction";
ROUTE2363.toNode = "Pitches_r_elbow_RotationInterpolator";
Group2325.children[37] = ROUTE2363;

let ROUTE2364 = browser.currentScene.createNode("ROUTE");
ROUTE2364.fromField = "fraction_changed";
ROUTE2364.fromNode = "PitchTimer";
ROUTE2364.toField = "set_fraction";
ROUTE2364.toNode = "Pitches_r_shoulder_RotationInterpolator";
Group2325.children[38] = ROUTE2364;

let ROUTE2365 = browser.currentScene.createNode("ROUTE");
ROUTE2365.fromField = "fraction_changed";
ROUTE2365.fromNode = "PitchTimer";
ROUTE2365.toField = "set_fraction";
ROUTE2365.toNode = "Pitches_l_wrist_RotationInterpolator";
Group2325.children[39] = ROUTE2365;

let ROUTE2366 = browser.currentScene.createNode("ROUTE");
ROUTE2366.fromField = "fraction_changed";
ROUTE2366.fromNode = "PitchTimer";
ROUTE2366.toField = "set_fraction";
ROUTE2366.toNode = "Pitches_l_elbow_RotationInterpolator";
Group2325.children[40] = ROUTE2366;

let ROUTE2367 = browser.currentScene.createNode("ROUTE");
ROUTE2367.fromField = "fraction_changed";
ROUTE2367.fromNode = "PitchTimer";
ROUTE2367.toField = "set_fraction";
ROUTE2367.toNode = "Pitches_l_shoulder_RotationInterpolator";
Group2325.children[41] = ROUTE2367;

let ROUTE2368 = browser.currentScene.createNode("ROUTE");
ROUTE2368.fromField = "fraction_changed";
ROUTE2368.fromNode = "PitchTimer";
ROUTE2368.toField = "set_fraction";
ROUTE2368.toNode = "Pitches_head_RotationInterpolator";
Group2325.children[42] = ROUTE2368;

let ROUTE2369 = browser.currentScene.createNode("ROUTE");
ROUTE2369.fromField = "fraction_changed";
ROUTE2369.fromNode = "PitchTimer";
ROUTE2369.toField = "set_fraction";
ROUTE2369.toNode = "Pitches_neck_RotationInterpolator";
Group2325.children[43] = ROUTE2369;

let ROUTE2370 = browser.currentScene.createNode("ROUTE");
ROUTE2370.fromField = "fraction_changed";
ROUTE2370.fromNode = "PitchTimer";
ROUTE2370.toField = "set_fraction";
ROUTE2370.toNode = "Pitches_upper_body_RotationInterpolator";
Group2325.children[44] = ROUTE2370;

let ROUTE2371 = browser.currentScene.createNode("ROUTE");
ROUTE2371.fromField = "fraction_changed";
ROUTE2371.fromNode = "PitchTimer";
ROUTE2371.toField = "set_fraction";
ROUTE2371.toNode = "Pitches_whole_body_RotationInterpolator";
Group2325.children[45] = ROUTE2371;

let ROUTE2372 = browser.currentScene.createNode("ROUTE");
ROUTE2372.fromField = "fraction_changed";
ROUTE2372.fromNode = "PitchTimer";
ROUTE2372.toField = "set_fraction";
ROUTE2372.toNode = "Pitches_whole_body_TranslationInterpolator";
Group2325.children[46] = ROUTE2372;

let ROUTE2373 = browser.currentScene.createNode("ROUTE");
ROUTE2373.fromField = "fraction_changed";
ROUTE2373.fromNode = "PitchTimer";
ROUTE2373.toField = "set_fraction";
ROUTE2373.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
Group2325.children[47] = ROUTE2373;

let ROUTE2374 = browser.currentScene.createNode("ROUTE");
ROUTE2374.fromField = "fraction_changed";
ROUTE2374.fromNode = "PitchTimer";
ROUTE2374.toField = "set_fraction";
ROUTE2374.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
Group2325.children[48] = ROUTE2374;

let ROUTE2375 = browser.currentScene.createNode("ROUTE");
ROUTE2375.fromField = "fraction_changed";
ROUTE2375.fromNode = "PitchTimer";
ROUTE2375.toField = "set_fraction";
ROUTE2375.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
Group2325.children[49] = ROUTE2375;

let ROUTE2376 = browser.currentScene.createNode("ROUTE");
ROUTE2376.fromField = "fraction_changed";
ROUTE2376.fromNode = "PitchTimer";
ROUTE2376.toField = "set_fraction";
ROUTE2376.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
Group2325.children[50] = ROUTE2376;

let ROUTE2377 = browser.currentScene.createNode("ROUTE");
ROUTE2377.fromField = "fraction_changed";
ROUTE2377.fromNode = "PitchTimer";
ROUTE2377.toField = "set_fraction";
ROUTE2377.toNode = "Pitch_r_metatarsal_PitchInterpolator";
Group2325.children[51] = ROUTE2377;

let ROUTE2378 = browser.currentScene.createNode("ROUTE");
ROUTE2378.fromField = "fraction_changed";
ROUTE2378.fromNode = "PitchTimer";
ROUTE2378.toField = "set_fraction";
ROUTE2378.toNode = "Pitch_sacroiliac_YawInterpolator";
Group2325.children[52] = ROUTE2378;

let ROUTE2379 = browser.currentScene.createNode("ROUTE");
ROUTE2379.fromField = "fraction_changed";
ROUTE2379.fromNode = "PitchTimer";
ROUTE2379.toField = "set_fraction";
ROUTE2379.toNode = "Pitch_vl5_YawInterpolator";
Group2325.children[53] = ROUTE2379;

let ROUTE2380 = browser.currentScene.createNode("ROUTE");
ROUTE2380.fromField = "fraction_changed";
ROUTE2380.fromNode = "PitchTimer";
ROUTE2380.toField = "set_fraction";
ROUTE2380.toNode = "Pitch_vc6_YawInterpolator";
Group2325.children[54] = ROUTE2380;

let ROUTE2381 = browser.currentScene.createNode("ROUTE");
ROUTE2381.fromField = "fraction_changed";
ROUTE2381.fromNode = "PitchTimer";
ROUTE2381.toField = "set_fraction";
ROUTE2381.toNode = "Pitch_l_thumb1_PitchInterpolator";
Group2325.children[55] = ROUTE2381;

let ROUTE2382 = browser.currentScene.createNode("ROUTE");
ROUTE2382.fromField = "fraction_changed";
ROUTE2382.fromNode = "PitchTimer";
ROUTE2382.toField = "set_fraction";
ROUTE2382.toNode = "Pitch_r_thumb1_PitchInterpolator";
Group2325.children[56] = ROUTE2382;

let ROUTE2383 = browser.currentScene.createNode("ROUTE");
ROUTE2383.fromField = "value_changed";
ROUTE2383.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE2383.toField = "rotation";
ROUTE2383.toNode = "hanim_r_ankle";
Group2325.children[57] = ROUTE2383;

let ROUTE2384 = browser.currentScene.createNode("ROUTE");
ROUTE2384.fromField = "value_changed";
ROUTE2384.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE2384.toField = "rotation";
ROUTE2384.toNode = "hanim_r_knee";
Group2325.children[58] = ROUTE2384;

let ROUTE2385 = browser.currentScene.createNode("ROUTE");
ROUTE2385.fromField = "value_changed";
ROUTE2385.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE2385.toField = "rotation";
ROUTE2385.toNode = "hanim_r_hip";
Group2325.children[59] = ROUTE2385;

let ROUTE2386 = browser.currentScene.createNode("ROUTE");
ROUTE2386.fromField = "value_changed";
ROUTE2386.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE2386.toField = "rotation";
ROUTE2386.toNode = "hanim_l_ankle";
Group2325.children[60] = ROUTE2386;

let ROUTE2387 = browser.currentScene.createNode("ROUTE");
ROUTE2387.fromField = "value_changed";
ROUTE2387.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE2387.toField = "rotation";
ROUTE2387.toNode = "hanim_l_knee";
Group2325.children[61] = ROUTE2387;

let ROUTE2388 = browser.currentScene.createNode("ROUTE");
ROUTE2388.fromField = "value_changed";
ROUTE2388.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE2388.toField = "rotation";
ROUTE2388.toNode = "hanim_l_hip";
Group2325.children[62] = ROUTE2388;

let ROUTE2389 = browser.currentScene.createNode("ROUTE");
ROUTE2389.fromField = "value_changed";
ROUTE2389.fromNode = "Pitches_lower_body_RotationInterpolator";
ROUTE2389.toField = "rotation";
ROUTE2389.toNode = "hanim_sacroiliac";
Group2325.children[63] = ROUTE2389;

let ROUTE2390 = browser.currentScene.createNode("ROUTE");
ROUTE2390.fromField = "value_changed";
ROUTE2390.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE2390.toField = "rotation";
ROUTE2390.toNode = "hanim_r_wrist";
Group2325.children[64] = ROUTE2390;

let ROUTE2391 = browser.currentScene.createNode("ROUTE");
ROUTE2391.fromField = "value_changed";
ROUTE2391.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE2391.toField = "rotation";
ROUTE2391.toNode = "hanim_r_elbow";
Group2325.children[65] = ROUTE2391;

let ROUTE2392 = browser.currentScene.createNode("ROUTE");
ROUTE2392.fromField = "value_changed";
ROUTE2392.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE2392.toField = "rotation";
ROUTE2392.toNode = "hanim_r_shoulder";
Group2325.children[66] = ROUTE2392;

let ROUTE2393 = browser.currentScene.createNode("ROUTE");
ROUTE2393.fromField = "value_changed";
ROUTE2393.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE2393.toField = "rotation";
ROUTE2393.toNode = "hanim_l_wrist";
Group2325.children[67] = ROUTE2393;

let ROUTE2394 = browser.currentScene.createNode("ROUTE");
ROUTE2394.fromField = "value_changed";
ROUTE2394.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE2394.toField = "rotation";
ROUTE2394.toNode = "hanim_l_elbow";
Group2325.children[68] = ROUTE2394;

let ROUTE2395 = browser.currentScene.createNode("ROUTE");
ROUTE2395.fromField = "value_changed";
ROUTE2395.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE2395.toField = "rotation";
ROUTE2395.toNode = "hanim_l_shoulder";
Group2325.children[69] = ROUTE2395;

let ROUTE2396 = browser.currentScene.createNode("ROUTE");
ROUTE2396.fromField = "value_changed";
ROUTE2396.fromNode = "Pitches_head_RotationInterpolator";
ROUTE2396.toField = "rotation";
ROUTE2396.toNode = "hanim_skullbase";
Group2325.children[70] = ROUTE2396;

let ROUTE2397 = browser.currentScene.createNode("ROUTE");
ROUTE2397.fromField = "value_changed";
ROUTE2397.fromNode = "Pitches_neck_RotationInterpolator";
ROUTE2397.toField = "rotation";
ROUTE2397.toNode = "hanim_vc4";
Group2325.children[71] = ROUTE2397;

let ROUTE2398 = browser.currentScene.createNode("ROUTE");
ROUTE2398.fromField = "value_changed";
ROUTE2398.fromNode = "Pitches_upper_body_RotationInterpolator";
ROUTE2398.toField = "rotation";
ROUTE2398.toNode = "hanim_vl1";
Group2325.children[72] = ROUTE2398;

let ROUTE2399 = browser.currentScene.createNode("ROUTE");
ROUTE2399.fromField = "value_changed";
ROUTE2399.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE2399.toField = "rotation";
ROUTE2399.toNode = "hanim_humanoid_root";
Group2325.children[73] = ROUTE2399;

let ROUTE2400 = browser.currentScene.createNode("ROUTE");
ROUTE2400.fromField = "value_changed";
ROUTE2400.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE2400.toField = "translation";
ROUTE2400.toNode = "hanim_humanoid_root";
Group2325.children[74] = ROUTE2400;

let ROUTE2401 = browser.currentScene.createNode("ROUTE");
ROUTE2401.fromField = "value_changed";
ROUTE2401.fromNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE2401.toField = "rotation";
ROUTE2401.toNode = "hanim_l_sternoclavicular";
Group2325.children[75] = ROUTE2401;

let ROUTE2402 = browser.currentScene.createNode("ROUTE");
ROUTE2402.fromField = "value_changed";
ROUTE2402.fromNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE2402.toField = "rotation";
ROUTE2402.toNode = "hanim_l_acromioclavicular";
Group2325.children[76] = ROUTE2402;

let ROUTE2403 = browser.currentScene.createNode("ROUTE");
ROUTE2403.fromField = "value_changed";
ROUTE2403.fromNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE2403.toField = "rotation";
ROUTE2403.toNode = "hanim_r_sternoclavicular";
Group2325.children[77] = ROUTE2403;

let ROUTE2404 = browser.currentScene.createNode("ROUTE");
ROUTE2404.fromField = "value_changed";
ROUTE2404.fromNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE2404.toField = "rotation";
ROUTE2404.toNode = "hanim_r_acromioclavicular";
Group2325.children[78] = ROUTE2404;

let ROUTE2405 = browser.currentScene.createNode("ROUTE");
ROUTE2405.fromField = "value_changed";
ROUTE2405.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2405.toField = "rotation";
ROUTE2405.toNode = "hanim_l_metatarsal";
Group2325.children[79] = ROUTE2405;

let ROUTE2406 = browser.currentScene.createNode("ROUTE");
ROUTE2406.fromField = "value_changed";
ROUTE2406.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2406.toField = "rotation";
ROUTE2406.toNode = "hanim_r_metatarsal";
Group2325.children[80] = ROUTE2406;

let ROUTE2407 = browser.currentScene.createNode("ROUTE");
ROUTE2407.fromField = "value_changed";
ROUTE2407.fromNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE2407.toField = "rotation";
ROUTE2407.toNode = "hanim_sacroiliac";
Group2325.children[81] = ROUTE2407;

let ROUTE2408 = browser.currentScene.createNode("ROUTE");
ROUTE2408.fromField = "value_changed";
ROUTE2408.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE2408.toField = "rotation";
ROUTE2408.toNode = "hanim_vl5";
Group2325.children[82] = ROUTE2408;

let ROUTE2409 = browser.currentScene.createNode("ROUTE");
ROUTE2409.fromField = "value_changed";
ROUTE2409.fromNode = "Pitch_vc6_YawInterpolator";
ROUTE2409.toField = "rotation";
ROUTE2409.toNode = "hanim_vc6";
Group2325.children[83] = ROUTE2409;

let ROUTE2410 = browser.currentScene.createNode("ROUTE");
ROUTE2410.fromField = "value_changed";
ROUTE2410.fromNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE2410.toField = "rotation";
ROUTE2410.toNode = "hanim_l_thumb1";
Group2325.children[84] = ROUTE2410;

let ROUTE2411 = browser.currentScene.createNode("ROUTE");
ROUTE2411.fromField = "value_changed";
ROUTE2411.fromNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE2411.toField = "rotation";
ROUTE2411.toNode = "hanim_r_thumb1";
Group2325.children[85] = ROUTE2411;

browser.currentScene.children[15] = Group2325;

let Group2412 = browser.currentScene.createNode("Group");
Group2412.DEF = "YawsAnimation";
let TimeSensor2413 = browser.currentScene.createNode("TimeSensor");
TimeSensor2413.DEF = "YawTimer";
TimeSensor2413.cycleInterval = 5.73;
TimeSensor2413.loop = True;
Group2412.children = new MFNode();

Group2412.children[0] = TimeSensor2413;

let OrientationInterpolator2414 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2414.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator2414.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2414.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[1] = OrientationInterpolator2414;

let OrientationInterpolator2415 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2415.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator2415.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2415.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2412.children[2] = OrientationInterpolator2415;

let OrientationInterpolator2416 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2416.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator2416.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2416.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2412.children[3] = OrientationInterpolator2416;

let OrientationInterpolator2417 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2417.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator2417.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2417.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[4] = OrientationInterpolator2417;

let OrientationInterpolator2418 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2418.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator2418.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2418.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2412.children[5] = OrientationInterpolator2418;

let OrientationInterpolator2419 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2419.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator2419.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2419.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2412.children[6] = OrientationInterpolator2419;

let OrientationInterpolator2420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2420.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator2420.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2420.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[7] = OrientationInterpolator2420;

let OrientationInterpolator2421 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2421.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator2421.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2421.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[8] = OrientationInterpolator2421;

let OrientationInterpolator2422 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2422.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator2422.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2422.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[9] = OrientationInterpolator2422;

let OrientationInterpolator2423 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2423.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator2423.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2423.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[10] = OrientationInterpolator2423;

let OrientationInterpolator2424 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2424.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator2424.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2424.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[11] = OrientationInterpolator2424;

let OrientationInterpolator2425 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2425.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator2425.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2425.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[12] = OrientationInterpolator2425;

let OrientationInterpolator2426 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2426.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator2426.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2426.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[13] = OrientationInterpolator2426;

let OrientationInterpolator2427 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2427.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator2427.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2427.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[14] = OrientationInterpolator2427;

let OrientationInterpolator2428 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2428.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator2428.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2428.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2412.children[15] = OrientationInterpolator2428;

let OrientationInterpolator2429 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2429.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator2429.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2429.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2412.children[16] = OrientationInterpolator2429;

let OrientationInterpolator2430 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2430.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator2430.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2430.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[17] = OrientationInterpolator2430;

let OrientationInterpolator2431 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2431.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator2431.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2431.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[18] = OrientationInterpolator2431;

let PositionInterpolator2432 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2432.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator2432.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2432.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2412.children[19] = PositionInterpolator2432;

let OrientationInterpolator2433 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2433.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2433.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2433.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[20] = OrientationInterpolator2433;

let OrientationInterpolator2434 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2434.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2434.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2434.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[21] = OrientationInterpolator2434;

let OrientationInterpolator2435 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2435.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2435.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2435.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[22] = OrientationInterpolator2435;

let OrientationInterpolator2436 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2436.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2436.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2436.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[23] = OrientationInterpolator2436;

let OrientationInterpolator2437 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2437.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator2437.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2437.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group2412.children[24] = OrientationInterpolator2437;

let OrientationInterpolator2438 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2438.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator2438.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2438.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[25] = OrientationInterpolator2438;

let OrientationInterpolator2439 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2439.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator2439.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2439.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[26] = OrientationInterpolator2439;

let OrientationInterpolator2440 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2440.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator2440.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2440.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[27] = OrientationInterpolator2440;

let OrientationInterpolator2441 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2441.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator2441.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2441.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[28] = OrientationInterpolator2441;

let ROUTE2442 = browser.currentScene.createNode("ROUTE");
ROUTE2442.fromField = "fraction_changed";
ROUTE2442.fromNode = "YawTimer";
ROUTE2442.toField = "set_fraction";
ROUTE2442.toNode = "Yaws_r_ankle_RotationInterpolator";
Group2412.children[29] = ROUTE2442;

let ROUTE2443 = browser.currentScene.createNode("ROUTE");
ROUTE2443.fromField = "fraction_changed";
ROUTE2443.fromNode = "YawTimer";
ROUTE2443.toField = "set_fraction";
ROUTE2443.toNode = "Yaws_r_knee_RotationInterpolator";
Group2412.children[30] = ROUTE2443;

let ROUTE2444 = browser.currentScene.createNode("ROUTE");
ROUTE2444.fromField = "fraction_changed";
ROUTE2444.fromNode = "YawTimer";
ROUTE2444.toField = "set_fraction";
ROUTE2444.toNode = "Yaws_r_hip_RotationInterpolator";
Group2412.children[31] = ROUTE2444;

let ROUTE2445 = browser.currentScene.createNode("ROUTE");
ROUTE2445.fromField = "fraction_changed";
ROUTE2445.fromNode = "YawTimer";
ROUTE2445.toField = "set_fraction";
ROUTE2445.toNode = "Yaws_l_ankle_RotationInterpolator";
Group2412.children[32] = ROUTE2445;

let ROUTE2446 = browser.currentScene.createNode("ROUTE");
ROUTE2446.fromField = "fraction_changed";
ROUTE2446.fromNode = "YawTimer";
ROUTE2446.toField = "set_fraction";
ROUTE2446.toNode = "Yaws_l_knee_RotationInterpolator";
Group2412.children[33] = ROUTE2446;

let ROUTE2447 = browser.currentScene.createNode("ROUTE");
ROUTE2447.fromField = "fraction_changed";
ROUTE2447.fromNode = "YawTimer";
ROUTE2447.toField = "set_fraction";
ROUTE2447.toNode = "Yaws_l_hip_RotationInterpolator";
Group2412.children[34] = ROUTE2447;

let ROUTE2448 = browser.currentScene.createNode("ROUTE");
ROUTE2448.fromField = "fraction_changed";
ROUTE2448.fromNode = "YawTimer";
ROUTE2448.toField = "set_fraction";
ROUTE2448.toNode = "Yaws_lower_body_RotationInterpolator";
Group2412.children[35] = ROUTE2448;

let ROUTE2449 = browser.currentScene.createNode("ROUTE");
ROUTE2449.fromField = "fraction_changed";
ROUTE2449.fromNode = "YawTimer";
ROUTE2449.toField = "set_fraction";
ROUTE2449.toNode = "Yaws_r_wrist_RotationInterpolator";
Group2412.children[36] = ROUTE2449;

let ROUTE2450 = browser.currentScene.createNode("ROUTE");
ROUTE2450.fromField = "fraction_changed";
ROUTE2450.fromNode = "YawTimer";
ROUTE2450.toField = "set_fraction";
ROUTE2450.toNode = "Yaws_r_elbow_RotationInterpolator";
Group2412.children[37] = ROUTE2450;

let ROUTE2451 = browser.currentScene.createNode("ROUTE");
ROUTE2451.fromField = "fraction_changed";
ROUTE2451.fromNode = "YawTimer";
ROUTE2451.toField = "set_fraction";
ROUTE2451.toNode = "Yaws_r_shoulder_RotationInterpolator";
Group2412.children[38] = ROUTE2451;

let ROUTE2452 = browser.currentScene.createNode("ROUTE");
ROUTE2452.fromField = "fraction_changed";
ROUTE2452.fromNode = "YawTimer";
ROUTE2452.toField = "set_fraction";
ROUTE2452.toNode = "Yaws_l_wrist_RotationInterpolator";
Group2412.children[39] = ROUTE2452;

let ROUTE2453 = browser.currentScene.createNode("ROUTE");
ROUTE2453.fromField = "fraction_changed";
ROUTE2453.fromNode = "YawTimer";
ROUTE2453.toField = "set_fraction";
ROUTE2453.toNode = "Yaws_l_elbow_RotationInterpolator";
Group2412.children[40] = ROUTE2453;

let ROUTE2454 = browser.currentScene.createNode("ROUTE");
ROUTE2454.fromField = "fraction_changed";
ROUTE2454.fromNode = "YawTimer";
ROUTE2454.toField = "set_fraction";
ROUTE2454.toNode = "Yaws_l_shoulder_RotationInterpolator";
Group2412.children[41] = ROUTE2454;

let ROUTE2455 = browser.currentScene.createNode("ROUTE");
ROUTE2455.fromField = "fraction_changed";
ROUTE2455.fromNode = "YawTimer";
ROUTE2455.toField = "set_fraction";
ROUTE2455.toNode = "Yaws_head_RotationInterpolator";
Group2412.children[42] = ROUTE2455;

let ROUTE2456 = browser.currentScene.createNode("ROUTE");
ROUTE2456.fromField = "fraction_changed";
ROUTE2456.fromNode = "YawTimer";
ROUTE2456.toField = "set_fraction";
ROUTE2456.toNode = "Yaws_neck_RotationInterpolator";
Group2412.children[43] = ROUTE2456;

let ROUTE2457 = browser.currentScene.createNode("ROUTE");
ROUTE2457.fromField = "fraction_changed";
ROUTE2457.fromNode = "YawTimer";
ROUTE2457.toField = "set_fraction";
ROUTE2457.toNode = "Yaws_upper_body_RotationInterpolator";
Group2412.children[44] = ROUTE2457;

let ROUTE2458 = browser.currentScene.createNode("ROUTE");
ROUTE2458.fromField = "fraction_changed";
ROUTE2458.fromNode = "YawTimer";
ROUTE2458.toField = "set_fraction";
ROUTE2458.toNode = "Yaws_whole_body_RotationInterpolator";
Group2412.children[45] = ROUTE2458;

let ROUTE2459 = browser.currentScene.createNode("ROUTE");
ROUTE2459.fromField = "fraction_changed";
ROUTE2459.fromNode = "YawTimer";
ROUTE2459.toField = "set_fraction";
ROUTE2459.toNode = "Yaws_whole_body_TranslationInterpolator";
Group2412.children[46] = ROUTE2459;

let ROUTE2460 = browser.currentScene.createNode("ROUTE");
ROUTE2460.fromField = "fraction_changed";
ROUTE2460.fromNode = "YawTimer";
ROUTE2460.toField = "set_fraction";
ROUTE2460.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
Group2412.children[47] = ROUTE2460;

let ROUTE2461 = browser.currentScene.createNode("ROUTE");
ROUTE2461.fromField = "fraction_changed";
ROUTE2461.fromNode = "YawTimer";
ROUTE2461.toField = "set_fraction";
ROUTE2461.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
Group2412.children[48] = ROUTE2461;

let ROUTE2462 = browser.currentScene.createNode("ROUTE");
ROUTE2462.fromField = "fraction_changed";
ROUTE2462.fromNode = "YawTimer";
ROUTE2462.toField = "set_fraction";
ROUTE2462.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
Group2412.children[49] = ROUTE2462;

let ROUTE2463 = browser.currentScene.createNode("ROUTE");
ROUTE2463.fromField = "fraction_changed";
ROUTE2463.fromNode = "YawTimer";
ROUTE2463.toField = "set_fraction";
ROUTE2463.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
Group2412.children[50] = ROUTE2463;

let ROUTE2464 = browser.currentScene.createNode("ROUTE");
ROUTE2464.fromField = "fraction_changed";
ROUTE2464.fromNode = "YawTimer";
ROUTE2464.toField = "set_fraction";
ROUTE2464.toNode = "Yaw_r_metatarsal_PitchInterpolator";
Group2412.children[51] = ROUTE2464;

let ROUTE2465 = browser.currentScene.createNode("ROUTE");
ROUTE2465.fromField = "fraction_changed";
ROUTE2465.fromNode = "YawTimer";
ROUTE2465.toField = "set_fraction";
ROUTE2465.toNode = "Yaw_sacroiliac_YawInterpolator";
Group2412.children[52] = ROUTE2465;

let ROUTE2466 = browser.currentScene.createNode("ROUTE");
ROUTE2466.fromField = "fraction_changed";
ROUTE2466.fromNode = "YawTimer";
ROUTE2466.toField = "set_fraction";
ROUTE2466.toNode = "Yaw_vl5_YawInterpolator";
Group2412.children[53] = ROUTE2466;

let ROUTE2467 = browser.currentScene.createNode("ROUTE");
ROUTE2467.fromField = "fraction_changed";
ROUTE2467.fromNode = "YawTimer";
ROUTE2467.toField = "set_fraction";
ROUTE2467.toNode = "Yaw_vc6_YawInterpolator";
Group2412.children[54] = ROUTE2467;

let ROUTE2468 = browser.currentScene.createNode("ROUTE");
ROUTE2468.fromField = "fraction_changed";
ROUTE2468.fromNode = "YawTimer";
ROUTE2468.toField = "set_fraction";
ROUTE2468.toNode = "Yaw_l_thumb1_PitchInterpolator";
Group2412.children[55] = ROUTE2468;

let ROUTE2469 = browser.currentScene.createNode("ROUTE");
ROUTE2469.fromField = "fraction_changed";
ROUTE2469.fromNode = "YawTimer";
ROUTE2469.toField = "set_fraction";
ROUTE2469.toNode = "Yaw_r_thumb1_PitchInterpolator";
Group2412.children[56] = ROUTE2469;

let ROUTE2470 = browser.currentScene.createNode("ROUTE");
ROUTE2470.fromField = "value_changed";
ROUTE2470.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE2470.toField = "rotation";
ROUTE2470.toNode = "hanim_r_ankle";
Group2412.children[57] = ROUTE2470;

let ROUTE2471 = browser.currentScene.createNode("ROUTE");
ROUTE2471.fromField = "value_changed";
ROUTE2471.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE2471.toField = "rotation";
ROUTE2471.toNode = "hanim_r_knee";
Group2412.children[58] = ROUTE2471;

let ROUTE2472 = browser.currentScene.createNode("ROUTE");
ROUTE2472.fromField = "value_changed";
ROUTE2472.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE2472.toField = "rotation";
ROUTE2472.toNode = "hanim_r_hip";
Group2412.children[59] = ROUTE2472;

let ROUTE2473 = browser.currentScene.createNode("ROUTE");
ROUTE2473.fromField = "value_changed";
ROUTE2473.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE2473.toField = "rotation";
ROUTE2473.toNode = "hanim_l_ankle";
Group2412.children[60] = ROUTE2473;

let ROUTE2474 = browser.currentScene.createNode("ROUTE");
ROUTE2474.fromField = "value_changed";
ROUTE2474.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE2474.toField = "rotation";
ROUTE2474.toNode = "hanim_l_knee";
Group2412.children[61] = ROUTE2474;

let ROUTE2475 = browser.currentScene.createNode("ROUTE");
ROUTE2475.fromField = "value_changed";
ROUTE2475.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE2475.toField = "rotation";
ROUTE2475.toNode = "hanim_l_hip";
Group2412.children[62] = ROUTE2475;

let ROUTE2476 = browser.currentScene.createNode("ROUTE");
ROUTE2476.fromField = "value_changed";
ROUTE2476.fromNode = "Yaws_lower_body_RotationInterpolator";
ROUTE2476.toField = "rotation";
ROUTE2476.toNode = "hanim_sacroiliac";
Group2412.children[63] = ROUTE2476;

let ROUTE2477 = browser.currentScene.createNode("ROUTE");
ROUTE2477.fromField = "value_changed";
ROUTE2477.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE2477.toField = "rotation";
ROUTE2477.toNode = "hanim_r_wrist";
Group2412.children[64] = ROUTE2477;

let ROUTE2478 = browser.currentScene.createNode("ROUTE");
ROUTE2478.fromField = "value_changed";
ROUTE2478.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE2478.toField = "rotation";
ROUTE2478.toNode = "hanim_r_elbow";
Group2412.children[65] = ROUTE2478;

let ROUTE2479 = browser.currentScene.createNode("ROUTE");
ROUTE2479.fromField = "value_changed";
ROUTE2479.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE2479.toField = "rotation";
ROUTE2479.toNode = "hanim_r_shoulder";
Group2412.children[66] = ROUTE2479;

let ROUTE2480 = browser.currentScene.createNode("ROUTE");
ROUTE2480.fromField = "value_changed";
ROUTE2480.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE2480.toField = "rotation";
ROUTE2480.toNode = "hanim_l_wrist";
Group2412.children[67] = ROUTE2480;

let ROUTE2481 = browser.currentScene.createNode("ROUTE");
ROUTE2481.fromField = "value_changed";
ROUTE2481.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE2481.toField = "rotation";
ROUTE2481.toNode = "hanim_l_elbow";
Group2412.children[68] = ROUTE2481;

let ROUTE2482 = browser.currentScene.createNode("ROUTE");
ROUTE2482.fromField = "value_changed";
ROUTE2482.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE2482.toField = "rotation";
ROUTE2482.toNode = "hanim_l_shoulder";
Group2412.children[69] = ROUTE2482;

let ROUTE2483 = browser.currentScene.createNode("ROUTE");
ROUTE2483.fromField = "value_changed";
ROUTE2483.fromNode = "Yaws_head_RotationInterpolator";
ROUTE2483.toField = "rotation";
ROUTE2483.toNode = "hanim_skullbase";
Group2412.children[70] = ROUTE2483;

let ROUTE2484 = browser.currentScene.createNode("ROUTE");
ROUTE2484.fromField = "value_changed";
ROUTE2484.fromNode = "Yaws_neck_RotationInterpolator";
ROUTE2484.toField = "rotation";
ROUTE2484.toNode = "hanim_vc4";
Group2412.children[71] = ROUTE2484;

let ROUTE2485 = browser.currentScene.createNode("ROUTE");
ROUTE2485.fromField = "value_changed";
ROUTE2485.fromNode = "Yaws_upper_body_RotationInterpolator";
ROUTE2485.toField = "rotation";
ROUTE2485.toNode = "hanim_vl1";
Group2412.children[72] = ROUTE2485;

let ROUTE2486 = browser.currentScene.createNode("ROUTE");
ROUTE2486.fromField = "value_changed";
ROUTE2486.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE2486.toField = "rotation";
ROUTE2486.toNode = "hanim_humanoid_root";
Group2412.children[73] = ROUTE2486;

let ROUTE2487 = browser.currentScene.createNode("ROUTE");
ROUTE2487.fromField = "value_changed";
ROUTE2487.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE2487.toField = "translation";
ROUTE2487.toNode = "hanim_humanoid_root";
Group2412.children[74] = ROUTE2487;

let ROUTE2488 = browser.currentScene.createNode("ROUTE");
ROUTE2488.fromField = "value_changed";
ROUTE2488.fromNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE2488.toField = "rotation";
ROUTE2488.toNode = "hanim_l_sternoclavicular";
Group2412.children[75] = ROUTE2488;

let ROUTE2489 = browser.currentScene.createNode("ROUTE");
ROUTE2489.fromField = "value_changed";
ROUTE2489.fromNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE2489.toField = "rotation";
ROUTE2489.toNode = "hanim_l_acromioclavicular";
Group2412.children[76] = ROUTE2489;

let ROUTE2490 = browser.currentScene.createNode("ROUTE");
ROUTE2490.fromField = "value_changed";
ROUTE2490.fromNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE2490.toField = "rotation";
ROUTE2490.toNode = "hanim_r_sternoclavicular";
Group2412.children[77] = ROUTE2490;

let ROUTE2491 = browser.currentScene.createNode("ROUTE");
ROUTE2491.fromField = "value_changed";
ROUTE2491.fromNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE2491.toField = "rotation";
ROUTE2491.toNode = "hanim_r_acromioclavicular";
Group2412.children[78] = ROUTE2491;

let ROUTE2492 = browser.currentScene.createNode("ROUTE");
ROUTE2492.fromField = "value_changed";
ROUTE2492.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2492.toField = "rotation";
ROUTE2492.toNode = "hanim_l_metatarsal";
Group2412.children[79] = ROUTE2492;

let ROUTE2493 = browser.currentScene.createNode("ROUTE");
ROUTE2493.fromField = "value_changed";
ROUTE2493.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2493.toField = "rotation";
ROUTE2493.toNode = "hanim_r_metatarsal";
Group2412.children[80] = ROUTE2493;

let ROUTE2494 = browser.currentScene.createNode("ROUTE");
ROUTE2494.fromField = "value_changed";
ROUTE2494.fromNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE2494.toField = "rotation";
ROUTE2494.toNode = "hanim_sacroiliac";
Group2412.children[81] = ROUTE2494;

let ROUTE2495 = browser.currentScene.createNode("ROUTE");
ROUTE2495.fromField = "value_changed";
ROUTE2495.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE2495.toField = "rotation";
ROUTE2495.toNode = "hanim_vl5";
Group2412.children[82] = ROUTE2495;

let ROUTE2496 = browser.currentScene.createNode("ROUTE");
ROUTE2496.fromField = "value_changed";
ROUTE2496.fromNode = "Yaw_vc6_YawInterpolator";
ROUTE2496.toField = "rotation";
ROUTE2496.toNode = "hanim_vc6";
Group2412.children[83] = ROUTE2496;

let ROUTE2497 = browser.currentScene.createNode("ROUTE");
ROUTE2497.fromField = "value_changed";
ROUTE2497.fromNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE2497.toField = "rotation";
ROUTE2497.toNode = "hanim_l_thumb1";
Group2412.children[84] = ROUTE2497;

let ROUTE2498 = browser.currentScene.createNode("ROUTE");
ROUTE2498.fromField = "value_changed";
ROUTE2498.fromNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE2498.toField = "rotation";
ROUTE2498.toNode = "hanim_r_thumb1";
Group2412.children[85] = ROUTE2498;

browser.currentScene.children[16] = Group2412;

let Group2499 = browser.currentScene.createNode("Group");
Group2499.DEF = "RollsAnimation";
let TimeSensor2500 = browser.currentScene.createNode("TimeSensor");
TimeSensor2500.DEF = "RollTimer";
TimeSensor2500.cycleInterval = 5.73;
TimeSensor2500.loop = True;
Group2499.children = new MFNode();

Group2499.children[0] = TimeSensor2500;

let OrientationInterpolator2501 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2501.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator2501.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2501.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[1] = OrientationInterpolator2501;

let OrientationInterpolator2502 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2502.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator2502.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2502.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2499.children[2] = OrientationInterpolator2502;

let OrientationInterpolator2503 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2503.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator2503.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2503.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[3] = OrientationInterpolator2503;

let OrientationInterpolator2504 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2504.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator2504.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2504.keyValue = new MFRotation(new float[0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2499.children[4] = OrientationInterpolator2504;

let OrientationInterpolator2505 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2505.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator2505.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2505.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2499.children[5] = OrientationInterpolator2505;

let OrientationInterpolator2506 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2506.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator2506.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2506.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[6] = OrientationInterpolator2506;

let OrientationInterpolator2507 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2507.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator2507.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2507.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2499.children[7] = OrientationInterpolator2507;

let OrientationInterpolator2508 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2508.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator2508.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2508.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2499.children[8] = OrientationInterpolator2508;

let OrientationInterpolator2509 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2509.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator2509.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2509.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[9] = OrientationInterpolator2509;

let OrientationInterpolator2510 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2510.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator2510.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2510.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group2499.children[10] = OrientationInterpolator2510;

let OrientationInterpolator2511 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2511.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator2511.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2511.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2499.children[11] = OrientationInterpolator2511;

let OrientationInterpolator2512 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2512.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator2512.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2512.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[12] = OrientationInterpolator2512;

let OrientationInterpolator2513 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2513.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator2513.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2513.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group2499.children[13] = OrientationInterpolator2513;

let OrientationInterpolator2514 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2514.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator2514.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2514.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[14] = OrientationInterpolator2514;

let OrientationInterpolator2515 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2515.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator2515.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2515.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group2499.children[15] = OrientationInterpolator2515;

let OrientationInterpolator2516 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2516.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator2516.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2516.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[16] = OrientationInterpolator2516;

let OrientationInterpolator2517 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2517.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator2517.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2517.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[17] = OrientationInterpolator2517;

let OrientationInterpolator2518 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2518.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator2518.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2518.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[18] = OrientationInterpolator2518;

let PositionInterpolator2519 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2519.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator2519.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2519.keyValue = new MFVec3f(new float[0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group2499.children[19] = PositionInterpolator2519;

let OrientationInterpolator2520 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2520.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2520.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2520.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2499.children[20] = OrientationInterpolator2520;

let OrientationInterpolator2521 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2521.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2521.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2521.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[21] = OrientationInterpolator2521;

let OrientationInterpolator2522 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2522.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2522.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2522.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2499.children[22] = OrientationInterpolator2522;

let OrientationInterpolator2523 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2523.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2523.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2523.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[23] = OrientationInterpolator2523;

let OrientationInterpolator2524 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2524.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator2524.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2524.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[24] = OrientationInterpolator2524;

let OrientationInterpolator2525 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2525.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator2525.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2525.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[25] = OrientationInterpolator2525;

let OrientationInterpolator2526 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2526.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator2526.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2526.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[26] = OrientationInterpolator2526;

let OrientationInterpolator2527 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2527.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator2527.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2527.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[27] = OrientationInterpolator2527;

let OrientationInterpolator2528 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2528.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator2528.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2528.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[28] = OrientationInterpolator2528;

let ROUTE2529 = browser.currentScene.createNode("ROUTE");
ROUTE2529.fromField = "fraction_changed";
ROUTE2529.fromNode = "RollTimer";
ROUTE2529.toField = "set_fraction";
ROUTE2529.toNode = "Rolls_r_ankle_RotationInterpolator";
Group2499.children[29] = ROUTE2529;

let ROUTE2530 = browser.currentScene.createNode("ROUTE");
ROUTE2530.fromField = "fraction_changed";
ROUTE2530.fromNode = "RollTimer";
ROUTE2530.toField = "set_fraction";
ROUTE2530.toNode = "Rolls_r_knee_RotationInterpolator";
Group2499.children[30] = ROUTE2530;

let ROUTE2531 = browser.currentScene.createNode("ROUTE");
ROUTE2531.fromField = "fraction_changed";
ROUTE2531.fromNode = "RollTimer";
ROUTE2531.toField = "set_fraction";
ROUTE2531.toNode = "Rolls_r_hip_RotationInterpolator";
Group2499.children[31] = ROUTE2531;

let ROUTE2532 = browser.currentScene.createNode("ROUTE");
ROUTE2532.fromField = "fraction_changed";
ROUTE2532.fromNode = "RollTimer";
ROUTE2532.toField = "set_fraction";
ROUTE2532.toNode = "Rolls_l_ankle_RotationInterpolator";
Group2499.children[32] = ROUTE2532;

let ROUTE2533 = browser.currentScene.createNode("ROUTE");
ROUTE2533.fromField = "fraction_changed";
ROUTE2533.fromNode = "RollTimer";
ROUTE2533.toField = "set_fraction";
ROUTE2533.toNode = "Rolls_l_knee_RotationInterpolator";
Group2499.children[33] = ROUTE2533;

let ROUTE2534 = browser.currentScene.createNode("ROUTE");
ROUTE2534.fromField = "fraction_changed";
ROUTE2534.fromNode = "RollTimer";
ROUTE2534.toField = "set_fraction";
ROUTE2534.toNode = "Rolls_l_hip_RotationInterpolator";
Group2499.children[34] = ROUTE2534;

let ROUTE2535 = browser.currentScene.createNode("ROUTE");
ROUTE2535.fromField = "fraction_changed";
ROUTE2535.fromNode = "RollTimer";
ROUTE2535.toField = "set_fraction";
ROUTE2535.toNode = "Rolls_lower_body_RotationInterpolator";
Group2499.children[35] = ROUTE2535;

let ROUTE2536 = browser.currentScene.createNode("ROUTE");
ROUTE2536.fromField = "fraction_changed";
ROUTE2536.fromNode = "RollTimer";
ROUTE2536.toField = "set_fraction";
ROUTE2536.toNode = "Rolls_r_wrist_RotationInterpolator";
Group2499.children[36] = ROUTE2536;

let ROUTE2537 = browser.currentScene.createNode("ROUTE");
ROUTE2537.fromField = "fraction_changed";
ROUTE2537.fromNode = "RollTimer";
ROUTE2537.toField = "set_fraction";
ROUTE2537.toNode = "Rolls_r_elbow_RotationInterpolator";
Group2499.children[37] = ROUTE2537;

let ROUTE2538 = browser.currentScene.createNode("ROUTE");
ROUTE2538.fromField = "fraction_changed";
ROUTE2538.fromNode = "RollTimer";
ROUTE2538.toField = "set_fraction";
ROUTE2538.toNode = "Rolls_r_shoulder_RotationInterpolator";
Group2499.children[38] = ROUTE2538;

let ROUTE2539 = browser.currentScene.createNode("ROUTE");
ROUTE2539.fromField = "fraction_changed";
ROUTE2539.fromNode = "RollTimer";
ROUTE2539.toField = "set_fraction";
ROUTE2539.toNode = "Rolls_l_wrist_RotationInterpolator";
Group2499.children[39] = ROUTE2539;

let ROUTE2540 = browser.currentScene.createNode("ROUTE");
ROUTE2540.fromField = "fraction_changed";
ROUTE2540.fromNode = "RollTimer";
ROUTE2540.toField = "set_fraction";
ROUTE2540.toNode = "Rolls_l_elbow_RotationInterpolator";
Group2499.children[40] = ROUTE2540;

let ROUTE2541 = browser.currentScene.createNode("ROUTE");
ROUTE2541.fromField = "fraction_changed";
ROUTE2541.fromNode = "RollTimer";
ROUTE2541.toField = "set_fraction";
ROUTE2541.toNode = "Rolls_l_shoulder_RotationInterpolator";
Group2499.children[41] = ROUTE2541;

let ROUTE2542 = browser.currentScene.createNode("ROUTE");
ROUTE2542.fromField = "fraction_changed";
ROUTE2542.fromNode = "RollTimer";
ROUTE2542.toField = "set_fraction";
ROUTE2542.toNode = "Rolls_head_RotationInterpolator";
Group2499.children[42] = ROUTE2542;

let ROUTE2543 = browser.currentScene.createNode("ROUTE");
ROUTE2543.fromField = "fraction_changed";
ROUTE2543.fromNode = "RollTimer";
ROUTE2543.toField = "set_fraction";
ROUTE2543.toNode = "Rolls_neck_RotationInterpolator";
Group2499.children[43] = ROUTE2543;

let ROUTE2544 = browser.currentScene.createNode("ROUTE");
ROUTE2544.fromField = "fraction_changed";
ROUTE2544.fromNode = "RollTimer";
ROUTE2544.toField = "set_fraction";
ROUTE2544.toNode = "Rolls_upper_body_RotationInterpolator";
Group2499.children[44] = ROUTE2544;

let ROUTE2545 = browser.currentScene.createNode("ROUTE");
ROUTE2545.fromField = "fraction_changed";
ROUTE2545.fromNode = "RollTimer";
ROUTE2545.toField = "set_fraction";
ROUTE2545.toNode = "Rolls_whole_body_RotationInterpolator";
Group2499.children[45] = ROUTE2545;

let ROUTE2546 = browser.currentScene.createNode("ROUTE");
ROUTE2546.fromField = "fraction_changed";
ROUTE2546.fromNode = "RollTimer";
ROUTE2546.toField = "set_fraction";
ROUTE2546.toNode = "Rolls_whole_body_TranslationInterpolator";
Group2499.children[46] = ROUTE2546;

let ROUTE2547 = browser.currentScene.createNode("ROUTE");
ROUTE2547.fromField = "fraction_changed";
ROUTE2547.fromNode = "RollTimer";
ROUTE2547.toField = "set_fraction";
ROUTE2547.toNode = "Roll_l_sternoclavicular_RollInterpolator";
Group2499.children[47] = ROUTE2547;

let ROUTE2548 = browser.currentScene.createNode("ROUTE");
ROUTE2548.fromField = "fraction_changed";
ROUTE2548.fromNode = "RollTimer";
ROUTE2548.toField = "set_fraction";
ROUTE2548.toNode = "Roll_l_acromioclavicular_RollInterpolator";
Group2499.children[48] = ROUTE2548;

let ROUTE2549 = browser.currentScene.createNode("ROUTE");
ROUTE2549.fromField = "fraction_changed";
ROUTE2549.fromNode = "RollTimer";
ROUTE2549.toField = "set_fraction";
ROUTE2549.toNode = "Roll_r_sternoclavicular_RollInterpolator";
Group2499.children[49] = ROUTE2549;

let ROUTE2550 = browser.currentScene.createNode("ROUTE");
ROUTE2550.fromField = "fraction_changed";
ROUTE2550.fromNode = "RollTimer";
ROUTE2550.toField = "set_fraction";
ROUTE2550.toNode = "Roll_r_acromioclavicular_RollInterpolator";
Group2499.children[50] = ROUTE2550;

let ROUTE2551 = browser.currentScene.createNode("ROUTE");
ROUTE2551.fromField = "fraction_changed";
ROUTE2551.fromNode = "RollTimer";
ROUTE2551.toField = "set_fraction";
ROUTE2551.toNode = "Roll_r_metatarsal_PitchInterpolator";
Group2499.children[51] = ROUTE2551;

let ROUTE2552 = browser.currentScene.createNode("ROUTE");
ROUTE2552.fromField = "fraction_changed";
ROUTE2552.fromNode = "RollTimer";
ROUTE2552.toField = "set_fraction";
ROUTE2552.toNode = "Roll_sacroiliac_YawInterpolator";
Group2499.children[52] = ROUTE2552;

let ROUTE2553 = browser.currentScene.createNode("ROUTE");
ROUTE2553.fromField = "fraction_changed";
ROUTE2553.fromNode = "RollTimer";
ROUTE2553.toField = "set_fraction";
ROUTE2553.toNode = "Roll_vl5_YawInterpolator";
Group2499.children[53] = ROUTE2553;

let ROUTE2554 = browser.currentScene.createNode("ROUTE");
ROUTE2554.fromField = "fraction_changed";
ROUTE2554.fromNode = "RollTimer";
ROUTE2554.toField = "set_fraction";
ROUTE2554.toNode = "Roll_vc6_YawInterpolator";
Group2499.children[54] = ROUTE2554;

let ROUTE2555 = browser.currentScene.createNode("ROUTE");
ROUTE2555.fromField = "fraction_changed";
ROUTE2555.fromNode = "RollTimer";
ROUTE2555.toField = "set_fraction";
ROUTE2555.toNode = "Roll_l_thumb1_PitchInterpolator";
Group2499.children[55] = ROUTE2555;

let ROUTE2556 = browser.currentScene.createNode("ROUTE");
ROUTE2556.fromField = "fraction_changed";
ROUTE2556.fromNode = "RollTimer";
ROUTE2556.toField = "set_fraction";
ROUTE2556.toNode = "Roll_r_thumb1_PitchInterpolator";
Group2499.children[56] = ROUTE2556;

let ROUTE2557 = browser.currentScene.createNode("ROUTE");
ROUTE2557.fromField = "value_changed";
ROUTE2557.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE2557.toField = "rotation";
ROUTE2557.toNode = "hanim_r_ankle";
Group2499.children[57] = ROUTE2557;

let ROUTE2558 = browser.currentScene.createNode("ROUTE");
ROUTE2558.fromField = "value_changed";
ROUTE2558.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE2558.toField = "rotation";
ROUTE2558.toNode = "hanim_r_knee";
Group2499.children[58] = ROUTE2558;

let ROUTE2559 = browser.currentScene.createNode("ROUTE");
ROUTE2559.fromField = "value_changed";
ROUTE2559.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE2559.toField = "rotation";
ROUTE2559.toNode = "hanim_r_hip";
Group2499.children[59] = ROUTE2559;

let ROUTE2560 = browser.currentScene.createNode("ROUTE");
ROUTE2560.fromField = "value_changed";
ROUTE2560.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE2560.toField = "rotation";
ROUTE2560.toNode = "hanim_l_ankle";
Group2499.children[60] = ROUTE2560;

let ROUTE2561 = browser.currentScene.createNode("ROUTE");
ROUTE2561.fromField = "value_changed";
ROUTE2561.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE2561.toField = "rotation";
ROUTE2561.toNode = "hanim_l_knee";
Group2499.children[61] = ROUTE2561;

let ROUTE2562 = browser.currentScene.createNode("ROUTE");
ROUTE2562.fromField = "value_changed";
ROUTE2562.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE2562.toField = "rotation";
ROUTE2562.toNode = "hanim_l_hip";
Group2499.children[62] = ROUTE2562;

let ROUTE2563 = browser.currentScene.createNode("ROUTE");
ROUTE2563.fromField = "value_changed";
ROUTE2563.fromNode = "Rolls_lower_body_RotationInterpolator";
ROUTE2563.toField = "rotation";
ROUTE2563.toNode = "hanim_sacroiliac";
Group2499.children[63] = ROUTE2563;

let ROUTE2564 = browser.currentScene.createNode("ROUTE");
ROUTE2564.fromField = "value_changed";
ROUTE2564.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE2564.toField = "rotation";
ROUTE2564.toNode = "hanim_r_wrist";
Group2499.children[64] = ROUTE2564;

let ROUTE2565 = browser.currentScene.createNode("ROUTE");
ROUTE2565.fromField = "value_changed";
ROUTE2565.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE2565.toField = "rotation";
ROUTE2565.toNode = "hanim_r_elbow";
Group2499.children[65] = ROUTE2565;

let ROUTE2566 = browser.currentScene.createNode("ROUTE");
ROUTE2566.fromField = "value_changed";
ROUTE2566.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE2566.toField = "rotation";
ROUTE2566.toNode = "hanim_r_shoulder";
Group2499.children[66] = ROUTE2566;

let ROUTE2567 = browser.currentScene.createNode("ROUTE");
ROUTE2567.fromField = "value_changed";
ROUTE2567.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE2567.toField = "rotation";
ROUTE2567.toNode = "hanim_l_wrist";
Group2499.children[67] = ROUTE2567;

let ROUTE2568 = browser.currentScene.createNode("ROUTE");
ROUTE2568.fromField = "value_changed";
ROUTE2568.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE2568.toField = "rotation";
ROUTE2568.toNode = "hanim_l_elbow";
Group2499.children[68] = ROUTE2568;

let ROUTE2569 = browser.currentScene.createNode("ROUTE");
ROUTE2569.fromField = "value_changed";
ROUTE2569.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE2569.toField = "rotation";
ROUTE2569.toNode = "hanim_l_shoulder";
Group2499.children[69] = ROUTE2569;

let ROUTE2570 = browser.currentScene.createNode("ROUTE");
ROUTE2570.fromField = "value_changed";
ROUTE2570.fromNode = "Rolls_head_RotationInterpolator";
ROUTE2570.toField = "rotation";
ROUTE2570.toNode = "hanim_skullbase";
Group2499.children[70] = ROUTE2570;

let ROUTE2571 = browser.currentScene.createNode("ROUTE");
ROUTE2571.fromField = "value_changed";
ROUTE2571.fromNode = "Rolls_neck_RotationInterpolator";
ROUTE2571.toField = "rotation";
ROUTE2571.toNode = "hanim_vc4";
Group2499.children[71] = ROUTE2571;

let ROUTE2572 = browser.currentScene.createNode("ROUTE");
ROUTE2572.fromField = "value_changed";
ROUTE2572.fromNode = "Rolls_upper_body_RotationInterpolator";
ROUTE2572.toField = "rotation";
ROUTE2572.toNode = "hanim_vl1";
Group2499.children[72] = ROUTE2572;

let ROUTE2573 = browser.currentScene.createNode("ROUTE");
ROUTE2573.fromField = "value_changed";
ROUTE2573.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE2573.toField = "rotation";
ROUTE2573.toNode = "hanim_humanoid_root";
Group2499.children[73] = ROUTE2573;

let ROUTE2574 = browser.currentScene.createNode("ROUTE");
ROUTE2574.fromField = "value_changed";
ROUTE2574.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE2574.toField = "translation";
ROUTE2574.toNode = "hanim_humanoid_root";
Group2499.children[74] = ROUTE2574;

let ROUTE2575 = browser.currentScene.createNode("ROUTE");
ROUTE2575.fromField = "value_changed";
ROUTE2575.fromNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE2575.toField = "rotation";
ROUTE2575.toNode = "hanim_l_sternoclavicular";
Group2499.children[75] = ROUTE2575;

let ROUTE2576 = browser.currentScene.createNode("ROUTE");
ROUTE2576.fromField = "value_changed";
ROUTE2576.fromNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE2576.toField = "rotation";
ROUTE2576.toNode = "hanim_l_acromioclavicular";
Group2499.children[76] = ROUTE2576;

let ROUTE2577 = browser.currentScene.createNode("ROUTE");
ROUTE2577.fromField = "value_changed";
ROUTE2577.fromNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE2577.toField = "rotation";
ROUTE2577.toNode = "hanim_r_sternoclavicular";
Group2499.children[77] = ROUTE2577;

let ROUTE2578 = browser.currentScene.createNode("ROUTE");
ROUTE2578.fromField = "value_changed";
ROUTE2578.fromNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE2578.toField = "rotation";
ROUTE2578.toNode = "hanim_r_acromioclavicular";
Group2499.children[78] = ROUTE2578;

let ROUTE2579 = browser.currentScene.createNode("ROUTE");
ROUTE2579.fromField = "value_changed";
ROUTE2579.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2579.toField = "rotation";
ROUTE2579.toNode = "hanim_l_metatarsal";
Group2499.children[79] = ROUTE2579;

let ROUTE2580 = browser.currentScene.createNode("ROUTE");
ROUTE2580.fromField = "value_changed";
ROUTE2580.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2580.toField = "rotation";
ROUTE2580.toNode = "hanim_r_metatarsal";
Group2499.children[80] = ROUTE2580;

let ROUTE2581 = browser.currentScene.createNode("ROUTE");
ROUTE2581.fromField = "value_changed";
ROUTE2581.fromNode = "Roll_sacroiliac_YawInterpolator";
ROUTE2581.toField = "rotation";
ROUTE2581.toNode = "hanim_sacroiliac";
Group2499.children[81] = ROUTE2581;

let ROUTE2582 = browser.currentScene.createNode("ROUTE");
ROUTE2582.fromField = "value_changed";
ROUTE2582.fromNode = "Roll_vl5_YawInterpolator";
ROUTE2582.toField = "rotation";
ROUTE2582.toNode = "hanim_vl5";
Group2499.children[82] = ROUTE2582;

let ROUTE2583 = browser.currentScene.createNode("ROUTE");
ROUTE2583.fromField = "value_changed";
ROUTE2583.fromNode = "Roll_vc6_YawInterpolator";
ROUTE2583.toField = "rotation";
ROUTE2583.toNode = "hanim_vc6";
Group2499.children[83] = ROUTE2583;

let ROUTE2584 = browser.currentScene.createNode("ROUTE");
ROUTE2584.fromField = "value_changed";
ROUTE2584.fromNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE2584.toField = "rotation";
ROUTE2584.toNode = "hanim_l_thumb1";
Group2499.children[84] = ROUTE2584;

let ROUTE2585 = browser.currentScene.createNode("ROUTE");
ROUTE2585.fromField = "value_changed";
ROUTE2585.fromNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE2585.toField = "rotation";
ROUTE2585.toNode = "hanim_r_thumb1";
Group2499.children[85] = ROUTE2585;

browser.currentScene.children[17] = Group2499;

let Group2586 = browser.currentScene.createNode("Group");
Group2586.DEF = "WalkAnimation";
let TimeSensor2587 = browser.currentScene.createNode("TimeSensor");
TimeSensor2587.DEF = "WalkTimer";
TimeSensor2587.cycleInterval = 1.73;
TimeSensor2587.loop = True;
Group2586.children = new MFNode();

Group2586.children[0] = TimeSensor2587;

let OrientationInterpolator2588 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2588.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator2588.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2588.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[1] = OrientationInterpolator2588;

let OrientationInterpolator2589 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2589.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator2589.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator2589.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group2586.children[2] = OrientationInterpolator2589;

let OrientationInterpolator2590 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2590.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator2590.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2590.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group2586.children[3] = OrientationInterpolator2590;

let OrientationInterpolator2591 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2591.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator2591.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2591.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group2586.children[4] = OrientationInterpolator2591;

let OrientationInterpolator2592 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2592.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator2592.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator2592.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group2586.children[5] = OrientationInterpolator2592;

let OrientationInterpolator2593 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2593.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator2593.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2593.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group2586.children[6] = OrientationInterpolator2593;

let OrientationInterpolator2594 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2594.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator2594.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2594.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group2586.children[7] = OrientationInterpolator2594;

let OrientationInterpolator2595 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2595.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator2595.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2595.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group2586.children[8] = OrientationInterpolator2595;

let OrientationInterpolator2596 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2596.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator2596.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2596.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group2586.children[9] = OrientationInterpolator2596;

let OrientationInterpolator2597 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2597.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator2597.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2597.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group2586.children[10] = OrientationInterpolator2597;

let OrientationInterpolator2598 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2598.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator2598.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2598.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group2586.children[11] = OrientationInterpolator2598;

let OrientationInterpolator2599 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2599.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator2599.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2599.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group2586.children[12] = OrientationInterpolator2599;

let OrientationInterpolator2600 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2600.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator2600.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2600.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group2586.children[13] = OrientationInterpolator2600;

let OrientationInterpolator2601 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2601.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator2601.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2601.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group2586.children[14] = OrientationInterpolator2601;

let OrientationInterpolator2602 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2602.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator2602.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator2602.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group2586.children[15] = OrientationInterpolator2602;

let OrientationInterpolator2603 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2603.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator2603.key = new MFFloat(new float[0,1]);
OrientationInterpolator2603.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2586.children[16] = OrientationInterpolator2603;

let OrientationInterpolator2604 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2604.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator2604.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator2604.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group2586.children[17] = OrientationInterpolator2604;

let OrientationInterpolator2605 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2605.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator2605.key = new MFFloat(new float[0,1]);
OrientationInterpolator2605.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2586.children[18] = OrientationInterpolator2605;

let PositionInterpolator2606 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2606.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator2606.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator2606.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group2586.children[19] = PositionInterpolator2606;

let OrientationInterpolator2607 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2607.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2607.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2607.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[20] = OrientationInterpolator2607;

let OrientationInterpolator2608 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2608.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2608.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2608.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[21] = OrientationInterpolator2608;

let OrientationInterpolator2609 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2609.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2609.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2609.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[22] = OrientationInterpolator2609;

let OrientationInterpolator2610 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2610.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2610.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2610.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[23] = OrientationInterpolator2610;

let OrientationInterpolator2611 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2611.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator2611.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2611.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[24] = OrientationInterpolator2611;

let OrientationInterpolator2612 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2612.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator2612.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2612.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[25] = OrientationInterpolator2612;

let OrientationInterpolator2613 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2613.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator2613.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2613.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[26] = OrientationInterpolator2613;

let OrientationInterpolator2614 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2614.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator2614.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2614.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2586.children[27] = OrientationInterpolator2614;

let OrientationInterpolator2615 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2615.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator2615.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2615.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2586.children[28] = OrientationInterpolator2615;

let ROUTE2616 = browser.currentScene.createNode("ROUTE");
ROUTE2616.fromField = "fraction_changed";
ROUTE2616.fromNode = "WalkTimer";
ROUTE2616.toField = "set_fraction";
ROUTE2616.toNode = "Walk_r_ankle_RotationInterpolator";
Group2586.children[29] = ROUTE2616;

let ROUTE2617 = browser.currentScene.createNode("ROUTE");
ROUTE2617.fromField = "fraction_changed";
ROUTE2617.fromNode = "WalkTimer";
ROUTE2617.toField = "set_fraction";
ROUTE2617.toNode = "Walk_r_knee_RotationInterpolator";
Group2586.children[30] = ROUTE2617;

let ROUTE2618 = browser.currentScene.createNode("ROUTE");
ROUTE2618.fromField = "fraction_changed";
ROUTE2618.fromNode = "WalkTimer";
ROUTE2618.toField = "set_fraction";
ROUTE2618.toNode = "Walk_r_hip_RotationInterpolator";
Group2586.children[31] = ROUTE2618;

let ROUTE2619 = browser.currentScene.createNode("ROUTE");
ROUTE2619.fromField = "fraction_changed";
ROUTE2619.fromNode = "WalkTimer";
ROUTE2619.toField = "set_fraction";
ROUTE2619.toNode = "Walk_l_ankle_RotationInterpolator";
Group2586.children[32] = ROUTE2619;

let ROUTE2620 = browser.currentScene.createNode("ROUTE");
ROUTE2620.fromField = "fraction_changed";
ROUTE2620.fromNode = "WalkTimer";
ROUTE2620.toField = "set_fraction";
ROUTE2620.toNode = "Walk_l_knee_RotationInterpolator";
Group2586.children[33] = ROUTE2620;

let ROUTE2621 = browser.currentScene.createNode("ROUTE");
ROUTE2621.fromField = "fraction_changed";
ROUTE2621.fromNode = "WalkTimer";
ROUTE2621.toField = "set_fraction";
ROUTE2621.toNode = "Walk_l_hip_RotationInterpolator";
Group2586.children[34] = ROUTE2621;

let ROUTE2622 = browser.currentScene.createNode("ROUTE");
ROUTE2622.fromField = "fraction_changed";
ROUTE2622.fromNode = "WalkTimer";
ROUTE2622.toField = "set_fraction";
ROUTE2622.toNode = "Walk_lower_body_RotationInterpolator";
Group2586.children[35] = ROUTE2622;

let ROUTE2623 = browser.currentScene.createNode("ROUTE");
ROUTE2623.fromField = "fraction_changed";
ROUTE2623.fromNode = "WalkTimer";
ROUTE2623.toField = "set_fraction";
ROUTE2623.toNode = "Walk_r_wrist_RotationInterpolator";
Group2586.children[36] = ROUTE2623;

let ROUTE2624 = browser.currentScene.createNode("ROUTE");
ROUTE2624.fromField = "fraction_changed";
ROUTE2624.fromNode = "WalkTimer";
ROUTE2624.toField = "set_fraction";
ROUTE2624.toNode = "Walk_r_elbow_RotationInterpolator";
Group2586.children[37] = ROUTE2624;

let ROUTE2625 = browser.currentScene.createNode("ROUTE");
ROUTE2625.fromField = "fraction_changed";
ROUTE2625.fromNode = "WalkTimer";
ROUTE2625.toField = "set_fraction";
ROUTE2625.toNode = "Walk_r_shoulder_RotationInterpolator";
Group2586.children[38] = ROUTE2625;

let ROUTE2626 = browser.currentScene.createNode("ROUTE");
ROUTE2626.fromField = "fraction_changed";
ROUTE2626.fromNode = "WalkTimer";
ROUTE2626.toField = "set_fraction";
ROUTE2626.toNode = "Walk_l_wrist_RotationInterpolator";
Group2586.children[39] = ROUTE2626;

let ROUTE2627 = browser.currentScene.createNode("ROUTE");
ROUTE2627.fromField = "fraction_changed";
ROUTE2627.fromNode = "WalkTimer";
ROUTE2627.toField = "set_fraction";
ROUTE2627.toNode = "Walk_l_elbow_RotationInterpolator";
Group2586.children[40] = ROUTE2627;

let ROUTE2628 = browser.currentScene.createNode("ROUTE");
ROUTE2628.fromField = "fraction_changed";
ROUTE2628.fromNode = "WalkTimer";
ROUTE2628.toField = "set_fraction";
ROUTE2628.toNode = "Walk_l_shoulder_RotationInterpolator";
Group2586.children[41] = ROUTE2628;

let ROUTE2629 = browser.currentScene.createNode("ROUTE");
ROUTE2629.fromField = "fraction_changed";
ROUTE2629.fromNode = "WalkTimer";
ROUTE2629.toField = "set_fraction";
ROUTE2629.toNode = "Walk_head_RotationInterpolator";
Group2586.children[42] = ROUTE2629;

let ROUTE2630 = browser.currentScene.createNode("ROUTE");
ROUTE2630.fromField = "fraction_changed";
ROUTE2630.fromNode = "WalkTimer";
ROUTE2630.toField = "set_fraction";
ROUTE2630.toNode = "Walk_neck_RotationInterpolator";
Group2586.children[43] = ROUTE2630;

let ROUTE2631 = browser.currentScene.createNode("ROUTE");
ROUTE2631.fromField = "fraction_changed";
ROUTE2631.fromNode = "WalkTimer";
ROUTE2631.toField = "set_fraction";
ROUTE2631.toNode = "Walk_upper_body_RotationInterpolator";
Group2586.children[44] = ROUTE2631;

let ROUTE2632 = browser.currentScene.createNode("ROUTE");
ROUTE2632.fromField = "fraction_changed";
ROUTE2632.fromNode = "WalkTimer";
ROUTE2632.toField = "set_fraction";
ROUTE2632.toNode = "Walk_whole_body_RotationInterpolator";
Group2586.children[45] = ROUTE2632;

let ROUTE2633 = browser.currentScene.createNode("ROUTE");
ROUTE2633.fromField = "fraction_changed";
ROUTE2633.fromNode = "WalkTimer";
ROUTE2633.toField = "set_fraction";
ROUTE2633.toNode = "Walk_whole_body_TranslationInterpolator";
Group2586.children[46] = ROUTE2633;

let ROUTE2634 = browser.currentScene.createNode("ROUTE");
ROUTE2634.fromField = "fraction_changed";
ROUTE2634.fromNode = "WalkTimer";
ROUTE2634.toField = "set_fraction";
ROUTE2634.toNode = "Walk_l_sternoclavicular_RollInterpolator";
Group2586.children[47] = ROUTE2634;

let ROUTE2635 = browser.currentScene.createNode("ROUTE");
ROUTE2635.fromField = "fraction_changed";
ROUTE2635.fromNode = "WalkTimer";
ROUTE2635.toField = "set_fraction";
ROUTE2635.toNode = "Walk_l_acromioclavicular_RollInterpolator";
Group2586.children[48] = ROUTE2635;

let ROUTE2636 = browser.currentScene.createNode("ROUTE");
ROUTE2636.fromField = "fraction_changed";
ROUTE2636.fromNode = "WalkTimer";
ROUTE2636.toField = "set_fraction";
ROUTE2636.toNode = "Walk_r_sternoclavicular_RollInterpolator";
Group2586.children[49] = ROUTE2636;

let ROUTE2637 = browser.currentScene.createNode("ROUTE");
ROUTE2637.fromField = "fraction_changed";
ROUTE2637.fromNode = "WalkTimer";
ROUTE2637.toField = "set_fraction";
ROUTE2637.toNode = "Walk_r_acromioclavicular_RollInterpolator";
Group2586.children[50] = ROUTE2637;

let ROUTE2638 = browser.currentScene.createNode("ROUTE");
ROUTE2638.fromField = "fraction_changed";
ROUTE2638.fromNode = "WalkTimer";
ROUTE2638.toField = "set_fraction";
ROUTE2638.toNode = "Walk_r_metatarsal_PitchInterpolator";
Group2586.children[51] = ROUTE2638;

let ROUTE2639 = browser.currentScene.createNode("ROUTE");
ROUTE2639.fromField = "fraction_changed";
ROUTE2639.fromNode = "WalkTimer";
ROUTE2639.toField = "set_fraction";
ROUTE2639.toNode = "Walk_sacroiliac_YawInterpolator";
Group2586.children[52] = ROUTE2639;

let ROUTE2640 = browser.currentScene.createNode("ROUTE");
ROUTE2640.fromField = "fraction_changed";
ROUTE2640.fromNode = "WalkTimer";
ROUTE2640.toField = "set_fraction";
ROUTE2640.toNode = "Walk_vl5_YawInterpolator";
Group2586.children[53] = ROUTE2640;

let ROUTE2641 = browser.currentScene.createNode("ROUTE");
ROUTE2641.fromField = "fraction_changed";
ROUTE2641.fromNode = "WalkTimer";
ROUTE2641.toField = "set_fraction";
ROUTE2641.toNode = "Walk_vc6_YawInterpolator";
Group2586.children[54] = ROUTE2641;

let ROUTE2642 = browser.currentScene.createNode("ROUTE");
ROUTE2642.fromField = "fraction_changed";
ROUTE2642.fromNode = "WalkTimer";
ROUTE2642.toField = "set_fraction";
ROUTE2642.toNode = "Walk_l_thumb1_PitchInterpolator";
Group2586.children[55] = ROUTE2642;

let ROUTE2643 = browser.currentScene.createNode("ROUTE");
ROUTE2643.fromField = "fraction_changed";
ROUTE2643.fromNode = "WalkTimer";
ROUTE2643.toField = "set_fraction";
ROUTE2643.toNode = "Walk_r_thumb1_PitchInterpolator";
Group2586.children[56] = ROUTE2643;

let ROUTE2644 = browser.currentScene.createNode("ROUTE");
ROUTE2644.fromField = "value_changed";
ROUTE2644.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE2644.toField = "rotation";
ROUTE2644.toNode = "hanim_r_ankle";
Group2586.children[57] = ROUTE2644;

let ROUTE2645 = browser.currentScene.createNode("ROUTE");
ROUTE2645.fromField = "value_changed";
ROUTE2645.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE2645.toField = "rotation";
ROUTE2645.toNode = "hanim_r_knee";
Group2586.children[58] = ROUTE2645;

let ROUTE2646 = browser.currentScene.createNode("ROUTE");
ROUTE2646.fromField = "value_changed";
ROUTE2646.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE2646.toField = "rotation";
ROUTE2646.toNode = "hanim_r_hip";
Group2586.children[59] = ROUTE2646;

let ROUTE2647 = browser.currentScene.createNode("ROUTE");
ROUTE2647.fromField = "value_changed";
ROUTE2647.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE2647.toField = "rotation";
ROUTE2647.toNode = "hanim_l_ankle";
Group2586.children[60] = ROUTE2647;

let ROUTE2648 = browser.currentScene.createNode("ROUTE");
ROUTE2648.fromField = "value_changed";
ROUTE2648.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE2648.toField = "rotation";
ROUTE2648.toNode = "hanim_l_knee";
Group2586.children[61] = ROUTE2648;

let ROUTE2649 = browser.currentScene.createNode("ROUTE");
ROUTE2649.fromField = "value_changed";
ROUTE2649.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE2649.toField = "rotation";
ROUTE2649.toNode = "hanim_l_hip";
Group2586.children[62] = ROUTE2649;

let ROUTE2650 = browser.currentScene.createNode("ROUTE");
ROUTE2650.fromField = "value_changed";
ROUTE2650.fromNode = "Walk_lower_body_RotationInterpolator";
ROUTE2650.toField = "rotation";
ROUTE2650.toNode = "hanim_sacroiliac";
Group2586.children[63] = ROUTE2650;

let ROUTE2651 = browser.currentScene.createNode("ROUTE");
ROUTE2651.fromField = "value_changed";
ROUTE2651.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE2651.toField = "rotation";
ROUTE2651.toNode = "hanim_r_wrist";
Group2586.children[64] = ROUTE2651;

let ROUTE2652 = browser.currentScene.createNode("ROUTE");
ROUTE2652.fromField = "value_changed";
ROUTE2652.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE2652.toField = "rotation";
ROUTE2652.toNode = "hanim_r_elbow";
Group2586.children[65] = ROUTE2652;

let ROUTE2653 = browser.currentScene.createNode("ROUTE");
ROUTE2653.fromField = "value_changed";
ROUTE2653.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE2653.toField = "rotation";
ROUTE2653.toNode = "hanim_r_shoulder";
Group2586.children[66] = ROUTE2653;

let ROUTE2654 = browser.currentScene.createNode("ROUTE");
ROUTE2654.fromField = "value_changed";
ROUTE2654.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE2654.toField = "rotation";
ROUTE2654.toNode = "hanim_l_wrist";
Group2586.children[67] = ROUTE2654;

let ROUTE2655 = browser.currentScene.createNode("ROUTE");
ROUTE2655.fromField = "value_changed";
ROUTE2655.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE2655.toField = "rotation";
ROUTE2655.toNode = "hanim_l_elbow";
Group2586.children[68] = ROUTE2655;

let ROUTE2656 = browser.currentScene.createNode("ROUTE");
ROUTE2656.fromField = "value_changed";
ROUTE2656.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE2656.toField = "rotation";
ROUTE2656.toNode = "hanim_l_shoulder";
Group2586.children[69] = ROUTE2656;

let ROUTE2657 = browser.currentScene.createNode("ROUTE");
ROUTE2657.fromField = "value_changed";
ROUTE2657.fromNode = "Walk_head_RotationInterpolator";
ROUTE2657.toField = "rotation";
ROUTE2657.toNode = "hanim_skullbase";
Group2586.children[70] = ROUTE2657;

let ROUTE2658 = browser.currentScene.createNode("ROUTE");
ROUTE2658.fromField = "value_changed";
ROUTE2658.fromNode = "Walk_neck_RotationInterpolator";
ROUTE2658.toField = "rotation";
ROUTE2658.toNode = "hanim_vc4";
Group2586.children[71] = ROUTE2658;

let ROUTE2659 = browser.currentScene.createNode("ROUTE");
ROUTE2659.fromField = "value_changed";
ROUTE2659.fromNode = "Walk_upper_body_RotationInterpolator";
ROUTE2659.toField = "rotation";
ROUTE2659.toNode = "hanim_vl1";
Group2586.children[72] = ROUTE2659;

let ROUTE2660 = browser.currentScene.createNode("ROUTE");
ROUTE2660.fromField = "value_changed";
ROUTE2660.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE2660.toField = "rotation";
ROUTE2660.toNode = "hanim_humanoid_root";
Group2586.children[73] = ROUTE2660;

let ROUTE2661 = browser.currentScene.createNode("ROUTE");
ROUTE2661.fromField = "value_changed";
ROUTE2661.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE2661.toField = "translation";
ROUTE2661.toNode = "hanim_humanoid_root";
Group2586.children[74] = ROUTE2661;

let ROUTE2662 = browser.currentScene.createNode("ROUTE");
ROUTE2662.fromField = "value_changed";
ROUTE2662.fromNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE2662.toField = "rotation";
ROUTE2662.toNode = "hanim_l_sternoclavicular";
Group2586.children[75] = ROUTE2662;

let ROUTE2663 = browser.currentScene.createNode("ROUTE");
ROUTE2663.fromField = "value_changed";
ROUTE2663.fromNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE2663.toField = "rotation";
ROUTE2663.toNode = "hanim_l_acromioclavicular";
Group2586.children[76] = ROUTE2663;

let ROUTE2664 = browser.currentScene.createNode("ROUTE");
ROUTE2664.fromField = "value_changed";
ROUTE2664.fromNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE2664.toField = "rotation";
ROUTE2664.toNode = "hanim_r_sternoclavicular";
Group2586.children[77] = ROUTE2664;

let ROUTE2665 = browser.currentScene.createNode("ROUTE");
ROUTE2665.fromField = "value_changed";
ROUTE2665.fromNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE2665.toField = "rotation";
ROUTE2665.toNode = "hanim_r_acromioclavicular";
Group2586.children[78] = ROUTE2665;

let ROUTE2666 = browser.currentScene.createNode("ROUTE");
ROUTE2666.fromField = "value_changed";
ROUTE2666.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2666.toField = "rotation";
ROUTE2666.toNode = "hanim_l_metatarsal";
Group2586.children[79] = ROUTE2666;

let ROUTE2667 = browser.currentScene.createNode("ROUTE");
ROUTE2667.fromField = "value_changed";
ROUTE2667.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2667.toField = "rotation";
ROUTE2667.toNode = "hanim_r_metatarsal";
Group2586.children[80] = ROUTE2667;

let ROUTE2668 = browser.currentScene.createNode("ROUTE");
ROUTE2668.fromField = "value_changed";
ROUTE2668.fromNode = "Walk_sacroiliac_YawInterpolator";
ROUTE2668.toField = "rotation";
ROUTE2668.toNode = "hanim_sacroiliac";
Group2586.children[81] = ROUTE2668;

let ROUTE2669 = browser.currentScene.createNode("ROUTE");
ROUTE2669.fromField = "value_changed";
ROUTE2669.fromNode = "Walk_vl5_YawInterpolator";
ROUTE2669.toField = "rotation";
ROUTE2669.toNode = "hanim_vl5";
Group2586.children[82] = ROUTE2669;

let ROUTE2670 = browser.currentScene.createNode("ROUTE");
ROUTE2670.fromField = "value_changed";
ROUTE2670.fromNode = "Walk_vc6_YawInterpolator";
ROUTE2670.toField = "rotation";
ROUTE2670.toNode = "hanim_vc6";
Group2586.children[83] = ROUTE2670;

let ROUTE2671 = browser.currentScene.createNode("ROUTE");
ROUTE2671.fromField = "value_changed";
ROUTE2671.fromNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE2671.toField = "rotation";
ROUTE2671.toNode = "hanim_l_thumb1";
Group2586.children[84] = ROUTE2671;

let ROUTE2672 = browser.currentScene.createNode("ROUTE");
ROUTE2672.fromField = "value_changed";
ROUTE2672.fromNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE2672.toField = "rotation";
ROUTE2672.toNode = "hanim_r_thumb1";
Group2586.children[85] = ROUTE2672;

browser.currentScene.children[18] = Group2586;

let Group2673 = browser.currentScene.createNode("Group");
Group2673.DEF = "RunAnimation";
let TimeSensor2674 = browser.currentScene.createNode("TimeSensor");
TimeSensor2674.DEF = "RunTimer";
TimeSensor2674.cycleInterval = 0.9;
TimeSensor2674.loop = True;
Group2673.children = new MFNode();

Group2673.children[0] = TimeSensor2674;

let OrientationInterpolator2675 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2675.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator2675.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2675.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[1] = OrientationInterpolator2675;

let OrientationInterpolator2676 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2676.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator2676.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2676.keyValue = new MFRotation(new float[-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group2673.children[2] = OrientationInterpolator2676;

let OrientationInterpolator2677 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2677.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator2677.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2677.keyValue = new MFRotation(new float[1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group2673.children[3] = OrientationInterpolator2677;

let OrientationInterpolator2678 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2678.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator2678.key = new MFFloat(new float[0,0.22,0.3,0.4,1]);
OrientationInterpolator2678.keyValue = new MFRotation(new float[1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group2673.children[4] = OrientationInterpolator2678;

let OrientationInterpolator2679 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2679.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator2679.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2679.keyValue = new MFRotation(new float[0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group2673.children[5] = OrientationInterpolator2679;

let OrientationInterpolator2680 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2680.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator2680.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2680.keyValue = new MFRotation(new float[1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group2673.children[6] = OrientationInterpolator2680;

let OrientationInterpolator2681 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2681.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator2681.key = new MFFloat(new float[0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator2681.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group2673.children[7] = OrientationInterpolator2681;

let OrientationInterpolator2682 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2682.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator2682.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2682.keyValue = new MFRotation(new float[0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group2673.children[8] = OrientationInterpolator2682;

let OrientationInterpolator2683 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2683.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator2683.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2683.keyValue = new MFRotation(new float[-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group2673.children[9] = OrientationInterpolator2683;

let OrientationInterpolator2684 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2684.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator2684.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2684.keyValue = new MFRotation(new float[-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group2673.children[10] = OrientationInterpolator2684;

let OrientationInterpolator2685 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2685.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator2685.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2685.keyValue = new MFRotation(new float[-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group2673.children[11] = OrientationInterpolator2685;

let OrientationInterpolator2686 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2686.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator2686.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2686.keyValue = new MFRotation(new float[-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group2673.children[12] = OrientationInterpolator2686;

let OrientationInterpolator2687 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2687.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator2687.key = new MFFloat(new float[0,1]);
OrientationInterpolator2687.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group2673.children[13] = OrientationInterpolator2687;

let OrientationInterpolator2688 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2688.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator2688.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2688.keyValue = new MFRotation(new float[0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group2673.children[14] = OrientationInterpolator2688;

let OrientationInterpolator2689 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2689.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator2689.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2689.keyValue = new MFRotation(new float[1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group2673.children[15] = OrientationInterpolator2689;

let OrientationInterpolator2690 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2690.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator2690.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2690.keyValue = new MFRotation(new float[0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group2673.children[16] = OrientationInterpolator2690;

let OrientationInterpolator2691 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2691.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator2691.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator2691.keyValue = new MFRotation(new float[0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group2673.children[17] = OrientationInterpolator2691;

let OrientationInterpolator2692 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2692.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator2692.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2692.keyValue = new MFRotation(new float[1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group2673.children[18] = OrientationInterpolator2692;

let PositionInterpolator2693 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2693.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator2693.key = new MFFloat(new float[0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator2693.keyValue = new MFVec3f(new float[0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group2673.children[19] = PositionInterpolator2693;

let OrientationInterpolator2694 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2694.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2694.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2694.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[20] = OrientationInterpolator2694;

let OrientationInterpolator2695 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2695.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2695.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2695.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[21] = OrientationInterpolator2695;

let OrientationInterpolator2696 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2696.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2696.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2696.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[22] = OrientationInterpolator2696;

let OrientationInterpolator2697 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2697.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2697.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2697.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[23] = OrientationInterpolator2697;

let OrientationInterpolator2698 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2698.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator2698.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2698.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[24] = OrientationInterpolator2698;

let OrientationInterpolator2699 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2699.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator2699.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2699.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[25] = OrientationInterpolator2699;

let OrientationInterpolator2700 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2700.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator2700.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2700.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[26] = OrientationInterpolator2700;

let OrientationInterpolator2701 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2701.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator2701.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2701.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2673.children[27] = OrientationInterpolator2701;

let OrientationInterpolator2702 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2702.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator2702.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2702.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2673.children[28] = OrientationInterpolator2702;

let ROUTE2703 = browser.currentScene.createNode("ROUTE");
ROUTE2703.fromField = "fraction_changed";
ROUTE2703.fromNode = "RunTimer";
ROUTE2703.toField = "set_fraction";
ROUTE2703.toNode = "Run_r_ankle_RotationInterpolator_Run";
Group2673.children[29] = ROUTE2703;

let ROUTE2704 = browser.currentScene.createNode("ROUTE");
ROUTE2704.fromField = "fraction_changed";
ROUTE2704.fromNode = "RunTimer";
ROUTE2704.toField = "set_fraction";
ROUTE2704.toNode = "Run_r_knee_RotationInterpolator_Run";
Group2673.children[30] = ROUTE2704;

let ROUTE2705 = browser.currentScene.createNode("ROUTE");
ROUTE2705.fromField = "fraction_changed";
ROUTE2705.fromNode = "RunTimer";
ROUTE2705.toField = "set_fraction";
ROUTE2705.toNode = "Run_r_hip_RotationInterpolator_Run";
Group2673.children[31] = ROUTE2705;

let ROUTE2706 = browser.currentScene.createNode("ROUTE");
ROUTE2706.fromField = "fraction_changed";
ROUTE2706.fromNode = "RunTimer";
ROUTE2706.toField = "set_fraction";
ROUTE2706.toNode = "Run_l_ankle_RotationInterpolator_Run";
Group2673.children[32] = ROUTE2706;

let ROUTE2707 = browser.currentScene.createNode("ROUTE");
ROUTE2707.fromField = "fraction_changed";
ROUTE2707.fromNode = "RunTimer";
ROUTE2707.toField = "set_fraction";
ROUTE2707.toNode = "Run_l_knee_RotationInterpolator_Run";
Group2673.children[33] = ROUTE2707;

let ROUTE2708 = browser.currentScene.createNode("ROUTE");
ROUTE2708.fromField = "fraction_changed";
ROUTE2708.fromNode = "RunTimer";
ROUTE2708.toField = "set_fraction";
ROUTE2708.toNode = "Run_l_hip_RotationInterpolator_Run";
Group2673.children[34] = ROUTE2708;

let ROUTE2709 = browser.currentScene.createNode("ROUTE");
ROUTE2709.fromField = "fraction_changed";
ROUTE2709.fromNode = "RunTimer";
ROUTE2709.toField = "set_fraction";
ROUTE2709.toNode = "Run_lower_body_RotationInterpolator_Run";
Group2673.children[35] = ROUTE2709;

let ROUTE2710 = browser.currentScene.createNode("ROUTE");
ROUTE2710.fromField = "fraction_changed";
ROUTE2710.fromNode = "RunTimer";
ROUTE2710.toField = "set_fraction";
ROUTE2710.toNode = "Run_r_wrist_RotationInterpolator_Run";
Group2673.children[36] = ROUTE2710;

let ROUTE2711 = browser.currentScene.createNode("ROUTE");
ROUTE2711.fromField = "fraction_changed";
ROUTE2711.fromNode = "RunTimer";
ROUTE2711.toField = "set_fraction";
ROUTE2711.toNode = "Run_r_elbow_RotationInterpolator_Run";
Group2673.children[37] = ROUTE2711;

let ROUTE2712 = browser.currentScene.createNode("ROUTE");
ROUTE2712.fromField = "fraction_changed";
ROUTE2712.fromNode = "RunTimer";
ROUTE2712.toField = "set_fraction";
ROUTE2712.toNode = "Run_r_shoulder_RotationInterpolator_Run";
Group2673.children[38] = ROUTE2712;

let ROUTE2713 = browser.currentScene.createNode("ROUTE");
ROUTE2713.fromField = "fraction_changed";
ROUTE2713.fromNode = "RunTimer";
ROUTE2713.toField = "set_fraction";
ROUTE2713.toNode = "Run_l_wrist_RotationInterpolator_Run";
Group2673.children[39] = ROUTE2713;

let ROUTE2714 = browser.currentScene.createNode("ROUTE");
ROUTE2714.fromField = "fraction_changed";
ROUTE2714.fromNode = "RunTimer";
ROUTE2714.toField = "set_fraction";
ROUTE2714.toNode = "Run_l_elbow_RotationInterpolator_Run";
Group2673.children[40] = ROUTE2714;

let ROUTE2715 = browser.currentScene.createNode("ROUTE");
ROUTE2715.fromField = "fraction_changed";
ROUTE2715.fromNode = "RunTimer";
ROUTE2715.toField = "set_fraction";
ROUTE2715.toNode = "Run_l_shoulder_RotationInterpolator_Run";
Group2673.children[41] = ROUTE2715;

let ROUTE2716 = browser.currentScene.createNode("ROUTE");
ROUTE2716.fromField = "fraction_changed";
ROUTE2716.fromNode = "RunTimer";
ROUTE2716.toField = "set_fraction";
ROUTE2716.toNode = "Run_head_RotationInterpolator_Run";
Group2673.children[42] = ROUTE2716;

let ROUTE2717 = browser.currentScene.createNode("ROUTE");
ROUTE2717.fromField = "fraction_changed";
ROUTE2717.fromNode = "RunTimer";
ROUTE2717.toField = "set_fraction";
ROUTE2717.toNode = "Run_neck_RotationInterpolator_Run";
Group2673.children[43] = ROUTE2717;

let ROUTE2718 = browser.currentScene.createNode("ROUTE");
ROUTE2718.fromField = "fraction_changed";
ROUTE2718.fromNode = "RunTimer";
ROUTE2718.toField = "set_fraction";
ROUTE2718.toNode = "Run_upper_body_RotationInterpolator_Run";
Group2673.children[44] = ROUTE2718;

let ROUTE2719 = browser.currentScene.createNode("ROUTE");
ROUTE2719.fromField = "fraction_changed";
ROUTE2719.fromNode = "RunTimer";
ROUTE2719.toField = "set_fraction";
ROUTE2719.toNode = "Run_whole_body_RotationInterpolator_Run";
Group2673.children[45] = ROUTE2719;

let ROUTE2720 = browser.currentScene.createNode("ROUTE");
ROUTE2720.fromField = "fraction_changed";
ROUTE2720.fromNode = "RunTimer";
ROUTE2720.toField = "set_fraction";
ROUTE2720.toNode = "Run_whole_body_TranslationInterpolator_Run";
Group2673.children[46] = ROUTE2720;

let ROUTE2721 = browser.currentScene.createNode("ROUTE");
ROUTE2721.fromField = "fraction_changed";
ROUTE2721.fromNode = "RunTimer";
ROUTE2721.toField = "set_fraction";
ROUTE2721.toNode = "Run_l_sternoclavicular_RollInterpolator";
Group2673.children[47] = ROUTE2721;

let ROUTE2722 = browser.currentScene.createNode("ROUTE");
ROUTE2722.fromField = "fraction_changed";
ROUTE2722.fromNode = "RunTimer";
ROUTE2722.toField = "set_fraction";
ROUTE2722.toNode = "Run_l_acromioclavicular_RollInterpolator";
Group2673.children[48] = ROUTE2722;

let ROUTE2723 = browser.currentScene.createNode("ROUTE");
ROUTE2723.fromField = "fraction_changed";
ROUTE2723.fromNode = "RunTimer";
ROUTE2723.toField = "set_fraction";
ROUTE2723.toNode = "Run_r_sternoclavicular_RollInterpolator";
Group2673.children[49] = ROUTE2723;

let ROUTE2724 = browser.currentScene.createNode("ROUTE");
ROUTE2724.fromField = "fraction_changed";
ROUTE2724.fromNode = "RunTimer";
ROUTE2724.toField = "set_fraction";
ROUTE2724.toNode = "Run_r_acromioclavicular_RollInterpolator";
Group2673.children[50] = ROUTE2724;

let ROUTE2725 = browser.currentScene.createNode("ROUTE");
ROUTE2725.fromField = "fraction_changed";
ROUTE2725.fromNode = "RunTimer";
ROUTE2725.toField = "set_fraction";
ROUTE2725.toNode = "Run_r_metatarsal_PitchInterpolator";
Group2673.children[51] = ROUTE2725;

let ROUTE2726 = browser.currentScene.createNode("ROUTE");
ROUTE2726.fromField = "fraction_changed";
ROUTE2726.fromNode = "RunTimer";
ROUTE2726.toField = "set_fraction";
ROUTE2726.toNode = "Run_sacroiliac_YawInterpolator";
Group2673.children[52] = ROUTE2726;

let ROUTE2727 = browser.currentScene.createNode("ROUTE");
ROUTE2727.fromField = "fraction_changed";
ROUTE2727.fromNode = "RunTimer";
ROUTE2727.toField = "set_fraction";
ROUTE2727.toNode = "Run_vl5_YawInterpolator";
Group2673.children[53] = ROUTE2727;

let ROUTE2728 = browser.currentScene.createNode("ROUTE");
ROUTE2728.fromField = "fraction_changed";
ROUTE2728.fromNode = "RunTimer";
ROUTE2728.toField = "set_fraction";
ROUTE2728.toNode = "Run_vc6_YawInterpolator";
Group2673.children[54] = ROUTE2728;

let ROUTE2729 = browser.currentScene.createNode("ROUTE");
ROUTE2729.fromField = "fraction_changed";
ROUTE2729.fromNode = "RunTimer";
ROUTE2729.toField = "set_fraction";
ROUTE2729.toNode = "Run_l_thumb1_PitchInterpolator";
Group2673.children[55] = ROUTE2729;

let ROUTE2730 = browser.currentScene.createNode("ROUTE");
ROUTE2730.fromField = "fraction_changed";
ROUTE2730.fromNode = "RunTimer";
ROUTE2730.toField = "set_fraction";
ROUTE2730.toNode = "Run_r_thumb1_PitchInterpolator";
Group2673.children[56] = ROUTE2730;

let ROUTE2731 = browser.currentScene.createNode("ROUTE");
ROUTE2731.fromField = "value_changed";
ROUTE2731.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE2731.toField = "rotation";
ROUTE2731.toNode = "hanim_r_ankle";
Group2673.children[57] = ROUTE2731;

let ROUTE2732 = browser.currentScene.createNode("ROUTE");
ROUTE2732.fromField = "value_changed";
ROUTE2732.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE2732.toField = "rotation";
ROUTE2732.toNode = "hanim_r_knee";
Group2673.children[58] = ROUTE2732;

let ROUTE2733 = browser.currentScene.createNode("ROUTE");
ROUTE2733.fromField = "value_changed";
ROUTE2733.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE2733.toField = "rotation";
ROUTE2733.toNode = "hanim_r_hip";
Group2673.children[59] = ROUTE2733;

let ROUTE2734 = browser.currentScene.createNode("ROUTE");
ROUTE2734.fromField = "value_changed";
ROUTE2734.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE2734.toField = "rotation";
ROUTE2734.toNode = "hanim_l_ankle";
Group2673.children[60] = ROUTE2734;

let ROUTE2735 = browser.currentScene.createNode("ROUTE");
ROUTE2735.fromField = "value_changed";
ROUTE2735.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE2735.toField = "rotation";
ROUTE2735.toNode = "hanim_l_knee";
Group2673.children[61] = ROUTE2735;

let ROUTE2736 = browser.currentScene.createNode("ROUTE");
ROUTE2736.fromField = "value_changed";
ROUTE2736.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE2736.toField = "rotation";
ROUTE2736.toNode = "hanim_l_hip";
Group2673.children[62] = ROUTE2736;

let ROUTE2737 = browser.currentScene.createNode("ROUTE");
ROUTE2737.fromField = "value_changed";
ROUTE2737.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE2737.toField = "rotation";
ROUTE2737.toNode = "hanim_r_wrist";
Group2673.children[63] = ROUTE2737;

let ROUTE2738 = browser.currentScene.createNode("ROUTE");
ROUTE2738.fromField = "value_changed";
ROUTE2738.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE2738.toField = "rotation";
ROUTE2738.toNode = "hanim_r_elbow";
Group2673.children[64] = ROUTE2738;

let ROUTE2739 = browser.currentScene.createNode("ROUTE");
ROUTE2739.fromField = "value_changed";
ROUTE2739.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE2739.toField = "rotation";
ROUTE2739.toNode = "hanim_r_shoulder";
Group2673.children[65] = ROUTE2739;

let ROUTE2740 = browser.currentScene.createNode("ROUTE");
ROUTE2740.fromField = "value_changed";
ROUTE2740.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE2740.toField = "rotation";
ROUTE2740.toNode = "hanim_l_wrist";
Group2673.children[66] = ROUTE2740;

let ROUTE2741 = browser.currentScene.createNode("ROUTE");
ROUTE2741.fromField = "value_changed";
ROUTE2741.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE2741.toField = "rotation";
ROUTE2741.toNode = "hanim_l_elbow";
Group2673.children[67] = ROUTE2741;

let ROUTE2742 = browser.currentScene.createNode("ROUTE");
ROUTE2742.fromField = "value_changed";
ROUTE2742.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE2742.toField = "rotation";
ROUTE2742.toNode = "hanim_l_shoulder";
Group2673.children[68] = ROUTE2742;

let ROUTE2743 = browser.currentScene.createNode("ROUTE");
ROUTE2743.fromField = "value_changed";
ROUTE2743.fromNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE2743.toField = "rotation";
ROUTE2743.toNode = "hanim_sacroiliac";
Group2673.children[69] = ROUTE2743;

let ROUTE2744 = browser.currentScene.createNode("ROUTE");
ROUTE2744.fromField = "value_changed";
ROUTE2744.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE2744.toField = "rotation";
ROUTE2744.toNode = "hanim_skullbase";
Group2673.children[70] = ROUTE2744;

let ROUTE2745 = browser.currentScene.createNode("ROUTE");
ROUTE2745.fromField = "value_changed";
ROUTE2745.fromNode = "Run_neck_RotationInterpolator_Run";
ROUTE2745.toField = "rotation";
ROUTE2745.toNode = "hanim_vc4";
Group2673.children[71] = ROUTE2745;

let ROUTE2746 = browser.currentScene.createNode("ROUTE");
ROUTE2746.fromField = "value_changed";
ROUTE2746.fromNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE2746.toField = "rotation";
ROUTE2746.toNode = "hanim_vl1";
Group2673.children[72] = ROUTE2746;

let ROUTE2747 = browser.currentScene.createNode("ROUTE");
ROUTE2747.fromField = "value_changed";
ROUTE2747.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE2747.toField = "rotation";
ROUTE2747.toNode = "hanim_humanoid_root";
Group2673.children[73] = ROUTE2747;

let ROUTE2748 = browser.currentScene.createNode("ROUTE");
ROUTE2748.fromField = "value_changed";
ROUTE2748.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE2748.toField = "translation";
ROUTE2748.toNode = "hanim_humanoid_root";
Group2673.children[74] = ROUTE2748;

let ROUTE2749 = browser.currentScene.createNode("ROUTE");
ROUTE2749.fromField = "value_changed";
ROUTE2749.fromNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE2749.toField = "rotation";
ROUTE2749.toNode = "hanim_l_sternoclavicular";
Group2673.children[75] = ROUTE2749;

let ROUTE2750 = browser.currentScene.createNode("ROUTE");
ROUTE2750.fromField = "value_changed";
ROUTE2750.fromNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE2750.toField = "rotation";
ROUTE2750.toNode = "hanim_l_acromioclavicular";
Group2673.children[76] = ROUTE2750;

let ROUTE2751 = browser.currentScene.createNode("ROUTE");
ROUTE2751.fromField = "value_changed";
ROUTE2751.fromNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE2751.toField = "rotation";
ROUTE2751.toNode = "hanim_r_sternoclavicular";
Group2673.children[77] = ROUTE2751;

let ROUTE2752 = browser.currentScene.createNode("ROUTE");
ROUTE2752.fromField = "value_changed";
ROUTE2752.fromNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE2752.toField = "rotation";
ROUTE2752.toNode = "hanim_r_acromioclavicular";
Group2673.children[78] = ROUTE2752;

let ROUTE2753 = browser.currentScene.createNode("ROUTE");
ROUTE2753.fromField = "value_changed";
ROUTE2753.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2753.toField = "rotation";
ROUTE2753.toNode = "hanim_l_metatarsal";
Group2673.children[79] = ROUTE2753;

let ROUTE2754 = browser.currentScene.createNode("ROUTE");
ROUTE2754.fromField = "value_changed";
ROUTE2754.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2754.toField = "rotation";
ROUTE2754.toNode = "hanim_r_metatarsal";
Group2673.children[80] = ROUTE2754;

let ROUTE2755 = browser.currentScene.createNode("ROUTE");
ROUTE2755.fromField = "value_changed";
ROUTE2755.fromNode = "Run_sacroiliac_YawInterpolator";
ROUTE2755.toField = "rotation";
ROUTE2755.toNode = "hanim_sacroiliac";
Group2673.children[81] = ROUTE2755;

let ROUTE2756 = browser.currentScene.createNode("ROUTE");
ROUTE2756.fromField = "value_changed";
ROUTE2756.fromNode = "Run_vl5_YawInterpolator";
ROUTE2756.toField = "rotation";
ROUTE2756.toNode = "hanim_vl5";
Group2673.children[82] = ROUTE2756;

let ROUTE2757 = browser.currentScene.createNode("ROUTE");
ROUTE2757.fromField = "value_changed";
ROUTE2757.fromNode = "Run_vc6_YawInterpolator";
ROUTE2757.toField = "rotation";
ROUTE2757.toNode = "hanim_vc6";
Group2673.children[83] = ROUTE2757;

let ROUTE2758 = browser.currentScene.createNode("ROUTE");
ROUTE2758.fromField = "value_changed";
ROUTE2758.fromNode = "Run_l_thumb1_PitchInterpolator";
ROUTE2758.toField = "rotation";
ROUTE2758.toNode = "hanim_l_thumb1";
Group2673.children[84] = ROUTE2758;

let ROUTE2759 = browser.currentScene.createNode("ROUTE");
ROUTE2759.fromField = "value_changed";
ROUTE2759.fromNode = "Run_r_thumb1_PitchInterpolator";
ROUTE2759.toField = "rotation";
ROUTE2759.toNode = "hanim_r_thumb1";
Group2673.children[85] = ROUTE2759;

browser.currentScene.children[19] = Group2673;

let Group2760 = browser.currentScene.createNode("Group");
Group2760.DEF = "JumpAnimation";
let TimeSensor2761 = browser.currentScene.createNode("TimeSensor");
TimeSensor2761.DEF = "JumpTimer";
TimeSensor2761.cycleInterval = 3.73;
TimeSensor2761.loop = True;
Group2760.children = new MFNode();

Group2760.children[0] = TimeSensor2761;

let OrientationInterpolator2762 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2762.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator2762.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2762.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2760.children[1] = OrientationInterpolator2762;

let OrientationInterpolator2763 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2763.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator2763.key = new MFFloat(new float[0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2763.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group2760.children[2] = OrientationInterpolator2763;

let OrientationInterpolator2764 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2764.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator2764.key = new MFFloat(new float[0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator2764.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group2760.children[3] = OrientationInterpolator2764;

let OrientationInterpolator2765 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2765.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator2765.key = new MFFloat(new float[0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2765.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group2760.children[4] = OrientationInterpolator2765;

let OrientationInterpolator2766 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2766.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator2766.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2766.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group2760.children[5] = OrientationInterpolator2766;

let OrientationInterpolator2767 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2767.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator2767.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2767.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group2760.children[6] = OrientationInterpolator2767;

let OrientationInterpolator2768 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2768.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator2768.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2768.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group2760.children[7] = OrientationInterpolator2768;

let OrientationInterpolator2769 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2769.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator2769.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2769.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2760.children[8] = OrientationInterpolator2769;

let OrientationInterpolator2770 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2770.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator2770.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2770.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group2760.children[9] = OrientationInterpolator2770;

let OrientationInterpolator2771 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2771.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator2771.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2771.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group2760.children[10] = OrientationInterpolator2771;

let OrientationInterpolator2772 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2772.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator2772.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2772.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group2760.children[11] = OrientationInterpolator2772;

let OrientationInterpolator2773 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2773.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator2773.key = new MFFloat(new float[0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator2773.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group2760.children[12] = OrientationInterpolator2773;

let OrientationInterpolator2774 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2774.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator2774.key = new MFFloat(new float[0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator2774.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group2760.children[13] = OrientationInterpolator2774;

let OrientationInterpolator2775 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2775.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator2775.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2775.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group2760.children[14] = OrientationInterpolator2775;

let OrientationInterpolator2776 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2776.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator2776.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2776.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group2760.children[15] = OrientationInterpolator2776;

let OrientationInterpolator2777 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2777.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator2777.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2777.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group2760.children[16] = OrientationInterpolator2777;

let OrientationInterpolator2778 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2778.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator2778.key = new MFFloat(new float[0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator2778.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group2760.children[17] = OrientationInterpolator2778;

let OrientationInterpolator2779 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2779.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator2779.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator2779.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2760.children[18] = OrientationInterpolator2779;

let PositionInterpolator2780 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2780.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator2780.key = new MFFloat(new float[0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator2780.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group2760.children[19] = PositionInterpolator2780;

let OrientationInterpolator2781 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2781.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2781.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2781.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2760.children[20] = OrientationInterpolator2781;

let OrientationInterpolator2782 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2782.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2782.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2782.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2760.children[21] = OrientationInterpolator2782;

let OrientationInterpolator2783 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2783.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2783.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2783.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2760.children[22] = OrientationInterpolator2783;

let OrientationInterpolator2784 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2784.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2784.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2784.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2760.children[23] = OrientationInterpolator2784;

let OrientationInterpolator2785 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2785.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator2785.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2785.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2760.children[24] = OrientationInterpolator2785;

let OrientationInterpolator2786 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2786.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator2786.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2786.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group2760.children[25] = OrientationInterpolator2786;

let OrientationInterpolator2787 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2787.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator2787.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2787.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group2760.children[26] = OrientationInterpolator2787;

let OrientationInterpolator2788 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2788.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator2788.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2788.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2760.children[27] = OrientationInterpolator2788;

let OrientationInterpolator2789 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2789.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator2789.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2789.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2760.children[28] = OrientationInterpolator2789;

let ROUTE2790 = browser.currentScene.createNode("ROUTE");
ROUTE2790.fromField = "fraction_changed";
ROUTE2790.fromNode = "JumpTimer";
ROUTE2790.toField = "set_fraction";
ROUTE2790.toNode = "Jump_r_ankle_RotationInterpolator";
Group2760.children[29] = ROUTE2790;

let ROUTE2791 = browser.currentScene.createNode("ROUTE");
ROUTE2791.fromField = "fraction_changed";
ROUTE2791.fromNode = "JumpTimer";
ROUTE2791.toField = "set_fraction";
ROUTE2791.toNode = "Jump_r_knee_RotationInterpolator";
Group2760.children[30] = ROUTE2791;

let ROUTE2792 = browser.currentScene.createNode("ROUTE");
ROUTE2792.fromField = "fraction_changed";
ROUTE2792.fromNode = "JumpTimer";
ROUTE2792.toField = "set_fraction";
ROUTE2792.toNode = "Jump_r_hip_RotationInterpolator";
Group2760.children[31] = ROUTE2792;

let ROUTE2793 = browser.currentScene.createNode("ROUTE");
ROUTE2793.fromField = "fraction_changed";
ROUTE2793.fromNode = "JumpTimer";
ROUTE2793.toField = "set_fraction";
ROUTE2793.toNode = "Jump_l_ankle_RotationInterpolator";
Group2760.children[32] = ROUTE2793;

let ROUTE2794 = browser.currentScene.createNode("ROUTE");
ROUTE2794.fromField = "fraction_changed";
ROUTE2794.fromNode = "JumpTimer";
ROUTE2794.toField = "set_fraction";
ROUTE2794.toNode = "Jump_l_knee_RotationInterpolator";
Group2760.children[33] = ROUTE2794;

let ROUTE2795 = browser.currentScene.createNode("ROUTE");
ROUTE2795.fromField = "fraction_changed";
ROUTE2795.fromNode = "JumpTimer";
ROUTE2795.toField = "set_fraction";
ROUTE2795.toNode = "Jump_l_hip_RotationInterpolator";
Group2760.children[34] = ROUTE2795;

let ROUTE2796 = browser.currentScene.createNode("ROUTE");
ROUTE2796.fromField = "fraction_changed";
ROUTE2796.fromNode = "JumpTimer";
ROUTE2796.toField = "set_fraction";
ROUTE2796.toNode = "Jump_lower_body_RotationInterpolator";
Group2760.children[35] = ROUTE2796;

let ROUTE2797 = browser.currentScene.createNode("ROUTE");
ROUTE2797.fromField = "fraction_changed";
ROUTE2797.fromNode = "JumpTimer";
ROUTE2797.toField = "set_fraction";
ROUTE2797.toNode = "Jump_r_wrist_RotationInterpolator";
Group2760.children[36] = ROUTE2797;

let ROUTE2798 = browser.currentScene.createNode("ROUTE");
ROUTE2798.fromField = "fraction_changed";
ROUTE2798.fromNode = "JumpTimer";
ROUTE2798.toField = "set_fraction";
ROUTE2798.toNode = "Jump_r_elbow_RotationInterpolator";
Group2760.children[37] = ROUTE2798;

let ROUTE2799 = browser.currentScene.createNode("ROUTE");
ROUTE2799.fromField = "fraction_changed";
ROUTE2799.fromNode = "JumpTimer";
ROUTE2799.toField = "set_fraction";
ROUTE2799.toNode = "Jump_r_shoulder_RotationInterpolator";
Group2760.children[38] = ROUTE2799;

let ROUTE2800 = browser.currentScene.createNode("ROUTE");
ROUTE2800.fromField = "fraction_changed";
ROUTE2800.fromNode = "JumpTimer";
ROUTE2800.toField = "set_fraction";
ROUTE2800.toNode = "Jump_l_wrist_RotationInterpolator";
Group2760.children[39] = ROUTE2800;

let ROUTE2801 = browser.currentScene.createNode("ROUTE");
ROUTE2801.fromField = "fraction_changed";
ROUTE2801.fromNode = "JumpTimer";
ROUTE2801.toField = "set_fraction";
ROUTE2801.toNode = "Jump_l_elbow_RotationInterpolator";
Group2760.children[40] = ROUTE2801;

let ROUTE2802 = browser.currentScene.createNode("ROUTE");
ROUTE2802.fromField = "fraction_changed";
ROUTE2802.fromNode = "JumpTimer";
ROUTE2802.toField = "set_fraction";
ROUTE2802.toNode = "Jump_l_shoulder_RotationInterpolator";
Group2760.children[41] = ROUTE2802;

let ROUTE2803 = browser.currentScene.createNode("ROUTE");
ROUTE2803.fromField = "fraction_changed";
ROUTE2803.fromNode = "JumpTimer";
ROUTE2803.toField = "set_fraction";
ROUTE2803.toNode = "Jump_head_RotationInterpolator";
Group2760.children[42] = ROUTE2803;

let ROUTE2804 = browser.currentScene.createNode("ROUTE");
ROUTE2804.fromField = "fraction_changed";
ROUTE2804.fromNode = "JumpTimer";
ROUTE2804.toField = "set_fraction";
ROUTE2804.toNode = "Jump_neck_RotationInterpolator";
Group2760.children[43] = ROUTE2804;

let ROUTE2805 = browser.currentScene.createNode("ROUTE");
ROUTE2805.fromField = "fraction_changed";
ROUTE2805.fromNode = "JumpTimer";
ROUTE2805.toField = "set_fraction";
ROUTE2805.toNode = "Jump_upper_body_RotationInterpolator";
Group2760.children[44] = ROUTE2805;

let ROUTE2806 = browser.currentScene.createNode("ROUTE");
ROUTE2806.fromField = "fraction_changed";
ROUTE2806.fromNode = "JumpTimer";
ROUTE2806.toField = "set_fraction";
ROUTE2806.toNode = "Jump_whole_body_RotationInterpolator";
Group2760.children[45] = ROUTE2806;

let ROUTE2807 = browser.currentScene.createNode("ROUTE");
ROUTE2807.fromField = "fraction_changed";
ROUTE2807.fromNode = "JumpTimer";
ROUTE2807.toField = "set_fraction";
ROUTE2807.toNode = "Jump_whole_body_TranslationInterpolator";
Group2760.children[46] = ROUTE2807;

let ROUTE2808 = browser.currentScene.createNode("ROUTE");
ROUTE2808.fromField = "fraction_changed";
ROUTE2808.fromNode = "JumpTimer";
ROUTE2808.toField = "set_fraction";
ROUTE2808.toNode = "Jump_l_sternoclavicular_RollInterpolator";
Group2760.children[47] = ROUTE2808;

let ROUTE2809 = browser.currentScene.createNode("ROUTE");
ROUTE2809.fromField = "fraction_changed";
ROUTE2809.fromNode = "JumpTimer";
ROUTE2809.toField = "set_fraction";
ROUTE2809.toNode = "Jump_l_acromioclavicular_RollInterpolator";
Group2760.children[48] = ROUTE2809;

let ROUTE2810 = browser.currentScene.createNode("ROUTE");
ROUTE2810.fromField = "fraction_changed";
ROUTE2810.fromNode = "JumpTimer";
ROUTE2810.toField = "set_fraction";
ROUTE2810.toNode = "Jump_r_sternoclavicular_RollInterpolator";
Group2760.children[49] = ROUTE2810;

let ROUTE2811 = browser.currentScene.createNode("ROUTE");
ROUTE2811.fromField = "fraction_changed";
ROUTE2811.fromNode = "JumpTimer";
ROUTE2811.toField = "set_fraction";
ROUTE2811.toNode = "Jump_r_acromioclavicular_RollInterpolator";
Group2760.children[50] = ROUTE2811;

let ROUTE2812 = browser.currentScene.createNode("ROUTE");
ROUTE2812.fromField = "fraction_changed";
ROUTE2812.fromNode = "JumpTimer";
ROUTE2812.toField = "set_fraction";
ROUTE2812.toNode = "Jump_r_metatarsal_PitchInterpolator";
Group2760.children[51] = ROUTE2812;

let ROUTE2813 = browser.currentScene.createNode("ROUTE");
ROUTE2813.fromField = "fraction_changed";
ROUTE2813.fromNode = "JumpTimer";
ROUTE2813.toField = "set_fraction";
ROUTE2813.toNode = "Jump_sacroiliac_YawInterpolator";
Group2760.children[52] = ROUTE2813;

let ROUTE2814 = browser.currentScene.createNode("ROUTE");
ROUTE2814.fromField = "fraction_changed";
ROUTE2814.fromNode = "JumpTimer";
ROUTE2814.toField = "set_fraction";
ROUTE2814.toNode = "Jump_vl5_YawInterpolator";
Group2760.children[53] = ROUTE2814;

let ROUTE2815 = browser.currentScene.createNode("ROUTE");
ROUTE2815.fromField = "fraction_changed";
ROUTE2815.fromNode = "JumpTimer";
ROUTE2815.toField = "set_fraction";
ROUTE2815.toNode = "Jump_vc6_YawInterpolator";
Group2760.children[54] = ROUTE2815;

let ROUTE2816 = browser.currentScene.createNode("ROUTE");
ROUTE2816.fromField = "fraction_changed";
ROUTE2816.fromNode = "JumpTimer";
ROUTE2816.toField = "set_fraction";
ROUTE2816.toNode = "Jump_l_thumb1_PitchInterpolator";
Group2760.children[55] = ROUTE2816;

let ROUTE2817 = browser.currentScene.createNode("ROUTE");
ROUTE2817.fromField = "fraction_changed";
ROUTE2817.fromNode = "JumpTimer";
ROUTE2817.toField = "set_fraction";
ROUTE2817.toNode = "Jump_r_thumb1_PitchInterpolator";
Group2760.children[56] = ROUTE2817;

let ROUTE2818 = browser.currentScene.createNode("ROUTE");
ROUTE2818.fromField = "value_changed";
ROUTE2818.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE2818.toField = "rotation";
ROUTE2818.toNode = "hanim_r_ankle";
Group2760.children[57] = ROUTE2818;

let ROUTE2819 = browser.currentScene.createNode("ROUTE");
ROUTE2819.fromField = "value_changed";
ROUTE2819.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE2819.toField = "rotation";
ROUTE2819.toNode = "hanim_r_knee";
Group2760.children[58] = ROUTE2819;

let ROUTE2820 = browser.currentScene.createNode("ROUTE");
ROUTE2820.fromField = "value_changed";
ROUTE2820.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE2820.toField = "rotation";
ROUTE2820.toNode = "hanim_r_hip";
Group2760.children[59] = ROUTE2820;

let ROUTE2821 = browser.currentScene.createNode("ROUTE");
ROUTE2821.fromField = "value_changed";
ROUTE2821.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE2821.toField = "rotation";
ROUTE2821.toNode = "hanim_l_ankle";
Group2760.children[60] = ROUTE2821;

let ROUTE2822 = browser.currentScene.createNode("ROUTE");
ROUTE2822.fromField = "value_changed";
ROUTE2822.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE2822.toField = "rotation";
ROUTE2822.toNode = "hanim_l_knee";
Group2760.children[61] = ROUTE2822;

let ROUTE2823 = browser.currentScene.createNode("ROUTE");
ROUTE2823.fromField = "value_changed";
ROUTE2823.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE2823.toField = "rotation";
ROUTE2823.toNode = "hanim_l_hip";
Group2760.children[62] = ROUTE2823;

let ROUTE2824 = browser.currentScene.createNode("ROUTE");
ROUTE2824.fromField = "value_changed";
ROUTE2824.fromNode = "Jump_lower_body_RotationInterpolator";
ROUTE2824.toField = "rotation";
ROUTE2824.toNode = "hanim_sacroiliac";
Group2760.children[63] = ROUTE2824;

let ROUTE2825 = browser.currentScene.createNode("ROUTE");
ROUTE2825.fromField = "value_changed";
ROUTE2825.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE2825.toField = "rotation";
ROUTE2825.toNode = "hanim_r_wrist";
Group2760.children[64] = ROUTE2825;

let ROUTE2826 = browser.currentScene.createNode("ROUTE");
ROUTE2826.fromField = "value_changed";
ROUTE2826.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE2826.toField = "rotation";
ROUTE2826.toNode = "hanim_r_elbow";
Group2760.children[65] = ROUTE2826;

let ROUTE2827 = browser.currentScene.createNode("ROUTE");
ROUTE2827.fromField = "value_changed";
ROUTE2827.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE2827.toField = "rotation";
ROUTE2827.toNode = "hanim_r_shoulder";
Group2760.children[66] = ROUTE2827;

let ROUTE2828 = browser.currentScene.createNode("ROUTE");
ROUTE2828.fromField = "value_changed";
ROUTE2828.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE2828.toField = "rotation";
ROUTE2828.toNode = "hanim_l_wrist";
Group2760.children[67] = ROUTE2828;

let ROUTE2829 = browser.currentScene.createNode("ROUTE");
ROUTE2829.fromField = "value_changed";
ROUTE2829.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE2829.toField = "rotation";
ROUTE2829.toNode = "hanim_l_elbow";
Group2760.children[68] = ROUTE2829;

let ROUTE2830 = browser.currentScene.createNode("ROUTE");
ROUTE2830.fromField = "value_changed";
ROUTE2830.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE2830.toField = "rotation";
ROUTE2830.toNode = "hanim_l_shoulder";
Group2760.children[69] = ROUTE2830;

let ROUTE2831 = browser.currentScene.createNode("ROUTE");
ROUTE2831.fromField = "value_changed";
ROUTE2831.fromNode = "Jump_head_RotationInterpolator";
ROUTE2831.toField = "rotation";
ROUTE2831.toNode = "hanim_skullbase";
Group2760.children[70] = ROUTE2831;

let ROUTE2832 = browser.currentScene.createNode("ROUTE");
ROUTE2832.fromField = "value_changed";
ROUTE2832.fromNode = "Jump_neck_RotationInterpolator";
ROUTE2832.toField = "rotation";
ROUTE2832.toNode = "hanim_vc4";
Group2760.children[71] = ROUTE2832;

let ROUTE2833 = browser.currentScene.createNode("ROUTE");
ROUTE2833.fromField = "value_changed";
ROUTE2833.fromNode = "Jump_upper_body_RotationInterpolator";
ROUTE2833.toField = "rotation";
ROUTE2833.toNode = "hanim_vl1";
Group2760.children[72] = ROUTE2833;

let ROUTE2834 = browser.currentScene.createNode("ROUTE");
ROUTE2834.fromField = "value_changed";
ROUTE2834.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE2834.toField = "rotation";
ROUTE2834.toNode = "hanim_humanoid_root";
Group2760.children[73] = ROUTE2834;

let ROUTE2835 = browser.currentScene.createNode("ROUTE");
ROUTE2835.fromField = "value_changed";
ROUTE2835.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE2835.toField = "translation";
ROUTE2835.toNode = "hanim_humanoid_root";
Group2760.children[74] = ROUTE2835;

let ROUTE2836 = browser.currentScene.createNode("ROUTE");
ROUTE2836.fromField = "value_changed";
ROUTE2836.fromNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE2836.toField = "rotation";
ROUTE2836.toNode = "hanim_l_sternoclavicular";
Group2760.children[75] = ROUTE2836;

let ROUTE2837 = browser.currentScene.createNode("ROUTE");
ROUTE2837.fromField = "value_changed";
ROUTE2837.fromNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE2837.toField = "rotation";
ROUTE2837.toNode = "hanim_l_acromioclavicular";
Group2760.children[76] = ROUTE2837;

let ROUTE2838 = browser.currentScene.createNode("ROUTE");
ROUTE2838.fromField = "value_changed";
ROUTE2838.fromNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE2838.toField = "rotation";
ROUTE2838.toNode = "hanim_r_sternoclavicular";
Group2760.children[77] = ROUTE2838;

let ROUTE2839 = browser.currentScene.createNode("ROUTE");
ROUTE2839.fromField = "value_changed";
ROUTE2839.fromNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE2839.toField = "rotation";
ROUTE2839.toNode = "hanim_r_acromioclavicular";
Group2760.children[78] = ROUTE2839;

let ROUTE2840 = browser.currentScene.createNode("ROUTE");
ROUTE2840.fromField = "value_changed";
ROUTE2840.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2840.toField = "rotation";
ROUTE2840.toNode = "hanim_l_metatarsal";
Group2760.children[79] = ROUTE2840;

let ROUTE2841 = browser.currentScene.createNode("ROUTE");
ROUTE2841.fromField = "value_changed";
ROUTE2841.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2841.toField = "rotation";
ROUTE2841.toNode = "hanim_r_metatarsal";
Group2760.children[80] = ROUTE2841;

let ROUTE2842 = browser.currentScene.createNode("ROUTE");
ROUTE2842.fromField = "value_changed";
ROUTE2842.fromNode = "Jump_sacroiliac_YawInterpolator";
ROUTE2842.toField = "rotation";
ROUTE2842.toNode = "hanim_sacroiliac";
Group2760.children[81] = ROUTE2842;

let ROUTE2843 = browser.currentScene.createNode("ROUTE");
ROUTE2843.fromField = "value_changed";
ROUTE2843.fromNode = "Jump_vl5_YawInterpolator";
ROUTE2843.toField = "rotation";
ROUTE2843.toNode = "hanim_vl5";
Group2760.children[82] = ROUTE2843;

let ROUTE2844 = browser.currentScene.createNode("ROUTE");
ROUTE2844.fromField = "value_changed";
ROUTE2844.fromNode = "Jump_vc6_YawInterpolator";
ROUTE2844.toField = "rotation";
ROUTE2844.toNode = "hanim_vc6";
Group2760.children[83] = ROUTE2844;

let ROUTE2845 = browser.currentScene.createNode("ROUTE");
ROUTE2845.fromField = "value_changed";
ROUTE2845.fromNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE2845.toField = "rotation";
ROUTE2845.toNode = "hanim_l_thumb1";
Group2760.children[84] = ROUTE2845;

let ROUTE2846 = browser.currentScene.createNode("ROUTE");
ROUTE2846.fromField = "value_changed";
ROUTE2846.fromNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE2846.toField = "rotation";
ROUTE2846.toNode = "hanim_r_thumb1";
Group2760.children[85] = ROUTE2846;

browser.currentScene.children[20] = Group2760;

let Group2847 = browser.currentScene.createNode("Group");
Group2847.DEF = "KickAnimation";
let TimeSensor2848 = browser.currentScene.createNode("TimeSensor");
TimeSensor2848.DEF = "KickTimer";
TimeSensor2848.cycleInterval = 3.73;
TimeSensor2848.loop = True;
Group2847.children = new MFNode();

Group2847.children[0] = TimeSensor2848;

let OrientationInterpolator2849 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2849.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2849.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2849.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2847.children[1] = OrientationInterpolator2849;

let OrientationInterpolator2850 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2850.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2850.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2850.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[2] = OrientationInterpolator2850;

let OrientationInterpolator2851 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2851.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator2851.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2851.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group2847.children[3] = OrientationInterpolator2851;

let OrientationInterpolator2852 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2852.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator2852.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2852.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2847.children[4] = OrientationInterpolator2852;

let OrientationInterpolator2853 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2853.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator2853.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2853.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[5] = OrientationInterpolator2853;

let OrientationInterpolator2854 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2854.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator2854.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2854.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2847.children[6] = OrientationInterpolator2854;

let OrientationInterpolator2855 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2855.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2855.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2855.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2847.children[7] = OrientationInterpolator2855;

let OrientationInterpolator2856 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2856.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2856.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2856.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[8] = OrientationInterpolator2856;

let OrientationInterpolator2857 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2857.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator2857.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2857.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group2847.children[9] = OrientationInterpolator2857;

let OrientationInterpolator2858 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2858.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator2858.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2858.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2847.children[10] = OrientationInterpolator2858;

let OrientationInterpolator2859 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2859.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator2859.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2859.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[11] = OrientationInterpolator2859;

let OrientationInterpolator2860 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2860.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator2860.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2860.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2847.children[12] = OrientationInterpolator2860;

let OrientationInterpolator2861 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2861.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator2861.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2861.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group2847.children[13] = OrientationInterpolator2861;

let OrientationInterpolator2862 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2862.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator2862.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2862.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group2847.children[14] = OrientationInterpolator2862;

let OrientationInterpolator2863 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2863.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator2863.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2863.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[15] = OrientationInterpolator2863;

let OrientationInterpolator2864 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2864.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator2864.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2864.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[16] = OrientationInterpolator2864;

let OrientationInterpolator2865 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2865.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator2865.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2865.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group2847.children[17] = OrientationInterpolator2865;

let OrientationInterpolator2866 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2866.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator2866.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2866.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2847.children[18] = OrientationInterpolator2866;

let OrientationInterpolator2867 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2867.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator2867.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2867.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2847.children[19] = OrientationInterpolator2867;

let OrientationInterpolator2868 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2868.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator2868.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2868.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[20] = OrientationInterpolator2868;

let OrientationInterpolator2869 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2869.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator2869.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2869.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[21] = OrientationInterpolator2869;

let OrientationInterpolator2870 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2870.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator2870.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2870.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[22] = OrientationInterpolator2870;

let OrientationInterpolator2871 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2871.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator2871.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2871.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[23] = OrientationInterpolator2871;

let OrientationInterpolator2872 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2872.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator2872.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2872.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[24] = OrientationInterpolator2872;

let PositionInterpolator2873 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2873.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator2873.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2873.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2847.children[25] = PositionInterpolator2873;

let OrientationInterpolator2874 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2874.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator2874.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2874.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group2847.children[26] = OrientationInterpolator2874;

let ROUTE2875 = browser.currentScene.createNode("ROUTE");
ROUTE2875.fromField = "fraction_changed";
ROUTE2875.fromNode = "KickTimer";
ROUTE2875.toField = "set_fraction";
ROUTE2875.toNode = "Kick_l_sternoclavicular_RollInterpolator";
Group2847.children[27] = ROUTE2875;

let ROUTE2876 = browser.currentScene.createNode("ROUTE");
ROUTE2876.fromField = "fraction_changed";
ROUTE2876.fromNode = "KickTimer";
ROUTE2876.toField = "set_fraction";
ROUTE2876.toNode = "Kick_l_acromioclavicular_RollInterpolator";
Group2847.children[28] = ROUTE2876;

let ROUTE2877 = browser.currentScene.createNode("ROUTE");
ROUTE2877.fromField = "fraction_changed";
ROUTE2877.fromNode = "KickTimer";
ROUTE2877.toField = "set_fraction";
ROUTE2877.toNode = "Kick_l_shoulder_RollInterpolator";
Group2847.children[29] = ROUTE2877;

let ROUTE2878 = browser.currentScene.createNode("ROUTE");
ROUTE2878.fromField = "fraction_changed";
ROUTE2878.fromNode = "KickTimer";
ROUTE2878.toField = "set_fraction";
ROUTE2878.toNode = "Kick_l_ForeArm_PitchInterpolator";
Group2847.children[30] = ROUTE2878;

let ROUTE2879 = browser.currentScene.createNode("ROUTE");
ROUTE2879.fromField = "fraction_changed";
ROUTE2879.fromNode = "KickTimer";
ROUTE2879.toField = "set_fraction";
ROUTE2879.toNode = "Kick_l_wrist_RollInterpolator";
Group2847.children[31] = ROUTE2879;

let ROUTE2880 = browser.currentScene.createNode("ROUTE");
ROUTE2880.fromField = "fraction_changed";
ROUTE2880.fromNode = "KickTimer";
ROUTE2880.toField = "set_fraction";
ROUTE2880.toNode = "Kick_l_thumb1_PitchInterpolator";
Group2847.children[32] = ROUTE2880;

let ROUTE2881 = browser.currentScene.createNode("ROUTE");
ROUTE2881.fromField = "fraction_changed";
ROUTE2881.fromNode = "KickTimer";
ROUTE2881.toField = "set_fraction";
ROUTE2881.toNode = "Kick_r_sternoclavicular_RollInterpolator";
Group2847.children[33] = ROUTE2881;

let ROUTE2882 = browser.currentScene.createNode("ROUTE");
ROUTE2882.fromField = "fraction_changed";
ROUTE2882.fromNode = "KickTimer";
ROUTE2882.toField = "set_fraction";
ROUTE2882.toNode = "Kick_r_acromioclavicular_RollInterpolator";
Group2847.children[34] = ROUTE2882;

let ROUTE2883 = browser.currentScene.createNode("ROUTE");
ROUTE2883.fromField = "fraction_changed";
ROUTE2883.fromNode = "KickTimer";
ROUTE2883.toField = "set_fraction";
ROUTE2883.toNode = "Kick_r_shoulder_RollInterpolator";
Group2847.children[35] = ROUTE2883;

let ROUTE2884 = browser.currentScene.createNode("ROUTE");
ROUTE2884.fromField = "fraction_changed";
ROUTE2884.fromNode = "KickTimer";
ROUTE2884.toField = "set_fraction";
ROUTE2884.toNode = "Kick_r_ForeArm_PitchInterpolator";
Group2847.children[36] = ROUTE2884;

let ROUTE2885 = browser.currentScene.createNode("ROUTE");
ROUTE2885.fromField = "fraction_changed";
ROUTE2885.fromNode = "KickTimer";
ROUTE2885.toField = "set_fraction";
ROUTE2885.toNode = "Kick_r_wrist_RollInterpolator";
Group2847.children[37] = ROUTE2885;

let ROUTE2886 = browser.currentScene.createNode("ROUTE");
ROUTE2886.fromField = "fraction_changed";
ROUTE2886.fromNode = "KickTimer";
ROUTE2886.toField = "set_fraction";
ROUTE2886.toNode = "Kick_r_thumb1_PitchInterpolator";
Group2847.children[38] = ROUTE2886;

let ROUTE2887 = browser.currentScene.createNode("ROUTE");
ROUTE2887.fromField = "fraction_changed";
ROUTE2887.fromNode = "KickTimer";
ROUTE2887.toField = "set_fraction";
ROUTE2887.toNode = "Kick_r_hip_PitchInterpolator";
Group2847.children[39] = ROUTE2887;

let ROUTE2888 = browser.currentScene.createNode("ROUTE");
ROUTE2888.fromField = "fraction_changed";
ROUTE2888.fromNode = "KickTimer";
ROUTE2888.toField = "set_fraction";
ROUTE2888.toNode = "Kick_r_knee_PitchInterpolator";
Group2847.children[40] = ROUTE2888;

let ROUTE2889 = browser.currentScene.createNode("ROUTE");
ROUTE2889.fromField = "fraction_changed";
ROUTE2889.fromNode = "KickTimer";
ROUTE2889.toField = "set_fraction";
ROUTE2889.toNode = "Kick_l_hip_PitchInterpolator";
Group2847.children[41] = ROUTE2889;

let ROUTE2890 = browser.currentScene.createNode("ROUTE");
ROUTE2890.fromField = "fraction_changed";
ROUTE2890.fromNode = "KickTimer";
ROUTE2890.toField = "set_fraction";
ROUTE2890.toNode = "Kick_l_knee_PitchInterpolator";
Group2847.children[42] = ROUTE2890;

let ROUTE2891 = browser.currentScene.createNode("ROUTE");
ROUTE2891.fromField = "fraction_changed";
ROUTE2891.fromNode = "KickTimer";
ROUTE2891.toField = "set_fraction";
ROUTE2891.toNode = "Kick_r_ankle_PitchInterpolator";
Group2847.children[43] = ROUTE2891;

let ROUTE2892 = browser.currentScene.createNode("ROUTE");
ROUTE2892.fromField = "fraction_changed";
ROUTE2892.fromNode = "KickTimer";
ROUTE2892.toField = "set_fraction";
ROUTE2892.toNode = "Kick_r_metatarsal_PitchInterpolator";
Group2847.children[44] = ROUTE2892;

let ROUTE2893 = browser.currentScene.createNode("ROUTE");
ROUTE2893.fromField = "fraction_changed";
ROUTE2893.fromNode = "KickTimer";
ROUTE2893.toField = "set_fraction";
ROUTE2893.toNode = "Kick_sacroiliac_YawInterpolator";
Group2847.children[45] = ROUTE2893;

let ROUTE2894 = browser.currentScene.createNode("ROUTE");
ROUTE2894.fromField = "fraction_changed";
ROUTE2894.fromNode = "KickTimer";
ROUTE2894.toField = "set_fraction";
ROUTE2894.toNode = "Kick_vl5_YawInterpolator";
Group2847.children[46] = ROUTE2894;

let ROUTE2895 = browser.currentScene.createNode("ROUTE");
ROUTE2895.fromField = "fraction_changed";
ROUTE2895.fromNode = "KickTimer";
ROUTE2895.toField = "set_fraction";
ROUTE2895.toNode = "Kick_vc6_YawInterpolator";
Group2847.children[47] = ROUTE2895;

let ROUTE2896 = browser.currentScene.createNode("ROUTE");
ROUTE2896.fromField = "fraction_changed";
ROUTE2896.fromNode = "KickTimer";
ROUTE2896.toField = "set_fraction";
ROUTE2896.toNode = "Kick_lower_body_RotationInterpolator";
Group2847.children[48] = ROUTE2896;

let ROUTE2897 = browser.currentScene.createNode("ROUTE");
ROUTE2897.fromField = "fraction_changed";
ROUTE2897.fromNode = "KickTimer";
ROUTE2897.toField = "set_fraction";
ROUTE2897.toNode = "Kick_upper_body_RotationInterpolator";
Group2847.children[49] = ROUTE2897;

let ROUTE2898 = browser.currentScene.createNode("ROUTE");
ROUTE2898.fromField = "fraction_changed";
ROUTE2898.fromNode = "KickTimer";
ROUTE2898.toField = "set_fraction";
ROUTE2898.toNode = "Kick_whole_body_RotationInterpolator";
Group2847.children[50] = ROUTE2898;

let ROUTE2899 = browser.currentScene.createNode("ROUTE");
ROUTE2899.fromField = "fraction_changed";
ROUTE2899.fromNode = "KickTimer";
ROUTE2899.toField = "set_fraction";
ROUTE2899.toNode = "Kick_whole_body_TranslationInterpolator";
Group2847.children[51] = ROUTE2899;

let ROUTE2900 = browser.currentScene.createNode("ROUTE");
ROUTE2900.fromField = "fraction_changed";
ROUTE2900.fromNode = "KickTimer";
ROUTE2900.toField = "set_fraction";
ROUTE2900.toNode = "Kick_neck_RotationInterpolator";
Group2847.children[52] = ROUTE2900;

let ROUTE2901 = browser.currentScene.createNode("ROUTE");
ROUTE2901.fromField = "value_changed";
ROUTE2901.fromNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE2901.toField = "rotation";
ROUTE2901.toNode = "hanim_l_sternoclavicular";
Group2847.children[53] = ROUTE2901;

let ROUTE2902 = browser.currentScene.createNode("ROUTE");
ROUTE2902.fromField = "value_changed";
ROUTE2902.fromNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE2902.toField = "rotation";
ROUTE2902.toNode = "hanim_l_acromioclavicular";
Group2847.children[54] = ROUTE2902;

let ROUTE2903 = browser.currentScene.createNode("ROUTE");
ROUTE2903.fromField = "value_changed";
ROUTE2903.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE2903.toField = "rotation";
ROUTE2903.toNode = "hanim_l_shoulder";
Group2847.children[55] = ROUTE2903;

let ROUTE2904 = browser.currentScene.createNode("ROUTE");
ROUTE2904.fromField = "value_changed";
ROUTE2904.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE2904.toField = "rotation";
ROUTE2904.toNode = "hanim_l_elbow";
Group2847.children[56] = ROUTE2904;

let ROUTE2905 = browser.currentScene.createNode("ROUTE");
ROUTE2905.fromField = "value_changed";
ROUTE2905.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE2905.toField = "rotation";
ROUTE2905.toNode = "hanim_l_wrist";
Group2847.children[57] = ROUTE2905;

let ROUTE2906 = browser.currentScene.createNode("ROUTE");
ROUTE2906.fromField = "value_changed";
ROUTE2906.fromNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE2906.toField = "rotation";
ROUTE2906.toNode = "hanim_l_thumb1";
Group2847.children[58] = ROUTE2906;

let ROUTE2907 = browser.currentScene.createNode("ROUTE");
ROUTE2907.fromField = "value_changed";
ROUTE2907.fromNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE2907.toField = "rotation";
ROUTE2907.toNode = "hanim_r_sternoclavicular";
Group2847.children[59] = ROUTE2907;

let ROUTE2908 = browser.currentScene.createNode("ROUTE");
ROUTE2908.fromField = "value_changed";
ROUTE2908.fromNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE2908.toField = "rotation";
ROUTE2908.toNode = "hanim_r_acromioclavicular";
Group2847.children[60] = ROUTE2908;

let ROUTE2909 = browser.currentScene.createNode("ROUTE");
ROUTE2909.fromField = "value_changed";
ROUTE2909.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE2909.toField = "rotation";
ROUTE2909.toNode = "hanim_r_shoulder";
Group2847.children[61] = ROUTE2909;

let ROUTE2910 = browser.currentScene.createNode("ROUTE");
ROUTE2910.fromField = "value_changed";
ROUTE2910.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE2910.toField = "rotation";
ROUTE2910.toNode = "hanim_r_elbow";
Group2847.children[62] = ROUTE2910;

let ROUTE2911 = browser.currentScene.createNode("ROUTE");
ROUTE2911.fromField = "value_changed";
ROUTE2911.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE2911.toField = "rotation";
ROUTE2911.toNode = "hanim_r_wrist";
Group2847.children[63] = ROUTE2911;

let ROUTE2912 = browser.currentScene.createNode("ROUTE");
ROUTE2912.fromField = "value_changed";
ROUTE2912.fromNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE2912.toField = "rotation";
ROUTE2912.toNode = "hanim_r_thumb1";
Group2847.children[64] = ROUTE2912;

let ROUTE2913 = browser.currentScene.createNode("ROUTE");
ROUTE2913.fromField = "value_changed";
ROUTE2913.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE2913.toField = "rotation";
ROUTE2913.toNode = "hanim_r_hip";
Group2847.children[65] = ROUTE2913;

let ROUTE2914 = browser.currentScene.createNode("ROUTE");
ROUTE2914.fromField = "value_changed";
ROUTE2914.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE2914.toField = "rotation";
ROUTE2914.toNode = "hanim_r_knee";
Group2847.children[66] = ROUTE2914;

let ROUTE2915 = browser.currentScene.createNode("ROUTE");
ROUTE2915.fromField = "value_changed";
ROUTE2915.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE2915.toField = "rotation";
ROUTE2915.toNode = "hanim_r_ankle";
Group2847.children[67] = ROUTE2915;

let ROUTE2916 = browser.currentScene.createNode("ROUTE");
ROUTE2916.fromField = "value_changed";
ROUTE2916.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE2916.toField = "rotation";
ROUTE2916.toNode = "hanim_r_metatarsal";
Group2847.children[68] = ROUTE2916;

let ROUTE2917 = browser.currentScene.createNode("ROUTE");
ROUTE2917.fromField = "value_changed";
ROUTE2917.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE2917.toField = "rotation";
ROUTE2917.toNode = "hanim_l_hip";
Group2847.children[69] = ROUTE2917;

let ROUTE2918 = browser.currentScene.createNode("ROUTE");
ROUTE2918.fromField = "value_changed";
ROUTE2918.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE2918.toField = "rotation";
ROUTE2918.toNode = "hanim_l_knee";
Group2847.children[70] = ROUTE2918;

let ROUTE2919 = browser.currentScene.createNode("ROUTE");
ROUTE2919.fromField = "value_changed";
ROUTE2919.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE2919.toField = "rotation";
ROUTE2919.toNode = "hanim_l_ankle";
Group2847.children[71] = ROUTE2919;

let ROUTE2920 = browser.currentScene.createNode("ROUTE");
ROUTE2920.fromField = "value_changed";
ROUTE2920.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE2920.toField = "rotation";
ROUTE2920.toNode = "hanim_l_metatarsal";
Group2847.children[72] = ROUTE2920;

let ROUTE2921 = browser.currentScene.createNode("ROUTE");
ROUTE2921.fromField = "value_changed";
ROUTE2921.fromNode = "Kick_sacroiliac_YawInterpolator";
ROUTE2921.toField = "rotation";
ROUTE2921.toNode = "hanim_sacroiliac";
Group2847.children[73] = ROUTE2921;

let ROUTE2922 = browser.currentScene.createNode("ROUTE");
ROUTE2922.fromField = "value_changed";
ROUTE2922.fromNode = "Kick_vl5_YawInterpolator";
ROUTE2922.toField = "rotation";
ROUTE2922.toNode = "hanim_vl5";
Group2847.children[74] = ROUTE2922;

let ROUTE2923 = browser.currentScene.createNode("ROUTE");
ROUTE2923.fromField = "value_changed";
ROUTE2923.fromNode = "Kick_vc6_YawInterpolator";
ROUTE2923.toField = "rotation";
ROUTE2923.toNode = "hanim_vc6";
Group2847.children[75] = ROUTE2923;

let ROUTE2924 = browser.currentScene.createNode("ROUTE");
ROUTE2924.fromField = "value_changed";
ROUTE2924.fromNode = "Kick_upper_body_RotationInterpolator";
ROUTE2924.toField = "rotation";
ROUTE2924.toNode = "hanim_vl1";
Group2847.children[76] = ROUTE2924;

let ROUTE2925 = browser.currentScene.createNode("ROUTE");
ROUTE2925.fromField = "value_changed";
ROUTE2925.fromNode = "Kick_lower_body_RotationInterpolator";
ROUTE2925.toField = "rotation";
ROUTE2925.toNode = "hanim_sacroiliac";
Group2847.children[77] = ROUTE2925;

let ROUTE2926 = browser.currentScene.createNode("ROUTE");
ROUTE2926.fromField = "value_changed";
ROUTE2926.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE2926.toField = "rotation";
ROUTE2926.toNode = "hanim_humanoid_root";
Group2847.children[78] = ROUTE2926;

let ROUTE2927 = browser.currentScene.createNode("ROUTE");
ROUTE2927.fromField = "value_changed";
ROUTE2927.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE2927.toField = "translation";
ROUTE2927.toNode = "hanim_humanoid_root";
Group2847.children[79] = ROUTE2927;

let ROUTE2928 = browser.currentScene.createNode("ROUTE");
ROUTE2928.fromField = "value_changed";
ROUTE2928.fromNode = "Kick_neck_RotationInterpolator";
ROUTE2928.toField = "rotation";
ROUTE2928.toNode = "hanim_vc4";
Group2847.children[80] = ROUTE2928;

browser.currentScene.children[21] = Group2847;

let Group2929 = browser.currentScene.createNode("Group");
Group2929.DEF = "UserInterface";
//Authoring hint: these axes are aligned within local coordinate system
let Transform2930 = browser.currentScene.createNode("Transform");
Transform2930.DEF = "CoordinateAxesAdjustedScale";
Transform2930.scale = new SFVec3f(new float[0.175,0.175,0.175]);
let Inline2931 = browser.currentScene.createNode("Inline");
Inline2931.DEF = "CoordinateAxes";
Inline2931.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"]);
Transform2930.children = new MFNode();

Transform2930.children[0] = Inline2931;

Group2929.children = new MFNode();

Group2929.children[0] = Transform2930;

let Transform2932 = browser.currentScene.createNode("Transform");
Transform2932.DEF = "cordsys";
Transform2932.scale = new SFVec3f(new float[0.175,0.175,0.175]);
//<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='\"JointCoordinateAxes.x3dv\"'/>
Group2929.children[1] = Transform2932;

let ProximitySensor2933 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor2933.DEF = "HudProximitySensor";
ProximitySensor2933.center = new SFVec3f(new float[0,20,0]);
ProximitySensor2933.size = new SFVec3f(new float[500,100,500]);
Group2929.children[2] = ProximitySensor2933;

let Transform2934 = browser.currentScene.createNode("Transform");
Transform2934.DEF = "Stage";
Transform2934.scale = new SFVec3f(new float[1,0.0125,1]);
Transform2934.translation = new SFVec3f(new float[0,-0.0125,0]);
let Shape2935 = browser.currentScene.createNode("Shape");
let Appearance2936 = browser.currentScene.createNode("Appearance");
let Material2937 = browser.currentScene.createNode("Material");
Material2937.transparency = 0.6;
Appearance2936.material = Material2937;

Shape2935.appearance = Appearance2936;

let Box2938 = browser.currentScene.createNode("Box");
Shape2935.geometry = Box2938;

Transform2934.children = new MFNode();

Transform2934.children[0] = Shape2935;

let Transform2939 = browser.currentScene.createNode("Transform");
Transform2939.DEF = "Circle0";
Transform2939.scale = new SFVec3f(new float[1.175,1,1.175]);
let Shape2940 = browser.currentScene.createNode("Shape");
let Appearance2941 = browser.currentScene.createNode("Appearance");
let Material2942 = browser.currentScene.createNode("Material");
Material2942.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2942.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2941.material = Material2942;

Shape2940.appearance = Appearance2941;

let IndexedLineSet2943 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2943.DEF = "Orbit1";
IndexedLineSet2943.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate2944 = browser.currentScene.createNode("Coordinate");
Coordinate2944.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet2943.coord = Coordinate2944;

Shape2940.geometry = IndexedLineSet2943;

Transform2939.children = new MFNode();

Transform2939.children[0] = Shape2940;

Transform2934.children[1] = Transform2939;

let Transform2945 = browser.currentScene.createNode("Transform");
Transform2945.DEF = "Circle1";
Transform2945.scale = new SFVec3f(new float[0.5,1,0.5]);
let Shape2946 = browser.currentScene.createNode("Shape");
let Appearance2947 = browser.currentScene.createNode("Appearance");
let Material2948 = browser.currentScene.createNode("Material");
Material2948.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2948.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2947.material = Material2948;

Shape2946.appearance = Appearance2947;

let IndexedLineSet2949 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2949.USE = "Orbit1";
Shape2946.geometry = IndexedLineSet2949;

Transform2945.children = new MFNode();

Transform2945.children[0] = Shape2946;

Transform2934.children[2] = Transform2945;

let Transform2950 = browser.currentScene.createNode("Transform");
Transform2950.DEF = "Circle2";
Transform2950.scale = new SFVec3f(new float[0.25,1,0.25]);
let Shape2951 = browser.currentScene.createNode("Shape");
let Appearance2952 = browser.currentScene.createNode("Appearance");
let Material2953 = browser.currentScene.createNode("Material");
Material2953.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2953.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2952.material = Material2953;

Shape2951.appearance = Appearance2952;

let IndexedLineSet2954 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2954.USE = "Orbit1";
Shape2951.geometry = IndexedLineSet2954;

Transform2950.children = new MFNode();

Transform2950.children[0] = Shape2951;

Transform2934.children[3] = Transform2950;

Group2929.children[3] = Transform2934;

let Transform2955 = browser.currentScene.createNode("Transform");
Transform2955.DEF = "HudXform";
Transform2955.rotation = new SFRotation(new float[-0.09996068,0.9942513,0.03837026,0.7131352]);
Transform2955.translation = new SFVec3f(new float[1.705442,1.042139,1.989742]);
let Transform2956 = browser.currentScene.createNode("Transform");
Transform2956.scale = new SFVec3f(new float[0.035,0.035,0.035]);
Transform2956.translation = new SFVec3f(new float[-0.42,-0.2,-0.75]);
let Transform2957 = browser.currentScene.createNode("Transform");
Transform2957.DEF = "StandTransform";
Transform2957.translation = new SFVec3f(new float[0,-1,0]);
let TouchSensor2958 = browser.currentScene.createNode("TouchSensor");
TouchSensor2958.DEF = "Stand_Touch";
TouchSensor2958.description = "touch to select";
Transform2957.children = new MFNode();

Transform2957.children[0] = TouchSensor2958;

let Shape2959 = browser.currentScene.createNode("Shape");
Shape2959.DEF = "StandTextShape";
let Appearance2960 = browser.currentScene.createNode("Appearance");
let Material2961 = browser.currentScene.createNode("Material");
Material2961.DEF = "text_color";
Material2961.ambientIntensity = 1;
Material2961.diffuseColor = new SFColor(new float[0.819,0.521,0.169]);
Material2961.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Material2961.specularColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance2960.material = Material2961;

Shape2959.appearance = Appearance2960;

let Text2962 = browser.currentScene.createNode("Text");
Text2962.string = new MFString(new java.lang.String["Stand"]);
Shape2959.geometry = Text2962;

Transform2957.children[1] = Shape2959;

let Shape2963 = browser.currentScene.createNode("Shape");
Shape2963.DEF = "Stand_Back";
let Appearance2964 = browser.currentScene.createNode("Appearance");
let Material2965 = browser.currentScene.createNode("Material");
Material2965.DEF = "Clear";
Material2965.ambientIntensity = 1;
Material2965.diffuseColor = new SFColor(new float[0,0.5,0]);
Material2965.emissiveColor = new SFColor(new float[0,0.5,0]);
Material2965.transparency = 0.8;
Appearance2964.material = Material2965;

Shape2963.appearance = Appearance2964;

let IndexedFaceSet2966 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2966.DEF = "Backing";
IndexedFaceSet2966.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
let Coordinate2967 = browser.currentScene.createNode("Coordinate");
Coordinate2967.point = new MFVec3f(new float[-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01]);
IndexedFaceSet2966.coord = Coordinate2967;

Shape2963.geometry = IndexedFaceSet2966;

Transform2957.children[2] = Shape2963;

Transform2956.children = new MFNode();

Transform2956.children[0] = Transform2957;

let Transform2968 = browser.currentScene.createNode("Transform");
Transform2968.DEF = "PitchTransform";
Transform2968.translation = new SFVec3f(new float[3,-1,0]);
let TouchSensor2969 = browser.currentScene.createNode("TouchSensor");
TouchSensor2969.DEF = "Pitch_Touch";
TouchSensor2969.description = "touch to select";
Transform2968.children = new MFNode();

Transform2968.children[0] = TouchSensor2969;

let Shape2970 = browser.currentScene.createNode("Shape");
Shape2970.DEF = "PitchTextShape";
let Appearance2971 = browser.currentScene.createNode("Appearance");
let Material2972 = browser.currentScene.createNode("Material");
Material2972.USE = "text_color";
Appearance2971.material = Material2972;

Shape2970.appearance = Appearance2971;

let Text2973 = browser.currentScene.createNode("Text");
Text2973.string = new MFString(new java.lang.String["Pitch"]);
Shape2970.geometry = Text2973;

Transform2968.children[1] = Shape2970;

let Shape2974 = browser.currentScene.createNode("Shape");
Shape2974.DEF = "Pitch_Back";
let Appearance2975 = browser.currentScene.createNode("Appearance");
let Material2976 = browser.currentScene.createNode("Material");
Material2976.USE = "Clear";
Appearance2975.material = Material2976;

Shape2974.appearance = Appearance2975;

let IndexedFaceSet2977 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2977.USE = "Backing";
Shape2974.geometry = IndexedFaceSet2977;

Transform2968.children[2] = Shape2974;

Transform2956.children[1] = Transform2968;

let Transform2978 = browser.currentScene.createNode("Transform");
Transform2978.DEF = "YawTransform";
Transform2978.translation = new SFVec3f(new float[6,-1,0]);
let TouchSensor2979 = browser.currentScene.createNode("TouchSensor");
TouchSensor2979.DEF = "Yaw_Touch";
TouchSensor2979.description = "touch to select";
Transform2978.children = new MFNode();

Transform2978.children[0] = TouchSensor2979;

let Shape2980 = browser.currentScene.createNode("Shape");
Shape2980.DEF = "YawText";
let Appearance2981 = browser.currentScene.createNode("Appearance");
let Material2982 = browser.currentScene.createNode("Material");
Material2982.USE = "text_color";
Appearance2981.material = Material2982;

Shape2980.appearance = Appearance2981;

let Text2983 = browser.currentScene.createNode("Text");
Text2983.string = new MFString(new java.lang.String["Yaw"]);
Shape2980.geometry = Text2983;

Transform2978.children[1] = Shape2980;

let Shape2984 = browser.currentScene.createNode("Shape");
Shape2984.DEF = "Yaw_Back";
let Appearance2985 = browser.currentScene.createNode("Appearance");
let Material2986 = browser.currentScene.createNode("Material");
Material2986.USE = "Clear";
Appearance2985.material = Material2986;

Shape2984.appearance = Appearance2985;

let IndexedFaceSet2987 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2987.USE = "Backing";
Shape2984.geometry = IndexedFaceSet2987;

Transform2978.children[2] = Shape2984;

Transform2956.children[2] = Transform2978;

let Transform2988 = browser.currentScene.createNode("Transform");
Transform2988.DEF = "RollTransform";
Transform2988.translation = new SFVec3f(new float[9,-1,0]);
let TouchSensor2989 = browser.currentScene.createNode("TouchSensor");
TouchSensor2989.DEF = "Roll_Touch";
TouchSensor2989.description = "touch to select";
Transform2988.children = new MFNode();

Transform2988.children[0] = TouchSensor2989;

let Shape2990 = browser.currentScene.createNode("Shape");
Shape2990.DEF = "_RollInterpolator";
let Appearance2991 = browser.currentScene.createNode("Appearance");
let Material2992 = browser.currentScene.createNode("Material");
Material2992.USE = "text_color";
Appearance2991.material = Material2992;

Shape2990.appearance = Appearance2991;

let Text2993 = browser.currentScene.createNode("Text");
Text2993.string = new MFString(new java.lang.String["Roll"]);
Shape2990.geometry = Text2993;

Transform2988.children[1] = Shape2990;

let Shape2994 = browser.currentScene.createNode("Shape");
Shape2994.DEF = "Roll_Back";
let Appearance2995 = browser.currentScene.createNode("Appearance");
let Material2996 = browser.currentScene.createNode("Material");
Material2996.USE = "Clear";
Appearance2995.material = Material2996;

Shape2994.appearance = Appearance2995;

let IndexedFaceSet2997 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2997.USE = "Backing";
Shape2994.geometry = IndexedFaceSet2997;

Transform2988.children[2] = Shape2994;

Transform2956.children[3] = Transform2988;

let Transform2998 = browser.currentScene.createNode("Transform");
Transform2998.DEF = "WalkTransform";
Transform2998.translation = new SFVec3f(new float[12,-1,0]);
let TouchSensor2999 = browser.currentScene.createNode("TouchSensor");
TouchSensor2999.DEF = "Walk_Touch";
TouchSensor2999.description = "touch to select";
Transform2998.children = new MFNode();

Transform2998.children[0] = TouchSensor2999;

let Shape3000 = browser.currentScene.createNode("Shape");
Shape3000.DEF = "WalkText";
let Appearance3001 = browser.currentScene.createNode("Appearance");
let Material3002 = browser.currentScene.createNode("Material");
Material3002.USE = "text_color";
Appearance3001.material = Material3002;

Shape3000.appearance = Appearance3001;

let Text3003 = browser.currentScene.createNode("Text");
Text3003.string = new MFString(new java.lang.String["Walk"]);
Shape3000.geometry = Text3003;

Transform2998.children[1] = Shape3000;

let Shape3004 = browser.currentScene.createNode("Shape");
Shape3004.DEF = "Walk_Back";
let Appearance3005 = browser.currentScene.createNode("Appearance");
let Material3006 = browser.currentScene.createNode("Material");
Material3006.USE = "Clear";
Appearance3005.material = Material3006;

Shape3004.appearance = Appearance3005;

let IndexedFaceSet3007 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3007.USE = "Backing";
Shape3004.geometry = IndexedFaceSet3007;

Transform2998.children[2] = Shape3004;

Transform2956.children[4] = Transform2998;

let Transform3008 = browser.currentScene.createNode("Transform");
Transform3008.DEF = "RunTransform";
Transform3008.translation = new SFVec3f(new float[15,-1,0]);
let TouchSensor3009 = browser.currentScene.createNode("TouchSensor");
TouchSensor3009.DEF = "Run_Touch";
TouchSensor3009.description = "touch to select";
Transform3008.children = new MFNode();

Transform3008.children[0] = TouchSensor3009;

let Shape3010 = browser.currentScene.createNode("Shape");
Shape3010.DEF = "RunText";
let Appearance3011 = browser.currentScene.createNode("Appearance");
let Material3012 = browser.currentScene.createNode("Material");
Material3012.USE = "text_color";
Appearance3011.material = Material3012;

Shape3010.appearance = Appearance3011;

let Text3013 = browser.currentScene.createNode("Text");
Text3013.string = new MFString(new java.lang.String["Run"]);
Shape3010.geometry = Text3013;

Transform3008.children[1] = Shape3010;

let Shape3014 = browser.currentScene.createNode("Shape");
Shape3014.DEF = "Run_Back";
let Appearance3015 = browser.currentScene.createNode("Appearance");
let Material3016 = browser.currentScene.createNode("Material");
Material3016.USE = "Clear";
Appearance3015.material = Material3016;

Shape3014.appearance = Appearance3015;

let IndexedFaceSet3017 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3017.USE = "Backing";
Shape3014.geometry = IndexedFaceSet3017;

Transform3008.children[2] = Shape3014;

Transform2956.children[5] = Transform3008;

let Transform3018 = browser.currentScene.createNode("Transform");
Transform3018.DEF = "JumpTransform";
Transform3018.translation = new SFVec3f(new float[18,-1,0]);
let TouchSensor3019 = browser.currentScene.createNode("TouchSensor");
TouchSensor3019.DEF = "Jump_Touch";
TouchSensor3019.description = "touch to select";
Transform3018.children = new MFNode();

Transform3018.children[0] = TouchSensor3019;

let Shape3020 = browser.currentScene.createNode("Shape");
Shape3020.DEF = "Jump";
let Appearance3021 = browser.currentScene.createNode("Appearance");
let Material3022 = browser.currentScene.createNode("Material");
Material3022.USE = "text_color";
Appearance3021.material = Material3022;

Shape3020.appearance = Appearance3021;

let Text3023 = browser.currentScene.createNode("Text");
Text3023.string = new MFString(new java.lang.String["Jump"]);
Shape3020.geometry = Text3023;

Transform3018.children[1] = Shape3020;

let Shape3024 = browser.currentScene.createNode("Shape");
Shape3024.DEF = "Jump_Back";
let Appearance3025 = browser.currentScene.createNode("Appearance");
let Material3026 = browser.currentScene.createNode("Material");
Material3026.USE = "Clear";
Appearance3025.material = Material3026;

Shape3024.appearance = Appearance3025;

let IndexedFaceSet3027 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3027.USE = "Backing";
Shape3024.geometry = IndexedFaceSet3027;

Transform3018.children[2] = Shape3024;

Transform2956.children[6] = Transform3018;

let Transform3028 = browser.currentScene.createNode("Transform");
Transform3028.DEF = "KickTransform";
Transform3028.translation = new SFVec3f(new float[21,-1,0]);
let TouchSensor3029 = browser.currentScene.createNode("TouchSensor");
TouchSensor3029.DEF = "Kick_Touch";
TouchSensor3029.description = "touch to select";
Transform3028.children = new MFNode();

Transform3028.children[0] = TouchSensor3029;

let Shape3030 = browser.currentScene.createNode("Shape");
Shape3030.DEF = "KickText";
let Appearance3031 = browser.currentScene.createNode("Appearance");
let Material3032 = browser.currentScene.createNode("Material");
Material3032.USE = "text_color";
Appearance3031.material = Material3032;

Shape3030.appearance = Appearance3031;

let Text3033 = browser.currentScene.createNode("Text");
Text3033.string = new MFString(new java.lang.String["Kick"]);
Shape3030.geometry = Text3033;

Transform3028.children[1] = Shape3030;

let Shape3034 = browser.currentScene.createNode("Shape");
Shape3034.DEF = "Kick_Back";
let Appearance3035 = browser.currentScene.createNode("Appearance");
let Material3036 = browser.currentScene.createNode("Material");
Material3036.USE = "Clear";
Appearance3035.material = Material3036;

Shape3034.appearance = Appearance3035;

let IndexedFaceSet3037 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3037.USE = "Backing";
Shape3034.geometry = IndexedFaceSet3037;

Transform3028.children[2] = Shape3034;

Transform2956.children[7] = Transform3028;

let Transform3038 = browser.currentScene.createNode("Transform");
Transform3038.DEF = "Stop_Text";
Transform3038.translation = new SFVec3f(new float[0,1.4,0]);
let TouchSensor3039 = browser.currentScene.createNode("TouchSensor");
TouchSensor3039.DEF = "Stop_Touch";
TouchSensor3039.description = "touch to select";
Transform3038.children = new MFNode();

Transform3038.children[0] = TouchSensor3039;

let Shape3040 = browser.currentScene.createNode("Shape");
Shape3040.DEF = "StopText";
let Appearance3041 = browser.currentScene.createNode("Appearance");
let Material3042 = browser.currentScene.createNode("Material");
Material3042.USE = "text_color";
Appearance3041.material = Material3042;

Shape3040.appearance = Appearance3041;

let Text3043 = browser.currentScene.createNode("Text");
Text3043.string = new MFString(new java.lang.String["Stop","Default Pose"]);
Shape3040.geometry = Text3043;

Transform3038.children[1] = Shape3040;

let Shape3044 = browser.currentScene.createNode("Shape");
Shape3044.DEF = "Stop_Back";
let Appearance3045 = browser.currentScene.createNode("Appearance");
let Material3046 = browser.currentScene.createNode("Material");
Material3046.USE = "Clear";
Appearance3045.material = Material3046;

Shape3044.appearance = Appearance3045;

let IndexedFaceSet3047 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3047.USE = "Backing";
Shape3044.geometry = IndexedFaceSet3047;

Transform3038.children[2] = Shape3044;

Transform2956.children[8] = Transform3038;

Transform2955.children = new MFNode();

Transform2955.children[0] = Transform2956;

Group2929.children[4] = Transform2955;

let ROUTE3048 = browser.currentScene.createNode("ROUTE");
ROUTE3048.fromField = "position_changed";
ROUTE3048.fromNode = "HudProximitySensor";
ROUTE3048.toField = "translation";
ROUTE3048.toNode = "HudXform";
Group2929.children[5] = ROUTE3048;

let ROUTE3049 = browser.currentScene.createNode("ROUTE");
ROUTE3049.fromField = "orientation_changed";
ROUTE3049.fromNode = "HudProximitySensor";
ROUTE3049.toField = "rotation";
ROUTE3049.toNode = "HudXform";
Group2929.children[6] = ROUTE3049;

browser.currentScene.children[22] = Group2929;

let Group3050 = browser.currentScene.createNode("Group");
Group3050.DEF = "BehaviorSynchronization";
let ROUTE3051 = browser.currentScene.createNode("ROUTE");
ROUTE3051.fromField = "touchTime";
ROUTE3051.fromNode = "Stand_Touch";
ROUTE3051.toField = "stopTime";
ROUTE3051.toNode = "PitchTimer";
Group3050.children = new MFNode();

Group3050.children[0] = ROUTE3051;

let ROUTE3052 = browser.currentScene.createNode("ROUTE");
ROUTE3052.fromField = "touchTime";
ROUTE3052.fromNode = "Stand_Touch";
ROUTE3052.toField = "stopTime";
ROUTE3052.toNode = "YawTimer";
Group3050.children[1] = ROUTE3052;

let ROUTE3053 = browser.currentScene.createNode("ROUTE");
ROUTE3053.fromField = "touchTime";
ROUTE3053.fromNode = "Stand_Touch";
ROUTE3053.toField = "stopTime";
ROUTE3053.toNode = "RollTimer";
Group3050.children[2] = ROUTE3053;

let ROUTE3054 = browser.currentScene.createNode("ROUTE");
ROUTE3054.fromField = "touchTime";
ROUTE3054.fromNode = "Stand_Touch";
ROUTE3054.toField = "stopTime";
ROUTE3054.toNode = "WalkTimer";
Group3050.children[3] = ROUTE3054;

let ROUTE3055 = browser.currentScene.createNode("ROUTE");
ROUTE3055.fromField = "touchTime";
ROUTE3055.fromNode = "Stand_Touch";
ROUTE3055.toField = "stopTime";
ROUTE3055.toNode = "RunTimer";
Group3050.children[4] = ROUTE3055;

let ROUTE3056 = browser.currentScene.createNode("ROUTE");
ROUTE3056.fromField = "touchTime";
ROUTE3056.fromNode = "Stand_Touch";
ROUTE3056.toField = "stopTime";
ROUTE3056.toNode = "JumpTimer";
Group3050.children[5] = ROUTE3056;

let ROUTE3057 = browser.currentScene.createNode("ROUTE");
ROUTE3057.fromField = "touchTime";
ROUTE3057.fromNode = "Stand_Touch";
ROUTE3057.toField = "stopTime";
ROUTE3057.toNode = "KickTimer";
Group3050.children[6] = ROUTE3057;

let ROUTE3058 = browser.currentScene.createNode("ROUTE");
ROUTE3058.fromField = "touchTime";
ROUTE3058.fromNode = "Stand_Touch";
ROUTE3058.toField = "stopTime";
ROUTE3058.toNode = "StopTimer";
Group3050.children[7] = ROUTE3058;

let ROUTE3059 = browser.currentScene.createNode("ROUTE");
ROUTE3059.fromField = "touchTime";
ROUTE3059.fromNode = "Stand_Touch";
ROUTE3059.toField = "startTime";
ROUTE3059.toNode = "StandTimer";
Group3050.children[8] = ROUTE3059;

let ROUTE3060 = browser.currentScene.createNode("ROUTE");
ROUTE3060.fromField = "touchTime";
ROUTE3060.fromNode = "Pitch_Touch";
ROUTE3060.toField = "stopTime";
ROUTE3060.toNode = "StandTimer";
Group3050.children[9] = ROUTE3060;

let ROUTE3061 = browser.currentScene.createNode("ROUTE");
ROUTE3061.fromField = "touchTime";
ROUTE3061.fromNode = "Pitch_Touch";
ROUTE3061.toField = "stopTime";
ROUTE3061.toNode = "YawTimer";
Group3050.children[10] = ROUTE3061;

let ROUTE3062 = browser.currentScene.createNode("ROUTE");
ROUTE3062.fromField = "touchTime";
ROUTE3062.fromNode = "Pitch_Touch";
ROUTE3062.toField = "stopTime";
ROUTE3062.toNode = "RollTimer";
Group3050.children[11] = ROUTE3062;

let ROUTE3063 = browser.currentScene.createNode("ROUTE");
ROUTE3063.fromField = "touchTime";
ROUTE3063.fromNode = "Pitch_Touch";
ROUTE3063.toField = "stopTime";
ROUTE3063.toNode = "WalkTimer";
Group3050.children[12] = ROUTE3063;

let ROUTE3064 = browser.currentScene.createNode("ROUTE");
ROUTE3064.fromField = "touchTime";
ROUTE3064.fromNode = "Pitch_Touch";
ROUTE3064.toField = "stopTime";
ROUTE3064.toNode = "RunTimer";
Group3050.children[13] = ROUTE3064;

let ROUTE3065 = browser.currentScene.createNode("ROUTE");
ROUTE3065.fromField = "touchTime";
ROUTE3065.fromNode = "Pitch_Touch";
ROUTE3065.toField = "stopTime";
ROUTE3065.toNode = "JumpTimer";
Group3050.children[14] = ROUTE3065;

let ROUTE3066 = browser.currentScene.createNode("ROUTE");
ROUTE3066.fromField = "touchTime";
ROUTE3066.fromNode = "Pitch_Touch";
ROUTE3066.toField = "stopTime";
ROUTE3066.toNode = "KickTimer";
Group3050.children[15] = ROUTE3066;

let ROUTE3067 = browser.currentScene.createNode("ROUTE");
ROUTE3067.fromField = "touchTime";
ROUTE3067.fromNode = "Pitch_Touch";
ROUTE3067.toField = "stopTime";
ROUTE3067.toNode = "StopTimer";
Group3050.children[16] = ROUTE3067;

let ROUTE3068 = browser.currentScene.createNode("ROUTE");
ROUTE3068.fromField = "touchTime";
ROUTE3068.fromNode = "Pitch_Touch";
ROUTE3068.toField = "startTime";
ROUTE3068.toNode = "PitchTimer";
Group3050.children[17] = ROUTE3068;

let ROUTE3069 = browser.currentScene.createNode("ROUTE");
ROUTE3069.fromField = "touchTime";
ROUTE3069.fromNode = "Yaw_Touch";
ROUTE3069.toField = "stopTime";
ROUTE3069.toNode = "StandTimer";
Group3050.children[18] = ROUTE3069;

let ROUTE3070 = browser.currentScene.createNode("ROUTE");
ROUTE3070.fromField = "touchTime";
ROUTE3070.fromNode = "Yaw_Touch";
ROUTE3070.toField = "stopTime";
ROUTE3070.toNode = "PitchTimer";
Group3050.children[19] = ROUTE3070;

let ROUTE3071 = browser.currentScene.createNode("ROUTE");
ROUTE3071.fromField = "touchTime";
ROUTE3071.fromNode = "Yaw_Touch";
ROUTE3071.toField = "stopTime";
ROUTE3071.toNode = "RollTimer";
Group3050.children[20] = ROUTE3071;

let ROUTE3072 = browser.currentScene.createNode("ROUTE");
ROUTE3072.fromField = "touchTime";
ROUTE3072.fromNode = "Yaw_Touch";
ROUTE3072.toField = "stopTime";
ROUTE3072.toNode = "WalkTimer";
Group3050.children[21] = ROUTE3072;

let ROUTE3073 = browser.currentScene.createNode("ROUTE");
ROUTE3073.fromField = "touchTime";
ROUTE3073.fromNode = "Yaw_Touch";
ROUTE3073.toField = "stopTime";
ROUTE3073.toNode = "RunTimer";
Group3050.children[22] = ROUTE3073;

let ROUTE3074 = browser.currentScene.createNode("ROUTE");
ROUTE3074.fromField = "touchTime";
ROUTE3074.fromNode = "Yaw_Touch";
ROUTE3074.toField = "stopTime";
ROUTE3074.toNode = "JumpTimer";
Group3050.children[23] = ROUTE3074;

let ROUTE3075 = browser.currentScene.createNode("ROUTE");
ROUTE3075.fromField = "touchTime";
ROUTE3075.fromNode = "Yaw_Touch";
ROUTE3075.toField = "stopTime";
ROUTE3075.toNode = "KickTimer";
Group3050.children[24] = ROUTE3075;

let ROUTE3076 = browser.currentScene.createNode("ROUTE");
ROUTE3076.fromField = "touchTime";
ROUTE3076.fromNode = "Yaw_Touch";
ROUTE3076.toField = "stopTime";
ROUTE3076.toNode = "StopTimer";
Group3050.children[25] = ROUTE3076;

let ROUTE3077 = browser.currentScene.createNode("ROUTE");
ROUTE3077.fromField = "touchTime";
ROUTE3077.fromNode = "Yaw_Touch";
ROUTE3077.toField = "startTime";
ROUTE3077.toNode = "YawTimer";
Group3050.children[26] = ROUTE3077;

let ROUTE3078 = browser.currentScene.createNode("ROUTE");
ROUTE3078.fromField = "touchTime";
ROUTE3078.fromNode = "Walk_Touch";
ROUTE3078.toField = "stopTime";
ROUTE3078.toNode = "StandTimer";
Group3050.children[27] = ROUTE3078;

let ROUTE3079 = browser.currentScene.createNode("ROUTE");
ROUTE3079.fromField = "touchTime";
ROUTE3079.fromNode = "Walk_Touch";
ROUTE3079.toField = "stopTime";
ROUTE3079.toNode = "PitchTimer";
Group3050.children[28] = ROUTE3079;

let ROUTE3080 = browser.currentScene.createNode("ROUTE");
ROUTE3080.fromField = "touchTime";
ROUTE3080.fromNode = "Walk_Touch";
ROUTE3080.toField = "stopTime";
ROUTE3080.toNode = "YawTimer";
Group3050.children[29] = ROUTE3080;

let ROUTE3081 = browser.currentScene.createNode("ROUTE");
ROUTE3081.fromField = "touchTime";
ROUTE3081.fromNode = "Walk_Touch";
ROUTE3081.toField = "stopTime";
ROUTE3081.toNode = "RollTimer";
Group3050.children[30] = ROUTE3081;

let ROUTE3082 = browser.currentScene.createNode("ROUTE");
ROUTE3082.fromField = "touchTime";
ROUTE3082.fromNode = "Walk_Touch";
ROUTE3082.toField = "stopTime";
ROUTE3082.toNode = "RunTimer";
Group3050.children[31] = ROUTE3082;

let ROUTE3083 = browser.currentScene.createNode("ROUTE");
ROUTE3083.fromField = "touchTime";
ROUTE3083.fromNode = "Walk_Touch";
ROUTE3083.toField = "stopTime";
ROUTE3083.toNode = "JumpTimer";
Group3050.children[32] = ROUTE3083;

let ROUTE3084 = browser.currentScene.createNode("ROUTE");
ROUTE3084.fromField = "touchTime";
ROUTE3084.fromNode = "Walk_Touch";
ROUTE3084.toField = "stopTime";
ROUTE3084.toNode = "KickTimer";
Group3050.children[33] = ROUTE3084;

let ROUTE3085 = browser.currentScene.createNode("ROUTE");
ROUTE3085.fromField = "touchTime";
ROUTE3085.fromNode = "Walk_Touch";
ROUTE3085.toField = "stopTime";
ROUTE3085.toNode = "StopTimer";
Group3050.children[34] = ROUTE3085;

let ROUTE3086 = browser.currentScene.createNode("ROUTE");
ROUTE3086.fromField = "touchTime";
ROUTE3086.fromNode = "Walk_Touch";
ROUTE3086.toField = "startTime";
ROUTE3086.toNode = "WalkTimer";
Group3050.children[35] = ROUTE3086;

let ROUTE3087 = browser.currentScene.createNode("ROUTE");
ROUTE3087.fromField = "touchTime";
ROUTE3087.fromNode = "Roll_Touch";
ROUTE3087.toField = "stopTime";
ROUTE3087.toNode = "StandTimer";
Group3050.children[36] = ROUTE3087;

let ROUTE3088 = browser.currentScene.createNode("ROUTE");
ROUTE3088.fromField = "touchTime";
ROUTE3088.fromNode = "Roll_Touch";
ROUTE3088.toField = "stopTime";
ROUTE3088.toNode = "PitchTimer";
Group3050.children[37] = ROUTE3088;

let ROUTE3089 = browser.currentScene.createNode("ROUTE");
ROUTE3089.fromField = "touchTime";
ROUTE3089.fromNode = "Roll_Touch";
ROUTE3089.toField = "stopTime";
ROUTE3089.toNode = "YawTimer";
Group3050.children[38] = ROUTE3089;

let ROUTE3090 = browser.currentScene.createNode("ROUTE");
ROUTE3090.fromField = "touchTime";
ROUTE3090.fromNode = "Roll_Touch";
ROUTE3090.toField = "stopTime";
ROUTE3090.toNode = "WalkTimer";
Group3050.children[39] = ROUTE3090;

let ROUTE3091 = browser.currentScene.createNode("ROUTE");
ROUTE3091.fromField = "touchTime";
ROUTE3091.fromNode = "Roll_Touch";
ROUTE3091.toField = "stopTime";
ROUTE3091.toNode = "RunTimer";
Group3050.children[40] = ROUTE3091;

let ROUTE3092 = browser.currentScene.createNode("ROUTE");
ROUTE3092.fromField = "touchTime";
ROUTE3092.fromNode = "Roll_Touch";
ROUTE3092.toField = "stopTime";
ROUTE3092.toNode = "JumpTimer";
Group3050.children[41] = ROUTE3092;

let ROUTE3093 = browser.currentScene.createNode("ROUTE");
ROUTE3093.fromField = "touchTime";
ROUTE3093.fromNode = "Roll_Touch";
ROUTE3093.toField = "stopTime";
ROUTE3093.toNode = "KickTimer";
Group3050.children[42] = ROUTE3093;

let ROUTE3094 = browser.currentScene.createNode("ROUTE");
ROUTE3094.fromField = "touchTime";
ROUTE3094.fromNode = "Roll_Touch";
ROUTE3094.toField = "stopTime";
ROUTE3094.toNode = "StopTimer";
Group3050.children[43] = ROUTE3094;

let ROUTE3095 = browser.currentScene.createNode("ROUTE");
ROUTE3095.fromField = "touchTime";
ROUTE3095.fromNode = "Roll_Touch";
ROUTE3095.toField = "startTime";
ROUTE3095.toNode = "RollTimer";
Group3050.children[44] = ROUTE3095;

let ROUTE3096 = browser.currentScene.createNode("ROUTE");
ROUTE3096.fromField = "touchTime";
ROUTE3096.fromNode = "Run_Touch";
ROUTE3096.toField = "stopTime";
ROUTE3096.toNode = "StandTimer";
Group3050.children[45] = ROUTE3096;

let ROUTE3097 = browser.currentScene.createNode("ROUTE");
ROUTE3097.fromField = "touchTime";
ROUTE3097.fromNode = "Run_Touch";
ROUTE3097.toField = "stopTime";
ROUTE3097.toNode = "PitchTimer";
Group3050.children[46] = ROUTE3097;

let ROUTE3098 = browser.currentScene.createNode("ROUTE");
ROUTE3098.fromField = "touchTime";
ROUTE3098.fromNode = "Run_Touch";
ROUTE3098.toField = "stopTime";
ROUTE3098.toNode = "YawTimer";
Group3050.children[47] = ROUTE3098;

let ROUTE3099 = browser.currentScene.createNode("ROUTE");
ROUTE3099.fromField = "touchTime";
ROUTE3099.fromNode = "Run_Touch";
ROUTE3099.toField = "stopTime";
ROUTE3099.toNode = "RollTimer";
Group3050.children[48] = ROUTE3099;

let ROUTE3100 = browser.currentScene.createNode("ROUTE");
ROUTE3100.fromField = "touchTime";
ROUTE3100.fromNode = "Run_Touch";
ROUTE3100.toField = "stopTime";
ROUTE3100.toNode = "WalkTimer";
Group3050.children[49] = ROUTE3100;

let ROUTE3101 = browser.currentScene.createNode("ROUTE");
ROUTE3101.fromField = "touchTime";
ROUTE3101.fromNode = "Run_Touch";
ROUTE3101.toField = "stopTime";
ROUTE3101.toNode = "JumpTimer";
Group3050.children[50] = ROUTE3101;

let ROUTE3102 = browser.currentScene.createNode("ROUTE");
ROUTE3102.fromField = "touchTime";
ROUTE3102.fromNode = "Run_Touch";
ROUTE3102.toField = "stopTime";
ROUTE3102.toNode = "KickTimer";
Group3050.children[51] = ROUTE3102;

let ROUTE3103 = browser.currentScene.createNode("ROUTE");
ROUTE3103.fromField = "touchTime";
ROUTE3103.fromNode = "Run_Touch";
ROUTE3103.toField = "stopTime";
ROUTE3103.toNode = "StopTimer";
Group3050.children[52] = ROUTE3103;

let ROUTE3104 = browser.currentScene.createNode("ROUTE");
ROUTE3104.fromField = "touchTime";
ROUTE3104.fromNode = "Run_Touch";
ROUTE3104.toField = "startTime";
ROUTE3104.toNode = "RunTimer";
Group3050.children[53] = ROUTE3104;

let ROUTE3105 = browser.currentScene.createNode("ROUTE");
ROUTE3105.fromField = "touchTime";
ROUTE3105.fromNode = "Jump_Touch";
ROUTE3105.toField = "stopTime";
ROUTE3105.toNode = "StandTimer";
Group3050.children[54] = ROUTE3105;

let ROUTE3106 = browser.currentScene.createNode("ROUTE");
ROUTE3106.fromField = "touchTime";
ROUTE3106.fromNode = "Jump_Touch";
ROUTE3106.toField = "stopTime";
ROUTE3106.toNode = "PitchTimer";
Group3050.children[55] = ROUTE3106;

let ROUTE3107 = browser.currentScene.createNode("ROUTE");
ROUTE3107.fromField = "touchTime";
ROUTE3107.fromNode = "Jump_Touch";
ROUTE3107.toField = "stopTime";
ROUTE3107.toNode = "YawTimer";
Group3050.children[56] = ROUTE3107;

let ROUTE3108 = browser.currentScene.createNode("ROUTE");
ROUTE3108.fromField = "touchTime";
ROUTE3108.fromNode = "Jump_Touch";
ROUTE3108.toField = "stopTime";
ROUTE3108.toNode = "RollTimer";
Group3050.children[57] = ROUTE3108;

let ROUTE3109 = browser.currentScene.createNode("ROUTE");
ROUTE3109.fromField = "touchTime";
ROUTE3109.fromNode = "Jump_Touch";
ROUTE3109.toField = "stopTime";
ROUTE3109.toNode = "WalkTimer";
Group3050.children[58] = ROUTE3109;

let ROUTE3110 = browser.currentScene.createNode("ROUTE");
ROUTE3110.fromField = "touchTime";
ROUTE3110.fromNode = "Jump_Touch";
ROUTE3110.toField = "stopTime";
ROUTE3110.toNode = "RunTimer";
Group3050.children[59] = ROUTE3110;

let ROUTE3111 = browser.currentScene.createNode("ROUTE");
ROUTE3111.fromField = "touchTime";
ROUTE3111.fromNode = "Jump_Touch";
ROUTE3111.toField = "stopTime";
ROUTE3111.toNode = "KickTimer";
Group3050.children[60] = ROUTE3111;

let ROUTE3112 = browser.currentScene.createNode("ROUTE");
ROUTE3112.fromField = "touchTime";
ROUTE3112.fromNode = "Jump_Touch";
ROUTE3112.toField = "stopTime";
ROUTE3112.toNode = "StopTimer";
Group3050.children[61] = ROUTE3112;

let ROUTE3113 = browser.currentScene.createNode("ROUTE");
ROUTE3113.fromField = "touchTime";
ROUTE3113.fromNode = "Jump_Touch";
ROUTE3113.toField = "startTime";
ROUTE3113.toNode = "JumpTimer";
Group3050.children[62] = ROUTE3113;

let ROUTE3114 = browser.currentScene.createNode("ROUTE");
ROUTE3114.fromField = "touchTime";
ROUTE3114.fromNode = "Kick_Touch";
ROUTE3114.toField = "stopTime";
ROUTE3114.toNode = "StandTimer";
Group3050.children[63] = ROUTE3114;

let ROUTE3115 = browser.currentScene.createNode("ROUTE");
ROUTE3115.fromField = "touchTime";
ROUTE3115.fromNode = "Kick_Touch";
ROUTE3115.toField = "stopTime";
ROUTE3115.toNode = "PitchTimer";
Group3050.children[64] = ROUTE3115;

let ROUTE3116 = browser.currentScene.createNode("ROUTE");
ROUTE3116.fromField = "touchTime";
ROUTE3116.fromNode = "Kick_Touch";
ROUTE3116.toField = "stopTime";
ROUTE3116.toNode = "YawTimer";
Group3050.children[65] = ROUTE3116;

let ROUTE3117 = browser.currentScene.createNode("ROUTE");
ROUTE3117.fromField = "touchTime";
ROUTE3117.fromNode = "Kick_Touch";
ROUTE3117.toField = "stopTime";
ROUTE3117.toNode = "RollTimer";
Group3050.children[66] = ROUTE3117;

let ROUTE3118 = browser.currentScene.createNode("ROUTE");
ROUTE3118.fromField = "touchTime";
ROUTE3118.fromNode = "Kick_Touch";
ROUTE3118.toField = "stopTime";
ROUTE3118.toNode = "WalkTimer";
Group3050.children[67] = ROUTE3118;

let ROUTE3119 = browser.currentScene.createNode("ROUTE");
ROUTE3119.fromField = "touchTime";
ROUTE3119.fromNode = "Kick_Touch";
ROUTE3119.toField = "stopTime";
ROUTE3119.toNode = "RunTimer";
Group3050.children[68] = ROUTE3119;

let ROUTE3120 = browser.currentScene.createNode("ROUTE");
ROUTE3120.fromField = "touchTime";
ROUTE3120.fromNode = "Kick_Touch";
ROUTE3120.toField = "stopTime";
ROUTE3120.toNode = "JumpTimer";
Group3050.children[69] = ROUTE3120;

let ROUTE3121 = browser.currentScene.createNode("ROUTE");
ROUTE3121.fromField = "touchTime";
ROUTE3121.fromNode = "Kick_Touch";
ROUTE3121.toField = "stopTime";
ROUTE3121.toNode = "StopTimer";
Group3050.children[70] = ROUTE3121;

let ROUTE3122 = browser.currentScene.createNode("ROUTE");
ROUTE3122.fromField = "touchTime";
ROUTE3122.fromNode = "Kick_Touch";
ROUTE3122.toField = "startTime";
ROUTE3122.toNode = "KickTimer";
Group3050.children[71] = ROUTE3122;

let ROUTE3123 = browser.currentScene.createNode("ROUTE");
ROUTE3123.fromField = "touchTime";
ROUTE3123.fromNode = "Stop_Touch";
ROUTE3123.toField = "stopTime";
ROUTE3123.toNode = "StandTimer";
Group3050.children[72] = ROUTE3123;

let ROUTE3124 = browser.currentScene.createNode("ROUTE");
ROUTE3124.fromField = "touchTime";
ROUTE3124.fromNode = "Stop_Touch";
ROUTE3124.toField = "stopTime";
ROUTE3124.toNode = "PitchTimer";
Group3050.children[73] = ROUTE3124;

let ROUTE3125 = browser.currentScene.createNode("ROUTE");
ROUTE3125.fromField = "touchTime";
ROUTE3125.fromNode = "Stop_Touch";
ROUTE3125.toField = "stopTime";
ROUTE3125.toNode = "YawTimer";
Group3050.children[74] = ROUTE3125;

let ROUTE3126 = browser.currentScene.createNode("ROUTE");
ROUTE3126.fromField = "touchTime";
ROUTE3126.fromNode = "Stop_Touch";
ROUTE3126.toField = "stopTime";
ROUTE3126.toNode = "RollTimer";
Group3050.children[75] = ROUTE3126;

let ROUTE3127 = browser.currentScene.createNode("ROUTE");
ROUTE3127.fromField = "touchTime";
ROUTE3127.fromNode = "Stop_Touch";
ROUTE3127.toField = "stopTime";
ROUTE3127.toNode = "WalkTimer";
Group3050.children[76] = ROUTE3127;

let ROUTE3128 = browser.currentScene.createNode("ROUTE");
ROUTE3128.fromField = "touchTime";
ROUTE3128.fromNode = "Stop_Touch";
ROUTE3128.toField = "stopTime";
ROUTE3128.toNode = "RunTimer";
Group3050.children[77] = ROUTE3128;

let ROUTE3129 = browser.currentScene.createNode("ROUTE");
ROUTE3129.fromField = "touchTime";
ROUTE3129.fromNode = "Stop_Touch";
ROUTE3129.toField = "stopTime";
ROUTE3129.toNode = "JumpTimer";
Group3050.children[78] = ROUTE3129;

let ROUTE3130 = browser.currentScene.createNode("ROUTE");
ROUTE3130.fromField = "touchTime";
ROUTE3130.fromNode = "Stop_Touch";
ROUTE3130.toField = "stopTime";
ROUTE3130.toNode = "KickTimer";
Group3050.children[79] = ROUTE3130;

let ROUTE3131 = browser.currentScene.createNode("ROUTE");
ROUTE3131.fromField = "touchTime";
ROUTE3131.fromNode = "Stop_Touch";
ROUTE3131.toField = "startTime";
ROUTE3131.toNode = "StopTimer";
Group3050.children[80] = ROUTE3131;

browser.currentScene.children[23] = Group3050;

