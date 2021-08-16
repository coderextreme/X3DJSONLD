#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "HAnimSpecificationLOA3Illustrated.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "reference";
meta5.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "24 April 2013";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "4 July 2020";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "TODO";
meta8.content = "Convert to X3D4 HAnim2";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "creator";
meta9.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "Image";
meta10.content = "HAnimSpecificationLOA3Illustrated.png";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "Image";
meta11.content = "HAnimSpecificationLOA3IllustratedLeftSide.png";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "HAnimSpecificationLOA3Invisible.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "HAnimSpecificationLOA3Animation.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "Image";
meta15.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "Image";
meta16.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "Image";
meta17.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "TODO";
meta18.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "warning";
meta19.content = "BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "TODO";
meta20.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "reference";
meta22.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "reference";
meta23.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "translator";
meta24.content = "Don Brutzman and Joe Williams";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "generator";
meta25.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "reference";
meta26.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "reference";
meta27.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "reference";
meta28.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "reference";
meta29.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "generator";
meta30.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "identifier";
meta31.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Illustrated.x3d";
head1.meta[29] = meta31;

meta meta32 = createNode("meta");
meta32.name = "license";
meta32.content = "../license.html";
head1.meta[30] = meta32;

head = head1;

Background Background34 = createNode("Background");
Background34.skyColor = new MFColor(new float[0.3,0.3,0.3]);
children = new MFNode();

children[0] = Background34;

NavigationInfo NavigationInfo35 = createNode("NavigationInfo");
children[1] = NavigationInfo35;

Group Group36 = createNode("Group");
Group36.DEF = "Original_WorldInfo";
WorldInfo WorldInfo37 = createNode("WorldInfo");
WorldInfo37.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo37.title = "HANIM 200x Default Joint Centers, LOA3";
Group36.children = new MFNode();

Group36.children[0] = WorldInfo37;

children[2] = Group36;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Front";
Viewpoint38.position = new SFVec3f(new float[0,0.4,4]);
children[3] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Front Close";
Viewpoint39.position = new SFVec3f(new float[0,0.8,2]);
children[4] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Front Closer";
Viewpoint40.position = new SFVec3f(new float[0,1.2,1]);
children[5] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Front Face";
Viewpoint41.position = new SFVec3f(new float[0,1.63,1]);
children[6] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Right Side";
Viewpoint42.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint42.position = new SFVec3f(new float[2.6,0.8,0]);
children[7] = Viewpoint42;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint43.description = "Humanoid LOA 3 Right Side Close";
Viewpoint43.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint43.position = new SFVec3f(new float[1,0.8,0.5]);
children[8] = Viewpoint43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint44.description = "Humanoid LOA 3 Left Side Close";
Viewpoint44.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint44.position = new SFVec3f(new float[-1,0.8,0.5]);
children[9] = Viewpoint44;

Viewpoint Viewpoint45 = createNode("Viewpoint");
Viewpoint45.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint45.description = "Humanoid LOA 3 Left Side";
Viewpoint45.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint45.position = new SFVec3f(new float[-2.6,0.8,0]);
children[10] = Viewpoint45;

Viewpoint Viewpoint46 = createNode("Viewpoint");
Viewpoint46.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint46.description = "Humanoid LOA 3 Top";
Viewpoint46.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint46.position = new SFVec3f(new float[0,3.5,0]);
children[11] = Viewpoint46;

HAnimHumanoid HAnimHumanoid47 = createNode("HAnimHumanoid");
HAnimHumanoid47.name = "humanoid";
HAnimHumanoid47.DEF = "hanim_humanoid";
HAnimHumanoid47.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid47.version = "1.0";
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
HAnimJoint HAnimJoint48 = createNode("HAnimJoint");
HAnimJoint48.name = "humanoid_root";
HAnimJoint48.DEF = "hanim_humanoid_root";
HAnimJoint48.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint48.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment49 = createNode("HAnimSegment");
HAnimSegment49.name = "sacrum";
HAnimSegment49.DEF = "hanim_sacrum";
//<HAnimJoint name='humanoid_root'/> visualization sphere is placed within <HAnimSegment name='sacrum'/>
TouchSensor TouchSensor50 = createNode("TouchSensor");
TouchSensor50.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment49.children = new MFNode();

HAnimSegment49.children[0] = TouchSensor50;

Transform Transform51 = createNode("Transform");
Transform51.translation = new SFVec3f(new float[0,0.824,0.0277]);
Shape Shape52 = createNode("Shape");
Shape52.DEF = "HAnimJointShape";
Sphere Sphere53 = createNode("Sphere");
Sphere53.radius = 0.006;
Shape52.geometry = Sphere53;

Appearance Appearance54 = createNode("Appearance");
Appearance54.DEF = "HAnimJointAppearance";
Material Material55 = createNode("Material");
Material55.diffuseColor = new SFColor(new float[1,0.5,0]);
Material55.transparency = 0.5;
Appearance54.material = Material55;

Shape52.appearance = Appearance54;

Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

HAnimSegment49.children[1] = Transform51;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
Shape Shape56 = createNode("Shape");
LineSet LineSet57 = createNode("LineSet");
LineSet57.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate58 = createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet57.coord = Coordinate58;

ColorRGBA ColorRGBA59 = createNode("ColorRGBA");
ColorRGBA59.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA59.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet57.color = ColorRGBA59;

Shape56.geometry = LineSet57;

HAnimSegment49.children[2] = Shape56;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
Shape Shape60 = createNode("Shape");
LineSet LineSet61 = createNode("LineSet");
LineSet61.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate62 = createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet61.coord = Coordinate62;

ColorRGBA ColorRGBA63 = createNode("ColorRGBA");
ColorRGBA63.USE = "HAnimSegmentLineColorRGBA";
LineSet61.color = ColorRGBA63;

Shape60.geometry = LineSet61;

HAnimSegment49.children[3] = Shape60;

HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimSegment49;

HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.name = "sacroiliac";
HAnimJoint64.DEF = "hanim_sacroiliac";
HAnimJoint64.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint64.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment65 = createNode("HAnimSegment");
HAnimSegment65.name = "pelvis";
HAnimSegment65.DEF = "hanim_pelvis";
//<HAnimJoint name='sacroiliac'/> visualization sphere is placed within <HAnimSegment name='pelvis'/>
TouchSensor TouchSensor66 = createNode("TouchSensor");
TouchSensor66.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment65.children = new MFNode();

HAnimSegment65.children[0] = TouchSensor66;

Transform Transform67 = createNode("Transform");
Transform67.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape68 = createNode("Shape");
Shape68.USE = "HAnimJointShape";
Transform67.children = new MFNode();

Transform67.children[0] = Shape68;

HAnimSegment65.children[1] = Transform67;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
Shape Shape69 = createNode("Shape");
LineSet LineSet70 = createNode("LineSet");
LineSet70.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate71 = createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet70.coord = Coordinate71;

ColorRGBA ColorRGBA72 = createNode("ColorRGBA");
ColorRGBA72.USE = "HAnimSegmentLineColorRGBA";
LineSet70.color = ColorRGBA72;

Shape69.geometry = LineSet70;

HAnimSegment65.children[2] = Shape69;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
Shape Shape73 = createNode("Shape");
LineSet LineSet74 = createNode("LineSet");
LineSet74.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate75 = createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet74.coord = Coordinate75;

ColorRGBA ColorRGBA76 = createNode("ColorRGBA");
ColorRGBA76.USE = "HAnimSegmentLineColorRGBA";
LineSet74.color = ColorRGBA76;

Shape73.geometry = LineSet74;

HAnimSegment65.children[3] = Shape73;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
Shape Shape77 = createNode("Shape");
LineSet LineSet78 = createNode("LineSet");
LineSet78.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate79 = createNode("Coordinate");
Coordinate79.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet78.coord = Coordinate79;

ColorRGBA ColorRGBA80 = createNode("ColorRGBA");
ColorRGBA80.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA80.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet78.color = ColorRGBA80;

Shape77.geometry = LineSet78;

HAnimSegment65.children[4] = Shape77;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
Shape Shape81 = createNode("Shape");
LineSet LineSet82 = createNode("LineSet");
LineSet82.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate83 = createNode("Coordinate");
Coordinate83.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet82.coord = Coordinate83;

ColorRGBA ColorRGBA84 = createNode("ColorRGBA");
ColorRGBA84.USE = "HAnimSiteLineColorRGBA";
LineSet82.color = ColorRGBA84;

Shape81.geometry = LineSet82;

HAnimSegment65.children[5] = Shape81;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
Shape Shape85 = createNode("Shape");
LineSet LineSet86 = createNode("LineSet");
LineSet86.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate87 = createNode("Coordinate");
Coordinate87.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet86.coord = Coordinate87;

ColorRGBA ColorRGBA88 = createNode("ColorRGBA");
ColorRGBA88.USE = "HAnimSiteLineColorRGBA";
LineSet86.color = ColorRGBA88;

Shape85.geometry = LineSet86;

HAnimSegment65.children[6] = Shape85;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
Shape Shape89 = createNode("Shape");
LineSet LineSet90 = createNode("LineSet");
LineSet90.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate91 = createNode("Coordinate");
Coordinate91.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet90.coord = Coordinate91;

ColorRGBA ColorRGBA92 = createNode("ColorRGBA");
ColorRGBA92.USE = "HAnimSiteLineColorRGBA";
LineSet90.color = ColorRGBA92;

Shape89.geometry = LineSet90;

HAnimSegment65.children[7] = Shape89;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
Shape Shape93 = createNode("Shape");
LineSet LineSet94 = createNode("LineSet");
LineSet94.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate95 = createNode("Coordinate");
Coordinate95.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet94.coord = Coordinate95;

ColorRGBA ColorRGBA96 = createNode("ColorRGBA");
ColorRGBA96.USE = "HAnimSiteLineColorRGBA";
LineSet94.color = ColorRGBA96;

Shape93.geometry = LineSet94;

HAnimSegment65.children[8] = Shape93;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
Shape Shape97 = createNode("Shape");
LineSet LineSet98 = createNode("LineSet");
LineSet98.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate99 = createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet98.coord = Coordinate99;

ColorRGBA ColorRGBA100 = createNode("ColorRGBA");
ColorRGBA100.USE = "HAnimSiteLineColorRGBA";
LineSet98.color = ColorRGBA100;

Shape97.geometry = LineSet98;

HAnimSegment65.children[9] = Shape97;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
Shape Shape101 = createNode("Shape");
LineSet LineSet102 = createNode("LineSet");
LineSet102.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate103 = createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet102.coord = Coordinate103;

ColorRGBA ColorRGBA104 = createNode("ColorRGBA");
ColorRGBA104.USE = "HAnimSiteLineColorRGBA";
LineSet102.color = ColorRGBA104;

Shape101.geometry = LineSet102;

HAnimSegment65.children[10] = Shape101;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
Shape Shape105 = createNode("Shape");
LineSet LineSet106 = createNode("LineSet");
LineSet106.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate107 = createNode("Coordinate");
Coordinate107.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet106.coord = Coordinate107;

ColorRGBA ColorRGBA108 = createNode("ColorRGBA");
ColorRGBA108.USE = "HAnimSiteLineColorRGBA";
LineSet106.color = ColorRGBA108;

Shape105.geometry = LineSet106;

HAnimSegment65.children[11] = Shape105;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
Shape Shape109 = createNode("Shape");
LineSet LineSet110 = createNode("LineSet");
LineSet110.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate111 = createNode("Coordinate");
Coordinate111.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet110.coord = Coordinate111;

ColorRGBA ColorRGBA112 = createNode("ColorRGBA");
ColorRGBA112.USE = "HAnimSiteLineColorRGBA";
LineSet110.color = ColorRGBA112;

Shape109.geometry = LineSet110;

HAnimSegment65.children[12] = Shape109;

HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.name = "r_iliocristale_pt";
HAnimSite113.DEF = "hanim_r_iliocristale_pt";
HAnimSite113.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
TouchSensor TouchSensor114 = createNode("TouchSensor");
TouchSensor114.description = "HAnimSite r_iliocristale";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = TouchSensor114;

Shape Shape115 = createNode("Shape");
Shape115.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet116 = createNode("IndexedFaceSet");
IndexedFaceSet116.DEF = "DiamondIFS";
IndexedFaceSet116.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet116.creaseAngle = 0.5;
IndexedFaceSet116.solid = False;
Coordinate Coordinate117 = createNode("Coordinate");
Coordinate117.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet116.coord = Coordinate117;

Shape115.geometry = IndexedFaceSet116;

Appearance Appearance118 = createNode("Appearance");
Material Material119 = createNode("Material");
Material119.diffuseColor = new SFColor(new float[1,0,0]);
Appearance118.material = Material119;

Shape115.appearance = Appearance118;

HAnimSite113.children[1] = Shape115;

HAnimSegment65.children[13] = HAnimSite113;

HAnimSite HAnimSite120 = createNode("HAnimSite");
HAnimSite120.name = "r_trochanterion_pt";
HAnimSite120.DEF = "hanim_r_trochanterion_pt";
HAnimSite120.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
TouchSensor TouchSensor121 = createNode("TouchSensor");
TouchSensor121.description = "HAnimSite r_trochanterion";
HAnimSite120.children = new MFNode();

HAnimSite120.children[0] = TouchSensor121;

Shape Shape122 = createNode("Shape");
Shape122.USE = "HAnimSiteShape";
HAnimSite120.children[1] = Shape122;

HAnimSegment65.children[14] = HAnimSite120;

HAnimSite HAnimSite123 = createNode("HAnimSite");
HAnimSite123.name = "l_iliocristale_pt";
HAnimSite123.DEF = "hanim_l_iliocristale_pt";
HAnimSite123.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
TouchSensor TouchSensor124 = createNode("TouchSensor");
TouchSensor124.description = "HAnimSite l_iliocristale";
HAnimSite123.children = new MFNode();

HAnimSite123.children[0] = TouchSensor124;

Shape Shape125 = createNode("Shape");
Shape125.USE = "HAnimSiteShape";
HAnimSite123.children[1] = Shape125;

HAnimSegment65.children[15] = HAnimSite123;

HAnimSite HAnimSite126 = createNode("HAnimSite");
HAnimSite126.name = "l_trochanterion_pt";
HAnimSite126.DEF = "hanim_l_trochanterion_pt";
HAnimSite126.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
TouchSensor TouchSensor127 = createNode("TouchSensor");
TouchSensor127.description = "HAnimSite l_trochanterion";
HAnimSite126.children = new MFNode();

HAnimSite126.children[0] = TouchSensor127;

Shape Shape128 = createNode("Shape");
Shape128.USE = "HAnimSiteShape";
HAnimSite126.children[1] = Shape128;

HAnimSegment65.children[16] = HAnimSite126;

HAnimSite HAnimSite129 = createNode("HAnimSite");
HAnimSite129.name = "r_asis_pt";
HAnimSite129.DEF = "hanim_r_asis_pt";
HAnimSite129.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
TouchSensor TouchSensor130 = createNode("TouchSensor");
TouchSensor130.description = "HAnimSite r_asis";
HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = TouchSensor130;

Shape Shape131 = createNode("Shape");
Shape131.USE = "HAnimSiteShape";
HAnimSite129.children[1] = Shape131;

HAnimSegment65.children[17] = HAnimSite129;

HAnimSite HAnimSite132 = createNode("HAnimSite");
HAnimSite132.name = "l_asis_pt";
HAnimSite132.DEF = "hanim_l_asis_pt";
HAnimSite132.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
TouchSensor TouchSensor133 = createNode("TouchSensor");
TouchSensor133.description = "HAnimSite l_asis";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

Shape Shape134 = createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

HAnimSegment65.children[18] = HAnimSite132;

HAnimSite HAnimSite135 = createNode("HAnimSite");
HAnimSite135.name = "r_psis_pt";
HAnimSite135.DEF = "hanim_r_psis_pt";
HAnimSite135.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
TouchSensor TouchSensor136 = createNode("TouchSensor");
TouchSensor136.description = "HAnimSite r_psis";
HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = TouchSensor136;

Shape Shape137 = createNode("Shape");
Shape137.USE = "HAnimSiteShape";
HAnimSite135.children[1] = Shape137;

HAnimSegment65.children[19] = HAnimSite135;

HAnimSite HAnimSite138 = createNode("HAnimSite");
HAnimSite138.name = "l_psis_pt";
HAnimSite138.DEF = "hanim_l_psis_pt";
HAnimSite138.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
TouchSensor TouchSensor139 = createNode("TouchSensor");
TouchSensor139.description = "HAnimSite l_psis";
HAnimSite138.children = new MFNode();

HAnimSite138.children[0] = TouchSensor139;

Shape Shape140 = createNode("Shape");
Shape140.USE = "HAnimSiteShape";
HAnimSite138.children[1] = Shape140;

HAnimSegment65.children[20] = HAnimSite138;

HAnimSite HAnimSite141 = createNode("HAnimSite");
HAnimSite141.name = "crotch_pt";
HAnimSite141.DEF = "hanim_crotch_pt";
HAnimSite141.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
TouchSensor TouchSensor142 = createNode("TouchSensor");
TouchSensor142.description = "HAnimSite crotch";
HAnimSite141.children = new MFNode();

HAnimSite141.children[0] = TouchSensor142;

Shape Shape143 = createNode("Shape");
Shape143.USE = "HAnimSiteShape";
HAnimSite141.children[1] = Shape143;

HAnimSegment65.children[21] = HAnimSite141;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.name = "l_hip";
HAnimJoint144.DEF = "hanim_l_hip";
HAnimJoint144.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint144.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment145 = createNode("HAnimSegment");
HAnimSegment145.name = "l_thigh";
HAnimSegment145.DEF = "hanim_l_thigh";
//<HAnimJoint name='l_hip'/> visualization sphere is placed within <HAnimSegment name='l_thigh'/>
TouchSensor TouchSensor146 = createNode("TouchSensor");
TouchSensor146.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment145.children = new MFNode();

HAnimSegment145.children[0] = TouchSensor146;

Transform Transform147 = createNode("Transform");
Transform147.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape148 = createNode("Shape");
Shape148.USE = "HAnimJointShape";
Transform147.children = new MFNode();

Transform147.children[0] = Shape148;

HAnimSegment145.children[1] = Transform147;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
Shape Shape149 = createNode("Shape");
LineSet LineSet150 = createNode("LineSet");
LineSet150.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate151 = createNode("Coordinate");
Coordinate151.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet150.coord = Coordinate151;

ColorRGBA ColorRGBA152 = createNode("ColorRGBA");
ColorRGBA152.USE = "HAnimSegmentLineColorRGBA";
LineSet150.color = ColorRGBA152;

Shape149.geometry = LineSet150;

HAnimSegment145.children[2] = Shape149;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
Shape Shape153 = createNode("Shape");
LineSet LineSet154 = createNode("LineSet");
LineSet154.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate155 = createNode("Coordinate");
Coordinate155.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet154.coord = Coordinate155;

ColorRGBA ColorRGBA156 = createNode("ColorRGBA");
ColorRGBA156.USE = "HAnimSiteLineColorRGBA";
LineSet154.color = ColorRGBA156;

Shape153.geometry = LineSet154;

HAnimSegment145.children[3] = Shape153;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
Shape Shape157 = createNode("Shape");
LineSet LineSet158 = createNode("LineSet");
LineSet158.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate159 = createNode("Coordinate");
Coordinate159.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet158.coord = Coordinate159;

ColorRGBA ColorRGBA160 = createNode("ColorRGBA");
ColorRGBA160.USE = "HAnimSiteLineColorRGBA";
LineSet158.color = ColorRGBA160;

Shape157.geometry = LineSet158;

HAnimSegment145.children[4] = Shape157;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
Shape Shape161 = createNode("Shape");
LineSet LineSet162 = createNode("LineSet");
LineSet162.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate163 = createNode("Coordinate");
Coordinate163.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet162.coord = Coordinate163;

ColorRGBA ColorRGBA164 = createNode("ColorRGBA");
ColorRGBA164.USE = "HAnimSiteLineColorRGBA";
LineSet162.color = ColorRGBA164;

Shape161.geometry = LineSet162;

HAnimSegment145.children[5] = Shape161;

HAnimSite HAnimSite165 = createNode("HAnimSite");
HAnimSite165.name = "l_knee_crease_pt";
HAnimSite165.DEF = "hanim_l_knee_crease_pt";
HAnimSite165.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
TouchSensor TouchSensor166 = createNode("TouchSensor");
TouchSensor166.description = "HAnimSite l_knee_crease";
HAnimSite165.children = new MFNode();

HAnimSite165.children[0] = TouchSensor166;

Shape Shape167 = createNode("Shape");
Shape167.USE = "HAnimSiteShape";
HAnimSite165.children[1] = Shape167;

HAnimSegment145.children[6] = HAnimSite165;

HAnimSite HAnimSite168 = createNode("HAnimSite");
HAnimSite168.name = "l_femoral_lateral_epicn_pt";
HAnimSite168.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite168.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
TouchSensor TouchSensor169 = createNode("TouchSensor");
TouchSensor169.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite168.children = new MFNode();

HAnimSite168.children[0] = TouchSensor169;

Shape Shape170 = createNode("Shape");
Shape170.USE = "HAnimSiteShape";
HAnimSite168.children[1] = Shape170;

HAnimSegment145.children[7] = HAnimSite168;

HAnimSite HAnimSite171 = createNode("HAnimSite");
HAnimSite171.name = "l_femoral_medial_epicn_pt";
HAnimSite171.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite171.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
TouchSensor TouchSensor172 = createNode("TouchSensor");
TouchSensor172.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite171.children = new MFNode();

HAnimSite171.children[0] = TouchSensor172;

Shape Shape173 = createNode("Shape");
Shape173.USE = "HAnimSiteShape";
HAnimSite171.children[1] = Shape173;

HAnimSegment145.children[8] = HAnimSite171;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimSegment145;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.name = "l_knee";
HAnimJoint174.DEF = "hanim_l_knee";
HAnimJoint174.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint174.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment175 = createNode("HAnimSegment");
HAnimSegment175.name = "l_calf";
HAnimSegment175.DEF = "hanim_l_calf";
//<HAnimJoint name='l_knee'/> visualization sphere is placed within <HAnimSegment name='l_calf'/>
TouchSensor TouchSensor176 = createNode("TouchSensor");
TouchSensor176.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = TouchSensor176;

Transform Transform177 = createNode("Transform");
Transform177.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape178 = createNode("Shape");
Shape178.USE = "HAnimJointShape";
Transform177.children = new MFNode();

Transform177.children[0] = Shape178;

HAnimSegment175.children[1] = Transform177;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
Shape Shape179 = createNode("Shape");
LineSet LineSet180 = createNode("LineSet");
LineSet180.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate181 = createNode("Coordinate");
Coordinate181.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet180.coord = Coordinate181;

ColorRGBA ColorRGBA182 = createNode("ColorRGBA");
ColorRGBA182.USE = "HAnimSegmentLineColorRGBA";
LineSet180.color = ColorRGBA182;

Shape179.geometry = LineSet180;

HAnimSegment175.children[2] = Shape179;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.name = "l_ankle";
HAnimJoint183.DEF = "hanim_l_ankle";
HAnimJoint183.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint183.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.name = "l_hindfoot";
HAnimSegment184.DEF = "hanim_l_hindfoot";
//<HAnimJoint name='l_ankle'/> visualization sphere is placed within <HAnimSegment name='l_hindfoot'/>
TouchSensor TouchSensor185 = createNode("TouchSensor");
TouchSensor185.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = TouchSensor185;

Transform Transform186 = createNode("Transform");
Transform186.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape187 = createNode("Shape");
Shape187.USE = "HAnimJointShape";
Transform186.children = new MFNode();

Transform186.children[0] = Shape187;

HAnimSegment184.children[1] = Transform186;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
Shape Shape188 = createNode("Shape");
LineSet LineSet189 = createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate190 = createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet189.coord = Coordinate190;

ColorRGBA ColorRGBA191 = createNode("ColorRGBA");
ColorRGBA191.USE = "HAnimSegmentLineColorRGBA";
LineSet189.color = ColorRGBA191;

Shape188.geometry = LineSet189;

HAnimSegment184.children[2] = Shape188;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
Shape Shape192 = createNode("Shape");
LineSet LineSet193 = createNode("LineSet");
LineSet193.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate194 = createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet193.coord = Coordinate194;

ColorRGBA ColorRGBA195 = createNode("ColorRGBA");
ColorRGBA195.USE = "HAnimSiteLineColorRGBA";
LineSet193.color = ColorRGBA195;

Shape192.geometry = LineSet193;

HAnimSegment184.children[3] = Shape192;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
Shape Shape196 = createNode("Shape");
LineSet LineSet197 = createNode("LineSet");
LineSet197.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate198 = createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet197.coord = Coordinate198;

ColorRGBA ColorRGBA199 = createNode("ColorRGBA");
ColorRGBA199.USE = "HAnimSiteLineColorRGBA";
LineSet197.color = ColorRGBA199;

Shape196.geometry = LineSet197;

HAnimSegment184.children[4] = Shape196;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
Shape Shape200 = createNode("Shape");
LineSet LineSet201 = createNode("LineSet");
LineSet201.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate202 = createNode("Coordinate");
Coordinate202.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet201.coord = Coordinate202;

ColorRGBA ColorRGBA203 = createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSiteLineColorRGBA";
LineSet201.color = ColorRGBA203;

Shape200.geometry = LineSet201;

HAnimSegment184.children[5] = Shape200;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
Shape Shape204 = createNode("Shape");
LineSet LineSet205 = createNode("LineSet");
LineSet205.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate206 = createNode("Coordinate");
Coordinate206.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet205.coord = Coordinate206;

ColorRGBA ColorRGBA207 = createNode("ColorRGBA");
ColorRGBA207.USE = "HAnimSiteLineColorRGBA";
LineSet205.color = ColorRGBA207;

Shape204.geometry = LineSet205;

HAnimSegment184.children[6] = Shape204;

HAnimSite HAnimSite208 = createNode("HAnimSite");
HAnimSite208.name = "l_lateral_malleolus_pt";
HAnimSite208.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite208.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
TouchSensor TouchSensor209 = createNode("TouchSensor");
TouchSensor209.description = "HAnimSite l_lateral_malleolus";
HAnimSite208.children = new MFNode();

HAnimSite208.children[0] = TouchSensor209;

Shape Shape210 = createNode("Shape");
Shape210.USE = "HAnimSiteShape";
HAnimSite208.children[1] = Shape210;

HAnimSegment184.children[7] = HAnimSite208;

HAnimSite HAnimSite211 = createNode("HAnimSite");
HAnimSite211.name = "l_medial_malleolus_pt";
HAnimSite211.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite211.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
TouchSensor TouchSensor212 = createNode("TouchSensor");
TouchSensor212.description = "HAnimSite l_medial_malleolus";
HAnimSite211.children = new MFNode();

HAnimSite211.children[0] = TouchSensor212;

Shape Shape213 = createNode("Shape");
Shape213.USE = "HAnimSiteShape";
HAnimSite211.children[1] = Shape213;

HAnimSegment184.children[8] = HAnimSite211;

HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.name = "l_sphyrion_pt";
HAnimSite214.DEF = "hanim_l_sphyrion_pt";
HAnimSite214.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
TouchSensor TouchSensor215 = createNode("TouchSensor");
TouchSensor215.description = "HAnimSite l_sphyrion";
HAnimSite214.children = new MFNode();

HAnimSite214.children[0] = TouchSensor215;

Shape Shape216 = createNode("Shape");
Shape216.USE = "HAnimSiteShape";
HAnimSite214.children[1] = Shape216;

HAnimSegment184.children[9] = HAnimSite214;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.name = "l_calcaneous_post_pt";
HAnimSite217.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite217.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
TouchSensor TouchSensor218 = createNode("TouchSensor");
TouchSensor218.description = "HAnimSite l_calcaneous_post";
HAnimSite217.children = new MFNode();

HAnimSite217.children[0] = TouchSensor218;

Shape Shape219 = createNode("Shape");
Shape219.USE = "HAnimSiteShape";
HAnimSite217.children[1] = Shape219;

HAnimSegment184.children[10] = HAnimSite217;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.name = "l_subtalar";
HAnimJoint220.DEF = "hanim_l_subtalar";
HAnimJoint220.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint220.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment221 = createNode("HAnimSegment");
HAnimSegment221.name = "l_midproximal";
HAnimSegment221.DEF = "hanim_l_midproximal";
//<HAnimJoint name='l_subtalar'/> visualization sphere is placed within <HAnimSegment name='l_midproximal'/>
TouchSensor TouchSensor222 = createNode("TouchSensor");
TouchSensor222.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment221.children = new MFNode();

HAnimSegment221.children[0] = TouchSensor222;

Transform Transform223 = createNode("Transform");
Transform223.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
Shape Shape224 = createNode("Shape");
Shape224.USE = "HAnimJointShape";
Transform223.children = new MFNode();

Transform223.children[0] = Shape224;

HAnimSegment221.children[1] = Transform223;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
Shape Shape225 = createNode("Shape");
LineSet LineSet226 = createNode("LineSet");
LineSet226.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate227 = createNode("Coordinate");
Coordinate227.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet226.coord = Coordinate227;

ColorRGBA ColorRGBA228 = createNode("ColorRGBA");
ColorRGBA228.USE = "HAnimSegmentLineColorRGBA";
LineSet226.color = ColorRGBA228;

Shape225.geometry = LineSet226;

HAnimSegment221.children[2] = Shape225;

HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.name = "l_midtarsal";
HAnimJoint229.DEF = "hanim_l_midtarsal";
HAnimJoint229.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint229.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment230 = createNode("HAnimSegment");
HAnimSegment230.name = "l_middistal";
HAnimSegment230.DEF = "hanim_l_middistal";
//<HAnimJoint name='l_midtarsal'/> visualization sphere is placed within <HAnimSegment name='l_middistal'/>
TouchSensor TouchSensor231 = createNode("TouchSensor");
TouchSensor231.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment230.children = new MFNode();

HAnimSegment230.children[0] = TouchSensor231;

Transform Transform232 = createNode("Transform");
Transform232.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
Shape Shape233 = createNode("Shape");
Shape233.USE = "HAnimJointShape";
Transform232.children = new MFNode();

Transform232.children[0] = Shape233;

HAnimSegment230.children[1] = Transform232;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
Shape Shape234 = createNode("Shape");
LineSet LineSet235 = createNode("LineSet");
LineSet235.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate236 = createNode("Coordinate");
Coordinate236.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet235.coord = Coordinate236;

ColorRGBA ColorRGBA237 = createNode("ColorRGBA");
ColorRGBA237.USE = "HAnimSegmentLineColorRGBA";
LineSet235.color = ColorRGBA237;

Shape234.geometry = LineSet235;

HAnimSegment230.children[2] = Shape234;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
Shape Shape238 = createNode("Shape");
LineSet LineSet239 = createNode("LineSet");
LineSet239.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate240 = createNode("Coordinate");
Coordinate240.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet239.coord = Coordinate240;

ColorRGBA ColorRGBA241 = createNode("ColorRGBA");
ColorRGBA241.USE = "HAnimSiteLineColorRGBA";
LineSet239.color = ColorRGBA241;

Shape238.geometry = LineSet239;

HAnimSegment230.children[3] = Shape238;

HAnimSite HAnimSite242 = createNode("HAnimSite");
HAnimSite242.name = "l_metatarsal_pha1_pt";
HAnimSite242.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite242.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
TouchSensor TouchSensor243 = createNode("TouchSensor");
TouchSensor243.description = "HAnimSite l_metatarsal_pha1";
HAnimSite242.children = new MFNode();

HAnimSite242.children[0] = TouchSensor243;

Shape Shape244 = createNode("Shape");
Shape244.USE = "HAnimSiteShape";
HAnimSite242.children[1] = Shape244;

HAnimSegment230.children[4] = HAnimSite242;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

HAnimJoint HAnimJoint245 = createNode("HAnimJoint");
HAnimJoint245.name = "l_metatarsal";
HAnimJoint245.DEF = "hanim_l_metatarsal";
HAnimJoint245.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint245.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment246 = createNode("HAnimSegment");
HAnimSegment246.name = "l_forefoot";
HAnimSegment246.DEF = "hanim_l_forefoot";
//<HAnimJoint name='l_metatarsal'/> visualization sphere is placed within <HAnimSegment name='l_forefoot'/>
TouchSensor TouchSensor247 = createNode("TouchSensor");
TouchSensor247.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment246.children = new MFNode();

HAnimSegment246.children[0] = TouchSensor247;

Transform Transform248 = createNode("Transform");
Transform248.translation = new SFVec3f(new float[0.1086,0,0.0762]);
Shape Shape249 = createNode("Shape");
Shape249.USE = "HAnimJointShape";
Transform248.children = new MFNode();

Transform248.children[0] = Shape249;

HAnimSegment246.children[1] = Transform248;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
Shape Shape250 = createNode("Shape");
LineSet LineSet251 = createNode("LineSet");
LineSet251.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate252 = createNode("Coordinate");
Coordinate252.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet251.coord = Coordinate252;

ColorRGBA ColorRGBA253 = createNode("ColorRGBA");
ColorRGBA253.USE = "HAnimSiteLineColorRGBA";
LineSet251.color = ColorRGBA253;

Shape250.geometry = LineSet251;

HAnimSegment246.children[2] = Shape250;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
Shape Shape254 = createNode("Shape");
LineSet LineSet255 = createNode("LineSet");
LineSet255.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate256 = createNode("Coordinate");
Coordinate256.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet255.coord = Coordinate256;

ColorRGBA ColorRGBA257 = createNode("ColorRGBA");
ColorRGBA257.USE = "HAnimSiteLineColorRGBA";
LineSet255.color = ColorRGBA257;

Shape254.geometry = LineSet255;

HAnimSegment246.children[3] = Shape254;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
Shape Shape258 = createNode("Shape");
LineSet LineSet259 = createNode("LineSet");
LineSet259.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate260 = createNode("Coordinate");
Coordinate260.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet259.coord = Coordinate260;

ColorRGBA ColorRGBA261 = createNode("ColorRGBA");
ColorRGBA261.USE = "HAnimSiteLineColorRGBA";
LineSet259.color = ColorRGBA261;

Shape258.geometry = LineSet259;

HAnimSegment246.children[4] = Shape258;

HAnimSite HAnimSite262 = createNode("HAnimSite");
HAnimSite262.name = "l_forefoot_tip";
HAnimSite262.DEF = "hanim_l_forefoot_tip";
HAnimSite262.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
TouchSensor TouchSensor263 = createNode("TouchSensor");
TouchSensor263.description = "HAnimSite l_forefoot_tip";
HAnimSite262.children = new MFNode();

HAnimSite262.children[0] = TouchSensor263;

Shape Shape264 = createNode("Shape");
Shape264.USE = "HAnimSiteShape";
HAnimSite262.children[1] = Shape264;

HAnimSegment246.children[5] = HAnimSite262;

HAnimSite HAnimSite265 = createNode("HAnimSite");
HAnimSite265.name = "l_metatarsal_pha5_pt";
HAnimSite265.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite265.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
TouchSensor TouchSensor266 = createNode("TouchSensor");
TouchSensor266.description = "HAnimSite l_metatarsal_pha5";
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = TouchSensor266;

Shape Shape267 = createNode("Shape");
Shape267.USE = "HAnimSiteShape";
HAnimSite265.children[1] = Shape267;

HAnimSegment246.children[6] = HAnimSite265;

HAnimSite HAnimSite268 = createNode("HAnimSite");
HAnimSite268.name = "l_digit2_pt";
HAnimSite268.DEF = "hanim_l_digit2_pt";
HAnimSite268.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
TouchSensor TouchSensor269 = createNode("TouchSensor");
TouchSensor269.description = "HAnimSite l_digit2";
HAnimSite268.children = new MFNode();

HAnimSite268.children[0] = TouchSensor269;

Shape Shape270 = createNode("Shape");
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

HAnimJoint HAnimJoint271 = createNode("HAnimJoint");
HAnimJoint271.name = "r_hip";
HAnimJoint271.DEF = "hanim_r_hip";
HAnimJoint271.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint271.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment272 = createNode("HAnimSegment");
HAnimSegment272.name = "r_thigh";
HAnimSegment272.DEF = "hanim_r_thigh";
//<HAnimJoint name='r_hip'/> visualization sphere is placed within <HAnimSegment name='r_thigh'/>
TouchSensor TouchSensor273 = createNode("TouchSensor");
TouchSensor273.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment272.children = new MFNode();

HAnimSegment272.children[0] = TouchSensor273;

Transform Transform274 = createNode("Transform");
Transform274.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
Shape Shape275 = createNode("Shape");
Shape275.USE = "HAnimJointShape";
Transform274.children = new MFNode();

Transform274.children[0] = Shape275;

HAnimSegment272.children[1] = Transform274;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
Shape Shape276 = createNode("Shape");
LineSet LineSet277 = createNode("LineSet");
LineSet277.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate278 = createNode("Coordinate");
Coordinate278.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet277.coord = Coordinate278;

ColorRGBA ColorRGBA279 = createNode("ColorRGBA");
ColorRGBA279.USE = "HAnimSegmentLineColorRGBA";
LineSet277.color = ColorRGBA279;

Shape276.geometry = LineSet277;

HAnimSegment272.children[2] = Shape276;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
Shape Shape280 = createNode("Shape");
LineSet LineSet281 = createNode("LineSet");
LineSet281.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate282 = createNode("Coordinate");
Coordinate282.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet281.coord = Coordinate282;

ColorRGBA ColorRGBA283 = createNode("ColorRGBA");
ColorRGBA283.USE = "HAnimSiteLineColorRGBA";
LineSet281.color = ColorRGBA283;

Shape280.geometry = LineSet281;

HAnimSegment272.children[3] = Shape280;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
Shape Shape284 = createNode("Shape");
LineSet LineSet285 = createNode("LineSet");
LineSet285.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate286 = createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet285.coord = Coordinate286;

ColorRGBA ColorRGBA287 = createNode("ColorRGBA");
ColorRGBA287.USE = "HAnimSiteLineColorRGBA";
LineSet285.color = ColorRGBA287;

Shape284.geometry = LineSet285;

HAnimSegment272.children[4] = Shape284;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
Shape Shape288 = createNode("Shape");
LineSet LineSet289 = createNode("LineSet");
LineSet289.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate290 = createNode("Coordinate");
Coordinate290.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet289.coord = Coordinate290;

ColorRGBA ColorRGBA291 = createNode("ColorRGBA");
ColorRGBA291.USE = "HAnimSiteLineColorRGBA";
LineSet289.color = ColorRGBA291;

Shape288.geometry = LineSet289;

HAnimSegment272.children[5] = Shape288;

HAnimSite HAnimSite292 = createNode("HAnimSite");
HAnimSite292.name = "r_knee_crease_pt";
HAnimSite292.DEF = "hanim_r_knee_crease_pt";
HAnimSite292.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
TouchSensor TouchSensor293 = createNode("TouchSensor");
TouchSensor293.description = "HAnimSite r_knee_crease";
HAnimSite292.children = new MFNode();

HAnimSite292.children[0] = TouchSensor293;

Shape Shape294 = createNode("Shape");
Shape294.USE = "HAnimSiteShape";
HAnimSite292.children[1] = Shape294;

HAnimSegment272.children[6] = HAnimSite292;

HAnimSite HAnimSite295 = createNode("HAnimSite");
HAnimSite295.name = "r_femoral_lateral_epicn_pt";
HAnimSite295.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite295.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
TouchSensor TouchSensor296 = createNode("TouchSensor");
TouchSensor296.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite295.children = new MFNode();

HAnimSite295.children[0] = TouchSensor296;

Shape Shape297 = createNode("Shape");
Shape297.USE = "HAnimSiteShape";
HAnimSite295.children[1] = Shape297;

HAnimSegment272.children[7] = HAnimSite295;

HAnimSite HAnimSite298 = createNode("HAnimSite");
HAnimSite298.name = "r_femoral_medial_epicn_pt";
HAnimSite298.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite298.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
TouchSensor TouchSensor299 = createNode("TouchSensor");
TouchSensor299.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite298.children = new MFNode();

HAnimSite298.children[0] = TouchSensor299;

Shape Shape300 = createNode("Shape");
Shape300.USE = "HAnimSiteShape";
HAnimSite298.children[1] = Shape300;

HAnimSegment272.children[8] = HAnimSite298;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

HAnimJoint HAnimJoint301 = createNode("HAnimJoint");
HAnimJoint301.name = "r_knee";
HAnimJoint301.DEF = "hanim_r_knee";
HAnimJoint301.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint301.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment302 = createNode("HAnimSegment");
HAnimSegment302.name = "r_calf";
HAnimSegment302.DEF = "hanim_r_calf";
//<HAnimJoint name='r_knee'/> visualization sphere is placed within <HAnimSegment name='r_calf'/>
TouchSensor TouchSensor303 = createNode("TouchSensor");
TouchSensor303.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment302.children = new MFNode();

HAnimSegment302.children[0] = TouchSensor303;

Transform Transform304 = createNode("Transform");
Transform304.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
Shape Shape305 = createNode("Shape");
Shape305.USE = "HAnimJointShape";
Transform304.children = new MFNode();

Transform304.children[0] = Shape305;

HAnimSegment302.children[1] = Transform304;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
Shape Shape306 = createNode("Shape");
LineSet LineSet307 = createNode("LineSet");
LineSet307.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate308 = createNode("Coordinate");
Coordinate308.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet307.coord = Coordinate308;

ColorRGBA ColorRGBA309 = createNode("ColorRGBA");
ColorRGBA309.USE = "HAnimSegmentLineColorRGBA";
LineSet307.color = ColorRGBA309;

Shape306.geometry = LineSet307;

HAnimSegment302.children[2] = Shape306;

HAnimJoint301.children = new MFNode();

HAnimJoint301.children[0] = HAnimSegment302;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.name = "r_ankle";
HAnimJoint310.DEF = "hanim_r_ankle";
HAnimJoint310.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint310.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment311 = createNode("HAnimSegment");
HAnimSegment311.name = "r_hindfoot";
HAnimSegment311.DEF = "hanim_r_hindfoot";
//<HAnimJoint name='r_ankle'/> visualization sphere is placed within <HAnimSegment name='r_hindfoot'/>
TouchSensor TouchSensor312 = createNode("TouchSensor");
TouchSensor312.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment311.children = new MFNode();

HAnimSegment311.children[0] = TouchSensor312;

Transform Transform313 = createNode("Transform");
Transform313.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
Shape Shape314 = createNode("Shape");
Shape314.USE = "HAnimJointShape";
Transform313.children = new MFNode();

Transform313.children[0] = Shape314;

HAnimSegment311.children[1] = Transform313;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
Shape Shape315 = createNode("Shape");
LineSet LineSet316 = createNode("LineSet");
LineSet316.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate317 = createNode("Coordinate");
Coordinate317.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet316.coord = Coordinate317;

ColorRGBA ColorRGBA318 = createNode("ColorRGBA");
ColorRGBA318.USE = "HAnimSegmentLineColorRGBA";
LineSet316.color = ColorRGBA318;

Shape315.geometry = LineSet316;

HAnimSegment311.children[2] = Shape315;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
Shape Shape319 = createNode("Shape");
LineSet LineSet320 = createNode("LineSet");
LineSet320.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate321 = createNode("Coordinate");
Coordinate321.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet320.coord = Coordinate321;

ColorRGBA ColorRGBA322 = createNode("ColorRGBA");
ColorRGBA322.USE = "HAnimSiteLineColorRGBA";
LineSet320.color = ColorRGBA322;

Shape319.geometry = LineSet320;

HAnimSegment311.children[3] = Shape319;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
Shape Shape323 = createNode("Shape");
LineSet LineSet324 = createNode("LineSet");
LineSet324.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate325 = createNode("Coordinate");
Coordinate325.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet324.coord = Coordinate325;

ColorRGBA ColorRGBA326 = createNode("ColorRGBA");
ColorRGBA326.USE = "HAnimSiteLineColorRGBA";
LineSet324.color = ColorRGBA326;

Shape323.geometry = LineSet324;

HAnimSegment311.children[4] = Shape323;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
Shape Shape327 = createNode("Shape");
LineSet LineSet328 = createNode("LineSet");
LineSet328.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate329 = createNode("Coordinate");
Coordinate329.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet328.coord = Coordinate329;

ColorRGBA ColorRGBA330 = createNode("ColorRGBA");
ColorRGBA330.USE = "HAnimSiteLineColorRGBA";
LineSet328.color = ColorRGBA330;

Shape327.geometry = LineSet328;

HAnimSegment311.children[5] = Shape327;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
Shape Shape331 = createNode("Shape");
LineSet LineSet332 = createNode("LineSet");
LineSet332.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate333 = createNode("Coordinate");
Coordinate333.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet332.coord = Coordinate333;

ColorRGBA ColorRGBA334 = createNode("ColorRGBA");
ColorRGBA334.USE = "HAnimSiteLineColorRGBA";
LineSet332.color = ColorRGBA334;

Shape331.geometry = LineSet332;

HAnimSegment311.children[6] = Shape331;

HAnimSite HAnimSite335 = createNode("HAnimSite");
HAnimSite335.name = "r_lateral_malleolus_pt";
HAnimSite335.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite335.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
TouchSensor TouchSensor336 = createNode("TouchSensor");
TouchSensor336.description = "HAnimSite r_lateral_malleolus";
HAnimSite335.children = new MFNode();

HAnimSite335.children[0] = TouchSensor336;

Shape Shape337 = createNode("Shape");
Shape337.USE = "HAnimSiteShape";
HAnimSite335.children[1] = Shape337;

HAnimSegment311.children[7] = HAnimSite335;

HAnimSite HAnimSite338 = createNode("HAnimSite");
HAnimSite338.name = "r_medial_malleolus_pt";
HAnimSite338.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite338.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
TouchSensor TouchSensor339 = createNode("TouchSensor");
TouchSensor339.description = "HAnimSite r_medial_malleolus";
HAnimSite338.children = new MFNode();

HAnimSite338.children[0] = TouchSensor339;

Shape Shape340 = createNode("Shape");
Shape340.USE = "HAnimSiteShape";
HAnimSite338.children[1] = Shape340;

HAnimSegment311.children[8] = HAnimSite338;

HAnimSite HAnimSite341 = createNode("HAnimSite");
HAnimSite341.name = "r_sphyrion_pt";
HAnimSite341.DEF = "hanim_r_sphyrion_pt";
HAnimSite341.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
TouchSensor TouchSensor342 = createNode("TouchSensor");
TouchSensor342.description = "HAnimSite r_sphyrion";
HAnimSite341.children = new MFNode();

HAnimSite341.children[0] = TouchSensor342;

Shape Shape343 = createNode("Shape");
Shape343.USE = "HAnimSiteShape";
HAnimSite341.children[1] = Shape343;

HAnimSegment311.children[9] = HAnimSite341;

HAnimSite HAnimSite344 = createNode("HAnimSite");
HAnimSite344.name = "r_calcaneous_post_pt";
HAnimSite344.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite344.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
TouchSensor TouchSensor345 = createNode("TouchSensor");
TouchSensor345.description = "HAnimSite r_calcaneous_post";
HAnimSite344.children = new MFNode();

HAnimSite344.children[0] = TouchSensor345;

Shape Shape346 = createNode("Shape");
Shape346.USE = "HAnimSiteShape";
HAnimSite344.children[1] = Shape346;

HAnimSegment311.children[10] = HAnimSite344;

HAnimJoint310.children = new MFNode();

HAnimJoint310.children[0] = HAnimSegment311;

HAnimJoint HAnimJoint347 = createNode("HAnimJoint");
HAnimJoint347.name = "r_subtalar";
HAnimJoint347.DEF = "hanim_r_subtalar";
HAnimJoint347.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint347.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment348 = createNode("HAnimSegment");
HAnimSegment348.name = "r_midproximal";
HAnimSegment348.DEF = "hanim_r_midproximal";
//<HAnimJoint name='r_subtalar'/> visualization sphere is placed within <HAnimSegment name='r_midproximal'/>
TouchSensor TouchSensor349 = createNode("TouchSensor");
TouchSensor349.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment348.children = new MFNode();

HAnimSegment348.children[0] = TouchSensor349;

Transform Transform350 = createNode("Transform");
Transform350.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
Shape Shape351 = createNode("Shape");
Shape351.USE = "HAnimJointShape";
Transform350.children = new MFNode();

Transform350.children[0] = Shape351;

HAnimSegment348.children[1] = Transform350;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
Shape Shape352 = createNode("Shape");
LineSet LineSet353 = createNode("LineSet");
LineSet353.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate354 = createNode("Coordinate");
Coordinate354.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet353.coord = Coordinate354;

ColorRGBA ColorRGBA355 = createNode("ColorRGBA");
ColorRGBA355.USE = "HAnimSegmentLineColorRGBA";
LineSet353.color = ColorRGBA355;

Shape352.geometry = LineSet353;

HAnimSegment348.children[2] = Shape352;

HAnimJoint347.children = new MFNode();

HAnimJoint347.children[0] = HAnimSegment348;

HAnimJoint HAnimJoint356 = createNode("HAnimJoint");
HAnimJoint356.name = "r_midtarsal";
HAnimJoint356.DEF = "hanim_r_midtarsal";
HAnimJoint356.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint356.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment357 = createNode("HAnimSegment");
HAnimSegment357.name = "r_middistal";
HAnimSegment357.DEF = "hanim_r_middistal";
//<HAnimJoint name='r_midtarsal'/> visualization sphere is placed within <HAnimSegment name='r_middistal'/>
TouchSensor TouchSensor358 = createNode("TouchSensor");
TouchSensor358.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment357.children = new MFNode();

HAnimSegment357.children[0] = TouchSensor358;

Transform Transform359 = createNode("Transform");
Transform359.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
Shape Shape360 = createNode("Shape");
Shape360.USE = "HAnimJointShape";
Transform359.children = new MFNode();

Transform359.children[0] = Shape360;

HAnimSegment357.children[1] = Transform359;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
Shape Shape361 = createNode("Shape");
LineSet LineSet362 = createNode("LineSet");
LineSet362.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate363 = createNode("Coordinate");
Coordinate363.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet362.coord = Coordinate363;

ColorRGBA ColorRGBA364 = createNode("ColorRGBA");
ColorRGBA364.USE = "HAnimSegmentLineColorRGBA";
LineSet362.color = ColorRGBA364;

Shape361.geometry = LineSet362;

HAnimSegment357.children[2] = Shape361;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
Shape Shape365 = createNode("Shape");
LineSet LineSet366 = createNode("LineSet");
LineSet366.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate367 = createNode("Coordinate");
Coordinate367.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet366.coord = Coordinate367;

ColorRGBA ColorRGBA368 = createNode("ColorRGBA");
ColorRGBA368.USE = "HAnimSiteLineColorRGBA";
LineSet366.color = ColorRGBA368;

Shape365.geometry = LineSet366;

HAnimSegment357.children[3] = Shape365;

HAnimSite HAnimSite369 = createNode("HAnimSite");
HAnimSite369.name = "r_metatarsal_pha1_pt";
HAnimSite369.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite369.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
TouchSensor TouchSensor370 = createNode("TouchSensor");
TouchSensor370.description = "HAnimSite r_metatarsal_pha1";
HAnimSite369.children = new MFNode();

HAnimSite369.children[0] = TouchSensor370;

Shape Shape371 = createNode("Shape");
Shape371.USE = "HAnimSiteShape";
HAnimSite369.children[1] = Shape371;

HAnimSegment357.children[4] = HAnimSite369;

HAnimJoint356.children = new MFNode();

HAnimJoint356.children[0] = HAnimSegment357;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.name = "r_metatarsal";
HAnimJoint372.DEF = "hanim_r_metatarsal";
HAnimJoint372.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint372.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment373 = createNode("HAnimSegment");
HAnimSegment373.name = "r_forefoot";
HAnimSegment373.DEF = "hanim_r_forefoot";
//<HAnimJoint name='r_metatarsal'/> visualization sphere is placed within <HAnimSegment name='r_forefoot'/>
TouchSensor TouchSensor374 = createNode("TouchSensor");
TouchSensor374.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment373.children = new MFNode();

HAnimSegment373.children[0] = TouchSensor374;

Transform Transform375 = createNode("Transform");
Transform375.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
Shape Shape376 = createNode("Shape");
Shape376.USE = "HAnimJointShape";
Transform375.children = new MFNode();

Transform375.children[0] = Shape376;

HAnimSegment373.children[1] = Transform375;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
Shape Shape377 = createNode("Shape");
LineSet LineSet378 = createNode("LineSet");
LineSet378.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate379 = createNode("Coordinate");
Coordinate379.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet378.coord = Coordinate379;

ColorRGBA ColorRGBA380 = createNode("ColorRGBA");
ColorRGBA380.USE = "HAnimSiteLineColorRGBA";
LineSet378.color = ColorRGBA380;

Shape377.geometry = LineSet378;

HAnimSegment373.children[2] = Shape377;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
Shape Shape381 = createNode("Shape");
LineSet LineSet382 = createNode("LineSet");
LineSet382.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate383 = createNode("Coordinate");
Coordinate383.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet382.coord = Coordinate383;

ColorRGBA ColorRGBA384 = createNode("ColorRGBA");
ColorRGBA384.USE = "HAnimSiteLineColorRGBA";
LineSet382.color = ColorRGBA384;

Shape381.geometry = LineSet382;

HAnimSegment373.children[3] = Shape381;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
Shape Shape385 = createNode("Shape");
LineSet LineSet386 = createNode("LineSet");
LineSet386.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate387 = createNode("Coordinate");
Coordinate387.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet386.coord = Coordinate387;

ColorRGBA ColorRGBA388 = createNode("ColorRGBA");
ColorRGBA388.USE = "HAnimSiteLineColorRGBA";
LineSet386.color = ColorRGBA388;

Shape385.geometry = LineSet386;

HAnimSegment373.children[4] = Shape385;

HAnimSite HAnimSite389 = createNode("HAnimSite");
HAnimSite389.name = "r_forefoot_tip";
HAnimSite389.DEF = "hanim_r_forefoot_tip";
HAnimSite389.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
TouchSensor TouchSensor390 = createNode("TouchSensor");
TouchSensor390.description = "HAnimSite r_forefoot_tip";
HAnimSite389.children = new MFNode();

HAnimSite389.children[0] = TouchSensor390;

Shape Shape391 = createNode("Shape");
Shape391.USE = "HAnimSiteShape";
HAnimSite389.children[1] = Shape391;

HAnimSegment373.children[5] = HAnimSite389;

HAnimSite HAnimSite392 = createNode("HAnimSite");
HAnimSite392.name = "r_metatarsal_pha5_pt";
HAnimSite392.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite392.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
TouchSensor TouchSensor393 = createNode("TouchSensor");
TouchSensor393.description = "HAnimSite r_metatarsal_pha5";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

Shape Shape394 = createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment373.children[6] = HAnimSite392;

HAnimSite HAnimSite395 = createNode("HAnimSite");
HAnimSite395.name = "r_digit2_pt";
HAnimSite395.DEF = "hanim_r_digit2_pt";
HAnimSite395.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
TouchSensor TouchSensor396 = createNode("TouchSensor");
TouchSensor396.description = "HAnimSite r_digit2";
HAnimSite395.children = new MFNode();

HAnimSite395.children[0] = TouchSensor396;

Shape Shape397 = createNode("Shape");
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

HAnimJoint HAnimJoint398 = createNode("HAnimJoint");
HAnimJoint398.name = "vl5";
HAnimJoint398.DEF = "hanim_vl5";
HAnimJoint398.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint398.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment399 = createNode("HAnimSegment");
HAnimSegment399.name = "l5";
HAnimSegment399.DEF = "hanim_l5";
//<HAnimJoint name='vl5'/> visualization sphere is placed within <HAnimSegment name='l5'/>
TouchSensor TouchSensor400 = createNode("TouchSensor");
TouchSensor400.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment399.children = new MFNode();

HAnimSegment399.children[0] = TouchSensor400;

Transform Transform401 = createNode("Transform");
Transform401.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Shape Shape402 = createNode("Shape");
Shape402.USE = "HAnimJointShape";
Transform401.children = new MFNode();

Transform401.children[0] = Shape402;

HAnimSegment399.children[1] = Transform401;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
Shape Shape403 = createNode("Shape");
LineSet LineSet404 = createNode("LineSet");
LineSet404.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate405 = createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet404.coord = Coordinate405;

ColorRGBA ColorRGBA406 = createNode("ColorRGBA");
ColorRGBA406.USE = "HAnimSegmentLineColorRGBA";
LineSet404.color = ColorRGBA406;

Shape403.geometry = LineSet404;

HAnimSegment399.children[2] = Shape403;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
Shape Shape407 = createNode("Shape");
LineSet LineSet408 = createNode("LineSet");
LineSet408.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate409 = createNode("Coordinate");
Coordinate409.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet408.coord = Coordinate409;

ColorRGBA ColorRGBA410 = createNode("ColorRGBA");
ColorRGBA410.USE = "HAnimSiteLineColorRGBA";
LineSet408.color = ColorRGBA410;

Shape407.geometry = LineSet408;

HAnimSegment399.children[3] = Shape407;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
Shape Shape411 = createNode("Shape");
LineSet LineSet412 = createNode("LineSet");
LineSet412.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate413 = createNode("Coordinate");
Coordinate413.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet412.coord = Coordinate413;

ColorRGBA ColorRGBA414 = createNode("ColorRGBA");
ColorRGBA414.USE = "HAnimSiteLineColorRGBA";
LineSet412.color = ColorRGBA414;

Shape411.geometry = LineSet412;

HAnimSegment399.children[4] = Shape411;

HAnimSite HAnimSite415 = createNode("HAnimSite");
HAnimSite415.name = "waist_preferred_post_pt";
HAnimSite415.DEF = "hanim_waist_preferred_post_pt";
HAnimSite415.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
TouchSensor TouchSensor416 = createNode("TouchSensor");
TouchSensor416.description = "HAnimSite waist_preferred_post";
HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = TouchSensor416;

Shape Shape417 = createNode("Shape");
Shape417.USE = "HAnimSiteShape";
HAnimSite415.children[1] = Shape417;

HAnimSegment399.children[5] = HAnimSite415;

HAnimSite HAnimSite418 = createNode("HAnimSite");
HAnimSite418.name = "navel_pt";
HAnimSite418.DEF = "hanim_navel_pt";
HAnimSite418.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
TouchSensor TouchSensor419 = createNode("TouchSensor");
TouchSensor419.description = "HAnimSite navel";
HAnimSite418.children = new MFNode();

HAnimSite418.children[0] = TouchSensor419;

Shape Shape420 = createNode("Shape");
Shape420.USE = "HAnimSiteShape";
HAnimSite418.children[1] = Shape420;

HAnimSegment399.children[6] = HAnimSite418;

HAnimJoint398.children = new MFNode();

HAnimJoint398.children[0] = HAnimSegment399;

HAnimJoint HAnimJoint421 = createNode("HAnimJoint");
HAnimJoint421.name = "vl4";
HAnimJoint421.DEF = "hanim_vl4";
HAnimJoint421.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint421.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment422 = createNode("HAnimSegment");
HAnimSegment422.name = "l4";
HAnimSegment422.DEF = "hanim_l4";
//<HAnimJoint name='vl4'/> visualization sphere is placed within <HAnimSegment name='l4'/>
TouchSensor TouchSensor423 = createNode("TouchSensor");
TouchSensor423.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment422.children = new MFNode();

HAnimSegment422.children[0] = TouchSensor423;

Transform Transform424 = createNode("Transform");
Transform424.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Shape Shape425 = createNode("Shape");
Shape425.USE = "HAnimJointShape";
Transform424.children = new MFNode();

Transform424.children[0] = Shape425;

HAnimSegment422.children[1] = Transform424;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
Shape Shape426 = createNode("Shape");
LineSet LineSet427 = createNode("LineSet");
LineSet427.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate428 = createNode("Coordinate");
Coordinate428.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet427.coord = Coordinate428;

ColorRGBA ColorRGBA429 = createNode("ColorRGBA");
ColorRGBA429.USE = "HAnimSegmentLineColorRGBA";
LineSet427.color = ColorRGBA429;

Shape426.geometry = LineSet427;

HAnimSegment422.children[2] = Shape426;

HAnimJoint421.children = new MFNode();

HAnimJoint421.children[0] = HAnimSegment422;

HAnimJoint HAnimJoint430 = createNode("HAnimJoint");
HAnimJoint430.name = "vl3";
HAnimJoint430.DEF = "hanim_vl3";
HAnimJoint430.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint430.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment431 = createNode("HAnimSegment");
HAnimSegment431.name = "l3";
HAnimSegment431.DEF = "hanim_l3";
//<HAnimJoint name='vl3'/> visualization sphere is placed within <HAnimSegment name='l3'/>
TouchSensor TouchSensor432 = createNode("TouchSensor");
TouchSensor432.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment431.children = new MFNode();

HAnimSegment431.children[0] = TouchSensor432;

Transform Transform433 = createNode("Transform");
Transform433.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Shape Shape434 = createNode("Shape");
Shape434.USE = "HAnimJointShape";
Transform433.children = new MFNode();

Transform433.children[0] = Shape434;

HAnimSegment431.children[1] = Transform433;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
Shape Shape435 = createNode("Shape");
LineSet LineSet436 = createNode("LineSet");
LineSet436.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate437 = createNode("Coordinate");
Coordinate437.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet436.coord = Coordinate437;

ColorRGBA ColorRGBA438 = createNode("ColorRGBA");
ColorRGBA438.USE = "HAnimSegmentLineColorRGBA";
LineSet436.color = ColorRGBA438;

Shape435.geometry = LineSet436;

HAnimSegment431.children[2] = Shape435;

HAnimJoint430.children = new MFNode();

HAnimJoint430.children[0] = HAnimSegment431;

HAnimJoint HAnimJoint439 = createNode("HAnimJoint");
HAnimJoint439.name = "vl2";
HAnimJoint439.DEF = "hanim_vl2";
HAnimJoint439.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint439.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment440 = createNode("HAnimSegment");
HAnimSegment440.name = "l2";
HAnimSegment440.DEF = "hanim_l2";
//<HAnimJoint name='vl2'/> visualization sphere is placed within <HAnimSegment name='l2'/>
TouchSensor TouchSensor441 = createNode("TouchSensor");
TouchSensor441.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment440.children = new MFNode();

HAnimSegment440.children[0] = TouchSensor441;

Transform Transform442 = createNode("Transform");
Transform442.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Shape Shape443 = createNode("Shape");
Shape443.USE = "HAnimJointShape";
Transform442.children = new MFNode();

Transform442.children[0] = Shape443;

HAnimSegment440.children[1] = Transform442;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
Shape Shape444 = createNode("Shape");
LineSet LineSet445 = createNode("LineSet");
LineSet445.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate446 = createNode("Coordinate");
Coordinate446.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet445.coord = Coordinate446;

ColorRGBA ColorRGBA447 = createNode("ColorRGBA");
ColorRGBA447.USE = "HAnimSegmentLineColorRGBA";
LineSet445.color = ColorRGBA447;

Shape444.geometry = LineSet445;

HAnimSegment440.children[2] = Shape444;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
Shape Shape448 = createNode("Shape");
LineSet LineSet449 = createNode("LineSet");
LineSet449.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate450 = createNode("Coordinate");
Coordinate450.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet449.coord = Coordinate450;

ColorRGBA ColorRGBA451 = createNode("ColorRGBA");
ColorRGBA451.USE = "HAnimSiteLineColorRGBA";
LineSet449.color = ColorRGBA451;

Shape448.geometry = LineSet449;

HAnimSegment440.children[3] = Shape448;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
Shape Shape452 = createNode("Shape");
LineSet LineSet453 = createNode("LineSet");
LineSet453.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate454 = createNode("Coordinate");
Coordinate454.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet453.coord = Coordinate454;

ColorRGBA ColorRGBA455 = createNode("ColorRGBA");
ColorRGBA455.USE = "HAnimSiteLineColorRGBA";
LineSet453.color = ColorRGBA455;

Shape452.geometry = LineSet453;

HAnimSegment440.children[4] = Shape452;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
Shape Shape456 = createNode("Shape");
LineSet LineSet457 = createNode("LineSet");
LineSet457.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate458 = createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet457.coord = Coordinate458;

ColorRGBA ColorRGBA459 = createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSiteLineColorRGBA";
LineSet457.color = ColorRGBA459;

Shape456.geometry = LineSet457;

HAnimSegment440.children[5] = Shape456;

HAnimSite HAnimSite460 = createNode("HAnimSite");
HAnimSite460.name = "r_rib10_pt";
HAnimSite460.DEF = "hanim_r_rib10_pt";
HAnimSite460.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
TouchSensor TouchSensor461 = createNode("TouchSensor");
TouchSensor461.description = "HAnimSite r_rib10";
HAnimSite460.children = new MFNode();

HAnimSite460.children[0] = TouchSensor461;

Shape Shape462 = createNode("Shape");
Shape462.USE = "HAnimSiteShape";
HAnimSite460.children[1] = Shape462;

HAnimSegment440.children[6] = HAnimSite460;

HAnimSite HAnimSite463 = createNode("HAnimSite");
HAnimSite463.name = "l_rib10_pt";
HAnimSite463.DEF = "hanim_l_rib10_pt";
HAnimSite463.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
TouchSensor TouchSensor464 = createNode("TouchSensor");
TouchSensor464.description = "HAnimSite l_rib10";
HAnimSite463.children = new MFNode();

HAnimSite463.children[0] = TouchSensor464;

Shape Shape465 = createNode("Shape");
Shape465.USE = "HAnimSiteShape";
HAnimSite463.children[1] = Shape465;

HAnimSegment440.children[7] = HAnimSite463;

HAnimSite HAnimSite466 = createNode("HAnimSite");
HAnimSite466.name = "rib10_midspine_pt";
HAnimSite466.DEF = "hanim_rib10_midspine_pt";
HAnimSite466.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
TouchSensor TouchSensor467 = createNode("TouchSensor");
TouchSensor467.description = "HAnimSite rib10_midspine";
HAnimSite466.children = new MFNode();

HAnimSite466.children[0] = TouchSensor467;

Shape Shape468 = createNode("Shape");
Shape468.USE = "HAnimSiteShape";
HAnimSite466.children[1] = Shape468;

HAnimSegment440.children[8] = HAnimSite466;

HAnimJoint439.children = new MFNode();

HAnimJoint439.children[0] = HAnimSegment440;

HAnimJoint HAnimJoint469 = createNode("HAnimJoint");
HAnimJoint469.name = "vl1";
HAnimJoint469.DEF = "hanim_vl1";
HAnimJoint469.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint469.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment470 = createNode("HAnimSegment");
HAnimSegment470.name = "l1";
HAnimSegment470.DEF = "hanim_l1";
//<HAnimJoint name='vl1'/> visualization sphere is placed within <HAnimSegment name='l1'/>
TouchSensor TouchSensor471 = createNode("TouchSensor");
TouchSensor471.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment470.children = new MFNode();

HAnimSegment470.children[0] = TouchSensor471;

Transform Transform472 = createNode("Transform");
Transform472.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Shape Shape473 = createNode("Shape");
Shape473.USE = "HAnimJointShape";
Transform472.children = new MFNode();

Transform472.children[0] = Shape473;

HAnimSegment470.children[1] = Transform472;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
Shape Shape474 = createNode("Shape");
LineSet LineSet475 = createNode("LineSet");
LineSet475.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate476 = createNode("Coordinate");
Coordinate476.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet475.coord = Coordinate476;

ColorRGBA ColorRGBA477 = createNode("ColorRGBA");
ColorRGBA477.USE = "HAnimSegmentLineColorRGBA";
LineSet475.color = ColorRGBA477;

Shape474.geometry = LineSet475;

HAnimSegment470.children[2] = Shape474;

HAnimJoint469.children = new MFNode();

HAnimJoint469.children[0] = HAnimSegment470;

HAnimJoint HAnimJoint478 = createNode("HAnimJoint");
HAnimJoint478.name = "vt12";
HAnimJoint478.DEF = "hanim_vt12";
HAnimJoint478.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint478.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment479 = createNode("HAnimSegment");
HAnimSegment479.name = "t12";
HAnimSegment479.DEF = "hanim_t12";
//<HAnimJoint name='vt12'/> visualization sphere is placed within <HAnimSegment name='t12'/>
TouchSensor TouchSensor480 = createNode("TouchSensor");
TouchSensor480.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment479.children = new MFNode();

HAnimSegment479.children[0] = TouchSensor480;

Transform Transform481 = createNode("Transform");
Transform481.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Shape Shape482 = createNode("Shape");
Shape482.USE = "HAnimJointShape";
Transform481.children = new MFNode();

Transform481.children[0] = Shape482;

HAnimSegment479.children[1] = Transform481;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
Shape Shape483 = createNode("Shape");
LineSet LineSet484 = createNode("LineSet");
LineSet484.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate485 = createNode("Coordinate");
Coordinate485.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet484.coord = Coordinate485;

ColorRGBA ColorRGBA486 = createNode("ColorRGBA");
ColorRGBA486.USE = "HAnimSegmentLineColorRGBA";
LineSet484.color = ColorRGBA486;

Shape483.geometry = LineSet484;

HAnimSegment479.children[2] = Shape483;

HAnimJoint478.children = new MFNode();

HAnimJoint478.children[0] = HAnimSegment479;

HAnimJoint HAnimJoint487 = createNode("HAnimJoint");
HAnimJoint487.name = "vt11";
HAnimJoint487.DEF = "hanim_vt11";
HAnimJoint487.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint487.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment488 = createNode("HAnimSegment");
HAnimSegment488.name = "t11";
HAnimSegment488.DEF = "hanim_t11";
//<HAnimJoint name='vt11'/> visualization sphere is placed within <HAnimSegment name='t11'/>
TouchSensor TouchSensor489 = createNode("TouchSensor");
TouchSensor489.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment488.children = new MFNode();

HAnimSegment488.children[0] = TouchSensor489;

Transform Transform490 = createNode("Transform");
Transform490.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Shape Shape491 = createNode("Shape");
Shape491.USE = "HAnimJointShape";
Transform490.children = new MFNode();

Transform490.children[0] = Shape491;

HAnimSegment488.children[1] = Transform490;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
Shape Shape492 = createNode("Shape");
LineSet LineSet493 = createNode("LineSet");
LineSet493.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate494 = createNode("Coordinate");
Coordinate494.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet493.coord = Coordinate494;

ColorRGBA ColorRGBA495 = createNode("ColorRGBA");
ColorRGBA495.USE = "HAnimSegmentLineColorRGBA";
LineSet493.color = ColorRGBA495;

Shape492.geometry = LineSet493;

HAnimSegment488.children[2] = Shape492;

HAnimJoint487.children = new MFNode();

HAnimJoint487.children[0] = HAnimSegment488;

HAnimJoint HAnimJoint496 = createNode("HAnimJoint");
HAnimJoint496.name = "vt10";
HAnimJoint496.DEF = "hanim_vt10";
HAnimJoint496.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint496.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment497 = createNode("HAnimSegment");
HAnimSegment497.name = "t10";
HAnimSegment497.DEF = "hanim_t10";
//<HAnimJoint name='vt10'/> visualization sphere is placed within <HAnimSegment name='t10'/>
TouchSensor TouchSensor498 = createNode("TouchSensor");
TouchSensor498.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment497.children = new MFNode();

HAnimSegment497.children[0] = TouchSensor498;

Transform Transform499 = createNode("Transform");
Transform499.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Shape Shape500 = createNode("Shape");
Shape500.USE = "HAnimJointShape";
Transform499.children = new MFNode();

Transform499.children[0] = Shape500;

HAnimSegment497.children[1] = Transform499;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
Shape Shape501 = createNode("Shape");
LineSet LineSet502 = createNode("LineSet");
LineSet502.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate503 = createNode("Coordinate");
Coordinate503.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet502.coord = Coordinate503;

ColorRGBA ColorRGBA504 = createNode("ColorRGBA");
ColorRGBA504.USE = "HAnimSegmentLineColorRGBA";
LineSet502.color = ColorRGBA504;

Shape501.geometry = LineSet502;

HAnimSegment497.children[2] = Shape501;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
Shape Shape505 = createNode("Shape");
LineSet LineSet506 = createNode("LineSet");
LineSet506.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate507 = createNode("Coordinate");
Coordinate507.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet506.coord = Coordinate507;

ColorRGBA ColorRGBA508 = createNode("ColorRGBA");
ColorRGBA508.USE = "HAnimSiteLineColorRGBA";
LineSet506.color = ColorRGBA508;

Shape505.geometry = LineSet506;

HAnimSegment497.children[3] = Shape505;

HAnimSite HAnimSite509 = createNode("HAnimSite");
HAnimSite509.name = "substernale_pt";
HAnimSite509.DEF = "hanim_substernale_pt";
HAnimSite509.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
TouchSensor TouchSensor510 = createNode("TouchSensor");
TouchSensor510.description = "HAnimSite substernale";
HAnimSite509.children = new MFNode();

HAnimSite509.children[0] = TouchSensor510;

Shape Shape511 = createNode("Shape");
Shape511.USE = "HAnimSiteShape";
HAnimSite509.children[1] = Shape511;

HAnimSegment497.children[4] = HAnimSite509;

HAnimJoint496.children = new MFNode();

HAnimJoint496.children[0] = HAnimSegment497;

HAnimJoint HAnimJoint512 = createNode("HAnimJoint");
HAnimJoint512.name = "vt9";
HAnimJoint512.DEF = "hanim_vt9";
HAnimJoint512.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint512.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment513 = createNode("HAnimSegment");
HAnimSegment513.name = "t9";
HAnimSegment513.DEF = "hanim_t9";
//<HAnimJoint name='vt9'/> visualization sphere is placed within <HAnimSegment name='t9'/>
TouchSensor TouchSensor514 = createNode("TouchSensor");
TouchSensor514.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment513.children = new MFNode();

HAnimSegment513.children[0] = TouchSensor514;

Transform Transform515 = createNode("Transform");
Transform515.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Shape Shape516 = createNode("Shape");
Shape516.USE = "HAnimJointShape";
Transform515.children = new MFNode();

Transform515.children[0] = Shape516;

HAnimSegment513.children[1] = Transform515;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
Shape Shape517 = createNode("Shape");
LineSet LineSet518 = createNode("LineSet");
LineSet518.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate519 = createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet518.coord = Coordinate519;

ColorRGBA ColorRGBA520 = createNode("ColorRGBA");
ColorRGBA520.USE = "HAnimSegmentLineColorRGBA";
LineSet518.color = ColorRGBA520;

Shape517.geometry = LineSet518;

HAnimSegment513.children[2] = Shape517;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
Shape Shape521 = createNode("Shape");
LineSet LineSet522 = createNode("LineSet");
LineSet522.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate523 = createNode("Coordinate");
Coordinate523.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet522.coord = Coordinate523;

ColorRGBA ColorRGBA524 = createNode("ColorRGBA");
ColorRGBA524.USE = "HAnimSiteLineColorRGBA";
LineSet522.color = ColorRGBA524;

Shape521.geometry = LineSet522;

HAnimSegment513.children[3] = Shape521;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
Shape Shape525 = createNode("Shape");
LineSet LineSet526 = createNode("LineSet");
LineSet526.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate527 = createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet526.coord = Coordinate527;

ColorRGBA ColorRGBA528 = createNode("ColorRGBA");
ColorRGBA528.USE = "HAnimSiteLineColorRGBA";
LineSet526.color = ColorRGBA528;

Shape525.geometry = LineSet526;

HAnimSegment513.children[4] = Shape525;

HAnimSite HAnimSite529 = createNode("HAnimSite");
HAnimSite529.name = "r_thelion_pt";
HAnimSite529.DEF = "hanim_r_thelion_pt";
HAnimSite529.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
TouchSensor TouchSensor530 = createNode("TouchSensor");
TouchSensor530.description = "HAnimSite r_thelion";
HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = TouchSensor530;

Shape Shape531 = createNode("Shape");
Shape531.USE = "HAnimSiteShape";
HAnimSite529.children[1] = Shape531;

HAnimSegment513.children[5] = HAnimSite529;

HAnimSite HAnimSite532 = createNode("HAnimSite");
HAnimSite532.name = "l_thelion_pt";
HAnimSite532.DEF = "hanim_l_thelion_pt";
HAnimSite532.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
TouchSensor TouchSensor533 = createNode("TouchSensor");
TouchSensor533.description = "HAnimSite l_thelion";
HAnimSite532.children = new MFNode();

HAnimSite532.children[0] = TouchSensor533;

Shape Shape534 = createNode("Shape");
Shape534.USE = "HAnimSiteShape";
HAnimSite532.children[1] = Shape534;

HAnimSegment513.children[6] = HAnimSite532;

HAnimJoint512.children = new MFNode();

HAnimJoint512.children[0] = HAnimSegment513;

HAnimJoint HAnimJoint535 = createNode("HAnimJoint");
HAnimJoint535.name = "vt8";
HAnimJoint535.DEF = "hanim_vt8";
HAnimJoint535.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint535.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment536 = createNode("HAnimSegment");
HAnimSegment536.name = "t8";
HAnimSegment536.DEF = "hanim_t8";
//<HAnimJoint name='vt8'/> visualization sphere is placed within <HAnimSegment name='t8'/>
TouchSensor TouchSensor537 = createNode("TouchSensor");
TouchSensor537.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment536.children = new MFNode();

HAnimSegment536.children[0] = TouchSensor537;

Transform Transform538 = createNode("Transform");
Transform538.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Shape Shape539 = createNode("Shape");
Shape539.USE = "HAnimJointShape";
Transform538.children = new MFNode();

Transform538.children[0] = Shape539;

HAnimSegment536.children[1] = Transform538;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
Shape Shape540 = createNode("Shape");
LineSet LineSet541 = createNode("LineSet");
LineSet541.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate542 = createNode("Coordinate");
Coordinate542.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet541.coord = Coordinate542;

ColorRGBA ColorRGBA543 = createNode("ColorRGBA");
ColorRGBA543.USE = "HAnimSegmentLineColorRGBA";
LineSet541.color = ColorRGBA543;

Shape540.geometry = LineSet541;

HAnimSegment536.children[2] = Shape540;

HAnimJoint535.children = new MFNode();

HAnimJoint535.children[0] = HAnimSegment536;

HAnimJoint HAnimJoint544 = createNode("HAnimJoint");
HAnimJoint544.name = "vt7";
HAnimJoint544.DEF = "hanim_vt7";
HAnimJoint544.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint544.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment545 = createNode("HAnimSegment");
HAnimSegment545.name = "t7";
HAnimSegment545.DEF = "hanim_t7";
//<HAnimJoint name='vt7'/> visualization sphere is placed within <HAnimSegment name='t7'/>
TouchSensor TouchSensor546 = createNode("TouchSensor");
TouchSensor546.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment545.children = new MFNode();

HAnimSegment545.children[0] = TouchSensor546;

Transform Transform547 = createNode("Transform");
Transform547.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Shape Shape548 = createNode("Shape");
Shape548.USE = "HAnimJointShape";
Transform547.children = new MFNode();

Transform547.children[0] = Shape548;

HAnimSegment545.children[1] = Transform547;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
Shape Shape549 = createNode("Shape");
LineSet LineSet550 = createNode("LineSet");
LineSet550.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate551 = createNode("Coordinate");
Coordinate551.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet550.coord = Coordinate551;

ColorRGBA ColorRGBA552 = createNode("ColorRGBA");
ColorRGBA552.USE = "HAnimSegmentLineColorRGBA";
LineSet550.color = ColorRGBA552;

Shape549.geometry = LineSet550;

HAnimSegment545.children[2] = Shape549;

HAnimJoint544.children = new MFNode();

HAnimJoint544.children[0] = HAnimSegment545;

HAnimJoint HAnimJoint553 = createNode("HAnimJoint");
HAnimJoint553.name = "vt6";
HAnimJoint553.DEF = "hanim_vt6";
HAnimJoint553.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint553.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment554 = createNode("HAnimSegment");
HAnimSegment554.name = "t6";
HAnimSegment554.DEF = "hanim_t6";
//<HAnimJoint name='vt6'/> visualization sphere is placed within <HAnimSegment name='t6'/>
TouchSensor TouchSensor555 = createNode("TouchSensor");
TouchSensor555.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment554.children = new MFNode();

HAnimSegment554.children[0] = TouchSensor555;

Transform Transform556 = createNode("Transform");
Transform556.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Shape Shape557 = createNode("Shape");
Shape557.USE = "HAnimJointShape";
Transform556.children = new MFNode();

Transform556.children[0] = Shape557;

HAnimSegment554.children[1] = Transform556;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
Shape Shape558 = createNode("Shape");
LineSet LineSet559 = createNode("LineSet");
LineSet559.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate560 = createNode("Coordinate");
Coordinate560.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet559.coord = Coordinate560;

ColorRGBA ColorRGBA561 = createNode("ColorRGBA");
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA";
LineSet559.color = ColorRGBA561;

Shape558.geometry = LineSet559;

HAnimSegment554.children[2] = Shape558;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = HAnimSegment554;

HAnimJoint HAnimJoint562 = createNode("HAnimJoint");
HAnimJoint562.name = "vt5";
HAnimJoint562.DEF = "hanim_vt5";
HAnimJoint562.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint562.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment563 = createNode("HAnimSegment");
HAnimSegment563.name = "t5";
HAnimSegment563.DEF = "hanim_t5";
//<HAnimJoint name='vt5'/> visualization sphere is placed within <HAnimSegment name='t5'/>
TouchSensor TouchSensor564 = createNode("TouchSensor");
TouchSensor564.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment563.children = new MFNode();

HAnimSegment563.children[0] = TouchSensor564;

Transform Transform565 = createNode("Transform");
Transform565.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Shape Shape566 = createNode("Shape");
Shape566.USE = "HAnimJointShape";
Transform565.children = new MFNode();

Transform565.children[0] = Shape566;

HAnimSegment563.children[1] = Transform565;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
Shape Shape567 = createNode("Shape");
LineSet LineSet568 = createNode("LineSet");
LineSet568.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate569 = createNode("Coordinate");
Coordinate569.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet568.coord = Coordinate569;

ColorRGBA ColorRGBA570 = createNode("ColorRGBA");
ColorRGBA570.USE = "HAnimSegmentLineColorRGBA";
LineSet568.color = ColorRGBA570;

Shape567.geometry = LineSet568;

HAnimSegment563.children[2] = Shape567;

HAnimJoint562.children = new MFNode();

HAnimJoint562.children[0] = HAnimSegment563;

HAnimJoint HAnimJoint571 = createNode("HAnimJoint");
HAnimJoint571.name = "vt4";
HAnimJoint571.DEF = "hanim_vt4";
HAnimJoint571.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint571.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment572 = createNode("HAnimSegment");
HAnimSegment572.name = "t4";
HAnimSegment572.DEF = "hanim_t4";
//<HAnimJoint name='vt4'/> visualization sphere is placed within <HAnimSegment name='t4'/>
TouchSensor TouchSensor573 = createNode("TouchSensor");
TouchSensor573.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment572.children = new MFNode();

HAnimSegment572.children[0] = TouchSensor573;

Transform Transform574 = createNode("Transform");
Transform574.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Shape Shape575 = createNode("Shape");
Shape575.USE = "HAnimJointShape";
Transform574.children = new MFNode();

Transform574.children[0] = Shape575;

HAnimSegment572.children[1] = Transform574;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
Shape Shape576 = createNode("Shape");
LineSet LineSet577 = createNode("LineSet");
LineSet577.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate578 = createNode("Coordinate");
Coordinate578.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet577.coord = Coordinate578;

ColorRGBA ColorRGBA579 = createNode("ColorRGBA");
ColorRGBA579.USE = "HAnimSegmentLineColorRGBA";
LineSet577.color = ColorRGBA579;

Shape576.geometry = LineSet577;

HAnimSegment572.children[2] = Shape576;

HAnimJoint571.children = new MFNode();

HAnimJoint571.children[0] = HAnimSegment572;

HAnimJoint HAnimJoint580 = createNode("HAnimJoint");
HAnimJoint580.name = "vt3";
HAnimJoint580.DEF = "hanim_vt3";
HAnimJoint580.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint580.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment581 = createNode("HAnimSegment");
HAnimSegment581.name = "t3";
HAnimSegment581.DEF = "hanim_t3";
//<HAnimJoint name='vt3'/> visualization sphere is placed within <HAnimSegment name='t3'/>
TouchSensor TouchSensor582 = createNode("TouchSensor");
TouchSensor582.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment581.children = new MFNode();

HAnimSegment581.children[0] = TouchSensor582;

Transform Transform583 = createNode("Transform");
Transform583.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Shape Shape584 = createNode("Shape");
Shape584.USE = "HAnimJointShape";
Transform583.children = new MFNode();

Transform583.children[0] = Shape584;

HAnimSegment581.children[1] = Transform583;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
Shape Shape585 = createNode("Shape");
LineSet LineSet586 = createNode("LineSet");
LineSet586.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate587 = createNode("Coordinate");
Coordinate587.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet586.coord = Coordinate587;

ColorRGBA ColorRGBA588 = createNode("ColorRGBA");
ColorRGBA588.USE = "HAnimSegmentLineColorRGBA";
LineSet586.color = ColorRGBA588;

Shape585.geometry = LineSet586;

HAnimSegment581.children[2] = Shape585;

HAnimJoint580.children = new MFNode();

HAnimJoint580.children[0] = HAnimSegment581;

HAnimJoint HAnimJoint589 = createNode("HAnimJoint");
HAnimJoint589.name = "vt2";
HAnimJoint589.DEF = "hanim_vt2";
HAnimJoint589.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint589.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment590 = createNode("HAnimSegment");
HAnimSegment590.name = "t2";
HAnimSegment590.DEF = "hanim_t2";
//<HAnimJoint name='vt2'/> visualization sphere is placed within <HAnimSegment name='t2'/>
TouchSensor TouchSensor591 = createNode("TouchSensor");
TouchSensor591.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment590.children = new MFNode();

HAnimSegment590.children[0] = TouchSensor591;

Transform Transform592 = createNode("Transform");
Transform592.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Shape Shape593 = createNode("Shape");
Shape593.USE = "HAnimJointShape";
Transform592.children = new MFNode();

Transform592.children[0] = Shape593;

HAnimSegment590.children[1] = Transform592;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
Shape Shape594 = createNode("Shape");
LineSet LineSet595 = createNode("LineSet");
LineSet595.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate596 = createNode("Coordinate");
Coordinate596.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet595.coord = Coordinate596;

ColorRGBA ColorRGBA597 = createNode("ColorRGBA");
ColorRGBA597.USE = "HAnimSegmentLineColorRGBA";
LineSet595.color = ColorRGBA597;

Shape594.geometry = LineSet595;

HAnimSegment590.children[2] = Shape594;

HAnimJoint589.children = new MFNode();

HAnimJoint589.children[0] = HAnimSegment590;

HAnimJoint HAnimJoint598 = createNode("HAnimJoint");
HAnimJoint598.name = "vt1";
HAnimJoint598.DEF = "hanim_vt1";
HAnimJoint598.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint598.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment599 = createNode("HAnimSegment");
HAnimSegment599.name = "t1";
HAnimSegment599.DEF = "hanim_t1";
//<HAnimJoint name='vt1'/> visualization sphere is placed within <HAnimSegment name='t1'/>
TouchSensor TouchSensor600 = createNode("TouchSensor");
TouchSensor600.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment599.children = new MFNode();

HAnimSegment599.children[0] = TouchSensor600;

Transform Transform601 = createNode("Transform");
Transform601.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Shape Shape602 = createNode("Shape");
Shape602.USE = "HAnimJointShape";
Transform601.children = new MFNode();

Transform601.children[0] = Shape602;

HAnimSegment599.children[1] = Transform601;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
Shape Shape603 = createNode("Shape");
LineSet LineSet604 = createNode("LineSet");
LineSet604.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate605 = createNode("Coordinate");
Coordinate605.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet604.coord = Coordinate605;

ColorRGBA ColorRGBA606 = createNode("ColorRGBA");
ColorRGBA606.USE = "HAnimSegmentLineColorRGBA";
LineSet604.color = ColorRGBA606;

Shape603.geometry = LineSet604;

HAnimSegment599.children[2] = Shape603;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
Shape Shape607 = createNode("Shape");
LineSet LineSet608 = createNode("LineSet");
LineSet608.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate609 = createNode("Coordinate");
Coordinate609.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet608.coord = Coordinate609;

ColorRGBA ColorRGBA610 = createNode("ColorRGBA");
ColorRGBA610.USE = "HAnimSegmentLineColorRGBA";
LineSet608.color = ColorRGBA610;

Shape607.geometry = LineSet608;

HAnimSegment599.children[3] = Shape607;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
Shape Shape611 = createNode("Shape");
LineSet LineSet612 = createNode("LineSet");
LineSet612.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate613 = createNode("Coordinate");
Coordinate613.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet612.coord = Coordinate613;

ColorRGBA ColorRGBA614 = createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
LineSet612.color = ColorRGBA614;

Shape611.geometry = LineSet612;

HAnimSegment599.children[4] = Shape611;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
Shape Shape615 = createNode("Shape");
LineSet LineSet616 = createNode("LineSet");
LineSet616.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate617 = createNode("Coordinate");
Coordinate617.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet616.coord = Coordinate617;

ColorRGBA ColorRGBA618 = createNode("ColorRGBA");
ColorRGBA618.USE = "HAnimSiteLineColorRGBA";
LineSet616.color = ColorRGBA618;

Shape615.geometry = LineSet616;

HAnimSegment599.children[5] = Shape615;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
Shape Shape619 = createNode("Shape");
LineSet LineSet620 = createNode("LineSet");
LineSet620.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate621 = createNode("Coordinate");
Coordinate621.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet620.coord = Coordinate621;

ColorRGBA ColorRGBA622 = createNode("ColorRGBA");
ColorRGBA622.USE = "HAnimSiteLineColorRGBA";
LineSet620.color = ColorRGBA622;

Shape619.geometry = LineSet620;

HAnimSegment599.children[6] = Shape619;

HAnimSite HAnimSite623 = createNode("HAnimSite");
HAnimSite623.name = "suprasternale_pt";
HAnimSite623.DEF = "hanim_suprasternale_pt";
HAnimSite623.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
TouchSensor TouchSensor624 = createNode("TouchSensor");
TouchSensor624.description = "HAnimSite suprasternale";
HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = TouchSensor624;

Shape Shape625 = createNode("Shape");
Shape625.USE = "HAnimSiteShape";
HAnimSite623.children[1] = Shape625;

HAnimSegment599.children[7] = HAnimSite623;

HAnimSite HAnimSite626 = createNode("HAnimSite");
HAnimSite626.name = "cervicale_pt";
HAnimSite626.DEF = "hanim_cervicale_pt";
HAnimSite626.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
TouchSensor TouchSensor627 = createNode("TouchSensor");
TouchSensor627.description = "HAnimSite cervicale";
HAnimSite626.children = new MFNode();

HAnimSite626.children[0] = TouchSensor627;

Shape Shape628 = createNode("Shape");
Shape628.USE = "HAnimSiteShape";
HAnimSite626.children[1] = Shape628;

HAnimSegment599.children[8] = HAnimSite626;

HAnimJoint598.children = new MFNode();

HAnimJoint598.children[0] = HAnimSegment599;

HAnimJoint HAnimJoint629 = createNode("HAnimJoint");
HAnimJoint629.name = "vc7";
HAnimJoint629.DEF = "hanim_vc7";
HAnimJoint629.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint629.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment630 = createNode("HAnimSegment");
HAnimSegment630.name = "c7";
HAnimSegment630.DEF = "hanim_c7";
//<HAnimJoint name='vc7'/> visualization sphere is placed within <HAnimSegment name='c7'/>
TouchSensor TouchSensor631 = createNode("TouchSensor");
TouchSensor631.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment630.children = new MFNode();

HAnimSegment630.children[0] = TouchSensor631;

Transform Transform632 = createNode("Transform");
Transform632.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Shape Shape633 = createNode("Shape");
Shape633.USE = "HAnimJointShape";
Transform632.children = new MFNode();

Transform632.children[0] = Shape633;

HAnimSegment630.children[1] = Transform632;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
Shape Shape634 = createNode("Shape");
LineSet LineSet635 = createNode("LineSet");
LineSet635.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate636 = createNode("Coordinate");
Coordinate636.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet635.coord = Coordinate636;

ColorRGBA ColorRGBA637 = createNode("ColorRGBA");
ColorRGBA637.USE = "HAnimSegmentLineColorRGBA";
LineSet635.color = ColorRGBA637;

Shape634.geometry = LineSet635;

HAnimSegment630.children[2] = Shape634;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
Shape Shape638 = createNode("Shape");
LineSet LineSet639 = createNode("LineSet");
LineSet639.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate640 = createNode("Coordinate");
Coordinate640.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet639.coord = Coordinate640;

ColorRGBA ColorRGBA641 = createNode("ColorRGBA");
ColorRGBA641.USE = "HAnimSiteLineColorRGBA";
LineSet639.color = ColorRGBA641;

Shape638.geometry = LineSet639;

HAnimSegment630.children[3] = Shape638;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
Shape Shape642 = createNode("Shape");
LineSet LineSet643 = createNode("LineSet");
LineSet643.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate644 = createNode("Coordinate");
Coordinate644.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet643.coord = Coordinate644;

ColorRGBA ColorRGBA645 = createNode("ColorRGBA");
ColorRGBA645.USE = "HAnimSiteLineColorRGBA";
LineSet643.color = ColorRGBA645;

Shape642.geometry = LineSet643;

HAnimSegment630.children[4] = Shape642;

HAnimSite HAnimSite646 = createNode("HAnimSite");
HAnimSite646.name = "r_neck_base_pt";
HAnimSite646.DEF = "hanim_r_neck_base_pt";
HAnimSite646.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
TouchSensor TouchSensor647 = createNode("TouchSensor");
TouchSensor647.description = "HAnimSite r_neck_base";
HAnimSite646.children = new MFNode();

HAnimSite646.children[0] = TouchSensor647;

Shape Shape648 = createNode("Shape");
Shape648.USE = "HAnimSiteShape";
HAnimSite646.children[1] = Shape648;

HAnimSegment630.children[5] = HAnimSite646;

HAnimSite HAnimSite649 = createNode("HAnimSite");
HAnimSite649.name = "l_neck_base_pt";
HAnimSite649.DEF = "hanim_l_neck_base_pt";
HAnimSite649.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
TouchSensor TouchSensor650 = createNode("TouchSensor");
TouchSensor650.description = "HAnimSite l_neck_base";
HAnimSite649.children = new MFNode();

HAnimSite649.children[0] = TouchSensor650;

Shape Shape651 = createNode("Shape");
Shape651.USE = "HAnimSiteShape";
HAnimSite649.children[1] = Shape651;

HAnimSegment630.children[6] = HAnimSite649;

HAnimJoint629.children = new MFNode();

HAnimJoint629.children[0] = HAnimSegment630;

HAnimJoint HAnimJoint652 = createNode("HAnimJoint");
HAnimJoint652.name = "vc6";
HAnimJoint652.DEF = "hanim_vc6";
HAnimJoint652.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint652.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment653 = createNode("HAnimSegment");
HAnimSegment653.name = "c6";
HAnimSegment653.DEF = "hanim_c6";
//<HAnimJoint name='vc6'/> visualization sphere is placed within <HAnimSegment name='c6'/>
TouchSensor TouchSensor654 = createNode("TouchSensor");
TouchSensor654.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment653.children = new MFNode();

HAnimSegment653.children[0] = TouchSensor654;

Transform Transform655 = createNode("Transform");
Transform655.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Shape Shape656 = createNode("Shape");
Shape656.USE = "HAnimJointShape";
Transform655.children = new MFNode();

Transform655.children[0] = Shape656;

HAnimSegment653.children[1] = Transform655;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
Shape Shape657 = createNode("Shape");
LineSet LineSet658 = createNode("LineSet");
LineSet658.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate659 = createNode("Coordinate");
Coordinate659.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet658.coord = Coordinate659;

ColorRGBA ColorRGBA660 = createNode("ColorRGBA");
ColorRGBA660.USE = "HAnimSegmentLineColorRGBA";
LineSet658.color = ColorRGBA660;

Shape657.geometry = LineSet658;

HAnimSegment653.children[2] = Shape657;

HAnimJoint652.children = new MFNode();

HAnimJoint652.children[0] = HAnimSegment653;

HAnimJoint HAnimJoint661 = createNode("HAnimJoint");
HAnimJoint661.name = "vc5";
HAnimJoint661.DEF = "hanim_vc5";
HAnimJoint661.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint661.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment662 = createNode("HAnimSegment");
HAnimSegment662.name = "c5";
HAnimSegment662.DEF = "hanim_c5";
//<HAnimJoint name='vc5'/> visualization sphere is placed within <HAnimSegment name='c5'/>
TouchSensor TouchSensor663 = createNode("TouchSensor");
TouchSensor663.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment662.children = new MFNode();

HAnimSegment662.children[0] = TouchSensor663;

Transform Transform664 = createNode("Transform");
Transform664.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Shape Shape665 = createNode("Shape");
Shape665.USE = "HAnimJointShape";
Transform664.children = new MFNode();

Transform664.children[0] = Shape665;

HAnimSegment662.children[1] = Transform664;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
Shape Shape666 = createNode("Shape");
LineSet LineSet667 = createNode("LineSet");
LineSet667.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate668 = createNode("Coordinate");
Coordinate668.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet667.coord = Coordinate668;

ColorRGBA ColorRGBA669 = createNode("ColorRGBA");
ColorRGBA669.USE = "HAnimSegmentLineColorRGBA";
LineSet667.color = ColorRGBA669;

Shape666.geometry = LineSet667;

HAnimSegment662.children[2] = Shape666;

HAnimJoint661.children = new MFNode();

HAnimJoint661.children[0] = HAnimSegment662;

HAnimJoint HAnimJoint670 = createNode("HAnimJoint");
HAnimJoint670.name = "vc4";
HAnimJoint670.DEF = "hanim_vc4";
HAnimJoint670.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint670.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment671 = createNode("HAnimSegment");
HAnimSegment671.name = "c4";
HAnimSegment671.DEF = "hanim_c4";
//<HAnimJoint name='vc4'/> visualization sphere is placed within <HAnimSegment name='c4'/>
TouchSensor TouchSensor672 = createNode("TouchSensor");
TouchSensor672.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment671.children = new MFNode();

HAnimSegment671.children[0] = TouchSensor672;

Transform Transform673 = createNode("Transform");
Transform673.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Shape Shape674 = createNode("Shape");
Shape674.USE = "HAnimJointShape";
Transform673.children = new MFNode();

Transform673.children[0] = Shape674;

HAnimSegment671.children[1] = Transform673;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
Shape Shape675 = createNode("Shape");
LineSet LineSet676 = createNode("LineSet");
LineSet676.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate677 = createNode("Coordinate");
Coordinate677.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet676.coord = Coordinate677;

ColorRGBA ColorRGBA678 = createNode("ColorRGBA");
ColorRGBA678.USE = "HAnimSegmentLineColorRGBA";
LineSet676.color = ColorRGBA678;

Shape675.geometry = LineSet676;

HAnimSegment671.children[2] = Shape675;

HAnimJoint670.children = new MFNode();

HAnimJoint670.children[0] = HAnimSegment671;

HAnimJoint HAnimJoint679 = createNode("HAnimJoint");
HAnimJoint679.name = "vc3";
HAnimJoint679.DEF = "hanim_vc3";
HAnimJoint679.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint679.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment680 = createNode("HAnimSegment");
HAnimSegment680.name = "c3";
HAnimSegment680.DEF = "hanim_c3";
//<HAnimJoint name='vc3'/> visualization sphere is placed within <HAnimSegment name='c3'/>
TouchSensor TouchSensor681 = createNode("TouchSensor");
TouchSensor681.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment680.children = new MFNode();

HAnimSegment680.children[0] = TouchSensor681;

Transform Transform682 = createNode("Transform");
Transform682.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Shape Shape683 = createNode("Shape");
Shape683.USE = "HAnimJointShape";
Transform682.children = new MFNode();

Transform682.children[0] = Shape683;

HAnimSegment680.children[1] = Transform682;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
Shape Shape684 = createNode("Shape");
LineSet LineSet685 = createNode("LineSet");
LineSet685.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate686 = createNode("Coordinate");
Coordinate686.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet685.coord = Coordinate686;

ColorRGBA ColorRGBA687 = createNode("ColorRGBA");
ColorRGBA687.USE = "HAnimSegmentLineColorRGBA";
LineSet685.color = ColorRGBA687;

Shape684.geometry = LineSet685;

HAnimSegment680.children[2] = Shape684;

HAnimJoint679.children = new MFNode();

HAnimJoint679.children[0] = HAnimSegment680;

HAnimJoint HAnimJoint688 = createNode("HAnimJoint");
HAnimJoint688.name = "vc2";
HAnimJoint688.DEF = "hanim_vc2";
HAnimJoint688.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint688.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment689 = createNode("HAnimSegment");
HAnimSegment689.name = "c2";
HAnimSegment689.DEF = "hanim_c2";
//<HAnimJoint name='vc2'/> visualization sphere is placed within <HAnimSegment name='c2'/>
TouchSensor TouchSensor690 = createNode("TouchSensor");
TouchSensor690.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment689.children = new MFNode();

HAnimSegment689.children[0] = TouchSensor690;

Transform Transform691 = createNode("Transform");
Transform691.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Shape Shape692 = createNode("Shape");
Shape692.USE = "HAnimJointShape";
Transform691.children = new MFNode();

Transform691.children[0] = Shape692;

HAnimSegment689.children[1] = Transform691;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
Shape Shape693 = createNode("Shape");
LineSet LineSet694 = createNode("LineSet");
LineSet694.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate695 = createNode("Coordinate");
Coordinate695.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet694.coord = Coordinate695;

ColorRGBA ColorRGBA696 = createNode("ColorRGBA");
ColorRGBA696.USE = "HAnimSegmentLineColorRGBA";
LineSet694.color = ColorRGBA696;

Shape693.geometry = LineSet694;

HAnimSegment689.children[2] = Shape693;

HAnimJoint688.children = new MFNode();

HAnimJoint688.children[0] = HAnimSegment689;

HAnimJoint HAnimJoint697 = createNode("HAnimJoint");
HAnimJoint697.name = "vc1";
HAnimJoint697.DEF = "hanim_vc1";
HAnimJoint697.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint697.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment698 = createNode("HAnimSegment");
HAnimSegment698.name = "c1";
HAnimSegment698.DEF = "hanim_c1";
//<HAnimJoint name='vc1'/> visualization sphere is placed within <HAnimSegment name='c1'/>
TouchSensor TouchSensor699 = createNode("TouchSensor");
TouchSensor699.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment698.children = new MFNode();

HAnimSegment698.children[0] = TouchSensor699;

Transform Transform700 = createNode("Transform");
Transform700.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Shape Shape701 = createNode("Shape");
Shape701.USE = "HAnimJointShape";
Transform700.children = new MFNode();

Transform700.children[0] = Shape701;

HAnimSegment698.children[1] = Transform700;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
Shape Shape702 = createNode("Shape");
LineSet LineSet703 = createNode("LineSet");
LineSet703.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate704 = createNode("Coordinate");
Coordinate704.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet703.coord = Coordinate704;

ColorRGBA ColorRGBA705 = createNode("ColorRGBA");
ColorRGBA705.USE = "HAnimSegmentLineColorRGBA";
LineSet703.color = ColorRGBA705;

Shape702.geometry = LineSet703;

HAnimSegment698.children[2] = Shape702;

HAnimJoint697.children = new MFNode();

HAnimJoint697.children[0] = HAnimSegment698;

HAnimJoint HAnimJoint706 = createNode("HAnimJoint");
HAnimJoint706.name = "skullbase";
HAnimJoint706.DEF = "hanim_skullbase";
HAnimJoint706.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint706.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment707 = createNode("HAnimSegment");
HAnimSegment707.name = "skull";
HAnimSegment707.DEF = "hanim_skull";
//<HAnimJoint name='skullbase'/> visualization sphere is placed within <HAnimSegment name='skull'/>
TouchSensor TouchSensor708 = createNode("TouchSensor");
TouchSensor708.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment707.children = new MFNode();

HAnimSegment707.children[0] = TouchSensor708;

Transform Transform709 = createNode("Transform");
Transform709.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape710 = createNode("Shape");
Shape710.USE = "HAnimJointShape";
Transform709.children = new MFNode();

Transform709.children[0] = Shape710;

HAnimSegment707.children[1] = Transform709;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
Shape Shape711 = createNode("Shape");
LineSet LineSet712 = createNode("LineSet");
LineSet712.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate713 = createNode("Coordinate");
Coordinate713.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet712.coord = Coordinate713;

ColorRGBA ColorRGBA714 = createNode("ColorRGBA");
ColorRGBA714.USE = "HAnimSegmentLineColorRGBA";
LineSet712.color = ColorRGBA714;

Shape711.geometry = LineSet712;

HAnimSegment707.children[2] = Shape711;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
Shape Shape715 = createNode("Shape");
LineSet LineSet716 = createNode("LineSet");
LineSet716.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate717 = createNode("Coordinate");
Coordinate717.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet716.coord = Coordinate717;

ColorRGBA ColorRGBA718 = createNode("ColorRGBA");
ColorRGBA718.USE = "HAnimSegmentLineColorRGBA";
LineSet716.color = ColorRGBA718;

Shape715.geometry = LineSet716;

HAnimSegment707.children[3] = Shape715;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
Shape Shape719 = createNode("Shape");
LineSet LineSet720 = createNode("LineSet");
LineSet720.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate721 = createNode("Coordinate");
Coordinate721.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet720.coord = Coordinate721;

ColorRGBA ColorRGBA722 = createNode("ColorRGBA");
ColorRGBA722.USE = "HAnimSegmentLineColorRGBA";
LineSet720.color = ColorRGBA722;

Shape719.geometry = LineSet720;

HAnimSegment707.children[4] = Shape719;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
Shape Shape723 = createNode("Shape");
LineSet LineSet724 = createNode("LineSet");
LineSet724.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate725 = createNode("Coordinate");
Coordinate725.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet724.coord = Coordinate725;

ColorRGBA ColorRGBA726 = createNode("ColorRGBA");
ColorRGBA726.USE = "HAnimSegmentLineColorRGBA";
LineSet724.color = ColorRGBA726;

Shape723.geometry = LineSet724;

HAnimSegment707.children[5] = Shape723;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
Shape Shape727 = createNode("Shape");
LineSet LineSet728 = createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate729 = createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet728.coord = Coordinate729;

ColorRGBA ColorRGBA730 = createNode("ColorRGBA");
ColorRGBA730.USE = "HAnimSegmentLineColorRGBA";
LineSet728.color = ColorRGBA730;

Shape727.geometry = LineSet728;

HAnimSegment707.children[6] = Shape727;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
Shape Shape731 = createNode("Shape");
LineSet LineSet732 = createNode("LineSet");
LineSet732.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate733 = createNode("Coordinate");
Coordinate733.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet732.coord = Coordinate733;

ColorRGBA ColorRGBA734 = createNode("ColorRGBA");
ColorRGBA734.USE = "HAnimSegmentLineColorRGBA";
LineSet732.color = ColorRGBA734;

Shape731.geometry = LineSet732;

HAnimSegment707.children[7] = Shape731;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
Shape Shape735 = createNode("Shape");
LineSet LineSet736 = createNode("LineSet");
LineSet736.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate737 = createNode("Coordinate");
Coordinate737.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet736.coord = Coordinate737;

ColorRGBA ColorRGBA738 = createNode("ColorRGBA");
ColorRGBA738.USE = "HAnimSegmentLineColorRGBA";
LineSet736.color = ColorRGBA738;

Shape735.geometry = LineSet736;

HAnimSegment707.children[8] = Shape735;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
Shape Shape739 = createNode("Shape");
LineSet LineSet740 = createNode("LineSet");
LineSet740.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate741 = createNode("Coordinate");
Coordinate741.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet740.coord = Coordinate741;

ColorRGBA ColorRGBA742 = createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSiteLineColorRGBA";
LineSet740.color = ColorRGBA742;

Shape739.geometry = LineSet740;

HAnimSegment707.children[9] = Shape739;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
Shape Shape743 = createNode("Shape");
LineSet LineSet744 = createNode("LineSet");
LineSet744.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate745 = createNode("Coordinate");
Coordinate745.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet744.coord = Coordinate745;

ColorRGBA ColorRGBA746 = createNode("ColorRGBA");
ColorRGBA746.USE = "HAnimSiteLineColorRGBA";
LineSet744.color = ColorRGBA746;

Shape743.geometry = LineSet744;

HAnimSegment707.children[10] = Shape743;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
Shape Shape747 = createNode("Shape");
LineSet LineSet748 = createNode("LineSet");
LineSet748.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate749 = createNode("Coordinate");
Coordinate749.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet748.coord = Coordinate749;

ColorRGBA ColorRGBA750 = createNode("ColorRGBA");
ColorRGBA750.USE = "HAnimSiteLineColorRGBA";
LineSet748.color = ColorRGBA750;

Shape747.geometry = LineSet748;

HAnimSegment707.children[11] = Shape747;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
Shape Shape751 = createNode("Shape");
LineSet LineSet752 = createNode("LineSet");
LineSet752.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate753 = createNode("Coordinate");
Coordinate753.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet752.coord = Coordinate753;

ColorRGBA ColorRGBA754 = createNode("ColorRGBA");
ColorRGBA754.USE = "HAnimSiteLineColorRGBA";
LineSet752.color = ColorRGBA754;

Shape751.geometry = LineSet752;

HAnimSegment707.children[12] = Shape751;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
Shape Shape755 = createNode("Shape");
LineSet LineSet756 = createNode("LineSet");
LineSet756.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate757 = createNode("Coordinate");
Coordinate757.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet756.coord = Coordinate757;

ColorRGBA ColorRGBA758 = createNode("ColorRGBA");
ColorRGBA758.USE = "HAnimSiteLineColorRGBA";
LineSet756.color = ColorRGBA758;

Shape755.geometry = LineSet756;

HAnimSegment707.children[13] = Shape755;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
Shape Shape759 = createNode("Shape");
LineSet LineSet760 = createNode("LineSet");
LineSet760.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate761 = createNode("Coordinate");
Coordinate761.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet760.coord = Coordinate761;

ColorRGBA ColorRGBA762 = createNode("ColorRGBA");
ColorRGBA762.USE = "HAnimSiteLineColorRGBA";
LineSet760.color = ColorRGBA762;

Shape759.geometry = LineSet760;

HAnimSegment707.children[14] = Shape759;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
Shape Shape763 = createNode("Shape");
LineSet LineSet764 = createNode("LineSet");
LineSet764.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate765 = createNode("Coordinate");
Coordinate765.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet764.coord = Coordinate765;

ColorRGBA ColorRGBA766 = createNode("ColorRGBA");
ColorRGBA766.USE = "HAnimSiteLineColorRGBA";
LineSet764.color = ColorRGBA766;

Shape763.geometry = LineSet764;

HAnimSegment707.children[15] = Shape763;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
Shape Shape767 = createNode("Shape");
LineSet LineSet768 = createNode("LineSet");
LineSet768.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate769 = createNode("Coordinate");
Coordinate769.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet768.coord = Coordinate769;

ColorRGBA ColorRGBA770 = createNode("ColorRGBA");
ColorRGBA770.USE = "HAnimSiteLineColorRGBA";
LineSet768.color = ColorRGBA770;

Shape767.geometry = LineSet768;

HAnimSegment707.children[16] = Shape767;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
Shape Shape771 = createNode("Shape");
LineSet LineSet772 = createNode("LineSet");
LineSet772.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate773 = createNode("Coordinate");
Coordinate773.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet772.coord = Coordinate773;

ColorRGBA ColorRGBA774 = createNode("ColorRGBA");
ColorRGBA774.USE = "HAnimSiteLineColorRGBA";
LineSet772.color = ColorRGBA774;

Shape771.geometry = LineSet772;

HAnimSegment707.children[17] = Shape771;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
Shape Shape775 = createNode("Shape");
LineSet LineSet776 = createNode("LineSet");
LineSet776.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate777 = createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet776.coord = Coordinate777;

ColorRGBA ColorRGBA778 = createNode("ColorRGBA");
ColorRGBA778.USE = "HAnimSiteLineColorRGBA";
LineSet776.color = ColorRGBA778;

Shape775.geometry = LineSet776;

HAnimSegment707.children[18] = Shape775;

HAnimSite HAnimSite779 = createNode("HAnimSite");
HAnimSite779.name = "skull_tip";
HAnimSite779.DEF = "hanim_skull_tip";
HAnimSite779.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
//HAnimSite visualization shape
TouchSensor TouchSensor780 = createNode("TouchSensor");
TouchSensor780.description = "HAnimSite skull_tip";
HAnimSite779.children = new MFNode();

HAnimSite779.children[0] = TouchSensor780;

Shape Shape781 = createNode("Shape");
Shape781.USE = "HAnimSiteShape";
HAnimSite779.children[1] = Shape781;

HAnimSegment707.children[19] = HAnimSite779;

HAnimSite HAnimSite782 = createNode("HAnimSite");
HAnimSite782.name = "sellion_pt";
HAnimSite782.DEF = "hanim_sellion_pt";
HAnimSite782.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
TouchSensor TouchSensor783 = createNode("TouchSensor");
TouchSensor783.description = "HAnimSite sellion";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

Shape Shape784 = createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimSegment707.children[20] = HAnimSite782;

HAnimSite HAnimSite785 = createNode("HAnimSite");
HAnimSite785.name = "r_infraorbitale_pt";
HAnimSite785.DEF = "hanim_r_infraorbitale_pt";
HAnimSite785.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
TouchSensor TouchSensor786 = createNode("TouchSensor");
TouchSensor786.description = "HAnimSite r_infraorbitale";
HAnimSite785.children = new MFNode();

HAnimSite785.children[0] = TouchSensor786;

Shape Shape787 = createNode("Shape");
Shape787.USE = "HAnimSiteShape";
HAnimSite785.children[1] = Shape787;

HAnimSegment707.children[21] = HAnimSite785;

HAnimSite HAnimSite788 = createNode("HAnimSite");
HAnimSite788.name = "l_infraorbitale_pt";
HAnimSite788.DEF = "hanim_l_infraorbitale_pt";
HAnimSite788.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
TouchSensor TouchSensor789 = createNode("TouchSensor");
TouchSensor789.description = "HAnimSite l_infraorbitale";
HAnimSite788.children = new MFNode();

HAnimSite788.children[0] = TouchSensor789;

Shape Shape790 = createNode("Shape");
Shape790.USE = "HAnimSiteShape";
HAnimSite788.children[1] = Shape790;

HAnimSegment707.children[22] = HAnimSite788;

HAnimSite HAnimSite791 = createNode("HAnimSite");
HAnimSite791.name = "supramenton_pt";
HAnimSite791.DEF = "hanim_supramenton_pt";
HAnimSite791.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
TouchSensor TouchSensor792 = createNode("TouchSensor");
TouchSensor792.description = "HAnimSite supramenton";
HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = TouchSensor792;

Shape Shape793 = createNode("Shape");
Shape793.USE = "HAnimSiteShape";
HAnimSite791.children[1] = Shape793;

HAnimSegment707.children[23] = HAnimSite791;

HAnimSite HAnimSite794 = createNode("HAnimSite");
HAnimSite794.name = "r_tragion_pt";
HAnimSite794.DEF = "hanim_r_tragion_pt";
HAnimSite794.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
TouchSensor TouchSensor795 = createNode("TouchSensor");
TouchSensor795.description = "HAnimSite r_tragion";
HAnimSite794.children = new MFNode();

HAnimSite794.children[0] = TouchSensor795;

Shape Shape796 = createNode("Shape");
Shape796.USE = "HAnimSiteShape";
HAnimSite794.children[1] = Shape796;

HAnimSegment707.children[24] = HAnimSite794;

HAnimSite HAnimSite797 = createNode("HAnimSite");
HAnimSite797.name = "r_gonion_pt";
HAnimSite797.DEF = "hanim_r_gonion_pt";
HAnimSite797.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
TouchSensor TouchSensor798 = createNode("TouchSensor");
TouchSensor798.description = "HAnimSite r_gonion";
HAnimSite797.children = new MFNode();

HAnimSite797.children[0] = TouchSensor798;

Shape Shape799 = createNode("Shape");
Shape799.USE = "HAnimSiteShape";
HAnimSite797.children[1] = Shape799;

HAnimSegment707.children[25] = HAnimSite797;

HAnimSite HAnimSite800 = createNode("HAnimSite");
HAnimSite800.name = "l_tragion_pt";
HAnimSite800.DEF = "hanim_l_tragion_pt";
HAnimSite800.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
TouchSensor TouchSensor801 = createNode("TouchSensor");
TouchSensor801.description = "HAnimSite l_tragion";
HAnimSite800.children = new MFNode();

HAnimSite800.children[0] = TouchSensor801;

Shape Shape802 = createNode("Shape");
Shape802.USE = "HAnimSiteShape";
HAnimSite800.children[1] = Shape802;

HAnimSegment707.children[26] = HAnimSite800;

HAnimSite HAnimSite803 = createNode("HAnimSite");
HAnimSite803.name = "l_gonion_pt";
HAnimSite803.DEF = "hanim_l_gonion_pt";
HAnimSite803.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
TouchSensor TouchSensor804 = createNode("TouchSensor");
TouchSensor804.description = "HAnimSite l_gonion";
HAnimSite803.children = new MFNode();

HAnimSite803.children[0] = TouchSensor804;

Shape Shape805 = createNode("Shape");
Shape805.USE = "HAnimSiteShape";
HAnimSite803.children[1] = Shape805;

HAnimSegment707.children[27] = HAnimSite803;

HAnimSite HAnimSite806 = createNode("HAnimSite");
HAnimSite806.name = "nuchale_pt";
HAnimSite806.DEF = "hanim_nuchale_pt";
HAnimSite806.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
TouchSensor TouchSensor807 = createNode("TouchSensor");
TouchSensor807.description = "HAnimSite nuchale";
HAnimSite806.children = new MFNode();

HAnimSite806.children[0] = TouchSensor807;

Shape Shape808 = createNode("Shape");
Shape808.USE = "HAnimSiteShape";
HAnimSite806.children[1] = Shape808;

HAnimSegment707.children[28] = HAnimSite806;

HAnimJoint706.children = new MFNode();

HAnimJoint706.children[0] = HAnimSegment707;

HAnimJoint HAnimJoint809 = createNode("HAnimJoint");
HAnimJoint809.name = "l_eyeball_joint";
HAnimJoint809.DEF = "hanim_l_eyeball_joint";
HAnimJoint809.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint809.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment810 = createNode("HAnimSegment");
HAnimSegment810.name = "l_eyeball";
HAnimSegment810.DEF = "hanim_l_eyeball";
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyeball'/>
TouchSensor TouchSensor811 = createNode("TouchSensor");
TouchSensor811.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment810.children = new MFNode();

HAnimSegment810.children[0] = TouchSensor811;

Transform Transform812 = createNode("Transform");
Transform812.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape813 = createNode("Shape");
Shape813.USE = "HAnimJointShape";
Transform812.children = new MFNode();

Transform812.children[0] = Shape813;

HAnimSegment810.children[1] = Transform812;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
Shape Shape814 = createNode("Shape");
LineSet LineSet815 = createNode("LineSet");
LineSet815.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate816 = createNode("Coordinate");
Coordinate816.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet815.coord = Coordinate816;

ColorRGBA ColorRGBA817 = createNode("ColorRGBA");
ColorRGBA817.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA817.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet815.color = ColorRGBA817;

Shape814.geometry = LineSet815;

HAnimSegment810.children[2] = Shape814;

HAnimSite HAnimSite818 = createNode("HAnimSite");
HAnimSite818.name = "l_eyeball_site_view";
HAnimSite818.DEF = "hanim_l_eyeball_site_view";
HAnimSite818.translation = new SFVec3f(new float[0.034,1.64,0.05]);
//HAnimSite visualization shape
TouchSensor TouchSensor819 = createNode("TouchSensor");
TouchSensor819.description = "HAnimSite l_eyeball_site_view";
HAnimSite818.children = new MFNode();

HAnimSite818.children[0] = TouchSensor819;

Shape Shape820 = createNode("Shape");
Shape820.USE = "HAnimSiteShape";
HAnimSite818.children[1] = Shape820;

Viewpoint Viewpoint821 = createNode("Viewpoint");
Viewpoint821.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint821.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint821.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint821.position = new SFVec3f(new float[0,0,0]);
HAnimSite818.children[2] = Viewpoint821;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor822 = createNode("Anchor");
Anchor822.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor822.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
LOD LOD823 = createNode("LOD");
LOD823.forceTransitions = True;
LOD823.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo824 = createNode("WorldInfo");
WorldInfo824.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD823.children = new MFNode();

LOD823.children[0] = WorldInfo824;

Shape Shape825 = createNode("Shape");
Shape825.DEF = "HAnimSiteViewpointShape";
IndexedFaceSet IndexedFaceSet826 = createNode("IndexedFaceSet");
IndexedFaceSet826.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet826.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet826.creaseAngle = 0.5;
Coordinate Coordinate827 = createNode("Coordinate");
Coordinate827.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet826.coord = Coordinate827;

Shape825.geometry = IndexedFaceSet826;

Appearance Appearance828 = createNode("Appearance");
Material Material829 = createNode("Material");
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

HAnimJoint HAnimJoint830 = createNode("HAnimJoint");
HAnimJoint830.name = "l_eyelid_joint";
HAnimJoint830.DEF = "hanim_l_eyelid_joint";
HAnimJoint830.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint830.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment831 = createNode("HAnimSegment");
HAnimSegment831.name = "l_eyelid";
HAnimSegment831.DEF = "hanim_l_eyelid";
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyelid'/>
TouchSensor TouchSensor832 = createNode("TouchSensor");
TouchSensor832.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment831.children = new MFNode();

HAnimSegment831.children[0] = TouchSensor832;

Transform Transform833 = createNode("Transform");
Transform833.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape834 = createNode("Shape");
Shape834.USE = "HAnimJointShape";
Transform833.children = new MFNode();

Transform833.children[0] = Shape834;

HAnimSegment831.children[1] = Transform833;

HAnimJoint830.children = new MFNode();

HAnimJoint830.children[0] = HAnimSegment831;

HAnimJoint706.children[2] = HAnimJoint830;

HAnimJoint HAnimJoint835 = createNode("HAnimJoint");
HAnimJoint835.name = "l_eyebrow_joint";
HAnimJoint835.DEF = "hanim_l_eyebrow_joint";
HAnimJoint835.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint835.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment836 = createNode("HAnimSegment");
HAnimSegment836.name = "l_eyebrow";
HAnimSegment836.DEF = "hanim_l_eyebrow";
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyebrow'/>
TouchSensor TouchSensor837 = createNode("TouchSensor");
TouchSensor837.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment836.children = new MFNode();

HAnimSegment836.children[0] = TouchSensor837;

Transform Transform838 = createNode("Transform");
Transform838.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
Shape Shape839 = createNode("Shape");
Shape839.USE = "HAnimJointShape";
Transform838.children = new MFNode();

Transform838.children[0] = Shape839;

HAnimSegment836.children[1] = Transform838;

HAnimJoint835.children = new MFNode();

HAnimJoint835.children[0] = HAnimSegment836;

HAnimJoint706.children[3] = HAnimJoint835;

HAnimJoint HAnimJoint840 = createNode("HAnimJoint");
HAnimJoint840.name = "r_eyeball_joint";
HAnimJoint840.DEF = "hanim_r_eyeball_joint";
HAnimJoint840.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint840.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment841 = createNode("HAnimSegment");
HAnimSegment841.name = "r_eyeball";
HAnimSegment841.DEF = "hanim_r_eyeball";
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyeball'/>
TouchSensor TouchSensor842 = createNode("TouchSensor");
TouchSensor842.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment841.children = new MFNode();

HAnimSegment841.children[0] = TouchSensor842;

Transform Transform843 = createNode("Transform");
Transform843.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape844 = createNode("Shape");
Shape844.USE = "HAnimJointShape";
Transform843.children = new MFNode();

Transform843.children[0] = Shape844;

HAnimSegment841.children[1] = Transform843;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
Shape Shape845 = createNode("Shape");
LineSet LineSet846 = createNode("LineSet");
LineSet846.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate847 = createNode("Coordinate");
Coordinate847.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet846.coord = Coordinate847;

ColorRGBA ColorRGBA848 = createNode("ColorRGBA");
ColorRGBA848.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet846.color = ColorRGBA848;

Shape845.geometry = LineSet846;

HAnimSegment841.children[2] = Shape845;

HAnimSite HAnimSite849 = createNode("HAnimSite");
HAnimSite849.name = "r_eyeball_site_view";
HAnimSite849.DEF = "hanim_r_eyeball_site_view";
HAnimSite849.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
//HAnimSite visualization shape
TouchSensor TouchSensor850 = createNode("TouchSensor");
TouchSensor850.description = "HAnimSite r_eyeball_site_view";
HAnimSite849.children = new MFNode();

HAnimSite849.children[0] = TouchSensor850;

Shape Shape851 = createNode("Shape");
Shape851.USE = "HAnimSiteShape";
HAnimSite849.children[1] = Shape851;

Viewpoint Viewpoint852 = createNode("Viewpoint");
Viewpoint852.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint852.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint852.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint852.position = new SFVec3f(new float[0,0,0]);
HAnimSite849.children[2] = Viewpoint852;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor853 = createNode("Anchor");
Anchor853.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor853.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
LOD LOD854 = createNode("LOD");
LOD854.forceTransitions = True;
LOD854.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo855 = createNode("WorldInfo");
WorldInfo855.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD854.children = new MFNode();

LOD854.children[0] = WorldInfo855;

Shape Shape856 = createNode("Shape");
Shape856.USE = "HAnimSiteViewpointShape";
LOD854.children[1] = Shape856;

Anchor853.children = new MFNode();

Anchor853.children[0] = LOD854;

HAnimSite849.children[3] = Anchor853;

HAnimSegment841.children[3] = HAnimSite849;

HAnimJoint840.children = new MFNode();

HAnimJoint840.children[0] = HAnimSegment841;

HAnimJoint706.children[4] = HAnimJoint840;

HAnimJoint HAnimJoint857 = createNode("HAnimJoint");
HAnimJoint857.name = "r_eyelid_joint";
HAnimJoint857.DEF = "hanim_r_eyelid_joint";
HAnimJoint857.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint857.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment858 = createNode("HAnimSegment");
HAnimSegment858.name = "r_eyelid";
HAnimSegment858.DEF = "hanim_r_eyelid";
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyelid'/>
TouchSensor TouchSensor859 = createNode("TouchSensor");
TouchSensor859.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment858.children = new MFNode();

HAnimSegment858.children[0] = TouchSensor859;

Transform Transform860 = createNode("Transform");
Transform860.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape861 = createNode("Shape");
Shape861.USE = "HAnimJointShape";
Transform860.children = new MFNode();

Transform860.children[0] = Shape861;

HAnimSegment858.children[1] = Transform860;

HAnimJoint857.children = new MFNode();

HAnimJoint857.children[0] = HAnimSegment858;

HAnimJoint706.children[5] = HAnimJoint857;

HAnimJoint HAnimJoint862 = createNode("HAnimJoint");
HAnimJoint862.name = "r_eyebrow_joint";
HAnimJoint862.DEF = "hanim_r_eyebrow_joint";
HAnimJoint862.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint862.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment863 = createNode("HAnimSegment");
HAnimSegment863.name = "r_eyebrow";
HAnimSegment863.DEF = "hanim_r_eyebrow";
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyebrow'/>
TouchSensor TouchSensor864 = createNode("TouchSensor");
TouchSensor864.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment863.children = new MFNode();

HAnimSegment863.children[0] = TouchSensor864;

Transform Transform865 = createNode("Transform");
Transform865.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
Shape Shape866 = createNode("Shape");
Shape866.USE = "HAnimJointShape";
Transform865.children = new MFNode();

Transform865.children[0] = Shape866;

HAnimSegment863.children[1] = Transform865;

HAnimJoint862.children = new MFNode();

HAnimJoint862.children[0] = HAnimSegment863;

HAnimJoint706.children[6] = HAnimJoint862;

HAnimJoint HAnimJoint867 = createNode("HAnimJoint");
HAnimJoint867.name = "temporomandibular";
HAnimJoint867.DEF = "hanim_temporomandibular";
HAnimJoint867.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint867.stiffness = new SFVec3f(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment HAnimSegment868 = createNode("HAnimSegment");
HAnimSegment868.name = "jaw";
HAnimSegment868.DEF = "hanim_jaw";
//<HAnimJoint name='temporomandibular'/> visualization sphere is placed within <HAnimSegment name='jaw'/>
TouchSensor TouchSensor869 = createNode("TouchSensor");
TouchSensor869.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment868.children = new MFNode();

HAnimSegment868.children[0] = TouchSensor869;

Transform Transform870 = createNode("Transform");
Transform870.translation = new SFVec3f(new float[0,1.63,0.015]);
Shape Shape871 = createNode("Shape");
Shape871.USE = "HAnimJointShape";
Transform870.children = new MFNode();

Transform870.children[0] = Shape871;

HAnimSegment868.children[1] = Transform870;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
Shape Shape872 = createNode("Shape");
LineSet LineSet873 = createNode("LineSet");
LineSet873.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate874 = createNode("Coordinate");
Coordinate874.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet873.coord = Coordinate874;

ColorRGBA ColorRGBA875 = createNode("ColorRGBA");
ColorRGBA875.USE = "HAnimSiteLineColorRGBA";
LineSet873.color = ColorRGBA875;

Shape872.geometry = LineSet873;

HAnimSegment868.children[2] = Shape872;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
Shape Shape876 = createNode("Shape");
LineSet LineSet877 = createNode("LineSet");
LineSet877.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate878 = createNode("Coordinate");
Coordinate878.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet877.coord = Coordinate878;

ColorRGBA ColorRGBA879 = createNode("ColorRGBA");
ColorRGBA879.USE = "HAnimSiteLineColorRGBA";
LineSet877.color = ColorRGBA879;

Shape876.geometry = LineSet877;

HAnimSegment868.children[3] = Shape876;

HAnimSite HAnimSite880 = createNode("HAnimSite");
HAnimSite880.name = "temporomandibular_l_site_pt";
HAnimSite880.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite880.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor881 = createNode("TouchSensor");
TouchSensor881.description = "HAnimSite temporomandibular_l_site";
HAnimSite880.children = new MFNode();

HAnimSite880.children[0] = TouchSensor881;

Shape Shape882 = createNode("Shape");
Shape882.USE = "HAnimSiteShape";
HAnimSite880.children[1] = Shape882;

HAnimSegment868.children[4] = HAnimSite880;

HAnimSite HAnimSite883 = createNode("HAnimSite");
HAnimSite883.name = "temporomandibular_r_site_pt";
HAnimSite883.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite883.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor884 = createNode("TouchSensor");
TouchSensor884.description = "HAnimSite temporomandibular_r_site";
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = TouchSensor884;

Shape Shape885 = createNode("Shape");
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

HAnimJoint HAnimJoint886 = createNode("HAnimJoint");
HAnimJoint886.name = "l_sternoclavicular";
HAnimJoint886.DEF = "hanim_l_sternoclavicular";
HAnimJoint886.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint886.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment887 = createNode("HAnimSegment");
HAnimSegment887.name = "l_clavicle";
HAnimSegment887.DEF = "hanim_l_clavicle";
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='l_clavicle'/>
TouchSensor TouchSensor888 = createNode("TouchSensor");
TouchSensor888.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment887.children = new MFNode();

HAnimSegment887.children[0] = TouchSensor888;

Transform Transform889 = createNode("Transform");
Transform889.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape890 = createNode("Shape");
Shape890.USE = "HAnimJointShape";
Transform889.children = new MFNode();

Transform889.children[0] = Shape890;

HAnimSegment887.children[1] = Transform889;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
Shape Shape891 = createNode("Shape");
LineSet LineSet892 = createNode("LineSet");
LineSet892.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate893 = createNode("Coordinate");
Coordinate893.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet892.coord = Coordinate893;

ColorRGBA ColorRGBA894 = createNode("ColorRGBA");
ColorRGBA894.USE = "HAnimSegmentLineColorRGBA";
LineSet892.color = ColorRGBA894;

Shape891.geometry = LineSet892;

HAnimSegment887.children[2] = Shape891;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
Shape Shape895 = createNode("Shape");
LineSet LineSet896 = createNode("LineSet");
LineSet896.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate897 = createNode("Coordinate");
Coordinate897.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet896.coord = Coordinate897;

ColorRGBA ColorRGBA898 = createNode("ColorRGBA");
ColorRGBA898.USE = "HAnimSiteLineColorRGBA";
LineSet896.color = ColorRGBA898;

Shape895.geometry = LineSet896;

HAnimSegment887.children[3] = Shape895;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
Shape Shape899 = createNode("Shape");
LineSet LineSet900 = createNode("LineSet");
LineSet900.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate901 = createNode("Coordinate");
Coordinate901.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet900.coord = Coordinate901;

ColorRGBA ColorRGBA902 = createNode("ColorRGBA");
ColorRGBA902.USE = "HAnimSiteLineColorRGBA";
LineSet900.color = ColorRGBA902;

Shape899.geometry = LineSet900;

HAnimSegment887.children[4] = Shape899;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
Shape Shape903 = createNode("Shape");
LineSet LineSet904 = createNode("LineSet");
LineSet904.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate905 = createNode("Coordinate");
Coordinate905.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet904.coord = Coordinate905;

ColorRGBA ColorRGBA906 = createNode("ColorRGBA");
ColorRGBA906.USE = "HAnimSiteLineColorRGBA";
LineSet904.color = ColorRGBA906;

Shape903.geometry = LineSet904;

HAnimSegment887.children[5] = Shape903;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
Shape Shape907 = createNode("Shape");
LineSet LineSet908 = createNode("LineSet");
LineSet908.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate909 = createNode("Coordinate");
Coordinate909.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet908.coord = Coordinate909;

ColorRGBA ColorRGBA910 = createNode("ColorRGBA");
ColorRGBA910.USE = "HAnimSiteLineColorRGBA";
LineSet908.color = ColorRGBA910;

Shape907.geometry = LineSet908;

HAnimSegment887.children[6] = Shape907;

HAnimSite HAnimSite911 = createNode("HAnimSite");
HAnimSite911.name = "l_clavicale_pt";
HAnimSite911.DEF = "hanim_l_clavicale_pt";
HAnimSite911.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
TouchSensor TouchSensor912 = createNode("TouchSensor");
TouchSensor912.description = "HAnimSite l_clavicale";
HAnimSite911.children = new MFNode();

HAnimSite911.children[0] = TouchSensor912;

Shape Shape913 = createNode("Shape");
Shape913.USE = "HAnimSiteShape";
HAnimSite911.children[1] = Shape913;

HAnimSegment887.children[7] = HAnimSite911;

HAnimSite HAnimSite914 = createNode("HAnimSite");
HAnimSite914.name = "l_acromion_pt";
HAnimSite914.DEF = "hanim_l_acromion_pt";
HAnimSite914.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
TouchSensor TouchSensor915 = createNode("TouchSensor");
TouchSensor915.description = "HAnimSite l_acromion";
HAnimSite914.children = new MFNode();

HAnimSite914.children[0] = TouchSensor915;

Shape Shape916 = createNode("Shape");
Shape916.USE = "HAnimSiteShape";
HAnimSite914.children[1] = Shape916;

HAnimSegment887.children[8] = HAnimSite914;

HAnimSite HAnimSite917 = createNode("HAnimSite");
HAnimSite917.name = "l_axilla_ant_pt";
HAnimSite917.DEF = "hanim_l_axilla_ant_pt";
HAnimSite917.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
TouchSensor TouchSensor918 = createNode("TouchSensor");
TouchSensor918.description = "HAnimSite l_axilla_ant";
HAnimSite917.children = new MFNode();

HAnimSite917.children[0] = TouchSensor918;

Shape Shape919 = createNode("Shape");
Shape919.USE = "HAnimSiteShape";
HAnimSite917.children[1] = Shape919;

HAnimSegment887.children[9] = HAnimSite917;

HAnimSite HAnimSite920 = createNode("HAnimSite");
HAnimSite920.name = "l_axilla_post_pt";
HAnimSite920.DEF = "hanim_l_axilla_post_pt";
HAnimSite920.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
TouchSensor TouchSensor921 = createNode("TouchSensor");
TouchSensor921.description = "HAnimSite l_axilla_post";
HAnimSite920.children = new MFNode();

HAnimSite920.children[0] = TouchSensor921;

Shape Shape922 = createNode("Shape");
Shape922.USE = "HAnimSiteShape";
HAnimSite920.children[1] = Shape922;

HAnimSegment887.children[10] = HAnimSite920;

HAnimJoint886.children = new MFNode();

HAnimJoint886.children[0] = HAnimSegment887;

HAnimJoint HAnimJoint923 = createNode("HAnimJoint");
HAnimJoint923.name = "l_acromioclavicular";
HAnimJoint923.DEF = "hanim_l_acromioclavicular";
HAnimJoint923.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint923.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment924 = createNode("HAnimSegment");
HAnimSegment924.name = "l_scapula";
HAnimSegment924.DEF = "hanim_l_scapula";
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='l_scapula'/>
TouchSensor TouchSensor925 = createNode("TouchSensor");
TouchSensor925.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment924.children = new MFNode();

HAnimSegment924.children[0] = TouchSensor925;

Transform Transform926 = createNode("Transform");
Transform926.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape927 = createNode("Shape");
Shape927.USE = "HAnimJointShape";
Transform926.children = new MFNode();

Transform926.children[0] = Shape927;

HAnimSegment924.children[1] = Transform926;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
Shape Shape928 = createNode("Shape");
LineSet LineSet929 = createNode("LineSet");
LineSet929.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate930 = createNode("Coordinate");
Coordinate930.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet929.coord = Coordinate930;

ColorRGBA ColorRGBA931 = createNode("ColorRGBA");
ColorRGBA931.USE = "HAnimSegmentLineColorRGBA";
LineSet929.color = ColorRGBA931;

Shape928.geometry = LineSet929;

HAnimSegment924.children[2] = Shape928;

HAnimJoint923.children = new MFNode();

HAnimJoint923.children[0] = HAnimSegment924;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.name = "l_shoulder";
HAnimJoint932.DEF = "hanim_l_shoulder";
HAnimJoint932.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint932.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment933 = createNode("HAnimSegment");
HAnimSegment933.name = "l_upperarm";
HAnimSegment933.DEF = "hanim_l_upperarm";
//<HAnimJoint name='l_shoulder'/> visualization sphere is placed within <HAnimSegment name='l_upperarm'/>
TouchSensor TouchSensor934 = createNode("TouchSensor");
TouchSensor934.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment933.children = new MFNode();

HAnimSegment933.children[0] = TouchSensor934;

Transform Transform935 = createNode("Transform");
Transform935.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape936 = createNode("Shape");
Shape936.USE = "HAnimJointShape";
Transform935.children = new MFNode();

Transform935.children[0] = Shape936;

HAnimSegment933.children[1] = Transform935;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
Shape Shape937 = createNode("Shape");
LineSet LineSet938 = createNode("LineSet");
LineSet938.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate939 = createNode("Coordinate");
Coordinate939.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet938.coord = Coordinate939;

ColorRGBA ColorRGBA940 = createNode("ColorRGBA");
ColorRGBA940.USE = "HAnimSegmentLineColorRGBA";
LineSet938.color = ColorRGBA940;

Shape937.geometry = LineSet938;

HAnimSegment933.children[2] = Shape937;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
Shape Shape941 = createNode("Shape");
LineSet LineSet942 = createNode("LineSet");
LineSet942.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate943 = createNode("Coordinate");
Coordinate943.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet942.coord = Coordinate943;

ColorRGBA ColorRGBA944 = createNode("ColorRGBA");
ColorRGBA944.USE = "HAnimSiteLineColorRGBA";
LineSet942.color = ColorRGBA944;

Shape941.geometry = LineSet942;

HAnimSegment933.children[3] = Shape941;

HAnimSite HAnimSite945 = createNode("HAnimSite");
HAnimSite945.name = "l_humeral_lateral_epicn_pt";
HAnimSite945.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite945.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
TouchSensor TouchSensor946 = createNode("TouchSensor");
TouchSensor946.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite945.children = new MFNode();

HAnimSite945.children[0] = TouchSensor946;

Shape Shape947 = createNode("Shape");
Shape947.USE = "HAnimSiteShape";
HAnimSite945.children[1] = Shape947;

HAnimSegment933.children[4] = HAnimSite945;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

HAnimJoint HAnimJoint948 = createNode("HAnimJoint");
HAnimJoint948.name = "l_elbow";
HAnimJoint948.DEF = "hanim_l_elbow";
HAnimJoint948.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint948.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment949 = createNode("HAnimSegment");
HAnimSegment949.name = "l_forearm";
HAnimSegment949.DEF = "hanim_l_forearm";
//<HAnimJoint name='l_elbow'/> visualization sphere is placed within <HAnimSegment name='l_forearm'/>
TouchSensor TouchSensor950 = createNode("TouchSensor");
TouchSensor950.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment949.children = new MFNode();

HAnimSegment949.children[0] = TouchSensor950;

Transform Transform951 = createNode("Transform");
Transform951.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape952 = createNode("Shape");
Shape952.USE = "HAnimJointShape";
Transform951.children = new MFNode();

Transform951.children[0] = Shape952;

HAnimSegment949.children[1] = Transform951;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
Shape Shape953 = createNode("Shape");
LineSet LineSet954 = createNode("LineSet");
LineSet954.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate955 = createNode("Coordinate");
Coordinate955.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet954.coord = Coordinate955;

ColorRGBA ColorRGBA956 = createNode("ColorRGBA");
ColorRGBA956.USE = "HAnimSegmentLineColorRGBA";
LineSet954.color = ColorRGBA956;

Shape953.geometry = LineSet954;

HAnimSegment949.children[2] = Shape953;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
Shape Shape957 = createNode("Shape");
LineSet LineSet958 = createNode("LineSet");
LineSet958.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate959 = createNode("Coordinate");
Coordinate959.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet958.coord = Coordinate959;

ColorRGBA ColorRGBA960 = createNode("ColorRGBA");
ColorRGBA960.USE = "HAnimSiteLineColorRGBA";
LineSet958.color = ColorRGBA960;

Shape957.geometry = LineSet958;

HAnimSegment949.children[3] = Shape957;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
Shape Shape961 = createNode("Shape");
LineSet LineSet962 = createNode("LineSet");
LineSet962.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate963 = createNode("Coordinate");
Coordinate963.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet962.coord = Coordinate963;

ColorRGBA ColorRGBA964 = createNode("ColorRGBA");
ColorRGBA964.USE = "HAnimSiteLineColorRGBA";
LineSet962.color = ColorRGBA964;

Shape961.geometry = LineSet962;

HAnimSegment949.children[4] = Shape961;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
Shape Shape965 = createNode("Shape");
LineSet LineSet966 = createNode("LineSet");
LineSet966.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate967 = createNode("Coordinate");
Coordinate967.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet966.coord = Coordinate967;

ColorRGBA ColorRGBA968 = createNode("ColorRGBA");
ColorRGBA968.USE = "HAnimSiteLineColorRGBA";
LineSet966.color = ColorRGBA968;

Shape965.geometry = LineSet966;

HAnimSegment949.children[5] = Shape965;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
Shape Shape969 = createNode("Shape");
LineSet LineSet970 = createNode("LineSet");
LineSet970.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate971 = createNode("Coordinate");
Coordinate971.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet970.coord = Coordinate971;

ColorRGBA ColorRGBA972 = createNode("ColorRGBA");
ColorRGBA972.USE = "HAnimSiteLineColorRGBA";
LineSet970.color = ColorRGBA972;

Shape969.geometry = LineSet970;

HAnimSegment949.children[6] = Shape969;

HAnimSite HAnimSite973 = createNode("HAnimSite");
HAnimSite973.name = "l_radial_styloid_pt";
HAnimSite973.DEF = "hanim_l_radial_styloid_pt";
HAnimSite973.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
TouchSensor TouchSensor974 = createNode("TouchSensor");
TouchSensor974.description = "HAnimSite l_radial_styloid";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = TouchSensor974;

Shape Shape975 = createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973.children[1] = Shape975;

HAnimSegment949.children[7] = HAnimSite973;

HAnimSite HAnimSite976 = createNode("HAnimSite");
HAnimSite976.name = "l_olecranon_pt";
HAnimSite976.DEF = "hanim_l_olecranon_pt";
HAnimSite976.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
TouchSensor TouchSensor977 = createNode("TouchSensor");
TouchSensor977.description = "HAnimSite l_olecranon";
HAnimSite976.children = new MFNode();

HAnimSite976.children[0] = TouchSensor977;

Shape Shape978 = createNode("Shape");
Shape978.USE = "HAnimSiteShape";
HAnimSite976.children[1] = Shape978;

HAnimSegment949.children[8] = HAnimSite976;

HAnimSite HAnimSite979 = createNode("HAnimSite");
HAnimSite979.name = "l_humeral_medial_epicn_pt";
HAnimSite979.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite979.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
TouchSensor TouchSensor980 = createNode("TouchSensor");
TouchSensor980.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite979.children = new MFNode();

HAnimSite979.children[0] = TouchSensor980;

Shape Shape981 = createNode("Shape");
Shape981.USE = "HAnimSiteShape";
HAnimSite979.children[1] = Shape981;

HAnimSegment949.children[9] = HAnimSite979;

HAnimSite HAnimSite982 = createNode("HAnimSite");
HAnimSite982.name = "l_radiale_pt";
HAnimSite982.DEF = "hanim_l_radiale_pt";
HAnimSite982.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
TouchSensor TouchSensor983 = createNode("TouchSensor");
TouchSensor983.description = "HAnimSite l_radiale";
HAnimSite982.children = new MFNode();

HAnimSite982.children[0] = TouchSensor983;

Shape Shape984 = createNode("Shape");
Shape984.USE = "HAnimSiteShape";
HAnimSite982.children[1] = Shape984;

HAnimSegment949.children[10] = HAnimSite982;

HAnimJoint948.children = new MFNode();

HAnimJoint948.children[0] = HAnimSegment949;

HAnimJoint HAnimJoint985 = createNode("HAnimJoint");
HAnimJoint985.name = "l_wrist";
HAnimJoint985.DEF = "hanim_l_wrist";
HAnimJoint985.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint985.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment986 = createNode("HAnimSegment");
HAnimSegment986.name = "l_hand";
HAnimSegment986.DEF = "hanim_l_hand";
//<HAnimJoint name='l_wrist'/> visualization sphere is placed within <HAnimSegment name='l_hand'/>
TouchSensor TouchSensor987 = createNode("TouchSensor");
TouchSensor987.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment986.children = new MFNode();

HAnimSegment986.children[0] = TouchSensor987;

Transform Transform988 = createNode("Transform");
Transform988.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape989 = createNode("Shape");
Shape989.USE = "HAnimJointShape";
Transform988.children = new MFNode();

Transform988.children[0] = Shape989;

HAnimSegment986.children[1] = Transform988;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
Shape Shape990 = createNode("Shape");
LineSet LineSet991 = createNode("LineSet");
LineSet991.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate992 = createNode("Coordinate");
Coordinate992.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet991.coord = Coordinate992;

ColorRGBA ColorRGBA993 = createNode("ColorRGBA");
ColorRGBA993.USE = "HAnimSegmentLineColorRGBA";
LineSet991.color = ColorRGBA993;

Shape990.geometry = LineSet991;

HAnimSegment986.children[2] = Shape990;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
Shape Shape994 = createNode("Shape");
LineSet LineSet995 = createNode("LineSet");
LineSet995.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate996 = createNode("Coordinate");
Coordinate996.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet995.coord = Coordinate996;

ColorRGBA ColorRGBA997 = createNode("ColorRGBA");
ColorRGBA997.USE = "HAnimSegmentLineColorRGBA";
LineSet995.color = ColorRGBA997;

Shape994.geometry = LineSet995;

HAnimSegment986.children[3] = Shape994;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
Shape Shape998 = createNode("Shape");
LineSet LineSet999 = createNode("LineSet");
LineSet999.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1000 = createNode("Coordinate");
Coordinate1000.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet999.coord = Coordinate1000;

ColorRGBA ColorRGBA1001 = createNode("ColorRGBA");
ColorRGBA1001.USE = "HAnimSegmentLineColorRGBA";
LineSet999.color = ColorRGBA1001;

Shape998.geometry = LineSet999;

HAnimSegment986.children[4] = Shape998;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
Shape Shape1002 = createNode("Shape");
LineSet LineSet1003 = createNode("LineSet");
LineSet1003.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1004 = createNode("Coordinate");
Coordinate1004.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet1003.coord = Coordinate1004;

ColorRGBA ColorRGBA1005 = createNode("ColorRGBA");
ColorRGBA1005.USE = "HAnimSegmentLineColorRGBA";
LineSet1003.color = ColorRGBA1005;

Shape1002.geometry = LineSet1003;

HAnimSegment986.children[5] = Shape1002;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
Shape Shape1006 = createNode("Shape");
LineSet LineSet1007 = createNode("LineSet");
LineSet1007.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1008 = createNode("Coordinate");
Coordinate1008.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1007.coord = Coordinate1008;

ColorRGBA ColorRGBA1009 = createNode("ColorRGBA");
ColorRGBA1009.USE = "HAnimSegmentLineColorRGBA";
LineSet1007.color = ColorRGBA1009;

Shape1006.geometry = LineSet1007;

HAnimSegment986.children[6] = Shape1006;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
Shape Shape1010 = createNode("Shape");
LineSet LineSet1011 = createNode("LineSet");
LineSet1011.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1012 = createNode("Coordinate");
Coordinate1012.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1011.coord = Coordinate1012;

ColorRGBA ColorRGBA1013 = createNode("ColorRGBA");
ColorRGBA1013.USE = "HAnimSiteLineColorRGBA";
LineSet1011.color = ColorRGBA1013;

Shape1010.geometry = LineSet1011;

HAnimSegment986.children[7] = Shape1010;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
Shape Shape1014 = createNode("Shape");
LineSet LineSet1015 = createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1016 = createNode("Coordinate");
Coordinate1016.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1015.coord = Coordinate1016;

ColorRGBA ColorRGBA1017 = createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSiteLineColorRGBA";
LineSet1015.color = ColorRGBA1017;

Shape1014.geometry = LineSet1015;

HAnimSegment986.children[8] = Shape1014;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
Shape Shape1018 = createNode("Shape");
LineSet LineSet1019 = createNode("LineSet");
LineSet1019.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1020 = createNode("Coordinate");
Coordinate1020.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1019.coord = Coordinate1020;

ColorRGBA ColorRGBA1021 = createNode("ColorRGBA");
ColorRGBA1021.USE = "HAnimSiteLineColorRGBA";
LineSet1019.color = ColorRGBA1021;

Shape1018.geometry = LineSet1019;

HAnimSegment986.children[9] = Shape1018;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
Shape Shape1022 = createNode("Shape");
LineSet LineSet1023 = createNode("LineSet");
LineSet1023.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1024 = createNode("Coordinate");
Coordinate1024.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1023.coord = Coordinate1024;

ColorRGBA ColorRGBA1025 = createNode("ColorRGBA");
ColorRGBA1025.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1023.color = ColorRGBA1025;

Shape1022.geometry = LineSet1023;

HAnimSegment986.children[10] = Shape1022;

HAnimSite HAnimSite1026 = createNode("HAnimSite");
HAnimSite1026.name = "l_metacarpal_pha2_pt";
HAnimSite1026.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1026.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
TouchSensor TouchSensor1027 = createNode("TouchSensor");
TouchSensor1027.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1026.children = new MFNode();

HAnimSite1026.children[0] = TouchSensor1027;

Shape Shape1028 = createNode("Shape");
Shape1028.USE = "HAnimSiteShape";
HAnimSite1026.children[1] = Shape1028;

HAnimSegment986.children[11] = HAnimSite1026;

HAnimSite HAnimSite1029 = createNode("HAnimSite");
HAnimSite1029.name = "l_ulnar_styloid_pt";
HAnimSite1029.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1029.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
TouchSensor TouchSensor1030 = createNode("TouchSensor");
TouchSensor1030.description = "HAnimSite l_ulnar_styloid";
HAnimSite1029.children = new MFNode();

HAnimSite1029.children[0] = TouchSensor1030;

Shape Shape1031 = createNode("Shape");
Shape1031.USE = "HAnimSiteShape";
HAnimSite1029.children[1] = Shape1031;

HAnimSegment986.children[12] = HAnimSite1029;

HAnimSite HAnimSite1032 = createNode("HAnimSite");
HAnimSite1032.name = "l_metacarpal_pha5_pt";
HAnimSite1032.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1032.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
TouchSensor TouchSensor1033 = createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1032.children = new MFNode();

HAnimSite1032.children[0] = TouchSensor1033;

Shape Shape1034 = createNode("Shape");
Shape1034.USE = "HAnimSiteShape";
HAnimSite1032.children[1] = Shape1034;

HAnimSegment986.children[13] = HAnimSite1032;

HAnimSite HAnimSite1035 = createNode("HAnimSite");
HAnimSite1035.name = "l_hand_front_view";
HAnimSite1035.DEF = "hanim_l_hand_front_view";
HAnimSite1035.translation = new SFVec3f(new float[0.3,0.75,0.45]);
//HAnimSite visualization shape
TouchSensor TouchSensor1036 = createNode("TouchSensor");
TouchSensor1036.description = "HAnimSite l_hand_front_view";
HAnimSite1035.children = new MFNode();

HAnimSite1035.children[0] = TouchSensor1036;

Shape Shape1037 = createNode("Shape");
Shape1037.USE = "HAnimSiteShape";
HAnimSite1035.children[1] = Shape1037;

Viewpoint Viewpoint1038 = createNode("Viewpoint");
Viewpoint1038.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1038.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1038.description = "left hand front";
Viewpoint1038.position = new SFVec3f(new float[0,0,0]);
HAnimSite1035.children[2] = Viewpoint1038;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1039 = createNode("Anchor");
Anchor1039.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1039.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
LOD LOD1040 = createNode("LOD");
LOD1040.forceTransitions = True;
LOD1040.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1041 = createNode("WorldInfo");
WorldInfo1041.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1040.children = new MFNode();

LOD1040.children[0] = WorldInfo1041;

Shape Shape1042 = createNode("Shape");
Shape1042.USE = "HAnimSiteViewpointShape";
LOD1040.children[1] = Shape1042;

Anchor1039.children = new MFNode();

Anchor1039.children[0] = LOD1040;

HAnimSite1035.children[3] = Anchor1039;

HAnimSegment986.children[14] = HAnimSite1035;

HAnimJoint985.children = new MFNode();

HAnimJoint985.children[0] = HAnimSegment986;

HAnimJoint HAnimJoint1043 = createNode("HAnimJoint");
HAnimJoint1043.name = "l_thumb1";
HAnimJoint1043.DEF = "hanim_l_thumb1";
HAnimJoint1043.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1043.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1044 = createNode("HAnimSegment");
HAnimSegment1044.name = "l_thumb_metacarpal";
HAnimSegment1044.DEF = "hanim_l_thumb_metacarpal";
//<HAnimJoint name='l_thumb1'/> visualization sphere is placed within <HAnimSegment name='l_thumb_metacarpal'/>
TouchSensor TouchSensor1045 = createNode("TouchSensor");
TouchSensor1045.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1044.children = new MFNode();

HAnimSegment1044.children[0] = TouchSensor1045;

Transform Transform1046 = createNode("Transform");
Transform1046.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape1047 = createNode("Shape");
Shape1047.USE = "HAnimJointShape";
Transform1046.children = new MFNode();

Transform1046.children[0] = Shape1047;

HAnimSegment1044.children[1] = Transform1046;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
Shape Shape1048 = createNode("Shape");
LineSet LineSet1049 = createNode("LineSet");
LineSet1049.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1050 = createNode("Coordinate");
Coordinate1050.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1049.coord = Coordinate1050;

ColorRGBA ColorRGBA1051 = createNode("ColorRGBA");
ColorRGBA1051.USE = "HAnimSegmentLineColorRGBA";
LineSet1049.color = ColorRGBA1051;

Shape1048.geometry = LineSet1049;

HAnimSegment1044.children[2] = Shape1048;

HAnimJoint1043.children = new MFNode();

HAnimJoint1043.children[0] = HAnimSegment1044;

HAnimJoint HAnimJoint1052 = createNode("HAnimJoint");
HAnimJoint1052.name = "l_thumb2";
HAnimJoint1052.DEF = "hanim_l_thumb2";
HAnimJoint1052.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1052.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1053 = createNode("HAnimSegment");
HAnimSegment1053.name = "l_thumb_proximal";
HAnimSegment1053.DEF = "hanim_l_thumb_proximal";
//<HAnimJoint name='l_thumb2'/> visualization sphere is placed within <HAnimSegment name='l_thumb_proximal'/>
TouchSensor TouchSensor1054 = createNode("TouchSensor");
TouchSensor1054.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1053.children = new MFNode();

HAnimSegment1053.children[0] = TouchSensor1054;

Transform Transform1055 = createNode("Transform");
Transform1055.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape1056 = createNode("Shape");
Shape1056.USE = "HAnimJointShape";
Transform1055.children = new MFNode();

Transform1055.children[0] = Shape1056;

HAnimSegment1053.children[1] = Transform1055;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
Shape Shape1057 = createNode("Shape");
LineSet LineSet1058 = createNode("LineSet");
LineSet1058.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1059 = createNode("Coordinate");
Coordinate1059.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1058.coord = Coordinate1059;

ColorRGBA ColorRGBA1060 = createNode("ColorRGBA");
ColorRGBA1060.USE = "HAnimSegmentLineColorRGBA";
LineSet1058.color = ColorRGBA1060;

Shape1057.geometry = LineSet1058;

HAnimSegment1053.children[2] = Shape1057;

HAnimJoint1052.children = new MFNode();

HAnimJoint1052.children[0] = HAnimSegment1053;

HAnimJoint HAnimJoint1061 = createNode("HAnimJoint");
HAnimJoint1061.name = "l_thumb3";
HAnimJoint1061.DEF = "hanim_l_thumb3";
HAnimJoint1061.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1061.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1062 = createNode("HAnimSegment");
HAnimSegment1062.name = "l_thumb_distal";
HAnimSegment1062.DEF = "hanim_l_thumb_distal";
//<HAnimJoint name='l_thumb3'/> visualization sphere is placed within <HAnimSegment name='l_thumb_distal'/>
TouchSensor TouchSensor1063 = createNode("TouchSensor");
TouchSensor1063.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1062.children = new MFNode();

HAnimSegment1062.children[0] = TouchSensor1063;

Transform Transform1064 = createNode("Transform");
Transform1064.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape1065 = createNode("Shape");
Shape1065.USE = "HAnimJointShape";
Transform1064.children = new MFNode();

Transform1064.children[0] = Shape1065;

HAnimSegment1062.children[1] = Transform1064;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
Shape Shape1066 = createNode("Shape");
LineSet LineSet1067 = createNode("LineSet");
LineSet1067.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1068 = createNode("Coordinate");
Coordinate1068.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1067.coord = Coordinate1068;

ColorRGBA ColorRGBA1069 = createNode("ColorRGBA");
ColorRGBA1069.USE = "HAnimSiteLineColorRGBA";
LineSet1067.color = ColorRGBA1069;

Shape1066.geometry = LineSet1067;

HAnimSegment1062.children[2] = Shape1066;

HAnimSite HAnimSite1070 = createNode("HAnimSite");
HAnimSite1070.name = "l_thumb_distal_tip";
HAnimSite1070.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1070.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
TouchSensor TouchSensor1071 = createNode("TouchSensor");
TouchSensor1071.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1070.children = new MFNode();

HAnimSite1070.children[0] = TouchSensor1071;

Shape Shape1072 = createNode("Shape");
Shape1072.USE = "HAnimSiteShape";
HAnimSite1070.children[1] = Shape1072;

HAnimSegment1062.children[3] = HAnimSite1070;

HAnimJoint1061.children = new MFNode();

HAnimJoint1061.children[0] = HAnimSegment1062;

HAnimJoint1052.children[1] = HAnimJoint1061;

HAnimJoint1043.children[1] = HAnimJoint1052;

HAnimJoint985.children[1] = HAnimJoint1043;

HAnimJoint HAnimJoint1073 = createNode("HAnimJoint");
HAnimJoint1073.name = "l_index0";
HAnimJoint1073.DEF = "hanim_l_index0";
HAnimJoint1073.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1073.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1074 = createNode("HAnimSegment");
HAnimSegment1074.name = "l_index_metacarpal";
HAnimSegment1074.DEF = "hanim_l_index_metacarpal";
//<HAnimJoint name='l_index0'/> visualization sphere is placed within <HAnimSegment name='l_index_metacarpal'/>
TouchSensor TouchSensor1075 = createNode("TouchSensor");
TouchSensor1075.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1074.children = new MFNode();

HAnimSegment1074.children[0] = TouchSensor1075;

Transform Transform1076 = createNode("Transform");
Transform1076.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape1077 = createNode("Shape");
Shape1077.USE = "HAnimJointShape";
Transform1076.children = new MFNode();

Transform1076.children[0] = Shape1077;

HAnimSegment1074.children[1] = Transform1076;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
Shape Shape1078 = createNode("Shape");
LineSet LineSet1079 = createNode("LineSet");
LineSet1079.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1080 = createNode("Coordinate");
Coordinate1080.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1079.coord = Coordinate1080;

ColorRGBA ColorRGBA1081 = createNode("ColorRGBA");
ColorRGBA1081.USE = "HAnimSegmentLineColorRGBA";
LineSet1079.color = ColorRGBA1081;

Shape1078.geometry = LineSet1079;

HAnimSegment1074.children[2] = Shape1078;

HAnimJoint1073.children = new MFNode();

HAnimJoint1073.children[0] = HAnimSegment1074;

HAnimJoint HAnimJoint1082 = createNode("HAnimJoint");
HAnimJoint1082.name = "l_index1";
HAnimJoint1082.DEF = "hanim_l_index1";
HAnimJoint1082.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1082.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1083 = createNode("HAnimSegment");
HAnimSegment1083.name = "l_index_proximal";
HAnimSegment1083.DEF = "hanim_l_index_proximal";
//<HAnimJoint name='l_index1'/> visualization sphere is placed within <HAnimSegment name='l_index_proximal'/>
TouchSensor TouchSensor1084 = createNode("TouchSensor");
TouchSensor1084.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1083.children = new MFNode();

HAnimSegment1083.children[0] = TouchSensor1084;

Transform Transform1085 = createNode("Transform");
Transform1085.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape1086 = createNode("Shape");
Shape1086.USE = "HAnimJointShape";
Transform1085.children = new MFNode();

Transform1085.children[0] = Shape1086;

HAnimSegment1083.children[1] = Transform1085;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
Shape Shape1087 = createNode("Shape");
LineSet LineSet1088 = createNode("LineSet");
LineSet1088.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1089 = createNode("Coordinate");
Coordinate1089.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1088.coord = Coordinate1089;

ColorRGBA ColorRGBA1090 = createNode("ColorRGBA");
ColorRGBA1090.USE = "HAnimSegmentLineColorRGBA";
LineSet1088.color = ColorRGBA1090;

Shape1087.geometry = LineSet1088;

HAnimSegment1083.children[2] = Shape1087;

HAnimJoint1082.children = new MFNode();

HAnimJoint1082.children[0] = HAnimSegment1083;

HAnimJoint HAnimJoint1091 = createNode("HAnimJoint");
HAnimJoint1091.name = "l_index2";
HAnimJoint1091.DEF = "hanim_l_index2";
HAnimJoint1091.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1091.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1092 = createNode("HAnimSegment");
HAnimSegment1092.name = "l_index_middle";
HAnimSegment1092.DEF = "hanim_l_index_middle";
//<HAnimJoint name='l_index2'/> visualization sphere is placed within <HAnimSegment name='l_index_middle'/>
TouchSensor TouchSensor1093 = createNode("TouchSensor");
TouchSensor1093.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1092.children = new MFNode();

HAnimSegment1092.children[0] = TouchSensor1093;

Transform Transform1094 = createNode("Transform");
Transform1094.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape1095 = createNode("Shape");
Shape1095.USE = "HAnimJointShape";
Transform1094.children = new MFNode();

Transform1094.children[0] = Shape1095;

HAnimSegment1092.children[1] = Transform1094;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
Shape Shape1096 = createNode("Shape");
LineSet LineSet1097 = createNode("LineSet");
LineSet1097.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1098 = createNode("Coordinate");
Coordinate1098.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1097.coord = Coordinate1098;

ColorRGBA ColorRGBA1099 = createNode("ColorRGBA");
ColorRGBA1099.USE = "HAnimSegmentLineColorRGBA";
LineSet1097.color = ColorRGBA1099;

Shape1096.geometry = LineSet1097;

HAnimSegment1092.children[2] = Shape1096;

HAnimJoint1091.children = new MFNode();

HAnimJoint1091.children[0] = HAnimSegment1092;

HAnimJoint HAnimJoint1100 = createNode("HAnimJoint");
HAnimJoint1100.name = "l_index3";
HAnimJoint1100.DEF = "hanim_l_index3";
HAnimJoint1100.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1100.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1101 = createNode("HAnimSegment");
HAnimSegment1101.name = "l_index_distal";
HAnimSegment1101.DEF = "hanim_l_index_distal";
//<HAnimJoint name='l_index3'/> visualization sphere is placed within <HAnimSegment name='l_index_distal'/>
TouchSensor TouchSensor1102 = createNode("TouchSensor");
TouchSensor1102.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1101.children = new MFNode();

HAnimSegment1101.children[0] = TouchSensor1102;

Transform Transform1103 = createNode("Transform");
Transform1103.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape1104 = createNode("Shape");
Shape1104.USE = "HAnimJointShape";
Transform1103.children = new MFNode();

Transform1103.children[0] = Shape1104;

HAnimSegment1101.children[1] = Transform1103;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
Shape Shape1105 = createNode("Shape");
LineSet LineSet1106 = createNode("LineSet");
LineSet1106.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1107 = createNode("Coordinate");
Coordinate1107.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1106.coord = Coordinate1107;

ColorRGBA ColorRGBA1108 = createNode("ColorRGBA");
ColorRGBA1108.USE = "HAnimSiteLineColorRGBA";
LineSet1106.color = ColorRGBA1108;

Shape1105.geometry = LineSet1106;

HAnimSegment1101.children[2] = Shape1105;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
Shape Shape1109 = createNode("Shape");
LineSet LineSet1110 = createNode("LineSet");
LineSet1110.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1111 = createNode("Coordinate");
Coordinate1111.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1110.coord = Coordinate1111;

ColorRGBA ColorRGBA1112 = createNode("ColorRGBA");
ColorRGBA1112.USE = "HAnimSiteLineColorRGBA";
LineSet1110.color = ColorRGBA1112;

Shape1109.geometry = LineSet1110;

HAnimSegment1101.children[3] = Shape1109;

HAnimSite HAnimSite1113 = createNode("HAnimSite");
HAnimSite1113.name = "l_index_distal_tip";
HAnimSite1113.DEF = "hanim_l_index_distal_tip";
HAnimSite1113.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
TouchSensor TouchSensor1114 = createNode("TouchSensor");
TouchSensor1114.description = "HAnimSite l_index_distal_tip";
HAnimSite1113.children = new MFNode();

HAnimSite1113.children[0] = TouchSensor1114;

Shape Shape1115 = createNode("Shape");
Shape1115.USE = "HAnimSiteShape";
HAnimSite1113.children[1] = Shape1115;

HAnimSegment1101.children[4] = HAnimSite1113;

HAnimSite HAnimSite1116 = createNode("HAnimSite");
HAnimSite1116.name = "l_dactylion_pt";
HAnimSite1116.DEF = "hanim_l_dactylion_pt";
HAnimSite1116.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
TouchSensor TouchSensor1117 = createNode("TouchSensor");
TouchSensor1117.description = "HAnimSite l_dactylion";
HAnimSite1116.children = new MFNode();

HAnimSite1116.children[0] = TouchSensor1117;

Shape Shape1118 = createNode("Shape");
Shape1118.USE = "HAnimSiteShape";
HAnimSite1116.children[1] = Shape1118;

HAnimSegment1101.children[5] = HAnimSite1116;

HAnimJoint1100.children = new MFNode();

HAnimJoint1100.children[0] = HAnimSegment1101;

HAnimJoint1091.children[1] = HAnimJoint1100;

HAnimJoint1082.children[1] = HAnimJoint1091;

HAnimJoint1073.children[1] = HAnimJoint1082;

HAnimJoint985.children[2] = HAnimJoint1073;

HAnimJoint HAnimJoint1119 = createNode("HAnimJoint");
HAnimJoint1119.name = "l_middle0";
HAnimJoint1119.DEF = "hanim_l_middle0";
HAnimJoint1119.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1119.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1120 = createNode("HAnimSegment");
HAnimSegment1120.name = "l_middle_metacarpal";
HAnimSegment1120.DEF = "hanim_l_middle_metacarpal";
//<HAnimJoint name='l_middle0'/> visualization sphere is placed within <HAnimSegment name='l_middle_metacarpal'/>
TouchSensor TouchSensor1121 = createNode("TouchSensor");
TouchSensor1121.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1120.children = new MFNode();

HAnimSegment1120.children[0] = TouchSensor1121;

Transform Transform1122 = createNode("Transform");
Transform1122.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape1123 = createNode("Shape");
Shape1123.USE = "HAnimJointShape";
Transform1122.children = new MFNode();

Transform1122.children[0] = Shape1123;

HAnimSegment1120.children[1] = Transform1122;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
Shape Shape1124 = createNode("Shape");
LineSet LineSet1125 = createNode("LineSet");
LineSet1125.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1126 = createNode("Coordinate");
Coordinate1126.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1125.coord = Coordinate1126;

ColorRGBA ColorRGBA1127 = createNode("ColorRGBA");
ColorRGBA1127.USE = "HAnimSegmentLineColorRGBA";
LineSet1125.color = ColorRGBA1127;

Shape1124.geometry = LineSet1125;

HAnimSegment1120.children[2] = Shape1124;

HAnimJoint1119.children = new MFNode();

HAnimJoint1119.children[0] = HAnimSegment1120;

HAnimJoint HAnimJoint1128 = createNode("HAnimJoint");
HAnimJoint1128.name = "l_middle1";
HAnimJoint1128.DEF = "hanim_l_middle1";
HAnimJoint1128.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1128.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1129 = createNode("HAnimSegment");
HAnimSegment1129.name = "l_middle_proximal";
HAnimSegment1129.DEF = "hanim_l_middle_proximal";
//<HAnimJoint name='l_middle1'/> visualization sphere is placed within <HAnimSegment name='l_middle_proximal'/>
TouchSensor TouchSensor1130 = createNode("TouchSensor");
TouchSensor1130.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1129.children = new MFNode();

HAnimSegment1129.children[0] = TouchSensor1130;

Transform Transform1131 = createNode("Transform");
Transform1131.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape1132 = createNode("Shape");
Shape1132.USE = "HAnimJointShape";
Transform1131.children = new MFNode();

Transform1131.children[0] = Shape1132;

HAnimSegment1129.children[1] = Transform1131;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
Shape Shape1133 = createNode("Shape");
LineSet LineSet1134 = createNode("LineSet");
LineSet1134.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1135 = createNode("Coordinate");
Coordinate1135.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1134.coord = Coordinate1135;

ColorRGBA ColorRGBA1136 = createNode("ColorRGBA");
ColorRGBA1136.USE = "HAnimSegmentLineColorRGBA";
LineSet1134.color = ColorRGBA1136;

Shape1133.geometry = LineSet1134;

HAnimSegment1129.children[2] = Shape1133;

HAnimJoint1128.children = new MFNode();

HAnimJoint1128.children[0] = HAnimSegment1129;

HAnimJoint HAnimJoint1137 = createNode("HAnimJoint");
HAnimJoint1137.name = "l_middle2";
HAnimJoint1137.DEF = "hanim_l_middle2";
HAnimJoint1137.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1137.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1138 = createNode("HAnimSegment");
HAnimSegment1138.name = "l_middle_middle";
HAnimSegment1138.DEF = "hanim_l_middle_middle";
//<HAnimJoint name='l_middle2'/> visualization sphere is placed within <HAnimSegment name='l_middle_middle'/>
TouchSensor TouchSensor1139 = createNode("TouchSensor");
TouchSensor1139.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1138.children = new MFNode();

HAnimSegment1138.children[0] = TouchSensor1139;

Transform Transform1140 = createNode("Transform");
Transform1140.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape1141 = createNode("Shape");
Shape1141.USE = "HAnimJointShape";
Transform1140.children = new MFNode();

Transform1140.children[0] = Shape1141;

HAnimSegment1138.children[1] = Transform1140;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
Shape Shape1142 = createNode("Shape");
LineSet LineSet1143 = createNode("LineSet");
LineSet1143.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1144 = createNode("Coordinate");
Coordinate1144.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1143.coord = Coordinate1144;

ColorRGBA ColorRGBA1145 = createNode("ColorRGBA");
ColorRGBA1145.USE = "HAnimSegmentLineColorRGBA";
LineSet1143.color = ColorRGBA1145;

Shape1142.geometry = LineSet1143;

HAnimSegment1138.children[2] = Shape1142;

HAnimJoint1137.children = new MFNode();

HAnimJoint1137.children[0] = HAnimSegment1138;

HAnimJoint HAnimJoint1146 = createNode("HAnimJoint");
HAnimJoint1146.name = "l_middle3";
HAnimJoint1146.DEF = "hanim_l_middle3";
HAnimJoint1146.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1146.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1147 = createNode("HAnimSegment");
HAnimSegment1147.name = "l_middle_distal";
HAnimSegment1147.DEF = "hanim_l_middle_distal";
//<HAnimJoint name='l_middle3'/> visualization sphere is placed within <HAnimSegment name='l_middle_distal'/>
TouchSensor TouchSensor1148 = createNode("TouchSensor");
TouchSensor1148.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1147.children = new MFNode();

HAnimSegment1147.children[0] = TouchSensor1148;

Transform Transform1149 = createNode("Transform");
Transform1149.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape1150 = createNode("Shape");
Shape1150.USE = "HAnimJointShape";
Transform1149.children = new MFNode();

Transform1149.children[0] = Shape1150;

HAnimSegment1147.children[1] = Transform1149;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
Shape Shape1151 = createNode("Shape");
LineSet LineSet1152 = createNode("LineSet");
LineSet1152.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1153 = createNode("Coordinate");
Coordinate1153.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1152.coord = Coordinate1153;

ColorRGBA ColorRGBA1154 = createNode("ColorRGBA");
ColorRGBA1154.USE = "HAnimSiteLineColorRGBA";
LineSet1152.color = ColorRGBA1154;

Shape1151.geometry = LineSet1152;

HAnimSegment1147.children[2] = Shape1151;

HAnimSite HAnimSite1155 = createNode("HAnimSite");
HAnimSite1155.name = "l_middle_distal_tip";
HAnimSite1155.DEF = "hanim_l_middle_distal_tip";
HAnimSite1155.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
TouchSensor TouchSensor1156 = createNode("TouchSensor");
TouchSensor1156.description = "HAnimSite l_middle_distal_tip";
HAnimSite1155.children = new MFNode();

HAnimSite1155.children[0] = TouchSensor1156;

Shape Shape1157 = createNode("Shape");
Shape1157.USE = "HAnimSiteShape";
HAnimSite1155.children[1] = Shape1157;

HAnimSegment1147.children[3] = HAnimSite1155;

HAnimJoint1146.children = new MFNode();

HAnimJoint1146.children[0] = HAnimSegment1147;

HAnimJoint1137.children[1] = HAnimJoint1146;

HAnimJoint1128.children[1] = HAnimJoint1137;

HAnimJoint1119.children[1] = HAnimJoint1128;

HAnimJoint985.children[3] = HAnimJoint1119;

HAnimJoint HAnimJoint1158 = createNode("HAnimJoint");
HAnimJoint1158.name = "l_ring0";
HAnimJoint1158.DEF = "hanim_l_ring0";
HAnimJoint1158.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1158.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1159 = createNode("HAnimSegment");
HAnimSegment1159.name = "l_ring_metacarpal";
HAnimSegment1159.DEF = "hanim_l_ring_metacarpal";
//<HAnimJoint name='l_ring0'/> visualization sphere is placed within <HAnimSegment name='l_ring_metacarpal'/>
TouchSensor TouchSensor1160 = createNode("TouchSensor");
TouchSensor1160.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1159.children = new MFNode();

HAnimSegment1159.children[0] = TouchSensor1160;

Transform Transform1161 = createNode("Transform");
Transform1161.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape1162 = createNode("Shape");
Shape1162.USE = "HAnimJointShape";
Transform1161.children = new MFNode();

Transform1161.children[0] = Shape1162;

HAnimSegment1159.children[1] = Transform1161;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
Shape Shape1163 = createNode("Shape");
LineSet LineSet1164 = createNode("LineSet");
LineSet1164.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1165 = createNode("Coordinate");
Coordinate1165.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1164.coord = Coordinate1165;

ColorRGBA ColorRGBA1166 = createNode("ColorRGBA");
ColorRGBA1166.USE = "HAnimSegmentLineColorRGBA";
LineSet1164.color = ColorRGBA1166;

Shape1163.geometry = LineSet1164;

HAnimSegment1159.children[2] = Shape1163;

HAnimJoint1158.children = new MFNode();

HAnimJoint1158.children[0] = HAnimSegment1159;

HAnimJoint HAnimJoint1167 = createNode("HAnimJoint");
HAnimJoint1167.name = "l_ring1";
HAnimJoint1167.DEF = "hanim_l_ring1";
HAnimJoint1167.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1167.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1168 = createNode("HAnimSegment");
HAnimSegment1168.name = "l_ring_proximal";
HAnimSegment1168.DEF = "hanim_l_ring_proximal";
//<HAnimJoint name='l_ring1'/> visualization sphere is placed within <HAnimSegment name='l_ring_proximal'/>
TouchSensor TouchSensor1169 = createNode("TouchSensor");
TouchSensor1169.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1168.children = new MFNode();

HAnimSegment1168.children[0] = TouchSensor1169;

Transform Transform1170 = createNode("Transform");
Transform1170.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape1171 = createNode("Shape");
Shape1171.USE = "HAnimJointShape";
Transform1170.children = new MFNode();

Transform1170.children[0] = Shape1171;

HAnimSegment1168.children[1] = Transform1170;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
Shape Shape1172 = createNode("Shape");
LineSet LineSet1173 = createNode("LineSet");
LineSet1173.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1174 = createNode("Coordinate");
Coordinate1174.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1173.coord = Coordinate1174;

ColorRGBA ColorRGBA1175 = createNode("ColorRGBA");
ColorRGBA1175.USE = "HAnimSegmentLineColorRGBA";
LineSet1173.color = ColorRGBA1175;

Shape1172.geometry = LineSet1173;

HAnimSegment1168.children[2] = Shape1172;

HAnimJoint1167.children = new MFNode();

HAnimJoint1167.children[0] = HAnimSegment1168;

HAnimJoint HAnimJoint1176 = createNode("HAnimJoint");
HAnimJoint1176.name = "l_ring2";
HAnimJoint1176.DEF = "hanim_l_ring2";
HAnimJoint1176.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1176.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1177 = createNode("HAnimSegment");
HAnimSegment1177.name = "l_ring_middle";
HAnimSegment1177.DEF = "hanim_l_ring_middle";
//<HAnimJoint name='l_ring2'/> visualization sphere is placed within <HAnimSegment name='l_ring_middle'/>
TouchSensor TouchSensor1178 = createNode("TouchSensor");
TouchSensor1178.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1177.children = new MFNode();

HAnimSegment1177.children[0] = TouchSensor1178;

Transform Transform1179 = createNode("Transform");
Transform1179.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape1180 = createNode("Shape");
Shape1180.USE = "HAnimJointShape";
Transform1179.children = new MFNode();

Transform1179.children[0] = Shape1180;

HAnimSegment1177.children[1] = Transform1179;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
Shape Shape1181 = createNode("Shape");
LineSet LineSet1182 = createNode("LineSet");
LineSet1182.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1183 = createNode("Coordinate");
Coordinate1183.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1182.coord = Coordinate1183;

ColorRGBA ColorRGBA1184 = createNode("ColorRGBA");
ColorRGBA1184.USE = "HAnimSegmentLineColorRGBA";
LineSet1182.color = ColorRGBA1184;

Shape1181.geometry = LineSet1182;

HAnimSegment1177.children[2] = Shape1181;

HAnimJoint1176.children = new MFNode();

HAnimJoint1176.children[0] = HAnimSegment1177;

HAnimJoint HAnimJoint1185 = createNode("HAnimJoint");
HAnimJoint1185.name = "l_ring3";
HAnimJoint1185.DEF = "hanim_l_ring3";
HAnimJoint1185.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1185.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1186 = createNode("HAnimSegment");
HAnimSegment1186.name = "l_ring_distal";
HAnimSegment1186.DEF = "hanim_l_ring_distal";
//<HAnimJoint name='l_ring3'/> visualization sphere is placed within <HAnimSegment name='l_ring_distal'/>
TouchSensor TouchSensor1187 = createNode("TouchSensor");
TouchSensor1187.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1186.children = new MFNode();

HAnimSegment1186.children[0] = TouchSensor1187;

Transform Transform1188 = createNode("Transform");
Transform1188.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape1189 = createNode("Shape");
Shape1189.USE = "HAnimJointShape";
Transform1188.children = new MFNode();

Transform1188.children[0] = Shape1189;

HAnimSegment1186.children[1] = Transform1188;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
Shape Shape1190 = createNode("Shape");
LineSet LineSet1191 = createNode("LineSet");
LineSet1191.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1192 = createNode("Coordinate");
Coordinate1192.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1191.coord = Coordinate1192;

ColorRGBA ColorRGBA1193 = createNode("ColorRGBA");
ColorRGBA1193.USE = "HAnimSiteLineColorRGBA";
LineSet1191.color = ColorRGBA1193;

Shape1190.geometry = LineSet1191;

HAnimSegment1186.children[2] = Shape1190;

HAnimSite HAnimSite1194 = createNode("HAnimSite");
HAnimSite1194.name = "l_ring_distal_tip";
HAnimSite1194.DEF = "hanim_l_ring_distal_tip";
HAnimSite1194.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
TouchSensor TouchSensor1195 = createNode("TouchSensor");
TouchSensor1195.description = "HAnimSite l_ring_distal_tip";
HAnimSite1194.children = new MFNode();

HAnimSite1194.children[0] = TouchSensor1195;

Shape Shape1196 = createNode("Shape");
Shape1196.USE = "HAnimSiteShape";
HAnimSite1194.children[1] = Shape1196;

HAnimSegment1186.children[3] = HAnimSite1194;

HAnimJoint1185.children = new MFNode();

HAnimJoint1185.children[0] = HAnimSegment1186;

HAnimJoint1176.children[1] = HAnimJoint1185;

HAnimJoint1167.children[1] = HAnimJoint1176;

HAnimJoint1158.children[1] = HAnimJoint1167;

HAnimJoint985.children[4] = HAnimJoint1158;

HAnimJoint HAnimJoint1197 = createNode("HAnimJoint");
HAnimJoint1197.name = "l_pinky0";
HAnimJoint1197.DEF = "hanim_l_pinky0";
HAnimJoint1197.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1197.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1198 = createNode("HAnimSegment");
HAnimSegment1198.name = "l_pinky_metacarpal";
HAnimSegment1198.DEF = "hanim_l_pinky_metacarpal";
//<HAnimJoint name='l_pinky0'/> visualization sphere is placed within <HAnimSegment name='l_pinky_metacarpal'/>
TouchSensor TouchSensor1199 = createNode("TouchSensor");
TouchSensor1199.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1198.children = new MFNode();

HAnimSegment1198.children[0] = TouchSensor1199;

Transform Transform1200 = createNode("Transform");
Transform1200.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape1201 = createNode("Shape");
Shape1201.USE = "HAnimJointShape";
Transform1200.children = new MFNode();

Transform1200.children[0] = Shape1201;

HAnimSegment1198.children[1] = Transform1200;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
Shape Shape1202 = createNode("Shape");
LineSet LineSet1203 = createNode("LineSet");
LineSet1203.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1204 = createNode("Coordinate");
Coordinate1204.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1203.coord = Coordinate1204;

ColorRGBA ColorRGBA1205 = createNode("ColorRGBA");
ColorRGBA1205.USE = "HAnimSegmentLineColorRGBA";
LineSet1203.color = ColorRGBA1205;

Shape1202.geometry = LineSet1203;

HAnimSegment1198.children[2] = Shape1202;

HAnimJoint1197.children = new MFNode();

HAnimJoint1197.children[0] = HAnimSegment1198;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.name = "l_pinky1";
HAnimJoint1206.DEF = "hanim_l_pinky1";
HAnimJoint1206.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1206.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1207 = createNode("HAnimSegment");
HAnimSegment1207.name = "l_pinky_proximal";
HAnimSegment1207.DEF = "hanim_l_pinky_proximal";
//<HAnimJoint name='l_pinky1'/> visualization sphere is placed within <HAnimSegment name='l_pinky_proximal'/>
TouchSensor TouchSensor1208 = createNode("TouchSensor");
TouchSensor1208.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1207.children = new MFNode();

HAnimSegment1207.children[0] = TouchSensor1208;

Transform Transform1209 = createNode("Transform");
Transform1209.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape1210 = createNode("Shape");
Shape1210.USE = "HAnimJointShape";
Transform1209.children = new MFNode();

Transform1209.children[0] = Shape1210;

HAnimSegment1207.children[1] = Transform1209;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
Shape Shape1211 = createNode("Shape");
LineSet LineSet1212 = createNode("LineSet");
LineSet1212.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1213 = createNode("Coordinate");
Coordinate1213.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1212.coord = Coordinate1213;

ColorRGBA ColorRGBA1214 = createNode("ColorRGBA");
ColorRGBA1214.USE = "HAnimSegmentLineColorRGBA";
LineSet1212.color = ColorRGBA1214;

Shape1211.geometry = LineSet1212;

HAnimSegment1207.children[2] = Shape1211;

HAnimJoint1206.children = new MFNode();

HAnimJoint1206.children[0] = HAnimSegment1207;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.name = "l_pinky2";
HAnimJoint1215.DEF = "hanim_l_pinky2";
HAnimJoint1215.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1215.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1216 = createNode("HAnimSegment");
HAnimSegment1216.name = "l_pinky_middle";
HAnimSegment1216.DEF = "hanim_l_pinky_middle";
//<HAnimJoint name='l_pinky2'/> visualization sphere is placed within <HAnimSegment name='l_pinky_middle'/>
TouchSensor TouchSensor1217 = createNode("TouchSensor");
TouchSensor1217.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1216.children = new MFNode();

HAnimSegment1216.children[0] = TouchSensor1217;

Transform Transform1218 = createNode("Transform");
Transform1218.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape1219 = createNode("Shape");
Shape1219.USE = "HAnimJointShape";
Transform1218.children = new MFNode();

Transform1218.children[0] = Shape1219;

HAnimSegment1216.children[1] = Transform1218;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
Shape Shape1220 = createNode("Shape");
LineSet LineSet1221 = createNode("LineSet");
LineSet1221.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1222 = createNode("Coordinate");
Coordinate1222.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1221.coord = Coordinate1222;

ColorRGBA ColorRGBA1223 = createNode("ColorRGBA");
ColorRGBA1223.USE = "HAnimSegmentLineColorRGBA";
LineSet1221.color = ColorRGBA1223;

Shape1220.geometry = LineSet1221;

HAnimSegment1216.children[2] = Shape1220;

HAnimJoint1215.children = new MFNode();

HAnimJoint1215.children[0] = HAnimSegment1216;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.name = "l_pinky3";
HAnimJoint1224.DEF = "hanim_l_pinky3";
HAnimJoint1224.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1224.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1225 = createNode("HAnimSegment");
HAnimSegment1225.name = "l_pinky_distal";
HAnimSegment1225.DEF = "hanim_l_pinky_distal";
//<HAnimJoint name='l_pinky3'/> visualization sphere is placed within <HAnimSegment name='l_pinky_distal'/>
TouchSensor TouchSensor1226 = createNode("TouchSensor");
TouchSensor1226.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1225.children = new MFNode();

HAnimSegment1225.children[0] = TouchSensor1226;

Transform Transform1227 = createNode("Transform");
Transform1227.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape1228 = createNode("Shape");
Shape1228.USE = "HAnimJointShape";
Transform1227.children = new MFNode();

Transform1227.children[0] = Shape1228;

HAnimSegment1225.children[1] = Transform1227;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
Shape Shape1229 = createNode("Shape");
LineSet LineSet1230 = createNode("LineSet");
LineSet1230.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1231 = createNode("Coordinate");
Coordinate1231.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1230.coord = Coordinate1231;

ColorRGBA ColorRGBA1232 = createNode("ColorRGBA");
ColorRGBA1232.USE = "HAnimSiteLineColorRGBA";
LineSet1230.color = ColorRGBA1232;

Shape1229.geometry = LineSet1230;

HAnimSegment1225.children[2] = Shape1229;

HAnimSite HAnimSite1233 = createNode("HAnimSite");
HAnimSite1233.name = "l_pinky_distal_tip";
HAnimSite1233.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1233.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
TouchSensor TouchSensor1234 = createNode("TouchSensor");
TouchSensor1234.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1233.children = new MFNode();

HAnimSite1233.children[0] = TouchSensor1234;

Shape Shape1235 = createNode("Shape");
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

HAnimJoint HAnimJoint1236 = createNode("HAnimJoint");
HAnimJoint1236.name = "r_sternoclavicular";
HAnimJoint1236.DEF = "hanim_r_sternoclavicular";
HAnimJoint1236.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1236.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1237 = createNode("HAnimSegment");
HAnimSegment1237.name = "r_clavicle";
HAnimSegment1237.DEF = "hanim_r_clavicle";
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='r_clavicle'/>
TouchSensor TouchSensor1238 = createNode("TouchSensor");
TouchSensor1238.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1237.children = new MFNode();

HAnimSegment1237.children[0] = TouchSensor1238;

Transform Transform1239 = createNode("Transform");
Transform1239.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
Shape Shape1240 = createNode("Shape");
Shape1240.USE = "HAnimJointShape";
Transform1239.children = new MFNode();

Transform1239.children[0] = Shape1240;

HAnimSegment1237.children[1] = Transform1239;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
Shape Shape1241 = createNode("Shape");
LineSet LineSet1242 = createNode("LineSet");
LineSet1242.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1243 = createNode("Coordinate");
Coordinate1243.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1242.coord = Coordinate1243;

ColorRGBA ColorRGBA1244 = createNode("ColorRGBA");
ColorRGBA1244.USE = "HAnimSegmentLineColorRGBA";
LineSet1242.color = ColorRGBA1244;

Shape1241.geometry = LineSet1242;

HAnimSegment1237.children[2] = Shape1241;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
Shape Shape1245 = createNode("Shape");
LineSet LineSet1246 = createNode("LineSet");
LineSet1246.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1247 = createNode("Coordinate");
Coordinate1247.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1246.coord = Coordinate1247;

ColorRGBA ColorRGBA1248 = createNode("ColorRGBA");
ColorRGBA1248.USE = "HAnimSiteLineColorRGBA";
LineSet1246.color = ColorRGBA1248;

Shape1245.geometry = LineSet1246;

HAnimSegment1237.children[3] = Shape1245;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
Shape Shape1249 = createNode("Shape");
LineSet LineSet1250 = createNode("LineSet");
LineSet1250.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1251 = createNode("Coordinate");
Coordinate1251.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1250.coord = Coordinate1251;

ColorRGBA ColorRGBA1252 = createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSiteLineColorRGBA";
LineSet1250.color = ColorRGBA1252;

Shape1249.geometry = LineSet1250;

HAnimSegment1237.children[4] = Shape1249;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
Shape Shape1253 = createNode("Shape");
LineSet LineSet1254 = createNode("LineSet");
LineSet1254.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1255 = createNode("Coordinate");
Coordinate1255.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1254.coord = Coordinate1255;

ColorRGBA ColorRGBA1256 = createNode("ColorRGBA");
ColorRGBA1256.USE = "HAnimSiteLineColorRGBA";
LineSet1254.color = ColorRGBA1256;

Shape1253.geometry = LineSet1254;

HAnimSegment1237.children[5] = Shape1253;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
Shape Shape1257 = createNode("Shape");
LineSet LineSet1258 = createNode("LineSet");
LineSet1258.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1259 = createNode("Coordinate");
Coordinate1259.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1258.coord = Coordinate1259;

ColorRGBA ColorRGBA1260 = createNode("ColorRGBA");
ColorRGBA1260.USE = "HAnimSiteLineColorRGBA";
LineSet1258.color = ColorRGBA1260;

Shape1257.geometry = LineSet1258;

HAnimSegment1237.children[6] = Shape1257;

HAnimSite HAnimSite1261 = createNode("HAnimSite");
HAnimSite1261.name = "r_clavicale_pt";
HAnimSite1261.DEF = "hanim_r_clavicale_pt";
HAnimSite1261.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
TouchSensor TouchSensor1262 = createNode("TouchSensor");
TouchSensor1262.description = "HAnimSite r_clavicale";
HAnimSite1261.children = new MFNode();

HAnimSite1261.children[0] = TouchSensor1262;

Shape Shape1263 = createNode("Shape");
Shape1263.USE = "HAnimSiteShape";
HAnimSite1261.children[1] = Shape1263;

HAnimSegment1237.children[7] = HAnimSite1261;

HAnimSite HAnimSite1264 = createNode("HAnimSite");
HAnimSite1264.name = "r_acromion_pt";
HAnimSite1264.DEF = "hanim_r_acromion_pt";
HAnimSite1264.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
TouchSensor TouchSensor1265 = createNode("TouchSensor");
TouchSensor1265.description = "HAnimSite r_acromion";
HAnimSite1264.children = new MFNode();

HAnimSite1264.children[0] = TouchSensor1265;

Shape Shape1266 = createNode("Shape");
Shape1266.USE = "HAnimSiteShape";
HAnimSite1264.children[1] = Shape1266;

HAnimSegment1237.children[8] = HAnimSite1264;

HAnimSite HAnimSite1267 = createNode("HAnimSite");
HAnimSite1267.name = "r_axilla_ant_pt";
HAnimSite1267.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1267.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
TouchSensor TouchSensor1268 = createNode("TouchSensor");
TouchSensor1268.description = "HAnimSite r_axilla_ant";
HAnimSite1267.children = new MFNode();

HAnimSite1267.children[0] = TouchSensor1268;

Shape Shape1269 = createNode("Shape");
Shape1269.USE = "HAnimSiteShape";
HAnimSite1267.children[1] = Shape1269;

HAnimSegment1237.children[9] = HAnimSite1267;

HAnimSite HAnimSite1270 = createNode("HAnimSite");
HAnimSite1270.name = "r_axilla_post_pt";
HAnimSite1270.DEF = "hanim_r_axilla_post_pt";
HAnimSite1270.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
TouchSensor TouchSensor1271 = createNode("TouchSensor");
TouchSensor1271.description = "HAnimSite r_axilla_post";
HAnimSite1270.children = new MFNode();

HAnimSite1270.children[0] = TouchSensor1271;

Shape Shape1272 = createNode("Shape");
Shape1272.USE = "HAnimSiteShape";
HAnimSite1270.children[1] = Shape1272;

HAnimSegment1237.children[10] = HAnimSite1270;

HAnimJoint1236.children = new MFNode();

HAnimJoint1236.children[0] = HAnimSegment1237;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.name = "r_acromioclavicular";
HAnimJoint1273.DEF = "hanim_r_acromioclavicular";
HAnimJoint1273.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1273.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1274 = createNode("HAnimSegment");
HAnimSegment1274.name = "r_scapula";
HAnimSegment1274.DEF = "hanim_r_scapula";
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='r_scapula'/>
TouchSensor TouchSensor1275 = createNode("TouchSensor");
TouchSensor1275.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1274.children = new MFNode();

HAnimSegment1274.children[0] = TouchSensor1275;

Transform Transform1276 = createNode("Transform");
Transform1276.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
Shape Shape1277 = createNode("Shape");
Shape1277.USE = "HAnimJointShape";
Transform1276.children = new MFNode();

Transform1276.children[0] = Shape1277;

HAnimSegment1274.children[1] = Transform1276;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
Shape Shape1278 = createNode("Shape");
LineSet LineSet1279 = createNode("LineSet");
LineSet1279.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1280 = createNode("Coordinate");
Coordinate1280.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1279.coord = Coordinate1280;

ColorRGBA ColorRGBA1281 = createNode("ColorRGBA");
ColorRGBA1281.USE = "HAnimSegmentLineColorRGBA";
LineSet1279.color = ColorRGBA1281;

Shape1278.geometry = LineSet1279;

HAnimSegment1274.children[2] = Shape1278;

HAnimJoint1273.children = new MFNode();

HAnimJoint1273.children[0] = HAnimSegment1274;

HAnimJoint HAnimJoint1282 = createNode("HAnimJoint");
HAnimJoint1282.name = "r_shoulder";
HAnimJoint1282.DEF = "hanim_r_shoulder";
HAnimJoint1282.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1282.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1283 = createNode("HAnimSegment");
HAnimSegment1283.name = "r_upperarm";
HAnimSegment1283.DEF = "hanim_r_upperarm";
//<HAnimJoint name='r_shoulder'/> visualization sphere is placed within <HAnimSegment name='r_upperarm'/>
TouchSensor TouchSensor1284 = createNode("TouchSensor");
TouchSensor1284.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1283.children = new MFNode();

HAnimSegment1283.children[0] = TouchSensor1284;

Transform Transform1285 = createNode("Transform");
Transform1285.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
Shape Shape1286 = createNode("Shape");
Shape1286.USE = "HAnimJointShape";
Transform1285.children = new MFNode();

Transform1285.children[0] = Shape1286;

HAnimSegment1283.children[1] = Transform1285;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
Shape Shape1287 = createNode("Shape");
LineSet LineSet1288 = createNode("LineSet");
LineSet1288.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1289 = createNode("Coordinate");
Coordinate1289.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1288.coord = Coordinate1289;

ColorRGBA ColorRGBA1290 = createNode("ColorRGBA");
ColorRGBA1290.USE = "HAnimSegmentLineColorRGBA";
LineSet1288.color = ColorRGBA1290;

Shape1287.geometry = LineSet1288;

HAnimSegment1283.children[2] = Shape1287;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
Shape Shape1291 = createNode("Shape");
LineSet LineSet1292 = createNode("LineSet");
LineSet1292.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1293 = createNode("Coordinate");
Coordinate1293.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1292.coord = Coordinate1293;

ColorRGBA ColorRGBA1294 = createNode("ColorRGBA");
ColorRGBA1294.USE = "HAnimSiteLineColorRGBA";
LineSet1292.color = ColorRGBA1294;

Shape1291.geometry = LineSet1292;

HAnimSegment1283.children[3] = Shape1291;

HAnimSite HAnimSite1295 = createNode("HAnimSite");
HAnimSite1295.name = "r_humeral_lateral_epicn_pt";
HAnimSite1295.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1295.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
TouchSensor TouchSensor1296 = createNode("TouchSensor");
TouchSensor1296.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1295.children = new MFNode();

HAnimSite1295.children[0] = TouchSensor1296;

Shape Shape1297 = createNode("Shape");
Shape1297.USE = "HAnimSiteShape";
HAnimSite1295.children[1] = Shape1297;

HAnimSegment1283.children[4] = HAnimSite1295;

HAnimJoint1282.children = new MFNode();

HAnimJoint1282.children[0] = HAnimSegment1283;

HAnimJoint HAnimJoint1298 = createNode("HAnimJoint");
HAnimJoint1298.name = "r_elbow";
HAnimJoint1298.DEF = "hanim_r_elbow";
HAnimJoint1298.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1298.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1299 = createNode("HAnimSegment");
HAnimSegment1299.name = "r_forearm";
HAnimSegment1299.DEF = "hanim_r_forearm";
//<HAnimJoint name='r_elbow'/> visualization sphere is placed within <HAnimSegment name='r_forearm'/>
TouchSensor TouchSensor1300 = createNode("TouchSensor");
TouchSensor1300.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1299.children = new MFNode();

HAnimSegment1299.children[0] = TouchSensor1300;

Transform Transform1301 = createNode("Transform");
Transform1301.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
Shape Shape1302 = createNode("Shape");
Shape1302.USE = "HAnimJointShape";
Transform1301.children = new MFNode();

Transform1301.children[0] = Shape1302;

HAnimSegment1299.children[1] = Transform1301;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
Shape Shape1303 = createNode("Shape");
LineSet LineSet1304 = createNode("LineSet");
LineSet1304.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1305 = createNode("Coordinate");
Coordinate1305.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1304.coord = Coordinate1305;

ColorRGBA ColorRGBA1306 = createNode("ColorRGBA");
ColorRGBA1306.USE = "HAnimSegmentLineColorRGBA";
LineSet1304.color = ColorRGBA1306;

Shape1303.geometry = LineSet1304;

HAnimSegment1299.children[2] = Shape1303;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
Shape Shape1307 = createNode("Shape");
LineSet LineSet1308 = createNode("LineSet");
LineSet1308.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1309 = createNode("Coordinate");
Coordinate1309.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1308.coord = Coordinate1309;

ColorRGBA ColorRGBA1310 = createNode("ColorRGBA");
ColorRGBA1310.USE = "HAnimSiteLineColorRGBA";
LineSet1308.color = ColorRGBA1310;

Shape1307.geometry = LineSet1308;

HAnimSegment1299.children[3] = Shape1307;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
Shape Shape1311 = createNode("Shape");
LineSet LineSet1312 = createNode("LineSet");
LineSet1312.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1313 = createNode("Coordinate");
Coordinate1313.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1312.coord = Coordinate1313;

ColorRGBA ColorRGBA1314 = createNode("ColorRGBA");
ColorRGBA1314.USE = "HAnimSiteLineColorRGBA";
LineSet1312.color = ColorRGBA1314;

Shape1311.geometry = LineSet1312;

HAnimSegment1299.children[4] = Shape1311;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
Shape Shape1315 = createNode("Shape");
LineSet LineSet1316 = createNode("LineSet");
LineSet1316.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1317 = createNode("Coordinate");
Coordinate1317.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1316.coord = Coordinate1317;

ColorRGBA ColorRGBA1318 = createNode("ColorRGBA");
ColorRGBA1318.USE = "HAnimSiteLineColorRGBA";
LineSet1316.color = ColorRGBA1318;

Shape1315.geometry = LineSet1316;

HAnimSegment1299.children[5] = Shape1315;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
Shape Shape1319 = createNode("Shape");
LineSet LineSet1320 = createNode("LineSet");
LineSet1320.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1321 = createNode("Coordinate");
Coordinate1321.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1320.coord = Coordinate1321;

ColorRGBA ColorRGBA1322 = createNode("ColorRGBA");
ColorRGBA1322.USE = "HAnimSiteLineColorRGBA";
LineSet1320.color = ColorRGBA1322;

Shape1319.geometry = LineSet1320;

HAnimSegment1299.children[6] = Shape1319;

HAnimSite HAnimSite1323 = createNode("HAnimSite");
HAnimSite1323.name = "r_radial_styloid_pt";
HAnimSite1323.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1323.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
TouchSensor TouchSensor1324 = createNode("TouchSensor");
TouchSensor1324.description = "HAnimSite r_radial_styloid";
HAnimSite1323.children = new MFNode();

HAnimSite1323.children[0] = TouchSensor1324;

Shape Shape1325 = createNode("Shape");
Shape1325.USE = "HAnimSiteShape";
HAnimSite1323.children[1] = Shape1325;

HAnimSegment1299.children[7] = HAnimSite1323;

HAnimSite HAnimSite1326 = createNode("HAnimSite");
HAnimSite1326.name = "r_olecranon_pt";
HAnimSite1326.DEF = "hanim_r_olecranon_pt";
HAnimSite1326.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
TouchSensor TouchSensor1327 = createNode("TouchSensor");
TouchSensor1327.description = "HAnimSite r_olecranon";
HAnimSite1326.children = new MFNode();

HAnimSite1326.children[0] = TouchSensor1327;

Shape Shape1328 = createNode("Shape");
Shape1328.USE = "HAnimSiteShape";
HAnimSite1326.children[1] = Shape1328;

HAnimSegment1299.children[8] = HAnimSite1326;

HAnimSite HAnimSite1329 = createNode("HAnimSite");
HAnimSite1329.name = "r_humeral_medial_epicn_pt";
HAnimSite1329.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1329.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
TouchSensor TouchSensor1330 = createNode("TouchSensor");
TouchSensor1330.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1329.children = new MFNode();

HAnimSite1329.children[0] = TouchSensor1330;

Shape Shape1331 = createNode("Shape");
Shape1331.USE = "HAnimSiteShape";
HAnimSite1329.children[1] = Shape1331;

HAnimSegment1299.children[9] = HAnimSite1329;

HAnimSite HAnimSite1332 = createNode("HAnimSite");
HAnimSite1332.name = "r_radiale_pt";
HAnimSite1332.DEF = "hanim_r_radiale_pt";
HAnimSite1332.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
TouchSensor TouchSensor1333 = createNode("TouchSensor");
TouchSensor1333.description = "HAnimSite r_radiale";
HAnimSite1332.children = new MFNode();

HAnimSite1332.children[0] = TouchSensor1333;

Shape Shape1334 = createNode("Shape");
Shape1334.USE = "HAnimSiteShape";
HAnimSite1332.children[1] = Shape1334;

HAnimSegment1299.children[10] = HAnimSite1332;

HAnimJoint1298.children = new MFNode();

HAnimJoint1298.children[0] = HAnimSegment1299;

HAnimJoint HAnimJoint1335 = createNode("HAnimJoint");
HAnimJoint1335.name = "r_wrist";
HAnimJoint1335.DEF = "hanim_r_wrist";
HAnimJoint1335.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1335.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1336 = createNode("HAnimSegment");
HAnimSegment1336.name = "r_hand";
HAnimSegment1336.DEF = "hanim_r_hand";
//<HAnimJoint name='r_wrist'/> visualization sphere is placed within <HAnimSegment name='r_hand'/>
TouchSensor TouchSensor1337 = createNode("TouchSensor");
TouchSensor1337.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1336.children = new MFNode();

HAnimSegment1336.children[0] = TouchSensor1337;

Transform Transform1338 = createNode("Transform");
Transform1338.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
Shape Shape1339 = createNode("Shape");
Shape1339.USE = "HAnimJointShape";
Transform1338.children = new MFNode();

Transform1338.children[0] = Shape1339;

HAnimSegment1336.children[1] = Transform1338;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
Shape Shape1340 = createNode("Shape");
LineSet LineSet1341 = createNode("LineSet");
LineSet1341.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1342 = createNode("Coordinate");
Coordinate1342.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1341.coord = Coordinate1342;

ColorRGBA ColorRGBA1343 = createNode("ColorRGBA");
ColorRGBA1343.USE = "HAnimSegmentLineColorRGBA";
LineSet1341.color = ColorRGBA1343;

Shape1340.geometry = LineSet1341;

HAnimSegment1336.children[2] = Shape1340;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
Shape Shape1344 = createNode("Shape");
LineSet LineSet1345 = createNode("LineSet");
LineSet1345.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1346 = createNode("Coordinate");
Coordinate1346.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1345.coord = Coordinate1346;

ColorRGBA ColorRGBA1347 = createNode("ColorRGBA");
ColorRGBA1347.USE = "HAnimSegmentLineColorRGBA";
LineSet1345.color = ColorRGBA1347;

Shape1344.geometry = LineSet1345;

HAnimSegment1336.children[3] = Shape1344;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
Shape Shape1348 = createNode("Shape");
LineSet LineSet1349 = createNode("LineSet");
LineSet1349.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1350 = createNode("Coordinate");
Coordinate1350.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1349.coord = Coordinate1350;

ColorRGBA ColorRGBA1351 = createNode("ColorRGBA");
ColorRGBA1351.USE = "HAnimSegmentLineColorRGBA";
LineSet1349.color = ColorRGBA1351;

Shape1348.geometry = LineSet1349;

HAnimSegment1336.children[4] = Shape1348;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
Shape Shape1352 = createNode("Shape");
LineSet LineSet1353 = createNode("LineSet");
LineSet1353.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1354 = createNode("Coordinate");
Coordinate1354.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1353.coord = Coordinate1354;

ColorRGBA ColorRGBA1355 = createNode("ColorRGBA");
ColorRGBA1355.USE = "HAnimSegmentLineColorRGBA";
LineSet1353.color = ColorRGBA1355;

Shape1352.geometry = LineSet1353;

HAnimSegment1336.children[5] = Shape1352;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
Shape Shape1356 = createNode("Shape");
LineSet LineSet1357 = createNode("LineSet");
LineSet1357.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1358 = createNode("Coordinate");
Coordinate1358.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1357.coord = Coordinate1358;

ColorRGBA ColorRGBA1359 = createNode("ColorRGBA");
ColorRGBA1359.USE = "HAnimSegmentLineColorRGBA";
LineSet1357.color = ColorRGBA1359;

Shape1356.geometry = LineSet1357;

HAnimSegment1336.children[6] = Shape1356;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
Shape Shape1360 = createNode("Shape");
LineSet LineSet1361 = createNode("LineSet");
LineSet1361.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1362 = createNode("Coordinate");
Coordinate1362.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1361.coord = Coordinate1362;

ColorRGBA ColorRGBA1363 = createNode("ColorRGBA");
ColorRGBA1363.USE = "HAnimSiteLineColorRGBA";
LineSet1361.color = ColorRGBA1363;

Shape1360.geometry = LineSet1361;

HAnimSegment1336.children[7] = Shape1360;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
Shape Shape1364 = createNode("Shape");
LineSet LineSet1365 = createNode("LineSet");
LineSet1365.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1366 = createNode("Coordinate");
Coordinate1366.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1365.coord = Coordinate1366;

ColorRGBA ColorRGBA1367 = createNode("ColorRGBA");
ColorRGBA1367.USE = "HAnimSiteLineColorRGBA";
LineSet1365.color = ColorRGBA1367;

Shape1364.geometry = LineSet1365;

HAnimSegment1336.children[8] = Shape1364;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
Shape Shape1368 = createNode("Shape");
LineSet LineSet1369 = createNode("LineSet");
LineSet1369.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1370 = createNode("Coordinate");
Coordinate1370.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1369.coord = Coordinate1370;

ColorRGBA ColorRGBA1371 = createNode("ColorRGBA");
ColorRGBA1371.USE = "HAnimSiteLineColorRGBA";
LineSet1369.color = ColorRGBA1371;

Shape1368.geometry = LineSet1369;

HAnimSegment1336.children[9] = Shape1368;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
Shape Shape1372 = createNode("Shape");
LineSet LineSet1373 = createNode("LineSet");
LineSet1373.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1374 = createNode("Coordinate");
Coordinate1374.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1373.coord = Coordinate1374;

ColorRGBA ColorRGBA1375 = createNode("ColorRGBA");
ColorRGBA1375.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1373.color = ColorRGBA1375;

Shape1372.geometry = LineSet1373;

HAnimSegment1336.children[10] = Shape1372;

HAnimSite HAnimSite1376 = createNode("HAnimSite");
HAnimSite1376.name = "r_metacarpal_pha2_pt";
HAnimSite1376.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1376.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
TouchSensor TouchSensor1377 = createNode("TouchSensor");
TouchSensor1377.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1376.children = new MFNode();

HAnimSite1376.children[0] = TouchSensor1377;

Shape Shape1378 = createNode("Shape");
Shape1378.USE = "HAnimSiteShape";
HAnimSite1376.children[1] = Shape1378;

HAnimSegment1336.children[11] = HAnimSite1376;

HAnimSite HAnimSite1379 = createNode("HAnimSite");
HAnimSite1379.name = "r_ulnar_styloid_pt";
HAnimSite1379.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1379.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
TouchSensor TouchSensor1380 = createNode("TouchSensor");
TouchSensor1380.description = "HAnimSite r_ulnar_styloid";
HAnimSite1379.children = new MFNode();

HAnimSite1379.children[0] = TouchSensor1380;

Shape Shape1381 = createNode("Shape");
Shape1381.USE = "HAnimSiteShape";
HAnimSite1379.children[1] = Shape1381;

HAnimSegment1336.children[12] = HAnimSite1379;

HAnimSite HAnimSite1382 = createNode("HAnimSite");
HAnimSite1382.name = "r_metacarpal_pha5_pt";
HAnimSite1382.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1382.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
TouchSensor TouchSensor1383 = createNode("TouchSensor");
TouchSensor1383.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1382.children = new MFNode();

HAnimSite1382.children[0] = TouchSensor1383;

Shape Shape1384 = createNode("Shape");
Shape1384.USE = "HAnimSiteShape";
HAnimSite1382.children[1] = Shape1384;

HAnimSegment1336.children[13] = HAnimSite1382;

HAnimSite HAnimSite1385 = createNode("HAnimSite");
HAnimSite1385.name = "r_hand_front_view";
HAnimSite1385.DEF = "hanim_r_hand_front_view";
HAnimSite1385.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
//HAnimSite visualization shape
TouchSensor TouchSensor1386 = createNode("TouchSensor");
TouchSensor1386.description = "HAnimSite r_hand_front_view";
HAnimSite1385.children = new MFNode();

HAnimSite1385.children[0] = TouchSensor1386;

Shape Shape1387 = createNode("Shape");
Shape1387.USE = "HAnimSiteShape";
HAnimSite1385.children[1] = Shape1387;

Viewpoint Viewpoint1388 = createNode("Viewpoint");
Viewpoint1388.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1388.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1388.description = "right hand front";
Viewpoint1388.position = new SFVec3f(new float[0,0,0]);
HAnimSite1385.children[2] = Viewpoint1388;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1389 = createNode("Anchor");
Anchor1389.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1389.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
LOD LOD1390 = createNode("LOD");
LOD1390.forceTransitions = True;
LOD1390.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1391 = createNode("WorldInfo");
WorldInfo1391.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1390.children = new MFNode();

LOD1390.children[0] = WorldInfo1391;

Shape Shape1392 = createNode("Shape");
Shape1392.USE = "HAnimSiteViewpointShape";
LOD1390.children[1] = Shape1392;

Anchor1389.children = new MFNode();

Anchor1389.children[0] = LOD1390;

HAnimSite1385.children[3] = Anchor1389;

HAnimSegment1336.children[14] = HAnimSite1385;

HAnimJoint1335.children = new MFNode();

HAnimJoint1335.children[0] = HAnimSegment1336;

HAnimJoint HAnimJoint1393 = createNode("HAnimJoint");
HAnimJoint1393.name = "r_thumb1";
HAnimJoint1393.DEF = "hanim_r_thumb1";
HAnimJoint1393.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1393.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1394 = createNode("HAnimSegment");
HAnimSegment1394.name = "r_thumb_metacarpal";
HAnimSegment1394.DEF = "hanim_r_thumb_metacarpal";
//<HAnimJoint name='r_thumb1'/> visualization sphere is placed within <HAnimSegment name='r_thumb_metacarpal'/>
TouchSensor TouchSensor1395 = createNode("TouchSensor");
TouchSensor1395.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1394.children = new MFNode();

HAnimSegment1394.children[0] = TouchSensor1395;

Transform Transform1396 = createNode("Transform");
Transform1396.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
Shape Shape1397 = createNode("Shape");
Shape1397.USE = "HAnimJointShape";
Transform1396.children = new MFNode();

Transform1396.children[0] = Shape1397;

HAnimSegment1394.children[1] = Transform1396;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
Shape Shape1398 = createNode("Shape");
LineSet LineSet1399 = createNode("LineSet");
LineSet1399.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1400 = createNode("Coordinate");
Coordinate1400.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1399.coord = Coordinate1400;

ColorRGBA ColorRGBA1401 = createNode("ColorRGBA");
ColorRGBA1401.USE = "HAnimSegmentLineColorRGBA";
LineSet1399.color = ColorRGBA1401;

Shape1398.geometry = LineSet1399;

HAnimSegment1394.children[2] = Shape1398;

HAnimJoint1393.children = new MFNode();

HAnimJoint1393.children[0] = HAnimSegment1394;

HAnimJoint HAnimJoint1402 = createNode("HAnimJoint");
HAnimJoint1402.name = "r_thumb2";
HAnimJoint1402.DEF = "hanim_r_thumb2";
HAnimJoint1402.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1402.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1403 = createNode("HAnimSegment");
HAnimSegment1403.name = "r_thumb_proximal";
HAnimSegment1403.DEF = "hanim_r_thumb_proximal";
//<HAnimJoint name='r_thumb2'/> visualization sphere is placed within <HAnimSegment name='r_thumb_proximal'/>
TouchSensor TouchSensor1404 = createNode("TouchSensor");
TouchSensor1404.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1403.children = new MFNode();

HAnimSegment1403.children[0] = TouchSensor1404;

Transform Transform1405 = createNode("Transform");
Transform1405.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
Shape Shape1406 = createNode("Shape");
Shape1406.USE = "HAnimJointShape";
Transform1405.children = new MFNode();

Transform1405.children[0] = Shape1406;

HAnimSegment1403.children[1] = Transform1405;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
Shape Shape1407 = createNode("Shape");
LineSet LineSet1408 = createNode("LineSet");
LineSet1408.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1409 = createNode("Coordinate");
Coordinate1409.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1408.coord = Coordinate1409;

ColorRGBA ColorRGBA1410 = createNode("ColorRGBA");
ColorRGBA1410.USE = "HAnimSegmentLineColorRGBA";
LineSet1408.color = ColorRGBA1410;

Shape1407.geometry = LineSet1408;

HAnimSegment1403.children[2] = Shape1407;

HAnimJoint1402.children = new MFNode();

HAnimJoint1402.children[0] = HAnimSegment1403;

HAnimJoint HAnimJoint1411 = createNode("HAnimJoint");
HAnimJoint1411.name = "r_thumb3";
HAnimJoint1411.DEF = "hanim_r_thumb3";
HAnimJoint1411.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1411.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1412 = createNode("HAnimSegment");
HAnimSegment1412.name = "r_thumb_distal";
HAnimSegment1412.DEF = "hanim_r_thumb_distal";
//<HAnimJoint name='r_thumb3'/> visualization sphere is placed within <HAnimSegment name='r_thumb_distal'/>
TouchSensor TouchSensor1413 = createNode("TouchSensor");
TouchSensor1413.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1412.children = new MFNode();

HAnimSegment1412.children[0] = TouchSensor1413;

Transform Transform1414 = createNode("Transform");
Transform1414.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
Shape Shape1415 = createNode("Shape");
Shape1415.USE = "HAnimJointShape";
Transform1414.children = new MFNode();

Transform1414.children[0] = Shape1415;

HAnimSegment1412.children[1] = Transform1414;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
Shape Shape1416 = createNode("Shape");
LineSet LineSet1417 = createNode("LineSet");
LineSet1417.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1418 = createNode("Coordinate");
Coordinate1418.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1417.coord = Coordinate1418;

ColorRGBA ColorRGBA1419 = createNode("ColorRGBA");
ColorRGBA1419.USE = "HAnimSiteLineColorRGBA";
LineSet1417.color = ColorRGBA1419;

Shape1416.geometry = LineSet1417;

HAnimSegment1412.children[2] = Shape1416;

HAnimSite HAnimSite1420 = createNode("HAnimSite");
HAnimSite1420.name = "r_thumb_distal_tip";
HAnimSite1420.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1420.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
TouchSensor TouchSensor1421 = createNode("TouchSensor");
TouchSensor1421.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1420.children = new MFNode();

HAnimSite1420.children[0] = TouchSensor1421;

Shape Shape1422 = createNode("Shape");
Shape1422.USE = "HAnimSiteShape";
HAnimSite1420.children[1] = Shape1422;

HAnimSegment1412.children[3] = HAnimSite1420;

HAnimJoint1411.children = new MFNode();

HAnimJoint1411.children[0] = HAnimSegment1412;

HAnimJoint1402.children[1] = HAnimJoint1411;

HAnimJoint1393.children[1] = HAnimJoint1402;

HAnimJoint1335.children[1] = HAnimJoint1393;

HAnimJoint HAnimJoint1423 = createNode("HAnimJoint");
HAnimJoint1423.name = "r_index0";
HAnimJoint1423.DEF = "hanim_r_index0";
HAnimJoint1423.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1423.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1424 = createNode("HAnimSegment");
HAnimSegment1424.name = "r_index_metacarpal";
HAnimSegment1424.DEF = "hanim_r_index_metacarpal";
//<HAnimJoint name='r_index0'/> visualization sphere is placed within <HAnimSegment name='r_index_metacarpal'/>
TouchSensor TouchSensor1425 = createNode("TouchSensor");
TouchSensor1425.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1424.children = new MFNode();

HAnimSegment1424.children[0] = TouchSensor1425;

Transform Transform1426 = createNode("Transform");
Transform1426.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
Shape Shape1427 = createNode("Shape");
Shape1427.USE = "HAnimJointShape";
Transform1426.children = new MFNode();

Transform1426.children[0] = Shape1427;

HAnimSegment1424.children[1] = Transform1426;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
Shape Shape1428 = createNode("Shape");
LineSet LineSet1429 = createNode("LineSet");
LineSet1429.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1430 = createNode("Coordinate");
Coordinate1430.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1429.coord = Coordinate1430;

ColorRGBA ColorRGBA1431 = createNode("ColorRGBA");
ColorRGBA1431.USE = "HAnimSegmentLineColorRGBA";
LineSet1429.color = ColorRGBA1431;

Shape1428.geometry = LineSet1429;

HAnimSegment1424.children[2] = Shape1428;

HAnimJoint1423.children = new MFNode();

HAnimJoint1423.children[0] = HAnimSegment1424;

HAnimJoint HAnimJoint1432 = createNode("HAnimJoint");
HAnimJoint1432.name = "r_index1";
HAnimJoint1432.DEF = "hanim_r_index1";
HAnimJoint1432.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1432.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1433 = createNode("HAnimSegment");
HAnimSegment1433.name = "r_index_proximal";
HAnimSegment1433.DEF = "hanim_r_index_proximal";
//<HAnimJoint name='r_index1'/> visualization sphere is placed within <HAnimSegment name='r_index_proximal'/>
TouchSensor TouchSensor1434 = createNode("TouchSensor");
TouchSensor1434.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1433.children = new MFNode();

HAnimSegment1433.children[0] = TouchSensor1434;

Transform Transform1435 = createNode("Transform");
Transform1435.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
Shape Shape1436 = createNode("Shape");
Shape1436.USE = "HAnimJointShape";
Transform1435.children = new MFNode();

Transform1435.children[0] = Shape1436;

HAnimSegment1433.children[1] = Transform1435;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
Shape Shape1437 = createNode("Shape");
LineSet LineSet1438 = createNode("LineSet");
LineSet1438.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1439 = createNode("Coordinate");
Coordinate1439.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1438.coord = Coordinate1439;

ColorRGBA ColorRGBA1440 = createNode("ColorRGBA");
ColorRGBA1440.USE = "HAnimSegmentLineColorRGBA";
LineSet1438.color = ColorRGBA1440;

Shape1437.geometry = LineSet1438;

HAnimSegment1433.children[2] = Shape1437;

HAnimJoint1432.children = new MFNode();

HAnimJoint1432.children[0] = HAnimSegment1433;

HAnimJoint HAnimJoint1441 = createNode("HAnimJoint");
HAnimJoint1441.name = "r_index2";
HAnimJoint1441.DEF = "hanim_r_index2";
HAnimJoint1441.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1441.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1442 = createNode("HAnimSegment");
HAnimSegment1442.name = "r_index_middle";
HAnimSegment1442.DEF = "hanim_r_index_middle";
//<HAnimJoint name='r_index2'/> visualization sphere is placed within <HAnimSegment name='r_index_middle'/>
TouchSensor TouchSensor1443 = createNode("TouchSensor");
TouchSensor1443.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1442.children = new MFNode();

HAnimSegment1442.children[0] = TouchSensor1443;

Transform Transform1444 = createNode("Transform");
Transform1444.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
Shape Shape1445 = createNode("Shape");
Shape1445.USE = "HAnimJointShape";
Transform1444.children = new MFNode();

Transform1444.children[0] = Shape1445;

HAnimSegment1442.children[1] = Transform1444;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
Shape Shape1446 = createNode("Shape");
LineSet LineSet1447 = createNode("LineSet");
LineSet1447.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1448 = createNode("Coordinate");
Coordinate1448.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1447.coord = Coordinate1448;

ColorRGBA ColorRGBA1449 = createNode("ColorRGBA");
ColorRGBA1449.USE = "HAnimSegmentLineColorRGBA";
LineSet1447.color = ColorRGBA1449;

Shape1446.geometry = LineSet1447;

HAnimSegment1442.children[2] = Shape1446;

HAnimJoint1441.children = new MFNode();

HAnimJoint1441.children[0] = HAnimSegment1442;

HAnimJoint HAnimJoint1450 = createNode("HAnimJoint");
HAnimJoint1450.name = "r_index3";
HAnimJoint1450.DEF = "hanim_r_index3";
HAnimJoint1450.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1450.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1451 = createNode("HAnimSegment");
HAnimSegment1451.name = "r_index_distal";
HAnimSegment1451.DEF = "hanim_r_index_distal";
//<HAnimJoint name='r_index3'/> visualization sphere is placed within <HAnimSegment name='r_index_distal'/>
TouchSensor TouchSensor1452 = createNode("TouchSensor");
TouchSensor1452.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1451.children = new MFNode();

HAnimSegment1451.children[0] = TouchSensor1452;

Transform Transform1453 = createNode("Transform");
Transform1453.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
Shape Shape1454 = createNode("Shape");
Shape1454.USE = "HAnimJointShape";
Transform1453.children = new MFNode();

Transform1453.children[0] = Shape1454;

HAnimSegment1451.children[1] = Transform1453;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
Shape Shape1455 = createNode("Shape");
LineSet LineSet1456 = createNode("LineSet");
LineSet1456.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1457 = createNode("Coordinate");
Coordinate1457.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1456.coord = Coordinate1457;

ColorRGBA ColorRGBA1458 = createNode("ColorRGBA");
ColorRGBA1458.USE = "HAnimSiteLineColorRGBA";
LineSet1456.color = ColorRGBA1458;

Shape1455.geometry = LineSet1456;

HAnimSegment1451.children[2] = Shape1455;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
Shape Shape1459 = createNode("Shape");
LineSet LineSet1460 = createNode("LineSet");
LineSet1460.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1461 = createNode("Coordinate");
Coordinate1461.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1460.coord = Coordinate1461;

ColorRGBA ColorRGBA1462 = createNode("ColorRGBA");
ColorRGBA1462.USE = "HAnimSiteLineColorRGBA";
LineSet1460.color = ColorRGBA1462;

Shape1459.geometry = LineSet1460;

HAnimSegment1451.children[3] = Shape1459;

HAnimSite HAnimSite1463 = createNode("HAnimSite");
HAnimSite1463.name = "r_index_distal_tip";
HAnimSite1463.DEF = "hanim_r_index_distal_tip";
HAnimSite1463.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
TouchSensor TouchSensor1464 = createNode("TouchSensor");
TouchSensor1464.description = "HAnimSite r_index_distal_tip";
HAnimSite1463.children = new MFNode();

HAnimSite1463.children[0] = TouchSensor1464;

Shape Shape1465 = createNode("Shape");
Shape1465.USE = "HAnimSiteShape";
HAnimSite1463.children[1] = Shape1465;

HAnimSegment1451.children[4] = HAnimSite1463;

HAnimSite HAnimSite1466 = createNode("HAnimSite");
HAnimSite1466.name = "r_dactylion_pt";
HAnimSite1466.DEF = "hanim_r_dactylion_pt";
HAnimSite1466.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
TouchSensor TouchSensor1467 = createNode("TouchSensor");
TouchSensor1467.description = "HAnimSite r_dactylion";
HAnimSite1466.children = new MFNode();

HAnimSite1466.children[0] = TouchSensor1467;

Shape Shape1468 = createNode("Shape");
Shape1468.USE = "HAnimSiteShape";
HAnimSite1466.children[1] = Shape1468;

HAnimSegment1451.children[5] = HAnimSite1466;

HAnimJoint1450.children = new MFNode();

HAnimJoint1450.children[0] = HAnimSegment1451;

HAnimJoint1441.children[1] = HAnimJoint1450;

HAnimJoint1432.children[1] = HAnimJoint1441;

HAnimJoint1423.children[1] = HAnimJoint1432;

HAnimJoint1335.children[2] = HAnimJoint1423;

HAnimJoint HAnimJoint1469 = createNode("HAnimJoint");
HAnimJoint1469.name = "r_middle0";
HAnimJoint1469.DEF = "hanim_r_middle0";
HAnimJoint1469.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1469.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1470 = createNode("HAnimSegment");
HAnimSegment1470.name = "r_middle_metacarpal";
HAnimSegment1470.DEF = "hanim_r_middle_metacarpal";
//<HAnimJoint name='r_middle0'/> visualization sphere is placed within <HAnimSegment name='r_middle_metacarpal'/>
TouchSensor TouchSensor1471 = createNode("TouchSensor");
TouchSensor1471.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1470.children = new MFNode();

HAnimSegment1470.children[0] = TouchSensor1471;

Transform Transform1472 = createNode("Transform");
Transform1472.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
Shape Shape1473 = createNode("Shape");
Shape1473.USE = "HAnimJointShape";
Transform1472.children = new MFNode();

Transform1472.children[0] = Shape1473;

HAnimSegment1470.children[1] = Transform1472;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
Shape Shape1474 = createNode("Shape");
LineSet LineSet1475 = createNode("LineSet");
LineSet1475.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1476 = createNode("Coordinate");
Coordinate1476.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1475.coord = Coordinate1476;

ColorRGBA ColorRGBA1477 = createNode("ColorRGBA");
ColorRGBA1477.USE = "HAnimSegmentLineColorRGBA";
LineSet1475.color = ColorRGBA1477;

Shape1474.geometry = LineSet1475;

HAnimSegment1470.children[2] = Shape1474;

HAnimJoint1469.children = new MFNode();

HAnimJoint1469.children[0] = HAnimSegment1470;

HAnimJoint HAnimJoint1478 = createNode("HAnimJoint");
HAnimJoint1478.name = "r_middle1";
HAnimJoint1478.DEF = "hanim_r_middle1";
HAnimJoint1478.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1478.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1479 = createNode("HAnimSegment");
HAnimSegment1479.name = "r_middle_proximal";
HAnimSegment1479.DEF = "hanim_r_middle_proximal";
//<HAnimJoint name='r_middle1'/> visualization sphere is placed within <HAnimSegment name='r_middle_proximal'/>
TouchSensor TouchSensor1480 = createNode("TouchSensor");
TouchSensor1480.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1479.children = new MFNode();

HAnimSegment1479.children[0] = TouchSensor1480;

Transform Transform1481 = createNode("Transform");
Transform1481.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
Shape Shape1482 = createNode("Shape");
Shape1482.USE = "HAnimJointShape";
Transform1481.children = new MFNode();

Transform1481.children[0] = Shape1482;

HAnimSegment1479.children[1] = Transform1481;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
Shape Shape1483 = createNode("Shape");
LineSet LineSet1484 = createNode("LineSet");
LineSet1484.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1485 = createNode("Coordinate");
Coordinate1485.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1484.coord = Coordinate1485;

ColorRGBA ColorRGBA1486 = createNode("ColorRGBA");
ColorRGBA1486.USE = "HAnimSegmentLineColorRGBA";
LineSet1484.color = ColorRGBA1486;

Shape1483.geometry = LineSet1484;

HAnimSegment1479.children[2] = Shape1483;

HAnimJoint1478.children = new MFNode();

HAnimJoint1478.children[0] = HAnimSegment1479;

HAnimJoint HAnimJoint1487 = createNode("HAnimJoint");
HAnimJoint1487.name = "r_middle2";
HAnimJoint1487.DEF = "hanim_r_middle2";
HAnimJoint1487.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1487.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1488 = createNode("HAnimSegment");
HAnimSegment1488.name = "r_middle_middle";
HAnimSegment1488.DEF = "hanim_r_middle_middle";
//<HAnimJoint name='r_middle2'/> visualization sphere is placed within <HAnimSegment name='r_middle_middle'/>
TouchSensor TouchSensor1489 = createNode("TouchSensor");
TouchSensor1489.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1488.children = new MFNode();

HAnimSegment1488.children[0] = TouchSensor1489;

Transform Transform1490 = createNode("Transform");
Transform1490.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
Shape Shape1491 = createNode("Shape");
Shape1491.USE = "HAnimJointShape";
Transform1490.children = new MFNode();

Transform1490.children[0] = Shape1491;

HAnimSegment1488.children[1] = Transform1490;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
Shape Shape1492 = createNode("Shape");
LineSet LineSet1493 = createNode("LineSet");
LineSet1493.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1494 = createNode("Coordinate");
Coordinate1494.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1493.coord = Coordinate1494;

ColorRGBA ColorRGBA1495 = createNode("ColorRGBA");
ColorRGBA1495.USE = "HAnimSegmentLineColorRGBA";
LineSet1493.color = ColorRGBA1495;

Shape1492.geometry = LineSet1493;

HAnimSegment1488.children[2] = Shape1492;

HAnimJoint1487.children = new MFNode();

HAnimJoint1487.children[0] = HAnimSegment1488;

HAnimJoint HAnimJoint1496 = createNode("HAnimJoint");
HAnimJoint1496.name = "r_middle3";
HAnimJoint1496.DEF = "hanim_r_middle3";
HAnimJoint1496.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1496.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1497 = createNode("HAnimSegment");
HAnimSegment1497.name = "r_middle_distal";
HAnimSegment1497.DEF = "hanim_r_middle_distal";
//<HAnimJoint name='r_middle3'/> visualization sphere is placed within <HAnimSegment name='r_middle_distal'/>
TouchSensor TouchSensor1498 = createNode("TouchSensor");
TouchSensor1498.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1497.children = new MFNode();

HAnimSegment1497.children[0] = TouchSensor1498;

Transform Transform1499 = createNode("Transform");
Transform1499.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
Shape Shape1500 = createNode("Shape");
Shape1500.USE = "HAnimJointShape";
Transform1499.children = new MFNode();

Transform1499.children[0] = Shape1500;

HAnimSegment1497.children[1] = Transform1499;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
Shape Shape1501 = createNode("Shape");
LineSet LineSet1502 = createNode("LineSet");
LineSet1502.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1503 = createNode("Coordinate");
Coordinate1503.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1502.coord = Coordinate1503;

ColorRGBA ColorRGBA1504 = createNode("ColorRGBA");
ColorRGBA1504.USE = "HAnimSiteLineColorRGBA";
LineSet1502.color = ColorRGBA1504;

Shape1501.geometry = LineSet1502;

HAnimSegment1497.children[2] = Shape1501;

HAnimSite HAnimSite1505 = createNode("HAnimSite");
HAnimSite1505.name = "r_middle_distal_tip";
HAnimSite1505.DEF = "hanim_r_middle_distal_tip";
HAnimSite1505.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
TouchSensor TouchSensor1506 = createNode("TouchSensor");
TouchSensor1506.description = "HAnimSite r_middle_distal_tip";
HAnimSite1505.children = new MFNode();

HAnimSite1505.children[0] = TouchSensor1506;

Shape Shape1507 = createNode("Shape");
Shape1507.USE = "HAnimSiteShape";
HAnimSite1505.children[1] = Shape1507;

HAnimSegment1497.children[3] = HAnimSite1505;

HAnimJoint1496.children = new MFNode();

HAnimJoint1496.children[0] = HAnimSegment1497;

HAnimJoint1487.children[1] = HAnimJoint1496;

HAnimJoint1478.children[1] = HAnimJoint1487;

HAnimJoint1469.children[1] = HAnimJoint1478;

HAnimJoint1335.children[3] = HAnimJoint1469;

HAnimJoint HAnimJoint1508 = createNode("HAnimJoint");
HAnimJoint1508.name = "r_ring0";
HAnimJoint1508.DEF = "hanim_r_ring0";
HAnimJoint1508.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1508.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1509 = createNode("HAnimSegment");
HAnimSegment1509.name = "r_ring_metacarpal";
HAnimSegment1509.DEF = "hanim_r_ring_metacarpal";
//<HAnimJoint name='r_ring0'/> visualization sphere is placed within <HAnimSegment name='r_ring_metacarpal'/>
TouchSensor TouchSensor1510 = createNode("TouchSensor");
TouchSensor1510.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1509.children = new MFNode();

HAnimSegment1509.children[0] = TouchSensor1510;

Transform Transform1511 = createNode("Transform");
Transform1511.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
Shape Shape1512 = createNode("Shape");
Shape1512.USE = "HAnimJointShape";
Transform1511.children = new MFNode();

Transform1511.children[0] = Shape1512;

HAnimSegment1509.children[1] = Transform1511;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
Shape Shape1513 = createNode("Shape");
LineSet LineSet1514 = createNode("LineSet");
LineSet1514.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1515 = createNode("Coordinate");
Coordinate1515.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1514.coord = Coordinate1515;

ColorRGBA ColorRGBA1516 = createNode("ColorRGBA");
ColorRGBA1516.USE = "HAnimSegmentLineColorRGBA";
LineSet1514.color = ColorRGBA1516;

Shape1513.geometry = LineSet1514;

HAnimSegment1509.children[2] = Shape1513;

HAnimJoint1508.children = new MFNode();

HAnimJoint1508.children[0] = HAnimSegment1509;

HAnimJoint HAnimJoint1517 = createNode("HAnimJoint");
HAnimJoint1517.name = "r_ring1";
HAnimJoint1517.DEF = "hanim_r_ring1";
HAnimJoint1517.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1517.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1518 = createNode("HAnimSegment");
HAnimSegment1518.name = "r_ring_proximal";
HAnimSegment1518.DEF = "hanim_r_ring_proximal";
//<HAnimJoint name='r_ring1'/> visualization sphere is placed within <HAnimSegment name='r_ring_proximal'/>
TouchSensor TouchSensor1519 = createNode("TouchSensor");
TouchSensor1519.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1518.children = new MFNode();

HAnimSegment1518.children[0] = TouchSensor1519;

Transform Transform1520 = createNode("Transform");
Transform1520.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
Shape Shape1521 = createNode("Shape");
Shape1521.USE = "HAnimJointShape";
Transform1520.children = new MFNode();

Transform1520.children[0] = Shape1521;

HAnimSegment1518.children[1] = Transform1520;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
Shape Shape1522 = createNode("Shape");
LineSet LineSet1523 = createNode("LineSet");
LineSet1523.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1524 = createNode("Coordinate");
Coordinate1524.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1523.coord = Coordinate1524;

ColorRGBA ColorRGBA1525 = createNode("ColorRGBA");
ColorRGBA1525.USE = "HAnimSegmentLineColorRGBA";
LineSet1523.color = ColorRGBA1525;

Shape1522.geometry = LineSet1523;

HAnimSegment1518.children[2] = Shape1522;

HAnimJoint1517.children = new MFNode();

HAnimJoint1517.children[0] = HAnimSegment1518;

HAnimJoint HAnimJoint1526 = createNode("HAnimJoint");
HAnimJoint1526.name = "r_ring2";
HAnimJoint1526.DEF = "hanim_r_ring2";
HAnimJoint1526.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1526.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1527 = createNode("HAnimSegment");
HAnimSegment1527.name = "r_ring_middle";
HAnimSegment1527.DEF = "hanim_r_ring_middle";
//<HAnimJoint name='r_ring2'/> visualization sphere is placed within <HAnimSegment name='r_ring_middle'/>
TouchSensor TouchSensor1528 = createNode("TouchSensor");
TouchSensor1528.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1527.children = new MFNode();

HAnimSegment1527.children[0] = TouchSensor1528;

Transform Transform1529 = createNode("Transform");
Transform1529.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
Shape Shape1530 = createNode("Shape");
Shape1530.USE = "HAnimJointShape";
Transform1529.children = new MFNode();

Transform1529.children[0] = Shape1530;

HAnimSegment1527.children[1] = Transform1529;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
Shape Shape1531 = createNode("Shape");
LineSet LineSet1532 = createNode("LineSet");
LineSet1532.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1533 = createNode("Coordinate");
Coordinate1533.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1532.coord = Coordinate1533;

ColorRGBA ColorRGBA1534 = createNode("ColorRGBA");
ColorRGBA1534.USE = "HAnimSegmentLineColorRGBA";
LineSet1532.color = ColorRGBA1534;

Shape1531.geometry = LineSet1532;

HAnimSegment1527.children[2] = Shape1531;

HAnimJoint1526.children = new MFNode();

HAnimJoint1526.children[0] = HAnimSegment1527;

HAnimJoint HAnimJoint1535 = createNode("HAnimJoint");
HAnimJoint1535.name = "r_ring3";
HAnimJoint1535.DEF = "hanim_r_ring3";
HAnimJoint1535.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1535.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1536 = createNode("HAnimSegment");
HAnimSegment1536.name = "r_ring_distal";
HAnimSegment1536.DEF = "hanim_r_ring_distal";
//<HAnimJoint name='r_ring3'/> visualization sphere is placed within <HAnimSegment name='r_ring_distal'/>
TouchSensor TouchSensor1537 = createNode("TouchSensor");
TouchSensor1537.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1536.children = new MFNode();

HAnimSegment1536.children[0] = TouchSensor1537;

Transform Transform1538 = createNode("Transform");
Transform1538.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
Shape Shape1539 = createNode("Shape");
Shape1539.USE = "HAnimJointShape";
Transform1538.children = new MFNode();

Transform1538.children[0] = Shape1539;

HAnimSegment1536.children[1] = Transform1538;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
Shape Shape1540 = createNode("Shape");
LineSet LineSet1541 = createNode("LineSet");
LineSet1541.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1542 = createNode("Coordinate");
Coordinate1542.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1541.coord = Coordinate1542;

ColorRGBA ColorRGBA1543 = createNode("ColorRGBA");
ColorRGBA1543.USE = "HAnimSiteLineColorRGBA";
LineSet1541.color = ColorRGBA1543;

Shape1540.geometry = LineSet1541;

HAnimSegment1536.children[2] = Shape1540;

HAnimSite HAnimSite1544 = createNode("HAnimSite");
HAnimSite1544.name = "r_ring_distal_tip";
HAnimSite1544.DEF = "hanim_r_ring_distal_tip";
HAnimSite1544.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
TouchSensor TouchSensor1545 = createNode("TouchSensor");
TouchSensor1545.description = "HAnimSite r_ring_distal_tip";
HAnimSite1544.children = new MFNode();

HAnimSite1544.children[0] = TouchSensor1545;

Shape Shape1546 = createNode("Shape");
Shape1546.USE = "HAnimSiteShape";
HAnimSite1544.children[1] = Shape1546;

HAnimSegment1536.children[3] = HAnimSite1544;

HAnimJoint1535.children = new MFNode();

HAnimJoint1535.children[0] = HAnimSegment1536;

HAnimJoint1526.children[1] = HAnimJoint1535;

HAnimJoint1517.children[1] = HAnimJoint1526;

HAnimJoint1508.children[1] = HAnimJoint1517;

HAnimJoint1335.children[4] = HAnimJoint1508;

HAnimJoint HAnimJoint1547 = createNode("HAnimJoint");
HAnimJoint1547.name = "r_pinky0";
HAnimJoint1547.DEF = "hanim_r_pinky0";
HAnimJoint1547.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1547.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1548 = createNode("HAnimSegment");
HAnimSegment1548.name = "r_pinky_metacarpal";
HAnimSegment1548.DEF = "hanim_r_pinky_metacarpal";
//<HAnimJoint name='r_pinky0'/> visualization sphere is placed within <HAnimSegment name='r_pinky_metacarpal'/>
TouchSensor TouchSensor1549 = createNode("TouchSensor");
TouchSensor1549.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1548.children = new MFNode();

HAnimSegment1548.children[0] = TouchSensor1549;

Transform Transform1550 = createNode("Transform");
Transform1550.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
Shape Shape1551 = createNode("Shape");
Shape1551.USE = "HAnimJointShape";
Transform1550.children = new MFNode();

Transform1550.children[0] = Shape1551;

HAnimSegment1548.children[1] = Transform1550;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
Shape Shape1552 = createNode("Shape");
LineSet LineSet1553 = createNode("LineSet");
LineSet1553.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1554 = createNode("Coordinate");
Coordinate1554.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1553.coord = Coordinate1554;

ColorRGBA ColorRGBA1555 = createNode("ColorRGBA");
ColorRGBA1555.USE = "HAnimSegmentLineColorRGBA";
LineSet1553.color = ColorRGBA1555;

Shape1552.geometry = LineSet1553;

HAnimSegment1548.children[2] = Shape1552;

HAnimJoint1547.children = new MFNode();

HAnimJoint1547.children[0] = HAnimSegment1548;

HAnimJoint HAnimJoint1556 = createNode("HAnimJoint");
HAnimJoint1556.name = "r_pinky1";
HAnimJoint1556.DEF = "hanim_r_pinky1";
HAnimJoint1556.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1556.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1557 = createNode("HAnimSegment");
HAnimSegment1557.name = "r_pinky_proximal";
HAnimSegment1557.DEF = "hanim_r_pinky_proximal";
//<HAnimJoint name='r_pinky1'/> visualization sphere is placed within <HAnimSegment name='r_pinky_proximal'/>
TouchSensor TouchSensor1558 = createNode("TouchSensor");
TouchSensor1558.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1557.children = new MFNode();

HAnimSegment1557.children[0] = TouchSensor1558;

Transform Transform1559 = createNode("Transform");
Transform1559.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
Shape Shape1560 = createNode("Shape");
Shape1560.USE = "HAnimJointShape";
Transform1559.children = new MFNode();

Transform1559.children[0] = Shape1560;

HAnimSegment1557.children[1] = Transform1559;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
Shape Shape1561 = createNode("Shape");
LineSet LineSet1562 = createNode("LineSet");
LineSet1562.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1563 = createNode("Coordinate");
Coordinate1563.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1562.coord = Coordinate1563;

ColorRGBA ColorRGBA1564 = createNode("ColorRGBA");
ColorRGBA1564.USE = "HAnimSegmentLineColorRGBA";
LineSet1562.color = ColorRGBA1564;

Shape1561.geometry = LineSet1562;

HAnimSegment1557.children[2] = Shape1561;

HAnimJoint1556.children = new MFNode();

HAnimJoint1556.children[0] = HAnimSegment1557;

HAnimJoint HAnimJoint1565 = createNode("HAnimJoint");
HAnimJoint1565.name = "r_pinky2";
HAnimJoint1565.DEF = "hanim_r_pinky2";
HAnimJoint1565.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1565.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1566 = createNode("HAnimSegment");
HAnimSegment1566.name = "r_pinky_middle";
HAnimSegment1566.DEF = "hanim_r_pinky_middle";
//<HAnimJoint name='r_pinky2'/> visualization sphere is placed within <HAnimSegment name='r_pinky_middle'/>
TouchSensor TouchSensor1567 = createNode("TouchSensor");
TouchSensor1567.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1566.children = new MFNode();

HAnimSegment1566.children[0] = TouchSensor1567;

Transform Transform1568 = createNode("Transform");
Transform1568.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
Shape Shape1569 = createNode("Shape");
Shape1569.USE = "HAnimJointShape";
Transform1568.children = new MFNode();

Transform1568.children[0] = Shape1569;

HAnimSegment1566.children[1] = Transform1568;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
Shape Shape1570 = createNode("Shape");
LineSet LineSet1571 = createNode("LineSet");
LineSet1571.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1572 = createNode("Coordinate");
Coordinate1572.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1571.coord = Coordinate1572;

ColorRGBA ColorRGBA1573 = createNode("ColorRGBA");
ColorRGBA1573.USE = "HAnimSegmentLineColorRGBA";
LineSet1571.color = ColorRGBA1573;

Shape1570.geometry = LineSet1571;

HAnimSegment1566.children[2] = Shape1570;

HAnimJoint1565.children = new MFNode();

HAnimJoint1565.children[0] = HAnimSegment1566;

HAnimJoint HAnimJoint1574 = createNode("HAnimJoint");
HAnimJoint1574.name = "r_pinky3";
HAnimJoint1574.DEF = "hanim_r_pinky3";
HAnimJoint1574.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1574.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1575 = createNode("HAnimSegment");
HAnimSegment1575.name = "r_pinky_distal";
HAnimSegment1575.DEF = "hanim_r_pinky_distal";
//<HAnimJoint name='r_pinky3'/> visualization sphere is placed within <HAnimSegment name='r_pinky_distal'/>
TouchSensor TouchSensor1576 = createNode("TouchSensor");
TouchSensor1576.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1575.children = new MFNode();

HAnimSegment1575.children[0] = TouchSensor1576;

Transform Transform1577 = createNode("Transform");
Transform1577.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
Shape Shape1578 = createNode("Shape");
Shape1578.USE = "HAnimJointShape";
Transform1577.children = new MFNode();

Transform1577.children[0] = Shape1578;

HAnimSegment1575.children[1] = Transform1577;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
Shape Shape1579 = createNode("Shape");
LineSet LineSet1580 = createNode("LineSet");
LineSet1580.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1581 = createNode("Coordinate");
Coordinate1581.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1580.coord = Coordinate1581;

ColorRGBA ColorRGBA1582 = createNode("ColorRGBA");
ColorRGBA1582.USE = "HAnimSiteLineColorRGBA";
LineSet1580.color = ColorRGBA1582;

Shape1579.geometry = LineSet1580;

HAnimSegment1575.children[2] = Shape1579;

HAnimSite HAnimSite1583 = createNode("HAnimSite");
HAnimSite1583.name = "r_pinky_distal_tip";
HAnimSite1583.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1583.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
TouchSensor TouchSensor1584 = createNode("TouchSensor");
TouchSensor1584.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1583.children = new MFNode();

HAnimSite1583.children[0] = TouchSensor1584;

Shape Shape1585 = createNode("Shape");
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

HAnimSite HAnimSite1586 = createNode("HAnimSite");
HAnimSite1586.name = "l_inclined_view";
HAnimSite1586.DEF = "hanim_l_inclined_view";
HAnimSite1586.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1586.translation = new SFVec3f(new float[1.62,1.05,2.06]);
//HAnimSite visualization shape
TouchSensor TouchSensor1587 = createNode("TouchSensor");
TouchSensor1587.description = "HAnimSite l_inclined_view";
HAnimSite1586.children = new MFNode();

HAnimSite1586.children[0] = TouchSensor1587;

Shape Shape1588 = createNode("Shape");
Shape1588.USE = "HAnimSiteShape";
HAnimSite1586.children[1] = Shape1588;

Viewpoint Viewpoint1589 = createNode("Viewpoint");
Viewpoint1589.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1589.description = "left inclined";
Viewpoint1589.position = new SFVec3f(new float[0,0,0]);
HAnimSite1586.children[2] = Viewpoint1589;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1590 = createNode("Anchor");
Anchor1590.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1590.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
LOD LOD1591 = createNode("LOD");
LOD1591.forceTransitions = True;
LOD1591.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1592 = createNode("WorldInfo");
WorldInfo1592.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1591.children = new MFNode();

LOD1591.children[0] = WorldInfo1592;

Shape Shape1593 = createNode("Shape");
Shape1593.USE = "HAnimSiteViewpointShape";
LOD1591.children[1] = Shape1593;

Anchor1590.children = new MFNode();

Anchor1590.children[0] = LOD1591;

HAnimSite1586.children[3] = Anchor1590;

HAnimHumanoid47.viewpoints[1] = HAnimSite1586;

HAnimSite HAnimSite1594 = createNode("HAnimSite");
HAnimSite1594.name = "r_inclined_view";
HAnimSite1594.DEF = "hanim_r_inclined_view";
HAnimSite1594.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1594.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
//HAnimSite visualization shape
TouchSensor TouchSensor1595 = createNode("TouchSensor");
TouchSensor1595.description = "HAnimSite r_inclined_view";
HAnimSite1594.children = new MFNode();

HAnimSite1594.children[0] = TouchSensor1595;

Shape Shape1596 = createNode("Shape");
Shape1596.USE = "HAnimSiteShape";
HAnimSite1594.children[1] = Shape1596;

Viewpoint Viewpoint1597 = createNode("Viewpoint");
Viewpoint1597.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1597.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1597.description = "right inclined";
Viewpoint1597.position = new SFVec3f(new float[0,0,0]);
HAnimSite1594.children[2] = Viewpoint1597;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1598 = createNode("Anchor");
Anchor1598.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1598.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
LOD LOD1599 = createNode("LOD");
LOD1599.forceTransitions = True;
LOD1599.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1600 = createNode("WorldInfo");
WorldInfo1600.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1599.children = new MFNode();

LOD1599.children[0] = WorldInfo1600;

Shape Shape1601 = createNode("Shape");
Shape1601.USE = "HAnimSiteViewpointShape";
LOD1599.children[1] = Shape1601;

Anchor1598.children = new MFNode();

Anchor1598.children[0] = LOD1599;

HAnimSite1594.children[3] = Anchor1598;

HAnimHumanoid47.viewpoints[2] = HAnimSite1594;

HAnimSite HAnimSite1602 = createNode("HAnimSite");
HAnimSite1602.name = "front_view";
HAnimSite1602.DEF = "hanim_front_view";
HAnimSite1602.translation = new SFVec3f(new float[0,0.85,2.58]);
//HAnimSite visualization shape
TouchSensor TouchSensor1603 = createNode("TouchSensor");
TouchSensor1603.description = "HAnimSite front_view";
HAnimSite1602.children = new MFNode();

HAnimSite1602.children[0] = TouchSensor1603;

Shape Shape1604 = createNode("Shape");
Shape1604.USE = "HAnimSiteShape";
HAnimSite1602.children[1] = Shape1604;

Viewpoint Viewpoint1605 = createNode("Viewpoint");
Viewpoint1605.DEF = "hanim_front_viewpoint";
Viewpoint1605.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1605.description = "front";
Viewpoint1605.position = new SFVec3f(new float[0,0,0]);
HAnimSite1602.children[2] = Viewpoint1605;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1606 = createNode("Anchor");
Anchor1606.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1606.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
LOD LOD1607 = createNode("LOD");
LOD1607.forceTransitions = True;
LOD1607.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1608 = createNode("WorldInfo");
WorldInfo1608.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1607.children = new MFNode();

LOD1607.children[0] = WorldInfo1608;

Shape Shape1609 = createNode("Shape");
Shape1609.USE = "HAnimSiteViewpointShape";
LOD1607.children[1] = Shape1609;

Anchor1606.children = new MFNode();

Anchor1606.children[0] = LOD1607;

HAnimSite1602.children[3] = Anchor1606;

HAnimHumanoid47.viewpoints[3] = HAnimSite1602;

HAnimSite HAnimSite1610 = createNode("HAnimSite");
HAnimSite1610.name = "back_view";
HAnimSite1610.DEF = "hanim_back_view";
HAnimSite1610.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1610.translation = new SFVec3f(new float[0,0.85,-2.58]);
//HAnimSite visualization shape
TouchSensor TouchSensor1611 = createNode("TouchSensor");
TouchSensor1611.description = "HAnimSite back_view";
HAnimSite1610.children = new MFNode();

HAnimSite1610.children[0] = TouchSensor1611;

Shape Shape1612 = createNode("Shape");
Shape1612.USE = "HAnimSiteShape";
HAnimSite1610.children[1] = Shape1612;

Viewpoint Viewpoint1613 = createNode("Viewpoint");
Viewpoint1613.DEF = "hanim_back_viewpoint";
Viewpoint1613.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1613.description = "back";
Viewpoint1613.position = new SFVec3f(new float[0,0,0]);
HAnimSite1610.children[2] = Viewpoint1613;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1614 = createNode("Anchor");
Anchor1614.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1614.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
LOD LOD1615 = createNode("LOD");
LOD1615.forceTransitions = True;
LOD1615.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1616 = createNode("WorldInfo");
WorldInfo1616.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1615.children = new MFNode();

LOD1615.children[0] = WorldInfo1616;

Shape Shape1617 = createNode("Shape");
Shape1617.USE = "HAnimSiteViewpointShape";
LOD1615.children[1] = Shape1617;

Anchor1614.children = new MFNode();

Anchor1614.children[0] = LOD1615;

HAnimSite1610.children[3] = Anchor1614;

HAnimHumanoid47.viewpoints[4] = HAnimSite1610;

HAnimSite HAnimSite1618 = createNode("HAnimSite");
HAnimSite1618.name = "l_side_view";
HAnimSite1618.DEF = "hanim_l_side_view";
HAnimSite1618.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1618.translation = new SFVec3f(new float[2.6,0.854,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor1619 = createNode("TouchSensor");
TouchSensor1619.description = "HAnimSite l_side_view";
HAnimSite1618.children = new MFNode();

HAnimSite1618.children[0] = TouchSensor1619;

Shape Shape1620 = createNode("Shape");
Shape1620.USE = "HAnimSiteShape";
HAnimSite1618.children[1] = Shape1620;

Viewpoint Viewpoint1621 = createNode("Viewpoint");
Viewpoint1621.DEF = "hanim_l_side_viewpoint";
Viewpoint1621.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1621.description = "left side";
Viewpoint1621.position = new SFVec3f(new float[0,0,0]);
HAnimSite1618.children[2] = Viewpoint1621;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1622 = createNode("Anchor");
Anchor1622.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1622.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
LOD LOD1623 = createNode("LOD");
LOD1623.forceTransitions = True;
LOD1623.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1624 = createNode("WorldInfo");
WorldInfo1624.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1623.children = new MFNode();

LOD1623.children[0] = WorldInfo1624;

Shape Shape1625 = createNode("Shape");
Shape1625.USE = "HAnimSiteViewpointShape";
LOD1623.children[1] = Shape1625;

Anchor1622.children = new MFNode();

Anchor1622.children[0] = LOD1623;

HAnimSite1618.children[3] = Anchor1622;

HAnimHumanoid47.viewpoints[5] = HAnimSite1618;

HAnimSite HAnimSite1626 = createNode("HAnimSite");
HAnimSite1626.name = "Top_view";
HAnimSite1626.DEF = "hanim_Top_view";
HAnimSite1626.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1626.translation = new SFVec3f(new float[0,3.5,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor1627 = createNode("TouchSensor");
TouchSensor1627.description = "HAnimSite Top_view";
HAnimSite1626.children = new MFNode();

HAnimSite1626.children[0] = TouchSensor1627;

Shape Shape1628 = createNode("Shape");
Shape1628.USE = "HAnimSiteShape";
HAnimSite1626.children[1] = Shape1628;

Viewpoint Viewpoint1629 = createNode("Viewpoint");
Viewpoint1629.DEF = "hanim_Top_viewpoint";
Viewpoint1629.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1629.description = "Top";
Viewpoint1629.position = new SFVec3f(new float[0,0,0]);
HAnimSite1626.children[2] = Viewpoint1629;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1630 = createNode("Anchor");
Anchor1630.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1630.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
LOD LOD1631 = createNode("LOD");
LOD1631.forceTransitions = True;
LOD1631.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1632 = createNode("WorldInfo");
WorldInfo1632.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1631.children = new MFNode();

LOD1631.children[0] = WorldInfo1632;

Shape Shape1633 = createNode("Shape");
Shape1633.USE = "HAnimSiteViewpointShape";
LOD1631.children[1] = Shape1633;

Anchor1630.children = new MFNode();

Anchor1630.children[0] = LOD1631;

HAnimSite1626.children[3] = Anchor1630;

HAnimHumanoid47.viewpoints[6] = HAnimSite1626;

HAnimSite HAnimSite1634 = createNode("HAnimSite");
HAnimSite1634.name = "front_close_view";
HAnimSite1634.DEF = "hanim_front_close_view";
HAnimSite1634.translation = new SFVec3f(new float[0,0.854,1.575]);
//HAnimSite visualization shape
TouchSensor TouchSensor1635 = createNode("TouchSensor");
TouchSensor1635.description = "HAnimSite front_close_view";
HAnimSite1634.children = new MFNode();

HAnimSite1634.children[0] = TouchSensor1635;

Shape Shape1636 = createNode("Shape");
Shape1636.USE = "HAnimSiteShape";
HAnimSite1634.children[1] = Shape1636;

Viewpoint Viewpoint1637 = createNode("Viewpoint");
Viewpoint1637.DEF = "hanim_front_close_viewpoint";
Viewpoint1637.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1637.description = "front close";
Viewpoint1637.position = new SFVec3f(new float[0,0,0]);
HAnimSite1634.children[2] = Viewpoint1637;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1638 = createNode("Anchor");
Anchor1638.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1638.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
LOD LOD1639 = createNode("LOD");
LOD1639.forceTransitions = True;
LOD1639.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1640 = createNode("WorldInfo");
WorldInfo1640.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1639.children = new MFNode();

LOD1639.children[0] = WorldInfo1640;

Shape Shape1641 = createNode("Shape");
Shape1641.USE = "HAnimSiteViewpointShape";
LOD1639.children[1] = Shape1641;

Anchor1638.children = new MFNode();

Anchor1638.children[0] = LOD1639;

HAnimSite1634.children[3] = Anchor1638;

HAnimHumanoid47.viewpoints[7] = HAnimSite1634;

HAnimSite HAnimSite1642 = createNode("HAnimSite");
HAnimSite1642.name = "side_close_view";
HAnimSite1642.DEF = "hanim_side_close_view";
HAnimSite1642.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1642.translation = new SFVec3f(new float[1.56,0.854,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor1643 = createNode("TouchSensor");
TouchSensor1643.description = "HAnimSite side_close_view";
HAnimSite1642.children = new MFNode();

HAnimSite1642.children[0] = TouchSensor1643;

Shape Shape1644 = createNode("Shape");
Shape1644.USE = "HAnimSiteShape";
HAnimSite1642.children[1] = Shape1644;

Viewpoint Viewpoint1645 = createNode("Viewpoint");
Viewpoint1645.DEF = "hanim_side_close_viewpoint";
Viewpoint1645.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1645.description = "side close";
Viewpoint1645.position = new SFVec3f(new float[0,0,0]);
HAnimSite1642.children[2] = Viewpoint1645;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1646 = createNode("Anchor");
Anchor1646.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1646.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
LOD LOD1647 = createNode("LOD");
LOD1647.forceTransitions = True;
LOD1647.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1648 = createNode("WorldInfo");
WorldInfo1648.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1647.children = new MFNode();

LOD1647.children[0] = WorldInfo1648;

Shape Shape1649 = createNode("Shape");
Shape1649.USE = "HAnimSiteViewpointShape";
LOD1647.children[1] = Shape1649;

Anchor1646.children = new MFNode();

Anchor1646.children[0] = LOD1647;

HAnimSite1642.children[3] = Anchor1646;

HAnimHumanoid47.viewpoints[8] = HAnimSite1642;

HAnimSite HAnimSite1650 = createNode("HAnimSite");
HAnimSite1650.name = "head_front_close_view";
HAnimSite1650.DEF = "hanim_head_front_close_view";
HAnimSite1650.translation = new SFVec3f(new float[0,1.5,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1651 = createNode("TouchSensor");
TouchSensor1651.description = "HAnimSite head_front_close_view";
HAnimSite1650.children = new MFNode();

HAnimSite1650.children[0] = TouchSensor1651;

Shape Shape1652 = createNode("Shape");
Shape1652.USE = "HAnimSiteShape";
HAnimSite1650.children[1] = Shape1652;

Viewpoint Viewpoint1653 = createNode("Viewpoint");
Viewpoint1653.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1653.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1653.description = "head front close";
Viewpoint1653.position = new SFVec3f(new float[0,0,0]);
HAnimSite1650.children[2] = Viewpoint1653;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1654 = createNode("Anchor");
Anchor1654.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1654.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
LOD LOD1655 = createNode("LOD");
LOD1655.forceTransitions = True;
LOD1655.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1656 = createNode("WorldInfo");
WorldInfo1656.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1655.children = new MFNode();

LOD1655.children[0] = WorldInfo1656;

Shape Shape1657 = createNode("Shape");
Shape1657.USE = "HAnimSiteViewpointShape";
LOD1655.children[1] = Shape1657;

Anchor1654.children = new MFNode();

Anchor1654.children[0] = LOD1655;

HAnimSite1650.children[3] = Anchor1654;

HAnimHumanoid47.viewpoints[9] = HAnimSite1650;

HAnimSite HAnimSite1658 = createNode("HAnimSite");
HAnimSite1658.name = "chest_front_close_view";
HAnimSite1658.DEF = "hanim_chest_front_close_view";
HAnimSite1658.translation = new SFVec3f(new float[0,1.2,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1659 = createNode("TouchSensor");
TouchSensor1659.description = "HAnimSite chest_front_close_view";
HAnimSite1658.children = new MFNode();

HAnimSite1658.children[0] = TouchSensor1659;

Shape Shape1660 = createNode("Shape");
Shape1660.USE = "HAnimSiteShape";
HAnimSite1658.children[1] = Shape1660;

Viewpoint Viewpoint1661 = createNode("Viewpoint");
Viewpoint1661.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1661.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1661.description = "chest front close";
Viewpoint1661.position = new SFVec3f(new float[0,0,0]);
HAnimSite1658.children[2] = Viewpoint1661;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1662 = createNode("Anchor");
Anchor1662.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1662.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
LOD LOD1663 = createNode("LOD");
LOD1663.forceTransitions = True;
LOD1663.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1664 = createNode("WorldInfo");
WorldInfo1664.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1663.children = new MFNode();

LOD1663.children[0] = WorldInfo1664;

Shape Shape1665 = createNode("Shape");
Shape1665.USE = "HAnimSiteViewpointShape";
LOD1663.children[1] = Shape1665;

Anchor1662.children = new MFNode();

Anchor1662.children[0] = LOD1663;

HAnimSite1658.children[3] = Anchor1662;

HAnimHumanoid47.viewpoints[10] = HAnimSite1658;

HAnimSite HAnimSite1666 = createNode("HAnimSite");
HAnimSite1666.name = "pelvis_front_close_view";
HAnimSite1666.DEF = "hanim_pelvis_front_close_view";
HAnimSite1666.translation = new SFVec3f(new float[0,0.8,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1667 = createNode("TouchSensor");
TouchSensor1667.description = "HAnimSite pelvis_front_close_view";
HAnimSite1666.children = new MFNode();

HAnimSite1666.children[0] = TouchSensor1667;

Shape Shape1668 = createNode("Shape");
Shape1668.USE = "HAnimSiteShape";
HAnimSite1666.children[1] = Shape1668;

Viewpoint Viewpoint1669 = createNode("Viewpoint");
Viewpoint1669.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1669.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1669.description = "pelvis front close";
Viewpoint1669.position = new SFVec3f(new float[0,0,0]);
HAnimSite1666.children[2] = Viewpoint1669;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1670 = createNode("Anchor");
Anchor1670.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1670.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
LOD LOD1671 = createNode("LOD");
LOD1671.forceTransitions = True;
LOD1671.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1672 = createNode("WorldInfo");
WorldInfo1672.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1671.children = new MFNode();

LOD1671.children[0] = WorldInfo1672;

Shape Shape1673 = createNode("Shape");
Shape1673.USE = "HAnimSiteViewpointShape";
LOD1671.children[1] = Shape1673;

Anchor1670.children = new MFNode();

Anchor1670.children[0] = LOD1671;

HAnimSite1666.children[3] = Anchor1670;

HAnimHumanoid47.viewpoints[11] = HAnimSite1666;

HAnimSite HAnimSite1674 = createNode("HAnimSite");
HAnimSite1674.name = "knees_front_close_view";
HAnimSite1674.DEF = "hanim_knees_front_close_view";
HAnimSite1674.translation = new SFVec3f(new float[0,0.4,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1675 = createNode("TouchSensor");
TouchSensor1675.description = "HAnimSite knees_front_close_view";
HAnimSite1674.children = new MFNode();

HAnimSite1674.children[0] = TouchSensor1675;

Shape Shape1676 = createNode("Shape");
Shape1676.USE = "HAnimSiteShape";
HAnimSite1674.children[1] = Shape1676;

Viewpoint Viewpoint1677 = createNode("Viewpoint");
Viewpoint1677.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1677.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1677.description = "knees front close";
Viewpoint1677.position = new SFVec3f(new float[0,0,0]);
HAnimSite1674.children[2] = Viewpoint1677;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1678 = createNode("Anchor");
Anchor1678.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1678.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
LOD LOD1679 = createNode("LOD");
LOD1679.forceTransitions = True;
LOD1679.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1680 = createNode("WorldInfo");
WorldInfo1680.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1679.children = new MFNode();

LOD1679.children[0] = WorldInfo1680;

Shape Shape1681 = createNode("Shape");
Shape1681.USE = "HAnimSiteViewpointShape";
LOD1679.children[1] = Shape1681;

Anchor1678.children = new MFNode();

Anchor1678.children[0] = LOD1679;

HAnimSite1674.children[3] = Anchor1678;

HAnimHumanoid47.viewpoints[12] = HAnimSite1674;

HAnimSite HAnimSite1682 = createNode("HAnimSite");
HAnimSite1682.name = "feet_front_close_view";
HAnimSite1682.DEF = "hanim_feet_front_close_view";
HAnimSite1682.translation = new SFVec3f(new float[0,0,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1683 = createNode("TouchSensor");
TouchSensor1683.description = "HAnimSite feet_front_close_view";
HAnimSite1682.children = new MFNode();

HAnimSite1682.children[0] = TouchSensor1683;

Shape Shape1684 = createNode("Shape");
Shape1684.USE = "HAnimSiteShape";
HAnimSite1682.children[1] = Shape1684;

Viewpoint Viewpoint1685 = createNode("Viewpoint");
Viewpoint1685.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1685.description = "feet front close";
Viewpoint1685.position = new SFVec3f(new float[0,0,0]);
HAnimSite1682.children[2] = Viewpoint1685;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1686 = createNode("Anchor");
Anchor1686.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1686.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
LOD LOD1687 = createNode("LOD");
LOD1687.forceTransitions = True;
LOD1687.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1688 = createNode("WorldInfo");
WorldInfo1688.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1687.children = new MFNode();

LOD1687.children[0] = WorldInfo1688;

Shape Shape1689 = createNode("Shape");
Shape1689.USE = "HAnimSiteViewpointShape";
LOD1687.children[1] = Shape1689;

Anchor1686.children = new MFNode();

Anchor1686.children[0] = LOD1687;

HAnimSite1682.children[3] = Anchor1686;

HAnimHumanoid47.viewpoints[13] = HAnimSite1682;

HAnimSite HAnimSite1690 = createNode("HAnimSite");
HAnimSite1690.name = "eye_level_view";
HAnimSite1690.DEF = "hanim_eye_level_view";
HAnimSite1690.translation = new SFVec3f(new float[0,1.6332,0.0502]);
//HAnimSite visualization shape
TouchSensor TouchSensor1691 = createNode("TouchSensor");
TouchSensor1691.description = "HAnimSite eye_level_view";
HAnimSite1690.children = new MFNode();

HAnimSite1690.children[0] = TouchSensor1691;

Shape Shape1692 = createNode("Shape");
Shape1692.USE = "HAnimSiteShape";
HAnimSite1690.children[1] = Shape1692;

Viewpoint Viewpoint1693 = createNode("Viewpoint");
Viewpoint1693.DEF = "hanim_eye_level_viewpoint";
Viewpoint1693.description = "eye level looking forward";
Viewpoint1693.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1693.position = new SFVec3f(new float[0,0,0]);
HAnimSite1690.children[2] = Viewpoint1693;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1694 = createNode("Anchor");
Anchor1694.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1694.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
LOD LOD1695 = createNode("LOD");
LOD1695.forceTransitions = True;
LOD1695.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1696 = createNode("WorldInfo");
WorldInfo1696.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1695.children = new MFNode();

LOD1695.children[0] = WorldInfo1696;

Shape Shape1697 = createNode("Shape");
Shape1697.USE = "HAnimSiteViewpointShape";
LOD1695.children[1] = Shape1697;

Anchor1694.children = new MFNode();

Anchor1694.children[0] = LOD1695;

HAnimSite1690.children[3] = Anchor1694;

HAnimHumanoid47.viewpoints[14] = HAnimSite1690;

HAnimSite HAnimSite1698 = createNode("HAnimSite");
HAnimSite1698.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid47.viewpoints[15] = HAnimSite1698;

HAnimSite HAnimSite1699 = createNode("HAnimSite");
HAnimSite1699.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid47.viewpoints[16] = HAnimSite1699;

HAnimSite HAnimSite1700 = createNode("HAnimSite");
HAnimSite1700.USE = "hanim_l_hand_front_view";
HAnimHumanoid47.viewpoints[17] = HAnimSite1700;

HAnimSite HAnimSite1701 = createNode("HAnimSite");
HAnimSite1701.USE = "hanim_r_hand_front_view";
HAnimHumanoid47.viewpoints[18] = HAnimSite1701;

HAnimJoint HAnimJoint1702 = createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_humanoid_root";
HAnimHumanoid47.joints[19] = HAnimJoint1702;

HAnimJoint HAnimJoint1703 = createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_sacroiliac";
HAnimHumanoid47.joints[20] = HAnimJoint1703;

HAnimJoint HAnimJoint1704 = createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_vl5";
HAnimHumanoid47.joints[21] = HAnimJoint1704;

HAnimJoint HAnimJoint1705 = createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_vl4";
HAnimHumanoid47.joints[22] = HAnimJoint1705;

HAnimJoint HAnimJoint1706 = createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_vl3";
HAnimHumanoid47.joints[23] = HAnimJoint1706;

HAnimJoint HAnimJoint1707 = createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_vl2";
HAnimHumanoid47.joints[24] = HAnimJoint1707;

HAnimJoint HAnimJoint1708 = createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_vl1";
HAnimHumanoid47.joints[25] = HAnimJoint1708;

HAnimJoint HAnimJoint1709 = createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_vt12";
HAnimHumanoid47.joints[26] = HAnimJoint1709;

HAnimJoint HAnimJoint1710 = createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_vt11";
HAnimHumanoid47.joints[27] = HAnimJoint1710;

HAnimJoint HAnimJoint1711 = createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_vt10";
HAnimHumanoid47.joints[28] = HAnimJoint1711;

HAnimJoint HAnimJoint1712 = createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_vt9";
HAnimHumanoid47.joints[29] = HAnimJoint1712;

HAnimJoint HAnimJoint1713 = createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_vt8";
HAnimHumanoid47.joints[30] = HAnimJoint1713;

HAnimJoint HAnimJoint1714 = createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_vt7";
HAnimHumanoid47.joints[31] = HAnimJoint1714;

HAnimJoint HAnimJoint1715 = createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_vt6";
HAnimHumanoid47.joints[32] = HAnimJoint1715;

HAnimJoint HAnimJoint1716 = createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_vt5";
HAnimHumanoid47.joints[33] = HAnimJoint1716;

HAnimJoint HAnimJoint1717 = createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_vt4";
HAnimHumanoid47.joints[34] = HAnimJoint1717;

HAnimJoint HAnimJoint1718 = createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_vt3";
HAnimHumanoid47.joints[35] = HAnimJoint1718;

HAnimJoint HAnimJoint1719 = createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_vt2";
HAnimHumanoid47.joints[36] = HAnimJoint1719;

HAnimJoint HAnimJoint1720 = createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_vt1";
HAnimHumanoid47.joints[37] = HAnimJoint1720;

HAnimJoint HAnimJoint1721 = createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_vc7";
HAnimHumanoid47.joints[38] = HAnimJoint1721;

HAnimJoint HAnimJoint1722 = createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_vc6";
HAnimHumanoid47.joints[39] = HAnimJoint1722;

HAnimJoint HAnimJoint1723 = createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_vc5";
HAnimHumanoid47.joints[40] = HAnimJoint1723;

HAnimJoint HAnimJoint1724 = createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_vc4";
HAnimHumanoid47.joints[41] = HAnimJoint1724;

HAnimJoint HAnimJoint1725 = createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_vc3";
HAnimHumanoid47.joints[42] = HAnimJoint1725;

HAnimJoint HAnimJoint1726 = createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_vc2";
HAnimHumanoid47.joints[43] = HAnimJoint1726;

HAnimJoint HAnimJoint1727 = createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_vc1";
HAnimHumanoid47.joints[44] = HAnimJoint1727;

HAnimJoint HAnimJoint1728 = createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_skullbase";
HAnimHumanoid47.joints[45] = HAnimJoint1728;

HAnimJoint HAnimJoint1729 = createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_temporomandibular";
HAnimHumanoid47.joints[46] = HAnimJoint1729;

HAnimJoint HAnimJoint1730 = createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_l_acromioclavicular";
HAnimHumanoid47.joints[47] = HAnimJoint1730;

HAnimJoint HAnimJoint1731 = createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_acromioclavicular";
HAnimHumanoid47.joints[48] = HAnimJoint1731;

HAnimJoint HAnimJoint1732 = createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_l_ankle";
HAnimHumanoid47.joints[49] = HAnimJoint1732;

HAnimJoint HAnimJoint1733 = createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_ankle";
HAnimHumanoid47.joints[50] = HAnimJoint1733;

HAnimJoint HAnimJoint1734 = createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_l_elbow";
HAnimHumanoid47.joints[51] = HAnimJoint1734;

HAnimJoint HAnimJoint1735 = createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_elbow";
HAnimHumanoid47.joints[52] = HAnimJoint1735;

HAnimJoint HAnimJoint1736 = createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_l_eyeball_joint";
HAnimHumanoid47.joints[53] = HAnimJoint1736;

HAnimJoint HAnimJoint1737 = createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_eyeball_joint";
HAnimHumanoid47.joints[54] = HAnimJoint1737;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid47.joints[55] = HAnimJoint1738;

HAnimJoint HAnimJoint1739 = createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid47.joints[56] = HAnimJoint1739;

HAnimJoint HAnimJoint1740 = createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_l_eyelid_joint";
HAnimHumanoid47.joints[57] = HAnimJoint1740;

HAnimJoint HAnimJoint1741 = createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_eyelid_joint";
HAnimHumanoid47.joints[58] = HAnimJoint1741;

HAnimJoint HAnimJoint1742 = createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_l_hip";
HAnimHumanoid47.joints[59] = HAnimJoint1742;

HAnimJoint HAnimJoint1743 = createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_hip";
HAnimHumanoid47.joints[60] = HAnimJoint1743;

HAnimJoint HAnimJoint1744 = createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_l_index0";
HAnimHumanoid47.joints[61] = HAnimJoint1744;

HAnimJoint HAnimJoint1745 = createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_index0";
HAnimHumanoid47.joints[62] = HAnimJoint1745;

HAnimJoint HAnimJoint1746 = createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_l_index1";
HAnimHumanoid47.joints[63] = HAnimJoint1746;

HAnimJoint HAnimJoint1747 = createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_r_index1";
HAnimHumanoid47.joints[64] = HAnimJoint1747;

HAnimJoint HAnimJoint1748 = createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_l_index2";
HAnimHumanoid47.joints[65] = HAnimJoint1748;

HAnimJoint HAnimJoint1749 = createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_r_index2";
HAnimHumanoid47.joints[66] = HAnimJoint1749;

HAnimJoint HAnimJoint1750 = createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_l_index3";
HAnimHumanoid47.joints[67] = HAnimJoint1750;

HAnimJoint HAnimJoint1751 = createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_r_index3";
HAnimHumanoid47.joints[68] = HAnimJoint1751;

HAnimJoint HAnimJoint1752 = createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_l_knee";
HAnimHumanoid47.joints[69] = HAnimJoint1752;

HAnimJoint HAnimJoint1753 = createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_r_knee";
HAnimHumanoid47.joints[70] = HAnimJoint1753;

HAnimJoint HAnimJoint1754 = createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_l_metatarsal";
HAnimHumanoid47.joints[71] = HAnimJoint1754;

HAnimJoint HAnimJoint1755 = createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_r_metatarsal";
HAnimHumanoid47.joints[72] = HAnimJoint1755;

HAnimJoint HAnimJoint1756 = createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_l_middle0";
HAnimHumanoid47.joints[73] = HAnimJoint1756;

HAnimJoint HAnimJoint1757 = createNode("HAnimJoint");
HAnimJoint1757.USE = "hanim_r_middle0";
HAnimHumanoid47.joints[74] = HAnimJoint1757;

HAnimJoint HAnimJoint1758 = createNode("HAnimJoint");
HAnimJoint1758.USE = "hanim_l_middle1";
HAnimHumanoid47.joints[75] = HAnimJoint1758;

HAnimJoint HAnimJoint1759 = createNode("HAnimJoint");
HAnimJoint1759.USE = "hanim_r_middle1";
HAnimHumanoid47.joints[76] = HAnimJoint1759;

HAnimJoint HAnimJoint1760 = createNode("HAnimJoint");
HAnimJoint1760.USE = "hanim_l_middle2";
HAnimHumanoid47.joints[77] = HAnimJoint1760;

HAnimJoint HAnimJoint1761 = createNode("HAnimJoint");
HAnimJoint1761.USE = "hanim_r_middle2";
HAnimHumanoid47.joints[78] = HAnimJoint1761;

HAnimJoint HAnimJoint1762 = createNode("HAnimJoint");
HAnimJoint1762.USE = "hanim_l_middle3";
HAnimHumanoid47.joints[79] = HAnimJoint1762;

HAnimJoint HAnimJoint1763 = createNode("HAnimJoint");
HAnimJoint1763.USE = "hanim_r_middle3";
HAnimHumanoid47.joints[80] = HAnimJoint1763;

HAnimJoint HAnimJoint1764 = createNode("HAnimJoint");
HAnimJoint1764.USE = "hanim_l_midtarsal";
HAnimHumanoid47.joints[81] = HAnimJoint1764;

HAnimJoint HAnimJoint1765 = createNode("HAnimJoint");
HAnimJoint1765.USE = "hanim_r_midtarsal";
HAnimHumanoid47.joints[82] = HAnimJoint1765;

HAnimJoint HAnimJoint1766 = createNode("HAnimJoint");
HAnimJoint1766.USE = "hanim_l_pinky0";
HAnimHumanoid47.joints[83] = HAnimJoint1766;

HAnimJoint HAnimJoint1767 = createNode("HAnimJoint");
HAnimJoint1767.USE = "hanim_r_pinky0";
HAnimHumanoid47.joints[84] = HAnimJoint1767;

HAnimJoint HAnimJoint1768 = createNode("HAnimJoint");
HAnimJoint1768.USE = "hanim_l_pinky1";
HAnimHumanoid47.joints[85] = HAnimJoint1768;

HAnimJoint HAnimJoint1769 = createNode("HAnimJoint");
HAnimJoint1769.USE = "hanim_r_pinky1";
HAnimHumanoid47.joints[86] = HAnimJoint1769;

HAnimJoint HAnimJoint1770 = createNode("HAnimJoint");
HAnimJoint1770.USE = "hanim_l_pinky2";
HAnimHumanoid47.joints[87] = HAnimJoint1770;

HAnimJoint HAnimJoint1771 = createNode("HAnimJoint");
HAnimJoint1771.USE = "hanim_r_pinky2";
HAnimHumanoid47.joints[88] = HAnimJoint1771;

HAnimJoint HAnimJoint1772 = createNode("HAnimJoint");
HAnimJoint1772.USE = "hanim_l_pinky3";
HAnimHumanoid47.joints[89] = HAnimJoint1772;

HAnimJoint HAnimJoint1773 = createNode("HAnimJoint");
HAnimJoint1773.USE = "hanim_r_pinky3";
HAnimHumanoid47.joints[90] = HAnimJoint1773;

HAnimJoint HAnimJoint1774 = createNode("HAnimJoint");
HAnimJoint1774.USE = "hanim_l_ring0";
HAnimHumanoid47.joints[91] = HAnimJoint1774;

HAnimJoint HAnimJoint1775 = createNode("HAnimJoint");
HAnimJoint1775.USE = "hanim_r_ring0";
HAnimHumanoid47.joints[92] = HAnimJoint1775;

HAnimJoint HAnimJoint1776 = createNode("HAnimJoint");
HAnimJoint1776.USE = "hanim_l_ring1";
HAnimHumanoid47.joints[93] = HAnimJoint1776;

HAnimJoint HAnimJoint1777 = createNode("HAnimJoint");
HAnimJoint1777.USE = "hanim_r_ring1";
HAnimHumanoid47.joints[94] = HAnimJoint1777;

HAnimJoint HAnimJoint1778 = createNode("HAnimJoint");
HAnimJoint1778.USE = "hanim_l_ring2";
HAnimHumanoid47.joints[95] = HAnimJoint1778;

HAnimJoint HAnimJoint1779 = createNode("HAnimJoint");
HAnimJoint1779.USE = "hanim_r_ring2";
HAnimHumanoid47.joints[96] = HAnimJoint1779;

HAnimJoint HAnimJoint1780 = createNode("HAnimJoint");
HAnimJoint1780.USE = "hanim_l_ring3";
HAnimHumanoid47.joints[97] = HAnimJoint1780;

HAnimJoint HAnimJoint1781 = createNode("HAnimJoint");
HAnimJoint1781.USE = "hanim_r_ring3";
HAnimHumanoid47.joints[98] = HAnimJoint1781;

HAnimJoint HAnimJoint1782 = createNode("HAnimJoint");
HAnimJoint1782.USE = "hanim_l_shoulder";
HAnimHumanoid47.joints[99] = HAnimJoint1782;

HAnimJoint HAnimJoint1783 = createNode("HAnimJoint");
HAnimJoint1783.USE = "hanim_r_shoulder";
HAnimHumanoid47.joints[100] = HAnimJoint1783;

HAnimJoint HAnimJoint1784 = createNode("HAnimJoint");
HAnimJoint1784.USE = "hanim_l_sternoclavicular";
HAnimHumanoid47.joints[101] = HAnimJoint1784;

HAnimJoint HAnimJoint1785 = createNode("HAnimJoint");
HAnimJoint1785.USE = "hanim_r_sternoclavicular";
HAnimHumanoid47.joints[102] = HAnimJoint1785;

HAnimJoint HAnimJoint1786 = createNode("HAnimJoint");
HAnimJoint1786.USE = "hanim_l_subtalar";
HAnimHumanoid47.joints[103] = HAnimJoint1786;

HAnimJoint HAnimJoint1787 = createNode("HAnimJoint");
HAnimJoint1787.USE = "hanim_r_subtalar";
HAnimHumanoid47.joints[104] = HAnimJoint1787;

HAnimJoint HAnimJoint1788 = createNode("HAnimJoint");
HAnimJoint1788.USE = "hanim_l_thumb1";
HAnimHumanoid47.joints[105] = HAnimJoint1788;

HAnimJoint HAnimJoint1789 = createNode("HAnimJoint");
HAnimJoint1789.USE = "hanim_r_thumb1";
HAnimHumanoid47.joints[106] = HAnimJoint1789;

HAnimJoint HAnimJoint1790 = createNode("HAnimJoint");
HAnimJoint1790.USE = "hanim_l_thumb2";
HAnimHumanoid47.joints[107] = HAnimJoint1790;

HAnimJoint HAnimJoint1791 = createNode("HAnimJoint");
HAnimJoint1791.USE = "hanim_r_thumb2";
HAnimHumanoid47.joints[108] = HAnimJoint1791;

HAnimJoint HAnimJoint1792 = createNode("HAnimJoint");
HAnimJoint1792.USE = "hanim_l_thumb3";
HAnimHumanoid47.joints[109] = HAnimJoint1792;

HAnimJoint HAnimJoint1793 = createNode("HAnimJoint");
HAnimJoint1793.USE = "hanim_r_thumb3";
HAnimHumanoid47.joints[110] = HAnimJoint1793;

HAnimJoint HAnimJoint1794 = createNode("HAnimJoint");
HAnimJoint1794.USE = "hanim_l_wrist";
HAnimHumanoid47.joints[111] = HAnimJoint1794;

HAnimJoint HAnimJoint1795 = createNode("HAnimJoint");
HAnimJoint1795.USE = "hanim_r_wrist";
HAnimHumanoid47.joints[112] = HAnimJoint1795;

HAnimSegment HAnimSegment1796 = createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_pelvis";
HAnimHumanoid47.segments[113] = HAnimSegment1796;

HAnimSegment HAnimSegment1797 = createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_skull";
HAnimHumanoid47.segments[114] = HAnimSegment1797;

HAnimSegment HAnimSegment1798 = createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_jaw";
HAnimHumanoid47.segments[115] = HAnimSegment1798;

HAnimSegment HAnimSegment1799 = createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_c1";
HAnimHumanoid47.segments[116] = HAnimSegment1799;

HAnimSegment HAnimSegment1800 = createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_c2";
HAnimHumanoid47.segments[117] = HAnimSegment1800;

HAnimSegment HAnimSegment1801 = createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_c3";
HAnimHumanoid47.segments[118] = HAnimSegment1801;

HAnimSegment HAnimSegment1802 = createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_c4";
HAnimHumanoid47.segments[119] = HAnimSegment1802;

HAnimSegment HAnimSegment1803 = createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_c5";
HAnimHumanoid47.segments[120] = HAnimSegment1803;

HAnimSegment HAnimSegment1804 = createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_c6";
HAnimHumanoid47.segments[121] = HAnimSegment1804;

HAnimSegment HAnimSegment1805 = createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_c7";
HAnimHumanoid47.segments[122] = HAnimSegment1805;

HAnimSegment HAnimSegment1806 = createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_t1";
HAnimHumanoid47.segments[123] = HAnimSegment1806;

HAnimSegment HAnimSegment1807 = createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_t2";
HAnimHumanoid47.segments[124] = HAnimSegment1807;

HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_t3";
HAnimHumanoid47.segments[125] = HAnimSegment1808;

HAnimSegment HAnimSegment1809 = createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_t4";
HAnimHumanoid47.segments[126] = HAnimSegment1809;

HAnimSegment HAnimSegment1810 = createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t5";
HAnimHumanoid47.segments[127] = HAnimSegment1810;

HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_t6";
HAnimHumanoid47.segments[128] = HAnimSegment1811;

HAnimSegment HAnimSegment1812 = createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_t7";
HAnimHumanoid47.segments[129] = HAnimSegment1812;

HAnimSegment HAnimSegment1813 = createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_t8";
HAnimHumanoid47.segments[130] = HAnimSegment1813;

HAnimSegment HAnimSegment1814 = createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_t9";
HAnimHumanoid47.segments[131] = HAnimSegment1814;

HAnimSegment HAnimSegment1815 = createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_t10";
HAnimHumanoid47.segments[132] = HAnimSegment1815;

HAnimSegment HAnimSegment1816 = createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_t11";
HAnimHumanoid47.segments[133] = HAnimSegment1816;

HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_t12";
HAnimHumanoid47.segments[134] = HAnimSegment1817;

HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_l1";
HAnimHumanoid47.segments[135] = HAnimSegment1818;

HAnimSegment HAnimSegment1819 = createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_l2";
HAnimHumanoid47.segments[136] = HAnimSegment1819;

HAnimSegment HAnimSegment1820 = createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l3";
HAnimHumanoid47.segments[137] = HAnimSegment1820;

HAnimSegment HAnimSegment1821 = createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_l4";
HAnimHumanoid47.segments[138] = HAnimSegment1821;

HAnimSegment HAnimSegment1822 = createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l5";
HAnimHumanoid47.segments[139] = HAnimSegment1822;

HAnimSegment HAnimSegment1823 = createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_sacrum";
HAnimHumanoid47.segments[140] = HAnimSegment1823;

HAnimSegment HAnimSegment1824 = createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l_calf";
HAnimHumanoid47.segments[141] = HAnimSegment1824;

HAnimSegment HAnimSegment1825 = createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_r_calf";
HAnimHumanoid47.segments[142] = HAnimSegment1825;

HAnimSegment HAnimSegment1826 = createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l_clavicle";
HAnimHumanoid47.segments[143] = HAnimSegment1826;

HAnimSegment HAnimSegment1827 = createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_r_clavicle";
HAnimHumanoid47.segments[144] = HAnimSegment1827;

HAnimSegment HAnimSegment1828 = createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_eyeball";
HAnimHumanoid47.segments[145] = HAnimSegment1828;

HAnimSegment HAnimSegment1829 = createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_r_eyeball";
HAnimHumanoid47.segments[146] = HAnimSegment1829;

HAnimSegment HAnimSegment1830 = createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_eyebrow";
HAnimHumanoid47.segments[147] = HAnimSegment1830;

HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_r_eyebrow";
HAnimHumanoid47.segments[148] = HAnimSegment1831;

HAnimSegment HAnimSegment1832 = createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_eyelid";
HAnimHumanoid47.segments[149] = HAnimSegment1832;

HAnimSegment HAnimSegment1833 = createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_r_eyelid";
HAnimHumanoid47.segments[150] = HAnimSegment1833;

HAnimSegment HAnimSegment1834 = createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_forearm";
HAnimHumanoid47.segments[151] = HAnimSegment1834;

HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_r_forearm";
HAnimHumanoid47.segments[152] = HAnimSegment1835;

HAnimSegment HAnimSegment1836 = createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_forefoot";
HAnimHumanoid47.segments[153] = HAnimSegment1836;

HAnimSegment HAnimSegment1837 = createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_r_forefoot";
HAnimHumanoid47.segments[154] = HAnimSegment1837;

HAnimSegment HAnimSegment1838 = createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_hand";
HAnimHumanoid47.segments[155] = HAnimSegment1838;

HAnimSegment HAnimSegment1839 = createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_r_hand";
HAnimHumanoid47.segments[156] = HAnimSegment1839;

HAnimSegment HAnimSegment1840 = createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_hindfoot";
HAnimHumanoid47.segments[157] = HAnimSegment1840;

HAnimSegment HAnimSegment1841 = createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_r_hindfoot";
HAnimHumanoid47.segments[158] = HAnimSegment1841;

HAnimSegment HAnimSegment1842 = createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_index_distal";
HAnimHumanoid47.segments[159] = HAnimSegment1842;

HAnimSegment HAnimSegment1843 = createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_index_distal";
HAnimHumanoid47.segments[160] = HAnimSegment1843;

HAnimSegment HAnimSegment1844 = createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_l_index_metacarpal";
HAnimHumanoid47.segments[161] = HAnimSegment1844;

HAnimSegment HAnimSegment1845 = createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_index_metacarpal";
HAnimHumanoid47.segments[162] = HAnimSegment1845;

HAnimSegment HAnimSegment1846 = createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_l_index_middle";
HAnimHumanoid47.segments[163] = HAnimSegment1846;

HAnimSegment HAnimSegment1847 = createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_index_middle";
HAnimHumanoid47.segments[164] = HAnimSegment1847;

HAnimSegment HAnimSegment1848 = createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_l_index_proximal";
HAnimHumanoid47.segments[165] = HAnimSegment1848;

HAnimSegment HAnimSegment1849 = createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_index_proximal";
HAnimHumanoid47.segments[166] = HAnimSegment1849;

HAnimSegment HAnimSegment1850 = createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_l_middistal";
HAnimHumanoid47.segments[167] = HAnimSegment1850;

HAnimSegment HAnimSegment1851 = createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_middistal";
HAnimHumanoid47.segments[168] = HAnimSegment1851;

HAnimSegment HAnimSegment1852 = createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_l_middle_distal";
HAnimHumanoid47.segments[169] = HAnimSegment1852;

HAnimSegment HAnimSegment1853 = createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_middle_distal";
HAnimHumanoid47.segments[170] = HAnimSegment1853;

HAnimSegment HAnimSegment1854 = createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid47.segments[171] = HAnimSegment1854;

HAnimSegment HAnimSegment1855 = createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid47.segments[172] = HAnimSegment1855;

HAnimSegment HAnimSegment1856 = createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_l_middle_middle";
HAnimHumanoid47.segments[173] = HAnimSegment1856;

HAnimSegment HAnimSegment1857 = createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_middle_middle";
HAnimHumanoid47.segments[174] = HAnimSegment1857;

HAnimSegment HAnimSegment1858 = createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_l_middle_proximal";
HAnimHumanoid47.segments[175] = HAnimSegment1858;

HAnimSegment HAnimSegment1859 = createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_middle_proximal";
HAnimHumanoid47.segments[176] = HAnimSegment1859;

HAnimSegment HAnimSegment1860 = createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_l_midproximal";
HAnimHumanoid47.segments[177] = HAnimSegment1860;

HAnimSegment HAnimSegment1861 = createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_midproximal";
HAnimHumanoid47.segments[178] = HAnimSegment1861;

HAnimSegment HAnimSegment1862 = createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_l_pinky_distal";
HAnimHumanoid47.segments[179] = HAnimSegment1862;

HAnimSegment HAnimSegment1863 = createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_pinky_distal";
HAnimHumanoid47.segments[180] = HAnimSegment1863;

HAnimSegment HAnimSegment1864 = createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid47.segments[181] = HAnimSegment1864;

HAnimSegment HAnimSegment1865 = createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid47.segments[182] = HAnimSegment1865;

HAnimSegment HAnimSegment1866 = createNode("HAnimSegment");
HAnimSegment1866.USE = "hanim_l_pinky_middle";
HAnimHumanoid47.segments[183] = HAnimSegment1866;

HAnimSegment HAnimSegment1867 = createNode("HAnimSegment");
HAnimSegment1867.USE = "hanim_r_pinky_middle";
HAnimHumanoid47.segments[184] = HAnimSegment1867;

HAnimSegment HAnimSegment1868 = createNode("HAnimSegment");
HAnimSegment1868.USE = "hanim_l_pinky_proximal";
HAnimHumanoid47.segments[185] = HAnimSegment1868;

HAnimSegment HAnimSegment1869 = createNode("HAnimSegment");
HAnimSegment1869.USE = "hanim_r_pinky_proximal";
HAnimHumanoid47.segments[186] = HAnimSegment1869;

HAnimSegment HAnimSegment1870 = createNode("HAnimSegment");
HAnimSegment1870.USE = "hanim_l_ring_distal";
HAnimHumanoid47.segments[187] = HAnimSegment1870;

HAnimSegment HAnimSegment1871 = createNode("HAnimSegment");
HAnimSegment1871.USE = "hanim_r_ring_distal";
HAnimHumanoid47.segments[188] = HAnimSegment1871;

HAnimSegment HAnimSegment1872 = createNode("HAnimSegment");
HAnimSegment1872.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid47.segments[189] = HAnimSegment1872;

HAnimSegment HAnimSegment1873 = createNode("HAnimSegment");
HAnimSegment1873.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid47.segments[190] = HAnimSegment1873;

HAnimSegment HAnimSegment1874 = createNode("HAnimSegment");
HAnimSegment1874.USE = "hanim_l_ring_middle";
HAnimHumanoid47.segments[191] = HAnimSegment1874;

HAnimSegment HAnimSegment1875 = createNode("HAnimSegment");
HAnimSegment1875.USE = "hanim_r_ring_middle";
HAnimHumanoid47.segments[192] = HAnimSegment1875;

HAnimSegment HAnimSegment1876 = createNode("HAnimSegment");
HAnimSegment1876.USE = "hanim_l_ring_proximal";
HAnimHumanoid47.segments[193] = HAnimSegment1876;

HAnimSegment HAnimSegment1877 = createNode("HAnimSegment");
HAnimSegment1877.USE = "hanim_r_ring_proximal";
HAnimHumanoid47.segments[194] = HAnimSegment1877;

HAnimSegment HAnimSegment1878 = createNode("HAnimSegment");
HAnimSegment1878.USE = "hanim_l_scapula";
HAnimHumanoid47.segments[195] = HAnimSegment1878;

HAnimSegment HAnimSegment1879 = createNode("HAnimSegment");
HAnimSegment1879.USE = "hanim_r_scapula";
HAnimHumanoid47.segments[196] = HAnimSegment1879;

HAnimSegment HAnimSegment1880 = createNode("HAnimSegment");
HAnimSegment1880.USE = "hanim_l_thigh";
HAnimHumanoid47.segments[197] = HAnimSegment1880;

HAnimSegment HAnimSegment1881 = createNode("HAnimSegment");
HAnimSegment1881.USE = "hanim_r_thigh";
HAnimHumanoid47.segments[198] = HAnimSegment1881;

HAnimSegment HAnimSegment1882 = createNode("HAnimSegment");
HAnimSegment1882.USE = "hanim_l_thumb_distal";
HAnimHumanoid47.segments[199] = HAnimSegment1882;

HAnimSegment HAnimSegment1883 = createNode("HAnimSegment");
HAnimSegment1883.USE = "hanim_r_thumb_distal";
HAnimHumanoid47.segments[200] = HAnimSegment1883;

HAnimSegment HAnimSegment1884 = createNode("HAnimSegment");
HAnimSegment1884.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid47.segments[201] = HAnimSegment1884;

HAnimSegment HAnimSegment1885 = createNode("HAnimSegment");
HAnimSegment1885.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid47.segments[202] = HAnimSegment1885;

HAnimSegment HAnimSegment1886 = createNode("HAnimSegment");
HAnimSegment1886.USE = "hanim_l_thumb_proximal";
HAnimHumanoid47.segments[203] = HAnimSegment1886;

HAnimSegment HAnimSegment1887 = createNode("HAnimSegment");
HAnimSegment1887.USE = "hanim_r_thumb_proximal";
HAnimHumanoid47.segments[204] = HAnimSegment1887;

HAnimSegment HAnimSegment1888 = createNode("HAnimSegment");
HAnimSegment1888.USE = "hanim_l_upperarm";
HAnimHumanoid47.segments[205] = HAnimSegment1888;

HAnimSegment HAnimSegment1889 = createNode("HAnimSegment");
HAnimSegment1889.USE = "hanim_r_upperarm";
HAnimHumanoid47.segments[206] = HAnimSegment1889;

HAnimSite HAnimSite1890 = createNode("HAnimSite");
HAnimSite1890.USE = "hanim_crotch_pt";
HAnimHumanoid47.viewpoints[207] = HAnimSite1890;

HAnimSite HAnimSite1891 = createNode("HAnimSite");
HAnimSite1891.USE = "hanim_skull_tip";
HAnimHumanoid47.viewpoints[208] = HAnimSite1891;

HAnimSite HAnimSite1892 = createNode("HAnimSite");
HAnimSite1892.USE = "hanim_sellion_pt";
HAnimHumanoid47.viewpoints[209] = HAnimSite1892;

HAnimSite HAnimSite1893 = createNode("HAnimSite");
HAnimSite1893.USE = "hanim_supramenton_pt";
HAnimHumanoid47.viewpoints[210] = HAnimSite1893;

HAnimSite HAnimSite1894 = createNode("HAnimSite");
HAnimSite1894.USE = "hanim_nuchale_pt";
HAnimHumanoid47.viewpoints[211] = HAnimSite1894;

HAnimSite HAnimSite1895 = createNode("HAnimSite");
HAnimSite1895.USE = "hanim_suprasternale_pt";
HAnimHumanoid47.viewpoints[212] = HAnimSite1895;

HAnimSite HAnimSite1896 = createNode("HAnimSite");
HAnimSite1896.USE = "hanim_cervicale_pt";
HAnimHumanoid47.viewpoints[213] = HAnimSite1896;

HAnimSite HAnimSite1897 = createNode("HAnimSite");
HAnimSite1897.USE = "hanim_substernale_pt";
HAnimHumanoid47.viewpoints[214] = HAnimSite1897;

HAnimSite HAnimSite1898 = createNode("HAnimSite");
HAnimSite1898.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid47.viewpoints[215] = HAnimSite1898;

HAnimSite HAnimSite1899 = createNode("HAnimSite");
HAnimSite1899.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid47.viewpoints[216] = HAnimSite1899;

HAnimSite HAnimSite1900 = createNode("HAnimSite");
HAnimSite1900.USE = "hanim_navel_pt";
HAnimHumanoid47.viewpoints[217] = HAnimSite1900;

HAnimSite HAnimSite1901 = createNode("HAnimSite");
HAnimSite1901.USE = "hanim_l_acromion_pt";
HAnimHumanoid47.viewpoints[218] = HAnimSite1901;

HAnimSite HAnimSite1902 = createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_acromion_pt";
HAnimHumanoid47.viewpoints[219] = HAnimSite1902;

HAnimSite HAnimSite1903 = createNode("HAnimSite");
HAnimSite1903.USE = "hanim_r_asis_pt";
HAnimHumanoid47.viewpoints[220] = HAnimSite1903;

HAnimSite HAnimSite1904 = createNode("HAnimSite");
HAnimSite1904.USE = "hanim_l_asis_pt";
HAnimHumanoid47.viewpoints[221] = HAnimSite1904;

HAnimSite HAnimSite1905 = createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid47.viewpoints[222] = HAnimSite1905;

HAnimSite HAnimSite1906 = createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid47.viewpoints[223] = HAnimSite1906;

HAnimSite HAnimSite1907 = createNode("HAnimSite");
HAnimSite1907.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid47.viewpoints[224] = HAnimSite1907;

HAnimSite HAnimSite1908 = createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid47.viewpoints[225] = HAnimSite1908;

HAnimSite HAnimSite1909 = createNode("HAnimSite");
HAnimSite1909.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid47.viewpoints[226] = HAnimSite1909;

HAnimSite HAnimSite1910 = createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid47.viewpoints[227] = HAnimSite1910;

HAnimSite HAnimSite1911 = createNode("HAnimSite");
HAnimSite1911.USE = "hanim_l_clavicale_pt";
HAnimHumanoid47.viewpoints[228] = HAnimSite1911;

HAnimSite HAnimSite1912 = createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_clavicale_pt";
HAnimHumanoid47.viewpoints[229] = HAnimSite1912;

HAnimSite HAnimSite1913 = createNode("HAnimSite");
HAnimSite1913.USE = "hanim_l_dactylion_pt";
HAnimHumanoid47.viewpoints[230] = HAnimSite1913;

HAnimSite HAnimSite1914 = createNode("HAnimSite");
HAnimSite1914.USE = "hanim_r_dactylion_pt";
HAnimHumanoid47.viewpoints[231] = HAnimSite1914;

HAnimSite HAnimSite1915 = createNode("HAnimSite");
HAnimSite1915.USE = "hanim_l_digit2_pt";
HAnimHumanoid47.viewpoints[232] = HAnimSite1915;

HAnimSite HAnimSite1916 = createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_digit2_pt";
HAnimHumanoid47.viewpoints[233] = HAnimSite1916;

HAnimSite HAnimSite1917 = createNode("HAnimSite");
HAnimSite1917.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid47.viewpoints[234] = HAnimSite1917;

HAnimSite HAnimSite1918 = createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid47.viewpoints[235] = HAnimSite1918;

HAnimSite HAnimSite1919 = createNode("HAnimSite");
HAnimSite1919.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid47.viewpoints[236] = HAnimSite1919;

HAnimSite HAnimSite1920 = createNode("HAnimSite");
HAnimSite1920.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid47.viewpoints[237] = HAnimSite1920;

HAnimSite HAnimSite1921 = createNode("HAnimSite");
HAnimSite1921.USE = "hanim_l_forefoot_tip";
HAnimHumanoid47.viewpoints[238] = HAnimSite1921;

HAnimSite HAnimSite1922 = createNode("HAnimSite");
HAnimSite1922.USE = "hanim_r_forefoot_tip";
HAnimHumanoid47.viewpoints[239] = HAnimSite1922;

HAnimSite HAnimSite1923 = createNode("HAnimSite");
HAnimSite1923.USE = "hanim_r_gonion_pt";
HAnimHumanoid47.viewpoints[240] = HAnimSite1923;

HAnimSite HAnimSite1924 = createNode("HAnimSite");
HAnimSite1924.USE = "hanim_l_gonion_pt";
HAnimHumanoid47.viewpoints[241] = HAnimSite1924;

HAnimSite HAnimSite1925 = createNode("HAnimSite");
HAnimSite1925.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid47.viewpoints[242] = HAnimSite1925;

HAnimSite HAnimSite1926 = createNode("HAnimSite");
HAnimSite1926.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid47.viewpoints[243] = HAnimSite1926;

HAnimSite HAnimSite1927 = createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid47.viewpoints[244] = HAnimSite1927;

HAnimSite HAnimSite1928 = createNode("HAnimSite");
HAnimSite1928.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid47.viewpoints[245] = HAnimSite1928;

HAnimSite HAnimSite1929 = createNode("HAnimSite");
HAnimSite1929.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid47.viewpoints[246] = HAnimSite1929;

HAnimSite HAnimSite1930 = createNode("HAnimSite");
HAnimSite1930.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid47.viewpoints[247] = HAnimSite1930;

HAnimSite HAnimSite1931 = createNode("HAnimSite");
HAnimSite1931.USE = "hanim_l_index_distal_tip";
HAnimHumanoid47.viewpoints[248] = HAnimSite1931;

HAnimSite HAnimSite1932 = createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_index_distal_tip";
HAnimHumanoid47.viewpoints[249] = HAnimSite1932;

HAnimSite HAnimSite1933 = createNode("HAnimSite");
HAnimSite1933.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid47.viewpoints[250] = HAnimSite1933;

HAnimSite HAnimSite1934 = createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid47.viewpoints[251] = HAnimSite1934;

HAnimSite HAnimSite1935 = createNode("HAnimSite");
HAnimSite1935.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid47.viewpoints[252] = HAnimSite1935;

HAnimSite HAnimSite1936 = createNode("HAnimSite");
HAnimSite1936.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid47.viewpoints[253] = HAnimSite1936;

HAnimSite HAnimSite1937 = createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid47.viewpoints[254] = HAnimSite1937;

HAnimSite HAnimSite1938 = createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid47.viewpoints[255] = HAnimSite1938;

HAnimSite HAnimSite1939 = createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid47.viewpoints[256] = HAnimSite1939;

HAnimSite HAnimSite1940 = createNode("HAnimSite");
HAnimSite1940.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid47.viewpoints[257] = HAnimSite1940;

HAnimSite HAnimSite1941 = createNode("HAnimSite");
HAnimSite1941.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid47.viewpoints[258] = HAnimSite1941;

HAnimSite HAnimSite1942 = createNode("HAnimSite");
HAnimSite1942.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid47.viewpoints[259] = HAnimSite1942;

HAnimSite HAnimSite1943 = createNode("HAnimSite");
HAnimSite1943.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid47.viewpoints[260] = HAnimSite1943;

HAnimSite HAnimSite1944 = createNode("HAnimSite");
HAnimSite1944.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid47.viewpoints[261] = HAnimSite1944;

HAnimSite HAnimSite1945 = createNode("HAnimSite");
HAnimSite1945.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid47.viewpoints[262] = HAnimSite1945;

HAnimSite HAnimSite1946 = createNode("HAnimSite");
HAnimSite1946.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid47.viewpoints[263] = HAnimSite1946;

HAnimSite HAnimSite1947 = createNode("HAnimSite");
HAnimSite1947.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid47.viewpoints[264] = HAnimSite1947;

HAnimSite HAnimSite1948 = createNode("HAnimSite");
HAnimSite1948.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid47.viewpoints[265] = HAnimSite1948;

HAnimSite HAnimSite1949 = createNode("HAnimSite");
HAnimSite1949.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid47.viewpoints[266] = HAnimSite1949;

HAnimSite HAnimSite1950 = createNode("HAnimSite");
HAnimSite1950.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid47.viewpoints[267] = HAnimSite1950;

HAnimSite HAnimSite1951 = createNode("HAnimSite");
HAnimSite1951.USE = "hanim_r_neck_base_pt";
HAnimHumanoid47.viewpoints[268] = HAnimSite1951;

HAnimSite HAnimSite1952 = createNode("HAnimSite");
HAnimSite1952.USE = "hanim_l_neck_base_pt";
HAnimHumanoid47.viewpoints[269] = HAnimSite1952;

HAnimSite HAnimSite1953 = createNode("HAnimSite");
HAnimSite1953.USE = "hanim_l_olecranon_pt";
HAnimHumanoid47.viewpoints[270] = HAnimSite1953;

HAnimSite HAnimSite1954 = createNode("HAnimSite");
HAnimSite1954.USE = "hanim_r_olecranon_pt";
HAnimHumanoid47.viewpoints[271] = HAnimSite1954;

HAnimSite HAnimSite1955 = createNode("HAnimSite");
HAnimSite1955.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid47.viewpoints[272] = HAnimSite1955;

HAnimSite HAnimSite1956 = createNode("HAnimSite");
HAnimSite1956.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid47.viewpoints[273] = HAnimSite1956;

HAnimSite HAnimSite1957 = createNode("HAnimSite");
HAnimSite1957.USE = "hanim_r_psis_pt";
HAnimHumanoid47.viewpoints[274] = HAnimSite1957;

HAnimSite HAnimSite1958 = createNode("HAnimSite");
HAnimSite1958.USE = "hanim_l_psis_pt";
HAnimHumanoid47.viewpoints[275] = HAnimSite1958;

HAnimSite HAnimSite1959 = createNode("HAnimSite");
HAnimSite1959.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid47.viewpoints[276] = HAnimSite1959;

HAnimSite HAnimSite1960 = createNode("HAnimSite");
HAnimSite1960.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid47.viewpoints[277] = HAnimSite1960;

HAnimSite HAnimSite1961 = createNode("HAnimSite");
HAnimSite1961.USE = "hanim_l_radiale_pt";
HAnimHumanoid47.viewpoints[278] = HAnimSite1961;

HAnimSite HAnimSite1962 = createNode("HAnimSite");
HAnimSite1962.USE = "hanim_r_radiale_pt";
HAnimHumanoid47.viewpoints[279] = HAnimSite1962;

HAnimSite HAnimSite1963 = createNode("HAnimSite");
HAnimSite1963.USE = "hanim_r_rib10_pt";
HAnimHumanoid47.viewpoints[280] = HAnimSite1963;

HAnimSite HAnimSite1964 = createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_rib10_pt";
HAnimHumanoid47.viewpoints[281] = HAnimSite1964;

HAnimSite HAnimSite1965 = createNode("HAnimSite");
HAnimSite1965.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid47.viewpoints[282] = HAnimSite1965;

HAnimSite HAnimSite1966 = createNode("HAnimSite");
HAnimSite1966.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid47.viewpoints[283] = HAnimSite1966;

HAnimSite HAnimSite1967 = createNode("HAnimSite");
HAnimSite1967.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid47.viewpoints[284] = HAnimSite1967;

HAnimSite HAnimSite1968 = createNode("HAnimSite");
HAnimSite1968.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid47.viewpoints[285] = HAnimSite1968;

HAnimSite HAnimSite1969 = createNode("HAnimSite");
HAnimSite1969.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid47.viewpoints[286] = HAnimSite1969;

HAnimSite HAnimSite1970 = createNode("HAnimSite");
HAnimSite1970.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid47.viewpoints[287] = HAnimSite1970;

HAnimSite HAnimSite1971 = createNode("HAnimSite");
HAnimSite1971.USE = "hanim_r_thelion_pt";
HAnimHumanoid47.viewpoints[288] = HAnimSite1971;

HAnimSite HAnimSite1972 = createNode("HAnimSite");
HAnimSite1972.USE = "hanim_l_thelion_pt";
HAnimHumanoid47.viewpoints[289] = HAnimSite1972;

HAnimSite HAnimSite1973 = createNode("HAnimSite");
HAnimSite1973.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid47.viewpoints[290] = HAnimSite1973;

HAnimSite HAnimSite1974 = createNode("HAnimSite");
HAnimSite1974.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid47.viewpoints[291] = HAnimSite1974;

HAnimSite HAnimSite1975 = createNode("HAnimSite");
HAnimSite1975.USE = "hanim_r_tragion_pt";
HAnimHumanoid47.viewpoints[292] = HAnimSite1975;

HAnimSite HAnimSite1976 = createNode("HAnimSite");
HAnimSite1976.USE = "hanim_l_tragion_pt";
HAnimHumanoid47.viewpoints[293] = HAnimSite1976;

HAnimSite HAnimSite1977 = createNode("HAnimSite");
HAnimSite1977.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid47.viewpoints[294] = HAnimSite1977;

HAnimSite HAnimSite1978 = createNode("HAnimSite");
HAnimSite1978.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid47.viewpoints[295] = HAnimSite1978;

HAnimSite HAnimSite1979 = createNode("HAnimSite");
HAnimSite1979.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid47.viewpoints[296] = HAnimSite1979;

HAnimSite HAnimSite1980 = createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid47.viewpoints[297] = HAnimSite1980;

children[12] = HAnimHumanoid47;

}
