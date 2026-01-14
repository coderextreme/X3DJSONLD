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
meta6.name = "reference";
meta6.content = "HAnimSpecificationLOA3Invisible.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "HAnimSpecificationLOA3Animation.x3d";
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
meta15.name = "reference";
meta15.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "created";
meta16.content = "24 April 2013";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "modified";
meta17.content = "Tue, 09 Sep 2025 19:39:08 GMT";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "error";
meta18.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "creator";
meta19.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "HAnimSpecificationLOA3Illustrated.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "HAnimSpecificationLOA3IllustratedLeftSide.png";
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
meta25.name = "TODO";
meta25.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "TODO";
meta26.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "warning";
meta27.content = "BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "translator";
meta28.content = "Don Brutzman and Joe Williams";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "generator";
meta29.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "generator";
meta30.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[28] = meta30;

head = head1;

Background Background32 = createNode("Background");
Background32.skyColor = new MFColor(new float[0.3,0.3,0.3]);
children = new MFNode();

children[0] = Background32;

NavigationInfo NavigationInfo33 = createNode("NavigationInfo");
children[1] = NavigationInfo33;

Group Group34 = createNode("Group");
Group34.DEF = "Original_WorldInfo";
WorldInfo WorldInfo35 = createNode("WorldInfo");
WorldInfo35.title = "HANIM 200x Default Joint Centers, LOA3";
WorldInfo35.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group34.children = new MFNode();

Group34.children[0] = WorldInfo35;

children[2] = Group34;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.description = "Humanoid LOA 3 Front";
Viewpoint36.position = new SFVec3f(new float[0,0.4,4]);
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[3] = Viewpoint36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.description = "Humanoid LOA 3 Front Close";
Viewpoint37.position = new SFVec3f(new float[0,0.8,2]);
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[4] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.description = "Humanoid LOA 3 Front Closer";
Viewpoint38.position = new SFVec3f(new float[0,1.2,1]);
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[5] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.description = "Humanoid LOA 3 Front Face";
Viewpoint39.position = new SFVec3f(new float[0,1.63,1]);
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
children[6] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.description = "Humanoid LOA 3 Right Side";
Viewpoint40.position = new SFVec3f(new float[2.6,0.8,0]);
Viewpoint40.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[7] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.description = "Humanoid LOA 3 Right Side Close";
Viewpoint41.position = new SFVec3f(new float[1,0.8,0.5]);
Viewpoint41.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[8] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.description = "Humanoid LOA 3 Left Side Close";
Viewpoint42.position = new SFVec3f(new float[-1,0.8,0.5]);
Viewpoint42.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[9] = Viewpoint42;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.description = "Humanoid LOA 3 Left Side";
Viewpoint43.position = new SFVec3f(new float[-2.6,0.8,0]);
Viewpoint43.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[10] = Viewpoint43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.description = "Humanoid LOA 3 Top";
Viewpoint44.position = new SFVec3f(new float[0,3.5,0]);
Viewpoint44.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint44.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[11] = Viewpoint44;

HAnimHumanoid HAnimHumanoid45 = createNode("HAnimHumanoid");
HAnimHumanoid45.DEF = "hanim_humanoid";
HAnimHumanoid45.name = "humanoid";
HAnimHumanoid45.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid45.version = "1.0";
HAnimJoint HAnimJoint46 = createNode("HAnimJoint");
HAnimJoint46.DEF = "hanim_humanoid_root";
HAnimJoint46.name = "humanoid_root";
HAnimJoint46.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimSegment HAnimSegment47 = createNode("HAnimSegment");
HAnimSegment47.DEF = "hanim_sacrum";
HAnimSegment47.name = "sacrum";
TouchSensor TouchSensor48 = createNode("TouchSensor");
TouchSensor48.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = TouchSensor48;

Transform Transform49 = createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,0.824,0.0277]);
Shape Shape50 = createNode("Shape");
Shape50.DEF = "HAnimJointShape";
Appearance Appearance51 = createNode("Appearance");
Appearance51.DEF = "HAnimJointAppearance";
Material Material52 = createNode("Material");
Material52.diffuseColor = new SFColor(new float[1,0.5,0]);
Material52.transparency = 0.5;
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

Sphere Sphere53 = createNode("Sphere");
Sphere53.radius = 0.006;
Shape50.geometry = Sphere53;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

HAnimSegment47.children[1] = Transform49;

Shape Shape54 = createNode("Shape");
LineSet LineSet55 = createNode("LineSet");
LineSet55.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA56 = createNode("ColorRGBA");
ColorRGBA56.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA56.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet55.color = ColorRGBA56;

Coordinate Coordinate57 = createNode("Coordinate");
Coordinate57.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet55.coord = Coordinate57;

Shape54.geometry = LineSet55;

HAnimSegment47.children[2] = Shape54;

Shape Shape58 = createNode("Shape");
LineSet LineSet59 = createNode("LineSet");
LineSet59.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA60 = createNode("ColorRGBA");
ColorRGBA60.USE = "HAnimSegmentLineColorRGBA";
LineSet59.color = ColorRGBA60;

Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet59.coord = Coordinate61;

Shape58.geometry = LineSet59;

HAnimSegment47.children[3] = Shape58;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

HAnimJoint HAnimJoint62 = createNode("HAnimJoint");
HAnimJoint62.DEF = "hanim_sacroiliac";
HAnimJoint62.name = "sacroiliac";
HAnimJoint62.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment63 = createNode("HAnimSegment");
HAnimSegment63.DEF = "hanim_pelvis";
HAnimSegment63.name = "pelvis";
TouchSensor TouchSensor64 = createNode("TouchSensor");
TouchSensor64.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment63.children = new MFNode();

HAnimSegment63.children[0] = TouchSensor64;

Transform Transform65 = createNode("Transform");
Transform65.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape66 = createNode("Shape");
Shape66.USE = "HAnimJointShape";
Transform65.child = new undefined();

Transform65.child[0] = Shape66;

HAnimSegment63.children[1] = Transform65;

Shape Shape67 = createNode("Shape");
LineSet LineSet68 = createNode("LineSet");
LineSet68.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA69 = createNode("ColorRGBA");
ColorRGBA69.USE = "HAnimSegmentLineColorRGBA";
LineSet68.color = ColorRGBA69;

Coordinate Coordinate70 = createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet68.coord = Coordinate70;

Shape67.geometry = LineSet68;

HAnimSegment63.children[2] = Shape67;

Shape Shape71 = createNode("Shape");
LineSet LineSet72 = createNode("LineSet");
LineSet72.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA73 = createNode("ColorRGBA");
ColorRGBA73.USE = "HAnimSegmentLineColorRGBA";
LineSet72.color = ColorRGBA73;

Coordinate Coordinate74 = createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet72.coord = Coordinate74;

Shape71.geometry = LineSet72;

HAnimSegment63.children[3] = Shape71;

Shape Shape75 = createNode("Shape");
LineSet LineSet76 = createNode("LineSet");
LineSet76.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA77 = createNode("ColorRGBA");
ColorRGBA77.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA77.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet76.color = ColorRGBA77;

Coordinate Coordinate78 = createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet76.coord = Coordinate78;

Shape75.geometry = LineSet76;

HAnimSegment63.children[4] = Shape75;

Shape Shape79 = createNode("Shape");
LineSet LineSet80 = createNode("LineSet");
LineSet80.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA81 = createNode("ColorRGBA");
ColorRGBA81.USE = "HAnimSiteLineColorRGBA";
LineSet80.color = ColorRGBA81;

Coordinate Coordinate82 = createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet80.coord = Coordinate82;

Shape79.geometry = LineSet80;

HAnimSegment63.children[5] = Shape79;

Shape Shape83 = createNode("Shape");
LineSet LineSet84 = createNode("LineSet");
LineSet84.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA85 = createNode("ColorRGBA");
ColorRGBA85.USE = "HAnimSiteLineColorRGBA";
LineSet84.color = ColorRGBA85;

Coordinate Coordinate86 = createNode("Coordinate");
Coordinate86.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet84.coord = Coordinate86;

Shape83.geometry = LineSet84;

HAnimSegment63.children[6] = Shape83;

Shape Shape87 = createNode("Shape");
LineSet LineSet88 = createNode("LineSet");
LineSet88.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA89 = createNode("ColorRGBA");
ColorRGBA89.USE = "HAnimSiteLineColorRGBA";
LineSet88.color = ColorRGBA89;

Coordinate Coordinate90 = createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet88.coord = Coordinate90;

Shape87.geometry = LineSet88;

HAnimSegment63.children[7] = Shape87;

Shape Shape91 = createNode("Shape");
LineSet LineSet92 = createNode("LineSet");
LineSet92.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA93 = createNode("ColorRGBA");
ColorRGBA93.USE = "HAnimSiteLineColorRGBA";
LineSet92.color = ColorRGBA93;

Coordinate Coordinate94 = createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet92.coord = Coordinate94;

Shape91.geometry = LineSet92;

HAnimSegment63.children[8] = Shape91;

Shape Shape95 = createNode("Shape");
LineSet LineSet96 = createNode("LineSet");
LineSet96.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA97 = createNode("ColorRGBA");
ColorRGBA97.USE = "HAnimSiteLineColorRGBA";
LineSet96.color = ColorRGBA97;

Coordinate Coordinate98 = createNode("Coordinate");
Coordinate98.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet96.coord = Coordinate98;

Shape95.geometry = LineSet96;

HAnimSegment63.children[9] = Shape95;

Shape Shape99 = createNode("Shape");
LineSet LineSet100 = createNode("LineSet");
LineSet100.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA101 = createNode("ColorRGBA");
ColorRGBA101.USE = "HAnimSiteLineColorRGBA";
LineSet100.color = ColorRGBA101;

Coordinate Coordinate102 = createNode("Coordinate");
Coordinate102.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet100.coord = Coordinate102;

Shape99.geometry = LineSet100;

HAnimSegment63.children[10] = Shape99;

Shape Shape103 = createNode("Shape");
LineSet LineSet104 = createNode("LineSet");
LineSet104.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA105 = createNode("ColorRGBA");
ColorRGBA105.USE = "HAnimSiteLineColorRGBA";
LineSet104.color = ColorRGBA105;

Coordinate Coordinate106 = createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet104.coord = Coordinate106;

Shape103.geometry = LineSet104;

HAnimSegment63.children[11] = Shape103;

Shape Shape107 = createNode("Shape");
LineSet LineSet108 = createNode("LineSet");
LineSet108.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA109 = createNode("ColorRGBA");
ColorRGBA109.USE = "HAnimSiteLineColorRGBA";
LineSet108.color = ColorRGBA109;

Coordinate Coordinate110 = createNode("Coordinate");
Coordinate110.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet108.coord = Coordinate110;

Shape107.geometry = LineSet108;

HAnimSegment63.children[12] = Shape107;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.DEF = "hanim_r_iliocristale_pt";
HAnimSite111.name = "r_iliocristale_pt";
HAnimSite111.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor112 = createNode("TouchSensor");
TouchSensor112.description = "HAnimSite r_iliocristale";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = TouchSensor112;

Shape Shape113 = createNode("Shape");
Shape113.DEF = "HAnimSiteShape";
Appearance Appearance114 = createNode("Appearance");
Material Material115 = createNode("Material");
Material115.diffuseColor = new SFColor(new float[1,0,0]);
Appearance114.material = Material115;

Shape113.appearance = Appearance114;

IndexedFaceSet IndexedFaceSet116 = createNode("IndexedFaceSet");
IndexedFaceSet116.DEF = "DiamondIFS";
IndexedFaceSet116.solid = False;
IndexedFaceSet116.creaseAngle = 0.5;
IndexedFaceSet116.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate117 = createNode("Coordinate");
Coordinate117.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet116.coord = Coordinate117;

Shape113.geometry = IndexedFaceSet116;

HAnimSite111.children[1] = Shape113;

HAnimSegment63.children[13] = HAnimSite111;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.DEF = "hanim_r_trochanterion_pt";
HAnimSite118.name = "r_trochanterion_pt";
HAnimSite118.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor119 = createNode("TouchSensor");
TouchSensor119.description = "HAnimSite r_trochanterion";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = TouchSensor119;

Shape Shape120 = createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118.children[1] = Shape120;

HAnimSegment63.children[14] = HAnimSite118;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.DEF = "hanim_l_iliocristale_pt";
HAnimSite121.name = "l_iliocristale_pt";
HAnimSite121.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor122 = createNode("TouchSensor");
TouchSensor122.description = "HAnimSite l_iliocristale";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = TouchSensor122;

Shape Shape123 = createNode("Shape");
Shape123.USE = "HAnimSiteShape";
HAnimSite121.children[1] = Shape123;

HAnimSegment63.children[15] = HAnimSite121;

HAnimSite HAnimSite124 = createNode("HAnimSite");
HAnimSite124.DEF = "hanim_l_trochanterion_pt";
HAnimSite124.name = "l_trochanterion_pt";
HAnimSite124.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor125 = createNode("TouchSensor");
TouchSensor125.description = "HAnimSite l_trochanterion";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = TouchSensor125;

Shape Shape126 = createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124.children[1] = Shape126;

HAnimSegment63.children[16] = HAnimSite124;

HAnimSite HAnimSite127 = createNode("HAnimSite");
HAnimSite127.DEF = "hanim_r_asis_pt";
HAnimSite127.name = "r_asis_pt";
HAnimSite127.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor128 = createNode("TouchSensor");
TouchSensor128.description = "HAnimSite r_asis";
HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = TouchSensor128;

Shape Shape129 = createNode("Shape");
Shape129.USE = "HAnimSiteShape";
HAnimSite127.children[1] = Shape129;

HAnimSegment63.children[17] = HAnimSite127;

HAnimSite HAnimSite130 = createNode("HAnimSite");
HAnimSite130.DEF = "hanim_l_asis_pt";
HAnimSite130.name = "l_asis_pt";
HAnimSite130.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor131 = createNode("TouchSensor");
TouchSensor131.description = "HAnimSite l_asis";
HAnimSite130.children = new MFNode();

HAnimSite130.children[0] = TouchSensor131;

Shape Shape132 = createNode("Shape");
Shape132.USE = "HAnimSiteShape";
HAnimSite130.children[1] = Shape132;

HAnimSegment63.children[18] = HAnimSite130;

HAnimSite HAnimSite133 = createNode("HAnimSite");
HAnimSite133.DEF = "hanim_r_psis_pt";
HAnimSite133.name = "r_psis_pt";
HAnimSite133.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor134 = createNode("TouchSensor");
TouchSensor134.description = "HAnimSite r_psis";
HAnimSite133.children = new MFNode();

HAnimSite133.children[0] = TouchSensor134;

Shape Shape135 = createNode("Shape");
Shape135.USE = "HAnimSiteShape";
HAnimSite133.children[1] = Shape135;

HAnimSegment63.children[19] = HAnimSite133;

HAnimSite HAnimSite136 = createNode("HAnimSite");
HAnimSite136.DEF = "hanim_l_psis_pt";
HAnimSite136.name = "l_psis_pt";
HAnimSite136.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor137 = createNode("TouchSensor");
TouchSensor137.description = "HAnimSite l_psis";
HAnimSite136.children = new MFNode();

HAnimSite136.children[0] = TouchSensor137;

Shape Shape138 = createNode("Shape");
Shape138.USE = "HAnimSiteShape";
HAnimSite136.children[1] = Shape138;

HAnimSegment63.children[20] = HAnimSite136;

HAnimSite HAnimSite139 = createNode("HAnimSite");
HAnimSite139.DEF = "hanim_crotch_pt";
HAnimSite139.name = "crotch_pt";
HAnimSite139.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor140 = createNode("TouchSensor");
TouchSensor140.description = "HAnimSite crotch";
HAnimSite139.children = new MFNode();

HAnimSite139.children[0] = TouchSensor140;

Shape Shape141 = createNode("Shape");
Shape141.USE = "HAnimSiteShape";
HAnimSite139.children[1] = Shape141;

HAnimSegment63.children[21] = HAnimSite139;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimSegment63;

HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.DEF = "hanim_l_hip";
HAnimJoint142.name = "l_hip";
HAnimJoint142.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment143 = createNode("HAnimSegment");
HAnimSegment143.DEF = "hanim_l_thigh";
HAnimSegment143.name = "l_thigh";
TouchSensor TouchSensor144 = createNode("TouchSensor");
TouchSensor144.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment143.children = new MFNode();

HAnimSegment143.children[0] = TouchSensor144;

Transform Transform145 = createNode("Transform");
Transform145.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape146 = createNode("Shape");
Shape146.USE = "HAnimJointShape";
Transform145.child = new undefined();

Transform145.child[0] = Shape146;

HAnimSegment143.children[1] = Transform145;

Shape Shape147 = createNode("Shape");
LineSet LineSet148 = createNode("LineSet");
LineSet148.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA149 = createNode("ColorRGBA");
ColorRGBA149.USE = "HAnimSegmentLineColorRGBA";
LineSet148.color = ColorRGBA149;

Coordinate Coordinate150 = createNode("Coordinate");
Coordinate150.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet148.coord = Coordinate150;

Shape147.geometry = LineSet148;

HAnimSegment143.children[2] = Shape147;

Shape Shape151 = createNode("Shape");
LineSet LineSet152 = createNode("LineSet");
LineSet152.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA153 = createNode("ColorRGBA");
ColorRGBA153.USE = "HAnimSiteLineColorRGBA";
LineSet152.color = ColorRGBA153;

Coordinate Coordinate154 = createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet152.coord = Coordinate154;

Shape151.geometry = LineSet152;

HAnimSegment143.children[3] = Shape151;

Shape Shape155 = createNode("Shape");
LineSet LineSet156 = createNode("LineSet");
LineSet156.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA157 = createNode("ColorRGBA");
ColorRGBA157.USE = "HAnimSiteLineColorRGBA";
LineSet156.color = ColorRGBA157;

Coordinate Coordinate158 = createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet156.coord = Coordinate158;

Shape155.geometry = LineSet156;

HAnimSegment143.children[4] = Shape155;

Shape Shape159 = createNode("Shape");
LineSet LineSet160 = createNode("LineSet");
LineSet160.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA161 = createNode("ColorRGBA");
ColorRGBA161.USE = "HAnimSiteLineColorRGBA";
LineSet160.color = ColorRGBA161;

Coordinate Coordinate162 = createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet160.coord = Coordinate162;

Shape159.geometry = LineSet160;

HAnimSegment143.children[5] = Shape159;

HAnimSite HAnimSite163 = createNode("HAnimSite");
HAnimSite163.DEF = "hanim_l_knee_crease_pt";
HAnimSite163.name = "l_knee_crease_pt";
HAnimSite163.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor164 = createNode("TouchSensor");
TouchSensor164.description = "HAnimSite l_knee_crease";
HAnimSite163.children = new MFNode();

HAnimSite163.children[0] = TouchSensor164;

Shape Shape165 = createNode("Shape");
Shape165.USE = "HAnimSiteShape";
HAnimSite163.children[1] = Shape165;

HAnimSegment143.children[6] = HAnimSite163;

HAnimSite HAnimSite166 = createNode("HAnimSite");
HAnimSite166.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite166.name = "l_femoral_lateral_epicn_pt";
HAnimSite166.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor167 = createNode("TouchSensor");
TouchSensor167.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite166.children = new MFNode();

HAnimSite166.children[0] = TouchSensor167;

Shape Shape168 = createNode("Shape");
Shape168.USE = "HAnimSiteShape";
HAnimSite166.children[1] = Shape168;

HAnimSegment143.children[7] = HAnimSite166;

HAnimSite HAnimSite169 = createNode("HAnimSite");
HAnimSite169.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite169.name = "l_femoral_medial_epicn_pt";
HAnimSite169.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor170 = createNode("TouchSensor");
TouchSensor170.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite169.children = new MFNode();

HAnimSite169.children[0] = TouchSensor170;

Shape Shape171 = createNode("Shape");
Shape171.USE = "HAnimSiteShape";
HAnimSite169.children[1] = Shape171;

HAnimSegment143.children[8] = HAnimSite169;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimSegment143;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.DEF = "hanim_l_knee";
HAnimJoint172.name = "l_knee";
HAnimJoint172.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.DEF = "hanim_l_calf";
HAnimSegment173.name = "l_calf";
TouchSensor TouchSensor174 = createNode("TouchSensor");
TouchSensor174.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = TouchSensor174;

Transform Transform175 = createNode("Transform");
Transform175.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape176 = createNode("Shape");
Shape176.USE = "HAnimJointShape";
Transform175.child = new undefined();

Transform175.child[0] = Shape176;

HAnimSegment173.children[1] = Transform175;

Shape Shape177 = createNode("Shape");
LineSet LineSet178 = createNode("LineSet");
LineSet178.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA179 = createNode("ColorRGBA");
ColorRGBA179.USE = "HAnimSegmentLineColorRGBA";
LineSet178.color = ColorRGBA179;

Coordinate Coordinate180 = createNode("Coordinate");
Coordinate180.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet178.coord = Coordinate180;

Shape177.geometry = LineSet178;

HAnimSegment173.children[2] = Shape177;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.DEF = "hanim_l_ankle";
HAnimJoint181.name = "l_ankle";
HAnimJoint181.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment182 = createNode("HAnimSegment");
HAnimSegment182.DEF = "hanim_l_hindfoot";
HAnimSegment182.name = "l_hindfoot";
TouchSensor TouchSensor183 = createNode("TouchSensor");
TouchSensor183.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = TouchSensor183;

Transform Transform184 = createNode("Transform");
Transform184.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape185 = createNode("Shape");
Shape185.USE = "HAnimJointShape";
Transform184.child = new undefined();

Transform184.child[0] = Shape185;

HAnimSegment182.children[1] = Transform184;

Shape Shape186 = createNode("Shape");
LineSet LineSet187 = createNode("LineSet");
LineSet187.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA188 = createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
LineSet187.color = ColorRGBA188;

Coordinate Coordinate189 = createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet187.coord = Coordinate189;

Shape186.geometry = LineSet187;

HAnimSegment182.children[2] = Shape186;

Shape Shape190 = createNode("Shape");
LineSet LineSet191 = createNode("LineSet");
LineSet191.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA192 = createNode("ColorRGBA");
ColorRGBA192.USE = "HAnimSiteLineColorRGBA";
LineSet191.color = ColorRGBA192;

Coordinate Coordinate193 = createNode("Coordinate");
Coordinate193.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet191.coord = Coordinate193;

Shape190.geometry = LineSet191;

HAnimSegment182.children[3] = Shape190;

Shape Shape194 = createNode("Shape");
LineSet LineSet195 = createNode("LineSet");
LineSet195.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA196 = createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSiteLineColorRGBA";
LineSet195.color = ColorRGBA196;

Coordinate Coordinate197 = createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet195.coord = Coordinate197;

Shape194.geometry = LineSet195;

HAnimSegment182.children[4] = Shape194;

Shape Shape198 = createNode("Shape");
LineSet LineSet199 = createNode("LineSet");
LineSet199.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA200 = createNode("ColorRGBA");
ColorRGBA200.USE = "HAnimSiteLineColorRGBA";
LineSet199.color = ColorRGBA200;

Coordinate Coordinate201 = createNode("Coordinate");
Coordinate201.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet199.coord = Coordinate201;

Shape198.geometry = LineSet199;

HAnimSegment182.children[5] = Shape198;

Shape Shape202 = createNode("Shape");
LineSet LineSet203 = createNode("LineSet");
LineSet203.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA204 = createNode("ColorRGBA");
ColorRGBA204.USE = "HAnimSiteLineColorRGBA";
LineSet203.color = ColorRGBA204;

Coordinate Coordinate205 = createNode("Coordinate");
Coordinate205.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet203.coord = Coordinate205;

Shape202.geometry = LineSet203;

HAnimSegment182.children[6] = Shape202;

HAnimSite HAnimSite206 = createNode("HAnimSite");
HAnimSite206.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite206.name = "l_lateral_malleolus_pt";
HAnimSite206.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor207 = createNode("TouchSensor");
TouchSensor207.description = "HAnimSite l_lateral_malleolus";
HAnimSite206.children = new MFNode();

HAnimSite206.children[0] = TouchSensor207;

Shape Shape208 = createNode("Shape");
Shape208.USE = "HAnimSiteShape";
HAnimSite206.children[1] = Shape208;

HAnimSegment182.children[7] = HAnimSite206;

HAnimSite HAnimSite209 = createNode("HAnimSite");
HAnimSite209.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite209.name = "l_medial_malleolus_pt";
HAnimSite209.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor210 = createNode("TouchSensor");
TouchSensor210.description = "HAnimSite l_medial_malleolus";
HAnimSite209.children = new MFNode();

HAnimSite209.children[0] = TouchSensor210;

Shape Shape211 = createNode("Shape");
Shape211.USE = "HAnimSiteShape";
HAnimSite209.children[1] = Shape211;

HAnimSegment182.children[8] = HAnimSite209;

HAnimSite HAnimSite212 = createNode("HAnimSite");
HAnimSite212.DEF = "hanim_l_sphyrion_pt";
HAnimSite212.name = "l_sphyrion_pt";
HAnimSite212.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor213 = createNode("TouchSensor");
TouchSensor213.description = "HAnimSite l_sphyrion";
HAnimSite212.children = new MFNode();

HAnimSite212.children[0] = TouchSensor213;

Shape Shape214 = createNode("Shape");
Shape214.USE = "HAnimSiteShape";
HAnimSite212.children[1] = Shape214;

HAnimSegment182.children[9] = HAnimSite212;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite215.name = "l_calcaneous_post_pt";
HAnimSite215.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor216 = createNode("TouchSensor");
TouchSensor216.description = "HAnimSite l_calcaneous_post";
HAnimSite215.children = new MFNode();

HAnimSite215.children[0] = TouchSensor216;

Shape Shape217 = createNode("Shape");
Shape217.USE = "HAnimSiteShape";
HAnimSite215.children[1] = Shape217;

HAnimSegment182.children[10] = HAnimSite215;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.DEF = "hanim_l_subtalar";
HAnimJoint218.name = "l_subtalar";
HAnimJoint218.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment219 = createNode("HAnimSegment");
HAnimSegment219.DEF = "hanim_l_midproximal";
HAnimSegment219.name = "l_midproximal";
TouchSensor TouchSensor220 = createNode("TouchSensor");
TouchSensor220.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = TouchSensor220;

Transform Transform221 = createNode("Transform");
Transform221.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
Shape Shape222 = createNode("Shape");
Shape222.USE = "HAnimJointShape";
Transform221.child = new undefined();

Transform221.child[0] = Shape222;

HAnimSegment219.children[1] = Transform221;

Shape Shape223 = createNode("Shape");
LineSet LineSet224 = createNode("LineSet");
LineSet224.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA225 = createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
LineSet224.color = ColorRGBA225;

Coordinate Coordinate226 = createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet224.coord = Coordinate226;

Shape223.geometry = LineSet224;

HAnimSegment219.children[2] = Shape223;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.DEF = "hanim_l_midtarsal";
HAnimJoint227.name = "l_midtarsal";
HAnimJoint227.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment228 = createNode("HAnimSegment");
HAnimSegment228.DEF = "hanim_l_middistal";
HAnimSegment228.name = "l_middistal";
TouchSensor TouchSensor229 = createNode("TouchSensor");
TouchSensor229.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment228.children = new MFNode();

HAnimSegment228.children[0] = TouchSensor229;

Transform Transform230 = createNode("Transform");
Transform230.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
Shape Shape231 = createNode("Shape");
Shape231.USE = "HAnimJointShape";
Transform230.child = new undefined();

Transform230.child[0] = Shape231;

HAnimSegment228.children[1] = Transform230;

Shape Shape232 = createNode("Shape");
LineSet LineSet233 = createNode("LineSet");
LineSet233.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA234 = createNode("ColorRGBA");
ColorRGBA234.USE = "HAnimSegmentLineColorRGBA";
LineSet233.color = ColorRGBA234;

Coordinate Coordinate235 = createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet233.coord = Coordinate235;

Shape232.geometry = LineSet233;

HAnimSegment228.children[2] = Shape232;

Shape Shape236 = createNode("Shape");
LineSet LineSet237 = createNode("LineSet");
LineSet237.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA238 = createNode("ColorRGBA");
ColorRGBA238.USE = "HAnimSiteLineColorRGBA";
LineSet237.color = ColorRGBA238;

Coordinate Coordinate239 = createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet237.coord = Coordinate239;

Shape236.geometry = LineSet237;

HAnimSegment228.children[3] = Shape236;

HAnimSite HAnimSite240 = createNode("HAnimSite");
HAnimSite240.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite240.name = "l_metatarsal_pha1_pt";
HAnimSite240.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
TouchSensor TouchSensor241 = createNode("TouchSensor");
TouchSensor241.description = "HAnimSite l_metatarsal_pha1";
HAnimSite240.children = new MFNode();

HAnimSite240.children[0] = TouchSensor241;

Shape Shape242 = createNode("Shape");
Shape242.USE = "HAnimSiteShape";
HAnimSite240.children[1] = Shape242;

HAnimSegment228.children[4] = HAnimSite240;

HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

HAnimJoint HAnimJoint243 = createNode("HAnimJoint");
HAnimJoint243.DEF = "hanim_l_metatarsal";
HAnimJoint243.name = "l_metatarsal";
HAnimJoint243.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimSegment HAnimSegment244 = createNode("HAnimSegment");
HAnimSegment244.DEF = "hanim_l_forefoot";
HAnimSegment244.name = "l_forefoot";
TouchSensor TouchSensor245 = createNode("TouchSensor");
TouchSensor245.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment244.children = new MFNode();

HAnimSegment244.children[0] = TouchSensor245;

Transform Transform246 = createNode("Transform");
Transform246.translation = new SFVec3f(new float[0.1086,0,0.0762]);
Shape Shape247 = createNode("Shape");
Shape247.USE = "HAnimJointShape";
Transform246.child = new undefined();

Transform246.child[0] = Shape247;

HAnimSegment244.children[1] = Transform246;

Shape Shape248 = createNode("Shape");
LineSet LineSet249 = createNode("LineSet");
LineSet249.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA250 = createNode("ColorRGBA");
ColorRGBA250.USE = "HAnimSiteLineColorRGBA";
LineSet249.color = ColorRGBA250;

Coordinate Coordinate251 = createNode("Coordinate");
Coordinate251.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet249.coord = Coordinate251;

Shape248.geometry = LineSet249;

HAnimSegment244.children[2] = Shape248;

Shape Shape252 = createNode("Shape");
LineSet LineSet253 = createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA254 = createNode("ColorRGBA");
ColorRGBA254.USE = "HAnimSiteLineColorRGBA";
LineSet253.color = ColorRGBA254;

Coordinate Coordinate255 = createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet253.coord = Coordinate255;

Shape252.geometry = LineSet253;

HAnimSegment244.children[3] = Shape252;

Shape Shape256 = createNode("Shape");
LineSet LineSet257 = createNode("LineSet");
LineSet257.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA258 = createNode("ColorRGBA");
ColorRGBA258.USE = "HAnimSiteLineColorRGBA";
LineSet257.color = ColorRGBA258;

Coordinate Coordinate259 = createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet257.coord = Coordinate259;

Shape256.geometry = LineSet257;

HAnimSegment244.children[4] = Shape256;

HAnimSite HAnimSite260 = createNode("HAnimSite");
HAnimSite260.DEF = "hanim_l_forefoot_tip";
HAnimSite260.name = "l_forefoot_tip";
HAnimSite260.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
TouchSensor TouchSensor261 = createNode("TouchSensor");
TouchSensor261.description = "HAnimSite l_forefoot_tip";
HAnimSite260.children = new MFNode();

HAnimSite260.children[0] = TouchSensor261;

Shape Shape262 = createNode("Shape");
Shape262.USE = "HAnimSiteShape";
HAnimSite260.children[1] = Shape262;

HAnimSegment244.children[5] = HAnimSite260;

HAnimSite HAnimSite263 = createNode("HAnimSite");
HAnimSite263.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite263.name = "l_metatarsal_pha5_pt";
HAnimSite263.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
TouchSensor TouchSensor264 = createNode("TouchSensor");
TouchSensor264.description = "HAnimSite l_metatarsal_pha5";
HAnimSite263.children = new MFNode();

HAnimSite263.children[0] = TouchSensor264;

Shape Shape265 = createNode("Shape");
Shape265.USE = "HAnimSiteShape";
HAnimSite263.children[1] = Shape265;

HAnimSegment244.children[6] = HAnimSite263;

HAnimSite HAnimSite266 = createNode("HAnimSite");
HAnimSite266.DEF = "hanim_l_digit2_pt";
HAnimSite266.name = "l_digit2_pt";
HAnimSite266.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor267 = createNode("TouchSensor");
TouchSensor267.description = "HAnimSite l_digit2";
HAnimSite266.children = new MFNode();

HAnimSite266.children[0] = TouchSensor267;

Shape Shape268 = createNode("Shape");
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

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_r_hip";
HAnimJoint269.name = "r_hip";
HAnimJoint269.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_r_thigh";
HAnimSegment270.name = "r_thigh";
TouchSensor TouchSensor271 = createNode("TouchSensor");
TouchSensor271.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = TouchSensor271;

Transform Transform272 = createNode("Transform");
Transform272.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
Shape Shape273 = createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272.child = new undefined();

Transform272.child[0] = Shape273;

HAnimSegment270.children[1] = Transform272;

Shape Shape274 = createNode("Shape");
LineSet LineSet275 = createNode("LineSet");
LineSet275.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA276 = createNode("ColorRGBA");
ColorRGBA276.USE = "HAnimSegmentLineColorRGBA";
LineSet275.color = ColorRGBA276;

Coordinate Coordinate277 = createNode("Coordinate");
Coordinate277.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet275.coord = Coordinate277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[2] = Shape274;

Shape Shape278 = createNode("Shape");
LineSet LineSet279 = createNode("LineSet");
LineSet279.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA280 = createNode("ColorRGBA");
ColorRGBA280.USE = "HAnimSiteLineColorRGBA";
LineSet279.color = ColorRGBA280;

Coordinate Coordinate281 = createNode("Coordinate");
Coordinate281.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet279.coord = Coordinate281;

Shape278.geometry = LineSet279;

HAnimSegment270.children[3] = Shape278;

Shape Shape282 = createNode("Shape");
LineSet LineSet283 = createNode("LineSet");
LineSet283.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA284 = createNode("ColorRGBA");
ColorRGBA284.USE = "HAnimSiteLineColorRGBA";
LineSet283.color = ColorRGBA284;

Coordinate Coordinate285 = createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet283.coord = Coordinate285;

Shape282.geometry = LineSet283;

HAnimSegment270.children[4] = Shape282;

Shape Shape286 = createNode("Shape");
LineSet LineSet287 = createNode("LineSet");
LineSet287.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA288 = createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSiteLineColorRGBA";
LineSet287.color = ColorRGBA288;

Coordinate Coordinate289 = createNode("Coordinate");
Coordinate289.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet287.coord = Coordinate289;

Shape286.geometry = LineSet287;

HAnimSegment270.children[5] = Shape286;

HAnimSite HAnimSite290 = createNode("HAnimSite");
HAnimSite290.DEF = "hanim_r_knee_crease_pt";
HAnimSite290.name = "r_knee_crease_pt";
HAnimSite290.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor291 = createNode("TouchSensor");
TouchSensor291.description = "HAnimSite r_knee_crease";
HAnimSite290.children = new MFNode();

HAnimSite290.children[0] = TouchSensor291;

Shape Shape292 = createNode("Shape");
Shape292.USE = "HAnimSiteShape";
HAnimSite290.children[1] = Shape292;

HAnimSegment270.children[6] = HAnimSite290;

HAnimSite HAnimSite293 = createNode("HAnimSite");
HAnimSite293.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite293.name = "r_femoral_lateral_epicn_pt";
HAnimSite293.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor294 = createNode("TouchSensor");
TouchSensor294.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = TouchSensor294;

Shape Shape295 = createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293.children[1] = Shape295;

HAnimSegment270.children[7] = HAnimSite293;

HAnimSite HAnimSite296 = createNode("HAnimSite");
HAnimSite296.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite296.name = "r_femoral_medial_epicn_pt";
HAnimSite296.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor297 = createNode("TouchSensor");
TouchSensor297.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite296.children = new MFNode();

HAnimSite296.children[0] = TouchSensor297;

Shape Shape298 = createNode("Shape");
Shape298.USE = "HAnimSiteShape";
HAnimSite296.children[1] = Shape298;

HAnimSegment270.children[8] = HAnimSite296;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.DEF = "hanim_r_knee";
HAnimJoint299.name = "r_knee";
HAnimJoint299.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.DEF = "hanim_r_calf";
HAnimSegment300.name = "r_calf";
TouchSensor TouchSensor301 = createNode("TouchSensor");
TouchSensor301.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment300.children = new MFNode();

HAnimSegment300.children[0] = TouchSensor301;

Transform Transform302 = createNode("Transform");
Transform302.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
Shape Shape303 = createNode("Shape");
Shape303.USE = "HAnimJointShape";
Transform302.child = new undefined();

Transform302.child[0] = Shape303;

HAnimSegment300.children[1] = Transform302;

Shape Shape304 = createNode("Shape");
LineSet LineSet305 = createNode("LineSet");
LineSet305.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA306 = createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA";
LineSet305.color = ColorRGBA306;

Coordinate Coordinate307 = createNode("Coordinate");
Coordinate307.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet305.coord = Coordinate307;

Shape304.geometry = LineSet305;

HAnimSegment300.children[2] = Shape304;

HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.DEF = "hanim_r_ankle";
HAnimJoint308.name = "r_ankle";
HAnimJoint308.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment309 = createNode("HAnimSegment");
HAnimSegment309.DEF = "hanim_r_hindfoot";
HAnimSegment309.name = "r_hindfoot";
TouchSensor TouchSensor310 = createNode("TouchSensor");
TouchSensor310.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment309.children = new MFNode();

HAnimSegment309.children[0] = TouchSensor310;

