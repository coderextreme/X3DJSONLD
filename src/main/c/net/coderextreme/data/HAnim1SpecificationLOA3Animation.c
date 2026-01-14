#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "HAnimSpecificationLOA3Animation.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "reference";
meta5.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "reference";
meta6.content = "HAnimSpecificationLOA3Illustrated.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "HAnimSpecificationLOA3Invisible.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "created";
meta15.content = "24 April 2013";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "modified";
meta16.content = "Tue, 09 Sep 2025 19:39:08 GMT";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "error";
meta17.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "Image";
meta18.content = "HAnimSpecificationLOA3MotionH3DViewer.png";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Image";
meta19.content = "HAnimSpecificationLOA3MotionInstantReality.png";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "HAnimSpecificationLOA3MotionOctagaVS.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "HAnimSpecificationLOA3MotionView3dscene.png";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "Image";
meta22.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "Image";
meta23.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "Image";
meta24.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "creator";
meta25.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "translator";
meta26.content = "Don Brutzman and Joe Williams";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "generator";
meta27.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "generator";
meta28.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[26] = meta28;

head = head1;

Background Background30 = createNode("Background");
Background30.skyColor = new MFColor(new float[0.3,0.3,0.3]);
children = new MFNode();

children[0] = Background30;

NavigationInfo NavigationInfo31 = createNode("NavigationInfo");
children[1] = NavigationInfo31;

Group Group32 = createNode("Group");
Group32.DEF = "Original_WorldInfo";
WorldInfo WorldInfo33 = createNode("WorldInfo");
WorldInfo33.title = "HANIM 200x Default Joint Centers, LOA3";
WorldInfo33.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group32.children = new MFNode();

Group32.children[0] = WorldInfo33;

children[2] = Group32;

Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.description = "Humanoid LOA 3 Front";
Viewpoint34.position = new SFVec3f(new float[0,0.4,4]);
Viewpoint34.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[3] = Viewpoint34;

Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.description = "Humanoid LOA 3 Front Close";
Viewpoint35.position = new SFVec3f(new float[0,0.8,2]);
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[4] = Viewpoint35;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.description = "Humanoid LOA 3 Front Closer";
Viewpoint36.position = new SFVec3f(new float[0,1.2,1]);
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[5] = Viewpoint36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.description = "Humanoid LOA 3 Front Face";
Viewpoint37.position = new SFVec3f(new float[0,1.63,1]);
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
children[6] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.description = "Humanoid LOA 3 Right Side";
Viewpoint38.position = new SFVec3f(new float[2.6,0.8,0]);
Viewpoint38.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[7] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.description = "Humanoid LOA 3 Right Side Close";
Viewpoint39.position = new SFVec3f(new float[1,0.8,0.5]);
Viewpoint39.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[8] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.description = "Humanoid LOA 3 Left Side Close";
Viewpoint40.position = new SFVec3f(new float[-1,0.8,0.5]);
Viewpoint40.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[9] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.description = "Humanoid LOA 3 Left Side";
Viewpoint41.position = new SFVec3f(new float[-2.6,0.8,0]);
Viewpoint41.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[10] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.description = "Humanoid LOA 3 Top";
Viewpoint42.position = new SFVec3f(new float[0,3.5,0]);
Viewpoint42.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[11] = Viewpoint42;

HAnimHumanoid HAnimHumanoid43 = createNode("HAnimHumanoid");
HAnimHumanoid43.DEF = "hanim_humanoid";
HAnimHumanoid43.name = "humanoid";
HAnimHumanoid43.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid43.version = "1.0";
HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.DEF = "hanim_humanoid_root";
HAnimJoint44.name = "humanoid_root";
HAnimJoint44.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimSegment HAnimSegment45 = createNode("HAnimSegment");
HAnimSegment45.DEF = "hanim_sacrum";
HAnimSegment45.name = "sacrum";
TouchSensor TouchSensor46 = createNode("TouchSensor");
TouchSensor46.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = TouchSensor46;

Transform Transform47 = createNode("Transform");
Transform47.translation = new SFVec3f(new float[0,0.824,0.0277]);
Shape Shape48 = createNode("Shape");
Shape48.DEF = "HAnimJointShape";
Appearance Appearance49 = createNode("Appearance");
Appearance49.DEF = "HAnimJointAppearance";
Material Material50 = createNode("Material");
Material50.diffuseColor = new SFColor(new float[1,0.5,0]);
Material50.transparency = 0.5;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

Sphere Sphere51 = createNode("Sphere");
Sphere51.radius = 0.006;
Shape48.geometry = Sphere51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

HAnimSegment45.children[1] = Transform47;

Shape Shape52 = createNode("Shape");
LineSet LineSet53 = createNode("LineSet");
LineSet53.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA54 = createNode("ColorRGBA");
ColorRGBA54.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA54.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet53.color = ColorRGBA54;

Coordinate Coordinate55 = createNode("Coordinate");
Coordinate55.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet53.coord = Coordinate55;

Shape52.geometry = LineSet53;

HAnimSegment45.children[2] = Shape52;

Shape Shape56 = createNode("Shape");
LineSet LineSet57 = createNode("LineSet");
LineSet57.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA58 = createNode("ColorRGBA");
ColorRGBA58.USE = "HAnimSegmentLineColorRGBA";
LineSet57.color = ColorRGBA58;

Coordinate Coordinate59 = createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet57.coord = Coordinate59;

Shape56.geometry = LineSet57;

HAnimSegment45.children[3] = Shape56;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.DEF = "hanim_sacroiliac";
HAnimJoint60.name = "sacroiliac";
HAnimJoint60.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment61 = createNode("HAnimSegment");
HAnimSegment61.DEF = "hanim_pelvis";
HAnimSegment61.name = "pelvis";
TouchSensor TouchSensor62 = createNode("TouchSensor");
TouchSensor62.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment61.children = new MFNode();

HAnimSegment61.children[0] = TouchSensor62;

Transform Transform63 = createNode("Transform");
Transform63.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape64 = createNode("Shape");
Shape64.USE = "HAnimJointShape";
Transform63.child = new undefined();

Transform63.child[0] = Shape64;

HAnimSegment61.children[1] = Transform63;

Shape Shape65 = createNode("Shape");
LineSet LineSet66 = createNode("LineSet");
LineSet66.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA67 = createNode("ColorRGBA");
ColorRGBA67.USE = "HAnimSegmentLineColorRGBA";
LineSet66.color = ColorRGBA67;

Coordinate Coordinate68 = createNode("Coordinate");
Coordinate68.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet66.coord = Coordinate68;

Shape65.geometry = LineSet66;

HAnimSegment61.children[2] = Shape65;

Shape Shape69 = createNode("Shape");
LineSet LineSet70 = createNode("LineSet");
LineSet70.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA71 = createNode("ColorRGBA");
ColorRGBA71.USE = "HAnimSegmentLineColorRGBA";
LineSet70.color = ColorRGBA71;

Coordinate Coordinate72 = createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet70.coord = Coordinate72;

Shape69.geometry = LineSet70;

HAnimSegment61.children[3] = Shape69;

Shape Shape73 = createNode("Shape");
LineSet LineSet74 = createNode("LineSet");
LineSet74.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA75 = createNode("ColorRGBA");
ColorRGBA75.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA75.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet74.color = ColorRGBA75;

Coordinate Coordinate76 = createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet74.coord = Coordinate76;

Shape73.geometry = LineSet74;

HAnimSegment61.children[4] = Shape73;

Shape Shape77 = createNode("Shape");
LineSet LineSet78 = createNode("LineSet");
LineSet78.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA79 = createNode("ColorRGBA");
ColorRGBA79.USE = "HAnimSiteLineColorRGBA";
LineSet78.color = ColorRGBA79;

Coordinate Coordinate80 = createNode("Coordinate");
Coordinate80.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet78.coord = Coordinate80;

Shape77.geometry = LineSet78;

HAnimSegment61.children[5] = Shape77;

Shape Shape81 = createNode("Shape");
LineSet LineSet82 = createNode("LineSet");
LineSet82.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA83 = createNode("ColorRGBA");
ColorRGBA83.USE = "HAnimSiteLineColorRGBA";
LineSet82.color = ColorRGBA83;

Coordinate Coordinate84 = createNode("Coordinate");
Coordinate84.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet82.coord = Coordinate84;

Shape81.geometry = LineSet82;

HAnimSegment61.children[6] = Shape81;

Shape Shape85 = createNode("Shape");
LineSet LineSet86 = createNode("LineSet");
LineSet86.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA87 = createNode("ColorRGBA");
ColorRGBA87.USE = "HAnimSiteLineColorRGBA";
LineSet86.color = ColorRGBA87;

Coordinate Coordinate88 = createNode("Coordinate");
Coordinate88.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet86.coord = Coordinate88;

Shape85.geometry = LineSet86;

HAnimSegment61.children[7] = Shape85;

Shape Shape89 = createNode("Shape");
LineSet LineSet90 = createNode("LineSet");
LineSet90.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA91 = createNode("ColorRGBA");
ColorRGBA91.USE = "HAnimSiteLineColorRGBA";
LineSet90.color = ColorRGBA91;

Coordinate Coordinate92 = createNode("Coordinate");
Coordinate92.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet90.coord = Coordinate92;

Shape89.geometry = LineSet90;

HAnimSegment61.children[8] = Shape89;

Shape Shape93 = createNode("Shape");
LineSet LineSet94 = createNode("LineSet");
LineSet94.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA95 = createNode("ColorRGBA");
ColorRGBA95.USE = "HAnimSiteLineColorRGBA";
LineSet94.color = ColorRGBA95;

Coordinate Coordinate96 = createNode("Coordinate");
Coordinate96.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet94.coord = Coordinate96;

Shape93.geometry = LineSet94;

HAnimSegment61.children[9] = Shape93;

Shape Shape97 = createNode("Shape");
LineSet LineSet98 = createNode("LineSet");
LineSet98.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA99 = createNode("ColorRGBA");
ColorRGBA99.USE = "HAnimSiteLineColorRGBA";
LineSet98.color = ColorRGBA99;

Coordinate Coordinate100 = createNode("Coordinate");
Coordinate100.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet98.coord = Coordinate100;

Shape97.geometry = LineSet98;

HAnimSegment61.children[10] = Shape97;

Shape Shape101 = createNode("Shape");
LineSet LineSet102 = createNode("LineSet");
LineSet102.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA103 = createNode("ColorRGBA");
ColorRGBA103.USE = "HAnimSiteLineColorRGBA";
LineSet102.color = ColorRGBA103;

Coordinate Coordinate104 = createNode("Coordinate");
Coordinate104.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet102.coord = Coordinate104;

Shape101.geometry = LineSet102;

HAnimSegment61.children[11] = Shape101;

Shape Shape105 = createNode("Shape");
LineSet LineSet106 = createNode("LineSet");
LineSet106.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA107 = createNode("ColorRGBA");
ColorRGBA107.USE = "HAnimSiteLineColorRGBA";
LineSet106.color = ColorRGBA107;

Coordinate Coordinate108 = createNode("Coordinate");
Coordinate108.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet106.coord = Coordinate108;

Shape105.geometry = LineSet106;

HAnimSegment61.children[12] = Shape105;

HAnimSite HAnimSite109 = createNode("HAnimSite");
HAnimSite109.DEF = "hanim_r_iliocristale_pt";
HAnimSite109.name = "r_iliocristale_pt";
HAnimSite109.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor110 = createNode("TouchSensor");
TouchSensor110.description = "HAnimSite r_iliocristale";
HAnimSite109.children = new MFNode();

HAnimSite109.children[0] = TouchSensor110;

Shape Shape111 = createNode("Shape");
Shape111.DEF = "HAnimSiteShape";
Appearance Appearance112 = createNode("Appearance");
Material Material113 = createNode("Material");
Material113.diffuseColor = new SFColor(new float[1,0,0]);
Appearance112.material = Material113;

Shape111.appearance = Appearance112;

IndexedFaceSet IndexedFaceSet114 = createNode("IndexedFaceSet");
IndexedFaceSet114.DEF = "DiamondIFS";
IndexedFaceSet114.solid = False;
IndexedFaceSet114.creaseAngle = 0.5;
IndexedFaceSet114.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate115 = createNode("Coordinate");
Coordinate115.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet114.coord = Coordinate115;

Shape111.geometry = IndexedFaceSet114;

HAnimSite109.children[1] = Shape111;

HAnimSegment61.children[13] = HAnimSite109;

HAnimSite HAnimSite116 = createNode("HAnimSite");
HAnimSite116.DEF = "hanim_r_trochanterion_pt";
HAnimSite116.name = "r_trochanterion_pt";
HAnimSite116.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor117 = createNode("TouchSensor");
TouchSensor117.description = "HAnimSite r_trochanterion";
HAnimSite116.children = new MFNode();

HAnimSite116.children[0] = TouchSensor117;

Shape Shape118 = createNode("Shape");
Shape118.USE = "HAnimSiteShape";
HAnimSite116.children[1] = Shape118;

HAnimSegment61.children[14] = HAnimSite116;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.DEF = "hanim_l_iliocristale_pt";
HAnimSite119.name = "l_iliocristale_pt";
HAnimSite119.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor120 = createNode("TouchSensor");
TouchSensor120.description = "HAnimSite l_iliocristale";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = TouchSensor120;

Shape Shape121 = createNode("Shape");
Shape121.USE = "HAnimSiteShape";
HAnimSite119.children[1] = Shape121;

HAnimSegment61.children[15] = HAnimSite119;

HAnimSite HAnimSite122 = createNode("HAnimSite");
HAnimSite122.DEF = "hanim_l_trochanterion_pt";
HAnimSite122.name = "l_trochanterion_pt";
HAnimSite122.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor123 = createNode("TouchSensor");
TouchSensor123.description = "HAnimSite l_trochanterion";
HAnimSite122.children = new MFNode();

HAnimSite122.children[0] = TouchSensor123;

Shape Shape124 = createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122.children[1] = Shape124;

HAnimSegment61.children[16] = HAnimSite122;

HAnimSite HAnimSite125 = createNode("HAnimSite");
HAnimSite125.DEF = "hanim_r_asis_pt";
HAnimSite125.name = "r_asis_pt";
HAnimSite125.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor126 = createNode("TouchSensor");
TouchSensor126.description = "HAnimSite r_asis";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = TouchSensor126;

Shape Shape127 = createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125.children[1] = Shape127;

HAnimSegment61.children[17] = HAnimSite125;

HAnimSite HAnimSite128 = createNode("HAnimSite");
HAnimSite128.DEF = "hanim_l_asis_pt";
HAnimSite128.name = "l_asis_pt";
HAnimSite128.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor129 = createNode("TouchSensor");
TouchSensor129.description = "HAnimSite l_asis";
HAnimSite128.children = new MFNode();

HAnimSite128.children[0] = TouchSensor129;

Shape Shape130 = createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128.children[1] = Shape130;

HAnimSegment61.children[18] = HAnimSite128;

HAnimSite HAnimSite131 = createNode("HAnimSite");
HAnimSite131.DEF = "hanim_r_psis_pt";
HAnimSite131.name = "r_psis_pt";
HAnimSite131.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor132 = createNode("TouchSensor");
TouchSensor132.description = "HAnimSite r_psis";
HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = TouchSensor132;

Shape Shape133 = createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131.children[1] = Shape133;

HAnimSegment61.children[19] = HAnimSite131;

HAnimSite HAnimSite134 = createNode("HAnimSite");
HAnimSite134.DEF = "hanim_l_psis_pt";
HAnimSite134.name = "l_psis_pt";
HAnimSite134.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor135 = createNode("TouchSensor");
TouchSensor135.description = "HAnimSite l_psis";
HAnimSite134.children = new MFNode();

HAnimSite134.children[0] = TouchSensor135;

Shape Shape136 = createNode("Shape");
Shape136.USE = "HAnimSiteShape";
HAnimSite134.children[1] = Shape136;

HAnimSegment61.children[20] = HAnimSite134;

HAnimSite HAnimSite137 = createNode("HAnimSite");
HAnimSite137.DEF = "hanim_crotch_pt";
HAnimSite137.name = "crotch_pt";
HAnimSite137.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor138 = createNode("TouchSensor");
TouchSensor138.description = "HAnimSite crotch";
HAnimSite137.children = new MFNode();

HAnimSite137.children[0] = TouchSensor138;

Shape Shape139 = createNode("Shape");
Shape139.USE = "HAnimSiteShape";
HAnimSite137.children[1] = Shape139;

HAnimSegment61.children[21] = HAnimSite137;

HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimSegment61;

HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.DEF = "hanim_l_hip";
HAnimJoint140.name = "l_hip";
HAnimJoint140.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment141 = createNode("HAnimSegment");
HAnimSegment141.DEF = "hanim_l_thigh";
HAnimSegment141.name = "l_thigh";
TouchSensor TouchSensor142 = createNode("TouchSensor");
TouchSensor142.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment141.children = new MFNode();

HAnimSegment141.children[0] = TouchSensor142;

Transform Transform143 = createNode("Transform");
Transform143.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape144 = createNode("Shape");
Shape144.USE = "HAnimJointShape";
Transform143.child = new undefined();

Transform143.child[0] = Shape144;

HAnimSegment141.children[1] = Transform143;

Shape Shape145 = createNode("Shape");
LineSet LineSet146 = createNode("LineSet");
LineSet146.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA147 = createNode("ColorRGBA");
ColorRGBA147.USE = "HAnimSegmentLineColorRGBA";
LineSet146.color = ColorRGBA147;

Coordinate Coordinate148 = createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet146.coord = Coordinate148;

Shape145.geometry = LineSet146;

HAnimSegment141.children[2] = Shape145;

Shape Shape149 = createNode("Shape");
LineSet LineSet150 = createNode("LineSet");
LineSet150.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA151 = createNode("ColorRGBA");
ColorRGBA151.USE = "HAnimSiteLineColorRGBA";
LineSet150.color = ColorRGBA151;

Coordinate Coordinate152 = createNode("Coordinate");
Coordinate152.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet150.coord = Coordinate152;

Shape149.geometry = LineSet150;

HAnimSegment141.children[3] = Shape149;

Shape Shape153 = createNode("Shape");
LineSet LineSet154 = createNode("LineSet");
LineSet154.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA155 = createNode("ColorRGBA");
ColorRGBA155.USE = "HAnimSiteLineColorRGBA";
LineSet154.color = ColorRGBA155;

Coordinate Coordinate156 = createNode("Coordinate");
Coordinate156.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet154.coord = Coordinate156;

Shape153.geometry = LineSet154;

HAnimSegment141.children[4] = Shape153;

Shape Shape157 = createNode("Shape");
LineSet LineSet158 = createNode("LineSet");
LineSet158.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA159 = createNode("ColorRGBA");
ColorRGBA159.USE = "HAnimSiteLineColorRGBA";
LineSet158.color = ColorRGBA159;

Coordinate Coordinate160 = createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet158.coord = Coordinate160;

Shape157.geometry = LineSet158;

HAnimSegment141.children[5] = Shape157;

HAnimSite HAnimSite161 = createNode("HAnimSite");
HAnimSite161.DEF = "hanim_l_knee_crease_pt";
HAnimSite161.name = "l_knee_crease_pt";
HAnimSite161.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor162 = createNode("TouchSensor");
TouchSensor162.description = "HAnimSite l_knee_crease";
HAnimSite161.children = new MFNode();

HAnimSite161.children[0] = TouchSensor162;

Shape Shape163 = createNode("Shape");
Shape163.USE = "HAnimSiteShape";
HAnimSite161.children[1] = Shape163;

HAnimSegment141.children[6] = HAnimSite161;

HAnimSite HAnimSite164 = createNode("HAnimSite");
HAnimSite164.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite164.name = "l_femoral_lateral_epicn_pt";
HAnimSite164.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor165 = createNode("TouchSensor");
TouchSensor165.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite164.children = new MFNode();

HAnimSite164.children[0] = TouchSensor165;

Shape Shape166 = createNode("Shape");
Shape166.USE = "HAnimSiteShape";
HAnimSite164.children[1] = Shape166;

HAnimSegment141.children[7] = HAnimSite164;

HAnimSite HAnimSite167 = createNode("HAnimSite");
HAnimSite167.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite167.name = "l_femoral_medial_epicn_pt";
HAnimSite167.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor168 = createNode("TouchSensor");
TouchSensor168.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite167.children = new MFNode();

HAnimSite167.children[0] = TouchSensor168;

Shape Shape169 = createNode("Shape");
Shape169.USE = "HAnimSiteShape";
HAnimSite167.children[1] = Shape169;

HAnimSegment141.children[8] = HAnimSite167;

HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.DEF = "hanim_l_knee";
HAnimJoint170.name = "l_knee";
HAnimJoint170.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment171 = createNode("HAnimSegment");
HAnimSegment171.DEF = "hanim_l_calf";
HAnimSegment171.name = "l_calf";
TouchSensor TouchSensor172 = createNode("TouchSensor");
TouchSensor172.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment171.children = new MFNode();

HAnimSegment171.children[0] = TouchSensor172;

Transform Transform173 = createNode("Transform");
Transform173.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape174 = createNode("Shape");
Shape174.USE = "HAnimJointShape";
Transform173.child = new undefined();

Transform173.child[0] = Shape174;

HAnimSegment171.children[1] = Transform173;

Shape Shape175 = createNode("Shape");
LineSet LineSet176 = createNode("LineSet");
LineSet176.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA177 = createNode("ColorRGBA");
ColorRGBA177.USE = "HAnimSegmentLineColorRGBA";
LineSet176.color = ColorRGBA177;

Coordinate Coordinate178 = createNode("Coordinate");
Coordinate178.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet176.coord = Coordinate178;

Shape175.geometry = LineSet176;

HAnimSegment171.children[2] = Shape175;

HAnimJoint170.children = new MFNode();

HAnimJoint170.children[0] = HAnimSegment171;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.DEF = "hanim_l_ankle";
HAnimJoint179.name = "l_ankle";
HAnimJoint179.rotation = new SFRotation(new float[-0.999999999999999,0,0,0.486193023827777]);
HAnimJoint179.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment180 = createNode("HAnimSegment");
HAnimSegment180.DEF = "hanim_l_hindfoot";
HAnimSegment180.name = "l_hindfoot";
TouchSensor TouchSensor181 = createNode("TouchSensor");
TouchSensor181.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment180.children = new MFNode();

HAnimSegment180.children[0] = TouchSensor181;

Transform Transform182 = createNode("Transform");
Transform182.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape183 = createNode("Shape");
Shape183.USE = "HAnimJointShape";
Transform182.child = new undefined();

Transform182.child[0] = Shape183;

HAnimSegment180.children[1] = Transform182;

Shape Shape184 = createNode("Shape");
LineSet LineSet185 = createNode("LineSet");
LineSet185.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA186 = createNode("ColorRGBA");
ColorRGBA186.USE = "HAnimSegmentLineColorRGBA";
LineSet185.color = ColorRGBA186;

Coordinate Coordinate187 = createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet185.coord = Coordinate187;

Shape184.geometry = LineSet185;

HAnimSegment180.children[2] = Shape184;

Shape Shape188 = createNode("Shape");
LineSet LineSet189 = createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA190 = createNode("ColorRGBA");
ColorRGBA190.USE = "HAnimSiteLineColorRGBA";
LineSet189.color = ColorRGBA190;

Coordinate Coordinate191 = createNode("Coordinate");
Coordinate191.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet189.coord = Coordinate191;

Shape188.geometry = LineSet189;

HAnimSegment180.children[3] = Shape188;

Shape Shape192 = createNode("Shape");
LineSet LineSet193 = createNode("LineSet");
LineSet193.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA194 = createNode("ColorRGBA");
ColorRGBA194.USE = "HAnimSiteLineColorRGBA";
LineSet193.color = ColorRGBA194;

Coordinate Coordinate195 = createNode("Coordinate");
Coordinate195.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet193.coord = Coordinate195;

Shape192.geometry = LineSet193;

HAnimSegment180.children[4] = Shape192;

Shape Shape196 = createNode("Shape");
LineSet LineSet197 = createNode("LineSet");
LineSet197.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA198 = createNode("ColorRGBA");
ColorRGBA198.USE = "HAnimSiteLineColorRGBA";
LineSet197.color = ColorRGBA198;

Coordinate Coordinate199 = createNode("Coordinate");
Coordinate199.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet197.coord = Coordinate199;

Shape196.geometry = LineSet197;

HAnimSegment180.children[5] = Shape196;

Shape Shape200 = createNode("Shape");
LineSet LineSet201 = createNode("LineSet");
LineSet201.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA202 = createNode("ColorRGBA");
ColorRGBA202.USE = "HAnimSiteLineColorRGBA";
LineSet201.color = ColorRGBA202;

Coordinate Coordinate203 = createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet201.coord = Coordinate203;

Shape200.geometry = LineSet201;

HAnimSegment180.children[6] = Shape200;

HAnimSite HAnimSite204 = createNode("HAnimSite");
HAnimSite204.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite204.name = "l_lateral_malleolus_pt";
HAnimSite204.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor205 = createNode("TouchSensor");
TouchSensor205.description = "HAnimSite l_lateral_malleolus";
HAnimSite204.children = new MFNode();

HAnimSite204.children[0] = TouchSensor205;

Shape Shape206 = createNode("Shape");
Shape206.USE = "HAnimSiteShape";
HAnimSite204.children[1] = Shape206;

HAnimSegment180.children[7] = HAnimSite204;

HAnimSite HAnimSite207 = createNode("HAnimSite");
HAnimSite207.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite207.name = "l_medial_malleolus_pt";
HAnimSite207.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor208 = createNode("TouchSensor");
TouchSensor208.description = "HAnimSite l_medial_malleolus";
HAnimSite207.children = new MFNode();

HAnimSite207.children[0] = TouchSensor208;

Shape Shape209 = createNode("Shape");
Shape209.USE = "HAnimSiteShape";
HAnimSite207.children[1] = Shape209;

HAnimSegment180.children[8] = HAnimSite207;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.DEF = "hanim_l_sphyrion_pt";
HAnimSite210.name = "l_sphyrion_pt";
HAnimSite210.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor211 = createNode("TouchSensor");
TouchSensor211.description = "HAnimSite l_sphyrion";
HAnimSite210.children = new MFNode();

HAnimSite210.children[0] = TouchSensor211;

Shape Shape212 = createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210.children[1] = Shape212;

HAnimSegment180.children[9] = HAnimSite210;

HAnimSite HAnimSite213 = createNode("HAnimSite");
HAnimSite213.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite213.name = "l_calcaneous_post_pt";
HAnimSite213.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor214 = createNode("TouchSensor");
TouchSensor214.description = "HAnimSite l_calcaneous_post";
HAnimSite213.children = new MFNode();

HAnimSite213.children[0] = TouchSensor214;

Shape Shape215 = createNode("Shape");
Shape215.USE = "HAnimSiteShape";
HAnimSite213.children[1] = Shape215;

HAnimSegment180.children[10] = HAnimSite213;

HAnimJoint179.children = new MFNode();

HAnimJoint179.children[0] = HAnimSegment180;

HAnimJoint HAnimJoint216 = createNode("HAnimJoint");
HAnimJoint216.DEF = "hanim_l_subtalar";
HAnimJoint216.name = "l_subtalar";
HAnimJoint216.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment217 = createNode("HAnimSegment");
HAnimSegment217.DEF = "hanim_l_midproximal";
HAnimSegment217.name = "l_midproximal";
TouchSensor TouchSensor218 = createNode("TouchSensor");
TouchSensor218.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment217.children = new MFNode();

HAnimSegment217.children[0] = TouchSensor218;

Transform Transform219 = createNode("Transform");
Transform219.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
Shape Shape220 = createNode("Shape");
Shape220.USE = "HAnimJointShape";
Transform219.child = new undefined();

Transform219.child[0] = Shape220;

HAnimSegment217.children[1] = Transform219;

Shape Shape221 = createNode("Shape");
LineSet LineSet222 = createNode("LineSet");
LineSet222.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA223 = createNode("ColorRGBA");
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA";
LineSet222.color = ColorRGBA223;

Coordinate Coordinate224 = createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet222.coord = Coordinate224;

Shape221.geometry = LineSet222;

HAnimSegment217.children[2] = Shape221;

HAnimJoint216.children = new MFNode();

HAnimJoint216.children[0] = HAnimSegment217;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.DEF = "hanim_l_midtarsal";
HAnimJoint225.name = "l_midtarsal";
HAnimJoint225.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment226 = createNode("HAnimSegment");
HAnimSegment226.DEF = "hanim_l_middistal";
HAnimSegment226.name = "l_middistal";
TouchSensor TouchSensor227 = createNode("TouchSensor");
TouchSensor227.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment226.children = new MFNode();

HAnimSegment226.children[0] = TouchSensor227;

Transform Transform228 = createNode("Transform");
Transform228.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
Shape Shape229 = createNode("Shape");
Shape229.USE = "HAnimJointShape";
Transform228.child = new undefined();

Transform228.child[0] = Shape229;

HAnimSegment226.children[1] = Transform228;

Shape Shape230 = createNode("Shape");
LineSet LineSet231 = createNode("LineSet");
LineSet231.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA232 = createNode("ColorRGBA");
ColorRGBA232.USE = "HAnimSegmentLineColorRGBA";
LineSet231.color = ColorRGBA232;

Coordinate Coordinate233 = createNode("Coordinate");
Coordinate233.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet231.coord = Coordinate233;

Shape230.geometry = LineSet231;

HAnimSegment226.children[2] = Shape230;

Shape Shape234 = createNode("Shape");
LineSet LineSet235 = createNode("LineSet");
LineSet235.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA236 = createNode("ColorRGBA");
ColorRGBA236.USE = "HAnimSiteLineColorRGBA";
LineSet235.color = ColorRGBA236;

Coordinate Coordinate237 = createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet235.coord = Coordinate237;

Shape234.geometry = LineSet235;

HAnimSegment226.children[3] = Shape234;

HAnimSite HAnimSite238 = createNode("HAnimSite");
HAnimSite238.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite238.name = "l_metatarsal_pha1_pt";
HAnimSite238.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
TouchSensor TouchSensor239 = createNode("TouchSensor");
TouchSensor239.description = "HAnimSite l_metatarsal_pha1";
HAnimSite238.children = new MFNode();

HAnimSite238.children[0] = TouchSensor239;

Shape Shape240 = createNode("Shape");
Shape240.USE = "HAnimSiteShape";
HAnimSite238.children[1] = Shape240;

HAnimSegment226.children[4] = HAnimSite238;

HAnimJoint225.children = new MFNode();

HAnimJoint225.children[0] = HAnimSegment226;

HAnimJoint HAnimJoint241 = createNode("HAnimJoint");
HAnimJoint241.DEF = "hanim_l_metatarsal";
HAnimJoint241.name = "l_metatarsal";
HAnimJoint241.rotation = new SFRotation(new float[-1,0,0,0.270107235459875]);
HAnimJoint241.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimSegment HAnimSegment242 = createNode("HAnimSegment");
HAnimSegment242.DEF = "hanim_l_forefoot";
HAnimSegment242.name = "l_forefoot";
TouchSensor TouchSensor243 = createNode("TouchSensor");
TouchSensor243.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment242.children = new MFNode();

HAnimSegment242.children[0] = TouchSensor243;

Transform Transform244 = createNode("Transform");
Transform244.translation = new SFVec3f(new float[0.1086,0,0.0762]);
Shape Shape245 = createNode("Shape");
Shape245.USE = "HAnimJointShape";
Transform244.child = new undefined();

Transform244.child[0] = Shape245;

HAnimSegment242.children[1] = Transform244;

Shape Shape246 = createNode("Shape");
LineSet LineSet247 = createNode("LineSet");
LineSet247.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA248 = createNode("ColorRGBA");
ColorRGBA248.USE = "HAnimSiteLineColorRGBA";
LineSet247.color = ColorRGBA248;

Coordinate Coordinate249 = createNode("Coordinate");
Coordinate249.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet247.coord = Coordinate249;

Shape246.geometry = LineSet247;

HAnimSegment242.children[2] = Shape246;

Shape Shape250 = createNode("Shape");
LineSet LineSet251 = createNode("LineSet");
LineSet251.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA252 = createNode("ColorRGBA");
ColorRGBA252.USE = "HAnimSiteLineColorRGBA";
LineSet251.color = ColorRGBA252;

Coordinate Coordinate253 = createNode("Coordinate");
Coordinate253.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet251.coord = Coordinate253;

Shape250.geometry = LineSet251;

HAnimSegment242.children[3] = Shape250;

Shape Shape254 = createNode("Shape");
LineSet LineSet255 = createNode("LineSet");
LineSet255.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA256 = createNode("ColorRGBA");
ColorRGBA256.USE = "HAnimSiteLineColorRGBA";
LineSet255.color = ColorRGBA256;

Coordinate Coordinate257 = createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet255.coord = Coordinate257;

Shape254.geometry = LineSet255;

HAnimSegment242.children[4] = Shape254;

HAnimSite HAnimSite258 = createNode("HAnimSite");
HAnimSite258.DEF = "hanim_l_forefoot_tip";
HAnimSite258.name = "l_forefoot_tip";
HAnimSite258.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
TouchSensor TouchSensor259 = createNode("TouchSensor");
TouchSensor259.description = "HAnimSite l_forefoot_tip";
HAnimSite258.children = new MFNode();

HAnimSite258.children[0] = TouchSensor259;

Shape Shape260 = createNode("Shape");
Shape260.USE = "HAnimSiteShape";
HAnimSite258.children[1] = Shape260;

HAnimSegment242.children[5] = HAnimSite258;

HAnimSite HAnimSite261 = createNode("HAnimSite");
HAnimSite261.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite261.name = "l_metatarsal_pha5_pt";
HAnimSite261.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
TouchSensor TouchSensor262 = createNode("TouchSensor");
TouchSensor262.description = "HAnimSite l_metatarsal_pha5";
HAnimSite261.children = new MFNode();

HAnimSite261.children[0] = TouchSensor262;

Shape Shape263 = createNode("Shape");
Shape263.USE = "HAnimSiteShape";
HAnimSite261.children[1] = Shape263;

HAnimSegment242.children[6] = HAnimSite261;

HAnimSite HAnimSite264 = createNode("HAnimSite");
HAnimSite264.DEF = "hanim_l_digit2_pt";
HAnimSite264.name = "l_digit2_pt";
HAnimSite264.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor265 = createNode("TouchSensor");
TouchSensor265.description = "HAnimSite l_digit2";
HAnimSite264.children = new MFNode();

HAnimSite264.children[0] = TouchSensor265;

Shape Shape266 = createNode("Shape");
Shape266.USE = "HAnimSiteShape";
HAnimSite264.children[1] = Shape266;

HAnimSegment242.children[7] = HAnimSite264;

HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

HAnimJoint225.children[1] = HAnimJoint241;

HAnimJoint216.children[1] = HAnimJoint225;

HAnimJoint179.children[1] = HAnimJoint216;

HAnimJoint170.children[1] = HAnimJoint179;

HAnimJoint140.children[1] = HAnimJoint170;

HAnimJoint60.children[1] = HAnimJoint140;

HAnimJoint HAnimJoint267 = createNode("HAnimJoint");
HAnimJoint267.DEF = "hanim_r_hip";
HAnimJoint267.name = "r_hip";
HAnimJoint267.rotation = new SFRotation(new float[0.999999999999999,0,0,0.486193023827777]);
HAnimJoint267.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment268 = createNode("HAnimSegment");
HAnimSegment268.DEF = "hanim_r_thigh";
HAnimSegment268.name = "r_thigh";
TouchSensor TouchSensor269 = createNode("TouchSensor");
TouchSensor269.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment268.children = new MFNode();

HAnimSegment268.children[0] = TouchSensor269;

Transform Transform270 = createNode("Transform");
Transform270.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
Shape Shape271 = createNode("Shape");
Shape271.USE = "HAnimJointShape";
Transform270.child = new undefined();

Transform270.child[0] = Shape271;

HAnimSegment268.children[1] = Transform270;

Shape Shape272 = createNode("Shape");
LineSet LineSet273 = createNode("LineSet");
LineSet273.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA274 = createNode("ColorRGBA");
ColorRGBA274.USE = "HAnimSegmentLineColorRGBA";
LineSet273.color = ColorRGBA274;

Coordinate Coordinate275 = createNode("Coordinate");
Coordinate275.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet273.coord = Coordinate275;

Shape272.geometry = LineSet273;

HAnimSegment268.children[2] = Shape272;

Shape Shape276 = createNode("Shape");
LineSet LineSet277 = createNode("LineSet");
LineSet277.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA278 = createNode("ColorRGBA");
ColorRGBA278.USE = "HAnimSiteLineColorRGBA";
LineSet277.color = ColorRGBA278;

Coordinate Coordinate279 = createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet277.coord = Coordinate279;

Shape276.geometry = LineSet277;

HAnimSegment268.children[3] = Shape276;

Shape Shape280 = createNode("Shape");
LineSet LineSet281 = createNode("LineSet");
LineSet281.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA282 = createNode("ColorRGBA");
ColorRGBA282.USE = "HAnimSiteLineColorRGBA";
LineSet281.color = ColorRGBA282;

Coordinate Coordinate283 = createNode("Coordinate");
Coordinate283.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet281.coord = Coordinate283;

Shape280.geometry = LineSet281;

HAnimSegment268.children[4] = Shape280;

Shape Shape284 = createNode("Shape");
LineSet LineSet285 = createNode("LineSet");
LineSet285.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA286 = createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSiteLineColorRGBA";
LineSet285.color = ColorRGBA286;

Coordinate Coordinate287 = createNode("Coordinate");
Coordinate287.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet285.coord = Coordinate287;

Shape284.geometry = LineSet285;

HAnimSegment268.children[5] = Shape284;

HAnimSite HAnimSite288 = createNode("HAnimSite");
HAnimSite288.DEF = "hanim_r_knee_crease_pt";
HAnimSite288.name = "r_knee_crease_pt";
HAnimSite288.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor289 = createNode("TouchSensor");
TouchSensor289.description = "HAnimSite r_knee_crease";
HAnimSite288.children = new MFNode();

HAnimSite288.children[0] = TouchSensor289;

Shape Shape290 = createNode("Shape");
Shape290.USE = "HAnimSiteShape";
HAnimSite288.children[1] = Shape290;

HAnimSegment268.children[6] = HAnimSite288;

HAnimSite HAnimSite291 = createNode("HAnimSite");
HAnimSite291.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite291.name = "r_femoral_lateral_epicn_pt";
HAnimSite291.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor292 = createNode("TouchSensor");
TouchSensor292.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite291.children = new MFNode();

HAnimSite291.children[0] = TouchSensor292;

Shape Shape293 = createNode("Shape");
Shape293.USE = "HAnimSiteShape";
HAnimSite291.children[1] = Shape293;

HAnimSegment268.children[7] = HAnimSite291;

HAnimSite HAnimSite294 = createNode("HAnimSite");
HAnimSite294.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite294.name = "r_femoral_medial_epicn_pt";
HAnimSite294.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor295 = createNode("TouchSensor");
TouchSensor295.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite294.children = new MFNode();

HAnimSite294.children[0] = TouchSensor295;

Shape Shape296 = createNode("Shape");
Shape296.USE = "HAnimSiteShape";
HAnimSite294.children[1] = Shape296;

HAnimSegment268.children[8] = HAnimSite294;

HAnimJoint267.children = new MFNode();

HAnimJoint267.children[0] = HAnimSegment268;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.DEF = "hanim_r_knee";
HAnimJoint297.name = "r_knee";
HAnimJoint297.rotation = new SFRotation(new float[1,0,0,1.05341821829351]);
HAnimJoint297.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.DEF = "hanim_r_calf";
HAnimSegment298.name = "r_calf";
TouchSensor TouchSensor299 = createNode("TouchSensor");
TouchSensor299.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment298.children = new MFNode();

HAnimSegment298.children[0] = TouchSensor299;

Transform Transform300 = createNode("Transform");
Transform300.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
Shape Shape301 = createNode("Shape");
Shape301.USE = "HAnimJointShape";
Transform300.child = new undefined();

Transform300.child[0] = Shape301;

HAnimSegment298.children[1] = Transform300;

Shape Shape302 = createNode("Shape");
LineSet LineSet303 = createNode("LineSet");
LineSet303.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA304 = createNode("ColorRGBA");
ColorRGBA304.USE = "HAnimSegmentLineColorRGBA";
LineSet303.color = ColorRGBA304;

Coordinate Coordinate305 = createNode("Coordinate");
Coordinate305.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet303.coord = Coordinate305;

Shape302.geometry = LineSet303;

HAnimSegment298.children[2] = Shape302;

HAnimJoint297.children = new MFNode();

HAnimJoint297.children[0] = HAnimSegment298;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.DEF = "hanim_r_ankle";
HAnimJoint306.name = "r_ankle";
HAnimJoint306.rotation = new SFRotation(new float[-0.999999999999999,0,0,0.486193023827777]);
HAnimJoint306.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment307 = createNode("HAnimSegment");
HAnimSegment307.DEF = "hanim_r_hindfoot";
HAnimSegment307.name = "r_hindfoot";
TouchSensor TouchSensor308 = createNode("TouchSensor");
TouchSensor308.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment307.children = new MFNode();

HAnimSegment307.children[0] = TouchSensor308;

Transform Transform309 = createNode("Transform");
Transform309.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
Shape Shape310 = createNode("Shape");
Shape310.USE = "HAnimJointShape";
Transform309.child = new undefined();

Transform309.child[0] = Shape310;

HAnimSegment307.children[1] = Transform309;

Shape Shape311 = createNode("Shape");
LineSet LineSet312 = createNode("LineSet");
LineSet312.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA313 = createNode("ColorRGBA");
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA";
LineSet312.color = ColorRGBA313;

Coordinate Coordinate314 = createNode("Coordinate");
Coordinate314.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet312.coord = Coordinate314;

Shape311.geometry = LineSet312;

HAnimSegment307.children[2] = Shape311;

Shape Shape315 = createNode("Shape");
LineSet LineSet316 = createNode("LineSet");
LineSet316.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA317 = createNode("ColorRGBA");
ColorRGBA317.USE = "HAnimSiteLineColorRGBA";
LineSet316.color = ColorRGBA317;

Coordinate Coordinate318 = createNode("Coordinate");
Coordinate318.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet316.coord = Coordinate318;

Shape315.geometry = LineSet316;

HAnimSegment307.children[3] = Shape315;

Shape Shape319 = createNode("Shape");
LineSet LineSet320 = createNode("LineSet");
LineSet320.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA321 = createNode("ColorRGBA");
ColorRGBA321.USE = "HAnimSiteLineColorRGBA";
LineSet320.color = ColorRGBA321;

Coordinate Coordinate322 = createNode("Coordinate");
Coordinate322.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet320.coord = Coordinate322;

Shape319.geometry = LineSet320;

HAnimSegment307.children[4] = Shape319;

Shape Shape323 = createNode("Shape");
LineSet LineSet324 = createNode("LineSet");
LineSet324.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA325 = createNode("ColorRGBA");
ColorRGBA325.USE = "HAnimSiteLineColorRGBA";
LineSet324.color = ColorRGBA325;

Coordinate Coordinate326 = createNode("Coordinate");
Coordinate326.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet324.coord = Coordinate326;

Shape323.geometry = LineSet324;

HAnimSegment307.children[5] = Shape323;

Shape Shape327 = createNode("Shape");
LineSet LineSet328 = createNode("LineSet");
LineSet328.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA329 = createNode("ColorRGBA");
ColorRGBA329.USE = "HAnimSiteLineColorRGBA";
LineSet328.color = ColorRGBA329;

Coordinate Coordinate330 = createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet328.coord = Coordinate330;

Shape327.geometry = LineSet328;

HAnimSegment307.children[6] = Shape327;

HAnimSite HAnimSite331 = createNode("HAnimSite");
HAnimSite331.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite331.name = "r_lateral_malleolus_pt";
HAnimSite331.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor332 = createNode("TouchSensor");
TouchSensor332.description = "HAnimSite r_lateral_malleolus";
HAnimSite331.children = new MFNode();

HAnimSite331.children[0] = TouchSensor332;

Shape Shape333 = createNode("Shape");
Shape333.USE = "HAnimSiteShape";
HAnimSite331.children[1] = Shape333;

HAnimSegment307.children[7] = HAnimSite331;

HAnimSite HAnimSite334 = createNode("HAnimSite");
HAnimSite334.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite334.name = "r_medial_malleolus_pt";
HAnimSite334.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor335 = createNode("TouchSensor");
TouchSensor335.description = "HAnimSite r_medial_malleolus";
HAnimSite334.children = new MFNode();

HAnimSite334.children[0] = TouchSensor335;

Shape Shape336 = createNode("Shape");
Shape336.USE = "HAnimSiteShape";
HAnimSite334.children[1] = Shape336;

HAnimSegment307.children[8] = HAnimSite334;

HAnimSite HAnimSite337 = createNode("HAnimSite");
HAnimSite337.DEF = "hanim_r_sphyrion_pt";
HAnimSite337.name = "r_sphyrion_pt";
HAnimSite337.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor338 = createNode("TouchSensor");
TouchSensor338.description = "HAnimSite r_sphyrion";
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = TouchSensor338;

Shape Shape339 = createNode("Shape");
Shape339.USE = "HAnimSiteShape";
HAnimSite337.children[1] = Shape339;

HAnimSegment307.children[9] = HAnimSite337;

HAnimSite HAnimSite340 = createNode("HAnimSite");
HAnimSite340.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite340.name = "r_calcaneous_post_pt";
HAnimSite340.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor341 = createNode("TouchSensor");
TouchSensor341.description = "HAnimSite r_calcaneous_post";
HAnimSite340.children = new MFNode();

HAnimSite340.children[0] = TouchSensor341;

Shape Shape342 = createNode("Shape");
Shape342.USE = "HAnimSiteShape";
HAnimSite340.children[1] = Shape342;

HAnimSegment307.children[10] = HAnimSite340;

HAnimJoint306.children = new MFNode();

HAnimJoint306.children[0] = HAnimSegment307;

HAnimJoint HAnimJoint343 = createNode("HAnimJoint");
HAnimJoint343.DEF = "hanim_r_subtalar";
HAnimJoint343.name = "r_subtalar";
HAnimJoint343.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment344 = createNode("HAnimSegment");
HAnimSegment344.DEF = "hanim_r_midproximal";
HAnimSegment344.name = "r_midproximal";
TouchSensor TouchSensor345 = createNode("TouchSensor");
TouchSensor345.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment344.children = new MFNode();

HAnimSegment344.children[0] = TouchSensor345;

Transform Transform346 = createNode("Transform");
Transform346.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
Shape Shape347 = createNode("Shape");
Shape347.USE = "HAnimJointShape";
Transform346.child = new undefined();

Transform346.child[0] = Shape347;

HAnimSegment344.children[1] = Transform346;

Shape Shape348 = createNode("Shape");
LineSet LineSet349 = createNode("LineSet");
LineSet349.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA350 = createNode("ColorRGBA");
ColorRGBA350.USE = "HAnimSegmentLineColorRGBA";
LineSet349.color = ColorRGBA350;

Coordinate Coordinate351 = createNode("Coordinate");
Coordinate351.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet349.coord = Coordinate351;

Shape348.geometry = LineSet349;

HAnimSegment344.children[2] = Shape348;

HAnimJoint343.children = new MFNode();

HAnimJoint343.children[0] = HAnimSegment344;

HAnimJoint HAnimJoint352 = createNode("HAnimJoint");
HAnimJoint352.DEF = "hanim_r_midtarsal";
HAnimJoint352.name = "r_midtarsal";
HAnimJoint352.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment353 = createNode("HAnimSegment");
HAnimSegment353.DEF = "hanim_r_middistal";
HAnimSegment353.name = "r_middistal";
TouchSensor TouchSensor354 = createNode("TouchSensor");
TouchSensor354.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment353.children = new MFNode();

HAnimSegment353.children[0] = TouchSensor354;

Transform Transform355 = createNode("Transform");
Transform355.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
Shape Shape356 = createNode("Shape");
Shape356.USE = "HAnimJointShape";
Transform355.child = new undefined();

Transform355.child[0] = Shape356;

HAnimSegment353.children[1] = Transform355;

Shape Shape357 = createNode("Shape");
LineSet LineSet358 = createNode("LineSet");
LineSet358.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA359 = createNode("ColorRGBA");
ColorRGBA359.USE = "HAnimSegmentLineColorRGBA";
LineSet358.color = ColorRGBA359;

Coordinate Coordinate360 = createNode("Coordinate");
Coordinate360.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet358.coord = Coordinate360;

Shape357.geometry = LineSet358;

HAnimSegment353.children[2] = Shape357;

Shape Shape361 = createNode("Shape");
LineSet LineSet362 = createNode("LineSet");
LineSet362.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA363 = createNode("ColorRGBA");
ColorRGBA363.USE = "HAnimSiteLineColorRGBA";
LineSet362.color = ColorRGBA363;

Coordinate Coordinate364 = createNode("Coordinate");
Coordinate364.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet362.coord = Coordinate364;

Shape361.geometry = LineSet362;

HAnimSegment353.children[3] = Shape361;

HAnimSite HAnimSite365 = createNode("HAnimSite");
HAnimSite365.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite365.name = "r_metatarsal_pha1_pt";
HAnimSite365.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
TouchSensor TouchSensor366 = createNode("TouchSensor");
TouchSensor366.description = "HAnimSite r_metatarsal_pha1";
HAnimSite365.children = new MFNode();

HAnimSite365.children[0] = TouchSensor366;

Shape Shape367 = createNode("Shape");
Shape367.USE = "HAnimSiteShape";
HAnimSite365.children[1] = Shape367;

HAnimSegment353.children[4] = HAnimSite365;

HAnimJoint352.children = new MFNode();

HAnimJoint352.children[0] = HAnimSegment353;

HAnimJoint HAnimJoint368 = createNode("HAnimJoint");
HAnimJoint368.DEF = "hanim_r_metatarsal";
HAnimJoint368.name = "r_metatarsal";
HAnimJoint368.rotation = new SFRotation(new float[-1,0,0,0.270107235459875]);
HAnimJoint368.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimSegment HAnimSegment369 = createNode("HAnimSegment");
HAnimSegment369.DEF = "hanim_r_forefoot";
HAnimSegment369.name = "r_forefoot";
TouchSensor TouchSensor370 = createNode("TouchSensor");
TouchSensor370.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment369.children = new MFNode();

HAnimSegment369.children[0] = TouchSensor370;

Transform Transform371 = createNode("Transform");
Transform371.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
Shape Shape372 = createNode("Shape");
Shape372.USE = "HAnimJointShape";
Transform371.child = new undefined();

Transform371.child[0] = Shape372;

HAnimSegment369.children[1] = Transform371;

Shape Shape373 = createNode("Shape");
LineSet LineSet374 = createNode("LineSet");
LineSet374.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA375 = createNode("ColorRGBA");
ColorRGBA375.USE = "HAnimSiteLineColorRGBA";
LineSet374.color = ColorRGBA375;

Coordinate Coordinate376 = createNode("Coordinate");
Coordinate376.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet374.coord = Coordinate376;

Shape373.geometry = LineSet374;

HAnimSegment369.children[2] = Shape373;

Shape Shape377 = createNode("Shape");
LineSet LineSet378 = createNode("LineSet");
LineSet378.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA379 = createNode("ColorRGBA");
ColorRGBA379.USE = "HAnimSiteLineColorRGBA";
LineSet378.color = ColorRGBA379;

Coordinate Coordinate380 = createNode("Coordinate");
Coordinate380.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet378.coord = Coordinate380;

Shape377.geometry = LineSet378;

HAnimSegment369.children[3] = Shape377;

Shape Shape381 = createNode("Shape");
LineSet LineSet382 = createNode("LineSet");
LineSet382.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA383 = createNode("ColorRGBA");
ColorRGBA383.USE = "HAnimSiteLineColorRGBA";
LineSet382.color = ColorRGBA383;

Coordinate Coordinate384 = createNode("Coordinate");
Coordinate384.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet382.coord = Coordinate384;

Shape381.geometry = LineSet382;

HAnimSegment369.children[4] = Shape381;

HAnimSite HAnimSite385 = createNode("HAnimSite");
HAnimSite385.DEF = "hanim_r_forefoot_tip";
HAnimSite385.name = "r_forefoot_tip";
HAnimSite385.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
TouchSensor TouchSensor386 = createNode("TouchSensor");
TouchSensor386.description = "HAnimSite r_forefoot_tip";
HAnimSite385.children = new MFNode();

HAnimSite385.children[0] = TouchSensor386;

Shape Shape387 = createNode("Shape");
Shape387.USE = "HAnimSiteShape";
HAnimSite385.children[1] = Shape387;

HAnimSegment369.children[5] = HAnimSite385;

HAnimSite HAnimSite388 = createNode("HAnimSite");
HAnimSite388.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite388.name = "r_metatarsal_pha5_pt";
HAnimSite388.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
TouchSensor TouchSensor389 = createNode("TouchSensor");
TouchSensor389.description = "HAnimSite r_metatarsal_pha5";
HAnimSite388.children = new MFNode();

HAnimSite388.children[0] = TouchSensor389;

Shape Shape390 = createNode("Shape");
Shape390.USE = "HAnimSiteShape";
HAnimSite388.children[1] = Shape390;

HAnimSegment369.children[6] = HAnimSite388;

HAnimSite HAnimSite391 = createNode("HAnimSite");
HAnimSite391.DEF = "hanim_r_digit2_pt";
HAnimSite391.name = "r_digit2_pt";
HAnimSite391.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor392 = createNode("TouchSensor");
TouchSensor392.description = "HAnimSite r_digit2";
HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = TouchSensor392;

Shape Shape393 = createNode("Shape");
Shape393.USE = "HAnimSiteShape";
HAnimSite391.children[1] = Shape393;

HAnimSegment369.children[7] = HAnimSite391;

HAnimJoint368.children = new MFNode();

HAnimJoint368.children[0] = HAnimSegment369;

HAnimJoint352.children[1] = HAnimJoint368;

HAnimJoint343.children[1] = HAnimJoint352;

HAnimJoint306.children[1] = HAnimJoint343;

HAnimJoint297.children[1] = HAnimJoint306;

HAnimJoint267.children[1] = HAnimJoint297;

HAnimJoint60.children[2] = HAnimJoint267;

HAnimJoint44.children[1] = HAnimJoint60;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.DEF = "hanim_vl5";
HAnimJoint394.name = "vl5";
HAnimJoint394.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment395 = createNode("HAnimSegment");
HAnimSegment395.DEF = "hanim_l5";
HAnimSegment395.name = "l5";
TouchSensor TouchSensor396 = createNode("TouchSensor");
TouchSensor396.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment395.children = new MFNode();

HAnimSegment395.children[0] = TouchSensor396;

Transform Transform397 = createNode("Transform");
Transform397.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Shape Shape398 = createNode("Shape");
Shape398.USE = "HAnimJointShape";
Transform397.child = new undefined();

Transform397.child[0] = Shape398;

HAnimSegment395.children[1] = Transform397;

Shape Shape399 = createNode("Shape");
LineSet LineSet400 = createNode("LineSet");
LineSet400.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA401 = createNode("ColorRGBA");
ColorRGBA401.USE = "HAnimSegmentLineColorRGBA";
LineSet400.color = ColorRGBA401;

Coordinate Coordinate402 = createNode("Coordinate");
Coordinate402.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet400.coord = Coordinate402;

Shape399.geometry = LineSet400;

HAnimSegment395.children[2] = Shape399;

Shape Shape403 = createNode("Shape");
LineSet LineSet404 = createNode("LineSet");
LineSet404.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA405 = createNode("ColorRGBA");
ColorRGBA405.USE = "HAnimSiteLineColorRGBA";
LineSet404.color = ColorRGBA405;

Coordinate Coordinate406 = createNode("Coordinate");
Coordinate406.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet404.coord = Coordinate406;

Shape403.geometry = LineSet404;

HAnimSegment395.children[3] = Shape403;

Shape Shape407 = createNode("Shape");
LineSet LineSet408 = createNode("LineSet");
LineSet408.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA409 = createNode("ColorRGBA");
ColorRGBA409.USE = "HAnimSiteLineColorRGBA";
LineSet408.color = ColorRGBA409;

Coordinate Coordinate410 = createNode("Coordinate");
Coordinate410.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet408.coord = Coordinate410;

Shape407.geometry = LineSet408;

HAnimSegment395.children[4] = Shape407;

HAnimSite HAnimSite411 = createNode("HAnimSite");
HAnimSite411.DEF = "hanim_waist_preferred_post_pt";
HAnimSite411.name = "waist_preferred_post_pt";
HAnimSite411.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
TouchSensor TouchSensor412 = createNode("TouchSensor");
TouchSensor412.description = "HAnimSite waist_preferred_post";
HAnimSite411.children = new MFNode();

HAnimSite411.children[0] = TouchSensor412;

Shape Shape413 = createNode("Shape");
Shape413.USE = "HAnimSiteShape";
HAnimSite411.children[1] = Shape413;

HAnimSegment395.children[5] = HAnimSite411;

HAnimSite HAnimSite414 = createNode("HAnimSite");
HAnimSite414.DEF = "hanim_navel_pt";
HAnimSite414.name = "navel_pt";
HAnimSite414.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor415 = createNode("TouchSensor");
TouchSensor415.description = "HAnimSite navel";
HAnimSite414.children = new MFNode();

HAnimSite414.children[0] = TouchSensor415;

Shape Shape416 = createNode("Shape");
Shape416.USE = "HAnimSiteShape";
HAnimSite414.children[1] = Shape416;

HAnimSegment395.children[6] = HAnimSite414;

HAnimJoint394.children = new MFNode();

HAnimJoint394.children[0] = HAnimSegment395;

HAnimJoint HAnimJoint417 = createNode("HAnimJoint");
HAnimJoint417.DEF = "hanim_vl4";
HAnimJoint417.name = "vl4";
HAnimJoint417.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimSegment HAnimSegment418 = createNode("HAnimSegment");
HAnimSegment418.DEF = "hanim_l4";
HAnimSegment418.name = "l4";
TouchSensor TouchSensor419 = createNode("TouchSensor");
TouchSensor419.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment418.children = new MFNode();

HAnimSegment418.children[0] = TouchSensor419;

Transform Transform420 = createNode("Transform");
Transform420.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Shape Shape421 = createNode("Shape");
Shape421.USE = "HAnimJointShape";
Transform420.child = new undefined();

Transform420.child[0] = Shape421;

HAnimSegment418.children[1] = Transform420;

Shape Shape422 = createNode("Shape");
LineSet LineSet423 = createNode("LineSet");
LineSet423.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA424 = createNode("ColorRGBA");
ColorRGBA424.USE = "HAnimSegmentLineColorRGBA";
LineSet423.color = ColorRGBA424;

Coordinate Coordinate425 = createNode("Coordinate");
Coordinate425.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet423.coord = Coordinate425;

Shape422.geometry = LineSet423;

HAnimSegment418.children[2] = Shape422;

HAnimJoint417.children = new MFNode();

HAnimJoint417.children[0] = HAnimSegment418;

HAnimJoint HAnimJoint426 = createNode("HAnimJoint");
HAnimJoint426.DEF = "hanim_vl3";
HAnimJoint426.name = "vl3";
HAnimJoint426.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment427 = createNode("HAnimSegment");
HAnimSegment427.DEF = "hanim_l3";
HAnimSegment427.name = "l3";
TouchSensor TouchSensor428 = createNode("TouchSensor");
TouchSensor428.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment427.children = new MFNode();

HAnimSegment427.children[0] = TouchSensor428;

Transform Transform429 = createNode("Transform");
Transform429.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Shape Shape430 = createNode("Shape");
Shape430.USE = "HAnimJointShape";
Transform429.child = new undefined();

Transform429.child[0] = Shape430;

HAnimSegment427.children[1] = Transform429;

Shape Shape431 = createNode("Shape");
LineSet LineSet432 = createNode("LineSet");
LineSet432.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA433 = createNode("ColorRGBA");
ColorRGBA433.USE = "HAnimSegmentLineColorRGBA";
LineSet432.color = ColorRGBA433;

Coordinate Coordinate434 = createNode("Coordinate");
Coordinate434.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet432.coord = Coordinate434;

Shape431.geometry = LineSet432;

HAnimSegment427.children[2] = Shape431;

HAnimJoint426.children = new MFNode();

HAnimJoint426.children[0] = HAnimSegment427;

HAnimJoint HAnimJoint435 = createNode("HAnimJoint");
HAnimJoint435.DEF = "hanim_vl2";
HAnimJoint435.name = "vl2";
HAnimJoint435.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimSegment HAnimSegment436 = createNode("HAnimSegment");
HAnimSegment436.DEF = "hanim_l2";
HAnimSegment436.name = "l2";
TouchSensor TouchSensor437 = createNode("TouchSensor");
TouchSensor437.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment436.children = new MFNode();

HAnimSegment436.children[0] = TouchSensor437;

Transform Transform438 = createNode("Transform");
Transform438.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Shape Shape439 = createNode("Shape");
Shape439.USE = "HAnimJointShape";
Transform438.child = new undefined();

Transform438.child[0] = Shape439;

HAnimSegment436.children[1] = Transform438;

Shape Shape440 = createNode("Shape");
LineSet LineSet441 = createNode("LineSet");
LineSet441.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA442 = createNode("ColorRGBA");
ColorRGBA442.USE = "HAnimSegmentLineColorRGBA";
LineSet441.color = ColorRGBA442;

Coordinate Coordinate443 = createNode("Coordinate");
Coordinate443.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet441.coord = Coordinate443;

Shape440.geometry = LineSet441;

HAnimSegment436.children[2] = Shape440;

Shape Shape444 = createNode("Shape");
LineSet LineSet445 = createNode("LineSet");
LineSet445.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA446 = createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSiteLineColorRGBA";
LineSet445.color = ColorRGBA446;

Coordinate Coordinate447 = createNode("Coordinate");
Coordinate447.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet445.coord = Coordinate447;

Shape444.geometry = LineSet445;

HAnimSegment436.children[3] = Shape444;

Shape Shape448 = createNode("Shape");
LineSet LineSet449 = createNode("LineSet");
LineSet449.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA450 = createNode("ColorRGBA");
ColorRGBA450.USE = "HAnimSiteLineColorRGBA";
LineSet449.color = ColorRGBA450;

Coordinate Coordinate451 = createNode("Coordinate");
Coordinate451.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet449.coord = Coordinate451;

Shape448.geometry = LineSet449;

HAnimSegment436.children[4] = Shape448;

Shape Shape452 = createNode("Shape");
LineSet LineSet453 = createNode("LineSet");
LineSet453.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA454 = createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSiteLineColorRGBA";
LineSet453.color = ColorRGBA454;

Coordinate Coordinate455 = createNode("Coordinate");
Coordinate455.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet453.coord = Coordinate455;

Shape452.geometry = LineSet453;

HAnimSegment436.children[5] = Shape452;

HAnimSite HAnimSite456 = createNode("HAnimSite");
HAnimSite456.DEF = "hanim_r_rib10_pt";
HAnimSite456.name = "r_rib10_pt";
HAnimSite456.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor457 = createNode("TouchSensor");
TouchSensor457.description = "HAnimSite r_rib10";
HAnimSite456.children = new MFNode();

HAnimSite456.children[0] = TouchSensor457;

Shape Shape458 = createNode("Shape");
Shape458.USE = "HAnimSiteShape";
HAnimSite456.children[1] = Shape458;

HAnimSegment436.children[6] = HAnimSite456;

HAnimSite HAnimSite459 = createNode("HAnimSite");
HAnimSite459.DEF = "hanim_l_rib10_pt";
HAnimSite459.name = "l_rib10_pt";
HAnimSite459.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor460 = createNode("TouchSensor");
TouchSensor460.description = "HAnimSite l_rib10";
HAnimSite459.children = new MFNode();

HAnimSite459.children[0] = TouchSensor460;

Shape Shape461 = createNode("Shape");
Shape461.USE = "HAnimSiteShape";
HAnimSite459.children[1] = Shape461;

HAnimSegment436.children[7] = HAnimSite459;

HAnimSite HAnimSite462 = createNode("HAnimSite");
HAnimSite462.DEF = "hanim_rib10_midspine_pt";
HAnimSite462.name = "rib10_midspine_pt";
HAnimSite462.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
TouchSensor TouchSensor463 = createNode("TouchSensor");
TouchSensor463.description = "HAnimSite rib10_midspine";
HAnimSite462.children = new MFNode();

HAnimSite462.children[0] = TouchSensor463;

Shape Shape464 = createNode("Shape");
Shape464.USE = "HAnimSiteShape";
HAnimSite462.children[1] = Shape464;

HAnimSegment436.children[8] = HAnimSite462;

HAnimJoint435.children = new MFNode();

HAnimJoint435.children[0] = HAnimSegment436;

HAnimJoint HAnimJoint465 = createNode("HAnimJoint");
HAnimJoint465.DEF = "hanim_vl1";
HAnimJoint465.name = "vl1";
HAnimJoint465.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment466 = createNode("HAnimSegment");
HAnimSegment466.DEF = "hanim_l1";
HAnimSegment466.name = "l1";
TouchSensor TouchSensor467 = createNode("TouchSensor");
TouchSensor467.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment466.children = new MFNode();

HAnimSegment466.children[0] = TouchSensor467;

Transform Transform468 = createNode("Transform");
Transform468.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Shape Shape469 = createNode("Shape");
Shape469.USE = "HAnimJointShape";
Transform468.child = new undefined();

Transform468.child[0] = Shape469;

HAnimSegment466.children[1] = Transform468;

Shape Shape470 = createNode("Shape");
LineSet LineSet471 = createNode("LineSet");
LineSet471.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA472 = createNode("ColorRGBA");
ColorRGBA472.USE = "HAnimSegmentLineColorRGBA";
LineSet471.color = ColorRGBA472;

Coordinate Coordinate473 = createNode("Coordinate");
Coordinate473.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet471.coord = Coordinate473;

Shape470.geometry = LineSet471;

HAnimSegment466.children[2] = Shape470;

HAnimJoint465.children = new MFNode();

HAnimJoint465.children[0] = HAnimSegment466;

HAnimJoint HAnimJoint474 = createNode("HAnimJoint");
HAnimJoint474.DEF = "hanim_vt12";
HAnimJoint474.name = "vt12";
HAnimJoint474.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimSegment HAnimSegment475 = createNode("HAnimSegment");
HAnimSegment475.DEF = "hanim_t12";
HAnimSegment475.name = "t12";
TouchSensor TouchSensor476 = createNode("TouchSensor");
TouchSensor476.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment475.children = new MFNode();

HAnimSegment475.children[0] = TouchSensor476;

Transform Transform477 = createNode("Transform");
Transform477.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Shape Shape478 = createNode("Shape");
Shape478.USE = "HAnimJointShape";
Transform477.child = new undefined();

Transform477.child[0] = Shape478;

HAnimSegment475.children[1] = Transform477;

Shape Shape479 = createNode("Shape");
LineSet LineSet480 = createNode("LineSet");
LineSet480.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA481 = createNode("ColorRGBA");
ColorRGBA481.USE = "HAnimSegmentLineColorRGBA";
LineSet480.color = ColorRGBA481;

Coordinate Coordinate482 = createNode("Coordinate");
Coordinate482.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet480.coord = Coordinate482;

Shape479.geometry = LineSet480;

HAnimSegment475.children[2] = Shape479;

HAnimJoint474.children = new MFNode();

HAnimJoint474.children[0] = HAnimSegment475;

HAnimJoint HAnimJoint483 = createNode("HAnimJoint");
HAnimJoint483.DEF = "hanim_vt11";
HAnimJoint483.name = "vt11";
HAnimJoint483.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimSegment HAnimSegment484 = createNode("HAnimSegment");
HAnimSegment484.DEF = "hanim_t11";
HAnimSegment484.name = "t11";
TouchSensor TouchSensor485 = createNode("TouchSensor");
TouchSensor485.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment484.children = new MFNode();

HAnimSegment484.children[0] = TouchSensor485;

Transform Transform486 = createNode("Transform");
Transform486.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Shape Shape487 = createNode("Shape");
Shape487.USE = "HAnimJointShape";
Transform486.child = new undefined();

Transform486.child[0] = Shape487;

HAnimSegment484.children[1] = Transform486;

Shape Shape488 = createNode("Shape");
LineSet LineSet489 = createNode("LineSet");
LineSet489.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA490 = createNode("ColorRGBA");
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA";
LineSet489.color = ColorRGBA490;

Coordinate Coordinate491 = createNode("Coordinate");
Coordinate491.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet489.coord = Coordinate491;

Shape488.geometry = LineSet489;

HAnimSegment484.children[2] = Shape488;

HAnimJoint483.children = new MFNode();

HAnimJoint483.children[0] = HAnimSegment484;

HAnimJoint HAnimJoint492 = createNode("HAnimJoint");
HAnimJoint492.DEF = "hanim_vt10";
HAnimJoint492.name = "vt10";
HAnimJoint492.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment493 = createNode("HAnimSegment");
HAnimSegment493.DEF = "hanim_t10";
HAnimSegment493.name = "t10";
TouchSensor TouchSensor494 = createNode("TouchSensor");
TouchSensor494.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment493.children = new MFNode();

HAnimSegment493.children[0] = TouchSensor494;

Transform Transform495 = createNode("Transform");
Transform495.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Shape Shape496 = createNode("Shape");
Shape496.USE = "HAnimJointShape";
Transform495.child = new undefined();

Transform495.child[0] = Shape496;

HAnimSegment493.children[1] = Transform495;

Shape Shape497 = createNode("Shape");
LineSet LineSet498 = createNode("LineSet");
LineSet498.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA499 = createNode("ColorRGBA");
ColorRGBA499.USE = "HAnimSegmentLineColorRGBA";
LineSet498.color = ColorRGBA499;

Coordinate Coordinate500 = createNode("Coordinate");
Coordinate500.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet498.coord = Coordinate500;

Shape497.geometry = LineSet498;

HAnimSegment493.children[2] = Shape497;

Shape Shape501 = createNode("Shape");
LineSet LineSet502 = createNode("LineSet");
LineSet502.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA503 = createNode("ColorRGBA");
ColorRGBA503.USE = "HAnimSiteLineColorRGBA";
LineSet502.color = ColorRGBA503;

Coordinate Coordinate504 = createNode("Coordinate");
Coordinate504.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet502.coord = Coordinate504;

Shape501.geometry = LineSet502;

HAnimSegment493.children[3] = Shape501;

HAnimSite HAnimSite505 = createNode("HAnimSite");
HAnimSite505.DEF = "hanim_substernale_pt";
HAnimSite505.name = "substernale_pt";
HAnimSite505.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor506 = createNode("TouchSensor");
TouchSensor506.description = "HAnimSite substernale";
HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = TouchSensor506;

Shape Shape507 = createNode("Shape");
Shape507.USE = "HAnimSiteShape";
HAnimSite505.children[1] = Shape507;

HAnimSegment493.children[4] = HAnimSite505;

HAnimJoint492.children = new MFNode();

HAnimJoint492.children[0] = HAnimSegment493;

HAnimJoint HAnimJoint508 = createNode("HAnimJoint");
HAnimJoint508.DEF = "hanim_vt9";
HAnimJoint508.name = "vt9";
HAnimJoint508.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimSegment HAnimSegment509 = createNode("HAnimSegment");
HAnimSegment509.DEF = "hanim_t9";
HAnimSegment509.name = "t9";
TouchSensor TouchSensor510 = createNode("TouchSensor");
TouchSensor510.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment509.children = new MFNode();

HAnimSegment509.children[0] = TouchSensor510;

Transform Transform511 = createNode("Transform");
Transform511.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Shape Shape512 = createNode("Shape");
Shape512.USE = "HAnimJointShape";
Transform511.child = new undefined();

Transform511.child[0] = Shape512;

HAnimSegment509.children[1] = Transform511;

Shape Shape513 = createNode("Shape");
LineSet LineSet514 = createNode("LineSet");
LineSet514.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA515 = createNode("ColorRGBA");
ColorRGBA515.USE = "HAnimSegmentLineColorRGBA";
LineSet514.color = ColorRGBA515;

Coordinate Coordinate516 = createNode("Coordinate");
Coordinate516.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet514.coord = Coordinate516;

Shape513.geometry = LineSet514;

HAnimSegment509.children[2] = Shape513;

Shape Shape517 = createNode("Shape");
LineSet LineSet518 = createNode("LineSet");
LineSet518.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA519 = createNode("ColorRGBA");
ColorRGBA519.USE = "HAnimSiteLineColorRGBA";
LineSet518.color = ColorRGBA519;

Coordinate Coordinate520 = createNode("Coordinate");
Coordinate520.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet518.coord = Coordinate520;

Shape517.geometry = LineSet518;

HAnimSegment509.children[3] = Shape517;

Shape Shape521 = createNode("Shape");
LineSet LineSet522 = createNode("LineSet");
LineSet522.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA523 = createNode("ColorRGBA");
ColorRGBA523.USE = "HAnimSiteLineColorRGBA";
LineSet522.color = ColorRGBA523;

Coordinate Coordinate524 = createNode("Coordinate");
Coordinate524.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet522.coord = Coordinate524;

Shape521.geometry = LineSet522;

HAnimSegment509.children[4] = Shape521;

HAnimSite HAnimSite525 = createNode("HAnimSite");
HAnimSite525.DEF = "hanim_r_thelion_pt";
HAnimSite525.name = "r_thelion_pt";
HAnimSite525.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor526 = createNode("TouchSensor");
TouchSensor526.description = "HAnimSite r_thelion";
HAnimSite525.children = new MFNode();

HAnimSite525.children[0] = TouchSensor526;

Shape Shape527 = createNode("Shape");
Shape527.USE = "HAnimSiteShape";
HAnimSite525.children[1] = Shape527;

HAnimSegment509.children[5] = HAnimSite525;

HAnimSite HAnimSite528 = createNode("HAnimSite");
HAnimSite528.DEF = "hanim_l_thelion_pt";
HAnimSite528.name = "l_thelion_pt";
HAnimSite528.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor529 = createNode("TouchSensor");
TouchSensor529.description = "HAnimSite l_thelion";
HAnimSite528.children = new MFNode();

HAnimSite528.children[0] = TouchSensor529;

Shape Shape530 = createNode("Shape");
Shape530.USE = "HAnimSiteShape";
HAnimSite528.children[1] = Shape530;

HAnimSegment509.children[6] = HAnimSite528;

HAnimJoint508.children = new MFNode();

HAnimJoint508.children[0] = HAnimSegment509;

HAnimJoint HAnimJoint531 = createNode("HAnimJoint");
HAnimJoint531.DEF = "hanim_vt8";
HAnimJoint531.name = "vt8";
HAnimJoint531.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimSegment HAnimSegment532 = createNode("HAnimSegment");
HAnimSegment532.DEF = "hanim_t8";
HAnimSegment532.name = "t8";
TouchSensor TouchSensor533 = createNode("TouchSensor");
TouchSensor533.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment532.children = new MFNode();

HAnimSegment532.children[0] = TouchSensor533;

Transform Transform534 = createNode("Transform");
Transform534.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Shape Shape535 = createNode("Shape");
Shape535.USE = "HAnimJointShape";
Transform534.child = new undefined();

Transform534.child[0] = Shape535;

HAnimSegment532.children[1] = Transform534;

Shape Shape536 = createNode("Shape");
LineSet LineSet537 = createNode("LineSet");
LineSet537.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA538 = createNode("ColorRGBA");
ColorRGBA538.USE = "HAnimSegmentLineColorRGBA";
LineSet537.color = ColorRGBA538;

Coordinate Coordinate539 = createNode("Coordinate");
Coordinate539.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet537.coord = Coordinate539;

Shape536.geometry = LineSet537;

HAnimSegment532.children[2] = Shape536;

HAnimJoint531.children = new MFNode();

HAnimJoint531.children[0] = HAnimSegment532;

HAnimJoint HAnimJoint540 = createNode("HAnimJoint");
HAnimJoint540.DEF = "hanim_vt7";
HAnimJoint540.name = "vt7";
HAnimJoint540.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimSegment HAnimSegment541 = createNode("HAnimSegment");
HAnimSegment541.DEF = "hanim_t7";
HAnimSegment541.name = "t7";
TouchSensor TouchSensor542 = createNode("TouchSensor");
TouchSensor542.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment541.children = new MFNode();

HAnimSegment541.children[0] = TouchSensor542;

Transform Transform543 = createNode("Transform");
Transform543.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Shape Shape544 = createNode("Shape");
Shape544.USE = "HAnimJointShape";
Transform543.child = new undefined();

Transform543.child[0] = Shape544;

HAnimSegment541.children[1] = Transform543;

Shape Shape545 = createNode("Shape");
LineSet LineSet546 = createNode("LineSet");
LineSet546.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA547 = createNode("ColorRGBA");
ColorRGBA547.USE = "HAnimSegmentLineColorRGBA";
LineSet546.color = ColorRGBA547;

Coordinate Coordinate548 = createNode("Coordinate");
Coordinate548.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet546.coord = Coordinate548;

Shape545.geometry = LineSet546;

HAnimSegment541.children[2] = Shape545;

HAnimJoint540.children = new MFNode();

HAnimJoint540.children[0] = HAnimSegment541;

HAnimJoint HAnimJoint549 = createNode("HAnimJoint");
HAnimJoint549.DEF = "hanim_vt6";
HAnimJoint549.name = "vt6";
HAnimJoint549.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment550 = createNode("HAnimSegment");
HAnimSegment550.DEF = "hanim_t6";
HAnimSegment550.name = "t6";
TouchSensor TouchSensor551 = createNode("TouchSensor");
TouchSensor551.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment550.children = new MFNode();

HAnimSegment550.children[0] = TouchSensor551;

Transform Transform552 = createNode("Transform");
Transform552.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Shape Shape553 = createNode("Shape");
Shape553.USE = "HAnimJointShape";
Transform552.child = new undefined();

Transform552.child[0] = Shape553;

HAnimSegment550.children[1] = Transform552;

Shape Shape554 = createNode("Shape");
LineSet LineSet555 = createNode("LineSet");
LineSet555.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA556 = createNode("ColorRGBA");
ColorRGBA556.USE = "HAnimSegmentLineColorRGBA";
LineSet555.color = ColorRGBA556;

Coordinate Coordinate557 = createNode("Coordinate");
Coordinate557.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet555.coord = Coordinate557;

Shape554.geometry = LineSet555;

HAnimSegment550.children[2] = Shape554;

HAnimJoint549.children = new MFNode();

HAnimJoint549.children[0] = HAnimSegment550;

HAnimJoint HAnimJoint558 = createNode("HAnimJoint");
HAnimJoint558.DEF = "hanim_vt5";
HAnimJoint558.name = "vt5";
HAnimJoint558.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimSegment HAnimSegment559 = createNode("HAnimSegment");
HAnimSegment559.DEF = "hanim_t5";
HAnimSegment559.name = "t5";
TouchSensor TouchSensor560 = createNode("TouchSensor");
TouchSensor560.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment559.children = new MFNode();

HAnimSegment559.children[0] = TouchSensor560;

Transform Transform561 = createNode("Transform");
Transform561.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Shape Shape562 = createNode("Shape");
Shape562.USE = "HAnimJointShape";
Transform561.child = new undefined();

Transform561.child[0] = Shape562;

HAnimSegment559.children[1] = Transform561;

Shape Shape563 = createNode("Shape");
LineSet LineSet564 = createNode("LineSet");
LineSet564.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA565 = createNode("ColorRGBA");
ColorRGBA565.USE = "HAnimSegmentLineColorRGBA";
LineSet564.color = ColorRGBA565;

Coordinate Coordinate566 = createNode("Coordinate");
Coordinate566.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet564.coord = Coordinate566;

Shape563.geometry = LineSet564;

HAnimSegment559.children[2] = Shape563;

HAnimJoint558.children = new MFNode();

HAnimJoint558.children[0] = HAnimSegment559;

HAnimJoint HAnimJoint567 = createNode("HAnimJoint");
HAnimJoint567.DEF = "hanim_vt4";
HAnimJoint567.name = "vt4";
HAnimJoint567.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimSegment HAnimSegment568 = createNode("HAnimSegment");
HAnimSegment568.DEF = "hanim_t4";
HAnimSegment568.name = "t4";
TouchSensor TouchSensor569 = createNode("TouchSensor");
TouchSensor569.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment568.children = new MFNode();

HAnimSegment568.children[0] = TouchSensor569;

Transform Transform570 = createNode("Transform");
Transform570.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Shape Shape571 = createNode("Shape");
Shape571.USE = "HAnimJointShape";
Transform570.child = new undefined();

Transform570.child[0] = Shape571;

HAnimSegment568.children[1] = Transform570;

Shape Shape572 = createNode("Shape");
LineSet LineSet573 = createNode("LineSet");
LineSet573.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA574 = createNode("ColorRGBA");
ColorRGBA574.USE = "HAnimSegmentLineColorRGBA";
LineSet573.color = ColorRGBA574;

Coordinate Coordinate575 = createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet573.coord = Coordinate575;

Shape572.geometry = LineSet573;

HAnimSegment568.children[2] = Shape572;

HAnimJoint567.children = new MFNode();

HAnimJoint567.children[0] = HAnimSegment568;

HAnimJoint HAnimJoint576 = createNode("HAnimJoint");
HAnimJoint576.DEF = "hanim_vt3";
HAnimJoint576.name = "vt3";
HAnimJoint576.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimSegment HAnimSegment577 = createNode("HAnimSegment");
HAnimSegment577.DEF = "hanim_t3";
HAnimSegment577.name = "t3";
TouchSensor TouchSensor578 = createNode("TouchSensor");
TouchSensor578.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment577.children = new MFNode();

HAnimSegment577.children[0] = TouchSensor578;

Transform Transform579 = createNode("Transform");
Transform579.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Shape Shape580 = createNode("Shape");
Shape580.USE = "HAnimJointShape";
Transform579.child = new undefined();

Transform579.child[0] = Shape580;

HAnimSegment577.children[1] = Transform579;

Shape Shape581 = createNode("Shape");
LineSet LineSet582 = createNode("LineSet");
LineSet582.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA583 = createNode("ColorRGBA");
ColorRGBA583.USE = "HAnimSegmentLineColorRGBA";
LineSet582.color = ColorRGBA583;

Coordinate Coordinate584 = createNode("Coordinate");
Coordinate584.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet582.coord = Coordinate584;

Shape581.geometry = LineSet582;

HAnimSegment577.children[2] = Shape581;

HAnimJoint576.children = new MFNode();

HAnimJoint576.children[0] = HAnimSegment577;

HAnimJoint HAnimJoint585 = createNode("HAnimJoint");
HAnimJoint585.DEF = "hanim_vt2";
HAnimJoint585.name = "vt2";
HAnimJoint585.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimSegment HAnimSegment586 = createNode("HAnimSegment");
HAnimSegment586.DEF = "hanim_t2";
HAnimSegment586.name = "t2";
TouchSensor TouchSensor587 = createNode("TouchSensor");
TouchSensor587.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment586.children = new MFNode();

HAnimSegment586.children[0] = TouchSensor587;

Transform Transform588 = createNode("Transform");
Transform588.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Shape Shape589 = createNode("Shape");
Shape589.USE = "HAnimJointShape";
Transform588.child = new undefined();

Transform588.child[0] = Shape589;

HAnimSegment586.children[1] = Transform588;

Shape Shape590 = createNode("Shape");
LineSet LineSet591 = createNode("LineSet");
LineSet591.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA592 = createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
LineSet591.color = ColorRGBA592;

Coordinate Coordinate593 = createNode("Coordinate");
Coordinate593.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet591.coord = Coordinate593;

Shape590.geometry = LineSet591;

HAnimSegment586.children[2] = Shape590;

HAnimJoint585.children = new MFNode();

HAnimJoint585.children[0] = HAnimSegment586;

HAnimJoint HAnimJoint594 = createNode("HAnimJoint");
HAnimJoint594.DEF = "hanim_vt1";
HAnimJoint594.name = "vt1";
HAnimJoint594.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment595 = createNode("HAnimSegment");
HAnimSegment595.DEF = "hanim_t1";
HAnimSegment595.name = "t1";
TouchSensor TouchSensor596 = createNode("TouchSensor");
TouchSensor596.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment595.children = new MFNode();

HAnimSegment595.children[0] = TouchSensor596;

Transform Transform597 = createNode("Transform");
Transform597.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Shape Shape598 = createNode("Shape");
Shape598.USE = "HAnimJointShape";
Transform597.child = new undefined();

Transform597.child[0] = Shape598;

HAnimSegment595.children[1] = Transform597;

Shape Shape599 = createNode("Shape");
LineSet LineSet600 = createNode("LineSet");
LineSet600.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA601 = createNode("ColorRGBA");
ColorRGBA601.USE = "HAnimSegmentLineColorRGBA";
LineSet600.color = ColorRGBA601;

Coordinate Coordinate602 = createNode("Coordinate");
Coordinate602.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet600.coord = Coordinate602;

Shape599.geometry = LineSet600;

HAnimSegment595.children[2] = Shape599;

Shape Shape603 = createNode("Shape");
LineSet LineSet604 = createNode("LineSet");
LineSet604.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA605 = createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
LineSet604.color = ColorRGBA605;

Coordinate Coordinate606 = createNode("Coordinate");
Coordinate606.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet604.coord = Coordinate606;

Shape603.geometry = LineSet604;

HAnimSegment595.children[3] = Shape603;

Shape Shape607 = createNode("Shape");
LineSet LineSet608 = createNode("LineSet");
LineSet608.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA609 = createNode("ColorRGBA");
ColorRGBA609.USE = "HAnimSegmentLineColorRGBA";
LineSet608.color = ColorRGBA609;

Coordinate Coordinate610 = createNode("Coordinate");
Coordinate610.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet608.coord = Coordinate610;

Shape607.geometry = LineSet608;

HAnimSegment595.children[4] = Shape607;

Shape Shape611 = createNode("Shape");
LineSet LineSet612 = createNode("LineSet");
LineSet612.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA613 = createNode("ColorRGBA");
ColorRGBA613.USE = "HAnimSiteLineColorRGBA";
LineSet612.color = ColorRGBA613;

Coordinate Coordinate614 = createNode("Coordinate");
Coordinate614.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet612.coord = Coordinate614;

Shape611.geometry = LineSet612;

HAnimSegment595.children[5] = Shape611;

Shape Shape615 = createNode("Shape");
LineSet LineSet616 = createNode("LineSet");
LineSet616.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA617 = createNode("ColorRGBA");
ColorRGBA617.USE = "HAnimSiteLineColorRGBA";
LineSet616.color = ColorRGBA617;

Coordinate Coordinate618 = createNode("Coordinate");
Coordinate618.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet616.coord = Coordinate618;

Shape615.geometry = LineSet616;

HAnimSegment595.children[6] = Shape615;

HAnimSite HAnimSite619 = createNode("HAnimSite");
HAnimSite619.DEF = "hanim_suprasternale_pt";
HAnimSite619.name = "suprasternale_pt";
HAnimSite619.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor620 = createNode("TouchSensor");
TouchSensor620.description = "HAnimSite suprasternale";
HAnimSite619.children = new MFNode();

HAnimSite619.children[0] = TouchSensor620;

Shape Shape621 = createNode("Shape");
Shape621.USE = "HAnimSiteShape";
HAnimSite619.children[1] = Shape621;

HAnimSegment595.children[7] = HAnimSite619;

HAnimSite HAnimSite622 = createNode("HAnimSite");
HAnimSite622.DEF = "hanim_cervicale_pt";
HAnimSite622.name = "cervicale_pt";
HAnimSite622.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor623 = createNode("TouchSensor");
TouchSensor623.description = "HAnimSite cervicale";
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = TouchSensor623;

Shape Shape624 = createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622.children[1] = Shape624;

HAnimSegment595.children[8] = HAnimSite622;

HAnimJoint594.children = new MFNode();

HAnimJoint594.children[0] = HAnimSegment595;

HAnimJoint HAnimJoint625 = createNode("HAnimJoint");
HAnimJoint625.DEF = "hanim_vc7";
HAnimJoint625.name = "vc7";
HAnimJoint625.rotation = new SFRotation(new float[-0.999999999999996,0,0,0.222164034843446]);
HAnimJoint625.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimSegment HAnimSegment626 = createNode("HAnimSegment");
HAnimSegment626.DEF = "hanim_c7";
HAnimSegment626.name = "c7";
TouchSensor TouchSensor627 = createNode("TouchSensor");
TouchSensor627.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment626.children = new MFNode();

HAnimSegment626.children[0] = TouchSensor627;

Transform Transform628 = createNode("Transform");
Transform628.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Shape Shape629 = createNode("Shape");
Shape629.USE = "HAnimJointShape";
Transform628.child = new undefined();

Transform628.child[0] = Shape629;

HAnimSegment626.children[1] = Transform628;

Shape Shape630 = createNode("Shape");
LineSet LineSet631 = createNode("LineSet");
LineSet631.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA632 = createNode("ColorRGBA");
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA";
LineSet631.color = ColorRGBA632;

Coordinate Coordinate633 = createNode("Coordinate");
Coordinate633.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet631.coord = Coordinate633;

Shape630.geometry = LineSet631;

HAnimSegment626.children[2] = Shape630;

Shape Shape634 = createNode("Shape");
LineSet LineSet635 = createNode("LineSet");
LineSet635.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA636 = createNode("ColorRGBA");
ColorRGBA636.USE = "HAnimSiteLineColorRGBA";
LineSet635.color = ColorRGBA636;

Coordinate Coordinate637 = createNode("Coordinate");
Coordinate637.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet635.coord = Coordinate637;

Shape634.geometry = LineSet635;

HAnimSegment626.children[3] = Shape634;

Shape Shape638 = createNode("Shape");
LineSet LineSet639 = createNode("LineSet");
LineSet639.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA640 = createNode("ColorRGBA");
ColorRGBA640.USE = "HAnimSiteLineColorRGBA";
LineSet639.color = ColorRGBA640;

Coordinate Coordinate641 = createNode("Coordinate");
Coordinate641.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet639.coord = Coordinate641;

Shape638.geometry = LineSet639;

HAnimSegment626.children[4] = Shape638;

HAnimSite HAnimSite642 = createNode("HAnimSite");
HAnimSite642.DEF = "hanim_r_neck_base_pt";
HAnimSite642.name = "r_neck_base_pt";
HAnimSite642.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor643 = createNode("TouchSensor");
TouchSensor643.description = "HAnimSite r_neck_base";
HAnimSite642.children = new MFNode();

HAnimSite642.children[0] = TouchSensor643;

Shape Shape644 = createNode("Shape");
Shape644.USE = "HAnimSiteShape";
HAnimSite642.children[1] = Shape644;

HAnimSegment626.children[5] = HAnimSite642;

HAnimSite HAnimSite645 = createNode("HAnimSite");
HAnimSite645.DEF = "hanim_l_neck_base_pt";
HAnimSite645.name = "l_neck_base_pt";
HAnimSite645.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor646 = createNode("TouchSensor");
TouchSensor646.description = "HAnimSite l_neck_base";
HAnimSite645.children = new MFNode();

HAnimSite645.children[0] = TouchSensor646;

Shape Shape647 = createNode("Shape");
Shape647.USE = "HAnimSiteShape";
HAnimSite645.children[1] = Shape647;

HAnimSegment626.children[6] = HAnimSite645;

HAnimJoint625.children = new MFNode();

HAnimJoint625.children[0] = HAnimSegment626;

HAnimJoint HAnimJoint648 = createNode("HAnimJoint");
HAnimJoint648.DEF = "hanim_vc6";
HAnimJoint648.name = "vc6";
HAnimJoint648.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimSegment HAnimSegment649 = createNode("HAnimSegment");
HAnimSegment649.DEF = "hanim_c6";
HAnimSegment649.name = "c6";
TouchSensor TouchSensor650 = createNode("TouchSensor");
TouchSensor650.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment649.children = new MFNode();

HAnimSegment649.children[0] = TouchSensor650;

Transform Transform651 = createNode("Transform");
Transform651.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Shape Shape652 = createNode("Shape");
Shape652.USE = "HAnimJointShape";
Transform651.child = new undefined();

Transform651.child[0] = Shape652;

HAnimSegment649.children[1] = Transform651;

Shape Shape653 = createNode("Shape");
LineSet LineSet654 = createNode("LineSet");
LineSet654.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA655 = createNode("ColorRGBA");
ColorRGBA655.USE = "HAnimSegmentLineColorRGBA";
LineSet654.color = ColorRGBA655;

Coordinate Coordinate656 = createNode("Coordinate");
Coordinate656.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet654.coord = Coordinate656;

Shape653.geometry = LineSet654;

HAnimSegment649.children[2] = Shape653;

HAnimJoint648.children = new MFNode();

HAnimJoint648.children[0] = HAnimSegment649;

HAnimJoint HAnimJoint657 = createNode("HAnimJoint");
HAnimJoint657.DEF = "hanim_vc5";
HAnimJoint657.name = "vc5";
HAnimJoint657.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimSegment HAnimSegment658 = createNode("HAnimSegment");
HAnimSegment658.DEF = "hanim_c5";
HAnimSegment658.name = "c5";
TouchSensor TouchSensor659 = createNode("TouchSensor");
TouchSensor659.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment658.children = new MFNode();

HAnimSegment658.children[0] = TouchSensor659;

Transform Transform660 = createNode("Transform");
Transform660.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Shape Shape661 = createNode("Shape");
Shape661.USE = "HAnimJointShape";
Transform660.child = new undefined();

Transform660.child[0] = Shape661;

HAnimSegment658.children[1] = Transform660;

Shape Shape662 = createNode("Shape");
LineSet LineSet663 = createNode("LineSet");
LineSet663.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA664 = createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet663.color = ColorRGBA664;

Coordinate Coordinate665 = createNode("Coordinate");
Coordinate665.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet663.coord = Coordinate665;

Shape662.geometry = LineSet663;

HAnimSegment658.children[2] = Shape662;

HAnimJoint657.children = new MFNode();

HAnimJoint657.children[0] = HAnimSegment658;

HAnimJoint HAnimJoint666 = createNode("HAnimJoint");
HAnimJoint666.DEF = "hanim_vc4";
HAnimJoint666.name = "vc4";
HAnimJoint666.rotation = new SFRotation(new float[1,0,0,0.302520108222961]);
HAnimJoint666.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment667 = createNode("HAnimSegment");
HAnimSegment667.DEF = "hanim_c4";
HAnimSegment667.name = "c4";
TouchSensor TouchSensor668 = createNode("TouchSensor");
TouchSensor668.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment667.children = new MFNode();

HAnimSegment667.children[0] = TouchSensor668;

Transform Transform669 = createNode("Transform");
Transform669.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Shape Shape670 = createNode("Shape");
Shape670.USE = "HAnimJointShape";
Transform669.child = new undefined();

Transform669.child[0] = Shape670;

HAnimSegment667.children[1] = Transform669;

Shape Shape671 = createNode("Shape");
LineSet LineSet672 = createNode("LineSet");
LineSet672.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA673 = createNode("ColorRGBA");
ColorRGBA673.USE = "HAnimSegmentLineColorRGBA";
LineSet672.color = ColorRGBA673;

Coordinate Coordinate674 = createNode("Coordinate");
Coordinate674.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet672.coord = Coordinate674;

Shape671.geometry = LineSet672;

HAnimSegment667.children[2] = Shape671;

HAnimJoint666.children = new MFNode();

HAnimJoint666.children[0] = HAnimSegment667;

HAnimJoint HAnimJoint675 = createNode("HAnimJoint");
HAnimJoint675.DEF = "hanim_vc3";
HAnimJoint675.name = "vc3";
HAnimJoint675.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimSegment HAnimSegment676 = createNode("HAnimSegment");
HAnimSegment676.DEF = "hanim_c3";
HAnimSegment676.name = "c3";
TouchSensor TouchSensor677 = createNode("TouchSensor");
TouchSensor677.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment676.children = new MFNode();

HAnimSegment676.children[0] = TouchSensor677;

Transform Transform678 = createNode("Transform");
Transform678.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Shape Shape679 = createNode("Shape");
Shape679.USE = "HAnimJointShape";
Transform678.child = new undefined();

Transform678.child[0] = Shape679;

HAnimSegment676.children[1] = Transform678;

Shape Shape680 = createNode("Shape");
LineSet LineSet681 = createNode("LineSet");
LineSet681.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA682 = createNode("ColorRGBA");
ColorRGBA682.USE = "HAnimSegmentLineColorRGBA";
LineSet681.color = ColorRGBA682;

Coordinate Coordinate683 = createNode("Coordinate");
Coordinate683.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet681.coord = Coordinate683;

Shape680.geometry = LineSet681;

HAnimSegment676.children[2] = Shape680;

HAnimJoint675.children = new MFNode();

HAnimJoint675.children[0] = HAnimSegment676;

HAnimJoint HAnimJoint684 = createNode("HAnimJoint");
HAnimJoint684.DEF = "hanim_vc2";
HAnimJoint684.name = "vc2";
HAnimJoint684.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment685 = createNode("HAnimSegment");
HAnimSegment685.DEF = "hanim_c2";
HAnimSegment685.name = "c2";
TouchSensor TouchSensor686 = createNode("TouchSensor");
TouchSensor686.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment685.children = new MFNode();

HAnimSegment685.children[0] = TouchSensor686;

Transform Transform687 = createNode("Transform");
Transform687.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Shape Shape688 = createNode("Shape");
Shape688.USE = "HAnimJointShape";
Transform687.child = new undefined();

Transform687.child[0] = Shape688;

HAnimSegment685.children[1] = Transform687;

Shape Shape689 = createNode("Shape");
LineSet LineSet690 = createNode("LineSet");
LineSet690.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA691 = createNode("ColorRGBA");
ColorRGBA691.USE = "HAnimSegmentLineColorRGBA";
LineSet690.color = ColorRGBA691;

Coordinate Coordinate692 = createNode("Coordinate");
Coordinate692.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet690.coord = Coordinate692;

Shape689.geometry = LineSet690;

HAnimSegment685.children[2] = Shape689;

HAnimJoint684.children = new MFNode();

HAnimJoint684.children[0] = HAnimSegment685;

HAnimJoint HAnimJoint693 = createNode("HAnimJoint");
HAnimJoint693.DEF = "hanim_vc1";
HAnimJoint693.name = "vc1";
HAnimJoint693.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimSegment HAnimSegment694 = createNode("HAnimSegment");
HAnimSegment694.DEF = "hanim_c1";
HAnimSegment694.name = "c1";
TouchSensor TouchSensor695 = createNode("TouchSensor");
TouchSensor695.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment694.children = new MFNode();

HAnimSegment694.children[0] = TouchSensor695;

Transform Transform696 = createNode("Transform");
Transform696.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Shape Shape697 = createNode("Shape");
Shape697.USE = "HAnimJointShape";
Transform696.child = new undefined();

Transform696.child[0] = Shape697;

HAnimSegment694.children[1] = Transform696;

Shape Shape698 = createNode("Shape");
LineSet LineSet699 = createNode("LineSet");
LineSet699.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA700 = createNode("ColorRGBA");
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA";
LineSet699.color = ColorRGBA700;

Coordinate Coordinate701 = createNode("Coordinate");
Coordinate701.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet699.coord = Coordinate701;

Shape698.geometry = LineSet699;

HAnimSegment694.children[2] = Shape698;

HAnimJoint693.children = new MFNode();

HAnimJoint693.children[0] = HAnimSegment694;

HAnimJoint HAnimJoint702 = createNode("HAnimJoint");
HAnimJoint702.DEF = "hanim_skullbase";
HAnimJoint702.name = "skullbase";
HAnimJoint702.rotation = new SFRotation(new float[-1.00000000000001,0,0,0.231096035769597]);
HAnimJoint702.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment703 = createNode("HAnimSegment");
HAnimSegment703.DEF = "hanim_skull";
HAnimSegment703.name = "skull";
TouchSensor TouchSensor704 = createNode("TouchSensor");
TouchSensor704.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment703.children = new MFNode();

HAnimSegment703.children[0] = TouchSensor704;

Transform Transform705 = createNode("Transform");
Transform705.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape706 = createNode("Shape");
Shape706.USE = "HAnimJointShape";
Transform705.child = new undefined();

Transform705.child[0] = Shape706;

HAnimSegment703.children[1] = Transform705;

Shape Shape707 = createNode("Shape");
LineSet LineSet708 = createNode("LineSet");
LineSet708.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA709 = createNode("ColorRGBA");
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA";
LineSet708.color = ColorRGBA709;

Coordinate Coordinate710 = createNode("Coordinate");
Coordinate710.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet708.coord = Coordinate710;

Shape707.geometry = LineSet708;

HAnimSegment703.children[2] = Shape707;

Shape Shape711 = createNode("Shape");
LineSet LineSet712 = createNode("LineSet");
LineSet712.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA713 = createNode("ColorRGBA");
ColorRGBA713.USE = "HAnimSegmentLineColorRGBA";
LineSet712.color = ColorRGBA713;

Coordinate Coordinate714 = createNode("Coordinate");
Coordinate714.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet712.coord = Coordinate714;

Shape711.geometry = LineSet712;

HAnimSegment703.children[3] = Shape711;

Shape Shape715 = createNode("Shape");
LineSet LineSet716 = createNode("LineSet");
LineSet716.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA717 = createNode("ColorRGBA");
ColorRGBA717.USE = "HAnimSegmentLineColorRGBA";
LineSet716.color = ColorRGBA717;

Coordinate Coordinate718 = createNode("Coordinate");
Coordinate718.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet716.coord = Coordinate718;

Shape715.geometry = LineSet716;

HAnimSegment703.children[4] = Shape715;

Shape Shape719 = createNode("Shape");
LineSet LineSet720 = createNode("LineSet");
LineSet720.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA721 = createNode("ColorRGBA");
ColorRGBA721.USE = "HAnimSegmentLineColorRGBA";
LineSet720.color = ColorRGBA721;

Coordinate Coordinate722 = createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet720.coord = Coordinate722;

Shape719.geometry = LineSet720;

HAnimSegment703.children[5] = Shape719;

Shape Shape723 = createNode("Shape");
LineSet LineSet724 = createNode("LineSet");
LineSet724.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA725 = createNode("ColorRGBA");
ColorRGBA725.USE = "HAnimSegmentLineColorRGBA";
LineSet724.color = ColorRGBA725;

Coordinate Coordinate726 = createNode("Coordinate");
Coordinate726.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet724.coord = Coordinate726;

Shape723.geometry = LineSet724;

HAnimSegment703.children[6] = Shape723;

Shape Shape727 = createNode("Shape");
LineSet LineSet728 = createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA729 = createNode("ColorRGBA");
ColorRGBA729.USE = "HAnimSegmentLineColorRGBA";
LineSet728.color = ColorRGBA729;

Coordinate Coordinate730 = createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet728.coord = Coordinate730;

Shape727.geometry = LineSet728;

HAnimSegment703.children[7] = Shape727;

Shape Shape731 = createNode("Shape");
LineSet LineSet732 = createNode("LineSet");
LineSet732.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA733 = createNode("ColorRGBA");
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA";
LineSet732.color = ColorRGBA733;

Coordinate Coordinate734 = createNode("Coordinate");
Coordinate734.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet732.coord = Coordinate734;

Shape731.geometry = LineSet732;

HAnimSegment703.children[8] = Shape731;

Shape Shape735 = createNode("Shape");
LineSet LineSet736 = createNode("LineSet");
LineSet736.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA737 = createNode("ColorRGBA");
ColorRGBA737.USE = "HAnimSiteLineColorRGBA";
LineSet736.color = ColorRGBA737;

Coordinate Coordinate738 = createNode("Coordinate");
Coordinate738.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet736.coord = Coordinate738;

Shape735.geometry = LineSet736;

HAnimSegment703.children[9] = Shape735;

Shape Shape739 = createNode("Shape");
LineSet LineSet740 = createNode("LineSet");
LineSet740.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA741 = createNode("ColorRGBA");
ColorRGBA741.USE = "HAnimSiteLineColorRGBA";
LineSet740.color = ColorRGBA741;

Coordinate Coordinate742 = createNode("Coordinate");
Coordinate742.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet740.coord = Coordinate742;

Shape739.geometry = LineSet740;

HAnimSegment703.children[10] = Shape739;

Shape Shape743 = createNode("Shape");
LineSet LineSet744 = createNode("LineSet");
LineSet744.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA745 = createNode("ColorRGBA");
ColorRGBA745.USE = "HAnimSiteLineColorRGBA";
LineSet744.color = ColorRGBA745;

Coordinate Coordinate746 = createNode("Coordinate");
Coordinate746.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet744.coord = Coordinate746;

Shape743.geometry = LineSet744;

HAnimSegment703.children[11] = Shape743;

Shape Shape747 = createNode("Shape");
LineSet LineSet748 = createNode("LineSet");
LineSet748.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA749 = createNode("ColorRGBA");
ColorRGBA749.USE = "HAnimSiteLineColorRGBA";
LineSet748.color = ColorRGBA749;

Coordinate Coordinate750 = createNode("Coordinate");
Coordinate750.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet748.coord = Coordinate750;

Shape747.geometry = LineSet748;

HAnimSegment703.children[12] = Shape747;

Shape Shape751 = createNode("Shape");
LineSet LineSet752 = createNode("LineSet");
LineSet752.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA753 = createNode("ColorRGBA");
ColorRGBA753.USE = "HAnimSiteLineColorRGBA";
LineSet752.color = ColorRGBA753;

Coordinate Coordinate754 = createNode("Coordinate");
Coordinate754.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet752.coord = Coordinate754;

Shape751.geometry = LineSet752;

HAnimSegment703.children[13] = Shape751;

Shape Shape755 = createNode("Shape");
LineSet LineSet756 = createNode("LineSet");
LineSet756.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA757 = createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSiteLineColorRGBA";
LineSet756.color = ColorRGBA757;

Coordinate Coordinate758 = createNode("Coordinate");
Coordinate758.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet756.coord = Coordinate758;

Shape755.geometry = LineSet756;

HAnimSegment703.children[14] = Shape755;

Shape Shape759 = createNode("Shape");
LineSet LineSet760 = createNode("LineSet");
LineSet760.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA761 = createNode("ColorRGBA");
ColorRGBA761.USE = "HAnimSiteLineColorRGBA";
LineSet760.color = ColorRGBA761;

Coordinate Coordinate762 = createNode("Coordinate");
Coordinate762.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet760.coord = Coordinate762;

Shape759.geometry = LineSet760;

HAnimSegment703.children[15] = Shape759;

Shape Shape763 = createNode("Shape");
LineSet LineSet764 = createNode("LineSet");
LineSet764.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA765 = createNode("ColorRGBA");
ColorRGBA765.USE = "HAnimSiteLineColorRGBA";
LineSet764.color = ColorRGBA765;

Coordinate Coordinate766 = createNode("Coordinate");
Coordinate766.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet764.coord = Coordinate766;

Shape763.geometry = LineSet764;

HAnimSegment703.children[16] = Shape763;

Shape Shape767 = createNode("Shape");
LineSet LineSet768 = createNode("LineSet");
LineSet768.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA769 = createNode("ColorRGBA");
ColorRGBA769.USE = "HAnimSiteLineColorRGBA";
LineSet768.color = ColorRGBA769;

Coordinate Coordinate770 = createNode("Coordinate");
Coordinate770.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet768.coord = Coordinate770;

Shape767.geometry = LineSet768;

HAnimSegment703.children[17] = Shape767;

Shape Shape771 = createNode("Shape");
LineSet LineSet772 = createNode("LineSet");
LineSet772.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA773 = createNode("ColorRGBA");
ColorRGBA773.USE = "HAnimSiteLineColorRGBA";
LineSet772.color = ColorRGBA773;

Coordinate Coordinate774 = createNode("Coordinate");
Coordinate774.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet772.coord = Coordinate774;

Shape771.geometry = LineSet772;

HAnimSegment703.children[18] = Shape771;

HAnimSite HAnimSite775 = createNode("HAnimSite");
HAnimSite775.DEF = "hanim_skull_tip";
HAnimSite775.name = "skull_tip";
HAnimSite775.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor776 = createNode("TouchSensor");
TouchSensor776.description = "HAnimSite skull_tip";
HAnimSite775.children = new MFNode();

HAnimSite775.children[0] = TouchSensor776;

Shape Shape777 = createNode("Shape");
Shape777.USE = "HAnimSiteShape";
HAnimSite775.children[1] = Shape777;

HAnimSegment703.children[19] = HAnimSite775;

HAnimSite HAnimSite778 = createNode("HAnimSite");
HAnimSite778.DEF = "hanim_sellion_pt";
HAnimSite778.name = "sellion_pt";
HAnimSite778.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor779 = createNode("TouchSensor");
TouchSensor779.description = "HAnimSite sellion";
HAnimSite778.children = new MFNode();

HAnimSite778.children[0] = TouchSensor779;

Shape Shape780 = createNode("Shape");
Shape780.USE = "HAnimSiteShape";
HAnimSite778.children[1] = Shape780;

HAnimSegment703.children[20] = HAnimSite778;

HAnimSite HAnimSite781 = createNode("HAnimSite");
HAnimSite781.DEF = "hanim_r_infraorbitale_pt";
HAnimSite781.name = "r_infraorbitale_pt";
HAnimSite781.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor782 = createNode("TouchSensor");
TouchSensor782.description = "HAnimSite r_infraorbitale";
HAnimSite781.children = new MFNode();

HAnimSite781.children[0] = TouchSensor782;

Shape Shape783 = createNode("Shape");
Shape783.USE = "HAnimSiteShape";
HAnimSite781.children[1] = Shape783;

HAnimSegment703.children[21] = HAnimSite781;

HAnimSite HAnimSite784 = createNode("HAnimSite");
HAnimSite784.DEF = "hanim_l_infraorbitale_pt";
HAnimSite784.name = "l_infraorbitale_pt";
HAnimSite784.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor785 = createNode("TouchSensor");
TouchSensor785.description = "HAnimSite l_infraorbitale";
HAnimSite784.children = new MFNode();

HAnimSite784.children[0] = TouchSensor785;

Shape Shape786 = createNode("Shape");
Shape786.USE = "HAnimSiteShape";
HAnimSite784.children[1] = Shape786;

HAnimSegment703.children[22] = HAnimSite784;

HAnimSite HAnimSite787 = createNode("HAnimSite");
HAnimSite787.DEF = "hanim_supramenton_pt";
HAnimSite787.name = "supramenton_pt";
HAnimSite787.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor788 = createNode("TouchSensor");
TouchSensor788.description = "HAnimSite supramenton";
HAnimSite787.children = new MFNode();

HAnimSite787.children[0] = TouchSensor788;

Shape Shape789 = createNode("Shape");
Shape789.USE = "HAnimSiteShape";
HAnimSite787.children[1] = Shape789;

HAnimSegment703.children[23] = HAnimSite787;

HAnimSite HAnimSite790 = createNode("HAnimSite");
HAnimSite790.DEF = "hanim_r_tragion_pt";
HAnimSite790.name = "r_tragion_pt";
HAnimSite790.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor791 = createNode("TouchSensor");
TouchSensor791.description = "HAnimSite r_tragion";
HAnimSite790.children = new MFNode();

HAnimSite790.children[0] = TouchSensor791;

Shape Shape792 = createNode("Shape");
Shape792.USE = "HAnimSiteShape";
HAnimSite790.children[1] = Shape792;

HAnimSegment703.children[24] = HAnimSite790;

HAnimSite HAnimSite793 = createNode("HAnimSite");
HAnimSite793.DEF = "hanim_r_gonion_pt";
HAnimSite793.name = "r_gonion_pt";
HAnimSite793.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor794 = createNode("TouchSensor");
TouchSensor794.description = "HAnimSite r_gonion";
HAnimSite793.children = new MFNode();

HAnimSite793.children[0] = TouchSensor794;

Shape Shape795 = createNode("Shape");
Shape795.USE = "HAnimSiteShape";
HAnimSite793.children[1] = Shape795;

HAnimSegment703.children[25] = HAnimSite793;

HAnimSite HAnimSite796 = createNode("HAnimSite");
HAnimSite796.DEF = "hanim_l_tragion_pt";
HAnimSite796.name = "l_tragion_pt";
HAnimSite796.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor797 = createNode("TouchSensor");
TouchSensor797.description = "HAnimSite l_tragion";
HAnimSite796.children = new MFNode();

HAnimSite796.children[0] = TouchSensor797;

Shape Shape798 = createNode("Shape");
Shape798.USE = "HAnimSiteShape";
HAnimSite796.children[1] = Shape798;

HAnimSegment703.children[26] = HAnimSite796;

HAnimSite HAnimSite799 = createNode("HAnimSite");
HAnimSite799.DEF = "hanim_l_gonion_pt";
HAnimSite799.name = "l_gonion_pt";
HAnimSite799.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor800 = createNode("TouchSensor");
TouchSensor800.description = "HAnimSite l_gonion";
HAnimSite799.children = new MFNode();

HAnimSite799.children[0] = TouchSensor800;

Shape Shape801 = createNode("Shape");
Shape801.USE = "HAnimSiteShape";
HAnimSite799.children[1] = Shape801;

HAnimSegment703.children[27] = HAnimSite799;

HAnimSite HAnimSite802 = createNode("HAnimSite");
HAnimSite802.DEF = "hanim_nuchale_pt";
HAnimSite802.name = "nuchale_pt";
HAnimSite802.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor803 = createNode("TouchSensor");
TouchSensor803.description = "HAnimSite nuchale";
HAnimSite802.children = new MFNode();

HAnimSite802.children[0] = TouchSensor803;

Shape Shape804 = createNode("Shape");
Shape804.USE = "HAnimSiteShape";
HAnimSite802.children[1] = Shape804;

HAnimSegment703.children[28] = HAnimSite802;

HAnimJoint702.children = new MFNode();

HAnimJoint702.children[0] = HAnimSegment703;

HAnimJoint HAnimJoint805 = createNode("HAnimJoint");
HAnimJoint805.DEF = "hanim_l_eyeball_joint";
HAnimJoint805.name = "l_eyeball_joint";
HAnimJoint805.rotation = new SFRotation(new float[-0.999999999999999,0,0,0.277705039416179]);
HAnimJoint805.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment806 = createNode("HAnimSegment");
HAnimSegment806.DEF = "hanim_l_eyeball";
HAnimSegment806.name = "l_eyeball";
TouchSensor TouchSensor807 = createNode("TouchSensor");
TouchSensor807.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment806.children = new MFNode();

HAnimSegment806.children[0] = TouchSensor807;

Transform Transform808 = createNode("Transform");
Transform808.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape809 = createNode("Shape");
Shape809.USE = "HAnimJointShape";
Transform808.child = new undefined();

Transform808.child[0] = Shape809;

HAnimSegment806.children[1] = Transform808;

Shape Shape810 = createNode("Shape");
LineSet LineSet811 = createNode("LineSet");
LineSet811.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA812 = createNode("ColorRGBA");
ColorRGBA812.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA812.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet811.color = ColorRGBA812;

Coordinate Coordinate813 = createNode("Coordinate");
Coordinate813.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet811.coord = Coordinate813;

Shape810.geometry = LineSet811;

HAnimSegment806.children[2] = Shape810;

HAnimSite HAnimSite814 = createNode("HAnimSite");
HAnimSite814.DEF = "hanim_l_eyeball_site_view";
HAnimSite814.name = "l_eyeball_site_view";
HAnimSite814.translation = new SFVec3f(new float[0.034,1.64,0.05]);
Viewpoint Viewpoint815 = createNode("Viewpoint");
Viewpoint815.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint815.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint815.position = new SFVec3f(new float[0,0,0]);
Viewpoint815.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite814.children = new MFNode();

HAnimSite814.children[0] = Viewpoint815;

Anchor Anchor816 = createNode("Anchor");
Anchor816.description = "HAnimSite Viewpoint hanim_l_eyeball_site_view";
Anchor816.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
LOD LOD817 = createNode("LOD");
LOD817.forceTransitions = True;
LOD817.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo818 = createNode("WorldInfo");
WorldInfo818.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD817.children = new MFNode();

LOD817.children[0] = WorldInfo818;

Shape Shape819 = createNode("Shape");
Shape819.DEF = "HAnimSiteViewpointShape";
Appearance Appearance820 = createNode("Appearance");
Material Material821 = createNode("Material");
Material821.diffuseColor = new SFColor(new float[0,0,1]);
Material821.transparency = 0.6;
Appearance820.material = Material821;

Shape819.appearance = Appearance820;

IndexedFaceSet IndexedFaceSet822 = createNode("IndexedFaceSet");
IndexedFaceSet822.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet822.creaseAngle = 0.5;
IndexedFaceSet822.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate823 = createNode("Coordinate");
Coordinate823.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet822.coord = Coordinate823;

Shape819.geometry = IndexedFaceSet822;

LOD817.children[1] = Shape819;

Anchor816.children = new MFNode();

Anchor816.children[0] = LOD817;

HAnimSite814.children[1] = Anchor816;

HAnimSegment806.children[3] = HAnimSite814;

HAnimJoint805.children = new MFNode();

HAnimJoint805.children[0] = HAnimSegment806;

HAnimJoint702.children[1] = HAnimJoint805;

HAnimJoint HAnimJoint824 = createNode("HAnimJoint");
HAnimJoint824.DEF = "hanim_l_eyelid_joint";
HAnimJoint824.name = "l_eyelid_joint";
HAnimJoint824.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment825 = createNode("HAnimSegment");
HAnimSegment825.DEF = "hanim_l_eyelid";
HAnimSegment825.name = "l_eyelid";
TouchSensor TouchSensor826 = createNode("TouchSensor");
TouchSensor826.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment825.children = new MFNode();

HAnimSegment825.children[0] = TouchSensor826;

Transform Transform827 = createNode("Transform");
Transform827.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape828 = createNode("Shape");
Shape828.USE = "HAnimJointShape";
Transform827.child = new undefined();

Transform827.child[0] = Shape828;

HAnimSegment825.children[1] = Transform827;

HAnimJoint824.children = new MFNode();

HAnimJoint824.children[0] = HAnimSegment825;

HAnimJoint702.children[2] = HAnimJoint824;

HAnimJoint HAnimJoint829 = createNode("HAnimJoint");
HAnimJoint829.DEF = "hanim_l_eyebrow_joint";
HAnimJoint829.name = "l_eyebrow_joint";
HAnimJoint829.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimSegment HAnimSegment830 = createNode("HAnimSegment");
HAnimSegment830.DEF = "hanim_l_eyebrow";
HAnimSegment830.name = "l_eyebrow";
TouchSensor TouchSensor831 = createNode("TouchSensor");
TouchSensor831.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment830.children = new MFNode();

HAnimSegment830.children[0] = TouchSensor831;

Transform Transform832 = createNode("Transform");
Transform832.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
Shape Shape833 = createNode("Shape");
Shape833.USE = "HAnimJointShape";
Transform832.child = new undefined();

Transform832.child[0] = Shape833;

HAnimSegment830.children[1] = Transform832;

HAnimJoint829.children = new MFNode();

HAnimJoint829.children[0] = HAnimSegment830;

HAnimJoint702.children[3] = HAnimJoint829;

HAnimJoint HAnimJoint834 = createNode("HAnimJoint");
HAnimJoint834.DEF = "hanim_r_eyeball_joint";
HAnimJoint834.name = "r_eyeball_joint";
HAnimJoint834.rotation = new SFRotation(new float[-0.999999999999999,0,0,0.277705039416179]);
HAnimJoint834.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment835 = createNode("HAnimSegment");
HAnimSegment835.DEF = "hanim_r_eyeball";
HAnimSegment835.name = "r_eyeball";
TouchSensor TouchSensor836 = createNode("TouchSensor");
TouchSensor836.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = TouchSensor836;

Transform Transform837 = createNode("Transform");
Transform837.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape838 = createNode("Shape");
Shape838.USE = "HAnimJointShape";
Transform837.child = new undefined();

Transform837.child[0] = Shape838;

HAnimSegment835.children[1] = Transform837;

Shape Shape839 = createNode("Shape");
LineSet LineSet840 = createNode("LineSet");
LineSet840.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA841 = createNode("ColorRGBA");
ColorRGBA841.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet840.color = ColorRGBA841;

Coordinate Coordinate842 = createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet840.coord = Coordinate842;

Shape839.geometry = LineSet840;

HAnimSegment835.children[2] = Shape839;

HAnimSite HAnimSite843 = createNode("HAnimSite");
HAnimSite843.DEF = "hanim_r_eyeball_site_view";
HAnimSite843.name = "r_eyeball_site_view";
HAnimSite843.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
Viewpoint Viewpoint844 = createNode("Viewpoint");
Viewpoint844.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint844.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint844.position = new SFVec3f(new float[0,0,0]);
Viewpoint844.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite843.children = new MFNode();

HAnimSite843.children[0] = Viewpoint844;

Anchor Anchor845 = createNode("Anchor");
Anchor845.description = "HAnimSite Viewpoint hanim_r_eyeball_site_view";
Anchor845.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
LOD LOD846 = createNode("LOD");
LOD846.forceTransitions = True;
LOD846.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo847 = createNode("WorldInfo");
WorldInfo847.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD846.children = new MFNode();

LOD846.children[0] = WorldInfo847;

Shape Shape848 = createNode("Shape");
Shape848.USE = "HAnimSiteViewpointShape";
LOD846.children[1] = Shape848;

Anchor845.children = new MFNode();

Anchor845.children[0] = LOD846;

HAnimSite843.children[1] = Anchor845;

HAnimSegment835.children[3] = HAnimSite843;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

HAnimJoint702.children[4] = HAnimJoint834;

HAnimJoint HAnimJoint849 = createNode("HAnimJoint");
HAnimJoint849.DEF = "hanim_r_eyelid_joint";
HAnimJoint849.name = "r_eyelid_joint";
HAnimJoint849.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment850 = createNode("HAnimSegment");
HAnimSegment850.DEF = "hanim_r_eyelid";
HAnimSegment850.name = "r_eyelid";
TouchSensor TouchSensor851 = createNode("TouchSensor");
TouchSensor851.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment850.children = new MFNode();

HAnimSegment850.children[0] = TouchSensor851;

Transform Transform852 = createNode("Transform");
Transform852.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape853 = createNode("Shape");
Shape853.USE = "HAnimJointShape";
Transform852.child = new undefined();

Transform852.child[0] = Shape853;

HAnimSegment850.children[1] = Transform852;

HAnimJoint849.children = new MFNode();

HAnimJoint849.children[0] = HAnimSegment850;

HAnimJoint702.children[5] = HAnimJoint849;

HAnimJoint HAnimJoint854 = createNode("HAnimJoint");
HAnimJoint854.DEF = "hanim_r_eyebrow_joint";
HAnimJoint854.name = "r_eyebrow_joint";
HAnimJoint854.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimSegment HAnimSegment855 = createNode("HAnimSegment");
HAnimSegment855.DEF = "hanim_r_eyebrow";
HAnimSegment855.name = "r_eyebrow";
TouchSensor TouchSensor856 = createNode("TouchSensor");
TouchSensor856.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment855.children = new MFNode();

HAnimSegment855.children[0] = TouchSensor856;

Transform Transform857 = createNode("Transform");
Transform857.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
Shape Shape858 = createNode("Shape");
Shape858.USE = "HAnimJointShape";
Transform857.child = new undefined();

Transform857.child[0] = Shape858;

HAnimSegment855.children[1] = Transform857;

HAnimJoint854.children = new MFNode();

HAnimJoint854.children[0] = HAnimSegment855;

HAnimJoint702.children[6] = HAnimJoint854;

HAnimJoint HAnimJoint859 = createNode("HAnimJoint");
HAnimJoint859.DEF = "hanim_temporomandibular";
HAnimJoint859.name = "temporomandibular";
HAnimJoint859.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimSegment HAnimSegment860 = createNode("HAnimSegment");
HAnimSegment860.DEF = "hanim_jaw";
HAnimSegment860.name = "jaw";
TouchSensor TouchSensor861 = createNode("TouchSensor");
TouchSensor861.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment860.children = new MFNode();

HAnimSegment860.children[0] = TouchSensor861;

Transform Transform862 = createNode("Transform");
Transform862.translation = new SFVec3f(new float[0,1.63,0.015]);
Shape Shape863 = createNode("Shape");
Shape863.USE = "HAnimJointShape";
Transform862.child = new undefined();

Transform862.child[0] = Shape863;

HAnimSegment860.children[1] = Transform862;

Shape Shape864 = createNode("Shape");
LineSet LineSet865 = createNode("LineSet");
LineSet865.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA866 = createNode("ColorRGBA");
ColorRGBA866.USE = "HAnimSiteLineColorRGBA";
LineSet865.color = ColorRGBA866;

Coordinate Coordinate867 = createNode("Coordinate");
Coordinate867.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet865.coord = Coordinate867;

Shape864.geometry = LineSet865;

HAnimSegment860.children[2] = Shape864;

Shape Shape868 = createNode("Shape");
LineSet LineSet869 = createNode("LineSet");
LineSet869.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA870 = createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSiteLineColorRGBA";
LineSet869.color = ColorRGBA870;

Coordinate Coordinate871 = createNode("Coordinate");
Coordinate871.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet869.coord = Coordinate871;

Shape868.geometry = LineSet869;

HAnimSegment860.children[3] = Shape868;

HAnimSite HAnimSite872 = createNode("HAnimSite");
HAnimSite872.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite872.name = "temporomandibular_l_site_pt";
HAnimSite872.translation = new SFVec3f(new float[0.045,1.63,0]);
TouchSensor TouchSensor873 = createNode("TouchSensor");
TouchSensor873.description = "HAnimSite temporomandibular_l_site";
HAnimSite872.children = new MFNode();

HAnimSite872.children[0] = TouchSensor873;

Shape Shape874 = createNode("Shape");
Shape874.USE = "HAnimSiteShape";
HAnimSite872.children[1] = Shape874;

HAnimSegment860.children[4] = HAnimSite872;

HAnimSite HAnimSite875 = createNode("HAnimSite");
HAnimSite875.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite875.name = "temporomandibular_r_site_pt";
HAnimSite875.translation = new SFVec3f(new float[-0.045,1.63,0]);
TouchSensor TouchSensor876 = createNode("TouchSensor");
TouchSensor876.description = "HAnimSite temporomandibular_r_site";
HAnimSite875.children = new MFNode();

HAnimSite875.children[0] = TouchSensor876;

Shape Shape877 = createNode("Shape");
Shape877.USE = "HAnimSiteShape";
HAnimSite875.children[1] = Shape877;

HAnimSegment860.children[5] = HAnimSite875;

HAnimJoint859.children = new MFNode();

HAnimJoint859.children[0] = HAnimSegment860;

HAnimJoint702.children[7] = HAnimJoint859;

HAnimJoint693.children[1] = HAnimJoint702;

HAnimJoint684.children[1] = HAnimJoint693;

HAnimJoint675.children[1] = HAnimJoint684;

HAnimJoint666.children[1] = HAnimJoint675;

HAnimJoint657.children[1] = HAnimJoint666;

HAnimJoint648.children[1] = HAnimJoint657;

HAnimJoint625.children[1] = HAnimJoint648;

HAnimJoint594.children[1] = HAnimJoint625;

HAnimJoint HAnimJoint878 = createNode("HAnimJoint");
HAnimJoint878.DEF = "hanim_l_sternoclavicular";
HAnimJoint878.name = "l_sternoclavicular";
HAnimJoint878.rotation = new SFRotation(new float[0,0,1.00000000000003,0.108042894183947]);
HAnimJoint878.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment879 = createNode("HAnimSegment");
HAnimSegment879.DEF = "hanim_l_clavicle";
HAnimSegment879.name = "l_clavicle";
TouchSensor TouchSensor880 = createNode("TouchSensor");
TouchSensor880.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment879.children = new MFNode();

HAnimSegment879.children[0] = TouchSensor880;

Transform Transform881 = createNode("Transform");
Transform881.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape882 = createNode("Shape");
Shape882.USE = "HAnimJointShape";
Transform881.child = new undefined();

Transform881.child[0] = Shape882;

HAnimSegment879.children[1] = Transform881;

Shape Shape883 = createNode("Shape");
LineSet LineSet884 = createNode("LineSet");
LineSet884.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA885 = createNode("ColorRGBA");
ColorRGBA885.USE = "HAnimSegmentLineColorRGBA";
LineSet884.color = ColorRGBA885;

Coordinate Coordinate886 = createNode("Coordinate");
Coordinate886.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet884.coord = Coordinate886;

Shape883.geometry = LineSet884;

HAnimSegment879.children[2] = Shape883;

Shape Shape887 = createNode("Shape");
LineSet LineSet888 = createNode("LineSet");
LineSet888.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA889 = createNode("ColorRGBA");
ColorRGBA889.USE = "HAnimSiteLineColorRGBA";
LineSet888.color = ColorRGBA889;

Coordinate Coordinate890 = createNode("Coordinate");
Coordinate890.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet888.coord = Coordinate890;

Shape887.geometry = LineSet888;

HAnimSegment879.children[3] = Shape887;

Shape Shape891 = createNode("Shape");
LineSet LineSet892 = createNode("LineSet");
LineSet892.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA893 = createNode("ColorRGBA");
ColorRGBA893.USE = "HAnimSiteLineColorRGBA";
LineSet892.color = ColorRGBA893;

Coordinate Coordinate894 = createNode("Coordinate");
Coordinate894.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet892.coord = Coordinate894;

Shape891.geometry = LineSet892;

HAnimSegment879.children[4] = Shape891;

Shape Shape895 = createNode("Shape");
LineSet LineSet896 = createNode("LineSet");
LineSet896.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA897 = createNode("ColorRGBA");
ColorRGBA897.USE = "HAnimSiteLineColorRGBA";
LineSet896.color = ColorRGBA897;

Coordinate Coordinate898 = createNode("Coordinate");
Coordinate898.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet896.coord = Coordinate898;

Shape895.geometry = LineSet896;

HAnimSegment879.children[5] = Shape895;

Shape Shape899 = createNode("Shape");
LineSet LineSet900 = createNode("LineSet");
LineSet900.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA901 = createNode("ColorRGBA");
ColorRGBA901.USE = "HAnimSiteLineColorRGBA";
LineSet900.color = ColorRGBA901;

Coordinate Coordinate902 = createNode("Coordinate");
Coordinate902.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet900.coord = Coordinate902;

Shape899.geometry = LineSet900;

HAnimSegment879.children[6] = Shape899;

HAnimSite HAnimSite903 = createNode("HAnimSite");
HAnimSite903.DEF = "hanim_l_clavicale_pt";
HAnimSite903.name = "l_clavicale_pt";
HAnimSite903.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor904 = createNode("TouchSensor");
TouchSensor904.description = "HAnimSite l_clavicale";
HAnimSite903.children = new MFNode();

HAnimSite903.children[0] = TouchSensor904;

Shape Shape905 = createNode("Shape");
Shape905.USE = "HAnimSiteShape";
HAnimSite903.children[1] = Shape905;

HAnimSegment879.children[7] = HAnimSite903;

HAnimSite HAnimSite906 = createNode("HAnimSite");
HAnimSite906.DEF = "hanim_l_acromion_pt";
HAnimSite906.name = "l_acromion_pt";
HAnimSite906.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor907 = createNode("TouchSensor");
TouchSensor907.description = "HAnimSite l_acromion";
HAnimSite906.children = new MFNode();

HAnimSite906.children[0] = TouchSensor907;

Shape Shape908 = createNode("Shape");
Shape908.USE = "HAnimSiteShape";
HAnimSite906.children[1] = Shape908;

HAnimSegment879.children[8] = HAnimSite906;

HAnimSite HAnimSite909 = createNode("HAnimSite");
HAnimSite909.DEF = "hanim_l_axilla_ant_pt";
HAnimSite909.name = "l_axilla_ant_pt";
HAnimSite909.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor910 = createNode("TouchSensor");
TouchSensor910.description = "HAnimSite l_axilla_ant";
HAnimSite909.children = new MFNode();

HAnimSite909.children[0] = TouchSensor910;

Shape Shape911 = createNode("Shape");
Shape911.USE = "HAnimSiteShape";
HAnimSite909.children[1] = Shape911;

HAnimSegment879.children[9] = HAnimSite909;

HAnimSite HAnimSite912 = createNode("HAnimSite");
HAnimSite912.DEF = "hanim_l_axilla_post_pt";
HAnimSite912.name = "l_axilla_post_pt";
HAnimSite912.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor913 = createNode("TouchSensor");
TouchSensor913.description = "HAnimSite l_axilla_post";
HAnimSite912.children = new MFNode();

HAnimSite912.children[0] = TouchSensor913;

Shape Shape914 = createNode("Shape");
Shape914.USE = "HAnimSiteShape";
HAnimSite912.children[1] = Shape914;

HAnimSegment879.children[10] = HAnimSite912;

HAnimJoint878.children = new MFNode();

HAnimJoint878.children[0] = HAnimSegment879;

HAnimJoint HAnimJoint915 = createNode("HAnimJoint");
HAnimJoint915.DEF = "hanim_l_acromioclavicular";
HAnimJoint915.name = "l_acromioclavicular";
HAnimJoint915.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment916 = createNode("HAnimSegment");
HAnimSegment916.DEF = "hanim_l_scapula";
HAnimSegment916.name = "l_scapula";
TouchSensor TouchSensor917 = createNode("TouchSensor");
TouchSensor917.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment916.children = new MFNode();

HAnimSegment916.children[0] = TouchSensor917;

Transform Transform918 = createNode("Transform");
Transform918.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape919 = createNode("Shape");
Shape919.USE = "HAnimJointShape";
Transform918.child = new undefined();

Transform918.child[0] = Shape919;

HAnimSegment916.children[1] = Transform918;

Shape Shape920 = createNode("Shape");
LineSet LineSet921 = createNode("LineSet");
LineSet921.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA922 = createNode("ColorRGBA");
ColorRGBA922.USE = "HAnimSegmentLineColorRGBA";
LineSet921.color = ColorRGBA922;

Coordinate Coordinate923 = createNode("Coordinate");
Coordinate923.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet921.coord = Coordinate923;

Shape920.geometry = LineSet921;

HAnimSegment916.children[2] = Shape920;

HAnimJoint915.children = new MFNode();

HAnimJoint915.children[0] = HAnimSegment916;

HAnimJoint HAnimJoint924 = createNode("HAnimJoint");
HAnimJoint924.DEF = "hanim_l_shoulder";
HAnimJoint924.name = "l_shoulder";
HAnimJoint924.rotation = new SFRotation(new float[0,0,1,0.950777468818762]);
HAnimJoint924.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment925 = createNode("HAnimSegment");
HAnimSegment925.DEF = "hanim_l_upperarm";
HAnimSegment925.name = "l_upperarm";
TouchSensor TouchSensor926 = createNode("TouchSensor");
TouchSensor926.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment925.children = new MFNode();

HAnimSegment925.children[0] = TouchSensor926;

Transform Transform927 = createNode("Transform");
Transform927.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape928 = createNode("Shape");
Shape928.USE = "HAnimJointShape";
Transform927.child = new undefined();

Transform927.child[0] = Shape928;

HAnimSegment925.children[1] = Transform927;

Shape Shape929 = createNode("Shape");
LineSet LineSet930 = createNode("LineSet");
LineSet930.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA931 = createNode("ColorRGBA");
ColorRGBA931.USE = "HAnimSegmentLineColorRGBA";
LineSet930.color = ColorRGBA931;

Coordinate Coordinate932 = createNode("Coordinate");
Coordinate932.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet930.coord = Coordinate932;

Shape929.geometry = LineSet930;

HAnimSegment925.children[2] = Shape929;

Shape Shape933 = createNode("Shape");
LineSet LineSet934 = createNode("LineSet");
LineSet934.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA935 = createNode("ColorRGBA");
ColorRGBA935.USE = "HAnimSiteLineColorRGBA";
LineSet934.color = ColorRGBA935;

Coordinate Coordinate936 = createNode("Coordinate");
Coordinate936.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet934.coord = Coordinate936;

Shape933.geometry = LineSet934;

HAnimSegment925.children[3] = Shape933;

HAnimSite HAnimSite937 = createNode("HAnimSite");
HAnimSite937.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite937.name = "l_humeral_lateral_epicn_pt";
HAnimSite937.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor938 = createNode("TouchSensor");
TouchSensor938.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite937.children = new MFNode();

HAnimSite937.children[0] = TouchSensor938;

Shape Shape939 = createNode("Shape");
Shape939.USE = "HAnimSiteShape";
HAnimSite937.children[1] = Shape939;

HAnimSegment925.children[4] = HAnimSite937;

HAnimJoint924.children = new MFNode();

HAnimJoint924.children[0] = HAnimSegment925;

HAnimJoint HAnimJoint940 = createNode("HAnimJoint");
HAnimJoint940.DEF = "hanim_l_elbow";
HAnimJoint940.name = "l_elbow";
HAnimJoint940.rotation = new SFRotation(new float[-1,0,0,0.297117959005863]);
HAnimJoint940.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment941 = createNode("HAnimSegment");
HAnimSegment941.DEF = "hanim_l_forearm";
HAnimSegment941.name = "l_forearm";
TouchSensor TouchSensor942 = createNode("TouchSensor");
TouchSensor942.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment941.children = new MFNode();

HAnimSegment941.children[0] = TouchSensor942;

Transform Transform943 = createNode("Transform");
Transform943.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape944 = createNode("Shape");
Shape944.USE = "HAnimJointShape";
Transform943.child = new undefined();

Transform943.child[0] = Shape944;

HAnimSegment941.children[1] = Transform943;

Shape Shape945 = createNode("Shape");
LineSet LineSet946 = createNode("LineSet");
LineSet946.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA947 = createNode("ColorRGBA");
ColorRGBA947.USE = "HAnimSegmentLineColorRGBA";
LineSet946.color = ColorRGBA947;

Coordinate Coordinate948 = createNode("Coordinate");
Coordinate948.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet946.coord = Coordinate948;

Shape945.geometry = LineSet946;

HAnimSegment941.children[2] = Shape945;

Shape Shape949 = createNode("Shape");
LineSet LineSet950 = createNode("LineSet");
LineSet950.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA951 = createNode("ColorRGBA");
ColorRGBA951.USE = "HAnimSiteLineColorRGBA";
LineSet950.color = ColorRGBA951;

Coordinate Coordinate952 = createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet950.coord = Coordinate952;

Shape949.geometry = LineSet950;

HAnimSegment941.children[3] = Shape949;

Shape Shape953 = createNode("Shape");
LineSet LineSet954 = createNode("LineSet");
LineSet954.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA955 = createNode("ColorRGBA");
ColorRGBA955.USE = "HAnimSiteLineColorRGBA";
LineSet954.color = ColorRGBA955;

Coordinate Coordinate956 = createNode("Coordinate");
Coordinate956.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet954.coord = Coordinate956;

Shape953.geometry = LineSet954;

HAnimSegment941.children[4] = Shape953;

Shape Shape957 = createNode("Shape");
LineSet LineSet958 = createNode("LineSet");
LineSet958.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA959 = createNode("ColorRGBA");
ColorRGBA959.USE = "HAnimSiteLineColorRGBA";
LineSet958.color = ColorRGBA959;

Coordinate Coordinate960 = createNode("Coordinate");
Coordinate960.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet958.coord = Coordinate960;

Shape957.geometry = LineSet958;

HAnimSegment941.children[5] = Shape957;

Shape Shape961 = createNode("Shape");
LineSet LineSet962 = createNode("LineSet");
LineSet962.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA963 = createNode("ColorRGBA");
ColorRGBA963.USE = "HAnimSiteLineColorRGBA";
LineSet962.color = ColorRGBA963;

Coordinate Coordinate964 = createNode("Coordinate");
Coordinate964.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet962.coord = Coordinate964;

Shape961.geometry = LineSet962;

HAnimSegment941.children[6] = Shape961;

HAnimSite HAnimSite965 = createNode("HAnimSite");
HAnimSite965.DEF = "hanim_l_radial_styloid_pt";
HAnimSite965.name = "l_radial_styloid_pt";
HAnimSite965.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor966 = createNode("TouchSensor");
TouchSensor966.description = "HAnimSite l_radial_styloid";
HAnimSite965.children = new MFNode();

HAnimSite965.children[0] = TouchSensor966;

Shape Shape967 = createNode("Shape");
Shape967.USE = "HAnimSiteShape";
HAnimSite965.children[1] = Shape967;

HAnimSegment941.children[7] = HAnimSite965;

HAnimSite HAnimSite968 = createNode("HAnimSite");
HAnimSite968.DEF = "hanim_l_olecranon_pt";
HAnimSite968.name = "l_olecranon_pt";
HAnimSite968.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor969 = createNode("TouchSensor");
TouchSensor969.description = "HAnimSite l_olecranon";
HAnimSite968.children = new MFNode();

HAnimSite968.children[0] = TouchSensor969;

Shape Shape970 = createNode("Shape");
Shape970.USE = "HAnimSiteShape";
HAnimSite968.children[1] = Shape970;

HAnimSegment941.children[8] = HAnimSite968;

HAnimSite HAnimSite971 = createNode("HAnimSite");
HAnimSite971.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite971.name = "l_humeral_medial_epicn_pt";
HAnimSite971.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor972 = createNode("TouchSensor");
TouchSensor972.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite971.children = new MFNode();

HAnimSite971.children[0] = TouchSensor972;

Shape Shape973 = createNode("Shape");
Shape973.USE = "HAnimSiteShape";
HAnimSite971.children[1] = Shape973;

HAnimSegment941.children[9] = HAnimSite971;

HAnimSite HAnimSite974 = createNode("HAnimSite");
HAnimSite974.DEF = "hanim_l_radiale_pt";
HAnimSite974.name = "l_radiale_pt";
HAnimSite974.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor975 = createNode("TouchSensor");
TouchSensor975.description = "HAnimSite l_radiale";
HAnimSite974.children = new MFNode();

HAnimSite974.children[0] = TouchSensor975;

Shape Shape976 = createNode("Shape");
Shape976.USE = "HAnimSiteShape";
HAnimSite974.children[1] = Shape976;

HAnimSegment941.children[10] = HAnimSite974;

HAnimJoint940.children = new MFNode();

HAnimJoint940.children[0] = HAnimSegment941;

HAnimJoint HAnimJoint977 = createNode("HAnimJoint");
HAnimJoint977.DEF = "hanim_l_wrist";
HAnimJoint977.name = "l_wrist";
HAnimJoint977.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment978 = createNode("HAnimSegment");
HAnimSegment978.DEF = "hanim_l_hand";
HAnimSegment978.name = "l_hand";
TouchSensor TouchSensor979 = createNode("TouchSensor");
TouchSensor979.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment978.children = new MFNode();

HAnimSegment978.children[0] = TouchSensor979;

Transform Transform980 = createNode("Transform");
Transform980.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape981 = createNode("Shape");
Shape981.USE = "HAnimJointShape";
Transform980.child = new undefined();

Transform980.child[0] = Shape981;

HAnimSegment978.children[1] = Transform980;

Shape Shape982 = createNode("Shape");
LineSet LineSet983 = createNode("LineSet");
LineSet983.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA984 = createNode("ColorRGBA");
ColorRGBA984.USE = "HAnimSegmentLineColorRGBA";
LineSet983.color = ColorRGBA984;

Coordinate Coordinate985 = createNode("Coordinate");
Coordinate985.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet983.coord = Coordinate985;

Shape982.geometry = LineSet983;

HAnimSegment978.children[2] = Shape982;

Shape Shape986 = createNode("Shape");
LineSet LineSet987 = createNode("LineSet");
LineSet987.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA988 = createNode("ColorRGBA");
ColorRGBA988.USE = "HAnimSegmentLineColorRGBA";
LineSet987.color = ColorRGBA988;

Coordinate Coordinate989 = createNode("Coordinate");
Coordinate989.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet987.coord = Coordinate989;

Shape986.geometry = LineSet987;

HAnimSegment978.children[3] = Shape986;

Shape Shape990 = createNode("Shape");
LineSet LineSet991 = createNode("LineSet");
LineSet991.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA992 = createNode("ColorRGBA");
ColorRGBA992.USE = "HAnimSegmentLineColorRGBA";
LineSet991.color = ColorRGBA992;

Coordinate Coordinate993 = createNode("Coordinate");
Coordinate993.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet991.coord = Coordinate993;

Shape990.geometry = LineSet991;

HAnimSegment978.children[4] = Shape990;

Shape Shape994 = createNode("Shape");
LineSet LineSet995 = createNode("LineSet");
LineSet995.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA996 = createNode("ColorRGBA");
ColorRGBA996.USE = "HAnimSegmentLineColorRGBA";
LineSet995.color = ColorRGBA996;

Coordinate Coordinate997 = createNode("Coordinate");
Coordinate997.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet995.coord = Coordinate997;

Shape994.geometry = LineSet995;

HAnimSegment978.children[5] = Shape994;

Shape Shape998 = createNode("Shape");
LineSet LineSet999 = createNode("LineSet");
LineSet999.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1000 = createNode("ColorRGBA");
ColorRGBA1000.USE = "HAnimSegmentLineColorRGBA";
LineSet999.color = ColorRGBA1000;

Coordinate Coordinate1001 = createNode("Coordinate");
Coordinate1001.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet999.coord = Coordinate1001;

Shape998.geometry = LineSet999;

HAnimSegment978.children[6] = Shape998;

Shape Shape1002 = createNode("Shape");
LineSet LineSet1003 = createNode("LineSet");
LineSet1003.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1004 = createNode("ColorRGBA");
ColorRGBA1004.USE = "HAnimSiteLineColorRGBA";
LineSet1003.color = ColorRGBA1004;

Coordinate Coordinate1005 = createNode("Coordinate");
Coordinate1005.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1003.coord = Coordinate1005;

Shape1002.geometry = LineSet1003;

HAnimSegment978.children[7] = Shape1002;

Shape Shape1006 = createNode("Shape");
LineSet LineSet1007 = createNode("LineSet");
LineSet1007.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1008 = createNode("ColorRGBA");
ColorRGBA1008.USE = "HAnimSiteLineColorRGBA";
LineSet1007.color = ColorRGBA1008;

Coordinate Coordinate1009 = createNode("Coordinate");
Coordinate1009.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1007.coord = Coordinate1009;

Shape1006.geometry = LineSet1007;

HAnimSegment978.children[8] = Shape1006;

Shape Shape1010 = createNode("Shape");
LineSet LineSet1011 = createNode("LineSet");
LineSet1011.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1012 = createNode("ColorRGBA");
ColorRGBA1012.USE = "HAnimSiteLineColorRGBA";
LineSet1011.color = ColorRGBA1012;

Coordinate Coordinate1013 = createNode("Coordinate");
Coordinate1013.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1011.coord = Coordinate1013;

Shape1010.geometry = LineSet1011;

HAnimSegment978.children[9] = Shape1010;

Shape Shape1014 = createNode("Shape");
LineSet LineSet1015 = createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1016 = createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1015.color = ColorRGBA1016;

Coordinate Coordinate1017 = createNode("Coordinate");
Coordinate1017.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1015.coord = Coordinate1017;

Shape1014.geometry = LineSet1015;

HAnimSegment978.children[10] = Shape1014;

HAnimSite HAnimSite1018 = createNode("HAnimSite");
HAnimSite1018.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1018.name = "l_metacarpal_pha2_pt";
HAnimSite1018.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1019 = createNode("TouchSensor");
TouchSensor1019.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1018.children = new MFNode();

HAnimSite1018.children[0] = TouchSensor1019;

Shape Shape1020 = createNode("Shape");
Shape1020.USE = "HAnimSiteShape";
HAnimSite1018.children[1] = Shape1020;

HAnimSegment978.children[11] = HAnimSite1018;

HAnimSite HAnimSite1021 = createNode("HAnimSite");
HAnimSite1021.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1021.name = "l_ulnar_styloid_pt";
HAnimSite1021.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1022 = createNode("TouchSensor");
TouchSensor1022.description = "HAnimSite l_ulnar_styloid";
HAnimSite1021.children = new MFNode();

HAnimSite1021.children[0] = TouchSensor1022;

Shape Shape1023 = createNode("Shape");
Shape1023.USE = "HAnimSiteShape";
HAnimSite1021.children[1] = Shape1023;

HAnimSegment978.children[12] = HAnimSite1021;

HAnimSite HAnimSite1024 = createNode("HAnimSite");
HAnimSite1024.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1024.name = "l_metacarpal_pha5_pt";
HAnimSite1024.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1025 = createNode("TouchSensor");
TouchSensor1025.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1024.children = new MFNode();

HAnimSite1024.children[0] = TouchSensor1025;

Shape Shape1026 = createNode("Shape");
Shape1026.USE = "HAnimSiteShape";
HAnimSite1024.children[1] = Shape1026;

HAnimSegment978.children[13] = HAnimSite1024;

HAnimSite HAnimSite1027 = createNode("HAnimSite");
HAnimSite1027.DEF = "hanim_l_hand_front_view";
HAnimSite1027.name = "l_hand_front_view";
HAnimSite1027.translation = new SFVec3f(new float[0.3,0.75,0.45]);
Viewpoint Viewpoint1028 = createNode("Viewpoint");
Viewpoint1028.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1028.description = "left hand front";
Viewpoint1028.position = new SFVec3f(new float[0,0,0]);
Viewpoint1028.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
HAnimSite1027.children = new MFNode();

HAnimSite1027.children[0] = Viewpoint1028;

Anchor Anchor1029 = createNode("Anchor");
Anchor1029.description = "HAnimSite Viewpoint hanim_l_hand_front_view";
Anchor1029.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
LOD LOD1030 = createNode("LOD");
LOD1030.forceTransitions = True;
LOD1030.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1031 = createNode("WorldInfo");
WorldInfo1031.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1030.children = new MFNode();

LOD1030.children[0] = WorldInfo1031;

Shape Shape1032 = createNode("Shape");
Shape1032.USE = "HAnimSiteViewpointShape";
LOD1030.children[1] = Shape1032;

Anchor1029.children = new MFNode();

Anchor1029.children[0] = LOD1030;

HAnimSite1027.children[1] = Anchor1029;

HAnimSegment978.children[14] = HAnimSite1027;

HAnimJoint977.children = new MFNode();

HAnimJoint977.children[0] = HAnimSegment978;

HAnimJoint HAnimJoint1033 = createNode("HAnimJoint");
HAnimJoint1033.DEF = "hanim_l_thumb1";
HAnimJoint1033.name = "l_thumb1";
HAnimJoint1033.rotation = new SFRotation(new float[1,0,0,0.270107235459875]);
HAnimJoint1033.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment1034 = createNode("HAnimSegment");
HAnimSegment1034.DEF = "hanim_l_thumb_metacarpal";
HAnimSegment1034.name = "l_thumb_metacarpal";
TouchSensor TouchSensor1035 = createNode("TouchSensor");
TouchSensor1035.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1034.children = new MFNode();

HAnimSegment1034.children[0] = TouchSensor1035;

Transform Transform1036 = createNode("Transform");
Transform1036.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape1037 = createNode("Shape");
Shape1037.USE = "HAnimJointShape";
Transform1036.child = new undefined();

Transform1036.child[0] = Shape1037;

HAnimSegment1034.children[1] = Transform1036;

Shape Shape1038 = createNode("Shape");
LineSet LineSet1039 = createNode("LineSet");
LineSet1039.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1040 = createNode("ColorRGBA");
ColorRGBA1040.USE = "HAnimSegmentLineColorRGBA";
LineSet1039.color = ColorRGBA1040;

Coordinate Coordinate1041 = createNode("Coordinate");
Coordinate1041.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1039.coord = Coordinate1041;

Shape1038.geometry = LineSet1039;

HAnimSegment1034.children[2] = Shape1038;

HAnimJoint1033.children = new MFNode();

HAnimJoint1033.children[0] = HAnimSegment1034;

HAnimJoint HAnimJoint1042 = createNode("HAnimJoint");
HAnimJoint1042.DEF = "hanim_l_thumb2";
HAnimJoint1042.name = "l_thumb2";
HAnimJoint1042.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment1043 = createNode("HAnimSegment");
HAnimSegment1043.DEF = "hanim_l_thumb_proximal";
HAnimSegment1043.name = "l_thumb_proximal";
TouchSensor TouchSensor1044 = createNode("TouchSensor");
TouchSensor1044.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1043.children = new MFNode();

HAnimSegment1043.children[0] = TouchSensor1044;

Transform Transform1045 = createNode("Transform");
Transform1045.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape1046 = createNode("Shape");
Shape1046.USE = "HAnimJointShape";
Transform1045.child = new undefined();

Transform1045.child[0] = Shape1046;

HAnimSegment1043.children[1] = Transform1045;

Shape Shape1047 = createNode("Shape");
LineSet LineSet1048 = createNode("LineSet");
LineSet1048.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1049 = createNode("ColorRGBA");
ColorRGBA1049.USE = "HAnimSegmentLineColorRGBA";
LineSet1048.color = ColorRGBA1049;

Coordinate Coordinate1050 = createNode("Coordinate");
Coordinate1050.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1048.coord = Coordinate1050;

Shape1047.geometry = LineSet1048;

HAnimSegment1043.children[2] = Shape1047;

HAnimJoint1042.children = new MFNode();

HAnimJoint1042.children[0] = HAnimSegment1043;

HAnimJoint HAnimJoint1051 = createNode("HAnimJoint");
HAnimJoint1051.DEF = "hanim_l_thumb3";
HAnimJoint1051.name = "l_thumb3";
HAnimJoint1051.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment1052 = createNode("HAnimSegment");
HAnimSegment1052.DEF = "hanim_l_thumb_distal";
HAnimSegment1052.name = "l_thumb_distal";
TouchSensor TouchSensor1053 = createNode("TouchSensor");
TouchSensor1053.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1052.children = new MFNode();

HAnimSegment1052.children[0] = TouchSensor1053;

Transform Transform1054 = createNode("Transform");
Transform1054.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape1055 = createNode("Shape");
Shape1055.USE = "HAnimJointShape";
Transform1054.child = new undefined();

Transform1054.child[0] = Shape1055;

HAnimSegment1052.children[1] = Transform1054;

Shape Shape1056 = createNode("Shape");
LineSet LineSet1057 = createNode("LineSet");
LineSet1057.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1058 = createNode("ColorRGBA");
ColorRGBA1058.USE = "HAnimSiteLineColorRGBA";
LineSet1057.color = ColorRGBA1058;

Coordinate Coordinate1059 = createNode("Coordinate");
Coordinate1059.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1057.coord = Coordinate1059;

Shape1056.geometry = LineSet1057;

HAnimSegment1052.children[2] = Shape1056;

HAnimSite HAnimSite1060 = createNode("HAnimSite");
HAnimSite1060.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1060.name = "l_thumb_distal_tip";
HAnimSite1060.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
TouchSensor TouchSensor1061 = createNode("TouchSensor");
TouchSensor1061.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1060.children = new MFNode();

HAnimSite1060.children[0] = TouchSensor1061;

Shape Shape1062 = createNode("Shape");
Shape1062.USE = "HAnimSiteShape";
HAnimSite1060.children[1] = Shape1062;

HAnimSegment1052.children[3] = HAnimSite1060;

HAnimJoint1051.children = new MFNode();

HAnimJoint1051.children[0] = HAnimSegment1052;

HAnimJoint1042.children[1] = HAnimJoint1051;

HAnimJoint1033.children[1] = HAnimJoint1042;

HAnimJoint977.children[1] = HAnimJoint1033;

HAnimJoint HAnimJoint1063 = createNode("HAnimJoint");
HAnimJoint1063.DEF = "hanim_l_index0";
HAnimJoint1063.name = "l_index0";
HAnimJoint1063.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment1064 = createNode("HAnimSegment");
HAnimSegment1064.DEF = "hanim_l_index_metacarpal";
HAnimSegment1064.name = "l_index_metacarpal";
TouchSensor TouchSensor1065 = createNode("TouchSensor");
TouchSensor1065.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1064.children = new MFNode();

HAnimSegment1064.children[0] = TouchSensor1065;

Transform Transform1066 = createNode("Transform");
Transform1066.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape1067 = createNode("Shape");
Shape1067.USE = "HAnimJointShape";
Transform1066.child = new undefined();

Transform1066.child[0] = Shape1067;

HAnimSegment1064.children[1] = Transform1066;

Shape Shape1068 = createNode("Shape");
LineSet LineSet1069 = createNode("LineSet");
LineSet1069.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1070 = createNode("ColorRGBA");
ColorRGBA1070.USE = "HAnimSegmentLineColorRGBA";
LineSet1069.color = ColorRGBA1070;

Coordinate Coordinate1071 = createNode("Coordinate");
Coordinate1071.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1069.coord = Coordinate1071;

Shape1068.geometry = LineSet1069;

HAnimSegment1064.children[2] = Shape1068;

HAnimJoint1063.children = new MFNode();

HAnimJoint1063.children[0] = HAnimSegment1064;

HAnimJoint HAnimJoint1072 = createNode("HAnimJoint");
HAnimJoint1072.DEF = "hanim_l_index1";
HAnimJoint1072.name = "l_index1";
HAnimJoint1072.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment1073 = createNode("HAnimSegment");
HAnimSegment1073.DEF = "hanim_l_index_proximal";
HAnimSegment1073.name = "l_index_proximal";
TouchSensor TouchSensor1074 = createNode("TouchSensor");
TouchSensor1074.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1073.children = new MFNode();

HAnimSegment1073.children[0] = TouchSensor1074;

Transform Transform1075 = createNode("Transform");
Transform1075.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape1076 = createNode("Shape");
Shape1076.USE = "HAnimJointShape";
Transform1075.child = new undefined();

Transform1075.child[0] = Shape1076;

HAnimSegment1073.children[1] = Transform1075;

Shape Shape1077 = createNode("Shape");
LineSet LineSet1078 = createNode("LineSet");
LineSet1078.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1079 = createNode("ColorRGBA");
ColorRGBA1079.USE = "HAnimSegmentLineColorRGBA";
LineSet1078.color = ColorRGBA1079;

Coordinate Coordinate1080 = createNode("Coordinate");
Coordinate1080.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1078.coord = Coordinate1080;

Shape1077.geometry = LineSet1078;

HAnimSegment1073.children[2] = Shape1077;

HAnimJoint1072.children = new MFNode();

HAnimJoint1072.children[0] = HAnimSegment1073;

HAnimJoint HAnimJoint1081 = createNode("HAnimJoint");
HAnimJoint1081.DEF = "hanim_l_index2";
HAnimJoint1081.name = "l_index2";
HAnimJoint1081.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment1082 = createNode("HAnimSegment");
HAnimSegment1082.DEF = "hanim_l_index_middle";
HAnimSegment1082.name = "l_index_middle";
TouchSensor TouchSensor1083 = createNode("TouchSensor");
TouchSensor1083.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1082.children = new MFNode();

HAnimSegment1082.children[0] = TouchSensor1083;

Transform Transform1084 = createNode("Transform");
Transform1084.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape1085 = createNode("Shape");
Shape1085.USE = "HAnimJointShape";
Transform1084.child = new undefined();

Transform1084.child[0] = Shape1085;

HAnimSegment1082.children[1] = Transform1084;

Shape Shape1086 = createNode("Shape");
LineSet LineSet1087 = createNode("LineSet");
LineSet1087.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1088 = createNode("ColorRGBA");
ColorRGBA1088.USE = "HAnimSegmentLineColorRGBA";
LineSet1087.color = ColorRGBA1088;

Coordinate Coordinate1089 = createNode("Coordinate");
Coordinate1089.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1087.coord = Coordinate1089;

Shape1086.geometry = LineSet1087;

HAnimSegment1082.children[2] = Shape1086;

HAnimJoint1081.children = new MFNode();

HAnimJoint1081.children[0] = HAnimSegment1082;

HAnimJoint HAnimJoint1090 = createNode("HAnimJoint");
HAnimJoint1090.DEF = "hanim_l_index3";
HAnimJoint1090.name = "l_index3";
HAnimJoint1090.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment1091 = createNode("HAnimSegment");
HAnimSegment1091.DEF = "hanim_l_index_distal";
HAnimSegment1091.name = "l_index_distal";
TouchSensor TouchSensor1092 = createNode("TouchSensor");
TouchSensor1092.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1091.children = new MFNode();

HAnimSegment1091.children[0] = TouchSensor1092;

Transform Transform1093 = createNode("Transform");
Transform1093.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape1094 = createNode("Shape");
Shape1094.USE = "HAnimJointShape";
Transform1093.child = new undefined();

Transform1093.child[0] = Shape1094;

HAnimSegment1091.children[1] = Transform1093;

Shape Shape1095 = createNode("Shape");
LineSet LineSet1096 = createNode("LineSet");
LineSet1096.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1097 = createNode("ColorRGBA");
ColorRGBA1097.USE = "HAnimSiteLineColorRGBA";
LineSet1096.color = ColorRGBA1097;

Coordinate Coordinate1098 = createNode("Coordinate");
Coordinate1098.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1096.coord = Coordinate1098;

Shape1095.geometry = LineSet1096;

HAnimSegment1091.children[2] = Shape1095;

Shape Shape1099 = createNode("Shape");
LineSet LineSet1100 = createNode("LineSet");
LineSet1100.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1101 = createNode("ColorRGBA");
ColorRGBA1101.USE = "HAnimSiteLineColorRGBA";
LineSet1100.color = ColorRGBA1101;

Coordinate Coordinate1102 = createNode("Coordinate");
Coordinate1102.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1100.coord = Coordinate1102;

Shape1099.geometry = LineSet1100;

HAnimSegment1091.children[3] = Shape1099;

HAnimSite HAnimSite1103 = createNode("HAnimSite");
HAnimSite1103.DEF = "hanim_l_index_distal_tip";
HAnimSite1103.name = "l_index_distal_tip";
HAnimSite1103.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
TouchSensor TouchSensor1104 = createNode("TouchSensor");
TouchSensor1104.description = "HAnimSite l_index_distal_tip";
HAnimSite1103.children = new MFNode();

HAnimSite1103.children[0] = TouchSensor1104;

Shape Shape1105 = createNode("Shape");
Shape1105.USE = "HAnimSiteShape";
HAnimSite1103.children[1] = Shape1105;

HAnimSegment1091.children[4] = HAnimSite1103;

HAnimSite HAnimSite1106 = createNode("HAnimSite");
HAnimSite1106.DEF = "hanim_l_dactylion_pt";
HAnimSite1106.name = "l_dactylion_pt";
HAnimSite1106.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor1107 = createNode("TouchSensor");
TouchSensor1107.description = "HAnimSite l_dactylion";
HAnimSite1106.children = new MFNode();

HAnimSite1106.children[0] = TouchSensor1107;

Shape Shape1108 = createNode("Shape");
Shape1108.USE = "HAnimSiteShape";
HAnimSite1106.children[1] = Shape1108;

HAnimSegment1091.children[5] = HAnimSite1106;

HAnimJoint1090.children = new MFNode();

HAnimJoint1090.children[0] = HAnimSegment1091;

HAnimJoint1081.children[1] = HAnimJoint1090;

HAnimJoint1072.children[1] = HAnimJoint1081;

HAnimJoint1063.children[1] = HAnimJoint1072;

HAnimJoint977.children[2] = HAnimJoint1063;

HAnimJoint HAnimJoint1109 = createNode("HAnimJoint");
HAnimJoint1109.DEF = "hanim_l_middle0";
HAnimJoint1109.name = "l_middle0";
HAnimJoint1109.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment1110 = createNode("HAnimSegment");
HAnimSegment1110.DEF = "hanim_l_middle_metacarpal";
HAnimSegment1110.name = "l_middle_metacarpal";
TouchSensor TouchSensor1111 = createNode("TouchSensor");
TouchSensor1111.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1110.children = new MFNode();

HAnimSegment1110.children[0] = TouchSensor1111;

Transform Transform1112 = createNode("Transform");
Transform1112.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape1113 = createNode("Shape");
Shape1113.USE = "HAnimJointShape";
Transform1112.child = new undefined();

Transform1112.child[0] = Shape1113;

HAnimSegment1110.children[1] = Transform1112;

Shape Shape1114 = createNode("Shape");
LineSet LineSet1115 = createNode("LineSet");
LineSet1115.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1116 = createNode("ColorRGBA");
ColorRGBA1116.USE = "HAnimSegmentLineColorRGBA";
LineSet1115.color = ColorRGBA1116;

Coordinate Coordinate1117 = createNode("Coordinate");
Coordinate1117.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1115.coord = Coordinate1117;

Shape1114.geometry = LineSet1115;

HAnimSegment1110.children[2] = Shape1114;

HAnimJoint1109.children = new MFNode();

HAnimJoint1109.children[0] = HAnimSegment1110;

HAnimJoint HAnimJoint1118 = createNode("HAnimJoint");
HAnimJoint1118.DEF = "hanim_l_middle1";
HAnimJoint1118.name = "l_middle1";
HAnimJoint1118.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment1119 = createNode("HAnimSegment");
HAnimSegment1119.DEF = "hanim_l_middle_proximal";
HAnimSegment1119.name = "l_middle_proximal";
TouchSensor TouchSensor1120 = createNode("TouchSensor");
TouchSensor1120.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1119.children = new MFNode();

HAnimSegment1119.children[0] = TouchSensor1120;

Transform Transform1121 = createNode("Transform");
Transform1121.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape1122 = createNode("Shape");
Shape1122.USE = "HAnimJointShape";
Transform1121.child = new undefined();

Transform1121.child[0] = Shape1122;

HAnimSegment1119.children[1] = Transform1121;

Shape Shape1123 = createNode("Shape");
LineSet LineSet1124 = createNode("LineSet");
LineSet1124.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1125 = createNode("ColorRGBA");
ColorRGBA1125.USE = "HAnimSegmentLineColorRGBA";
LineSet1124.color = ColorRGBA1125;

Coordinate Coordinate1126 = createNode("Coordinate");
Coordinate1126.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1124.coord = Coordinate1126;

Shape1123.geometry = LineSet1124;

HAnimSegment1119.children[2] = Shape1123;

HAnimJoint1118.children = new MFNode();

HAnimJoint1118.children[0] = HAnimSegment1119;

HAnimJoint HAnimJoint1127 = createNode("HAnimJoint");
HAnimJoint1127.DEF = "hanim_l_middle2";
HAnimJoint1127.name = "l_middle2";
HAnimJoint1127.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment1128 = createNode("HAnimSegment");
HAnimSegment1128.DEF = "hanim_l_middle_middle";
HAnimSegment1128.name = "l_middle_middle";
TouchSensor TouchSensor1129 = createNode("TouchSensor");
TouchSensor1129.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1128.children = new MFNode();

HAnimSegment1128.children[0] = TouchSensor1129;

Transform Transform1130 = createNode("Transform");
Transform1130.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape1131 = createNode("Shape");
Shape1131.USE = "HAnimJointShape";
Transform1130.child = new undefined();

Transform1130.child[0] = Shape1131;

HAnimSegment1128.children[1] = Transform1130;

Shape Shape1132 = createNode("Shape");
LineSet LineSet1133 = createNode("LineSet");
LineSet1133.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1134 = createNode("ColorRGBA");
ColorRGBA1134.USE = "HAnimSegmentLineColorRGBA";
LineSet1133.color = ColorRGBA1134;

Coordinate Coordinate1135 = createNode("Coordinate");
Coordinate1135.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1133.coord = Coordinate1135;

Shape1132.geometry = LineSet1133;

HAnimSegment1128.children[2] = Shape1132;

HAnimJoint1127.children = new MFNode();

HAnimJoint1127.children[0] = HAnimSegment1128;

HAnimJoint HAnimJoint1136 = createNode("HAnimJoint");
HAnimJoint1136.DEF = "hanim_l_middle3";
HAnimJoint1136.name = "l_middle3";
HAnimJoint1136.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimSegment HAnimSegment1137 = createNode("HAnimSegment");
HAnimSegment1137.DEF = "hanim_l_middle_distal";
HAnimSegment1137.name = "l_middle_distal";
TouchSensor TouchSensor1138 = createNode("TouchSensor");
TouchSensor1138.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1137.children = new MFNode();

HAnimSegment1137.children[0] = TouchSensor1138;

Transform Transform1139 = createNode("Transform");
Transform1139.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape1140 = createNode("Shape");
Shape1140.USE = "HAnimJointShape";
Transform1139.child = new undefined();

Transform1139.child[0] = Shape1140;

HAnimSegment1137.children[1] = Transform1139;

Shape Shape1141 = createNode("Shape");
LineSet LineSet1142 = createNode("LineSet");
LineSet1142.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1143 = createNode("ColorRGBA");
ColorRGBA1143.USE = "HAnimSiteLineColorRGBA";
LineSet1142.color = ColorRGBA1143;

Coordinate Coordinate1144 = createNode("Coordinate");
Coordinate1144.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1142.coord = Coordinate1144;

Shape1141.geometry = LineSet1142;

HAnimSegment1137.children[2] = Shape1141;

HAnimSite HAnimSite1145 = createNode("HAnimSite");
HAnimSite1145.DEF = "hanim_l_middle_distal_tip";
HAnimSite1145.name = "l_middle_distal_tip";
HAnimSite1145.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
TouchSensor TouchSensor1146 = createNode("TouchSensor");
TouchSensor1146.description = "HAnimSite l_middle_distal_tip";
HAnimSite1145.children = new MFNode();

HAnimSite1145.children[0] = TouchSensor1146;

Shape Shape1147 = createNode("Shape");
Shape1147.USE = "HAnimSiteShape";
HAnimSite1145.children[1] = Shape1147;

HAnimSegment1137.children[3] = HAnimSite1145;

HAnimJoint1136.children = new MFNode();

HAnimJoint1136.children[0] = HAnimSegment1137;

HAnimJoint1127.children[1] = HAnimJoint1136;

HAnimJoint1118.children[1] = HAnimJoint1127;

HAnimJoint1109.children[1] = HAnimJoint1118;

HAnimJoint977.children[3] = HAnimJoint1109;

HAnimJoint HAnimJoint1148 = createNode("HAnimJoint");
HAnimJoint1148.DEF = "hanim_l_ring0";
HAnimJoint1148.name = "l_ring0";
HAnimJoint1148.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment1149 = createNode("HAnimSegment");
HAnimSegment1149.DEF = "hanim_l_ring_metacarpal";
HAnimSegment1149.name = "l_ring_metacarpal";
TouchSensor TouchSensor1150 = createNode("TouchSensor");
TouchSensor1150.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1149.children = new MFNode();

HAnimSegment1149.children[0] = TouchSensor1150;

Transform Transform1151 = createNode("Transform");
Transform1151.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape1152 = createNode("Shape");
Shape1152.USE = "HAnimJointShape";
Transform1151.child = new undefined();

Transform1151.child[0] = Shape1152;

HAnimSegment1149.children[1] = Transform1151;

Shape Shape1153 = createNode("Shape");
LineSet LineSet1154 = createNode("LineSet");
LineSet1154.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1155 = createNode("ColorRGBA");
ColorRGBA1155.USE = "HAnimSegmentLineColorRGBA";
LineSet1154.color = ColorRGBA1155;

Coordinate Coordinate1156 = createNode("Coordinate");
Coordinate1156.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1154.coord = Coordinate1156;

Shape1153.geometry = LineSet1154;

HAnimSegment1149.children[2] = Shape1153;

HAnimJoint1148.children = new MFNode();

HAnimJoint1148.children[0] = HAnimSegment1149;

HAnimJoint HAnimJoint1157 = createNode("HAnimJoint");
HAnimJoint1157.DEF = "hanim_l_ring1";
HAnimJoint1157.name = "l_ring1";
HAnimJoint1157.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment1158 = createNode("HAnimSegment");
HAnimSegment1158.DEF = "hanim_l_ring_proximal";
HAnimSegment1158.name = "l_ring_proximal";
TouchSensor TouchSensor1159 = createNode("TouchSensor");
TouchSensor1159.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1158.children = new MFNode();

HAnimSegment1158.children[0] = TouchSensor1159;

Transform Transform1160 = createNode("Transform");
Transform1160.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape1161 = createNode("Shape");
Shape1161.USE = "HAnimJointShape";
Transform1160.child = new undefined();

Transform1160.child[0] = Shape1161;

HAnimSegment1158.children[1] = Transform1160;

Shape Shape1162 = createNode("Shape");
LineSet LineSet1163 = createNode("LineSet");
LineSet1163.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1164 = createNode("ColorRGBA");
ColorRGBA1164.USE = "HAnimSegmentLineColorRGBA";
LineSet1163.color = ColorRGBA1164;

Coordinate Coordinate1165 = createNode("Coordinate");
Coordinate1165.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1163.coord = Coordinate1165;

Shape1162.geometry = LineSet1163;

HAnimSegment1158.children[2] = Shape1162;

HAnimJoint1157.children = new MFNode();

HAnimJoint1157.children[0] = HAnimSegment1158;

HAnimJoint HAnimJoint1166 = createNode("HAnimJoint");
HAnimJoint1166.DEF = "hanim_l_ring2";
HAnimJoint1166.name = "l_ring2";
HAnimJoint1166.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment1167 = createNode("HAnimSegment");
HAnimSegment1167.DEF = "hanim_l_ring_middle";
HAnimSegment1167.name = "l_ring_middle";
TouchSensor TouchSensor1168 = createNode("TouchSensor");
TouchSensor1168.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1167.children = new MFNode();

HAnimSegment1167.children[0] = TouchSensor1168;

Transform Transform1169 = createNode("Transform");
Transform1169.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape1170 = createNode("Shape");
Shape1170.USE = "HAnimJointShape";
Transform1169.child = new undefined();

Transform1169.child[0] = Shape1170;

HAnimSegment1167.children[1] = Transform1169;

Shape Shape1171 = createNode("Shape");
LineSet LineSet1172 = createNode("LineSet");
LineSet1172.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1173 = createNode("ColorRGBA");
ColorRGBA1173.USE = "HAnimSegmentLineColorRGBA";
LineSet1172.color = ColorRGBA1173;

Coordinate Coordinate1174 = createNode("Coordinate");
Coordinate1174.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1172.coord = Coordinate1174;

Shape1171.geometry = LineSet1172;

HAnimSegment1167.children[2] = Shape1171;

HAnimJoint1166.children = new MFNode();

HAnimJoint1166.children[0] = HAnimSegment1167;

HAnimJoint HAnimJoint1175 = createNode("HAnimJoint");
HAnimJoint1175.DEF = "hanim_l_ring3";
HAnimJoint1175.name = "l_ring3";
HAnimJoint1175.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimSegment HAnimSegment1176 = createNode("HAnimSegment");
HAnimSegment1176.DEF = "hanim_l_ring_distal";
HAnimSegment1176.name = "l_ring_distal";
TouchSensor TouchSensor1177 = createNode("TouchSensor");
TouchSensor1177.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1176.children = new MFNode();

HAnimSegment1176.children[0] = TouchSensor1177;

Transform Transform1178 = createNode("Transform");
Transform1178.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape1179 = createNode("Shape");
Shape1179.USE = "HAnimJointShape";
Transform1178.child = new undefined();

Transform1178.child[0] = Shape1179;

HAnimSegment1176.children[1] = Transform1178;

Shape Shape1180 = createNode("Shape");
LineSet LineSet1181 = createNode("LineSet");
LineSet1181.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1182 = createNode("ColorRGBA");
ColorRGBA1182.USE = "HAnimSiteLineColorRGBA";
LineSet1181.color = ColorRGBA1182;

Coordinate Coordinate1183 = createNode("Coordinate");
Coordinate1183.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1181.coord = Coordinate1183;

Shape1180.geometry = LineSet1181;

HAnimSegment1176.children[2] = Shape1180;

HAnimSite HAnimSite1184 = createNode("HAnimSite");
HAnimSite1184.DEF = "hanim_l_ring_distal_tip";
HAnimSite1184.name = "l_ring_distal_tip";
HAnimSite1184.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
TouchSensor TouchSensor1185 = createNode("TouchSensor");
TouchSensor1185.description = "HAnimSite l_ring_distal_tip";
HAnimSite1184.children = new MFNode();

HAnimSite1184.children[0] = TouchSensor1185;

Shape Shape1186 = createNode("Shape");
Shape1186.USE = "HAnimSiteShape";
HAnimSite1184.children[1] = Shape1186;

HAnimSegment1176.children[3] = HAnimSite1184;

HAnimJoint1175.children = new MFNode();

HAnimJoint1175.children[0] = HAnimSegment1176;

HAnimJoint1166.children[1] = HAnimJoint1175;

HAnimJoint1157.children[1] = HAnimJoint1166;

HAnimJoint1148.children[1] = HAnimJoint1157;

HAnimJoint977.children[4] = HAnimJoint1148;

HAnimJoint HAnimJoint1187 = createNode("HAnimJoint");
HAnimJoint1187.DEF = "hanim_l_pinky0";
HAnimJoint1187.name = "l_pinky0";
HAnimJoint1187.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment1188 = createNode("HAnimSegment");
HAnimSegment1188.DEF = "hanim_l_pinky_metacarpal";
HAnimSegment1188.name = "l_pinky_metacarpal";
TouchSensor TouchSensor1189 = createNode("TouchSensor");
TouchSensor1189.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1188.children = new MFNode();

HAnimSegment1188.children[0] = TouchSensor1189;

Transform Transform1190 = createNode("Transform");
Transform1190.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape1191 = createNode("Shape");
Shape1191.USE = "HAnimJointShape";
Transform1190.child = new undefined();

Transform1190.child[0] = Shape1191;

HAnimSegment1188.children[1] = Transform1190;

Shape Shape1192 = createNode("Shape");
LineSet LineSet1193 = createNode("LineSet");
LineSet1193.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1194 = createNode("ColorRGBA");
ColorRGBA1194.USE = "HAnimSegmentLineColorRGBA";
LineSet1193.color = ColorRGBA1194;

Coordinate Coordinate1195 = createNode("Coordinate");
Coordinate1195.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1193.coord = Coordinate1195;

Shape1192.geometry = LineSet1193;

HAnimSegment1188.children[2] = Shape1192;

HAnimJoint1187.children = new MFNode();

HAnimJoint1187.children[0] = HAnimSegment1188;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.DEF = "hanim_l_pinky1";
HAnimJoint1196.name = "l_pinky1";
HAnimJoint1196.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment1197 = createNode("HAnimSegment");
HAnimSegment1197.DEF = "hanim_l_pinky_proximal";
HAnimSegment1197.name = "l_pinky_proximal";
TouchSensor TouchSensor1198 = createNode("TouchSensor");
TouchSensor1198.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1197.children = new MFNode();

HAnimSegment1197.children[0] = TouchSensor1198;

Transform Transform1199 = createNode("Transform");
Transform1199.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape1200 = createNode("Shape");
Shape1200.USE = "HAnimJointShape";
Transform1199.child = new undefined();

Transform1199.child[0] = Shape1200;

HAnimSegment1197.children[1] = Transform1199;

Shape Shape1201 = createNode("Shape");
LineSet LineSet1202 = createNode("LineSet");
LineSet1202.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1203 = createNode("ColorRGBA");
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA";
LineSet1202.color = ColorRGBA1203;

Coordinate Coordinate1204 = createNode("Coordinate");
Coordinate1204.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1202.coord = Coordinate1204;

Shape1201.geometry = LineSet1202;

HAnimSegment1197.children[2] = Shape1201;

HAnimJoint1196.children = new MFNode();

HAnimJoint1196.children[0] = HAnimSegment1197;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.DEF = "hanim_l_pinky2";
HAnimJoint1205.name = "l_pinky2";
HAnimJoint1205.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment1206 = createNode("HAnimSegment");
HAnimSegment1206.DEF = "hanim_l_pinky_middle";
HAnimSegment1206.name = "l_pinky_middle";
TouchSensor TouchSensor1207 = createNode("TouchSensor");
TouchSensor1207.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1206.children = new MFNode();

HAnimSegment1206.children[0] = TouchSensor1207;

Transform Transform1208 = createNode("Transform");
Transform1208.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape1209 = createNode("Shape");
Shape1209.USE = "HAnimJointShape";
Transform1208.child = new undefined();

Transform1208.child[0] = Shape1209;

HAnimSegment1206.children[1] = Transform1208;

Shape Shape1210 = createNode("Shape");
LineSet LineSet1211 = createNode("LineSet");
LineSet1211.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1212 = createNode("ColorRGBA");
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA";
LineSet1211.color = ColorRGBA1212;

Coordinate Coordinate1213 = createNode("Coordinate");
Coordinate1213.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1211.coord = Coordinate1213;

Shape1210.geometry = LineSet1211;

HAnimSegment1206.children[2] = Shape1210;

HAnimJoint1205.children = new MFNode();

HAnimJoint1205.children[0] = HAnimSegment1206;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.DEF = "hanim_l_pinky3";
HAnimJoint1214.name = "l_pinky3";
HAnimJoint1214.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimSegment HAnimSegment1215 = createNode("HAnimSegment");
HAnimSegment1215.DEF = "hanim_l_pinky_distal";
HAnimSegment1215.name = "l_pinky_distal";
TouchSensor TouchSensor1216 = createNode("TouchSensor");
TouchSensor1216.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1215.children = new MFNode();

HAnimSegment1215.children[0] = TouchSensor1216;

Transform Transform1217 = createNode("Transform");
Transform1217.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape1218 = createNode("Shape");
Shape1218.USE = "HAnimJointShape";
Transform1217.child = new undefined();

Transform1217.child[0] = Shape1218;

HAnimSegment1215.children[1] = Transform1217;

Shape Shape1219 = createNode("Shape");
LineSet LineSet1220 = createNode("LineSet");
LineSet1220.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1221 = createNode("ColorRGBA");
ColorRGBA1221.USE = "HAnimSiteLineColorRGBA";
LineSet1220.color = ColorRGBA1221;

Coordinate Coordinate1222 = createNode("Coordinate");
Coordinate1222.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1220.coord = Coordinate1222;

Shape1219.geometry = LineSet1220;

HAnimSegment1215.children[2] = Shape1219;

HAnimSite HAnimSite1223 = createNode("HAnimSite");
HAnimSite1223.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1223.name = "l_pinky_distal_tip";
HAnimSite1223.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
TouchSensor TouchSensor1224 = createNode("TouchSensor");
TouchSensor1224.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1223.children = new MFNode();

HAnimSite1223.children[0] = TouchSensor1224;

Shape Shape1225 = createNode("Shape");
Shape1225.USE = "HAnimSiteShape";
HAnimSite1223.children[1] = Shape1225;

HAnimSegment1215.children[3] = HAnimSite1223;

HAnimJoint1214.children = new MFNode();

HAnimJoint1214.children[0] = HAnimSegment1215;

HAnimJoint1205.children[1] = HAnimJoint1214;

HAnimJoint1196.children[1] = HAnimJoint1205;

HAnimJoint1187.children[1] = HAnimJoint1196;

HAnimJoint977.children[5] = HAnimJoint1187;

HAnimJoint940.children[1] = HAnimJoint977;

HAnimJoint924.children[1] = HAnimJoint940;

HAnimJoint915.children[1] = HAnimJoint924;

HAnimJoint878.children[1] = HAnimJoint915;

HAnimJoint594.children[2] = HAnimJoint878;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.DEF = "hanim_r_sternoclavicular";
HAnimJoint1226.name = "r_sternoclavicular";
HAnimJoint1226.rotation = new SFRotation(new float[0,0,-1.00000000000003,0.108042894183947]);
HAnimJoint1226.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment1227 = createNode("HAnimSegment");
HAnimSegment1227.DEF = "hanim_r_clavicle";
HAnimSegment1227.name = "r_clavicle";
TouchSensor TouchSensor1228 = createNode("TouchSensor");
TouchSensor1228.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1227.children = new MFNode();

HAnimSegment1227.children[0] = TouchSensor1228;

Transform Transform1229 = createNode("Transform");
Transform1229.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
Shape Shape1230 = createNode("Shape");
Shape1230.USE = "HAnimJointShape";
Transform1229.child = new undefined();

Transform1229.child[0] = Shape1230;

HAnimSegment1227.children[1] = Transform1229;

Shape Shape1231 = createNode("Shape");
LineSet LineSet1232 = createNode("LineSet");
LineSet1232.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1233 = createNode("ColorRGBA");
ColorRGBA1233.USE = "HAnimSegmentLineColorRGBA";
LineSet1232.color = ColorRGBA1233;

Coordinate Coordinate1234 = createNode("Coordinate");
Coordinate1234.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1232.coord = Coordinate1234;

Shape1231.geometry = LineSet1232;

HAnimSegment1227.children[2] = Shape1231;

Shape Shape1235 = createNode("Shape");
LineSet LineSet1236 = createNode("LineSet");
LineSet1236.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1237 = createNode("ColorRGBA");
ColorRGBA1237.USE = "HAnimSiteLineColorRGBA";
LineSet1236.color = ColorRGBA1237;

Coordinate Coordinate1238 = createNode("Coordinate");
Coordinate1238.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1236.coord = Coordinate1238;

Shape1235.geometry = LineSet1236;

HAnimSegment1227.children[3] = Shape1235;

Shape Shape1239 = createNode("Shape");
LineSet LineSet1240 = createNode("LineSet");
LineSet1240.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1241 = createNode("ColorRGBA");
ColorRGBA1241.USE = "HAnimSiteLineColorRGBA";
LineSet1240.color = ColorRGBA1241;

Coordinate Coordinate1242 = createNode("Coordinate");
Coordinate1242.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1240.coord = Coordinate1242;

Shape1239.geometry = LineSet1240;

HAnimSegment1227.children[4] = Shape1239;

Shape Shape1243 = createNode("Shape");
LineSet LineSet1244 = createNode("LineSet");
LineSet1244.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1245 = createNode("ColorRGBA");
ColorRGBA1245.USE = "HAnimSiteLineColorRGBA";
LineSet1244.color = ColorRGBA1245;

Coordinate Coordinate1246 = createNode("Coordinate");
Coordinate1246.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1244.coord = Coordinate1246;

Shape1243.geometry = LineSet1244;

HAnimSegment1227.children[5] = Shape1243;

Shape Shape1247 = createNode("Shape");
LineSet LineSet1248 = createNode("LineSet");
LineSet1248.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1249 = createNode("ColorRGBA");
ColorRGBA1249.USE = "HAnimSiteLineColorRGBA";
LineSet1248.color = ColorRGBA1249;

Coordinate Coordinate1250 = createNode("Coordinate");
Coordinate1250.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1248.coord = Coordinate1250;

Shape1247.geometry = LineSet1248;

HAnimSegment1227.children[6] = Shape1247;

HAnimSite HAnimSite1251 = createNode("HAnimSite");
HAnimSite1251.DEF = "hanim_r_clavicale_pt";
HAnimSite1251.name = "r_clavicale_pt";
HAnimSite1251.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor1252 = createNode("TouchSensor");
TouchSensor1252.description = "HAnimSite r_clavicale";
HAnimSite1251.children = new MFNode();

HAnimSite1251.children[0] = TouchSensor1252;

Shape Shape1253 = createNode("Shape");
Shape1253.USE = "HAnimSiteShape";
HAnimSite1251.children[1] = Shape1253;

HAnimSegment1227.children[7] = HAnimSite1251;

HAnimSite HAnimSite1254 = createNode("HAnimSite");
HAnimSite1254.DEF = "hanim_r_acromion_pt";
HAnimSite1254.name = "r_acromion_pt";
HAnimSite1254.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor1255 = createNode("TouchSensor");
TouchSensor1255.description = "HAnimSite r_acromion";
HAnimSite1254.children = new MFNode();

HAnimSite1254.children[0] = TouchSensor1255;

Shape Shape1256 = createNode("Shape");
Shape1256.USE = "HAnimSiteShape";
HAnimSite1254.children[1] = Shape1256;

HAnimSegment1227.children[8] = HAnimSite1254;

HAnimSite HAnimSite1257 = createNode("HAnimSite");
HAnimSite1257.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1257.name = "r_axilla_ant_pt";
HAnimSite1257.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor1258 = createNode("TouchSensor");
TouchSensor1258.description = "HAnimSite r_axilla_ant";
HAnimSite1257.children = new MFNode();

HAnimSite1257.children[0] = TouchSensor1258;

Shape Shape1259 = createNode("Shape");
Shape1259.USE = "HAnimSiteShape";
HAnimSite1257.children[1] = Shape1259;

HAnimSegment1227.children[9] = HAnimSite1257;

HAnimSite HAnimSite1260 = createNode("HAnimSite");
HAnimSite1260.DEF = "hanim_r_axilla_post_pt";
HAnimSite1260.name = "r_axilla_post_pt";
HAnimSite1260.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor1261 = createNode("TouchSensor");
TouchSensor1261.description = "HAnimSite r_axilla_post";
HAnimSite1260.children = new MFNode();

HAnimSite1260.children[0] = TouchSensor1261;

Shape Shape1262 = createNode("Shape");
Shape1262.USE = "HAnimSiteShape";
HAnimSite1260.children[1] = Shape1262;

HAnimSegment1227.children[10] = HAnimSite1260;

HAnimJoint1226.children = new MFNode();

HAnimJoint1226.children[0] = HAnimSegment1227;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.DEF = "hanim_r_acromioclavicular";
HAnimJoint1263.name = "r_acromioclavicular";
HAnimJoint1263.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment1264 = createNode("HAnimSegment");
HAnimSegment1264.DEF = "hanim_r_scapula";
HAnimSegment1264.name = "r_scapula";
TouchSensor TouchSensor1265 = createNode("TouchSensor");
TouchSensor1265.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1264.children = new MFNode();

HAnimSegment1264.children[0] = TouchSensor1265;

Transform Transform1266 = createNode("Transform");
Transform1266.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
Shape Shape1267 = createNode("Shape");
Shape1267.USE = "HAnimJointShape";
Transform1266.child = new undefined();

Transform1266.child[0] = Shape1267;

HAnimSegment1264.children[1] = Transform1266;

Shape Shape1268 = createNode("Shape");
LineSet LineSet1269 = createNode("LineSet");
LineSet1269.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1270 = createNode("ColorRGBA");
ColorRGBA1270.USE = "HAnimSegmentLineColorRGBA";
LineSet1269.color = ColorRGBA1270;

Coordinate Coordinate1271 = createNode("Coordinate");
Coordinate1271.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1269.coord = Coordinate1271;

Shape1268.geometry = LineSet1269;

HAnimSegment1264.children[2] = Shape1268;

HAnimJoint1263.children = new MFNode();

HAnimJoint1263.children[0] = HAnimSegment1264;

HAnimJoint HAnimJoint1272 = createNode("HAnimJoint");
HAnimJoint1272.DEF = "hanim_r_shoulder";
HAnimJoint1272.name = "r_shoulder";
HAnimJoint1272.rotation = new SFRotation(new float[0,0,-1,0.950777468818762]);
HAnimJoint1272.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment1273 = createNode("HAnimSegment");
HAnimSegment1273.DEF = "hanim_r_upperarm";
HAnimSegment1273.name = "r_upperarm";
TouchSensor TouchSensor1274 = createNode("TouchSensor");
TouchSensor1274.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1273.children = new MFNode();

HAnimSegment1273.children[0] = TouchSensor1274;

Transform Transform1275 = createNode("Transform");
Transform1275.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
Shape Shape1276 = createNode("Shape");
Shape1276.USE = "HAnimJointShape";
Transform1275.child = new undefined();

Transform1275.child[0] = Shape1276;

HAnimSegment1273.children[1] = Transform1275;

Shape Shape1277 = createNode("Shape");
LineSet LineSet1278 = createNode("LineSet");
LineSet1278.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1279 = createNode("ColorRGBA");
ColorRGBA1279.USE = "HAnimSegmentLineColorRGBA";
LineSet1278.color = ColorRGBA1279;

Coordinate Coordinate1280 = createNode("Coordinate");
Coordinate1280.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1278.coord = Coordinate1280;

Shape1277.geometry = LineSet1278;

HAnimSegment1273.children[2] = Shape1277;

Shape Shape1281 = createNode("Shape");
LineSet LineSet1282 = createNode("LineSet");
LineSet1282.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1283 = createNode("ColorRGBA");
ColorRGBA1283.USE = "HAnimSiteLineColorRGBA";
LineSet1282.color = ColorRGBA1283;

Coordinate Coordinate1284 = createNode("Coordinate");
Coordinate1284.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1282.coord = Coordinate1284;

Shape1281.geometry = LineSet1282;

HAnimSegment1273.children[3] = Shape1281;

HAnimSite HAnimSite1285 = createNode("HAnimSite");
HAnimSite1285.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1285.name = "r_humeral_lateral_epicn_pt";
HAnimSite1285.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1286 = createNode("TouchSensor");
TouchSensor1286.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1285.children = new MFNode();

HAnimSite1285.children[0] = TouchSensor1286;

Shape Shape1287 = createNode("Shape");
Shape1287.USE = "HAnimSiteShape";
HAnimSite1285.children[1] = Shape1287;

HAnimSegment1273.children[4] = HAnimSite1285;

HAnimJoint1272.children = new MFNode();

HAnimJoint1272.children[0] = HAnimSegment1273;

HAnimJoint HAnimJoint1288 = createNode("HAnimJoint");
HAnimJoint1288.DEF = "hanim_r_elbow";
HAnimJoint1288.name = "r_elbow";
HAnimJoint1288.rotation = new SFRotation(new float[-1,0,0,0.297117959005863]);
HAnimJoint1288.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment1289 = createNode("HAnimSegment");
HAnimSegment1289.DEF = "hanim_r_forearm";
HAnimSegment1289.name = "r_forearm";
TouchSensor TouchSensor1290 = createNode("TouchSensor");
TouchSensor1290.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1289.children = new MFNode();

HAnimSegment1289.children[0] = TouchSensor1290;

Transform Transform1291 = createNode("Transform");
Transform1291.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
Shape Shape1292 = createNode("Shape");
Shape1292.USE = "HAnimJointShape";
Transform1291.child = new undefined();

Transform1291.child[0] = Shape1292;

HAnimSegment1289.children[1] = Transform1291;

Shape Shape1293 = createNode("Shape");
LineSet LineSet1294 = createNode("LineSet");
LineSet1294.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1295 = createNode("ColorRGBA");
ColorRGBA1295.USE = "HAnimSegmentLineColorRGBA";
LineSet1294.color = ColorRGBA1295;

Coordinate Coordinate1296 = createNode("Coordinate");
Coordinate1296.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1294.coord = Coordinate1296;

Shape1293.geometry = LineSet1294;

HAnimSegment1289.children[2] = Shape1293;

Shape Shape1297 = createNode("Shape");
LineSet LineSet1298 = createNode("LineSet");
LineSet1298.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1299 = createNode("ColorRGBA");
ColorRGBA1299.USE = "HAnimSiteLineColorRGBA";
LineSet1298.color = ColorRGBA1299;

Coordinate Coordinate1300 = createNode("Coordinate");
Coordinate1300.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1298.coord = Coordinate1300;

Shape1297.geometry = LineSet1298;

HAnimSegment1289.children[3] = Shape1297;

Shape Shape1301 = createNode("Shape");
LineSet LineSet1302 = createNode("LineSet");
LineSet1302.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1303 = createNode("ColorRGBA");
ColorRGBA1303.USE = "HAnimSiteLineColorRGBA";
LineSet1302.color = ColorRGBA1303;

Coordinate Coordinate1304 = createNode("Coordinate");
Coordinate1304.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1302.coord = Coordinate1304;

Shape1301.geometry = LineSet1302;

HAnimSegment1289.children[4] = Shape1301;

Shape Shape1305 = createNode("Shape");
LineSet LineSet1306 = createNode("LineSet");
LineSet1306.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1307 = createNode("ColorRGBA");
ColorRGBA1307.USE = "HAnimSiteLineColorRGBA";
LineSet1306.color = ColorRGBA1307;

Coordinate Coordinate1308 = createNode("Coordinate");
Coordinate1308.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1306.coord = Coordinate1308;

Shape1305.geometry = LineSet1306;

HAnimSegment1289.children[5] = Shape1305;

Shape Shape1309 = createNode("Shape");
LineSet LineSet1310 = createNode("LineSet");
LineSet1310.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1311 = createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSiteLineColorRGBA";
LineSet1310.color = ColorRGBA1311;

Coordinate Coordinate1312 = createNode("Coordinate");
Coordinate1312.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1310.coord = Coordinate1312;

Shape1309.geometry = LineSet1310;

HAnimSegment1289.children[6] = Shape1309;

HAnimSite HAnimSite1313 = createNode("HAnimSite");
HAnimSite1313.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1313.name = "r_radial_styloid_pt";
HAnimSite1313.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1314 = createNode("TouchSensor");
TouchSensor1314.description = "HAnimSite r_radial_styloid";
HAnimSite1313.children = new MFNode();

HAnimSite1313.children[0] = TouchSensor1314;

Shape Shape1315 = createNode("Shape");
Shape1315.USE = "HAnimSiteShape";
HAnimSite1313.children[1] = Shape1315;

HAnimSegment1289.children[7] = HAnimSite1313;

HAnimSite HAnimSite1316 = createNode("HAnimSite");
HAnimSite1316.DEF = "hanim_r_olecranon_pt";
HAnimSite1316.name = "r_olecranon_pt";
HAnimSite1316.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1317 = createNode("TouchSensor");
TouchSensor1317.description = "HAnimSite r_olecranon";
HAnimSite1316.children = new MFNode();

HAnimSite1316.children[0] = TouchSensor1317;

Shape Shape1318 = createNode("Shape");
Shape1318.USE = "HAnimSiteShape";
HAnimSite1316.children[1] = Shape1318;

HAnimSegment1289.children[8] = HAnimSite1316;

HAnimSite HAnimSite1319 = createNode("HAnimSite");
HAnimSite1319.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1319.name = "r_humeral_medial_epicn_pt";
HAnimSite1319.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1320 = createNode("TouchSensor");
TouchSensor1320.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1319.children = new MFNode();

HAnimSite1319.children[0] = TouchSensor1320;

Shape Shape1321 = createNode("Shape");
Shape1321.USE = "HAnimSiteShape";
HAnimSite1319.children[1] = Shape1321;

HAnimSegment1289.children[9] = HAnimSite1319;

HAnimSite HAnimSite1322 = createNode("HAnimSite");
HAnimSite1322.DEF = "hanim_r_radiale_pt";
HAnimSite1322.name = "r_radiale_pt";
HAnimSite1322.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1323 = createNode("TouchSensor");
TouchSensor1323.description = "HAnimSite r_radiale";
HAnimSite1322.children = new MFNode();

HAnimSite1322.children[0] = TouchSensor1323;

Shape Shape1324 = createNode("Shape");
Shape1324.USE = "HAnimSiteShape";
HAnimSite1322.children[1] = Shape1324;

HAnimSegment1289.children[10] = HAnimSite1322;

HAnimJoint1288.children = new MFNode();

HAnimJoint1288.children[0] = HAnimSegment1289;

HAnimJoint HAnimJoint1325 = createNode("HAnimJoint");
HAnimJoint1325.DEF = "hanim_r_wrist";
HAnimJoint1325.name = "r_wrist";
HAnimJoint1325.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment1326 = createNode("HAnimSegment");
HAnimSegment1326.DEF = "hanim_r_hand";
HAnimSegment1326.name = "r_hand";
TouchSensor TouchSensor1327 = createNode("TouchSensor");
TouchSensor1327.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1326.children = new MFNode();

HAnimSegment1326.children[0] = TouchSensor1327;

Transform Transform1328 = createNode("Transform");
Transform1328.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
Shape Shape1329 = createNode("Shape");
Shape1329.USE = "HAnimJointShape";
Transform1328.child = new undefined();

Transform1328.child[0] = Shape1329;

HAnimSegment1326.children[1] = Transform1328;

Shape Shape1330 = createNode("Shape");
LineSet LineSet1331 = createNode("LineSet");
LineSet1331.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1332 = createNode("ColorRGBA");
ColorRGBA1332.USE = "HAnimSegmentLineColorRGBA";
LineSet1331.color = ColorRGBA1332;

Coordinate Coordinate1333 = createNode("Coordinate");
Coordinate1333.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1331.coord = Coordinate1333;

Shape1330.geometry = LineSet1331;

HAnimSegment1326.children[2] = Shape1330;

Shape Shape1334 = createNode("Shape");
LineSet LineSet1335 = createNode("LineSet");
LineSet1335.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1336 = createNode("ColorRGBA");
ColorRGBA1336.USE = "HAnimSegmentLineColorRGBA";
LineSet1335.color = ColorRGBA1336;

Coordinate Coordinate1337 = createNode("Coordinate");
Coordinate1337.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1335.coord = Coordinate1337;

Shape1334.geometry = LineSet1335;

HAnimSegment1326.children[3] = Shape1334;

Shape Shape1338 = createNode("Shape");
LineSet LineSet1339 = createNode("LineSet");
LineSet1339.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1340 = createNode("ColorRGBA");
ColorRGBA1340.USE = "HAnimSegmentLineColorRGBA";
LineSet1339.color = ColorRGBA1340;

Coordinate Coordinate1341 = createNode("Coordinate");
Coordinate1341.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1339.coord = Coordinate1341;

Shape1338.geometry = LineSet1339;

HAnimSegment1326.children[4] = Shape1338;

Shape Shape1342 = createNode("Shape");
LineSet LineSet1343 = createNode("LineSet");
LineSet1343.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1344 = createNode("ColorRGBA");
ColorRGBA1344.USE = "HAnimSegmentLineColorRGBA";
LineSet1343.color = ColorRGBA1344;

Coordinate Coordinate1345 = createNode("Coordinate");
Coordinate1345.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1343.coord = Coordinate1345;

Shape1342.geometry = LineSet1343;

HAnimSegment1326.children[5] = Shape1342;

Shape Shape1346 = createNode("Shape");
LineSet LineSet1347 = createNode("LineSet");
LineSet1347.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1348 = createNode("ColorRGBA");
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA";
LineSet1347.color = ColorRGBA1348;

Coordinate Coordinate1349 = createNode("Coordinate");
Coordinate1349.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1347.coord = Coordinate1349;

Shape1346.geometry = LineSet1347;

HAnimSegment1326.children[6] = Shape1346;

Shape Shape1350 = createNode("Shape");
LineSet LineSet1351 = createNode("LineSet");
LineSet1351.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1352 = createNode("ColorRGBA");
ColorRGBA1352.USE = "HAnimSiteLineColorRGBA";
LineSet1351.color = ColorRGBA1352;

Coordinate Coordinate1353 = createNode("Coordinate");
Coordinate1353.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1351.coord = Coordinate1353;

Shape1350.geometry = LineSet1351;

HAnimSegment1326.children[7] = Shape1350;

Shape Shape1354 = createNode("Shape");
LineSet LineSet1355 = createNode("LineSet");
LineSet1355.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1356 = createNode("ColorRGBA");
ColorRGBA1356.USE = "HAnimSiteLineColorRGBA";
LineSet1355.color = ColorRGBA1356;

Coordinate Coordinate1357 = createNode("Coordinate");
Coordinate1357.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1355.coord = Coordinate1357;

Shape1354.geometry = LineSet1355;

HAnimSegment1326.children[8] = Shape1354;

Shape Shape1358 = createNode("Shape");
LineSet LineSet1359 = createNode("LineSet");
LineSet1359.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1360 = createNode("ColorRGBA");
ColorRGBA1360.USE = "HAnimSiteLineColorRGBA";
LineSet1359.color = ColorRGBA1360;

Coordinate Coordinate1361 = createNode("Coordinate");
Coordinate1361.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1359.coord = Coordinate1361;

Shape1358.geometry = LineSet1359;

HAnimSegment1326.children[9] = Shape1358;

Shape Shape1362 = createNode("Shape");
LineSet LineSet1363 = createNode("LineSet");
LineSet1363.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1364 = createNode("ColorRGBA");
ColorRGBA1364.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1363.color = ColorRGBA1364;

Coordinate Coordinate1365 = createNode("Coordinate");
Coordinate1365.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1363.coord = Coordinate1365;

Shape1362.geometry = LineSet1363;

HAnimSegment1326.children[10] = Shape1362;

HAnimSite HAnimSite1366 = createNode("HAnimSite");
HAnimSite1366.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1366.name = "r_metacarpal_pha2_pt";
HAnimSite1366.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1367 = createNode("TouchSensor");
TouchSensor1367.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1366.children = new MFNode();

HAnimSite1366.children[0] = TouchSensor1367;

Shape Shape1368 = createNode("Shape");
Shape1368.USE = "HAnimSiteShape";
HAnimSite1366.children[1] = Shape1368;

HAnimSegment1326.children[11] = HAnimSite1366;

HAnimSite HAnimSite1369 = createNode("HAnimSite");
HAnimSite1369.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1369.name = "r_ulnar_styloid_pt";
HAnimSite1369.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1370 = createNode("TouchSensor");
TouchSensor1370.description = "HAnimSite r_ulnar_styloid";
HAnimSite1369.children = new MFNode();

HAnimSite1369.children[0] = TouchSensor1370;

Shape Shape1371 = createNode("Shape");
Shape1371.USE = "HAnimSiteShape";
HAnimSite1369.children[1] = Shape1371;

HAnimSegment1326.children[12] = HAnimSite1369;

HAnimSite HAnimSite1372 = createNode("HAnimSite");
HAnimSite1372.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1372.name = "r_metacarpal_pha5_pt";
HAnimSite1372.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1373 = createNode("TouchSensor");
TouchSensor1373.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1372.children = new MFNode();

HAnimSite1372.children[0] = TouchSensor1373;

Shape Shape1374 = createNode("Shape");
Shape1374.USE = "HAnimSiteShape";
HAnimSite1372.children[1] = Shape1374;

HAnimSegment1326.children[13] = HAnimSite1372;

HAnimSite HAnimSite1375 = createNode("HAnimSite");
HAnimSite1375.DEF = "hanim_r_hand_front_view";
HAnimSite1375.name = "r_hand_front_view";
HAnimSite1375.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
Viewpoint Viewpoint1376 = createNode("Viewpoint");
Viewpoint1376.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1376.description = "right hand front";
Viewpoint1376.position = new SFVec3f(new float[0,0,0]);
Viewpoint1376.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
HAnimSite1375.children = new MFNode();

HAnimSite1375.children[0] = Viewpoint1376;

Anchor Anchor1377 = createNode("Anchor");
Anchor1377.description = "HAnimSite Viewpoint hanim_r_hand_front_view";
Anchor1377.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
LOD LOD1378 = createNode("LOD");
LOD1378.forceTransitions = True;
LOD1378.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1379 = createNode("WorldInfo");
WorldInfo1379.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1378.children = new MFNode();

LOD1378.children[0] = WorldInfo1379;

Shape Shape1380 = createNode("Shape");
Shape1380.USE = "HAnimSiteViewpointShape";
LOD1378.children[1] = Shape1380;

Anchor1377.children = new MFNode();

Anchor1377.children[0] = LOD1378;

HAnimSite1375.children[1] = Anchor1377;

HAnimSegment1326.children[14] = HAnimSite1375;

HAnimJoint1325.children = new MFNode();

HAnimJoint1325.children[0] = HAnimSegment1326;

HAnimJoint HAnimJoint1381 = createNode("HAnimJoint");
HAnimJoint1381.DEF = "hanim_r_thumb1";
HAnimJoint1381.name = "r_thumb1";
HAnimJoint1381.rotation = new SFRotation(new float[1,0,0,0.270107235459875]);
HAnimJoint1381.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment1382 = createNode("HAnimSegment");
HAnimSegment1382.DEF = "hanim_r_thumb_metacarpal";
HAnimSegment1382.name = "r_thumb_metacarpal";
TouchSensor TouchSensor1383 = createNode("TouchSensor");
TouchSensor1383.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1382.children = new MFNode();

HAnimSegment1382.children[0] = TouchSensor1383;

Transform Transform1384 = createNode("Transform");
Transform1384.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
Shape Shape1385 = createNode("Shape");
Shape1385.USE = "HAnimJointShape";
Transform1384.child = new undefined();

Transform1384.child[0] = Shape1385;

HAnimSegment1382.children[1] = Transform1384;

Shape Shape1386 = createNode("Shape");
LineSet LineSet1387 = createNode("LineSet");
LineSet1387.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1388 = createNode("ColorRGBA");
ColorRGBA1388.USE = "HAnimSegmentLineColorRGBA";
LineSet1387.color = ColorRGBA1388;

Coordinate Coordinate1389 = createNode("Coordinate");
Coordinate1389.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1387.coord = Coordinate1389;

Shape1386.geometry = LineSet1387;

HAnimSegment1382.children[2] = Shape1386;

HAnimJoint1381.children = new MFNode();

HAnimJoint1381.children[0] = HAnimSegment1382;

HAnimJoint HAnimJoint1390 = createNode("HAnimJoint");
HAnimJoint1390.DEF = "hanim_r_thumb2";
HAnimJoint1390.name = "r_thumb2";
HAnimJoint1390.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment1391 = createNode("HAnimSegment");
HAnimSegment1391.DEF = "hanim_r_thumb_proximal";
HAnimSegment1391.name = "r_thumb_proximal";
TouchSensor TouchSensor1392 = createNode("TouchSensor");
TouchSensor1392.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1391.children = new MFNode();

HAnimSegment1391.children[0] = TouchSensor1392;

Transform Transform1393 = createNode("Transform");
Transform1393.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
Shape Shape1394 = createNode("Shape");
Shape1394.USE = "HAnimJointShape";
Transform1393.child = new undefined();

Transform1393.child[0] = Shape1394;

HAnimSegment1391.children[1] = Transform1393;

Shape Shape1395 = createNode("Shape");
LineSet LineSet1396 = createNode("LineSet");
LineSet1396.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1397 = createNode("ColorRGBA");
ColorRGBA1397.USE = "HAnimSegmentLineColorRGBA";
LineSet1396.color = ColorRGBA1397;

Coordinate Coordinate1398 = createNode("Coordinate");
Coordinate1398.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1396.coord = Coordinate1398;

Shape1395.geometry = LineSet1396;

HAnimSegment1391.children[2] = Shape1395;

HAnimJoint1390.children = new MFNode();

HAnimJoint1390.children[0] = HAnimSegment1391;

HAnimJoint HAnimJoint1399 = createNode("HAnimJoint");
HAnimJoint1399.DEF = "hanim_r_thumb3";
HAnimJoint1399.name = "r_thumb3";
HAnimJoint1399.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment1400 = createNode("HAnimSegment");
HAnimSegment1400.DEF = "hanim_r_thumb_distal";
HAnimSegment1400.name = "r_thumb_distal";
TouchSensor TouchSensor1401 = createNode("TouchSensor");
TouchSensor1401.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1400.children = new MFNode();

HAnimSegment1400.children[0] = TouchSensor1401;

Transform Transform1402 = createNode("Transform");
Transform1402.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
Shape Shape1403 = createNode("Shape");
Shape1403.USE = "HAnimJointShape";
Transform1402.child = new undefined();

Transform1402.child[0] = Shape1403;

HAnimSegment1400.children[1] = Transform1402;

Shape Shape1404 = createNode("Shape");
LineSet LineSet1405 = createNode("LineSet");
LineSet1405.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1406 = createNode("ColorRGBA");
ColorRGBA1406.USE = "HAnimSiteLineColorRGBA";
LineSet1405.color = ColorRGBA1406;

Coordinate Coordinate1407 = createNode("Coordinate");
Coordinate1407.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1405.coord = Coordinate1407;

Shape1404.geometry = LineSet1405;

HAnimSegment1400.children[2] = Shape1404;

HAnimSite HAnimSite1408 = createNode("HAnimSite");
HAnimSite1408.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1408.name = "r_thumb_distal_tip";
HAnimSite1408.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
TouchSensor TouchSensor1409 = createNode("TouchSensor");
TouchSensor1409.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1408.children = new MFNode();

HAnimSite1408.children[0] = TouchSensor1409;

Shape Shape1410 = createNode("Shape");
Shape1410.USE = "HAnimSiteShape";
HAnimSite1408.children[1] = Shape1410;

HAnimSegment1400.children[3] = HAnimSite1408;

HAnimJoint1399.children = new MFNode();

HAnimJoint1399.children[0] = HAnimSegment1400;

HAnimJoint1390.children[1] = HAnimJoint1399;

HAnimJoint1381.children[1] = HAnimJoint1390;

HAnimJoint1325.children[1] = HAnimJoint1381;

HAnimJoint HAnimJoint1411 = createNode("HAnimJoint");
HAnimJoint1411.DEF = "hanim_r_index0";
HAnimJoint1411.name = "r_index0";
HAnimJoint1411.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment1412 = createNode("HAnimSegment");
HAnimSegment1412.DEF = "hanim_r_index_metacarpal";
HAnimSegment1412.name = "r_index_metacarpal";
TouchSensor TouchSensor1413 = createNode("TouchSensor");
TouchSensor1413.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1412.children = new MFNode();

HAnimSegment1412.children[0] = TouchSensor1413;

Transform Transform1414 = createNode("Transform");
Transform1414.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
Shape Shape1415 = createNode("Shape");
Shape1415.USE = "HAnimJointShape";
Transform1414.child = new undefined();

Transform1414.child[0] = Shape1415;

HAnimSegment1412.children[1] = Transform1414;

Shape Shape1416 = createNode("Shape");
LineSet LineSet1417 = createNode("LineSet");
LineSet1417.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1418 = createNode("ColorRGBA");
ColorRGBA1418.USE = "HAnimSegmentLineColorRGBA";
LineSet1417.color = ColorRGBA1418;

Coordinate Coordinate1419 = createNode("Coordinate");
Coordinate1419.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1417.coord = Coordinate1419;

Shape1416.geometry = LineSet1417;

HAnimSegment1412.children[2] = Shape1416;

HAnimJoint1411.children = new MFNode();

HAnimJoint1411.children[0] = HAnimSegment1412;

HAnimJoint HAnimJoint1420 = createNode("HAnimJoint");
HAnimJoint1420.DEF = "hanim_r_index1";
HAnimJoint1420.name = "r_index1";
HAnimJoint1420.rotation = new SFRotation(new float[0,0,1.00000000000003,0.111082015766469]);
HAnimJoint1420.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment1421 = createNode("HAnimSegment");
HAnimSegment1421.DEF = "hanim_r_index_proximal";
HAnimSegment1421.name = "r_index_proximal";
TouchSensor TouchSensor1422 = createNode("TouchSensor");
TouchSensor1422.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1421.children = new MFNode();

HAnimSegment1421.children[0] = TouchSensor1422;

Transform Transform1423 = createNode("Transform");
Transform1423.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
Shape Shape1424 = createNode("Shape");
Shape1424.USE = "HAnimJointShape";
Transform1423.child = new undefined();

Transform1423.child[0] = Shape1424;

HAnimSegment1421.children[1] = Transform1423;

Shape Shape1425 = createNode("Shape");
LineSet LineSet1426 = createNode("LineSet");
LineSet1426.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1427 = createNode("ColorRGBA");
ColorRGBA1427.USE = "HAnimSegmentLineColorRGBA";
LineSet1426.color = ColorRGBA1427;

Coordinate Coordinate1428 = createNode("Coordinate");
Coordinate1428.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1426.coord = Coordinate1428;

Shape1425.geometry = LineSet1426;

HAnimSegment1421.children[2] = Shape1425;

HAnimJoint1420.children = new MFNode();

HAnimJoint1420.children[0] = HAnimSegment1421;

HAnimJoint HAnimJoint1429 = createNode("HAnimJoint");
HAnimJoint1429.DEF = "hanim_r_index2";
HAnimJoint1429.name = "r_index2";
HAnimJoint1429.rotation = new SFRotation(new float[0,0,0.999999999999999,0.391134387386823]);
HAnimJoint1429.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment1430 = createNode("HAnimSegment");
HAnimSegment1430.DEF = "hanim_r_index_middle";
HAnimSegment1430.name = "r_index_middle";
TouchSensor TouchSensor1431 = createNode("TouchSensor");
TouchSensor1431.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1430.children = new MFNode();

HAnimSegment1430.children[0] = TouchSensor1431;

Transform Transform1432 = createNode("Transform");
Transform1432.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
Shape Shape1433 = createNode("Shape");
Shape1433.USE = "HAnimJointShape";
Transform1432.child = new undefined();

Transform1432.child[0] = Shape1433;

HAnimSegment1430.children[1] = Transform1432;

Shape Shape1434 = createNode("Shape");
LineSet LineSet1435 = createNode("LineSet");
LineSet1435.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1436 = createNode("ColorRGBA");
ColorRGBA1436.USE = "HAnimSegmentLineColorRGBA";
LineSet1435.color = ColorRGBA1436;

Coordinate Coordinate1437 = createNode("Coordinate");
Coordinate1437.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1435.coord = Coordinate1437;

Shape1434.geometry = LineSet1435;

HAnimSegment1430.children[2] = Shape1434;

HAnimJoint1429.children = new MFNode();

HAnimJoint1429.children[0] = HAnimSegment1430;

HAnimJoint HAnimJoint1438 = createNode("HAnimJoint");
HAnimJoint1438.DEF = "hanim_r_index3";
HAnimJoint1438.name = "r_index3";
HAnimJoint1438.rotation = new SFRotation(new float[0,0,0.999999999999997,0.211082015766472]);
HAnimJoint1438.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment1439 = createNode("HAnimSegment");
HAnimSegment1439.DEF = "hanim_r_index_distal";
HAnimSegment1439.name = "r_index_distal";
TouchSensor TouchSensor1440 = createNode("TouchSensor");
TouchSensor1440.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1439.children = new MFNode();

HAnimSegment1439.children[0] = TouchSensor1440;

Transform Transform1441 = createNode("Transform");
Transform1441.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
Shape Shape1442 = createNode("Shape");
Shape1442.USE = "HAnimJointShape";
Transform1441.child = new undefined();

Transform1441.child[0] = Shape1442;

HAnimSegment1439.children[1] = Transform1441;

Shape Shape1443 = createNode("Shape");
LineSet LineSet1444 = createNode("LineSet");
LineSet1444.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1445 = createNode("ColorRGBA");
ColorRGBA1445.USE = "HAnimSiteLineColorRGBA";
LineSet1444.color = ColorRGBA1445;

Coordinate Coordinate1446 = createNode("Coordinate");
Coordinate1446.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1444.coord = Coordinate1446;

Shape1443.geometry = LineSet1444;

HAnimSegment1439.children[2] = Shape1443;

Shape Shape1447 = createNode("Shape");
LineSet LineSet1448 = createNode("LineSet");
LineSet1448.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1449 = createNode("ColorRGBA");
ColorRGBA1449.USE = "HAnimSiteLineColorRGBA";
LineSet1448.color = ColorRGBA1449;

Coordinate Coordinate1450 = createNode("Coordinate");
Coordinate1450.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1448.coord = Coordinate1450;

Shape1447.geometry = LineSet1448;

HAnimSegment1439.children[3] = Shape1447;

HAnimSite HAnimSite1451 = createNode("HAnimSite");
HAnimSite1451.DEF = "hanim_r_index_distal_tip";
HAnimSite1451.name = "r_index_distal_tip";
HAnimSite1451.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
TouchSensor TouchSensor1452 = createNode("TouchSensor");
TouchSensor1452.description = "HAnimSite r_index_distal_tip";
HAnimSite1451.children = new MFNode();

HAnimSite1451.children[0] = TouchSensor1452;

Shape Shape1453 = createNode("Shape");
Shape1453.USE = "HAnimSiteShape";
HAnimSite1451.children[1] = Shape1453;

HAnimSegment1439.children[4] = HAnimSite1451;

HAnimSite HAnimSite1454 = createNode("HAnimSite");
HAnimSite1454.DEF = "hanim_r_dactylion_pt";
HAnimSite1454.name = "r_dactylion_pt";
HAnimSite1454.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1455 = createNode("TouchSensor");
TouchSensor1455.description = "HAnimSite r_dactylion";
HAnimSite1454.children = new MFNode();

HAnimSite1454.children[0] = TouchSensor1455;

Shape Shape1456 = createNode("Shape");
Shape1456.USE = "HAnimSiteShape";
HAnimSite1454.children[1] = Shape1456;

HAnimSegment1439.children[5] = HAnimSite1454;

HAnimJoint1438.children = new MFNode();

HAnimJoint1438.children[0] = HAnimSegment1439;

HAnimJoint1429.children[1] = HAnimJoint1438;

HAnimJoint1420.children[1] = HAnimJoint1429;

HAnimJoint1411.children[1] = HAnimJoint1420;

HAnimJoint1325.children[2] = HAnimJoint1411;

HAnimJoint HAnimJoint1457 = createNode("HAnimJoint");
HAnimJoint1457.DEF = "hanim_r_middle0";
HAnimJoint1457.name = "r_middle0";
HAnimJoint1457.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment1458 = createNode("HAnimSegment");
HAnimSegment1458.DEF = "hanim_r_middle_metacarpal";
HAnimSegment1458.name = "r_middle_metacarpal";
TouchSensor TouchSensor1459 = createNode("TouchSensor");
TouchSensor1459.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1458.children = new MFNode();

HAnimSegment1458.children[0] = TouchSensor1459;

Transform Transform1460 = createNode("Transform");
Transform1460.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
Shape Shape1461 = createNode("Shape");
Shape1461.USE = "HAnimJointShape";
Transform1460.child = new undefined();

Transform1460.child[0] = Shape1461;

HAnimSegment1458.children[1] = Transform1460;

Shape Shape1462 = createNode("Shape");
LineSet LineSet1463 = createNode("LineSet");
LineSet1463.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1464 = createNode("ColorRGBA");
ColorRGBA1464.USE = "HAnimSegmentLineColorRGBA";
LineSet1463.color = ColorRGBA1464;

Coordinate Coordinate1465 = createNode("Coordinate");
Coordinate1465.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1463.coord = Coordinate1465;

Shape1462.geometry = LineSet1463;

HAnimSegment1458.children[2] = Shape1462;

HAnimJoint1457.children = new MFNode();

HAnimJoint1457.children[0] = HAnimSegment1458;

HAnimJoint HAnimJoint1466 = createNode("HAnimJoint");
HAnimJoint1466.DEF = "hanim_r_middle1";
HAnimJoint1466.name = "r_middle1";
HAnimJoint1466.rotation = new SFRotation(new float[0,0,1.00000000000003,0.111082015766469]);
HAnimJoint1466.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment1467 = createNode("HAnimSegment");
HAnimSegment1467.DEF = "hanim_r_middle_proximal";
HAnimSegment1467.name = "r_middle_proximal";
TouchSensor TouchSensor1468 = createNode("TouchSensor");
TouchSensor1468.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1467.children = new MFNode();

HAnimSegment1467.children[0] = TouchSensor1468;

Transform Transform1469 = createNode("Transform");
Transform1469.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
Shape Shape1470 = createNode("Shape");
Shape1470.USE = "HAnimJointShape";
Transform1469.child = new undefined();

Transform1469.child[0] = Shape1470;

HAnimSegment1467.children[1] = Transform1469;

Shape Shape1471 = createNode("Shape");
LineSet LineSet1472 = createNode("LineSet");
LineSet1472.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1473 = createNode("ColorRGBA");
ColorRGBA1473.USE = "HAnimSegmentLineColorRGBA";
LineSet1472.color = ColorRGBA1473;

Coordinate Coordinate1474 = createNode("Coordinate");
Coordinate1474.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1472.coord = Coordinate1474;

Shape1471.geometry = LineSet1472;

HAnimSegment1467.children[2] = Shape1471;

HAnimJoint1466.children = new MFNode();

HAnimJoint1466.children[0] = HAnimSegment1467;

HAnimJoint HAnimJoint1475 = createNode("HAnimJoint");
HAnimJoint1475.DEF = "hanim_r_middle2";
HAnimJoint1475.name = "r_middle2";
HAnimJoint1475.rotation = new SFRotation(new float[0,0,0.999999999999999,0.391134387386823]);
HAnimJoint1475.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment1476 = createNode("HAnimSegment");
HAnimSegment1476.DEF = "hanim_r_middle_middle";
HAnimSegment1476.name = "r_middle_middle";
TouchSensor TouchSensor1477 = createNode("TouchSensor");
TouchSensor1477.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1476.children = new MFNode();

HAnimSegment1476.children[0] = TouchSensor1477;

Transform Transform1478 = createNode("Transform");
Transform1478.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
Shape Shape1479 = createNode("Shape");
Shape1479.USE = "HAnimJointShape";
Transform1478.child = new undefined();

Transform1478.child[0] = Shape1479;

HAnimSegment1476.children[1] = Transform1478;

Shape Shape1480 = createNode("Shape");
LineSet LineSet1481 = createNode("LineSet");
LineSet1481.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1482 = createNode("ColorRGBA");
ColorRGBA1482.USE = "HAnimSegmentLineColorRGBA";
LineSet1481.color = ColorRGBA1482;

Coordinate Coordinate1483 = createNode("Coordinate");
Coordinate1483.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1481.coord = Coordinate1483;

Shape1480.geometry = LineSet1481;

HAnimSegment1476.children[2] = Shape1480;

HAnimJoint1475.children = new MFNode();

HAnimJoint1475.children[0] = HAnimSegment1476;

HAnimJoint HAnimJoint1484 = createNode("HAnimJoint");
HAnimJoint1484.DEF = "hanim_r_middle3";
HAnimJoint1484.name = "r_middle3";
HAnimJoint1484.rotation = new SFRotation(new float[0,0,0.999999999999997,0.211082015766472]);
HAnimJoint1484.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimSegment HAnimSegment1485 = createNode("HAnimSegment");
HAnimSegment1485.DEF = "hanim_r_middle_distal";
HAnimSegment1485.name = "r_middle_distal";
TouchSensor TouchSensor1486 = createNode("TouchSensor");
TouchSensor1486.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1485.children = new MFNode();

HAnimSegment1485.children[0] = TouchSensor1486;

Transform Transform1487 = createNode("Transform");
Transform1487.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
Shape Shape1488 = createNode("Shape");
Shape1488.USE = "HAnimJointShape";
Transform1487.child = new undefined();

Transform1487.child[0] = Shape1488;

HAnimSegment1485.children[1] = Transform1487;

Shape Shape1489 = createNode("Shape");
LineSet LineSet1490 = createNode("LineSet");
LineSet1490.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1491 = createNode("ColorRGBA");
ColorRGBA1491.USE = "HAnimSiteLineColorRGBA";
LineSet1490.color = ColorRGBA1491;

Coordinate Coordinate1492 = createNode("Coordinate");
Coordinate1492.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1490.coord = Coordinate1492;

Shape1489.geometry = LineSet1490;

HAnimSegment1485.children[2] = Shape1489;

HAnimSite HAnimSite1493 = createNode("HAnimSite");
HAnimSite1493.DEF = "hanim_r_middle_distal_tip";
HAnimSite1493.name = "r_middle_distal_tip";
HAnimSite1493.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
TouchSensor TouchSensor1494 = createNode("TouchSensor");
TouchSensor1494.description = "HAnimSite r_middle_distal_tip";
HAnimSite1493.children = new MFNode();

HAnimSite1493.children[0] = TouchSensor1494;

Shape Shape1495 = createNode("Shape");
Shape1495.USE = "HAnimSiteShape";
HAnimSite1493.children[1] = Shape1495;

HAnimSegment1485.children[3] = HAnimSite1493;

HAnimJoint1484.children = new MFNode();

HAnimJoint1484.children[0] = HAnimSegment1485;

HAnimJoint1475.children[1] = HAnimJoint1484;

HAnimJoint1466.children[1] = HAnimJoint1475;

HAnimJoint1457.children[1] = HAnimJoint1466;

HAnimJoint1325.children[3] = HAnimJoint1457;

HAnimJoint HAnimJoint1496 = createNode("HAnimJoint");
HAnimJoint1496.DEF = "hanim_r_ring0";
HAnimJoint1496.name = "r_ring0";
HAnimJoint1496.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment1497 = createNode("HAnimSegment");
HAnimSegment1497.DEF = "hanim_r_ring_metacarpal";
HAnimSegment1497.name = "r_ring_metacarpal";
TouchSensor TouchSensor1498 = createNode("TouchSensor");
TouchSensor1498.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1497.children = new MFNode();

HAnimSegment1497.children[0] = TouchSensor1498;

Transform Transform1499 = createNode("Transform");
Transform1499.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
Shape Shape1500 = createNode("Shape");
Shape1500.USE = "HAnimJointShape";
Transform1499.child = new undefined();

Transform1499.child[0] = Shape1500;

HAnimSegment1497.children[1] = Transform1499;

Shape Shape1501 = createNode("Shape");
LineSet LineSet1502 = createNode("LineSet");
LineSet1502.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1503 = createNode("ColorRGBA");
ColorRGBA1503.USE = "HAnimSegmentLineColorRGBA";
LineSet1502.color = ColorRGBA1503;

Coordinate Coordinate1504 = createNode("Coordinate");
Coordinate1504.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1502.coord = Coordinate1504;

Shape1501.geometry = LineSet1502;

HAnimSegment1497.children[2] = Shape1501;

HAnimJoint1496.children = new MFNode();

HAnimJoint1496.children[0] = HAnimSegment1497;

HAnimJoint HAnimJoint1505 = createNode("HAnimJoint");
HAnimJoint1505.DEF = "hanim_r_ring1";
HAnimJoint1505.name = "r_ring1";
HAnimJoint1505.rotation = new SFRotation(new float[0,0,1.00000000000003,0.111082015766469]);
HAnimJoint1505.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment1506 = createNode("HAnimSegment");
HAnimSegment1506.DEF = "hanim_r_ring_proximal";
HAnimSegment1506.name = "r_ring_proximal";
TouchSensor TouchSensor1507 = createNode("TouchSensor");
TouchSensor1507.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1506.children = new MFNode();

HAnimSegment1506.children[0] = TouchSensor1507;

Transform Transform1508 = createNode("Transform");
Transform1508.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
Shape Shape1509 = createNode("Shape");
Shape1509.USE = "HAnimJointShape";
Transform1508.child = new undefined();

Transform1508.child[0] = Shape1509;

HAnimSegment1506.children[1] = Transform1508;

Shape Shape1510 = createNode("Shape");
LineSet LineSet1511 = createNode("LineSet");
LineSet1511.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1512 = createNode("ColorRGBA");
ColorRGBA1512.USE = "HAnimSegmentLineColorRGBA";
LineSet1511.color = ColorRGBA1512;

Coordinate Coordinate1513 = createNode("Coordinate");
Coordinate1513.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1511.coord = Coordinate1513;

Shape1510.geometry = LineSet1511;

HAnimSegment1506.children[2] = Shape1510;

HAnimJoint1505.children = new MFNode();

HAnimJoint1505.children[0] = HAnimSegment1506;

HAnimJoint HAnimJoint1514 = createNode("HAnimJoint");
HAnimJoint1514.DEF = "hanim_r_ring2";
HAnimJoint1514.name = "r_ring2";
HAnimJoint1514.rotation = new SFRotation(new float[0,0,0.999999999999999,0.391134387386823]);
HAnimJoint1514.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment1515 = createNode("HAnimSegment");
HAnimSegment1515.DEF = "hanim_r_ring_middle";
HAnimSegment1515.name = "r_ring_middle";
TouchSensor TouchSensor1516 = createNode("TouchSensor");
TouchSensor1516.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1515.children = new MFNode();

HAnimSegment1515.children[0] = TouchSensor1516;

Transform Transform1517 = createNode("Transform");
Transform1517.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
Shape Shape1518 = createNode("Shape");
Shape1518.USE = "HAnimJointShape";
Transform1517.child = new undefined();

Transform1517.child[0] = Shape1518;

HAnimSegment1515.children[1] = Transform1517;

Shape Shape1519 = createNode("Shape");
LineSet LineSet1520 = createNode("LineSet");
LineSet1520.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1521 = createNode("ColorRGBA");
ColorRGBA1521.USE = "HAnimSegmentLineColorRGBA";
LineSet1520.color = ColorRGBA1521;

Coordinate Coordinate1522 = createNode("Coordinate");
Coordinate1522.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1520.coord = Coordinate1522;

Shape1519.geometry = LineSet1520;

HAnimSegment1515.children[2] = Shape1519;

HAnimJoint1514.children = new MFNode();

HAnimJoint1514.children[0] = HAnimSegment1515;

HAnimJoint HAnimJoint1523 = createNode("HAnimJoint");
HAnimJoint1523.DEF = "hanim_r_ring3";
HAnimJoint1523.name = "r_ring3";
HAnimJoint1523.rotation = new SFRotation(new float[0,0,0.999999999999997,0.211082015766472]);
HAnimJoint1523.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimSegment HAnimSegment1524 = createNode("HAnimSegment");
HAnimSegment1524.DEF = "hanim_r_ring_distal";
HAnimSegment1524.name = "r_ring_distal";
TouchSensor TouchSensor1525 = createNode("TouchSensor");
TouchSensor1525.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1524.children = new MFNode();

HAnimSegment1524.children[0] = TouchSensor1525;

Transform Transform1526 = createNode("Transform");
Transform1526.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
Shape Shape1527 = createNode("Shape");
Shape1527.USE = "HAnimJointShape";
Transform1526.child = new undefined();

Transform1526.child[0] = Shape1527;

HAnimSegment1524.children[1] = Transform1526;

Shape Shape1528 = createNode("Shape");
LineSet LineSet1529 = createNode("LineSet");
LineSet1529.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1530 = createNode("ColorRGBA");
ColorRGBA1530.USE = "HAnimSiteLineColorRGBA";
LineSet1529.color = ColorRGBA1530;

Coordinate Coordinate1531 = createNode("Coordinate");
Coordinate1531.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1529.coord = Coordinate1531;

Shape1528.geometry = LineSet1529;

HAnimSegment1524.children[2] = Shape1528;

HAnimSite HAnimSite1532 = createNode("HAnimSite");
HAnimSite1532.DEF = "hanim_r_ring_distal_tip";
HAnimSite1532.name = "r_ring_distal_tip";
HAnimSite1532.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
TouchSensor TouchSensor1533 = createNode("TouchSensor");
TouchSensor1533.description = "HAnimSite r_ring_distal_tip";
HAnimSite1532.children = new MFNode();

HAnimSite1532.children[0] = TouchSensor1533;

Shape Shape1534 = createNode("Shape");
Shape1534.USE = "HAnimSiteShape";
HAnimSite1532.children[1] = Shape1534;

HAnimSegment1524.children[3] = HAnimSite1532;

HAnimJoint1523.children = new MFNode();

HAnimJoint1523.children[0] = HAnimSegment1524;

HAnimJoint1514.children[1] = HAnimJoint1523;

HAnimJoint1505.children[1] = HAnimJoint1514;

HAnimJoint1496.children[1] = HAnimJoint1505;

HAnimJoint1325.children[4] = HAnimJoint1496;

HAnimJoint HAnimJoint1535 = createNode("HAnimJoint");
HAnimJoint1535.DEF = "hanim_r_pinky0";
HAnimJoint1535.name = "r_pinky0";
HAnimJoint1535.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment1536 = createNode("HAnimSegment");
HAnimSegment1536.DEF = "hanim_r_pinky_metacarpal";
HAnimSegment1536.name = "r_pinky_metacarpal";
TouchSensor TouchSensor1537 = createNode("TouchSensor");
TouchSensor1537.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1536.children = new MFNode();

HAnimSegment1536.children[0] = TouchSensor1537;

Transform Transform1538 = createNode("Transform");
Transform1538.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
Shape Shape1539 = createNode("Shape");
Shape1539.USE = "HAnimJointShape";
Transform1538.child = new undefined();

Transform1538.child[0] = Shape1539;

HAnimSegment1536.children[1] = Transform1538;

Shape Shape1540 = createNode("Shape");
LineSet LineSet1541 = createNode("LineSet");
LineSet1541.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1542 = createNode("ColorRGBA");
ColorRGBA1542.USE = "HAnimSegmentLineColorRGBA";
LineSet1541.color = ColorRGBA1542;

Coordinate Coordinate1543 = createNode("Coordinate");
Coordinate1543.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1541.coord = Coordinate1543;

Shape1540.geometry = LineSet1541;

HAnimSegment1536.children[2] = Shape1540;

HAnimJoint1535.children = new MFNode();

HAnimJoint1535.children[0] = HAnimSegment1536;

HAnimJoint HAnimJoint1544 = createNode("HAnimJoint");
HAnimJoint1544.DEF = "hanim_r_pinky1";
HAnimJoint1544.name = "r_pinky1";
HAnimJoint1544.rotation = new SFRotation(new float[0,0,1.00000000000003,0.111082015766469]);
HAnimJoint1544.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment1545 = createNode("HAnimSegment");
HAnimSegment1545.DEF = "hanim_r_pinky_proximal";
HAnimSegment1545.name = "r_pinky_proximal";
TouchSensor TouchSensor1546 = createNode("TouchSensor");
TouchSensor1546.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1545.children = new MFNode();

HAnimSegment1545.children[0] = TouchSensor1546;

Transform Transform1547 = createNode("Transform");
Transform1547.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
Shape Shape1548 = createNode("Shape");
Shape1548.USE = "HAnimJointShape";
Transform1547.child = new undefined();

Transform1547.child[0] = Shape1548;

HAnimSegment1545.children[1] = Transform1547;

Shape Shape1549 = createNode("Shape");
LineSet LineSet1550 = createNode("LineSet");
LineSet1550.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1551 = createNode("ColorRGBA");
ColorRGBA1551.USE = "HAnimSegmentLineColorRGBA";
LineSet1550.color = ColorRGBA1551;

Coordinate Coordinate1552 = createNode("Coordinate");
Coordinate1552.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1550.coord = Coordinate1552;

Shape1549.geometry = LineSet1550;

HAnimSegment1545.children[2] = Shape1549;

HAnimJoint1544.children = new MFNode();

HAnimJoint1544.children[0] = HAnimSegment1545;

HAnimJoint HAnimJoint1553 = createNode("HAnimJoint");
HAnimJoint1553.DEF = "hanim_r_pinky2";
HAnimJoint1553.name = "r_pinky2";
HAnimJoint1553.rotation = new SFRotation(new float[0,0,0.999999999999999,0.391134387386823]);
HAnimJoint1553.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment1554 = createNode("HAnimSegment");
HAnimSegment1554.DEF = "hanim_r_pinky_middle";
HAnimSegment1554.name = "r_pinky_middle";
TouchSensor TouchSensor1555 = createNode("TouchSensor");
TouchSensor1555.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1554.children = new MFNode();

HAnimSegment1554.children[0] = TouchSensor1555;

Transform Transform1556 = createNode("Transform");
Transform1556.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
Shape Shape1557 = createNode("Shape");
Shape1557.USE = "HAnimJointShape";
Transform1556.child = new undefined();

Transform1556.child[0] = Shape1557;

HAnimSegment1554.children[1] = Transform1556;

Shape Shape1558 = createNode("Shape");
LineSet LineSet1559 = createNode("LineSet");
LineSet1559.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1560 = createNode("ColorRGBA");
ColorRGBA1560.USE = "HAnimSegmentLineColorRGBA";
LineSet1559.color = ColorRGBA1560;

Coordinate Coordinate1561 = createNode("Coordinate");
Coordinate1561.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1559.coord = Coordinate1561;

Shape1558.geometry = LineSet1559;

HAnimSegment1554.children[2] = Shape1558;

HAnimJoint1553.children = new MFNode();

HAnimJoint1553.children[0] = HAnimSegment1554;

HAnimJoint HAnimJoint1562 = createNode("HAnimJoint");
HAnimJoint1562.DEF = "hanim_r_pinky3";
HAnimJoint1562.name = "r_pinky3";
HAnimJoint1562.rotation = new SFRotation(new float[0,0,0.999999999999997,0.211082015766472]);
HAnimJoint1562.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimSegment HAnimSegment1563 = createNode("HAnimSegment");
HAnimSegment1563.DEF = "hanim_r_pinky_distal";
HAnimSegment1563.name = "r_pinky_distal";
TouchSensor TouchSensor1564 = createNode("TouchSensor");
TouchSensor1564.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1563.children = new MFNode();

HAnimSegment1563.children[0] = TouchSensor1564;

Transform Transform1565 = createNode("Transform");
Transform1565.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
Shape Shape1566 = createNode("Shape");
Shape1566.USE = "HAnimJointShape";
Transform1565.child = new undefined();

Transform1565.child[0] = Shape1566;

HAnimSegment1563.children[1] = Transform1565;

Shape Shape1567 = createNode("Shape");
LineSet LineSet1568 = createNode("LineSet");
LineSet1568.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1569 = createNode("ColorRGBA");
ColorRGBA1569.USE = "HAnimSiteLineColorRGBA";
LineSet1568.color = ColorRGBA1569;

Coordinate Coordinate1570 = createNode("Coordinate");
Coordinate1570.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1568.coord = Coordinate1570;

Shape1567.geometry = LineSet1568;

HAnimSegment1563.children[2] = Shape1567;

HAnimSite HAnimSite1571 = createNode("HAnimSite");
HAnimSite1571.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1571.name = "r_pinky_distal_tip";
HAnimSite1571.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
TouchSensor TouchSensor1572 = createNode("TouchSensor");
TouchSensor1572.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1571.children = new MFNode();

HAnimSite1571.children[0] = TouchSensor1572;

Shape Shape1573 = createNode("Shape");
Shape1573.USE = "HAnimSiteShape";
HAnimSite1571.children[1] = Shape1573;

HAnimSegment1563.children[3] = HAnimSite1571;

HAnimJoint1562.children = new MFNode();

HAnimJoint1562.children[0] = HAnimSegment1563;

HAnimJoint1553.children[1] = HAnimJoint1562;

HAnimJoint1544.children[1] = HAnimJoint1553;

HAnimJoint1535.children[1] = HAnimJoint1544;

HAnimJoint1325.children[5] = HAnimJoint1535;

HAnimJoint1288.children[1] = HAnimJoint1325;

HAnimJoint1272.children[1] = HAnimJoint1288;

HAnimJoint1263.children[1] = HAnimJoint1272;

HAnimJoint1226.children[1] = HAnimJoint1263;

HAnimJoint594.children[3] = HAnimJoint1226;

HAnimJoint585.children[1] = HAnimJoint594;

HAnimJoint576.children[1] = HAnimJoint585;

HAnimJoint567.children[1] = HAnimJoint576;

HAnimJoint558.children[1] = HAnimJoint567;

HAnimJoint549.children[1] = HAnimJoint558;

HAnimJoint540.children[1] = HAnimJoint549;

HAnimJoint531.children[1] = HAnimJoint540;

HAnimJoint508.children[1] = HAnimJoint531;

HAnimJoint492.children[1] = HAnimJoint508;

HAnimJoint483.children[1] = HAnimJoint492;

HAnimJoint474.children[1] = HAnimJoint483;

HAnimJoint465.children[1] = HAnimJoint474;

HAnimJoint435.children[1] = HAnimJoint465;

HAnimJoint426.children[1] = HAnimJoint435;

HAnimJoint417.children[1] = HAnimJoint426;

HAnimJoint394.children[1] = HAnimJoint417;

HAnimJoint44.children[2] = HAnimJoint394;

HAnimHumanoid43.joints = new MFNode();

HAnimHumanoid43.joints[0] = HAnimJoint44;

HAnimJoint HAnimJoint1574 = createNode("HAnimJoint");
HAnimJoint1574.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[1] = HAnimJoint1574;

HAnimJoint HAnimJoint1575 = createNode("HAnimJoint");
HAnimJoint1575.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[2] = HAnimJoint1575;

HAnimJoint HAnimJoint1576 = createNode("HAnimJoint");
HAnimJoint1576.USE = "hanim_vl5";
HAnimHumanoid43.joints[3] = HAnimJoint1576;

HAnimJoint HAnimJoint1577 = createNode("HAnimJoint");
HAnimJoint1577.USE = "hanim_vl4";
HAnimHumanoid43.joints[4] = HAnimJoint1577;

HAnimJoint HAnimJoint1578 = createNode("HAnimJoint");
HAnimJoint1578.USE = "hanim_vl3";
HAnimHumanoid43.joints[5] = HAnimJoint1578;

HAnimJoint HAnimJoint1579 = createNode("HAnimJoint");
HAnimJoint1579.USE = "hanim_vl2";
HAnimHumanoid43.joints[6] = HAnimJoint1579;

HAnimJoint HAnimJoint1580 = createNode("HAnimJoint");
HAnimJoint1580.USE = "hanim_vl1";
HAnimHumanoid43.joints[7] = HAnimJoint1580;

HAnimJoint HAnimJoint1581 = createNode("HAnimJoint");
HAnimJoint1581.USE = "hanim_vt12";
HAnimHumanoid43.joints[8] = HAnimJoint1581;

HAnimJoint HAnimJoint1582 = createNode("HAnimJoint");
HAnimJoint1582.USE = "hanim_vt11";
HAnimHumanoid43.joints[9] = HAnimJoint1582;

HAnimJoint HAnimJoint1583 = createNode("HAnimJoint");
HAnimJoint1583.USE = "hanim_vt10";
HAnimHumanoid43.joints[10] = HAnimJoint1583;

HAnimJoint HAnimJoint1584 = createNode("HAnimJoint");
HAnimJoint1584.USE = "hanim_vt9";
HAnimHumanoid43.joints[11] = HAnimJoint1584;

HAnimJoint HAnimJoint1585 = createNode("HAnimJoint");
HAnimJoint1585.USE = "hanim_vt8";
HAnimHumanoid43.joints[12] = HAnimJoint1585;

HAnimJoint HAnimJoint1586 = createNode("HAnimJoint");
HAnimJoint1586.USE = "hanim_vt7";
HAnimHumanoid43.joints[13] = HAnimJoint1586;

HAnimJoint HAnimJoint1587 = createNode("HAnimJoint");
HAnimJoint1587.USE = "hanim_vt6";
HAnimHumanoid43.joints[14] = HAnimJoint1587;

HAnimJoint HAnimJoint1588 = createNode("HAnimJoint");
HAnimJoint1588.USE = "hanim_vt5";
HAnimHumanoid43.joints[15] = HAnimJoint1588;

HAnimJoint HAnimJoint1589 = createNode("HAnimJoint");
HAnimJoint1589.USE = "hanim_vt4";
HAnimHumanoid43.joints[16] = HAnimJoint1589;

HAnimJoint HAnimJoint1590 = createNode("HAnimJoint");
HAnimJoint1590.USE = "hanim_vt3";
HAnimHumanoid43.joints[17] = HAnimJoint1590;

HAnimJoint HAnimJoint1591 = createNode("HAnimJoint");
HAnimJoint1591.USE = "hanim_vt2";
HAnimHumanoid43.joints[18] = HAnimJoint1591;

HAnimJoint HAnimJoint1592 = createNode("HAnimJoint");
HAnimJoint1592.USE = "hanim_vt1";
HAnimHumanoid43.joints[19] = HAnimJoint1592;

HAnimJoint HAnimJoint1593 = createNode("HAnimJoint");
HAnimJoint1593.USE = "hanim_vc7";
HAnimHumanoid43.joints[20] = HAnimJoint1593;

HAnimJoint HAnimJoint1594 = createNode("HAnimJoint");
HAnimJoint1594.USE = "hanim_vc6";
HAnimHumanoid43.joints[21] = HAnimJoint1594;

HAnimJoint HAnimJoint1595 = createNode("HAnimJoint");
HAnimJoint1595.USE = "hanim_vc5";
HAnimHumanoid43.joints[22] = HAnimJoint1595;

HAnimJoint HAnimJoint1596 = createNode("HAnimJoint");
HAnimJoint1596.USE = "hanim_vc4";
HAnimHumanoid43.joints[23] = HAnimJoint1596;

HAnimJoint HAnimJoint1597 = createNode("HAnimJoint");
HAnimJoint1597.USE = "hanim_vc3";
HAnimHumanoid43.joints[24] = HAnimJoint1597;

HAnimJoint HAnimJoint1598 = createNode("HAnimJoint");
HAnimJoint1598.USE = "hanim_vc2";
HAnimHumanoid43.joints[25] = HAnimJoint1598;

HAnimJoint HAnimJoint1599 = createNode("HAnimJoint");
HAnimJoint1599.USE = "hanim_vc1";
HAnimHumanoid43.joints[26] = HAnimJoint1599;

HAnimJoint HAnimJoint1600 = createNode("HAnimJoint");
HAnimJoint1600.USE = "hanim_skullbase";
HAnimHumanoid43.joints[27] = HAnimJoint1600;

HAnimJoint HAnimJoint1601 = createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[28] = HAnimJoint1601;

HAnimJoint HAnimJoint1602 = createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[29] = HAnimJoint1602;

HAnimJoint HAnimJoint1603 = createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[30] = HAnimJoint1603;

HAnimJoint HAnimJoint1604 = createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_l_ankle";
HAnimHumanoid43.joints[31] = HAnimJoint1604;

HAnimJoint HAnimJoint1605 = createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_r_ankle";
HAnimHumanoid43.joints[32] = HAnimJoint1605;

HAnimJoint HAnimJoint1606 = createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[33] = HAnimJoint1606;

HAnimJoint HAnimJoint1607 = createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[34] = HAnimJoint1607;

HAnimJoint HAnimJoint1608 = createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[35] = HAnimJoint1608;

HAnimJoint HAnimJoint1609 = createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[36] = HAnimJoint1609;

HAnimJoint HAnimJoint1610 = createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[37] = HAnimJoint1610;

HAnimJoint HAnimJoint1611 = createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[38] = HAnimJoint1611;

HAnimJoint HAnimJoint1612 = createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[39] = HAnimJoint1612;

HAnimJoint HAnimJoint1613 = createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[40] = HAnimJoint1613;

HAnimJoint HAnimJoint1614 = createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_hip";
HAnimHumanoid43.joints[41] = HAnimJoint1614;

HAnimJoint HAnimJoint1615 = createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_r_hip";
HAnimHumanoid43.joints[42] = HAnimJoint1615;

HAnimJoint HAnimJoint1616 = createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_index0";
HAnimHumanoid43.joints[43] = HAnimJoint1616;

HAnimJoint HAnimJoint1617 = createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_r_index0";
HAnimHumanoid43.joints[44] = HAnimJoint1617;

HAnimJoint HAnimJoint1618 = createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_index1";
HAnimHumanoid43.joints[45] = HAnimJoint1618;

HAnimJoint HAnimJoint1619 = createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_r_index1";
HAnimHumanoid43.joints[46] = HAnimJoint1619;

HAnimJoint HAnimJoint1620 = createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_index2";
HAnimHumanoid43.joints[47] = HAnimJoint1620;

HAnimJoint HAnimJoint1621 = createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_r_index2";
HAnimHumanoid43.joints[48] = HAnimJoint1621;

HAnimJoint HAnimJoint1622 = createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_index3";
HAnimHumanoid43.joints[49] = HAnimJoint1622;

HAnimJoint HAnimJoint1623 = createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_r_index3";
HAnimHumanoid43.joints[50] = HAnimJoint1623;

HAnimJoint HAnimJoint1624 = createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_knee";
HAnimHumanoid43.joints[51] = HAnimJoint1624;

HAnimJoint HAnimJoint1625 = createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_r_knee";
HAnimHumanoid43.joints[52] = HAnimJoint1625;

HAnimJoint HAnimJoint1626 = createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_metatarsal";
HAnimHumanoid43.joints[53] = HAnimJoint1626;

HAnimJoint HAnimJoint1627 = createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_r_metatarsal";
HAnimHumanoid43.joints[54] = HAnimJoint1627;

HAnimJoint HAnimJoint1628 = createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_middle0";
HAnimHumanoid43.joints[55] = HAnimJoint1628;

HAnimJoint HAnimJoint1629 = createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_r_middle0";
HAnimHumanoid43.joints[56] = HAnimJoint1629;

HAnimJoint HAnimJoint1630 = createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_middle1";
HAnimHumanoid43.joints[57] = HAnimJoint1630;

HAnimJoint HAnimJoint1631 = createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_r_middle1";
HAnimHumanoid43.joints[58] = HAnimJoint1631;

HAnimJoint HAnimJoint1632 = createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_l_middle2";
HAnimHumanoid43.joints[59] = HAnimJoint1632;

HAnimJoint HAnimJoint1633 = createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_r_middle2";
HAnimHumanoid43.joints[60] = HAnimJoint1633;

HAnimJoint HAnimJoint1634 = createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_l_middle3";
HAnimHumanoid43.joints[61] = HAnimJoint1634;

HAnimJoint HAnimJoint1635 = createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_r_middle3";
HAnimHumanoid43.joints[62] = HAnimJoint1635;

HAnimJoint HAnimJoint1636 = createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_l_midtarsal";
HAnimHumanoid43.joints[63] = HAnimJoint1636;

HAnimJoint HAnimJoint1637 = createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_r_midtarsal";
HAnimHumanoid43.joints[64] = HAnimJoint1637;

HAnimJoint HAnimJoint1638 = createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_l_pinky0";
HAnimHumanoid43.joints[65] = HAnimJoint1638;

HAnimJoint HAnimJoint1639 = createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_pinky0";
HAnimHumanoid43.joints[66] = HAnimJoint1639;

HAnimJoint HAnimJoint1640 = createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_l_pinky1";
HAnimHumanoid43.joints[67] = HAnimJoint1640;

HAnimJoint HAnimJoint1641 = createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_pinky1";
HAnimHumanoid43.joints[68] = HAnimJoint1641;

HAnimJoint HAnimJoint1642 = createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_l_pinky2";
HAnimHumanoid43.joints[69] = HAnimJoint1642;

HAnimJoint HAnimJoint1643 = createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_pinky2";
HAnimHumanoid43.joints[70] = HAnimJoint1643;

HAnimJoint HAnimJoint1644 = createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_l_pinky3";
HAnimHumanoid43.joints[71] = HAnimJoint1644;

HAnimJoint HAnimJoint1645 = createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_pinky3";
HAnimHumanoid43.joints[72] = HAnimJoint1645;

HAnimJoint HAnimJoint1646 = createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_l_ring0";
HAnimHumanoid43.joints[73] = HAnimJoint1646;

HAnimJoint HAnimJoint1647 = createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_ring0";
HAnimHumanoid43.joints[74] = HAnimJoint1647;

HAnimJoint HAnimJoint1648 = createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_l_ring1";
HAnimHumanoid43.joints[75] = HAnimJoint1648;

HAnimJoint HAnimJoint1649 = createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_ring1";
HAnimHumanoid43.joints[76] = HAnimJoint1649;

HAnimJoint HAnimJoint1650 = createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_l_ring2";
HAnimHumanoid43.joints[77] = HAnimJoint1650;

HAnimJoint HAnimJoint1651 = createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_ring2";
HAnimHumanoid43.joints[78] = HAnimJoint1651;

HAnimJoint HAnimJoint1652 = createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_l_ring3";
HAnimHumanoid43.joints[79] = HAnimJoint1652;

HAnimJoint HAnimJoint1653 = createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_ring3";
HAnimHumanoid43.joints[80] = HAnimJoint1653;

HAnimJoint HAnimJoint1654 = createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[81] = HAnimJoint1654;

HAnimJoint HAnimJoint1655 = createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[82] = HAnimJoint1655;

HAnimJoint HAnimJoint1656 = createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[83] = HAnimJoint1656;

HAnimJoint HAnimJoint1657 = createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[84] = HAnimJoint1657;

HAnimJoint HAnimJoint1658 = createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_l_subtalar";
HAnimHumanoid43.joints[85] = HAnimJoint1658;

HAnimJoint HAnimJoint1659 = createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_r_subtalar";
HAnimHumanoid43.joints[86] = HAnimJoint1659;

HAnimJoint HAnimJoint1660 = createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_l_thumb1";
HAnimHumanoid43.joints[87] = HAnimJoint1660;

HAnimJoint HAnimJoint1661 = createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_r_thumb1";
HAnimHumanoid43.joints[88] = HAnimJoint1661;

HAnimJoint HAnimJoint1662 = createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_l_thumb2";
HAnimHumanoid43.joints[89] = HAnimJoint1662;

HAnimJoint HAnimJoint1663 = createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_r_thumb2";
HAnimHumanoid43.joints[90] = HAnimJoint1663;

HAnimJoint HAnimJoint1664 = createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_l_thumb3";
HAnimHumanoid43.joints[91] = HAnimJoint1664;

HAnimJoint HAnimJoint1665 = createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_r_thumb3";
HAnimHumanoid43.joints[92] = HAnimJoint1665;

HAnimJoint HAnimJoint1666 = createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_l_wrist";
HAnimHumanoid43.joints[93] = HAnimJoint1666;

HAnimJoint HAnimJoint1667 = createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_r_wrist";
HAnimHumanoid43.joints[94] = HAnimJoint1667;

HAnimSegment HAnimSegment1668 = createNode("HAnimSegment");
HAnimSegment1668.USE = "hanim_pelvis";
HAnimHumanoid43.segments[95] = HAnimSegment1668;

HAnimSegment HAnimSegment1669 = createNode("HAnimSegment");
HAnimSegment1669.USE = "hanim_skull";
HAnimHumanoid43.segments[96] = HAnimSegment1669;

HAnimSegment HAnimSegment1670 = createNode("HAnimSegment");
HAnimSegment1670.USE = "hanim_jaw";
HAnimHumanoid43.segments[97] = HAnimSegment1670;

HAnimSegment HAnimSegment1671 = createNode("HAnimSegment");
HAnimSegment1671.USE = "hanim_c1";
HAnimHumanoid43.segments[98] = HAnimSegment1671;

HAnimSegment HAnimSegment1672 = createNode("HAnimSegment");
HAnimSegment1672.USE = "hanim_c2";
HAnimHumanoid43.segments[99] = HAnimSegment1672;

HAnimSegment HAnimSegment1673 = createNode("HAnimSegment");
HAnimSegment1673.USE = "hanim_c3";
HAnimHumanoid43.segments[100] = HAnimSegment1673;

HAnimSegment HAnimSegment1674 = createNode("HAnimSegment");
HAnimSegment1674.USE = "hanim_c4";
HAnimHumanoid43.segments[101] = HAnimSegment1674;

HAnimSegment HAnimSegment1675 = createNode("HAnimSegment");
HAnimSegment1675.USE = "hanim_c5";
HAnimHumanoid43.segments[102] = HAnimSegment1675;

HAnimSegment HAnimSegment1676 = createNode("HAnimSegment");
HAnimSegment1676.USE = "hanim_c6";
HAnimHumanoid43.segments[103] = HAnimSegment1676;

HAnimSegment HAnimSegment1677 = createNode("HAnimSegment");
HAnimSegment1677.USE = "hanim_c7";
HAnimHumanoid43.segments[104] = HAnimSegment1677;

HAnimSegment HAnimSegment1678 = createNode("HAnimSegment");
HAnimSegment1678.USE = "hanim_t1";
HAnimHumanoid43.segments[105] = HAnimSegment1678;

HAnimSegment HAnimSegment1679 = createNode("HAnimSegment");
HAnimSegment1679.USE = "hanim_t2";
HAnimHumanoid43.segments[106] = HAnimSegment1679;

HAnimSegment HAnimSegment1680 = createNode("HAnimSegment");
HAnimSegment1680.USE = "hanim_t3";
HAnimHumanoid43.segments[107] = HAnimSegment1680;

HAnimSegment HAnimSegment1681 = createNode("HAnimSegment");
HAnimSegment1681.USE = "hanim_t4";
HAnimHumanoid43.segments[108] = HAnimSegment1681;

HAnimSegment HAnimSegment1682 = createNode("HAnimSegment");
HAnimSegment1682.USE = "hanim_t5";
HAnimHumanoid43.segments[109] = HAnimSegment1682;

HAnimSegment HAnimSegment1683 = createNode("HAnimSegment");
HAnimSegment1683.USE = "hanim_t6";
HAnimHumanoid43.segments[110] = HAnimSegment1683;

HAnimSegment HAnimSegment1684 = createNode("HAnimSegment");
HAnimSegment1684.USE = "hanim_t7";
HAnimHumanoid43.segments[111] = HAnimSegment1684;

HAnimSegment HAnimSegment1685 = createNode("HAnimSegment");
HAnimSegment1685.USE = "hanim_t8";
HAnimHumanoid43.segments[112] = HAnimSegment1685;

HAnimSegment HAnimSegment1686 = createNode("HAnimSegment");
HAnimSegment1686.USE = "hanim_t9";
HAnimHumanoid43.segments[113] = HAnimSegment1686;

HAnimSegment HAnimSegment1687 = createNode("HAnimSegment");
HAnimSegment1687.USE = "hanim_t10";
HAnimHumanoid43.segments[114] = HAnimSegment1687;

HAnimSegment HAnimSegment1688 = createNode("HAnimSegment");
HAnimSegment1688.USE = "hanim_t11";
HAnimHumanoid43.segments[115] = HAnimSegment1688;

HAnimSegment HAnimSegment1689 = createNode("HAnimSegment");
HAnimSegment1689.USE = "hanim_t12";
HAnimHumanoid43.segments[116] = HAnimSegment1689;

HAnimSegment HAnimSegment1690 = createNode("HAnimSegment");
HAnimSegment1690.USE = "hanim_l1";
HAnimHumanoid43.segments[117] = HAnimSegment1690;

HAnimSegment HAnimSegment1691 = createNode("HAnimSegment");
HAnimSegment1691.USE = "hanim_l2";
HAnimHumanoid43.segments[118] = HAnimSegment1691;

HAnimSegment HAnimSegment1692 = createNode("HAnimSegment");
HAnimSegment1692.USE = "hanim_l3";
HAnimHumanoid43.segments[119] = HAnimSegment1692;

HAnimSegment HAnimSegment1693 = createNode("HAnimSegment");
HAnimSegment1693.USE = "hanim_l4";
HAnimHumanoid43.segments[120] = HAnimSegment1693;

HAnimSegment HAnimSegment1694 = createNode("HAnimSegment");
HAnimSegment1694.USE = "hanim_l5";
HAnimHumanoid43.segments[121] = HAnimSegment1694;

HAnimSegment HAnimSegment1695 = createNode("HAnimSegment");
HAnimSegment1695.USE = "hanim_sacrum";
HAnimHumanoid43.segments[122] = HAnimSegment1695;

HAnimSegment HAnimSegment1696 = createNode("HAnimSegment");
HAnimSegment1696.USE = "hanim_l_calf";
HAnimHumanoid43.segments[123] = HAnimSegment1696;

HAnimSegment HAnimSegment1697 = createNode("HAnimSegment");
HAnimSegment1697.USE = "hanim_r_calf";
HAnimHumanoid43.segments[124] = HAnimSegment1697;

HAnimSegment HAnimSegment1698 = createNode("HAnimSegment");
HAnimSegment1698.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[125] = HAnimSegment1698;

HAnimSegment HAnimSegment1699 = createNode("HAnimSegment");
HAnimSegment1699.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[126] = HAnimSegment1699;

HAnimSegment HAnimSegment1700 = createNode("HAnimSegment");
HAnimSegment1700.USE = "hanim_l_eyeball";
HAnimHumanoid43.segments[127] = HAnimSegment1700;

HAnimSegment HAnimSegment1701 = createNode("HAnimSegment");
HAnimSegment1701.USE = "hanim_r_eyeball";
HAnimHumanoid43.segments[128] = HAnimSegment1701;

HAnimSegment HAnimSegment1702 = createNode("HAnimSegment");
HAnimSegment1702.USE = "hanim_l_eyebrow";
HAnimHumanoid43.segments[129] = HAnimSegment1702;

HAnimSegment HAnimSegment1703 = createNode("HAnimSegment");
HAnimSegment1703.USE = "hanim_r_eyebrow";
HAnimHumanoid43.segments[130] = HAnimSegment1703;

HAnimSegment HAnimSegment1704 = createNode("HAnimSegment");
HAnimSegment1704.USE = "hanim_l_eyelid";
HAnimHumanoid43.segments[131] = HAnimSegment1704;

HAnimSegment HAnimSegment1705 = createNode("HAnimSegment");
HAnimSegment1705.USE = "hanim_r_eyelid";
HAnimHumanoid43.segments[132] = HAnimSegment1705;

HAnimSegment HAnimSegment1706 = createNode("HAnimSegment");
HAnimSegment1706.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[133] = HAnimSegment1706;

HAnimSegment HAnimSegment1707 = createNode("HAnimSegment");
HAnimSegment1707.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[134] = HAnimSegment1707;

HAnimSegment HAnimSegment1708 = createNode("HAnimSegment");
HAnimSegment1708.USE = "hanim_l_forefoot";
HAnimHumanoid43.segments[135] = HAnimSegment1708;

HAnimSegment HAnimSegment1709 = createNode("HAnimSegment");
HAnimSegment1709.USE = "hanim_r_forefoot";
HAnimHumanoid43.segments[136] = HAnimSegment1709;

HAnimSegment HAnimSegment1710 = createNode("HAnimSegment");
HAnimSegment1710.USE = "hanim_l_hand";
HAnimHumanoid43.segments[137] = HAnimSegment1710;

HAnimSegment HAnimSegment1711 = createNode("HAnimSegment");
HAnimSegment1711.USE = "hanim_r_hand";
HAnimHumanoid43.segments[138] = HAnimSegment1711;

HAnimSegment HAnimSegment1712 = createNode("HAnimSegment");
HAnimSegment1712.USE = "hanim_l_hindfoot";
HAnimHumanoid43.segments[139] = HAnimSegment1712;

HAnimSegment HAnimSegment1713 = createNode("HAnimSegment");
HAnimSegment1713.USE = "hanim_r_hindfoot";
HAnimHumanoid43.segments[140] = HAnimSegment1713;

HAnimSegment HAnimSegment1714 = createNode("HAnimSegment");
HAnimSegment1714.USE = "hanim_l_index_distal";
HAnimHumanoid43.segments[141] = HAnimSegment1714;

HAnimSegment HAnimSegment1715 = createNode("HAnimSegment");
HAnimSegment1715.USE = "hanim_r_index_distal";
HAnimHumanoid43.segments[142] = HAnimSegment1715;

HAnimSegment HAnimSegment1716 = createNode("HAnimSegment");
HAnimSegment1716.USE = "hanim_l_index_metacarpal";
HAnimHumanoid43.segments[143] = HAnimSegment1716;

HAnimSegment HAnimSegment1717 = createNode("HAnimSegment");
HAnimSegment1717.USE = "hanim_r_index_metacarpal";
HAnimHumanoid43.segments[144] = HAnimSegment1717;

HAnimSegment HAnimSegment1718 = createNode("HAnimSegment");
HAnimSegment1718.USE = "hanim_l_index_middle";
HAnimHumanoid43.segments[145] = HAnimSegment1718;

HAnimSegment HAnimSegment1719 = createNode("HAnimSegment");
HAnimSegment1719.USE = "hanim_r_index_middle";
HAnimHumanoid43.segments[146] = HAnimSegment1719;

HAnimSegment HAnimSegment1720 = createNode("HAnimSegment");
HAnimSegment1720.USE = "hanim_l_index_proximal";
HAnimHumanoid43.segments[147] = HAnimSegment1720;

HAnimSegment HAnimSegment1721 = createNode("HAnimSegment");
HAnimSegment1721.USE = "hanim_r_index_proximal";
HAnimHumanoid43.segments[148] = HAnimSegment1721;

HAnimSegment HAnimSegment1722 = createNode("HAnimSegment");
HAnimSegment1722.USE = "hanim_l_middistal";
HAnimHumanoid43.segments[149] = HAnimSegment1722;

HAnimSegment HAnimSegment1723 = createNode("HAnimSegment");
HAnimSegment1723.USE = "hanim_r_middistal";
HAnimHumanoid43.segments[150] = HAnimSegment1723;

HAnimSegment HAnimSegment1724 = createNode("HAnimSegment");
HAnimSegment1724.USE = "hanim_l_middle_distal";
HAnimHumanoid43.segments[151] = HAnimSegment1724;

HAnimSegment HAnimSegment1725 = createNode("HAnimSegment");
HAnimSegment1725.USE = "hanim_r_middle_distal";
HAnimHumanoid43.segments[152] = HAnimSegment1725;

HAnimSegment HAnimSegment1726 = createNode("HAnimSegment");
HAnimSegment1726.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid43.segments[153] = HAnimSegment1726;

HAnimSegment HAnimSegment1727 = createNode("HAnimSegment");
HAnimSegment1727.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid43.segments[154] = HAnimSegment1727;

HAnimSegment HAnimSegment1728 = createNode("HAnimSegment");
HAnimSegment1728.USE = "hanim_l_middle_middle";
HAnimHumanoid43.segments[155] = HAnimSegment1728;

HAnimSegment HAnimSegment1729 = createNode("HAnimSegment");
HAnimSegment1729.USE = "hanim_r_middle_middle";
HAnimHumanoid43.segments[156] = HAnimSegment1729;

HAnimSegment HAnimSegment1730 = createNode("HAnimSegment");
HAnimSegment1730.USE = "hanim_l_middle_proximal";
HAnimHumanoid43.segments[157] = HAnimSegment1730;

HAnimSegment HAnimSegment1731 = createNode("HAnimSegment");
HAnimSegment1731.USE = "hanim_r_middle_proximal";
HAnimHumanoid43.segments[158] = HAnimSegment1731;

HAnimSegment HAnimSegment1732 = createNode("HAnimSegment");
HAnimSegment1732.USE = "hanim_l_midproximal";
HAnimHumanoid43.segments[159] = HAnimSegment1732;

HAnimSegment HAnimSegment1733 = createNode("HAnimSegment");
HAnimSegment1733.USE = "hanim_r_midproximal";
HAnimHumanoid43.segments[160] = HAnimSegment1733;

HAnimSegment HAnimSegment1734 = createNode("HAnimSegment");
HAnimSegment1734.USE = "hanim_l_pinky_distal";
HAnimHumanoid43.segments[161] = HAnimSegment1734;

HAnimSegment HAnimSegment1735 = createNode("HAnimSegment");
HAnimSegment1735.USE = "hanim_r_pinky_distal";
HAnimHumanoid43.segments[162] = HAnimSegment1735;

HAnimSegment HAnimSegment1736 = createNode("HAnimSegment");
HAnimSegment1736.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid43.segments[163] = HAnimSegment1736;

HAnimSegment HAnimSegment1737 = createNode("HAnimSegment");
HAnimSegment1737.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid43.segments[164] = HAnimSegment1737;

HAnimSegment HAnimSegment1738 = createNode("HAnimSegment");
HAnimSegment1738.USE = "hanim_l_pinky_middle";
HAnimHumanoid43.segments[165] = HAnimSegment1738;

HAnimSegment HAnimSegment1739 = createNode("HAnimSegment");
HAnimSegment1739.USE = "hanim_r_pinky_middle";
HAnimHumanoid43.segments[166] = HAnimSegment1739;

HAnimSegment HAnimSegment1740 = createNode("HAnimSegment");
HAnimSegment1740.USE = "hanim_l_pinky_proximal";
HAnimHumanoid43.segments[167] = HAnimSegment1740;

HAnimSegment HAnimSegment1741 = createNode("HAnimSegment");
HAnimSegment1741.USE = "hanim_r_pinky_proximal";
HAnimHumanoid43.segments[168] = HAnimSegment1741;

HAnimSegment HAnimSegment1742 = createNode("HAnimSegment");
HAnimSegment1742.USE = "hanim_l_ring_distal";
HAnimHumanoid43.segments[169] = HAnimSegment1742;

HAnimSegment HAnimSegment1743 = createNode("HAnimSegment");
HAnimSegment1743.USE = "hanim_r_ring_distal";
HAnimHumanoid43.segments[170] = HAnimSegment1743;

HAnimSegment HAnimSegment1744 = createNode("HAnimSegment");
HAnimSegment1744.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid43.segments[171] = HAnimSegment1744;

HAnimSegment HAnimSegment1745 = createNode("HAnimSegment");
HAnimSegment1745.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid43.segments[172] = HAnimSegment1745;

HAnimSegment HAnimSegment1746 = createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_l_ring_middle";
HAnimHumanoid43.segments[173] = HAnimSegment1746;

HAnimSegment HAnimSegment1747 = createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_r_ring_middle";
HAnimHumanoid43.segments[174] = HAnimSegment1747;

HAnimSegment HAnimSegment1748 = createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_l_ring_proximal";
HAnimHumanoid43.segments[175] = HAnimSegment1748;

HAnimSegment HAnimSegment1749 = createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_r_ring_proximal";
HAnimHumanoid43.segments[176] = HAnimSegment1749;

HAnimSegment HAnimSegment1750 = createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[177] = HAnimSegment1750;

HAnimSegment HAnimSegment1751 = createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[178] = HAnimSegment1751;

HAnimSegment HAnimSegment1752 = createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[179] = HAnimSegment1752;

HAnimSegment HAnimSegment1753 = createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[180] = HAnimSegment1753;

HAnimSegment HAnimSegment1754 = createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l_thumb_distal";
HAnimHumanoid43.segments[181] = HAnimSegment1754;

HAnimSegment HAnimSegment1755 = createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_r_thumb_distal";
HAnimHumanoid43.segments[182] = HAnimSegment1755;

HAnimSegment HAnimSegment1756 = createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid43.segments[183] = HAnimSegment1756;

HAnimSegment HAnimSegment1757 = createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid43.segments[184] = HAnimSegment1757;

HAnimSegment HAnimSegment1758 = createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_thumb_proximal";
HAnimHumanoid43.segments[185] = HAnimSegment1758;

HAnimSegment HAnimSegment1759 = createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_r_thumb_proximal";
HAnimHumanoid43.segments[186] = HAnimSegment1759;

HAnimSegment HAnimSegment1760 = createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[187] = HAnimSegment1760;

HAnimSegment HAnimSegment1761 = createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[188] = HAnimSegment1761;

HAnimSite HAnimSite1762 = createNode("HAnimSite");
HAnimSite1762.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[189] = HAnimSite1762;

HAnimSite HAnimSite1763 = createNode("HAnimSite");
HAnimSite1763.USE = "hanim_skull_tip";
HAnimHumanoid43.viewpoints[190] = HAnimSite1763;

HAnimSite HAnimSite1764 = createNode("HAnimSite");
HAnimSite1764.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[191] = HAnimSite1764;

HAnimSite HAnimSite1765 = createNode("HAnimSite");
HAnimSite1765.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[192] = HAnimSite1765;

HAnimSite HAnimSite1766 = createNode("HAnimSite");
HAnimSite1766.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[193] = HAnimSite1766;

HAnimSite HAnimSite1767 = createNode("HAnimSite");
HAnimSite1767.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[194] = HAnimSite1767;

HAnimSite HAnimSite1768 = createNode("HAnimSite");
HAnimSite1768.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[195] = HAnimSite1768;

HAnimSite HAnimSite1769 = createNode("HAnimSite");
HAnimSite1769.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[196] = HAnimSite1769;

HAnimSite HAnimSite1770 = createNode("HAnimSite");
HAnimSite1770.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid43.viewpoints[197] = HAnimSite1770;

HAnimSite HAnimSite1771 = createNode("HAnimSite");
HAnimSite1771.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid43.viewpoints[198] = HAnimSite1771;

HAnimSite HAnimSite1772 = createNode("HAnimSite");
HAnimSite1772.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[199] = HAnimSite1772;

HAnimSite HAnimSite1773 = createNode("HAnimSite");
HAnimSite1773.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[200] = HAnimSite1773;

HAnimSite HAnimSite1774 = createNode("HAnimSite");
HAnimSite1774.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[201] = HAnimSite1774;

HAnimSite HAnimSite1775 = createNode("HAnimSite");
HAnimSite1775.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[202] = HAnimSite1775;

HAnimSite HAnimSite1776 = createNode("HAnimSite");
HAnimSite1776.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[203] = HAnimSite1776;

HAnimSite HAnimSite1777 = createNode("HAnimSite");
HAnimSite1777.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid43.viewpoints[204] = HAnimSite1777;

HAnimSite HAnimSite1778 = createNode("HAnimSite");
HAnimSite1778.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid43.viewpoints[205] = HAnimSite1778;

HAnimSite HAnimSite1779 = createNode("HAnimSite");
HAnimSite1779.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid43.viewpoints[206] = HAnimSite1779;

HAnimSite HAnimSite1780 = createNode("HAnimSite");
HAnimSite1780.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid43.viewpoints[207] = HAnimSite1780;

HAnimSite HAnimSite1781 = createNode("HAnimSite");
HAnimSite1781.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid43.viewpoints[208] = HAnimSite1781;

HAnimSite HAnimSite1782 = createNode("HAnimSite");
HAnimSite1782.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid43.viewpoints[209] = HAnimSite1782;

HAnimSite HAnimSite1783 = createNode("HAnimSite");
HAnimSite1783.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[210] = HAnimSite1783;

HAnimSite HAnimSite1784 = createNode("HAnimSite");
HAnimSite1784.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[211] = HAnimSite1784;

HAnimSite HAnimSite1785 = createNode("HAnimSite");
HAnimSite1785.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[212] = HAnimSite1785;

HAnimSite HAnimSite1786 = createNode("HAnimSite");
HAnimSite1786.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[213] = HAnimSite1786;

HAnimSite HAnimSite1787 = createNode("HAnimSite");
HAnimSite1787.USE = "hanim_l_digit2_pt";
HAnimHumanoid43.viewpoints[214] = HAnimSite1787;

HAnimSite HAnimSite1788 = createNode("HAnimSite");
HAnimSite1788.USE = "hanim_r_digit2_pt";
HAnimHumanoid43.viewpoints[215] = HAnimSite1788;

HAnimSite HAnimSite1789 = createNode("HAnimSite");
HAnimSite1789.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[216] = HAnimSite1789;

HAnimSite HAnimSite1790 = createNode("HAnimSite");
HAnimSite1790.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[217] = HAnimSite1790;

HAnimSite HAnimSite1791 = createNode("HAnimSite");
HAnimSite1791.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[218] = HAnimSite1791;

HAnimSite HAnimSite1792 = createNode("HAnimSite");
HAnimSite1792.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[219] = HAnimSite1792;

HAnimSite HAnimSite1793 = createNode("HAnimSite");
HAnimSite1793.USE = "hanim_l_forefoot_tip";
HAnimHumanoid43.viewpoints[220] = HAnimSite1793;

HAnimSite HAnimSite1794 = createNode("HAnimSite");
HAnimSite1794.USE = "hanim_r_forefoot_tip";
HAnimHumanoid43.viewpoints[221] = HAnimSite1794;

HAnimSite HAnimSite1795 = createNode("HAnimSite");
HAnimSite1795.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[222] = HAnimSite1795;

HAnimSite HAnimSite1796 = createNode("HAnimSite");
HAnimSite1796.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[223] = HAnimSite1796;

HAnimSite HAnimSite1797 = createNode("HAnimSite");
HAnimSite1797.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[224] = HAnimSite1797;

HAnimSite HAnimSite1798 = createNode("HAnimSite");
HAnimSite1798.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[225] = HAnimSite1798;

HAnimSite HAnimSite1799 = createNode("HAnimSite");
HAnimSite1799.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[226] = HAnimSite1799;

HAnimSite HAnimSite1800 = createNode("HAnimSite");
HAnimSite1800.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[227] = HAnimSite1800;

HAnimSite HAnimSite1801 = createNode("HAnimSite");
HAnimSite1801.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[228] = HAnimSite1801;

HAnimSite HAnimSite1802 = createNode("HAnimSite");
HAnimSite1802.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[229] = HAnimSite1802;

HAnimSite HAnimSite1803 = createNode("HAnimSite");
HAnimSite1803.USE = "hanim_l_index_distal_tip";
HAnimHumanoid43.viewpoints[230] = HAnimSite1803;

HAnimSite HAnimSite1804 = createNode("HAnimSite");
HAnimSite1804.USE = "hanim_r_index_distal_tip";
HAnimHumanoid43.viewpoints[231] = HAnimSite1804;

HAnimSite HAnimSite1805 = createNode("HAnimSite");
HAnimSite1805.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[232] = HAnimSite1805;

HAnimSite HAnimSite1806 = createNode("HAnimSite");
HAnimSite1806.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[233] = HAnimSite1806;

HAnimSite HAnimSite1807 = createNode("HAnimSite");
HAnimSite1807.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[234] = HAnimSite1807;

HAnimSite HAnimSite1808 = createNode("HAnimSite");
HAnimSite1808.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[235] = HAnimSite1808;

HAnimSite HAnimSite1809 = createNode("HAnimSite");
HAnimSite1809.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[236] = HAnimSite1809;

HAnimSite HAnimSite1810 = createNode("HAnimSite");
HAnimSite1810.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[237] = HAnimSite1810;

HAnimSite HAnimSite1811 = createNode("HAnimSite");
HAnimSite1811.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[238] = HAnimSite1811;

HAnimSite HAnimSite1812 = createNode("HAnimSite");
HAnimSite1812.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[239] = HAnimSite1812;

HAnimSite HAnimSite1813 = createNode("HAnimSite");
HAnimSite1813.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid43.viewpoints[240] = HAnimSite1813;

HAnimSite HAnimSite1814 = createNode("HAnimSite");
HAnimSite1814.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid43.viewpoints[241] = HAnimSite1814;

HAnimSite HAnimSite1815 = createNode("HAnimSite");
HAnimSite1815.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid43.viewpoints[242] = HAnimSite1815;

HAnimSite HAnimSite1816 = createNode("HAnimSite");
HAnimSite1816.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid43.viewpoints[243] = HAnimSite1816;

HAnimSite HAnimSite1817 = createNode("HAnimSite");
HAnimSite1817.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid43.viewpoints[244] = HAnimSite1817;

HAnimSite HAnimSite1818 = createNode("HAnimSite");
HAnimSite1818.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid43.viewpoints[245] = HAnimSite1818;

HAnimSite HAnimSite1819 = createNode("HAnimSite");
HAnimSite1819.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid43.viewpoints[246] = HAnimSite1819;

HAnimSite HAnimSite1820 = createNode("HAnimSite");
HAnimSite1820.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid43.viewpoints[247] = HAnimSite1820;

HAnimSite HAnimSite1821 = createNode("HAnimSite");
HAnimSite1821.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid43.viewpoints[248] = HAnimSite1821;

HAnimSite HAnimSite1822 = createNode("HAnimSite");
HAnimSite1822.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid43.viewpoints[249] = HAnimSite1822;

HAnimSite HAnimSite1823 = createNode("HAnimSite");
HAnimSite1823.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[250] = HAnimSite1823;

HAnimSite HAnimSite1824 = createNode("HAnimSite");
HAnimSite1824.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[251] = HAnimSite1824;

HAnimSite HAnimSite1825 = createNode("HAnimSite");
HAnimSite1825.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[252] = HAnimSite1825;

HAnimSite HAnimSite1826 = createNode("HAnimSite");
HAnimSite1826.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[253] = HAnimSite1826;

HAnimSite HAnimSite1827 = createNode("HAnimSite");
HAnimSite1827.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid43.viewpoints[254] = HAnimSite1827;

HAnimSite HAnimSite1828 = createNode("HAnimSite");
HAnimSite1828.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid43.viewpoints[255] = HAnimSite1828;

HAnimSite HAnimSite1829 = createNode("HAnimSite");
HAnimSite1829.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[256] = HAnimSite1829;

HAnimSite HAnimSite1830 = createNode("HAnimSite");
HAnimSite1830.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[257] = HAnimSite1830;

HAnimSite HAnimSite1831 = createNode("HAnimSite");
HAnimSite1831.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[258] = HAnimSite1831;

HAnimSite HAnimSite1832 = createNode("HAnimSite");
HAnimSite1832.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[259] = HAnimSite1832;

HAnimSite HAnimSite1833 = createNode("HAnimSite");
HAnimSite1833.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[260] = HAnimSite1833;

HAnimSite HAnimSite1834 = createNode("HAnimSite");
HAnimSite1834.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[261] = HAnimSite1834;

HAnimSite HAnimSite1835 = createNode("HAnimSite");
HAnimSite1835.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[262] = HAnimSite1835;

HAnimSite HAnimSite1836 = createNode("HAnimSite");
HAnimSite1836.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[263] = HAnimSite1836;

HAnimSite HAnimSite1837 = createNode("HAnimSite");
HAnimSite1837.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid43.viewpoints[264] = HAnimSite1837;

HAnimSite HAnimSite1838 = createNode("HAnimSite");
HAnimSite1838.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid43.viewpoints[265] = HAnimSite1838;

HAnimSite HAnimSite1839 = createNode("HAnimSite");
HAnimSite1839.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid43.viewpoints[266] = HAnimSite1839;

HAnimSite HAnimSite1840 = createNode("HAnimSite");
HAnimSite1840.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid43.viewpoints[267] = HAnimSite1840;

HAnimSite HAnimSite1841 = createNode("HAnimSite");
HAnimSite1841.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite1841;

HAnimSite HAnimSite1842 = createNode("HAnimSite");
HAnimSite1842.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite1842;

HAnimSite HAnimSite1843 = createNode("HAnimSite");
HAnimSite1843.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite1843;

HAnimSite HAnimSite1844 = createNode("HAnimSite");
HAnimSite1844.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite1844;

HAnimSite HAnimSite1845 = createNode("HAnimSite");
HAnimSite1845.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid43.viewpoints[272] = HAnimSite1845;

HAnimSite HAnimSite1846 = createNode("HAnimSite");
HAnimSite1846.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid43.viewpoints[273] = HAnimSite1846;

HAnimSite HAnimSite1847 = createNode("HAnimSite");
HAnimSite1847.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite1847;

HAnimSite HAnimSite1848 = createNode("HAnimSite");
HAnimSite1848.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite1848;

HAnimSite HAnimSite1849 = createNode("HAnimSite");
HAnimSite1849.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite1849;

HAnimSite HAnimSite1850 = createNode("HAnimSite");
HAnimSite1850.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite1850;

HAnimSite HAnimSite1851 = createNode("HAnimSite");
HAnimSite1851.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite1851;

HAnimSite HAnimSite1852 = createNode("HAnimSite");
HAnimSite1852.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite1852;

HAnimSite HAnimSite1853 = createNode("HAnimSite");
HAnimSite1853.DEF = "hanim_l_inclined_view";
HAnimSite1853.name = "l_inclined_view";
HAnimSite1853.translation = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite1853.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint Viewpoint1854 = createNode("Viewpoint");
Viewpoint1854.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1854.description = "left inclined";
Viewpoint1854.position = new SFVec3f(new float[0,0,0]);
HAnimSite1853.children = new MFNode();

HAnimSite1853.children[0] = Viewpoint1854;

Anchor Anchor1855 = createNode("Anchor");
Anchor1855.description = "HAnimSite Viewpoint hanim_l_inclined_view";
Anchor1855.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
LOD LOD1856 = createNode("LOD");
LOD1856.forceTransitions = True;
LOD1856.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1857 = createNode("WorldInfo");
WorldInfo1857.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1856.children = new MFNode();

LOD1856.children[0] = WorldInfo1857;

Shape Shape1858 = createNode("Shape");
Shape1858.USE = "HAnimSiteViewpointShape";
LOD1856.children[1] = Shape1858;

Anchor1855.children = new MFNode();

Anchor1855.children[0] = LOD1856;

HAnimSite1853.children[1] = Anchor1855;

HAnimHumanoid43.viewpoints[280] = HAnimSite1853;

HAnimSite HAnimSite1859 = createNode("HAnimSite");
HAnimSite1859.DEF = "hanim_r_inclined_view";
HAnimSite1859.name = "r_inclined_view";
HAnimSite1859.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
HAnimSite1859.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
Viewpoint Viewpoint1860 = createNode("Viewpoint");
Viewpoint1860.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1860.description = "right inclined";
Viewpoint1860.position = new SFVec3f(new float[0,0,0]);
Viewpoint1860.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1859.children = new MFNode();

HAnimSite1859.children[0] = Viewpoint1860;

Anchor Anchor1861 = createNode("Anchor");
Anchor1861.description = "HAnimSite Viewpoint hanim_r_inclined_view";
Anchor1861.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
LOD LOD1862 = createNode("LOD");
LOD1862.forceTransitions = True;
LOD1862.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1863 = createNode("WorldInfo");
WorldInfo1863.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1862.children = new MFNode();

LOD1862.children[0] = WorldInfo1863;

Shape Shape1864 = createNode("Shape");
Shape1864.USE = "HAnimSiteViewpointShape";
LOD1862.children[1] = Shape1864;

Anchor1861.children = new MFNode();

Anchor1861.children[0] = LOD1862;

HAnimSite1859.children[1] = Anchor1861;

HAnimHumanoid43.viewpoints[281] = HAnimSite1859;

HAnimSite HAnimSite1865 = createNode("HAnimSite");
HAnimSite1865.DEF = "hanim_front_view";
HAnimSite1865.name = "front_view";
HAnimSite1865.translation = new SFVec3f(new float[0,0.85,2.58]);
Viewpoint Viewpoint1866 = createNode("Viewpoint");
Viewpoint1866.DEF = "hanim_front_viewpoint";
Viewpoint1866.description = "front";
Viewpoint1866.position = new SFVec3f(new float[0,0,0]);
Viewpoint1866.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1865.children = new MFNode();

HAnimSite1865.children[0] = Viewpoint1866;

Anchor Anchor1867 = createNode("Anchor");
Anchor1867.description = "HAnimSite Viewpoint hanim_front_view";
Anchor1867.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
LOD LOD1868 = createNode("LOD");
LOD1868.forceTransitions = True;
LOD1868.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1869 = createNode("WorldInfo");
WorldInfo1869.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1868.children = new MFNode();

LOD1868.children[0] = WorldInfo1869;

Shape Shape1870 = createNode("Shape");
Shape1870.USE = "HAnimSiteViewpointShape";
LOD1868.children[1] = Shape1870;

Anchor1867.children = new MFNode();

Anchor1867.children[0] = LOD1868;

HAnimSite1865.children[1] = Anchor1867;

HAnimHumanoid43.viewpoints[282] = HAnimSite1865;

HAnimSite HAnimSite1871 = createNode("HAnimSite");
HAnimSite1871.DEF = "hanim_back_view";
HAnimSite1871.name = "back_view";
HAnimSite1871.translation = new SFVec3f(new float[0,0.85,-2.58]);
HAnimSite1871.rotation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint Viewpoint1872 = createNode("Viewpoint");
Viewpoint1872.DEF = "hanim_back_viewpoint";
Viewpoint1872.description = "back";
Viewpoint1872.position = new SFVec3f(new float[0,0,0]);
Viewpoint1872.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1871.children = new MFNode();

HAnimSite1871.children[0] = Viewpoint1872;

Anchor Anchor1873 = createNode("Anchor");
Anchor1873.description = "HAnimSite Viewpoint hanim_back_view";
Anchor1873.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
LOD LOD1874 = createNode("LOD");
LOD1874.forceTransitions = True;
LOD1874.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1875 = createNode("WorldInfo");
WorldInfo1875.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1874.children = new MFNode();

LOD1874.children[0] = WorldInfo1875;

Shape Shape1876 = createNode("Shape");
Shape1876.USE = "HAnimSiteViewpointShape";
LOD1874.children[1] = Shape1876;

Anchor1873.children = new MFNode();

Anchor1873.children[0] = LOD1874;

HAnimSite1871.children[1] = Anchor1873;

HAnimHumanoid43.viewpoints[283] = HAnimSite1871;

HAnimSite HAnimSite1877 = createNode("HAnimSite");
HAnimSite1877.DEF = "hanim_l_side_view";
HAnimSite1877.name = "l_side_view";
HAnimSite1877.translation = new SFVec3f(new float[2.6,0.854,0]);
HAnimSite1877.rotation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint Viewpoint1878 = createNode("Viewpoint");
Viewpoint1878.DEF = "hanim_l_side_viewpoint";
Viewpoint1878.description = "left side";
Viewpoint1878.position = new SFVec3f(new float[0,0,0]);
Viewpoint1878.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1877.children = new MFNode();

HAnimSite1877.children[0] = Viewpoint1878;

Anchor Anchor1879 = createNode("Anchor");
Anchor1879.description = "HAnimSite Viewpoint hanim_l_side_view";
Anchor1879.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
LOD LOD1880 = createNode("LOD");
LOD1880.forceTransitions = True;
LOD1880.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1881 = createNode("WorldInfo");
WorldInfo1881.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1880.children = new MFNode();

LOD1880.children[0] = WorldInfo1881;

Shape Shape1882 = createNode("Shape");
Shape1882.USE = "HAnimSiteViewpointShape";
LOD1880.children[1] = Shape1882;

Anchor1879.children = new MFNode();

Anchor1879.children[0] = LOD1880;

HAnimSite1877.children[1] = Anchor1879;

HAnimHumanoid43.viewpoints[284] = HAnimSite1877;

HAnimSite HAnimSite1883 = createNode("HAnimSite");
HAnimSite1883.DEF = "hanim_Top_view";
HAnimSite1883.name = "Top_view";
HAnimSite1883.translation = new SFVec3f(new float[0,3.5,0]);
HAnimSite1883.rotation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint Viewpoint1884 = createNode("Viewpoint");
Viewpoint1884.DEF = "hanim_Top_viewpoint";
Viewpoint1884.description = "Top";
Viewpoint1884.position = new SFVec3f(new float[0,0,0]);
Viewpoint1884.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1883.children = new MFNode();

HAnimSite1883.children[0] = Viewpoint1884;

Anchor Anchor1885 = createNode("Anchor");
Anchor1885.description = "HAnimSite Viewpoint hanim_Top_view";
Anchor1885.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
LOD LOD1886 = createNode("LOD");
LOD1886.forceTransitions = True;
LOD1886.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1887 = createNode("WorldInfo");
WorldInfo1887.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1886.children = new MFNode();

LOD1886.children[0] = WorldInfo1887;

Shape Shape1888 = createNode("Shape");
Shape1888.USE = "HAnimSiteViewpointShape";
LOD1886.children[1] = Shape1888;

Anchor1885.children = new MFNode();

Anchor1885.children[0] = LOD1886;

HAnimSite1883.children[1] = Anchor1885;

HAnimHumanoid43.viewpoints[285] = HAnimSite1883;

HAnimSite HAnimSite1889 = createNode("HAnimSite");
HAnimSite1889.DEF = "hanim_front_close_view";
HAnimSite1889.name = "front_close_view";
HAnimSite1889.translation = new SFVec3f(new float[0,0.854,1.575]);
Viewpoint Viewpoint1890 = createNode("Viewpoint");
Viewpoint1890.DEF = "hanim_front_close_viewpoint";
Viewpoint1890.description = "front close";
Viewpoint1890.position = new SFVec3f(new float[0,0,0]);
Viewpoint1890.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
HAnimSite1889.children = new MFNode();

HAnimSite1889.children[0] = Viewpoint1890;

Anchor Anchor1891 = createNode("Anchor");
Anchor1891.description = "HAnimSite Viewpoint hanim_front_close_view";
Anchor1891.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
LOD LOD1892 = createNode("LOD");
LOD1892.forceTransitions = True;
LOD1892.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1893 = createNode("WorldInfo");
WorldInfo1893.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1892.children = new MFNode();

LOD1892.children[0] = WorldInfo1893;

Shape Shape1894 = createNode("Shape");
Shape1894.USE = "HAnimSiteViewpointShape";
LOD1892.children[1] = Shape1894;

Anchor1891.children = new MFNode();

Anchor1891.children[0] = LOD1892;

HAnimSite1889.children[1] = Anchor1891;

HAnimHumanoid43.viewpoints[286] = HAnimSite1889;

HAnimSite HAnimSite1895 = createNode("HAnimSite");
HAnimSite1895.DEF = "hanim_side_close_view";
HAnimSite1895.name = "side_close_view";
HAnimSite1895.translation = new SFVec3f(new float[1.56,0.854,0]);
HAnimSite1895.rotation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint Viewpoint1896 = createNode("Viewpoint");
Viewpoint1896.DEF = "hanim_side_close_viewpoint";
Viewpoint1896.description = "side close";
Viewpoint1896.position = new SFVec3f(new float[0,0,0]);
Viewpoint1896.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
HAnimSite1895.children = new MFNode();

HAnimSite1895.children[0] = Viewpoint1896;

Anchor Anchor1897 = createNode("Anchor");
Anchor1897.description = "HAnimSite Viewpoint hanim_side_close_view";
Anchor1897.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
LOD LOD1898 = createNode("LOD");
LOD1898.forceTransitions = True;
LOD1898.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1899 = createNode("WorldInfo");
WorldInfo1899.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1898.children = new MFNode();

LOD1898.children[0] = WorldInfo1899;

Shape Shape1900 = createNode("Shape");
Shape1900.USE = "HAnimSiteViewpointShape";
LOD1898.children[1] = Shape1900;

Anchor1897.children = new MFNode();

Anchor1897.children[0] = LOD1898;

HAnimSite1895.children[1] = Anchor1897;

HAnimHumanoid43.viewpoints[287] = HAnimSite1895;

HAnimSite HAnimSite1901 = createNode("HAnimSite");
HAnimSite1901.DEF = "hanim_head_front_close_view";
HAnimSite1901.name = "head_front_close_view";
HAnimSite1901.translation = new SFVec3f(new float[0,1.5,1]);
Viewpoint Viewpoint1902 = createNode("Viewpoint");
Viewpoint1902.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1902.description = "head front close";
Viewpoint1902.position = new SFVec3f(new float[0,0,0]);
Viewpoint1902.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite1901.children = new MFNode();

HAnimSite1901.children[0] = Viewpoint1902;

Anchor Anchor1903 = createNode("Anchor");
Anchor1903.description = "HAnimSite Viewpoint hanim_head_front_close_view";
Anchor1903.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
LOD LOD1904 = createNode("LOD");
LOD1904.forceTransitions = True;
LOD1904.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1905 = createNode("WorldInfo");
WorldInfo1905.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1904.children = new MFNode();

LOD1904.children[0] = WorldInfo1905;

Shape Shape1906 = createNode("Shape");
Shape1906.USE = "HAnimSiteViewpointShape";
LOD1904.children[1] = Shape1906;

Anchor1903.children = new MFNode();

Anchor1903.children[0] = LOD1904;

HAnimSite1901.children[1] = Anchor1903;

HAnimHumanoid43.viewpoints[288] = HAnimSite1901;

HAnimSite HAnimSite1907 = createNode("HAnimSite");
HAnimSite1907.DEF = "hanim_chest_front_close_view";
HAnimSite1907.name = "chest_front_close_view";
HAnimSite1907.translation = new SFVec3f(new float[0,1.2,1]);
Viewpoint Viewpoint1908 = createNode("Viewpoint");
Viewpoint1908.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1908.description = "chest front close";
Viewpoint1908.position = new SFVec3f(new float[0,0,0]);
Viewpoint1908.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite1907.children = new MFNode();

HAnimSite1907.children[0] = Viewpoint1908;

Anchor Anchor1909 = createNode("Anchor");
Anchor1909.description = "HAnimSite Viewpoint hanim_chest_front_close_view";
Anchor1909.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
LOD LOD1910 = createNode("LOD");
LOD1910.forceTransitions = True;
LOD1910.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1911 = createNode("WorldInfo");
WorldInfo1911.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1910.children = new MFNode();

LOD1910.children[0] = WorldInfo1911;

Shape Shape1912 = createNode("Shape");
Shape1912.USE = "HAnimSiteViewpointShape";
LOD1910.children[1] = Shape1912;

Anchor1909.children = new MFNode();

Anchor1909.children[0] = LOD1910;

HAnimSite1907.children[1] = Anchor1909;

HAnimHumanoid43.viewpoints[289] = HAnimSite1907;

HAnimSite HAnimSite1913 = createNode("HAnimSite");
HAnimSite1913.DEF = "hanim_pelvis_front_close_view";
HAnimSite1913.name = "pelvis_front_close_view";
HAnimSite1913.translation = new SFVec3f(new float[0,0.8,1]);
Viewpoint Viewpoint1914 = createNode("Viewpoint");
Viewpoint1914.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1914.description = "pelvis front close";
Viewpoint1914.position = new SFVec3f(new float[0,0,0]);
Viewpoint1914.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite1913.children = new MFNode();

HAnimSite1913.children[0] = Viewpoint1914;

Anchor Anchor1915 = createNode("Anchor");
Anchor1915.description = "HAnimSite Viewpoint hanim_pelvis_front_close_view";
Anchor1915.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
LOD LOD1916 = createNode("LOD");
LOD1916.forceTransitions = True;
LOD1916.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1917 = createNode("WorldInfo");
WorldInfo1917.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1916.children = new MFNode();

LOD1916.children[0] = WorldInfo1917;

Shape Shape1918 = createNode("Shape");
Shape1918.USE = "HAnimSiteViewpointShape";
LOD1916.children[1] = Shape1918;

Anchor1915.children = new MFNode();

Anchor1915.children[0] = LOD1916;

HAnimSite1913.children[1] = Anchor1915;

HAnimHumanoid43.viewpoints[290] = HAnimSite1913;

HAnimSite HAnimSite1919 = createNode("HAnimSite");
HAnimSite1919.DEF = "hanim_knees_front_close_view";
HAnimSite1919.name = "knees_front_close_view";
HAnimSite1919.translation = new SFVec3f(new float[0,0.4,1]);
Viewpoint Viewpoint1920 = createNode("Viewpoint");
Viewpoint1920.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1920.description = "knees front close";
Viewpoint1920.position = new SFVec3f(new float[0,0,0]);
Viewpoint1920.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
HAnimSite1919.children = new MFNode();

HAnimSite1919.children[0] = Viewpoint1920;

Anchor Anchor1921 = createNode("Anchor");
Anchor1921.description = "HAnimSite Viewpoint hanim_knees_front_close_view";
Anchor1921.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
LOD LOD1922 = createNode("LOD");
LOD1922.forceTransitions = True;
LOD1922.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1923 = createNode("WorldInfo");
WorldInfo1923.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1922.children = new MFNode();

LOD1922.children[0] = WorldInfo1923;

Shape Shape1924 = createNode("Shape");
Shape1924.USE = "HAnimSiteViewpointShape";
LOD1922.children[1] = Shape1924;

Anchor1921.children = new MFNode();

Anchor1921.children[0] = LOD1922;

HAnimSite1919.children[1] = Anchor1921;

HAnimHumanoid43.viewpoints[291] = HAnimSite1919;

HAnimSite HAnimSite1925 = createNode("HAnimSite");
HAnimSite1925.DEF = "hanim_feet_front_close_view";
HAnimSite1925.name = "feet_front_close_view";
HAnimSite1925.translation = new SFVec3f(new float[0,0,1]);
Viewpoint Viewpoint1926 = createNode("Viewpoint");
Viewpoint1926.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1926.description = "feet front close";
Viewpoint1926.position = new SFVec3f(new float[0,0,0]);
HAnimSite1925.children = new MFNode();

HAnimSite1925.children[0] = Viewpoint1926;

Anchor Anchor1927 = createNode("Anchor");
Anchor1927.description = "HAnimSite Viewpoint hanim_feet_front_close_view";
Anchor1927.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
LOD LOD1928 = createNode("LOD");
LOD1928.forceTransitions = True;
LOD1928.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1929 = createNode("WorldInfo");
WorldInfo1929.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1928.children = new MFNode();

LOD1928.children[0] = WorldInfo1929;

Shape Shape1930 = createNode("Shape");
Shape1930.USE = "HAnimSiteViewpointShape";
LOD1928.children[1] = Shape1930;

Anchor1927.children = new MFNode();

Anchor1927.children[0] = LOD1928;

HAnimSite1925.children[1] = Anchor1927;

HAnimHumanoid43.viewpoints[292] = HAnimSite1925;

HAnimSite HAnimSite1931 = createNode("HAnimSite");
HAnimSite1931.DEF = "hanim_eye_level_view";
HAnimSite1931.name = "eye_level_view";
HAnimSite1931.translation = new SFVec3f(new float[0,1.6332,0.0502]);
Viewpoint Viewpoint1932 = createNode("Viewpoint");
Viewpoint1932.DEF = "hanim_eye_level_viewpoint";
Viewpoint1932.description = "eye level looking forward";
Viewpoint1932.position = new SFVec3f(new float[0,0,0]);
Viewpoint1932.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite1931.children = new MFNode();

HAnimSite1931.children[0] = Viewpoint1932;

Anchor Anchor1933 = createNode("Anchor");
Anchor1933.description = "HAnimSite Viewpoint hanim_eye_level_view";
Anchor1933.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
LOD LOD1934 = createNode("LOD");
LOD1934.forceTransitions = True;
LOD1934.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1935 = createNode("WorldInfo");
WorldInfo1935.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1934.children = new MFNode();

LOD1934.children[0] = WorldInfo1935;

Shape Shape1936 = createNode("Shape");
Shape1936.USE = "HAnimSiteViewpointShape";
LOD1934.children[1] = Shape1936;

Anchor1933.children = new MFNode();

Anchor1933.children[0] = LOD1934;

HAnimSite1931.children[1] = Anchor1933;

HAnimHumanoid43.viewpoints[293] = HAnimSite1931;

HAnimSite HAnimSite1937 = createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid43.viewpoints[294] = HAnimSite1937;

HAnimSite HAnimSite1938 = createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid43.viewpoints[295] = HAnimSite1938;

HAnimSite HAnimSite1939 = createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_hand_front_view";
HAnimHumanoid43.viewpoints[296] = HAnimSite1939;

HAnimSite HAnimSite1940 = createNode("HAnimSite");
HAnimSite1940.USE = "hanim_r_hand_front_view";
HAnimHumanoid43.viewpoints[297] = HAnimSite1940;

children[12] = HAnimHumanoid43;

Group Group1941 = createNode("Group");
Group1941.DEF = "StopAnimation";
TimeSensor TimeSensor1942 = createNode("TimeSensor");
TimeSensor1942.DEF = "StopTimer";
TimeSensor1942.cycleInterval = 5.73;
TimeSensor1942.loop = True;
Group1941.children = new MFNode();

Group1941.children[0] = TimeSensor1942;

PositionInterpolator PositionInterpolator1943 = createNode("PositionInterpolator");
PositionInterpolator1943.DEF = "Stop_HumanoidRoot_TranslationInterpolator";
PositionInterpolator1943.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator1943.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group1941.children[1] = PositionInterpolator1943;

OrientationInterpolator OrientationInterpolator1944 = createNode("OrientationInterpolator");
OrientationInterpolator1944.DEF = "Stop_HumanoidRoot_RotationInterpolator";
OrientationInterpolator1944.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1944.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[2] = OrientationInterpolator1944;

OrientationInterpolator OrientationInterpolator1945 = createNode("OrientationInterpolator");
OrientationInterpolator1945.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator1945.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1945.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[3] = OrientationInterpolator1945;

OrientationInterpolator OrientationInterpolator1946 = createNode("OrientationInterpolator");
OrientationInterpolator1946.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator1946.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1946.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[4] = OrientationInterpolator1946;

OrientationInterpolator OrientationInterpolator1947 = createNode("OrientationInterpolator");
OrientationInterpolator1947.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator1947.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1947.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[5] = OrientationInterpolator1947;

OrientationInterpolator OrientationInterpolator1948 = createNode("OrientationInterpolator");
OrientationInterpolator1948.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator1948.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1948.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[6] = OrientationInterpolator1948;

OrientationInterpolator OrientationInterpolator1949 = createNode("OrientationInterpolator");
OrientationInterpolator1949.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator1949.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1949.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[7] = OrientationInterpolator1949;

OrientationInterpolator OrientationInterpolator1950 = createNode("OrientationInterpolator");
OrientationInterpolator1950.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator1950.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1950.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[8] = OrientationInterpolator1950;

OrientationInterpolator OrientationInterpolator1951 = createNode("OrientationInterpolator");
OrientationInterpolator1951.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator1951.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1951.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[9] = OrientationInterpolator1951;

OrientationInterpolator OrientationInterpolator1952 = createNode("OrientationInterpolator");
OrientationInterpolator1952.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator1952.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1952.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[10] = OrientationInterpolator1952;

OrientationInterpolator OrientationInterpolator1953 = createNode("OrientationInterpolator");
OrientationInterpolator1953.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator1953.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1953.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[11] = OrientationInterpolator1953;

OrientationInterpolator OrientationInterpolator1954 = createNode("OrientationInterpolator");
OrientationInterpolator1954.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator1954.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1954.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[12] = OrientationInterpolator1954;

OrientationInterpolator OrientationInterpolator1955 = createNode("OrientationInterpolator");
OrientationInterpolator1955.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator1955.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1955.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[13] = OrientationInterpolator1955;

OrientationInterpolator OrientationInterpolator1956 = createNode("OrientationInterpolator");
OrientationInterpolator1956.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator1956.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1956.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[14] = OrientationInterpolator1956;

OrientationInterpolator OrientationInterpolator1957 = createNode("OrientationInterpolator");
OrientationInterpolator1957.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator1957.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1957.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[15] = OrientationInterpolator1957;

OrientationInterpolator OrientationInterpolator1958 = createNode("OrientationInterpolator");
OrientationInterpolator1958.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator1958.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1958.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[16] = OrientationInterpolator1958;

OrientationInterpolator OrientationInterpolator1959 = createNode("OrientationInterpolator");
OrientationInterpolator1959.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator1959.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1959.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[17] = OrientationInterpolator1959;

OrientationInterpolator OrientationInterpolator1960 = createNode("OrientationInterpolator");
OrientationInterpolator1960.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator1960.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1960.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[18] = OrientationInterpolator1960;

OrientationInterpolator OrientationInterpolator1961 = createNode("OrientationInterpolator");
OrientationInterpolator1961.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator1961.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1961.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[19] = OrientationInterpolator1961;

OrientationInterpolator OrientationInterpolator1962 = createNode("OrientationInterpolator");
OrientationInterpolator1962.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator1962.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1962.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[20] = OrientationInterpolator1962;

OrientationInterpolator OrientationInterpolator1963 = createNode("OrientationInterpolator");
OrientationInterpolator1963.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator1963.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1963.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[21] = OrientationInterpolator1963;

OrientationInterpolator OrientationInterpolator1964 = createNode("OrientationInterpolator");
OrientationInterpolator1964.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator1964.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1964.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[22] = OrientationInterpolator1964;

OrientationInterpolator OrientationInterpolator1965 = createNode("OrientationInterpolator");
OrientationInterpolator1965.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator1965.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1965.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[23] = OrientationInterpolator1965;

OrientationInterpolator OrientationInterpolator1966 = createNode("OrientationInterpolator");
OrientationInterpolator1966.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator1966.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1966.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[24] = OrientationInterpolator1966;

OrientationInterpolator OrientationInterpolator1967 = createNode("OrientationInterpolator");
OrientationInterpolator1967.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator1967.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1967.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[25] = OrientationInterpolator1967;

OrientationInterpolator OrientationInterpolator1968 = createNode("OrientationInterpolator");
OrientationInterpolator1968.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator1968.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1968.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[26] = OrientationInterpolator1968;

OrientationInterpolator OrientationInterpolator1969 = createNode("OrientationInterpolator");
OrientationInterpolator1969.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator1969.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1969.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[27] = OrientationInterpolator1969;

OrientationInterpolator OrientationInterpolator1970 = createNode("OrientationInterpolator");
OrientationInterpolator1970.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator1970.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1970.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[28] = OrientationInterpolator1970;

OrientationInterpolator OrientationInterpolator1971 = createNode("OrientationInterpolator");
OrientationInterpolator1971.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator1971.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1971.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[29] = OrientationInterpolator1971;

OrientationInterpolator OrientationInterpolator1972 = createNode("OrientationInterpolator");
OrientationInterpolator1972.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator1972.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1972.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[30] = OrientationInterpolator1972;

OrientationInterpolator OrientationInterpolator1973 = createNode("OrientationInterpolator");
OrientationInterpolator1973.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator1973.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1973.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[31] = OrientationInterpolator1973;

OrientationInterpolator OrientationInterpolator1974 = createNode("OrientationInterpolator");
OrientationInterpolator1974.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator1974.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1974.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[32] = OrientationInterpolator1974;

OrientationInterpolator OrientationInterpolator1975 = createNode("OrientationInterpolator");
OrientationInterpolator1975.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator1975.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1975.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[33] = OrientationInterpolator1975;

OrientationInterpolator OrientationInterpolator1976 = createNode("OrientationInterpolator");
OrientationInterpolator1976.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator1976.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1976.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[34] = OrientationInterpolator1976;

OrientationInterpolator OrientationInterpolator1977 = createNode("OrientationInterpolator");
OrientationInterpolator1977.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator1977.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1977.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[35] = OrientationInterpolator1977;

OrientationInterpolator OrientationInterpolator1978 = createNode("OrientationInterpolator");
OrientationInterpolator1978.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator1978.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1978.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[36] = OrientationInterpolator1978;

OrientationInterpolator OrientationInterpolator1979 = createNode("OrientationInterpolator");
OrientationInterpolator1979.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator1979.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1979.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[37] = OrientationInterpolator1979;

OrientationInterpolator OrientationInterpolator1980 = createNode("OrientationInterpolator");
OrientationInterpolator1980.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator1980.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1980.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[38] = OrientationInterpolator1980;

OrientationInterpolator OrientationInterpolator1981 = createNode("OrientationInterpolator");
OrientationInterpolator1981.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator1981.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1981.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[39] = OrientationInterpolator1981;

OrientationInterpolator OrientationInterpolator1982 = createNode("OrientationInterpolator");
OrientationInterpolator1982.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator1982.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1982.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[40] = OrientationInterpolator1982;

OrientationInterpolator OrientationInterpolator1983 = createNode("OrientationInterpolator");
OrientationInterpolator1983.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator1983.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1983.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[41] = OrientationInterpolator1983;

OrientationInterpolator OrientationInterpolator1984 = createNode("OrientationInterpolator");
OrientationInterpolator1984.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator1984.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1984.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[42] = OrientationInterpolator1984;

OrientationInterpolator OrientationInterpolator1985 = createNode("OrientationInterpolator");
OrientationInterpolator1985.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator1985.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1985.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[43] = OrientationInterpolator1985;

OrientationInterpolator OrientationInterpolator1986 = createNode("OrientationInterpolator");
OrientationInterpolator1986.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator1986.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1986.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[44] = OrientationInterpolator1986;

OrientationInterpolator OrientationInterpolator1987 = createNode("OrientationInterpolator");
OrientationInterpolator1987.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator1987.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1987.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[45] = OrientationInterpolator1987;

OrientationInterpolator OrientationInterpolator1988 = createNode("OrientationInterpolator");
OrientationInterpolator1988.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator1988.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1988.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[46] = OrientationInterpolator1988;

OrientationInterpolator OrientationInterpolator1989 = createNode("OrientationInterpolator");
OrientationInterpolator1989.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator1989.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1989.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[47] = OrientationInterpolator1989;

OrientationInterpolator OrientationInterpolator1990 = createNode("OrientationInterpolator");
OrientationInterpolator1990.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator1990.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1990.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[48] = OrientationInterpolator1990;

OrientationInterpolator OrientationInterpolator1991 = createNode("OrientationInterpolator");
OrientationInterpolator1991.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator1991.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1991.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[49] = OrientationInterpolator1991;

OrientationInterpolator OrientationInterpolator1992 = createNode("OrientationInterpolator");
OrientationInterpolator1992.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator1992.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1992.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[50] = OrientationInterpolator1992;

OrientationInterpolator OrientationInterpolator1993 = createNode("OrientationInterpolator");
OrientationInterpolator1993.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator1993.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1993.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[51] = OrientationInterpolator1993;

OrientationInterpolator OrientationInterpolator1994 = createNode("OrientationInterpolator");
OrientationInterpolator1994.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator1994.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1994.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[52] = OrientationInterpolator1994;

OrientationInterpolator OrientationInterpolator1995 = createNode("OrientationInterpolator");
OrientationInterpolator1995.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator1995.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1995.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[53] = OrientationInterpolator1995;

OrientationInterpolator OrientationInterpolator1996 = createNode("OrientationInterpolator");
OrientationInterpolator1996.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator1996.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1996.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[54] = OrientationInterpolator1996;

OrientationInterpolator OrientationInterpolator1997 = createNode("OrientationInterpolator");
OrientationInterpolator1997.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator1997.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1997.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[55] = OrientationInterpolator1997;

OrientationInterpolator OrientationInterpolator1998 = createNode("OrientationInterpolator");
OrientationInterpolator1998.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator1998.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1998.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[56] = OrientationInterpolator1998;

OrientationInterpolator OrientationInterpolator1999 = createNode("OrientationInterpolator");
OrientationInterpolator1999.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator1999.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1999.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[57] = OrientationInterpolator1999;

OrientationInterpolator OrientationInterpolator2000 = createNode("OrientationInterpolator");
OrientationInterpolator2000.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator2000.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2000.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[58] = OrientationInterpolator2000;

OrientationInterpolator OrientationInterpolator2001 = createNode("OrientationInterpolator");
OrientationInterpolator2001.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator2001.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2001.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[59] = OrientationInterpolator2001;

OrientationInterpolator OrientationInterpolator2002 = createNode("OrientationInterpolator");
OrientationInterpolator2002.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator2002.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2002.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[60] = OrientationInterpolator2002;

OrientationInterpolator OrientationInterpolator2003 = createNode("OrientationInterpolator");
OrientationInterpolator2003.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator2003.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2003.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[61] = OrientationInterpolator2003;

OrientationInterpolator OrientationInterpolator2004 = createNode("OrientationInterpolator");
OrientationInterpolator2004.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator2004.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2004.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[62] = OrientationInterpolator2004;

OrientationInterpolator OrientationInterpolator2005 = createNode("OrientationInterpolator");
OrientationInterpolator2005.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator2005.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2005.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[63] = OrientationInterpolator2005;

OrientationInterpolator OrientationInterpolator2006 = createNode("OrientationInterpolator");
OrientationInterpolator2006.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator2006.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2006.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[64] = OrientationInterpolator2006;

OrientationInterpolator OrientationInterpolator2007 = createNode("OrientationInterpolator");
OrientationInterpolator2007.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator2007.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2007.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[65] = OrientationInterpolator2007;

OrientationInterpolator OrientationInterpolator2008 = createNode("OrientationInterpolator");
OrientationInterpolator2008.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator2008.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2008.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[66] = OrientationInterpolator2008;

OrientationInterpolator OrientationInterpolator2009 = createNode("OrientationInterpolator");
OrientationInterpolator2009.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator2009.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2009.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[67] = OrientationInterpolator2009;

OrientationInterpolator OrientationInterpolator2010 = createNode("OrientationInterpolator");
OrientationInterpolator2010.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator2010.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2010.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[68] = OrientationInterpolator2010;

OrientationInterpolator OrientationInterpolator2011 = createNode("OrientationInterpolator");
OrientationInterpolator2011.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator2011.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2011.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[69] = OrientationInterpolator2011;

OrientationInterpolator OrientationInterpolator2012 = createNode("OrientationInterpolator");
OrientationInterpolator2012.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator2012.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2012.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[70] = OrientationInterpolator2012;

OrientationInterpolator OrientationInterpolator2013 = createNode("OrientationInterpolator");
OrientationInterpolator2013.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator2013.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2013.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[71] = OrientationInterpolator2013;

OrientationInterpolator OrientationInterpolator2014 = createNode("OrientationInterpolator");
OrientationInterpolator2014.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator2014.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2014.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[72] = OrientationInterpolator2014;

OrientationInterpolator OrientationInterpolator2015 = createNode("OrientationInterpolator");
OrientationInterpolator2015.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator2015.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2015.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[73] = OrientationInterpolator2015;

OrientationInterpolator OrientationInterpolator2016 = createNode("OrientationInterpolator");
OrientationInterpolator2016.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator2016.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2016.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[74] = OrientationInterpolator2016;

OrientationInterpolator OrientationInterpolator2017 = createNode("OrientationInterpolator");
OrientationInterpolator2017.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator2017.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2017.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[75] = OrientationInterpolator2017;

OrientationInterpolator OrientationInterpolator2018 = createNode("OrientationInterpolator");
OrientationInterpolator2018.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator2018.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2018.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[76] = OrientationInterpolator2018;

OrientationInterpolator OrientationInterpolator2019 = createNode("OrientationInterpolator");
OrientationInterpolator2019.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator2019.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2019.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[77] = OrientationInterpolator2019;

OrientationInterpolator OrientationInterpolator2020 = createNode("OrientationInterpolator");
OrientationInterpolator2020.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator2020.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2020.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[78] = OrientationInterpolator2020;

OrientationInterpolator OrientationInterpolator2021 = createNode("OrientationInterpolator");
OrientationInterpolator2021.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator2021.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2021.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[79] = OrientationInterpolator2021;

OrientationInterpolator OrientationInterpolator2022 = createNode("OrientationInterpolator");
OrientationInterpolator2022.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator2022.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2022.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[80] = OrientationInterpolator2022;

OrientationInterpolator OrientationInterpolator2023 = createNode("OrientationInterpolator");
OrientationInterpolator2023.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator2023.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2023.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[81] = OrientationInterpolator2023;

OrientationInterpolator OrientationInterpolator2024 = createNode("OrientationInterpolator");
OrientationInterpolator2024.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator2024.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2024.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[82] = OrientationInterpolator2024;

OrientationInterpolator OrientationInterpolator2025 = createNode("OrientationInterpolator");
OrientationInterpolator2025.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator2025.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2025.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[83] = OrientationInterpolator2025;

OrientationInterpolator OrientationInterpolator2026 = createNode("OrientationInterpolator");
OrientationInterpolator2026.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator2026.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2026.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[84] = OrientationInterpolator2026;

OrientationInterpolator OrientationInterpolator2027 = createNode("OrientationInterpolator");
OrientationInterpolator2027.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator2027.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2027.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[85] = OrientationInterpolator2027;

OrientationInterpolator OrientationInterpolator2028 = createNode("OrientationInterpolator");
OrientationInterpolator2028.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator2028.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2028.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[86] = OrientationInterpolator2028;

OrientationInterpolator OrientationInterpolator2029 = createNode("OrientationInterpolator");
OrientationInterpolator2029.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator2029.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2029.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[87] = OrientationInterpolator2029;

OrientationInterpolator OrientationInterpolator2030 = createNode("OrientationInterpolator");
OrientationInterpolator2030.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator2030.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2030.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[88] = OrientationInterpolator2030;

OrientationInterpolator OrientationInterpolator2031 = createNode("OrientationInterpolator");
OrientationInterpolator2031.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator2031.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2031.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[89] = OrientationInterpolator2031;

OrientationInterpolator OrientationInterpolator2032 = createNode("OrientationInterpolator");
OrientationInterpolator2032.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator2032.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2032.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1941.children[90] = OrientationInterpolator2032;

children[13] = Group1941;

Group Group2033 = createNode("Group");
Group2033.DEF = "StandAnimation";
TimeSensor TimeSensor2034 = createNode("TimeSensor");
TimeSensor2034.DEF = "StandTimer";
TimeSensor2034.cycleInterval = 5.73;
TimeSensor2034.loop = True;
Group2033.children = new MFNode();

Group2033.children[0] = TimeSensor2034;

OrientationInterpolator OrientationInterpolator2035 = createNode("OrientationInterpolator");
OrientationInterpolator2035.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator2035.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2035.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group2033.children[1] = OrientationInterpolator2035;

OrientationInterpolator OrientationInterpolator2036 = createNode("OrientationInterpolator");
OrientationInterpolator2036.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator2036.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2036.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[2] = OrientationInterpolator2036;

OrientationInterpolator OrientationInterpolator2037 = createNode("OrientationInterpolator");
OrientationInterpolator2037.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator2037.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2037.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[3] = OrientationInterpolator2037;

OrientationInterpolator OrientationInterpolator2038 = createNode("OrientationInterpolator");
OrientationInterpolator2038.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator2038.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2038.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[4] = OrientationInterpolator2038;

OrientationInterpolator OrientationInterpolator2039 = createNode("OrientationInterpolator");
OrientationInterpolator2039.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator2039.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2039.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[5] = OrientationInterpolator2039;

OrientationInterpolator OrientationInterpolator2040 = createNode("OrientationInterpolator");
OrientationInterpolator2040.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator2040.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2040.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[6] = OrientationInterpolator2040;

OrientationInterpolator OrientationInterpolator2041 = createNode("OrientationInterpolator");
OrientationInterpolator2041.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator2041.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2041.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[7] = OrientationInterpolator2041;

OrientationInterpolator OrientationInterpolator2042 = createNode("OrientationInterpolator");
OrientationInterpolator2042.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator2042.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2042.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group2033.children[8] = OrientationInterpolator2042;

OrientationInterpolator OrientationInterpolator2043 = createNode("OrientationInterpolator");
OrientationInterpolator2043.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator2043.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2043.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[9] = OrientationInterpolator2043;

OrientationInterpolator OrientationInterpolator2044 = createNode("OrientationInterpolator");
OrientationInterpolator2044.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator2044.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2044.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[10] = OrientationInterpolator2044;

OrientationInterpolator OrientationInterpolator2045 = createNode("OrientationInterpolator");
OrientationInterpolator2045.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator2045.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2045.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[11] = OrientationInterpolator2045;

OrientationInterpolator OrientationInterpolator2046 = createNode("OrientationInterpolator");
OrientationInterpolator2046.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator2046.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2046.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[12] = OrientationInterpolator2046;

OrientationInterpolator OrientationInterpolator2047 = createNode("OrientationInterpolator");
OrientationInterpolator2047.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator2047.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2047.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[13] = OrientationInterpolator2047;

OrientationInterpolator OrientationInterpolator2048 = createNode("OrientationInterpolator");
OrientationInterpolator2048.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator2048.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2048.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[14] = OrientationInterpolator2048;

OrientationInterpolator OrientationInterpolator2049 = createNode("OrientationInterpolator");
OrientationInterpolator2049.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator2049.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2049.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group2033.children[15] = OrientationInterpolator2049;

OrientationInterpolator OrientationInterpolator2050 = createNode("OrientationInterpolator");
OrientationInterpolator2050.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator2050.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2050.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2033.children[16] = OrientationInterpolator2050;

OrientationInterpolator OrientationInterpolator2051 = createNode("OrientationInterpolator");
OrientationInterpolator2051.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator2051.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2051.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2033.children[17] = OrientationInterpolator2051;

OrientationInterpolator OrientationInterpolator2052 = createNode("OrientationInterpolator");
OrientationInterpolator2052.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator2052.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2052.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[18] = OrientationInterpolator2052;

OrientationInterpolator OrientationInterpolator2053 = createNode("OrientationInterpolator");
OrientationInterpolator2053.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator2053.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2053.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[19] = OrientationInterpolator2053;

OrientationInterpolator OrientationInterpolator2054 = createNode("OrientationInterpolator");
OrientationInterpolator2054.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator2054.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2054.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[20] = OrientationInterpolator2054;

PositionInterpolator PositionInterpolator2055 = createNode("PositionInterpolator");
PositionInterpolator2055.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator2055.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2055.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2033.children[21] = PositionInterpolator2055;

OrientationInterpolator OrientationInterpolator2056 = createNode("OrientationInterpolator");
OrientationInterpolator2056.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2056.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2056.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[22] = OrientationInterpolator2056;

OrientationInterpolator OrientationInterpolator2057 = createNode("OrientationInterpolator");
OrientationInterpolator2057.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2057.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2057.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[23] = OrientationInterpolator2057;

OrientationInterpolator OrientationInterpolator2058 = createNode("OrientationInterpolator");
OrientationInterpolator2058.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2058.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2058.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[24] = OrientationInterpolator2058;

OrientationInterpolator OrientationInterpolator2059 = createNode("OrientationInterpolator");
OrientationInterpolator2059.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2059.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2059.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[25] = OrientationInterpolator2059;

OrientationInterpolator OrientationInterpolator2060 = createNode("OrientationInterpolator");
OrientationInterpolator2060.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator2060.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2060.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[26] = OrientationInterpolator2060;

OrientationInterpolator OrientationInterpolator2061 = createNode("OrientationInterpolator");
OrientationInterpolator2061.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator2061.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2061.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[27] = OrientationInterpolator2061;

OrientationInterpolator OrientationInterpolator2062 = createNode("OrientationInterpolator");
OrientationInterpolator2062.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator2062.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2062.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group2033.children[28] = OrientationInterpolator2062;

OrientationInterpolator OrientationInterpolator2063 = createNode("OrientationInterpolator");
OrientationInterpolator2063.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator2063.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2063.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2033.children[29] = OrientationInterpolator2063;

OrientationInterpolator OrientationInterpolator2064 = createNode("OrientationInterpolator");
OrientationInterpolator2064.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator2064.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2064.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2033.children[30] = OrientationInterpolator2064;

OrientationInterpolator OrientationInterpolator2065 = createNode("OrientationInterpolator");
OrientationInterpolator2065.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator2065.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2065.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group2033.children[31] = OrientationInterpolator2065;

OrientationInterpolator OrientationInterpolator2066 = createNode("OrientationInterpolator");
OrientationInterpolator2066.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator2066.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2066.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group2033.children[32] = OrientationInterpolator2066;

OrientationInterpolator OrientationInterpolator2067 = createNode("OrientationInterpolator");
OrientationInterpolator2067.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator2067.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2067.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group2033.children[33] = OrientationInterpolator2067;

children[14] = Group2033;

Group Group2068 = createNode("Group");
Group2068.DEF = "PitchesAnimation";
TimeSensor TimeSensor2069 = createNode("TimeSensor");
TimeSensor2069.DEF = "PitchTimer";
TimeSensor2069.cycleInterval = 5.73;
TimeSensor2069.loop = True;
Group2068.children = new MFNode();

Group2068.children[0] = TimeSensor2069;

OrientationInterpolator OrientationInterpolator2070 = createNode("OrientationInterpolator");
OrientationInterpolator2070.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator2070.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2070.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2068.children[1] = OrientationInterpolator2070;

OrientationInterpolator OrientationInterpolator2071 = createNode("OrientationInterpolator");
OrientationInterpolator2071.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator2071.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2071.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2068.children[2] = OrientationInterpolator2071;

OrientationInterpolator OrientationInterpolator2072 = createNode("OrientationInterpolator");
OrientationInterpolator2072.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator2072.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2072.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[3] = OrientationInterpolator2072;

OrientationInterpolator OrientationInterpolator2073 = createNode("OrientationInterpolator");
OrientationInterpolator2073.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator2073.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2073.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2068.children[4] = OrientationInterpolator2073;

OrientationInterpolator OrientationInterpolator2074 = createNode("OrientationInterpolator");
OrientationInterpolator2074.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator2074.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2074.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2068.children[5] = OrientationInterpolator2074;

OrientationInterpolator OrientationInterpolator2075 = createNode("OrientationInterpolator");
OrientationInterpolator2075.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator2075.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2075.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[6] = OrientationInterpolator2075;

OrientationInterpolator OrientationInterpolator2076 = createNode("OrientationInterpolator");
OrientationInterpolator2076.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator2076.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2076.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2068.children[7] = OrientationInterpolator2076;

OrientationInterpolator OrientationInterpolator2077 = createNode("OrientationInterpolator");
OrientationInterpolator2077.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator2077.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2077.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[8] = OrientationInterpolator2077;

OrientationInterpolator OrientationInterpolator2078 = createNode("OrientationInterpolator");
OrientationInterpolator2078.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator2078.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2078.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[9] = OrientationInterpolator2078;

OrientationInterpolator OrientationInterpolator2079 = createNode("OrientationInterpolator");
OrientationInterpolator2079.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator2079.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2079.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2068.children[10] = OrientationInterpolator2079;

OrientationInterpolator OrientationInterpolator2080 = createNode("OrientationInterpolator");
OrientationInterpolator2080.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator2080.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2080.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[11] = OrientationInterpolator2080;

OrientationInterpolator OrientationInterpolator2081 = createNode("OrientationInterpolator");
OrientationInterpolator2081.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator2081.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2081.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[12] = OrientationInterpolator2081;

OrientationInterpolator OrientationInterpolator2082 = createNode("OrientationInterpolator");
OrientationInterpolator2082.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator2082.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2082.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2068.children[13] = OrientationInterpolator2082;

OrientationInterpolator OrientationInterpolator2083 = createNode("OrientationInterpolator");
OrientationInterpolator2083.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator2083.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2083.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[14] = OrientationInterpolator2083;

OrientationInterpolator OrientationInterpolator2084 = createNode("OrientationInterpolator");
OrientationInterpolator2084.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator2084.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2084.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group2068.children[15] = OrientationInterpolator2084;

OrientationInterpolator OrientationInterpolator2085 = createNode("OrientationInterpolator");
OrientationInterpolator2085.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator2085.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2085.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[16] = OrientationInterpolator2085;

OrientationInterpolator OrientationInterpolator2086 = createNode("OrientationInterpolator");
OrientationInterpolator2086.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator2086.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2086.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[17] = OrientationInterpolator2086;

OrientationInterpolator OrientationInterpolator2087 = createNode("OrientationInterpolator");
OrientationInterpolator2087.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator2087.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2087.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[18] = OrientationInterpolator2087;

PositionInterpolator PositionInterpolator2088 = createNode("PositionInterpolator");
PositionInterpolator2088.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator2088.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2088.keyValue = new MFVec3f(new float[0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group2068.children[19] = PositionInterpolator2088;

OrientationInterpolator OrientationInterpolator2089 = createNode("OrientationInterpolator");
OrientationInterpolator2089.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2089.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2089.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[20] = OrientationInterpolator2089;

OrientationInterpolator OrientationInterpolator2090 = createNode("OrientationInterpolator");
OrientationInterpolator2090.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2090.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2090.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[21] = OrientationInterpolator2090;

OrientationInterpolator OrientationInterpolator2091 = createNode("OrientationInterpolator");
OrientationInterpolator2091.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2091.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2091.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[22] = OrientationInterpolator2091;

OrientationInterpolator OrientationInterpolator2092 = createNode("OrientationInterpolator");
OrientationInterpolator2092.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2092.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2092.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[23] = OrientationInterpolator2092;

OrientationInterpolator OrientationInterpolator2093 = createNode("OrientationInterpolator");
OrientationInterpolator2093.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator2093.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2093.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[24] = OrientationInterpolator2093;

OrientationInterpolator OrientationInterpolator2094 = createNode("OrientationInterpolator");
OrientationInterpolator2094.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator2094.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2094.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[25] = OrientationInterpolator2094;

OrientationInterpolator OrientationInterpolator2095 = createNode("OrientationInterpolator");
OrientationInterpolator2095.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator2095.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2095.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2068.children[26] = OrientationInterpolator2095;

OrientationInterpolator OrientationInterpolator2096 = createNode("OrientationInterpolator");
OrientationInterpolator2096.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator2096.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2096.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2068.children[27] = OrientationInterpolator2096;

OrientationInterpolator OrientationInterpolator2097 = createNode("OrientationInterpolator");
OrientationInterpolator2097.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator2097.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2097.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2068.children[28] = OrientationInterpolator2097;

children[15] = Group2068;

Group Group2098 = createNode("Group");
Group2098.DEF = "YawsAnimation";
TimeSensor TimeSensor2099 = createNode("TimeSensor");
TimeSensor2099.DEF = "YawTimer";
TimeSensor2099.cycleInterval = 5.73;
TimeSensor2099.loop = True;
Group2098.children = new MFNode();

Group2098.children[0] = TimeSensor2099;

OrientationInterpolator OrientationInterpolator2100 = createNode("OrientationInterpolator");
OrientationInterpolator2100.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator2100.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2100.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[1] = OrientationInterpolator2100;

OrientationInterpolator OrientationInterpolator2101 = createNode("OrientationInterpolator");
OrientationInterpolator2101.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator2101.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2101.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2098.children[2] = OrientationInterpolator2101;

OrientationInterpolator OrientationInterpolator2102 = createNode("OrientationInterpolator");
OrientationInterpolator2102.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator2102.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2102.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2098.children[3] = OrientationInterpolator2102;

OrientationInterpolator OrientationInterpolator2103 = createNode("OrientationInterpolator");
OrientationInterpolator2103.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator2103.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2103.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[4] = OrientationInterpolator2103;

OrientationInterpolator OrientationInterpolator2104 = createNode("OrientationInterpolator");
OrientationInterpolator2104.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator2104.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2104.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2098.children[5] = OrientationInterpolator2104;

OrientationInterpolator OrientationInterpolator2105 = createNode("OrientationInterpolator");
OrientationInterpolator2105.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator2105.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2105.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2098.children[6] = OrientationInterpolator2105;

OrientationInterpolator OrientationInterpolator2106 = createNode("OrientationInterpolator");
OrientationInterpolator2106.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator2106.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2106.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[7] = OrientationInterpolator2106;

OrientationInterpolator OrientationInterpolator2107 = createNode("OrientationInterpolator");
OrientationInterpolator2107.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator2107.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2107.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[8] = OrientationInterpolator2107;

OrientationInterpolator OrientationInterpolator2108 = createNode("OrientationInterpolator");
OrientationInterpolator2108.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator2108.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2108.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[9] = OrientationInterpolator2108;

OrientationInterpolator OrientationInterpolator2109 = createNode("OrientationInterpolator");
OrientationInterpolator2109.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator2109.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2109.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[10] = OrientationInterpolator2109;

OrientationInterpolator OrientationInterpolator2110 = createNode("OrientationInterpolator");
OrientationInterpolator2110.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator2110.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2110.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[11] = OrientationInterpolator2110;

OrientationInterpolator OrientationInterpolator2111 = createNode("OrientationInterpolator");
OrientationInterpolator2111.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator2111.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2111.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[12] = OrientationInterpolator2111;

OrientationInterpolator OrientationInterpolator2112 = createNode("OrientationInterpolator");
OrientationInterpolator2112.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator2112.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2112.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[13] = OrientationInterpolator2112;

OrientationInterpolator OrientationInterpolator2113 = createNode("OrientationInterpolator");
OrientationInterpolator2113.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator2113.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2113.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[14] = OrientationInterpolator2113;

OrientationInterpolator OrientationInterpolator2114 = createNode("OrientationInterpolator");
OrientationInterpolator2114.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator2114.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2114.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2098.children[15] = OrientationInterpolator2114;

OrientationInterpolator OrientationInterpolator2115 = createNode("OrientationInterpolator");
OrientationInterpolator2115.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator2115.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2115.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2098.children[16] = OrientationInterpolator2115;

OrientationInterpolator OrientationInterpolator2116 = createNode("OrientationInterpolator");
OrientationInterpolator2116.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator2116.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2116.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[17] = OrientationInterpolator2116;

OrientationInterpolator OrientationInterpolator2117 = createNode("OrientationInterpolator");
OrientationInterpolator2117.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator2117.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2117.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[18] = OrientationInterpolator2117;

PositionInterpolator PositionInterpolator2118 = createNode("PositionInterpolator");
PositionInterpolator2118.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator2118.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2118.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2098.children[19] = PositionInterpolator2118;

OrientationInterpolator OrientationInterpolator2119 = createNode("OrientationInterpolator");
OrientationInterpolator2119.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2119.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2119.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[20] = OrientationInterpolator2119;

OrientationInterpolator OrientationInterpolator2120 = createNode("OrientationInterpolator");
OrientationInterpolator2120.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2120.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2120.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[21] = OrientationInterpolator2120;

OrientationInterpolator OrientationInterpolator2121 = createNode("OrientationInterpolator");
OrientationInterpolator2121.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2121.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2121.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[22] = OrientationInterpolator2121;

OrientationInterpolator OrientationInterpolator2122 = createNode("OrientationInterpolator");
OrientationInterpolator2122.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2122.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2122.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[23] = OrientationInterpolator2122;

OrientationInterpolator OrientationInterpolator2123 = createNode("OrientationInterpolator");
OrientationInterpolator2123.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator2123.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2123.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group2098.children[24] = OrientationInterpolator2123;

OrientationInterpolator OrientationInterpolator2124 = createNode("OrientationInterpolator");
OrientationInterpolator2124.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator2124.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2124.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[25] = OrientationInterpolator2124;

OrientationInterpolator OrientationInterpolator2125 = createNode("OrientationInterpolator");
OrientationInterpolator2125.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator2125.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2125.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[26] = OrientationInterpolator2125;

OrientationInterpolator OrientationInterpolator2126 = createNode("OrientationInterpolator");
OrientationInterpolator2126.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator2126.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2126.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[27] = OrientationInterpolator2126;

OrientationInterpolator OrientationInterpolator2127 = createNode("OrientationInterpolator");
OrientationInterpolator2127.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator2127.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2127.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2098.children[28] = OrientationInterpolator2127;

children[16] = Group2098;

Group Group2128 = createNode("Group");
Group2128.DEF = "RollsAnimation";
TimeSensor TimeSensor2129 = createNode("TimeSensor");
TimeSensor2129.DEF = "RollTimer";
TimeSensor2129.cycleInterval = 5.73;
TimeSensor2129.loop = True;
Group2128.children = new MFNode();

Group2128.children[0] = TimeSensor2129;

OrientationInterpolator OrientationInterpolator2130 = createNode("OrientationInterpolator");
OrientationInterpolator2130.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator2130.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2130.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[1] = OrientationInterpolator2130;

OrientationInterpolator OrientationInterpolator2131 = createNode("OrientationInterpolator");
OrientationInterpolator2131.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator2131.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2131.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2128.children[2] = OrientationInterpolator2131;

OrientationInterpolator OrientationInterpolator2132 = createNode("OrientationInterpolator");
OrientationInterpolator2132.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator2132.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2132.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[3] = OrientationInterpolator2132;

OrientationInterpolator OrientationInterpolator2133 = createNode("OrientationInterpolator");
OrientationInterpolator2133.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator2133.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2133.keyValue = new MFRotation(new float[0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2128.children[4] = OrientationInterpolator2133;

OrientationInterpolator OrientationInterpolator2134 = createNode("OrientationInterpolator");
OrientationInterpolator2134.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator2134.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2134.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2128.children[5] = OrientationInterpolator2134;

OrientationInterpolator OrientationInterpolator2135 = createNode("OrientationInterpolator");
OrientationInterpolator2135.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator2135.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2135.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[6] = OrientationInterpolator2135;

OrientationInterpolator OrientationInterpolator2136 = createNode("OrientationInterpolator");
OrientationInterpolator2136.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator2136.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2136.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2128.children[7] = OrientationInterpolator2136;

OrientationInterpolator OrientationInterpolator2137 = createNode("OrientationInterpolator");
OrientationInterpolator2137.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator2137.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2137.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2128.children[8] = OrientationInterpolator2137;

OrientationInterpolator OrientationInterpolator2138 = createNode("OrientationInterpolator");
OrientationInterpolator2138.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator2138.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2138.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[9] = OrientationInterpolator2138;

OrientationInterpolator OrientationInterpolator2139 = createNode("OrientationInterpolator");
OrientationInterpolator2139.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator2139.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2139.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group2128.children[10] = OrientationInterpolator2139;

OrientationInterpolator OrientationInterpolator2140 = createNode("OrientationInterpolator");
OrientationInterpolator2140.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator2140.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2140.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2128.children[11] = OrientationInterpolator2140;

OrientationInterpolator OrientationInterpolator2141 = createNode("OrientationInterpolator");
OrientationInterpolator2141.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator2141.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2141.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[12] = OrientationInterpolator2141;

OrientationInterpolator OrientationInterpolator2142 = createNode("OrientationInterpolator");
OrientationInterpolator2142.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator2142.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2142.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group2128.children[13] = OrientationInterpolator2142;

OrientationInterpolator OrientationInterpolator2143 = createNode("OrientationInterpolator");
OrientationInterpolator2143.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator2143.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2143.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[14] = OrientationInterpolator2143;

OrientationInterpolator OrientationInterpolator2144 = createNode("OrientationInterpolator");
OrientationInterpolator2144.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator2144.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2144.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group2128.children[15] = OrientationInterpolator2144;

OrientationInterpolator OrientationInterpolator2145 = createNode("OrientationInterpolator");
OrientationInterpolator2145.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator2145.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2145.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[16] = OrientationInterpolator2145;

OrientationInterpolator OrientationInterpolator2146 = createNode("OrientationInterpolator");
OrientationInterpolator2146.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator2146.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2146.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[17] = OrientationInterpolator2146;

OrientationInterpolator OrientationInterpolator2147 = createNode("OrientationInterpolator");
OrientationInterpolator2147.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator2147.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2147.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[18] = OrientationInterpolator2147;

PositionInterpolator PositionInterpolator2148 = createNode("PositionInterpolator");
PositionInterpolator2148.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator2148.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2148.keyValue = new MFVec3f(new float[0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group2128.children[19] = PositionInterpolator2148;

OrientationInterpolator OrientationInterpolator2149 = createNode("OrientationInterpolator");
OrientationInterpolator2149.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2149.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2149.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2128.children[20] = OrientationInterpolator2149;

OrientationInterpolator OrientationInterpolator2150 = createNode("OrientationInterpolator");
OrientationInterpolator2150.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2150.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2150.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[21] = OrientationInterpolator2150;

OrientationInterpolator OrientationInterpolator2151 = createNode("OrientationInterpolator");
OrientationInterpolator2151.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2151.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2151.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2128.children[22] = OrientationInterpolator2151;

OrientationInterpolator OrientationInterpolator2152 = createNode("OrientationInterpolator");
OrientationInterpolator2152.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2152.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2152.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[23] = OrientationInterpolator2152;

OrientationInterpolator OrientationInterpolator2153 = createNode("OrientationInterpolator");
OrientationInterpolator2153.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator2153.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2153.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[24] = OrientationInterpolator2153;

OrientationInterpolator OrientationInterpolator2154 = createNode("OrientationInterpolator");
OrientationInterpolator2154.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator2154.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2154.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[25] = OrientationInterpolator2154;

OrientationInterpolator OrientationInterpolator2155 = createNode("OrientationInterpolator");
OrientationInterpolator2155.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator2155.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2155.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[26] = OrientationInterpolator2155;

OrientationInterpolator OrientationInterpolator2156 = createNode("OrientationInterpolator");
OrientationInterpolator2156.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator2156.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2156.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[27] = OrientationInterpolator2156;

OrientationInterpolator OrientationInterpolator2157 = createNode("OrientationInterpolator");
OrientationInterpolator2157.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator2157.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2157.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2128.children[28] = OrientationInterpolator2157;

children[17] = Group2128;

Group Group2158 = createNode("Group");
Group2158.DEF = "WalkAnimation";
TimeSensor TimeSensor2159 = createNode("TimeSensor");
TimeSensor2159.DEF = "WalkTimer";
TimeSensor2159.cycleInterval = 1.73;
TimeSensor2159.loop = True;
Group2158.children = new MFNode();

Group2158.children[0] = TimeSensor2159;

OrientationInterpolator OrientationInterpolator2160 = createNode("OrientationInterpolator");
OrientationInterpolator2160.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator2160.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2160.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158.children[1] = OrientationInterpolator2160;

OrientationInterpolator OrientationInterpolator2161 = createNode("OrientationInterpolator");
OrientationInterpolator2161.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator2161.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator2161.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group2158.children[2] = OrientationInterpolator2161;

OrientationInterpolator OrientationInterpolator2162 = createNode("OrientationInterpolator");
OrientationInterpolator2162.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator2162.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2162.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group2158.children[3] = OrientationInterpolator2162;

OrientationInterpolator OrientationInterpolator2163 = createNode("OrientationInterpolator");
OrientationInterpolator2163.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator2163.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2163.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group2158.children[4] = OrientationInterpolator2163;

OrientationInterpolator OrientationInterpolator2164 = createNode("OrientationInterpolator");
OrientationInterpolator2164.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator2164.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator2164.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group2158.children[5] = OrientationInterpolator2164;

OrientationInterpolator OrientationInterpolator2165 = createNode("OrientationInterpolator");
OrientationInterpolator2165.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator2165.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2165.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group2158.children[6] = OrientationInterpolator2165;

OrientationInterpolator OrientationInterpolator2166 = createNode("OrientationInterpolator");
OrientationInterpolator2166.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator2166.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2166.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group2158.children[7] = OrientationInterpolator2166;

OrientationInterpolator OrientationInterpolator2167 = createNode("OrientationInterpolator");
OrientationInterpolator2167.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator2167.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2167.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group2158.children[8] = OrientationInterpolator2167;

OrientationInterpolator OrientationInterpolator2168 = createNode("OrientationInterpolator");
OrientationInterpolator2168.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator2168.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2168.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group2158.children[9] = OrientationInterpolator2168;

OrientationInterpolator OrientationInterpolator2169 = createNode("OrientationInterpolator");
OrientationInterpolator2169.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator2169.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2169.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group2158.children[10] = OrientationInterpolator2169;

OrientationInterpolator OrientationInterpolator2170 = createNode("OrientationInterpolator");
OrientationInterpolator2170.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator2170.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2170.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group2158.children[11] = OrientationInterpolator2170;

OrientationInterpolator OrientationInterpolator2171 = createNode("OrientationInterpolator");
OrientationInterpolator2171.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator2171.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2171.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group2158.children[12] = OrientationInterpolator2171;

OrientationInterpolator OrientationInterpolator2172 = createNode("OrientationInterpolator");
OrientationInterpolator2172.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator2172.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2172.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group2158.children[13] = OrientationInterpolator2172;

OrientationInterpolator OrientationInterpolator2173 = createNode("OrientationInterpolator");
OrientationInterpolator2173.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator2173.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2173.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group2158.children[14] = OrientationInterpolator2173;

OrientationInterpolator OrientationInterpolator2174 = createNode("OrientationInterpolator");
OrientationInterpolator2174.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator2174.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator2174.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group2158.children[15] = OrientationInterpolator2174;

OrientationInterpolator OrientationInterpolator2175 = createNode("OrientationInterpolator");
OrientationInterpolator2175.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator2175.key = new MFFloat(new float[0,1]);
OrientationInterpolator2175.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2158.children[16] = OrientationInterpolator2175;

OrientationInterpolator OrientationInterpolator2176 = createNode("OrientationInterpolator");
OrientationInterpolator2176.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator2176.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator2176.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group2158.children[17] = OrientationInterpolator2176;

OrientationInterpolator OrientationInterpolator2177 = createNode("OrientationInterpolator");
OrientationInterpolator2177.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator2177.key = new MFFloat(new float[0,1]);
OrientationInterpolator2177.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2158.children[18] = OrientationInterpolator2177;

PositionInterpolator PositionInterpolator2178 = createNode("PositionInterpolator");
PositionInterpolator2178.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator2178.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator2178.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group2158.children[19] = PositionInterpolator2178;

OrientationInterpolator OrientationInterpolator2179 = createNode("OrientationInterpolator");
OrientationInterpolator2179.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2179.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2179.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158.children[20] = OrientationInterpolator2179;

OrientationInterpolator OrientationInterpolator2180 = createNode("OrientationInterpolator");
OrientationInterpolator2180.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2180.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2180.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158.children[21] = OrientationInterpolator2180;

OrientationInterpolator OrientationInterpolator2181 = createNode("OrientationInterpolator");
OrientationInterpolator2181.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2181.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2181.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158.children[22] = OrientationInterpolator2181;

OrientationInterpolator OrientationInterpolator2182 = createNode("OrientationInterpolator");
OrientationInterpolator2182.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2182.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2182.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158.children[23] = OrientationInterpolator2182;

OrientationInterpolator OrientationInterpolator2183 = createNode("OrientationInterpolator");
OrientationInterpolator2183.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator2183.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2183.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158.children[24] = OrientationInterpolator2183;

OrientationInterpolator OrientationInterpolator2184 = createNode("OrientationInterpolator");
OrientationInterpolator2184.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator2184.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2184.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158.children[25] = OrientationInterpolator2184;

OrientationInterpolator OrientationInterpolator2185 = createNode("OrientationInterpolator");
OrientationInterpolator2185.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator2185.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2185.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2158.children[26] = OrientationInterpolator2185;

OrientationInterpolator OrientationInterpolator2186 = createNode("OrientationInterpolator");
OrientationInterpolator2186.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator2186.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2186.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2158.children[27] = OrientationInterpolator2186;

OrientationInterpolator OrientationInterpolator2187 = createNode("OrientationInterpolator");
OrientationInterpolator2187.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator2187.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2187.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2158.children[28] = OrientationInterpolator2187;

children[18] = Group2158;

Group Group2188 = createNode("Group");
Group2188.DEF = "RunAnimation";
TimeSensor TimeSensor2189 = createNode("TimeSensor");
TimeSensor2189.DEF = "RunTimer";
TimeSensor2189.cycleInterval = 0.9;
TimeSensor2189.loop = True;
Group2188.children = new MFNode();

Group2188.children[0] = TimeSensor2189;

OrientationInterpolator OrientationInterpolator2190 = createNode("OrientationInterpolator");
OrientationInterpolator2190.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator2190.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2190.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188.children[1] = OrientationInterpolator2190;

OrientationInterpolator OrientationInterpolator2191 = createNode("OrientationInterpolator");
OrientationInterpolator2191.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator2191.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2191.keyValue = new MFRotation(new float[-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group2188.children[2] = OrientationInterpolator2191;

OrientationInterpolator OrientationInterpolator2192 = createNode("OrientationInterpolator");
OrientationInterpolator2192.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator2192.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2192.keyValue = new MFRotation(new float[1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group2188.children[3] = OrientationInterpolator2192;

OrientationInterpolator OrientationInterpolator2193 = createNode("OrientationInterpolator");
OrientationInterpolator2193.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator2193.key = new MFFloat(new float[0,0.22,0.3,0.4,1]);
OrientationInterpolator2193.keyValue = new MFRotation(new float[1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group2188.children[4] = OrientationInterpolator2193;

OrientationInterpolator OrientationInterpolator2194 = createNode("OrientationInterpolator");
OrientationInterpolator2194.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator2194.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2194.keyValue = new MFRotation(new float[0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group2188.children[5] = OrientationInterpolator2194;

OrientationInterpolator OrientationInterpolator2195 = createNode("OrientationInterpolator");
OrientationInterpolator2195.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator2195.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2195.keyValue = new MFRotation(new float[1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group2188.children[6] = OrientationInterpolator2195;

OrientationInterpolator OrientationInterpolator2196 = createNode("OrientationInterpolator");
OrientationInterpolator2196.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator2196.key = new MFFloat(new float[0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator2196.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group2188.children[7] = OrientationInterpolator2196;

OrientationInterpolator OrientationInterpolator2197 = createNode("OrientationInterpolator");
OrientationInterpolator2197.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator2197.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2197.keyValue = new MFRotation(new float[0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group2188.children[8] = OrientationInterpolator2197;

OrientationInterpolator OrientationInterpolator2198 = createNode("OrientationInterpolator");
OrientationInterpolator2198.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator2198.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2198.keyValue = new MFRotation(new float[-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group2188.children[9] = OrientationInterpolator2198;

OrientationInterpolator OrientationInterpolator2199 = createNode("OrientationInterpolator");
OrientationInterpolator2199.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator2199.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2199.keyValue = new MFRotation(new float[-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group2188.children[10] = OrientationInterpolator2199;

OrientationInterpolator OrientationInterpolator2200 = createNode("OrientationInterpolator");
OrientationInterpolator2200.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator2200.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2200.keyValue = new MFRotation(new float[-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group2188.children[11] = OrientationInterpolator2200;

OrientationInterpolator OrientationInterpolator2201 = createNode("OrientationInterpolator");
OrientationInterpolator2201.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator2201.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2201.keyValue = new MFRotation(new float[-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group2188.children[12] = OrientationInterpolator2201;

OrientationInterpolator OrientationInterpolator2202 = createNode("OrientationInterpolator");
OrientationInterpolator2202.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator2202.key = new MFFloat(new float[0,1]);
OrientationInterpolator2202.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group2188.children[13] = OrientationInterpolator2202;

OrientationInterpolator OrientationInterpolator2203 = createNode("OrientationInterpolator");
OrientationInterpolator2203.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator2203.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2203.keyValue = new MFRotation(new float[0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group2188.children[14] = OrientationInterpolator2203;

OrientationInterpolator OrientationInterpolator2204 = createNode("OrientationInterpolator");
OrientationInterpolator2204.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator2204.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2204.keyValue = new MFRotation(new float[1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group2188.children[15] = OrientationInterpolator2204;

OrientationInterpolator OrientationInterpolator2205 = createNode("OrientationInterpolator");
OrientationInterpolator2205.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator2205.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2205.keyValue = new MFRotation(new float[0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group2188.children[16] = OrientationInterpolator2205;

OrientationInterpolator OrientationInterpolator2206 = createNode("OrientationInterpolator");
OrientationInterpolator2206.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator2206.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator2206.keyValue = new MFRotation(new float[0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group2188.children[17] = OrientationInterpolator2206;

OrientationInterpolator OrientationInterpolator2207 = createNode("OrientationInterpolator");
OrientationInterpolator2207.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator2207.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2207.keyValue = new MFRotation(new float[1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group2188.children[18] = OrientationInterpolator2207;

PositionInterpolator PositionInterpolator2208 = createNode("PositionInterpolator");
PositionInterpolator2208.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator2208.key = new MFFloat(new float[0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator2208.keyValue = new MFVec3f(new float[0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group2188.children[19] = PositionInterpolator2208;

OrientationInterpolator OrientationInterpolator2209 = createNode("OrientationInterpolator");
OrientationInterpolator2209.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2209.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2209.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188.children[20] = OrientationInterpolator2209;

OrientationInterpolator OrientationInterpolator2210 = createNode("OrientationInterpolator");
OrientationInterpolator2210.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2210.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2210.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188.children[21] = OrientationInterpolator2210;

OrientationInterpolator OrientationInterpolator2211 = createNode("OrientationInterpolator");
OrientationInterpolator2211.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2211.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2211.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188.children[22] = OrientationInterpolator2211;

OrientationInterpolator OrientationInterpolator2212 = createNode("OrientationInterpolator");
OrientationInterpolator2212.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2212.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2212.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188.children[23] = OrientationInterpolator2212;

OrientationInterpolator OrientationInterpolator2213 = createNode("OrientationInterpolator");
OrientationInterpolator2213.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator2213.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2213.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188.children[24] = OrientationInterpolator2213;

OrientationInterpolator OrientationInterpolator2214 = createNode("OrientationInterpolator");
OrientationInterpolator2214.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator2214.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2214.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188.children[25] = OrientationInterpolator2214;

OrientationInterpolator OrientationInterpolator2215 = createNode("OrientationInterpolator");
OrientationInterpolator2215.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator2215.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2215.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2188.children[26] = OrientationInterpolator2215;

OrientationInterpolator OrientationInterpolator2216 = createNode("OrientationInterpolator");
OrientationInterpolator2216.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator2216.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2216.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2188.children[27] = OrientationInterpolator2216;

OrientationInterpolator OrientationInterpolator2217 = createNode("OrientationInterpolator");
OrientationInterpolator2217.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator2217.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2217.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2188.children[28] = OrientationInterpolator2217;

children[19] = Group2188;

Group Group2218 = createNode("Group");
Group2218.DEF = "JumpAnimation";
TimeSensor TimeSensor2219 = createNode("TimeSensor");
TimeSensor2219.DEF = "JumpTimer";
TimeSensor2219.cycleInterval = 3.73;
TimeSensor2219.loop = True;
Group2218.children = new MFNode();

Group2218.children[0] = TimeSensor2219;

OrientationInterpolator OrientationInterpolator2220 = createNode("OrientationInterpolator");
OrientationInterpolator2220.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator2220.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2220.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2218.children[1] = OrientationInterpolator2220;

OrientationInterpolator OrientationInterpolator2221 = createNode("OrientationInterpolator");
OrientationInterpolator2221.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator2221.key = new MFFloat(new float[0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2221.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group2218.children[2] = OrientationInterpolator2221;

OrientationInterpolator OrientationInterpolator2222 = createNode("OrientationInterpolator");
OrientationInterpolator2222.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator2222.key = new MFFloat(new float[0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator2222.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group2218.children[3] = OrientationInterpolator2222;

OrientationInterpolator OrientationInterpolator2223 = createNode("OrientationInterpolator");
OrientationInterpolator2223.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator2223.key = new MFFloat(new float[0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2223.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group2218.children[4] = OrientationInterpolator2223;

OrientationInterpolator OrientationInterpolator2224 = createNode("OrientationInterpolator");
OrientationInterpolator2224.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator2224.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2224.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group2218.children[5] = OrientationInterpolator2224;

OrientationInterpolator OrientationInterpolator2225 = createNode("OrientationInterpolator");
OrientationInterpolator2225.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator2225.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2225.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group2218.children[6] = OrientationInterpolator2225;

OrientationInterpolator OrientationInterpolator2226 = createNode("OrientationInterpolator");
OrientationInterpolator2226.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator2226.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2226.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group2218.children[7] = OrientationInterpolator2226;

OrientationInterpolator OrientationInterpolator2227 = createNode("OrientationInterpolator");
OrientationInterpolator2227.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator2227.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2227.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2218.children[8] = OrientationInterpolator2227;

OrientationInterpolator OrientationInterpolator2228 = createNode("OrientationInterpolator");
OrientationInterpolator2228.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator2228.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2228.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group2218.children[9] = OrientationInterpolator2228;

OrientationInterpolator OrientationInterpolator2229 = createNode("OrientationInterpolator");
OrientationInterpolator2229.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator2229.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2229.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group2218.children[10] = OrientationInterpolator2229;

OrientationInterpolator OrientationInterpolator2230 = createNode("OrientationInterpolator");
OrientationInterpolator2230.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator2230.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2230.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group2218.children[11] = OrientationInterpolator2230;

OrientationInterpolator OrientationInterpolator2231 = createNode("OrientationInterpolator");
OrientationInterpolator2231.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator2231.key = new MFFloat(new float[0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator2231.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group2218.children[12] = OrientationInterpolator2231;

OrientationInterpolator OrientationInterpolator2232 = createNode("OrientationInterpolator");
OrientationInterpolator2232.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator2232.key = new MFFloat(new float[0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator2232.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group2218.children[13] = OrientationInterpolator2232;

OrientationInterpolator OrientationInterpolator2233 = createNode("OrientationInterpolator");
OrientationInterpolator2233.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator2233.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2233.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group2218.children[14] = OrientationInterpolator2233;

OrientationInterpolator OrientationInterpolator2234 = createNode("OrientationInterpolator");
OrientationInterpolator2234.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator2234.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2234.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group2218.children[15] = OrientationInterpolator2234;

OrientationInterpolator OrientationInterpolator2235 = createNode("OrientationInterpolator");
OrientationInterpolator2235.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator2235.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2235.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group2218.children[16] = OrientationInterpolator2235;

OrientationInterpolator OrientationInterpolator2236 = createNode("OrientationInterpolator");
OrientationInterpolator2236.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator2236.key = new MFFloat(new float[0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator2236.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group2218.children[17] = OrientationInterpolator2236;

OrientationInterpolator OrientationInterpolator2237 = createNode("OrientationInterpolator");
OrientationInterpolator2237.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator2237.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator2237.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2218.children[18] = OrientationInterpolator2237;

PositionInterpolator PositionInterpolator2238 = createNode("PositionInterpolator");
PositionInterpolator2238.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator2238.key = new MFFloat(new float[0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator2238.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group2218.children[19] = PositionInterpolator2238;

OrientationInterpolator OrientationInterpolator2239 = createNode("OrientationInterpolator");
OrientationInterpolator2239.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2239.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2239.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2218.children[20] = OrientationInterpolator2239;

OrientationInterpolator OrientationInterpolator2240 = createNode("OrientationInterpolator");
OrientationInterpolator2240.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2240.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2240.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2218.children[21] = OrientationInterpolator2240;

OrientationInterpolator OrientationInterpolator2241 = createNode("OrientationInterpolator");
OrientationInterpolator2241.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2241.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2241.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2218.children[22] = OrientationInterpolator2241;

OrientationInterpolator OrientationInterpolator2242 = createNode("OrientationInterpolator");
OrientationInterpolator2242.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2242.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2218.children[23] = OrientationInterpolator2242;

OrientationInterpolator OrientationInterpolator2243 = createNode("OrientationInterpolator");
OrientationInterpolator2243.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator2243.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2243.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2218.children[24] = OrientationInterpolator2243;

OrientationInterpolator OrientationInterpolator2244 = createNode("OrientationInterpolator");
OrientationInterpolator2244.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator2244.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2244.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group2218.children[25] = OrientationInterpolator2244;

OrientationInterpolator OrientationInterpolator2245 = createNode("OrientationInterpolator");
OrientationInterpolator2245.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator2245.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2245.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group2218.children[26] = OrientationInterpolator2245;

OrientationInterpolator OrientationInterpolator2246 = createNode("OrientationInterpolator");
OrientationInterpolator2246.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator2246.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2246.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2218.children[27] = OrientationInterpolator2246;

OrientationInterpolator OrientationInterpolator2247 = createNode("OrientationInterpolator");
OrientationInterpolator2247.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator2247.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2247.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2218.children[28] = OrientationInterpolator2247;

children[20] = Group2218;

Group Group2248 = createNode("Group");
Group2248.DEF = "KickAnimation";
TimeSensor TimeSensor2249 = createNode("TimeSensor");
TimeSensor2249.DEF = "KickTimer";
TimeSensor2249.cycleInterval = 3.73;
TimeSensor2249.loop = True;
Group2248.children = new MFNode();

Group2248.children[0] = TimeSensor2249;

OrientationInterpolator OrientationInterpolator2250 = createNode("OrientationInterpolator");
OrientationInterpolator2250.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2250.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2250.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2248.children[1] = OrientationInterpolator2250;

OrientationInterpolator OrientationInterpolator2251 = createNode("OrientationInterpolator");
OrientationInterpolator2251.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2251.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2251.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[2] = OrientationInterpolator2251;

OrientationInterpolator OrientationInterpolator2252 = createNode("OrientationInterpolator");
OrientationInterpolator2252.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator2252.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2252.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group2248.children[3] = OrientationInterpolator2252;

OrientationInterpolator OrientationInterpolator2253 = createNode("OrientationInterpolator");
OrientationInterpolator2253.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator2253.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2253.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2248.children[4] = OrientationInterpolator2253;

OrientationInterpolator OrientationInterpolator2254 = createNode("OrientationInterpolator");
OrientationInterpolator2254.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator2254.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2254.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[5] = OrientationInterpolator2254;

OrientationInterpolator OrientationInterpolator2255 = createNode("OrientationInterpolator");
OrientationInterpolator2255.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator2255.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2255.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2248.children[6] = OrientationInterpolator2255;

OrientationInterpolator OrientationInterpolator2256 = createNode("OrientationInterpolator");
OrientationInterpolator2256.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2256.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2256.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2248.children[7] = OrientationInterpolator2256;

OrientationInterpolator OrientationInterpolator2257 = createNode("OrientationInterpolator");
OrientationInterpolator2257.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2257.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2257.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[8] = OrientationInterpolator2257;

OrientationInterpolator OrientationInterpolator2258 = createNode("OrientationInterpolator");
OrientationInterpolator2258.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator2258.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2258.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group2248.children[9] = OrientationInterpolator2258;

OrientationInterpolator OrientationInterpolator2259 = createNode("OrientationInterpolator");
OrientationInterpolator2259.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator2259.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2259.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2248.children[10] = OrientationInterpolator2259;

OrientationInterpolator OrientationInterpolator2260 = createNode("OrientationInterpolator");
OrientationInterpolator2260.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator2260.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2260.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[11] = OrientationInterpolator2260;

OrientationInterpolator OrientationInterpolator2261 = createNode("OrientationInterpolator");
OrientationInterpolator2261.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator2261.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2261.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2248.children[12] = OrientationInterpolator2261;

OrientationInterpolator OrientationInterpolator2262 = createNode("OrientationInterpolator");
OrientationInterpolator2262.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator2262.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2262.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group2248.children[13] = OrientationInterpolator2262;

OrientationInterpolator OrientationInterpolator2263 = createNode("OrientationInterpolator");
OrientationInterpolator2263.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator2263.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2263.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group2248.children[14] = OrientationInterpolator2263;

OrientationInterpolator OrientationInterpolator2264 = createNode("OrientationInterpolator");
OrientationInterpolator2264.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator2264.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2264.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[15] = OrientationInterpolator2264;

OrientationInterpolator OrientationInterpolator2265 = createNode("OrientationInterpolator");
OrientationInterpolator2265.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator2265.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2265.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[16] = OrientationInterpolator2265;

OrientationInterpolator OrientationInterpolator2266 = createNode("OrientationInterpolator");
OrientationInterpolator2266.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator2266.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2266.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group2248.children[17] = OrientationInterpolator2266;

OrientationInterpolator OrientationInterpolator2267 = createNode("OrientationInterpolator");
OrientationInterpolator2267.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator2267.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2267.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2248.children[18] = OrientationInterpolator2267;

OrientationInterpolator OrientationInterpolator2268 = createNode("OrientationInterpolator");
OrientationInterpolator2268.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator2268.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2268.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2248.children[19] = OrientationInterpolator2268;

OrientationInterpolator OrientationInterpolator2269 = createNode("OrientationInterpolator");
OrientationInterpolator2269.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator2269.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2269.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[20] = OrientationInterpolator2269;

OrientationInterpolator OrientationInterpolator2270 = createNode("OrientationInterpolator");
OrientationInterpolator2270.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator2270.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2270.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[21] = OrientationInterpolator2270;

OrientationInterpolator OrientationInterpolator2271 = createNode("OrientationInterpolator");
OrientationInterpolator2271.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator2271.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2271.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[22] = OrientationInterpolator2271;

OrientationInterpolator OrientationInterpolator2272 = createNode("OrientationInterpolator");
OrientationInterpolator2272.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator2272.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2272.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[23] = OrientationInterpolator2272;

OrientationInterpolator OrientationInterpolator2273 = createNode("OrientationInterpolator");
OrientationInterpolator2273.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator2273.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2273.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2248.children[24] = OrientationInterpolator2273;

PositionInterpolator PositionInterpolator2274 = createNode("PositionInterpolator");
PositionInterpolator2274.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator2274.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2274.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2248.children[25] = PositionInterpolator2274;

OrientationInterpolator OrientationInterpolator2275 = createNode("OrientationInterpolator");
OrientationInterpolator2275.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator2275.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2275.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group2248.children[26] = OrientationInterpolator2275;

children[21] = Group2248;

Group Group2276 = createNode("Group");
Group2276.DEF = "UserInterface";
Transform Transform2277 = createNode("Transform");
Transform2277.DEF = "CoordinateAxesAdjustedScale";
Transform2277.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Inline Inline2278 = createNode("Inline");
Inline2278.DEF = "CoordinateAxes";
Inline2278.global = True;
Inline2278.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"]);
Transform2277.children = new MFNode();

Transform2277.children[0] = Inline2278;

Group2276.children = new MFNode();

Group2276.children[0] = Transform2277;

Transform Transform2279 = createNode("Transform");
Transform2279.DEF = "cordsys";
Transform2279.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Group2276.children[1] = Transform2279;

ProximitySensor ProximitySensor2280 = createNode("ProximitySensor");
ProximitySensor2280.DEF = "HudProximitySensor";
ProximitySensor2280.size = new SFVec3f(new float[500,100,500]);
ProximitySensor2280.center = new SFVec3f(new float[0,20,0]);
Group2276.children[2] = ProximitySensor2280;

Transform Transform2281 = createNode("Transform");
Transform2281.DEF = "Stage";
Transform2281.translation = new SFVec3f(new float[0,-0.0125,0]);
Transform2281.scale = new SFVec3f(new float[1,0.0125,1]);
Shape Shape2282 = createNode("Shape");
Appearance Appearance2283 = createNode("Appearance");
Material Material2284 = createNode("Material");
Material2284.transparency = 0.6;
Appearance2283.material = Material2284;

Shape2282.appearance = Appearance2283;

Box Box2285 = createNode("Box");
Shape2282.geometry = Box2285;

Transform2281.child = new undefined();

Transform2281.child[0] = Shape2282;

Transform Transform2286 = createNode("Transform");
Transform2286.DEF = "Circle0";
Transform2286.scale = new SFVec3f(new float[1.175,1,1.175]);
Shape Shape2287 = createNode("Shape");
Appearance Appearance2288 = createNode("Appearance");
Material Material2289 = createNode("Material");
Material2289.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2289.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2288.material = Material2289;

Shape2287.appearance = Appearance2288;

IndexedLineSet IndexedLineSet2290 = createNode("IndexedLineSet");
IndexedLineSet2290.DEF = "Orbit1";
IndexedLineSet2290.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate Coordinate2291 = createNode("Coordinate");
Coordinate2291.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet2290.coord = Coordinate2291;

Shape2287.geometry = IndexedLineSet2290;

Transform2286.child = new undefined();

Transform2286.child[0] = Shape2287;

Transform2281.children[1] = Transform2286;

Transform Transform2292 = createNode("Transform");
Transform2292.DEF = "Circle1";
Transform2292.scale = new SFVec3f(new float[0.5,1,0.5]);
Shape Shape2293 = createNode("Shape");
Appearance Appearance2294 = createNode("Appearance");
Material Material2295 = createNode("Material");
Material2295.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2295.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2294.material = Material2295;

Shape2293.appearance = Appearance2294;

IndexedLineSet IndexedLineSet2296 = createNode("IndexedLineSet");
IndexedLineSet2296.USE = "Orbit1";
Shape2293.geometry = IndexedLineSet2296;

Transform2292.child = new undefined();

Transform2292.child[0] = Shape2293;

Transform2281.children[2] = Transform2292;

Transform Transform2297 = createNode("Transform");
Transform2297.DEF = "Circle2";
Transform2297.scale = new SFVec3f(new float[0.25,1,0.25]);
Shape Shape2298 = createNode("Shape");
Appearance Appearance2299 = createNode("Appearance");
Material Material2300 = createNode("Material");
Material2300.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2300.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2299.material = Material2300;

Shape2298.appearance = Appearance2299;

IndexedLineSet IndexedLineSet2301 = createNode("IndexedLineSet");
IndexedLineSet2301.USE = "Orbit1";
Shape2298.geometry = IndexedLineSet2301;

Transform2297.child = new undefined();

Transform2297.child[0] = Shape2298;

Transform2281.children[3] = Transform2297;

Group2276.children[3] = Transform2281;

Transform Transform2302 = createNode("Transform");
Transform2302.DEF = "HudXform";
Transform2302.translation = new SFVec3f(new float[1.705442,1.042139,1.989742]);
Transform2302.rotation = new SFRotation(new float[-0.09996068,0.9942513,0.03837026,0.7131352]);
Transform Transform2303 = createNode("Transform");
Transform2303.translation = new SFVec3f(new float[-0.42,-0.2,-0.75]);
Transform2303.scale = new SFVec3f(new float[0.035,0.035,0.035]);
Transform Transform2304 = createNode("Transform");
Transform2304.DEF = "StandTransform";
Transform2304.translation = new SFVec3f(new float[0,-1,0]);
TouchSensor TouchSensor2305 = createNode("TouchSensor");
TouchSensor2305.DEF = "Stand_Touch";
TouchSensor2305.description = "touch to select";
Transform2304.children = new MFNode();

Transform2304.children[0] = TouchSensor2305;

Shape Shape2306 = createNode("Shape");
Shape2306.DEF = "StandTextShape";
Appearance Appearance2307 = createNode("Appearance");
Material Material2308 = createNode("Material");
Material2308.DEF = "text_color";
Material2308.ambientIntensity = 1;
Material2308.diffuseColor = new SFColor(new float[0.819,0.521,0.169]);
Material2308.specularColor = new SFColor(new float[0.819,0.521,0.169]);
Material2308.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance2307.material = Material2308;

Shape2306.appearance = Appearance2307;

Text Text2309 = createNode("Text");
Text2309.string = new MFString(new java.lang.String["Stand"]);
Shape2306.geometry = Text2309;

Transform2304.child[1] = Shape2306;

Shape Shape2310 = createNode("Shape");
Shape2310.DEF = "Stand_Back";
Appearance Appearance2311 = createNode("Appearance");
Material Material2312 = createNode("Material");
Material2312.DEF = "Clear";
Material2312.ambientIntensity = 1;
Material2312.diffuseColor = new SFColor(new float[0,0.5,0]);
Material2312.emissiveColor = new SFColor(new float[0,0.5,0]);
Material2312.transparency = 0.8;
Appearance2311.material = Material2312;

Shape2310.appearance = Appearance2311;

IndexedFaceSet IndexedFaceSet2313 = createNode("IndexedFaceSet");
IndexedFaceSet2313.DEF = "Backing";
IndexedFaceSet2313.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate2314 = createNode("Coordinate");
Coordinate2314.point = new MFVec3f(new float[-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01]);
IndexedFaceSet2313.coord = Coordinate2314;

Shape2310.geometry = IndexedFaceSet2313;

Transform2304.child[2] = Shape2310;

Transform2303.children = new MFNode();

Transform2303.children[0] = Transform2304;

Transform Transform2315 = createNode("Transform");
Transform2315.DEF = "PitchTransform";
Transform2315.translation = new SFVec3f(new float[3,-1,0]);
TouchSensor TouchSensor2316 = createNode("TouchSensor");
TouchSensor2316.DEF = "Pitch_Touch";
TouchSensor2316.description = "touch to select";
Transform2315.children = new MFNode();

Transform2315.children[0] = TouchSensor2316;

Shape Shape2317 = createNode("Shape");
Shape2317.DEF = "PitchTextShape";
Appearance Appearance2318 = createNode("Appearance");
Material Material2319 = createNode("Material");
Material2319.USE = "text_color";
Appearance2318.material = Material2319;

Shape2317.appearance = Appearance2318;

Text Text2320 = createNode("Text");
Text2320.string = new MFString(new java.lang.String["Pitch"]);
Shape2317.geometry = Text2320;

Transform2315.child[1] = Shape2317;

Shape Shape2321 = createNode("Shape");
Shape2321.DEF = "Pitch_Back";
Appearance Appearance2322 = createNode("Appearance");
Material Material2323 = createNode("Material");
Material2323.USE = "Clear";
Appearance2322.material = Material2323;

Shape2321.appearance = Appearance2322;

IndexedFaceSet IndexedFaceSet2324 = createNode("IndexedFaceSet");
IndexedFaceSet2324.USE = "Backing";
Shape2321.geometry = IndexedFaceSet2324;

Transform2315.child[2] = Shape2321;

Transform2303.children[1] = Transform2315;

Transform Transform2325 = createNode("Transform");
Transform2325.DEF = "YawTransform";
Transform2325.translation = new SFVec3f(new float[6,-1,0]);
TouchSensor TouchSensor2326 = createNode("TouchSensor");
TouchSensor2326.DEF = "Yaw_Touch";
TouchSensor2326.description = "touch to select";
Transform2325.children = new MFNode();

Transform2325.children[0] = TouchSensor2326;

Shape Shape2327 = createNode("Shape");
Shape2327.DEF = "YawText";
Appearance Appearance2328 = createNode("Appearance");
Material Material2329 = createNode("Material");
Material2329.USE = "text_color";
Appearance2328.material = Material2329;

Shape2327.appearance = Appearance2328;

Text Text2330 = createNode("Text");
Text2330.string = new MFString(new java.lang.String["Yaw"]);
Shape2327.geometry = Text2330;

Transform2325.child[1] = Shape2327;

Shape Shape2331 = createNode("Shape");
Shape2331.DEF = "Yaw_Back";
Appearance Appearance2332 = createNode("Appearance");
Material Material2333 = createNode("Material");
Material2333.USE = "Clear";
Appearance2332.material = Material2333;

Shape2331.appearance = Appearance2332;

IndexedFaceSet IndexedFaceSet2334 = createNode("IndexedFaceSet");
IndexedFaceSet2334.USE = "Backing";
Shape2331.geometry = IndexedFaceSet2334;

Transform2325.child[2] = Shape2331;

Transform2303.children[2] = Transform2325;

Transform Transform2335 = createNode("Transform");
Transform2335.DEF = "RollTransform";
Transform2335.translation = new SFVec3f(new float[9,-1,0]);
TouchSensor TouchSensor2336 = createNode("TouchSensor");
TouchSensor2336.DEF = "Roll_Touch";
TouchSensor2336.description = "touch to select";
Transform2335.children = new MFNode();

Transform2335.children[0] = TouchSensor2336;

Shape Shape2337 = createNode("Shape");
Shape2337.DEF = "_RollInterpolator";
Appearance Appearance2338 = createNode("Appearance");
Material Material2339 = createNode("Material");
Material2339.USE = "text_color";
Appearance2338.material = Material2339;

Shape2337.appearance = Appearance2338;

Text Text2340 = createNode("Text");
Text2340.string = new MFString(new java.lang.String["Roll"]);
Shape2337.geometry = Text2340;

Transform2335.child[1] = Shape2337;

Shape Shape2341 = createNode("Shape");
Shape2341.DEF = "Roll_Back";
Appearance Appearance2342 = createNode("Appearance");
Material Material2343 = createNode("Material");
Material2343.USE = "Clear";
Appearance2342.material = Material2343;

Shape2341.appearance = Appearance2342;

IndexedFaceSet IndexedFaceSet2344 = createNode("IndexedFaceSet");
IndexedFaceSet2344.USE = "Backing";
Shape2341.geometry = IndexedFaceSet2344;

Transform2335.child[2] = Shape2341;

Transform2303.children[3] = Transform2335;

Transform Transform2345 = createNode("Transform");
Transform2345.DEF = "WalkTransform";
Transform2345.translation = new SFVec3f(new float[12,-1,0]);
TouchSensor TouchSensor2346 = createNode("TouchSensor");
TouchSensor2346.DEF = "Walk_Touch";
TouchSensor2346.description = "touch to select";
Transform2345.children = new MFNode();

Transform2345.children[0] = TouchSensor2346;

Shape Shape2347 = createNode("Shape");
Shape2347.DEF = "WalkText";
Appearance Appearance2348 = createNode("Appearance");
Material Material2349 = createNode("Material");
Material2349.USE = "text_color";
Appearance2348.material = Material2349;

Shape2347.appearance = Appearance2348;

Text Text2350 = createNode("Text");
Text2350.string = new MFString(new java.lang.String["Walk"]);
Shape2347.geometry = Text2350;

Transform2345.child[1] = Shape2347;

Shape Shape2351 = createNode("Shape");
Shape2351.DEF = "Walk_Back";
Appearance Appearance2352 = createNode("Appearance");
Material Material2353 = createNode("Material");
Material2353.USE = "Clear";
Appearance2352.material = Material2353;

Shape2351.appearance = Appearance2352;

IndexedFaceSet IndexedFaceSet2354 = createNode("IndexedFaceSet");
IndexedFaceSet2354.USE = "Backing";
Shape2351.geometry = IndexedFaceSet2354;

Transform2345.child[2] = Shape2351;

Transform2303.children[4] = Transform2345;

Transform Transform2355 = createNode("Transform");
Transform2355.DEF = "RunTransform";
Transform2355.translation = new SFVec3f(new float[15,-1,0]);
TouchSensor TouchSensor2356 = createNode("TouchSensor");
TouchSensor2356.DEF = "Run_Touch";
TouchSensor2356.description = "touch to select";
Transform2355.children = new MFNode();

Transform2355.children[0] = TouchSensor2356;

Shape Shape2357 = createNode("Shape");
Shape2357.DEF = "RunText";
Appearance Appearance2358 = createNode("Appearance");
Material Material2359 = createNode("Material");
Material2359.USE = "text_color";
Appearance2358.material = Material2359;

Shape2357.appearance = Appearance2358;

Text Text2360 = createNode("Text");
Text2360.string = new MFString(new java.lang.String["Run"]);
Shape2357.geometry = Text2360;

Transform2355.child[1] = Shape2357;

Shape Shape2361 = createNode("Shape");
Shape2361.DEF = "Run_Back";
Appearance Appearance2362 = createNode("Appearance");
Material Material2363 = createNode("Material");
Material2363.USE = "Clear";
Appearance2362.material = Material2363;

Shape2361.appearance = Appearance2362;

IndexedFaceSet IndexedFaceSet2364 = createNode("IndexedFaceSet");
IndexedFaceSet2364.USE = "Backing";
Shape2361.geometry = IndexedFaceSet2364;

Transform2355.child[2] = Shape2361;

Transform2303.children[5] = Transform2355;

Transform Transform2365 = createNode("Transform");
Transform2365.DEF = "JumpTransform";
Transform2365.translation = new SFVec3f(new float[18,-1,0]);
TouchSensor TouchSensor2366 = createNode("TouchSensor");
TouchSensor2366.DEF = "Jump_Touch";
TouchSensor2366.description = "touch to select";
Transform2365.children = new MFNode();

Transform2365.children[0] = TouchSensor2366;

Shape Shape2367 = createNode("Shape");
Shape2367.DEF = "Jump";
Appearance Appearance2368 = createNode("Appearance");
Material Material2369 = createNode("Material");
Material2369.USE = "text_color";
Appearance2368.material = Material2369;

Shape2367.appearance = Appearance2368;

Text Text2370 = createNode("Text");
Text2370.string = new MFString(new java.lang.String["Jump"]);
Shape2367.geometry = Text2370;

Transform2365.child[1] = Shape2367;

Shape Shape2371 = createNode("Shape");
Shape2371.DEF = "Jump_Back";
Appearance Appearance2372 = createNode("Appearance");
Material Material2373 = createNode("Material");
Material2373.USE = "Clear";
Appearance2372.material = Material2373;

Shape2371.appearance = Appearance2372;

IndexedFaceSet IndexedFaceSet2374 = createNode("IndexedFaceSet");
IndexedFaceSet2374.USE = "Backing";
Shape2371.geometry = IndexedFaceSet2374;

Transform2365.child[2] = Shape2371;

Transform2303.children[6] = Transform2365;

Transform Transform2375 = createNode("Transform");
Transform2375.DEF = "KickTransform";
Transform2375.translation = new SFVec3f(new float[21,-1,0]);
TouchSensor TouchSensor2376 = createNode("TouchSensor");
TouchSensor2376.DEF = "Kick_Touch";
TouchSensor2376.description = "touch to select";
Transform2375.children = new MFNode();

Transform2375.children[0] = TouchSensor2376;

Shape Shape2377 = createNode("Shape");
Shape2377.DEF = "KickText";
Appearance Appearance2378 = createNode("Appearance");
Material Material2379 = createNode("Material");
Material2379.USE = "text_color";
Appearance2378.material = Material2379;

Shape2377.appearance = Appearance2378;

Text Text2380 = createNode("Text");
Text2380.string = new MFString(new java.lang.String["Kick"]);
Shape2377.geometry = Text2380;

Transform2375.child[1] = Shape2377;

Shape Shape2381 = createNode("Shape");
Shape2381.DEF = "Kick_Back";
Appearance Appearance2382 = createNode("Appearance");
Material Material2383 = createNode("Material");
Material2383.USE = "Clear";
Appearance2382.material = Material2383;

Shape2381.appearance = Appearance2382;

IndexedFaceSet IndexedFaceSet2384 = createNode("IndexedFaceSet");
IndexedFaceSet2384.USE = "Backing";
Shape2381.geometry = IndexedFaceSet2384;

Transform2375.child[2] = Shape2381;

Transform2303.children[7] = Transform2375;

Transform Transform2385 = createNode("Transform");
Transform2385.DEF = "Stop_Text";
Transform2385.translation = new SFVec3f(new float[0,1.4,0]);
TouchSensor TouchSensor2386 = createNode("TouchSensor");
TouchSensor2386.DEF = "Stop_Touch";
TouchSensor2386.description = "touch to select";
Transform2385.children = new MFNode();

Transform2385.children[0] = TouchSensor2386;

Shape Shape2387 = createNode("Shape");
Shape2387.DEF = "StopText";
Appearance Appearance2388 = createNode("Appearance");
Material Material2389 = createNode("Material");
Material2389.USE = "text_color";
Appearance2388.material = Material2389;

Shape2387.appearance = Appearance2388;

Text Text2390 = createNode("Text");
Text2390.string = new MFString(new java.lang.String["Stop","Default Pose"]);
Shape2387.geometry = Text2390;

Transform2385.child[1] = Shape2387;

Shape Shape2391 = createNode("Shape");
Shape2391.DEF = "Stop_Back";
Appearance Appearance2392 = createNode("Appearance");
Material Material2393 = createNode("Material");
Material2393.USE = "Clear";
Appearance2392.material = Material2393;

Shape2391.appearance = Appearance2392;

IndexedFaceSet IndexedFaceSet2394 = createNode("IndexedFaceSet");
IndexedFaceSet2394.USE = "Backing";
Shape2391.geometry = IndexedFaceSet2394;

Transform2385.child[2] = Shape2391;

Transform2303.children[8] = Transform2385;

Transform2302.children = new MFNode();

Transform2302.children[0] = Transform2303;

Group2276.children[4] = Transform2302;

children[22] = Group2276;

Group Group2395 = createNode("Group");
Group2395.DEF = "BehaviorSynchronization";
children[23] = Group2395;

ROUTE ROUTE2396 = createNode("ROUTE");
ROUTE2396.fromNode = "StopTimer";
ROUTE2396.fromField = "fraction_changed";
ROUTE2396.toNode = "Stop_HumanoidRoot_TranslationInterpolator";
ROUTE2396.toField = "set_fraction";
children[24] = ROUTE2396;

ROUTE ROUTE2397 = createNode("ROUTE");
ROUTE2397.fromNode = "StopTimer";
ROUTE2397.fromField = "fraction_changed";
ROUTE2397.toNode = "Stop_HumanoidRoot_RotationInterpolator";
ROUTE2397.toField = "set_fraction";
children[25] = ROUTE2397;

ROUTE ROUTE2398 = createNode("ROUTE");
ROUTE2398.fromNode = "StopTimer";
ROUTE2398.fromField = "fraction_changed";
ROUTE2398.toNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE2398.toField = "set_fraction";
children[26] = ROUTE2398;

ROUTE ROUTE2399 = createNode("ROUTE");
ROUTE2399.fromNode = "StopTimer";
ROUTE2399.fromField = "fraction_changed";
ROUTE2399.toNode = "Stop_l_hip_RotationInterpolator";
ROUTE2399.toField = "set_fraction";
children[27] = ROUTE2399;

ROUTE ROUTE2400 = createNode("ROUTE");
ROUTE2400.fromNode = "StopTimer";
ROUTE2400.fromField = "fraction_changed";
ROUTE2400.toNode = "Stop_l_knee_RotationInterpolator";
ROUTE2400.toField = "set_fraction";
children[28] = ROUTE2400;

ROUTE ROUTE2401 = createNode("ROUTE");
ROUTE2401.fromNode = "StopTimer";
ROUTE2401.fromField = "fraction_changed";
ROUTE2401.toNode = "Stop_l_ankle_RotationInterpolator";
ROUTE2401.toField = "set_fraction";
children[29] = ROUTE2401;

ROUTE ROUTE2402 = createNode("ROUTE");
ROUTE2402.fromNode = "StopTimer";
ROUTE2402.fromField = "fraction_changed";
ROUTE2402.toNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE2402.toField = "set_fraction";
children[30] = ROUTE2402;

ROUTE ROUTE2403 = createNode("ROUTE");
ROUTE2403.fromNode = "StopTimer";
ROUTE2403.fromField = "fraction_changed";
ROUTE2403.toNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE2403.toField = "set_fraction";
children[31] = ROUTE2403;

ROUTE ROUTE2404 = createNode("ROUTE");
ROUTE2404.fromNode = "StopTimer";
ROUTE2404.fromField = "fraction_changed";
ROUTE2404.toNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE2404.toField = "set_fraction";
children[32] = ROUTE2404;

ROUTE ROUTE2405 = createNode("ROUTE");
ROUTE2405.fromNode = "StopTimer";
ROUTE2405.fromField = "fraction_changed";
ROUTE2405.toNode = "Stop_r_hip_RotationInterpolator";
ROUTE2405.toField = "set_fraction";
children[33] = ROUTE2405;

ROUTE ROUTE2406 = createNode("ROUTE");
ROUTE2406.fromNode = "StopTimer";
ROUTE2406.fromField = "fraction_changed";
ROUTE2406.toNode = "Stop_r_knee_RotationInterpolator";
ROUTE2406.toField = "set_fraction";
children[34] = ROUTE2406;

ROUTE ROUTE2407 = createNode("ROUTE");
ROUTE2407.fromNode = "StopTimer";
ROUTE2407.fromField = "fraction_changed";
ROUTE2407.toNode = "Stop_r_ankle_RotationInterpolator";
ROUTE2407.toField = "set_fraction";
children[35] = ROUTE2407;

ROUTE ROUTE2408 = createNode("ROUTE");
ROUTE2408.fromNode = "StopTimer";
ROUTE2408.fromField = "fraction_changed";
ROUTE2408.toNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE2408.toField = "set_fraction";
children[36] = ROUTE2408;

ROUTE ROUTE2409 = createNode("ROUTE");
ROUTE2409.fromNode = "StopTimer";
ROUTE2409.fromField = "fraction_changed";
ROUTE2409.toNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE2409.toField = "set_fraction";
children[37] = ROUTE2409;

ROUTE ROUTE2410 = createNode("ROUTE");
ROUTE2410.fromNode = "StopTimer";
ROUTE2410.fromField = "fraction_changed";
ROUTE2410.toNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE2410.toField = "set_fraction";
children[38] = ROUTE2410;

ROUTE ROUTE2411 = createNode("ROUTE");
ROUTE2411.fromNode = "StopTimer";
ROUTE2411.fromField = "fraction_changed";
ROUTE2411.toNode = "Stop_vl5_RotationInterpolator";
ROUTE2411.toField = "set_fraction";
children[39] = ROUTE2411;

ROUTE ROUTE2412 = createNode("ROUTE");
ROUTE2412.fromNode = "StopTimer";
ROUTE2412.fromField = "fraction_changed";
ROUTE2412.toNode = "Stop_vl4_RotationInterpolator";
ROUTE2412.toField = "set_fraction";
children[40] = ROUTE2412;

ROUTE ROUTE2413 = createNode("ROUTE");
ROUTE2413.fromNode = "StopTimer";
ROUTE2413.fromField = "fraction_changed";
ROUTE2413.toNode = "Stop_vl3_RotationInterpolator";
ROUTE2413.toField = "set_fraction";
children[41] = ROUTE2413;

ROUTE ROUTE2414 = createNode("ROUTE");
ROUTE2414.fromNode = "StopTimer";
ROUTE2414.fromField = "fraction_changed";
ROUTE2414.toNode = "Stop_vl2_RotationInterpolator";
ROUTE2414.toField = "set_fraction";
children[42] = ROUTE2414;

ROUTE ROUTE2415 = createNode("ROUTE");
ROUTE2415.fromNode = "StopTimer";
ROUTE2415.fromField = "fraction_changed";
ROUTE2415.toNode = "Stop_vl1_RotationInterpolator";
ROUTE2415.toField = "set_fraction";
children[43] = ROUTE2415;

ROUTE ROUTE2416 = createNode("ROUTE");
ROUTE2416.fromNode = "StopTimer";
ROUTE2416.fromField = "fraction_changed";
ROUTE2416.toNode = "Stop_vt12_RotationInterpolator";
ROUTE2416.toField = "set_fraction";
children[44] = ROUTE2416;

ROUTE ROUTE2417 = createNode("ROUTE");
ROUTE2417.fromNode = "StopTimer";
ROUTE2417.fromField = "fraction_changed";
ROUTE2417.toNode = "Stop_vt11_RotationInterpolator";
ROUTE2417.toField = "set_fraction";
children[45] = ROUTE2417;

ROUTE ROUTE2418 = createNode("ROUTE");
ROUTE2418.fromNode = "StopTimer";
ROUTE2418.fromField = "fraction_changed";
ROUTE2418.toNode = "Stop_vt10_RotationInterpolator";
ROUTE2418.toField = "set_fraction";
children[46] = ROUTE2418;

ROUTE ROUTE2419 = createNode("ROUTE");
ROUTE2419.fromNode = "StopTimer";
ROUTE2419.fromField = "fraction_changed";
ROUTE2419.toNode = "Stop_vt9_RotationInterpolator";
ROUTE2419.toField = "set_fraction";
children[47] = ROUTE2419;

ROUTE ROUTE2420 = createNode("ROUTE");
ROUTE2420.fromNode = "StopTimer";
ROUTE2420.fromField = "fraction_changed";
ROUTE2420.toNode = "Stop_vt8_RotationInterpolator";
ROUTE2420.toField = "set_fraction";
children[48] = ROUTE2420;

ROUTE ROUTE2421 = createNode("ROUTE");
ROUTE2421.fromNode = "StopTimer";
ROUTE2421.fromField = "fraction_changed";
ROUTE2421.toNode = "Stop_vt7_RotationInterpolator";
ROUTE2421.toField = "set_fraction";
children[49] = ROUTE2421;

ROUTE ROUTE2422 = createNode("ROUTE");
ROUTE2422.fromNode = "StopTimer";
ROUTE2422.fromField = "fraction_changed";
ROUTE2422.toNode = "Stop_vt6_RotationInterpolator";
ROUTE2422.toField = "set_fraction";
children[50] = ROUTE2422;

ROUTE ROUTE2423 = createNode("ROUTE");
ROUTE2423.fromNode = "StopTimer";
ROUTE2423.fromField = "fraction_changed";
ROUTE2423.toNode = "Stop_vt5_RotationInterpolator";
ROUTE2423.toField = "set_fraction";
children[51] = ROUTE2423;

ROUTE ROUTE2424 = createNode("ROUTE");
ROUTE2424.fromNode = "StopTimer";
ROUTE2424.fromField = "fraction_changed";
ROUTE2424.toNode = "Stop_vt4_RotationInterpolator";
ROUTE2424.toField = "set_fraction";
children[52] = ROUTE2424;

ROUTE ROUTE2425 = createNode("ROUTE");
ROUTE2425.fromNode = "StopTimer";
ROUTE2425.fromField = "fraction_changed";
ROUTE2425.toNode = "Stop_vt3_RotationInterpolator";
ROUTE2425.toField = "set_fraction";
children[53] = ROUTE2425;

ROUTE ROUTE2426 = createNode("ROUTE");
ROUTE2426.fromNode = "StopTimer";
ROUTE2426.fromField = "fraction_changed";
ROUTE2426.toNode = "Stop_vt2_RotationInterpolator";
ROUTE2426.toField = "set_fraction";
children[54] = ROUTE2426;

ROUTE ROUTE2427 = createNode("ROUTE");
ROUTE2427.fromNode = "StopTimer";
ROUTE2427.fromField = "fraction_changed";
ROUTE2427.toNode = "Stop_vt1_RotationInterpolator";
ROUTE2427.toField = "set_fraction";
children[55] = ROUTE2427;

ROUTE ROUTE2428 = createNode("ROUTE");
ROUTE2428.fromNode = "StopTimer";
ROUTE2428.fromField = "fraction_changed";
ROUTE2428.toNode = "Stop_vc7_RotationInterpolator";
ROUTE2428.toField = "set_fraction";
children[56] = ROUTE2428;

ROUTE ROUTE2429 = createNode("ROUTE");
ROUTE2429.fromNode = "StopTimer";
ROUTE2429.fromField = "fraction_changed";
ROUTE2429.toNode = "Stop_vc6_RotationInterpolator";
ROUTE2429.toField = "set_fraction";
children[57] = ROUTE2429;

ROUTE ROUTE2430 = createNode("ROUTE");
ROUTE2430.fromNode = "StopTimer";
ROUTE2430.fromField = "fraction_changed";
ROUTE2430.toNode = "Stop_vc5_RotationInterpolator";
ROUTE2430.toField = "set_fraction";
children[58] = ROUTE2430;

ROUTE ROUTE2431 = createNode("ROUTE");
ROUTE2431.fromNode = "StopTimer";
ROUTE2431.fromField = "fraction_changed";
ROUTE2431.toNode = "Stop_vc4_RotationInterpolator";
ROUTE2431.toField = "set_fraction";
children[59] = ROUTE2431;

ROUTE ROUTE2432 = createNode("ROUTE");
ROUTE2432.fromNode = "StopTimer";
ROUTE2432.fromField = "fraction_changed";
ROUTE2432.toNode = "Stop_vc3_RotationInterpolator";
ROUTE2432.toField = "set_fraction";
children[60] = ROUTE2432;

ROUTE ROUTE2433 = createNode("ROUTE");
ROUTE2433.fromNode = "StopTimer";
ROUTE2433.fromField = "fraction_changed";
ROUTE2433.toNode = "Stop_vc2_RotationInterpolator";
ROUTE2433.toField = "set_fraction";
children[61] = ROUTE2433;

ROUTE ROUTE2434 = createNode("ROUTE");
ROUTE2434.fromNode = "StopTimer";
ROUTE2434.fromField = "fraction_changed";
ROUTE2434.toNode = "Stop_vc1_RotationInterpolator";
ROUTE2434.toField = "set_fraction";
children[62] = ROUTE2434;

ROUTE ROUTE2435 = createNode("ROUTE");
ROUTE2435.fromNode = "StopTimer";
ROUTE2435.fromField = "fraction_changed";
ROUTE2435.toNode = "Stop_skullbase_RotationInterpolator";
ROUTE2435.toField = "set_fraction";
children[63] = ROUTE2435;

ROUTE ROUTE2436 = createNode("ROUTE");
ROUTE2436.fromNode = "StopTimer";
ROUTE2436.fromField = "fraction_changed";
ROUTE2436.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE2436.toField = "set_fraction";
children[64] = ROUTE2436;

ROUTE ROUTE2437 = createNode("ROUTE");
ROUTE2437.fromNode = "StopTimer";
ROUTE2437.fromField = "fraction_changed";
ROUTE2437.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE2437.toField = "set_fraction";
children[65] = ROUTE2437;

ROUTE ROUTE2438 = createNode("ROUTE");
ROUTE2438.fromNode = "StopTimer";
ROUTE2438.fromField = "fraction_changed";
ROUTE2438.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE2438.toField = "set_fraction";
children[66] = ROUTE2438;

ROUTE ROUTE2439 = createNode("ROUTE");
ROUTE2439.fromNode = "StopTimer";
ROUTE2439.fromField = "fraction_changed";
ROUTE2439.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE2439.toField = "set_fraction";
children[67] = ROUTE2439;

ROUTE ROUTE2440 = createNode("ROUTE");
ROUTE2440.fromNode = "StopTimer";
ROUTE2440.fromField = "fraction_changed";
ROUTE2440.toNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE2440.toField = "set_fraction";
children[68] = ROUTE2440;

ROUTE ROUTE2441 = createNode("ROUTE");
ROUTE2441.fromNode = "StopTimer";
ROUTE2441.fromField = "fraction_changed";
ROUTE2441.toNode = "Stop_l_elbow_RotationInterpolator";
ROUTE2441.toField = "set_fraction";
children[69] = ROUTE2441;

ROUTE ROUTE2442 = createNode("ROUTE");
ROUTE2442.fromNode = "StopTimer";
ROUTE2442.fromField = "fraction_changed";
ROUTE2442.toNode = "Stop_l_wrist_RotationInterpolator";
ROUTE2442.toField = "set_fraction";
children[70] = ROUTE2442;

ROUTE ROUTE2443 = createNode("ROUTE");
ROUTE2443.fromNode = "StopTimer";
ROUTE2443.fromField = "fraction_changed";
ROUTE2443.toNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE2443.toField = "set_fraction";
children[71] = ROUTE2443;

ROUTE ROUTE2444 = createNode("ROUTE");
ROUTE2444.fromNode = "StopTimer";
ROUTE2444.fromField = "fraction_changed";
ROUTE2444.toNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE2444.toField = "set_fraction";
children[72] = ROUTE2444;

ROUTE ROUTE2445 = createNode("ROUTE");
ROUTE2445.fromNode = "StopTimer";
ROUTE2445.fromField = "fraction_changed";
ROUTE2445.toNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE2445.toField = "set_fraction";
children[73] = ROUTE2445;

ROUTE ROUTE2446 = createNode("ROUTE");
ROUTE2446.fromNode = "StopTimer";
ROUTE2446.fromField = "fraction_changed";
ROUTE2446.toNode = "Stop_l_index0_RotationInterpolator";
ROUTE2446.toField = "set_fraction";
children[74] = ROUTE2446;

ROUTE ROUTE2447 = createNode("ROUTE");
ROUTE2447.fromNode = "StopTimer";
ROUTE2447.fromField = "fraction_changed";
ROUTE2447.toNode = "Stop_l_index1_RotationInterpolator";
ROUTE2447.toField = "set_fraction";
children[75] = ROUTE2447;

ROUTE ROUTE2448 = createNode("ROUTE");
ROUTE2448.fromNode = "StopTimer";
ROUTE2448.fromField = "fraction_changed";
ROUTE2448.toNode = "Stop_l_index2_RotationInterpolator";
ROUTE2448.toField = "set_fraction";
children[76] = ROUTE2448;

ROUTE ROUTE2449 = createNode("ROUTE");
ROUTE2449.fromNode = "StopTimer";
ROUTE2449.fromField = "fraction_changed";
ROUTE2449.toNode = "Stop_l_index3_RotationInterpolator";
ROUTE2449.toField = "set_fraction";
children[77] = ROUTE2449;

ROUTE ROUTE2450 = createNode("ROUTE");
ROUTE2450.fromNode = "StopTimer";
ROUTE2450.fromField = "fraction_changed";
ROUTE2450.toNode = "Stop_l_middle0_RotationInterpolator";
ROUTE2450.toField = "set_fraction";
children[78] = ROUTE2450;

ROUTE ROUTE2451 = createNode("ROUTE");
ROUTE2451.fromNode = "StopTimer";
ROUTE2451.fromField = "fraction_changed";
ROUTE2451.toNode = "Stop_l_middle1_RotationInterpolator";
ROUTE2451.toField = "set_fraction";
children[79] = ROUTE2451;

ROUTE ROUTE2452 = createNode("ROUTE");
ROUTE2452.fromNode = "StopTimer";
ROUTE2452.fromField = "fraction_changed";
ROUTE2452.toNode = "Stop_l_middle2_RotationInterpolator";
ROUTE2452.toField = "set_fraction";
children[80] = ROUTE2452;

ROUTE ROUTE2453 = createNode("ROUTE");
ROUTE2453.fromNode = "StopTimer";
ROUTE2453.fromField = "fraction_changed";
ROUTE2453.toNode = "Stop_l_middle3_RotationInterpolator";
ROUTE2453.toField = "set_fraction";
children[81] = ROUTE2453;

ROUTE ROUTE2454 = createNode("ROUTE");
ROUTE2454.fromNode = "StopTimer";
ROUTE2454.fromField = "fraction_changed";
ROUTE2454.toNode = "Stop_l_ring0_RotationInterpolator";
ROUTE2454.toField = "set_fraction";
children[82] = ROUTE2454;

ROUTE ROUTE2455 = createNode("ROUTE");
ROUTE2455.fromNode = "StopTimer";
ROUTE2455.fromField = "fraction_changed";
ROUTE2455.toNode = "Stop_l_ring1_RotationInterpolator";
ROUTE2455.toField = "set_fraction";
children[83] = ROUTE2455;

ROUTE ROUTE2456 = createNode("ROUTE");
ROUTE2456.fromNode = "StopTimer";
ROUTE2456.fromField = "fraction_changed";
ROUTE2456.toNode = "Stop_l_ring2_RotationInterpolator";
ROUTE2456.toField = "set_fraction";
children[84] = ROUTE2456;

ROUTE ROUTE2457 = createNode("ROUTE");
ROUTE2457.fromNode = "StopTimer";
ROUTE2457.fromField = "fraction_changed";
ROUTE2457.toNode = "Stop_l_ring3_RotationInterpolator";
ROUTE2457.toField = "set_fraction";
children[85] = ROUTE2457;

ROUTE ROUTE2458 = createNode("ROUTE");
ROUTE2458.fromNode = "StopTimer";
ROUTE2458.fromField = "fraction_changed";
ROUTE2458.toNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE2458.toField = "set_fraction";
children[86] = ROUTE2458;

ROUTE ROUTE2459 = createNode("ROUTE");
ROUTE2459.fromNode = "StopTimer";
ROUTE2459.fromField = "fraction_changed";
ROUTE2459.toNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE2459.toField = "set_fraction";
children[87] = ROUTE2459;

ROUTE ROUTE2460 = createNode("ROUTE");
ROUTE2460.fromNode = "StopTimer";
ROUTE2460.fromField = "fraction_changed";
ROUTE2460.toNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE2460.toField = "set_fraction";
children[88] = ROUTE2460;

ROUTE ROUTE2461 = createNode("ROUTE");
ROUTE2461.fromNode = "StopTimer";
ROUTE2461.fromField = "fraction_changed";
ROUTE2461.toNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE2461.toField = "set_fraction";
children[89] = ROUTE2461;

ROUTE ROUTE2462 = createNode("ROUTE");
ROUTE2462.fromNode = "StopTimer";
ROUTE2462.fromField = "fraction_changed";
ROUTE2462.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE2462.toField = "set_fraction";
children[90] = ROUTE2462;

ROUTE ROUTE2463 = createNode("ROUTE");
ROUTE2463.fromNode = "StopTimer";
ROUTE2463.fromField = "fraction_changed";
ROUTE2463.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE2463.toField = "set_fraction";
children[91] = ROUTE2463;

ROUTE ROUTE2464 = createNode("ROUTE");
ROUTE2464.fromNode = "StopTimer";
ROUTE2464.fromField = "fraction_changed";
ROUTE2464.toNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE2464.toField = "set_fraction";
children[92] = ROUTE2464;

ROUTE ROUTE2465 = createNode("ROUTE");
ROUTE2465.fromNode = "StopTimer";
ROUTE2465.fromField = "fraction_changed";
ROUTE2465.toNode = "Stop_r_elbow_RotationInterpolator";
ROUTE2465.toField = "set_fraction";
children[93] = ROUTE2465;

ROUTE ROUTE2466 = createNode("ROUTE");
ROUTE2466.fromNode = "StopTimer";
ROUTE2466.fromField = "fraction_changed";
ROUTE2466.toNode = "Stop_r_wrist_RotationInterpolator";
ROUTE2466.toField = "set_fraction";
children[94] = ROUTE2466;

ROUTE ROUTE2467 = createNode("ROUTE");
ROUTE2467.fromNode = "StopTimer";
ROUTE2467.fromField = "fraction_changed";
ROUTE2467.toNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE2467.toField = "set_fraction";
children[95] = ROUTE2467;

ROUTE ROUTE2468 = createNode("ROUTE");
ROUTE2468.fromNode = "StopTimer";
ROUTE2468.fromField = "fraction_changed";
ROUTE2468.toNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE2468.toField = "set_fraction";
children[96] = ROUTE2468;

ROUTE ROUTE2469 = createNode("ROUTE");
ROUTE2469.fromNode = "StopTimer";
ROUTE2469.fromField = "fraction_changed";
ROUTE2469.toNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE2469.toField = "set_fraction";
children[97] = ROUTE2469;

ROUTE ROUTE2470 = createNode("ROUTE");
ROUTE2470.fromNode = "StopTimer";
ROUTE2470.fromField = "fraction_changed";
ROUTE2470.toNode = "Stop_r_index0_RotationInterpolator";
ROUTE2470.toField = "set_fraction";
children[98] = ROUTE2470;

ROUTE ROUTE2471 = createNode("ROUTE");
ROUTE2471.fromNode = "StopTimer";
ROUTE2471.fromField = "fraction_changed";
ROUTE2471.toNode = "Stop_r_index1_RotationInterpolator";
ROUTE2471.toField = "set_fraction";
children[99] = ROUTE2471;

ROUTE ROUTE2472 = createNode("ROUTE");
ROUTE2472.fromNode = "StopTimer";
ROUTE2472.fromField = "fraction_changed";
ROUTE2472.toNode = "Stop_r_index2_RotationInterpolator";
ROUTE2472.toField = "set_fraction";
children[100] = ROUTE2472;

ROUTE ROUTE2473 = createNode("ROUTE");
ROUTE2473.fromNode = "StopTimer";
ROUTE2473.fromField = "fraction_changed";
ROUTE2473.toNode = "Stop_r_index3_RotationInterpolator";
ROUTE2473.toField = "set_fraction";
children[101] = ROUTE2473;

ROUTE ROUTE2474 = createNode("ROUTE");
ROUTE2474.fromNode = "StopTimer";
ROUTE2474.fromField = "fraction_changed";
ROUTE2474.toNode = "Stop_r_middle0_RotationInterpolator";
ROUTE2474.toField = "set_fraction";
children[102] = ROUTE2474;

ROUTE ROUTE2475 = createNode("ROUTE");
ROUTE2475.fromNode = "StopTimer";
ROUTE2475.fromField = "fraction_changed";
ROUTE2475.toNode = "Stop_r_middle1_RotationInterpolator";
ROUTE2475.toField = "set_fraction";
children[103] = ROUTE2475;

ROUTE ROUTE2476 = createNode("ROUTE");
ROUTE2476.fromNode = "StopTimer";
ROUTE2476.fromField = "fraction_changed";
ROUTE2476.toNode = "Stop_r_middle2_RotationInterpolator";
ROUTE2476.toField = "set_fraction";
children[104] = ROUTE2476;

ROUTE ROUTE2477 = createNode("ROUTE");
ROUTE2477.fromNode = "StopTimer";
ROUTE2477.fromField = "fraction_changed";
ROUTE2477.toNode = "Stop_r_middle3_RotationInterpolator";
ROUTE2477.toField = "set_fraction";
children[105] = ROUTE2477;

ROUTE ROUTE2478 = createNode("ROUTE");
ROUTE2478.fromNode = "StopTimer";
ROUTE2478.fromField = "fraction_changed";
ROUTE2478.toNode = "Stop_r_ring0_RotationInterpolator";
ROUTE2478.toField = "set_fraction";
children[106] = ROUTE2478;

ROUTE ROUTE2479 = createNode("ROUTE");
ROUTE2479.fromNode = "StopTimer";
ROUTE2479.fromField = "fraction_changed";
ROUTE2479.toNode = "Stop_r_ring1_RotationInterpolator";
ROUTE2479.toField = "set_fraction";
children[107] = ROUTE2479;

ROUTE ROUTE2480 = createNode("ROUTE");
ROUTE2480.fromNode = "StopTimer";
ROUTE2480.fromField = "fraction_changed";
ROUTE2480.toNode = "Stop_r_ring2_RotationInterpolator";
ROUTE2480.toField = "set_fraction";
children[108] = ROUTE2480;

ROUTE ROUTE2481 = createNode("ROUTE");
ROUTE2481.fromNode = "StopTimer";
ROUTE2481.fromField = "fraction_changed";
ROUTE2481.toNode = "Stop_r_ring3_RotationInterpolator";
ROUTE2481.toField = "set_fraction";
children[109] = ROUTE2481;

ROUTE ROUTE2482 = createNode("ROUTE");
ROUTE2482.fromNode = "StopTimer";
ROUTE2482.fromField = "fraction_changed";
ROUTE2482.toNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE2482.toField = "set_fraction";
children[110] = ROUTE2482;

ROUTE ROUTE2483 = createNode("ROUTE");
ROUTE2483.fromNode = "StopTimer";
ROUTE2483.fromField = "fraction_changed";
ROUTE2483.toNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE2483.toField = "set_fraction";
children[111] = ROUTE2483;

ROUTE ROUTE2484 = createNode("ROUTE");
ROUTE2484.fromNode = "StopTimer";
ROUTE2484.fromField = "fraction_changed";
ROUTE2484.toNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE2484.toField = "set_fraction";
children[112] = ROUTE2484;

ROUTE ROUTE2485 = createNode("ROUTE");
ROUTE2485.fromNode = "StopTimer";
ROUTE2485.fromField = "fraction_changed";
ROUTE2485.toNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE2485.toField = "set_fraction";
children[113] = ROUTE2485;

ROUTE ROUTE2486 = createNode("ROUTE");
ROUTE2486.fromNode = "Stop_HumanoidRoot_TranslationInterpolator";
ROUTE2486.fromField = "value_changed";
ROUTE2486.toNode = "hanim_humanoid_root";
ROUTE2486.toField = "set_translation";
children[114] = ROUTE2486;

ROUTE ROUTE2487 = createNode("ROUTE");
ROUTE2487.fromNode = "Stop_HumanoidRoot_RotationInterpolator";
ROUTE2487.fromField = "value_changed";
ROUTE2487.toNode = "hanim_humanoid_root";
ROUTE2487.toField = "set_rotation";
children[115] = ROUTE2487;

ROUTE ROUTE2488 = createNode("ROUTE");
ROUTE2488.fromNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE2488.fromField = "value_changed";
ROUTE2488.toNode = "hanim_sacroiliac";
ROUTE2488.toField = "set_rotation";
children[116] = ROUTE2488;

ROUTE ROUTE2489 = createNode("ROUTE");
ROUTE2489.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE2489.fromField = "value_changed";
ROUTE2489.toNode = "hanim_l_hip";
ROUTE2489.toField = "set_rotation";
children[117] = ROUTE2489;

ROUTE ROUTE2490 = createNode("ROUTE");
ROUTE2490.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE2490.fromField = "value_changed";
ROUTE2490.toNode = "hanim_l_knee";
ROUTE2490.toField = "set_rotation";
children[118] = ROUTE2490;

ROUTE ROUTE2491 = createNode("ROUTE");
ROUTE2491.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE2491.fromField = "value_changed";
ROUTE2491.toNode = "hanim_l_ankle";
ROUTE2491.toField = "set_rotation";
children[119] = ROUTE2491;

ROUTE ROUTE2492 = createNode("ROUTE");
ROUTE2492.fromNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE2492.fromField = "value_changed";
ROUTE2492.toNode = "hanim_l_subtalar";
ROUTE2492.toField = "set_rotation";
children[120] = ROUTE2492;

ROUTE ROUTE2493 = createNode("ROUTE");
ROUTE2493.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE2493.fromField = "value_changed";
ROUTE2493.toNode = "hanim_l_midtarsal";
ROUTE2493.toField = "set_rotation";
children[121] = ROUTE2493;

ROUTE ROUTE2494 = createNode("ROUTE");
ROUTE2494.fromNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE2494.fromField = "value_changed";
ROUTE2494.toNode = "hanim_l_metatarsal";
ROUTE2494.toField = "set_rotation";
children[122] = ROUTE2494;

ROUTE ROUTE2495 = createNode("ROUTE");
ROUTE2495.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE2495.fromField = "value_changed";
ROUTE2495.toNode = "hanim_r_hip";
ROUTE2495.toField = "set_rotation";
children[123] = ROUTE2495;

ROUTE ROUTE2496 = createNode("ROUTE");
ROUTE2496.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE2496.fromField = "value_changed";
ROUTE2496.toNode = "hanim_r_knee";
ROUTE2496.toField = "set_rotation";
children[124] = ROUTE2496;

ROUTE ROUTE2497 = createNode("ROUTE");
ROUTE2497.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE2497.fromField = "value_changed";
ROUTE2497.toNode = "hanim_r_ankle";
ROUTE2497.toField = "set_rotation";
children[125] = ROUTE2497;

ROUTE ROUTE2498 = createNode("ROUTE");
ROUTE2498.fromNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE2498.fromField = "value_changed";
ROUTE2498.toNode = "hanim_r_subtalar";
ROUTE2498.toField = "set_rotation";
children[126] = ROUTE2498;

ROUTE ROUTE2499 = createNode("ROUTE");
ROUTE2499.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE2499.fromField = "value_changed";
ROUTE2499.toNode = "hanim_r_midtarsal";
ROUTE2499.toField = "set_rotation";
children[127] = ROUTE2499;

ROUTE ROUTE2500 = createNode("ROUTE");
ROUTE2500.fromNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE2500.fromField = "value_changed";
ROUTE2500.toNode = "hanim_r_metatarsal";
ROUTE2500.toField = "set_rotation";
children[128] = ROUTE2500;

ROUTE ROUTE2501 = createNode("ROUTE");
ROUTE2501.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE2501.fromField = "value_changed";
ROUTE2501.toNode = "hanim_vl5";
ROUTE2501.toField = "set_rotation";
children[129] = ROUTE2501;

ROUTE ROUTE2502 = createNode("ROUTE");
ROUTE2502.fromNode = "Stop_vl4_RotationInterpolator";
ROUTE2502.fromField = "value_changed";
ROUTE2502.toNode = "hanim_vl4";
ROUTE2502.toField = "set_rotation";
children[130] = ROUTE2502;

ROUTE ROUTE2503 = createNode("ROUTE");
ROUTE2503.fromNode = "Stop_vl3_RotationInterpolator";
ROUTE2503.fromField = "value_changed";
ROUTE2503.toNode = "hanim_vl3";
ROUTE2503.toField = "set_rotation";
children[131] = ROUTE2503;

ROUTE ROUTE2504 = createNode("ROUTE");
ROUTE2504.fromNode = "Stop_vl2_RotationInterpolator";
ROUTE2504.fromField = "value_changed";
ROUTE2504.toNode = "hanim_vl2";
ROUTE2504.toField = "set_rotation";
children[132] = ROUTE2504;

ROUTE ROUTE2505 = createNode("ROUTE");
ROUTE2505.fromNode = "Stop_vl1_RotationInterpolator";
ROUTE2505.fromField = "value_changed";
ROUTE2505.toNode = "hanim_vl1";
ROUTE2505.toField = "set_rotation";
children[133] = ROUTE2505;

ROUTE ROUTE2506 = createNode("ROUTE");
ROUTE2506.fromNode = "Stop_vt12_RotationInterpolator";
ROUTE2506.fromField = "value_changed";
ROUTE2506.toNode = "hanim_vt12";
ROUTE2506.toField = "set_rotation";
children[134] = ROUTE2506;

ROUTE ROUTE2507 = createNode("ROUTE");
ROUTE2507.fromNode = "Stop_vt11_RotationInterpolator";
ROUTE2507.fromField = "value_changed";
ROUTE2507.toNode = "hanim_vt11";
ROUTE2507.toField = "set_rotation";
children[135] = ROUTE2507;

ROUTE ROUTE2508 = createNode("ROUTE");
ROUTE2508.fromNode = "Stop_vt10_RotationInterpolator";
ROUTE2508.fromField = "value_changed";
ROUTE2508.toNode = "hanim_vt10";
ROUTE2508.toField = "set_rotation";
children[136] = ROUTE2508;

ROUTE ROUTE2509 = createNode("ROUTE");
ROUTE2509.fromNode = "Stop_vt9_RotationInterpolator";
ROUTE2509.fromField = "value_changed";
ROUTE2509.toNode = "hanim_vt9";
ROUTE2509.toField = "set_rotation";
children[137] = ROUTE2509;

ROUTE ROUTE2510 = createNode("ROUTE");
ROUTE2510.fromNode = "Stop_vt8_RotationInterpolator";
ROUTE2510.fromField = "value_changed";
ROUTE2510.toNode = "hanim_vt8";
ROUTE2510.toField = "set_rotation";
children[138] = ROUTE2510;

ROUTE ROUTE2511 = createNode("ROUTE");
ROUTE2511.fromNode = "Stop_vt7_RotationInterpolator";
ROUTE2511.fromField = "value_changed";
ROUTE2511.toNode = "hanim_vt7";
ROUTE2511.toField = "set_rotation";
children[139] = ROUTE2511;

ROUTE ROUTE2512 = createNode("ROUTE");
ROUTE2512.fromNode = "Stop_vt6_RotationInterpolator";
ROUTE2512.fromField = "value_changed";
ROUTE2512.toNode = "hanim_vt6";
ROUTE2512.toField = "set_rotation";
children[140] = ROUTE2512;

ROUTE ROUTE2513 = createNode("ROUTE");
ROUTE2513.fromNode = "Stop_vt5_RotationInterpolator";
ROUTE2513.fromField = "value_changed";
ROUTE2513.toNode = "hanim_vt5";
ROUTE2513.toField = "set_rotation";
children[141] = ROUTE2513;

ROUTE ROUTE2514 = createNode("ROUTE");
ROUTE2514.fromNode = "Stop_vt4_RotationInterpolator";
ROUTE2514.fromField = "value_changed";
ROUTE2514.toNode = "hanim_vt4";
ROUTE2514.toField = "set_rotation";
children[142] = ROUTE2514;

ROUTE ROUTE2515 = createNode("ROUTE");
ROUTE2515.fromNode = "Stop_vt3_RotationInterpolator";
ROUTE2515.fromField = "value_changed";
ROUTE2515.toNode = "hanim_vt3";
ROUTE2515.toField = "set_rotation";
children[143] = ROUTE2515;

ROUTE ROUTE2516 = createNode("ROUTE");
ROUTE2516.fromNode = "Stop_vt2_RotationInterpolator";
ROUTE2516.fromField = "value_changed";
ROUTE2516.toNode = "hanim_vt2";
ROUTE2516.toField = "set_rotation";
children[144] = ROUTE2516;

ROUTE ROUTE2517 = createNode("ROUTE");
ROUTE2517.fromNode = "Stop_vt1_RotationInterpolator";
ROUTE2517.fromField = "value_changed";
ROUTE2517.toNode = "hanim_vt1";
ROUTE2517.toField = "set_rotation";
children[145] = ROUTE2517;

ROUTE ROUTE2518 = createNode("ROUTE");
ROUTE2518.fromNode = "Stop_vc7_RotationInterpolator";
ROUTE2518.fromField = "value_changed";
ROUTE2518.toNode = "hanim_vc7";
ROUTE2518.toField = "set_rotation";
children[146] = ROUTE2518;

ROUTE ROUTE2519 = createNode("ROUTE");
ROUTE2519.fromNode = "Stop_vc6_RotationInterpolator";
ROUTE2519.fromField = "value_changed";
ROUTE2519.toNode = "hanim_vc6";
ROUTE2519.toField = "set_rotation";
children[147] = ROUTE2519;

ROUTE ROUTE2520 = createNode("ROUTE");
ROUTE2520.fromNode = "Stop_vc5_RotationInterpolator";
ROUTE2520.fromField = "value_changed";
ROUTE2520.toNode = "hanim_vc5";
ROUTE2520.toField = "set_rotation";
children[148] = ROUTE2520;

ROUTE ROUTE2521 = createNode("ROUTE");
ROUTE2521.fromNode = "Stop_vc4_RotationInterpolator";
ROUTE2521.fromField = "value_changed";
ROUTE2521.toNode = "hanim_vc4";
ROUTE2521.toField = "set_rotation";
children[149] = ROUTE2521;

ROUTE ROUTE2522 = createNode("ROUTE");
ROUTE2522.fromNode = "Stop_vc3_RotationInterpolator";
ROUTE2522.fromField = "value_changed";
ROUTE2522.toNode = "hanim_vc3";
ROUTE2522.toField = "set_rotation";
children[150] = ROUTE2522;

ROUTE ROUTE2523 = createNode("ROUTE");
ROUTE2523.fromNode = "Stop_vc2_RotationInterpolator";
ROUTE2523.fromField = "value_changed";
ROUTE2523.toNode = "hanim_vc2";
ROUTE2523.toField = "set_rotation";
children[151] = ROUTE2523;

ROUTE ROUTE2524 = createNode("ROUTE");
ROUTE2524.fromNode = "Stop_vc1_RotationInterpolator";
ROUTE2524.fromField = "value_changed";
ROUTE2524.toNode = "hanim_vc1";
ROUTE2524.toField = "set_rotation";
children[152] = ROUTE2524;

ROUTE ROUTE2525 = createNode("ROUTE");
ROUTE2525.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE2525.fromField = "value_changed";
ROUTE2525.toNode = "hanim_skullbase";
ROUTE2525.toField = "set_rotation";
children[153] = ROUTE2525;

ROUTE ROUTE2526 = createNode("ROUTE");
ROUTE2526.fromNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE2526.fromField = "value_changed";
ROUTE2526.toNode = "hanim_l_eyeball_joint";
ROUTE2526.toField = "set_rotation";
children[154] = ROUTE2526;

ROUTE ROUTE2527 = createNode("ROUTE");
ROUTE2527.fromNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE2527.fromField = "value_changed";
ROUTE2527.toNode = "hanim_r_eyeball_joint";
ROUTE2527.toField = "set_rotation";
children[155] = ROUTE2527;

ROUTE ROUTE2528 = createNode("ROUTE");
ROUTE2528.fromNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE2528.fromField = "value_changed";
ROUTE2528.toNode = "hanim_l_sternoclavicular";
ROUTE2528.toField = "set_rotation";
children[156] = ROUTE2528;

ROUTE ROUTE2529 = createNode("ROUTE");
ROUTE2529.fromNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE2529.fromField = "value_changed";
ROUTE2529.toNode = "hanim_l_acromioclavicular";
ROUTE2529.toField = "set_rotation";
children[157] = ROUTE2529;

ROUTE ROUTE2530 = createNode("ROUTE");
ROUTE2530.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE2530.fromField = "value_changed";
ROUTE2530.toNode = "hanim_l_shoulder";
ROUTE2530.toField = "set_rotation";
children[158] = ROUTE2530;

ROUTE ROUTE2531 = createNode("ROUTE");
ROUTE2531.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE2531.fromField = "value_changed";
ROUTE2531.toNode = "hanim_l_elbow";
ROUTE2531.toField = "set_rotation";
children[159] = ROUTE2531;

ROUTE ROUTE2532 = createNode("ROUTE");
ROUTE2532.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE2532.fromField = "value_changed";
ROUTE2532.toNode = "hanim_l_wrist";
ROUTE2532.toField = "set_rotation";
children[160] = ROUTE2532;

ROUTE ROUTE2533 = createNode("ROUTE");
ROUTE2533.fromNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE2533.fromField = "value_changed";
ROUTE2533.toNode = "hanim_l_thumb1";
ROUTE2533.toField = "set_rotation";
children[161] = ROUTE2533;

ROUTE ROUTE2534 = createNode("ROUTE");
ROUTE2534.fromNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE2534.fromField = "value_changed";
ROUTE2534.toNode = "hanim_l_thumb2";
ROUTE2534.toField = "set_rotation";
children[162] = ROUTE2534;

ROUTE ROUTE2535 = createNode("ROUTE");
ROUTE2535.fromNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE2535.fromField = "value_changed";
ROUTE2535.toNode = "hanim_l_thumb3";
ROUTE2535.toField = "set_rotation";
children[163] = ROUTE2535;

ROUTE ROUTE2536 = createNode("ROUTE");
ROUTE2536.fromNode = "Stop_l_index0_RotationInterpolator";
ROUTE2536.fromField = "value_changed";
ROUTE2536.toNode = "hanim_l_index0";
ROUTE2536.toField = "set_rotation";
children[164] = ROUTE2536;

ROUTE ROUTE2537 = createNode("ROUTE");
ROUTE2537.fromNode = "Stop_l_index1_RotationInterpolator";
ROUTE2537.fromField = "value_changed";
ROUTE2537.toNode = "hanim_l_index1";
ROUTE2537.toField = "set_rotation";
children[165] = ROUTE2537;

ROUTE ROUTE2538 = createNode("ROUTE");
ROUTE2538.fromNode = "Stop_l_index2_RotationInterpolator";
ROUTE2538.fromField = "value_changed";
ROUTE2538.toNode = "hanim_l_index2";
ROUTE2538.toField = "set_rotation";
children[166] = ROUTE2538;

ROUTE ROUTE2539 = createNode("ROUTE");
ROUTE2539.fromNode = "Stop_l_index3_RotationInterpolator";
ROUTE2539.fromField = "value_changed";
ROUTE2539.toNode = "hanim_l_index3";
ROUTE2539.toField = "set_rotation";
children[167] = ROUTE2539;

ROUTE ROUTE2540 = createNode("ROUTE");
ROUTE2540.fromNode = "Stop_l_middle0_RotationInterpolator";
ROUTE2540.fromField = "value_changed";
ROUTE2540.toNode = "hanim_l_middle0";
ROUTE2540.toField = "set_rotation";
children[168] = ROUTE2540;

ROUTE ROUTE2541 = createNode("ROUTE");
ROUTE2541.fromNode = "Stop_l_middle1_RotationInterpolator";
ROUTE2541.fromField = "value_changed";
ROUTE2541.toNode = "hanim_l_middle1";
ROUTE2541.toField = "set_rotation";
children[169] = ROUTE2541;

ROUTE ROUTE2542 = createNode("ROUTE");
ROUTE2542.fromNode = "Stop_l_middle2_RotationInterpolator";
ROUTE2542.fromField = "value_changed";
ROUTE2542.toNode = "hanim_l_middle2";
ROUTE2542.toField = "set_rotation";
children[170] = ROUTE2542;

ROUTE ROUTE2543 = createNode("ROUTE");
ROUTE2543.fromNode = "Stop_l_middle3_RotationInterpolator";
ROUTE2543.fromField = "value_changed";
ROUTE2543.toNode = "hanim_l_middle3";
ROUTE2543.toField = "set_rotation";
children[171] = ROUTE2543;

ROUTE ROUTE2544 = createNode("ROUTE");
ROUTE2544.fromNode = "Stop_l_ring0_RotationInterpolator";
ROUTE2544.fromField = "value_changed";
ROUTE2544.toNode = "hanim_l_ring0";
ROUTE2544.toField = "set_rotation";
children[172] = ROUTE2544;

ROUTE ROUTE2545 = createNode("ROUTE");
ROUTE2545.fromNode = "Stop_l_ring1_RotationInterpolator";
ROUTE2545.fromField = "value_changed";
ROUTE2545.toNode = "hanim_l_ring1";
ROUTE2545.toField = "set_rotation";
children[173] = ROUTE2545;

ROUTE ROUTE2546 = createNode("ROUTE");
ROUTE2546.fromNode = "Stop_l_ring2_RotationInterpolator";
ROUTE2546.fromField = "value_changed";
ROUTE2546.toNode = "hanim_l_ring2";
ROUTE2546.toField = "set_rotation";
children[174] = ROUTE2546;

ROUTE ROUTE2547 = createNode("ROUTE");
ROUTE2547.fromNode = "Stop_l_ring3_RotationInterpolator";
ROUTE2547.fromField = "value_changed";
ROUTE2547.toNode = "hanim_l_ring3";
ROUTE2547.toField = "set_rotation";
children[175] = ROUTE2547;

ROUTE ROUTE2548 = createNode("ROUTE");
ROUTE2548.fromNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE2548.fromField = "value_changed";
ROUTE2548.toNode = "hanim_l_pinky0";
ROUTE2548.toField = "set_rotation";
children[176] = ROUTE2548;

ROUTE ROUTE2549 = createNode("ROUTE");
ROUTE2549.fromNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE2549.fromField = "value_changed";
ROUTE2549.toNode = "hanim_l_pinky1";
ROUTE2549.toField = "set_rotation";
children[177] = ROUTE2549;

ROUTE ROUTE2550 = createNode("ROUTE");
ROUTE2550.fromNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE2550.fromField = "value_changed";
ROUTE2550.toNode = "hanim_l_pinky2";
ROUTE2550.toField = "set_rotation";
children[178] = ROUTE2550;

ROUTE ROUTE2551 = createNode("ROUTE");
ROUTE2551.fromNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE2551.fromField = "value_changed";
ROUTE2551.toNode = "hanim_l_pinky3";
ROUTE2551.toField = "set_rotation";
children[179] = ROUTE2551;

ROUTE ROUTE2552 = createNode("ROUTE");
ROUTE2552.fromNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE2552.fromField = "value_changed";
ROUTE2552.toNode = "hanim_r_sternoclavicular";
ROUTE2552.toField = "set_rotation";
children[180] = ROUTE2552;

ROUTE ROUTE2553 = createNode("ROUTE");
ROUTE2553.fromNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE2553.fromField = "value_changed";
ROUTE2553.toNode = "hanim_r_acromioclavicular";
ROUTE2553.toField = "set_rotation";
children[181] = ROUTE2553;

ROUTE ROUTE2554 = createNode("ROUTE");
ROUTE2554.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE2554.fromField = "value_changed";
ROUTE2554.toNode = "hanim_r_shoulder";
ROUTE2554.toField = "set_rotation";
children[182] = ROUTE2554;

ROUTE ROUTE2555 = createNode("ROUTE");
ROUTE2555.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE2555.fromField = "value_changed";
ROUTE2555.toNode = "hanim_r_elbow";
ROUTE2555.toField = "set_rotation";
children[183] = ROUTE2555;

ROUTE ROUTE2556 = createNode("ROUTE");
ROUTE2556.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE2556.fromField = "value_changed";
ROUTE2556.toNode = "hanim_r_wrist";
ROUTE2556.toField = "set_rotation";
children[184] = ROUTE2556;

ROUTE ROUTE2557 = createNode("ROUTE");
ROUTE2557.fromNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE2557.fromField = "value_changed";
ROUTE2557.toNode = "hanim_r_thumb1";
ROUTE2557.toField = "set_rotation";
children[185] = ROUTE2557;

ROUTE ROUTE2558 = createNode("ROUTE");
ROUTE2558.fromNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE2558.fromField = "value_changed";
ROUTE2558.toNode = "hanim_r_thumb2";
ROUTE2558.toField = "set_rotation";
children[186] = ROUTE2558;

ROUTE ROUTE2559 = createNode("ROUTE");
ROUTE2559.fromNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE2559.fromField = "value_changed";
ROUTE2559.toNode = "hanim_r_thumb3";
ROUTE2559.toField = "set_rotation";
children[187] = ROUTE2559;

ROUTE ROUTE2560 = createNode("ROUTE");
ROUTE2560.fromNode = "Stop_r_index0_RotationInterpolator";
ROUTE2560.fromField = "value_changed";
ROUTE2560.toNode = "hanim_r_index0";
ROUTE2560.toField = "set_rotation";
children[188] = ROUTE2560;

ROUTE ROUTE2561 = createNode("ROUTE");
ROUTE2561.fromNode = "Stop_r_index1_RotationInterpolator";
ROUTE2561.fromField = "value_changed";
ROUTE2561.toNode = "hanim_r_index1";
ROUTE2561.toField = "set_rotation";
children[189] = ROUTE2561;

ROUTE ROUTE2562 = createNode("ROUTE");
ROUTE2562.fromNode = "Stop_r_index2_RotationInterpolator";
ROUTE2562.fromField = "value_changed";
ROUTE2562.toNode = "hanim_r_index2";
ROUTE2562.toField = "set_rotation";
children[190] = ROUTE2562;

ROUTE ROUTE2563 = createNode("ROUTE");
ROUTE2563.fromNode = "Stop_r_index3_RotationInterpolator";
ROUTE2563.fromField = "value_changed";
ROUTE2563.toNode = "hanim_r_index3";
ROUTE2563.toField = "set_rotation";
children[191] = ROUTE2563;

ROUTE ROUTE2564 = createNode("ROUTE");
ROUTE2564.fromNode = "Stop_r_middle0_RotationInterpolator";
ROUTE2564.fromField = "value_changed";
ROUTE2564.toNode = "hanim_r_middle0";
ROUTE2564.toField = "set_rotation";
children[192] = ROUTE2564;

ROUTE ROUTE2565 = createNode("ROUTE");
ROUTE2565.fromNode = "Stop_r_middle1_RotationInterpolator";
ROUTE2565.fromField = "value_changed";
ROUTE2565.toNode = "hanim_r_middle1";
ROUTE2565.toField = "set_rotation";
children[193] = ROUTE2565;

ROUTE ROUTE2566 = createNode("ROUTE");
ROUTE2566.fromNode = "Stop_r_middle2_RotationInterpolator";
ROUTE2566.fromField = "value_changed";
ROUTE2566.toNode = "hanim_r_middle2";
ROUTE2566.toField = "set_rotation";
children[194] = ROUTE2566;

ROUTE ROUTE2567 = createNode("ROUTE");
ROUTE2567.fromNode = "Stop_r_middle3_RotationInterpolator";
ROUTE2567.fromField = "value_changed";
ROUTE2567.toNode = "hanim_r_middle3";
ROUTE2567.toField = "set_rotation";
children[195] = ROUTE2567;

ROUTE ROUTE2568 = createNode("ROUTE");
ROUTE2568.fromNode = "Stop_r_ring0_RotationInterpolator";
ROUTE2568.fromField = "value_changed";
ROUTE2568.toNode = "hanim_r_ring0";
ROUTE2568.toField = "set_rotation";
children[196] = ROUTE2568;

ROUTE ROUTE2569 = createNode("ROUTE");
ROUTE2569.fromNode = "Stop_r_ring1_RotationInterpolator";
ROUTE2569.fromField = "value_changed";
ROUTE2569.toNode = "hanim_r_ring1";
ROUTE2569.toField = "set_rotation";
children[197] = ROUTE2569;

ROUTE ROUTE2570 = createNode("ROUTE");
ROUTE2570.fromNode = "Stop_r_ring2_RotationInterpolator";
ROUTE2570.fromField = "value_changed";
ROUTE2570.toNode = "hanim_r_ring2";
ROUTE2570.toField = "set_rotation";
children[198] = ROUTE2570;

ROUTE ROUTE2571 = createNode("ROUTE");
ROUTE2571.fromNode = "Stop_r_ring3_RotationInterpolator";
ROUTE2571.fromField = "value_changed";
ROUTE2571.toNode = "hanim_r_ring3";
ROUTE2571.toField = "set_rotation";
children[199] = ROUTE2571;

ROUTE ROUTE2572 = createNode("ROUTE");
ROUTE2572.fromNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE2572.fromField = "value_changed";
ROUTE2572.toNode = "hanim_r_pinky0";
ROUTE2572.toField = "set_rotation";
children[200] = ROUTE2572;

ROUTE ROUTE2573 = createNode("ROUTE");
ROUTE2573.fromNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE2573.fromField = "value_changed";
ROUTE2573.toNode = "hanim_r_pinky1";
ROUTE2573.toField = "set_rotation";
children[201] = ROUTE2573;

ROUTE ROUTE2574 = createNode("ROUTE");
ROUTE2574.fromNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE2574.fromField = "value_changed";
ROUTE2574.toNode = "hanim_r_pinky2";
ROUTE2574.toField = "set_rotation";
children[202] = ROUTE2574;

ROUTE ROUTE2575 = createNode("ROUTE");
ROUTE2575.fromNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE2575.fromField = "value_changed";
ROUTE2575.toNode = "hanim_r_pinky3";
ROUTE2575.toField = "set_rotation";
children[203] = ROUTE2575;

ROUTE ROUTE2576 = createNode("ROUTE");
ROUTE2576.fromNode = "StandTimer";
ROUTE2576.fromField = "fraction_changed";
ROUTE2576.toNode = "Stand_r_ankle_RotationInterpolator";
ROUTE2576.toField = "set_fraction";
children[204] = ROUTE2576;

ROUTE ROUTE2577 = createNode("ROUTE");
ROUTE2577.fromNode = "StandTimer";
ROUTE2577.fromField = "fraction_changed";
ROUTE2577.toNode = "Stand_r_knee_RotationInterpolator";
ROUTE2577.toField = "set_fraction";
children[205] = ROUTE2577;

ROUTE ROUTE2578 = createNode("ROUTE");
ROUTE2578.fromNode = "StandTimer";
ROUTE2578.fromField = "fraction_changed";
ROUTE2578.toNode = "Stand_r_hip_RotationInterpolator";
ROUTE2578.toField = "set_fraction";
children[206] = ROUTE2578;

ROUTE ROUTE2579 = createNode("ROUTE");
ROUTE2579.fromNode = "StandTimer";
ROUTE2579.fromField = "fraction_changed";
ROUTE2579.toNode = "Stand_l_ankle_RotationInterpolator";
ROUTE2579.toField = "set_fraction";
children[207] = ROUTE2579;

ROUTE ROUTE2580 = createNode("ROUTE");
ROUTE2580.fromNode = "StandTimer";
ROUTE2580.fromField = "fraction_changed";
ROUTE2580.toNode = "Stand_l_knee_RotationInterpolator";
ROUTE2580.toField = "set_fraction";
children[208] = ROUTE2580;

ROUTE ROUTE2581 = createNode("ROUTE");
ROUTE2581.fromNode = "StandTimer";
ROUTE2581.fromField = "fraction_changed";
ROUTE2581.toNode = "Stand_l_hip_RotationInterpolator";
ROUTE2581.toField = "set_fraction";
children[209] = ROUTE2581;

ROUTE ROUTE2582 = createNode("ROUTE");
ROUTE2582.fromNode = "StandTimer";
ROUTE2582.fromField = "fraction_changed";
ROUTE2582.toNode = "Stand_lower_body_RotationInterpolator";
ROUTE2582.toField = "set_fraction";
children[210] = ROUTE2582;

ROUTE ROUTE2583 = createNode("ROUTE");
ROUTE2583.fromNode = "StandTimer";
ROUTE2583.fromField = "fraction_changed";
ROUTE2583.toNode = "Stand_r_wrist_RotationInterpolator";
ROUTE2583.toField = "set_fraction";
children[211] = ROUTE2583;

ROUTE ROUTE2584 = createNode("ROUTE");
ROUTE2584.fromNode = "StandTimer";
ROUTE2584.fromField = "fraction_changed";
ROUTE2584.toNode = "Stand_r_elbow_RotationInterpolator";
ROUTE2584.toField = "set_fraction";
children[212] = ROUTE2584;

ROUTE ROUTE2585 = createNode("ROUTE");
ROUTE2585.fromNode = "StandTimer";
ROUTE2585.fromField = "fraction_changed";
ROUTE2585.toNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE2585.toField = "set_fraction";
children[213] = ROUTE2585;

ROUTE ROUTE2586 = createNode("ROUTE");
ROUTE2586.fromNode = "StandTimer";
ROUTE2586.fromField = "fraction_changed";
ROUTE2586.toNode = "Stand_l_wrist_RotationInterpolator";
ROUTE2586.toField = "set_fraction";
children[214] = ROUTE2586;

ROUTE ROUTE2587 = createNode("ROUTE");
ROUTE2587.fromNode = "StandTimer";
ROUTE2587.fromField = "fraction_changed";
ROUTE2587.toNode = "Stand_l_elbow_RotationInterpolator";
ROUTE2587.toField = "set_fraction";
children[215] = ROUTE2587;

ROUTE ROUTE2588 = createNode("ROUTE");
ROUTE2588.fromNode = "StandTimer";
ROUTE2588.fromField = "fraction_changed";
ROUTE2588.toNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE2588.toField = "set_fraction";
children[216] = ROUTE2588;

ROUTE ROUTE2589 = createNode("ROUTE");
ROUTE2589.fromNode = "StandTimer";
ROUTE2589.fromField = "fraction_changed";
ROUTE2589.toNode = "Stand_head_RotationInterpolator";
ROUTE2589.toField = "set_fraction";
children[217] = ROUTE2589;

ROUTE ROUTE2590 = createNode("ROUTE");
ROUTE2590.fromNode = "StandTimer";
ROUTE2590.fromField = "fraction_changed";
ROUTE2590.toNode = "Stand_neck_RotationInterpolator";
ROUTE2590.toField = "set_fraction";
children[218] = ROUTE2590;

ROUTE ROUTE2591 = createNode("ROUTE");
ROUTE2591.fromNode = "StandTimer";
ROUTE2591.fromField = "fraction_changed";
ROUTE2591.toNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE2591.toField = "set_fraction";
children[219] = ROUTE2591;

ROUTE ROUTE2592 = createNode("ROUTE");
ROUTE2592.fromNode = "StandTimer";
ROUTE2592.fromField = "fraction_changed";
ROUTE2592.toNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE2592.toField = "set_fraction";
children[220] = ROUTE2592;

ROUTE ROUTE2593 = createNode("ROUTE");
ROUTE2593.fromNode = "StandTimer";
ROUTE2593.fromField = "fraction_changed";
ROUTE2593.toNode = "Stand_upper_body_RotationInterpolator";
ROUTE2593.toField = "set_fraction";
children[221] = ROUTE2593;

ROUTE ROUTE2594 = createNode("ROUTE");
ROUTE2594.fromNode = "StandTimer";
ROUTE2594.fromField = "fraction_changed";
ROUTE2594.toNode = "Stand_whole_body_RotationInterpolator";
ROUTE2594.toField = "set_fraction";
children[222] = ROUTE2594;

ROUTE ROUTE2595 = createNode("ROUTE");
ROUTE2595.fromNode = "StandTimer";
ROUTE2595.fromField = "fraction_changed";
ROUTE2595.toNode = "Stand_whole_body_TranslationInterpolator";
ROUTE2595.toField = "set_fraction";
children[223] = ROUTE2595;

ROUTE ROUTE2596 = createNode("ROUTE");
ROUTE2596.fromNode = "StandTimer";
ROUTE2596.fromField = "fraction_changed";
ROUTE2596.toNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE2596.toField = "set_fraction";
children[224] = ROUTE2596;

ROUTE ROUTE2597 = createNode("ROUTE");
ROUTE2597.fromNode = "StandTimer";
ROUTE2597.fromField = "fraction_changed";
ROUTE2597.toNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE2597.toField = "set_fraction";
children[225] = ROUTE2597;

ROUTE ROUTE2598 = createNode("ROUTE");
ROUTE2598.fromNode = "StandTimer";
ROUTE2598.fromField = "fraction_changed";
ROUTE2598.toNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE2598.toField = "set_fraction";
children[226] = ROUTE2598;

ROUTE ROUTE2599 = createNode("ROUTE");
ROUTE2599.fromNode = "StandTimer";
ROUTE2599.fromField = "fraction_changed";
ROUTE2599.toNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE2599.toField = "set_fraction";
children[227] = ROUTE2599;

ROUTE ROUTE2600 = createNode("ROUTE");
ROUTE2600.fromNode = "StandTimer";
ROUTE2600.fromField = "fraction_changed";
ROUTE2600.toNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2600.toField = "set_fraction";
children[228] = ROUTE2600;

ROUTE ROUTE2601 = createNode("ROUTE");
ROUTE2601.fromNode = "StandTimer";
ROUTE2601.fromField = "fraction_changed";
ROUTE2601.toNode = "Stand_sacroiliac_YawInterpolator";
ROUTE2601.toField = "set_fraction";
children[229] = ROUTE2601;

ROUTE ROUTE2602 = createNode("ROUTE");
ROUTE2602.fromNode = "StandTimer";
ROUTE2602.fromField = "fraction_changed";
ROUTE2602.toNode = "Stand_vl5_YawInterpolator";
ROUTE2602.toField = "set_fraction";
children[230] = ROUTE2602;

ROUTE ROUTE2603 = createNode("ROUTE");
ROUTE2603.fromNode = "StandTimer";
ROUTE2603.fromField = "fraction_changed";
ROUTE2603.toNode = "Stand_vc6_YawInterpolator";
ROUTE2603.toField = "set_fraction";
children[231] = ROUTE2603;

ROUTE ROUTE2604 = createNode("ROUTE");
ROUTE2604.fromNode = "StandTimer";
ROUTE2604.fromField = "fraction_changed";
ROUTE2604.toNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE2604.toField = "set_fraction";
children[232] = ROUTE2604;

ROUTE ROUTE2605 = createNode("ROUTE");
ROUTE2605.fromNode = "StandTimer";
ROUTE2605.fromField = "fraction_changed";
ROUTE2605.toNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE2605.toField = "set_fraction";
children[233] = ROUTE2605;

ROUTE ROUTE2606 = createNode("ROUTE");
ROUTE2606.fromNode = "StandTimer";
ROUTE2606.fromField = "fraction_changed";
ROUTE2606.toNode = "Stand_r_index1_RollInterpolator";
ROUTE2606.toField = "set_fraction";
children[234] = ROUTE2606;

ROUTE ROUTE2607 = createNode("ROUTE");
ROUTE2607.fromNode = "StandTimer";
ROUTE2607.fromField = "fraction_changed";
ROUTE2607.toNode = "Stand_r_index2_RollInterpolator";
ROUTE2607.toField = "set_fraction";
children[235] = ROUTE2607;

ROUTE ROUTE2608 = createNode("ROUTE");
ROUTE2608.fromNode = "StandTimer";
ROUTE2608.fromField = "fraction_changed";
ROUTE2608.toNode = "Stand_r_index3_RollInterpolator";
ROUTE2608.toField = "set_fraction";
children[236] = ROUTE2608;

ROUTE ROUTE2609 = createNode("ROUTE");
ROUTE2609.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE2609.fromField = "value_changed";
ROUTE2609.toNode = "hanim_r_ankle";
ROUTE2609.toField = "set_rotation";
children[237] = ROUTE2609;

ROUTE ROUTE2610 = createNode("ROUTE");
ROUTE2610.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE2610.fromField = "value_changed";
ROUTE2610.toNode = "hanim_r_knee";
ROUTE2610.toField = "set_rotation";
children[238] = ROUTE2610;

ROUTE ROUTE2611 = createNode("ROUTE");
ROUTE2611.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE2611.fromField = "value_changed";
ROUTE2611.toNode = "hanim_r_hip";
ROUTE2611.toField = "set_rotation";
children[239] = ROUTE2611;

ROUTE ROUTE2612 = createNode("ROUTE");
ROUTE2612.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE2612.fromField = "value_changed";
ROUTE2612.toNode = "hanim_l_ankle";
ROUTE2612.toField = "set_rotation";
children[240] = ROUTE2612;

ROUTE ROUTE2613 = createNode("ROUTE");
ROUTE2613.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE2613.fromField = "value_changed";
ROUTE2613.toNode = "hanim_l_knee";
ROUTE2613.toField = "set_rotation";
children[241] = ROUTE2613;

ROUTE ROUTE2614 = createNode("ROUTE");
ROUTE2614.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE2614.fromField = "value_changed";
ROUTE2614.toNode = "hanim_l_hip";
ROUTE2614.toField = "set_rotation";
children[242] = ROUTE2614;

ROUTE ROUTE2615 = createNode("ROUTE");
ROUTE2615.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE2615.fromField = "value_changed";
ROUTE2615.toNode = "hanim_r_wrist";
ROUTE2615.toField = "set_rotation";
children[243] = ROUTE2615;

ROUTE ROUTE2616 = createNode("ROUTE");
ROUTE2616.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE2616.fromField = "value_changed";
ROUTE2616.toNode = "hanim_r_elbow";
ROUTE2616.toField = "set_rotation";
children[244] = ROUTE2616;

ROUTE ROUTE2617 = createNode("ROUTE");
ROUTE2617.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE2617.fromField = "value_changed";
ROUTE2617.toNode = "hanim_r_shoulder";
ROUTE2617.toField = "set_rotation";
children[245] = ROUTE2617;

ROUTE ROUTE2618 = createNode("ROUTE");
ROUTE2618.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE2618.fromField = "value_changed";
ROUTE2618.toNode = "hanim_l_wrist";
ROUTE2618.toField = "set_rotation";
children[246] = ROUTE2618;

ROUTE ROUTE2619 = createNode("ROUTE");
ROUTE2619.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE2619.fromField = "value_changed";
ROUTE2619.toNode = "hanim_l_elbow";
ROUTE2619.toField = "set_rotation";
children[247] = ROUTE2619;

ROUTE ROUTE2620 = createNode("ROUTE");
ROUTE2620.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE2620.fromField = "value_changed";
ROUTE2620.toNode = "hanim_l_shoulder";
ROUTE2620.toField = "set_rotation";
children[248] = ROUTE2620;

ROUTE ROUTE2621 = createNode("ROUTE");
ROUTE2621.fromNode = "Stand_head_RotationInterpolator";
ROUTE2621.fromField = "value_changed";
ROUTE2621.toNode = "hanim_skullbase";
ROUTE2621.toField = "set_rotation";
children[249] = ROUTE2621;

ROUTE ROUTE2622 = createNode("ROUTE");
ROUTE2622.fromNode = "Stand_neck_RotationInterpolator";
ROUTE2622.fromField = "value_changed";
ROUTE2622.toNode = "hanim_vc7";
ROUTE2622.toField = "set_rotation";
children[250] = ROUTE2622;

ROUTE ROUTE2623 = createNode("ROUTE");
ROUTE2623.fromNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE2623.fromField = "value_changed";
ROUTE2623.toNode = "hanim_l_eyeball_joint";
ROUTE2623.toField = "set_rotation";
children[251] = ROUTE2623;

ROUTE ROUTE2624 = createNode("ROUTE");
ROUTE2624.fromNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE2624.fromField = "value_changed";
ROUTE2624.toNode = "hanim_r_eyeball_joint";
ROUTE2624.toField = "set_rotation";
children[252] = ROUTE2624;

ROUTE ROUTE2625 = createNode("ROUTE");
ROUTE2625.fromNode = "Stand_upper_body_RotationInterpolator";
ROUTE2625.fromField = "value_changed";
ROUTE2625.toNode = "hanim_vl1";
ROUTE2625.toField = "set_rotation";
children[253] = ROUTE2625;

ROUTE ROUTE2626 = createNode("ROUTE");
ROUTE2626.fromNode = "Stand_lower_body_RotationInterpolator";
ROUTE2626.fromField = "value_changed";
ROUTE2626.toNode = "hanim_sacroiliac";
ROUTE2626.toField = "set_rotation";
children[254] = ROUTE2626;

ROUTE ROUTE2627 = createNode("ROUTE");
ROUTE2627.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE2627.fromField = "value_changed";
ROUTE2627.toNode = "hanim_humanoid_root";
ROUTE2627.toField = "set_rotation";
children[255] = ROUTE2627;

ROUTE ROUTE2628 = createNode("ROUTE");
ROUTE2628.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE2628.fromField = "value_changed";
ROUTE2628.toNode = "hanim_humanoid_root";
ROUTE2628.toField = "set_translation";
children[256] = ROUTE2628;

ROUTE ROUTE2629 = createNode("ROUTE");
ROUTE2629.fromNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE2629.fromField = "value_changed";
ROUTE2629.toNode = "hanim_l_sternoclavicular";
ROUTE2629.toField = "set_rotation";
children[257] = ROUTE2629;

ROUTE ROUTE2630 = createNode("ROUTE");
ROUTE2630.fromNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE2630.fromField = "value_changed";
ROUTE2630.toNode = "hanim_l_acromioclavicular";
ROUTE2630.toField = "set_rotation";
children[258] = ROUTE2630;

ROUTE ROUTE2631 = createNode("ROUTE");
ROUTE2631.fromNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE2631.fromField = "value_changed";
ROUTE2631.toNode = "hanim_r_sternoclavicular";
ROUTE2631.toField = "set_rotation";
children[259] = ROUTE2631;

ROUTE ROUTE2632 = createNode("ROUTE");
ROUTE2632.fromNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE2632.fromField = "value_changed";
ROUTE2632.toNode = "hanim_r_acromioclavicular";
ROUTE2632.toField = "set_rotation";
children[260] = ROUTE2632;

ROUTE ROUTE2633 = createNode("ROUTE");
ROUTE2633.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2633.fromField = "value_changed";
ROUTE2633.toNode = "hanim_l_metatarsal";
ROUTE2633.toField = "set_rotation";
children[261] = ROUTE2633;

ROUTE ROUTE2634 = createNode("ROUTE");
ROUTE2634.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2634.fromField = "value_changed";
ROUTE2634.toNode = "hanim_r_metatarsal";
ROUTE2634.toField = "set_rotation";
children[262] = ROUTE2634;

ROUTE ROUTE2635 = createNode("ROUTE");
ROUTE2635.fromNode = "Stand_sacroiliac_YawInterpolator";
ROUTE2635.fromField = "value_changed";
ROUTE2635.toNode = "hanim_sacroiliac";
ROUTE2635.toField = "set_rotation";
children[263] = ROUTE2635;

ROUTE ROUTE2636 = createNode("ROUTE");
ROUTE2636.fromNode = "Stand_vl5_YawInterpolator";
ROUTE2636.fromField = "value_changed";
ROUTE2636.toNode = "hanim_vl5";
ROUTE2636.toField = "set_rotation";
children[264] = ROUTE2636;

ROUTE ROUTE2637 = createNode("ROUTE");
ROUTE2637.fromNode = "Stand_vc6_YawInterpolator";
ROUTE2637.fromField = "value_changed";
ROUTE2637.toNode = "hanim_vc6";
ROUTE2637.toField = "set_rotation";
children[265] = ROUTE2637;

ROUTE ROUTE2638 = createNode("ROUTE");
ROUTE2638.fromNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE2638.fromField = "value_changed";
ROUTE2638.toNode = "hanim_l_thumb1";
ROUTE2638.toField = "set_rotation";
children[266] = ROUTE2638;

ROUTE ROUTE2639 = createNode("ROUTE");
ROUTE2639.fromNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE2639.fromField = "value_changed";
ROUTE2639.toNode = "hanim_r_thumb1";
ROUTE2639.toField = "set_rotation";
children[267] = ROUTE2639;

ROUTE ROUTE2640 = createNode("ROUTE");
ROUTE2640.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2640.fromField = "value_changed";
ROUTE2640.toNode = "hanim_r_index1";
ROUTE2640.toField = "set_rotation";
children[268] = ROUTE2640;

ROUTE ROUTE2641 = createNode("ROUTE");
ROUTE2641.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2641.fromField = "value_changed";
ROUTE2641.toNode = "hanim_r_index2";
ROUTE2641.toField = "set_rotation";
children[269] = ROUTE2641;

ROUTE ROUTE2642 = createNode("ROUTE");
ROUTE2642.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2642.fromField = "value_changed";
ROUTE2642.toNode = "hanim_r_index3";
ROUTE2642.toField = "set_rotation";
children[270] = ROUTE2642;

ROUTE ROUTE2643 = createNode("ROUTE");
ROUTE2643.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2643.fromField = "value_changed";
ROUTE2643.toNode = "hanim_r_middle1";
ROUTE2643.toField = "set_rotation";
children[271] = ROUTE2643;

ROUTE ROUTE2644 = createNode("ROUTE");
ROUTE2644.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2644.fromField = "value_changed";
ROUTE2644.toNode = "hanim_r_middle2";
ROUTE2644.toField = "set_rotation";
children[272] = ROUTE2644;

ROUTE ROUTE2645 = createNode("ROUTE");
ROUTE2645.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2645.fromField = "value_changed";
ROUTE2645.toNode = "hanim_r_middle3";
ROUTE2645.toField = "set_rotation";
children[273] = ROUTE2645;

ROUTE ROUTE2646 = createNode("ROUTE");
ROUTE2646.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2646.fromField = "value_changed";
ROUTE2646.toNode = "hanim_r_ring1";
ROUTE2646.toField = "set_rotation";
children[274] = ROUTE2646;

ROUTE ROUTE2647 = createNode("ROUTE");
ROUTE2647.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2647.fromField = "value_changed";
ROUTE2647.toNode = "hanim_r_ring2";
ROUTE2647.toField = "set_rotation";
children[275] = ROUTE2647;

ROUTE ROUTE2648 = createNode("ROUTE");
ROUTE2648.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2648.fromField = "value_changed";
ROUTE2648.toNode = "hanim_r_ring3";
ROUTE2648.toField = "set_rotation";
children[276] = ROUTE2648;

ROUTE ROUTE2649 = createNode("ROUTE");
ROUTE2649.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2649.fromField = "value_changed";
ROUTE2649.toNode = "hanim_r_pinky1";
ROUTE2649.toField = "set_rotation";
children[277] = ROUTE2649;

ROUTE ROUTE2650 = createNode("ROUTE");
ROUTE2650.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2650.fromField = "value_changed";
ROUTE2650.toNode = "hanim_r_pinky2";
ROUTE2650.toField = "set_rotation";
children[278] = ROUTE2650;

ROUTE ROUTE2651 = createNode("ROUTE");
ROUTE2651.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2651.fromField = "value_changed";
ROUTE2651.toNode = "hanim_r_pinky3";
ROUTE2651.toField = "set_rotation";
children[279] = ROUTE2651;

ROUTE ROUTE2652 = createNode("ROUTE");
ROUTE2652.fromNode = "PitchTimer";
ROUTE2652.fromField = "fraction_changed";
ROUTE2652.toNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE2652.toField = "set_fraction";
children[280] = ROUTE2652;

ROUTE ROUTE2653 = createNode("ROUTE");
ROUTE2653.fromNode = "PitchTimer";
ROUTE2653.fromField = "fraction_changed";
ROUTE2653.toNode = "Pitches_r_knee_RotationInterpolator";
ROUTE2653.toField = "set_fraction";
children[281] = ROUTE2653;

ROUTE ROUTE2654 = createNode("ROUTE");
ROUTE2654.fromNode = "PitchTimer";
ROUTE2654.fromField = "fraction_changed";
ROUTE2654.toNode = "Pitches_r_hip_RotationInterpolator";
ROUTE2654.toField = "set_fraction";
children[282] = ROUTE2654;

ROUTE ROUTE2655 = createNode("ROUTE");
ROUTE2655.fromNode = "PitchTimer";
ROUTE2655.fromField = "fraction_changed";
ROUTE2655.toNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE2655.toField = "set_fraction";
children[283] = ROUTE2655;

ROUTE ROUTE2656 = createNode("ROUTE");
ROUTE2656.fromNode = "PitchTimer";
ROUTE2656.fromField = "fraction_changed";
ROUTE2656.toNode = "Pitches_l_knee_RotationInterpolator";
ROUTE2656.toField = "set_fraction";
children[284] = ROUTE2656;

ROUTE ROUTE2657 = createNode("ROUTE");
ROUTE2657.fromNode = "PitchTimer";
ROUTE2657.fromField = "fraction_changed";
ROUTE2657.toNode = "Pitches_l_hip_RotationInterpolator";
ROUTE2657.toField = "set_fraction";
children[285] = ROUTE2657;

ROUTE ROUTE2658 = createNode("ROUTE");
ROUTE2658.fromNode = "PitchTimer";
ROUTE2658.fromField = "fraction_changed";
ROUTE2658.toNode = "Pitches_lower_body_RotationInterpolator";
ROUTE2658.toField = "set_fraction";
children[286] = ROUTE2658;

ROUTE ROUTE2659 = createNode("ROUTE");
ROUTE2659.fromNode = "PitchTimer";
ROUTE2659.fromField = "fraction_changed";
ROUTE2659.toNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE2659.toField = "set_fraction";
children[287] = ROUTE2659;

ROUTE ROUTE2660 = createNode("ROUTE");
ROUTE2660.fromNode = "PitchTimer";
ROUTE2660.fromField = "fraction_changed";
ROUTE2660.toNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE2660.toField = "set_fraction";
children[288] = ROUTE2660;

ROUTE ROUTE2661 = createNode("ROUTE");
ROUTE2661.fromNode = "PitchTimer";
ROUTE2661.fromField = "fraction_changed";
ROUTE2661.toNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE2661.toField = "set_fraction";
children[289] = ROUTE2661;

ROUTE ROUTE2662 = createNode("ROUTE");
ROUTE2662.fromNode = "PitchTimer";
ROUTE2662.fromField = "fraction_changed";
ROUTE2662.toNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE2662.toField = "set_fraction";
children[290] = ROUTE2662;

ROUTE ROUTE2663 = createNode("ROUTE");
ROUTE2663.fromNode = "PitchTimer";
ROUTE2663.fromField = "fraction_changed";
ROUTE2663.toNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE2663.toField = "set_fraction";
children[291] = ROUTE2663;

ROUTE ROUTE2664 = createNode("ROUTE");
ROUTE2664.fromNode = "PitchTimer";
ROUTE2664.fromField = "fraction_changed";
ROUTE2664.toNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE2664.toField = "set_fraction";
children[292] = ROUTE2664;

ROUTE ROUTE2665 = createNode("ROUTE");
ROUTE2665.fromNode = "PitchTimer";
ROUTE2665.fromField = "fraction_changed";
ROUTE2665.toNode = "Pitches_head_RotationInterpolator";
ROUTE2665.toField = "set_fraction";
children[293] = ROUTE2665;

ROUTE ROUTE2666 = createNode("ROUTE");
ROUTE2666.fromNode = "PitchTimer";
ROUTE2666.fromField = "fraction_changed";
ROUTE2666.toNode = "Pitches_neck_RotationInterpolator";
ROUTE2666.toField = "set_fraction";
children[294] = ROUTE2666;

ROUTE ROUTE2667 = createNode("ROUTE");
ROUTE2667.fromNode = "PitchTimer";
ROUTE2667.fromField = "fraction_changed";
ROUTE2667.toNode = "Pitches_upper_body_RotationInterpolator";
ROUTE2667.toField = "set_fraction";
children[295] = ROUTE2667;

ROUTE ROUTE2668 = createNode("ROUTE");
ROUTE2668.fromNode = "PitchTimer";
ROUTE2668.fromField = "fraction_changed";
ROUTE2668.toNode = "Pitches_whole_body_RotationInterpolator";
ROUTE2668.toField = "set_fraction";
children[296] = ROUTE2668;

ROUTE ROUTE2669 = createNode("ROUTE");
ROUTE2669.fromNode = "PitchTimer";
ROUTE2669.fromField = "fraction_changed";
ROUTE2669.toNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE2669.toField = "set_fraction";
children[297] = ROUTE2669;

ROUTE ROUTE2670 = createNode("ROUTE");
ROUTE2670.fromNode = "PitchTimer";
ROUTE2670.fromField = "fraction_changed";
ROUTE2670.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE2670.toField = "set_fraction";
children[298] = ROUTE2670;

ROUTE ROUTE2671 = createNode("ROUTE");
ROUTE2671.fromNode = "PitchTimer";
ROUTE2671.fromField = "fraction_changed";
ROUTE2671.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE2671.toField = "set_fraction";
children[299] = ROUTE2671;

ROUTE ROUTE2672 = createNode("ROUTE");
ROUTE2672.fromNode = "PitchTimer";
ROUTE2672.fromField = "fraction_changed";
ROUTE2672.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE2672.toField = "set_fraction";
children[300] = ROUTE2672;

ROUTE ROUTE2673 = createNode("ROUTE");
ROUTE2673.fromNode = "PitchTimer";
ROUTE2673.fromField = "fraction_changed";
ROUTE2673.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE2673.toField = "set_fraction";
children[301] = ROUTE2673;

ROUTE ROUTE2674 = createNode("ROUTE");
ROUTE2674.fromNode = "PitchTimer";
ROUTE2674.fromField = "fraction_changed";
ROUTE2674.toNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2674.toField = "set_fraction";
children[302] = ROUTE2674;

ROUTE ROUTE2675 = createNode("ROUTE");
ROUTE2675.fromNode = "PitchTimer";
ROUTE2675.fromField = "fraction_changed";
ROUTE2675.toNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE2675.toField = "set_fraction";
children[303] = ROUTE2675;

ROUTE ROUTE2676 = createNode("ROUTE");
ROUTE2676.fromNode = "PitchTimer";
ROUTE2676.fromField = "fraction_changed";
ROUTE2676.toNode = "Pitch_vl5_YawInterpolator";
ROUTE2676.toField = "set_fraction";
children[304] = ROUTE2676;

ROUTE ROUTE2677 = createNode("ROUTE");
ROUTE2677.fromNode = "PitchTimer";
ROUTE2677.fromField = "fraction_changed";
ROUTE2677.toNode = "Pitch_vc6_YawInterpolator";
ROUTE2677.toField = "set_fraction";
children[305] = ROUTE2677;

ROUTE ROUTE2678 = createNode("ROUTE");
ROUTE2678.fromNode = "PitchTimer";
ROUTE2678.fromField = "fraction_changed";
ROUTE2678.toNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE2678.toField = "set_fraction";
children[306] = ROUTE2678;

ROUTE ROUTE2679 = createNode("ROUTE");
ROUTE2679.fromNode = "PitchTimer";
ROUTE2679.fromField = "fraction_changed";
ROUTE2679.toNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE2679.toField = "set_fraction";
children[307] = ROUTE2679;

ROUTE ROUTE2680 = createNode("ROUTE");
ROUTE2680.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE2680.fromField = "value_changed";
ROUTE2680.toNode = "hanim_r_ankle";
ROUTE2680.toField = "set_rotation";
children[308] = ROUTE2680;

ROUTE ROUTE2681 = createNode("ROUTE");
ROUTE2681.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE2681.fromField = "value_changed";
ROUTE2681.toNode = "hanim_r_knee";
ROUTE2681.toField = "set_rotation";
children[309] = ROUTE2681;

ROUTE ROUTE2682 = createNode("ROUTE");
ROUTE2682.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE2682.fromField = "value_changed";
ROUTE2682.toNode = "hanim_r_hip";
ROUTE2682.toField = "set_rotation";
children[310] = ROUTE2682;

ROUTE ROUTE2683 = createNode("ROUTE");
ROUTE2683.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE2683.fromField = "value_changed";
ROUTE2683.toNode = "hanim_l_ankle";
ROUTE2683.toField = "set_rotation";
children[311] = ROUTE2683;

ROUTE ROUTE2684 = createNode("ROUTE");
ROUTE2684.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE2684.fromField = "value_changed";
ROUTE2684.toNode = "hanim_l_knee";
ROUTE2684.toField = "set_rotation";
children[312] = ROUTE2684;

ROUTE ROUTE2685 = createNode("ROUTE");
ROUTE2685.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE2685.fromField = "value_changed";
ROUTE2685.toNode = "hanim_l_hip";
ROUTE2685.toField = "set_rotation";
children[313] = ROUTE2685;

ROUTE ROUTE2686 = createNode("ROUTE");
ROUTE2686.fromNode = "Pitches_lower_body_RotationInterpolator";
ROUTE2686.fromField = "value_changed";
ROUTE2686.toNode = "hanim_sacroiliac";
ROUTE2686.toField = "set_rotation";
children[314] = ROUTE2686;

ROUTE ROUTE2687 = createNode("ROUTE");
ROUTE2687.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE2687.fromField = "value_changed";
ROUTE2687.toNode = "hanim_r_wrist";
ROUTE2687.toField = "set_rotation";
children[315] = ROUTE2687;

ROUTE ROUTE2688 = createNode("ROUTE");
ROUTE2688.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE2688.fromField = "value_changed";
ROUTE2688.toNode = "hanim_r_elbow";
ROUTE2688.toField = "set_rotation";
children[316] = ROUTE2688;

ROUTE ROUTE2689 = createNode("ROUTE");
ROUTE2689.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE2689.fromField = "value_changed";
ROUTE2689.toNode = "hanim_r_shoulder";
ROUTE2689.toField = "set_rotation";
children[317] = ROUTE2689;

ROUTE ROUTE2690 = createNode("ROUTE");
ROUTE2690.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE2690.fromField = "value_changed";
ROUTE2690.toNode = "hanim_l_wrist";
ROUTE2690.toField = "set_rotation";
children[318] = ROUTE2690;

ROUTE ROUTE2691 = createNode("ROUTE");
ROUTE2691.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE2691.fromField = "value_changed";
ROUTE2691.toNode = "hanim_l_elbow";
ROUTE2691.toField = "set_rotation";
children[319] = ROUTE2691;

ROUTE ROUTE2692 = createNode("ROUTE");
ROUTE2692.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE2692.fromField = "value_changed";
ROUTE2692.toNode = "hanim_l_shoulder";
ROUTE2692.toField = "set_rotation";
children[320] = ROUTE2692;

ROUTE ROUTE2693 = createNode("ROUTE");
ROUTE2693.fromNode = "Pitches_head_RotationInterpolator";
ROUTE2693.fromField = "value_changed";
ROUTE2693.toNode = "hanim_skullbase";
ROUTE2693.toField = "set_rotation";
children[321] = ROUTE2693;

ROUTE ROUTE2694 = createNode("ROUTE");
ROUTE2694.fromNode = "Pitches_neck_RotationInterpolator";
ROUTE2694.fromField = "value_changed";
ROUTE2694.toNode = "hanim_vc4";
ROUTE2694.toField = "set_rotation";
children[322] = ROUTE2694;

ROUTE ROUTE2695 = createNode("ROUTE");
ROUTE2695.fromNode = "Pitches_upper_body_RotationInterpolator";
ROUTE2695.fromField = "value_changed";
ROUTE2695.toNode = "hanim_vl1";
ROUTE2695.toField = "set_rotation";
children[323] = ROUTE2695;

ROUTE ROUTE2696 = createNode("ROUTE");
ROUTE2696.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE2696.fromField = "value_changed";
ROUTE2696.toNode = "hanim_humanoid_root";
ROUTE2696.toField = "set_rotation";
children[324] = ROUTE2696;

ROUTE ROUTE2697 = createNode("ROUTE");
ROUTE2697.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE2697.fromField = "value_changed";
ROUTE2697.toNode = "hanim_humanoid_root";
ROUTE2697.toField = "set_translation";
children[325] = ROUTE2697;

ROUTE ROUTE2698 = createNode("ROUTE");
ROUTE2698.fromNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE2698.fromField = "value_changed";
ROUTE2698.toNode = "hanim_l_sternoclavicular";
ROUTE2698.toField = "set_rotation";
children[326] = ROUTE2698;

ROUTE ROUTE2699 = createNode("ROUTE");
ROUTE2699.fromNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE2699.fromField = "value_changed";
ROUTE2699.toNode = "hanim_l_acromioclavicular";
ROUTE2699.toField = "set_rotation";
children[327] = ROUTE2699;

ROUTE ROUTE2700 = createNode("ROUTE");
ROUTE2700.fromNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE2700.fromField = "value_changed";
ROUTE2700.toNode = "hanim_r_sternoclavicular";
ROUTE2700.toField = "set_rotation";
children[328] = ROUTE2700;

ROUTE ROUTE2701 = createNode("ROUTE");
ROUTE2701.fromNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE2701.fromField = "value_changed";
ROUTE2701.toNode = "hanim_r_acromioclavicular";
ROUTE2701.toField = "set_rotation";
children[329] = ROUTE2701;

ROUTE ROUTE2702 = createNode("ROUTE");
ROUTE2702.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2702.fromField = "value_changed";
ROUTE2702.toNode = "hanim_l_metatarsal";
ROUTE2702.toField = "set_rotation";
children[330] = ROUTE2702;

ROUTE ROUTE2703 = createNode("ROUTE");
ROUTE2703.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2703.fromField = "value_changed";
ROUTE2703.toNode = "hanim_r_metatarsal";
ROUTE2703.toField = "set_rotation";
children[331] = ROUTE2703;

ROUTE ROUTE2704 = createNode("ROUTE");
ROUTE2704.fromNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE2704.fromField = "value_changed";
ROUTE2704.toNode = "hanim_sacroiliac";
ROUTE2704.toField = "set_rotation";
children[332] = ROUTE2704;

ROUTE ROUTE2705 = createNode("ROUTE");
ROUTE2705.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE2705.fromField = "value_changed";
ROUTE2705.toNode = "hanim_vl5";
ROUTE2705.toField = "set_rotation";
children[333] = ROUTE2705;

ROUTE ROUTE2706 = createNode("ROUTE");
ROUTE2706.fromNode = "Pitch_vc6_YawInterpolator";
ROUTE2706.fromField = "value_changed";
ROUTE2706.toNode = "hanim_vc6";
ROUTE2706.toField = "set_rotation";
children[334] = ROUTE2706;

ROUTE ROUTE2707 = createNode("ROUTE");
ROUTE2707.fromNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE2707.fromField = "value_changed";
ROUTE2707.toNode = "hanim_l_thumb1";
ROUTE2707.toField = "set_rotation";
children[335] = ROUTE2707;

ROUTE ROUTE2708 = createNode("ROUTE");
ROUTE2708.fromNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE2708.fromField = "value_changed";
ROUTE2708.toNode = "hanim_r_thumb1";
ROUTE2708.toField = "set_rotation";
children[336] = ROUTE2708;

ROUTE ROUTE2709 = createNode("ROUTE");
ROUTE2709.fromNode = "YawTimer";
ROUTE2709.fromField = "fraction_changed";
ROUTE2709.toNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE2709.toField = "set_fraction";
children[337] = ROUTE2709;

ROUTE ROUTE2710 = createNode("ROUTE");
ROUTE2710.fromNode = "YawTimer";
ROUTE2710.fromField = "fraction_changed";
ROUTE2710.toNode = "Yaws_r_knee_RotationInterpolator";
ROUTE2710.toField = "set_fraction";
children[338] = ROUTE2710;

ROUTE ROUTE2711 = createNode("ROUTE");
ROUTE2711.fromNode = "YawTimer";
ROUTE2711.fromField = "fraction_changed";
ROUTE2711.toNode = "Yaws_r_hip_RotationInterpolator";
ROUTE2711.toField = "set_fraction";
children[339] = ROUTE2711;

ROUTE ROUTE2712 = createNode("ROUTE");
ROUTE2712.fromNode = "YawTimer";
ROUTE2712.fromField = "fraction_changed";
ROUTE2712.toNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE2712.toField = "set_fraction";
children[340] = ROUTE2712;

ROUTE ROUTE2713 = createNode("ROUTE");
ROUTE2713.fromNode = "YawTimer";
ROUTE2713.fromField = "fraction_changed";
ROUTE2713.toNode = "Yaws_l_knee_RotationInterpolator";
ROUTE2713.toField = "set_fraction";
children[341] = ROUTE2713;

ROUTE ROUTE2714 = createNode("ROUTE");
ROUTE2714.fromNode = "YawTimer";
ROUTE2714.fromField = "fraction_changed";
ROUTE2714.toNode = "Yaws_l_hip_RotationInterpolator";
ROUTE2714.toField = "set_fraction";
children[342] = ROUTE2714;

ROUTE ROUTE2715 = createNode("ROUTE");
ROUTE2715.fromNode = "YawTimer";
ROUTE2715.fromField = "fraction_changed";
ROUTE2715.toNode = "Yaws_lower_body_RotationInterpolator";
ROUTE2715.toField = "set_fraction";
children[343] = ROUTE2715;

ROUTE ROUTE2716 = createNode("ROUTE");
ROUTE2716.fromNode = "YawTimer";
ROUTE2716.fromField = "fraction_changed";
ROUTE2716.toNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE2716.toField = "set_fraction";
children[344] = ROUTE2716;

ROUTE ROUTE2717 = createNode("ROUTE");
ROUTE2717.fromNode = "YawTimer";
ROUTE2717.fromField = "fraction_changed";
ROUTE2717.toNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE2717.toField = "set_fraction";
children[345] = ROUTE2717;

ROUTE ROUTE2718 = createNode("ROUTE");
ROUTE2718.fromNode = "YawTimer";
ROUTE2718.fromField = "fraction_changed";
ROUTE2718.toNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE2718.toField = "set_fraction";
children[346] = ROUTE2718;

ROUTE ROUTE2719 = createNode("ROUTE");
ROUTE2719.fromNode = "YawTimer";
ROUTE2719.fromField = "fraction_changed";
ROUTE2719.toNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE2719.toField = "set_fraction";
children[347] = ROUTE2719;

ROUTE ROUTE2720 = createNode("ROUTE");
ROUTE2720.fromNode = "YawTimer";
ROUTE2720.fromField = "fraction_changed";
ROUTE2720.toNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE2720.toField = "set_fraction";
children[348] = ROUTE2720;

ROUTE ROUTE2721 = createNode("ROUTE");
ROUTE2721.fromNode = "YawTimer";
ROUTE2721.fromField = "fraction_changed";
ROUTE2721.toNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE2721.toField = "set_fraction";
children[349] = ROUTE2721;

ROUTE ROUTE2722 = createNode("ROUTE");
ROUTE2722.fromNode = "YawTimer";
ROUTE2722.fromField = "fraction_changed";
ROUTE2722.toNode = "Yaws_head_RotationInterpolator";
ROUTE2722.toField = "set_fraction";
children[350] = ROUTE2722;

ROUTE ROUTE2723 = createNode("ROUTE");
ROUTE2723.fromNode = "YawTimer";
ROUTE2723.fromField = "fraction_changed";
ROUTE2723.toNode = "Yaws_neck_RotationInterpolator";
ROUTE2723.toField = "set_fraction";
children[351] = ROUTE2723;

ROUTE ROUTE2724 = createNode("ROUTE");
ROUTE2724.fromNode = "YawTimer";
ROUTE2724.fromField = "fraction_changed";
ROUTE2724.toNode = "Yaws_upper_body_RotationInterpolator";
ROUTE2724.toField = "set_fraction";
children[352] = ROUTE2724;

ROUTE ROUTE2725 = createNode("ROUTE");
ROUTE2725.fromNode = "YawTimer";
ROUTE2725.fromField = "fraction_changed";
ROUTE2725.toNode = "Yaws_whole_body_RotationInterpolator";
ROUTE2725.toField = "set_fraction";
children[353] = ROUTE2725;

ROUTE ROUTE2726 = createNode("ROUTE");
ROUTE2726.fromNode = "YawTimer";
ROUTE2726.fromField = "fraction_changed";
ROUTE2726.toNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE2726.toField = "set_fraction";
children[354] = ROUTE2726;

ROUTE ROUTE2727 = createNode("ROUTE");
ROUTE2727.fromNode = "YawTimer";
ROUTE2727.fromField = "fraction_changed";
ROUTE2727.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE2727.toField = "set_fraction";
children[355] = ROUTE2727;

ROUTE ROUTE2728 = createNode("ROUTE");
ROUTE2728.fromNode = "YawTimer";
ROUTE2728.fromField = "fraction_changed";
ROUTE2728.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE2728.toField = "set_fraction";
children[356] = ROUTE2728;

ROUTE ROUTE2729 = createNode("ROUTE");
ROUTE2729.fromNode = "YawTimer";
ROUTE2729.fromField = "fraction_changed";
ROUTE2729.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE2729.toField = "set_fraction";
children[357] = ROUTE2729;

ROUTE ROUTE2730 = createNode("ROUTE");
ROUTE2730.fromNode = "YawTimer";
ROUTE2730.fromField = "fraction_changed";
ROUTE2730.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE2730.toField = "set_fraction";
children[358] = ROUTE2730;

ROUTE ROUTE2731 = createNode("ROUTE");
ROUTE2731.fromNode = "YawTimer";
ROUTE2731.fromField = "fraction_changed";
ROUTE2731.toNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2731.toField = "set_fraction";
children[359] = ROUTE2731;

ROUTE ROUTE2732 = createNode("ROUTE");
ROUTE2732.fromNode = "YawTimer";
ROUTE2732.fromField = "fraction_changed";
ROUTE2732.toNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE2732.toField = "set_fraction";
children[360] = ROUTE2732;

ROUTE ROUTE2733 = createNode("ROUTE");
ROUTE2733.fromNode = "YawTimer";
ROUTE2733.fromField = "fraction_changed";
ROUTE2733.toNode = "Yaw_vl5_YawInterpolator";
ROUTE2733.toField = "set_fraction";
children[361] = ROUTE2733;

ROUTE ROUTE2734 = createNode("ROUTE");
ROUTE2734.fromNode = "YawTimer";
ROUTE2734.fromField = "fraction_changed";
ROUTE2734.toNode = "Yaw_vc6_YawInterpolator";
ROUTE2734.toField = "set_fraction";
children[362] = ROUTE2734;

ROUTE ROUTE2735 = createNode("ROUTE");
ROUTE2735.fromNode = "YawTimer";
ROUTE2735.fromField = "fraction_changed";
ROUTE2735.toNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE2735.toField = "set_fraction";
children[363] = ROUTE2735;

ROUTE ROUTE2736 = createNode("ROUTE");
ROUTE2736.fromNode = "YawTimer";
ROUTE2736.fromField = "fraction_changed";
ROUTE2736.toNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE2736.toField = "set_fraction";
children[364] = ROUTE2736;

ROUTE ROUTE2737 = createNode("ROUTE");
ROUTE2737.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE2737.fromField = "value_changed";
ROUTE2737.toNode = "hanim_r_ankle";
ROUTE2737.toField = "set_rotation";
children[365] = ROUTE2737;

ROUTE ROUTE2738 = createNode("ROUTE");
ROUTE2738.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE2738.fromField = "value_changed";
ROUTE2738.toNode = "hanim_r_knee";
ROUTE2738.toField = "set_rotation";
children[366] = ROUTE2738;

ROUTE ROUTE2739 = createNode("ROUTE");
ROUTE2739.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE2739.fromField = "value_changed";
ROUTE2739.toNode = "hanim_r_hip";
ROUTE2739.toField = "set_rotation";
children[367] = ROUTE2739;

ROUTE ROUTE2740 = createNode("ROUTE");
ROUTE2740.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE2740.fromField = "value_changed";
ROUTE2740.toNode = "hanim_l_ankle";
ROUTE2740.toField = "set_rotation";
children[368] = ROUTE2740;

ROUTE ROUTE2741 = createNode("ROUTE");
ROUTE2741.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE2741.fromField = "value_changed";
ROUTE2741.toNode = "hanim_l_knee";
ROUTE2741.toField = "set_rotation";
children[369] = ROUTE2741;

ROUTE ROUTE2742 = createNode("ROUTE");
ROUTE2742.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE2742.fromField = "value_changed";
ROUTE2742.toNode = "hanim_l_hip";
ROUTE2742.toField = "set_rotation";
children[370] = ROUTE2742;

ROUTE ROUTE2743 = createNode("ROUTE");
ROUTE2743.fromNode = "Yaws_lower_body_RotationInterpolator";
ROUTE2743.fromField = "value_changed";
ROUTE2743.toNode = "hanim_sacroiliac";
ROUTE2743.toField = "set_rotation";
children[371] = ROUTE2743;

ROUTE ROUTE2744 = createNode("ROUTE");
ROUTE2744.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE2744.fromField = "value_changed";
ROUTE2744.toNode = "hanim_r_wrist";
ROUTE2744.toField = "set_rotation";
children[372] = ROUTE2744;

ROUTE ROUTE2745 = createNode("ROUTE");
ROUTE2745.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE2745.fromField = "value_changed";
ROUTE2745.toNode = "hanim_r_elbow";
ROUTE2745.toField = "set_rotation";
children[373] = ROUTE2745;

ROUTE ROUTE2746 = createNode("ROUTE");
ROUTE2746.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE2746.fromField = "value_changed";
ROUTE2746.toNode = "hanim_r_shoulder";
ROUTE2746.toField = "set_rotation";
children[374] = ROUTE2746;

ROUTE ROUTE2747 = createNode("ROUTE");
ROUTE2747.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE2747.fromField = "value_changed";
ROUTE2747.toNode = "hanim_l_wrist";
ROUTE2747.toField = "set_rotation";
children[375] = ROUTE2747;

ROUTE ROUTE2748 = createNode("ROUTE");
ROUTE2748.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE2748.fromField = "value_changed";
ROUTE2748.toNode = "hanim_l_elbow";
ROUTE2748.toField = "set_rotation";
children[376] = ROUTE2748;

ROUTE ROUTE2749 = createNode("ROUTE");
ROUTE2749.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE2749.fromField = "value_changed";
ROUTE2749.toNode = "hanim_l_shoulder";
ROUTE2749.toField = "set_rotation";
children[377] = ROUTE2749;

ROUTE ROUTE2750 = createNode("ROUTE");
ROUTE2750.fromNode = "Yaws_head_RotationInterpolator";
ROUTE2750.fromField = "value_changed";
ROUTE2750.toNode = "hanim_skullbase";
ROUTE2750.toField = "set_rotation";
children[378] = ROUTE2750;

ROUTE ROUTE2751 = createNode("ROUTE");
ROUTE2751.fromNode = "Yaws_neck_RotationInterpolator";
ROUTE2751.fromField = "value_changed";
ROUTE2751.toNode = "hanim_vc4";
ROUTE2751.toField = "set_rotation";
children[379] = ROUTE2751;

ROUTE ROUTE2752 = createNode("ROUTE");
ROUTE2752.fromNode = "Yaws_upper_body_RotationInterpolator";
ROUTE2752.fromField = "value_changed";
ROUTE2752.toNode = "hanim_vl1";
ROUTE2752.toField = "set_rotation";
children[380] = ROUTE2752;

ROUTE ROUTE2753 = createNode("ROUTE");
ROUTE2753.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE2753.fromField = "value_changed";
ROUTE2753.toNode = "hanim_humanoid_root";
ROUTE2753.toField = "set_rotation";
children[381] = ROUTE2753;

ROUTE ROUTE2754 = createNode("ROUTE");
ROUTE2754.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE2754.fromField = "value_changed";
ROUTE2754.toNode = "hanim_humanoid_root";
ROUTE2754.toField = "set_translation";
children[382] = ROUTE2754;

ROUTE ROUTE2755 = createNode("ROUTE");
ROUTE2755.fromNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE2755.fromField = "value_changed";
ROUTE2755.toNode = "hanim_l_sternoclavicular";
ROUTE2755.toField = "set_rotation";
children[383] = ROUTE2755;

ROUTE ROUTE2756 = createNode("ROUTE");
ROUTE2756.fromNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE2756.fromField = "value_changed";
ROUTE2756.toNode = "hanim_l_acromioclavicular";
ROUTE2756.toField = "set_rotation";
children[384] = ROUTE2756;

ROUTE ROUTE2757 = createNode("ROUTE");
ROUTE2757.fromNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE2757.fromField = "value_changed";
ROUTE2757.toNode = "hanim_r_sternoclavicular";
ROUTE2757.toField = "set_rotation";
children[385] = ROUTE2757;

ROUTE ROUTE2758 = createNode("ROUTE");
ROUTE2758.fromNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE2758.fromField = "value_changed";
ROUTE2758.toNode = "hanim_r_acromioclavicular";
ROUTE2758.toField = "set_rotation";
children[386] = ROUTE2758;

ROUTE ROUTE2759 = createNode("ROUTE");
ROUTE2759.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2759.fromField = "value_changed";
ROUTE2759.toNode = "hanim_l_metatarsal";
ROUTE2759.toField = "set_rotation";
children[387] = ROUTE2759;

ROUTE ROUTE2760 = createNode("ROUTE");
ROUTE2760.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2760.fromField = "value_changed";
ROUTE2760.toNode = "hanim_r_metatarsal";
ROUTE2760.toField = "set_rotation";
children[388] = ROUTE2760;

ROUTE ROUTE2761 = createNode("ROUTE");
ROUTE2761.fromNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE2761.fromField = "value_changed";
ROUTE2761.toNode = "hanim_sacroiliac";
ROUTE2761.toField = "set_rotation";
children[389] = ROUTE2761;

ROUTE ROUTE2762 = createNode("ROUTE");
ROUTE2762.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE2762.fromField = "value_changed";
ROUTE2762.toNode = "hanim_vl5";
ROUTE2762.toField = "set_rotation";
children[390] = ROUTE2762;

ROUTE ROUTE2763 = createNode("ROUTE");
ROUTE2763.fromNode = "Yaw_vc6_YawInterpolator";
ROUTE2763.fromField = "value_changed";
ROUTE2763.toNode = "hanim_vc6";
ROUTE2763.toField = "set_rotation";
children[391] = ROUTE2763;

ROUTE ROUTE2764 = createNode("ROUTE");
ROUTE2764.fromNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE2764.fromField = "value_changed";
ROUTE2764.toNode = "hanim_l_thumb1";
ROUTE2764.toField = "set_rotation";
children[392] = ROUTE2764;

ROUTE ROUTE2765 = createNode("ROUTE");
ROUTE2765.fromNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE2765.fromField = "value_changed";
ROUTE2765.toNode = "hanim_r_thumb1";
ROUTE2765.toField = "set_rotation";
children[393] = ROUTE2765;

ROUTE ROUTE2766 = createNode("ROUTE");
ROUTE2766.fromNode = "RollTimer";
ROUTE2766.fromField = "fraction_changed";
ROUTE2766.toNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE2766.toField = "set_fraction";
children[394] = ROUTE2766;

ROUTE ROUTE2767 = createNode("ROUTE");
ROUTE2767.fromNode = "RollTimer";
ROUTE2767.fromField = "fraction_changed";
ROUTE2767.toNode = "Rolls_r_knee_RotationInterpolator";
ROUTE2767.toField = "set_fraction";
children[395] = ROUTE2767;

ROUTE ROUTE2768 = createNode("ROUTE");
ROUTE2768.fromNode = "RollTimer";
ROUTE2768.fromField = "fraction_changed";
ROUTE2768.toNode = "Rolls_r_hip_RotationInterpolator";
ROUTE2768.toField = "set_fraction";
children[396] = ROUTE2768;

ROUTE ROUTE2769 = createNode("ROUTE");
ROUTE2769.fromNode = "RollTimer";
ROUTE2769.fromField = "fraction_changed";
ROUTE2769.toNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE2769.toField = "set_fraction";
children[397] = ROUTE2769;

ROUTE ROUTE2770 = createNode("ROUTE");
ROUTE2770.fromNode = "RollTimer";
ROUTE2770.fromField = "fraction_changed";
ROUTE2770.toNode = "Rolls_l_knee_RotationInterpolator";
ROUTE2770.toField = "set_fraction";
children[398] = ROUTE2770;

ROUTE ROUTE2771 = createNode("ROUTE");
ROUTE2771.fromNode = "RollTimer";
ROUTE2771.fromField = "fraction_changed";
ROUTE2771.toNode = "Rolls_l_hip_RotationInterpolator";
ROUTE2771.toField = "set_fraction";
children[399] = ROUTE2771;

ROUTE ROUTE2772 = createNode("ROUTE");
ROUTE2772.fromNode = "RollTimer";
ROUTE2772.fromField = "fraction_changed";
ROUTE2772.toNode = "Rolls_lower_body_RotationInterpolator";
ROUTE2772.toField = "set_fraction";
children[400] = ROUTE2772;

ROUTE ROUTE2773 = createNode("ROUTE");
ROUTE2773.fromNode = "RollTimer";
ROUTE2773.fromField = "fraction_changed";
ROUTE2773.toNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE2773.toField = "set_fraction";
children[401] = ROUTE2773;

ROUTE ROUTE2774 = createNode("ROUTE");
ROUTE2774.fromNode = "RollTimer";
ROUTE2774.fromField = "fraction_changed";
ROUTE2774.toNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE2774.toField = "set_fraction";
children[402] = ROUTE2774;

ROUTE ROUTE2775 = createNode("ROUTE");
ROUTE2775.fromNode = "RollTimer";
ROUTE2775.fromField = "fraction_changed";
ROUTE2775.toNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE2775.toField = "set_fraction";
children[403] = ROUTE2775;

ROUTE ROUTE2776 = createNode("ROUTE");
ROUTE2776.fromNode = "RollTimer";
ROUTE2776.fromField = "fraction_changed";
ROUTE2776.toNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE2776.toField = "set_fraction";
children[404] = ROUTE2776;

ROUTE ROUTE2777 = createNode("ROUTE");
ROUTE2777.fromNode = "RollTimer";
ROUTE2777.fromField = "fraction_changed";
ROUTE2777.toNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE2777.toField = "set_fraction";
children[405] = ROUTE2777;

ROUTE ROUTE2778 = createNode("ROUTE");
ROUTE2778.fromNode = "RollTimer";
ROUTE2778.fromField = "fraction_changed";
ROUTE2778.toNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE2778.toField = "set_fraction";
children[406] = ROUTE2778;

ROUTE ROUTE2779 = createNode("ROUTE");
ROUTE2779.fromNode = "RollTimer";
ROUTE2779.fromField = "fraction_changed";
ROUTE2779.toNode = "Rolls_head_RotationInterpolator";
ROUTE2779.toField = "set_fraction";
children[407] = ROUTE2779;

ROUTE ROUTE2780 = createNode("ROUTE");
ROUTE2780.fromNode = "RollTimer";
ROUTE2780.fromField = "fraction_changed";
ROUTE2780.toNode = "Rolls_neck_RotationInterpolator";
ROUTE2780.toField = "set_fraction";
children[408] = ROUTE2780;

ROUTE ROUTE2781 = createNode("ROUTE");
ROUTE2781.fromNode = "RollTimer";
ROUTE2781.fromField = "fraction_changed";
ROUTE2781.toNode = "Rolls_upper_body_RotationInterpolator";
ROUTE2781.toField = "set_fraction";
children[409] = ROUTE2781;

ROUTE ROUTE2782 = createNode("ROUTE");
ROUTE2782.fromNode = "RollTimer";
ROUTE2782.fromField = "fraction_changed";
ROUTE2782.toNode = "Rolls_whole_body_RotationInterpolator";
ROUTE2782.toField = "set_fraction";
children[410] = ROUTE2782;

ROUTE ROUTE2783 = createNode("ROUTE");
ROUTE2783.fromNode = "RollTimer";
ROUTE2783.fromField = "fraction_changed";
ROUTE2783.toNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE2783.toField = "set_fraction";
children[411] = ROUTE2783;

ROUTE ROUTE2784 = createNode("ROUTE");
ROUTE2784.fromNode = "RollTimer";
ROUTE2784.fromField = "fraction_changed";
ROUTE2784.toNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE2784.toField = "set_fraction";
children[412] = ROUTE2784;

ROUTE ROUTE2785 = createNode("ROUTE");
ROUTE2785.fromNode = "RollTimer";
ROUTE2785.fromField = "fraction_changed";
ROUTE2785.toNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE2785.toField = "set_fraction";
children[413] = ROUTE2785;

ROUTE ROUTE2786 = createNode("ROUTE");
ROUTE2786.fromNode = "RollTimer";
ROUTE2786.fromField = "fraction_changed";
ROUTE2786.toNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE2786.toField = "set_fraction";
children[414] = ROUTE2786;

ROUTE ROUTE2787 = createNode("ROUTE");
ROUTE2787.fromNode = "RollTimer";
ROUTE2787.fromField = "fraction_changed";
ROUTE2787.toNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE2787.toField = "set_fraction";
children[415] = ROUTE2787;

ROUTE ROUTE2788 = createNode("ROUTE");
ROUTE2788.fromNode = "RollTimer";
ROUTE2788.fromField = "fraction_changed";
ROUTE2788.toNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2788.toField = "set_fraction";
children[416] = ROUTE2788;

ROUTE ROUTE2789 = createNode("ROUTE");
ROUTE2789.fromNode = "RollTimer";
ROUTE2789.fromField = "fraction_changed";
ROUTE2789.toNode = "Roll_sacroiliac_YawInterpolator";
ROUTE2789.toField = "set_fraction";
children[417] = ROUTE2789;

ROUTE ROUTE2790 = createNode("ROUTE");
ROUTE2790.fromNode = "RollTimer";
ROUTE2790.fromField = "fraction_changed";
ROUTE2790.toNode = "Roll_vl5_YawInterpolator";
ROUTE2790.toField = "set_fraction";
children[418] = ROUTE2790;

ROUTE ROUTE2791 = createNode("ROUTE");
ROUTE2791.fromNode = "RollTimer";
ROUTE2791.fromField = "fraction_changed";
ROUTE2791.toNode = "Roll_vc6_YawInterpolator";
ROUTE2791.toField = "set_fraction";
children[419] = ROUTE2791;

ROUTE ROUTE2792 = createNode("ROUTE");
ROUTE2792.fromNode = "RollTimer";
ROUTE2792.fromField = "fraction_changed";
ROUTE2792.toNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE2792.toField = "set_fraction";
children[420] = ROUTE2792;

ROUTE ROUTE2793 = createNode("ROUTE");
ROUTE2793.fromNode = "RollTimer";
ROUTE2793.fromField = "fraction_changed";
ROUTE2793.toNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE2793.toField = "set_fraction";
children[421] = ROUTE2793;

ROUTE ROUTE2794 = createNode("ROUTE");
ROUTE2794.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE2794.fromField = "value_changed";
ROUTE2794.toNode = "hanim_r_ankle";
ROUTE2794.toField = "set_rotation";
children[422] = ROUTE2794;

ROUTE ROUTE2795 = createNode("ROUTE");
ROUTE2795.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE2795.fromField = "value_changed";
ROUTE2795.toNode = "hanim_r_knee";
ROUTE2795.toField = "set_rotation";
children[423] = ROUTE2795;

ROUTE ROUTE2796 = createNode("ROUTE");
ROUTE2796.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE2796.fromField = "value_changed";
ROUTE2796.toNode = "hanim_r_hip";
ROUTE2796.toField = "set_rotation";
children[424] = ROUTE2796;

ROUTE ROUTE2797 = createNode("ROUTE");
ROUTE2797.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE2797.fromField = "value_changed";
ROUTE2797.toNode = "hanim_l_ankle";
ROUTE2797.toField = "set_rotation";
children[425] = ROUTE2797;

ROUTE ROUTE2798 = createNode("ROUTE");
ROUTE2798.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE2798.fromField = "value_changed";
ROUTE2798.toNode = "hanim_l_knee";
ROUTE2798.toField = "set_rotation";
children[426] = ROUTE2798;

ROUTE ROUTE2799 = createNode("ROUTE");
ROUTE2799.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE2799.fromField = "value_changed";
ROUTE2799.toNode = "hanim_l_hip";
ROUTE2799.toField = "set_rotation";
children[427] = ROUTE2799;

ROUTE ROUTE2800 = createNode("ROUTE");
ROUTE2800.fromNode = "Rolls_lower_body_RotationInterpolator";
ROUTE2800.fromField = "value_changed";
ROUTE2800.toNode = "hanim_sacroiliac";
ROUTE2800.toField = "set_rotation";
children[428] = ROUTE2800;

ROUTE ROUTE2801 = createNode("ROUTE");
ROUTE2801.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE2801.fromField = "value_changed";
ROUTE2801.toNode = "hanim_r_wrist";
ROUTE2801.toField = "set_rotation";
children[429] = ROUTE2801;

ROUTE ROUTE2802 = createNode("ROUTE");
ROUTE2802.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE2802.fromField = "value_changed";
ROUTE2802.toNode = "hanim_r_elbow";
ROUTE2802.toField = "set_rotation";
children[430] = ROUTE2802;

ROUTE ROUTE2803 = createNode("ROUTE");
ROUTE2803.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE2803.fromField = "value_changed";
ROUTE2803.toNode = "hanim_r_shoulder";
ROUTE2803.toField = "set_rotation";
children[431] = ROUTE2803;

ROUTE ROUTE2804 = createNode("ROUTE");
ROUTE2804.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE2804.fromField = "value_changed";
ROUTE2804.toNode = "hanim_l_wrist";
ROUTE2804.toField = "set_rotation";
children[432] = ROUTE2804;

ROUTE ROUTE2805 = createNode("ROUTE");
ROUTE2805.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE2805.fromField = "value_changed";
ROUTE2805.toNode = "hanim_l_elbow";
ROUTE2805.toField = "set_rotation";
children[433] = ROUTE2805;

ROUTE ROUTE2806 = createNode("ROUTE");
ROUTE2806.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE2806.fromField = "value_changed";
ROUTE2806.toNode = "hanim_l_shoulder";
ROUTE2806.toField = "set_rotation";
children[434] = ROUTE2806;

ROUTE ROUTE2807 = createNode("ROUTE");
ROUTE2807.fromNode = "Rolls_head_RotationInterpolator";
ROUTE2807.fromField = "value_changed";
ROUTE2807.toNode = "hanim_skullbase";
ROUTE2807.toField = "set_rotation";
children[435] = ROUTE2807;

ROUTE ROUTE2808 = createNode("ROUTE");
ROUTE2808.fromNode = "Rolls_neck_RotationInterpolator";
ROUTE2808.fromField = "value_changed";
ROUTE2808.toNode = "hanim_vc4";
ROUTE2808.toField = "set_rotation";
children[436] = ROUTE2808;

ROUTE ROUTE2809 = createNode("ROUTE");
ROUTE2809.fromNode = "Rolls_upper_body_RotationInterpolator";
ROUTE2809.fromField = "value_changed";
ROUTE2809.toNode = "hanim_vl1";
ROUTE2809.toField = "set_rotation";
children[437] = ROUTE2809;

ROUTE ROUTE2810 = createNode("ROUTE");
ROUTE2810.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE2810.fromField = "value_changed";
ROUTE2810.toNode = "hanim_humanoid_root";
ROUTE2810.toField = "set_rotation";
children[438] = ROUTE2810;

ROUTE ROUTE2811 = createNode("ROUTE");
ROUTE2811.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE2811.fromField = "value_changed";
ROUTE2811.toNode = "hanim_humanoid_root";
ROUTE2811.toField = "set_translation";
children[439] = ROUTE2811;

ROUTE ROUTE2812 = createNode("ROUTE");
ROUTE2812.fromNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE2812.fromField = "value_changed";
ROUTE2812.toNode = "hanim_l_sternoclavicular";
ROUTE2812.toField = "set_rotation";
children[440] = ROUTE2812;

ROUTE ROUTE2813 = createNode("ROUTE");
ROUTE2813.fromNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE2813.fromField = "value_changed";
ROUTE2813.toNode = "hanim_l_acromioclavicular";
ROUTE2813.toField = "set_rotation";
children[441] = ROUTE2813;

ROUTE ROUTE2814 = createNode("ROUTE");
ROUTE2814.fromNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE2814.fromField = "value_changed";
ROUTE2814.toNode = "hanim_r_sternoclavicular";
ROUTE2814.toField = "set_rotation";
children[442] = ROUTE2814;

ROUTE ROUTE2815 = createNode("ROUTE");
ROUTE2815.fromNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE2815.fromField = "value_changed";
ROUTE2815.toNode = "hanim_r_acromioclavicular";
ROUTE2815.toField = "set_rotation";
children[443] = ROUTE2815;

ROUTE ROUTE2816 = createNode("ROUTE");
ROUTE2816.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2816.fromField = "value_changed";
ROUTE2816.toNode = "hanim_l_metatarsal";
ROUTE2816.toField = "set_rotation";
children[444] = ROUTE2816;

ROUTE ROUTE2817 = createNode("ROUTE");
ROUTE2817.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2817.fromField = "value_changed";
ROUTE2817.toNode = "hanim_r_metatarsal";
ROUTE2817.toField = "set_rotation";
children[445] = ROUTE2817;

ROUTE ROUTE2818 = createNode("ROUTE");
ROUTE2818.fromNode = "Roll_sacroiliac_YawInterpolator";
ROUTE2818.fromField = "value_changed";
ROUTE2818.toNode = "hanim_sacroiliac";
ROUTE2818.toField = "set_rotation";
children[446] = ROUTE2818;

ROUTE ROUTE2819 = createNode("ROUTE");
ROUTE2819.fromNode = "Roll_vl5_YawInterpolator";
ROUTE2819.fromField = "value_changed";
ROUTE2819.toNode = "hanim_vl5";
ROUTE2819.toField = "set_rotation";
children[447] = ROUTE2819;

ROUTE ROUTE2820 = createNode("ROUTE");
ROUTE2820.fromNode = "Roll_vc6_YawInterpolator";
ROUTE2820.fromField = "value_changed";
ROUTE2820.toNode = "hanim_vc6";
ROUTE2820.toField = "set_rotation";
children[448] = ROUTE2820;

ROUTE ROUTE2821 = createNode("ROUTE");
ROUTE2821.fromNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE2821.fromField = "value_changed";
ROUTE2821.toNode = "hanim_l_thumb1";
ROUTE2821.toField = "set_rotation";
children[449] = ROUTE2821;

ROUTE ROUTE2822 = createNode("ROUTE");
ROUTE2822.fromNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE2822.fromField = "value_changed";
ROUTE2822.toNode = "hanim_r_thumb1";
ROUTE2822.toField = "set_rotation";
children[450] = ROUTE2822;

ROUTE ROUTE2823 = createNode("ROUTE");
ROUTE2823.fromNode = "WalkTimer";
ROUTE2823.fromField = "fraction_changed";
ROUTE2823.toNode = "Walk_r_ankle_RotationInterpolator";
ROUTE2823.toField = "set_fraction";
children[451] = ROUTE2823;

ROUTE ROUTE2824 = createNode("ROUTE");
ROUTE2824.fromNode = "WalkTimer";
ROUTE2824.fromField = "fraction_changed";
ROUTE2824.toNode = "Walk_r_knee_RotationInterpolator";
ROUTE2824.toField = "set_fraction";
children[452] = ROUTE2824;

ROUTE ROUTE2825 = createNode("ROUTE");
ROUTE2825.fromNode = "WalkTimer";
ROUTE2825.fromField = "fraction_changed";
ROUTE2825.toNode = "Walk_r_hip_RotationInterpolator";
ROUTE2825.toField = "set_fraction";
children[453] = ROUTE2825;

ROUTE ROUTE2826 = createNode("ROUTE");
ROUTE2826.fromNode = "WalkTimer";
ROUTE2826.fromField = "fraction_changed";
ROUTE2826.toNode = "Walk_l_ankle_RotationInterpolator";
ROUTE2826.toField = "set_fraction";
children[454] = ROUTE2826;

ROUTE ROUTE2827 = createNode("ROUTE");
ROUTE2827.fromNode = "WalkTimer";
ROUTE2827.fromField = "fraction_changed";
ROUTE2827.toNode = "Walk_l_knee_RotationInterpolator";
ROUTE2827.toField = "set_fraction";
children[455] = ROUTE2827;

ROUTE ROUTE2828 = createNode("ROUTE");
ROUTE2828.fromNode = "WalkTimer";
ROUTE2828.fromField = "fraction_changed";
ROUTE2828.toNode = "Walk_l_hip_RotationInterpolator";
ROUTE2828.toField = "set_fraction";
children[456] = ROUTE2828;

ROUTE ROUTE2829 = createNode("ROUTE");
ROUTE2829.fromNode = "WalkTimer";
ROUTE2829.fromField = "fraction_changed";
ROUTE2829.toNode = "Walk_lower_body_RotationInterpolator";
ROUTE2829.toField = "set_fraction";
children[457] = ROUTE2829;

ROUTE ROUTE2830 = createNode("ROUTE");
ROUTE2830.fromNode = "WalkTimer";
ROUTE2830.fromField = "fraction_changed";
ROUTE2830.toNode = "Walk_r_wrist_RotationInterpolator";
ROUTE2830.toField = "set_fraction";
children[458] = ROUTE2830;

ROUTE ROUTE2831 = createNode("ROUTE");
ROUTE2831.fromNode = "WalkTimer";
ROUTE2831.fromField = "fraction_changed";
ROUTE2831.toNode = "Walk_r_elbow_RotationInterpolator";
ROUTE2831.toField = "set_fraction";
children[459] = ROUTE2831;

ROUTE ROUTE2832 = createNode("ROUTE");
ROUTE2832.fromNode = "WalkTimer";
ROUTE2832.fromField = "fraction_changed";
ROUTE2832.toNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE2832.toField = "set_fraction";
children[460] = ROUTE2832;

ROUTE ROUTE2833 = createNode("ROUTE");
ROUTE2833.fromNode = "WalkTimer";
ROUTE2833.fromField = "fraction_changed";
ROUTE2833.toNode = "Walk_l_wrist_RotationInterpolator";
ROUTE2833.toField = "set_fraction";
children[461] = ROUTE2833;

ROUTE ROUTE2834 = createNode("ROUTE");
ROUTE2834.fromNode = "WalkTimer";
ROUTE2834.fromField = "fraction_changed";
ROUTE2834.toNode = "Walk_l_elbow_RotationInterpolator";
ROUTE2834.toField = "set_fraction";
children[462] = ROUTE2834;

ROUTE ROUTE2835 = createNode("ROUTE");
ROUTE2835.fromNode = "WalkTimer";
ROUTE2835.fromField = "fraction_changed";
ROUTE2835.toNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE2835.toField = "set_fraction";
children[463] = ROUTE2835;

ROUTE ROUTE2836 = createNode("ROUTE");
ROUTE2836.fromNode = "WalkTimer";
ROUTE2836.fromField = "fraction_changed";
ROUTE2836.toNode = "Walk_head_RotationInterpolator";
ROUTE2836.toField = "set_fraction";
children[464] = ROUTE2836;

ROUTE ROUTE2837 = createNode("ROUTE");
ROUTE2837.fromNode = "WalkTimer";
ROUTE2837.fromField = "fraction_changed";
ROUTE2837.toNode = "Walk_neck_RotationInterpolator";
ROUTE2837.toField = "set_fraction";
children[465] = ROUTE2837;

ROUTE ROUTE2838 = createNode("ROUTE");
ROUTE2838.fromNode = "WalkTimer";
ROUTE2838.fromField = "fraction_changed";
ROUTE2838.toNode = "Walk_upper_body_RotationInterpolator";
ROUTE2838.toField = "set_fraction";
children[466] = ROUTE2838;

ROUTE ROUTE2839 = createNode("ROUTE");
ROUTE2839.fromNode = "WalkTimer";
ROUTE2839.fromField = "fraction_changed";
ROUTE2839.toNode = "Walk_whole_body_RotationInterpolator";
ROUTE2839.toField = "set_fraction";
children[467] = ROUTE2839;

ROUTE ROUTE2840 = createNode("ROUTE");
ROUTE2840.fromNode = "WalkTimer";
ROUTE2840.fromField = "fraction_changed";
ROUTE2840.toNode = "Walk_whole_body_TranslationInterpolator";
ROUTE2840.toField = "set_fraction";
children[468] = ROUTE2840;

ROUTE ROUTE2841 = createNode("ROUTE");
ROUTE2841.fromNode = "WalkTimer";
ROUTE2841.fromField = "fraction_changed";
ROUTE2841.toNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE2841.toField = "set_fraction";
children[469] = ROUTE2841;

ROUTE ROUTE2842 = createNode("ROUTE");
ROUTE2842.fromNode = "WalkTimer";
ROUTE2842.fromField = "fraction_changed";
ROUTE2842.toNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE2842.toField = "set_fraction";
children[470] = ROUTE2842;

ROUTE ROUTE2843 = createNode("ROUTE");
ROUTE2843.fromNode = "WalkTimer";
ROUTE2843.fromField = "fraction_changed";
ROUTE2843.toNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE2843.toField = "set_fraction";
children[471] = ROUTE2843;

ROUTE ROUTE2844 = createNode("ROUTE");
ROUTE2844.fromNode = "WalkTimer";
ROUTE2844.fromField = "fraction_changed";
ROUTE2844.toNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE2844.toField = "set_fraction";
children[472] = ROUTE2844;

ROUTE ROUTE2845 = createNode("ROUTE");
ROUTE2845.fromNode = "WalkTimer";
ROUTE2845.fromField = "fraction_changed";
ROUTE2845.toNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2845.toField = "set_fraction";
children[473] = ROUTE2845;

ROUTE ROUTE2846 = createNode("ROUTE");
ROUTE2846.fromNode = "WalkTimer";
ROUTE2846.fromField = "fraction_changed";
ROUTE2846.toNode = "Walk_sacroiliac_YawInterpolator";
ROUTE2846.toField = "set_fraction";
children[474] = ROUTE2846;

ROUTE ROUTE2847 = createNode("ROUTE");
ROUTE2847.fromNode = "WalkTimer";
ROUTE2847.fromField = "fraction_changed";
ROUTE2847.toNode = "Walk_vl5_YawInterpolator";
ROUTE2847.toField = "set_fraction";
children[475] = ROUTE2847;

ROUTE ROUTE2848 = createNode("ROUTE");
ROUTE2848.fromNode = "WalkTimer";
ROUTE2848.fromField = "fraction_changed";
ROUTE2848.toNode = "Walk_vc6_YawInterpolator";
ROUTE2848.toField = "set_fraction";
children[476] = ROUTE2848;

ROUTE ROUTE2849 = createNode("ROUTE");
ROUTE2849.fromNode = "WalkTimer";
ROUTE2849.fromField = "fraction_changed";
ROUTE2849.toNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE2849.toField = "set_fraction";
children[477] = ROUTE2849;

ROUTE ROUTE2850 = createNode("ROUTE");
ROUTE2850.fromNode = "WalkTimer";
ROUTE2850.fromField = "fraction_changed";
ROUTE2850.toNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE2850.toField = "set_fraction";
children[478] = ROUTE2850;

ROUTE ROUTE2851 = createNode("ROUTE");
ROUTE2851.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE2851.fromField = "value_changed";
ROUTE2851.toNode = "hanim_r_ankle";
ROUTE2851.toField = "set_rotation";
children[479] = ROUTE2851;

ROUTE ROUTE2852 = createNode("ROUTE");
ROUTE2852.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE2852.fromField = "value_changed";
ROUTE2852.toNode = "hanim_r_knee";
ROUTE2852.toField = "set_rotation";
children[480] = ROUTE2852;

ROUTE ROUTE2853 = createNode("ROUTE");
ROUTE2853.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE2853.fromField = "value_changed";
ROUTE2853.toNode = "hanim_r_hip";
ROUTE2853.toField = "set_rotation";
children[481] = ROUTE2853;

ROUTE ROUTE2854 = createNode("ROUTE");
ROUTE2854.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE2854.fromField = "value_changed";
ROUTE2854.toNode = "hanim_l_ankle";
ROUTE2854.toField = "set_rotation";
children[482] = ROUTE2854;

ROUTE ROUTE2855 = createNode("ROUTE");
ROUTE2855.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE2855.fromField = "value_changed";
ROUTE2855.toNode = "hanim_l_knee";
ROUTE2855.toField = "set_rotation";
children[483] = ROUTE2855;

ROUTE ROUTE2856 = createNode("ROUTE");
ROUTE2856.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE2856.fromField = "value_changed";
ROUTE2856.toNode = "hanim_l_hip";
ROUTE2856.toField = "set_rotation";
children[484] = ROUTE2856;

ROUTE ROUTE2857 = createNode("ROUTE");
ROUTE2857.fromNode = "Walk_lower_body_RotationInterpolator";
ROUTE2857.fromField = "value_changed";
ROUTE2857.toNode = "hanim_sacroiliac";
ROUTE2857.toField = "set_rotation";
children[485] = ROUTE2857;

ROUTE ROUTE2858 = createNode("ROUTE");
ROUTE2858.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE2858.fromField = "value_changed";
ROUTE2858.toNode = "hanim_r_wrist";
ROUTE2858.toField = "set_rotation";
children[486] = ROUTE2858;

ROUTE ROUTE2859 = createNode("ROUTE");
ROUTE2859.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE2859.fromField = "value_changed";
ROUTE2859.toNode = "hanim_r_elbow";
ROUTE2859.toField = "set_rotation";
children[487] = ROUTE2859;

ROUTE ROUTE2860 = createNode("ROUTE");
ROUTE2860.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE2860.fromField = "value_changed";
ROUTE2860.toNode = "hanim_r_shoulder";
ROUTE2860.toField = "set_rotation";
children[488] = ROUTE2860;

ROUTE ROUTE2861 = createNode("ROUTE");
ROUTE2861.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE2861.fromField = "value_changed";
ROUTE2861.toNode = "hanim_l_wrist";
ROUTE2861.toField = "set_rotation";
children[489] = ROUTE2861;

ROUTE ROUTE2862 = createNode("ROUTE");
ROUTE2862.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE2862.fromField = "value_changed";
ROUTE2862.toNode = "hanim_l_elbow";
ROUTE2862.toField = "set_rotation";
children[490] = ROUTE2862;

ROUTE ROUTE2863 = createNode("ROUTE");
ROUTE2863.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE2863.fromField = "value_changed";
ROUTE2863.toNode = "hanim_l_shoulder";
ROUTE2863.toField = "set_rotation";
children[491] = ROUTE2863;

ROUTE ROUTE2864 = createNode("ROUTE");
ROUTE2864.fromNode = "Walk_head_RotationInterpolator";
ROUTE2864.fromField = "value_changed";
ROUTE2864.toNode = "hanim_skullbase";
ROUTE2864.toField = "set_rotation";
children[492] = ROUTE2864;

ROUTE ROUTE2865 = createNode("ROUTE");
ROUTE2865.fromNode = "Walk_neck_RotationInterpolator";
ROUTE2865.fromField = "value_changed";
ROUTE2865.toNode = "hanim_vc4";
ROUTE2865.toField = "set_rotation";
children[493] = ROUTE2865;

ROUTE ROUTE2866 = createNode("ROUTE");
ROUTE2866.fromNode = "Walk_upper_body_RotationInterpolator";
ROUTE2866.fromField = "value_changed";
ROUTE2866.toNode = "hanim_vl1";
ROUTE2866.toField = "set_rotation";
children[494] = ROUTE2866;

ROUTE ROUTE2867 = createNode("ROUTE");
ROUTE2867.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE2867.fromField = "value_changed";
ROUTE2867.toNode = "hanim_humanoid_root";
ROUTE2867.toField = "set_rotation";
children[495] = ROUTE2867;

ROUTE ROUTE2868 = createNode("ROUTE");
ROUTE2868.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE2868.fromField = "value_changed";
ROUTE2868.toNode = "hanim_humanoid_root";
ROUTE2868.toField = "set_translation";
children[496] = ROUTE2868;

ROUTE ROUTE2869 = createNode("ROUTE");
ROUTE2869.fromNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE2869.fromField = "value_changed";
ROUTE2869.toNode = "hanim_l_sternoclavicular";
ROUTE2869.toField = "set_rotation";
children[497] = ROUTE2869;

ROUTE ROUTE2870 = createNode("ROUTE");
ROUTE2870.fromNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE2870.fromField = "value_changed";
ROUTE2870.toNode = "hanim_l_acromioclavicular";
ROUTE2870.toField = "set_rotation";
children[498] = ROUTE2870;

ROUTE ROUTE2871 = createNode("ROUTE");
ROUTE2871.fromNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE2871.fromField = "value_changed";
ROUTE2871.toNode = "hanim_r_sternoclavicular";
ROUTE2871.toField = "set_rotation";
children[499] = ROUTE2871;

ROUTE ROUTE2872 = createNode("ROUTE");
ROUTE2872.fromNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE2872.fromField = "value_changed";
ROUTE2872.toNode = "hanim_r_acromioclavicular";
ROUTE2872.toField = "set_rotation";
children[500] = ROUTE2872;

ROUTE ROUTE2873 = createNode("ROUTE");
ROUTE2873.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2873.fromField = "value_changed";
ROUTE2873.toNode = "hanim_l_metatarsal";
ROUTE2873.toField = "set_rotation";
children[501] = ROUTE2873;

ROUTE ROUTE2874 = createNode("ROUTE");
ROUTE2874.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2874.fromField = "value_changed";
ROUTE2874.toNode = "hanim_r_metatarsal";
ROUTE2874.toField = "set_rotation";
children[502] = ROUTE2874;

ROUTE ROUTE2875 = createNode("ROUTE");
ROUTE2875.fromNode = "Walk_sacroiliac_YawInterpolator";
ROUTE2875.fromField = "value_changed";
ROUTE2875.toNode = "hanim_sacroiliac";
ROUTE2875.toField = "set_rotation";
children[503] = ROUTE2875;

ROUTE ROUTE2876 = createNode("ROUTE");
ROUTE2876.fromNode = "Walk_vl5_YawInterpolator";
ROUTE2876.fromField = "value_changed";
ROUTE2876.toNode = "hanim_vl5";
ROUTE2876.toField = "set_rotation";
children[504] = ROUTE2876;

ROUTE ROUTE2877 = createNode("ROUTE");
ROUTE2877.fromNode = "Walk_vc6_YawInterpolator";
ROUTE2877.fromField = "value_changed";
ROUTE2877.toNode = "hanim_vc6";
ROUTE2877.toField = "set_rotation";
children[505] = ROUTE2877;

ROUTE ROUTE2878 = createNode("ROUTE");
ROUTE2878.fromNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE2878.fromField = "value_changed";
ROUTE2878.toNode = "hanim_l_thumb1";
ROUTE2878.toField = "set_rotation";
children[506] = ROUTE2878;

ROUTE ROUTE2879 = createNode("ROUTE");
ROUTE2879.fromNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE2879.fromField = "value_changed";
ROUTE2879.toNode = "hanim_r_thumb1";
ROUTE2879.toField = "set_rotation";
children[507] = ROUTE2879;

ROUTE ROUTE2880 = createNode("ROUTE");
ROUTE2880.fromNode = "RunTimer";
ROUTE2880.fromField = "fraction_changed";
ROUTE2880.toNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE2880.toField = "set_fraction";
children[508] = ROUTE2880;

ROUTE ROUTE2881 = createNode("ROUTE");
ROUTE2881.fromNode = "RunTimer";
ROUTE2881.fromField = "fraction_changed";
ROUTE2881.toNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE2881.toField = "set_fraction";
children[509] = ROUTE2881;

ROUTE ROUTE2882 = createNode("ROUTE");
ROUTE2882.fromNode = "RunTimer";
ROUTE2882.fromField = "fraction_changed";
ROUTE2882.toNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE2882.toField = "set_fraction";
children[510] = ROUTE2882;

ROUTE ROUTE2883 = createNode("ROUTE");
ROUTE2883.fromNode = "RunTimer";
ROUTE2883.fromField = "fraction_changed";
ROUTE2883.toNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE2883.toField = "set_fraction";
children[511] = ROUTE2883;

ROUTE ROUTE2884 = createNode("ROUTE");
ROUTE2884.fromNode = "RunTimer";
ROUTE2884.fromField = "fraction_changed";
ROUTE2884.toNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE2884.toField = "set_fraction";
children[512] = ROUTE2884;

ROUTE ROUTE2885 = createNode("ROUTE");
ROUTE2885.fromNode = "RunTimer";
ROUTE2885.fromField = "fraction_changed";
ROUTE2885.toNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE2885.toField = "set_fraction";
children[513] = ROUTE2885;

ROUTE ROUTE2886 = createNode("ROUTE");
ROUTE2886.fromNode = "RunTimer";
ROUTE2886.fromField = "fraction_changed";
ROUTE2886.toNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE2886.toField = "set_fraction";
children[514] = ROUTE2886;

ROUTE ROUTE2887 = createNode("ROUTE");
ROUTE2887.fromNode = "RunTimer";
ROUTE2887.fromField = "fraction_changed";
ROUTE2887.toNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE2887.toField = "set_fraction";
children[515] = ROUTE2887;

ROUTE ROUTE2888 = createNode("ROUTE");
ROUTE2888.fromNode = "RunTimer";
ROUTE2888.fromField = "fraction_changed";
ROUTE2888.toNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE2888.toField = "set_fraction";
children[516] = ROUTE2888;

ROUTE ROUTE2889 = createNode("ROUTE");
ROUTE2889.fromNode = "RunTimer";
ROUTE2889.fromField = "fraction_changed";
ROUTE2889.toNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE2889.toField = "set_fraction";
children[517] = ROUTE2889;

ROUTE ROUTE2890 = createNode("ROUTE");
ROUTE2890.fromNode = "RunTimer";
ROUTE2890.fromField = "fraction_changed";
ROUTE2890.toNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE2890.toField = "set_fraction";
children[518] = ROUTE2890;

ROUTE ROUTE2891 = createNode("ROUTE");
ROUTE2891.fromNode = "RunTimer";
ROUTE2891.fromField = "fraction_changed";
ROUTE2891.toNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE2891.toField = "set_fraction";
children[519] = ROUTE2891;

ROUTE ROUTE2892 = createNode("ROUTE");
ROUTE2892.fromNode = "RunTimer";
ROUTE2892.fromField = "fraction_changed";
ROUTE2892.toNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE2892.toField = "set_fraction";
children[520] = ROUTE2892;

ROUTE ROUTE2893 = createNode("ROUTE");
ROUTE2893.fromNode = "RunTimer";
ROUTE2893.fromField = "fraction_changed";
ROUTE2893.toNode = "Run_head_RotationInterpolator_Run";
ROUTE2893.toField = "set_fraction";
children[521] = ROUTE2893;

ROUTE ROUTE2894 = createNode("ROUTE");
ROUTE2894.fromNode = "RunTimer";
ROUTE2894.fromField = "fraction_changed";
ROUTE2894.toNode = "Run_neck_RotationInterpolator_Run";
ROUTE2894.toField = "set_fraction";
children[522] = ROUTE2894;

ROUTE ROUTE2895 = createNode("ROUTE");
ROUTE2895.fromNode = "RunTimer";
ROUTE2895.fromField = "fraction_changed";
ROUTE2895.toNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE2895.toField = "set_fraction";
children[523] = ROUTE2895;

ROUTE ROUTE2896 = createNode("ROUTE");
ROUTE2896.fromNode = "RunTimer";
ROUTE2896.fromField = "fraction_changed";
ROUTE2896.toNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE2896.toField = "set_fraction";
children[524] = ROUTE2896;

ROUTE ROUTE2897 = createNode("ROUTE");
ROUTE2897.fromNode = "RunTimer";
ROUTE2897.fromField = "fraction_changed";
ROUTE2897.toNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE2897.toField = "set_fraction";
children[525] = ROUTE2897;

ROUTE ROUTE2898 = createNode("ROUTE");
ROUTE2898.fromNode = "RunTimer";
ROUTE2898.fromField = "fraction_changed";
ROUTE2898.toNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE2898.toField = "set_fraction";
children[526] = ROUTE2898;

ROUTE ROUTE2899 = createNode("ROUTE");
ROUTE2899.fromNode = "RunTimer";
ROUTE2899.fromField = "fraction_changed";
ROUTE2899.toNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE2899.toField = "set_fraction";
children[527] = ROUTE2899;

ROUTE ROUTE2900 = createNode("ROUTE");
ROUTE2900.fromNode = "RunTimer";
ROUTE2900.fromField = "fraction_changed";
ROUTE2900.toNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE2900.toField = "set_fraction";
children[528] = ROUTE2900;

ROUTE ROUTE2901 = createNode("ROUTE");
ROUTE2901.fromNode = "RunTimer";
ROUTE2901.fromField = "fraction_changed";
ROUTE2901.toNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE2901.toField = "set_fraction";
children[529] = ROUTE2901;

ROUTE ROUTE2902 = createNode("ROUTE");
ROUTE2902.fromNode = "RunTimer";
ROUTE2902.fromField = "fraction_changed";
ROUTE2902.toNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2902.toField = "set_fraction";
children[530] = ROUTE2902;

ROUTE ROUTE2903 = createNode("ROUTE");
ROUTE2903.fromNode = "RunTimer";
ROUTE2903.fromField = "fraction_changed";
ROUTE2903.toNode = "Run_sacroiliac_YawInterpolator";
ROUTE2903.toField = "set_fraction";
children[531] = ROUTE2903;

ROUTE ROUTE2904 = createNode("ROUTE");
ROUTE2904.fromNode = "RunTimer";
ROUTE2904.fromField = "fraction_changed";
ROUTE2904.toNode = "Run_vl5_YawInterpolator";
ROUTE2904.toField = "set_fraction";
children[532] = ROUTE2904;

ROUTE ROUTE2905 = createNode("ROUTE");
ROUTE2905.fromNode = "RunTimer";
ROUTE2905.fromField = "fraction_changed";
ROUTE2905.toNode = "Run_vc6_YawInterpolator";
ROUTE2905.toField = "set_fraction";
children[533] = ROUTE2905;

ROUTE ROUTE2906 = createNode("ROUTE");
ROUTE2906.fromNode = "RunTimer";
ROUTE2906.fromField = "fraction_changed";
ROUTE2906.toNode = "Run_l_thumb1_PitchInterpolator";
ROUTE2906.toField = "set_fraction";
children[534] = ROUTE2906;

ROUTE ROUTE2907 = createNode("ROUTE");
ROUTE2907.fromNode = "RunTimer";
ROUTE2907.fromField = "fraction_changed";
ROUTE2907.toNode = "Run_r_thumb1_PitchInterpolator";
ROUTE2907.toField = "set_fraction";
children[535] = ROUTE2907;

ROUTE ROUTE2908 = createNode("ROUTE");
ROUTE2908.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE2908.fromField = "value_changed";
ROUTE2908.toNode = "hanim_r_ankle";
ROUTE2908.toField = "set_rotation";
children[536] = ROUTE2908;

ROUTE ROUTE2909 = createNode("ROUTE");
ROUTE2909.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE2909.fromField = "value_changed";
ROUTE2909.toNode = "hanim_r_knee";
ROUTE2909.toField = "set_rotation";
children[537] = ROUTE2909;

ROUTE ROUTE2910 = createNode("ROUTE");
ROUTE2910.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE2910.fromField = "value_changed";
ROUTE2910.toNode = "hanim_r_hip";
ROUTE2910.toField = "set_rotation";
children[538] = ROUTE2910;

ROUTE ROUTE2911 = createNode("ROUTE");
ROUTE2911.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE2911.fromField = "value_changed";
ROUTE2911.toNode = "hanim_l_ankle";
ROUTE2911.toField = "set_rotation";
children[539] = ROUTE2911;

ROUTE ROUTE2912 = createNode("ROUTE");
ROUTE2912.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE2912.fromField = "value_changed";
ROUTE2912.toNode = "hanim_l_knee";
ROUTE2912.toField = "set_rotation";
children[540] = ROUTE2912;

ROUTE ROUTE2913 = createNode("ROUTE");
ROUTE2913.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE2913.fromField = "value_changed";
ROUTE2913.toNode = "hanim_l_hip";
ROUTE2913.toField = "set_rotation";
children[541] = ROUTE2913;

ROUTE ROUTE2914 = createNode("ROUTE");
ROUTE2914.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE2914.fromField = "value_changed";
ROUTE2914.toNode = "hanim_r_wrist";
ROUTE2914.toField = "set_rotation";
children[542] = ROUTE2914;

ROUTE ROUTE2915 = createNode("ROUTE");
ROUTE2915.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE2915.fromField = "value_changed";
ROUTE2915.toNode = "hanim_r_elbow";
ROUTE2915.toField = "set_rotation";
children[543] = ROUTE2915;

ROUTE ROUTE2916 = createNode("ROUTE");
ROUTE2916.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE2916.fromField = "value_changed";
ROUTE2916.toNode = "hanim_r_shoulder";
ROUTE2916.toField = "set_rotation";
children[544] = ROUTE2916;

ROUTE ROUTE2917 = createNode("ROUTE");
ROUTE2917.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE2917.fromField = "value_changed";
ROUTE2917.toNode = "hanim_l_wrist";
ROUTE2917.toField = "set_rotation";
children[545] = ROUTE2917;

ROUTE ROUTE2918 = createNode("ROUTE");
ROUTE2918.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE2918.fromField = "value_changed";
ROUTE2918.toNode = "hanim_l_elbow";
ROUTE2918.toField = "set_rotation";
children[546] = ROUTE2918;

ROUTE ROUTE2919 = createNode("ROUTE");
ROUTE2919.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE2919.fromField = "value_changed";
ROUTE2919.toNode = "hanim_l_shoulder";
ROUTE2919.toField = "set_rotation";
children[547] = ROUTE2919;

ROUTE ROUTE2920 = createNode("ROUTE");
ROUTE2920.fromNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE2920.fromField = "value_changed";
ROUTE2920.toNode = "hanim_sacroiliac";
ROUTE2920.toField = "set_rotation";
children[548] = ROUTE2920;

ROUTE ROUTE2921 = createNode("ROUTE");
ROUTE2921.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE2921.fromField = "value_changed";
ROUTE2921.toNode = "hanim_skullbase";
ROUTE2921.toField = "set_rotation";
children[549] = ROUTE2921;

ROUTE ROUTE2922 = createNode("ROUTE");
ROUTE2922.fromNode = "Run_neck_RotationInterpolator_Run";
ROUTE2922.fromField = "value_changed";
ROUTE2922.toNode = "hanim_vc4";
ROUTE2922.toField = "set_rotation";
children[550] = ROUTE2922;

ROUTE ROUTE2923 = createNode("ROUTE");
ROUTE2923.fromNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE2923.fromField = "value_changed";
ROUTE2923.toNode = "hanim_vl1";
ROUTE2923.toField = "set_rotation";
children[551] = ROUTE2923;

ROUTE ROUTE2924 = createNode("ROUTE");
ROUTE2924.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE2924.fromField = "value_changed";
ROUTE2924.toNode = "hanim_humanoid_root";
ROUTE2924.toField = "set_rotation";
children[552] = ROUTE2924;

ROUTE ROUTE2925 = createNode("ROUTE");
ROUTE2925.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE2925.fromField = "value_changed";
ROUTE2925.toNode = "hanim_humanoid_root";
ROUTE2925.toField = "set_translation";
children[553] = ROUTE2925;

ROUTE ROUTE2926 = createNode("ROUTE");
ROUTE2926.fromNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE2926.fromField = "value_changed";
ROUTE2926.toNode = "hanim_l_sternoclavicular";
ROUTE2926.toField = "set_rotation";
children[554] = ROUTE2926;

ROUTE ROUTE2927 = createNode("ROUTE");
ROUTE2927.fromNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE2927.fromField = "value_changed";
ROUTE2927.toNode = "hanim_l_acromioclavicular";
ROUTE2927.toField = "set_rotation";
children[555] = ROUTE2927;

ROUTE ROUTE2928 = createNode("ROUTE");
ROUTE2928.fromNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE2928.fromField = "value_changed";
ROUTE2928.toNode = "hanim_r_sternoclavicular";
ROUTE2928.toField = "set_rotation";
children[556] = ROUTE2928;

ROUTE ROUTE2929 = createNode("ROUTE");
ROUTE2929.fromNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE2929.fromField = "value_changed";
ROUTE2929.toNode = "hanim_r_acromioclavicular";
ROUTE2929.toField = "set_rotation";
children[557] = ROUTE2929;

ROUTE ROUTE2930 = createNode("ROUTE");
ROUTE2930.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2930.fromField = "value_changed";
ROUTE2930.toNode = "hanim_l_metatarsal";
ROUTE2930.toField = "set_rotation";
children[558] = ROUTE2930;

ROUTE ROUTE2931 = createNode("ROUTE");
ROUTE2931.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2931.fromField = "value_changed";
ROUTE2931.toNode = "hanim_r_metatarsal";
ROUTE2931.toField = "set_rotation";
children[559] = ROUTE2931;

ROUTE ROUTE2932 = createNode("ROUTE");
ROUTE2932.fromNode = "Run_sacroiliac_YawInterpolator";
ROUTE2932.fromField = "value_changed";
ROUTE2932.toNode = "hanim_sacroiliac";
ROUTE2932.toField = "set_rotation";
children[560] = ROUTE2932;

ROUTE ROUTE2933 = createNode("ROUTE");
ROUTE2933.fromNode = "Run_vl5_YawInterpolator";
ROUTE2933.fromField = "value_changed";
ROUTE2933.toNode = "hanim_vl5";
ROUTE2933.toField = "set_rotation";
children[561] = ROUTE2933;

ROUTE ROUTE2934 = createNode("ROUTE");
ROUTE2934.fromNode = "Run_vc6_YawInterpolator";
ROUTE2934.fromField = "value_changed";
ROUTE2934.toNode = "hanim_vc6";
ROUTE2934.toField = "set_rotation";
children[562] = ROUTE2934;

ROUTE ROUTE2935 = createNode("ROUTE");
ROUTE2935.fromNode = "Run_l_thumb1_PitchInterpolator";
ROUTE2935.fromField = "value_changed";
ROUTE2935.toNode = "hanim_l_thumb1";
ROUTE2935.toField = "set_rotation";
children[563] = ROUTE2935;

ROUTE ROUTE2936 = createNode("ROUTE");
ROUTE2936.fromNode = "Run_r_thumb1_PitchInterpolator";
ROUTE2936.fromField = "value_changed";
ROUTE2936.toNode = "hanim_r_thumb1";
ROUTE2936.toField = "set_rotation";
children[564] = ROUTE2936;

ROUTE ROUTE2937 = createNode("ROUTE");
ROUTE2937.fromNode = "JumpTimer";
ROUTE2937.fromField = "fraction_changed";
ROUTE2937.toNode = "Jump_r_ankle_RotationInterpolator";
ROUTE2937.toField = "set_fraction";
children[565] = ROUTE2937;

ROUTE ROUTE2938 = createNode("ROUTE");
ROUTE2938.fromNode = "JumpTimer";
ROUTE2938.fromField = "fraction_changed";
ROUTE2938.toNode = "Jump_r_knee_RotationInterpolator";
ROUTE2938.toField = "set_fraction";
children[566] = ROUTE2938;

ROUTE ROUTE2939 = createNode("ROUTE");
ROUTE2939.fromNode = "JumpTimer";
ROUTE2939.fromField = "fraction_changed";
ROUTE2939.toNode = "Jump_r_hip_RotationInterpolator";
ROUTE2939.toField = "set_fraction";
children[567] = ROUTE2939;

ROUTE ROUTE2940 = createNode("ROUTE");
ROUTE2940.fromNode = "JumpTimer";
ROUTE2940.fromField = "fraction_changed";
ROUTE2940.toNode = "Jump_l_ankle_RotationInterpolator";
ROUTE2940.toField = "set_fraction";
children[568] = ROUTE2940;

ROUTE ROUTE2941 = createNode("ROUTE");
ROUTE2941.fromNode = "JumpTimer";
ROUTE2941.fromField = "fraction_changed";
ROUTE2941.toNode = "Jump_l_knee_RotationInterpolator";
ROUTE2941.toField = "set_fraction";
children[569] = ROUTE2941;

ROUTE ROUTE2942 = createNode("ROUTE");
ROUTE2942.fromNode = "JumpTimer";
ROUTE2942.fromField = "fraction_changed";
ROUTE2942.toNode = "Jump_l_hip_RotationInterpolator";
ROUTE2942.toField = "set_fraction";
children[570] = ROUTE2942;

ROUTE ROUTE2943 = createNode("ROUTE");
ROUTE2943.fromNode = "JumpTimer";
ROUTE2943.fromField = "fraction_changed";
ROUTE2943.toNode = "Jump_lower_body_RotationInterpolator";
ROUTE2943.toField = "set_fraction";
children[571] = ROUTE2943;

ROUTE ROUTE2944 = createNode("ROUTE");
ROUTE2944.fromNode = "JumpTimer";
ROUTE2944.fromField = "fraction_changed";
ROUTE2944.toNode = "Jump_r_wrist_RotationInterpolator";
ROUTE2944.toField = "set_fraction";
children[572] = ROUTE2944;

ROUTE ROUTE2945 = createNode("ROUTE");
ROUTE2945.fromNode = "JumpTimer";
ROUTE2945.fromField = "fraction_changed";
ROUTE2945.toNode = "Jump_r_elbow_RotationInterpolator";
ROUTE2945.toField = "set_fraction";
children[573] = ROUTE2945;

ROUTE ROUTE2946 = createNode("ROUTE");
ROUTE2946.fromNode = "JumpTimer";
ROUTE2946.fromField = "fraction_changed";
ROUTE2946.toNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE2946.toField = "set_fraction";
children[574] = ROUTE2946;

ROUTE ROUTE2947 = createNode("ROUTE");
ROUTE2947.fromNode = "JumpTimer";
ROUTE2947.fromField = "fraction_changed";
ROUTE2947.toNode = "Jump_l_wrist_RotationInterpolator";
ROUTE2947.toField = "set_fraction";
children[575] = ROUTE2947;

ROUTE ROUTE2948 = createNode("ROUTE");
ROUTE2948.fromNode = "JumpTimer";
ROUTE2948.fromField = "fraction_changed";
ROUTE2948.toNode = "Jump_l_elbow_RotationInterpolator";
ROUTE2948.toField = "set_fraction";
children[576] = ROUTE2948;

ROUTE ROUTE2949 = createNode("ROUTE");
ROUTE2949.fromNode = "JumpTimer";
ROUTE2949.fromField = "fraction_changed";
ROUTE2949.toNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE2949.toField = "set_fraction";
children[577] = ROUTE2949;

ROUTE ROUTE2950 = createNode("ROUTE");
ROUTE2950.fromNode = "JumpTimer";
ROUTE2950.fromField = "fraction_changed";
ROUTE2950.toNode = "Jump_head_RotationInterpolator";
ROUTE2950.toField = "set_fraction";
children[578] = ROUTE2950;

ROUTE ROUTE2951 = createNode("ROUTE");
ROUTE2951.fromNode = "JumpTimer";
ROUTE2951.fromField = "fraction_changed";
ROUTE2951.toNode = "Jump_neck_RotationInterpolator";
ROUTE2951.toField = "set_fraction";
children[579] = ROUTE2951;

ROUTE ROUTE2952 = createNode("ROUTE");
ROUTE2952.fromNode = "JumpTimer";
ROUTE2952.fromField = "fraction_changed";
ROUTE2952.toNode = "Jump_upper_body_RotationInterpolator";
ROUTE2952.toField = "set_fraction";
children[580] = ROUTE2952;

ROUTE ROUTE2953 = createNode("ROUTE");
ROUTE2953.fromNode = "JumpTimer";
ROUTE2953.fromField = "fraction_changed";
ROUTE2953.toNode = "Jump_whole_body_RotationInterpolator";
ROUTE2953.toField = "set_fraction";
children[581] = ROUTE2953;

ROUTE ROUTE2954 = createNode("ROUTE");
ROUTE2954.fromNode = "JumpTimer";
ROUTE2954.fromField = "fraction_changed";
ROUTE2954.toNode = "Jump_whole_body_TranslationInterpolator";
ROUTE2954.toField = "set_fraction";
children[582] = ROUTE2954;

ROUTE ROUTE2955 = createNode("ROUTE");
ROUTE2955.fromNode = "JumpTimer";
ROUTE2955.fromField = "fraction_changed";
ROUTE2955.toNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE2955.toField = "set_fraction";
children[583] = ROUTE2955;

ROUTE ROUTE2956 = createNode("ROUTE");
ROUTE2956.fromNode = "JumpTimer";
ROUTE2956.fromField = "fraction_changed";
ROUTE2956.toNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE2956.toField = "set_fraction";
children[584] = ROUTE2956;

ROUTE ROUTE2957 = createNode("ROUTE");
ROUTE2957.fromNode = "JumpTimer";
ROUTE2957.fromField = "fraction_changed";
ROUTE2957.toNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE2957.toField = "set_fraction";
children[585] = ROUTE2957;

ROUTE ROUTE2958 = createNode("ROUTE");
ROUTE2958.fromNode = "JumpTimer";
ROUTE2958.fromField = "fraction_changed";
ROUTE2958.toNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE2958.toField = "set_fraction";
children[586] = ROUTE2958;

ROUTE ROUTE2959 = createNode("ROUTE");
ROUTE2959.fromNode = "JumpTimer";
ROUTE2959.fromField = "fraction_changed";
ROUTE2959.toNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2959.toField = "set_fraction";
children[587] = ROUTE2959;

ROUTE ROUTE2960 = createNode("ROUTE");
ROUTE2960.fromNode = "JumpTimer";
ROUTE2960.fromField = "fraction_changed";
ROUTE2960.toNode = "Jump_sacroiliac_YawInterpolator";
ROUTE2960.toField = "set_fraction";
children[588] = ROUTE2960;

ROUTE ROUTE2961 = createNode("ROUTE");
ROUTE2961.fromNode = "JumpTimer";
ROUTE2961.fromField = "fraction_changed";
ROUTE2961.toNode = "Jump_vl5_YawInterpolator";
ROUTE2961.toField = "set_fraction";
children[589] = ROUTE2961;

ROUTE ROUTE2962 = createNode("ROUTE");
ROUTE2962.fromNode = "JumpTimer";
ROUTE2962.fromField = "fraction_changed";
ROUTE2962.toNode = "Jump_vc6_YawInterpolator";
ROUTE2962.toField = "set_fraction";
children[590] = ROUTE2962;

ROUTE ROUTE2963 = createNode("ROUTE");
ROUTE2963.fromNode = "JumpTimer";
ROUTE2963.fromField = "fraction_changed";
ROUTE2963.toNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE2963.toField = "set_fraction";
children[591] = ROUTE2963;

ROUTE ROUTE2964 = createNode("ROUTE");
ROUTE2964.fromNode = "JumpTimer";
ROUTE2964.fromField = "fraction_changed";
ROUTE2964.toNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE2964.toField = "set_fraction";
children[592] = ROUTE2964;

ROUTE ROUTE2965 = createNode("ROUTE");
ROUTE2965.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE2965.fromField = "value_changed";
ROUTE2965.toNode = "hanim_r_ankle";
ROUTE2965.toField = "set_rotation";
children[593] = ROUTE2965;

ROUTE ROUTE2966 = createNode("ROUTE");
ROUTE2966.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE2966.fromField = "value_changed";
ROUTE2966.toNode = "hanim_r_knee";
ROUTE2966.toField = "set_rotation";
children[594] = ROUTE2966;

ROUTE ROUTE2967 = createNode("ROUTE");
ROUTE2967.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE2967.fromField = "value_changed";
ROUTE2967.toNode = "hanim_r_hip";
ROUTE2967.toField = "set_rotation";
children[595] = ROUTE2967;

ROUTE ROUTE2968 = createNode("ROUTE");
ROUTE2968.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE2968.fromField = "value_changed";
ROUTE2968.toNode = "hanim_l_ankle";
ROUTE2968.toField = "set_rotation";
children[596] = ROUTE2968;

ROUTE ROUTE2969 = createNode("ROUTE");
ROUTE2969.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE2969.fromField = "value_changed";
ROUTE2969.toNode = "hanim_l_knee";
ROUTE2969.toField = "set_rotation";
children[597] = ROUTE2969;

ROUTE ROUTE2970 = createNode("ROUTE");
ROUTE2970.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE2970.fromField = "value_changed";
ROUTE2970.toNode = "hanim_l_hip";
ROUTE2970.toField = "set_rotation";
children[598] = ROUTE2970;

ROUTE ROUTE2971 = createNode("ROUTE");
ROUTE2971.fromNode = "Jump_lower_body_RotationInterpolator";
ROUTE2971.fromField = "value_changed";
ROUTE2971.toNode = "hanim_sacroiliac";
ROUTE2971.toField = "set_rotation";
children[599] = ROUTE2971;

ROUTE ROUTE2972 = createNode("ROUTE");
ROUTE2972.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE2972.fromField = "value_changed";
ROUTE2972.toNode = "hanim_r_wrist";
ROUTE2972.toField = "set_rotation";
children[600] = ROUTE2972;

ROUTE ROUTE2973 = createNode("ROUTE");
ROUTE2973.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE2973.fromField = "value_changed";
ROUTE2973.toNode = "hanim_r_elbow";
ROUTE2973.toField = "set_rotation";
children[601] = ROUTE2973;

ROUTE ROUTE2974 = createNode("ROUTE");
ROUTE2974.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE2974.fromField = "value_changed";
ROUTE2974.toNode = "hanim_r_shoulder";
ROUTE2974.toField = "set_rotation";
children[602] = ROUTE2974;

ROUTE ROUTE2975 = createNode("ROUTE");
ROUTE2975.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE2975.fromField = "value_changed";
ROUTE2975.toNode = "hanim_l_wrist";
ROUTE2975.toField = "set_rotation";
children[603] = ROUTE2975;

ROUTE ROUTE2976 = createNode("ROUTE");
ROUTE2976.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE2976.fromField = "value_changed";
ROUTE2976.toNode = "hanim_l_elbow";
ROUTE2976.toField = "set_rotation";
children[604] = ROUTE2976;

ROUTE ROUTE2977 = createNode("ROUTE");
ROUTE2977.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE2977.fromField = "value_changed";
ROUTE2977.toNode = "hanim_l_shoulder";
ROUTE2977.toField = "set_rotation";
children[605] = ROUTE2977;

ROUTE ROUTE2978 = createNode("ROUTE");
ROUTE2978.fromNode = "Jump_head_RotationInterpolator";
ROUTE2978.fromField = "value_changed";
ROUTE2978.toNode = "hanim_skullbase";
ROUTE2978.toField = "set_rotation";
children[606] = ROUTE2978;

ROUTE ROUTE2979 = createNode("ROUTE");
ROUTE2979.fromNode = "Jump_neck_RotationInterpolator";
ROUTE2979.fromField = "value_changed";
ROUTE2979.toNode = "hanim_vc4";
ROUTE2979.toField = "set_rotation";
children[607] = ROUTE2979;

ROUTE ROUTE2980 = createNode("ROUTE");
ROUTE2980.fromNode = "Jump_upper_body_RotationInterpolator";
ROUTE2980.fromField = "value_changed";
ROUTE2980.toNode = "hanim_vl1";
ROUTE2980.toField = "set_rotation";
children[608] = ROUTE2980;

ROUTE ROUTE2981 = createNode("ROUTE");
ROUTE2981.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE2981.fromField = "value_changed";
ROUTE2981.toNode = "hanim_humanoid_root";
ROUTE2981.toField = "set_rotation";
children[609] = ROUTE2981;

ROUTE ROUTE2982 = createNode("ROUTE");
ROUTE2982.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE2982.fromField = "value_changed";
ROUTE2982.toNode = "hanim_humanoid_root";
ROUTE2982.toField = "set_translation";
children[610] = ROUTE2982;

ROUTE ROUTE2983 = createNode("ROUTE");
ROUTE2983.fromNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE2983.fromField = "value_changed";
ROUTE2983.toNode = "hanim_l_sternoclavicular";
ROUTE2983.toField = "set_rotation";
children[611] = ROUTE2983;

ROUTE ROUTE2984 = createNode("ROUTE");
ROUTE2984.fromNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE2984.fromField = "value_changed";
ROUTE2984.toNode = "hanim_l_acromioclavicular";
ROUTE2984.toField = "set_rotation";
children[612] = ROUTE2984;

ROUTE ROUTE2985 = createNode("ROUTE");
ROUTE2985.fromNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE2985.fromField = "value_changed";
ROUTE2985.toNode = "hanim_r_sternoclavicular";
ROUTE2985.toField = "set_rotation";
children[613] = ROUTE2985;

ROUTE ROUTE2986 = createNode("ROUTE");
ROUTE2986.fromNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE2986.fromField = "value_changed";
ROUTE2986.toNode = "hanim_r_acromioclavicular";
ROUTE2986.toField = "set_rotation";
children[614] = ROUTE2986;

ROUTE ROUTE2987 = createNode("ROUTE");
ROUTE2987.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2987.fromField = "value_changed";
ROUTE2987.toNode = "hanim_l_metatarsal";
ROUTE2987.toField = "set_rotation";
children[615] = ROUTE2987;

ROUTE ROUTE2988 = createNode("ROUTE");
ROUTE2988.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2988.fromField = "value_changed";
ROUTE2988.toNode = "hanim_r_metatarsal";
ROUTE2988.toField = "set_rotation";
children[616] = ROUTE2988;

ROUTE ROUTE2989 = createNode("ROUTE");
ROUTE2989.fromNode = "Jump_sacroiliac_YawInterpolator";
ROUTE2989.fromField = "value_changed";
ROUTE2989.toNode = "hanim_sacroiliac";
ROUTE2989.toField = "set_rotation";
children[617] = ROUTE2989;

ROUTE ROUTE2990 = createNode("ROUTE");
ROUTE2990.fromNode = "Jump_vl5_YawInterpolator";
ROUTE2990.fromField = "value_changed";
ROUTE2990.toNode = "hanim_vl5";
ROUTE2990.toField = "set_rotation";
children[618] = ROUTE2990;

ROUTE ROUTE2991 = createNode("ROUTE");
ROUTE2991.fromNode = "Jump_vc6_YawInterpolator";
ROUTE2991.fromField = "value_changed";
ROUTE2991.toNode = "hanim_vc6";
ROUTE2991.toField = "set_rotation";
children[619] = ROUTE2991;

ROUTE ROUTE2992 = createNode("ROUTE");
ROUTE2992.fromNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE2992.fromField = "value_changed";
ROUTE2992.toNode = "hanim_l_thumb1";
ROUTE2992.toField = "set_rotation";
children[620] = ROUTE2992;

ROUTE ROUTE2993 = createNode("ROUTE");
ROUTE2993.fromNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE2993.fromField = "value_changed";
ROUTE2993.toNode = "hanim_r_thumb1";
ROUTE2993.toField = "set_rotation";
children[621] = ROUTE2993;

ROUTE ROUTE2994 = createNode("ROUTE");
ROUTE2994.fromNode = "KickTimer";
ROUTE2994.fromField = "fraction_changed";
ROUTE2994.toNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE2994.toField = "set_fraction";
children[622] = ROUTE2994;

ROUTE ROUTE2995 = createNode("ROUTE");
ROUTE2995.fromNode = "KickTimer";
ROUTE2995.fromField = "fraction_changed";
ROUTE2995.toNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE2995.toField = "set_fraction";
children[623] = ROUTE2995;

ROUTE ROUTE2996 = createNode("ROUTE");
ROUTE2996.fromNode = "KickTimer";
ROUTE2996.fromField = "fraction_changed";
ROUTE2996.toNode = "Kick_l_shoulder_RollInterpolator";
ROUTE2996.toField = "set_fraction";
children[624] = ROUTE2996;

ROUTE ROUTE2997 = createNode("ROUTE");
ROUTE2997.fromNode = "KickTimer";
ROUTE2997.fromField = "fraction_changed";
ROUTE2997.toNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE2997.toField = "set_fraction";
children[625] = ROUTE2997;

ROUTE ROUTE2998 = createNode("ROUTE");
ROUTE2998.fromNode = "KickTimer";
ROUTE2998.fromField = "fraction_changed";
ROUTE2998.toNode = "Kick_l_wrist_RollInterpolator";
ROUTE2998.toField = "set_fraction";
children[626] = ROUTE2998;

ROUTE ROUTE2999 = createNode("ROUTE");
ROUTE2999.fromNode = "KickTimer";
ROUTE2999.fromField = "fraction_changed";
ROUTE2999.toNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE2999.toField = "set_fraction";
children[627] = ROUTE2999;

ROUTE ROUTE3000 = createNode("ROUTE");
ROUTE3000.fromNode = "KickTimer";
ROUTE3000.fromField = "fraction_changed";
ROUTE3000.toNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE3000.toField = "set_fraction";
children[628] = ROUTE3000;

ROUTE ROUTE3001 = createNode("ROUTE");
ROUTE3001.fromNode = "KickTimer";
ROUTE3001.fromField = "fraction_changed";
ROUTE3001.toNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE3001.toField = "set_fraction";
children[629] = ROUTE3001;

ROUTE ROUTE3002 = createNode("ROUTE");
ROUTE3002.fromNode = "KickTimer";
ROUTE3002.fromField = "fraction_changed";
ROUTE3002.toNode = "Kick_r_shoulder_RollInterpolator";
ROUTE3002.toField = "set_fraction";
children[630] = ROUTE3002;

ROUTE ROUTE3003 = createNode("ROUTE");
ROUTE3003.fromNode = "KickTimer";
ROUTE3003.fromField = "fraction_changed";
ROUTE3003.toNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE3003.toField = "set_fraction";
children[631] = ROUTE3003;

ROUTE ROUTE3004 = createNode("ROUTE");
ROUTE3004.fromNode = "KickTimer";
ROUTE3004.fromField = "fraction_changed";
ROUTE3004.toNode = "Kick_r_wrist_RollInterpolator";
ROUTE3004.toField = "set_fraction";
children[632] = ROUTE3004;

ROUTE ROUTE3005 = createNode("ROUTE");
ROUTE3005.fromNode = "KickTimer";
ROUTE3005.fromField = "fraction_changed";
ROUTE3005.toNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE3005.toField = "set_fraction";
children[633] = ROUTE3005;

ROUTE ROUTE3006 = createNode("ROUTE");
ROUTE3006.fromNode = "KickTimer";
ROUTE3006.fromField = "fraction_changed";
ROUTE3006.toNode = "Kick_r_hip_PitchInterpolator";
ROUTE3006.toField = "set_fraction";
children[634] = ROUTE3006;

ROUTE ROUTE3007 = createNode("ROUTE");
ROUTE3007.fromNode = "KickTimer";
ROUTE3007.fromField = "fraction_changed";
ROUTE3007.toNode = "Kick_r_knee_PitchInterpolator";
ROUTE3007.toField = "set_fraction";
children[635] = ROUTE3007;

ROUTE ROUTE3008 = createNode("ROUTE");
ROUTE3008.fromNode = "KickTimer";
ROUTE3008.fromField = "fraction_changed";
ROUTE3008.toNode = "Kick_l_hip_PitchInterpolator";
ROUTE3008.toField = "set_fraction";
children[636] = ROUTE3008;

ROUTE ROUTE3009 = createNode("ROUTE");
ROUTE3009.fromNode = "KickTimer";
ROUTE3009.fromField = "fraction_changed";
ROUTE3009.toNode = "Kick_l_knee_PitchInterpolator";
ROUTE3009.toField = "set_fraction";
children[637] = ROUTE3009;

ROUTE ROUTE3010 = createNode("ROUTE");
ROUTE3010.fromNode = "KickTimer";
ROUTE3010.fromField = "fraction_changed";
ROUTE3010.toNode = "Kick_r_ankle_PitchInterpolator";
ROUTE3010.toField = "set_fraction";
children[638] = ROUTE3010;

ROUTE ROUTE3011 = createNode("ROUTE");
ROUTE3011.fromNode = "KickTimer";
ROUTE3011.fromField = "fraction_changed";
ROUTE3011.toNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE3011.toField = "set_fraction";
children[639] = ROUTE3011;

ROUTE ROUTE3012 = createNode("ROUTE");
ROUTE3012.fromNode = "KickTimer";
ROUTE3012.fromField = "fraction_changed";
ROUTE3012.toNode = "Kick_sacroiliac_YawInterpolator";
ROUTE3012.toField = "set_fraction";
children[640] = ROUTE3012;

ROUTE ROUTE3013 = createNode("ROUTE");
ROUTE3013.fromNode = "KickTimer";
ROUTE3013.fromField = "fraction_changed";
ROUTE3013.toNode = "Kick_vl5_YawInterpolator";
ROUTE3013.toField = "set_fraction";
children[641] = ROUTE3013;

ROUTE ROUTE3014 = createNode("ROUTE");
ROUTE3014.fromNode = "KickTimer";
ROUTE3014.fromField = "fraction_changed";
ROUTE3014.toNode = "Kick_vc6_YawInterpolator";
ROUTE3014.toField = "set_fraction";
children[642] = ROUTE3014;

ROUTE ROUTE3015 = createNode("ROUTE");
ROUTE3015.fromNode = "KickTimer";
ROUTE3015.fromField = "fraction_changed";
ROUTE3015.toNode = "Kick_lower_body_RotationInterpolator";
ROUTE3015.toField = "set_fraction";
children[643] = ROUTE3015;

ROUTE ROUTE3016 = createNode("ROUTE");
ROUTE3016.fromNode = "KickTimer";
ROUTE3016.fromField = "fraction_changed";
ROUTE3016.toNode = "Kick_upper_body_RotationInterpolator";
ROUTE3016.toField = "set_fraction";
children[644] = ROUTE3016;

ROUTE ROUTE3017 = createNode("ROUTE");
ROUTE3017.fromNode = "KickTimer";
ROUTE3017.fromField = "fraction_changed";
ROUTE3017.toNode = "Kick_whole_body_RotationInterpolator";
ROUTE3017.toField = "set_fraction";
children[645] = ROUTE3017;

ROUTE ROUTE3018 = createNode("ROUTE");
ROUTE3018.fromNode = "KickTimer";
ROUTE3018.fromField = "fraction_changed";
ROUTE3018.toNode = "Kick_whole_body_TranslationInterpolator";
ROUTE3018.toField = "set_fraction";
children[646] = ROUTE3018;

ROUTE ROUTE3019 = createNode("ROUTE");
ROUTE3019.fromNode = "KickTimer";
ROUTE3019.fromField = "fraction_changed";
ROUTE3019.toNode = "Kick_neck_RotationInterpolator";
ROUTE3019.toField = "set_fraction";
children[647] = ROUTE3019;

ROUTE ROUTE3020 = createNode("ROUTE");
ROUTE3020.fromNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE3020.fromField = "value_changed";
ROUTE3020.toNode = "hanim_l_sternoclavicular";
ROUTE3020.toField = "set_rotation";
children[648] = ROUTE3020;

ROUTE ROUTE3021 = createNode("ROUTE");
ROUTE3021.fromNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE3021.fromField = "value_changed";
ROUTE3021.toNode = "hanim_l_acromioclavicular";
ROUTE3021.toField = "set_rotation";
children[649] = ROUTE3021;

ROUTE ROUTE3022 = createNode("ROUTE");
ROUTE3022.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE3022.fromField = "value_changed";
ROUTE3022.toNode = "hanim_l_shoulder";
ROUTE3022.toField = "set_rotation";
children[650] = ROUTE3022;

ROUTE ROUTE3023 = createNode("ROUTE");
ROUTE3023.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE3023.fromField = "value_changed";
ROUTE3023.toNode = "hanim_l_elbow";
ROUTE3023.toField = "set_rotation";
children[651] = ROUTE3023;

ROUTE ROUTE3024 = createNode("ROUTE");
ROUTE3024.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE3024.fromField = "value_changed";
ROUTE3024.toNode = "hanim_l_wrist";
ROUTE3024.toField = "set_rotation";
children[652] = ROUTE3024;

ROUTE ROUTE3025 = createNode("ROUTE");
ROUTE3025.fromNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE3025.fromField = "value_changed";
ROUTE3025.toNode = "hanim_l_thumb1";
ROUTE3025.toField = "set_rotation";
children[653] = ROUTE3025;

ROUTE ROUTE3026 = createNode("ROUTE");
ROUTE3026.fromNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE3026.fromField = "value_changed";
ROUTE3026.toNode = "hanim_r_sternoclavicular";
ROUTE3026.toField = "set_rotation";
children[654] = ROUTE3026;

ROUTE ROUTE3027 = createNode("ROUTE");
ROUTE3027.fromNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE3027.fromField = "value_changed";
ROUTE3027.toNode = "hanim_r_acromioclavicular";
ROUTE3027.toField = "set_rotation";
children[655] = ROUTE3027;

ROUTE ROUTE3028 = createNode("ROUTE");
ROUTE3028.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE3028.fromField = "value_changed";
ROUTE3028.toNode = "hanim_r_shoulder";
ROUTE3028.toField = "set_rotation";
children[656] = ROUTE3028;

ROUTE ROUTE3029 = createNode("ROUTE");
ROUTE3029.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE3029.fromField = "value_changed";
ROUTE3029.toNode = "hanim_r_elbow";
ROUTE3029.toField = "set_rotation";
children[657] = ROUTE3029;

ROUTE ROUTE3030 = createNode("ROUTE");
ROUTE3030.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE3030.fromField = "value_changed";
ROUTE3030.toNode = "hanim_r_wrist";
ROUTE3030.toField = "set_rotation";
children[658] = ROUTE3030;

ROUTE ROUTE3031 = createNode("ROUTE");
ROUTE3031.fromNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE3031.fromField = "value_changed";
ROUTE3031.toNode = "hanim_r_thumb1";
ROUTE3031.toField = "set_rotation";
children[659] = ROUTE3031;

ROUTE ROUTE3032 = createNode("ROUTE");
ROUTE3032.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE3032.fromField = "value_changed";
ROUTE3032.toNode = "hanim_r_hip";
ROUTE3032.toField = "set_rotation";
children[660] = ROUTE3032;

ROUTE ROUTE3033 = createNode("ROUTE");
ROUTE3033.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE3033.fromField = "value_changed";
ROUTE3033.toNode = "hanim_r_knee";
ROUTE3033.toField = "set_rotation";
children[661] = ROUTE3033;

ROUTE ROUTE3034 = createNode("ROUTE");
ROUTE3034.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE3034.fromField = "value_changed";
ROUTE3034.toNode = "hanim_r_ankle";
ROUTE3034.toField = "set_rotation";
children[662] = ROUTE3034;

ROUTE ROUTE3035 = createNode("ROUTE");
ROUTE3035.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE3035.fromField = "value_changed";
ROUTE3035.toNode = "hanim_r_metatarsal";
ROUTE3035.toField = "set_rotation";
children[663] = ROUTE3035;

ROUTE ROUTE3036 = createNode("ROUTE");
ROUTE3036.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE3036.fromField = "value_changed";
ROUTE3036.toNode = "hanim_l_hip";
ROUTE3036.toField = "set_rotation";
children[664] = ROUTE3036;

ROUTE ROUTE3037 = createNode("ROUTE");
ROUTE3037.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE3037.fromField = "value_changed";
ROUTE3037.toNode = "hanim_l_knee";
ROUTE3037.toField = "set_rotation";
children[665] = ROUTE3037;

ROUTE ROUTE3038 = createNode("ROUTE");
ROUTE3038.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE3038.fromField = "value_changed";
ROUTE3038.toNode = "hanim_l_ankle";
ROUTE3038.toField = "set_rotation";
children[666] = ROUTE3038;

ROUTE ROUTE3039 = createNode("ROUTE");
ROUTE3039.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE3039.fromField = "value_changed";
ROUTE3039.toNode = "hanim_l_metatarsal";
ROUTE3039.toField = "set_rotation";
children[667] = ROUTE3039;

ROUTE ROUTE3040 = createNode("ROUTE");
ROUTE3040.fromNode = "Kick_sacroiliac_YawInterpolator";
ROUTE3040.fromField = "value_changed";
ROUTE3040.toNode = "hanim_sacroiliac";
ROUTE3040.toField = "set_rotation";
children[668] = ROUTE3040;

ROUTE ROUTE3041 = createNode("ROUTE");
ROUTE3041.fromNode = "Kick_vl5_YawInterpolator";
ROUTE3041.fromField = "value_changed";
ROUTE3041.toNode = "hanim_vl5";
ROUTE3041.toField = "set_rotation";
children[669] = ROUTE3041;

ROUTE ROUTE3042 = createNode("ROUTE");
ROUTE3042.fromNode = "Kick_vc6_YawInterpolator";
ROUTE3042.fromField = "value_changed";
ROUTE3042.toNode = "hanim_vc6";
ROUTE3042.toField = "set_rotation";
children[670] = ROUTE3042;

ROUTE ROUTE3043 = createNode("ROUTE");
ROUTE3043.fromNode = "Kick_upper_body_RotationInterpolator";
ROUTE3043.fromField = "value_changed";
ROUTE3043.toNode = "hanim_vl1";
ROUTE3043.toField = "set_rotation";
children[671] = ROUTE3043;

ROUTE ROUTE3044 = createNode("ROUTE");
ROUTE3044.fromNode = "Kick_lower_body_RotationInterpolator";
ROUTE3044.fromField = "value_changed";
ROUTE3044.toNode = "hanim_sacroiliac";
ROUTE3044.toField = "set_rotation";
children[672] = ROUTE3044;

ROUTE ROUTE3045 = createNode("ROUTE");
ROUTE3045.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE3045.fromField = "value_changed";
ROUTE3045.toNode = "hanim_humanoid_root";
ROUTE3045.toField = "set_rotation";
children[673] = ROUTE3045;

ROUTE ROUTE3046 = createNode("ROUTE");
ROUTE3046.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE3046.fromField = "value_changed";
ROUTE3046.toNode = "hanim_humanoid_root";
ROUTE3046.toField = "set_translation";
children[674] = ROUTE3046;

ROUTE ROUTE3047 = createNode("ROUTE");
ROUTE3047.fromNode = "Kick_neck_RotationInterpolator";
ROUTE3047.fromField = "value_changed";
ROUTE3047.toNode = "hanim_vc4";
ROUTE3047.toField = "set_rotation";
children[675] = ROUTE3047;

ROUTE ROUTE3048 = createNode("ROUTE");
ROUTE3048.fromNode = "HudProximitySensor";
ROUTE3048.fromField = "position_changed";
ROUTE3048.toNode = "HudXform";
ROUTE3048.toField = "set_translation";
children[676] = ROUTE3048;

ROUTE ROUTE3049 = createNode("ROUTE");
ROUTE3049.fromNode = "HudProximitySensor";
ROUTE3049.fromField = "orientation_changed";
ROUTE3049.toNode = "HudXform";
ROUTE3049.toField = "set_rotation";
children[677] = ROUTE3049;

ROUTE ROUTE3050 = createNode("ROUTE");
ROUTE3050.fromNode = "Stand_Touch";
ROUTE3050.fromField = "touchTime";
ROUTE3050.toNode = "PitchTimer";
ROUTE3050.toField = "set_stopTime";
children[678] = ROUTE3050;

ROUTE ROUTE3051 = createNode("ROUTE");
ROUTE3051.fromNode = "Stand_Touch";
ROUTE3051.fromField = "touchTime";
ROUTE3051.toNode = "YawTimer";
ROUTE3051.toField = "set_stopTime";
children[679] = ROUTE3051;

ROUTE ROUTE3052 = createNode("ROUTE");
ROUTE3052.fromNode = "Stand_Touch";
ROUTE3052.fromField = "touchTime";
ROUTE3052.toNode = "RollTimer";
ROUTE3052.toField = "set_stopTime";
children[680] = ROUTE3052;

ROUTE ROUTE3053 = createNode("ROUTE");
ROUTE3053.fromNode = "Stand_Touch";
ROUTE3053.fromField = "touchTime";
ROUTE3053.toNode = "WalkTimer";
ROUTE3053.toField = "set_stopTime";
children[681] = ROUTE3053;

ROUTE ROUTE3054 = createNode("ROUTE");
ROUTE3054.fromNode = "Stand_Touch";
ROUTE3054.fromField = "touchTime";
ROUTE3054.toNode = "RunTimer";
ROUTE3054.toField = "set_stopTime";
children[682] = ROUTE3054;

ROUTE ROUTE3055 = createNode("ROUTE");
ROUTE3055.fromNode = "Stand_Touch";
ROUTE3055.fromField = "touchTime";
ROUTE3055.toNode = "JumpTimer";
ROUTE3055.toField = "set_stopTime";
children[683] = ROUTE3055;

ROUTE ROUTE3056 = createNode("ROUTE");
ROUTE3056.fromNode = "Stand_Touch";
ROUTE3056.fromField = "touchTime";
ROUTE3056.toNode = "KickTimer";
ROUTE3056.toField = "set_stopTime";
children[684] = ROUTE3056;

ROUTE ROUTE3057 = createNode("ROUTE");
ROUTE3057.fromNode = "Stand_Touch";
ROUTE3057.fromField = "touchTime";
ROUTE3057.toNode = "StopTimer";
ROUTE3057.toField = "set_stopTime";
children[685] = ROUTE3057;

ROUTE ROUTE3058 = createNode("ROUTE");
ROUTE3058.fromNode = "Stand_Touch";
ROUTE3058.fromField = "touchTime";
ROUTE3058.toNode = "StandTimer";
ROUTE3058.toField = "set_startTime";
children[686] = ROUTE3058;

ROUTE ROUTE3059 = createNode("ROUTE");
ROUTE3059.fromNode = "Pitch_Touch";
ROUTE3059.fromField = "touchTime";
ROUTE3059.toNode = "StandTimer";
ROUTE3059.toField = "set_stopTime";
children[687] = ROUTE3059;

ROUTE ROUTE3060 = createNode("ROUTE");
ROUTE3060.fromNode = "Pitch_Touch";
ROUTE3060.fromField = "touchTime";
ROUTE3060.toNode = "YawTimer";
ROUTE3060.toField = "set_stopTime";
children[688] = ROUTE3060;

ROUTE ROUTE3061 = createNode("ROUTE");
ROUTE3061.fromNode = "Pitch_Touch";
ROUTE3061.fromField = "touchTime";
ROUTE3061.toNode = "RollTimer";
ROUTE3061.toField = "set_stopTime";
children[689] = ROUTE3061;

ROUTE ROUTE3062 = createNode("ROUTE");
ROUTE3062.fromNode = "Pitch_Touch";
ROUTE3062.fromField = "touchTime";
ROUTE3062.toNode = "WalkTimer";
ROUTE3062.toField = "set_stopTime";
children[690] = ROUTE3062;

ROUTE ROUTE3063 = createNode("ROUTE");
ROUTE3063.fromNode = "Pitch_Touch";
ROUTE3063.fromField = "touchTime";
ROUTE3063.toNode = "RunTimer";
ROUTE3063.toField = "set_stopTime";
children[691] = ROUTE3063;

ROUTE ROUTE3064 = createNode("ROUTE");
ROUTE3064.fromNode = "Pitch_Touch";
ROUTE3064.fromField = "touchTime";
ROUTE3064.toNode = "JumpTimer";
ROUTE3064.toField = "set_stopTime";
children[692] = ROUTE3064;

ROUTE ROUTE3065 = createNode("ROUTE");
ROUTE3065.fromNode = "Pitch_Touch";
ROUTE3065.fromField = "touchTime";
ROUTE3065.toNode = "KickTimer";
ROUTE3065.toField = "set_stopTime";
children[693] = ROUTE3065;

ROUTE ROUTE3066 = createNode("ROUTE");
ROUTE3066.fromNode = "Pitch_Touch";
ROUTE3066.fromField = "touchTime";
ROUTE3066.toNode = "StopTimer";
ROUTE3066.toField = "set_stopTime";
children[694] = ROUTE3066;

ROUTE ROUTE3067 = createNode("ROUTE");
ROUTE3067.fromNode = "Pitch_Touch";
ROUTE3067.fromField = "touchTime";
ROUTE3067.toNode = "PitchTimer";
ROUTE3067.toField = "set_startTime";
children[695] = ROUTE3067;

ROUTE ROUTE3068 = createNode("ROUTE");
ROUTE3068.fromNode = "Yaw_Touch";
ROUTE3068.fromField = "touchTime";
ROUTE3068.toNode = "StandTimer";
ROUTE3068.toField = "set_stopTime";
children[696] = ROUTE3068;

ROUTE ROUTE3069 = createNode("ROUTE");
ROUTE3069.fromNode = "Yaw_Touch";
ROUTE3069.fromField = "touchTime";
ROUTE3069.toNode = "PitchTimer";
ROUTE3069.toField = "set_stopTime";
children[697] = ROUTE3069;

ROUTE ROUTE3070 = createNode("ROUTE");
ROUTE3070.fromNode = "Yaw_Touch";
ROUTE3070.fromField = "touchTime";
ROUTE3070.toNode = "RollTimer";
ROUTE3070.toField = "set_stopTime";
children[698] = ROUTE3070;

ROUTE ROUTE3071 = createNode("ROUTE");
ROUTE3071.fromNode = "Yaw_Touch";
ROUTE3071.fromField = "touchTime";
ROUTE3071.toNode = "WalkTimer";
ROUTE3071.toField = "set_stopTime";
children[699] = ROUTE3071;

ROUTE ROUTE3072 = createNode("ROUTE");
ROUTE3072.fromNode = "Yaw_Touch";
ROUTE3072.fromField = "touchTime";
ROUTE3072.toNode = "RunTimer";
ROUTE3072.toField = "set_stopTime";
children[700] = ROUTE3072;

ROUTE ROUTE3073 = createNode("ROUTE");
ROUTE3073.fromNode = "Yaw_Touch";
ROUTE3073.fromField = "touchTime";
ROUTE3073.toNode = "JumpTimer";
ROUTE3073.toField = "set_stopTime";
children[701] = ROUTE3073;

ROUTE ROUTE3074 = createNode("ROUTE");
ROUTE3074.fromNode = "Yaw_Touch";
ROUTE3074.fromField = "touchTime";
ROUTE3074.toNode = "KickTimer";
ROUTE3074.toField = "set_stopTime";
children[702] = ROUTE3074;

ROUTE ROUTE3075 = createNode("ROUTE");
ROUTE3075.fromNode = "Yaw_Touch";
ROUTE3075.fromField = "touchTime";
ROUTE3075.toNode = "StopTimer";
ROUTE3075.toField = "set_stopTime";
children[703] = ROUTE3075;

ROUTE ROUTE3076 = createNode("ROUTE");
ROUTE3076.fromNode = "Yaw_Touch";
ROUTE3076.fromField = "touchTime";
ROUTE3076.toNode = "YawTimer";
ROUTE3076.toField = "set_startTime";
children[704] = ROUTE3076;

ROUTE ROUTE3077 = createNode("ROUTE");
ROUTE3077.fromNode = "Walk_Touch";
ROUTE3077.fromField = "touchTime";
ROUTE3077.toNode = "StandTimer";
ROUTE3077.toField = "set_stopTime";
children[705] = ROUTE3077;

ROUTE ROUTE3078 = createNode("ROUTE");
ROUTE3078.fromNode = "Walk_Touch";
ROUTE3078.fromField = "touchTime";
ROUTE3078.toNode = "PitchTimer";
ROUTE3078.toField = "set_stopTime";
children[706] = ROUTE3078;

ROUTE ROUTE3079 = createNode("ROUTE");
ROUTE3079.fromNode = "Walk_Touch";
ROUTE3079.fromField = "touchTime";
ROUTE3079.toNode = "YawTimer";
ROUTE3079.toField = "set_stopTime";
children[707] = ROUTE3079;

ROUTE ROUTE3080 = createNode("ROUTE");
ROUTE3080.fromNode = "Walk_Touch";
ROUTE3080.fromField = "touchTime";
ROUTE3080.toNode = "RollTimer";
ROUTE3080.toField = "set_stopTime";
children[708] = ROUTE3080;

ROUTE ROUTE3081 = createNode("ROUTE");
ROUTE3081.fromNode = "Walk_Touch";
ROUTE3081.fromField = "touchTime";
ROUTE3081.toNode = "RunTimer";
ROUTE3081.toField = "set_stopTime";
children[709] = ROUTE3081;

ROUTE ROUTE3082 = createNode("ROUTE");
ROUTE3082.fromNode = "Walk_Touch";
ROUTE3082.fromField = "touchTime";
ROUTE3082.toNode = "JumpTimer";
ROUTE3082.toField = "set_stopTime";
children[710] = ROUTE3082;

ROUTE ROUTE3083 = createNode("ROUTE");
ROUTE3083.fromNode = "Walk_Touch";
ROUTE3083.fromField = "touchTime";
ROUTE3083.toNode = "KickTimer";
ROUTE3083.toField = "set_stopTime";
children[711] = ROUTE3083;

ROUTE ROUTE3084 = createNode("ROUTE");
ROUTE3084.fromNode = "Walk_Touch";
ROUTE3084.fromField = "touchTime";
ROUTE3084.toNode = "StopTimer";
ROUTE3084.toField = "set_stopTime";
children[712] = ROUTE3084;

ROUTE ROUTE3085 = createNode("ROUTE");
ROUTE3085.fromNode = "Walk_Touch";
ROUTE3085.fromField = "touchTime";
ROUTE3085.toNode = "WalkTimer";
ROUTE3085.toField = "set_startTime";
children[713] = ROUTE3085;

ROUTE ROUTE3086 = createNode("ROUTE");
ROUTE3086.fromNode = "Roll_Touch";
ROUTE3086.fromField = "touchTime";
ROUTE3086.toNode = "StandTimer";
ROUTE3086.toField = "set_stopTime";
children[714] = ROUTE3086;

ROUTE ROUTE3087 = createNode("ROUTE");
ROUTE3087.fromNode = "Roll_Touch";
ROUTE3087.fromField = "touchTime";
ROUTE3087.toNode = "PitchTimer";
ROUTE3087.toField = "set_stopTime";
children[715] = ROUTE3087;

ROUTE ROUTE3088 = createNode("ROUTE");
ROUTE3088.fromNode = "Roll_Touch";
ROUTE3088.fromField = "touchTime";
ROUTE3088.toNode = "YawTimer";
ROUTE3088.toField = "set_stopTime";
children[716] = ROUTE3088;

ROUTE ROUTE3089 = createNode("ROUTE");
ROUTE3089.fromNode = "Roll_Touch";
ROUTE3089.fromField = "touchTime";
ROUTE3089.toNode = "WalkTimer";
ROUTE3089.toField = "set_stopTime";
children[717] = ROUTE3089;

ROUTE ROUTE3090 = createNode("ROUTE");
ROUTE3090.fromNode = "Roll_Touch";
ROUTE3090.fromField = "touchTime";
ROUTE3090.toNode = "RunTimer";
ROUTE3090.toField = "set_stopTime";
children[718] = ROUTE3090;

ROUTE ROUTE3091 = createNode("ROUTE");
ROUTE3091.fromNode = "Roll_Touch";
ROUTE3091.fromField = "touchTime";
ROUTE3091.toNode = "JumpTimer";
ROUTE3091.toField = "set_stopTime";
children[719] = ROUTE3091;

ROUTE ROUTE3092 = createNode("ROUTE");
ROUTE3092.fromNode = "Roll_Touch";
ROUTE3092.fromField = "touchTime";
ROUTE3092.toNode = "KickTimer";
ROUTE3092.toField = "set_stopTime";
children[720] = ROUTE3092;

ROUTE ROUTE3093 = createNode("ROUTE");
ROUTE3093.fromNode = "Roll_Touch";
ROUTE3093.fromField = "touchTime";
ROUTE3093.toNode = "StopTimer";
ROUTE3093.toField = "set_stopTime";
children[721] = ROUTE3093;

ROUTE ROUTE3094 = createNode("ROUTE");
ROUTE3094.fromNode = "Roll_Touch";
ROUTE3094.fromField = "touchTime";
ROUTE3094.toNode = "RollTimer";
ROUTE3094.toField = "set_startTime";
children[722] = ROUTE3094;

ROUTE ROUTE3095 = createNode("ROUTE");
ROUTE3095.fromNode = "Run_Touch";
ROUTE3095.fromField = "touchTime";
ROUTE3095.toNode = "StandTimer";
ROUTE3095.toField = "set_stopTime";
children[723] = ROUTE3095;

ROUTE ROUTE3096 = createNode("ROUTE");
ROUTE3096.fromNode = "Run_Touch";
ROUTE3096.fromField = "touchTime";
ROUTE3096.toNode = "PitchTimer";
ROUTE3096.toField = "set_stopTime";
children[724] = ROUTE3096;

ROUTE ROUTE3097 = createNode("ROUTE");
ROUTE3097.fromNode = "Run_Touch";
ROUTE3097.fromField = "touchTime";
ROUTE3097.toNode = "YawTimer";
ROUTE3097.toField = "set_stopTime";
children[725] = ROUTE3097;

ROUTE ROUTE3098 = createNode("ROUTE");
ROUTE3098.fromNode = "Run_Touch";
ROUTE3098.fromField = "touchTime";
ROUTE3098.toNode = "RollTimer";
ROUTE3098.toField = "set_stopTime";
children[726] = ROUTE3098;

ROUTE ROUTE3099 = createNode("ROUTE");
ROUTE3099.fromNode = "Run_Touch";
ROUTE3099.fromField = "touchTime";
ROUTE3099.toNode = "WalkTimer";
ROUTE3099.toField = "set_stopTime";
children[727] = ROUTE3099;

ROUTE ROUTE3100 = createNode("ROUTE");
ROUTE3100.fromNode = "Run_Touch";
ROUTE3100.fromField = "touchTime";
ROUTE3100.toNode = "JumpTimer";
ROUTE3100.toField = "set_stopTime";
children[728] = ROUTE3100;

ROUTE ROUTE3101 = createNode("ROUTE");
ROUTE3101.fromNode = "Run_Touch";
ROUTE3101.fromField = "touchTime";
ROUTE3101.toNode = "KickTimer";
ROUTE3101.toField = "set_stopTime";
children[729] = ROUTE3101;

ROUTE ROUTE3102 = createNode("ROUTE");
ROUTE3102.fromNode = "Run_Touch";
ROUTE3102.fromField = "touchTime";
ROUTE3102.toNode = "StopTimer";
ROUTE3102.toField = "set_stopTime";
children[730] = ROUTE3102;

ROUTE ROUTE3103 = createNode("ROUTE");
ROUTE3103.fromNode = "Run_Touch";
ROUTE3103.fromField = "touchTime";
ROUTE3103.toNode = "RunTimer";
ROUTE3103.toField = "set_startTime";
children[731] = ROUTE3103;

ROUTE ROUTE3104 = createNode("ROUTE");
ROUTE3104.fromNode = "Jump_Touch";
ROUTE3104.fromField = "touchTime";
ROUTE3104.toNode = "StandTimer";
ROUTE3104.toField = "set_stopTime";
children[732] = ROUTE3104;

ROUTE ROUTE3105 = createNode("ROUTE");
ROUTE3105.fromNode = "Jump_Touch";
ROUTE3105.fromField = "touchTime";
ROUTE3105.toNode = "PitchTimer";
ROUTE3105.toField = "set_stopTime";
children[733] = ROUTE3105;

ROUTE ROUTE3106 = createNode("ROUTE");
ROUTE3106.fromNode = "Jump_Touch";
ROUTE3106.fromField = "touchTime";
ROUTE3106.toNode = "YawTimer";
ROUTE3106.toField = "set_stopTime";
children[734] = ROUTE3106;

ROUTE ROUTE3107 = createNode("ROUTE");
ROUTE3107.fromNode = "Jump_Touch";
ROUTE3107.fromField = "touchTime";
ROUTE3107.toNode = "RollTimer";
ROUTE3107.toField = "set_stopTime";
children[735] = ROUTE3107;

ROUTE ROUTE3108 = createNode("ROUTE");
ROUTE3108.fromNode = "Jump_Touch";
ROUTE3108.fromField = "touchTime";
ROUTE3108.toNode = "WalkTimer";
ROUTE3108.toField = "set_stopTime";
children[736] = ROUTE3108;

ROUTE ROUTE3109 = createNode("ROUTE");
ROUTE3109.fromNode = "Jump_Touch";
ROUTE3109.fromField = "touchTime";
ROUTE3109.toNode = "RunTimer";
ROUTE3109.toField = "set_stopTime";
children[737] = ROUTE3109;

ROUTE ROUTE3110 = createNode("ROUTE");
ROUTE3110.fromNode = "Jump_Touch";
ROUTE3110.fromField = "touchTime";
ROUTE3110.toNode = "KickTimer";
ROUTE3110.toField = "set_stopTime";
children[738] = ROUTE3110;

ROUTE ROUTE3111 = createNode("ROUTE");
ROUTE3111.fromNode = "Jump_Touch";
ROUTE3111.fromField = "touchTime";
ROUTE3111.toNode = "StopTimer";
ROUTE3111.toField = "set_stopTime";
children[739] = ROUTE3111;

ROUTE ROUTE3112 = createNode("ROUTE");
ROUTE3112.fromNode = "Jump_Touch";
ROUTE3112.fromField = "touchTime";
ROUTE3112.toNode = "JumpTimer";
ROUTE3112.toField = "set_startTime";
children[740] = ROUTE3112;

ROUTE ROUTE3113 = createNode("ROUTE");
ROUTE3113.fromNode = "Kick_Touch";
ROUTE3113.fromField = "touchTime";
ROUTE3113.toNode = "StandTimer";
ROUTE3113.toField = "set_stopTime";
children[741] = ROUTE3113;

ROUTE ROUTE3114 = createNode("ROUTE");
ROUTE3114.fromNode = "Kick_Touch";
ROUTE3114.fromField = "touchTime";
ROUTE3114.toNode = "PitchTimer";
ROUTE3114.toField = "set_stopTime";
children[742] = ROUTE3114;

ROUTE ROUTE3115 = createNode("ROUTE");
ROUTE3115.fromNode = "Kick_Touch";
ROUTE3115.fromField = "touchTime";
ROUTE3115.toNode = "YawTimer";
ROUTE3115.toField = "set_stopTime";
children[743] = ROUTE3115;

ROUTE ROUTE3116 = createNode("ROUTE");
ROUTE3116.fromNode = "Kick_Touch";
ROUTE3116.fromField = "touchTime";
ROUTE3116.toNode = "RollTimer";
ROUTE3116.toField = "set_stopTime";
children[744] = ROUTE3116;

ROUTE ROUTE3117 = createNode("ROUTE");
ROUTE3117.fromNode = "Kick_Touch";
ROUTE3117.fromField = "touchTime";
ROUTE3117.toNode = "WalkTimer";
ROUTE3117.toField = "set_stopTime";
children[745] = ROUTE3117;

ROUTE ROUTE3118 = createNode("ROUTE");
ROUTE3118.fromNode = "Kick_Touch";
ROUTE3118.fromField = "touchTime";
ROUTE3118.toNode = "RunTimer";
ROUTE3118.toField = "set_stopTime";
children[746] = ROUTE3118;

ROUTE ROUTE3119 = createNode("ROUTE");
ROUTE3119.fromNode = "Kick_Touch";
ROUTE3119.fromField = "touchTime";
ROUTE3119.toNode = "JumpTimer";
ROUTE3119.toField = "set_stopTime";
children[747] = ROUTE3119;

ROUTE ROUTE3120 = createNode("ROUTE");
ROUTE3120.fromNode = "Kick_Touch";
ROUTE3120.fromField = "touchTime";
ROUTE3120.toNode = "StopTimer";
ROUTE3120.toField = "set_stopTime";
children[748] = ROUTE3120;

ROUTE ROUTE3121 = createNode("ROUTE");
ROUTE3121.fromNode = "Kick_Touch";
ROUTE3121.fromField = "touchTime";
ROUTE3121.toNode = "KickTimer";
ROUTE3121.toField = "set_startTime";
children[749] = ROUTE3121;

ROUTE ROUTE3122 = createNode("ROUTE");
ROUTE3122.fromNode = "Stop_Touch";
ROUTE3122.fromField = "touchTime";
ROUTE3122.toNode = "StandTimer";
ROUTE3122.toField = "set_stopTime";
children[750] = ROUTE3122;

ROUTE ROUTE3123 = createNode("ROUTE");
ROUTE3123.fromNode = "Stop_Touch";
ROUTE3123.fromField = "touchTime";
ROUTE3123.toNode = "PitchTimer";
ROUTE3123.toField = "set_stopTime";
children[751] = ROUTE3123;

ROUTE ROUTE3124 = createNode("ROUTE");
ROUTE3124.fromNode = "Stop_Touch";
ROUTE3124.fromField = "touchTime";
ROUTE3124.toNode = "YawTimer";
ROUTE3124.toField = "set_stopTime";
children[752] = ROUTE3124;

ROUTE ROUTE3125 = createNode("ROUTE");
ROUTE3125.fromNode = "Stop_Touch";
ROUTE3125.fromField = "touchTime";
ROUTE3125.toNode = "RollTimer";
ROUTE3125.toField = "set_stopTime";
children[753] = ROUTE3125;

ROUTE ROUTE3126 = createNode("ROUTE");
ROUTE3126.fromNode = "Stop_Touch";
ROUTE3126.fromField = "touchTime";
ROUTE3126.toNode = "WalkTimer";
ROUTE3126.toField = "set_stopTime";
children[754] = ROUTE3126;

ROUTE ROUTE3127 = createNode("ROUTE");
ROUTE3127.fromNode = "Stop_Touch";
ROUTE3127.fromField = "touchTime";
ROUTE3127.toNode = "RunTimer";
ROUTE3127.toField = "set_stopTime";
children[755] = ROUTE3127;

ROUTE ROUTE3128 = createNode("ROUTE");
ROUTE3128.fromNode = "Stop_Touch";
ROUTE3128.fromField = "touchTime";
ROUTE3128.toNode = "JumpTimer";
ROUTE3128.toField = "set_stopTime";
children[756] = ROUTE3128;

ROUTE ROUTE3129 = createNode("ROUTE");
ROUTE3129.fromNode = "Stop_Touch";
ROUTE3129.fromField = "touchTime";
ROUTE3129.toNode = "KickTimer";
ROUTE3129.toField = "set_stopTime";
children[757] = ROUTE3129;

ROUTE ROUTE3130 = createNode("ROUTE");
ROUTE3130.fromNode = "Stop_Touch";
ROUTE3130.fromField = "touchTime";
ROUTE3130.toNode = "StopTimer";
ROUTE3130.toField = "set_startTime";
children[758] = ROUTE3130;

}
