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
meta3.content = "HAnim2SpecificationLOA3Illustrated.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "reference";
meta5.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "reference";
meta6.content = "HAnim2SpecificationLOA3Invisible.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "HAnim2SpecificationLOA3Animation.x3d";
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
meta16.content = "18 February 2021";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "modified";
meta17.content = "Mon, 15 Sep 2025 05:20:09 GMT";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "creator";
meta18.content = "Don Brutzman";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Image";
meta19.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "TODO";
meta22.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "TODO";
meta23.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
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
meta26.name = "generator";
meta26.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[24] = meta26;

head = head1;

Background Background28 = createNode("Background");
Background28.skyColor = new MFColor(new float[0.3,0.3,0.3]);
children = new MFNode();

children[0] = Background28;

NavigationInfo NavigationInfo29 = createNode("NavigationInfo");
children[1] = NavigationInfo29;

Group Group30 = createNode("Group");
Group30.DEF = "Original_WorldInfo";
WorldInfo WorldInfo31 = createNode("WorldInfo");
WorldInfo31.title = "HANIM 200x Default Joint Centers, LOA3";
WorldInfo31.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group30.children = new MFNode();

Group30.children[0] = WorldInfo31;

children[2] = Group30;

Viewpoint Viewpoint32 = createNode("Viewpoint");
Viewpoint32.description = "Humanoid LOA 3 Front";
Viewpoint32.position = new SFVec3f(new float[0,0.4,4]);
Viewpoint32.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[3] = Viewpoint32;

Viewpoint Viewpoint33 = createNode("Viewpoint");
Viewpoint33.description = "Humanoid LOA 3 Front Close";
Viewpoint33.position = new SFVec3f(new float[0,0.8,2]);
Viewpoint33.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[4] = Viewpoint33;

Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.description = "Humanoid LOA 3 Front Closer";
Viewpoint34.position = new SFVec3f(new float[0,1.2,1]);
Viewpoint34.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[5] = Viewpoint34;

Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.description = "Humanoid LOA 3 Front Face";
Viewpoint35.position = new SFVec3f(new float[0,1.63,1]);
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
children[6] = Viewpoint35;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.description = "Humanoid LOA 3 Right Side";
Viewpoint36.position = new SFVec3f(new float[2.6,0.8,0]);
Viewpoint36.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[7] = Viewpoint36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.description = "Humanoid LOA 3 Right Side Close";
Viewpoint37.position = new SFVec3f(new float[1,0.8,0.5]);
Viewpoint37.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[8] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.description = "Humanoid LOA 3 Left Side Close";
Viewpoint38.position = new SFVec3f(new float[-1,0.8,0.5]);
Viewpoint38.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[9] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.description = "Humanoid LOA 3 Left Side";
Viewpoint39.position = new SFVec3f(new float[-2.6,0.8,0]);
Viewpoint39.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[10] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.description = "Humanoid LOA 3 Top";
Viewpoint40.position = new SFVec3f(new float[0,3.5,0]);
Viewpoint40.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[11] = Viewpoint40;

HAnimHumanoid HAnimHumanoid41 = createNode("HAnimHumanoid");
HAnimHumanoid41.DEF = "hanim_humanoid";
HAnimHumanoid41.name = "humanoid";
HAnimHumanoid41.loa = 3;
MetadataSet MetadataSet42 = createNode("MetadataSet");
MetadataSet42.name = "HAnimHumanoid.info";
MetadataSet42.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString43 = createNode("MetadataString");
MetadataString43.name = "authorName";
MetadataSet42.value = new MFNode();

MetadataSet42.value[0] = MetadataString43;

MetadataString MetadataString44 = createNode("MetadataString");
MetadataString44.name = "authorEmail";
MetadataSet42.value[1] = MetadataString44;

MetadataString MetadataString45 = createNode("MetadataString");
MetadataString45.name = "copyright";
MetadataSet42.value[2] = MetadataString45;

MetadataString MetadataString46 = createNode("MetadataString");
MetadataString46.name = "creationDate";
MetadataSet42.value[3] = MetadataString46;

MetadataFloat MetadataFloat47 = createNode("MetadataFloat");
MetadataFloat47.name = "height";
MetadataFloat47.value = new MFFloat(new float[1.7504]);
MetadataSet42.value[4] = MetadataFloat47;

MetadataString MetadataString48 = createNode("MetadataString");
MetadataString48.name = "humanoidVersion";
MetadataSet42.value[5] = MetadataString48;

MetadataString MetadataString49 = createNode("MetadataString");
MetadataString49.name = "usageRestrictions";
MetadataSet42.value[6] = MetadataString49;

HAnimHumanoid41.metadata = new SFNode();

HAnimHumanoid41.metadata[0] = MetadataSet42;

HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.DEF = "hanim_humanoid_root";
HAnimJoint50.name = "humanoid_root";
HAnimJoint50.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimSegment HAnimSegment51 = createNode("HAnimSegment");
HAnimSegment51.DEF = "hanim_sacrum";
HAnimSegment51.name = "sacrum";
TouchSensor TouchSensor52 = createNode("TouchSensor");
TouchSensor52.description = "HAnimJoint humanoid_root, HAnimSegment sacrum";
HAnimSegment51.children = new MFNode();

HAnimSegment51.children[0] = TouchSensor52;

Transform Transform53 = createNode("Transform");
Transform53.translation = new SFVec3f(new float[0,0.824,0.0277]);
Shape Shape54 = createNode("Shape");
Shape54.DEF = "HAnimJointShape";
Appearance Appearance55 = createNode("Appearance");
Appearance55.DEF = "HAnimJointAppearance";
Material Material56 = createNode("Material");
Material56.diffuseColor = new SFColor(new float[1,0.5,0]);
Material56.transparency = 0.5;
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

Sphere Sphere57 = createNode("Sphere");
Sphere57.radius = 0.006;
Shape54.geometry = Sphere57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

HAnimSegment51.children[1] = Transform53;

Shape Shape58 = createNode("Shape");
LineSet LineSet59 = createNode("LineSet");
LineSet59.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA60 = createNode("ColorRGBA");
ColorRGBA60.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA60.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet59.color = ColorRGBA60;

Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet59.coord = Coordinate61;

Shape58.geometry = LineSet59;

HAnimSegment51.children[2] = Shape58;

Shape Shape62 = createNode("Shape");
LineSet LineSet63 = createNode("LineSet");
LineSet63.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA64 = createNode("ColorRGBA");
ColorRGBA64.USE = "HAnimSegmentLineColorRGBA";
LineSet63.color = ColorRGBA64;

Coordinate Coordinate65 = createNode("Coordinate");
Coordinate65.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet63.coord = Coordinate65;

Shape62.geometry = LineSet63;

HAnimSegment51.children[3] = Shape62;

HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

HAnimJoint HAnimJoint66 = createNode("HAnimJoint");
HAnimJoint66.DEF = "hanim_sacroiliac";
HAnimJoint66.name = "sacroiliac";
HAnimJoint66.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment67 = createNode("HAnimSegment");
HAnimSegment67.DEF = "hanim_pelvis";
HAnimSegment67.name = "pelvis";
TouchSensor TouchSensor68 = createNode("TouchSensor");
TouchSensor68.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment67.children = new MFNode();

HAnimSegment67.children[0] = TouchSensor68;

Transform Transform69 = createNode("Transform");
Transform69.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape70 = createNode("Shape");
Shape70.USE = "HAnimJointShape";
Transform69.child = new undefined();

Transform69.child[0] = Shape70;

HAnimSegment67.children[1] = Transform69;

Shape Shape71 = createNode("Shape");
LineSet LineSet72 = createNode("LineSet");
LineSet72.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA73 = createNode("ColorRGBA");
ColorRGBA73.USE = "HAnimSegmentLineColorRGBA";
LineSet72.color = ColorRGBA73;

Coordinate Coordinate74 = createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet72.coord = Coordinate74;

Shape71.geometry = LineSet72;

HAnimSegment67.children[2] = Shape71;

Shape Shape75 = createNode("Shape");
LineSet LineSet76 = createNode("LineSet");
LineSet76.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA77 = createNode("ColorRGBA");
ColorRGBA77.USE = "HAnimSegmentLineColorRGBA";
LineSet76.color = ColorRGBA77;

Coordinate Coordinate78 = createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet76.coord = Coordinate78;

Shape75.geometry = LineSet76;

HAnimSegment67.children[3] = Shape75;

Shape Shape79 = createNode("Shape");
LineSet LineSet80 = createNode("LineSet");
LineSet80.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA81 = createNode("ColorRGBA");
ColorRGBA81.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA81.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet80.color = ColorRGBA81;

Coordinate Coordinate82 = createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet80.coord = Coordinate82;

Shape79.geometry = LineSet80;

HAnimSegment67.children[4] = Shape79;

Shape Shape83 = createNode("Shape");
LineSet LineSet84 = createNode("LineSet");
LineSet84.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA85 = createNode("ColorRGBA");
ColorRGBA85.USE = "HAnimSiteLineColorRGBA";
LineSet84.color = ColorRGBA85;

Coordinate Coordinate86 = createNode("Coordinate");
Coordinate86.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet84.coord = Coordinate86;

Shape83.geometry = LineSet84;

HAnimSegment67.children[5] = Shape83;

Shape Shape87 = createNode("Shape");
LineSet LineSet88 = createNode("LineSet");
LineSet88.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA89 = createNode("ColorRGBA");
ColorRGBA89.USE = "HAnimSiteLineColorRGBA";
LineSet88.color = ColorRGBA89;

Coordinate Coordinate90 = createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet88.coord = Coordinate90;

Shape87.geometry = LineSet88;

HAnimSegment67.children[6] = Shape87;

Shape Shape91 = createNode("Shape");
LineSet LineSet92 = createNode("LineSet");
LineSet92.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA93 = createNode("ColorRGBA");
ColorRGBA93.USE = "HAnimSiteLineColorRGBA";
LineSet92.color = ColorRGBA93;

Coordinate Coordinate94 = createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet92.coord = Coordinate94;

Shape91.geometry = LineSet92;

HAnimSegment67.children[7] = Shape91;

Shape Shape95 = createNode("Shape");
LineSet LineSet96 = createNode("LineSet");
LineSet96.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA97 = createNode("ColorRGBA");
ColorRGBA97.USE = "HAnimSiteLineColorRGBA";
LineSet96.color = ColorRGBA97;

Coordinate Coordinate98 = createNode("Coordinate");
Coordinate98.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet96.coord = Coordinate98;

Shape95.geometry = LineSet96;

HAnimSegment67.children[8] = Shape95;

Shape Shape99 = createNode("Shape");
LineSet LineSet100 = createNode("LineSet");
LineSet100.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA101 = createNode("ColorRGBA");
ColorRGBA101.USE = "HAnimSiteLineColorRGBA";
LineSet100.color = ColorRGBA101;

Coordinate Coordinate102 = createNode("Coordinate");
Coordinate102.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet100.coord = Coordinate102;

Shape99.geometry = LineSet100;

HAnimSegment67.children[9] = Shape99;

Shape Shape103 = createNode("Shape");
LineSet LineSet104 = createNode("LineSet");
LineSet104.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA105 = createNode("ColorRGBA");
ColorRGBA105.USE = "HAnimSiteLineColorRGBA";
LineSet104.color = ColorRGBA105;

Coordinate Coordinate106 = createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet104.coord = Coordinate106;

Shape103.geometry = LineSet104;

HAnimSegment67.children[10] = Shape103;

Shape Shape107 = createNode("Shape");
LineSet LineSet108 = createNode("LineSet");
LineSet108.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA109 = createNode("ColorRGBA");
ColorRGBA109.USE = "HAnimSiteLineColorRGBA";
LineSet108.color = ColorRGBA109;

Coordinate Coordinate110 = createNode("Coordinate");
Coordinate110.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet108.coord = Coordinate110;

Shape107.geometry = LineSet108;

HAnimSegment67.children[11] = Shape107;

Shape Shape111 = createNode("Shape");
LineSet LineSet112 = createNode("LineSet");
LineSet112.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA113 = createNode("ColorRGBA");
ColorRGBA113.USE = "HAnimSiteLineColorRGBA";
LineSet112.color = ColorRGBA113;

Coordinate Coordinate114 = createNode("Coordinate");
Coordinate114.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet112.coord = Coordinate114;

Shape111.geometry = LineSet112;

HAnimSegment67.children[12] = Shape111;

HAnimSite HAnimSite115 = createNode("HAnimSite");
HAnimSite115.DEF = "hanim_r_iliocristale_pt";
HAnimSite115.name = "r_iliocristale_pt";
HAnimSite115.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor116 = createNode("TouchSensor");
TouchSensor116.description = "HAnimSite r_iliocristale_pt";
HAnimSite115.children = new MFNode();

HAnimSite115.children[0] = TouchSensor116;

Shape Shape117 = createNode("Shape");
Shape117.DEF = "HAnimSiteShape";
Appearance Appearance118 = createNode("Appearance");
Material Material119 = createNode("Material");
Material119.diffuseColor = new SFColor(new float[1,0,0]);
Appearance118.material = Material119;

Shape117.appearance = Appearance118;

IndexedFaceSet IndexedFaceSet120 = createNode("IndexedFaceSet");
IndexedFaceSet120.DEF = "DiamondIFS";
IndexedFaceSet120.solid = False;
IndexedFaceSet120.creaseAngle = 0.5;
IndexedFaceSet120.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate121 = createNode("Coordinate");
Coordinate121.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet120.coord = Coordinate121;

Shape117.geometry = IndexedFaceSet120;

HAnimSite115.children[1] = Shape117;

HAnimSegment67.children[13] = HAnimSite115;

HAnimSite HAnimSite122 = createNode("HAnimSite");
HAnimSite122.DEF = "hanim_r_trochanterion_pt";
HAnimSite122.name = "r_trochanterion_pt";
HAnimSite122.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor123 = createNode("TouchSensor");
TouchSensor123.description = "HAnimSite r_trochanterion_pt";
HAnimSite122.children = new MFNode();

HAnimSite122.children[0] = TouchSensor123;

Shape Shape124 = createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122.children[1] = Shape124;

HAnimSegment67.children[14] = HAnimSite122;

HAnimSite HAnimSite125 = createNode("HAnimSite");
HAnimSite125.DEF = "hanim_l_iliocristale_pt";
HAnimSite125.name = "l_iliocristale_pt";
HAnimSite125.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor126 = createNode("TouchSensor");
TouchSensor126.description = "HAnimSite l_iliocristale_pt";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = TouchSensor126;

Shape Shape127 = createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125.children[1] = Shape127;

HAnimSegment67.children[15] = HAnimSite125;

HAnimSite HAnimSite128 = createNode("HAnimSite");
HAnimSite128.DEF = "hanim_l_trochanterion_pt";
HAnimSite128.name = "l_trochanterion_pt";
HAnimSite128.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor129 = createNode("TouchSensor");
TouchSensor129.description = "HAnimSite l_trochanterion_pt";
HAnimSite128.children = new MFNode();

HAnimSite128.children[0] = TouchSensor129;

Shape Shape130 = createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128.children[1] = Shape130;

HAnimSegment67.children[16] = HAnimSite128;

HAnimSite HAnimSite131 = createNode("HAnimSite");
HAnimSite131.DEF = "hanim_r_asis_pt";
HAnimSite131.name = "r_asis_pt";
HAnimSite131.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor132 = createNode("TouchSensor");
TouchSensor132.description = "HAnimSite r_asis_pt";
HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = TouchSensor132;

Shape Shape133 = createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131.children[1] = Shape133;

HAnimSegment67.children[17] = HAnimSite131;

HAnimSite HAnimSite134 = createNode("HAnimSite");
HAnimSite134.DEF = "hanim_l_asis_pt";
HAnimSite134.name = "l_asis_pt";
HAnimSite134.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor135 = createNode("TouchSensor");
TouchSensor135.description = "HAnimSite l_asis_pt";
HAnimSite134.children = new MFNode();

HAnimSite134.children[0] = TouchSensor135;

Shape Shape136 = createNode("Shape");
Shape136.USE = "HAnimSiteShape";
HAnimSite134.children[1] = Shape136;

HAnimSegment67.children[18] = HAnimSite134;

HAnimSite HAnimSite137 = createNode("HAnimSite");
HAnimSite137.DEF = "hanim_r_psis_pt";
HAnimSite137.name = "r_psis_pt";
HAnimSite137.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor138 = createNode("TouchSensor");
TouchSensor138.description = "HAnimSite r_psis_pt";
HAnimSite137.children = new MFNode();

HAnimSite137.children[0] = TouchSensor138;

Shape Shape139 = createNode("Shape");
Shape139.USE = "HAnimSiteShape";
HAnimSite137.children[1] = Shape139;

HAnimSegment67.children[19] = HAnimSite137;

HAnimSite HAnimSite140 = createNode("HAnimSite");
HAnimSite140.DEF = "hanim_l_psis_pt";
HAnimSite140.name = "l_psis_pt";
HAnimSite140.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor141 = createNode("TouchSensor");
TouchSensor141.description = "HAnimSite l_psis_pt";
HAnimSite140.children = new MFNode();

HAnimSite140.children[0] = TouchSensor141;

Shape Shape142 = createNode("Shape");
Shape142.USE = "HAnimSiteShape";
HAnimSite140.children[1] = Shape142;

HAnimSegment67.children[20] = HAnimSite140;

HAnimSite HAnimSite143 = createNode("HAnimSite");
HAnimSite143.DEF = "hanim_crotch_pt";
HAnimSite143.name = "crotch_pt";
HAnimSite143.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor144 = createNode("TouchSensor");
TouchSensor144.description = "HAnimSite crotch_pt";
HAnimSite143.children = new MFNode();

HAnimSite143.children[0] = TouchSensor144;

Shape Shape145 = createNode("Shape");
Shape145.USE = "HAnimSiteShape";
HAnimSite143.children[1] = Shape145;

HAnimSegment67.children[21] = HAnimSite143;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimSegment67;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.DEF = "hanim_l_hip";
HAnimJoint146.name = "l_hip";
HAnimJoint146.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment147 = createNode("HAnimSegment");
HAnimSegment147.DEF = "hanim_l_thigh";
HAnimSegment147.name = "l_thigh";
TouchSensor TouchSensor148 = createNode("TouchSensor");
TouchSensor148.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment147.children = new MFNode();

HAnimSegment147.children[0] = TouchSensor148;

Transform Transform149 = createNode("Transform");
Transform149.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape150 = createNode("Shape");
Shape150.USE = "HAnimJointShape";
Transform149.child = new undefined();

Transform149.child[0] = Shape150;

HAnimSegment147.children[1] = Transform149;

Shape Shape151 = createNode("Shape");
LineSet LineSet152 = createNode("LineSet");
LineSet152.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA153 = createNode("ColorRGBA");
ColorRGBA153.USE = "HAnimSegmentLineColorRGBA";
LineSet152.color = ColorRGBA153;

Coordinate Coordinate154 = createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet152.coord = Coordinate154;

Shape151.geometry = LineSet152;

HAnimSegment147.children[2] = Shape151;

Shape Shape155 = createNode("Shape");
LineSet LineSet156 = createNode("LineSet");
LineSet156.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA157 = createNode("ColorRGBA");
ColorRGBA157.USE = "HAnimSiteLineColorRGBA";
LineSet156.color = ColorRGBA157;

Coordinate Coordinate158 = createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet156.coord = Coordinate158;

Shape155.geometry = LineSet156;

HAnimSegment147.children[3] = Shape155;

Shape Shape159 = createNode("Shape");
LineSet LineSet160 = createNode("LineSet");
LineSet160.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA161 = createNode("ColorRGBA");
ColorRGBA161.USE = "HAnimSiteLineColorRGBA";
LineSet160.color = ColorRGBA161;

Coordinate Coordinate162 = createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet160.coord = Coordinate162;

Shape159.geometry = LineSet160;

HAnimSegment147.children[4] = Shape159;

Shape Shape163 = createNode("Shape");
LineSet LineSet164 = createNode("LineSet");
LineSet164.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA165 = createNode("ColorRGBA");
ColorRGBA165.USE = "HAnimSiteLineColorRGBA";
LineSet164.color = ColorRGBA165;

Coordinate Coordinate166 = createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet164.coord = Coordinate166;

Shape163.geometry = LineSet164;

HAnimSegment147.children[5] = Shape163;

HAnimSite HAnimSite167 = createNode("HAnimSite");
HAnimSite167.DEF = "hanim_l_knee_crease_pt";
HAnimSite167.name = "l_knee_crease_pt";
HAnimSite167.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor168 = createNode("TouchSensor");
TouchSensor168.description = "HAnimSite l_knee_crease_pt";
HAnimSite167.children = new MFNode();

HAnimSite167.children[0] = TouchSensor168;

Shape Shape169 = createNode("Shape");
Shape169.USE = "HAnimSiteShape";
HAnimSite167.children[1] = Shape169;

HAnimSegment147.children[6] = HAnimSite167;

HAnimSite HAnimSite170 = createNode("HAnimSite");
HAnimSite170.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite170.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite170.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor171 = createNode("TouchSensor");
TouchSensor171.description = "HAnimSite l_femoral_lateral_epicn_pt";
HAnimSite170.children = new MFNode();

HAnimSite170.children[0] = TouchSensor171;

Shape Shape172 = createNode("Shape");
Shape172.USE = "HAnimSiteShape";
HAnimSite170.children[1] = Shape172;

HAnimSegment147.children[7] = HAnimSite170;

HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite173.name = "l_femoral_medial_epicondyle_pt";
HAnimSite173.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor174 = createNode("TouchSensor");
TouchSensor174.description = "HAnimSite l_femoral_medial_epicn_pt";
HAnimSite173.children = new MFNode();

HAnimSite173.children[0] = TouchSensor174;

Shape Shape175 = createNode("Shape");
Shape175.USE = "HAnimSiteShape";
HAnimSite173.children[1] = Shape175;

HAnimSegment147.children[8] = HAnimSite173;

HAnimJoint146.children = new MFNode();

HAnimJoint146.children[0] = HAnimSegment147;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.DEF = "hanim_l_knee";
HAnimJoint176.name = "l_knee";
HAnimJoint176.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment177 = createNode("HAnimSegment");
HAnimSegment177.DEF = "hanim_l_calf";
HAnimSegment177.name = "l_calf";
TouchSensor TouchSensor178 = createNode("TouchSensor");
TouchSensor178.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment177.children = new MFNode();

HAnimSegment177.children[0] = TouchSensor178;

Transform Transform179 = createNode("Transform");
Transform179.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape180 = createNode("Shape");
Shape180.USE = "HAnimJointShape";
Transform179.child = new undefined();

Transform179.child[0] = Shape180;

HAnimSegment177.children[1] = Transform179;

Shape Shape181 = createNode("Shape");
LineSet LineSet182 = createNode("LineSet");
LineSet182.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA183 = createNode("ColorRGBA");
ColorRGBA183.USE = "HAnimSegmentLineColorRGBA";
LineSet182.color = ColorRGBA183;

Coordinate Coordinate184 = createNode("Coordinate");
Coordinate184.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet182.coord = Coordinate184;

Shape181.geometry = LineSet182;

HAnimSegment177.children[2] = Shape181;

HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimSegment177;

HAnimJoint HAnimJoint185 = createNode("HAnimJoint");
HAnimJoint185.DEF = "hanim_l_talocrural";
HAnimJoint185.name = "l_talocrural";
HAnimJoint185.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment186 = createNode("HAnimSegment");
HAnimSegment186.DEF = "hanim_l_talus";
HAnimSegment186.name = "l_talus";
TouchSensor TouchSensor187 = createNode("TouchSensor");
TouchSensor187.description = "HAnimJoint l_talocrural, HAnimSegment l_talus";
HAnimSegment186.children = new MFNode();

HAnimSegment186.children[0] = TouchSensor187;

Transform Transform188 = createNode("Transform");
Transform188.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape189 = createNode("Shape");
Shape189.USE = "HAnimJointShape";
Transform188.child = new undefined();

Transform188.child[0] = Shape189;

HAnimSegment186.children[1] = Transform188;

Shape Shape190 = createNode("Shape");
LineSet LineSet191 = createNode("LineSet");
LineSet191.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA192 = createNode("ColorRGBA");
ColorRGBA192.USE = "HAnimSegmentLineColorRGBA";
LineSet191.color = ColorRGBA192;

Coordinate Coordinate193 = createNode("Coordinate");
Coordinate193.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet191.coord = Coordinate193;

Shape190.geometry = LineSet191;

HAnimSegment186.children[2] = Shape190;

Shape Shape194 = createNode("Shape");
LineSet LineSet195 = createNode("LineSet");
LineSet195.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA196 = createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSiteLineColorRGBA";
LineSet195.color = ColorRGBA196;

Coordinate Coordinate197 = createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet195.coord = Coordinate197;

Shape194.geometry = LineSet195;

HAnimSegment186.children[3] = Shape194;

Shape Shape198 = createNode("Shape");
LineSet LineSet199 = createNode("LineSet");
LineSet199.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA200 = createNode("ColorRGBA");
ColorRGBA200.USE = "HAnimSiteLineColorRGBA";
LineSet199.color = ColorRGBA200;

Coordinate Coordinate201 = createNode("Coordinate");
Coordinate201.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet199.coord = Coordinate201;

Shape198.geometry = LineSet199;

HAnimSegment186.children[4] = Shape198;

Shape Shape202 = createNode("Shape");
LineSet LineSet203 = createNode("LineSet");
LineSet203.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA204 = createNode("ColorRGBA");
ColorRGBA204.USE = "HAnimSiteLineColorRGBA";
LineSet203.color = ColorRGBA204;

Coordinate Coordinate205 = createNode("Coordinate");
Coordinate205.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet203.coord = Coordinate205;

Shape202.geometry = LineSet203;

HAnimSegment186.children[5] = Shape202;

Shape Shape206 = createNode("Shape");
LineSet LineSet207 = createNode("LineSet");
LineSet207.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA208 = createNode("ColorRGBA");
ColorRGBA208.USE = "HAnimSiteLineColorRGBA";
LineSet207.color = ColorRGBA208;

Coordinate Coordinate209 = createNode("Coordinate");
Coordinate209.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet207.coord = Coordinate209;

Shape206.geometry = LineSet207;

HAnimSegment186.children[6] = Shape206;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite210.name = "l_lateral_malleolus_pt";
HAnimSite210.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor211 = createNode("TouchSensor");
TouchSensor211.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite210.children = new MFNode();

HAnimSite210.children[0] = TouchSensor211;

Shape Shape212 = createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210.children[1] = Shape212;

HAnimSegment186.children[7] = HAnimSite210;

HAnimSite HAnimSite213 = createNode("HAnimSite");
HAnimSite213.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite213.name = "l_medial_malleolus_pt";
HAnimSite213.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor214 = createNode("TouchSensor");
TouchSensor214.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite213.children = new MFNode();

HAnimSite213.children[0] = TouchSensor214;

Shape Shape215 = createNode("Shape");
Shape215.USE = "HAnimSiteShape";
HAnimSite213.children[1] = Shape215;

HAnimSegment186.children[8] = HAnimSite213;

HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.DEF = "hanim_l_sphyrion_pt";
HAnimSite216.name = "l_sphyrion_pt";
HAnimSite216.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor217 = createNode("TouchSensor");
TouchSensor217.description = "HAnimSite l_sphyrion_pt";
HAnimSite216.children = new MFNode();

HAnimSite216.children[0] = TouchSensor217;

Shape Shape218 = createNode("Shape");
Shape218.USE = "HAnimSiteShape";
HAnimSite216.children[1] = Shape218;

HAnimSegment186.children[9] = HAnimSite216;

HAnimSite HAnimSite219 = createNode("HAnimSite");
HAnimSite219.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite219.name = "l_calcaneus_posterior_pt";
HAnimSite219.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor220 = createNode("TouchSensor");
TouchSensor220.description = "HAnimSite l_calcaneous_post_pt";
HAnimSite219.children = new MFNode();

HAnimSite219.children[0] = TouchSensor220;

Shape Shape221 = createNode("Shape");
Shape221.USE = "HAnimSiteShape";
HAnimSite219.children[1] = Shape221;

HAnimSegment186.children[10] = HAnimSite219;

HAnimJoint185.children = new MFNode();

HAnimJoint185.children[0] = HAnimSegment186;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint222.name = "l_tarsometatarsal_2";
HAnimJoint222.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment223 = createNode("HAnimSegment");
HAnimSegment223.DEF = "hanim_l_metatarsal_2";
HAnimSegment223.name = "l_metatarsal_2";
TouchSensor TouchSensor224 = createNode("TouchSensor");
TouchSensor224.description = "HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2";
HAnimSegment223.children = new MFNode();

HAnimSegment223.children[0] = TouchSensor224;

Transform Transform225 = createNode("Transform");
Transform225.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
Shape Shape226 = createNode("Shape");
Shape226.USE = "HAnimJointShape";
Transform225.child = new undefined();

Transform225.child[0] = Shape226;

HAnimSegment223.children[1] = Transform225;

Shape Shape227 = createNode("Shape");
LineSet LineSet228 = createNode("LineSet");
LineSet228.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA229 = createNode("ColorRGBA");
ColorRGBA229.USE = "HAnimSegmentLineColorRGBA";
LineSet228.color = ColorRGBA229;

Coordinate Coordinate230 = createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet228.coord = Coordinate230;

Shape227.geometry = LineSet228;

HAnimSegment223.children[2] = Shape227;

HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = HAnimSegment223;

HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint231.name = "l_metatarsophalangeal_2";
HAnimJoint231.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment232 = createNode("HAnimSegment");
HAnimSegment232.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment232.name = "l_tarsal_proximal_phalanx_2";
TouchSensor TouchSensor233 = createNode("TouchSensor");
TouchSensor233.description = "HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2";
HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = TouchSensor233;

Transform Transform234 = createNode("Transform");
Transform234.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
Shape Shape235 = createNode("Shape");
Shape235.USE = "HAnimJointShape";
Transform234.child = new undefined();

Transform234.child[0] = Shape235;

HAnimSegment232.children[1] = Transform234;

Shape Shape236 = createNode("Shape");
LineSet LineSet237 = createNode("LineSet");
LineSet237.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA238 = createNode("ColorRGBA");
ColorRGBA238.USE = "HAnimSegmentLineColorRGBA";
LineSet237.color = ColorRGBA238;

Coordinate Coordinate239 = createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet237.coord = Coordinate239;

Shape236.geometry = LineSet237;

HAnimSegment232.children[2] = Shape236;

Shape Shape240 = createNode("Shape");
LineSet LineSet241 = createNode("LineSet");
LineSet241.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA242 = createNode("ColorRGBA");
ColorRGBA242.USE = "HAnimSiteLineColorRGBA";
LineSet241.color = ColorRGBA242;

Coordinate Coordinate243 = createNode("Coordinate");
Coordinate243.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet241.coord = Coordinate243;

Shape240.geometry = LineSet241;

HAnimSegment232.children[3] = Shape240;

HAnimSite HAnimSite244 = createNode("HAnimSite");
HAnimSite244.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite244.name = "l_metatarsal_phalanx_1_pt";
HAnimSite244.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
TouchSensor TouchSensor245 = createNode("TouchSensor");
TouchSensor245.description = "HAnimSite l_metatarsal_pha1_pt";
HAnimSite244.children = new MFNode();

HAnimSite244.children[0] = TouchSensor245;

Shape Shape246 = createNode("Shape");
Shape246.USE = "HAnimSiteShape";
HAnimSite244.children[1] = Shape246;

HAnimSegment232.children[4] = HAnimSite244;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

HAnimJoint HAnimJoint247 = createNode("HAnimJoint");
HAnimJoint247.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint247.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint247.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimSegment HAnimSegment248 = createNode("HAnimSegment");
HAnimSegment248.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSegment248.name = "l_tarsal_distal_phalanx_2";
TouchSensor TouchSensor249 = createNode("TouchSensor");
TouchSensor249.description = "HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2";
HAnimSegment248.children = new MFNode();

HAnimSegment248.children[0] = TouchSensor249;

Transform Transform250 = createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.1086,0,0.0762]);
Shape Shape251 = createNode("Shape");
Shape251.USE = "HAnimJointShape";
Transform250.child = new undefined();

Transform250.child[0] = Shape251;

HAnimSegment248.children[1] = Transform250;

Shape Shape252 = createNode("Shape");
LineSet LineSet253 = createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA254 = createNode("ColorRGBA");
ColorRGBA254.USE = "HAnimSiteLineColorRGBA";
LineSet253.color = ColorRGBA254;

Coordinate Coordinate255 = createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet253.coord = Coordinate255;

Shape252.geometry = LineSet253;

HAnimSegment248.children[2] = Shape252;

Shape Shape256 = createNode("Shape");
LineSet LineSet257 = createNode("LineSet");
LineSet257.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA258 = createNode("ColorRGBA");
ColorRGBA258.USE = "HAnimSiteLineColorRGBA";
LineSet257.color = ColorRGBA258;

Coordinate Coordinate259 = createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet257.coord = Coordinate259;

Shape256.geometry = LineSet257;

HAnimSegment248.children[3] = Shape256;

Shape Shape260 = createNode("Shape");
LineSet LineSet261 = createNode("LineSet");
LineSet261.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA262 = createNode("ColorRGBA");
ColorRGBA262.USE = "HAnimSiteLineColorRGBA";
LineSet261.color = ColorRGBA262;

Coordinate Coordinate263 = createNode("Coordinate");
Coordinate263.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet261.coord = Coordinate263;

Shape260.geometry = LineSet261;

HAnimSegment248.children[4] = Shape260;

HAnimSite HAnimSite264 = createNode("HAnimSite");
HAnimSite264.DEF = "hanim_l_forefoot_tip_pt";
HAnimSite264.name = "l_forefoot_tip_pt";
HAnimSite264.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
TouchSensor TouchSensor265 = createNode("TouchSensor");
TouchSensor265.description = "HAnimSite l_forefoot_tip";
HAnimSite264.children = new MFNode();

HAnimSite264.children[0] = TouchSensor265;

Shape Shape266 = createNode("Shape");
Shape266.USE = "HAnimSiteShape";
HAnimSite264.children[1] = Shape266;

HAnimSegment248.children[5] = HAnimSite264;

HAnimSite HAnimSite267 = createNode("HAnimSite");
HAnimSite267.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite267.name = "l_metatarsal_phalanx_5_pt";
HAnimSite267.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
TouchSensor TouchSensor268 = createNode("TouchSensor");
TouchSensor268.description = "HAnimSite l_metatarsal_pha5_pt";
HAnimSite267.children = new MFNode();

HAnimSite267.children[0] = TouchSensor268;

Shape Shape269 = createNode("Shape");
Shape269.USE = "HAnimSiteShape";
HAnimSite267.children[1] = Shape269;

HAnimSegment248.children[6] = HAnimSite267;

HAnimSite HAnimSite270 = createNode("HAnimSite");
HAnimSite270.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite270.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite270.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor271 = createNode("TouchSensor");
TouchSensor271.description = "HAnimSite l_digit2_pt";
HAnimSite270.children = new MFNode();

HAnimSite270.children[0] = TouchSensor271;

Shape Shape272 = createNode("Shape");
Shape272.USE = "HAnimSiteShape";
HAnimSite270.children[1] = Shape272;

HAnimSegment248.children[7] = HAnimSite270;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

HAnimJoint231.children[1] = HAnimJoint247;

HAnimJoint222.children[1] = HAnimJoint231;

HAnimJoint185.children[1] = HAnimJoint222;

HAnimJoint176.children[1] = HAnimJoint185;

HAnimJoint146.children[1] = HAnimJoint176;

HAnimJoint66.children[1] = HAnimJoint146;

HAnimJoint HAnimJoint273 = createNode("HAnimJoint");
HAnimJoint273.DEF = "hanim_r_hip";
HAnimJoint273.name = "r_hip";
HAnimJoint273.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment274 = createNode("HAnimSegment");
HAnimSegment274.DEF = "hanim_r_thigh";
HAnimSegment274.name = "r_thigh";
TouchSensor TouchSensor275 = createNode("TouchSensor");
TouchSensor275.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment274.children = new MFNode();

HAnimSegment274.children[0] = TouchSensor275;

Transform Transform276 = createNode("Transform");
Transform276.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
Shape Shape277 = createNode("Shape");
Shape277.USE = "HAnimJointShape";
Transform276.child = new undefined();

Transform276.child[0] = Shape277;

HAnimSegment274.children[1] = Transform276;

Shape Shape278 = createNode("Shape");
LineSet LineSet279 = createNode("LineSet");
LineSet279.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA280 = createNode("ColorRGBA");
ColorRGBA280.USE = "HAnimSegmentLineColorRGBA";
LineSet279.color = ColorRGBA280;

Coordinate Coordinate281 = createNode("Coordinate");
Coordinate281.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet279.coord = Coordinate281;

Shape278.geometry = LineSet279;

HAnimSegment274.children[2] = Shape278;

Shape Shape282 = createNode("Shape");
LineSet LineSet283 = createNode("LineSet");
LineSet283.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA284 = createNode("ColorRGBA");
ColorRGBA284.USE = "HAnimSiteLineColorRGBA";
LineSet283.color = ColorRGBA284;

Coordinate Coordinate285 = createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet283.coord = Coordinate285;

Shape282.geometry = LineSet283;

HAnimSegment274.children[3] = Shape282;

Shape Shape286 = createNode("Shape");
LineSet LineSet287 = createNode("LineSet");
LineSet287.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA288 = createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSiteLineColorRGBA";
LineSet287.color = ColorRGBA288;

Coordinate Coordinate289 = createNode("Coordinate");
Coordinate289.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet287.coord = Coordinate289;

Shape286.geometry = LineSet287;

HAnimSegment274.children[4] = Shape286;

Shape Shape290 = createNode("Shape");
LineSet LineSet291 = createNode("LineSet");
LineSet291.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA292 = createNode("ColorRGBA");
ColorRGBA292.USE = "HAnimSiteLineColorRGBA";
LineSet291.color = ColorRGBA292;

Coordinate Coordinate293 = createNode("Coordinate");
Coordinate293.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet291.coord = Coordinate293;

Shape290.geometry = LineSet291;

HAnimSegment274.children[5] = Shape290;

HAnimSite HAnimSite294 = createNode("HAnimSite");
HAnimSite294.DEF = "hanim_r_knee_crease_pt";
HAnimSite294.name = "r_knee_crease_pt";
HAnimSite294.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor295 = createNode("TouchSensor");
TouchSensor295.description = "HAnimSite r_knee_crease_pt";
HAnimSite294.children = new MFNode();