Transform Transform311 = createNode("Transform");
Transform311.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
Shape Shape312 = createNode("Shape");
Shape312.USE = "HAnimJointShape";
Transform311.child = new undefined();

Transform311.child[0] = Shape312;

HAnimSegment309.children[1] = Transform311;

Shape Shape313 = createNode("Shape");
LineSet LineSet314 = createNode("LineSet");
LineSet314.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA315 = createNode("ColorRGBA");
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA";
LineSet314.color = ColorRGBA315;

Coordinate Coordinate316 = createNode("Coordinate");
Coordinate316.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet314.coord = Coordinate316;

Shape313.geometry = LineSet314;

HAnimSegment309.children[2] = Shape313;

Shape Shape317 = createNode("Shape");
LineSet LineSet318 = createNode("LineSet");
LineSet318.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA319 = createNode("ColorRGBA");
ColorRGBA319.USE = "HAnimSiteLineColorRGBA";
LineSet318.color = ColorRGBA319;

Coordinate Coordinate320 = createNode("Coordinate");
Coordinate320.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet318.coord = Coordinate320;

Shape317.geometry = LineSet318;

HAnimSegment309.children[3] = Shape317;

Shape Shape321 = createNode("Shape");
LineSet LineSet322 = createNode("LineSet");
LineSet322.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA323 = createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSiteLineColorRGBA";
LineSet322.color = ColorRGBA323;

Coordinate Coordinate324 = createNode("Coordinate");
Coordinate324.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet322.coord = Coordinate324;

Shape321.geometry = LineSet322;

HAnimSegment309.children[4] = Shape321;

Shape Shape325 = createNode("Shape");
LineSet LineSet326 = createNode("LineSet");
LineSet326.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA327 = createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSiteLineColorRGBA";
LineSet326.color = ColorRGBA327;

Coordinate Coordinate328 = createNode("Coordinate");
Coordinate328.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet326.coord = Coordinate328;

Shape325.geometry = LineSet326;

HAnimSegment309.children[5] = Shape325;

Shape Shape329 = createNode("Shape");
LineSet LineSet330 = createNode("LineSet");
LineSet330.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA331 = createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSiteLineColorRGBA";
LineSet330.color = ColorRGBA331;

Coordinate Coordinate332 = createNode("Coordinate");
Coordinate332.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet330.coord = Coordinate332;

Shape329.geometry = LineSet330;

HAnimSegment309.children[6] = Shape329;

HAnimSite HAnimSite333 = createNode("HAnimSite");
HAnimSite333.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite333.name = "r_lateral_malleolus_pt";
HAnimSite333.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor334 = createNode("TouchSensor");
TouchSensor334.description = "HAnimSite r_lateral_malleolus";
HAnimSite333.children = new MFNode();

HAnimSite333.children[0] = TouchSensor334;

Shape Shape335 = createNode("Shape");
Shape335.USE = "HAnimSiteShape";
HAnimSite333.children[1] = Shape335;

HAnimSegment309.children[7] = HAnimSite333;

HAnimSite HAnimSite336 = createNode("HAnimSite");
HAnimSite336.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite336.name = "r_medial_malleolus_pt";
HAnimSite336.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor337 = createNode("TouchSensor");
TouchSensor337.description = "HAnimSite r_medial_malleolus";
HAnimSite336.children = new MFNode();

HAnimSite336.children[0] = TouchSensor337;

Shape Shape338 = createNode("Shape");
Shape338.USE = "HAnimSiteShape";
HAnimSite336.children[1] = Shape338;

HAnimSegment309.children[8] = HAnimSite336;

HAnimSite HAnimSite339 = createNode("HAnimSite");
HAnimSite339.DEF = "hanim_r_sphyrion_pt";
HAnimSite339.name = "r_sphyrion_pt";
HAnimSite339.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor340 = createNode("TouchSensor");
TouchSensor340.description = "HAnimSite r_sphyrion";
HAnimSite339.children = new MFNode();

HAnimSite339.children[0] = TouchSensor340;

Shape Shape341 = createNode("Shape");
Shape341.USE = "HAnimSiteShape";
HAnimSite339.children[1] = Shape341;

HAnimSegment309.children[9] = HAnimSite339;

HAnimSite HAnimSite342 = createNode("HAnimSite");
HAnimSite342.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite342.name = "r_calcaneous_post_pt";
HAnimSite342.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor343 = createNode("TouchSensor");
TouchSensor343.description = "HAnimSite r_calcaneous_post";
HAnimSite342.children = new MFNode();

HAnimSite342.children[0] = TouchSensor343;

Shape Shape344 = createNode("Shape");
Shape344.USE = "HAnimSiteShape";
HAnimSite342.children[1] = Shape344;

HAnimSegment309.children[10] = HAnimSite342;

HAnimJoint308.children = new MFNode();

HAnimJoint308.children[0] = HAnimSegment309;

HAnimJoint HAnimJoint345 = createNode("HAnimJoint");
HAnimJoint345.DEF = "hanim_r_subtalar";
HAnimJoint345.name = "r_subtalar";
HAnimJoint345.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment346 = createNode("HAnimSegment");
HAnimSegment346.DEF = "hanim_r_midproximal";
HAnimSegment346.name = "r_midproximal";
TouchSensor TouchSensor347 = createNode("TouchSensor");
TouchSensor347.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment346.children = new MFNode();

HAnimSegment346.children[0] = TouchSensor347;

Transform Transform348 = createNode("Transform");
Transform348.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
Shape Shape349 = createNode("Shape");
Shape349.USE = "HAnimJointShape";
Transform348.child = new undefined();

Transform348.child[0] = Shape349;

HAnimSegment346.children[1] = Transform348;

Shape Shape350 = createNode("Shape");
LineSet LineSet351 = createNode("LineSet");
LineSet351.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA352 = createNode("ColorRGBA");
ColorRGBA352.USE = "HAnimSegmentLineColorRGBA";
LineSet351.color = ColorRGBA352;

Coordinate Coordinate353 = createNode("Coordinate");
Coordinate353.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet351.coord = Coordinate353;

Shape350.geometry = LineSet351;

HAnimSegment346.children[2] = Shape350;

HAnimJoint345.children = new MFNode();

HAnimJoint345.children[0] = HAnimSegment346;

HAnimJoint HAnimJoint354 = createNode("HAnimJoint");
HAnimJoint354.DEF = "hanim_r_midtarsal";
HAnimJoint354.name = "r_midtarsal";
HAnimJoint354.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment355 = createNode("HAnimSegment");
HAnimSegment355.DEF = "hanim_r_middistal";
HAnimSegment355.name = "r_middistal";
TouchSensor TouchSensor356 = createNode("TouchSensor");
TouchSensor356.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment355.children = new MFNode();

HAnimSegment355.children[0] = TouchSensor356;

Transform Transform357 = createNode("Transform");
Transform357.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
Shape Shape358 = createNode("Shape");
Shape358.USE = "HAnimJointShape";
Transform357.child = new undefined();

Transform357.child[0] = Shape358;

HAnimSegment355.children[1] = Transform357;

Shape Shape359 = createNode("Shape");
LineSet LineSet360 = createNode("LineSet");
LineSet360.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA361 = createNode("ColorRGBA");
ColorRGBA361.USE = "HAnimSegmentLineColorRGBA";
LineSet360.color = ColorRGBA361;

Coordinate Coordinate362 = createNode("Coordinate");
Coordinate362.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet360.coord = Coordinate362;

Shape359.geometry = LineSet360;

HAnimSegment355.children[2] = Shape359;

Shape Shape363 = createNode("Shape");
LineSet LineSet364 = createNode("LineSet");
LineSet364.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA365 = createNode("ColorRGBA");
ColorRGBA365.USE = "HAnimSiteLineColorRGBA";
LineSet364.color = ColorRGBA365;

Coordinate Coordinate366 = createNode("Coordinate");
Coordinate366.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet364.coord = Coordinate366;

Shape363.geometry = LineSet364;

HAnimSegment355.children[3] = Shape363;

HAnimSite HAnimSite367 = createNode("HAnimSite");
HAnimSite367.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite367.name = "r_metatarsal_pha1_pt";
HAnimSite367.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
TouchSensor TouchSensor368 = createNode("TouchSensor");
TouchSensor368.description = "HAnimSite r_metatarsal_pha1";
HAnimSite367.children = new MFNode();

HAnimSite367.children[0] = TouchSensor368;

Shape Shape369 = createNode("Shape");
Shape369.USE = "HAnimSiteShape";
HAnimSite367.children[1] = Shape369;

HAnimSegment355.children[4] = HAnimSite367;

HAnimJoint354.children = new MFNode();

HAnimJoint354.children[0] = HAnimSegment355;

HAnimJoint HAnimJoint370 = createNode("HAnimJoint");
HAnimJoint370.DEF = "hanim_r_metatarsal";
HAnimJoint370.name = "r_metatarsal";
HAnimJoint370.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimSegment HAnimSegment371 = createNode("HAnimSegment");
HAnimSegment371.DEF = "hanim_r_forefoot";
HAnimSegment371.name = "r_forefoot";
TouchSensor TouchSensor372 = createNode("TouchSensor");
TouchSensor372.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment371.children = new MFNode();

HAnimSegment371.children[0] = TouchSensor372;

Transform Transform373 = createNode("Transform");
Transform373.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
Shape Shape374 = createNode("Shape");
Shape374.USE = "HAnimJointShape";
Transform373.child = new undefined();

Transform373.child[0] = Shape374;

HAnimSegment371.children[1] = Transform373;

Shape Shape375 = createNode("Shape");
LineSet LineSet376 = createNode("LineSet");
LineSet376.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA377 = createNode("ColorRGBA");
ColorRGBA377.USE = "HAnimSiteLineColorRGBA";
LineSet376.color = ColorRGBA377;

Coordinate Coordinate378 = createNode("Coordinate");
Coordinate378.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet376.coord = Coordinate378;

Shape375.geometry = LineSet376;

HAnimSegment371.children[2] = Shape375;

Shape Shape379 = createNode("Shape");
LineSet LineSet380 = createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA381 = createNode("ColorRGBA");
ColorRGBA381.USE = "HAnimSiteLineColorRGBA";
LineSet380.color = ColorRGBA381;

Coordinate Coordinate382 = createNode("Coordinate");
Coordinate382.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet380.coord = Coordinate382;

Shape379.geometry = LineSet380;

HAnimSegment371.children[3] = Shape379;

Shape Shape383 = createNode("Shape");
LineSet LineSet384 = createNode("LineSet");
LineSet384.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA385 = createNode("ColorRGBA");
ColorRGBA385.USE = "HAnimSiteLineColorRGBA";
LineSet384.color = ColorRGBA385;

Coordinate Coordinate386 = createNode("Coordinate");
Coordinate386.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet384.coord = Coordinate386;

Shape383.geometry = LineSet384;

HAnimSegment371.children[4] = Shape383;

HAnimSite HAnimSite387 = createNode("HAnimSite");
HAnimSite387.DEF = "hanim_r_forefoot_tip";
HAnimSite387.name = "r_forefoot_tip";
HAnimSite387.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
TouchSensor TouchSensor388 = createNode("TouchSensor");
TouchSensor388.description = "HAnimSite r_forefoot_tip";
HAnimSite387.children = new MFNode();

HAnimSite387.children[0] = TouchSensor388;

Shape Shape389 = createNode("Shape");
Shape389.USE = "HAnimSiteShape";
HAnimSite387.children[1] = Shape389;

HAnimSegment371.children[5] = HAnimSite387;

HAnimSite HAnimSite390 = createNode("HAnimSite");
HAnimSite390.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite390.name = "r_metatarsal_pha5_pt";
HAnimSite390.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
TouchSensor TouchSensor391 = createNode("TouchSensor");
TouchSensor391.description = "HAnimSite r_metatarsal_pha5";
HAnimSite390.children = new MFNode();

HAnimSite390.children[0] = TouchSensor391;

Shape Shape392 = createNode("Shape");
Shape392.USE = "HAnimSiteShape";
HAnimSite390.children[1] = Shape392;

HAnimSegment371.children[6] = HAnimSite390;

HAnimSite HAnimSite393 = createNode("HAnimSite");
HAnimSite393.DEF = "hanim_r_digit2_pt";
HAnimSite393.name = "r_digit2_pt";
HAnimSite393.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor394 = createNode("TouchSensor");
TouchSensor394.description = "HAnimSite r_digit2";
HAnimSite393.children = new MFNode();

HAnimSite393.children[0] = TouchSensor394;

Shape Shape395 = createNode("Shape");
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

HAnimJoint HAnimJoint396 = createNode("HAnimJoint");
HAnimJoint396.DEF = "hanim_vl5";
HAnimJoint396.name = "vl5";
HAnimJoint396.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment397 = createNode("HAnimSegment");
HAnimSegment397.DEF = "hanim_l5";
HAnimSegment397.name = "l5";
TouchSensor TouchSensor398 = createNode("TouchSensor");
TouchSensor398.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment397.children = new MFNode();

HAnimSegment397.children[0] = TouchSensor398;

Transform Transform399 = createNode("Transform");
Transform399.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Shape Shape400 = createNode("Shape");
Shape400.USE = "HAnimJointShape";
Transform399.child = new undefined();

Transform399.child[0] = Shape400;

HAnimSegment397.children[1] = Transform399;

Shape Shape401 = createNode("Shape");
LineSet LineSet402 = createNode("LineSet");
LineSet402.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA403 = createNode("ColorRGBA");
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA";
LineSet402.color = ColorRGBA403;

Coordinate Coordinate404 = createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet402.coord = Coordinate404;

Shape401.geometry = LineSet402;

HAnimSegment397.children[2] = Shape401;

Shape Shape405 = createNode("Shape");
LineSet LineSet406 = createNode("LineSet");
LineSet406.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA407 = createNode("ColorRGBA");
ColorRGBA407.USE = "HAnimSiteLineColorRGBA";
LineSet406.color = ColorRGBA407;

Coordinate Coordinate408 = createNode("Coordinate");
Coordinate408.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet406.coord = Coordinate408;

Shape405.geometry = LineSet406;

HAnimSegment397.children[3] = Shape405;

Shape Shape409 = createNode("Shape");
LineSet LineSet410 = createNode("LineSet");
LineSet410.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA411 = createNode("ColorRGBA");
ColorRGBA411.USE = "HAnimSiteLineColorRGBA";
LineSet410.color = ColorRGBA411;

Coordinate Coordinate412 = createNode("Coordinate");
Coordinate412.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet410.coord = Coordinate412;

Shape409.geometry = LineSet410;

HAnimSegment397.children[4] = Shape409;

HAnimSite HAnimSite413 = createNode("HAnimSite");
HAnimSite413.DEF = "hanim_waist_preferred_post_pt";
HAnimSite413.name = "waist_preferred_post_pt";
HAnimSite413.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
TouchSensor TouchSensor414 = createNode("TouchSensor");
TouchSensor414.description = "HAnimSite waist_preferred_post";
HAnimSite413.children = new MFNode();

HAnimSite413.children[0] = TouchSensor414;

Shape Shape415 = createNode("Shape");
Shape415.USE = "HAnimSiteShape";
HAnimSite413.children[1] = Shape415;

HAnimSegment397.children[5] = HAnimSite413;

HAnimSite HAnimSite416 = createNode("HAnimSite");
HAnimSite416.DEF = "hanim_navel_pt";
HAnimSite416.name = "navel_pt";
HAnimSite416.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor417 = createNode("TouchSensor");
TouchSensor417.description = "HAnimSite navel";
HAnimSite416.children = new MFNode();

HAnimSite416.children[0] = TouchSensor417;

Shape Shape418 = createNode("Shape");
Shape418.USE = "HAnimSiteShape";
HAnimSite416.children[1] = Shape418;

HAnimSegment397.children[6] = HAnimSite416;

HAnimJoint396.children = new MFNode();

HAnimJoint396.children[0] = HAnimSegment397;

HAnimJoint HAnimJoint419 = createNode("HAnimJoint");
HAnimJoint419.DEF = "hanim_vl4";
HAnimJoint419.name = "vl4";
HAnimJoint419.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimSegment HAnimSegment420 = createNode("HAnimSegment");
HAnimSegment420.DEF = "hanim_l4";
HAnimSegment420.name = "l4";
TouchSensor TouchSensor421 = createNode("TouchSensor");
TouchSensor421.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment420.children = new MFNode();

HAnimSegment420.children[0] = TouchSensor421;

Transform Transform422 = createNode("Transform");
Transform422.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Shape Shape423 = createNode("Shape");
Shape423.USE = "HAnimJointShape";
Transform422.child = new undefined();

Transform422.child[0] = Shape423;

HAnimSegment420.children[1] = Transform422;

Shape Shape424 = createNode("Shape");
LineSet LineSet425 = createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA426 = createNode("ColorRGBA");
ColorRGBA426.USE = "HAnimSegmentLineColorRGBA";
LineSet425.color = ColorRGBA426;

Coordinate Coordinate427 = createNode("Coordinate");
Coordinate427.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet425.coord = Coordinate427;

Shape424.geometry = LineSet425;

HAnimSegment420.children[2] = Shape424;

HAnimJoint419.children = new MFNode();

HAnimJoint419.children[0] = HAnimSegment420;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.DEF = "hanim_vl3";
HAnimJoint428.name = "vl3";
HAnimJoint428.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment429 = createNode("HAnimSegment");
HAnimSegment429.DEF = "hanim_l3";
HAnimSegment429.name = "l3";
TouchSensor TouchSensor430 = createNode("TouchSensor");
TouchSensor430.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment429.children = new MFNode();

HAnimSegment429.children[0] = TouchSensor430;

Transform Transform431 = createNode("Transform");
Transform431.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Shape Shape432 = createNode("Shape");
Shape432.USE = "HAnimJointShape";
Transform431.child = new undefined();

Transform431.child[0] = Shape432;

HAnimSegment429.children[1] = Transform431;

Shape Shape433 = createNode("Shape");
LineSet LineSet434 = createNode("LineSet");
LineSet434.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA435 = createNode("ColorRGBA");
ColorRGBA435.USE = "HAnimSegmentLineColorRGBA";
LineSet434.color = ColorRGBA435;

Coordinate Coordinate436 = createNode("Coordinate");
Coordinate436.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet434.coord = Coordinate436;

Shape433.geometry = LineSet434;

HAnimSegment429.children[2] = Shape433;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

HAnimJoint HAnimJoint437 = createNode("HAnimJoint");
HAnimJoint437.DEF = "hanim_vl2";
HAnimJoint437.name = "vl2";
HAnimJoint437.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimSegment HAnimSegment438 = createNode("HAnimSegment");
HAnimSegment438.DEF = "hanim_l2";
HAnimSegment438.name = "l2";
TouchSensor TouchSensor439 = createNode("TouchSensor");
TouchSensor439.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = TouchSensor439;

Transform Transform440 = createNode("Transform");
Transform440.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Shape Shape441 = createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440.child = new undefined();

Transform440.child[0] = Shape441;

HAnimSegment438.children[1] = Transform440;

Shape Shape442 = createNode("Shape");
LineSet LineSet443 = createNode("LineSet");
LineSet443.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA444 = createNode("ColorRGBA");
ColorRGBA444.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA444;

Coordinate Coordinate445 = createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet443.coord = Coordinate445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[2] = Shape442;

Shape Shape446 = createNode("Shape");
LineSet LineSet447 = createNode("LineSet");
LineSet447.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA448 = createNode("ColorRGBA");
ColorRGBA448.USE = "HAnimSiteLineColorRGBA";
LineSet447.color = ColorRGBA448;

Coordinate Coordinate449 = createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet447.coord = Coordinate449;

Shape446.geometry = LineSet447;

HAnimSegment438.children[3] = Shape446;

Shape Shape450 = createNode("Shape");
LineSet LineSet451 = createNode("LineSet");
LineSet451.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA452 = createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSiteLineColorRGBA";
LineSet451.color = ColorRGBA452;

Coordinate Coordinate453 = createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet451.coord = Coordinate453;

Shape450.geometry = LineSet451;

HAnimSegment438.children[4] = Shape450;

Shape Shape454 = createNode("Shape");
LineSet LineSet455 = createNode("LineSet");
LineSet455.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA456 = createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSiteLineColorRGBA";
LineSet455.color = ColorRGBA456;

Coordinate Coordinate457 = createNode("Coordinate");
Coordinate457.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet455.coord = Coordinate457;

Shape454.geometry = LineSet455;

HAnimSegment438.children[5] = Shape454;

HAnimSite HAnimSite458 = createNode("HAnimSite");
HAnimSite458.DEF = "hanim_r_rib10_pt";
HAnimSite458.name = "r_rib10_pt";
HAnimSite458.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor459 = createNode("TouchSensor");
TouchSensor459.description = "HAnimSite r_rib10";
HAnimSite458.children = new MFNode();

HAnimSite458.children[0] = TouchSensor459;

Shape Shape460 = createNode("Shape");
Shape460.USE = "HAnimSiteShape";
HAnimSite458.children[1] = Shape460;

HAnimSegment438.children[6] = HAnimSite458;

HAnimSite HAnimSite461 = createNode("HAnimSite");
HAnimSite461.DEF = "hanim_l_rib10_pt";
HAnimSite461.name = "l_rib10_pt";
HAnimSite461.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor462 = createNode("TouchSensor");
TouchSensor462.description = "HAnimSite l_rib10";
HAnimSite461.children = new MFNode();

HAnimSite461.children[0] = TouchSensor462;

Shape Shape463 = createNode("Shape");
Shape463.USE = "HAnimSiteShape";
HAnimSite461.children[1] = Shape463;

HAnimSegment438.children[7] = HAnimSite461;

HAnimSite HAnimSite464 = createNode("HAnimSite");
HAnimSite464.DEF = "hanim_rib10_midspine_pt";
HAnimSite464.name = "rib10_midspine_pt";
HAnimSite464.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
TouchSensor TouchSensor465 = createNode("TouchSensor");
TouchSensor465.description = "HAnimSite rib10_midspine";
HAnimSite464.children = new MFNode();

HAnimSite464.children[0] = TouchSensor465;

Shape Shape466 = createNode("Shape");
Shape466.USE = "HAnimSiteShape";
HAnimSite464.children[1] = Shape466;

HAnimSegment438.children[8] = HAnimSite464;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

HAnimJoint HAnimJoint467 = createNode("HAnimJoint");
HAnimJoint467.DEF = "hanim_vl1";
HAnimJoint467.name = "vl1";
HAnimJoint467.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment468 = createNode("HAnimSegment");
HAnimSegment468.DEF = "hanim_l1";
HAnimSegment468.name = "l1";
TouchSensor TouchSensor469 = createNode("TouchSensor");
TouchSensor469.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment468.children = new MFNode();

HAnimSegment468.children[0] = TouchSensor469;

Transform Transform470 = createNode("Transform");
Transform470.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Shape Shape471 = createNode("Shape");
Shape471.USE = "HAnimJointShape";
Transform470.child = new undefined();

Transform470.child[0] = Shape471;

HAnimSegment468.children[1] = Transform470;

Shape Shape472 = createNode("Shape");
LineSet LineSet473 = createNode("LineSet");
LineSet473.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA474 = createNode("ColorRGBA");
ColorRGBA474.USE = "HAnimSegmentLineColorRGBA";
LineSet473.color = ColorRGBA474;

Coordinate Coordinate475 = createNode("Coordinate");
Coordinate475.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet473.coord = Coordinate475;

Shape472.geometry = LineSet473;

HAnimSegment468.children[2] = Shape472;

HAnimJoint467.children = new MFNode();

HAnimJoint467.children[0] = HAnimSegment468;

HAnimJoint HAnimJoint476 = createNode("HAnimJoint");
HAnimJoint476.DEF = "hanim_vt12";
HAnimJoint476.name = "vt12";
HAnimJoint476.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimSegment HAnimSegment477 = createNode("HAnimSegment");
HAnimSegment477.DEF = "hanim_t12";
HAnimSegment477.name = "t12";
TouchSensor TouchSensor478 = createNode("TouchSensor");
TouchSensor478.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment477.children = new MFNode();

HAnimSegment477.children[0] = TouchSensor478;

Transform Transform479 = createNode("Transform");
Transform479.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Shape Shape480 = createNode("Shape");
Shape480.USE = "HAnimJointShape";
Transform479.child = new undefined();

Transform479.child[0] = Shape480;

HAnimSegment477.children[1] = Transform479;

Shape Shape481 = createNode("Shape");
LineSet LineSet482 = createNode("LineSet");
LineSet482.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA483 = createNode("ColorRGBA");
ColorRGBA483.USE = "HAnimSegmentLineColorRGBA";
LineSet482.color = ColorRGBA483;

Coordinate Coordinate484 = createNode("Coordinate");
Coordinate484.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet482.coord = Coordinate484;

Shape481.geometry = LineSet482;

HAnimSegment477.children[2] = Shape481;

HAnimJoint476.children = new MFNode();

HAnimJoint476.children[0] = HAnimSegment477;

HAnimJoint HAnimJoint485 = createNode("HAnimJoint");
HAnimJoint485.DEF = "hanim_vt11";
HAnimJoint485.name = "vt11";
HAnimJoint485.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.DEF = "hanim_t11";
HAnimSegment486.name = "t11";
TouchSensor TouchSensor487 = createNode("TouchSensor");
TouchSensor487.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = TouchSensor487;

Transform Transform488 = createNode("Transform");
Transform488.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Shape Shape489 = createNode("Shape");
Shape489.USE = "HAnimJointShape";
Transform488.child = new undefined();

Transform488.child[0] = Shape489;

HAnimSegment486.children[1] = Transform488;

Shape Shape490 = createNode("Shape");
LineSet LineSet491 = createNode("LineSet");
LineSet491.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA492 = createNode("ColorRGBA");
ColorRGBA492.USE = "HAnimSegmentLineColorRGBA";
LineSet491.color = ColorRGBA492;

Coordinate Coordinate493 = createNode("Coordinate");
Coordinate493.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet491.coord = Coordinate493;

Shape490.geometry = LineSet491;

HAnimSegment486.children[2] = Shape490;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

HAnimJoint HAnimJoint494 = createNode("HAnimJoint");
HAnimJoint494.DEF = "hanim_vt10";
HAnimJoint494.name = "vt10";
HAnimJoint494.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment495 = createNode("HAnimSegment");
HAnimSegment495.DEF = "hanim_t10";
HAnimSegment495.name = "t10";
TouchSensor TouchSensor496 = createNode("TouchSensor");
TouchSensor496.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment495.children = new MFNode();

HAnimSegment495.children[0] = TouchSensor496;

Transform Transform497 = createNode("Transform");
Transform497.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Shape Shape498 = createNode("Shape");
Shape498.USE = "HAnimJointShape";
Transform497.child = new undefined();

Transform497.child[0] = Shape498;

HAnimSegment495.children[1] = Transform497;

Shape Shape499 = createNode("Shape");
LineSet LineSet500 = createNode("LineSet");
LineSet500.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA501 = createNode("ColorRGBA");
ColorRGBA501.USE = "HAnimSegmentLineColorRGBA";
LineSet500.color = ColorRGBA501;

Coordinate Coordinate502 = createNode("Coordinate");
Coordinate502.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet500.coord = Coordinate502;

Shape499.geometry = LineSet500;

HAnimSegment495.children[2] = Shape499;

Shape Shape503 = createNode("Shape");
LineSet LineSet504 = createNode("LineSet");
LineSet504.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA505 = createNode("ColorRGBA");
ColorRGBA505.USE = "HAnimSiteLineColorRGBA";
LineSet504.color = ColorRGBA505;

Coordinate Coordinate506 = createNode("Coordinate");
Coordinate506.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet504.coord = Coordinate506;

Shape503.geometry = LineSet504;

HAnimSegment495.children[3] = Shape503;

HAnimSite HAnimSite507 = createNode("HAnimSite");
HAnimSite507.DEF = "hanim_substernale_pt";
HAnimSite507.name = "substernale_pt";
HAnimSite507.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor508 = createNode("TouchSensor");
TouchSensor508.description = "HAnimSite substernale";
HAnimSite507.children = new MFNode();

HAnimSite507.children[0] = TouchSensor508;

Shape Shape509 = createNode("Shape");
Shape509.USE = "HAnimSiteShape";
HAnimSite507.children[1] = Shape509;

HAnimSegment495.children[4] = HAnimSite507;

HAnimJoint494.children = new MFNode();

HAnimJoint494.children[0] = HAnimSegment495;

HAnimJoint HAnimJoint510 = createNode("HAnimJoint");
HAnimJoint510.DEF = "hanim_vt9";
HAnimJoint510.name = "vt9";
HAnimJoint510.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimSegment HAnimSegment511 = createNode("HAnimSegment");
HAnimSegment511.DEF = "hanim_t9";
HAnimSegment511.name = "t9";
TouchSensor TouchSensor512 = createNode("TouchSensor");
TouchSensor512.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment511.children = new MFNode();

HAnimSegment511.children[0] = TouchSensor512;

Transform Transform513 = createNode("Transform");
Transform513.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Shape Shape514 = createNode("Shape");
Shape514.USE = "HAnimJointShape";
Transform513.child = new undefined();

Transform513.child[0] = Shape514;

HAnimSegment511.children[1] = Transform513;

Shape Shape515 = createNode("Shape");
LineSet LineSet516 = createNode("LineSet");
LineSet516.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA517 = createNode("ColorRGBA");
ColorRGBA517.USE = "HAnimSegmentLineColorRGBA";
LineSet516.color = ColorRGBA517;

Coordinate Coordinate518 = createNode("Coordinate");
Coordinate518.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet516.coord = Coordinate518;

Shape515.geometry = LineSet516;

HAnimSegment511.children[2] = Shape515;

Shape Shape519 = createNode("Shape");
LineSet LineSet520 = createNode("LineSet");
LineSet520.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA521 = createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSiteLineColorRGBA";
LineSet520.color = ColorRGBA521;

Coordinate Coordinate522 = createNode("Coordinate");
Coordinate522.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet520.coord = Coordinate522;

Shape519.geometry = LineSet520;

HAnimSegment511.children[3] = Shape519;

Shape Shape523 = createNode("Shape");
LineSet LineSet524 = createNode("LineSet");
LineSet524.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA525 = createNode("ColorRGBA");
ColorRGBA525.USE = "HAnimSiteLineColorRGBA";
LineSet524.color = ColorRGBA525;

Coordinate Coordinate526 = createNode("Coordinate");
Coordinate526.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet524.coord = Coordinate526;

Shape523.geometry = LineSet524;

HAnimSegment511.children[4] = Shape523;

HAnimSite HAnimSite527 = createNode("HAnimSite");
HAnimSite527.DEF = "hanim_r_thelion_pt";
HAnimSite527.name = "r_thelion_pt";
HAnimSite527.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor528 = createNode("TouchSensor");
TouchSensor528.description = "HAnimSite r_thelion";
HAnimSite527.children = new MFNode();

HAnimSite527.children[0] = TouchSensor528;

Shape Shape529 = createNode("Shape");
Shape529.USE = "HAnimSiteShape";
HAnimSite527.children[1] = Shape529;

HAnimSegment511.children[5] = HAnimSite527;

HAnimSite HAnimSite530 = createNode("HAnimSite");
HAnimSite530.DEF = "hanim_l_thelion_pt";
HAnimSite530.name = "l_thelion_pt";
HAnimSite530.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor531 = createNode("TouchSensor");
TouchSensor531.description = "HAnimSite l_thelion";
HAnimSite530.children = new MFNode();

HAnimSite530.children[0] = TouchSensor531;

Shape Shape532 = createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530.children[1] = Shape532;

HAnimSegment511.children[6] = HAnimSite530;

HAnimJoint510.children = new MFNode();

HAnimJoint510.children[0] = HAnimSegment511;

HAnimJoint HAnimJoint533 = createNode("HAnimJoint");
HAnimJoint533.DEF = "hanim_vt8";
HAnimJoint533.name = "vt8";
HAnimJoint533.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimSegment HAnimSegment534 = createNode("HAnimSegment");
HAnimSegment534.DEF = "hanim_t8";
HAnimSegment534.name = "t8";
TouchSensor TouchSensor535 = createNode("TouchSensor");
TouchSensor535.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment534.children = new MFNode();

HAnimSegment534.children[0] = TouchSensor535;

Transform Transform536 = createNode("Transform");
Transform536.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Shape Shape537 = createNode("Shape");
Shape537.USE = "HAnimJointShape";
Transform536.child = new undefined();

Transform536.child[0] = Shape537;

HAnimSegment534.children[1] = Transform536;

Shape Shape538 = createNode("Shape");
LineSet LineSet539 = createNode("LineSet");
LineSet539.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA540 = createNode("ColorRGBA");
ColorRGBA540.USE = "HAnimSegmentLineColorRGBA";
LineSet539.color = ColorRGBA540;

Coordinate Coordinate541 = createNode("Coordinate");
Coordinate541.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet539.coord = Coordinate541;

Shape538.geometry = LineSet539;

HAnimSegment534.children[2] = Shape538;

HAnimJoint533.children = new MFNode();

HAnimJoint533.children[0] = HAnimSegment534;

HAnimJoint HAnimJoint542 = createNode("HAnimJoint");
HAnimJoint542.DEF = "hanim_vt7";
HAnimJoint542.name = "vt7";
HAnimJoint542.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimSegment HAnimSegment543 = createNode("HAnimSegment");
HAnimSegment543.DEF = "hanim_t7";
HAnimSegment543.name = "t7";
TouchSensor TouchSensor544 = createNode("TouchSensor");
TouchSensor544.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment543.children = new MFNode();

HAnimSegment543.children[0] = TouchSensor544;

Transform Transform545 = createNode("Transform");
Transform545.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Shape Shape546 = createNode("Shape");
Shape546.USE = "HAnimJointShape";
Transform545.child = new undefined();

Transform545.child[0] = Shape546;

HAnimSegment543.children[1] = Transform545;

Shape Shape547 = createNode("Shape");
LineSet LineSet548 = createNode("LineSet");
LineSet548.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA549 = createNode("ColorRGBA");
ColorRGBA549.USE = "HAnimSegmentLineColorRGBA";
LineSet548.color = ColorRGBA549;

Coordinate Coordinate550 = createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet548.coord = Coordinate550;

Shape547.geometry = LineSet548;

HAnimSegment543.children[2] = Shape547;

HAnimJoint542.children = new MFNode();

HAnimJoint542.children[0] = HAnimSegment543;

HAnimJoint HAnimJoint551 = createNode("HAnimJoint");
HAnimJoint551.DEF = "hanim_vt6";
HAnimJoint551.name = "vt6";
HAnimJoint551.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment552 = createNode("HAnimSegment");
HAnimSegment552.DEF = "hanim_t6";
HAnimSegment552.name = "t6";
TouchSensor TouchSensor553 = createNode("TouchSensor");
TouchSensor553.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment552.children = new MFNode();

HAnimSegment552.children[0] = TouchSensor553;

Transform Transform554 = createNode("Transform");
Transform554.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Shape Shape555 = createNode("Shape");
Shape555.USE = "HAnimJointShape";
Transform554.child = new undefined();

Transform554.child[0] = Shape555;

HAnimSegment552.children[1] = Transform554;

Shape Shape556 = createNode("Shape");
LineSet LineSet557 = createNode("LineSet");
LineSet557.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA558 = createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
LineSet557.color = ColorRGBA558;

Coordinate Coordinate559 = createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet557.coord = Coordinate559;

Shape556.geometry = LineSet557;

HAnimSegment552.children[2] = Shape556;

HAnimJoint551.children = new MFNode();

HAnimJoint551.children[0] = HAnimSegment552;

HAnimJoint HAnimJoint560 = createNode("HAnimJoint");
HAnimJoint560.DEF = "hanim_vt5";
HAnimJoint560.name = "vt5";
HAnimJoint560.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimSegment HAnimSegment561 = createNode("HAnimSegment");
HAnimSegment561.DEF = "hanim_t5";
HAnimSegment561.name = "t5";
TouchSensor TouchSensor562 = createNode("TouchSensor");
TouchSensor562.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment561.children = new MFNode();

HAnimSegment561.children[0] = TouchSensor562;

Transform Transform563 = createNode("Transform");
Transform563.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Shape Shape564 = createNode("Shape");
Shape564.USE = "HAnimJointShape";
Transform563.child = new undefined();

Transform563.child[0] = Shape564;

HAnimSegment561.children[1] = Transform563;

Shape Shape565 = createNode("Shape");
LineSet LineSet566 = createNode("LineSet");
LineSet566.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA567 = createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
LineSet566.color = ColorRGBA567;

Coordinate Coordinate568 = createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet566.coord = Coordinate568;

Shape565.geometry = LineSet566;

HAnimSegment561.children[2] = Shape565;

HAnimJoint560.children = new MFNode();

HAnimJoint560.children[0] = HAnimSegment561;

HAnimJoint HAnimJoint569 = createNode("HAnimJoint");
HAnimJoint569.DEF = "hanim_vt4";
HAnimJoint569.name = "vt4";
HAnimJoint569.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimSegment HAnimSegment570 = createNode("HAnimSegment");
HAnimSegment570.DEF = "hanim_t4";
HAnimSegment570.name = "t4";
TouchSensor TouchSensor571 = createNode("TouchSensor");
TouchSensor571.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment570.children = new MFNode();

HAnimSegment570.children[0] = TouchSensor571;

Transform Transform572 = createNode("Transform");
Transform572.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Shape Shape573 = createNode("Shape");
Shape573.USE = "HAnimJointShape";
Transform572.child = new undefined();

Transform572.child[0] = Shape573;

HAnimSegment570.children[1] = Transform572;

Shape Shape574 = createNode("Shape");
LineSet LineSet575 = createNode("LineSet");
LineSet575.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA576 = createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
LineSet575.color = ColorRGBA576;

Coordinate Coordinate577 = createNode("Coordinate");
Coordinate577.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet575.coord = Coordinate577;

Shape574.geometry = LineSet575;

HAnimSegment570.children[2] = Shape574;

HAnimJoint569.children = new MFNode();

HAnimJoint569.children[0] = HAnimSegment570;

