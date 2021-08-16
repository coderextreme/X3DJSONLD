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
meta3.content = "HAnimSpecificationLOA3Illustrated.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.";
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
meta9.name = "creator";
meta9.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "Image";
meta10.content = "HAnimSpecificationLOA3Illustrated.png";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "Image";
meta11.content = "HAnimSpecificationLOA3IllustratedLeftSide.png";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "HAnimSpecificationLOA3Invisible.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "HAnimSpecificationLOA3Animation.x3d";
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
meta18.name = "TODO";
meta18.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "warning";
meta19.content = "BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "TODO";
meta20.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "reference";
meta21.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "reference";
meta22.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "reference";
meta23.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "translator";
meta24.content = "Don Brutzman and Joe Williams";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "generator";
meta25.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "reference";
meta26.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "reference";
meta27.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "reference";
meta28.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[26] = meta28;

let meta29 = browser.currentScene.createNode("meta");
meta29.name = "reference";
meta29.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[27] = meta29;

let meta30 = browser.currentScene.createNode("meta");
meta30.name = "generator";
meta30.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[28] = meta30;

let meta31 = browser.currentScene.createNode("meta");
meta31.name = "identifier";
meta31.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Illustrated.x3d";
head1.meta[29] = meta31;

let meta32 = browser.currentScene.createNode("meta");
meta32.name = "license";
meta32.content = "../license.html";
head1.meta[30] = meta32;

head = head1;

let Background34 = browser.currentScene.createNode("Background");
Background34.skyColor = new MFColor(new float[0.3,0.3,0.3]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background34;

let NavigationInfo35 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo35;

let Group36 = browser.currentScene.createNode("Group");
Group36.DEF = "Original_WorldInfo";
let WorldInfo37 = browser.currentScene.createNode("WorldInfo");
WorldInfo37.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo37.title = "HANIM 200x Default Joint Centers, LOA3";
Group36.children = new MFNode();

Group36.children[0] = WorldInfo37;

browser.currentScene.children[2] = Group36;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Front";
Viewpoint38.position = new SFVec3f(new float[0,0.4,4]);
browser.currentScene.children[3] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Front Close";
Viewpoint39.position = new SFVec3f(new float[0,0.8,2]);
browser.currentScene.children[4] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Front Closer";
Viewpoint40.position = new SFVec3f(new float[0,1.2,1]);
browser.currentScene.children[5] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Front Face";
Viewpoint41.position = new SFVec3f(new float[0,1.63,1]);
browser.currentScene.children[6] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Right Side";
Viewpoint42.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint42.position = new SFVec3f(new float[2.6,0.8,0]);
browser.currentScene.children[7] = Viewpoint42;

let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint43.description = "Humanoid LOA 3 Right Side Close";
Viewpoint43.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint43.position = new SFVec3f(new float[1,0.8,0.5]);
browser.currentScene.children[8] = Viewpoint43;

let Viewpoint44 = browser.currentScene.createNode("Viewpoint");
Viewpoint44.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint44.description = "Humanoid LOA 3 Left Side Close";
Viewpoint44.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint44.position = new SFVec3f(new float[-1,0.8,0.5]);
browser.currentScene.children[9] = Viewpoint44;

let Viewpoint45 = browser.currentScene.createNode("Viewpoint");
Viewpoint45.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint45.description = "Humanoid LOA 3 Left Side";
Viewpoint45.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint45.position = new SFVec3f(new float[-2.6,0.8,0]);
browser.currentScene.children[10] = Viewpoint45;

let Viewpoint46 = browser.currentScene.createNode("Viewpoint");
Viewpoint46.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint46.description = "Humanoid LOA 3 Top";
Viewpoint46.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint46.position = new SFVec3f(new float[0,3.5,0]);
browser.currentScene.children[11] = Viewpoint46;

let HAnimHumanoid47 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid47.name = "humanoid";
HAnimHumanoid47.DEF = "hanim_humanoid";
HAnimHumanoid47.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid47.version = "1.0";
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "humanoid_root";
HAnimJoint48.DEF = "hanim_humanoid_root";
HAnimJoint48.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint48.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment49 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment49.name = "sacrum";
HAnimSegment49.DEF = "hanim_sacrum";
//<HAnimJoint name='humanoid_root'/> visualization sphere is placed within <HAnimSegment name='sacrum'/>
let TouchSensor50 = browser.currentScene.createNode("TouchSensor");
TouchSensor50.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment49.children = new MFNode();

HAnimSegment49.children[0] = TouchSensor50;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Shape52 = browser.currentScene.createNode("Shape");
Shape52.DEF = "HAnimJointShape";
let Sphere53 = browser.currentScene.createNode("Sphere");
Sphere53.radius = 0.006;
Shape52.geometry = Sphere53;

let Appearance54 = browser.currentScene.createNode("Appearance");
Appearance54.DEF = "HAnimJointAppearance";
let Material55 = browser.currentScene.createNode("Material");
Material55.diffuseColor = new SFColor(new float[1,0.5,0]);
Material55.transparency = 0.5;
Appearance54.material = Material55;

Shape52.appearance = Appearance54;

Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

HAnimSegment49.children[1] = Transform51;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
let Shape56 = browser.currentScene.createNode("Shape");
let LineSet57 = browser.currentScene.createNode("LineSet");
LineSet57.vertexCount = new MFInt32(new int[2]);
let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet57.coord = Coordinate58;

let ColorRGBA59 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA59.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA59.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet57.color = ColorRGBA59;

Shape56.geometry = LineSet57;

HAnimSegment49.children[2] = Shape56;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
let Shape60 = browser.currentScene.createNode("Shape");
let LineSet61 = browser.currentScene.createNode("LineSet");
LineSet61.vertexCount = new MFInt32(new int[2]);
let Coordinate62 = browser.currentScene.createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet61.coord = Coordinate62;

let ColorRGBA63 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA63.USE = "HAnimSegmentLineColorRGBA";
LineSet61.color = ColorRGBA63;

Shape60.geometry = LineSet61;

HAnimSegment49.children[3] = Shape60;

HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimSegment49;

let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "sacroiliac";
HAnimJoint64.DEF = "hanim_sacroiliac";
HAnimJoint64.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint64.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment65 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment65.name = "pelvis";
HAnimSegment65.DEF = "hanim_pelvis";
//<HAnimJoint name='sacroiliac'/> visualization sphere is placed within <HAnimSegment name='pelvis'/>
let TouchSensor66 = browser.currentScene.createNode("TouchSensor");
TouchSensor66.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment65.children = new MFNode();

HAnimSegment65.children[0] = TouchSensor66;

let Transform67 = browser.currentScene.createNode("Transform");
Transform67.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "HAnimJointShape";
Transform67.children = new MFNode();

Transform67.children[0] = Shape68;

HAnimSegment65.children[1] = Transform67;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
let Shape69 = browser.currentScene.createNode("Shape");
let LineSet70 = browser.currentScene.createNode("LineSet");
LineSet70.vertexCount = new MFInt32(new int[2]);
let Coordinate71 = browser.currentScene.createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet70.coord = Coordinate71;

let ColorRGBA72 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA72.USE = "HAnimSegmentLineColorRGBA";
LineSet70.color = ColorRGBA72;

Shape69.geometry = LineSet70;

HAnimSegment65.children[2] = Shape69;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
let Shape73 = browser.currentScene.createNode("Shape");
let LineSet74 = browser.currentScene.createNode("LineSet");
LineSet74.vertexCount = new MFInt32(new int[2]);
let Coordinate75 = browser.currentScene.createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet74.coord = Coordinate75;

let ColorRGBA76 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA76.USE = "HAnimSegmentLineColorRGBA";
LineSet74.color = ColorRGBA76;

Shape73.geometry = LineSet74;

HAnimSegment65.children[3] = Shape73;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
let Shape77 = browser.currentScene.createNode("Shape");
let LineSet78 = browser.currentScene.createNode("LineSet");
LineSet78.vertexCount = new MFInt32(new int[2]);
let Coordinate79 = browser.currentScene.createNode("Coordinate");
Coordinate79.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet78.coord = Coordinate79;

let ColorRGBA80 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA80.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA80.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet78.color = ColorRGBA80;

Shape77.geometry = LineSet78;

HAnimSegment65.children[4] = Shape77;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
let Shape81 = browser.currentScene.createNode("Shape");
let LineSet82 = browser.currentScene.createNode("LineSet");
LineSet82.vertexCount = new MFInt32(new int[2]);
let Coordinate83 = browser.currentScene.createNode("Coordinate");
Coordinate83.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet82.coord = Coordinate83;

let ColorRGBA84 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA84.USE = "HAnimSiteLineColorRGBA";
LineSet82.color = ColorRGBA84;

Shape81.geometry = LineSet82;

HAnimSegment65.children[5] = Shape81;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
let Shape85 = browser.currentScene.createNode("Shape");
let LineSet86 = browser.currentScene.createNode("LineSet");
LineSet86.vertexCount = new MFInt32(new int[2]);
let Coordinate87 = browser.currentScene.createNode("Coordinate");
Coordinate87.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet86.coord = Coordinate87;

let ColorRGBA88 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA88.USE = "HAnimSiteLineColorRGBA";
LineSet86.color = ColorRGBA88;

Shape85.geometry = LineSet86;

HAnimSegment65.children[6] = Shape85;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
let Shape89 = browser.currentScene.createNode("Shape");
let LineSet90 = browser.currentScene.createNode("LineSet");
LineSet90.vertexCount = new MFInt32(new int[2]);
let Coordinate91 = browser.currentScene.createNode("Coordinate");
Coordinate91.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet90.coord = Coordinate91;

let ColorRGBA92 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA92.USE = "HAnimSiteLineColorRGBA";
LineSet90.color = ColorRGBA92;

Shape89.geometry = LineSet90;

HAnimSegment65.children[7] = Shape89;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
let Shape93 = browser.currentScene.createNode("Shape");
let LineSet94 = browser.currentScene.createNode("LineSet");
LineSet94.vertexCount = new MFInt32(new int[2]);
let Coordinate95 = browser.currentScene.createNode("Coordinate");
Coordinate95.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet94.coord = Coordinate95;

let ColorRGBA96 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA96.USE = "HAnimSiteLineColorRGBA";
LineSet94.color = ColorRGBA96;

Shape93.geometry = LineSet94;

HAnimSegment65.children[8] = Shape93;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
let Shape97 = browser.currentScene.createNode("Shape");
let LineSet98 = browser.currentScene.createNode("LineSet");
LineSet98.vertexCount = new MFInt32(new int[2]);
let Coordinate99 = browser.currentScene.createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet98.coord = Coordinate99;

let ColorRGBA100 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA100.USE = "HAnimSiteLineColorRGBA";
LineSet98.color = ColorRGBA100;

Shape97.geometry = LineSet98;

HAnimSegment65.children[9] = Shape97;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
let Shape101 = browser.currentScene.createNode("Shape");
let LineSet102 = browser.currentScene.createNode("LineSet");
LineSet102.vertexCount = new MFInt32(new int[2]);
let Coordinate103 = browser.currentScene.createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet102.coord = Coordinate103;

let ColorRGBA104 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA104.USE = "HAnimSiteLineColorRGBA";
LineSet102.color = ColorRGBA104;

Shape101.geometry = LineSet102;

HAnimSegment65.children[10] = Shape101;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
let Shape105 = browser.currentScene.createNode("Shape");
let LineSet106 = browser.currentScene.createNode("LineSet");
LineSet106.vertexCount = new MFInt32(new int[2]);
let Coordinate107 = browser.currentScene.createNode("Coordinate");
Coordinate107.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet106.coord = Coordinate107;

let ColorRGBA108 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA108.USE = "HAnimSiteLineColorRGBA";
LineSet106.color = ColorRGBA108;

Shape105.geometry = LineSet106;

HAnimSegment65.children[11] = Shape105;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
let Shape109 = browser.currentScene.createNode("Shape");
let LineSet110 = browser.currentScene.createNode("LineSet");
LineSet110.vertexCount = new MFInt32(new int[2]);
let Coordinate111 = browser.currentScene.createNode("Coordinate");
Coordinate111.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet110.coord = Coordinate111;

let ColorRGBA112 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA112.USE = "HAnimSiteLineColorRGBA";
LineSet110.color = ColorRGBA112;

Shape109.geometry = LineSet110;

HAnimSegment65.children[12] = Shape109;

let HAnimSite113 = browser.currentScene.createNode("HAnimSite");
HAnimSite113.name = "r_iliocristale_pt";
HAnimSite113.DEF = "hanim_r_iliocristale_pt";
HAnimSite113.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
let TouchSensor114 = browser.currentScene.createNode("TouchSensor");
TouchSensor114.description = "HAnimSite r_iliocristale";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = TouchSensor114;

let Shape115 = browser.currentScene.createNode("Shape");
Shape115.DEF = "HAnimSiteShape";
let IndexedFaceSet116 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet116.DEF = "DiamondIFS";
IndexedFaceSet116.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet116.creaseAngle = 0.5;
IndexedFaceSet116.solid = False;
let Coordinate117 = browser.currentScene.createNode("Coordinate");
Coordinate117.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet116.coord = Coordinate117;

Shape115.geometry = IndexedFaceSet116;

let Appearance118 = browser.currentScene.createNode("Appearance");
let Material119 = browser.currentScene.createNode("Material");
Material119.diffuseColor = new SFColor(new float[1,0,0]);
Appearance118.material = Material119;

Shape115.appearance = Appearance118;

HAnimSite113.children[1] = Shape115;

HAnimSegment65.children[13] = HAnimSite113;

let HAnimSite120 = browser.currentScene.createNode("HAnimSite");
HAnimSite120.name = "r_trochanterion_pt";
HAnimSite120.DEF = "hanim_r_trochanterion_pt";
HAnimSite120.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
let TouchSensor121 = browser.currentScene.createNode("TouchSensor");
TouchSensor121.description = "HAnimSite r_trochanterion";
HAnimSite120.children = new MFNode();

HAnimSite120.children[0] = TouchSensor121;

let Shape122 = browser.currentScene.createNode("Shape");
Shape122.USE = "HAnimSiteShape";
HAnimSite120.children[1] = Shape122;

HAnimSegment65.children[14] = HAnimSite120;

let HAnimSite123 = browser.currentScene.createNode("HAnimSite");
HAnimSite123.name = "l_iliocristale_pt";
HAnimSite123.DEF = "hanim_l_iliocristale_pt";
HAnimSite123.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
let TouchSensor124 = browser.currentScene.createNode("TouchSensor");
TouchSensor124.description = "HAnimSite l_iliocristale";
HAnimSite123.children = new MFNode();

HAnimSite123.children[0] = TouchSensor124;

let Shape125 = browser.currentScene.createNode("Shape");
Shape125.USE = "HAnimSiteShape";
HAnimSite123.children[1] = Shape125;

HAnimSegment65.children[15] = HAnimSite123;

let HAnimSite126 = browser.currentScene.createNode("HAnimSite");
HAnimSite126.name = "l_trochanterion_pt";
HAnimSite126.DEF = "hanim_l_trochanterion_pt";
HAnimSite126.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
let TouchSensor127 = browser.currentScene.createNode("TouchSensor");
TouchSensor127.description = "HAnimSite l_trochanterion";
HAnimSite126.children = new MFNode();

HAnimSite126.children[0] = TouchSensor127;

let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "HAnimSiteShape";
HAnimSite126.children[1] = Shape128;

HAnimSegment65.children[16] = HAnimSite126;

let HAnimSite129 = browser.currentScene.createNode("HAnimSite");
HAnimSite129.name = "r_asis_pt";
HAnimSite129.DEF = "hanim_r_asis_pt";
HAnimSite129.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
let TouchSensor130 = browser.currentScene.createNode("TouchSensor");
TouchSensor130.description = "HAnimSite r_asis";
HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = TouchSensor130;

let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "HAnimSiteShape";
HAnimSite129.children[1] = Shape131;

HAnimSegment65.children[17] = HAnimSite129;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.name = "l_asis_pt";
HAnimSite132.DEF = "hanim_l_asis_pt";
HAnimSite132.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
let TouchSensor133 = browser.currentScene.createNode("TouchSensor");
TouchSensor133.description = "HAnimSite l_asis";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

HAnimSegment65.children[18] = HAnimSite132;

let HAnimSite135 = browser.currentScene.createNode("HAnimSite");
HAnimSite135.name = "r_psis_pt";
HAnimSite135.DEF = "hanim_r_psis_pt";
HAnimSite135.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
let TouchSensor136 = browser.currentScene.createNode("TouchSensor");
TouchSensor136.description = "HAnimSite r_psis";
HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = TouchSensor136;

let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "HAnimSiteShape";
HAnimSite135.children[1] = Shape137;

HAnimSegment65.children[19] = HAnimSite135;

let HAnimSite138 = browser.currentScene.createNode("HAnimSite");
HAnimSite138.name = "l_psis_pt";
HAnimSite138.DEF = "hanim_l_psis_pt";
HAnimSite138.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
let TouchSensor139 = browser.currentScene.createNode("TouchSensor");
TouchSensor139.description = "HAnimSite l_psis";
HAnimSite138.children = new MFNode();

HAnimSite138.children[0] = TouchSensor139;

let Shape140 = browser.currentScene.createNode("Shape");
Shape140.USE = "HAnimSiteShape";
HAnimSite138.children[1] = Shape140;

HAnimSegment65.children[20] = HAnimSite138;

let HAnimSite141 = browser.currentScene.createNode("HAnimSite");
HAnimSite141.name = "crotch_pt";
HAnimSite141.DEF = "hanim_crotch_pt";
HAnimSite141.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
let TouchSensor142 = browser.currentScene.createNode("TouchSensor");
TouchSensor142.description = "HAnimSite crotch";
HAnimSite141.children = new MFNode();

HAnimSite141.children[0] = TouchSensor142;

let Shape143 = browser.currentScene.createNode("Shape");
Shape143.USE = "HAnimSiteShape";
HAnimSite141.children[1] = Shape143;

HAnimSegment65.children[21] = HAnimSite141;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.name = "l_hip";
HAnimJoint144.DEF = "hanim_l_hip";
HAnimJoint144.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint144.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment145.name = "l_thigh";
HAnimSegment145.DEF = "hanim_l_thigh";
//<HAnimJoint name='l_hip'/> visualization sphere is placed within <HAnimSegment name='l_thigh'/>
let TouchSensor146 = browser.currentScene.createNode("TouchSensor");
TouchSensor146.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment145.children = new MFNode();

HAnimSegment145.children[0] = TouchSensor146;

let Transform147 = browser.currentScene.createNode("Transform");
Transform147.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Shape148 = browser.currentScene.createNode("Shape");
Shape148.USE = "HAnimJointShape";
Transform147.children = new MFNode();

Transform147.children[0] = Shape148;

HAnimSegment145.children[1] = Transform147;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
let Shape149 = browser.currentScene.createNode("Shape");
let LineSet150 = browser.currentScene.createNode("LineSet");
LineSet150.vertexCount = new MFInt32(new int[2]);
let Coordinate151 = browser.currentScene.createNode("Coordinate");
Coordinate151.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet150.coord = Coordinate151;

let ColorRGBA152 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA152.USE = "HAnimSegmentLineColorRGBA";
LineSet150.color = ColorRGBA152;

Shape149.geometry = LineSet150;

HAnimSegment145.children[2] = Shape149;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
let Shape153 = browser.currentScene.createNode("Shape");
let LineSet154 = browser.currentScene.createNode("LineSet");
LineSet154.vertexCount = new MFInt32(new int[2]);
let Coordinate155 = browser.currentScene.createNode("Coordinate");
Coordinate155.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet154.coord = Coordinate155;

let ColorRGBA156 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA156.USE = "HAnimSiteLineColorRGBA";
LineSet154.color = ColorRGBA156;

Shape153.geometry = LineSet154;

HAnimSegment145.children[3] = Shape153;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
let Shape157 = browser.currentScene.createNode("Shape");
let LineSet158 = browser.currentScene.createNode("LineSet");
LineSet158.vertexCount = new MFInt32(new int[2]);
let Coordinate159 = browser.currentScene.createNode("Coordinate");
Coordinate159.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet158.coord = Coordinate159;

let ColorRGBA160 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA160.USE = "HAnimSiteLineColorRGBA";
LineSet158.color = ColorRGBA160;

Shape157.geometry = LineSet158;

HAnimSegment145.children[4] = Shape157;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
let Shape161 = browser.currentScene.createNode("Shape");
let LineSet162 = browser.currentScene.createNode("LineSet");
LineSet162.vertexCount = new MFInt32(new int[2]);
let Coordinate163 = browser.currentScene.createNode("Coordinate");
Coordinate163.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet162.coord = Coordinate163;

let ColorRGBA164 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA164.USE = "HAnimSiteLineColorRGBA";
LineSet162.color = ColorRGBA164;

Shape161.geometry = LineSet162;

HAnimSegment145.children[5] = Shape161;

let HAnimSite165 = browser.currentScene.createNode("HAnimSite");
HAnimSite165.name = "l_knee_crease_pt";
HAnimSite165.DEF = "hanim_l_knee_crease_pt";
HAnimSite165.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
let TouchSensor166 = browser.currentScene.createNode("TouchSensor");
TouchSensor166.description = "HAnimSite l_knee_crease";
HAnimSite165.children = new MFNode();

HAnimSite165.children[0] = TouchSensor166;

let Shape167 = browser.currentScene.createNode("Shape");
Shape167.USE = "HAnimSiteShape";
HAnimSite165.children[1] = Shape167;

HAnimSegment145.children[6] = HAnimSite165;

let HAnimSite168 = browser.currentScene.createNode("HAnimSite");
HAnimSite168.name = "l_femoral_lateral_epicn_pt";
HAnimSite168.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite168.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
let TouchSensor169 = browser.currentScene.createNode("TouchSensor");
TouchSensor169.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite168.children = new MFNode();

HAnimSite168.children[0] = TouchSensor169;

let Shape170 = browser.currentScene.createNode("Shape");
Shape170.USE = "HAnimSiteShape";
HAnimSite168.children[1] = Shape170;

HAnimSegment145.children[7] = HAnimSite168;

let HAnimSite171 = browser.currentScene.createNode("HAnimSite");
HAnimSite171.name = "l_femoral_medial_epicn_pt";
HAnimSite171.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite171.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
let TouchSensor172 = browser.currentScene.createNode("TouchSensor");
TouchSensor172.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite171.children = new MFNode();

HAnimSite171.children[0] = TouchSensor172;

let Shape173 = browser.currentScene.createNode("Shape");
Shape173.USE = "HAnimSiteShape";
HAnimSite171.children[1] = Shape173;

HAnimSegment145.children[8] = HAnimSite171;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimSegment145;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.name = "l_knee";
HAnimJoint174.DEF = "hanim_l_knee";
HAnimJoint174.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint174.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.name = "l_calf";
HAnimSegment175.DEF = "hanim_l_calf";
//<HAnimJoint name='l_knee'/> visualization sphere is placed within <HAnimSegment name='l_calf'/>
let TouchSensor176 = browser.currentScene.createNode("TouchSensor");
TouchSensor176.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = TouchSensor176;

let Transform177 = browser.currentScene.createNode("Transform");
Transform177.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Shape178 = browser.currentScene.createNode("Shape");
Shape178.USE = "HAnimJointShape";
Transform177.children = new MFNode();

Transform177.children[0] = Shape178;

HAnimSegment175.children[1] = Transform177;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
let Shape179 = browser.currentScene.createNode("Shape");
let LineSet180 = browser.currentScene.createNode("LineSet");
LineSet180.vertexCount = new MFInt32(new int[2]);
let Coordinate181 = browser.currentScene.createNode("Coordinate");
Coordinate181.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet180.coord = Coordinate181;

let ColorRGBA182 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA182.USE = "HAnimSegmentLineColorRGBA";
LineSet180.color = ColorRGBA182;

Shape179.geometry = LineSet180;

HAnimSegment175.children[2] = Shape179;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.name = "l_ankle";
HAnimJoint183.DEF = "hanim_l_ankle";
HAnimJoint183.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint183.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.name = "l_hindfoot";
HAnimSegment184.DEF = "hanim_l_hindfoot";
//<HAnimJoint name='l_ankle'/> visualization sphere is placed within <HAnimSegment name='l_hindfoot'/>
let TouchSensor185 = browser.currentScene.createNode("TouchSensor");
TouchSensor185.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = TouchSensor185;

let Transform186 = browser.currentScene.createNode("Transform");
Transform186.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "HAnimJointShape";
Transform186.children = new MFNode();

Transform186.children[0] = Shape187;

HAnimSegment184.children[1] = Transform186;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
let Shape188 = browser.currentScene.createNode("Shape");
let LineSet189 = browser.currentScene.createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[2]);
let Coordinate190 = browser.currentScene.createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet189.coord = Coordinate190;

let ColorRGBA191 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA191.USE = "HAnimSegmentLineColorRGBA";
LineSet189.color = ColorRGBA191;

Shape188.geometry = LineSet189;

HAnimSegment184.children[2] = Shape188;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
let Shape192 = browser.currentScene.createNode("Shape");
let LineSet193 = browser.currentScene.createNode("LineSet");
LineSet193.vertexCount = new MFInt32(new int[2]);
let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet193.coord = Coordinate194;

let ColorRGBA195 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA195.USE = "HAnimSiteLineColorRGBA";
LineSet193.color = ColorRGBA195;

Shape192.geometry = LineSet193;

HAnimSegment184.children[3] = Shape192;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
let Shape196 = browser.currentScene.createNode("Shape");
let LineSet197 = browser.currentScene.createNode("LineSet");
LineSet197.vertexCount = new MFInt32(new int[2]);
let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet197.coord = Coordinate198;

let ColorRGBA199 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA199.USE = "HAnimSiteLineColorRGBA";
LineSet197.color = ColorRGBA199;

Shape196.geometry = LineSet197;

HAnimSegment184.children[4] = Shape196;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
let Shape200 = browser.currentScene.createNode("Shape");
let LineSet201 = browser.currentScene.createNode("LineSet");
LineSet201.vertexCount = new MFInt32(new int[2]);
let Coordinate202 = browser.currentScene.createNode("Coordinate");
Coordinate202.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet201.coord = Coordinate202;

let ColorRGBA203 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSiteLineColorRGBA";
LineSet201.color = ColorRGBA203;

Shape200.geometry = LineSet201;

HAnimSegment184.children[5] = Shape200;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
let Shape204 = browser.currentScene.createNode("Shape");
let LineSet205 = browser.currentScene.createNode("LineSet");
LineSet205.vertexCount = new MFInt32(new int[2]);
let Coordinate206 = browser.currentScene.createNode("Coordinate");
Coordinate206.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet205.coord = Coordinate206;

let ColorRGBA207 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA207.USE = "HAnimSiteLineColorRGBA";
LineSet205.color = ColorRGBA207;

Shape204.geometry = LineSet205;

HAnimSegment184.children[6] = Shape204;

let HAnimSite208 = browser.currentScene.createNode("HAnimSite");
HAnimSite208.name = "l_lateral_malleolus_pt";
HAnimSite208.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite208.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
let TouchSensor209 = browser.currentScene.createNode("TouchSensor");
TouchSensor209.description = "HAnimSite l_lateral_malleolus";
HAnimSite208.children = new MFNode();

HAnimSite208.children[0] = TouchSensor209;

let Shape210 = browser.currentScene.createNode("Shape");
Shape210.USE = "HAnimSiteShape";
HAnimSite208.children[1] = Shape210;

HAnimSegment184.children[7] = HAnimSite208;

let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.name = "l_medial_malleolus_pt";
HAnimSite211.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite211.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
let TouchSensor212 = browser.currentScene.createNode("TouchSensor");
TouchSensor212.description = "HAnimSite l_medial_malleolus";
HAnimSite211.children = new MFNode();

HAnimSite211.children[0] = TouchSensor212;

let Shape213 = browser.currentScene.createNode("Shape");
Shape213.USE = "HAnimSiteShape";
HAnimSite211.children[1] = Shape213;

HAnimSegment184.children[8] = HAnimSite211;

let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.name = "l_sphyrion_pt";
HAnimSite214.DEF = "hanim_l_sphyrion_pt";
HAnimSite214.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
let TouchSensor215 = browser.currentScene.createNode("TouchSensor");
TouchSensor215.description = "HAnimSite l_sphyrion";
HAnimSite214.children = new MFNode();

HAnimSite214.children[0] = TouchSensor215;

let Shape216 = browser.currentScene.createNode("Shape");
Shape216.USE = "HAnimSiteShape";
HAnimSite214.children[1] = Shape216;

HAnimSegment184.children[9] = HAnimSite214;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.name = "l_calcaneous_post_pt";
HAnimSite217.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite217.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
let TouchSensor218 = browser.currentScene.createNode("TouchSensor");
TouchSensor218.description = "HAnimSite l_calcaneous_post";
HAnimSite217.children = new MFNode();

HAnimSite217.children[0] = TouchSensor218;

let Shape219 = browser.currentScene.createNode("Shape");
Shape219.USE = "HAnimSiteShape";
HAnimSite217.children[1] = Shape219;

HAnimSegment184.children[10] = HAnimSite217;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.name = "l_subtalar";
HAnimJoint220.DEF = "hanim_l_subtalar";
HAnimJoint220.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint220.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment221 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment221.name = "l_midproximal";
HAnimSegment221.DEF = "hanim_l_midproximal";
//<HAnimJoint name='l_subtalar'/> visualization sphere is placed within <HAnimSegment name='l_midproximal'/>
let TouchSensor222 = browser.currentScene.createNode("TouchSensor");
TouchSensor222.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment221.children = new MFNode();

HAnimSegment221.children[0] = TouchSensor222;

let Transform223 = browser.currentScene.createNode("Transform");
Transform223.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let Shape224 = browser.currentScene.createNode("Shape");
Shape224.USE = "HAnimJointShape";
Transform223.children = new MFNode();

Transform223.children[0] = Shape224;

HAnimSegment221.children[1] = Transform223;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
let Shape225 = browser.currentScene.createNode("Shape");
let LineSet226 = browser.currentScene.createNode("LineSet");
LineSet226.vertexCount = new MFInt32(new int[2]);
let Coordinate227 = browser.currentScene.createNode("Coordinate");
Coordinate227.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet226.coord = Coordinate227;

let ColorRGBA228 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA228.USE = "HAnimSegmentLineColorRGBA";
LineSet226.color = ColorRGBA228;

Shape225.geometry = LineSet226;

HAnimSegment221.children[2] = Shape225;

HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.name = "l_midtarsal";
HAnimJoint229.DEF = "hanim_l_midtarsal";
HAnimJoint229.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint229.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.name = "l_middistal";
HAnimSegment230.DEF = "hanim_l_middistal";
//<HAnimJoint name='l_midtarsal'/> visualization sphere is placed within <HAnimSegment name='l_middistal'/>
let TouchSensor231 = browser.currentScene.createNode("TouchSensor");
TouchSensor231.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment230.children = new MFNode();

HAnimSegment230.children[0] = TouchSensor231;

let Transform232 = browser.currentScene.createNode("Transform");
Transform232.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let Shape233 = browser.currentScene.createNode("Shape");
Shape233.USE = "HAnimJointShape";
Transform232.children = new MFNode();

Transform232.children[0] = Shape233;

HAnimSegment230.children[1] = Transform232;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
let Shape234 = browser.currentScene.createNode("Shape");
let LineSet235 = browser.currentScene.createNode("LineSet");
LineSet235.vertexCount = new MFInt32(new int[2]);
let Coordinate236 = browser.currentScene.createNode("Coordinate");
Coordinate236.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet235.coord = Coordinate236;

let ColorRGBA237 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA237.USE = "HAnimSegmentLineColorRGBA";
LineSet235.color = ColorRGBA237;

Shape234.geometry = LineSet235;

HAnimSegment230.children[2] = Shape234;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
let Shape238 = browser.currentScene.createNode("Shape");
let LineSet239 = browser.currentScene.createNode("LineSet");
LineSet239.vertexCount = new MFInt32(new int[2]);
let Coordinate240 = browser.currentScene.createNode("Coordinate");
Coordinate240.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet239.coord = Coordinate240;

let ColorRGBA241 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA241.USE = "HAnimSiteLineColorRGBA";
LineSet239.color = ColorRGBA241;

Shape238.geometry = LineSet239;

HAnimSegment230.children[3] = Shape238;

let HAnimSite242 = browser.currentScene.createNode("HAnimSite");
HAnimSite242.name = "l_metatarsal_pha1_pt";
HAnimSite242.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite242.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
let TouchSensor243 = browser.currentScene.createNode("TouchSensor");
TouchSensor243.description = "HAnimSite l_metatarsal_pha1";
HAnimSite242.children = new MFNode();

HAnimSite242.children[0] = TouchSensor243;

let Shape244 = browser.currentScene.createNode("Shape");
Shape244.USE = "HAnimSiteShape";
HAnimSite242.children[1] = Shape244;

HAnimSegment230.children[4] = HAnimSite242;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

let HAnimJoint245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint245.name = "l_metatarsal";
HAnimJoint245.DEF = "hanim_l_metatarsal";
HAnimJoint245.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint245.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment246 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment246.name = "l_forefoot";
HAnimSegment246.DEF = "hanim_l_forefoot";
//<HAnimJoint name='l_metatarsal'/> visualization sphere is placed within <HAnimSegment name='l_forefoot'/>
let TouchSensor247 = browser.currentScene.createNode("TouchSensor");
TouchSensor247.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment246.children = new MFNode();

HAnimSegment246.children[0] = TouchSensor247;

let Transform248 = browser.currentScene.createNode("Transform");
Transform248.translation = new SFVec3f(new float[0.1086,0,0.0762]);
let Shape249 = browser.currentScene.createNode("Shape");
Shape249.USE = "HAnimJointShape";
Transform248.children = new MFNode();

Transform248.children[0] = Shape249;

HAnimSegment246.children[1] = Transform248;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
let Shape250 = browser.currentScene.createNode("Shape");
let LineSet251 = browser.currentScene.createNode("LineSet");
LineSet251.vertexCount = new MFInt32(new int[2]);
let Coordinate252 = browser.currentScene.createNode("Coordinate");
Coordinate252.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet251.coord = Coordinate252;

let ColorRGBA253 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA253.USE = "HAnimSiteLineColorRGBA";
LineSet251.color = ColorRGBA253;

Shape250.geometry = LineSet251;

HAnimSegment246.children[2] = Shape250;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
let Shape254 = browser.currentScene.createNode("Shape");
let LineSet255 = browser.currentScene.createNode("LineSet");
LineSet255.vertexCount = new MFInt32(new int[2]);
let Coordinate256 = browser.currentScene.createNode("Coordinate");
Coordinate256.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet255.coord = Coordinate256;

let ColorRGBA257 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA257.USE = "HAnimSiteLineColorRGBA";
LineSet255.color = ColorRGBA257;

Shape254.geometry = LineSet255;

HAnimSegment246.children[3] = Shape254;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
let Shape258 = browser.currentScene.createNode("Shape");
let LineSet259 = browser.currentScene.createNode("LineSet");
LineSet259.vertexCount = new MFInt32(new int[2]);
let Coordinate260 = browser.currentScene.createNode("Coordinate");
Coordinate260.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet259.coord = Coordinate260;

let ColorRGBA261 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA261.USE = "HAnimSiteLineColorRGBA";
LineSet259.color = ColorRGBA261;

Shape258.geometry = LineSet259;

HAnimSegment246.children[4] = Shape258;

let HAnimSite262 = browser.currentScene.createNode("HAnimSite");
HAnimSite262.name = "l_forefoot_tip";
HAnimSite262.DEF = "hanim_l_forefoot_tip";
HAnimSite262.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
let TouchSensor263 = browser.currentScene.createNode("TouchSensor");
TouchSensor263.description = "HAnimSite l_forefoot_tip";
HAnimSite262.children = new MFNode();

HAnimSite262.children[0] = TouchSensor263;

let Shape264 = browser.currentScene.createNode("Shape");
Shape264.USE = "HAnimSiteShape";
HAnimSite262.children[1] = Shape264;

HAnimSegment246.children[5] = HAnimSite262;

let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.name = "l_metatarsal_pha5_pt";
HAnimSite265.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite265.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
let TouchSensor266 = browser.currentScene.createNode("TouchSensor");
TouchSensor266.description = "HAnimSite l_metatarsal_pha5";
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = TouchSensor266;

let Shape267 = browser.currentScene.createNode("Shape");
Shape267.USE = "HAnimSiteShape";
HAnimSite265.children[1] = Shape267;

HAnimSegment246.children[6] = HAnimSite265;

let HAnimSite268 = browser.currentScene.createNode("HAnimSite");
HAnimSite268.name = "l_digit2_pt";
HAnimSite268.DEF = "hanim_l_digit2_pt";
HAnimSite268.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
let TouchSensor269 = browser.currentScene.createNode("TouchSensor");
TouchSensor269.description = "HAnimSite l_digit2";
HAnimSite268.children = new MFNode();

HAnimSite268.children[0] = TouchSensor269;

let Shape270 = browser.currentScene.createNode("Shape");
Shape270.USE = "HAnimSiteShape";
HAnimSite268.children[1] = Shape270;

HAnimSegment246.children[7] = HAnimSite268;

HAnimJoint245.children = new MFNode();

HAnimJoint245.children[0] = HAnimSegment246;

HAnimJoint229.children[1] = HAnimJoint245;

HAnimJoint220.children[1] = HAnimJoint229;

HAnimJoint183.children[1] = HAnimJoint220;

HAnimJoint174.children[1] = HAnimJoint183;

HAnimJoint144.children[1] = HAnimJoint174;

HAnimJoint64.children[1] = HAnimJoint144;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.name = "r_hip";
HAnimJoint271.DEF = "hanim_r_hip";
HAnimJoint271.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint271.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.name = "r_thigh";
HAnimSegment272.DEF = "hanim_r_thigh";
//<HAnimJoint name='r_hip'/> visualization sphere is placed within <HAnimSegment name='r_thigh'/>
let TouchSensor273 = browser.currentScene.createNode("TouchSensor");
TouchSensor273.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment272.children = new MFNode();

HAnimSegment272.children[0] = TouchSensor273;

let Transform274 = browser.currentScene.createNode("Transform");
Transform274.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
let Shape275 = browser.currentScene.createNode("Shape");
Shape275.USE = "HAnimJointShape";
Transform274.children = new MFNode();

Transform274.children[0] = Shape275;

HAnimSegment272.children[1] = Transform274;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
let Shape276 = browser.currentScene.createNode("Shape");
let LineSet277 = browser.currentScene.createNode("LineSet");
LineSet277.vertexCount = new MFInt32(new int[2]);
let Coordinate278 = browser.currentScene.createNode("Coordinate");
Coordinate278.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet277.coord = Coordinate278;

let ColorRGBA279 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA279.USE = "HAnimSegmentLineColorRGBA";
LineSet277.color = ColorRGBA279;

Shape276.geometry = LineSet277;

HAnimSegment272.children[2] = Shape276;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
let Shape280 = browser.currentScene.createNode("Shape");
let LineSet281 = browser.currentScene.createNode("LineSet");
LineSet281.vertexCount = new MFInt32(new int[2]);
let Coordinate282 = browser.currentScene.createNode("Coordinate");
Coordinate282.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet281.coord = Coordinate282;

let ColorRGBA283 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA283.USE = "HAnimSiteLineColorRGBA";
LineSet281.color = ColorRGBA283;

Shape280.geometry = LineSet281;

HAnimSegment272.children[3] = Shape280;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
let Shape284 = browser.currentScene.createNode("Shape");
let LineSet285 = browser.currentScene.createNode("LineSet");
LineSet285.vertexCount = new MFInt32(new int[2]);
let Coordinate286 = browser.currentScene.createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet285.coord = Coordinate286;