HAnimSite294.children[0] = TouchSensor295;

Shape Shape296 = createNode("Shape");
Shape296.USE = "HAnimSiteShape";
HAnimSite294.children[1] = Shape296;

HAnimSegment274.children[6] = HAnimSite294;

HAnimSite HAnimSite297 = createNode("HAnimSite");
HAnimSite297.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite297.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite297.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor298 = createNode("TouchSensor");
TouchSensor298.description = "HAnimSite r_femoral_lateral_epicn_pt";
HAnimSite297.children = new MFNode();

HAnimSite297.children[0] = TouchSensor298;

Shape Shape299 = createNode("Shape");
Shape299.USE = "HAnimSiteShape";
HAnimSite297.children[1] = Shape299;

HAnimSegment274.children[7] = HAnimSite297;

HAnimSite HAnimSite300 = createNode("HAnimSite");
HAnimSite300.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite300.name = "r_femoral_medial_epicondyle_pt";
HAnimSite300.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor301 = createNode("TouchSensor");
TouchSensor301.description = "HAnimSite r_femoral_medial_epicn_pt";
HAnimSite300.children = new MFNode();

HAnimSite300.children[0] = TouchSensor301;

Shape Shape302 = createNode("Shape");
Shape302.USE = "HAnimSiteShape";
HAnimSite300.children[1] = Shape302;

HAnimSegment274.children[8] = HAnimSite300;

HAnimJoint273.children = new MFNode();

HAnimJoint273.children[0] = HAnimSegment274;

HAnimJoint HAnimJoint303 = createNode("HAnimJoint");
HAnimJoint303.DEF = "hanim_r_knee";
HAnimJoint303.name = "r_knee";
HAnimJoint303.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment304 = createNode("HAnimSegment");
HAnimSegment304.DEF = "hanim_r_calf";
HAnimSegment304.name = "r_calf";
TouchSensor TouchSensor305 = createNode("TouchSensor");
TouchSensor305.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment304.children = new MFNode();

HAnimSegment304.children[0] = TouchSensor305;

Transform Transform306 = createNode("Transform");
Transform306.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
Shape Shape307 = createNode("Shape");
Shape307.USE = "HAnimJointShape";
Transform306.child = new undefined();

Transform306.child[0] = Shape307;

HAnimSegment304.children[1] = Transform306;

Shape Shape308 = createNode("Shape");
LineSet LineSet309 = createNode("LineSet");
LineSet309.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA310 = createNode("ColorRGBA");
ColorRGBA310.USE = "HAnimSegmentLineColorRGBA";
LineSet309.color = ColorRGBA310;

Coordinate Coordinate311 = createNode("Coordinate");
Coordinate311.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet309.coord = Coordinate311;

Shape308.geometry = LineSet309;

HAnimSegment304.children[2] = Shape308;

HAnimJoint303.children = new MFNode();

HAnimJoint303.children[0] = HAnimSegment304;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.DEF = "hanim_r_talocrural";
HAnimJoint312.name = "r_talocrural";
HAnimJoint312.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment313 = createNode("HAnimSegment");
HAnimSegment313.DEF = "hanim_r_talus";
HAnimSegment313.name = "r_talus";
TouchSensor TouchSensor314 = createNode("TouchSensor");
TouchSensor314.description = "HAnimJoint r_talocrural, HAnimSegment r_talus";
HAnimSegment313.children = new MFNode();

HAnimSegment313.children[0] = TouchSensor314;

Transform Transform315 = createNode("Transform");
Transform315.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
Shape Shape316 = createNode("Shape");
Shape316.USE = "HAnimJointShape";
Transform315.child = new undefined();

Transform315.child[0] = Shape316;

HAnimSegment313.children[1] = Transform315;

Shape Shape317 = createNode("Shape");
LineSet LineSet318 = createNode("LineSet");
LineSet318.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA319 = createNode("ColorRGBA");
ColorRGBA319.USE = "HAnimSegmentLineColorRGBA";
LineSet318.color = ColorRGBA319;

Coordinate Coordinate320 = createNode("Coordinate");
Coordinate320.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet318.coord = Coordinate320;

Shape317.geometry = LineSet318;

HAnimSegment313.children[2] = Shape317;

Shape Shape321 = createNode("Shape");
LineSet LineSet322 = createNode("LineSet");
LineSet322.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA323 = createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSiteLineColorRGBA";
LineSet322.color = ColorRGBA323;

Coordinate Coordinate324 = createNode("Coordinate");
Coordinate324.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet322.coord = Coordinate324;

Shape321.geometry = LineSet322;

HAnimSegment313.children[3] = Shape321;

Shape Shape325 = createNode("Shape");
LineSet LineSet326 = createNode("LineSet");
LineSet326.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA327 = createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSiteLineColorRGBA";
LineSet326.color = ColorRGBA327;

Coordinate Coordinate328 = createNode("Coordinate");
Coordinate328.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet326.coord = Coordinate328;

Shape325.geometry = LineSet326;

HAnimSegment313.children[4] = Shape325;

Shape Shape329 = createNode("Shape");
LineSet LineSet330 = createNode("LineSet");
LineSet330.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA331 = createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSiteLineColorRGBA";
LineSet330.color = ColorRGBA331;

Coordinate Coordinate332 = createNode("Coordinate");
Coordinate332.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet330.coord = Coordinate332;

Shape329.geometry = LineSet330;

HAnimSegment313.children[5] = Shape329;

Shape Shape333 = createNode("Shape");
LineSet LineSet334 = createNode("LineSet");
LineSet334.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA335 = createNode("ColorRGBA");
ColorRGBA335.USE = "HAnimSiteLineColorRGBA";
LineSet334.color = ColorRGBA335;

Coordinate Coordinate336 = createNode("Coordinate");
Coordinate336.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet334.coord = Coordinate336;

Shape333.geometry = LineSet334;

HAnimSegment313.children[6] = Shape333;

HAnimSite HAnimSite337 = createNode("HAnimSite");
HAnimSite337.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite337.name = "r_lateral_malleolus_pt";
HAnimSite337.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor338 = createNode("TouchSensor");
TouchSensor338.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = TouchSensor338;

Shape Shape339 = createNode("Shape");
Shape339.USE = "HAnimSiteShape";
HAnimSite337.children[1] = Shape339;

HAnimSegment313.children[7] = HAnimSite337;

HAnimSite HAnimSite340 = createNode("HAnimSite");
HAnimSite340.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite340.name = "r_medial_malleolus_pt";
HAnimSite340.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor341 = createNode("TouchSensor");
TouchSensor341.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite340.children = new MFNode();

HAnimSite340.children[0] = TouchSensor341;

Shape Shape342 = createNode("Shape");
Shape342.USE = "HAnimSiteShape";
HAnimSite340.children[1] = Shape342;

HAnimSegment313.children[8] = HAnimSite340;

HAnimSite HAnimSite343 = createNode("HAnimSite");
HAnimSite343.DEF = "hanim_r_sphyrion_pt";
HAnimSite343.name = "r_sphyrion_pt";
HAnimSite343.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor344 = createNode("TouchSensor");
TouchSensor344.description = "HAnimSite r_sphyrion_pt";
HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = TouchSensor344;

Shape Shape345 = createNode("Shape");
Shape345.USE = "HAnimSiteShape";
HAnimSite343.children[1] = Shape345;

HAnimSegment313.children[9] = HAnimSite343;

HAnimSite HAnimSite346 = createNode("HAnimSite");
HAnimSite346.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite346.name = "r_calcaneus_posterior_pt";
HAnimSite346.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor347 = createNode("TouchSensor");
TouchSensor347.description = "HAnimSite r_calcaneous_post_pt";
HAnimSite346.children = new MFNode();

HAnimSite346.children[0] = TouchSensor347;

Shape Shape348 = createNode("Shape");
Shape348.USE = "HAnimSiteShape";
HAnimSite346.children[1] = Shape348;

HAnimSegment313.children[10] = HAnimSite346;

HAnimJoint312.children = new MFNode();

HAnimJoint312.children[0] = HAnimSegment313;

HAnimJoint HAnimJoint349 = createNode("HAnimJoint");
HAnimJoint349.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint349.name = "r_tarsometatarsal_2";
HAnimJoint349.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment350 = createNode("HAnimSegment");
HAnimSegment350.DEF = "hanim_r_metatarsal_2";
HAnimSegment350.name = "r_metatarsal_2";
TouchSensor TouchSensor351 = createNode("TouchSensor");
TouchSensor351.description = "HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2";
HAnimSegment350.children = new MFNode();

HAnimSegment350.children[0] = TouchSensor351;

Transform Transform352 = createNode("Transform");
Transform352.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
Shape Shape353 = createNode("Shape");
Shape353.USE = "HAnimJointShape";
Transform352.child = new undefined();

Transform352.child[0] = Shape353;

HAnimSegment350.children[1] = Transform352;

Shape Shape354 = createNode("Shape");
LineSet LineSet355 = createNode("LineSet");
LineSet355.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA356 = createNode("ColorRGBA");
ColorRGBA356.USE = "HAnimSegmentLineColorRGBA";
LineSet355.color = ColorRGBA356;

Coordinate Coordinate357 = createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet355.coord = Coordinate357;

Shape354.geometry = LineSet355;

HAnimSegment350.children[2] = Shape354;

HAnimJoint349.children = new MFNode();

HAnimJoint349.children[0] = HAnimSegment350;

HAnimJoint HAnimJoint358 = createNode("HAnimJoint");
HAnimJoint358.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint358.name = "r_metatarsophalangeal_2";
HAnimJoint358.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment359 = createNode("HAnimSegment");
HAnimSegment359.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment359.name = "r_tarsal_proximal_phalanx_2";
TouchSensor TouchSensor360 = createNode("TouchSensor");
TouchSensor360.description = "HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2";
HAnimSegment359.children = new MFNode();

HAnimSegment359.children[0] = TouchSensor360;

Transform Transform361 = createNode("Transform");
Transform361.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
Shape Shape362 = createNode("Shape");
Shape362.USE = "HAnimJointShape";
Transform361.child = new undefined();

Transform361.child[0] = Shape362;

HAnimSegment359.children[1] = Transform361;

Shape Shape363 = createNode("Shape");
LineSet LineSet364 = createNode("LineSet");
LineSet364.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA365 = createNode("ColorRGBA");
ColorRGBA365.USE = "HAnimSegmentLineColorRGBA";
LineSet364.color = ColorRGBA365;

Coordinate Coordinate366 = createNode("Coordinate");
Coordinate366.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet364.coord = Coordinate366;

Shape363.geometry = LineSet364;

HAnimSegment359.children[2] = Shape363;

Shape Shape367 = createNode("Shape");
LineSet LineSet368 = createNode("LineSet");
LineSet368.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA369 = createNode("ColorRGBA");
ColorRGBA369.USE = "HAnimSiteLineColorRGBA";
LineSet368.color = ColorRGBA369;

Coordinate Coordinate370 = createNode("Coordinate");
Coordinate370.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet368.coord = Coordinate370;

Shape367.geometry = LineSet368;

HAnimSegment359.children[3] = Shape367;

HAnimSite HAnimSite371 = createNode("HAnimSite");
HAnimSite371.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite371.name = "r_metatarsal_phalanx_1_pt";
HAnimSite371.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
TouchSensor TouchSensor372 = createNode("TouchSensor");
TouchSensor372.description = "HAnimSite r_metatarsal_pha1_pt";
HAnimSite371.children = new MFNode();

HAnimSite371.children[0] = TouchSensor372;

Shape Shape373 = createNode("Shape");
Shape373.USE = "HAnimSiteShape";
HAnimSite371.children[1] = Shape373;

HAnimSegment359.children[4] = HAnimSite371;

HAnimJoint358.children = new MFNode();

HAnimJoint358.children[0] = HAnimSegment359;

HAnimJoint HAnimJoint374 = createNode("HAnimJoint");
HAnimJoint374.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint374.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint374.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimSegment HAnimSegment375 = createNode("HAnimSegment");
HAnimSegment375.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimSegment375.name = "r_tarsal_distal_phalanx_2";
TouchSensor TouchSensor376 = createNode("TouchSensor");
TouchSensor376.description = "HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2";
HAnimSegment375.children = new MFNode();

HAnimSegment375.children[0] = TouchSensor376;

Transform Transform377 = createNode("Transform");
Transform377.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
Shape Shape378 = createNode("Shape");
Shape378.USE = "HAnimJointShape";
Transform377.child = new undefined();

Transform377.child[0] = Shape378;

HAnimSegment375.children[1] = Transform377;

Shape Shape379 = createNode("Shape");
LineSet LineSet380 = createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA381 = createNode("ColorRGBA");
ColorRGBA381.USE = "HAnimSiteLineColorRGBA";
LineSet380.color = ColorRGBA381;

Coordinate Coordinate382 = createNode("Coordinate");
Coordinate382.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet380.coord = Coordinate382;

Shape379.geometry = LineSet380;

HAnimSegment375.children[2] = Shape379;

Shape Shape383 = createNode("Shape");
LineSet LineSet384 = createNode("LineSet");
LineSet384.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA385 = createNode("ColorRGBA");
ColorRGBA385.USE = "HAnimSiteLineColorRGBA";
LineSet384.color = ColorRGBA385;

Coordinate Coordinate386 = createNode("Coordinate");
Coordinate386.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet384.coord = Coordinate386;

Shape383.geometry = LineSet384;

HAnimSegment375.children[3] = Shape383;

Shape Shape387 = createNode("Shape");
LineSet LineSet388 = createNode("LineSet");
LineSet388.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA389 = createNode("ColorRGBA");
ColorRGBA389.USE = "HAnimSiteLineColorRGBA";
LineSet388.color = ColorRGBA389;

Coordinate Coordinate390 = createNode("Coordinate");
Coordinate390.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet388.coord = Coordinate390;

Shape387.geometry = LineSet388;

HAnimSegment375.children[4] = Shape387;

HAnimSite HAnimSite391 = createNode("HAnimSite");
HAnimSite391.DEF = "hanim_r_forefoot_tip_pt";
HAnimSite391.name = "r_forefoot_tip_pt";
HAnimSite391.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
TouchSensor TouchSensor392 = createNode("TouchSensor");
TouchSensor392.description = "HAnimSite r_forefoot_tip";
HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = TouchSensor392;

Shape Shape393 = createNode("Shape");
Shape393.USE = "HAnimSiteShape";
HAnimSite391.children[1] = Shape393;

HAnimSegment375.children[5] = HAnimSite391;

HAnimSite HAnimSite394 = createNode("HAnimSite");
HAnimSite394.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite394.name = "r_metatarsal_phalanx_5_pt";
HAnimSite394.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
TouchSensor TouchSensor395 = createNode("TouchSensor");
TouchSensor395.description = "HAnimSite r_metatarsal_pha5_pt";
HAnimSite394.children = new MFNode();

HAnimSite394.children[0] = TouchSensor395;

Shape Shape396 = createNode("Shape");
Shape396.USE = "HAnimSiteShape";
HAnimSite394.children[1] = Shape396;

HAnimSegment375.children[6] = HAnimSite394;

HAnimSite HAnimSite397 = createNode("HAnimSite");
HAnimSite397.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite397.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite397.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor398 = createNode("TouchSensor");
TouchSensor398.description = "HAnimSite r_digit2_pt";
HAnimSite397.children = new MFNode();

HAnimSite397.children[0] = TouchSensor398;

Shape Shape399 = createNode("Shape");
Shape399.USE = "HAnimSiteShape";
HAnimSite397.children[1] = Shape399;

HAnimSegment375.children[7] = HAnimSite397;

HAnimJoint374.children = new MFNode();

HAnimJoint374.children[0] = HAnimSegment375;

HAnimJoint358.children[1] = HAnimJoint374;

HAnimJoint349.children[1] = HAnimJoint358;

HAnimJoint312.children[1] = HAnimJoint349;

HAnimJoint303.children[1] = HAnimJoint312;

HAnimJoint273.children[1] = HAnimJoint303;

HAnimJoint66.children[2] = HAnimJoint273;

HAnimJoint50.children[1] = HAnimJoint66;

HAnimJoint HAnimJoint400 = createNode("HAnimJoint");
HAnimJoint400.DEF = "hanim_vl5";
HAnimJoint400.name = "vl5";
HAnimJoint400.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment401 = createNode("HAnimSegment");
HAnimSegment401.DEF = "hanim_l5";
HAnimSegment401.name = "l5";
TouchSensor TouchSensor402 = createNode("TouchSensor");
TouchSensor402.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment401.children = new MFNode();

HAnimSegment401.children[0] = TouchSensor402;

Transform Transform403 = createNode("Transform");
Transform403.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Shape Shape404 = createNode("Shape");
Shape404.USE = "HAnimJointShape";
Transform403.child = new undefined();

Transform403.child[0] = Shape404;

HAnimSegment401.children[1] = Transform403;

Shape Shape405 = createNode("Shape");
LineSet LineSet406 = createNode("LineSet");
LineSet406.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA407 = createNode("ColorRGBA");
ColorRGBA407.USE = "HAnimSegmentLineColorRGBA";
LineSet406.color = ColorRGBA407;

Coordinate Coordinate408 = createNode("Coordinate");
Coordinate408.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet406.coord = Coordinate408;

Shape405.geometry = LineSet406;

HAnimSegment401.children[2] = Shape405;

Shape Shape409 = createNode("Shape");
LineSet LineSet410 = createNode("LineSet");
LineSet410.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA411 = createNode("ColorRGBA");
ColorRGBA411.USE = "HAnimSiteLineColorRGBA";
LineSet410.color = ColorRGBA411;

Coordinate Coordinate412 = createNode("Coordinate");
Coordinate412.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet410.coord = Coordinate412;

Shape409.geometry = LineSet410;

HAnimSegment401.children[3] = Shape409;

Shape Shape413 = createNode("Shape");
LineSet LineSet414 = createNode("LineSet");
LineSet414.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA415 = createNode("ColorRGBA");
ColorRGBA415.USE = "HAnimSiteLineColorRGBA";
LineSet414.color = ColorRGBA415;

Coordinate Coordinate416 = createNode("Coordinate");
Coordinate416.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet414.coord = Coordinate416;

Shape413.geometry = LineSet414;

HAnimSegment401.children[4] = Shape413;

HAnimSite HAnimSite417 = createNode("HAnimSite");
HAnimSite417.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite417.name = "waist_preferred_posterior_pt";
HAnimSite417.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
TouchSensor TouchSensor418 = createNode("TouchSensor");
TouchSensor418.description = "HAnimSite waist_preferred_post_pt";
HAnimSite417.children = new MFNode();

HAnimSite417.children[0] = TouchSensor418;

Shape Shape419 = createNode("Shape");
Shape419.USE = "HAnimSiteShape";
HAnimSite417.children[1] = Shape419;

HAnimSegment401.children[5] = HAnimSite417;

HAnimSite HAnimSite420 = createNode("HAnimSite");
HAnimSite420.DEF = "hanim_navel_pt";
HAnimSite420.name = "navel_pt";
HAnimSite420.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor421 = createNode("TouchSensor");
TouchSensor421.description = "HAnimSite navel_pt";
HAnimSite420.children = new MFNode();

HAnimSite420.children[0] = TouchSensor421;

Shape Shape422 = createNode("Shape");
Shape422.USE = "HAnimSiteShape";
HAnimSite420.children[1] = Shape422;

HAnimSegment401.children[6] = HAnimSite420;

HAnimJoint400.children = new MFNode();

HAnimJoint400.children[0] = HAnimSegment401;

HAnimJoint HAnimJoint423 = createNode("HAnimJoint");
HAnimJoint423.DEF = "hanim_vl4";
HAnimJoint423.name = "vl4";
HAnimJoint423.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimSegment HAnimSegment424 = createNode("HAnimSegment");
HAnimSegment424.DEF = "hanim_l4";
HAnimSegment424.name = "l4";
TouchSensor TouchSensor425 = createNode("TouchSensor");
TouchSensor425.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment424.children = new MFNode();

HAnimSegment424.children[0] = TouchSensor425;

Transform Transform426 = createNode("Transform");
Transform426.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Shape Shape427 = createNode("Shape");
Shape427.USE = "HAnimJointShape";
Transform426.child = new undefined();

Transform426.child[0] = Shape427;

HAnimSegment424.children[1] = Transform426;

Shape Shape428 = createNode("Shape");
LineSet LineSet429 = createNode("LineSet");
LineSet429.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA430 = createNode("ColorRGBA");
ColorRGBA430.USE = "HAnimSegmentLineColorRGBA";
LineSet429.color = ColorRGBA430;

Coordinate Coordinate431 = createNode("Coordinate");
Coordinate431.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet429.coord = Coordinate431;

Shape428.geometry = LineSet429;

HAnimSegment424.children[2] = Shape428;

HAnimJoint423.children = new MFNode();

HAnimJoint423.children[0] = HAnimSegment424;

HAnimJoint HAnimJoint432 = createNode("HAnimJoint");
HAnimJoint432.DEF = "hanim_vl3";
HAnimJoint432.name = "vl3";
HAnimJoint432.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment433 = createNode("HAnimSegment");
HAnimSegment433.DEF = "hanim_l3";
HAnimSegment433.name = "l3";
TouchSensor TouchSensor434 = createNode("TouchSensor");
TouchSensor434.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment433.children = new MFNode();

HAnimSegment433.children[0] = TouchSensor434;

Transform Transform435 = createNode("Transform");
Transform435.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Shape Shape436 = createNode("Shape");
Shape436.USE = "HAnimJointShape";
Transform435.child = new undefined();

Transform435.child[0] = Shape436;

HAnimSegment433.children[1] = Transform435;

Shape Shape437 = createNode("Shape");
LineSet LineSet438 = createNode("LineSet");
LineSet438.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA439 = createNode("ColorRGBA");
ColorRGBA439.USE = "HAnimSegmentLineColorRGBA";
LineSet438.color = ColorRGBA439;

Coordinate Coordinate440 = createNode("Coordinate");
Coordinate440.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet438.coord = Coordinate440;

Shape437.geometry = LineSet438;

HAnimSegment433.children[2] = Shape437;

HAnimJoint432.children = new MFNode();

HAnimJoint432.children[0] = HAnimSegment433;

HAnimJoint HAnimJoint441 = createNode("HAnimJoint");
HAnimJoint441.DEF = "hanim_vl2";
HAnimJoint441.name = "vl2";
HAnimJoint441.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimSegment HAnimSegment442 = createNode("HAnimSegment");
HAnimSegment442.DEF = "hanim_l2";
HAnimSegment442.name = "l2";
TouchSensor TouchSensor443 = createNode("TouchSensor");
TouchSensor443.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment442.children = new MFNode();

HAnimSegment442.children[0] = TouchSensor443;

Transform Transform444 = createNode("Transform");
Transform444.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Shape Shape445 = createNode("Shape");
Shape445.USE = "HAnimJointShape";
Transform444.child = new undefined();

Transform444.child[0] = Shape445;

HAnimSegment442.children[1] = Transform444;

Shape Shape446 = createNode("Shape");
LineSet LineSet447 = createNode("LineSet");
LineSet447.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA448 = createNode("ColorRGBA");
ColorRGBA448.USE = "HAnimSegmentLineColorRGBA";
LineSet447.color = ColorRGBA448;

Coordinate Coordinate449 = createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet447.coord = Coordinate449;

Shape446.geometry = LineSet447;

HAnimSegment442.children[2] = Shape446;

Shape Shape450 = createNode("Shape");
LineSet LineSet451 = createNode("LineSet");
LineSet451.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA452 = createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSiteLineColorRGBA";
LineSet451.color = ColorRGBA452;

Coordinate Coordinate453 = createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet451.coord = Coordinate453;

Shape450.geometry = LineSet451;

HAnimSegment442.children[3] = Shape450;

Shape Shape454 = createNode("Shape");
LineSet LineSet455 = createNode("LineSet");
LineSet455.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA456 = createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSiteLineColorRGBA";
LineSet455.color = ColorRGBA456;

Coordinate Coordinate457 = createNode("Coordinate");
Coordinate457.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet455.coord = Coordinate457;

Shape454.geometry = LineSet455;

HAnimSegment442.children[4] = Shape454;

Shape Shape458 = createNode("Shape");
LineSet LineSet459 = createNode("LineSet");
LineSet459.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA460 = createNode("ColorRGBA");
ColorRGBA460.USE = "HAnimSiteLineColorRGBA";
LineSet459.color = ColorRGBA460;

Coordinate Coordinate461 = createNode("Coordinate");
Coordinate461.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet459.coord = Coordinate461;

Shape458.geometry = LineSet459;

HAnimSegment442.children[5] = Shape458;

HAnimSite HAnimSite462 = createNode("HAnimSite");
HAnimSite462.DEF = "hanim_r_rib10_pt";
HAnimSite462.name = "r_rib10_pt";
HAnimSite462.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor463 = createNode("TouchSensor");
TouchSensor463.description = "HAnimSite r_rib10_pt";
HAnimSite462.children = new MFNode();

HAnimSite462.children[0] = TouchSensor463;

Shape Shape464 = createNode("Shape");
Shape464.USE = "HAnimSiteShape";
HAnimSite462.children[1] = Shape464;

HAnimSegment442.children[6] = HAnimSite462;

HAnimSite HAnimSite465 = createNode("HAnimSite");
HAnimSite465.DEF = "hanim_l_rib10_pt";
HAnimSite465.name = "l_rib10_pt";
HAnimSite465.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor466 = createNode("TouchSensor");
TouchSensor466.description = "HAnimSite l_rib10_pt";
HAnimSite465.children = new MFNode();

HAnimSite465.children[0] = TouchSensor466;

Shape Shape467 = createNode("Shape");
Shape467.USE = "HAnimSiteShape";
HAnimSite465.children[1] = Shape467;

HAnimSegment442.children[7] = HAnimSite465;

HAnimSite HAnimSite468 = createNode("HAnimSite");
HAnimSite468.DEF = "hanim_rib10_midspine_pt";
HAnimSite468.name = "rib10_midspine_pt";
HAnimSite468.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
TouchSensor TouchSensor469 = createNode("TouchSensor");
TouchSensor469.description = "HAnimSite rib10_midspine_pt";
HAnimSite468.children = new MFNode();

HAnimSite468.children[0] = TouchSensor469;

Shape Shape470 = createNode("Shape");
Shape470.USE = "HAnimSiteShape";
HAnimSite468.children[1] = Shape470;

HAnimSegment442.children[8] = HAnimSite468;

HAnimJoint441.children = new MFNode();

HAnimJoint441.children[0] = HAnimSegment442;

HAnimJoint HAnimJoint471 = createNode("HAnimJoint");
HAnimJoint471.DEF = "hanim_vl1";
HAnimJoint471.name = "vl1";
HAnimJoint471.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment472 = createNode("HAnimSegment");
HAnimSegment472.DEF = "hanim_l1";
HAnimSegment472.name = "l1";
TouchSensor TouchSensor473 = createNode("TouchSensor");
TouchSensor473.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment472.children = new MFNode();

HAnimSegment472.children[0] = TouchSensor473;

Transform Transform474 = createNode("Transform");
Transform474.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Shape Shape475 = createNode("Shape");
Shape475.USE = "HAnimJointShape";
Transform474.child = new undefined();

Transform474.child[0] = Shape475;

HAnimSegment472.children[1] = Transform474;

Shape Shape476 = createNode("Shape");
LineSet LineSet477 = createNode("LineSet");
LineSet477.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA478 = createNode("ColorRGBA");
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA";
LineSet477.color = ColorRGBA478;

Coordinate Coordinate479 = createNode("Coordinate");
Coordinate479.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet477.coord = Coordinate479;

Shape476.geometry = LineSet477;

HAnimSegment472.children[2] = Shape476;

HAnimJoint471.children = new MFNode();

HAnimJoint471.children[0] = HAnimSegment472;

HAnimJoint HAnimJoint480 = createNode("HAnimJoint");
HAnimJoint480.DEF = "hanim_vt12";
HAnimJoint480.name = "vt12";
HAnimJoint480.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimSegment HAnimSegment481 = createNode("HAnimSegment");
HAnimSegment481.DEF = "hanim_t12";
HAnimSegment481.name = "t12";
TouchSensor TouchSensor482 = createNode("TouchSensor");
TouchSensor482.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment481.children = new MFNode();

HAnimSegment481.children[0] = TouchSensor482;

Transform Transform483 = createNode("Transform");
Transform483.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Shape Shape484 = createNode("Shape");
Shape484.USE = "HAnimJointShape";
Transform483.child = new undefined();

Transform483.child[0] = Shape484;

HAnimSegment481.children[1] = Transform483;

Shape Shape485 = createNode("Shape");
LineSet LineSet486 = createNode("LineSet");
LineSet486.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA487 = createNode("ColorRGBA");
ColorRGBA487.USE = "HAnimSegmentLineColorRGBA";
LineSet486.color = ColorRGBA487;

Coordinate Coordinate488 = createNode("Coordinate");
Coordinate488.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet486.coord = Coordinate488;

Shape485.geometry = LineSet486;

HAnimSegment481.children[2] = Shape485;

HAnimJoint480.children = new MFNode();

HAnimJoint480.children[0] = HAnimSegment481;

HAnimJoint HAnimJoint489 = createNode("HAnimJoint");
HAnimJoint489.DEF = "hanim_vt11";
HAnimJoint489.name = "vt11";
HAnimJoint489.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.DEF = "hanim_t11";
HAnimSegment490.name = "t11";
TouchSensor TouchSensor491 = createNode("TouchSensor");
TouchSensor491.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment490.children = new MFNode();

HAnimSegment490.children[0] = TouchSensor491;

Transform Transform492 = createNode("Transform");
Transform492.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Shape Shape493 = createNode("Shape");
Shape493.USE = "HAnimJointShape";
Transform492.child = new undefined();

Transform492.child[0] = Shape493;

HAnimSegment490.children[1] = Transform492;

Shape Shape494 = createNode("Shape");
LineSet LineSet495 = createNode("LineSet");
LineSet495.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA496 = createNode("ColorRGBA");
ColorRGBA496.USE = "HAnimSegmentLineColorRGBA";
LineSet495.color = ColorRGBA496;

Coordinate Coordinate497 = createNode("Coordinate");
Coordinate497.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet495.coord = Coordinate497;

Shape494.geometry = LineSet495;

HAnimSegment490.children[2] = Shape494;

HAnimJoint489.children = new MFNode();

HAnimJoint489.children[0] = HAnimSegment490;

HAnimJoint HAnimJoint498 = createNode("HAnimJoint");
HAnimJoint498.DEF = "hanim_vt10";
HAnimJoint498.name = "vt10";
HAnimJoint498.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment499 = createNode("HAnimSegment");
HAnimSegment499.DEF = "hanim_t10";
HAnimSegment499.name = "t10";
TouchSensor TouchSensor500 = createNode("TouchSensor");
TouchSensor500.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment499.children = new MFNode();

HAnimSegment499.children[0] = TouchSensor500;

Transform Transform501 = createNode("Transform");
Transform501.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Shape Shape502 = createNode("Shape");
Shape502.USE = "HAnimJointShape";
Transform501.child = new undefined();

Transform501.child[0] = Shape502;

HAnimSegment499.children[1] = Transform501;

Shape Shape503 = createNode("Shape");
LineSet LineSet504 = createNode("LineSet");
LineSet504.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA505 = createNode("ColorRGBA");
ColorRGBA505.USE = "HAnimSegmentLineColorRGBA";
LineSet504.color = ColorRGBA505;

Coordinate Coordinate506 = createNode("Coordinate");
Coordinate506.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet504.coord = Coordinate506;

Shape503.geometry = LineSet504;

HAnimSegment499.children[2] = Shape503;

Shape Shape507 = createNode("Shape");
LineSet LineSet508 = createNode("LineSet");
LineSet508.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA509 = createNode("ColorRGBA");
ColorRGBA509.USE = "HAnimSiteLineColorRGBA";
LineSet508.color = ColorRGBA509;

Coordinate Coordinate510 = createNode("Coordinate");
Coordinate510.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet508.coord = Coordinate510;

Shape507.geometry = LineSet508;

HAnimSegment499.children[3] = Shape507;

HAnimSite HAnimSite511 = createNode("HAnimSite");
HAnimSite511.DEF = "hanim_substernale_pt";
HAnimSite511.name = "substernale_pt";
HAnimSite511.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor512 = createNode("TouchSensor");
TouchSensor512.description = "HAnimSite substernale_pt";
HAnimSite511.children = new MFNode();

HAnimSite511.children[0] = TouchSensor512;

Shape Shape513 = createNode("Shape");
Shape513.USE = "HAnimSiteShape";
HAnimSite511.children[1] = Shape513;

HAnimSegment499.children[4] = HAnimSite511;

HAnimJoint498.children = new MFNode();

HAnimJoint498.children[0] = HAnimSegment499;

HAnimJoint HAnimJoint514 = createNode("HAnimJoint");
HAnimJoint514.DEF = "hanim_vt9";
HAnimJoint514.name = "vt9";
HAnimJoint514.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimSegment HAnimSegment515 = createNode("HAnimSegment");
HAnimSegment515.DEF = "hanim_t9";
HAnimSegment515.name = "t9";
TouchSensor TouchSensor516 = createNode("TouchSensor");
TouchSensor516.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment515.children = new MFNode();

HAnimSegment515.children[0] = TouchSensor516;

Transform Transform517 = createNode("Transform");
Transform517.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Shape Shape518 = createNode("Shape");
Shape518.USE = "HAnimJointShape";
Transform517.child = new undefined();

Transform517.child[0] = Shape518;

HAnimSegment515.children[1] = Transform517;

Shape Shape519 = createNode("Shape");
LineSet LineSet520 = createNode("LineSet");
LineSet520.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA521 = createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA";
LineSet520.color = ColorRGBA521;

Coordinate Coordinate522 = createNode("Coordinate");
Coordinate522.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet520.coord = Coordinate522;

Shape519.geometry = LineSet520;

HAnimSegment515.children[2] = Shape519;

Shape Shape523 = createNode("Shape");
LineSet LineSet524 = createNode("LineSet");
LineSet524.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA525 = createNode("ColorRGBA");
ColorRGBA525.USE = "HAnimSiteLineColorRGBA";
LineSet524.color = ColorRGBA525;

Coordinate Coordinate526 = createNode("Coordinate");
Coordinate526.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet524.coord = Coordinate526;

Shape523.geometry = LineSet524;

HAnimSegment515.children[3] = Shape523;

Shape Shape527 = createNode("Shape");
LineSet LineSet528 = createNode("LineSet");
LineSet528.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA529 = createNode("ColorRGBA");
ColorRGBA529.USE = "HAnimSiteLineColorRGBA";
LineSet528.color = ColorRGBA529;

Coordinate Coordinate530 = createNode("Coordinate");
Coordinate530.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet528.coord = Coordinate530;

Shape527.geometry = LineSet528;

HAnimSegment515.children[4] = Shape527;

HAnimSite HAnimSite531 = createNode("HAnimSite");
HAnimSite531.DEF = "hanim_r_thelion_pt";
HAnimSite531.name = "r_thelion_pt";
HAnimSite531.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor532 = createNode("TouchSensor");
TouchSensor532.description = "HAnimSite r_thelion_pt";
HAnimSite531.children = new MFNode();

HAnimSite531.children[0] = TouchSensor532;

Shape Shape533 = createNode("Shape");
Shape533.USE = "HAnimSiteShape";
HAnimSite531.children[1] = Shape533;

HAnimSegment515.children[5] = HAnimSite531;

HAnimSite HAnimSite534 = createNode("HAnimSite");
HAnimSite534.DEF = "hanim_l_thelion_pt";
HAnimSite534.name = "l_thelion_pt";
HAnimSite534.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor535 = createNode("TouchSensor");
TouchSensor535.description = "HAnimSite l_thelion_pt";
HAnimSite534.children = new MFNode();

HAnimSite534.children[0] = TouchSensor535;

Shape Shape536 = createNode("Shape");
Shape536.USE = "HAnimSiteShape";
HAnimSite534.children[1] = Shape536;

HAnimSegment515.children[6] = HAnimSite534;

HAnimJoint514.children = new MFNode();

HAnimJoint514.children[0] = HAnimSegment515;

HAnimJoint HAnimJoint537 = createNode("HAnimJoint");
HAnimJoint537.DEF = "hanim_vt8";
HAnimJoint537.name = "vt8";
HAnimJoint537.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimSegment HAnimSegment538 = createNode("HAnimSegment");
HAnimSegment538.DEF = "hanim_t8";
HAnimSegment538.name = "t8";
TouchSensor TouchSensor539 = createNode("TouchSensor");
TouchSensor539.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment538.children = new MFNode();

HAnimSegment538.children[0] = TouchSensor539;

Transform Transform540 = createNode("Transform");
Transform540.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Shape Shape541 = createNode("Shape");
Shape541.USE = "HAnimJointShape";
Transform540.child = new undefined();

Transform540.child[0] = Shape541;

HAnimSegment538.children[1] = Transform540;

Shape Shape542 = createNode("Shape");
LineSet LineSet543 = createNode("LineSet");
LineSet543.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA544 = createNode("ColorRGBA");
ColorRGBA544.USE = "HAnimSegmentLineColorRGBA";
LineSet543.color = ColorRGBA544;

Coordinate Coordinate545 = createNode("Coordinate");
Coordinate545.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet543.coord = Coordinate545;

Shape542.geometry = LineSet543;

HAnimSegment538.children[2] = Shape542;

HAnimJoint537.children = new MFNode();

HAnimJoint537.children[0] = HAnimSegment538;

HAnimJoint HAnimJoint546 = createNode("HAnimJoint");
HAnimJoint546.DEF = "hanim_vt7";
HAnimJoint546.name = "vt7";
HAnimJoint546.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimSegment HAnimSegment547 = createNode("HAnimSegment");
HAnimSegment547.DEF = "hanim_t7";
HAnimSegment547.name = "t7";
TouchSensor TouchSensor548 = createNode("TouchSensor");
TouchSensor548.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment547.children = new MFNode();

HAnimSegment547.children[0] = TouchSensor548;

Transform Transform549 = createNode("Transform");
Transform549.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Shape Shape550 = createNode("Shape");
Shape550.USE = "HAnimJointShape";
Transform549.child = new undefined();

Transform549.child[0] = Shape550;

HAnimSegment547.children[1] = Transform549;