HAnimJoint HAnimJoint578 = createNode("HAnimJoint");
HAnimJoint578.DEF = "hanim_vt3";
HAnimJoint578.name = "vt3";
HAnimJoint578.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimSegment HAnimSegment579 = createNode("HAnimSegment");
HAnimSegment579.DEF = "hanim_t3";
HAnimSegment579.name = "t3";
TouchSensor TouchSensor580 = createNode("TouchSensor");
TouchSensor580.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment579.children = new MFNode();

HAnimSegment579.children[0] = TouchSensor580;

Transform Transform581 = createNode("Transform");
Transform581.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Shape Shape582 = createNode("Shape");
Shape582.USE = "HAnimJointShape";
Transform581.child = new undefined();

Transform581.child[0] = Shape582;

HAnimSegment579.children[1] = Transform581;

Shape Shape583 = createNode("Shape");
LineSet LineSet584 = createNode("LineSet");
LineSet584.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA585 = createNode("ColorRGBA");
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA";
LineSet584.color = ColorRGBA585;

Coordinate Coordinate586 = createNode("Coordinate");
Coordinate586.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet584.coord = Coordinate586;

Shape583.geometry = LineSet584;

HAnimSegment579.children[2] = Shape583;

HAnimJoint578.children = new MFNode();

HAnimJoint578.children[0] = HAnimSegment579;

HAnimJoint HAnimJoint587 = createNode("HAnimJoint");
HAnimJoint587.DEF = "hanim_vt2";
HAnimJoint587.name = "vt2";
HAnimJoint587.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimSegment HAnimSegment588 = createNode("HAnimSegment");
HAnimSegment588.DEF = "hanim_t2";
HAnimSegment588.name = "t2";
TouchSensor TouchSensor589 = createNode("TouchSensor");
TouchSensor589.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment588.children = new MFNode();

HAnimSegment588.children[0] = TouchSensor589;

Transform Transform590 = createNode("Transform");
Transform590.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Shape Shape591 = createNode("Shape");
Shape591.USE = "HAnimJointShape";
Transform590.child = new undefined();

Transform590.child[0] = Shape591;

HAnimSegment588.children[1] = Transform590;

Shape Shape592 = createNode("Shape");
LineSet LineSet593 = createNode("LineSet");
LineSet593.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA594 = createNode("ColorRGBA");
ColorRGBA594.USE = "HAnimSegmentLineColorRGBA";
LineSet593.color = ColorRGBA594;

Coordinate Coordinate595 = createNode("Coordinate");
Coordinate595.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet593.coord = Coordinate595;

Shape592.geometry = LineSet593;

HAnimSegment588.children[2] = Shape592;

HAnimJoint587.children = new MFNode();

HAnimJoint587.children[0] = HAnimSegment588;

HAnimJoint HAnimJoint596 = createNode("HAnimJoint");
HAnimJoint596.DEF = "hanim_vt1";
HAnimJoint596.name = "vt1";
HAnimJoint596.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment597 = createNode("HAnimSegment");
HAnimSegment597.DEF = "hanim_t1";
HAnimSegment597.name = "t1";
TouchSensor TouchSensor598 = createNode("TouchSensor");
TouchSensor598.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment597.children = new MFNode();

HAnimSegment597.children[0] = TouchSensor598;

Transform Transform599 = createNode("Transform");
Transform599.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Shape Shape600 = createNode("Shape");
Shape600.USE = "HAnimJointShape";
Transform599.child = new undefined();

Transform599.child[0] = Shape600;

HAnimSegment597.children[1] = Transform599;

Shape Shape601 = createNode("Shape");
LineSet LineSet602 = createNode("LineSet");
LineSet602.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA603 = createNode("ColorRGBA");
ColorRGBA603.USE = "HAnimSegmentLineColorRGBA";
LineSet602.color = ColorRGBA603;

Coordinate Coordinate604 = createNode("Coordinate");
Coordinate604.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet602.coord = Coordinate604;

Shape601.geometry = LineSet602;

HAnimSegment597.children[2] = Shape601;

Shape Shape605 = createNode("Shape");
LineSet LineSet606 = createNode("LineSet");
LineSet606.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA607 = createNode("ColorRGBA");
ColorRGBA607.USE = "HAnimSegmentLineColorRGBA";
LineSet606.color = ColorRGBA607;

Coordinate Coordinate608 = createNode("Coordinate");
Coordinate608.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet606.coord = Coordinate608;

Shape605.geometry = LineSet606;

HAnimSegment597.children[3] = Shape605;

Shape Shape609 = createNode("Shape");
LineSet LineSet610 = createNode("LineSet");
LineSet610.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA611 = createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
LineSet610.color = ColorRGBA611;

Coordinate Coordinate612 = createNode("Coordinate");
Coordinate612.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet610.coord = Coordinate612;

Shape609.geometry = LineSet610;

HAnimSegment597.children[4] = Shape609;

Shape Shape613 = createNode("Shape");
LineSet LineSet614 = createNode("LineSet");
LineSet614.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA615 = createNode("ColorRGBA");
ColorRGBA615.USE = "HAnimSiteLineColorRGBA";
LineSet614.color = ColorRGBA615;

Coordinate Coordinate616 = createNode("Coordinate");
Coordinate616.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet614.coord = Coordinate616;

Shape613.geometry = LineSet614;

HAnimSegment597.children[5] = Shape613;

Shape Shape617 = createNode("Shape");
LineSet LineSet618 = createNode("LineSet");
LineSet618.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA619 = createNode("ColorRGBA");
ColorRGBA619.USE = "HAnimSiteLineColorRGBA";
LineSet618.color = ColorRGBA619;

Coordinate Coordinate620 = createNode("Coordinate");
Coordinate620.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet618.coord = Coordinate620;

Shape617.geometry = LineSet618;

HAnimSegment597.children[6] = Shape617;

HAnimSite HAnimSite621 = createNode("HAnimSite");
HAnimSite621.DEF = "hanim_suprasternale_pt";
HAnimSite621.name = "suprasternale_pt";
HAnimSite621.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor622 = createNode("TouchSensor");
TouchSensor622.description = "HAnimSite suprasternale";
HAnimSite621.children = new MFNode();

HAnimSite621.children[0] = TouchSensor622;

Shape Shape623 = createNode("Shape");
Shape623.USE = "HAnimSiteShape";
HAnimSite621.children[1] = Shape623;

HAnimSegment597.children[7] = HAnimSite621;

HAnimSite HAnimSite624 = createNode("HAnimSite");
HAnimSite624.DEF = "hanim_cervicale_pt";
HAnimSite624.name = "cervicale_pt";
HAnimSite624.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor625 = createNode("TouchSensor");
TouchSensor625.description = "HAnimSite cervicale";
HAnimSite624.children = new MFNode();

HAnimSite624.children[0] = TouchSensor625;

Shape Shape626 = createNode("Shape");
Shape626.USE = "HAnimSiteShape";
HAnimSite624.children[1] = Shape626;

HAnimSegment597.children[8] = HAnimSite624;

HAnimJoint596.children = new MFNode();

HAnimJoint596.children[0] = HAnimSegment597;

HAnimJoint HAnimJoint627 = createNode("HAnimJoint");
HAnimJoint627.DEF = "hanim_vc7";
HAnimJoint627.name = "vc7";
HAnimJoint627.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimSegment HAnimSegment628 = createNode("HAnimSegment");
HAnimSegment628.DEF = "hanim_c7";
HAnimSegment628.name = "c7";
TouchSensor TouchSensor629 = createNode("TouchSensor");
TouchSensor629.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment628.children = new MFNode();

HAnimSegment628.children[0] = TouchSensor629;

Transform Transform630 = createNode("Transform");
Transform630.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Shape Shape631 = createNode("Shape");
Shape631.USE = "HAnimJointShape";
Transform630.child = new undefined();

Transform630.child[0] = Shape631;

HAnimSegment628.children[1] = Transform630;

Shape Shape632 = createNode("Shape");
LineSet LineSet633 = createNode("LineSet");
LineSet633.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA634 = createNode("ColorRGBA");
ColorRGBA634.USE = "HAnimSegmentLineColorRGBA";
LineSet633.color = ColorRGBA634;

Coordinate Coordinate635 = createNode("Coordinate");
Coordinate635.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet633.coord = Coordinate635;

Shape632.geometry = LineSet633;

HAnimSegment628.children[2] = Shape632;

Shape Shape636 = createNode("Shape");
LineSet LineSet637 = createNode("LineSet");
LineSet637.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA638 = createNode("ColorRGBA");
ColorRGBA638.USE = "HAnimSiteLineColorRGBA";
LineSet637.color = ColorRGBA638;

Coordinate Coordinate639 = createNode("Coordinate");
Coordinate639.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet637.coord = Coordinate639;

Shape636.geometry = LineSet637;

HAnimSegment628.children[3] = Shape636;

Shape Shape640 = createNode("Shape");
LineSet LineSet641 = createNode("LineSet");
LineSet641.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA642 = createNode("ColorRGBA");
ColorRGBA642.USE = "HAnimSiteLineColorRGBA";
LineSet641.color = ColorRGBA642;

Coordinate Coordinate643 = createNode("Coordinate");
Coordinate643.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet641.coord = Coordinate643;

Shape640.geometry = LineSet641;

HAnimSegment628.children[4] = Shape640;

HAnimSite HAnimSite644 = createNode("HAnimSite");
HAnimSite644.DEF = "hanim_r_neck_base_pt";
HAnimSite644.name = "r_neck_base_pt";
HAnimSite644.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor645 = createNode("TouchSensor");
TouchSensor645.description = "HAnimSite r_neck_base";
HAnimSite644.children = new MFNode();

HAnimSite644.children[0] = TouchSensor645;

Shape Shape646 = createNode("Shape");
Shape646.USE = "HAnimSiteShape";
HAnimSite644.children[1] = Shape646;

HAnimSegment628.children[5] = HAnimSite644;

HAnimSite HAnimSite647 = createNode("HAnimSite");
HAnimSite647.DEF = "hanim_l_neck_base_pt";
HAnimSite647.name = "l_neck_base_pt";
HAnimSite647.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor648 = createNode("TouchSensor");
TouchSensor648.description = "HAnimSite l_neck_base";
HAnimSite647.children = new MFNode();

HAnimSite647.children[0] = TouchSensor648;

Shape Shape649 = createNode("Shape");
Shape649.USE = "HAnimSiteShape";
HAnimSite647.children[1] = Shape649;

HAnimSegment628.children[6] = HAnimSite647;

HAnimJoint627.children = new MFNode();

HAnimJoint627.children[0] = HAnimSegment628;

HAnimJoint HAnimJoint650 = createNode("HAnimJoint");
HAnimJoint650.DEF = "hanim_vc6";
HAnimJoint650.name = "vc6";
HAnimJoint650.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimSegment HAnimSegment651 = createNode("HAnimSegment");
HAnimSegment651.DEF = "hanim_c6";
HAnimSegment651.name = "c6";
TouchSensor TouchSensor652 = createNode("TouchSensor");
TouchSensor652.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment651.children = new MFNode();

HAnimSegment651.children[0] = TouchSensor652;

Transform Transform653 = createNode("Transform");
Transform653.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Shape Shape654 = createNode("Shape");
Shape654.USE = "HAnimJointShape";
Transform653.child = new undefined();

Transform653.child[0] = Shape654;

HAnimSegment651.children[1] = Transform653;

Shape Shape655 = createNode("Shape");
LineSet LineSet656 = createNode("LineSet");
LineSet656.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA657 = createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
LineSet656.color = ColorRGBA657;

Coordinate Coordinate658 = createNode("Coordinate");
Coordinate658.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet656.coord = Coordinate658;

Shape655.geometry = LineSet656;

HAnimSegment651.children[2] = Shape655;

HAnimJoint650.children = new MFNode();

HAnimJoint650.children[0] = HAnimSegment651;

HAnimJoint HAnimJoint659 = createNode("HAnimJoint");
HAnimJoint659.DEF = "hanim_vc5";
HAnimJoint659.name = "vc5";
HAnimJoint659.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimSegment HAnimSegment660 = createNode("HAnimSegment");
HAnimSegment660.DEF = "hanim_c5";
HAnimSegment660.name = "c5";
TouchSensor TouchSensor661 = createNode("TouchSensor");
TouchSensor661.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment660.children = new MFNode();

HAnimSegment660.children[0] = TouchSensor661;

Transform Transform662 = createNode("Transform");
Transform662.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Shape Shape663 = createNode("Shape");
Shape663.USE = "HAnimJointShape";
Transform662.child = new undefined();

Transform662.child[0] = Shape663;

HAnimSegment660.children[1] = Transform662;

Shape Shape664 = createNode("Shape");
LineSet LineSet665 = createNode("LineSet");
LineSet665.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA666 = createNode("ColorRGBA");
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA";
LineSet665.color = ColorRGBA666;

Coordinate Coordinate667 = createNode("Coordinate");
Coordinate667.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet665.coord = Coordinate667;

Shape664.geometry = LineSet665;

HAnimSegment660.children[2] = Shape664;

HAnimJoint659.children = new MFNode();

HAnimJoint659.children[0] = HAnimSegment660;

HAnimJoint HAnimJoint668 = createNode("HAnimJoint");
HAnimJoint668.DEF = "hanim_vc4";
HAnimJoint668.name = "vc4";
HAnimJoint668.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment669 = createNode("HAnimSegment");
HAnimSegment669.DEF = "hanim_c4";
HAnimSegment669.name = "c4";
TouchSensor TouchSensor670 = createNode("TouchSensor");
TouchSensor670.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment669.children = new MFNode();

HAnimSegment669.children[0] = TouchSensor670;

Transform Transform671 = createNode("Transform");
Transform671.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Shape Shape672 = createNode("Shape");
Shape672.USE = "HAnimJointShape";
Transform671.child = new undefined();

Transform671.child[0] = Shape672;

HAnimSegment669.children[1] = Transform671;

Shape Shape673 = createNode("Shape");
LineSet LineSet674 = createNode("LineSet");
LineSet674.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA675 = createNode("ColorRGBA");
ColorRGBA675.USE = "HAnimSegmentLineColorRGBA";
LineSet674.color = ColorRGBA675;

Coordinate Coordinate676 = createNode("Coordinate");
Coordinate676.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet674.coord = Coordinate676;

Shape673.geometry = LineSet674;

HAnimSegment669.children[2] = Shape673;

HAnimJoint668.children = new MFNode();

HAnimJoint668.children[0] = HAnimSegment669;

HAnimJoint HAnimJoint677 = createNode("HAnimJoint");
HAnimJoint677.DEF = "hanim_vc3";
HAnimJoint677.name = "vc3";
HAnimJoint677.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimSegment HAnimSegment678 = createNode("HAnimSegment");
HAnimSegment678.DEF = "hanim_c3";
HAnimSegment678.name = "c3";
TouchSensor TouchSensor679 = createNode("TouchSensor");
TouchSensor679.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment678.children = new MFNode();

HAnimSegment678.children[0] = TouchSensor679;

Transform Transform680 = createNode("Transform");
Transform680.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Shape Shape681 = createNode("Shape");
Shape681.USE = "HAnimJointShape";
Transform680.child = new undefined();

Transform680.child[0] = Shape681;

HAnimSegment678.children[1] = Transform680;

Shape Shape682 = createNode("Shape");
LineSet LineSet683 = createNode("LineSet");
LineSet683.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA684 = createNode("ColorRGBA");
ColorRGBA684.USE = "HAnimSegmentLineColorRGBA";
LineSet683.color = ColorRGBA684;

Coordinate Coordinate685 = createNode("Coordinate");
Coordinate685.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet683.coord = Coordinate685;

Shape682.geometry = LineSet683;

HAnimSegment678.children[2] = Shape682;

HAnimJoint677.children = new MFNode();

HAnimJoint677.children[0] = HAnimSegment678;

HAnimJoint HAnimJoint686 = createNode("HAnimJoint");
HAnimJoint686.DEF = "hanim_vc2";
HAnimJoint686.name = "vc2";
HAnimJoint686.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment687 = createNode("HAnimSegment");
HAnimSegment687.DEF = "hanim_c2";
HAnimSegment687.name = "c2";
TouchSensor TouchSensor688 = createNode("TouchSensor");
TouchSensor688.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment687.children = new MFNode();

HAnimSegment687.children[0] = TouchSensor688;

Transform Transform689 = createNode("Transform");
Transform689.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Shape Shape690 = createNode("Shape");
Shape690.USE = "HAnimJointShape";
Transform689.child = new undefined();

Transform689.child[0] = Shape690;

HAnimSegment687.children[1] = Transform689;

Shape Shape691 = createNode("Shape");
LineSet LineSet692 = createNode("LineSet");
LineSet692.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA693 = createNode("ColorRGBA");
ColorRGBA693.USE = "HAnimSegmentLineColorRGBA";
LineSet692.color = ColorRGBA693;

Coordinate Coordinate694 = createNode("Coordinate");
Coordinate694.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet692.coord = Coordinate694;

Shape691.geometry = LineSet692;

HAnimSegment687.children[2] = Shape691;

HAnimJoint686.children = new MFNode();

HAnimJoint686.children[0] = HAnimSegment687;

HAnimJoint HAnimJoint695 = createNode("HAnimJoint");
HAnimJoint695.DEF = "hanim_vc1";
HAnimJoint695.name = "vc1";
HAnimJoint695.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimSegment HAnimSegment696 = createNode("HAnimSegment");
HAnimSegment696.DEF = "hanim_c1";
HAnimSegment696.name = "c1";
TouchSensor TouchSensor697 = createNode("TouchSensor");
TouchSensor697.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment696.children = new MFNode();

HAnimSegment696.children[0] = TouchSensor697;

Transform Transform698 = createNode("Transform");
Transform698.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Shape Shape699 = createNode("Shape");
Shape699.USE = "HAnimJointShape";
Transform698.child = new undefined();

Transform698.child[0] = Shape699;

HAnimSegment696.children[1] = Transform698;

Shape Shape700 = createNode("Shape");
LineSet LineSet701 = createNode("LineSet");
LineSet701.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA702 = createNode("ColorRGBA");
ColorRGBA702.USE = "HAnimSegmentLineColorRGBA";
LineSet701.color = ColorRGBA702;

Coordinate Coordinate703 = createNode("Coordinate");
Coordinate703.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet701.coord = Coordinate703;

Shape700.geometry = LineSet701;

HAnimSegment696.children[2] = Shape700;

HAnimJoint695.children = new MFNode();

HAnimJoint695.children[0] = HAnimSegment696;

HAnimJoint HAnimJoint704 = createNode("HAnimJoint");
HAnimJoint704.DEF = "hanim_skullbase";
HAnimJoint704.name = "skullbase";
HAnimJoint704.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment705 = createNode("HAnimSegment");
HAnimSegment705.DEF = "hanim_skull";
HAnimSegment705.name = "skull";
TouchSensor TouchSensor706 = createNode("TouchSensor");
TouchSensor706.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment705.children = new MFNode();

HAnimSegment705.children[0] = TouchSensor706;

Transform Transform707 = createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape708 = createNode("Shape");
Shape708.USE = "HAnimJointShape";
Transform707.child = new undefined();

Transform707.child[0] = Shape708;

HAnimSegment705.children[1] = Transform707;

Shape Shape709 = createNode("Shape");
LineSet LineSet710 = createNode("LineSet");
LineSet710.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA711 = createNode("ColorRGBA");
ColorRGBA711.USE = "HAnimSegmentLineColorRGBA";
LineSet710.color = ColorRGBA711;

Coordinate Coordinate712 = createNode("Coordinate");
Coordinate712.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet710.coord = Coordinate712;

Shape709.geometry = LineSet710;

HAnimSegment705.children[2] = Shape709;

Shape Shape713 = createNode("Shape");
LineSet LineSet714 = createNode("LineSet");
LineSet714.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA715 = createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
LineSet714.color = ColorRGBA715;

Coordinate Coordinate716 = createNode("Coordinate");
Coordinate716.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet714.coord = Coordinate716;

Shape713.geometry = LineSet714;

HAnimSegment705.children[3] = Shape713;

Shape Shape717 = createNode("Shape");
LineSet LineSet718 = createNode("LineSet");
LineSet718.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA719 = createNode("ColorRGBA");
ColorRGBA719.USE = "HAnimSegmentLineColorRGBA";
LineSet718.color = ColorRGBA719;

Coordinate Coordinate720 = createNode("Coordinate");
Coordinate720.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet718.coord = Coordinate720;

Shape717.geometry = LineSet718;

HAnimSegment705.children[4] = Shape717;

Shape Shape721 = createNode("Shape");
LineSet LineSet722 = createNode("LineSet");
LineSet722.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA723 = createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA723;

Coordinate Coordinate724 = createNode("Coordinate");
Coordinate724.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet722.coord = Coordinate724;

Shape721.geometry = LineSet722;

HAnimSegment705.children[5] = Shape721;

Shape Shape725 = createNode("Shape");
LineSet LineSet726 = createNode("LineSet");
LineSet726.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA727 = createNode("ColorRGBA");
ColorRGBA727.USE = "HAnimSegmentLineColorRGBA";
LineSet726.color = ColorRGBA727;

Coordinate Coordinate728 = createNode("Coordinate");
Coordinate728.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet726.coord = Coordinate728;

Shape725.geometry = LineSet726;

HAnimSegment705.children[6] = Shape725;

Shape Shape729 = createNode("Shape");
LineSet LineSet730 = createNode("LineSet");
LineSet730.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA731 = createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
LineSet730.color = ColorRGBA731;

Coordinate Coordinate732 = createNode("Coordinate");
Coordinate732.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet730.coord = Coordinate732;

Shape729.geometry = LineSet730;

HAnimSegment705.children[7] = Shape729;

Shape Shape733 = createNode("Shape");
LineSet LineSet734 = createNode("LineSet");
LineSet734.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA735 = createNode("ColorRGBA");
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA";
LineSet734.color = ColorRGBA735;

Coordinate Coordinate736 = createNode("Coordinate");
Coordinate736.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet734.coord = Coordinate736;

Shape733.geometry = LineSet734;

HAnimSegment705.children[8] = Shape733;

Shape Shape737 = createNode("Shape");
LineSet LineSet738 = createNode("LineSet");
LineSet738.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA739 = createNode("ColorRGBA");
ColorRGBA739.USE = "HAnimSiteLineColorRGBA";
LineSet738.color = ColorRGBA739;

Coordinate Coordinate740 = createNode("Coordinate");
Coordinate740.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet738.coord = Coordinate740;

Shape737.geometry = LineSet738;

HAnimSegment705.children[9] = Shape737;

Shape Shape741 = createNode("Shape");
LineSet LineSet742 = createNode("LineSet");
LineSet742.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA743 = createNode("ColorRGBA");
ColorRGBA743.USE = "HAnimSiteLineColorRGBA";
LineSet742.color = ColorRGBA743;

Coordinate Coordinate744 = createNode("Coordinate");
Coordinate744.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet742.coord = Coordinate744;

Shape741.geometry = LineSet742;

HAnimSegment705.children[10] = Shape741;

Shape Shape745 = createNode("Shape");
LineSet LineSet746 = createNode("LineSet");
LineSet746.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA747 = createNode("ColorRGBA");
ColorRGBA747.USE = "HAnimSiteLineColorRGBA";
LineSet746.color = ColorRGBA747;

Coordinate Coordinate748 = createNode("Coordinate");
Coordinate748.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet746.coord = Coordinate748;

Shape745.geometry = LineSet746;

HAnimSegment705.children[11] = Shape745;

Shape Shape749 = createNode("Shape");
LineSet LineSet750 = createNode("LineSet");
LineSet750.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA751 = createNode("ColorRGBA");
ColorRGBA751.USE = "HAnimSiteLineColorRGBA";
LineSet750.color = ColorRGBA751;

Coordinate Coordinate752 = createNode("Coordinate");
Coordinate752.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet750.coord = Coordinate752;

Shape749.geometry = LineSet750;

HAnimSegment705.children[12] = Shape749;

Shape Shape753 = createNode("Shape");
LineSet LineSet754 = createNode("LineSet");
LineSet754.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA755 = createNode("ColorRGBA");
ColorRGBA755.USE = "HAnimSiteLineColorRGBA";
LineSet754.color = ColorRGBA755;

Coordinate Coordinate756 = createNode("Coordinate");
Coordinate756.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet754.coord = Coordinate756;

Shape753.geometry = LineSet754;

HAnimSegment705.children[13] = Shape753;

Shape Shape757 = createNode("Shape");
LineSet LineSet758 = createNode("LineSet");
LineSet758.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA759 = createNode("ColorRGBA");
ColorRGBA759.USE = "HAnimSiteLineColorRGBA";
LineSet758.color = ColorRGBA759;

Coordinate Coordinate760 = createNode("Coordinate");
Coordinate760.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet758.coord = Coordinate760;

Shape757.geometry = LineSet758;

HAnimSegment705.children[14] = Shape757;

Shape Shape761 = createNode("Shape");
LineSet LineSet762 = createNode("LineSet");
LineSet762.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA763 = createNode("ColorRGBA");
ColorRGBA763.USE = "HAnimSiteLineColorRGBA";
LineSet762.color = ColorRGBA763;

Coordinate Coordinate764 = createNode("Coordinate");
Coordinate764.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet762.coord = Coordinate764;

Shape761.geometry = LineSet762;

HAnimSegment705.children[15] = Shape761;

Shape Shape765 = createNode("Shape");
LineSet LineSet766 = createNode("LineSet");
LineSet766.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA767 = createNode("ColorRGBA");
ColorRGBA767.USE = "HAnimSiteLineColorRGBA";
LineSet766.color = ColorRGBA767;

Coordinate Coordinate768 = createNode("Coordinate");
Coordinate768.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet766.coord = Coordinate768;

Shape765.geometry = LineSet766;

HAnimSegment705.children[16] = Shape765;

Shape Shape769 = createNode("Shape");
LineSet LineSet770 = createNode("LineSet");
LineSet770.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA771 = createNode("ColorRGBA");
ColorRGBA771.USE = "HAnimSiteLineColorRGBA";
LineSet770.color = ColorRGBA771;

Coordinate Coordinate772 = createNode("Coordinate");
Coordinate772.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet770.coord = Coordinate772;

Shape769.geometry = LineSet770;

HAnimSegment705.children[17] = Shape769;

Shape Shape773 = createNode("Shape");
LineSet LineSet774 = createNode("LineSet");
LineSet774.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA775 = createNode("ColorRGBA");
ColorRGBA775.USE = "HAnimSiteLineColorRGBA";
LineSet774.color = ColorRGBA775;

Coordinate Coordinate776 = createNode("Coordinate");
Coordinate776.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet774.coord = Coordinate776;

Shape773.geometry = LineSet774;

HAnimSegment705.children[18] = Shape773;

HAnimSite HAnimSite777 = createNode("HAnimSite");
HAnimSite777.DEF = "hanim_skull_tip";
HAnimSite777.name = "skull_tip";
HAnimSite777.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor778 = createNode("TouchSensor");
TouchSensor778.description = "HAnimSite skull_tip";
HAnimSite777.children = new MFNode();

HAnimSite777.children[0] = TouchSensor778;

Shape Shape779 = createNode("Shape");
Shape779.USE = "HAnimSiteShape";
HAnimSite777.children[1] = Shape779;

HAnimSegment705.children[19] = HAnimSite777;

HAnimSite HAnimSite780 = createNode("HAnimSite");
HAnimSite780.DEF = "hanim_sellion_pt";
HAnimSite780.name = "sellion_pt";
HAnimSite780.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor781 = createNode("TouchSensor");
TouchSensor781.description = "HAnimSite sellion";
HAnimSite780.children = new MFNode();

HAnimSite780.children[0] = TouchSensor781;

Shape Shape782 = createNode("Shape");
Shape782.USE = "HAnimSiteShape";
HAnimSite780.children[1] = Shape782;

HAnimSegment705.children[20] = HAnimSite780;

HAnimSite HAnimSite783 = createNode("HAnimSite");
HAnimSite783.DEF = "hanim_r_infraorbitale_pt";
HAnimSite783.name = "r_infraorbitale_pt";
HAnimSite783.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor784 = createNode("TouchSensor");
TouchSensor784.description = "HAnimSite r_infraorbitale";
HAnimSite783.children = new MFNode();

HAnimSite783.children[0] = TouchSensor784;

Shape Shape785 = createNode("Shape");
Shape785.USE = "HAnimSiteShape";
HAnimSite783.children[1] = Shape785;

HAnimSegment705.children[21] = HAnimSite783;

HAnimSite HAnimSite786 = createNode("HAnimSite");
HAnimSite786.DEF = "hanim_l_infraorbitale_pt";
HAnimSite786.name = "l_infraorbitale_pt";
HAnimSite786.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor787 = createNode("TouchSensor");
TouchSensor787.description = "HAnimSite l_infraorbitale";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

Shape Shape788 = createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

HAnimSegment705.children[22] = HAnimSite786;

HAnimSite HAnimSite789 = createNode("HAnimSite");
HAnimSite789.DEF = "hanim_supramenton_pt";
HAnimSite789.name = "supramenton_pt";
HAnimSite789.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor790 = createNode("TouchSensor");
TouchSensor790.description = "HAnimSite supramenton";
HAnimSite789.children = new MFNode();

HAnimSite789.children[0] = TouchSensor790;

Shape Shape791 = createNode("Shape");
Shape791.USE = "HAnimSiteShape";
HAnimSite789.children[1] = Shape791;

HAnimSegment705.children[23] = HAnimSite789;

HAnimSite HAnimSite792 = createNode("HAnimSite");
HAnimSite792.DEF = "hanim_r_tragion_pt";
HAnimSite792.name = "r_tragion_pt";
HAnimSite792.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor793 = createNode("TouchSensor");
TouchSensor793.description = "HAnimSite r_tragion";
HAnimSite792.children = new MFNode();

HAnimSite792.children[0] = TouchSensor793;

Shape Shape794 = createNode("Shape");
Shape794.USE = "HAnimSiteShape";
HAnimSite792.children[1] = Shape794;

HAnimSegment705.children[24] = HAnimSite792;

HAnimSite HAnimSite795 = createNode("HAnimSite");
HAnimSite795.DEF = "hanim_r_gonion_pt";
HAnimSite795.name = "r_gonion_pt";
HAnimSite795.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor796 = createNode("TouchSensor");
TouchSensor796.description = "HAnimSite r_gonion";
HAnimSite795.children = new MFNode();

HAnimSite795.children[0] = TouchSensor796;

Shape Shape797 = createNode("Shape");
Shape797.USE = "HAnimSiteShape";
HAnimSite795.children[1] = Shape797;

HAnimSegment705.children[25] = HAnimSite795;

HAnimSite HAnimSite798 = createNode("HAnimSite");
HAnimSite798.DEF = "hanim_l_tragion_pt";
HAnimSite798.name = "l_tragion_pt";
HAnimSite798.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor799 = createNode("TouchSensor");
TouchSensor799.description = "HAnimSite l_tragion";
HAnimSite798.children = new MFNode();

HAnimSite798.children[0] = TouchSensor799;

Shape Shape800 = createNode("Shape");
Shape800.USE = "HAnimSiteShape";
HAnimSite798.children[1] = Shape800;

HAnimSegment705.children[26] = HAnimSite798;

HAnimSite HAnimSite801 = createNode("HAnimSite");
HAnimSite801.DEF = "hanim_l_gonion_pt";
HAnimSite801.name = "l_gonion_pt";
HAnimSite801.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor802 = createNode("TouchSensor");
TouchSensor802.description = "HAnimSite l_gonion";
HAnimSite801.children = new MFNode();

HAnimSite801.children[0] = TouchSensor802;

Shape Shape803 = createNode("Shape");
Shape803.USE = "HAnimSiteShape";
HAnimSite801.children[1] = Shape803;

HAnimSegment705.children[27] = HAnimSite801;

HAnimSite HAnimSite804 = createNode("HAnimSite");
HAnimSite804.DEF = "hanim_nuchale_pt";
HAnimSite804.name = "nuchale_pt";
HAnimSite804.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor805 = createNode("TouchSensor");
TouchSensor805.description = "HAnimSite nuchale";
HAnimSite804.children = new MFNode();

HAnimSite804.children[0] = TouchSensor805;

Shape Shape806 = createNode("Shape");
Shape806.USE = "HAnimSiteShape";
HAnimSite804.children[1] = Shape806;

HAnimSegment705.children[28] = HAnimSite804;

HAnimJoint704.children = new MFNode();

HAnimJoint704.children[0] = HAnimSegment705;

HAnimJoint HAnimJoint807 = createNode("HAnimJoint");
HAnimJoint807.DEF = "hanim_l_eyeball_joint";
HAnimJoint807.name = "l_eyeball_joint";
HAnimJoint807.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment808 = createNode("HAnimSegment");
HAnimSegment808.DEF = "hanim_l_eyeball";
HAnimSegment808.name = "l_eyeball";
TouchSensor TouchSensor809 = createNode("TouchSensor");
TouchSensor809.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment808.children = new MFNode();

HAnimSegment808.children[0] = TouchSensor809;

Transform Transform810 = createNode("Transform");
Transform810.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape811 = createNode("Shape");
Shape811.USE = "HAnimJointShape";
Transform810.child = new undefined();

Transform810.child[0] = Shape811;

HAnimSegment808.children[1] = Transform810;

Shape Shape812 = createNode("Shape");
LineSet LineSet813 = createNode("LineSet");
LineSet813.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA814 = createNode("ColorRGBA");
ColorRGBA814.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA814.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet813.color = ColorRGBA814;

Coordinate Coordinate815 = createNode("Coordinate");
Coordinate815.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet813.coord = Coordinate815;

Shape812.geometry = LineSet813;

HAnimSegment808.children[2] = Shape812;

HAnimSite HAnimSite816 = createNode("HAnimSite");
HAnimSite816.DEF = "hanim_l_eyeball_site_view";
HAnimSite816.name = "l_eyeball_site_view";
HAnimSite816.translation = new SFVec3f(new float[0.034,1.64,0.05]);
TouchSensor TouchSensor817 = createNode("TouchSensor");
TouchSensor817.description = "HAnimSite l_eyeball_site_view";
HAnimSite816.children = new MFNode();

HAnimSite816.children[0] = TouchSensor817;

Shape Shape818 = createNode("Shape");
Shape818.USE = "HAnimSiteShape";
HAnimSite816.children[1] = Shape818;

Viewpoint Viewpoint819 = createNode("Viewpoint");
Viewpoint819.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint819.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint819.position = new SFVec3f(new float[0,0,0]);
Viewpoint819.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite816.children[2] = Viewpoint819;

Anchor Anchor820 = createNode("Anchor");
Anchor820.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor820.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
LOD LOD821 = createNode("LOD");
LOD821.forceTransitions = True;
LOD821.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo822 = createNode("WorldInfo");
WorldInfo822.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD821.children = new MFNode();

LOD821.children[0] = WorldInfo822;

Shape Shape823 = createNode("Shape");
Shape823.DEF = "HAnimSiteViewpointShape";
Appearance Appearance824 = createNode("Appearance");
Material Material825 = createNode("Material");
Material825.diffuseColor = new SFColor(new float[0,0,1]);
Material825.transparency = 0.6;
Appearance824.material = Material825;

Shape823.appearance = Appearance824;

IndexedFaceSet IndexedFaceSet826 = createNode("IndexedFaceSet");
IndexedFaceSet826.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet826.creaseAngle = 0.5;
IndexedFaceSet826.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate827 = createNode("Coordinate");
Coordinate827.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet826.coord = Coordinate827;

Shape823.geometry = IndexedFaceSet826;

LOD821.children[1] = Shape823;

Anchor820.children = new MFNode();

Anchor820.children[0] = LOD821;

HAnimSite816.children[3] = Anchor820;

HAnimSegment808.children[3] = HAnimSite816;

HAnimJoint807.children = new MFNode();

HAnimJoint807.children[0] = HAnimSegment808;

HAnimJoint704.children[1] = HAnimJoint807;

HAnimJoint HAnimJoint828 = createNode("HAnimJoint");
HAnimJoint828.DEF = "hanim_l_eyelid_joint";
HAnimJoint828.name = "l_eyelid_joint";
HAnimJoint828.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment829 = createNode("HAnimSegment");
HAnimSegment829.DEF = "hanim_l_eyelid";
HAnimSegment829.name = "l_eyelid";
TouchSensor TouchSensor830 = createNode("TouchSensor");
TouchSensor830.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment829.children = new MFNode();

HAnimSegment829.children[0] = TouchSensor830;

Transform Transform831 = createNode("Transform");
Transform831.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape832 = createNode("Shape");
Shape832.USE = "HAnimJointShape";
Transform831.child = new undefined();

Transform831.child[0] = Shape832;

HAnimSegment829.children[1] = Transform831;

HAnimJoint828.children = new MFNode();

HAnimJoint828.children[0] = HAnimSegment829;

HAnimJoint704.children[2] = HAnimJoint828;

HAnimJoint HAnimJoint833 = createNode("HAnimJoint");
HAnimJoint833.DEF = "hanim_l_eyebrow_joint";
HAnimJoint833.name = "l_eyebrow_joint";
HAnimJoint833.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimSegment HAnimSegment834 = createNode("HAnimSegment");
HAnimSegment834.DEF = "hanim_l_eyebrow";
HAnimSegment834.name = "l_eyebrow";
TouchSensor TouchSensor835 = createNode("TouchSensor");
TouchSensor835.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment834.children = new MFNode();

HAnimSegment834.children[0] = TouchSensor835;

Transform Transform836 = createNode("Transform");
Transform836.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
Shape Shape837 = createNode("Shape");
Shape837.USE = "HAnimJointShape";
Transform836.child = new undefined();

Transform836.child[0] = Shape837;

HAnimSegment834.children[1] = Transform836;

HAnimJoint833.children = new MFNode();

HAnimJoint833.children[0] = HAnimSegment834;

HAnimJoint704.children[3] = HAnimJoint833;