let ColorRGBA287 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA287.USE = "HAnimSiteLineColorRGBA";
LineSet285.color = ColorRGBA287;

Shape284.geometry = LineSet285;

HAnimSegment272.children[4] = Shape284;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
let Shape288 = browser.currentScene.createNode("Shape");
let LineSet289 = browser.currentScene.createNode("LineSet");
LineSet289.vertexCount = new MFInt32(new int[2]);
let Coordinate290 = browser.currentScene.createNode("Coordinate");
Coordinate290.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet289.coord = Coordinate290;

let ColorRGBA291 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA291.USE = "HAnimSiteLineColorRGBA";
LineSet289.color = ColorRGBA291;

Shape288.geometry = LineSet289;

HAnimSegment272.children[5] = Shape288;

let HAnimSite292 = browser.currentScene.createNode("HAnimSite");
HAnimSite292.name = "r_knee_crease_pt";
HAnimSite292.DEF = "hanim_r_knee_crease_pt";
HAnimSite292.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
let TouchSensor293 = browser.currentScene.createNode("TouchSensor");
TouchSensor293.description = "HAnimSite r_knee_crease";
HAnimSite292.children = new MFNode();

HAnimSite292.children[0] = TouchSensor293;

let Shape294 = browser.currentScene.createNode("Shape");
Shape294.USE = "HAnimSiteShape";
HAnimSite292.children[1] = Shape294;

HAnimSegment272.children[6] = HAnimSite292;

let HAnimSite295 = browser.currentScene.createNode("HAnimSite");
HAnimSite295.name = "r_femoral_lateral_epicn_pt";
HAnimSite295.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite295.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
let TouchSensor296 = browser.currentScene.createNode("TouchSensor");
TouchSensor296.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite295.children = new MFNode();

HAnimSite295.children[0] = TouchSensor296;

let Shape297 = browser.currentScene.createNode("Shape");
Shape297.USE = "HAnimSiteShape";
HAnimSite295.children[1] = Shape297;

HAnimSegment272.children[7] = HAnimSite295;

let HAnimSite298 = browser.currentScene.createNode("HAnimSite");
HAnimSite298.name = "r_femoral_medial_epicn_pt";
HAnimSite298.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite298.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
let TouchSensor299 = browser.currentScene.createNode("TouchSensor");
TouchSensor299.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite298.children = new MFNode();

HAnimSite298.children[0] = TouchSensor299;

let Shape300 = browser.currentScene.createNode("Shape");
Shape300.USE = "HAnimSiteShape";
HAnimSite298.children[1] = Shape300;

HAnimSegment272.children[8] = HAnimSite298;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.name = "r_knee";
HAnimJoint301.DEF = "hanim_r_knee";
HAnimJoint301.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint301.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.name = "r_calf";
HAnimSegment302.DEF = "hanim_r_calf";
//<HAnimJoint name='r_knee'/> visualization sphere is placed within <HAnimSegment name='r_calf'/>
let TouchSensor303 = browser.currentScene.createNode("TouchSensor");
TouchSensor303.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment302.children = new MFNode();

HAnimSegment302.children[0] = TouchSensor303;

let Transform304 = browser.currentScene.createNode("Transform");
Transform304.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
let Shape305 = browser.currentScene.createNode("Shape");
Shape305.USE = "HAnimJointShape";
Transform304.children = new MFNode();

Transform304.children[0] = Shape305;

HAnimSegment302.children[1] = Transform304;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
let Shape306 = browser.currentScene.createNode("Shape");
let LineSet307 = browser.currentScene.createNode("LineSet");
LineSet307.vertexCount = new MFInt32(new int[2]);
let Coordinate308 = browser.currentScene.createNode("Coordinate");
Coordinate308.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet307.coord = Coordinate308;

let ColorRGBA309 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA309.USE = "HAnimSegmentLineColorRGBA";
LineSet307.color = ColorRGBA309;

Shape306.geometry = LineSet307;

HAnimSegment302.children[2] = Shape306;

HAnimJoint301.children = new MFNode();

HAnimJoint301.children[0] = HAnimSegment302;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.name = "r_ankle";
HAnimJoint310.DEF = "hanim_r_ankle";
HAnimJoint310.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint310.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.name = "r_hindfoot";
HAnimSegment311.DEF = "hanim_r_hindfoot";
//<HAnimJoint name='r_ankle'/> visualization sphere is placed within <HAnimSegment name='r_hindfoot'/>
let TouchSensor312 = browser.currentScene.createNode("TouchSensor");
TouchSensor312.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment311.children = new MFNode();

HAnimSegment311.children[0] = TouchSensor312;

let Transform313 = browser.currentScene.createNode("Transform");
Transform313.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
let Shape314 = browser.currentScene.createNode("Shape");
Shape314.USE = "HAnimJointShape";
Transform313.children = new MFNode();

Transform313.children[0] = Shape314;

HAnimSegment311.children[1] = Transform313;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
let Shape315 = browser.currentScene.createNode("Shape");
let LineSet316 = browser.currentScene.createNode("LineSet");
LineSet316.vertexCount = new MFInt32(new int[2]);
let Coordinate317 = browser.currentScene.createNode("Coordinate");
Coordinate317.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet316.coord = Coordinate317;

let ColorRGBA318 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA318.USE = "HAnimSegmentLineColorRGBA";
LineSet316.color = ColorRGBA318;

Shape315.geometry = LineSet316;

HAnimSegment311.children[2] = Shape315;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
let Shape319 = browser.currentScene.createNode("Shape");
let LineSet320 = browser.currentScene.createNode("LineSet");
LineSet320.vertexCount = new MFInt32(new int[2]);
let Coordinate321 = browser.currentScene.createNode("Coordinate");
Coordinate321.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet320.coord = Coordinate321;

let ColorRGBA322 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA322.USE = "HAnimSiteLineColorRGBA";
LineSet320.color = ColorRGBA322;

Shape319.geometry = LineSet320;

HAnimSegment311.children[3] = Shape319;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
let Shape323 = browser.currentScene.createNode("Shape");
let LineSet324 = browser.currentScene.createNode("LineSet");
LineSet324.vertexCount = new MFInt32(new int[2]);
let Coordinate325 = browser.currentScene.createNode("Coordinate");
Coordinate325.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet324.coord = Coordinate325;

let ColorRGBA326 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA326.USE = "HAnimSiteLineColorRGBA";
LineSet324.color = ColorRGBA326;

Shape323.geometry = LineSet324;

HAnimSegment311.children[4] = Shape323;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
let Shape327 = browser.currentScene.createNode("Shape");
let LineSet328 = browser.currentScene.createNode("LineSet");
LineSet328.vertexCount = new MFInt32(new int[2]);
let Coordinate329 = browser.currentScene.createNode("Coordinate");
Coordinate329.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet328.coord = Coordinate329;

let ColorRGBA330 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA330.USE = "HAnimSiteLineColorRGBA";
LineSet328.color = ColorRGBA330;

Shape327.geometry = LineSet328;

HAnimSegment311.children[5] = Shape327;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
let Shape331 = browser.currentScene.createNode("Shape");
let LineSet332 = browser.currentScene.createNode("LineSet");
LineSet332.vertexCount = new MFInt32(new int[2]);
let Coordinate333 = browser.currentScene.createNode("Coordinate");
Coordinate333.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet332.coord = Coordinate333;

let ColorRGBA334 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA334.USE = "HAnimSiteLineColorRGBA";
LineSet332.color = ColorRGBA334;

Shape331.geometry = LineSet332;

HAnimSegment311.children[6] = Shape331;

let HAnimSite335 = browser.currentScene.createNode("HAnimSite");
HAnimSite335.name = "r_lateral_malleolus_pt";
HAnimSite335.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite335.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
let TouchSensor336 = browser.currentScene.createNode("TouchSensor");
TouchSensor336.description = "HAnimSite r_lateral_malleolus";
HAnimSite335.children = new MFNode();

HAnimSite335.children[0] = TouchSensor336;

let Shape337 = browser.currentScene.createNode("Shape");
Shape337.USE = "HAnimSiteShape";
HAnimSite335.children[1] = Shape337;

HAnimSegment311.children[7] = HAnimSite335;

let HAnimSite338 = browser.currentScene.createNode("HAnimSite");
HAnimSite338.name = "r_medial_malleolus_pt";
HAnimSite338.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite338.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
let TouchSensor339 = browser.currentScene.createNode("TouchSensor");
TouchSensor339.description = "HAnimSite r_medial_malleolus";
HAnimSite338.children = new MFNode();

HAnimSite338.children[0] = TouchSensor339;

let Shape340 = browser.currentScene.createNode("Shape");
Shape340.USE = "HAnimSiteShape";
HAnimSite338.children[1] = Shape340;

HAnimSegment311.children[8] = HAnimSite338;

let HAnimSite341 = browser.currentScene.createNode("HAnimSite");
HAnimSite341.name = "r_sphyrion_pt";
HAnimSite341.DEF = "hanim_r_sphyrion_pt";
HAnimSite341.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
let TouchSensor342 = browser.currentScene.createNode("TouchSensor");
TouchSensor342.description = "HAnimSite r_sphyrion";
HAnimSite341.children = new MFNode();

HAnimSite341.children[0] = TouchSensor342;

let Shape343 = browser.currentScene.createNode("Shape");
Shape343.USE = "HAnimSiteShape";
HAnimSite341.children[1] = Shape343;

HAnimSegment311.children[9] = HAnimSite341;

let HAnimSite344 = browser.currentScene.createNode("HAnimSite");
HAnimSite344.name = "r_calcaneous_post_pt";
HAnimSite344.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite344.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
let TouchSensor345 = browser.currentScene.createNode("TouchSensor");
TouchSensor345.description = "HAnimSite r_calcaneous_post";
HAnimSite344.children = new MFNode();

HAnimSite344.children[0] = TouchSensor345;

let Shape346 = browser.currentScene.createNode("Shape");
Shape346.USE = "HAnimSiteShape";
HAnimSite344.children[1] = Shape346;

HAnimSegment311.children[10] = HAnimSite344;

HAnimJoint310.children = new MFNode();

HAnimJoint310.children[0] = HAnimSegment311;

let HAnimJoint347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint347.name = "r_subtalar";
HAnimJoint347.DEF = "hanim_r_subtalar";
HAnimJoint347.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint347.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment348 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment348.name = "r_midproximal";
HAnimSegment348.DEF = "hanim_r_midproximal";
//<HAnimJoint name='r_subtalar'/> visualization sphere is placed within <HAnimSegment name='r_midproximal'/>
let TouchSensor349 = browser.currentScene.createNode("TouchSensor");
TouchSensor349.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment348.children = new MFNode();

HAnimSegment348.children[0] = TouchSensor349;

let Transform350 = browser.currentScene.createNode("Transform");
Transform350.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
let Shape351 = browser.currentScene.createNode("Shape");
Shape351.USE = "HAnimJointShape";
Transform350.children = new MFNode();

Transform350.children[0] = Shape351;

HAnimSegment348.children[1] = Transform350;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
let Shape352 = browser.currentScene.createNode("Shape");
let LineSet353 = browser.currentScene.createNode("LineSet");
LineSet353.vertexCount = new MFInt32(new int[2]);
let Coordinate354 = browser.currentScene.createNode("Coordinate");
Coordinate354.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet353.coord = Coordinate354;

let ColorRGBA355 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA355.USE = "HAnimSegmentLineColorRGBA";
LineSet353.color = ColorRGBA355;

Shape352.geometry = LineSet353;

HAnimSegment348.children[2] = Shape352;

HAnimJoint347.children = new MFNode();

HAnimJoint347.children[0] = HAnimSegment348;

let HAnimJoint356 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint356.name = "r_midtarsal";
HAnimJoint356.DEF = "hanim_r_midtarsal";
HAnimJoint356.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint356.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment357 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment357.name = "r_middistal";
HAnimSegment357.DEF = "hanim_r_middistal";
//<HAnimJoint name='r_midtarsal'/> visualization sphere is placed within <HAnimSegment name='r_middistal'/>
let TouchSensor358 = browser.currentScene.createNode("TouchSensor");
TouchSensor358.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment357.children = new MFNode();

HAnimSegment357.children[0] = TouchSensor358;

let Transform359 = browser.currentScene.createNode("Transform");
Transform359.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
let Shape360 = browser.currentScene.createNode("Shape");
Shape360.USE = "HAnimJointShape";
Transform359.children = new MFNode();

Transform359.children[0] = Shape360;

HAnimSegment357.children[1] = Transform359;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
let Shape361 = browser.currentScene.createNode("Shape");
let LineSet362 = browser.currentScene.createNode("LineSet");
LineSet362.vertexCount = new MFInt32(new int[2]);
let Coordinate363 = browser.currentScene.createNode("Coordinate");
Coordinate363.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet362.coord = Coordinate363;

let ColorRGBA364 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA364.USE = "HAnimSegmentLineColorRGBA";
LineSet362.color = ColorRGBA364;

Shape361.geometry = LineSet362;

HAnimSegment357.children[2] = Shape361;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
let Shape365 = browser.currentScene.createNode("Shape");
let LineSet366 = browser.currentScene.createNode("LineSet");
LineSet366.vertexCount = new MFInt32(new int[2]);
let Coordinate367 = browser.currentScene.createNode("Coordinate");
Coordinate367.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet366.coord = Coordinate367;

let ColorRGBA368 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA368.USE = "HAnimSiteLineColorRGBA";
LineSet366.color = ColorRGBA368;

Shape365.geometry = LineSet366;

HAnimSegment357.children[3] = Shape365;

let HAnimSite369 = browser.currentScene.createNode("HAnimSite");
HAnimSite369.name = "r_metatarsal_pha1_pt";
HAnimSite369.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite369.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
let TouchSensor370 = browser.currentScene.createNode("TouchSensor");
TouchSensor370.description = "HAnimSite r_metatarsal_pha1";
HAnimSite369.children = new MFNode();

HAnimSite369.children[0] = TouchSensor370;

let Shape371 = browser.currentScene.createNode("Shape");
Shape371.USE = "HAnimSiteShape";
HAnimSite369.children[1] = Shape371;

HAnimSegment357.children[4] = HAnimSite369;

HAnimJoint356.children = new MFNode();

HAnimJoint356.children[0] = HAnimSegment357;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.name = "r_metatarsal";
HAnimJoint372.DEF = "hanim_r_metatarsal";
HAnimJoint372.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint372.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment373 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment373.name = "r_forefoot";
HAnimSegment373.DEF = "hanim_r_forefoot";
//<HAnimJoint name='r_metatarsal'/> visualization sphere is placed within <HAnimSegment name='r_forefoot'/>
let TouchSensor374 = browser.currentScene.createNode("TouchSensor");
TouchSensor374.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment373.children = new MFNode();

HAnimSegment373.children[0] = TouchSensor374;

let Transform375 = browser.currentScene.createNode("Transform");
Transform375.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
let Shape376 = browser.currentScene.createNode("Shape");
Shape376.USE = "HAnimJointShape";
Transform375.children = new MFNode();

Transform375.children[0] = Shape376;

HAnimSegment373.children[1] = Transform375;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
let Shape377 = browser.currentScene.createNode("Shape");
let LineSet378 = browser.currentScene.createNode("LineSet");
LineSet378.vertexCount = new MFInt32(new int[2]);
let Coordinate379 = browser.currentScene.createNode("Coordinate");
Coordinate379.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet378.coord = Coordinate379;

let ColorRGBA380 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA380.USE = "HAnimSiteLineColorRGBA";
LineSet378.color = ColorRGBA380;

Shape377.geometry = LineSet378;

HAnimSegment373.children[2] = Shape377;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
let Shape381 = browser.currentScene.createNode("Shape");
let LineSet382 = browser.currentScene.createNode("LineSet");
LineSet382.vertexCount = new MFInt32(new int[2]);
let Coordinate383 = browser.currentScene.createNode("Coordinate");
Coordinate383.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet382.coord = Coordinate383;

let ColorRGBA384 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA384.USE = "HAnimSiteLineColorRGBA";
LineSet382.color = ColorRGBA384;

Shape381.geometry = LineSet382;

HAnimSegment373.children[3] = Shape381;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
let Shape385 = browser.currentScene.createNode("Shape");
let LineSet386 = browser.currentScene.createNode("LineSet");
LineSet386.vertexCount = new MFInt32(new int[2]);
let Coordinate387 = browser.currentScene.createNode("Coordinate");
Coordinate387.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet386.coord = Coordinate387;

let ColorRGBA388 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA388.USE = "HAnimSiteLineColorRGBA";
LineSet386.color = ColorRGBA388;

Shape385.geometry = LineSet386;

HAnimSegment373.children[4] = Shape385;

let HAnimSite389 = browser.currentScene.createNode("HAnimSite");
HAnimSite389.name = "r_forefoot_tip";
HAnimSite389.DEF = "hanim_r_forefoot_tip";
HAnimSite389.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
let TouchSensor390 = browser.currentScene.createNode("TouchSensor");
TouchSensor390.description = "HAnimSite r_forefoot_tip";
HAnimSite389.children = new MFNode();

HAnimSite389.children[0] = TouchSensor390;

let Shape391 = browser.currentScene.createNode("Shape");
Shape391.USE = "HAnimSiteShape";
HAnimSite389.children[1] = Shape391;

HAnimSegment373.children[5] = HAnimSite389;

let HAnimSite392 = browser.currentScene.createNode("HAnimSite");
HAnimSite392.name = "r_metatarsal_pha5_pt";
HAnimSite392.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite392.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
let TouchSensor393 = browser.currentScene.createNode("TouchSensor");
TouchSensor393.description = "HAnimSite r_metatarsal_pha5";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

let Shape394 = browser.currentScene.createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment373.children[6] = HAnimSite392;

let HAnimSite395 = browser.currentScene.createNode("HAnimSite");
HAnimSite395.name = "r_digit2_pt";
HAnimSite395.DEF = "hanim_r_digit2_pt";
HAnimSite395.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
let TouchSensor396 = browser.currentScene.createNode("TouchSensor");
TouchSensor396.description = "HAnimSite r_digit2";
HAnimSite395.children = new MFNode();

HAnimSite395.children[0] = TouchSensor396;

let Shape397 = browser.currentScene.createNode("Shape");
Shape397.USE = "HAnimSiteShape";
HAnimSite395.children[1] = Shape397;

HAnimSegment373.children[7] = HAnimSite395;

HAnimJoint372.children = new MFNode();

HAnimJoint372.children[0] = HAnimSegment373;

HAnimJoint356.children[1] = HAnimJoint372;

HAnimJoint347.children[1] = HAnimJoint356;

HAnimJoint310.children[1] = HAnimJoint347;

HAnimJoint301.children[1] = HAnimJoint310;

HAnimJoint271.children[1] = HAnimJoint301;

HAnimJoint64.children[2] = HAnimJoint271;

HAnimJoint48.children[1] = HAnimJoint64;

let HAnimJoint398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint398.name = "vl5";
HAnimJoint398.DEF = "hanim_vl5";
HAnimJoint398.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint398.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment399 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment399.name = "l5";
HAnimSegment399.DEF = "hanim_l5";
//<HAnimJoint name='vl5'/> visualization sphere is placed within <HAnimSegment name='l5'/>
let TouchSensor400 = browser.currentScene.createNode("TouchSensor");
TouchSensor400.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment399.children = new MFNode();

HAnimSegment399.children[0] = TouchSensor400;

let Transform401 = browser.currentScene.createNode("Transform");
Transform401.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Shape402 = browser.currentScene.createNode("Shape");
Shape402.USE = "HAnimJointShape";
Transform401.children = new MFNode();

Transform401.children[0] = Shape402;

HAnimSegment399.children[1] = Transform401;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
let Shape403 = browser.currentScene.createNode("Shape");
let LineSet404 = browser.currentScene.createNode("LineSet");
LineSet404.vertexCount = new MFInt32(new int[2]);
let Coordinate405 = browser.currentScene.createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet404.coord = Coordinate405;

let ColorRGBA406 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA406.USE = "HAnimSegmentLineColorRGBA";
LineSet404.color = ColorRGBA406;

Shape403.geometry = LineSet404;

HAnimSegment399.children[2] = Shape403;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
let Shape407 = browser.currentScene.createNode("Shape");
let LineSet408 = browser.currentScene.createNode("LineSet");
LineSet408.vertexCount = new MFInt32(new int[2]);
let Coordinate409 = browser.currentScene.createNode("Coordinate");
Coordinate409.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet408.coord = Coordinate409;

let ColorRGBA410 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA410.USE = "HAnimSiteLineColorRGBA";
LineSet408.color = ColorRGBA410;

Shape407.geometry = LineSet408;

HAnimSegment399.children[3] = Shape407;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
let Shape411 = browser.currentScene.createNode("Shape");
let LineSet412 = browser.currentScene.createNode("LineSet");
LineSet412.vertexCount = new MFInt32(new int[2]);
let Coordinate413 = browser.currentScene.createNode("Coordinate");
Coordinate413.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet412.coord = Coordinate413;

let ColorRGBA414 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA414.USE = "HAnimSiteLineColorRGBA";
LineSet412.color = ColorRGBA414;

Shape411.geometry = LineSet412;

HAnimSegment399.children[4] = Shape411;

let HAnimSite415 = browser.currentScene.createNode("HAnimSite");
HAnimSite415.name = "waist_preferred_post_pt";
HAnimSite415.DEF = "hanim_waist_preferred_post_pt";
HAnimSite415.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
let TouchSensor416 = browser.currentScene.createNode("TouchSensor");
TouchSensor416.description = "HAnimSite waist_preferred_post";
HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = TouchSensor416;

let Shape417 = browser.currentScene.createNode("Shape");
Shape417.USE = "HAnimSiteShape";
HAnimSite415.children[1] = Shape417;

HAnimSegment399.children[5] = HAnimSite415;

let HAnimSite418 = browser.currentScene.createNode("HAnimSite");
HAnimSite418.name = "navel_pt";
HAnimSite418.DEF = "hanim_navel_pt";
HAnimSite418.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
let TouchSensor419 = browser.currentScene.createNode("TouchSensor");
TouchSensor419.description = "HAnimSite navel";
HAnimSite418.children = new MFNode();

HAnimSite418.children[0] = TouchSensor419;

let Shape420 = browser.currentScene.createNode("Shape");
Shape420.USE = "HAnimSiteShape";
HAnimSite418.children[1] = Shape420;

HAnimSegment399.children[6] = HAnimSite418;

HAnimJoint398.children = new MFNode();

HAnimJoint398.children[0] = HAnimSegment399;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.name = "vl4";
HAnimJoint421.DEF = "hanim_vl4";
HAnimJoint421.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint421.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment422 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment422.name = "l4";
HAnimSegment422.DEF = "hanim_l4";
//<HAnimJoint name='vl4'/> visualization sphere is placed within <HAnimSegment name='l4'/>
let TouchSensor423 = browser.currentScene.createNode("TouchSensor");
TouchSensor423.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment422.children = new MFNode();

HAnimSegment422.children[0] = TouchSensor423;

let Transform424 = browser.currentScene.createNode("Transform");
Transform424.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Shape425 = browser.currentScene.createNode("Shape");
Shape425.USE = "HAnimJointShape";
Transform424.children = new MFNode();

Transform424.children[0] = Shape425;

HAnimSegment422.children[1] = Transform424;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
let Shape426 = browser.currentScene.createNode("Shape");
let LineSet427 = browser.currentScene.createNode("LineSet");
LineSet427.vertexCount = new MFInt32(new int[2]);
let Coordinate428 = browser.currentScene.createNode("Coordinate");
Coordinate428.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet427.coord = Coordinate428;

let ColorRGBA429 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA429.USE = "HAnimSegmentLineColorRGBA";
LineSet427.color = ColorRGBA429;

Shape426.geometry = LineSet427;

HAnimSegment422.children[2] = Shape426;

HAnimJoint421.children = new MFNode();

HAnimJoint421.children[0] = HAnimSegment422;

let HAnimJoint430 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint430.name = "vl3";
HAnimJoint430.DEF = "hanim_vl3";
HAnimJoint430.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint430.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment431 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment431.name = "l3";
HAnimSegment431.DEF = "hanim_l3";
//<HAnimJoint name='vl3'/> visualization sphere is placed within <HAnimSegment name='l3'/>
let TouchSensor432 = browser.currentScene.createNode("TouchSensor");
TouchSensor432.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment431.children = new MFNode();

HAnimSegment431.children[0] = TouchSensor432;

let Transform433 = browser.currentScene.createNode("Transform");
Transform433.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Shape434 = browser.currentScene.createNode("Shape");
Shape434.USE = "HAnimJointShape";
Transform433.children = new MFNode();

Transform433.children[0] = Shape434;

HAnimSegment431.children[1] = Transform433;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
let Shape435 = browser.currentScene.createNode("Shape");
let LineSet436 = browser.currentScene.createNode("LineSet");
LineSet436.vertexCount = new MFInt32(new int[2]);
let Coordinate437 = browser.currentScene.createNode("Coordinate");
Coordinate437.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet436.coord = Coordinate437;

let ColorRGBA438 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA438.USE = "HAnimSegmentLineColorRGBA";
LineSet436.color = ColorRGBA438;

Shape435.geometry = LineSet436;

HAnimSegment431.children[2] = Shape435;

HAnimJoint430.children = new MFNode();

HAnimJoint430.children[0] = HAnimSegment431;

let HAnimJoint439 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint439.name = "vl2";
HAnimJoint439.DEF = "hanim_vl2";
HAnimJoint439.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint439.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment440 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment440.name = "l2";
HAnimSegment440.DEF = "hanim_l2";
//<HAnimJoint name='vl2'/> visualization sphere is placed within <HAnimSegment name='l2'/>
let TouchSensor441 = browser.currentScene.createNode("TouchSensor");
TouchSensor441.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment440.children = new MFNode();

HAnimSegment440.children[0] = TouchSensor441;

let Transform442 = browser.currentScene.createNode("Transform");
Transform442.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Shape443 = browser.currentScene.createNode("Shape");
Shape443.USE = "HAnimJointShape";
Transform442.children = new MFNode();

Transform442.children[0] = Shape443;

HAnimSegment440.children[1] = Transform442;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
let Shape444 = browser.currentScene.createNode("Shape");
let LineSet445 = browser.currentScene.createNode("LineSet");
LineSet445.vertexCount = new MFInt32(new int[2]);
let Coordinate446 = browser.currentScene.createNode("Coordinate");
Coordinate446.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet445.coord = Coordinate446;

let ColorRGBA447 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA447.USE = "HAnimSegmentLineColorRGBA";
LineSet445.color = ColorRGBA447;

Shape444.geometry = LineSet445;

HAnimSegment440.children[2] = Shape444;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
let Shape448 = browser.currentScene.createNode("Shape");
let LineSet449 = browser.currentScene.createNode("LineSet");
LineSet449.vertexCount = new MFInt32(new int[2]);
let Coordinate450 = browser.currentScene.createNode("Coordinate");
Coordinate450.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet449.coord = Coordinate450;

let ColorRGBA451 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA451.USE = "HAnimSiteLineColorRGBA";
LineSet449.color = ColorRGBA451;

Shape448.geometry = LineSet449;

HAnimSegment440.children[3] = Shape448;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
let Shape452 = browser.currentScene.createNode("Shape");
let LineSet453 = browser.currentScene.createNode("LineSet");
LineSet453.vertexCount = new MFInt32(new int[2]);
let Coordinate454 = browser.currentScene.createNode("Coordinate");
Coordinate454.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet453.coord = Coordinate454;

let ColorRGBA455 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA455.USE = "HAnimSiteLineColorRGBA";
LineSet453.color = ColorRGBA455;

Shape452.geometry = LineSet453;

HAnimSegment440.children[4] = Shape452;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
let Shape456 = browser.currentScene.createNode("Shape");
let LineSet457 = browser.currentScene.createNode("LineSet");
LineSet457.vertexCount = new MFInt32(new int[2]);
let Coordinate458 = browser.currentScene.createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet457.coord = Coordinate458;

let ColorRGBA459 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSiteLineColorRGBA";
LineSet457.color = ColorRGBA459;

Shape456.geometry = LineSet457;

HAnimSegment440.children[5] = Shape456;

let HAnimSite460 = browser.currentScene.createNode("HAnimSite");
HAnimSite460.name = "r_rib10_pt";
HAnimSite460.DEF = "hanim_r_rib10_pt";
HAnimSite460.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
let TouchSensor461 = browser.currentScene.createNode("TouchSensor");
TouchSensor461.description = "HAnimSite r_rib10";
HAnimSite460.children = new MFNode();

HAnimSite460.children[0] = TouchSensor461;

let Shape462 = browser.currentScene.createNode("Shape");
Shape462.USE = "HAnimSiteShape";
HAnimSite460.children[1] = Shape462;

HAnimSegment440.children[6] = HAnimSite460;

let HAnimSite463 = browser.currentScene.createNode("HAnimSite");
HAnimSite463.name = "l_rib10_pt";
HAnimSite463.DEF = "hanim_l_rib10_pt";
HAnimSite463.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
let TouchSensor464 = browser.currentScene.createNode("TouchSensor");
TouchSensor464.description = "HAnimSite l_rib10";
HAnimSite463.children = new MFNode();

HAnimSite463.children[0] = TouchSensor464;

let Shape465 = browser.currentScene.createNode("Shape");
Shape465.USE = "HAnimSiteShape";
HAnimSite463.children[1] = Shape465;

HAnimSegment440.children[7] = HAnimSite463;

let HAnimSite466 = browser.currentScene.createNode("HAnimSite");
HAnimSite466.name = "rib10_midspine_pt";
HAnimSite466.DEF = "hanim_rib10_midspine_pt";
HAnimSite466.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
let TouchSensor467 = browser.currentScene.createNode("TouchSensor");
TouchSensor467.description = "HAnimSite rib10_midspine";
HAnimSite466.children = new MFNode();

HAnimSite466.children[0] = TouchSensor467;

let Shape468 = browser.currentScene.createNode("Shape");
Shape468.USE = "HAnimSiteShape";
HAnimSite466.children[1] = Shape468;

HAnimSegment440.children[8] = HAnimSite466;

HAnimJoint439.children = new MFNode();

HAnimJoint439.children[0] = HAnimSegment440;

let HAnimJoint469 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint469.name = "vl1";
HAnimJoint469.DEF = "hanim_vl1";
HAnimJoint469.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint469.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.name = "l1";
HAnimSegment470.DEF = "hanim_l1";
//<HAnimJoint name='vl1'/> visualization sphere is placed within <HAnimSegment name='l1'/>
let TouchSensor471 = browser.currentScene.createNode("TouchSensor");
TouchSensor471.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment470.children = new MFNode();

HAnimSegment470.children[0] = TouchSensor471;

let Transform472 = browser.currentScene.createNode("Transform");
Transform472.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Shape473 = browser.currentScene.createNode("Shape");
Shape473.USE = "HAnimJointShape";
Transform472.children = new MFNode();

Transform472.children[0] = Shape473;

HAnimSegment470.children[1] = Transform472;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
let Shape474 = browser.currentScene.createNode("Shape");
let LineSet475 = browser.currentScene.createNode("LineSet");
LineSet475.vertexCount = new MFInt32(new int[2]);
let Coordinate476 = browser.currentScene.createNode("Coordinate");
Coordinate476.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet475.coord = Coordinate476;

let ColorRGBA477 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA477.USE = "HAnimSegmentLineColorRGBA";
LineSet475.color = ColorRGBA477;

Shape474.geometry = LineSet475;

HAnimSegment470.children[2] = Shape474;

HAnimJoint469.children = new MFNode();

HAnimJoint469.children[0] = HAnimSegment470;

let HAnimJoint478 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint478.name = "vt12";
HAnimJoint478.DEF = "hanim_vt12";
HAnimJoint478.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint478.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment479.name = "t12";
HAnimSegment479.DEF = "hanim_t12";
//<HAnimJoint name='vt12'/> visualization sphere is placed within <HAnimSegment name='t12'/>
let TouchSensor480 = browser.currentScene.createNode("TouchSensor");
TouchSensor480.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment479.children = new MFNode();

HAnimSegment479.children[0] = TouchSensor480;

let Transform481 = browser.currentScene.createNode("Transform");
Transform481.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Shape482 = browser.currentScene.createNode("Shape");
Shape482.USE = "HAnimJointShape";
Transform481.children = new MFNode();

Transform481.children[0] = Shape482;

HAnimSegment479.children[1] = Transform481;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
let Shape483 = browser.currentScene.createNode("Shape");
let LineSet484 = browser.currentScene.createNode("LineSet");
LineSet484.vertexCount = new MFInt32(new int[2]);
let Coordinate485 = browser.currentScene.createNode("Coordinate");
Coordinate485.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet484.coord = Coordinate485;

let ColorRGBA486 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA486.USE = "HAnimSegmentLineColorRGBA";
LineSet484.color = ColorRGBA486;

Shape483.geometry = LineSet484;

HAnimSegment479.children[2] = Shape483;

HAnimJoint478.children = new MFNode();

HAnimJoint478.children[0] = HAnimSegment479;

let HAnimJoint487 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint487.name = "vt11";
HAnimJoint487.DEF = "hanim_vt11";
HAnimJoint487.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint487.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment488.name = "t11";
HAnimSegment488.DEF = "hanim_t11";
//<HAnimJoint name='vt11'/> visualization sphere is placed within <HAnimSegment name='t11'/>
let TouchSensor489 = browser.currentScene.createNode("TouchSensor");
TouchSensor489.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment488.children = new MFNode();

HAnimSegment488.children[0] = TouchSensor489;

let Transform490 = browser.currentScene.createNode("Transform");
Transform490.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Shape491 = browser.currentScene.createNode("Shape");
Shape491.USE = "HAnimJointShape";
Transform490.children = new MFNode();

Transform490.children[0] = Shape491;

HAnimSegment488.children[1] = Transform490;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
let Shape492 = browser.currentScene.createNode("Shape");
let LineSet493 = browser.currentScene.createNode("LineSet");
LineSet493.vertexCount = new MFInt32(new int[2]);
let Coordinate494 = browser.currentScene.createNode("Coordinate");
Coordinate494.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet493.coord = Coordinate494;

let ColorRGBA495 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA495.USE = "HAnimSegmentLineColorRGBA";
LineSet493.color = ColorRGBA495;

Shape492.geometry = LineSet493;

HAnimSegment488.children[2] = Shape492;

HAnimJoint487.children = new MFNode();

HAnimJoint487.children[0] = HAnimSegment488;

let HAnimJoint496 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint496.name = "vt10";
HAnimJoint496.DEF = "hanim_vt10";
HAnimJoint496.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint496.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment497.name = "t10";
HAnimSegment497.DEF = "hanim_t10";
//<HAnimJoint name='vt10'/> visualization sphere is placed within <HAnimSegment name='t10'/>
let TouchSensor498 = browser.currentScene.createNode("TouchSensor");
TouchSensor498.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment497.children = new MFNode();

HAnimSegment497.children[0] = TouchSensor498;

let Transform499 = browser.currentScene.createNode("Transform");
Transform499.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Shape500 = browser.currentScene.createNode("Shape");
Shape500.USE = "HAnimJointShape";
Transform499.children = new MFNode();

Transform499.children[0] = Shape500;

HAnimSegment497.children[1] = Transform499;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
let Shape501 = browser.currentScene.createNode("Shape");
let LineSet502 = browser.currentScene.createNode("LineSet");
LineSet502.vertexCount = new MFInt32(new int[2]);
let Coordinate503 = browser.currentScene.createNode("Coordinate");
Coordinate503.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet502.coord = Coordinate503;

let ColorRGBA504 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA504.USE = "HAnimSegmentLineColorRGBA";
LineSet502.color = ColorRGBA504;

Shape501.geometry = LineSet502;

HAnimSegment497.children[2] = Shape501;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
let Shape505 = browser.currentScene.createNode("Shape");
let LineSet506 = browser.currentScene.createNode("LineSet");
LineSet506.vertexCount = new MFInt32(new int[2]);
let Coordinate507 = browser.currentScene.createNode("Coordinate");
Coordinate507.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet506.coord = Coordinate507;

let ColorRGBA508 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA508.USE = "HAnimSiteLineColorRGBA";
LineSet506.color = ColorRGBA508;

Shape505.geometry = LineSet506;

HAnimSegment497.children[3] = Shape505;

let HAnimSite509 = browser.currentScene.createNode("HAnimSite");
HAnimSite509.name = "substernale_pt";
HAnimSite509.DEF = "hanim_substernale_pt";
HAnimSite509.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
let TouchSensor510 = browser.currentScene.createNode("TouchSensor");
TouchSensor510.description = "HAnimSite substernale";
HAnimSite509.children = new MFNode();

HAnimSite509.children[0] = TouchSensor510;

let Shape511 = browser.currentScene.createNode("Shape");
Shape511.USE = "HAnimSiteShape";
HAnimSite509.children[1] = Shape511;

HAnimSegment497.children[4] = HAnimSite509;

HAnimJoint496.children = new MFNode();

HAnimJoint496.children[0] = HAnimSegment497;

let HAnimJoint512 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint512.name = "vt9";
HAnimJoint512.DEF = "hanim_vt9";
HAnimJoint512.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint512.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment513.name = "t9";
HAnimSegment513.DEF = "hanim_t9";
//<HAnimJoint name='vt9'/> visualization sphere is placed within <HAnimSegment name='t9'/>
let TouchSensor514 = browser.currentScene.createNode("TouchSensor");
TouchSensor514.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment513.children = new MFNode();

HAnimSegment513.children[0] = TouchSensor514;

let Transform515 = browser.currentScene.createNode("Transform");
Transform515.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Shape516 = browser.currentScene.createNode("Shape");
Shape516.USE = "HAnimJointShape";
Transform515.children = new MFNode();

Transform515.children[0] = Shape516;

HAnimSegment513.children[1] = Transform515;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
let Shape517 = browser.currentScene.createNode("Shape");
let LineSet518 = browser.currentScene.createNode("LineSet");
LineSet518.vertexCount = new MFInt32(new int[2]);
let Coordinate519 = browser.currentScene.createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet518.coord = Coordinate519;

let ColorRGBA520 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA520.USE = "HAnimSegmentLineColorRGBA";
LineSet518.color = ColorRGBA520;

Shape517.geometry = LineSet518;

HAnimSegment513.children[2] = Shape517;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
let Shape521 = browser.currentScene.createNode("Shape");
let LineSet522 = browser.currentScene.createNode("LineSet");
LineSet522.vertexCount = new MFInt32(new int[2]);
let Coordinate523 = browser.currentScene.createNode("Coordinate");
Coordinate523.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet522.coord = Coordinate523;

let ColorRGBA524 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA524.USE = "HAnimSiteLineColorRGBA";
LineSet522.color = ColorRGBA524;

Shape521.geometry = LineSet522;

HAnimSegment513.children[3] = Shape521;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
let Shape525 = browser.currentScene.createNode("Shape");
let LineSet526 = browser.currentScene.createNode("LineSet");
LineSet526.vertexCount = new MFInt32(new int[2]);
let Coordinate527 = browser.currentScene.createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet526.coord = Coordinate527;

let ColorRGBA528 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA528.USE = "HAnimSiteLineColorRGBA";
LineSet526.color = ColorRGBA528;

Shape525.geometry = LineSet526;

HAnimSegment513.children[4] = Shape525;

let HAnimSite529 = browser.currentScene.createNode("HAnimSite");
HAnimSite529.name = "r_thelion_pt";
HAnimSite529.DEF = "hanim_r_thelion_pt";
HAnimSite529.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
let TouchSensor530 = browser.currentScene.createNode("TouchSensor");
TouchSensor530.description = "HAnimSite r_thelion";
HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = TouchSensor530;