Shape Shape551 = createNode("Shape");
LineSet LineSet552 = createNode("LineSet");
LineSet552.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA553 = createNode("ColorRGBA");
ColorRGBA553.USE = "HAnimSegmentLineColorRGBA";
LineSet552.color = ColorRGBA553;

Coordinate Coordinate554 = createNode("Coordinate");
Coordinate554.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet552.coord = Coordinate554;

Shape551.geometry = LineSet552;

HAnimSegment547.children[2] = Shape551;

HAnimJoint546.children = new MFNode();

HAnimJoint546.children[0] = HAnimSegment547;

HAnimJoint HAnimJoint555 = createNode("HAnimJoint");
HAnimJoint555.DEF = "hanim_vt6";
HAnimJoint555.name = "vt6";
HAnimJoint555.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment556 = createNode("HAnimSegment");
HAnimSegment556.DEF = "hanim_t6";
HAnimSegment556.name = "t6";
TouchSensor TouchSensor557 = createNode("TouchSensor");
TouchSensor557.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment556.children = new MFNode();

HAnimSegment556.children[0] = TouchSensor557;

Transform Transform558 = createNode("Transform");
Transform558.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Shape Shape559 = createNode("Shape");
Shape559.USE = "HAnimJointShape";
Transform558.child = new undefined();

Transform558.child[0] = Shape559;

HAnimSegment556.children[1] = Transform558;

Shape Shape560 = createNode("Shape");
LineSet LineSet561 = createNode("LineSet");
LineSet561.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA562 = createNode("ColorRGBA");
ColorRGBA562.USE = "HAnimSegmentLineColorRGBA";
LineSet561.color = ColorRGBA562;

Coordinate Coordinate563 = createNode("Coordinate");
Coordinate563.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet561.coord = Coordinate563;

Shape560.geometry = LineSet561;

HAnimSegment556.children[2] = Shape560;

HAnimJoint555.children = new MFNode();

HAnimJoint555.children[0] = HAnimSegment556;

HAnimJoint HAnimJoint564 = createNode("HAnimJoint");
HAnimJoint564.DEF = "hanim_vt5";
HAnimJoint564.name = "vt5";
HAnimJoint564.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimSegment HAnimSegment565 = createNode("HAnimSegment");
HAnimSegment565.DEF = "hanim_t5";
HAnimSegment565.name = "t5";
TouchSensor TouchSensor566 = createNode("TouchSensor");
TouchSensor566.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment565.children = new MFNode();

HAnimSegment565.children[0] = TouchSensor566;

Transform Transform567 = createNode("Transform");
Transform567.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Shape Shape568 = createNode("Shape");
Shape568.USE = "HAnimJointShape";
Transform567.child = new undefined();

Transform567.child[0] = Shape568;

HAnimSegment565.children[1] = Transform567;

Shape Shape569 = createNode("Shape");
LineSet LineSet570 = createNode("LineSet");
LineSet570.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA571 = createNode("ColorRGBA");
ColorRGBA571.USE = "HAnimSegmentLineColorRGBA";
LineSet570.color = ColorRGBA571;

Coordinate Coordinate572 = createNode("Coordinate");
Coordinate572.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet570.coord = Coordinate572;

Shape569.geometry = LineSet570;

HAnimSegment565.children[2] = Shape569;

HAnimJoint564.children = new MFNode();

HAnimJoint564.children[0] = HAnimSegment565;

HAnimJoint HAnimJoint573 = createNode("HAnimJoint");
HAnimJoint573.DEF = "hanim_vt4";
HAnimJoint573.name = "vt4";
HAnimJoint573.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimSegment HAnimSegment574 = createNode("HAnimSegment");
HAnimSegment574.DEF = "hanim_t4";
HAnimSegment574.name = "t4";
TouchSensor TouchSensor575 = createNode("TouchSensor");
TouchSensor575.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment574.children = new MFNode();

HAnimSegment574.children[0] = TouchSensor575;

Transform Transform576 = createNode("Transform");
Transform576.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Shape Shape577 = createNode("Shape");
Shape577.USE = "HAnimJointShape";
Transform576.child = new undefined();

Transform576.child[0] = Shape577;

HAnimSegment574.children[1] = Transform576;

Shape Shape578 = createNode("Shape");
LineSet LineSet579 = createNode("LineSet");
LineSet579.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA580 = createNode("ColorRGBA");
ColorRGBA580.USE = "HAnimSegmentLineColorRGBA";
LineSet579.color = ColorRGBA580;

Coordinate Coordinate581 = createNode("Coordinate");
Coordinate581.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet579.coord = Coordinate581;

Shape578.geometry = LineSet579;

HAnimSegment574.children[2] = Shape578;

HAnimJoint573.children = new MFNode();

HAnimJoint573.children[0] = HAnimSegment574;

HAnimJoint HAnimJoint582 = createNode("HAnimJoint");
HAnimJoint582.DEF = "hanim_vt3";
HAnimJoint582.name = "vt3";
HAnimJoint582.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimSegment HAnimSegment583 = createNode("HAnimSegment");
HAnimSegment583.DEF = "hanim_t3";
HAnimSegment583.name = "t3";
TouchSensor TouchSensor584 = createNode("TouchSensor");
TouchSensor584.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment583.children = new MFNode();

HAnimSegment583.children[0] = TouchSensor584;

Transform Transform585 = createNode("Transform");
Transform585.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Shape Shape586 = createNode("Shape");
Shape586.USE = "HAnimJointShape";
Transform585.child = new undefined();

Transform585.child[0] = Shape586;

HAnimSegment583.children[1] = Transform585;

Shape Shape587 = createNode("Shape");
LineSet LineSet588 = createNode("LineSet");
LineSet588.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA589 = createNode("ColorRGBA");
ColorRGBA589.USE = "HAnimSegmentLineColorRGBA";
LineSet588.color = ColorRGBA589;

Coordinate Coordinate590 = createNode("Coordinate");
Coordinate590.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet588.coord = Coordinate590;

Shape587.geometry = LineSet588;

HAnimSegment583.children[2] = Shape587;

HAnimJoint582.children = new MFNode();

HAnimJoint582.children[0] = HAnimSegment583;

HAnimJoint HAnimJoint591 = createNode("HAnimJoint");
HAnimJoint591.DEF = "hanim_vt2";
HAnimJoint591.name = "vt2";
HAnimJoint591.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimSegment HAnimSegment592 = createNode("HAnimSegment");
HAnimSegment592.DEF = "hanim_t2";
HAnimSegment592.name = "t2";
TouchSensor TouchSensor593 = createNode("TouchSensor");
TouchSensor593.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment592.children = new MFNode();

HAnimSegment592.children[0] = TouchSensor593;

Transform Transform594 = createNode("Transform");
Transform594.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Shape Shape595 = createNode("Shape");
Shape595.USE = "HAnimJointShape";
Transform594.child = new undefined();

Transform594.child[0] = Shape595;

HAnimSegment592.children[1] = Transform594;

Shape Shape596 = createNode("Shape");
LineSet LineSet597 = createNode("LineSet");
LineSet597.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA598 = createNode("ColorRGBA");
ColorRGBA598.USE = "HAnimSegmentLineColorRGBA";
LineSet597.color = ColorRGBA598;

Coordinate Coordinate599 = createNode("Coordinate");
Coordinate599.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet597.coord = Coordinate599;

Shape596.geometry = LineSet597;

HAnimSegment592.children[2] = Shape596;

HAnimJoint591.children = new MFNode();

HAnimJoint591.children[0] = HAnimSegment592;

HAnimJoint HAnimJoint600 = createNode("HAnimJoint");
HAnimJoint600.DEF = "hanim_vt1";
HAnimJoint600.name = "vt1";
HAnimJoint600.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment601 = createNode("HAnimSegment");
HAnimSegment601.DEF = "hanim_t1";
HAnimSegment601.name = "t1";
TouchSensor TouchSensor602 = createNode("TouchSensor");
TouchSensor602.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment601.children = new MFNode();

HAnimSegment601.children[0] = TouchSensor602;

Transform Transform603 = createNode("Transform");
Transform603.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Shape Shape604 = createNode("Shape");
Shape604.USE = "HAnimJointShape";
Transform603.child = new undefined();

Transform603.child[0] = Shape604;

HAnimSegment601.children[1] = Transform603;

Shape Shape605 = createNode("Shape");
LineSet LineSet606 = createNode("LineSet");
LineSet606.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA607 = createNode("ColorRGBA");
ColorRGBA607.USE = "HAnimSegmentLineColorRGBA";
LineSet606.color = ColorRGBA607;

Coordinate Coordinate608 = createNode("Coordinate");
Coordinate608.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet606.coord = Coordinate608;

Shape605.geometry = LineSet606;

HAnimSegment601.children[2] = Shape605;

Shape Shape609 = createNode("Shape");
LineSet LineSet610 = createNode("LineSet");
LineSet610.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA611 = createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
LineSet610.color = ColorRGBA611;

Coordinate Coordinate612 = createNode("Coordinate");
Coordinate612.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet610.coord = Coordinate612;

Shape609.geometry = LineSet610;

HAnimSegment601.children[3] = Shape609;

Shape Shape613 = createNode("Shape");
LineSet LineSet614 = createNode("LineSet");
LineSet614.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA615 = createNode("ColorRGBA");
ColorRGBA615.USE = "HAnimSegmentLineColorRGBA";
LineSet614.color = ColorRGBA615;

Coordinate Coordinate616 = createNode("Coordinate");
Coordinate616.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet614.coord = Coordinate616;

Shape613.geometry = LineSet614;

HAnimSegment601.children[4] = Shape613;

Shape Shape617 = createNode("Shape");
LineSet LineSet618 = createNode("LineSet");
LineSet618.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA619 = createNode("ColorRGBA");
ColorRGBA619.USE = "HAnimSiteLineColorRGBA";
LineSet618.color = ColorRGBA619;

Coordinate Coordinate620 = createNode("Coordinate");
Coordinate620.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet618.coord = Coordinate620;

Shape617.geometry = LineSet618;

HAnimSegment601.children[5] = Shape617;

Shape Shape621 = createNode("Shape");
LineSet LineSet622 = createNode("LineSet");
LineSet622.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA623 = createNode("ColorRGBA");
ColorRGBA623.USE = "HAnimSiteLineColorRGBA";
LineSet622.color = ColorRGBA623;

Coordinate Coordinate624 = createNode("Coordinate");
Coordinate624.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet622.coord = Coordinate624;

Shape621.geometry = LineSet622;

HAnimSegment601.children[6] = Shape621;

HAnimSite HAnimSite625 = createNode("HAnimSite");
HAnimSite625.DEF = "hanim_suprasternale_pt";
HAnimSite625.name = "suprasternale_pt";
HAnimSite625.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor626 = createNode("TouchSensor");
TouchSensor626.description = "HAnimSite suprasternale_pt";
HAnimSite625.children = new MFNode();

HAnimSite625.children[0] = TouchSensor626;

Shape Shape627 = createNode("Shape");
Shape627.USE = "HAnimSiteShape";
HAnimSite625.children[1] = Shape627;

HAnimSegment601.children[7] = HAnimSite625;

HAnimSite HAnimSite628 = createNode("HAnimSite");
HAnimSite628.DEF = "hanim_cervicale_pt";
HAnimSite628.name = "cervicale_pt";
HAnimSite628.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor629 = createNode("TouchSensor");
TouchSensor629.description = "HAnimSite cervicale_pt";
HAnimSite628.children = new MFNode();

HAnimSite628.children[0] = TouchSensor629;

Shape Shape630 = createNode("Shape");
Shape630.USE = "HAnimSiteShape";
HAnimSite628.children[1] = Shape630;

HAnimSegment601.children[8] = HAnimSite628;

HAnimJoint600.children = new MFNode();

HAnimJoint600.children[0] = HAnimSegment601;

HAnimJoint HAnimJoint631 = createNode("HAnimJoint");
HAnimJoint631.DEF = "hanim_vc7";
HAnimJoint631.name = "vc7";
HAnimJoint631.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimSegment HAnimSegment632 = createNode("HAnimSegment");
HAnimSegment632.DEF = "hanim_c7";
HAnimSegment632.name = "c7";
TouchSensor TouchSensor633 = createNode("TouchSensor");
TouchSensor633.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment632.children = new MFNode();

HAnimSegment632.children[0] = TouchSensor633;

Transform Transform634 = createNode("Transform");
Transform634.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Shape Shape635 = createNode("Shape");
Shape635.USE = "HAnimJointShape";
Transform634.child = new undefined();

Transform634.child[0] = Shape635;

HAnimSegment632.children[1] = Transform634;

Shape Shape636 = createNode("Shape");
LineSet LineSet637 = createNode("LineSet");
LineSet637.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA638 = createNode("ColorRGBA");
ColorRGBA638.USE = "HAnimSegmentLineColorRGBA";
LineSet637.color = ColorRGBA638;

Coordinate Coordinate639 = createNode("Coordinate");
Coordinate639.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet637.coord = Coordinate639;

Shape636.geometry = LineSet637;

HAnimSegment632.children[2] = Shape636;

Shape Shape640 = createNode("Shape");
LineSet LineSet641 = createNode("LineSet");
LineSet641.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA642 = createNode("ColorRGBA");
ColorRGBA642.USE = "HAnimSiteLineColorRGBA";
LineSet641.color = ColorRGBA642;

Coordinate Coordinate643 = createNode("Coordinate");
Coordinate643.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet641.coord = Coordinate643;

Shape640.geometry = LineSet641;

HAnimSegment632.children[3] = Shape640;

Shape Shape644 = createNode("Shape");
LineSet LineSet645 = createNode("LineSet");
LineSet645.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA646 = createNode("ColorRGBA");
ColorRGBA646.USE = "HAnimSiteLineColorRGBA";
LineSet645.color = ColorRGBA646;

Coordinate Coordinate647 = createNode("Coordinate");
Coordinate647.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet645.coord = Coordinate647;

Shape644.geometry = LineSet645;

HAnimSegment632.children[4] = Shape644;

HAnimSite HAnimSite648 = createNode("HAnimSite");
HAnimSite648.DEF = "hanim_r_neck_base_pt";
HAnimSite648.name = "r_neck_base_pt";
HAnimSite648.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor649 = createNode("TouchSensor");
TouchSensor649.description = "HAnimSite r_neck_base_pt";
HAnimSite648.children = new MFNode();

HAnimSite648.children[0] = TouchSensor649;

Shape Shape650 = createNode("Shape");
Shape650.USE = "HAnimSiteShape";
HAnimSite648.children[1] = Shape650;

HAnimSegment632.children[5] = HAnimSite648;

HAnimSite HAnimSite651 = createNode("HAnimSite");
HAnimSite651.DEF = "hanim_l_neck_base_pt";
HAnimSite651.name = "l_neck_base_pt";
HAnimSite651.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor652 = createNode("TouchSensor");
TouchSensor652.description = "HAnimSite l_neck_base_pt";
HAnimSite651.children = new MFNode();

HAnimSite651.children[0] = TouchSensor652;

Shape Shape653 = createNode("Shape");
Shape653.USE = "HAnimSiteShape";
HAnimSite651.children[1] = Shape653;

HAnimSegment632.children[6] = HAnimSite651;

HAnimJoint631.children = new MFNode();

HAnimJoint631.children[0] = HAnimSegment632;

HAnimJoint HAnimJoint654 = createNode("HAnimJoint");
HAnimJoint654.DEF = "hanim_vc6";
HAnimJoint654.name = "vc6";
HAnimJoint654.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimSegment HAnimSegment655 = createNode("HAnimSegment");
HAnimSegment655.DEF = "hanim_c6";
HAnimSegment655.name = "c6";
TouchSensor TouchSensor656 = createNode("TouchSensor");
TouchSensor656.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment655.children = new MFNode();

HAnimSegment655.children[0] = TouchSensor656;

Transform Transform657 = createNode("Transform");
Transform657.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Shape Shape658 = createNode("Shape");
Shape658.USE = "HAnimJointShape";
Transform657.child = new undefined();

Transform657.child[0] = Shape658;

HAnimSegment655.children[1] = Transform657;

Shape Shape659 = createNode("Shape");
LineSet LineSet660 = createNode("LineSet");
LineSet660.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA661 = createNode("ColorRGBA");
ColorRGBA661.USE = "HAnimSegmentLineColorRGBA";
LineSet660.color = ColorRGBA661;

Coordinate Coordinate662 = createNode("Coordinate");
Coordinate662.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet660.coord = Coordinate662;

Shape659.geometry = LineSet660;

HAnimSegment655.children[2] = Shape659;

HAnimJoint654.children = new MFNode();

HAnimJoint654.children[0] = HAnimSegment655;

HAnimJoint HAnimJoint663 = createNode("HAnimJoint");
HAnimJoint663.DEF = "hanim_vc5";
HAnimJoint663.name = "vc5";
HAnimJoint663.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimSegment HAnimSegment664 = createNode("HAnimSegment");
HAnimSegment664.DEF = "hanim_c5";
HAnimSegment664.name = "c5";
TouchSensor TouchSensor665 = createNode("TouchSensor");
TouchSensor665.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment664.children = new MFNode();

HAnimSegment664.children[0] = TouchSensor665;

Transform Transform666 = createNode("Transform");
Transform666.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Shape Shape667 = createNode("Shape");
Shape667.USE = "HAnimJointShape";
Transform666.child = new undefined();

Transform666.child[0] = Shape667;

HAnimSegment664.children[1] = Transform666;

Shape Shape668 = createNode("Shape");
LineSet LineSet669 = createNode("LineSet");
LineSet669.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA670 = createNode("ColorRGBA");
ColorRGBA670.USE = "HAnimSegmentLineColorRGBA";
LineSet669.color = ColorRGBA670;

Coordinate Coordinate671 = createNode("Coordinate");
Coordinate671.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet669.coord = Coordinate671;

Shape668.geometry = LineSet669;

HAnimSegment664.children[2] = Shape668;

HAnimJoint663.children = new MFNode();

HAnimJoint663.children[0] = HAnimSegment664;

HAnimJoint HAnimJoint672 = createNode("HAnimJoint");
HAnimJoint672.DEF = "hanim_vc4";
HAnimJoint672.name = "vc4";
HAnimJoint672.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment673 = createNode("HAnimSegment");
HAnimSegment673.DEF = "hanim_c4";
HAnimSegment673.name = "c4";
TouchSensor TouchSensor674 = createNode("TouchSensor");
TouchSensor674.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment673.children = new MFNode();

HAnimSegment673.children[0] = TouchSensor674;

Transform Transform675 = createNode("Transform");
Transform675.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Shape Shape676 = createNode("Shape");
Shape676.USE = "HAnimJointShape";
Transform675.child = new undefined();

Transform675.child[0] = Shape676;

HAnimSegment673.children[1] = Transform675;

Shape Shape677 = createNode("Shape");
LineSet LineSet678 = createNode("LineSet");
LineSet678.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA679 = createNode("ColorRGBA");
ColorRGBA679.USE = "HAnimSegmentLineColorRGBA";
LineSet678.color = ColorRGBA679;

Coordinate Coordinate680 = createNode("Coordinate");
Coordinate680.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet678.coord = Coordinate680;

Shape677.geometry = LineSet678;

HAnimSegment673.children[2] = Shape677;

HAnimJoint672.children = new MFNode();

HAnimJoint672.children[0] = HAnimSegment673;

HAnimJoint HAnimJoint681 = createNode("HAnimJoint");
HAnimJoint681.DEF = "hanim_vc3";
HAnimJoint681.name = "vc3";
HAnimJoint681.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimSegment HAnimSegment682 = createNode("HAnimSegment");
HAnimSegment682.DEF = "hanim_c3";
HAnimSegment682.name = "c3";
TouchSensor TouchSensor683 = createNode("TouchSensor");
TouchSensor683.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment682.children = new MFNode();

HAnimSegment682.children[0] = TouchSensor683;

Transform Transform684 = createNode("Transform");
Transform684.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Shape Shape685 = createNode("Shape");
Shape685.USE = "HAnimJointShape";
Transform684.child = new undefined();

Transform684.child[0] = Shape685;

HAnimSegment682.children[1] = Transform684;

Shape Shape686 = createNode("Shape");
LineSet LineSet687 = createNode("LineSet");
LineSet687.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA688 = createNode("ColorRGBA");
ColorRGBA688.USE = "HAnimSegmentLineColorRGBA";
LineSet687.color = ColorRGBA688;

Coordinate Coordinate689 = createNode("Coordinate");
Coordinate689.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet687.coord = Coordinate689;

Shape686.geometry = LineSet687;

HAnimSegment682.children[2] = Shape686;

HAnimJoint681.children = new MFNode();

HAnimJoint681.children[0] = HAnimSegment682;

HAnimJoint HAnimJoint690 = createNode("HAnimJoint");
HAnimJoint690.DEF = "hanim_vc2";
HAnimJoint690.name = "vc2";
HAnimJoint690.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment691 = createNode("HAnimSegment");
HAnimSegment691.DEF = "hanim_c2";
HAnimSegment691.name = "c2";
TouchSensor TouchSensor692 = createNode("TouchSensor");
TouchSensor692.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment691.children = new MFNode();

HAnimSegment691.children[0] = TouchSensor692;

Transform Transform693 = createNode("Transform");
Transform693.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Shape Shape694 = createNode("Shape");
Shape694.USE = "HAnimJointShape";
Transform693.child = new undefined();

Transform693.child[0] = Shape694;

HAnimSegment691.children[1] = Transform693;

Shape Shape695 = createNode("Shape");
LineSet LineSet696 = createNode("LineSet");
LineSet696.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA697 = createNode("ColorRGBA");
ColorRGBA697.USE = "HAnimSegmentLineColorRGBA";
LineSet696.color = ColorRGBA697;

Coordinate Coordinate698 = createNode("Coordinate");
Coordinate698.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet696.coord = Coordinate698;

Shape695.geometry = LineSet696;

HAnimSegment691.children[2] = Shape695;

HAnimJoint690.children = new MFNode();

HAnimJoint690.children[0] = HAnimSegment691;

HAnimJoint HAnimJoint699 = createNode("HAnimJoint");
HAnimJoint699.DEF = "hanim_vc1";
HAnimJoint699.name = "vc1";
HAnimJoint699.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimSegment HAnimSegment700 = createNode("HAnimSegment");
HAnimSegment700.DEF = "hanim_c1";
HAnimSegment700.name = "c1";
TouchSensor TouchSensor701 = createNode("TouchSensor");
TouchSensor701.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment700.children = new MFNode();

HAnimSegment700.children[0] = TouchSensor701;

Transform Transform702 = createNode("Transform");
Transform702.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Shape Shape703 = createNode("Shape");
Shape703.USE = "HAnimJointShape";
Transform702.child = new undefined();

Transform702.child[0] = Shape703;

HAnimSegment700.children[1] = Transform702;

Shape Shape704 = createNode("Shape");
LineSet LineSet705 = createNode("LineSet");
LineSet705.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA706 = createNode("ColorRGBA");
ColorRGBA706.USE = "HAnimSegmentLineColorRGBA";
LineSet705.color = ColorRGBA706;

Coordinate Coordinate707 = createNode("Coordinate");
Coordinate707.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet705.coord = Coordinate707;

Shape704.geometry = LineSet705;

HAnimSegment700.children[2] = Shape704;

HAnimJoint699.children = new MFNode();

HAnimJoint699.children[0] = HAnimSegment700;

HAnimJoint HAnimJoint708 = createNode("HAnimJoint");
HAnimJoint708.DEF = "hanim_skullbase";
HAnimJoint708.name = "skullbase";
HAnimJoint708.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment709 = createNode("HAnimSegment");
HAnimSegment709.DEF = "hanim_skull";
HAnimSegment709.name = "skull";
TouchSensor TouchSensor710 = createNode("TouchSensor");
TouchSensor710.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment709.children = new MFNode();

HAnimSegment709.children[0] = TouchSensor710;

Transform Transform711 = createNode("Transform");
Transform711.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape712 = createNode("Shape");
Shape712.USE = "HAnimJointShape";
Transform711.child = new undefined();

Transform711.child[0] = Shape712;

HAnimSegment709.children[1] = Transform711;

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

HAnimSegment709.children[2] = Shape713;

Shape Shape717 = createNode("Shape");
LineSet LineSet718 = createNode("LineSet");
LineSet718.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA719 = createNode("ColorRGBA");
ColorRGBA719.USE = "HAnimSegmentLineColorRGBA";
LineSet718.color = ColorRGBA719;

Coordinate Coordinate720 = createNode("Coordinate");
Coordinate720.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet718.coord = Coordinate720;

Shape717.geometry = LineSet718;

HAnimSegment709.children[3] = Shape717;

Shape Shape721 = createNode("Shape");
LineSet LineSet722 = createNode("LineSet");
LineSet722.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA723 = createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA723;

Coordinate Coordinate724 = createNode("Coordinate");
Coordinate724.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet722.coord = Coordinate724;

Shape721.geometry = LineSet722;

HAnimSegment709.children[4] = Shape721;

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

HAnimSegment709.children[5] = Shape725;

Shape Shape729 = createNode("Shape");
LineSet LineSet730 = createNode("LineSet");
LineSet730.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA731 = createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
LineSet730.color = ColorRGBA731;

Coordinate Coordinate732 = createNode("Coordinate");
Coordinate732.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet730.coord = Coordinate732;

Shape729.geometry = LineSet730;

HAnimSegment709.children[6] = Shape729;

Shape Shape733 = createNode("Shape");
LineSet LineSet734 = createNode("LineSet");
LineSet734.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA735 = createNode("ColorRGBA");
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA";
LineSet734.color = ColorRGBA735;

Coordinate Coordinate736 = createNode("Coordinate");
Coordinate736.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet734.coord = Coordinate736;

Shape733.geometry = LineSet734;

HAnimSegment709.children[7] = Shape733;

Shape Shape737 = createNode("Shape");
LineSet LineSet738 = createNode("LineSet");
LineSet738.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA739 = createNode("ColorRGBA");
ColorRGBA739.USE = "HAnimSegmentLineColorRGBA";
LineSet738.color = ColorRGBA739;

Coordinate Coordinate740 = createNode("Coordinate");
Coordinate740.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet738.coord = Coordinate740;

Shape737.geometry = LineSet738;

HAnimSegment709.children[8] = Shape737;

Shape Shape741 = createNode("Shape");
LineSet LineSet742 = createNode("LineSet");
LineSet742.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA743 = createNode("ColorRGBA");
ColorRGBA743.USE = "HAnimSiteLineColorRGBA";
LineSet742.color = ColorRGBA743;

Coordinate Coordinate744 = createNode("Coordinate");
Coordinate744.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet742.coord = Coordinate744;

Shape741.geometry = LineSet742;

HAnimSegment709.children[9] = Shape741;

Shape Shape745 = createNode("Shape");
LineSet LineSet746 = createNode("LineSet");
LineSet746.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA747 = createNode("ColorRGBA");
ColorRGBA747.USE = "HAnimSiteLineColorRGBA";
LineSet746.color = ColorRGBA747;

Coordinate Coordinate748 = createNode("Coordinate");
Coordinate748.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet746.coord = Coordinate748;

Shape745.geometry = LineSet746;

HAnimSegment709.children[10] = Shape745;

Shape Shape749 = createNode("Shape");
LineSet LineSet750 = createNode("LineSet");
LineSet750.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA751 = createNode("ColorRGBA");
ColorRGBA751.USE = "HAnimSiteLineColorRGBA";
LineSet750.color = ColorRGBA751;

Coordinate Coordinate752 = createNode("Coordinate");
Coordinate752.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet750.coord = Coordinate752;

Shape749.geometry = LineSet750;

HAnimSegment709.children[11] = Shape749;

Shape Shape753 = createNode("Shape");
LineSet LineSet754 = createNode("LineSet");
LineSet754.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA755 = createNode("ColorRGBA");
ColorRGBA755.USE = "HAnimSiteLineColorRGBA";
LineSet754.color = ColorRGBA755;

Coordinate Coordinate756 = createNode("Coordinate");
Coordinate756.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet754.coord = Coordinate756;

Shape753.geometry = LineSet754;

HAnimSegment709.children[12] = Shape753;

Shape Shape757 = createNode("Shape");
LineSet LineSet758 = createNode("LineSet");
LineSet758.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA759 = createNode("ColorRGBA");
ColorRGBA759.USE = "HAnimSiteLineColorRGBA";
LineSet758.color = ColorRGBA759;

Coordinate Coordinate760 = createNode("Coordinate");
Coordinate760.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet758.coord = Coordinate760;

Shape757.geometry = LineSet758;

HAnimSegment709.children[13] = Shape757;

Shape Shape761 = createNode("Shape");
LineSet LineSet762 = createNode("LineSet");
LineSet762.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA763 = createNode("ColorRGBA");
ColorRGBA763.USE = "HAnimSiteLineColorRGBA";
LineSet762.color = ColorRGBA763;

Coordinate Coordinate764 = createNode("Coordinate");
Coordinate764.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet762.coord = Coordinate764;

Shape761.geometry = LineSet762;

HAnimSegment709.children[14] = Shape761;

Shape Shape765 = createNode("Shape");
LineSet LineSet766 = createNode("LineSet");
LineSet766.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA767 = createNode("ColorRGBA");
ColorRGBA767.USE = "HAnimSiteLineColorRGBA";
LineSet766.color = ColorRGBA767;

Coordinate Coordinate768 = createNode("Coordinate");
Coordinate768.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet766.coord = Coordinate768;

Shape765.geometry = LineSet766;

HAnimSegment709.children[15] = Shape765;

Shape Shape769 = createNode("Shape");
LineSet LineSet770 = createNode("LineSet");
LineSet770.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA771 = createNode("ColorRGBA");
ColorRGBA771.USE = "HAnimSiteLineColorRGBA";
LineSet770.color = ColorRGBA771;

Coordinate Coordinate772 = createNode("Coordinate");
Coordinate772.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet770.coord = Coordinate772;

Shape769.geometry = LineSet770;

HAnimSegment709.children[16] = Shape769;

Shape Shape773 = createNode("Shape");
LineSet LineSet774 = createNode("LineSet");
LineSet774.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA775 = createNode("ColorRGBA");
ColorRGBA775.USE = "HAnimSiteLineColorRGBA";
LineSet774.color = ColorRGBA775;

Coordinate Coordinate776 = createNode("Coordinate");
Coordinate776.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet774.coord = Coordinate776;

Shape773.geometry = LineSet774;

HAnimSegment709.children[17] = Shape773;

Shape Shape777 = createNode("Shape");
LineSet LineSet778 = createNode("LineSet");
LineSet778.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA779 = createNode("ColorRGBA");
ColorRGBA779.USE = "HAnimSiteLineColorRGBA";
LineSet778.color = ColorRGBA779;

Coordinate Coordinate780 = createNode("Coordinate");
Coordinate780.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet778.coord = Coordinate780;

Shape777.geometry = LineSet778;

HAnimSegment709.children[18] = Shape777;

HAnimSite HAnimSite781 = createNode("HAnimSite");
HAnimSite781.DEF = "hanim_skull_vertex_pt";
HAnimSite781.name = "skull_vertex_pt";
HAnimSite781.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor782 = createNode("TouchSensor");
TouchSensor782.description = "HAnimSite skull_tip";
HAnimSite781.children = new MFNode();

HAnimSite781.children[0] = TouchSensor782;

Shape Shape783 = createNode("Shape");
Shape783.USE = "HAnimSiteShape";
HAnimSite781.children[1] = Shape783;

HAnimSegment709.children[19] = HAnimSite781;

HAnimSite HAnimSite784 = createNode("HAnimSite");
HAnimSite784.DEF = "hanim_sellion_pt";
HAnimSite784.name = "sellion_pt";
HAnimSite784.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor785 = createNode("TouchSensor");
TouchSensor785.description = "HAnimSite sellion_pt";
HAnimSite784.children = new MFNode();

HAnimSite784.children[0] = TouchSensor785;

Shape Shape786 = createNode("Shape");
Shape786.USE = "HAnimSiteShape";
HAnimSite784.children[1] = Shape786;

HAnimSegment709.children[20] = HAnimSite784;

HAnimSite HAnimSite787 = createNode("HAnimSite");
HAnimSite787.DEF = "hanim_r_infraorbitale_pt";
HAnimSite787.name = "r_infraorbitale_pt";
HAnimSite787.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor788 = createNode("TouchSensor");
TouchSensor788.description = "HAnimSite r_infraorbitale_pt";
HAnimSite787.children = new MFNode();

HAnimSite787.children[0] = TouchSensor788;

Shape Shape789 = createNode("Shape");
Shape789.USE = "HAnimSiteShape";
HAnimSite787.children[1] = Shape789;

HAnimSegment709.children[21] = HAnimSite787;

HAnimSite HAnimSite790 = createNode("HAnimSite");
HAnimSite790.DEF = "hanim_l_infraorbitale_pt";
HAnimSite790.name = "l_infraorbitale_pt";
HAnimSite790.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor791 = createNode("TouchSensor");
TouchSensor791.description = "HAnimSite l_infraorbitale_pt";
HAnimSite790.children = new MFNode();

HAnimSite790.children[0] = TouchSensor791;

Shape Shape792 = createNode("Shape");
Shape792.USE = "HAnimSiteShape";
HAnimSite790.children[1] = Shape792;

HAnimSegment709.children[22] = HAnimSite790;

HAnimSite HAnimSite793 = createNode("HAnimSite");
HAnimSite793.DEF = "hanim_supramenton_pt";
HAnimSite793.name = "supramenton_pt";
HAnimSite793.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor794 = createNode("TouchSensor");
TouchSensor794.description = "HAnimSite supramenton_pt";
HAnimSite793.children = new MFNode();

HAnimSite793.children[0] = TouchSensor794;

Shape Shape795 = createNode("Shape");
Shape795.USE = "HAnimSiteShape";
HAnimSite793.children[1] = Shape795;

HAnimSegment709.children[23] = HAnimSite793;

HAnimSite HAnimSite796 = createNode("HAnimSite");
HAnimSite796.DEF = "hanim_r_tragion_pt";
HAnimSite796.name = "r_tragion_pt";
HAnimSite796.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor797 = createNode("TouchSensor");
TouchSensor797.description = "HAnimSite r_tragion_pt";
HAnimSite796.children = new MFNode();

HAnimSite796.children[0] = TouchSensor797;

Shape Shape798 = createNode("Shape");
Shape798.USE = "HAnimSiteShape";
HAnimSite796.children[1] = Shape798;

HAnimSegment709.children[24] = HAnimSite796;

HAnimSite HAnimSite799 = createNode("HAnimSite");
HAnimSite799.DEF = "hanim_r_gonion_pt";
HAnimSite799.name = "r_gonion_pt";
HAnimSite799.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor800 = createNode("TouchSensor");
TouchSensor800.description = "HAnimSite r_gonion_pt";
HAnimSite799.children = new MFNode();

HAnimSite799.children[0] = TouchSensor800;

Shape Shape801 = createNode("Shape");
Shape801.USE = "HAnimSiteShape";
HAnimSite799.children[1] = Shape801;

HAnimSegment709.children[25] = HAnimSite799;

HAnimSite HAnimSite802 = createNode("HAnimSite");
HAnimSite802.DEF = "hanim_l_tragion_pt";
HAnimSite802.name = "l_tragion_pt";
HAnimSite802.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor803 = createNode("TouchSensor");
TouchSensor803.description = "HAnimSite l_tragion_pt";
HAnimSite802.children = new MFNode();

HAnimSite802.children[0] = TouchSensor803;

Shape Shape804 = createNode("Shape");
Shape804.USE = "HAnimSiteShape";
HAnimSite802.children[1] = Shape804;

HAnimSegment709.children[26] = HAnimSite802;

HAnimSite HAnimSite805 = createNode("HAnimSite");
HAnimSite805.DEF = "hanim_l_gonion_pt";
HAnimSite805.name = "l_gonion_pt";
HAnimSite805.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor806 = createNode("TouchSensor");
TouchSensor806.description = "HAnimSite l_gonion_pt";
HAnimSite805.children = new MFNode();

HAnimSite805.children[0] = TouchSensor806;

Shape Shape807 = createNode("Shape");
Shape807.USE = "HAnimSiteShape";
HAnimSite805.children[1] = Shape807;

HAnimSegment709.children[27] = HAnimSite805;

HAnimSite HAnimSite808 = createNode("HAnimSite");
HAnimSite808.DEF = "hanim_nuchale_pt";
HAnimSite808.name = "nuchale_pt";
HAnimSite808.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor809 = createNode("TouchSensor");
TouchSensor809.description = "HAnimSite nuchale_pt";
HAnimSite808.children = new MFNode();

HAnimSite808.children[0] = TouchSensor809;

Shape Shape810 = createNode("Shape");
Shape810.USE = "HAnimSiteShape";
HAnimSite808.children[1] = Shape810;

HAnimSegment709.children[28] = HAnimSite808;

HAnimJoint708.children = new MFNode();

HAnimJoint708.children[0] = HAnimSegment709;

HAnimJoint HAnimJoint811 = createNode("HAnimJoint");
HAnimJoint811.DEF = "hanim_l_eyeball_joint";
HAnimJoint811.name = "l_eyeball_joint";
HAnimJoint811.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment812 = createNode("HAnimSegment");
HAnimSegment812.DEF = "hanim_l_eyeball";
HAnimSegment812.name = "l_eyeball";
TouchSensor TouchSensor813 = createNode("TouchSensor");
TouchSensor813.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment812.children = new MFNode();

HAnimSegment812.children[0] = TouchSensor813;

Transform Transform814 = createNode("Transform");
Transform814.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape815 = createNode("Shape");
Shape815.USE = "HAnimJointShape";
Transform814.child = new undefined();

Transform814.child[0] = Shape815;

HAnimSegment812.children[1] = Transform814;

Shape Shape816 = createNode("Shape");
LineSet LineSet817 = createNode("LineSet");
LineSet817.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA818 = createNode("ColorRGBA");
ColorRGBA818.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA818.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet817.color = ColorRGBA818;

Coordinate Coordinate819 = createNode("Coordinate");
Coordinate819.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet817.coord = Coordinate819;

Shape816.geometry = LineSet817;

HAnimSegment812.children[2] = Shape816;

HAnimSite HAnimSite820 = createNode("HAnimSite");
HAnimSite820.DEF = "hanim_l_eyeball_site_view";
HAnimSite820.name = "l_eyeball_site_view";
HAnimSite820.translation = new SFVec3f(new float[0.034,1.64,0.05]);
TouchSensor TouchSensor821 = createNode("TouchSensor");
TouchSensor821.description = "HAnimSite l_eyeball_site_view";
HAnimSite820.children = new MFNode();