HAnimJoint HAnimJoint838 = createNode("HAnimJoint");
HAnimJoint838.DEF = "hanim_r_eyeball_joint";
HAnimJoint838.name = "r_eyeball_joint";
HAnimJoint838.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment839 = createNode("HAnimSegment");
HAnimSegment839.DEF = "hanim_r_eyeball";
HAnimSegment839.name = "r_eyeball";
TouchSensor TouchSensor840 = createNode("TouchSensor");
TouchSensor840.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment839.children = new MFNode();

HAnimSegment839.children[0] = TouchSensor840;

Transform Transform841 = createNode("Transform");
Transform841.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape842 = createNode("Shape");
Shape842.USE = "HAnimJointShape";
Transform841.child = new undefined();

Transform841.child[0] = Shape842;

HAnimSegment839.children[1] = Transform841;

Shape Shape843 = createNode("Shape");
LineSet LineSet844 = createNode("LineSet");
LineSet844.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA845 = createNode("ColorRGBA");
ColorRGBA845.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet844.color = ColorRGBA845;

Coordinate Coordinate846 = createNode("Coordinate");
Coordinate846.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet844.coord = Coordinate846;

Shape843.geometry = LineSet844;

HAnimSegment839.children[2] = Shape843;

HAnimSite HAnimSite847 = createNode("HAnimSite");
HAnimSite847.DEF = "hanim_r_eyeball_site_view";
HAnimSite847.name = "r_eyeball_site_view";
HAnimSite847.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
TouchSensor TouchSensor848 = createNode("TouchSensor");
TouchSensor848.description = "HAnimSite r_eyeball_site_view";
HAnimSite847.children = new MFNode();

HAnimSite847.children[0] = TouchSensor848;

Shape Shape849 = createNode("Shape");
Shape849.USE = "HAnimSiteShape";
HAnimSite847.children[1] = Shape849;

Viewpoint Viewpoint850 = createNode("Viewpoint");
Viewpoint850.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint850.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint850.position = new SFVec3f(new float[0,0,0]);
Viewpoint850.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite847.children[2] = Viewpoint850;

Anchor Anchor851 = createNode("Anchor");
Anchor851.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor851.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
LOD LOD852 = createNode("LOD");
LOD852.forceTransitions = True;
LOD852.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo853 = createNode("WorldInfo");
WorldInfo853.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD852.children = new MFNode();

LOD852.children[0] = WorldInfo853;

Shape Shape854 = createNode("Shape");
Shape854.USE = "HAnimSiteViewpointShape";
LOD852.children[1] = Shape854;

Anchor851.children = new MFNode();

Anchor851.children[0] = LOD852;

HAnimSite847.children[3] = Anchor851;

HAnimSegment839.children[3] = HAnimSite847;

HAnimJoint838.children = new MFNode();

HAnimJoint838.children[0] = HAnimSegment839;

HAnimJoint704.children[4] = HAnimJoint838;

HAnimJoint HAnimJoint855 = createNode("HAnimJoint");
HAnimJoint855.DEF = "hanim_r_eyelid_joint";
HAnimJoint855.name = "r_eyelid_joint";
HAnimJoint855.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment856 = createNode("HAnimSegment");
HAnimSegment856.DEF = "hanim_r_eyelid";
HAnimSegment856.name = "r_eyelid";
TouchSensor TouchSensor857 = createNode("TouchSensor");
TouchSensor857.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment856.children = new MFNode();

HAnimSegment856.children[0] = TouchSensor857;

Transform Transform858 = createNode("Transform");
Transform858.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape859 = createNode("Shape");
Shape859.USE = "HAnimJointShape";
Transform858.child = new undefined();

Transform858.child[0] = Shape859;

HAnimSegment856.children[1] = Transform858;

HAnimJoint855.children = new MFNode();

HAnimJoint855.children[0] = HAnimSegment856;

HAnimJoint704.children[5] = HAnimJoint855;

HAnimJoint HAnimJoint860 = createNode("HAnimJoint");
HAnimJoint860.DEF = "hanim_r_eyebrow_joint";
HAnimJoint860.name = "r_eyebrow_joint";
HAnimJoint860.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimSegment HAnimSegment861 = createNode("HAnimSegment");
HAnimSegment861.DEF = "hanim_r_eyebrow";
HAnimSegment861.name = "r_eyebrow";
TouchSensor TouchSensor862 = createNode("TouchSensor");
TouchSensor862.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment861.children = new MFNode();

HAnimSegment861.children[0] = TouchSensor862;

Transform Transform863 = createNode("Transform");
Transform863.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
Shape Shape864 = createNode("Shape");
Shape864.USE = "HAnimJointShape";
Transform863.child = new undefined();

Transform863.child[0] = Shape864;

HAnimSegment861.children[1] = Transform863;

HAnimJoint860.children = new MFNode();

HAnimJoint860.children[0] = HAnimSegment861;

HAnimJoint704.children[6] = HAnimJoint860;

HAnimJoint HAnimJoint865 = createNode("HAnimJoint");
HAnimJoint865.DEF = "hanim_temporomandibular";
HAnimJoint865.name = "temporomandibular";
HAnimJoint865.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimSegment HAnimSegment866 = createNode("HAnimSegment");
HAnimSegment866.DEF = "hanim_jaw";
HAnimSegment866.name = "jaw";
TouchSensor TouchSensor867 = createNode("TouchSensor");
TouchSensor867.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment866.children = new MFNode();

HAnimSegment866.children[0] = TouchSensor867;

Transform Transform868 = createNode("Transform");
Transform868.translation = new SFVec3f(new float[0,1.63,0.015]);
Shape Shape869 = createNode("Shape");
Shape869.USE = "HAnimJointShape";
Transform868.child = new undefined();

Transform868.child[0] = Shape869;

HAnimSegment866.children[1] = Transform868;

Shape Shape870 = createNode("Shape");
LineSet LineSet871 = createNode("LineSet");
LineSet871.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA872 = createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSiteLineColorRGBA";
LineSet871.color = ColorRGBA872;

Coordinate Coordinate873 = createNode("Coordinate");
Coordinate873.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet871.coord = Coordinate873;

Shape870.geometry = LineSet871;

HAnimSegment866.children[2] = Shape870;

Shape Shape874 = createNode("Shape");
LineSet LineSet875 = createNode("LineSet");
LineSet875.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA876 = createNode("ColorRGBA");
ColorRGBA876.USE = "HAnimSiteLineColorRGBA";
LineSet875.color = ColorRGBA876;

Coordinate Coordinate877 = createNode("Coordinate");
Coordinate877.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet875.coord = Coordinate877;

Shape874.geometry = LineSet875;

HAnimSegment866.children[3] = Shape874;

HAnimSite HAnimSite878 = createNode("HAnimSite");
HAnimSite878.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite878.name = "temporomandibular_l_site_pt";
HAnimSite878.translation = new SFVec3f(new float[0.045,1.63,0]);
TouchSensor TouchSensor879 = createNode("TouchSensor");
TouchSensor879.description = "HAnimSite temporomandibular_l_site";
HAnimSite878.children = new MFNode();

HAnimSite878.children[0] = TouchSensor879;

Shape Shape880 = createNode("Shape");
Shape880.USE = "HAnimSiteShape";
HAnimSite878.children[1] = Shape880;

HAnimSegment866.children[4] = HAnimSite878;

HAnimSite HAnimSite881 = createNode("HAnimSite");
HAnimSite881.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite881.name = "temporomandibular_r_site_pt";
HAnimSite881.translation = new SFVec3f(new float[-0.045,1.63,0]);
TouchSensor TouchSensor882 = createNode("TouchSensor");
TouchSensor882.description = "HAnimSite temporomandibular_r_site";
HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = TouchSensor882;

Shape Shape883 = createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881.children[1] = Shape883;

HAnimSegment866.children[5] = HAnimSite881;

HAnimJoint865.children = new MFNode();

HAnimJoint865.children[0] = HAnimSegment866;

HAnimJoint704.children[7] = HAnimJoint865;

HAnimJoint695.children[1] = HAnimJoint704;

HAnimJoint686.children[1] = HAnimJoint695;

HAnimJoint677.children[1] = HAnimJoint686;

HAnimJoint668.children[1] = HAnimJoint677;

HAnimJoint659.children[1] = HAnimJoint668;

HAnimJoint650.children[1] = HAnimJoint659;

HAnimJoint627.children[1] = HAnimJoint650;

HAnimJoint596.children[1] = HAnimJoint627;

HAnimJoint HAnimJoint884 = createNode("HAnimJoint");
HAnimJoint884.DEF = "hanim_l_sternoclavicular";
HAnimJoint884.name = "l_sternoclavicular";
HAnimJoint884.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment885 = createNode("HAnimSegment");
HAnimSegment885.DEF = "hanim_l_clavicle";
HAnimSegment885.name = "l_clavicle";
TouchSensor TouchSensor886 = createNode("TouchSensor");
TouchSensor886.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment885.children = new MFNode();

HAnimSegment885.children[0] = TouchSensor886;

Transform Transform887 = createNode("Transform");
Transform887.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape888 = createNode("Shape");
Shape888.USE = "HAnimJointShape";
Transform887.child = new undefined();

Transform887.child[0] = Shape888;

HAnimSegment885.children[1] = Transform887;

Shape Shape889 = createNode("Shape");
LineSet LineSet890 = createNode("LineSet");
LineSet890.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA891 = createNode("ColorRGBA");
ColorRGBA891.USE = "HAnimSegmentLineColorRGBA";
LineSet890.color = ColorRGBA891;

Coordinate Coordinate892 = createNode("Coordinate");
Coordinate892.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet890.coord = Coordinate892;

Shape889.geometry = LineSet890;

HAnimSegment885.children[2] = Shape889;

Shape Shape893 = createNode("Shape");
LineSet LineSet894 = createNode("LineSet");
LineSet894.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA895 = createNode("ColorRGBA");
ColorRGBA895.USE = "HAnimSiteLineColorRGBA";
LineSet894.color = ColorRGBA895;

Coordinate Coordinate896 = createNode("Coordinate");
Coordinate896.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet894.coord = Coordinate896;

Shape893.geometry = LineSet894;

HAnimSegment885.children[3] = Shape893;

Shape Shape897 = createNode("Shape");
LineSet LineSet898 = createNode("LineSet");
LineSet898.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA899 = createNode("ColorRGBA");
ColorRGBA899.USE = "HAnimSiteLineColorRGBA";
LineSet898.color = ColorRGBA899;

Coordinate Coordinate900 = createNode("Coordinate");
Coordinate900.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet898.coord = Coordinate900;

Shape897.geometry = LineSet898;

HAnimSegment885.children[4] = Shape897;

Shape Shape901 = createNode("Shape");
LineSet LineSet902 = createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA903 = createNode("ColorRGBA");
ColorRGBA903.USE = "HAnimSiteLineColorRGBA";
LineSet902.color = ColorRGBA903;

Coordinate Coordinate904 = createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet902.coord = Coordinate904;

Shape901.geometry = LineSet902;

HAnimSegment885.children[5] = Shape901;

Shape Shape905 = createNode("Shape");
LineSet LineSet906 = createNode("LineSet");
LineSet906.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA907 = createNode("ColorRGBA");
ColorRGBA907.USE = "HAnimSiteLineColorRGBA";
LineSet906.color = ColorRGBA907;

Coordinate Coordinate908 = createNode("Coordinate");
Coordinate908.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet906.coord = Coordinate908;

Shape905.geometry = LineSet906;

HAnimSegment885.children[6] = Shape905;

HAnimSite HAnimSite909 = createNode("HAnimSite");
HAnimSite909.DEF = "hanim_l_clavicale_pt";
HAnimSite909.name = "l_clavicale_pt";
HAnimSite909.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor910 = createNode("TouchSensor");
TouchSensor910.description = "HAnimSite l_clavicale";
HAnimSite909.children = new MFNode();

HAnimSite909.children[0] = TouchSensor910;

Shape Shape911 = createNode("Shape");
Shape911.USE = "HAnimSiteShape";
HAnimSite909.children[1] = Shape911;

HAnimSegment885.children[7] = HAnimSite909;

HAnimSite HAnimSite912 = createNode("HAnimSite");
HAnimSite912.DEF = "hanim_l_acromion_pt";
HAnimSite912.name = "l_acromion_pt";
HAnimSite912.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor913 = createNode("TouchSensor");
TouchSensor913.description = "HAnimSite l_acromion";
HAnimSite912.children = new MFNode();

HAnimSite912.children[0] = TouchSensor913;

Shape Shape914 = createNode("Shape");
Shape914.USE = "HAnimSiteShape";
HAnimSite912.children[1] = Shape914;

HAnimSegment885.children[8] = HAnimSite912;

HAnimSite HAnimSite915 = createNode("HAnimSite");
HAnimSite915.DEF = "hanim_l_axilla_ant_pt";
HAnimSite915.name = "l_axilla_ant_pt";
HAnimSite915.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor916 = createNode("TouchSensor");
TouchSensor916.description = "HAnimSite l_axilla_ant";
HAnimSite915.children = new MFNode();

HAnimSite915.children[0] = TouchSensor916;

Shape Shape917 = createNode("Shape");
Shape917.USE = "HAnimSiteShape";
HAnimSite915.children[1] = Shape917;

HAnimSegment885.children[9] = HAnimSite915;

HAnimSite HAnimSite918 = createNode("HAnimSite");
HAnimSite918.DEF = "hanim_l_axilla_post_pt";
HAnimSite918.name = "l_axilla_post_pt";
HAnimSite918.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor919 = createNode("TouchSensor");
TouchSensor919.description = "HAnimSite l_axilla_post";
HAnimSite918.children = new MFNode();

HAnimSite918.children[0] = TouchSensor919;

Shape Shape920 = createNode("Shape");
Shape920.USE = "HAnimSiteShape";
HAnimSite918.children[1] = Shape920;

HAnimSegment885.children[10] = HAnimSite918;

HAnimJoint884.children = new MFNode();

HAnimJoint884.children[0] = HAnimSegment885;

HAnimJoint HAnimJoint921 = createNode("HAnimJoint");
HAnimJoint921.DEF = "hanim_l_acromioclavicular";
HAnimJoint921.name = "l_acromioclavicular";
HAnimJoint921.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment922 = createNode("HAnimSegment");
HAnimSegment922.DEF = "hanim_l_scapula";
HAnimSegment922.name = "l_scapula";
TouchSensor TouchSensor923 = createNode("TouchSensor");
TouchSensor923.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment922.children = new MFNode();

HAnimSegment922.children[0] = TouchSensor923;

Transform Transform924 = createNode("Transform");
Transform924.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape925 = createNode("Shape");
Shape925.USE = "HAnimJointShape";
Transform924.child = new undefined();

Transform924.child[0] = Shape925;

HAnimSegment922.children[1] = Transform924;

Shape Shape926 = createNode("Shape");
LineSet LineSet927 = createNode("LineSet");
LineSet927.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA928 = createNode("ColorRGBA");
ColorRGBA928.USE = "HAnimSegmentLineColorRGBA";
LineSet927.color = ColorRGBA928;

Coordinate Coordinate929 = createNode("Coordinate");
Coordinate929.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet927.coord = Coordinate929;

Shape926.geometry = LineSet927;

HAnimSegment922.children[2] = Shape926;

HAnimJoint921.children = new MFNode();

HAnimJoint921.children[0] = HAnimSegment922;

HAnimJoint HAnimJoint930 = createNode("HAnimJoint");
HAnimJoint930.DEF = "hanim_l_shoulder";
HAnimJoint930.name = "l_shoulder";
HAnimJoint930.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment931 = createNode("HAnimSegment");
HAnimSegment931.DEF = "hanim_l_upperarm";
HAnimSegment931.name = "l_upperarm";
TouchSensor TouchSensor932 = createNode("TouchSensor");
TouchSensor932.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment931.children = new MFNode();

HAnimSegment931.children[0] = TouchSensor932;

Transform Transform933 = createNode("Transform");
Transform933.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape934 = createNode("Shape");
Shape934.USE = "HAnimJointShape";
Transform933.child = new undefined();

Transform933.child[0] = Shape934;

HAnimSegment931.children[1] = Transform933;

Shape Shape935 = createNode("Shape");
LineSet LineSet936 = createNode("LineSet");
LineSet936.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA937 = createNode("ColorRGBA");
ColorRGBA937.USE = "HAnimSegmentLineColorRGBA";
LineSet936.color = ColorRGBA937;

Coordinate Coordinate938 = createNode("Coordinate");
Coordinate938.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet936.coord = Coordinate938;

Shape935.geometry = LineSet936;

HAnimSegment931.children[2] = Shape935;

Shape Shape939 = createNode("Shape");
LineSet LineSet940 = createNode("LineSet");
LineSet940.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA941 = createNode("ColorRGBA");
ColorRGBA941.USE = "HAnimSiteLineColorRGBA";
LineSet940.color = ColorRGBA941;

Coordinate Coordinate942 = createNode("Coordinate");
Coordinate942.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet940.coord = Coordinate942;

Shape939.geometry = LineSet940;

HAnimSegment931.children[3] = Shape939;

HAnimSite HAnimSite943 = createNode("HAnimSite");
HAnimSite943.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite943.name = "l_humeral_lateral_epicn_pt";
HAnimSite943.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor944 = createNode("TouchSensor");
TouchSensor944.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite943.children = new MFNode();

HAnimSite943.children[0] = TouchSensor944;

Shape Shape945 = createNode("Shape");
Shape945.USE = "HAnimSiteShape";
HAnimSite943.children[1] = Shape945;

HAnimSegment931.children[4] = HAnimSite943;

HAnimJoint930.children = new MFNode();

HAnimJoint930.children[0] = HAnimSegment931;

HAnimJoint HAnimJoint946 = createNode("HAnimJoint");
HAnimJoint946.DEF = "hanim_l_elbow";
HAnimJoint946.name = "l_elbow";
HAnimJoint946.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment947 = createNode("HAnimSegment");
HAnimSegment947.DEF = "hanim_l_forearm";
HAnimSegment947.name = "l_forearm";
TouchSensor TouchSensor948 = createNode("TouchSensor");
TouchSensor948.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment947.children = new MFNode();

HAnimSegment947.children[0] = TouchSensor948;

Transform Transform949 = createNode("Transform");
Transform949.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape950 = createNode("Shape");
Shape950.USE = "HAnimJointShape";
Transform949.child = new undefined();

Transform949.child[0] = Shape950;

HAnimSegment947.children[1] = Transform949;

Shape Shape951 = createNode("Shape");
LineSet LineSet952 = createNode("LineSet");
LineSet952.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA953 = createNode("ColorRGBA");
ColorRGBA953.USE = "HAnimSegmentLineColorRGBA";
LineSet952.color = ColorRGBA953;

Coordinate Coordinate954 = createNode("Coordinate");
Coordinate954.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet952.coord = Coordinate954;

Shape951.geometry = LineSet952;

HAnimSegment947.children[2] = Shape951;

Shape Shape955 = createNode("Shape");
LineSet LineSet956 = createNode("LineSet");
LineSet956.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA957 = createNode("ColorRGBA");
ColorRGBA957.USE = "HAnimSiteLineColorRGBA";
LineSet956.color = ColorRGBA957;

Coordinate Coordinate958 = createNode("Coordinate");
Coordinate958.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet956.coord = Coordinate958;

Shape955.geometry = LineSet956;

HAnimSegment947.children[3] = Shape955;

Shape Shape959 = createNode("Shape");
LineSet LineSet960 = createNode("LineSet");
LineSet960.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA961 = createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSiteLineColorRGBA";
LineSet960.color = ColorRGBA961;

Coordinate Coordinate962 = createNode("Coordinate");
Coordinate962.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet960.coord = Coordinate962;

Shape959.geometry = LineSet960;

HAnimSegment947.children[4] = Shape959;

Shape Shape963 = createNode("Shape");
LineSet LineSet964 = createNode("LineSet");
LineSet964.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA965 = createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSiteLineColorRGBA";
LineSet964.color = ColorRGBA965;

Coordinate Coordinate966 = createNode("Coordinate");
Coordinate966.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet964.coord = Coordinate966;

Shape963.geometry = LineSet964;

HAnimSegment947.children[5] = Shape963;

Shape Shape967 = createNode("Shape");
LineSet LineSet968 = createNode("LineSet");
LineSet968.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA969 = createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSiteLineColorRGBA";
LineSet968.color = ColorRGBA969;

Coordinate Coordinate970 = createNode("Coordinate");
Coordinate970.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet968.coord = Coordinate970;

Shape967.geometry = LineSet968;

HAnimSegment947.children[6] = Shape967;

HAnimSite HAnimSite971 = createNode("HAnimSite");
HAnimSite971.DEF = "hanim_l_radial_styloid_pt";
HAnimSite971.name = "l_radial_styloid_pt";
HAnimSite971.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor972 = createNode("TouchSensor");
TouchSensor972.description = "HAnimSite l_radial_styloid";
HAnimSite971.children = new MFNode();

HAnimSite971.children[0] = TouchSensor972;

Shape Shape973 = createNode("Shape");
Shape973.USE = "HAnimSiteShape";
HAnimSite971.children[1] = Shape973;

HAnimSegment947.children[7] = HAnimSite971;

HAnimSite HAnimSite974 = createNode("HAnimSite");
HAnimSite974.DEF = "hanim_l_olecranon_pt";
HAnimSite974.name = "l_olecranon_pt";
HAnimSite974.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor975 = createNode("TouchSensor");
TouchSensor975.description = "HAnimSite l_olecranon";
HAnimSite974.children = new MFNode();

HAnimSite974.children[0] = TouchSensor975;

Shape Shape976 = createNode("Shape");
Shape976.USE = "HAnimSiteShape";
HAnimSite974.children[1] = Shape976;

HAnimSegment947.children[8] = HAnimSite974;

HAnimSite HAnimSite977 = createNode("HAnimSite");
HAnimSite977.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite977.name = "l_humeral_medial_epicn_pt";
HAnimSite977.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor978 = createNode("TouchSensor");
TouchSensor978.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite977.children = new MFNode();

HAnimSite977.children[0] = TouchSensor978;

Shape Shape979 = createNode("Shape");
Shape979.USE = "HAnimSiteShape";
HAnimSite977.children[1] = Shape979;

HAnimSegment947.children[9] = HAnimSite977;

HAnimSite HAnimSite980 = createNode("HAnimSite");
HAnimSite980.DEF = "hanim_l_radiale_pt";
HAnimSite980.name = "l_radiale_pt";
HAnimSite980.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor981 = createNode("TouchSensor");
TouchSensor981.description = "HAnimSite l_radiale";
HAnimSite980.children = new MFNode();

HAnimSite980.children[0] = TouchSensor981;

Shape Shape982 = createNode("Shape");
Shape982.USE = "HAnimSiteShape";
HAnimSite980.children[1] = Shape982;

HAnimSegment947.children[10] = HAnimSite980;

HAnimJoint946.children = new MFNode();

HAnimJoint946.children[0] = HAnimSegment947;

HAnimJoint HAnimJoint983 = createNode("HAnimJoint");
HAnimJoint983.DEF = "hanim_l_wrist";
HAnimJoint983.name = "l_wrist";
HAnimJoint983.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment984 = createNode("HAnimSegment");
HAnimSegment984.DEF = "hanim_l_hand";
HAnimSegment984.name = "l_hand";
TouchSensor TouchSensor985 = createNode("TouchSensor");
TouchSensor985.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment984.children = new MFNode();

HAnimSegment984.children[0] = TouchSensor985;

Transform Transform986 = createNode("Transform");
Transform986.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape987 = createNode("Shape");
Shape987.USE = "HAnimJointShape";
Transform986.child = new undefined();

Transform986.child[0] = Shape987;

HAnimSegment984.children[1] = Transform986;

Shape Shape988 = createNode("Shape");
LineSet LineSet989 = createNode("LineSet");
LineSet989.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA990 = createNode("ColorRGBA");
ColorRGBA990.USE = "HAnimSegmentLineColorRGBA";
LineSet989.color = ColorRGBA990;

Coordinate Coordinate991 = createNode("Coordinate");
Coordinate991.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet989.coord = Coordinate991;

Shape988.geometry = LineSet989;

HAnimSegment984.children[2] = Shape988;

Shape Shape992 = createNode("Shape");
LineSet LineSet993 = createNode("LineSet");
LineSet993.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA994 = createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
LineSet993.color = ColorRGBA994;

Coordinate Coordinate995 = createNode("Coordinate");
Coordinate995.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet993.coord = Coordinate995;

Shape992.geometry = LineSet993;

HAnimSegment984.children[3] = Shape992;

Shape Shape996 = createNode("Shape");
LineSet LineSet997 = createNode("LineSet");
LineSet997.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA998 = createNode("ColorRGBA");
ColorRGBA998.USE = "HAnimSegmentLineColorRGBA";
LineSet997.color = ColorRGBA998;

Coordinate Coordinate999 = createNode("Coordinate");
Coordinate999.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet997.coord = Coordinate999;

Shape996.geometry = LineSet997;

HAnimSegment984.children[4] = Shape996;

Shape Shape1000 = createNode("Shape");
LineSet LineSet1001 = createNode("LineSet");
LineSet1001.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1002 = createNode("ColorRGBA");
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA";
LineSet1001.color = ColorRGBA1002;

Coordinate Coordinate1003 = createNode("Coordinate");
Coordinate1003.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet1001.coord = Coordinate1003;

Shape1000.geometry = LineSet1001;

HAnimSegment984.children[5] = Shape1000;

Shape Shape1004 = createNode("Shape");
LineSet LineSet1005 = createNode("LineSet");
LineSet1005.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1006 = createNode("ColorRGBA");
ColorRGBA1006.USE = "HAnimSegmentLineColorRGBA";
LineSet1005.color = ColorRGBA1006;

Coordinate Coordinate1007 = createNode("Coordinate");
Coordinate1007.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1005.coord = Coordinate1007;

Shape1004.geometry = LineSet1005;

HAnimSegment984.children[6] = Shape1004;

Shape Shape1008 = createNode("Shape");
LineSet LineSet1009 = createNode("LineSet");
LineSet1009.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1010 = createNode("ColorRGBA");
ColorRGBA1010.USE = "HAnimSiteLineColorRGBA";
LineSet1009.color = ColorRGBA1010;

Coordinate Coordinate1011 = createNode("Coordinate");
Coordinate1011.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1009.coord = Coordinate1011;

Shape1008.geometry = LineSet1009;

HAnimSegment984.children[7] = Shape1008;

Shape Shape1012 = createNode("Shape");
LineSet LineSet1013 = createNode("LineSet");
LineSet1013.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1014 = createNode("ColorRGBA");
ColorRGBA1014.USE = "HAnimSiteLineColorRGBA";
LineSet1013.color = ColorRGBA1014;

Coordinate Coordinate1015 = createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1013.coord = Coordinate1015;

Shape1012.geometry = LineSet1013;

HAnimSegment984.children[8] = Shape1012;

Shape Shape1016 = createNode("Shape");
LineSet LineSet1017 = createNode("LineSet");
LineSet1017.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1018 = createNode("ColorRGBA");
ColorRGBA1018.USE = "HAnimSiteLineColorRGBA";
LineSet1017.color = ColorRGBA1018;

Coordinate Coordinate1019 = createNode("Coordinate");
Coordinate1019.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1017.coord = Coordinate1019;

Shape1016.geometry = LineSet1017;

HAnimSegment984.children[9] = Shape1016;

Shape Shape1020 = createNode("Shape");
LineSet LineSet1021 = createNode("LineSet");
LineSet1021.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1022 = createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1021.color = ColorRGBA1022;

Coordinate Coordinate1023 = createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1021.coord = Coordinate1023;

Shape1020.geometry = LineSet1021;

HAnimSegment984.children[10] = Shape1020;

HAnimSite HAnimSite1024 = createNode("HAnimSite");
HAnimSite1024.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1024.name = "l_metacarpal_pha2_pt";
HAnimSite1024.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1025 = createNode("TouchSensor");
TouchSensor1025.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1024.children = new MFNode();

HAnimSite1024.children[0] = TouchSensor1025;

Shape Shape1026 = createNode("Shape");
Shape1026.USE = "HAnimSiteShape";
HAnimSite1024.children[1] = Shape1026;

HAnimSegment984.children[11] = HAnimSite1024;

HAnimSite HAnimSite1027 = createNode("HAnimSite");
HAnimSite1027.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1027.name = "l_ulnar_styloid_pt";
HAnimSite1027.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1028 = createNode("TouchSensor");
TouchSensor1028.description = "HAnimSite l_ulnar_styloid";
HAnimSite1027.children = new MFNode();

HAnimSite1027.children[0] = TouchSensor1028;

Shape Shape1029 = createNode("Shape");
Shape1029.USE = "HAnimSiteShape";
HAnimSite1027.children[1] = Shape1029;

HAnimSegment984.children[12] = HAnimSite1027;

HAnimSite HAnimSite1030 = createNode("HAnimSite");
HAnimSite1030.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1030.name = "l_metacarpal_pha5_pt";
HAnimSite1030.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1031 = createNode("TouchSensor");
TouchSensor1031.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1030.children = new MFNode();

HAnimSite1030.children[0] = TouchSensor1031;

Shape Shape1032 = createNode("Shape");
Shape1032.USE = "HAnimSiteShape";
HAnimSite1030.children[1] = Shape1032;

HAnimSegment984.children[13] = HAnimSite1030;

HAnimSite HAnimSite1033 = createNode("HAnimSite");
HAnimSite1033.DEF = "hanim_l_hand_front_view";
HAnimSite1033.name = "l_hand_front_view";
HAnimSite1033.translation = new SFVec3f(new float[0.3,0.75,0.45]);
TouchSensor TouchSensor1034 = createNode("TouchSensor");
TouchSensor1034.description = "HAnimSite l_hand_front_view";
HAnimSite1033.children = new MFNode();

HAnimSite1033.children[0] = TouchSensor1034;

Shape Shape1035 = createNode("Shape");
Shape1035.USE = "HAnimSiteShape";
HAnimSite1033.children[1] = Shape1035;

Viewpoint Viewpoint1036 = createNode("Viewpoint");
Viewpoint1036.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1036.description = "left hand front";
Viewpoint1036.position = new SFVec3f(new float[0,0,0]);
Viewpoint1036.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
HAnimSite1033.children[2] = Viewpoint1036;

Anchor Anchor1037 = createNode("Anchor");
Anchor1037.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1037.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
LOD LOD1038 = createNode("LOD");
LOD1038.forceTransitions = True;
LOD1038.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1039 = createNode("WorldInfo");
WorldInfo1039.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1038.children = new MFNode();

LOD1038.children[0] = WorldInfo1039;

Shape Shape1040 = createNode("Shape");
Shape1040.USE = "HAnimSiteViewpointShape";
LOD1038.children[1] = Shape1040;

Anchor1037.children = new MFNode();

Anchor1037.children[0] = LOD1038;

HAnimSite1033.children[3] = Anchor1037;

HAnimSegment984.children[14] = HAnimSite1033;

HAnimJoint983.children = new MFNode();

HAnimJoint983.children[0] = HAnimSegment984;

HAnimJoint HAnimJoint1041 = createNode("HAnimJoint");
HAnimJoint1041.DEF = "hanim_l_thumb1";
HAnimJoint1041.name = "l_thumb1";
HAnimJoint1041.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment1042 = createNode("HAnimSegment");
HAnimSegment1042.DEF = "hanim_l_thumb_metacarpal";
HAnimSegment1042.name = "l_thumb_metacarpal";
TouchSensor TouchSensor1043 = createNode("TouchSensor");
TouchSensor1043.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1042.children = new MFNode();

HAnimSegment1042.children[0] = TouchSensor1043;

Transform Transform1044 = createNode("Transform");
Transform1044.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape1045 = createNode("Shape");
Shape1045.USE = "HAnimJointShape";
Transform1044.child = new undefined();

Transform1044.child[0] = Shape1045;

HAnimSegment1042.children[1] = Transform1044;

Shape Shape1046 = createNode("Shape");
LineSet LineSet1047 = createNode("LineSet");
LineSet1047.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1048 = createNode("ColorRGBA");
ColorRGBA1048.USE = "HAnimSegmentLineColorRGBA";
LineSet1047.color = ColorRGBA1048;

Coordinate Coordinate1049 = createNode("Coordinate");
Coordinate1049.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1047.coord = Coordinate1049;

Shape1046.geometry = LineSet1047;

HAnimSegment1042.children[2] = Shape1046;

HAnimJoint1041.children = new MFNode();

HAnimJoint1041.children[0] = HAnimSegment1042;

HAnimJoint HAnimJoint1050 = createNode("HAnimJoint");
HAnimJoint1050.DEF = "hanim_l_thumb2";
HAnimJoint1050.name = "l_thumb2";
HAnimJoint1050.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment1051 = createNode("HAnimSegment");
HAnimSegment1051.DEF = "hanim_l_thumb_proximal";
HAnimSegment1051.name = "l_thumb_proximal";
TouchSensor TouchSensor1052 = createNode("TouchSensor");
TouchSensor1052.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1051.children = new MFNode();

HAnimSegment1051.children[0] = TouchSensor1052;

Transform Transform1053 = createNode("Transform");
Transform1053.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape1054 = createNode("Shape");
Shape1054.USE = "HAnimJointShape";
Transform1053.child = new undefined();

Transform1053.child[0] = Shape1054;

HAnimSegment1051.children[1] = Transform1053;

Shape Shape1055 = createNode("Shape");
LineSet LineSet1056 = createNode("LineSet");
LineSet1056.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1057 = createNode("ColorRGBA");
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA";
LineSet1056.color = ColorRGBA1057;

Coordinate Coordinate1058 = createNode("Coordinate");
Coordinate1058.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1056.coord = Coordinate1058;

Shape1055.geometry = LineSet1056;

HAnimSegment1051.children[2] = Shape1055;

HAnimJoint1050.children = new MFNode();

HAnimJoint1050.children[0] = HAnimSegment1051;

HAnimJoint HAnimJoint1059 = createNode("HAnimJoint");
HAnimJoint1059.DEF = "hanim_l_thumb3";
HAnimJoint1059.name = "l_thumb3";
HAnimJoint1059.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment1060 = createNode("HAnimSegment");
HAnimSegment1060.DEF = "hanim_l_thumb_distal";
HAnimSegment1060.name = "l_thumb_distal";
TouchSensor TouchSensor1061 = createNode("TouchSensor");
TouchSensor1061.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1060.children = new MFNode();

HAnimSegment1060.children[0] = TouchSensor1061;

Transform Transform1062 = createNode("Transform");
Transform1062.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape1063 = createNode("Shape");
Shape1063.USE = "HAnimJointShape";
Transform1062.child = new undefined();

Transform1062.child[0] = Shape1063;

HAnimSegment1060.children[1] = Transform1062;

Shape Shape1064 = createNode("Shape");
LineSet LineSet1065 = createNode("LineSet");
LineSet1065.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1066 = createNode("ColorRGBA");
ColorRGBA1066.USE = "HAnimSiteLineColorRGBA";
LineSet1065.color = ColorRGBA1066;

Coordinate Coordinate1067 = createNode("Coordinate");
Coordinate1067.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1065.coord = Coordinate1067;

Shape1064.geometry = LineSet1065;

HAnimSegment1060.children[2] = Shape1064;

HAnimSite HAnimSite1068 = createNode("HAnimSite");
HAnimSite1068.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1068.name = "l_thumb_distal_tip";
HAnimSite1068.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
TouchSensor TouchSensor1069 = createNode("TouchSensor");
TouchSensor1069.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1068.children = new MFNode();

HAnimSite1068.children[0] = TouchSensor1069;

Shape Shape1070 = createNode("Shape");
Shape1070.USE = "HAnimSiteShape";
HAnimSite1068.children[1] = Shape1070;

HAnimSegment1060.children[3] = HAnimSite1068;

HAnimJoint1059.children = new MFNode();

HAnimJoint1059.children[0] = HAnimSegment1060;

HAnimJoint1050.children[1] = HAnimJoint1059;

HAnimJoint1041.children[1] = HAnimJoint1050;

HAnimJoint983.children[1] = HAnimJoint1041;

HAnimJoint HAnimJoint1071 = createNode("HAnimJoint");
HAnimJoint1071.DEF = "hanim_l_index0";
HAnimJoint1071.name = "l_index0";
HAnimJoint1071.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment1072 = createNode("HAnimSegment");
HAnimSegment1072.DEF = "hanim_l_index_metacarpal";
HAnimSegment1072.name = "l_index_metacarpal";
TouchSensor TouchSensor1073 = createNode("TouchSensor");
TouchSensor1073.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1072.children = new MFNode();

HAnimSegment1072.children[0] = TouchSensor1073;

Transform Transform1074 = createNode("Transform");
Transform1074.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape1075 = createNode("Shape");
Shape1075.USE = "HAnimJointShape";
Transform1074.child = new undefined();

Transform1074.child[0] = Shape1075;

HAnimSegment1072.children[1] = Transform1074;

Shape Shape1076 = createNode("Shape");
LineSet LineSet1077 = createNode("LineSet");
LineSet1077.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1078 = createNode("ColorRGBA");
ColorRGBA1078.USE = "HAnimSegmentLineColorRGBA";
LineSet1077.color = ColorRGBA1078;

Coordinate Coordinate1079 = createNode("Coordinate");
Coordinate1079.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1077.coord = Coordinate1079;

Shape1076.geometry = LineSet1077;

HAnimSegment1072.children[2] = Shape1076;

HAnimJoint1071.children = new MFNode();

HAnimJoint1071.children[0] = HAnimSegment1072;

HAnimJoint HAnimJoint1080 = createNode("HAnimJoint");
HAnimJoint1080.DEF = "hanim_l_index1";
HAnimJoint1080.name = "l_index1";
HAnimJoint1080.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment1081 = createNode("HAnimSegment");
HAnimSegment1081.DEF = "hanim_l_index_proximal";
HAnimSegment1081.name = "l_index_proximal";
TouchSensor TouchSensor1082 = createNode("TouchSensor");
TouchSensor1082.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1081.children = new MFNode();

HAnimSegment1081.children[0] = TouchSensor1082;