let Shape531 = browser.currentScene.createNode("Shape");
Shape531.USE = "HAnimSiteShape";
HAnimSite529.children[1] = Shape531;

HAnimSegment513.children[5] = HAnimSite529;

let HAnimSite532 = browser.currentScene.createNode("HAnimSite");
HAnimSite532.name = "l_thelion_pt";
HAnimSite532.DEF = "hanim_l_thelion_pt";
HAnimSite532.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
let TouchSensor533 = browser.currentScene.createNode("TouchSensor");
TouchSensor533.description = "HAnimSite l_thelion";
HAnimSite532.children = new MFNode();

HAnimSite532.children[0] = TouchSensor533;

let Shape534 = browser.currentScene.createNode("Shape");
Shape534.USE = "HAnimSiteShape";
HAnimSite532.children[1] = Shape534;

HAnimSegment513.children[6] = HAnimSite532;

HAnimJoint512.children = new MFNode();

HAnimJoint512.children[0] = HAnimSegment513;

let HAnimJoint535 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint535.name = "vt8";
HAnimJoint535.DEF = "hanim_vt8";
HAnimJoint535.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint535.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment536 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment536.name = "t8";
HAnimSegment536.DEF = "hanim_t8";
//<HAnimJoint name='vt8'/> visualization sphere is placed within <HAnimSegment name='t8'/>
let TouchSensor537 = browser.currentScene.createNode("TouchSensor");
TouchSensor537.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment536.children = new MFNode();

HAnimSegment536.children[0] = TouchSensor537;

let Transform538 = browser.currentScene.createNode("Transform");
Transform538.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Shape539 = browser.currentScene.createNode("Shape");
Shape539.USE = "HAnimJointShape";
Transform538.children = new MFNode();

Transform538.children[0] = Shape539;

HAnimSegment536.children[1] = Transform538;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
let Shape540 = browser.currentScene.createNode("Shape");
let LineSet541 = browser.currentScene.createNode("LineSet");
LineSet541.vertexCount = new MFInt32(new int[2]);
let Coordinate542 = browser.currentScene.createNode("Coordinate");
Coordinate542.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet541.coord = Coordinate542;

let ColorRGBA543 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA543.USE = "HAnimSegmentLineColorRGBA";
LineSet541.color = ColorRGBA543;

Shape540.geometry = LineSet541;

HAnimSegment536.children[2] = Shape540;

HAnimJoint535.children = new MFNode();

HAnimJoint535.children[0] = HAnimSegment536;

let HAnimJoint544 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint544.name = "vt7";
HAnimJoint544.DEF = "hanim_vt7";
HAnimJoint544.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint544.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment545 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment545.name = "t7";
HAnimSegment545.DEF = "hanim_t7";
//<HAnimJoint name='vt7'/> visualization sphere is placed within <HAnimSegment name='t7'/>
let TouchSensor546 = browser.currentScene.createNode("TouchSensor");
TouchSensor546.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment545.children = new MFNode();

HAnimSegment545.children[0] = TouchSensor546;

let Transform547 = browser.currentScene.createNode("Transform");
Transform547.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Shape548 = browser.currentScene.createNode("Shape");
Shape548.USE = "HAnimJointShape";
Transform547.children = new MFNode();

Transform547.children[0] = Shape548;

HAnimSegment545.children[1] = Transform547;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
let Shape549 = browser.currentScene.createNode("Shape");
let LineSet550 = browser.currentScene.createNode("LineSet");
LineSet550.vertexCount = new MFInt32(new int[2]);
let Coordinate551 = browser.currentScene.createNode("Coordinate");
Coordinate551.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet550.coord = Coordinate551;

let ColorRGBA552 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA552.USE = "HAnimSegmentLineColorRGBA";
LineSet550.color = ColorRGBA552;

Shape549.geometry = LineSet550;

HAnimSegment545.children[2] = Shape549;

HAnimJoint544.children = new MFNode();

HAnimJoint544.children[0] = HAnimSegment545;

let HAnimJoint553 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint553.name = "vt6";
HAnimJoint553.DEF = "hanim_vt6";
HAnimJoint553.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint553.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment554 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment554.name = "t6";
HAnimSegment554.DEF = "hanim_t6";
//<HAnimJoint name='vt6'/> visualization sphere is placed within <HAnimSegment name='t6'/>
let TouchSensor555 = browser.currentScene.createNode("TouchSensor");
TouchSensor555.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment554.children = new MFNode();

HAnimSegment554.children[0] = TouchSensor555;

let Transform556 = browser.currentScene.createNode("Transform");
Transform556.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Shape557 = browser.currentScene.createNode("Shape");
Shape557.USE = "HAnimJointShape";
Transform556.children = new MFNode();

Transform556.children[0] = Shape557;

HAnimSegment554.children[1] = Transform556;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
let Shape558 = browser.currentScene.createNode("Shape");
let LineSet559 = browser.currentScene.createNode("LineSet");
LineSet559.vertexCount = new MFInt32(new int[2]);
let Coordinate560 = browser.currentScene.createNode("Coordinate");
Coordinate560.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet559.coord = Coordinate560;

let ColorRGBA561 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA";
LineSet559.color = ColorRGBA561;

Shape558.geometry = LineSet559;

HAnimSegment554.children[2] = Shape558;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = HAnimSegment554;

let HAnimJoint562 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint562.name = "vt5";
HAnimJoint562.DEF = "hanim_vt5";
HAnimJoint562.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint562.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment563 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment563.name = "t5";
HAnimSegment563.DEF = "hanim_t5";
//<HAnimJoint name='vt5'/> visualization sphere is placed within <HAnimSegment name='t5'/>
let TouchSensor564 = browser.currentScene.createNode("TouchSensor");
TouchSensor564.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment563.children = new MFNode();

HAnimSegment563.children[0] = TouchSensor564;

let Transform565 = browser.currentScene.createNode("Transform");
Transform565.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Shape566 = browser.currentScene.createNode("Shape");
Shape566.USE = "HAnimJointShape";
Transform565.children = new MFNode();

Transform565.children[0] = Shape566;

HAnimSegment563.children[1] = Transform565;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
let Shape567 = browser.currentScene.createNode("Shape");
let LineSet568 = browser.currentScene.createNode("LineSet");
LineSet568.vertexCount = new MFInt32(new int[2]);
let Coordinate569 = browser.currentScene.createNode("Coordinate");
Coordinate569.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet568.coord = Coordinate569;

let ColorRGBA570 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA570.USE = "HAnimSegmentLineColorRGBA";
LineSet568.color = ColorRGBA570;

Shape567.geometry = LineSet568;

HAnimSegment563.children[2] = Shape567;

HAnimJoint562.children = new MFNode();

HAnimJoint562.children[0] = HAnimSegment563;

let HAnimJoint571 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint571.name = "vt4";
HAnimJoint571.DEF = "hanim_vt4";
HAnimJoint571.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint571.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment572 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment572.name = "t4";
HAnimSegment572.DEF = "hanim_t4";
//<HAnimJoint name='vt4'/> visualization sphere is placed within <HAnimSegment name='t4'/>
let TouchSensor573 = browser.currentScene.createNode("TouchSensor");
TouchSensor573.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment572.children = new MFNode();

HAnimSegment572.children[0] = TouchSensor573;

let Transform574 = browser.currentScene.createNode("Transform");
Transform574.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Shape575 = browser.currentScene.createNode("Shape");
Shape575.USE = "HAnimJointShape";
Transform574.children = new MFNode();

Transform574.children[0] = Shape575;

HAnimSegment572.children[1] = Transform574;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
let Shape576 = browser.currentScene.createNode("Shape");
let LineSet577 = browser.currentScene.createNode("LineSet");
LineSet577.vertexCount = new MFInt32(new int[2]);
let Coordinate578 = browser.currentScene.createNode("Coordinate");
Coordinate578.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet577.coord = Coordinate578;

let ColorRGBA579 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA579.USE = "HAnimSegmentLineColorRGBA";
LineSet577.color = ColorRGBA579;

Shape576.geometry = LineSet577;

HAnimSegment572.children[2] = Shape576;

HAnimJoint571.children = new MFNode();

HAnimJoint571.children[0] = HAnimSegment572;

let HAnimJoint580 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint580.name = "vt3";
HAnimJoint580.DEF = "hanim_vt3";
HAnimJoint580.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint580.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment581 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment581.name = "t3";
HAnimSegment581.DEF = "hanim_t3";
//<HAnimJoint name='vt3'/> visualization sphere is placed within <HAnimSegment name='t3'/>
let TouchSensor582 = browser.currentScene.createNode("TouchSensor");
TouchSensor582.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment581.children = new MFNode();

HAnimSegment581.children[0] = TouchSensor582;

let Transform583 = browser.currentScene.createNode("Transform");
Transform583.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Shape584 = browser.currentScene.createNode("Shape");
Shape584.USE = "HAnimJointShape";
Transform583.children = new MFNode();

Transform583.children[0] = Shape584;

HAnimSegment581.children[1] = Transform583;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
let Shape585 = browser.currentScene.createNode("Shape");
let LineSet586 = browser.currentScene.createNode("LineSet");
LineSet586.vertexCount = new MFInt32(new int[2]);
let Coordinate587 = browser.currentScene.createNode("Coordinate");
Coordinate587.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet586.coord = Coordinate587;

let ColorRGBA588 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA588.USE = "HAnimSegmentLineColorRGBA";
LineSet586.color = ColorRGBA588;

Shape585.geometry = LineSet586;

HAnimSegment581.children[2] = Shape585;

HAnimJoint580.children = new MFNode();

HAnimJoint580.children[0] = HAnimSegment581;

let HAnimJoint589 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint589.name = "vt2";
HAnimJoint589.DEF = "hanim_vt2";
HAnimJoint589.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint589.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment590 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment590.name = "t2";
HAnimSegment590.DEF = "hanim_t2";
//<HAnimJoint name='vt2'/> visualization sphere is placed within <HAnimSegment name='t2'/>
let TouchSensor591 = browser.currentScene.createNode("TouchSensor");
TouchSensor591.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment590.children = new MFNode();

HAnimSegment590.children[0] = TouchSensor591;

let Transform592 = browser.currentScene.createNode("Transform");
Transform592.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Shape593 = browser.currentScene.createNode("Shape");
Shape593.USE = "HAnimJointShape";
Transform592.children = new MFNode();

Transform592.children[0] = Shape593;

HAnimSegment590.children[1] = Transform592;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
let Shape594 = browser.currentScene.createNode("Shape");
let LineSet595 = browser.currentScene.createNode("LineSet");
LineSet595.vertexCount = new MFInt32(new int[2]);
let Coordinate596 = browser.currentScene.createNode("Coordinate");
Coordinate596.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet595.coord = Coordinate596;

let ColorRGBA597 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA597.USE = "HAnimSegmentLineColorRGBA";
LineSet595.color = ColorRGBA597;

Shape594.geometry = LineSet595;

HAnimSegment590.children[2] = Shape594;

HAnimJoint589.children = new MFNode();

HAnimJoint589.children[0] = HAnimSegment590;

let HAnimJoint598 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint598.name = "vt1";
HAnimJoint598.DEF = "hanim_vt1";
HAnimJoint598.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint598.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment599 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment599.name = "t1";
HAnimSegment599.DEF = "hanim_t1";
//<HAnimJoint name='vt1'/> visualization sphere is placed within <HAnimSegment name='t1'/>
let TouchSensor600 = browser.currentScene.createNode("TouchSensor");
TouchSensor600.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment599.children = new MFNode();

HAnimSegment599.children[0] = TouchSensor600;

let Transform601 = browser.currentScene.createNode("Transform");
Transform601.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Shape602 = browser.currentScene.createNode("Shape");
Shape602.USE = "HAnimJointShape";
Transform601.children = new MFNode();

Transform601.children[0] = Shape602;

HAnimSegment599.children[1] = Transform601;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
let Shape603 = browser.currentScene.createNode("Shape");
let LineSet604 = browser.currentScene.createNode("LineSet");
LineSet604.vertexCount = new MFInt32(new int[2]);
let Coordinate605 = browser.currentScene.createNode("Coordinate");
Coordinate605.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet604.coord = Coordinate605;

let ColorRGBA606 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA606.USE = "HAnimSegmentLineColorRGBA";
LineSet604.color = ColorRGBA606;

Shape603.geometry = LineSet604;

HAnimSegment599.children[2] = Shape603;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
let Shape607 = browser.currentScene.createNode("Shape");
let LineSet608 = browser.currentScene.createNode("LineSet");
LineSet608.vertexCount = new MFInt32(new int[2]);
let Coordinate609 = browser.currentScene.createNode("Coordinate");
Coordinate609.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet608.coord = Coordinate609;

let ColorRGBA610 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA610.USE = "HAnimSegmentLineColorRGBA";
LineSet608.color = ColorRGBA610;

Shape607.geometry = LineSet608;

HAnimSegment599.children[3] = Shape607;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
let Shape611 = browser.currentScene.createNode("Shape");
let LineSet612 = browser.currentScene.createNode("LineSet");
LineSet612.vertexCount = new MFInt32(new int[2]);
let Coordinate613 = browser.currentScene.createNode("Coordinate");
Coordinate613.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet612.coord = Coordinate613;

let ColorRGBA614 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
LineSet612.color = ColorRGBA614;

Shape611.geometry = LineSet612;

HAnimSegment599.children[4] = Shape611;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
let Shape615 = browser.currentScene.createNode("Shape");
let LineSet616 = browser.currentScene.createNode("LineSet");
LineSet616.vertexCount = new MFInt32(new int[2]);
let Coordinate617 = browser.currentScene.createNode("Coordinate");
Coordinate617.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet616.coord = Coordinate617;

let ColorRGBA618 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA618.USE = "HAnimSiteLineColorRGBA";
LineSet616.color = ColorRGBA618;

Shape615.geometry = LineSet616;

HAnimSegment599.children[5] = Shape615;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
let Shape619 = browser.currentScene.createNode("Shape");
let LineSet620 = browser.currentScene.createNode("LineSet");
LineSet620.vertexCount = new MFInt32(new int[2]);
let Coordinate621 = browser.currentScene.createNode("Coordinate");
Coordinate621.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet620.coord = Coordinate621;

let ColorRGBA622 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA622.USE = "HAnimSiteLineColorRGBA";
LineSet620.color = ColorRGBA622;

Shape619.geometry = LineSet620;

HAnimSegment599.children[6] = Shape619;

let HAnimSite623 = browser.currentScene.createNode("HAnimSite");
HAnimSite623.name = "suprasternale_pt";
HAnimSite623.DEF = "hanim_suprasternale_pt";
HAnimSite623.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
let TouchSensor624 = browser.currentScene.createNode("TouchSensor");
TouchSensor624.description = "HAnimSite suprasternale";
HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = TouchSensor624;

let Shape625 = browser.currentScene.createNode("Shape");
Shape625.USE = "HAnimSiteShape";
HAnimSite623.children[1] = Shape625;

HAnimSegment599.children[7] = HAnimSite623;

let HAnimSite626 = browser.currentScene.createNode("HAnimSite");
HAnimSite626.name = "cervicale_pt";
HAnimSite626.DEF = "hanim_cervicale_pt";
HAnimSite626.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
let TouchSensor627 = browser.currentScene.createNode("TouchSensor");
TouchSensor627.description = "HAnimSite cervicale";
HAnimSite626.children = new MFNode();

HAnimSite626.children[0] = TouchSensor627;

let Shape628 = browser.currentScene.createNode("Shape");
Shape628.USE = "HAnimSiteShape";
HAnimSite626.children[1] = Shape628;

HAnimSegment599.children[8] = HAnimSite626;

HAnimJoint598.children = new MFNode();

HAnimJoint598.children[0] = HAnimSegment599;

let HAnimJoint629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint629.name = "vc7";
HAnimJoint629.DEF = "hanim_vc7";
HAnimJoint629.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint629.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment630 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment630.name = "c7";
HAnimSegment630.DEF = "hanim_c7";
//<HAnimJoint name='vc7'/> visualization sphere is placed within <HAnimSegment name='c7'/>
let TouchSensor631 = browser.currentScene.createNode("TouchSensor");
TouchSensor631.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment630.children = new MFNode();

HAnimSegment630.children[0] = TouchSensor631;

let Transform632 = browser.currentScene.createNode("Transform");
Transform632.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Shape633 = browser.currentScene.createNode("Shape");
Shape633.USE = "HAnimJointShape";
Transform632.children = new MFNode();

Transform632.children[0] = Shape633;

HAnimSegment630.children[1] = Transform632;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
let Shape634 = browser.currentScene.createNode("Shape");
let LineSet635 = browser.currentScene.createNode("LineSet");
LineSet635.vertexCount = new MFInt32(new int[2]);
let Coordinate636 = browser.currentScene.createNode("Coordinate");
Coordinate636.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet635.coord = Coordinate636;

let ColorRGBA637 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA637.USE = "HAnimSegmentLineColorRGBA";
LineSet635.color = ColorRGBA637;

Shape634.geometry = LineSet635;

HAnimSegment630.children[2] = Shape634;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
let Shape638 = browser.currentScene.createNode("Shape");
let LineSet639 = browser.currentScene.createNode("LineSet");
LineSet639.vertexCount = new MFInt32(new int[2]);
let Coordinate640 = browser.currentScene.createNode("Coordinate");
Coordinate640.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet639.coord = Coordinate640;

let ColorRGBA641 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA641.USE = "HAnimSiteLineColorRGBA";
LineSet639.color = ColorRGBA641;

Shape638.geometry = LineSet639;

HAnimSegment630.children[3] = Shape638;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
let Shape642 = browser.currentScene.createNode("Shape");
let LineSet643 = browser.currentScene.createNode("LineSet");
LineSet643.vertexCount = new MFInt32(new int[2]);
let Coordinate644 = browser.currentScene.createNode("Coordinate");
Coordinate644.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet643.coord = Coordinate644;

let ColorRGBA645 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA645.USE = "HAnimSiteLineColorRGBA";
LineSet643.color = ColorRGBA645;

Shape642.geometry = LineSet643;

HAnimSegment630.children[4] = Shape642;

let HAnimSite646 = browser.currentScene.createNode("HAnimSite");
HAnimSite646.name = "r_neck_base_pt";
HAnimSite646.DEF = "hanim_r_neck_base_pt";
HAnimSite646.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
let TouchSensor647 = browser.currentScene.createNode("TouchSensor");
TouchSensor647.description = "HAnimSite r_neck_base";
HAnimSite646.children = new MFNode();

HAnimSite646.children[0] = TouchSensor647;

let Shape648 = browser.currentScene.createNode("Shape");
Shape648.USE = "HAnimSiteShape";
HAnimSite646.children[1] = Shape648;

HAnimSegment630.children[5] = HAnimSite646;

let HAnimSite649 = browser.currentScene.createNode("HAnimSite");
HAnimSite649.name = "l_neck_base_pt";
HAnimSite649.DEF = "hanim_l_neck_base_pt";
HAnimSite649.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
let TouchSensor650 = browser.currentScene.createNode("TouchSensor");
TouchSensor650.description = "HAnimSite l_neck_base";
HAnimSite649.children = new MFNode();

HAnimSite649.children[0] = TouchSensor650;

let Shape651 = browser.currentScene.createNode("Shape");
Shape651.USE = "HAnimSiteShape";
HAnimSite649.children[1] = Shape651;

HAnimSegment630.children[6] = HAnimSite649;

HAnimJoint629.children = new MFNode();

HAnimJoint629.children[0] = HAnimSegment630;

let HAnimJoint652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint652.name = "vc6";
HAnimJoint652.DEF = "hanim_vc6";
HAnimJoint652.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint652.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment653 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment653.name = "c6";
HAnimSegment653.DEF = "hanim_c6";
//<HAnimJoint name='vc6'/> visualization sphere is placed within <HAnimSegment name='c6'/>
let TouchSensor654 = browser.currentScene.createNode("TouchSensor");
TouchSensor654.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment653.children = new MFNode();

HAnimSegment653.children[0] = TouchSensor654;

let Transform655 = browser.currentScene.createNode("Transform");
Transform655.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Shape656 = browser.currentScene.createNode("Shape");
Shape656.USE = "HAnimJointShape";
Transform655.children = new MFNode();

Transform655.children[0] = Shape656;

HAnimSegment653.children[1] = Transform655;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
let Shape657 = browser.currentScene.createNode("Shape");
let LineSet658 = browser.currentScene.createNode("LineSet");
LineSet658.vertexCount = new MFInt32(new int[2]);
let Coordinate659 = browser.currentScene.createNode("Coordinate");
Coordinate659.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet658.coord = Coordinate659;

let ColorRGBA660 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA660.USE = "HAnimSegmentLineColorRGBA";
LineSet658.color = ColorRGBA660;

Shape657.geometry = LineSet658;

HAnimSegment653.children[2] = Shape657;

HAnimJoint652.children = new MFNode();

HAnimJoint652.children[0] = HAnimSegment653;

let HAnimJoint661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint661.name = "vc5";
HAnimJoint661.DEF = "hanim_vc5";
HAnimJoint661.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint661.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment662 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment662.name = "c5";
HAnimSegment662.DEF = "hanim_c5";
//<HAnimJoint name='vc5'/> visualization sphere is placed within <HAnimSegment name='c5'/>
let TouchSensor663 = browser.currentScene.createNode("TouchSensor");
TouchSensor663.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment662.children = new MFNode();

HAnimSegment662.children[0] = TouchSensor663;

let Transform664 = browser.currentScene.createNode("Transform");
Transform664.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Shape665 = browser.currentScene.createNode("Shape");
Shape665.USE = "HAnimJointShape";
Transform664.children = new MFNode();

Transform664.children[0] = Shape665;

HAnimSegment662.children[1] = Transform664;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
let Shape666 = browser.currentScene.createNode("Shape");
let LineSet667 = browser.currentScene.createNode("LineSet");
LineSet667.vertexCount = new MFInt32(new int[2]);
let Coordinate668 = browser.currentScene.createNode("Coordinate");
Coordinate668.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet667.coord = Coordinate668;

let ColorRGBA669 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA669.USE = "HAnimSegmentLineColorRGBA";
LineSet667.color = ColorRGBA669;

Shape666.geometry = LineSet667;

HAnimSegment662.children[2] = Shape666;

HAnimJoint661.children = new MFNode();

HAnimJoint661.children[0] = HAnimSegment662;

let HAnimJoint670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint670.name = "vc4";
HAnimJoint670.DEF = "hanim_vc4";
HAnimJoint670.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint670.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment671 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment671.name = "c4";
HAnimSegment671.DEF = "hanim_c4";
//<HAnimJoint name='vc4'/> visualization sphere is placed within <HAnimSegment name='c4'/>
let TouchSensor672 = browser.currentScene.createNode("TouchSensor");
TouchSensor672.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment671.children = new MFNode();

HAnimSegment671.children[0] = TouchSensor672;

let Transform673 = browser.currentScene.createNode("Transform");
Transform673.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Shape674 = browser.currentScene.createNode("Shape");
Shape674.USE = "HAnimJointShape";
Transform673.children = new MFNode();

Transform673.children[0] = Shape674;

HAnimSegment671.children[1] = Transform673;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
let Shape675 = browser.currentScene.createNode("Shape");
let LineSet676 = browser.currentScene.createNode("LineSet");
LineSet676.vertexCount = new MFInt32(new int[2]);
let Coordinate677 = browser.currentScene.createNode("Coordinate");
Coordinate677.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet676.coord = Coordinate677;

let ColorRGBA678 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA678.USE = "HAnimSegmentLineColorRGBA";
LineSet676.color = ColorRGBA678;

Shape675.geometry = LineSet676;

HAnimSegment671.children[2] = Shape675;

HAnimJoint670.children = new MFNode();

HAnimJoint670.children[0] = HAnimSegment671;

let HAnimJoint679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint679.name = "vc3";
HAnimJoint679.DEF = "hanim_vc3";
HAnimJoint679.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint679.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment680 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment680.name = "c3";
HAnimSegment680.DEF = "hanim_c3";
//<HAnimJoint name='vc3'/> visualization sphere is placed within <HAnimSegment name='c3'/>
let TouchSensor681 = browser.currentScene.createNode("TouchSensor");
TouchSensor681.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment680.children = new MFNode();

HAnimSegment680.children[0] = TouchSensor681;

let Transform682 = browser.currentScene.createNode("Transform");
Transform682.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Shape683 = browser.currentScene.createNode("Shape");
Shape683.USE = "HAnimJointShape";
Transform682.children = new MFNode();

Transform682.children[0] = Shape683;

HAnimSegment680.children[1] = Transform682;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
let Shape684 = browser.currentScene.createNode("Shape");
let LineSet685 = browser.currentScene.createNode("LineSet");
LineSet685.vertexCount = new MFInt32(new int[2]);
let Coordinate686 = browser.currentScene.createNode("Coordinate");
Coordinate686.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet685.coord = Coordinate686;

let ColorRGBA687 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA687.USE = "HAnimSegmentLineColorRGBA";
LineSet685.color = ColorRGBA687;

Shape684.geometry = LineSet685;

HAnimSegment680.children[2] = Shape684;

HAnimJoint679.children = new MFNode();

HAnimJoint679.children[0] = HAnimSegment680;

let HAnimJoint688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint688.name = "vc2";
HAnimJoint688.DEF = "hanim_vc2";
HAnimJoint688.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint688.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment689 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment689.name = "c2";
HAnimSegment689.DEF = "hanim_c2";
//<HAnimJoint name='vc2'/> visualization sphere is placed within <HAnimSegment name='c2'/>
let TouchSensor690 = browser.currentScene.createNode("TouchSensor");
TouchSensor690.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment689.children = new MFNode();

HAnimSegment689.children[0] = TouchSensor690;

let Transform691 = browser.currentScene.createNode("Transform");
Transform691.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Shape692 = browser.currentScene.createNode("Shape");
Shape692.USE = "HAnimJointShape";
Transform691.children = new MFNode();

Transform691.children[0] = Shape692;

HAnimSegment689.children[1] = Transform691;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
let Shape693 = browser.currentScene.createNode("Shape");
let LineSet694 = browser.currentScene.createNode("LineSet");
LineSet694.vertexCount = new MFInt32(new int[2]);
let Coordinate695 = browser.currentScene.createNode("Coordinate");
Coordinate695.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet694.coord = Coordinate695;

let ColorRGBA696 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA696.USE = "HAnimSegmentLineColorRGBA";
LineSet694.color = ColorRGBA696;

Shape693.geometry = LineSet694;

HAnimSegment689.children[2] = Shape693;

HAnimJoint688.children = new MFNode();

HAnimJoint688.children[0] = HAnimSegment689;

let HAnimJoint697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint697.name = "vc1";
HAnimJoint697.DEF = "hanim_vc1";
HAnimJoint697.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint697.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment698 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment698.name = "c1";
HAnimSegment698.DEF = "hanim_c1";
//<HAnimJoint name='vc1'/> visualization sphere is placed within <HAnimSegment name='c1'/>
let TouchSensor699 = browser.currentScene.createNode("TouchSensor");
TouchSensor699.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment698.children = new MFNode();

HAnimSegment698.children[0] = TouchSensor699;

let Transform700 = browser.currentScene.createNode("Transform");
Transform700.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Shape701 = browser.currentScene.createNode("Shape");
Shape701.USE = "HAnimJointShape";
Transform700.children = new MFNode();

Transform700.children[0] = Shape701;

HAnimSegment698.children[1] = Transform700;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
let Shape702 = browser.currentScene.createNode("Shape");
let LineSet703 = browser.currentScene.createNode("LineSet");
LineSet703.vertexCount = new MFInt32(new int[2]);
let Coordinate704 = browser.currentScene.createNode("Coordinate");
Coordinate704.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet703.coord = Coordinate704;

let ColorRGBA705 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA705.USE = "HAnimSegmentLineColorRGBA";
LineSet703.color = ColorRGBA705;

Shape702.geometry = LineSet703;

HAnimSegment698.children[2] = Shape702;

HAnimJoint697.children = new MFNode();

HAnimJoint697.children[0] = HAnimSegment698;

let HAnimJoint706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint706.name = "skullbase";
HAnimJoint706.DEF = "hanim_skullbase";
HAnimJoint706.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint706.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment707 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment707.name = "skull";
HAnimSegment707.DEF = "hanim_skull";
//<HAnimJoint name='skullbase'/> visualization sphere is placed within <HAnimSegment name='skull'/>
let TouchSensor708 = browser.currentScene.createNode("TouchSensor");
TouchSensor708.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment707.children = new MFNode();

HAnimSegment707.children[0] = TouchSensor708;

let Transform709 = browser.currentScene.createNode("Transform");
Transform709.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Shape710 = browser.currentScene.createNode("Shape");
Shape710.USE = "HAnimJointShape";
Transform709.children = new MFNode();

Transform709.children[0] = Shape710;

HAnimSegment707.children[1] = Transform709;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
let Shape711 = browser.currentScene.createNode("Shape");
let LineSet712 = browser.currentScene.createNode("LineSet");
LineSet712.vertexCount = new MFInt32(new int[2]);
let Coordinate713 = browser.currentScene.createNode("Coordinate");
Coordinate713.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet712.coord = Coordinate713;

let ColorRGBA714 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA714.USE = "HAnimSegmentLineColorRGBA";
LineSet712.color = ColorRGBA714;

Shape711.geometry = LineSet712;

HAnimSegment707.children[2] = Shape711;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
let Shape715 = browser.currentScene.createNode("Shape");
let LineSet716 = browser.currentScene.createNode("LineSet");
LineSet716.vertexCount = new MFInt32(new int[2]);
let Coordinate717 = browser.currentScene.createNode("Coordinate");
Coordinate717.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet716.coord = Coordinate717;

let ColorRGBA718 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA718.USE = "HAnimSegmentLineColorRGBA";
LineSet716.color = ColorRGBA718;

Shape715.geometry = LineSet716;

HAnimSegment707.children[3] = Shape715;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
let Shape719 = browser.currentScene.createNode("Shape");
let LineSet720 = browser.currentScene.createNode("LineSet");
LineSet720.vertexCount = new MFInt32(new int[2]);
let Coordinate721 = browser.currentScene.createNode("Coordinate");
Coordinate721.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet720.coord = Coordinate721;

let ColorRGBA722 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA722.USE = "HAnimSegmentLineColorRGBA";
LineSet720.color = ColorRGBA722;

Shape719.geometry = LineSet720;

HAnimSegment707.children[4] = Shape719;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
let Shape723 = browser.currentScene.createNode("Shape");
let LineSet724 = browser.currentScene.createNode("LineSet");
LineSet724.vertexCount = new MFInt32(new int[2]);
let Coordinate725 = browser.currentScene.createNode("Coordinate");
Coordinate725.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet724.coord = Coordinate725;

let ColorRGBA726 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA726.USE = "HAnimSegmentLineColorRGBA";
LineSet724.color = ColorRGBA726;

Shape723.geometry = LineSet724;

HAnimSegment707.children[5] = Shape723;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
let Shape727 = browser.currentScene.createNode("Shape");
let LineSet728 = browser.currentScene.createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
let Coordinate729 = browser.currentScene.createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet728.coord = Coordinate729;

let ColorRGBA730 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA730.USE = "HAnimSegmentLineColorRGBA";
LineSet728.color = ColorRGBA730;

Shape727.geometry = LineSet728;

HAnimSegment707.children[6] = Shape727;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
let Shape731 = browser.currentScene.createNode("Shape");
let LineSet732 = browser.currentScene.createNode("LineSet");
LineSet732.vertexCount = new MFInt32(new int[2]);
let Coordinate733 = browser.currentScene.createNode("Coordinate");
Coordinate733.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet732.coord = Coordinate733;

let ColorRGBA734 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA734.USE = "HAnimSegmentLineColorRGBA";
LineSet732.color = ColorRGBA734;

Shape731.geometry = LineSet732;

HAnimSegment707.children[7] = Shape731;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
let Shape735 = browser.currentScene.createNode("Shape");
let LineSet736 = browser.currentScene.createNode("LineSet");
LineSet736.vertexCount = new MFInt32(new int[2]);
let Coordinate737 = browser.currentScene.createNode("Coordinate");
Coordinate737.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet736.coord = Coordinate737;

let ColorRGBA738 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA738.USE = "HAnimSegmentLineColorRGBA";
LineSet736.color = ColorRGBA738;

Shape735.geometry = LineSet736;

HAnimSegment707.children[8] = Shape735;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
let Shape739 = browser.currentScene.createNode("Shape");
let LineSet740 = browser.currentScene.createNode("LineSet");
LineSet740.vertexCount = new MFInt32(new int[2]);
let Coordinate741 = browser.currentScene.createNode("Coordinate");
Coordinate741.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet740.coord = Coordinate741;

let ColorRGBA742 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSiteLineColorRGBA";
LineSet740.color = ColorRGBA742;

Shape739.geometry = LineSet740;

HAnimSegment707.children[9] = Shape739;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
let Shape743 = browser.currentScene.createNode("Shape");
let LineSet744 = browser.currentScene.createNode("LineSet");
LineSet744.vertexCount = new MFInt32(new int[2]);
let Coordinate745 = browser.currentScene.createNode("Coordinate");
Coordinate745.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet744.coord = Coordinate745;

let ColorRGBA746 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA746.USE = "HAnimSiteLineColorRGBA";
LineSet744.color = ColorRGBA746;

Shape743.geometry = LineSet744;

HAnimSegment707.children[10] = Shape743;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
let Shape747 = browser.currentScene.createNode("Shape");
let LineSet748 = browser.currentScene.createNode("LineSet");
LineSet748.vertexCount = new MFInt32(new int[2]);
let Coordinate749 = browser.currentScene.createNode("Coordinate");
Coordinate749.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet748.coord = Coordinate749;

let ColorRGBA750 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA750.USE = "HAnimSiteLineColorRGBA";
LineSet748.color = ColorRGBA750;

Shape747.geometry = LineSet748;

HAnimSegment707.children[11] = Shape747;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
let Shape751 = browser.currentScene.createNode("Shape");
let LineSet752 = browser.currentScene.createNode("LineSet");
LineSet752.vertexCount = new MFInt32(new int[2]);
let Coordinate753 = browser.currentScene.createNode("Coordinate");
Coordinate753.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet752.coord = Coordinate753;

let ColorRGBA754 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA754.USE = "HAnimSiteLineColorRGBA";
LineSet752.color = ColorRGBA754;

Shape751.geometry = LineSet752;

HAnimSegment707.children[12] = Shape751;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
let Shape755 = browser.currentScene.createNode("Shape");
let LineSet756 = browser.currentScene.createNode("LineSet");
LineSet756.vertexCount = new MFInt32(new int[2]);
let Coordinate757 = browser.currentScene.createNode("Coordinate");
Coordinate757.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet756.coord = Coordinate757;

let ColorRGBA758 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA758.USE = "HAnimSiteLineColorRGBA";
LineSet756.color = ColorRGBA758;

Shape755.geometry = LineSet756;

HAnimSegment707.children[13] = Shape755;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
let Shape759 = browser.currentScene.createNode("Shape");
let LineSet760 = browser.currentScene.createNode("LineSet");
LineSet760.vertexCount = new MFInt32(new int[2]);
let Coordinate761 = browser.currentScene.createNode("Coordinate");
Coordinate761.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet760.coord = Coordinate761;

let ColorRGBA762 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA762.USE = "HAnimSiteLineColorRGBA";
LineSet760.color = ColorRGBA762;

Shape759.geometry = LineSet760;

HAnimSegment707.children[14] = Shape759;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
let Shape763 = browser.currentScene.createNode("Shape");
let LineSet764 = browser.currentScene.createNode("LineSet");
LineSet764.vertexCount = new MFInt32(new int[2]);
let Coordinate765 = browser.currentScene.createNode("Coordinate");
Coordinate765.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet764.coord = Coordinate765;

let ColorRGBA766 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA766.USE = "HAnimSiteLineColorRGBA";
LineSet764.color = ColorRGBA766;

Shape763.geometry = LineSet764;

HAnimSegment707.children[15] = Shape763;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
let Shape767 = browser.currentScene.createNode("Shape");
let LineSet768 = browser.currentScene.createNode("LineSet");
LineSet768.vertexCount = new MFInt32(new int[2]);
let Coordinate769 = browser.currentScene.createNode("Coordinate");
Coordinate769.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet768.coord = Coordinate769;

let ColorRGBA770 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA770.USE = "HAnimSiteLineColorRGBA";
LineSet768.color = ColorRGBA770;

Shape767.geometry = LineSet768;

HAnimSegment707.children[16] = Shape767;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
let Shape771 = browser.currentScene.createNode("Shape");
let LineSet772 = browser.currentScene.createNode("LineSet");
LineSet772.vertexCount = new MFInt32(new int[2]);
let Coordinate773 = browser.currentScene.createNode("Coordinate");
Coordinate773.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet772.coord = Coordinate773;

let ColorRGBA774 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA774.USE = "HAnimSiteLineColorRGBA";
LineSet772.color = ColorRGBA774;

Shape771.geometry = LineSet772;

HAnimSegment707.children[17] = Shape771;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
let Shape775 = browser.currentScene.createNode("Shape");
let LineSet776 = browser.currentScene.createNode("LineSet");
LineSet776.vertexCount = new MFInt32(new int[2]);
let Coordinate777 = browser.currentScene.createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet776.coord = Coordinate777;

let ColorRGBA778 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA778.USE = "HAnimSiteLineColorRGBA";
LineSet776.color = ColorRGBA778;

Shape775.geometry = LineSet776;

HAnimSegment707.children[18] = Shape775;

let HAnimSite779 = browser.currentScene.createNode("HAnimSite");
HAnimSite779.name = "skull_tip";
HAnimSite779.DEF = "hanim_skull_tip";
HAnimSite779.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
//HAnimSite visualization shape
let TouchSensor780 = browser.currentScene.createNode("TouchSensor");
TouchSensor780.description = "HAnimSite skull_tip";
HAnimSite779.children = new MFNode();

HAnimSite779.children[0] = TouchSensor780;

let Shape781 = browser.currentScene.createNode("Shape");
Shape781.USE = "HAnimSiteShape";
HAnimSite779.children[1] = Shape781;

HAnimSegment707.children[19] = HAnimSite779;

let HAnimSite782 = browser.currentScene.createNode("HAnimSite");
HAnimSite782.name = "sellion_pt";
HAnimSite782.DEF = "hanim_sellion_pt";
HAnimSite782.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
let TouchSensor783 = browser.currentScene.createNode("TouchSensor");
TouchSensor783.description = "HAnimSite sellion";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

let Shape784 = browser.currentScene.createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimSegment707.children[20] = HAnimSite782;

let HAnimSite785 = browser.currentScene.createNode("HAnimSite");
HAnimSite785.name = "r_infraorbitale_pt";
HAnimSite785.DEF = "hanim_r_infraorbitale_pt";
HAnimSite785.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor786 = browser.currentScene.createNode("TouchSensor");
TouchSensor786.description = "HAnimSite r_infraorbitale";
HAnimSite785.children = new MFNode();

HAnimSite785.children[0] = TouchSensor786;

let Shape787 = browser.currentScene.createNode("Shape");
Shape787.USE = "HAnimSiteShape";
HAnimSite785.children[1] = Shape787;

HAnimSegment707.children[21] = HAnimSite785;

let HAnimSite788 = browser.currentScene.createNode("HAnimSite");
HAnimSite788.name = "l_infraorbitale_pt";
HAnimSite788.DEF = "hanim_l_infraorbitale_pt";
HAnimSite788.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor789 = browser.currentScene.createNode("TouchSensor");
TouchSensor789.description = "HAnimSite l_infraorbitale";
HAnimSite788.children = new MFNode();