HAnimSite820.children[0] = TouchSensor821;

Shape Shape822 = createNode("Shape");
Shape822.USE = "HAnimSiteShape";
HAnimSite820.children[1] = Shape822;

Viewpoint Viewpoint823 = createNode("Viewpoint");
Viewpoint823.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint823.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint823.position = new SFVec3f(new float[0,0,0]);
Viewpoint823.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite820.children[2] = Viewpoint823;

Anchor Anchor824 = createNode("Anchor");
Anchor824.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor824.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
LOD LOD825 = createNode("LOD");
LOD825.forceTransitions = True;
LOD825.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo826 = createNode("WorldInfo");
WorldInfo826.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD825.children = new MFNode();

LOD825.children[0] = WorldInfo826;

Shape Shape827 = createNode("Shape");
Shape827.DEF = "HAnimSiteViewpointShape";
Appearance Appearance828 = createNode("Appearance");
Material Material829 = createNode("Material");
Material829.diffuseColor = new SFColor(new float[1,1,0]);
Material829.transparency = 0.3;
Appearance828.material = Material829;

Shape827.appearance = Appearance828;

IndexedFaceSet IndexedFaceSet830 = createNode("IndexedFaceSet");
IndexedFaceSet830.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet830.creaseAngle = 0.5;
IndexedFaceSet830.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate831 = createNode("Coordinate");
Coordinate831.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet830.coord = Coordinate831;

Shape827.geometry = IndexedFaceSet830;

LOD825.children[1] = Shape827;

Anchor824.children = new MFNode();

Anchor824.children[0] = LOD825;

HAnimSite820.children[3] = Anchor824;

HAnimSegment812.children[3] = HAnimSite820;

HAnimJoint811.children = new MFNode();

HAnimJoint811.children[0] = HAnimSegment812;

HAnimJoint708.children[1] = HAnimJoint811;

HAnimJoint HAnimJoint832 = createNode("HAnimJoint");
HAnimJoint832.DEF = "hanim_l_eyelid_joint";
HAnimJoint832.name = "l_eyelid_joint";
HAnimJoint832.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment833 = createNode("HAnimSegment");
HAnimSegment833.DEF = "hanim_l_eyelid";
HAnimSegment833.name = "l_eyelid";
TouchSensor TouchSensor834 = createNode("TouchSensor");
TouchSensor834.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment833.children = new MFNode();

HAnimSegment833.children[0] = TouchSensor834;

Transform Transform835 = createNode("Transform");
Transform835.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape836 = createNode("Shape");
Shape836.USE = "HAnimJointShape";
Transform835.child = new undefined();

Transform835.child[0] = Shape836;

HAnimSegment833.children[1] = Transform835;

HAnimJoint832.children = new MFNode();

HAnimJoint832.children[0] = HAnimSegment833;

HAnimJoint708.children[2] = HAnimJoint832;

HAnimJoint HAnimJoint837 = createNode("HAnimJoint");
HAnimJoint837.DEF = "hanim_l_eyebrow_joint";
HAnimJoint837.name = "l_eyebrow_joint";
HAnimJoint837.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimSegment HAnimSegment838 = createNode("HAnimSegment");
HAnimSegment838.DEF = "hanim_l_eyebrow";
HAnimSegment838.name = "l_eyebrow";
TouchSensor TouchSensor839 = createNode("TouchSensor");
TouchSensor839.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment838.children = new MFNode();

HAnimSegment838.children[0] = TouchSensor839;

Transform Transform840 = createNode("Transform");
Transform840.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
Shape Shape841 = createNode("Shape");
Shape841.USE = "HAnimJointShape";
Transform840.child = new undefined();

Transform840.child[0] = Shape841;

HAnimSegment838.children[1] = Transform840;

HAnimJoint837.children = new MFNode();

HAnimJoint837.children[0] = HAnimSegment838;

HAnimJoint708.children[3] = HAnimJoint837;

HAnimJoint HAnimJoint842 = createNode("HAnimJoint");
HAnimJoint842.DEF = "hanim_r_eyeball_joint";
HAnimJoint842.name = "r_eyeball_joint";
HAnimJoint842.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment843 = createNode("HAnimSegment");
HAnimSegment843.DEF = "hanim_r_eyeball";
HAnimSegment843.name = "r_eyeball";
TouchSensor TouchSensor844 = createNode("TouchSensor");
TouchSensor844.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment843.children = new MFNode();

HAnimSegment843.children[0] = TouchSensor844;

Transform Transform845 = createNode("Transform");
Transform845.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape846 = createNode("Shape");
Shape846.USE = "HAnimJointShape";
Transform845.child = new undefined();

Transform845.child[0] = Shape846;

HAnimSegment843.children[1] = Transform845;

Shape Shape847 = createNode("Shape");
LineSet LineSet848 = createNode("LineSet");
LineSet848.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA849 = createNode("ColorRGBA");
ColorRGBA849.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet848.color = ColorRGBA849;

Coordinate Coordinate850 = createNode("Coordinate");
Coordinate850.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet848.coord = Coordinate850;

Shape847.geometry = LineSet848;

HAnimSegment843.children[2] = Shape847;

HAnimSite HAnimSite851 = createNode("HAnimSite");
HAnimSite851.DEF = "hanim_r_eyeball_site_view";
HAnimSite851.name = "r_eyeball_site_view";
HAnimSite851.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
TouchSensor TouchSensor852 = createNode("TouchSensor");
TouchSensor852.description = "HAnimSite r_eyeball_site_view";
HAnimSite851.children = new MFNode();

HAnimSite851.children[0] = TouchSensor852;

Shape Shape853 = createNode("Shape");
Shape853.USE = "HAnimSiteShape";
HAnimSite851.children[1] = Shape853;

Viewpoint Viewpoint854 = createNode("Viewpoint");
Viewpoint854.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint854.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint854.position = new SFVec3f(new float[0,0,0]);
Viewpoint854.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite851.children[2] = Viewpoint854;

Anchor Anchor855 = createNode("Anchor");
Anchor855.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor855.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
LOD LOD856 = createNode("LOD");
LOD856.forceTransitions = True;
LOD856.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo857 = createNode("WorldInfo");
WorldInfo857.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD856.children = new MFNode();

LOD856.children[0] = WorldInfo857;

Shape Shape858 = createNode("Shape");
Shape858.USE = "HAnimSiteViewpointShape";
LOD856.children[1] = Shape858;

Anchor855.children = new MFNode();

Anchor855.children[0] = LOD856;

HAnimSite851.children[3] = Anchor855;

HAnimSegment843.children[3] = HAnimSite851;

HAnimJoint842.children = new MFNode();

HAnimJoint842.children[0] = HAnimSegment843;

HAnimJoint708.children[4] = HAnimJoint842;

HAnimJoint HAnimJoint859 = createNode("HAnimJoint");
HAnimJoint859.DEF = "hanim_r_eyelid_joint";
HAnimJoint859.name = "r_eyelid_joint";
HAnimJoint859.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment860 = createNode("HAnimSegment");
HAnimSegment860.DEF = "hanim_r_eyelid";
HAnimSegment860.name = "r_eyelid";
TouchSensor TouchSensor861 = createNode("TouchSensor");
TouchSensor861.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment860.children = new MFNode();

HAnimSegment860.children[0] = TouchSensor861;

Transform Transform862 = createNode("Transform");
Transform862.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape863 = createNode("Shape");
Shape863.USE = "HAnimJointShape";
Transform862.child = new undefined();

Transform862.child[0] = Shape863;

HAnimSegment860.children[1] = Transform862;

HAnimJoint859.children = new MFNode();

HAnimJoint859.children[0] = HAnimSegment860;

HAnimJoint708.children[5] = HAnimJoint859;

HAnimJoint HAnimJoint864 = createNode("HAnimJoint");
HAnimJoint864.DEF = "hanim_r_eyebrow_joint";
HAnimJoint864.name = "r_eyebrow_joint";
HAnimJoint864.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimSegment HAnimSegment865 = createNode("HAnimSegment");
HAnimSegment865.DEF = "hanim_r_eyebrow";
HAnimSegment865.name = "r_eyebrow";
TouchSensor TouchSensor866 = createNode("TouchSensor");
TouchSensor866.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment865.children = new MFNode();

HAnimSegment865.children[0] = TouchSensor866;

Transform Transform867 = createNode("Transform");
Transform867.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
Shape Shape868 = createNode("Shape");
Shape868.USE = "HAnimJointShape";
Transform867.child = new undefined();

Transform867.child[0] = Shape868;

HAnimSegment865.children[1] = Transform867;

HAnimJoint864.children = new MFNode();

HAnimJoint864.children[0] = HAnimSegment865;

HAnimJoint708.children[6] = HAnimJoint864;

HAnimJoint HAnimJoint869 = createNode("HAnimJoint");
HAnimJoint869.DEF = "hanim_temporomandibular";
HAnimJoint869.name = "temporomandibular";
HAnimJoint869.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimSegment HAnimSegment870 = createNode("HAnimSegment");
HAnimSegment870.DEF = "hanim_jaw";
HAnimSegment870.name = "jaw";
TouchSensor TouchSensor871 = createNode("TouchSensor");
TouchSensor871.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment870.children = new MFNode();

HAnimSegment870.children[0] = TouchSensor871;

Transform Transform872 = createNode("Transform");
Transform872.translation = new SFVec3f(new float[0,1.63,0.015]);
Shape Shape873 = createNode("Shape");
Shape873.USE = "HAnimJointShape";
Transform872.child = new undefined();

Transform872.child[0] = Shape873;

HAnimSegment870.children[1] = Transform872;

Shape Shape874 = createNode("Shape");
LineSet LineSet875 = createNode("LineSet");
LineSet875.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA876 = createNode("ColorRGBA");
ColorRGBA876.USE = "HAnimSiteLineColorRGBA";
LineSet875.color = ColorRGBA876;

Coordinate Coordinate877 = createNode("Coordinate");
Coordinate877.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet875.coord = Coordinate877;

Shape874.geometry = LineSet875;

HAnimSegment870.children[2] = Shape874;

Shape Shape878 = createNode("Shape");
LineSet LineSet879 = createNode("LineSet");
LineSet879.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA880 = createNode("ColorRGBA");
ColorRGBA880.USE = "HAnimSiteLineColorRGBA";
LineSet879.color = ColorRGBA880;

Coordinate Coordinate881 = createNode("Coordinate");
Coordinate881.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet879.coord = Coordinate881;

Shape878.geometry = LineSet879;

HAnimSegment870.children[3] = Shape878;

HAnimSite HAnimSite882 = createNode("HAnimSite");
HAnimSite882.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite882.name = "temporomandibular_l_site_pt";
HAnimSite882.translation = new SFVec3f(new float[0.045,1.63,0]);
TouchSensor TouchSensor883 = createNode("TouchSensor");
TouchSensor883.description = "HAnimSite temporomandibular_l_site_pt";
HAnimSite882.children = new MFNode();

HAnimSite882.children[0] = TouchSensor883;

Shape Shape884 = createNode("Shape");
Shape884.USE = "HAnimSiteShape";
HAnimSite882.children[1] = Shape884;

HAnimSegment870.children[4] = HAnimSite882;

HAnimSite HAnimSite885 = createNode("HAnimSite");
HAnimSite885.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite885.name = "temporomandibular_r_site_pt";
HAnimSite885.translation = new SFVec3f(new float[-0.045,1.63,0]);
TouchSensor TouchSensor886 = createNode("TouchSensor");
TouchSensor886.description = "HAnimSite temporomandibular_r_site_pt";
HAnimSite885.children = new MFNode();

HAnimSite885.children[0] = TouchSensor886;

Shape Shape887 = createNode("Shape");
Shape887.USE = "HAnimSiteShape";
HAnimSite885.children[1] = Shape887;

HAnimSegment870.children[5] = HAnimSite885;

HAnimJoint869.children = new MFNode();

HAnimJoint869.children[0] = HAnimSegment870;

HAnimJoint708.children[7] = HAnimJoint869;

HAnimJoint699.children[1] = HAnimJoint708;

HAnimJoint690.children[1] = HAnimJoint699;

HAnimJoint681.children[1] = HAnimJoint690;

HAnimJoint672.children[1] = HAnimJoint681;

HAnimJoint663.children[1] = HAnimJoint672;

HAnimJoint654.children[1] = HAnimJoint663;

HAnimJoint631.children[1] = HAnimJoint654;

HAnimJoint600.children[1] = HAnimJoint631;

HAnimJoint HAnimJoint888 = createNode("HAnimJoint");
HAnimJoint888.DEF = "hanim_l_sternoclavicular";
HAnimJoint888.name = "l_sternoclavicular";
HAnimJoint888.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment889 = createNode("HAnimSegment");
HAnimSegment889.DEF = "hanim_l_clavicle";
HAnimSegment889.name = "l_clavicle";
TouchSensor TouchSensor890 = createNode("TouchSensor");
TouchSensor890.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment889.children = new MFNode();

HAnimSegment889.children[0] = TouchSensor890;

Transform Transform891 = createNode("Transform");
Transform891.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape892 = createNode("Shape");
Shape892.USE = "HAnimJointShape";
Transform891.child = new undefined();

Transform891.child[0] = Shape892;

HAnimSegment889.children[1] = Transform891;

Shape Shape893 = createNode("Shape");
LineSet LineSet894 = createNode("LineSet");
LineSet894.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA895 = createNode("ColorRGBA");
ColorRGBA895.USE = "HAnimSegmentLineColorRGBA";
LineSet894.color = ColorRGBA895;

Coordinate Coordinate896 = createNode("Coordinate");
Coordinate896.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet894.coord = Coordinate896;

Shape893.geometry = LineSet894;

HAnimSegment889.children[2] = Shape893;

Shape Shape897 = createNode("Shape");
LineSet LineSet898 = createNode("LineSet");
LineSet898.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA899 = createNode("ColorRGBA");
ColorRGBA899.USE = "HAnimSiteLineColorRGBA";
LineSet898.color = ColorRGBA899;

Coordinate Coordinate900 = createNode("Coordinate");
Coordinate900.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet898.coord = Coordinate900;

Shape897.geometry = LineSet898;

HAnimSegment889.children[3] = Shape897;

Shape Shape901 = createNode("Shape");
LineSet LineSet902 = createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA903 = createNode("ColorRGBA");
ColorRGBA903.USE = "HAnimSiteLineColorRGBA";
LineSet902.color = ColorRGBA903;

Coordinate Coordinate904 = createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet902.coord = Coordinate904;

Shape901.geometry = LineSet902;

HAnimSegment889.children[4] = Shape901;

Shape Shape905 = createNode("Shape");
LineSet LineSet906 = createNode("LineSet");
LineSet906.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA907 = createNode("ColorRGBA");
ColorRGBA907.USE = "HAnimSiteLineColorRGBA";
LineSet906.color = ColorRGBA907;

Coordinate Coordinate908 = createNode("Coordinate");
Coordinate908.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet906.coord = Coordinate908;

Shape905.geometry = LineSet906;

HAnimSegment889.children[5] = Shape905;

Shape Shape909 = createNode("Shape");
LineSet LineSet910 = createNode("LineSet");
LineSet910.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA911 = createNode("ColorRGBA");
ColorRGBA911.USE = "HAnimSiteLineColorRGBA";
LineSet910.color = ColorRGBA911;

Coordinate Coordinate912 = createNode("Coordinate");
Coordinate912.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet910.coord = Coordinate912;

Shape909.geometry = LineSet910;

HAnimSegment889.children[6] = Shape909;

HAnimSite HAnimSite913 = createNode("HAnimSite");
HAnimSite913.DEF = "hanim_l_clavicle_pt";
HAnimSite913.name = "l_clavicle_pt";
HAnimSite913.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor914 = createNode("TouchSensor");
TouchSensor914.description = "HAnimSite l_clavicale_pt";
HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = TouchSensor914;

Shape Shape915 = createNode("Shape");
Shape915.USE = "HAnimSiteShape";
HAnimSite913.children[1] = Shape915;

HAnimSegment889.children[7] = HAnimSite913;

HAnimSite HAnimSite916 = createNode("HAnimSite");
HAnimSite916.DEF = "hanim_l_acromion_pt";
HAnimSite916.name = "l_acromion_pt";
HAnimSite916.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor917 = createNode("TouchSensor");
TouchSensor917.description = "HAnimSite l_acromion_pt";
HAnimSite916.children = new MFNode();

HAnimSite916.children[0] = TouchSensor917;

Shape Shape918 = createNode("Shape");
Shape918.USE = "HAnimSiteShape";
HAnimSite916.children[1] = Shape918;

HAnimSegment889.children[8] = HAnimSite916;

HAnimSite HAnimSite919 = createNode("HAnimSite");
HAnimSite919.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite919.name = "l_axilla_proximal_pt";
HAnimSite919.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor920 = createNode("TouchSensor");
TouchSensor920.description = "HAnimSite l_axilla_ant_pt";
HAnimSite919.children = new MFNode();

HAnimSite919.children[0] = TouchSensor920;

Shape Shape921 = createNode("Shape");
Shape921.USE = "HAnimSiteShape";
HAnimSite919.children[1] = Shape921;

HAnimSegment889.children[9] = HAnimSite919;

HAnimSite HAnimSite922 = createNode("HAnimSite");
HAnimSite922.DEF = "hanim_l_axilla_distal_pt";
HAnimSite922.name = "l_axilla_distal_pt";
HAnimSite922.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor923 = createNode("TouchSensor");
TouchSensor923.description = "HAnimSite l_axilla_post_pt";
HAnimSite922.children = new MFNode();

HAnimSite922.children[0] = TouchSensor923;

Shape Shape924 = createNode("Shape");
Shape924.USE = "HAnimSiteShape";
HAnimSite922.children[1] = Shape924;

HAnimSegment889.children[10] = HAnimSite922;

HAnimJoint888.children = new MFNode();

HAnimJoint888.children[0] = HAnimSegment889;

HAnimJoint HAnimJoint925 = createNode("HAnimJoint");
HAnimJoint925.DEF = "hanim_l_acromioclavicular";
HAnimJoint925.name = "l_acromioclavicular";
HAnimJoint925.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment926 = createNode("HAnimSegment");
HAnimSegment926.DEF = "hanim_l_scapula";
HAnimSegment926.name = "l_scapula";
TouchSensor TouchSensor927 = createNode("TouchSensor");
TouchSensor927.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment926.children = new MFNode();

HAnimSegment926.children[0] = TouchSensor927;

Transform Transform928 = createNode("Transform");
Transform928.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape929 = createNode("Shape");
Shape929.USE = "HAnimJointShape";
Transform928.child = new undefined();

Transform928.child[0] = Shape929;

HAnimSegment926.children[1] = Transform928;

Shape Shape930 = createNode("Shape");
LineSet LineSet931 = createNode("LineSet");
LineSet931.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA932 = createNode("ColorRGBA");
ColorRGBA932.USE = "HAnimSegmentLineColorRGBA";
LineSet931.color = ColorRGBA932;

Coordinate Coordinate933 = createNode("Coordinate");
Coordinate933.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet931.coord = Coordinate933;

Shape930.geometry = LineSet931;

HAnimSegment926.children[2] = Shape930;

HAnimJoint925.children = new MFNode();

HAnimJoint925.children[0] = HAnimSegment926;

HAnimJoint HAnimJoint934 = createNode("HAnimJoint");
HAnimJoint934.DEF = "hanim_l_shoulder";
HAnimJoint934.name = "l_shoulder";
HAnimJoint934.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment935 = createNode("HAnimSegment");
HAnimSegment935.DEF = "hanim_l_upperarm";
HAnimSegment935.name = "l_upperarm";
TouchSensor TouchSensor936 = createNode("TouchSensor");
TouchSensor936.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment935.children = new MFNode();

HAnimSegment935.children[0] = TouchSensor936;

Transform Transform937 = createNode("Transform");
Transform937.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape938 = createNode("Shape");
Shape938.USE = "HAnimJointShape";
Transform937.child = new undefined();

Transform937.child[0] = Shape938;

HAnimSegment935.children[1] = Transform937;

Shape Shape939 = createNode("Shape");
LineSet LineSet940 = createNode("LineSet");
LineSet940.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA941 = createNode("ColorRGBA");
ColorRGBA941.USE = "HAnimSegmentLineColorRGBA";
LineSet940.color = ColorRGBA941;

Coordinate Coordinate942 = createNode("Coordinate");
Coordinate942.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet940.coord = Coordinate942;

Shape939.geometry = LineSet940;

HAnimSegment935.children[2] = Shape939;

Shape Shape943 = createNode("Shape");
LineSet LineSet944 = createNode("LineSet");
LineSet944.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA945 = createNode("ColorRGBA");
ColorRGBA945.USE = "HAnimSiteLineColorRGBA";
LineSet944.color = ColorRGBA945;

Coordinate Coordinate946 = createNode("Coordinate");
Coordinate946.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet944.coord = Coordinate946;

Shape943.geometry = LineSet944;

HAnimSegment935.children[3] = Shape943;

HAnimSite HAnimSite947 = createNode("HAnimSite");
HAnimSite947.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite947.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite947.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor948 = createNode("TouchSensor");
TouchSensor948.description = "HAnimSite l_humeral_lateral_epicn_pt";
HAnimSite947.children = new MFNode();

HAnimSite947.children[0] = TouchSensor948;

Shape Shape949 = createNode("Shape");
Shape949.USE = "HAnimSiteShape";
HAnimSite947.children[1] = Shape949;

HAnimSegment935.children[4] = HAnimSite947;

HAnimJoint934.children = new MFNode();

HAnimJoint934.children[0] = HAnimSegment935;

HAnimJoint HAnimJoint950 = createNode("HAnimJoint");
HAnimJoint950.DEF = "hanim_l_elbow";
HAnimJoint950.name = "l_elbow";
HAnimJoint950.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment951 = createNode("HAnimSegment");
HAnimSegment951.DEF = "hanim_l_forearm";
HAnimSegment951.name = "l_forearm";
TouchSensor TouchSensor952 = createNode("TouchSensor");
TouchSensor952.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment951.children = new MFNode();

HAnimSegment951.children[0] = TouchSensor952;

Transform Transform953 = createNode("Transform");
Transform953.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape954 = createNode("Shape");
Shape954.USE = "HAnimJointShape";
Transform953.child = new undefined();

Transform953.child[0] = Shape954;

HAnimSegment951.children[1] = Transform953;

Shape Shape955 = createNode("Shape");
LineSet LineSet956 = createNode("LineSet");
LineSet956.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA957 = createNode("ColorRGBA");
ColorRGBA957.USE = "HAnimSegmentLineColorRGBA";
LineSet956.color = ColorRGBA957;

Coordinate Coordinate958 = createNode("Coordinate");
Coordinate958.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet956.coord = Coordinate958;

Shape955.geometry = LineSet956;

HAnimSegment951.children[2] = Shape955;

Shape Shape959 = createNode("Shape");
LineSet LineSet960 = createNode("LineSet");
LineSet960.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA961 = createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSiteLineColorRGBA";
LineSet960.color = ColorRGBA961;

Coordinate Coordinate962 = createNode("Coordinate");
Coordinate962.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet960.coord = Coordinate962;

Shape959.geometry = LineSet960;

HAnimSegment951.children[3] = Shape959;

Shape Shape963 = createNode("Shape");
LineSet LineSet964 = createNode("LineSet");
LineSet964.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA965 = createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSiteLineColorRGBA";
LineSet964.color = ColorRGBA965;

Coordinate Coordinate966 = createNode("Coordinate");
Coordinate966.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet964.coord = Coordinate966;

Shape963.geometry = LineSet964;

HAnimSegment951.children[4] = Shape963;

Shape Shape967 = createNode("Shape");
LineSet LineSet968 = createNode("LineSet");
LineSet968.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA969 = createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSiteLineColorRGBA";
LineSet968.color = ColorRGBA969;

Coordinate Coordinate970 = createNode("Coordinate");
Coordinate970.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet968.coord = Coordinate970;

Shape967.geometry = LineSet968;

HAnimSegment951.children[5] = Shape967;

Shape Shape971 = createNode("Shape");
LineSet LineSet972 = createNode("LineSet");
LineSet972.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA973 = createNode("ColorRGBA");
ColorRGBA973.USE = "HAnimSiteLineColorRGBA";
LineSet972.color = ColorRGBA973;

Coordinate Coordinate974 = createNode("Coordinate");
Coordinate974.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet972.coord = Coordinate974;

Shape971.geometry = LineSet972;

HAnimSegment951.children[6] = Shape971;

HAnimSite HAnimSite975 = createNode("HAnimSite");
HAnimSite975.DEF = "hanim_l_radial_styloid_pt";
HAnimSite975.name = "l_radial_styloid_pt";
HAnimSite975.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor976 = createNode("TouchSensor");
TouchSensor976.description = "HAnimSite l_radial_styloid_pt";
HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = TouchSensor976;

Shape Shape977 = createNode("Shape");
Shape977.USE = "HAnimSiteShape";
HAnimSite975.children[1] = Shape977;

HAnimSegment951.children[7] = HAnimSite975;

HAnimSite HAnimSite978 = createNode("HAnimSite");
HAnimSite978.DEF = "hanim_l_olecranon_pt";
HAnimSite978.name = "l_olecranon_pt";
HAnimSite978.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor979 = createNode("TouchSensor");
TouchSensor979.description = "HAnimSite l_olecranon_pt";
HAnimSite978.children = new MFNode();

HAnimSite978.children[0] = TouchSensor979;

Shape Shape980 = createNode("Shape");
Shape980.USE = "HAnimSiteShape";
HAnimSite978.children[1] = Shape980;

HAnimSegment951.children[8] = HAnimSite978;

HAnimSite HAnimSite981 = createNode("HAnimSite");
HAnimSite981.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite981.name = "l_humeral_medial_epicondyle_pt";
HAnimSite981.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor982 = createNode("TouchSensor");
TouchSensor982.description = "HAnimSite l_humeral_medial_epicn_pt";
HAnimSite981.children = new MFNode();

HAnimSite981.children[0] = TouchSensor982;

Shape Shape983 = createNode("Shape");
Shape983.USE = "HAnimSiteShape";
HAnimSite981.children[1] = Shape983;

HAnimSegment951.children[9] = HAnimSite981;

HAnimSite HAnimSite984 = createNode("HAnimSite");
HAnimSite984.DEF = "hanim_l_radiale_pt";
HAnimSite984.name = "l_radiale_pt";
HAnimSite984.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor985 = createNode("TouchSensor");
TouchSensor985.description = "HAnimSite l_radiale_pt";
HAnimSite984.children = new MFNode();

HAnimSite984.children[0] = TouchSensor985;

Shape Shape986 = createNode("Shape");
Shape986.USE = "HAnimSiteShape";
HAnimSite984.children[1] = Shape986;

HAnimSegment951.children[10] = HAnimSite984;

HAnimJoint950.children = new MFNode();

HAnimJoint950.children[0] = HAnimSegment951;

HAnimJoint HAnimJoint987 = createNode("HAnimJoint");
HAnimJoint987.DEF = "hanim_l_radiocarpal";
HAnimJoint987.name = "l_radiocarpal";
HAnimJoint987.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment988 = createNode("HAnimSegment");
HAnimSegment988.DEF = "hanim_l_carpal";
HAnimSegment988.name = "l_carpal";
TouchSensor TouchSensor989 = createNode("TouchSensor");
TouchSensor989.description = "HAnimJoint l_radiocarpal, HAnimSegment l_carpal";
HAnimSegment988.children = new MFNode();

HAnimSegment988.children[0] = TouchSensor989;

Transform Transform990 = createNode("Transform");
Transform990.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape991 = createNode("Shape");
Shape991.USE = "HAnimJointShape";
Transform990.child = new undefined();

Transform990.child[0] = Shape991;

HAnimSegment988.children[1] = Transform990;

Shape Shape992 = createNode("Shape");
LineSet LineSet993 = createNode("LineSet");
LineSet993.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA994 = createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
LineSet993.color = ColorRGBA994;

Coordinate Coordinate995 = createNode("Coordinate");
Coordinate995.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet993.coord = Coordinate995;

Shape992.geometry = LineSet993;

HAnimSegment988.children[2] = Shape992;

Shape Shape996 = createNode("Shape");
LineSet LineSet997 = createNode("LineSet");
LineSet997.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA998 = createNode("ColorRGBA");
ColorRGBA998.USE = "HAnimSegmentLineColorRGBA";
LineSet997.color = ColorRGBA998;

Coordinate Coordinate999 = createNode("Coordinate");
Coordinate999.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet997.coord = Coordinate999;

Shape996.geometry = LineSet997;

HAnimSegment988.children[3] = Shape996;

Shape Shape1000 = createNode("Shape");
LineSet LineSet1001 = createNode("LineSet");
LineSet1001.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1002 = createNode("ColorRGBA");
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA";
LineSet1001.color = ColorRGBA1002;

Coordinate Coordinate1003 = createNode("Coordinate");
Coordinate1003.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet1001.coord = Coordinate1003;

Shape1000.geometry = LineSet1001;

HAnimSegment988.children[4] = Shape1000;

Shape Shape1004 = createNode("Shape");
LineSet LineSet1005 = createNode("LineSet");
LineSet1005.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1006 = createNode("ColorRGBA");
ColorRGBA1006.USE = "HAnimSegmentLineColorRGBA";
LineSet1005.color = ColorRGBA1006;

Coordinate Coordinate1007 = createNode("Coordinate");
Coordinate1007.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet1005.coord = Coordinate1007;

Shape1004.geometry = LineSet1005;

HAnimSegment988.children[5] = Shape1004;

Shape Shape1008 = createNode("Shape");
LineSet LineSet1009 = createNode("LineSet");
LineSet1009.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1010 = createNode("ColorRGBA");
ColorRGBA1010.USE = "HAnimSegmentLineColorRGBA";
LineSet1009.color = ColorRGBA1010;

Coordinate Coordinate1011 = createNode("Coordinate");
Coordinate1011.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1009.coord = Coordinate1011;

Shape1008.geometry = LineSet1009;

HAnimSegment988.children[6] = Shape1008;

Shape Shape1012 = createNode("Shape");
LineSet LineSet1013 = createNode("LineSet");
LineSet1013.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1014 = createNode("ColorRGBA");
ColorRGBA1014.USE = "HAnimSiteLineColorRGBA";
LineSet1013.color = ColorRGBA1014;

Coordinate Coordinate1015 = createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1013.coord = Coordinate1015;

Shape1012.geometry = LineSet1013;

HAnimSegment988.children[7] = Shape1012;

Shape Shape1016 = createNode("Shape");
LineSet LineSet1017 = createNode("LineSet");
LineSet1017.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1018 = createNode("ColorRGBA");
ColorRGBA1018.USE = "HAnimSiteLineColorRGBA";
LineSet1017.color = ColorRGBA1018;

Coordinate Coordinate1019 = createNode("Coordinate");
Coordinate1019.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1017.coord = Coordinate1019;

Shape1016.geometry = LineSet1017;

HAnimSegment988.children[8] = Shape1016;

Shape Shape1020 = createNode("Shape");
LineSet LineSet1021 = createNode("LineSet");
LineSet1021.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1022 = createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSiteLineColorRGBA";
LineSet1021.color = ColorRGBA1022;

Coordinate Coordinate1023 = createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1021.coord = Coordinate1023;

Shape1020.geometry = LineSet1021;

HAnimSegment988.children[9] = Shape1020;

Shape Shape1024 = createNode("Shape");
LineSet LineSet1025 = createNode("LineSet");
LineSet1025.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1026 = createNode("ColorRGBA");
ColorRGBA1026.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1025.color = ColorRGBA1026;

Coordinate Coordinate1027 = createNode("Coordinate");
Coordinate1027.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1025.coord = Coordinate1027;

Shape1024.geometry = LineSet1025;

HAnimSegment988.children[10] = Shape1024;

HAnimSite HAnimSite1028 = createNode("HAnimSite");
HAnimSite1028.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1028.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1028.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1029 = createNode("TouchSensor");
TouchSensor1029.description = "HAnimSite l_metacarpal_pha2_pt";
HAnimSite1028.children = new MFNode();

HAnimSite1028.children[0] = TouchSensor1029;

Shape Shape1030 = createNode("Shape");
Shape1030.USE = "HAnimSiteShape";
HAnimSite1028.children[1] = Shape1030;

HAnimSegment988.children[11] = HAnimSite1028;

HAnimSite HAnimSite1031 = createNode("HAnimSite");
HAnimSite1031.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1031.name = "l_ulnar_styloid_pt";
HAnimSite1031.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1032 = createNode("TouchSensor");
TouchSensor1032.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1031.children = new MFNode();

HAnimSite1031.children[0] = TouchSensor1032;

Shape Shape1033 = createNode("Shape");
Shape1033.USE = "HAnimSiteShape";
HAnimSite1031.children[1] = Shape1033;

HAnimSegment988.children[12] = HAnimSite1031;

HAnimSite HAnimSite1034 = createNode("HAnimSite");
HAnimSite1034.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1034.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1034.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1035 = createNode("TouchSensor");
TouchSensor1035.description = "HAnimSite l_metacarpal_pha5_pt";
HAnimSite1034.children = new MFNode();

HAnimSite1034.children[0] = TouchSensor1035;

Shape Shape1036 = createNode("Shape");
Shape1036.USE = "HAnimSiteShape";
HAnimSite1034.children[1] = Shape1036;

HAnimSegment988.children[13] = HAnimSite1034;

HAnimSite HAnimSite1037 = createNode("HAnimSite");
HAnimSite1037.DEF = "hanim_l_hand_front_view";
HAnimSite1037.name = "l_hand_front_view";
HAnimSite1037.translation = new SFVec3f(new float[0.3,0.75,0.45]);
TouchSensor TouchSensor1038 = createNode("TouchSensor");
TouchSensor1038.description = "HAnimSite l_hand_front_view";
HAnimSite1037.children = new MFNode();

HAnimSite1037.children[0] = TouchSensor1038;

Shape Shape1039 = createNode("Shape");
Shape1039.USE = "HAnimSiteShape";
HAnimSite1037.children[1] = Shape1039;

Viewpoint Viewpoint1040 = createNode("Viewpoint");
Viewpoint1040.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1040.description = "left hand front";
Viewpoint1040.position = new SFVec3f(new float[0,0,0]);
Viewpoint1040.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
HAnimSite1037.children[2] = Viewpoint1040;

Anchor Anchor1041 = createNode("Anchor");
Anchor1041.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1041.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
LOD LOD1042 = createNode("LOD");
LOD1042.forceTransitions = True;
LOD1042.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1043 = createNode("WorldInfo");
WorldInfo1043.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1042.children = new MFNode();

LOD1042.children[0] = WorldInfo1043;

Shape Shape1044 = createNode("Shape");
Shape1044.USE = "HAnimSiteViewpointShape";
LOD1042.children[1] = Shape1044;

Anchor1041.children = new MFNode();

Anchor1041.children[0] = LOD1042;

HAnimSite1037.children[3] = Anchor1041;

HAnimSegment988.children[14] = HAnimSite1037;

HAnimJoint987.children = new MFNode();

HAnimJoint987.children[0] = HAnimSegment988;

HAnimJoint HAnimJoint1045 = createNode("HAnimJoint");
HAnimJoint1045.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1045.name = "l_carpometacarpal_1";
HAnimJoint1045.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment1046 = createNode("HAnimSegment");
HAnimSegment1046.DEF = "hanim_l_metacarpal_1";
HAnimSegment1046.name = "l_metacarpal_1";
TouchSensor TouchSensor1047 = createNode("TouchSensor");
TouchSensor1047.description = "HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1";
HAnimSegment1046.children = new MFNode();

HAnimSegment1046.children[0] = TouchSensor1047;

Transform Transform1048 = createNode("Transform");
Transform1048.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape1049 = createNode("Shape");
Shape1049.USE = "HAnimJointShape";
Transform1048.child = new undefined();

Transform1048.child[0] = Shape1049;

HAnimSegment1046.children[1] = Transform1048;

Shape Shape1050 = createNode("Shape");
LineSet LineSet1051 = createNode("LineSet");
LineSet1051.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1052 = createNode("ColorRGBA");
ColorRGBA1052.USE = "HAnimSegmentLineColorRGBA";
LineSet1051.color = ColorRGBA1052;

Coordinate Coordinate1053 = createNode("Coordinate");
Coordinate1053.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1051.coord = Coordinate1053;

Shape1050.geometry = LineSet1051;

HAnimSegment1046.children[2] = Shape1050;

HAnimJoint1045.children = new MFNode();

HAnimJoint1045.children[0] = HAnimSegment1046;

HAnimJoint HAnimJoint1054 = createNode("HAnimJoint");
HAnimJoint1054.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1054.name = "l_metacarpophalangeal_1";
HAnimJoint1054.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment1055 = createNode("HAnimSegment");
HAnimSegment1055.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment1055.name = "l_carpal_proximal_phalanx_1";
TouchSensor TouchSensor1056 = createNode("TouchSensor");
TouchSensor1056.description = "HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1";
HAnimSegment1055.children = new MFNode();

HAnimSegment1055.children[0] = TouchSensor1056;

Transform Transform1057 = createNode("Transform");
Transform1057.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape1058 = createNode("Shape");
Shape1058.USE = "HAnimJointShape";
Transform1057.child = new undefined();

Transform1057.child[0] = Shape1058;

HAnimSegment1055.children[1] = Transform1057;

Shape Shape1059 = createNode("Shape");
LineSet LineSet1060 = createNode("LineSet");
LineSet1060.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1061 = createNode("ColorRGBA");
ColorRGBA1061.USE = "HAnimSegmentLineColorRGBA";
LineSet1060.color = ColorRGBA1061;

Coordinate Coordinate1062 = createNode("Coordinate");
Coordinate1062.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1060.coord = Coordinate1062;

Shape1059.geometry = LineSet1060;

HAnimSegment1055.children[2] = Shape1059;

HAnimJoint1054.children = new MFNode();

HAnimJoint1054.children[0] = HAnimSegment1055;