Transform Transform1083 = createNode("Transform");
Transform1083.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape1084 = createNode("Shape");
Shape1084.USE = "HAnimJointShape";
Transform1083.child = new undefined();

Transform1083.child[0] = Shape1084;

HAnimSegment1081.children[1] = Transform1083;

Shape Shape1085 = createNode("Shape");
LineSet LineSet1086 = createNode("LineSet");
LineSet1086.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1087 = createNode("ColorRGBA");
ColorRGBA1087.USE = "HAnimSegmentLineColorRGBA";
LineSet1086.color = ColorRGBA1087;

Coordinate Coordinate1088 = createNode("Coordinate");
Coordinate1088.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1086.coord = Coordinate1088;

Shape1085.geometry = LineSet1086;

HAnimSegment1081.children[2] = Shape1085;

HAnimJoint1080.children = new MFNode();

HAnimJoint1080.children[0] = HAnimSegment1081;

HAnimJoint HAnimJoint1089 = createNode("HAnimJoint");
HAnimJoint1089.DEF = "hanim_l_index2";
HAnimJoint1089.name = "l_index2";
HAnimJoint1089.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment1090 = createNode("HAnimSegment");
HAnimSegment1090.DEF = "hanim_l_index_middle";
HAnimSegment1090.name = "l_index_middle";
TouchSensor TouchSensor1091 = createNode("TouchSensor");
TouchSensor1091.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1090.children = new MFNode();

HAnimSegment1090.children[0] = TouchSensor1091;

Transform Transform1092 = createNode("Transform");
Transform1092.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape1093 = createNode("Shape");
Shape1093.USE = "HAnimJointShape";
Transform1092.child = new undefined();

Transform1092.child[0] = Shape1093;

HAnimSegment1090.children[1] = Transform1092;

Shape Shape1094 = createNode("Shape");
LineSet LineSet1095 = createNode("LineSet");
LineSet1095.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1096 = createNode("ColorRGBA");
ColorRGBA1096.USE = "HAnimSegmentLineColorRGBA";
LineSet1095.color = ColorRGBA1096;

Coordinate Coordinate1097 = createNode("Coordinate");
Coordinate1097.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1095.coord = Coordinate1097;

Shape1094.geometry = LineSet1095;

HAnimSegment1090.children[2] = Shape1094;

HAnimJoint1089.children = new MFNode();

HAnimJoint1089.children[0] = HAnimSegment1090;

HAnimJoint HAnimJoint1098 = createNode("HAnimJoint");
HAnimJoint1098.DEF = "hanim_l_index3";
HAnimJoint1098.name = "l_index3";
HAnimJoint1098.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment1099 = createNode("HAnimSegment");
HAnimSegment1099.DEF = "hanim_l_index_distal";
HAnimSegment1099.name = "l_index_distal";
TouchSensor TouchSensor1100 = createNode("TouchSensor");
TouchSensor1100.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1099.children = new MFNode();

HAnimSegment1099.children[0] = TouchSensor1100;

Transform Transform1101 = createNode("Transform");
Transform1101.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape1102 = createNode("Shape");
Shape1102.USE = "HAnimJointShape";
Transform1101.child = new undefined();

Transform1101.child[0] = Shape1102;

HAnimSegment1099.children[1] = Transform1101;

Shape Shape1103 = createNode("Shape");
LineSet LineSet1104 = createNode("LineSet");
LineSet1104.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1105 = createNode("ColorRGBA");
ColorRGBA1105.USE = "HAnimSiteLineColorRGBA";
LineSet1104.color = ColorRGBA1105;

Coordinate Coordinate1106 = createNode("Coordinate");
Coordinate1106.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1104.coord = Coordinate1106;

Shape1103.geometry = LineSet1104;

HAnimSegment1099.children[2] = Shape1103;

Shape Shape1107 = createNode("Shape");
LineSet LineSet1108 = createNode("LineSet");
LineSet1108.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1109 = createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSiteLineColorRGBA";
LineSet1108.color = ColorRGBA1109;

Coordinate Coordinate1110 = createNode("Coordinate");
Coordinate1110.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1108.coord = Coordinate1110;

Shape1107.geometry = LineSet1108;

HAnimSegment1099.children[3] = Shape1107;

HAnimSite HAnimSite1111 = createNode("HAnimSite");
HAnimSite1111.DEF = "hanim_l_index_distal_tip";
HAnimSite1111.name = "l_index_distal_tip";
HAnimSite1111.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
TouchSensor TouchSensor1112 = createNode("TouchSensor");
TouchSensor1112.description = "HAnimSite l_index_distal_tip";
HAnimSite1111.children = new MFNode();

HAnimSite1111.children[0] = TouchSensor1112;

Shape Shape1113 = createNode("Shape");
Shape1113.USE = "HAnimSiteShape";
HAnimSite1111.children[1] = Shape1113;

HAnimSegment1099.children[4] = HAnimSite1111;

HAnimSite HAnimSite1114 = createNode("HAnimSite");
HAnimSite1114.DEF = "hanim_l_dactylion_pt";
HAnimSite1114.name = "l_dactylion_pt";
HAnimSite1114.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor1115 = createNode("TouchSensor");
TouchSensor1115.description = "HAnimSite l_dactylion";
HAnimSite1114.children = new MFNode();

HAnimSite1114.children[0] = TouchSensor1115;

Shape Shape1116 = createNode("Shape");
Shape1116.USE = "HAnimSiteShape";
HAnimSite1114.children[1] = Shape1116;

HAnimSegment1099.children[5] = HAnimSite1114;

HAnimJoint1098.children = new MFNode();

HAnimJoint1098.children[0] = HAnimSegment1099;

HAnimJoint1089.children[1] = HAnimJoint1098;

HAnimJoint1080.children[1] = HAnimJoint1089;

HAnimJoint1071.children[1] = HAnimJoint1080;

HAnimJoint983.children[2] = HAnimJoint1071;

HAnimJoint HAnimJoint1117 = createNode("HAnimJoint");
HAnimJoint1117.DEF = "hanim_l_middle0";
HAnimJoint1117.name = "l_middle0";
HAnimJoint1117.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment1118 = createNode("HAnimSegment");
HAnimSegment1118.DEF = "hanim_l_middle_metacarpal";
HAnimSegment1118.name = "l_middle_metacarpal";
TouchSensor TouchSensor1119 = createNode("TouchSensor");
TouchSensor1119.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1118.children = new MFNode();

HAnimSegment1118.children[0] = TouchSensor1119;

Transform Transform1120 = createNode("Transform");
Transform1120.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape1121 = createNode("Shape");
Shape1121.USE = "HAnimJointShape";
Transform1120.child = new undefined();

Transform1120.child[0] = Shape1121;

HAnimSegment1118.children[1] = Transform1120;

Shape Shape1122 = createNode("Shape");
LineSet LineSet1123 = createNode("LineSet");
LineSet1123.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1124 = createNode("ColorRGBA");
ColorRGBA1124.USE = "HAnimSegmentLineColorRGBA";
LineSet1123.color = ColorRGBA1124;

Coordinate Coordinate1125 = createNode("Coordinate");
Coordinate1125.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1123.coord = Coordinate1125;

Shape1122.geometry = LineSet1123;

HAnimSegment1118.children[2] = Shape1122;

HAnimJoint1117.children = new MFNode();

HAnimJoint1117.children[0] = HAnimSegment1118;

HAnimJoint HAnimJoint1126 = createNode("HAnimJoint");
HAnimJoint1126.DEF = "hanim_l_middle1";
HAnimJoint1126.name = "l_middle1";
HAnimJoint1126.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment1127 = createNode("HAnimSegment");
HAnimSegment1127.DEF = "hanim_l_middle_proximal";
HAnimSegment1127.name = "l_middle_proximal";
TouchSensor TouchSensor1128 = createNode("TouchSensor");
TouchSensor1128.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1127.children = new MFNode();

HAnimSegment1127.children[0] = TouchSensor1128;

Transform Transform1129 = createNode("Transform");
Transform1129.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape1130 = createNode("Shape");
Shape1130.USE = "HAnimJointShape";
Transform1129.child = new undefined();

Transform1129.child[0] = Shape1130;

HAnimSegment1127.children[1] = Transform1129;

Shape Shape1131 = createNode("Shape");
LineSet LineSet1132 = createNode("LineSet");
LineSet1132.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1133 = createNode("ColorRGBA");
ColorRGBA1133.USE = "HAnimSegmentLineColorRGBA";
LineSet1132.color = ColorRGBA1133;

Coordinate Coordinate1134 = createNode("Coordinate");
Coordinate1134.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1132.coord = Coordinate1134;

Shape1131.geometry = LineSet1132;

HAnimSegment1127.children[2] = Shape1131;

HAnimJoint1126.children = new MFNode();

HAnimJoint1126.children[0] = HAnimSegment1127;

HAnimJoint HAnimJoint1135 = createNode("HAnimJoint");
HAnimJoint1135.DEF = "hanim_l_middle2";
HAnimJoint1135.name = "l_middle2";
HAnimJoint1135.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment1136 = createNode("HAnimSegment");
HAnimSegment1136.DEF = "hanim_l_middle_middle";
HAnimSegment1136.name = "l_middle_middle";
TouchSensor TouchSensor1137 = createNode("TouchSensor");
TouchSensor1137.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1136.children = new MFNode();

HAnimSegment1136.children[0] = TouchSensor1137;

Transform Transform1138 = createNode("Transform");
Transform1138.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape1139 = createNode("Shape");
Shape1139.USE = "HAnimJointShape";
Transform1138.child = new undefined();

Transform1138.child[0] = Shape1139;

HAnimSegment1136.children[1] = Transform1138;

Shape Shape1140 = createNode("Shape");
LineSet LineSet1141 = createNode("LineSet");
LineSet1141.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1142 = createNode("ColorRGBA");
ColorRGBA1142.USE = "HAnimSegmentLineColorRGBA";
LineSet1141.color = ColorRGBA1142;

Coordinate Coordinate1143 = createNode("Coordinate");
Coordinate1143.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1141.coord = Coordinate1143;

Shape1140.geometry = LineSet1141;

HAnimSegment1136.children[2] = Shape1140;

HAnimJoint1135.children = new MFNode();

HAnimJoint1135.children[0] = HAnimSegment1136;

HAnimJoint HAnimJoint1144 = createNode("HAnimJoint");
HAnimJoint1144.DEF = "hanim_l_middle3";
HAnimJoint1144.name = "l_middle3";
HAnimJoint1144.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimSegment HAnimSegment1145 = createNode("HAnimSegment");
HAnimSegment1145.DEF = "hanim_l_middle_distal";
HAnimSegment1145.name = "l_middle_distal";
TouchSensor TouchSensor1146 = createNode("TouchSensor");
TouchSensor1146.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1145.children = new MFNode();

HAnimSegment1145.children[0] = TouchSensor1146;

Transform Transform1147 = createNode("Transform");
Transform1147.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape1148 = createNode("Shape");
Shape1148.USE = "HAnimJointShape";
Transform1147.child = new undefined();

Transform1147.child[0] = Shape1148;

HAnimSegment1145.children[1] = Transform1147;

Shape Shape1149 = createNode("Shape");
LineSet LineSet1150 = createNode("LineSet");
LineSet1150.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1151 = createNode("ColorRGBA");
ColorRGBA1151.USE = "HAnimSiteLineColorRGBA";
LineSet1150.color = ColorRGBA1151;

Coordinate Coordinate1152 = createNode("Coordinate");
Coordinate1152.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1150.coord = Coordinate1152;

Shape1149.geometry = LineSet1150;

HAnimSegment1145.children[2] = Shape1149;

HAnimSite HAnimSite1153 = createNode("HAnimSite");
HAnimSite1153.DEF = "hanim_l_middle_distal_tip";
HAnimSite1153.name = "l_middle_distal_tip";
HAnimSite1153.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
TouchSensor TouchSensor1154 = createNode("TouchSensor");
TouchSensor1154.description = "HAnimSite l_middle_distal_tip";
HAnimSite1153.children = new MFNode();

HAnimSite1153.children[0] = TouchSensor1154;

Shape Shape1155 = createNode("Shape");
Shape1155.USE = "HAnimSiteShape";
HAnimSite1153.children[1] = Shape1155;

HAnimSegment1145.children[3] = HAnimSite1153;

HAnimJoint1144.children = new MFNode();

HAnimJoint1144.children[0] = HAnimSegment1145;

HAnimJoint1135.children[1] = HAnimJoint1144;

HAnimJoint1126.children[1] = HAnimJoint1135;

HAnimJoint1117.children[1] = HAnimJoint1126;

HAnimJoint983.children[3] = HAnimJoint1117;

HAnimJoint HAnimJoint1156 = createNode("HAnimJoint");
HAnimJoint1156.DEF = "hanim_l_ring0";
HAnimJoint1156.name = "l_ring0";
HAnimJoint1156.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment1157 = createNode("HAnimSegment");
HAnimSegment1157.DEF = "hanim_l_ring_metacarpal";
HAnimSegment1157.name = "l_ring_metacarpal";
TouchSensor TouchSensor1158 = createNode("TouchSensor");
TouchSensor1158.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1157.children = new MFNode();

HAnimSegment1157.children[0] = TouchSensor1158;

Transform Transform1159 = createNode("Transform");
Transform1159.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape1160 = createNode("Shape");
Shape1160.USE = "HAnimJointShape";
Transform1159.child = new undefined();

Transform1159.child[0] = Shape1160;

HAnimSegment1157.children[1] = Transform1159;

Shape Shape1161 = createNode("Shape");
LineSet LineSet1162 = createNode("LineSet");
LineSet1162.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1163 = createNode("ColorRGBA");
ColorRGBA1163.USE = "HAnimSegmentLineColorRGBA";
LineSet1162.color = ColorRGBA1163;

Coordinate Coordinate1164 = createNode("Coordinate");
Coordinate1164.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1162.coord = Coordinate1164;

Shape1161.geometry = LineSet1162;

HAnimSegment1157.children[2] = Shape1161;

HAnimJoint1156.children = new MFNode();

HAnimJoint1156.children[0] = HAnimSegment1157;

HAnimJoint HAnimJoint1165 = createNode("HAnimJoint");
HAnimJoint1165.DEF = "hanim_l_ring1";
HAnimJoint1165.name = "l_ring1";
HAnimJoint1165.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment1166 = createNode("HAnimSegment");
HAnimSegment1166.DEF = "hanim_l_ring_proximal";
HAnimSegment1166.name = "l_ring_proximal";
TouchSensor TouchSensor1167 = createNode("TouchSensor");
TouchSensor1167.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1166.children = new MFNode();

HAnimSegment1166.children[0] = TouchSensor1167;

Transform Transform1168 = createNode("Transform");
Transform1168.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape1169 = createNode("Shape");
Shape1169.USE = "HAnimJointShape";
Transform1168.child = new undefined();

Transform1168.child[0] = Shape1169;

HAnimSegment1166.children[1] = Transform1168;

Shape Shape1170 = createNode("Shape");
LineSet LineSet1171 = createNode("LineSet");
LineSet1171.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1172 = createNode("ColorRGBA");
ColorRGBA1172.USE = "HAnimSegmentLineColorRGBA";
LineSet1171.color = ColorRGBA1172;

Coordinate Coordinate1173 = createNode("Coordinate");
Coordinate1173.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1171.coord = Coordinate1173;

Shape1170.geometry = LineSet1171;

HAnimSegment1166.children[2] = Shape1170;

HAnimJoint1165.children = new MFNode();

HAnimJoint1165.children[0] = HAnimSegment1166;

HAnimJoint HAnimJoint1174 = createNode("HAnimJoint");
HAnimJoint1174.DEF = "hanim_l_ring2";
HAnimJoint1174.name = "l_ring2";
HAnimJoint1174.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment1175 = createNode("HAnimSegment");
HAnimSegment1175.DEF = "hanim_l_ring_middle";
HAnimSegment1175.name = "l_ring_middle";
TouchSensor TouchSensor1176 = createNode("TouchSensor");
TouchSensor1176.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1175.children = new MFNode();

HAnimSegment1175.children[0] = TouchSensor1176;

Transform Transform1177 = createNode("Transform");
Transform1177.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape1178 = createNode("Shape");
Shape1178.USE = "HAnimJointShape";
Transform1177.child = new undefined();

Transform1177.child[0] = Shape1178;

HAnimSegment1175.children[1] = Transform1177;

Shape Shape1179 = createNode("Shape");
LineSet LineSet1180 = createNode("LineSet");
LineSet1180.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1181 = createNode("ColorRGBA");
ColorRGBA1181.USE = "HAnimSegmentLineColorRGBA";
LineSet1180.color = ColorRGBA1181;

Coordinate Coordinate1182 = createNode("Coordinate");
Coordinate1182.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1180.coord = Coordinate1182;

Shape1179.geometry = LineSet1180;

HAnimSegment1175.children[2] = Shape1179;

HAnimJoint1174.children = new MFNode();

HAnimJoint1174.children[0] = HAnimSegment1175;

HAnimJoint HAnimJoint1183 = createNode("HAnimJoint");
HAnimJoint1183.DEF = "hanim_l_ring3";
HAnimJoint1183.name = "l_ring3";
HAnimJoint1183.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimSegment HAnimSegment1184 = createNode("HAnimSegment");
HAnimSegment1184.DEF = "hanim_l_ring_distal";
HAnimSegment1184.name = "l_ring_distal";
TouchSensor TouchSensor1185 = createNode("TouchSensor");
TouchSensor1185.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1184.children = new MFNode();

HAnimSegment1184.children[0] = TouchSensor1185;

Transform Transform1186 = createNode("Transform");
Transform1186.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape1187 = createNode("Shape");
Shape1187.USE = "HAnimJointShape";
Transform1186.child = new undefined();

Transform1186.child[0] = Shape1187;

HAnimSegment1184.children[1] = Transform1186;

Shape Shape1188 = createNode("Shape");
LineSet LineSet1189 = createNode("LineSet");
LineSet1189.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1190 = createNode("ColorRGBA");
ColorRGBA1190.USE = "HAnimSiteLineColorRGBA";
LineSet1189.color = ColorRGBA1190;

Coordinate Coordinate1191 = createNode("Coordinate");
Coordinate1191.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1189.coord = Coordinate1191;

Shape1188.geometry = LineSet1189;

HAnimSegment1184.children[2] = Shape1188;

HAnimSite HAnimSite1192 = createNode("HAnimSite");
HAnimSite1192.DEF = "hanim_l_ring_distal_tip";
HAnimSite1192.name = "l_ring_distal_tip";
HAnimSite1192.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
TouchSensor TouchSensor1193 = createNode("TouchSensor");
TouchSensor1193.description = "HAnimSite l_ring_distal_tip";
HAnimSite1192.children = new MFNode();

HAnimSite1192.children[0] = TouchSensor1193;

Shape Shape1194 = createNode("Shape");
Shape1194.USE = "HAnimSiteShape";
HAnimSite1192.children[1] = Shape1194;

HAnimSegment1184.children[3] = HAnimSite1192;

HAnimJoint1183.children = new MFNode();

HAnimJoint1183.children[0] = HAnimSegment1184;

HAnimJoint1174.children[1] = HAnimJoint1183;

HAnimJoint1165.children[1] = HAnimJoint1174;

HAnimJoint1156.children[1] = HAnimJoint1165;

HAnimJoint983.children[4] = HAnimJoint1156;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.DEF = "hanim_l_pinky0";
HAnimJoint1195.name = "l_pinky0";
HAnimJoint1195.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment1196 = createNode("HAnimSegment");
HAnimSegment1196.DEF = "hanim_l_pinky_metacarpal";
HAnimSegment1196.name = "l_pinky_metacarpal";
TouchSensor TouchSensor1197 = createNode("TouchSensor");
TouchSensor1197.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1196.children = new MFNode();

HAnimSegment1196.children[0] = TouchSensor1197;

Transform Transform1198 = createNode("Transform");
Transform1198.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape1199 = createNode("Shape");
Shape1199.USE = "HAnimJointShape";
Transform1198.child = new undefined();

Transform1198.child[0] = Shape1199;

HAnimSegment1196.children[1] = Transform1198;

Shape Shape1200 = createNode("Shape");
LineSet LineSet1201 = createNode("LineSet");
LineSet1201.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1202 = createNode("ColorRGBA");
ColorRGBA1202.USE = "HAnimSegmentLineColorRGBA";
LineSet1201.color = ColorRGBA1202;

Coordinate Coordinate1203 = createNode("Coordinate");
Coordinate1203.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1201.coord = Coordinate1203;

Shape1200.geometry = LineSet1201;

HAnimSegment1196.children[2] = Shape1200;

HAnimJoint1195.children = new MFNode();

HAnimJoint1195.children[0] = HAnimSegment1196;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.DEF = "hanim_l_pinky1";
HAnimJoint1204.name = "l_pinky1";
HAnimJoint1204.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment1205 = createNode("HAnimSegment");
HAnimSegment1205.DEF = "hanim_l_pinky_proximal";
HAnimSegment1205.name = "l_pinky_proximal";
TouchSensor TouchSensor1206 = createNode("TouchSensor");
TouchSensor1206.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1205.children = new MFNode();

HAnimSegment1205.children[0] = TouchSensor1206;

Transform Transform1207 = createNode("Transform");
Transform1207.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape1208 = createNode("Shape");
Shape1208.USE = "HAnimJointShape";
Transform1207.child = new undefined();

Transform1207.child[0] = Shape1208;

HAnimSegment1205.children[1] = Transform1207;

Shape Shape1209 = createNode("Shape");
LineSet LineSet1210 = createNode("LineSet");
LineSet1210.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1211 = createNode("ColorRGBA");
ColorRGBA1211.USE = "HAnimSegmentLineColorRGBA";
LineSet1210.color = ColorRGBA1211;

Coordinate Coordinate1212 = createNode("Coordinate");
Coordinate1212.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1210.coord = Coordinate1212;

Shape1209.geometry = LineSet1210;

HAnimSegment1205.children[2] = Shape1209;

HAnimJoint1204.children = new MFNode();

HAnimJoint1204.children[0] = HAnimSegment1205;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.DEF = "hanim_l_pinky2";
HAnimJoint1213.name = "l_pinky2";
HAnimJoint1213.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment1214 = createNode("HAnimSegment");
HAnimSegment1214.DEF = "hanim_l_pinky_middle";
HAnimSegment1214.name = "l_pinky_middle";
TouchSensor TouchSensor1215 = createNode("TouchSensor");
TouchSensor1215.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1214.children = new MFNode();

HAnimSegment1214.children[0] = TouchSensor1215;

Transform Transform1216 = createNode("Transform");
Transform1216.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape1217 = createNode("Shape");
Shape1217.USE = "HAnimJointShape";
Transform1216.child = new undefined();

Transform1216.child[0] = Shape1217;

HAnimSegment1214.children[1] = Transform1216;

Shape Shape1218 = createNode("Shape");
LineSet LineSet1219 = createNode("LineSet");
LineSet1219.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1220 = createNode("ColorRGBA");
ColorRGBA1220.USE = "HAnimSegmentLineColorRGBA";
LineSet1219.color = ColorRGBA1220;

Coordinate Coordinate1221 = createNode("Coordinate");
Coordinate1221.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1219.coord = Coordinate1221;

Shape1218.geometry = LineSet1219;

HAnimSegment1214.children[2] = Shape1218;

HAnimJoint1213.children = new MFNode();

HAnimJoint1213.children[0] = HAnimSegment1214;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.DEF = "hanim_l_pinky3";
HAnimJoint1222.name = "l_pinky3";
HAnimJoint1222.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimSegment HAnimSegment1223 = createNode("HAnimSegment");
HAnimSegment1223.DEF = "hanim_l_pinky_distal";
HAnimSegment1223.name = "l_pinky_distal";
TouchSensor TouchSensor1224 = createNode("TouchSensor");
TouchSensor1224.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1223.children = new MFNode();

HAnimSegment1223.children[0] = TouchSensor1224;

Transform Transform1225 = createNode("Transform");
Transform1225.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape1226 = createNode("Shape");
Shape1226.USE = "HAnimJointShape";
Transform1225.child = new undefined();

Transform1225.child[0] = Shape1226;

HAnimSegment1223.children[1] = Transform1225;

Shape Shape1227 = createNode("Shape");
LineSet LineSet1228 = createNode("LineSet");
LineSet1228.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1229 = createNode("ColorRGBA");
ColorRGBA1229.USE = "HAnimSiteLineColorRGBA";
LineSet1228.color = ColorRGBA1229;

Coordinate Coordinate1230 = createNode("Coordinate");
Coordinate1230.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1228.coord = Coordinate1230;

Shape1227.geometry = LineSet1228;

HAnimSegment1223.children[2] = Shape1227;

HAnimSite HAnimSite1231 = createNode("HAnimSite");
HAnimSite1231.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1231.name = "l_pinky_distal_tip";
HAnimSite1231.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
TouchSensor TouchSensor1232 = createNode("TouchSensor");
TouchSensor1232.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1231.children = new MFNode();

HAnimSite1231.children[0] = TouchSensor1232;

Shape Shape1233 = createNode("Shape");
Shape1233.USE = "HAnimSiteShape";
HAnimSite1231.children[1] = Shape1233;

HAnimSegment1223.children[3] = HAnimSite1231;

HAnimJoint1222.children = new MFNode();

HAnimJoint1222.children[0] = HAnimSegment1223;

HAnimJoint1213.children[1] = HAnimJoint1222;

HAnimJoint1204.children[1] = HAnimJoint1213;

HAnimJoint1195.children[1] = HAnimJoint1204;

HAnimJoint983.children[5] = HAnimJoint1195;

HAnimJoint946.children[1] = HAnimJoint983;

HAnimJoint930.children[1] = HAnimJoint946;

HAnimJoint921.children[1] = HAnimJoint930;

HAnimJoint884.children[1] = HAnimJoint921;

HAnimJoint596.children[2] = HAnimJoint884;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.DEF = "hanim_r_sternoclavicular";
HAnimJoint1234.name = "r_sternoclavicular";
HAnimJoint1234.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment1235 = createNode("HAnimSegment");
HAnimSegment1235.DEF = "hanim_r_clavicle";
HAnimSegment1235.name = "r_clavicle";
TouchSensor TouchSensor1236 = createNode("TouchSensor");
TouchSensor1236.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1235.children = new MFNode();

HAnimSegment1235.children[0] = TouchSensor1236;

Transform Transform1237 = createNode("Transform");
Transform1237.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
Shape Shape1238 = createNode("Shape");
Shape1238.USE = "HAnimJointShape";
Transform1237.child = new undefined();

Transform1237.child[0] = Shape1238;

HAnimSegment1235.children[1] = Transform1237;

Shape Shape1239 = createNode("Shape");
LineSet LineSet1240 = createNode("LineSet");
LineSet1240.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1241 = createNode("ColorRGBA");
ColorRGBA1241.USE = "HAnimSegmentLineColorRGBA";
LineSet1240.color = ColorRGBA1241;

Coordinate Coordinate1242 = createNode("Coordinate");
Coordinate1242.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1240.coord = Coordinate1242;

Shape1239.geometry = LineSet1240;

HAnimSegment1235.children[2] = Shape1239;

Shape Shape1243 = createNode("Shape");
LineSet LineSet1244 = createNode("LineSet");
LineSet1244.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1245 = createNode("ColorRGBA");
ColorRGBA1245.USE = "HAnimSiteLineColorRGBA";
LineSet1244.color = ColorRGBA1245;

Coordinate Coordinate1246 = createNode("Coordinate");
Coordinate1246.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1244.coord = Coordinate1246;

Shape1243.geometry = LineSet1244;

HAnimSegment1235.children[3] = Shape1243;

Shape Shape1247 = createNode("Shape");
LineSet LineSet1248 = createNode("LineSet");
LineSet1248.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1249 = createNode("ColorRGBA");
ColorRGBA1249.USE = "HAnimSiteLineColorRGBA";
LineSet1248.color = ColorRGBA1249;

Coordinate Coordinate1250 = createNode("Coordinate");
Coordinate1250.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1248.coord = Coordinate1250;

Shape1247.geometry = LineSet1248;

HAnimSegment1235.children[4] = Shape1247;

Shape Shape1251 = createNode("Shape");
LineSet LineSet1252 = createNode("LineSet");
LineSet1252.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1253 = createNode("ColorRGBA");
ColorRGBA1253.USE = "HAnimSiteLineColorRGBA";
LineSet1252.color = ColorRGBA1253;

Coordinate Coordinate1254 = createNode("Coordinate");
Coordinate1254.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1252.coord = Coordinate1254;

Shape1251.geometry = LineSet1252;

HAnimSegment1235.children[5] = Shape1251;

Shape Shape1255 = createNode("Shape");
LineSet LineSet1256 = createNode("LineSet");
LineSet1256.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1257 = createNode("ColorRGBA");
ColorRGBA1257.USE = "HAnimSiteLineColorRGBA";
LineSet1256.color = ColorRGBA1257;

Coordinate Coordinate1258 = createNode("Coordinate");
Coordinate1258.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1256.coord = Coordinate1258;

Shape1255.geometry = LineSet1256;

HAnimSegment1235.children[6] = Shape1255;

HAnimSite HAnimSite1259 = createNode("HAnimSite");
HAnimSite1259.DEF = "hanim_r_clavicale_pt";
HAnimSite1259.name = "r_clavicale_pt";
HAnimSite1259.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor1260 = createNode("TouchSensor");
TouchSensor1260.description = "HAnimSite r_clavicale";
HAnimSite1259.children = new MFNode();

HAnimSite1259.children[0] = TouchSensor1260;

Shape Shape1261 = createNode("Shape");
Shape1261.USE = "HAnimSiteShape";
HAnimSite1259.children[1] = Shape1261;

HAnimSegment1235.children[7] = HAnimSite1259;

HAnimSite HAnimSite1262 = createNode("HAnimSite");
HAnimSite1262.DEF = "hanim_r_acromion_pt";
HAnimSite1262.name = "r_acromion_pt";
HAnimSite1262.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor1263 = createNode("TouchSensor");
TouchSensor1263.description = "HAnimSite r_acromion";
HAnimSite1262.children = new MFNode();

HAnimSite1262.children[0] = TouchSensor1263;

Shape Shape1264 = createNode("Shape");
Shape1264.USE = "HAnimSiteShape";
HAnimSite1262.children[1] = Shape1264;

HAnimSegment1235.children[8] = HAnimSite1262;

HAnimSite HAnimSite1265 = createNode("HAnimSite");
HAnimSite1265.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1265.name = "r_axilla_ant_pt";
HAnimSite1265.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor1266 = createNode("TouchSensor");
TouchSensor1266.description = "HAnimSite r_axilla_ant";
HAnimSite1265.children = new MFNode();

HAnimSite1265.children[0] = TouchSensor1266;

Shape Shape1267 = createNode("Shape");
Shape1267.USE = "HAnimSiteShape";
HAnimSite1265.children[1] = Shape1267;

HAnimSegment1235.children[9] = HAnimSite1265;

HAnimSite HAnimSite1268 = createNode("HAnimSite");
HAnimSite1268.DEF = "hanim_r_axilla_post_pt";
HAnimSite1268.name = "r_axilla_post_pt";
HAnimSite1268.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor1269 = createNode("TouchSensor");
TouchSensor1269.description = "HAnimSite r_axilla_post";
HAnimSite1268.children = new MFNode();

HAnimSite1268.children[0] = TouchSensor1269;

Shape Shape1270 = createNode("Shape");
Shape1270.USE = "HAnimSiteShape";
HAnimSite1268.children[1] = Shape1270;

HAnimSegment1235.children[10] = HAnimSite1268;

HAnimJoint1234.children = new MFNode();

HAnimJoint1234.children[0] = HAnimSegment1235;

HAnimJoint HAnimJoint1271 = createNode("HAnimJoint");
HAnimJoint1271.DEF = "hanim_r_acromioclavicular";
HAnimJoint1271.name = "r_acromioclavicular";
HAnimJoint1271.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment1272 = createNode("HAnimSegment");
HAnimSegment1272.DEF = "hanim_r_scapula";
HAnimSegment1272.name = "r_scapula";
TouchSensor TouchSensor1273 = createNode("TouchSensor");
TouchSensor1273.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1272.children = new MFNode();

HAnimSegment1272.children[0] = TouchSensor1273;

Transform Transform1274 = createNode("Transform");
Transform1274.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
Shape Shape1275 = createNode("Shape");
Shape1275.USE = "HAnimJointShape";
Transform1274.child = new undefined();

Transform1274.child[0] = Shape1275;

HAnimSegment1272.children[1] = Transform1274;

Shape Shape1276 = createNode("Shape");
LineSet LineSet1277 = createNode("LineSet");
LineSet1277.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1278 = createNode("ColorRGBA");
ColorRGBA1278.USE = "HAnimSegmentLineColorRGBA";
LineSet1277.color = ColorRGBA1278;

Coordinate Coordinate1279 = createNode("Coordinate");
Coordinate1279.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1277.coord = Coordinate1279;

Shape1276.geometry = LineSet1277;

HAnimSegment1272.children[2] = Shape1276;

HAnimJoint1271.children = new MFNode();

HAnimJoint1271.children[0] = HAnimSegment1272;

HAnimJoint HAnimJoint1280 = createNode("HAnimJoint");
HAnimJoint1280.DEF = "hanim_r_shoulder";
HAnimJoint1280.name = "r_shoulder";
HAnimJoint1280.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment1281 = createNode("HAnimSegment");
HAnimSegment1281.DEF = "hanim_r_upperarm";
HAnimSegment1281.name = "r_upperarm";
TouchSensor TouchSensor1282 = createNode("TouchSensor");
TouchSensor1282.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1281.children = new MFNode();

HAnimSegment1281.children[0] = TouchSensor1282;

Transform Transform1283 = createNode("Transform");
Transform1283.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
Shape Shape1284 = createNode("Shape");
Shape1284.USE = "HAnimJointShape";
Transform1283.child = new undefined();

Transform1283.child[0] = Shape1284;

HAnimSegment1281.children[1] = Transform1283;

Shape Shape1285 = createNode("Shape");
LineSet LineSet1286 = createNode("LineSet");
LineSet1286.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1287 = createNode("ColorRGBA");
ColorRGBA1287.USE = "HAnimSegmentLineColorRGBA";
LineSet1286.color = ColorRGBA1287;

Coordinate Coordinate1288 = createNode("Coordinate");
Coordinate1288.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1286.coord = Coordinate1288;

Shape1285.geometry = LineSet1286;

HAnimSegment1281.children[2] = Shape1285;

Shape Shape1289 = createNode("Shape");
LineSet LineSet1290 = createNode("LineSet");
LineSet1290.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1291 = createNode("ColorRGBA");
ColorRGBA1291.USE = "HAnimSiteLineColorRGBA";
LineSet1290.color = ColorRGBA1291;

Coordinate Coordinate1292 = createNode("Coordinate");
Coordinate1292.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1290.coord = Coordinate1292;

Shape1289.geometry = LineSet1290;

HAnimSegment1281.children[3] = Shape1289;

HAnimSite HAnimSite1293 = createNode("HAnimSite");
HAnimSite1293.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1293.name = "r_humeral_lateral_epicn_pt";
HAnimSite1293.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1294 = createNode("TouchSensor");
TouchSensor1294.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1293.children = new MFNode();

HAnimSite1293.children[0] = TouchSensor1294;

Shape Shape1295 = createNode("Shape");
Shape1295.USE = "HAnimSiteShape";
HAnimSite1293.children[1] = Shape1295;

HAnimSegment1281.children[4] = HAnimSite1293;

HAnimJoint1280.children = new MFNode();

HAnimJoint1280.children[0] = HAnimSegment1281;

HAnimJoint HAnimJoint1296 = createNode("HAnimJoint");
HAnimJoint1296.DEF = "hanim_r_elbow";
HAnimJoint1296.name = "r_elbow";
HAnimJoint1296.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment1297 = createNode("HAnimSegment");
HAnimSegment1297.DEF = "hanim_r_forearm";
HAnimSegment1297.name = "r_forearm";
TouchSensor TouchSensor1298 = createNode("TouchSensor");
TouchSensor1298.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1297.children = new MFNode();

HAnimSegment1297.children[0] = TouchSensor1298;

Transform Transform1299 = createNode("Transform");
Transform1299.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
Shape Shape1300 = createNode("Shape");
Shape1300.USE = "HAnimJointShape";
Transform1299.child = new undefined();

Transform1299.child[0] = Shape1300;

HAnimSegment1297.children[1] = Transform1299;

Shape Shape1301 = createNode("Shape");
LineSet LineSet1302 = createNode("LineSet");
LineSet1302.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1303 = createNode("ColorRGBA");
ColorRGBA1303.USE = "HAnimSegmentLineColorRGBA";
LineSet1302.color = ColorRGBA1303;

Coordinate Coordinate1304 = createNode("Coordinate");
Coordinate1304.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1302.coord = Coordinate1304;

Shape1301.geometry = LineSet1302;

HAnimSegment1297.children[2] = Shape1301;

Shape Shape1305 = createNode("Shape");
LineSet LineSet1306 = createNode("LineSet");
LineSet1306.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1307 = createNode("ColorRGBA");
ColorRGBA1307.USE = "HAnimSiteLineColorRGBA";
LineSet1306.color = ColorRGBA1307;

Coordinate Coordinate1308 = createNode("Coordinate");
Coordinate1308.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1306.coord = Coordinate1308;

Shape1305.geometry = LineSet1306;

HAnimSegment1297.children[3] = Shape1305;

Shape Shape1309 = createNode("Shape");
LineSet LineSet1310 = createNode("LineSet");
LineSet1310.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1311 = createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSiteLineColorRGBA";
LineSet1310.color = ColorRGBA1311;

Coordinate Coordinate1312 = createNode("Coordinate");
Coordinate1312.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1310.coord = Coordinate1312;

Shape1309.geometry = LineSet1310;

HAnimSegment1297.children[4] = Shape1309;