HAnimSite788.children[0] = TouchSensor789;

let Shape790 = browser.currentScene.createNode("Shape");
Shape790.USE = "HAnimSiteShape";
HAnimSite788.children[1] = Shape790;

HAnimSegment707.children[22] = HAnimSite788;

let HAnimSite791 = browser.currentScene.createNode("HAnimSite");
HAnimSite791.name = "supramenton_pt";
HAnimSite791.DEF = "hanim_supramenton_pt";
HAnimSite791.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
let TouchSensor792 = browser.currentScene.createNode("TouchSensor");
TouchSensor792.description = "HAnimSite supramenton";
HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = TouchSensor792;

let Shape793 = browser.currentScene.createNode("Shape");
Shape793.USE = "HAnimSiteShape";
HAnimSite791.children[1] = Shape793;

HAnimSegment707.children[23] = HAnimSite791;

let HAnimSite794 = browser.currentScene.createNode("HAnimSite");
HAnimSite794.name = "r_tragion_pt";
HAnimSite794.DEF = "hanim_r_tragion_pt";
HAnimSite794.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
let TouchSensor795 = browser.currentScene.createNode("TouchSensor");
TouchSensor795.description = "HAnimSite r_tragion";
HAnimSite794.children = new MFNode();

HAnimSite794.children[0] = TouchSensor795;

let Shape796 = browser.currentScene.createNode("Shape");
Shape796.USE = "HAnimSiteShape";
HAnimSite794.children[1] = Shape796;

HAnimSegment707.children[24] = HAnimSite794;

let HAnimSite797 = browser.currentScene.createNode("HAnimSite");
HAnimSite797.name = "r_gonion_pt";
HAnimSite797.DEF = "hanim_r_gonion_pt";
HAnimSite797.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
let TouchSensor798 = browser.currentScene.createNode("TouchSensor");
TouchSensor798.description = "HAnimSite r_gonion";
HAnimSite797.children = new MFNode();

HAnimSite797.children[0] = TouchSensor798;

let Shape799 = browser.currentScene.createNode("Shape");
Shape799.USE = "HAnimSiteShape";
HAnimSite797.children[1] = Shape799;

HAnimSegment707.children[25] = HAnimSite797;

let HAnimSite800 = browser.currentScene.createNode("HAnimSite");
HAnimSite800.name = "l_tragion_pt";
HAnimSite800.DEF = "hanim_l_tragion_pt";
HAnimSite800.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
let TouchSensor801 = browser.currentScene.createNode("TouchSensor");
TouchSensor801.description = "HAnimSite l_tragion";
HAnimSite800.children = new MFNode();

HAnimSite800.children[0] = TouchSensor801;

let Shape802 = browser.currentScene.createNode("Shape");
Shape802.USE = "HAnimSiteShape";
HAnimSite800.children[1] = Shape802;

HAnimSegment707.children[26] = HAnimSite800;

let HAnimSite803 = browser.currentScene.createNode("HAnimSite");
HAnimSite803.name = "l_gonion_pt";
HAnimSite803.DEF = "hanim_l_gonion_pt";
HAnimSite803.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
let TouchSensor804 = browser.currentScene.createNode("TouchSensor");
TouchSensor804.description = "HAnimSite l_gonion";
HAnimSite803.children = new MFNode();

HAnimSite803.children[0] = TouchSensor804;

let Shape805 = browser.currentScene.createNode("Shape");
Shape805.USE = "HAnimSiteShape";
HAnimSite803.children[1] = Shape805;

HAnimSegment707.children[27] = HAnimSite803;

let HAnimSite806 = browser.currentScene.createNode("HAnimSite");
HAnimSite806.name = "nuchale_pt";
HAnimSite806.DEF = "hanim_nuchale_pt";
HAnimSite806.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
let TouchSensor807 = browser.currentScene.createNode("TouchSensor");
TouchSensor807.description = "HAnimSite nuchale";
HAnimSite806.children = new MFNode();

HAnimSite806.children[0] = TouchSensor807;

let Shape808 = browser.currentScene.createNode("Shape");
Shape808.USE = "HAnimSiteShape";
HAnimSite806.children[1] = Shape808;

HAnimSegment707.children[28] = HAnimSite806;

HAnimJoint706.children = new MFNode();

HAnimJoint706.children[0] = HAnimSegment707;

let HAnimJoint809 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint809.name = "l_eyeball_joint";
HAnimJoint809.DEF = "hanim_l_eyeball_joint";
HAnimJoint809.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint809.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment810.name = "l_eyeball";
HAnimSegment810.DEF = "hanim_l_eyeball";
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyeball'/>
let TouchSensor811 = browser.currentScene.createNode("TouchSensor");
TouchSensor811.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment810.children = new MFNode();

HAnimSegment810.children[0] = TouchSensor811;

let Transform812 = browser.currentScene.createNode("Transform");
Transform812.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape813 = browser.currentScene.createNode("Shape");
Shape813.USE = "HAnimJointShape";
Transform812.children = new MFNode();

Transform812.children[0] = Shape813;

HAnimSegment810.children[1] = Transform812;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
let Shape814 = browser.currentScene.createNode("Shape");
let LineSet815 = browser.currentScene.createNode("LineSet");
LineSet815.vertexCount = new MFInt32(new int[2]);
let Coordinate816 = browser.currentScene.createNode("Coordinate");
Coordinate816.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet815.coord = Coordinate816;

let ColorRGBA817 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA817.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA817.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet815.color = ColorRGBA817;

Shape814.geometry = LineSet815;

HAnimSegment810.children[2] = Shape814;

let HAnimSite818 = browser.currentScene.createNode("HAnimSite");
HAnimSite818.name = "l_eyeball_site_view";
HAnimSite818.DEF = "hanim_l_eyeball_site_view";
HAnimSite818.translation = new SFVec3f(new float[0.034,1.64,0.05]);
//HAnimSite visualization shape
let TouchSensor819 = browser.currentScene.createNode("TouchSensor");
TouchSensor819.description = "HAnimSite l_eyeball_site_view";
HAnimSite818.children = new MFNode();

HAnimSite818.children[0] = TouchSensor819;

let Shape820 = browser.currentScene.createNode("Shape");
Shape820.USE = "HAnimSiteShape";
HAnimSite818.children[1] = Shape820;

let Viewpoint821 = browser.currentScene.createNode("Viewpoint");
Viewpoint821.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint821.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint821.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint821.position = new SFVec3f(new float[0,0,0]);
HAnimSite818.children[2] = Viewpoint821;

//HAnimSite/Viewpoint visualization shape
let Anchor822 = browser.currentScene.createNode("Anchor");
Anchor822.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor822.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
let LOD823 = browser.currentScene.createNode("LOD");
LOD823.forceTransitions = True;
LOD823.range = new MFFloat(new float[0.04]);
let WorldInfo824 = browser.currentScene.createNode("WorldInfo");
WorldInfo824.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD823.children = new MFNode();

LOD823.children[0] = WorldInfo824;

let Shape825 = browser.currentScene.createNode("Shape");
Shape825.DEF = "HAnimSiteViewpointShape";
let IndexedFaceSet826 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet826.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet826.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet826.creaseAngle = 0.5;
let Coordinate827 = browser.currentScene.createNode("Coordinate");
Coordinate827.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet826.coord = Coordinate827;

Shape825.geometry = IndexedFaceSet826;

let Appearance828 = browser.currentScene.createNode("Appearance");
let Material829 = browser.currentScene.createNode("Material");
Material829.diffuseColor = new SFColor(new float[0,0,1]);
Material829.transparency = 0.6;
Appearance828.material = Material829;

Shape825.appearance = Appearance828;

LOD823.children[1] = Shape825;

Anchor822.children = new MFNode();

Anchor822.children[0] = LOD823;

HAnimSite818.children[3] = Anchor822;

HAnimSegment810.children[3] = HAnimSite818;

HAnimJoint809.children = new MFNode();

HAnimJoint809.children[0] = HAnimSegment810;

HAnimJoint706.children[1] = HAnimJoint809;

let HAnimJoint830 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint830.name = "l_eyelid_joint";
HAnimJoint830.DEF = "hanim_l_eyelid_joint";
HAnimJoint830.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint830.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment831.name = "l_eyelid";
HAnimSegment831.DEF = "hanim_l_eyelid";
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyelid'/>
let TouchSensor832 = browser.currentScene.createNode("TouchSensor");
TouchSensor832.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment831.children = new MFNode();

HAnimSegment831.children[0] = TouchSensor832;

let Transform833 = browser.currentScene.createNode("Transform");
Transform833.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape834 = browser.currentScene.createNode("Shape");
Shape834.USE = "HAnimJointShape";
Transform833.children = new MFNode();

Transform833.children[0] = Shape834;

HAnimSegment831.children[1] = Transform833;

HAnimJoint830.children = new MFNode();

HAnimJoint830.children[0] = HAnimSegment831;

HAnimJoint706.children[2] = HAnimJoint830;

let HAnimJoint835 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint835.name = "l_eyebrow_joint";
HAnimJoint835.DEF = "hanim_l_eyebrow_joint";
HAnimJoint835.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint835.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment836.name = "l_eyebrow";
HAnimSegment836.DEF = "hanim_l_eyebrow";
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyebrow'/>
let TouchSensor837 = browser.currentScene.createNode("TouchSensor");
TouchSensor837.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment836.children = new MFNode();

HAnimSegment836.children[0] = TouchSensor837;

let Transform838 = browser.currentScene.createNode("Transform");
Transform838.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
let Shape839 = browser.currentScene.createNode("Shape");
Shape839.USE = "HAnimJointShape";
Transform838.children = new MFNode();

Transform838.children[0] = Shape839;

HAnimSegment836.children[1] = Transform838;

HAnimJoint835.children = new MFNode();

HAnimJoint835.children[0] = HAnimSegment836;

HAnimJoint706.children[3] = HAnimJoint835;

let HAnimJoint840 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint840.name = "r_eyeball_joint";
HAnimJoint840.DEF = "hanim_r_eyeball_joint";
HAnimJoint840.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint840.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment841.name = "r_eyeball";
HAnimSegment841.DEF = "hanim_r_eyeball";
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyeball'/>
let TouchSensor842 = browser.currentScene.createNode("TouchSensor");
TouchSensor842.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment841.children = new MFNode();

HAnimSegment841.children[0] = TouchSensor842;

let Transform843 = browser.currentScene.createNode("Transform");
Transform843.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape844 = browser.currentScene.createNode("Shape");
Shape844.USE = "HAnimJointShape";
Transform843.children = new MFNode();

Transform843.children[0] = Shape844;

HAnimSegment841.children[1] = Transform843;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
let Shape845 = browser.currentScene.createNode("Shape");
let LineSet846 = browser.currentScene.createNode("LineSet");
LineSet846.vertexCount = new MFInt32(new int[2]);
let Coordinate847 = browser.currentScene.createNode("Coordinate");
Coordinate847.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet846.coord = Coordinate847;

let ColorRGBA848 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA848.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet846.color = ColorRGBA848;

Shape845.geometry = LineSet846;

HAnimSegment841.children[2] = Shape845;

let HAnimSite849 = browser.currentScene.createNode("HAnimSite");
HAnimSite849.name = "r_eyeball_site_view";
HAnimSite849.DEF = "hanim_r_eyeball_site_view";
HAnimSite849.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
//HAnimSite visualization shape
let TouchSensor850 = browser.currentScene.createNode("TouchSensor");
TouchSensor850.description = "HAnimSite r_eyeball_site_view";
HAnimSite849.children = new MFNode();

HAnimSite849.children[0] = TouchSensor850;

let Shape851 = browser.currentScene.createNode("Shape");
Shape851.USE = "HAnimSiteShape";
HAnimSite849.children[1] = Shape851;

let Viewpoint852 = browser.currentScene.createNode("Viewpoint");
Viewpoint852.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint852.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint852.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint852.position = new SFVec3f(new float[0,0,0]);
HAnimSite849.children[2] = Viewpoint852;

//HAnimSite/Viewpoint visualization shape
let Anchor853 = browser.currentScene.createNode("Anchor");
Anchor853.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor853.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
let LOD854 = browser.currentScene.createNode("LOD");
LOD854.forceTransitions = True;
LOD854.range = new MFFloat(new float[0.04]);
let WorldInfo855 = browser.currentScene.createNode("WorldInfo");
WorldInfo855.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD854.children = new MFNode();

LOD854.children[0] = WorldInfo855;

let Shape856 = browser.currentScene.createNode("Shape");
Shape856.USE = "HAnimSiteViewpointShape";
LOD854.children[1] = Shape856;

Anchor853.children = new MFNode();

Anchor853.children[0] = LOD854;

HAnimSite849.children[3] = Anchor853;

HAnimSegment841.children[3] = HAnimSite849;

HAnimJoint840.children = new MFNode();

HAnimJoint840.children[0] = HAnimSegment841;

HAnimJoint706.children[4] = HAnimJoint840;

let HAnimJoint857 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint857.name = "r_eyelid_joint";
HAnimJoint857.DEF = "hanim_r_eyelid_joint";
HAnimJoint857.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint857.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment858 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment858.name = "r_eyelid";
HAnimSegment858.DEF = "hanim_r_eyelid";
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyelid'/>
let TouchSensor859 = browser.currentScene.createNode("TouchSensor");
TouchSensor859.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment858.children = new MFNode();

HAnimSegment858.children[0] = TouchSensor859;

let Transform860 = browser.currentScene.createNode("Transform");
Transform860.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape861 = browser.currentScene.createNode("Shape");
Shape861.USE = "HAnimJointShape";
Transform860.children = new MFNode();

Transform860.children[0] = Shape861;

HAnimSegment858.children[1] = Transform860;

HAnimJoint857.children = new MFNode();

HAnimJoint857.children[0] = HAnimSegment858;

HAnimJoint706.children[5] = HAnimJoint857;

let HAnimJoint862 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint862.name = "r_eyebrow_joint";
HAnimJoint862.DEF = "hanim_r_eyebrow_joint";
HAnimJoint862.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint862.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment863.name = "r_eyebrow";
HAnimSegment863.DEF = "hanim_r_eyebrow";
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyebrow'/>
let TouchSensor864 = browser.currentScene.createNode("TouchSensor");
TouchSensor864.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment863.children = new MFNode();

HAnimSegment863.children[0] = TouchSensor864;

let Transform865 = browser.currentScene.createNode("Transform");
Transform865.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
let Shape866 = browser.currentScene.createNode("Shape");
Shape866.USE = "HAnimJointShape";
Transform865.children = new MFNode();

Transform865.children[0] = Shape866;

HAnimSegment863.children[1] = Transform865;

HAnimJoint862.children = new MFNode();

HAnimJoint862.children[0] = HAnimSegment863;

HAnimJoint706.children[6] = HAnimJoint862;