HAnimJoint HAnimJoint1063 = createNode("HAnimJoint");
HAnimJoint1063.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1063.name = "l_carpal_interphalangeal_1";
HAnimJoint1063.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment1064 = createNode("HAnimSegment");
HAnimSegment1064.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSegment1064.name = "l_carpal_distal_phalanx_1";
TouchSensor TouchSensor1065 = createNode("TouchSensor");
TouchSensor1065.description = "HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1";
HAnimSegment1064.children = new MFNode();

HAnimSegment1064.children[0] = TouchSensor1065;

Transform Transform1066 = createNode("Transform");
Transform1066.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape1067 = createNode("Shape");
Shape1067.USE = "HAnimJointShape";
Transform1066.child = new undefined();

Transform1066.child[0] = Shape1067;

HAnimSegment1064.children[1] = Transform1066;

Shape Shape1068 = createNode("Shape");
LineSet LineSet1069 = createNode("LineSet");
LineSet1069.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1070 = createNode("ColorRGBA");
ColorRGBA1070.USE = "HAnimSiteLineColorRGBA";
LineSet1069.color = ColorRGBA1070;

Coordinate Coordinate1071 = createNode("Coordinate");
Coordinate1071.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1069.coord = Coordinate1071;

Shape1068.geometry = LineSet1069;

HAnimSegment1064.children[2] = Shape1068;

HAnimSite HAnimSite1072 = createNode("HAnimSite");
HAnimSite1072.DEF = "hanim_l_carpal_distal_phalanx_1_pt";
HAnimSite1072.name = "l_carpal_distal_phalanx_1_pt";
HAnimSite1072.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
TouchSensor TouchSensor1073 = createNode("TouchSensor");
TouchSensor1073.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1072.children = new MFNode();

HAnimSite1072.children[0] = TouchSensor1073;

Shape Shape1074 = createNode("Shape");
Shape1074.USE = "HAnimSiteShape";
HAnimSite1072.children[1] = Shape1074;

HAnimSegment1064.children[3] = HAnimSite1072;

HAnimJoint1063.children = new MFNode();

HAnimJoint1063.children[0] = HAnimSegment1064;

HAnimJoint1054.children[1] = HAnimJoint1063;

HAnimJoint1045.children[1] = HAnimJoint1054;

HAnimJoint987.children[1] = HAnimJoint1045;

HAnimJoint HAnimJoint1075 = createNode("HAnimJoint");
HAnimJoint1075.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1075.name = "l_carpometacarpal_2";
HAnimJoint1075.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment1076 = createNode("HAnimSegment");
HAnimSegment1076.DEF = "hanim_l_metacarpal_2";
HAnimSegment1076.name = "l_metacarpal_2";
TouchSensor TouchSensor1077 = createNode("TouchSensor");
TouchSensor1077.description = "HAnimJoint l_index0, HAnimSegment l_metacarpal_2";
HAnimSegment1076.children = new MFNode();

HAnimSegment1076.children[0] = TouchSensor1077;

Transform Transform1078 = createNode("Transform");
Transform1078.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape1079 = createNode("Shape");
Shape1079.USE = "HAnimJointShape";
Transform1078.child = new undefined();

Transform1078.child[0] = Shape1079;

HAnimSegment1076.children[1] = Transform1078;

Shape Shape1080 = createNode("Shape");
LineSet LineSet1081 = createNode("LineSet");
LineSet1081.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1082 = createNode("ColorRGBA");
ColorRGBA1082.USE = "HAnimSegmentLineColorRGBA";
LineSet1081.color = ColorRGBA1082;

Coordinate Coordinate1083 = createNode("Coordinate");
Coordinate1083.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1081.coord = Coordinate1083;

Shape1080.geometry = LineSet1081;

HAnimSegment1076.children[2] = Shape1080;

HAnimJoint1075.children = new MFNode();

HAnimJoint1075.children[0] = HAnimSegment1076;

HAnimJoint HAnimJoint1084 = createNode("HAnimJoint");
HAnimJoint1084.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1084.name = "l_metacarpophalangeal_2";
HAnimJoint1084.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment1085 = createNode("HAnimSegment");
HAnimSegment1085.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment1085.name = "l_carpal_proximal_phalanx_2";
TouchSensor TouchSensor1086 = createNode("TouchSensor");
TouchSensor1086.description = "HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2";
HAnimSegment1085.children = new MFNode();

HAnimSegment1085.children[0] = TouchSensor1086;

Transform Transform1087 = createNode("Transform");
Transform1087.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape1088 = createNode("Shape");
Shape1088.USE = "HAnimJointShape";
Transform1087.child = new undefined();

Transform1087.child[0] = Shape1088;

HAnimSegment1085.children[1] = Transform1087;

Shape Shape1089 = createNode("Shape");
LineSet LineSet1090 = createNode("LineSet");
LineSet1090.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1091 = createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
LineSet1090.color = ColorRGBA1091;

Coordinate Coordinate1092 = createNode("Coordinate");
Coordinate1092.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1090.coord = Coordinate1092;

Shape1089.geometry = LineSet1090;

HAnimSegment1085.children[2] = Shape1089;

HAnimJoint1084.children = new MFNode();

HAnimJoint1084.children[0] = HAnimSegment1085;

HAnimJoint HAnimJoint1093 = createNode("HAnimJoint");
HAnimJoint1093.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1093.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1093.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment1094 = createNode("HAnimSegment");
HAnimSegment1094.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment1094.name = "l_carpal_middle_phalanx_2";
TouchSensor TouchSensor1095 = createNode("TouchSensor");
TouchSensor1095.description = "HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2";
HAnimSegment1094.children = new MFNode();

HAnimSegment1094.children[0] = TouchSensor1095;

Transform Transform1096 = createNode("Transform");
Transform1096.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape1097 = createNode("Shape");
Shape1097.USE = "HAnimJointShape";
Transform1096.child = new undefined();

Transform1096.child[0] = Shape1097;

HAnimSegment1094.children[1] = Transform1096;

Shape Shape1098 = createNode("Shape");
LineSet LineSet1099 = createNode("LineSet");
LineSet1099.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1100 = createNode("ColorRGBA");
ColorRGBA1100.USE = "HAnimSegmentLineColorRGBA";
LineSet1099.color = ColorRGBA1100;

Coordinate Coordinate1101 = createNode("Coordinate");
Coordinate1101.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1099.coord = Coordinate1101;

Shape1098.geometry = LineSet1099;

HAnimSegment1094.children[2] = Shape1098;

HAnimJoint1093.children = new MFNode();

HAnimJoint1093.children[0] = HAnimSegment1094;

HAnimJoint HAnimJoint1102 = createNode("HAnimJoint");
HAnimJoint1102.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1102.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1102.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment1103 = createNode("HAnimSegment");
HAnimSegment1103.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSegment1103.name = "l_carpal_distal_phalanx_2";
TouchSensor TouchSensor1104 = createNode("TouchSensor");
TouchSensor1104.description = "HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2";
HAnimSegment1103.children = new MFNode();

HAnimSegment1103.children[0] = TouchSensor1104;

Transform Transform1105 = createNode("Transform");
Transform1105.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape1106 = createNode("Shape");
Shape1106.USE = "HAnimJointShape";
Transform1105.child = new undefined();

Transform1105.child[0] = Shape1106;

HAnimSegment1103.children[1] = Transform1105;

Shape Shape1107 = createNode("Shape");
LineSet LineSet1108 = createNode("LineSet");
LineSet1108.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1109 = createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSiteLineColorRGBA";
LineSet1108.color = ColorRGBA1109;

Coordinate Coordinate1110 = createNode("Coordinate");
Coordinate1110.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1108.coord = Coordinate1110;

Shape1107.geometry = LineSet1108;

HAnimSegment1103.children[2] = Shape1107;

Shape Shape1111 = createNode("Shape");
LineSet LineSet1112 = createNode("LineSet");
LineSet1112.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1113 = createNode("ColorRGBA");
ColorRGBA1113.USE = "HAnimSiteLineColorRGBA";
LineSet1112.color = ColorRGBA1113;

Coordinate Coordinate1114 = createNode("Coordinate");
Coordinate1114.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1112.coord = Coordinate1114;

Shape1111.geometry = LineSet1112;

HAnimSegment1103.children[3] = Shape1111;

HAnimSite HAnimSite1115 = createNode("HAnimSite");
HAnimSite1115.DEF = "hanim_l_carpal_distal_phalanx_2_pt";
HAnimSite1115.name = "l_carpal_distal_phalanx_2_pt";
HAnimSite1115.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
TouchSensor TouchSensor1116 = createNode("TouchSensor");
TouchSensor1116.description = "HAnimSite l_index_distal_tip";
HAnimSite1115.children = new MFNode();

HAnimSite1115.children[0] = TouchSensor1116;

Shape Shape1117 = createNode("Shape");
Shape1117.USE = "HAnimSiteShape";
HAnimSite1115.children[1] = Shape1117;

HAnimSegment1103.children[4] = HAnimSite1115;

HAnimSite HAnimSite1118 = createNode("HAnimSite");
HAnimSite1118.DEF = "hanim_l_dactylion_pt";
HAnimSite1118.name = "l_dactylion_pt";
HAnimSite1118.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor1119 = createNode("TouchSensor");
TouchSensor1119.description = "HAnimSite l_dactylion_pt";
HAnimSite1118.children = new MFNode();

HAnimSite1118.children[0] = TouchSensor1119;

Shape Shape1120 = createNode("Shape");
Shape1120.USE = "HAnimSiteShape";
HAnimSite1118.children[1] = Shape1120;

HAnimSegment1103.children[5] = HAnimSite1118;

HAnimJoint1102.children = new MFNode();

HAnimJoint1102.children[0] = HAnimSegment1103;

HAnimJoint1093.children[1] = HAnimJoint1102;

HAnimJoint1084.children[1] = HAnimJoint1093;

HAnimJoint1075.children[1] = HAnimJoint1084;

HAnimJoint987.children[2] = HAnimJoint1075;

HAnimJoint HAnimJoint1121 = createNode("HAnimJoint");
HAnimJoint1121.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1121.name = "l_carpometacarpal_3";
HAnimJoint1121.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment1122 = createNode("HAnimSegment");
HAnimSegment1122.DEF = "hanim_l_metacarpal_3";
HAnimSegment1122.name = "l_metacarpal_3";
TouchSensor TouchSensor1123 = createNode("TouchSensor");
TouchSensor1123.description = "HAnimJoint l_middle0, HAnimSegment l_metacarpal_3";
HAnimSegment1122.children = new MFNode();

HAnimSegment1122.children[0] = TouchSensor1123;

Transform Transform1124 = createNode("Transform");
Transform1124.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape1125 = createNode("Shape");
Shape1125.USE = "HAnimJointShape";
Transform1124.child = new undefined();

Transform1124.child[0] = Shape1125;

HAnimSegment1122.children[1] = Transform1124;

Shape Shape1126 = createNode("Shape");
LineSet LineSet1127 = createNode("LineSet");
LineSet1127.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1128 = createNode("ColorRGBA");
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA";
LineSet1127.color = ColorRGBA1128;

Coordinate Coordinate1129 = createNode("Coordinate");
Coordinate1129.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1127.coord = Coordinate1129;

Shape1126.geometry = LineSet1127;

HAnimSegment1122.children[2] = Shape1126;

HAnimJoint1121.children = new MFNode();

HAnimJoint1121.children[0] = HAnimSegment1122;

HAnimJoint HAnimJoint1130 = createNode("HAnimJoint");
HAnimJoint1130.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1130.name = "l_metacarpophalangeal_3";
HAnimJoint1130.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment1131 = createNode("HAnimSegment");
HAnimSegment1131.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment1131.name = "l_carpal_proximal_phalanx_3";
TouchSensor TouchSensor1132 = createNode("TouchSensor");
TouchSensor1132.description = "HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3";
HAnimSegment1131.children = new MFNode();

HAnimSegment1131.children[0] = TouchSensor1132;

Transform Transform1133 = createNode("Transform");
Transform1133.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape1134 = createNode("Shape");
Shape1134.USE = "HAnimJointShape";
Transform1133.child = new undefined();

Transform1133.child[0] = Shape1134;

HAnimSegment1131.children[1] = Transform1133;

Shape Shape1135 = createNode("Shape");
LineSet LineSet1136 = createNode("LineSet");
LineSet1136.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1137 = createNode("ColorRGBA");
ColorRGBA1137.USE = "HAnimSegmentLineColorRGBA";
LineSet1136.color = ColorRGBA1137;

Coordinate Coordinate1138 = createNode("Coordinate");
Coordinate1138.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1136.coord = Coordinate1138;

Shape1135.geometry = LineSet1136;

HAnimSegment1131.children[2] = Shape1135;

HAnimJoint1130.children = new MFNode();

HAnimJoint1130.children[0] = HAnimSegment1131;

HAnimJoint HAnimJoint1139 = createNode("HAnimJoint");
HAnimJoint1139.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1139.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1139.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment1140 = createNode("HAnimSegment");
HAnimSegment1140.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment1140.name = "l_carpal_middle_phalanx_3";
TouchSensor TouchSensor1141 = createNode("TouchSensor");
TouchSensor1141.description = "HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3";
HAnimSegment1140.children = new MFNode();

HAnimSegment1140.children[0] = TouchSensor1141;

Transform Transform1142 = createNode("Transform");
Transform1142.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape1143 = createNode("Shape");
Shape1143.USE = "HAnimJointShape";
Transform1142.child = new undefined();

Transform1142.child[0] = Shape1143;

HAnimSegment1140.children[1] = Transform1142;

Shape Shape1144 = createNode("Shape");
LineSet LineSet1145 = createNode("LineSet");
LineSet1145.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1146 = createNode("ColorRGBA");
ColorRGBA1146.USE = "HAnimSegmentLineColorRGBA";
LineSet1145.color = ColorRGBA1146;

Coordinate Coordinate1147 = createNode("Coordinate");
Coordinate1147.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1145.coord = Coordinate1147;

Shape1144.geometry = LineSet1145;

HAnimSegment1140.children[2] = Shape1144;

HAnimJoint1139.children = new MFNode();

HAnimJoint1139.children[0] = HAnimSegment1140;

HAnimJoint HAnimJoint1148 = createNode("HAnimJoint");
HAnimJoint1148.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1148.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1148.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimSegment HAnimSegment1149 = createNode("HAnimSegment");
HAnimSegment1149.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimSegment1149.name = "l_carpal_distal_phalanx_3";
TouchSensor TouchSensor1150 = createNode("TouchSensor");
TouchSensor1150.description = "HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3";
HAnimSegment1149.children = new MFNode();

HAnimSegment1149.children[0] = TouchSensor1150;

Transform Transform1151 = createNode("Transform");
Transform1151.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape1152 = createNode("Shape");
Shape1152.USE = "HAnimJointShape";
Transform1151.child = new undefined();

Transform1151.child[0] = Shape1152;

HAnimSegment1149.children[1] = Transform1151;

Shape Shape1153 = createNode("Shape");
LineSet LineSet1154 = createNode("LineSet");
LineSet1154.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1155 = createNode("ColorRGBA");
ColorRGBA1155.USE = "HAnimSiteLineColorRGBA";
LineSet1154.color = ColorRGBA1155;

Coordinate Coordinate1156 = createNode("Coordinate");
Coordinate1156.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1154.coord = Coordinate1156;

Shape1153.geometry = LineSet1154;

HAnimSegment1149.children[2] = Shape1153;

HAnimSite HAnimSite1157 = createNode("HAnimSite");
HAnimSite1157.DEF = "hanim_l_carpal_distal_phalanx_3_pt";
HAnimSite1157.name = "l_carpal_distal_phalanx_3_pt";
HAnimSite1157.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
TouchSensor TouchSensor1158 = createNode("TouchSensor");
TouchSensor1158.description = "HAnimSite l_middle_distal_tip";
HAnimSite1157.children = new MFNode();

HAnimSite1157.children[0] = TouchSensor1158;

Shape Shape1159 = createNode("Shape");
Shape1159.USE = "HAnimSiteShape";
HAnimSite1157.children[1] = Shape1159;

HAnimSegment1149.children[3] = HAnimSite1157;

HAnimJoint1148.children = new MFNode();

HAnimJoint1148.children[0] = HAnimSegment1149;

HAnimJoint1139.children[1] = HAnimJoint1148;

HAnimJoint1130.children[1] = HAnimJoint1139;

HAnimJoint1121.children[1] = HAnimJoint1130;

HAnimJoint987.children[3] = HAnimJoint1121;

HAnimJoint HAnimJoint1160 = createNode("HAnimJoint");
HAnimJoint1160.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1160.name = "l_carpometacarpal_4";
HAnimJoint1160.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment1161 = createNode("HAnimSegment");
HAnimSegment1161.DEF = "hanim_l_metacarpal_4";
HAnimSegment1161.name = "l_metacarpal_4";
TouchSensor TouchSensor1162 = createNode("TouchSensor");
TouchSensor1162.description = "HAnimJoint l_ring0, HAnimSegment l_metacarpal_4";
HAnimSegment1161.children = new MFNode();

HAnimSegment1161.children[0] = TouchSensor1162;

Transform Transform1163 = createNode("Transform");
Transform1163.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape1164 = createNode("Shape");
Shape1164.USE = "HAnimJointShape";
Transform1163.child = new undefined();

Transform1163.child[0] = Shape1164;

HAnimSegment1161.children[1] = Transform1163;

Shape Shape1165 = createNode("Shape");
LineSet LineSet1166 = createNode("LineSet");
LineSet1166.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1167 = createNode("ColorRGBA");
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA";
LineSet1166.color = ColorRGBA1167;

Coordinate Coordinate1168 = createNode("Coordinate");
Coordinate1168.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1166.coord = Coordinate1168;

Shape1165.geometry = LineSet1166;

HAnimSegment1161.children[2] = Shape1165;

HAnimJoint1160.children = new MFNode();

HAnimJoint1160.children[0] = HAnimSegment1161;

HAnimJoint HAnimJoint1169 = createNode("HAnimJoint");
HAnimJoint1169.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1169.name = "l_metacarpophalangeal_4";
HAnimJoint1169.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment1170 = createNode("HAnimSegment");
HAnimSegment1170.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment1170.name = "l_carpal_proximal_phalanx_4";
TouchSensor TouchSensor1171 = createNode("TouchSensor");
TouchSensor1171.description = "HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4";
HAnimSegment1170.children = new MFNode();

HAnimSegment1170.children[0] = TouchSensor1171;

Transform Transform1172 = createNode("Transform");
Transform1172.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape1173 = createNode("Shape");
Shape1173.USE = "HAnimJointShape";
Transform1172.child = new undefined();

Transform1172.child[0] = Shape1173;

HAnimSegment1170.children[1] = Transform1172;

Shape Shape1174 = createNode("Shape");
LineSet LineSet1175 = createNode("LineSet");
LineSet1175.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1176 = createNode("ColorRGBA");
ColorRGBA1176.USE = "HAnimSegmentLineColorRGBA";
LineSet1175.color = ColorRGBA1176;

Coordinate Coordinate1177 = createNode("Coordinate");
Coordinate1177.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1175.coord = Coordinate1177;

Shape1174.geometry = LineSet1175;

HAnimSegment1170.children[2] = Shape1174;

HAnimJoint1169.children = new MFNode();

HAnimJoint1169.children[0] = HAnimSegment1170;

HAnimJoint HAnimJoint1178 = createNode("HAnimJoint");
HAnimJoint1178.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1178.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1178.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment1179 = createNode("HAnimSegment");
HAnimSegment1179.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment1179.name = "l_carpal_middle_phalanx_4";
TouchSensor TouchSensor1180 = createNode("TouchSensor");
TouchSensor1180.description = "HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4";
HAnimSegment1179.children = new MFNode();

HAnimSegment1179.children[0] = TouchSensor1180;

Transform Transform1181 = createNode("Transform");
Transform1181.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape1182 = createNode("Shape");
Shape1182.USE = "HAnimJointShape";
Transform1181.child = new undefined();

Transform1181.child[0] = Shape1182;

HAnimSegment1179.children[1] = Transform1181;

Shape Shape1183 = createNode("Shape");
LineSet LineSet1184 = createNode("LineSet");
LineSet1184.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1185 = createNode("ColorRGBA");
ColorRGBA1185.USE = "HAnimSegmentLineColorRGBA";
LineSet1184.color = ColorRGBA1185;

Coordinate Coordinate1186 = createNode("Coordinate");
Coordinate1186.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1184.coord = Coordinate1186;

Shape1183.geometry = LineSet1184;

HAnimSegment1179.children[2] = Shape1183;

HAnimJoint1178.children = new MFNode();

HAnimJoint1178.children[0] = HAnimSegment1179;

HAnimJoint HAnimJoint1187 = createNode("HAnimJoint");
HAnimJoint1187.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1187.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1187.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimSegment HAnimSegment1188 = createNode("HAnimSegment");
HAnimSegment1188.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimSegment1188.name = "l_carpal_distal_phalanx_4";
TouchSensor TouchSensor1189 = createNode("TouchSensor");
TouchSensor1189.description = "HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4";
HAnimSegment1188.children = new MFNode();

HAnimSegment1188.children[0] = TouchSensor1189;

Transform Transform1190 = createNode("Transform");
Transform1190.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape1191 = createNode("Shape");
Shape1191.USE = "HAnimJointShape";
Transform1190.child = new undefined();

Transform1190.child[0] = Shape1191;

HAnimSegment1188.children[1] = Transform1190;

Shape Shape1192 = createNode("Shape");
LineSet LineSet1193 = createNode("LineSet");
LineSet1193.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1194 = createNode("ColorRGBA");
ColorRGBA1194.USE = "HAnimSiteLineColorRGBA";
LineSet1193.color = ColorRGBA1194;

Coordinate Coordinate1195 = createNode("Coordinate");
Coordinate1195.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1193.coord = Coordinate1195;

Shape1192.geometry = LineSet1193;

HAnimSegment1188.children[2] = Shape1192;

HAnimSite HAnimSite1196 = createNode("HAnimSite");
HAnimSite1196.DEF = "hanim_l_carpal_distal_phalanx_4_pt";
HAnimSite1196.name = "l_carpal_distal_phalanx_4_pt";
HAnimSite1196.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
TouchSensor TouchSensor1197 = createNode("TouchSensor");
TouchSensor1197.description = "HAnimSite l_ring_distal_tip";
HAnimSite1196.children = new MFNode();

HAnimSite1196.children[0] = TouchSensor1197;

Shape Shape1198 = createNode("Shape");
Shape1198.USE = "HAnimSiteShape";
HAnimSite1196.children[1] = Shape1198;

HAnimSegment1188.children[3] = HAnimSite1196;

HAnimJoint1187.children = new MFNode();

HAnimJoint1187.children[0] = HAnimSegment1188;

HAnimJoint1178.children[1] = HAnimJoint1187;

HAnimJoint1169.children[1] = HAnimJoint1178;

HAnimJoint1160.children[1] = HAnimJoint1169;

HAnimJoint987.children[4] = HAnimJoint1160;

HAnimJoint HAnimJoint1199 = createNode("HAnimJoint");
HAnimJoint1199.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1199.name = "l_carpometacarpal_5";
HAnimJoint1199.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment1200 = createNode("HAnimSegment");
HAnimSegment1200.DEF = "hanim_l_metacarpal_5";
HAnimSegment1200.name = "l_metacarpal_5";
TouchSensor TouchSensor1201 = createNode("TouchSensor");
TouchSensor1201.description = "HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5";
HAnimSegment1200.children = new MFNode();

HAnimSegment1200.children[0] = TouchSensor1201;

Transform Transform1202 = createNode("Transform");
Transform1202.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape1203 = createNode("Shape");
Shape1203.USE = "HAnimJointShape";
Transform1202.child = new undefined();

Transform1202.child[0] = Shape1203;

HAnimSegment1200.children[1] = Transform1202;

Shape Shape1204 = createNode("Shape");
LineSet LineSet1205 = createNode("LineSet");
LineSet1205.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1206 = createNode("ColorRGBA");
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA";
LineSet1205.color = ColorRGBA1206;

Coordinate Coordinate1207 = createNode("Coordinate");
Coordinate1207.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1205.coord = Coordinate1207;

Shape1204.geometry = LineSet1205;

HAnimSegment1200.children[2] = Shape1204;

HAnimJoint1199.children = new MFNode();

HAnimJoint1199.children[0] = HAnimSegment1200;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1208.name = "l_metacarpophalangeal_5";
HAnimJoint1208.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment1209 = createNode("HAnimSegment");
HAnimSegment1209.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment1209.name = "l_carpal_proximal_phalanx_5";
TouchSensor TouchSensor1210 = createNode("TouchSensor");
TouchSensor1210.description = "HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5";
HAnimSegment1209.children = new MFNode();

HAnimSegment1209.children[0] = TouchSensor1210;

Transform Transform1211 = createNode("Transform");
Transform1211.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape1212 = createNode("Shape");
Shape1212.USE = "HAnimJointShape";
Transform1211.child = new undefined();

Transform1211.child[0] = Shape1212;

HAnimSegment1209.children[1] = Transform1211;

Shape Shape1213 = createNode("Shape");
LineSet LineSet1214 = createNode("LineSet");
LineSet1214.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1215 = createNode("ColorRGBA");
ColorRGBA1215.USE = "HAnimSegmentLineColorRGBA";
LineSet1214.color = ColorRGBA1215;

Coordinate Coordinate1216 = createNode("Coordinate");
Coordinate1216.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1214.coord = Coordinate1216;

Shape1213.geometry = LineSet1214;

HAnimSegment1209.children[2] = Shape1213;

HAnimJoint1208.children = new MFNode();

HAnimJoint1208.children[0] = HAnimSegment1209;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1217.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1217.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment1218 = createNode("HAnimSegment");
HAnimSegment1218.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimSegment1218.name = "l_carpal_middle_phalanx_5";
TouchSensor TouchSensor1219 = createNode("TouchSensor");
TouchSensor1219.description = "HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5";
HAnimSegment1218.children = new MFNode();

HAnimSegment1218.children[0] = TouchSensor1219;

Transform Transform1220 = createNode("Transform");
Transform1220.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape1221 = createNode("Shape");
Shape1221.USE = "HAnimJointShape";
Transform1220.child = new undefined();

Transform1220.child[0] = Shape1221;

HAnimSegment1218.children[1] = Transform1220;

Shape Shape1222 = createNode("Shape");
LineSet LineSet1223 = createNode("LineSet");
LineSet1223.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1224 = createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSegmentLineColorRGBA";
LineSet1223.color = ColorRGBA1224;

Coordinate Coordinate1225 = createNode("Coordinate");
Coordinate1225.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1223.coord = Coordinate1225;

Shape1222.geometry = LineSet1223;

HAnimSegment1218.children[2] = Shape1222;

HAnimJoint1217.children = new MFNode();

HAnimJoint1217.children[0] = HAnimSegment1218;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1226.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1226.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimSegment HAnimSegment1227 = createNode("HAnimSegment");
HAnimSegment1227.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimSegment1227.name = "l_carpal_distal_phalanx_5";
TouchSensor TouchSensor1228 = createNode("TouchSensor");
TouchSensor1228.description = "HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5";
HAnimSegment1227.children = new MFNode();

HAnimSegment1227.children[0] = TouchSensor1228;

Transform Transform1229 = createNode("Transform");
Transform1229.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape1230 = createNode("Shape");
Shape1230.USE = "HAnimJointShape";
Transform1229.child = new undefined();

Transform1229.child[0] = Shape1230;

HAnimSegment1227.children[1] = Transform1229;

Shape Shape1231 = createNode("Shape");
LineSet LineSet1232 = createNode("LineSet");
LineSet1232.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1233 = createNode("ColorRGBA");
ColorRGBA1233.USE = "HAnimSiteLineColorRGBA";
LineSet1232.color = ColorRGBA1233;

Coordinate Coordinate1234 = createNode("Coordinate");
Coordinate1234.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1232.coord = Coordinate1234;

Shape1231.geometry = LineSet1232;

HAnimSegment1227.children[2] = Shape1231;

HAnimSite HAnimSite1235 = createNode("HAnimSite");
HAnimSite1235.DEF = "hanim_l_carpal_distal_phalanx_5_pt";
HAnimSite1235.name = "l_carpal_distal_phalanx_5_pt";
HAnimSite1235.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
TouchSensor TouchSensor1236 = createNode("TouchSensor");
TouchSensor1236.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1235.children = new MFNode();

HAnimSite1235.children[0] = TouchSensor1236;

Shape Shape1237 = createNode("Shape");
Shape1237.USE = "HAnimSiteShape";
HAnimSite1235.children[1] = Shape1237;

HAnimSegment1227.children[3] = HAnimSite1235;

HAnimJoint1226.children = new MFNode();

HAnimJoint1226.children[0] = HAnimSegment1227;

HAnimJoint1217.children[1] = HAnimJoint1226;

HAnimJoint1208.children[1] = HAnimJoint1217;

HAnimJoint1199.children[1] = HAnimJoint1208;

HAnimJoint987.children[5] = HAnimJoint1199;

HAnimJoint950.children[1] = HAnimJoint987;

HAnimJoint934.children[1] = HAnimJoint950;

HAnimJoint925.children[1] = HAnimJoint934;

HAnimJoint888.children[1] = HAnimJoint925;

HAnimJoint600.children[2] = HAnimJoint888;

HAnimJoint HAnimJoint1238 = createNode("HAnimJoint");
HAnimJoint1238.DEF = "hanim_r_sternoclavicular";
HAnimJoint1238.name = "r_sternoclavicular";
HAnimJoint1238.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment1239 = createNode("HAnimSegment");
HAnimSegment1239.DEF = "hanim_r_clavicle";
HAnimSegment1239.name = "r_clavicle";
TouchSensor TouchSensor1240 = createNode("TouchSensor");
TouchSensor1240.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1239.children = new MFNode();

HAnimSegment1239.children[0] = TouchSensor1240;

Transform Transform1241 = createNode("Transform");
Transform1241.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
Shape Shape1242 = createNode("Shape");
Shape1242.USE = "HAnimJointShape";
Transform1241.child = new undefined();

Transform1241.child[0] = Shape1242;

HAnimSegment1239.children[1] = Transform1241;

Shape Shape1243 = createNode("Shape");
LineSet LineSet1244 = createNode("LineSet");
LineSet1244.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1245 = createNode("ColorRGBA");
ColorRGBA1245.USE = "HAnimSegmentLineColorRGBA";
LineSet1244.color = ColorRGBA1245;

Coordinate Coordinate1246 = createNode("Coordinate");
Coordinate1246.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1244.coord = Coordinate1246;

Shape1243.geometry = LineSet1244;

HAnimSegment1239.children[2] = Shape1243;

Shape Shape1247 = createNode("Shape");
LineSet LineSet1248 = createNode("LineSet");
LineSet1248.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1249 = createNode("ColorRGBA");
ColorRGBA1249.USE = "HAnimSiteLineColorRGBA";
LineSet1248.color = ColorRGBA1249;

Coordinate Coordinate1250 = createNode("Coordinate");
Coordinate1250.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1248.coord = Coordinate1250;

Shape1247.geometry = LineSet1248;

HAnimSegment1239.children[3] = Shape1247;

Shape Shape1251 = createNode("Shape");
LineSet LineSet1252 = createNode("LineSet");
LineSet1252.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1253 = createNode("ColorRGBA");
ColorRGBA1253.USE = "HAnimSiteLineColorRGBA";
LineSet1252.color = ColorRGBA1253;

Coordinate Coordinate1254 = createNode("Coordinate");
Coordinate1254.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1252.coord = Coordinate1254;

Shape1251.geometry = LineSet1252;

HAnimSegment1239.children[4] = Shape1251;

Shape Shape1255 = createNode("Shape");
LineSet LineSet1256 = createNode("LineSet");
LineSet1256.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1257 = createNode("ColorRGBA");
ColorRGBA1257.USE = "HAnimSiteLineColorRGBA";
LineSet1256.color = ColorRGBA1257;

Coordinate Coordinate1258 = createNode("Coordinate");
Coordinate1258.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1256.coord = Coordinate1258;

Shape1255.geometry = LineSet1256;

HAnimSegment1239.children[5] = Shape1255;

Shape Shape1259 = createNode("Shape");
LineSet LineSet1260 = createNode("LineSet");
LineSet1260.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1261 = createNode("ColorRGBA");
ColorRGBA1261.USE = "HAnimSiteLineColorRGBA";
LineSet1260.color = ColorRGBA1261;

Coordinate Coordinate1262 = createNode("Coordinate");
Coordinate1262.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1260.coord = Coordinate1262;

Shape1259.geometry = LineSet1260;

HAnimSegment1239.children[6] = Shape1259;

HAnimSite HAnimSite1263 = createNode("HAnimSite");
HAnimSite1263.DEF = "hanim_r_clavicle_pt";
HAnimSite1263.name = "r_clavicle_pt";
HAnimSite1263.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor1264 = createNode("TouchSensor");
TouchSensor1264.description = "HAnimSite r_clavicale_pt";
HAnimSite1263.children = new MFNode();

HAnimSite1263.children[0] = TouchSensor1264;

Shape Shape1265 = createNode("Shape");
Shape1265.USE = "HAnimSiteShape";
HAnimSite1263.children[1] = Shape1265;

HAnimSegment1239.children[7] = HAnimSite1263;

HAnimSite HAnimSite1266 = createNode("HAnimSite");
HAnimSite1266.DEF = "hanim_r_acromion_pt";
HAnimSite1266.name = "r_acromion_pt";
HAnimSite1266.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor1267 = createNode("TouchSensor");
TouchSensor1267.description = "HAnimSite r_acromion_pt";
HAnimSite1266.children = new MFNode();

HAnimSite1266.children[0] = TouchSensor1267;

Shape Shape1268 = createNode("Shape");
Shape1268.USE = "HAnimSiteShape";
HAnimSite1266.children[1] = Shape1268;

HAnimSegment1239.children[8] = HAnimSite1266;

HAnimSite HAnimSite1269 = createNode("HAnimSite");
HAnimSite1269.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite1269.name = "r_axilla_proximal_pt";
HAnimSite1269.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor1270 = createNode("TouchSensor");
TouchSensor1270.description = "HAnimSite r_axilla_ant_pt";
HAnimSite1269.children = new MFNode();

HAnimSite1269.children[0] = TouchSensor1270;

Shape Shape1271 = createNode("Shape");
Shape1271.USE = "HAnimSiteShape";
HAnimSite1269.children[1] = Shape1271;

HAnimSegment1239.children[9] = HAnimSite1269;

HAnimSite HAnimSite1272 = createNode("HAnimSite");
HAnimSite1272.DEF = "hanim_r_axilla_distal_pt";
HAnimSite1272.name = "r_axilla_distal_pt";
HAnimSite1272.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor1273 = createNode("TouchSensor");
TouchSensor1273.description = "HAnimSite r_axilla_post_pt";
HAnimSite1272.children = new MFNode();

HAnimSite1272.children[0] = TouchSensor1273;

Shape Shape1274 = createNode("Shape");
Shape1274.USE = "HAnimSiteShape";
HAnimSite1272.children[1] = Shape1274;

HAnimSegment1239.children[10] = HAnimSite1272;

HAnimJoint1238.children = new MFNode();

HAnimJoint1238.children[0] = HAnimSegment1239;

HAnimJoint HAnimJoint1275 = createNode("HAnimJoint");
HAnimJoint1275.DEF = "hanim_r_acromioclavicular";
HAnimJoint1275.name = "r_acromioclavicular";
HAnimJoint1275.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment1276 = createNode("HAnimSegment");
HAnimSegment1276.DEF = "hanim_r_scapula";
HAnimSegment1276.name = "r_scapula";
TouchSensor TouchSensor1277 = createNode("TouchSensor");
TouchSensor1277.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1276.children = new MFNode();

HAnimSegment1276.children[0] = TouchSensor1277;

Transform Transform1278 = createNode("Transform");
Transform1278.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
Shape Shape1279 = createNode("Shape");
Shape1279.USE = "HAnimJointShape";
Transform1278.child = new undefined();

Transform1278.child[0] = Shape1279;

HAnimSegment1276.children[1] = Transform1278;

Shape Shape1280 = createNode("Shape");
LineSet LineSet1281 = createNode("LineSet");
LineSet1281.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1282 = createNode("ColorRGBA");
ColorRGBA1282.USE = "HAnimSegmentLineColorRGBA";
LineSet1281.color = ColorRGBA1282;

Coordinate Coordinate1283 = createNode("Coordinate");
Coordinate1283.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1281.coord = Coordinate1283;

Shape1280.geometry = LineSet1281;

HAnimSegment1276.children[2] = Shape1280;

HAnimJoint1275.children = new MFNode();

HAnimJoint1275.children[0] = HAnimSegment1276;

HAnimJoint HAnimJoint1284 = createNode("HAnimJoint");
HAnimJoint1284.DEF = "hanim_r_shoulder";
HAnimJoint1284.name = "r_shoulder";
HAnimJoint1284.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment1285 = createNode("HAnimSegment");
HAnimSegment1285.DEF = "hanim_r_upperarm";
HAnimSegment1285.name = "r_upperarm";
TouchSensor TouchSensor1286 = createNode("TouchSensor");
TouchSensor1286.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1285.children = new MFNode();

HAnimSegment1285.children[0] = TouchSensor1286;

Transform Transform1287 = createNode("Transform");
Transform1287.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
Shape Shape1288 = createNode("Shape");
Shape1288.USE = "HAnimJointShape";
Transform1287.child = new undefined();

Transform1287.child[0] = Shape1288;

HAnimSegment1285.children[1] = Transform1287;

Shape Shape1289 = createNode("Shape");
LineSet LineSet1290 = createNode("LineSet");
LineSet1290.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1291 = createNode("ColorRGBA");
ColorRGBA1291.USE = "HAnimSegmentLineColorRGBA";
LineSet1290.color = ColorRGBA1291;

Coordinate Coordinate1292 = createNode("Coordinate");
Coordinate1292.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1290.coord = Coordinate1292;

Shape1289.geometry = LineSet1290;

HAnimSegment1285.children[2] = Shape1289;

Shape Shape1293 = createNode("Shape");
LineSet LineSet1294 = createNode("LineSet");
LineSet1294.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1295 = createNode("ColorRGBA");
ColorRGBA1295.USE = "HAnimSiteLineColorRGBA";
LineSet1294.color = ColorRGBA1295;

Coordinate Coordinate1296 = createNode("Coordinate");
Coordinate1296.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1294.coord = Coordinate1296;

Shape1293.geometry = LineSet1294;

HAnimSegment1285.children[3] = Shape1293;