Shape Shape1313 = createNode("Shape");
LineSet LineSet1314 = createNode("LineSet");
LineSet1314.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1315 = createNode("ColorRGBA");
ColorRGBA1315.USE = "HAnimSiteLineColorRGBA";
LineSet1314.color = ColorRGBA1315;

Coordinate Coordinate1316 = createNode("Coordinate");
Coordinate1316.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1314.coord = Coordinate1316;

Shape1313.geometry = LineSet1314;

HAnimSegment1297.children[5] = Shape1313;

Shape Shape1317 = createNode("Shape");
LineSet LineSet1318 = createNode("LineSet");
LineSet1318.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1319 = createNode("ColorRGBA");
ColorRGBA1319.USE = "HAnimSiteLineColorRGBA";
LineSet1318.color = ColorRGBA1319;

Coordinate Coordinate1320 = createNode("Coordinate");
Coordinate1320.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1318.coord = Coordinate1320;

Shape1317.geometry = LineSet1318;

HAnimSegment1297.children[6] = Shape1317;

HAnimSite HAnimSite1321 = createNode("HAnimSite");
HAnimSite1321.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1321.name = "r_radial_styloid_pt";
HAnimSite1321.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1322 = createNode("TouchSensor");
TouchSensor1322.description = "HAnimSite r_radial_styloid";
HAnimSite1321.children = new MFNode();

HAnimSite1321.children[0] = TouchSensor1322;

Shape Shape1323 = createNode("Shape");
Shape1323.USE = "HAnimSiteShape";
HAnimSite1321.children[1] = Shape1323;

HAnimSegment1297.children[7] = HAnimSite1321;

HAnimSite HAnimSite1324 = createNode("HAnimSite");
HAnimSite1324.DEF = "hanim_r_olecranon_pt";
HAnimSite1324.name = "r_olecranon_pt";
HAnimSite1324.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1325 = createNode("TouchSensor");
TouchSensor1325.description = "HAnimSite r_olecranon";
HAnimSite1324.children = new MFNode();

HAnimSite1324.children[0] = TouchSensor1325;

Shape Shape1326 = createNode("Shape");
Shape1326.USE = "HAnimSiteShape";
HAnimSite1324.children[1] = Shape1326;

HAnimSegment1297.children[8] = HAnimSite1324;

HAnimSite HAnimSite1327 = createNode("HAnimSite");
HAnimSite1327.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1327.name = "r_humeral_medial_epicn_pt";
HAnimSite1327.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1328 = createNode("TouchSensor");
TouchSensor1328.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1327.children = new MFNode();

HAnimSite1327.children[0] = TouchSensor1328;

Shape Shape1329 = createNode("Shape");
Shape1329.USE = "HAnimSiteShape";
HAnimSite1327.children[1] = Shape1329;

HAnimSegment1297.children[9] = HAnimSite1327;

HAnimSite HAnimSite1330 = createNode("HAnimSite");
HAnimSite1330.DEF = "hanim_r_radiale_pt";
HAnimSite1330.name = "r_radiale_pt";
HAnimSite1330.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1331 = createNode("TouchSensor");
TouchSensor1331.description = "HAnimSite r_radiale";
HAnimSite1330.children = new MFNode();

HAnimSite1330.children[0] = TouchSensor1331;

Shape Shape1332 = createNode("Shape");
Shape1332.USE = "HAnimSiteShape";
HAnimSite1330.children[1] = Shape1332;

HAnimSegment1297.children[10] = HAnimSite1330;

HAnimJoint1296.children = new MFNode();

HAnimJoint1296.children[0] = HAnimSegment1297;

HAnimJoint HAnimJoint1333 = createNode("HAnimJoint");
HAnimJoint1333.DEF = "hanim_r_wrist";
HAnimJoint1333.name = "r_wrist";
HAnimJoint1333.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment1334 = createNode("HAnimSegment");
HAnimSegment1334.DEF = "hanim_r_hand";
HAnimSegment1334.name = "r_hand";
TouchSensor TouchSensor1335 = createNode("TouchSensor");
TouchSensor1335.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1334.children = new MFNode();

HAnimSegment1334.children[0] = TouchSensor1335;

Transform Transform1336 = createNode("Transform");
Transform1336.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
Shape Shape1337 = createNode("Shape");
Shape1337.USE = "HAnimJointShape";
Transform1336.child = new undefined();

Transform1336.child[0] = Shape1337;

HAnimSegment1334.children[1] = Transform1336;

Shape Shape1338 = createNode("Shape");
LineSet LineSet1339 = createNode("LineSet");
LineSet1339.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1340 = createNode("ColorRGBA");
ColorRGBA1340.USE = "HAnimSegmentLineColorRGBA";
LineSet1339.color = ColorRGBA1340;

Coordinate Coordinate1341 = createNode("Coordinate");
Coordinate1341.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1339.coord = Coordinate1341;

Shape1338.geometry = LineSet1339;

HAnimSegment1334.children[2] = Shape1338;

Shape Shape1342 = createNode("Shape");
LineSet LineSet1343 = createNode("LineSet");
LineSet1343.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1344 = createNode("ColorRGBA");
ColorRGBA1344.USE = "HAnimSegmentLineColorRGBA";
LineSet1343.color = ColorRGBA1344;

Coordinate Coordinate1345 = createNode("Coordinate");
Coordinate1345.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1343.coord = Coordinate1345;

Shape1342.geometry = LineSet1343;

HAnimSegment1334.children[3] = Shape1342;

Shape Shape1346 = createNode("Shape");
LineSet LineSet1347 = createNode("LineSet");
LineSet1347.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1348 = createNode("ColorRGBA");
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA";
LineSet1347.color = ColorRGBA1348;

Coordinate Coordinate1349 = createNode("Coordinate");
Coordinate1349.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1347.coord = Coordinate1349;

Shape1346.geometry = LineSet1347;

HAnimSegment1334.children[4] = Shape1346;

Shape Shape1350 = createNode("Shape");
LineSet LineSet1351 = createNode("LineSet");
LineSet1351.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1352 = createNode("ColorRGBA");
ColorRGBA1352.USE = "HAnimSegmentLineColorRGBA";
LineSet1351.color = ColorRGBA1352;

Coordinate Coordinate1353 = createNode("Coordinate");
Coordinate1353.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1351.coord = Coordinate1353;

Shape1350.geometry = LineSet1351;

HAnimSegment1334.children[5] = Shape1350;

Shape Shape1354 = createNode("Shape");
LineSet LineSet1355 = createNode("LineSet");
LineSet1355.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1356 = createNode("ColorRGBA");
ColorRGBA1356.USE = "HAnimSegmentLineColorRGBA";
LineSet1355.color = ColorRGBA1356;

Coordinate Coordinate1357 = createNode("Coordinate");
Coordinate1357.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1355.coord = Coordinate1357;

Shape1354.geometry = LineSet1355;

HAnimSegment1334.children[6] = Shape1354;

Shape Shape1358 = createNode("Shape");
LineSet LineSet1359 = createNode("LineSet");
LineSet1359.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1360 = createNode("ColorRGBA");
ColorRGBA1360.USE = "HAnimSiteLineColorRGBA";
LineSet1359.color = ColorRGBA1360;

Coordinate Coordinate1361 = createNode("Coordinate");
Coordinate1361.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1359.coord = Coordinate1361;

Shape1358.geometry = LineSet1359;

HAnimSegment1334.children[7] = Shape1358;

Shape Shape1362 = createNode("Shape");
LineSet LineSet1363 = createNode("LineSet");
LineSet1363.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1364 = createNode("ColorRGBA");
ColorRGBA1364.USE = "HAnimSiteLineColorRGBA";
LineSet1363.color = ColorRGBA1364;

Coordinate Coordinate1365 = createNode("Coordinate");
Coordinate1365.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1363.coord = Coordinate1365;

Shape1362.geometry = LineSet1363;

HAnimSegment1334.children[8] = Shape1362;

Shape Shape1366 = createNode("Shape");
LineSet LineSet1367 = createNode("LineSet");
LineSet1367.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1368 = createNode("ColorRGBA");
ColorRGBA1368.USE = "HAnimSiteLineColorRGBA";
LineSet1367.color = ColorRGBA1368;

Coordinate Coordinate1369 = createNode("Coordinate");
Coordinate1369.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1367.coord = Coordinate1369;

Shape1366.geometry = LineSet1367;

HAnimSegment1334.children[9] = Shape1366;

Shape Shape1370 = createNode("Shape");
LineSet LineSet1371 = createNode("LineSet");
LineSet1371.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1372 = createNode("ColorRGBA");
ColorRGBA1372.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1371.color = ColorRGBA1372;

Coordinate Coordinate1373 = createNode("Coordinate");
Coordinate1373.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1371.coord = Coordinate1373;

Shape1370.geometry = LineSet1371;

HAnimSegment1334.children[10] = Shape1370;

HAnimSite HAnimSite1374 = createNode("HAnimSite");
HAnimSite1374.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1374.name = "r_metacarpal_pha2_pt";
HAnimSite1374.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1375 = createNode("TouchSensor");
TouchSensor1375.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1374.children = new MFNode();

HAnimSite1374.children[0] = TouchSensor1375;

Shape Shape1376 = createNode("Shape");
Shape1376.USE = "HAnimSiteShape";
HAnimSite1374.children[1] = Shape1376;

HAnimSegment1334.children[11] = HAnimSite1374;

HAnimSite HAnimSite1377 = createNode("HAnimSite");
HAnimSite1377.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1377.name = "r_ulnar_styloid_pt";
HAnimSite1377.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1378 = createNode("TouchSensor");
TouchSensor1378.description = "HAnimSite r_ulnar_styloid";
HAnimSite1377.children = new MFNode();

HAnimSite1377.children[0] = TouchSensor1378;

Shape Shape1379 = createNode("Shape");
Shape1379.USE = "HAnimSiteShape";
HAnimSite1377.children[1] = Shape1379;

HAnimSegment1334.children[12] = HAnimSite1377;

HAnimSite HAnimSite1380 = createNode("HAnimSite");
HAnimSite1380.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1380.name = "r_metacarpal_pha5_pt";
HAnimSite1380.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1381 = createNode("TouchSensor");
TouchSensor1381.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1380.children = new MFNode();

HAnimSite1380.children[0] = TouchSensor1381;

Shape Shape1382 = createNode("Shape");
Shape1382.USE = "HAnimSiteShape";
HAnimSite1380.children[1] = Shape1382;

HAnimSegment1334.children[13] = HAnimSite1380;

HAnimSite HAnimSite1383 = createNode("HAnimSite");
HAnimSite1383.DEF = "hanim_r_hand_front_view";
HAnimSite1383.name = "r_hand_front_view";
HAnimSite1383.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
TouchSensor TouchSensor1384 = createNode("TouchSensor");
TouchSensor1384.description = "HAnimSite r_hand_front_view";
HAnimSite1383.children = new MFNode();

HAnimSite1383.children[0] = TouchSensor1384;

Shape Shape1385 = createNode("Shape");
Shape1385.USE = "HAnimSiteShape";
HAnimSite1383.children[1] = Shape1385;

Viewpoint Viewpoint1386 = createNode("Viewpoint");
Viewpoint1386.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1386.description = "right hand front";
Viewpoint1386.position = new SFVec3f(new float[0,0,0]);
Viewpoint1386.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
HAnimSite1383.children[2] = Viewpoint1386;

Anchor Anchor1387 = createNode("Anchor");
Anchor1387.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1387.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
LOD LOD1388 = createNode("LOD");
LOD1388.forceTransitions = True;
LOD1388.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1389 = createNode("WorldInfo");
WorldInfo1389.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1388.children = new MFNode();

LOD1388.children[0] = WorldInfo1389;

Shape Shape1390 = createNode("Shape");
Shape1390.USE = "HAnimSiteViewpointShape";
LOD1388.children[1] = Shape1390;

Anchor1387.children = new MFNode();

Anchor1387.children[0] = LOD1388;

HAnimSite1383.children[3] = Anchor1387;

HAnimSegment1334.children[14] = HAnimSite1383;

HAnimJoint1333.children = new MFNode();

HAnimJoint1333.children[0] = HAnimSegment1334;

HAnimJoint HAnimJoint1391 = createNode("HAnimJoint");
HAnimJoint1391.DEF = "hanim_r_thumb1";
HAnimJoint1391.name = "r_thumb1";
HAnimJoint1391.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment1392 = createNode("HAnimSegment");
HAnimSegment1392.DEF = "hanim_r_thumb_metacarpal";
HAnimSegment1392.name = "r_thumb_metacarpal";
TouchSensor TouchSensor1393 = createNode("TouchSensor");
TouchSensor1393.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1392.children = new MFNode();

HAnimSegment1392.children[0] = TouchSensor1393;

Transform Transform1394 = createNode("Transform");
Transform1394.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
Shape Shape1395 = createNode("Shape");
Shape1395.USE = "HAnimJointShape";
Transform1394.child = new undefined();

Transform1394.child[0] = Shape1395;

HAnimSegment1392.children[1] = Transform1394;

Shape Shape1396 = createNode("Shape");
LineSet LineSet1397 = createNode("LineSet");
LineSet1397.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1398 = createNode("ColorRGBA");
ColorRGBA1398.USE = "HAnimSegmentLineColorRGBA";
LineSet1397.color = ColorRGBA1398;

Coordinate Coordinate1399 = createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1397.coord = Coordinate1399;

Shape1396.geometry = LineSet1397;

HAnimSegment1392.children[2] = Shape1396;

HAnimJoint1391.children = new MFNode();

HAnimJoint1391.children[0] = HAnimSegment1392;

HAnimJoint HAnimJoint1400 = createNode("HAnimJoint");
HAnimJoint1400.DEF = "hanim_r_thumb2";
HAnimJoint1400.name = "r_thumb2";
HAnimJoint1400.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment1401 = createNode("HAnimSegment");
HAnimSegment1401.DEF = "hanim_r_thumb_proximal";
HAnimSegment1401.name = "r_thumb_proximal";
TouchSensor TouchSensor1402 = createNode("TouchSensor");
TouchSensor1402.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1401.children = new MFNode();

HAnimSegment1401.children[0] = TouchSensor1402;

Transform Transform1403 = createNode("Transform");
Transform1403.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
Shape Shape1404 = createNode("Shape");
Shape1404.USE = "HAnimJointShape";
Transform1403.child = new undefined();

Transform1403.child[0] = Shape1404;

HAnimSegment1401.children[1] = Transform1403;

Shape Shape1405 = createNode("Shape");
LineSet LineSet1406 = createNode("LineSet");
LineSet1406.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1407 = createNode("ColorRGBA");
ColorRGBA1407.USE = "HAnimSegmentLineColorRGBA";
LineSet1406.color = ColorRGBA1407;

Coordinate Coordinate1408 = createNode("Coordinate");
Coordinate1408.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1406.coord = Coordinate1408;

Shape1405.geometry = LineSet1406;

HAnimSegment1401.children[2] = Shape1405;

HAnimJoint1400.children = new MFNode();

HAnimJoint1400.children[0] = HAnimSegment1401;

HAnimJoint HAnimJoint1409 = createNode("HAnimJoint");
HAnimJoint1409.DEF = "hanim_r_thumb3";
HAnimJoint1409.name = "r_thumb3";
HAnimJoint1409.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment1410 = createNode("HAnimSegment");
HAnimSegment1410.DEF = "hanim_r_thumb_distal";
HAnimSegment1410.name = "r_thumb_distal";
TouchSensor TouchSensor1411 = createNode("TouchSensor");
TouchSensor1411.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1410.children = new MFNode();

HAnimSegment1410.children[0] = TouchSensor1411;

Transform Transform1412 = createNode("Transform");
Transform1412.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
Shape Shape1413 = createNode("Shape");
Shape1413.USE = "HAnimJointShape";
Transform1412.child = new undefined();

Transform1412.child[0] = Shape1413;

HAnimSegment1410.children[1] = Transform1412;

Shape Shape1414 = createNode("Shape");
LineSet LineSet1415 = createNode("LineSet");
LineSet1415.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1416 = createNode("ColorRGBA");
ColorRGBA1416.USE = "HAnimSiteLineColorRGBA";
LineSet1415.color = ColorRGBA1416;

Coordinate Coordinate1417 = createNode("Coordinate");
Coordinate1417.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1415.coord = Coordinate1417;

Shape1414.geometry = LineSet1415;

HAnimSegment1410.children[2] = Shape1414;

HAnimSite HAnimSite1418 = createNode("HAnimSite");
HAnimSite1418.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1418.name = "r_thumb_distal_tip";
HAnimSite1418.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
TouchSensor TouchSensor1419 = createNode("TouchSensor");
TouchSensor1419.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1418.children = new MFNode();

HAnimSite1418.children[0] = TouchSensor1419;

Shape Shape1420 = createNode("Shape");
Shape1420.USE = "HAnimSiteShape";
HAnimSite1418.children[1] = Shape1420;

HAnimSegment1410.children[3] = HAnimSite1418;

HAnimJoint1409.children = new MFNode();

HAnimJoint1409.children[0] = HAnimSegment1410;

HAnimJoint1400.children[1] = HAnimJoint1409;

HAnimJoint1391.children[1] = HAnimJoint1400;

HAnimJoint1333.children[1] = HAnimJoint1391;

HAnimJoint HAnimJoint1421 = createNode("HAnimJoint");
HAnimJoint1421.DEF = "hanim_r_index0";
HAnimJoint1421.name = "r_index0";
HAnimJoint1421.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment1422 = createNode("HAnimSegment");
HAnimSegment1422.DEF = "hanim_r_index_metacarpal";
HAnimSegment1422.name = "r_index_metacarpal";
TouchSensor TouchSensor1423 = createNode("TouchSensor");
TouchSensor1423.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1422.children = new MFNode();

HAnimSegment1422.children[0] = TouchSensor1423;

Transform Transform1424 = createNode("Transform");
Transform1424.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
Shape Shape1425 = createNode("Shape");
Shape1425.USE = "HAnimJointShape";
Transform1424.child = new undefined();

Transform1424.child[0] = Shape1425;

HAnimSegment1422.children[1] = Transform1424;

Shape Shape1426 = createNode("Shape");
LineSet LineSet1427 = createNode("LineSet");
LineSet1427.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1428 = createNode("ColorRGBA");
ColorRGBA1428.USE = "HAnimSegmentLineColorRGBA";
LineSet1427.color = ColorRGBA1428;

Coordinate Coordinate1429 = createNode("Coordinate");
Coordinate1429.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1427.coord = Coordinate1429;

Shape1426.geometry = LineSet1427;

HAnimSegment1422.children[2] = Shape1426;

HAnimJoint1421.children = new MFNode();

HAnimJoint1421.children[0] = HAnimSegment1422;

HAnimJoint HAnimJoint1430 = createNode("HAnimJoint");
HAnimJoint1430.DEF = "hanim_r_index1";
HAnimJoint1430.name = "r_index1";
HAnimJoint1430.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment1431 = createNode("HAnimSegment");
HAnimSegment1431.DEF = "hanim_r_index_proximal";
HAnimSegment1431.name = "r_index_proximal";
TouchSensor TouchSensor1432 = createNode("TouchSensor");
TouchSensor1432.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1431.children = new MFNode();

HAnimSegment1431.children[0] = TouchSensor1432;

Transform Transform1433 = createNode("Transform");
Transform1433.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
Shape Shape1434 = createNode("Shape");
Shape1434.USE = "HAnimJointShape";
Transform1433.child = new undefined();

Transform1433.child[0] = Shape1434;

HAnimSegment1431.children[1] = Transform1433;

Shape Shape1435 = createNode("Shape");
LineSet LineSet1436 = createNode("LineSet");
LineSet1436.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1437 = createNode("ColorRGBA");
ColorRGBA1437.USE = "HAnimSegmentLineColorRGBA";
LineSet1436.color = ColorRGBA1437;

Coordinate Coordinate1438 = createNode("Coordinate");
Coordinate1438.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1436.coord = Coordinate1438;

Shape1435.geometry = LineSet1436;

HAnimSegment1431.children[2] = Shape1435;

HAnimJoint1430.children = new MFNode();

HAnimJoint1430.children[0] = HAnimSegment1431;

HAnimJoint HAnimJoint1439 = createNode("HAnimJoint");
HAnimJoint1439.DEF = "hanim_r_index2";
HAnimJoint1439.name = "r_index2";
HAnimJoint1439.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment1440 = createNode("HAnimSegment");
HAnimSegment1440.DEF = "hanim_r_index_middle";
HAnimSegment1440.name = "r_index_middle";
TouchSensor TouchSensor1441 = createNode("TouchSensor");
TouchSensor1441.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1440.children = new MFNode();

HAnimSegment1440.children[0] = TouchSensor1441;

Transform Transform1442 = createNode("Transform");
Transform1442.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
Shape Shape1443 = createNode("Shape");
Shape1443.USE = "HAnimJointShape";
Transform1442.child = new undefined();

Transform1442.child[0] = Shape1443;

HAnimSegment1440.children[1] = Transform1442;

Shape Shape1444 = createNode("Shape");
LineSet LineSet1445 = createNode("LineSet");
LineSet1445.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1446 = createNode("ColorRGBA");
ColorRGBA1446.USE = "HAnimSegmentLineColorRGBA";
LineSet1445.color = ColorRGBA1446;

Coordinate Coordinate1447 = createNode("Coordinate");
Coordinate1447.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1445.coord = Coordinate1447;

Shape1444.geometry = LineSet1445;

HAnimSegment1440.children[2] = Shape1444;

HAnimJoint1439.children = new MFNode();

HAnimJoint1439.children[0] = HAnimSegment1440;

HAnimJoint HAnimJoint1448 = createNode("HAnimJoint");
HAnimJoint1448.DEF = "hanim_r_index3";
HAnimJoint1448.name = "r_index3";
HAnimJoint1448.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment1449 = createNode("HAnimSegment");
HAnimSegment1449.DEF = "hanim_r_index_distal";
HAnimSegment1449.name = "r_index_distal";
TouchSensor TouchSensor1450 = createNode("TouchSensor");
TouchSensor1450.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1449.children = new MFNode();

HAnimSegment1449.children[0] = TouchSensor1450;

Transform Transform1451 = createNode("Transform");
Transform1451.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
Shape Shape1452 = createNode("Shape");
Shape1452.USE = "HAnimJointShape";
Transform1451.child = new undefined();

Transform1451.child[0] = Shape1452;

HAnimSegment1449.children[1] = Transform1451;

Shape Shape1453 = createNode("Shape");
LineSet LineSet1454 = createNode("LineSet");
LineSet1454.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1455 = createNode("ColorRGBA");
ColorRGBA1455.USE = "HAnimSiteLineColorRGBA";
LineSet1454.color = ColorRGBA1455;

Coordinate Coordinate1456 = createNode("Coordinate");
Coordinate1456.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1454.coord = Coordinate1456;

Shape1453.geometry = LineSet1454;

HAnimSegment1449.children[2] = Shape1453;

Shape Shape1457 = createNode("Shape");
LineSet LineSet1458 = createNode("LineSet");
LineSet1458.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1459 = createNode("ColorRGBA");
ColorRGBA1459.USE = "HAnimSiteLineColorRGBA";
LineSet1458.color = ColorRGBA1459;

Coordinate Coordinate1460 = createNode("Coordinate");
Coordinate1460.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1458.coord = Coordinate1460;

Shape1457.geometry = LineSet1458;

HAnimSegment1449.children[3] = Shape1457;

HAnimSite HAnimSite1461 = createNode("HAnimSite");
HAnimSite1461.DEF = "hanim_r_index_distal_tip";
HAnimSite1461.name = "r_index_distal_tip";
HAnimSite1461.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
TouchSensor TouchSensor1462 = createNode("TouchSensor");
TouchSensor1462.description = "HAnimSite r_index_distal_tip";
HAnimSite1461.children = new MFNode();

HAnimSite1461.children[0] = TouchSensor1462;

Shape Shape1463 = createNode("Shape");
Shape1463.USE = "HAnimSiteShape";
HAnimSite1461.children[1] = Shape1463;

HAnimSegment1449.children[4] = HAnimSite1461;

HAnimSite HAnimSite1464 = createNode("HAnimSite");
HAnimSite1464.DEF = "hanim_r_dactylion_pt";
HAnimSite1464.name = "r_dactylion_pt";
HAnimSite1464.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1465 = createNode("TouchSensor");
TouchSensor1465.description = "HAnimSite r_dactylion";
HAnimSite1464.children = new MFNode();

HAnimSite1464.children[0] = TouchSensor1465;

Shape Shape1466 = createNode("Shape");
Shape1466.USE = "HAnimSiteShape";
HAnimSite1464.children[1] = Shape1466;

HAnimSegment1449.children[5] = HAnimSite1464;

HAnimJoint1448.children = new MFNode();

HAnimJoint1448.children[0] = HAnimSegment1449;

HAnimJoint1439.children[1] = HAnimJoint1448;

HAnimJoint1430.children[1] = HAnimJoint1439;

HAnimJoint1421.children[1] = HAnimJoint1430;

HAnimJoint1333.children[2] = HAnimJoint1421;

HAnimJoint HAnimJoint1467 = createNode("HAnimJoint");
HAnimJoint1467.DEF = "hanim_r_middle0";
HAnimJoint1467.name = "r_middle0";
HAnimJoint1467.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment1468 = createNode("HAnimSegment");
HAnimSegment1468.DEF = "hanim_r_middle_metacarpal";
HAnimSegment1468.name = "r_middle_metacarpal";
TouchSensor TouchSensor1469 = createNode("TouchSensor");
TouchSensor1469.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1468.children = new MFNode();

HAnimSegment1468.children[0] = TouchSensor1469;

Transform Transform1470 = createNode("Transform");
Transform1470.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
Shape Shape1471 = createNode("Shape");
Shape1471.USE = "HAnimJointShape";
Transform1470.child = new undefined();

Transform1470.child[0] = Shape1471;

HAnimSegment1468.children[1] = Transform1470;

Shape Shape1472 = createNode("Shape");
LineSet LineSet1473 = createNode("LineSet");
LineSet1473.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1474 = createNode("ColorRGBA");
ColorRGBA1474.USE = "HAnimSegmentLineColorRGBA";
LineSet1473.color = ColorRGBA1474;

Coordinate Coordinate1475 = createNode("Coordinate");
Coordinate1475.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1473.coord = Coordinate1475;

Shape1472.geometry = LineSet1473;

HAnimSegment1468.children[2] = Shape1472;

HAnimJoint1467.children = new MFNode();

HAnimJoint1467.children[0] = HAnimSegment1468;

HAnimJoint HAnimJoint1476 = createNode("HAnimJoint");
HAnimJoint1476.DEF = "hanim_r_middle1";
HAnimJoint1476.name = "r_middle1";
HAnimJoint1476.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment1477 = createNode("HAnimSegment");
HAnimSegment1477.DEF = "hanim_r_middle_proximal";
HAnimSegment1477.name = "r_middle_proximal";
TouchSensor TouchSensor1478 = createNode("TouchSensor");
TouchSensor1478.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1477.children = new MFNode();

HAnimSegment1477.children[0] = TouchSensor1478;

Transform Transform1479 = createNode("Transform");
Transform1479.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
Shape Shape1480 = createNode("Shape");
Shape1480.USE = "HAnimJointShape";
Transform1479.child = new undefined();

Transform1479.child[0] = Shape1480;

HAnimSegment1477.children[1] = Transform1479;

Shape Shape1481 = createNode("Shape");
LineSet LineSet1482 = createNode("LineSet");
LineSet1482.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1483 = createNode("ColorRGBA");
ColorRGBA1483.USE = "HAnimSegmentLineColorRGBA";
LineSet1482.color = ColorRGBA1483;

Coordinate Coordinate1484 = createNode("Coordinate");
Coordinate1484.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1482.coord = Coordinate1484;

Shape1481.geometry = LineSet1482;

HAnimSegment1477.children[2] = Shape1481;

HAnimJoint1476.children = new MFNode();

HAnimJoint1476.children[0] = HAnimSegment1477;

HAnimJoint HAnimJoint1485 = createNode("HAnimJoint");
HAnimJoint1485.DEF = "hanim_r_middle2";
HAnimJoint1485.name = "r_middle2";
HAnimJoint1485.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment1486 = createNode("HAnimSegment");
HAnimSegment1486.DEF = "hanim_r_middle_middle";
HAnimSegment1486.name = "r_middle_middle";
TouchSensor TouchSensor1487 = createNode("TouchSensor");
TouchSensor1487.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1486.children = new MFNode();

HAnimSegment1486.children[0] = TouchSensor1487;

Transform Transform1488 = createNode("Transform");
Transform1488.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
Shape Shape1489 = createNode("Shape");
Shape1489.USE = "HAnimJointShape";
Transform1488.child = new undefined();

Transform1488.child[0] = Shape1489;

HAnimSegment1486.children[1] = Transform1488;

Shape Shape1490 = createNode("Shape");
LineSet LineSet1491 = createNode("LineSet");
LineSet1491.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1492 = createNode("ColorRGBA");
ColorRGBA1492.USE = "HAnimSegmentLineColorRGBA";
LineSet1491.color = ColorRGBA1492;

Coordinate Coordinate1493 = createNode("Coordinate");
Coordinate1493.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1491.coord = Coordinate1493;

Shape1490.geometry = LineSet1491;

HAnimSegment1486.children[2] = Shape1490;

HAnimJoint1485.children = new MFNode();

HAnimJoint1485.children[0] = HAnimSegment1486;

HAnimJoint HAnimJoint1494 = createNode("HAnimJoint");
HAnimJoint1494.DEF = "hanim_r_middle3";
HAnimJoint1494.name = "r_middle3";
HAnimJoint1494.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimSegment HAnimSegment1495 = createNode("HAnimSegment");
HAnimSegment1495.DEF = "hanim_r_middle_distal";
HAnimSegment1495.name = "r_middle_distal";
TouchSensor TouchSensor1496 = createNode("TouchSensor");
TouchSensor1496.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1495.children = new MFNode();

HAnimSegment1495.children[0] = TouchSensor1496;

Transform Transform1497 = createNode("Transform");
Transform1497.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
Shape Shape1498 = createNode("Shape");
Shape1498.USE = "HAnimJointShape";
Transform1497.child = new undefined();

Transform1497.child[0] = Shape1498;

HAnimSegment1495.children[1] = Transform1497;

Shape Shape1499 = createNode("Shape");
LineSet LineSet1500 = createNode("LineSet");
LineSet1500.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1501 = createNode("ColorRGBA");
ColorRGBA1501.USE = "HAnimSiteLineColorRGBA";
LineSet1500.color = ColorRGBA1501;

Coordinate Coordinate1502 = createNode("Coordinate");
Coordinate1502.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1500.coord = Coordinate1502;

Shape1499.geometry = LineSet1500;

HAnimSegment1495.children[2] = Shape1499;

HAnimSite HAnimSite1503 = createNode("HAnimSite");
HAnimSite1503.DEF = "hanim_r_middle_distal_tip";
HAnimSite1503.name = "r_middle_distal_tip";
HAnimSite1503.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
TouchSensor TouchSensor1504 = createNode("TouchSensor");
TouchSensor1504.description = "HAnimSite r_middle_distal_tip";
HAnimSite1503.children = new MFNode();

HAnimSite1503.children[0] = TouchSensor1504;

Shape Shape1505 = createNode("Shape");
Shape1505.USE = "HAnimSiteShape";
HAnimSite1503.children[1] = Shape1505;

HAnimSegment1495.children[3] = HAnimSite1503;

HAnimJoint1494.children = new MFNode();

HAnimJoint1494.children[0] = HAnimSegment1495;

HAnimJoint1485.children[1] = HAnimJoint1494;

HAnimJoint1476.children[1] = HAnimJoint1485;

HAnimJoint1467.children[1] = HAnimJoint1476;

HAnimJoint1333.children[3] = HAnimJoint1467;

HAnimJoint HAnimJoint1506 = createNode("HAnimJoint");
HAnimJoint1506.DEF = "hanim_r_ring0";
HAnimJoint1506.name = "r_ring0";
HAnimJoint1506.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment1507 = createNode("HAnimSegment");
HAnimSegment1507.DEF = "hanim_r_ring_metacarpal";
HAnimSegment1507.name = "r_ring_metacarpal";
TouchSensor TouchSensor1508 = createNode("TouchSensor");
TouchSensor1508.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1507.children = new MFNode();

HAnimSegment1507.children[0] = TouchSensor1508;

Transform Transform1509 = createNode("Transform");
Transform1509.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
Shape Shape1510 = createNode("Shape");
Shape1510.USE = "HAnimJointShape";
Transform1509.child = new undefined();

Transform1509.child[0] = Shape1510;

HAnimSegment1507.children[1] = Transform1509;

Shape Shape1511 = createNode("Shape");
LineSet LineSet1512 = createNode("LineSet");
LineSet1512.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1513 = createNode("ColorRGBA");
ColorRGBA1513.USE = "HAnimSegmentLineColorRGBA";
LineSet1512.color = ColorRGBA1513;

Coordinate Coordinate1514 = createNode("Coordinate");
Coordinate1514.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1512.coord = Coordinate1514;

Shape1511.geometry = LineSet1512;

HAnimSegment1507.children[2] = Shape1511;

HAnimJoint1506.children = new MFNode();

HAnimJoint1506.children[0] = HAnimSegment1507;

HAnimJoint HAnimJoint1515 = createNode("HAnimJoint");
HAnimJoint1515.DEF = "hanim_r_ring1";
HAnimJoint1515.name = "r_ring1";
HAnimJoint1515.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment1516 = createNode("HAnimSegment");
HAnimSegment1516.DEF = "hanim_r_ring_proximal";
HAnimSegment1516.name = "r_ring_proximal";
TouchSensor TouchSensor1517 = createNode("TouchSensor");
TouchSensor1517.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1516.children = new MFNode();

HAnimSegment1516.children[0] = TouchSensor1517;

Transform Transform1518 = createNode("Transform");
Transform1518.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
Shape Shape1519 = createNode("Shape");
Shape1519.USE = "HAnimJointShape";
Transform1518.child = new undefined();

Transform1518.child[0] = Shape1519;

HAnimSegment1516.children[1] = Transform1518;

Shape Shape1520 = createNode("Shape");
LineSet LineSet1521 = createNode("LineSet");
LineSet1521.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1522 = createNode("ColorRGBA");
ColorRGBA1522.USE = "HAnimSegmentLineColorRGBA";
LineSet1521.color = ColorRGBA1522;

Coordinate Coordinate1523 = createNode("Coordinate");
Coordinate1523.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1521.coord = Coordinate1523;

Shape1520.geometry = LineSet1521;

HAnimSegment1516.children[2] = Shape1520;

HAnimJoint1515.children = new MFNode();

HAnimJoint1515.children[0] = HAnimSegment1516;

HAnimJoint HAnimJoint1524 = createNode("HAnimJoint");
HAnimJoint1524.DEF = "hanim_r_ring2";
HAnimJoint1524.name = "r_ring2";
HAnimJoint1524.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment1525 = createNode("HAnimSegment");
HAnimSegment1525.DEF = "hanim_r_ring_middle";
HAnimSegment1525.name = "r_ring_middle";
TouchSensor TouchSensor1526 = createNode("TouchSensor");
TouchSensor1526.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1525.children = new MFNode();

HAnimSegment1525.children[0] = TouchSensor1526;

Transform Transform1527 = createNode("Transform");
Transform1527.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
Shape Shape1528 = createNode("Shape");
Shape1528.USE = "HAnimJointShape";
Transform1527.child = new undefined();

Transform1527.child[0] = Shape1528;

HAnimSegment1525.children[1] = Transform1527;

Shape Shape1529 = createNode("Shape");
LineSet LineSet1530 = createNode("LineSet");
LineSet1530.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1531 = createNode("ColorRGBA");
ColorRGBA1531.USE = "HAnimSegmentLineColorRGBA";
LineSet1530.color = ColorRGBA1531;

Coordinate Coordinate1532 = createNode("Coordinate");
Coordinate1532.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1530.coord = Coordinate1532;

Shape1529.geometry = LineSet1530;

HAnimSegment1525.children[2] = Shape1529;

HAnimJoint1524.children = new MFNode();

HAnimJoint1524.children[0] = HAnimSegment1525;

HAnimJoint HAnimJoint1533 = createNode("HAnimJoint");
HAnimJoint1533.DEF = "hanim_r_ring3";
HAnimJoint1533.name = "r_ring3";
HAnimJoint1533.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimSegment HAnimSegment1534 = createNode("HAnimSegment");
HAnimSegment1534.DEF = "hanim_r_ring_distal";
HAnimSegment1534.name = "r_ring_distal";
TouchSensor TouchSensor1535 = createNode("TouchSensor");
TouchSensor1535.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1534.children = new MFNode();

HAnimSegment1534.children[0] = TouchSensor1535;

Transform Transform1536 = createNode("Transform");
Transform1536.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
Shape Shape1537 = createNode("Shape");
Shape1537.USE = "HAnimJointShape";
Transform1536.child = new undefined();

Transform1536.child[0] = Shape1537;

HAnimSegment1534.children[1] = Transform1536;

Shape Shape1538 = createNode("Shape");
LineSet LineSet1539 = createNode("LineSet");
LineSet1539.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1540 = createNode("ColorRGBA");
ColorRGBA1540.USE = "HAnimSiteLineColorRGBA";
LineSet1539.color = ColorRGBA1540;

Coordinate Coordinate1541 = createNode("Coordinate");
Coordinate1541.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1539.coord = Coordinate1541;

Shape1538.geometry = LineSet1539;

HAnimSegment1534.children[2] = Shape1538;

HAnimSite HAnimSite1542 = createNode("HAnimSite");
HAnimSite1542.DEF = "hanim_r_ring_distal_tip";
HAnimSite1542.name = "r_ring_distal_tip";
HAnimSite1542.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
TouchSensor TouchSensor1543 = createNode("TouchSensor");
TouchSensor1543.description = "HAnimSite r_ring_distal_tip";
HAnimSite1542.children = new MFNode();

HAnimSite1542.children[0] = TouchSensor1543;