let HAnimJoint867 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint867.name = "temporomandibular";
HAnimJoint867.DEF = "hanim_temporomandibular";
HAnimJoint867.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint867.stiffness = new SFVec3f(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimSegment868 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment868.name = "jaw";
HAnimSegment868.DEF = "hanim_jaw";
//<HAnimJoint name='temporomandibular'/> visualization sphere is placed within <HAnimSegment name='jaw'/>
let TouchSensor869 = browser.currentScene.createNode("TouchSensor");
TouchSensor869.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment868.children = new MFNode();

HAnimSegment868.children[0] = TouchSensor869;

let Transform870 = browser.currentScene.createNode("Transform");
Transform870.translation = new SFVec3f(new float[0,1.63,0.015]);
let Shape871 = browser.currentScene.createNode("Shape");
Shape871.USE = "HAnimJointShape";
Transform870.children = new MFNode();

Transform870.children[0] = Shape871;

HAnimSegment868.children[1] = Transform870;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
let Shape872 = browser.currentScene.createNode("Shape");
let LineSet873 = browser.currentScene.createNode("LineSet");
LineSet873.vertexCount = new MFInt32(new int[2]);
let Coordinate874 = browser.currentScene.createNode("Coordinate");
Coordinate874.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet873.coord = Coordinate874;

let ColorRGBA875 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA875.USE = "HAnimSiteLineColorRGBA";
LineSet873.color = ColorRGBA875;

Shape872.geometry = LineSet873;

HAnimSegment868.children[2] = Shape872;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
let Shape876 = browser.currentScene.createNode("Shape");
let LineSet877 = browser.currentScene.createNode("LineSet");
LineSet877.vertexCount = new MFInt32(new int[2]);
let Coordinate878 = browser.currentScene.createNode("Coordinate");
Coordinate878.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet877.coord = Coordinate878;

let ColorRGBA879 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA879.USE = "HAnimSiteLineColorRGBA";
LineSet877.color = ColorRGBA879;

Shape876.geometry = LineSet877;

HAnimSegment868.children[3] = Shape876;

let HAnimSite880 = browser.currentScene.createNode("HAnimSite");
HAnimSite880.name = "temporomandibular_l_site_pt";
HAnimSite880.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite880.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor881 = browser.currentScene.createNode("TouchSensor");
TouchSensor881.description = "HAnimSite temporomandibular_l_site";
HAnimSite880.children = new MFNode();

HAnimSite880.children[0] = TouchSensor881;

let Shape882 = browser.currentScene.createNode("Shape");
Shape882.USE = "HAnimSiteShape";
HAnimSite880.children[1] = Shape882;

HAnimSegment868.children[4] = HAnimSite880;

let HAnimSite883 = browser.currentScene.createNode("HAnimSite");
HAnimSite883.name = "temporomandibular_r_site_pt";
HAnimSite883.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite883.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor884 = browser.currentScene.createNode("TouchSensor");
TouchSensor884.description = "HAnimSite temporomandibular_r_site";
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = TouchSensor884;

let Shape885 = browser.currentScene.createNode("Shape");
Shape885.USE = "HAnimSiteShape";
HAnimSite883.children[1] = Shape885;

HAnimSegment868.children[5] = HAnimSite883;

HAnimJoint867.children = new MFNode();

HAnimJoint867.children[0] = HAnimSegment868;

HAnimJoint706.children[7] = HAnimJoint867;

HAnimJoint697.children[1] = HAnimJoint706;

HAnimJoint688.children[1] = HAnimJoint697;

HAnimJoint679.children[1] = HAnimJoint688;

HAnimJoint670.children[1] = HAnimJoint679;

HAnimJoint661.children[1] = HAnimJoint670;

HAnimJoint652.children[1] = HAnimJoint661;

HAnimJoint629.children[1] = HAnimJoint652;

HAnimJoint598.children[1] = HAnimJoint629;

let HAnimJoint886 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint886.name = "l_sternoclavicular";
HAnimJoint886.DEF = "hanim_l_sternoclavicular";
HAnimJoint886.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint886.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment887 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment887.name = "l_clavicle";
HAnimSegment887.DEF = "hanim_l_clavicle";
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='l_clavicle'/>
let TouchSensor888 = browser.currentScene.createNode("TouchSensor");
TouchSensor888.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment887.children = new MFNode();

HAnimSegment887.children[0] = TouchSensor888;

let Transform889 = browser.currentScene.createNode("Transform");
Transform889.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Shape890 = browser.currentScene.createNode("Shape");
Shape890.USE = "HAnimJointShape";
Transform889.children = new MFNode();

Transform889.children[0] = Shape890;

HAnimSegment887.children[1] = Transform889;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
let Shape891 = browser.currentScene.createNode("Shape");
let LineSet892 = browser.currentScene.createNode("LineSet");
LineSet892.vertexCount = new MFInt32(new int[2]);
let Coordinate893 = browser.currentScene.createNode("Coordinate");
Coordinate893.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet892.coord = Coordinate893;

let ColorRGBA894 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA894.USE = "HAnimSegmentLineColorRGBA";
LineSet892.color = ColorRGBA894;

Shape891.geometry = LineSet892;

HAnimSegment887.children[2] = Shape891;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
let Shape895 = browser.currentScene.createNode("Shape");
let LineSet896 = browser.currentScene.createNode("LineSet");
LineSet896.vertexCount = new MFInt32(new int[2]);
let Coordinate897 = browser.currentScene.createNode("Coordinate");
Coordinate897.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet896.coord = Coordinate897;

let ColorRGBA898 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA898.USE = "HAnimSiteLineColorRGBA";
LineSet896.color = ColorRGBA898;

Shape895.geometry = LineSet896;

HAnimSegment887.children[3] = Shape895;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
let Shape899 = browser.currentScene.createNode("Shape");
let LineSet900 = browser.currentScene.createNode("LineSet");
LineSet900.vertexCount = new MFInt32(new int[2]);
let Coordinate901 = browser.currentScene.createNode("Coordinate");
Coordinate901.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet900.coord = Coordinate901;

let ColorRGBA902 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA902.USE = "HAnimSiteLineColorRGBA";
LineSet900.color = ColorRGBA902;

Shape899.geometry = LineSet900;

HAnimSegment887.children[4] = Shape899;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
let Shape903 = browser.currentScene.createNode("Shape");
let LineSet904 = browser.currentScene.createNode("LineSet");
LineSet904.vertexCount = new MFInt32(new int[2]);
let Coordinate905 = browser.currentScene.createNode("Coordinate");
Coordinate905.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet904.coord = Coordinate905;

let ColorRGBA906 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA906.USE = "HAnimSiteLineColorRGBA";
LineSet904.color = ColorRGBA906;

Shape903.geometry = LineSet904;

HAnimSegment887.children[5] = Shape903;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
let Shape907 = browser.currentScene.createNode("Shape");
let LineSet908 = browser.currentScene.createNode("LineSet");
LineSet908.vertexCount = new MFInt32(new int[2]);
let Coordinate909 = browser.currentScene.createNode("Coordinate");
Coordinate909.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet908.coord = Coordinate909;

let ColorRGBA910 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA910.USE = "HAnimSiteLineColorRGBA";
LineSet908.color = ColorRGBA910;

Shape907.geometry = LineSet908;

HAnimSegment887.children[6] = Shape907;

let HAnimSite911 = browser.currentScene.createNode("HAnimSite");
HAnimSite911.name = "l_clavicale_pt";
HAnimSite911.DEF = "hanim_l_clavicale_pt";
HAnimSite911.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
let TouchSensor912 = browser.currentScene.createNode("TouchSensor");
TouchSensor912.description = "HAnimSite l_clavicale";
HAnimSite911.children = new MFNode();

HAnimSite911.children[0] = TouchSensor912;

let Shape913 = browser.currentScene.createNode("Shape");
Shape913.USE = "HAnimSiteShape";
HAnimSite911.children[1] = Shape913;

HAnimSegment887.children[7] = HAnimSite911;

let HAnimSite914 = browser.currentScene.createNode("HAnimSite");
HAnimSite914.name = "l_acromion_pt";
HAnimSite914.DEF = "hanim_l_acromion_pt";
HAnimSite914.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
let TouchSensor915 = browser.currentScene.createNode("TouchSensor");
TouchSensor915.description = "HAnimSite l_acromion";
HAnimSite914.children = new MFNode();

HAnimSite914.children[0] = TouchSensor915;

let Shape916 = browser.currentScene.createNode("Shape");
Shape916.USE = "HAnimSiteShape";
HAnimSite914.children[1] = Shape916;

HAnimSegment887.children[8] = HAnimSite914;

let HAnimSite917 = browser.currentScene.createNode("HAnimSite");
HAnimSite917.name = "l_axilla_ant_pt";
HAnimSite917.DEF = "hanim_l_axilla_ant_pt";
HAnimSite917.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
let TouchSensor918 = browser.currentScene.createNode("TouchSensor");
TouchSensor918.description = "HAnimSite l_axilla_ant";
HAnimSite917.children = new MFNode();

HAnimSite917.children[0] = TouchSensor918;

let Shape919 = browser.currentScene.createNode("Shape");
Shape919.USE = "HAnimSiteShape";
HAnimSite917.children[1] = Shape919;

HAnimSegment887.children[9] = HAnimSite917;

let HAnimSite920 = browser.currentScene.createNode("HAnimSite");
HAnimSite920.name = "l_axilla_post_pt";
HAnimSite920.DEF = "hanim_l_axilla_post_pt";
HAnimSite920.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
let TouchSensor921 = browser.currentScene.createNode("TouchSensor");
TouchSensor921.description = "HAnimSite l_axilla_post";
HAnimSite920.children = new MFNode();

HAnimSite920.children[0] = TouchSensor921;

let Shape922 = browser.currentScene.createNode("Shape");
Shape922.USE = "HAnimSiteShape";
HAnimSite920.children[1] = Shape922;

HAnimSegment887.children[10] = HAnimSite920;

HAnimJoint886.children = new MFNode();

HAnimJoint886.children[0] = HAnimSegment887;

let HAnimJoint923 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint923.name = "l_acromioclavicular";
HAnimJoint923.DEF = "hanim_l_acromioclavicular";
HAnimJoint923.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint923.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment924 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment924.name = "l_scapula";
HAnimSegment924.DEF = "hanim_l_scapula";
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='l_scapula'/>
let TouchSensor925 = browser.currentScene.createNode("TouchSensor");
TouchSensor925.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment924.children = new MFNode();

HAnimSegment924.children[0] = TouchSensor925;

let Transform926 = browser.currentScene.createNode("Transform");
Transform926.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Shape927 = browser.currentScene.createNode("Shape");
Shape927.USE = "HAnimJointShape";
Transform926.children = new MFNode();

Transform926.children[0] = Shape927;

HAnimSegment924.children[1] = Transform926;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
let Shape928 = browser.currentScene.createNode("Shape");
let LineSet929 = browser.currentScene.createNode("LineSet");
LineSet929.vertexCount = new MFInt32(new int[2]);
let Coordinate930 = browser.currentScene.createNode("Coordinate");
Coordinate930.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet929.coord = Coordinate930;

let ColorRGBA931 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA931.USE = "HAnimSegmentLineColorRGBA";
LineSet929.color = ColorRGBA931;

Shape928.geometry = LineSet929;

HAnimSegment924.children[2] = Shape928;

HAnimJoint923.children = new MFNode();

HAnimJoint923.children[0] = HAnimSegment924;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.name = "l_shoulder";
HAnimJoint932.DEF = "hanim_l_shoulder";
HAnimJoint932.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint932.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment933 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment933.name = "l_upperarm";
HAnimSegment933.DEF = "hanim_l_upperarm";
//<HAnimJoint name='l_shoulder'/> visualization sphere is placed within <HAnimSegment name='l_upperarm'/>
let TouchSensor934 = browser.currentScene.createNode("TouchSensor");
TouchSensor934.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment933.children = new MFNode();

HAnimSegment933.children[0] = TouchSensor934;

let Transform935 = browser.currentScene.createNode("Transform");
Transform935.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape936 = browser.currentScene.createNode("Shape");
Shape936.USE = "HAnimJointShape";
Transform935.children = new MFNode();

Transform935.children[0] = Shape936;

HAnimSegment933.children[1] = Transform935;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
let Shape937 = browser.currentScene.createNode("Shape");
let LineSet938 = browser.currentScene.createNode("LineSet");
LineSet938.vertexCount = new MFInt32(new int[2]);
let Coordinate939 = browser.currentScene.createNode("Coordinate");
Coordinate939.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet938.coord = Coordinate939;

let ColorRGBA940 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA940.USE = "HAnimSegmentLineColorRGBA";
LineSet938.color = ColorRGBA940;

Shape937.geometry = LineSet938;

HAnimSegment933.children[2] = Shape937;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
let Shape941 = browser.currentScene.createNode("Shape");
let LineSet942 = browser.currentScene.createNode("LineSet");
LineSet942.vertexCount = new MFInt32(new int[2]);
let Coordinate943 = browser.currentScene.createNode("Coordinate");
Coordinate943.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet942.coord = Coordinate943;

let ColorRGBA944 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA944.USE = "HAnimSiteLineColorRGBA";
LineSet942.color = ColorRGBA944;

Shape941.geometry = LineSet942;

HAnimSegment933.children[3] = Shape941;

let HAnimSite945 = browser.currentScene.createNode("HAnimSite");
HAnimSite945.name = "l_humeral_lateral_epicn_pt";
HAnimSite945.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite945.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
let TouchSensor946 = browser.currentScene.createNode("TouchSensor");
TouchSensor946.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite945.children = new MFNode();

HAnimSite945.children[0] = TouchSensor946;

let Shape947 = browser.currentScene.createNode("Shape");
Shape947.USE = "HAnimSiteShape";
HAnimSite945.children[1] = Shape947;

HAnimSegment933.children[4] = HAnimSite945;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

let HAnimJoint948 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint948.name = "l_elbow";
HAnimJoint948.DEF = "hanim_l_elbow";
HAnimJoint948.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint948.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment949 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment949.name = "l_forearm";
HAnimSegment949.DEF = "hanim_l_forearm";
//<HAnimJoint name='l_elbow'/> visualization sphere is placed within <HAnimSegment name='l_forearm'/>
let TouchSensor950 = browser.currentScene.createNode("TouchSensor");
TouchSensor950.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment949.children = new MFNode();

HAnimSegment949.children[0] = TouchSensor950;

let Transform951 = browser.currentScene.createNode("Transform");
Transform951.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape952 = browser.currentScene.createNode("Shape");
Shape952.USE = "HAnimJointShape";
Transform951.children = new MFNode();

Transform951.children[0] = Shape952;

HAnimSegment949.children[1] = Transform951;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
let Shape953 = browser.currentScene.createNode("Shape");
let LineSet954 = browser.currentScene.createNode("LineSet");
LineSet954.vertexCount = new MFInt32(new int[2]);
let Coordinate955 = browser.currentScene.createNode("Coordinate");
Coordinate955.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet954.coord = Coordinate955;

let ColorRGBA956 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA956.USE = "HAnimSegmentLineColorRGBA";
LineSet954.color = ColorRGBA956;

Shape953.geometry = LineSet954;

HAnimSegment949.children[2] = Shape953;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
let Shape957 = browser.currentScene.createNode("Shape");
let LineSet958 = browser.currentScene.createNode("LineSet");
LineSet958.vertexCount = new MFInt32(new int[2]);
let Coordinate959 = browser.currentScene.createNode("Coordinate");
Coordinate959.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet958.coord = Coordinate959;

let ColorRGBA960 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA960.USE = "HAnimSiteLineColorRGBA";
LineSet958.color = ColorRGBA960;

Shape957.geometry = LineSet958;

HAnimSegment949.children[3] = Shape957;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
let Shape961 = browser.currentScene.createNode("Shape");
let LineSet962 = browser.currentScene.createNode("LineSet");
LineSet962.vertexCount = new MFInt32(new int[2]);
let Coordinate963 = browser.currentScene.createNode("Coordinate");
Coordinate963.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet962.coord = Coordinate963;

let ColorRGBA964 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA964.USE = "HAnimSiteLineColorRGBA";
LineSet962.color = ColorRGBA964;

Shape961.geometry = LineSet962;

HAnimSegment949.children[4] = Shape961;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
let Shape965 = browser.currentScene.createNode("Shape");
let LineSet966 = browser.currentScene.createNode("LineSet");
LineSet966.vertexCount = new MFInt32(new int[2]);
let Coordinate967 = browser.currentScene.createNode("Coordinate");
Coordinate967.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet966.coord = Coordinate967;

let ColorRGBA968 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA968.USE = "HAnimSiteLineColorRGBA";
LineSet966.color = ColorRGBA968;

Shape965.geometry = LineSet966;

HAnimSegment949.children[5] = Shape965;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
let Shape969 = browser.currentScene.createNode("Shape");
let LineSet970 = browser.currentScene.createNode("LineSet");
LineSet970.vertexCount = new MFInt32(new int[2]);
let Coordinate971 = browser.currentScene.createNode("Coordinate");
Coordinate971.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet970.coord = Coordinate971;

let ColorRGBA972 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA972.USE = "HAnimSiteLineColorRGBA";
LineSet970.color = ColorRGBA972;

Shape969.geometry = LineSet970;

HAnimSegment949.children[6] = Shape969;

let HAnimSite973 = browser.currentScene.createNode("HAnimSite");
HAnimSite973.name = "l_radial_styloid_pt";
HAnimSite973.DEF = "hanim_l_radial_styloid_pt";
HAnimSite973.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
let TouchSensor974 = browser.currentScene.createNode("TouchSensor");
TouchSensor974.description = "HAnimSite l_radial_styloid";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = TouchSensor974;

let Shape975 = browser.currentScene.createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973.children[1] = Shape975;

HAnimSegment949.children[7] = HAnimSite973;

let HAnimSite976 = browser.currentScene.createNode("HAnimSite");
HAnimSite976.name = "l_olecranon_pt";
HAnimSite976.DEF = "hanim_l_olecranon_pt";
HAnimSite976.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
let TouchSensor977 = browser.currentScene.createNode("TouchSensor");
TouchSensor977.description = "HAnimSite l_olecranon";
HAnimSite976.children = new MFNode();

HAnimSite976.children[0] = TouchSensor977;

let Shape978 = browser.currentScene.createNode("Shape");
Shape978.USE = "HAnimSiteShape";
HAnimSite976.children[1] = Shape978;

HAnimSegment949.children[8] = HAnimSite976;

let HAnimSite979 = browser.currentScene.createNode("HAnimSite");
HAnimSite979.name = "l_humeral_medial_epicn_pt";
HAnimSite979.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite979.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
let TouchSensor980 = browser.currentScene.createNode("TouchSensor");
TouchSensor980.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite979.children = new MFNode();

HAnimSite979.children[0] = TouchSensor980;

let Shape981 = browser.currentScene.createNode("Shape");
Shape981.USE = "HAnimSiteShape";
HAnimSite979.children[1] = Shape981;

HAnimSegment949.children[9] = HAnimSite979;

let HAnimSite982 = browser.currentScene.createNode("HAnimSite");
HAnimSite982.name = "l_radiale_pt";
HAnimSite982.DEF = "hanim_l_radiale_pt";
HAnimSite982.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
let TouchSensor983 = browser.currentScene.createNode("TouchSensor");
TouchSensor983.description = "HAnimSite l_radiale";
HAnimSite982.children = new MFNode();

HAnimSite982.children[0] = TouchSensor983;

let Shape984 = browser.currentScene.createNode("Shape");
Shape984.USE = "HAnimSiteShape";
HAnimSite982.children[1] = Shape984;

HAnimSegment949.children[10] = HAnimSite982;

HAnimJoint948.children = new MFNode();

HAnimJoint948.children[0] = HAnimSegment949;

let HAnimJoint985 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint985.name = "l_wrist";
HAnimJoint985.DEF = "hanim_l_wrist";
HAnimJoint985.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint985.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment986 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment986.name = "l_hand";
HAnimSegment986.DEF = "hanim_l_hand";
//<HAnimJoint name='l_wrist'/> visualization sphere is placed within <HAnimSegment name='l_hand'/>
let TouchSensor987 = browser.currentScene.createNode("TouchSensor");
TouchSensor987.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment986.children = new MFNode();

HAnimSegment986.children[0] = TouchSensor987;

let Transform988 = browser.currentScene.createNode("Transform");
Transform988.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape989 = browser.currentScene.createNode("Shape");
Shape989.USE = "HAnimJointShape";
Transform988.children = new MFNode();

Transform988.children[0] = Shape989;

HAnimSegment986.children[1] = Transform988;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
let Shape990 = browser.currentScene.createNode("Shape");
let LineSet991 = browser.currentScene.createNode("LineSet");
LineSet991.vertexCount = new MFInt32(new int[2]);
let Coordinate992 = browser.currentScene.createNode("Coordinate");
Coordinate992.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet991.coord = Coordinate992;

let ColorRGBA993 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA993.USE = "HAnimSegmentLineColorRGBA";
LineSet991.color = ColorRGBA993;

Shape990.geometry = LineSet991;

HAnimSegment986.children[2] = Shape990;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
let Shape994 = browser.currentScene.createNode("Shape");
let LineSet995 = browser.currentScene.createNode("LineSet");
LineSet995.vertexCount = new MFInt32(new int[2]);
let Coordinate996 = browser.currentScene.createNode("Coordinate");
Coordinate996.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet995.coord = Coordinate996;

let ColorRGBA997 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA997.USE = "HAnimSegmentLineColorRGBA";
LineSet995.color = ColorRGBA997;

Shape994.geometry = LineSet995;

HAnimSegment986.children[3] = Shape994;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
let Shape998 = browser.currentScene.createNode("Shape");
let LineSet999 = browser.currentScene.createNode("LineSet");
LineSet999.vertexCount = new MFInt32(new int[2]);
let Coordinate1000 = browser.currentScene.createNode("Coordinate");
Coordinate1000.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet999.coord = Coordinate1000;

let ColorRGBA1001 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1001.USE = "HAnimSegmentLineColorRGBA";
LineSet999.color = ColorRGBA1001;

Shape998.geometry = LineSet999;

HAnimSegment986.children[4] = Shape998;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
let Shape1002 = browser.currentScene.createNode("Shape");
let LineSet1003 = browser.currentScene.createNode("LineSet");
LineSet1003.vertexCount = new MFInt32(new int[2]);
let Coordinate1004 = browser.currentScene.createNode("Coordinate");
Coordinate1004.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet1003.coord = Coordinate1004;

let ColorRGBA1005 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1005.USE = "HAnimSegmentLineColorRGBA";
LineSet1003.color = ColorRGBA1005;

Shape1002.geometry = LineSet1003;

HAnimSegment986.children[5] = Shape1002;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
let Shape1006 = browser.currentScene.createNode("Shape");
let LineSet1007 = browser.currentScene.createNode("LineSet");
LineSet1007.vertexCount = new MFInt32(new int[2]);
let Coordinate1008 = browser.currentScene.createNode("Coordinate");
Coordinate1008.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1007.coord = Coordinate1008;

let ColorRGBA1009 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1009.USE = "HAnimSegmentLineColorRGBA";
LineSet1007.color = ColorRGBA1009;

Shape1006.geometry = LineSet1007;

HAnimSegment986.children[6] = Shape1006;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
let Shape1010 = browser.currentScene.createNode("Shape");
let LineSet1011 = browser.currentScene.createNode("LineSet");
LineSet1011.vertexCount = new MFInt32(new int[2]);
let Coordinate1012 = browser.currentScene.createNode("Coordinate");
Coordinate1012.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1011.coord = Coordinate1012;

let ColorRGBA1013 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1013.USE = "HAnimSiteLineColorRGBA";
LineSet1011.color = ColorRGBA1013;

Shape1010.geometry = LineSet1011;

HAnimSegment986.children[7] = Shape1010;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
let Shape1014 = browser.currentScene.createNode("Shape");
let LineSet1015 = browser.currentScene.createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
let Coordinate1016 = browser.currentScene.createNode("Coordinate");
Coordinate1016.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1015.coord = Coordinate1016;

let ColorRGBA1017 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSiteLineColorRGBA";
LineSet1015.color = ColorRGBA1017;

Shape1014.geometry = LineSet1015;

HAnimSegment986.children[8] = Shape1014;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
let Shape1018 = browser.currentScene.createNode("Shape");
let LineSet1019 = browser.currentScene.createNode("LineSet");
LineSet1019.vertexCount = new MFInt32(new int[2]);
let Coordinate1020 = browser.currentScene.createNode("Coordinate");
Coordinate1020.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1019.coord = Coordinate1020;

let ColorRGBA1021 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1021.USE = "HAnimSiteLineColorRGBA";
LineSet1019.color = ColorRGBA1021;

Shape1018.geometry = LineSet1019;

HAnimSegment986.children[9] = Shape1018;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
let Shape1022 = browser.currentScene.createNode("Shape");
let LineSet1023 = browser.currentScene.createNode("LineSet");
LineSet1023.vertexCount = new MFInt32(new int[2]);
let Coordinate1024 = browser.currentScene.createNode("Coordinate");
Coordinate1024.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1023.coord = Coordinate1024;

let ColorRGBA1025 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1025.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1023.color = ColorRGBA1025;

Shape1022.geometry = LineSet1023;

HAnimSegment986.children[10] = Shape1022;

let HAnimSite1026 = browser.currentScene.createNode("HAnimSite");
HAnimSite1026.name = "l_metacarpal_pha2_pt";
HAnimSite1026.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1026.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
let TouchSensor1027 = browser.currentScene.createNode("TouchSensor");
TouchSensor1027.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1026.children = new MFNode();

HAnimSite1026.children[0] = TouchSensor1027;

let Shape1028 = browser.currentScene.createNode("Shape");
Shape1028.USE = "HAnimSiteShape";
HAnimSite1026.children[1] = Shape1028;

HAnimSegment986.children[11] = HAnimSite1026;

let HAnimSite1029 = browser.currentScene.createNode("HAnimSite");
HAnimSite1029.name = "l_ulnar_styloid_pt";
HAnimSite1029.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1029.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
let TouchSensor1030 = browser.currentScene.createNode("TouchSensor");
TouchSensor1030.description = "HAnimSite l_ulnar_styloid";
HAnimSite1029.children = new MFNode();

HAnimSite1029.children[0] = TouchSensor1030;

let Shape1031 = browser.currentScene.createNode("Shape");
Shape1031.USE = "HAnimSiteShape";
HAnimSite1029.children[1] = Shape1031;

HAnimSegment986.children[12] = HAnimSite1029;

let HAnimSite1032 = browser.currentScene.createNode("HAnimSite");
HAnimSite1032.name = "l_metacarpal_pha5_pt";
HAnimSite1032.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1032.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
let TouchSensor1033 = browser.currentScene.createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1032.children = new MFNode();

HAnimSite1032.children[0] = TouchSensor1033;

let Shape1034 = browser.currentScene.createNode("Shape");
Shape1034.USE = "HAnimSiteShape";
HAnimSite1032.children[1] = Shape1034;

HAnimSegment986.children[13] = HAnimSite1032;

let HAnimSite1035 = browser.currentScene.createNode("HAnimSite");
HAnimSite1035.name = "l_hand_front_view";
HAnimSite1035.DEF = "hanim_l_hand_front_view";
HAnimSite1035.translation = new SFVec3f(new float[0.3,0.75,0.45]);
//HAnimSite visualization shape
let TouchSensor1036 = browser.currentScene.createNode("TouchSensor");
TouchSensor1036.description = "HAnimSite l_hand_front_view";
HAnimSite1035.children = new MFNode();

HAnimSite1035.children[0] = TouchSensor1036;

let Shape1037 = browser.currentScene.createNode("Shape");
Shape1037.USE = "HAnimSiteShape";
HAnimSite1035.children[1] = Shape1037;

let Viewpoint1038 = browser.currentScene.createNode("Viewpoint");
Viewpoint1038.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1038.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1038.description = "left hand front";
Viewpoint1038.position = new SFVec3f(new float[0,0,0]);
HAnimSite1035.children[2] = Viewpoint1038;

//HAnimSite/Viewpoint visualization shape
let Anchor1039 = browser.currentScene.createNode("Anchor");
Anchor1039.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1039.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
let LOD1040 = browser.currentScene.createNode("LOD");
LOD1040.forceTransitions = True;
LOD1040.range = new MFFloat(new float[0.04]);
let WorldInfo1041 = browser.currentScene.createNode("WorldInfo");
WorldInfo1041.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1040.children = new MFNode();

LOD1040.children[0] = WorldInfo1041;

let Shape1042 = browser.currentScene.createNode("Shape");
Shape1042.USE = "HAnimSiteViewpointShape";
LOD1040.children[1] = Shape1042;

Anchor1039.children = new MFNode();

Anchor1039.children[0] = LOD1040;

HAnimSite1035.children[3] = Anchor1039;

HAnimSegment986.children[14] = HAnimSite1035;

HAnimJoint985.children = new MFNode();

HAnimJoint985.children[0] = HAnimSegment986;

let HAnimJoint1043 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1043.name = "l_thumb1";
HAnimJoint1043.DEF = "hanim_l_thumb1";
HAnimJoint1043.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1043.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1044 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1044.name = "l_thumb_metacarpal";
HAnimSegment1044.DEF = "hanim_l_thumb_metacarpal";
//<HAnimJoint name='l_thumb1'/> visualization sphere is placed within <HAnimSegment name='l_thumb_metacarpal'/>
let TouchSensor1045 = browser.currentScene.createNode("TouchSensor");
TouchSensor1045.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1044.children = new MFNode();

HAnimSegment1044.children[0] = TouchSensor1045;

let Transform1046 = browser.currentScene.createNode("Transform");
Transform1046.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Shape1047 = browser.currentScene.createNode("Shape");
Shape1047.USE = "HAnimJointShape";
Transform1046.children = new MFNode();

Transform1046.children[0] = Shape1047;

HAnimSegment1044.children[1] = Transform1046;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
let Shape1048 = browser.currentScene.createNode("Shape");
let LineSet1049 = browser.currentScene.createNode("LineSet");
LineSet1049.vertexCount = new MFInt32(new int[2]);
let Coordinate1050 = browser.currentScene.createNode("Coordinate");
Coordinate1050.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1049.coord = Coordinate1050;

let ColorRGBA1051 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1051.USE = "HAnimSegmentLineColorRGBA";
LineSet1049.color = ColorRGBA1051;

Shape1048.geometry = LineSet1049;

HAnimSegment1044.children[2] = Shape1048;

HAnimJoint1043.children = new MFNode();

HAnimJoint1043.children[0] = HAnimSegment1044;

let HAnimJoint1052 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1052.name = "l_thumb2";
HAnimJoint1052.DEF = "hanim_l_thumb2";
HAnimJoint1052.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1052.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1053 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1053.name = "l_thumb_proximal";
HAnimSegment1053.DEF = "hanim_l_thumb_proximal";
//<HAnimJoint name='l_thumb2'/> visualization sphere is placed within <HAnimSegment name='l_thumb_proximal'/>
let TouchSensor1054 = browser.currentScene.createNode("TouchSensor");
TouchSensor1054.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1053.children = new MFNode();

HAnimSegment1053.children[0] = TouchSensor1054;

let Transform1055 = browser.currentScene.createNode("Transform");
Transform1055.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Shape1056 = browser.currentScene.createNode("Shape");
Shape1056.USE = "HAnimJointShape";
Transform1055.children = new MFNode();

Transform1055.children[0] = Shape1056;

HAnimSegment1053.children[1] = Transform1055;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
let Shape1057 = browser.currentScene.createNode("Shape");
let LineSet1058 = browser.currentScene.createNode("LineSet");
LineSet1058.vertexCount = new MFInt32(new int[2]);
let Coordinate1059 = browser.currentScene.createNode("Coordinate");
Coordinate1059.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1058.coord = Coordinate1059;

let ColorRGBA1060 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1060.USE = "HAnimSegmentLineColorRGBA";
LineSet1058.color = ColorRGBA1060;

Shape1057.geometry = LineSet1058;

HAnimSegment1053.children[2] = Shape1057;

HAnimJoint1052.children = new MFNode();

HAnimJoint1052.children[0] = HAnimSegment1053;

let HAnimJoint1061 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1061.name = "l_thumb3";
HAnimJoint1061.DEF = "hanim_l_thumb3";
HAnimJoint1061.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1061.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1062 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1062.name = "l_thumb_distal";
HAnimSegment1062.DEF = "hanim_l_thumb_distal";
//<HAnimJoint name='l_thumb3'/> visualization sphere is placed within <HAnimSegment name='l_thumb_distal'/>
let TouchSensor1063 = browser.currentScene.createNode("TouchSensor");
TouchSensor1063.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1062.children = new MFNode();

HAnimSegment1062.children[0] = TouchSensor1063;

let Transform1064 = browser.currentScene.createNode("Transform");
Transform1064.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Shape1065 = browser.currentScene.createNode("Shape");
Shape1065.USE = "HAnimJointShape";
Transform1064.children = new MFNode();

Transform1064.children[0] = Shape1065;

HAnimSegment1062.children[1] = Transform1064;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
let Shape1066 = browser.currentScene.createNode("Shape");
let LineSet1067 = browser.currentScene.createNode("LineSet");
LineSet1067.vertexCount = new MFInt32(new int[2]);
let Coordinate1068 = browser.currentScene.createNode("Coordinate");
Coordinate1068.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1067.coord = Coordinate1068;

let ColorRGBA1069 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1069.USE = "HAnimSiteLineColorRGBA";
LineSet1067.color = ColorRGBA1069;

Shape1066.geometry = LineSet1067;

HAnimSegment1062.children[2] = Shape1066;

let HAnimSite1070 = browser.currentScene.createNode("HAnimSite");
HAnimSite1070.name = "l_thumb_distal_tip";
HAnimSite1070.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1070.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
let TouchSensor1071 = browser.currentScene.createNode("TouchSensor");
TouchSensor1071.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1070.children = new MFNode();

HAnimSite1070.children[0] = TouchSensor1071;

let Shape1072 = browser.currentScene.createNode("Shape");
Shape1072.USE = "HAnimSiteShape";
HAnimSite1070.children[1] = Shape1072;

HAnimSegment1062.children[3] = HAnimSite1070;

HAnimJoint1061.children = new MFNode();

HAnimJoint1061.children[0] = HAnimSegment1062;

HAnimJoint1052.children[1] = HAnimJoint1061;

HAnimJoint1043.children[1] = HAnimJoint1052;

HAnimJoint985.children[1] = HAnimJoint1043;

let HAnimJoint1073 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1073.name = "l_index0";
HAnimJoint1073.DEF = "hanim_l_index0";
HAnimJoint1073.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1073.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1074 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1074.name = "l_index_metacarpal";
HAnimSegment1074.DEF = "hanim_l_index_metacarpal";
//<HAnimJoint name='l_index0'/> visualization sphere is placed within <HAnimSegment name='l_index_metacarpal'/>
let TouchSensor1075 = browser.currentScene.createNode("TouchSensor");
TouchSensor1075.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1074.children = new MFNode();

HAnimSegment1074.children[0] = TouchSensor1075;

let Transform1076 = browser.currentScene.createNode("Transform");
Transform1076.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Shape1077 = browser.currentScene.createNode("Shape");
Shape1077.USE = "HAnimJointShape";
Transform1076.children = new MFNode();

Transform1076.children[0] = Shape1077;

HAnimSegment1074.children[1] = Transform1076;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
let Shape1078 = browser.currentScene.createNode("Shape");
let LineSet1079 = browser.currentScene.createNode("LineSet");
LineSet1079.vertexCount = new MFInt32(new int[2]);
let Coordinate1080 = browser.currentScene.createNode("Coordinate");
Coordinate1080.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1079.coord = Coordinate1080;

let ColorRGBA1081 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1081.USE = "HAnimSegmentLineColorRGBA";
LineSet1079.color = ColorRGBA1081;

Shape1078.geometry = LineSet1079;

HAnimSegment1074.children[2] = Shape1078;

HAnimJoint1073.children = new MFNode();

HAnimJoint1073.children[0] = HAnimSegment1074;

let HAnimJoint1082 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1082.name = "l_index1";
HAnimJoint1082.DEF = "hanim_l_index1";
HAnimJoint1082.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1082.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1083 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1083.name = "l_index_proximal";
HAnimSegment1083.DEF = "hanim_l_index_proximal";
//<HAnimJoint name='l_index1'/> visualization sphere is placed within <HAnimSegment name='l_index_proximal'/>
let TouchSensor1084 = browser.currentScene.createNode("TouchSensor");
TouchSensor1084.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1083.children = new MFNode();

HAnimSegment1083.children[0] = TouchSensor1084;

let Transform1085 = browser.currentScene.createNode("Transform");
Transform1085.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Shape1086 = browser.currentScene.createNode("Shape");
Shape1086.USE = "HAnimJointShape";
Transform1085.children = new MFNode();

Transform1085.children[0] = Shape1086;

HAnimSegment1083.children[1] = Transform1085;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
let Shape1087 = browser.currentScene.createNode("Shape");
let LineSet1088 = browser.currentScene.createNode("LineSet");
LineSet1088.vertexCount = new MFInt32(new int[2]);
let Coordinate1089 = browser.currentScene.createNode("Coordinate");
Coordinate1089.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1088.coord = Coordinate1089;

let ColorRGBA1090 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1090.USE = "HAnimSegmentLineColorRGBA";
LineSet1088.color = ColorRGBA1090;

Shape1087.geometry = LineSet1088;

HAnimSegment1083.children[2] = Shape1087;

HAnimJoint1082.children = new MFNode();

HAnimJoint1082.children[0] = HAnimSegment1083;

let HAnimJoint1091 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1091.name = "l_index2";
HAnimJoint1091.DEF = "hanim_l_index2";
HAnimJoint1091.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1091.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1092 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1092.name = "l_index_middle";
HAnimSegment1092.DEF = "hanim_l_index_middle";
//<HAnimJoint name='l_index2'/> visualization sphere is placed within <HAnimSegment name='l_index_middle'/>
let TouchSensor1093 = browser.currentScene.createNode("TouchSensor");
TouchSensor1093.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1092.children = new MFNode();

HAnimSegment1092.children[0] = TouchSensor1093;

let Transform1094 = browser.currentScene.createNode("Transform");
Transform1094.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Shape1095 = browser.currentScene.createNode("Shape");
Shape1095.USE = "HAnimJointShape";
Transform1094.children = new MFNode();

Transform1094.children[0] = Shape1095;

HAnimSegment1092.children[1] = Transform1094;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
let Shape1096 = browser.currentScene.createNode("Shape");
let LineSet1097 = browser.currentScene.createNode("LineSet");
LineSet1097.vertexCount = new MFInt32(new int[2]);
let Coordinate1098 = browser.currentScene.createNode("Coordinate");
Coordinate1098.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1097.coord = Coordinate1098;

let ColorRGBA1099 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1099.USE = "HAnimSegmentLineColorRGBA";
LineSet1097.color = ColorRGBA1099;

Shape1096.geometry = LineSet1097;

HAnimSegment1092.children[2] = Shape1096;

HAnimJoint1091.children = new MFNode();

HAnimJoint1091.children[0] = HAnimSegment1092;

let HAnimJoint1100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1100.name = "l_index3";
HAnimJoint1100.DEF = "hanim_l_index3";
HAnimJoint1100.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1100.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1101.name = "l_index_distal";
HAnimSegment1101.DEF = "hanim_l_index_distal";
//<HAnimJoint name='l_index3'/> visualization sphere is placed within <HAnimSegment name='l_index_distal'/>
let TouchSensor1102 = browser.currentScene.createNode("TouchSensor");
TouchSensor1102.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1101.children = new MFNode();

HAnimSegment1101.children[0] = TouchSensor1102;

let Transform1103 = browser.currentScene.createNode("Transform");
Transform1103.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Shape1104 = browser.currentScene.createNode("Shape");
Shape1104.USE = "HAnimJointShape";
Transform1103.children = new MFNode();

Transform1103.children[0] = Shape1104;

HAnimSegment1101.children[1] = Transform1103;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
let Shape1105 = browser.currentScene.createNode("Shape");
let LineSet1106 = browser.currentScene.createNode("LineSet");
LineSet1106.vertexCount = new MFInt32(new int[2]);
let Coordinate1107 = browser.currentScene.createNode("Coordinate");
Coordinate1107.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1106.coord = Coordinate1107;

let ColorRGBA1108 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1108.USE = "HAnimSiteLineColorRGBA";
LineSet1106.color = ColorRGBA1108;

Shape1105.geometry = LineSet1106;

HAnimSegment1101.children[2] = Shape1105;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
let Shape1109 = browser.currentScene.createNode("Shape");
let LineSet1110 = browser.currentScene.createNode("LineSet");
LineSet1110.vertexCount = new MFInt32(new int[2]);
let Coordinate1111 = browser.currentScene.createNode("Coordinate");
Coordinate1111.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1110.coord = Coordinate1111;

let ColorRGBA1112 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1112.USE = "HAnimSiteLineColorRGBA";
LineSet1110.color = ColorRGBA1112;

Shape1109.geometry = LineSet1110;

HAnimSegment1101.children[3] = Shape1109;

let HAnimSite1113 = browser.currentScene.createNode("HAnimSite");
HAnimSite1113.name = "l_index_distal_tip";
HAnimSite1113.DEF = "hanim_l_index_distal_tip";
HAnimSite1113.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
let TouchSensor1114 = browser.currentScene.createNode("TouchSensor");
TouchSensor1114.description = "HAnimSite l_index_distal_tip";
HAnimSite1113.children = new MFNode();

HAnimSite1113.children[0] = TouchSensor1114;

let Shape1115 = browser.currentScene.createNode("Shape");
Shape1115.USE = "HAnimSiteShape";
HAnimSite1113.children[1] = Shape1115;

HAnimSegment1101.children[4] = HAnimSite1113;

let HAnimSite1116 = browser.currentScene.createNode("HAnimSite");
HAnimSite1116.name = "l_dactylion_pt";
HAnimSite1116.DEF = "hanim_l_dactylion_pt";
HAnimSite1116.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
let TouchSensor1117 = browser.currentScene.createNode("TouchSensor");
TouchSensor1117.description = "HAnimSite l_dactylion";
HAnimSite1116.children = new MFNode();

HAnimSite1116.children[0] = TouchSensor1117;

let Shape1118 = browser.currentScene.createNode("Shape");
Shape1118.USE = "HAnimSiteShape";
HAnimSite1116.children[1] = Shape1118;

HAnimSegment1101.children[5] = HAnimSite1116;

HAnimJoint1100.children = new MFNode();

HAnimJoint1100.children[0] = HAnimSegment1101;

HAnimJoint1091.children[1] = HAnimJoint1100;

HAnimJoint1082.children[1] = HAnimJoint1091;

HAnimJoint1073.children[1] = HAnimJoint1082;

HAnimJoint985.children[2] = HAnimJoint1073;

let HAnimJoint1119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1119.name = "l_middle0";
HAnimJoint1119.DEF = "hanim_l_middle0";
HAnimJoint1119.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1119.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1120 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1120.name = "l_middle_metacarpal";
HAnimSegment1120.DEF = "hanim_l_middle_metacarpal";
//<HAnimJoint name='l_middle0'/> visualization sphere is placed within <HAnimSegment name='l_middle_metacarpal'/>
let TouchSensor1121 = browser.currentScene.createNode("TouchSensor");
TouchSensor1121.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1120.children = new MFNode();

HAnimSegment1120.children[0] = TouchSensor1121;

let Transform1122 = browser.currentScene.createNode("Transform");
Transform1122.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Shape1123 = browser.currentScene.createNode("Shape");
Shape1123.USE = "HAnimJointShape";
Transform1122.children = new MFNode();

Transform1122.children[0] = Shape1123;

HAnimSegment1120.children[1] = Transform1122;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
let Shape1124 = browser.currentScene.createNode("Shape");
let LineSet1125 = browser.currentScene.createNode("LineSet");
LineSet1125.vertexCount = new MFInt32(new int[2]);
let Coordinate1126 = browser.currentScene.createNode("Coordinate");
Coordinate1126.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1125.coord = Coordinate1126;

let ColorRGBA1127 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1127.USE = "HAnimSegmentLineColorRGBA";
LineSet1125.color = ColorRGBA1127;

Shape1124.geometry = LineSet1125;

HAnimSegment1120.children[2] = Shape1124;

HAnimJoint1119.children = new MFNode();

HAnimJoint1119.children[0] = HAnimSegment1120;

let HAnimJoint1128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1128.name = "l_middle1";
HAnimJoint1128.DEF = "hanim_l_middle1";
HAnimJoint1128.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1128.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1129.name = "l_middle_proximal";
HAnimSegment1129.DEF = "hanim_l_middle_proximal";
//<HAnimJoint name='l_middle1'/> visualization sphere is placed within <HAnimSegment name='l_middle_proximal'/>
let TouchSensor1130 = browser.currentScene.createNode("TouchSensor");
TouchSensor1130.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1129.children = new MFNode();

HAnimSegment1129.children[0] = TouchSensor1130;

let Transform1131 = browser.currentScene.createNode("Transform");
Transform1131.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Shape1132 = browser.currentScene.createNode("Shape");
Shape1132.USE = "HAnimJointShape";
Transform1131.children = new MFNode();

Transform1131.children[0] = Shape1132;

HAnimSegment1129.children[1] = Transform1131;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
let Shape1133 = browser.currentScene.createNode("Shape");
let LineSet1134 = browser.currentScene.createNode("LineSet");
LineSet1134.vertexCount = new MFInt32(new int[2]);
let Coordinate1135 = browser.currentScene.createNode("Coordinate");
Coordinate1135.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1134.coord = Coordinate1135;

let ColorRGBA1136 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1136.USE = "HAnimSegmentLineColorRGBA";
LineSet1134.color = ColorRGBA1136;

Shape1133.geometry = LineSet1134;

HAnimSegment1129.children[2] = Shape1133;

HAnimJoint1128.children = new MFNode();

HAnimJoint1128.children[0] = HAnimSegment1129;

let HAnimJoint1137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1137.name = "l_middle2";
HAnimJoint1137.DEF = "hanim_l_middle2";
HAnimJoint1137.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1137.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1138.name = "l_middle_middle";
HAnimSegment1138.DEF = "hanim_l_middle_middle";
//<HAnimJoint name='l_middle2'/> visualization sphere is placed within <HAnimSegment name='l_middle_middle'/>
let TouchSensor1139 = browser.currentScene.createNode("TouchSensor");
TouchSensor1139.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1138.children = new MFNode();

HAnimSegment1138.children[0] = TouchSensor1139;

let Transform1140 = browser.currentScene.createNode("Transform");
Transform1140.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Shape1141 = browser.currentScene.createNode("Shape");
Shape1141.USE = "HAnimJointShape";
Transform1140.children = new MFNode();

Transform1140.children[0] = Shape1141;

HAnimSegment1138.children[1] = Transform1140;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
let Shape1142 = browser.currentScene.createNode("Shape");
let LineSet1143 = browser.currentScene.createNode("LineSet");
LineSet1143.vertexCount = new MFInt32(new int[2]);
let Coordinate1144 = browser.currentScene.createNode("Coordinate");
Coordinate1144.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1143.coord = Coordinate1144;

let ColorRGBA1145 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1145.USE = "HAnimSegmentLineColorRGBA";
LineSet1143.color = ColorRGBA1145;

Shape1142.geometry = LineSet1143;

HAnimSegment1138.children[2] = Shape1142;

HAnimJoint1137.children = new MFNode();

HAnimJoint1137.children[0] = HAnimSegment1138;

let HAnimJoint1146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1146.name = "l_middle3";
HAnimJoint1146.DEF = "hanim_l_middle3";
HAnimJoint1146.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1146.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1147.name = "l_middle_distal";
HAnimSegment1147.DEF = "hanim_l_middle_distal";
//<HAnimJoint name='l_middle3'/> visualization sphere is placed within <HAnimSegment name='l_middle_distal'/>
let TouchSensor1148 = browser.currentScene.createNode("TouchSensor");
TouchSensor1148.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1147.children = new MFNode();

HAnimSegment1147.children[0] = TouchSensor1148;

let Transform1149 = browser.currentScene.createNode("Transform");
Transform1149.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let Shape1150 = browser.currentScene.createNode("Shape");
Shape1150.USE = "HAnimJointShape";
Transform1149.children = new MFNode();

Transform1149.children[0] = Shape1150;

HAnimSegment1147.children[1] = Transform1149;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
let Shape1151 = browser.currentScene.createNode("Shape");
let LineSet1152 = browser.currentScene.createNode("LineSet");
LineSet1152.vertexCount = new MFInt32(new int[2]);
let Coordinate1153 = browser.currentScene.createNode("Coordinate");
Coordinate1153.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1152.coord = Coordinate1153;

let ColorRGBA1154 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1154.USE = "HAnimSiteLineColorRGBA";
LineSet1152.color = ColorRGBA1154;

Shape1151.geometry = LineSet1152;

HAnimSegment1147.children[2] = Shape1151;

let HAnimSite1155 = browser.currentScene.createNode("HAnimSite");
HAnimSite1155.name = "l_middle_distal_tip";
HAnimSite1155.DEF = "hanim_l_middle_distal_tip";
HAnimSite1155.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
let TouchSensor1156 = browser.currentScene.createNode("TouchSensor");
TouchSensor1156.description = "HAnimSite l_middle_distal_tip";
HAnimSite1155.children = new MFNode();

HAnimSite1155.children[0] = TouchSensor1156;

let Shape1157 = browser.currentScene.createNode("Shape");
Shape1157.USE = "HAnimSiteShape";
HAnimSite1155.children[1] = Shape1157;

HAnimSegment1147.children[3] = HAnimSite1155;

HAnimJoint1146.children = new MFNode();

HAnimJoint1146.children[0] = HAnimSegment1147;

HAnimJoint1137.children[1] = HAnimJoint1146;

HAnimJoint1128.children[1] = HAnimJoint1137;

HAnimJoint1119.children[1] = HAnimJoint1128;

HAnimJoint985.children[3] = HAnimJoint1119;

let HAnimJoint1158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1158.name = "l_ring0";
HAnimJoint1158.DEF = "hanim_l_ring0";
HAnimJoint1158.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1158.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1159.name = "l_ring_metacarpal";
HAnimSegment1159.DEF = "hanim_l_ring_metacarpal";
//<HAnimJoint name='l_ring0'/> visualization sphere is placed within <HAnimSegment name='l_ring_metacarpal'/>
let TouchSensor1160 = browser.currentScene.createNode("TouchSensor");
TouchSensor1160.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1159.children = new MFNode();

HAnimSegment1159.children[0] = TouchSensor1160;

let Transform1161 = browser.currentScene.createNode("Transform");
Transform1161.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Shape1162 = browser.currentScene.createNode("Shape");
Shape1162.USE = "HAnimJointShape";
Transform1161.children = new MFNode();

Transform1161.children[0] = Shape1162;

HAnimSegment1159.children[1] = Transform1161;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
let Shape1163 = browser.currentScene.createNode("Shape");
let LineSet1164 = browser.currentScene.createNode("LineSet");
LineSet1164.vertexCount = new MFInt32(new int[2]);
let Coordinate1165 = browser.currentScene.createNode("Coordinate");
Coordinate1165.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1164.coord = Coordinate1165;

let ColorRGBA1166 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1166.USE = "HAnimSegmentLineColorRGBA";
LineSet1164.color = ColorRGBA1166;

Shape1163.geometry = LineSet1164;

HAnimSegment1159.children[2] = Shape1163;

HAnimJoint1158.children = new MFNode();

HAnimJoint1158.children[0] = HAnimSegment1159;

let HAnimJoint1167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1167.name = "l_ring1";
HAnimJoint1167.DEF = "hanim_l_ring1";
HAnimJoint1167.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1167.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1168.name = "l_ring_proximal";
HAnimSegment1168.DEF = "hanim_l_ring_proximal";
//<HAnimJoint name='l_ring1'/> visualization sphere is placed within <HAnimSegment name='l_ring_proximal'/>
let TouchSensor1169 = browser.currentScene.createNode("TouchSensor");
TouchSensor1169.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1168.children = new MFNode();

HAnimSegment1168.children[0] = TouchSensor1169;

let Transform1170 = browser.currentScene.createNode("Transform");
Transform1170.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Shape1171 = browser.currentScene.createNode("Shape");
Shape1171.USE = "HAnimJointShape";
Transform1170.children = new MFNode();

Transform1170.children[0] = Shape1171;

HAnimSegment1168.children[1] = Transform1170;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
let Shape1172 = browser.currentScene.createNode("Shape");
let LineSet1173 = browser.currentScene.createNode("LineSet");
LineSet1173.vertexCount = new MFInt32(new int[2]);
let Coordinate1174 = browser.currentScene.createNode("Coordinate");
Coordinate1174.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1173.coord = Coordinate1174;

let ColorRGBA1175 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1175.USE = "HAnimSegmentLineColorRGBA";
LineSet1173.color = ColorRGBA1175;

Shape1172.geometry = LineSet1173;

HAnimSegment1168.children[2] = Shape1172;

HAnimJoint1167.children = new MFNode();

HAnimJoint1167.children[0] = HAnimSegment1168;

let HAnimJoint1176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1176.name = "l_ring2";
HAnimJoint1176.DEF = "hanim_l_ring2";
HAnimJoint1176.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1176.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1177.name = "l_ring_middle";
HAnimSegment1177.DEF = "hanim_l_ring_middle";
//<HAnimJoint name='l_ring2'/> visualization sphere is placed within <HAnimSegment name='l_ring_middle'/>
let TouchSensor1178 = browser.currentScene.createNode("TouchSensor");
TouchSensor1178.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1177.children = new MFNode();

HAnimSegment1177.children[0] = TouchSensor1178;

let Transform1179 = browser.currentScene.createNode("Transform");
Transform1179.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Shape1180 = browser.currentScene.createNode("Shape");
Shape1180.USE = "HAnimJointShape";
Transform1179.children = new MFNode();

Transform1179.children[0] = Shape1180;

HAnimSegment1177.children[1] = Transform1179;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
let Shape1181 = browser.currentScene.createNode("Shape");
let LineSet1182 = browser.currentScene.createNode("LineSet");
LineSet1182.vertexCount = new MFInt32(new int[2]);
let Coordinate1183 = browser.currentScene.createNode("Coordinate");
Coordinate1183.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1182.coord = Coordinate1183;

let ColorRGBA1184 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1184.USE = "HAnimSegmentLineColorRGBA";
LineSet1182.color = ColorRGBA1184;

Shape1181.geometry = LineSet1182;

HAnimSegment1177.children[2] = Shape1181;

HAnimJoint1176.children = new MFNode();

HAnimJoint1176.children[0] = HAnimSegment1177;

let HAnimJoint1185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1185.name = "l_ring3";
HAnimJoint1185.DEF = "hanim_l_ring3";
HAnimJoint1185.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1185.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1186.name = "l_ring_distal";
HAnimSegment1186.DEF = "hanim_l_ring_distal";
//<HAnimJoint name='l_ring3'/> visualization sphere is placed within <HAnimSegment name='l_ring_distal'/>
let TouchSensor1187 = browser.currentScene.createNode("TouchSensor");
TouchSensor1187.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1186.children = new MFNode();

HAnimSegment1186.children[0] = TouchSensor1187;

let Transform1188 = browser.currentScene.createNode("Transform");
Transform1188.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let Shape1189 = browser.currentScene.createNode("Shape");
Shape1189.USE = "HAnimJointShape";
Transform1188.children = new MFNode();

Transform1188.children[0] = Shape1189;

HAnimSegment1186.children[1] = Transform1188;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
let Shape1190 = browser.currentScene.createNode("Shape");
let LineSet1191 = browser.currentScene.createNode("LineSet");
LineSet1191.vertexCount = new MFInt32(new int[2]);
let Coordinate1192 = browser.currentScene.createNode("Coordinate");
Coordinate1192.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1191.coord = Coordinate1192;

let ColorRGBA1193 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1193.USE = "HAnimSiteLineColorRGBA";
LineSet1191.color = ColorRGBA1193;

Shape1190.geometry = LineSet1191;

HAnimSegment1186.children[2] = Shape1190;

let HAnimSite1194 = browser.currentScene.createNode("HAnimSite");
HAnimSite1194.name = "l_ring_distal_tip";
HAnimSite1194.DEF = "hanim_l_ring_distal_tip";
HAnimSite1194.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
let TouchSensor1195 = browser.currentScene.createNode("TouchSensor");
TouchSensor1195.description = "HAnimSite l_ring_distal_tip";
HAnimSite1194.children = new MFNode();

HAnimSite1194.children[0] = TouchSensor1195;

let Shape1196 = browser.currentScene.createNode("Shape");
Shape1196.USE = "HAnimSiteShape";
HAnimSite1194.children[1] = Shape1196;

HAnimSegment1186.children[3] = HAnimSite1194;

HAnimJoint1185.children = new MFNode();

HAnimJoint1185.children[0] = HAnimSegment1186;

HAnimJoint1176.children[1] = HAnimJoint1185;

HAnimJoint1167.children[1] = HAnimJoint1176;

HAnimJoint1158.children[1] = HAnimJoint1167;

HAnimJoint985.children[4] = HAnimJoint1158;

let HAnimJoint1197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1197.name = "l_pinky0";
HAnimJoint1197.DEF = "hanim_l_pinky0";
HAnimJoint1197.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1197.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1198.name = "l_pinky_metacarpal";
HAnimSegment1198.DEF = "hanim_l_pinky_metacarpal";
//<HAnimJoint name='l_pinky0'/> visualization sphere is placed within <HAnimSegment name='l_pinky_metacarpal'/>
let TouchSensor1199 = browser.currentScene.createNode("TouchSensor");
TouchSensor1199.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1198.children = new MFNode();

HAnimSegment1198.children[0] = TouchSensor1199;

let Transform1200 = browser.currentScene.createNode("Transform");
Transform1200.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Shape1201 = browser.currentScene.createNode("Shape");
Shape1201.USE = "HAnimJointShape";
Transform1200.children = new MFNode();

Transform1200.children[0] = Shape1201;

HAnimSegment1198.children[1] = Transform1200;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
let Shape1202 = browser.currentScene.createNode("Shape");
let LineSet1203 = browser.currentScene.createNode("LineSet");
LineSet1203.vertexCount = new MFInt32(new int[2]);
let Coordinate1204 = browser.currentScene.createNode("Coordinate");
Coordinate1204.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1203.coord = Coordinate1204;

let ColorRGBA1205 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1205.USE = "HAnimSegmentLineColorRGBA";
LineSet1203.color = ColorRGBA1205;

Shape1202.geometry = LineSet1203;

HAnimSegment1198.children[2] = Shape1202;

HAnimJoint1197.children = new MFNode();

HAnimJoint1197.children[0] = HAnimSegment1198;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.name = "l_pinky1";
HAnimJoint1206.DEF = "hanim_l_pinky1";
HAnimJoint1206.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1206.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1207 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1207.name = "l_pinky_proximal";
HAnimSegment1207.DEF = "hanim_l_pinky_proximal";
//<HAnimJoint name='l_pinky1'/> visualization sphere is placed within <HAnimSegment name='l_pinky_proximal'/>
let TouchSensor1208 = browser.currentScene.createNode("TouchSensor");
TouchSensor1208.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1207.children = new MFNode();

HAnimSegment1207.children[0] = TouchSensor1208;

let Transform1209 = browser.currentScene.createNode("Transform");
Transform1209.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Shape1210 = browser.currentScene.createNode("Shape");
Shape1210.USE = "HAnimJointShape";
Transform1209.children = new MFNode();

Transform1209.children[0] = Shape1210;

HAnimSegment1207.children[1] = Transform1209;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
let Shape1211 = browser.currentScene.createNode("Shape");
let LineSet1212 = browser.currentScene.createNode("LineSet");
LineSet1212.vertexCount = new MFInt32(new int[2]);
let Coordinate1213 = browser.currentScene.createNode("Coordinate");
Coordinate1213.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1212.coord = Coordinate1213;

let ColorRGBA1214 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1214.USE = "HAnimSegmentLineColorRGBA";
LineSet1212.color = ColorRGBA1214;

Shape1211.geometry = LineSet1212;

HAnimSegment1207.children[2] = Shape1211;

HAnimJoint1206.children = new MFNode();

HAnimJoint1206.children[0] = HAnimSegment1207;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.name = "l_pinky2";
HAnimJoint1215.DEF = "hanim_l_pinky2";
HAnimJoint1215.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1215.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1216 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1216.name = "l_pinky_middle";
HAnimSegment1216.DEF = "hanim_l_pinky_middle";
//<HAnimJoint name='l_pinky2'/> visualization sphere is placed within <HAnimSegment name='l_pinky_middle'/>
let TouchSensor1217 = browser.currentScene.createNode("TouchSensor");
TouchSensor1217.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1216.children = new MFNode();

HAnimSegment1216.children[0] = TouchSensor1217;

let Transform1218 = browser.currentScene.createNode("Transform");
Transform1218.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Shape1219 = browser.currentScene.createNode("Shape");
Shape1219.USE = "HAnimJointShape";
Transform1218.children = new MFNode();

Transform1218.children[0] = Shape1219;

HAnimSegment1216.children[1] = Transform1218;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
let Shape1220 = browser.currentScene.createNode("Shape");
let LineSet1221 = browser.currentScene.createNode("LineSet");
LineSet1221.vertexCount = new MFInt32(new int[2]);
let Coordinate1222 = browser.currentScene.createNode("Coordinate");
Coordinate1222.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1221.coord = Coordinate1222;

let ColorRGBA1223 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1223.USE = "HAnimSegmentLineColorRGBA";
LineSet1221.color = ColorRGBA1223;

Shape1220.geometry = LineSet1221;

HAnimSegment1216.children[2] = Shape1220;

HAnimJoint1215.children = new MFNode();

HAnimJoint1215.children[0] = HAnimSegment1216;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.name = "l_pinky3";
HAnimJoint1224.DEF = "hanim_l_pinky3";
HAnimJoint1224.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1224.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1225 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1225.name = "l_pinky_distal";
HAnimSegment1225.DEF = "hanim_l_pinky_distal";
//<HAnimJoint name='l_pinky3'/> visualization sphere is placed within <HAnimSegment name='l_pinky_distal'/>
let TouchSensor1226 = browser.currentScene.createNode("TouchSensor");
TouchSensor1226.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1225.children = new MFNode();

HAnimSegment1225.children[0] = TouchSensor1226;

let Transform1227 = browser.currentScene.createNode("Transform");
Transform1227.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let Shape1228 = browser.currentScene.createNode("Shape");
Shape1228.USE = "HAnimJointShape";
Transform1227.children = new MFNode();

Transform1227.children[0] = Shape1228;

HAnimSegment1225.children[1] = Transform1227;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
let Shape1229 = browser.currentScene.createNode("Shape");
let LineSet1230 = browser.currentScene.createNode("LineSet");
LineSet1230.vertexCount = new MFInt32(new int[2]);
let Coordinate1231 = browser.currentScene.createNode("Coordinate");
Coordinate1231.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1230.coord = Coordinate1231;

let ColorRGBA1232 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1232.USE = "HAnimSiteLineColorRGBA";
LineSet1230.color = ColorRGBA1232;

Shape1229.geometry = LineSet1230;

HAnimSegment1225.children[2] = Shape1229;

let HAnimSite1233 = browser.currentScene.createNode("HAnimSite");
HAnimSite1233.name = "l_pinky_distal_tip";
HAnimSite1233.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1233.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
let TouchSensor1234 = browser.currentScene.createNode("TouchSensor");
TouchSensor1234.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1233.children = new MFNode();

HAnimSite1233.children[0] = TouchSensor1234;

let Shape1235 = browser.currentScene.createNode("Shape");
Shape1235.USE = "HAnimSiteShape";
HAnimSite1233.children[1] = Shape1235;

HAnimSegment1225.children[3] = HAnimSite1233;

HAnimJoint1224.children = new MFNode();

HAnimJoint1224.children[0] = HAnimSegment1225;

HAnimJoint1215.children[1] = HAnimJoint1224;

HAnimJoint1206.children[1] = HAnimJoint1215;

HAnimJoint1197.children[1] = HAnimJoint1206;

HAnimJoint985.children[5] = HAnimJoint1197;

HAnimJoint948.children[1] = HAnimJoint985;

HAnimJoint932.children[1] = HAnimJoint948;

HAnimJoint923.children[1] = HAnimJoint932;

HAnimJoint886.children[1] = HAnimJoint923;

HAnimJoint598.children[2] = HAnimJoint886;

let HAnimJoint1236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1236.name = "r_sternoclavicular";
HAnimJoint1236.DEF = "hanim_r_sternoclavicular";
HAnimJoint1236.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1236.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1237.name = "r_clavicle";
HAnimSegment1237.DEF = "hanim_r_clavicle";
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='r_clavicle'/>
let TouchSensor1238 = browser.currentScene.createNode("TouchSensor");
TouchSensor1238.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1237.children = new MFNode();

HAnimSegment1237.children[0] = TouchSensor1238;

let Transform1239 = browser.currentScene.createNode("Transform");
Transform1239.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
let Shape1240 = browser.currentScene.createNode("Shape");
Shape1240.USE = "HAnimJointShape";
Transform1239.children = new MFNode();

Transform1239.children[0] = Shape1240;

HAnimSegment1237.children[1] = Transform1239;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
let Shape1241 = browser.currentScene.createNode("Shape");
let LineSet1242 = browser.currentScene.createNode("LineSet");
LineSet1242.vertexCount = new MFInt32(new int[2]);
let Coordinate1243 = browser.currentScene.createNode("Coordinate");
Coordinate1243.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1242.coord = Coordinate1243;

let ColorRGBA1244 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1244.USE = "HAnimSegmentLineColorRGBA";
LineSet1242.color = ColorRGBA1244;

Shape1241.geometry = LineSet1242;

HAnimSegment1237.children[2] = Shape1241;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
let Shape1245 = browser.currentScene.createNode("Shape");
let LineSet1246 = browser.currentScene.createNode("LineSet");
LineSet1246.vertexCount = new MFInt32(new int[2]);
let Coordinate1247 = browser.currentScene.createNode("Coordinate");
Coordinate1247.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1246.coord = Coordinate1247;

let ColorRGBA1248 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1248.USE = "HAnimSiteLineColorRGBA";
LineSet1246.color = ColorRGBA1248;

Shape1245.geometry = LineSet1246;

HAnimSegment1237.children[3] = Shape1245;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
let Shape1249 = browser.currentScene.createNode("Shape");
let LineSet1250 = browser.currentScene.createNode("LineSet");
LineSet1250.vertexCount = new MFInt32(new int[2]);
let Coordinate1251 = browser.currentScene.createNode("Coordinate");
Coordinate1251.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1250.coord = Coordinate1251;

let ColorRGBA1252 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSiteLineColorRGBA";
LineSet1250.color = ColorRGBA1252;

Shape1249.geometry = LineSet1250;

HAnimSegment1237.children[4] = Shape1249;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
let Shape1253 = browser.currentScene.createNode("Shape");
let LineSet1254 = browser.currentScene.createNode("LineSet");
LineSet1254.vertexCount = new MFInt32(new int[2]);
let Coordinate1255 = browser.currentScene.createNode("Coordinate");
Coordinate1255.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1254.coord = Coordinate1255;

let ColorRGBA1256 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1256.USE = "HAnimSiteLineColorRGBA";
LineSet1254.color = ColorRGBA1256;

Shape1253.geometry = LineSet1254;

HAnimSegment1237.children[5] = Shape1253;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
let Shape1257 = browser.currentScene.createNode("Shape");
let LineSet1258 = browser.currentScene.createNode("LineSet");
LineSet1258.vertexCount = new MFInt32(new int[2]);
let Coordinate1259 = browser.currentScene.createNode("Coordinate");
Coordinate1259.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1258.coord = Coordinate1259;

let ColorRGBA1260 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1260.USE = "HAnimSiteLineColorRGBA";
LineSet1258.color = ColorRGBA1260;

Shape1257.geometry = LineSet1258;

HAnimSegment1237.children[6] = Shape1257;

let HAnimSite1261 = browser.currentScene.createNode("HAnimSite");
HAnimSite1261.name = "r_clavicale_pt";
HAnimSite1261.DEF = "hanim_r_clavicale_pt";
HAnimSite1261.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
let TouchSensor1262 = browser.currentScene.createNode("TouchSensor");
TouchSensor1262.description = "HAnimSite r_clavicale";
HAnimSite1261.children = new MFNode();

HAnimSite1261.children[0] = TouchSensor1262;

let Shape1263 = browser.currentScene.createNode("Shape");
Shape1263.USE = "HAnimSiteShape";
HAnimSite1261.children[1] = Shape1263;

HAnimSegment1237.children[7] = HAnimSite1261;

let HAnimSite1264 = browser.currentScene.createNode("HAnimSite");
HAnimSite1264.name = "r_acromion_pt";
HAnimSite1264.DEF = "hanim_r_acromion_pt";
HAnimSite1264.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
let TouchSensor1265 = browser.currentScene.createNode("TouchSensor");
TouchSensor1265.description = "HAnimSite r_acromion";
HAnimSite1264.children = new MFNode();

HAnimSite1264.children[0] = TouchSensor1265;

let Shape1266 = browser.currentScene.createNode("Shape");
Shape1266.USE = "HAnimSiteShape";
HAnimSite1264.children[1] = Shape1266;

HAnimSegment1237.children[8] = HAnimSite1264;

let HAnimSite1267 = browser.currentScene.createNode("HAnimSite");
HAnimSite1267.name = "r_axilla_ant_pt";
HAnimSite1267.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1267.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
let TouchSensor1268 = browser.currentScene.createNode("TouchSensor");
TouchSensor1268.description = "HAnimSite r_axilla_ant";
HAnimSite1267.children = new MFNode();

HAnimSite1267.children[0] = TouchSensor1268;

let Shape1269 = browser.currentScene.createNode("Shape");
Shape1269.USE = "HAnimSiteShape";
HAnimSite1267.children[1] = Shape1269;

HAnimSegment1237.children[9] = HAnimSite1267;

let HAnimSite1270 = browser.currentScene.createNode("HAnimSite");
HAnimSite1270.name = "r_axilla_post_pt";
HAnimSite1270.DEF = "hanim_r_axilla_post_pt";
HAnimSite1270.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
let TouchSensor1271 = browser.currentScene.createNode("TouchSensor");
TouchSensor1271.description = "HAnimSite r_axilla_post";
HAnimSite1270.children = new MFNode();

HAnimSite1270.children[0] = TouchSensor1271;

let Shape1272 = browser.currentScene.createNode("Shape");
Shape1272.USE = "HAnimSiteShape";
HAnimSite1270.children[1] = Shape1272;

HAnimSegment1237.children[10] = HAnimSite1270;

HAnimJoint1236.children = new MFNode();

HAnimJoint1236.children[0] = HAnimSegment1237;

let HAnimJoint1273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1273.name = "r_acromioclavicular";
HAnimJoint1273.DEF = "hanim_r_acromioclavicular";
HAnimJoint1273.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1273.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1274.name = "r_scapula";
HAnimSegment1274.DEF = "hanim_r_scapula";
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='r_scapula'/>
let TouchSensor1275 = browser.currentScene.createNode("TouchSensor");
TouchSensor1275.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1274.children = new MFNode();

HAnimSegment1274.children[0] = TouchSensor1275;

let Transform1276 = browser.currentScene.createNode("Transform");
Transform1276.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
let Shape1277 = browser.currentScene.createNode("Shape");
Shape1277.USE = "HAnimJointShape";
Transform1276.children = new MFNode();

Transform1276.children[0] = Shape1277;

HAnimSegment1274.children[1] = Transform1276;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
let Shape1278 = browser.currentScene.createNode("Shape");
let LineSet1279 = browser.currentScene.createNode("LineSet");
LineSet1279.vertexCount = new MFInt32(new int[2]);
let Coordinate1280 = browser.currentScene.createNode("Coordinate");
Coordinate1280.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1279.coord = Coordinate1280;

let ColorRGBA1281 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1281.USE = "HAnimSegmentLineColorRGBA";
LineSet1279.color = ColorRGBA1281;

Shape1278.geometry = LineSet1279;

HAnimSegment1274.children[2] = Shape1278;

HAnimJoint1273.children = new MFNode();

HAnimJoint1273.children[0] = HAnimSegment1274;

let HAnimJoint1282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1282.name = "r_shoulder";
HAnimJoint1282.DEF = "hanim_r_shoulder";
HAnimJoint1282.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1282.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1283.name = "r_upperarm";
HAnimSegment1283.DEF = "hanim_r_upperarm";
//<HAnimJoint name='r_shoulder'/> visualization sphere is placed within <HAnimSegment name='r_upperarm'/>
let TouchSensor1284 = browser.currentScene.createNode("TouchSensor");
TouchSensor1284.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1283.children = new MFNode();

HAnimSegment1283.children[0] = TouchSensor1284;

let Transform1285 = browser.currentScene.createNode("Transform");
Transform1285.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
let Shape1286 = browser.currentScene.createNode("Shape");
Shape1286.USE = "HAnimJointShape";
Transform1285.children = new MFNode();

Transform1285.children[0] = Shape1286;

HAnimSegment1283.children[1] = Transform1285;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
let Shape1287 = browser.currentScene.createNode("Shape");
let LineSet1288 = browser.currentScene.createNode("LineSet");
LineSet1288.vertexCount = new MFInt32(new int[2]);
let Coordinate1289 = browser.currentScene.createNode("Coordinate");
Coordinate1289.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1288.coord = Coordinate1289;

let ColorRGBA1290 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1290.USE = "HAnimSegmentLineColorRGBA";
LineSet1288.color = ColorRGBA1290;

Shape1287.geometry = LineSet1288;

HAnimSegment1283.children[2] = Shape1287;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
let Shape1291 = browser.currentScene.createNode("Shape");
let LineSet1292 = browser.currentScene.createNode("LineSet");
LineSet1292.vertexCount = new MFInt32(new int[2]);
let Coordinate1293 = browser.currentScene.createNode("Coordinate");
Coordinate1293.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1292.coord = Coordinate1293;

let ColorRGBA1294 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1294.USE = "HAnimSiteLineColorRGBA";
LineSet1292.color = ColorRGBA1294;

Shape1291.geometry = LineSet1292;

HAnimSegment1283.children[3] = Shape1291;

let HAnimSite1295 = browser.currentScene.createNode("HAnimSite");
HAnimSite1295.name = "r_humeral_lateral_epicn_pt";
HAnimSite1295.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1295.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
let TouchSensor1296 = browser.currentScene.createNode("TouchSensor");
TouchSensor1296.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1295.children = new MFNode();

HAnimSite1295.children[0] = TouchSensor1296;

let Shape1297 = browser.currentScene.createNode("Shape");
Shape1297.USE = "HAnimSiteShape";
HAnimSite1295.children[1] = Shape1297;

HAnimSegment1283.children[4] = HAnimSite1295;

HAnimJoint1282.children = new MFNode();

HAnimJoint1282.children[0] = HAnimSegment1283;

let HAnimJoint1298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1298.name = "r_elbow";
HAnimJoint1298.DEF = "hanim_r_elbow";
HAnimJoint1298.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1298.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1299.name = "r_forearm";
HAnimSegment1299.DEF = "hanim_r_forearm";
//<HAnimJoint name='r_elbow'/> visualization sphere is placed within <HAnimSegment name='r_forearm'/>
let TouchSensor1300 = browser.currentScene.createNode("TouchSensor");
TouchSensor1300.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1299.children = new MFNode();

HAnimSegment1299.children[0] = TouchSensor1300;

let Transform1301 = browser.currentScene.createNode("Transform");
Transform1301.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
let Shape1302 = browser.currentScene.createNode("Shape");
Shape1302.USE = "HAnimJointShape";
Transform1301.children = new MFNode();

Transform1301.children[0] = Shape1302;

HAnimSegment1299.children[1] = Transform1301;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
let Shape1303 = browser.currentScene.createNode("Shape");
let LineSet1304 = browser.currentScene.createNode("LineSet");
LineSet1304.vertexCount = new MFInt32(new int[2]);
let Coordinate1305 = browser.currentScene.createNode("Coordinate");
Coordinate1305.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1304.coord = Coordinate1305;

let ColorRGBA1306 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1306.USE = "HAnimSegmentLineColorRGBA";
LineSet1304.color = ColorRGBA1306;

Shape1303.geometry = LineSet1304;

HAnimSegment1299.children[2] = Shape1303;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
let Shape1307 = browser.currentScene.createNode("Shape");
let LineSet1308 = browser.currentScene.createNode("LineSet");
LineSet1308.vertexCount = new MFInt32(new int[2]);
let Coordinate1309 = browser.currentScene.createNode("Coordinate");
Coordinate1309.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1308.coord = Coordinate1309;

let ColorRGBA1310 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1310.USE = "HAnimSiteLineColorRGBA";
LineSet1308.color = ColorRGBA1310;

Shape1307.geometry = LineSet1308;

HAnimSegment1299.children[3] = Shape1307;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
let Shape1311 = browser.currentScene.createNode("Shape");
let LineSet1312 = browser.currentScene.createNode("LineSet");
LineSet1312.vertexCount = new MFInt32(new int[2]);
let Coordinate1313 = browser.currentScene.createNode("Coordinate");
Coordinate1313.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1312.coord = Coordinate1313;

let ColorRGBA1314 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1314.USE = "HAnimSiteLineColorRGBA";
LineSet1312.color = ColorRGBA1314;

Shape1311.geometry = LineSet1312;

HAnimSegment1299.children[4] = Shape1311;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
let Shape1315 = browser.currentScene.createNode("Shape");
let LineSet1316 = browser.currentScene.createNode("LineSet");
LineSet1316.vertexCount = new MFInt32(new int[2]);
let Coordinate1317 = browser.currentScene.createNode("Coordinate");
Coordinate1317.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1316.coord = Coordinate1317;

let ColorRGBA1318 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1318.USE = "HAnimSiteLineColorRGBA";
LineSet1316.color = ColorRGBA1318;

Shape1315.geometry = LineSet1316;

HAnimSegment1299.children[5] = Shape1315;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
let Shape1319 = browser.currentScene.createNode("Shape");
let LineSet1320 = browser.currentScene.createNode("LineSet");
LineSet1320.vertexCount = new MFInt32(new int[2]);
let Coordinate1321 = browser.currentScene.createNode("Coordinate");
Coordinate1321.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1320.coord = Coordinate1321;

let ColorRGBA1322 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1322.USE = "HAnimSiteLineColorRGBA";
LineSet1320.color = ColorRGBA1322;

Shape1319.geometry = LineSet1320;

HAnimSegment1299.children[6] = Shape1319;

let HAnimSite1323 = browser.currentScene.createNode("HAnimSite");
HAnimSite1323.name = "r_radial_styloid_pt";
HAnimSite1323.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1323.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
let TouchSensor1324 = browser.currentScene.createNode("TouchSensor");
TouchSensor1324.description = "HAnimSite r_radial_styloid";
HAnimSite1323.children = new MFNode();

HAnimSite1323.children[0] = TouchSensor1324;

let Shape1325 = browser.currentScene.createNode("Shape");
Shape1325.USE = "HAnimSiteShape";
HAnimSite1323.children[1] = Shape1325;

HAnimSegment1299.children[7] = HAnimSite1323;

let HAnimSite1326 = browser.currentScene.createNode("HAnimSite");
HAnimSite1326.name = "r_olecranon_pt";
HAnimSite1326.DEF = "hanim_r_olecranon_pt";
HAnimSite1326.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
let TouchSensor1327 = browser.currentScene.createNode("TouchSensor");
TouchSensor1327.description = "HAnimSite r_olecranon";
HAnimSite1326.children = new MFNode();

HAnimSite1326.children[0] = TouchSensor1327;

let Shape1328 = browser.currentScene.createNode("Shape");
Shape1328.USE = "HAnimSiteShape";
HAnimSite1326.children[1] = Shape1328;

HAnimSegment1299.children[8] = HAnimSite1326;

let HAnimSite1329 = browser.currentScene.createNode("HAnimSite");
HAnimSite1329.name = "r_humeral_medial_epicn_pt";
HAnimSite1329.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1329.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
let TouchSensor1330 = browser.currentScene.createNode("TouchSensor");
TouchSensor1330.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1329.children = new MFNode();

HAnimSite1329.children[0] = TouchSensor1330;

let Shape1331 = browser.currentScene.createNode("Shape");
Shape1331.USE = "HAnimSiteShape";
HAnimSite1329.children[1] = Shape1331;

HAnimSegment1299.children[9] = HAnimSite1329;

let HAnimSite1332 = browser.currentScene.createNode("HAnimSite");
HAnimSite1332.name = "r_radiale_pt";
HAnimSite1332.DEF = "hanim_r_radiale_pt";
HAnimSite1332.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
let TouchSensor1333 = browser.currentScene.createNode("TouchSensor");
TouchSensor1333.description = "HAnimSite r_radiale";
HAnimSite1332.children = new MFNode();

HAnimSite1332.children[0] = TouchSensor1333;

let Shape1334 = browser.currentScene.createNode("Shape");
Shape1334.USE = "HAnimSiteShape";
HAnimSite1332.children[1] = Shape1334;

HAnimSegment1299.children[10] = HAnimSite1332;

HAnimJoint1298.children = new MFNode();

HAnimJoint1298.children[0] = HAnimSegment1299;

let HAnimJoint1335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1335.name = "r_wrist";
HAnimJoint1335.DEF = "hanim_r_wrist";
HAnimJoint1335.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1335.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1336.name = "r_hand";
HAnimSegment1336.DEF = "hanim_r_hand";
//<HAnimJoint name='r_wrist'/> visualization sphere is placed within <HAnimSegment name='r_hand'/>
let TouchSensor1337 = browser.currentScene.createNode("TouchSensor");
TouchSensor1337.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1336.children = new MFNode();

HAnimSegment1336.children[0] = TouchSensor1337;

let Transform1338 = browser.currentScene.createNode("Transform");
Transform1338.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
let Shape1339 = browser.currentScene.createNode("Shape");
Shape1339.USE = "HAnimJointShape";
Transform1338.children = new MFNode();

Transform1338.children[0] = Shape1339;

HAnimSegment1336.children[1] = Transform1338;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
let Shape1340 = browser.currentScene.createNode("Shape");
let LineSet1341 = browser.currentScene.createNode("LineSet");
LineSet1341.vertexCount = new MFInt32(new int[2]);
let Coordinate1342 = browser.currentScene.createNode("Coordinate");
Coordinate1342.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1341.coord = Coordinate1342;

let ColorRGBA1343 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1343.USE = "HAnimSegmentLineColorRGBA";
LineSet1341.color = ColorRGBA1343;

Shape1340.geometry = LineSet1341;

HAnimSegment1336.children[2] = Shape1340;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
let Shape1344 = browser.currentScene.createNode("Shape");
let LineSet1345 = browser.currentScene.createNode("LineSet");
LineSet1345.vertexCount = new MFInt32(new int[2]);
let Coordinate1346 = browser.currentScene.createNode("Coordinate");
Coordinate1346.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1345.coord = Coordinate1346;

let ColorRGBA1347 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1347.USE = "HAnimSegmentLineColorRGBA";
LineSet1345.color = ColorRGBA1347;

Shape1344.geometry = LineSet1345;

HAnimSegment1336.children[3] = Shape1344;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
let Shape1348 = browser.currentScene.createNode("Shape");
let LineSet1349 = browser.currentScene.createNode("LineSet");
LineSet1349.vertexCount = new MFInt32(new int[2]);
let Coordinate1350 = browser.currentScene.createNode("Coordinate");
Coordinate1350.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1349.coord = Coordinate1350;

let ColorRGBA1351 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1351.USE = "HAnimSegmentLineColorRGBA";
LineSet1349.color = ColorRGBA1351;

Shape1348.geometry = LineSet1349;

HAnimSegment1336.children[4] = Shape1348;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
let Shape1352 = browser.currentScene.createNode("Shape");
let LineSet1353 = browser.currentScene.createNode("LineSet");
LineSet1353.vertexCount = new MFInt32(new int[2]);
let Coordinate1354 = browser.currentScene.createNode("Coordinate");
Coordinate1354.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1353.coord = Coordinate1354;

let ColorRGBA1355 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1355.USE = "HAnimSegmentLineColorRGBA";
LineSet1353.color = ColorRGBA1355;

Shape1352.geometry = LineSet1353;

HAnimSegment1336.children[5] = Shape1352;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
let Shape1356 = browser.currentScene.createNode("Shape");
let LineSet1357 = browser.currentScene.createNode("LineSet");
LineSet1357.vertexCount = new MFInt32(new int[2]);
let Coordinate1358 = browser.currentScene.createNode("Coordinate");
Coordinate1358.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1357.coord = Coordinate1358;

let ColorRGBA1359 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1359.USE = "HAnimSegmentLineColorRGBA";
LineSet1357.color = ColorRGBA1359;

Shape1356.geometry = LineSet1357;

HAnimSegment1336.children[6] = Shape1356;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
let Shape1360 = browser.currentScene.createNode("Shape");
let LineSet1361 = browser.currentScene.createNode("LineSet");
LineSet1361.vertexCount = new MFInt32(new int[2]);
let Coordinate1362 = browser.currentScene.createNode("Coordinate");
Coordinate1362.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1361.coord = Coordinate1362;

let ColorRGBA1363 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1363.USE = "HAnimSiteLineColorRGBA";
LineSet1361.color = ColorRGBA1363;

Shape1360.geometry = LineSet1361;

HAnimSegment1336.children[7] = Shape1360;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
let Shape1364 = browser.currentScene.createNode("Shape");
let LineSet1365 = browser.currentScene.createNode("LineSet");
LineSet1365.vertexCount = new MFInt32(new int[2]);
let Coordinate1366 = browser.currentScene.createNode("Coordinate");
Coordinate1366.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1365.coord = Coordinate1366;

let ColorRGBA1367 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1367.USE = "HAnimSiteLineColorRGBA";
LineSet1365.color = ColorRGBA1367;

Shape1364.geometry = LineSet1365;

HAnimSegment1336.children[8] = Shape1364;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
let Shape1368 = browser.currentScene.createNode("Shape");
let LineSet1369 = browser.currentScene.createNode("LineSet");
LineSet1369.vertexCount = new MFInt32(new int[2]);
let Coordinate1370 = browser.currentScene.createNode("Coordinate");
Coordinate1370.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1369.coord = Coordinate1370;

let ColorRGBA1371 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1371.USE = "HAnimSiteLineColorRGBA";
LineSet1369.color = ColorRGBA1371;

Shape1368.geometry = LineSet1369;

HAnimSegment1336.children[9] = Shape1368;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
let Shape1372 = browser.currentScene.createNode("Shape");
let LineSet1373 = browser.currentScene.createNode("LineSet");
LineSet1373.vertexCount = new MFInt32(new int[2]);
let Coordinate1374 = browser.currentScene.createNode("Coordinate");
Coordinate1374.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1373.coord = Coordinate1374;

let ColorRGBA1375 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1375.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1373.color = ColorRGBA1375;

Shape1372.geometry = LineSet1373;

HAnimSegment1336.children[10] = Shape1372;

let HAnimSite1376 = browser.currentScene.createNode("HAnimSite");
HAnimSite1376.name = "r_metacarpal_pha2_pt";
HAnimSite1376.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1376.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
let TouchSensor1377 = browser.currentScene.createNode("TouchSensor");
TouchSensor1377.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1376.children = new MFNode();

HAnimSite1376.children[0] = TouchSensor1377;

let Shape1378 = browser.currentScene.createNode("Shape");
Shape1378.USE = "HAnimSiteShape";
HAnimSite1376.children[1] = Shape1378;

HAnimSegment1336.children[11] = HAnimSite1376;

let HAnimSite1379 = browser.currentScene.createNode("HAnimSite");
HAnimSite1379.name = "r_ulnar_styloid_pt";
HAnimSite1379.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1379.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
let TouchSensor1380 = browser.currentScene.createNode("TouchSensor");
TouchSensor1380.description = "HAnimSite r_ulnar_styloid";
HAnimSite1379.children = new MFNode();

HAnimSite1379.children[0] = TouchSensor1380;

let Shape1381 = browser.currentScene.createNode("Shape");
Shape1381.USE = "HAnimSiteShape";
HAnimSite1379.children[1] = Shape1381;

HAnimSegment1336.children[12] = HAnimSite1379;

let HAnimSite1382 = browser.currentScene.createNode("HAnimSite");
HAnimSite1382.name = "r_metacarpal_pha5_pt";
HAnimSite1382.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1382.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
let TouchSensor1383 = browser.currentScene.createNode("TouchSensor");
TouchSensor1383.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1382.children = new MFNode();

HAnimSite1382.children[0] = TouchSensor1383;

let Shape1384 = browser.currentScene.createNode("Shape");
Shape1384.USE = "HAnimSiteShape";
HAnimSite1382.children[1] = Shape1384;

HAnimSegment1336.children[13] = HAnimSite1382;

let HAnimSite1385 = browser.currentScene.createNode("HAnimSite");
HAnimSite1385.name = "r_hand_front_view";
HAnimSite1385.DEF = "hanim_r_hand_front_view";
HAnimSite1385.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
//HAnimSite visualization shape
let TouchSensor1386 = browser.currentScene.createNode("TouchSensor");
TouchSensor1386.description = "HAnimSite r_hand_front_view";
HAnimSite1385.children = new MFNode();

HAnimSite1385.children[0] = TouchSensor1386;

let Shape1387 = browser.currentScene.createNode("Shape");
Shape1387.USE = "HAnimSiteShape";
HAnimSite1385.children[1] = Shape1387;

let Viewpoint1388 = browser.currentScene.createNode("Viewpoint");
Viewpoint1388.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1388.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1388.description = "right hand front";
Viewpoint1388.position = new SFVec3f(new float[0,0,0]);
HAnimSite1385.children[2] = Viewpoint1388;

//HAnimSite/Viewpoint visualization shape
let Anchor1389 = browser.currentScene.createNode("Anchor");
Anchor1389.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1389.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
let LOD1390 = browser.currentScene.createNode("LOD");
LOD1390.forceTransitions = True;
LOD1390.range = new MFFloat(new float[0.04]);
let WorldInfo1391 = browser.currentScene.createNode("WorldInfo");
WorldInfo1391.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1390.children = new MFNode();

LOD1390.children[0] = WorldInfo1391;

let Shape1392 = browser.currentScene.createNode("Shape");
Shape1392.USE = "HAnimSiteViewpointShape";
LOD1390.children[1] = Shape1392;

Anchor1389.children = new MFNode();

Anchor1389.children[0] = LOD1390;

HAnimSite1385.children[3] = Anchor1389;

HAnimSegment1336.children[14] = HAnimSite1385;

HAnimJoint1335.children = new MFNode();

HAnimJoint1335.children[0] = HAnimSegment1336;

let HAnimJoint1393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1393.name = "r_thumb1";
HAnimJoint1393.DEF = "hanim_r_thumb1";
HAnimJoint1393.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1393.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1394 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1394.name = "r_thumb_metacarpal";
HAnimSegment1394.DEF = "hanim_r_thumb_metacarpal";
//<HAnimJoint name='r_thumb1'/> visualization sphere is placed within <HAnimSegment name='r_thumb_metacarpal'/>
let TouchSensor1395 = browser.currentScene.createNode("TouchSensor");
TouchSensor1395.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1394.children = new MFNode();

HAnimSegment1394.children[0] = TouchSensor1395;

let Transform1396 = browser.currentScene.createNode("Transform");
Transform1396.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
let Shape1397 = browser.currentScene.createNode("Shape");
Shape1397.USE = "HAnimJointShape";
Transform1396.children = new MFNode();

Transform1396.children[0] = Shape1397;

HAnimSegment1394.children[1] = Transform1396;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
let Shape1398 = browser.currentScene.createNode("Shape");
let LineSet1399 = browser.currentScene.createNode("LineSet");
LineSet1399.vertexCount = new MFInt32(new int[2]);
let Coordinate1400 = browser.currentScene.createNode("Coordinate");
Coordinate1400.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1399.coord = Coordinate1400;

let ColorRGBA1401 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1401.USE = "HAnimSegmentLineColorRGBA";
LineSet1399.color = ColorRGBA1401;

Shape1398.geometry = LineSet1399;

HAnimSegment1394.children[2] = Shape1398;

HAnimJoint1393.children = new MFNode();

HAnimJoint1393.children[0] = HAnimSegment1394;

let HAnimJoint1402 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1402.name = "r_thumb2";
HAnimJoint1402.DEF = "hanim_r_thumb2";
HAnimJoint1402.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1402.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1403 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1403.name = "r_thumb_proximal";
HAnimSegment1403.DEF = "hanim_r_thumb_proximal";
//<HAnimJoint name='r_thumb2'/> visualization sphere is placed within <HAnimSegment name='r_thumb_proximal'/>
let TouchSensor1404 = browser.currentScene.createNode("TouchSensor");
TouchSensor1404.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1403.children = new MFNode();

HAnimSegment1403.children[0] = TouchSensor1404;

let Transform1405 = browser.currentScene.createNode("Transform");
Transform1405.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
let Shape1406 = browser.currentScene.createNode("Shape");
Shape1406.USE = "HAnimJointShape";
Transform1405.children = new MFNode();

Transform1405.children[0] = Shape1406;

HAnimSegment1403.children[1] = Transform1405;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
let Shape1407 = browser.currentScene.createNode("Shape");
let LineSet1408 = browser.currentScene.createNode("LineSet");
LineSet1408.vertexCount = new MFInt32(new int[2]);
let Coordinate1409 = browser.currentScene.createNode("Coordinate");
Coordinate1409.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1408.coord = Coordinate1409;

let ColorRGBA1410 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1410.USE = "HAnimSegmentLineColorRGBA";
LineSet1408.color = ColorRGBA1410;

Shape1407.geometry = LineSet1408;

HAnimSegment1403.children[2] = Shape1407;

HAnimJoint1402.children = new MFNode();

HAnimJoint1402.children[0] = HAnimSegment1403;

let HAnimJoint1411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1411.name = "r_thumb3";
HAnimJoint1411.DEF = "hanim_r_thumb3";
HAnimJoint1411.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1411.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1412 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1412.name = "r_thumb_distal";
HAnimSegment1412.DEF = "hanim_r_thumb_distal";
//<HAnimJoint name='r_thumb3'/> visualization sphere is placed within <HAnimSegment name='r_thumb_distal'/>
let TouchSensor1413 = browser.currentScene.createNode("TouchSensor");
TouchSensor1413.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1412.children = new MFNode();

HAnimSegment1412.children[0] = TouchSensor1413;

let Transform1414 = browser.currentScene.createNode("Transform");
Transform1414.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
let Shape1415 = browser.currentScene.createNode("Shape");
Shape1415.USE = "HAnimJointShape";
Transform1414.children = new MFNode();

Transform1414.children[0] = Shape1415;

HAnimSegment1412.children[1] = Transform1414;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
let Shape1416 = browser.currentScene.createNode("Shape");
let LineSet1417 = browser.currentScene.createNode("LineSet");
LineSet1417.vertexCount = new MFInt32(new int[2]);
let Coordinate1418 = browser.currentScene.createNode("Coordinate");
Coordinate1418.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1417.coord = Coordinate1418;

let ColorRGBA1419 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1419.USE = "HAnimSiteLineColorRGBA";
LineSet1417.color = ColorRGBA1419;

Shape1416.geometry = LineSet1417;

HAnimSegment1412.children[2] = Shape1416;

let HAnimSite1420 = browser.currentScene.createNode("HAnimSite");
HAnimSite1420.name = "r_thumb_distal_tip";
HAnimSite1420.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1420.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
let TouchSensor1421 = browser.currentScene.createNode("TouchSensor");
TouchSensor1421.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1420.children = new MFNode();

HAnimSite1420.children[0] = TouchSensor1421;

let Shape1422 = browser.currentScene.createNode("Shape");
Shape1422.USE = "HAnimSiteShape";
HAnimSite1420.children[1] = Shape1422;

HAnimSegment1412.children[3] = HAnimSite1420;

HAnimJoint1411.children = new MFNode();

HAnimJoint1411.children[0] = HAnimSegment1412;

HAnimJoint1402.children[1] = HAnimJoint1411;

HAnimJoint1393.children[1] = HAnimJoint1402;

HAnimJoint1335.children[1] = HAnimJoint1393;

let HAnimJoint1423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1423.name = "r_index0";
HAnimJoint1423.DEF = "hanim_r_index0";
HAnimJoint1423.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1423.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1424 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1424.name = "r_index_metacarpal";
HAnimSegment1424.DEF = "hanim_r_index_metacarpal";
//<HAnimJoint name='r_index0'/> visualization sphere is placed within <HAnimSegment name='r_index_metacarpal'/>
let TouchSensor1425 = browser.currentScene.createNode("TouchSensor");
TouchSensor1425.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1424.children = new MFNode();

HAnimSegment1424.children[0] = TouchSensor1425;

let Transform1426 = browser.currentScene.createNode("Transform");
Transform1426.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
let Shape1427 = browser.currentScene.createNode("Shape");
Shape1427.USE = "HAnimJointShape";
Transform1426.children = new MFNode();

Transform1426.children[0] = Shape1427;

HAnimSegment1424.children[1] = Transform1426;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
let Shape1428 = browser.currentScene.createNode("Shape");
let LineSet1429 = browser.currentScene.createNode("LineSet");
LineSet1429.vertexCount = new MFInt32(new int[2]);
let Coordinate1430 = browser.currentScene.createNode("Coordinate");
Coordinate1430.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1429.coord = Coordinate1430;

let ColorRGBA1431 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1431.USE = "HAnimSegmentLineColorRGBA";
LineSet1429.color = ColorRGBA1431;

Shape1428.geometry = LineSet1429;

HAnimSegment1424.children[2] = Shape1428;

HAnimJoint1423.children = new MFNode();

HAnimJoint1423.children[0] = HAnimSegment1424;

let HAnimJoint1432 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1432.name = "r_index1";
HAnimJoint1432.DEF = "hanim_r_index1";
HAnimJoint1432.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1432.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1433 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1433.name = "r_index_proximal";
HAnimSegment1433.DEF = "hanim_r_index_proximal";
//<HAnimJoint name='r_index1'/> visualization sphere is placed within <HAnimSegment name='r_index_proximal'/>
let TouchSensor1434 = browser.currentScene.createNode("TouchSensor");
TouchSensor1434.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1433.children = new MFNode();

HAnimSegment1433.children[0] = TouchSensor1434;

let Transform1435 = browser.currentScene.createNode("Transform");
Transform1435.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
let Shape1436 = browser.currentScene.createNode("Shape");
Shape1436.USE = "HAnimJointShape";
Transform1435.children = new MFNode();

Transform1435.children[0] = Shape1436;

HAnimSegment1433.children[1] = Transform1435;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
let Shape1437 = browser.currentScene.createNode("Shape");
let LineSet1438 = browser.currentScene.createNode("LineSet");
LineSet1438.vertexCount = new MFInt32(new int[2]);
let Coordinate1439 = browser.currentScene.createNode("Coordinate");
Coordinate1439.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1438.coord = Coordinate1439;

let ColorRGBA1440 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1440.USE = "HAnimSegmentLineColorRGBA";
LineSet1438.color = ColorRGBA1440;

Shape1437.geometry = LineSet1438;

HAnimSegment1433.children[2] = Shape1437;

HAnimJoint1432.children = new MFNode();

HAnimJoint1432.children[0] = HAnimSegment1433;

let HAnimJoint1441 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1441.name = "r_index2";
HAnimJoint1441.DEF = "hanim_r_index2";
HAnimJoint1441.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1441.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1442.name = "r_index_middle";
HAnimSegment1442.DEF = "hanim_r_index_middle";
//<HAnimJoint name='r_index2'/> visualization sphere is placed within <HAnimSegment name='r_index_middle'/>
let TouchSensor1443 = browser.currentScene.createNode("TouchSensor");
TouchSensor1443.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1442.children = new MFNode();

HAnimSegment1442.children[0] = TouchSensor1443;

let Transform1444 = browser.currentScene.createNode("Transform");
Transform1444.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
let Shape1445 = browser.currentScene.createNode("Shape");
Shape1445.USE = "HAnimJointShape";
Transform1444.children = new MFNode();

Transform1444.children[0] = Shape1445;

HAnimSegment1442.children[1] = Transform1444;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
let Shape1446 = browser.currentScene.createNode("Shape");
let LineSet1447 = browser.currentScene.createNode("LineSet");
LineSet1447.vertexCount = new MFInt32(new int[2]);
let Coordinate1448 = browser.currentScene.createNode("Coordinate");
Coordinate1448.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1447.coord = Coordinate1448;

let ColorRGBA1449 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1449.USE = "HAnimSegmentLineColorRGBA";
LineSet1447.color = ColorRGBA1449;

Shape1446.geometry = LineSet1447;

HAnimSegment1442.children[2] = Shape1446;

HAnimJoint1441.children = new MFNode();

HAnimJoint1441.children[0] = HAnimSegment1442;

let HAnimJoint1450 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1450.name = "r_index3";
HAnimJoint1450.DEF = "hanim_r_index3";
HAnimJoint1450.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1450.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1451 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1451.name = "r_index_distal";
HAnimSegment1451.DEF = "hanim_r_index_distal";
//<HAnimJoint name='r_index3'/> visualization sphere is placed within <HAnimSegment name='r_index_distal'/>
let TouchSensor1452 = browser.currentScene.createNode("TouchSensor");
TouchSensor1452.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1451.children = new MFNode();

HAnimSegment1451.children[0] = TouchSensor1452;

let Transform1453 = browser.currentScene.createNode("Transform");
Transform1453.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
let Shape1454 = browser.currentScene.createNode("Shape");
Shape1454.USE = "HAnimJointShape";
Transform1453.children = new MFNode();

Transform1453.children[0] = Shape1454;

HAnimSegment1451.children[1] = Transform1453;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
let Shape1455 = browser.currentScene.createNode("Shape");
let LineSet1456 = browser.currentScene.createNode("LineSet");
LineSet1456.vertexCount = new MFInt32(new int[2]);
let Coordinate1457 = browser.currentScene.createNode("Coordinate");
Coordinate1457.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1456.coord = Coordinate1457;

let ColorRGBA1458 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1458.USE = "HAnimSiteLineColorRGBA";
LineSet1456.color = ColorRGBA1458;

Shape1455.geometry = LineSet1456;

HAnimSegment1451.children[2] = Shape1455;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
let Shape1459 = browser.currentScene.createNode("Shape");
let LineSet1460 = browser.currentScene.createNode("LineSet");
LineSet1460.vertexCount = new MFInt32(new int[2]);
let Coordinate1461 = browser.currentScene.createNode("Coordinate");
Coordinate1461.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1460.coord = Coordinate1461;

let ColorRGBA1462 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1462.USE = "HAnimSiteLineColorRGBA";
LineSet1460.color = ColorRGBA1462;

Shape1459.geometry = LineSet1460;

HAnimSegment1451.children[3] = Shape1459;

let HAnimSite1463 = browser.currentScene.createNode("HAnimSite");
HAnimSite1463.name = "r_index_distal_tip";
HAnimSite1463.DEF = "hanim_r_index_distal_tip";
HAnimSite1463.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
let TouchSensor1464 = browser.currentScene.createNode("TouchSensor");
TouchSensor1464.description = "HAnimSite r_index_distal_tip";
HAnimSite1463.children = new MFNode();

HAnimSite1463.children[0] = TouchSensor1464;

let Shape1465 = browser.currentScene.createNode("Shape");
Shape1465.USE = "HAnimSiteShape";
HAnimSite1463.children[1] = Shape1465;

HAnimSegment1451.children[4] = HAnimSite1463;

let HAnimSite1466 = browser.currentScene.createNode("HAnimSite");
HAnimSite1466.name = "r_dactylion_pt";
HAnimSite1466.DEF = "hanim_r_dactylion_pt";
HAnimSite1466.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
let TouchSensor1467 = browser.currentScene.createNode("TouchSensor");
TouchSensor1467.description = "HAnimSite r_dactylion";
HAnimSite1466.children = new MFNode();

HAnimSite1466.children[0] = TouchSensor1467;

let Shape1468 = browser.currentScene.createNode("Shape");
Shape1468.USE = "HAnimSiteShape";
HAnimSite1466.children[1] = Shape1468;

HAnimSegment1451.children[5] = HAnimSite1466;

HAnimJoint1450.children = new MFNode();

HAnimJoint1450.children[0] = HAnimSegment1451;

HAnimJoint1441.children[1] = HAnimJoint1450;

HAnimJoint1432.children[1] = HAnimJoint1441;

HAnimJoint1423.children[1] = HAnimJoint1432;

HAnimJoint1335.children[2] = HAnimJoint1423;

let HAnimJoint1469 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1469.name = "r_middle0";
HAnimJoint1469.DEF = "hanim_r_middle0";
HAnimJoint1469.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1469.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1470.name = "r_middle_metacarpal";
HAnimSegment1470.DEF = "hanim_r_middle_metacarpal";
//<HAnimJoint name='r_middle0'/> visualization sphere is placed within <HAnimSegment name='r_middle_metacarpal'/>
let TouchSensor1471 = browser.currentScene.createNode("TouchSensor");
TouchSensor1471.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1470.children = new MFNode();

HAnimSegment1470.children[0] = TouchSensor1471;

let Transform1472 = browser.currentScene.createNode("Transform");
Transform1472.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
let Shape1473 = browser.currentScene.createNode("Shape");
Shape1473.USE = "HAnimJointShape";
Transform1472.children = new MFNode();

Transform1472.children[0] = Shape1473;

HAnimSegment1470.children[1] = Transform1472;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
let Shape1474 = browser.currentScene.createNode("Shape");
let LineSet1475 = browser.currentScene.createNode("LineSet");
LineSet1475.vertexCount = new MFInt32(new int[2]);
let Coordinate1476 = browser.currentScene.createNode("Coordinate");
Coordinate1476.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1475.coord = Coordinate1476;

let ColorRGBA1477 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1477.USE = "HAnimSegmentLineColorRGBA";
LineSet1475.color = ColorRGBA1477;

Shape1474.geometry = LineSet1475;

HAnimSegment1470.children[2] = Shape1474;

HAnimJoint1469.children = new MFNode();

HAnimJoint1469.children[0] = HAnimSegment1470;

let HAnimJoint1478 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1478.name = "r_middle1";
HAnimJoint1478.DEF = "hanim_r_middle1";
HAnimJoint1478.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1478.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1479.name = "r_middle_proximal";
HAnimSegment1479.DEF = "hanim_r_middle_proximal";
//<HAnimJoint name='r_middle1'/> visualization sphere is placed within <HAnimSegment name='r_middle_proximal'/>
let TouchSensor1480 = browser.currentScene.createNode("TouchSensor");
TouchSensor1480.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1479.children = new MFNode();

HAnimSegment1479.children[0] = TouchSensor1480;

let Transform1481 = browser.currentScene.createNode("Transform");
Transform1481.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
let Shape1482 = browser.currentScene.createNode("Shape");
Shape1482.USE = "HAnimJointShape";
Transform1481.children = new MFNode();

Transform1481.children[0] = Shape1482;

HAnimSegment1479.children[1] = Transform1481;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
let Shape1483 = browser.currentScene.createNode("Shape");
let LineSet1484 = browser.currentScene.createNode("LineSet");
LineSet1484.vertexCount = new MFInt32(new int[2]);
let Coordinate1485 = browser.currentScene.createNode("Coordinate");
Coordinate1485.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1484.coord = Coordinate1485;

let ColorRGBA1486 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1486.USE = "HAnimSegmentLineColorRGBA";
LineSet1484.color = ColorRGBA1486;

Shape1483.geometry = LineSet1484;

HAnimSegment1479.children[2] = Shape1483;

HAnimJoint1478.children = new MFNode();

HAnimJoint1478.children[0] = HAnimSegment1479;

let HAnimJoint1487 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1487.name = "r_middle2";
HAnimJoint1487.DEF = "hanim_r_middle2";
HAnimJoint1487.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1487.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1488.name = "r_middle_middle";
HAnimSegment1488.DEF = "hanim_r_middle_middle";
//<HAnimJoint name='r_middle2'/> visualization sphere is placed within <HAnimSegment name='r_middle_middle'/>
let TouchSensor1489 = browser.currentScene.createNode("TouchSensor");
TouchSensor1489.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1488.children = new MFNode();

HAnimSegment1488.children[0] = TouchSensor1489;

let Transform1490 = browser.currentScene.createNode("Transform");
Transform1490.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
let Shape1491 = browser.currentScene.createNode("Shape");
Shape1491.USE = "HAnimJointShape";
Transform1490.children = new MFNode();

Transform1490.children[0] = Shape1491;

HAnimSegment1488.children[1] = Transform1490;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
let Shape1492 = browser.currentScene.createNode("Shape");
let LineSet1493 = browser.currentScene.createNode("LineSet");
LineSet1493.vertexCount = new MFInt32(new int[2]);
let Coordinate1494 = browser.currentScene.createNode("Coordinate");
Coordinate1494.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1493.coord = Coordinate1494;

let ColorRGBA1495 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1495.USE = "HAnimSegmentLineColorRGBA";
LineSet1493.color = ColorRGBA1495;

Shape1492.geometry = LineSet1493;

HAnimSegment1488.children[2] = Shape1492;

HAnimJoint1487.children = new MFNode();

HAnimJoint1487.children[0] = HAnimSegment1488;

let HAnimJoint1496 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1496.name = "r_middle3";
HAnimJoint1496.DEF = "hanim_r_middle3";
HAnimJoint1496.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1496.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1497.name = "r_middle_distal";
HAnimSegment1497.DEF = "hanim_r_middle_distal";
//<HAnimJoint name='r_middle3'/> visualization sphere is placed within <HAnimSegment name='r_middle_distal'/>
let TouchSensor1498 = browser.currentScene.createNode("TouchSensor");
TouchSensor1498.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1497.children = new MFNode();

HAnimSegment1497.children[0] = TouchSensor1498;

let Transform1499 = browser.currentScene.createNode("Transform");
Transform1499.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
let Shape1500 = browser.currentScene.createNode("Shape");
Shape1500.USE = "HAnimJointShape";
Transform1499.children = new MFNode();

Transform1499.children[0] = Shape1500;

HAnimSegment1497.children[1] = Transform1499;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
let Shape1501 = browser.currentScene.createNode("Shape");
let LineSet1502 = browser.currentScene.createNode("LineSet");
LineSet1502.vertexCount = new MFInt32(new int[2]);
let Coordinate1503 = browser.currentScene.createNode("Coordinate");
Coordinate1503.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1502.coord = Coordinate1503;

let ColorRGBA1504 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1504.USE = "HAnimSiteLineColorRGBA";
LineSet1502.color = ColorRGBA1504;

Shape1501.geometry = LineSet1502;

HAnimSegment1497.children[2] = Shape1501;

let HAnimSite1505 = browser.currentScene.createNode("HAnimSite");
HAnimSite1505.name = "r_middle_distal_tip";
HAnimSite1505.DEF = "hanim_r_middle_distal_tip";
HAnimSite1505.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
let TouchSensor1506 = browser.currentScene.createNode("TouchSensor");
TouchSensor1506.description = "HAnimSite r_middle_distal_tip";
HAnimSite1505.children = new MFNode();

HAnimSite1505.children[0] = TouchSensor1506;

let Shape1507 = browser.currentScene.createNode("Shape");
Shape1507.USE = "HAnimSiteShape";
HAnimSite1505.children[1] = Shape1507;

HAnimSegment1497.children[3] = HAnimSite1505;

HAnimJoint1496.children = new MFNode();

HAnimJoint1496.children[0] = HAnimSegment1497;

HAnimJoint1487.children[1] = HAnimJoint1496;

HAnimJoint1478.children[1] = HAnimJoint1487;

HAnimJoint1469.children[1] = HAnimJoint1478;

HAnimJoint1335.children[3] = HAnimJoint1469;

let HAnimJoint1508 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1508.name = "r_ring0";
HAnimJoint1508.DEF = "hanim_r_ring0";
HAnimJoint1508.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1508.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1509.name = "r_ring_metacarpal";
HAnimSegment1509.DEF = "hanim_r_ring_metacarpal";
//<HAnimJoint name='r_ring0'/> visualization sphere is placed within <HAnimSegment name='r_ring_metacarpal'/>
let TouchSensor1510 = browser.currentScene.createNode("TouchSensor");
TouchSensor1510.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1509.children = new MFNode();

HAnimSegment1509.children[0] = TouchSensor1510;

let Transform1511 = browser.currentScene.createNode("Transform");
Transform1511.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
let Shape1512 = browser.currentScene.createNode("Shape");
Shape1512.USE = "HAnimJointShape";
Transform1511.children = new MFNode();

Transform1511.children[0] = Shape1512;

HAnimSegment1509.children[1] = Transform1511;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
let Shape1513 = browser.currentScene.createNode("Shape");
let LineSet1514 = browser.currentScene.createNode("LineSet");
LineSet1514.vertexCount = new MFInt32(new int[2]);
let Coordinate1515 = browser.currentScene.createNode("Coordinate");
Coordinate1515.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1514.coord = Coordinate1515;

let ColorRGBA1516 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1516.USE = "HAnimSegmentLineColorRGBA";
LineSet1514.color = ColorRGBA1516;

Shape1513.geometry = LineSet1514;

HAnimSegment1509.children[2] = Shape1513;

HAnimJoint1508.children = new MFNode();

HAnimJoint1508.children[0] = HAnimSegment1509;

let HAnimJoint1517 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1517.name = "r_ring1";
HAnimJoint1517.DEF = "hanim_r_ring1";
HAnimJoint1517.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1517.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1518 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1518.name = "r_ring_proximal";
HAnimSegment1518.DEF = "hanim_r_ring_proximal";
//<HAnimJoint name='r_ring1'/> visualization sphere is placed within <HAnimSegment name='r_ring_proximal'/>
let TouchSensor1519 = browser.currentScene.createNode("TouchSensor");
TouchSensor1519.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1518.children = new MFNode();

HAnimSegment1518.children[0] = TouchSensor1519;

let Transform1520 = browser.currentScene.createNode("Transform");
Transform1520.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
let Shape1521 = browser.currentScene.createNode("Shape");
Shape1521.USE = "HAnimJointShape";
Transform1520.children = new MFNode();

Transform1520.children[0] = Shape1521;

HAnimSegment1518.children[1] = Transform1520;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
let Shape1522 = browser.currentScene.createNode("Shape");
let LineSet1523 = browser.currentScene.createNode("LineSet");
LineSet1523.vertexCount = new MFInt32(new int[2]);
let Coordinate1524 = browser.currentScene.createNode("Coordinate");
Coordinate1524.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1523.coord = Coordinate1524;

let ColorRGBA1525 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1525.USE = "HAnimSegmentLineColorRGBA";
LineSet1523.color = ColorRGBA1525;

Shape1522.geometry = LineSet1523;

HAnimSegment1518.children[2] = Shape1522;

HAnimJoint1517.children = new MFNode();

HAnimJoint1517.children[0] = HAnimSegment1518;

let HAnimJoint1526 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1526.name = "r_ring2";
HAnimJoint1526.DEF = "hanim_r_ring2";
HAnimJoint1526.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1526.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1527 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1527.name = "r_ring_middle";
HAnimSegment1527.DEF = "hanim_r_ring_middle";
//<HAnimJoint name='r_ring2'/> visualization sphere is placed within <HAnimSegment name='r_ring_middle'/>
let TouchSensor1528 = browser.currentScene.createNode("TouchSensor");
TouchSensor1528.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1527.children = new MFNode();

HAnimSegment1527.children[0] = TouchSensor1528;

let Transform1529 = browser.currentScene.createNode("Transform");
Transform1529.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
let Shape1530 = browser.currentScene.createNode("Shape");
Shape1530.USE = "HAnimJointShape";
Transform1529.children = new MFNode();

Transform1529.children[0] = Shape1530;

HAnimSegment1527.children[1] = Transform1529;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
let Shape1531 = browser.currentScene.createNode("Shape");
let LineSet1532 = browser.currentScene.createNode("LineSet");
LineSet1532.vertexCount = new MFInt32(new int[2]);
let Coordinate1533 = browser.currentScene.createNode("Coordinate");
Coordinate1533.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1532.coord = Coordinate1533;

let ColorRGBA1534 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1534.USE = "HAnimSegmentLineColorRGBA";
LineSet1532.color = ColorRGBA1534;

Shape1531.geometry = LineSet1532;

HAnimSegment1527.children[2] = Shape1531;

HAnimJoint1526.children = new MFNode();

HAnimJoint1526.children[0] = HAnimSegment1527;

let HAnimJoint1535 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1535.name = "r_ring3";
HAnimJoint1535.DEF = "hanim_r_ring3";
HAnimJoint1535.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1535.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1536 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1536.name = "r_ring_distal";
HAnimSegment1536.DEF = "hanim_r_ring_distal";
//<HAnimJoint name='r_ring3'/> visualization sphere is placed within <HAnimSegment name='r_ring_distal'/>
let TouchSensor1537 = browser.currentScene.createNode("TouchSensor");
TouchSensor1537.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1536.children = new MFNode();

HAnimSegment1536.children[0] = TouchSensor1537;

let Transform1538 = browser.currentScene.createNode("Transform");
Transform1538.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
let Shape1539 = browser.currentScene.createNode("Shape");
Shape1539.USE = "HAnimJointShape";
Transform1538.children = new MFNode();

Transform1538.children[0] = Shape1539;

HAnimSegment1536.children[1] = Transform1538;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
let Shape1540 = browser.currentScene.createNode("Shape");
let LineSet1541 = browser.currentScene.createNode("LineSet");
LineSet1541.vertexCount = new MFInt32(new int[2]);
let Coordinate1542 = browser.currentScene.createNode("Coordinate");
Coordinate1542.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1541.coord = Coordinate1542;

let ColorRGBA1543 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1543.USE = "HAnimSiteLineColorRGBA";
LineSet1541.color = ColorRGBA1543;

Shape1540.geometry = LineSet1541;

HAnimSegment1536.children[2] = Shape1540;

let HAnimSite1544 = browser.currentScene.createNode("HAnimSite");
HAnimSite1544.name = "r_ring_distal_tip";
HAnimSite1544.DEF = "hanim_r_ring_distal_tip";
HAnimSite1544.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
let TouchSensor1545 = browser.currentScene.createNode("TouchSensor");
TouchSensor1545.description = "HAnimSite r_ring_distal_tip";
HAnimSite1544.children = new MFNode();

HAnimSite1544.children[0] = TouchSensor1545;

let Shape1546 = browser.currentScene.createNode("Shape");
Shape1546.USE = "HAnimSiteShape";
HAnimSite1544.children[1] = Shape1546;

HAnimSegment1536.children[3] = HAnimSite1544;

HAnimJoint1535.children = new MFNode();

HAnimJoint1535.children[0] = HAnimSegment1536;

HAnimJoint1526.children[1] = HAnimJoint1535;

HAnimJoint1517.children[1] = HAnimJoint1526;

HAnimJoint1508.children[1] = HAnimJoint1517;

HAnimJoint1335.children[4] = HAnimJoint1508;

let HAnimJoint1547 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1547.name = "r_pinky0";
HAnimJoint1547.DEF = "hanim_r_pinky0";
HAnimJoint1547.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1547.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1548 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1548.name = "r_pinky_metacarpal";
HAnimSegment1548.DEF = "hanim_r_pinky_metacarpal";
//<HAnimJoint name='r_pinky0'/> visualization sphere is placed within <HAnimSegment name='r_pinky_metacarpal'/>
let TouchSensor1549 = browser.currentScene.createNode("TouchSensor");
TouchSensor1549.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1548.children = new MFNode();

HAnimSegment1548.children[0] = TouchSensor1549;

let Transform1550 = browser.currentScene.createNode("Transform");
Transform1550.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
let Shape1551 = browser.currentScene.createNode("Shape");
Shape1551.USE = "HAnimJointShape";
Transform1550.children = new MFNode();

Transform1550.children[0] = Shape1551;

HAnimSegment1548.children[1] = Transform1550;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
let Shape1552 = browser.currentScene.createNode("Shape");
let LineSet1553 = browser.currentScene.createNode("LineSet");
LineSet1553.vertexCount = new MFInt32(new int[2]);
let Coordinate1554 = browser.currentScene.createNode("Coordinate");
Coordinate1554.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1553.coord = Coordinate1554;

let ColorRGBA1555 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1555.USE = "HAnimSegmentLineColorRGBA";
LineSet1553.color = ColorRGBA1555;

Shape1552.geometry = LineSet1553;

HAnimSegment1548.children[2] = Shape1552;

HAnimJoint1547.children = new MFNode();

HAnimJoint1547.children[0] = HAnimSegment1548;

let HAnimJoint1556 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1556.name = "r_pinky1";
HAnimJoint1556.DEF = "hanim_r_pinky1";
HAnimJoint1556.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1556.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1557 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1557.name = "r_pinky_proximal";
HAnimSegment1557.DEF = "hanim_r_pinky_proximal";
//<HAnimJoint name='r_pinky1'/> visualization sphere is placed within <HAnimSegment name='r_pinky_proximal'/>
let TouchSensor1558 = browser.currentScene.createNode("TouchSensor");
TouchSensor1558.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1557.children = new MFNode();

HAnimSegment1557.children[0] = TouchSensor1558;

let Transform1559 = browser.currentScene.createNode("Transform");
Transform1559.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
let Shape1560 = browser.currentScene.createNode("Shape");
Shape1560.USE = "HAnimJointShape";
Transform1559.children = new MFNode();

Transform1559.children[0] = Shape1560;

HAnimSegment1557.children[1] = Transform1559;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
let Shape1561 = browser.currentScene.createNode("Shape");
let LineSet1562 = browser.currentScene.createNode("LineSet");
LineSet1562.vertexCount = new MFInt32(new int[2]);
let Coordinate1563 = browser.currentScene.createNode("Coordinate");
Coordinate1563.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1562.coord = Coordinate1563;

let ColorRGBA1564 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1564.USE = "HAnimSegmentLineColorRGBA";
LineSet1562.color = ColorRGBA1564;

Shape1561.geometry = LineSet1562;

HAnimSegment1557.children[2] = Shape1561;

HAnimJoint1556.children = new MFNode();

HAnimJoint1556.children[0] = HAnimSegment1557;

let HAnimJoint1565 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1565.name = "r_pinky2";
HAnimJoint1565.DEF = "hanim_r_pinky2";
HAnimJoint1565.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1565.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1566 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1566.name = "r_pinky_middle";
HAnimSegment1566.DEF = "hanim_r_pinky_middle";
//<HAnimJoint name='r_pinky2'/> visualization sphere is placed within <HAnimSegment name='r_pinky_middle'/>
let TouchSensor1567 = browser.currentScene.createNode("TouchSensor");
TouchSensor1567.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1566.children = new MFNode();

HAnimSegment1566.children[0] = TouchSensor1567;

let Transform1568 = browser.currentScene.createNode("Transform");
Transform1568.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
let Shape1569 = browser.currentScene.createNode("Shape");
Shape1569.USE = "HAnimJointShape";
Transform1568.children = new MFNode();

Transform1568.children[0] = Shape1569;

HAnimSegment1566.children[1] = Transform1568;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
let Shape1570 = browser.currentScene.createNode("Shape");
let LineSet1571 = browser.currentScene.createNode("LineSet");
LineSet1571.vertexCount = new MFInt32(new int[2]);
let Coordinate1572 = browser.currentScene.createNode("Coordinate");
Coordinate1572.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1571.coord = Coordinate1572;

let ColorRGBA1573 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1573.USE = "HAnimSegmentLineColorRGBA";
LineSet1571.color = ColorRGBA1573;

Shape1570.geometry = LineSet1571;

HAnimSegment1566.children[2] = Shape1570;

HAnimJoint1565.children = new MFNode();

HAnimJoint1565.children[0] = HAnimSegment1566;

let HAnimJoint1574 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1574.name = "r_pinky3";
HAnimJoint1574.DEF = "hanim_r_pinky3";
HAnimJoint1574.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1574.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1575 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1575.name = "r_pinky_distal";
HAnimSegment1575.DEF = "hanim_r_pinky_distal";
//<HAnimJoint name='r_pinky3'/> visualization sphere is placed within <HAnimSegment name='r_pinky_distal'/>
let TouchSensor1576 = browser.currentScene.createNode("TouchSensor");
TouchSensor1576.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1575.children = new MFNode();

HAnimSegment1575.children[0] = TouchSensor1576;

let Transform1577 = browser.currentScene.createNode("Transform");
Transform1577.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
let Shape1578 = browser.currentScene.createNode("Shape");
Shape1578.USE = "HAnimJointShape";
Transform1577.children = new MFNode();

Transform1577.children[0] = Shape1578;

HAnimSegment1575.children[1] = Transform1577;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
let Shape1579 = browser.currentScene.createNode("Shape");
let LineSet1580 = browser.currentScene.createNode("LineSet");
LineSet1580.vertexCount = new MFInt32(new int[2]);
let Coordinate1581 = browser.currentScene.createNode("Coordinate");
Coordinate1581.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1580.coord = Coordinate1581;

let ColorRGBA1582 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1582.USE = "HAnimSiteLineColorRGBA";
LineSet1580.color = ColorRGBA1582;

Shape1579.geometry = LineSet1580;

HAnimSegment1575.children[2] = Shape1579;

let HAnimSite1583 = browser.currentScene.createNode("HAnimSite");
HAnimSite1583.name = "r_pinky_distal_tip";
HAnimSite1583.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1583.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
let TouchSensor1584 = browser.currentScene.createNode("TouchSensor");
TouchSensor1584.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1583.children = new MFNode();

HAnimSite1583.children[0] = TouchSensor1584;

let Shape1585 = browser.currentScene.createNode("Shape");
Shape1585.USE = "HAnimSiteShape";
HAnimSite1583.children[1] = Shape1585;

HAnimSegment1575.children[3] = HAnimSite1583;

HAnimJoint1574.children = new MFNode();

HAnimJoint1574.children[0] = HAnimSegment1575;

HAnimJoint1565.children[1] = HAnimJoint1574;

HAnimJoint1556.children[1] = HAnimJoint1565;

HAnimJoint1547.children[1] = HAnimJoint1556;

HAnimJoint1335.children[5] = HAnimJoint1547;

HAnimJoint1298.children[1] = HAnimJoint1335;

HAnimJoint1282.children[1] = HAnimJoint1298;

HAnimJoint1273.children[1] = HAnimJoint1282;

HAnimJoint1236.children[1] = HAnimJoint1273;

HAnimJoint598.children[3] = HAnimJoint1236;

HAnimJoint589.children[1] = HAnimJoint598;

HAnimJoint580.children[1] = HAnimJoint589;

HAnimJoint571.children[1] = HAnimJoint580;

HAnimJoint562.children[1] = HAnimJoint571;

HAnimJoint553.children[1] = HAnimJoint562;

HAnimJoint544.children[1] = HAnimJoint553;

HAnimJoint535.children[1] = HAnimJoint544;

HAnimJoint512.children[1] = HAnimJoint535;

HAnimJoint496.children[1] = HAnimJoint512;

HAnimJoint487.children[1] = HAnimJoint496;

HAnimJoint478.children[1] = HAnimJoint487;

HAnimJoint469.children[1] = HAnimJoint478;

HAnimJoint439.children[1] = HAnimJoint469;

HAnimJoint430.children[1] = HAnimJoint439;

HAnimJoint421.children[1] = HAnimJoint430;

HAnimJoint398.children[1] = HAnimJoint421;

HAnimJoint48.children[2] = HAnimJoint398;

HAnimHumanoid47.joints = new MFNode();

HAnimHumanoid47.joints[0] = HAnimJoint48;

let HAnimSite1586 = browser.currentScene.createNode("HAnimSite");
HAnimSite1586.name = "l_inclined_view";
HAnimSite1586.DEF = "hanim_l_inclined_view";
HAnimSite1586.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1586.translation = new SFVec3f(new float[1.62,1.05,2.06]);
//HAnimSite visualization shape
let TouchSensor1587 = browser.currentScene.createNode("TouchSensor");
TouchSensor1587.description = "HAnimSite l_inclined_view";
HAnimSite1586.children = new MFNode();

HAnimSite1586.children[0] = TouchSensor1587;

let Shape1588 = browser.currentScene.createNode("Shape");
Shape1588.USE = "HAnimSiteShape";
HAnimSite1586.children[1] = Shape1588;

let Viewpoint1589 = browser.currentScene.createNode("Viewpoint");
Viewpoint1589.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1589.description = "left inclined";
Viewpoint1589.position = new SFVec3f(new float[0,0,0]);
HAnimSite1586.children[2] = Viewpoint1589;

//HAnimSite/Viewpoint visualization shape
let Anchor1590 = browser.currentScene.createNode("Anchor");
Anchor1590.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1590.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
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

HAnimSite1586.children[3] = Anchor1590;

HAnimHumanoid47.viewpoints[1] = HAnimSite1586;

let HAnimSite1594 = browser.currentScene.createNode("HAnimSite");
HAnimSite1594.name = "r_inclined_view";
HAnimSite1594.DEF = "hanim_r_inclined_view";
HAnimSite1594.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1594.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
//HAnimSite visualization shape
let TouchSensor1595 = browser.currentScene.createNode("TouchSensor");
TouchSensor1595.description = "HAnimSite r_inclined_view";
HAnimSite1594.children = new MFNode();

HAnimSite1594.children[0] = TouchSensor1595;

let Shape1596 = browser.currentScene.createNode("Shape");
Shape1596.USE = "HAnimSiteShape";
HAnimSite1594.children[1] = Shape1596;

let Viewpoint1597 = browser.currentScene.createNode("Viewpoint");
Viewpoint1597.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1597.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1597.description = "right inclined";
Viewpoint1597.position = new SFVec3f(new float[0,0,0]);
HAnimSite1594.children[2] = Viewpoint1597;

//HAnimSite/Viewpoint visualization shape
let Anchor1598 = browser.currentScene.createNode("Anchor");
Anchor1598.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1598.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
let LOD1599 = browser.currentScene.createNode("LOD");
LOD1599.forceTransitions = True;
LOD1599.range = new MFFloat(new float[0.04]);
let WorldInfo1600 = browser.currentScene.createNode("WorldInfo");
WorldInfo1600.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1599.children = new MFNode();

LOD1599.children[0] = WorldInfo1600;

let Shape1601 = browser.currentScene.createNode("Shape");
Shape1601.USE = "HAnimSiteViewpointShape";
LOD1599.children[1] = Shape1601;

Anchor1598.children = new MFNode();

Anchor1598.children[0] = LOD1599;

HAnimSite1594.children[3] = Anchor1598;

HAnimHumanoid47.viewpoints[2] = HAnimSite1594;

let HAnimSite1602 = browser.currentScene.createNode("HAnimSite");
HAnimSite1602.name = "front_view";
HAnimSite1602.DEF = "hanim_front_view";
HAnimSite1602.translation = new SFVec3f(new float[0,0.85,2.58]);
//HAnimSite visualization shape
let TouchSensor1603 = browser.currentScene.createNode("TouchSensor");
TouchSensor1603.description = "HAnimSite front_view";
HAnimSite1602.children = new MFNode();

HAnimSite1602.children[0] = TouchSensor1603;

let Shape1604 = browser.currentScene.createNode("Shape");
Shape1604.USE = "HAnimSiteShape";
HAnimSite1602.children[1] = Shape1604;

let Viewpoint1605 = browser.currentScene.createNode("Viewpoint");
Viewpoint1605.DEF = "hanim_front_viewpoint";
Viewpoint1605.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1605.description = "front";
Viewpoint1605.position = new SFVec3f(new float[0,0,0]);
HAnimSite1602.children[2] = Viewpoint1605;

//HAnimSite/Viewpoint visualization shape
let Anchor1606 = browser.currentScene.createNode("Anchor");
Anchor1606.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1606.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
let LOD1607 = browser.currentScene.createNode("LOD");
LOD1607.forceTransitions = True;
LOD1607.range = new MFFloat(new float[0.04]);
let WorldInfo1608 = browser.currentScene.createNode("WorldInfo");
WorldInfo1608.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1607.children = new MFNode();

LOD1607.children[0] = WorldInfo1608;

let Shape1609 = browser.currentScene.createNode("Shape");
Shape1609.USE = "HAnimSiteViewpointShape";
LOD1607.children[1] = Shape1609;

Anchor1606.children = new MFNode();

Anchor1606.children[0] = LOD1607;

HAnimSite1602.children[3] = Anchor1606;

HAnimHumanoid47.viewpoints[3] = HAnimSite1602;

let HAnimSite1610 = browser.currentScene.createNode("HAnimSite");
HAnimSite1610.name = "back_view";
HAnimSite1610.DEF = "hanim_back_view";
HAnimSite1610.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1610.translation = new SFVec3f(new float[0,0.85,-2.58]);
//HAnimSite visualization shape
let TouchSensor1611 = browser.currentScene.createNode("TouchSensor");
TouchSensor1611.description = "HAnimSite back_view";
HAnimSite1610.children = new MFNode();

HAnimSite1610.children[0] = TouchSensor1611;

let Shape1612 = browser.currentScene.createNode("Shape");
Shape1612.USE = "HAnimSiteShape";
HAnimSite1610.children[1] = Shape1612;

let Viewpoint1613 = browser.currentScene.createNode("Viewpoint");
Viewpoint1613.DEF = "hanim_back_viewpoint";
Viewpoint1613.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1613.description = "back";
Viewpoint1613.position = new SFVec3f(new float[0,0,0]);
HAnimSite1610.children[2] = Viewpoint1613;

//HAnimSite/Viewpoint visualization shape
let Anchor1614 = browser.currentScene.createNode("Anchor");
Anchor1614.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1614.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
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

HAnimSite1610.children[3] = Anchor1614;

HAnimHumanoid47.viewpoints[4] = HAnimSite1610;

let HAnimSite1618 = browser.currentScene.createNode("HAnimSite");
HAnimSite1618.name = "l_side_view";
HAnimSite1618.DEF = "hanim_l_side_view";
HAnimSite1618.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1618.translation = new SFVec3f(new float[2.6,0.854,0]);
//HAnimSite visualization shape
let TouchSensor1619 = browser.currentScene.createNode("TouchSensor");
TouchSensor1619.description = "HAnimSite l_side_view";
HAnimSite1618.children = new MFNode();

HAnimSite1618.children[0] = TouchSensor1619;

let Shape1620 = browser.currentScene.createNode("Shape");
Shape1620.USE = "HAnimSiteShape";
HAnimSite1618.children[1] = Shape1620;

let Viewpoint1621 = browser.currentScene.createNode("Viewpoint");
Viewpoint1621.DEF = "hanim_l_side_viewpoint";
Viewpoint1621.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1621.description = "left side";
Viewpoint1621.position = new SFVec3f(new float[0,0,0]);
HAnimSite1618.children[2] = Viewpoint1621;

//HAnimSite/Viewpoint visualization shape
let Anchor1622 = browser.currentScene.createNode("Anchor");
Anchor1622.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1622.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
let LOD1623 = browser.currentScene.createNode("LOD");
LOD1623.forceTransitions = True;
LOD1623.range = new MFFloat(new float[0.04]);
let WorldInfo1624 = browser.currentScene.createNode("WorldInfo");
WorldInfo1624.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1623.children = new MFNode();

LOD1623.children[0] = WorldInfo1624;

let Shape1625 = browser.currentScene.createNode("Shape");
Shape1625.USE = "HAnimSiteViewpointShape";
LOD1623.children[1] = Shape1625;

Anchor1622.children = new MFNode();

Anchor1622.children[0] = LOD1623;

HAnimSite1618.children[3] = Anchor1622;

HAnimHumanoid47.viewpoints[5] = HAnimSite1618;

let HAnimSite1626 = browser.currentScene.createNode("HAnimSite");
HAnimSite1626.name = "Top_view";
HAnimSite1626.DEF = "hanim_Top_view";
HAnimSite1626.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1626.translation = new SFVec3f(new float[0,3.5,0]);
//HAnimSite visualization shape
let TouchSensor1627 = browser.currentScene.createNode("TouchSensor");
TouchSensor1627.description = "HAnimSite Top_view";
HAnimSite1626.children = new MFNode();

HAnimSite1626.children[0] = TouchSensor1627;

let Shape1628 = browser.currentScene.createNode("Shape");
Shape1628.USE = "HAnimSiteShape";
HAnimSite1626.children[1] = Shape1628;

let Viewpoint1629 = browser.currentScene.createNode("Viewpoint");
Viewpoint1629.DEF = "hanim_Top_viewpoint";
Viewpoint1629.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1629.description = "Top";
Viewpoint1629.position = new SFVec3f(new float[0,0,0]);
HAnimSite1626.children[2] = Viewpoint1629;

//HAnimSite/Viewpoint visualization shape
let Anchor1630 = browser.currentScene.createNode("Anchor");
Anchor1630.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1630.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
let LOD1631 = browser.currentScene.createNode("LOD");
LOD1631.forceTransitions = True;
LOD1631.range = new MFFloat(new float[0.04]);
let WorldInfo1632 = browser.currentScene.createNode("WorldInfo");
WorldInfo1632.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1631.children = new MFNode();

LOD1631.children[0] = WorldInfo1632;

let Shape1633 = browser.currentScene.createNode("Shape");
Shape1633.USE = "HAnimSiteViewpointShape";
LOD1631.children[1] = Shape1633;

Anchor1630.children = new MFNode();

Anchor1630.children[0] = LOD1631;

HAnimSite1626.children[3] = Anchor1630;

HAnimHumanoid47.viewpoints[6] = HAnimSite1626;

let HAnimSite1634 = browser.currentScene.createNode("HAnimSite");
HAnimSite1634.name = "front_close_view";
HAnimSite1634.DEF = "hanim_front_close_view";
HAnimSite1634.translation = new SFVec3f(new float[0,0.854,1.575]);
//HAnimSite visualization shape
let TouchSensor1635 = browser.currentScene.createNode("TouchSensor");
TouchSensor1635.description = "HAnimSite front_close_view";
HAnimSite1634.children = new MFNode();

HAnimSite1634.children[0] = TouchSensor1635;

let Shape1636 = browser.currentScene.createNode("Shape");
Shape1636.USE = "HAnimSiteShape";
HAnimSite1634.children[1] = Shape1636;

let Viewpoint1637 = browser.currentScene.createNode("Viewpoint");
Viewpoint1637.DEF = "hanim_front_close_viewpoint";
Viewpoint1637.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1637.description = "front close";
Viewpoint1637.position = new SFVec3f(new float[0,0,0]);
HAnimSite1634.children[2] = Viewpoint1637;

//HAnimSite/Viewpoint visualization shape
let Anchor1638 = browser.currentScene.createNode("Anchor");
Anchor1638.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1638.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
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

HAnimSite1634.children[3] = Anchor1638;

HAnimHumanoid47.viewpoints[7] = HAnimSite1634;

let HAnimSite1642 = browser.currentScene.createNode("HAnimSite");
HAnimSite1642.name = "side_close_view";
HAnimSite1642.DEF = "hanim_side_close_view";
HAnimSite1642.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1642.translation = new SFVec3f(new float[1.56,0.854,0]);
//HAnimSite visualization shape
let TouchSensor1643 = browser.currentScene.createNode("TouchSensor");
TouchSensor1643.description = "HAnimSite side_close_view";
HAnimSite1642.children = new MFNode();

HAnimSite1642.children[0] = TouchSensor1643;

let Shape1644 = browser.currentScene.createNode("Shape");
Shape1644.USE = "HAnimSiteShape";
HAnimSite1642.children[1] = Shape1644;

let Viewpoint1645 = browser.currentScene.createNode("Viewpoint");
Viewpoint1645.DEF = "hanim_side_close_viewpoint";
Viewpoint1645.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1645.description = "side close";
Viewpoint1645.position = new SFVec3f(new float[0,0,0]);
HAnimSite1642.children[2] = Viewpoint1645;

//HAnimSite/Viewpoint visualization shape
let Anchor1646 = browser.currentScene.createNode("Anchor");
Anchor1646.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1646.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
let LOD1647 = browser.currentScene.createNode("LOD");
LOD1647.forceTransitions = True;
LOD1647.range = new MFFloat(new float[0.04]);
let WorldInfo1648 = browser.currentScene.createNode("WorldInfo");
WorldInfo1648.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1647.children = new MFNode();

LOD1647.children[0] = WorldInfo1648;

let Shape1649 = browser.currentScene.createNode("Shape");
Shape1649.USE = "HAnimSiteViewpointShape";
LOD1647.children[1] = Shape1649;

Anchor1646.children = new MFNode();

Anchor1646.children[0] = LOD1647;

HAnimSite1642.children[3] = Anchor1646;

HAnimHumanoid47.viewpoints[8] = HAnimSite1642;

let HAnimSite1650 = browser.currentScene.createNode("HAnimSite");
HAnimSite1650.name = "head_front_close_view";
HAnimSite1650.DEF = "hanim_head_front_close_view";
HAnimSite1650.translation = new SFVec3f(new float[0,1.5,1]);
//HAnimSite visualization shape
let TouchSensor1651 = browser.currentScene.createNode("TouchSensor");
TouchSensor1651.description = "HAnimSite head_front_close_view";
HAnimSite1650.children = new MFNode();

HAnimSite1650.children[0] = TouchSensor1651;

let Shape1652 = browser.currentScene.createNode("Shape");
Shape1652.USE = "HAnimSiteShape";
HAnimSite1650.children[1] = Shape1652;

let Viewpoint1653 = browser.currentScene.createNode("Viewpoint");
Viewpoint1653.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1653.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1653.description = "head front close";
Viewpoint1653.position = new SFVec3f(new float[0,0,0]);
HAnimSite1650.children[2] = Viewpoint1653;

//HAnimSite/Viewpoint visualization shape
let Anchor1654 = browser.currentScene.createNode("Anchor");
Anchor1654.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1654.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
let LOD1655 = browser.currentScene.createNode("LOD");
LOD1655.forceTransitions = True;
LOD1655.range = new MFFloat(new float[0.04]);
let WorldInfo1656 = browser.currentScene.createNode("WorldInfo");
WorldInfo1656.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1655.children = new MFNode();

LOD1655.children[0] = WorldInfo1656;

let Shape1657 = browser.currentScene.createNode("Shape");
Shape1657.USE = "HAnimSiteViewpointShape";
LOD1655.children[1] = Shape1657;

Anchor1654.children = new MFNode();

Anchor1654.children[0] = LOD1655;

HAnimSite1650.children[3] = Anchor1654;

HAnimHumanoid47.viewpoints[9] = HAnimSite1650;

let HAnimSite1658 = browser.currentScene.createNode("HAnimSite");
HAnimSite1658.name = "chest_front_close_view";
HAnimSite1658.DEF = "hanim_chest_front_close_view";
HAnimSite1658.translation = new SFVec3f(new float[0,1.2,1]);
//HAnimSite visualization shape
let TouchSensor1659 = browser.currentScene.createNode("TouchSensor");
TouchSensor1659.description = "HAnimSite chest_front_close_view";
HAnimSite1658.children = new MFNode();

HAnimSite1658.children[0] = TouchSensor1659;

let Shape1660 = browser.currentScene.createNode("Shape");
Shape1660.USE = "HAnimSiteShape";
HAnimSite1658.children[1] = Shape1660;

let Viewpoint1661 = browser.currentScene.createNode("Viewpoint");
Viewpoint1661.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1661.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1661.description = "chest front close";
Viewpoint1661.position = new SFVec3f(new float[0,0,0]);
HAnimSite1658.children[2] = Viewpoint1661;

//HAnimSite/Viewpoint visualization shape
let Anchor1662 = browser.currentScene.createNode("Anchor");
Anchor1662.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1662.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
let LOD1663 = browser.currentScene.createNode("LOD");
LOD1663.forceTransitions = True;
LOD1663.range = new MFFloat(new float[0.04]);
let WorldInfo1664 = browser.currentScene.createNode("WorldInfo");
WorldInfo1664.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1663.children = new MFNode();

LOD1663.children[0] = WorldInfo1664;

let Shape1665 = browser.currentScene.createNode("Shape");
Shape1665.USE = "HAnimSiteViewpointShape";
LOD1663.children[1] = Shape1665;

Anchor1662.children = new MFNode();

Anchor1662.children[0] = LOD1663;

HAnimSite1658.children[3] = Anchor1662;

HAnimHumanoid47.viewpoints[10] = HAnimSite1658;

let HAnimSite1666 = browser.currentScene.createNode("HAnimSite");
HAnimSite1666.name = "pelvis_front_close_view";
HAnimSite1666.DEF = "hanim_pelvis_front_close_view";
HAnimSite1666.translation = new SFVec3f(new float[0,0.8,1]);
//HAnimSite visualization shape
let TouchSensor1667 = browser.currentScene.createNode("TouchSensor");
TouchSensor1667.description = "HAnimSite pelvis_front_close_view";
HAnimSite1666.children = new MFNode();

HAnimSite1666.children[0] = TouchSensor1667;

let Shape1668 = browser.currentScene.createNode("Shape");
Shape1668.USE = "HAnimSiteShape";
HAnimSite1666.children[1] = Shape1668;

let Viewpoint1669 = browser.currentScene.createNode("Viewpoint");
Viewpoint1669.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1669.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1669.description = "pelvis front close";
Viewpoint1669.position = new SFVec3f(new float[0,0,0]);
HAnimSite1666.children[2] = Viewpoint1669;

//HAnimSite/Viewpoint visualization shape
let Anchor1670 = browser.currentScene.createNode("Anchor");
Anchor1670.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1670.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
let LOD1671 = browser.currentScene.createNode("LOD");
LOD1671.forceTransitions = True;
LOD1671.range = new MFFloat(new float[0.04]);
let WorldInfo1672 = browser.currentScene.createNode("WorldInfo");
WorldInfo1672.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1671.children = new MFNode();

LOD1671.children[0] = WorldInfo1672;

let Shape1673 = browser.currentScene.createNode("Shape");
Shape1673.USE = "HAnimSiteViewpointShape";
LOD1671.children[1] = Shape1673;

Anchor1670.children = new MFNode();

Anchor1670.children[0] = LOD1671;

HAnimSite1666.children[3] = Anchor1670;

HAnimHumanoid47.viewpoints[11] = HAnimSite1666;

let HAnimSite1674 = browser.currentScene.createNode("HAnimSite");
HAnimSite1674.name = "knees_front_close_view";
HAnimSite1674.DEF = "hanim_knees_front_close_view";
HAnimSite1674.translation = new SFVec3f(new float[0,0.4,1]);
//HAnimSite visualization shape
let TouchSensor1675 = browser.currentScene.createNode("TouchSensor");
TouchSensor1675.description = "HAnimSite knees_front_close_view";
HAnimSite1674.children = new MFNode();

HAnimSite1674.children[0] = TouchSensor1675;

let Shape1676 = browser.currentScene.createNode("Shape");
Shape1676.USE = "HAnimSiteShape";
HAnimSite1674.children[1] = Shape1676;

let Viewpoint1677 = browser.currentScene.createNode("Viewpoint");
Viewpoint1677.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1677.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1677.description = "knees front close";
Viewpoint1677.position = new SFVec3f(new float[0,0,0]);
HAnimSite1674.children[2] = Viewpoint1677;

//HAnimSite/Viewpoint visualization shape
let Anchor1678 = browser.currentScene.createNode("Anchor");
Anchor1678.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1678.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
let LOD1679 = browser.currentScene.createNode("LOD");
LOD1679.forceTransitions = True;
LOD1679.range = new MFFloat(new float[0.04]);
let WorldInfo1680 = browser.currentScene.createNode("WorldInfo");
WorldInfo1680.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1679.children = new MFNode();

LOD1679.children[0] = WorldInfo1680;

let Shape1681 = browser.currentScene.createNode("Shape");
Shape1681.USE = "HAnimSiteViewpointShape";
LOD1679.children[1] = Shape1681;

Anchor1678.children = new MFNode();

Anchor1678.children[0] = LOD1679;

HAnimSite1674.children[3] = Anchor1678;

HAnimHumanoid47.viewpoints[12] = HAnimSite1674;

let HAnimSite1682 = browser.currentScene.createNode("HAnimSite");
HAnimSite1682.name = "feet_front_close_view";
HAnimSite1682.DEF = "hanim_feet_front_close_view";
HAnimSite1682.translation = new SFVec3f(new float[0,0,1]);
//HAnimSite visualization shape
let TouchSensor1683 = browser.currentScene.createNode("TouchSensor");
TouchSensor1683.description = "HAnimSite feet_front_close_view";
HAnimSite1682.children = new MFNode();

HAnimSite1682.children[0] = TouchSensor1683;

let Shape1684 = browser.currentScene.createNode("Shape");
Shape1684.USE = "HAnimSiteShape";
HAnimSite1682.children[1] = Shape1684;

let Viewpoint1685 = browser.currentScene.createNode("Viewpoint");
Viewpoint1685.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1685.description = "feet front close";
Viewpoint1685.position = new SFVec3f(new float[0,0,0]);
HAnimSite1682.children[2] = Viewpoint1685;

//HAnimSite/Viewpoint visualization shape
let Anchor1686 = browser.currentScene.createNode("Anchor");
Anchor1686.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1686.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
let LOD1687 = browser.currentScene.createNode("LOD");
LOD1687.forceTransitions = True;
LOD1687.range = new MFFloat(new float[0.04]);
let WorldInfo1688 = browser.currentScene.createNode("WorldInfo");
WorldInfo1688.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1687.children = new MFNode();

LOD1687.children[0] = WorldInfo1688;

let Shape1689 = browser.currentScene.createNode("Shape");
Shape1689.USE = "HAnimSiteViewpointShape";
LOD1687.children[1] = Shape1689;

Anchor1686.children = new MFNode();

Anchor1686.children[0] = LOD1687;

HAnimSite1682.children[3] = Anchor1686;

HAnimHumanoid47.viewpoints[13] = HAnimSite1682;

let HAnimSite1690 = browser.currentScene.createNode("HAnimSite");
HAnimSite1690.name = "eye_level_view";
HAnimSite1690.DEF = "hanim_eye_level_view";
HAnimSite1690.translation = new SFVec3f(new float[0,1.6332,0.0502]);
//HAnimSite visualization shape
let TouchSensor1691 = browser.currentScene.createNode("TouchSensor");
TouchSensor1691.description = "HAnimSite eye_level_view";
HAnimSite1690.children = new MFNode();

HAnimSite1690.children[0] = TouchSensor1691;

let Shape1692 = browser.currentScene.createNode("Shape");
Shape1692.USE = "HAnimSiteShape";
HAnimSite1690.children[1] = Shape1692;

let Viewpoint1693 = browser.currentScene.createNode("Viewpoint");
Viewpoint1693.DEF = "hanim_eye_level_viewpoint";
Viewpoint1693.description = "eye level looking forward";
Viewpoint1693.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1693.position = new SFVec3f(new float[0,0,0]);
HAnimSite1690.children[2] = Viewpoint1693;

//HAnimSite/Viewpoint visualization shape
let Anchor1694 = browser.currentScene.createNode("Anchor");
Anchor1694.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1694.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
let LOD1695 = browser.currentScene.createNode("LOD");
LOD1695.forceTransitions = True;
LOD1695.range = new MFFloat(new float[0.04]);
let WorldInfo1696 = browser.currentScene.createNode("WorldInfo");
WorldInfo1696.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1695.children = new MFNode();

LOD1695.children[0] = WorldInfo1696;

let Shape1697 = browser.currentScene.createNode("Shape");
Shape1697.USE = "HAnimSiteViewpointShape";
LOD1695.children[1] = Shape1697;

Anchor1694.children = new MFNode();

Anchor1694.children[0] = LOD1695;

HAnimSite1690.children[3] = Anchor1694;

HAnimHumanoid47.viewpoints[14] = HAnimSite1690;

let HAnimSite1698 = browser.currentScene.createNode("HAnimSite");
HAnimSite1698.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid47.viewpoints[15] = HAnimSite1698;

let HAnimSite1699 = browser.currentScene.createNode("HAnimSite");
HAnimSite1699.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid47.viewpoints[16] = HAnimSite1699;

let HAnimSite1700 = browser.currentScene.createNode("HAnimSite");
HAnimSite1700.USE = "hanim_l_hand_front_view";
HAnimHumanoid47.viewpoints[17] = HAnimSite1700;

let HAnimSite1701 = browser.currentScene.createNode("HAnimSite");
HAnimSite1701.USE = "hanim_r_hand_front_view";
HAnimHumanoid47.viewpoints[18] = HAnimSite1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_humanoid_root";
HAnimHumanoid47.joints[19] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_sacroiliac";
HAnimHumanoid47.joints[20] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_vl5";
HAnimHumanoid47.joints[21] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_vl4";
HAnimHumanoid47.joints[22] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_vl3";
HAnimHumanoid47.joints[23] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_vl2";
HAnimHumanoid47.joints[24] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_vl1";
HAnimHumanoid47.joints[25] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_vt12";
HAnimHumanoid47.joints[26] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_vt11";
HAnimHumanoid47.joints[27] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_vt10";
HAnimHumanoid47.joints[28] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_vt9";
HAnimHumanoid47.joints[29] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_vt8";
HAnimHumanoid47.joints[30] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_vt7";
HAnimHumanoid47.joints[31] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_vt6";
HAnimHumanoid47.joints[32] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_vt5";
HAnimHumanoid47.joints[33] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_vt4";
HAnimHumanoid47.joints[34] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_vt3";
HAnimHumanoid47.joints[35] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_vt2";
HAnimHumanoid47.joints[36] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_vt1";
HAnimHumanoid47.joints[37] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_vc7";
HAnimHumanoid47.joints[38] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_vc6";
HAnimHumanoid47.joints[39] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_vc5";
HAnimHumanoid47.joints[40] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_vc4";
HAnimHumanoid47.joints[41] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_vc3";
HAnimHumanoid47.joints[42] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_vc2";
HAnimHumanoid47.joints[43] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_vc1";
HAnimHumanoid47.joints[44] = HAnimJoint1727;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_skullbase";
HAnimHumanoid47.joints[45] = HAnimJoint1728;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_temporomandibular";
HAnimHumanoid47.joints[46] = HAnimJoint1729;

let HAnimJoint1730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_l_acromioclavicular";
HAnimHumanoid47.joints[47] = HAnimJoint1730;

let HAnimJoint1731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_acromioclavicular";
HAnimHumanoid47.joints[48] = HAnimJoint1731;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_l_ankle";
HAnimHumanoid47.joints[49] = HAnimJoint1732;

let HAnimJoint1733 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_ankle";
HAnimHumanoid47.joints[50] = HAnimJoint1733;

let HAnimJoint1734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_l_elbow";
HAnimHumanoid47.joints[51] = HAnimJoint1734;

let HAnimJoint1735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_elbow";
HAnimHumanoid47.joints[52] = HAnimJoint1735;

let HAnimJoint1736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_l_eyeball_joint";
HAnimHumanoid47.joints[53] = HAnimJoint1736;

let HAnimJoint1737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_eyeball_joint";
HAnimHumanoid47.joints[54] = HAnimJoint1737;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid47.joints[55] = HAnimJoint1738;

let HAnimJoint1739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid47.joints[56] = HAnimJoint1739;

let HAnimJoint1740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_l_eyelid_joint";
HAnimHumanoid47.joints[57] = HAnimJoint1740;

let HAnimJoint1741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_eyelid_joint";
HAnimHumanoid47.joints[58] = HAnimJoint1741;

let HAnimJoint1742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_l_hip";
HAnimHumanoid47.joints[59] = HAnimJoint1742;

let HAnimJoint1743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_hip";
HAnimHumanoid47.joints[60] = HAnimJoint1743;

let HAnimJoint1744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_l_index0";
HAnimHumanoid47.joints[61] = HAnimJoint1744;

let HAnimJoint1745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_index0";
HAnimHumanoid47.joints[62] = HAnimJoint1745;

let HAnimJoint1746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_l_index1";
HAnimHumanoid47.joints[63] = HAnimJoint1746;

let HAnimJoint1747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_r_index1";
HAnimHumanoid47.joints[64] = HAnimJoint1747;

let HAnimJoint1748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_l_index2";
HAnimHumanoid47.joints[65] = HAnimJoint1748;

let HAnimJoint1749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_r_index2";
HAnimHumanoid47.joints[66] = HAnimJoint1749;

let HAnimJoint1750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_l_index3";
HAnimHumanoid47.joints[67] = HAnimJoint1750;

let HAnimJoint1751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_r_index3";
HAnimHumanoid47.joints[68] = HAnimJoint1751;

let HAnimJoint1752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_l_knee";
HAnimHumanoid47.joints[69] = HAnimJoint1752;

let HAnimJoint1753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_r_knee";
HAnimHumanoid47.joints[70] = HAnimJoint1753;

let HAnimJoint1754 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_l_metatarsal";
HAnimHumanoid47.joints[71] = HAnimJoint1754;

let HAnimJoint1755 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_r_metatarsal";
HAnimHumanoid47.joints[72] = HAnimJoint1755;

let HAnimJoint1756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_l_middle0";
HAnimHumanoid47.joints[73] = HAnimJoint1756;

let HAnimJoint1757 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1757.USE = "hanim_r_middle0";
HAnimHumanoid47.joints[74] = HAnimJoint1757;

let HAnimJoint1758 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1758.USE = "hanim_l_middle1";
HAnimHumanoid47.joints[75] = HAnimJoint1758;

let HAnimJoint1759 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1759.USE = "hanim_r_middle1";
HAnimHumanoid47.joints[76] = HAnimJoint1759;

let HAnimJoint1760 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1760.USE = "hanim_l_middle2";
HAnimHumanoid47.joints[77] = HAnimJoint1760;

let HAnimJoint1761 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1761.USE = "hanim_r_middle2";
HAnimHumanoid47.joints[78] = HAnimJoint1761;

let HAnimJoint1762 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1762.USE = "hanim_l_middle3";
HAnimHumanoid47.joints[79] = HAnimJoint1762;

let HAnimJoint1763 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1763.USE = "hanim_r_middle3";
HAnimHumanoid47.joints[80] = HAnimJoint1763;

let HAnimJoint1764 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1764.USE = "hanim_l_midtarsal";
HAnimHumanoid47.joints[81] = HAnimJoint1764;

let HAnimJoint1765 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1765.USE = "hanim_r_midtarsal";
HAnimHumanoid47.joints[82] = HAnimJoint1765;

let HAnimJoint1766 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1766.USE = "hanim_l_pinky0";
HAnimHumanoid47.joints[83] = HAnimJoint1766;

let HAnimJoint1767 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1767.USE = "hanim_r_pinky0";
HAnimHumanoid47.joints[84] = HAnimJoint1767;

let HAnimJoint1768 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1768.USE = "hanim_l_pinky1";
HAnimHumanoid47.joints[85] = HAnimJoint1768;

let HAnimJoint1769 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1769.USE = "hanim_r_pinky1";
HAnimHumanoid47.joints[86] = HAnimJoint1769;

let HAnimJoint1770 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1770.USE = "hanim_l_pinky2";
HAnimHumanoid47.joints[87] = HAnimJoint1770;

let HAnimJoint1771 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1771.USE = "hanim_r_pinky2";
HAnimHumanoid47.joints[88] = HAnimJoint1771;

let HAnimJoint1772 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1772.USE = "hanim_l_pinky3";
HAnimHumanoid47.joints[89] = HAnimJoint1772;

let HAnimJoint1773 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1773.USE = "hanim_r_pinky3";
HAnimHumanoid47.joints[90] = HAnimJoint1773;

let HAnimJoint1774 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1774.USE = "hanim_l_ring0";
HAnimHumanoid47.joints[91] = HAnimJoint1774;

let HAnimJoint1775 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1775.USE = "hanim_r_ring0";
HAnimHumanoid47.joints[92] = HAnimJoint1775;

let HAnimJoint1776 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1776.USE = "hanim_l_ring1";
HAnimHumanoid47.joints[93] = HAnimJoint1776;

let HAnimJoint1777 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1777.USE = "hanim_r_ring1";
HAnimHumanoid47.joints[94] = HAnimJoint1777;

let HAnimJoint1778 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1778.USE = "hanim_l_ring2";
HAnimHumanoid47.joints[95] = HAnimJoint1778;

let HAnimJoint1779 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1779.USE = "hanim_r_ring2";
HAnimHumanoid47.joints[96] = HAnimJoint1779;

let HAnimJoint1780 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1780.USE = "hanim_l_ring3";
HAnimHumanoid47.joints[97] = HAnimJoint1780;

let HAnimJoint1781 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1781.USE = "hanim_r_ring3";
HAnimHumanoid47.joints[98] = HAnimJoint1781;

let HAnimJoint1782 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1782.USE = "hanim_l_shoulder";
HAnimHumanoid47.joints[99] = HAnimJoint1782;

let HAnimJoint1783 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1783.USE = "hanim_r_shoulder";
HAnimHumanoid47.joints[100] = HAnimJoint1783;

let HAnimJoint1784 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1784.USE = "hanim_l_sternoclavicular";
HAnimHumanoid47.joints[101] = HAnimJoint1784;

let HAnimJoint1785 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1785.USE = "hanim_r_sternoclavicular";
HAnimHumanoid47.joints[102] = HAnimJoint1785;

let HAnimJoint1786 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1786.USE = "hanim_l_subtalar";
HAnimHumanoid47.joints[103] = HAnimJoint1786;

let HAnimJoint1787 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1787.USE = "hanim_r_subtalar";
HAnimHumanoid47.joints[104] = HAnimJoint1787;

let HAnimJoint1788 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1788.USE = "hanim_l_thumb1";
HAnimHumanoid47.joints[105] = HAnimJoint1788;

let HAnimJoint1789 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1789.USE = "hanim_r_thumb1";
HAnimHumanoid47.joints[106] = HAnimJoint1789;

let HAnimJoint1790 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1790.USE = "hanim_l_thumb2";
HAnimHumanoid47.joints[107] = HAnimJoint1790;

let HAnimJoint1791 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1791.USE = "hanim_r_thumb2";
HAnimHumanoid47.joints[108] = HAnimJoint1791;

let HAnimJoint1792 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1792.USE = "hanim_l_thumb3";
HAnimHumanoid47.joints[109] = HAnimJoint1792;

let HAnimJoint1793 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1793.USE = "hanim_r_thumb3";
HAnimHumanoid47.joints[110] = HAnimJoint1793;

let HAnimJoint1794 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1794.USE = "hanim_l_wrist";
HAnimHumanoid47.joints[111] = HAnimJoint1794;

let HAnimJoint1795 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1795.USE = "hanim_r_wrist";
HAnimHumanoid47.joints[112] = HAnimJoint1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_pelvis";
HAnimHumanoid47.segments[113] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_skull";
HAnimHumanoid47.segments[114] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_jaw";
HAnimHumanoid47.segments[115] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_c1";
HAnimHumanoid47.segments[116] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_c2";
HAnimHumanoid47.segments[117] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_c3";
HAnimHumanoid47.segments[118] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_c4";
HAnimHumanoid47.segments[119] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_c5";
HAnimHumanoid47.segments[120] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_c6";
HAnimHumanoid47.segments[121] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_c7";
HAnimHumanoid47.segments[122] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_t1";
HAnimHumanoid47.segments[123] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_t2";
HAnimHumanoid47.segments[124] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_t3";
HAnimHumanoid47.segments[125] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_t4";
HAnimHumanoid47.segments[126] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t5";
HAnimHumanoid47.segments[127] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_t6";
HAnimHumanoid47.segments[128] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_t7";
HAnimHumanoid47.segments[129] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_t8";
HAnimHumanoid47.segments[130] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_t9";
HAnimHumanoid47.segments[131] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_t10";
HAnimHumanoid47.segments[132] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_t11";
HAnimHumanoid47.segments[133] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_t12";
HAnimHumanoid47.segments[134] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_l1";
HAnimHumanoid47.segments[135] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_l2";
HAnimHumanoid47.segments[136] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l3";
HAnimHumanoid47.segments[137] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_l4";
HAnimHumanoid47.segments[138] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l5";
HAnimHumanoid47.segments[139] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_sacrum";
HAnimHumanoid47.segments[140] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l_calf";
HAnimHumanoid47.segments[141] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_r_calf";
HAnimHumanoid47.segments[142] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l_clavicle";
HAnimHumanoid47.segments[143] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_r_clavicle";
HAnimHumanoid47.segments[144] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_eyeball";
HAnimHumanoid47.segments[145] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_r_eyeball";
HAnimHumanoid47.segments[146] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_eyebrow";
HAnimHumanoid47.segments[147] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_r_eyebrow";
HAnimHumanoid47.segments[148] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_eyelid";
HAnimHumanoid47.segments[149] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_r_eyelid";
HAnimHumanoid47.segments[150] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_forearm";
HAnimHumanoid47.segments[151] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_r_forearm";
HAnimHumanoid47.segments[152] = HAnimSegment1835;

let HAnimSegment1836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_forefoot";
HAnimHumanoid47.segments[153] = HAnimSegment1836;

let HAnimSegment1837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_r_forefoot";
HAnimHumanoid47.segments[154] = HAnimSegment1837;

let HAnimSegment1838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_hand";
HAnimHumanoid47.segments[155] = HAnimSegment1838;

let HAnimSegment1839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_r_hand";
HAnimHumanoid47.segments[156] = HAnimSegment1839;

let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_hindfoot";
HAnimHumanoid47.segments[157] = HAnimSegment1840;

let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_r_hindfoot";
HAnimHumanoid47.segments[158] = HAnimSegment1841;

let HAnimSegment1842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_index_distal";
HAnimHumanoid47.segments[159] = HAnimSegment1842;

let HAnimSegment1843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_index_distal";
HAnimHumanoid47.segments[160] = HAnimSegment1843;

let HAnimSegment1844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_l_index_metacarpal";
HAnimHumanoid47.segments[161] = HAnimSegment1844;

let HAnimSegment1845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_index_metacarpal";
HAnimHumanoid47.segments[162] = HAnimSegment1845;

let HAnimSegment1846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_l_index_middle";
HAnimHumanoid47.segments[163] = HAnimSegment1846;

let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_index_middle";
HAnimHumanoid47.segments[164] = HAnimSegment1847;

let HAnimSegment1848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_l_index_proximal";
HAnimHumanoid47.segments[165] = HAnimSegment1848;

let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_index_proximal";
HAnimHumanoid47.segments[166] = HAnimSegment1849;

let HAnimSegment1850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_l_middistal";
HAnimHumanoid47.segments[167] = HAnimSegment1850;

let HAnimSegment1851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_middistal";
HAnimHumanoid47.segments[168] = HAnimSegment1851;

let HAnimSegment1852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_l_middle_distal";
HAnimHumanoid47.segments[169] = HAnimSegment1852;

let HAnimSegment1853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_middle_distal";
HAnimHumanoid47.segments[170] = HAnimSegment1853;

let HAnimSegment1854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid47.segments[171] = HAnimSegment1854;

let HAnimSegment1855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid47.segments[172] = HAnimSegment1855;

let HAnimSegment1856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_l_middle_middle";
HAnimHumanoid47.segments[173] = HAnimSegment1856;

let HAnimSegment1857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_middle_middle";
HAnimHumanoid47.segments[174] = HAnimSegment1857;

let HAnimSegment1858 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_l_middle_proximal";
HAnimHumanoid47.segments[175] = HAnimSegment1858;

let HAnimSegment1859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_middle_proximal";
HAnimHumanoid47.segments[176] = HAnimSegment1859;

let HAnimSegment1860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_l_midproximal";
HAnimHumanoid47.segments[177] = HAnimSegment1860;

let HAnimSegment1861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_midproximal";
HAnimHumanoid47.segments[178] = HAnimSegment1861;

let HAnimSegment1862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_l_pinky_distal";
HAnimHumanoid47.segments[179] = HAnimSegment1862;

let HAnimSegment1863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_pinky_distal";
HAnimHumanoid47.segments[180] = HAnimSegment1863;

let HAnimSegment1864 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid47.segments[181] = HAnimSegment1864;

let HAnimSegment1865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid47.segments[182] = HAnimSegment1865;

let HAnimSegment1866 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1866.USE = "hanim_l_pinky_middle";
HAnimHumanoid47.segments[183] = HAnimSegment1866;

let HAnimSegment1867 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1867.USE = "hanim_r_pinky_middle";
HAnimHumanoid47.segments[184] = HAnimSegment1867;

let HAnimSegment1868 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1868.USE = "hanim_l_pinky_proximal";
HAnimHumanoid47.segments[185] = HAnimSegment1868;

let HAnimSegment1869 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1869.USE = "hanim_r_pinky_proximal";
HAnimHumanoid47.segments[186] = HAnimSegment1869;

let HAnimSegment1870 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1870.USE = "hanim_l_ring_distal";
HAnimHumanoid47.segments[187] = HAnimSegment1870;

let HAnimSegment1871 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1871.USE = "hanim_r_ring_distal";
HAnimHumanoid47.segments[188] = HAnimSegment1871;

let HAnimSegment1872 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1872.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid47.segments[189] = HAnimSegment1872;

let HAnimSegment1873 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1873.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid47.segments[190] = HAnimSegment1873;

let HAnimSegment1874 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1874.USE = "hanim_l_ring_middle";
HAnimHumanoid47.segments[191] = HAnimSegment1874;

let HAnimSegment1875 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1875.USE = "hanim_r_ring_middle";
HAnimHumanoid47.segments[192] = HAnimSegment1875;

let HAnimSegment1876 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1876.USE = "hanim_l_ring_proximal";
HAnimHumanoid47.segments[193] = HAnimSegment1876;

let HAnimSegment1877 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1877.USE = "hanim_r_ring_proximal";
HAnimHumanoid47.segments[194] = HAnimSegment1877;

let HAnimSegment1878 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1878.USE = "hanim_l_scapula";
HAnimHumanoid47.segments[195] = HAnimSegment1878;

let HAnimSegment1879 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1879.USE = "hanim_r_scapula";
HAnimHumanoid47.segments[196] = HAnimSegment1879;

let HAnimSegment1880 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1880.USE = "hanim_l_thigh";
HAnimHumanoid47.segments[197] = HAnimSegment1880;

let HAnimSegment1881 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1881.USE = "hanim_r_thigh";
HAnimHumanoid47.segments[198] = HAnimSegment1881;

let HAnimSegment1882 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1882.USE = "hanim_l_thumb_distal";
HAnimHumanoid47.segments[199] = HAnimSegment1882;

let HAnimSegment1883 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1883.USE = "hanim_r_thumb_distal";
HAnimHumanoid47.segments[200] = HAnimSegment1883;

let HAnimSegment1884 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1884.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid47.segments[201] = HAnimSegment1884;

let HAnimSegment1885 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1885.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid47.segments[202] = HAnimSegment1885;

let HAnimSegment1886 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1886.USE = "hanim_l_thumb_proximal";
HAnimHumanoid47.segments[203] = HAnimSegment1886;

let HAnimSegment1887 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1887.USE = "hanim_r_thumb_proximal";
HAnimHumanoid47.segments[204] = HAnimSegment1887;

let HAnimSegment1888 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1888.USE = "hanim_l_upperarm";
HAnimHumanoid47.segments[205] = HAnimSegment1888;

let HAnimSegment1889 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1889.USE = "hanim_r_upperarm";
HAnimHumanoid47.segments[206] = HAnimSegment1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_crotch_pt";
HAnimHumanoid47.viewpoints[207] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_skull_tip";
HAnimHumanoid47.viewpoints[208] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_sellion_pt";
HAnimHumanoid47.viewpoints[209] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_supramenton_pt";
HAnimHumanoid47.viewpoints[210] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_nuchale_pt";
HAnimHumanoid47.viewpoints[211] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_suprasternale_pt";
HAnimHumanoid47.viewpoints[212] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_cervicale_pt";
HAnimHumanoid47.viewpoints[213] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_substernale_pt";
HAnimHumanoid47.viewpoints[214] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid47.viewpoints[215] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid47.viewpoints[216] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_navel_pt";
HAnimHumanoid47.viewpoints[217] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_l_acromion_pt";
HAnimHumanoid47.viewpoints[218] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_acromion_pt";
HAnimHumanoid47.viewpoints[219] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_r_asis_pt";
HAnimHumanoid47.viewpoints[220] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_l_asis_pt";
HAnimHumanoid47.viewpoints[221] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid47.viewpoints[222] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid47.viewpoints[223] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid47.viewpoints[224] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid47.viewpoints[225] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid47.viewpoints[226] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid47.viewpoints[227] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_l_clavicale_pt";
HAnimHumanoid47.viewpoints[228] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_clavicale_pt";
HAnimHumanoid47.viewpoints[229] = HAnimSite1912;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.USE = "hanim_l_dactylion_pt";
HAnimHumanoid47.viewpoints[230] = HAnimSite1913;

let HAnimSite1914 = browser.currentScene.createNode("HAnimSite");
HAnimSite1914.USE = "hanim_r_dactylion_pt";
HAnimHumanoid47.viewpoints[231] = HAnimSite1914;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.USE = "hanim_l_digit2_pt";
HAnimHumanoid47.viewpoints[232] = HAnimSite1915;

let HAnimSite1916 = browser.currentScene.createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_digit2_pt";
HAnimHumanoid47.viewpoints[233] = HAnimSite1916;

let HAnimSite1917 = browser.currentScene.createNode("HAnimSite");
HAnimSite1917.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid47.viewpoints[234] = HAnimSite1917;

let HAnimSite1918 = browser.currentScene.createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid47.viewpoints[235] = HAnimSite1918;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid47.viewpoints[236] = HAnimSite1919;

let HAnimSite1920 = browser.currentScene.createNode("HAnimSite");
HAnimSite1920.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid47.viewpoints[237] = HAnimSite1920;

let HAnimSite1921 = browser.currentScene.createNode("HAnimSite");
HAnimSite1921.USE = "hanim_l_forefoot_tip";
HAnimHumanoid47.viewpoints[238] = HAnimSite1921;

let HAnimSite1922 = browser.currentScene.createNode("HAnimSite");
HAnimSite1922.USE = "hanim_r_forefoot_tip";
HAnimHumanoid47.viewpoints[239] = HAnimSite1922;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.USE = "hanim_r_gonion_pt";
HAnimHumanoid47.viewpoints[240] = HAnimSite1923;

let HAnimSite1924 = browser.currentScene.createNode("HAnimSite");
HAnimSite1924.USE = "hanim_l_gonion_pt";
HAnimHumanoid47.viewpoints[241] = HAnimSite1924;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid47.viewpoints[242] = HAnimSite1925;

let HAnimSite1926 = browser.currentScene.createNode("HAnimSite");
HAnimSite1926.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid47.viewpoints[243] = HAnimSite1926;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid47.viewpoints[244] = HAnimSite1927;

let HAnimSite1928 = browser.currentScene.createNode("HAnimSite");
HAnimSite1928.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid47.viewpoints[245] = HAnimSite1928;

let HAnimSite1929 = browser.currentScene.createNode("HAnimSite");
HAnimSite1929.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid47.viewpoints[246] = HAnimSite1929;

let HAnimSite1930 = browser.currentScene.createNode("HAnimSite");
HAnimSite1930.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid47.viewpoints[247] = HAnimSite1930;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.USE = "hanim_l_index_distal_tip";
HAnimHumanoid47.viewpoints[248] = HAnimSite1931;

let HAnimSite1932 = browser.currentScene.createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_index_distal_tip";
HAnimHumanoid47.viewpoints[249] = HAnimSite1932;

let HAnimSite1933 = browser.currentScene.createNode("HAnimSite");
HAnimSite1933.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid47.viewpoints[250] = HAnimSite1933;

let HAnimSite1934 = browser.currentScene.createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid47.viewpoints[251] = HAnimSite1934;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid47.viewpoints[252] = HAnimSite1935;

let HAnimSite1936 = browser.currentScene.createNode("HAnimSite");
HAnimSite1936.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid47.viewpoints[253] = HAnimSite1936;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid47.viewpoints[254] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid47.viewpoints[255] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid47.viewpoints[256] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid47.viewpoints[257] = HAnimSite1940;

let HAnimSite1941 = browser.currentScene.createNode("HAnimSite");
HAnimSite1941.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid47.viewpoints[258] = HAnimSite1941;

let HAnimSite1942 = browser.currentScene.createNode("HAnimSite");
HAnimSite1942.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid47.viewpoints[259] = HAnimSite1942;

let HAnimSite1943 = browser.currentScene.createNode("HAnimSite");
HAnimSite1943.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid47.viewpoints[260] = HAnimSite1943;

let HAnimSite1944 = browser.currentScene.createNode("HAnimSite");
HAnimSite1944.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid47.viewpoints[261] = HAnimSite1944;

let HAnimSite1945 = browser.currentScene.createNode("HAnimSite");
HAnimSite1945.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid47.viewpoints[262] = HAnimSite1945;

let HAnimSite1946 = browser.currentScene.createNode("HAnimSite");
HAnimSite1946.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid47.viewpoints[263] = HAnimSite1946;

let HAnimSite1947 = browser.currentScene.createNode("HAnimSite");
HAnimSite1947.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid47.viewpoints[264] = HAnimSite1947;

let HAnimSite1948 = browser.currentScene.createNode("HAnimSite");
HAnimSite1948.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid47.viewpoints[265] = HAnimSite1948;

let HAnimSite1949 = browser.currentScene.createNode("HAnimSite");
HAnimSite1949.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid47.viewpoints[266] = HAnimSite1949;

let HAnimSite1950 = browser.currentScene.createNode("HAnimSite");
HAnimSite1950.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid47.viewpoints[267] = HAnimSite1950;

let HAnimSite1951 = browser.currentScene.createNode("HAnimSite");
HAnimSite1951.USE = "hanim_r_neck_base_pt";
HAnimHumanoid47.viewpoints[268] = HAnimSite1951;

let HAnimSite1952 = browser.currentScene.createNode("HAnimSite");
HAnimSite1952.USE = "hanim_l_neck_base_pt";
HAnimHumanoid47.viewpoints[269] = HAnimSite1952;

let HAnimSite1953 = browser.currentScene.createNode("HAnimSite");
HAnimSite1953.USE = "hanim_l_olecranon_pt";
HAnimHumanoid47.viewpoints[270] = HAnimSite1953;

let HAnimSite1954 = browser.currentScene.createNode("HAnimSite");
HAnimSite1954.USE = "hanim_r_olecranon_pt";
HAnimHumanoid47.viewpoints[271] = HAnimSite1954;

let HAnimSite1955 = browser.currentScene.createNode("HAnimSite");
HAnimSite1955.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid47.viewpoints[272] = HAnimSite1955;

let HAnimSite1956 = browser.currentScene.createNode("HAnimSite");
HAnimSite1956.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid47.viewpoints[273] = HAnimSite1956;

let HAnimSite1957 = browser.currentScene.createNode("HAnimSite");
HAnimSite1957.USE = "hanim_r_psis_pt";
HAnimHumanoid47.viewpoints[274] = HAnimSite1957;

let HAnimSite1958 = browser.currentScene.createNode("HAnimSite");
HAnimSite1958.USE = "hanim_l_psis_pt";
HAnimHumanoid47.viewpoints[275] = HAnimSite1958;

let HAnimSite1959 = browser.currentScene.createNode("HAnimSite");
HAnimSite1959.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid47.viewpoints[276] = HAnimSite1959;

let HAnimSite1960 = browser.currentScene.createNode("HAnimSite");
HAnimSite1960.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid47.viewpoints[277] = HAnimSite1960;

let HAnimSite1961 = browser.currentScene.createNode("HAnimSite");
HAnimSite1961.USE = "hanim_l_radiale_pt";
HAnimHumanoid47.viewpoints[278] = HAnimSite1961;

let HAnimSite1962 = browser.currentScene.createNode("HAnimSite");
HAnimSite1962.USE = "hanim_r_radiale_pt";
HAnimHumanoid47.viewpoints[279] = HAnimSite1962;

let HAnimSite1963 = browser.currentScene.createNode("HAnimSite");
HAnimSite1963.USE = "hanim_r_rib10_pt";
HAnimHumanoid47.viewpoints[280] = HAnimSite1963;

let HAnimSite1964 = browser.currentScene.createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_rib10_pt";
HAnimHumanoid47.viewpoints[281] = HAnimSite1964;

let HAnimSite1965 = browser.currentScene.createNode("HAnimSite");
HAnimSite1965.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid47.viewpoints[282] = HAnimSite1965;

let HAnimSite1966 = browser.currentScene.createNode("HAnimSite");
HAnimSite1966.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid47.viewpoints[283] = HAnimSite1966;

let HAnimSite1967 = browser.currentScene.createNode("HAnimSite");
HAnimSite1967.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid47.viewpoints[284] = HAnimSite1967;

let HAnimSite1968 = browser.currentScene.createNode("HAnimSite");
HAnimSite1968.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid47.viewpoints[285] = HAnimSite1968;

let HAnimSite1969 = browser.currentScene.createNode("HAnimSite");
HAnimSite1969.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid47.viewpoints[286] = HAnimSite1969;

let HAnimSite1970 = browser.currentScene.createNode("HAnimSite");
HAnimSite1970.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid47.viewpoints[287] = HAnimSite1970;

let HAnimSite1971 = browser.currentScene.createNode("HAnimSite");
HAnimSite1971.USE = "hanim_r_thelion_pt";
HAnimHumanoid47.viewpoints[288] = HAnimSite1971;

let HAnimSite1972 = browser.currentScene.createNode("HAnimSite");
HAnimSite1972.USE = "hanim_l_thelion_pt";
HAnimHumanoid47.viewpoints[289] = HAnimSite1972;

let HAnimSite1973 = browser.currentScene.createNode("HAnimSite");
HAnimSite1973.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid47.viewpoints[290] = HAnimSite1973;

let HAnimSite1974 = browser.currentScene.createNode("HAnimSite");
HAnimSite1974.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid47.viewpoints[291] = HAnimSite1974;

let HAnimSite1975 = browser.currentScene.createNode("HAnimSite");
HAnimSite1975.USE = "hanim_r_tragion_pt";
HAnimHumanoid47.viewpoints[292] = HAnimSite1975;

let HAnimSite1976 = browser.currentScene.createNode("HAnimSite");
HAnimSite1976.USE = "hanim_l_tragion_pt";
HAnimHumanoid47.viewpoints[293] = HAnimSite1976;

let HAnimSite1977 = browser.currentScene.createNode("HAnimSite");
HAnimSite1977.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid47.viewpoints[294] = HAnimSite1977;

let HAnimSite1978 = browser.currentScene.createNode("HAnimSite");
HAnimSite1978.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid47.viewpoints[295] = HAnimSite1978;

let HAnimSite1979 = browser.currentScene.createNode("HAnimSite");
HAnimSite1979.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid47.viewpoints[296] = HAnimSite1979;

let HAnimSite1980 = browser.currentScene.createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid47.viewpoints[297] = HAnimSite1980;

browser.currentScene.children[12] = HAnimHumanoid47;