HAnimSite HAnimSite1297 = createNode("HAnimSite");
HAnimSite1297.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite1297.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite1297.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1298 = createNode("TouchSensor");
TouchSensor1298.description = "HAnimSite r_humeral_lateral_epicn_pt";
HAnimSite1297.children = new MFNode();

HAnimSite1297.children[0] = TouchSensor1298;

Shape Shape1299 = createNode("Shape");
Shape1299.USE = "HAnimSiteShape";
HAnimSite1297.children[1] = Shape1299;

HAnimSegment1285.children[4] = HAnimSite1297;

HAnimJoint1284.children = new MFNode();

HAnimJoint1284.children[0] = HAnimSegment1285;

HAnimJoint HAnimJoint1300 = createNode("HAnimJoint");
HAnimJoint1300.DEF = "hanim_r_elbow";
HAnimJoint1300.name = "r_elbow";
HAnimJoint1300.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment1301 = createNode("HAnimSegment");
HAnimSegment1301.DEF = "hanim_r_forearm";
HAnimSegment1301.name = "r_forearm";
TouchSensor TouchSensor1302 = createNode("TouchSensor");
TouchSensor1302.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1301.children = new MFNode();

HAnimSegment1301.children[0] = TouchSensor1302;

Transform Transform1303 = createNode("Transform");
Transform1303.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
Shape Shape1304 = createNode("Shape");
Shape1304.USE = "HAnimJointShape";
Transform1303.child = new undefined();

Transform1303.child[0] = Shape1304;

HAnimSegment1301.children[1] = Transform1303;

Shape Shape1305 = createNode("Shape");
LineSet LineSet1306 = createNode("LineSet");
LineSet1306.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1307 = createNode("ColorRGBA");
ColorRGBA1307.USE = "HAnimSegmentLineColorRGBA";
LineSet1306.color = ColorRGBA1307;

Coordinate Coordinate1308 = createNode("Coordinate");
Coordinate1308.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1306.coord = Coordinate1308;

Shape1305.geometry = LineSet1306;

HAnimSegment1301.children[2] = Shape1305;

Shape Shape1309 = createNode("Shape");
LineSet LineSet1310 = createNode("LineSet");
LineSet1310.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1311 = createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSiteLineColorRGBA";
LineSet1310.color = ColorRGBA1311;

Coordinate Coordinate1312 = createNode("Coordinate");
Coordinate1312.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1310.coord = Coordinate1312;

Shape1309.geometry = LineSet1310;

HAnimSegment1301.children[3] = Shape1309;

Shape Shape1313 = createNode("Shape");
LineSet LineSet1314 = createNode("LineSet");
LineSet1314.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1315 = createNode("ColorRGBA");
ColorRGBA1315.USE = "HAnimSiteLineColorRGBA";
LineSet1314.color = ColorRGBA1315;

Coordinate Coordinate1316 = createNode("Coordinate");
Coordinate1316.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1314.coord = Coordinate1316;

Shape1313.geometry = LineSet1314;

HAnimSegment1301.children[4] = Shape1313;

Shape Shape1317 = createNode("Shape");
LineSet LineSet1318 = createNode("LineSet");
LineSet1318.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1319 = createNode("ColorRGBA");
ColorRGBA1319.USE = "HAnimSiteLineColorRGBA";
LineSet1318.color = ColorRGBA1319;

Coordinate Coordinate1320 = createNode("Coordinate");
Coordinate1320.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1318.coord = Coordinate1320;

Shape1317.geometry = LineSet1318;

HAnimSegment1301.children[5] = Shape1317;

Shape Shape1321 = createNode("Shape");
LineSet LineSet1322 = createNode("LineSet");
LineSet1322.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1323 = createNode("ColorRGBA");
ColorRGBA1323.USE = "HAnimSiteLineColorRGBA";
LineSet1322.color = ColorRGBA1323;

Coordinate Coordinate1324 = createNode("Coordinate");
Coordinate1324.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1322.coord = Coordinate1324;

Shape1321.geometry = LineSet1322;

HAnimSegment1301.children[6] = Shape1321;

HAnimSite HAnimSite1325 = createNode("HAnimSite");
HAnimSite1325.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1325.name = "r_radial_styloid_pt";
HAnimSite1325.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1326 = createNode("TouchSensor");
TouchSensor1326.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1325.children = new MFNode();

HAnimSite1325.children[0] = TouchSensor1326;

Shape Shape1327 = createNode("Shape");
Shape1327.USE = "HAnimSiteShape";
HAnimSite1325.children[1] = Shape1327;

HAnimSegment1301.children[7] = HAnimSite1325;

HAnimSite HAnimSite1328 = createNode("HAnimSite");
HAnimSite1328.DEF = "hanim_r_olecranon_pt";
HAnimSite1328.name = "r_olecranon_pt";
HAnimSite1328.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1329 = createNode("TouchSensor");
TouchSensor1329.description = "HAnimSite r_olecranon_pt";
HAnimSite1328.children = new MFNode();

HAnimSite1328.children[0] = TouchSensor1329;

Shape Shape1330 = createNode("Shape");
Shape1330.USE = "HAnimSiteShape";
HAnimSite1328.children[1] = Shape1330;

HAnimSegment1301.children[8] = HAnimSite1328;

HAnimSite HAnimSite1331 = createNode("HAnimSite");
HAnimSite1331.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite1331.name = "r_humeral_medial_epicondyle_pt";
HAnimSite1331.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1332 = createNode("TouchSensor");
TouchSensor1332.description = "HAnimSite r_humeral_medial_epicn_pt";
HAnimSite1331.children = new MFNode();

HAnimSite1331.children[0] = TouchSensor1332;

Shape Shape1333 = createNode("Shape");
Shape1333.USE = "HAnimSiteShape";
HAnimSite1331.children[1] = Shape1333;

HAnimSegment1301.children[9] = HAnimSite1331;

HAnimSite HAnimSite1334 = createNode("HAnimSite");
HAnimSite1334.DEF = "hanim_r_radiale_pt";
HAnimSite1334.name = "r_radiale_pt";
HAnimSite1334.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1335 = createNode("TouchSensor");
TouchSensor1335.description = "HAnimSite r_radiale_pt";
HAnimSite1334.children = new MFNode();

HAnimSite1334.children[0] = TouchSensor1335;

Shape Shape1336 = createNode("Shape");
Shape1336.USE = "HAnimSiteShape";
HAnimSite1334.children[1] = Shape1336;

HAnimSegment1301.children[10] = HAnimSite1334;

HAnimJoint1300.children = new MFNode();

HAnimJoint1300.children[0] = HAnimSegment1301;

HAnimJoint HAnimJoint1337 = createNode("HAnimJoint");
HAnimJoint1337.DEF = "hanim_r_radiocarpal";
HAnimJoint1337.name = "r_radiocarpal";
HAnimJoint1337.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment1338 = createNode("HAnimSegment");
HAnimSegment1338.DEF = "hanim_r_carpal";
HAnimSegment1338.name = "r_carpal";
TouchSensor TouchSensor1339 = createNode("TouchSensor");
TouchSensor1339.description = "HAnimJoint r_radiocarpal, HAnimSegment r_carpal";
HAnimSegment1338.children = new MFNode();

HAnimSegment1338.children[0] = TouchSensor1339;

Transform Transform1340 = createNode("Transform");
Transform1340.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
Shape Shape1341 = createNode("Shape");
Shape1341.USE = "HAnimJointShape";
Transform1340.child = new undefined();

Transform1340.child[0] = Shape1341;

HAnimSegment1338.children[1] = Transform1340;

Shape Shape1342 = createNode("Shape");
LineSet LineSet1343 = createNode("LineSet");
LineSet1343.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1344 = createNode("ColorRGBA");
ColorRGBA1344.USE = "HAnimSegmentLineColorRGBA";
LineSet1343.color = ColorRGBA1344;

Coordinate Coordinate1345 = createNode("Coordinate");
Coordinate1345.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1343.coord = Coordinate1345;

Shape1342.geometry = LineSet1343;

HAnimSegment1338.children[2] = Shape1342;

Shape Shape1346 = createNode("Shape");
LineSet LineSet1347 = createNode("LineSet");
LineSet1347.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1348 = createNode("ColorRGBA");
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA";
LineSet1347.color = ColorRGBA1348;

Coordinate Coordinate1349 = createNode("Coordinate");
Coordinate1349.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1347.coord = Coordinate1349;

Shape1346.geometry = LineSet1347;

HAnimSegment1338.children[3] = Shape1346;

Shape Shape1350 = createNode("Shape");
LineSet LineSet1351 = createNode("LineSet");
LineSet1351.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1352 = createNode("ColorRGBA");
ColorRGBA1352.USE = "HAnimSegmentLineColorRGBA";
LineSet1351.color = ColorRGBA1352;

Coordinate Coordinate1353 = createNode("Coordinate");
Coordinate1353.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1351.coord = Coordinate1353;

Shape1350.geometry = LineSet1351;

HAnimSegment1338.children[4] = Shape1350;

Shape Shape1354 = createNode("Shape");
LineSet LineSet1355 = createNode("LineSet");
LineSet1355.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1356 = createNode("ColorRGBA");
ColorRGBA1356.USE = "HAnimSegmentLineColorRGBA";
LineSet1355.color = ColorRGBA1356;

Coordinate Coordinate1357 = createNode("Coordinate");
Coordinate1357.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1355.coord = Coordinate1357;

Shape1354.geometry = LineSet1355;

HAnimSegment1338.children[5] = Shape1354;

Shape Shape1358 = createNode("Shape");
LineSet LineSet1359 = createNode("LineSet");
LineSet1359.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1360 = createNode("ColorRGBA");
ColorRGBA1360.USE = "HAnimSegmentLineColorRGBA";
LineSet1359.color = ColorRGBA1360;

Coordinate Coordinate1361 = createNode("Coordinate");
Coordinate1361.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1359.coord = Coordinate1361;

Shape1358.geometry = LineSet1359;

HAnimSegment1338.children[6] = Shape1358;

Shape Shape1362 = createNode("Shape");
LineSet LineSet1363 = createNode("LineSet");
LineSet1363.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1364 = createNode("ColorRGBA");
ColorRGBA1364.USE = "HAnimSiteLineColorRGBA";
LineSet1363.color = ColorRGBA1364;

Coordinate Coordinate1365 = createNode("Coordinate");
Coordinate1365.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1363.coord = Coordinate1365;

Shape1362.geometry = LineSet1363;

HAnimSegment1338.children[7] = Shape1362;

Shape Shape1366 = createNode("Shape");
LineSet LineSet1367 = createNode("LineSet");
LineSet1367.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1368 = createNode("ColorRGBA");
ColorRGBA1368.USE = "HAnimSiteLineColorRGBA";
LineSet1367.color = ColorRGBA1368;

Coordinate Coordinate1369 = createNode("Coordinate");
Coordinate1369.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1367.coord = Coordinate1369;

Shape1366.geometry = LineSet1367;

HAnimSegment1338.children[8] = Shape1366;

Shape Shape1370 = createNode("Shape");
LineSet LineSet1371 = createNode("LineSet");
LineSet1371.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1372 = createNode("ColorRGBA");
ColorRGBA1372.USE = "HAnimSiteLineColorRGBA";
LineSet1371.color = ColorRGBA1372;

Coordinate Coordinate1373 = createNode("Coordinate");
Coordinate1373.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1371.coord = Coordinate1373;

Shape1370.geometry = LineSet1371;

HAnimSegment1338.children[9] = Shape1370;

Shape Shape1374 = createNode("Shape");
LineSet LineSet1375 = createNode("LineSet");
LineSet1375.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1376 = createNode("ColorRGBA");
ColorRGBA1376.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1375.color = ColorRGBA1376;

Coordinate Coordinate1377 = createNode("Coordinate");
Coordinate1377.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1375.coord = Coordinate1377;

Shape1374.geometry = LineSet1375;

HAnimSegment1338.children[10] = Shape1374;

HAnimSite HAnimSite1378 = createNode("HAnimSite");
HAnimSite1378.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1378.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1378.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1379 = createNode("TouchSensor");
TouchSensor1379.description = "HAnimSite r_metacarpal_pha2_pt";
HAnimSite1378.children = new MFNode();

HAnimSite1378.children[0] = TouchSensor1379;

Shape Shape1380 = createNode("Shape");
Shape1380.USE = "HAnimSiteShape";
HAnimSite1378.children[1] = Shape1380;

HAnimSegment1338.children[11] = HAnimSite1378;

HAnimSite HAnimSite1381 = createNode("HAnimSite");
HAnimSite1381.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1381.name = "r_ulnar_styloid_pt";
HAnimSite1381.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1382 = createNode("TouchSensor");
TouchSensor1382.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1381.children = new MFNode();

HAnimSite1381.children[0] = TouchSensor1382;

Shape Shape1383 = createNode("Shape");
Shape1383.USE = "HAnimSiteShape";
HAnimSite1381.children[1] = Shape1383;

HAnimSegment1338.children[12] = HAnimSite1381;

HAnimSite HAnimSite1384 = createNode("HAnimSite");
HAnimSite1384.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1384.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1384.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1385 = createNode("TouchSensor");
TouchSensor1385.description = "HAnimSite r_metacarpal_pha5_pt";
HAnimSite1384.children = new MFNode();

HAnimSite1384.children[0] = TouchSensor1385;

Shape Shape1386 = createNode("Shape");
Shape1386.USE = "HAnimSiteShape";
HAnimSite1384.children[1] = Shape1386;

HAnimSegment1338.children[13] = HAnimSite1384;

HAnimSite HAnimSite1387 = createNode("HAnimSite");
HAnimSite1387.DEF = "hanim_r_hand_front_view";
HAnimSite1387.name = "r_hand_front_view";
HAnimSite1387.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
TouchSensor TouchSensor1388 = createNode("TouchSensor");
TouchSensor1388.description = "HAnimSite r_hand_front_view";
HAnimSite1387.children = new MFNode();

HAnimSite1387.children[0] = TouchSensor1388;

Shape Shape1389 = createNode("Shape");
Shape1389.USE = "HAnimSiteShape";
HAnimSite1387.children[1] = Shape1389;

Viewpoint Viewpoint1390 = createNode("Viewpoint");
Viewpoint1390.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1390.description = "right hand front";
Viewpoint1390.position = new SFVec3f(new float[0,0,0]);
Viewpoint1390.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
HAnimSite1387.children[2] = Viewpoint1390;

Anchor Anchor1391 = createNode("Anchor");
Anchor1391.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1391.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
LOD LOD1392 = createNode("LOD");
LOD1392.forceTransitions = True;
LOD1392.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1393 = createNode("WorldInfo");
WorldInfo1393.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1392.children = new MFNode();

LOD1392.children[0] = WorldInfo1393;

Shape Shape1394 = createNode("Shape");
Shape1394.USE = "HAnimSiteViewpointShape";
LOD1392.children[1] = Shape1394;

Anchor1391.children = new MFNode();

Anchor1391.children[0] = LOD1392;

HAnimSite1387.children[3] = Anchor1391;

HAnimSegment1338.children[14] = HAnimSite1387;

HAnimJoint1337.children = new MFNode();

HAnimJoint1337.children[0] = HAnimSegment1338;

HAnimJoint HAnimJoint1395 = createNode("HAnimJoint");
HAnimJoint1395.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1395.name = "r_carpometacarpal_1";
HAnimJoint1395.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment1396 = createNode("HAnimSegment");
HAnimSegment1396.DEF = "hanim_r_metacarpal_1";
HAnimSegment1396.name = "r_metacarpal_1";
TouchSensor TouchSensor1397 = createNode("TouchSensor");
TouchSensor1397.description = "HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1";
HAnimSegment1396.children = new MFNode();

HAnimSegment1396.children[0] = TouchSensor1397;

Transform Transform1398 = createNode("Transform");
Transform1398.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
Shape Shape1399 = createNode("Shape");
Shape1399.USE = "HAnimJointShape";
Transform1398.child = new undefined();

Transform1398.child[0] = Shape1399;

HAnimSegment1396.children[1] = Transform1398;

Shape Shape1400 = createNode("Shape");
LineSet LineSet1401 = createNode("LineSet");
LineSet1401.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1402 = createNode("ColorRGBA");
ColorRGBA1402.USE = "HAnimSegmentLineColorRGBA";
LineSet1401.color = ColorRGBA1402;

Coordinate Coordinate1403 = createNode("Coordinate");
Coordinate1403.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1401.coord = Coordinate1403;

Shape1400.geometry = LineSet1401;

HAnimSegment1396.children[2] = Shape1400;

HAnimJoint1395.children = new MFNode();

HAnimJoint1395.children[0] = HAnimSegment1396;

HAnimJoint HAnimJoint1404 = createNode("HAnimJoint");
HAnimJoint1404.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1404.name = "r_metacarpophalangeal_1";
HAnimJoint1404.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment1405 = createNode("HAnimSegment");
HAnimSegment1405.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment1405.name = "r_carpal_proximal_phalanx_1";
TouchSensor TouchSensor1406 = createNode("TouchSensor");
TouchSensor1406.description = "HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1";
HAnimSegment1405.children = new MFNode();

HAnimSegment1405.children[0] = TouchSensor1406;

Transform Transform1407 = createNode("Transform");
Transform1407.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
Shape Shape1408 = createNode("Shape");
Shape1408.USE = "HAnimJointShape";
Transform1407.child = new undefined();

Transform1407.child[0] = Shape1408;

HAnimSegment1405.children[1] = Transform1407;

Shape Shape1409 = createNode("Shape");
LineSet LineSet1410 = createNode("LineSet");
LineSet1410.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1411 = createNode("ColorRGBA");
ColorRGBA1411.USE = "HAnimSegmentLineColorRGBA";
LineSet1410.color = ColorRGBA1411;

Coordinate Coordinate1412 = createNode("Coordinate");
Coordinate1412.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1410.coord = Coordinate1412;

Shape1409.geometry = LineSet1410;

HAnimSegment1405.children[2] = Shape1409;

HAnimJoint1404.children = new MFNode();

HAnimJoint1404.children[0] = HAnimSegment1405;

HAnimJoint HAnimJoint1413 = createNode("HAnimJoint");
HAnimJoint1413.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1413.name = "r_carpal_interphalangeal_1";
HAnimJoint1413.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment1414 = createNode("HAnimSegment");
HAnimSegment1414.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimSegment1414.name = "r_carpal_distal_phalanx_1";
TouchSensor TouchSensor1415 = createNode("TouchSensor");
TouchSensor1415.description = "HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1";
HAnimSegment1414.children = new MFNode();

HAnimSegment1414.children[0] = TouchSensor1415;

Transform Transform1416 = createNode("Transform");
Transform1416.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
Shape Shape1417 = createNode("Shape");
Shape1417.USE = "HAnimJointShape";
Transform1416.child = new undefined();

Transform1416.child[0] = Shape1417;

HAnimSegment1414.children[1] = Transform1416;

Shape Shape1418 = createNode("Shape");
LineSet LineSet1419 = createNode("LineSet");
LineSet1419.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1420 = createNode("ColorRGBA");
ColorRGBA1420.USE = "HAnimSiteLineColorRGBA";
LineSet1419.color = ColorRGBA1420;

Coordinate Coordinate1421 = createNode("Coordinate");
Coordinate1421.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1419.coord = Coordinate1421;

Shape1418.geometry = LineSet1419;

HAnimSegment1414.children[2] = Shape1418;

HAnimSite HAnimSite1422 = createNode("HAnimSite");
HAnimSite1422.DEF = "hanim_r_carpal_distal_phalanx_1_pt";
HAnimSite1422.name = "r_carpal_distal_phalanx_1_pt";
HAnimSite1422.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
TouchSensor TouchSensor1423 = createNode("TouchSensor");
TouchSensor1423.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1422.children = new MFNode();

HAnimSite1422.children[0] = TouchSensor1423;

Shape Shape1424 = createNode("Shape");
Shape1424.USE = "HAnimSiteShape";
HAnimSite1422.children[1] = Shape1424;

HAnimSegment1414.children[3] = HAnimSite1422;

HAnimJoint1413.children = new MFNode();

HAnimJoint1413.children[0] = HAnimSegment1414;

HAnimJoint1404.children[1] = HAnimJoint1413;

HAnimJoint1395.children[1] = HAnimJoint1404;

HAnimJoint1337.children[1] = HAnimJoint1395;

HAnimJoint HAnimJoint1425 = createNode("HAnimJoint");
HAnimJoint1425.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1425.name = "r_carpometacarpal_2";
HAnimJoint1425.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment1426 = createNode("HAnimSegment");
HAnimSegment1426.DEF = "hanim_r_metacarpal_2";
HAnimSegment1426.name = "r_metacarpal_2";
TouchSensor TouchSensor1427 = createNode("TouchSensor");
TouchSensor1427.description = "HAnimJoint r_index0, HAnimSegment r_metacarpal_2";
HAnimSegment1426.children = new MFNode();

HAnimSegment1426.children[0] = TouchSensor1427;

Transform Transform1428 = createNode("Transform");
Transform1428.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
Shape Shape1429 = createNode("Shape");
Shape1429.USE = "HAnimJointShape";
Transform1428.child = new undefined();

Transform1428.child[0] = Shape1429;

HAnimSegment1426.children[1] = Transform1428;

Shape Shape1430 = createNode("Shape");
LineSet LineSet1431 = createNode("LineSet");
LineSet1431.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1432 = createNode("ColorRGBA");
ColorRGBA1432.USE = "HAnimSegmentLineColorRGBA";
LineSet1431.color = ColorRGBA1432;

Coordinate Coordinate1433 = createNode("Coordinate");
Coordinate1433.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1431.coord = Coordinate1433;

Shape1430.geometry = LineSet1431;

HAnimSegment1426.children[2] = Shape1430;

HAnimJoint1425.children = new MFNode();

HAnimJoint1425.children[0] = HAnimSegment1426;

HAnimJoint HAnimJoint1434 = createNode("HAnimJoint");
HAnimJoint1434.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1434.name = "r_metacarpophalangeal_2";
HAnimJoint1434.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment1435 = createNode("HAnimSegment");
HAnimSegment1435.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment1435.name = "r_carpal_proximal_phalanx_2";
TouchSensor TouchSensor1436 = createNode("TouchSensor");
TouchSensor1436.description = "HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2";
HAnimSegment1435.children = new MFNode();

HAnimSegment1435.children[0] = TouchSensor1436;

Transform Transform1437 = createNode("Transform");
Transform1437.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
Shape Shape1438 = createNode("Shape");
Shape1438.USE = "HAnimJointShape";
Transform1437.child = new undefined();

Transform1437.child[0] = Shape1438;

HAnimSegment1435.children[1] = Transform1437;

Shape Shape1439 = createNode("Shape");
LineSet LineSet1440 = createNode("LineSet");
LineSet1440.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1441 = createNode("ColorRGBA");
ColorRGBA1441.USE = "HAnimSegmentLineColorRGBA";
LineSet1440.color = ColorRGBA1441;

Coordinate Coordinate1442 = createNode("Coordinate");
Coordinate1442.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1440.coord = Coordinate1442;

Shape1439.geometry = LineSet1440;

HAnimSegment1435.children[2] = Shape1439;

HAnimJoint1434.children = new MFNode();

HAnimJoint1434.children[0] = HAnimSegment1435;

HAnimJoint HAnimJoint1443 = createNode("HAnimJoint");
HAnimJoint1443.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1443.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1443.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment1444 = createNode("HAnimSegment");
HAnimSegment1444.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment1444.name = "r_carpal_middle_phalanx_2";
TouchSensor TouchSensor1445 = createNode("TouchSensor");
TouchSensor1445.description = "HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2";
HAnimSegment1444.children = new MFNode();

HAnimSegment1444.children[0] = TouchSensor1445;

Transform Transform1446 = createNode("Transform");
Transform1446.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
Shape Shape1447 = createNode("Shape");
Shape1447.USE = "HAnimJointShape";
Transform1446.child = new undefined();

Transform1446.child[0] = Shape1447;

HAnimSegment1444.children[1] = Transform1446;

Shape Shape1448 = createNode("Shape");
LineSet LineSet1449 = createNode("LineSet");
LineSet1449.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1450 = createNode("ColorRGBA");
ColorRGBA1450.USE = "HAnimSegmentLineColorRGBA";
LineSet1449.color = ColorRGBA1450;

Coordinate Coordinate1451 = createNode("Coordinate");
Coordinate1451.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1449.coord = Coordinate1451;

Shape1448.geometry = LineSet1449;

HAnimSegment1444.children[2] = Shape1448;

HAnimJoint1443.children = new MFNode();

HAnimJoint1443.children[0] = HAnimSegment1444;

HAnimJoint HAnimJoint1452 = createNode("HAnimJoint");
HAnimJoint1452.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1452.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1452.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment1453 = createNode("HAnimSegment");
HAnimSegment1453.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimSegment1453.name = "r_carpal_distal_phalanx_2";
TouchSensor TouchSensor1454 = createNode("TouchSensor");
TouchSensor1454.description = "HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2";
HAnimSegment1453.children = new MFNode();

HAnimSegment1453.children[0] = TouchSensor1454;

Transform Transform1455 = createNode("Transform");
Transform1455.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
Shape Shape1456 = createNode("Shape");
Shape1456.USE = "HAnimJointShape";
Transform1455.child = new undefined();

Transform1455.child[0] = Shape1456;

HAnimSegment1453.children[1] = Transform1455;

Shape Shape1457 = createNode("Shape");
LineSet LineSet1458 = createNode("LineSet");
LineSet1458.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1459 = createNode("ColorRGBA");
ColorRGBA1459.USE = "HAnimSiteLineColorRGBA";
LineSet1458.color = ColorRGBA1459;

Coordinate Coordinate1460 = createNode("Coordinate");
Coordinate1460.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1458.coord = Coordinate1460;

Shape1457.geometry = LineSet1458;

HAnimSegment1453.children[2] = Shape1457;

Shape Shape1461 = createNode("Shape");
LineSet LineSet1462 = createNode("LineSet");
LineSet1462.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1463 = createNode("ColorRGBA");
ColorRGBA1463.USE = "HAnimSiteLineColorRGBA";
LineSet1462.color = ColorRGBA1463;

Coordinate Coordinate1464 = createNode("Coordinate");
Coordinate1464.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1462.coord = Coordinate1464;

Shape1461.geometry = LineSet1462;

HAnimSegment1453.children[3] = Shape1461;

HAnimSite HAnimSite1465 = createNode("HAnimSite");
HAnimSite1465.DEF = "hanim_r_carpal_distal_phalanx_2_pt";
HAnimSite1465.name = "r_carpal_distal_phalanx_2_pt";
HAnimSite1465.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
TouchSensor TouchSensor1466 = createNode("TouchSensor");
TouchSensor1466.description = "HAnimSite r_index_distal_tip";
HAnimSite1465.children = new MFNode();

HAnimSite1465.children[0] = TouchSensor1466;

Shape Shape1467 = createNode("Shape");
Shape1467.USE = "HAnimSiteShape";
HAnimSite1465.children[1] = Shape1467;

HAnimSegment1453.children[4] = HAnimSite1465;

HAnimSite HAnimSite1468 = createNode("HAnimSite");
HAnimSite1468.DEF = "hanim_r_dactylion_pt";
HAnimSite1468.name = "r_dactylion_pt";
HAnimSite1468.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1469 = createNode("TouchSensor");
TouchSensor1469.description = "HAnimSite r_dactylion_pt";
HAnimSite1468.children = new MFNode();

HAnimSite1468.children[0] = TouchSensor1469;

Shape Shape1470 = createNode("Shape");
Shape1470.USE = "HAnimSiteShape";
HAnimSite1468.children[1] = Shape1470;

HAnimSegment1453.children[5] = HAnimSite1468;

HAnimJoint1452.children = new MFNode();

HAnimJoint1452.children[0] = HAnimSegment1453;

HAnimJoint1443.children[1] = HAnimJoint1452;

HAnimJoint1434.children[1] = HAnimJoint1443;

HAnimJoint1425.children[1] = HAnimJoint1434;

HAnimJoint1337.children[2] = HAnimJoint1425;

HAnimJoint HAnimJoint1471 = createNode("HAnimJoint");
HAnimJoint1471.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1471.name = "r_carpometacarpal_3";
HAnimJoint1471.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment1472 = createNode("HAnimSegment");
HAnimSegment1472.DEF = "hanim_r_metacarpal_3";
HAnimSegment1472.name = "r_metacarpal_3";
TouchSensor TouchSensor1473 = createNode("TouchSensor");
TouchSensor1473.description = "HAnimJoint r_middle0, HAnimSegment r_metacarpal_3";
HAnimSegment1472.children = new MFNode();

HAnimSegment1472.children[0] = TouchSensor1473;

Transform Transform1474 = createNode("Transform");
Transform1474.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
Shape Shape1475 = createNode("Shape");
Shape1475.USE = "HAnimJointShape";
Transform1474.child = new undefined();

Transform1474.child[0] = Shape1475;

HAnimSegment1472.children[1] = Transform1474;

Shape Shape1476 = createNode("Shape");
LineSet LineSet1477 = createNode("LineSet");
LineSet1477.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1478 = createNode("ColorRGBA");
ColorRGBA1478.USE = "HAnimSegmentLineColorRGBA";
LineSet1477.color = ColorRGBA1478;

Coordinate Coordinate1479 = createNode("Coordinate");
Coordinate1479.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1477.coord = Coordinate1479;

Shape1476.geometry = LineSet1477;

HAnimSegment1472.children[2] = Shape1476;

HAnimJoint1471.children = new MFNode();

HAnimJoint1471.children[0] = HAnimSegment1472;

HAnimJoint HAnimJoint1480 = createNode("HAnimJoint");
HAnimJoint1480.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1480.name = "r_metacarpophalangeal_3";
HAnimJoint1480.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment1481 = createNode("HAnimSegment");
HAnimSegment1481.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment1481.name = "r_carpal_proximal_phalanx_3";
TouchSensor TouchSensor1482 = createNode("TouchSensor");
TouchSensor1482.description = "HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3";
HAnimSegment1481.children = new MFNode();

HAnimSegment1481.children[0] = TouchSensor1482;

Transform Transform1483 = createNode("Transform");
Transform1483.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
Shape Shape1484 = createNode("Shape");
Shape1484.USE = "HAnimJointShape";
Transform1483.child = new undefined();

Transform1483.child[0] = Shape1484;

HAnimSegment1481.children[1] = Transform1483;

Shape Shape1485 = createNode("Shape");
LineSet LineSet1486 = createNode("LineSet");
LineSet1486.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1487 = createNode("ColorRGBA");
ColorRGBA1487.USE = "HAnimSegmentLineColorRGBA";
LineSet1486.color = ColorRGBA1487;

Coordinate Coordinate1488 = createNode("Coordinate");
Coordinate1488.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1486.coord = Coordinate1488;

Shape1485.geometry = LineSet1486;

HAnimSegment1481.children[2] = Shape1485;

HAnimJoint1480.children = new MFNode();

HAnimJoint1480.children[0] = HAnimSegment1481;

HAnimJoint HAnimJoint1489 = createNode("HAnimJoint");
HAnimJoint1489.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1489.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1489.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment1490 = createNode("HAnimSegment");
HAnimSegment1490.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment1490.name = "r_carpal_middle_phalanx_3";
TouchSensor TouchSensor1491 = createNode("TouchSensor");
TouchSensor1491.description = "HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3";
HAnimSegment1490.children = new MFNode();

HAnimSegment1490.children[0] = TouchSensor1491;

Transform Transform1492 = createNode("Transform");
Transform1492.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
Shape Shape1493 = createNode("Shape");
Shape1493.USE = "HAnimJointShape";
Transform1492.child = new undefined();

Transform1492.child[0] = Shape1493;

HAnimSegment1490.children[1] = Transform1492;

Shape Shape1494 = createNode("Shape");
LineSet LineSet1495 = createNode("LineSet");
LineSet1495.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1496 = createNode("ColorRGBA");
ColorRGBA1496.USE = "HAnimSegmentLineColorRGBA";
LineSet1495.color = ColorRGBA1496;

Coordinate Coordinate1497 = createNode("Coordinate");
Coordinate1497.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1495.coord = Coordinate1497;

Shape1494.geometry = LineSet1495;

HAnimSegment1490.children[2] = Shape1494;

HAnimJoint1489.children = new MFNode();

HAnimJoint1489.children[0] = HAnimSegment1490;

HAnimJoint HAnimJoint1498 = createNode("HAnimJoint");
HAnimJoint1498.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1498.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1498.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimSegment HAnimSegment1499 = createNode("HAnimSegment");
HAnimSegment1499.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimSegment1499.name = "r_carpal_distal_phalanx_3";
TouchSensor TouchSensor1500 = createNode("TouchSensor");
TouchSensor1500.description = "HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3";
HAnimSegment1499.children = new MFNode();

HAnimSegment1499.children[0] = TouchSensor1500;

Transform Transform1501 = createNode("Transform");
Transform1501.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
Shape Shape1502 = createNode("Shape");
Shape1502.USE = "HAnimJointShape";
Transform1501.child = new undefined();

Transform1501.child[0] = Shape1502;

HAnimSegment1499.children[1] = Transform1501;

Shape Shape1503 = createNode("Shape");
LineSet LineSet1504 = createNode("LineSet");
LineSet1504.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1505 = createNode("ColorRGBA");
ColorRGBA1505.USE = "HAnimSiteLineColorRGBA";
LineSet1504.color = ColorRGBA1505;

Coordinate Coordinate1506 = createNode("Coordinate");
Coordinate1506.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1504.coord = Coordinate1506;

Shape1503.geometry = LineSet1504;

HAnimSegment1499.children[2] = Shape1503;

HAnimSite HAnimSite1507 = createNode("HAnimSite");
HAnimSite1507.DEF = "hanim_r_carpal_distal_phalanx_3_pt";
HAnimSite1507.name = "r_carpal_distal_phalanx_3_pt";
HAnimSite1507.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
TouchSensor TouchSensor1508 = createNode("TouchSensor");
TouchSensor1508.description = "HAnimSite r_middle_distal_tip";
HAnimSite1507.children = new MFNode();

HAnimSite1507.children[0] = TouchSensor1508;

Shape Shape1509 = createNode("Shape");
Shape1509.USE = "HAnimSiteShape";
HAnimSite1507.children[1] = Shape1509;

HAnimSegment1499.children[3] = HAnimSite1507;

HAnimJoint1498.children = new MFNode();

HAnimJoint1498.children[0] = HAnimSegment1499;

HAnimJoint1489.children[1] = HAnimJoint1498;

HAnimJoint1480.children[1] = HAnimJoint1489;

HAnimJoint1471.children[1] = HAnimJoint1480;

HAnimJoint1337.children[3] = HAnimJoint1471;

HAnimJoint HAnimJoint1510 = createNode("HAnimJoint");
HAnimJoint1510.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1510.name = "r_carpometacarpal_4";
HAnimJoint1510.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment1511 = createNode("HAnimSegment");
HAnimSegment1511.DEF = "hanim_r_metacarpal_4";
HAnimSegment1511.name = "r_metacarpal_4";
TouchSensor TouchSensor1512 = createNode("TouchSensor");
TouchSensor1512.description = "HAnimJoint r_ring0, HAnimSegment r_metacarpal_4";
HAnimSegment1511.children = new MFNode();

HAnimSegment1511.children[0] = TouchSensor1512;

Transform Transform1513 = createNode("Transform");
Transform1513.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
Shape Shape1514 = createNode("Shape");
Shape1514.USE = "HAnimJointShape";
Transform1513.child = new undefined();

Transform1513.child[0] = Shape1514;

HAnimSegment1511.children[1] = Transform1513;

Shape Shape1515 = createNode("Shape");
LineSet LineSet1516 = createNode("LineSet");
LineSet1516.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1517 = createNode("ColorRGBA");
ColorRGBA1517.USE = "HAnimSegmentLineColorRGBA";
LineSet1516.color = ColorRGBA1517;

Coordinate Coordinate1518 = createNode("Coordinate");
Coordinate1518.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1516.coord = Coordinate1518;

Shape1515.geometry = LineSet1516;

HAnimSegment1511.children[2] = Shape1515;

HAnimJoint1510.children = new MFNode();

HAnimJoint1510.children[0] = HAnimSegment1511;

HAnimJoint HAnimJoint1519 = createNode("HAnimJoint");
HAnimJoint1519.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1519.name = "r_metacarpophalangeal_4";
HAnimJoint1519.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment1520 = createNode("HAnimSegment");
HAnimSegment1520.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment1520.name = "r_carpal_proximal_phalanx_4";
TouchSensor TouchSensor1521 = createNode("TouchSensor");
TouchSensor1521.description = "HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4";
HAnimSegment1520.children = new MFNode();

HAnimSegment1520.children[0] = TouchSensor1521;

Transform Transform1522 = createNode("Transform");
Transform1522.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
Shape Shape1523 = createNode("Shape");
Shape1523.USE = "HAnimJointShape";
Transform1522.child = new undefined();

Transform1522.child[0] = Shape1523;

HAnimSegment1520.children[1] = Transform1522;

Shape Shape1524 = createNode("Shape");
LineSet LineSet1525 = createNode("LineSet");
LineSet1525.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1526 = createNode("ColorRGBA");
ColorRGBA1526.USE = "HAnimSegmentLineColorRGBA";
LineSet1525.color = ColorRGBA1526;

Coordinate Coordinate1527 = createNode("Coordinate");
Coordinate1527.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1525.coord = Coordinate1527;

Shape1524.geometry = LineSet1525;

HAnimSegment1520.children[2] = Shape1524;

HAnimJoint1519.children = new MFNode();

HAnimJoint1519.children[0] = HAnimSegment1520;

HAnimJoint HAnimJoint1528 = createNode("HAnimJoint");
HAnimJoint1528.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1528.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1528.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment1529 = createNode("HAnimSegment");
HAnimSegment1529.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment1529.name = "r_carpal_middle_phalanx_4";
TouchSensor TouchSensor1530 = createNode("TouchSensor");
TouchSensor1530.description = "HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4";
HAnimSegment1529.children = new MFNode();

HAnimSegment1529.children[0] = TouchSensor1530;

Transform Transform1531 = createNode("Transform");
Transform1531.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
Shape Shape1532 = createNode("Shape");
Shape1532.USE = "HAnimJointShape";
Transform1531.child = new undefined();

Transform1531.child[0] = Shape1532;

HAnimSegment1529.children[1] = Transform1531;