Shape Shape1544 = createNode("Shape");
Shape1544.USE = "HAnimSiteShape";
HAnimSite1542.children[1] = Shape1544;

HAnimSegment1534.children[3] = HAnimSite1542;

HAnimJoint1533.children = new MFNode();

HAnimJoint1533.children[0] = HAnimSegment1534;

HAnimJoint1524.children[1] = HAnimJoint1533;

HAnimJoint1515.children[1] = HAnimJoint1524;

HAnimJoint1506.children[1] = HAnimJoint1515;

HAnimJoint1333.children[4] = HAnimJoint1506;

HAnimJoint HAnimJoint1545 = createNode("HAnimJoint");
HAnimJoint1545.DEF = "hanim_r_pinky0";
HAnimJoint1545.name = "r_pinky0";
HAnimJoint1545.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment1546 = createNode("HAnimSegment");
HAnimSegment1546.DEF = "hanim_r_pinky_metacarpal";
HAnimSegment1546.name = "r_pinky_metacarpal";
TouchSensor TouchSensor1547 = createNode("TouchSensor");
TouchSensor1547.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1546.children = new MFNode();

HAnimSegment1546.children[0] = TouchSensor1547;

Transform Transform1548 = createNode("Transform");
Transform1548.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
Shape Shape1549 = createNode("Shape");
Shape1549.USE = "HAnimJointShape";
Transform1548.child = new undefined();

Transform1548.child[0] = Shape1549;

HAnimSegment1546.children[1] = Transform1548;

Shape Shape1550 = createNode("Shape");
LineSet LineSet1551 = createNode("LineSet");
LineSet1551.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1552 = createNode("ColorRGBA");
ColorRGBA1552.USE = "HAnimSegmentLineColorRGBA";
LineSet1551.color = ColorRGBA1552;

Coordinate Coordinate1553 = createNode("Coordinate");
Coordinate1553.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1551.coord = Coordinate1553;

Shape1550.geometry = LineSet1551;

HAnimSegment1546.children[2] = Shape1550;

HAnimJoint1545.children = new MFNode();

HAnimJoint1545.children[0] = HAnimSegment1546;

HAnimJoint HAnimJoint1554 = createNode("HAnimJoint");
HAnimJoint1554.DEF = "hanim_r_pinky1";
HAnimJoint1554.name = "r_pinky1";
HAnimJoint1554.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment1555 = createNode("HAnimSegment");
HAnimSegment1555.DEF = "hanim_r_pinky_proximal";
HAnimSegment1555.name = "r_pinky_proximal";
TouchSensor TouchSensor1556 = createNode("TouchSensor");
TouchSensor1556.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1555.children = new MFNode();

HAnimSegment1555.children[0] = TouchSensor1556;

Transform Transform1557 = createNode("Transform");
Transform1557.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
Shape Shape1558 = createNode("Shape");
Shape1558.USE = "HAnimJointShape";
Transform1557.child = new undefined();

Transform1557.child[0] = Shape1558;

HAnimSegment1555.children[1] = Transform1557;

Shape Shape1559 = createNode("Shape");
LineSet LineSet1560 = createNode("LineSet");
LineSet1560.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1561 = createNode("ColorRGBA");
ColorRGBA1561.USE = "HAnimSegmentLineColorRGBA";
LineSet1560.color = ColorRGBA1561;

Coordinate Coordinate1562 = createNode("Coordinate");
Coordinate1562.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1560.coord = Coordinate1562;

Shape1559.geometry = LineSet1560;

HAnimSegment1555.children[2] = Shape1559;

HAnimJoint1554.children = new MFNode();

HAnimJoint1554.children[0] = HAnimSegment1555;

HAnimJoint HAnimJoint1563 = createNode("HAnimJoint");
HAnimJoint1563.DEF = "hanim_r_pinky2";
HAnimJoint1563.name = "r_pinky2";
HAnimJoint1563.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment1564 = createNode("HAnimSegment");
HAnimSegment1564.DEF = "hanim_r_pinky_middle";
HAnimSegment1564.name = "r_pinky_middle";
TouchSensor TouchSensor1565 = createNode("TouchSensor");
TouchSensor1565.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1564.children = new MFNode();

HAnimSegment1564.children[0] = TouchSensor1565;

Transform Transform1566 = createNode("Transform");
Transform1566.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
Shape Shape1567 = createNode("Shape");
Shape1567.USE = "HAnimJointShape";
Transform1566.child = new undefined();

Transform1566.child[0] = Shape1567;

HAnimSegment1564.children[1] = Transform1566;

Shape Shape1568 = createNode("Shape");
LineSet LineSet1569 = createNode("LineSet");
LineSet1569.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1570 = createNode("ColorRGBA");
ColorRGBA1570.USE = "HAnimSegmentLineColorRGBA";
LineSet1569.color = ColorRGBA1570;

Coordinate Coordinate1571 = createNode("Coordinate");
Coordinate1571.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1569.coord = Coordinate1571;

Shape1568.geometry = LineSet1569;

HAnimSegment1564.children[2] = Shape1568;

HAnimJoint1563.children = new MFNode();

HAnimJoint1563.children[0] = HAnimSegment1564;

HAnimJoint HAnimJoint1572 = createNode("HAnimJoint");
HAnimJoint1572.DEF = "hanim_r_pinky3";
HAnimJoint1572.name = "r_pinky3";
HAnimJoint1572.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimSegment HAnimSegment1573 = createNode("HAnimSegment");
HAnimSegment1573.DEF = "hanim_r_pinky_distal";
HAnimSegment1573.name = "r_pinky_distal";
TouchSensor TouchSensor1574 = createNode("TouchSensor");
TouchSensor1574.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1573.children = new MFNode();

HAnimSegment1573.children[0] = TouchSensor1574;

Transform Transform1575 = createNode("Transform");
Transform1575.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
Shape Shape1576 = createNode("Shape");
Shape1576.USE = "HAnimJointShape";
Transform1575.child = new undefined();

Transform1575.child[0] = Shape1576;

HAnimSegment1573.children[1] = Transform1575;

Shape Shape1577 = createNode("Shape");
LineSet LineSet1578 = createNode("LineSet");
LineSet1578.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1579 = createNode("ColorRGBA");
ColorRGBA1579.USE = "HAnimSiteLineColorRGBA";
LineSet1578.color = ColorRGBA1579;

Coordinate Coordinate1580 = createNode("Coordinate");
Coordinate1580.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1578.coord = Coordinate1580;

Shape1577.geometry = LineSet1578;

HAnimSegment1573.children[2] = Shape1577;

HAnimSite HAnimSite1581 = createNode("HAnimSite");
HAnimSite1581.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1581.name = "r_pinky_distal_tip";
HAnimSite1581.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
TouchSensor TouchSensor1582 = createNode("TouchSensor");
TouchSensor1582.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1581.children = new MFNode();

HAnimSite1581.children[0] = TouchSensor1582;

Shape Shape1583 = createNode("Shape");
Shape1583.USE = "HAnimSiteShape";
HAnimSite1581.children[1] = Shape1583;

HAnimSegment1573.children[3] = HAnimSite1581;

HAnimJoint1572.children = new MFNode();

HAnimJoint1572.children[0] = HAnimSegment1573;

HAnimJoint1563.children[1] = HAnimJoint1572;

HAnimJoint1554.children[1] = HAnimJoint1563;

HAnimJoint1545.children[1] = HAnimJoint1554;

HAnimJoint1333.children[5] = HAnimJoint1545;

HAnimJoint1296.children[1] = HAnimJoint1333;

HAnimJoint1280.children[1] = HAnimJoint1296;

HAnimJoint1271.children[1] = HAnimJoint1280;

HAnimJoint1234.children[1] = HAnimJoint1271;

HAnimJoint596.children[3] = HAnimJoint1234;

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

HAnimJoint HAnimJoint1584 = createNode("HAnimJoint");
HAnimJoint1584.USE = "hanim_humanoid_root";
HAnimHumanoid45.joints[1] = HAnimJoint1584;

HAnimJoint HAnimJoint1585 = createNode("HAnimJoint");
HAnimJoint1585.USE = "hanim_sacroiliac";
HAnimHumanoid45.joints[2] = HAnimJoint1585;

HAnimJoint HAnimJoint1586 = createNode("HAnimJoint");
HAnimJoint1586.USE = "hanim_vl5";
HAnimHumanoid45.joints[3] = HAnimJoint1586;

HAnimJoint HAnimJoint1587 = createNode("HAnimJoint");
HAnimJoint1587.USE = "hanim_vl4";
HAnimHumanoid45.joints[4] = HAnimJoint1587;

HAnimJoint HAnimJoint1588 = createNode("HAnimJoint");
HAnimJoint1588.USE = "hanim_vl3";
HAnimHumanoid45.joints[5] = HAnimJoint1588;

HAnimJoint HAnimJoint1589 = createNode("HAnimJoint");
HAnimJoint1589.USE = "hanim_vl2";
HAnimHumanoid45.joints[6] = HAnimJoint1589;

HAnimJoint HAnimJoint1590 = createNode("HAnimJoint");
HAnimJoint1590.USE = "hanim_vl1";
HAnimHumanoid45.joints[7] = HAnimJoint1590;

HAnimJoint HAnimJoint1591 = createNode("HAnimJoint");
HAnimJoint1591.USE = "hanim_vt12";
HAnimHumanoid45.joints[8] = HAnimJoint1591;

HAnimJoint HAnimJoint1592 = createNode("HAnimJoint");
HAnimJoint1592.USE = "hanim_vt11";
HAnimHumanoid45.joints[9] = HAnimJoint1592;

HAnimJoint HAnimJoint1593 = createNode("HAnimJoint");
HAnimJoint1593.USE = "hanim_vt10";
HAnimHumanoid45.joints[10] = HAnimJoint1593;

HAnimJoint HAnimJoint1594 = createNode("HAnimJoint");
HAnimJoint1594.USE = "hanim_vt9";
HAnimHumanoid45.joints[11] = HAnimJoint1594;

HAnimJoint HAnimJoint1595 = createNode("HAnimJoint");
HAnimJoint1595.USE = "hanim_vt8";
HAnimHumanoid45.joints[12] = HAnimJoint1595;

HAnimJoint HAnimJoint1596 = createNode("HAnimJoint");
HAnimJoint1596.USE = "hanim_vt7";
HAnimHumanoid45.joints[13] = HAnimJoint1596;

HAnimJoint HAnimJoint1597 = createNode("HAnimJoint");
HAnimJoint1597.USE = "hanim_vt6";
HAnimHumanoid45.joints[14] = HAnimJoint1597;

HAnimJoint HAnimJoint1598 = createNode("HAnimJoint");
HAnimJoint1598.USE = "hanim_vt5";
HAnimHumanoid45.joints[15] = HAnimJoint1598;

HAnimJoint HAnimJoint1599 = createNode("HAnimJoint");
HAnimJoint1599.USE = "hanim_vt4";
HAnimHumanoid45.joints[16] = HAnimJoint1599;

HAnimJoint HAnimJoint1600 = createNode("HAnimJoint");
HAnimJoint1600.USE = "hanim_vt3";
HAnimHumanoid45.joints[17] = HAnimJoint1600;

HAnimJoint HAnimJoint1601 = createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_vt2";
HAnimHumanoid45.joints[18] = HAnimJoint1601;

HAnimJoint HAnimJoint1602 = createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_vt1";
HAnimHumanoid45.joints[19] = HAnimJoint1602;

HAnimJoint HAnimJoint1603 = createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_vc7";
HAnimHumanoid45.joints[20] = HAnimJoint1603;

HAnimJoint HAnimJoint1604 = createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_vc6";
HAnimHumanoid45.joints[21] = HAnimJoint1604;

HAnimJoint HAnimJoint1605 = createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_vc5";
HAnimHumanoid45.joints[22] = HAnimJoint1605;

HAnimJoint HAnimJoint1606 = createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_vc4";
HAnimHumanoid45.joints[23] = HAnimJoint1606;

HAnimJoint HAnimJoint1607 = createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_vc3";
HAnimHumanoid45.joints[24] = HAnimJoint1607;

HAnimJoint HAnimJoint1608 = createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_vc2";
HAnimHumanoid45.joints[25] = HAnimJoint1608;

HAnimJoint HAnimJoint1609 = createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_vc1";
HAnimHumanoid45.joints[26] = HAnimJoint1609;

HAnimJoint HAnimJoint1610 = createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_skullbase";
HAnimHumanoid45.joints[27] = HAnimJoint1610;

HAnimJoint HAnimJoint1611 = createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_temporomandibular";
HAnimHumanoid45.joints[28] = HAnimJoint1611;

HAnimJoint HAnimJoint1612 = createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_acromioclavicular";
HAnimHumanoid45.joints[29] = HAnimJoint1612;

HAnimJoint HAnimJoint1613 = createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_r_acromioclavicular";
HAnimHumanoid45.joints[30] = HAnimJoint1613;

HAnimJoint HAnimJoint1614 = createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_ankle";
HAnimHumanoid45.joints[31] = HAnimJoint1614;

HAnimJoint HAnimJoint1615 = createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_r_ankle";
HAnimHumanoid45.joints[32] = HAnimJoint1615;

HAnimJoint HAnimJoint1616 = createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_elbow";
HAnimHumanoid45.joints[33] = HAnimJoint1616;

HAnimJoint HAnimJoint1617 = createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_r_elbow";
HAnimHumanoid45.joints[34] = HAnimJoint1617;

HAnimJoint HAnimJoint1618 = createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_eyeball_joint";
HAnimHumanoid45.joints[35] = HAnimJoint1618;

HAnimJoint HAnimJoint1619 = createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_r_eyeball_joint";
HAnimHumanoid45.joints[36] = HAnimJoint1619;

HAnimJoint HAnimJoint1620 = createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid45.joints[37] = HAnimJoint1620;

HAnimJoint HAnimJoint1621 = createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid45.joints[38] = HAnimJoint1621;

HAnimJoint HAnimJoint1622 = createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_eyelid_joint";
HAnimHumanoid45.joints[39] = HAnimJoint1622;

HAnimJoint HAnimJoint1623 = createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_r_eyelid_joint";
HAnimHumanoid45.joints[40] = HAnimJoint1623;

HAnimJoint HAnimJoint1624 = createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_hip";
HAnimHumanoid45.joints[41] = HAnimJoint1624;

HAnimJoint HAnimJoint1625 = createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_r_hip";
HAnimHumanoid45.joints[42] = HAnimJoint1625;

HAnimJoint HAnimJoint1626 = createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_index0";
HAnimHumanoid45.joints[43] = HAnimJoint1626;

HAnimJoint HAnimJoint1627 = createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_r_index0";
HAnimHumanoid45.joints[44] = HAnimJoint1627;

HAnimJoint HAnimJoint1628 = createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_index1";
HAnimHumanoid45.joints[45] = HAnimJoint1628;

HAnimJoint HAnimJoint1629 = createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_r_index1";
HAnimHumanoid45.joints[46] = HAnimJoint1629;

HAnimJoint HAnimJoint1630 = createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_index2";
HAnimHumanoid45.joints[47] = HAnimJoint1630;

HAnimJoint HAnimJoint1631 = createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_r_index2";
HAnimHumanoid45.joints[48] = HAnimJoint1631;

HAnimJoint HAnimJoint1632 = createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_l_index3";
HAnimHumanoid45.joints[49] = HAnimJoint1632;

HAnimJoint HAnimJoint1633 = createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_r_index3";
HAnimHumanoid45.joints[50] = HAnimJoint1633;

HAnimJoint HAnimJoint1634 = createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_l_knee";
HAnimHumanoid45.joints[51] = HAnimJoint1634;

HAnimJoint HAnimJoint1635 = createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_r_knee";
HAnimHumanoid45.joints[52] = HAnimJoint1635;

HAnimJoint HAnimJoint1636 = createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_l_metatarsal";
HAnimHumanoid45.joints[53] = HAnimJoint1636;

HAnimJoint HAnimJoint1637 = createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_r_metatarsal";
HAnimHumanoid45.joints[54] = HAnimJoint1637;

HAnimJoint HAnimJoint1638 = createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_l_middle0";
HAnimHumanoid45.joints[55] = HAnimJoint1638;

HAnimJoint HAnimJoint1639 = createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_middle0";
HAnimHumanoid45.joints[56] = HAnimJoint1639;

HAnimJoint HAnimJoint1640 = createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_l_middle1";
HAnimHumanoid45.joints[57] = HAnimJoint1640;

HAnimJoint HAnimJoint1641 = createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_middle1";
HAnimHumanoid45.joints[58] = HAnimJoint1641;

HAnimJoint HAnimJoint1642 = createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_l_middle2";
HAnimHumanoid45.joints[59] = HAnimJoint1642;

HAnimJoint HAnimJoint1643 = createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_middle2";
HAnimHumanoid45.joints[60] = HAnimJoint1643;

HAnimJoint HAnimJoint1644 = createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_l_middle3";
HAnimHumanoid45.joints[61] = HAnimJoint1644;

HAnimJoint HAnimJoint1645 = createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_middle3";
HAnimHumanoid45.joints[62] = HAnimJoint1645;

HAnimJoint HAnimJoint1646 = createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_l_midtarsal";
HAnimHumanoid45.joints[63] = HAnimJoint1646;

HAnimJoint HAnimJoint1647 = createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_midtarsal";
HAnimHumanoid45.joints[64] = HAnimJoint1647;

HAnimJoint HAnimJoint1648 = createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_l_pinky0";
HAnimHumanoid45.joints[65] = HAnimJoint1648;

HAnimJoint HAnimJoint1649 = createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_pinky0";
HAnimHumanoid45.joints[66] = HAnimJoint1649;

HAnimJoint HAnimJoint1650 = createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_l_pinky1";
HAnimHumanoid45.joints[67] = HAnimJoint1650;

HAnimJoint HAnimJoint1651 = createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_pinky1";
HAnimHumanoid45.joints[68] = HAnimJoint1651;

HAnimJoint HAnimJoint1652 = createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_l_pinky2";
HAnimHumanoid45.joints[69] = HAnimJoint1652;

HAnimJoint HAnimJoint1653 = createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_pinky2";
HAnimHumanoid45.joints[70] = HAnimJoint1653;

HAnimJoint HAnimJoint1654 = createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_l_pinky3";
HAnimHumanoid45.joints[71] = HAnimJoint1654;

HAnimJoint HAnimJoint1655 = createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_pinky3";
HAnimHumanoid45.joints[72] = HAnimJoint1655;

HAnimJoint HAnimJoint1656 = createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_l_ring0";
HAnimHumanoid45.joints[73] = HAnimJoint1656;

HAnimJoint HAnimJoint1657 = createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_ring0";
HAnimHumanoid45.joints[74] = HAnimJoint1657;

HAnimJoint HAnimJoint1658 = createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_l_ring1";
HAnimHumanoid45.joints[75] = HAnimJoint1658;

HAnimJoint HAnimJoint1659 = createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_r_ring1";
HAnimHumanoid45.joints[76] = HAnimJoint1659;

HAnimJoint HAnimJoint1660 = createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_l_ring2";
HAnimHumanoid45.joints[77] = HAnimJoint1660;

HAnimJoint HAnimJoint1661 = createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_r_ring2";
HAnimHumanoid45.joints[78] = HAnimJoint1661;

HAnimJoint HAnimJoint1662 = createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_l_ring3";
HAnimHumanoid45.joints[79] = HAnimJoint1662;

HAnimJoint HAnimJoint1663 = createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_r_ring3";
HAnimHumanoid45.joints[80] = HAnimJoint1663;

HAnimJoint HAnimJoint1664 = createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_l_shoulder";
HAnimHumanoid45.joints[81] = HAnimJoint1664;

HAnimJoint HAnimJoint1665 = createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_r_shoulder";
HAnimHumanoid45.joints[82] = HAnimJoint1665;

HAnimJoint HAnimJoint1666 = createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_l_sternoclavicular";
HAnimHumanoid45.joints[83] = HAnimJoint1666;

HAnimJoint HAnimJoint1667 = createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_r_sternoclavicular";
HAnimHumanoid45.joints[84] = HAnimJoint1667;

HAnimJoint HAnimJoint1668 = createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_l_subtalar";
HAnimHumanoid45.joints[85] = HAnimJoint1668;

HAnimJoint HAnimJoint1669 = createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_r_subtalar";
HAnimHumanoid45.joints[86] = HAnimJoint1669;

HAnimJoint HAnimJoint1670 = createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_l_thumb1";
HAnimHumanoid45.joints[87] = HAnimJoint1670;

HAnimJoint HAnimJoint1671 = createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_r_thumb1";
HAnimHumanoid45.joints[88] = HAnimJoint1671;

HAnimJoint HAnimJoint1672 = createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_l_thumb2";
HAnimHumanoid45.joints[89] = HAnimJoint1672;

HAnimJoint HAnimJoint1673 = createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_r_thumb2";
HAnimHumanoid45.joints[90] = HAnimJoint1673;

HAnimJoint HAnimJoint1674 = createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_l_thumb3";
HAnimHumanoid45.joints[91] = HAnimJoint1674;

HAnimJoint HAnimJoint1675 = createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_r_thumb3";
HAnimHumanoid45.joints[92] = HAnimJoint1675;

HAnimJoint HAnimJoint1676 = createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_l_wrist";
HAnimHumanoid45.joints[93] = HAnimJoint1676;

HAnimJoint HAnimJoint1677 = createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_r_wrist";
HAnimHumanoid45.joints[94] = HAnimJoint1677;

HAnimSegment HAnimSegment1678 = createNode("HAnimSegment");
HAnimSegment1678.USE = "hanim_pelvis";
HAnimHumanoid45.segments[95] = HAnimSegment1678;

HAnimSegment HAnimSegment1679 = createNode("HAnimSegment");
HAnimSegment1679.USE = "hanim_skull";
HAnimHumanoid45.segments[96] = HAnimSegment1679;

HAnimSegment HAnimSegment1680 = createNode("HAnimSegment");
HAnimSegment1680.USE = "hanim_jaw";
HAnimHumanoid45.segments[97] = HAnimSegment1680;

HAnimSegment HAnimSegment1681 = createNode("HAnimSegment");
HAnimSegment1681.USE = "hanim_c1";
HAnimHumanoid45.segments[98] = HAnimSegment1681;

HAnimSegment HAnimSegment1682 = createNode("HAnimSegment");
HAnimSegment1682.USE = "hanim_c2";
HAnimHumanoid45.segments[99] = HAnimSegment1682;

HAnimSegment HAnimSegment1683 = createNode("HAnimSegment");
HAnimSegment1683.USE = "hanim_c3";
HAnimHumanoid45.segments[100] = HAnimSegment1683;

HAnimSegment HAnimSegment1684 = createNode("HAnimSegment");
HAnimSegment1684.USE = "hanim_c4";
HAnimHumanoid45.segments[101] = HAnimSegment1684;

HAnimSegment HAnimSegment1685 = createNode("HAnimSegment");
HAnimSegment1685.USE = "hanim_c5";
HAnimHumanoid45.segments[102] = HAnimSegment1685;

HAnimSegment HAnimSegment1686 = createNode("HAnimSegment");
HAnimSegment1686.USE = "hanim_c6";
HAnimHumanoid45.segments[103] = HAnimSegment1686;

HAnimSegment HAnimSegment1687 = createNode("HAnimSegment");
HAnimSegment1687.USE = "hanim_c7";
HAnimHumanoid45.segments[104] = HAnimSegment1687;

HAnimSegment HAnimSegment1688 = createNode("HAnimSegment");
HAnimSegment1688.USE = "hanim_t1";
HAnimHumanoid45.segments[105] = HAnimSegment1688;

HAnimSegment HAnimSegment1689 = createNode("HAnimSegment");
HAnimSegment1689.USE = "hanim_t2";
HAnimHumanoid45.segments[106] = HAnimSegment1689;

HAnimSegment HAnimSegment1690 = createNode("HAnimSegment");
HAnimSegment1690.USE = "hanim_t3";
HAnimHumanoid45.segments[107] = HAnimSegment1690;

HAnimSegment HAnimSegment1691 = createNode("HAnimSegment");
HAnimSegment1691.USE = "hanim_t4";
HAnimHumanoid45.segments[108] = HAnimSegment1691;

HAnimSegment HAnimSegment1692 = createNode("HAnimSegment");
HAnimSegment1692.USE = "hanim_t5";
HAnimHumanoid45.segments[109] = HAnimSegment1692;

HAnimSegment HAnimSegment1693 = createNode("HAnimSegment");
HAnimSegment1693.USE = "hanim_t6";
HAnimHumanoid45.segments[110] = HAnimSegment1693;

HAnimSegment HAnimSegment1694 = createNode("HAnimSegment");
HAnimSegment1694.USE = "hanim_t7";
HAnimHumanoid45.segments[111] = HAnimSegment1694;

HAnimSegment HAnimSegment1695 = createNode("HAnimSegment");
HAnimSegment1695.USE = "hanim_t8";
HAnimHumanoid45.segments[112] = HAnimSegment1695;

HAnimSegment HAnimSegment1696 = createNode("HAnimSegment");
HAnimSegment1696.USE = "hanim_t9";
HAnimHumanoid45.segments[113] = HAnimSegment1696;

HAnimSegment HAnimSegment1697 = createNode("HAnimSegment");
HAnimSegment1697.USE = "hanim_t10";
HAnimHumanoid45.segments[114] = HAnimSegment1697;

HAnimSegment HAnimSegment1698 = createNode("HAnimSegment");
HAnimSegment1698.USE = "hanim_t11";
HAnimHumanoid45.segments[115] = HAnimSegment1698;

HAnimSegment HAnimSegment1699 = createNode("HAnimSegment");
HAnimSegment1699.USE = "hanim_t12";
HAnimHumanoid45.segments[116] = HAnimSegment1699;

HAnimSegment HAnimSegment1700 = createNode("HAnimSegment");
HAnimSegment1700.USE = "hanim_l1";
HAnimHumanoid45.segments[117] = HAnimSegment1700;

HAnimSegment HAnimSegment1701 = createNode("HAnimSegment");
HAnimSegment1701.USE = "hanim_l2";
HAnimHumanoid45.segments[118] = HAnimSegment1701;

HAnimSegment HAnimSegment1702 = createNode("HAnimSegment");
HAnimSegment1702.USE = "hanim_l3";
HAnimHumanoid45.segments[119] = HAnimSegment1702;

HAnimSegment HAnimSegment1703 = createNode("HAnimSegment");
HAnimSegment1703.USE = "hanim_l4";
HAnimHumanoid45.segments[120] = HAnimSegment1703;

HAnimSegment HAnimSegment1704 = createNode("HAnimSegment");
HAnimSegment1704.USE = "hanim_l5";
HAnimHumanoid45.segments[121] = HAnimSegment1704;

HAnimSegment HAnimSegment1705 = createNode("HAnimSegment");
HAnimSegment1705.USE = "hanim_sacrum";
HAnimHumanoid45.segments[122] = HAnimSegment1705;

HAnimSegment HAnimSegment1706 = createNode("HAnimSegment");
HAnimSegment1706.USE = "hanim_l_calf";
HAnimHumanoid45.segments[123] = HAnimSegment1706;

HAnimSegment HAnimSegment1707 = createNode("HAnimSegment");
HAnimSegment1707.USE = "hanim_r_calf";
HAnimHumanoid45.segments[124] = HAnimSegment1707;

HAnimSegment HAnimSegment1708 = createNode("HAnimSegment");
HAnimSegment1708.USE = "hanim_l_clavicle";
HAnimHumanoid45.segments[125] = HAnimSegment1708;

HAnimSegment HAnimSegment1709 = createNode("HAnimSegment");
HAnimSegment1709.USE = "hanim_r_clavicle";
HAnimHumanoid45.segments[126] = HAnimSegment1709;

HAnimSegment HAnimSegment1710 = createNode("HAnimSegment");
HAnimSegment1710.USE = "hanim_l_eyeball";
HAnimHumanoid45.segments[127] = HAnimSegment1710;

HAnimSegment HAnimSegment1711 = createNode("HAnimSegment");
HAnimSegment1711.USE = "hanim_r_eyeball";
HAnimHumanoid45.segments[128] = HAnimSegment1711;

HAnimSegment HAnimSegment1712 = createNode("HAnimSegment");
HAnimSegment1712.USE = "hanim_l_eyebrow";
HAnimHumanoid45.segments[129] = HAnimSegment1712;

HAnimSegment HAnimSegment1713 = createNode("HAnimSegment");
HAnimSegment1713.USE = "hanim_r_eyebrow";
HAnimHumanoid45.segments[130] = HAnimSegment1713;

HAnimSegment HAnimSegment1714 = createNode("HAnimSegment");
HAnimSegment1714.USE = "hanim_l_eyelid";
HAnimHumanoid45.segments[131] = HAnimSegment1714;

HAnimSegment HAnimSegment1715 = createNode("HAnimSegment");
HAnimSegment1715.USE = "hanim_r_eyelid";
HAnimHumanoid45.segments[132] = HAnimSegment1715;

HAnimSegment HAnimSegment1716 = createNode("HAnimSegment");
HAnimSegment1716.USE = "hanim_l_forearm";
HAnimHumanoid45.segments[133] = HAnimSegment1716;

HAnimSegment HAnimSegment1717 = createNode("HAnimSegment");
HAnimSegment1717.USE = "hanim_r_forearm";
HAnimHumanoid45.segments[134] = HAnimSegment1717;

HAnimSegment HAnimSegment1718 = createNode("HAnimSegment");
HAnimSegment1718.USE = "hanim_l_forefoot";
HAnimHumanoid45.segments[135] = HAnimSegment1718;

HAnimSegment HAnimSegment1719 = createNode("HAnimSegment");
HAnimSegment1719.USE = "hanim_r_forefoot";
HAnimHumanoid45.segments[136] = HAnimSegment1719;

HAnimSegment HAnimSegment1720 = createNode("HAnimSegment");
HAnimSegment1720.USE = "hanim_l_hand";
HAnimHumanoid45.segments[137] = HAnimSegment1720;

HAnimSegment HAnimSegment1721 = createNode("HAnimSegment");
HAnimSegment1721.USE = "hanim_r_hand";
HAnimHumanoid45.segments[138] = HAnimSegment1721;

HAnimSegment HAnimSegment1722 = createNode("HAnimSegment");
HAnimSegment1722.USE = "hanim_l_hindfoot";
HAnimHumanoid45.segments[139] = HAnimSegment1722;

HAnimSegment HAnimSegment1723 = createNode("HAnimSegment");
HAnimSegment1723.USE = "hanim_r_hindfoot";
HAnimHumanoid45.segments[140] = HAnimSegment1723;

HAnimSegment HAnimSegment1724 = createNode("HAnimSegment");
HAnimSegment1724.USE = "hanim_l_index_distal";
HAnimHumanoid45.segments[141] = HAnimSegment1724;

HAnimSegment HAnimSegment1725 = createNode("HAnimSegment");
HAnimSegment1725.USE = "hanim_r_index_distal";
HAnimHumanoid45.segments[142] = HAnimSegment1725;

HAnimSegment HAnimSegment1726 = createNode("HAnimSegment");
HAnimSegment1726.USE = "hanim_l_index_metacarpal";
HAnimHumanoid45.segments[143] = HAnimSegment1726;

HAnimSegment HAnimSegment1727 = createNode("HAnimSegment");
HAnimSegment1727.USE = "hanim_r_index_metacarpal";
HAnimHumanoid45.segments[144] = HAnimSegment1727;

HAnimSegment HAnimSegment1728 = createNode("HAnimSegment");
HAnimSegment1728.USE = "hanim_l_index_middle";
HAnimHumanoid45.segments[145] = HAnimSegment1728;

HAnimSegment HAnimSegment1729 = createNode("HAnimSegment");
HAnimSegment1729.USE = "hanim_r_index_middle";
HAnimHumanoid45.segments[146] = HAnimSegment1729;

HAnimSegment HAnimSegment1730 = createNode("HAnimSegment");
HAnimSegment1730.USE = "hanim_l_index_proximal";
HAnimHumanoid45.segments[147] = HAnimSegment1730;

HAnimSegment HAnimSegment1731 = createNode("HAnimSegment");
HAnimSegment1731.USE = "hanim_r_index_proximal";
HAnimHumanoid45.segments[148] = HAnimSegment1731;

HAnimSegment HAnimSegment1732 = createNode("HAnimSegment");
HAnimSegment1732.USE = "hanim_l_middistal";
HAnimHumanoid45.segments[149] = HAnimSegment1732;

HAnimSegment HAnimSegment1733 = createNode("HAnimSegment");
HAnimSegment1733.USE = "hanim_r_middistal";
HAnimHumanoid45.segments[150] = HAnimSegment1733;

HAnimSegment HAnimSegment1734 = createNode("HAnimSegment");
HAnimSegment1734.USE = "hanim_l_middle_distal";
HAnimHumanoid45.segments[151] = HAnimSegment1734;

HAnimSegment HAnimSegment1735 = createNode("HAnimSegment");
HAnimSegment1735.USE = "hanim_r_middle_distal";
HAnimHumanoid45.segments[152] = HAnimSegment1735;

HAnimSegment HAnimSegment1736 = createNode("HAnimSegment");
HAnimSegment1736.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid45.segments[153] = HAnimSegment1736;

HAnimSegment HAnimSegment1737 = createNode("HAnimSegment");
HAnimSegment1737.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid45.segments[154] = HAnimSegment1737;

HAnimSegment HAnimSegment1738 = createNode("HAnimSegment");
HAnimSegment1738.USE = "hanim_l_middle_middle";
HAnimHumanoid45.segments[155] = HAnimSegment1738;

HAnimSegment HAnimSegment1739 = createNode("HAnimSegment");
HAnimSegment1739.USE = "hanim_r_middle_middle";
HAnimHumanoid45.segments[156] = HAnimSegment1739;

HAnimSegment HAnimSegment1740 = createNode("HAnimSegment");
HAnimSegment1740.USE = "hanim_l_middle_proximal";
HAnimHumanoid45.segments[157] = HAnimSegment1740;

HAnimSegment HAnimSegment1741 = createNode("HAnimSegment");
HAnimSegment1741.USE = "hanim_r_middle_proximal";
HAnimHumanoid45.segments[158] = HAnimSegment1741;

HAnimSegment HAnimSegment1742 = createNode("HAnimSegment");
HAnimSegment1742.USE = "hanim_l_midproximal";
HAnimHumanoid45.segments[159] = HAnimSegment1742;

HAnimSegment HAnimSegment1743 = createNode("HAnimSegment");
HAnimSegment1743.USE = "hanim_r_midproximal";
HAnimHumanoid45.segments[160] = HAnimSegment1743;

HAnimSegment HAnimSegment1744 = createNode("HAnimSegment");
HAnimSegment1744.USE = "hanim_l_pinky_distal";
HAnimHumanoid45.segments[161] = HAnimSegment1744;

HAnimSegment HAnimSegment1745 = createNode("HAnimSegment");
HAnimSegment1745.USE = "hanim_r_pinky_distal";
HAnimHumanoid45.segments[162] = HAnimSegment1745;

HAnimSegment HAnimSegment1746 = createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid45.segments[163] = HAnimSegment1746;

HAnimSegment HAnimSegment1747 = createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid45.segments[164] = HAnimSegment1747;

HAnimSegment HAnimSegment1748 = createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_l_pinky_middle";
HAnimHumanoid45.segments[165] = HAnimSegment1748;

HAnimSegment HAnimSegment1749 = createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_r_pinky_middle";
HAnimHumanoid45.segments[166] = HAnimSegment1749;

HAnimSegment HAnimSegment1750 = createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l_pinky_proximal";
HAnimHumanoid45.segments[167] = HAnimSegment1750;

HAnimSegment HAnimSegment1751 = createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_r_pinky_proximal";
HAnimHumanoid45.segments[168] = HAnimSegment1751;

HAnimSegment HAnimSegment1752 = createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l_ring_distal";
HAnimHumanoid45.segments[169] = HAnimSegment1752;

HAnimSegment HAnimSegment1753 = createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_r_ring_distal";
HAnimHumanoid45.segments[170] = HAnimSegment1753;

HAnimSegment HAnimSegment1754 = createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid45.segments[171] = HAnimSegment1754;

HAnimSegment HAnimSegment1755 = createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid45.segments[172] = HAnimSegment1755;

HAnimSegment HAnimSegment1756 = createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_ring_middle";
HAnimHumanoid45.segments[173] = HAnimSegment1756;

HAnimSegment HAnimSegment1757 = createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_r_ring_middle";
HAnimHumanoid45.segments[174] = HAnimSegment1757;

HAnimSegment HAnimSegment1758 = createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_ring_proximal";
HAnimHumanoid45.segments[175] = HAnimSegment1758;

HAnimSegment HAnimSegment1759 = createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_r_ring_proximal";
HAnimHumanoid45.segments[176] = HAnimSegment1759;

HAnimSegment HAnimSegment1760 = createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_scapula";
HAnimHumanoid45.segments[177] = HAnimSegment1760;

HAnimSegment HAnimSegment1761 = createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_r_scapula";
HAnimHumanoid45.segments[178] = HAnimSegment1761;

HAnimSegment HAnimSegment1762 = createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_thigh";
HAnimHumanoid45.segments[179] = HAnimSegment1762;

HAnimSegment HAnimSegment1763 = createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_r_thigh";
HAnimHumanoid45.segments[180] = HAnimSegment1763;

HAnimSegment HAnimSegment1764 = createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_thumb_distal";
HAnimHumanoid45.segments[181] = HAnimSegment1764;

HAnimSegment HAnimSegment1765 = createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_r_thumb_distal";
HAnimHumanoid45.segments[182] = HAnimSegment1765;

HAnimSegment HAnimSegment1766 = createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid45.segments[183] = HAnimSegment1766;

HAnimSegment HAnimSegment1767 = createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid45.segments[184] = HAnimSegment1767;

HAnimSegment HAnimSegment1768 = createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_thumb_proximal";
HAnimHumanoid45.segments[185] = HAnimSegment1768;

HAnimSegment HAnimSegment1769 = createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_r_thumb_proximal";
HAnimHumanoid45.segments[186] = HAnimSegment1769;