Shape Shape1533 = createNode("Shape");
LineSet LineSet1534 = createNode("LineSet");
LineSet1534.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1535 = createNode("ColorRGBA");
ColorRGBA1535.USE = "HAnimSegmentLineColorRGBA";
LineSet1534.color = ColorRGBA1535;

Coordinate Coordinate1536 = createNode("Coordinate");
Coordinate1536.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1534.coord = Coordinate1536;

Shape1533.geometry = LineSet1534;

HAnimSegment1529.children[2] = Shape1533;

HAnimJoint1528.children = new MFNode();

HAnimJoint1528.children[0] = HAnimSegment1529;

HAnimJoint HAnimJoint1537 = createNode("HAnimJoint");
HAnimJoint1537.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1537.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1537.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimSegment HAnimSegment1538 = createNode("HAnimSegment");
HAnimSegment1538.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimSegment1538.name = "r_carpal_distal_phalanx_4";
TouchSensor TouchSensor1539 = createNode("TouchSensor");
TouchSensor1539.description = "HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4";
HAnimSegment1538.children = new MFNode();

HAnimSegment1538.children[0] = TouchSensor1539;

Transform Transform1540 = createNode("Transform");
Transform1540.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
Shape Shape1541 = createNode("Shape");
Shape1541.USE = "HAnimJointShape";
Transform1540.child = new undefined();

Transform1540.child[0] = Shape1541;

HAnimSegment1538.children[1] = Transform1540;

Shape Shape1542 = createNode("Shape");
LineSet LineSet1543 = createNode("LineSet");
LineSet1543.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1544 = createNode("ColorRGBA");
ColorRGBA1544.USE = "HAnimSiteLineColorRGBA";
LineSet1543.color = ColorRGBA1544;

Coordinate Coordinate1545 = createNode("Coordinate");
Coordinate1545.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1543.coord = Coordinate1545;

Shape1542.geometry = LineSet1543;

HAnimSegment1538.children[2] = Shape1542;

HAnimSite HAnimSite1546 = createNode("HAnimSite");
HAnimSite1546.DEF = "hanim_r_carpal_distal_phalanx_4_pt";
HAnimSite1546.name = "r_carpal_distal_phalanx_4_pt";
HAnimSite1546.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
TouchSensor TouchSensor1547 = createNode("TouchSensor");
TouchSensor1547.description = "HAnimSite r_ring_distal_tip";
HAnimSite1546.children = new MFNode();

HAnimSite1546.children[0] = TouchSensor1547;

Shape Shape1548 = createNode("Shape");
Shape1548.USE = "HAnimSiteShape";
HAnimSite1546.children[1] = Shape1548;

HAnimSegment1538.children[3] = HAnimSite1546;

HAnimJoint1537.children = new MFNode();

HAnimJoint1537.children[0] = HAnimSegment1538;

HAnimJoint1528.children[1] = HAnimJoint1537;

HAnimJoint1519.children[1] = HAnimJoint1528;

HAnimJoint1510.children[1] = HAnimJoint1519;

HAnimJoint1337.children[4] = HAnimJoint1510;

HAnimJoint HAnimJoint1549 = createNode("HAnimJoint");
HAnimJoint1549.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1549.name = "r_carpometacarpal_5";
HAnimJoint1549.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment1550 = createNode("HAnimSegment");
HAnimSegment1550.DEF = "hanim_r_metacarpal_5";
HAnimSegment1550.name = "r_metacarpal_5";
TouchSensor TouchSensor1551 = createNode("TouchSensor");
TouchSensor1551.description = "HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5";
HAnimSegment1550.children = new MFNode();

HAnimSegment1550.children[0] = TouchSensor1551;

Transform Transform1552 = createNode("Transform");
Transform1552.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
Shape Shape1553 = createNode("Shape");
Shape1553.USE = "HAnimJointShape";
Transform1552.child = new undefined();

Transform1552.child[0] = Shape1553;

HAnimSegment1550.children[1] = Transform1552;

Shape Shape1554 = createNode("Shape");
LineSet LineSet1555 = createNode("LineSet");
LineSet1555.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1556 = createNode("ColorRGBA");
ColorRGBA1556.USE = "HAnimSegmentLineColorRGBA";
LineSet1555.color = ColorRGBA1556;

Coordinate Coordinate1557 = createNode("Coordinate");
Coordinate1557.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1555.coord = Coordinate1557;

Shape1554.geometry = LineSet1555;

HAnimSegment1550.children[2] = Shape1554;

HAnimJoint1549.children = new MFNode();

HAnimJoint1549.children[0] = HAnimSegment1550;

HAnimJoint HAnimJoint1558 = createNode("HAnimJoint");
HAnimJoint1558.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1558.name = "r_metacarpophalangeal_5";
HAnimJoint1558.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment1559 = createNode("HAnimSegment");
HAnimSegment1559.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment1559.name = "r_carpal_proximal_phalanx_5";
TouchSensor TouchSensor1560 = createNode("TouchSensor");
TouchSensor1560.description = "HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5";
HAnimSegment1559.children = new MFNode();

HAnimSegment1559.children[0] = TouchSensor1560;

Transform Transform1561 = createNode("Transform");
Transform1561.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
Shape Shape1562 = createNode("Shape");
Shape1562.USE = "HAnimJointShape";
Transform1561.child = new undefined();

Transform1561.child[0] = Shape1562;

HAnimSegment1559.children[1] = Transform1561;

Shape Shape1563 = createNode("Shape");
LineSet LineSet1564 = createNode("LineSet");
LineSet1564.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1565 = createNode("ColorRGBA");
ColorRGBA1565.USE = "HAnimSegmentLineColorRGBA";
LineSet1564.color = ColorRGBA1565;

Coordinate Coordinate1566 = createNode("Coordinate");
Coordinate1566.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1564.coord = Coordinate1566;

Shape1563.geometry = LineSet1564;

HAnimSegment1559.children[2] = Shape1563;

HAnimJoint1558.children = new MFNode();

HAnimJoint1558.children[0] = HAnimSegment1559;

HAnimJoint HAnimJoint1567 = createNode("HAnimJoint");
HAnimJoint1567.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1567.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1567.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment1568 = createNode("HAnimSegment");
HAnimSegment1568.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimSegment1568.name = "r_carpal_middle_phalanx_5";
TouchSensor TouchSensor1569 = createNode("TouchSensor");
TouchSensor1569.description = "HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5";
HAnimSegment1568.children = new MFNode();

HAnimSegment1568.children[0] = TouchSensor1569;

Transform Transform1570 = createNode("Transform");
Transform1570.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
Shape Shape1571 = createNode("Shape");
Shape1571.USE = "HAnimJointShape";
Transform1570.child = new undefined();

Transform1570.child[0] = Shape1571;

HAnimSegment1568.children[1] = Transform1570;

Shape Shape1572 = createNode("Shape");
LineSet LineSet1573 = createNode("LineSet");
LineSet1573.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1574 = createNode("ColorRGBA");
ColorRGBA1574.USE = "HAnimSegmentLineColorRGBA";
LineSet1573.color = ColorRGBA1574;

Coordinate Coordinate1575 = createNode("Coordinate");
Coordinate1575.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1573.coord = Coordinate1575;

Shape1572.geometry = LineSet1573;

HAnimSegment1568.children[2] = Shape1572;

HAnimJoint1567.children = new MFNode();

HAnimJoint1567.children[0] = HAnimSegment1568;

HAnimJoint HAnimJoint1576 = createNode("HAnimJoint");
HAnimJoint1576.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1576.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1576.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimSegment HAnimSegment1577 = createNode("HAnimSegment");
HAnimSegment1577.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimSegment1577.name = "r_carpal_distal_phalanx_5";
TouchSensor TouchSensor1578 = createNode("TouchSensor");
TouchSensor1578.description = "HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5";
HAnimSegment1577.children = new MFNode();

HAnimSegment1577.children[0] = TouchSensor1578;

Transform Transform1579 = createNode("Transform");
Transform1579.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
Shape Shape1580 = createNode("Shape");
Shape1580.USE = "HAnimJointShape";
Transform1579.child = new undefined();

Transform1579.child[0] = Shape1580;

HAnimSegment1577.children[1] = Transform1579;

Shape Shape1581 = createNode("Shape");
LineSet LineSet1582 = createNode("LineSet");
LineSet1582.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1583 = createNode("ColorRGBA");
ColorRGBA1583.USE = "HAnimSiteLineColorRGBA";
LineSet1582.color = ColorRGBA1583;

Coordinate Coordinate1584 = createNode("Coordinate");
Coordinate1584.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1582.coord = Coordinate1584;

Shape1581.geometry = LineSet1582;

HAnimSegment1577.children[2] = Shape1581;

HAnimSite HAnimSite1585 = createNode("HAnimSite");
HAnimSite1585.DEF = "hanim_r_carpal_distal_phalanx_5_pt";
HAnimSite1585.name = "r_carpal_distal_phalanx_5_pt";
HAnimSite1585.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
TouchSensor TouchSensor1586 = createNode("TouchSensor");
TouchSensor1586.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1585.children = new MFNode();

HAnimSite1585.children[0] = TouchSensor1586;

Shape Shape1587 = createNode("Shape");
Shape1587.USE = "HAnimSiteShape";
HAnimSite1585.children[1] = Shape1587;

HAnimSegment1577.children[3] = HAnimSite1585;

HAnimJoint1576.children = new MFNode();

HAnimJoint1576.children[0] = HAnimSegment1577;

HAnimJoint1567.children[1] = HAnimJoint1576;

HAnimJoint1558.children[1] = HAnimJoint1567;

HAnimJoint1549.children[1] = HAnimJoint1558;

HAnimJoint1337.children[5] = HAnimJoint1549;

HAnimJoint1300.children[1] = HAnimJoint1337;

HAnimJoint1284.children[1] = HAnimJoint1300;

HAnimJoint1275.children[1] = HAnimJoint1284;

HAnimJoint1238.children[1] = HAnimJoint1275;

HAnimJoint600.children[3] = HAnimJoint1238;

HAnimJoint591.children[1] = HAnimJoint600;

HAnimJoint582.children[1] = HAnimJoint591;

HAnimJoint573.children[1] = HAnimJoint582;

HAnimJoint564.children[1] = HAnimJoint573;

HAnimJoint555.children[1] = HAnimJoint564;

HAnimJoint546.children[1] = HAnimJoint555;

HAnimJoint537.children[1] = HAnimJoint546;

HAnimJoint514.children[1] = HAnimJoint537;

HAnimJoint498.children[1] = HAnimJoint514;

HAnimJoint489.children[1] = HAnimJoint498;

HAnimJoint480.children[1] = HAnimJoint489;

HAnimJoint471.children[1] = HAnimJoint480;

HAnimJoint441.children[1] = HAnimJoint471;

HAnimJoint432.children[1] = HAnimJoint441;

HAnimJoint423.children[1] = HAnimJoint432;

HAnimJoint400.children[1] = HAnimJoint423;

HAnimJoint50.children[2] = HAnimJoint400;

HAnimHumanoid41.joints[1] = HAnimJoint50;

HAnimJoint HAnimJoint1588 = createNode("HAnimJoint");
HAnimJoint1588.USE = "hanim_humanoid_root";
HAnimHumanoid41.joints[2] = HAnimJoint1588;

HAnimJoint HAnimJoint1589 = createNode("HAnimJoint");
HAnimJoint1589.USE = "hanim_sacroiliac";
HAnimHumanoid41.joints[3] = HAnimJoint1589;

HAnimJoint HAnimJoint1590 = createNode("HAnimJoint");
HAnimJoint1590.USE = "hanim_vl5";
HAnimHumanoid41.joints[4] = HAnimJoint1590;

HAnimJoint HAnimJoint1591 = createNode("HAnimJoint");
HAnimJoint1591.USE = "hanim_vl4";
HAnimHumanoid41.joints[5] = HAnimJoint1591;

HAnimJoint HAnimJoint1592 = createNode("HAnimJoint");
HAnimJoint1592.USE = "hanim_vl3";
HAnimHumanoid41.joints[6] = HAnimJoint1592;

HAnimJoint HAnimJoint1593 = createNode("HAnimJoint");
HAnimJoint1593.USE = "hanim_vl2";
HAnimHumanoid41.joints[7] = HAnimJoint1593;

HAnimJoint HAnimJoint1594 = createNode("HAnimJoint");
HAnimJoint1594.USE = "hanim_vl1";
HAnimHumanoid41.joints[8] = HAnimJoint1594;

HAnimJoint HAnimJoint1595 = createNode("HAnimJoint");
HAnimJoint1595.USE = "hanim_vt12";
HAnimHumanoid41.joints[9] = HAnimJoint1595;

HAnimJoint HAnimJoint1596 = createNode("HAnimJoint");
HAnimJoint1596.USE = "hanim_vt11";
HAnimHumanoid41.joints[10] = HAnimJoint1596;

HAnimJoint HAnimJoint1597 = createNode("HAnimJoint");
HAnimJoint1597.USE = "hanim_vt10";
HAnimHumanoid41.joints[11] = HAnimJoint1597;

HAnimJoint HAnimJoint1598 = createNode("HAnimJoint");
HAnimJoint1598.USE = "hanim_vt9";
HAnimHumanoid41.joints[12] = HAnimJoint1598;

HAnimJoint HAnimJoint1599 = createNode("HAnimJoint");
HAnimJoint1599.USE = "hanim_vt8";
HAnimHumanoid41.joints[13] = HAnimJoint1599;

HAnimJoint HAnimJoint1600 = createNode("HAnimJoint");
HAnimJoint1600.USE = "hanim_vt7";
HAnimHumanoid41.joints[14] = HAnimJoint1600;

HAnimJoint HAnimJoint1601 = createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_vt6";
HAnimHumanoid41.joints[15] = HAnimJoint1601;

HAnimJoint HAnimJoint1602 = createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_vt5";
HAnimHumanoid41.joints[16] = HAnimJoint1602;

HAnimJoint HAnimJoint1603 = createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_vt4";
HAnimHumanoid41.joints[17] = HAnimJoint1603;

HAnimJoint HAnimJoint1604 = createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_vt3";
HAnimHumanoid41.joints[18] = HAnimJoint1604;

HAnimJoint HAnimJoint1605 = createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_vt2";
HAnimHumanoid41.joints[19] = HAnimJoint1605;

HAnimJoint HAnimJoint1606 = createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_vt1";
HAnimHumanoid41.joints[20] = HAnimJoint1606;

HAnimJoint HAnimJoint1607 = createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_vc7";
HAnimHumanoid41.joints[21] = HAnimJoint1607;

HAnimJoint HAnimJoint1608 = createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_vc6";
HAnimHumanoid41.joints[22] = HAnimJoint1608;

HAnimJoint HAnimJoint1609 = createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_vc5";
HAnimHumanoid41.joints[23] = HAnimJoint1609;

HAnimJoint HAnimJoint1610 = createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_vc4";
HAnimHumanoid41.joints[24] = HAnimJoint1610;

HAnimJoint HAnimJoint1611 = createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_vc3";
HAnimHumanoid41.joints[25] = HAnimJoint1611;

HAnimJoint HAnimJoint1612 = createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_vc2";
HAnimHumanoid41.joints[26] = HAnimJoint1612;

HAnimJoint HAnimJoint1613 = createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_vc1";
HAnimHumanoid41.joints[27] = HAnimJoint1613;

HAnimJoint HAnimJoint1614 = createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_skullbase";
HAnimHumanoid41.joints[28] = HAnimJoint1614;

HAnimJoint HAnimJoint1615 = createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_temporomandibular";
HAnimHumanoid41.joints[29] = HAnimJoint1615;

HAnimJoint HAnimJoint1616 = createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_acromioclavicular";
HAnimHumanoid41.joints[30] = HAnimJoint1616;

HAnimJoint HAnimJoint1617 = createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_r_acromioclavicular";
HAnimHumanoid41.joints[31] = HAnimJoint1617;

HAnimJoint HAnimJoint1618 = createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid41.joints[32] = HAnimJoint1618;

HAnimJoint HAnimJoint1619 = createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid41.joints[33] = HAnimJoint1619;

HAnimJoint HAnimJoint1620 = createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid41.joints[34] = HAnimJoint1620;

HAnimJoint HAnimJoint1621 = createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid41.joints[35] = HAnimJoint1621;

HAnimJoint HAnimJoint1622 = createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid41.joints[36] = HAnimJoint1622;

HAnimJoint HAnimJoint1623 = createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid41.joints[37] = HAnimJoint1623;

HAnimJoint HAnimJoint1624 = createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid41.joints[38] = HAnimJoint1624;

HAnimJoint HAnimJoint1625 = createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid41.joints[39] = HAnimJoint1625;

HAnimJoint HAnimJoint1626 = createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid41.joints[40] = HAnimJoint1626;

HAnimJoint HAnimJoint1627 = createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid41.joints[41] = HAnimJoint1627;

HAnimJoint HAnimJoint1628 = createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid41.joints[42] = HAnimJoint1628;

HAnimJoint HAnimJoint1629 = createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid41.joints[43] = HAnimJoint1629;

HAnimJoint HAnimJoint1630 = createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid41.joints[44] = HAnimJoint1630;

HAnimJoint HAnimJoint1631 = createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid41.joints[45] = HAnimJoint1631;

HAnimJoint HAnimJoint1632 = createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid41.joints[46] = HAnimJoint1632;

HAnimJoint HAnimJoint1633 = createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid41.joints[47] = HAnimJoint1633;

HAnimJoint HAnimJoint1634 = createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid41.joints[48] = HAnimJoint1634;

HAnimJoint HAnimJoint1635 = createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid41.joints[49] = HAnimJoint1635;

HAnimJoint HAnimJoint1636 = createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid41.joints[50] = HAnimJoint1636;

HAnimJoint HAnimJoint1637 = createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid41.joints[51] = HAnimJoint1637;

HAnimJoint HAnimJoint1638 = createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid41.joints[52] = HAnimJoint1638;

HAnimJoint HAnimJoint1639 = createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid41.joints[53] = HAnimJoint1639;

HAnimJoint HAnimJoint1640 = createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid41.joints[54] = HAnimJoint1640;

HAnimJoint HAnimJoint1641 = createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid41.joints[55] = HAnimJoint1641;

HAnimJoint HAnimJoint1642 = createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid41.joints[56] = HAnimJoint1642;

HAnimJoint HAnimJoint1643 = createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid41.joints[57] = HAnimJoint1643;

HAnimJoint HAnimJoint1644 = createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid41.joints[58] = HAnimJoint1644;

HAnimJoint HAnimJoint1645 = createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid41.joints[59] = HAnimJoint1645;

HAnimJoint HAnimJoint1646 = createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_l_elbow";
HAnimHumanoid41.joints[60] = HAnimJoint1646;

HAnimJoint HAnimJoint1647 = createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_elbow";
HAnimHumanoid41.joints[61] = HAnimJoint1647;

HAnimJoint HAnimJoint1648 = createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_l_eyeball_joint";
HAnimHumanoid41.joints[62] = HAnimJoint1648;

HAnimJoint HAnimJoint1649 = createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_eyeball_joint";
HAnimHumanoid41.joints[63] = HAnimJoint1649;

HAnimJoint HAnimJoint1650 = createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid41.joints[64] = HAnimJoint1650;

HAnimJoint HAnimJoint1651 = createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid41.joints[65] = HAnimJoint1651;

HAnimJoint HAnimJoint1652 = createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_l_eyelid_joint";
HAnimHumanoid41.joints[66] = HAnimJoint1652;

HAnimJoint HAnimJoint1653 = createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_eyelid_joint";
HAnimHumanoid41.joints[67] = HAnimJoint1653;

HAnimJoint HAnimJoint1654 = createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_l_hip";
HAnimHumanoid41.joints[68] = HAnimJoint1654;

HAnimJoint HAnimJoint1655 = createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_hip";
HAnimHumanoid41.joints[69] = HAnimJoint1655;

HAnimJoint HAnimJoint1656 = createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_l_knee";
HAnimHumanoid41.joints[70] = HAnimJoint1656;

HAnimJoint HAnimJoint1657 = createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_knee";
HAnimHumanoid41.joints[71] = HAnimJoint1657;

HAnimJoint HAnimJoint1658 = createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid41.joints[72] = HAnimJoint1658;

HAnimJoint HAnimJoint1659 = createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid41.joints[73] = HAnimJoint1659;

HAnimJoint HAnimJoint1660 = createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid41.joints[74] = HAnimJoint1660;

HAnimJoint HAnimJoint1661 = createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid41.joints[75] = HAnimJoint1661;

HAnimJoint HAnimJoint1662 = createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid41.joints[76] = HAnimJoint1662;

HAnimJoint HAnimJoint1663 = createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid41.joints[77] = HAnimJoint1663;

HAnimJoint HAnimJoint1664 = createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid41.joints[78] = HAnimJoint1664;

HAnimJoint HAnimJoint1665 = createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid41.joints[79] = HAnimJoint1665;

HAnimJoint HAnimJoint1666 = createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid41.joints[80] = HAnimJoint1666;

HAnimJoint HAnimJoint1667 = createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid41.joints[81] = HAnimJoint1667;

HAnimJoint HAnimJoint1668 = createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid41.joints[82] = HAnimJoint1668;

HAnimJoint HAnimJoint1669 = createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid41.joints[83] = HAnimJoint1669;

HAnimJoint HAnimJoint1670 = createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_l_radiocarpal";
HAnimHumanoid41.joints[84] = HAnimJoint1670;

HAnimJoint HAnimJoint1671 = createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_r_radiocarpal";
HAnimHumanoid41.joints[85] = HAnimJoint1671;

HAnimJoint HAnimJoint1672 = createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_l_shoulder";
HAnimHumanoid41.joints[86] = HAnimJoint1672;

HAnimJoint HAnimJoint1673 = createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_r_shoulder";
HAnimHumanoid41.joints[87] = HAnimJoint1673;

HAnimJoint HAnimJoint1674 = createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_l_sternoclavicular";
HAnimHumanoid41.joints[88] = HAnimJoint1674;

HAnimJoint HAnimJoint1675 = createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_r_sternoclavicular";
HAnimHumanoid41.joints[89] = HAnimJoint1675;

HAnimJoint HAnimJoint1676 = createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_l_talocrural";
HAnimHumanoid41.joints[90] = HAnimJoint1676;

HAnimJoint HAnimJoint1677 = createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_r_talocrural";
HAnimHumanoid41.joints[91] = HAnimJoint1677;

HAnimJoint HAnimJoint1678 = createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid41.joints[92] = HAnimJoint1678;

HAnimJoint HAnimJoint1679 = createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid41.joints[93] = HAnimJoint1679;

HAnimJoint HAnimJoint1680 = createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid41.joints[94] = HAnimJoint1680;

HAnimJoint HAnimJoint1681 = createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid41.joints[95] = HAnimJoint1681;

HAnimSegment HAnimSegment1682 = createNode("HAnimSegment");
HAnimSegment1682.USE = "hanim_pelvis";
HAnimHumanoid41.segments[96] = HAnimSegment1682;

HAnimSegment HAnimSegment1683 = createNode("HAnimSegment");
HAnimSegment1683.USE = "hanim_skull";
HAnimHumanoid41.segments[97] = HAnimSegment1683;

HAnimSegment HAnimSegment1684 = createNode("HAnimSegment");
HAnimSegment1684.USE = "hanim_jaw";
HAnimHumanoid41.segments[98] = HAnimSegment1684;

HAnimSegment HAnimSegment1685 = createNode("HAnimSegment");
HAnimSegment1685.USE = "hanim_c1";
HAnimHumanoid41.segments[99] = HAnimSegment1685;

HAnimSegment HAnimSegment1686 = createNode("HAnimSegment");
HAnimSegment1686.USE = "hanim_c2";
HAnimHumanoid41.segments[100] = HAnimSegment1686;

HAnimSegment HAnimSegment1687 = createNode("HAnimSegment");
HAnimSegment1687.USE = "hanim_c3";
HAnimHumanoid41.segments[101] = HAnimSegment1687;

HAnimSegment HAnimSegment1688 = createNode("HAnimSegment");
HAnimSegment1688.USE = "hanim_c4";
HAnimHumanoid41.segments[102] = HAnimSegment1688;

HAnimSegment HAnimSegment1689 = createNode("HAnimSegment");
HAnimSegment1689.USE = "hanim_c5";
HAnimHumanoid41.segments[103] = HAnimSegment1689;

HAnimSegment HAnimSegment1690 = createNode("HAnimSegment");
HAnimSegment1690.USE = "hanim_c6";
HAnimHumanoid41.segments[104] = HAnimSegment1690;

HAnimSegment HAnimSegment1691 = createNode("HAnimSegment");
HAnimSegment1691.USE = "hanim_c7";
HAnimHumanoid41.segments[105] = HAnimSegment1691;

HAnimSegment HAnimSegment1692 = createNode("HAnimSegment");
HAnimSegment1692.USE = "hanim_t1";
HAnimHumanoid41.segments[106] = HAnimSegment1692;

HAnimSegment HAnimSegment1693 = createNode("HAnimSegment");
HAnimSegment1693.USE = "hanim_t2";
HAnimHumanoid41.segments[107] = HAnimSegment1693;

HAnimSegment HAnimSegment1694 = createNode("HAnimSegment");
HAnimSegment1694.USE = "hanim_t3";
HAnimHumanoid41.segments[108] = HAnimSegment1694;

HAnimSegment HAnimSegment1695 = createNode("HAnimSegment");
HAnimSegment1695.USE = "hanim_t4";
HAnimHumanoid41.segments[109] = HAnimSegment1695;

HAnimSegment HAnimSegment1696 = createNode("HAnimSegment");
HAnimSegment1696.USE = "hanim_t5";
HAnimHumanoid41.segments[110] = HAnimSegment1696;

HAnimSegment HAnimSegment1697 = createNode("HAnimSegment");
HAnimSegment1697.USE = "hanim_t6";
HAnimHumanoid41.segments[111] = HAnimSegment1697;

HAnimSegment HAnimSegment1698 = createNode("HAnimSegment");
HAnimSegment1698.USE = "hanim_t7";
HAnimHumanoid41.segments[112] = HAnimSegment1698;

HAnimSegment HAnimSegment1699 = createNode("HAnimSegment");
HAnimSegment1699.USE = "hanim_t8";
HAnimHumanoid41.segments[113] = HAnimSegment1699;

HAnimSegment HAnimSegment1700 = createNode("HAnimSegment");
HAnimSegment1700.USE = "hanim_t9";
HAnimHumanoid41.segments[114] = HAnimSegment1700;

HAnimSegment HAnimSegment1701 = createNode("HAnimSegment");
HAnimSegment1701.USE = "hanim_t10";
HAnimHumanoid41.segments[115] = HAnimSegment1701;

HAnimSegment HAnimSegment1702 = createNode("HAnimSegment");
HAnimSegment1702.USE = "hanim_t11";
HAnimHumanoid41.segments[116] = HAnimSegment1702;

HAnimSegment HAnimSegment1703 = createNode("HAnimSegment");
HAnimSegment1703.USE = "hanim_t12";
HAnimHumanoid41.segments[117] = HAnimSegment1703;

HAnimSegment HAnimSegment1704 = createNode("HAnimSegment");
HAnimSegment1704.USE = "hanim_l1";
HAnimHumanoid41.segments[118] = HAnimSegment1704;

HAnimSegment HAnimSegment1705 = createNode("HAnimSegment");
HAnimSegment1705.USE = "hanim_l2";
HAnimHumanoid41.segments[119] = HAnimSegment1705;

HAnimSegment HAnimSegment1706 = createNode("HAnimSegment");
HAnimSegment1706.USE = "hanim_l3";
HAnimHumanoid41.segments[120] = HAnimSegment1706;

HAnimSegment HAnimSegment1707 = createNode("HAnimSegment");
HAnimSegment1707.USE = "hanim_l4";
HAnimHumanoid41.segments[121] = HAnimSegment1707;

HAnimSegment HAnimSegment1708 = createNode("HAnimSegment");
HAnimSegment1708.USE = "hanim_l5";
HAnimHumanoid41.segments[122] = HAnimSegment1708;

HAnimSegment HAnimSegment1709 = createNode("HAnimSegment");
HAnimSegment1709.USE = "hanim_sacrum";
HAnimHumanoid41.segments[123] = HAnimSegment1709;

HAnimSegment HAnimSegment1710 = createNode("HAnimSegment");
HAnimSegment1710.USE = "hanim_l_calf";
HAnimHumanoid41.segments[124] = HAnimSegment1710;

HAnimSegment HAnimSegment1711 = createNode("HAnimSegment");
HAnimSegment1711.USE = "hanim_r_calf";
HAnimHumanoid41.segments[125] = HAnimSegment1711;

HAnimSegment HAnimSegment1712 = createNode("HAnimSegment");
HAnimSegment1712.USE = "hanim_l_carpal";
HAnimHumanoid41.segments[126] = HAnimSegment1712;

HAnimSegment HAnimSegment1713 = createNode("HAnimSegment");
HAnimSegment1713.USE = "hanim_r_carpal";
HAnimHumanoid41.segments[127] = HAnimSegment1713;

HAnimSegment HAnimSegment1714 = createNode("HAnimSegment");
HAnimSegment1714.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid41.segments[128] = HAnimSegment1714;

HAnimSegment HAnimSegment1715 = createNode("HAnimSegment");
HAnimSegment1715.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid41.segments[129] = HAnimSegment1715;

HAnimSegment HAnimSegment1716 = createNode("HAnimSegment");
HAnimSegment1716.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid41.segments[130] = HAnimSegment1716;

HAnimSegment HAnimSegment1717 = createNode("HAnimSegment");
HAnimSegment1717.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid41.segments[131] = HAnimSegment1717;

HAnimSegment HAnimSegment1718 = createNode("HAnimSegment");
HAnimSegment1718.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid41.segments[132] = HAnimSegment1718;

HAnimSegment HAnimSegment1719 = createNode("HAnimSegment");
HAnimSegment1719.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid41.segments[133] = HAnimSegment1719;

HAnimSegment HAnimSegment1720 = createNode("HAnimSegment");
HAnimSegment1720.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid41.segments[134] = HAnimSegment1720;

HAnimSegment HAnimSegment1721 = createNode("HAnimSegment");
HAnimSegment1721.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid41.segments[135] = HAnimSegment1721;

HAnimSegment HAnimSegment1722 = createNode("HAnimSegment");
HAnimSegment1722.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid41.segments[136] = HAnimSegment1722;

HAnimSegment HAnimSegment1723 = createNode("HAnimSegment");
HAnimSegment1723.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid41.segments[137] = HAnimSegment1723;

HAnimSegment HAnimSegment1724 = createNode("HAnimSegment");
HAnimSegment1724.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid41.segments[138] = HAnimSegment1724;

HAnimSegment HAnimSegment1725 = createNode("HAnimSegment");
HAnimSegment1725.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid41.segments[139] = HAnimSegment1725;

HAnimSegment HAnimSegment1726 = createNode("HAnimSegment");
HAnimSegment1726.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid41.segments[140] = HAnimSegment1726;

HAnimSegment HAnimSegment1727 = createNode("HAnimSegment");
HAnimSegment1727.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid41.segments[141] = HAnimSegment1727;

HAnimSegment HAnimSegment1728 = createNode("HAnimSegment");
HAnimSegment1728.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid41.segments[142] = HAnimSegment1728;

HAnimSegment HAnimSegment1729 = createNode("HAnimSegment");
HAnimSegment1729.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid41.segments[143] = HAnimSegment1729;

HAnimSegment HAnimSegment1730 = createNode("HAnimSegment");
HAnimSegment1730.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid41.segments[144] = HAnimSegment1730;

HAnimSegment HAnimSegment1731 = createNode("HAnimSegment");
HAnimSegment1731.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid41.segments[145] = HAnimSegment1731;

HAnimSegment HAnimSegment1732 = createNode("HAnimSegment");
HAnimSegment1732.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid41.segments[146] = HAnimSegment1732;

HAnimSegment HAnimSegment1733 = createNode("HAnimSegment");
HAnimSegment1733.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid41.segments[147] = HAnimSegment1733;

HAnimSegment HAnimSegment1734 = createNode("HAnimSegment");
HAnimSegment1734.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid41.segments[148] = HAnimSegment1734;

HAnimSegment HAnimSegment1735 = createNode("HAnimSegment");
HAnimSegment1735.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid41.segments[149] = HAnimSegment1735;

HAnimSegment HAnimSegment1736 = createNode("HAnimSegment");
HAnimSegment1736.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid41.segments[150] = HAnimSegment1736;

HAnimSegment HAnimSegment1737 = createNode("HAnimSegment");
HAnimSegment1737.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid41.segments[151] = HAnimSegment1737;

HAnimSegment HAnimSegment1738 = createNode("HAnimSegment");
HAnimSegment1738.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid41.segments[152] = HAnimSegment1738;

HAnimSegment HAnimSegment1739 = createNode("HAnimSegment");
HAnimSegment1739.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid41.segments[153] = HAnimSegment1739;

HAnimSegment HAnimSegment1740 = createNode("HAnimSegment");
HAnimSegment1740.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid41.segments[154] = HAnimSegment1740;

HAnimSegment HAnimSegment1741 = createNode("HAnimSegment");
HAnimSegment1741.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid41.segments[155] = HAnimSegment1741;

HAnimSegment HAnimSegment1742 = createNode("HAnimSegment");
HAnimSegment1742.USE = "hanim_l_clavicle";
HAnimHumanoid41.segments[156] = HAnimSegment1742;

HAnimSegment HAnimSegment1743 = createNode("HAnimSegment");
HAnimSegment1743.USE = "hanim_r_clavicle";
HAnimHumanoid41.segments[157] = HAnimSegment1743;

HAnimSegment HAnimSegment1744 = createNode("HAnimSegment");
HAnimSegment1744.USE = "hanim_l_eyeball";
HAnimHumanoid41.segments[158] = HAnimSegment1744;

HAnimSegment HAnimSegment1745 = createNode("HAnimSegment");
HAnimSegment1745.USE = "hanim_r_eyeball";
HAnimHumanoid41.segments[159] = HAnimSegment1745;

HAnimSegment HAnimSegment1746 = createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_l_eyebrow";
HAnimHumanoid41.segments[160] = HAnimSegment1746;

HAnimSegment HAnimSegment1747 = createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_r_eyebrow";
HAnimHumanoid41.segments[161] = HAnimSegment1747;

HAnimSegment HAnimSegment1748 = createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_l_eyelid";
HAnimHumanoid41.segments[162] = HAnimSegment1748;

HAnimSegment HAnimSegment1749 = createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_r_eyelid";
HAnimHumanoid41.segments[163] = HAnimSegment1749;

HAnimSegment HAnimSegment1750 = createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l_forearm";
HAnimHumanoid41.segments[164] = HAnimSegment1750;

HAnimSegment HAnimSegment1751 = createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_r_forearm";
HAnimHumanoid41.segments[165] = HAnimSegment1751;

HAnimSegment HAnimSegment1752 = createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l_metacarpal_1";
HAnimHumanoid41.segments[166] = HAnimSegment1752;

HAnimSegment HAnimSegment1753 = createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_r_metacarpal_1";
HAnimHumanoid41.segments[167] = HAnimSegment1753;

HAnimSegment HAnimSegment1754 = createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l_metacarpal_2";
HAnimHumanoid41.segments[168] = HAnimSegment1754;

HAnimSegment HAnimSegment1755 = createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_r_metacarpal_2";
HAnimHumanoid41.segments[169] = HAnimSegment1755;

HAnimSegment HAnimSegment1756 = createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_metacarpal_3";
HAnimHumanoid41.segments[170] = HAnimSegment1756;

HAnimSegment HAnimSegment1757 = createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_r_metacarpal_3";
HAnimHumanoid41.segments[171] = HAnimSegment1757;

HAnimSegment HAnimSegment1758 = createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_metacarpal_4";
HAnimHumanoid41.segments[172] = HAnimSegment1758;

HAnimSegment HAnimSegment1759 = createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_r_metacarpal_4";
HAnimHumanoid41.segments[173] = HAnimSegment1759;

HAnimSegment HAnimSegment1760 = createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_metacarpal_5";
HAnimHumanoid41.segments[174] = HAnimSegment1760;

HAnimSegment HAnimSegment1761 = createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_r_metacarpal_5";
HAnimHumanoid41.segments[175] = HAnimSegment1761;

HAnimSegment HAnimSegment1762 = createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_metatarsal_2";
HAnimHumanoid41.segments[176] = HAnimSegment1762;

HAnimSegment HAnimSegment1763 = createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_r_metatarsal_2";
HAnimHumanoid41.segments[177] = HAnimSegment1763;

HAnimSegment HAnimSegment1764 = createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_scapula";
HAnimHumanoid41.segments[178] = HAnimSegment1764;

HAnimSegment HAnimSegment1765 = createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_r_scapula";
HAnimHumanoid41.segments[179] = HAnimSegment1765;

HAnimSegment HAnimSegment1766 = createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_talus";
HAnimHumanoid41.segments[180] = HAnimSegment1766;

HAnimSegment HAnimSegment1767 = createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_r_talus";
HAnimHumanoid41.segments[181] = HAnimSegment1767;

HAnimSegment HAnimSegment1768 = createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid41.segments[182] = HAnimSegment1768;

HAnimSegment HAnimSegment1769 = createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid41.segments[183] = HAnimSegment1769;

HAnimSegment HAnimSegment1770 = createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid41.segments[184] = HAnimSegment1770;

HAnimSegment HAnimSegment1771 = createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid41.segments[185] = HAnimSegment1771;

HAnimSegment HAnimSegment1772 = createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_l_thigh";
HAnimHumanoid41.segments[186] = HAnimSegment1772;

HAnimSegment HAnimSegment1773 = createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_r_thigh";
HAnimHumanoid41.segments[187] = HAnimSegment1773;

HAnimSegment HAnimSegment1774 = createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_l_upperarm";
HAnimHumanoid41.segments[188] = HAnimSegment1774;

HAnimSegment HAnimSegment1775 = createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_r_upperarm";
HAnimHumanoid41.segments[189] = HAnimSegment1775;

HAnimSite HAnimSite1776 = createNode("HAnimSite");
HAnimSite1776.USE = "hanim_crotch_pt";
HAnimHumanoid41.viewpoints[190] = HAnimSite1776;

HAnimSite HAnimSite1777 = createNode("HAnimSite");
HAnimSite1777.USE = "hanim_skull_vertex_pt";
HAnimHumanoid41.viewpoints[191] = HAnimSite1777;

HAnimSite HAnimSite1778 = createNode("HAnimSite");
HAnimSite1778.USE = "hanim_sellion_pt";
HAnimHumanoid41.viewpoints[192] = HAnimSite1778;

HAnimSite HAnimSite1779 = createNode("HAnimSite");
HAnimSite1779.USE = "hanim_supramenton_pt";
HAnimHumanoid41.viewpoints[193] = HAnimSite1779;

HAnimSite HAnimSite1780 = createNode("HAnimSite");
HAnimSite1780.USE = "hanim_nuchale_pt";
HAnimHumanoid41.viewpoints[194] = HAnimSite1780;

HAnimSite HAnimSite1781 = createNode("HAnimSite");
HAnimSite1781.USE = "hanim_suprasternale_pt";
HAnimHumanoid41.viewpoints[195] = HAnimSite1781;

HAnimSite HAnimSite1782 = createNode("HAnimSite");
HAnimSite1782.USE = "hanim_cervicale_pt";
HAnimHumanoid41.viewpoints[196] = HAnimSite1782;

HAnimSite HAnimSite1783 = createNode("HAnimSite");
HAnimSite1783.USE = "hanim_substernale_pt";
HAnimHumanoid41.viewpoints[197] = HAnimSite1783;

HAnimSite HAnimSite1784 = createNode("HAnimSite");
HAnimSite1784.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid41.viewpoints[198] = HAnimSite1784;

HAnimSite HAnimSite1785 = createNode("HAnimSite");
HAnimSite1785.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid41.viewpoints[199] = HAnimSite1785;

HAnimSite HAnimSite1786 = createNode("HAnimSite");
HAnimSite1786.USE = "hanim_navel_pt";
HAnimHumanoid41.viewpoints[200] = HAnimSite1786;

HAnimSite HAnimSite1787 = createNode("HAnimSite");
HAnimSite1787.USE = "hanim_l_acromion_pt";
HAnimHumanoid41.viewpoints[201] = HAnimSite1787;

HAnimSite HAnimSite1788 = createNode("HAnimSite");
HAnimSite1788.USE = "hanim_r_acromion_pt";
HAnimHumanoid41.viewpoints[202] = HAnimSite1788;

HAnimSite HAnimSite1789 = createNode("HAnimSite");
HAnimSite1789.USE = "hanim_r_asis_pt";
HAnimHumanoid41.viewpoints[203] = HAnimSite1789;

HAnimSite HAnimSite1790 = createNode("HAnimSite");
HAnimSite1790.USE = "hanim_l_asis_pt";
HAnimHumanoid41.viewpoints[204] = HAnimSite1790;

HAnimSite HAnimSite1791 = createNode("HAnimSite");
HAnimSite1791.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid41.viewpoints[205] = HAnimSite1791;

HAnimSite HAnimSite1792 = createNode("HAnimSite");
HAnimSite1792.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid41.viewpoints[206] = HAnimSite1792;

HAnimSite HAnimSite1793 = createNode("HAnimSite");
HAnimSite1793.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid41.viewpoints[207] = HAnimSite1793;

HAnimSite HAnimSite1794 = createNode("HAnimSite");
HAnimSite1794.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid41.viewpoints[208] = HAnimSite1794;

HAnimSite HAnimSite1795 = createNode("HAnimSite");
HAnimSite1795.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid41.viewpoints[209] = HAnimSite1795;

HAnimSite HAnimSite1796 = createNode("HAnimSite");
HAnimSite1796.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid41.viewpoints[210] = HAnimSite1796;

HAnimSite HAnimSite1797 = createNode("HAnimSite");
HAnimSite1797.USE = "hanim_l_carpal_distal_phalanx_1_pt";
HAnimHumanoid41.viewpoints[211] = HAnimSite1797;

HAnimSite HAnimSite1798 = createNode("HAnimSite");
HAnimSite1798.USE = "hanim_r_carpal_distal_phalanx_1_pt";
HAnimHumanoid41.viewpoints[212] = HAnimSite1798;

HAnimSite HAnimSite1799 = createNode("HAnimSite");
HAnimSite1799.USE = "hanim_l_carpal_distal_phalanx_2_pt";
HAnimHumanoid41.viewpoints[213] = HAnimSite1799;

HAnimSite HAnimSite1800 = createNode("HAnimSite");
HAnimSite1800.USE = "hanim_r_carpal_distal_phalanx_2_pt";
HAnimHumanoid41.viewpoints[214] = HAnimSite1800;

HAnimSite HAnimSite1801 = createNode("HAnimSite");
HAnimSite1801.USE = "hanim_l_carpal_distal_phalanx_3_pt";
HAnimHumanoid41.viewpoints[215] = HAnimSite1801;

HAnimSite HAnimSite1802 = createNode("HAnimSite");
HAnimSite1802.USE = "hanim_r_carpal_distal_phalanx_3_pt";
HAnimHumanoid41.viewpoints[216] = HAnimSite1802;

HAnimSite HAnimSite1803 = createNode("HAnimSite");
HAnimSite1803.USE = "hanim_l_carpal_distal_phalanx_4_pt";
HAnimHumanoid41.viewpoints[217] = HAnimSite1803;

HAnimSite HAnimSite1804 = createNode("HAnimSite");
HAnimSite1804.USE = "hanim_r_carpal_distal_phalanx_4_pt";
HAnimHumanoid41.viewpoints[218] = HAnimSite1804;

HAnimSite HAnimSite1805 = createNode("HAnimSite");
HAnimSite1805.USE = "hanim_l_carpal_distal_phalanx_5_pt";
HAnimHumanoid41.viewpoints[219] = HAnimSite1805;

HAnimSite HAnimSite1806 = createNode("HAnimSite");
HAnimSite1806.USE = "hanim_r_carpal_distal_phalanx_5_pt";
HAnimHumanoid41.viewpoints[220] = HAnimSite1806;

HAnimSite HAnimSite1807 = createNode("HAnimSite");
HAnimSite1807.USE = "hanim_l_clavicle_pt";
HAnimHumanoid41.viewpoints[221] = HAnimSite1807;

HAnimSite HAnimSite1808 = createNode("HAnimSite");
HAnimSite1808.USE = "hanim_r_clavicle_pt";
HAnimHumanoid41.viewpoints[222] = HAnimSite1808;

HAnimSite HAnimSite1809 = createNode("HAnimSite");
HAnimSite1809.USE = "hanim_l_dactylion_pt";
HAnimHumanoid41.viewpoints[223] = HAnimSite1809;

HAnimSite HAnimSite1810 = createNode("HAnimSite");
HAnimSite1810.USE = "hanim_r_dactylion_pt";
HAnimHumanoid41.viewpoints[224] = HAnimSite1810;

HAnimSite HAnimSite1811 = createNode("HAnimSite");
HAnimSite1811.USE = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid41.viewpoints[225] = HAnimSite1811;

HAnimSite HAnimSite1812 = createNode("HAnimSite");
HAnimSite1812.USE = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid41.viewpoints[226] = HAnimSite1812;

HAnimSite HAnimSite1813 = createNode("HAnimSite");
HAnimSite1813.USE = "hanim_l_femoral_medial_epicondyle_pt";
HAnimHumanoid41.viewpoints[227] = HAnimSite1813;

HAnimSite HAnimSite1814 = createNode("HAnimSite");
HAnimSite1814.USE = "hanim_r_femoral_medial_epicondyle_pt";
HAnimHumanoid41.viewpoints[228] = HAnimSite1814;

HAnimSite HAnimSite1815 = createNode("HAnimSite");
HAnimSite1815.USE = "hanim_l_forefoot_tip_pt";
HAnimHumanoid41.viewpoints[229] = HAnimSite1815;

HAnimSite HAnimSite1816 = createNode("HAnimSite");
HAnimSite1816.USE = "hanim_r_forefoot_tip_pt";
HAnimHumanoid41.viewpoints[230] = HAnimSite1816;

HAnimSite HAnimSite1817 = createNode("HAnimSite");
HAnimSite1817.USE = "hanim_r_gonion_pt";
HAnimHumanoid41.viewpoints[231] = HAnimSite1817;

HAnimSite HAnimSite1818 = createNode("HAnimSite");
HAnimSite1818.USE = "hanim_l_gonion_pt";
HAnimHumanoid41.viewpoints[232] = HAnimSite1818;

HAnimSite HAnimSite1819 = createNode("HAnimSite");
HAnimSite1819.USE = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid41.viewpoints[233] = HAnimSite1819;

HAnimSite HAnimSite1820 = createNode("HAnimSite");
HAnimSite1820.USE = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid41.viewpoints[234] = HAnimSite1820;

HAnimSite HAnimSite1821 = createNode("HAnimSite");
HAnimSite1821.USE = "hanim_l_humeral_medial_epicondyle_pt";
HAnimHumanoid41.viewpoints[235] = HAnimSite1821;

HAnimSite HAnimSite1822 = createNode("HAnimSite");
HAnimSite1822.USE = "hanim_r_humeral_medial_epicondyle_pt";
HAnimHumanoid41.viewpoints[236] = HAnimSite1822;

HAnimSite HAnimSite1823 = createNode("HAnimSite");
HAnimSite1823.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid41.viewpoints[237] = HAnimSite1823;

HAnimSite HAnimSite1824 = createNode("HAnimSite");
HAnimSite1824.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid41.viewpoints[238] = HAnimSite1824;

HAnimSite HAnimSite1825 = createNode("HAnimSite");
HAnimSite1825.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid41.viewpoints[239] = HAnimSite1825;

HAnimSite HAnimSite1826 = createNode("HAnimSite");
HAnimSite1826.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid41.viewpoints[240] = HAnimSite1826;

HAnimSite HAnimSite1827 = createNode("HAnimSite");
HAnimSite1827.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid41.viewpoints[241] = HAnimSite1827;

HAnimSite HAnimSite1828 = createNode("HAnimSite");
HAnimSite1828.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid41.viewpoints[242] = HAnimSite1828;

HAnimSite HAnimSite1829 = createNode("HAnimSite");
HAnimSite1829.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid41.viewpoints[243] = HAnimSite1829;

HAnimSite HAnimSite1830 = createNode("HAnimSite");
HAnimSite1830.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid41.viewpoints[244] = HAnimSite1830;

HAnimSite HAnimSite1831 = createNode("HAnimSite");
HAnimSite1831.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid41.viewpoints[245] = HAnimSite1831;

HAnimSite HAnimSite1832 = createNode("HAnimSite");
HAnimSite1832.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid41.viewpoints[246] = HAnimSite1832;

HAnimSite HAnimSite1833 = createNode("HAnimSite");
HAnimSite1833.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid41.viewpoints[247] = HAnimSite1833;

HAnimSite HAnimSite1834 = createNode("HAnimSite");
HAnimSite1834.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid41.viewpoints[248] = HAnimSite1834;

HAnimSite HAnimSite1835 = createNode("HAnimSite");
HAnimSite1835.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid41.viewpoints[249] = HAnimSite1835;

HAnimSite HAnimSite1836 = createNode("HAnimSite");
HAnimSite1836.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid41.viewpoints[250] = HAnimSite1836;

HAnimSite HAnimSite1837 = createNode("HAnimSite");
HAnimSite1837.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid41.viewpoints[251] = HAnimSite1837;

HAnimSite HAnimSite1838 = createNode("HAnimSite");
HAnimSite1838.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid41.viewpoints[252] = HAnimSite1838;

HAnimSite HAnimSite1839 = createNode("HAnimSite");
HAnimSite1839.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid41.viewpoints[253] = HAnimSite1839;

HAnimSite HAnimSite1840 = createNode("HAnimSite");
HAnimSite1840.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid41.viewpoints[254] = HAnimSite1840;

HAnimSite HAnimSite1841 = createNode("HAnimSite");
HAnimSite1841.USE = "hanim_r_neck_base_pt";
HAnimHumanoid41.viewpoints[255] = HAnimSite1841;

HAnimSite HAnimSite1842 = createNode("HAnimSite");
HAnimSite1842.USE = "hanim_l_neck_base_pt";
HAnimHumanoid41.viewpoints[256] = HAnimSite1842;

HAnimSite HAnimSite1843 = createNode("HAnimSite");
HAnimSite1843.USE = "hanim_l_olecranon_pt";
HAnimHumanoid41.viewpoints[257] = HAnimSite1843;

HAnimSite HAnimSite1844 = createNode("HAnimSite");
HAnimSite1844.USE = "hanim_r_olecranon_pt";
HAnimHumanoid41.viewpoints[258] = HAnimSite1844;

HAnimSite HAnimSite1845 = createNode("HAnimSite");
HAnimSite1845.USE = "hanim_r_psis_pt";
HAnimHumanoid41.viewpoints[259] = HAnimSite1845;

HAnimSite HAnimSite1846 = createNode("HAnimSite");
HAnimSite1846.USE = "hanim_l_psis_pt";
HAnimHumanoid41.viewpoints[260] = HAnimSite1846;

HAnimSite HAnimSite1847 = createNode("HAnimSite");
HAnimSite1847.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid41.viewpoints[261] = HAnimSite1847;

HAnimSite HAnimSite1848 = createNode("HAnimSite");
HAnimSite1848.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid41.viewpoints[262] = HAnimSite1848;

HAnimSite HAnimSite1849 = createNode("HAnimSite");
HAnimSite1849.USE = "hanim_l_radiale_pt";
HAnimHumanoid41.viewpoints[263] = HAnimSite1849;

HAnimSite HAnimSite1850 = createNode("HAnimSite");
HAnimSite1850.USE = "hanim_r_radiale_pt";
HAnimHumanoid41.viewpoints[264] = HAnimSite1850;

HAnimSite HAnimSite1851 = createNode("HAnimSite");
HAnimSite1851.USE = "hanim_r_rib10_pt";
HAnimHumanoid41.viewpoints[265] = HAnimSite1851;

HAnimSite HAnimSite1852 = createNode("HAnimSite");
HAnimSite1852.USE = "hanim_l_rib10_pt";
HAnimHumanoid41.viewpoints[266] = HAnimSite1852;

HAnimSite HAnimSite1853 = createNode("HAnimSite");
HAnimSite1853.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid41.viewpoints[267] = HAnimSite1853;

HAnimSite HAnimSite1854 = createNode("HAnimSite");
HAnimSite1854.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid41.viewpoints[268] = HAnimSite1854;

HAnimSite HAnimSite1855 = createNode("HAnimSite");
HAnimSite1855.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid41.viewpoints[269] = HAnimSite1855;

HAnimSite HAnimSite1856 = createNode("HAnimSite");
HAnimSite1856.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid41.viewpoints[270] = HAnimSite1856;

HAnimSite HAnimSite1857 = createNode("HAnimSite");
HAnimSite1857.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid41.viewpoints[271] = HAnimSite1857;

HAnimSite HAnimSite1858 = createNode("HAnimSite");
HAnimSite1858.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid41.viewpoints[272] = HAnimSite1858;

HAnimSite HAnimSite1859 = createNode("HAnimSite");
HAnimSite1859.USE = "hanim_r_thelion_pt";
HAnimHumanoid41.viewpoints[273] = HAnimSite1859;

HAnimSite HAnimSite1860 = createNode("HAnimSite");
HAnimSite1860.USE = "hanim_l_thelion_pt";
HAnimHumanoid41.viewpoints[274] = HAnimSite1860;

HAnimSite HAnimSite1861 = createNode("HAnimSite");
HAnimSite1861.USE = "hanim_r_tragion_pt";
HAnimHumanoid41.viewpoints[275] = HAnimSite1861;

HAnimSite HAnimSite1862 = createNode("HAnimSite");
HAnimSite1862.USE = "hanim_l_tragion_pt";
HAnimHumanoid41.viewpoints[276] = HAnimSite1862;

HAnimSite HAnimSite1863 = createNode("HAnimSite");
HAnimSite1863.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid41.viewpoints[277] = HAnimSite1863;

HAnimSite HAnimSite1864 = createNode("HAnimSite");
HAnimSite1864.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid41.viewpoints[278] = HAnimSite1864;

HAnimSite HAnimSite1865 = createNode("HAnimSite");
HAnimSite1865.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid41.viewpoints[279] = HAnimSite1865;

HAnimSite HAnimSite1866 = createNode("HAnimSite");
HAnimSite1866.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid41.viewpoints[280] = HAnimSite1866;

HAnimSite HAnimSite1867 = createNode("HAnimSite");
HAnimSite1867.DEF = "hanim_l_inclined_view";
HAnimSite1867.name = "l_inclined_view";
HAnimSite1867.translation = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite1867.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
TouchSensor TouchSensor1868 = createNode("TouchSensor");
TouchSensor1868.description = "HAnimSite l_inclined_view";
HAnimSite1867.children = new MFNode();

HAnimSite1867.children[0] = TouchSensor1868;

Shape Shape1869 = createNode("Shape");
Shape1869.USE = "HAnimSiteShape";
HAnimSite1867.children[1] = Shape1869;

Viewpoint Viewpoint1870 = createNode("Viewpoint");
Viewpoint1870.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1870.description = "left inclined";
Viewpoint1870.position = new SFVec3f(new float[0,0,0]);
HAnimSite1867.children[2] = Viewpoint1870;

Anchor Anchor1871 = createNode("Anchor");
Anchor1871.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1871.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
LOD LOD1872 = createNode("LOD");
LOD1872.forceTransitions = True;
LOD1872.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1873 = createNode("WorldInfo");
WorldInfo1873.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1872.children = new MFNode();

LOD1872.children[0] = WorldInfo1873;

Shape Shape1874 = createNode("Shape");
Shape1874.USE = "HAnimSiteViewpointShape";
LOD1872.children[1] = Shape1874;

Anchor1871.children = new MFNode();

Anchor1871.children[0] = LOD1872;

HAnimSite1867.children[3] = Anchor1871;

HAnimHumanoid41.viewpoints[281] = HAnimSite1867;

HAnimSite HAnimSite1875 = createNode("HAnimSite");
HAnimSite1875.DEF = "hanim_r_inclined_view";
HAnimSite1875.name = "r_inclined_view";
HAnimSite1875.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
HAnimSite1875.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
TouchSensor TouchSensor1876 = createNode("TouchSensor");
TouchSensor1876.description = "HAnimSite r_inclined_view";
HAnimSite1875.children = new MFNode();

HAnimSite1875.children[0] = TouchSensor1876;

Shape Shape1877 = createNode("Shape");
Shape1877.USE = "HAnimSiteShape";
HAnimSite1875.children[1] = Shape1877;

Viewpoint Viewpoint1878 = createNode("Viewpoint");
Viewpoint1878.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1878.description = "right inclined";
Viewpoint1878.position = new SFVec3f(new float[0,0,0]);
Viewpoint1878.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1875.children[2] = Viewpoint1878;

Anchor Anchor1879 = createNode("Anchor");
Anchor1879.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1879.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
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

HAnimSite1875.children[3] = Anchor1879;

HAnimHumanoid41.viewpoints[282] = HAnimSite1875;

HAnimSite HAnimSite1883 = createNode("HAnimSite");
HAnimSite1883.DEF = "hanim_front_view";
HAnimSite1883.name = "front_view";
HAnimSite1883.translation = new SFVec3f(new float[0,0.85,2.58]);
TouchSensor TouchSensor1884 = createNode("TouchSensor");
TouchSensor1884.description = "HAnimSite front_view";
HAnimSite1883.children = new MFNode();

HAnimSite1883.children[0] = TouchSensor1884;

Shape Shape1885 = createNode("Shape");
Shape1885.USE = "HAnimSiteShape";
HAnimSite1883.children[1] = Shape1885;

Viewpoint Viewpoint1886 = createNode("Viewpoint");
Viewpoint1886.DEF = "hanim_front_viewpoint";
Viewpoint1886.description = "front";
Viewpoint1886.position = new SFVec3f(new float[0,0,0]);
Viewpoint1886.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1883.children[2] = Viewpoint1886;

Anchor Anchor1887 = createNode("Anchor");
Anchor1887.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1887.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
LOD LOD1888 = createNode("LOD");
LOD1888.forceTransitions = True;
LOD1888.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1889 = createNode("WorldInfo");
WorldInfo1889.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1888.children = new MFNode();

LOD1888.children[0] = WorldInfo1889;

Shape Shape1890 = createNode("Shape");
Shape1890.USE = "HAnimSiteViewpointShape";
LOD1888.children[1] = Shape1890;

Anchor1887.children = new MFNode();

Anchor1887.children[0] = LOD1888;

HAnimSite1883.children[3] = Anchor1887;

HAnimHumanoid41.viewpoints[283] = HAnimSite1883;

HAnimSite HAnimSite1891 = createNode("HAnimSite");
HAnimSite1891.DEF = "hanim_back_view";
HAnimSite1891.name = "back_view";
HAnimSite1891.translation = new SFVec3f(new float[0,0.85,-2.58]);
HAnimSite1891.rotation = new SFRotation(new float[0,1,0,3.14]);
TouchSensor TouchSensor1892 = createNode("TouchSensor");
TouchSensor1892.description = "HAnimSite back_view";
HAnimSite1891.children = new MFNode();

HAnimSite1891.children[0] = TouchSensor1892;

Shape Shape1893 = createNode("Shape");
Shape1893.USE = "HAnimSiteShape";
HAnimSite1891.children[1] = Shape1893;

Viewpoint Viewpoint1894 = createNode("Viewpoint");
Viewpoint1894.DEF = "hanim_back_viewpoint";
Viewpoint1894.description = "back";
Viewpoint1894.position = new SFVec3f(new float[0,0,0]);
Viewpoint1894.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1891.children[2] = Viewpoint1894;

Anchor Anchor1895 = createNode("Anchor");
Anchor1895.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1895.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
LOD LOD1896 = createNode("LOD");
LOD1896.forceTransitions = True;
LOD1896.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1897 = createNode("WorldInfo");
WorldInfo1897.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1896.children = new MFNode();

LOD1896.children[0] = WorldInfo1897;

Shape Shape1898 = createNode("Shape");
Shape1898.USE = "HAnimSiteViewpointShape";
LOD1896.children[1] = Shape1898;

Anchor1895.children = new MFNode();

Anchor1895.children[0] = LOD1896;

HAnimSite1891.children[3] = Anchor1895;

HAnimHumanoid41.viewpoints[284] = HAnimSite1891;

HAnimSite HAnimSite1899 = createNode("HAnimSite");
HAnimSite1899.DEF = "hanim_l_side_view";
HAnimSite1899.name = "l_side_view";
HAnimSite1899.translation = new SFVec3f(new float[2.6,0.854,0]);
HAnimSite1899.rotation = new SFRotation(new float[0,1,0,1.5708]);
TouchSensor TouchSensor1900 = createNode("TouchSensor");
TouchSensor1900.description = "HAnimSite l_side_view";
HAnimSite1899.children = new MFNode();

HAnimSite1899.children[0] = TouchSensor1900;

Shape Shape1901 = createNode("Shape");
Shape1901.USE = "HAnimSiteShape";
HAnimSite1899.children[1] = Shape1901;

Viewpoint Viewpoint1902 = createNode("Viewpoint");
Viewpoint1902.DEF = "hanim_l_side_viewpoint";
Viewpoint1902.description = "left side";
Viewpoint1902.position = new SFVec3f(new float[0,0,0]);
Viewpoint1902.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1899.children[2] = Viewpoint1902;

Anchor Anchor1903 = createNode("Anchor");
Anchor1903.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1903.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
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

HAnimSite1899.children[3] = Anchor1903;

HAnimHumanoid41.viewpoints[285] = HAnimSite1899;

HAnimSite HAnimSite1907 = createNode("HAnimSite");
HAnimSite1907.DEF = "hanim_Top_view";
HAnimSite1907.name = "Top_view";
HAnimSite1907.translation = new SFVec3f(new float[0,3.5,0]);
HAnimSite1907.rotation = new SFRotation(new float[1,0,0,-1.57]);
TouchSensor TouchSensor1908 = createNode("TouchSensor");
TouchSensor1908.description = "HAnimSite Top_view";
HAnimSite1907.children = new MFNode();

HAnimSite1907.children[0] = TouchSensor1908;

Shape Shape1909 = createNode("Shape");
Shape1909.USE = "HAnimSiteShape";
HAnimSite1907.children[1] = Shape1909;

Viewpoint Viewpoint1910 = createNode("Viewpoint");
Viewpoint1910.DEF = "hanim_Top_viewpoint";
Viewpoint1910.description = "Top";
Viewpoint1910.position = new SFVec3f(new float[0,0,0]);
Viewpoint1910.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite1907.children[2] = Viewpoint1910;

Anchor Anchor1911 = createNode("Anchor");
Anchor1911.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1911.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
LOD LOD1912 = createNode("LOD");
LOD1912.forceTransitions = True;
LOD1912.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1913 = createNode("WorldInfo");
WorldInfo1913.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1912.children = new MFNode();

LOD1912.children[0] = WorldInfo1913;

Shape Shape1914 = createNode("Shape");
Shape1914.USE = "HAnimSiteViewpointShape";
LOD1912.children[1] = Shape1914;

Anchor1911.children = new MFNode();

Anchor1911.children[0] = LOD1912;

HAnimSite1907.children[3] = Anchor1911;

HAnimHumanoid41.viewpoints[286] = HAnimSite1907;

HAnimSite HAnimSite1915 = createNode("HAnimSite");
HAnimSite1915.DEF = "hanim_front_close_view";
HAnimSite1915.name = "front_close_view";
HAnimSite1915.translation = new SFVec3f(new float[0,0.854,1.575]);
TouchSensor TouchSensor1916 = createNode("TouchSensor");
TouchSensor1916.description = "HAnimSite front_close_view";
HAnimSite1915.children = new MFNode();

HAnimSite1915.children[0] = TouchSensor1916;

Shape Shape1917 = createNode("Shape");
Shape1917.USE = "HAnimSiteShape";
HAnimSite1915.children[1] = Shape1917;

Viewpoint Viewpoint1918 = createNode("Viewpoint");
Viewpoint1918.DEF = "hanim_front_close_viewpoint";
Viewpoint1918.description = "front close";
Viewpoint1918.position = new SFVec3f(new float[0,0,0]);
Viewpoint1918.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
HAnimSite1915.children[2] = Viewpoint1918;

Anchor Anchor1919 = createNode("Anchor");
Anchor1919.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1919.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
LOD LOD1920 = createNode("LOD");
LOD1920.forceTransitions = True;
LOD1920.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1921 = createNode("WorldInfo");
WorldInfo1921.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1920.children = new MFNode();

LOD1920.children[0] = WorldInfo1921;

Shape Shape1922 = createNode("Shape");
Shape1922.USE = "HAnimSiteViewpointShape";
LOD1920.children[1] = Shape1922;

Anchor1919.children = new MFNode();

Anchor1919.children[0] = LOD1920;

HAnimSite1915.children[3] = Anchor1919;

HAnimHumanoid41.viewpoints[287] = HAnimSite1915;

HAnimSite HAnimSite1923 = createNode("HAnimSite");
HAnimSite1923.DEF = "hanim_side_close_view";
HAnimSite1923.name = "side_close_view";
HAnimSite1923.translation = new SFVec3f(new float[1.56,0.854,0]);
HAnimSite1923.rotation = new SFRotation(new float[0,1,0,1.5708]);
TouchSensor TouchSensor1924 = createNode("TouchSensor");
TouchSensor1924.description = "HAnimSite side_close_view";
HAnimSite1923.children = new MFNode();

HAnimSite1923.children[0] = TouchSensor1924;

Shape Shape1925 = createNode("Shape");
Shape1925.USE = "HAnimSiteShape";
HAnimSite1923.children[1] = Shape1925;

Viewpoint Viewpoint1926 = createNode("Viewpoint");
Viewpoint1926.DEF = "hanim_side_close_viewpoint";
Viewpoint1926.description = "side close";
Viewpoint1926.position = new SFVec3f(new float[0,0,0]);
Viewpoint1926.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
HAnimSite1923.children[2] = Viewpoint1926;

Anchor Anchor1927 = createNode("Anchor");
Anchor1927.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1927.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
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

HAnimSite1923.children[3] = Anchor1927;

HAnimHumanoid41.viewpoints[288] = HAnimSite1923;

HAnimSite HAnimSite1931 = createNode("HAnimSite");
HAnimSite1931.DEF = "hanim_head_front_close_view";
HAnimSite1931.name = "head_front_close_view";
HAnimSite1931.translation = new SFVec3f(new float[0,1.5,1]);
TouchSensor TouchSensor1932 = createNode("TouchSensor");
TouchSensor1932.description = "HAnimSite head_front_close_view";
HAnimSite1931.children = new MFNode();

HAnimSite1931.children[0] = TouchSensor1932;

Shape Shape1933 = createNode("Shape");
Shape1933.USE = "HAnimSiteShape";
HAnimSite1931.children[1] = Shape1933;

Viewpoint Viewpoint1934 = createNode("Viewpoint");
Viewpoint1934.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1934.description = "head front close";
Viewpoint1934.position = new SFVec3f(new float[0,0,0]);
Viewpoint1934.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite1931.children[2] = Viewpoint1934;

Anchor Anchor1935 = createNode("Anchor");
Anchor1935.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1935.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
LOD LOD1936 = createNode("LOD");
LOD1936.forceTransitions = True;
LOD1936.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1937 = createNode("WorldInfo");
WorldInfo1937.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1936.children = new MFNode();

LOD1936.children[0] = WorldInfo1937;

Shape Shape1938 = createNode("Shape");
Shape1938.USE = "HAnimSiteViewpointShape";
LOD1936.children[1] = Shape1938;

Anchor1935.children = new MFNode();

Anchor1935.children[0] = LOD1936;

HAnimSite1931.children[3] = Anchor1935;

HAnimHumanoid41.viewpoints[289] = HAnimSite1931;

HAnimSite HAnimSite1939 = createNode("HAnimSite");
HAnimSite1939.DEF = "hanim_chest_front_close_view";
HAnimSite1939.name = "chest_front_close_view";
HAnimSite1939.translation = new SFVec3f(new float[0,1.2,1]);
TouchSensor TouchSensor1940 = createNode("TouchSensor");
TouchSensor1940.description = "HAnimSite chest_front_close_view";
HAnimSite1939.children = new MFNode();

HAnimSite1939.children[0] = TouchSensor1940;

Shape Shape1941 = createNode("Shape");
Shape1941.USE = "HAnimSiteShape";
HAnimSite1939.children[1] = Shape1941;

Viewpoint Viewpoint1942 = createNode("Viewpoint");
Viewpoint1942.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1942.description = "chest front close";
Viewpoint1942.position = new SFVec3f(new float[0,0,0]);
Viewpoint1942.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite1939.children[2] = Viewpoint1942;

Anchor Anchor1943 = createNode("Anchor");
Anchor1943.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1943.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
LOD LOD1944 = createNode("LOD");
LOD1944.forceTransitions = True;
LOD1944.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1945 = createNode("WorldInfo");
WorldInfo1945.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1944.children = new MFNode();

LOD1944.children[0] = WorldInfo1945;

Shape Shape1946 = createNode("Shape");
Shape1946.USE = "HAnimSiteViewpointShape";
LOD1944.children[1] = Shape1946;

Anchor1943.children = new MFNode();

Anchor1943.children[0] = LOD1944;

HAnimSite1939.children[3] = Anchor1943;

HAnimHumanoid41.viewpoints[290] = HAnimSite1939;

HAnimSite HAnimSite1947 = createNode("HAnimSite");
HAnimSite1947.DEF = "hanim_pelvis_front_close_view";
HAnimSite1947.name = "pelvis_front_close_view";
HAnimSite1947.translation = new SFVec3f(new float[0,0.8,1]);
TouchSensor TouchSensor1948 = createNode("TouchSensor");
TouchSensor1948.description = "HAnimSite pelvis_front_close_view";
HAnimSite1947.children = new MFNode();

HAnimSite1947.children[0] = TouchSensor1948;

Shape Shape1949 = createNode("Shape");
Shape1949.USE = "HAnimSiteShape";
HAnimSite1947.children[1] = Shape1949;

Viewpoint Viewpoint1950 = createNode("Viewpoint");
Viewpoint1950.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1950.description = "pelvis front close";
Viewpoint1950.position = new SFVec3f(new float[0,0,0]);
Viewpoint1950.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite1947.children[2] = Viewpoint1950;

Anchor Anchor1951 = createNode("Anchor");
Anchor1951.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1951.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
LOD LOD1952 = createNode("LOD");
LOD1952.forceTransitions = True;
LOD1952.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1953 = createNode("WorldInfo");
WorldInfo1953.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1952.children = new MFNode();

LOD1952.children[0] = WorldInfo1953;

Shape Shape1954 = createNode("Shape");
Shape1954.USE = "HAnimSiteViewpointShape";
LOD1952.children[1] = Shape1954;

Anchor1951.children = new MFNode();

Anchor1951.children[0] = LOD1952;

HAnimSite1947.children[3] = Anchor1951;

HAnimHumanoid41.viewpoints[291] = HAnimSite1947;

HAnimSite HAnimSite1955 = createNode("HAnimSite");
HAnimSite1955.DEF = "hanim_knees_front_close_view";
HAnimSite1955.name = "knees_front_close_view";
HAnimSite1955.translation = new SFVec3f(new float[0,0.4,1]);
TouchSensor TouchSensor1956 = createNode("TouchSensor");
TouchSensor1956.description = "HAnimSite knees_front_close_view";
HAnimSite1955.children = new MFNode();

HAnimSite1955.children[0] = TouchSensor1956;

Shape Shape1957 = createNode("Shape");
Shape1957.USE = "HAnimSiteShape";
HAnimSite1955.children[1] = Shape1957;

Viewpoint Viewpoint1958 = createNode("Viewpoint");
Viewpoint1958.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1958.description = "knees front close";
Viewpoint1958.position = new SFVec3f(new float[0,0,0]);
Viewpoint1958.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
HAnimSite1955.children[2] = Viewpoint1958;

Anchor Anchor1959 = createNode("Anchor");
Anchor1959.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1959.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
LOD LOD1960 = createNode("LOD");
LOD1960.forceTransitions = True;
LOD1960.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1961 = createNode("WorldInfo");
WorldInfo1961.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1960.children = new MFNode();

LOD1960.children[0] = WorldInfo1961;

Shape Shape1962 = createNode("Shape");
Shape1962.USE = "HAnimSiteViewpointShape";
LOD1960.children[1] = Shape1962;

Anchor1959.children = new MFNode();

Anchor1959.children[0] = LOD1960;

HAnimSite1955.children[3] = Anchor1959;

HAnimHumanoid41.viewpoints[292] = HAnimSite1955;

HAnimSite HAnimSite1963 = createNode("HAnimSite");
HAnimSite1963.DEF = "hanim_feet_front_close_view";
HAnimSite1963.name = "feet_front_close_view";
HAnimSite1963.translation = new SFVec3f(new float[0,0,1]);
TouchSensor TouchSensor1964 = createNode("TouchSensor");
TouchSensor1964.description = "HAnimSite feet_front_close_view";
HAnimSite1963.children = new MFNode();

HAnimSite1963.children[0] = TouchSensor1964;

Shape Shape1965 = createNode("Shape");
Shape1965.USE = "HAnimSiteShape";
HAnimSite1963.children[1] = Shape1965;

Viewpoint Viewpoint1966 = createNode("Viewpoint");
Viewpoint1966.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1966.description = "feet front close";
Viewpoint1966.position = new SFVec3f(new float[0,0,0]);
HAnimSite1963.children[2] = Viewpoint1966;

Anchor Anchor1967 = createNode("Anchor");
Anchor1967.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1967.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
LOD LOD1968 = createNode("LOD");
LOD1968.forceTransitions = True;
LOD1968.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1969 = createNode("WorldInfo");
WorldInfo1969.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1968.children = new MFNode();

LOD1968.children[0] = WorldInfo1969;

Shape Shape1970 = createNode("Shape");
Shape1970.USE = "HAnimSiteViewpointShape";
LOD1968.children[1] = Shape1970;

Anchor1967.children = new MFNode();

Anchor1967.children[0] = LOD1968;

HAnimSite1963.children[3] = Anchor1967;

HAnimHumanoid41.viewpoints[293] = HAnimSite1963;

HAnimSite HAnimSite1971 = createNode("HAnimSite");
HAnimSite1971.DEF = "hanim_eye_level_view";
HAnimSite1971.name = "eye_level_view";
HAnimSite1971.translation = new SFVec3f(new float[0,1.6332,0.0502]);
TouchSensor TouchSensor1972 = createNode("TouchSensor");
TouchSensor1972.description = "HAnimSite eye_level_view";
HAnimSite1971.children = new MFNode();

HAnimSite1971.children[0] = TouchSensor1972;

Shape Shape1973 = createNode("Shape");
Shape1973.USE = "HAnimSiteShape";
HAnimSite1971.children[1] = Shape1973;

Viewpoint Viewpoint1974 = createNode("Viewpoint");
Viewpoint1974.DEF = "hanim_eye_level_viewpoint";
Viewpoint1974.description = "eye level looking forward";
Viewpoint1974.position = new SFVec3f(new float[0,0,0]);
Viewpoint1974.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite1971.children[2] = Viewpoint1974;

Anchor Anchor1975 = createNode("Anchor");
Anchor1975.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1975.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
LOD LOD1976 = createNode("LOD");
LOD1976.forceTransitions = True;
LOD1976.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1977 = createNode("WorldInfo");
WorldInfo1977.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1976.children = new MFNode();

LOD1976.children[0] = WorldInfo1977;

Shape Shape1978 = createNode("Shape");
Shape1978.USE = "HAnimSiteViewpointShape";
LOD1976.children[1] = Shape1978;

Anchor1975.children = new MFNode();

Anchor1975.children[0] = LOD1976;

HAnimSite1971.children[3] = Anchor1975;

HAnimHumanoid41.viewpoints[294] = HAnimSite1971;

HAnimSite HAnimSite1979 = createNode("HAnimSite");
HAnimSite1979.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid41.viewpoints[295] = HAnimSite1979;

HAnimSite HAnimSite1980 = createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid41.viewpoints[296] = HAnimSite1980;

HAnimSite HAnimSite1981 = createNode("HAnimSite");
HAnimSite1981.USE = "hanim_l_hand_front_view";
HAnimHumanoid41.viewpoints[297] = HAnimSite1981;

HAnimSite HAnimSite1982 = createNode("HAnimSite");
HAnimSite1982.USE = "hanim_r_hand_front_view";
HAnimHumanoid41.viewpoints[298] = HAnimSite1982;

children[12] = HAnimHumanoid41;

}