HAnimSegment HAnimSegment1770 = createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_upperarm";
HAnimHumanoid45.segments[187] = HAnimSegment1770;

HAnimSegment HAnimSegment1771 = createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_r_upperarm";
HAnimHumanoid45.segments[188] = HAnimSegment1771;

HAnimSite HAnimSite1772 = createNode("HAnimSite");
HAnimSite1772.USE = "hanim_crotch_pt";
HAnimHumanoid45.viewpoints[189] = HAnimSite1772;

HAnimSite HAnimSite1773 = createNode("HAnimSite");
HAnimSite1773.USE = "hanim_skull_tip";
HAnimHumanoid45.viewpoints[190] = HAnimSite1773;

HAnimSite HAnimSite1774 = createNode("HAnimSite");
HAnimSite1774.USE = "hanim_sellion_pt";
HAnimHumanoid45.viewpoints[191] = HAnimSite1774;

HAnimSite HAnimSite1775 = createNode("HAnimSite");
HAnimSite1775.USE = "hanim_supramenton_pt";
HAnimHumanoid45.viewpoints[192] = HAnimSite1775;

HAnimSite HAnimSite1776 = createNode("HAnimSite");
HAnimSite1776.USE = "hanim_nuchale_pt";
HAnimHumanoid45.viewpoints[193] = HAnimSite1776;

HAnimSite HAnimSite1777 = createNode("HAnimSite");
HAnimSite1777.USE = "hanim_suprasternale_pt";
HAnimHumanoid45.viewpoints[194] = HAnimSite1777;

HAnimSite HAnimSite1778 = createNode("HAnimSite");
HAnimSite1778.USE = "hanim_cervicale_pt";
HAnimHumanoid45.viewpoints[195] = HAnimSite1778;

HAnimSite HAnimSite1779 = createNode("HAnimSite");
HAnimSite1779.USE = "hanim_substernale_pt";
HAnimHumanoid45.viewpoints[196] = HAnimSite1779;

HAnimSite HAnimSite1780 = createNode("HAnimSite");
HAnimSite1780.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid45.viewpoints[197] = HAnimSite1780;

HAnimSite HAnimSite1781 = createNode("HAnimSite");
HAnimSite1781.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid45.viewpoints[198] = HAnimSite1781;

HAnimSite HAnimSite1782 = createNode("HAnimSite");
HAnimSite1782.USE = "hanim_navel_pt";
HAnimHumanoid45.viewpoints[199] = HAnimSite1782;

HAnimSite HAnimSite1783 = createNode("HAnimSite");
HAnimSite1783.USE = "hanim_l_acromion_pt";
HAnimHumanoid45.viewpoints[200] = HAnimSite1783;

HAnimSite HAnimSite1784 = createNode("HAnimSite");
HAnimSite1784.USE = "hanim_r_acromion_pt";
HAnimHumanoid45.viewpoints[201] = HAnimSite1784;

HAnimSite HAnimSite1785 = createNode("HAnimSite");
HAnimSite1785.USE = "hanim_r_asis_pt";
HAnimHumanoid45.viewpoints[202] = HAnimSite1785;

HAnimSite HAnimSite1786 = createNode("HAnimSite");
HAnimSite1786.USE = "hanim_l_asis_pt";
HAnimHumanoid45.viewpoints[203] = HAnimSite1786;

HAnimSite HAnimSite1787 = createNode("HAnimSite");
HAnimSite1787.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid45.viewpoints[204] = HAnimSite1787;

HAnimSite HAnimSite1788 = createNode("HAnimSite");
HAnimSite1788.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid45.viewpoints[205] = HAnimSite1788;

HAnimSite HAnimSite1789 = createNode("HAnimSite");
HAnimSite1789.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid45.viewpoints[206] = HAnimSite1789;

HAnimSite HAnimSite1790 = createNode("HAnimSite");
HAnimSite1790.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid45.viewpoints[207] = HAnimSite1790;

HAnimSite HAnimSite1791 = createNode("HAnimSite");
HAnimSite1791.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid45.viewpoints[208] = HAnimSite1791;

HAnimSite HAnimSite1792 = createNode("HAnimSite");
HAnimSite1792.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid45.viewpoints[209] = HAnimSite1792;

HAnimSite HAnimSite1793 = createNode("HAnimSite");
HAnimSite1793.USE = "hanim_l_clavicale_pt";
HAnimHumanoid45.viewpoints[210] = HAnimSite1793;

HAnimSite HAnimSite1794 = createNode("HAnimSite");
HAnimSite1794.USE = "hanim_r_clavicale_pt";
HAnimHumanoid45.viewpoints[211] = HAnimSite1794;

HAnimSite HAnimSite1795 = createNode("HAnimSite");
HAnimSite1795.USE = "hanim_l_dactylion_pt";
HAnimHumanoid45.viewpoints[212] = HAnimSite1795;

HAnimSite HAnimSite1796 = createNode("HAnimSite");
HAnimSite1796.USE = "hanim_r_dactylion_pt";
HAnimHumanoid45.viewpoints[213] = HAnimSite1796;

HAnimSite HAnimSite1797 = createNode("HAnimSite");
HAnimSite1797.USE = "hanim_l_digit2_pt";
HAnimHumanoid45.viewpoints[214] = HAnimSite1797;

HAnimSite HAnimSite1798 = createNode("HAnimSite");
HAnimSite1798.USE = "hanim_r_digit2_pt";
HAnimHumanoid45.viewpoints[215] = HAnimSite1798;

HAnimSite HAnimSite1799 = createNode("HAnimSite");
HAnimSite1799.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[216] = HAnimSite1799;

HAnimSite HAnimSite1800 = createNode("HAnimSite");
HAnimSite1800.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[217] = HAnimSite1800;

HAnimSite HAnimSite1801 = createNode("HAnimSite");
HAnimSite1801.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[218] = HAnimSite1801;

HAnimSite HAnimSite1802 = createNode("HAnimSite");
HAnimSite1802.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[219] = HAnimSite1802;

HAnimSite HAnimSite1803 = createNode("HAnimSite");
HAnimSite1803.USE = "hanim_l_forefoot_tip";
HAnimHumanoid45.viewpoints[220] = HAnimSite1803;

HAnimSite HAnimSite1804 = createNode("HAnimSite");
HAnimSite1804.USE = "hanim_r_forefoot_tip";
HAnimHumanoid45.viewpoints[221] = HAnimSite1804;

HAnimSite HAnimSite1805 = createNode("HAnimSite");
HAnimSite1805.USE = "hanim_r_gonion_pt";
HAnimHumanoid45.viewpoints[222] = HAnimSite1805;

HAnimSite HAnimSite1806 = createNode("HAnimSite");
HAnimSite1806.USE = "hanim_l_gonion_pt";
HAnimHumanoid45.viewpoints[223] = HAnimSite1806;

HAnimSite HAnimSite1807 = createNode("HAnimSite");
HAnimSite1807.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[224] = HAnimSite1807;

HAnimSite HAnimSite1808 = createNode("HAnimSite");
HAnimSite1808.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[225] = HAnimSite1808;

HAnimSite HAnimSite1809 = createNode("HAnimSite");
HAnimSite1809.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[226] = HAnimSite1809;

HAnimSite HAnimSite1810 = createNode("HAnimSite");
HAnimSite1810.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[227] = HAnimSite1810;

HAnimSite HAnimSite1811 = createNode("HAnimSite");
HAnimSite1811.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid45.viewpoints[228] = HAnimSite1811;

HAnimSite HAnimSite1812 = createNode("HAnimSite");
HAnimSite1812.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid45.viewpoints[229] = HAnimSite1812;

HAnimSite HAnimSite1813 = createNode("HAnimSite");
HAnimSite1813.USE = "hanim_l_index_distal_tip";
HAnimHumanoid45.viewpoints[230] = HAnimSite1813;

HAnimSite HAnimSite1814 = createNode("HAnimSite");
HAnimSite1814.USE = "hanim_r_index_distal_tip";
HAnimHumanoid45.viewpoints[231] = HAnimSite1814;

HAnimSite HAnimSite1815 = createNode("HAnimSite");
HAnimSite1815.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid45.viewpoints[232] = HAnimSite1815;

HAnimSite HAnimSite1816 = createNode("HAnimSite");
HAnimSite1816.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid45.viewpoints[233] = HAnimSite1816;

HAnimSite HAnimSite1817 = createNode("HAnimSite");
HAnimSite1817.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid45.viewpoints[234] = HAnimSite1817;

HAnimSite HAnimSite1818 = createNode("HAnimSite");
HAnimSite1818.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid45.viewpoints[235] = HAnimSite1818;

HAnimSite HAnimSite1819 = createNode("HAnimSite");
HAnimSite1819.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid45.viewpoints[236] = HAnimSite1819;

HAnimSite HAnimSite1820 = createNode("HAnimSite");
HAnimSite1820.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid45.viewpoints[237] = HAnimSite1820;

HAnimSite HAnimSite1821 = createNode("HAnimSite");
HAnimSite1821.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid45.viewpoints[238] = HAnimSite1821;

HAnimSite HAnimSite1822 = createNode("HAnimSite");
HAnimSite1822.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid45.viewpoints[239] = HAnimSite1822;

HAnimSite HAnimSite1823 = createNode("HAnimSite");
HAnimSite1823.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid45.viewpoints[240] = HAnimSite1823;

HAnimSite HAnimSite1824 = createNode("HAnimSite");
HAnimSite1824.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid45.viewpoints[241] = HAnimSite1824;

HAnimSite HAnimSite1825 = createNode("HAnimSite");
HAnimSite1825.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid45.viewpoints[242] = HAnimSite1825;

HAnimSite HAnimSite1826 = createNode("HAnimSite");
HAnimSite1826.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid45.viewpoints[243] = HAnimSite1826;

HAnimSite HAnimSite1827 = createNode("HAnimSite");
HAnimSite1827.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid45.viewpoints[244] = HAnimSite1827;

HAnimSite HAnimSite1828 = createNode("HAnimSite");
HAnimSite1828.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid45.viewpoints[245] = HAnimSite1828;

HAnimSite HAnimSite1829 = createNode("HAnimSite");
HAnimSite1829.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid45.viewpoints[246] = HAnimSite1829;

HAnimSite HAnimSite1830 = createNode("HAnimSite");
HAnimSite1830.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid45.viewpoints[247] = HAnimSite1830;

HAnimSite HAnimSite1831 = createNode("HAnimSite");
HAnimSite1831.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid45.viewpoints[248] = HAnimSite1831;

HAnimSite HAnimSite1832 = createNode("HAnimSite");
HAnimSite1832.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid45.viewpoints[249] = HAnimSite1832;

HAnimSite HAnimSite1833 = createNode("HAnimSite");
HAnimSite1833.USE = "hanim_r_neck_base_pt";
HAnimHumanoid45.viewpoints[250] = HAnimSite1833;

HAnimSite HAnimSite1834 = createNode("HAnimSite");
HAnimSite1834.USE = "hanim_l_neck_base_pt";
HAnimHumanoid45.viewpoints[251] = HAnimSite1834;

HAnimSite HAnimSite1835 = createNode("HAnimSite");
HAnimSite1835.USE = "hanim_l_olecranon_pt";
HAnimHumanoid45.viewpoints[252] = HAnimSite1835;

HAnimSite HAnimSite1836 = createNode("HAnimSite");
HAnimSite1836.USE = "hanim_r_olecranon_pt";
HAnimHumanoid45.viewpoints[253] = HAnimSite1836;

HAnimSite HAnimSite1837 = createNode("HAnimSite");
HAnimSite1837.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid45.viewpoints[254] = HAnimSite1837;

HAnimSite HAnimSite1838 = createNode("HAnimSite");
HAnimSite1838.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid45.viewpoints[255] = HAnimSite1838;

HAnimSite HAnimSite1839 = createNode("HAnimSite");
HAnimSite1839.USE = "hanim_r_psis_pt";
HAnimHumanoid45.viewpoints[256] = HAnimSite1839;

HAnimSite HAnimSite1840 = createNode("HAnimSite");
HAnimSite1840.USE = "hanim_l_psis_pt";
HAnimHumanoid45.viewpoints[257] = HAnimSite1840;

HAnimSite HAnimSite1841 = createNode("HAnimSite");
HAnimSite1841.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid45.viewpoints[258] = HAnimSite1841;

HAnimSite HAnimSite1842 = createNode("HAnimSite");
HAnimSite1842.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid45.viewpoints[259] = HAnimSite1842;

HAnimSite HAnimSite1843 = createNode("HAnimSite");
HAnimSite1843.USE = "hanim_l_radiale_pt";
HAnimHumanoid45.viewpoints[260] = HAnimSite1843;

HAnimSite HAnimSite1844 = createNode("HAnimSite");
HAnimSite1844.USE = "hanim_r_radiale_pt";
HAnimHumanoid45.viewpoints[261] = HAnimSite1844;

HAnimSite HAnimSite1845 = createNode("HAnimSite");
HAnimSite1845.USE = "hanim_r_rib10_pt";
HAnimHumanoid45.viewpoints[262] = HAnimSite1845;

HAnimSite HAnimSite1846 = createNode("HAnimSite");
HAnimSite1846.USE = "hanim_l_rib10_pt";
HAnimHumanoid45.viewpoints[263] = HAnimSite1846;

HAnimSite HAnimSite1847 = createNode("HAnimSite");
HAnimSite1847.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid45.viewpoints[264] = HAnimSite1847;

HAnimSite HAnimSite1848 = createNode("HAnimSite");
HAnimSite1848.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid45.viewpoints[265] = HAnimSite1848;

HAnimSite HAnimSite1849 = createNode("HAnimSite");
HAnimSite1849.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid45.viewpoints[266] = HAnimSite1849;

HAnimSite HAnimSite1850 = createNode("HAnimSite");
HAnimSite1850.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid45.viewpoints[267] = HAnimSite1850;

HAnimSite HAnimSite1851 = createNode("HAnimSite");
HAnimSite1851.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid45.viewpoints[268] = HAnimSite1851;

HAnimSite HAnimSite1852 = createNode("HAnimSite");
HAnimSite1852.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid45.viewpoints[269] = HAnimSite1852;

HAnimSite HAnimSite1853 = createNode("HAnimSite");
HAnimSite1853.USE = "hanim_r_thelion_pt";
HAnimHumanoid45.viewpoints[270] = HAnimSite1853;

HAnimSite HAnimSite1854 = createNode("HAnimSite");
HAnimSite1854.USE = "hanim_l_thelion_pt";
HAnimHumanoid45.viewpoints[271] = HAnimSite1854;

HAnimSite HAnimSite1855 = createNode("HAnimSite");
HAnimSite1855.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid45.viewpoints[272] = HAnimSite1855;

HAnimSite HAnimSite1856 = createNode("HAnimSite");
HAnimSite1856.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid45.viewpoints[273] = HAnimSite1856;

HAnimSite HAnimSite1857 = createNode("HAnimSite");
HAnimSite1857.USE = "hanim_r_tragion_pt";
HAnimHumanoid45.viewpoints[274] = HAnimSite1857;

HAnimSite HAnimSite1858 = createNode("HAnimSite");
HAnimSite1858.USE = "hanim_l_tragion_pt";
HAnimHumanoid45.viewpoints[275] = HAnimSite1858;

HAnimSite HAnimSite1859 = createNode("HAnimSite");
HAnimSite1859.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid45.viewpoints[276] = HAnimSite1859;

HAnimSite HAnimSite1860 = createNode("HAnimSite");
HAnimSite1860.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid45.viewpoints[277] = HAnimSite1860;

HAnimSite HAnimSite1861 = createNode("HAnimSite");
HAnimSite1861.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid45.viewpoints[278] = HAnimSite1861;

HAnimSite HAnimSite1862 = createNode("HAnimSite");
HAnimSite1862.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid45.viewpoints[279] = HAnimSite1862;

HAnimSite HAnimSite1863 = createNode("HAnimSite");
HAnimSite1863.DEF = "hanim_l_inclined_view";
HAnimSite1863.name = "l_inclined_view";
HAnimSite1863.translation = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite1863.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
TouchSensor TouchSensor1864 = createNode("TouchSensor");
TouchSensor1864.description = "HAnimSite l_inclined_view";
HAnimSite1863.children = new MFNode();

HAnimSite1863.children[0] = TouchSensor1864;

Shape Shape1865 = createNode("Shape");
Shape1865.USE = "HAnimSiteShape";
HAnimSite1863.children[1] = Shape1865;

Viewpoint Viewpoint1866 = createNode("Viewpoint");
Viewpoint1866.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1866.description = "left inclined";
Viewpoint1866.position = new SFVec3f(new float[0,0,0]);
HAnimSite1863.children[2] = Viewpoint1866;

Anchor Anchor1867 = createNode("Anchor");
Anchor1867.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1867.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
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

HAnimSite1863.children[3] = Anchor1867;

HAnimHumanoid45.viewpoints[280] = HAnimSite1863;

HAnimSite HAnimSite1871 = createNode("HAnimSite");
HAnimSite1871.DEF = "hanim_r_inclined_view";
HAnimSite1871.name = "r_inclined_view";
HAnimSite1871.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
HAnimSite1871.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
TouchSensor TouchSensor1872 = createNode("TouchSensor");
TouchSensor1872.description = "HAnimSite r_inclined_view";
HAnimSite1871.children = new MFNode();

HAnimSite1871.children[0] = TouchSensor1872;

Shape Shape1873 = createNode("Shape");
Shape1873.USE = "HAnimSiteShape";
HAnimSite1871.children[1] = Shape1873;

Viewpoint Viewpoint1874 = createNode("Viewpoint");
Viewpoint1874.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1874.description = "right inclined";
Viewpoint1874.position = new SFVec3f(new float[0,0,0]);
Viewpoint1874.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1871.children[2] = Viewpoint1874;

Anchor Anchor1875 = createNode("Anchor");
Anchor1875.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1875.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
LOD LOD1876 = createNode("LOD");
LOD1876.forceTransitions = True;
LOD1876.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1877 = createNode("WorldInfo");
WorldInfo1877.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1876.children = new MFNode();

LOD1876.children[0] = WorldInfo1877;

Shape Shape1878 = createNode("Shape");
Shape1878.USE = "HAnimSiteViewpointShape";
LOD1876.children[1] = Shape1878;

Anchor1875.children = new MFNode();

Anchor1875.children[0] = LOD1876;

HAnimSite1871.children[3] = Anchor1875;

HAnimHumanoid45.viewpoints[281] = HAnimSite1871;

HAnimSite HAnimSite1879 = createNode("HAnimSite");
HAnimSite1879.DEF = "hanim_front_view";
HAnimSite1879.name = "front_view";
HAnimSite1879.translation = new SFVec3f(new float[0,0.85,2.58]);
TouchSensor TouchSensor1880 = createNode("TouchSensor");
TouchSensor1880.description = "HAnimSite front_view";
HAnimSite1879.children = new MFNode();

HAnimSite1879.children[0] = TouchSensor1880;

Shape Shape1881 = createNode("Shape");
Shape1881.USE = "HAnimSiteShape";
HAnimSite1879.children[1] = Shape1881;

Viewpoint Viewpoint1882 = createNode("Viewpoint");
Viewpoint1882.DEF = "hanim_front_viewpoint";
Viewpoint1882.description = "front";
Viewpoint1882.position = new SFVec3f(new float[0,0,0]);
Viewpoint1882.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1879.children[2] = Viewpoint1882;

Anchor Anchor1883 = createNode("Anchor");
Anchor1883.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1883.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
LOD LOD1884 = createNode("LOD");
LOD1884.forceTransitions = True;
LOD1884.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1885 = createNode("WorldInfo");
WorldInfo1885.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1884.children = new MFNode();

LOD1884.children[0] = WorldInfo1885;

Shape Shape1886 = createNode("Shape");
Shape1886.USE = "HAnimSiteViewpointShape";
LOD1884.children[1] = Shape1886;

Anchor1883.children = new MFNode();

Anchor1883.children[0] = LOD1884;

HAnimSite1879.children[3] = Anchor1883;

HAnimHumanoid45.viewpoints[282] = HAnimSite1879;

HAnimSite HAnimSite1887 = createNode("HAnimSite");
HAnimSite1887.DEF = "hanim_back_view";
HAnimSite1887.name = "back_view";
HAnimSite1887.translation = new SFVec3f(new float[0,0.85,-2.58]);
HAnimSite1887.rotation = new SFRotation(new float[0,1,0,3.14]);
TouchSensor TouchSensor1888 = createNode("TouchSensor");
TouchSensor1888.description = "HAnimSite back_view";
HAnimSite1887.children = new MFNode();

HAnimSite1887.children[0] = TouchSensor1888;

Shape Shape1889 = createNode("Shape");
Shape1889.USE = "HAnimSiteShape";
HAnimSite1887.children[1] = Shape1889;

Viewpoint Viewpoint1890 = createNode("Viewpoint");
Viewpoint1890.DEF = "hanim_back_viewpoint";
Viewpoint1890.description = "back";
Viewpoint1890.position = new SFVec3f(new float[0,0,0]);
Viewpoint1890.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1887.children[2] = Viewpoint1890;

Anchor Anchor1891 = createNode("Anchor");
Anchor1891.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1891.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
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

HAnimSite1887.children[3] = Anchor1891;

HAnimHumanoid45.viewpoints[283] = HAnimSite1887;

HAnimSite HAnimSite1895 = createNode("HAnimSite");
HAnimSite1895.DEF = "hanim_l_side_view";
HAnimSite1895.name = "l_side_view";
HAnimSite1895.translation = new SFVec3f(new float[2.6,0.854,0]);
HAnimSite1895.rotation = new SFRotation(new float[0,1,0,1.5708]);
TouchSensor TouchSensor1896 = createNode("TouchSensor");
TouchSensor1896.description = "HAnimSite l_side_view";
HAnimSite1895.children = new MFNode();

HAnimSite1895.children[0] = TouchSensor1896;

Shape Shape1897 = createNode("Shape");
Shape1897.USE = "HAnimSiteShape";
HAnimSite1895.children[1] = Shape1897;

Viewpoint Viewpoint1898 = createNode("Viewpoint");
Viewpoint1898.DEF = "hanim_l_side_viewpoint";
Viewpoint1898.description = "left side";
Viewpoint1898.position = new SFVec3f(new float[0,0,0]);
Viewpoint1898.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1895.children[2] = Viewpoint1898;

Anchor Anchor1899 = createNode("Anchor");
Anchor1899.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1899.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
LOD LOD1900 = createNode("LOD");
LOD1900.forceTransitions = True;
LOD1900.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1901 = createNode("WorldInfo");
WorldInfo1901.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1900.children = new MFNode();

LOD1900.children[0] = WorldInfo1901;

Shape Shape1902 = createNode("Shape");
Shape1902.USE = "HAnimSiteViewpointShape";
LOD1900.children[1] = Shape1902;

Anchor1899.children = new MFNode();

Anchor1899.children[0] = LOD1900;

HAnimSite1895.children[3] = Anchor1899;

HAnimHumanoid45.viewpoints[284] = HAnimSite1895;

HAnimSite HAnimSite1903 = createNode("HAnimSite");
HAnimSite1903.DEF = "hanim_Top_view";
HAnimSite1903.name = "Top_view";
HAnimSite1903.translation = new SFVec3f(new float[0,3.5,0]);
HAnimSite1903.rotation = new SFRotation(new float[1,0,0,-1.57]);
TouchSensor TouchSensor1904 = createNode("TouchSensor");
TouchSensor1904.description = "HAnimSite Top_view";
HAnimSite1903.children = new MFNode();

HAnimSite1903.children[0] = TouchSensor1904;

Shape Shape1905 = createNode("Shape");
Shape1905.USE = "HAnimSiteShape";
HAnimSite1903.children[1] = Shape1905;

Viewpoint Viewpoint1906 = createNode("Viewpoint");
Viewpoint1906.DEF = "hanim_Top_viewpoint";
Viewpoint1906.description = "Top";
Viewpoint1906.position = new SFVec3f(new float[0,0,0]);
Viewpoint1906.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1903.children[2] = Viewpoint1906;

Anchor Anchor1907 = createNode("Anchor");
Anchor1907.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1907.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
LOD LOD1908 = createNode("LOD");
LOD1908.forceTransitions = True;
LOD1908.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1909 = createNode("WorldInfo");
WorldInfo1909.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1908.children = new MFNode();

LOD1908.children[0] = WorldInfo1909;

Shape Shape1910 = createNode("Shape");
Shape1910.USE = "HAnimSiteViewpointShape";
LOD1908.children[1] = Shape1910;

Anchor1907.children = new MFNode();

Anchor1907.children[0] = LOD1908;

HAnimSite1903.children[3] = Anchor1907;

HAnimHumanoid45.viewpoints[285] = HAnimSite1903;

HAnimSite HAnimSite1911 = createNode("HAnimSite");
HAnimSite1911.DEF = "hanim_front_close_view";
HAnimSite1911.name = "front_close_view";
HAnimSite1911.translation = new SFVec3f(new float[0,0.854,1.575]);
TouchSensor TouchSensor1912 = createNode("TouchSensor");
TouchSensor1912.description = "HAnimSite front_close_view";
HAnimSite1911.children = new MFNode();

HAnimSite1911.children[0] = TouchSensor1912;

Shape Shape1913 = createNode("Shape");
Shape1913.USE = "HAnimSiteShape";
HAnimSite1911.children[1] = Shape1913;

Viewpoint Viewpoint1914 = createNode("Viewpoint");
Viewpoint1914.DEF = "hanim_front_close_viewpoint";
Viewpoint1914.description = "front close";
Viewpoint1914.position = new SFVec3f(new float[0,0,0]);
Viewpoint1914.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
HAnimSite1911.children[2] = Viewpoint1914;

Anchor Anchor1915 = createNode("Anchor");
Anchor1915.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1915.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
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

HAnimSite1911.children[3] = Anchor1915;

HAnimHumanoid45.viewpoints[286] = HAnimSite1911;

HAnimSite HAnimSite1919 = createNode("HAnimSite");
HAnimSite1919.DEF = "hanim_side_close_view";
HAnimSite1919.name = "side_close_view";
HAnimSite1919.translation = new SFVec3f(new float[1.56,0.854,0]);
HAnimSite1919.rotation = new SFRotation(new float[0,1,0,1.5708]);
TouchSensor TouchSensor1920 = createNode("TouchSensor");
TouchSensor1920.description = "HAnimSite side_close_view";
HAnimSite1919.children = new MFNode();

HAnimSite1919.children[0] = TouchSensor1920;

Shape Shape1921 = createNode("Shape");
Shape1921.USE = "HAnimSiteShape";
HAnimSite1919.children[1] = Shape1921;

Viewpoint Viewpoint1922 = createNode("Viewpoint");
Viewpoint1922.DEF = "hanim_side_close_viewpoint";
Viewpoint1922.description = "side close";
Viewpoint1922.position = new SFVec3f(new float[0,0,0]);
Viewpoint1922.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
HAnimSite1919.children[2] = Viewpoint1922;

Anchor Anchor1923 = createNode("Anchor");
Anchor1923.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1923.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
LOD LOD1924 = createNode("LOD");
LOD1924.forceTransitions = True;
LOD1924.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1925 = createNode("WorldInfo");
WorldInfo1925.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1924.children = new MFNode();

LOD1924.children[0] = WorldInfo1925;

Shape Shape1926 = createNode("Shape");
Shape1926.USE = "HAnimSiteViewpointShape";
LOD1924.children[1] = Shape1926;

Anchor1923.children = new MFNode();

Anchor1923.children[0] = LOD1924;

HAnimSite1919.children[3] = Anchor1923;

HAnimHumanoid45.viewpoints[287] = HAnimSite1919;

HAnimSite HAnimSite1927 = createNode("HAnimSite");
HAnimSite1927.DEF = "hanim_head_front_close_view";
HAnimSite1927.name = "head_front_close_view";
HAnimSite1927.translation = new SFVec3f(new float[0,1.5,1]);
TouchSensor TouchSensor1928 = createNode("TouchSensor");
TouchSensor1928.description = "HAnimSite head_front_close_view";
HAnimSite1927.children = new MFNode();

HAnimSite1927.children[0] = TouchSensor1928;

Shape Shape1929 = createNode("Shape");
Shape1929.USE = "HAnimSiteShape";
HAnimSite1927.children[1] = Shape1929;

Viewpoint Viewpoint1930 = createNode("Viewpoint");
Viewpoint1930.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1930.description = "head front close";
Viewpoint1930.position = new SFVec3f(new float[0,0,0]);
Viewpoint1930.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite1927.children[2] = Viewpoint1930;

Anchor Anchor1931 = createNode("Anchor");
Anchor1931.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1931.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
LOD LOD1932 = createNode("LOD");
LOD1932.forceTransitions = True;
LOD1932.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1933 = createNode("WorldInfo");
WorldInfo1933.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1932.children = new MFNode();

LOD1932.children[0] = WorldInfo1933;

Shape Shape1934 = createNode("Shape");
Shape1934.USE = "HAnimSiteViewpointShape";
LOD1932.children[1] = Shape1934;

Anchor1931.children = new MFNode();

Anchor1931.children[0] = LOD1932;

HAnimSite1927.children[3] = Anchor1931;

HAnimHumanoid45.viewpoints[288] = HAnimSite1927;

HAnimSite HAnimSite1935 = createNode("HAnimSite");
HAnimSite1935.DEF = "hanim_chest_front_close_view";
HAnimSite1935.name = "chest_front_close_view";
HAnimSite1935.translation = new SFVec3f(new float[0,1.2,1]);
TouchSensor TouchSensor1936 = createNode("TouchSensor");
TouchSensor1936.description = "HAnimSite chest_front_close_view";
HAnimSite1935.children = new MFNode();

HAnimSite1935.children[0] = TouchSensor1936;

Shape Shape1937 = createNode("Shape");
Shape1937.USE = "HAnimSiteShape";
HAnimSite1935.children[1] = Shape1937;

Viewpoint Viewpoint1938 = createNode("Viewpoint");
Viewpoint1938.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1938.description = "chest front close";
Viewpoint1938.position = new SFVec3f(new float[0,0,0]);
Viewpoint1938.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite1935.children[2] = Viewpoint1938;

Anchor Anchor1939 = createNode("Anchor");
Anchor1939.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1939.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
LOD LOD1940 = createNode("LOD");
LOD1940.forceTransitions = True;
LOD1940.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1941 = createNode("WorldInfo");
WorldInfo1941.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1940.children = new MFNode();

LOD1940.children[0] = WorldInfo1941;

Shape Shape1942 = createNode("Shape");
Shape1942.USE = "HAnimSiteViewpointShape";
LOD1940.children[1] = Shape1942;

Anchor1939.children = new MFNode();

Anchor1939.children[0] = LOD1940;

HAnimSite1935.children[3] = Anchor1939;

HAnimHumanoid45.viewpoints[289] = HAnimSite1935;

HAnimSite HAnimSite1943 = createNode("HAnimSite");
HAnimSite1943.DEF = "hanim_pelvis_front_close_view";
HAnimSite1943.name = "pelvis_front_close_view";
HAnimSite1943.translation = new SFVec3f(new float[0,0.8,1]);
TouchSensor TouchSensor1944 = createNode("TouchSensor");
TouchSensor1944.description = "HAnimSite pelvis_front_close_view";
HAnimSite1943.children = new MFNode();

HAnimSite1943.children[0] = TouchSensor1944;

Shape Shape1945 = createNode("Shape");
Shape1945.USE = "HAnimSiteShape";
HAnimSite1943.children[1] = Shape1945;

Viewpoint Viewpoint1946 = createNode("Viewpoint");
Viewpoint1946.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1946.description = "pelvis front close";
Viewpoint1946.position = new SFVec3f(new float[0,0,0]);
Viewpoint1946.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite1943.children[2] = Viewpoint1946;

Anchor Anchor1947 = createNode("Anchor");
Anchor1947.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1947.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
LOD LOD1948 = createNode("LOD");
LOD1948.forceTransitions = True;
LOD1948.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1949 = createNode("WorldInfo");
WorldInfo1949.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1948.children = new MFNode();

LOD1948.children[0] = WorldInfo1949;

Shape Shape1950 = createNode("Shape");
Shape1950.USE = "HAnimSiteViewpointShape";
LOD1948.children[1] = Shape1950;

Anchor1947.children = new MFNode();

Anchor1947.children[0] = LOD1948;

HAnimSite1943.children[3] = Anchor1947;

HAnimHumanoid45.viewpoints[290] = HAnimSite1943;

HAnimSite HAnimSite1951 = createNode("HAnimSite");
HAnimSite1951.DEF = "hanim_knees_front_close_view";
HAnimSite1951.name = "knees_front_close_view";
HAnimSite1951.translation = new SFVec3f(new float[0,0.4,1]);
TouchSensor TouchSensor1952 = createNode("TouchSensor");
TouchSensor1952.description = "HAnimSite knees_front_close_view";
HAnimSite1951.children = new MFNode();

HAnimSite1951.children[0] = TouchSensor1952;

Shape Shape1953 = createNode("Shape");
Shape1953.USE = "HAnimSiteShape";
HAnimSite1951.children[1] = Shape1953;

Viewpoint Viewpoint1954 = createNode("Viewpoint");
Viewpoint1954.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1954.description = "knees front close";
Viewpoint1954.position = new SFVec3f(new float[0,0,0]);
Viewpoint1954.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
HAnimSite1951.children[2] = Viewpoint1954;

Anchor Anchor1955 = createNode("Anchor");
Anchor1955.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1955.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
LOD LOD1956 = createNode("LOD");
LOD1956.forceTransitions = True;
LOD1956.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1957 = createNode("WorldInfo");
WorldInfo1957.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1956.children = new MFNode();

LOD1956.children[0] = WorldInfo1957;

Shape Shape1958 = createNode("Shape");
Shape1958.USE = "HAnimSiteViewpointShape";
LOD1956.children[1] = Shape1958;

Anchor1955.children = new MFNode();

Anchor1955.children[0] = LOD1956;

HAnimSite1951.children[3] = Anchor1955;

HAnimHumanoid45.viewpoints[291] = HAnimSite1951;

HAnimSite HAnimSite1959 = createNode("HAnimSite");
HAnimSite1959.DEF = "hanim_feet_front_close_view";
HAnimSite1959.name = "feet_front_close_view";
HAnimSite1959.translation = new SFVec3f(new float[0,0,1]);
TouchSensor TouchSensor1960 = createNode("TouchSensor");
TouchSensor1960.description = "HAnimSite feet_front_close_view";
HAnimSite1959.children = new MFNode();

HAnimSite1959.children[0] = TouchSensor1960;

Shape Shape1961 = createNode("Shape");
Shape1961.USE = "HAnimSiteShape";
HAnimSite1959.children[1] = Shape1961;

Viewpoint Viewpoint1962 = createNode("Viewpoint");
Viewpoint1962.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1962.description = "feet front close";
Viewpoint1962.position = new SFVec3f(new float[0,0,0]);
HAnimSite1959.children[2] = Viewpoint1962;

Anchor Anchor1963 = createNode("Anchor");
Anchor1963.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1963.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
LOD LOD1964 = createNode("LOD");
LOD1964.forceTransitions = True;
LOD1964.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1965 = createNode("WorldInfo");
WorldInfo1965.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1964.children = new MFNode();

LOD1964.children[0] = WorldInfo1965;

Shape Shape1966 = createNode("Shape");
Shape1966.USE = "HAnimSiteViewpointShape";
LOD1964.children[1] = Shape1966;

Anchor1963.children = new MFNode();

Anchor1963.children[0] = LOD1964;

HAnimSite1959.children[3] = Anchor1963;

HAnimHumanoid45.viewpoints[292] = HAnimSite1959;

HAnimSite HAnimSite1967 = createNode("HAnimSite");
HAnimSite1967.DEF = "hanim_eye_level_view";
HAnimSite1967.name = "eye_level_view";
HAnimSite1967.translation = new SFVec3f(new float[0,1.6332,0.0502]);
TouchSensor TouchSensor1968 = createNode("TouchSensor");
TouchSensor1968.description = "HAnimSite eye_level_view";
HAnimSite1967.children = new MFNode();

HAnimSite1967.children[0] = TouchSensor1968;

Shape Shape1969 = createNode("Shape");
Shape1969.USE = "HAnimSiteShape";
HAnimSite1967.children[1] = Shape1969;

Viewpoint Viewpoint1970 = createNode("Viewpoint");
Viewpoint1970.DEF = "hanim_eye_level_viewpoint";
Viewpoint1970.description = "eye level looking forward";
Viewpoint1970.position = new SFVec3f(new float[0,0,0]);
Viewpoint1970.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite1967.children[2] = Viewpoint1970;

Anchor Anchor1971 = createNode("Anchor");
Anchor1971.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1971.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
LOD LOD1972 = createNode("LOD");
LOD1972.forceTransitions = True;
LOD1972.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1973 = createNode("WorldInfo");
WorldInfo1973.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1972.children = new MFNode();

LOD1972.children[0] = WorldInfo1973;

Shape Shape1974 = createNode("Shape");
Shape1974.USE = "HAnimSiteViewpointShape";
LOD1972.children[1] = Shape1974;

Anchor1971.children = new MFNode();

Anchor1971.children[0] = LOD1972;

HAnimSite1967.children[3] = Anchor1971;

HAnimHumanoid45.viewpoints[293] = HAnimSite1967;

HAnimSite HAnimSite1975 = createNode("HAnimSite");
HAnimSite1975.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid45.viewpoints[294] = HAnimSite1975;

HAnimSite HAnimSite1976 = createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid45.viewpoints[295] = HAnimSite1976;

HAnimSite HAnimSite1977 = createNode("HAnimSite");
HAnimSite1977.USE = "hanim_l_hand_front_view";
HAnimHumanoid45.viewpoints[296] = HAnimSite1977;

HAnimSite HAnimSite1978 = createNode("HAnimSite");
HAnimSite1978.USE = "hanim_r_hand_front_view";
HAnimHumanoid45.viewpoints[297] = HAnimSite1978;

children[12] = HAnimHumanoid45;

}
